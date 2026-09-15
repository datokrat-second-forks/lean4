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
lean_object* l_EIO_toEST___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_EIO_mk___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_EST_bind___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_uint32_dec_eq(uint32_t, uint32_t);
lean_object* l_Lake_OutStream_get(lean_object*);
uint8_t l_Lake_AnsiMode_isEnabled(lean_object*, uint8_t);
lean_object* l_Lake_logToStream(lean_object*, lean_object*, uint8_t, uint8_t);
lean_object* l_Lake_LoggerIO_toBaseIO___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_io_error_to_string(lean_object*);
lean_object* l_Lake_OutStream_logEntry(lean_object*, lean_object*, uint8_t, uint8_t);
lean_object* l_Lake_LogIO_toBaseIO___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_EIO_toBaseIO___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
size_t lean_usize_add(size_t, size_t);
uint8_t l_Lake_Log_maxLv(lean_object*);
uint8_t l_Lake_instOrdLogLevel_ord(uint8_t, uint8_t);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
static const lean_closure_object l_Lake_instMonadMainM___aux__1___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_EIO_mk___boxed, .m_arity = 4, .m_num_fixed = 2, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lake_instMonadMainM___aux__1___redArg___lam__0___closed__0 = (const lean_object*)&l_Lake_instMonadMainM___aux__1___redArg___lam__0___closed__0_value;
static const lean_closure_object l_Lake_instMonadMainM___aux__1___redArg___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_EIO_toEST___boxed, .m_arity = 4, .m_num_fixed = 2, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lake_instMonadMainM___aux__1___redArg___lam__0___closed__1 = (const lean_object*)&l_Lake_instMonadMainM___aux__1___redArg___lam__0___closed__1_value;
static const lean_ctor_object l_Lake_instMonadMainM___aux__1___redArg___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake_instMonadMainM___aux__1___redArg___lam__0___closed__0_value),((lean_object*)&l_Lake_instMonadMainM___aux__1___redArg___lam__0___closed__1_value)}};
static const lean_object* l_Lake_instMonadMainM___aux__1___redArg___lam__0___closed__2 = (const lean_object*)&l_Lake_instMonadMainM___aux__1___redArg___lam__0___closed__2_value;
LEAN_EXPORT lean_object* l_Lake_instMonadMainM___aux__1___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lake_instMonadMainM___aux__1___redArg___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instMonadMainM___aux__1___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lake_instMonadMainM___aux__1___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_instMonadMainM___aux__1___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lake_instMonadMainM___aux__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instMonadMainM___aux__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instMonadMainM___aux__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instMonadMainM___aux__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instMonadMainM___aux__3___redArg___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instMonadMainM___aux__3___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instMonadMainM___aux__3___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instMonadMainM___aux__3___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instMonadMainM___aux__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instMonadMainM___aux__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instMonadMainM___aux__5___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lake_instMonadMainM___aux__5___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instMonadMainM___aux__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instMonadMainM___aux__5___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instMonadMainM___aux__7___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instMonadMainM___aux__7___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lake_instMonadMainM___aux__7___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_instMonadMainM___aux__1___redArg___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_instMonadMainM___aux__7___redArg___closed__0 = (const lean_object*)&l_Lake_instMonadMainM___aux__7___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_instMonadMainM___aux__7___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instMonadMainM___aux__7___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instMonadMainM___aux__7(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instMonadMainM___aux__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instMonadMainM___aux__9___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instMonadMainM___aux__9___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instMonadMainM___aux__9___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instMonadMainM___aux__9___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instMonadMainM___aux__9(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instMonadMainM___aux__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instMonadMainM___aux__11___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instMonadMainM___aux__11___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instMonadMainM___aux__11___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instMonadMainM___aux__11___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instMonadMainM___aux__11(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instMonadMainM___aux__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instMonadMainM___aux__13___redArg___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instMonadMainM___aux__13___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
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
LEAN_EXPORT lean_object* l_Lake_instMonadFinallyMainM___aux__1___redArg___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instMonadFinallyMainM___aux__1___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instMonadFinallyMainM___aux__1___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instMonadFinallyMainM___aux__1___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lake_instMonadFinallyMainM___aux__1___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_instMonadFinallyMainM___aux__1___redArg___closed__0;
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
LEAN_EXPORT lean_object* l_Lake_MainM_error___redArg___lam__1(uint32_t);
LEAN_EXPORT lean_object* l_Lake_MainM_error___redArg___lam__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_MainM_error___redArg___lam__0(lean_object*, lean_object*, uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_Lake_MainM_error___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_MainM_error___redArg___lam__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_MainM_error___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_MainM_error___redArg(lean_object*, uint32_t);
LEAN_EXPORT lean_object* l_Lake_MainM_error___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_MainM_error(lean_object*, lean_object*, uint32_t);
LEAN_EXPORT lean_object* l_Lake_MainM_error___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_MainM_instMonadError___lam__1(uint32_t);
LEAN_EXPORT lean_object* l_Lake_MainM_instMonadError___lam__1___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lake_MainM_instMonadError___lam__3___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_MainM_instMonadError___lam__3___closed__0;
LEAN_EXPORT lean_object* l_Lake_MainM_instMonadError___lam__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_MainM_instMonadError___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lake_MainM_instMonadError___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_MainM_instMonadError___lam__3___boxed, .m_arity = 4, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lake_instMonadMainM___aux__7___redArg___closed__0_value)} };
static const lean_object* l_Lake_MainM_instMonadError___closed__0 = (const lean_object*)&l_Lake_MainM_instMonadError___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_MainM_instMonadError = (const lean_object*)&l_Lake_MainM_instMonadError___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_MainM_instMonadLiftIO___lam__1(lean_object*);
LEAN_EXPORT lean_object* l_Lake_MainM_instMonadLiftIO___lam__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_MainM_instMonadLiftIO___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_MainM_instMonadLiftIO___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_MainM_instMonadLiftIO___lam__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_MainM_instMonadLiftIO___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lake_MainM_instMonadLiftIO___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_MainM_instMonadLiftIO___lam__2___boxed, .m_arity = 4, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lake_instMonadMainM___aux__7___redArg___closed__0_value)} };
static const lean_object* l_Lake_MainM_instMonadLiftIO___closed__0 = (const lean_object*)&l_Lake_MainM_instMonadLiftIO___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_MainM_instMonadLiftIO = (const lean_object*)&l_Lake_MainM_instMonadLiftIO___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_MainM_runLogIO___redArg___lam__1(lean_object*);
LEAN_EXPORT lean_object* l_Lake_MainM_runLogIO___redArg___lam__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_MainM_runLogIO___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_MainM_runLogIO___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_MainM_runLogIO___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_MainM_runLogIO___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_MainM_runLogIO(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_MainM_runLogIO___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_MainM_liftLogIO_spec__0(lean_object*, uint8_t, uint8_t, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_MainM_liftLogIO_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lake_MainM_liftLogIO___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lake_MainM_liftLogIO___redArg___closed__0 = (const lean_object*)&l_Lake_MainM_liftLogIO___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_MainM_liftLogIO___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lake_MainM_liftLogIO___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_MainM_liftLogIO(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_MainM_liftLogIO___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lake_MainM_instMonadLiftLogIO___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_MainM_liftLogIO___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_MainM_instMonadLiftLogIO___closed__0 = (const lean_object*)&l_Lake_MainM_instMonadLiftLogIO___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_MainM_instMonadLiftLogIO = (const lean_object*)&l_Lake_MainM_instMonadLiftLogIO___closed__0_value;
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
LEAN_EXPORT lean_object* l_Lake_instMonadMainM___aux__1___redArg___lam__0(lean_object* v_00_u03b1_6_){
_start:
{
lean_object* v___x_7_; 
v___x_7_ = ((lean_object*)(l_Lake_instMonadMainM___aux__1___redArg___lam__0___closed__2));
return v___x_7_;
}
}
LEAN_EXPORT lean_object* l_Lake_instMonadMainM___aux__1___redArg___lam__1(lean_object* v_invFun_8_, lean_object* v_x_9_, lean_object* v_f_10_){
_start:
{
lean_object* v___x_12_; 
v___x_12_ = lean_apply_2(v_invFun_8_, v_x_9_, lean_box(0));
if (lean_obj_tag(v___x_12_) == 0)
{
lean_object* v_a_13_; lean_object* v___x_15_; uint8_t v_isShared_16_; uint8_t v_isSharedCheck_21_; 
v_a_13_ = lean_ctor_get(v___x_12_, 0);
v_isSharedCheck_21_ = !lean_is_exclusive(v___x_12_);
if (v_isSharedCheck_21_ == 0)
{
v___x_15_ = v___x_12_;
v_isShared_16_ = v_isSharedCheck_21_;
goto v_resetjp_14_;
}
else
{
lean_inc(v_a_13_);
lean_dec(v___x_12_);
v___x_15_ = lean_box(0);
v_isShared_16_ = v_isSharedCheck_21_;
goto v_resetjp_14_;
}
v_resetjp_14_:
{
lean_object* v___x_17_; lean_object* v___x_19_; 
v___x_17_ = lean_apply_1(v_f_10_, v_a_13_);
if (v_isShared_16_ == 0)
{
lean_ctor_set(v___x_15_, 0, v___x_17_);
v___x_19_ = v___x_15_;
goto v_reusejp_18_;
}
else
{
lean_object* v_reuseFailAlloc_20_; 
v_reuseFailAlloc_20_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_20_, 0, v___x_17_);
v___x_19_ = v_reuseFailAlloc_20_;
goto v_reusejp_18_;
}
v_reusejp_18_:
{
return v___x_19_;
}
}
}
else
{
lean_object* v_a_22_; lean_object* v___x_24_; uint8_t v_isShared_25_; uint8_t v_isSharedCheck_29_; 
lean_dec(v_f_10_);
v_a_22_ = lean_ctor_get(v___x_12_, 0);
v_isSharedCheck_29_ = !lean_is_exclusive(v___x_12_);
if (v_isSharedCheck_29_ == 0)
{
v___x_24_ = v___x_12_;
v_isShared_25_ = v_isSharedCheck_29_;
goto v_resetjp_23_;
}
else
{
lean_inc(v_a_22_);
lean_dec(v___x_12_);
v___x_24_ = lean_box(0);
v_isShared_25_ = v_isSharedCheck_29_;
goto v_resetjp_23_;
}
v_resetjp_23_:
{
lean_object* v___x_27_; 
if (v_isShared_25_ == 0)
{
v___x_27_ = v___x_24_;
goto v_reusejp_26_;
}
else
{
lean_object* v_reuseFailAlloc_28_; 
v_reuseFailAlloc_28_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_28_, 0, v_a_22_);
v___x_27_ = v_reuseFailAlloc_28_;
goto v_reusejp_26_;
}
v_reusejp_26_:
{
return v___x_27_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_instMonadMainM___aux__1___redArg___lam__1___boxed(lean_object* v_invFun_30_, lean_object* v_x_31_, lean_object* v_f_32_, lean_object* v___y_33_){
_start:
{
lean_object* v_res_34_; 
v_res_34_ = l_Lake_instMonadMainM___aux__1___redArg___lam__1(v_invFun_30_, v_x_31_, v_f_32_);
return v_res_34_;
}
}
static lean_object* _init_l_Lake_instMonadMainM___aux__1___redArg___closed__0(void){
_start:
{
lean_object* v___x_35_; 
v___x_35_ = l_Lake_instMonadMainM___aux__1___redArg___lam__0(lean_box(0));
return v___x_35_;
}
}
LEAN_EXPORT lean_object* l_Lake_instMonadMainM___aux__1___redArg(lean_object* v_f_36_, lean_object* v_x_37_){
_start:
{
lean_object* v___x_39_; lean_object* v_toFun_40_; lean_object* v_invFun_41_; lean_object* v___f_42_; lean_object* v___x_43_; 
v___x_39_ = lean_obj_once(&l_Lake_instMonadMainM___aux__1___redArg___closed__0, &l_Lake_instMonadMainM___aux__1___redArg___closed__0_once, _init_l_Lake_instMonadMainM___aux__1___redArg___closed__0);
v_toFun_40_ = lean_ctor_get(v___x_39_, 0);
v_invFun_41_ = lean_ctor_get(v___x_39_, 1);
lean_inc(v_invFun_41_);
v___f_42_ = lean_alloc_closure((void*)(l_Lake_instMonadMainM___aux__1___redArg___lam__1___boxed), 4, 3);
lean_closure_set(v___f_42_, 0, v_invFun_41_);
lean_closure_set(v___f_42_, 1, v_x_37_);
lean_closure_set(v___f_42_, 2, v_f_36_);
lean_inc(v_toFun_40_);
v___x_43_ = lean_apply_2(v_toFun_40_, v___f_42_, lean_box(0));
return v___x_43_;
}
}
LEAN_EXPORT lean_object* l_Lake_instMonadMainM___aux__1___redArg___boxed(lean_object* v_f_44_, lean_object* v_x_45_, lean_object* v___y_46_){
_start:
{
lean_object* v_res_47_; 
v_res_47_ = l_Lake_instMonadMainM___aux__1___redArg(v_f_44_, v_x_45_);
return v_res_47_;
}
}
LEAN_EXPORT lean_object* l_Lake_instMonadMainM___aux__1(lean_object* v_00_u03b1_48_, lean_object* v_00_u03b2_49_, lean_object* v_f_50_, lean_object* v_x_51_){
_start:
{
lean_object* v___x_53_; lean_object* v_toFun_54_; lean_object* v_invFun_55_; lean_object* v___f_56_; lean_object* v___x_57_; 
v___x_53_ = lean_obj_once(&l_Lake_instMonadMainM___aux__1___redArg___closed__0, &l_Lake_instMonadMainM___aux__1___redArg___closed__0_once, _init_l_Lake_instMonadMainM___aux__1___redArg___closed__0);
v_toFun_54_ = lean_ctor_get(v___x_53_, 0);
v_invFun_55_ = lean_ctor_get(v___x_53_, 1);
lean_inc(v_invFun_55_);
v___f_56_ = lean_alloc_closure((void*)(l_Lake_instMonadMainM___aux__1___redArg___lam__1___boxed), 4, 3);
lean_closure_set(v___f_56_, 0, v_invFun_55_);
lean_closure_set(v___f_56_, 1, v_x_51_);
lean_closure_set(v___f_56_, 2, v_f_50_);
lean_inc(v_toFun_54_);
v___x_57_ = lean_apply_2(v_toFun_54_, v___f_56_, lean_box(0));
return v___x_57_;
}
}
LEAN_EXPORT lean_object* l_Lake_instMonadMainM___aux__1___boxed(lean_object* v_00_u03b1_58_, lean_object* v_00_u03b2_59_, lean_object* v_f_60_, lean_object* v_x_61_, lean_object* v___y_62_){
_start:
{
lean_object* v_res_63_; 
v_res_63_ = l_Lake_instMonadMainM___aux__1(v_00_u03b1_58_, v_00_u03b2_59_, v_f_60_, v_x_61_);
return v_res_63_;
}
}
LEAN_EXPORT lean_object* l_Lake_instMonadMainM___aux__3___redArg___lam__1(lean_object* v_invFun_64_, lean_object* v_x_65_, lean_object* v_a_66_){
_start:
{
lean_object* v___x_68_; 
v___x_68_ = lean_apply_2(v_invFun_64_, v_x_65_, lean_box(0));
if (lean_obj_tag(v___x_68_) == 0)
{
lean_object* v___x_70_; uint8_t v_isShared_71_; uint8_t v_isSharedCheck_75_; 
v_isSharedCheck_75_ = !lean_is_exclusive(v___x_68_);
if (v_isSharedCheck_75_ == 0)
{
lean_object* v_unused_76_; 
v_unused_76_ = lean_ctor_get(v___x_68_, 0);
lean_dec(v_unused_76_);
v___x_70_ = v___x_68_;
v_isShared_71_ = v_isSharedCheck_75_;
goto v_resetjp_69_;
}
else
{
lean_dec(v___x_68_);
v___x_70_ = lean_box(0);
v_isShared_71_ = v_isSharedCheck_75_;
goto v_resetjp_69_;
}
v_resetjp_69_:
{
lean_object* v___x_73_; 
if (v_isShared_71_ == 0)
{
lean_ctor_set(v___x_70_, 0, v_a_66_);
v___x_73_ = v___x_70_;
goto v_reusejp_72_;
}
else
{
lean_object* v_reuseFailAlloc_74_; 
v_reuseFailAlloc_74_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_74_, 0, v_a_66_);
v___x_73_ = v_reuseFailAlloc_74_;
goto v_reusejp_72_;
}
v_reusejp_72_:
{
return v___x_73_;
}
}
}
else
{
lean_object* v_a_77_; lean_object* v___x_79_; uint8_t v_isShared_80_; uint8_t v_isSharedCheck_84_; 
lean_dec(v_a_66_);
v_a_77_ = lean_ctor_get(v___x_68_, 0);
v_isSharedCheck_84_ = !lean_is_exclusive(v___x_68_);
if (v_isSharedCheck_84_ == 0)
{
v___x_79_ = v___x_68_;
v_isShared_80_ = v_isSharedCheck_84_;
goto v_resetjp_78_;
}
else
{
lean_inc(v_a_77_);
lean_dec(v___x_68_);
v___x_79_ = lean_box(0);
v_isShared_80_ = v_isSharedCheck_84_;
goto v_resetjp_78_;
}
v_resetjp_78_:
{
lean_object* v___x_82_; 
if (v_isShared_80_ == 0)
{
v___x_82_ = v___x_79_;
goto v_reusejp_81_;
}
else
{
lean_object* v_reuseFailAlloc_83_; 
v_reuseFailAlloc_83_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_83_, 0, v_a_77_);
v___x_82_ = v_reuseFailAlloc_83_;
goto v_reusejp_81_;
}
v_reusejp_81_:
{
return v___x_82_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_instMonadMainM___aux__3___redArg___lam__1___boxed(lean_object* v_invFun_85_, lean_object* v_x_86_, lean_object* v_a_87_, lean_object* v___y_88_){
_start:
{
lean_object* v_res_89_; 
v_res_89_ = l_Lake_instMonadMainM___aux__3___redArg___lam__1(v_invFun_85_, v_x_86_, v_a_87_);
return v_res_89_;
}
}
LEAN_EXPORT lean_object* l_Lake_instMonadMainM___aux__3___redArg(lean_object* v_a_90_, lean_object* v_x_91_){
_start:
{
lean_object* v___x_93_; lean_object* v_toFun_94_; lean_object* v_invFun_95_; lean_object* v___f_96_; lean_object* v___x_97_; 
v___x_93_ = lean_obj_once(&l_Lake_instMonadMainM___aux__1___redArg___closed__0, &l_Lake_instMonadMainM___aux__1___redArg___closed__0_once, _init_l_Lake_instMonadMainM___aux__1___redArg___closed__0);
v_toFun_94_ = lean_ctor_get(v___x_93_, 0);
v_invFun_95_ = lean_ctor_get(v___x_93_, 1);
lean_inc(v_invFun_95_);
v___f_96_ = lean_alloc_closure((void*)(l_Lake_instMonadMainM___aux__3___redArg___lam__1___boxed), 4, 3);
lean_closure_set(v___f_96_, 0, v_invFun_95_);
lean_closure_set(v___f_96_, 1, v_x_91_);
lean_closure_set(v___f_96_, 2, v_a_90_);
lean_inc(v_toFun_94_);
v___x_97_ = lean_apply_2(v_toFun_94_, v___f_96_, lean_box(0));
return v___x_97_;
}
}
LEAN_EXPORT lean_object* l_Lake_instMonadMainM___aux__3___redArg___boxed(lean_object* v_a_98_, lean_object* v_x_99_, lean_object* v___y_100_){
_start:
{
lean_object* v_res_101_; 
v_res_101_ = l_Lake_instMonadMainM___aux__3___redArg(v_a_98_, v_x_99_);
return v_res_101_;
}
}
LEAN_EXPORT lean_object* l_Lake_instMonadMainM___aux__3(lean_object* v_00_u03b1_102_, lean_object* v_00_u03b2_103_, lean_object* v_a_104_, lean_object* v_x_105_){
_start:
{
lean_object* v___x_107_; lean_object* v_toFun_108_; lean_object* v_invFun_109_; lean_object* v___f_110_; lean_object* v___x_111_; 
v___x_107_ = lean_obj_once(&l_Lake_instMonadMainM___aux__1___redArg___closed__0, &l_Lake_instMonadMainM___aux__1___redArg___closed__0_once, _init_l_Lake_instMonadMainM___aux__1___redArg___closed__0);
v_toFun_108_ = lean_ctor_get(v___x_107_, 0);
v_invFun_109_ = lean_ctor_get(v___x_107_, 1);
lean_inc(v_invFun_109_);
v___f_110_ = lean_alloc_closure((void*)(l_Lake_instMonadMainM___aux__3___redArg___lam__1___boxed), 4, 3);
lean_closure_set(v___f_110_, 0, v_invFun_109_);
lean_closure_set(v___f_110_, 1, v_x_105_);
lean_closure_set(v___f_110_, 2, v_a_104_);
lean_inc(v_toFun_108_);
v___x_111_ = lean_apply_2(v_toFun_108_, v___f_110_, lean_box(0));
return v___x_111_;
}
}
LEAN_EXPORT lean_object* l_Lake_instMonadMainM___aux__3___boxed(lean_object* v_00_u03b1_112_, lean_object* v_00_u03b2_113_, lean_object* v_a_114_, lean_object* v_x_115_, lean_object* v___y_116_){
_start:
{
lean_object* v_res_117_; 
v_res_117_ = l_Lake_instMonadMainM___aux__3(v_00_u03b1_112_, v_00_u03b2_113_, v_a_114_, v_x_115_);
return v_res_117_;
}
}
LEAN_EXPORT lean_object* l_Lake_instMonadMainM___aux__5___redArg(lean_object* v_a_118_){
_start:
{
lean_object* v___x_120_; 
v___x_120_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_120_, 0, v_a_118_);
return v___x_120_;
}
}
LEAN_EXPORT lean_object* l_Lake_instMonadMainM___aux__5___redArg___boxed(lean_object* v_a_121_, lean_object* v___y_122_){
_start:
{
lean_object* v_res_123_; 
v_res_123_ = l_Lake_instMonadMainM___aux__5___redArg(v_a_121_);
return v_res_123_;
}
}
LEAN_EXPORT lean_object* l_Lake_instMonadMainM___aux__5(lean_object* v_00_u03b1_124_, lean_object* v_a_125_){
_start:
{
lean_object* v___x_127_; 
v___x_127_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_127_, 0, v_a_125_);
return v___x_127_;
}
}
LEAN_EXPORT lean_object* l_Lake_instMonadMainM___aux__5___boxed(lean_object* v_00_u03b1_128_, lean_object* v_a_129_, lean_object* v___y_130_){
_start:
{
lean_object* v_res_131_; 
v_res_131_ = l_Lake_instMonadMainM___aux__5(v_00_u03b1_128_, v_a_129_);
return v_res_131_;
}
}
LEAN_EXPORT lean_object* l_Lake_instMonadMainM___aux__7___redArg___lam__1(lean_object* v_invFun_132_, lean_object* v_f_133_, lean_object* v___f_134_, lean_object* v_x_135_){
_start:
{
lean_object* v___x_137_; 
v___x_137_ = lean_apply_2(v_invFun_132_, v_f_133_, lean_box(0));
if (lean_obj_tag(v___x_137_) == 0)
{
lean_object* v_a_138_; lean_object* v___x_139_; lean_object* v_invFun_140_; lean_object* v___x_141_; lean_object* v___x_142_; lean_object* v___x_143_; 
v_a_138_ = lean_ctor_get(v___x_137_, 0);
lean_inc(v_a_138_);
lean_dec_ref_known(v___x_137_, 1);
v___x_139_ = lean_apply_1(v___f_134_, lean_box(0));
v_invFun_140_ = lean_ctor_get(v___x_139_, 1);
lean_inc(v_invFun_140_);
lean_dec_ref(v___x_139_);
v___x_141_ = lean_box(0);
v___x_142_ = lean_apply_1(v_x_135_, v___x_141_);
v___x_143_ = lean_apply_2(v_invFun_140_, v___x_142_, lean_box(0));
if (lean_obj_tag(v___x_143_) == 0)
{
lean_object* v_a_144_; lean_object* v___x_146_; uint8_t v_isShared_147_; uint8_t v_isSharedCheck_152_; 
v_a_144_ = lean_ctor_get(v___x_143_, 0);
v_isSharedCheck_152_ = !lean_is_exclusive(v___x_143_);
if (v_isSharedCheck_152_ == 0)
{
v___x_146_ = v___x_143_;
v_isShared_147_ = v_isSharedCheck_152_;
goto v_resetjp_145_;
}
else
{
lean_inc(v_a_144_);
lean_dec(v___x_143_);
v___x_146_ = lean_box(0);
v_isShared_147_ = v_isSharedCheck_152_;
goto v_resetjp_145_;
}
v_resetjp_145_:
{
lean_object* v___x_148_; lean_object* v___x_150_; 
v___x_148_ = lean_apply_1(v_a_138_, v_a_144_);
if (v_isShared_147_ == 0)
{
lean_ctor_set(v___x_146_, 0, v___x_148_);
v___x_150_ = v___x_146_;
goto v_reusejp_149_;
}
else
{
lean_object* v_reuseFailAlloc_151_; 
v_reuseFailAlloc_151_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_151_, 0, v___x_148_);
v___x_150_ = v_reuseFailAlloc_151_;
goto v_reusejp_149_;
}
v_reusejp_149_:
{
return v___x_150_;
}
}
}
else
{
lean_object* v_a_153_; lean_object* v___x_155_; uint8_t v_isShared_156_; uint8_t v_isSharedCheck_160_; 
lean_dec(v_a_138_);
v_a_153_ = lean_ctor_get(v___x_143_, 0);
v_isSharedCheck_160_ = !lean_is_exclusive(v___x_143_);
if (v_isSharedCheck_160_ == 0)
{
v___x_155_ = v___x_143_;
v_isShared_156_ = v_isSharedCheck_160_;
goto v_resetjp_154_;
}
else
{
lean_inc(v_a_153_);
lean_dec(v___x_143_);
v___x_155_ = lean_box(0);
v_isShared_156_ = v_isSharedCheck_160_;
goto v_resetjp_154_;
}
v_resetjp_154_:
{
lean_object* v___x_158_; 
if (v_isShared_156_ == 0)
{
v___x_158_ = v___x_155_;
goto v_reusejp_157_;
}
else
{
lean_object* v_reuseFailAlloc_159_; 
v_reuseFailAlloc_159_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_159_, 0, v_a_153_);
v___x_158_ = v_reuseFailAlloc_159_;
goto v_reusejp_157_;
}
v_reusejp_157_:
{
return v___x_158_;
}
}
}
}
else
{
lean_object* v_a_161_; lean_object* v___x_163_; uint8_t v_isShared_164_; uint8_t v_isSharedCheck_168_; 
lean_dec_ref(v_x_135_);
lean_dec_ref(v___f_134_);
v_a_161_ = lean_ctor_get(v___x_137_, 0);
v_isSharedCheck_168_ = !lean_is_exclusive(v___x_137_);
if (v_isSharedCheck_168_ == 0)
{
v___x_163_ = v___x_137_;
v_isShared_164_ = v_isSharedCheck_168_;
goto v_resetjp_162_;
}
else
{
lean_inc(v_a_161_);
lean_dec(v___x_137_);
v___x_163_ = lean_box(0);
v_isShared_164_ = v_isSharedCheck_168_;
goto v_resetjp_162_;
}
v_resetjp_162_:
{
lean_object* v___x_166_; 
if (v_isShared_164_ == 0)
{
v___x_166_ = v___x_163_;
goto v_reusejp_165_;
}
else
{
lean_object* v_reuseFailAlloc_167_; 
v_reuseFailAlloc_167_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_167_, 0, v_a_161_);
v___x_166_ = v_reuseFailAlloc_167_;
goto v_reusejp_165_;
}
v_reusejp_165_:
{
return v___x_166_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_instMonadMainM___aux__7___redArg___lam__1___boxed(lean_object* v_invFun_169_, lean_object* v_f_170_, lean_object* v___f_171_, lean_object* v_x_172_, lean_object* v___y_173_){
_start:
{
lean_object* v_res_174_; 
v_res_174_ = l_Lake_instMonadMainM___aux__7___redArg___lam__1(v_invFun_169_, v_f_170_, v___f_171_, v_x_172_);
return v_res_174_;
}
}
LEAN_EXPORT lean_object* l_Lake_instMonadMainM___aux__7___redArg(lean_object* v_f_176_, lean_object* v_x_177_){
_start:
{
lean_object* v___f_179_; lean_object* v___x_180_; lean_object* v_toFun_181_; lean_object* v_invFun_182_; lean_object* v___f_183_; lean_object* v___x_184_; 
v___f_179_ = ((lean_object*)(l_Lake_instMonadMainM___aux__7___redArg___closed__0));
v___x_180_ = lean_obj_once(&l_Lake_instMonadMainM___aux__1___redArg___closed__0, &l_Lake_instMonadMainM___aux__1___redArg___closed__0_once, _init_l_Lake_instMonadMainM___aux__1___redArg___closed__0);
v_toFun_181_ = lean_ctor_get(v___x_180_, 0);
v_invFun_182_ = lean_ctor_get(v___x_180_, 1);
lean_inc(v_invFun_182_);
v___f_183_ = lean_alloc_closure((void*)(l_Lake_instMonadMainM___aux__7___redArg___lam__1___boxed), 5, 4);
lean_closure_set(v___f_183_, 0, v_invFun_182_);
lean_closure_set(v___f_183_, 1, v_f_176_);
lean_closure_set(v___f_183_, 2, v___f_179_);
lean_closure_set(v___f_183_, 3, v_x_177_);
lean_inc(v_toFun_181_);
v___x_184_ = lean_apply_2(v_toFun_181_, v___f_183_, lean_box(0));
return v___x_184_;
}
}
LEAN_EXPORT lean_object* l_Lake_instMonadMainM___aux__7___redArg___boxed(lean_object* v_f_185_, lean_object* v_x_186_, lean_object* v___y_187_){
_start:
{
lean_object* v_res_188_; 
v_res_188_ = l_Lake_instMonadMainM___aux__7___redArg(v_f_185_, v_x_186_);
return v_res_188_;
}
}
LEAN_EXPORT lean_object* l_Lake_instMonadMainM___aux__7(lean_object* v_00_u03b1_189_, lean_object* v_00_u03b2_190_, lean_object* v_f_191_, lean_object* v_x_192_){
_start:
{
lean_object* v___f_194_; lean_object* v___x_195_; lean_object* v_toFun_196_; lean_object* v_invFun_197_; lean_object* v___f_198_; lean_object* v___x_199_; 
v___f_194_ = ((lean_object*)(l_Lake_instMonadMainM___aux__7___redArg___closed__0));
v___x_195_ = lean_obj_once(&l_Lake_instMonadMainM___aux__1___redArg___closed__0, &l_Lake_instMonadMainM___aux__1___redArg___closed__0_once, _init_l_Lake_instMonadMainM___aux__1___redArg___closed__0);
v_toFun_196_ = lean_ctor_get(v___x_195_, 0);
v_invFun_197_ = lean_ctor_get(v___x_195_, 1);
lean_inc(v_invFun_197_);
v___f_198_ = lean_alloc_closure((void*)(l_Lake_instMonadMainM___aux__7___redArg___lam__1___boxed), 5, 4);
lean_closure_set(v___f_198_, 0, v_invFun_197_);
lean_closure_set(v___f_198_, 1, v_f_191_);
lean_closure_set(v___f_198_, 2, v___f_194_);
lean_closure_set(v___f_198_, 3, v_x_192_);
lean_inc(v_toFun_196_);
v___x_199_ = lean_apply_2(v_toFun_196_, v___f_198_, lean_box(0));
return v___x_199_;
}
}
LEAN_EXPORT lean_object* l_Lake_instMonadMainM___aux__7___boxed(lean_object* v_00_u03b1_200_, lean_object* v_00_u03b2_201_, lean_object* v_f_202_, lean_object* v_x_203_, lean_object* v___y_204_){
_start:
{
lean_object* v_res_205_; 
v_res_205_ = l_Lake_instMonadMainM___aux__7(v_00_u03b1_200_, v_00_u03b2_201_, v_f_202_, v_x_203_);
return v_res_205_;
}
}
LEAN_EXPORT lean_object* l_Lake_instMonadMainM___aux__9___redArg___lam__1(lean_object* v_invFun_206_, lean_object* v_x_207_, lean_object* v___f_208_, lean_object* v_y_209_){
_start:
{
lean_object* v___x_211_; 
v___x_211_ = lean_apply_2(v_invFun_206_, v_x_207_, lean_box(0));
if (lean_obj_tag(v___x_211_) == 0)
{
lean_object* v_a_212_; lean_object* v___x_213_; lean_object* v_invFun_214_; lean_object* v___x_215_; lean_object* v___x_216_; lean_object* v___x_217_; 
v_a_212_ = lean_ctor_get(v___x_211_, 0);
lean_inc(v_a_212_);
lean_dec_ref_known(v___x_211_, 1);
v___x_213_ = lean_apply_1(v___f_208_, lean_box(0));
v_invFun_214_ = lean_ctor_get(v___x_213_, 1);
lean_inc(v_invFun_214_);
lean_dec_ref(v___x_213_);
v___x_215_ = lean_box(0);
v___x_216_ = lean_apply_1(v_y_209_, v___x_215_);
v___x_217_ = lean_apply_2(v_invFun_214_, v___x_216_, lean_box(0));
if (lean_obj_tag(v___x_217_) == 0)
{
lean_object* v___x_219_; uint8_t v_isShared_220_; uint8_t v_isSharedCheck_224_; 
v_isSharedCheck_224_ = !lean_is_exclusive(v___x_217_);
if (v_isSharedCheck_224_ == 0)
{
lean_object* v_unused_225_; 
v_unused_225_ = lean_ctor_get(v___x_217_, 0);
lean_dec(v_unused_225_);
v___x_219_ = v___x_217_;
v_isShared_220_ = v_isSharedCheck_224_;
goto v_resetjp_218_;
}
else
{
lean_dec(v___x_217_);
v___x_219_ = lean_box(0);
v_isShared_220_ = v_isSharedCheck_224_;
goto v_resetjp_218_;
}
v_resetjp_218_:
{
lean_object* v___x_222_; 
if (v_isShared_220_ == 0)
{
lean_ctor_set(v___x_219_, 0, v_a_212_);
v___x_222_ = v___x_219_;
goto v_reusejp_221_;
}
else
{
lean_object* v_reuseFailAlloc_223_; 
v_reuseFailAlloc_223_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_223_, 0, v_a_212_);
v___x_222_ = v_reuseFailAlloc_223_;
goto v_reusejp_221_;
}
v_reusejp_221_:
{
return v___x_222_;
}
}
}
else
{
lean_object* v_a_226_; lean_object* v___x_228_; uint8_t v_isShared_229_; uint8_t v_isSharedCheck_233_; 
lean_dec(v_a_212_);
v_a_226_ = lean_ctor_get(v___x_217_, 0);
v_isSharedCheck_233_ = !lean_is_exclusive(v___x_217_);
if (v_isSharedCheck_233_ == 0)
{
v___x_228_ = v___x_217_;
v_isShared_229_ = v_isSharedCheck_233_;
goto v_resetjp_227_;
}
else
{
lean_inc(v_a_226_);
lean_dec(v___x_217_);
v___x_228_ = lean_box(0);
v_isShared_229_ = v_isSharedCheck_233_;
goto v_resetjp_227_;
}
v_resetjp_227_:
{
lean_object* v___x_231_; 
if (v_isShared_229_ == 0)
{
v___x_231_ = v___x_228_;
goto v_reusejp_230_;
}
else
{
lean_object* v_reuseFailAlloc_232_; 
v_reuseFailAlloc_232_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_232_, 0, v_a_226_);
v___x_231_ = v_reuseFailAlloc_232_;
goto v_reusejp_230_;
}
v_reusejp_230_:
{
return v___x_231_;
}
}
}
}
else
{
lean_dec_ref(v_y_209_);
lean_dec_ref(v___f_208_);
return v___x_211_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_instMonadMainM___aux__9___redArg___lam__1___boxed(lean_object* v_invFun_234_, lean_object* v_x_235_, lean_object* v___f_236_, lean_object* v_y_237_, lean_object* v___y_238_){
_start:
{
lean_object* v_res_239_; 
v_res_239_ = l_Lake_instMonadMainM___aux__9___redArg___lam__1(v_invFun_234_, v_x_235_, v___f_236_, v_y_237_);
return v_res_239_;
}
}
LEAN_EXPORT lean_object* l_Lake_instMonadMainM___aux__9___redArg(lean_object* v_x_240_, lean_object* v_y_241_){
_start:
{
lean_object* v___f_243_; lean_object* v___x_244_; lean_object* v_toFun_245_; lean_object* v_invFun_246_; lean_object* v___f_247_; lean_object* v___x_248_; 
v___f_243_ = ((lean_object*)(l_Lake_instMonadMainM___aux__7___redArg___closed__0));
v___x_244_ = lean_obj_once(&l_Lake_instMonadMainM___aux__1___redArg___closed__0, &l_Lake_instMonadMainM___aux__1___redArg___closed__0_once, _init_l_Lake_instMonadMainM___aux__1___redArg___closed__0);
v_toFun_245_ = lean_ctor_get(v___x_244_, 0);
v_invFun_246_ = lean_ctor_get(v___x_244_, 1);
lean_inc(v_invFun_246_);
v___f_247_ = lean_alloc_closure((void*)(l_Lake_instMonadMainM___aux__9___redArg___lam__1___boxed), 5, 4);
lean_closure_set(v___f_247_, 0, v_invFun_246_);
lean_closure_set(v___f_247_, 1, v_x_240_);
lean_closure_set(v___f_247_, 2, v___f_243_);
lean_closure_set(v___f_247_, 3, v_y_241_);
lean_inc(v_toFun_245_);
v___x_248_ = lean_apply_2(v_toFun_245_, v___f_247_, lean_box(0));
return v___x_248_;
}
}
LEAN_EXPORT lean_object* l_Lake_instMonadMainM___aux__9___redArg___boxed(lean_object* v_x_249_, lean_object* v_y_250_, lean_object* v___y_251_){
_start:
{
lean_object* v_res_252_; 
v_res_252_ = l_Lake_instMonadMainM___aux__9___redArg(v_x_249_, v_y_250_);
return v_res_252_;
}
}
LEAN_EXPORT lean_object* l_Lake_instMonadMainM___aux__9(lean_object* v_00_u03b1_253_, lean_object* v_00_u03b2_254_, lean_object* v_x_255_, lean_object* v_y_256_){
_start:
{
lean_object* v___f_258_; lean_object* v___x_259_; lean_object* v_toFun_260_; lean_object* v_invFun_261_; lean_object* v___f_262_; lean_object* v___x_263_; 
v___f_258_ = ((lean_object*)(l_Lake_instMonadMainM___aux__7___redArg___closed__0));
v___x_259_ = lean_obj_once(&l_Lake_instMonadMainM___aux__1___redArg___closed__0, &l_Lake_instMonadMainM___aux__1___redArg___closed__0_once, _init_l_Lake_instMonadMainM___aux__1___redArg___closed__0);
v_toFun_260_ = lean_ctor_get(v___x_259_, 0);
v_invFun_261_ = lean_ctor_get(v___x_259_, 1);
lean_inc(v_invFun_261_);
v___f_262_ = lean_alloc_closure((void*)(l_Lake_instMonadMainM___aux__9___redArg___lam__1___boxed), 5, 4);
lean_closure_set(v___f_262_, 0, v_invFun_261_);
lean_closure_set(v___f_262_, 1, v_x_255_);
lean_closure_set(v___f_262_, 2, v___f_258_);
lean_closure_set(v___f_262_, 3, v_y_256_);
lean_inc(v_toFun_260_);
v___x_263_ = lean_apply_2(v_toFun_260_, v___f_262_, lean_box(0));
return v___x_263_;
}
}
LEAN_EXPORT lean_object* l_Lake_instMonadMainM___aux__9___boxed(lean_object* v_00_u03b1_264_, lean_object* v_00_u03b2_265_, lean_object* v_x_266_, lean_object* v_y_267_, lean_object* v___y_268_){
_start:
{
lean_object* v_res_269_; 
v_res_269_ = l_Lake_instMonadMainM___aux__9(v_00_u03b1_264_, v_00_u03b2_265_, v_x_266_, v_y_267_);
return v_res_269_;
}
}
LEAN_EXPORT lean_object* l_Lake_instMonadMainM___aux__11___redArg___lam__1(lean_object* v_invFun_270_, lean_object* v_x_271_, lean_object* v_y_272_, lean_object* v_invFun_273_){
_start:
{
lean_object* v___x_275_; 
v___x_275_ = lean_apply_2(v_invFun_270_, v_x_271_, lean_box(0));
if (lean_obj_tag(v___x_275_) == 0)
{
lean_object* v___x_276_; lean_object* v___x_277_; lean_object* v___x_278_; 
lean_dec_ref_known(v___x_275_, 1);
v___x_276_ = lean_box(0);
v___x_277_ = lean_apply_1(v_y_272_, v___x_276_);
v___x_278_ = lean_apply_2(v_invFun_273_, v___x_277_, lean_box(0));
return v___x_278_;
}
else
{
lean_object* v_a_279_; lean_object* v___x_281_; uint8_t v_isShared_282_; uint8_t v_isSharedCheck_286_; 
lean_dec(v_invFun_273_);
lean_dec_ref(v_y_272_);
v_a_279_ = lean_ctor_get(v___x_275_, 0);
v_isSharedCheck_286_ = !lean_is_exclusive(v___x_275_);
if (v_isSharedCheck_286_ == 0)
{
v___x_281_ = v___x_275_;
v_isShared_282_ = v_isSharedCheck_286_;
goto v_resetjp_280_;
}
else
{
lean_inc(v_a_279_);
lean_dec(v___x_275_);
v___x_281_ = lean_box(0);
v_isShared_282_ = v_isSharedCheck_286_;
goto v_resetjp_280_;
}
v_resetjp_280_:
{
lean_object* v___x_284_; 
if (v_isShared_282_ == 0)
{
v___x_284_ = v___x_281_;
goto v_reusejp_283_;
}
else
{
lean_object* v_reuseFailAlloc_285_; 
v_reuseFailAlloc_285_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_285_, 0, v_a_279_);
v___x_284_ = v_reuseFailAlloc_285_;
goto v_reusejp_283_;
}
v_reusejp_283_:
{
return v___x_284_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_instMonadMainM___aux__11___redArg___lam__1___boxed(lean_object* v_invFun_287_, lean_object* v_x_288_, lean_object* v_y_289_, lean_object* v_invFun_290_, lean_object* v___y_291_){
_start:
{
lean_object* v_res_292_; 
v_res_292_ = l_Lake_instMonadMainM___aux__11___redArg___lam__1(v_invFun_287_, v_x_288_, v_y_289_, v_invFun_290_);
return v_res_292_;
}
}
LEAN_EXPORT lean_object* l_Lake_instMonadMainM___aux__11___redArg(lean_object* v_x_293_, lean_object* v_y_294_){
_start:
{
lean_object* v___x_296_; lean_object* v_toFun_297_; lean_object* v_invFun_298_; lean_object* v_invFun_299_; lean_object* v___f_300_; lean_object* v___x_301_; 
v___x_296_ = lean_obj_once(&l_Lake_instMonadMainM___aux__1___redArg___closed__0, &l_Lake_instMonadMainM___aux__1___redArg___closed__0_once, _init_l_Lake_instMonadMainM___aux__1___redArg___closed__0);
v_toFun_297_ = lean_ctor_get(v___x_296_, 0);
v_invFun_298_ = lean_ctor_get(v___x_296_, 1);
v_invFun_299_ = lean_ctor_get(v___x_296_, 1);
lean_inc(v_invFun_298_);
lean_inc(v_invFun_299_);
v___f_300_ = lean_alloc_closure((void*)(l_Lake_instMonadMainM___aux__11___redArg___lam__1___boxed), 5, 4);
lean_closure_set(v___f_300_, 0, v_invFun_299_);
lean_closure_set(v___f_300_, 1, v_x_293_);
lean_closure_set(v___f_300_, 2, v_y_294_);
lean_closure_set(v___f_300_, 3, v_invFun_298_);
lean_inc(v_toFun_297_);
v___x_301_ = lean_apply_2(v_toFun_297_, v___f_300_, lean_box(0));
return v___x_301_;
}
}
LEAN_EXPORT lean_object* l_Lake_instMonadMainM___aux__11___redArg___boxed(lean_object* v_x_302_, lean_object* v_y_303_, lean_object* v___y_304_){
_start:
{
lean_object* v_res_305_; 
v_res_305_ = l_Lake_instMonadMainM___aux__11___redArg(v_x_302_, v_y_303_);
return v_res_305_;
}
}
LEAN_EXPORT lean_object* l_Lake_instMonadMainM___aux__11(lean_object* v_00_u03b1_306_, lean_object* v_00_u03b2_307_, lean_object* v_x_308_, lean_object* v_y_309_){
_start:
{
lean_object* v___x_311_; lean_object* v_toFun_312_; lean_object* v_invFun_313_; lean_object* v_invFun_314_; lean_object* v___f_315_; lean_object* v___x_316_; 
v___x_311_ = lean_obj_once(&l_Lake_instMonadMainM___aux__1___redArg___closed__0, &l_Lake_instMonadMainM___aux__1___redArg___closed__0_once, _init_l_Lake_instMonadMainM___aux__1___redArg___closed__0);
v_toFun_312_ = lean_ctor_get(v___x_311_, 0);
v_invFun_313_ = lean_ctor_get(v___x_311_, 1);
v_invFun_314_ = lean_ctor_get(v___x_311_, 1);
lean_inc(v_invFun_313_);
lean_inc(v_invFun_314_);
v___f_315_ = lean_alloc_closure((void*)(l_Lake_instMonadMainM___aux__11___redArg___lam__1___boxed), 5, 4);
lean_closure_set(v___f_315_, 0, v_invFun_314_);
lean_closure_set(v___f_315_, 1, v_x_308_);
lean_closure_set(v___f_315_, 2, v_y_309_);
lean_closure_set(v___f_315_, 3, v_invFun_313_);
lean_inc(v_toFun_312_);
v___x_316_ = lean_apply_2(v_toFun_312_, v___f_315_, lean_box(0));
return v___x_316_;
}
}
LEAN_EXPORT lean_object* l_Lake_instMonadMainM___aux__11___boxed(lean_object* v_00_u03b1_317_, lean_object* v_00_u03b2_318_, lean_object* v_x_319_, lean_object* v_y_320_, lean_object* v___y_321_){
_start:
{
lean_object* v_res_322_; 
v_res_322_ = l_Lake_instMonadMainM___aux__11(v_00_u03b1_317_, v_00_u03b2_318_, v_x_319_, v_y_320_);
return v_res_322_;
}
}
LEAN_EXPORT lean_object* l_Lake_instMonadMainM___aux__13___redArg___lam__1(lean_object* v_f_323_, lean_object* v_invFun_324_, lean_object* v_a_325_){
_start:
{
lean_object* v___x_327_; lean_object* v___x_328_; 
v___x_327_ = lean_apply_1(v_f_323_, v_a_325_);
v___x_328_ = lean_apply_2(v_invFun_324_, v___x_327_, lean_box(0));
return v___x_328_;
}
}
LEAN_EXPORT lean_object* l_Lake_instMonadMainM___aux__13___redArg___lam__1___boxed(lean_object* v_f_329_, lean_object* v_invFun_330_, lean_object* v_a_331_, lean_object* v___y_332_){
_start:
{
lean_object* v_res_333_; 
v_res_333_ = l_Lake_instMonadMainM___aux__13___redArg___lam__1(v_f_329_, v_invFun_330_, v_a_331_);
return v_res_333_;
}
}
LEAN_EXPORT lean_object* l_Lake_instMonadMainM___aux__13___redArg(lean_object* v_x_334_, lean_object* v_f_335_){
_start:
{
lean_object* v___x_337_; lean_object* v_toFun_338_; lean_object* v_invFun_339_; lean_object* v_invFun_340_; lean_object* v___f_341_; lean_object* v___x_342_; lean_object* v___x_343_; lean_object* v___x_344_; 
v___x_337_ = lean_obj_once(&l_Lake_instMonadMainM___aux__1___redArg___closed__0, &l_Lake_instMonadMainM___aux__1___redArg___closed__0_once, _init_l_Lake_instMonadMainM___aux__1___redArg___closed__0);
v_toFun_338_ = lean_ctor_get(v___x_337_, 0);
v_invFun_339_ = lean_ctor_get(v___x_337_, 1);
v_invFun_340_ = lean_ctor_get(v___x_337_, 1);
lean_inc(v_invFun_339_);
v___f_341_ = lean_alloc_closure((void*)(l_Lake_instMonadMainM___aux__13___redArg___lam__1___boxed), 4, 2);
lean_closure_set(v___f_341_, 0, v_f_335_);
lean_closure_set(v___f_341_, 1, v_invFun_339_);
lean_inc(v_invFun_340_);
v___x_342_ = lean_apply_1(v_invFun_340_, v_x_334_);
v___x_343_ = lean_alloc_closure((void*)(l_EST_bind___boxed), 7, 6);
lean_closure_set(v___x_343_, 0, lean_box(0));
lean_closure_set(v___x_343_, 1, lean_box(0));
lean_closure_set(v___x_343_, 2, lean_box(0));
lean_closure_set(v___x_343_, 3, lean_box(0));
lean_closure_set(v___x_343_, 4, v___x_342_);
lean_closure_set(v___x_343_, 5, v___f_341_);
lean_inc(v_toFun_338_);
v___x_344_ = lean_apply_2(v_toFun_338_, v___x_343_, lean_box(0));
return v___x_344_;
}
}
LEAN_EXPORT lean_object* l_Lake_instMonadMainM___aux__13___redArg___boxed(lean_object* v_x_345_, lean_object* v_f_346_, lean_object* v___y_347_){
_start:
{
lean_object* v_res_348_; 
v_res_348_ = l_Lake_instMonadMainM___aux__13___redArg(v_x_345_, v_f_346_);
return v_res_348_;
}
}
LEAN_EXPORT lean_object* l_Lake_instMonadMainM___aux__13(lean_object* v_00_u03b1_349_, lean_object* v_00_u03b2_350_, lean_object* v_x_351_, lean_object* v_f_352_){
_start:
{
lean_object* v___x_354_; lean_object* v_toFun_355_; lean_object* v_invFun_356_; lean_object* v_invFun_357_; lean_object* v___f_358_; lean_object* v___x_359_; lean_object* v___x_360_; lean_object* v___x_361_; 
v___x_354_ = lean_obj_once(&l_Lake_instMonadMainM___aux__1___redArg___closed__0, &l_Lake_instMonadMainM___aux__1___redArg___closed__0_once, _init_l_Lake_instMonadMainM___aux__1___redArg___closed__0);
v_toFun_355_ = lean_ctor_get(v___x_354_, 0);
v_invFun_356_ = lean_ctor_get(v___x_354_, 1);
v_invFun_357_ = lean_ctor_get(v___x_354_, 1);
lean_inc(v_invFun_356_);
v___f_358_ = lean_alloc_closure((void*)(l_Lake_instMonadMainM___aux__13___redArg___lam__1___boxed), 4, 2);
lean_closure_set(v___f_358_, 0, v_f_352_);
lean_closure_set(v___f_358_, 1, v_invFun_356_);
lean_inc(v_invFun_357_);
v___x_359_ = lean_apply_1(v_invFun_357_, v_x_351_);
v___x_360_ = lean_alloc_closure((void*)(l_EST_bind___boxed), 7, 6);
lean_closure_set(v___x_360_, 0, lean_box(0));
lean_closure_set(v___x_360_, 1, lean_box(0));
lean_closure_set(v___x_360_, 2, lean_box(0));
lean_closure_set(v___x_360_, 3, lean_box(0));
lean_closure_set(v___x_360_, 4, v___x_359_);
lean_closure_set(v___x_360_, 5, v___f_358_);
lean_inc(v_toFun_355_);
v___x_361_ = lean_apply_2(v_toFun_355_, v___x_360_, lean_box(0));
return v___x_361_;
}
}
LEAN_EXPORT lean_object* l_Lake_instMonadMainM___aux__13___boxed(lean_object* v_00_u03b1_362_, lean_object* v_00_u03b2_363_, lean_object* v_x_364_, lean_object* v_f_365_, lean_object* v___y_366_){
_start:
{
lean_object* v_res_367_; 
v_res_367_ = l_Lake_instMonadMainM___aux__13(v_00_u03b1_362_, v_00_u03b2_363_, v_x_364_, v_f_365_);
return v_res_367_;
}
}
LEAN_EXPORT lean_object* l_Lake_instMonadFinallyMainM___aux__1___redArg___lam__1(lean_object* v___f_388_, lean_object* v_f_389_, lean_object* v_a_x3f_390_){
_start:
{
lean_object* v___x_392_; lean_object* v_invFun_393_; lean_object* v___x_394_; lean_object* v___x_395_; 
v___x_392_ = lean_apply_1(v___f_388_, lean_box(0));
v_invFun_393_ = lean_ctor_get(v___x_392_, 1);
lean_inc(v_invFun_393_);
lean_dec_ref(v___x_392_);
v___x_394_ = lean_apply_1(v_f_389_, v_a_x3f_390_);
v___x_395_ = lean_apply_2(v_invFun_393_, v___x_394_, lean_box(0));
return v___x_395_;
}
}
LEAN_EXPORT lean_object* l_Lake_instMonadFinallyMainM___aux__1___redArg___lam__1___boxed(lean_object* v___f_396_, lean_object* v_f_397_, lean_object* v_a_x3f_398_, lean_object* v___y_399_){
_start:
{
lean_object* v_res_400_; 
v_res_400_ = l_Lake_instMonadFinallyMainM___aux__1___redArg___lam__1(v___f_396_, v_f_397_, v_a_x3f_398_);
return v_res_400_;
}
}
LEAN_EXPORT lean_object* l_Lake_instMonadFinallyMainM___aux__1___redArg___lam__0(lean_object* v_invFun_401_, lean_object* v_x_402_, lean_object* v___f_403_){
_start:
{
lean_object* v_r_405_; 
v_r_405_ = lean_apply_2(v_invFun_401_, v_x_402_, lean_box(0));
if (lean_obj_tag(v_r_405_) == 0)
{
lean_object* v_a_406_; lean_object* v___x_408_; uint8_t v_isShared_409_; uint8_t v_isSharedCheck_431_; 
v_a_406_ = lean_ctor_get(v_r_405_, 0);
v_isSharedCheck_431_ = !lean_is_exclusive(v_r_405_);
if (v_isSharedCheck_431_ == 0)
{
v___x_408_ = v_r_405_;
v_isShared_409_ = v_isSharedCheck_431_;
goto v_resetjp_407_;
}
else
{
lean_inc(v_a_406_);
lean_dec(v_r_405_);
v___x_408_ = lean_box(0);
v_isShared_409_ = v_isSharedCheck_431_;
goto v_resetjp_407_;
}
v_resetjp_407_:
{
lean_object* v___x_411_; 
lean_inc(v_a_406_);
if (v_isShared_409_ == 0)
{
lean_ctor_set_tag(v___x_408_, 1);
v___x_411_ = v___x_408_;
goto v_reusejp_410_;
}
else
{
lean_object* v_reuseFailAlloc_430_; 
v_reuseFailAlloc_430_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_430_, 0, v_a_406_);
v___x_411_ = v_reuseFailAlloc_430_;
goto v_reusejp_410_;
}
v_reusejp_410_:
{
lean_object* v___x_412_; 
v___x_412_ = lean_apply_2(v___f_403_, v___x_411_, lean_box(0));
if (lean_obj_tag(v___x_412_) == 0)
{
lean_object* v_a_413_; lean_object* v___x_415_; uint8_t v_isShared_416_; uint8_t v_isSharedCheck_421_; 
v_a_413_ = lean_ctor_get(v___x_412_, 0);
v_isSharedCheck_421_ = !lean_is_exclusive(v___x_412_);
if (v_isSharedCheck_421_ == 0)
{
v___x_415_ = v___x_412_;
v_isShared_416_ = v_isSharedCheck_421_;
goto v_resetjp_414_;
}
else
{
lean_inc(v_a_413_);
lean_dec(v___x_412_);
v___x_415_ = lean_box(0);
v_isShared_416_ = v_isSharedCheck_421_;
goto v_resetjp_414_;
}
v_resetjp_414_:
{
lean_object* v___x_417_; lean_object* v___x_419_; 
v___x_417_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_417_, 0, v_a_406_);
lean_ctor_set(v___x_417_, 1, v_a_413_);
if (v_isShared_416_ == 0)
{
lean_ctor_set(v___x_415_, 0, v___x_417_);
v___x_419_ = v___x_415_;
goto v_reusejp_418_;
}
else
{
lean_object* v_reuseFailAlloc_420_; 
v_reuseFailAlloc_420_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_420_, 0, v___x_417_);
v___x_419_ = v_reuseFailAlloc_420_;
goto v_reusejp_418_;
}
v_reusejp_418_:
{
return v___x_419_;
}
}
}
else
{
lean_object* v_a_422_; lean_object* v___x_424_; uint8_t v_isShared_425_; uint8_t v_isSharedCheck_429_; 
lean_dec(v_a_406_);
v_a_422_ = lean_ctor_get(v___x_412_, 0);
v_isSharedCheck_429_ = !lean_is_exclusive(v___x_412_);
if (v_isSharedCheck_429_ == 0)
{
v___x_424_ = v___x_412_;
v_isShared_425_ = v_isSharedCheck_429_;
goto v_resetjp_423_;
}
else
{
lean_inc(v_a_422_);
lean_dec(v___x_412_);
v___x_424_ = lean_box(0);
v_isShared_425_ = v_isSharedCheck_429_;
goto v_resetjp_423_;
}
v_resetjp_423_:
{
lean_object* v___x_427_; 
if (v_isShared_425_ == 0)
{
v___x_427_ = v___x_424_;
goto v_reusejp_426_;
}
else
{
lean_object* v_reuseFailAlloc_428_; 
v_reuseFailAlloc_428_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_428_, 0, v_a_422_);
v___x_427_ = v_reuseFailAlloc_428_;
goto v_reusejp_426_;
}
v_reusejp_426_:
{
return v___x_427_;
}
}
}
}
}
}
else
{
lean_object* v_a_432_; lean_object* v___x_433_; lean_object* v___x_434_; 
v_a_432_ = lean_ctor_get(v_r_405_, 0);
lean_inc(v_a_432_);
lean_dec_ref_known(v_r_405_, 1);
v___x_433_ = lean_box(0);
v___x_434_ = lean_apply_2(v___f_403_, v___x_433_, lean_box(0));
if (lean_obj_tag(v___x_434_) == 0)
{
lean_object* v___x_436_; uint8_t v_isShared_437_; uint8_t v_isSharedCheck_441_; 
v_isSharedCheck_441_ = !lean_is_exclusive(v___x_434_);
if (v_isSharedCheck_441_ == 0)
{
lean_object* v_unused_442_; 
v_unused_442_ = lean_ctor_get(v___x_434_, 0);
lean_dec(v_unused_442_);
v___x_436_ = v___x_434_;
v_isShared_437_ = v_isSharedCheck_441_;
goto v_resetjp_435_;
}
else
{
lean_dec(v___x_434_);
v___x_436_ = lean_box(0);
v_isShared_437_ = v_isSharedCheck_441_;
goto v_resetjp_435_;
}
v_resetjp_435_:
{
lean_object* v___x_439_; 
if (v_isShared_437_ == 0)
{
lean_ctor_set_tag(v___x_436_, 1);
lean_ctor_set(v___x_436_, 0, v_a_432_);
v___x_439_ = v___x_436_;
goto v_reusejp_438_;
}
else
{
lean_object* v_reuseFailAlloc_440_; 
v_reuseFailAlloc_440_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_440_, 0, v_a_432_);
v___x_439_ = v_reuseFailAlloc_440_;
goto v_reusejp_438_;
}
v_reusejp_438_:
{
return v___x_439_;
}
}
}
else
{
lean_object* v_a_443_; lean_object* v___x_445_; uint8_t v_isShared_446_; uint8_t v_isSharedCheck_450_; 
lean_dec(v_a_432_);
v_a_443_ = lean_ctor_get(v___x_434_, 0);
v_isSharedCheck_450_ = !lean_is_exclusive(v___x_434_);
if (v_isSharedCheck_450_ == 0)
{
v___x_445_ = v___x_434_;
v_isShared_446_ = v_isSharedCheck_450_;
goto v_resetjp_444_;
}
else
{
lean_inc(v_a_443_);
lean_dec(v___x_434_);
v___x_445_ = lean_box(0);
v_isShared_446_ = v_isSharedCheck_450_;
goto v_resetjp_444_;
}
v_resetjp_444_:
{
lean_object* v___x_448_; 
if (v_isShared_446_ == 0)
{
v___x_448_ = v___x_445_;
goto v_reusejp_447_;
}
else
{
lean_object* v_reuseFailAlloc_449_; 
v_reuseFailAlloc_449_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_449_, 0, v_a_443_);
v___x_448_ = v_reuseFailAlloc_449_;
goto v_reusejp_447_;
}
v_reusejp_447_:
{
return v___x_448_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_instMonadFinallyMainM___aux__1___redArg___lam__0___boxed(lean_object* v_invFun_451_, lean_object* v_x_452_, lean_object* v___f_453_, lean_object* v___y_454_){
_start:
{
lean_object* v_res_455_; 
v_res_455_ = l_Lake_instMonadFinallyMainM___aux__1___redArg___lam__0(v_invFun_451_, v_x_452_, v___f_453_);
return v_res_455_;
}
}
static lean_object* _init_l_Lake_instMonadFinallyMainM___aux__1___redArg___closed__0(void){
_start:
{
lean_object* v___x_456_; 
v___x_456_ = l_Lake_instMonadMainM___aux__1___redArg___lam__0(lean_box(0));
return v___x_456_;
}
}
LEAN_EXPORT lean_object* l_Lake_instMonadFinallyMainM___aux__1___redArg(lean_object* v_x_457_, lean_object* v_f_458_){
_start:
{
lean_object* v___f_460_; lean_object* v___x_461_; lean_object* v_toFun_462_; lean_object* v_invFun_463_; lean_object* v___f_464_; lean_object* v___f_465_; lean_object* v___x_466_; 
v___f_460_ = ((lean_object*)(l_Lake_instMonadMainM___aux__7___redArg___closed__0));
v___x_461_ = lean_obj_once(&l_Lake_instMonadFinallyMainM___aux__1___redArg___closed__0, &l_Lake_instMonadFinallyMainM___aux__1___redArg___closed__0_once, _init_l_Lake_instMonadFinallyMainM___aux__1___redArg___closed__0);
v_toFun_462_ = lean_ctor_get(v___x_461_, 0);
v_invFun_463_ = lean_ctor_get(v___x_461_, 1);
v___f_464_ = lean_alloc_closure((void*)(l_Lake_instMonadFinallyMainM___aux__1___redArg___lam__1___boxed), 4, 2);
lean_closure_set(v___f_464_, 0, v___f_460_);
lean_closure_set(v___f_464_, 1, v_f_458_);
lean_inc(v_invFun_463_);
v___f_465_ = lean_alloc_closure((void*)(l_Lake_instMonadFinallyMainM___aux__1___redArg___lam__0___boxed), 4, 3);
lean_closure_set(v___f_465_, 0, v_invFun_463_);
lean_closure_set(v___f_465_, 1, v_x_457_);
lean_closure_set(v___f_465_, 2, v___f_464_);
lean_inc(v_toFun_462_);
v___x_466_ = lean_apply_2(v_toFun_462_, v___f_465_, lean_box(0));
return v___x_466_;
}
}
LEAN_EXPORT lean_object* l_Lake_instMonadFinallyMainM___aux__1___redArg___boxed(lean_object* v_x_467_, lean_object* v_f_468_, lean_object* v___y_469_){
_start:
{
lean_object* v_res_470_; 
v_res_470_ = l_Lake_instMonadFinallyMainM___aux__1___redArg(v_x_467_, v_f_468_);
return v_res_470_;
}
}
LEAN_EXPORT lean_object* l_Lake_instMonadFinallyMainM___aux__1(lean_object* v_00_u03b1_471_, lean_object* v_00_u03b2_472_, lean_object* v_x_473_, lean_object* v_f_474_){
_start:
{
lean_object* v___f_476_; lean_object* v___x_477_; lean_object* v_toFun_478_; lean_object* v_invFun_479_; lean_object* v___f_480_; lean_object* v___f_481_; lean_object* v___x_482_; 
v___f_476_ = ((lean_object*)(l_Lake_instMonadMainM___aux__7___redArg___closed__0));
v___x_477_ = lean_obj_once(&l_Lake_instMonadFinallyMainM___aux__1___redArg___closed__0, &l_Lake_instMonadFinallyMainM___aux__1___redArg___closed__0_once, _init_l_Lake_instMonadFinallyMainM___aux__1___redArg___closed__0);
v_toFun_478_ = lean_ctor_get(v___x_477_, 0);
v_invFun_479_ = lean_ctor_get(v___x_477_, 1);
v___f_480_ = lean_alloc_closure((void*)(l_Lake_instMonadFinallyMainM___aux__1___redArg___lam__1___boxed), 4, 2);
lean_closure_set(v___f_480_, 0, v___f_476_);
lean_closure_set(v___f_480_, 1, v_f_474_);
lean_inc(v_invFun_479_);
v___f_481_ = lean_alloc_closure((void*)(l_Lake_instMonadFinallyMainM___aux__1___redArg___lam__0___boxed), 4, 3);
lean_closure_set(v___f_481_, 0, v_invFun_479_);
lean_closure_set(v___f_481_, 1, v_x_473_);
lean_closure_set(v___f_481_, 2, v___f_480_);
lean_inc(v_toFun_478_);
v___x_482_ = lean_apply_2(v_toFun_478_, v___f_481_, lean_box(0));
return v___x_482_;
}
}
LEAN_EXPORT lean_object* l_Lake_instMonadFinallyMainM___aux__1___boxed(lean_object* v_00_u03b1_483_, lean_object* v_00_u03b2_484_, lean_object* v_x_485_, lean_object* v_f_486_, lean_object* v___y_487_){
_start:
{
lean_object* v_res_488_; 
v_res_488_ = l_Lake_instMonadFinallyMainM___aux__1(v_00_u03b1_483_, v_00_u03b2_484_, v_x_485_, v_f_486_);
return v_res_488_;
}
}
LEAN_EXPORT lean_object* l_Lake_instMonadLiftBaseIOMainM___aux__1___redArg(lean_object* v_act_491_){
_start:
{
lean_object* v___x_493_; lean_object* v___x_494_; 
v___x_493_ = lean_apply_1(v_act_491_, lean_box(0));
v___x_494_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_494_, 0, v___x_493_);
return v___x_494_;
}
}
LEAN_EXPORT lean_object* l_Lake_instMonadLiftBaseIOMainM___aux__1___redArg___boxed(lean_object* v_act_495_, lean_object* v___y_496_){
_start:
{
lean_object* v_res_497_; 
v_res_497_ = l_Lake_instMonadLiftBaseIOMainM___aux__1___redArg(v_act_495_);
return v_res_497_;
}
}
LEAN_EXPORT lean_object* l_Lake_instMonadLiftBaseIOMainM___aux__1(lean_object* v_00_u03b1_498_, lean_object* v_act_499_){
_start:
{
lean_object* v___x_501_; lean_object* v___x_502_; 
v___x_501_ = lean_apply_1(v_act_499_, lean_box(0));
v___x_502_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_502_, 0, v___x_501_);
return v___x_502_;
}
}
LEAN_EXPORT lean_object* l_Lake_instMonadLiftBaseIOMainM___aux__1___boxed(lean_object* v_00_u03b1_503_, lean_object* v_act_504_, lean_object* v___y_505_){
_start:
{
lean_object* v_res_506_; 
v_res_506_ = l_Lake_instMonadLiftBaseIOMainM___aux__1(v_00_u03b1_503_, v_act_504_);
return v_res_506_;
}
}
LEAN_EXPORT lean_object* l_Lake_MainM_mk___redArg(lean_object* v_x_509_){
_start:
{
lean_object* v___x_511_; 
v___x_511_ = lean_apply_1(v_x_509_, lean_box(0));
return v___x_511_;
}
}
LEAN_EXPORT lean_object* l_Lake_MainM_mk___redArg___boxed(lean_object* v_x_512_, lean_object* v___y_513_){
_start:
{
lean_object* v_res_514_; 
v_res_514_ = l_Lake_MainM_mk___redArg(v_x_512_);
return v_res_514_;
}
}
LEAN_EXPORT lean_object* l_Lake_MainM_mk(lean_object* v_00_u03b1_515_, lean_object* v_x_516_){
_start:
{
lean_object* v___x_518_; 
v___x_518_ = lean_apply_1(v_x_516_, lean_box(0));
return v___x_518_;
}
}
LEAN_EXPORT lean_object* l_Lake_MainM_mk___boxed(lean_object* v_00_u03b1_519_, lean_object* v_x_520_, lean_object* v___y_521_){
_start:
{
lean_object* v_res_522_; 
v_res_522_ = l_Lake_MainM_mk(v_00_u03b1_519_, v_x_520_);
return v_res_522_;
}
}
LEAN_EXPORT lean_object* l_Lake_MainM_toEIO___redArg(lean_object* v_self_523_){
_start:
{
lean_object* v___x_525_; 
v___x_525_ = lean_apply_1(v_self_523_, lean_box(0));
return v___x_525_;
}
}
LEAN_EXPORT lean_object* l_Lake_MainM_toEIO___redArg___boxed(lean_object* v_self_526_, lean_object* v___y_527_){
_start:
{
lean_object* v_res_528_; 
v_res_528_ = l_Lake_MainM_toEIO___redArg(v_self_526_);
return v_res_528_;
}
}
LEAN_EXPORT lean_object* l_Lake_MainM_toEIO(lean_object* v_00_u03b1_529_, lean_object* v_self_530_){
_start:
{
lean_object* v___x_532_; 
v___x_532_ = lean_apply_1(v_self_530_, lean_box(0));
return v___x_532_;
}
}
LEAN_EXPORT lean_object* l_Lake_MainM_toEIO___boxed(lean_object* v_00_u03b1_533_, lean_object* v_self_534_, lean_object* v___y_535_){
_start:
{
lean_object* v_res_536_; 
v_res_536_ = l_Lake_MainM_toEIO(v_00_u03b1_533_, v_self_534_);
return v_res_536_;
}
}
LEAN_EXPORT lean_object* l_Lake_MainM_toBaseIO___redArg(lean_object* v_self_537_){
_start:
{
lean_object* v___x_539_; 
v___x_539_ = lean_apply_1(v_self_537_, lean_box(0));
if (lean_obj_tag(v___x_539_) == 0)
{
lean_object* v_a_540_; lean_object* v___x_542_; uint8_t v_isShared_543_; uint8_t v_isSharedCheck_547_; 
v_a_540_ = lean_ctor_get(v___x_539_, 0);
v_isSharedCheck_547_ = !lean_is_exclusive(v___x_539_);
if (v_isSharedCheck_547_ == 0)
{
v___x_542_ = v___x_539_;
v_isShared_543_ = v_isSharedCheck_547_;
goto v_resetjp_541_;
}
else
{
lean_inc(v_a_540_);
lean_dec(v___x_539_);
v___x_542_ = lean_box(0);
v_isShared_543_ = v_isSharedCheck_547_;
goto v_resetjp_541_;
}
v_resetjp_541_:
{
lean_object* v___x_545_; 
if (v_isShared_543_ == 0)
{
lean_ctor_set_tag(v___x_542_, 1);
v___x_545_ = v___x_542_;
goto v_reusejp_544_;
}
else
{
lean_object* v_reuseFailAlloc_546_; 
v_reuseFailAlloc_546_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_546_, 0, v_a_540_);
v___x_545_ = v_reuseFailAlloc_546_;
goto v_reusejp_544_;
}
v_reusejp_544_:
{
return v___x_545_;
}
}
}
else
{
lean_object* v_a_548_; lean_object* v___x_550_; uint8_t v_isShared_551_; uint8_t v_isSharedCheck_555_; 
v_a_548_ = lean_ctor_get(v___x_539_, 0);
v_isSharedCheck_555_ = !lean_is_exclusive(v___x_539_);
if (v_isSharedCheck_555_ == 0)
{
v___x_550_ = v___x_539_;
v_isShared_551_ = v_isSharedCheck_555_;
goto v_resetjp_549_;
}
else
{
lean_inc(v_a_548_);
lean_dec(v___x_539_);
v___x_550_ = lean_box(0);
v_isShared_551_ = v_isSharedCheck_555_;
goto v_resetjp_549_;
}
v_resetjp_549_:
{
lean_object* v___x_553_; 
if (v_isShared_551_ == 0)
{
lean_ctor_set_tag(v___x_550_, 0);
v___x_553_ = v___x_550_;
goto v_reusejp_552_;
}
else
{
lean_object* v_reuseFailAlloc_554_; 
v_reuseFailAlloc_554_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_554_, 0, v_a_548_);
v___x_553_ = v_reuseFailAlloc_554_;
goto v_reusejp_552_;
}
v_reusejp_552_:
{
return v___x_553_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_MainM_toBaseIO___redArg___boxed(lean_object* v_self_556_, lean_object* v___y_557_){
_start:
{
lean_object* v_res_558_; 
v_res_558_ = l_Lake_MainM_toBaseIO___redArg(v_self_556_);
return v_res_558_;
}
}
LEAN_EXPORT lean_object* l_Lake_MainM_toBaseIO(lean_object* v_00_u03b1_559_, lean_object* v_self_560_){
_start:
{
lean_object* v___x_562_; 
v___x_562_ = lean_apply_1(v_self_560_, lean_box(0));
if (lean_obj_tag(v___x_562_) == 0)
{
lean_object* v_a_563_; lean_object* v___x_565_; uint8_t v_isShared_566_; uint8_t v_isSharedCheck_570_; 
v_a_563_ = lean_ctor_get(v___x_562_, 0);
v_isSharedCheck_570_ = !lean_is_exclusive(v___x_562_);
if (v_isSharedCheck_570_ == 0)
{
v___x_565_ = v___x_562_;
v_isShared_566_ = v_isSharedCheck_570_;
goto v_resetjp_564_;
}
else
{
lean_inc(v_a_563_);
lean_dec(v___x_562_);
v___x_565_ = lean_box(0);
v_isShared_566_ = v_isSharedCheck_570_;
goto v_resetjp_564_;
}
v_resetjp_564_:
{
lean_object* v___x_568_; 
if (v_isShared_566_ == 0)
{
lean_ctor_set_tag(v___x_565_, 1);
v___x_568_ = v___x_565_;
goto v_reusejp_567_;
}
else
{
lean_object* v_reuseFailAlloc_569_; 
v_reuseFailAlloc_569_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_569_, 0, v_a_563_);
v___x_568_ = v_reuseFailAlloc_569_;
goto v_reusejp_567_;
}
v_reusejp_567_:
{
return v___x_568_;
}
}
}
else
{
lean_object* v_a_571_; lean_object* v___x_573_; uint8_t v_isShared_574_; uint8_t v_isSharedCheck_578_; 
v_a_571_ = lean_ctor_get(v___x_562_, 0);
v_isSharedCheck_578_ = !lean_is_exclusive(v___x_562_);
if (v_isSharedCheck_578_ == 0)
{
v___x_573_ = v___x_562_;
v_isShared_574_ = v_isSharedCheck_578_;
goto v_resetjp_572_;
}
else
{
lean_inc(v_a_571_);
lean_dec(v___x_562_);
v___x_573_ = lean_box(0);
v_isShared_574_ = v_isSharedCheck_578_;
goto v_resetjp_572_;
}
v_resetjp_572_:
{
lean_object* v___x_576_; 
if (v_isShared_574_ == 0)
{
lean_ctor_set_tag(v___x_573_, 0);
v___x_576_ = v___x_573_;
goto v_reusejp_575_;
}
else
{
lean_object* v_reuseFailAlloc_577_; 
v_reuseFailAlloc_577_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_577_, 0, v_a_571_);
v___x_576_ = v_reuseFailAlloc_577_;
goto v_reusejp_575_;
}
v_reusejp_575_:
{
return v___x_576_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_MainM_toBaseIO___boxed(lean_object* v_00_u03b1_579_, lean_object* v_self_580_, lean_object* v___y_581_){
_start:
{
lean_object* v_res_582_; 
v_res_582_ = l_Lake_MainM_toBaseIO(v_00_u03b1_579_, v_self_580_);
return v_res_582_;
}
}
LEAN_EXPORT uint32_t l_Lake_MainM_run___redArg(lean_object* v_self_583_){
_start:
{
lean_object* v___x_585_; 
v___x_585_ = lean_apply_1(v_self_583_, lean_box(0));
if (lean_obj_tag(v___x_585_) == 0)
{
uint32_t v___x_586_; 
lean_dec_ref_known(v___x_585_, 1);
v___x_586_ = 0;
return v___x_586_;
}
else
{
lean_object* v_a_587_; uint32_t v___x_588_; 
v_a_587_ = lean_ctor_get(v___x_585_, 0);
lean_inc(v_a_587_);
lean_dec_ref_known(v___x_585_, 1);
v___x_588_ = lean_unbox_uint32(v_a_587_);
lean_dec(v_a_587_);
return v___x_588_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_MainM_run___redArg___boxed(lean_object* v_self_589_, lean_object* v___y_590_){
_start:
{
uint32_t v_res_591_; lean_object* v_r_592_; 
v_res_591_ = l_Lake_MainM_run___redArg(v_self_589_);
v_r_592_ = lean_box_uint32(v_res_591_);
return v_r_592_;
}
}
LEAN_EXPORT uint32_t l_Lake_MainM_run(lean_object* v_00_u03b1_593_, lean_object* v_self_594_){
_start:
{
lean_object* v___x_596_; 
v___x_596_ = lean_apply_1(v_self_594_, lean_box(0));
if (lean_obj_tag(v___x_596_) == 0)
{
uint32_t v___x_597_; 
lean_dec_ref_known(v___x_596_, 1);
v___x_597_ = 0;
return v___x_597_;
}
else
{
lean_object* v_a_598_; uint32_t v___x_599_; 
v_a_598_ = lean_ctor_get(v___x_596_, 0);
lean_inc(v_a_598_);
lean_dec_ref_known(v___x_596_, 1);
v___x_599_ = lean_unbox_uint32(v_a_598_);
lean_dec(v_a_598_);
return v___x_599_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_MainM_run___boxed(lean_object* v_00_u03b1_600_, lean_object* v_self_601_, lean_object* v___y_602_){
_start:
{
uint32_t v_res_603_; lean_object* v_r_604_; 
v_res_603_ = l_Lake_MainM_run(v_00_u03b1_600_, v_self_601_);
v_r_604_ = lean_box_uint32(v_res_603_);
return v_r_604_;
}
}
LEAN_EXPORT lean_object* l_Lake_MainM_exit___redArg(uint32_t v_rc_605_){
_start:
{
lean_object* v___x_607_; lean_object* v___x_608_; 
v___x_607_ = lean_box_uint32(v_rc_605_);
v___x_608_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_608_, 0, v___x_607_);
return v___x_608_;
}
}
LEAN_EXPORT lean_object* l_Lake_MainM_exit___redArg___boxed(lean_object* v_rc_609_, lean_object* v___y_610_){
_start:
{
uint32_t v_rc_boxed_611_; lean_object* v_res_612_; 
v_rc_boxed_611_ = lean_unbox_uint32(v_rc_609_);
lean_dec(v_rc_609_);
v_res_612_ = l_Lake_MainM_exit___redArg(v_rc_boxed_611_);
return v_res_612_;
}
}
LEAN_EXPORT lean_object* l_Lake_MainM_exit(lean_object* v_00_u03b1_613_, uint32_t v_rc_614_){
_start:
{
lean_object* v___x_616_; lean_object* v___x_617_; 
v___x_616_ = lean_box_uint32(v_rc_614_);
v___x_617_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_617_, 0, v___x_616_);
return v___x_617_;
}
}
LEAN_EXPORT lean_object* l_Lake_MainM_exit___boxed(lean_object* v_00_u03b1_618_, lean_object* v_rc_619_, lean_object* v___y_620_){
_start:
{
uint32_t v_rc_boxed_621_; lean_object* v_res_622_; 
v_rc_boxed_621_ = lean_unbox_uint32(v_rc_619_);
lean_dec(v_rc_619_);
v_res_622_ = l_Lake_MainM_exit(v_00_u03b1_618_, v_rc_boxed_621_);
return v_res_622_;
}
}
LEAN_EXPORT lean_object* l_Lake_MainM_tryCatchExit___redArg(lean_object* v_f_625_, lean_object* v_self_626_){
_start:
{
lean_object* v___x_628_; 
v___x_628_ = lean_apply_1(v_self_626_, lean_box(0));
if (lean_obj_tag(v___x_628_) == 0)
{
lean_dec_ref(v_f_625_);
return v___x_628_;
}
else
{
lean_object* v_a_629_; lean_object* v___x_630_; 
v_a_629_ = lean_ctor_get(v___x_628_, 0);
lean_inc(v_a_629_);
lean_dec_ref_known(v___x_628_, 1);
v___x_630_ = lean_apply_2(v_f_625_, v_a_629_, lean_box(0));
return v___x_630_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_MainM_tryCatchExit___redArg___boxed(lean_object* v_f_631_, lean_object* v_self_632_, lean_object* v___y_633_){
_start:
{
lean_object* v_res_634_; 
v_res_634_ = l_Lake_MainM_tryCatchExit___redArg(v_f_631_, v_self_632_);
return v_res_634_;
}
}
LEAN_EXPORT lean_object* l_Lake_MainM_tryCatchExit(lean_object* v_00_u03b1_635_, lean_object* v_f_636_, lean_object* v_self_637_){
_start:
{
lean_object* v___x_639_; 
v___x_639_ = lean_apply_1(v_self_637_, lean_box(0));
if (lean_obj_tag(v___x_639_) == 0)
{
lean_dec_ref(v_f_636_);
return v___x_639_;
}
else
{
lean_object* v_a_640_; lean_object* v___x_641_; 
v_a_640_ = lean_ctor_get(v___x_639_, 0);
lean_inc(v_a_640_);
lean_dec_ref_known(v___x_639_, 1);
v___x_641_ = lean_apply_2(v_f_636_, v_a_640_, lean_box(0));
return v___x_641_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_MainM_tryCatchExit___boxed(lean_object* v_00_u03b1_642_, lean_object* v_f_643_, lean_object* v_self_644_, lean_object* v___y_645_){
_start:
{
lean_object* v_res_646_; 
v_res_646_ = l_Lake_MainM_tryCatchExit(v_00_u03b1_642_, v_f_643_, v_self_644_);
return v_res_646_;
}
}
static lean_object* _init_l_Lake_MainM_tryCatchError___redArg___boxed__const__1(void){
_start:
{
uint32_t v___x_647_; lean_object* v___x_648_; 
v___x_647_ = 0;
v___x_648_ = lean_box_uint32(v___x_647_);
return v___x_648_;
}
}
LEAN_EXPORT lean_object* l_Lake_MainM_tryCatchError___redArg(lean_object* v_f_649_, lean_object* v_self_650_){
_start:
{
lean_object* v___x_652_; 
v___x_652_ = lean_apply_1(v_self_650_, lean_box(0));
if (lean_obj_tag(v___x_652_) == 0)
{
lean_dec_ref(v_f_649_);
return v___x_652_;
}
else
{
lean_object* v_a_653_; lean_object* v___x_655_; uint8_t v_isShared_656_; uint8_t v_isSharedCheck_665_; 
v_a_653_ = lean_ctor_get(v___x_652_, 0);
v_isSharedCheck_665_ = !lean_is_exclusive(v___x_652_);
if (v_isSharedCheck_665_ == 0)
{
v___x_655_ = v___x_652_;
v_isShared_656_ = v_isSharedCheck_665_;
goto v_resetjp_654_;
}
else
{
lean_inc(v_a_653_);
lean_dec(v___x_652_);
v___x_655_ = lean_box(0);
v_isShared_656_ = v_isSharedCheck_665_;
goto v_resetjp_654_;
}
v_resetjp_654_:
{
uint32_t v___x_657_; uint32_t v___x_658_; uint8_t v___x_659_; 
v___x_657_ = 0;
v___x_658_ = lean_unbox_uint32(v_a_653_);
v___x_659_ = lean_uint32_dec_eq(v___x_658_, v___x_657_);
if (v___x_659_ == 0)
{
lean_object* v___x_660_; 
lean_del_object(v___x_655_);
v___x_660_ = lean_apply_2(v_f_649_, v_a_653_, lean_box(0));
return v___x_660_;
}
else
{
lean_object* v___x_661_; lean_object* v___x_663_; 
lean_dec(v_a_653_);
lean_dec_ref(v_f_649_);
v___x_661_ = l_Lake_MainM_tryCatchError___redArg___boxed__const__1;
if (v_isShared_656_ == 0)
{
lean_ctor_set(v___x_655_, 0, v___x_661_);
v___x_663_ = v___x_655_;
goto v_reusejp_662_;
}
else
{
lean_object* v_reuseFailAlloc_664_; 
v_reuseFailAlloc_664_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_664_, 0, v___x_661_);
v___x_663_ = v_reuseFailAlloc_664_;
goto v_reusejp_662_;
}
v_reusejp_662_:
{
return v___x_663_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_MainM_tryCatchError___redArg___boxed(lean_object* v_f_666_, lean_object* v_self_667_, lean_object* v___y_668_){
_start:
{
lean_object* v_res_669_; 
v_res_669_ = l_Lake_MainM_tryCatchError___redArg(v_f_666_, v_self_667_);
return v_res_669_;
}
}
LEAN_EXPORT lean_object* l_Lake_MainM_tryCatchError(lean_object* v_00_u03b1_670_, lean_object* v_f_671_, lean_object* v_self_672_){
_start:
{
lean_object* v___x_674_; 
v___x_674_ = lean_apply_1(v_self_672_, lean_box(0));
if (lean_obj_tag(v___x_674_) == 0)
{
lean_dec_ref(v_f_671_);
return v___x_674_;
}
else
{
lean_object* v_a_675_; lean_object* v___x_677_; uint8_t v_isShared_678_; uint8_t v_isSharedCheck_687_; 
v_a_675_ = lean_ctor_get(v___x_674_, 0);
v_isSharedCheck_687_ = !lean_is_exclusive(v___x_674_);
if (v_isSharedCheck_687_ == 0)
{
v___x_677_ = v___x_674_;
v_isShared_678_ = v_isSharedCheck_687_;
goto v_resetjp_676_;
}
else
{
lean_inc(v_a_675_);
lean_dec(v___x_674_);
v___x_677_ = lean_box(0);
v_isShared_678_ = v_isSharedCheck_687_;
goto v_resetjp_676_;
}
v_resetjp_676_:
{
uint32_t v___x_679_; uint32_t v___x_680_; uint8_t v___x_681_; 
v___x_679_ = 0;
v___x_680_ = lean_unbox_uint32(v_a_675_);
v___x_681_ = lean_uint32_dec_eq(v___x_680_, v___x_679_);
if (v___x_681_ == 0)
{
lean_object* v___x_682_; 
lean_del_object(v___x_677_);
v___x_682_ = lean_apply_2(v_f_671_, v_a_675_, lean_box(0));
return v___x_682_;
}
else
{
lean_object* v___x_683_; lean_object* v___x_685_; 
lean_dec(v_a_675_);
lean_dec_ref(v_f_671_);
v___x_683_ = l_Lake_MainM_tryCatchError___redArg___boxed__const__1;
if (v_isShared_678_ == 0)
{
lean_ctor_set(v___x_677_, 0, v___x_683_);
v___x_685_ = v___x_677_;
goto v_reusejp_684_;
}
else
{
lean_object* v_reuseFailAlloc_686_; 
v_reuseFailAlloc_686_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_686_, 0, v___x_683_);
v___x_685_ = v_reuseFailAlloc_686_;
goto v_reusejp_684_;
}
v_reusejp_684_:
{
return v___x_685_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_MainM_tryCatchError___boxed(lean_object* v_00_u03b1_688_, lean_object* v_f_689_, lean_object* v_self_690_, lean_object* v___y_691_){
_start:
{
lean_object* v_res_692_; 
v_res_692_ = l_Lake_MainM_tryCatchError(v_00_u03b1_688_, v_f_689_, v_self_690_);
return v_res_692_;
}
}
static lean_object* _init_l_Lake_MainM_failure___redArg___boxed__const__1(void){
_start:
{
uint32_t v___x_693_; lean_object* v___x_694_; 
v___x_693_ = 1;
v___x_694_ = lean_box_uint32(v___x_693_);
return v___x_694_;
}
}
LEAN_EXPORT lean_object* l_Lake_MainM_failure___redArg(){
_start:
{
lean_object* v___x_696_; lean_object* v___x_697_; 
v___x_696_ = l_Lake_MainM_failure___redArg___boxed__const__1;
v___x_697_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_697_, 0, v___x_696_);
return v___x_697_;
}
}
LEAN_EXPORT lean_object* l_Lake_MainM_failure___redArg___boxed(lean_object* v___y_698_){
_start:
{
lean_object* v_res_699_; 
v_res_699_ = l_Lake_MainM_failure___redArg();
return v_res_699_;
}
}
LEAN_EXPORT lean_object* l_Lake_MainM_failure(lean_object* v_00_u03b1_700_){
_start:
{
lean_object* v___x_702_; lean_object* v___x_703_; 
v___x_702_ = l_Lake_MainM_failure___redArg___boxed__const__1;
v___x_703_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_703_, 0, v___x_702_);
return v___x_703_;
}
}
LEAN_EXPORT lean_object* l_Lake_MainM_failure___boxed(lean_object* v_00_u03b1_704_, lean_object* v___y_705_){
_start:
{
lean_object* v_res_706_; 
v_res_706_ = l_Lake_MainM_failure(v_00_u03b1_704_);
return v_res_706_;
}
}
LEAN_EXPORT lean_object* l_Lake_MainM_orElse___redArg(lean_object* v_self_707_, lean_object* v_other_708_){
_start:
{
lean_object* v___x_710_; 
v___x_710_ = lean_apply_1(v_self_707_, lean_box(0));
if (lean_obj_tag(v___x_710_) == 0)
{
lean_dec_ref(v_other_708_);
return v___x_710_;
}
else
{
lean_object* v_a_711_; lean_object* v___x_713_; uint8_t v_isShared_714_; uint8_t v_isSharedCheck_724_; 
v_a_711_ = lean_ctor_get(v___x_710_, 0);
v_isSharedCheck_724_ = !lean_is_exclusive(v___x_710_);
if (v_isSharedCheck_724_ == 0)
{
v___x_713_ = v___x_710_;
v_isShared_714_ = v_isSharedCheck_724_;
goto v_resetjp_712_;
}
else
{
lean_inc(v_a_711_);
lean_dec(v___x_710_);
v___x_713_ = lean_box(0);
v_isShared_714_ = v_isSharedCheck_724_;
goto v_resetjp_712_;
}
v_resetjp_712_:
{
uint32_t v___x_715_; uint32_t v___x_716_; uint8_t v___x_717_; 
v___x_715_ = 0;
v___x_716_ = lean_unbox_uint32(v_a_711_);
lean_dec(v_a_711_);
v___x_717_ = lean_uint32_dec_eq(v___x_716_, v___x_715_);
if (v___x_717_ == 0)
{
lean_object* v___x_718_; lean_object* v___x_719_; 
lean_del_object(v___x_713_);
v___x_718_ = lean_box(0);
v___x_719_ = lean_apply_2(v_other_708_, v___x_718_, lean_box(0));
return v___x_719_;
}
else
{
lean_object* v___x_720_; lean_object* v___x_722_; 
lean_dec_ref(v_other_708_);
v___x_720_ = l_Lake_MainM_tryCatchError___redArg___boxed__const__1;
if (v_isShared_714_ == 0)
{
lean_ctor_set(v___x_713_, 0, v___x_720_);
v___x_722_ = v___x_713_;
goto v_reusejp_721_;
}
else
{
lean_object* v_reuseFailAlloc_723_; 
v_reuseFailAlloc_723_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_723_, 0, v___x_720_);
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
}
}
LEAN_EXPORT lean_object* l_Lake_MainM_orElse___redArg___boxed(lean_object* v_self_725_, lean_object* v_other_726_, lean_object* v___y_727_){
_start:
{
lean_object* v_res_728_; 
v_res_728_ = l_Lake_MainM_orElse___redArg(v_self_725_, v_other_726_);
return v_res_728_;
}
}
LEAN_EXPORT lean_object* l_Lake_MainM_orElse(lean_object* v_00_u03b1_729_, lean_object* v_self_730_, lean_object* v_other_731_){
_start:
{
lean_object* v___x_733_; 
v___x_733_ = lean_apply_1(v_self_730_, lean_box(0));
if (lean_obj_tag(v___x_733_) == 0)
{
lean_dec_ref(v_other_731_);
return v___x_733_;
}
else
{
lean_object* v_a_734_; lean_object* v___x_736_; uint8_t v_isShared_737_; uint8_t v_isSharedCheck_747_; 
v_a_734_ = lean_ctor_get(v___x_733_, 0);
v_isSharedCheck_747_ = !lean_is_exclusive(v___x_733_);
if (v_isSharedCheck_747_ == 0)
{
v___x_736_ = v___x_733_;
v_isShared_737_ = v_isSharedCheck_747_;
goto v_resetjp_735_;
}
else
{
lean_inc(v_a_734_);
lean_dec(v___x_733_);
v___x_736_ = lean_box(0);
v_isShared_737_ = v_isSharedCheck_747_;
goto v_resetjp_735_;
}
v_resetjp_735_:
{
uint32_t v___x_738_; uint32_t v___x_739_; uint8_t v___x_740_; 
v___x_738_ = 0;
v___x_739_ = lean_unbox_uint32(v_a_734_);
lean_dec(v_a_734_);
v___x_740_ = lean_uint32_dec_eq(v___x_739_, v___x_738_);
if (v___x_740_ == 0)
{
lean_object* v___x_741_; lean_object* v___x_742_; 
lean_del_object(v___x_736_);
v___x_741_ = lean_box(0);
v___x_742_ = lean_apply_2(v_other_731_, v___x_741_, lean_box(0));
return v___x_742_;
}
else
{
lean_object* v___x_743_; lean_object* v___x_745_; 
lean_dec_ref(v_other_731_);
v___x_743_ = l_Lake_MainM_tryCatchError___redArg___boxed__const__1;
if (v_isShared_737_ == 0)
{
lean_ctor_set(v___x_736_, 0, v___x_743_);
v___x_745_ = v___x_736_;
goto v_reusejp_744_;
}
else
{
lean_object* v_reuseFailAlloc_746_; 
v_reuseFailAlloc_746_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_746_, 0, v___x_743_);
v___x_745_ = v_reuseFailAlloc_746_;
goto v_reusejp_744_;
}
v_reusejp_744_:
{
return v___x_745_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_MainM_orElse___boxed(lean_object* v_00_u03b1_748_, lean_object* v_self_749_, lean_object* v_other_750_, lean_object* v___y_751_){
_start:
{
lean_object* v_res_752_; 
v_res_752_ = l_Lake_MainM_orElse(v_00_u03b1_748_, v_self_749_, v_other_750_);
return v_res_752_;
}
}
static lean_object* _init_l___private_Lake_Util_MainM_0__Lake_MainM_instAlternative(void){
_start:
{
lean_object* v___x_755_; lean_object* v_toApplicative_756_; lean_object* v___x_757_; lean_object* v___x_758_; lean_object* v___x_759_; 
v___x_755_ = ((lean_object*)(l_Lake_instMonadMainM));
v_toApplicative_756_ = lean_ctor_get(v___x_755_, 0);
v___x_757_ = ((lean_object*)(l___private_Lake_Util_MainM_0__Lake_MainM_instAlternative___closed__0));
v___x_758_ = ((lean_object*)(l___private_Lake_Util_MainM_0__Lake_MainM_instAlternative___closed__1));
lean_inc_ref(v_toApplicative_756_);
v___x_759_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_759_, 0, v_toApplicative_756_);
lean_ctor_set(v___x_759_, 1, v___x_757_);
lean_ctor_set(v___x_759_, 2, v___x_758_);
return v___x_759_;
}
}
LEAN_EXPORT lean_object* l_Lake_MainM_instMonadLog___lam__0(lean_object* v___x_760_, uint8_t v___x_761_, uint8_t v___x_762_, lean_object* v_e_763_){
_start:
{
lean_object* v___x_765_; lean_object* v___x_766_; 
v___x_765_ = l_Lake_OutStream_logEntry(v___x_760_, v_e_763_, v___x_761_, v___x_762_);
v___x_766_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_766_, 0, v___x_765_);
return v___x_766_;
}
}
LEAN_EXPORT lean_object* l_Lake_MainM_instMonadLog___lam__0___boxed(lean_object* v___x_767_, lean_object* v___x_768_, lean_object* v___x_769_, lean_object* v_e_770_, lean_object* v___y_771_){
_start:
{
uint8_t v___x_37__boxed_772_; uint8_t v___x_38__boxed_773_; lean_object* v_res_774_; 
v___x_37__boxed_772_ = lean_unbox(v___x_768_);
v___x_38__boxed_773_ = lean_unbox(v___x_769_);
v_res_774_ = l_Lake_MainM_instMonadLog___lam__0(v___x_767_, v___x_37__boxed_772_, v___x_38__boxed_773_, v_e_770_);
lean_dec_ref(v_e_770_);
lean_dec(v___x_767_);
return v_res_774_;
}
}
LEAN_EXPORT lean_object* l_Lake_MainM_error___redArg___lam__1(uint32_t v_rc_782_){
_start:
{
lean_object* v___x_784_; lean_object* v___x_785_; 
v___x_784_ = lean_box_uint32(v_rc_782_);
v___x_785_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_785_, 0, v___x_784_);
return v___x_785_;
}
}
LEAN_EXPORT lean_object* l_Lake_MainM_error___redArg___lam__1___boxed(lean_object* v_rc_786_, lean_object* v___y_787_){
_start:
{
uint32_t v_rc_boxed_788_; lean_object* v_res_789_; 
v_rc_boxed_788_ = lean_unbox_uint32(v_rc_786_);
lean_dec(v_rc_786_);
v_res_789_ = l_Lake_MainM_error___redArg___lam__1(v_rc_boxed_788_);
return v_res_789_;
}
}
LEAN_EXPORT lean_object* l_Lake_MainM_error___redArg___lam__0(lean_object* v___x_790_, lean_object* v___x_791_, uint8_t v___x_792_, uint8_t v___x_793_){
_start:
{
lean_object* v___x_795_; lean_object* v___x_796_; 
v___x_795_ = l_Lake_OutStream_logEntry(v___x_790_, v___x_791_, v___x_792_, v___x_793_);
v___x_796_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_796_, 0, v___x_795_);
return v___x_796_;
}
}
LEAN_EXPORT lean_object* l_Lake_MainM_error___redArg___lam__0___boxed(lean_object* v___x_797_, lean_object* v___x_798_, lean_object* v___x_799_, lean_object* v___x_800_, lean_object* v___y_801_){
_start:
{
uint8_t v___x_145__boxed_802_; uint8_t v___x_146__boxed_803_; lean_object* v_res_804_; 
v___x_145__boxed_802_ = lean_unbox(v___x_799_);
v___x_146__boxed_803_ = lean_unbox(v___x_800_);
v_res_804_ = l_Lake_MainM_error___redArg___lam__0(v___x_797_, v___x_798_, v___x_145__boxed_802_, v___x_146__boxed_803_);
lean_dec_ref(v___x_798_);
lean_dec(v___x_797_);
return v_res_804_;
}
}
LEAN_EXPORT lean_object* l_Lake_MainM_error___redArg___lam__2(lean_object* v_invFun_805_, lean_object* v___f_806_, lean_object* v_a_807_){
_start:
{
lean_object* v___x_809_; 
v___x_809_ = lean_apply_2(v_invFun_805_, v___f_806_, lean_box(0));
return v___x_809_;
}
}
LEAN_EXPORT lean_object* l_Lake_MainM_error___redArg___lam__2___boxed(lean_object* v_invFun_810_, lean_object* v___f_811_, lean_object* v_a_812_, lean_object* v___y_813_){
_start:
{
lean_object* v_res_814_; 
v_res_814_ = l_Lake_MainM_error___redArg___lam__2(v_invFun_810_, v___f_811_, v_a_812_);
return v_res_814_;
}
}
LEAN_EXPORT lean_object* l_Lake_MainM_error___redArg(lean_object* v_msg_815_, uint32_t v_rc_816_){
_start:
{
lean_object* v___x_818_; lean_object* v_toFun_819_; lean_object* v_invFun_820_; lean_object* v_invFun_821_; lean_object* v___x_822_; lean_object* v___f_823_; uint8_t v___x_824_; uint8_t v___x_825_; lean_object* v___x_826_; uint8_t v___x_827_; lean_object* v___x_828_; lean_object* v___x_829_; lean_object* v___x_830_; lean_object* v___f_831_; lean_object* v___f_832_; lean_object* v___x_833_; lean_object* v___x_834_; lean_object* v___x_835_; 
v___x_818_ = lean_obj_once(&l_Lake_instMonadMainM___aux__1___redArg___closed__0, &l_Lake_instMonadMainM___aux__1___redArg___closed__0_once, _init_l_Lake_instMonadMainM___aux__1___redArg___closed__0);
v_toFun_819_ = lean_ctor_get(v___x_818_, 0);
v_invFun_820_ = lean_ctor_get(v___x_818_, 1);
v_invFun_821_ = lean_ctor_get(v___x_818_, 1);
v___x_822_ = lean_box_uint32(v_rc_816_);
v___f_823_ = lean_alloc_closure((void*)(l_Lake_MainM_error___redArg___lam__1___boxed), 2, 1);
lean_closure_set(v___f_823_, 0, v___x_822_);
v___x_824_ = 1;
v___x_825_ = 0;
v___x_826_ = lean_box(1);
v___x_827_ = 3;
v___x_828_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_828_, 0, v_msg_815_);
lean_ctor_set_uint8(v___x_828_, sizeof(void*)*1, v___x_827_);
v___x_829_ = lean_box(v___x_824_);
v___x_830_ = lean_box(v___x_825_);
v___f_831_ = lean_alloc_closure((void*)(l_Lake_MainM_error___redArg___lam__0___boxed), 5, 4);
lean_closure_set(v___f_831_, 0, v___x_826_);
lean_closure_set(v___f_831_, 1, v___x_828_);
lean_closure_set(v___f_831_, 2, v___x_829_);
lean_closure_set(v___f_831_, 3, v___x_830_);
lean_inc(v_invFun_820_);
v___f_832_ = lean_alloc_closure((void*)(l_Lake_MainM_error___redArg___lam__2___boxed), 4, 2);
lean_closure_set(v___f_832_, 0, v_invFun_820_);
lean_closure_set(v___f_832_, 1, v___f_823_);
lean_inc(v_invFun_821_);
v___x_833_ = lean_apply_1(v_invFun_821_, v___f_831_);
v___x_834_ = lean_alloc_closure((void*)(l_EST_bind___boxed), 7, 6);
lean_closure_set(v___x_834_, 0, lean_box(0));
lean_closure_set(v___x_834_, 1, lean_box(0));
lean_closure_set(v___x_834_, 2, lean_box(0));
lean_closure_set(v___x_834_, 3, lean_box(0));
lean_closure_set(v___x_834_, 4, v___x_833_);
lean_closure_set(v___x_834_, 5, v___f_832_);
lean_inc(v_toFun_819_);
v___x_835_ = lean_apply_2(v_toFun_819_, v___x_834_, lean_box(0));
return v___x_835_;
}
}
LEAN_EXPORT lean_object* l_Lake_MainM_error___redArg___boxed(lean_object* v_msg_836_, lean_object* v_rc_837_, lean_object* v___y_838_){
_start:
{
uint32_t v_rc_boxed_839_; lean_object* v_res_840_; 
v_rc_boxed_839_ = lean_unbox_uint32(v_rc_837_);
lean_dec(v_rc_837_);
v_res_840_ = l_Lake_MainM_error___redArg(v_msg_836_, v_rc_boxed_839_);
return v_res_840_;
}
}
LEAN_EXPORT lean_object* l_Lake_MainM_error(lean_object* v_00_u03b1_841_, lean_object* v_msg_842_, uint32_t v_rc_843_){
_start:
{
lean_object* v___x_845_; lean_object* v_toFun_846_; lean_object* v_invFun_847_; lean_object* v_invFun_848_; lean_object* v___x_849_; lean_object* v___f_850_; uint8_t v___x_851_; uint8_t v___x_852_; lean_object* v___x_853_; uint8_t v___x_854_; lean_object* v___x_855_; lean_object* v___x_856_; lean_object* v___x_857_; lean_object* v___f_858_; lean_object* v___f_859_; lean_object* v___x_860_; lean_object* v___x_861_; lean_object* v___x_862_; 
v___x_845_ = lean_obj_once(&l_Lake_instMonadMainM___aux__1___redArg___closed__0, &l_Lake_instMonadMainM___aux__1___redArg___closed__0_once, _init_l_Lake_instMonadMainM___aux__1___redArg___closed__0);
v_toFun_846_ = lean_ctor_get(v___x_845_, 0);
v_invFun_847_ = lean_ctor_get(v___x_845_, 1);
v_invFun_848_ = lean_ctor_get(v___x_845_, 1);
v___x_849_ = lean_box_uint32(v_rc_843_);
v___f_850_ = lean_alloc_closure((void*)(l_Lake_MainM_error___redArg___lam__1___boxed), 2, 1);
lean_closure_set(v___f_850_, 0, v___x_849_);
v___x_851_ = 1;
v___x_852_ = 0;
v___x_853_ = lean_box(1);
v___x_854_ = 3;
v___x_855_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_855_, 0, v_msg_842_);
lean_ctor_set_uint8(v___x_855_, sizeof(void*)*1, v___x_854_);
v___x_856_ = lean_box(v___x_851_);
v___x_857_ = lean_box(v___x_852_);
v___f_858_ = lean_alloc_closure((void*)(l_Lake_MainM_error___redArg___lam__0___boxed), 5, 4);
lean_closure_set(v___f_858_, 0, v___x_853_);
lean_closure_set(v___f_858_, 1, v___x_855_);
lean_closure_set(v___f_858_, 2, v___x_856_);
lean_closure_set(v___f_858_, 3, v___x_857_);
lean_inc(v_invFun_847_);
v___f_859_ = lean_alloc_closure((void*)(l_Lake_MainM_error___redArg___lam__2___boxed), 4, 2);
lean_closure_set(v___f_859_, 0, v_invFun_847_);
lean_closure_set(v___f_859_, 1, v___f_850_);
lean_inc(v_invFun_848_);
v___x_860_ = lean_apply_1(v_invFun_848_, v___f_858_);
v___x_861_ = lean_alloc_closure((void*)(l_EST_bind___boxed), 7, 6);
lean_closure_set(v___x_861_, 0, lean_box(0));
lean_closure_set(v___x_861_, 1, lean_box(0));
lean_closure_set(v___x_861_, 2, lean_box(0));
lean_closure_set(v___x_861_, 3, lean_box(0));
lean_closure_set(v___x_861_, 4, v___x_860_);
lean_closure_set(v___x_861_, 5, v___f_859_);
lean_inc(v_toFun_846_);
v___x_862_ = lean_apply_2(v_toFun_846_, v___x_861_, lean_box(0));
return v___x_862_;
}
}
LEAN_EXPORT lean_object* l_Lake_MainM_error___boxed(lean_object* v_00_u03b1_863_, lean_object* v_msg_864_, lean_object* v_rc_865_, lean_object* v___y_866_){
_start:
{
uint32_t v_rc_boxed_867_; lean_object* v_res_868_; 
v_rc_boxed_867_ = lean_unbox_uint32(v_rc_865_);
lean_dec(v_rc_865_);
v_res_868_ = l_Lake_MainM_error(v_00_u03b1_863_, v_msg_864_, v_rc_boxed_867_);
return v_res_868_;
}
}
LEAN_EXPORT lean_object* l_Lake_MainM_instMonadError___lam__1(uint32_t v___x_869_){
_start:
{
lean_object* v___x_871_; lean_object* v___x_872_; 
v___x_871_ = lean_box_uint32(v___x_869_);
v___x_872_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_872_, 0, v___x_871_);
return v___x_872_;
}
}
LEAN_EXPORT lean_object* l_Lake_MainM_instMonadError___lam__1___boxed(lean_object* v___x_873_, lean_object* v___y_874_){
_start:
{
uint32_t v___x_76__boxed_875_; lean_object* v_res_876_; 
v___x_76__boxed_875_ = lean_unbox_uint32(v___x_873_);
lean_dec(v___x_873_);
v_res_876_ = l_Lake_MainM_instMonadError___lam__1(v___x_76__boxed_875_);
return v_res_876_;
}
}
static lean_object* _init_l_Lake_MainM_instMonadError___lam__3___closed__0(void){
_start:
{
lean_object* v___x_877_; lean_object* v___f_878_; 
v___x_877_ = l_Lake_MainM_failure___redArg___boxed__const__1;
v___f_878_ = lean_alloc_closure((void*)(l_Lake_MainM_instMonadError___lam__1___boxed), 2, 1);
lean_closure_set(v___f_878_, 0, v___x_877_);
return v___f_878_;
}
}
LEAN_EXPORT lean_object* l_Lake_MainM_instMonadError___lam__3(lean_object* v___f_879_, lean_object* v_00_u03b1_880_, lean_object* v_msg_881_){
_start:
{
lean_object* v___x_883_; lean_object* v_toFun_884_; lean_object* v_invFun_885_; lean_object* v_invFun_886_; lean_object* v___f_887_; uint8_t v___x_888_; uint8_t v___x_889_; lean_object* v___x_890_; uint8_t v___x_891_; lean_object* v___x_892_; lean_object* v___x_893_; lean_object* v___x_894_; lean_object* v___f_895_; lean_object* v___f_896_; lean_object* v___x_897_; lean_object* v___x_898_; lean_object* v___x_899_; 
v___x_883_ = lean_apply_1(v___f_879_, lean_box(0));
v_toFun_884_ = lean_ctor_get(v___x_883_, 0);
lean_inc(v_toFun_884_);
v_invFun_885_ = lean_ctor_get(v___x_883_, 1);
lean_inc(v_invFun_885_);
v_invFun_886_ = lean_ctor_get(v___x_883_, 1);
lean_inc(v_invFun_886_);
lean_dec_ref(v___x_883_);
v___f_887_ = lean_obj_once(&l_Lake_MainM_instMonadError___lam__3___closed__0, &l_Lake_MainM_instMonadError___lam__3___closed__0_once, _init_l_Lake_MainM_instMonadError___lam__3___closed__0);
v___x_888_ = 1;
v___x_889_ = 0;
v___x_890_ = lean_box(1);
v___x_891_ = 3;
v___x_892_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_892_, 0, v_msg_881_);
lean_ctor_set_uint8(v___x_892_, sizeof(void*)*1, v___x_891_);
v___x_893_ = lean_box(v___x_888_);
v___x_894_ = lean_box(v___x_889_);
v___f_895_ = lean_alloc_closure((void*)(l_Lake_MainM_error___redArg___lam__0___boxed), 5, 4);
lean_closure_set(v___f_895_, 0, v___x_890_);
lean_closure_set(v___f_895_, 1, v___x_892_);
lean_closure_set(v___f_895_, 2, v___x_893_);
lean_closure_set(v___f_895_, 3, v___x_894_);
v___f_896_ = lean_alloc_closure((void*)(l_Lake_MainM_error___redArg___lam__2___boxed), 4, 2);
lean_closure_set(v___f_896_, 0, v_invFun_885_);
lean_closure_set(v___f_896_, 1, v___f_887_);
v___x_897_ = lean_apply_1(v_invFun_886_, v___f_895_);
v___x_898_ = lean_alloc_closure((void*)(l_EST_bind___boxed), 7, 6);
lean_closure_set(v___x_898_, 0, lean_box(0));
lean_closure_set(v___x_898_, 1, lean_box(0));
lean_closure_set(v___x_898_, 2, lean_box(0));
lean_closure_set(v___x_898_, 3, lean_box(0));
lean_closure_set(v___x_898_, 4, v___x_897_);
lean_closure_set(v___x_898_, 5, v___f_896_);
v___x_899_ = lean_apply_2(v_toFun_884_, v___x_898_, lean_box(0));
return v___x_899_;
}
}
LEAN_EXPORT lean_object* l_Lake_MainM_instMonadError___lam__3___boxed(lean_object* v___f_900_, lean_object* v_00_u03b1_901_, lean_object* v_msg_902_, lean_object* v___y_903_){
_start:
{
lean_object* v_res_904_; 
v_res_904_ = l_Lake_MainM_instMonadError___lam__3(v___f_900_, v_00_u03b1_901_, v_msg_902_);
return v_res_904_;
}
}
LEAN_EXPORT lean_object* l_Lake_MainM_instMonadLiftIO___lam__1(lean_object* v_a_908_){
_start:
{
if (lean_obj_tag(v_a_908_) == 0)
{
lean_object* v_a_910_; lean_object* v___x_912_; uint8_t v_isShared_913_; uint8_t v_isSharedCheck_925_; 
v_a_910_ = lean_ctor_get(v_a_908_, 0);
v_isSharedCheck_925_ = !lean_is_exclusive(v_a_908_);
if (v_isSharedCheck_925_ == 0)
{
v___x_912_ = v_a_908_;
v_isShared_913_ = v_isSharedCheck_925_;
goto v_resetjp_911_;
}
else
{
lean_inc(v_a_910_);
lean_dec(v_a_908_);
v___x_912_ = lean_box(0);
v_isShared_913_ = v_isSharedCheck_925_;
goto v_resetjp_911_;
}
v_resetjp_911_:
{
lean_object* v___x_914_; uint8_t v___x_915_; uint8_t v___x_916_; lean_object* v___x_917_; uint8_t v___x_918_; lean_object* v___x_919_; lean_object* v___x_920_; lean_object* v___x_921_; lean_object* v___x_923_; 
v___x_914_ = lean_io_error_to_string(v_a_910_);
v___x_915_ = 1;
v___x_916_ = 0;
v___x_917_ = lean_box(1);
v___x_918_ = 3;
v___x_919_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_919_, 0, v___x_914_);
lean_ctor_set_uint8(v___x_919_, sizeof(void*)*1, v___x_918_);
v___x_920_ = l_Lake_OutStream_logEntry(v___x_917_, v___x_919_, v___x_915_, v___x_916_);
lean_dec_ref_known(v___x_919_, 1);
v___x_921_ = l_Lake_MainM_failure___redArg___boxed__const__1;
if (v_isShared_913_ == 0)
{
lean_ctor_set_tag(v___x_912_, 1);
lean_ctor_set(v___x_912_, 0, v___x_921_);
v___x_923_ = v___x_912_;
goto v_reusejp_922_;
}
else
{
lean_object* v_reuseFailAlloc_924_; 
v_reuseFailAlloc_924_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_924_, 0, v___x_921_);
v___x_923_ = v_reuseFailAlloc_924_;
goto v_reusejp_922_;
}
v_reusejp_922_:
{
return v___x_923_;
}
}
}
else
{
lean_object* v_a_926_; lean_object* v___x_928_; uint8_t v_isShared_929_; uint8_t v_isSharedCheck_933_; 
v_a_926_ = lean_ctor_get(v_a_908_, 0);
v_isSharedCheck_933_ = !lean_is_exclusive(v_a_908_);
if (v_isSharedCheck_933_ == 0)
{
v___x_928_ = v_a_908_;
v_isShared_929_ = v_isSharedCheck_933_;
goto v_resetjp_927_;
}
else
{
lean_inc(v_a_926_);
lean_dec(v_a_908_);
v___x_928_ = lean_box(0);
v_isShared_929_ = v_isSharedCheck_933_;
goto v_resetjp_927_;
}
v_resetjp_927_:
{
lean_object* v___x_931_; 
if (v_isShared_929_ == 0)
{
lean_ctor_set_tag(v___x_928_, 0);
v___x_931_ = v___x_928_;
goto v_reusejp_930_;
}
else
{
lean_object* v_reuseFailAlloc_932_; 
v_reuseFailAlloc_932_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_932_, 0, v_a_926_);
v___x_931_ = v_reuseFailAlloc_932_;
goto v_reusejp_930_;
}
v_reusejp_930_:
{
return v___x_931_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_MainM_instMonadLiftIO___lam__1___boxed(lean_object* v_a_934_, lean_object* v___y_935_){
_start:
{
lean_object* v_res_936_; 
v_res_936_ = l_Lake_MainM_instMonadLiftIO___lam__1(v_a_934_);
return v_res_936_;
}
}
LEAN_EXPORT lean_object* l_Lake_MainM_instMonadLiftIO___lam__0(lean_object* v_invFun_937_, lean_object* v_a_938_){
_start:
{
lean_object* v___f_940_; lean_object* v___x_941_; 
v___f_940_ = lean_alloc_closure((void*)(l_Lake_MainM_instMonadLiftIO___lam__1___boxed), 2, 1);
lean_closure_set(v___f_940_, 0, v_a_938_);
v___x_941_ = lean_apply_2(v_invFun_937_, v___f_940_, lean_box(0));
return v___x_941_;
}
}
LEAN_EXPORT lean_object* l_Lake_MainM_instMonadLiftIO___lam__0___boxed(lean_object* v_invFun_942_, lean_object* v_a_943_, lean_object* v___y_944_){
_start:
{
lean_object* v_res_945_; 
v_res_945_ = l_Lake_MainM_instMonadLiftIO___lam__0(v_invFun_942_, v_a_943_);
return v_res_945_;
}
}
LEAN_EXPORT lean_object* l_Lake_MainM_instMonadLiftIO___lam__2(lean_object* v___f_946_, lean_object* v_00_u03b1_947_, lean_object* v___y_948_){
_start:
{
lean_object* v___x_950_; lean_object* v_toFun_951_; lean_object* v_invFun_952_; lean_object* v_invFun_953_; lean_object* v___x_954_; lean_object* v___x_955_; lean_object* v___f_956_; lean_object* v___x_957_; lean_object* v___x_958_; lean_object* v___x_959_; 
v___x_950_ = lean_apply_1(v___f_946_, lean_box(0));
v_toFun_951_ = lean_ctor_get(v___x_950_, 0);
lean_inc(v_toFun_951_);
v_invFun_952_ = lean_ctor_get(v___x_950_, 1);
lean_inc(v_invFun_952_);
v_invFun_953_ = lean_ctor_get(v___x_950_, 1);
lean_inc(v_invFun_953_);
lean_dec_ref(v___x_950_);
v___x_954_ = lean_alloc_closure((void*)(l_EIO_toBaseIO___boxed), 4, 3);
lean_closure_set(v___x_954_, 0, lean_box(0));
lean_closure_set(v___x_954_, 1, lean_box(0));
lean_closure_set(v___x_954_, 2, v___y_948_);
v___x_955_ = lean_alloc_closure((void*)(l_Lake_instMonadLiftBaseIOMainM___aux__1___boxed), 3, 2);
lean_closure_set(v___x_955_, 0, lean_box(0));
lean_closure_set(v___x_955_, 1, v___x_954_);
v___f_956_ = lean_alloc_closure((void*)(l_Lake_MainM_instMonadLiftIO___lam__0___boxed), 3, 1);
lean_closure_set(v___f_956_, 0, v_invFun_952_);
v___x_957_ = lean_apply_1(v_invFun_953_, v___x_955_);
v___x_958_ = lean_alloc_closure((void*)(l_EST_bind___boxed), 7, 6);
lean_closure_set(v___x_958_, 0, lean_box(0));
lean_closure_set(v___x_958_, 1, lean_box(0));
lean_closure_set(v___x_958_, 2, lean_box(0));
lean_closure_set(v___x_958_, 3, lean_box(0));
lean_closure_set(v___x_958_, 4, v___x_957_);
lean_closure_set(v___x_958_, 5, v___f_956_);
v___x_959_ = lean_apply_2(v_toFun_951_, v___x_958_, lean_box(0));
return v___x_959_;
}
}
LEAN_EXPORT lean_object* l_Lake_MainM_instMonadLiftIO___lam__2___boxed(lean_object* v___f_960_, lean_object* v_00_u03b1_961_, lean_object* v___y_962_, lean_object* v___y_963_){
_start:
{
lean_object* v_res_964_; 
v_res_964_ = l_Lake_MainM_instMonadLiftIO___lam__2(v___f_960_, v_00_u03b1_961_, v___y_962_);
return v_res_964_;
}
}
LEAN_EXPORT lean_object* l_Lake_MainM_runLogIO___redArg___lam__1(lean_object* v_a_968_){
_start:
{
if (lean_obj_tag(v_a_968_) == 0)
{
lean_object* v___x_970_; lean_object* v___x_971_; 
v___x_970_ = l_Lake_MainM_failure___redArg___boxed__const__1;
v___x_971_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_971_, 0, v___x_970_);
return v___x_971_;
}
else
{
lean_object* v_val_972_; lean_object* v___x_974_; uint8_t v_isShared_975_; uint8_t v_isSharedCheck_979_; 
v_val_972_ = lean_ctor_get(v_a_968_, 0);
v_isSharedCheck_979_ = !lean_is_exclusive(v_a_968_);
if (v_isSharedCheck_979_ == 0)
{
v___x_974_ = v_a_968_;
v_isShared_975_ = v_isSharedCheck_979_;
goto v_resetjp_973_;
}
else
{
lean_inc(v_val_972_);
lean_dec(v_a_968_);
v___x_974_ = lean_box(0);
v_isShared_975_ = v_isSharedCheck_979_;
goto v_resetjp_973_;
}
v_resetjp_973_:
{
lean_object* v___x_977_; 
if (v_isShared_975_ == 0)
{
lean_ctor_set_tag(v___x_974_, 0);
v___x_977_ = v___x_974_;
goto v_reusejp_976_;
}
else
{
lean_object* v_reuseFailAlloc_978_; 
v_reuseFailAlloc_978_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_978_, 0, v_val_972_);
v___x_977_ = v_reuseFailAlloc_978_;
goto v_reusejp_976_;
}
v_reusejp_976_:
{
return v___x_977_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_MainM_runLogIO___redArg___lam__1___boxed(lean_object* v_a_980_, lean_object* v___y_981_){
_start:
{
lean_object* v_res_982_; 
v_res_982_ = l_Lake_MainM_runLogIO___redArg___lam__1(v_a_980_);
return v_res_982_;
}
}
LEAN_EXPORT lean_object* l_Lake_MainM_runLogIO___redArg___lam__0(lean_object* v_invFun_983_, lean_object* v_a_984_){
_start:
{
lean_object* v___f_986_; lean_object* v___x_987_; 
v___f_986_ = lean_alloc_closure((void*)(l_Lake_MainM_runLogIO___redArg___lam__1___boxed), 2, 1);
lean_closure_set(v___f_986_, 0, v_a_984_);
v___x_987_ = lean_apply_2(v_invFun_983_, v___f_986_, lean_box(0));
return v___x_987_;
}
}
LEAN_EXPORT lean_object* l_Lake_MainM_runLogIO___redArg___lam__0___boxed(lean_object* v_invFun_988_, lean_object* v_a_989_, lean_object* v___y_990_){
_start:
{
lean_object* v_res_991_; 
v_res_991_ = l_Lake_MainM_runLogIO___redArg___lam__0(v_invFun_988_, v_a_989_);
return v_res_991_;
}
}
LEAN_EXPORT lean_object* l_Lake_MainM_runLogIO___redArg(lean_object* v_x_992_, lean_object* v_cfg_993_){
_start:
{
lean_object* v___x_995_; lean_object* v_toFun_996_; lean_object* v_invFun_997_; lean_object* v_invFun_998_; lean_object* v___x_999_; lean_object* v___x_1000_; lean_object* v___f_1001_; lean_object* v___x_1002_; lean_object* v___x_1003_; lean_object* v___x_1004_; 
v___x_995_ = lean_obj_once(&l_Lake_instMonadMainM___aux__1___redArg___closed__0, &l_Lake_instMonadMainM___aux__1___redArg___closed__0_once, _init_l_Lake_instMonadMainM___aux__1___redArg___closed__0);
v_toFun_996_ = lean_ctor_get(v___x_995_, 0);
v_invFun_997_ = lean_ctor_get(v___x_995_, 1);
v_invFun_998_ = lean_ctor_get(v___x_995_, 1);
v___x_999_ = lean_alloc_closure((void*)(l_Lake_LogIO_toBaseIO___boxed), 4, 3);
lean_closure_set(v___x_999_, 0, lean_box(0));
lean_closure_set(v___x_999_, 1, v_x_992_);
lean_closure_set(v___x_999_, 2, v_cfg_993_);
v___x_1000_ = lean_alloc_closure((void*)(l_Lake_instMonadLiftBaseIOMainM___aux__1___boxed), 3, 2);
lean_closure_set(v___x_1000_, 0, lean_box(0));
lean_closure_set(v___x_1000_, 1, v___x_999_);
lean_inc(v_invFun_997_);
v___f_1001_ = lean_alloc_closure((void*)(l_Lake_MainM_runLogIO___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_1001_, 0, v_invFun_997_);
lean_inc(v_invFun_998_);
v___x_1002_ = lean_apply_1(v_invFun_998_, v___x_1000_);
v___x_1003_ = lean_alloc_closure((void*)(l_EST_bind___boxed), 7, 6);
lean_closure_set(v___x_1003_, 0, lean_box(0));
lean_closure_set(v___x_1003_, 1, lean_box(0));
lean_closure_set(v___x_1003_, 2, lean_box(0));
lean_closure_set(v___x_1003_, 3, lean_box(0));
lean_closure_set(v___x_1003_, 4, v___x_1002_);
lean_closure_set(v___x_1003_, 5, v___f_1001_);
lean_inc(v_toFun_996_);
v___x_1004_ = lean_apply_2(v_toFun_996_, v___x_1003_, lean_box(0));
return v___x_1004_;
}
}
LEAN_EXPORT lean_object* l_Lake_MainM_runLogIO___redArg___boxed(lean_object* v_x_1005_, lean_object* v_cfg_1006_, lean_object* v___y_1007_){
_start:
{
lean_object* v_res_1008_; 
v_res_1008_ = l_Lake_MainM_runLogIO___redArg(v_x_1005_, v_cfg_1006_);
return v_res_1008_;
}
}
LEAN_EXPORT lean_object* l_Lake_MainM_runLogIO(lean_object* v_00_u03b1_1009_, lean_object* v_x_1010_, lean_object* v_cfg_1011_){
_start:
{
lean_object* v___x_1013_; lean_object* v_toFun_1014_; lean_object* v_invFun_1015_; lean_object* v_invFun_1016_; lean_object* v___x_1017_; lean_object* v___x_1018_; lean_object* v___f_1019_; lean_object* v___x_1020_; lean_object* v___x_1021_; lean_object* v___x_1022_; 
v___x_1013_ = lean_obj_once(&l_Lake_instMonadMainM___aux__1___redArg___closed__0, &l_Lake_instMonadMainM___aux__1___redArg___closed__0_once, _init_l_Lake_instMonadMainM___aux__1___redArg___closed__0);
v_toFun_1014_ = lean_ctor_get(v___x_1013_, 0);
v_invFun_1015_ = lean_ctor_get(v___x_1013_, 1);
v_invFun_1016_ = lean_ctor_get(v___x_1013_, 1);
v___x_1017_ = lean_alloc_closure((void*)(l_Lake_LogIO_toBaseIO___boxed), 4, 3);
lean_closure_set(v___x_1017_, 0, lean_box(0));
lean_closure_set(v___x_1017_, 1, v_x_1010_);
lean_closure_set(v___x_1017_, 2, v_cfg_1011_);
v___x_1018_ = lean_alloc_closure((void*)(l_Lake_instMonadLiftBaseIOMainM___aux__1___boxed), 3, 2);
lean_closure_set(v___x_1018_, 0, lean_box(0));
lean_closure_set(v___x_1018_, 1, v___x_1017_);
lean_inc(v_invFun_1015_);
v___f_1019_ = lean_alloc_closure((void*)(l_Lake_MainM_runLogIO___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_1019_, 0, v_invFun_1015_);
lean_inc(v_invFun_1016_);
v___x_1020_ = lean_apply_1(v_invFun_1016_, v___x_1018_);
v___x_1021_ = lean_alloc_closure((void*)(l_EST_bind___boxed), 7, 6);
lean_closure_set(v___x_1021_, 0, lean_box(0));
lean_closure_set(v___x_1021_, 1, lean_box(0));
lean_closure_set(v___x_1021_, 2, lean_box(0));
lean_closure_set(v___x_1021_, 3, lean_box(0));
lean_closure_set(v___x_1021_, 4, v___x_1020_);
lean_closure_set(v___x_1021_, 5, v___f_1019_);
lean_inc(v_toFun_1014_);
v___x_1022_ = lean_apply_2(v_toFun_1014_, v___x_1021_, lean_box(0));
return v___x_1022_;
}
}
LEAN_EXPORT lean_object* l_Lake_MainM_runLogIO___boxed(lean_object* v_00_u03b1_1023_, lean_object* v_x_1024_, lean_object* v_cfg_1025_, lean_object* v___y_1026_){
_start:
{
lean_object* v_res_1027_; 
v_res_1027_ = l_Lake_MainM_runLogIO(v_00_u03b1_1023_, v_x_1024_, v_cfg_1025_);
return v_res_1027_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_MainM_liftLogIO_spec__0(lean_object* v_val_1028_, uint8_t v___y_1029_, uint8_t v_val_1030_, lean_object* v_as_1031_, size_t v_i_1032_, size_t v_stop_1033_, lean_object* v_b_1034_){
_start:
{
uint8_t v___x_1036_; 
v___x_1036_ = lean_usize_dec_eq(v_i_1032_, v_stop_1033_);
if (v___x_1036_ == 0)
{
lean_object* v___x_1037_; lean_object* v___x_1038_; size_t v___x_1039_; size_t v___x_1040_; 
v___x_1037_ = lean_array_uget_borrowed(v_as_1031_, v_i_1032_);
lean_inc_ref(v_val_1028_);
v___x_1038_ = l_Lake_logToStream(v___x_1037_, v_val_1028_, v___y_1029_, v_val_1030_);
v___x_1039_ = ((size_t)1ULL);
v___x_1040_ = lean_usize_add(v_i_1032_, v___x_1039_);
v_i_1032_ = v___x_1040_;
v_b_1034_ = v___x_1038_;
goto _start;
}
else
{
lean_dec_ref(v_val_1028_);
return v_b_1034_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_MainM_liftLogIO_spec__0___boxed(lean_object* v_val_1042_, lean_object* v___y_1043_, lean_object* v_val_1044_, lean_object* v_as_1045_, lean_object* v_i_1046_, lean_object* v_stop_1047_, lean_object* v_b_1048_, lean_object* v___y_1049_){
_start:
{
uint8_t v___y_827__boxed_1050_; uint8_t v_val_828__boxed_1051_; size_t v_i_boxed_1052_; size_t v_stop_boxed_1053_; lean_object* v_res_1054_; 
v___y_827__boxed_1050_ = lean_unbox(v___y_1043_);
v_val_828__boxed_1051_ = lean_unbox(v_val_1044_);
v_i_boxed_1052_ = lean_unbox_usize(v_i_1046_);
lean_dec(v_i_1046_);
v_stop_boxed_1053_ = lean_unbox_usize(v_stop_1047_);
lean_dec(v_stop_1047_);
v_res_1054_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_MainM_liftLogIO_spec__0(v_val_1042_, v___y_827__boxed_1050_, v_val_828__boxed_1051_, v_as_1045_, v_i_boxed_1052_, v_stop_boxed_1053_, v_b_1048_);
lean_dec_ref(v_as_1045_);
return v_res_1054_;
}
}
LEAN_EXPORT lean_object* l_Lake_MainM_liftLogIO___redArg(lean_object* v_x_1057_){
_start:
{
lean_object* v___y_1063_; uint8_t v___y_1064_; uint8_t v___x_1073_; uint8_t v___x_1074_; uint8_t v___x_1075_; lean_object* v___x_1076_; lean_object* v___y_1078_; lean_object* v___y_1079_; uint8_t v___y_1080_; uint8_t v___y_1081_; lean_object* v___y_1092_; lean_object* v___y_1093_; uint8_t v___y_1094_; uint8_t v___y_1097_; lean_object* v___y_1098_; lean_object* v___y_1099_; uint8_t v___y_1100_; lean_object* v___y_1102_; lean_object* v___y_1103_; uint8_t v___y_1104_; lean_object* v___x_1109_; lean_object* v___x_1110_; 
v___x_1073_ = 3;
v___x_1074_ = 1;
v___x_1075_ = 0;
v___x_1076_ = lean_box(1);
v___x_1109_ = ((lean_object*)(l_Lake_MainM_liftLogIO___redArg___closed__0));
v___x_1110_ = lean_apply_2(v_x_1057_, v___x_1109_, lean_box(0));
if (lean_obj_tag(v___x_1110_) == 0)
{
lean_object* v_a_1111_; lean_object* v_a_1112_; lean_object* v___x_1113_; uint8_t v___x_1114_; 
v_a_1111_ = lean_ctor_get(v___x_1110_, 0);
lean_inc(v_a_1111_);
v_a_1112_ = lean_ctor_get(v___x_1110_, 1);
lean_inc(v_a_1112_);
lean_dec_ref_known(v___x_1110_, 2);
v___x_1113_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1113_, 0, v_a_1111_);
v___x_1114_ = 0;
v___y_1102_ = v_a_1112_;
v___y_1103_ = v___x_1113_;
v___y_1104_ = v___x_1114_;
goto v___jp_1101_;
}
else
{
lean_object* v_a_1115_; lean_object* v___x_1116_; uint8_t v___x_1117_; 
v_a_1115_ = lean_ctor_get(v___x_1110_, 1);
lean_inc(v_a_1115_);
lean_dec_ref_known(v___x_1110_, 2);
v___x_1116_ = lean_box(0);
v___x_1117_ = 1;
v___y_1102_ = v_a_1115_;
v___y_1103_ = v___x_1116_;
v___y_1104_ = v___x_1117_;
goto v___jp_1101_;
}
v___jp_1059_:
{
lean_object* v___x_1060_; lean_object* v___x_1061_; 
v___x_1060_ = l_Lake_MainM_failure___redArg___boxed__const__1;
v___x_1061_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1061_, 0, v___x_1060_);
return v___x_1061_;
}
v___jp_1062_:
{
if (v___y_1064_ == 0)
{
if (lean_obj_tag(v___y_1063_) == 0)
{
goto v___jp_1059_;
}
else
{
lean_object* v_val_1065_; lean_object* v___x_1067_; uint8_t v_isShared_1068_; uint8_t v_isSharedCheck_1072_; 
v_val_1065_ = lean_ctor_get(v___y_1063_, 0);
v_isSharedCheck_1072_ = !lean_is_exclusive(v___y_1063_);
if (v_isSharedCheck_1072_ == 0)
{
v___x_1067_ = v___y_1063_;
v_isShared_1068_ = v_isSharedCheck_1072_;
goto v_resetjp_1066_;
}
else
{
lean_inc(v_val_1065_);
lean_dec(v___y_1063_);
v___x_1067_ = lean_box(0);
v_isShared_1068_ = v_isSharedCheck_1072_;
goto v_resetjp_1066_;
}
v_resetjp_1066_:
{
lean_object* v___x_1070_; 
if (v_isShared_1068_ == 0)
{
lean_ctor_set_tag(v___x_1067_, 0);
v___x_1070_ = v___x_1067_;
goto v_reusejp_1069_;
}
else
{
lean_object* v_reuseFailAlloc_1071_; 
v_reuseFailAlloc_1071_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1071_, 0, v_val_1065_);
v___x_1070_ = v_reuseFailAlloc_1071_;
goto v_reusejp_1069_;
}
v_reusejp_1069_:
{
return v___x_1070_;
}
}
}
}
else
{
lean_dec(v___y_1063_);
goto v___jp_1059_;
}
}
v___jp_1077_:
{
lean_object* v___x_1082_; uint8_t v___x_1083_; lean_object* v___x_1084_; lean_object* v___x_1085_; uint8_t v___x_1086_; 
v___x_1082_ = l_Lake_OutStream_get(v___x_1076_);
lean_inc_ref(v___x_1082_);
v___x_1083_ = l_Lake_AnsiMode_isEnabled(v___x_1082_, v___x_1075_);
v___x_1084_ = lean_unsigned_to_nat(0u);
v___x_1085_ = lean_array_get_size(v___y_1078_);
v___x_1086_ = lean_nat_dec_lt(v___x_1084_, v___x_1085_);
if (v___x_1086_ == 0)
{
lean_dec_ref(v___x_1082_);
lean_dec_ref(v___y_1078_);
v___y_1063_ = v___y_1079_;
v___y_1064_ = v___y_1080_;
goto v___jp_1062_;
}
else
{
lean_object* v___x_1087_; size_t v___x_1088_; size_t v___x_1089_; lean_object* v___x_1090_; 
v___x_1087_ = lean_box(0);
v___x_1088_ = ((size_t)0ULL);
v___x_1089_ = lean_usize_of_nat(v___x_1085_);
v___x_1090_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_MainM_liftLogIO_spec__0(v___x_1082_, v___y_1081_, v___x_1083_, v___y_1078_, v___x_1088_, v___x_1089_, v___x_1087_);
lean_dec_ref(v___y_1078_);
v___y_1063_ = v___y_1079_;
v___y_1064_ = v___y_1080_;
goto v___jp_1062_;
}
}
v___jp_1091_:
{
uint8_t v___x_1095_; 
v___x_1095_ = 0;
v___y_1078_ = v___y_1092_;
v___y_1079_ = v___y_1093_;
v___y_1080_ = v___y_1094_;
v___y_1081_ = v___x_1095_;
goto v___jp_1077_;
}
v___jp_1096_:
{
if (v___y_1097_ == 0)
{
if (v___y_1100_ == 0)
{
v___y_1078_ = v___y_1098_;
v___y_1079_ = v___y_1099_;
v___y_1080_ = v___y_1100_;
v___y_1081_ = v___x_1074_;
goto v___jp_1077_;
}
else
{
v___y_1092_ = v___y_1098_;
v___y_1093_ = v___y_1099_;
v___y_1094_ = v___y_1100_;
goto v___jp_1091_;
}
}
else
{
v___y_1092_ = v___y_1098_;
v___y_1093_ = v___y_1099_;
v___y_1094_ = v___y_1097_;
goto v___jp_1091_;
}
}
v___jp_1101_:
{
uint8_t v___x_1105_; uint8_t v___x_1106_; 
v___x_1105_ = l_Lake_Log_maxLv(v___y_1102_);
v___x_1106_ = l_Lake_instOrdLogLevel_ord(v___x_1073_, v___x_1105_);
if (v___x_1106_ == 2)
{
uint8_t v___x_1107_; 
v___x_1107_ = 0;
v___y_1097_ = v___y_1104_;
v___y_1098_ = v___y_1102_;
v___y_1099_ = v___y_1103_;
v___y_1100_ = v___x_1107_;
goto v___jp_1096_;
}
else
{
uint8_t v___x_1108_; 
v___x_1108_ = 1;
v___y_1097_ = v___y_1104_;
v___y_1098_ = v___y_1102_;
v___y_1099_ = v___y_1103_;
v___y_1100_ = v___x_1108_;
goto v___jp_1096_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_MainM_liftLogIO___redArg___boxed(lean_object* v_x_1118_, lean_object* v___y_1119_){
_start:
{
lean_object* v_res_1120_; 
v_res_1120_ = l_Lake_MainM_liftLogIO___redArg(v_x_1118_);
return v_res_1120_;
}
}
LEAN_EXPORT lean_object* l_Lake_MainM_liftLogIO(lean_object* v_00_u03b1_1121_, lean_object* v_x_1122_){
_start:
{
lean_object* v___x_1124_; 
v___x_1124_ = l_Lake_MainM_liftLogIO___redArg(v_x_1122_);
return v___x_1124_;
}
}
LEAN_EXPORT lean_object* l_Lake_MainM_liftLogIO___boxed(lean_object* v_00_u03b1_1125_, lean_object* v_x_1126_, lean_object* v___y_1127_){
_start:
{
lean_object* v_res_1128_; 
v_res_1128_ = l_Lake_MainM_liftLogIO(v_00_u03b1_1125_, v_x_1126_);
return v_res_1128_;
}
}
LEAN_EXPORT lean_object* l_Lake_MainM_runLoggerIO___redArg(lean_object* v_x_1131_, lean_object* v_cfg_1132_){
_start:
{
lean_object* v___x_1134_; lean_object* v_toFun_1135_; lean_object* v_invFun_1136_; lean_object* v_invFun_1137_; lean_object* v___x_1138_; lean_object* v___x_1139_; lean_object* v___f_1140_; lean_object* v___x_1141_; lean_object* v___x_1142_; lean_object* v___x_1143_; 
v___x_1134_ = lean_obj_once(&l_Lake_instMonadMainM___aux__1___redArg___closed__0, &l_Lake_instMonadMainM___aux__1___redArg___closed__0_once, _init_l_Lake_instMonadMainM___aux__1___redArg___closed__0);
v_toFun_1135_ = lean_ctor_get(v___x_1134_, 0);
v_invFun_1136_ = lean_ctor_get(v___x_1134_, 1);
v_invFun_1137_ = lean_ctor_get(v___x_1134_, 1);
v___x_1138_ = lean_alloc_closure((void*)(l_Lake_LoggerIO_toBaseIO___boxed), 4, 3);
lean_closure_set(v___x_1138_, 0, lean_box(0));
lean_closure_set(v___x_1138_, 1, v_x_1131_);
lean_closure_set(v___x_1138_, 2, v_cfg_1132_);
v___x_1139_ = lean_alloc_closure((void*)(l_Lake_instMonadLiftBaseIOMainM___aux__1___boxed), 3, 2);
lean_closure_set(v___x_1139_, 0, lean_box(0));
lean_closure_set(v___x_1139_, 1, v___x_1138_);
lean_inc(v_invFun_1136_);
v___f_1140_ = lean_alloc_closure((void*)(l_Lake_MainM_runLogIO___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_1140_, 0, v_invFun_1136_);
lean_inc(v_invFun_1137_);
v___x_1141_ = lean_apply_1(v_invFun_1137_, v___x_1139_);
v___x_1142_ = lean_alloc_closure((void*)(l_EST_bind___boxed), 7, 6);
lean_closure_set(v___x_1142_, 0, lean_box(0));
lean_closure_set(v___x_1142_, 1, lean_box(0));
lean_closure_set(v___x_1142_, 2, lean_box(0));
lean_closure_set(v___x_1142_, 3, lean_box(0));
lean_closure_set(v___x_1142_, 4, v___x_1141_);
lean_closure_set(v___x_1142_, 5, v___f_1140_);
lean_inc(v_toFun_1135_);
v___x_1143_ = lean_apply_2(v_toFun_1135_, v___x_1142_, lean_box(0));
return v___x_1143_;
}
}
LEAN_EXPORT lean_object* l_Lake_MainM_runLoggerIO___redArg___boxed(lean_object* v_x_1144_, lean_object* v_cfg_1145_, lean_object* v___y_1146_){
_start:
{
lean_object* v_res_1147_; 
v_res_1147_ = l_Lake_MainM_runLoggerIO___redArg(v_x_1144_, v_cfg_1145_);
return v_res_1147_;
}
}
LEAN_EXPORT lean_object* l_Lake_MainM_runLoggerIO(lean_object* v_00_u03b1_1148_, lean_object* v_x_1149_, lean_object* v_cfg_1150_){
_start:
{
lean_object* v___x_1152_; lean_object* v_toFun_1153_; lean_object* v_invFun_1154_; lean_object* v_invFun_1155_; lean_object* v___x_1156_; lean_object* v___x_1157_; lean_object* v___f_1158_; lean_object* v___x_1159_; lean_object* v___x_1160_; lean_object* v___x_1161_; 
v___x_1152_ = lean_obj_once(&l_Lake_instMonadMainM___aux__1___redArg___closed__0, &l_Lake_instMonadMainM___aux__1___redArg___closed__0_once, _init_l_Lake_instMonadMainM___aux__1___redArg___closed__0);
v_toFun_1153_ = lean_ctor_get(v___x_1152_, 0);
v_invFun_1154_ = lean_ctor_get(v___x_1152_, 1);
v_invFun_1155_ = lean_ctor_get(v___x_1152_, 1);
v___x_1156_ = lean_alloc_closure((void*)(l_Lake_LoggerIO_toBaseIO___boxed), 4, 3);
lean_closure_set(v___x_1156_, 0, lean_box(0));
lean_closure_set(v___x_1156_, 1, v_x_1149_);
lean_closure_set(v___x_1156_, 2, v_cfg_1150_);
v___x_1157_ = lean_alloc_closure((void*)(l_Lake_instMonadLiftBaseIOMainM___aux__1___boxed), 3, 2);
lean_closure_set(v___x_1157_, 0, lean_box(0));
lean_closure_set(v___x_1157_, 1, v___x_1156_);
lean_inc(v_invFun_1154_);
v___f_1158_ = lean_alloc_closure((void*)(l_Lake_MainM_runLogIO___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_1158_, 0, v_invFun_1154_);
lean_inc(v_invFun_1155_);
v___x_1159_ = lean_apply_1(v_invFun_1155_, v___x_1157_);
v___x_1160_ = lean_alloc_closure((void*)(l_EST_bind___boxed), 7, 6);
lean_closure_set(v___x_1160_, 0, lean_box(0));
lean_closure_set(v___x_1160_, 1, lean_box(0));
lean_closure_set(v___x_1160_, 2, lean_box(0));
lean_closure_set(v___x_1160_, 3, lean_box(0));
lean_closure_set(v___x_1160_, 4, v___x_1159_);
lean_closure_set(v___x_1160_, 5, v___f_1158_);
lean_inc(v_toFun_1153_);
v___x_1161_ = lean_apply_2(v_toFun_1153_, v___x_1160_, lean_box(0));
return v___x_1161_;
}
}
LEAN_EXPORT lean_object* l_Lake_MainM_runLoggerIO___boxed(lean_object* v_00_u03b1_1162_, lean_object* v_x_1163_, lean_object* v_cfg_1164_, lean_object* v___y_1165_){
_start:
{
lean_object* v_res_1166_; 
v_res_1166_ = l_Lake_MainM_runLoggerIO(v_00_u03b1_1162_, v_x_1163_, v_cfg_1164_);
return v_res_1166_;
}
}
LEAN_EXPORT lean_object* l_Lake_MainM_liftLoggerIO___redArg___lam__0(lean_object* v_val_1167_, uint8_t v___x_1168_, uint8_t v_val_1169_, lean_object* v_e_1170_){
_start:
{
lean_object* v___x_1172_; 
v___x_1172_ = l_Lake_logToStream(v_e_1170_, v_val_1167_, v___x_1168_, v_val_1169_);
return v___x_1172_;
}
}
LEAN_EXPORT lean_object* l_Lake_MainM_liftLoggerIO___redArg___lam__0___boxed(lean_object* v_val_1173_, lean_object* v___x_1174_, lean_object* v_val_1175_, lean_object* v_e_1176_, lean_object* v___y_1177_){
_start:
{
uint8_t v___x_201__boxed_1178_; uint8_t v_val_202__boxed_1179_; lean_object* v_res_1180_; 
v___x_201__boxed_1178_ = lean_unbox(v___x_1174_);
v_val_202__boxed_1179_ = lean_unbox(v_val_1175_);
v_res_1180_ = l_Lake_MainM_liftLoggerIO___redArg___lam__0(v_val_1173_, v___x_201__boxed_1178_, v_val_202__boxed_1179_, v_e_1176_);
lean_dec_ref(v_e_1176_);
return v_res_1180_;
}
}
LEAN_EXPORT lean_object* l_Lake_MainM_liftLoggerIO___redArg(lean_object* v_x_1181_){
_start:
{
uint8_t v___x_1183_; uint8_t v___x_1184_; lean_object* v___x_1185_; lean_object* v___x_1186_; uint8_t v___x_1187_; lean_object* v___x_1188_; lean_object* v___x_1189_; lean_object* v___f_1190_; lean_object* v___x_1191_; 
v___x_1183_ = 1;
v___x_1184_ = 0;
v___x_1185_ = lean_box(1);
v___x_1186_ = l_Lake_OutStream_get(v___x_1185_);
lean_inc_ref(v___x_1186_);
v___x_1187_ = l_Lake_AnsiMode_isEnabled(v___x_1186_, v___x_1184_);
v___x_1188_ = lean_box(v___x_1183_);
v___x_1189_ = lean_box(v___x_1187_);
v___f_1190_ = lean_alloc_closure((void*)(l_Lake_MainM_liftLoggerIO___redArg___lam__0___boxed), 5, 3);
lean_closure_set(v___f_1190_, 0, v___x_1186_);
lean_closure_set(v___f_1190_, 1, v___x_1188_);
lean_closure_set(v___f_1190_, 2, v___x_1189_);
v___x_1191_ = lean_apply_2(v_x_1181_, v___f_1190_, lean_box(0));
if (lean_obj_tag(v___x_1191_) == 0)
{
lean_object* v_a_1192_; lean_object* v___x_1194_; uint8_t v_isShared_1195_; uint8_t v_isSharedCheck_1199_; 
v_a_1192_ = lean_ctor_get(v___x_1191_, 0);
v_isSharedCheck_1199_ = !lean_is_exclusive(v___x_1191_);
if (v_isSharedCheck_1199_ == 0)
{
v___x_1194_ = v___x_1191_;
v_isShared_1195_ = v_isSharedCheck_1199_;
goto v_resetjp_1193_;
}
else
{
lean_inc(v_a_1192_);
lean_dec(v___x_1191_);
v___x_1194_ = lean_box(0);
v_isShared_1195_ = v_isSharedCheck_1199_;
goto v_resetjp_1193_;
}
v_resetjp_1193_:
{
lean_object* v___x_1197_; 
if (v_isShared_1195_ == 0)
{
v___x_1197_ = v___x_1194_;
goto v_reusejp_1196_;
}
else
{
lean_object* v_reuseFailAlloc_1198_; 
v_reuseFailAlloc_1198_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1198_, 0, v_a_1192_);
v___x_1197_ = v_reuseFailAlloc_1198_;
goto v_reusejp_1196_;
}
v_reusejp_1196_:
{
return v___x_1197_;
}
}
}
else
{
lean_object* v___x_1201_; uint8_t v_isShared_1202_; uint8_t v_isSharedCheck_1207_; 
v_isSharedCheck_1207_ = !lean_is_exclusive(v___x_1191_);
if (v_isSharedCheck_1207_ == 0)
{
lean_object* v_unused_1208_; 
v_unused_1208_ = lean_ctor_get(v___x_1191_, 0);
lean_dec(v_unused_1208_);
v___x_1201_ = v___x_1191_;
v_isShared_1202_ = v_isSharedCheck_1207_;
goto v_resetjp_1200_;
}
else
{
lean_dec(v___x_1191_);
v___x_1201_ = lean_box(0);
v_isShared_1202_ = v_isSharedCheck_1207_;
goto v_resetjp_1200_;
}
v_resetjp_1200_:
{
lean_object* v___x_1203_; lean_object* v___x_1205_; 
v___x_1203_ = l_Lake_MainM_failure___redArg___boxed__const__1;
if (v_isShared_1202_ == 0)
{
lean_ctor_set(v___x_1201_, 0, v___x_1203_);
v___x_1205_ = v___x_1201_;
goto v_reusejp_1204_;
}
else
{
lean_object* v_reuseFailAlloc_1206_; 
v_reuseFailAlloc_1206_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1206_, 0, v___x_1203_);
v___x_1205_ = v_reuseFailAlloc_1206_;
goto v_reusejp_1204_;
}
v_reusejp_1204_:
{
return v___x_1205_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_MainM_liftLoggerIO___redArg___boxed(lean_object* v_x_1209_, lean_object* v___y_1210_){
_start:
{
lean_object* v_res_1211_; 
v_res_1211_ = l_Lake_MainM_liftLoggerIO___redArg(v_x_1209_);
return v_res_1211_;
}
}
LEAN_EXPORT lean_object* l_Lake_MainM_liftLoggerIO(lean_object* v_00_u03b1_1212_, lean_object* v_x_1213_){
_start:
{
lean_object* v___x_1215_; 
v___x_1215_ = l_Lake_MainM_liftLoggerIO___redArg(v_x_1213_);
return v___x_1215_;
}
}
LEAN_EXPORT lean_object* l_Lake_MainM_liftLoggerIO___boxed(lean_object* v_00_u03b1_1216_, lean_object* v_x_1217_, lean_object* v___y_1218_){
_start:
{
lean_object* v_res_1219_; 
v_res_1219_ = l_Lake_MainM_liftLoggerIO(v_00_u03b1_1216_, v_x_1217_);
return v_res_1219_;
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
