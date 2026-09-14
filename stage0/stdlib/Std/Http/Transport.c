// Lean compiler output
// Module: Std.Http.Transport
// Imports: public import Std.Http.Protocol.H1
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
lean_object* l_IO_Promise_result_x21___redArg(lean_object*);
lean_object* lean_io_promise_resolve(lean_object*, lean_object*);
lean_object* lean_byte_array_size(lean_object*);
lean_object* lean_byte_array_copy_slice(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Std_CloseableChannel_tryRecv___redArg(lean_object*);
lean_object* l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_BaseIO_chainTask___redArg(lean_object*, lean_object*, lean_object*, uint8_t);
uint64_t lean_uint64_of_nat(lean_object*);
uint8_t lean_uint64_dec_le(uint64_t, uint64_t);
lean_object* lean_mk_io_user_error(lean_object*);
lean_object* lean_task_map(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Std_CloseableChannel_send___redArg(lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
uint8_t l_Std_CloseableChannel_isClosed___redArg(lean_object*);
lean_object* l_Std_CloseableChannel_close___redArg(lean_object*);
lean_object* lean_io_promise_new();
lean_object* l_Std_CloseableChannel_recv___redArg(lean_object*);
lean_object* lean_uv_tcp_send(lean_object*, lean_object*);
lean_object* lean_io_promise_result_opt(lean_object*);
lean_object* l_Std_CloseableChannel_recvSelector___redArg(lean_object*);
lean_object* lean_uv_tcp_recv(lean_object*, uint64_t);
lean_object* l_Std_Async_TCP_Socket_Client_recvSelector___boxed(lean_object*, lean_object*);
lean_object* l_Std_CloseableChannel_new___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_instTransportClient___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_instTransportClient___lam__0___boxed(lean_object*, lean_object*);
static const lean_string_object l_Std_Http_instTransportClient___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 44, .m_capacity = 44, .m_length = 43, .m_data = "the promise linked to the Async was dropped"};
static const lean_object* l_Std_Http_instTransportClient___lam__1___closed__0 = (const lean_object*)&l_Std_Http_instTransportClient___lam__1___closed__0_value;
static const lean_closure_object l_Std_Http_instTransportClient___lam__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_instTransportClient___lam__0___boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Std_Http_instTransportClient___lam__1___closed__0_value)} };
static const lean_object* l_Std_Http_instTransportClient___lam__1___closed__1 = (const lean_object*)&l_Std_Http_instTransportClient___lam__1___closed__1_value;
LEAN_EXPORT lean_object* l_Std_Http_instTransportClient___lam__1(lean_object*, uint64_t);
LEAN_EXPORT lean_object* l_Std_Http_instTransportClient___lam__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_instTransportClient___lam__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_instTransportClient___lam__2___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_Http_instTransportClient___lam__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_instTransportClient___lam__2___boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Std_Http_instTransportClient___lam__1___closed__0_value)} };
static const lean_object* l_Std_Http_instTransportClient___lam__3___closed__0 = (const lean_object*)&l_Std_Http_instTransportClient___lam__3___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Http_instTransportClient___lam__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_instTransportClient___lam__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_instTransportClient___lam__4(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_instTransportClient___lam__4___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_Http_instTransportClient___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_instTransportClient___lam__1___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_instTransportClient___closed__0 = (const lean_object*)&l_Std_Http_instTransportClient___closed__0_value;
static const lean_closure_object l_Std_Http_instTransportClient___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_instTransportClient___lam__3___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_instTransportClient___closed__1 = (const lean_object*)&l_Std_Http_instTransportClient___closed__1_value;
static const lean_closure_object l_Std_Http_instTransportClient___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Async_TCP_Socket_Client_recvSelector___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_instTransportClient___closed__2 = (const lean_object*)&l_Std_Http_instTransportClient___closed__2_value;
static const lean_closure_object l_Std_Http_instTransportClient___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_instTransportClient___lam__4___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_instTransportClient___closed__3 = (const lean_object*)&l_Std_Http_instTransportClient___closed__3_value;
static const lean_ctor_object l_Std_Http_instTransportClient___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Std_Http_instTransportClient___closed__0_value),((lean_object*)&l_Std_Http_instTransportClient___closed__1_value),((lean_object*)&l_Std_Http_instTransportClient___closed__2_value),((lean_object*)&l_Std_Http_instTransportClient___closed__3_value)}};
static const lean_object* l_Std_Http_instTransportClient___closed__4 = (const lean_object*)&l_Std_Http_instTransportClient___closed__4_value;
LEAN_EXPORT const lean_object* l_Std_Http_instTransportClient = (const lean_object*)&l_Std_Http_instTransportClient___closed__4_value;
LEAN_EXPORT lean_object* l_Std_Http_Internal_Mock_new();
LEAN_EXPORT lean_object* l_Std_Http_Internal_Mock_new___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Internal_Mock_recvJoined___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Internal_Mock_recvJoined___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Internal_Mock_recvJoined___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Internal_Mock_recvJoined___lam__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Async_Basic_0__Std_Async_EAsync_forIn_loop___at___00Std_Http_Internal_Mock_recvJoined_spec__0___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Async_Basic_0__Std_Async_EAsync_forIn_loop___at___00Std_Http_Internal_Mock_recvJoined_spec__0___lam__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Async_Basic_0__Std_Async_EAsync_forIn_loop___at___00Std_Http_Internal_Mock_recvJoined_spec__0___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Async_Basic_0__Std_Async_EAsync_forIn_loop___at___00Std_Http_Internal_Mock_recvJoined_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Async_Basic_0__Std_Async_EAsync_forIn_loop___at___00Std_Http_Internal_Mock_recvJoined_spec__0___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Async_Basic_0__Std_Async_EAsync_forIn_loop___at___00Std_Http_Internal_Mock_recvJoined_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Internal_Mock_recvJoined___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Internal_Mock_recvJoined___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Internal_Mock_recvJoined___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Internal_Mock_recvJoined___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Internal_Mock_recvJoined___lam__4(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Internal_Mock_recvJoined___lam__5(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Internal_Mock_recvJoined___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Http_Internal_Mock_recvJoined___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_Internal_Mock_recvJoined___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_Internal_Mock_recvJoined___closed__0 = (const lean_object*)&l_Std_Http_Internal_Mock_recvJoined___closed__0_value;
static const lean_closure_object l_Std_Http_Internal_Mock_recvJoined___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_Internal_Mock_recvJoined___lam__4, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_Internal_Mock_recvJoined___closed__1 = (const lean_object*)&l_Std_Http_Internal_Mock_recvJoined___closed__1_value;
LEAN_EXPORT lean_object* l_Std_Http_Internal_Mock_recvJoined(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Internal_Mock_recvJoined___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Std_Http_Internal_Mock_send___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 44, .m_capacity = 44, .m_length = 43, .m_data = "trying to send on an already closed channel"};
static const lean_object* l_Std_Http_Internal_Mock_send___lam__0___closed__0 = (const lean_object*)&l_Std_Http_Internal_Mock_send___lam__0___closed__0_value;
static const lean_string_object l_Std_Http_Internal_Mock_send___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 42, .m_capacity = 42, .m_length = 41, .m_data = "trying to close an already closed channel"};
static const lean_object* l_Std_Http_Internal_Mock_send___lam__0___closed__1 = (const lean_object*)&l_Std_Http_Internal_Mock_send___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l_Std_Http_Internal_Mock_send___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Internal_Mock_send___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Internal_Mock_send___lam__1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Http_Internal_Mock_send___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_Internal_Mock_send___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_Internal_Mock_send___closed__0 = (const lean_object*)&l_Std_Http_Internal_Mock_send___closed__0_value;
static const lean_closure_object l_Std_Http_Internal_Mock_send___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_Internal_Mock_send___lam__1___boxed, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Std_Http_Internal_Mock_send___closed__0_value)} };
static const lean_object* l_Std_Http_Internal_Mock_send___closed__1 = (const lean_object*)&l_Std_Http_Internal_Mock_send___closed__1_value;
LEAN_EXPORT lean_object* l_Std_Http_Internal_Mock_send(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Internal_Mock_send___boxed(lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Std_Http_Internal_Mock_sendAll___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Std_Http_Internal_Mock_sendAll___lam__0___closed__0 = (const lean_object*)&l_Std_Http_Internal_Mock_sendAll___lam__0___closed__0_value;
static const lean_ctor_object l_Std_Http_Internal_Mock_sendAll___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Std_Http_Internal_Mock_sendAll___lam__0___closed__0_value)}};
static const lean_object* l_Std_Http_Internal_Mock_sendAll___lam__0___closed__1 = (const lean_object*)&l_Std_Http_Internal_Mock_sendAll___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l_Std_Http_Internal_Mock_sendAll___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Internal_Mock_sendAll___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Std_Http_Internal_Mock_sendAll_spec__0___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Std_Http_Internal_Mock_sendAll_spec__0___lam__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Std_Http_Internal_Mock_sendAll_spec__0___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Std_Http_Internal_Mock_sendAll_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Std_Http_Internal_Mock_sendAll_spec__0___lam__1___boxed, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Std_Http_Internal_Mock_sendAll_spec__0___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Std_Http_Internal_Mock_sendAll_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Std_Http_Internal_Mock_sendAll_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Std_Http_Internal_Mock_sendAll_spec__0___lam__0(size_t, lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Std_Http_Internal_Mock_sendAll_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Http_Internal_Mock_sendAll___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_Internal_Mock_sendAll___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_Internal_Mock_sendAll___closed__0 = (const lean_object*)&l_Std_Http_Internal_Mock_sendAll___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Http_Internal_Mock_sendAll(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Internal_Mock_sendAll___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Internal_Mock_recvSelector(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Internal_Mock_Client_getRecvChan(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Internal_Mock_Client_getRecvChan___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Internal_Mock_Client_getSendChan(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Internal_Mock_Client_getSendChan___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Internal_Mock_Client_send(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Internal_Mock_Client_send___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Internal_Mock_Client_recv_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Internal_Mock_Client_recv_x3f___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Std_Http_Internal_Mock_Client_tryRecv_x3f_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Std_Http_Internal_Mock_Client_tryRecv_x3f_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Internal_Mock_Client_tryRecv_x3f___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Internal_Mock_Client_tryRecv_x3f___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Internal_Mock_Client_tryRecv_x3f(lean_object*, uint64_t);
LEAN_EXPORT lean_object* l_Std_Http_Internal_Mock_Client_tryRecv_x3f___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Std_Http_Internal_Mock_Client_tryRecv_x3f_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Std_Http_Internal_Mock_Client_tryRecv_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Std_Http_Internal_Mock_Client_close___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 18}, .m_objs = {((lean_object*)&l_Std_Http_Internal_Mock_send___lam__0___closed__0_value)}};
static const lean_object* l_Std_Http_Internal_Mock_Client_close___closed__0 = (const lean_object*)&l_Std_Http_Internal_Mock_Client_close___closed__0_value;
static const lean_ctor_object l_Std_Http_Internal_Mock_Client_close___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 18}, .m_objs = {((lean_object*)&l_Std_Http_Internal_Mock_send___lam__0___closed__1_value)}};
static const lean_object* l_Std_Http_Internal_Mock_Client_close___closed__1 = (const lean_object*)&l_Std_Http_Internal_Mock_Client_close___closed__1_value;
LEAN_EXPORT lean_object* l_Std_Http_Internal_Mock_Client_close(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Internal_Mock_Client_close___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Internal_Mock_Server_getRecvChan(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Internal_Mock_Server_getRecvChan___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Internal_Mock_Server_getSendChan(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Internal_Mock_Server_getSendChan___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Internal_Mock_Server_send(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Internal_Mock_Server_send___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Internal_Mock_Server_recv_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Internal_Mock_Server_recv_x3f___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Internal_Mock_Server_tryRecv_x3f___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Internal_Mock_Server_tryRecv_x3f___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Internal_Mock_Server_tryRecv_x3f(lean_object*, uint64_t);
LEAN_EXPORT lean_object* l_Std_Http_Internal_Mock_Server_tryRecv_x3f___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Internal_Mock_Server_close(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Internal_Mock_Server_close___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Internal_instTransportClient___lam__0(lean_object*, uint64_t);
LEAN_EXPORT lean_object* l_Std_Http_Internal_instTransportClient___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Internal_instTransportClient___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Internal_instTransportClient___lam__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Internal_instTransportClient___lam__2(lean_object*, uint64_t);
LEAN_EXPORT lean_object* l_Std_Http_Internal_instTransportClient___lam__2___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_Http_Internal_instTransportClient___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_Internal_instTransportClient___lam__0___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_Internal_instTransportClient___closed__0 = (const lean_object*)&l_Std_Http_Internal_instTransportClient___closed__0_value;
static const lean_closure_object l_Std_Http_Internal_instTransportClient___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_Internal_instTransportClient___lam__1___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_Internal_instTransportClient___closed__1 = (const lean_object*)&l_Std_Http_Internal_instTransportClient___closed__1_value;
static const lean_closure_object l_Std_Http_Internal_instTransportClient___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_Internal_instTransportClient___lam__2___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_Internal_instTransportClient___closed__2 = (const lean_object*)&l_Std_Http_Internal_instTransportClient___closed__2_value;
static const lean_closure_object l_Std_Http_Internal_instTransportClient___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_Internal_Mock_Client_close___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_Internal_instTransportClient___closed__3 = (const lean_object*)&l_Std_Http_Internal_instTransportClient___closed__3_value;
static const lean_ctor_object l_Std_Http_Internal_instTransportClient___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Std_Http_Internal_instTransportClient___closed__0_value),((lean_object*)&l_Std_Http_Internal_instTransportClient___closed__1_value),((lean_object*)&l_Std_Http_Internal_instTransportClient___closed__2_value),((lean_object*)&l_Std_Http_Internal_instTransportClient___closed__3_value)}};
static const lean_object* l_Std_Http_Internal_instTransportClient___closed__4 = (const lean_object*)&l_Std_Http_Internal_instTransportClient___closed__4_value;
LEAN_EXPORT const lean_object* l_Std_Http_Internal_instTransportClient = (const lean_object*)&l_Std_Http_Internal_instTransportClient___closed__4_value;
LEAN_EXPORT lean_object* l_Std_Http_Internal_instTransportServer___lam__0(lean_object*, uint64_t);
LEAN_EXPORT lean_object* l_Std_Http_Internal_instTransportServer___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Internal_instTransportServer___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Internal_instTransportServer___lam__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Internal_instTransportServer___lam__2(lean_object*, uint64_t);
LEAN_EXPORT lean_object* l_Std_Http_Internal_instTransportServer___lam__2___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_Http_Internal_instTransportServer___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_Internal_instTransportServer___lam__0___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_Internal_instTransportServer___closed__0 = (const lean_object*)&l_Std_Http_Internal_instTransportServer___closed__0_value;
static const lean_closure_object l_Std_Http_Internal_instTransportServer___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_Internal_instTransportServer___lam__1___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_Internal_instTransportServer___closed__1 = (const lean_object*)&l_Std_Http_Internal_instTransportServer___closed__1_value;
static const lean_closure_object l_Std_Http_Internal_instTransportServer___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_Internal_instTransportServer___lam__2___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_Internal_instTransportServer___closed__2 = (const lean_object*)&l_Std_Http_Internal_instTransportServer___closed__2_value;
static const lean_closure_object l_Std_Http_Internal_instTransportServer___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_Internal_Mock_Server_close___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_Internal_instTransportServer___closed__3 = (const lean_object*)&l_Std_Http_Internal_instTransportServer___closed__3_value;
static const lean_ctor_object l_Std_Http_Internal_instTransportServer___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Std_Http_Internal_instTransportServer___closed__0_value),((lean_object*)&l_Std_Http_Internal_instTransportServer___closed__1_value),((lean_object*)&l_Std_Http_Internal_instTransportServer___closed__2_value),((lean_object*)&l_Std_Http_Internal_instTransportServer___closed__3_value)}};
static const lean_object* l_Std_Http_Internal_instTransportServer___closed__4 = (const lean_object*)&l_Std_Http_Internal_instTransportServer___closed__4_value;
LEAN_EXPORT const lean_object* l_Std_Http_Internal_instTransportServer = (const lean_object*)&l_Std_Http_Internal_instTransportServer___closed__4_value;
LEAN_EXPORT lean_object* l_Std_Http_instTransportClient___lam__0(lean_object* v___x_1_, lean_object* v_x_2_){
_start:
{
if (lean_obj_tag(v_x_2_) == 0)
{
lean_object* v___x_3_; lean_object* v___x_4_; 
v___x_3_ = lean_mk_io_user_error(v___x_1_);
v___x_4_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4_, 0, v___x_3_);
return v___x_4_;
}
else
{
lean_object* v_val_5_; 
lean_dec_ref(v___x_1_);
v_val_5_ = lean_ctor_get(v_x_2_, 0);
lean_inc(v_val_5_);
return v_val_5_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_instTransportClient___lam__0___boxed(lean_object* v___x_6_, lean_object* v_x_7_){
_start:
{
lean_object* v_res_8_; 
v_res_8_ = l_Std_Http_instTransportClient___lam__0(v___x_6_, v_x_7_);
lean_dec(v_x_7_);
return v_res_8_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_instTransportClient___lam__1(lean_object* v_client_12_, uint64_t v_expect_13_){
_start:
{
lean_object* v___f_15_; lean_object* v___x_16_; 
v___f_15_ = ((lean_object*)(l_Std_Http_instTransportClient___lam__1___closed__1));
v___x_16_ = lean_uv_tcp_recv(v_client_12_, v_expect_13_);
if (lean_obj_tag(v___x_16_) == 0)
{
lean_object* v_a_17_; lean_object* v___x_19_; uint8_t v_isShared_20_; uint8_t v_isSharedCheck_28_; 
v_a_17_ = lean_ctor_get(v___x_16_, 0);
v_isSharedCheck_28_ = !lean_is_exclusive(v___x_16_);
if (v_isSharedCheck_28_ == 0)
{
v___x_19_ = v___x_16_;
v_isShared_20_ = v_isSharedCheck_28_;
goto v_resetjp_18_;
}
else
{
lean_inc(v_a_17_);
lean_dec(v___x_16_);
v___x_19_ = lean_box(0);
v_isShared_20_ = v_isSharedCheck_28_;
goto v_resetjp_18_;
}
v_resetjp_18_:
{
lean_object* v___x_21_; lean_object* v___x_22_; uint8_t v___x_23_; lean_object* v___x_24_; lean_object* v___x_26_; 
v___x_21_ = lean_io_promise_result_opt(v_a_17_);
lean_dec(v_a_17_);
v___x_22_ = lean_unsigned_to_nat(0u);
v___x_23_ = 0;
v___x_24_ = lean_task_map(v___f_15_, v___x_21_, v___x_22_, v___x_23_);
if (v_isShared_20_ == 0)
{
lean_ctor_set_tag(v___x_19_, 1);
lean_ctor_set(v___x_19_, 0, v___x_24_);
v___x_26_ = v___x_19_;
goto v_reusejp_25_;
}
else
{
lean_object* v_reuseFailAlloc_27_; 
v_reuseFailAlloc_27_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_27_, 0, v___x_24_);
v___x_26_ = v_reuseFailAlloc_27_;
goto v_reusejp_25_;
}
v_reusejp_25_:
{
return v___x_26_;
}
}
}
else
{
lean_object* v_a_29_; lean_object* v___x_31_; uint8_t v_isShared_32_; uint8_t v_isSharedCheck_37_; 
v_a_29_ = lean_ctor_get(v___x_16_, 0);
v_isSharedCheck_37_ = !lean_is_exclusive(v___x_16_);
if (v_isSharedCheck_37_ == 0)
{
v___x_31_ = v___x_16_;
v_isShared_32_ = v_isSharedCheck_37_;
goto v_resetjp_30_;
}
else
{
lean_inc(v_a_29_);
lean_dec(v___x_16_);
v___x_31_ = lean_box(0);
v_isShared_32_ = v_isSharedCheck_37_;
goto v_resetjp_30_;
}
v_resetjp_30_:
{
lean_object* v___x_34_; 
if (v_isShared_32_ == 0)
{
lean_ctor_set_tag(v___x_31_, 0);
v___x_34_ = v___x_31_;
goto v_reusejp_33_;
}
else
{
lean_object* v_reuseFailAlloc_36_; 
v_reuseFailAlloc_36_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_36_, 0, v_a_29_);
v___x_34_ = v_reuseFailAlloc_36_;
goto v_reusejp_33_;
}
v_reusejp_33_:
{
lean_object* v___x_35_; 
v___x_35_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_35_, 0, v___x_34_);
return v___x_35_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_instTransportClient___lam__1___boxed(lean_object* v_client_38_, lean_object* v_expect_39_, lean_object* v___y_40_){
_start:
{
uint64_t v_expect_boxed_41_; lean_object* v_res_42_; 
v_expect_boxed_41_ = lean_unbox_uint64(v_expect_39_);
lean_dec_ref(v_expect_39_);
v_res_42_ = l_Std_Http_instTransportClient___lam__1(v_client_38_, v_expect_boxed_41_);
lean_dec(v_client_38_);
return v_res_42_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_instTransportClient___lam__2(lean_object* v___x_43_, lean_object* v_x_44_){
_start:
{
if (lean_obj_tag(v_x_44_) == 0)
{
lean_object* v___x_45_; lean_object* v___x_46_; 
v___x_45_ = lean_mk_io_user_error(v___x_43_);
v___x_46_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_46_, 0, v___x_45_);
return v___x_46_;
}
else
{
lean_object* v_val_47_; 
lean_dec_ref(v___x_43_);
v_val_47_ = lean_ctor_get(v_x_44_, 0);
lean_inc(v_val_47_);
return v_val_47_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_instTransportClient___lam__2___boxed(lean_object* v___x_48_, lean_object* v_x_49_){
_start:
{
lean_object* v_res_50_; 
v_res_50_ = l_Std_Http_instTransportClient___lam__2(v___x_48_, v_x_49_);
lean_dec(v_x_49_);
return v_res_50_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_instTransportClient___lam__3(lean_object* v_client_53_, lean_object* v_data_54_){
_start:
{
lean_object* v___f_56_; lean_object* v___x_57_; 
v___f_56_ = ((lean_object*)(l_Std_Http_instTransportClient___lam__3___closed__0));
v___x_57_ = lean_uv_tcp_send(v_client_53_, v_data_54_);
if (lean_obj_tag(v___x_57_) == 0)
{
lean_object* v_a_58_; lean_object* v___x_60_; uint8_t v_isShared_61_; uint8_t v_isSharedCheck_69_; 
v_a_58_ = lean_ctor_get(v___x_57_, 0);
v_isSharedCheck_69_ = !lean_is_exclusive(v___x_57_);
if (v_isSharedCheck_69_ == 0)
{
v___x_60_ = v___x_57_;
v_isShared_61_ = v_isSharedCheck_69_;
goto v_resetjp_59_;
}
else
{
lean_inc(v_a_58_);
lean_dec(v___x_57_);
v___x_60_ = lean_box(0);
v_isShared_61_ = v_isSharedCheck_69_;
goto v_resetjp_59_;
}
v_resetjp_59_:
{
lean_object* v___x_62_; lean_object* v___x_63_; uint8_t v___x_64_; lean_object* v___x_65_; lean_object* v___x_67_; 
v___x_62_ = lean_io_promise_result_opt(v_a_58_);
lean_dec(v_a_58_);
v___x_63_ = lean_unsigned_to_nat(0u);
v___x_64_ = 0;
v___x_65_ = lean_task_map(v___f_56_, v___x_62_, v___x_63_, v___x_64_);
if (v_isShared_61_ == 0)
{
lean_ctor_set_tag(v___x_60_, 1);
lean_ctor_set(v___x_60_, 0, v___x_65_);
v___x_67_ = v___x_60_;
goto v_reusejp_66_;
}
else
{
lean_object* v_reuseFailAlloc_68_; 
v_reuseFailAlloc_68_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_68_, 0, v___x_65_);
v___x_67_ = v_reuseFailAlloc_68_;
goto v_reusejp_66_;
}
v_reusejp_66_:
{
return v___x_67_;
}
}
}
else
{
lean_object* v_a_70_; lean_object* v___x_72_; uint8_t v_isShared_73_; uint8_t v_isSharedCheck_78_; 
v_a_70_ = lean_ctor_get(v___x_57_, 0);
v_isSharedCheck_78_ = !lean_is_exclusive(v___x_57_);
if (v_isSharedCheck_78_ == 0)
{
v___x_72_ = v___x_57_;
v_isShared_73_ = v_isSharedCheck_78_;
goto v_resetjp_71_;
}
else
{
lean_inc(v_a_70_);
lean_dec(v___x_57_);
v___x_72_ = lean_box(0);
v_isShared_73_ = v_isSharedCheck_78_;
goto v_resetjp_71_;
}
v_resetjp_71_:
{
lean_object* v___x_75_; 
if (v_isShared_73_ == 0)
{
lean_ctor_set_tag(v___x_72_, 0);
v___x_75_ = v___x_72_;
goto v_reusejp_74_;
}
else
{
lean_object* v_reuseFailAlloc_77_; 
v_reuseFailAlloc_77_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_77_, 0, v_a_70_);
v___x_75_ = v_reuseFailAlloc_77_;
goto v_reusejp_74_;
}
v_reusejp_74_:
{
lean_object* v___x_76_; 
v___x_76_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_76_, 0, v___x_75_);
return v___x_76_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_instTransportClient___lam__3___boxed(lean_object* v_client_79_, lean_object* v_data_80_, lean_object* v___y_81_){
_start:
{
lean_object* v_res_82_; 
v_res_82_ = l_Std_Http_instTransportClient___lam__3(v_client_79_, v_data_80_);
lean_dec(v_client_79_);
return v_res_82_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_instTransportClient___lam__4(lean_object* v_x_83_){
_start:
{
lean_object* v___x_85_; lean_object* v___x_86_; 
v___x_85_ = lean_box(0);
v___x_86_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_86_, 0, v___x_85_);
return v___x_86_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_instTransportClient___lam__4___boxed(lean_object* v_x_87_, lean_object* v___y_88_){
_start:
{
lean_object* v_res_89_; 
v_res_89_ = l_Std_Http_instTransportClient___lam__4(v_x_87_);
lean_dec(v_x_87_);
return v_res_89_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Internal_Mock_new(){
_start:
{
lean_object* v___x_101_; lean_object* v___x_102_; lean_object* v___x_103_; lean_object* v___x_104_; lean_object* v___x_105_; 
v___x_101_ = lean_box(0);
v___x_102_ = l_Std_CloseableChannel_new___redArg(v___x_101_);
v___x_103_ = l_Std_CloseableChannel_new___redArg(v___x_101_);
v___x_104_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_104_, 0, v___x_102_);
lean_ctor_set(v___x_104_, 1, v___x_103_);
lean_inc_ref(v___x_104_);
v___x_105_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_105_, 0, v___x_104_);
lean_ctor_set(v___x_105_, 1, v___x_104_);
return v___x_105_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Internal_Mock_new___boxed(lean_object* v___y_106_){
_start:
{
lean_object* v_res_107_; 
v_res_107_ = l_Std_Http_Internal_Mock_new();
return v_res_107_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Internal_Mock_recvJoined___lam__0(lean_object* v_x_108_){
_start:
{
if (lean_obj_tag(v_x_108_) == 0)
{
lean_object* v_a_110_; lean_object* v___x_112_; uint8_t v_isShared_113_; uint8_t v_isSharedCheck_118_; 
v_a_110_ = lean_ctor_get(v_x_108_, 0);
v_isSharedCheck_118_ = !lean_is_exclusive(v_x_108_);
if (v_isSharedCheck_118_ == 0)
{
v___x_112_ = v_x_108_;
v_isShared_113_ = v_isSharedCheck_118_;
goto v_resetjp_111_;
}
else
{
lean_inc(v_a_110_);
lean_dec(v_x_108_);
v___x_112_ = lean_box(0);
v_isShared_113_ = v_isSharedCheck_118_;
goto v_resetjp_111_;
}
v_resetjp_111_:
{
lean_object* v___x_115_; 
if (v_isShared_113_ == 0)
{
v___x_115_ = v___x_112_;
goto v_reusejp_114_;
}
else
{
lean_object* v_reuseFailAlloc_117_; 
v_reuseFailAlloc_117_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_117_, 0, v_a_110_);
v___x_115_ = v_reuseFailAlloc_117_;
goto v_reusejp_114_;
}
v_reusejp_114_:
{
lean_object* v___x_116_; 
v___x_116_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_116_, 0, v___x_115_);
return v___x_116_;
}
}
}
else
{
lean_object* v_a_119_; lean_object* v___x_121_; uint8_t v_isShared_122_; uint8_t v_isSharedCheck_128_; 
v_a_119_ = lean_ctor_get(v_x_108_, 0);
v_isSharedCheck_128_ = !lean_is_exclusive(v_x_108_);
if (v_isSharedCheck_128_ == 0)
{
v___x_121_ = v_x_108_;
v_isShared_122_ = v_isSharedCheck_128_;
goto v_resetjp_120_;
}
else
{
lean_inc(v_a_119_);
lean_dec(v_x_108_);
v___x_121_ = lean_box(0);
v_isShared_122_ = v_isSharedCheck_128_;
goto v_resetjp_120_;
}
v_resetjp_120_:
{
lean_object* v___x_123_; lean_object* v___x_125_; 
v___x_123_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_123_, 0, v_a_119_);
if (v_isShared_122_ == 0)
{
lean_ctor_set(v___x_121_, 0, v___x_123_);
v___x_125_ = v___x_121_;
goto v_reusejp_124_;
}
else
{
lean_object* v_reuseFailAlloc_127_; 
v_reuseFailAlloc_127_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_127_, 0, v___x_123_);
v___x_125_ = v_reuseFailAlloc_127_;
goto v_reusejp_124_;
}
v_reusejp_124_:
{
lean_object* v___x_126_; 
v___x_126_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_126_, 0, v___x_125_);
return v___x_126_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Internal_Mock_recvJoined___lam__0___boxed(lean_object* v_x_129_, lean_object* v___y_130_){
_start:
{
lean_object* v_res_131_; 
v_res_131_ = l_Std_Http_Internal_Mock_recvJoined___lam__0(v_x_129_);
return v_res_131_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Internal_Mock_recvJoined___lam__1(lean_object* v_a_132_, lean_object* v_x_133_){
_start:
{
if (lean_obj_tag(v_x_133_) == 0)
{
lean_object* v_a_135_; lean_object* v___x_137_; uint8_t v_isShared_138_; uint8_t v_isSharedCheck_143_; 
v_a_135_ = lean_ctor_get(v_x_133_, 0);
v_isSharedCheck_143_ = !lean_is_exclusive(v_x_133_);
if (v_isSharedCheck_143_ == 0)
{
v___x_137_ = v_x_133_;
v_isShared_138_ = v_isSharedCheck_143_;
goto v_resetjp_136_;
}
else
{
lean_inc(v_a_135_);
lean_dec(v_x_133_);
v___x_137_ = lean_box(0);
v_isShared_138_ = v_isSharedCheck_143_;
goto v_resetjp_136_;
}
v_resetjp_136_:
{
lean_object* v___x_140_; 
if (v_isShared_138_ == 0)
{
v___x_140_ = v___x_137_;
goto v_reusejp_139_;
}
else
{
lean_object* v_reuseFailAlloc_142_; 
v_reuseFailAlloc_142_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_142_, 0, v_a_135_);
v___x_140_ = v_reuseFailAlloc_142_;
goto v_reusejp_139_;
}
v_reusejp_139_:
{
lean_object* v___x_141_; 
v___x_141_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_141_, 0, v___x_140_);
return v___x_141_;
}
}
}
else
{
lean_object* v___x_144_; lean_object* v___x_145_; 
lean_dec_ref_known(v_x_133_, 1);
v___x_144_ = l_IO_Promise_result_x21___redArg(v_a_132_);
v___x_145_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_145_, 0, v___x_144_);
return v___x_145_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Internal_Mock_recvJoined___lam__1___boxed(lean_object* v_a_146_, lean_object* v_x_147_, lean_object* v___y_148_){
_start:
{
lean_object* v_res_149_; 
v_res_149_ = l_Std_Http_Internal_Mock_recvJoined___lam__1(v_a_146_, v_x_147_);
lean_dec(v_a_146_);
return v_res_149_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Async_Basic_0__Std_Async_EAsync_forIn_loop___at___00Std_Http_Internal_Mock_recvJoined_spec__0___lam__1(lean_object* v_b_150_, lean_object* v_x_151_){
_start:
{
if (lean_obj_tag(v_x_151_) == 0)
{
lean_object* v_a_153_; lean_object* v___x_155_; uint8_t v_isShared_156_; uint8_t v_isSharedCheck_161_; 
lean_dec_ref(v_b_150_);
v_a_153_ = lean_ctor_get(v_x_151_, 0);
v_isSharedCheck_161_ = !lean_is_exclusive(v_x_151_);
if (v_isSharedCheck_161_ == 0)
{
v___x_155_ = v_x_151_;
v_isShared_156_ = v_isSharedCheck_161_;
goto v_resetjp_154_;
}
else
{
lean_inc(v_a_153_);
lean_dec(v_x_151_);
v___x_155_ = lean_box(0);
v_isShared_156_ = v_isSharedCheck_161_;
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
lean_object* v_reuseFailAlloc_160_; 
v_reuseFailAlloc_160_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_160_, 0, v_a_153_);
v___x_158_ = v_reuseFailAlloc_160_;
goto v_reusejp_157_;
}
v_reusejp_157_:
{
lean_object* v___x_159_; 
v___x_159_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_159_, 0, v___x_158_);
return v___x_159_;
}
}
}
else
{
lean_object* v_a_162_; lean_object* v___x_164_; uint8_t v_isShared_165_; uint8_t v_isSharedCheck_188_; 
v_a_162_ = lean_ctor_get(v_x_151_, 0);
v_isSharedCheck_188_ = !lean_is_exclusive(v_x_151_);
if (v_isSharedCheck_188_ == 0)
{
v___x_164_ = v_x_151_;
v_isShared_165_ = v_isSharedCheck_188_;
goto v_resetjp_163_;
}
else
{
lean_inc(v_a_162_);
lean_dec(v_x_151_);
v___x_164_ = lean_box(0);
v_isShared_165_ = v_isSharedCheck_188_;
goto v_resetjp_163_;
}
v_resetjp_163_:
{
if (lean_obj_tag(v_a_162_) == 0)
{
lean_object* v___x_166_; lean_object* v___x_168_; 
v___x_166_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_166_, 0, v_b_150_);
if (v_isShared_165_ == 0)
{
lean_ctor_set(v___x_164_, 0, v___x_166_);
v___x_168_ = v___x_164_;
goto v_reusejp_167_;
}
else
{
lean_object* v_reuseFailAlloc_170_; 
v_reuseFailAlloc_170_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_170_, 0, v___x_166_);
v___x_168_ = v_reuseFailAlloc_170_;
goto v_reusejp_167_;
}
v_reusejp_167_:
{
lean_object* v___x_169_; 
v___x_169_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_169_, 0, v___x_168_);
return v___x_169_;
}
}
else
{
lean_object* v_val_171_; lean_object* v___x_173_; uint8_t v_isShared_174_; uint8_t v_isSharedCheck_187_; 
v_val_171_ = lean_ctor_get(v_a_162_, 0);
v_isSharedCheck_187_ = !lean_is_exclusive(v_a_162_);
if (v_isSharedCheck_187_ == 0)
{
v___x_173_ = v_a_162_;
v_isShared_174_ = v_isSharedCheck_187_;
goto v_resetjp_172_;
}
else
{
lean_inc(v_val_171_);
lean_dec(v_a_162_);
v___x_173_ = lean_box(0);
v_isShared_174_ = v_isSharedCheck_187_;
goto v_resetjp_172_;
}
v_resetjp_172_:
{
lean_object* v___x_175_; lean_object* v___x_176_; lean_object* v___x_177_; uint8_t v___x_178_; lean_object* v___x_179_; lean_object* v___x_181_; 
v___x_175_ = lean_unsigned_to_nat(0u);
v___x_176_ = lean_byte_array_size(v_b_150_);
v___x_177_ = lean_byte_array_size(v_val_171_);
v___x_178_ = 0;
v___x_179_ = lean_byte_array_copy_slice(v_val_171_, v___x_175_, v_b_150_, v___x_176_, v___x_177_, v___x_178_);
lean_dec(v_val_171_);
if (v_isShared_174_ == 0)
{
lean_ctor_set(v___x_173_, 0, v___x_179_);
v___x_181_ = v___x_173_;
goto v_reusejp_180_;
}
else
{
lean_object* v_reuseFailAlloc_186_; 
v_reuseFailAlloc_186_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_186_, 0, v___x_179_);
v___x_181_ = v_reuseFailAlloc_186_;
goto v_reusejp_180_;
}
v_reusejp_180_:
{
lean_object* v___x_183_; 
if (v_isShared_165_ == 0)
{
lean_ctor_set(v___x_164_, 0, v___x_181_);
v___x_183_ = v___x_164_;
goto v_reusejp_182_;
}
else
{
lean_object* v_reuseFailAlloc_185_; 
v_reuseFailAlloc_185_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_185_, 0, v___x_181_);
v___x_183_ = v_reuseFailAlloc_185_;
goto v_reusejp_182_;
}
v_reusejp_182_:
{
lean_object* v___x_184_; 
v___x_184_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_184_, 0, v___x_183_);
return v___x_184_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Async_Basic_0__Std_Async_EAsync_forIn_loop___at___00Std_Http_Internal_Mock_recvJoined_spec__0___lam__1___boxed(lean_object* v_b_189_, lean_object* v_x_190_, lean_object* v___y_191_){
_start:
{
lean_object* v_res_192_; 
v_res_192_ = l___private_Std_Async_Basic_0__Std_Async_EAsync_forIn_loop___at___00Std_Http_Internal_Mock_recvJoined_spec__0___lam__1(v_b_189_, v_x_190_);
return v_res_192_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Async_Basic_0__Std_Async_EAsync_forIn_loop___at___00Std_Http_Internal_Mock_recvJoined_spec__0___lam__0___boxed(lean_object* v_promise_193_, lean_object* v_recvChan_194_, lean_object* v_expect_195_, lean_object* v_prio_196_, lean_object* v_x_197_, lean_object* v___y_198_){
_start:
{
lean_object* v_res_199_; 
v_res_199_ = l___private_Std_Async_Basic_0__Std_Async_EAsync_forIn_loop___at___00Std_Http_Internal_Mock_recvJoined_spec__0___lam__0(v_promise_193_, v_recvChan_194_, v_expect_195_, v_prio_196_, v_x_197_);
return v_res_199_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Async_Basic_0__Std_Async_EAsync_forIn_loop___at___00Std_Http_Internal_Mock_recvJoined_spec__0(lean_object* v_recvChan_200_, lean_object* v_expect_201_, lean_object* v_prio_202_, lean_object* v_promise_203_, lean_object* v_b_204_){
_start:
{
lean_object* v_a_207_; lean_object* v___f_210_; lean_object* v___f_211_; 
lean_inc(v_prio_202_);
lean_inc(v_expect_201_);
lean_inc_ref(v_recvChan_200_);
lean_inc(v_promise_203_);
v___f_210_ = lean_alloc_closure((void*)(l___private_Std_Async_Basic_0__Std_Async_EAsync_forIn_loop___at___00Std_Http_Internal_Mock_recvJoined_spec__0___lam__0___boxed), 6, 4);
lean_closure_set(v___f_210_, 0, v_promise_203_);
lean_closure_set(v___f_210_, 1, v_recvChan_200_);
lean_closure_set(v___f_210_, 2, v_expect_201_);
lean_closure_set(v___f_210_, 3, v_prio_202_);
lean_inc_ref(v_b_204_);
v___f_211_ = lean_alloc_closure((void*)(l___private_Std_Async_Basic_0__Std_Async_EAsync_forIn_loop___at___00Std_Http_Internal_Mock_recvJoined_spec__0___lam__1___boxed), 3, 1);
lean_closure_set(v___f_211_, 0, v_b_204_);
if (lean_obj_tag(v_expect_201_) == 1)
{
lean_object* v_val_235_; lean_object* v___x_236_; uint64_t v___x_237_; uint64_t v___x_238_; uint8_t v___x_239_; 
v_val_235_ = lean_ctor_get(v_expect_201_, 0);
v___x_236_ = lean_byte_array_size(v_b_204_);
v___x_237_ = lean_uint64_of_nat(v___x_236_);
v___x_238_ = lean_unbox_uint64(v_val_235_);
v___x_239_ = lean_uint64_dec_le(v___x_238_, v___x_237_);
if (v___x_239_ == 0)
{
lean_dec_ref(v_b_204_);
goto v___jp_212_;
}
else
{
lean_dec_ref_known(v_expect_201_, 1);
lean_dec_ref(v___f_211_);
lean_dec_ref(v___f_210_);
lean_dec(v_prio_202_);
lean_dec_ref(v_recvChan_200_);
v_a_207_ = v_b_204_;
goto v___jp_206_;
}
}
else
{
lean_dec_ref(v_b_204_);
goto v___jp_212_;
}
v___jp_206_:
{
lean_object* v___x_208_; lean_object* v___x_209_; 
v___x_208_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_208_, 0, v_a_207_);
v___x_209_ = lean_io_promise_resolve(v___x_208_, v_promise_203_);
lean_dec(v_promise_203_);
return v___x_209_;
}
v___jp_212_:
{
lean_object* v___x_213_; uint8_t v___x_214_; lean_object* v___x_215_; lean_object* v___x_216_; lean_object* v___x_217_; lean_object* v___x_218_; 
v___x_213_ = lean_unsigned_to_nat(0u);
v___x_214_ = 0;
lean_inc_ref(v_recvChan_200_);
v___x_215_ = l_Std_CloseableChannel_tryRecv___redArg(v_recvChan_200_);
v___x_216_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_216_, 0, v___x_215_);
v___x_217_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_217_, 0, v___x_216_);
v___x_218_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_213_, v___x_214_, v___x_217_, v___f_211_);
if (lean_obj_tag(v___x_218_) == 0)
{
lean_object* v_a_219_; 
lean_dec_ref(v___f_210_);
v_a_219_ = lean_ctor_get(v___x_218_, 0);
lean_inc(v_a_219_);
lean_dec_ref_known(v___x_218_, 1);
if (lean_obj_tag(v_a_219_) == 0)
{
lean_object* v_a_220_; lean_object* v___x_222_; uint8_t v_isShared_223_; uint8_t v_isSharedCheck_228_; 
lean_dec(v_prio_202_);
lean_dec(v_expect_201_);
lean_dec_ref(v_recvChan_200_);
v_a_220_ = lean_ctor_get(v_a_219_, 0);
v_isSharedCheck_228_ = !lean_is_exclusive(v_a_219_);
if (v_isSharedCheck_228_ == 0)
{
v___x_222_ = v_a_219_;
v_isShared_223_ = v_isSharedCheck_228_;
goto v_resetjp_221_;
}
else
{
lean_inc(v_a_220_);
lean_dec(v_a_219_);
v___x_222_ = lean_box(0);
v_isShared_223_ = v_isSharedCheck_228_;
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
lean_object* v_reuseFailAlloc_227_; 
v_reuseFailAlloc_227_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_227_, 0, v_a_220_);
v___x_225_ = v_reuseFailAlloc_227_;
goto v_reusejp_224_;
}
v_reusejp_224_:
{
lean_object* v___x_226_; 
v___x_226_ = lean_io_promise_resolve(v___x_225_, v_promise_203_);
lean_dec(v_promise_203_);
return v___x_226_;
}
}
}
else
{
lean_object* v_a_229_; 
v_a_229_ = lean_ctor_get(v_a_219_, 0);
lean_inc(v_a_229_);
lean_dec_ref_known(v_a_219_, 1);
if (lean_obj_tag(v_a_229_) == 0)
{
lean_object* v_a_230_; 
lean_dec(v_prio_202_);
lean_dec(v_expect_201_);
lean_dec_ref(v_recvChan_200_);
v_a_230_ = lean_ctor_get(v_a_229_, 0);
lean_inc(v_a_230_);
lean_dec_ref_known(v_a_229_, 1);
v_a_207_ = v_a_230_;
goto v___jp_206_;
}
else
{
lean_object* v_a_231_; 
v_a_231_ = lean_ctor_get(v_a_229_, 0);
lean_inc(v_a_231_);
lean_dec_ref_known(v_a_229_, 1);
v_b_204_ = v_a_231_;
goto _start;
}
}
}
else
{
lean_object* v_a_233_; lean_object* v___x_234_; 
lean_dec(v_promise_203_);
lean_dec(v_expect_201_);
lean_dec_ref(v_recvChan_200_);
v_a_233_ = lean_ctor_get(v___x_218_, 0);
lean_inc_ref(v_a_233_);
lean_dec_ref_known(v___x_218_, 1);
v___x_234_ = l_BaseIO_chainTask___redArg(v_a_233_, v___f_210_, v_prio_202_, v___x_214_);
return v___x_234_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Async_Basic_0__Std_Async_EAsync_forIn_loop___at___00Std_Http_Internal_Mock_recvJoined_spec__0___lam__0(lean_object* v_promise_240_, lean_object* v_recvChan_241_, lean_object* v_expect_242_, lean_object* v_prio_243_, lean_object* v_x_244_){
_start:
{
if (lean_obj_tag(v_x_244_) == 0)
{
lean_object* v_a_246_; lean_object* v___x_248_; uint8_t v_isShared_249_; uint8_t v_isSharedCheck_254_; 
lean_dec(v_prio_243_);
lean_dec(v_expect_242_);
lean_dec_ref(v_recvChan_241_);
v_a_246_ = lean_ctor_get(v_x_244_, 0);
v_isSharedCheck_254_ = !lean_is_exclusive(v_x_244_);
if (v_isSharedCheck_254_ == 0)
{
v___x_248_ = v_x_244_;
v_isShared_249_ = v_isSharedCheck_254_;
goto v_resetjp_247_;
}
else
{
lean_inc(v_a_246_);
lean_dec(v_x_244_);
v___x_248_ = lean_box(0);
v_isShared_249_ = v_isSharedCheck_254_;
goto v_resetjp_247_;
}
v_resetjp_247_:
{
lean_object* v___x_251_; 
if (v_isShared_249_ == 0)
{
v___x_251_ = v___x_248_;
goto v_reusejp_250_;
}
else
{
lean_object* v_reuseFailAlloc_253_; 
v_reuseFailAlloc_253_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_253_, 0, v_a_246_);
v___x_251_ = v_reuseFailAlloc_253_;
goto v_reusejp_250_;
}
v_reusejp_250_:
{
lean_object* v___x_252_; 
v___x_252_ = lean_io_promise_resolve(v___x_251_, v_promise_240_);
lean_dec(v_promise_240_);
return v___x_252_;
}
}
}
else
{
lean_object* v_a_255_; lean_object* v___x_257_; uint8_t v_isShared_258_; uint8_t v_isSharedCheck_266_; 
v_a_255_ = lean_ctor_get(v_x_244_, 0);
v_isSharedCheck_266_ = !lean_is_exclusive(v_x_244_);
if (v_isSharedCheck_266_ == 0)
{
v___x_257_ = v_x_244_;
v_isShared_258_ = v_isSharedCheck_266_;
goto v_resetjp_256_;
}
else
{
lean_inc(v_a_255_);
lean_dec(v_x_244_);
v___x_257_ = lean_box(0);
v_isShared_258_ = v_isSharedCheck_266_;
goto v_resetjp_256_;
}
v_resetjp_256_:
{
if (lean_obj_tag(v_a_255_) == 0)
{
lean_object* v_a_259_; lean_object* v___x_261_; 
lean_dec(v_prio_243_);
lean_dec(v_expect_242_);
lean_dec_ref(v_recvChan_241_);
v_a_259_ = lean_ctor_get(v_a_255_, 0);
lean_inc(v_a_259_);
lean_dec_ref_known(v_a_255_, 1);
if (v_isShared_258_ == 0)
{
lean_ctor_set(v___x_257_, 0, v_a_259_);
v___x_261_ = v___x_257_;
goto v_reusejp_260_;
}
else
{
lean_object* v_reuseFailAlloc_263_; 
v_reuseFailAlloc_263_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_263_, 0, v_a_259_);
v___x_261_ = v_reuseFailAlloc_263_;
goto v_reusejp_260_;
}
v_reusejp_260_:
{
lean_object* v___x_262_; 
v___x_262_ = lean_io_promise_resolve(v___x_261_, v_promise_240_);
lean_dec(v_promise_240_);
return v___x_262_;
}
}
else
{
lean_object* v_a_264_; lean_object* v___x_265_; 
lean_del_object(v___x_257_);
v_a_264_ = lean_ctor_get(v_a_255_, 0);
lean_inc(v_a_264_);
lean_dec_ref_known(v_a_255_, 1);
v___x_265_ = l___private_Std_Async_Basic_0__Std_Async_EAsync_forIn_loop___at___00Std_Http_Internal_Mock_recvJoined_spec__0(v_recvChan_241_, v_expect_242_, v_prio_243_, v_promise_240_, v_a_264_);
return v___x_265_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Async_Basic_0__Std_Async_EAsync_forIn_loop___at___00Std_Http_Internal_Mock_recvJoined_spec__0___boxed(lean_object* v_recvChan_267_, lean_object* v_expect_268_, lean_object* v_prio_269_, lean_object* v_promise_270_, lean_object* v_b_271_, lean_object* v___y_272_){
_start:
{
lean_object* v_res_273_; 
v_res_273_ = l___private_Std_Async_Basic_0__Std_Async_EAsync_forIn_loop___at___00Std_Http_Internal_Mock_recvJoined_spec__0(v_recvChan_267_, v_expect_268_, v_prio_269_, v_promise_270_, v_b_271_);
return v_res_273_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Internal_Mock_recvJoined___lam__2(lean_object* v_recvChan_274_, lean_object* v_expect_275_, lean_object* v___x_276_, lean_object* v_val_277_, uint8_t v___x_278_, lean_object* v_x_279_){
_start:
{
if (lean_obj_tag(v_x_279_) == 0)
{
lean_object* v_a_281_; lean_object* v___x_283_; uint8_t v_isShared_284_; uint8_t v_isSharedCheck_289_; 
lean_dec_ref(v_val_277_);
lean_dec(v___x_276_);
lean_dec(v_expect_275_);
lean_dec_ref(v_recvChan_274_);
v_a_281_ = lean_ctor_get(v_x_279_, 0);
v_isSharedCheck_289_ = !lean_is_exclusive(v_x_279_);
if (v_isSharedCheck_289_ == 0)
{
v___x_283_ = v_x_279_;
v_isShared_284_ = v_isSharedCheck_289_;
goto v_resetjp_282_;
}
else
{
lean_inc(v_a_281_);
lean_dec(v_x_279_);
v___x_283_ = lean_box(0);
v_isShared_284_ = v_isSharedCheck_289_;
goto v_resetjp_282_;
}
v_resetjp_282_:
{
lean_object* v___x_286_; 
if (v_isShared_284_ == 0)
{
v___x_286_ = v___x_283_;
goto v_reusejp_285_;
}
else
{
lean_object* v_reuseFailAlloc_288_; 
v_reuseFailAlloc_288_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_288_, 0, v_a_281_);
v___x_286_ = v_reuseFailAlloc_288_;
goto v_reusejp_285_;
}
v_reusejp_285_:
{
lean_object* v___x_287_; 
v___x_287_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_287_, 0, v___x_286_);
return v___x_287_;
}
}
}
else
{
lean_object* v_a_290_; lean_object* v___x_292_; uint8_t v_isShared_293_; uint8_t v_isSharedCheck_301_; 
v_a_290_ = lean_ctor_get(v_x_279_, 0);
v_isSharedCheck_301_ = !lean_is_exclusive(v_x_279_);
if (v_isSharedCheck_301_ == 0)
{
v___x_292_ = v_x_279_;
v_isShared_293_ = v_isSharedCheck_301_;
goto v_resetjp_291_;
}
else
{
lean_inc(v_a_290_);
lean_dec(v_x_279_);
v___x_292_ = lean_box(0);
v_isShared_293_ = v_isSharedCheck_301_;
goto v_resetjp_291_;
}
v_resetjp_291_:
{
lean_object* v___f_294_; lean_object* v___x_295_; lean_object* v___x_297_; 
lean_inc(v_a_290_);
v___f_294_ = lean_alloc_closure((void*)(l_Std_Http_Internal_Mock_recvJoined___lam__1___boxed), 3, 1);
lean_closure_set(v___f_294_, 0, v_a_290_);
lean_inc(v___x_276_);
v___x_295_ = l___private_Std_Async_Basic_0__Std_Async_EAsync_forIn_loop___at___00Std_Http_Internal_Mock_recvJoined_spec__0(v_recvChan_274_, v_expect_275_, v___x_276_, v_a_290_, v_val_277_);
if (v_isShared_293_ == 0)
{
lean_ctor_set(v___x_292_, 0, v___x_295_);
v___x_297_ = v___x_292_;
goto v_reusejp_296_;
}
else
{
lean_object* v_reuseFailAlloc_300_; 
v_reuseFailAlloc_300_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_300_, 0, v___x_295_);
v___x_297_ = v_reuseFailAlloc_300_;
goto v_reusejp_296_;
}
v_reusejp_296_:
{
lean_object* v___x_298_; lean_object* v___x_299_; 
v___x_298_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_298_, 0, v___x_297_);
v___x_299_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_276_, v___x_278_, v___x_298_, v___f_294_);
return v___x_299_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Internal_Mock_recvJoined___lam__2___boxed(lean_object* v_recvChan_302_, lean_object* v_expect_303_, lean_object* v___x_304_, lean_object* v_val_305_, lean_object* v___x_306_, lean_object* v_x_307_, lean_object* v___y_308_){
_start:
{
uint8_t v___x_2250__boxed_309_; lean_object* v_res_310_; 
v___x_2250__boxed_309_ = lean_unbox(v___x_306_);
v_res_310_ = l_Std_Http_Internal_Mock_recvJoined___lam__2(v_recvChan_302_, v_expect_303_, v___x_304_, v_val_305_, v___x_2250__boxed_309_, v_x_307_);
return v_res_310_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Internal_Mock_recvJoined___lam__3(lean_object* v_recvChan_311_, lean_object* v_expect_312_, lean_object* v___f_313_, lean_object* v_x_314_){
_start:
{
if (lean_obj_tag(v_x_314_) == 0)
{
lean_object* v___x_316_; 
lean_dec_ref(v___f_313_);
lean_dec(v_expect_312_);
lean_dec_ref(v_recvChan_311_);
v___x_316_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_316_, 0, v_x_314_);
return v___x_316_;
}
else
{
lean_object* v_a_317_; 
v_a_317_ = lean_ctor_get(v_x_314_, 0);
lean_inc(v_a_317_);
if (lean_obj_tag(v_a_317_) == 0)
{
lean_object* v___x_318_; 
lean_dec_ref(v___f_313_);
lean_dec(v_expect_312_);
lean_dec_ref(v_recvChan_311_);
v___x_318_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_318_, 0, v_x_314_);
return v___x_318_;
}
else
{
lean_object* v___x_320_; uint8_t v_isShared_321_; uint8_t v_isSharedCheck_340_; 
v_isSharedCheck_340_ = !lean_is_exclusive(v_x_314_);
if (v_isSharedCheck_340_ == 0)
{
lean_object* v_unused_341_; 
v_unused_341_ = lean_ctor_get(v_x_314_, 0);
lean_dec(v_unused_341_);
v___x_320_ = v_x_314_;
v_isShared_321_ = v_isSharedCheck_340_;
goto v_resetjp_319_;
}
else
{
lean_dec(v_x_314_);
v___x_320_ = lean_box(0);
v_isShared_321_ = v_isSharedCheck_340_;
goto v_resetjp_319_;
}
v_resetjp_319_:
{
lean_object* v_val_322_; lean_object* v___x_324_; uint8_t v_isShared_325_; uint8_t v_isSharedCheck_339_; 
v_val_322_ = lean_ctor_get(v_a_317_, 0);
v_isSharedCheck_339_ = !lean_is_exclusive(v_a_317_);
if (v_isSharedCheck_339_ == 0)
{
v___x_324_ = v_a_317_;
v_isShared_325_ = v_isSharedCheck_339_;
goto v_resetjp_323_;
}
else
{
lean_inc(v_val_322_);
lean_dec(v_a_317_);
v___x_324_ = lean_box(0);
v_isShared_325_ = v_isSharedCheck_339_;
goto v_resetjp_323_;
}
v_resetjp_323_:
{
lean_object* v___x_326_; uint8_t v___x_327_; lean_object* v___x_328_; lean_object* v___f_329_; lean_object* v___x_330_; lean_object* v___x_332_; 
v___x_326_ = lean_unsigned_to_nat(0u);
v___x_327_ = 0;
v___x_328_ = lean_box(v___x_327_);
v___f_329_ = lean_alloc_closure((void*)(l_Std_Http_Internal_Mock_recvJoined___lam__2___boxed), 7, 5);
lean_closure_set(v___f_329_, 0, v_recvChan_311_);
lean_closure_set(v___f_329_, 1, v_expect_312_);
lean_closure_set(v___f_329_, 2, v___x_326_);
lean_closure_set(v___f_329_, 3, v_val_322_);
lean_closure_set(v___f_329_, 4, v___x_328_);
v___x_330_ = lean_io_promise_new();
if (v_isShared_321_ == 0)
{
lean_ctor_set(v___x_320_, 0, v___x_330_);
v___x_332_ = v___x_320_;
goto v_reusejp_331_;
}
else
{
lean_object* v_reuseFailAlloc_338_; 
v_reuseFailAlloc_338_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_338_, 0, v___x_330_);
v___x_332_ = v_reuseFailAlloc_338_;
goto v_reusejp_331_;
}
v_reusejp_331_:
{
lean_object* v___x_334_; 
if (v_isShared_325_ == 0)
{
lean_ctor_set_tag(v___x_324_, 0);
lean_ctor_set(v___x_324_, 0, v___x_332_);
v___x_334_ = v___x_324_;
goto v_reusejp_333_;
}
else
{
lean_object* v_reuseFailAlloc_337_; 
v_reuseFailAlloc_337_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_337_, 0, v___x_332_);
v___x_334_ = v_reuseFailAlloc_337_;
goto v_reusejp_333_;
}
v_reusejp_333_:
{
lean_object* v___x_335_; lean_object* v___x_336_; 
v___x_335_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_326_, v___x_327_, v___x_334_, v___f_329_);
v___x_336_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_326_, v___x_327_, v___x_335_, v___f_313_);
return v___x_336_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Internal_Mock_recvJoined___lam__3___boxed(lean_object* v_recvChan_342_, lean_object* v_expect_343_, lean_object* v___f_344_, lean_object* v_x_345_, lean_object* v___y_346_){
_start:
{
lean_object* v_res_347_; 
v_res_347_ = l_Std_Http_Internal_Mock_recvJoined___lam__3(v_recvChan_342_, v_expect_343_, v___f_344_, v_x_345_);
return v_res_347_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Internal_Mock_recvJoined___lam__4(lean_object* v_a_348_){
_start:
{
lean_object* v___x_349_; 
v___x_349_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_349_, 0, v_a_348_);
return v___x_349_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Internal_Mock_recvJoined___lam__5(lean_object* v___f_350_, lean_object* v___f_351_, lean_object* v_x_352_){
_start:
{
if (lean_obj_tag(v_x_352_) == 0)
{
lean_object* v_a_354_; lean_object* v___x_356_; uint8_t v_isShared_357_; uint8_t v_isSharedCheck_362_; 
lean_dec_ref(v___f_351_);
lean_dec_ref(v___f_350_);
v_a_354_ = lean_ctor_get(v_x_352_, 0);
v_isSharedCheck_362_ = !lean_is_exclusive(v_x_352_);
if (v_isSharedCheck_362_ == 0)
{
v___x_356_ = v_x_352_;
v_isShared_357_ = v_isSharedCheck_362_;
goto v_resetjp_355_;
}
else
{
lean_inc(v_a_354_);
lean_dec(v_x_352_);
v___x_356_ = lean_box(0);
v_isShared_357_ = v_isSharedCheck_362_;
goto v_resetjp_355_;
}
v_resetjp_355_:
{
lean_object* v___x_359_; 
if (v_isShared_357_ == 0)
{
v___x_359_ = v___x_356_;
goto v_reusejp_358_;
}
else
{
lean_object* v_reuseFailAlloc_361_; 
v_reuseFailAlloc_361_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_361_, 0, v_a_354_);
v___x_359_ = v_reuseFailAlloc_361_;
goto v_reusejp_358_;
}
v_reusejp_358_:
{
lean_object* v___x_360_; 
v___x_360_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_360_, 0, v___x_359_);
return v___x_360_;
}
}
}
else
{
lean_object* v_a_363_; lean_object* v___x_364_; uint8_t v___x_365_; lean_object* v___x_366_; lean_object* v___x_367_; lean_object* v___x_368_; 
v_a_363_ = lean_ctor_get(v_x_352_, 0);
lean_inc(v_a_363_);
lean_dec_ref_known(v_x_352_, 1);
v___x_364_ = lean_unsigned_to_nat(0u);
v___x_365_ = 0;
v___x_366_ = lean_task_map(v___f_350_, v_a_363_, v___x_364_, v___x_365_);
v___x_367_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_367_, 0, v___x_366_);
v___x_368_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_364_, v___x_365_, v___x_367_, v___f_351_);
return v___x_368_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Internal_Mock_recvJoined___lam__5___boxed(lean_object* v___f_369_, lean_object* v___f_370_, lean_object* v_x_371_, lean_object* v___y_372_){
_start:
{
lean_object* v_res_373_; 
v_res_373_ = l_Std_Http_Internal_Mock_recvJoined___lam__5(v___f_369_, v___f_370_, v_x_371_);
return v_res_373_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Internal_Mock_recvJoined(lean_object* v_recvChan_376_, lean_object* v_expect_377_){
_start:
{
lean_object* v___f_379_; lean_object* v___f_380_; lean_object* v___f_381_; lean_object* v___f_382_; lean_object* v___x_383_; uint8_t v___x_384_; lean_object* v___x_385_; lean_object* v___x_386_; lean_object* v___x_387_; lean_object* v___x_388_; 
v___f_379_ = ((lean_object*)(l_Std_Http_Internal_Mock_recvJoined___closed__0));
lean_inc_ref(v_recvChan_376_);
v___f_380_ = lean_alloc_closure((void*)(l_Std_Http_Internal_Mock_recvJoined___lam__3___boxed), 5, 3);
lean_closure_set(v___f_380_, 0, v_recvChan_376_);
lean_closure_set(v___f_380_, 1, v_expect_377_);
lean_closure_set(v___f_380_, 2, v___f_379_);
v___f_381_ = ((lean_object*)(l_Std_Http_Internal_Mock_recvJoined___closed__1));
v___f_382_ = lean_alloc_closure((void*)(l_Std_Http_Internal_Mock_recvJoined___lam__5___boxed), 4, 2);
lean_closure_set(v___f_382_, 0, v___f_381_);
lean_closure_set(v___f_382_, 1, v___f_380_);
v___x_383_ = lean_unsigned_to_nat(0u);
v___x_384_ = 0;
v___x_385_ = l_Std_CloseableChannel_recv___redArg(v_recvChan_376_);
v___x_386_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_386_, 0, v___x_385_);
v___x_387_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_387_, 0, v___x_386_);
v___x_388_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_383_, v___x_384_, v___x_387_, v___f_382_);
return v___x_388_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Internal_Mock_recvJoined___boxed(lean_object* v_recvChan_389_, lean_object* v_expect_390_, lean_object* v___y_391_){
_start:
{
lean_object* v_res_392_; 
v_res_392_ = l_Std_Http_Internal_Mock_recvJoined(v_recvChan_389_, v_expect_390_);
return v_res_392_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Internal_Mock_send___lam__0(lean_object* v___y_395_){
_start:
{
lean_object* v___y_397_; 
if (lean_obj_tag(v___y_395_) == 0)
{
lean_object* v_a_400_; uint8_t v___x_401_; 
v_a_400_ = lean_ctor_get(v___y_395_, 0);
lean_inc(v_a_400_);
lean_dec_ref_known(v___y_395_, 1);
v___x_401_ = lean_unbox(v_a_400_);
lean_dec(v_a_400_);
if (v___x_401_ == 0)
{
lean_object* v___x_402_; 
v___x_402_ = ((lean_object*)(l_Std_Http_Internal_Mock_send___lam__0___closed__0));
v___y_397_ = v___x_402_;
goto v___jp_396_;
}
else
{
lean_object* v___x_403_; 
v___x_403_ = ((lean_object*)(l_Std_Http_Internal_Mock_send___lam__0___closed__1));
v___y_397_ = v___x_403_;
goto v___jp_396_;
}
}
else
{
lean_object* v_a_404_; lean_object* v___x_406_; uint8_t v_isShared_407_; uint8_t v_isSharedCheck_411_; 
v_a_404_ = lean_ctor_get(v___y_395_, 0);
v_isSharedCheck_411_ = !lean_is_exclusive(v___y_395_);
if (v_isSharedCheck_411_ == 0)
{
v___x_406_ = v___y_395_;
v_isShared_407_ = v_isSharedCheck_411_;
goto v_resetjp_405_;
}
else
{
lean_inc(v_a_404_);
lean_dec(v___y_395_);
v___x_406_ = lean_box(0);
v_isShared_407_ = v_isSharedCheck_411_;
goto v_resetjp_405_;
}
v_resetjp_405_:
{
lean_object* v___x_409_; 
if (v_isShared_407_ == 0)
{
v___x_409_ = v___x_406_;
goto v_reusejp_408_;
}
else
{
lean_object* v_reuseFailAlloc_410_; 
v_reuseFailAlloc_410_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_410_, 0, v_a_404_);
v___x_409_ = v_reuseFailAlloc_410_;
goto v_reusejp_408_;
}
v_reusejp_408_:
{
return v___x_409_;
}
}
}
v___jp_396_:
{
lean_object* v___x_398_; lean_object* v___x_399_; 
lean_inc_ref(v___y_397_);
v___x_398_ = lean_mk_io_user_error(v___y_397_);
v___x_399_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_399_, 0, v___x_398_);
return v___x_399_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Internal_Mock_send___lam__1(lean_object* v___f_412_, lean_object* v_x_413_){
_start:
{
if (lean_obj_tag(v_x_413_) == 0)
{
lean_object* v_a_415_; lean_object* v___x_417_; uint8_t v_isShared_418_; uint8_t v_isSharedCheck_423_; 
lean_dec_ref(v___f_412_);
v_a_415_ = lean_ctor_get(v_x_413_, 0);
v_isSharedCheck_423_ = !lean_is_exclusive(v_x_413_);
if (v_isSharedCheck_423_ == 0)
{
v___x_417_ = v_x_413_;
v_isShared_418_ = v_isSharedCheck_423_;
goto v_resetjp_416_;
}
else
{
lean_inc(v_a_415_);
lean_dec(v_x_413_);
v___x_417_ = lean_box(0);
v_isShared_418_ = v_isSharedCheck_423_;
goto v_resetjp_416_;
}
v_resetjp_416_:
{
lean_object* v___x_420_; 
if (v_isShared_418_ == 0)
{
v___x_420_ = v___x_417_;
goto v_reusejp_419_;
}
else
{
lean_object* v_reuseFailAlloc_422_; 
v_reuseFailAlloc_422_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_422_, 0, v_a_415_);
v___x_420_ = v_reuseFailAlloc_422_;
goto v_reusejp_419_;
}
v_reusejp_419_:
{
lean_object* v___x_421_; 
v___x_421_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_421_, 0, v___x_420_);
return v___x_421_;
}
}
}
else
{
lean_object* v_a_424_; lean_object* v___x_425_; uint8_t v___x_426_; lean_object* v___x_427_; lean_object* v___x_428_; 
v_a_424_ = lean_ctor_get(v_x_413_, 0);
lean_inc(v_a_424_);
lean_dec_ref_known(v_x_413_, 1);
v___x_425_ = lean_unsigned_to_nat(0u);
v___x_426_ = 0;
v___x_427_ = lean_task_map(v___f_412_, v_a_424_, v___x_425_, v___x_426_);
v___x_428_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_428_, 0, v___x_427_);
return v___x_428_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Internal_Mock_send___lam__1___boxed(lean_object* v___f_429_, lean_object* v_x_430_, lean_object* v___y_431_){
_start:
{
lean_object* v_res_432_; 
v_res_432_ = l_Std_Http_Internal_Mock_send___lam__1(v___f_429_, v_x_430_);
return v_res_432_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Internal_Mock_send(lean_object* v_sendChan_436_, lean_object* v_data_437_){
_start:
{
lean_object* v___f_439_; lean_object* v___x_440_; uint8_t v___x_441_; lean_object* v___x_442_; lean_object* v___x_443_; lean_object* v___x_444_; lean_object* v___x_445_; 
v___f_439_ = ((lean_object*)(l_Std_Http_Internal_Mock_send___closed__1));
v___x_440_ = lean_unsigned_to_nat(0u);
v___x_441_ = 0;
v___x_442_ = l_Std_CloseableChannel_send___redArg(v_sendChan_436_, v_data_437_);
v___x_443_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_443_, 0, v___x_442_);
v___x_444_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_444_, 0, v___x_443_);
v___x_445_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_440_, v___x_441_, v___x_444_, v___f_439_);
return v___x_445_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Internal_Mock_send___boxed(lean_object* v_sendChan_446_, lean_object* v_data_447_, lean_object* v___y_448_){
_start:
{
lean_object* v_res_449_; 
v_res_449_ = l_Std_Http_Internal_Mock_send(v_sendChan_446_, v_data_447_);
return v_res_449_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Internal_Mock_sendAll___lam__0(lean_object* v_x_454_){
_start:
{
if (lean_obj_tag(v_x_454_) == 0)
{
lean_object* v___x_456_; 
v___x_456_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_456_, 0, v_x_454_);
return v___x_456_;
}
else
{
lean_object* v___x_457_; 
lean_dec_ref_known(v_x_454_, 1);
v___x_457_ = ((lean_object*)(l_Std_Http_Internal_Mock_sendAll___lam__0___closed__1));
return v___x_457_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Internal_Mock_sendAll___lam__0___boxed(lean_object* v_x_458_, lean_object* v___y_459_){
_start:
{
lean_object* v_res_460_; 
v_res_460_ = l_Std_Http_Internal_Mock_sendAll___lam__0(v_x_458_);
return v_res_460_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Std_Http_Internal_Mock_sendAll_spec__0___lam__1(lean_object* v___x_461_, lean_object* v_x_462_){
_start:
{
if (lean_obj_tag(v_x_462_) == 0)
{
lean_object* v_a_464_; lean_object* v___x_466_; uint8_t v_isShared_467_; uint8_t v_isSharedCheck_472_; 
v_a_464_ = lean_ctor_get(v_x_462_, 0);
v_isSharedCheck_472_ = !lean_is_exclusive(v_x_462_);
if (v_isSharedCheck_472_ == 0)
{
v___x_466_ = v_x_462_;
v_isShared_467_ = v_isSharedCheck_472_;
goto v_resetjp_465_;
}
else
{
lean_inc(v_a_464_);
lean_dec(v_x_462_);
v___x_466_ = lean_box(0);
v_isShared_467_ = v_isSharedCheck_472_;
goto v_resetjp_465_;
}
v_resetjp_465_:
{
lean_object* v___x_469_; 
if (v_isShared_467_ == 0)
{
v___x_469_ = v___x_466_;
goto v_reusejp_468_;
}
else
{
lean_object* v_reuseFailAlloc_471_; 
v_reuseFailAlloc_471_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_471_, 0, v_a_464_);
v___x_469_ = v_reuseFailAlloc_471_;
goto v_reusejp_468_;
}
v_reusejp_468_:
{
lean_object* v___x_470_; 
v___x_470_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_470_, 0, v___x_469_);
return v___x_470_;
}
}
}
else
{
lean_object* v___x_474_; uint8_t v_isShared_475_; uint8_t v_isSharedCheck_481_; 
v_isSharedCheck_481_ = !lean_is_exclusive(v_x_462_);
if (v_isSharedCheck_481_ == 0)
{
lean_object* v_unused_482_; 
v_unused_482_ = lean_ctor_get(v_x_462_, 0);
lean_dec(v_unused_482_);
v___x_474_ = v_x_462_;
v_isShared_475_ = v_isSharedCheck_481_;
goto v_resetjp_473_;
}
else
{
lean_dec(v_x_462_);
v___x_474_ = lean_box(0);
v_isShared_475_ = v_isSharedCheck_481_;
goto v_resetjp_473_;
}
v_resetjp_473_:
{
lean_object* v___x_476_; lean_object* v___x_478_; 
v___x_476_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_476_, 0, v___x_461_);
if (v_isShared_475_ == 0)
{
lean_ctor_set(v___x_474_, 0, v___x_476_);
v___x_478_ = v___x_474_;
goto v_reusejp_477_;
}
else
{
lean_object* v_reuseFailAlloc_480_; 
v_reuseFailAlloc_480_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_480_, 0, v___x_476_);
v___x_478_ = v_reuseFailAlloc_480_;
goto v_reusejp_477_;
}
v_reusejp_477_:
{
lean_object* v___x_479_; 
v___x_479_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_479_, 0, v___x_478_);
return v___x_479_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Std_Http_Internal_Mock_sendAll_spec__0___lam__1___boxed(lean_object* v___x_483_, lean_object* v_x_484_, lean_object* v___y_485_){
_start:
{
lean_object* v_res_486_; 
v_res_486_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Std_Http_Internal_Mock_sendAll_spec__0___lam__1(v___x_483_, v_x_484_);
return v_res_486_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Std_Http_Internal_Mock_sendAll_spec__0___lam__0___boxed(lean_object* v_i_487_, lean_object* v_sendChan_488_, lean_object* v_as_489_, lean_object* v_sz_490_, lean_object* v_x_491_, lean_object* v___y_492_){
_start:
{
size_t v_i_boxed_493_; size_t v_sz_boxed_494_; lean_object* v_res_495_; 
v_i_boxed_493_ = lean_unbox_usize(v_i_487_);
lean_dec(v_i_487_);
v_sz_boxed_494_ = lean_unbox_usize(v_sz_490_);
lean_dec(v_sz_490_);
v_res_495_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Std_Http_Internal_Mock_sendAll_spec__0___lam__0(v_i_boxed_493_, v_sendChan_488_, v_as_489_, v_sz_boxed_494_, v_x_491_);
return v_res_495_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Std_Http_Internal_Mock_sendAll_spec__0(lean_object* v_sendChan_498_, lean_object* v_as_499_, size_t v_sz_500_, size_t v_i_501_, lean_object* v_b_502_){
_start:
{
uint8_t v___x_504_; 
v___x_504_ = lean_usize_dec_lt(v_i_501_, v_sz_500_);
if (v___x_504_ == 0)
{
lean_object* v___x_505_; lean_object* v___x_506_; 
lean_dec_ref(v_as_499_);
lean_dec_ref(v_sendChan_498_);
v___x_505_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_505_, 0, v_b_502_);
v___x_506_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_506_, 0, v___x_505_);
return v___x_506_;
}
else
{
lean_object* v___x_507_; lean_object* v___x_508_; lean_object* v___f_509_; lean_object* v___f_510_; lean_object* v_a_511_; lean_object* v___x_512_; uint8_t v___x_513_; lean_object* v___x_514_; lean_object* v___x_515_; lean_object* v___x_516_; 
v___x_507_ = lean_box_usize(v_i_501_);
v___x_508_ = lean_box_usize(v_sz_500_);
lean_inc_ref(v_as_499_);
lean_inc_ref(v_sendChan_498_);
v___f_509_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Std_Http_Internal_Mock_sendAll_spec__0___lam__0___boxed), 6, 4);
lean_closure_set(v___f_509_, 0, v___x_507_);
lean_closure_set(v___f_509_, 1, v_sendChan_498_);
lean_closure_set(v___f_509_, 2, v_as_499_);
lean_closure_set(v___f_509_, 3, v___x_508_);
v___f_510_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Std_Http_Internal_Mock_sendAll_spec__0___closed__0));
v_a_511_ = lean_array_uget(v_as_499_, v_i_501_);
lean_dec_ref(v_as_499_);
v___x_512_ = lean_unsigned_to_nat(0u);
v___x_513_ = 0;
v___x_514_ = l_Std_Http_Internal_Mock_send(v_sendChan_498_, v_a_511_);
v___x_515_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_512_, v___x_513_, v___x_514_, v___f_510_);
v___x_516_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_512_, v___x_513_, v___x_515_, v___f_509_);
return v___x_516_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Std_Http_Internal_Mock_sendAll_spec__0___lam__0(size_t v_i_517_, lean_object* v_sendChan_518_, lean_object* v_as_519_, size_t v_sz_520_, lean_object* v_x_521_){
_start:
{
if (lean_obj_tag(v_x_521_) == 0)
{
lean_object* v_a_523_; lean_object* v___x_525_; uint8_t v_isShared_526_; uint8_t v_isSharedCheck_531_; 
lean_dec_ref(v_as_519_);
lean_dec_ref(v_sendChan_518_);
v_a_523_ = lean_ctor_get(v_x_521_, 0);
v_isSharedCheck_531_ = !lean_is_exclusive(v_x_521_);
if (v_isSharedCheck_531_ == 0)
{
v___x_525_ = v_x_521_;
v_isShared_526_ = v_isSharedCheck_531_;
goto v_resetjp_524_;
}
else
{
lean_inc(v_a_523_);
lean_dec(v_x_521_);
v___x_525_ = lean_box(0);
v_isShared_526_ = v_isSharedCheck_531_;
goto v_resetjp_524_;
}
v_resetjp_524_:
{
lean_object* v___x_528_; 
if (v_isShared_526_ == 0)
{
v___x_528_ = v___x_525_;
goto v_reusejp_527_;
}
else
{
lean_object* v_reuseFailAlloc_530_; 
v_reuseFailAlloc_530_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_530_, 0, v_a_523_);
v___x_528_ = v_reuseFailAlloc_530_;
goto v_reusejp_527_;
}
v_reusejp_527_:
{
lean_object* v___x_529_; 
v___x_529_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_529_, 0, v___x_528_);
return v___x_529_;
}
}
}
else
{
lean_object* v_a_532_; lean_object* v___x_534_; uint8_t v_isShared_535_; uint8_t v_isSharedCheck_551_; 
v_a_532_ = lean_ctor_get(v_x_521_, 0);
v_isSharedCheck_551_ = !lean_is_exclusive(v_x_521_);
if (v_isSharedCheck_551_ == 0)
{
v___x_534_ = v_x_521_;
v_isShared_535_ = v_isSharedCheck_551_;
goto v_resetjp_533_;
}
else
{
lean_inc(v_a_532_);
lean_dec(v_x_521_);
v___x_534_ = lean_box(0);
v_isShared_535_ = v_isSharedCheck_551_;
goto v_resetjp_533_;
}
v_resetjp_533_:
{
if (lean_obj_tag(v_a_532_) == 0)
{
lean_object* v_a_536_; lean_object* v___x_538_; uint8_t v_isShared_539_; uint8_t v_isSharedCheck_546_; 
lean_dec_ref(v_as_519_);
lean_dec_ref(v_sendChan_518_);
v_a_536_ = lean_ctor_get(v_a_532_, 0);
v_isSharedCheck_546_ = !lean_is_exclusive(v_a_532_);
if (v_isSharedCheck_546_ == 0)
{
v___x_538_ = v_a_532_;
v_isShared_539_ = v_isSharedCheck_546_;
goto v_resetjp_537_;
}
else
{
lean_inc(v_a_536_);
lean_dec(v_a_532_);
v___x_538_ = lean_box(0);
v_isShared_539_ = v_isSharedCheck_546_;
goto v_resetjp_537_;
}
v_resetjp_537_:
{
lean_object* v___x_541_; 
if (v_isShared_535_ == 0)
{
lean_ctor_set(v___x_534_, 0, v_a_536_);
v___x_541_ = v___x_534_;
goto v_reusejp_540_;
}
else
{
lean_object* v_reuseFailAlloc_545_; 
v_reuseFailAlloc_545_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_545_, 0, v_a_536_);
v___x_541_ = v_reuseFailAlloc_545_;
goto v_reusejp_540_;
}
v_reusejp_540_:
{
lean_object* v___x_543_; 
if (v_isShared_539_ == 0)
{
lean_ctor_set(v___x_538_, 0, v___x_541_);
v___x_543_ = v___x_538_;
goto v_reusejp_542_;
}
else
{
lean_object* v_reuseFailAlloc_544_; 
v_reuseFailAlloc_544_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_544_, 0, v___x_541_);
v___x_543_ = v_reuseFailAlloc_544_;
goto v_reusejp_542_;
}
v_reusejp_542_:
{
return v___x_543_;
}
}
}
}
else
{
lean_object* v_a_547_; size_t v___x_548_; size_t v___x_549_; lean_object* v___x_550_; 
lean_del_object(v___x_534_);
v_a_547_ = lean_ctor_get(v_a_532_, 0);
lean_inc(v_a_547_);
lean_dec_ref_known(v_a_532_, 1);
v___x_548_ = ((size_t)1ULL);
v___x_549_ = lean_usize_add(v_i_517_, v___x_548_);
v___x_550_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Std_Http_Internal_Mock_sendAll_spec__0(v_sendChan_518_, v_as_519_, v_sz_520_, v___x_549_, v_a_547_);
return v___x_550_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Std_Http_Internal_Mock_sendAll_spec__0___boxed(lean_object* v_sendChan_552_, lean_object* v_as_553_, lean_object* v_sz_554_, lean_object* v_i_555_, lean_object* v_b_556_, lean_object* v___y_557_){
_start:
{
size_t v_sz_boxed_558_; size_t v_i_boxed_559_; lean_object* v_res_560_; 
v_sz_boxed_558_ = lean_unbox_usize(v_sz_554_);
lean_dec(v_sz_554_);
v_i_boxed_559_ = lean_unbox_usize(v_i_555_);
lean_dec(v_i_555_);
v_res_560_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Std_Http_Internal_Mock_sendAll_spec__0(v_sendChan_552_, v_as_553_, v_sz_boxed_558_, v_i_boxed_559_, v_b_556_);
return v_res_560_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Internal_Mock_sendAll(lean_object* v_sendChan_562_, lean_object* v_data_563_){
_start:
{
lean_object* v___f_565_; lean_object* v___x_566_; size_t v_sz_567_; size_t v___x_568_; lean_object* v___x_569_; uint8_t v___x_570_; lean_object* v___x_571_; lean_object* v___x_572_; 
v___f_565_ = ((lean_object*)(l_Std_Http_Internal_Mock_sendAll___closed__0));
v___x_566_ = lean_box(0);
v_sz_567_ = lean_array_size(v_data_563_);
v___x_568_ = ((size_t)0ULL);
v___x_569_ = lean_unsigned_to_nat(0u);
v___x_570_ = 0;
v___x_571_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Std_Http_Internal_Mock_sendAll_spec__0(v_sendChan_562_, v_data_563_, v_sz_567_, v___x_568_, v___x_566_);
v___x_572_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_569_, v___x_570_, v___x_571_, v___f_565_);
return v___x_572_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Internal_Mock_sendAll___boxed(lean_object* v_sendChan_573_, lean_object* v_data_574_, lean_object* v___y_575_){
_start:
{
lean_object* v_res_576_; 
v_res_576_ = l_Std_Http_Internal_Mock_sendAll(v_sendChan_573_, v_data_574_);
return v_res_576_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Internal_Mock_recvSelector(lean_object* v_recvChan_577_){
_start:
{
lean_object* v___x_578_; 
v___x_578_ = l_Std_CloseableChannel_recvSelector___redArg(v_recvChan_577_);
return v___x_578_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Internal_Mock_Client_getRecvChan(lean_object* v_client_579_){
_start:
{
lean_object* v_serverToClient_580_; 
v_serverToClient_580_ = lean_ctor_get(v_client_579_, 1);
lean_inc_ref(v_serverToClient_580_);
return v_serverToClient_580_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Internal_Mock_Client_getRecvChan___boxed(lean_object* v_client_581_){
_start:
{
lean_object* v_res_582_; 
v_res_582_ = l_Std_Http_Internal_Mock_Client_getRecvChan(v_client_581_);
lean_dec_ref(v_client_581_);
return v_res_582_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Internal_Mock_Client_getSendChan(lean_object* v_client_583_){
_start:
{
lean_object* v_clientToServer_584_; 
v_clientToServer_584_ = lean_ctor_get(v_client_583_, 0);
lean_inc_ref(v_clientToServer_584_);
return v_clientToServer_584_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Internal_Mock_Client_getSendChan___boxed(lean_object* v_client_585_){
_start:
{
lean_object* v_res_586_; 
v_res_586_ = l_Std_Http_Internal_Mock_Client_getSendChan(v_client_585_);
lean_dec_ref(v_client_585_);
return v_res_586_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Internal_Mock_Client_send(lean_object* v_client_587_, lean_object* v_data_588_){
_start:
{
lean_object* v_clientToServer_590_; lean_object* v___x_591_; 
v_clientToServer_590_ = lean_ctor_get(v_client_587_, 0);
lean_inc_ref(v_clientToServer_590_);
lean_dec_ref(v_client_587_);
v___x_591_ = l_Std_Http_Internal_Mock_send(v_clientToServer_590_, v_data_588_);
return v___x_591_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Internal_Mock_Client_send___boxed(lean_object* v_client_592_, lean_object* v_data_593_, lean_object* v___y_594_){
_start:
{
lean_object* v_res_595_; 
v_res_595_ = l_Std_Http_Internal_Mock_Client_send(v_client_592_, v_data_593_);
return v_res_595_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Internal_Mock_Client_recv_x3f(lean_object* v_client_596_, lean_object* v_expect_597_){
_start:
{
lean_object* v_serverToClient_599_; lean_object* v___x_600_; 
v_serverToClient_599_ = lean_ctor_get(v_client_596_, 1);
lean_inc_ref(v_serverToClient_599_);
lean_dec_ref(v_client_596_);
v___x_600_ = l_Std_Http_Internal_Mock_recvJoined(v_serverToClient_599_, v_expect_597_);
return v___x_600_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Internal_Mock_Client_recv_x3f___boxed(lean_object* v_client_601_, lean_object* v_expect_602_, lean_object* v___y_603_){
_start:
{
lean_object* v_res_604_; 
v_res_604_ = l_Std_Http_Internal_Mock_Client_recv_x3f(v_client_601_, v_expect_602_);
return v_res_604_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Std_Http_Internal_Mock_Client_tryRecv_x3f_spec__0___redArg(lean_object* v___x_605_, lean_object* v_a_606_){
_start:
{
lean_object* v___x_608_; 
lean_inc_ref(v___x_605_);
v___x_608_ = l_Std_CloseableChannel_tryRecv___redArg(v___x_605_);
if (lean_obj_tag(v___x_608_) == 0)
{
lean_dec_ref(v___x_605_);
return v_a_606_;
}
else
{
lean_object* v_val_609_; lean_object* v___x_610_; lean_object* v___x_611_; lean_object* v___x_612_; uint8_t v___x_613_; lean_object* v___x_614_; 
v_val_609_ = lean_ctor_get(v___x_608_, 0);
lean_inc(v_val_609_);
lean_dec_ref_known(v___x_608_, 1);
v___x_610_ = lean_unsigned_to_nat(0u);
v___x_611_ = lean_byte_array_size(v_a_606_);
v___x_612_ = lean_byte_array_size(v_val_609_);
v___x_613_ = 0;
v___x_614_ = lean_byte_array_copy_slice(v_val_609_, v___x_610_, v_a_606_, v___x_611_, v___x_612_, v___x_613_);
lean_dec(v_val_609_);
v_a_606_ = v___x_614_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Std_Http_Internal_Mock_Client_tryRecv_x3f_spec__0___redArg___boxed(lean_object* v___x_616_, lean_object* v_a_617_, lean_object* v___y_618_){
_start:
{
lean_object* v_res_619_; 
v_res_619_ = l___private_Init_While_0__repeatM_erased___at___00Std_Http_Internal_Mock_Client_tryRecv_x3f_spec__0___redArg(v___x_616_, v_a_617_);
return v_res_619_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Internal_Mock_Client_tryRecv_x3f___redArg(lean_object* v_client_620_){
_start:
{
lean_object* v_serverToClient_622_; lean_object* v___x_623_; 
v_serverToClient_622_ = lean_ctor_get(v_client_620_, 1);
lean_inc_ref_n(v_serverToClient_622_, 2);
lean_dec_ref(v_client_620_);
v___x_623_ = l_Std_CloseableChannel_tryRecv___redArg(v_serverToClient_622_);
if (lean_obj_tag(v___x_623_) == 0)
{
lean_dec_ref(v_serverToClient_622_);
return v___x_623_;
}
else
{
lean_object* v_val_624_; lean_object* v___x_626_; uint8_t v_isShared_627_; uint8_t v_isSharedCheck_632_; 
v_val_624_ = lean_ctor_get(v___x_623_, 0);
v_isSharedCheck_632_ = !lean_is_exclusive(v___x_623_);
if (v_isSharedCheck_632_ == 0)
{
v___x_626_ = v___x_623_;
v_isShared_627_ = v_isSharedCheck_632_;
goto v_resetjp_625_;
}
else
{
lean_inc(v_val_624_);
lean_dec(v___x_623_);
v___x_626_ = lean_box(0);
v_isShared_627_ = v_isSharedCheck_632_;
goto v_resetjp_625_;
}
v_resetjp_625_:
{
lean_object* v___x_628_; lean_object* v___x_630_; 
v___x_628_ = l___private_Init_While_0__repeatM_erased___at___00Std_Http_Internal_Mock_Client_tryRecv_x3f_spec__0___redArg(v_serverToClient_622_, v_val_624_);
if (v_isShared_627_ == 0)
{
lean_ctor_set(v___x_626_, 0, v___x_628_);
v___x_630_ = v___x_626_;
goto v_reusejp_629_;
}
else
{
lean_object* v_reuseFailAlloc_631_; 
v_reuseFailAlloc_631_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_631_, 0, v___x_628_);
v___x_630_ = v_reuseFailAlloc_631_;
goto v_reusejp_629_;
}
v_reusejp_629_:
{
return v___x_630_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Internal_Mock_Client_tryRecv_x3f___redArg___boxed(lean_object* v_client_633_, lean_object* v___y_634_){
_start:
{
lean_object* v_res_635_; 
v_res_635_ = l_Std_Http_Internal_Mock_Client_tryRecv_x3f___redArg(v_client_633_);
return v_res_635_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Internal_Mock_Client_tryRecv_x3f(lean_object* v_client_636_, uint64_t v___expect_637_){
_start:
{
lean_object* v___x_639_; 
v___x_639_ = l_Std_Http_Internal_Mock_Client_tryRecv_x3f___redArg(v_client_636_);
return v___x_639_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Internal_Mock_Client_tryRecv_x3f___boxed(lean_object* v_client_640_, lean_object* v___expect_641_, lean_object* v___y_642_){
_start:
{
uint64_t v___expect_boxed_643_; lean_object* v_res_644_; 
v___expect_boxed_643_ = lean_unbox_uint64(v___expect_641_);
lean_dec_ref(v___expect_641_);
v_res_644_ = l_Std_Http_Internal_Mock_Client_tryRecv_x3f(v_client_640_, v___expect_boxed_643_);
return v_res_644_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Std_Http_Internal_Mock_Client_tryRecv_x3f_spec__0(lean_object* v___x_645_, lean_object* v_inst_646_, lean_object* v_a_647_){
_start:
{
lean_object* v___x_649_; 
v___x_649_ = l___private_Init_While_0__repeatM_erased___at___00Std_Http_Internal_Mock_Client_tryRecv_x3f_spec__0___redArg(v___x_645_, v_a_647_);
return v___x_649_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Std_Http_Internal_Mock_Client_tryRecv_x3f_spec__0___boxed(lean_object* v___x_650_, lean_object* v_inst_651_, lean_object* v_a_652_, lean_object* v___y_653_){
_start:
{
lean_object* v_res_654_; 
v_res_654_ = l___private_Init_While_0__repeatM_erased___at___00Std_Http_Internal_Mock_Client_tryRecv_x3f_spec__0(v___x_650_, v_inst_651_, v_a_652_);
return v_res_654_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Internal_Mock_Client_close(lean_object* v_client_659_){
_start:
{
lean_object* v_clientToServer_661_; lean_object* v_serverToClient_662_; uint8_t v___x_690_; 
v_clientToServer_661_ = lean_ctor_get(v_client_659_, 0);
lean_inc_ref_n(v_clientToServer_661_, 2);
v_serverToClient_662_ = lean_ctor_get(v_client_659_, 1);
lean_inc_ref(v_serverToClient_662_);
lean_dec_ref(v_client_659_);
v___x_690_ = l_Std_CloseableChannel_isClosed___redArg(v_clientToServer_661_);
if (v___x_690_ == 0)
{
lean_object* v___x_691_; 
v___x_691_ = l_Std_CloseableChannel_close___redArg(v_clientToServer_661_);
if (lean_obj_tag(v___x_691_) == 0)
{
lean_dec_ref_known(v___x_691_, 1);
goto v___jp_663_;
}
else
{
lean_object* v_a_692_; lean_object* v___x_694_; uint8_t v_isShared_695_; uint8_t v_isSharedCheck_705_; 
lean_dec_ref(v_serverToClient_662_);
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
uint8_t v___x_696_; 
v___x_696_ = lean_unbox(v_a_692_);
lean_dec(v_a_692_);
if (v___x_696_ == 0)
{
lean_object* v___x_697_; lean_object* v___x_699_; 
v___x_697_ = ((lean_object*)(l_Std_Http_Internal_Mock_Client_close___closed__0));
if (v_isShared_695_ == 0)
{
lean_ctor_set(v___x_694_, 0, v___x_697_);
v___x_699_ = v___x_694_;
goto v_reusejp_698_;
}
else
{
lean_object* v_reuseFailAlloc_700_; 
v_reuseFailAlloc_700_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_700_, 0, v___x_697_);
v___x_699_ = v_reuseFailAlloc_700_;
goto v_reusejp_698_;
}
v_reusejp_698_:
{
return v___x_699_;
}
}
else
{
lean_object* v___x_701_; lean_object* v___x_703_; 
v___x_701_ = ((lean_object*)(l_Std_Http_Internal_Mock_Client_close___closed__1));
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
else
{
lean_dec_ref(v_clientToServer_661_);
goto v___jp_663_;
}
v___jp_663_:
{
uint8_t v___x_664_; 
lean_inc_ref(v_serverToClient_662_);
v___x_664_ = l_Std_CloseableChannel_isClosed___redArg(v_serverToClient_662_);
if (v___x_664_ == 0)
{
lean_object* v___x_665_; 
v___x_665_ = l_Std_CloseableChannel_close___redArg(v_serverToClient_662_);
if (lean_obj_tag(v___x_665_) == 0)
{
lean_object* v_a_666_; lean_object* v___x_668_; uint8_t v_isShared_669_; uint8_t v_isSharedCheck_673_; 
v_a_666_ = lean_ctor_get(v___x_665_, 0);
v_isSharedCheck_673_ = !lean_is_exclusive(v___x_665_);
if (v_isSharedCheck_673_ == 0)
{
v___x_668_ = v___x_665_;
v_isShared_669_ = v_isSharedCheck_673_;
goto v_resetjp_667_;
}
else
{
lean_inc(v_a_666_);
lean_dec(v___x_665_);
v___x_668_ = lean_box(0);
v_isShared_669_ = v_isSharedCheck_673_;
goto v_resetjp_667_;
}
v_resetjp_667_:
{
lean_object* v___x_671_; 
if (v_isShared_669_ == 0)
{
v___x_671_ = v___x_668_;
goto v_reusejp_670_;
}
else
{
lean_object* v_reuseFailAlloc_672_; 
v_reuseFailAlloc_672_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_672_, 0, v_a_666_);
v___x_671_ = v_reuseFailAlloc_672_;
goto v_reusejp_670_;
}
v_reusejp_670_:
{
return v___x_671_;
}
}
}
else
{
lean_object* v_a_674_; lean_object* v___x_676_; uint8_t v_isShared_677_; uint8_t v_isSharedCheck_687_; 
v_a_674_ = lean_ctor_get(v___x_665_, 0);
v_isSharedCheck_687_ = !lean_is_exclusive(v___x_665_);
if (v_isSharedCheck_687_ == 0)
{
v___x_676_ = v___x_665_;
v_isShared_677_ = v_isSharedCheck_687_;
goto v_resetjp_675_;
}
else
{
lean_inc(v_a_674_);
lean_dec(v___x_665_);
v___x_676_ = lean_box(0);
v_isShared_677_ = v_isSharedCheck_687_;
goto v_resetjp_675_;
}
v_resetjp_675_:
{
uint8_t v___x_678_; 
v___x_678_ = lean_unbox(v_a_674_);
lean_dec(v_a_674_);
if (v___x_678_ == 0)
{
lean_object* v___x_679_; lean_object* v___x_681_; 
v___x_679_ = ((lean_object*)(l_Std_Http_Internal_Mock_Client_close___closed__0));
if (v_isShared_677_ == 0)
{
lean_ctor_set(v___x_676_, 0, v___x_679_);
v___x_681_ = v___x_676_;
goto v_reusejp_680_;
}
else
{
lean_object* v_reuseFailAlloc_682_; 
v_reuseFailAlloc_682_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_682_, 0, v___x_679_);
v___x_681_ = v_reuseFailAlloc_682_;
goto v_reusejp_680_;
}
v_reusejp_680_:
{
return v___x_681_;
}
}
else
{
lean_object* v___x_683_; lean_object* v___x_685_; 
v___x_683_ = ((lean_object*)(l_Std_Http_Internal_Mock_Client_close___closed__1));
if (v_isShared_677_ == 0)
{
lean_ctor_set(v___x_676_, 0, v___x_683_);
v___x_685_ = v___x_676_;
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
else
{
lean_object* v___x_688_; lean_object* v___x_689_; 
lean_dec_ref(v_serverToClient_662_);
v___x_688_ = lean_box(0);
v___x_689_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_689_, 0, v___x_688_);
return v___x_689_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Internal_Mock_Client_close___boxed(lean_object* v_client_706_, lean_object* v___y_707_){
_start:
{
lean_object* v_res_708_; 
v_res_708_ = l_Std_Http_Internal_Mock_Client_close(v_client_706_);
return v_res_708_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Internal_Mock_Server_getRecvChan(lean_object* v_server_709_){
_start:
{
lean_object* v_clientToServer_710_; 
v_clientToServer_710_ = lean_ctor_get(v_server_709_, 0);
lean_inc_ref(v_clientToServer_710_);
return v_clientToServer_710_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Internal_Mock_Server_getRecvChan___boxed(lean_object* v_server_711_){
_start:
{
lean_object* v_res_712_; 
v_res_712_ = l_Std_Http_Internal_Mock_Server_getRecvChan(v_server_711_);
lean_dec_ref(v_server_711_);
return v_res_712_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Internal_Mock_Server_getSendChan(lean_object* v_server_713_){
_start:
{
lean_object* v_serverToClient_714_; 
v_serverToClient_714_ = lean_ctor_get(v_server_713_, 1);
lean_inc_ref(v_serverToClient_714_);
return v_serverToClient_714_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Internal_Mock_Server_getSendChan___boxed(lean_object* v_server_715_){
_start:
{
lean_object* v_res_716_; 
v_res_716_ = l_Std_Http_Internal_Mock_Server_getSendChan(v_server_715_);
lean_dec_ref(v_server_715_);
return v_res_716_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Internal_Mock_Server_send(lean_object* v_server_717_, lean_object* v_data_718_){
_start:
{
lean_object* v_serverToClient_720_; lean_object* v___x_721_; 
v_serverToClient_720_ = lean_ctor_get(v_server_717_, 1);
lean_inc_ref(v_serverToClient_720_);
lean_dec_ref(v_server_717_);
v___x_721_ = l_Std_Http_Internal_Mock_send(v_serverToClient_720_, v_data_718_);
return v___x_721_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Internal_Mock_Server_send___boxed(lean_object* v_server_722_, lean_object* v_data_723_, lean_object* v___y_724_){
_start:
{
lean_object* v_res_725_; 
v_res_725_ = l_Std_Http_Internal_Mock_Server_send(v_server_722_, v_data_723_);
return v_res_725_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Internal_Mock_Server_recv_x3f(lean_object* v_server_726_, lean_object* v_expect_727_){
_start:
{
lean_object* v_clientToServer_729_; lean_object* v___x_730_; 
v_clientToServer_729_ = lean_ctor_get(v_server_726_, 0);
lean_inc_ref(v_clientToServer_729_);
lean_dec_ref(v_server_726_);
v___x_730_ = l_Std_Http_Internal_Mock_recvJoined(v_clientToServer_729_, v_expect_727_);
return v___x_730_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Internal_Mock_Server_recv_x3f___boxed(lean_object* v_server_731_, lean_object* v_expect_732_, lean_object* v___y_733_){
_start:
{
lean_object* v_res_734_; 
v_res_734_ = l_Std_Http_Internal_Mock_Server_recv_x3f(v_server_731_, v_expect_732_);
return v_res_734_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Internal_Mock_Server_tryRecv_x3f___redArg(lean_object* v_server_735_){
_start:
{
lean_object* v_clientToServer_737_; lean_object* v___x_738_; 
v_clientToServer_737_ = lean_ctor_get(v_server_735_, 0);
lean_inc_ref_n(v_clientToServer_737_, 2);
lean_dec_ref(v_server_735_);
v___x_738_ = l_Std_CloseableChannel_tryRecv___redArg(v_clientToServer_737_);
if (lean_obj_tag(v___x_738_) == 0)
{
lean_dec_ref(v_clientToServer_737_);
return v___x_738_;
}
else
{
lean_object* v_val_739_; lean_object* v___x_741_; uint8_t v_isShared_742_; uint8_t v_isSharedCheck_747_; 
v_val_739_ = lean_ctor_get(v___x_738_, 0);
v_isSharedCheck_747_ = !lean_is_exclusive(v___x_738_);
if (v_isSharedCheck_747_ == 0)
{
v___x_741_ = v___x_738_;
v_isShared_742_ = v_isSharedCheck_747_;
goto v_resetjp_740_;
}
else
{
lean_inc(v_val_739_);
lean_dec(v___x_738_);
v___x_741_ = lean_box(0);
v_isShared_742_ = v_isSharedCheck_747_;
goto v_resetjp_740_;
}
v_resetjp_740_:
{
lean_object* v___x_743_; lean_object* v___x_745_; 
v___x_743_ = l___private_Init_While_0__repeatM_erased___at___00Std_Http_Internal_Mock_Client_tryRecv_x3f_spec__0___redArg(v_clientToServer_737_, v_val_739_);
if (v_isShared_742_ == 0)
{
lean_ctor_set(v___x_741_, 0, v___x_743_);
v___x_745_ = v___x_741_;
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
LEAN_EXPORT lean_object* l_Std_Http_Internal_Mock_Server_tryRecv_x3f___redArg___boxed(lean_object* v_server_748_, lean_object* v___y_749_){
_start:
{
lean_object* v_res_750_; 
v_res_750_ = l_Std_Http_Internal_Mock_Server_tryRecv_x3f___redArg(v_server_748_);
return v_res_750_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Internal_Mock_Server_tryRecv_x3f(lean_object* v_server_751_, uint64_t v___expect_752_){
_start:
{
lean_object* v___x_754_; 
v___x_754_ = l_Std_Http_Internal_Mock_Server_tryRecv_x3f___redArg(v_server_751_);
return v___x_754_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Internal_Mock_Server_tryRecv_x3f___boxed(lean_object* v_server_755_, lean_object* v___expect_756_, lean_object* v___y_757_){
_start:
{
uint64_t v___expect_boxed_758_; lean_object* v_res_759_; 
v___expect_boxed_758_ = lean_unbox_uint64(v___expect_756_);
lean_dec_ref(v___expect_756_);
v_res_759_ = l_Std_Http_Internal_Mock_Server_tryRecv_x3f(v_server_755_, v___expect_boxed_758_);
return v_res_759_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Internal_Mock_Server_close(lean_object* v_server_760_){
_start:
{
lean_object* v_clientToServer_762_; lean_object* v_serverToClient_763_; uint8_t v___x_791_; 
v_clientToServer_762_ = lean_ctor_get(v_server_760_, 0);
lean_inc_ref_n(v_clientToServer_762_, 2);
v_serverToClient_763_ = lean_ctor_get(v_server_760_, 1);
lean_inc_ref(v_serverToClient_763_);
lean_dec_ref(v_server_760_);
v___x_791_ = l_Std_CloseableChannel_isClosed___redArg(v_clientToServer_762_);
if (v___x_791_ == 0)
{
lean_object* v___x_792_; 
v___x_792_ = l_Std_CloseableChannel_close___redArg(v_clientToServer_762_);
if (lean_obj_tag(v___x_792_) == 0)
{
lean_dec_ref_known(v___x_792_, 1);
goto v___jp_764_;
}
else
{
lean_object* v_a_793_; lean_object* v___x_795_; uint8_t v_isShared_796_; uint8_t v_isSharedCheck_806_; 
lean_dec_ref(v_serverToClient_763_);
v_a_793_ = lean_ctor_get(v___x_792_, 0);
v_isSharedCheck_806_ = !lean_is_exclusive(v___x_792_);
if (v_isSharedCheck_806_ == 0)
{
v___x_795_ = v___x_792_;
v_isShared_796_ = v_isSharedCheck_806_;
goto v_resetjp_794_;
}
else
{
lean_inc(v_a_793_);
lean_dec(v___x_792_);
v___x_795_ = lean_box(0);
v_isShared_796_ = v_isSharedCheck_806_;
goto v_resetjp_794_;
}
v_resetjp_794_:
{
uint8_t v___x_797_; 
v___x_797_ = lean_unbox(v_a_793_);
lean_dec(v_a_793_);
if (v___x_797_ == 0)
{
lean_object* v___x_798_; lean_object* v___x_800_; 
v___x_798_ = ((lean_object*)(l_Std_Http_Internal_Mock_Client_close___closed__0));
if (v_isShared_796_ == 0)
{
lean_ctor_set(v___x_795_, 0, v___x_798_);
v___x_800_ = v___x_795_;
goto v_reusejp_799_;
}
else
{
lean_object* v_reuseFailAlloc_801_; 
v_reuseFailAlloc_801_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_801_, 0, v___x_798_);
v___x_800_ = v_reuseFailAlloc_801_;
goto v_reusejp_799_;
}
v_reusejp_799_:
{
return v___x_800_;
}
}
else
{
lean_object* v___x_802_; lean_object* v___x_804_; 
v___x_802_ = ((lean_object*)(l_Std_Http_Internal_Mock_Client_close___closed__1));
if (v_isShared_796_ == 0)
{
lean_ctor_set(v___x_795_, 0, v___x_802_);
v___x_804_ = v___x_795_;
goto v_reusejp_803_;
}
else
{
lean_object* v_reuseFailAlloc_805_; 
v_reuseFailAlloc_805_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_805_, 0, v___x_802_);
v___x_804_ = v_reuseFailAlloc_805_;
goto v_reusejp_803_;
}
v_reusejp_803_:
{
return v___x_804_;
}
}
}
}
}
else
{
lean_dec_ref(v_clientToServer_762_);
goto v___jp_764_;
}
v___jp_764_:
{
uint8_t v___x_765_; 
lean_inc_ref(v_serverToClient_763_);
v___x_765_ = l_Std_CloseableChannel_isClosed___redArg(v_serverToClient_763_);
if (v___x_765_ == 0)
{
lean_object* v___x_766_; 
v___x_766_ = l_Std_CloseableChannel_close___redArg(v_serverToClient_763_);
if (lean_obj_tag(v___x_766_) == 0)
{
lean_object* v_a_767_; lean_object* v___x_769_; uint8_t v_isShared_770_; uint8_t v_isSharedCheck_774_; 
v_a_767_ = lean_ctor_get(v___x_766_, 0);
v_isSharedCheck_774_ = !lean_is_exclusive(v___x_766_);
if (v_isSharedCheck_774_ == 0)
{
v___x_769_ = v___x_766_;
v_isShared_770_ = v_isSharedCheck_774_;
goto v_resetjp_768_;
}
else
{
lean_inc(v_a_767_);
lean_dec(v___x_766_);
v___x_769_ = lean_box(0);
v_isShared_770_ = v_isSharedCheck_774_;
goto v_resetjp_768_;
}
v_resetjp_768_:
{
lean_object* v___x_772_; 
if (v_isShared_770_ == 0)
{
v___x_772_ = v___x_769_;
goto v_reusejp_771_;
}
else
{
lean_object* v_reuseFailAlloc_773_; 
v_reuseFailAlloc_773_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_773_, 0, v_a_767_);
v___x_772_ = v_reuseFailAlloc_773_;
goto v_reusejp_771_;
}
v_reusejp_771_:
{
return v___x_772_;
}
}
}
else
{
lean_object* v_a_775_; lean_object* v___x_777_; uint8_t v_isShared_778_; uint8_t v_isSharedCheck_788_; 
v_a_775_ = lean_ctor_get(v___x_766_, 0);
v_isSharedCheck_788_ = !lean_is_exclusive(v___x_766_);
if (v_isSharedCheck_788_ == 0)
{
v___x_777_ = v___x_766_;
v_isShared_778_ = v_isSharedCheck_788_;
goto v_resetjp_776_;
}
else
{
lean_inc(v_a_775_);
lean_dec(v___x_766_);
v___x_777_ = lean_box(0);
v_isShared_778_ = v_isSharedCheck_788_;
goto v_resetjp_776_;
}
v_resetjp_776_:
{
uint8_t v___x_779_; 
v___x_779_ = lean_unbox(v_a_775_);
lean_dec(v_a_775_);
if (v___x_779_ == 0)
{
lean_object* v___x_780_; lean_object* v___x_782_; 
v___x_780_ = ((lean_object*)(l_Std_Http_Internal_Mock_Client_close___closed__0));
if (v_isShared_778_ == 0)
{
lean_ctor_set(v___x_777_, 0, v___x_780_);
v___x_782_ = v___x_777_;
goto v_reusejp_781_;
}
else
{
lean_object* v_reuseFailAlloc_783_; 
v_reuseFailAlloc_783_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_783_, 0, v___x_780_);
v___x_782_ = v_reuseFailAlloc_783_;
goto v_reusejp_781_;
}
v_reusejp_781_:
{
return v___x_782_;
}
}
else
{
lean_object* v___x_784_; lean_object* v___x_786_; 
v___x_784_ = ((lean_object*)(l_Std_Http_Internal_Mock_Client_close___closed__1));
if (v_isShared_778_ == 0)
{
lean_ctor_set(v___x_777_, 0, v___x_784_);
v___x_786_ = v___x_777_;
goto v_reusejp_785_;
}
else
{
lean_object* v_reuseFailAlloc_787_; 
v_reuseFailAlloc_787_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_787_, 0, v___x_784_);
v___x_786_ = v_reuseFailAlloc_787_;
goto v_reusejp_785_;
}
v_reusejp_785_:
{
return v___x_786_;
}
}
}
}
}
else
{
lean_object* v___x_789_; lean_object* v___x_790_; 
lean_dec_ref(v_serverToClient_763_);
v___x_789_ = lean_box(0);
v___x_790_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_790_, 0, v___x_789_);
return v___x_790_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Internal_Mock_Server_close___boxed(lean_object* v_server_807_, lean_object* v___y_808_){
_start:
{
lean_object* v_res_809_; 
v_res_809_ = l_Std_Http_Internal_Mock_Server_close(v_server_807_);
return v_res_809_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Internal_instTransportClient___lam__0(lean_object* v_client_810_, uint64_t v_expect_811_){
_start:
{
lean_object* v_serverToClient_813_; lean_object* v___x_814_; lean_object* v___x_815_; lean_object* v___x_816_; 
v_serverToClient_813_ = lean_ctor_get(v_client_810_, 1);
lean_inc_ref(v_serverToClient_813_);
lean_dec_ref(v_client_810_);
v___x_814_ = lean_box_uint64(v_expect_811_);
v___x_815_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_815_, 0, v___x_814_);
v___x_816_ = l_Std_Http_Internal_Mock_recvJoined(v_serverToClient_813_, v___x_815_);
return v___x_816_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Internal_instTransportClient___lam__0___boxed(lean_object* v_client_817_, lean_object* v_expect_818_, lean_object* v___y_819_){
_start:
{
uint64_t v_expect_boxed_820_; lean_object* v_res_821_; 
v_expect_boxed_820_ = lean_unbox_uint64(v_expect_818_);
lean_dec_ref(v_expect_818_);
v_res_821_ = l_Std_Http_Internal_instTransportClient___lam__0(v_client_817_, v_expect_boxed_820_);
return v_res_821_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Internal_instTransportClient___lam__1(lean_object* v_client_822_, lean_object* v_data_823_){
_start:
{
lean_object* v_clientToServer_825_; lean_object* v___x_826_; 
v_clientToServer_825_ = lean_ctor_get(v_client_822_, 0);
lean_inc_ref(v_clientToServer_825_);
lean_dec_ref(v_client_822_);
v___x_826_ = l_Std_Http_Internal_Mock_sendAll(v_clientToServer_825_, v_data_823_);
return v___x_826_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Internal_instTransportClient___lam__1___boxed(lean_object* v_client_827_, lean_object* v_data_828_, lean_object* v___y_829_){
_start:
{
lean_object* v_res_830_; 
v_res_830_ = l_Std_Http_Internal_instTransportClient___lam__1(v_client_827_, v_data_828_);
return v_res_830_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Internal_instTransportClient___lam__2(lean_object* v_client_831_, uint64_t v_x_832_){
_start:
{
lean_object* v_serverToClient_833_; lean_object* v___x_834_; 
v_serverToClient_833_ = lean_ctor_get(v_client_831_, 1);
lean_inc_ref(v_serverToClient_833_);
lean_dec_ref(v_client_831_);
v___x_834_ = l_Std_CloseableChannel_recvSelector___redArg(v_serverToClient_833_);
return v___x_834_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Internal_instTransportClient___lam__2___boxed(lean_object* v_client_835_, lean_object* v_x_836_){
_start:
{
uint64_t v_x_44__boxed_837_; lean_object* v_res_838_; 
v_x_44__boxed_837_ = lean_unbox_uint64(v_x_836_);
lean_dec_ref(v_x_836_);
v_res_838_ = l_Std_Http_Internal_instTransportClient___lam__2(v_client_835_, v_x_44__boxed_837_);
return v_res_838_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Internal_instTransportServer___lam__0(lean_object* v_server_849_, uint64_t v_expect_850_){
_start:
{
lean_object* v_clientToServer_852_; lean_object* v___x_853_; lean_object* v___x_854_; lean_object* v___x_855_; 
v_clientToServer_852_ = lean_ctor_get(v_server_849_, 0);
lean_inc_ref(v_clientToServer_852_);
lean_dec_ref(v_server_849_);
v___x_853_ = lean_box_uint64(v_expect_850_);
v___x_854_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_854_, 0, v___x_853_);
v___x_855_ = l_Std_Http_Internal_Mock_recvJoined(v_clientToServer_852_, v___x_854_);
return v___x_855_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Internal_instTransportServer___lam__0___boxed(lean_object* v_server_856_, lean_object* v_expect_857_, lean_object* v___y_858_){
_start:
{
uint64_t v_expect_boxed_859_; lean_object* v_res_860_; 
v_expect_boxed_859_ = lean_unbox_uint64(v_expect_857_);
lean_dec_ref(v_expect_857_);
v_res_860_ = l_Std_Http_Internal_instTransportServer___lam__0(v_server_856_, v_expect_boxed_859_);
return v_res_860_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Internal_instTransportServer___lam__1(lean_object* v_server_861_, lean_object* v_data_862_){
_start:
{
lean_object* v_serverToClient_864_; lean_object* v___x_865_; 
v_serverToClient_864_ = lean_ctor_get(v_server_861_, 1);
lean_inc_ref(v_serverToClient_864_);
lean_dec_ref(v_server_861_);
v___x_865_ = l_Std_Http_Internal_Mock_sendAll(v_serverToClient_864_, v_data_862_);
return v___x_865_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Internal_instTransportServer___lam__1___boxed(lean_object* v_server_866_, lean_object* v_data_867_, lean_object* v___y_868_){
_start:
{
lean_object* v_res_869_; 
v_res_869_ = l_Std_Http_Internal_instTransportServer___lam__1(v_server_866_, v_data_867_);
return v_res_869_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Internal_instTransportServer___lam__2(lean_object* v_server_870_, uint64_t v_x_871_){
_start:
{
lean_object* v_clientToServer_872_; lean_object* v___x_873_; 
v_clientToServer_872_ = lean_ctor_get(v_server_870_, 0);
lean_inc_ref(v_clientToServer_872_);
lean_dec_ref(v_server_870_);
v___x_873_ = l_Std_CloseableChannel_recvSelector___redArg(v_clientToServer_872_);
return v___x_873_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Internal_instTransportServer___lam__2___boxed(lean_object* v_server_874_, lean_object* v_x_875_){
_start:
{
uint64_t v_x_44__boxed_876_; lean_object* v_res_877_; 
v_x_44__boxed_876_ = lean_unbox_uint64(v_x_875_);
lean_dec_ref(v_x_875_);
v_res_877_ = l_Std_Http_Internal_instTransportServer___lam__2(v_server_874_, v_x_44__boxed_876_);
return v_res_877_;
}
}
lean_object* runtime_initialize_Std_Http_Protocol_H1(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Std_Http_Transport(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Std_Http_Protocol_H1(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Std_Http_Transport(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Std_Http_Protocol_H1(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Std_Http_Transport(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Std_Http_Protocol_H1(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Http_Transport(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Std_Http_Transport(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Std_Http_Transport(builtin);
}
#ifdef __cplusplus
}
#endif
