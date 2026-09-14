// Lean compiler output
// Module: Std.Async.TCP
// Imports: public import Std.Time public import Std.Internal.UV.TCP public import Std.Async.Select
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
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_io_promise_resolve(lean_object*, lean_object*);
lean_object* lean_task_pure(lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* lean_io_error_to_string(lean_object*);
lean_object* lean_mk_io_user_error(lean_object*);
lean_object* lean_uv_tcp_recv(lean_object*, uint64_t);
lean_object* lean_io_promise_result_opt(lean_object*);
lean_object* lean_task_map(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* lean_io_as_task(lean_object*, lean_object*);
lean_object* lean_task_bind(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* lean_task_get_own(lean_object*);
lean_object* lean_uv_tcp_new();
uint8_t lean_bool_to_int8(uint8_t);
lean_object* l_Int_toNat(lean_object*);
uint32_t lean_uint32_of_nat(lean_object*);
lean_object* lean_uv_tcp_keepalive(lean_object*, uint8_t, uint32_t);
lean_object* lean_uv_tcp_getsockname(lean_object*);
lean_object* lean_uv_tcp_send(lean_object*, lean_object*);
lean_object* lean_uv_tcp_try_accept(lean_object*);
lean_object* l_IO_ofExcept___redArg(lean_object*, lean_object*);
lean_object* l_Lean_mkAtom(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* lean_uv_tcp_wait_readable(lean_object*);
uint8_t l_IO_Promise_isResolved___redArg(lean_object*);
lean_object* l_EIO_chainTask___redArg(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* lean_uv_tcp_cancel_accept(lean_object*);
lean_object* lean_uv_tcp_shutdown(lean_object*);
lean_object* lean_uv_tcp_bind(lean_object*, lean_object*);
lean_object* l_Except_map(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_uv_tcp_accept(lean_object*);
lean_object* lean_uv_tcp_nodelay(lean_object*);
lean_object* lean_uv_tcp_cancel_recv(lean_object*);
lean_object* lean_uv_tcp_getpeername(lean_object*);
lean_object* lean_io_map_task(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* lean_uv_tcp_listen(lean_object*, uint32_t);
lean_object* lean_uv_tcp_connect(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_TCP_Socket_Server_mk();
LEAN_EXPORT lean_object* l_Std_Async_TCP_Socket_Server_mk___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_TCP_Socket_Server_bind(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_TCP_Socket_Server_bind___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_TCP_Socket_Server_listen(lean_object*, uint32_t);
LEAN_EXPORT lean_object* l_Std_Async_TCP_Socket_Server_listen___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_TCP_Socket_Server_accept___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_TCP_Socket_Server_accept___lam__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_TCP_Socket_Server_accept___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_TCP_Socket_Server_accept___lam__1___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_Async_TCP_Socket_Server_accept___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Async_TCP_Socket_Server_accept___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Async_TCP_Socket_Server_accept___closed__0 = (const lean_object*)&l_Std_Async_TCP_Socket_Server_accept___closed__0_value;
static const lean_string_object l_Std_Async_TCP_Socket_Server_accept___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 44, .m_capacity = 44, .m_length = 43, .m_data = "the promise linked to the Async was dropped"};
static const lean_object* l_Std_Async_TCP_Socket_Server_accept___closed__1 = (const lean_object*)&l_Std_Async_TCP_Socket_Server_accept___closed__1_value;
static const lean_closure_object l_Std_Async_TCP_Socket_Server_accept___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Async_TCP_Socket_Server_accept___lam__1___boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Std_Async_TCP_Socket_Server_accept___closed__1_value)} };
static const lean_object* l_Std_Async_TCP_Socket_Server_accept___closed__2 = (const lean_object*)&l_Std_Async_TCP_Socket_Server_accept___closed__2_value;
static const lean_closure_object l_Std_Async_TCP_Socket_Server_accept___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*4, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Except_map, .m_arity = 5, .m_num_fixed = 4, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Async_TCP_Socket_Server_accept___closed__0_value)} };
static const lean_object* l_Std_Async_TCP_Socket_Server_accept___closed__3 = (const lean_object*)&l_Std_Async_TCP_Socket_Server_accept___closed__3_value;
LEAN_EXPORT lean_object* l_Std_Async_TCP_Socket_Server_accept(lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_TCP_Socket_Server_accept___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_Async_TCP_Socket_Server_tryAccept___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lean_io_error_to_string, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Async_TCP_Socket_Server_tryAccept___closed__0 = (const lean_object*)&l_Std_Async_TCP_Socket_Server_tryAccept___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Async_TCP_Socket_Server_tryAccept(lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_TCP_Socket_Server_tryAccept___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_ofExcept___at___00Std_Async_TCP_Socket_Server_acceptSelector_spec__0___redArg(lean_object*);
LEAN_EXPORT lean_object* l_IO_ofExcept___at___00Std_Async_TCP_Socket_Server_acceptSelector_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_ofExcept___at___00Std_Async_TCP_Socket_Server_acceptSelector_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_ofExcept___at___00Std_Async_TCP_Socket_Server_acceptSelector_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Waiter_race___at___00Std_Async_TCP_Socket_Server_acceptSelector_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Waiter_race___at___00Std_Async_TCP_Socket_Server_acceptSelector_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_TCP_Socket_Server_acceptSelector___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_TCP_Socket_Server_acceptSelector___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_TCP_Socket_Server_acceptSelector___lam__1(lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_TCP_Socket_Server_acceptSelector___lam__1___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_Async_TCP_Socket_Server_acceptSelector___lam__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Async_TCP_Socket_Server_acceptSelector___lam__1___boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Std_Async_TCP_Socket_Server_acceptSelector___lam__2___closed__0 = (const lean_object*)&l_Std_Async_TCP_Socket_Server_acceptSelector___lam__2___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Async_TCP_Socket_Server_acceptSelector___lam__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_TCP_Socket_Server_acceptSelector___lam__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_TCP_Socket_Server_acceptSelector___lam__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_TCP_Socket_Server_acceptSelector___lam__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_TCP_Socket_Server_acceptSelector___lam__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_TCP_Socket_Server_acceptSelector___lam__4___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_TCP_Socket_Server_acceptSelector___lam__5(lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_TCP_Socket_Server_acceptSelector___lam__5___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_TCP_Socket_Server_acceptSelector(lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_TCP_Socket_Server_getSockName(lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_TCP_Socket_Server_getSockName___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_TCP_Socket_Server_noDelay(lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_TCP_Socket_Server_noDelay___boxed(lean_object*, lean_object*);
static const lean_string_object l_Std_Async_TCP_Socket_Server_keepAlive___auto__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l_Std_Async_TCP_Socket_Server_keepAlive___auto__1___closed__0 = (const lean_object*)&l_Std_Async_TCP_Socket_Server_keepAlive___auto__1___closed__0_value;
static const lean_string_object l_Std_Async_TCP_Socket_Server_keepAlive___auto__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l_Std_Async_TCP_Socket_Server_keepAlive___auto__1___closed__1 = (const lean_object*)&l_Std_Async_TCP_Socket_Server_keepAlive___auto__1___closed__1_value;
static const lean_string_object l_Std_Async_TCP_Socket_Server_keepAlive___auto__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l_Std_Async_TCP_Socket_Server_keepAlive___auto__1___closed__2 = (const lean_object*)&l_Std_Async_TCP_Socket_Server_keepAlive___auto__1___closed__2_value;
static const lean_string_object l_Std_Async_TCP_Socket_Server_keepAlive___auto__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "tacticSeq"};
static const lean_object* l_Std_Async_TCP_Socket_Server_keepAlive___auto__1___closed__3 = (const lean_object*)&l_Std_Async_TCP_Socket_Server_keepAlive___auto__1___closed__3_value;
static const lean_ctor_object l_Std_Async_TCP_Socket_Server_keepAlive___auto__1___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Async_TCP_Socket_Server_keepAlive___auto__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Std_Async_TCP_Socket_Server_keepAlive___auto__1___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Async_TCP_Socket_Server_keepAlive___auto__1___closed__4_value_aux_0),((lean_object*)&l_Std_Async_TCP_Socket_Server_keepAlive___auto__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Std_Async_TCP_Socket_Server_keepAlive___auto__1___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Async_TCP_Socket_Server_keepAlive___auto__1___closed__4_value_aux_1),((lean_object*)&l_Std_Async_TCP_Socket_Server_keepAlive___auto__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Std_Async_TCP_Socket_Server_keepAlive___auto__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Async_TCP_Socket_Server_keepAlive___auto__1___closed__4_value_aux_2),((lean_object*)&l_Std_Async_TCP_Socket_Server_keepAlive___auto__1___closed__3_value),LEAN_SCALAR_PTR_LITERAL(212, 140, 85, 215, 241, 69, 7, 118)}};
static const lean_object* l_Std_Async_TCP_Socket_Server_keepAlive___auto__1___closed__4 = (const lean_object*)&l_Std_Async_TCP_Socket_Server_keepAlive___auto__1___closed__4_value;
static const lean_array_object l_Std_Async_TCP_Socket_Server_keepAlive___auto__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Std_Async_TCP_Socket_Server_keepAlive___auto__1___closed__5 = (const lean_object*)&l_Std_Async_TCP_Socket_Server_keepAlive___auto__1___closed__5_value;
static const lean_string_object l_Std_Async_TCP_Socket_Server_keepAlive___auto__1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "tacticSeq1Indented"};
static const lean_object* l_Std_Async_TCP_Socket_Server_keepAlive___auto__1___closed__6 = (const lean_object*)&l_Std_Async_TCP_Socket_Server_keepAlive___auto__1___closed__6_value;
static const lean_ctor_object l_Std_Async_TCP_Socket_Server_keepAlive___auto__1___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Async_TCP_Socket_Server_keepAlive___auto__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Std_Async_TCP_Socket_Server_keepAlive___auto__1___closed__7_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Async_TCP_Socket_Server_keepAlive___auto__1___closed__7_value_aux_0),((lean_object*)&l_Std_Async_TCP_Socket_Server_keepAlive___auto__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Std_Async_TCP_Socket_Server_keepAlive___auto__1___closed__7_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Async_TCP_Socket_Server_keepAlive___auto__1___closed__7_value_aux_1),((lean_object*)&l_Std_Async_TCP_Socket_Server_keepAlive___auto__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Std_Async_TCP_Socket_Server_keepAlive___auto__1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Async_TCP_Socket_Server_keepAlive___auto__1___closed__7_value_aux_2),((lean_object*)&l_Std_Async_TCP_Socket_Server_keepAlive___auto__1___closed__6_value),LEAN_SCALAR_PTR_LITERAL(223, 90, 160, 238, 133, 180, 23, 239)}};
static const lean_object* l_Std_Async_TCP_Socket_Server_keepAlive___auto__1___closed__7 = (const lean_object*)&l_Std_Async_TCP_Socket_Server_keepAlive___auto__1___closed__7_value;
static const lean_string_object l_Std_Async_TCP_Socket_Server_keepAlive___auto__1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "null"};
static const lean_object* l_Std_Async_TCP_Socket_Server_keepAlive___auto__1___closed__8 = (const lean_object*)&l_Std_Async_TCP_Socket_Server_keepAlive___auto__1___closed__8_value;
static const lean_ctor_object l_Std_Async_TCP_Socket_Server_keepAlive___auto__1___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Async_TCP_Socket_Server_keepAlive___auto__1___closed__8_value),LEAN_SCALAR_PTR_LITERAL(24, 58, 49, 223, 146, 207, 197, 136)}};
static const lean_object* l_Std_Async_TCP_Socket_Server_keepAlive___auto__1___closed__9 = (const lean_object*)&l_Std_Async_TCP_Socket_Server_keepAlive___auto__1___closed__9_value;
static const lean_string_object l_Std_Async_TCP_Socket_Server_keepAlive___auto__1___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "decide"};
static const lean_object* l_Std_Async_TCP_Socket_Server_keepAlive___auto__1___closed__10 = (const lean_object*)&l_Std_Async_TCP_Socket_Server_keepAlive___auto__1___closed__10_value;
static const lean_ctor_object l_Std_Async_TCP_Socket_Server_keepAlive___auto__1___closed__11_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Async_TCP_Socket_Server_keepAlive___auto__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Std_Async_TCP_Socket_Server_keepAlive___auto__1___closed__11_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Async_TCP_Socket_Server_keepAlive___auto__1___closed__11_value_aux_0),((lean_object*)&l_Std_Async_TCP_Socket_Server_keepAlive___auto__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Std_Async_TCP_Socket_Server_keepAlive___auto__1___closed__11_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Async_TCP_Socket_Server_keepAlive___auto__1___closed__11_value_aux_1),((lean_object*)&l_Std_Async_TCP_Socket_Server_keepAlive___auto__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Std_Async_TCP_Socket_Server_keepAlive___auto__1___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Async_TCP_Socket_Server_keepAlive___auto__1___closed__11_value_aux_2),((lean_object*)&l_Std_Async_TCP_Socket_Server_keepAlive___auto__1___closed__10_value),LEAN_SCALAR_PTR_LITERAL(53, 158, 1, 232, 101, 200, 191, 197)}};
static const lean_object* l_Std_Async_TCP_Socket_Server_keepAlive___auto__1___closed__11 = (const lean_object*)&l_Std_Async_TCP_Socket_Server_keepAlive___auto__1___closed__11_value;
static lean_once_cell_t l_Std_Async_TCP_Socket_Server_keepAlive___auto__1___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Async_TCP_Socket_Server_keepAlive___auto__1___closed__12;
static lean_once_cell_t l_Std_Async_TCP_Socket_Server_keepAlive___auto__1___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Async_TCP_Socket_Server_keepAlive___auto__1___closed__13;
static const lean_string_object l_Std_Async_TCP_Socket_Server_keepAlive___auto__1___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "optConfig"};
static const lean_object* l_Std_Async_TCP_Socket_Server_keepAlive___auto__1___closed__14 = (const lean_object*)&l_Std_Async_TCP_Socket_Server_keepAlive___auto__1___closed__14_value;
static const lean_ctor_object l_Std_Async_TCP_Socket_Server_keepAlive___auto__1___closed__15_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Async_TCP_Socket_Server_keepAlive___auto__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Std_Async_TCP_Socket_Server_keepAlive___auto__1___closed__15_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Async_TCP_Socket_Server_keepAlive___auto__1___closed__15_value_aux_0),((lean_object*)&l_Std_Async_TCP_Socket_Server_keepAlive___auto__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Std_Async_TCP_Socket_Server_keepAlive___auto__1___closed__15_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Async_TCP_Socket_Server_keepAlive___auto__1___closed__15_value_aux_1),((lean_object*)&l_Std_Async_TCP_Socket_Server_keepAlive___auto__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Std_Async_TCP_Socket_Server_keepAlive___auto__1___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Async_TCP_Socket_Server_keepAlive___auto__1___closed__15_value_aux_2),((lean_object*)&l_Std_Async_TCP_Socket_Server_keepAlive___auto__1___closed__14_value),LEAN_SCALAR_PTR_LITERAL(137, 208, 10, 74, 108, 50, 106, 48)}};
static const lean_object* l_Std_Async_TCP_Socket_Server_keepAlive___auto__1___closed__15 = (const lean_object*)&l_Std_Async_TCP_Socket_Server_keepAlive___auto__1___closed__15_value;
static const lean_ctor_object l_Std_Async_TCP_Socket_Server_keepAlive___auto__1___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(2) << 1) | 1)),((lean_object*)&l_Std_Async_TCP_Socket_Server_keepAlive___auto__1___closed__9_value),((lean_object*)&l_Std_Async_TCP_Socket_Server_keepAlive___auto__1___closed__5_value)}};
static const lean_object* l_Std_Async_TCP_Socket_Server_keepAlive___auto__1___closed__16 = (const lean_object*)&l_Std_Async_TCP_Socket_Server_keepAlive___auto__1___closed__16_value;
static lean_once_cell_t l_Std_Async_TCP_Socket_Server_keepAlive___auto__1___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Async_TCP_Socket_Server_keepAlive___auto__1___closed__17;
static lean_once_cell_t l_Std_Async_TCP_Socket_Server_keepAlive___auto__1___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Async_TCP_Socket_Server_keepAlive___auto__1___closed__18;
static lean_once_cell_t l_Std_Async_TCP_Socket_Server_keepAlive___auto__1___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Async_TCP_Socket_Server_keepAlive___auto__1___closed__19;
static lean_once_cell_t l_Std_Async_TCP_Socket_Server_keepAlive___auto__1___closed__20_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Async_TCP_Socket_Server_keepAlive___auto__1___closed__20;
static lean_once_cell_t l_Std_Async_TCP_Socket_Server_keepAlive___auto__1___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Async_TCP_Socket_Server_keepAlive___auto__1___closed__21;
static lean_once_cell_t l_Std_Async_TCP_Socket_Server_keepAlive___auto__1___closed__22_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Async_TCP_Socket_Server_keepAlive___auto__1___closed__22;
static lean_once_cell_t l_Std_Async_TCP_Socket_Server_keepAlive___auto__1___closed__23_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Async_TCP_Socket_Server_keepAlive___auto__1___closed__23;
static lean_once_cell_t l_Std_Async_TCP_Socket_Server_keepAlive___auto__1___closed__24_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Async_TCP_Socket_Server_keepAlive___auto__1___closed__24;
static lean_once_cell_t l_Std_Async_TCP_Socket_Server_keepAlive___auto__1___closed__25_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Async_TCP_Socket_Server_keepAlive___auto__1___closed__25;
static lean_once_cell_t l_Std_Async_TCP_Socket_Server_keepAlive___auto__1___closed__26_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Async_TCP_Socket_Server_keepAlive___auto__1___closed__26;
LEAN_EXPORT lean_object* l_Std_Async_TCP_Socket_Server_keepAlive___auto__1;
LEAN_EXPORT lean_object* l_Std_Async_TCP_Socket_Server_keepAlive___redArg(lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_TCP_Socket_Server_keepAlive___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_TCP_Socket_Server_keepAlive(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_TCP_Socket_Server_keepAlive___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_TCP_Socket_Client_mk();
LEAN_EXPORT lean_object* l_Std_Async_TCP_Socket_Client_mk___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_TCP_Socket_Client_bind(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_TCP_Socket_Client_bind___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_TCP_Socket_Client_connect___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_TCP_Socket_Client_connect___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_Async_TCP_Socket_Client_connect___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Async_TCP_Socket_Client_connect___lam__0___boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Std_Async_TCP_Socket_Server_accept___closed__1_value)} };
static const lean_object* l_Std_Async_TCP_Socket_Client_connect___closed__0 = (const lean_object*)&l_Std_Async_TCP_Socket_Client_connect___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Async_TCP_Socket_Client_connect(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_TCP_Socket_Client_connect___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_TCP_Socket_Client_sendAll(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_TCP_Socket_Client_sendAll___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_TCP_Socket_Client_send(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_TCP_Socket_Client_send___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_TCP_Socket_Client_recv_x3f___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_TCP_Socket_Client_recv_x3f___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_Async_TCP_Socket_Client_recv_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Async_TCP_Socket_Client_recv_x3f___lam__0___boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Std_Async_TCP_Socket_Server_accept___closed__1_value)} };
static const lean_object* l_Std_Async_TCP_Socket_Client_recv_x3f___closed__0 = (const lean_object*)&l_Std_Async_TCP_Socket_Client_recv_x3f___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Async_TCP_Socket_Client_recv_x3f(lean_object*, uint64_t);
LEAN_EXPORT lean_object* l_Std_Async_TCP_Socket_Client_recv_x3f___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Waiter_race___at___00Std_Async_TCP_Socket_Client_recvSelector_spec__0___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Waiter_race___at___00Std_Async_TCP_Socket_Client_recvSelector_spec__0___lam__2(lean_object*, uint64_t, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Waiter_race___at___00Std_Async_TCP_Socket_Client_recvSelector_spec__0___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Async_Waiter_race___at___00Std_Async_TCP_Socket_Client_recvSelector_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Async_Waiter_race___at___00Std_Async_TCP_Socket_Client_recvSelector_spec__0___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Async_Waiter_race___at___00Std_Async_TCP_Socket_Client_recvSelector_spec__0___closed__0 = (const lean_object*)&l_Std_Async_Waiter_race___at___00Std_Async_TCP_Socket_Client_recvSelector_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Async_Waiter_race___at___00Std_Async_TCP_Socket_Client_recvSelector_spec__0(lean_object*, lean_object*, uint64_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Waiter_race___at___00Std_Async_TCP_Socket_Client_recvSelector_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Std_Async_TCP_Socket_Client_recvSelector___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Std_Async_TCP_Socket_Client_recvSelector___lam__0___closed__0 = (const lean_object*)&l_Std_Async_TCP_Socket_Client_recvSelector___lam__0___closed__0_value;
static const lean_ctor_object l_Std_Async_TCP_Socket_Client_recvSelector___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Std_Async_TCP_Socket_Client_recvSelector___lam__0___closed__0_value)}};
static const lean_object* l_Std_Async_TCP_Socket_Client_recvSelector___lam__0___closed__1 = (const lean_object*)&l_Std_Async_TCP_Socket_Client_recvSelector___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l_Std_Async_TCP_Socket_Client_recvSelector___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_TCP_Socket_Client_recvSelector___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_TCP_Socket_Client_recvSelector___lam__1(lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_TCP_Socket_Client_recvSelector___lam__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_TCP_Socket_Client_recvSelector___lam__3(lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_TCP_Socket_Client_recvSelector___lam__3___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_TCP_Socket_Client_recvSelector___lam__4(lean_object*, uint64_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_TCP_Socket_Client_recvSelector___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Std_Async_TCP_Socket_Client_recvSelector___lam__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Std_Async_TCP_Socket_Client_recvSelector___lam__2___closed__0 = (const lean_object*)&l_Std_Async_TCP_Socket_Client_recvSelector___lam__2___closed__0_value;
static const lean_ctor_object l_Std_Async_TCP_Socket_Client_recvSelector___lam__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Std_Async_TCP_Socket_Client_recvSelector___lam__2___closed__0_value)}};
static const lean_object* l_Std_Async_TCP_Socket_Client_recvSelector___lam__2___closed__1 = (const lean_object*)&l_Std_Async_TCP_Socket_Client_recvSelector___lam__2___closed__1_value;
LEAN_EXPORT lean_object* l_Std_Async_TCP_Socket_Client_recvSelector___lam__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_TCP_Socket_Client_recvSelector___lam__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_TCP_Socket_Client_recvSelector___lam__5(lean_object*, uint64_t, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_TCP_Socket_Client_recvSelector___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_TCP_Socket_Client_recvSelector___lam__7(lean_object*, uint64_t, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Std_Async_TCP_Socket_Client_recvSelector___lam__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_TCP_Socket_Client_recvSelector___lam__6(lean_object*, lean_object*, uint64_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_TCP_Socket_Client_recvSelector___lam__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_TCP_Socket_Client_recvSelector___lam__8(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_TCP_Socket_Client_recvSelector___lam__8___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_TCP_Socket_Client_recvSelector___lam__9(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_TCP_Socket_Client_recvSelector___lam__9___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Async_TCP_Socket_Client_recvSelector___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Async_TCP_Socket_Client_recvSelector___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Async_TCP_Socket_Client_recvSelector___closed__0 = (const lean_object*)&l_Std_Async_TCP_Socket_Client_recvSelector___closed__0_value;
static const lean_closure_object l_Std_Async_TCP_Socket_Client_recvSelector___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Async_TCP_Socket_Client_recvSelector___lam__1___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Async_TCP_Socket_Client_recvSelector___closed__1 = (const lean_object*)&l_Std_Async_TCP_Socket_Client_recvSelector___closed__1_value;
LEAN_EXPORT lean_object* l_Std_Async_TCP_Socket_Client_recvSelector(lean_object*, uint64_t);
LEAN_EXPORT lean_object* l_Std_Async_TCP_Socket_Client_recvSelector___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_TCP_Socket_Client_shutdown(lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_TCP_Socket_Client_shutdown___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_TCP_Socket_Client_getPeerName(lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_TCP_Socket_Client_getPeerName___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_TCP_Socket_Client_getSockName(lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_TCP_Socket_Client_getSockName___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_TCP_Socket_Client_noDelay(lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_TCP_Socket_Client_noDelay___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_TCP_Socket_Client_keepAlive___auto__1;
LEAN_EXPORT lean_object* l_Std_Async_TCP_Socket_Client_keepAlive___redArg(lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_TCP_Socket_Client_keepAlive___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_TCP_Socket_Client_keepAlive(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_TCP_Socket_Client_keepAlive___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_TCP_Socket_Server_mk(){
_start:
{
lean_object* v___x_2_; 
v___x_2_ = lean_uv_tcp_new();
if (lean_obj_tag(v___x_2_) == 0)
{
lean_object* v_a_3_; lean_object* v___x_5_; uint8_t v_isShared_6_; uint8_t v_isSharedCheck_10_; 
v_a_3_ = lean_ctor_get(v___x_2_, 0);
v_isSharedCheck_10_ = !lean_is_exclusive(v___x_2_);
if (v_isSharedCheck_10_ == 0)
{
v___x_5_ = v___x_2_;
v_isShared_6_ = v_isSharedCheck_10_;
goto v_resetjp_4_;
}
else
{
lean_inc(v_a_3_);
lean_dec(v___x_2_);
v___x_5_ = lean_box(0);
v_isShared_6_ = v_isSharedCheck_10_;
goto v_resetjp_4_;
}
v_resetjp_4_:
{
lean_object* v___x_8_; 
if (v_isShared_6_ == 0)
{
v___x_8_ = v___x_5_;
goto v_reusejp_7_;
}
else
{
lean_object* v_reuseFailAlloc_9_; 
v_reuseFailAlloc_9_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_9_, 0, v_a_3_);
v___x_8_ = v_reuseFailAlloc_9_;
goto v_reusejp_7_;
}
v_reusejp_7_:
{
return v___x_8_;
}
}
}
else
{
lean_object* v_a_11_; lean_object* v___x_13_; uint8_t v_isShared_14_; uint8_t v_isSharedCheck_18_; 
v_a_11_ = lean_ctor_get(v___x_2_, 0);
v_isSharedCheck_18_ = !lean_is_exclusive(v___x_2_);
if (v_isSharedCheck_18_ == 0)
{
v___x_13_ = v___x_2_;
v_isShared_14_ = v_isSharedCheck_18_;
goto v_resetjp_12_;
}
else
{
lean_inc(v_a_11_);
lean_dec(v___x_2_);
v___x_13_ = lean_box(0);
v_isShared_14_ = v_isSharedCheck_18_;
goto v_resetjp_12_;
}
v_resetjp_12_:
{
lean_object* v___x_16_; 
if (v_isShared_14_ == 0)
{
v___x_16_ = v___x_13_;
goto v_reusejp_15_;
}
else
{
lean_object* v_reuseFailAlloc_17_; 
v_reuseFailAlloc_17_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_17_, 0, v_a_11_);
v___x_16_ = v_reuseFailAlloc_17_;
goto v_reusejp_15_;
}
v_reusejp_15_:
{
return v___x_16_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_TCP_Socket_Server_mk___boxed(lean_object* v___y_19_){
_start:
{
lean_object* v_res_20_; 
v_res_20_ = l_Std_Async_TCP_Socket_Server_mk();
return v_res_20_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_TCP_Socket_Server_bind(lean_object* v_s_21_, lean_object* v_addr_22_){
_start:
{
lean_object* v___x_24_; 
v___x_24_ = lean_uv_tcp_bind(v_s_21_, v_addr_22_);
return v___x_24_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_TCP_Socket_Server_bind___boxed(lean_object* v_s_25_, lean_object* v_addr_26_, lean_object* v___y_27_){
_start:
{
lean_object* v_res_28_; 
v_res_28_ = l_Std_Async_TCP_Socket_Server_bind(v_s_25_, v_addr_26_);
lean_dec_ref(v_addr_26_);
lean_dec(v_s_25_);
return v_res_28_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_TCP_Socket_Server_listen(lean_object* v_s_29_, uint32_t v_backlog_30_){
_start:
{
lean_object* v___x_32_; 
v___x_32_ = lean_uv_tcp_listen(v_s_29_, v_backlog_30_);
return v___x_32_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_TCP_Socket_Server_listen___boxed(lean_object* v_s_33_, lean_object* v_backlog_34_, lean_object* v___y_35_){
_start:
{
uint32_t v_backlog_boxed_36_; lean_object* v_res_37_; 
v_backlog_boxed_36_ = lean_unbox_uint32(v_backlog_34_);
lean_dec(v_backlog_34_);
v_res_37_ = l_Std_Async_TCP_Socket_Server_listen(v_s_33_, v_backlog_boxed_36_);
lean_dec(v_s_33_);
return v_res_37_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_TCP_Socket_Server_accept___lam__0(lean_object* v_native_38_){
_start:
{
lean_inc(v_native_38_);
return v_native_38_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_TCP_Socket_Server_accept___lam__0___boxed(lean_object* v_native_39_){
_start:
{
lean_object* v_res_40_; 
v_res_40_ = l_Std_Async_TCP_Socket_Server_accept___lam__0(v_native_39_);
lean_dec(v_native_39_);
return v_res_40_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_TCP_Socket_Server_accept___lam__1(lean_object* v___x_41_, lean_object* v_x_42_){
_start:
{
if (lean_obj_tag(v_x_42_) == 0)
{
lean_object* v___x_43_; lean_object* v___x_44_; 
v___x_43_ = lean_mk_io_user_error(v___x_41_);
v___x_44_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_44_, 0, v___x_43_);
return v___x_44_;
}
else
{
lean_object* v_val_45_; 
lean_dec_ref(v___x_41_);
v_val_45_ = lean_ctor_get(v_x_42_, 0);
lean_inc(v_val_45_);
return v_val_45_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_TCP_Socket_Server_accept___lam__1___boxed(lean_object* v___x_46_, lean_object* v_x_47_){
_start:
{
lean_object* v_res_48_; 
v_res_48_ = l_Std_Async_TCP_Socket_Server_accept___lam__1(v___x_46_, v_x_47_);
lean_dec(v_x_47_);
return v_res_48_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_TCP_Socket_Server_accept(lean_object* v_s_55_){
_start:
{
lean_object* v___f_57_; lean_object* v___x_58_; lean_object* v___x_59_; uint8_t v___x_60_; lean_object* v___x_61_; 
v___f_57_ = ((lean_object*)(l_Std_Async_TCP_Socket_Server_accept___closed__2));
v___x_58_ = ((lean_object*)(l_Std_Async_TCP_Socket_Server_accept___closed__3));
v___x_59_ = lean_unsigned_to_nat(0u);
v___x_60_ = 0;
v___x_61_ = lean_uv_tcp_accept(v_s_55_);
if (lean_obj_tag(v___x_61_) == 0)
{
lean_object* v_a_62_; lean_object* v___x_64_; uint8_t v_isShared_65_; uint8_t v_isSharedCheck_72_; 
v_a_62_ = lean_ctor_get(v___x_61_, 0);
v_isSharedCheck_72_ = !lean_is_exclusive(v___x_61_);
if (v_isSharedCheck_72_ == 0)
{
v___x_64_ = v___x_61_;
v_isShared_65_ = v_isSharedCheck_72_;
goto v_resetjp_63_;
}
else
{
lean_inc(v_a_62_);
lean_dec(v___x_61_);
v___x_64_ = lean_box(0);
v_isShared_65_ = v_isSharedCheck_72_;
goto v_resetjp_63_;
}
v_resetjp_63_:
{
lean_object* v___x_66_; lean_object* v___x_67_; lean_object* v___x_68_; lean_object* v___x_70_; 
v___x_66_ = lean_io_promise_result_opt(v_a_62_);
lean_dec(v_a_62_);
v___x_67_ = lean_task_map(v___f_57_, v___x_66_, v___x_59_, v___x_60_);
v___x_68_ = lean_task_map(v___x_58_, v___x_67_, v___x_59_, v___x_60_);
if (v_isShared_65_ == 0)
{
lean_ctor_set_tag(v___x_64_, 1);
lean_ctor_set(v___x_64_, 0, v___x_68_);
v___x_70_ = v___x_64_;
goto v_reusejp_69_;
}
else
{
lean_object* v_reuseFailAlloc_71_; 
v_reuseFailAlloc_71_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_71_, 0, v___x_68_);
v___x_70_ = v_reuseFailAlloc_71_;
goto v_reusejp_69_;
}
v_reusejp_69_:
{
return v___x_70_;
}
}
}
else
{
lean_object* v_a_73_; lean_object* v___x_75_; uint8_t v_isShared_76_; uint8_t v_isSharedCheck_81_; 
v_a_73_ = lean_ctor_get(v___x_61_, 0);
v_isSharedCheck_81_ = !lean_is_exclusive(v___x_61_);
if (v_isSharedCheck_81_ == 0)
{
v___x_75_ = v___x_61_;
v_isShared_76_ = v_isSharedCheck_81_;
goto v_resetjp_74_;
}
else
{
lean_inc(v_a_73_);
lean_dec(v___x_61_);
v___x_75_ = lean_box(0);
v_isShared_76_ = v_isSharedCheck_81_;
goto v_resetjp_74_;
}
v_resetjp_74_:
{
lean_object* v___x_78_; 
if (v_isShared_76_ == 0)
{
lean_ctor_set_tag(v___x_75_, 0);
v___x_78_ = v___x_75_;
goto v_reusejp_77_;
}
else
{
lean_object* v_reuseFailAlloc_80_; 
v_reuseFailAlloc_80_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_80_, 0, v_a_73_);
v___x_78_ = v_reuseFailAlloc_80_;
goto v_reusejp_77_;
}
v_reusejp_77_:
{
lean_object* v___x_79_; 
v___x_79_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_79_, 0, v___x_78_);
return v___x_79_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_TCP_Socket_Server_accept___boxed(lean_object* v_s_82_, lean_object* v___y_83_){
_start:
{
lean_object* v_res_84_; 
v_res_84_ = l_Std_Async_TCP_Socket_Server_accept(v_s_82_);
lean_dec(v_s_82_);
return v_res_84_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_TCP_Socket_Server_tryAccept(lean_object* v_s_86_){
_start:
{
lean_object* v___x_88_; lean_object* v___x_89_; 
v___x_88_ = ((lean_object*)(l_Std_Async_TCP_Socket_Server_tryAccept___closed__0));
v___x_89_ = lean_uv_tcp_try_accept(v_s_86_);
if (lean_obj_tag(v___x_89_) == 0)
{
lean_object* v_a_90_; lean_object* v___x_91_; 
v_a_90_ = lean_ctor_get(v___x_89_, 0);
lean_inc(v_a_90_);
lean_dec_ref_known(v___x_89_, 1);
v___x_91_ = l_IO_ofExcept___redArg(v___x_88_, v_a_90_);
if (lean_obj_tag(v___x_91_) == 0)
{
lean_object* v_a_92_; lean_object* v___x_94_; uint8_t v_isShared_95_; uint8_t v_isSharedCheck_111_; 
v_a_92_ = lean_ctor_get(v___x_91_, 0);
v_isSharedCheck_111_ = !lean_is_exclusive(v___x_91_);
if (v_isSharedCheck_111_ == 0)
{
v___x_94_ = v___x_91_;
v_isShared_95_ = v_isSharedCheck_111_;
goto v_resetjp_93_;
}
else
{
lean_inc(v_a_92_);
lean_dec(v___x_91_);
v___x_94_ = lean_box(0);
v_isShared_95_ = v_isSharedCheck_111_;
goto v_resetjp_93_;
}
v_resetjp_93_:
{
if (lean_obj_tag(v_a_92_) == 0)
{
lean_object* v___x_96_; lean_object* v___x_98_; 
v___x_96_ = lean_box(0);
if (v_isShared_95_ == 0)
{
lean_ctor_set(v___x_94_, 0, v___x_96_);
v___x_98_ = v___x_94_;
goto v_reusejp_97_;
}
else
{
lean_object* v_reuseFailAlloc_99_; 
v_reuseFailAlloc_99_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_99_, 0, v___x_96_);
v___x_98_ = v_reuseFailAlloc_99_;
goto v_reusejp_97_;
}
v_reusejp_97_:
{
return v___x_98_;
}
}
else
{
lean_object* v_val_100_; lean_object* v___x_102_; uint8_t v_isShared_103_; uint8_t v_isSharedCheck_110_; 
v_val_100_ = lean_ctor_get(v_a_92_, 0);
v_isSharedCheck_110_ = !lean_is_exclusive(v_a_92_);
if (v_isSharedCheck_110_ == 0)
{
v___x_102_ = v_a_92_;
v_isShared_103_ = v_isSharedCheck_110_;
goto v_resetjp_101_;
}
else
{
lean_inc(v_val_100_);
lean_dec(v_a_92_);
v___x_102_ = lean_box(0);
v_isShared_103_ = v_isSharedCheck_110_;
goto v_resetjp_101_;
}
v_resetjp_101_:
{
lean_object* v___x_105_; 
if (v_isShared_103_ == 0)
{
v___x_105_ = v___x_102_;
goto v_reusejp_104_;
}
else
{
lean_object* v_reuseFailAlloc_109_; 
v_reuseFailAlloc_109_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_109_, 0, v_val_100_);
v___x_105_ = v_reuseFailAlloc_109_;
goto v_reusejp_104_;
}
v_reusejp_104_:
{
lean_object* v___x_107_; 
if (v_isShared_95_ == 0)
{
lean_ctor_set(v___x_94_, 0, v___x_105_);
v___x_107_ = v___x_94_;
goto v_reusejp_106_;
}
else
{
lean_object* v_reuseFailAlloc_108_; 
v_reuseFailAlloc_108_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_108_, 0, v___x_105_);
v___x_107_ = v_reuseFailAlloc_108_;
goto v_reusejp_106_;
}
v_reusejp_106_:
{
return v___x_107_;
}
}
}
}
}
}
else
{
lean_object* v_a_112_; lean_object* v___x_114_; uint8_t v_isShared_115_; uint8_t v_isSharedCheck_119_; 
v_a_112_ = lean_ctor_get(v___x_91_, 0);
v_isSharedCheck_119_ = !lean_is_exclusive(v___x_91_);
if (v_isSharedCheck_119_ == 0)
{
v___x_114_ = v___x_91_;
v_isShared_115_ = v_isSharedCheck_119_;
goto v_resetjp_113_;
}
else
{
lean_inc(v_a_112_);
lean_dec(v___x_91_);
v___x_114_ = lean_box(0);
v_isShared_115_ = v_isSharedCheck_119_;
goto v_resetjp_113_;
}
v_resetjp_113_:
{
lean_object* v___x_117_; 
if (v_isShared_115_ == 0)
{
v___x_117_ = v___x_114_;
goto v_reusejp_116_;
}
else
{
lean_object* v_reuseFailAlloc_118_; 
v_reuseFailAlloc_118_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_118_, 0, v_a_112_);
v___x_117_ = v_reuseFailAlloc_118_;
goto v_reusejp_116_;
}
v_reusejp_116_:
{
return v___x_117_;
}
}
}
}
else
{
lean_object* v_a_120_; lean_object* v___x_122_; uint8_t v_isShared_123_; uint8_t v_isSharedCheck_127_; 
v_a_120_ = lean_ctor_get(v___x_89_, 0);
v_isSharedCheck_127_ = !lean_is_exclusive(v___x_89_);
if (v_isSharedCheck_127_ == 0)
{
v___x_122_ = v___x_89_;
v_isShared_123_ = v_isSharedCheck_127_;
goto v_resetjp_121_;
}
else
{
lean_inc(v_a_120_);
lean_dec(v___x_89_);
v___x_122_ = lean_box(0);
v_isShared_123_ = v_isSharedCheck_127_;
goto v_resetjp_121_;
}
v_resetjp_121_:
{
lean_object* v___x_125_; 
if (v_isShared_123_ == 0)
{
v___x_125_ = v___x_122_;
goto v_reusejp_124_;
}
else
{
lean_object* v_reuseFailAlloc_126_; 
v_reuseFailAlloc_126_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_126_, 0, v_a_120_);
v___x_125_ = v_reuseFailAlloc_126_;
goto v_reusejp_124_;
}
v_reusejp_124_:
{
return v___x_125_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_TCP_Socket_Server_tryAccept___boxed(lean_object* v_s_128_, lean_object* v___y_129_){
_start:
{
lean_object* v_res_130_; 
v_res_130_ = l_Std_Async_TCP_Socket_Server_tryAccept(v_s_128_);
lean_dec(v_s_128_);
return v_res_130_;
}
}
LEAN_EXPORT lean_object* l_IO_ofExcept___at___00Std_Async_TCP_Socket_Server_acceptSelector_spec__0___redArg(lean_object* v_e_131_){
_start:
{
if (lean_obj_tag(v_e_131_) == 0)
{
lean_object* v_a_133_; lean_object* v___x_135_; uint8_t v_isShared_136_; uint8_t v_isSharedCheck_142_; 
v_a_133_ = lean_ctor_get(v_e_131_, 0);
v_isSharedCheck_142_ = !lean_is_exclusive(v_e_131_);
if (v_isSharedCheck_142_ == 0)
{
v___x_135_ = v_e_131_;
v_isShared_136_ = v_isSharedCheck_142_;
goto v_resetjp_134_;
}
else
{
lean_inc(v_a_133_);
lean_dec(v_e_131_);
v___x_135_ = lean_box(0);
v_isShared_136_ = v_isSharedCheck_142_;
goto v_resetjp_134_;
}
v_resetjp_134_:
{
lean_object* v___x_137_; lean_object* v___x_138_; lean_object* v___x_140_; 
v___x_137_ = lean_io_error_to_string(v_a_133_);
v___x_138_ = lean_mk_io_user_error(v___x_137_);
if (v_isShared_136_ == 0)
{
lean_ctor_set_tag(v___x_135_, 1);
lean_ctor_set(v___x_135_, 0, v___x_138_);
v___x_140_ = v___x_135_;
goto v_reusejp_139_;
}
else
{
lean_object* v_reuseFailAlloc_141_; 
v_reuseFailAlloc_141_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_141_, 0, v___x_138_);
v___x_140_ = v_reuseFailAlloc_141_;
goto v_reusejp_139_;
}
v_reusejp_139_:
{
return v___x_140_;
}
}
}
else
{
lean_object* v_a_143_; lean_object* v___x_145_; uint8_t v_isShared_146_; uint8_t v_isSharedCheck_150_; 
v_a_143_ = lean_ctor_get(v_e_131_, 0);
v_isSharedCheck_150_ = !lean_is_exclusive(v_e_131_);
if (v_isSharedCheck_150_ == 0)
{
v___x_145_ = v_e_131_;
v_isShared_146_ = v_isSharedCheck_150_;
goto v_resetjp_144_;
}
else
{
lean_inc(v_a_143_);
lean_dec(v_e_131_);
v___x_145_ = lean_box(0);
v_isShared_146_ = v_isSharedCheck_150_;
goto v_resetjp_144_;
}
v_resetjp_144_:
{
lean_object* v___x_148_; 
if (v_isShared_146_ == 0)
{
lean_ctor_set_tag(v___x_145_, 0);
v___x_148_ = v___x_145_;
goto v_reusejp_147_;
}
else
{
lean_object* v_reuseFailAlloc_149_; 
v_reuseFailAlloc_149_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_149_, 0, v_a_143_);
v___x_148_ = v_reuseFailAlloc_149_;
goto v_reusejp_147_;
}
v_reusejp_147_:
{
return v___x_148_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_IO_ofExcept___at___00Std_Async_TCP_Socket_Server_acceptSelector_spec__0___redArg___boxed(lean_object* v_e_151_, lean_object* v___y_152_){
_start:
{
lean_object* v_res_153_; 
v_res_153_ = l_IO_ofExcept___at___00Std_Async_TCP_Socket_Server_acceptSelector_spec__0___redArg(v_e_151_);
return v_res_153_;
}
}
LEAN_EXPORT lean_object* l_IO_ofExcept___at___00Std_Async_TCP_Socket_Server_acceptSelector_spec__0(lean_object* v_00_u03b1_154_, lean_object* v_e_155_){
_start:
{
lean_object* v___x_157_; 
v___x_157_ = l_IO_ofExcept___at___00Std_Async_TCP_Socket_Server_acceptSelector_spec__0___redArg(v_e_155_);
return v___x_157_;
}
}
LEAN_EXPORT lean_object* l_IO_ofExcept___at___00Std_Async_TCP_Socket_Server_acceptSelector_spec__0___boxed(lean_object* v_00_u03b1_158_, lean_object* v_e_159_, lean_object* v___y_160_){
_start:
{
lean_object* v_res_161_; 
v_res_161_ = l_IO_ofExcept___at___00Std_Async_TCP_Socket_Server_acceptSelector_spec__0(v_00_u03b1_158_, v_e_159_);
return v_res_161_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Waiter_race___at___00Std_Async_TCP_Socket_Server_acceptSelector_spec__1(lean_object* v_val_162_, lean_object* v_w_163_, lean_object* v_lose_164_){
_start:
{
lean_object* v_finished_166_; lean_object* v_promise_167_; lean_object* v___x_168_; uint8_t v___y_170_; uint8_t v___x_196_; 
v_finished_166_ = lean_ctor_get(v_w_163_, 0);
v_promise_167_ = lean_ctor_get(v_w_163_, 1);
v___x_168_ = lean_st_ref_take(v_finished_166_);
v___x_196_ = lean_unbox(v___x_168_);
lean_dec(v___x_168_);
if (v___x_196_ == 0)
{
uint8_t v___x_197_; 
v___x_197_ = 1;
v___y_170_ = v___x_197_;
goto v___jp_169_;
}
else
{
uint8_t v___x_198_; 
v___x_198_ = 0;
v___y_170_ = v___x_198_;
goto v___jp_169_;
}
v___jp_169_:
{
uint8_t v___x_171_; lean_object* v___x_172_; lean_object* v___x_173_; 
v___x_171_ = 1;
v___x_172_ = lean_box(v___x_171_);
v___x_173_ = lean_st_ref_put(v_finished_166_, v___x_172_);
if (v___y_170_ == 0)
{
lean_object* v___x_174_; 
lean_dec_ref(v_val_162_);
v___x_174_ = lean_apply_1(v_lose_164_, lean_box(0));
return v___x_174_;
}
else
{
lean_object* v___x_175_; 
lean_dec_ref(v_lose_164_);
v___x_175_ = l_IO_ofExcept___at___00Std_Async_TCP_Socket_Server_acceptSelector_spec__0___redArg(v_val_162_);
if (lean_obj_tag(v___x_175_) == 0)
{
lean_object* v_a_176_; lean_object* v___x_178_; uint8_t v_isShared_179_; uint8_t v_isSharedCheck_185_; 
v_a_176_ = lean_ctor_get(v___x_175_, 0);
v_isSharedCheck_185_ = !lean_is_exclusive(v___x_175_);
if (v_isSharedCheck_185_ == 0)
{
v___x_178_ = v___x_175_;
v_isShared_179_ = v_isSharedCheck_185_;
goto v_resetjp_177_;
}
else
{
lean_inc(v_a_176_);
lean_dec(v___x_175_);
v___x_178_ = lean_box(0);
v_isShared_179_ = v_isSharedCheck_185_;
goto v_resetjp_177_;
}
v_resetjp_177_:
{
lean_object* v___x_180_; lean_object* v___x_181_; lean_object* v___x_183_; 
v___x_180_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_180_, 0, v_a_176_);
v___x_181_ = lean_io_promise_resolve(v___x_180_, v_promise_167_);
if (v_isShared_179_ == 0)
{
lean_ctor_set(v___x_178_, 0, v___x_181_);
v___x_183_ = v___x_178_;
goto v_reusejp_182_;
}
else
{
lean_object* v_reuseFailAlloc_184_; 
v_reuseFailAlloc_184_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_184_, 0, v___x_181_);
v___x_183_ = v_reuseFailAlloc_184_;
goto v_reusejp_182_;
}
v_reusejp_182_:
{
return v___x_183_;
}
}
}
else
{
lean_object* v_a_186_; lean_object* v___x_188_; uint8_t v_isShared_189_; uint8_t v_isSharedCheck_195_; 
v_a_186_ = lean_ctor_get(v___x_175_, 0);
v_isSharedCheck_195_ = !lean_is_exclusive(v___x_175_);
if (v_isSharedCheck_195_ == 0)
{
v___x_188_ = v___x_175_;
v_isShared_189_ = v_isSharedCheck_195_;
goto v_resetjp_187_;
}
else
{
lean_inc(v_a_186_);
lean_dec(v___x_175_);
v___x_188_ = lean_box(0);
v_isShared_189_ = v_isSharedCheck_195_;
goto v_resetjp_187_;
}
v_resetjp_187_:
{
lean_object* v___x_190_; lean_object* v___x_191_; lean_object* v___x_193_; 
v___x_190_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_190_, 0, v_a_186_);
v___x_191_ = lean_io_promise_resolve(v___x_190_, v_promise_167_);
if (v_isShared_189_ == 0)
{
lean_ctor_set_tag(v___x_188_, 0);
lean_ctor_set(v___x_188_, 0, v___x_191_);
v___x_193_ = v___x_188_;
goto v_reusejp_192_;
}
else
{
lean_object* v_reuseFailAlloc_194_; 
v_reuseFailAlloc_194_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_194_, 0, v___x_191_);
v___x_193_ = v_reuseFailAlloc_194_;
goto v_reusejp_192_;
}
v_reusejp_192_:
{
return v___x_193_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_Waiter_race___at___00Std_Async_TCP_Socket_Server_acceptSelector_spec__1___boxed(lean_object* v_val_199_, lean_object* v_w_200_, lean_object* v_lose_201_, lean_object* v___y_202_){
_start:
{
lean_object* v_res_203_; 
v_res_203_ = l_Std_Async_Waiter_race___at___00Std_Async_TCP_Socket_Server_acceptSelector_spec__1(v_val_199_, v_w_200_, v_lose_201_);
lean_dec_ref(v_w_200_);
return v_res_203_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_TCP_Socket_Server_acceptSelector___lam__0(lean_object* v_s_204_){
_start:
{
lean_object* v_val_207_; lean_object* v_a_210_; lean_object* v_a_213_; lean_object* v___x_215_; 
v___x_215_ = lean_uv_tcp_try_accept(v_s_204_);
if (lean_obj_tag(v___x_215_) == 0)
{
lean_object* v_a_216_; lean_object* v___x_217_; 
v_a_216_ = lean_ctor_get(v___x_215_, 0);
lean_inc(v_a_216_);
lean_dec_ref_known(v___x_215_, 1);
v___x_217_ = l_IO_ofExcept___at___00Std_Async_TCP_Socket_Server_acceptSelector_spec__0___redArg(v_a_216_);
if (lean_obj_tag(v___x_217_) == 0)
{
lean_object* v_a_218_; 
v_a_218_ = lean_ctor_get(v___x_217_, 0);
lean_inc(v_a_218_);
lean_dec_ref_known(v___x_217_, 1);
if (lean_obj_tag(v_a_218_) == 0)
{
lean_object* v___x_219_; 
v___x_219_ = lean_box(0);
v_a_210_ = v___x_219_;
goto v___jp_209_;
}
else
{
lean_object* v_val_220_; lean_object* v___x_222_; uint8_t v_isShared_223_; uint8_t v_isSharedCheck_227_; 
v_val_220_ = lean_ctor_get(v_a_218_, 0);
v_isSharedCheck_227_ = !lean_is_exclusive(v_a_218_);
if (v_isSharedCheck_227_ == 0)
{
v___x_222_ = v_a_218_;
v_isShared_223_ = v_isSharedCheck_227_;
goto v_resetjp_221_;
}
else
{
lean_inc(v_val_220_);
lean_dec(v_a_218_);
v___x_222_ = lean_box(0);
v_isShared_223_ = v_isSharedCheck_227_;
goto v_resetjp_221_;
}
v_resetjp_221_:
{
lean_object* v___x_225_; 
if (v_isShared_223_ == 0)
{
v___x_225_ = v___x_222_;
goto v_reusejp_224_;
}
else
{
lean_object* v_reuseFailAlloc_226_; 
v_reuseFailAlloc_226_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_226_, 0, v_val_220_);
v___x_225_ = v_reuseFailAlloc_226_;
goto v_reusejp_224_;
}
v_reusejp_224_:
{
v_a_210_ = v___x_225_;
goto v___jp_209_;
}
}
}
}
else
{
lean_object* v_a_228_; 
v_a_228_ = lean_ctor_get(v___x_217_, 0);
lean_inc(v_a_228_);
lean_dec_ref_known(v___x_217_, 1);
v_a_213_ = v_a_228_;
goto v___jp_212_;
}
}
else
{
lean_object* v_a_229_; 
v_a_229_ = lean_ctor_get(v___x_215_, 0);
lean_inc(v_a_229_);
lean_dec_ref_known(v___x_215_, 1);
v_a_213_ = v_a_229_;
goto v___jp_212_;
}
v___jp_206_:
{
lean_object* v___x_208_; 
v___x_208_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_208_, 0, v_val_207_);
return v___x_208_;
}
v___jp_209_:
{
lean_object* v___x_211_; 
v___x_211_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_211_, 0, v_a_210_);
v_val_207_ = v___x_211_;
goto v___jp_206_;
}
v___jp_212_:
{
lean_object* v___x_214_; 
v___x_214_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_214_, 0, v_a_213_);
v_val_207_ = v___x_214_;
goto v___jp_206_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_TCP_Socket_Server_acceptSelector___lam__0___boxed(lean_object* v_s_230_, lean_object* v___y_231_){
_start:
{
lean_object* v_res_232_; 
v_res_232_ = l_Std_Async_TCP_Socket_Server_acceptSelector___lam__0(v_s_230_);
lean_dec(v_s_230_);
return v_res_232_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_TCP_Socket_Server_acceptSelector___lam__1(lean_object* v___x_233_){
_start:
{
lean_object* v___x_235_; 
v___x_235_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_235_, 0, v___x_233_);
return v___x_235_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_TCP_Socket_Server_acceptSelector___lam__1___boxed(lean_object* v___x_236_, lean_object* v___y_237_){
_start:
{
lean_object* v_res_238_; 
v_res_238_ = l_Std_Async_TCP_Socket_Server_acceptSelector___lam__1(v___x_236_);
return v_res_238_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_TCP_Socket_Server_acceptSelector___lam__2(lean_object* v_waiter_241_, lean_object* v_res_242_){
_start:
{
if (lean_obj_tag(v_res_242_) == 0)
{
lean_object* v___x_244_; lean_object* v___x_245_; 
v___x_244_ = lean_box(0);
v___x_245_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_245_, 0, v___x_244_);
return v___x_245_;
}
else
{
lean_object* v_val_246_; lean_object* v___f_247_; lean_object* v___x_248_; 
v_val_246_ = lean_ctor_get(v_res_242_, 0);
lean_inc(v_val_246_);
lean_dec_ref_known(v_res_242_, 1);
v___f_247_ = ((lean_object*)(l_Std_Async_TCP_Socket_Server_acceptSelector___lam__2___closed__0));
v___x_248_ = l_Std_Async_Waiter_race___at___00Std_Async_TCP_Socket_Server_acceptSelector_spec__1(v_val_246_, v_waiter_241_, v___f_247_);
return v___x_248_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_TCP_Socket_Server_acceptSelector___lam__2___boxed(lean_object* v_waiter_249_, lean_object* v_res_250_, lean_object* v___y_251_){
_start:
{
lean_object* v_res_252_; 
v_res_252_ = l_Std_Async_TCP_Socket_Server_acceptSelector___lam__2(v_waiter_249_, v_res_250_);
lean_dec_ref(v_waiter_249_);
return v_res_252_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_TCP_Socket_Server_acceptSelector___lam__3(lean_object* v___f_253_, lean_object* v_x_254_){
_start:
{
lean_object* v_val_257_; 
if (lean_obj_tag(v_x_254_) == 0)
{
lean_object* v_a_259_; lean_object* v___x_261_; uint8_t v_isShared_262_; uint8_t v_isSharedCheck_267_; 
lean_dec_ref(v___f_253_);
v_a_259_ = lean_ctor_get(v_x_254_, 0);
v_isSharedCheck_267_ = !lean_is_exclusive(v_x_254_);
if (v_isSharedCheck_267_ == 0)
{
v___x_261_ = v_x_254_;
v_isShared_262_ = v_isSharedCheck_267_;
goto v_resetjp_260_;
}
else
{
lean_inc(v_a_259_);
lean_dec(v_x_254_);
v___x_261_ = lean_box(0);
v_isShared_262_ = v_isSharedCheck_267_;
goto v_resetjp_260_;
}
v_resetjp_260_:
{
lean_object* v___x_264_; 
if (v_isShared_262_ == 0)
{
v___x_264_ = v___x_261_;
goto v_reusejp_263_;
}
else
{
lean_object* v_reuseFailAlloc_266_; 
v_reuseFailAlloc_266_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_266_, 0, v_a_259_);
v___x_264_ = v_reuseFailAlloc_266_;
goto v_reusejp_263_;
}
v_reusejp_263_:
{
lean_object* v___x_265_; 
v___x_265_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_265_, 0, v___x_264_);
return v___x_265_;
}
}
}
else
{
lean_object* v_a_268_; lean_object* v___x_270_; uint8_t v_isShared_271_; uint8_t v_isSharedCheck_284_; 
v_a_268_ = lean_ctor_get(v_x_254_, 0);
v_isSharedCheck_284_ = !lean_is_exclusive(v_x_254_);
if (v_isSharedCheck_284_ == 0)
{
v___x_270_ = v_x_254_;
v_isShared_271_ = v_isSharedCheck_284_;
goto v_resetjp_269_;
}
else
{
lean_inc(v_a_268_);
lean_dec(v_x_254_);
v___x_270_ = lean_box(0);
v_isShared_271_ = v_isSharedCheck_284_;
goto v_resetjp_269_;
}
v_resetjp_269_:
{
lean_object* v___x_272_; lean_object* v___x_273_; uint8_t v___x_274_; lean_object* v___x_275_; 
v___x_272_ = lean_io_promise_result_opt(v_a_268_);
lean_dec(v_a_268_);
v___x_273_ = lean_unsigned_to_nat(0u);
v___x_274_ = 0;
v___x_275_ = l_EIO_chainTask___redArg(v___x_272_, v___f_253_, v___x_273_, v___x_274_);
if (lean_obj_tag(v___x_275_) == 0)
{
lean_object* v_a_276_; lean_object* v___x_278_; 
v_a_276_ = lean_ctor_get(v___x_275_, 0);
lean_inc(v_a_276_);
lean_dec_ref_known(v___x_275_, 1);
if (v_isShared_271_ == 0)
{
lean_ctor_set(v___x_270_, 0, v_a_276_);
v___x_278_ = v___x_270_;
goto v_reusejp_277_;
}
else
{
lean_object* v_reuseFailAlloc_279_; 
v_reuseFailAlloc_279_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_279_, 0, v_a_276_);
v___x_278_ = v_reuseFailAlloc_279_;
goto v_reusejp_277_;
}
v_reusejp_277_:
{
v_val_257_ = v___x_278_;
goto v___jp_256_;
}
}
else
{
lean_object* v_a_280_; lean_object* v___x_282_; 
v_a_280_ = lean_ctor_get(v___x_275_, 0);
lean_inc(v_a_280_);
lean_dec_ref_known(v___x_275_, 1);
if (v_isShared_271_ == 0)
{
lean_ctor_set_tag(v___x_270_, 0);
lean_ctor_set(v___x_270_, 0, v_a_280_);
v___x_282_ = v___x_270_;
goto v_reusejp_281_;
}
else
{
lean_object* v_reuseFailAlloc_283_; 
v_reuseFailAlloc_283_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_283_, 0, v_a_280_);
v___x_282_ = v_reuseFailAlloc_283_;
goto v_reusejp_281_;
}
v_reusejp_281_:
{
v_val_257_ = v___x_282_;
goto v___jp_256_;
}
}
}
}
v___jp_256_:
{
lean_object* v___x_258_; 
v___x_258_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_258_, 0, v_val_257_);
return v___x_258_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_TCP_Socket_Server_acceptSelector___lam__3___boxed(lean_object* v___f_285_, lean_object* v_x_286_, lean_object* v___y_287_){
_start:
{
lean_object* v_res_288_; 
v_res_288_ = l_Std_Async_TCP_Socket_Server_acceptSelector___lam__3(v___f_285_, v_x_286_);
return v_res_288_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_TCP_Socket_Server_acceptSelector___lam__4(lean_object* v_s_289_, lean_object* v_waiter_290_){
_start:
{
lean_object* v___f_292_; lean_object* v___f_293_; lean_object* v___x_294_; uint8_t v___x_295_; lean_object* v_val_297_; lean_object* v___x_300_; 
v___f_292_ = lean_alloc_closure((void*)(l_Std_Async_TCP_Socket_Server_acceptSelector___lam__2___boxed), 3, 1);
lean_closure_set(v___f_292_, 0, v_waiter_290_);
v___f_293_ = lean_alloc_closure((void*)(l_Std_Async_TCP_Socket_Server_acceptSelector___lam__3___boxed), 3, 1);
lean_closure_set(v___f_293_, 0, v___f_292_);
v___x_294_ = lean_unsigned_to_nat(0u);
v___x_295_ = 0;
v___x_300_ = lean_uv_tcp_accept(v_s_289_);
if (lean_obj_tag(v___x_300_) == 0)
{
lean_object* v_a_301_; lean_object* v___x_303_; uint8_t v_isShared_304_; uint8_t v_isSharedCheck_308_; 
v_a_301_ = lean_ctor_get(v___x_300_, 0);
v_isSharedCheck_308_ = !lean_is_exclusive(v___x_300_);
if (v_isSharedCheck_308_ == 0)
{
v___x_303_ = v___x_300_;
v_isShared_304_ = v_isSharedCheck_308_;
goto v_resetjp_302_;
}
else
{
lean_inc(v_a_301_);
lean_dec(v___x_300_);
v___x_303_ = lean_box(0);
v_isShared_304_ = v_isSharedCheck_308_;
goto v_resetjp_302_;
}
v_resetjp_302_:
{
lean_object* v___x_306_; 
if (v_isShared_304_ == 0)
{
lean_ctor_set_tag(v___x_303_, 1);
v___x_306_ = v___x_303_;
goto v_reusejp_305_;
}
else
{
lean_object* v_reuseFailAlloc_307_; 
v_reuseFailAlloc_307_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_307_, 0, v_a_301_);
v___x_306_ = v_reuseFailAlloc_307_;
goto v_reusejp_305_;
}
v_reusejp_305_:
{
v_val_297_ = v___x_306_;
goto v___jp_296_;
}
}
}
else
{
lean_object* v_a_309_; lean_object* v___x_311_; uint8_t v_isShared_312_; uint8_t v_isSharedCheck_316_; 
v_a_309_ = lean_ctor_get(v___x_300_, 0);
v_isSharedCheck_316_ = !lean_is_exclusive(v___x_300_);
if (v_isSharedCheck_316_ == 0)
{
v___x_311_ = v___x_300_;
v_isShared_312_ = v_isSharedCheck_316_;
goto v_resetjp_310_;
}
else
{
lean_inc(v_a_309_);
lean_dec(v___x_300_);
v___x_311_ = lean_box(0);
v_isShared_312_ = v_isSharedCheck_316_;
goto v_resetjp_310_;
}
v_resetjp_310_:
{
lean_object* v___x_314_; 
if (v_isShared_312_ == 0)
{
lean_ctor_set_tag(v___x_311_, 0);
v___x_314_ = v___x_311_;
goto v_reusejp_313_;
}
else
{
lean_object* v_reuseFailAlloc_315_; 
v_reuseFailAlloc_315_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_315_, 0, v_a_309_);
v___x_314_ = v_reuseFailAlloc_315_;
goto v_reusejp_313_;
}
v_reusejp_313_:
{
v_val_297_ = v___x_314_;
goto v___jp_296_;
}
}
}
v___jp_296_:
{
lean_object* v___x_298_; lean_object* v___x_299_; 
v___x_298_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_298_, 0, v_val_297_);
v___x_299_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_294_, v___x_295_, v___x_298_, v___f_293_);
return v___x_299_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_TCP_Socket_Server_acceptSelector___lam__4___boxed(lean_object* v_s_317_, lean_object* v_waiter_318_, lean_object* v___y_319_){
_start:
{
lean_object* v_res_320_; 
v_res_320_ = l_Std_Async_TCP_Socket_Server_acceptSelector___lam__4(v_s_317_, v_waiter_318_);
lean_dec(v_s_317_);
return v_res_320_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_TCP_Socket_Server_acceptSelector___lam__5(lean_object* v_s_321_){
_start:
{
lean_object* v_val_324_; lean_object* v___x_326_; 
v___x_326_ = lean_uv_tcp_cancel_accept(v_s_321_);
if (lean_obj_tag(v___x_326_) == 0)
{
lean_object* v_a_327_; lean_object* v___x_329_; uint8_t v_isShared_330_; uint8_t v_isSharedCheck_334_; 
v_a_327_ = lean_ctor_get(v___x_326_, 0);
v_isSharedCheck_334_ = !lean_is_exclusive(v___x_326_);
if (v_isSharedCheck_334_ == 0)
{
v___x_329_ = v___x_326_;
v_isShared_330_ = v_isSharedCheck_334_;
goto v_resetjp_328_;
}
else
{
lean_inc(v_a_327_);
lean_dec(v___x_326_);
v___x_329_ = lean_box(0);
v_isShared_330_ = v_isSharedCheck_334_;
goto v_resetjp_328_;
}
v_resetjp_328_:
{
lean_object* v___x_332_; 
if (v_isShared_330_ == 0)
{
lean_ctor_set_tag(v___x_329_, 1);
v___x_332_ = v___x_329_;
goto v_reusejp_331_;
}
else
{
lean_object* v_reuseFailAlloc_333_; 
v_reuseFailAlloc_333_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_333_, 0, v_a_327_);
v___x_332_ = v_reuseFailAlloc_333_;
goto v_reusejp_331_;
}
v_reusejp_331_:
{
v_val_324_ = v___x_332_;
goto v___jp_323_;
}
}
}
else
{
lean_object* v_a_335_; lean_object* v___x_337_; uint8_t v_isShared_338_; uint8_t v_isSharedCheck_342_; 
v_a_335_ = lean_ctor_get(v___x_326_, 0);
v_isSharedCheck_342_ = !lean_is_exclusive(v___x_326_);
if (v_isSharedCheck_342_ == 0)
{
v___x_337_ = v___x_326_;
v_isShared_338_ = v_isSharedCheck_342_;
goto v_resetjp_336_;
}
else
{
lean_inc(v_a_335_);
lean_dec(v___x_326_);
v___x_337_ = lean_box(0);
v_isShared_338_ = v_isSharedCheck_342_;
goto v_resetjp_336_;
}
v_resetjp_336_:
{
lean_object* v___x_340_; 
if (v_isShared_338_ == 0)
{
lean_ctor_set_tag(v___x_337_, 0);
v___x_340_ = v___x_337_;
goto v_reusejp_339_;
}
else
{
lean_object* v_reuseFailAlloc_341_; 
v_reuseFailAlloc_341_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_341_, 0, v_a_335_);
v___x_340_ = v_reuseFailAlloc_341_;
goto v_reusejp_339_;
}
v_reusejp_339_:
{
v_val_324_ = v___x_340_;
goto v___jp_323_;
}
}
}
v___jp_323_:
{
lean_object* v___x_325_; 
v___x_325_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_325_, 0, v_val_324_);
return v___x_325_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_TCP_Socket_Server_acceptSelector___lam__5___boxed(lean_object* v_s_343_, lean_object* v___y_344_){
_start:
{
lean_object* v_res_345_; 
v_res_345_ = l_Std_Async_TCP_Socket_Server_acceptSelector___lam__5(v_s_343_);
lean_dec(v_s_343_);
return v_res_345_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_TCP_Socket_Server_acceptSelector(lean_object* v_s_346_){
_start:
{
lean_object* v___f_347_; lean_object* v___f_348_; lean_object* v___f_349_; lean_object* v___x_350_; 
lean_inc_n(v_s_346_, 2);
v___f_347_ = lean_alloc_closure((void*)(l_Std_Async_TCP_Socket_Server_acceptSelector___lam__0___boxed), 2, 1);
lean_closure_set(v___f_347_, 0, v_s_346_);
v___f_348_ = lean_alloc_closure((void*)(l_Std_Async_TCP_Socket_Server_acceptSelector___lam__4___boxed), 3, 1);
lean_closure_set(v___f_348_, 0, v_s_346_);
v___f_349_ = lean_alloc_closure((void*)(l_Std_Async_TCP_Socket_Server_acceptSelector___lam__5___boxed), 2, 1);
lean_closure_set(v___f_349_, 0, v_s_346_);
v___x_350_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_350_, 0, v___f_347_);
lean_ctor_set(v___x_350_, 1, v___f_348_);
lean_ctor_set(v___x_350_, 2, v___f_349_);
return v___x_350_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_TCP_Socket_Server_getSockName(lean_object* v_s_351_){
_start:
{
lean_object* v___x_353_; 
v___x_353_ = lean_uv_tcp_getsockname(v_s_351_);
return v___x_353_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_TCP_Socket_Server_getSockName___boxed(lean_object* v_s_354_, lean_object* v___y_355_){
_start:
{
lean_object* v_res_356_; 
v_res_356_ = l_Std_Async_TCP_Socket_Server_getSockName(v_s_354_);
lean_dec(v_s_354_);
return v_res_356_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_TCP_Socket_Server_noDelay(lean_object* v_s_357_){
_start:
{
lean_object* v___x_359_; 
v___x_359_ = lean_uv_tcp_nodelay(v_s_357_);
return v___x_359_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_TCP_Socket_Server_noDelay___boxed(lean_object* v_s_360_, lean_object* v___y_361_){
_start:
{
lean_object* v_res_362_; 
v_res_362_ = l_Std_Async_TCP_Socket_Server_noDelay(v_s_360_);
lean_dec(v_s_360_);
return v_res_362_;
}
}
static lean_object* _init_l_Std_Async_TCP_Socket_Server_keepAlive___auto__1___closed__12(void){
_start:
{
lean_object* v___x_389_; lean_object* v___x_390_; 
v___x_389_ = ((lean_object*)(l_Std_Async_TCP_Socket_Server_keepAlive___auto__1___closed__10));
v___x_390_ = l_Lean_mkAtom(v___x_389_);
return v___x_390_;
}
}
static lean_object* _init_l_Std_Async_TCP_Socket_Server_keepAlive___auto__1___closed__13(void){
_start:
{
lean_object* v___x_391_; lean_object* v___x_392_; lean_object* v___x_393_; 
v___x_391_ = lean_obj_once(&l_Std_Async_TCP_Socket_Server_keepAlive___auto__1___closed__12, &l_Std_Async_TCP_Socket_Server_keepAlive___auto__1___closed__12_once, _init_l_Std_Async_TCP_Socket_Server_keepAlive___auto__1___closed__12);
v___x_392_ = ((lean_object*)(l_Std_Async_TCP_Socket_Server_keepAlive___auto__1___closed__5));
v___x_393_ = lean_array_push(v___x_392_, v___x_391_);
return v___x_393_;
}
}
static lean_object* _init_l_Std_Async_TCP_Socket_Server_keepAlive___auto__1___closed__17(void){
_start:
{
lean_object* v___x_404_; lean_object* v___x_405_; lean_object* v___x_406_; 
v___x_404_ = ((lean_object*)(l_Std_Async_TCP_Socket_Server_keepAlive___auto__1___closed__16));
v___x_405_ = ((lean_object*)(l_Std_Async_TCP_Socket_Server_keepAlive___auto__1___closed__5));
v___x_406_ = lean_array_push(v___x_405_, v___x_404_);
return v___x_406_;
}
}
static lean_object* _init_l_Std_Async_TCP_Socket_Server_keepAlive___auto__1___closed__18(void){
_start:
{
lean_object* v___x_407_; lean_object* v___x_408_; lean_object* v___x_409_; lean_object* v___x_410_; 
v___x_407_ = lean_obj_once(&l_Std_Async_TCP_Socket_Server_keepAlive___auto__1___closed__17, &l_Std_Async_TCP_Socket_Server_keepAlive___auto__1___closed__17_once, _init_l_Std_Async_TCP_Socket_Server_keepAlive___auto__1___closed__17);
v___x_408_ = ((lean_object*)(l_Std_Async_TCP_Socket_Server_keepAlive___auto__1___closed__15));
v___x_409_ = lean_box(2);
v___x_410_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_410_, 0, v___x_409_);
lean_ctor_set(v___x_410_, 1, v___x_408_);
lean_ctor_set(v___x_410_, 2, v___x_407_);
return v___x_410_;
}
}
static lean_object* _init_l_Std_Async_TCP_Socket_Server_keepAlive___auto__1___closed__19(void){
_start:
{
lean_object* v___x_411_; lean_object* v___x_412_; lean_object* v___x_413_; 
v___x_411_ = lean_obj_once(&l_Std_Async_TCP_Socket_Server_keepAlive___auto__1___closed__18, &l_Std_Async_TCP_Socket_Server_keepAlive___auto__1___closed__18_once, _init_l_Std_Async_TCP_Socket_Server_keepAlive___auto__1___closed__18);
v___x_412_ = lean_obj_once(&l_Std_Async_TCP_Socket_Server_keepAlive___auto__1___closed__13, &l_Std_Async_TCP_Socket_Server_keepAlive___auto__1___closed__13_once, _init_l_Std_Async_TCP_Socket_Server_keepAlive___auto__1___closed__13);
v___x_413_ = lean_array_push(v___x_412_, v___x_411_);
return v___x_413_;
}
}
static lean_object* _init_l_Std_Async_TCP_Socket_Server_keepAlive___auto__1___closed__20(void){
_start:
{
lean_object* v___x_414_; lean_object* v___x_415_; lean_object* v___x_416_; lean_object* v___x_417_; 
v___x_414_ = lean_obj_once(&l_Std_Async_TCP_Socket_Server_keepAlive___auto__1___closed__19, &l_Std_Async_TCP_Socket_Server_keepAlive___auto__1___closed__19_once, _init_l_Std_Async_TCP_Socket_Server_keepAlive___auto__1___closed__19);
v___x_415_ = ((lean_object*)(l_Std_Async_TCP_Socket_Server_keepAlive___auto__1___closed__11));
v___x_416_ = lean_box(2);
v___x_417_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_417_, 0, v___x_416_);
lean_ctor_set(v___x_417_, 1, v___x_415_);
lean_ctor_set(v___x_417_, 2, v___x_414_);
return v___x_417_;
}
}
static lean_object* _init_l_Std_Async_TCP_Socket_Server_keepAlive___auto__1___closed__21(void){
_start:
{
lean_object* v___x_418_; lean_object* v___x_419_; lean_object* v___x_420_; 
v___x_418_ = lean_obj_once(&l_Std_Async_TCP_Socket_Server_keepAlive___auto__1___closed__20, &l_Std_Async_TCP_Socket_Server_keepAlive___auto__1___closed__20_once, _init_l_Std_Async_TCP_Socket_Server_keepAlive___auto__1___closed__20);
v___x_419_ = ((lean_object*)(l_Std_Async_TCP_Socket_Server_keepAlive___auto__1___closed__5));
v___x_420_ = lean_array_push(v___x_419_, v___x_418_);
return v___x_420_;
}
}
static lean_object* _init_l_Std_Async_TCP_Socket_Server_keepAlive___auto__1___closed__22(void){
_start:
{
lean_object* v___x_421_; lean_object* v___x_422_; lean_object* v___x_423_; lean_object* v___x_424_; 
v___x_421_ = lean_obj_once(&l_Std_Async_TCP_Socket_Server_keepAlive___auto__1___closed__21, &l_Std_Async_TCP_Socket_Server_keepAlive___auto__1___closed__21_once, _init_l_Std_Async_TCP_Socket_Server_keepAlive___auto__1___closed__21);
v___x_422_ = ((lean_object*)(l_Std_Async_TCP_Socket_Server_keepAlive___auto__1___closed__9));
v___x_423_ = lean_box(2);
v___x_424_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_424_, 0, v___x_423_);
lean_ctor_set(v___x_424_, 1, v___x_422_);
lean_ctor_set(v___x_424_, 2, v___x_421_);
return v___x_424_;
}
}
static lean_object* _init_l_Std_Async_TCP_Socket_Server_keepAlive___auto__1___closed__23(void){
_start:
{
lean_object* v___x_425_; lean_object* v___x_426_; lean_object* v___x_427_; 
v___x_425_ = lean_obj_once(&l_Std_Async_TCP_Socket_Server_keepAlive___auto__1___closed__22, &l_Std_Async_TCP_Socket_Server_keepAlive___auto__1___closed__22_once, _init_l_Std_Async_TCP_Socket_Server_keepAlive___auto__1___closed__22);
v___x_426_ = ((lean_object*)(l_Std_Async_TCP_Socket_Server_keepAlive___auto__1___closed__5));
v___x_427_ = lean_array_push(v___x_426_, v___x_425_);
return v___x_427_;
}
}
static lean_object* _init_l_Std_Async_TCP_Socket_Server_keepAlive___auto__1___closed__24(void){
_start:
{
lean_object* v___x_428_; lean_object* v___x_429_; lean_object* v___x_430_; lean_object* v___x_431_; 
v___x_428_ = lean_obj_once(&l_Std_Async_TCP_Socket_Server_keepAlive___auto__1___closed__23, &l_Std_Async_TCP_Socket_Server_keepAlive___auto__1___closed__23_once, _init_l_Std_Async_TCP_Socket_Server_keepAlive___auto__1___closed__23);
v___x_429_ = ((lean_object*)(l_Std_Async_TCP_Socket_Server_keepAlive___auto__1___closed__7));
v___x_430_ = lean_box(2);
v___x_431_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_431_, 0, v___x_430_);
lean_ctor_set(v___x_431_, 1, v___x_429_);
lean_ctor_set(v___x_431_, 2, v___x_428_);
return v___x_431_;
}
}
static lean_object* _init_l_Std_Async_TCP_Socket_Server_keepAlive___auto__1___closed__25(void){
_start:
{
lean_object* v___x_432_; lean_object* v___x_433_; lean_object* v___x_434_; 
v___x_432_ = lean_obj_once(&l_Std_Async_TCP_Socket_Server_keepAlive___auto__1___closed__24, &l_Std_Async_TCP_Socket_Server_keepAlive___auto__1___closed__24_once, _init_l_Std_Async_TCP_Socket_Server_keepAlive___auto__1___closed__24);
v___x_433_ = ((lean_object*)(l_Std_Async_TCP_Socket_Server_keepAlive___auto__1___closed__5));
v___x_434_ = lean_array_push(v___x_433_, v___x_432_);
return v___x_434_;
}
}
static lean_object* _init_l_Std_Async_TCP_Socket_Server_keepAlive___auto__1___closed__26(void){
_start:
{
lean_object* v___x_435_; lean_object* v___x_436_; lean_object* v___x_437_; lean_object* v___x_438_; 
v___x_435_ = lean_obj_once(&l_Std_Async_TCP_Socket_Server_keepAlive___auto__1___closed__25, &l_Std_Async_TCP_Socket_Server_keepAlive___auto__1___closed__25_once, _init_l_Std_Async_TCP_Socket_Server_keepAlive___auto__1___closed__25);
v___x_436_ = ((lean_object*)(l_Std_Async_TCP_Socket_Server_keepAlive___auto__1___closed__4));
v___x_437_ = lean_box(2);
v___x_438_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_438_, 0, v___x_437_);
lean_ctor_set(v___x_438_, 1, v___x_436_);
lean_ctor_set(v___x_438_, 2, v___x_435_);
return v___x_438_;
}
}
static lean_object* _init_l_Std_Async_TCP_Socket_Server_keepAlive___auto__1(void){
_start:
{
lean_object* v___x_439_; 
v___x_439_ = lean_obj_once(&l_Std_Async_TCP_Socket_Server_keepAlive___auto__1___closed__26, &l_Std_Async_TCP_Socket_Server_keepAlive___auto__1___closed__26_once, _init_l_Std_Async_TCP_Socket_Server_keepAlive___auto__1___closed__26);
return v___x_439_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_TCP_Socket_Server_keepAlive___redArg(lean_object* v_s_440_, uint8_t v_enable_441_, lean_object* v_delay_442_){
_start:
{
uint8_t v___x_444_; lean_object* v___x_445_; uint32_t v___x_446_; lean_object* v___x_447_; 
v___x_444_ = lean_bool_to_int8(v_enable_441_);
v___x_445_ = l_Int_toNat(v_delay_442_);
v___x_446_ = lean_uint32_of_nat(v___x_445_);
lean_dec(v___x_445_);
v___x_447_ = lean_uv_tcp_keepalive(v_s_440_, v___x_444_, v___x_446_);
return v___x_447_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_TCP_Socket_Server_keepAlive___redArg___boxed(lean_object* v_s_448_, lean_object* v_enable_449_, lean_object* v_delay_450_, lean_object* v___y_451_){
_start:
{
uint8_t v_enable_boxed_452_; lean_object* v_res_453_; 
v_enable_boxed_452_ = lean_unbox(v_enable_449_);
v_res_453_ = l_Std_Async_TCP_Socket_Server_keepAlive___redArg(v_s_448_, v_enable_boxed_452_, v_delay_450_);
lean_dec(v_delay_450_);
lean_dec(v_s_448_);
return v_res_453_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_TCP_Socket_Server_keepAlive(lean_object* v_s_454_, uint8_t v_enable_455_, lean_object* v_delay_456_, lean_object* v_x_457_){
_start:
{
uint8_t v___x_459_; lean_object* v___x_460_; uint32_t v___x_461_; lean_object* v___x_462_; 
v___x_459_ = lean_bool_to_int8(v_enable_455_);
v___x_460_ = l_Int_toNat(v_delay_456_);
v___x_461_ = lean_uint32_of_nat(v___x_460_);
lean_dec(v___x_460_);
v___x_462_ = lean_uv_tcp_keepalive(v_s_454_, v___x_459_, v___x_461_);
return v___x_462_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_TCP_Socket_Server_keepAlive___boxed(lean_object* v_s_463_, lean_object* v_enable_464_, lean_object* v_delay_465_, lean_object* v_x_466_, lean_object* v___y_467_){
_start:
{
uint8_t v_enable_boxed_468_; lean_object* v_res_469_; 
v_enable_boxed_468_ = lean_unbox(v_enable_464_);
v_res_469_ = l_Std_Async_TCP_Socket_Server_keepAlive(v_s_463_, v_enable_boxed_468_, v_delay_465_, v_x_466_);
lean_dec(v_delay_465_);
lean_dec(v_s_463_);
return v_res_469_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_TCP_Socket_Client_mk(){
_start:
{
lean_object* v___x_471_; 
v___x_471_ = lean_uv_tcp_new();
if (lean_obj_tag(v___x_471_) == 0)
{
lean_object* v_a_472_; lean_object* v___x_474_; uint8_t v_isShared_475_; uint8_t v_isSharedCheck_479_; 
v_a_472_ = lean_ctor_get(v___x_471_, 0);
v_isSharedCheck_479_ = !lean_is_exclusive(v___x_471_);
if (v_isSharedCheck_479_ == 0)
{
v___x_474_ = v___x_471_;
v_isShared_475_ = v_isSharedCheck_479_;
goto v_resetjp_473_;
}
else
{
lean_inc(v_a_472_);
lean_dec(v___x_471_);
v___x_474_ = lean_box(0);
v_isShared_475_ = v_isSharedCheck_479_;
goto v_resetjp_473_;
}
v_resetjp_473_:
{
lean_object* v___x_477_; 
if (v_isShared_475_ == 0)
{
v___x_477_ = v___x_474_;
goto v_reusejp_476_;
}
else
{
lean_object* v_reuseFailAlloc_478_; 
v_reuseFailAlloc_478_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_478_, 0, v_a_472_);
v___x_477_ = v_reuseFailAlloc_478_;
goto v_reusejp_476_;
}
v_reusejp_476_:
{
return v___x_477_;
}
}
}
else
{
lean_object* v_a_480_; lean_object* v___x_482_; uint8_t v_isShared_483_; uint8_t v_isSharedCheck_487_; 
v_a_480_ = lean_ctor_get(v___x_471_, 0);
v_isSharedCheck_487_ = !lean_is_exclusive(v___x_471_);
if (v_isSharedCheck_487_ == 0)
{
v___x_482_ = v___x_471_;
v_isShared_483_ = v_isSharedCheck_487_;
goto v_resetjp_481_;
}
else
{
lean_inc(v_a_480_);
lean_dec(v___x_471_);
v___x_482_ = lean_box(0);
v_isShared_483_ = v_isSharedCheck_487_;
goto v_resetjp_481_;
}
v_resetjp_481_:
{
lean_object* v___x_485_; 
if (v_isShared_483_ == 0)
{
v___x_485_ = v___x_482_;
goto v_reusejp_484_;
}
else
{
lean_object* v_reuseFailAlloc_486_; 
v_reuseFailAlloc_486_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_486_, 0, v_a_480_);
v___x_485_ = v_reuseFailAlloc_486_;
goto v_reusejp_484_;
}
v_reusejp_484_:
{
return v___x_485_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_TCP_Socket_Client_mk___boxed(lean_object* v___y_488_){
_start:
{
lean_object* v_res_489_; 
v_res_489_ = l_Std_Async_TCP_Socket_Client_mk();
return v_res_489_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_TCP_Socket_Client_bind(lean_object* v_s_490_, lean_object* v_addr_491_){
_start:
{
lean_object* v___x_493_; 
v___x_493_ = lean_uv_tcp_bind(v_s_490_, v_addr_491_);
return v___x_493_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_TCP_Socket_Client_bind___boxed(lean_object* v_s_494_, lean_object* v_addr_495_, lean_object* v___y_496_){
_start:
{
lean_object* v_res_497_; 
v_res_497_ = l_Std_Async_TCP_Socket_Client_bind(v_s_494_, v_addr_495_);
lean_dec_ref(v_addr_495_);
lean_dec(v_s_494_);
return v_res_497_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_TCP_Socket_Client_connect___lam__0(lean_object* v___x_498_, lean_object* v_x_499_){
_start:
{
if (lean_obj_tag(v_x_499_) == 0)
{
lean_object* v___x_500_; lean_object* v___x_501_; 
v___x_500_ = lean_mk_io_user_error(v___x_498_);
v___x_501_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_501_, 0, v___x_500_);
return v___x_501_;
}
else
{
lean_object* v_val_502_; 
lean_dec_ref(v___x_498_);
v_val_502_ = lean_ctor_get(v_x_499_, 0);
lean_inc(v_val_502_);
return v_val_502_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_TCP_Socket_Client_connect___lam__0___boxed(lean_object* v___x_503_, lean_object* v_x_504_){
_start:
{
lean_object* v_res_505_; 
v_res_505_ = l_Std_Async_TCP_Socket_Client_connect___lam__0(v___x_503_, v_x_504_);
lean_dec(v_x_504_);
return v_res_505_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_TCP_Socket_Client_connect(lean_object* v_s_508_, lean_object* v_addr_509_){
_start:
{
lean_object* v___f_511_; lean_object* v___x_512_; 
v___f_511_ = ((lean_object*)(l_Std_Async_TCP_Socket_Client_connect___closed__0));
v___x_512_ = lean_uv_tcp_connect(v_s_508_, v_addr_509_);
if (lean_obj_tag(v___x_512_) == 0)
{
lean_object* v_a_513_; lean_object* v___x_515_; uint8_t v_isShared_516_; uint8_t v_isSharedCheck_524_; 
v_a_513_ = lean_ctor_get(v___x_512_, 0);
v_isSharedCheck_524_ = !lean_is_exclusive(v___x_512_);
if (v_isSharedCheck_524_ == 0)
{
v___x_515_ = v___x_512_;
v_isShared_516_ = v_isSharedCheck_524_;
goto v_resetjp_514_;
}
else
{
lean_inc(v_a_513_);
lean_dec(v___x_512_);
v___x_515_ = lean_box(0);
v_isShared_516_ = v_isSharedCheck_524_;
goto v_resetjp_514_;
}
v_resetjp_514_:
{
lean_object* v___x_517_; lean_object* v___x_518_; uint8_t v___x_519_; lean_object* v___x_520_; lean_object* v___x_522_; 
v___x_517_ = lean_io_promise_result_opt(v_a_513_);
lean_dec(v_a_513_);
v___x_518_ = lean_unsigned_to_nat(0u);
v___x_519_ = 0;
v___x_520_ = lean_task_map(v___f_511_, v___x_517_, v___x_518_, v___x_519_);
if (v_isShared_516_ == 0)
{
lean_ctor_set_tag(v___x_515_, 1);
lean_ctor_set(v___x_515_, 0, v___x_520_);
v___x_522_ = v___x_515_;
goto v_reusejp_521_;
}
else
{
lean_object* v_reuseFailAlloc_523_; 
v_reuseFailAlloc_523_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_523_, 0, v___x_520_);
v___x_522_ = v_reuseFailAlloc_523_;
goto v_reusejp_521_;
}
v_reusejp_521_:
{
return v___x_522_;
}
}
}
else
{
lean_object* v_a_525_; lean_object* v___x_527_; uint8_t v_isShared_528_; uint8_t v_isSharedCheck_533_; 
v_a_525_ = lean_ctor_get(v___x_512_, 0);
v_isSharedCheck_533_ = !lean_is_exclusive(v___x_512_);
if (v_isSharedCheck_533_ == 0)
{
v___x_527_ = v___x_512_;
v_isShared_528_ = v_isSharedCheck_533_;
goto v_resetjp_526_;
}
else
{
lean_inc(v_a_525_);
lean_dec(v___x_512_);
v___x_527_ = lean_box(0);
v_isShared_528_ = v_isSharedCheck_533_;
goto v_resetjp_526_;
}
v_resetjp_526_:
{
lean_object* v___x_530_; 
if (v_isShared_528_ == 0)
{
lean_ctor_set_tag(v___x_527_, 0);
v___x_530_ = v___x_527_;
goto v_reusejp_529_;
}
else
{
lean_object* v_reuseFailAlloc_532_; 
v_reuseFailAlloc_532_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_532_, 0, v_a_525_);
v___x_530_ = v_reuseFailAlloc_532_;
goto v_reusejp_529_;
}
v_reusejp_529_:
{
lean_object* v___x_531_; 
v___x_531_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_531_, 0, v___x_530_);
return v___x_531_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_TCP_Socket_Client_connect___boxed(lean_object* v_s_534_, lean_object* v_addr_535_, lean_object* v___y_536_){
_start:
{
lean_object* v_res_537_; 
v_res_537_ = l_Std_Async_TCP_Socket_Client_connect(v_s_534_, v_addr_535_);
lean_dec_ref(v_addr_535_);
lean_dec(v_s_534_);
return v_res_537_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_TCP_Socket_Client_sendAll(lean_object* v_s_538_, lean_object* v_data_539_){
_start:
{
lean_object* v___f_541_; lean_object* v___x_542_; 
v___f_541_ = ((lean_object*)(l_Std_Async_TCP_Socket_Client_connect___closed__0));
v___x_542_ = lean_uv_tcp_send(v_s_538_, v_data_539_);
if (lean_obj_tag(v___x_542_) == 0)
{
lean_object* v_a_543_; lean_object* v___x_545_; uint8_t v_isShared_546_; uint8_t v_isSharedCheck_554_; 
v_a_543_ = lean_ctor_get(v___x_542_, 0);
v_isSharedCheck_554_ = !lean_is_exclusive(v___x_542_);
if (v_isSharedCheck_554_ == 0)
{
v___x_545_ = v___x_542_;
v_isShared_546_ = v_isSharedCheck_554_;
goto v_resetjp_544_;
}
else
{
lean_inc(v_a_543_);
lean_dec(v___x_542_);
v___x_545_ = lean_box(0);
v_isShared_546_ = v_isSharedCheck_554_;
goto v_resetjp_544_;
}
v_resetjp_544_:
{
lean_object* v___x_547_; lean_object* v___x_548_; uint8_t v___x_549_; lean_object* v___x_550_; lean_object* v___x_552_; 
v___x_547_ = lean_io_promise_result_opt(v_a_543_);
lean_dec(v_a_543_);
v___x_548_ = lean_unsigned_to_nat(0u);
v___x_549_ = 0;
v___x_550_ = lean_task_map(v___f_541_, v___x_547_, v___x_548_, v___x_549_);
if (v_isShared_546_ == 0)
{
lean_ctor_set_tag(v___x_545_, 1);
lean_ctor_set(v___x_545_, 0, v___x_550_);
v___x_552_ = v___x_545_;
goto v_reusejp_551_;
}
else
{
lean_object* v_reuseFailAlloc_553_; 
v_reuseFailAlloc_553_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_553_, 0, v___x_550_);
v___x_552_ = v_reuseFailAlloc_553_;
goto v_reusejp_551_;
}
v_reusejp_551_:
{
return v___x_552_;
}
}
}
else
{
lean_object* v_a_555_; lean_object* v___x_557_; uint8_t v_isShared_558_; uint8_t v_isSharedCheck_563_; 
v_a_555_ = lean_ctor_get(v___x_542_, 0);
v_isSharedCheck_563_ = !lean_is_exclusive(v___x_542_);
if (v_isSharedCheck_563_ == 0)
{
v___x_557_ = v___x_542_;
v_isShared_558_ = v_isSharedCheck_563_;
goto v_resetjp_556_;
}
else
{
lean_inc(v_a_555_);
lean_dec(v___x_542_);
v___x_557_ = lean_box(0);
v_isShared_558_ = v_isSharedCheck_563_;
goto v_resetjp_556_;
}
v_resetjp_556_:
{
lean_object* v___x_560_; 
if (v_isShared_558_ == 0)
{
lean_ctor_set_tag(v___x_557_, 0);
v___x_560_ = v___x_557_;
goto v_reusejp_559_;
}
else
{
lean_object* v_reuseFailAlloc_562_; 
v_reuseFailAlloc_562_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_562_, 0, v_a_555_);
v___x_560_ = v_reuseFailAlloc_562_;
goto v_reusejp_559_;
}
v_reusejp_559_:
{
lean_object* v___x_561_; 
v___x_561_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_561_, 0, v___x_560_);
return v___x_561_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_TCP_Socket_Client_sendAll___boxed(lean_object* v_s_564_, lean_object* v_data_565_, lean_object* v___y_566_){
_start:
{
lean_object* v_res_567_; 
v_res_567_ = l_Std_Async_TCP_Socket_Client_sendAll(v_s_564_, v_data_565_);
lean_dec(v_s_564_);
return v_res_567_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_TCP_Socket_Client_send(lean_object* v_s_568_, lean_object* v_data_569_){
_start:
{
lean_object* v___x_571_; lean_object* v___x_572_; lean_object* v___x_573_; lean_object* v___f_574_; lean_object* v___x_575_; 
v___x_571_ = lean_unsigned_to_nat(1u);
v___x_572_ = lean_mk_empty_array_with_capacity(v___x_571_);
v___x_573_ = lean_array_push(v___x_572_, v_data_569_);
v___f_574_ = ((lean_object*)(l_Std_Async_TCP_Socket_Client_connect___closed__0));
v___x_575_ = lean_uv_tcp_send(v_s_568_, v___x_573_);
if (lean_obj_tag(v___x_575_) == 0)
{
lean_object* v_a_576_; lean_object* v___x_578_; uint8_t v_isShared_579_; uint8_t v_isSharedCheck_587_; 
v_a_576_ = lean_ctor_get(v___x_575_, 0);
v_isSharedCheck_587_ = !lean_is_exclusive(v___x_575_);
if (v_isSharedCheck_587_ == 0)
{
v___x_578_ = v___x_575_;
v_isShared_579_ = v_isSharedCheck_587_;
goto v_resetjp_577_;
}
else
{
lean_inc(v_a_576_);
lean_dec(v___x_575_);
v___x_578_ = lean_box(0);
v_isShared_579_ = v_isSharedCheck_587_;
goto v_resetjp_577_;
}
v_resetjp_577_:
{
lean_object* v___x_580_; lean_object* v___x_581_; uint8_t v___x_582_; lean_object* v___x_583_; lean_object* v___x_585_; 
v___x_580_ = lean_io_promise_result_opt(v_a_576_);
lean_dec(v_a_576_);
v___x_581_ = lean_unsigned_to_nat(0u);
v___x_582_ = 0;
v___x_583_ = lean_task_map(v___f_574_, v___x_580_, v___x_581_, v___x_582_);
if (v_isShared_579_ == 0)
{
lean_ctor_set_tag(v___x_578_, 1);
lean_ctor_set(v___x_578_, 0, v___x_583_);
v___x_585_ = v___x_578_;
goto v_reusejp_584_;
}
else
{
lean_object* v_reuseFailAlloc_586_; 
v_reuseFailAlloc_586_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_586_, 0, v___x_583_);
v___x_585_ = v_reuseFailAlloc_586_;
goto v_reusejp_584_;
}
v_reusejp_584_:
{
return v___x_585_;
}
}
}
else
{
lean_object* v_a_588_; lean_object* v___x_590_; uint8_t v_isShared_591_; uint8_t v_isSharedCheck_596_; 
v_a_588_ = lean_ctor_get(v___x_575_, 0);
v_isSharedCheck_596_ = !lean_is_exclusive(v___x_575_);
if (v_isSharedCheck_596_ == 0)
{
v___x_590_ = v___x_575_;
v_isShared_591_ = v_isSharedCheck_596_;
goto v_resetjp_589_;
}
else
{
lean_inc(v_a_588_);
lean_dec(v___x_575_);
v___x_590_ = lean_box(0);
v_isShared_591_ = v_isSharedCheck_596_;
goto v_resetjp_589_;
}
v_resetjp_589_:
{
lean_object* v___x_593_; 
if (v_isShared_591_ == 0)
{
lean_ctor_set_tag(v___x_590_, 0);
v___x_593_ = v___x_590_;
goto v_reusejp_592_;
}
else
{
lean_object* v_reuseFailAlloc_595_; 
v_reuseFailAlloc_595_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_595_, 0, v_a_588_);
v___x_593_ = v_reuseFailAlloc_595_;
goto v_reusejp_592_;
}
v_reusejp_592_:
{
lean_object* v___x_594_; 
v___x_594_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_594_, 0, v___x_593_);
return v___x_594_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_TCP_Socket_Client_send___boxed(lean_object* v_s_597_, lean_object* v_data_598_, lean_object* v___y_599_){
_start:
{
lean_object* v_res_600_; 
v_res_600_ = l_Std_Async_TCP_Socket_Client_send(v_s_597_, v_data_598_);
lean_dec(v_s_597_);
return v_res_600_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_TCP_Socket_Client_recv_x3f___lam__0(lean_object* v___x_601_, lean_object* v_x_602_){
_start:
{
if (lean_obj_tag(v_x_602_) == 0)
{
lean_object* v___x_603_; lean_object* v___x_604_; 
v___x_603_ = lean_mk_io_user_error(v___x_601_);
v___x_604_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_604_, 0, v___x_603_);
return v___x_604_;
}
else
{
lean_object* v_val_605_; 
lean_dec_ref(v___x_601_);
v_val_605_ = lean_ctor_get(v_x_602_, 0);
lean_inc(v_val_605_);
return v_val_605_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_TCP_Socket_Client_recv_x3f___lam__0___boxed(lean_object* v___x_606_, lean_object* v_x_607_){
_start:
{
lean_object* v_res_608_; 
v_res_608_ = l_Std_Async_TCP_Socket_Client_recv_x3f___lam__0(v___x_606_, v_x_607_);
lean_dec(v_x_607_);
return v_res_608_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_TCP_Socket_Client_recv_x3f(lean_object* v_s_611_, uint64_t v_size_612_){
_start:
{
lean_object* v___f_614_; lean_object* v___x_615_; 
v___f_614_ = ((lean_object*)(l_Std_Async_TCP_Socket_Client_recv_x3f___closed__0));
v___x_615_ = lean_uv_tcp_recv(v_s_611_, v_size_612_);
if (lean_obj_tag(v___x_615_) == 0)
{
lean_object* v_a_616_; lean_object* v___x_618_; uint8_t v_isShared_619_; uint8_t v_isSharedCheck_627_; 
v_a_616_ = lean_ctor_get(v___x_615_, 0);
v_isSharedCheck_627_ = !lean_is_exclusive(v___x_615_);
if (v_isSharedCheck_627_ == 0)
{
v___x_618_ = v___x_615_;
v_isShared_619_ = v_isSharedCheck_627_;
goto v_resetjp_617_;
}
else
{
lean_inc(v_a_616_);
lean_dec(v___x_615_);
v___x_618_ = lean_box(0);
v_isShared_619_ = v_isSharedCheck_627_;
goto v_resetjp_617_;
}
v_resetjp_617_:
{
lean_object* v___x_620_; lean_object* v___x_621_; uint8_t v___x_622_; lean_object* v___x_623_; lean_object* v___x_625_; 
v___x_620_ = lean_io_promise_result_opt(v_a_616_);
lean_dec(v_a_616_);
v___x_621_ = lean_unsigned_to_nat(0u);
v___x_622_ = 0;
v___x_623_ = lean_task_map(v___f_614_, v___x_620_, v___x_621_, v___x_622_);
if (v_isShared_619_ == 0)
{
lean_ctor_set_tag(v___x_618_, 1);
lean_ctor_set(v___x_618_, 0, v___x_623_);
v___x_625_ = v___x_618_;
goto v_reusejp_624_;
}
else
{
lean_object* v_reuseFailAlloc_626_; 
v_reuseFailAlloc_626_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_626_, 0, v___x_623_);
v___x_625_ = v_reuseFailAlloc_626_;
goto v_reusejp_624_;
}
v_reusejp_624_:
{
return v___x_625_;
}
}
}
else
{
lean_object* v_a_628_; lean_object* v___x_630_; uint8_t v_isShared_631_; uint8_t v_isSharedCheck_636_; 
v_a_628_ = lean_ctor_get(v___x_615_, 0);
v_isSharedCheck_636_ = !lean_is_exclusive(v___x_615_);
if (v_isSharedCheck_636_ == 0)
{
v___x_630_ = v___x_615_;
v_isShared_631_ = v_isSharedCheck_636_;
goto v_resetjp_629_;
}
else
{
lean_inc(v_a_628_);
lean_dec(v___x_615_);
v___x_630_ = lean_box(0);
v_isShared_631_ = v_isSharedCheck_636_;
goto v_resetjp_629_;
}
v_resetjp_629_:
{
lean_object* v___x_633_; 
if (v_isShared_631_ == 0)
{
lean_ctor_set_tag(v___x_630_, 0);
v___x_633_ = v___x_630_;
goto v_reusejp_632_;
}
else
{
lean_object* v_reuseFailAlloc_635_; 
v_reuseFailAlloc_635_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_635_, 0, v_a_628_);
v___x_633_ = v_reuseFailAlloc_635_;
goto v_reusejp_632_;
}
v_reusejp_632_:
{
lean_object* v___x_634_; 
v___x_634_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_634_, 0, v___x_633_);
return v___x_634_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_TCP_Socket_Client_recv_x3f___boxed(lean_object* v_s_637_, lean_object* v_size_638_, lean_object* v___y_639_){
_start:
{
uint64_t v_size_boxed_640_; lean_object* v_res_641_; 
v_size_boxed_640_ = lean_unbox_uint64(v_size_638_);
lean_dec_ref(v_size_638_);
v_res_641_ = l_Std_Async_TCP_Socket_Client_recv_x3f(v_s_637_, v_size_boxed_640_);
lean_dec(v_s_637_);
return v_res_641_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Waiter_race___at___00Std_Async_TCP_Socket_Client_recvSelector_spec__0___lam__0(lean_object* v_x_642_){
_start:
{
if (lean_obj_tag(v_x_642_) == 0)
{
lean_object* v_a_643_; lean_object* v___x_644_; 
v_a_643_ = lean_ctor_get(v_x_642_, 0);
lean_inc(v_a_643_);
lean_dec_ref_known(v_x_642_, 1);
v___x_644_ = lean_task_pure(v_a_643_);
return v___x_644_;
}
else
{
lean_object* v_a_645_; 
v_a_645_ = lean_ctor_get(v_x_642_, 0);
lean_inc_ref(v_a_645_);
lean_dec_ref_known(v_x_642_, 1);
return v_a_645_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_Waiter_race___at___00Std_Async_TCP_Socket_Client_recvSelector_spec__0___lam__2(lean_object* v_s_646_, uint64_t v_size_647_, lean_object* v___x_648_){
_start:
{
lean_object* v___f_650_; lean_object* v___x_651_; 
v___f_650_ = ((lean_object*)(l_Std_Async_TCP_Socket_Client_recv_x3f___closed__0));
v___x_651_ = lean_uv_tcp_recv(v_s_646_, v_size_647_);
if (lean_obj_tag(v___x_651_) == 0)
{
lean_object* v_a_652_; lean_object* v___x_654_; uint8_t v_isShared_655_; uint8_t v_isSharedCheck_662_; 
v_a_652_ = lean_ctor_get(v___x_651_, 0);
v_isSharedCheck_662_ = !lean_is_exclusive(v___x_651_);
if (v_isSharedCheck_662_ == 0)
{
v___x_654_ = v___x_651_;
v_isShared_655_ = v_isSharedCheck_662_;
goto v_resetjp_653_;
}
else
{
lean_inc(v_a_652_);
lean_dec(v___x_651_);
v___x_654_ = lean_box(0);
v_isShared_655_ = v_isSharedCheck_662_;
goto v_resetjp_653_;
}
v_resetjp_653_:
{
lean_object* v___x_656_; uint8_t v___x_657_; lean_object* v___x_658_; lean_object* v___x_660_; 
v___x_656_ = lean_io_promise_result_opt(v_a_652_);
lean_dec(v_a_652_);
v___x_657_ = 0;
v___x_658_ = lean_task_map(v___f_650_, v___x_656_, v___x_648_, v___x_657_);
if (v_isShared_655_ == 0)
{
lean_ctor_set_tag(v___x_654_, 1);
lean_ctor_set(v___x_654_, 0, v___x_658_);
v___x_660_ = v___x_654_;
goto v_reusejp_659_;
}
else
{
lean_object* v_reuseFailAlloc_661_; 
v_reuseFailAlloc_661_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_661_, 0, v___x_658_);
v___x_660_ = v_reuseFailAlloc_661_;
goto v_reusejp_659_;
}
v_reusejp_659_:
{
return v___x_660_;
}
}
}
else
{
lean_object* v_a_663_; lean_object* v___x_665_; uint8_t v_isShared_666_; uint8_t v_isSharedCheck_671_; 
lean_dec(v___x_648_);
v_a_663_ = lean_ctor_get(v___x_651_, 0);
v_isSharedCheck_671_ = !lean_is_exclusive(v___x_651_);
if (v_isSharedCheck_671_ == 0)
{
v___x_665_ = v___x_651_;
v_isShared_666_ = v_isSharedCheck_671_;
goto v_resetjp_664_;
}
else
{
lean_inc(v_a_663_);
lean_dec(v___x_651_);
v___x_665_ = lean_box(0);
v_isShared_666_ = v_isSharedCheck_671_;
goto v_resetjp_664_;
}
v_resetjp_664_:
{
lean_object* v___x_668_; 
if (v_isShared_666_ == 0)
{
lean_ctor_set_tag(v___x_665_, 0);
v___x_668_ = v___x_665_;
goto v_reusejp_667_;
}
else
{
lean_object* v_reuseFailAlloc_670_; 
v_reuseFailAlloc_670_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_670_, 0, v_a_663_);
v___x_668_ = v_reuseFailAlloc_670_;
goto v_reusejp_667_;
}
v_reusejp_667_:
{
lean_object* v___x_669_; 
v___x_669_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_669_, 0, v___x_668_);
return v___x_669_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_Waiter_race___at___00Std_Async_TCP_Socket_Client_recvSelector_spec__0___lam__2___boxed(lean_object* v_s_672_, lean_object* v_size_673_, lean_object* v___x_674_, lean_object* v___y_675_){
_start:
{
uint64_t v_size_boxed_676_; lean_object* v_res_677_; 
v_size_boxed_676_ = lean_unbox_uint64(v_size_673_);
lean_dec_ref(v_size_673_);
v_res_677_ = l_Std_Async_Waiter_race___at___00Std_Async_TCP_Socket_Client_recvSelector_spec__0___lam__2(v_s_672_, v_size_boxed_676_, v___x_674_);
lean_dec(v_s_672_);
return v_res_677_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Waiter_race___at___00Std_Async_TCP_Socket_Client_recvSelector_spec__0(lean_object* v_val_679_, lean_object* v_s_680_, uint64_t v_size_681_, lean_object* v_w_682_, lean_object* v_lose_683_){
_start:
{
lean_object* v_finished_685_; lean_object* v_promise_686_; lean_object* v_a_688_; lean_object* v___f_692_; lean_object* v___x_693_; uint8_t v___y_695_; uint8_t v___x_718_; 
v_finished_685_ = lean_ctor_get(v_w_682_, 0);
v_promise_686_ = lean_ctor_get(v_w_682_, 1);
v___f_692_ = ((lean_object*)(l_Std_Async_Waiter_race___at___00Std_Async_TCP_Socket_Client_recvSelector_spec__0___closed__0));
v___x_693_ = lean_st_ref_take(v_finished_685_);
v___x_718_ = lean_unbox(v___x_693_);
lean_dec(v___x_693_);
if (v___x_718_ == 0)
{
uint8_t v___x_719_; 
v___x_719_ = 1;
v___y_695_ = v___x_719_;
goto v___jp_694_;
}
else
{
uint8_t v___x_720_; 
v___x_720_ = 0;
v___y_695_ = v___x_720_;
goto v___jp_694_;
}
v___jp_687_:
{
lean_object* v___x_689_; lean_object* v___x_690_; lean_object* v___x_691_; 
v___x_689_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_689_, 0, v_a_688_);
v___x_690_ = lean_io_promise_resolve(v___x_689_, v_promise_686_);
v___x_691_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_691_, 0, v___x_690_);
return v___x_691_;
}
v___jp_694_:
{
uint8_t v___x_696_; lean_object* v___x_697_; lean_object* v___x_698_; 
v___x_696_ = 1;
v___x_697_ = lean_box(v___x_696_);
v___x_698_ = lean_st_ref_put(v_finished_685_, v___x_697_);
if (v___y_695_ == 0)
{
lean_object* v___x_699_; 
lean_dec(v_s_680_);
lean_dec_ref(v_val_679_);
v___x_699_ = lean_apply_1(v_lose_683_, lean_box(0));
return v___x_699_;
}
else
{
lean_object* v___x_700_; 
lean_dec_ref(v_lose_683_);
v___x_700_ = l_IO_ofExcept___at___00Std_Async_TCP_Socket_Server_acceptSelector_spec__0___redArg(v_val_679_);
if (lean_obj_tag(v___x_700_) == 0)
{
lean_object* v___x_702_; uint8_t v_isShared_703_; uint8_t v_isSharedCheck_715_; 
v_isSharedCheck_715_ = !lean_is_exclusive(v___x_700_);
if (v_isSharedCheck_715_ == 0)
{
lean_object* v_unused_716_; 
v_unused_716_ = lean_ctor_get(v___x_700_, 0);
lean_dec(v_unused_716_);
v___x_702_ = v___x_700_;
v_isShared_703_ = v_isSharedCheck_715_;
goto v_resetjp_701_;
}
else
{
lean_dec(v___x_700_);
v___x_702_ = lean_box(0);
v_isShared_703_ = v_isSharedCheck_715_;
goto v_resetjp_701_;
}
v_resetjp_701_:
{
lean_object* v___x_704_; lean_object* v___x_705_; lean_object* v___f_706_; lean_object* v___x_707_; lean_object* v___x_708_; lean_object* v___x_709_; 
v___x_704_ = lean_unsigned_to_nat(0u);
v___x_705_ = lean_box_uint64(v_size_681_);
v___f_706_ = lean_alloc_closure((void*)(l_Std_Async_Waiter_race___at___00Std_Async_TCP_Socket_Client_recvSelector_spec__0___lam__2___boxed), 4, 3);
lean_closure_set(v___f_706_, 0, v_s_680_);
lean_closure_set(v___f_706_, 1, v___x_705_);
lean_closure_set(v___f_706_, 2, v___x_704_);
v___x_707_ = lean_io_as_task(v___f_706_, v___x_704_);
v___x_708_ = lean_task_bind(v___x_707_, v___f_692_, v___x_704_, v___y_695_);
v___x_709_ = lean_task_get_own(v___x_708_);
if (lean_obj_tag(v___x_709_) == 0)
{
lean_object* v_a_710_; 
lean_del_object(v___x_702_);
v_a_710_ = lean_ctor_get(v___x_709_, 0);
lean_inc(v_a_710_);
lean_dec_ref_known(v___x_709_, 1);
v_a_688_ = v_a_710_;
goto v___jp_687_;
}
else
{
lean_object* v___x_711_; lean_object* v___x_713_; 
v___x_711_ = lean_io_promise_resolve(v___x_709_, v_promise_686_);
if (v_isShared_703_ == 0)
{
lean_ctor_set(v___x_702_, 0, v___x_711_);
v___x_713_ = v___x_702_;
goto v_reusejp_712_;
}
else
{
lean_object* v_reuseFailAlloc_714_; 
v_reuseFailAlloc_714_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_714_, 0, v___x_711_);
v___x_713_ = v_reuseFailAlloc_714_;
goto v_reusejp_712_;
}
v_reusejp_712_:
{
return v___x_713_;
}
}
}
}
else
{
lean_object* v_a_717_; 
lean_dec(v_s_680_);
v_a_717_ = lean_ctor_get(v___x_700_, 0);
lean_inc(v_a_717_);
lean_dec_ref_known(v___x_700_, 1);
v_a_688_ = v_a_717_;
goto v___jp_687_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_Waiter_race___at___00Std_Async_TCP_Socket_Client_recvSelector_spec__0___boxed(lean_object* v_val_721_, lean_object* v_s_722_, lean_object* v_size_723_, lean_object* v_w_724_, lean_object* v_lose_725_, lean_object* v___y_726_){
_start:
{
uint64_t v_size_boxed_727_; lean_object* v_res_728_; 
v_size_boxed_727_ = lean_unbox_uint64(v_size_723_);
lean_dec_ref(v_size_723_);
v_res_728_ = l_Std_Async_Waiter_race___at___00Std_Async_TCP_Socket_Client_recvSelector_spec__0(v_val_721_, v_s_722_, v_size_boxed_727_, v_w_724_, v_lose_725_);
lean_dec_ref(v_w_724_);
return v_res_728_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_TCP_Socket_Client_recvSelector___lam__0(lean_object* v_x_733_){
_start:
{
if (lean_obj_tag(v_x_733_) == 0)
{
lean_object* v_a_735_; lean_object* v___x_737_; uint8_t v_isShared_738_; uint8_t v_isSharedCheck_743_; 
v_a_735_ = lean_ctor_get(v_x_733_, 0);
v_isSharedCheck_743_ = !lean_is_exclusive(v_x_733_);
if (v_isSharedCheck_743_ == 0)
{
v___x_737_ = v_x_733_;
v_isShared_738_ = v_isSharedCheck_743_;
goto v_resetjp_736_;
}
else
{
lean_inc(v_a_735_);
lean_dec(v_x_733_);
v___x_737_ = lean_box(0);
v_isShared_738_ = v_isSharedCheck_743_;
goto v_resetjp_736_;
}
v_resetjp_736_:
{
lean_object* v___x_740_; 
if (v_isShared_738_ == 0)
{
v___x_740_ = v___x_737_;
goto v_reusejp_739_;
}
else
{
lean_object* v_reuseFailAlloc_742_; 
v_reuseFailAlloc_742_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_742_, 0, v_a_735_);
v___x_740_ = v_reuseFailAlloc_742_;
goto v_reusejp_739_;
}
v_reusejp_739_:
{
lean_object* v___x_741_; 
v___x_741_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_741_, 0, v___x_740_);
return v___x_741_;
}
}
}
else
{
lean_object* v___x_744_; 
lean_dec_ref_known(v_x_733_, 1);
v___x_744_ = ((lean_object*)(l_Std_Async_TCP_Socket_Client_recvSelector___lam__0___closed__1));
return v___x_744_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_TCP_Socket_Client_recvSelector___lam__0___boxed(lean_object* v_x_745_, lean_object* v___y_746_){
_start:
{
lean_object* v_res_747_; 
v_res_747_ = l_Std_Async_TCP_Socket_Client_recvSelector___lam__0(v_x_745_);
return v_res_747_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_TCP_Socket_Client_recvSelector___lam__1(lean_object* v_x_748_){
_start:
{
if (lean_obj_tag(v_x_748_) == 0)
{
lean_object* v_a_750_; lean_object* v___x_752_; uint8_t v_isShared_753_; uint8_t v_isSharedCheck_758_; 
v_a_750_ = lean_ctor_get(v_x_748_, 0);
v_isSharedCheck_758_ = !lean_is_exclusive(v_x_748_);
if (v_isSharedCheck_758_ == 0)
{
v___x_752_ = v_x_748_;
v_isShared_753_ = v_isSharedCheck_758_;
goto v_resetjp_751_;
}
else
{
lean_inc(v_a_750_);
lean_dec(v_x_748_);
v___x_752_ = lean_box(0);
v_isShared_753_ = v_isSharedCheck_758_;
goto v_resetjp_751_;
}
v_resetjp_751_:
{
lean_object* v___x_755_; 
if (v_isShared_753_ == 0)
{
v___x_755_ = v___x_752_;
goto v_reusejp_754_;
}
else
{
lean_object* v_reuseFailAlloc_757_; 
v_reuseFailAlloc_757_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_757_, 0, v_a_750_);
v___x_755_ = v_reuseFailAlloc_757_;
goto v_reusejp_754_;
}
v_reusejp_754_:
{
lean_object* v___x_756_; 
v___x_756_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_756_, 0, v___x_755_);
return v___x_756_;
}
}
}
else
{
lean_object* v_a_759_; lean_object* v___x_761_; uint8_t v_isShared_762_; uint8_t v_isSharedCheck_768_; 
v_a_759_ = lean_ctor_get(v_x_748_, 0);
v_isSharedCheck_768_ = !lean_is_exclusive(v_x_748_);
if (v_isSharedCheck_768_ == 0)
{
v___x_761_ = v_x_748_;
v_isShared_762_ = v_isSharedCheck_768_;
goto v_resetjp_760_;
}
else
{
lean_inc(v_a_759_);
lean_dec(v_x_748_);
v___x_761_ = lean_box(0);
v_isShared_762_ = v_isSharedCheck_768_;
goto v_resetjp_760_;
}
v_resetjp_760_:
{
lean_object* v___x_763_; lean_object* v___x_765_; 
v___x_763_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_763_, 0, v_a_759_);
if (v_isShared_762_ == 0)
{
lean_ctor_set(v___x_761_, 0, v___x_763_);
v___x_765_ = v___x_761_;
goto v_reusejp_764_;
}
else
{
lean_object* v_reuseFailAlloc_767_; 
v_reuseFailAlloc_767_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_767_, 0, v___x_763_);
v___x_765_ = v_reuseFailAlloc_767_;
goto v_reusejp_764_;
}
v_reusejp_764_:
{
lean_object* v___x_766_; 
v___x_766_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_766_, 0, v___x_765_);
return v___x_766_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_TCP_Socket_Client_recvSelector___lam__1___boxed(lean_object* v_x_769_, lean_object* v___y_770_){
_start:
{
lean_object* v_res_771_; 
v_res_771_ = l_Std_Async_TCP_Socket_Client_recvSelector___lam__1(v_x_769_);
return v_res_771_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_TCP_Socket_Client_recvSelector___lam__3(lean_object* v_s_772_){
_start:
{
lean_object* v_val_775_; lean_object* v___x_777_; 
v___x_777_ = lean_uv_tcp_cancel_recv(v_s_772_);
if (lean_obj_tag(v___x_777_) == 0)
{
lean_object* v_a_778_; lean_object* v___x_780_; uint8_t v_isShared_781_; uint8_t v_isSharedCheck_785_; 
v_a_778_ = lean_ctor_get(v___x_777_, 0);
v_isSharedCheck_785_ = !lean_is_exclusive(v___x_777_);
if (v_isSharedCheck_785_ == 0)
{
v___x_780_ = v___x_777_;
v_isShared_781_ = v_isSharedCheck_785_;
goto v_resetjp_779_;
}
else
{
lean_inc(v_a_778_);
lean_dec(v___x_777_);
v___x_780_ = lean_box(0);
v_isShared_781_ = v_isSharedCheck_785_;
goto v_resetjp_779_;
}
v_resetjp_779_:
{
lean_object* v___x_783_; 
if (v_isShared_781_ == 0)
{
lean_ctor_set_tag(v___x_780_, 1);
v___x_783_ = v___x_780_;
goto v_reusejp_782_;
}
else
{
lean_object* v_reuseFailAlloc_784_; 
v_reuseFailAlloc_784_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_784_, 0, v_a_778_);
v___x_783_ = v_reuseFailAlloc_784_;
goto v_reusejp_782_;
}
v_reusejp_782_:
{
v_val_775_ = v___x_783_;
goto v___jp_774_;
}
}
}
else
{
lean_object* v_a_786_; lean_object* v___x_788_; uint8_t v_isShared_789_; uint8_t v_isSharedCheck_793_; 
v_a_786_ = lean_ctor_get(v___x_777_, 0);
v_isSharedCheck_793_ = !lean_is_exclusive(v___x_777_);
if (v_isSharedCheck_793_ == 0)
{
v___x_788_ = v___x_777_;
v_isShared_789_ = v_isSharedCheck_793_;
goto v_resetjp_787_;
}
else
{
lean_inc(v_a_786_);
lean_dec(v___x_777_);
v___x_788_ = lean_box(0);
v_isShared_789_ = v_isSharedCheck_793_;
goto v_resetjp_787_;
}
v_resetjp_787_:
{
lean_object* v___x_791_; 
if (v_isShared_789_ == 0)
{
lean_ctor_set_tag(v___x_788_, 0);
v___x_791_ = v___x_788_;
goto v_reusejp_790_;
}
else
{
lean_object* v_reuseFailAlloc_792_; 
v_reuseFailAlloc_792_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_792_, 0, v_a_786_);
v___x_791_ = v_reuseFailAlloc_792_;
goto v_reusejp_790_;
}
v_reusejp_790_:
{
v_val_775_ = v___x_791_;
goto v___jp_774_;
}
}
}
v___jp_774_:
{
lean_object* v___x_776_; 
v___x_776_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_776_, 0, v_val_775_);
return v___x_776_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_TCP_Socket_Client_recvSelector___lam__3___boxed(lean_object* v_s_794_, lean_object* v___y_795_){
_start:
{
lean_object* v_res_796_; 
v_res_796_ = l_Std_Async_TCP_Socket_Client_recvSelector___lam__3(v_s_794_);
lean_dec(v_s_794_);
return v_res_796_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_TCP_Socket_Client_recvSelector___lam__4(lean_object* v_s_797_, uint64_t v_size_798_, lean_object* v_waiter_799_, lean_object* v_a_800_){
_start:
{
lean_object* v_a_803_; 
if (lean_obj_tag(v_a_800_) == 0)
{
lean_object* v___x_805_; 
lean_dec(v_s_797_);
v___x_805_ = lean_box(0);
v_a_803_ = v___x_805_;
goto v___jp_802_;
}
else
{
lean_object* v_val_806_; lean_object* v___f_807_; lean_object* v___x_808_; 
v_val_806_ = lean_ctor_get(v_a_800_, 0);
lean_inc(v_val_806_);
lean_dec_ref_known(v_a_800_, 1);
v___f_807_ = ((lean_object*)(l_Std_Async_TCP_Socket_Server_acceptSelector___lam__2___closed__0));
v___x_808_ = l_Std_Async_Waiter_race___at___00Std_Async_TCP_Socket_Client_recvSelector_spec__0(v_val_806_, v_s_797_, v_size_798_, v_waiter_799_, v___f_807_);
if (lean_obj_tag(v___x_808_) == 0)
{
lean_object* v_a_809_; 
v_a_809_ = lean_ctor_get(v___x_808_, 0);
lean_inc(v_a_809_);
lean_dec_ref_known(v___x_808_, 1);
v_a_803_ = v_a_809_;
goto v___jp_802_;
}
else
{
lean_object* v_a_810_; lean_object* v___x_812_; uint8_t v_isShared_813_; uint8_t v_isSharedCheck_817_; 
v_a_810_ = lean_ctor_get(v___x_808_, 0);
v_isSharedCheck_817_ = !lean_is_exclusive(v___x_808_);
if (v_isSharedCheck_817_ == 0)
{
v___x_812_ = v___x_808_;
v_isShared_813_ = v_isSharedCheck_817_;
goto v_resetjp_811_;
}
else
{
lean_inc(v_a_810_);
lean_dec(v___x_808_);
v___x_812_ = lean_box(0);
v_isShared_813_ = v_isSharedCheck_817_;
goto v_resetjp_811_;
}
v_resetjp_811_:
{
lean_object* v___x_815_; 
if (v_isShared_813_ == 0)
{
lean_ctor_set_tag(v___x_812_, 0);
v___x_815_ = v___x_812_;
goto v_reusejp_814_;
}
else
{
lean_object* v_reuseFailAlloc_816_; 
v_reuseFailAlloc_816_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_816_, 0, v_a_810_);
v___x_815_ = v_reuseFailAlloc_816_;
goto v_reusejp_814_;
}
v_reusejp_814_:
{
return v___x_815_;
}
}
}
}
v___jp_802_:
{
lean_object* v___x_804_; 
v___x_804_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_804_, 0, v_a_803_);
return v___x_804_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_TCP_Socket_Client_recvSelector___lam__4___boxed(lean_object* v_s_818_, lean_object* v_size_819_, lean_object* v_waiter_820_, lean_object* v_a_821_, lean_object* v___y_822_){
_start:
{
uint64_t v_size_boxed_823_; lean_object* v_res_824_; 
v_size_boxed_823_ = lean_unbox_uint64(v_size_819_);
lean_dec_ref(v_size_819_);
v_res_824_ = l_Std_Async_TCP_Socket_Client_recvSelector___lam__4(v_s_818_, v_size_boxed_823_, v_waiter_820_, v_a_821_);
lean_dec_ref(v_waiter_820_);
return v_res_824_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_TCP_Socket_Client_recvSelector___lam__2(lean_object* v___f_829_, lean_object* v_x_830_){
_start:
{
if (lean_obj_tag(v_x_830_) == 0)
{
lean_object* v_a_832_; lean_object* v___x_834_; uint8_t v_isShared_835_; uint8_t v_isSharedCheck_840_; 
lean_dec_ref(v___f_829_);
v_a_832_ = lean_ctor_get(v_x_830_, 0);
v_isSharedCheck_840_ = !lean_is_exclusive(v_x_830_);
if (v_isSharedCheck_840_ == 0)
{
v___x_834_ = v_x_830_;
v_isShared_835_ = v_isSharedCheck_840_;
goto v_resetjp_833_;
}
else
{
lean_inc(v_a_832_);
lean_dec(v_x_830_);
v___x_834_ = lean_box(0);
v_isShared_835_ = v_isSharedCheck_840_;
goto v_resetjp_833_;
}
v_resetjp_833_:
{
lean_object* v___x_837_; 
if (v_isShared_835_ == 0)
{
v___x_837_ = v___x_834_;
goto v_reusejp_836_;
}
else
{
lean_object* v_reuseFailAlloc_839_; 
v_reuseFailAlloc_839_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_839_, 0, v_a_832_);
v___x_837_ = v_reuseFailAlloc_839_;
goto v_reusejp_836_;
}
v_reusejp_836_:
{
lean_object* v___x_838_; 
v___x_838_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_838_, 0, v___x_837_);
return v___x_838_;
}
}
}
else
{
lean_object* v_a_841_; lean_object* v___x_842_; lean_object* v___x_843_; uint8_t v___x_844_; lean_object* v___x_845_; lean_object* v___x_846_; 
v_a_841_ = lean_ctor_get(v_x_830_, 0);
lean_inc(v_a_841_);
lean_dec_ref_known(v_x_830_, 1);
v___x_842_ = lean_io_promise_result_opt(v_a_841_);
lean_dec(v_a_841_);
v___x_843_ = lean_unsigned_to_nat(0u);
v___x_844_ = 0;
v___x_845_ = lean_io_map_task(v___f_829_, v___x_842_, v___x_843_, v___x_844_);
lean_dec_ref(v___x_845_);
v___x_846_ = ((lean_object*)(l_Std_Async_TCP_Socket_Client_recvSelector___lam__2___closed__1));
return v___x_846_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_TCP_Socket_Client_recvSelector___lam__2___boxed(lean_object* v___f_847_, lean_object* v_x_848_, lean_object* v___y_849_){
_start:
{
lean_object* v_res_850_; 
v_res_850_ = l_Std_Async_TCP_Socket_Client_recvSelector___lam__2(v___f_847_, v_x_848_);
return v_res_850_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_TCP_Socket_Client_recvSelector___lam__5(lean_object* v_s_851_, uint64_t v_size_852_, lean_object* v_waiter_853_){
_start:
{
lean_object* v___x_855_; lean_object* v___f_856_; lean_object* v___f_857_; lean_object* v___x_858_; uint8_t v___x_859_; lean_object* v_val_861_; lean_object* v___x_864_; 
v___x_855_ = lean_box_uint64(v_size_852_);
lean_inc(v_s_851_);
v___f_856_ = lean_alloc_closure((void*)(l_Std_Async_TCP_Socket_Client_recvSelector___lam__4___boxed), 5, 3);
lean_closure_set(v___f_856_, 0, v_s_851_);
lean_closure_set(v___f_856_, 1, v___x_855_);
lean_closure_set(v___f_856_, 2, v_waiter_853_);
v___f_857_ = lean_alloc_closure((void*)(l_Std_Async_TCP_Socket_Client_recvSelector___lam__2___boxed), 3, 1);
lean_closure_set(v___f_857_, 0, v___f_856_);
v___x_858_ = lean_unsigned_to_nat(0u);
v___x_859_ = 0;
v___x_864_ = lean_uv_tcp_wait_readable(v_s_851_);
lean_dec(v_s_851_);
if (lean_obj_tag(v___x_864_) == 0)
{
lean_object* v_a_865_; lean_object* v___x_867_; uint8_t v_isShared_868_; uint8_t v_isSharedCheck_872_; 
v_a_865_ = lean_ctor_get(v___x_864_, 0);
v_isSharedCheck_872_ = !lean_is_exclusive(v___x_864_);
if (v_isSharedCheck_872_ == 0)
{
v___x_867_ = v___x_864_;
v_isShared_868_ = v_isSharedCheck_872_;
goto v_resetjp_866_;
}
else
{
lean_inc(v_a_865_);
lean_dec(v___x_864_);
v___x_867_ = lean_box(0);
v_isShared_868_ = v_isSharedCheck_872_;
goto v_resetjp_866_;
}
v_resetjp_866_:
{
lean_object* v___x_870_; 
if (v_isShared_868_ == 0)
{
lean_ctor_set_tag(v___x_867_, 1);
v___x_870_ = v___x_867_;
goto v_reusejp_869_;
}
else
{
lean_object* v_reuseFailAlloc_871_; 
v_reuseFailAlloc_871_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_871_, 0, v_a_865_);
v___x_870_ = v_reuseFailAlloc_871_;
goto v_reusejp_869_;
}
v_reusejp_869_:
{
v_val_861_ = v___x_870_;
goto v___jp_860_;
}
}
}
else
{
lean_object* v_a_873_; lean_object* v___x_875_; uint8_t v_isShared_876_; uint8_t v_isSharedCheck_880_; 
v_a_873_ = lean_ctor_get(v___x_864_, 0);
v_isSharedCheck_880_ = !lean_is_exclusive(v___x_864_);
if (v_isSharedCheck_880_ == 0)
{
v___x_875_ = v___x_864_;
v_isShared_876_ = v_isSharedCheck_880_;
goto v_resetjp_874_;
}
else
{
lean_inc(v_a_873_);
lean_dec(v___x_864_);
v___x_875_ = lean_box(0);
v_isShared_876_ = v_isSharedCheck_880_;
goto v_resetjp_874_;
}
v_resetjp_874_:
{
lean_object* v___x_878_; 
if (v_isShared_876_ == 0)
{
lean_ctor_set_tag(v___x_875_, 0);
v___x_878_ = v___x_875_;
goto v_reusejp_877_;
}
else
{
lean_object* v_reuseFailAlloc_879_; 
v_reuseFailAlloc_879_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_879_, 0, v_a_873_);
v___x_878_ = v_reuseFailAlloc_879_;
goto v_reusejp_877_;
}
v_reusejp_877_:
{
v_val_861_ = v___x_878_;
goto v___jp_860_;
}
}
}
v___jp_860_:
{
lean_object* v___x_862_; lean_object* v___x_863_; 
v___x_862_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_862_, 0, v_val_861_);
v___x_863_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_858_, v___x_859_, v___x_862_, v___f_857_);
return v___x_863_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_TCP_Socket_Client_recvSelector___lam__5___boxed(lean_object* v_s_881_, lean_object* v_size_882_, lean_object* v_waiter_883_, lean_object* v___y_884_){
_start:
{
uint64_t v_size_boxed_885_; lean_object* v_res_886_; 
v_size_boxed_885_ = lean_unbox_uint64(v_size_882_);
lean_dec_ref(v_size_882_);
v_res_886_ = l_Std_Async_TCP_Socket_Client_recvSelector___lam__5(v_s_881_, v_size_boxed_885_, v_waiter_883_);
return v_res_886_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_TCP_Socket_Client_recvSelector___lam__7(lean_object* v_s_887_, uint64_t v_size_888_, lean_object* v___x_889_, uint8_t v___x_890_){
_start:
{
lean_object* v___f_892_; lean_object* v___x_893_; 
v___f_892_ = ((lean_object*)(l_Std_Async_TCP_Socket_Client_recv_x3f___closed__0));
v___x_893_ = lean_uv_tcp_recv(v_s_887_, v_size_888_);
if (lean_obj_tag(v___x_893_) == 0)
{
lean_object* v_a_894_; lean_object* v___x_896_; uint8_t v_isShared_897_; uint8_t v_isSharedCheck_903_; 
v_a_894_ = lean_ctor_get(v___x_893_, 0);
v_isSharedCheck_903_ = !lean_is_exclusive(v___x_893_);
if (v_isSharedCheck_903_ == 0)
{
v___x_896_ = v___x_893_;
v_isShared_897_ = v_isSharedCheck_903_;
goto v_resetjp_895_;
}
else
{
lean_inc(v_a_894_);
lean_dec(v___x_893_);
v___x_896_ = lean_box(0);
v_isShared_897_ = v_isSharedCheck_903_;
goto v_resetjp_895_;
}
v_resetjp_895_:
{
lean_object* v___x_898_; lean_object* v___x_899_; lean_object* v___x_901_; 
v___x_898_ = lean_io_promise_result_opt(v_a_894_);
lean_dec(v_a_894_);
v___x_899_ = lean_task_map(v___f_892_, v___x_898_, v___x_889_, v___x_890_);
if (v_isShared_897_ == 0)
{
lean_ctor_set_tag(v___x_896_, 1);
lean_ctor_set(v___x_896_, 0, v___x_899_);
v___x_901_ = v___x_896_;
goto v_reusejp_900_;
}
else
{
lean_object* v_reuseFailAlloc_902_; 
v_reuseFailAlloc_902_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_902_, 0, v___x_899_);
v___x_901_ = v_reuseFailAlloc_902_;
goto v_reusejp_900_;
}
v_reusejp_900_:
{
return v___x_901_;
}
}
}
else
{
lean_object* v_a_904_; lean_object* v___x_906_; uint8_t v_isShared_907_; uint8_t v_isSharedCheck_912_; 
lean_dec(v___x_889_);
v_a_904_ = lean_ctor_get(v___x_893_, 0);
v_isSharedCheck_912_ = !lean_is_exclusive(v___x_893_);
if (v_isSharedCheck_912_ == 0)
{
v___x_906_ = v___x_893_;
v_isShared_907_ = v_isSharedCheck_912_;
goto v_resetjp_905_;
}
else
{
lean_inc(v_a_904_);
lean_dec(v___x_893_);
v___x_906_ = lean_box(0);
v_isShared_907_ = v_isSharedCheck_912_;
goto v_resetjp_905_;
}
v_resetjp_905_:
{
lean_object* v___x_909_; 
if (v_isShared_907_ == 0)
{
lean_ctor_set_tag(v___x_906_, 0);
v___x_909_ = v___x_906_;
goto v_reusejp_908_;
}
else
{
lean_object* v_reuseFailAlloc_911_; 
v_reuseFailAlloc_911_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_911_, 0, v_a_904_);
v___x_909_ = v_reuseFailAlloc_911_;
goto v_reusejp_908_;
}
v_reusejp_908_:
{
lean_object* v___x_910_; 
v___x_910_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_910_, 0, v___x_909_);
return v___x_910_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_TCP_Socket_Client_recvSelector___lam__7___boxed(lean_object* v_s_913_, lean_object* v_size_914_, lean_object* v___x_915_, lean_object* v___x_916_, lean_object* v___y_917_){
_start:
{
uint64_t v_size_boxed_918_; uint8_t v___x_3292__boxed_919_; lean_object* v_res_920_; 
v_size_boxed_918_ = lean_unbox_uint64(v_size_914_);
lean_dec_ref(v_size_914_);
v___x_3292__boxed_919_ = lean_unbox(v___x_916_);
v_res_920_ = l_Std_Async_TCP_Socket_Client_recvSelector___lam__7(v_s_913_, v_size_boxed_918_, v___x_915_, v___x_3292__boxed_919_);
lean_dec(v_s_913_);
return v_res_920_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_TCP_Socket_Client_recvSelector___lam__6(lean_object* v___f_921_, lean_object* v_s_922_, uint64_t v_size_923_, lean_object* v___f_924_, lean_object* v___f_925_, lean_object* v_x_926_){
_start:
{
if (lean_obj_tag(v_x_926_) == 0)
{
lean_object* v_a_928_; lean_object* v___x_930_; uint8_t v_isShared_931_; uint8_t v_isSharedCheck_936_; 
lean_dec_ref(v___f_925_);
lean_dec_ref(v___f_924_);
lean_dec(v_s_922_);
lean_dec_ref(v___f_921_);
v_a_928_ = lean_ctor_get(v_x_926_, 0);
v_isSharedCheck_936_ = !lean_is_exclusive(v_x_926_);
if (v_isSharedCheck_936_ == 0)
{
v___x_930_ = v_x_926_;
v_isShared_931_ = v_isSharedCheck_936_;
goto v_resetjp_929_;
}
else
{
lean_inc(v_a_928_);
lean_dec(v_x_926_);
v___x_930_ = lean_box(0);
v_isShared_931_ = v_isSharedCheck_936_;
goto v_resetjp_929_;
}
v_resetjp_929_:
{
lean_object* v___x_933_; 
if (v_isShared_931_ == 0)
{
v___x_933_ = v___x_930_;
goto v_reusejp_932_;
}
else
{
lean_object* v_reuseFailAlloc_935_; 
v_reuseFailAlloc_935_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_935_, 0, v_a_928_);
v___x_933_ = v_reuseFailAlloc_935_;
goto v_reusejp_932_;
}
v_reusejp_932_:
{
lean_object* v___x_934_; 
v___x_934_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_934_, 0, v___x_933_);
return v___x_934_;
}
}
}
else
{
lean_object* v_a_937_; lean_object* v___x_939_; uint8_t v_isShared_940_; uint8_t v_isSharedCheck_968_; 
v_a_937_ = lean_ctor_get(v_x_926_, 0);
v_isSharedCheck_968_ = !lean_is_exclusive(v_x_926_);
if (v_isSharedCheck_968_ == 0)
{
v___x_939_ = v_x_926_;
v_isShared_940_ = v_isSharedCheck_968_;
goto v_resetjp_938_;
}
else
{
lean_inc(v_a_937_);
lean_dec(v_x_926_);
v___x_939_ = lean_box(0);
v_isShared_940_ = v_isSharedCheck_968_;
goto v_resetjp_938_;
}
v_resetjp_938_:
{
uint8_t v___x_941_; 
v___x_941_ = lean_unbox(v_a_937_);
if (v___x_941_ == 0)
{
lean_object* v___x_942_; lean_object* v_val_944_; lean_object* v___x_948_; 
lean_dec_ref(v___f_925_);
lean_dec_ref(v___f_924_);
v___x_942_ = lean_unsigned_to_nat(0u);
v___x_948_ = lean_uv_tcp_cancel_recv(v_s_922_);
lean_dec(v_s_922_);
if (lean_obj_tag(v___x_948_) == 0)
{
lean_object* v_a_949_; lean_object* v___x_951_; 
v_a_949_ = lean_ctor_get(v___x_948_, 0);
lean_inc(v_a_949_);
lean_dec_ref_known(v___x_948_, 1);
if (v_isShared_940_ == 0)
{
lean_ctor_set(v___x_939_, 0, v_a_949_);
v___x_951_ = v___x_939_;
goto v_reusejp_950_;
}
else
{
lean_object* v_reuseFailAlloc_952_; 
v_reuseFailAlloc_952_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_952_, 0, v_a_949_);
v___x_951_ = v_reuseFailAlloc_952_;
goto v_reusejp_950_;
}
v_reusejp_950_:
{
v_val_944_ = v___x_951_;
goto v___jp_943_;
}
}
else
{
lean_object* v_a_953_; lean_object* v___x_955_; 
v_a_953_ = lean_ctor_get(v___x_948_, 0);
lean_inc(v_a_953_);
lean_dec_ref_known(v___x_948_, 1);
if (v_isShared_940_ == 0)
{
lean_ctor_set_tag(v___x_939_, 0);
lean_ctor_set(v___x_939_, 0, v_a_953_);
v___x_955_ = v___x_939_;
goto v_reusejp_954_;
}
else
{
lean_object* v_reuseFailAlloc_956_; 
v_reuseFailAlloc_956_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_956_, 0, v_a_953_);
v___x_955_ = v_reuseFailAlloc_956_;
goto v_reusejp_954_;
}
v_reusejp_954_:
{
v_val_944_ = v___x_955_;
goto v___jp_943_;
}
}
v___jp_943_:
{
lean_object* v___x_945_; uint8_t v___x_946_; lean_object* v___x_947_; 
v___x_945_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_945_, 0, v_val_944_);
v___x_946_ = lean_unbox(v_a_937_);
lean_dec(v_a_937_);
v___x_947_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_942_, v___x_946_, v___x_945_, v___f_921_);
return v___x_947_;
}
}
else
{
lean_object* v___x_957_; uint8_t v___x_958_; lean_object* v___x_959_; lean_object* v___x_960_; lean_object* v___f_961_; lean_object* v___x_962_; uint8_t v___x_963_; lean_object* v___x_964_; lean_object* v___x_965_; lean_object* v___x_966_; lean_object* v___x_967_; 
lean_del_object(v___x_939_);
lean_dec_ref(v___f_921_);
v___x_957_ = lean_unsigned_to_nat(0u);
v___x_958_ = 0;
v___x_959_ = lean_box_uint64(v_size_923_);
v___x_960_ = lean_box(v___x_958_);
v___f_961_ = lean_alloc_closure((void*)(l_Std_Async_TCP_Socket_Client_recvSelector___lam__7___boxed), 5, 4);
lean_closure_set(v___f_961_, 0, v_s_922_);
lean_closure_set(v___f_961_, 1, v___x_959_);
lean_closure_set(v___f_961_, 2, v___x_957_);
lean_closure_set(v___f_961_, 3, v___x_960_);
v___x_962_ = lean_io_as_task(v___f_961_, v___x_957_);
v___x_963_ = lean_unbox(v_a_937_);
lean_dec(v_a_937_);
v___x_964_ = lean_task_bind(v___x_962_, v___f_924_, v___x_957_, v___x_963_);
v___x_965_ = lean_task_get_own(v___x_964_);
v___x_966_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_966_, 0, v___x_965_);
v___x_967_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_957_, v___x_958_, v___x_966_, v___f_925_);
return v___x_967_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_TCP_Socket_Client_recvSelector___lam__6___boxed(lean_object* v___f_969_, lean_object* v_s_970_, lean_object* v_size_971_, lean_object* v___f_972_, lean_object* v___f_973_, lean_object* v_x_974_, lean_object* v___y_975_){
_start:
{
uint64_t v_size_boxed_976_; lean_object* v_res_977_; 
v_size_boxed_976_ = lean_unbox_uint64(v_size_971_);
lean_dec_ref(v_size_971_);
v_res_977_ = l_Std_Async_TCP_Socket_Client_recvSelector___lam__6(v___f_969_, v_s_970_, v_size_boxed_976_, v___f_972_, v___f_973_, v_x_974_);
return v_res_977_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_TCP_Socket_Client_recvSelector___lam__8(lean_object* v___f_978_, lean_object* v_x_979_){
_start:
{
if (lean_obj_tag(v_x_979_) == 0)
{
lean_object* v_a_981_; lean_object* v___x_983_; uint8_t v_isShared_984_; uint8_t v_isSharedCheck_989_; 
lean_dec_ref(v___f_978_);
v_a_981_ = lean_ctor_get(v_x_979_, 0);
v_isSharedCheck_989_ = !lean_is_exclusive(v_x_979_);
if (v_isSharedCheck_989_ == 0)
{
v___x_983_ = v_x_979_;
v_isShared_984_ = v_isSharedCheck_989_;
goto v_resetjp_982_;
}
else
{
lean_inc(v_a_981_);
lean_dec(v_x_979_);
v___x_983_ = lean_box(0);
v_isShared_984_ = v_isSharedCheck_989_;
goto v_resetjp_982_;
}
v_resetjp_982_:
{
lean_object* v___x_986_; 
if (v_isShared_984_ == 0)
{
v___x_986_ = v___x_983_;
goto v_reusejp_985_;
}
else
{
lean_object* v_reuseFailAlloc_988_; 
v_reuseFailAlloc_988_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_988_, 0, v_a_981_);
v___x_986_ = v_reuseFailAlloc_988_;
goto v_reusejp_985_;
}
v_reusejp_985_:
{
lean_object* v___x_987_; 
v___x_987_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_987_, 0, v___x_986_);
return v___x_987_;
}
}
}
else
{
lean_object* v_a_990_; lean_object* v___x_992_; uint8_t v_isShared_993_; uint8_t v_isSharedCheck_1003_; 
v_a_990_ = lean_ctor_get(v_x_979_, 0);
v_isSharedCheck_1003_ = !lean_is_exclusive(v_x_979_);
if (v_isSharedCheck_1003_ == 0)
{
v___x_992_ = v_x_979_;
v_isShared_993_ = v_isSharedCheck_1003_;
goto v_resetjp_991_;
}
else
{
lean_inc(v_a_990_);
lean_dec(v_x_979_);
v___x_992_ = lean_box(0);
v_isShared_993_ = v_isSharedCheck_1003_;
goto v_resetjp_991_;
}
v_resetjp_991_:
{
lean_object* v___x_994_; uint8_t v___x_995_; uint8_t v___x_996_; lean_object* v___x_997_; lean_object* v___x_999_; 
v___x_994_ = lean_unsigned_to_nat(0u);
v___x_995_ = 0;
v___x_996_ = l_IO_Promise_isResolved___redArg(v_a_990_);
lean_dec(v_a_990_);
v___x_997_ = lean_box(v___x_996_);
if (v_isShared_993_ == 0)
{
lean_ctor_set(v___x_992_, 0, v___x_997_);
v___x_999_ = v___x_992_;
goto v_reusejp_998_;
}
else
{
lean_object* v_reuseFailAlloc_1002_; 
v_reuseFailAlloc_1002_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1002_, 0, v___x_997_);
v___x_999_ = v_reuseFailAlloc_1002_;
goto v_reusejp_998_;
}
v_reusejp_998_:
{
lean_object* v___x_1000_; lean_object* v___x_1001_; 
v___x_1000_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1000_, 0, v___x_999_);
v___x_1001_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_994_, v___x_995_, v___x_1000_, v___f_978_);
return v___x_1001_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_TCP_Socket_Client_recvSelector___lam__8___boxed(lean_object* v___f_1004_, lean_object* v_x_1005_, lean_object* v___y_1006_){
_start:
{
lean_object* v_res_1007_; 
v_res_1007_ = l_Std_Async_TCP_Socket_Client_recvSelector___lam__8(v___f_1004_, v_x_1005_);
return v_res_1007_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_TCP_Socket_Client_recvSelector___lam__9(lean_object* v___f_1008_, lean_object* v_s_1009_){
_start:
{
lean_object* v___x_1011_; uint8_t v___x_1012_; lean_object* v_val_1014_; lean_object* v___x_1017_; 
v___x_1011_ = lean_unsigned_to_nat(0u);
v___x_1012_ = 0;
v___x_1017_ = lean_uv_tcp_wait_readable(v_s_1009_);
if (lean_obj_tag(v___x_1017_) == 0)
{
lean_object* v_a_1018_; lean_object* v___x_1020_; uint8_t v_isShared_1021_; uint8_t v_isSharedCheck_1025_; 
v_a_1018_ = lean_ctor_get(v___x_1017_, 0);
v_isSharedCheck_1025_ = !lean_is_exclusive(v___x_1017_);
if (v_isSharedCheck_1025_ == 0)
{
v___x_1020_ = v___x_1017_;
v_isShared_1021_ = v_isSharedCheck_1025_;
goto v_resetjp_1019_;
}
else
{
lean_inc(v_a_1018_);
lean_dec(v___x_1017_);
v___x_1020_ = lean_box(0);
v_isShared_1021_ = v_isSharedCheck_1025_;
goto v_resetjp_1019_;
}
v_resetjp_1019_:
{
lean_object* v___x_1023_; 
if (v_isShared_1021_ == 0)
{
lean_ctor_set_tag(v___x_1020_, 1);
v___x_1023_ = v___x_1020_;
goto v_reusejp_1022_;
}
else
{
lean_object* v_reuseFailAlloc_1024_; 
v_reuseFailAlloc_1024_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1024_, 0, v_a_1018_);
v___x_1023_ = v_reuseFailAlloc_1024_;
goto v_reusejp_1022_;
}
v_reusejp_1022_:
{
v_val_1014_ = v___x_1023_;
goto v___jp_1013_;
}
}
}
else
{
lean_object* v_a_1026_; lean_object* v___x_1028_; uint8_t v_isShared_1029_; uint8_t v_isSharedCheck_1033_; 
v_a_1026_ = lean_ctor_get(v___x_1017_, 0);
v_isSharedCheck_1033_ = !lean_is_exclusive(v___x_1017_);
if (v_isSharedCheck_1033_ == 0)
{
v___x_1028_ = v___x_1017_;
v_isShared_1029_ = v_isSharedCheck_1033_;
goto v_resetjp_1027_;
}
else
{
lean_inc(v_a_1026_);
lean_dec(v___x_1017_);
v___x_1028_ = lean_box(0);
v_isShared_1029_ = v_isSharedCheck_1033_;
goto v_resetjp_1027_;
}
v_resetjp_1027_:
{
lean_object* v___x_1031_; 
if (v_isShared_1029_ == 0)
{
lean_ctor_set_tag(v___x_1028_, 0);
v___x_1031_ = v___x_1028_;
goto v_reusejp_1030_;
}
else
{
lean_object* v_reuseFailAlloc_1032_; 
v_reuseFailAlloc_1032_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1032_, 0, v_a_1026_);
v___x_1031_ = v_reuseFailAlloc_1032_;
goto v_reusejp_1030_;
}
v_reusejp_1030_:
{
v_val_1014_ = v___x_1031_;
goto v___jp_1013_;
}
}
}
v___jp_1013_:
{
lean_object* v___x_1015_; lean_object* v___x_1016_; 
v___x_1015_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1015_, 0, v_val_1014_);
v___x_1016_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_1011_, v___x_1012_, v___x_1015_, v___f_1008_);
return v___x_1016_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_TCP_Socket_Client_recvSelector___lam__9___boxed(lean_object* v___f_1034_, lean_object* v_s_1035_, lean_object* v___y_1036_){
_start:
{
lean_object* v_res_1037_; 
v_res_1037_ = l_Std_Async_TCP_Socket_Client_recvSelector___lam__9(v___f_1034_, v_s_1035_);
lean_dec(v_s_1035_);
return v_res_1037_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_TCP_Socket_Client_recvSelector(lean_object* v_s_1040_, uint64_t v_size_1041_){
_start:
{
lean_object* v___f_1042_; lean_object* v___f_1043_; lean_object* v___f_1044_; lean_object* v___f_1045_; lean_object* v___x_1046_; lean_object* v___f_1047_; lean_object* v___x_1048_; lean_object* v___f_1049_; lean_object* v___f_1050_; lean_object* v___f_1051_; lean_object* v___x_1052_; 
v___f_1042_ = ((lean_object*)(l_Std_Async_TCP_Socket_Client_recvSelector___closed__0));
v___f_1043_ = ((lean_object*)(l_Std_Async_TCP_Socket_Client_recvSelector___closed__1));
v___f_1044_ = ((lean_object*)(l_Std_Async_Waiter_race___at___00Std_Async_TCP_Socket_Client_recvSelector_spec__0___closed__0));
lean_inc_n(v_s_1040_, 3);
v___f_1045_ = lean_alloc_closure((void*)(l_Std_Async_TCP_Socket_Client_recvSelector___lam__3___boxed), 2, 1);
lean_closure_set(v___f_1045_, 0, v_s_1040_);
v___x_1046_ = lean_box_uint64(v_size_1041_);
v___f_1047_ = lean_alloc_closure((void*)(l_Std_Async_TCP_Socket_Client_recvSelector___lam__5___boxed), 4, 2);
lean_closure_set(v___f_1047_, 0, v_s_1040_);
lean_closure_set(v___f_1047_, 1, v___x_1046_);
v___x_1048_ = lean_box_uint64(v_size_1041_);
v___f_1049_ = lean_alloc_closure((void*)(l_Std_Async_TCP_Socket_Client_recvSelector___lam__6___boxed), 7, 5);
lean_closure_set(v___f_1049_, 0, v___f_1042_);
lean_closure_set(v___f_1049_, 1, v_s_1040_);
lean_closure_set(v___f_1049_, 2, v___x_1048_);
lean_closure_set(v___f_1049_, 3, v___f_1044_);
lean_closure_set(v___f_1049_, 4, v___f_1043_);
v___f_1050_ = lean_alloc_closure((void*)(l_Std_Async_TCP_Socket_Client_recvSelector___lam__8___boxed), 3, 1);
lean_closure_set(v___f_1050_, 0, v___f_1049_);
v___f_1051_ = lean_alloc_closure((void*)(l_Std_Async_TCP_Socket_Client_recvSelector___lam__9___boxed), 3, 2);
lean_closure_set(v___f_1051_, 0, v___f_1050_);
lean_closure_set(v___f_1051_, 1, v_s_1040_);
v___x_1052_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1052_, 0, v___f_1051_);
lean_ctor_set(v___x_1052_, 1, v___f_1047_);
lean_ctor_set(v___x_1052_, 2, v___f_1045_);
return v___x_1052_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_TCP_Socket_Client_recvSelector___boxed(lean_object* v_s_1053_, lean_object* v_size_1054_){
_start:
{
uint64_t v_size_boxed_1055_; lean_object* v_res_1056_; 
v_size_boxed_1055_ = lean_unbox_uint64(v_size_1054_);
lean_dec_ref(v_size_1054_);
v_res_1056_ = l_Std_Async_TCP_Socket_Client_recvSelector(v_s_1053_, v_size_boxed_1055_);
return v_res_1056_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_TCP_Socket_Client_shutdown(lean_object* v_s_1057_){
_start:
{
lean_object* v___f_1059_; lean_object* v___x_1060_; 
v___f_1059_ = ((lean_object*)(l_Std_Async_TCP_Socket_Client_connect___closed__0));
v___x_1060_ = lean_uv_tcp_shutdown(v_s_1057_);
if (lean_obj_tag(v___x_1060_) == 0)
{
lean_object* v_a_1061_; lean_object* v___x_1063_; uint8_t v_isShared_1064_; uint8_t v_isSharedCheck_1072_; 
v_a_1061_ = lean_ctor_get(v___x_1060_, 0);
v_isSharedCheck_1072_ = !lean_is_exclusive(v___x_1060_);
if (v_isSharedCheck_1072_ == 0)
{
v___x_1063_ = v___x_1060_;
v_isShared_1064_ = v_isSharedCheck_1072_;
goto v_resetjp_1062_;
}
else
{
lean_inc(v_a_1061_);
lean_dec(v___x_1060_);
v___x_1063_ = lean_box(0);
v_isShared_1064_ = v_isSharedCheck_1072_;
goto v_resetjp_1062_;
}
v_resetjp_1062_:
{
lean_object* v___x_1065_; lean_object* v___x_1066_; uint8_t v___x_1067_; lean_object* v___x_1068_; lean_object* v___x_1070_; 
v___x_1065_ = lean_io_promise_result_opt(v_a_1061_);
lean_dec(v_a_1061_);
v___x_1066_ = lean_unsigned_to_nat(0u);
v___x_1067_ = 0;
v___x_1068_ = lean_task_map(v___f_1059_, v___x_1065_, v___x_1066_, v___x_1067_);
if (v_isShared_1064_ == 0)
{
lean_ctor_set_tag(v___x_1063_, 1);
lean_ctor_set(v___x_1063_, 0, v___x_1068_);
v___x_1070_ = v___x_1063_;
goto v_reusejp_1069_;
}
else
{
lean_object* v_reuseFailAlloc_1071_; 
v_reuseFailAlloc_1071_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1071_, 0, v___x_1068_);
v___x_1070_ = v_reuseFailAlloc_1071_;
goto v_reusejp_1069_;
}
v_reusejp_1069_:
{
return v___x_1070_;
}
}
}
else
{
lean_object* v_a_1073_; lean_object* v___x_1075_; uint8_t v_isShared_1076_; uint8_t v_isSharedCheck_1081_; 
v_a_1073_ = lean_ctor_get(v___x_1060_, 0);
v_isSharedCheck_1081_ = !lean_is_exclusive(v___x_1060_);
if (v_isSharedCheck_1081_ == 0)
{
v___x_1075_ = v___x_1060_;
v_isShared_1076_ = v_isSharedCheck_1081_;
goto v_resetjp_1074_;
}
else
{
lean_inc(v_a_1073_);
lean_dec(v___x_1060_);
v___x_1075_ = lean_box(0);
v_isShared_1076_ = v_isSharedCheck_1081_;
goto v_resetjp_1074_;
}
v_resetjp_1074_:
{
lean_object* v___x_1078_; 
if (v_isShared_1076_ == 0)
{
lean_ctor_set_tag(v___x_1075_, 0);
v___x_1078_ = v___x_1075_;
goto v_reusejp_1077_;
}
else
{
lean_object* v_reuseFailAlloc_1080_; 
v_reuseFailAlloc_1080_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1080_, 0, v_a_1073_);
v___x_1078_ = v_reuseFailAlloc_1080_;
goto v_reusejp_1077_;
}
v_reusejp_1077_:
{
lean_object* v___x_1079_; 
v___x_1079_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1079_, 0, v___x_1078_);
return v___x_1079_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_TCP_Socket_Client_shutdown___boxed(lean_object* v_s_1082_, lean_object* v___y_1083_){
_start:
{
lean_object* v_res_1084_; 
v_res_1084_ = l_Std_Async_TCP_Socket_Client_shutdown(v_s_1082_);
lean_dec(v_s_1082_);
return v_res_1084_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_TCP_Socket_Client_getPeerName(lean_object* v_s_1085_){
_start:
{
lean_object* v___x_1087_; 
v___x_1087_ = lean_uv_tcp_getpeername(v_s_1085_);
return v___x_1087_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_TCP_Socket_Client_getPeerName___boxed(lean_object* v_s_1088_, lean_object* v___y_1089_){
_start:
{
lean_object* v_res_1090_; 
v_res_1090_ = l_Std_Async_TCP_Socket_Client_getPeerName(v_s_1088_);
lean_dec(v_s_1088_);
return v_res_1090_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_TCP_Socket_Client_getSockName(lean_object* v_s_1091_){
_start:
{
lean_object* v___x_1093_; 
v___x_1093_ = lean_uv_tcp_getsockname(v_s_1091_);
return v___x_1093_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_TCP_Socket_Client_getSockName___boxed(lean_object* v_s_1094_, lean_object* v___y_1095_){
_start:
{
lean_object* v_res_1096_; 
v_res_1096_ = l_Std_Async_TCP_Socket_Client_getSockName(v_s_1094_);
lean_dec(v_s_1094_);
return v_res_1096_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_TCP_Socket_Client_noDelay(lean_object* v_s_1097_){
_start:
{
lean_object* v___x_1099_; 
v___x_1099_ = lean_uv_tcp_nodelay(v_s_1097_);
return v___x_1099_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_TCP_Socket_Client_noDelay___boxed(lean_object* v_s_1100_, lean_object* v___y_1101_){
_start:
{
lean_object* v_res_1102_; 
v_res_1102_ = l_Std_Async_TCP_Socket_Client_noDelay(v_s_1100_);
lean_dec(v_s_1100_);
return v_res_1102_;
}
}
static lean_object* _init_l_Std_Async_TCP_Socket_Client_keepAlive___auto__1(void){
_start:
{
lean_object* v___x_1103_; 
v___x_1103_ = lean_obj_once(&l_Std_Async_TCP_Socket_Server_keepAlive___auto__1___closed__26, &l_Std_Async_TCP_Socket_Server_keepAlive___auto__1___closed__26_once, _init_l_Std_Async_TCP_Socket_Server_keepAlive___auto__1___closed__26);
return v___x_1103_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_TCP_Socket_Client_keepAlive___redArg(lean_object* v_s_1104_, uint8_t v_enable_1105_, lean_object* v_delay_1106_){
_start:
{
uint8_t v___x_1108_; lean_object* v___x_1109_; uint32_t v___x_1110_; lean_object* v___x_1111_; 
v___x_1108_ = lean_bool_to_int8(v_enable_1105_);
v___x_1109_ = l_Int_toNat(v_delay_1106_);
v___x_1110_ = lean_uint32_of_nat(v___x_1109_);
lean_dec(v___x_1109_);
v___x_1111_ = lean_uv_tcp_keepalive(v_s_1104_, v___x_1108_, v___x_1110_);
return v___x_1111_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_TCP_Socket_Client_keepAlive___redArg___boxed(lean_object* v_s_1112_, lean_object* v_enable_1113_, lean_object* v_delay_1114_, lean_object* v___y_1115_){
_start:
{
uint8_t v_enable_boxed_1116_; lean_object* v_res_1117_; 
v_enable_boxed_1116_ = lean_unbox(v_enable_1113_);
v_res_1117_ = l_Std_Async_TCP_Socket_Client_keepAlive___redArg(v_s_1112_, v_enable_boxed_1116_, v_delay_1114_);
lean_dec(v_delay_1114_);
lean_dec(v_s_1112_);
return v_res_1117_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_TCP_Socket_Client_keepAlive(lean_object* v_s_1118_, uint8_t v_enable_1119_, lean_object* v_delay_1120_, lean_object* v_x_1121_){
_start:
{
uint8_t v___x_1123_; lean_object* v___x_1124_; uint32_t v___x_1125_; lean_object* v___x_1126_; 
v___x_1123_ = lean_bool_to_int8(v_enable_1119_);
v___x_1124_ = l_Int_toNat(v_delay_1120_);
v___x_1125_ = lean_uint32_of_nat(v___x_1124_);
lean_dec(v___x_1124_);
v___x_1126_ = lean_uv_tcp_keepalive(v_s_1118_, v___x_1123_, v___x_1125_);
return v___x_1126_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_TCP_Socket_Client_keepAlive___boxed(lean_object* v_s_1127_, lean_object* v_enable_1128_, lean_object* v_delay_1129_, lean_object* v_x_1130_, lean_object* v___y_1131_){
_start:
{
uint8_t v_enable_boxed_1132_; lean_object* v_res_1133_; 
v_enable_boxed_1132_ = lean_unbox(v_enable_1128_);
v_res_1133_ = l_Std_Async_TCP_Socket_Client_keepAlive(v_s_1127_, v_enable_boxed_1132_, v_delay_1129_, v_x_1130_);
lean_dec(v_delay_1129_);
lean_dec(v_s_1127_);
return v_res_1133_;
}
}
lean_object* runtime_initialize_Std_Time(uint8_t builtin);
lean_object* runtime_initialize_Std_Internal_UV_TCP(uint8_t builtin);
lean_object* runtime_initialize_Std_Async_Select(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Std_Async_TCP(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Std_Time(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Internal_UV_TCP(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Async_Select(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Std_Async_TCP(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
l_Std_Async_TCP_Socket_Server_keepAlive___auto__1 = _init_l_Std_Async_TCP_Socket_Server_keepAlive___auto__1();
lean_mark_persistent(l_Std_Async_TCP_Socket_Server_keepAlive___auto__1);
l_Std_Async_TCP_Socket_Client_keepAlive___auto__1 = _init_l_Std_Async_TCP_Socket_Client_keepAlive___auto__1();
lean_mark_persistent(l_Std_Async_TCP_Socket_Client_keepAlive___auto__1);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Std_Time(uint8_t builtin);
lean_object* initialize_Std_Internal_UV_TCP(uint8_t builtin);
lean_object* initialize_Std_Async_Select(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Std_Async_TCP(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Std_Time(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Internal_UV_TCP(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Async_Select(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Async_TCP(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Std_Async_TCP(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Std_Async_TCP(builtin);
}
#ifdef __cplusplus
}
#endif
