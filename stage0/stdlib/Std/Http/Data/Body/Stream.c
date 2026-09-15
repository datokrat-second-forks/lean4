// Lean compiler output
// Module: Std.Http.Data.Body.Stream
// Imports: public import Std.Sync public import Std.Async public import Std.Http.Data.Request public import Std.Http.Data.Response public import Std.Http.Data.Chunk public import Std.Http.Data.Body.Basic public import Std.Http.Data.Body.Any public import Init.Data.ByteArray
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
lean_object* lean_st_ref_swap(lean_object*, lean_object*);
lean_object* l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* lean_io_promise_resolve(lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* lean_io_basemutex_unlock(lean_object*);
lean_object* lean_io_basemutex_lock(lean_object*);
lean_object* l_Std_Async_EAsync_tryFinally_x27___redArg(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* lean_task_map(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Std_Mutex_new___redArg(lean_object*);
lean_object* lean_byte_array_size(lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_task_pure(lean_object*);
lean_object* lean_io_promise_new();
lean_object* lean_io_promise_result_opt(lean_object*);
lean_object* l_Std_Http_Response_Builder_body___redArg(lean_object*, lean_object*);
lean_object* lean_io_as_task(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Std_Async_Selectable_one___redArg(lean_object*);
lean_object* l_ST_Prim_Ref_set___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ST_Prim_Ref_get___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_CancellationToken_selector(lean_object*);
lean_object* l_Std_Async_EAsync_instMonadLiftBaseAsync___redArg();
lean_object* l_Std_Async_BaseAsync_lift___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_IO_instMonadLiftSTRealWorldBaseIO___lam__0___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadLiftT___redArg___lam__0___boxed(lean_object*, lean_object*);
lean_object* l_instMonadLiftTOfMonadLift___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateRefT_x27_get___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_Async_EAsync_instMonad___redArg();
lean_object* l_ReaderT_bind___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint64_t lean_uint64_of_nat(lean_object*);
uint64_t lean_uint64_add(uint64_t, uint64_t);
uint8_t lean_uint64_dec_lt(uint64_t, uint64_t);
lean_object* l_IO_Promise_resolve___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_Async_EAsync_instMonadFinally___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_Mutex_atomically___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_Http_Request_Builder_body___redArg(lean_object*, lean_object*);
lean_object* l_Std_Http_Body_Any_ofBody(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_Http_Body_Any_ofBody___redArg(lean_object*, lean_object*);
uint8_t l_ByteArray_isEmpty(lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_byte_array_copy_slice(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* lean_uint64_to_nat(uint64_t);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* l_Std_Http_Chunk_ofByteArray(lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_ByteArray_empty;
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_Consumer_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_Consumer_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_Consumer_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_Consumer_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_Consumer_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_Consumer_normal_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_Consumer_normal_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_Consumer_select_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_Consumer_select_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_Async_Waiter_race___at___00__private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_Consumer_resolve_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Waiter_race___at___00__private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_Consumer_resolve_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_Consumer_resolve___lam__0(uint8_t);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_Consumer_resolve___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_Consumer_resolve___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_Consumer_resolve___lam__0___boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_Consumer_resolve___closed__0 = (const lean_object*)&l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_Consumer_resolve___closed__0_value;
LEAN_EXPORT uint8_t l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_Consumer_resolve(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_Consumer_resolve___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_Async_Waiter_race___at___00__private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_resolveInterestWaiter_spec__0(uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Waiter_race___at___00__private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_resolveInterestWaiter_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_resolveInterestWaiter(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_resolveInterestWaiter___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Std_Http_Body_instImpl___closed__0_00___x40_Std_Http_Data_Body_Stream_2871211244____hygCtx___hyg_19__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Std"};
static const lean_object* l_Std_Http_Body_instImpl___closed__0_00___x40_Std_Http_Data_Body_Stream_2871211244____hygCtx___hyg_19_ = (const lean_object*)&l_Std_Http_Body_instImpl___closed__0_00___x40_Std_Http_Data_Body_Stream_2871211244____hygCtx___hyg_19__value;
static const lean_string_object l_Std_Http_Body_instImpl___closed__1_00___x40_Std_Http_Data_Body_Stream_2871211244____hygCtx___hyg_19__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Http"};
static const lean_object* l_Std_Http_Body_instImpl___closed__1_00___x40_Std_Http_Data_Body_Stream_2871211244____hygCtx___hyg_19_ = (const lean_object*)&l_Std_Http_Body_instImpl___closed__1_00___x40_Std_Http_Data_Body_Stream_2871211244____hygCtx___hyg_19__value;
static const lean_string_object l_Std_Http_Body_instImpl___closed__2_00___x40_Std_Http_Data_Body_Stream_2871211244____hygCtx___hyg_19__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Body"};
static const lean_object* l_Std_Http_Body_instImpl___closed__2_00___x40_Std_Http_Data_Body_Stream_2871211244____hygCtx___hyg_19_ = (const lean_object*)&l_Std_Http_Body_instImpl___closed__2_00___x40_Std_Http_Data_Body_Stream_2871211244____hygCtx___hyg_19__value;
static const lean_string_object l_Std_Http_Body_instImpl___closed__3_00___x40_Std_Http_Data_Body_Stream_2871211244____hygCtx___hyg_19__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Stream"};
static const lean_object* l_Std_Http_Body_instImpl___closed__3_00___x40_Std_Http_Data_Body_Stream_2871211244____hygCtx___hyg_19_ = (const lean_object*)&l_Std_Http_Body_instImpl___closed__3_00___x40_Std_Http_Data_Body_Stream_2871211244____hygCtx___hyg_19__value;
static const lean_ctor_object l_Std_Http_Body_instImpl___closed__4_00___x40_Std_Http_Data_Body_Stream_2871211244____hygCtx___hyg_19__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Http_Body_instImpl___closed__0_00___x40_Std_Http_Data_Body_Stream_2871211244____hygCtx___hyg_19__value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Std_Http_Body_instImpl___closed__4_00___x40_Std_Http_Data_Body_Stream_2871211244____hygCtx___hyg_19__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Http_Body_instImpl___closed__4_00___x40_Std_Http_Data_Body_Stream_2871211244____hygCtx___hyg_19__value_aux_0),((lean_object*)&l_Std_Http_Body_instImpl___closed__1_00___x40_Std_Http_Data_Body_Stream_2871211244____hygCtx___hyg_19__value),LEAN_SCALAR_PTR_LITERAL(62, 74, 245, 198, 196, 207, 141, 173)}};
static const lean_ctor_object l_Std_Http_Body_instImpl___closed__4_00___x40_Std_Http_Data_Body_Stream_2871211244____hygCtx___hyg_19__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Http_Body_instImpl___closed__4_00___x40_Std_Http_Data_Body_Stream_2871211244____hygCtx___hyg_19__value_aux_1),((lean_object*)&l_Std_Http_Body_instImpl___closed__2_00___x40_Std_Http_Data_Body_Stream_2871211244____hygCtx___hyg_19__value),LEAN_SCALAR_PTR_LITERAL(80, 237, 62, 34, 135, 9, 103, 192)}};
static const lean_ctor_object l_Std_Http_Body_instImpl___closed__4_00___x40_Std_Http_Data_Body_Stream_2871211244____hygCtx___hyg_19__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Http_Body_instImpl___closed__4_00___x40_Std_Http_Data_Body_Stream_2871211244____hygCtx___hyg_19__value_aux_2),((lean_object*)&l_Std_Http_Body_instImpl___closed__3_00___x40_Std_Http_Data_Body_Stream_2871211244____hygCtx___hyg_19__value),LEAN_SCALAR_PTR_LITERAL(35, 197, 133, 196, 74, 182, 137, 145)}};
static const lean_object* l_Std_Http_Body_instImpl___closed__4_00___x40_Std_Http_Data_Body_Stream_2871211244____hygCtx___hyg_19_ = (const lean_object*)&l_Std_Http_Body_instImpl___closed__4_00___x40_Std_Http_Data_Body_Stream_2871211244____hygCtx___hyg_19__value;
LEAN_EXPORT const lean_object* l_Std_Http_Body_instImpl_00___x40_Std_Http_Data_Body_Stream_2871211244____hygCtx___hyg_19_ = (const lean_object*)&l_Std_Http_Body_instImpl___closed__4_00___x40_Std_Http_Data_Body_Stream_2871211244____hygCtx___hyg_19__value;
LEAN_EXPORT const lean_object* l_Std_Http_Body_instTypeNameStream = (const lean_object*)&l_Std_Http_Body_instImpl___closed__4_00___x40_Std_Http_Data_Body_Stream_2871211244____hygCtx___hyg_19__value;
LEAN_EXPORT lean_object* l_Std_Http_Body_mkStream___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_mkStream___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_Http_Body_mkStream___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_Body_mkStream___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_Body_mkStream___closed__0 = (const lean_object*)&l_Std_Http_Body_mkStream___closed__0_value;
static const lean_ctor_object l_Std_Http_Body_mkStream___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*6 + 8, .m_other = 6, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Std_Http_Body_mkStream___closed__1 = (const lean_object*)&l_Std_Http_Body_mkStream___closed__1_value;
LEAN_EXPORT lean_object* l_Std_Http_Body_mkStream();
LEAN_EXPORT lean_object* l_Std_Http_Body_mkStream___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_decreaseKnownSize(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_decreaseKnownSize___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___redArg___lam__0(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___redArg___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___redArg___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___redArg___lam__2(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___redArg___lam__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___redArg___lam__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___redArg___lam__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___redArg___lam__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___redArg___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_signalInterest___redArg___lam__0(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_signalInterest___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_signalInterest___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_signalInterest___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_signalInterest___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_signalInterest___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_signalInterest(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_signalInterest___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReady_x27___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReady_x27___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReady_x27___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReady_x27___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReady_x27(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReady_x27___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_hasInterest_x27___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_hasInterest_x27___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_hasInterest_x27___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_hasInterest_x27___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_hasInterest_x27(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_hasInterest_x27___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_tryRecv_x27___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_tryRecv_x27___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_tryRecv_x27___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_tryRecv_x27___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_tryRecv_x27___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_tryRecv_x27___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_tryRecv_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_tryRecv_x27___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___redArg___lam__0___closed__0 = (const lean_object*)&l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___redArg___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___redArg___lam__0(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___redArg___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___redArg___lam__2(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___redArg___lam__4(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___redArg___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___redArg___lam__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___redArg___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__0___closed__0 = (const lean_object*)&l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__0___closed__0_value;
static const lean_ctor_object l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__0___closed__0_value)}};
static const lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__0___closed__1 = (const lean_object*)&l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__0(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__4___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__4___closed__0 = (const lean_object*)&l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__4___closed__0_value;
static const lean_ctor_object l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__4___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__4___closed__0_value)}};
static const lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__4___closed__1 = (const lean_object*)&l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__4___closed__1_value;
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__2(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__7___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__7___closed__0 = (const lean_object*)&l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__7___closed__0_value;
static const lean_ctor_object l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__7___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__7___closed__0_value)}};
static const lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__7___closed__1 = (const lean_object*)&l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__7___closed__1_value;
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__7(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__5___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00Std_Http_Body_Stream_tryRecv_spec__2___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00Std_Http_Body_Stream_tryRecv_spec__2___redArg___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00Std_Http_Body_Stream_tryRecv_spec__2___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00Std_Http_Body_Stream_tryRecv_spec__2___redArg___lam__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00Std_Http_Body_Stream_tryRecv_spec__2___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00Std_Http_Body_Stream_tryRecv_spec__2___redArg___lam__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00Std_Http_Body_Stream_tryRecv_spec__2___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Mutex_atomically___at___00Std_Http_Body_Stream_tryRecv_spec__2___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Mutex_atomically___at___00Std_Http_Body_Stream_tryRecv_spec__2___redArg___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Mutex_atomically___at___00Std_Http_Body_Stream_tryRecv_spec__2___redArg___closed__0 = (const lean_object*)&l_Std_Mutex_atomically___at___00Std_Http_Body_Stream_tryRecv_spec__2___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00Std_Http_Body_Stream_tryRecv_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00Std_Http_Body_Stream_tryRecv_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00Std_Http_Body_Stream_tryRecv_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00Std_Http_Body_Stream_tryRecv_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_tryRecv___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_tryRecv___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___at___00Std_Http_Body_Stream_tryRecv_spec__0___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___at___00Std_Http_Body_Stream_tryRecv_spec__0___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___at___00Std_Http_Body_Stream_tryRecv_spec__0___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___redArg___lam__0___closed__0_value)}};
static const lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___at___00Std_Http_Body_Stream_tryRecv_spec__0___lam__0___closed__0 = (const lean_object*)&l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___at___00Std_Http_Body_Stream_tryRecv_spec__0___lam__0___closed__0_value;
static const lean_ctor_object l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___at___00Std_Http_Body_Stream_tryRecv_spec__0___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___at___00Std_Http_Body_Stream_tryRecv_spec__0___lam__0___closed__0_value)}};
static const lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___at___00Std_Http_Body_Stream_tryRecv_spec__0___lam__0___closed__1 = (const lean_object*)&l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___at___00Std_Http_Body_Stream_tryRecv_spec__0___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___at___00Std_Http_Body_Stream_tryRecv_spec__0___lam__0(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___at___00Std_Http_Body_Stream_tryRecv_spec__0___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_tryRecv_x27___at___00__private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___at___00Std_Http_Body_Stream_tryRecv_spec__0_spec__0___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_tryRecv_x27___at___00__private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___at___00Std_Http_Body_Stream_tryRecv_spec__0_spec__0___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_tryRecv_x27___at___00__private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___at___00Std_Http_Body_Stream_tryRecv_spec__0_spec__0___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_tryRecv_x27___at___00__private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___at___00Std_Http_Body_Stream_tryRecv_spec__0_spec__0___lam__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_tryRecv_x27___at___00__private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___at___00Std_Http_Body_Stream_tryRecv_spec__0_spec__0___lam__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___redArg___lam__0___closed__0_value)}};
static const lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_tryRecv_x27___at___00__private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___at___00Std_Http_Body_Stream_tryRecv_spec__0_spec__0___lam__2___closed__0 = (const lean_object*)&l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_tryRecv_x27___at___00__private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___at___00Std_Http_Body_Stream_tryRecv_spec__0_spec__0___lam__2___closed__0_value;
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_tryRecv_x27___at___00__private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___at___00Std_Http_Body_Stream_tryRecv_spec__0_spec__0___lam__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_tryRecv_x27___at___00__private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___at___00Std_Http_Body_Stream_tryRecv_spec__0_spec__0___lam__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_tryRecv_x27___at___00__private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___at___00Std_Http_Body_Stream_tryRecv_spec__0_spec__0(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_tryRecv_x27___at___00__private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___at___00Std_Http_Body_Stream_tryRecv_spec__0_spec__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___at___00Std_Http_Body_Stream_tryRecv_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___at___00Std_Http_Body_Stream_tryRecv_spec__0___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___at___00Std_Http_Body_Stream_tryRecv_spec__0___closed__0 = (const lean_object*)&l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___at___00Std_Http_Body_Stream_tryRecv_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___at___00Std_Http_Body_Stream_tryRecv_spec__0(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___at___00Std_Http_Body_Stream_tryRecv_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_tryRecv___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_tryRecv___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_tryRecv___lam__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_tryRecv___lam__2___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Http_Body_Stream_tryRecv___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_Body_Stream_tryRecv___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_Body_Stream_tryRecv___closed__0 = (const lean_object*)&l_Std_Http_Body_Stream_tryRecv___closed__0_value;
static const lean_closure_object l_Std_Http_Body_Stream_tryRecv___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_Body_Stream_tryRecv___lam__2___boxed, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Std_Http_Body_Stream_tryRecv___closed__0_value)} };
static const lean_object* l_Std_Http_Body_Stream_tryRecv___closed__1 = (const lean_object*)&l_Std_Http_Body_Stream_tryRecv___closed__1_value;
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_tryRecv(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_tryRecv___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReady_x27___at___00Std_Http_Body_Stream_tryRecvBody_spec__0___lam__0(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReady_x27___at___00Std_Http_Body_Stream_tryRecvBody_spec__0___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReady_x27___at___00Std_Http_Body_Stream_tryRecvBody_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReady_x27___at___00Std_Http_Body_Stream_tryRecvBody_spec__0___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReady_x27___at___00Std_Http_Body_Stream_tryRecvBody_spec__0___closed__0 = (const lean_object*)&l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReady_x27___at___00Std_Http_Body_Stream_tryRecvBody_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReady_x27___at___00Std_Http_Body_Stream_tryRecvBody_spec__0(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReady_x27___at___00Std_Http_Body_Stream_tryRecvBody_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_tryRecvBody___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_tryRecvBody___lam__0___boxed(lean_object*, lean_object*);
static const lean_ctor_object l_Std_Http_Body_Stream_tryRecvBody___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Std_Http_Body_Stream_tryRecvBody___lam__1___closed__0 = (const lean_object*)&l_Std_Http_Body_Stream_tryRecvBody___lam__1___closed__0_value;
static const lean_ctor_object l_Std_Http_Body_Stream_tryRecvBody___lam__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Std_Http_Body_Stream_tryRecvBody___lam__1___closed__0_value)}};
static const lean_object* l_Std_Http_Body_Stream_tryRecvBody___lam__1___closed__1 = (const lean_object*)&l_Std_Http_Body_Stream_tryRecvBody___lam__1___closed__1_value;
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_tryRecvBody___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_tryRecvBody___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_tryRecvBody___lam__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_tryRecvBody___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_tryRecvBody___lam__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_tryRecvBody___lam__3___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Http_Body_Stream_tryRecvBody___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_Body_Stream_tryRecvBody___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_Body_Stream_tryRecvBody___closed__0 = (const lean_object*)&l_Std_Http_Body_Stream_tryRecvBody___closed__0_value;
static const lean_closure_object l_Std_Http_Body_Stream_tryRecvBody___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_Body_Stream_tryRecvBody___lam__3___boxed, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Std_Http_Body_Stream_tryRecvBody___closed__0_value)} };
static const lean_object* l_Std_Http_Body_Stream_tryRecvBody___closed__1 = (const lean_object*)&l_Std_Http_Body_Stream_tryRecvBody___closed__1_value;
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_tryRecvBody(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_tryRecvBody___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00__private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27_spec__0(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00__private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_tryRecv_x27___at___00__private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27_spec__1(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_tryRecv_x27___at___00__private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27_spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_signalInterest___at___00__private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27_spec__2(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_signalInterest___at___00__private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27_spec__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00__private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27_spec__3___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00__private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00__private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27_spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00__private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 47, .m_capacity = 47, .m_length = 46, .m_data = "the promise linked to the consumer was dropped"};
static const lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27___lam__0___closed__0 = (const lean_object*)&l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27___lam__0___closed__0_value;
static const lean_ctor_object l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 18}, .m_objs = {((lean_object*)&l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27___lam__0___closed__0_value)}};
static const lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27___lam__0___closed__1 = (const lean_object*)&l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27___lam__0___closed__1_value;
static const lean_ctor_object l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27___lam__0___closed__1_value)}};
static const lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27___lam__0___closed__2 = (const lean_object*)&l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27___lam__0___closed__2_value;
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27___lam__0(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27___lam__0___boxed(lean_object*);
static const lean_string_object l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 37, .m_capacity = 37, .m_length = 36, .m_data = "only one blocked consumer is allowed"};
static const lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27___lam__1___closed__0 = (const lean_object*)&l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27___lam__1___closed__0_value;
static const lean_ctor_object l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27___lam__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 18}, .m_objs = {((lean_object*)&l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27___lam__1___closed__0_value)}};
static const lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27___lam__1___closed__1 = (const lean_object*)&l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27___lam__1___closed__1_value;
static const lean_ctor_object l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27___lam__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27___lam__1___closed__1_value)}};
static const lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27___lam__1___closed__2 = (const lean_object*)&l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27___lam__1___closed__2_value;
static lean_once_cell_t l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27___lam__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27___lam__1___closed__3;
static lean_once_cell_t l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27___lam__1___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27___lam__1___closed__4;
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27___lam__1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27___closed__0 = (const lean_object*)&l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27___closed__0_value;
static const lean_closure_object l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27___lam__1___boxed, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)&l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27___closed__0_value)} };
static const lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27___closed__1 = (const lean_object*)&l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27___closed__1_value;
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_recv___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_recv___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_Http_Body_Stream_recv___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_Body_Stream_recv___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_Body_Stream_recv___closed__0 = (const lean_object*)&l_Std_Http_Body_Stream_recv___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_recv(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_recv___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___at___00Std_Http_Body_Stream_close_spec__0___lam__0(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___at___00Std_Http_Body_Stream_close_spec__0___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___at___00Std_Http_Body_Stream_close_spec__0___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___at___00Std_Http_Body_Stream_close_spec__0___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___at___00Std_Http_Body_Stream_close_spec__0___lam__2(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___at___00Std_Http_Body_Stream_close_spec__0___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___at___00Std_Http_Body_Stream_close_spec__0___lam__4(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___at___00Std_Http_Body_Stream_close_spec__0___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___at___00Std_Http_Body_Stream_close_spec__0___lam__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___at___00Std_Http_Body_Stream_close_spec__0___lam__5___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___at___00Std_Http_Body_Stream_close_spec__0(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___at___00Std_Http_Body_Stream_close_spec__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_Http_Body_Stream_close___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___at___00Std_Http_Body_Stream_close_spec__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_Body_Stream_close___closed__0 = (const lean_object*)&l_Std_Http_Body_Stream_close___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_close(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_close___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_closeIfAbandoned___lam__0(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_closeIfAbandoned___lam__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Http_Body_Stream_closeIfAbandoned___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_Body_Stream_closeIfAbandoned___lam__0___boxed, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1))} };
static const lean_object* l_Std_Http_Body_Stream_closeIfAbandoned___lam__1___closed__0 = (const lean_object*)&l_Std_Http_Body_Stream_closeIfAbandoned___lam__1___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_closeIfAbandoned___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_closeIfAbandoned___lam__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_closeIfAbandoned___lam__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_closeIfAbandoned___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_closeIfAbandoned___lam__3(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_closeIfAbandoned___lam__3___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_Http_Body_Stream_closeIfAbandoned___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_Body_Stream_closeIfAbandoned___lam__3___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_Body_Stream_closeIfAbandoned___closed__0 = (const lean_object*)&l_Std_Http_Body_Stream_closeIfAbandoned___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_closeIfAbandoned(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_closeIfAbandoned___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_closeWithError___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_closeWithError___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_closeWithError___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_closeWithError___lam__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_closeWithError(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_closeWithError___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_isClosed___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_isClosed___lam__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Http_Body_Stream_isClosed___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_Body_Stream_isClosed___lam__0___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_Body_Stream_isClosed___closed__0 = (const lean_object*)&l_Std_Http_Body_Stream_isClosed___closed__0_value;
static lean_once_cell_t l_Std_Http_Body_Stream_isClosed___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_Body_Stream_isClosed___closed__1;
static lean_once_cell_t l_Std_Http_Body_Stream_isClosed___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_Body_Stream_isClosed___closed__2;
static const lean_closure_object l_Std_Http_Body_Stream_isClosed___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Async_BaseAsync_lift___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_Body_Stream_isClosed___closed__3 = (const lean_object*)&l_Std_Http_Body_Stream_isClosed___closed__3_value;
static const lean_closure_object l_Std_Http_Body_Stream_isClosed___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadLiftT___redArg___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_Body_Stream_isClosed___closed__4 = (const lean_object*)&l_Std_Http_Body_Stream_isClosed___closed__4_value;
static const lean_closure_object l_Std_Http_Body_Stream_isClosed___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadLiftTOfMonadLift___redArg___lam__0, .m_arity = 4, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Std_Http_Body_Stream_isClosed___closed__4_value),((lean_object*)&l_Std_Http_Body_Stream_isClosed___closed__3_value)} };
static const lean_object* l_Std_Http_Body_Stream_isClosed___closed__5 = (const lean_object*)&l_Std_Http_Body_Stream_isClosed___closed__5_value;
static lean_once_cell_t l_Std_Http_Body_Stream_isClosed___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_Body_Stream_isClosed___closed__6;
static const lean_closure_object l_Std_Http_Body_Stream_isClosed___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Async_EAsync_instMonadFinally___redArg___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_Body_Stream_isClosed___closed__7 = (const lean_object*)&l_Std_Http_Body_Stream_isClosed___closed__7_value;
static const lean_closure_object l_Std_Http_Body_Stream_isClosed___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_IO_instMonadLiftSTRealWorldBaseIO___lam__0___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_Body_Stream_isClosed___closed__8 = (const lean_object*)&l_Std_Http_Body_Stream_isClosed___closed__8_value;
static const lean_closure_object l_Std_Http_Body_Stream_isClosed___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadLiftTOfMonadLift___redArg___lam__0, .m_arity = 4, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Std_Http_Body_Stream_isClosed___closed__4_value),((lean_object*)&l_Std_Http_Body_Stream_isClosed___closed__8_value)} };
static const lean_object* l_Std_Http_Body_Stream_isClosed___closed__9 = (const lean_object*)&l_Std_Http_Body_Stream_isClosed___closed__9_value;
static const lean_closure_object l_Std_Http_Body_Stream_isClosed___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadLiftTOfMonadLift___redArg___lam__0, .m_arity = 4, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Std_Http_Body_Stream_isClosed___closed__9_value),((lean_object*)&l_Std_Http_Body_Stream_isClosed___closed__3_value)} };
static const lean_object* l_Std_Http_Body_Stream_isClosed___closed__10 = (const lean_object*)&l_Std_Http_Body_Stream_isClosed___closed__10_value;
static lean_once_cell_t l_Std_Http_Body_Stream_isClosed___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_Body_Stream_isClosed___closed__11;
static lean_once_cell_t l_Std_Http_Body_Stream_isClosed___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_Body_Stream_isClosed___closed__12;
static lean_once_cell_t l_Std_Http_Body_Stream_isClosed___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_Body_Stream_isClosed___closed__13;
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_isClosed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_isClosed___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_getKnownSize___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_getKnownSize___lam__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Http_Body_Stream_getKnownSize___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_Body_Stream_getKnownSize___lam__0___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_Body_Stream_getKnownSize___closed__0 = (const lean_object*)&l_Std_Http_Body_Stream_getKnownSize___closed__0_value;
static lean_once_cell_t l_Std_Http_Body_Stream_getKnownSize___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_Body_Stream_getKnownSize___closed__1;
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_getKnownSize(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_getKnownSize___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_setKnownSize___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_setKnownSize___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_setKnownSize(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_setKnownSize___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_signalInterest___at___00Std_Http_Body_Stream_recvSelector_spec__0___lam__0(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_signalInterest___at___00Std_Http_Body_Stream_recvSelector_spec__0___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_signalInterest___at___00Std_Http_Body_Stream_recvSelector_spec__0___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_signalInterest___at___00Std_Http_Body_Stream_recvSelector_spec__0___lam__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_signalInterest___at___00Std_Http_Body_Stream_recvSelector_spec__0(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_signalInterest___at___00Std_Http_Body_Stream_recvSelector_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Waiter_race___at___00Std_Http_Body_Stream_recvSelector_spec__1___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Waiter_race___at___00Std_Http_Body_Stream_recvSelector_spec__1___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Waiter_race___at___00Std_Http_Body_Stream_recvSelector_spec__1___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Waiter_race___at___00Std_Http_Body_Stream_recvSelector_spec__1___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Waiter_race___at___00Std_Http_Body_Stream_recvSelector_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Waiter_race___at___00Std_Http_Body_Stream_recvSelector_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_recvSelector___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_recvSelector___lam__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_recvSelector___lam__0(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_recvSelector___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Std_Http_Body_Stream_recvSelector___lam__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27___lam__1___closed__1_value)}};
static const lean_object* l_Std_Http_Body_Stream_recvSelector___lam__3___closed__0 = (const lean_object*)&l_Std_Http_Body_Stream_recvSelector___lam__3___closed__0_value;
static const lean_ctor_object l_Std_Http_Body_Stream_recvSelector___lam__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Std_Http_Body_Stream_recvSelector___lam__3___closed__0_value)}};
static const lean_object* l_Std_Http_Body_Stream_recvSelector___lam__3___closed__1 = (const lean_object*)&l_Std_Http_Body_Stream_recvSelector___lam__3___closed__1_value;
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_recvSelector___lam__3(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_recvSelector___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_recvSelector___lam__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_recvSelector___lam__2___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Http_Body_Stream_recvSelector___lam__4___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_Body_Stream_recvSelector___lam__2___boxed, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Std_Http_Body_Stream_recvSelector___lam__4___closed__0 = (const lean_object*)&l_Std_Http_Body_Stream_recvSelector___lam__4___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_recvSelector___lam__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_recvSelector___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_recvSelector___lam__5(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_recvSelector___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_recvSelector___lam__6(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_recvSelector___lam__6___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_recvSelector___lam__7(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_recvSelector___lam__7___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Http_Body_Stream_recvSelector___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_Body_Stream_recvSelector___closed__0 = (const lean_object*)&l_Std_Http_Body_Stream_recvSelector___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_recvSelector(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_forIn_loop___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_forIn_loop___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_forIn_loop___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_forIn_loop___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_forIn_loop___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_forIn_loop___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_forIn_loop(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_forIn_loop___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_forIn___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_forIn___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_forIn(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_forIn___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_forIn_x27_loop___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_forIn_x27_loop___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_forIn_x27_loop___redArg___lam__1(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_forIn_x27_loop___redArg___lam__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_forIn_x27_loop___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_forIn_x27_loop___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_forIn_x27_loop___redArg___lam__5(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_forIn_x27_loop___redArg___lam__5___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_forIn_x27_loop___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_forIn_x27_loop___redArg___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_forIn_x27_loop___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_forIn_x27_loop___redArg___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_forIn_x27_loop___redArg___closed__0 = (const lean_object*)&l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_forIn_x27_loop___redArg___closed__0_value;
static const lean_closure_object l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_forIn_x27_loop___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_forIn_x27_loop___redArg___lam__1___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_forIn_x27_loop___redArg___closed__1 = (const lean_object*)&l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_forIn_x27_loop___redArg___closed__1_value;
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_forIn_x27_loop___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_forIn_x27_loop___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_forIn_x27_loop___redArg___lam__5___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_forIn_x27_loop___redArg___closed__2 = (const lean_object*)&l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_forIn_x27_loop___redArg___closed__2_value;
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_forIn_x27_loop___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_forIn_x27_loop___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_forIn_x27_loop___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_forIn_x27_loop(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_forIn_x27_loop___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_forIn_x27___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_forIn_x27___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_forIn_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_forIn_x27___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Http_Body_Stream_instNextChunkAsync___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_Body_Stream_recv___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_Body_Stream_instNextChunkAsync___closed__0 = (const lean_object*)&l_Std_Http_Body_Stream_instNextChunkAsync___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Http_Body_Stream_instNextChunkAsync = (const lean_object*)&l_Std_Http_Body_Stream_instNextChunkAsync___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_instNextChunkContextAsync___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_instNextChunkContextAsync___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_instNextChunkContextAsync___lam__1(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_instNextChunkContextAsync___lam__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_instNextChunkContextAsync___lam__2(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_instNextChunkContextAsync___lam__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_instNextChunkContextAsync___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_instNextChunkContextAsync___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_instNextChunkContextAsync___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_instNextChunkContextAsync___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Http_Body_Stream_instNextChunkContextAsync___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_Body_Stream_instNextChunkContextAsync___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_Body_Stream_instNextChunkContextAsync___closed__0 = (const lean_object*)&l_Std_Http_Body_Stream_instNextChunkContextAsync___closed__0_value;
static const lean_closure_object l_Std_Http_Body_Stream_instNextChunkContextAsync___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_Body_Stream_instNextChunkContextAsync___lam__1___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_Body_Stream_instNextChunkContextAsync___closed__1 = (const lean_object*)&l_Std_Http_Body_Stream_instNextChunkContextAsync___closed__1_value;
static const lean_closure_object l_Std_Http_Body_Stream_instNextChunkContextAsync___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_Body_Stream_instNextChunkContextAsync___lam__2___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_Body_Stream_instNextChunkContextAsync___closed__2 = (const lean_object*)&l_Std_Http_Body_Stream_instNextChunkContextAsync___closed__2_value;
static const lean_closure_object l_Std_Http_Body_Stream_instNextChunkContextAsync___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*3, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_Body_Stream_instNextChunkContextAsync___lam__4___boxed, .m_arity = 6, .m_num_fixed = 3, .m_objs = {((lean_object*)&l_Std_Http_Body_Stream_instNextChunkContextAsync___closed__2_value),((lean_object*)&l_Std_Http_Body_Stream_instNextChunkContextAsync___closed__1_value),((lean_object*)&l_Std_Http_Body_Stream_instNextChunkContextAsync___closed__0_value)} };
static const lean_object* l_Std_Http_Body_Stream_instNextChunkContextAsync___closed__3 = (const lean_object*)&l_Std_Http_Body_Stream_instNextChunkContextAsync___closed__3_value;
LEAN_EXPORT const lean_object* l_Std_Http_Body_Stream_instNextChunkContextAsync = (const lean_object*)&l_Std_Http_Body_Stream_instNextChunkContextAsync___closed__3_value;
static const lean_string_object l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_readAll_loop___redArg___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "body exceeded maximum size of "};
static const lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_readAll_loop___redArg___lam__1___closed__0 = (const lean_object*)&l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_readAll_loop___redArg___lam__1___closed__0_value;
static const lean_string_object l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_readAll_loop___redArg___lam__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = " bytes"};
static const lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_readAll_loop___redArg___lam__1___closed__1 = (const lean_object*)&l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_readAll_loop___redArg___lam__1___closed__1_value;
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_readAll_loop___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_readAll_loop___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_readAll_loop___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_readAll_loop(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_readAll___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_readAll___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_readAll(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_drain_loop___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_drain_loop___redArg___lam__1(lean_object*, uint64_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_drain_loop___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_drain_loop___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint64_t);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_drain_loop___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_drain_loop(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint64_t);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_drain_loop___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_drain___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_drain(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_collapseForSend___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "channel closed"};
static const lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_collapseForSend___lam__0___closed__0 = (const lean_object*)&l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_collapseForSend___lam__0___closed__0_value;
static const lean_ctor_object l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_collapseForSend___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 18}, .m_objs = {((lean_object*)&l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_collapseForSend___lam__0___closed__0_value)}};
static const lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_collapseForSend___lam__0___closed__1 = (const lean_object*)&l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_collapseForSend___lam__0___closed__1_value;
static const lean_ctor_object l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_collapseForSend___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_collapseForSend___lam__0___closed__1_value)}};
static const lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_collapseForSend___lam__0___closed__2 = (const lean_object*)&l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_collapseForSend___lam__0___closed__2_value;
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_collapseForSend___lam__0(uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_collapseForSend___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_collapseForSend(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_collapseForSend___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__0___closed__0 = (const lean_object*)&l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__0___closed__0_value;
static const lean_ctor_object l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__0___closed__0_value)}};
static const lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__0___closed__1 = (const lean_object*)&l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__0___closed__1_value;
static const lean_ctor_object l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__0___closed__1_value)}};
static const lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__0___closed__2 = (const lean_object*)&l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__0___closed__2_value;
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__0(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__1(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__1___boxed(lean_object*, lean_object*);
static const lean_ctor_object l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_collapseForSend___lam__0___closed__1_value)}};
static const lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__2___closed__0 = (const lean_object*)&l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__2___closed__0_value;
static const lean_ctor_object l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__2___closed__0_value)}};
static const lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__2___closed__1 = (const lean_object*)&l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__2___closed__1_value;
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__3(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__4(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__4___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__5(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__5___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__6(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__7___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__4___boxed, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1))} };
static const lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__7___closed__0 = (const lean_object*)&l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__7___closed__0_value;
static const lean_string_object l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__7___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 37, .m_capacity = 37, .m_length = 36, .m_data = "only one blocked producer is allowed"};
static const lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__7___closed__1 = (const lean_object*)&l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__7___closed__1_value;
static const lean_ctor_object l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__7___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 18}, .m_objs = {((lean_object*)&l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__7___closed__1_value)}};
static const lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__7___closed__2 = (const lean_object*)&l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__7___closed__2_value;
static const lean_ctor_object l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__7___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__7___closed__2_value)}};
static const lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__7___closed__3 = (const lean_object*)&l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__7___closed__3_value;
static const lean_ctor_object l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__7___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__7___closed__3_value)}};
static const lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__7___closed__4 = (const lean_object*)&l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__7___closed__4_value;
static const lean_ctor_object l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__7___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__7___closed__4_value)}};
static const lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__7___closed__5 = (const lean_object*)&l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__7___closed__5_value;
static const lean_ctor_object l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__7___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_collapseForSend___lam__0___closed__1_value)}};
static const lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__7___closed__6 = (const lean_object*)&l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__7___closed__6_value;
static const lean_ctor_object l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__7___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__7___closed__6_value)}};
static const lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__7___closed__7 = (const lean_object*)&l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__7___closed__7_value;
static const lean_ctor_object l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__7___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__7___closed__7_value)}};
static const lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__7___closed__8 = (const lean_object*)&l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__7___closed__8_value;
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__8(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__9(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___closed__0 = (const lean_object*)&l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___closed__0_value;
static const lean_closure_object l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__1___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___closed__1 = (const lean_object*)&l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___closed__1_value;
static const lean_closure_object l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__2___boxed, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)&l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___closed__1_value)} };
static const lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___closed__2 = (const lean_object*)&l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___closed__2_value;
static const lean_closure_object l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__3, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___closed__3 = (const lean_object*)&l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___closed__3_value;
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__11(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_send___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_send___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_send(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_send___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_hasInterest_x27___at___00Std_Http_Body_Stream_hasInterest_spec__0___lam__0(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_hasInterest_x27___at___00Std_Http_Body_Stream_hasInterest_spec__0___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_hasInterest_x27___at___00Std_Http_Body_Stream_hasInterest_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_hasInterest_x27___at___00Std_Http_Body_Stream_hasInterest_spec__0___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_hasInterest_x27___at___00Std_Http_Body_Stream_hasInterest_spec__0___closed__0 = (const lean_object*)&l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_hasInterest_x27___at___00Std_Http_Body_Stream_hasInterest_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_hasInterest_x27___at___00Std_Http_Body_Stream_hasInterest_spec__0(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_hasInterest_x27___at___00Std_Http_Body_Stream_hasInterest_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_hasInterest___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_hasInterest___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_hasInterest___lam__1(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_hasInterest___lam__1___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_Http_Body_Stream_hasInterest___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_Body_Stream_hasInterest___lam__1___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_Body_Stream_hasInterest___closed__0 = (const lean_object*)&l_Std_Http_Body_Stream_hasInterest___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_hasInterest(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_hasInterest___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Waiter_race___at___00Std_Http_Body_Stream_interestSelector_spec__0___lam__0(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Waiter_race___at___00Std_Http_Body_Stream_interestSelector_spec__0___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Waiter_race___at___00Std_Http_Body_Stream_interestSelector_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Waiter_race___at___00Std_Http_Body_Stream_interestSelector_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Waiter_race___at___00Std_Http_Body_Stream_interestSelector_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Waiter_race___at___00Std_Http_Body_Stream_interestSelector_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Std_Http_Body_Stream_interestSelector___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__0___closed__0_value)}};
static const lean_object* l_Std_Http_Body_Stream_interestSelector___lam__0___closed__0 = (const lean_object*)&l_Std_Http_Body_Stream_interestSelector___lam__0___closed__0_value;
static const lean_ctor_object l_Std_Http_Body_Stream_interestSelector___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Std_Http_Body_Stream_interestSelector___lam__0___closed__1 = (const lean_object*)&l_Std_Http_Body_Stream_interestSelector___lam__0___closed__1_value;
static const lean_ctor_object l_Std_Http_Body_Stream_interestSelector___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Http_Body_Stream_interestSelector___lam__0___closed__1_value)}};
static const lean_object* l_Std_Http_Body_Stream_interestSelector___lam__0___closed__2 = (const lean_object*)&l_Std_Http_Body_Stream_interestSelector___lam__0___closed__2_value;
static const lean_ctor_object l_Std_Http_Body_Stream_interestSelector___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Std_Http_Body_Stream_interestSelector___lam__0___closed__2_value)}};
static const lean_object* l_Std_Http_Body_Stream_interestSelector___lam__0___closed__3 = (const lean_object*)&l_Std_Http_Body_Stream_interestSelector___lam__0___closed__3_value;
static const lean_ctor_object l_Std_Http_Body_Stream_interestSelector___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Std_Http_Body_Stream_interestSelector___lam__0___closed__4 = (const lean_object*)&l_Std_Http_Body_Stream_interestSelector___lam__0___closed__4_value;
static const lean_ctor_object l_Std_Http_Body_Stream_interestSelector___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Http_Body_Stream_interestSelector___lam__0___closed__4_value)}};
static const lean_object* l_Std_Http_Body_Stream_interestSelector___lam__0___closed__5 = (const lean_object*)&l_Std_Http_Body_Stream_interestSelector___lam__0___closed__5_value;
static const lean_ctor_object l_Std_Http_Body_Stream_interestSelector___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Std_Http_Body_Stream_interestSelector___lam__0___closed__5_value)}};
static const lean_object* l_Std_Http_Body_Stream_interestSelector___lam__0___closed__6 = (const lean_object*)&l_Std_Http_Body_Stream_interestSelector___lam__0___closed__6_value;
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_interestSelector___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_interestSelector___lam__0___boxed(lean_object*, lean_object*);
static const lean_string_object l_Std_Http_Body_Stream_interestSelector___lam__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 46, .m_capacity = 46, .m_length = 45, .m_data = "only one blocked interest selector is allowed"};
static const lean_object* l_Std_Http_Body_Stream_interestSelector___lam__3___closed__0 = (const lean_object*)&l_Std_Http_Body_Stream_interestSelector___lam__3___closed__0_value;
static const lean_ctor_object l_Std_Http_Body_Stream_interestSelector___lam__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 18}, .m_objs = {((lean_object*)&l_Std_Http_Body_Stream_interestSelector___lam__3___closed__0_value)}};
static const lean_object* l_Std_Http_Body_Stream_interestSelector___lam__3___closed__1 = (const lean_object*)&l_Std_Http_Body_Stream_interestSelector___lam__3___closed__1_value;
static const lean_ctor_object l_Std_Http_Body_Stream_interestSelector___lam__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Std_Http_Body_Stream_interestSelector___lam__3___closed__1_value)}};
static const lean_object* l_Std_Http_Body_Stream_interestSelector___lam__3___closed__2 = (const lean_object*)&l_Std_Http_Body_Stream_interestSelector___lam__3___closed__2_value;
static const lean_ctor_object l_Std_Http_Body_Stream_interestSelector___lam__3___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Std_Http_Body_Stream_interestSelector___lam__3___closed__2_value)}};
static const lean_object* l_Std_Http_Body_Stream_interestSelector___lam__3___closed__3 = (const lean_object*)&l_Std_Http_Body_Stream_interestSelector___lam__3___closed__3_value;
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_interestSelector___lam__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_interestSelector___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_interestSelector___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_interestSelector___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_interestSelector___lam__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_interestSelector___lam__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_interestSelector___lam__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_interestSelector___lam__4___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_interestSelector___lam__5(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_interestSelector___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_interestSelector___lam__6(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_interestSelector___lam__6___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Http_Body_Stream_interestSelector___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_Body_Stream_interestSelector___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_Body_Stream_interestSelector___closed__0 = (const lean_object*)&l_Std_Http_Body_Stream_interestSelector___closed__0_value;
static const lean_closure_object l_Std_Http_Body_Stream_interestSelector___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_Body_Stream_interestSelector___lam__6___boxed, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Std_Http_Body_Stream_interestSelector___closed__0_value)} };
static const lean_object* l_Std_Http_Body_Stream_interestSelector___closed__1 = (const lean_object*)&l_Std_Http_Body_Stream_interestSelector___closed__1_value;
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_interestSelector(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_stream___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_stream___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_stream___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_stream___lam__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_stream___lam__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_stream___lam__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_stream___lam__3(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_stream___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_stream___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_stream___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_stream___lam__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_stream___lam__5___boxed(lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Std_Http_Body_stream___lam__6___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Std_Http_Body_stream___lam__6___closed__0 = (const lean_object*)&l_Std_Http_Body_stream___lam__6___closed__0_value;
static const lean_closure_object l_Std_Http_Body_stream___lam__6___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_Body_stream___lam__5___boxed, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Std_Http_Body_stream___lam__6___closed__0_value)} };
static const lean_object* l_Std_Http_Body_stream___lam__6___closed__1 = (const lean_object*)&l_Std_Http_Body_stream___lam__6___closed__1_value;
LEAN_EXPORT lean_object* l_Std_Http_Body_stream___lam__6(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_stream___lam__6___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_stream(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_stream___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_fromBytes___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_fromBytes___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_fromBytes___lam__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_fromBytes___lam__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_fromBytes(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_fromBytes___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_empty___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_empty___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Std_Http_Body_empty___lam__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Std_Http_Body_empty___lam__2___closed__0 = (const lean_object*)&l_Std_Http_Body_empty___lam__2___closed__0_value;
static const lean_ctor_object l_Std_Http_Body_empty___lam__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Http_Body_empty___lam__2___closed__0_value)}};
static const lean_object* l_Std_Http_Body_empty___lam__2___closed__1 = (const lean_object*)&l_Std_Http_Body_empty___lam__2___closed__1_value;
static const lean_closure_object l_Std_Http_Body_empty___lam__2___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_Body_stream___lam__5___boxed, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Std_Http_Body_empty___lam__2___closed__1_value)} };
static const lean_object* l_Std_Http_Body_empty___lam__2___closed__2 = (const lean_object*)&l_Std_Http_Body_empty___lam__2___closed__2_value;
LEAN_EXPORT lean_object* l_Std_Http_Body_empty___lam__2(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_empty___lam__2___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_Http_Body_empty___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_Body_empty___lam__2___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_Body_empty___closed__0 = (const lean_object*)&l_Std_Http_Body_empty___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Http_Body_empty();
LEAN_EXPORT lean_object* l_Std_Http_Body_empty___boxed(lean_object*);
static const lean_closure_object l_Std_Http_Body_instForInAsyncStreamChunk___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_Body_Stream_forIn___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_Body_instForInAsyncStreamChunk___closed__0 = (const lean_object*)&l_Std_Http_Body_instForInAsyncStreamChunk___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Http_Body_instForInAsyncStreamChunk = (const lean_object*)&l_Std_Http_Body_instForInAsyncStreamChunk___closed__0_value;
static const lean_closure_object l_Std_Http_Body_instForInContextAsyncStreamChunk___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_Body_Stream_forIn_x27___boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_Body_instForInContextAsyncStreamChunk___closed__0 = (const lean_object*)&l_Std_Http_Body_instForInContextAsyncStreamChunk___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Http_Body_instForInContextAsyncStreamChunk = (const lean_object*)&l_Std_Http_Body_instForInContextAsyncStreamChunk___closed__0_value;
static const lean_closure_object l_Std_Http_Body_instStream___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_Body_Stream_close___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_Body_instStream___closed__0 = (const lean_object*)&l_Std_Http_Body_instStream___closed__0_value;
static const lean_closure_object l_Std_Http_Body_instStream___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_Body_Stream_isClosed___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_Body_instStream___closed__1 = (const lean_object*)&l_Std_Http_Body_instStream___closed__1_value;
static const lean_closure_object l_Std_Http_Body_instStream___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_Body_Stream_recvSelector, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_Body_instStream___closed__2 = (const lean_object*)&l_Std_Http_Body_instStream___closed__2_value;
static const lean_closure_object l_Std_Http_Body_instStream___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_Body_Stream_tryRecvBody___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_Body_instStream___closed__3 = (const lean_object*)&l_Std_Http_Body_instStream___closed__3_value;
static const lean_closure_object l_Std_Http_Body_instStream___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_Body_Stream_getKnownSize___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_Body_instStream___closed__4 = (const lean_object*)&l_Std_Http_Body_instStream___closed__4_value;
static const lean_closure_object l_Std_Http_Body_instStream___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_Body_Stream_setKnownSize___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_Body_instStream___closed__5 = (const lean_object*)&l_Std_Http_Body_instStream___closed__5_value;
static const lean_ctor_object l_Std_Http_Body_instStream___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*7 + 0, .m_other = 7, .m_tag = 0}, .m_objs = {((lean_object*)&l_Std_Http_Body_Stream_instNextChunkAsync___closed__0_value),((lean_object*)&l_Std_Http_Body_instStream___closed__0_value),((lean_object*)&l_Std_Http_Body_instStream___closed__1_value),((lean_object*)&l_Std_Http_Body_instStream___closed__2_value),((lean_object*)&l_Std_Http_Body_instStream___closed__3_value),((lean_object*)&l_Std_Http_Body_instStream___closed__4_value),((lean_object*)&l_Std_Http_Body_instStream___closed__5_value)}};
static const lean_object* l_Std_Http_Body_instStream___closed__6 = (const lean_object*)&l_Std_Http_Body_instStream___closed__6_value;
LEAN_EXPORT const lean_object* l_Std_Http_Body_instStream = (const lean_object*)&l_Std_Http_Body_instStream___closed__6_value;
static const lean_closure_object l_Std_Http_Body_instCoeStreamAny___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_Body_Any_ofBody, .m_arity = 3, .m_num_fixed = 2, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Http_Body_instStream___closed__6_value)} };
static const lean_object* l_Std_Http_Body_instCoeStreamAny___closed__0 = (const lean_object*)&l_Std_Http_Body_instCoeStreamAny___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Http_Body_instCoeStreamAny = (const lean_object*)&l_Std_Http_Body_instCoeStreamAny___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Http_Body_instCoeResponseStreamAny___lam__0(lean_object*, lean_object*);
static const lean_closure_object l_Std_Http_Body_instCoeResponseStreamAny___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_Body_instCoeResponseStreamAny___lam__0, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Std_Http_Body_instStream___closed__6_value)} };
static const lean_object* l_Std_Http_Body_instCoeResponseStreamAny___closed__0 = (const lean_object*)&l_Std_Http_Body_instCoeResponseStreamAny___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Http_Body_instCoeResponseStreamAny = (const lean_object*)&l_Std_Http_Body_instCoeResponseStreamAny___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Http_Body_instCoeContextAsyncResponseStreamAny___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_instCoeContextAsyncResponseStreamAny___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_instCoeContextAsyncResponseStreamAny___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_instCoeContextAsyncResponseStreamAny___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Http_Body_instCoeContextAsyncResponseStreamAny___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_Body_instCoeContextAsyncResponseStreamAny___lam__0___boxed, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Std_Http_Body_instStream___closed__6_value)} };
static const lean_object* l_Std_Http_Body_instCoeContextAsyncResponseStreamAny___closed__0 = (const lean_object*)&l_Std_Http_Body_instCoeContextAsyncResponseStreamAny___closed__0_value;
static const lean_closure_object l_Std_Http_Body_instCoeContextAsyncResponseStreamAny___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_Body_instCoeContextAsyncResponseStreamAny___lam__1___boxed, .m_arity = 4, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Std_Http_Body_instCoeContextAsyncResponseStreamAny___closed__0_value)} };
static const lean_object* l_Std_Http_Body_instCoeContextAsyncResponseStreamAny___closed__1 = (const lean_object*)&l_Std_Http_Body_instCoeContextAsyncResponseStreamAny___closed__1_value;
LEAN_EXPORT const lean_object* l_Std_Http_Body_instCoeContextAsyncResponseStreamAny = (const lean_object*)&l_Std_Http_Body_instCoeContextAsyncResponseStreamAny___closed__1_value;
LEAN_EXPORT lean_object* l_Std_Http_Body_instCoeAsyncResponseStreamContextAsyncAny___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_instCoeAsyncResponseStreamContextAsyncAny___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Http_Body_instCoeAsyncResponseStreamContextAsyncAny___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_Body_instCoeAsyncResponseStreamContextAsyncAny___lam__1___boxed, .m_arity = 4, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Std_Http_Body_instCoeContextAsyncResponseStreamAny___closed__0_value)} };
static const lean_object* l_Std_Http_Body_instCoeAsyncResponseStreamContextAsyncAny___closed__0 = (const lean_object*)&l_Std_Http_Body_instCoeAsyncResponseStreamContextAsyncAny___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Http_Body_instCoeAsyncResponseStreamContextAsyncAny = (const lean_object*)&l_Std_Http_Body_instCoeAsyncResponseStreamContextAsyncAny___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Http_Request_Builder_stream___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Request_Builder_stream___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Request_Builder_stream(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Request_Builder_stream___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Response_Builder_stream___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Response_Builder_stream___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Response_Builder_stream(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Response_Builder_stream___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_Consumer_ctorIdx(lean_object* v_x_1_){
_start:
{
if (lean_obj_tag(v_x_1_) == 0)
{
lean_object* v___x_2_; 
v___x_2_ = lean_unsigned_to_nat(0u);
return v___x_2_;
}
else
{
lean_object* v___x_3_; 
v___x_3_ = lean_unsigned_to_nat(1u);
return v___x_3_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_Consumer_ctorIdx___boxed(lean_object* v_x_4_){
_start:
{
lean_object* v_res_5_; 
v_res_5_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_Consumer_ctorIdx(v_x_4_);
lean_dec_ref(v_x_4_);
return v_res_5_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_Consumer_ctorElim___redArg(lean_object* v_t_6_, lean_object* v_k_7_){
_start:
{
if (lean_obj_tag(v_t_6_) == 0)
{
lean_object* v_promise_8_; lean_object* v___x_9_; 
v_promise_8_ = lean_ctor_get(v_t_6_, 0);
lean_inc(v_promise_8_);
lean_dec_ref_known(v_t_6_, 1);
v___x_9_ = lean_apply_1(v_k_7_, v_promise_8_);
return v___x_9_;
}
else
{
lean_object* v_finished_10_; lean_object* v___x_11_; 
v_finished_10_ = lean_ctor_get(v_t_6_, 0);
lean_inc_ref(v_finished_10_);
lean_dec_ref_known(v_t_6_, 1);
v___x_11_ = lean_apply_1(v_k_7_, v_finished_10_);
return v___x_11_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_Consumer_ctorElim(lean_object* v_motive_12_, lean_object* v_ctorIdx_13_, lean_object* v_t_14_, lean_object* v_h_15_, lean_object* v_k_16_){
_start:
{
lean_object* v___x_17_; 
v___x_17_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_Consumer_ctorElim___redArg(v_t_14_, v_k_16_);
return v___x_17_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_Consumer_ctorElim___boxed(lean_object* v_motive_18_, lean_object* v_ctorIdx_19_, lean_object* v_t_20_, lean_object* v_h_21_, lean_object* v_k_22_){
_start:
{
lean_object* v_res_23_; 
v_res_23_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_Consumer_ctorElim(v_motive_18_, v_ctorIdx_19_, v_t_20_, v_h_21_, v_k_22_);
lean_dec(v_ctorIdx_19_);
return v_res_23_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_Consumer_normal_elim___redArg(lean_object* v_t_24_, lean_object* v_normal_25_){
_start:
{
lean_object* v___x_26_; 
v___x_26_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_Consumer_ctorElim___redArg(v_t_24_, v_normal_25_);
return v___x_26_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_Consumer_normal_elim(lean_object* v_motive_27_, lean_object* v_t_28_, lean_object* v_h_29_, lean_object* v_normal_30_){
_start:
{
lean_object* v___x_31_; 
v___x_31_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_Consumer_ctorElim___redArg(v_t_28_, v_normal_30_);
return v___x_31_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_Consumer_select_elim___redArg(lean_object* v_t_32_, lean_object* v_select_33_){
_start:
{
lean_object* v___x_34_; 
v___x_34_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_Consumer_ctorElim___redArg(v_t_32_, v_select_33_);
return v___x_34_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_Consumer_select_elim(lean_object* v_motive_35_, lean_object* v_t_36_, lean_object* v_h_37_, lean_object* v_select_38_){
_start:
{
lean_object* v___x_39_; 
v___x_39_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_Consumer_ctorElim___redArg(v_t_36_, v_select_38_);
return v___x_39_;
}
}
LEAN_EXPORT uint8_t l_Std_Async_Waiter_race___at___00__private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_Consumer_resolve_spec__0(lean_object* v_x_40_, lean_object* v_w_41_, lean_object* v_lose_42_){
_start:
{
lean_object* v_finished_44_; lean_object* v_promise_45_; lean_object* v___x_46_; uint8_t v___y_48_; uint8_t v___x_55_; 
v_finished_44_ = lean_ctor_get(v_w_41_, 0);
v_promise_45_ = lean_ctor_get(v_w_41_, 1);
v___x_46_ = lean_st_ref_take(v_finished_44_);
v___x_55_ = lean_unbox(v___x_46_);
lean_dec(v___x_46_);
if (v___x_55_ == 0)
{
uint8_t v___x_56_; 
v___x_56_ = 1;
v___y_48_ = v___x_56_;
goto v___jp_47_;
}
else
{
uint8_t v___x_57_; 
v___x_57_ = 0;
v___y_48_ = v___x_57_;
goto v___jp_47_;
}
v___jp_47_:
{
uint8_t v___x_49_; lean_object* v___x_50_; lean_object* v___x_51_; 
v___x_49_ = 1;
v___x_50_ = lean_box(v___x_49_);
v___x_51_ = lean_st_ref_put(v_finished_44_, v___x_50_);
if (v___y_48_ == 0)
{
lean_object* v___x_52_; uint8_t v___x_53_; 
lean_dec_ref(v_x_40_);
v___x_52_ = lean_apply_1(v_lose_42_, lean_box(0));
v___x_53_ = lean_unbox(v___x_52_);
return v___x_53_;
}
else
{
lean_object* v___x_54_; 
lean_dec_ref(v_lose_42_);
v___x_54_ = lean_io_promise_resolve(v_x_40_, v_promise_45_);
return v___y_48_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_Waiter_race___at___00__private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_Consumer_resolve_spec__0___boxed(lean_object* v_x_58_, lean_object* v_w_59_, lean_object* v_lose_60_, lean_object* v___y_61_){
_start:
{
uint8_t v_res_62_; lean_object* v_r_63_; 
v_res_62_ = l_Std_Async_Waiter_race___at___00__private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_Consumer_resolve_spec__0(v_x_58_, v_w_59_, v_lose_60_);
lean_dec_ref(v_w_59_);
v_r_63_ = lean_box(v_res_62_);
return v_r_63_;
}
}
LEAN_EXPORT uint8_t l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_Consumer_resolve___lam__0(uint8_t v___x_64_){
_start:
{
return v___x_64_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_Consumer_resolve___lam__0___boxed(lean_object* v___x_66_, lean_object* v___y_67_){
_start:
{
uint8_t v___x_907__boxed_68_; uint8_t v_res_69_; lean_object* v_r_70_; 
v___x_907__boxed_68_ = lean_unbox(v___x_66_);
v_res_69_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_Consumer_resolve___lam__0(v___x_907__boxed_68_);
v_r_70_ = lean_box(v_res_69_);
return v_r_70_;
}
}
LEAN_EXPORT uint8_t l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_Consumer_resolve(lean_object* v_c_74_, lean_object* v_x_75_){
_start:
{
if (lean_obj_tag(v_c_74_) == 0)
{
lean_object* v_promise_77_; lean_object* v___x_78_; uint8_t v___x_79_; 
v_promise_77_ = lean_ctor_get(v_c_74_, 0);
v___x_78_ = lean_io_promise_resolve(v_x_75_, v_promise_77_);
v___x_79_ = 1;
return v___x_79_;
}
else
{
lean_object* v_finished_80_; lean_object* v_lose_81_; uint8_t v___x_82_; 
v_finished_80_ = lean_ctor_get(v_c_74_, 0);
v_lose_81_ = ((lean_object*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_Consumer_resolve___closed__0));
v___x_82_ = l_Std_Async_Waiter_race___at___00__private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_Consumer_resolve_spec__0(v_x_75_, v_finished_80_, v_lose_81_);
return v___x_82_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_Consumer_resolve___boxed(lean_object* v_c_83_, lean_object* v_x_84_, lean_object* v___y_85_){
_start:
{
uint8_t v_res_86_; lean_object* v_r_87_; 
v_res_86_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_Consumer_resolve(v_c_83_, v_x_84_);
lean_dec_ref(v_c_83_);
v_r_87_ = lean_box(v_res_86_);
return v_r_87_;
}
}
LEAN_EXPORT uint8_t l_Std_Async_Waiter_race___at___00__private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_resolveInterestWaiter_spec__0(uint8_t v_x_88_, lean_object* v_w_89_, lean_object* v_lose_90_){
_start:
{
lean_object* v_finished_92_; lean_object* v_promise_93_; lean_object* v___x_94_; uint8_t v___y_96_; uint8_t v___x_105_; 
v_finished_92_ = lean_ctor_get(v_w_89_, 0);
v_promise_93_ = lean_ctor_get(v_w_89_, 1);
v___x_94_ = lean_st_ref_take(v_finished_92_);
v___x_105_ = lean_unbox(v___x_94_);
lean_dec(v___x_94_);
if (v___x_105_ == 0)
{
uint8_t v___x_106_; 
v___x_106_ = 1;
v___y_96_ = v___x_106_;
goto v___jp_95_;
}
else
{
uint8_t v___x_107_; 
v___x_107_ = 0;
v___y_96_ = v___x_107_;
goto v___jp_95_;
}
v___jp_95_:
{
uint8_t v___x_97_; lean_object* v___x_98_; lean_object* v___x_99_; 
v___x_97_ = 1;
v___x_98_ = lean_box(v___x_97_);
v___x_99_ = lean_st_ref_put(v_finished_92_, v___x_98_);
if (v___y_96_ == 0)
{
lean_object* v___x_100_; uint8_t v___x_101_; 
v___x_100_ = lean_apply_1(v_lose_90_, lean_box(0));
v___x_101_ = lean_unbox(v___x_100_);
return v___x_101_;
}
else
{
lean_object* v___x_102_; lean_object* v___x_103_; lean_object* v___x_104_; 
lean_dec_ref(v_lose_90_);
v___x_102_ = lean_box(v_x_88_);
v___x_103_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_103_, 0, v___x_102_);
v___x_104_ = lean_io_promise_resolve(v___x_103_, v_promise_93_);
return v___y_96_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_Waiter_race___at___00__private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_resolveInterestWaiter_spec__0___boxed(lean_object* v_x_108_, lean_object* v_w_109_, lean_object* v_lose_110_, lean_object* v___y_111_){
_start:
{
uint8_t v_x_boxed_112_; uint8_t v_res_113_; lean_object* v_r_114_; 
v_x_boxed_112_ = lean_unbox(v_x_108_);
v_res_113_ = l_Std_Async_Waiter_race___at___00__private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_resolveInterestWaiter_spec__0(v_x_boxed_112_, v_w_109_, v_lose_110_);
lean_dec_ref(v_w_109_);
v_r_114_ = lean_box(v_res_113_);
return v_r_114_;
}
}
LEAN_EXPORT uint8_t l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_resolveInterestWaiter(lean_object* v_waiter_115_, uint8_t v_x_116_){
_start:
{
lean_object* v_lose_118_; uint8_t v___x_119_; 
v_lose_118_ = ((lean_object*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_Consumer_resolve___closed__0));
v___x_119_ = l_Std_Async_Waiter_race___at___00__private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_resolveInterestWaiter_spec__0(v_x_116_, v_waiter_115_, v_lose_118_);
return v___x_119_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_resolveInterestWaiter___boxed(lean_object* v_waiter_120_, lean_object* v_x_121_, lean_object* v___y_122_){
_start:
{
uint8_t v_x_boxed_123_; uint8_t v_res_124_; lean_object* v_r_125_; 
v_x_boxed_123_ = lean_unbox(v_x_121_);
v_res_124_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_resolveInterestWaiter(v_waiter_120_, v_x_boxed_123_);
lean_dec_ref(v_waiter_120_);
v_r_125_ = lean_box(v_res_124_);
return v_r_125_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_mkStream___lam__0(lean_object* v_x_137_){
_start:
{
if (lean_obj_tag(v_x_137_) == 0)
{
lean_object* v_a_139_; lean_object* v___x_141_; uint8_t v_isShared_142_; uint8_t v_isSharedCheck_147_; 
v_a_139_ = lean_ctor_get(v_x_137_, 0);
v_isSharedCheck_147_ = !lean_is_exclusive(v_x_137_);
if (v_isSharedCheck_147_ == 0)
{
v___x_141_ = v_x_137_;
v_isShared_142_ = v_isSharedCheck_147_;
goto v_resetjp_140_;
}
else
{
lean_inc(v_a_139_);
lean_dec(v_x_137_);
v___x_141_ = lean_box(0);
v_isShared_142_ = v_isSharedCheck_147_;
goto v_resetjp_140_;
}
v_resetjp_140_:
{
lean_object* v___x_144_; 
if (v_isShared_142_ == 0)
{
v___x_144_ = v___x_141_;
goto v_reusejp_143_;
}
else
{
lean_object* v_reuseFailAlloc_146_; 
v_reuseFailAlloc_146_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_146_, 0, v_a_139_);
v___x_144_ = v_reuseFailAlloc_146_;
goto v_reusejp_143_;
}
v_reusejp_143_:
{
lean_object* v___x_145_; 
v___x_145_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_145_, 0, v___x_144_);
return v___x_145_;
}
}
}
else
{
lean_object* v_a_148_; lean_object* v___x_150_; uint8_t v_isShared_151_; uint8_t v_isSharedCheck_156_; 
v_a_148_ = lean_ctor_get(v_x_137_, 0);
v_isSharedCheck_156_ = !lean_is_exclusive(v_x_137_);
if (v_isSharedCheck_156_ == 0)
{
v___x_150_ = v_x_137_;
v_isShared_151_ = v_isSharedCheck_156_;
goto v_resetjp_149_;
}
else
{
lean_inc(v_a_148_);
lean_dec(v_x_137_);
v___x_150_ = lean_box(0);
v_isShared_151_ = v_isSharedCheck_156_;
goto v_resetjp_149_;
}
v_resetjp_149_:
{
lean_object* v___x_153_; 
if (v_isShared_151_ == 0)
{
v___x_153_ = v___x_150_;
goto v_reusejp_152_;
}
else
{
lean_object* v_reuseFailAlloc_155_; 
v_reuseFailAlloc_155_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_155_, 0, v_a_148_);
v___x_153_ = v_reuseFailAlloc_155_;
goto v_reusejp_152_;
}
v_reusejp_152_:
{
lean_object* v___x_154_; 
v___x_154_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_154_, 0, v___x_153_);
return v___x_154_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_mkStream___lam__0___boxed(lean_object* v_x_157_, lean_object* v___y_158_){
_start:
{
lean_object* v_res_159_; 
v_res_159_ = l_Std_Http_Body_mkStream___lam__0(v_x_157_);
return v_res_159_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_mkStream(){
_start:
{
lean_object* v___f_165_; uint8_t v___x_166_; lean_object* v___x_167_; lean_object* v___x_168_; lean_object* v___x_169_; lean_object* v___x_170_; lean_object* v___x_171_; lean_object* v___x_172_; 
v___f_165_ = ((lean_object*)(l_Std_Http_Body_mkStream___closed__0));
v___x_166_ = 0;
v___x_167_ = ((lean_object*)(l_Std_Http_Body_mkStream___closed__1));
v___x_168_ = lean_unsigned_to_nat(0u);
v___x_169_ = l_Std_Mutex_new___redArg(v___x_167_);
v___x_170_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_170_, 0, v___x_169_);
v___x_171_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_171_, 0, v___x_170_);
v___x_172_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_168_, v___x_166_, v___x_171_, v___f_165_);
return v___x_172_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_mkStream___boxed(lean_object* v___y_173_){
_start:
{
lean_object* v_res_174_; 
v_res_174_ = l_Std_Http_Body_mkStream();
return v_res_174_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_decreaseKnownSize(lean_object* v_knownSize_175_, lean_object* v_chunk_176_){
_start:
{
if (lean_obj_tag(v_knownSize_175_) == 1)
{
lean_object* v_val_177_; 
v_val_177_ = lean_ctor_get(v_knownSize_175_, 0);
lean_inc(v_val_177_);
if (lean_obj_tag(v_val_177_) == 1)
{
lean_object* v___x_179_; uint8_t v_isShared_180_; uint8_t v_isSharedCheck_195_; 
v_isSharedCheck_195_ = !lean_is_exclusive(v_knownSize_175_);
if (v_isSharedCheck_195_ == 0)
{
lean_object* v_unused_196_; 
v_unused_196_ = lean_ctor_get(v_knownSize_175_, 0);
lean_dec(v_unused_196_);
v___x_179_ = v_knownSize_175_;
v_isShared_180_ = v_isSharedCheck_195_;
goto v_resetjp_178_;
}
else
{
lean_dec(v_knownSize_175_);
v___x_179_ = lean_box(0);
v_isShared_180_ = v_isSharedCheck_195_;
goto v_resetjp_178_;
}
v_resetjp_178_:
{
lean_object* v_n_181_; lean_object* v___x_183_; uint8_t v_isShared_184_; uint8_t v_isSharedCheck_194_; 
v_n_181_ = lean_ctor_get(v_val_177_, 0);
v_isSharedCheck_194_ = !lean_is_exclusive(v_val_177_);
if (v_isSharedCheck_194_ == 0)
{
v___x_183_ = v_val_177_;
v_isShared_184_ = v_isSharedCheck_194_;
goto v_resetjp_182_;
}
else
{
lean_inc(v_n_181_);
lean_dec(v_val_177_);
v___x_183_ = lean_box(0);
v_isShared_184_ = v_isSharedCheck_194_;
goto v_resetjp_182_;
}
v_resetjp_182_:
{
lean_object* v_data_185_; lean_object* v___x_186_; lean_object* v___x_187_; lean_object* v___x_189_; 
v_data_185_ = lean_ctor_get(v_chunk_176_, 0);
v___x_186_ = lean_byte_array_size(v_data_185_);
v___x_187_ = lean_nat_sub(v_n_181_, v___x_186_);
lean_dec(v_n_181_);
if (v_isShared_184_ == 0)
{
lean_ctor_set(v___x_183_, 0, v___x_187_);
v___x_189_ = v___x_183_;
goto v_reusejp_188_;
}
else
{
lean_object* v_reuseFailAlloc_193_; 
v_reuseFailAlloc_193_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_193_, 0, v___x_187_);
v___x_189_ = v_reuseFailAlloc_193_;
goto v_reusejp_188_;
}
v_reusejp_188_:
{
lean_object* v___x_191_; 
if (v_isShared_180_ == 0)
{
lean_ctor_set(v___x_179_, 0, v___x_189_);
v___x_191_ = v___x_179_;
goto v_reusejp_190_;
}
else
{
lean_object* v_reuseFailAlloc_192_; 
v_reuseFailAlloc_192_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_192_, 0, v___x_189_);
v___x_191_ = v_reuseFailAlloc_192_;
goto v_reusejp_190_;
}
v_reusejp_190_:
{
return v___x_191_;
}
}
}
}
}
else
{
lean_dec(v_val_177_);
return v_knownSize_175_;
}
}
else
{
return v_knownSize_175_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_decreaseKnownSize___boxed(lean_object* v_knownSize_197_, lean_object* v_chunk_198_){
_start:
{
lean_object* v_res_199_; 
v_res_199_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_decreaseKnownSize(v_knownSize_197_, v_chunk_198_);
lean_dec_ref(v_chunk_198_);
return v_res_199_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___redArg___lam__0(lean_object* v_pendingProducer_200_, lean_object* v_pendingConsumer_201_, uint8_t v_closed_202_, lean_object* v_knownSize_203_, lean_object* v_pendingIncompleteChunk_204_, lean_object* v_closeError_205_, lean_object* v_inst_206_, lean_object* v_interestWaiter_207_, lean_object* v___y_208_){
_start:
{
lean_object* v___x_209_; lean_object* v___x_210_; lean_object* v___x_211_; 
v___x_209_ = lean_alloc_ctor(0, 6, 1);
lean_ctor_set(v___x_209_, 0, v_pendingProducer_200_);
lean_ctor_set(v___x_209_, 1, v_pendingConsumer_201_);
lean_ctor_set(v___x_209_, 2, v_interestWaiter_207_);
lean_ctor_set(v___x_209_, 3, v_knownSize_203_);
lean_ctor_set(v___x_209_, 4, v_pendingIncompleteChunk_204_);
lean_ctor_set(v___x_209_, 5, v_closeError_205_);
lean_ctor_set_uint8(v___x_209_, sizeof(void*)*6, v_closed_202_);
lean_inc(v___y_208_);
v___x_210_ = lean_alloc_closure((void*)(l_ST_Prim_Ref_set___boxed), 5, 4);
lean_closure_set(v___x_210_, 0, lean_box(0));
lean_closure_set(v___x_210_, 1, lean_box(0));
lean_closure_set(v___x_210_, 2, v___y_208_);
lean_closure_set(v___x_210_, 3, v___x_209_);
v___x_211_ = lean_apply_2(v_inst_206_, lean_box(0), v___x_210_);
return v___x_211_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___redArg___lam__0___boxed(lean_object* v_pendingProducer_212_, lean_object* v_pendingConsumer_213_, lean_object* v_closed_214_, lean_object* v_knownSize_215_, lean_object* v_pendingIncompleteChunk_216_, lean_object* v_closeError_217_, lean_object* v_inst_218_, lean_object* v_interestWaiter_219_, lean_object* v___y_220_){
_start:
{
uint8_t v_closed_boxed_221_; lean_object* v_res_222_; 
v_closed_boxed_221_ = lean_unbox(v_closed_214_);
v_res_222_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___redArg___lam__0(v_pendingProducer_212_, v_pendingConsumer_213_, v_closed_boxed_221_, v_knownSize_215_, v_pendingIncompleteChunk_216_, v_closeError_217_, v_inst_218_, v_interestWaiter_219_, v___y_220_);
lean_dec(v___y_220_);
return v_res_222_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___redArg___lam__1(lean_object* v___f_223_, lean_object* v___y_224_, lean_object* v_a_225_){
_start:
{
lean_object* v___x_226_; 
lean_inc(v___y_224_);
v___x_226_ = lean_apply_2(v___f_223_, v_a_225_, v___y_224_);
return v___x_226_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___redArg___lam__1___boxed(lean_object* v___f_227_, lean_object* v___y_228_, lean_object* v_a_229_){
_start:
{
lean_object* v_res_230_; 
v_res_230_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___redArg___lam__1(v___f_227_, v___y_228_, v_a_229_);
lean_dec(v___y_228_);
return v_res_230_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___redArg___lam__4(lean_object* v_toApplicative_231_, lean_object* v_interestWaiter_232_, lean_object* v_toBind_233_, lean_object* v___f_234_, lean_object* v___f_235_, uint8_t v_a_236_){
_start:
{
if (v_a_236_ == 0)
{
lean_object* v_toPure_237_; lean_object* v___x_238_; lean_object* v___x_239_; 
lean_dec(v___f_235_);
v_toPure_237_ = lean_ctor_get(v_toApplicative_231_, 1);
lean_inc(v_toPure_237_);
lean_dec_ref(v_toApplicative_231_);
v___x_238_ = lean_apply_2(v_toPure_237_, lean_box(0), v_interestWaiter_232_);
v___x_239_ = lean_apply_4(v_toBind_233_, lean_box(0), lean_box(0), v___x_238_, v___f_234_);
return v___x_239_;
}
else
{
lean_object* v_toPure_240_; lean_object* v___x_241_; lean_object* v___x_242_; lean_object* v___x_243_; 
lean_dec(v___f_234_);
lean_dec(v_interestWaiter_232_);
v_toPure_240_ = lean_ctor_get(v_toApplicative_231_, 1);
lean_inc(v_toPure_240_);
lean_dec_ref(v_toApplicative_231_);
v___x_241_ = lean_box(0);
v___x_242_ = lean_apply_2(v_toPure_240_, lean_box(0), v___x_241_);
v___x_243_ = lean_apply_4(v_toBind_233_, lean_box(0), lean_box(0), v___x_242_, v___f_235_);
return v___x_243_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___redArg___lam__4___boxed(lean_object* v_toApplicative_244_, lean_object* v_interestWaiter_245_, lean_object* v_toBind_246_, lean_object* v___f_247_, lean_object* v___f_248_, lean_object* v_a_249_){
_start:
{
uint8_t v_a_boxed_250_; lean_object* v_res_251_; 
v_a_boxed_250_ = lean_unbox(v_a_249_);
v_res_251_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___redArg___lam__4(v_toApplicative_244_, v_interestWaiter_245_, v_toBind_246_, v___f_247_, v___f_248_, v_a_boxed_250_);
return v_res_251_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___redArg___lam__2(lean_object* v_pendingProducer_252_, uint8_t v_closed_253_, lean_object* v_knownSize_254_, lean_object* v_pendingIncompleteChunk_255_, lean_object* v_closeError_256_, lean_object* v_inst_257_, lean_object* v_interestWaiter_258_, lean_object* v_toApplicative_259_, lean_object* v_toBind_260_, lean_object* v_pendingConsumer_261_, lean_object* v___y_262_){
_start:
{
lean_object* v___x_263_; lean_object* v___f_264_; 
v___x_263_ = lean_box(v_closed_253_);
lean_inc(v_inst_257_);
v___f_264_ = lean_alloc_closure((void*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___redArg___lam__0___boxed), 9, 7);
lean_closure_set(v___f_264_, 0, v_pendingProducer_252_);
lean_closure_set(v___f_264_, 1, v_pendingConsumer_261_);
lean_closure_set(v___f_264_, 2, v___x_263_);
lean_closure_set(v___f_264_, 3, v_knownSize_254_);
lean_closure_set(v___f_264_, 4, v_pendingIncompleteChunk_255_);
lean_closure_set(v___f_264_, 5, v_closeError_256_);
lean_closure_set(v___f_264_, 6, v_inst_257_);
if (lean_obj_tag(v_interestWaiter_258_) == 0)
{
lean_object* v_toPure_265_; lean_object* v___f_266_; lean_object* v___x_267_; lean_object* v___x_268_; 
lean_dec(v_inst_257_);
v_toPure_265_ = lean_ctor_get(v_toApplicative_259_, 1);
lean_inc(v_toPure_265_);
lean_dec_ref(v_toApplicative_259_);
lean_inc(v___y_262_);
v___f_266_ = lean_alloc_closure((void*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___redArg___lam__1___boxed), 3, 2);
lean_closure_set(v___f_266_, 0, v___f_264_);
lean_closure_set(v___f_266_, 1, v___y_262_);
v___x_267_ = lean_apply_2(v_toPure_265_, lean_box(0), v_interestWaiter_258_);
v___x_268_ = lean_apply_4(v_toBind_260_, lean_box(0), lean_box(0), v___x_267_, v___f_266_);
return v___x_268_;
}
else
{
lean_object* v_val_269_; lean_object* v_finished_270_; lean_object* v___f_271_; lean_object* v___f_272_; lean_object* v___x_273_; lean_object* v___x_274_; lean_object* v___x_275_; 
v_val_269_ = lean_ctor_get(v_interestWaiter_258_, 0);
v_finished_270_ = lean_ctor_get(v_val_269_, 0);
lean_inc(v_finished_270_);
lean_inc(v___y_262_);
v___f_271_ = lean_alloc_closure((void*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___redArg___lam__1___boxed), 3, 2);
lean_closure_set(v___f_271_, 0, v___f_264_);
lean_closure_set(v___f_271_, 1, v___y_262_);
lean_inc_ref(v___f_271_);
lean_inc(v_toBind_260_);
v___f_272_ = lean_alloc_closure((void*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___redArg___lam__4___boxed), 6, 5);
lean_closure_set(v___f_272_, 0, v_toApplicative_259_);
lean_closure_set(v___f_272_, 1, v_interestWaiter_258_);
lean_closure_set(v___f_272_, 2, v_toBind_260_);
lean_closure_set(v___f_272_, 3, v___f_271_);
lean_closure_set(v___f_272_, 4, v___f_271_);
v___x_273_ = lean_alloc_closure((void*)(l_ST_Prim_Ref_get___boxed), 4, 3);
lean_closure_set(v___x_273_, 0, lean_box(0));
lean_closure_set(v___x_273_, 1, lean_box(0));
lean_closure_set(v___x_273_, 2, v_finished_270_);
v___x_274_ = lean_apply_2(v_inst_257_, lean_box(0), v___x_273_);
v___x_275_ = lean_apply_4(v_toBind_260_, lean_box(0), lean_box(0), v___x_274_, v___f_272_);
return v___x_275_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___redArg___lam__2___boxed(lean_object* v_pendingProducer_276_, lean_object* v_closed_277_, lean_object* v_knownSize_278_, lean_object* v_pendingIncompleteChunk_279_, lean_object* v_closeError_280_, lean_object* v_inst_281_, lean_object* v_interestWaiter_282_, lean_object* v_toApplicative_283_, lean_object* v_toBind_284_, lean_object* v_pendingConsumer_285_, lean_object* v___y_286_){
_start:
{
uint8_t v_closed_boxed_287_; lean_object* v_res_288_; 
v_closed_boxed_287_ = lean_unbox(v_closed_277_);
v_res_288_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___redArg___lam__2(v_pendingProducer_276_, v_closed_boxed_287_, v_knownSize_278_, v_pendingIncompleteChunk_279_, v_closeError_280_, v_inst_281_, v_interestWaiter_282_, v_toApplicative_283_, v_toBind_284_, v_pendingConsumer_285_, v___y_286_);
lean_dec(v___y_286_);
return v_res_288_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___redArg___lam__3(lean_object* v___f_289_, lean_object* v___y_290_, lean_object* v_a_291_){
_start:
{
lean_object* v___x_292_; 
lean_inc(v___y_290_);
v___x_292_ = lean_apply_2(v___f_289_, v_a_291_, v___y_290_);
return v___x_292_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___redArg___lam__3___boxed(lean_object* v___f_293_, lean_object* v___y_294_, lean_object* v_a_295_){
_start:
{
lean_object* v_res_296_; 
v_res_296_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___redArg___lam__3(v___f_293_, v___y_294_, v_a_295_);
lean_dec(v___y_294_);
return v_res_296_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___redArg___lam__7(lean_object* v_toApplicative_297_, lean_object* v_pendingConsumer_298_, lean_object* v_toBind_299_, lean_object* v___f_300_, lean_object* v___f_301_, uint8_t v_a_302_){
_start:
{
if (v_a_302_ == 0)
{
lean_object* v_toPure_303_; lean_object* v___x_304_; lean_object* v___x_305_; 
lean_dec(v___f_301_);
v_toPure_303_ = lean_ctor_get(v_toApplicative_297_, 1);
lean_inc(v_toPure_303_);
lean_dec_ref(v_toApplicative_297_);
v___x_304_ = lean_apply_2(v_toPure_303_, lean_box(0), v_pendingConsumer_298_);
v___x_305_ = lean_apply_4(v_toBind_299_, lean_box(0), lean_box(0), v___x_304_, v___f_300_);
return v___x_305_;
}
else
{
lean_object* v_toPure_306_; lean_object* v___x_307_; lean_object* v___x_308_; lean_object* v___x_309_; 
lean_dec(v___f_300_);
lean_dec(v_pendingConsumer_298_);
v_toPure_306_ = lean_ctor_get(v_toApplicative_297_, 1);
lean_inc(v_toPure_306_);
lean_dec_ref(v_toApplicative_297_);
v___x_307_ = lean_box(0);
v___x_308_ = lean_apply_2(v_toPure_306_, lean_box(0), v___x_307_);
v___x_309_ = lean_apply_4(v_toBind_299_, lean_box(0), lean_box(0), v___x_308_, v___f_301_);
return v___x_309_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___redArg___lam__7___boxed(lean_object* v_toApplicative_310_, lean_object* v_pendingConsumer_311_, lean_object* v_toBind_312_, lean_object* v___f_313_, lean_object* v___f_314_, lean_object* v_a_315_){
_start:
{
uint8_t v_a_boxed_316_; lean_object* v_res_317_; 
v_a_boxed_316_ = lean_unbox(v_a_315_);
v_res_317_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___redArg___lam__7(v_toApplicative_310_, v_pendingConsumer_311_, v_toBind_312_, v___f_313_, v___f_314_, v_a_boxed_316_);
return v_res_317_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___redArg___lam__5(lean_object* v_inst_318_, lean_object* v_toApplicative_319_, lean_object* v_toBind_320_, lean_object* v___y_321_, lean_object* v_a_322_){
_start:
{
lean_object* v_pendingProducer_323_; lean_object* v_pendingConsumer_324_; lean_object* v_interestWaiter_325_; uint8_t v_closed_326_; lean_object* v_knownSize_327_; lean_object* v_pendingIncompleteChunk_328_; lean_object* v_closeError_329_; lean_object* v___x_330_; lean_object* v___f_331_; lean_object* v___y_333_; 
v_pendingProducer_323_ = lean_ctor_get(v_a_322_, 0);
lean_inc(v_pendingProducer_323_);
v_pendingConsumer_324_ = lean_ctor_get(v_a_322_, 1);
lean_inc(v_pendingConsumer_324_);
v_interestWaiter_325_ = lean_ctor_get(v_a_322_, 2);
lean_inc(v_interestWaiter_325_);
v_closed_326_ = lean_ctor_get_uint8(v_a_322_, sizeof(void*)*6);
v_knownSize_327_ = lean_ctor_get(v_a_322_, 3);
lean_inc(v_knownSize_327_);
v_pendingIncompleteChunk_328_ = lean_ctor_get(v_a_322_, 4);
lean_inc(v_pendingIncompleteChunk_328_);
v_closeError_329_ = lean_ctor_get(v_a_322_, 5);
lean_inc(v_closeError_329_);
lean_dec_ref(v_a_322_);
v___x_330_ = lean_box(v_closed_326_);
lean_inc(v_toBind_320_);
lean_inc_ref(v_toApplicative_319_);
lean_inc(v_inst_318_);
v___f_331_ = lean_alloc_closure((void*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___redArg___lam__2___boxed), 11, 9);
lean_closure_set(v___f_331_, 0, v_pendingProducer_323_);
lean_closure_set(v___f_331_, 1, v___x_330_);
lean_closure_set(v___f_331_, 2, v_knownSize_327_);
lean_closure_set(v___f_331_, 3, v_pendingIncompleteChunk_328_);
lean_closure_set(v___f_331_, 4, v_closeError_329_);
lean_closure_set(v___f_331_, 5, v_inst_318_);
lean_closure_set(v___f_331_, 6, v_interestWaiter_325_);
lean_closure_set(v___f_331_, 7, v_toApplicative_319_);
lean_closure_set(v___f_331_, 8, v_toBind_320_);
if (lean_obj_tag(v_pendingConsumer_324_) == 1)
{
lean_object* v_val_338_; 
v_val_338_ = lean_ctor_get(v_pendingConsumer_324_, 0);
if (lean_obj_tag(v_val_338_) == 1)
{
lean_object* v_finished_339_; lean_object* v_finished_340_; lean_object* v___f_341_; lean_object* v___f_342_; lean_object* v___x_343_; lean_object* v___x_344_; lean_object* v___x_345_; 
v_finished_339_ = lean_ctor_get(v_val_338_, 0);
v_finished_340_ = lean_ctor_get(v_finished_339_, 0);
lean_inc(v_finished_340_);
lean_inc(v___y_321_);
v___f_341_ = lean_alloc_closure((void*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___redArg___lam__3___boxed), 3, 2);
lean_closure_set(v___f_341_, 0, v___f_331_);
lean_closure_set(v___f_341_, 1, v___y_321_);
lean_inc_ref(v___f_341_);
lean_inc(v_toBind_320_);
v___f_342_ = lean_alloc_closure((void*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___redArg___lam__7___boxed), 6, 5);
lean_closure_set(v___f_342_, 0, v_toApplicative_319_);
lean_closure_set(v___f_342_, 1, v_pendingConsumer_324_);
lean_closure_set(v___f_342_, 2, v_toBind_320_);
lean_closure_set(v___f_342_, 3, v___f_341_);
lean_closure_set(v___f_342_, 4, v___f_341_);
v___x_343_ = lean_alloc_closure((void*)(l_ST_Prim_Ref_get___boxed), 4, 3);
lean_closure_set(v___x_343_, 0, lean_box(0));
lean_closure_set(v___x_343_, 1, lean_box(0));
lean_closure_set(v___x_343_, 2, v_finished_340_);
v___x_344_ = lean_apply_2(v_inst_318_, lean_box(0), v___x_343_);
v___x_345_ = lean_apply_4(v_toBind_320_, lean_box(0), lean_box(0), v___x_344_, v___f_342_);
return v___x_345_;
}
else
{
lean_dec(v_inst_318_);
v___y_333_ = v___y_321_;
goto v___jp_332_;
}
}
else
{
lean_dec(v_inst_318_);
v___y_333_ = v___y_321_;
goto v___jp_332_;
}
v___jp_332_:
{
lean_object* v_toPure_334_; lean_object* v___f_335_; lean_object* v___x_336_; lean_object* v___x_337_; 
v_toPure_334_ = lean_ctor_get(v_toApplicative_319_, 1);
lean_inc(v_toPure_334_);
lean_dec_ref(v_toApplicative_319_);
lean_inc(v___y_333_);
v___f_335_ = lean_alloc_closure((void*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___redArg___lam__3___boxed), 3, 2);
lean_closure_set(v___f_335_, 0, v___f_331_);
lean_closure_set(v___f_335_, 1, v___y_333_);
v___x_336_ = lean_apply_2(v_toPure_334_, lean_box(0), v_pendingConsumer_324_);
v___x_337_ = lean_apply_4(v_toBind_320_, lean_box(0), lean_box(0), v___x_336_, v___f_335_);
return v___x_337_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___redArg___lam__5___boxed(lean_object* v_inst_346_, lean_object* v_toApplicative_347_, lean_object* v_toBind_348_, lean_object* v___y_349_, lean_object* v_a_350_){
_start:
{
lean_object* v_res_351_; 
v_res_351_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___redArg___lam__5(v_inst_346_, v_toApplicative_347_, v_toBind_348_, v___y_349_, v_a_350_);
lean_dec(v___y_349_);
return v_res_351_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___redArg(lean_object* v_inst_352_, lean_object* v_inst_353_, lean_object* v___y_354_){
_start:
{
lean_object* v_toApplicative_355_; lean_object* v_toBind_356_; lean_object* v___f_357_; lean_object* v___x_358_; lean_object* v___x_359_; lean_object* v___x_360_; 
v_toApplicative_355_ = lean_ctor_get(v_inst_352_, 0);
lean_inc_ref(v_toApplicative_355_);
v_toBind_356_ = lean_ctor_get(v_inst_352_, 1);
lean_inc_n(v_toBind_356_, 2);
lean_dec_ref(v_inst_352_);
lean_inc_n(v___y_354_, 2);
lean_inc(v_inst_353_);
v___f_357_ = lean_alloc_closure((void*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___redArg___lam__5___boxed), 5, 4);
lean_closure_set(v___f_357_, 0, v_inst_353_);
lean_closure_set(v___f_357_, 1, v_toApplicative_355_);
lean_closure_set(v___f_357_, 2, v_toBind_356_);
lean_closure_set(v___f_357_, 3, v___y_354_);
v___x_358_ = lean_alloc_closure((void*)(l_ST_Prim_Ref_get___boxed), 4, 3);
lean_closure_set(v___x_358_, 0, lean_box(0));
lean_closure_set(v___x_358_, 1, lean_box(0));
lean_closure_set(v___x_358_, 2, v___y_354_);
v___x_359_ = lean_apply_2(v_inst_353_, lean_box(0), v___x_358_);
v___x_360_ = lean_apply_4(v_toBind_356_, lean_box(0), lean_box(0), v___x_359_, v___f_357_);
return v___x_360_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___redArg___boxed(lean_object* v_inst_361_, lean_object* v_inst_362_, lean_object* v___y_363_){
_start:
{
lean_object* v_res_364_; 
v_res_364_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___redArg(v_inst_361_, v_inst_362_, v___y_363_);
lean_dec(v___y_363_);
return v_res_364_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters(lean_object* v_m_365_, lean_object* v_inst_366_, lean_object* v_inst_367_, lean_object* v___y_368_){
_start:
{
lean_object* v___x_369_; 
v___x_369_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___redArg(v_inst_366_, v_inst_367_, v___y_368_);
return v___x_369_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___boxed(lean_object* v_m_370_, lean_object* v_inst_371_, lean_object* v_inst_372_, lean_object* v___y_373_){
_start:
{
lean_object* v_res_374_; 
v_res_374_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters(v_m_370_, v_inst_371_, v_inst_372_, v___y_373_);
lean_dec(v___y_373_);
return v_res_374_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_signalInterest___redArg___lam__0(lean_object* v_pendingProducer_375_, lean_object* v_pendingConsumer_376_, uint8_t v_closed_377_, lean_object* v_knownSize_378_, lean_object* v_pendingIncompleteChunk_379_, lean_object* v_closeError_380_, lean_object* v___y_381_, lean_object* v_inst_382_, lean_object* v_a_383_){
_start:
{
lean_object* v___x_384_; lean_object* v___x_385_; lean_object* v___x_386_; lean_object* v___x_387_; 
v___x_384_ = lean_box(0);
v___x_385_ = lean_alloc_ctor(0, 6, 1);
lean_ctor_set(v___x_385_, 0, v_pendingProducer_375_);
lean_ctor_set(v___x_385_, 1, v_pendingConsumer_376_);
lean_ctor_set(v___x_385_, 2, v___x_384_);
lean_ctor_set(v___x_385_, 3, v_knownSize_378_);
lean_ctor_set(v___x_385_, 4, v_pendingIncompleteChunk_379_);
lean_ctor_set(v___x_385_, 5, v_closeError_380_);
lean_ctor_set_uint8(v___x_385_, sizeof(void*)*6, v_closed_377_);
lean_inc(v___y_381_);
v___x_386_ = lean_alloc_closure((void*)(l_ST_Prim_Ref_set___boxed), 5, 4);
lean_closure_set(v___x_386_, 0, lean_box(0));
lean_closure_set(v___x_386_, 1, lean_box(0));
lean_closure_set(v___x_386_, 2, v___y_381_);
lean_closure_set(v___x_386_, 3, v___x_385_);
v___x_387_ = lean_apply_2(v_inst_382_, lean_box(0), v___x_386_);
return v___x_387_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_signalInterest___redArg___lam__0___boxed(lean_object* v_pendingProducer_388_, lean_object* v_pendingConsumer_389_, lean_object* v_closed_390_, lean_object* v_knownSize_391_, lean_object* v_pendingIncompleteChunk_392_, lean_object* v_closeError_393_, lean_object* v___y_394_, lean_object* v_inst_395_, lean_object* v_a_396_){
_start:
{
uint8_t v_closed_boxed_397_; lean_object* v_res_398_; 
v_closed_boxed_397_ = lean_unbox(v_closed_390_);
v_res_398_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_signalInterest___redArg___lam__0(v_pendingProducer_388_, v_pendingConsumer_389_, v_closed_boxed_397_, v_knownSize_391_, v_pendingIncompleteChunk_392_, v_closeError_393_, v___y_394_, v_inst_395_, v_a_396_);
lean_dec(v___y_394_);
return v_res_398_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_signalInterest___redArg___lam__1(lean_object* v_toApplicative_399_, lean_object* v___y_400_, lean_object* v_inst_401_, lean_object* v_inst_402_, lean_object* v_toBind_403_, lean_object* v_a_404_){
_start:
{
lean_object* v_interestWaiter_405_; 
v_interestWaiter_405_ = lean_ctor_get(v_a_404_, 2);
lean_inc(v_interestWaiter_405_);
if (lean_obj_tag(v_interestWaiter_405_) == 1)
{
lean_object* v_toFunctor_406_; lean_object* v_pendingProducer_407_; lean_object* v_pendingConsumer_408_; uint8_t v_closed_409_; lean_object* v_knownSize_410_; lean_object* v_pendingIncompleteChunk_411_; lean_object* v_closeError_412_; lean_object* v_val_413_; lean_object* v_mapConst_414_; lean_object* v___x_415_; lean_object* v___f_416_; uint8_t v___x_417_; lean_object* v___x_418_; lean_object* v___x_419_; lean_object* v___x_420_; lean_object* v___x_421_; lean_object* v___x_422_; lean_object* v___x_423_; 
v_toFunctor_406_ = lean_ctor_get(v_toApplicative_399_, 0);
lean_inc_ref(v_toFunctor_406_);
lean_dec_ref(v_toApplicative_399_);
v_pendingProducer_407_ = lean_ctor_get(v_a_404_, 0);
lean_inc(v_pendingProducer_407_);
v_pendingConsumer_408_ = lean_ctor_get(v_a_404_, 1);
lean_inc(v_pendingConsumer_408_);
v_closed_409_ = lean_ctor_get_uint8(v_a_404_, sizeof(void*)*6);
v_knownSize_410_ = lean_ctor_get(v_a_404_, 3);
lean_inc(v_knownSize_410_);
v_pendingIncompleteChunk_411_ = lean_ctor_get(v_a_404_, 4);
lean_inc(v_pendingIncompleteChunk_411_);
v_closeError_412_ = lean_ctor_get(v_a_404_, 5);
lean_inc(v_closeError_412_);
lean_dec_ref(v_a_404_);
v_val_413_ = lean_ctor_get(v_interestWaiter_405_, 0);
lean_inc(v_val_413_);
lean_dec_ref_known(v_interestWaiter_405_, 1);
v_mapConst_414_ = lean_ctor_get(v_toFunctor_406_, 1);
lean_inc(v_mapConst_414_);
lean_dec_ref(v_toFunctor_406_);
v___x_415_ = lean_box(v_closed_409_);
lean_inc(v___y_400_);
v___f_416_ = lean_alloc_closure((void*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_signalInterest___redArg___lam__0___boxed), 9, 8);
lean_closure_set(v___f_416_, 0, v_pendingProducer_407_);
lean_closure_set(v___f_416_, 1, v_pendingConsumer_408_);
lean_closure_set(v___f_416_, 2, v___x_415_);
lean_closure_set(v___f_416_, 3, v_knownSize_410_);
lean_closure_set(v___f_416_, 4, v_pendingIncompleteChunk_411_);
lean_closure_set(v___f_416_, 5, v_closeError_412_);
lean_closure_set(v___f_416_, 6, v___y_400_);
lean_closure_set(v___f_416_, 7, v_inst_401_);
v___x_417_ = 1;
v___x_418_ = lean_box(v___x_417_);
v___x_419_ = lean_alloc_closure((void*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_resolveInterestWaiter___boxed), 3, 2);
lean_closure_set(v___x_419_, 0, v_val_413_);
lean_closure_set(v___x_419_, 1, v___x_418_);
v___x_420_ = lean_apply_2(v_inst_402_, lean_box(0), v___x_419_);
v___x_421_ = lean_box(0);
v___x_422_ = lean_apply_4(v_mapConst_414_, lean_box(0), lean_box(0), v___x_421_, v___x_420_);
v___x_423_ = lean_apply_4(v_toBind_403_, lean_box(0), lean_box(0), v___x_422_, v___f_416_);
return v___x_423_;
}
else
{
lean_object* v_toPure_424_; lean_object* v___x_425_; lean_object* v___x_426_; 
lean_dec(v_interestWaiter_405_);
lean_dec_ref(v_a_404_);
lean_dec(v_toBind_403_);
lean_dec(v_inst_402_);
lean_dec(v_inst_401_);
v_toPure_424_ = lean_ctor_get(v_toApplicative_399_, 1);
lean_inc(v_toPure_424_);
lean_dec_ref(v_toApplicative_399_);
v___x_425_ = lean_box(0);
v___x_426_ = lean_apply_2(v_toPure_424_, lean_box(0), v___x_425_);
return v___x_426_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_signalInterest___redArg___lam__1___boxed(lean_object* v_toApplicative_427_, lean_object* v___y_428_, lean_object* v_inst_429_, lean_object* v_inst_430_, lean_object* v_toBind_431_, lean_object* v_a_432_){
_start:
{
lean_object* v_res_433_; 
v_res_433_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_signalInterest___redArg___lam__1(v_toApplicative_427_, v___y_428_, v_inst_429_, v_inst_430_, v_toBind_431_, v_a_432_);
lean_dec(v___y_428_);
return v_res_433_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_signalInterest___redArg(lean_object* v_inst_434_, lean_object* v_inst_435_, lean_object* v_inst_436_, lean_object* v___y_437_){
_start:
{
lean_object* v_toApplicative_438_; lean_object* v_toBind_439_; lean_object* v___f_440_; lean_object* v___x_441_; lean_object* v___x_442_; lean_object* v___x_443_; 
v_toApplicative_438_ = lean_ctor_get(v_inst_434_, 0);
lean_inc_ref(v_toApplicative_438_);
v_toBind_439_ = lean_ctor_get(v_inst_434_, 1);
lean_inc_n(v_toBind_439_, 2);
lean_dec_ref(v_inst_434_);
lean_inc(v_inst_435_);
lean_inc_n(v___y_437_, 2);
v___f_440_ = lean_alloc_closure((void*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_signalInterest___redArg___lam__1___boxed), 6, 5);
lean_closure_set(v___f_440_, 0, v_toApplicative_438_);
lean_closure_set(v___f_440_, 1, v___y_437_);
lean_closure_set(v___f_440_, 2, v_inst_435_);
lean_closure_set(v___f_440_, 3, v_inst_436_);
lean_closure_set(v___f_440_, 4, v_toBind_439_);
v___x_441_ = lean_alloc_closure((void*)(l_ST_Prim_Ref_get___boxed), 4, 3);
lean_closure_set(v___x_441_, 0, lean_box(0));
lean_closure_set(v___x_441_, 1, lean_box(0));
lean_closure_set(v___x_441_, 2, v___y_437_);
v___x_442_ = lean_apply_2(v_inst_435_, lean_box(0), v___x_441_);
v___x_443_ = lean_apply_4(v_toBind_439_, lean_box(0), lean_box(0), v___x_442_, v___f_440_);
return v___x_443_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_signalInterest___redArg___boxed(lean_object* v_inst_444_, lean_object* v_inst_445_, lean_object* v_inst_446_, lean_object* v___y_447_){
_start:
{
lean_object* v_res_448_; 
v_res_448_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_signalInterest___redArg(v_inst_444_, v_inst_445_, v_inst_446_, v___y_447_);
lean_dec(v___y_447_);
return v_res_448_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_signalInterest(lean_object* v_m_449_, lean_object* v_inst_450_, lean_object* v_inst_451_, lean_object* v_inst_452_, lean_object* v___y_453_){
_start:
{
lean_object* v___x_454_; 
v___x_454_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_signalInterest___redArg(v_inst_450_, v_inst_451_, v_inst_452_, v___y_453_);
return v___x_454_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_signalInterest___boxed(lean_object* v_m_455_, lean_object* v_inst_456_, lean_object* v_inst_457_, lean_object* v_inst_458_, lean_object* v___y_459_){
_start:
{
lean_object* v_res_460_; 
v_res_460_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_signalInterest(v_m_455_, v_inst_456_, v_inst_457_, v_inst_458_, v___y_459_);
lean_dec(v___y_459_);
return v_res_460_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReady_x27___redArg___lam__0(lean_object* v_toApplicative_461_, lean_object* v_a_462_){
_start:
{
uint8_t v___y_464_; lean_object* v_pendingProducer_468_; 
v_pendingProducer_468_ = lean_ctor_get(v_a_462_, 0);
if (lean_obj_tag(v_pendingProducer_468_) == 0)
{
uint8_t v_closed_469_; 
v_closed_469_ = lean_ctor_get_uint8(v_a_462_, sizeof(void*)*6);
v___y_464_ = v_closed_469_;
goto v___jp_463_;
}
else
{
uint8_t v___x_470_; 
v___x_470_ = 1;
v___y_464_ = v___x_470_;
goto v___jp_463_;
}
v___jp_463_:
{
lean_object* v_toPure_465_; lean_object* v___x_466_; lean_object* v___x_467_; 
v_toPure_465_ = lean_ctor_get(v_toApplicative_461_, 1);
lean_inc(v_toPure_465_);
lean_dec_ref(v_toApplicative_461_);
v___x_466_ = lean_box(v___y_464_);
v___x_467_ = lean_apply_2(v_toPure_465_, lean_box(0), v___x_466_);
return v___x_467_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReady_x27___redArg___lam__0___boxed(lean_object* v_toApplicative_471_, lean_object* v_a_472_){
_start:
{
lean_object* v_res_473_; 
v_res_473_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReady_x27___redArg___lam__0(v_toApplicative_471_, v_a_472_);
lean_dec_ref(v_a_472_);
return v_res_473_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReady_x27___redArg(lean_object* v_inst_474_, lean_object* v_inst_475_, lean_object* v___y_476_){
_start:
{
lean_object* v_toApplicative_477_; lean_object* v_toBind_478_; lean_object* v___f_479_; lean_object* v___x_480_; lean_object* v___x_481_; lean_object* v___x_482_; 
v_toApplicative_477_ = lean_ctor_get(v_inst_474_, 0);
lean_inc_ref(v_toApplicative_477_);
v_toBind_478_ = lean_ctor_get(v_inst_474_, 1);
lean_inc(v_toBind_478_);
lean_dec_ref(v_inst_474_);
v___f_479_ = lean_alloc_closure((void*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReady_x27___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_479_, 0, v_toApplicative_477_);
lean_inc(v___y_476_);
v___x_480_ = lean_alloc_closure((void*)(l_ST_Prim_Ref_get___boxed), 4, 3);
lean_closure_set(v___x_480_, 0, lean_box(0));
lean_closure_set(v___x_480_, 1, lean_box(0));
lean_closure_set(v___x_480_, 2, v___y_476_);
v___x_481_ = lean_apply_2(v_inst_475_, lean_box(0), v___x_480_);
v___x_482_ = lean_apply_4(v_toBind_478_, lean_box(0), lean_box(0), v___x_481_, v___f_479_);
return v___x_482_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReady_x27___redArg___boxed(lean_object* v_inst_483_, lean_object* v_inst_484_, lean_object* v___y_485_){
_start:
{
lean_object* v_res_486_; 
v_res_486_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReady_x27___redArg(v_inst_483_, v_inst_484_, v___y_485_);
lean_dec(v___y_485_);
return v_res_486_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReady_x27(lean_object* v_m_487_, lean_object* v_inst_488_, lean_object* v_inst_489_, lean_object* v___y_490_){
_start:
{
lean_object* v___x_491_; 
v___x_491_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReady_x27___redArg(v_inst_488_, v_inst_489_, v___y_490_);
return v___x_491_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReady_x27___boxed(lean_object* v_m_492_, lean_object* v_inst_493_, lean_object* v_inst_494_, lean_object* v___y_495_){
_start:
{
lean_object* v_res_496_; 
v_res_496_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReady_x27(v_m_492_, v_inst_493_, v_inst_494_, v___y_495_);
lean_dec(v___y_495_);
return v_res_496_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_hasInterest_x27___redArg___lam__0(lean_object* v_toApplicative_497_, lean_object* v_a_498_){
_start:
{
uint8_t v___y_500_; lean_object* v_pendingConsumer_504_; 
v_pendingConsumer_504_ = lean_ctor_get(v_a_498_, 1);
if (lean_obj_tag(v_pendingConsumer_504_) == 0)
{
uint8_t v___x_505_; 
v___x_505_ = 0;
v___y_500_ = v___x_505_;
goto v___jp_499_;
}
else
{
uint8_t v___x_506_; 
v___x_506_ = 1;
v___y_500_ = v___x_506_;
goto v___jp_499_;
}
v___jp_499_:
{
lean_object* v_toPure_501_; lean_object* v___x_502_; lean_object* v___x_503_; 
v_toPure_501_ = lean_ctor_get(v_toApplicative_497_, 1);
lean_inc(v_toPure_501_);
lean_dec_ref(v_toApplicative_497_);
v___x_502_ = lean_box(v___y_500_);
v___x_503_ = lean_apply_2(v_toPure_501_, lean_box(0), v___x_502_);
return v___x_503_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_hasInterest_x27___redArg___lam__0___boxed(lean_object* v_toApplicative_507_, lean_object* v_a_508_){
_start:
{
lean_object* v_res_509_; 
v_res_509_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_hasInterest_x27___redArg___lam__0(v_toApplicative_507_, v_a_508_);
lean_dec_ref(v_a_508_);
return v_res_509_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_hasInterest_x27___redArg(lean_object* v_inst_510_, lean_object* v_inst_511_, lean_object* v___y_512_){
_start:
{
lean_object* v_toApplicative_513_; lean_object* v_toBind_514_; lean_object* v___f_515_; lean_object* v___x_516_; lean_object* v___x_517_; lean_object* v___x_518_; 
v_toApplicative_513_ = lean_ctor_get(v_inst_510_, 0);
lean_inc_ref(v_toApplicative_513_);
v_toBind_514_ = lean_ctor_get(v_inst_510_, 1);
lean_inc(v_toBind_514_);
lean_dec_ref(v_inst_510_);
v___f_515_ = lean_alloc_closure((void*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_hasInterest_x27___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_515_, 0, v_toApplicative_513_);
lean_inc(v___y_512_);
v___x_516_ = lean_alloc_closure((void*)(l_ST_Prim_Ref_get___boxed), 4, 3);
lean_closure_set(v___x_516_, 0, lean_box(0));
lean_closure_set(v___x_516_, 1, lean_box(0));
lean_closure_set(v___x_516_, 2, v___y_512_);
v___x_517_ = lean_apply_2(v_inst_511_, lean_box(0), v___x_516_);
v___x_518_ = lean_apply_4(v_toBind_514_, lean_box(0), lean_box(0), v___x_517_, v___f_515_);
return v___x_518_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_hasInterest_x27___redArg___boxed(lean_object* v_inst_519_, lean_object* v_inst_520_, lean_object* v___y_521_){
_start:
{
lean_object* v_res_522_; 
v_res_522_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_hasInterest_x27___redArg(v_inst_519_, v_inst_520_, v___y_521_);
lean_dec(v___y_521_);
return v_res_522_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_hasInterest_x27(lean_object* v_m_523_, lean_object* v_inst_524_, lean_object* v_inst_525_, lean_object* v___y_526_){
_start:
{
lean_object* v___x_527_; 
v___x_527_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_hasInterest_x27___redArg(v_inst_524_, v_inst_525_, v___y_526_);
return v___x_527_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_hasInterest_x27___boxed(lean_object* v_m_528_, lean_object* v_inst_529_, lean_object* v_inst_530_, lean_object* v___y_531_){
_start:
{
lean_object* v_res_532_; 
v_res_532_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_hasInterest_x27(v_m_528_, v_inst_529_, v_inst_530_, v___y_531_);
lean_dec(v___y_531_);
return v_res_532_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_tryRecv_x27___redArg___lam__0(lean_object* v_toApplicative_533_, lean_object* v_chunk_534_, lean_object* v_a_535_){
_start:
{
lean_object* v_toPure_536_; lean_object* v___x_537_; lean_object* v___x_538_; 
v_toPure_536_ = lean_ctor_get(v_toApplicative_533_, 1);
lean_inc(v_toPure_536_);
lean_dec_ref(v_toApplicative_533_);
v___x_537_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_537_, 0, v_chunk_534_);
v___x_538_ = lean_apply_2(v_toPure_536_, lean_box(0), v___x_537_);
return v___x_538_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_tryRecv_x27___redArg___lam__1(lean_object* v_toApplicative_539_, lean_object* v_done_540_, lean_object* v_inst_541_, lean_object* v_toBind_542_, lean_object* v___f_543_, lean_object* v_a_544_){
_start:
{
lean_object* v_toFunctor_545_; lean_object* v_mapConst_546_; uint8_t v___x_547_; lean_object* v___x_548_; lean_object* v___x_549_; lean_object* v___x_550_; lean_object* v___x_551_; lean_object* v___x_552_; lean_object* v___x_553_; 
v_toFunctor_545_ = lean_ctor_get(v_toApplicative_539_, 0);
lean_inc_ref(v_toFunctor_545_);
lean_dec_ref(v_toApplicative_539_);
v_mapConst_546_ = lean_ctor_get(v_toFunctor_545_, 1);
lean_inc(v_mapConst_546_);
lean_dec_ref(v_toFunctor_545_);
v___x_547_ = 1;
v___x_548_ = lean_box(v___x_547_);
v___x_549_ = lean_alloc_closure((void*)(l_IO_Promise_resolve___boxed), 4, 3);
lean_closure_set(v___x_549_, 0, lean_box(0));
lean_closure_set(v___x_549_, 1, v___x_548_);
lean_closure_set(v___x_549_, 2, v_done_540_);
v___x_550_ = lean_apply_2(v_inst_541_, lean_box(0), v___x_549_);
v___x_551_ = lean_box(0);
v___x_552_ = lean_apply_4(v_mapConst_546_, lean_box(0), lean_box(0), v___x_551_, v___x_550_);
v___x_553_ = lean_apply_4(v_toBind_542_, lean_box(0), lean_box(0), v___x_552_, v___f_543_);
return v___x_553_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_tryRecv_x27___redArg___lam__2(lean_object* v_toApplicative_554_, lean_object* v_inst_555_, lean_object* v_toBind_556_, lean_object* v___y_557_, lean_object* v_inst_558_, lean_object* v_a_559_){
_start:
{
lean_object* v_pendingProducer_560_; 
v_pendingProducer_560_ = lean_ctor_get(v_a_559_, 0);
if (lean_obj_tag(v_pendingProducer_560_) == 1)
{
lean_object* v_val_561_; lean_object* v_pendingConsumer_562_; lean_object* v_interestWaiter_563_; uint8_t v_closed_564_; lean_object* v_knownSize_565_; lean_object* v_pendingIncompleteChunk_566_; lean_object* v_closeError_567_; lean_object* v___x_569_; uint8_t v_isShared_570_; uint8_t v_isSharedCheck_583_; 
v_val_561_ = lean_ctor_get(v_pendingProducer_560_, 0);
lean_inc(v_val_561_);
v_pendingConsumer_562_ = lean_ctor_get(v_a_559_, 1);
v_interestWaiter_563_ = lean_ctor_get(v_a_559_, 2);
v_closed_564_ = lean_ctor_get_uint8(v_a_559_, sizeof(void*)*6);
v_knownSize_565_ = lean_ctor_get(v_a_559_, 3);
v_pendingIncompleteChunk_566_ = lean_ctor_get(v_a_559_, 4);
v_closeError_567_ = lean_ctor_get(v_a_559_, 5);
v_isSharedCheck_583_ = !lean_is_exclusive(v_a_559_);
if (v_isSharedCheck_583_ == 0)
{
lean_object* v_unused_584_; 
v_unused_584_ = lean_ctor_get(v_a_559_, 0);
lean_dec(v_unused_584_);
v___x_569_ = v_a_559_;
v_isShared_570_ = v_isSharedCheck_583_;
goto v_resetjp_568_;
}
else
{
lean_inc(v_closeError_567_);
lean_inc(v_pendingIncompleteChunk_566_);
lean_inc(v_knownSize_565_);
lean_inc(v_interestWaiter_563_);
lean_inc(v_pendingConsumer_562_);
lean_dec(v_a_559_);
v___x_569_ = lean_box(0);
v_isShared_570_ = v_isSharedCheck_583_;
goto v_resetjp_568_;
}
v_resetjp_568_:
{
lean_object* v_chunk_571_; lean_object* v_done_572_; lean_object* v___x_573_; lean_object* v___f_574_; lean_object* v___f_575_; lean_object* v___x_576_; lean_object* v___x_578_; 
v_chunk_571_ = lean_ctor_get(v_val_561_, 0);
lean_inc_ref_n(v_chunk_571_, 2);
v_done_572_ = lean_ctor_get(v_val_561_, 1);
lean_inc(v_done_572_);
lean_dec(v_val_561_);
v___x_573_ = lean_box(0);
lean_inc_ref(v_toApplicative_554_);
v___f_574_ = lean_alloc_closure((void*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_tryRecv_x27___redArg___lam__0), 3, 2);
lean_closure_set(v___f_574_, 0, v_toApplicative_554_);
lean_closure_set(v___f_574_, 1, v_chunk_571_);
lean_inc(v_toBind_556_);
v___f_575_ = lean_alloc_closure((void*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_tryRecv_x27___redArg___lam__1), 6, 5);
lean_closure_set(v___f_575_, 0, v_toApplicative_554_);
lean_closure_set(v___f_575_, 1, v_done_572_);
lean_closure_set(v___f_575_, 2, v_inst_555_);
lean_closure_set(v___f_575_, 3, v_toBind_556_);
lean_closure_set(v___f_575_, 4, v___f_574_);
v___x_576_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_decreaseKnownSize(v_knownSize_565_, v_chunk_571_);
lean_dec_ref(v_chunk_571_);
if (v_isShared_570_ == 0)
{
lean_ctor_set(v___x_569_, 3, v___x_576_);
lean_ctor_set(v___x_569_, 0, v___x_573_);
v___x_578_ = v___x_569_;
goto v_reusejp_577_;
}
else
{
lean_object* v_reuseFailAlloc_582_; 
v_reuseFailAlloc_582_ = lean_alloc_ctor(0, 6, 1);
lean_ctor_set(v_reuseFailAlloc_582_, 0, v___x_573_);
lean_ctor_set(v_reuseFailAlloc_582_, 1, v_pendingConsumer_562_);
lean_ctor_set(v_reuseFailAlloc_582_, 2, v_interestWaiter_563_);
lean_ctor_set(v_reuseFailAlloc_582_, 3, v___x_576_);
lean_ctor_set(v_reuseFailAlloc_582_, 4, v_pendingIncompleteChunk_566_);
lean_ctor_set(v_reuseFailAlloc_582_, 5, v_closeError_567_);
lean_ctor_set_uint8(v_reuseFailAlloc_582_, sizeof(void*)*6, v_closed_564_);
v___x_578_ = v_reuseFailAlloc_582_;
goto v_reusejp_577_;
}
v_reusejp_577_:
{
lean_object* v___x_579_; lean_object* v___x_580_; lean_object* v___x_581_; 
lean_inc(v___y_557_);
v___x_579_ = lean_alloc_closure((void*)(l_ST_Prim_Ref_set___boxed), 5, 4);
lean_closure_set(v___x_579_, 0, lean_box(0));
lean_closure_set(v___x_579_, 1, lean_box(0));
lean_closure_set(v___x_579_, 2, v___y_557_);
lean_closure_set(v___x_579_, 3, v___x_578_);
v___x_580_ = lean_apply_2(v_inst_558_, lean_box(0), v___x_579_);
v___x_581_ = lean_apply_4(v_toBind_556_, lean_box(0), lean_box(0), v___x_580_, v___f_575_);
return v___x_581_;
}
}
}
else
{
lean_object* v_toPure_585_; lean_object* v___x_586_; lean_object* v___x_587_; 
lean_dec_ref(v_a_559_);
lean_dec(v_inst_558_);
lean_dec(v_toBind_556_);
lean_dec(v_inst_555_);
v_toPure_585_ = lean_ctor_get(v_toApplicative_554_, 1);
lean_inc(v_toPure_585_);
lean_dec_ref(v_toApplicative_554_);
v___x_586_ = lean_box(0);
v___x_587_ = lean_apply_2(v_toPure_585_, lean_box(0), v___x_586_);
return v___x_587_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_tryRecv_x27___redArg___lam__2___boxed(lean_object* v_toApplicative_588_, lean_object* v_inst_589_, lean_object* v_toBind_590_, lean_object* v___y_591_, lean_object* v_inst_592_, lean_object* v_a_593_){
_start:
{
lean_object* v_res_594_; 
v_res_594_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_tryRecv_x27___redArg___lam__2(v_toApplicative_588_, v_inst_589_, v_toBind_590_, v___y_591_, v_inst_592_, v_a_593_);
lean_dec(v___y_591_);
return v_res_594_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_tryRecv_x27___redArg(lean_object* v_inst_595_, lean_object* v_inst_596_, lean_object* v_inst_597_, lean_object* v___y_598_){
_start:
{
lean_object* v_toApplicative_599_; lean_object* v_toBind_600_; lean_object* v___f_601_; lean_object* v___x_602_; lean_object* v___x_603_; lean_object* v___x_604_; 
v_toApplicative_599_ = lean_ctor_get(v_inst_595_, 0);
lean_inc_ref(v_toApplicative_599_);
v_toBind_600_ = lean_ctor_get(v_inst_595_, 1);
lean_inc_n(v_toBind_600_, 2);
lean_dec_ref(v_inst_595_);
lean_inc(v_inst_596_);
lean_inc_n(v___y_598_, 2);
v___f_601_ = lean_alloc_closure((void*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_tryRecv_x27___redArg___lam__2___boxed), 6, 5);
lean_closure_set(v___f_601_, 0, v_toApplicative_599_);
lean_closure_set(v___f_601_, 1, v_inst_597_);
lean_closure_set(v___f_601_, 2, v_toBind_600_);
lean_closure_set(v___f_601_, 3, v___y_598_);
lean_closure_set(v___f_601_, 4, v_inst_596_);
v___x_602_ = lean_alloc_closure((void*)(l_ST_Prim_Ref_get___boxed), 4, 3);
lean_closure_set(v___x_602_, 0, lean_box(0));
lean_closure_set(v___x_602_, 1, lean_box(0));
lean_closure_set(v___x_602_, 2, v___y_598_);
v___x_603_ = lean_apply_2(v_inst_596_, lean_box(0), v___x_602_);
v___x_604_ = lean_apply_4(v_toBind_600_, lean_box(0), lean_box(0), v___x_603_, v___f_601_);
return v___x_604_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_tryRecv_x27___redArg___boxed(lean_object* v_inst_605_, lean_object* v_inst_606_, lean_object* v_inst_607_, lean_object* v___y_608_){
_start:
{
lean_object* v_res_609_; 
v_res_609_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_tryRecv_x27___redArg(v_inst_605_, v_inst_606_, v_inst_607_, v___y_608_);
lean_dec(v___y_608_);
return v_res_609_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_tryRecv_x27(lean_object* v_m_610_, lean_object* v_inst_611_, lean_object* v_inst_612_, lean_object* v_inst_613_, lean_object* v___y_614_){
_start:
{
lean_object* v___x_615_; 
v___x_615_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_tryRecv_x27___redArg(v_inst_611_, v_inst_612_, v_inst_613_, v___y_614_);
return v___x_615_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_tryRecv_x27___boxed(lean_object* v_m_616_, lean_object* v_inst_617_, lean_object* v_inst_618_, lean_object* v_inst_619_, lean_object* v___y_620_){
_start:
{
lean_object* v_res_621_; 
v_res_621_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_tryRecv_x27(v_m_616_, v_inst_617_, v_inst_618_, v_inst_619_, v___y_620_);
lean_dec(v___y_620_);
return v_res_621_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___redArg___lam__0(lean_object* v_toApplicative_624_, lean_object* v_a_625_){
_start:
{
lean_object* v_closeError_626_; 
v_closeError_626_ = lean_ctor_get(v_a_625_, 5);
lean_inc(v_closeError_626_);
lean_dec_ref(v_a_625_);
if (lean_obj_tag(v_closeError_626_) == 1)
{
lean_object* v_val_627_; lean_object* v___x_629_; uint8_t v_isShared_630_; uint8_t v_isSharedCheck_636_; 
v_val_627_ = lean_ctor_get(v_closeError_626_, 0);
v_isSharedCheck_636_ = !lean_is_exclusive(v_closeError_626_);
if (v_isSharedCheck_636_ == 0)
{
v___x_629_ = v_closeError_626_;
v_isShared_630_ = v_isSharedCheck_636_;
goto v_resetjp_628_;
}
else
{
lean_inc(v_val_627_);
lean_dec(v_closeError_626_);
v___x_629_ = lean_box(0);
v_isShared_630_ = v_isSharedCheck_636_;
goto v_resetjp_628_;
}
v_resetjp_628_:
{
lean_object* v_toPure_631_; lean_object* v___x_633_; 
v_toPure_631_ = lean_ctor_get(v_toApplicative_624_, 1);
lean_inc(v_toPure_631_);
lean_dec_ref(v_toApplicative_624_);
if (v_isShared_630_ == 0)
{
lean_ctor_set_tag(v___x_629_, 0);
v___x_633_ = v___x_629_;
goto v_reusejp_632_;
}
else
{
lean_object* v_reuseFailAlloc_635_; 
v_reuseFailAlloc_635_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_635_, 0, v_val_627_);
v___x_633_ = v_reuseFailAlloc_635_;
goto v_reusejp_632_;
}
v_reusejp_632_:
{
lean_object* v___x_634_; 
v___x_634_ = lean_apply_2(v_toPure_631_, lean_box(0), v___x_633_);
return v___x_634_;
}
}
}
else
{
lean_object* v_toPure_637_; lean_object* v___x_638_; lean_object* v___x_639_; 
lean_dec(v_closeError_626_);
v_toPure_637_ = lean_ctor_get(v_toApplicative_624_, 1);
lean_inc(v_toPure_637_);
lean_dec_ref(v_toApplicative_624_);
v___x_638_ = ((lean_object*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___redArg___lam__0___closed__0));
v___x_639_ = lean_apply_2(v_toPure_637_, lean_box(0), v___x_638_);
return v___x_639_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___redArg___lam__1(lean_object* v_toApplicative_640_, lean_object* v___y_641_, lean_object* v_inst_642_, lean_object* v_toBind_643_, lean_object* v___f_644_, lean_object* v_a_645_){
_start:
{
if (lean_obj_tag(v_a_645_) == 1)
{
lean_object* v_toPure_646_; lean_object* v___x_647_; lean_object* v___x_648_; 
lean_dec(v___f_644_);
lean_dec(v_toBind_643_);
lean_dec(v_inst_642_);
v_toPure_646_ = lean_ctor_get(v_toApplicative_640_, 1);
lean_inc(v_toPure_646_);
lean_dec_ref(v_toApplicative_640_);
v___x_647_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_647_, 0, v_a_645_);
v___x_648_ = lean_apply_2(v_toPure_646_, lean_box(0), v___x_647_);
return v___x_648_;
}
else
{
lean_object* v___x_649_; lean_object* v___x_650_; lean_object* v___x_651_; 
lean_dec(v_a_645_);
lean_dec_ref(v_toApplicative_640_);
lean_inc(v___y_641_);
v___x_649_ = lean_alloc_closure((void*)(l_ST_Prim_Ref_get___boxed), 4, 3);
lean_closure_set(v___x_649_, 0, lean_box(0));
lean_closure_set(v___x_649_, 1, lean_box(0));
lean_closure_set(v___x_649_, 2, v___y_641_);
v___x_650_ = lean_apply_2(v_inst_642_, lean_box(0), v___x_649_);
v___x_651_ = lean_apply_4(v_toBind_643_, lean_box(0), lean_box(0), v___x_650_, v___f_644_);
return v___x_651_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___redArg___lam__1___boxed(lean_object* v_toApplicative_652_, lean_object* v___y_653_, lean_object* v_inst_654_, lean_object* v_toBind_655_, lean_object* v___f_656_, lean_object* v_a_657_){
_start:
{
lean_object* v_res_658_; 
v_res_658_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___redArg___lam__1(v_toApplicative_652_, v___y_653_, v_inst_654_, v_toBind_655_, v___f_656_, v_a_657_);
lean_dec(v___y_653_);
return v_res_658_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___redArg(lean_object* v_inst_659_, lean_object* v_inst_660_, lean_object* v_inst_661_, lean_object* v___y_662_){
_start:
{
lean_object* v_toApplicative_663_; lean_object* v_toBind_664_; lean_object* v___f_665_; lean_object* v___f_666_; lean_object* v___x_667_; lean_object* v___x_668_; 
v_toApplicative_663_ = lean_ctor_get(v_inst_659_, 0);
v_toBind_664_ = lean_ctor_get(v_inst_659_, 1);
lean_inc_n(v_toBind_664_, 2);
lean_inc_ref_n(v_toApplicative_663_, 2);
v___f_665_ = lean_alloc_closure((void*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___redArg___lam__0), 2, 1);
lean_closure_set(v___f_665_, 0, v_toApplicative_663_);
lean_inc(v_inst_660_);
lean_inc(v___y_662_);
v___f_666_ = lean_alloc_closure((void*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___redArg___lam__1___boxed), 6, 5);
lean_closure_set(v___f_666_, 0, v_toApplicative_663_);
lean_closure_set(v___f_666_, 1, v___y_662_);
lean_closure_set(v___f_666_, 2, v_inst_660_);
lean_closure_set(v___f_666_, 3, v_toBind_664_);
lean_closure_set(v___f_666_, 4, v___f_665_);
v___x_667_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_tryRecv_x27___redArg(v_inst_659_, v_inst_660_, v_inst_661_, v___y_662_);
v___x_668_ = lean_apply_4(v_toBind_664_, lean_box(0), lean_box(0), v___x_667_, v___f_666_);
return v___x_668_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___redArg___boxed(lean_object* v_inst_669_, lean_object* v_inst_670_, lean_object* v_inst_671_, lean_object* v___y_672_){
_start:
{
lean_object* v_res_673_; 
v_res_673_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___redArg(v_inst_669_, v_inst_670_, v_inst_671_, v___y_672_);
lean_dec(v___y_672_);
return v_res_673_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27(lean_object* v_m_674_, lean_object* v_inst_675_, lean_object* v_inst_676_, lean_object* v_inst_677_, lean_object* v___y_678_){
_start:
{
lean_object* v___x_679_; 
v___x_679_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___redArg(v_inst_675_, v_inst_676_, v_inst_677_, v___y_678_);
return v___x_679_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___boxed(lean_object* v_m_680_, lean_object* v_inst_681_, lean_object* v_inst_682_, lean_object* v_inst_683_, lean_object* v___y_684_){
_start:
{
lean_object* v_res_685_; 
v_res_685_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27(v_m_680_, v_inst_681_, v_inst_682_, v_inst_683_, v___y_684_);
lean_dec(v___y_684_);
return v_res_685_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___redArg___lam__0(uint8_t v___x_686_, lean_object* v_knownSize_687_, lean_object* v_closeError_688_, lean_object* v_inst_689_, lean_object* v_____r_690_, lean_object* v___y_691_){
_start:
{
lean_object* v___x_692_; lean_object* v___x_693_; lean_object* v___x_694_; lean_object* v___x_695_; 
v___x_692_ = lean_box(0);
v___x_693_ = lean_alloc_ctor(0, 6, 1);
lean_ctor_set(v___x_693_, 0, v___x_692_);
lean_ctor_set(v___x_693_, 1, v___x_692_);
lean_ctor_set(v___x_693_, 2, v___x_692_);
lean_ctor_set(v___x_693_, 3, v_knownSize_687_);
lean_ctor_set(v___x_693_, 4, v___x_692_);
lean_ctor_set(v___x_693_, 5, v_closeError_688_);
lean_ctor_set_uint8(v___x_693_, sizeof(void*)*6, v___x_686_);
lean_inc(v___y_691_);
v___x_694_ = lean_alloc_closure((void*)(l_ST_Prim_Ref_set___boxed), 5, 4);
lean_closure_set(v___x_694_, 0, lean_box(0));
lean_closure_set(v___x_694_, 1, lean_box(0));
lean_closure_set(v___x_694_, 2, v___y_691_);
lean_closure_set(v___x_694_, 3, v___x_693_);
v___x_695_ = lean_apply_2(v_inst_689_, lean_box(0), v___x_694_);
return v___x_695_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___redArg___lam__0___boxed(lean_object* v___x_696_, lean_object* v_knownSize_697_, lean_object* v_closeError_698_, lean_object* v_inst_699_, lean_object* v_____r_700_, lean_object* v___y_701_){
_start:
{
uint8_t v___x_899__boxed_702_; lean_object* v_res_703_; 
v___x_899__boxed_702_ = lean_unbox(v___x_696_);
v_res_703_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___redArg___lam__0(v___x_899__boxed_702_, v_knownSize_697_, v_closeError_698_, v_inst_699_, v_____r_700_, v___y_701_);
lean_dec(v___y_701_);
return v_res_703_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___redArg___lam__1(lean_object* v___f_704_, lean_object* v___y_705_, lean_object* v_a_706_){
_start:
{
lean_object* v___x_707_; 
lean_inc(v___y_705_);
v___x_707_ = lean_apply_2(v___f_704_, v_a_706_, v___y_705_);
return v___x_707_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___redArg___lam__1___boxed(lean_object* v___f_708_, lean_object* v___y_709_, lean_object* v_a_710_){
_start:
{
lean_object* v_res_711_; 
v_res_711_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___redArg___lam__1(v___f_708_, v___y_709_, v_a_710_);
lean_dec(v___y_709_);
return v_res_711_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___redArg___lam__2(lean_object* v_pendingProducer_712_, lean_object* v_toApplicative_713_, lean_object* v___f_714_, uint8_t v_closed_715_, lean_object* v_inst_716_, lean_object* v_toBind_717_, lean_object* v_____r_718_, lean_object* v___y_719_){
_start:
{
if (lean_obj_tag(v_pendingProducer_712_) == 1)
{
lean_object* v_val_720_; lean_object* v_toFunctor_721_; lean_object* v_done_722_; lean_object* v_mapConst_723_; lean_object* v___f_724_; lean_object* v___x_725_; lean_object* v___x_726_; lean_object* v___x_727_; lean_object* v___x_728_; lean_object* v___x_729_; lean_object* v___x_730_; 
v_val_720_ = lean_ctor_get(v_pendingProducer_712_, 0);
lean_inc(v_val_720_);
lean_dec_ref_known(v_pendingProducer_712_, 1);
v_toFunctor_721_ = lean_ctor_get(v_toApplicative_713_, 0);
lean_inc_ref(v_toFunctor_721_);
lean_dec_ref(v_toApplicative_713_);
v_done_722_ = lean_ctor_get(v_val_720_, 1);
lean_inc(v_done_722_);
lean_dec(v_val_720_);
v_mapConst_723_ = lean_ctor_get(v_toFunctor_721_, 1);
lean_inc(v_mapConst_723_);
lean_dec_ref(v_toFunctor_721_);
lean_inc(v___y_719_);
v___f_724_ = lean_alloc_closure((void*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___redArg___lam__1___boxed), 3, 2);
lean_closure_set(v___f_724_, 0, v___f_714_);
lean_closure_set(v___f_724_, 1, v___y_719_);
v___x_725_ = lean_box(v_closed_715_);
v___x_726_ = lean_alloc_closure((void*)(l_IO_Promise_resolve___boxed), 4, 3);
lean_closure_set(v___x_726_, 0, lean_box(0));
lean_closure_set(v___x_726_, 1, v___x_725_);
lean_closure_set(v___x_726_, 2, v_done_722_);
v___x_727_ = lean_apply_2(v_inst_716_, lean_box(0), v___x_726_);
v___x_728_ = lean_box(0);
v___x_729_ = lean_apply_4(v_mapConst_723_, lean_box(0), lean_box(0), v___x_728_, v___x_727_);
v___x_730_ = lean_apply_4(v_toBind_717_, lean_box(0), lean_box(0), v___x_729_, v___f_724_);
return v___x_730_;
}
else
{
lean_object* v___x_731_; lean_object* v___x_732_; 
lean_dec(v_toBind_717_);
lean_dec(v_inst_716_);
lean_dec_ref(v_toApplicative_713_);
lean_dec(v_pendingProducer_712_);
v___x_731_ = lean_box(0);
lean_inc(v___y_719_);
v___x_732_ = lean_apply_2(v___f_714_, v___x_731_, v___y_719_);
return v___x_732_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___redArg___lam__2___boxed(lean_object* v_pendingProducer_733_, lean_object* v_toApplicative_734_, lean_object* v___f_735_, lean_object* v_closed_736_, lean_object* v_inst_737_, lean_object* v_toBind_738_, lean_object* v_____r_739_, lean_object* v___y_740_){
_start:
{
uint8_t v_closed_boxed_741_; lean_object* v_res_742_; 
v_closed_boxed_741_ = lean_unbox(v_closed_736_);
v_res_742_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___redArg___lam__2(v_pendingProducer_733_, v_toApplicative_734_, v___f_735_, v_closed_boxed_741_, v_inst_737_, v_toBind_738_, v_____r_739_, v___y_740_);
lean_dec(v___y_740_);
return v_res_742_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___redArg___lam__4(lean_object* v_interestWaiter_743_, lean_object* v_toApplicative_744_, lean_object* v___f_745_, uint8_t v_closed_746_, lean_object* v_inst_747_, lean_object* v_toBind_748_, lean_object* v_____r_749_, lean_object* v___y_750_){
_start:
{
if (lean_obj_tag(v_interestWaiter_743_) == 1)
{
lean_object* v_toFunctor_751_; lean_object* v_val_752_; lean_object* v_mapConst_753_; lean_object* v___f_754_; lean_object* v___x_755_; lean_object* v___x_756_; lean_object* v___x_757_; lean_object* v___x_758_; lean_object* v___x_759_; lean_object* v___x_760_; 
v_toFunctor_751_ = lean_ctor_get(v_toApplicative_744_, 0);
lean_inc_ref(v_toFunctor_751_);
lean_dec_ref(v_toApplicative_744_);
v_val_752_ = lean_ctor_get(v_interestWaiter_743_, 0);
lean_inc(v_val_752_);
lean_dec_ref_known(v_interestWaiter_743_, 1);
v_mapConst_753_ = lean_ctor_get(v_toFunctor_751_, 1);
lean_inc(v_mapConst_753_);
lean_dec_ref(v_toFunctor_751_);
lean_inc(v___y_750_);
v___f_754_ = lean_alloc_closure((void*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___redArg___lam__1___boxed), 3, 2);
lean_closure_set(v___f_754_, 0, v___f_745_);
lean_closure_set(v___f_754_, 1, v___y_750_);
v___x_755_ = lean_box(v_closed_746_);
v___x_756_ = lean_alloc_closure((void*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_resolveInterestWaiter___boxed), 3, 2);
lean_closure_set(v___x_756_, 0, v_val_752_);
lean_closure_set(v___x_756_, 1, v___x_755_);
v___x_757_ = lean_apply_2(v_inst_747_, lean_box(0), v___x_756_);
v___x_758_ = lean_box(0);
v___x_759_ = lean_apply_4(v_mapConst_753_, lean_box(0), lean_box(0), v___x_758_, v___x_757_);
v___x_760_ = lean_apply_4(v_toBind_748_, lean_box(0), lean_box(0), v___x_759_, v___f_754_);
return v___x_760_;
}
else
{
lean_object* v___x_761_; lean_object* v___x_762_; 
lean_dec(v_toBind_748_);
lean_dec(v_inst_747_);
lean_dec_ref(v_toApplicative_744_);
lean_dec(v_interestWaiter_743_);
v___x_761_ = lean_box(0);
lean_inc(v___y_750_);
v___x_762_ = lean_apply_2(v___f_745_, v___x_761_, v___y_750_);
return v___x_762_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___redArg___lam__4___boxed(lean_object* v_interestWaiter_763_, lean_object* v_toApplicative_764_, lean_object* v___f_765_, lean_object* v_closed_766_, lean_object* v_inst_767_, lean_object* v_toBind_768_, lean_object* v_____r_769_, lean_object* v___y_770_){
_start:
{
uint8_t v_closed_boxed_771_; lean_object* v_res_772_; 
v_closed_boxed_771_ = lean_unbox(v_closed_766_);
v_res_772_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___redArg___lam__4(v_interestWaiter_763_, v_toApplicative_764_, v___f_765_, v_closed_boxed_771_, v_inst_767_, v_toBind_768_, v_____r_769_, v___y_770_);
lean_dec(v___y_770_);
return v_res_772_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___redArg___lam__5(lean_object* v_inst_773_, lean_object* v_toApplicative_774_, lean_object* v_inst_775_, lean_object* v_toBind_776_, lean_object* v___y_777_, lean_object* v_a_778_){
_start:
{
uint8_t v_closed_779_; 
v_closed_779_ = lean_ctor_get_uint8(v_a_778_, sizeof(void*)*6);
if (v_closed_779_ == 0)
{
lean_object* v_pendingProducer_780_; lean_object* v_pendingConsumer_781_; lean_object* v_interestWaiter_782_; lean_object* v_knownSize_783_; lean_object* v_closeError_784_; uint8_t v___x_785_; lean_object* v___x_786_; lean_object* v___f_787_; lean_object* v___x_788_; lean_object* v___f_789_; lean_object* v___x_790_; lean_object* v___f_791_; 
v_pendingProducer_780_ = lean_ctor_get(v_a_778_, 0);
lean_inc(v_pendingProducer_780_);
v_pendingConsumer_781_ = lean_ctor_get(v_a_778_, 1);
lean_inc(v_pendingConsumer_781_);
v_interestWaiter_782_ = lean_ctor_get(v_a_778_, 2);
lean_inc_n(v_interestWaiter_782_, 2);
v_knownSize_783_ = lean_ctor_get(v_a_778_, 3);
lean_inc(v_knownSize_783_);
v_closeError_784_ = lean_ctor_get(v_a_778_, 5);
lean_inc_n(v_closeError_784_, 2);
lean_dec_ref(v_a_778_);
v___x_785_ = 1;
v___x_786_ = lean_box(v___x_785_);
v___f_787_ = lean_alloc_closure((void*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___redArg___lam__0___boxed), 6, 4);
lean_closure_set(v___f_787_, 0, v___x_786_);
lean_closure_set(v___f_787_, 1, v_knownSize_783_);
lean_closure_set(v___f_787_, 2, v_closeError_784_);
lean_closure_set(v___f_787_, 3, v_inst_773_);
v___x_788_ = lean_box(v_closed_779_);
lean_inc_n(v_toBind_776_, 2);
lean_inc_n(v_inst_775_, 2);
lean_inc_ref_n(v_toApplicative_774_, 2);
v___f_789_ = lean_alloc_closure((void*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___redArg___lam__2___boxed), 8, 6);
lean_closure_set(v___f_789_, 0, v_pendingProducer_780_);
lean_closure_set(v___f_789_, 1, v_toApplicative_774_);
lean_closure_set(v___f_789_, 2, v___f_787_);
lean_closure_set(v___f_789_, 3, v___x_788_);
lean_closure_set(v___f_789_, 4, v_inst_775_);
lean_closure_set(v___f_789_, 5, v_toBind_776_);
v___x_790_ = lean_box(v_closed_779_);
lean_inc_ref(v___f_789_);
v___f_791_ = lean_alloc_closure((void*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___redArg___lam__4___boxed), 8, 6);
lean_closure_set(v___f_791_, 0, v_interestWaiter_782_);
lean_closure_set(v___f_791_, 1, v_toApplicative_774_);
lean_closure_set(v___f_791_, 2, v___f_789_);
lean_closure_set(v___f_791_, 3, v___x_790_);
lean_closure_set(v___f_791_, 4, v_inst_775_);
lean_closure_set(v___f_791_, 5, v_toBind_776_);
if (lean_obj_tag(v_pendingConsumer_781_) == 1)
{
lean_object* v_val_792_; lean_object* v___f_793_; lean_object* v___y_795_; 
lean_dec_ref(v___f_789_);
lean_dec(v_interestWaiter_782_);
v_val_792_ = lean_ctor_get(v_pendingConsumer_781_, 0);
lean_inc(v_val_792_);
lean_dec_ref_known(v_pendingConsumer_781_, 1);
lean_inc(v___y_777_);
v___f_793_ = lean_alloc_closure((void*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___redArg___lam__1___boxed), 3, 2);
lean_closure_set(v___f_793_, 0, v___f_791_);
lean_closure_set(v___f_793_, 1, v___y_777_);
if (lean_obj_tag(v_closeError_784_) == 0)
{
lean_object* v___x_803_; 
v___x_803_ = ((lean_object*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___redArg___lam__0___closed__0));
v___y_795_ = v___x_803_;
goto v___jp_794_;
}
else
{
lean_object* v_val_804_; lean_object* v___x_806_; uint8_t v_isShared_807_; uint8_t v_isSharedCheck_811_; 
v_val_804_ = lean_ctor_get(v_closeError_784_, 0);
v_isSharedCheck_811_ = !lean_is_exclusive(v_closeError_784_);
if (v_isSharedCheck_811_ == 0)
{
v___x_806_ = v_closeError_784_;
v_isShared_807_ = v_isSharedCheck_811_;
goto v_resetjp_805_;
}
else
{
lean_inc(v_val_804_);
lean_dec(v_closeError_784_);
v___x_806_ = lean_box(0);
v_isShared_807_ = v_isSharedCheck_811_;
goto v_resetjp_805_;
}
v_resetjp_805_:
{
lean_object* v___x_809_; 
if (v_isShared_807_ == 0)
{
lean_ctor_set_tag(v___x_806_, 0);
v___x_809_ = v___x_806_;
goto v_reusejp_808_;
}
else
{
lean_object* v_reuseFailAlloc_810_; 
v_reuseFailAlloc_810_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_810_, 0, v_val_804_);
v___x_809_ = v_reuseFailAlloc_810_;
goto v_reusejp_808_;
}
v_reusejp_808_:
{
v___y_795_ = v___x_809_;
goto v___jp_794_;
}
}
}
v___jp_794_:
{
lean_object* v_toFunctor_796_; lean_object* v_mapConst_797_; lean_object* v___x_798_; lean_object* v___x_799_; lean_object* v___x_800_; lean_object* v___x_801_; lean_object* v___x_802_; 
v_toFunctor_796_ = lean_ctor_get(v_toApplicative_774_, 0);
lean_inc_ref(v_toFunctor_796_);
lean_dec_ref(v_toApplicative_774_);
v_mapConst_797_ = lean_ctor_get(v_toFunctor_796_, 1);
lean_inc(v_mapConst_797_);
lean_dec_ref(v_toFunctor_796_);
v___x_798_ = lean_alloc_closure((void*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_Consumer_resolve___boxed), 3, 2);
lean_closure_set(v___x_798_, 0, v_val_792_);
lean_closure_set(v___x_798_, 1, v___y_795_);
v___x_799_ = lean_apply_2(v_inst_775_, lean_box(0), v___x_798_);
v___x_800_ = lean_box(0);
v___x_801_ = lean_apply_4(v_mapConst_797_, lean_box(0), lean_box(0), v___x_800_, v___x_799_);
v___x_802_ = lean_apply_4(v_toBind_776_, lean_box(0), lean_box(0), v___x_801_, v___f_793_);
return v___x_802_;
}
}
else
{
lean_object* v___x_812_; lean_object* v___x_813_; 
lean_dec_ref(v___f_791_);
lean_dec(v_closeError_784_);
lean_dec(v_pendingConsumer_781_);
v___x_812_ = lean_box(0);
v___x_813_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___redArg___lam__4(v_interestWaiter_782_, v_toApplicative_774_, v___f_789_, v_closed_779_, v_inst_775_, v_toBind_776_, v___x_812_, v___y_777_);
return v___x_813_;
}
}
else
{
lean_object* v_toPure_814_; lean_object* v___x_815_; lean_object* v___x_816_; 
lean_dec_ref(v_a_778_);
lean_dec(v_toBind_776_);
lean_dec(v_inst_775_);
lean_dec(v_inst_773_);
v_toPure_814_ = lean_ctor_get(v_toApplicative_774_, 1);
lean_inc(v_toPure_814_);
lean_dec_ref(v_toApplicative_774_);
v___x_815_ = lean_box(0);
v___x_816_ = lean_apply_2(v_toPure_814_, lean_box(0), v___x_815_);
return v___x_816_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___redArg___lam__5___boxed(lean_object* v_inst_817_, lean_object* v_toApplicative_818_, lean_object* v_inst_819_, lean_object* v_toBind_820_, lean_object* v___y_821_, lean_object* v_a_822_){
_start:
{
lean_object* v_res_823_; 
v_res_823_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___redArg___lam__5(v_inst_817_, v_toApplicative_818_, v_inst_819_, v_toBind_820_, v___y_821_, v_a_822_);
lean_dec(v___y_821_);
return v_res_823_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___redArg(lean_object* v_inst_824_, lean_object* v_inst_825_, lean_object* v_inst_826_, lean_object* v___y_827_){
_start:
{
lean_object* v_toApplicative_828_; lean_object* v_toBind_829_; lean_object* v___f_830_; lean_object* v___x_831_; lean_object* v___x_832_; lean_object* v___x_833_; 
v_toApplicative_828_ = lean_ctor_get(v_inst_824_, 0);
lean_inc_ref(v_toApplicative_828_);
v_toBind_829_ = lean_ctor_get(v_inst_824_, 1);
lean_inc_n(v_toBind_829_, 2);
lean_dec_ref(v_inst_824_);
lean_inc_n(v___y_827_, 2);
lean_inc(v_inst_825_);
v___f_830_ = lean_alloc_closure((void*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___redArg___lam__5___boxed), 6, 5);
lean_closure_set(v___f_830_, 0, v_inst_825_);
lean_closure_set(v___f_830_, 1, v_toApplicative_828_);
lean_closure_set(v___f_830_, 2, v_inst_826_);
lean_closure_set(v___f_830_, 3, v_toBind_829_);
lean_closure_set(v___f_830_, 4, v___y_827_);
v___x_831_ = lean_alloc_closure((void*)(l_ST_Prim_Ref_get___boxed), 4, 3);
lean_closure_set(v___x_831_, 0, lean_box(0));
lean_closure_set(v___x_831_, 1, lean_box(0));
lean_closure_set(v___x_831_, 2, v___y_827_);
v___x_832_ = lean_apply_2(v_inst_825_, lean_box(0), v___x_831_);
v___x_833_ = lean_apply_4(v_toBind_829_, lean_box(0), lean_box(0), v___x_832_, v___f_830_);
return v___x_833_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___redArg___boxed(lean_object* v_inst_834_, lean_object* v_inst_835_, lean_object* v_inst_836_, lean_object* v___y_837_){
_start:
{
lean_object* v_res_838_; 
v_res_838_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___redArg(v_inst_834_, v_inst_835_, v_inst_836_, v___y_837_);
lean_dec(v___y_837_);
return v_res_838_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27(lean_object* v_m_839_, lean_object* v_inst_840_, lean_object* v_inst_841_, lean_object* v_inst_842_, lean_object* v___y_843_){
_start:
{
lean_object* v___x_844_; 
v___x_844_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___redArg(v_inst_840_, v_inst_841_, v_inst_842_, v___y_843_);
return v___x_844_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___boxed(lean_object* v_m_845_, lean_object* v_inst_846_, lean_object* v_inst_847_, lean_object* v_inst_848_, lean_object* v___y_849_){
_start:
{
lean_object* v_res_850_; 
v_res_850_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27(v_m_845_, v_inst_846_, v_inst_847_, v_inst_848_, v___y_849_);
lean_dec(v___y_849_);
return v_res_850_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__0(lean_object* v_pendingProducer_855_, lean_object* v_pendingConsumer_856_, uint8_t v_closed_857_, lean_object* v_knownSize_858_, lean_object* v_pendingIncompleteChunk_859_, lean_object* v_closeError_860_, lean_object* v_interestWaiter_861_, lean_object* v___y_862_){
_start:
{
lean_object* v___x_864_; lean_object* v___x_865_; lean_object* v___x_866_; 
v___x_864_ = lean_alloc_ctor(0, 6, 1);
lean_ctor_set(v___x_864_, 0, v_pendingProducer_855_);
lean_ctor_set(v___x_864_, 1, v_pendingConsumer_856_);
lean_ctor_set(v___x_864_, 2, v_interestWaiter_861_);
lean_ctor_set(v___x_864_, 3, v_knownSize_858_);
lean_ctor_set(v___x_864_, 4, v_pendingIncompleteChunk_859_);
lean_ctor_set(v___x_864_, 5, v_closeError_860_);
lean_ctor_set_uint8(v___x_864_, sizeof(void*)*6, v_closed_857_);
v___x_865_ = lean_st_ref_swap(v___y_862_, v___x_864_);
lean_dec(v___x_865_);
v___x_866_ = ((lean_object*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__0___closed__1));
return v___x_866_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__0___boxed(lean_object* v_pendingProducer_867_, lean_object* v_pendingConsumer_868_, lean_object* v_closed_869_, lean_object* v_knownSize_870_, lean_object* v_pendingIncompleteChunk_871_, lean_object* v_closeError_872_, lean_object* v_interestWaiter_873_, lean_object* v___y_874_, lean_object* v___y_875_){
_start:
{
uint8_t v_closed_boxed_876_; lean_object* v_res_877_; 
v_closed_boxed_876_ = lean_unbox(v_closed_869_);
v_res_877_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__0(v_pendingProducer_867_, v_pendingConsumer_868_, v_closed_boxed_876_, v_knownSize_870_, v_pendingIncompleteChunk_871_, v_closeError_872_, v_interestWaiter_873_, v___y_874_);
lean_dec(v___y_874_);
return v_res_877_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__1(lean_object* v___f_878_, lean_object* v___y_879_, lean_object* v_x_880_){
_start:
{
if (lean_obj_tag(v_x_880_) == 0)
{
lean_object* v_a_882_; lean_object* v___x_884_; uint8_t v_isShared_885_; uint8_t v_isSharedCheck_890_; 
lean_dec_ref(v___f_878_);
v_a_882_ = lean_ctor_get(v_x_880_, 0);
v_isSharedCheck_890_ = !lean_is_exclusive(v_x_880_);
if (v_isSharedCheck_890_ == 0)
{
v___x_884_ = v_x_880_;
v_isShared_885_ = v_isSharedCheck_890_;
goto v_resetjp_883_;
}
else
{
lean_inc(v_a_882_);
lean_dec(v_x_880_);
v___x_884_ = lean_box(0);
v_isShared_885_ = v_isSharedCheck_890_;
goto v_resetjp_883_;
}
v_resetjp_883_:
{
lean_object* v___x_887_; 
if (v_isShared_885_ == 0)
{
v___x_887_ = v___x_884_;
goto v_reusejp_886_;
}
else
{
lean_object* v_reuseFailAlloc_889_; 
v_reuseFailAlloc_889_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_889_, 0, v_a_882_);
v___x_887_ = v_reuseFailAlloc_889_;
goto v_reusejp_886_;
}
v_reusejp_886_:
{
lean_object* v___x_888_; 
v___x_888_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_888_, 0, v___x_887_);
return v___x_888_;
}
}
}
else
{
lean_object* v_a_891_; lean_object* v___x_892_; 
v_a_891_ = lean_ctor_get(v_x_880_, 0);
lean_inc(v_a_891_);
lean_dec_ref_known(v_x_880_, 1);
lean_inc(v___y_879_);
v___x_892_ = lean_apply_3(v___f_878_, v_a_891_, v___y_879_, lean_box(0));
return v___x_892_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__1___boxed(lean_object* v___f_893_, lean_object* v___y_894_, lean_object* v_x_895_, lean_object* v___y_896_){
_start:
{
lean_object* v_res_897_; 
v_res_897_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__1(v___f_893_, v___y_894_, v_x_895_);
lean_dec(v___y_894_);
return v_res_897_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__4(lean_object* v_interestWaiter_902_, lean_object* v___f_903_, lean_object* v___f_904_, lean_object* v_x_905_){
_start:
{
if (lean_obj_tag(v_x_905_) == 0)
{
lean_object* v_a_907_; lean_object* v___x_909_; uint8_t v_isShared_910_; uint8_t v_isSharedCheck_915_; 
lean_dec_ref(v___f_904_);
lean_dec_ref(v___f_903_);
lean_dec(v_interestWaiter_902_);
v_a_907_ = lean_ctor_get(v_x_905_, 0);
v_isSharedCheck_915_ = !lean_is_exclusive(v_x_905_);
if (v_isSharedCheck_915_ == 0)
{
v___x_909_ = v_x_905_;
v_isShared_910_ = v_isSharedCheck_915_;
goto v_resetjp_908_;
}
else
{
lean_inc(v_a_907_);
lean_dec(v_x_905_);
v___x_909_ = lean_box(0);
v_isShared_910_ = v_isSharedCheck_915_;
goto v_resetjp_908_;
}
v_resetjp_908_:
{
lean_object* v___x_912_; 
if (v_isShared_910_ == 0)
{
v___x_912_ = v___x_909_;
goto v_reusejp_911_;
}
else
{
lean_object* v_reuseFailAlloc_914_; 
v_reuseFailAlloc_914_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_914_, 0, v_a_907_);
v___x_912_ = v_reuseFailAlloc_914_;
goto v_reusejp_911_;
}
v_reusejp_911_:
{
lean_object* v___x_913_; 
v___x_913_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_913_, 0, v___x_912_);
return v___x_913_;
}
}
}
else
{
lean_object* v_a_916_; lean_object* v___x_918_; uint8_t v_isShared_919_; uint8_t v_isSharedCheck_932_; 
v_a_916_ = lean_ctor_get(v_x_905_, 0);
v_isSharedCheck_932_ = !lean_is_exclusive(v_x_905_);
if (v_isSharedCheck_932_ == 0)
{
v___x_918_ = v_x_905_;
v_isShared_919_ = v_isSharedCheck_932_;
goto v_resetjp_917_;
}
else
{
lean_inc(v_a_916_);
lean_dec(v_x_905_);
v___x_918_ = lean_box(0);
v_isShared_919_ = v_isSharedCheck_932_;
goto v_resetjp_917_;
}
v_resetjp_917_:
{
uint8_t v___x_920_; 
v___x_920_ = lean_unbox(v_a_916_);
if (v___x_920_ == 0)
{
lean_object* v___x_921_; lean_object* v___x_923_; 
lean_dec_ref(v___f_904_);
v___x_921_ = lean_unsigned_to_nat(0u);
if (v_isShared_919_ == 0)
{
lean_ctor_set(v___x_918_, 0, v_interestWaiter_902_);
v___x_923_ = v___x_918_;
goto v_reusejp_922_;
}
else
{
lean_object* v_reuseFailAlloc_927_; 
v_reuseFailAlloc_927_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_927_, 0, v_interestWaiter_902_);
v___x_923_ = v_reuseFailAlloc_927_;
goto v_reusejp_922_;
}
v_reusejp_922_:
{
lean_object* v___x_924_; uint8_t v___x_925_; lean_object* v___x_926_; 
v___x_924_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_924_, 0, v___x_923_);
v___x_925_ = lean_unbox(v_a_916_);
lean_dec(v_a_916_);
v___x_926_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_921_, v___x_925_, v___x_924_, v___f_903_);
return v___x_926_;
}
}
else
{
lean_object* v___x_928_; uint8_t v___x_929_; lean_object* v___x_930_; lean_object* v___x_931_; 
lean_del_object(v___x_918_);
lean_dec(v_a_916_);
lean_dec_ref(v___f_903_);
lean_dec(v_interestWaiter_902_);
v___x_928_ = lean_unsigned_to_nat(0u);
v___x_929_ = 0;
v___x_930_ = ((lean_object*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__4___closed__1));
v___x_931_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_928_, v___x_929_, v___x_930_, v___f_904_);
return v___x_931_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__4___boxed(lean_object* v_interestWaiter_933_, lean_object* v___f_934_, lean_object* v___f_935_, lean_object* v_x_936_, lean_object* v___y_937_){
_start:
{
lean_object* v_res_938_; 
v_res_938_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__4(v_interestWaiter_933_, v___f_934_, v___f_935_, v_x_936_);
return v_res_938_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__2(lean_object* v_pendingProducer_939_, uint8_t v_closed_940_, lean_object* v_knownSize_941_, lean_object* v_pendingIncompleteChunk_942_, lean_object* v_closeError_943_, lean_object* v_interestWaiter_944_, lean_object* v_pendingConsumer_945_, lean_object* v___y_946_){
_start:
{
lean_object* v___x_948_; lean_object* v___f_949_; 
v___x_948_ = lean_box(v_closed_940_);
v___f_949_ = lean_alloc_closure((void*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__0___boxed), 9, 6);
lean_closure_set(v___f_949_, 0, v_pendingProducer_939_);
lean_closure_set(v___f_949_, 1, v_pendingConsumer_945_);
lean_closure_set(v___f_949_, 2, v___x_948_);
lean_closure_set(v___f_949_, 3, v_knownSize_941_);
lean_closure_set(v___f_949_, 4, v_pendingIncompleteChunk_942_);
lean_closure_set(v___f_949_, 5, v_closeError_943_);
if (lean_obj_tag(v_interestWaiter_944_) == 0)
{
lean_object* v___f_950_; lean_object* v___x_951_; uint8_t v___x_952_; lean_object* v___x_953_; lean_object* v___x_954_; lean_object* v___x_955_; 
lean_inc(v___y_946_);
v___f_950_ = lean_alloc_closure((void*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__1___boxed), 4, 2);
lean_closure_set(v___f_950_, 0, v___f_949_);
lean_closure_set(v___f_950_, 1, v___y_946_);
v___x_951_ = lean_unsigned_to_nat(0u);
v___x_952_ = 0;
v___x_953_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_953_, 0, v_interestWaiter_944_);
v___x_954_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_954_, 0, v___x_953_);
v___x_955_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_951_, v___x_952_, v___x_954_, v___f_950_);
return v___x_955_;
}
else
{
lean_object* v_val_956_; lean_object* v_finished_957_; lean_object* v___f_958_; lean_object* v___f_959_; lean_object* v___x_960_; uint8_t v___x_961_; lean_object* v___x_962_; lean_object* v___x_963_; lean_object* v___x_964_; lean_object* v___x_965_; 
v_val_956_ = lean_ctor_get(v_interestWaiter_944_, 0);
v_finished_957_ = lean_ctor_get(v_val_956_, 0);
lean_inc(v_finished_957_);
lean_inc(v___y_946_);
v___f_958_ = lean_alloc_closure((void*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__1___boxed), 4, 2);
lean_closure_set(v___f_958_, 0, v___f_949_);
lean_closure_set(v___f_958_, 1, v___y_946_);
lean_inc_ref(v___f_958_);
v___f_959_ = lean_alloc_closure((void*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__4___boxed), 5, 3);
lean_closure_set(v___f_959_, 0, v_interestWaiter_944_);
lean_closure_set(v___f_959_, 1, v___f_958_);
lean_closure_set(v___f_959_, 2, v___f_958_);
v___x_960_ = lean_unsigned_to_nat(0u);
v___x_961_ = 0;
v___x_962_ = lean_st_ref_get(v_finished_957_);
lean_dec(v_finished_957_);
v___x_963_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_963_, 0, v___x_962_);
v___x_964_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_964_, 0, v___x_963_);
v___x_965_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_960_, v___x_961_, v___x_964_, v___f_959_);
return v___x_965_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__2___boxed(lean_object* v_pendingProducer_966_, lean_object* v_closed_967_, lean_object* v_knownSize_968_, lean_object* v_pendingIncompleteChunk_969_, lean_object* v_closeError_970_, lean_object* v_interestWaiter_971_, lean_object* v_pendingConsumer_972_, lean_object* v___y_973_, lean_object* v___y_974_){
_start:
{
uint8_t v_closed_boxed_975_; lean_object* v_res_976_; 
v_closed_boxed_975_ = lean_unbox(v_closed_967_);
v_res_976_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__2(v_pendingProducer_966_, v_closed_boxed_975_, v_knownSize_968_, v_pendingIncompleteChunk_969_, v_closeError_970_, v_interestWaiter_971_, v_pendingConsumer_972_, v___y_973_);
lean_dec(v___y_973_);
return v_res_976_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__3(lean_object* v___f_977_, lean_object* v___y_978_, lean_object* v_x_979_){
_start:
{
if (lean_obj_tag(v_x_979_) == 0)
{
lean_object* v_a_981_; lean_object* v___x_983_; uint8_t v_isShared_984_; uint8_t v_isSharedCheck_989_; 
lean_dec_ref(v___f_977_);
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
lean_object* v_a_990_; lean_object* v___x_991_; 
v_a_990_ = lean_ctor_get(v_x_979_, 0);
lean_inc(v_a_990_);
lean_dec_ref_known(v_x_979_, 1);
lean_inc(v___y_978_);
v___x_991_ = lean_apply_3(v___f_977_, v_a_990_, v___y_978_, lean_box(0));
return v___x_991_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__3___boxed(lean_object* v___f_992_, lean_object* v___y_993_, lean_object* v_x_994_, lean_object* v___y_995_){
_start:
{
lean_object* v_res_996_; 
v_res_996_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__3(v___f_992_, v___y_993_, v_x_994_);
lean_dec(v___y_993_);
return v_res_996_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__7(lean_object* v_pendingConsumer_1001_, lean_object* v___f_1002_, lean_object* v___f_1003_, lean_object* v_x_1004_){
_start:
{
if (lean_obj_tag(v_x_1004_) == 0)
{
lean_object* v_a_1006_; lean_object* v___x_1008_; uint8_t v_isShared_1009_; uint8_t v_isSharedCheck_1014_; 
lean_dec_ref(v___f_1003_);
lean_dec_ref(v___f_1002_);
lean_dec(v_pendingConsumer_1001_);
v_a_1006_ = lean_ctor_get(v_x_1004_, 0);
v_isSharedCheck_1014_ = !lean_is_exclusive(v_x_1004_);
if (v_isSharedCheck_1014_ == 0)
{
v___x_1008_ = v_x_1004_;
v_isShared_1009_ = v_isSharedCheck_1014_;
goto v_resetjp_1007_;
}
else
{
lean_inc(v_a_1006_);
lean_dec(v_x_1004_);
v___x_1008_ = lean_box(0);
v_isShared_1009_ = v_isSharedCheck_1014_;
goto v_resetjp_1007_;
}
v_resetjp_1007_:
{
lean_object* v___x_1011_; 
if (v_isShared_1009_ == 0)
{
v___x_1011_ = v___x_1008_;
goto v_reusejp_1010_;
}
else
{
lean_object* v_reuseFailAlloc_1013_; 
v_reuseFailAlloc_1013_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1013_, 0, v_a_1006_);
v___x_1011_ = v_reuseFailAlloc_1013_;
goto v_reusejp_1010_;
}
v_reusejp_1010_:
{
lean_object* v___x_1012_; 
v___x_1012_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1012_, 0, v___x_1011_);
return v___x_1012_;
}
}
}
else
{
lean_object* v_a_1015_; lean_object* v___x_1017_; uint8_t v_isShared_1018_; uint8_t v_isSharedCheck_1031_; 
v_a_1015_ = lean_ctor_get(v_x_1004_, 0);
v_isSharedCheck_1031_ = !lean_is_exclusive(v_x_1004_);
if (v_isSharedCheck_1031_ == 0)
{
v___x_1017_ = v_x_1004_;
v_isShared_1018_ = v_isSharedCheck_1031_;
goto v_resetjp_1016_;
}
else
{
lean_inc(v_a_1015_);
lean_dec(v_x_1004_);
v___x_1017_ = lean_box(0);
v_isShared_1018_ = v_isSharedCheck_1031_;
goto v_resetjp_1016_;
}
v_resetjp_1016_:
{
uint8_t v___x_1019_; 
v___x_1019_ = lean_unbox(v_a_1015_);
if (v___x_1019_ == 0)
{
lean_object* v___x_1020_; lean_object* v___x_1022_; 
lean_dec_ref(v___f_1003_);
v___x_1020_ = lean_unsigned_to_nat(0u);
if (v_isShared_1018_ == 0)
{
lean_ctor_set(v___x_1017_, 0, v_pendingConsumer_1001_);
v___x_1022_ = v___x_1017_;
goto v_reusejp_1021_;
}
else
{
lean_object* v_reuseFailAlloc_1026_; 
v_reuseFailAlloc_1026_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1026_, 0, v_pendingConsumer_1001_);
v___x_1022_ = v_reuseFailAlloc_1026_;
goto v_reusejp_1021_;
}
v_reusejp_1021_:
{
lean_object* v___x_1023_; uint8_t v___x_1024_; lean_object* v___x_1025_; 
v___x_1023_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1023_, 0, v___x_1022_);
v___x_1024_ = lean_unbox(v_a_1015_);
lean_dec(v_a_1015_);
v___x_1025_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_1020_, v___x_1024_, v___x_1023_, v___f_1002_);
return v___x_1025_;
}
}
else
{
lean_object* v___x_1027_; uint8_t v___x_1028_; lean_object* v___x_1029_; lean_object* v___x_1030_; 
lean_del_object(v___x_1017_);
lean_dec(v_a_1015_);
lean_dec_ref(v___f_1002_);
lean_dec(v_pendingConsumer_1001_);
v___x_1027_ = lean_unsigned_to_nat(0u);
v___x_1028_ = 0;
v___x_1029_ = ((lean_object*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__7___closed__1));
v___x_1030_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_1027_, v___x_1028_, v___x_1029_, v___f_1003_);
return v___x_1030_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__7___boxed(lean_object* v_pendingConsumer_1032_, lean_object* v___f_1033_, lean_object* v___f_1034_, lean_object* v_x_1035_, lean_object* v___y_1036_){
_start:
{
lean_object* v_res_1037_; 
v_res_1037_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__7(v_pendingConsumer_1032_, v___f_1033_, v___f_1034_, v_x_1035_);
return v_res_1037_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__5(lean_object* v___y_1038_, lean_object* v_x_1039_){
_start:
{
if (lean_obj_tag(v_x_1039_) == 0)
{
lean_object* v_a_1041_; lean_object* v___x_1043_; uint8_t v_isShared_1044_; uint8_t v_isSharedCheck_1049_; 
v_a_1041_ = lean_ctor_get(v_x_1039_, 0);
v_isSharedCheck_1049_ = !lean_is_exclusive(v_x_1039_);
if (v_isSharedCheck_1049_ == 0)
{
v___x_1043_ = v_x_1039_;
v_isShared_1044_ = v_isSharedCheck_1049_;
goto v_resetjp_1042_;
}
else
{
lean_inc(v_a_1041_);
lean_dec(v_x_1039_);
v___x_1043_ = lean_box(0);
v_isShared_1044_ = v_isSharedCheck_1049_;
goto v_resetjp_1042_;
}
v_resetjp_1042_:
{
lean_object* v___x_1046_; 
if (v_isShared_1044_ == 0)
{
v___x_1046_ = v___x_1043_;
goto v_reusejp_1045_;
}
else
{
lean_object* v_reuseFailAlloc_1048_; 
v_reuseFailAlloc_1048_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1048_, 0, v_a_1041_);
v___x_1046_ = v_reuseFailAlloc_1048_;
goto v_reusejp_1045_;
}
v_reusejp_1045_:
{
lean_object* v___x_1047_; 
v___x_1047_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1047_, 0, v___x_1046_);
return v___x_1047_;
}
}
}
else
{
lean_object* v_a_1050_; lean_object* v___x_1052_; uint8_t v_isShared_1053_; uint8_t v_isSharedCheck_1090_; 
v_a_1050_ = lean_ctor_get(v_x_1039_, 0);
v_isSharedCheck_1090_ = !lean_is_exclusive(v_x_1039_);
if (v_isSharedCheck_1090_ == 0)
{
v___x_1052_ = v_x_1039_;
v_isShared_1053_ = v_isSharedCheck_1090_;
goto v_resetjp_1051_;
}
else
{
lean_inc(v_a_1050_);
lean_dec(v_x_1039_);
v___x_1052_ = lean_box(0);
v_isShared_1053_ = v_isSharedCheck_1090_;
goto v_resetjp_1051_;
}
v_resetjp_1051_:
{
lean_object* v_pendingProducer_1054_; lean_object* v_pendingConsumer_1055_; lean_object* v_interestWaiter_1056_; uint8_t v_closed_1057_; lean_object* v_knownSize_1058_; lean_object* v_pendingIncompleteChunk_1059_; lean_object* v_closeError_1060_; lean_object* v___x_1061_; lean_object* v___f_1062_; lean_object* v___y_1064_; 
v_pendingProducer_1054_ = lean_ctor_get(v_a_1050_, 0);
lean_inc(v_pendingProducer_1054_);
v_pendingConsumer_1055_ = lean_ctor_get(v_a_1050_, 1);
lean_inc(v_pendingConsumer_1055_);
v_interestWaiter_1056_ = lean_ctor_get(v_a_1050_, 2);
lean_inc(v_interestWaiter_1056_);
v_closed_1057_ = lean_ctor_get_uint8(v_a_1050_, sizeof(void*)*6);
v_knownSize_1058_ = lean_ctor_get(v_a_1050_, 3);
lean_inc(v_knownSize_1058_);
v_pendingIncompleteChunk_1059_ = lean_ctor_get(v_a_1050_, 4);
lean_inc(v_pendingIncompleteChunk_1059_);
v_closeError_1060_ = lean_ctor_get(v_a_1050_, 5);
lean_inc(v_closeError_1060_);
lean_dec(v_a_1050_);
v___x_1061_ = lean_box(v_closed_1057_);
v___f_1062_ = lean_alloc_closure((void*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__2___boxed), 9, 6);
lean_closure_set(v___f_1062_, 0, v_pendingProducer_1054_);
lean_closure_set(v___f_1062_, 1, v___x_1061_);
lean_closure_set(v___f_1062_, 2, v_knownSize_1058_);
lean_closure_set(v___f_1062_, 3, v_pendingIncompleteChunk_1059_);
lean_closure_set(v___f_1062_, 4, v_closeError_1060_);
lean_closure_set(v___f_1062_, 5, v_interestWaiter_1056_);
if (lean_obj_tag(v_pendingConsumer_1055_) == 1)
{
lean_object* v_val_1073_; 
v_val_1073_ = lean_ctor_get(v_pendingConsumer_1055_, 0);
lean_inc(v_val_1073_);
if (lean_obj_tag(v_val_1073_) == 1)
{
lean_object* v_finished_1074_; lean_object* v___x_1076_; uint8_t v_isShared_1077_; uint8_t v_isSharedCheck_1089_; 
lean_del_object(v___x_1052_);
v_finished_1074_ = lean_ctor_get(v_val_1073_, 0);
v_isSharedCheck_1089_ = !lean_is_exclusive(v_val_1073_);
if (v_isSharedCheck_1089_ == 0)
{
v___x_1076_ = v_val_1073_;
v_isShared_1077_ = v_isSharedCheck_1089_;
goto v_resetjp_1075_;
}
else
{
lean_inc(v_finished_1074_);
lean_dec(v_val_1073_);
v___x_1076_ = lean_box(0);
v_isShared_1077_ = v_isSharedCheck_1089_;
goto v_resetjp_1075_;
}
v_resetjp_1075_:
{
lean_object* v_finished_1078_; lean_object* v___f_1079_; lean_object* v___f_1080_; lean_object* v___x_1081_; uint8_t v___x_1082_; lean_object* v___x_1083_; lean_object* v___x_1085_; 
v_finished_1078_ = lean_ctor_get(v_finished_1074_, 0);
lean_inc(v_finished_1078_);
lean_dec_ref(v_finished_1074_);
lean_inc(v___y_1038_);
v___f_1079_ = lean_alloc_closure((void*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__3___boxed), 4, 2);
lean_closure_set(v___f_1079_, 0, v___f_1062_);
lean_closure_set(v___f_1079_, 1, v___y_1038_);
lean_inc_ref(v___f_1079_);
v___f_1080_ = lean_alloc_closure((void*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__7___boxed), 5, 3);
lean_closure_set(v___f_1080_, 0, v_pendingConsumer_1055_);
lean_closure_set(v___f_1080_, 1, v___f_1079_);
lean_closure_set(v___f_1080_, 2, v___f_1079_);
v___x_1081_ = lean_unsigned_to_nat(0u);
v___x_1082_ = 0;
v___x_1083_ = lean_st_ref_get(v_finished_1078_);
lean_dec(v_finished_1078_);
if (v_isShared_1077_ == 0)
{
lean_ctor_set(v___x_1076_, 0, v___x_1083_);
v___x_1085_ = v___x_1076_;
goto v_reusejp_1084_;
}
else
{
lean_object* v_reuseFailAlloc_1088_; 
v_reuseFailAlloc_1088_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1088_, 0, v___x_1083_);
v___x_1085_ = v_reuseFailAlloc_1088_;
goto v_reusejp_1084_;
}
v_reusejp_1084_:
{
lean_object* v___x_1086_; lean_object* v___x_1087_; 
v___x_1086_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1086_, 0, v___x_1085_);
v___x_1087_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_1081_, v___x_1082_, v___x_1086_, v___f_1080_);
return v___x_1087_;
}
}
}
else
{
lean_dec(v_val_1073_);
v___y_1064_ = v___y_1038_;
goto v___jp_1063_;
}
}
else
{
v___y_1064_ = v___y_1038_;
goto v___jp_1063_;
}
v___jp_1063_:
{
lean_object* v___f_1065_; lean_object* v___x_1066_; uint8_t v___x_1067_; lean_object* v___x_1069_; 
lean_inc(v___y_1064_);
v___f_1065_ = lean_alloc_closure((void*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__3___boxed), 4, 2);
lean_closure_set(v___f_1065_, 0, v___f_1062_);
lean_closure_set(v___f_1065_, 1, v___y_1064_);
v___x_1066_ = lean_unsigned_to_nat(0u);
v___x_1067_ = 0;
if (v_isShared_1053_ == 0)
{
lean_ctor_set(v___x_1052_, 0, v_pendingConsumer_1055_);
v___x_1069_ = v___x_1052_;
goto v_reusejp_1068_;
}
else
{
lean_object* v_reuseFailAlloc_1072_; 
v_reuseFailAlloc_1072_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1072_, 0, v_pendingConsumer_1055_);
v___x_1069_ = v_reuseFailAlloc_1072_;
goto v_reusejp_1068_;
}
v_reusejp_1068_:
{
lean_object* v___x_1070_; lean_object* v___x_1071_; 
v___x_1070_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1070_, 0, v___x_1069_);
v___x_1071_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_1066_, v___x_1067_, v___x_1070_, v___f_1065_);
return v___x_1071_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__5___boxed(lean_object* v___y_1091_, lean_object* v_x_1092_, lean_object* v___y_1093_){
_start:
{
lean_object* v_res_1094_; 
v_res_1094_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__5(v___y_1091_, v_x_1092_);
lean_dec(v___y_1091_);
return v_res_1094_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1(lean_object* v___y_1095_){
_start:
{
lean_object* v___f_1097_; lean_object* v___x_1098_; uint8_t v___x_1099_; lean_object* v___x_1100_; lean_object* v___x_1101_; lean_object* v___x_1102_; lean_object* v___x_1103_; 
lean_inc(v___y_1095_);
v___f_1097_ = lean_alloc_closure((void*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__5___boxed), 3, 1);
lean_closure_set(v___f_1097_, 0, v___y_1095_);
v___x_1098_ = lean_unsigned_to_nat(0u);
v___x_1099_ = 0;
v___x_1100_ = lean_st_ref_get(v___y_1095_);
v___x_1101_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1101_, 0, v___x_1100_);
v___x_1102_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1102_, 0, v___x_1101_);
v___x_1103_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_1098_, v___x_1099_, v___x_1102_, v___f_1097_);
return v___x_1103_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___boxed(lean_object* v___y_1104_, lean_object* v___y_1105_){
_start:
{
lean_object* v_res_1106_; 
v_res_1106_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1(v___y_1104_);
lean_dec(v___y_1104_);
return v_res_1106_;
}
}
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00Std_Http_Body_Stream_tryRecv_spec__2___redArg___lam__0(lean_object* v___y_1107_){
_start:
{
if (lean_obj_tag(v___y_1107_) == 0)
{
lean_object* v_a_1108_; lean_object* v___x_1110_; uint8_t v_isShared_1111_; uint8_t v_isSharedCheck_1115_; 
v_a_1108_ = lean_ctor_get(v___y_1107_, 0);
v_isSharedCheck_1115_ = !lean_is_exclusive(v___y_1107_);
if (v_isSharedCheck_1115_ == 0)
{
v___x_1110_ = v___y_1107_;
v_isShared_1111_ = v_isSharedCheck_1115_;
goto v_resetjp_1109_;
}
else
{
lean_inc(v_a_1108_);
lean_dec(v___y_1107_);
v___x_1110_ = lean_box(0);
v_isShared_1111_ = v_isSharedCheck_1115_;
goto v_resetjp_1109_;
}
v_resetjp_1109_:
{
lean_object* v___x_1113_; 
if (v_isShared_1111_ == 0)
{
v___x_1113_ = v___x_1110_;
goto v_reusejp_1112_;
}
else
{
lean_object* v_reuseFailAlloc_1114_; 
v_reuseFailAlloc_1114_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1114_, 0, v_a_1108_);
v___x_1113_ = v_reuseFailAlloc_1114_;
goto v_reusejp_1112_;
}
v_reusejp_1112_:
{
return v___x_1113_;
}
}
}
else
{
lean_object* v_a_1116_; lean_object* v___x_1118_; uint8_t v_isShared_1119_; uint8_t v_isSharedCheck_1124_; 
v_a_1116_ = lean_ctor_get(v___y_1107_, 0);
v_isSharedCheck_1124_ = !lean_is_exclusive(v___y_1107_);
if (v_isSharedCheck_1124_ == 0)
{
v___x_1118_ = v___y_1107_;
v_isShared_1119_ = v_isSharedCheck_1124_;
goto v_resetjp_1117_;
}
else
{
lean_inc(v_a_1116_);
lean_dec(v___y_1107_);
v___x_1118_ = lean_box(0);
v_isShared_1119_ = v_isSharedCheck_1124_;
goto v_resetjp_1117_;
}
v_resetjp_1117_:
{
lean_object* v_fst_1120_; lean_object* v___x_1122_; 
v_fst_1120_ = lean_ctor_get(v_a_1116_, 0);
lean_inc(v_fst_1120_);
lean_dec(v_a_1116_);
if (v_isShared_1119_ == 0)
{
lean_ctor_set(v___x_1118_, 0, v_fst_1120_);
v___x_1122_ = v___x_1118_;
goto v_reusejp_1121_;
}
else
{
lean_object* v_reuseFailAlloc_1123_; 
v_reuseFailAlloc_1123_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1123_, 0, v_fst_1120_);
v___x_1122_ = v_reuseFailAlloc_1123_;
goto v_reusejp_1121_;
}
v_reusejp_1121_:
{
return v___x_1122_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00Std_Http_Body_Stream_tryRecv_spec__2___redArg___lam__1(lean_object* v_mutex_1125_, lean_object* v_x_1126_){
_start:
{
lean_object* v___x_1128_; lean_object* v___x_1129_; lean_object* v___x_1130_; 
v___x_1128_ = lean_io_basemutex_unlock(v_mutex_1125_);
v___x_1129_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1129_, 0, v___x_1128_);
v___x_1130_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1130_, 0, v___x_1129_);
return v___x_1130_;
}
}
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00Std_Http_Body_Stream_tryRecv_spec__2___redArg___lam__1___boxed(lean_object* v_mutex_1131_, lean_object* v_x_1132_, lean_object* v___y_1133_){
_start:
{
lean_object* v_res_1134_; 
v_res_1134_ = l_Std_Mutex_atomically___at___00Std_Http_Body_Stream_tryRecv_spec__2___redArg___lam__1(v_mutex_1131_, v_x_1132_);
lean_dec(v_x_1132_);
lean_dec(v_mutex_1131_);
return v_res_1134_;
}
}
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00Std_Http_Body_Stream_tryRecv_spec__2___redArg___lam__2(lean_object* v_k_1135_, lean_object* v_ref_1136_, lean_object* v_x_1137_){
_start:
{
if (lean_obj_tag(v_x_1137_) == 0)
{
lean_object* v_a_1139_; lean_object* v___x_1141_; uint8_t v_isShared_1142_; uint8_t v_isSharedCheck_1147_; 
lean_dec(v_ref_1136_);
lean_dec_ref(v_k_1135_);
v_a_1139_ = lean_ctor_get(v_x_1137_, 0);
v_isSharedCheck_1147_ = !lean_is_exclusive(v_x_1137_);
if (v_isSharedCheck_1147_ == 0)
{
v___x_1141_ = v_x_1137_;
v_isShared_1142_ = v_isSharedCheck_1147_;
goto v_resetjp_1140_;
}
else
{
lean_inc(v_a_1139_);
lean_dec(v_x_1137_);
v___x_1141_ = lean_box(0);
v_isShared_1142_ = v_isSharedCheck_1147_;
goto v_resetjp_1140_;
}
v_resetjp_1140_:
{
lean_object* v___x_1144_; 
if (v_isShared_1142_ == 0)
{
v___x_1144_ = v___x_1141_;
goto v_reusejp_1143_;
}
else
{
lean_object* v_reuseFailAlloc_1146_; 
v_reuseFailAlloc_1146_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1146_, 0, v_a_1139_);
v___x_1144_ = v_reuseFailAlloc_1146_;
goto v_reusejp_1143_;
}
v_reusejp_1143_:
{
lean_object* v___x_1145_; 
v___x_1145_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1145_, 0, v___x_1144_);
return v___x_1145_;
}
}
}
else
{
lean_object* v___x_1148_; 
lean_dec_ref_known(v_x_1137_, 1);
v___x_1148_ = lean_apply_2(v_k_1135_, v_ref_1136_, lean_box(0));
return v___x_1148_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00Std_Http_Body_Stream_tryRecv_spec__2___redArg___lam__2___boxed(lean_object* v_k_1149_, lean_object* v_ref_1150_, lean_object* v_x_1151_, lean_object* v___y_1152_){
_start:
{
lean_object* v_res_1153_; 
v_res_1153_ = l_Std_Mutex_atomically___at___00Std_Http_Body_Stream_tryRecv_spec__2___redArg___lam__2(v_k_1149_, v_ref_1150_, v_x_1151_);
return v_res_1153_;
}
}
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00Std_Http_Body_Stream_tryRecv_spec__2___redArg___lam__3(lean_object* v_mutex_1154_, lean_object* v___f_1155_){
_start:
{
lean_object* v___x_1157_; uint8_t v___x_1158_; lean_object* v___x_1159_; lean_object* v___x_1160_; lean_object* v___x_1161_; lean_object* v___x_1162_; 
v___x_1157_ = lean_unsigned_to_nat(0u);
v___x_1158_ = 0;
v___x_1159_ = lean_io_basemutex_lock(v_mutex_1154_);
v___x_1160_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1160_, 0, v___x_1159_);
v___x_1161_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1161_, 0, v___x_1160_);
v___x_1162_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_1157_, v___x_1158_, v___x_1161_, v___f_1155_);
return v___x_1162_;
}
}
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00Std_Http_Body_Stream_tryRecv_spec__2___redArg___lam__3___boxed(lean_object* v_mutex_1163_, lean_object* v___f_1164_, lean_object* v___y_1165_){
_start:
{
lean_object* v_res_1166_; 
v_res_1166_ = l_Std_Mutex_atomically___at___00Std_Http_Body_Stream_tryRecv_spec__2___redArg___lam__3(v_mutex_1163_, v___f_1164_);
lean_dec(v_mutex_1163_);
return v_res_1166_;
}
}
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00Std_Http_Body_Stream_tryRecv_spec__2___redArg(lean_object* v_mutex_1168_, lean_object* v_k_1169_){
_start:
{
lean_object* v_ref_1171_; lean_object* v_mutex_1172_; lean_object* v___f_1173_; lean_object* v___f_1174_; lean_object* v___f_1175_; lean_object* v___f_1176_; lean_object* v___x_1177_; uint8_t v___x_1178_; lean_object* v___x_1179_; lean_object* v___y_1181_; 
v_ref_1171_ = lean_ctor_get(v_mutex_1168_, 0);
lean_inc(v_ref_1171_);
v_mutex_1172_ = lean_ctor_get(v_mutex_1168_, 1);
lean_inc_n(v_mutex_1172_, 2);
lean_dec_ref(v_mutex_1168_);
v___f_1173_ = ((lean_object*)(l_Std_Mutex_atomically___at___00Std_Http_Body_Stream_tryRecv_spec__2___redArg___closed__0));
v___f_1174_ = lean_alloc_closure((void*)(l_Std_Mutex_atomically___at___00Std_Http_Body_Stream_tryRecv_spec__2___redArg___lam__1___boxed), 3, 1);
lean_closure_set(v___f_1174_, 0, v_mutex_1172_);
v___f_1175_ = lean_alloc_closure((void*)(l_Std_Mutex_atomically___at___00Std_Http_Body_Stream_tryRecv_spec__2___redArg___lam__2___boxed), 4, 2);
lean_closure_set(v___f_1175_, 0, v_k_1169_);
lean_closure_set(v___f_1175_, 1, v_ref_1171_);
v___f_1176_ = lean_alloc_closure((void*)(l_Std_Mutex_atomically___at___00Std_Http_Body_Stream_tryRecv_spec__2___redArg___lam__3___boxed), 3, 2);
lean_closure_set(v___f_1176_, 0, v_mutex_1172_);
lean_closure_set(v___f_1176_, 1, v___f_1175_);
v___x_1177_ = lean_unsigned_to_nat(0u);
v___x_1178_ = 0;
v___x_1179_ = l_Std_Async_EAsync_tryFinally_x27___redArg(v___f_1176_, v___f_1174_, v___x_1177_, v___x_1178_);
if (lean_obj_tag(v___x_1179_) == 0)
{
lean_object* v_a_1183_; 
v_a_1183_ = lean_ctor_get(v___x_1179_, 0);
lean_inc(v_a_1183_);
lean_dec_ref_known(v___x_1179_, 1);
if (lean_obj_tag(v_a_1183_) == 0)
{
lean_object* v_a_1184_; lean_object* v___x_1186_; uint8_t v_isShared_1187_; uint8_t v_isSharedCheck_1191_; 
v_a_1184_ = lean_ctor_get(v_a_1183_, 0);
v_isSharedCheck_1191_ = !lean_is_exclusive(v_a_1183_);
if (v_isSharedCheck_1191_ == 0)
{
v___x_1186_ = v_a_1183_;
v_isShared_1187_ = v_isSharedCheck_1191_;
goto v_resetjp_1185_;
}
else
{
lean_inc(v_a_1184_);
lean_dec(v_a_1183_);
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
v___y_1181_ = v___x_1189_;
goto v___jp_1180_;
}
}
}
else
{
lean_object* v_a_1192_; lean_object* v___x_1194_; uint8_t v_isShared_1195_; uint8_t v_isSharedCheck_1200_; 
v_a_1192_ = lean_ctor_get(v_a_1183_, 0);
v_isSharedCheck_1200_ = !lean_is_exclusive(v_a_1183_);
if (v_isSharedCheck_1200_ == 0)
{
v___x_1194_ = v_a_1183_;
v_isShared_1195_ = v_isSharedCheck_1200_;
goto v_resetjp_1193_;
}
else
{
lean_inc(v_a_1192_);
lean_dec(v_a_1183_);
v___x_1194_ = lean_box(0);
v_isShared_1195_ = v_isSharedCheck_1200_;
goto v_resetjp_1193_;
}
v_resetjp_1193_:
{
lean_object* v_fst_1196_; lean_object* v___x_1198_; 
v_fst_1196_ = lean_ctor_get(v_a_1192_, 0);
lean_inc(v_fst_1196_);
lean_dec(v_a_1192_);
if (v_isShared_1195_ == 0)
{
lean_ctor_set(v___x_1194_, 0, v_fst_1196_);
v___x_1198_ = v___x_1194_;
goto v_reusejp_1197_;
}
else
{
lean_object* v_reuseFailAlloc_1199_; 
v_reuseFailAlloc_1199_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1199_, 0, v_fst_1196_);
v___x_1198_ = v_reuseFailAlloc_1199_;
goto v_reusejp_1197_;
}
v_reusejp_1197_:
{
v___y_1181_ = v___x_1198_;
goto v___jp_1180_;
}
}
}
}
else
{
lean_object* v_a_1201_; lean_object* v___x_1203_; uint8_t v_isShared_1204_; uint8_t v_isSharedCheck_1209_; 
v_a_1201_ = lean_ctor_get(v___x_1179_, 0);
v_isSharedCheck_1209_ = !lean_is_exclusive(v___x_1179_);
if (v_isSharedCheck_1209_ == 0)
{
v___x_1203_ = v___x_1179_;
v_isShared_1204_ = v_isSharedCheck_1209_;
goto v_resetjp_1202_;
}
else
{
lean_inc(v_a_1201_);
lean_dec(v___x_1179_);
v___x_1203_ = lean_box(0);
v_isShared_1204_ = v_isSharedCheck_1209_;
goto v_resetjp_1202_;
}
v_resetjp_1202_:
{
lean_object* v___x_1205_; lean_object* v___x_1207_; 
v___x_1205_ = lean_task_map(v___f_1173_, v_a_1201_, v___x_1177_, v___x_1178_);
if (v_isShared_1204_ == 0)
{
lean_ctor_set(v___x_1203_, 0, v___x_1205_);
v___x_1207_ = v___x_1203_;
goto v_reusejp_1206_;
}
else
{
lean_object* v_reuseFailAlloc_1208_; 
v_reuseFailAlloc_1208_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1208_, 0, v___x_1205_);
v___x_1207_ = v_reuseFailAlloc_1208_;
goto v_reusejp_1206_;
}
v_reusejp_1206_:
{
return v___x_1207_;
}
}
}
v___jp_1180_:
{
lean_object* v___x_1182_; 
v___x_1182_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1182_, 0, v___y_1181_);
return v___x_1182_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00Std_Http_Body_Stream_tryRecv_spec__2___redArg___boxed(lean_object* v_mutex_1210_, lean_object* v_k_1211_, lean_object* v___y_1212_){
_start:
{
lean_object* v_res_1213_; 
v_res_1213_ = l_Std_Mutex_atomically___at___00Std_Http_Body_Stream_tryRecv_spec__2___redArg(v_mutex_1210_, v_k_1211_);
return v_res_1213_;
}
}
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00Std_Http_Body_Stream_tryRecv_spec__2(lean_object* v_00_u03b1_1214_, lean_object* v_00_u03b2_1215_, lean_object* v_mutex_1216_, lean_object* v_k_1217_){
_start:
{
lean_object* v___x_1219_; 
v___x_1219_ = l_Std_Mutex_atomically___at___00Std_Http_Body_Stream_tryRecv_spec__2___redArg(v_mutex_1216_, v_k_1217_);
return v___x_1219_;
}
}
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00Std_Http_Body_Stream_tryRecv_spec__2___boxed(lean_object* v_00_u03b1_1220_, lean_object* v_00_u03b2_1221_, lean_object* v_mutex_1222_, lean_object* v_k_1223_, lean_object* v___y_1224_){
_start:
{
lean_object* v_res_1225_; 
v_res_1225_ = l_Std_Mutex_atomically___at___00Std_Http_Body_Stream_tryRecv_spec__2(v_00_u03b1_1220_, v_00_u03b2_1221_, v_mutex_1222_, v_k_1223_);
return v_res_1225_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_tryRecv___lam__0(lean_object* v_x_1226_){
_start:
{
if (lean_obj_tag(v_x_1226_) == 0)
{
lean_object* v_a_1228_; lean_object* v___x_1230_; uint8_t v_isShared_1231_; uint8_t v_isSharedCheck_1236_; 
v_a_1228_ = lean_ctor_get(v_x_1226_, 0);
v_isSharedCheck_1236_ = !lean_is_exclusive(v_x_1226_);
if (v_isSharedCheck_1236_ == 0)
{
v___x_1230_ = v_x_1226_;
v_isShared_1231_ = v_isSharedCheck_1236_;
goto v_resetjp_1229_;
}
else
{
lean_inc(v_a_1228_);
lean_dec(v_x_1226_);
v___x_1230_ = lean_box(0);
v_isShared_1231_ = v_isSharedCheck_1236_;
goto v_resetjp_1229_;
}
v_resetjp_1229_:
{
lean_object* v___x_1233_; 
if (v_isShared_1231_ == 0)
{
v___x_1233_ = v___x_1230_;
goto v_reusejp_1232_;
}
else
{
lean_object* v_reuseFailAlloc_1235_; 
v_reuseFailAlloc_1235_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1235_, 0, v_a_1228_);
v___x_1233_ = v_reuseFailAlloc_1235_;
goto v_reusejp_1232_;
}
v_reusejp_1232_:
{
lean_object* v___x_1234_; 
v___x_1234_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1234_, 0, v___x_1233_);
return v___x_1234_;
}
}
}
else
{
lean_object* v_a_1237_; lean_object* v___x_1238_; 
v_a_1237_ = lean_ctor_get(v_x_1226_, 0);
lean_inc(v_a_1237_);
lean_dec_ref_known(v_x_1226_, 1);
v___x_1238_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1238_, 0, v_a_1237_);
return v___x_1238_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_tryRecv___lam__0___boxed(lean_object* v_x_1239_, lean_object* v___y_1240_){
_start:
{
lean_object* v_res_1241_; 
v_res_1241_ = l_Std_Http_Body_Stream_tryRecv___lam__0(v_x_1239_);
return v_res_1241_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___at___00Std_Http_Body_Stream_tryRecv_spec__0___lam__1(lean_object* v___y_1242_, lean_object* v___f_1243_, lean_object* v_x_1244_){
_start:
{
if (lean_obj_tag(v_x_1244_) == 0)
{
lean_object* v_a_1246_; lean_object* v___x_1248_; uint8_t v_isShared_1249_; uint8_t v_isSharedCheck_1254_; 
lean_dec_ref(v___f_1243_);
v_a_1246_ = lean_ctor_get(v_x_1244_, 0);
v_isSharedCheck_1254_ = !lean_is_exclusive(v_x_1244_);
if (v_isSharedCheck_1254_ == 0)
{
v___x_1248_ = v_x_1244_;
v_isShared_1249_ = v_isSharedCheck_1254_;
goto v_resetjp_1247_;
}
else
{
lean_inc(v_a_1246_);
lean_dec(v_x_1244_);
v___x_1248_ = lean_box(0);
v_isShared_1249_ = v_isSharedCheck_1254_;
goto v_resetjp_1247_;
}
v_resetjp_1247_:
{
lean_object* v___x_1251_; 
if (v_isShared_1249_ == 0)
{
v___x_1251_ = v___x_1248_;
goto v_reusejp_1250_;
}
else
{
lean_object* v_reuseFailAlloc_1253_; 
v_reuseFailAlloc_1253_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1253_, 0, v_a_1246_);
v___x_1251_ = v_reuseFailAlloc_1253_;
goto v_reusejp_1250_;
}
v_reusejp_1250_:
{
lean_object* v___x_1252_; 
v___x_1252_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1252_, 0, v___x_1251_);
return v___x_1252_;
}
}
}
else
{
lean_object* v_a_1255_; 
v_a_1255_ = lean_ctor_get(v_x_1244_, 0);
lean_inc(v_a_1255_);
if (lean_obj_tag(v_a_1255_) == 1)
{
lean_object* v___x_1257_; uint8_t v_isShared_1258_; uint8_t v_isSharedCheck_1263_; 
lean_dec_ref(v___f_1243_);
v_isSharedCheck_1263_ = !lean_is_exclusive(v_a_1255_);
if (v_isSharedCheck_1263_ == 0)
{
lean_object* v_unused_1264_; 
v_unused_1264_ = lean_ctor_get(v_a_1255_, 0);
lean_dec(v_unused_1264_);
v___x_1257_ = v_a_1255_;
v_isShared_1258_ = v_isSharedCheck_1263_;
goto v_resetjp_1256_;
}
else
{
lean_dec(v_a_1255_);
v___x_1257_ = lean_box(0);
v_isShared_1258_ = v_isSharedCheck_1263_;
goto v_resetjp_1256_;
}
v_resetjp_1256_:
{
lean_object* v___x_1260_; 
if (v_isShared_1258_ == 0)
{
lean_ctor_set(v___x_1257_, 0, v_x_1244_);
v___x_1260_ = v___x_1257_;
goto v_reusejp_1259_;
}
else
{
lean_object* v_reuseFailAlloc_1262_; 
v_reuseFailAlloc_1262_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1262_, 0, v_x_1244_);
v___x_1260_ = v_reuseFailAlloc_1262_;
goto v_reusejp_1259_;
}
v_reusejp_1259_:
{
lean_object* v___x_1261_; 
v___x_1261_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1261_, 0, v___x_1260_);
return v___x_1261_;
}
}
}
else
{
lean_object* v___x_1266_; uint8_t v_isShared_1267_; uint8_t v_isSharedCheck_1276_; 
lean_dec(v_a_1255_);
v_isSharedCheck_1276_ = !lean_is_exclusive(v_x_1244_);
if (v_isSharedCheck_1276_ == 0)
{
lean_object* v_unused_1277_; 
v_unused_1277_ = lean_ctor_get(v_x_1244_, 0);
lean_dec(v_unused_1277_);
v___x_1266_ = v_x_1244_;
v_isShared_1267_ = v_isSharedCheck_1276_;
goto v_resetjp_1265_;
}
else
{
lean_dec(v_x_1244_);
v___x_1266_ = lean_box(0);
v_isShared_1267_ = v_isSharedCheck_1276_;
goto v_resetjp_1265_;
}
v_resetjp_1265_:
{
lean_object* v___x_1268_; uint8_t v___x_1269_; lean_object* v___x_1270_; lean_object* v___x_1272_; 
v___x_1268_ = lean_unsigned_to_nat(0u);
v___x_1269_ = 0;
v___x_1270_ = lean_st_ref_get(v___y_1242_);
if (v_isShared_1267_ == 0)
{
lean_ctor_set(v___x_1266_, 0, v___x_1270_);
v___x_1272_ = v___x_1266_;
goto v_reusejp_1271_;
}
else
{
lean_object* v_reuseFailAlloc_1275_; 
v_reuseFailAlloc_1275_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1275_, 0, v___x_1270_);
v___x_1272_ = v_reuseFailAlloc_1275_;
goto v_reusejp_1271_;
}
v_reusejp_1271_:
{
lean_object* v___x_1273_; lean_object* v___x_1274_; 
v___x_1273_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1273_, 0, v___x_1272_);
v___x_1274_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_1268_, v___x_1269_, v___x_1273_, v___f_1243_);
return v___x_1274_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___at___00Std_Http_Body_Stream_tryRecv_spec__0___lam__1___boxed(lean_object* v___y_1278_, lean_object* v___f_1279_, lean_object* v_x_1280_, lean_object* v___y_1281_){
_start:
{
lean_object* v_res_1282_; 
v_res_1282_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___at___00Std_Http_Body_Stream_tryRecv_spec__0___lam__1(v___y_1278_, v___f_1279_, v_x_1280_);
lean_dec(v___y_1278_);
return v_res_1282_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___at___00Std_Http_Body_Stream_tryRecv_spec__0___lam__0(lean_object* v_x_1287_){
_start:
{
if (lean_obj_tag(v_x_1287_) == 0)
{
lean_object* v_a_1289_; lean_object* v___x_1291_; uint8_t v_isShared_1292_; uint8_t v_isSharedCheck_1297_; 
v_a_1289_ = lean_ctor_get(v_x_1287_, 0);
v_isSharedCheck_1297_ = !lean_is_exclusive(v_x_1287_);
if (v_isSharedCheck_1297_ == 0)
{
v___x_1291_ = v_x_1287_;
v_isShared_1292_ = v_isSharedCheck_1297_;
goto v_resetjp_1290_;
}
else
{
lean_inc(v_a_1289_);
lean_dec(v_x_1287_);
v___x_1291_ = lean_box(0);
v_isShared_1292_ = v_isSharedCheck_1297_;
goto v_resetjp_1290_;
}
v_resetjp_1290_:
{
lean_object* v___x_1294_; 
if (v_isShared_1292_ == 0)
{
v___x_1294_ = v___x_1291_;
goto v_reusejp_1293_;
}
else
{
lean_object* v_reuseFailAlloc_1296_; 
v_reuseFailAlloc_1296_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1296_, 0, v_a_1289_);
v___x_1294_ = v_reuseFailAlloc_1296_;
goto v_reusejp_1293_;
}
v_reusejp_1293_:
{
lean_object* v___x_1295_; 
v___x_1295_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1295_, 0, v___x_1294_);
return v___x_1295_;
}
}
}
else
{
lean_object* v_a_1298_; lean_object* v___x_1300_; uint8_t v_isShared_1301_; uint8_t v_isSharedCheck_1316_; 
v_a_1298_ = lean_ctor_get(v_x_1287_, 0);
v_isSharedCheck_1316_ = !lean_is_exclusive(v_x_1287_);
if (v_isSharedCheck_1316_ == 0)
{
v___x_1300_ = v_x_1287_;
v_isShared_1301_ = v_isSharedCheck_1316_;
goto v_resetjp_1299_;
}
else
{
lean_inc(v_a_1298_);
lean_dec(v_x_1287_);
v___x_1300_ = lean_box(0);
v_isShared_1301_ = v_isSharedCheck_1316_;
goto v_resetjp_1299_;
}
v_resetjp_1299_:
{
lean_object* v_closeError_1302_; 
v_closeError_1302_ = lean_ctor_get(v_a_1298_, 5);
lean_inc(v_closeError_1302_);
lean_dec(v_a_1298_);
if (lean_obj_tag(v_closeError_1302_) == 1)
{
lean_object* v_val_1303_; lean_object* v___x_1305_; uint8_t v_isShared_1306_; uint8_t v_isSharedCheck_1314_; 
v_val_1303_ = lean_ctor_get(v_closeError_1302_, 0);
v_isSharedCheck_1314_ = !lean_is_exclusive(v_closeError_1302_);
if (v_isSharedCheck_1314_ == 0)
{
v___x_1305_ = v_closeError_1302_;
v_isShared_1306_ = v_isSharedCheck_1314_;
goto v_resetjp_1304_;
}
else
{
lean_inc(v_val_1303_);
lean_dec(v_closeError_1302_);
v___x_1305_ = lean_box(0);
v_isShared_1306_ = v_isSharedCheck_1314_;
goto v_resetjp_1304_;
}
v_resetjp_1304_:
{
lean_object* v___x_1308_; 
if (v_isShared_1301_ == 0)
{
lean_ctor_set_tag(v___x_1300_, 0);
lean_ctor_set(v___x_1300_, 0, v_val_1303_);
v___x_1308_ = v___x_1300_;
goto v_reusejp_1307_;
}
else
{
lean_object* v_reuseFailAlloc_1313_; 
v_reuseFailAlloc_1313_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1313_, 0, v_val_1303_);
v___x_1308_ = v_reuseFailAlloc_1313_;
goto v_reusejp_1307_;
}
v_reusejp_1307_:
{
lean_object* v___x_1310_; 
if (v_isShared_1306_ == 0)
{
lean_ctor_set(v___x_1305_, 0, v___x_1308_);
v___x_1310_ = v___x_1305_;
goto v_reusejp_1309_;
}
else
{
lean_object* v_reuseFailAlloc_1312_; 
v_reuseFailAlloc_1312_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1312_, 0, v___x_1308_);
v___x_1310_ = v_reuseFailAlloc_1312_;
goto v_reusejp_1309_;
}
v_reusejp_1309_:
{
lean_object* v___x_1311_; 
v___x_1311_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1311_, 0, v___x_1310_);
return v___x_1311_;
}
}
}
}
else
{
lean_object* v___x_1315_; 
lean_dec(v_closeError_1302_);
lean_del_object(v___x_1300_);
v___x_1315_ = ((lean_object*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___at___00Std_Http_Body_Stream_tryRecv_spec__0___lam__0___closed__1));
return v___x_1315_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___at___00Std_Http_Body_Stream_tryRecv_spec__0___lam__0___boxed(lean_object* v_x_1317_, lean_object* v___y_1318_){
_start:
{
lean_object* v_res_1319_; 
v_res_1319_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___at___00Std_Http_Body_Stream_tryRecv_spec__0___lam__0(v_x_1317_);
return v_res_1319_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_tryRecv_x27___at___00__private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___at___00Std_Http_Body_Stream_tryRecv_spec__0_spec__0___lam__1(lean_object* v_done_1320_, lean_object* v___f_1321_, lean_object* v_x_1322_){
_start:
{
if (lean_obj_tag(v_x_1322_) == 0)
{
lean_object* v_a_1324_; lean_object* v___x_1326_; uint8_t v_isShared_1327_; uint8_t v_isSharedCheck_1332_; 
lean_dec_ref(v___f_1321_);
v_a_1324_ = lean_ctor_get(v_x_1322_, 0);
v_isSharedCheck_1332_ = !lean_is_exclusive(v_x_1322_);
if (v_isSharedCheck_1332_ == 0)
{
v___x_1326_ = v_x_1322_;
v_isShared_1327_ = v_isSharedCheck_1332_;
goto v_resetjp_1325_;
}
else
{
lean_inc(v_a_1324_);
lean_dec(v_x_1322_);
v___x_1326_ = lean_box(0);
v_isShared_1327_ = v_isSharedCheck_1332_;
goto v_resetjp_1325_;
}
v_resetjp_1325_:
{
lean_object* v___x_1329_; 
if (v_isShared_1327_ == 0)
{
v___x_1329_ = v___x_1326_;
goto v_reusejp_1328_;
}
else
{
lean_object* v_reuseFailAlloc_1331_; 
v_reuseFailAlloc_1331_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1331_, 0, v_a_1324_);
v___x_1329_ = v_reuseFailAlloc_1331_;
goto v_reusejp_1328_;
}
v_reusejp_1328_:
{
lean_object* v___x_1330_; 
v___x_1330_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1330_, 0, v___x_1329_);
return v___x_1330_;
}
}
}
else
{
uint8_t v___x_1333_; lean_object* v___x_1334_; uint8_t v___x_1335_; lean_object* v___x_1336_; lean_object* v___x_1337_; lean_object* v___x_1338_; lean_object* v___x_1339_; 
lean_dec_ref_known(v_x_1322_, 1);
v___x_1333_ = 1;
v___x_1334_ = lean_unsigned_to_nat(0u);
v___x_1335_ = 0;
v___x_1336_ = lean_box(v___x_1333_);
v___x_1337_ = lean_io_promise_resolve(v___x_1336_, v_done_1320_);
v___x_1338_ = ((lean_object*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__0___closed__1));
v___x_1339_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_1334_, v___x_1335_, v___x_1338_, v___f_1321_);
return v___x_1339_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_tryRecv_x27___at___00__private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___at___00Std_Http_Body_Stream_tryRecv_spec__0_spec__0___lam__1___boxed(lean_object* v_done_1340_, lean_object* v___f_1341_, lean_object* v_x_1342_, lean_object* v___y_1343_){
_start:
{
lean_object* v_res_1344_; 
v_res_1344_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_tryRecv_x27___at___00__private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___at___00Std_Http_Body_Stream_tryRecv_spec__0_spec__0___lam__1(v_done_1340_, v___f_1341_, v_x_1342_);
lean_dec(v_done_1340_);
return v_res_1344_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_tryRecv_x27___at___00__private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___at___00Std_Http_Body_Stream_tryRecv_spec__0_spec__0___lam__0(lean_object* v_chunk_1345_, lean_object* v_x_1346_){
_start:
{
if (lean_obj_tag(v_x_1346_) == 0)
{
lean_object* v_a_1348_; lean_object* v___x_1350_; uint8_t v_isShared_1351_; uint8_t v_isSharedCheck_1356_; 
lean_dec_ref(v_chunk_1345_);
v_a_1348_ = lean_ctor_get(v_x_1346_, 0);
v_isSharedCheck_1356_ = !lean_is_exclusive(v_x_1346_);
if (v_isSharedCheck_1356_ == 0)
{
v___x_1350_ = v_x_1346_;
v_isShared_1351_ = v_isSharedCheck_1356_;
goto v_resetjp_1349_;
}
else
{
lean_inc(v_a_1348_);
lean_dec(v_x_1346_);
v___x_1350_ = lean_box(0);
v_isShared_1351_ = v_isSharedCheck_1356_;
goto v_resetjp_1349_;
}
v_resetjp_1349_:
{
lean_object* v___x_1353_; 
if (v_isShared_1351_ == 0)
{
v___x_1353_ = v___x_1350_;
goto v_reusejp_1352_;
}
else
{
lean_object* v_reuseFailAlloc_1355_; 
v_reuseFailAlloc_1355_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1355_, 0, v_a_1348_);
v___x_1353_ = v_reuseFailAlloc_1355_;
goto v_reusejp_1352_;
}
v_reusejp_1352_:
{
lean_object* v___x_1354_; 
v___x_1354_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1354_, 0, v___x_1353_);
return v___x_1354_;
}
}
}
else
{
lean_object* v___x_1358_; uint8_t v_isShared_1359_; uint8_t v_isSharedCheck_1365_; 
v_isSharedCheck_1365_ = !lean_is_exclusive(v_x_1346_);
if (v_isSharedCheck_1365_ == 0)
{
lean_object* v_unused_1366_; 
v_unused_1366_ = lean_ctor_get(v_x_1346_, 0);
lean_dec(v_unused_1366_);
v___x_1358_ = v_x_1346_;
v_isShared_1359_ = v_isSharedCheck_1365_;
goto v_resetjp_1357_;
}
else
{
lean_dec(v_x_1346_);
v___x_1358_ = lean_box(0);
v_isShared_1359_ = v_isSharedCheck_1365_;
goto v_resetjp_1357_;
}
v_resetjp_1357_:
{
lean_object* v___x_1360_; lean_object* v___x_1362_; 
v___x_1360_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1360_, 0, v_chunk_1345_);
if (v_isShared_1359_ == 0)
{
lean_ctor_set(v___x_1358_, 0, v___x_1360_);
v___x_1362_ = v___x_1358_;
goto v_reusejp_1361_;
}
else
{
lean_object* v_reuseFailAlloc_1364_; 
v_reuseFailAlloc_1364_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1364_, 0, v___x_1360_);
v___x_1362_ = v_reuseFailAlloc_1364_;
goto v_reusejp_1361_;
}
v_reusejp_1361_:
{
lean_object* v___x_1363_; 
v___x_1363_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1363_, 0, v___x_1362_);
return v___x_1363_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_tryRecv_x27___at___00__private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___at___00Std_Http_Body_Stream_tryRecv_spec__0_spec__0___lam__0___boxed(lean_object* v_chunk_1367_, lean_object* v_x_1368_, lean_object* v___y_1369_){
_start:
{
lean_object* v_res_1370_; 
v_res_1370_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_tryRecv_x27___at___00__private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___at___00Std_Http_Body_Stream_tryRecv_spec__0_spec__0___lam__0(v_chunk_1367_, v_x_1368_);
return v_res_1370_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_tryRecv_x27___at___00__private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___at___00Std_Http_Body_Stream_tryRecv_spec__0_spec__0___lam__2(lean_object* v___y_1373_, lean_object* v_x_1374_){
_start:
{
if (lean_obj_tag(v_x_1374_) == 0)
{
lean_object* v_a_1376_; lean_object* v___x_1378_; uint8_t v_isShared_1379_; uint8_t v_isSharedCheck_1384_; 
v_a_1376_ = lean_ctor_get(v_x_1374_, 0);
v_isSharedCheck_1384_ = !lean_is_exclusive(v_x_1374_);
if (v_isSharedCheck_1384_ == 0)
{
v___x_1378_ = v_x_1374_;
v_isShared_1379_ = v_isSharedCheck_1384_;
goto v_resetjp_1377_;
}
else
{
lean_inc(v_a_1376_);
lean_dec(v_x_1374_);
v___x_1378_ = lean_box(0);
v_isShared_1379_ = v_isSharedCheck_1384_;
goto v_resetjp_1377_;
}
v_resetjp_1377_:
{
lean_object* v___x_1381_; 
if (v_isShared_1379_ == 0)
{
v___x_1381_ = v___x_1378_;
goto v_reusejp_1380_;
}
else
{
lean_object* v_reuseFailAlloc_1383_; 
v_reuseFailAlloc_1383_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1383_, 0, v_a_1376_);
v___x_1381_ = v_reuseFailAlloc_1383_;
goto v_reusejp_1380_;
}
v_reusejp_1380_:
{
lean_object* v___x_1382_; 
v___x_1382_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1382_, 0, v___x_1381_);
return v___x_1382_;
}
}
}
else
{
lean_object* v_a_1385_; lean_object* v_pendingProducer_1386_; 
v_a_1385_ = lean_ctor_get(v_x_1374_, 0);
lean_inc(v_a_1385_);
lean_dec_ref_known(v_x_1374_, 1);
v_pendingProducer_1386_ = lean_ctor_get(v_a_1385_, 0);
if (lean_obj_tag(v_pendingProducer_1386_) == 1)
{
lean_object* v_val_1387_; lean_object* v_pendingConsumer_1388_; lean_object* v_interestWaiter_1389_; uint8_t v_closed_1390_; lean_object* v_knownSize_1391_; lean_object* v_pendingIncompleteChunk_1392_; lean_object* v_closeError_1393_; lean_object* v___x_1395_; uint8_t v_isShared_1396_; uint8_t v_isSharedCheck_1411_; 
v_val_1387_ = lean_ctor_get(v_pendingProducer_1386_, 0);
lean_inc(v_val_1387_);
v_pendingConsumer_1388_ = lean_ctor_get(v_a_1385_, 1);
v_interestWaiter_1389_ = lean_ctor_get(v_a_1385_, 2);
v_closed_1390_ = lean_ctor_get_uint8(v_a_1385_, sizeof(void*)*6);
v_knownSize_1391_ = lean_ctor_get(v_a_1385_, 3);
v_pendingIncompleteChunk_1392_ = lean_ctor_get(v_a_1385_, 4);
v_closeError_1393_ = lean_ctor_get(v_a_1385_, 5);
v_isSharedCheck_1411_ = !lean_is_exclusive(v_a_1385_);
if (v_isSharedCheck_1411_ == 0)
{
lean_object* v_unused_1412_; 
v_unused_1412_ = lean_ctor_get(v_a_1385_, 0);
lean_dec(v_unused_1412_);
v___x_1395_ = v_a_1385_;
v_isShared_1396_ = v_isSharedCheck_1411_;
goto v_resetjp_1394_;
}
else
{
lean_inc(v_closeError_1393_);
lean_inc(v_pendingIncompleteChunk_1392_);
lean_inc(v_knownSize_1391_);
lean_inc(v_interestWaiter_1389_);
lean_inc(v_pendingConsumer_1388_);
lean_dec(v_a_1385_);
v___x_1395_ = lean_box(0);
v_isShared_1396_ = v_isSharedCheck_1411_;
goto v_resetjp_1394_;
}
v_resetjp_1394_:
{
lean_object* v_chunk_1397_; lean_object* v_done_1398_; lean_object* v___x_1399_; lean_object* v___f_1400_; lean_object* v___f_1401_; lean_object* v___x_1402_; lean_object* v___x_1404_; 
v_chunk_1397_ = lean_ctor_get(v_val_1387_, 0);
lean_inc_ref_n(v_chunk_1397_, 2);
v_done_1398_ = lean_ctor_get(v_val_1387_, 1);
lean_inc(v_done_1398_);
lean_dec(v_val_1387_);
v___x_1399_ = lean_box(0);
v___f_1400_ = lean_alloc_closure((void*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_tryRecv_x27___at___00__private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___at___00Std_Http_Body_Stream_tryRecv_spec__0_spec__0___lam__0___boxed), 3, 1);
lean_closure_set(v___f_1400_, 0, v_chunk_1397_);
v___f_1401_ = lean_alloc_closure((void*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_tryRecv_x27___at___00__private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___at___00Std_Http_Body_Stream_tryRecv_spec__0_spec__0___lam__1___boxed), 4, 2);
lean_closure_set(v___f_1401_, 0, v_done_1398_);
lean_closure_set(v___f_1401_, 1, v___f_1400_);
v___x_1402_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_decreaseKnownSize(v_knownSize_1391_, v_chunk_1397_);
lean_dec_ref(v_chunk_1397_);
if (v_isShared_1396_ == 0)
{
lean_ctor_set(v___x_1395_, 3, v___x_1402_);
lean_ctor_set(v___x_1395_, 0, v___x_1399_);
v___x_1404_ = v___x_1395_;
goto v_reusejp_1403_;
}
else
{
lean_object* v_reuseFailAlloc_1410_; 
v_reuseFailAlloc_1410_ = lean_alloc_ctor(0, 6, 1);
lean_ctor_set(v_reuseFailAlloc_1410_, 0, v___x_1399_);
lean_ctor_set(v_reuseFailAlloc_1410_, 1, v_pendingConsumer_1388_);
lean_ctor_set(v_reuseFailAlloc_1410_, 2, v_interestWaiter_1389_);
lean_ctor_set(v_reuseFailAlloc_1410_, 3, v___x_1402_);
lean_ctor_set(v_reuseFailAlloc_1410_, 4, v_pendingIncompleteChunk_1392_);
lean_ctor_set(v_reuseFailAlloc_1410_, 5, v_closeError_1393_);
lean_ctor_set_uint8(v_reuseFailAlloc_1410_, sizeof(void*)*6, v_closed_1390_);
v___x_1404_ = v_reuseFailAlloc_1410_;
goto v_reusejp_1403_;
}
v_reusejp_1403_:
{
lean_object* v___x_1405_; uint8_t v___x_1406_; lean_object* v___x_1407_; lean_object* v___x_1408_; lean_object* v___x_1409_; 
v___x_1405_ = lean_unsigned_to_nat(0u);
v___x_1406_ = 0;
v___x_1407_ = lean_st_ref_swap(v___y_1373_, v___x_1404_);
lean_dec(v___x_1407_);
v___x_1408_ = ((lean_object*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__0___closed__1));
v___x_1409_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_1405_, v___x_1406_, v___x_1408_, v___f_1401_);
return v___x_1409_;
}
}
}
else
{
lean_object* v___x_1413_; 
lean_dec(v_a_1385_);
v___x_1413_ = ((lean_object*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_tryRecv_x27___at___00__private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___at___00Std_Http_Body_Stream_tryRecv_spec__0_spec__0___lam__2___closed__0));
return v___x_1413_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_tryRecv_x27___at___00__private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___at___00Std_Http_Body_Stream_tryRecv_spec__0_spec__0___lam__2___boxed(lean_object* v___y_1414_, lean_object* v_x_1415_, lean_object* v___y_1416_){
_start:
{
lean_object* v_res_1417_; 
v_res_1417_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_tryRecv_x27___at___00__private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___at___00Std_Http_Body_Stream_tryRecv_spec__0_spec__0___lam__2(v___y_1414_, v_x_1415_);
lean_dec(v___y_1414_);
return v_res_1417_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_tryRecv_x27___at___00__private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___at___00Std_Http_Body_Stream_tryRecv_spec__0_spec__0(lean_object* v___y_1418_){
_start:
{
lean_object* v___f_1420_; lean_object* v___x_1421_; uint8_t v___x_1422_; lean_object* v___x_1423_; lean_object* v___x_1424_; lean_object* v___x_1425_; lean_object* v___x_1426_; 
lean_inc(v___y_1418_);
v___f_1420_ = lean_alloc_closure((void*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_tryRecv_x27___at___00__private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___at___00Std_Http_Body_Stream_tryRecv_spec__0_spec__0___lam__2___boxed), 3, 1);
lean_closure_set(v___f_1420_, 0, v___y_1418_);
v___x_1421_ = lean_unsigned_to_nat(0u);
v___x_1422_ = 0;
v___x_1423_ = lean_st_ref_get(v___y_1418_);
v___x_1424_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1424_, 0, v___x_1423_);
v___x_1425_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1425_, 0, v___x_1424_);
v___x_1426_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_1421_, v___x_1422_, v___x_1425_, v___f_1420_);
return v___x_1426_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_tryRecv_x27___at___00__private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___at___00Std_Http_Body_Stream_tryRecv_spec__0_spec__0___boxed(lean_object* v___y_1427_, lean_object* v___y_1428_){
_start:
{
lean_object* v_res_1429_; 
v_res_1429_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_tryRecv_x27___at___00__private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___at___00Std_Http_Body_Stream_tryRecv_spec__0_spec__0(v___y_1427_);
lean_dec(v___y_1427_);
return v_res_1429_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___at___00Std_Http_Body_Stream_tryRecv_spec__0(lean_object* v___y_1431_){
_start:
{
lean_object* v___f_1433_; lean_object* v___f_1434_; lean_object* v___x_1435_; uint8_t v___x_1436_; lean_object* v___x_1437_; lean_object* v___x_1438_; 
v___f_1433_ = ((lean_object*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___at___00Std_Http_Body_Stream_tryRecv_spec__0___closed__0));
lean_inc(v___y_1431_);
v___f_1434_ = lean_alloc_closure((void*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___at___00Std_Http_Body_Stream_tryRecv_spec__0___lam__1___boxed), 4, 2);
lean_closure_set(v___f_1434_, 0, v___y_1431_);
lean_closure_set(v___f_1434_, 1, v___f_1433_);
v___x_1435_ = lean_unsigned_to_nat(0u);
v___x_1436_ = 0;
v___x_1437_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_tryRecv_x27___at___00__private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___at___00Std_Http_Body_Stream_tryRecv_spec__0_spec__0(v___y_1431_);
v___x_1438_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_1435_, v___x_1436_, v___x_1437_, v___f_1434_);
return v___x_1438_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___at___00Std_Http_Body_Stream_tryRecv_spec__0___boxed(lean_object* v___y_1439_, lean_object* v___y_1440_){
_start:
{
lean_object* v_res_1441_; 
v_res_1441_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___at___00Std_Http_Body_Stream_tryRecv_spec__0(v___y_1439_);
lean_dec(v___y_1439_);
return v_res_1441_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_tryRecv___lam__1(lean_object* v___y_1442_, lean_object* v___f_1443_, lean_object* v_x_1444_){
_start:
{
if (lean_obj_tag(v_x_1444_) == 0)
{
lean_object* v_a_1446_; lean_object* v___x_1448_; uint8_t v_isShared_1449_; uint8_t v_isSharedCheck_1454_; 
lean_dec_ref(v___f_1443_);
v_a_1446_ = lean_ctor_get(v_x_1444_, 0);
v_isSharedCheck_1454_ = !lean_is_exclusive(v_x_1444_);
if (v_isSharedCheck_1454_ == 0)
{
v___x_1448_ = v_x_1444_;
v_isShared_1449_ = v_isSharedCheck_1454_;
goto v_resetjp_1447_;
}
else
{
lean_inc(v_a_1446_);
lean_dec(v_x_1444_);
v___x_1448_ = lean_box(0);
v_isShared_1449_ = v_isSharedCheck_1454_;
goto v_resetjp_1447_;
}
v_resetjp_1447_:
{
lean_object* v___x_1451_; 
if (v_isShared_1449_ == 0)
{
v___x_1451_ = v___x_1448_;
goto v_reusejp_1450_;
}
else
{
lean_object* v_reuseFailAlloc_1453_; 
v_reuseFailAlloc_1453_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1453_, 0, v_a_1446_);
v___x_1451_ = v_reuseFailAlloc_1453_;
goto v_reusejp_1450_;
}
v_reusejp_1450_:
{
lean_object* v___x_1452_; 
v___x_1452_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1452_, 0, v___x_1451_);
return v___x_1452_;
}
}
}
else
{
lean_object* v___x_1455_; uint8_t v___x_1456_; lean_object* v___x_1457_; lean_object* v___x_1458_; 
lean_dec_ref_known(v_x_1444_, 1);
v___x_1455_ = lean_unsigned_to_nat(0u);
v___x_1456_ = 0;
v___x_1457_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___at___00Std_Http_Body_Stream_tryRecv_spec__0(v___y_1442_);
v___x_1458_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_1455_, v___x_1456_, v___x_1457_, v___f_1443_);
return v___x_1458_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_tryRecv___lam__1___boxed(lean_object* v___y_1459_, lean_object* v___f_1460_, lean_object* v_x_1461_, lean_object* v___y_1462_){
_start:
{
lean_object* v_res_1463_; 
v_res_1463_ = l_Std_Http_Body_Stream_tryRecv___lam__1(v___y_1459_, v___f_1460_, v_x_1461_);
lean_dec(v___y_1459_);
return v_res_1463_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_tryRecv___lam__2(lean_object* v___f_1464_, lean_object* v___y_1465_){
_start:
{
lean_object* v___f_1467_; lean_object* v___x_1468_; uint8_t v___x_1469_; lean_object* v___x_1470_; lean_object* v___x_1471_; 
lean_inc(v___y_1465_);
v___f_1467_ = lean_alloc_closure((void*)(l_Std_Http_Body_Stream_tryRecv___lam__1___boxed), 4, 2);
lean_closure_set(v___f_1467_, 0, v___y_1465_);
lean_closure_set(v___f_1467_, 1, v___f_1464_);
v___x_1468_ = lean_unsigned_to_nat(0u);
v___x_1469_ = 0;
v___x_1470_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1(v___y_1465_);
v___x_1471_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_1468_, v___x_1469_, v___x_1470_, v___f_1467_);
return v___x_1471_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_tryRecv___lam__2___boxed(lean_object* v___f_1472_, lean_object* v___y_1473_, lean_object* v___y_1474_){
_start:
{
lean_object* v_res_1475_; 
v_res_1475_ = l_Std_Http_Body_Stream_tryRecv___lam__2(v___f_1472_, v___y_1473_);
lean_dec(v___y_1473_);
return v_res_1475_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_tryRecv(lean_object* v_stream_1479_){
_start:
{
lean_object* v___f_1481_; lean_object* v___x_1482_; 
v___f_1481_ = ((lean_object*)(l_Std_Http_Body_Stream_tryRecv___closed__1));
v___x_1482_ = l_Std_Mutex_atomically___at___00Std_Http_Body_Stream_tryRecv_spec__2___redArg(v_stream_1479_, v___f_1481_);
return v___x_1482_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_tryRecv___boxed(lean_object* v_stream_1483_, lean_object* v___y_1484_){
_start:
{
lean_object* v_res_1485_; 
v_res_1485_ = l_Std_Http_Body_Stream_tryRecv(v_stream_1483_);
return v_res_1485_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReady_x27___at___00Std_Http_Body_Stream_tryRecvBody_spec__0___lam__0(lean_object* v_x_1486_){
_start:
{
uint8_t v___y_1489_; 
if (lean_obj_tag(v_x_1486_) == 0)
{
lean_object* v_a_1493_; lean_object* v___x_1495_; uint8_t v_isShared_1496_; uint8_t v_isSharedCheck_1501_; 
v_a_1493_ = lean_ctor_get(v_x_1486_, 0);
v_isSharedCheck_1501_ = !lean_is_exclusive(v_x_1486_);
if (v_isSharedCheck_1501_ == 0)
{
v___x_1495_ = v_x_1486_;
v_isShared_1496_ = v_isSharedCheck_1501_;
goto v_resetjp_1494_;
}
else
{
lean_inc(v_a_1493_);
lean_dec(v_x_1486_);
v___x_1495_ = lean_box(0);
v_isShared_1496_ = v_isSharedCheck_1501_;
goto v_resetjp_1494_;
}
v_resetjp_1494_:
{
lean_object* v___x_1498_; 
if (v_isShared_1496_ == 0)
{
v___x_1498_ = v___x_1495_;
goto v_reusejp_1497_;
}
else
{
lean_object* v_reuseFailAlloc_1500_; 
v_reuseFailAlloc_1500_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1500_, 0, v_a_1493_);
v___x_1498_ = v_reuseFailAlloc_1500_;
goto v_reusejp_1497_;
}
v_reusejp_1497_:
{
lean_object* v___x_1499_; 
v___x_1499_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1499_, 0, v___x_1498_);
return v___x_1499_;
}
}
}
else
{
lean_object* v_a_1502_; lean_object* v_pendingProducer_1503_; 
v_a_1502_ = lean_ctor_get(v_x_1486_, 0);
lean_inc(v_a_1502_);
lean_dec_ref_known(v_x_1486_, 1);
v_pendingProducer_1503_ = lean_ctor_get(v_a_1502_, 0);
if (lean_obj_tag(v_pendingProducer_1503_) == 0)
{
uint8_t v_closed_1504_; 
v_closed_1504_ = lean_ctor_get_uint8(v_a_1502_, sizeof(void*)*6);
lean_dec(v_a_1502_);
v___y_1489_ = v_closed_1504_;
goto v___jp_1488_;
}
else
{
uint8_t v___x_1505_; 
lean_dec(v_a_1502_);
v___x_1505_ = 1;
v___y_1489_ = v___x_1505_;
goto v___jp_1488_;
}
}
v___jp_1488_:
{
lean_object* v___x_1490_; lean_object* v___x_1491_; lean_object* v___x_1492_; 
v___x_1490_ = lean_box(v___y_1489_);
v___x_1491_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1491_, 0, v___x_1490_);
v___x_1492_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1492_, 0, v___x_1491_);
return v___x_1492_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReady_x27___at___00Std_Http_Body_Stream_tryRecvBody_spec__0___lam__0___boxed(lean_object* v_x_1506_, lean_object* v___y_1507_){
_start:
{
lean_object* v_res_1508_; 
v_res_1508_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReady_x27___at___00Std_Http_Body_Stream_tryRecvBody_spec__0___lam__0(v_x_1506_);
return v_res_1508_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReady_x27___at___00Std_Http_Body_Stream_tryRecvBody_spec__0(lean_object* v___y_1510_){
_start:
{
lean_object* v___f_1512_; lean_object* v___x_1513_; uint8_t v___x_1514_; lean_object* v___x_1515_; lean_object* v___x_1516_; lean_object* v___x_1517_; lean_object* v___x_1518_; 
v___f_1512_ = ((lean_object*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReady_x27___at___00Std_Http_Body_Stream_tryRecvBody_spec__0___closed__0));
v___x_1513_ = lean_unsigned_to_nat(0u);
v___x_1514_ = 0;
v___x_1515_ = lean_st_ref_get(v___y_1510_);
v___x_1516_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1516_, 0, v___x_1515_);
v___x_1517_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1517_, 0, v___x_1516_);
v___x_1518_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_1513_, v___x_1514_, v___x_1517_, v___f_1512_);
return v___x_1518_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReady_x27___at___00Std_Http_Body_Stream_tryRecvBody_spec__0___boxed(lean_object* v___y_1519_, lean_object* v___y_1520_){
_start:
{
lean_object* v_res_1521_; 
v_res_1521_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReady_x27___at___00Std_Http_Body_Stream_tryRecvBody_spec__0(v___y_1519_);
lean_dec(v___y_1519_);
return v_res_1521_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_tryRecvBody___lam__0(lean_object* v_x_1522_){
_start:
{
if (lean_obj_tag(v_x_1522_) == 0)
{
lean_object* v_a_1524_; lean_object* v___x_1526_; uint8_t v_isShared_1527_; uint8_t v_isSharedCheck_1532_; 
v_a_1524_ = lean_ctor_get(v_x_1522_, 0);
v_isSharedCheck_1532_ = !lean_is_exclusive(v_x_1522_);
if (v_isSharedCheck_1532_ == 0)
{
v___x_1526_ = v_x_1522_;
v_isShared_1527_ = v_isSharedCheck_1532_;
goto v_resetjp_1525_;
}
else
{
lean_inc(v_a_1524_);
lean_dec(v_x_1522_);
v___x_1526_ = lean_box(0);
v_isShared_1527_ = v_isSharedCheck_1532_;
goto v_resetjp_1525_;
}
v_resetjp_1525_:
{
lean_object* v___x_1529_; 
if (v_isShared_1527_ == 0)
{
v___x_1529_ = v___x_1526_;
goto v_reusejp_1528_;
}
else
{
lean_object* v_reuseFailAlloc_1531_; 
v_reuseFailAlloc_1531_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1531_, 0, v_a_1524_);
v___x_1529_ = v_reuseFailAlloc_1531_;
goto v_reusejp_1528_;
}
v_reusejp_1528_:
{
lean_object* v___x_1530_; 
v___x_1530_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1530_, 0, v___x_1529_);
return v___x_1530_;
}
}
}
else
{
lean_object* v_a_1533_; 
v_a_1533_ = lean_ctor_get(v_x_1522_, 0);
lean_inc(v_a_1533_);
lean_dec_ref_known(v_x_1522_, 1);
if (lean_obj_tag(v_a_1533_) == 0)
{
lean_object* v_a_1534_; lean_object* v___x_1536_; uint8_t v_isShared_1537_; uint8_t v_isSharedCheck_1542_; 
v_a_1534_ = lean_ctor_get(v_a_1533_, 0);
v_isSharedCheck_1542_ = !lean_is_exclusive(v_a_1533_);
if (v_isSharedCheck_1542_ == 0)
{
v___x_1536_ = v_a_1533_;
v_isShared_1537_ = v_isSharedCheck_1542_;
goto v_resetjp_1535_;
}
else
{
lean_inc(v_a_1534_);
lean_dec(v_a_1533_);
v___x_1536_ = lean_box(0);
v_isShared_1537_ = v_isSharedCheck_1542_;
goto v_resetjp_1535_;
}
v_resetjp_1535_:
{
lean_object* v___x_1539_; 
if (v_isShared_1537_ == 0)
{
v___x_1539_ = v___x_1536_;
goto v_reusejp_1538_;
}
else
{
lean_object* v_reuseFailAlloc_1541_; 
v_reuseFailAlloc_1541_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1541_, 0, v_a_1534_);
v___x_1539_ = v_reuseFailAlloc_1541_;
goto v_reusejp_1538_;
}
v_reusejp_1538_:
{
lean_object* v___x_1540_; 
v___x_1540_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1540_, 0, v___x_1539_);
return v___x_1540_;
}
}
}
else
{
lean_object* v_a_1543_; lean_object* v___x_1545_; uint8_t v_isShared_1546_; uint8_t v_isSharedCheck_1552_; 
v_a_1543_ = lean_ctor_get(v_a_1533_, 0);
v_isSharedCheck_1552_ = !lean_is_exclusive(v_a_1533_);
if (v_isSharedCheck_1552_ == 0)
{
v___x_1545_ = v_a_1533_;
v_isShared_1546_ = v_isSharedCheck_1552_;
goto v_resetjp_1544_;
}
else
{
lean_inc(v_a_1543_);
lean_dec(v_a_1533_);
v___x_1545_ = lean_box(0);
v_isShared_1546_ = v_isSharedCheck_1552_;
goto v_resetjp_1544_;
}
v_resetjp_1544_:
{
lean_object* v___x_1547_; lean_object* v___x_1549_; 
v___x_1547_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1547_, 0, v_a_1543_);
if (v_isShared_1546_ == 0)
{
lean_ctor_set(v___x_1545_, 0, v___x_1547_);
v___x_1549_ = v___x_1545_;
goto v_reusejp_1548_;
}
else
{
lean_object* v_reuseFailAlloc_1551_; 
v_reuseFailAlloc_1551_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1551_, 0, v___x_1547_);
v___x_1549_ = v_reuseFailAlloc_1551_;
goto v_reusejp_1548_;
}
v_reusejp_1548_:
{
lean_object* v___x_1550_; 
v___x_1550_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1550_, 0, v___x_1549_);
return v___x_1550_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_tryRecvBody___lam__0___boxed(lean_object* v_x_1553_, lean_object* v___y_1554_){
_start:
{
lean_object* v_res_1555_; 
v_res_1555_ = l_Std_Http_Body_Stream_tryRecvBody___lam__0(v_x_1553_);
return v_res_1555_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_tryRecvBody___lam__1(lean_object* v___y_1560_, lean_object* v___f_1561_, lean_object* v_x_1562_){
_start:
{
if (lean_obj_tag(v_x_1562_) == 0)
{
lean_object* v_a_1564_; lean_object* v___x_1566_; uint8_t v_isShared_1567_; uint8_t v_isSharedCheck_1572_; 
lean_dec_ref(v___f_1561_);
v_a_1564_ = lean_ctor_get(v_x_1562_, 0);
v_isSharedCheck_1572_ = !lean_is_exclusive(v_x_1562_);
if (v_isSharedCheck_1572_ == 0)
{
v___x_1566_ = v_x_1562_;
v_isShared_1567_ = v_isSharedCheck_1572_;
goto v_resetjp_1565_;
}
else
{
lean_inc(v_a_1564_);
lean_dec(v_x_1562_);
v___x_1566_ = lean_box(0);
v_isShared_1567_ = v_isSharedCheck_1572_;
goto v_resetjp_1565_;
}
v_resetjp_1565_:
{
lean_object* v___x_1569_; 
if (v_isShared_1567_ == 0)
{
v___x_1569_ = v___x_1566_;
goto v_reusejp_1568_;
}
else
{
lean_object* v_reuseFailAlloc_1571_; 
v_reuseFailAlloc_1571_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1571_, 0, v_a_1564_);
v___x_1569_ = v_reuseFailAlloc_1571_;
goto v_reusejp_1568_;
}
v_reusejp_1568_:
{
lean_object* v___x_1570_; 
v___x_1570_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1570_, 0, v___x_1569_);
return v___x_1570_;
}
}
}
else
{
lean_object* v_a_1573_; uint8_t v___x_1574_; 
v_a_1573_ = lean_ctor_get(v_x_1562_, 0);
lean_inc(v_a_1573_);
lean_dec_ref_known(v_x_1562_, 1);
v___x_1574_ = lean_unbox(v_a_1573_);
lean_dec(v_a_1573_);
if (v___x_1574_ == 0)
{
lean_object* v___x_1575_; 
lean_dec_ref(v___f_1561_);
v___x_1575_ = ((lean_object*)(l_Std_Http_Body_Stream_tryRecvBody___lam__1___closed__1));
return v___x_1575_;
}
else
{
lean_object* v___x_1576_; uint8_t v___x_1577_; lean_object* v___x_1578_; lean_object* v___x_1579_; 
v___x_1576_ = lean_unsigned_to_nat(0u);
v___x_1577_ = 0;
v___x_1578_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___at___00Std_Http_Body_Stream_tryRecv_spec__0(v___y_1560_);
v___x_1579_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_1576_, v___x_1577_, v___x_1578_, v___f_1561_);
return v___x_1579_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_tryRecvBody___lam__1___boxed(lean_object* v___y_1580_, lean_object* v___f_1581_, lean_object* v_x_1582_, lean_object* v___y_1583_){
_start:
{
lean_object* v_res_1584_; 
v_res_1584_ = l_Std_Http_Body_Stream_tryRecvBody___lam__1(v___y_1580_, v___f_1581_, v_x_1582_);
lean_dec(v___y_1580_);
return v_res_1584_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_tryRecvBody___lam__2(lean_object* v___y_1585_, lean_object* v___f_1586_, lean_object* v_x_1587_){
_start:
{
if (lean_obj_tag(v_x_1587_) == 0)
{
lean_object* v_a_1589_; lean_object* v___x_1591_; uint8_t v_isShared_1592_; uint8_t v_isSharedCheck_1597_; 
lean_dec_ref(v___f_1586_);
v_a_1589_ = lean_ctor_get(v_x_1587_, 0);
v_isSharedCheck_1597_ = !lean_is_exclusive(v_x_1587_);
if (v_isSharedCheck_1597_ == 0)
{
v___x_1591_ = v_x_1587_;
v_isShared_1592_ = v_isSharedCheck_1597_;
goto v_resetjp_1590_;
}
else
{
lean_inc(v_a_1589_);
lean_dec(v_x_1587_);
v___x_1591_ = lean_box(0);
v_isShared_1592_ = v_isSharedCheck_1597_;
goto v_resetjp_1590_;
}
v_resetjp_1590_:
{
lean_object* v___x_1594_; 
if (v_isShared_1592_ == 0)
{
v___x_1594_ = v___x_1591_;
goto v_reusejp_1593_;
}
else
{
lean_object* v_reuseFailAlloc_1596_; 
v_reuseFailAlloc_1596_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1596_, 0, v_a_1589_);
v___x_1594_ = v_reuseFailAlloc_1596_;
goto v_reusejp_1593_;
}
v_reusejp_1593_:
{
lean_object* v___x_1595_; 
v___x_1595_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1595_, 0, v___x_1594_);
return v___x_1595_;
}
}
}
else
{
lean_object* v___x_1598_; uint8_t v___x_1599_; lean_object* v___x_1600_; lean_object* v___x_1601_; 
lean_dec_ref_known(v_x_1587_, 1);
v___x_1598_ = lean_unsigned_to_nat(0u);
v___x_1599_ = 0;
v___x_1600_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReady_x27___at___00Std_Http_Body_Stream_tryRecvBody_spec__0(v___y_1585_);
v___x_1601_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_1598_, v___x_1599_, v___x_1600_, v___f_1586_);
return v___x_1601_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_tryRecvBody___lam__2___boxed(lean_object* v___y_1602_, lean_object* v___f_1603_, lean_object* v_x_1604_, lean_object* v___y_1605_){
_start:
{
lean_object* v_res_1606_; 
v_res_1606_ = l_Std_Http_Body_Stream_tryRecvBody___lam__2(v___y_1602_, v___f_1603_, v_x_1604_);
lean_dec(v___y_1602_);
return v_res_1606_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_tryRecvBody___lam__3(lean_object* v___f_1607_, lean_object* v___y_1608_){
_start:
{
lean_object* v___f_1610_; lean_object* v___f_1611_; lean_object* v___x_1612_; uint8_t v___x_1613_; lean_object* v___x_1614_; lean_object* v___x_1615_; 
lean_inc_n(v___y_1608_, 2);
v___f_1610_ = lean_alloc_closure((void*)(l_Std_Http_Body_Stream_tryRecvBody___lam__1___boxed), 4, 2);
lean_closure_set(v___f_1610_, 0, v___y_1608_);
lean_closure_set(v___f_1610_, 1, v___f_1607_);
v___f_1611_ = lean_alloc_closure((void*)(l_Std_Http_Body_Stream_tryRecvBody___lam__2___boxed), 4, 2);
lean_closure_set(v___f_1611_, 0, v___y_1608_);
lean_closure_set(v___f_1611_, 1, v___f_1610_);
v___x_1612_ = lean_unsigned_to_nat(0u);
v___x_1613_ = 0;
v___x_1614_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1(v___y_1608_);
v___x_1615_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_1612_, v___x_1613_, v___x_1614_, v___f_1611_);
return v___x_1615_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_tryRecvBody___lam__3___boxed(lean_object* v___f_1616_, lean_object* v___y_1617_, lean_object* v___y_1618_){
_start:
{
lean_object* v_res_1619_; 
v_res_1619_ = l_Std_Http_Body_Stream_tryRecvBody___lam__3(v___f_1616_, v___y_1617_);
lean_dec(v___y_1617_);
return v_res_1619_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_tryRecvBody(lean_object* v_stream_1623_){
_start:
{
lean_object* v___f_1625_; lean_object* v___x_1626_; 
v___f_1625_ = ((lean_object*)(l_Std_Http_Body_Stream_tryRecvBody___closed__1));
v___x_1626_ = l_Std_Mutex_atomically___at___00Std_Http_Body_Stream_tryRecv_spec__2___redArg(v_stream_1623_, v___f_1625_);
return v___x_1626_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_tryRecvBody___boxed(lean_object* v_stream_1627_, lean_object* v___y_1628_){
_start:
{
lean_object* v_res_1629_; 
v_res_1629_ = l_Std_Http_Body_Stream_tryRecvBody(v_stream_1627_);
return v_res_1629_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00__private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27_spec__0(lean_object* v___y_1630_){
_start:
{
lean_object* v___x_1632_; lean_object* v_pendingProducer_1633_; lean_object* v_pendingConsumer_1634_; lean_object* v_interestWaiter_1635_; uint8_t v_closed_1636_; lean_object* v_knownSize_1637_; lean_object* v_pendingIncompleteChunk_1638_; lean_object* v_closeError_1639_; lean_object* v___x_1641_; uint8_t v_isShared_1642_; uint8_t v_isSharedCheck_1666_; 
v___x_1632_ = lean_st_ref_get(v___y_1630_);
v_pendingProducer_1633_ = lean_ctor_get(v___x_1632_, 0);
v_pendingConsumer_1634_ = lean_ctor_get(v___x_1632_, 1);
v_interestWaiter_1635_ = lean_ctor_get(v___x_1632_, 2);
v_closed_1636_ = lean_ctor_get_uint8(v___x_1632_, sizeof(void*)*6);
v_knownSize_1637_ = lean_ctor_get(v___x_1632_, 3);
v_pendingIncompleteChunk_1638_ = lean_ctor_get(v___x_1632_, 4);
v_closeError_1639_ = lean_ctor_get(v___x_1632_, 5);
v_isSharedCheck_1666_ = !lean_is_exclusive(v___x_1632_);
if (v_isSharedCheck_1666_ == 0)
{
v___x_1641_ = v___x_1632_;
v_isShared_1642_ = v_isSharedCheck_1666_;
goto v_resetjp_1640_;
}
else
{
lean_inc(v_closeError_1639_);
lean_inc(v_pendingIncompleteChunk_1638_);
lean_inc(v_knownSize_1637_);
lean_inc(v_interestWaiter_1635_);
lean_inc(v_pendingConsumer_1634_);
lean_inc(v_pendingProducer_1633_);
lean_dec(v___x_1632_);
v___x_1641_ = lean_box(0);
v_isShared_1642_ = v_isSharedCheck_1666_;
goto v_resetjp_1640_;
}
v_resetjp_1640_:
{
lean_object* v___y_1644_; lean_object* v_interestWaiter_1645_; lean_object* v___y_1646_; lean_object* v_pendingConsumer_1653_; lean_object* v___y_1654_; 
if (lean_obj_tag(v_pendingConsumer_1634_) == 1)
{
lean_object* v_val_1660_; 
v_val_1660_ = lean_ctor_get(v_pendingConsumer_1634_, 0);
if (lean_obj_tag(v_val_1660_) == 1)
{
lean_object* v_finished_1661_; lean_object* v_finished_1662_; lean_object* v___x_1663_; uint8_t v___x_1664_; 
v_finished_1661_ = lean_ctor_get(v_val_1660_, 0);
v_finished_1662_ = lean_ctor_get(v_finished_1661_, 0);
v___x_1663_ = lean_st_ref_get(v_finished_1662_);
v___x_1664_ = lean_unbox(v___x_1663_);
lean_dec(v___x_1663_);
if (v___x_1664_ == 0)
{
v_pendingConsumer_1653_ = v_pendingConsumer_1634_;
v___y_1654_ = v___y_1630_;
goto v___jp_1652_;
}
else
{
lean_object* v___x_1665_; 
lean_dec_ref_known(v_pendingConsumer_1634_, 1);
v___x_1665_ = lean_box(0);
v_pendingConsumer_1653_ = v___x_1665_;
v___y_1654_ = v___y_1630_;
goto v___jp_1652_;
}
}
else
{
v_pendingConsumer_1653_ = v_pendingConsumer_1634_;
v___y_1654_ = v___y_1630_;
goto v___jp_1652_;
}
}
else
{
v_pendingConsumer_1653_ = v_pendingConsumer_1634_;
v___y_1654_ = v___y_1630_;
goto v___jp_1652_;
}
v___jp_1643_:
{
lean_object* v___x_1648_; 
if (v_isShared_1642_ == 0)
{
lean_ctor_set(v___x_1641_, 2, v_interestWaiter_1645_);
lean_ctor_set(v___x_1641_, 1, v___y_1644_);
v___x_1648_ = v___x_1641_;
goto v_reusejp_1647_;
}
else
{
lean_object* v_reuseFailAlloc_1651_; 
v_reuseFailAlloc_1651_ = lean_alloc_ctor(0, 6, 1);
lean_ctor_set(v_reuseFailAlloc_1651_, 0, v_pendingProducer_1633_);
lean_ctor_set(v_reuseFailAlloc_1651_, 1, v___y_1644_);
lean_ctor_set(v_reuseFailAlloc_1651_, 2, v_interestWaiter_1645_);
lean_ctor_set(v_reuseFailAlloc_1651_, 3, v_knownSize_1637_);
lean_ctor_set(v_reuseFailAlloc_1651_, 4, v_pendingIncompleteChunk_1638_);
lean_ctor_set(v_reuseFailAlloc_1651_, 5, v_closeError_1639_);
lean_ctor_set_uint8(v_reuseFailAlloc_1651_, sizeof(void*)*6, v_closed_1636_);
v___x_1648_ = v_reuseFailAlloc_1651_;
goto v_reusejp_1647_;
}
v_reusejp_1647_:
{
lean_object* v___x_1649_; lean_object* v___x_1650_; 
v___x_1649_ = lean_box(0);
v___x_1650_ = lean_st_ref_swap(v___y_1646_, v___x_1648_);
lean_dec(v___x_1650_);
return v___x_1649_;
}
}
v___jp_1652_:
{
if (lean_obj_tag(v_interestWaiter_1635_) == 0)
{
v___y_1644_ = v_pendingConsumer_1653_;
v_interestWaiter_1645_ = v_interestWaiter_1635_;
v___y_1646_ = v___y_1654_;
goto v___jp_1643_;
}
else
{
lean_object* v_val_1655_; lean_object* v_finished_1656_; lean_object* v___x_1657_; uint8_t v___x_1658_; 
v_val_1655_ = lean_ctor_get(v_interestWaiter_1635_, 0);
v_finished_1656_ = lean_ctor_get(v_val_1655_, 0);
v___x_1657_ = lean_st_ref_get(v_finished_1656_);
v___x_1658_ = lean_unbox(v___x_1657_);
lean_dec(v___x_1657_);
if (v___x_1658_ == 0)
{
v___y_1644_ = v_pendingConsumer_1653_;
v_interestWaiter_1645_ = v_interestWaiter_1635_;
v___y_1646_ = v___y_1654_;
goto v___jp_1643_;
}
else
{
lean_object* v___x_1659_; 
lean_dec_ref_known(v_interestWaiter_1635_, 1);
v___x_1659_ = lean_box(0);
v___y_1644_ = v_pendingConsumer_1653_;
v_interestWaiter_1645_ = v___x_1659_;
v___y_1646_ = v___y_1654_;
goto v___jp_1643_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00__private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27_spec__0___boxed(lean_object* v___y_1667_, lean_object* v___y_1668_){
_start:
{
lean_object* v_res_1669_; 
v_res_1669_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00__private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27_spec__0(v___y_1667_);
lean_dec(v___y_1667_);
return v_res_1669_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_tryRecv_x27___at___00__private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27_spec__1(lean_object* v___y_1670_){
_start:
{
lean_object* v___x_1672_; lean_object* v_pendingProducer_1673_; 
v___x_1672_ = lean_st_ref_get(v___y_1670_);
v_pendingProducer_1673_ = lean_ctor_get(v___x_1672_, 0);
lean_inc(v_pendingProducer_1673_);
if (lean_obj_tag(v_pendingProducer_1673_) == 1)
{
lean_object* v_val_1674_; lean_object* v___x_1676_; uint8_t v_isShared_1677_; uint8_t v_isSharedCheck_1703_; 
v_val_1674_ = lean_ctor_get(v_pendingProducer_1673_, 0);
v_isSharedCheck_1703_ = !lean_is_exclusive(v_pendingProducer_1673_);
if (v_isSharedCheck_1703_ == 0)
{
v___x_1676_ = v_pendingProducer_1673_;
v_isShared_1677_ = v_isSharedCheck_1703_;
goto v_resetjp_1675_;
}
else
{
lean_inc(v_val_1674_);
lean_dec(v_pendingProducer_1673_);
v___x_1676_ = lean_box(0);
v_isShared_1677_ = v_isSharedCheck_1703_;
goto v_resetjp_1675_;
}
v_resetjp_1675_:
{
lean_object* v_pendingConsumer_1678_; lean_object* v_interestWaiter_1679_; uint8_t v_closed_1680_; lean_object* v_knownSize_1681_; lean_object* v_pendingIncompleteChunk_1682_; lean_object* v_closeError_1683_; lean_object* v___x_1685_; uint8_t v_isShared_1686_; uint8_t v_isSharedCheck_1701_; 
v_pendingConsumer_1678_ = lean_ctor_get(v___x_1672_, 1);
v_interestWaiter_1679_ = lean_ctor_get(v___x_1672_, 2);
v_closed_1680_ = lean_ctor_get_uint8(v___x_1672_, sizeof(void*)*6);
v_knownSize_1681_ = lean_ctor_get(v___x_1672_, 3);
v_pendingIncompleteChunk_1682_ = lean_ctor_get(v___x_1672_, 4);
v_closeError_1683_ = lean_ctor_get(v___x_1672_, 5);
v_isSharedCheck_1701_ = !lean_is_exclusive(v___x_1672_);
if (v_isSharedCheck_1701_ == 0)
{
lean_object* v_unused_1702_; 
v_unused_1702_ = lean_ctor_get(v___x_1672_, 0);
lean_dec(v_unused_1702_);
v___x_1685_ = v___x_1672_;
v_isShared_1686_ = v_isSharedCheck_1701_;
goto v_resetjp_1684_;
}
else
{
lean_inc(v_closeError_1683_);
lean_inc(v_pendingIncompleteChunk_1682_);
lean_inc(v_knownSize_1681_);
lean_inc(v_interestWaiter_1679_);
lean_inc(v_pendingConsumer_1678_);
lean_dec(v___x_1672_);
v___x_1685_ = lean_box(0);
v_isShared_1686_ = v_isSharedCheck_1701_;
goto v_resetjp_1684_;
}
v_resetjp_1684_:
{
lean_object* v_chunk_1687_; lean_object* v_done_1688_; lean_object* v___x_1689_; lean_object* v___x_1690_; lean_object* v___x_1692_; 
v_chunk_1687_ = lean_ctor_get(v_val_1674_, 0);
lean_inc_ref(v_chunk_1687_);
v_done_1688_ = lean_ctor_get(v_val_1674_, 1);
lean_inc(v_done_1688_);
lean_dec(v_val_1674_);
v___x_1689_ = lean_box(0);
v___x_1690_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_decreaseKnownSize(v_knownSize_1681_, v_chunk_1687_);
if (v_isShared_1686_ == 0)
{
lean_ctor_set(v___x_1685_, 3, v___x_1690_);
lean_ctor_set(v___x_1685_, 0, v___x_1689_);
v___x_1692_ = v___x_1685_;
goto v_reusejp_1691_;
}
else
{
lean_object* v_reuseFailAlloc_1700_; 
v_reuseFailAlloc_1700_ = lean_alloc_ctor(0, 6, 1);
lean_ctor_set(v_reuseFailAlloc_1700_, 0, v___x_1689_);
lean_ctor_set(v_reuseFailAlloc_1700_, 1, v_pendingConsumer_1678_);
lean_ctor_set(v_reuseFailAlloc_1700_, 2, v_interestWaiter_1679_);
lean_ctor_set(v_reuseFailAlloc_1700_, 3, v___x_1690_);
lean_ctor_set(v_reuseFailAlloc_1700_, 4, v_pendingIncompleteChunk_1682_);
lean_ctor_set(v_reuseFailAlloc_1700_, 5, v_closeError_1683_);
lean_ctor_set_uint8(v_reuseFailAlloc_1700_, sizeof(void*)*6, v_closed_1680_);
v___x_1692_ = v_reuseFailAlloc_1700_;
goto v_reusejp_1691_;
}
v_reusejp_1691_:
{
lean_object* v___x_1693_; uint8_t v___x_1694_; lean_object* v___x_1695_; lean_object* v___x_1696_; lean_object* v___x_1698_; 
v___x_1693_ = lean_st_ref_swap(v___y_1670_, v___x_1692_);
lean_dec(v___x_1693_);
v___x_1694_ = 1;
v___x_1695_ = lean_box(v___x_1694_);
v___x_1696_ = lean_io_promise_resolve(v___x_1695_, v_done_1688_);
lean_dec(v_done_1688_);
if (v_isShared_1677_ == 0)
{
lean_ctor_set(v___x_1676_, 0, v_chunk_1687_);
v___x_1698_ = v___x_1676_;
goto v_reusejp_1697_;
}
else
{
lean_object* v_reuseFailAlloc_1699_; 
v_reuseFailAlloc_1699_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1699_, 0, v_chunk_1687_);
v___x_1698_ = v_reuseFailAlloc_1699_;
goto v_reusejp_1697_;
}
v_reusejp_1697_:
{
return v___x_1698_;
}
}
}
}
}
else
{
lean_object* v___x_1704_; 
lean_dec(v_pendingProducer_1673_);
lean_dec(v___x_1672_);
v___x_1704_ = lean_box(0);
return v___x_1704_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_tryRecv_x27___at___00__private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27_spec__1___boxed(lean_object* v___y_1705_, lean_object* v___y_1706_){
_start:
{
lean_object* v_res_1707_; 
v_res_1707_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_tryRecv_x27___at___00__private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27_spec__1(v___y_1705_);
lean_dec(v___y_1705_);
return v_res_1707_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_signalInterest___at___00__private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27_spec__2(lean_object* v___y_1708_){
_start:
{
lean_object* v___x_1710_; lean_object* v_interestWaiter_1711_; 
v___x_1710_ = lean_st_ref_get(v___y_1708_);
v_interestWaiter_1711_ = lean_ctor_get(v___x_1710_, 2);
lean_inc(v_interestWaiter_1711_);
if (lean_obj_tag(v_interestWaiter_1711_) == 1)
{
lean_object* v_pendingProducer_1712_; lean_object* v_pendingConsumer_1713_; uint8_t v_closed_1714_; lean_object* v_knownSize_1715_; lean_object* v_pendingIncompleteChunk_1716_; lean_object* v_closeError_1717_; lean_object* v___x_1719_; uint8_t v_isShared_1720_; uint8_t v_isSharedCheck_1730_; 
v_pendingProducer_1712_ = lean_ctor_get(v___x_1710_, 0);
v_pendingConsumer_1713_ = lean_ctor_get(v___x_1710_, 1);
v_closed_1714_ = lean_ctor_get_uint8(v___x_1710_, sizeof(void*)*6);
v_knownSize_1715_ = lean_ctor_get(v___x_1710_, 3);
v_pendingIncompleteChunk_1716_ = lean_ctor_get(v___x_1710_, 4);
v_closeError_1717_ = lean_ctor_get(v___x_1710_, 5);
v_isSharedCheck_1730_ = !lean_is_exclusive(v___x_1710_);
if (v_isSharedCheck_1730_ == 0)
{
lean_object* v_unused_1731_; 
v_unused_1731_ = lean_ctor_get(v___x_1710_, 2);
lean_dec(v_unused_1731_);
v___x_1719_ = v___x_1710_;
v_isShared_1720_ = v_isSharedCheck_1730_;
goto v_resetjp_1718_;
}
else
{
lean_inc(v_closeError_1717_);
lean_inc(v_pendingIncompleteChunk_1716_);
lean_inc(v_knownSize_1715_);
lean_inc(v_pendingConsumer_1713_);
lean_inc(v_pendingProducer_1712_);
lean_dec(v___x_1710_);
v___x_1719_ = lean_box(0);
v_isShared_1720_ = v_isSharedCheck_1730_;
goto v_resetjp_1718_;
}
v_resetjp_1718_:
{
lean_object* v_val_1721_; uint8_t v___x_1722_; uint8_t v___x_1723_; lean_object* v___x_1724_; lean_object* v___x_1726_; 
v_val_1721_ = lean_ctor_get(v_interestWaiter_1711_, 0);
lean_inc(v_val_1721_);
lean_dec_ref_known(v_interestWaiter_1711_, 1);
v___x_1722_ = 1;
v___x_1723_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_resolveInterestWaiter(v_val_1721_, v___x_1722_);
lean_dec(v_val_1721_);
v___x_1724_ = lean_box(0);
if (v_isShared_1720_ == 0)
{
lean_ctor_set(v___x_1719_, 2, v___x_1724_);
v___x_1726_ = v___x_1719_;
goto v_reusejp_1725_;
}
else
{
lean_object* v_reuseFailAlloc_1729_; 
v_reuseFailAlloc_1729_ = lean_alloc_ctor(0, 6, 1);
lean_ctor_set(v_reuseFailAlloc_1729_, 0, v_pendingProducer_1712_);
lean_ctor_set(v_reuseFailAlloc_1729_, 1, v_pendingConsumer_1713_);
lean_ctor_set(v_reuseFailAlloc_1729_, 2, v___x_1724_);
lean_ctor_set(v_reuseFailAlloc_1729_, 3, v_knownSize_1715_);
lean_ctor_set(v_reuseFailAlloc_1729_, 4, v_pendingIncompleteChunk_1716_);
lean_ctor_set(v_reuseFailAlloc_1729_, 5, v_closeError_1717_);
lean_ctor_set_uint8(v_reuseFailAlloc_1729_, sizeof(void*)*6, v_closed_1714_);
v___x_1726_ = v_reuseFailAlloc_1729_;
goto v_reusejp_1725_;
}
v_reusejp_1725_:
{
lean_object* v___x_1727_; lean_object* v___x_1728_; 
v___x_1727_ = lean_box(0);
v___x_1728_ = lean_st_ref_swap(v___y_1708_, v___x_1726_);
lean_dec(v___x_1728_);
return v___x_1727_;
}
}
}
else
{
lean_object* v___x_1732_; 
lean_dec(v_interestWaiter_1711_);
lean_dec(v___x_1710_);
v___x_1732_ = lean_box(0);
return v___x_1732_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_signalInterest___at___00__private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27_spec__2___boxed(lean_object* v___y_1733_, lean_object* v___y_1734_){
_start:
{
lean_object* v_res_1735_; 
v_res_1735_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_signalInterest___at___00__private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27_spec__2(v___y_1733_);
lean_dec(v___y_1733_);
return v_res_1735_;
}
}
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00__private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27_spec__3___redArg(lean_object* v_mutex_1736_, lean_object* v_k_1737_){
_start:
{
lean_object* v_ref_1739_; lean_object* v_mutex_1740_; lean_object* v___x_1741_; lean_object* v___x_1742_; lean_object* v___x_1743_; 
v_ref_1739_ = lean_ctor_get(v_mutex_1736_, 0);
lean_inc(v_ref_1739_);
v_mutex_1740_ = lean_ctor_get(v_mutex_1736_, 1);
lean_inc(v_mutex_1740_);
lean_dec_ref(v_mutex_1736_);
v___x_1741_ = lean_io_basemutex_lock(v_mutex_1740_);
v___x_1742_ = lean_apply_2(v_k_1737_, v_ref_1739_, lean_box(0));
v___x_1743_ = lean_io_basemutex_unlock(v_mutex_1740_);
lean_dec(v_mutex_1740_);
return v___x_1742_;
}
}
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00__private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27_spec__3___redArg___boxed(lean_object* v_mutex_1744_, lean_object* v_k_1745_, lean_object* v___y_1746_){
_start:
{
lean_object* v_res_1747_; 
v_res_1747_ = l_Std_Mutex_atomically___at___00__private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27_spec__3___redArg(v_mutex_1744_, v_k_1745_);
return v_res_1747_;
}
}
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00__private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27_spec__3(lean_object* v_00_u03b1_1748_, lean_object* v_00_u03b2_1749_, lean_object* v_mutex_1750_, lean_object* v_k_1751_){
_start:
{
lean_object* v___x_1753_; 
v___x_1753_ = l_Std_Mutex_atomically___at___00__private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27_spec__3___redArg(v_mutex_1750_, v_k_1751_);
return v___x_1753_;
}
}
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00__private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27_spec__3___boxed(lean_object* v_00_u03b1_1754_, lean_object* v_00_u03b2_1755_, lean_object* v_mutex_1756_, lean_object* v_k_1757_, lean_object* v___y_1758_){
_start:
{
lean_object* v_res_1759_; 
v_res_1759_ = l_Std_Mutex_atomically___at___00__private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27_spec__3(v_00_u03b1_1754_, v_00_u03b2_1755_, v_mutex_1756_, v_k_1757_);
return v_res_1759_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27___lam__0(lean_object* v_x_1765_){
_start:
{
if (lean_obj_tag(v_x_1765_) == 0)
{
lean_object* v___x_1766_; 
v___x_1766_ = ((lean_object*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27___lam__0___closed__2));
return v___x_1766_;
}
else
{
lean_object* v_val_1767_; 
v_val_1767_ = lean_ctor_get(v_x_1765_, 0);
lean_inc(v_val_1767_);
return v_val_1767_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27___lam__0___boxed(lean_object* v_x_1768_){
_start:
{
lean_object* v_res_1769_; 
v_res_1769_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27___lam__0(v_x_1768_);
lean_dec(v_x_1768_);
return v_res_1769_;
}
}
static lean_object* _init_l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27___lam__1___closed__3(void){
_start:
{
lean_object* v___x_1775_; lean_object* v___x_1776_; 
v___x_1775_ = ((lean_object*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27___lam__1___closed__2));
v___x_1776_ = lean_task_pure(v___x_1775_);
return v___x_1776_;
}
}
static lean_object* _init_l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27___lam__1___closed__4(void){
_start:
{
lean_object* v___x_1777_; lean_object* v___x_1778_; 
v___x_1777_ = ((lean_object*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___redArg___lam__0___closed__0));
v___x_1778_ = lean_task_pure(v___x_1777_);
return v___x_1778_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27___lam__1(lean_object* v___f_1779_, lean_object* v___y_1780_){
_start:
{
lean_object* v___x_1782_; lean_object* v___x_1783_; uint8_t v_closed_1784_; 
v___x_1782_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00__private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27_spec__0(v___y_1780_);
v___x_1783_ = lean_st_ref_get(v___y_1780_);
v_closed_1784_ = lean_ctor_get_uint8(v___x_1783_, sizeof(void*)*6);
if (v_closed_1784_ == 0)
{
uint8_t v___x_1785_; lean_object* v___x_1786_; 
lean_dec(v___x_1783_);
v___x_1785_ = 1;
v___x_1786_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_tryRecv_x27___at___00__private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27_spec__1(v___y_1780_);
if (lean_obj_tag(v___x_1786_) == 1)
{
lean_object* v___x_1787_; lean_object* v___x_1788_; 
lean_dec_ref(v___f_1779_);
v___x_1787_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1787_, 0, v___x_1786_);
v___x_1788_ = lean_task_pure(v___x_1787_);
return v___x_1788_;
}
else
{
lean_object* v___x_1789_; lean_object* v_pendingConsumer_1790_; 
lean_dec(v___x_1786_);
v___x_1789_ = lean_st_ref_get(v___y_1780_);
v_pendingConsumer_1790_ = lean_ctor_get(v___x_1789_, 1);
lean_inc(v_pendingConsumer_1790_);
if (lean_obj_tag(v_pendingConsumer_1790_) == 0)
{
lean_object* v_pendingProducer_1791_; lean_object* v_interestWaiter_1792_; uint8_t v_closed_1793_; lean_object* v_knownSize_1794_; lean_object* v_pendingIncompleteChunk_1795_; lean_object* v_closeError_1796_; lean_object* v___x_1798_; uint8_t v_isShared_1799_; uint8_t v_isSharedCheck_1811_; 
v_pendingProducer_1791_ = lean_ctor_get(v___x_1789_, 0);
v_interestWaiter_1792_ = lean_ctor_get(v___x_1789_, 2);
v_closed_1793_ = lean_ctor_get_uint8(v___x_1789_, sizeof(void*)*6);
v_knownSize_1794_ = lean_ctor_get(v___x_1789_, 3);
v_pendingIncompleteChunk_1795_ = lean_ctor_get(v___x_1789_, 4);
v_closeError_1796_ = lean_ctor_get(v___x_1789_, 5);
v_isSharedCheck_1811_ = !lean_is_exclusive(v___x_1789_);
if (v_isSharedCheck_1811_ == 0)
{
lean_object* v_unused_1812_; 
v_unused_1812_ = lean_ctor_get(v___x_1789_, 1);
lean_dec(v_unused_1812_);
v___x_1798_ = v___x_1789_;
v_isShared_1799_ = v_isSharedCheck_1811_;
goto v_resetjp_1797_;
}
else
{
lean_inc(v_closeError_1796_);
lean_inc(v_pendingIncompleteChunk_1795_);
lean_inc(v_knownSize_1794_);
lean_inc(v_interestWaiter_1792_);
lean_inc(v_pendingProducer_1791_);
lean_dec(v___x_1789_);
v___x_1798_ = lean_box(0);
v_isShared_1799_ = v_isSharedCheck_1811_;
goto v_resetjp_1797_;
}
v_resetjp_1797_:
{
lean_object* v___x_1800_; lean_object* v___x_1801_; lean_object* v___x_1802_; lean_object* v___x_1804_; 
v___x_1800_ = lean_io_promise_new();
lean_inc(v___x_1800_);
v___x_1801_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1801_, 0, v___x_1800_);
v___x_1802_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1802_, 0, v___x_1801_);
if (v_isShared_1799_ == 0)
{
lean_ctor_set(v___x_1798_, 1, v___x_1802_);
v___x_1804_ = v___x_1798_;
goto v_reusejp_1803_;
}
else
{
lean_object* v_reuseFailAlloc_1810_; 
v_reuseFailAlloc_1810_ = lean_alloc_ctor(0, 6, 1);
lean_ctor_set(v_reuseFailAlloc_1810_, 0, v_pendingProducer_1791_);
lean_ctor_set(v_reuseFailAlloc_1810_, 1, v___x_1802_);
lean_ctor_set(v_reuseFailAlloc_1810_, 2, v_interestWaiter_1792_);
lean_ctor_set(v_reuseFailAlloc_1810_, 3, v_knownSize_1794_);
lean_ctor_set(v_reuseFailAlloc_1810_, 4, v_pendingIncompleteChunk_1795_);
lean_ctor_set(v_reuseFailAlloc_1810_, 5, v_closeError_1796_);
lean_ctor_set_uint8(v_reuseFailAlloc_1810_, sizeof(void*)*6, v_closed_1793_);
v___x_1804_ = v_reuseFailAlloc_1810_;
goto v_reusejp_1803_;
}
v_reusejp_1803_:
{
lean_object* v___x_1805_; lean_object* v___x_1806_; lean_object* v___x_1807_; lean_object* v___x_1808_; lean_object* v___x_1809_; 
v___x_1805_ = lean_st_ref_swap(v___y_1780_, v___x_1804_);
lean_dec(v___x_1805_);
v___x_1806_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_signalInterest___at___00__private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27_spec__2(v___y_1780_);
v___x_1807_ = lean_io_promise_result_opt(v___x_1800_);
lean_dec(v___x_1800_);
v___x_1808_ = lean_unsigned_to_nat(0u);
v___x_1809_ = lean_task_map(v___f_1779_, v___x_1807_, v___x_1808_, v___x_1785_);
return v___x_1809_;
}
}
}
else
{
lean_object* v___x_1813_; 
lean_dec_ref_known(v_pendingConsumer_1790_, 1);
lean_dec(v___x_1789_);
lean_dec_ref(v___f_1779_);
v___x_1813_ = lean_obj_once(&l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27___lam__1___closed__3, &l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27___lam__1___closed__3_once, _init_l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27___lam__1___closed__3);
return v___x_1813_;
}
}
}
else
{
lean_object* v_closeError_1814_; 
lean_dec_ref(v___f_1779_);
v_closeError_1814_ = lean_ctor_get(v___x_1783_, 5);
lean_inc(v_closeError_1814_);
lean_dec(v___x_1783_);
if (lean_obj_tag(v_closeError_1814_) == 0)
{
lean_object* v___x_1815_; 
v___x_1815_ = lean_obj_once(&l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27___lam__1___closed__4, &l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27___lam__1___closed__4_once, _init_l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27___lam__1___closed__4);
return v___x_1815_;
}
else
{
lean_object* v_val_1816_; lean_object* v___x_1818_; uint8_t v_isShared_1819_; uint8_t v_isSharedCheck_1824_; 
v_val_1816_ = lean_ctor_get(v_closeError_1814_, 0);
v_isSharedCheck_1824_ = !lean_is_exclusive(v_closeError_1814_);
if (v_isSharedCheck_1824_ == 0)
{
v___x_1818_ = v_closeError_1814_;
v_isShared_1819_ = v_isSharedCheck_1824_;
goto v_resetjp_1817_;
}
else
{
lean_inc(v_val_1816_);
lean_dec(v_closeError_1814_);
v___x_1818_ = lean_box(0);
v_isShared_1819_ = v_isSharedCheck_1824_;
goto v_resetjp_1817_;
}
v_resetjp_1817_:
{
lean_object* v___x_1821_; 
if (v_isShared_1819_ == 0)
{
lean_ctor_set_tag(v___x_1818_, 0);
v___x_1821_ = v___x_1818_;
goto v_reusejp_1820_;
}
else
{
lean_object* v_reuseFailAlloc_1823_; 
v_reuseFailAlloc_1823_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1823_, 0, v_val_1816_);
v___x_1821_ = v_reuseFailAlloc_1823_;
goto v_reusejp_1820_;
}
v_reusejp_1820_:
{
lean_object* v___x_1822_; 
v___x_1822_ = lean_task_pure(v___x_1821_);
return v___x_1822_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27___lam__1___boxed(lean_object* v___f_1825_, lean_object* v___y_1826_, lean_object* v___y_1827_){
_start:
{
lean_object* v_res_1828_; 
v_res_1828_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27___lam__1(v___f_1825_, v___y_1826_);
lean_dec(v___y_1826_);
return v_res_1828_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27(lean_object* v_stream_1832_){
_start:
{
lean_object* v___f_1834_; lean_object* v___x_1835_; 
v___f_1834_ = ((lean_object*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27___closed__1));
v___x_1835_ = l_Std_Mutex_atomically___at___00__private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27_spec__3___redArg(v_stream_1832_, v___f_1834_);
return v___x_1835_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27___boxed(lean_object* v_stream_1836_, lean_object* v___y_1837_){
_start:
{
lean_object* v_res_1838_; 
v_res_1838_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27(v_stream_1836_);
return v_res_1838_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_recv___lam__0(lean_object* v_x_1839_){
_start:
{
if (lean_obj_tag(v_x_1839_) == 0)
{
lean_object* v_a_1841_; lean_object* v___x_1843_; uint8_t v_isShared_1844_; uint8_t v_isSharedCheck_1849_; 
v_a_1841_ = lean_ctor_get(v_x_1839_, 0);
v_isSharedCheck_1849_ = !lean_is_exclusive(v_x_1839_);
if (v_isSharedCheck_1849_ == 0)
{
v___x_1843_ = v_x_1839_;
v_isShared_1844_ = v_isSharedCheck_1849_;
goto v_resetjp_1842_;
}
else
{
lean_inc(v_a_1841_);
lean_dec(v_x_1839_);
v___x_1843_ = lean_box(0);
v_isShared_1844_ = v_isSharedCheck_1849_;
goto v_resetjp_1842_;
}
v_resetjp_1842_:
{
lean_object* v___x_1846_; 
if (v_isShared_1844_ == 0)
{
v___x_1846_ = v___x_1843_;
goto v_reusejp_1845_;
}
else
{
lean_object* v_reuseFailAlloc_1848_; 
v_reuseFailAlloc_1848_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1848_, 0, v_a_1841_);
v___x_1846_ = v_reuseFailAlloc_1848_;
goto v_reusejp_1845_;
}
v_reusejp_1845_:
{
lean_object* v___x_1847_; 
v___x_1847_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1847_, 0, v___x_1846_);
return v___x_1847_;
}
}
}
else
{
lean_object* v_a_1850_; lean_object* v___x_1851_; 
v_a_1850_ = lean_ctor_get(v_x_1839_, 0);
lean_inc(v_a_1850_);
lean_dec_ref_known(v_x_1839_, 1);
v___x_1851_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1851_, 0, v_a_1850_);
return v___x_1851_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_recv___lam__0___boxed(lean_object* v_x_1852_, lean_object* v___y_1853_){
_start:
{
lean_object* v_res_1854_; 
v_res_1854_ = l_Std_Http_Body_Stream_recv___lam__0(v_x_1852_);
return v_res_1854_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_recv(lean_object* v_stream_1856_){
_start:
{
lean_object* v___f_1858_; lean_object* v___x_1859_; uint8_t v___x_1860_; lean_object* v___x_1861_; lean_object* v___x_1862_; lean_object* v___x_1863_; lean_object* v___x_1864_; 
v___f_1858_ = ((lean_object*)(l_Std_Http_Body_Stream_recv___closed__0));
v___x_1859_ = lean_unsigned_to_nat(0u);
v___x_1860_ = 0;
v___x_1861_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27(v_stream_1856_);
v___x_1862_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1862_, 0, v___x_1861_);
v___x_1863_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1863_, 0, v___x_1862_);
v___x_1864_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_1859_, v___x_1860_, v___x_1863_, v___f_1858_);
return v___x_1864_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_recv___boxed(lean_object* v_stream_1865_, lean_object* v___y_1866_){
_start:
{
lean_object* v_res_1867_; 
v_res_1867_ = l_Std_Http_Body_Stream_recv(v_stream_1865_);
return v_res_1867_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___at___00Std_Http_Body_Stream_close_spec__0___lam__0(uint8_t v___x_1868_, lean_object* v_knownSize_1869_, lean_object* v_closeError_1870_, lean_object* v_____r_1871_, lean_object* v___y_1872_){
_start:
{
lean_object* v___x_1874_; lean_object* v___x_1875_; lean_object* v___x_1876_; lean_object* v___x_1877_; 
v___x_1874_ = lean_box(0);
v___x_1875_ = lean_alloc_ctor(0, 6, 1);
lean_ctor_set(v___x_1875_, 0, v___x_1874_);
lean_ctor_set(v___x_1875_, 1, v___x_1874_);
lean_ctor_set(v___x_1875_, 2, v___x_1874_);
lean_ctor_set(v___x_1875_, 3, v_knownSize_1869_);
lean_ctor_set(v___x_1875_, 4, v___x_1874_);
lean_ctor_set(v___x_1875_, 5, v_closeError_1870_);
lean_ctor_set_uint8(v___x_1875_, sizeof(void*)*6, v___x_1868_);
v___x_1876_ = lean_st_ref_swap(v___y_1872_, v___x_1875_);
lean_dec(v___x_1876_);
v___x_1877_ = ((lean_object*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__0___closed__1));
return v___x_1877_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___at___00Std_Http_Body_Stream_close_spec__0___lam__0___boxed(lean_object* v___x_1878_, lean_object* v_knownSize_1879_, lean_object* v_closeError_1880_, lean_object* v_____r_1881_, lean_object* v___y_1882_, lean_object* v___y_1883_){
_start:
{
uint8_t v___x_2202__boxed_1884_; lean_object* v_res_1885_; 
v___x_2202__boxed_1884_ = lean_unbox(v___x_1878_);
v_res_1885_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___at___00Std_Http_Body_Stream_close_spec__0___lam__0(v___x_2202__boxed_1884_, v_knownSize_1879_, v_closeError_1880_, v_____r_1881_, v___y_1882_);
lean_dec(v___y_1882_);
return v_res_1885_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___at___00Std_Http_Body_Stream_close_spec__0___lam__1(lean_object* v___f_1886_, lean_object* v___y_1887_, lean_object* v_x_1888_){
_start:
{
if (lean_obj_tag(v_x_1888_) == 0)
{
lean_object* v___x_1890_; 
lean_dec_ref(v___f_1886_);
v___x_1890_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1890_, 0, v_x_1888_);
return v___x_1890_;
}
else
{
lean_object* v_a_1891_; lean_object* v___x_1892_; 
v_a_1891_ = lean_ctor_get(v_x_1888_, 0);
lean_inc(v_a_1891_);
lean_dec_ref_known(v_x_1888_, 1);
lean_inc(v___y_1887_);
v___x_1892_ = lean_apply_3(v___f_1886_, v_a_1891_, v___y_1887_, lean_box(0));
return v___x_1892_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___at___00Std_Http_Body_Stream_close_spec__0___lam__1___boxed(lean_object* v___f_1893_, lean_object* v___y_1894_, lean_object* v_x_1895_, lean_object* v___y_1896_){
_start:
{
lean_object* v_res_1897_; 
v_res_1897_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___at___00Std_Http_Body_Stream_close_spec__0___lam__1(v___f_1893_, v___y_1894_, v_x_1895_);
lean_dec(v___y_1894_);
return v_res_1897_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___at___00Std_Http_Body_Stream_close_spec__0___lam__2(lean_object* v_pendingProducer_1898_, lean_object* v___f_1899_, uint8_t v_closed_1900_, lean_object* v_____r_1901_, lean_object* v___y_1902_){
_start:
{
if (lean_obj_tag(v_pendingProducer_1898_) == 1)
{
lean_object* v_val_1904_; lean_object* v_done_1905_; lean_object* v___f_1906_; lean_object* v___x_1907_; lean_object* v___x_1908_; lean_object* v___x_1909_; lean_object* v___x_1910_; lean_object* v___x_1911_; 
v_val_1904_ = lean_ctor_get(v_pendingProducer_1898_, 0);
v_done_1905_ = lean_ctor_get(v_val_1904_, 1);
lean_inc(v___y_1902_);
v___f_1906_ = lean_alloc_closure((void*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___at___00Std_Http_Body_Stream_close_spec__0___lam__1___boxed), 4, 2);
lean_closure_set(v___f_1906_, 0, v___f_1899_);
lean_closure_set(v___f_1906_, 1, v___y_1902_);
v___x_1907_ = lean_unsigned_to_nat(0u);
v___x_1908_ = lean_box(v_closed_1900_);
v___x_1909_ = lean_io_promise_resolve(v___x_1908_, v_done_1905_);
v___x_1910_ = ((lean_object*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__0___closed__1));
v___x_1911_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_1907_, v_closed_1900_, v___x_1910_, v___f_1906_);
return v___x_1911_;
}
else
{
lean_object* v___x_1912_; lean_object* v___x_1913_; 
v___x_1912_ = lean_box(0);
lean_inc(v___y_1902_);
v___x_1913_ = lean_apply_3(v___f_1899_, v___x_1912_, v___y_1902_, lean_box(0));
return v___x_1913_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___at___00Std_Http_Body_Stream_close_spec__0___lam__2___boxed(lean_object* v_pendingProducer_1914_, lean_object* v___f_1915_, lean_object* v_closed_1916_, lean_object* v_____r_1917_, lean_object* v___y_1918_, lean_object* v___y_1919_){
_start:
{
uint8_t v_closed_boxed_1920_; lean_object* v_res_1921_; 
v_closed_boxed_1920_ = lean_unbox(v_closed_1916_);
v_res_1921_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___at___00Std_Http_Body_Stream_close_spec__0___lam__2(v_pendingProducer_1914_, v___f_1915_, v_closed_boxed_1920_, v_____r_1917_, v___y_1918_);
lean_dec(v___y_1918_);
lean_dec(v_pendingProducer_1914_);
return v_res_1921_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___at___00Std_Http_Body_Stream_close_spec__0___lam__4(lean_object* v_interestWaiter_1922_, lean_object* v___f_1923_, uint8_t v_closed_1924_, lean_object* v_____r_1925_, lean_object* v___y_1926_){
_start:
{
if (lean_obj_tag(v_interestWaiter_1922_) == 1)
{
lean_object* v_val_1928_; lean_object* v___f_1929_; lean_object* v___x_1930_; uint8_t v___x_1931_; lean_object* v___x_1932_; lean_object* v___x_1933_; 
v_val_1928_ = lean_ctor_get(v_interestWaiter_1922_, 0);
lean_inc(v___y_1926_);
v___f_1929_ = lean_alloc_closure((void*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___at___00Std_Http_Body_Stream_close_spec__0___lam__1___boxed), 4, 2);
lean_closure_set(v___f_1929_, 0, v___f_1923_);
lean_closure_set(v___f_1929_, 1, v___y_1926_);
v___x_1930_ = lean_unsigned_to_nat(0u);
v___x_1931_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_resolveInterestWaiter(v_val_1928_, v_closed_1924_);
v___x_1932_ = ((lean_object*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__0___closed__1));
v___x_1933_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_1930_, v_closed_1924_, v___x_1932_, v___f_1929_);
return v___x_1933_;
}
else
{
lean_object* v___x_1934_; lean_object* v___x_1935_; 
v___x_1934_ = lean_box(0);
lean_inc(v___y_1926_);
v___x_1935_ = lean_apply_3(v___f_1923_, v___x_1934_, v___y_1926_, lean_box(0));
return v___x_1935_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___at___00Std_Http_Body_Stream_close_spec__0___lam__4___boxed(lean_object* v_interestWaiter_1936_, lean_object* v___f_1937_, lean_object* v_closed_1938_, lean_object* v_____r_1939_, lean_object* v___y_1940_, lean_object* v___y_1941_){
_start:
{
uint8_t v_closed_boxed_1942_; lean_object* v_res_1943_; 
v_closed_boxed_1942_ = lean_unbox(v_closed_1938_);
v_res_1943_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___at___00Std_Http_Body_Stream_close_spec__0___lam__4(v_interestWaiter_1936_, v___f_1937_, v_closed_boxed_1942_, v_____r_1939_, v___y_1940_);
lean_dec(v___y_1940_);
lean_dec(v_interestWaiter_1936_);
return v_res_1943_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___at___00Std_Http_Body_Stream_close_spec__0___lam__5(lean_object* v___y_1944_, lean_object* v_x_1945_){
_start:
{
if (lean_obj_tag(v_x_1945_) == 0)
{
lean_object* v_a_1947_; lean_object* v___x_1949_; uint8_t v_isShared_1950_; uint8_t v_isSharedCheck_1955_; 
v_a_1947_ = lean_ctor_get(v_x_1945_, 0);
v_isSharedCheck_1955_ = !lean_is_exclusive(v_x_1945_);
if (v_isSharedCheck_1955_ == 0)
{
v___x_1949_ = v_x_1945_;
v_isShared_1950_ = v_isSharedCheck_1955_;
goto v_resetjp_1948_;
}
else
{
lean_inc(v_a_1947_);
lean_dec(v_x_1945_);
v___x_1949_ = lean_box(0);
v_isShared_1950_ = v_isSharedCheck_1955_;
goto v_resetjp_1948_;
}
v_resetjp_1948_:
{
lean_object* v___x_1952_; 
if (v_isShared_1950_ == 0)
{
v___x_1952_ = v___x_1949_;
goto v_reusejp_1951_;
}
else
{
lean_object* v_reuseFailAlloc_1954_; 
v_reuseFailAlloc_1954_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1954_, 0, v_a_1947_);
v___x_1952_ = v_reuseFailAlloc_1954_;
goto v_reusejp_1951_;
}
v_reusejp_1951_:
{
lean_object* v___x_1953_; 
v___x_1953_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1953_, 0, v___x_1952_);
return v___x_1953_;
}
}
}
else
{
lean_object* v_a_1956_; lean_object* v___x_1958_; uint8_t v_isShared_1959_; uint8_t v_isSharedCheck_1989_; 
v_a_1956_ = lean_ctor_get(v_x_1945_, 0);
v_isSharedCheck_1989_ = !lean_is_exclusive(v_x_1945_);
if (v_isSharedCheck_1989_ == 0)
{
v___x_1958_ = v_x_1945_;
v_isShared_1959_ = v_isSharedCheck_1989_;
goto v_resetjp_1957_;
}
else
{
lean_inc(v_a_1956_);
lean_dec(v_x_1945_);
v___x_1958_ = lean_box(0);
v_isShared_1959_ = v_isSharedCheck_1989_;
goto v_resetjp_1957_;
}
v_resetjp_1957_:
{
uint8_t v_closed_1960_; 
v_closed_1960_ = lean_ctor_get_uint8(v_a_1956_, sizeof(void*)*6);
if (v_closed_1960_ == 0)
{
lean_object* v_pendingProducer_1961_; lean_object* v_pendingConsumer_1962_; lean_object* v_interestWaiter_1963_; lean_object* v_knownSize_1964_; lean_object* v_closeError_1965_; uint8_t v___x_1966_; lean_object* v___x_1967_; lean_object* v___f_1968_; lean_object* v___x_1969_; lean_object* v___f_1970_; lean_object* v___x_1971_; lean_object* v___f_1972_; 
v_pendingProducer_1961_ = lean_ctor_get(v_a_1956_, 0);
lean_inc(v_pendingProducer_1961_);
v_pendingConsumer_1962_ = lean_ctor_get(v_a_1956_, 1);
lean_inc(v_pendingConsumer_1962_);
v_interestWaiter_1963_ = lean_ctor_get(v_a_1956_, 2);
lean_inc_n(v_interestWaiter_1963_, 2);
v_knownSize_1964_ = lean_ctor_get(v_a_1956_, 3);
lean_inc(v_knownSize_1964_);
v_closeError_1965_ = lean_ctor_get(v_a_1956_, 5);
lean_inc_n(v_closeError_1965_, 2);
lean_dec(v_a_1956_);
v___x_1966_ = 1;
v___x_1967_ = lean_box(v___x_1966_);
v___f_1968_ = lean_alloc_closure((void*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___at___00Std_Http_Body_Stream_close_spec__0___lam__0___boxed), 6, 3);
lean_closure_set(v___f_1968_, 0, v___x_1967_);
lean_closure_set(v___f_1968_, 1, v_knownSize_1964_);
lean_closure_set(v___f_1968_, 2, v_closeError_1965_);
v___x_1969_ = lean_box(v_closed_1960_);
v___f_1970_ = lean_alloc_closure((void*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___at___00Std_Http_Body_Stream_close_spec__0___lam__2___boxed), 6, 3);
lean_closure_set(v___f_1970_, 0, v_pendingProducer_1961_);
lean_closure_set(v___f_1970_, 1, v___f_1968_);
lean_closure_set(v___f_1970_, 2, v___x_1969_);
v___x_1971_ = lean_box(v_closed_1960_);
lean_inc_ref(v___f_1970_);
v___f_1972_ = lean_alloc_closure((void*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___at___00Std_Http_Body_Stream_close_spec__0___lam__4___boxed), 6, 3);
lean_closure_set(v___f_1972_, 0, v_interestWaiter_1963_);
lean_closure_set(v___f_1972_, 1, v___f_1970_);
lean_closure_set(v___f_1972_, 2, v___x_1971_);
if (lean_obj_tag(v_pendingConsumer_1962_) == 1)
{
lean_object* v_val_1973_; lean_object* v___f_1974_; lean_object* v___y_1976_; 
lean_dec_ref(v___f_1970_);
lean_dec(v_interestWaiter_1963_);
v_val_1973_ = lean_ctor_get(v_pendingConsumer_1962_, 0);
lean_inc(v_val_1973_);
lean_dec_ref_known(v_pendingConsumer_1962_, 1);
lean_inc(v___y_1944_);
v___f_1974_ = lean_alloc_closure((void*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___at___00Std_Http_Body_Stream_close_spec__0___lam__1___boxed), 4, 2);
lean_closure_set(v___f_1974_, 0, v___f_1972_);
lean_closure_set(v___f_1974_, 1, v___y_1944_);
if (lean_obj_tag(v_closeError_1965_) == 0)
{
lean_object* v___x_1981_; 
lean_del_object(v___x_1958_);
v___x_1981_ = ((lean_object*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___redArg___lam__0___closed__0));
v___y_1976_ = v___x_1981_;
goto v___jp_1975_;
}
else
{
lean_object* v_val_1982_; lean_object* v___x_1984_; 
v_val_1982_ = lean_ctor_get(v_closeError_1965_, 0);
lean_inc(v_val_1982_);
lean_dec_ref_known(v_closeError_1965_, 1);
if (v_isShared_1959_ == 0)
{
lean_ctor_set_tag(v___x_1958_, 0);
lean_ctor_set(v___x_1958_, 0, v_val_1982_);
v___x_1984_ = v___x_1958_;
goto v_reusejp_1983_;
}
else
{
lean_object* v_reuseFailAlloc_1985_; 
v_reuseFailAlloc_1985_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1985_, 0, v_val_1982_);
v___x_1984_ = v_reuseFailAlloc_1985_;
goto v_reusejp_1983_;
}
v_reusejp_1983_:
{
v___y_1976_ = v___x_1984_;
goto v___jp_1975_;
}
}
v___jp_1975_:
{
lean_object* v___x_1977_; uint8_t v___x_1978_; lean_object* v___x_1979_; lean_object* v___x_1980_; 
v___x_1977_ = lean_unsigned_to_nat(0u);
v___x_1978_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_Consumer_resolve(v_val_1973_, v___y_1976_);
lean_dec(v_val_1973_);
v___x_1979_ = ((lean_object*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__0___closed__1));
v___x_1980_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_1977_, v_closed_1960_, v___x_1979_, v___f_1974_);
return v___x_1980_;
}
}
else
{
lean_object* v___x_1986_; lean_object* v___x_1987_; 
lean_dec_ref(v___f_1972_);
lean_dec(v_closeError_1965_);
lean_dec(v_pendingConsumer_1962_);
lean_del_object(v___x_1958_);
v___x_1986_ = lean_box(0);
v___x_1987_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___at___00Std_Http_Body_Stream_close_spec__0___lam__4(v_interestWaiter_1963_, v___f_1970_, v_closed_1960_, v___x_1986_, v___y_1944_);
lean_dec(v_interestWaiter_1963_);
return v___x_1987_;
}
}
else
{
lean_object* v___x_1988_; 
lean_del_object(v___x_1958_);
lean_dec(v_a_1956_);
v___x_1988_ = ((lean_object*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__0___closed__1));
return v___x_1988_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___at___00Std_Http_Body_Stream_close_spec__0___lam__5___boxed(lean_object* v___y_1990_, lean_object* v_x_1991_, lean_object* v___y_1992_){
_start:
{
lean_object* v_res_1993_; 
v_res_1993_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___at___00Std_Http_Body_Stream_close_spec__0___lam__5(v___y_1990_, v_x_1991_);
lean_dec(v___y_1990_);
return v_res_1993_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___at___00Std_Http_Body_Stream_close_spec__0(lean_object* v___y_1994_){
_start:
{
lean_object* v___f_1996_; lean_object* v___x_1997_; uint8_t v___x_1998_; lean_object* v___x_1999_; lean_object* v___x_2000_; lean_object* v___x_2001_; lean_object* v___x_2002_; 
lean_inc(v___y_1994_);
v___f_1996_ = lean_alloc_closure((void*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___at___00Std_Http_Body_Stream_close_spec__0___lam__5___boxed), 3, 1);
lean_closure_set(v___f_1996_, 0, v___y_1994_);
v___x_1997_ = lean_unsigned_to_nat(0u);
v___x_1998_ = 0;
v___x_1999_ = lean_st_ref_get(v___y_1994_);
v___x_2000_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2000_, 0, v___x_1999_);
v___x_2001_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2001_, 0, v___x_2000_);
v___x_2002_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_1997_, v___x_1998_, v___x_2001_, v___f_1996_);
return v___x_2002_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___at___00Std_Http_Body_Stream_close_spec__0___boxed(lean_object* v___y_2003_, lean_object* v___y_2004_){
_start:
{
lean_object* v_res_2005_; 
v_res_2005_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___at___00Std_Http_Body_Stream_close_spec__0(v___y_2003_);
lean_dec(v___y_2003_);
return v_res_2005_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_close(lean_object* v_stream_2007_){
_start:
{
lean_object* v___f_2009_; lean_object* v___x_2010_; 
v___f_2009_ = ((lean_object*)(l_Std_Http_Body_Stream_close___closed__0));
v___x_2010_ = l_Std_Mutex_atomically___at___00Std_Http_Body_Stream_tryRecv_spec__2___redArg(v_stream_2007_, v___f_2009_);
return v___x_2010_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_close___boxed(lean_object* v_stream_2011_, lean_object* v___y_2012_){
_start:
{
lean_object* v_res_2013_; 
v_res_2013_ = l_Std_Http_Body_Stream_close(v_stream_2011_);
return v_res_2013_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_closeIfAbandoned___lam__0(uint8_t v___x_2014_, lean_object* v_x_2015_){
_start:
{
if (lean_obj_tag(v_x_2015_) == 0)
{
lean_object* v_a_2017_; lean_object* v___x_2019_; uint8_t v_isShared_2020_; uint8_t v_isSharedCheck_2025_; 
v_a_2017_ = lean_ctor_get(v_x_2015_, 0);
v_isSharedCheck_2025_ = !lean_is_exclusive(v_x_2015_);
if (v_isSharedCheck_2025_ == 0)
{
v___x_2019_ = v_x_2015_;
v_isShared_2020_ = v_isSharedCheck_2025_;
goto v_resetjp_2018_;
}
else
{
lean_inc(v_a_2017_);
lean_dec(v_x_2015_);
v___x_2019_ = lean_box(0);
v_isShared_2020_ = v_isSharedCheck_2025_;
goto v_resetjp_2018_;
}
v_resetjp_2018_:
{
lean_object* v___x_2022_; 
if (v_isShared_2020_ == 0)
{
v___x_2022_ = v___x_2019_;
goto v_reusejp_2021_;
}
else
{
lean_object* v_reuseFailAlloc_2024_; 
v_reuseFailAlloc_2024_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2024_, 0, v_a_2017_);
v___x_2022_ = v_reuseFailAlloc_2024_;
goto v_reusejp_2021_;
}
v_reusejp_2021_:
{
lean_object* v___x_2023_; 
v___x_2023_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2023_, 0, v___x_2022_);
return v___x_2023_;
}
}
}
else
{
lean_object* v___x_2027_; uint8_t v_isShared_2028_; uint8_t v_isSharedCheck_2034_; 
v_isSharedCheck_2034_ = !lean_is_exclusive(v_x_2015_);
if (v_isSharedCheck_2034_ == 0)
{
lean_object* v_unused_2035_; 
v_unused_2035_ = lean_ctor_get(v_x_2015_, 0);
lean_dec(v_unused_2035_);
v___x_2027_ = v_x_2015_;
v_isShared_2028_ = v_isSharedCheck_2034_;
goto v_resetjp_2026_;
}
else
{
lean_dec(v_x_2015_);
v___x_2027_ = lean_box(0);
v_isShared_2028_ = v_isSharedCheck_2034_;
goto v_resetjp_2026_;
}
v_resetjp_2026_:
{
lean_object* v___x_2029_; lean_object* v___x_2031_; 
v___x_2029_ = lean_box(v___x_2014_);
if (v_isShared_2028_ == 0)
{
lean_ctor_set(v___x_2027_, 0, v___x_2029_);
v___x_2031_ = v___x_2027_;
goto v_reusejp_2030_;
}
else
{
lean_object* v_reuseFailAlloc_2033_; 
v_reuseFailAlloc_2033_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2033_, 0, v___x_2029_);
v___x_2031_ = v_reuseFailAlloc_2033_;
goto v_reusejp_2030_;
}
v_reusejp_2030_:
{
lean_object* v___x_2032_; 
v___x_2032_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2032_, 0, v___x_2031_);
return v___x_2032_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_closeIfAbandoned___lam__0___boxed(lean_object* v___x_2036_, lean_object* v_x_2037_, lean_object* v___y_2038_){
_start:
{
uint8_t v___x_1559__boxed_2039_; lean_object* v_res_2040_; 
v___x_1559__boxed_2039_ = lean_unbox(v___x_2036_);
v_res_2040_ = l_Std_Http_Body_Stream_closeIfAbandoned___lam__0(v___x_1559__boxed_2039_, v_x_2037_);
return v_res_2040_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_closeIfAbandoned___lam__1(lean_object* v___y_2044_, lean_object* v_x_2045_){
_start:
{
uint8_t v___y_2048_; 
if (lean_obj_tag(v_x_2045_) == 0)
{
lean_object* v_a_2052_; lean_object* v___x_2054_; uint8_t v_isShared_2055_; uint8_t v_isSharedCheck_2060_; 
v_a_2052_ = lean_ctor_get(v_x_2045_, 0);
v_isSharedCheck_2060_ = !lean_is_exclusive(v_x_2045_);
if (v_isSharedCheck_2060_ == 0)
{
v___x_2054_ = v_x_2045_;
v_isShared_2055_ = v_isSharedCheck_2060_;
goto v_resetjp_2053_;
}
else
{
lean_inc(v_a_2052_);
lean_dec(v_x_2045_);
v___x_2054_ = lean_box(0);
v_isShared_2055_ = v_isSharedCheck_2060_;
goto v_resetjp_2053_;
}
v_resetjp_2053_:
{
lean_object* v___x_2057_; 
if (v_isShared_2055_ == 0)
{
v___x_2057_ = v___x_2054_;
goto v_reusejp_2056_;
}
else
{
lean_object* v_reuseFailAlloc_2059_; 
v_reuseFailAlloc_2059_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2059_, 0, v_a_2052_);
v___x_2057_ = v_reuseFailAlloc_2059_;
goto v_reusejp_2056_;
}
v_reusejp_2056_:
{
lean_object* v___x_2058_; 
v___x_2058_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2058_, 0, v___x_2057_);
return v___x_2058_;
}
}
}
else
{
lean_object* v_a_2061_; uint8_t v_closed_2062_; 
v_a_2061_ = lean_ctor_get(v_x_2045_, 0);
lean_inc(v_a_2061_);
lean_dec_ref_known(v_x_2045_, 1);
v_closed_2062_ = lean_ctor_get_uint8(v_a_2061_, sizeof(void*)*6);
if (v_closed_2062_ == 0)
{
lean_object* v_pendingConsumer_2063_; 
v_pendingConsumer_2063_ = lean_ctor_get(v_a_2061_, 1);
lean_inc(v_pendingConsumer_2063_);
lean_dec(v_a_2061_);
if (lean_obj_tag(v_pendingConsumer_2063_) == 0)
{
lean_object* v___f_2064_; lean_object* v___x_2065_; lean_object* v___x_2066_; lean_object* v___x_2067_; 
v___f_2064_ = ((lean_object*)(l_Std_Http_Body_Stream_closeIfAbandoned___lam__1___closed__0));
v___x_2065_ = lean_unsigned_to_nat(0u);
v___x_2066_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___at___00Std_Http_Body_Stream_close_spec__0(v___y_2044_);
v___x_2067_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_2065_, v_closed_2062_, v___x_2066_, v___f_2064_);
return v___x_2067_;
}
else
{
lean_dec_ref_known(v_pendingConsumer_2063_, 1);
v___y_2048_ = v_closed_2062_;
goto v___jp_2047_;
}
}
else
{
uint8_t v___x_2068_; 
lean_dec(v_a_2061_);
v___x_2068_ = 0;
v___y_2048_ = v___x_2068_;
goto v___jp_2047_;
}
}
v___jp_2047_:
{
lean_object* v___x_2049_; lean_object* v___x_2050_; lean_object* v___x_2051_; 
v___x_2049_ = lean_box(v___y_2048_);
v___x_2050_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2050_, 0, v___x_2049_);
v___x_2051_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2051_, 0, v___x_2050_);
return v___x_2051_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_closeIfAbandoned___lam__1___boxed(lean_object* v___y_2069_, lean_object* v_x_2070_, lean_object* v___y_2071_){
_start:
{
lean_object* v_res_2072_; 
v_res_2072_ = l_Std_Http_Body_Stream_closeIfAbandoned___lam__1(v___y_2069_, v_x_2070_);
lean_dec(v___y_2069_);
return v_res_2072_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_closeIfAbandoned___lam__2(lean_object* v___y_2073_, lean_object* v___f_2074_, lean_object* v_x_2075_){
_start:
{
if (lean_obj_tag(v_x_2075_) == 0)
{
lean_object* v_a_2077_; lean_object* v___x_2079_; uint8_t v_isShared_2080_; uint8_t v_isSharedCheck_2085_; 
lean_dec_ref(v___f_2074_);
v_a_2077_ = lean_ctor_get(v_x_2075_, 0);
v_isSharedCheck_2085_ = !lean_is_exclusive(v_x_2075_);
if (v_isSharedCheck_2085_ == 0)
{
v___x_2079_ = v_x_2075_;
v_isShared_2080_ = v_isSharedCheck_2085_;
goto v_resetjp_2078_;
}
else
{
lean_inc(v_a_2077_);
lean_dec(v_x_2075_);
v___x_2079_ = lean_box(0);
v_isShared_2080_ = v_isSharedCheck_2085_;
goto v_resetjp_2078_;
}
v_resetjp_2078_:
{
lean_object* v___x_2082_; 
if (v_isShared_2080_ == 0)
{
v___x_2082_ = v___x_2079_;
goto v_reusejp_2081_;
}
else
{
lean_object* v_reuseFailAlloc_2084_; 
v_reuseFailAlloc_2084_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2084_, 0, v_a_2077_);
v___x_2082_ = v_reuseFailAlloc_2084_;
goto v_reusejp_2081_;
}
v_reusejp_2081_:
{
lean_object* v___x_2083_; 
v___x_2083_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2083_, 0, v___x_2082_);
return v___x_2083_;
}
}
}
else
{
lean_object* v___x_2087_; uint8_t v_isShared_2088_; uint8_t v_isSharedCheck_2097_; 
v_isSharedCheck_2097_ = !lean_is_exclusive(v_x_2075_);
if (v_isSharedCheck_2097_ == 0)
{
lean_object* v_unused_2098_; 
v_unused_2098_ = lean_ctor_get(v_x_2075_, 0);
lean_dec(v_unused_2098_);
v___x_2087_ = v_x_2075_;
v_isShared_2088_ = v_isSharedCheck_2097_;
goto v_resetjp_2086_;
}
else
{
lean_dec(v_x_2075_);
v___x_2087_ = lean_box(0);
v_isShared_2088_ = v_isSharedCheck_2097_;
goto v_resetjp_2086_;
}
v_resetjp_2086_:
{
lean_object* v___x_2089_; uint8_t v___x_2090_; lean_object* v___x_2091_; lean_object* v___x_2093_; 
v___x_2089_ = lean_unsigned_to_nat(0u);
v___x_2090_ = 0;
v___x_2091_ = lean_st_ref_get(v___y_2073_);
if (v_isShared_2088_ == 0)
{
lean_ctor_set(v___x_2087_, 0, v___x_2091_);
v___x_2093_ = v___x_2087_;
goto v_reusejp_2092_;
}
else
{
lean_object* v_reuseFailAlloc_2096_; 
v_reuseFailAlloc_2096_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2096_, 0, v___x_2091_);
v___x_2093_ = v_reuseFailAlloc_2096_;
goto v_reusejp_2092_;
}
v_reusejp_2092_:
{
lean_object* v___x_2094_; lean_object* v___x_2095_; 
v___x_2094_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2094_, 0, v___x_2093_);
v___x_2095_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_2089_, v___x_2090_, v___x_2094_, v___f_2074_);
return v___x_2095_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_closeIfAbandoned___lam__2___boxed(lean_object* v___y_2099_, lean_object* v___f_2100_, lean_object* v_x_2101_, lean_object* v___y_2102_){
_start:
{
lean_object* v_res_2103_; 
v_res_2103_ = l_Std_Http_Body_Stream_closeIfAbandoned___lam__2(v___y_2099_, v___f_2100_, v_x_2101_);
lean_dec(v___y_2099_);
return v_res_2103_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_closeIfAbandoned___lam__3(lean_object* v___y_2104_){
_start:
{
lean_object* v___f_2106_; lean_object* v___f_2107_; lean_object* v___x_2108_; uint8_t v___x_2109_; lean_object* v___x_2110_; lean_object* v___x_2111_; 
lean_inc_n(v___y_2104_, 2);
v___f_2106_ = lean_alloc_closure((void*)(l_Std_Http_Body_Stream_closeIfAbandoned___lam__1___boxed), 3, 1);
lean_closure_set(v___f_2106_, 0, v___y_2104_);
v___f_2107_ = lean_alloc_closure((void*)(l_Std_Http_Body_Stream_closeIfAbandoned___lam__2___boxed), 4, 2);
lean_closure_set(v___f_2107_, 0, v___y_2104_);
lean_closure_set(v___f_2107_, 1, v___f_2106_);
v___x_2108_ = lean_unsigned_to_nat(0u);
v___x_2109_ = 0;
v___x_2110_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1(v___y_2104_);
v___x_2111_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_2108_, v___x_2109_, v___x_2110_, v___f_2107_);
return v___x_2111_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_closeIfAbandoned___lam__3___boxed(lean_object* v___y_2112_, lean_object* v___y_2113_){
_start:
{
lean_object* v_res_2114_; 
v_res_2114_ = l_Std_Http_Body_Stream_closeIfAbandoned___lam__3(v___y_2112_);
lean_dec(v___y_2112_);
return v_res_2114_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_closeIfAbandoned(lean_object* v_stream_2116_){
_start:
{
lean_object* v___f_2118_; lean_object* v___x_2119_; 
v___f_2118_ = ((lean_object*)(l_Std_Http_Body_Stream_closeIfAbandoned___closed__0));
v___x_2119_ = l_Std_Mutex_atomically___at___00Std_Http_Body_Stream_tryRecv_spec__2___redArg(v_stream_2116_, v___f_2118_);
return v___x_2119_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_closeIfAbandoned___boxed(lean_object* v_stream_2120_, lean_object* v___y_2121_){
_start:
{
lean_object* v_res_2122_; 
v_res_2122_ = l_Std_Http_Body_Stream_closeIfAbandoned(v_stream_2120_);
return v_res_2122_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_closeWithError___lam__0(lean_object* v___y_2123_, lean_object* v_x_2124_){
_start:
{
if (lean_obj_tag(v_x_2124_) == 0)
{
lean_object* v___x_2126_; 
v___x_2126_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2126_, 0, v_x_2124_);
return v___x_2126_;
}
else
{
lean_object* v___x_2127_; 
lean_dec_ref_known(v_x_2124_, 1);
v___x_2127_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___at___00Std_Http_Body_Stream_close_spec__0(v___y_2123_);
return v___x_2127_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_closeWithError___lam__0___boxed(lean_object* v___y_2128_, lean_object* v_x_2129_, lean_object* v___y_2130_){
_start:
{
lean_object* v_res_2131_; 
v_res_2131_ = l_Std_Http_Body_Stream_closeWithError___lam__0(v___y_2128_, v_x_2129_);
lean_dec(v___y_2128_);
return v_res_2131_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_closeWithError___lam__1(lean_object* v_err_2132_, lean_object* v___y_2133_){
_start:
{
lean_object* v___f_2135_; lean_object* v___x_2136_; uint8_t v___x_2137_; lean_object* v___x_2138_; lean_object* v_fst_2140_; lean_object* v_snd_2141_; lean_object* v_pendingProducer_2146_; lean_object* v_pendingConsumer_2147_; lean_object* v_interestWaiter_2148_; uint8_t v_closed_2149_; lean_object* v_knownSize_2150_; lean_object* v_pendingIncompleteChunk_2151_; lean_object* v_closeError_2152_; lean_object* v___x_2153_; 
lean_inc(v___y_2133_);
v___f_2135_ = lean_alloc_closure((void*)(l_Std_Http_Body_Stream_closeWithError___lam__0___boxed), 3, 1);
lean_closure_set(v___f_2135_, 0, v___y_2133_);
v___x_2136_ = lean_unsigned_to_nat(0u);
v___x_2137_ = 0;
v___x_2138_ = lean_st_ref_take(v___y_2133_);
v_pendingProducer_2146_ = lean_ctor_get(v___x_2138_, 0);
lean_inc(v_pendingProducer_2146_);
v_pendingConsumer_2147_ = lean_ctor_get(v___x_2138_, 1);
lean_inc(v_pendingConsumer_2147_);
v_interestWaiter_2148_ = lean_ctor_get(v___x_2138_, 2);
lean_inc(v_interestWaiter_2148_);
v_closed_2149_ = lean_ctor_get_uint8(v___x_2138_, sizeof(void*)*6);
v_knownSize_2150_ = lean_ctor_get(v___x_2138_, 3);
lean_inc(v_knownSize_2150_);
v_pendingIncompleteChunk_2151_ = lean_ctor_get(v___x_2138_, 4);
lean_inc(v_pendingIncompleteChunk_2151_);
v_closeError_2152_ = lean_ctor_get(v___x_2138_, 5);
lean_inc(v_closeError_2152_);
v___x_2153_ = lean_box(0);
if (lean_obj_tag(v_closeError_2152_) == 0)
{
lean_object* v___x_2155_; uint8_t v_isShared_2156_; uint8_t v_isSharedCheck_2161_; 
v_isSharedCheck_2161_ = !lean_is_exclusive(v___x_2138_);
if (v_isSharedCheck_2161_ == 0)
{
lean_object* v_unused_2162_; lean_object* v_unused_2163_; lean_object* v_unused_2164_; lean_object* v_unused_2165_; lean_object* v_unused_2166_; lean_object* v_unused_2167_; 
v_unused_2162_ = lean_ctor_get(v___x_2138_, 5);
lean_dec(v_unused_2162_);
v_unused_2163_ = lean_ctor_get(v___x_2138_, 4);
lean_dec(v_unused_2163_);
v_unused_2164_ = lean_ctor_get(v___x_2138_, 3);
lean_dec(v_unused_2164_);
v_unused_2165_ = lean_ctor_get(v___x_2138_, 2);
lean_dec(v_unused_2165_);
v_unused_2166_ = lean_ctor_get(v___x_2138_, 1);
lean_dec(v_unused_2166_);
v_unused_2167_ = lean_ctor_get(v___x_2138_, 0);
lean_dec(v_unused_2167_);
v___x_2155_ = v___x_2138_;
v_isShared_2156_ = v_isSharedCheck_2161_;
goto v_resetjp_2154_;
}
else
{
lean_dec(v___x_2138_);
v___x_2155_ = lean_box(0);
v_isShared_2156_ = v_isSharedCheck_2161_;
goto v_resetjp_2154_;
}
v_resetjp_2154_:
{
lean_object* v___x_2157_; lean_object* v___x_2159_; 
v___x_2157_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2157_, 0, v_err_2132_);
if (v_isShared_2156_ == 0)
{
lean_ctor_set(v___x_2155_, 5, v___x_2157_);
v___x_2159_ = v___x_2155_;
goto v_reusejp_2158_;
}
else
{
lean_object* v_reuseFailAlloc_2160_; 
v_reuseFailAlloc_2160_ = lean_alloc_ctor(0, 6, 1);
lean_ctor_set(v_reuseFailAlloc_2160_, 0, v_pendingProducer_2146_);
lean_ctor_set(v_reuseFailAlloc_2160_, 1, v_pendingConsumer_2147_);
lean_ctor_set(v_reuseFailAlloc_2160_, 2, v_interestWaiter_2148_);
lean_ctor_set(v_reuseFailAlloc_2160_, 3, v_knownSize_2150_);
lean_ctor_set(v_reuseFailAlloc_2160_, 4, v_pendingIncompleteChunk_2151_);
lean_ctor_set(v_reuseFailAlloc_2160_, 5, v___x_2157_);
lean_ctor_set_uint8(v_reuseFailAlloc_2160_, sizeof(void*)*6, v_closed_2149_);
v___x_2159_ = v_reuseFailAlloc_2160_;
goto v_reusejp_2158_;
}
v_reusejp_2158_:
{
v_fst_2140_ = v___x_2153_;
v_snd_2141_ = v___x_2159_;
goto v___jp_2139_;
}
}
}
else
{
lean_dec_ref_known(v_closeError_2152_, 1);
lean_dec(v_pendingIncompleteChunk_2151_);
lean_dec(v_knownSize_2150_);
lean_dec(v_interestWaiter_2148_);
lean_dec(v_pendingConsumer_2147_);
lean_dec(v_pendingProducer_2146_);
lean_dec(v_err_2132_);
v_fst_2140_ = v___x_2153_;
v_snd_2141_ = v___x_2138_;
goto v___jp_2139_;
}
v___jp_2139_:
{
lean_object* v___x_2142_; lean_object* v___x_2143_; lean_object* v___x_2144_; lean_object* v___x_2145_; 
v___x_2142_ = lean_st_ref_put(v___y_2133_, v_snd_2141_);
v___x_2143_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2143_, 0, v_fst_2140_);
v___x_2144_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2144_, 0, v___x_2143_);
v___x_2145_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_2136_, v___x_2137_, v___x_2144_, v___f_2135_);
return v___x_2145_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_closeWithError___lam__1___boxed(lean_object* v_err_2168_, lean_object* v___y_2169_, lean_object* v___y_2170_){
_start:
{
lean_object* v_res_2171_; 
v_res_2171_ = l_Std_Http_Body_Stream_closeWithError___lam__1(v_err_2168_, v___y_2169_);
lean_dec(v___y_2169_);
return v_res_2171_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_closeWithError(lean_object* v_stream_2172_, lean_object* v_err_2173_){
_start:
{
lean_object* v___f_2175_; lean_object* v___x_2176_; 
v___f_2175_ = lean_alloc_closure((void*)(l_Std_Http_Body_Stream_closeWithError___lam__1___boxed), 3, 1);
lean_closure_set(v___f_2175_, 0, v_err_2173_);
v___x_2176_ = l_Std_Mutex_atomically___at___00Std_Http_Body_Stream_tryRecv_spec__2___redArg(v_stream_2172_, v___f_2175_);
return v___x_2176_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_closeWithError___boxed(lean_object* v_stream_2177_, lean_object* v_err_2178_, lean_object* v___y_2179_){
_start:
{
lean_object* v_res_2180_; 
v_res_2180_ = l_Std_Http_Body_Stream_closeWithError(v_stream_2177_, v_err_2178_);
return v_res_2180_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_isClosed___lam__0(lean_object* v_____do__lift_2181_, lean_object* v___y_2182_){
_start:
{
uint8_t v_closed_2184_; lean_object* v___x_2185_; lean_object* v___x_2186_; lean_object* v___x_2187_; 
v_closed_2184_ = lean_ctor_get_uint8(v_____do__lift_2181_, sizeof(void*)*6);
v___x_2185_ = lean_box(v_closed_2184_);
v___x_2186_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2186_, 0, v___x_2185_);
v___x_2187_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2187_, 0, v___x_2186_);
return v___x_2187_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_isClosed___lam__0___boxed(lean_object* v_____do__lift_2188_, lean_object* v___y_2189_, lean_object* v___y_2190_){
_start:
{
lean_object* v_res_2191_; 
v_res_2191_ = l_Std_Http_Body_Stream_isClosed___lam__0(v_____do__lift_2188_, v___y_2189_);
lean_dec(v___y_2189_);
lean_dec_ref(v_____do__lift_2188_);
return v_res_2191_;
}
}
static lean_object* _init_l_Std_Http_Body_Stream_isClosed___closed__1(void){
_start:
{
lean_object* v___x_2193_; 
v___x_2193_ = l_Std_Async_EAsync_instMonad___redArg();
return v___x_2193_;
}
}
static lean_object* _init_l_Std_Http_Body_Stream_isClosed___closed__2(void){
_start:
{
lean_object* v___x_2194_; 
v___x_2194_ = l_Std_Async_EAsync_instMonadLiftBaseAsync___redArg();
return v___x_2194_;
}
}
static lean_object* _init_l_Std_Http_Body_Stream_isClosed___closed__6(void){
_start:
{
lean_object* v___x_2200_; lean_object* v___f_2201_; lean_object* v___f_2202_; 
v___x_2200_ = lean_obj_once(&l_Std_Http_Body_Stream_isClosed___closed__2, &l_Std_Http_Body_Stream_isClosed___closed__2_once, _init_l_Std_Http_Body_Stream_isClosed___closed__2);
v___f_2201_ = ((lean_object*)(l_Std_Http_Body_Stream_isClosed___closed__5));
v___f_2202_ = lean_alloc_closure((void*)(l_instMonadLiftTOfMonadLift___redArg___lam__0), 4, 2);
lean_closure_set(v___f_2202_, 0, v___f_2201_);
lean_closure_set(v___f_2202_, 1, v___x_2200_);
return v___f_2202_;
}
}
static lean_object* _init_l_Std_Http_Body_Stream_isClosed___closed__11(void){
_start:
{
lean_object* v___x_2211_; lean_object* v___f_2212_; lean_object* v___f_2213_; 
v___x_2211_ = lean_obj_once(&l_Std_Http_Body_Stream_isClosed___closed__2, &l_Std_Http_Body_Stream_isClosed___closed__2_once, _init_l_Std_Http_Body_Stream_isClosed___closed__2);
v___f_2212_ = ((lean_object*)(l_Std_Http_Body_Stream_isClosed___closed__10));
v___f_2213_ = lean_alloc_closure((void*)(l_instMonadLiftTOfMonadLift___redArg___lam__0), 4, 2);
lean_closure_set(v___f_2213_, 0, v___f_2212_);
lean_closure_set(v___f_2213_, 1, v___x_2211_);
return v___f_2213_;
}
}
static lean_object* _init_l_Std_Http_Body_Stream_isClosed___closed__12(void){
_start:
{
lean_object* v___f_2214_; lean_object* v___x_2215_; 
v___f_2214_ = lean_obj_once(&l_Std_Http_Body_Stream_isClosed___closed__11, &l_Std_Http_Body_Stream_isClosed___closed__11_once, _init_l_Std_Http_Body_Stream_isClosed___closed__11);
v___x_2215_ = lean_alloc_closure((void*)(l_StateRefT_x27_get___boxed), 5, 4);
lean_closure_set(v___x_2215_, 0, lean_box(0));
lean_closure_set(v___x_2215_, 1, lean_box(0));
lean_closure_set(v___x_2215_, 2, lean_box(0));
lean_closure_set(v___x_2215_, 3, v___f_2214_);
return v___x_2215_;
}
}
static lean_object* _init_l_Std_Http_Body_Stream_isClosed___closed__13(void){
_start:
{
lean_object* v___f_2216_; lean_object* v___x_2217_; lean_object* v___x_2218_; lean_object* v___x_2219_; 
v___f_2216_ = ((lean_object*)(l_Std_Http_Body_Stream_isClosed___closed__0));
v___x_2217_ = lean_obj_once(&l_Std_Http_Body_Stream_isClosed___closed__12, &l_Std_Http_Body_Stream_isClosed___closed__12_once, _init_l_Std_Http_Body_Stream_isClosed___closed__12);
v___x_2218_ = lean_obj_once(&l_Std_Http_Body_Stream_isClosed___closed__1, &l_Std_Http_Body_Stream_isClosed___closed__1_once, _init_l_Std_Http_Body_Stream_isClosed___closed__1);
v___x_2219_ = lean_alloc_closure((void*)(l_ReaderT_bind___boxed), 8, 7);
lean_closure_set(v___x_2219_, 0, lean_box(0));
lean_closure_set(v___x_2219_, 1, lean_box(0));
lean_closure_set(v___x_2219_, 2, v___x_2218_);
lean_closure_set(v___x_2219_, 3, lean_box(0));
lean_closure_set(v___x_2219_, 4, lean_box(0));
lean_closure_set(v___x_2219_, 5, v___x_2217_);
lean_closure_set(v___x_2219_, 6, v___f_2216_);
return v___x_2219_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_isClosed(lean_object* v_stream_2220_){
_start:
{
lean_object* v___x_2222_; lean_object* v___f_2223_; lean_object* v___f_2224_; lean_object* v___x_2225_; lean_object* v___x_309__overap_2226_; lean_object* v___x_2227_; 
v___x_2222_ = lean_obj_once(&l_Std_Http_Body_Stream_isClosed___closed__1, &l_Std_Http_Body_Stream_isClosed___closed__1_once, _init_l_Std_Http_Body_Stream_isClosed___closed__1);
v___f_2223_ = lean_obj_once(&l_Std_Http_Body_Stream_isClosed___closed__6, &l_Std_Http_Body_Stream_isClosed___closed__6_once, _init_l_Std_Http_Body_Stream_isClosed___closed__6);
v___f_2224_ = ((lean_object*)(l_Std_Http_Body_Stream_isClosed___closed__7));
v___x_2225_ = lean_obj_once(&l_Std_Http_Body_Stream_isClosed___closed__13, &l_Std_Http_Body_Stream_isClosed___closed__13_once, _init_l_Std_Http_Body_Stream_isClosed___closed__13);
v___x_309__overap_2226_ = l_Std_Mutex_atomically___redArg(v___x_2222_, v___f_2223_, v___f_2224_, v_stream_2220_, v___x_2225_);
v___x_2227_ = lean_apply_1(v___x_309__overap_2226_, lean_box(0));
return v___x_2227_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_isClosed___boxed(lean_object* v_stream_2228_, lean_object* v___y_2229_){
_start:
{
lean_object* v_res_2230_; 
v_res_2230_ = l_Std_Http_Body_Stream_isClosed(v_stream_2228_);
return v_res_2230_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_getKnownSize___lam__0(lean_object* v_____do__lift_2231_, lean_object* v___y_2232_){
_start:
{
lean_object* v_knownSize_2234_; lean_object* v___x_2235_; lean_object* v___x_2236_; 
v_knownSize_2234_ = lean_ctor_get(v_____do__lift_2231_, 3);
lean_inc(v_knownSize_2234_);
v___x_2235_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2235_, 0, v_knownSize_2234_);
v___x_2236_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2236_, 0, v___x_2235_);
return v___x_2236_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_getKnownSize___lam__0___boxed(lean_object* v_____do__lift_2237_, lean_object* v___y_2238_, lean_object* v___y_2239_){
_start:
{
lean_object* v_res_2240_; 
v_res_2240_ = l_Std_Http_Body_Stream_getKnownSize___lam__0(v_____do__lift_2237_, v___y_2238_);
lean_dec(v___y_2238_);
lean_dec_ref(v_____do__lift_2237_);
return v_res_2240_;
}
}
static lean_object* _init_l_Std_Http_Body_Stream_getKnownSize___closed__1(void){
_start:
{
lean_object* v___f_2242_; lean_object* v___x_2243_; lean_object* v___x_2244_; lean_object* v___x_2245_; 
v___f_2242_ = ((lean_object*)(l_Std_Http_Body_Stream_getKnownSize___closed__0));
v___x_2243_ = lean_obj_once(&l_Std_Http_Body_Stream_isClosed___closed__12, &l_Std_Http_Body_Stream_isClosed___closed__12_once, _init_l_Std_Http_Body_Stream_isClosed___closed__12);
v___x_2244_ = lean_obj_once(&l_Std_Http_Body_Stream_isClosed___closed__1, &l_Std_Http_Body_Stream_isClosed___closed__1_once, _init_l_Std_Http_Body_Stream_isClosed___closed__1);
v___x_2245_ = lean_alloc_closure((void*)(l_ReaderT_bind___boxed), 8, 7);
lean_closure_set(v___x_2245_, 0, lean_box(0));
lean_closure_set(v___x_2245_, 1, lean_box(0));
lean_closure_set(v___x_2245_, 2, v___x_2244_);
lean_closure_set(v___x_2245_, 3, lean_box(0));
lean_closure_set(v___x_2245_, 4, lean_box(0));
lean_closure_set(v___x_2245_, 5, v___x_2243_);
lean_closure_set(v___x_2245_, 6, v___f_2242_);
return v___x_2245_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_getKnownSize(lean_object* v_stream_2246_){
_start:
{
lean_object* v___x_2248_; lean_object* v___f_2249_; lean_object* v___f_2250_; lean_object* v___x_2251_; lean_object* v___x_309__overap_2252_; lean_object* v___x_2253_; 
v___x_2248_ = lean_obj_once(&l_Std_Http_Body_Stream_isClosed___closed__1, &l_Std_Http_Body_Stream_isClosed___closed__1_once, _init_l_Std_Http_Body_Stream_isClosed___closed__1);
v___f_2249_ = lean_obj_once(&l_Std_Http_Body_Stream_isClosed___closed__6, &l_Std_Http_Body_Stream_isClosed___closed__6_once, _init_l_Std_Http_Body_Stream_isClosed___closed__6);
v___f_2250_ = ((lean_object*)(l_Std_Http_Body_Stream_isClosed___closed__7));
v___x_2251_ = lean_obj_once(&l_Std_Http_Body_Stream_getKnownSize___closed__1, &l_Std_Http_Body_Stream_getKnownSize___closed__1_once, _init_l_Std_Http_Body_Stream_getKnownSize___closed__1);
v___x_309__overap_2252_ = l_Std_Mutex_atomically___redArg(v___x_2248_, v___f_2249_, v___f_2250_, v_stream_2246_, v___x_2251_);
v___x_2253_ = lean_apply_1(v___x_309__overap_2252_, lean_box(0));
return v___x_2253_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_getKnownSize___boxed(lean_object* v_stream_2254_, lean_object* v___y_2255_){
_start:
{
lean_object* v_res_2256_; 
v_res_2256_ = l_Std_Http_Body_Stream_getKnownSize(v_stream_2254_);
return v_res_2256_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_setKnownSize___lam__0(lean_object* v_size_2257_, lean_object* v___y_2258_){
_start:
{
lean_object* v___x_2260_; lean_object* v_pendingProducer_2261_; lean_object* v_pendingConsumer_2262_; lean_object* v_interestWaiter_2263_; uint8_t v_closed_2264_; lean_object* v_pendingIncompleteChunk_2265_; lean_object* v_closeError_2266_; lean_object* v___x_2268_; uint8_t v_isShared_2269_; uint8_t v_isSharedCheck_2275_; 
v___x_2260_ = lean_st_ref_take(v___y_2258_);
v_pendingProducer_2261_ = lean_ctor_get(v___x_2260_, 0);
v_pendingConsumer_2262_ = lean_ctor_get(v___x_2260_, 1);
v_interestWaiter_2263_ = lean_ctor_get(v___x_2260_, 2);
v_closed_2264_ = lean_ctor_get_uint8(v___x_2260_, sizeof(void*)*6);
v_pendingIncompleteChunk_2265_ = lean_ctor_get(v___x_2260_, 4);
v_closeError_2266_ = lean_ctor_get(v___x_2260_, 5);
v_isSharedCheck_2275_ = !lean_is_exclusive(v___x_2260_);
if (v_isSharedCheck_2275_ == 0)
{
lean_object* v_unused_2276_; 
v_unused_2276_ = lean_ctor_get(v___x_2260_, 3);
lean_dec(v_unused_2276_);
v___x_2268_ = v___x_2260_;
v_isShared_2269_ = v_isSharedCheck_2275_;
goto v_resetjp_2267_;
}
else
{
lean_inc(v_closeError_2266_);
lean_inc(v_pendingIncompleteChunk_2265_);
lean_inc(v_interestWaiter_2263_);
lean_inc(v_pendingConsumer_2262_);
lean_inc(v_pendingProducer_2261_);
lean_dec(v___x_2260_);
v___x_2268_ = lean_box(0);
v_isShared_2269_ = v_isSharedCheck_2275_;
goto v_resetjp_2267_;
}
v_resetjp_2267_:
{
lean_object* v___x_2271_; 
if (v_isShared_2269_ == 0)
{
lean_ctor_set(v___x_2268_, 3, v_size_2257_);
v___x_2271_ = v___x_2268_;
goto v_reusejp_2270_;
}
else
{
lean_object* v_reuseFailAlloc_2274_; 
v_reuseFailAlloc_2274_ = lean_alloc_ctor(0, 6, 1);
lean_ctor_set(v_reuseFailAlloc_2274_, 0, v_pendingProducer_2261_);
lean_ctor_set(v_reuseFailAlloc_2274_, 1, v_pendingConsumer_2262_);
lean_ctor_set(v_reuseFailAlloc_2274_, 2, v_interestWaiter_2263_);
lean_ctor_set(v_reuseFailAlloc_2274_, 3, v_size_2257_);
lean_ctor_set(v_reuseFailAlloc_2274_, 4, v_pendingIncompleteChunk_2265_);
lean_ctor_set(v_reuseFailAlloc_2274_, 5, v_closeError_2266_);
lean_ctor_set_uint8(v_reuseFailAlloc_2274_, sizeof(void*)*6, v_closed_2264_);
v___x_2271_ = v_reuseFailAlloc_2274_;
goto v_reusejp_2270_;
}
v_reusejp_2270_:
{
lean_object* v___x_2272_; lean_object* v___x_2273_; 
v___x_2272_ = lean_st_ref_put(v___y_2258_, v___x_2271_);
v___x_2273_ = ((lean_object*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__0___closed__1));
return v___x_2273_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_setKnownSize___lam__0___boxed(lean_object* v_size_2277_, lean_object* v___y_2278_, lean_object* v___y_2279_){
_start:
{
lean_object* v_res_2280_; 
v_res_2280_ = l_Std_Http_Body_Stream_setKnownSize___lam__0(v_size_2277_, v___y_2278_);
lean_dec(v___y_2278_);
return v_res_2280_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_setKnownSize(lean_object* v_stream_2281_, lean_object* v_size_2282_){
_start:
{
lean_object* v___f_2284_; lean_object* v___x_2285_; lean_object* v___f_2286_; lean_object* v___f_2287_; lean_object* v___x_209__overap_2288_; lean_object* v___x_2289_; 
v___f_2284_ = lean_alloc_closure((void*)(l_Std_Http_Body_Stream_setKnownSize___lam__0___boxed), 3, 1);
lean_closure_set(v___f_2284_, 0, v_size_2282_);
v___x_2285_ = lean_obj_once(&l_Std_Http_Body_Stream_isClosed___closed__1, &l_Std_Http_Body_Stream_isClosed___closed__1_once, _init_l_Std_Http_Body_Stream_isClosed___closed__1);
v___f_2286_ = lean_obj_once(&l_Std_Http_Body_Stream_isClosed___closed__6, &l_Std_Http_Body_Stream_isClosed___closed__6_once, _init_l_Std_Http_Body_Stream_isClosed___closed__6);
v___f_2287_ = ((lean_object*)(l_Std_Http_Body_Stream_isClosed___closed__7));
v___x_209__overap_2288_ = l_Std_Mutex_atomically___redArg(v___x_2285_, v___f_2286_, v___f_2287_, v_stream_2281_, v___f_2284_);
v___x_2289_ = lean_apply_1(v___x_209__overap_2288_, lean_box(0));
return v___x_2289_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_setKnownSize___boxed(lean_object* v_stream_2290_, lean_object* v_size_2291_, lean_object* v___y_2292_){
_start:
{
lean_object* v_res_2293_; 
v_res_2293_ = l_Std_Http_Body_Stream_setKnownSize(v_stream_2290_, v_size_2291_);
return v_res_2293_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_signalInterest___at___00Std_Http_Body_Stream_recvSelector_spec__0___lam__0(lean_object* v_pendingProducer_2294_, lean_object* v_pendingConsumer_2295_, uint8_t v_closed_2296_, lean_object* v_knownSize_2297_, lean_object* v_pendingIncompleteChunk_2298_, lean_object* v_closeError_2299_, lean_object* v___y_2300_, lean_object* v___x_2301_, lean_object* v_x_2302_){
_start:
{
if (lean_obj_tag(v_x_2302_) == 0)
{
lean_object* v___x_2304_; 
lean_dec(v_closeError_2299_);
lean_dec(v_pendingIncompleteChunk_2298_);
lean_dec(v_knownSize_2297_);
lean_dec(v_pendingConsumer_2295_);
lean_dec(v_pendingProducer_2294_);
v___x_2304_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2304_, 0, v_x_2302_);
return v___x_2304_;
}
else
{
lean_object* v___x_2306_; uint8_t v_isShared_2307_; uint8_t v_isSharedCheck_2315_; 
v_isSharedCheck_2315_ = !lean_is_exclusive(v_x_2302_);
if (v_isSharedCheck_2315_ == 0)
{
lean_object* v_unused_2316_; 
v_unused_2316_ = lean_ctor_get(v_x_2302_, 0);
lean_dec(v_unused_2316_);
v___x_2306_ = v_x_2302_;
v_isShared_2307_ = v_isSharedCheck_2315_;
goto v_resetjp_2305_;
}
else
{
lean_dec(v_x_2302_);
v___x_2306_ = lean_box(0);
v_isShared_2307_ = v_isSharedCheck_2315_;
goto v_resetjp_2305_;
}
v_resetjp_2305_:
{
lean_object* v___x_2308_; lean_object* v___x_2309_; lean_object* v___x_2310_; lean_object* v___x_2312_; 
v___x_2308_ = lean_box(0);
v___x_2309_ = lean_alloc_ctor(0, 6, 1);
lean_ctor_set(v___x_2309_, 0, v_pendingProducer_2294_);
lean_ctor_set(v___x_2309_, 1, v_pendingConsumer_2295_);
lean_ctor_set(v___x_2309_, 2, v___x_2308_);
lean_ctor_set(v___x_2309_, 3, v_knownSize_2297_);
lean_ctor_set(v___x_2309_, 4, v_pendingIncompleteChunk_2298_);
lean_ctor_set(v___x_2309_, 5, v_closeError_2299_);
lean_ctor_set_uint8(v___x_2309_, sizeof(void*)*6, v_closed_2296_);
v___x_2310_ = lean_st_ref_swap(v___y_2300_, v___x_2309_);
lean_dec(v___x_2310_);
if (v_isShared_2307_ == 0)
{
lean_ctor_set(v___x_2306_, 0, v___x_2301_);
v___x_2312_ = v___x_2306_;
goto v_reusejp_2311_;
}
else
{
lean_object* v_reuseFailAlloc_2314_; 
v_reuseFailAlloc_2314_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2314_, 0, v___x_2301_);
v___x_2312_ = v_reuseFailAlloc_2314_;
goto v_reusejp_2311_;
}
v_reusejp_2311_:
{
lean_object* v___x_2313_; 
v___x_2313_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2313_, 0, v___x_2312_);
return v___x_2313_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_signalInterest___at___00Std_Http_Body_Stream_recvSelector_spec__0___lam__0___boxed(lean_object* v_pendingProducer_2317_, lean_object* v_pendingConsumer_2318_, lean_object* v_closed_2319_, lean_object* v_knownSize_2320_, lean_object* v_pendingIncompleteChunk_2321_, lean_object* v_closeError_2322_, lean_object* v___y_2323_, lean_object* v___x_2324_, lean_object* v_x_2325_, lean_object* v___y_2326_){
_start:
{
uint8_t v_closed_boxed_2327_; lean_object* v_res_2328_; 
v_closed_boxed_2327_ = lean_unbox(v_closed_2319_);
v_res_2328_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_signalInterest___at___00Std_Http_Body_Stream_recvSelector_spec__0___lam__0(v_pendingProducer_2317_, v_pendingConsumer_2318_, v_closed_boxed_2327_, v_knownSize_2320_, v_pendingIncompleteChunk_2321_, v_closeError_2322_, v___y_2323_, v___x_2324_, v_x_2325_);
lean_dec(v___y_2323_);
return v_res_2328_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_signalInterest___at___00Std_Http_Body_Stream_recvSelector_spec__0___lam__1(lean_object* v___y_2329_, lean_object* v_x_2330_){
_start:
{
if (lean_obj_tag(v_x_2330_) == 0)
{
lean_object* v_a_2332_; lean_object* v___x_2334_; uint8_t v_isShared_2335_; uint8_t v_isSharedCheck_2340_; 
v_a_2332_ = lean_ctor_get(v_x_2330_, 0);
v_isSharedCheck_2340_ = !lean_is_exclusive(v_x_2330_);
if (v_isSharedCheck_2340_ == 0)
{
v___x_2334_ = v_x_2330_;
v_isShared_2335_ = v_isSharedCheck_2340_;
goto v_resetjp_2333_;
}
else
{
lean_inc(v_a_2332_);
lean_dec(v_x_2330_);
v___x_2334_ = lean_box(0);
v_isShared_2335_ = v_isSharedCheck_2340_;
goto v_resetjp_2333_;
}
v_resetjp_2333_:
{
lean_object* v___x_2337_; 
if (v_isShared_2335_ == 0)
{
v___x_2337_ = v___x_2334_;
goto v_reusejp_2336_;
}
else
{
lean_object* v_reuseFailAlloc_2339_; 
v_reuseFailAlloc_2339_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2339_, 0, v_a_2332_);
v___x_2337_ = v_reuseFailAlloc_2339_;
goto v_reusejp_2336_;
}
v_reusejp_2336_:
{
lean_object* v___x_2338_; 
v___x_2338_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2338_, 0, v___x_2337_);
return v___x_2338_;
}
}
}
else
{
lean_object* v_a_2341_; lean_object* v_interestWaiter_2342_; 
v_a_2341_ = lean_ctor_get(v_x_2330_, 0);
lean_inc(v_a_2341_);
lean_dec_ref_known(v_x_2330_, 1);
v_interestWaiter_2342_ = lean_ctor_get(v_a_2341_, 2);
lean_inc(v_interestWaiter_2342_);
if (lean_obj_tag(v_interestWaiter_2342_) == 1)
{
lean_object* v_pendingProducer_2343_; lean_object* v_pendingConsumer_2344_; uint8_t v_closed_2345_; lean_object* v_knownSize_2346_; lean_object* v_pendingIncompleteChunk_2347_; lean_object* v_closeError_2348_; lean_object* v_val_2349_; uint8_t v___x_2350_; lean_object* v___x_2351_; lean_object* v___x_2352_; lean_object* v___f_2353_; lean_object* v___x_2354_; uint8_t v___x_2355_; uint8_t v___x_2356_; lean_object* v___x_2357_; lean_object* v___x_2358_; 
v_pendingProducer_2343_ = lean_ctor_get(v_a_2341_, 0);
lean_inc(v_pendingProducer_2343_);
v_pendingConsumer_2344_ = lean_ctor_get(v_a_2341_, 1);
lean_inc(v_pendingConsumer_2344_);
v_closed_2345_ = lean_ctor_get_uint8(v_a_2341_, sizeof(void*)*6);
v_knownSize_2346_ = lean_ctor_get(v_a_2341_, 3);
lean_inc(v_knownSize_2346_);
v_pendingIncompleteChunk_2347_ = lean_ctor_get(v_a_2341_, 4);
lean_inc(v_pendingIncompleteChunk_2347_);
v_closeError_2348_ = lean_ctor_get(v_a_2341_, 5);
lean_inc(v_closeError_2348_);
lean_dec(v_a_2341_);
v_val_2349_ = lean_ctor_get(v_interestWaiter_2342_, 0);
lean_inc(v_val_2349_);
lean_dec_ref_known(v_interestWaiter_2342_, 1);
v___x_2350_ = 1;
v___x_2351_ = lean_box(0);
v___x_2352_ = lean_box(v_closed_2345_);
lean_inc(v___y_2329_);
v___f_2353_ = lean_alloc_closure((void*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_signalInterest___at___00Std_Http_Body_Stream_recvSelector_spec__0___lam__0___boxed), 10, 8);
lean_closure_set(v___f_2353_, 0, v_pendingProducer_2343_);
lean_closure_set(v___f_2353_, 1, v_pendingConsumer_2344_);
lean_closure_set(v___f_2353_, 2, v___x_2352_);
lean_closure_set(v___f_2353_, 3, v_knownSize_2346_);
lean_closure_set(v___f_2353_, 4, v_pendingIncompleteChunk_2347_);
lean_closure_set(v___f_2353_, 5, v_closeError_2348_);
lean_closure_set(v___f_2353_, 6, v___y_2329_);
lean_closure_set(v___f_2353_, 7, v___x_2351_);
v___x_2354_ = lean_unsigned_to_nat(0u);
v___x_2355_ = 0;
v___x_2356_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_resolveInterestWaiter(v_val_2349_, v___x_2350_);
lean_dec(v_val_2349_);
v___x_2357_ = ((lean_object*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__0___closed__1));
v___x_2358_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_2354_, v___x_2355_, v___x_2357_, v___f_2353_);
return v___x_2358_;
}
else
{
lean_object* v___x_2359_; 
lean_dec(v_interestWaiter_2342_);
lean_dec(v_a_2341_);
v___x_2359_ = ((lean_object*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__0___closed__1));
return v___x_2359_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_signalInterest___at___00Std_Http_Body_Stream_recvSelector_spec__0___lam__1___boxed(lean_object* v___y_2360_, lean_object* v_x_2361_, lean_object* v___y_2362_){
_start:
{
lean_object* v_res_2363_; 
v_res_2363_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_signalInterest___at___00Std_Http_Body_Stream_recvSelector_spec__0___lam__1(v___y_2360_, v_x_2361_);
lean_dec(v___y_2360_);
return v_res_2363_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_signalInterest___at___00Std_Http_Body_Stream_recvSelector_spec__0(lean_object* v___y_2364_){
_start:
{
lean_object* v___f_2366_; lean_object* v___x_2367_; uint8_t v___x_2368_; lean_object* v___x_2369_; lean_object* v___x_2370_; lean_object* v___x_2371_; lean_object* v___x_2372_; 
lean_inc(v___y_2364_);
v___f_2366_ = lean_alloc_closure((void*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_signalInterest___at___00Std_Http_Body_Stream_recvSelector_spec__0___lam__1___boxed), 3, 1);
lean_closure_set(v___f_2366_, 0, v___y_2364_);
v___x_2367_ = lean_unsigned_to_nat(0u);
v___x_2368_ = 0;
v___x_2369_ = lean_st_ref_get(v___y_2364_);
v___x_2370_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2370_, 0, v___x_2369_);
v___x_2371_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2371_, 0, v___x_2370_);
v___x_2372_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_2367_, v___x_2368_, v___x_2371_, v___f_2366_);
return v___x_2372_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_signalInterest___at___00Std_Http_Body_Stream_recvSelector_spec__0___boxed(lean_object* v___y_2373_, lean_object* v___y_2374_){
_start:
{
lean_object* v_res_2375_; 
v_res_2375_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_signalInterest___at___00Std_Http_Body_Stream_recvSelector_spec__0(v___y_2373_);
lean_dec(v___y_2373_);
return v_res_2375_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Waiter_race___at___00Std_Http_Body_Stream_recvSelector_spec__1___lam__0(lean_object* v_promise_2376_, lean_object* v_x_2377_){
_start:
{
if (lean_obj_tag(v_x_2377_) == 0)
{
lean_object* v_a_2379_; lean_object* v___x_2381_; uint8_t v_isShared_2382_; uint8_t v_isSharedCheck_2387_; 
v_a_2379_ = lean_ctor_get(v_x_2377_, 0);
v_isSharedCheck_2387_ = !lean_is_exclusive(v_x_2377_);
if (v_isSharedCheck_2387_ == 0)
{
v___x_2381_ = v_x_2377_;
v_isShared_2382_ = v_isSharedCheck_2387_;
goto v_resetjp_2380_;
}
else
{
lean_inc(v_a_2379_);
lean_dec(v_x_2377_);
v___x_2381_ = lean_box(0);
v_isShared_2382_ = v_isSharedCheck_2387_;
goto v_resetjp_2380_;
}
v_resetjp_2380_:
{
lean_object* v___x_2384_; 
if (v_isShared_2382_ == 0)
{
v___x_2384_ = v___x_2381_;
goto v_reusejp_2383_;
}
else
{
lean_object* v_reuseFailAlloc_2386_; 
v_reuseFailAlloc_2386_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2386_, 0, v_a_2379_);
v___x_2384_ = v_reuseFailAlloc_2386_;
goto v_reusejp_2383_;
}
v_reusejp_2383_:
{
lean_object* v___x_2385_; 
v___x_2385_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2385_, 0, v___x_2384_);
return v___x_2385_;
}
}
}
else
{
lean_object* v_a_2388_; lean_object* v___x_2390_; uint8_t v_isShared_2391_; uint8_t v_isSharedCheck_2397_; 
v_a_2388_ = lean_ctor_get(v_x_2377_, 0);
v_isSharedCheck_2397_ = !lean_is_exclusive(v_x_2377_);
if (v_isSharedCheck_2397_ == 0)
{
v___x_2390_ = v_x_2377_;
v_isShared_2391_ = v_isSharedCheck_2397_;
goto v_resetjp_2389_;
}
else
{
lean_inc(v_a_2388_);
lean_dec(v_x_2377_);
v___x_2390_ = lean_box(0);
v_isShared_2391_ = v_isSharedCheck_2397_;
goto v_resetjp_2389_;
}
v_resetjp_2389_:
{
lean_object* v___x_2392_; lean_object* v___x_2394_; 
v___x_2392_ = lean_io_promise_resolve(v_a_2388_, v_promise_2376_);
if (v_isShared_2391_ == 0)
{
lean_ctor_set(v___x_2390_, 0, v___x_2392_);
v___x_2394_ = v___x_2390_;
goto v_reusejp_2393_;
}
else
{
lean_object* v_reuseFailAlloc_2396_; 
v_reuseFailAlloc_2396_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2396_, 0, v___x_2392_);
v___x_2394_ = v_reuseFailAlloc_2396_;
goto v_reusejp_2393_;
}
v_reusejp_2393_:
{
lean_object* v___x_2395_; 
v___x_2395_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2395_, 0, v___x_2394_);
return v___x_2395_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_Waiter_race___at___00Std_Http_Body_Stream_recvSelector_spec__1___lam__0___boxed(lean_object* v_promise_2398_, lean_object* v_x_2399_, lean_object* v___y_2400_){
_start:
{
lean_object* v_res_2401_; 
v_res_2401_ = l_Std_Async_Waiter_race___at___00Std_Http_Body_Stream_recvSelector_spec__1___lam__0(v_promise_2398_, v_x_2399_);
lean_dec(v_promise_2398_);
return v_res_2401_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Waiter_race___at___00Std_Http_Body_Stream_recvSelector_spec__1___lam__1(lean_object* v_lose_2402_, lean_object* v___y_2403_, lean_object* v___f_2404_, lean_object* v_x_2405_){
_start:
{
if (lean_obj_tag(v_x_2405_) == 0)
{
lean_object* v_a_2407_; lean_object* v___x_2409_; uint8_t v_isShared_2410_; uint8_t v_isSharedCheck_2415_; 
lean_dec_ref(v___f_2404_);
lean_dec_ref(v_lose_2402_);
v_a_2407_ = lean_ctor_get(v_x_2405_, 0);
v_isSharedCheck_2415_ = !lean_is_exclusive(v_x_2405_);
if (v_isSharedCheck_2415_ == 0)
{
v___x_2409_ = v_x_2405_;
v_isShared_2410_ = v_isSharedCheck_2415_;
goto v_resetjp_2408_;
}
else
{
lean_inc(v_a_2407_);
lean_dec(v_x_2405_);
v___x_2409_ = lean_box(0);
v_isShared_2410_ = v_isSharedCheck_2415_;
goto v_resetjp_2408_;
}
v_resetjp_2408_:
{
lean_object* v___x_2412_; 
if (v_isShared_2410_ == 0)
{
v___x_2412_ = v___x_2409_;
goto v_reusejp_2411_;
}
else
{
lean_object* v_reuseFailAlloc_2414_; 
v_reuseFailAlloc_2414_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2414_, 0, v_a_2407_);
v___x_2412_ = v_reuseFailAlloc_2414_;
goto v_reusejp_2411_;
}
v_reusejp_2411_:
{
lean_object* v___x_2413_; 
v___x_2413_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2413_, 0, v___x_2412_);
return v___x_2413_;
}
}
}
else
{
lean_object* v_a_2416_; uint8_t v___x_2417_; 
v_a_2416_ = lean_ctor_get(v_x_2405_, 0);
lean_inc(v_a_2416_);
lean_dec_ref_known(v_x_2405_, 1);
v___x_2417_ = lean_unbox(v_a_2416_);
lean_dec(v_a_2416_);
if (v___x_2417_ == 0)
{
lean_object* v___x_2418_; 
lean_dec_ref(v___f_2404_);
lean_inc(v___y_2403_);
v___x_2418_ = lean_apply_2(v_lose_2402_, v___y_2403_, lean_box(0));
return v___x_2418_;
}
else
{
lean_object* v___x_2419_; uint8_t v___x_2420_; lean_object* v___x_2421_; lean_object* v___x_2422_; 
lean_dec_ref(v_lose_2402_);
v___x_2419_ = lean_unsigned_to_nat(0u);
v___x_2420_ = 0;
v___x_2421_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___at___00Std_Http_Body_Stream_tryRecv_spec__0(v___y_2403_);
v___x_2422_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_2419_, v___x_2420_, v___x_2421_, v___f_2404_);
return v___x_2422_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_Waiter_race___at___00Std_Http_Body_Stream_recvSelector_spec__1___lam__1___boxed(lean_object* v_lose_2423_, lean_object* v___y_2424_, lean_object* v___f_2425_, lean_object* v_x_2426_, lean_object* v___y_2427_){
_start:
{
lean_object* v_res_2428_; 
v_res_2428_ = l_Std_Async_Waiter_race___at___00Std_Http_Body_Stream_recvSelector_spec__1___lam__1(v_lose_2423_, v___y_2424_, v___f_2425_, v_x_2426_);
lean_dec(v___y_2424_);
return v_res_2428_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Waiter_race___at___00Std_Http_Body_Stream_recvSelector_spec__1(lean_object* v_w_2429_, lean_object* v_lose_2430_, lean_object* v___y_2431_){
_start:
{
lean_object* v_finished_2433_; lean_object* v_promise_2434_; lean_object* v___f_2435_; lean_object* v___f_2436_; lean_object* v___x_2437_; uint8_t v___x_2438_; lean_object* v___x_2439_; uint8_t v___y_2441_; uint8_t v___x_2449_; 
v_finished_2433_ = lean_ctor_get(v_w_2429_, 0);
lean_inc(v_finished_2433_);
v_promise_2434_ = lean_ctor_get(v_w_2429_, 1);
lean_inc(v_promise_2434_);
lean_dec_ref(v_w_2429_);
v___f_2435_ = lean_alloc_closure((void*)(l_Std_Async_Waiter_race___at___00Std_Http_Body_Stream_recvSelector_spec__1___lam__0___boxed), 3, 1);
lean_closure_set(v___f_2435_, 0, v_promise_2434_);
lean_inc(v___y_2431_);
v___f_2436_ = lean_alloc_closure((void*)(l_Std_Async_Waiter_race___at___00Std_Http_Body_Stream_recvSelector_spec__1___lam__1___boxed), 5, 3);
lean_closure_set(v___f_2436_, 0, v_lose_2430_);
lean_closure_set(v___f_2436_, 1, v___y_2431_);
lean_closure_set(v___f_2436_, 2, v___f_2435_);
v___x_2437_ = lean_unsigned_to_nat(0u);
v___x_2438_ = 0;
v___x_2439_ = lean_st_ref_take(v_finished_2433_);
v___x_2449_ = lean_unbox(v___x_2439_);
lean_dec(v___x_2439_);
if (v___x_2449_ == 0)
{
uint8_t v___x_2450_; 
v___x_2450_ = 1;
v___y_2441_ = v___x_2450_;
goto v___jp_2440_;
}
else
{
v___y_2441_ = v___x_2438_;
goto v___jp_2440_;
}
v___jp_2440_:
{
uint8_t v___x_2442_; lean_object* v___x_2443_; lean_object* v___x_2444_; lean_object* v___x_2445_; lean_object* v___x_2446_; lean_object* v___x_2447_; lean_object* v___x_2448_; 
v___x_2442_ = 1;
v___x_2443_ = lean_box(v___x_2442_);
v___x_2444_ = lean_st_ref_put(v_finished_2433_, v___x_2443_);
lean_dec(v_finished_2433_);
v___x_2445_ = lean_box(v___y_2441_);
v___x_2446_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2446_, 0, v___x_2445_);
v___x_2447_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2447_, 0, v___x_2446_);
v___x_2448_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_2437_, v___x_2438_, v___x_2447_, v___f_2436_);
return v___x_2448_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_Waiter_race___at___00Std_Http_Body_Stream_recvSelector_spec__1___boxed(lean_object* v_w_2451_, lean_object* v_lose_2452_, lean_object* v___y_2453_, lean_object* v___y_2454_){
_start:
{
lean_object* v_res_2455_; 
v_res_2455_ = l_Std_Async_Waiter_race___at___00Std_Http_Body_Stream_recvSelector_spec__1(v_w_2451_, v_lose_2452_, v___y_2453_);
lean_dec(v___y_2453_);
return v_res_2455_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_recvSelector___lam__1(lean_object* v___y_2456_, lean_object* v_x_2457_){
_start:
{
if (lean_obj_tag(v_x_2457_) == 0)
{
lean_object* v___x_2459_; 
v___x_2459_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2459_, 0, v_x_2457_);
return v___x_2459_;
}
else
{
lean_object* v___x_2460_; 
lean_dec_ref_known(v_x_2457_, 1);
v___x_2460_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_signalInterest___at___00Std_Http_Body_Stream_recvSelector_spec__0(v___y_2456_);
return v___x_2460_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_recvSelector___lam__1___boxed(lean_object* v___y_2461_, lean_object* v_x_2462_, lean_object* v___y_2463_){
_start:
{
lean_object* v_res_2464_; 
v_res_2464_ = l_Std_Http_Body_Stream_recvSelector___lam__1(v___y_2461_, v_x_2462_);
lean_dec(v___y_2461_);
return v_res_2464_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_recvSelector___lam__0(lean_object* v_waiter_2465_, lean_object* v_pendingProducer_2466_, lean_object* v_interestWaiter_2467_, uint8_t v_closed_2468_, lean_object* v_knownSize_2469_, lean_object* v_pendingIncompleteChunk_2470_, lean_object* v_closeError_2471_, uint8_t v_a_2472_, lean_object* v_____r_2473_, lean_object* v___y_2474_){
_start:
{
lean_object* v___f_2476_; lean_object* v___x_2477_; lean_object* v___x_2478_; lean_object* v___x_2479_; lean_object* v___x_2480_; lean_object* v___x_2481_; lean_object* v___x_2482_; lean_object* v___x_2483_; 
lean_inc(v___y_2474_);
v___f_2476_ = lean_alloc_closure((void*)(l_Std_Http_Body_Stream_recvSelector___lam__1___boxed), 3, 1);
lean_closure_set(v___f_2476_, 0, v___y_2474_);
v___x_2477_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2477_, 0, v_waiter_2465_);
v___x_2478_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2478_, 0, v___x_2477_);
v___x_2479_ = lean_alloc_ctor(0, 6, 1);
lean_ctor_set(v___x_2479_, 0, v_pendingProducer_2466_);
lean_ctor_set(v___x_2479_, 1, v___x_2478_);
lean_ctor_set(v___x_2479_, 2, v_interestWaiter_2467_);
lean_ctor_set(v___x_2479_, 3, v_knownSize_2469_);
lean_ctor_set(v___x_2479_, 4, v_pendingIncompleteChunk_2470_);
lean_ctor_set(v___x_2479_, 5, v_closeError_2471_);
lean_ctor_set_uint8(v___x_2479_, sizeof(void*)*6, v_closed_2468_);
v___x_2480_ = lean_unsigned_to_nat(0u);
v___x_2481_ = lean_st_ref_swap(v___y_2474_, v___x_2479_);
lean_dec(v___x_2481_);
v___x_2482_ = ((lean_object*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__0___closed__1));
v___x_2483_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_2480_, v_a_2472_, v___x_2482_, v___f_2476_);
return v___x_2483_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_recvSelector___lam__0___boxed(lean_object* v_waiter_2484_, lean_object* v_pendingProducer_2485_, lean_object* v_interestWaiter_2486_, lean_object* v_closed_2487_, lean_object* v_knownSize_2488_, lean_object* v_pendingIncompleteChunk_2489_, lean_object* v_closeError_2490_, lean_object* v_a_2491_, lean_object* v_____r_2492_, lean_object* v___y_2493_, lean_object* v___y_2494_){
_start:
{
uint8_t v_closed_boxed_2495_; uint8_t v_a_5926__boxed_2496_; lean_object* v_res_2497_; 
v_closed_boxed_2495_ = lean_unbox(v_closed_2487_);
v_a_5926__boxed_2496_ = lean_unbox(v_a_2491_);
v_res_2497_ = l_Std_Http_Body_Stream_recvSelector___lam__0(v_waiter_2484_, v_pendingProducer_2485_, v_interestWaiter_2486_, v_closed_boxed_2495_, v_knownSize_2488_, v_pendingIncompleteChunk_2489_, v_closeError_2490_, v_a_5926__boxed_2496_, v_____r_2492_, v___y_2493_);
lean_dec(v___y_2493_);
return v_res_2497_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_recvSelector___lam__3(lean_object* v_waiter_2502_, uint8_t v_a_2503_, lean_object* v___y_2504_, lean_object* v_x_2505_){
_start:
{
if (lean_obj_tag(v_x_2505_) == 0)
{
lean_object* v_a_2507_; lean_object* v___x_2509_; uint8_t v_isShared_2510_; uint8_t v_isSharedCheck_2515_; 
lean_dec_ref(v_waiter_2502_);
v_a_2507_ = lean_ctor_get(v_x_2505_, 0);
v_isSharedCheck_2515_ = !lean_is_exclusive(v_x_2505_);
if (v_isSharedCheck_2515_ == 0)
{
v___x_2509_ = v_x_2505_;
v_isShared_2510_ = v_isSharedCheck_2515_;
goto v_resetjp_2508_;
}
else
{
lean_inc(v_a_2507_);
lean_dec(v_x_2505_);
v___x_2509_ = lean_box(0);
v_isShared_2510_ = v_isSharedCheck_2515_;
goto v_resetjp_2508_;
}
v_resetjp_2508_:
{
lean_object* v___x_2512_; 
if (v_isShared_2510_ == 0)
{
v___x_2512_ = v___x_2509_;
goto v_reusejp_2511_;
}
else
{
lean_object* v_reuseFailAlloc_2514_; 
v_reuseFailAlloc_2514_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2514_, 0, v_a_2507_);
v___x_2512_ = v_reuseFailAlloc_2514_;
goto v_reusejp_2511_;
}
v_reusejp_2511_:
{
lean_object* v___x_2513_; 
v___x_2513_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2513_, 0, v___x_2512_);
return v___x_2513_;
}
}
}
else
{
lean_object* v_a_2516_; lean_object* v_pendingProducer_2517_; lean_object* v_pendingConsumer_2518_; lean_object* v_interestWaiter_2519_; uint8_t v_closed_2520_; lean_object* v_knownSize_2521_; lean_object* v_pendingIncompleteChunk_2522_; lean_object* v_closeError_2523_; lean_object* v___x_2524_; lean_object* v___x_2525_; lean_object* v___f_2526_; 
v_a_2516_ = lean_ctor_get(v_x_2505_, 0);
lean_inc(v_a_2516_);
lean_dec_ref_known(v_x_2505_, 1);
v_pendingProducer_2517_ = lean_ctor_get(v_a_2516_, 0);
lean_inc_n(v_pendingProducer_2517_, 2);
v_pendingConsumer_2518_ = lean_ctor_get(v_a_2516_, 1);
lean_inc(v_pendingConsumer_2518_);
v_interestWaiter_2519_ = lean_ctor_get(v_a_2516_, 2);
lean_inc_n(v_interestWaiter_2519_, 2);
v_closed_2520_ = lean_ctor_get_uint8(v_a_2516_, sizeof(void*)*6);
v_knownSize_2521_ = lean_ctor_get(v_a_2516_, 3);
lean_inc_n(v_knownSize_2521_, 2);
v_pendingIncompleteChunk_2522_ = lean_ctor_get(v_a_2516_, 4);
lean_inc_n(v_pendingIncompleteChunk_2522_, 2);
v_closeError_2523_ = lean_ctor_get(v_a_2516_, 5);
lean_inc_n(v_closeError_2523_, 2);
lean_dec(v_a_2516_);
v___x_2524_ = lean_box(v_closed_2520_);
v___x_2525_ = lean_box(v_a_2503_);
lean_inc_ref(v_waiter_2502_);
v___f_2526_ = lean_alloc_closure((void*)(l_Std_Http_Body_Stream_recvSelector___lam__0___boxed), 11, 8);
lean_closure_set(v___f_2526_, 0, v_waiter_2502_);
lean_closure_set(v___f_2526_, 1, v_pendingProducer_2517_);
lean_closure_set(v___f_2526_, 2, v_interestWaiter_2519_);
lean_closure_set(v___f_2526_, 3, v___x_2524_);
lean_closure_set(v___f_2526_, 4, v_knownSize_2521_);
lean_closure_set(v___f_2526_, 5, v_pendingIncompleteChunk_2522_);
lean_closure_set(v___f_2526_, 6, v_closeError_2523_);
lean_closure_set(v___f_2526_, 7, v___x_2525_);
if (lean_obj_tag(v_pendingConsumer_2518_) == 0)
{
lean_object* v___x_2527_; lean_object* v___x_2528_; 
lean_dec_ref(v___f_2526_);
v___x_2527_ = lean_box(0);
v___x_2528_ = l_Std_Http_Body_Stream_recvSelector___lam__0(v_waiter_2502_, v_pendingProducer_2517_, v_interestWaiter_2519_, v_closed_2520_, v_knownSize_2521_, v_pendingIncompleteChunk_2522_, v_closeError_2523_, v_a_2503_, v___x_2527_, v___y_2504_);
return v___x_2528_;
}
else
{
lean_object* v___f_2529_; lean_object* v___x_2530_; lean_object* v___x_2531_; lean_object* v___x_2532_; 
lean_dec_ref_known(v_pendingConsumer_2518_, 1);
lean_dec(v_closeError_2523_);
lean_dec(v_pendingIncompleteChunk_2522_);
lean_dec(v_knownSize_2521_);
lean_dec(v_interestWaiter_2519_);
lean_dec(v_pendingProducer_2517_);
lean_dec_ref(v_waiter_2502_);
lean_inc(v___y_2504_);
v___f_2529_ = lean_alloc_closure((void*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___at___00Std_Http_Body_Stream_close_spec__0___lam__1___boxed), 4, 2);
lean_closure_set(v___f_2529_, 0, v___f_2526_);
lean_closure_set(v___f_2529_, 1, v___y_2504_);
v___x_2530_ = lean_unsigned_to_nat(0u);
v___x_2531_ = ((lean_object*)(l_Std_Http_Body_Stream_recvSelector___lam__3___closed__1));
v___x_2532_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_2530_, v_a_2503_, v___x_2531_, v___f_2529_);
return v___x_2532_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_recvSelector___lam__3___boxed(lean_object* v_waiter_2533_, lean_object* v_a_2534_, lean_object* v___y_2535_, lean_object* v_x_2536_, lean_object* v___y_2537_){
_start:
{
uint8_t v_a_5967__boxed_2538_; lean_object* v_res_2539_; 
v_a_5967__boxed_2538_ = lean_unbox(v_a_2534_);
v_res_2539_ = l_Std_Http_Body_Stream_recvSelector___lam__3(v_waiter_2533_, v_a_5967__boxed_2538_, v___y_2535_, v_x_2536_);
lean_dec(v___y_2535_);
return v_res_2539_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_recvSelector___lam__2(lean_object* v___x_2540_, lean_object* v___y_2541_){
_start:
{
lean_object* v___x_2543_; lean_object* v___x_2544_; 
v___x_2543_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2543_, 0, v___x_2540_);
v___x_2544_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2544_, 0, v___x_2543_);
return v___x_2544_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_recvSelector___lam__2___boxed(lean_object* v___x_2545_, lean_object* v___y_2546_, lean_object* v___y_2547_){
_start:
{
lean_object* v_res_2548_; 
v_res_2548_ = l_Std_Http_Body_Stream_recvSelector___lam__2(v___x_2545_, v___y_2546_);
lean_dec(v___y_2546_);
return v_res_2548_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_recvSelector___lam__4(lean_object* v_waiter_2551_, lean_object* v___y_2552_, lean_object* v_x_2553_){
_start:
{
if (lean_obj_tag(v_x_2553_) == 0)
{
lean_object* v_a_2555_; lean_object* v___x_2557_; uint8_t v_isShared_2558_; uint8_t v_isSharedCheck_2563_; 
lean_dec_ref(v_waiter_2551_);
v_a_2555_ = lean_ctor_get(v_x_2553_, 0);
v_isSharedCheck_2563_ = !lean_is_exclusive(v_x_2553_);
if (v_isSharedCheck_2563_ == 0)
{
v___x_2557_ = v_x_2553_;
v_isShared_2558_ = v_isSharedCheck_2563_;
goto v_resetjp_2556_;
}
else
{
lean_inc(v_a_2555_);
lean_dec(v_x_2553_);
v___x_2557_ = lean_box(0);
v_isShared_2558_ = v_isSharedCheck_2563_;
goto v_resetjp_2556_;
}
v_resetjp_2556_:
{
lean_object* v___x_2560_; 
if (v_isShared_2558_ == 0)
{
v___x_2560_ = v___x_2557_;
goto v_reusejp_2559_;
}
else
{
lean_object* v_reuseFailAlloc_2562_; 
v_reuseFailAlloc_2562_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2562_, 0, v_a_2555_);
v___x_2560_ = v_reuseFailAlloc_2562_;
goto v_reusejp_2559_;
}
v_reusejp_2559_:
{
lean_object* v___x_2561_; 
v___x_2561_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2561_, 0, v___x_2560_);
return v___x_2561_;
}
}
}
else
{
lean_object* v_a_2564_; lean_object* v___x_2566_; uint8_t v_isShared_2567_; uint8_t v_isSharedCheck_2580_; 
v_a_2564_ = lean_ctor_get(v_x_2553_, 0);
v_isSharedCheck_2580_ = !lean_is_exclusive(v_x_2553_);
if (v_isSharedCheck_2580_ == 0)
{
v___x_2566_ = v_x_2553_;
v_isShared_2567_ = v_isSharedCheck_2580_;
goto v_resetjp_2565_;
}
else
{
lean_inc(v_a_2564_);
lean_dec(v_x_2553_);
v___x_2566_ = lean_box(0);
v_isShared_2567_ = v_isSharedCheck_2580_;
goto v_resetjp_2565_;
}
v_resetjp_2565_:
{
uint8_t v___x_2568_; 
v___x_2568_ = lean_unbox(v_a_2564_);
if (v___x_2568_ == 0)
{
lean_object* v___f_2569_; lean_object* v___x_2570_; lean_object* v___x_2571_; lean_object* v___x_2573_; 
lean_inc(v___y_2552_);
lean_inc(v_a_2564_);
v___f_2569_ = lean_alloc_closure((void*)(l_Std_Http_Body_Stream_recvSelector___lam__3___boxed), 5, 3);
lean_closure_set(v___f_2569_, 0, v_waiter_2551_);
lean_closure_set(v___f_2569_, 1, v_a_2564_);
lean_closure_set(v___f_2569_, 2, v___y_2552_);
v___x_2570_ = lean_unsigned_to_nat(0u);
v___x_2571_ = lean_st_ref_get(v___y_2552_);
if (v_isShared_2567_ == 0)
{
lean_ctor_set(v___x_2566_, 0, v___x_2571_);
v___x_2573_ = v___x_2566_;
goto v_reusejp_2572_;
}
else
{
lean_object* v_reuseFailAlloc_2577_; 
v_reuseFailAlloc_2577_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2577_, 0, v___x_2571_);
v___x_2573_ = v_reuseFailAlloc_2577_;
goto v_reusejp_2572_;
}
v_reusejp_2572_:
{
lean_object* v___x_2574_; uint8_t v___x_2575_; lean_object* v___x_2576_; 
v___x_2574_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2574_, 0, v___x_2573_);
v___x_2575_ = lean_unbox(v_a_2564_);
lean_dec(v_a_2564_);
v___x_2576_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_2570_, v___x_2575_, v___x_2574_, v___f_2569_);
return v___x_2576_;
}
}
else
{
lean_object* v___f_2578_; lean_object* v___x_2579_; 
lean_del_object(v___x_2566_);
lean_dec(v_a_2564_);
v___f_2578_ = ((lean_object*)(l_Std_Http_Body_Stream_recvSelector___lam__4___closed__0));
v___x_2579_ = l_Std_Async_Waiter_race___at___00Std_Http_Body_Stream_recvSelector_spec__1(v_waiter_2551_, v___f_2578_, v___y_2552_);
return v___x_2579_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_recvSelector___lam__4___boxed(lean_object* v_waiter_2581_, lean_object* v___y_2582_, lean_object* v_x_2583_, lean_object* v___y_2584_){
_start:
{
lean_object* v_res_2585_; 
v_res_2585_ = l_Std_Http_Body_Stream_recvSelector___lam__4(v_waiter_2581_, v___y_2582_, v_x_2583_);
lean_dec(v___y_2582_);
return v_res_2585_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_recvSelector___lam__5(lean_object* v___y_2586_, lean_object* v___f_2587_, lean_object* v_x_2588_){
_start:
{
if (lean_obj_tag(v_x_2588_) == 0)
{
lean_object* v___x_2590_; 
lean_dec_ref(v___f_2587_);
v___x_2590_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2590_, 0, v_x_2588_);
return v___x_2590_;
}
else
{
lean_object* v___x_2591_; uint8_t v___x_2592_; lean_object* v___x_2593_; lean_object* v___x_2594_; 
lean_dec_ref_known(v_x_2588_, 1);
v___x_2591_ = lean_unsigned_to_nat(0u);
v___x_2592_ = 0;
v___x_2593_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReady_x27___at___00Std_Http_Body_Stream_tryRecvBody_spec__0(v___y_2586_);
v___x_2594_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_2591_, v___x_2592_, v___x_2593_, v___f_2587_);
return v___x_2594_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_recvSelector___lam__5___boxed(lean_object* v___y_2595_, lean_object* v___f_2596_, lean_object* v_x_2597_, lean_object* v___y_2598_){
_start:
{
lean_object* v_res_2599_; 
v_res_2599_ = l_Std_Http_Body_Stream_recvSelector___lam__5(v___y_2595_, v___f_2596_, v_x_2597_);
lean_dec(v___y_2595_);
return v_res_2599_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_recvSelector___lam__6(lean_object* v_waiter_2600_, lean_object* v___y_2601_){
_start:
{
lean_object* v___f_2603_; lean_object* v___f_2604_; lean_object* v___x_2605_; uint8_t v___x_2606_; lean_object* v___x_2607_; lean_object* v___x_2608_; 
lean_inc_n(v___y_2601_, 2);
v___f_2603_ = lean_alloc_closure((void*)(l_Std_Http_Body_Stream_recvSelector___lam__4___boxed), 4, 2);
lean_closure_set(v___f_2603_, 0, v_waiter_2600_);
lean_closure_set(v___f_2603_, 1, v___y_2601_);
v___f_2604_ = lean_alloc_closure((void*)(l_Std_Http_Body_Stream_recvSelector___lam__5___boxed), 4, 2);
lean_closure_set(v___f_2604_, 0, v___y_2601_);
lean_closure_set(v___f_2604_, 1, v___f_2603_);
v___x_2605_ = lean_unsigned_to_nat(0u);
v___x_2606_ = 0;
v___x_2607_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1(v___y_2601_);
v___x_2608_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_2605_, v___x_2606_, v___x_2607_, v___f_2604_);
return v___x_2608_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_recvSelector___lam__6___boxed(lean_object* v_waiter_2609_, lean_object* v___y_2610_, lean_object* v___y_2611_){
_start:
{
lean_object* v_res_2612_; 
v_res_2612_ = l_Std_Http_Body_Stream_recvSelector___lam__6(v_waiter_2609_, v___y_2610_);
lean_dec(v___y_2610_);
return v_res_2612_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_recvSelector___lam__7(lean_object* v_stream_2613_, lean_object* v_waiter_2614_){
_start:
{
lean_object* v___f_2616_; lean_object* v___x_2617_; 
v___f_2616_ = lean_alloc_closure((void*)(l_Std_Http_Body_Stream_recvSelector___lam__6___boxed), 3, 1);
lean_closure_set(v___f_2616_, 0, v_waiter_2614_);
v___x_2617_ = l_Std_Mutex_atomically___at___00Std_Http_Body_Stream_tryRecv_spec__2___redArg(v_stream_2613_, v___f_2616_);
return v___x_2617_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_recvSelector___lam__7___boxed(lean_object* v_stream_2618_, lean_object* v_waiter_2619_, lean_object* v___y_2620_){
_start:
{
lean_object* v_res_2621_; 
v_res_2621_ = l_Std_Http_Body_Stream_recvSelector___lam__7(v_stream_2618_, v_waiter_2619_);
return v_res_2621_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_recvSelector(lean_object* v_stream_2623_){
_start:
{
lean_object* v___f_2624_; lean_object* v___f_2625_; lean_object* v___f_2626_; lean_object* v___x_2627_; lean_object* v___x_2628_; lean_object* v___x_2629_; 
v___f_2624_ = ((lean_object*)(l_Std_Http_Body_Stream_recvSelector___closed__0));
lean_inc_ref_n(v_stream_2623_, 2);
v___f_2625_ = lean_alloc_closure((void*)(l_Std_Http_Body_Stream_recvSelector___lam__7___boxed), 3, 1);
lean_closure_set(v___f_2625_, 0, v_stream_2623_);
v___f_2626_ = ((lean_object*)(l_Std_Http_Body_Stream_tryRecvBody___closed__1));
v___x_2627_ = lean_alloc_closure((void*)(l_Std_Mutex_atomically___at___00Std_Http_Body_Stream_tryRecv_spec__2___boxed), 5, 4);
lean_closure_set(v___x_2627_, 0, lean_box(0));
lean_closure_set(v___x_2627_, 1, lean_box(0));
lean_closure_set(v___x_2627_, 2, v_stream_2623_);
lean_closure_set(v___x_2627_, 3, v___f_2626_);
v___x_2628_ = lean_alloc_closure((void*)(l_Std_Mutex_atomically___at___00Std_Http_Body_Stream_tryRecv_spec__2___boxed), 5, 4);
lean_closure_set(v___x_2628_, 0, lean_box(0));
lean_closure_set(v___x_2628_, 1, lean_box(0));
lean_closure_set(v___x_2628_, 2, v_stream_2623_);
lean_closure_set(v___x_2628_, 3, v___f_2624_);
v___x_2629_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2629_, 0, v___x_2627_);
lean_ctor_set(v___x_2629_, 1, v___f_2625_);
lean_ctor_set(v___x_2629_, 2, v___x_2628_);
return v___x_2629_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_forIn_loop___redArg___lam__1(lean_object* v_step_2630_, lean_object* v_acc_2631_, lean_object* v___f_2632_, lean_object* v_x_2633_){
_start:
{
if (lean_obj_tag(v_x_2633_) == 0)
{
lean_object* v_a_2635_; lean_object* v___x_2637_; uint8_t v_isShared_2638_; uint8_t v_isSharedCheck_2643_; 
lean_dec_ref(v___f_2632_);
lean_dec(v_acc_2631_);
lean_dec_ref(v_step_2630_);
v_a_2635_ = lean_ctor_get(v_x_2633_, 0);
v_isSharedCheck_2643_ = !lean_is_exclusive(v_x_2633_);
if (v_isSharedCheck_2643_ == 0)
{
v___x_2637_ = v_x_2633_;
v_isShared_2638_ = v_isSharedCheck_2643_;
goto v_resetjp_2636_;
}
else
{
lean_inc(v_a_2635_);
lean_dec(v_x_2633_);
v___x_2637_ = lean_box(0);
v_isShared_2638_ = v_isSharedCheck_2643_;
goto v_resetjp_2636_;
}
v_resetjp_2636_:
{
lean_object* v___x_2640_; 
if (v_isShared_2638_ == 0)
{
v___x_2640_ = v___x_2637_;
goto v_reusejp_2639_;
}
else
{
lean_object* v_reuseFailAlloc_2642_; 
v_reuseFailAlloc_2642_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2642_, 0, v_a_2635_);
v___x_2640_ = v_reuseFailAlloc_2642_;
goto v_reusejp_2639_;
}
v_reusejp_2639_:
{
lean_object* v___x_2641_; 
v___x_2641_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2641_, 0, v___x_2640_);
return v___x_2641_;
}
}
}
else
{
lean_object* v_a_2644_; lean_object* v___x_2646_; uint8_t v_isShared_2647_; uint8_t v_isSharedCheck_2657_; 
v_a_2644_ = lean_ctor_get(v_x_2633_, 0);
v_isSharedCheck_2657_ = !lean_is_exclusive(v_x_2633_);
if (v_isSharedCheck_2657_ == 0)
{
v___x_2646_ = v_x_2633_;
v_isShared_2647_ = v_isSharedCheck_2657_;
goto v_resetjp_2645_;
}
else
{
lean_inc(v_a_2644_);
lean_dec(v_x_2633_);
v___x_2646_ = lean_box(0);
v_isShared_2647_ = v_isSharedCheck_2657_;
goto v_resetjp_2645_;
}
v_resetjp_2645_:
{
if (lean_obj_tag(v_a_2644_) == 1)
{
lean_object* v_val_2648_; lean_object* v___x_2649_; uint8_t v___x_2650_; lean_object* v___x_2651_; lean_object* v___x_2652_; 
lean_del_object(v___x_2646_);
v_val_2648_ = lean_ctor_get(v_a_2644_, 0);
lean_inc(v_val_2648_);
lean_dec_ref_known(v_a_2644_, 1);
v___x_2649_ = lean_unsigned_to_nat(0u);
v___x_2650_ = 0;
v___x_2651_ = lean_apply_3(v_step_2630_, v_val_2648_, v_acc_2631_, lean_box(0));
v___x_2652_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_2649_, v___x_2650_, v___x_2651_, v___f_2632_);
return v___x_2652_;
}
else
{
lean_object* v___x_2654_; 
lean_dec(v_a_2644_);
lean_dec_ref(v___f_2632_);
lean_dec_ref(v_step_2630_);
if (v_isShared_2647_ == 0)
{
lean_ctor_set(v___x_2646_, 0, v_acc_2631_);
v___x_2654_ = v___x_2646_;
goto v_reusejp_2653_;
}
else
{
lean_object* v_reuseFailAlloc_2656_; 
v_reuseFailAlloc_2656_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2656_, 0, v_acc_2631_);
v___x_2654_ = v_reuseFailAlloc_2656_;
goto v_reusejp_2653_;
}
v_reusejp_2653_:
{
lean_object* v___x_2655_; 
v___x_2655_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2655_, 0, v___x_2654_);
return v___x_2655_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_forIn_loop___redArg___lam__1___boxed(lean_object* v_step_2658_, lean_object* v_acc_2659_, lean_object* v___f_2660_, lean_object* v_x_2661_, lean_object* v___y_2662_){
_start:
{
lean_object* v_res_2663_; 
v_res_2663_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_forIn_loop___redArg___lam__1(v_step_2658_, v_acc_2659_, v___f_2660_, v_x_2661_);
return v_res_2663_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_forIn_loop___redArg___lam__0(lean_object* v_step_2664_, lean_object* v_stream_2665_, lean_object* v_x_2666_){
_start:
{
if (lean_obj_tag(v_x_2666_) == 0)
{
lean_object* v_a_2668_; lean_object* v___x_2670_; uint8_t v_isShared_2671_; uint8_t v_isSharedCheck_2676_; 
lean_dec_ref(v_stream_2665_);
lean_dec_ref(v_step_2664_);
v_a_2668_ = lean_ctor_get(v_x_2666_, 0);
v_isSharedCheck_2676_ = !lean_is_exclusive(v_x_2666_);
if (v_isSharedCheck_2676_ == 0)
{
v___x_2670_ = v_x_2666_;
v_isShared_2671_ = v_isSharedCheck_2676_;
goto v_resetjp_2669_;
}
else
{
lean_inc(v_a_2668_);
lean_dec(v_x_2666_);
v___x_2670_ = lean_box(0);
v_isShared_2671_ = v_isSharedCheck_2676_;
goto v_resetjp_2669_;
}
v_resetjp_2669_:
{
lean_object* v___x_2673_; 
if (v_isShared_2671_ == 0)
{
v___x_2673_ = v___x_2670_;
goto v_reusejp_2672_;
}
else
{
lean_object* v_reuseFailAlloc_2675_; 
v_reuseFailAlloc_2675_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2675_, 0, v_a_2668_);
v___x_2673_ = v_reuseFailAlloc_2675_;
goto v_reusejp_2672_;
}
v_reusejp_2672_:
{
lean_object* v___x_2674_; 
v___x_2674_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2674_, 0, v___x_2673_);
return v___x_2674_;
}
}
}
else
{
lean_object* v_a_2677_; lean_object* v___x_2679_; uint8_t v_isShared_2680_; uint8_t v_isSharedCheck_2694_; 
v_a_2677_ = lean_ctor_get(v_x_2666_, 0);
v_isSharedCheck_2694_ = !lean_is_exclusive(v_x_2666_);
if (v_isSharedCheck_2694_ == 0)
{
v___x_2679_ = v_x_2666_;
v_isShared_2680_ = v_isSharedCheck_2694_;
goto v_resetjp_2678_;
}
else
{
lean_inc(v_a_2677_);
lean_dec(v_x_2666_);
v___x_2679_ = lean_box(0);
v_isShared_2680_ = v_isSharedCheck_2694_;
goto v_resetjp_2678_;
}
v_resetjp_2678_:
{
if (lean_obj_tag(v_a_2677_) == 0)
{
lean_object* v_a_2681_; lean_object* v___x_2683_; uint8_t v_isShared_2684_; uint8_t v_isSharedCheck_2691_; 
lean_dec_ref(v_stream_2665_);
lean_dec_ref(v_step_2664_);
v_a_2681_ = lean_ctor_get(v_a_2677_, 0);
v_isSharedCheck_2691_ = !lean_is_exclusive(v_a_2677_);
if (v_isSharedCheck_2691_ == 0)
{
v___x_2683_ = v_a_2677_;
v_isShared_2684_ = v_isSharedCheck_2691_;
goto v_resetjp_2682_;
}
else
{
lean_inc(v_a_2681_);
lean_dec(v_a_2677_);
v___x_2683_ = lean_box(0);
v_isShared_2684_ = v_isSharedCheck_2691_;
goto v_resetjp_2682_;
}
v_resetjp_2682_:
{
lean_object* v___x_2686_; 
if (v_isShared_2680_ == 0)
{
lean_ctor_set(v___x_2679_, 0, v_a_2681_);
v___x_2686_ = v___x_2679_;
goto v_reusejp_2685_;
}
else
{
lean_object* v_reuseFailAlloc_2690_; 
v_reuseFailAlloc_2690_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2690_, 0, v_a_2681_);
v___x_2686_ = v_reuseFailAlloc_2690_;
goto v_reusejp_2685_;
}
v_reusejp_2685_:
{
lean_object* v___x_2688_; 
if (v_isShared_2684_ == 0)
{
lean_ctor_set(v___x_2683_, 0, v___x_2686_);
v___x_2688_ = v___x_2683_;
goto v_reusejp_2687_;
}
else
{
lean_object* v_reuseFailAlloc_2689_; 
v_reuseFailAlloc_2689_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2689_, 0, v___x_2686_);
v___x_2688_ = v_reuseFailAlloc_2689_;
goto v_reusejp_2687_;
}
v_reusejp_2687_:
{
return v___x_2688_;
}
}
}
}
else
{
lean_object* v_a_2692_; lean_object* v___x_2693_; 
lean_del_object(v___x_2679_);
v_a_2692_ = lean_ctor_get(v_a_2677_, 0);
lean_inc(v_a_2692_);
lean_dec_ref_known(v_a_2677_, 1);
v___x_2693_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_forIn_loop___redArg(v_step_2664_, v_stream_2665_, v_a_2692_);
return v___x_2693_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_forIn_loop___redArg___lam__0___boxed(lean_object* v_step_2695_, lean_object* v_stream_2696_, lean_object* v_x_2697_, lean_object* v___y_2698_){
_start:
{
lean_object* v_res_2699_; 
v_res_2699_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_forIn_loop___redArg___lam__0(v_step_2695_, v_stream_2696_, v_x_2697_);
return v_res_2699_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_forIn_loop___redArg(lean_object* v_step_2700_, lean_object* v_stream_2701_, lean_object* v_acc_2702_){
_start:
{
lean_object* v___f_2704_; lean_object* v___f_2705_; lean_object* v___x_2706_; uint8_t v___x_2707_; lean_object* v___x_2708_; lean_object* v___x_2709_; 
lean_inc_ref(v_stream_2701_);
lean_inc_ref(v_step_2700_);
v___f_2704_ = lean_alloc_closure((void*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_forIn_loop___redArg___lam__0___boxed), 4, 2);
lean_closure_set(v___f_2704_, 0, v_step_2700_);
lean_closure_set(v___f_2704_, 1, v_stream_2701_);
v___f_2705_ = lean_alloc_closure((void*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_forIn_loop___redArg___lam__1___boxed), 5, 3);
lean_closure_set(v___f_2705_, 0, v_step_2700_);
lean_closure_set(v___f_2705_, 1, v_acc_2702_);
lean_closure_set(v___f_2705_, 2, v___f_2704_);
v___x_2706_ = lean_unsigned_to_nat(0u);
v___x_2707_ = 0;
v___x_2708_ = l_Std_Http_Body_Stream_recv(v_stream_2701_);
v___x_2709_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_2706_, v___x_2707_, v___x_2708_, v___f_2705_);
return v___x_2709_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_forIn_loop___redArg___boxed(lean_object* v_step_2710_, lean_object* v_stream_2711_, lean_object* v_acc_2712_, lean_object* v___y_2713_){
_start:
{
lean_object* v_res_2714_; 
v_res_2714_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_forIn_loop___redArg(v_step_2710_, v_stream_2711_, v_acc_2712_);
return v_res_2714_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_forIn_loop(lean_object* v_00_u03b2_2715_, lean_object* v_step_2716_, lean_object* v_stream_2717_, lean_object* v_acc_2718_){
_start:
{
lean_object* v___x_2720_; 
v___x_2720_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_forIn_loop___redArg(v_step_2716_, v_stream_2717_, v_acc_2718_);
return v___x_2720_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_forIn_loop___boxed(lean_object* v_00_u03b2_2721_, lean_object* v_step_2722_, lean_object* v_stream_2723_, lean_object* v_acc_2724_, lean_object* v___y_2725_){
_start:
{
lean_object* v_res_2726_; 
v_res_2726_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_forIn_loop(v_00_u03b2_2721_, v_step_2722_, v_stream_2723_, v_acc_2724_);
return v_res_2726_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_forIn___redArg(lean_object* v_stream_2727_, lean_object* v_acc_2728_, lean_object* v_step_2729_){
_start:
{
lean_object* v___x_2731_; 
v___x_2731_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_forIn_loop___redArg(v_step_2729_, v_stream_2727_, v_acc_2728_);
return v___x_2731_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_forIn___redArg___boxed(lean_object* v_stream_2732_, lean_object* v_acc_2733_, lean_object* v_step_2734_, lean_object* v___y_2735_){
_start:
{
lean_object* v_res_2736_; 
v_res_2736_ = l_Std_Http_Body_Stream_forIn___redArg(v_stream_2732_, v_acc_2733_, v_step_2734_);
return v_res_2736_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_forIn(lean_object* v_00_u03b2_2737_, lean_object* v_stream_2738_, lean_object* v_acc_2739_, lean_object* v_step_2740_){
_start:
{
lean_object* v___x_2742_; 
v___x_2742_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_forIn_loop___redArg(v_step_2740_, v_stream_2738_, v_acc_2739_);
return v___x_2742_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_forIn___boxed(lean_object* v_00_u03b2_2743_, lean_object* v_stream_2744_, lean_object* v_acc_2745_, lean_object* v_step_2746_, lean_object* v___y_2747_){
_start:
{
lean_object* v_res_2748_; 
v_res_2748_ = l_Std_Http_Body_Stream_forIn(v_00_u03b2_2743_, v_stream_2744_, v_acc_2745_, v_step_2746_);
return v_res_2748_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_forIn_x27_loop___redArg___lam__0(lean_object* v___y_2749_){
_start:
{
lean_object* v___x_2751_; lean_object* v___x_2752_; 
v___x_2751_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2751_, 0, v___y_2749_);
v___x_2752_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2752_, 0, v___x_2751_);
return v___x_2752_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_forIn_x27_loop___redArg___lam__0___boxed(lean_object* v___y_2753_, lean_object* v___y_2754_){
_start:
{
lean_object* v_res_2755_; 
v_res_2755_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_forIn_x27_loop___redArg___lam__0(v___y_2753_);
return v_res_2755_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_forIn_x27_loop___redArg___lam__1(lean_object* v_x_2756_){
_start:
{
lean_object* v___x_2758_; 
v___x_2758_ = ((lean_object*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_tryRecv_x27___at___00__private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___at___00Std_Http_Body_Stream_tryRecv_spec__0_spec__0___lam__2___closed__0));
return v___x_2758_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_forIn_x27_loop___redArg___lam__1___boxed(lean_object* v_x_2759_, lean_object* v___y_2760_){
_start:
{
lean_object* v_res_2761_; 
v_res_2761_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_forIn_x27_loop___redArg___lam__1(v_x_2759_);
return v_res_2761_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_forIn_x27_loop___redArg___lam__3(lean_object* v_step_2762_, lean_object* v_acc_2763_, lean_object* v___y_2764_, lean_object* v___f_2765_, lean_object* v_x_2766_){
_start:
{
if (lean_obj_tag(v_x_2766_) == 0)
{
lean_object* v_a_2768_; lean_object* v___x_2770_; uint8_t v_isShared_2771_; uint8_t v_isSharedCheck_2776_; 
lean_dec_ref(v___f_2765_);
lean_dec(v_acc_2763_);
lean_dec_ref(v_step_2762_);
v_a_2768_ = lean_ctor_get(v_x_2766_, 0);
v_isSharedCheck_2776_ = !lean_is_exclusive(v_x_2766_);
if (v_isSharedCheck_2776_ == 0)
{
v___x_2770_ = v_x_2766_;
v_isShared_2771_ = v_isSharedCheck_2776_;
goto v_resetjp_2769_;
}
else
{
lean_inc(v_a_2768_);
lean_dec(v_x_2766_);
v___x_2770_ = lean_box(0);
v_isShared_2771_ = v_isSharedCheck_2776_;
goto v_resetjp_2769_;
}
v_resetjp_2769_:
{
lean_object* v___x_2773_; 
if (v_isShared_2771_ == 0)
{
v___x_2773_ = v___x_2770_;
goto v_reusejp_2772_;
}
else
{
lean_object* v_reuseFailAlloc_2775_; 
v_reuseFailAlloc_2775_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2775_, 0, v_a_2768_);
v___x_2773_ = v_reuseFailAlloc_2775_;
goto v_reusejp_2772_;
}
v_reusejp_2772_:
{
lean_object* v___x_2774_; 
v___x_2774_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2774_, 0, v___x_2773_);
return v___x_2774_;
}
}
}
else
{
lean_object* v_a_2777_; lean_object* v___x_2779_; uint8_t v_isShared_2780_; uint8_t v_isSharedCheck_2790_; 
v_a_2777_ = lean_ctor_get(v_x_2766_, 0);
v_isSharedCheck_2790_ = !lean_is_exclusive(v_x_2766_);
if (v_isSharedCheck_2790_ == 0)
{
v___x_2779_ = v_x_2766_;
v_isShared_2780_ = v_isSharedCheck_2790_;
goto v_resetjp_2778_;
}
else
{
lean_inc(v_a_2777_);
lean_dec(v_x_2766_);
v___x_2779_ = lean_box(0);
v_isShared_2780_ = v_isSharedCheck_2790_;
goto v_resetjp_2778_;
}
v_resetjp_2778_:
{
if (lean_obj_tag(v_a_2777_) == 1)
{
lean_object* v_val_2781_; lean_object* v___x_2782_; uint8_t v___x_2783_; lean_object* v___x_2784_; lean_object* v___x_2785_; 
lean_del_object(v___x_2779_);
v_val_2781_ = lean_ctor_get(v_a_2777_, 0);
lean_inc(v_val_2781_);
lean_dec_ref_known(v_a_2777_, 1);
v___x_2782_ = lean_unsigned_to_nat(0u);
v___x_2783_ = 0;
lean_inc_ref(v___y_2764_);
v___x_2784_ = lean_apply_4(v_step_2762_, v_val_2781_, v_acc_2763_, v___y_2764_, lean_box(0));
v___x_2785_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_2782_, v___x_2783_, v___x_2784_, v___f_2765_);
return v___x_2785_;
}
else
{
lean_object* v___x_2787_; 
lean_dec(v_a_2777_);
lean_dec_ref(v___f_2765_);
lean_dec_ref(v_step_2762_);
if (v_isShared_2780_ == 0)
{
lean_ctor_set(v___x_2779_, 0, v_acc_2763_);
v___x_2787_ = v___x_2779_;
goto v_reusejp_2786_;
}
else
{
lean_object* v_reuseFailAlloc_2789_; 
v_reuseFailAlloc_2789_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2789_, 0, v_acc_2763_);
v___x_2787_ = v_reuseFailAlloc_2789_;
goto v_reusejp_2786_;
}
v_reusejp_2786_:
{
lean_object* v___x_2788_; 
v___x_2788_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2788_, 0, v___x_2787_);
return v___x_2788_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_forIn_x27_loop___redArg___lam__3___boxed(lean_object* v_step_2791_, lean_object* v_acc_2792_, lean_object* v___y_2793_, lean_object* v___f_2794_, lean_object* v_x_2795_, lean_object* v___y_2796_){
_start:
{
lean_object* v_res_2797_; 
v_res_2797_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_forIn_x27_loop___redArg___lam__3(v_step_2791_, v_acc_2792_, v___y_2793_, v___f_2794_, v_x_2795_);
lean_dec_ref(v___y_2793_);
return v_res_2797_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_forIn_x27_loop___redArg___lam__5(lean_object* v_x_2798_){
_start:
{
if (lean_obj_tag(v_x_2798_) == 0)
{
lean_object* v_a_2800_; lean_object* v___x_2802_; uint8_t v_isShared_2803_; uint8_t v_isSharedCheck_2808_; 
v_a_2800_ = lean_ctor_get(v_x_2798_, 0);
v_isSharedCheck_2808_ = !lean_is_exclusive(v_x_2798_);
if (v_isSharedCheck_2808_ == 0)
{
v___x_2802_ = v_x_2798_;
v_isShared_2803_ = v_isSharedCheck_2808_;
goto v_resetjp_2801_;
}
else
{
lean_inc(v_a_2800_);
lean_dec(v_x_2798_);
v___x_2802_ = lean_box(0);
v_isShared_2803_ = v_isSharedCheck_2808_;
goto v_resetjp_2801_;
}
v_resetjp_2801_:
{
lean_object* v___x_2805_; 
if (v_isShared_2803_ == 0)
{
v___x_2805_ = v___x_2802_;
goto v_reusejp_2804_;
}
else
{
lean_object* v_reuseFailAlloc_2807_; 
v_reuseFailAlloc_2807_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2807_, 0, v_a_2800_);
v___x_2805_ = v_reuseFailAlloc_2807_;
goto v_reusejp_2804_;
}
v_reusejp_2804_:
{
lean_object* v___x_2806_; 
v___x_2806_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2806_, 0, v___x_2805_);
return v___x_2806_;
}
}
}
else
{
lean_object* v_a_2809_; lean_object* v___x_2811_; uint8_t v_isShared_2812_; uint8_t v_isSharedCheck_2819_; 
v_a_2809_ = lean_ctor_get(v_x_2798_, 0);
v_isSharedCheck_2819_ = !lean_is_exclusive(v_x_2798_);
if (v_isSharedCheck_2819_ == 0)
{
v___x_2811_ = v_x_2798_;
v_isShared_2812_ = v_isSharedCheck_2819_;
goto v_resetjp_2810_;
}
else
{
lean_inc(v_a_2809_);
lean_dec(v_x_2798_);
v___x_2811_ = lean_box(0);
v_isShared_2812_ = v_isSharedCheck_2819_;
goto v_resetjp_2810_;
}
v_resetjp_2810_:
{
lean_object* v_token_2813_; lean_object* v___x_2814_; lean_object* v___x_2816_; 
v_token_2813_ = lean_ctor_get(v_a_2809_, 1);
lean_inc_ref(v_token_2813_);
lean_dec(v_a_2809_);
v___x_2814_ = l_Std_CancellationToken_selector(v_token_2813_);
if (v_isShared_2812_ == 0)
{
lean_ctor_set(v___x_2811_, 0, v___x_2814_);
v___x_2816_ = v___x_2811_;
goto v_reusejp_2815_;
}
else
{
lean_object* v_reuseFailAlloc_2818_; 
v_reuseFailAlloc_2818_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2818_, 0, v___x_2814_);
v___x_2816_ = v_reuseFailAlloc_2818_;
goto v_reusejp_2815_;
}
v_reusejp_2815_:
{
lean_object* v___x_2817_; 
v___x_2817_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2817_, 0, v___x_2816_);
return v___x_2817_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_forIn_x27_loop___redArg___lam__5___boxed(lean_object* v_x_2820_, lean_object* v___y_2821_){
_start:
{
lean_object* v_res_2822_; 
v_res_2822_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_forIn_x27_loop___redArg___lam__5(v_x_2820_);
return v_res_2822_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_forIn_x27_loop___redArg___lam__4(lean_object* v_stream_2823_, lean_object* v___f_2824_, lean_object* v___f_2825_, lean_object* v___f_2826_, lean_object* v_x_2827_){
_start:
{
if (lean_obj_tag(v_x_2827_) == 0)
{
lean_object* v_a_2829_; lean_object* v___x_2831_; uint8_t v_isShared_2832_; uint8_t v_isSharedCheck_2837_; 
lean_dec_ref(v___f_2826_);
lean_dec_ref(v___f_2825_);
lean_dec_ref(v___f_2824_);
lean_dec_ref(v_stream_2823_);
v_a_2829_ = lean_ctor_get(v_x_2827_, 0);
v_isSharedCheck_2837_ = !lean_is_exclusive(v_x_2827_);
if (v_isSharedCheck_2837_ == 0)
{
v___x_2831_ = v_x_2827_;
v_isShared_2832_ = v_isSharedCheck_2837_;
goto v_resetjp_2830_;
}
else
{
lean_inc(v_a_2829_);
lean_dec(v_x_2827_);
v___x_2831_ = lean_box(0);
v_isShared_2832_ = v_isSharedCheck_2837_;
goto v_resetjp_2830_;
}
v_resetjp_2830_:
{
lean_object* v___x_2834_; 
if (v_isShared_2832_ == 0)
{
v___x_2834_ = v___x_2831_;
goto v_reusejp_2833_;
}
else
{
lean_object* v_reuseFailAlloc_2836_; 
v_reuseFailAlloc_2836_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2836_, 0, v_a_2829_);
v___x_2834_ = v_reuseFailAlloc_2836_;
goto v_reusejp_2833_;
}
v_reusejp_2833_:
{
lean_object* v___x_2835_; 
v___x_2835_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2835_, 0, v___x_2834_);
return v___x_2835_;
}
}
}
else
{
lean_object* v_a_2838_; lean_object* v___x_2839_; lean_object* v___x_2840_; lean_object* v___x_2841_; lean_object* v___x_2842_; lean_object* v___x_2843_; lean_object* v___x_2844_; lean_object* v___x_2845_; lean_object* v___x_2846_; uint8_t v___x_2847_; lean_object* v___x_2848_; lean_object* v___x_2849_; 
v_a_2838_ = lean_ctor_get(v_x_2827_, 0);
lean_inc(v_a_2838_);
lean_dec_ref_known(v_x_2827_, 1);
v___x_2839_ = l_Std_Http_Body_Stream_recvSelector(v_stream_2823_);
v___x_2840_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2840_, 0, v___x_2839_);
lean_ctor_set(v___x_2840_, 1, v___f_2824_);
v___x_2841_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2841_, 0, v_a_2838_);
lean_ctor_set(v___x_2841_, 1, v___f_2825_);
v___x_2842_ = lean_unsigned_to_nat(2u);
v___x_2843_ = lean_mk_empty_array_with_capacity(v___x_2842_);
v___x_2844_ = lean_array_push(v___x_2843_, v___x_2840_);
v___x_2845_ = lean_array_push(v___x_2844_, v___x_2841_);
v___x_2846_ = lean_unsigned_to_nat(0u);
v___x_2847_ = 0;
v___x_2848_ = l_Std_Async_Selectable_one___redArg(v___x_2845_);
v___x_2849_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_2846_, v___x_2847_, v___x_2848_, v___f_2826_);
return v___x_2849_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_forIn_x27_loop___redArg___lam__4___boxed(lean_object* v_stream_2850_, lean_object* v___f_2851_, lean_object* v___f_2852_, lean_object* v___f_2853_, lean_object* v_x_2854_, lean_object* v___y_2855_){
_start:
{
lean_object* v_res_2856_; 
v_res_2856_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_forIn_x27_loop___redArg___lam__4(v_stream_2850_, v___f_2851_, v___f_2852_, v___f_2853_, v_x_2854_);
return v_res_2856_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_forIn_x27_loop___redArg___lam__2___boxed(lean_object* v_step_2859_, lean_object* v_stream_2860_, lean_object* v___y_2861_, lean_object* v_x_2862_, lean_object* v___y_2863_){
_start:
{
lean_object* v_res_2864_; 
v_res_2864_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_forIn_x27_loop___redArg___lam__2(v_step_2859_, v_stream_2860_, v___y_2861_, v_x_2862_);
lean_dec_ref(v___y_2861_);
return v_res_2864_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_forIn_x27_loop___redArg(lean_object* v_step_2866_, lean_object* v_stream_2867_, lean_object* v_acc_2868_, lean_object* v___y_2869_){
_start:
{
lean_object* v___f_2871_; lean_object* v___f_2872_; lean_object* v___f_2873_; lean_object* v___f_2874_; lean_object* v___f_2875_; lean_object* v___f_2876_; lean_object* v___x_2877_; uint8_t v___x_2878_; lean_object* v___x_2879_; lean_object* v___x_2880_; lean_object* v___x_2881_; lean_object* v___x_2882_; 
v___f_2871_ = ((lean_object*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_forIn_x27_loop___redArg___closed__0));
v___f_2872_ = ((lean_object*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_forIn_x27_loop___redArg___closed__1));
lean_inc_ref_n(v___y_2869_, 3);
lean_inc_ref(v_stream_2867_);
lean_inc_ref(v_step_2866_);
v___f_2873_ = lean_alloc_closure((void*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_forIn_x27_loop___redArg___lam__2___boxed), 5, 3);
lean_closure_set(v___f_2873_, 0, v_step_2866_);
lean_closure_set(v___f_2873_, 1, v_stream_2867_);
lean_closure_set(v___f_2873_, 2, v___y_2869_);
v___f_2874_ = lean_alloc_closure((void*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_forIn_x27_loop___redArg___lam__3___boxed), 6, 4);
lean_closure_set(v___f_2874_, 0, v_step_2866_);
lean_closure_set(v___f_2874_, 1, v_acc_2868_);
lean_closure_set(v___f_2874_, 2, v___y_2869_);
lean_closure_set(v___f_2874_, 3, v___f_2873_);
v___f_2875_ = lean_alloc_closure((void*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_forIn_x27_loop___redArg___lam__4___boxed), 6, 4);
lean_closure_set(v___f_2875_, 0, v_stream_2867_);
lean_closure_set(v___f_2875_, 1, v___f_2871_);
lean_closure_set(v___f_2875_, 2, v___f_2872_);
lean_closure_set(v___f_2875_, 3, v___f_2874_);
v___f_2876_ = ((lean_object*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_forIn_x27_loop___redArg___closed__2));
v___x_2877_ = lean_unsigned_to_nat(0u);
v___x_2878_ = 0;
v___x_2879_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2879_, 0, v___y_2869_);
v___x_2880_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2880_, 0, v___x_2879_);
v___x_2881_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_2877_, v___x_2878_, v___x_2880_, v___f_2876_);
v___x_2882_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_2877_, v___x_2878_, v___x_2881_, v___f_2875_);
return v___x_2882_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_forIn_x27_loop___redArg___lam__2(lean_object* v_step_2883_, lean_object* v_stream_2884_, lean_object* v___y_2885_, lean_object* v_x_2886_){
_start:
{
if (lean_obj_tag(v_x_2886_) == 0)
{
lean_object* v_a_2888_; lean_object* v___x_2890_; uint8_t v_isShared_2891_; uint8_t v_isSharedCheck_2896_; 
lean_dec_ref(v_stream_2884_);
lean_dec_ref(v_step_2883_);
v_a_2888_ = lean_ctor_get(v_x_2886_, 0);
v_isSharedCheck_2896_ = !lean_is_exclusive(v_x_2886_);
if (v_isSharedCheck_2896_ == 0)
{
v___x_2890_ = v_x_2886_;
v_isShared_2891_ = v_isSharedCheck_2896_;
goto v_resetjp_2889_;
}
else
{
lean_inc(v_a_2888_);
lean_dec(v_x_2886_);
v___x_2890_ = lean_box(0);
v_isShared_2891_ = v_isSharedCheck_2896_;
goto v_resetjp_2889_;
}
v_resetjp_2889_:
{
lean_object* v___x_2893_; 
if (v_isShared_2891_ == 0)
{
v___x_2893_ = v___x_2890_;
goto v_reusejp_2892_;
}
else
{
lean_object* v_reuseFailAlloc_2895_; 
v_reuseFailAlloc_2895_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2895_, 0, v_a_2888_);
v___x_2893_ = v_reuseFailAlloc_2895_;
goto v_reusejp_2892_;
}
v_reusejp_2892_:
{
lean_object* v___x_2894_; 
v___x_2894_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2894_, 0, v___x_2893_);
return v___x_2894_;
}
}
}
else
{
lean_object* v_a_2897_; lean_object* v___x_2899_; uint8_t v_isShared_2900_; uint8_t v_isSharedCheck_2914_; 
v_a_2897_ = lean_ctor_get(v_x_2886_, 0);
v_isSharedCheck_2914_ = !lean_is_exclusive(v_x_2886_);
if (v_isSharedCheck_2914_ == 0)
{
v___x_2899_ = v_x_2886_;
v_isShared_2900_ = v_isSharedCheck_2914_;
goto v_resetjp_2898_;
}
else
{
lean_inc(v_a_2897_);
lean_dec(v_x_2886_);
v___x_2899_ = lean_box(0);
v_isShared_2900_ = v_isSharedCheck_2914_;
goto v_resetjp_2898_;
}
v_resetjp_2898_:
{
if (lean_obj_tag(v_a_2897_) == 0)
{
lean_object* v_a_2901_; lean_object* v___x_2903_; uint8_t v_isShared_2904_; uint8_t v_isSharedCheck_2911_; 
lean_dec_ref(v_stream_2884_);
lean_dec_ref(v_step_2883_);
v_a_2901_ = lean_ctor_get(v_a_2897_, 0);
v_isSharedCheck_2911_ = !lean_is_exclusive(v_a_2897_);
if (v_isSharedCheck_2911_ == 0)
{
v___x_2903_ = v_a_2897_;
v_isShared_2904_ = v_isSharedCheck_2911_;
goto v_resetjp_2902_;
}
else
{
lean_inc(v_a_2901_);
lean_dec(v_a_2897_);
v___x_2903_ = lean_box(0);
v_isShared_2904_ = v_isSharedCheck_2911_;
goto v_resetjp_2902_;
}
v_resetjp_2902_:
{
lean_object* v___x_2906_; 
if (v_isShared_2900_ == 0)
{
lean_ctor_set(v___x_2899_, 0, v_a_2901_);
v___x_2906_ = v___x_2899_;
goto v_reusejp_2905_;
}
else
{
lean_object* v_reuseFailAlloc_2910_; 
v_reuseFailAlloc_2910_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2910_, 0, v_a_2901_);
v___x_2906_ = v_reuseFailAlloc_2910_;
goto v_reusejp_2905_;
}
v_reusejp_2905_:
{
lean_object* v___x_2908_; 
if (v_isShared_2904_ == 0)
{
lean_ctor_set(v___x_2903_, 0, v___x_2906_);
v___x_2908_ = v___x_2903_;
goto v_reusejp_2907_;
}
else
{
lean_object* v_reuseFailAlloc_2909_; 
v_reuseFailAlloc_2909_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2909_, 0, v___x_2906_);
v___x_2908_ = v_reuseFailAlloc_2909_;
goto v_reusejp_2907_;
}
v_reusejp_2907_:
{
return v___x_2908_;
}
}
}
}
else
{
lean_object* v_a_2912_; lean_object* v___x_2913_; 
lean_del_object(v___x_2899_);
v_a_2912_ = lean_ctor_get(v_a_2897_, 0);
lean_inc(v_a_2912_);
lean_dec_ref_known(v_a_2897_, 1);
v___x_2913_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_forIn_x27_loop___redArg(v_step_2883_, v_stream_2884_, v_a_2912_, v___y_2885_);
return v___x_2913_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_forIn_x27_loop___redArg___boxed(lean_object* v_step_2915_, lean_object* v_stream_2916_, lean_object* v_acc_2917_, lean_object* v___y_2918_, lean_object* v___y_2919_){
_start:
{
lean_object* v_res_2920_; 
v_res_2920_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_forIn_x27_loop___redArg(v_step_2915_, v_stream_2916_, v_acc_2917_, v___y_2918_);
lean_dec_ref(v___y_2918_);
return v_res_2920_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_forIn_x27_loop(lean_object* v_00_u03b2_2921_, lean_object* v_step_2922_, lean_object* v_stream_2923_, lean_object* v_acc_2924_, lean_object* v___y_2925_){
_start:
{
lean_object* v___x_2927_; 
v___x_2927_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_forIn_x27_loop___redArg(v_step_2922_, v_stream_2923_, v_acc_2924_, v___y_2925_);
return v___x_2927_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_forIn_x27_loop___boxed(lean_object* v_00_u03b2_2928_, lean_object* v_step_2929_, lean_object* v_stream_2930_, lean_object* v_acc_2931_, lean_object* v___y_2932_, lean_object* v___y_2933_){
_start:
{
lean_object* v_res_2934_; 
v_res_2934_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_forIn_x27_loop(v_00_u03b2_2928_, v_step_2929_, v_stream_2930_, v_acc_2931_, v___y_2932_);
lean_dec_ref(v___y_2932_);
return v_res_2934_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_forIn_x27___redArg(lean_object* v_stream_2935_, lean_object* v_acc_2936_, lean_object* v_step_2937_, lean_object* v___y_2938_){
_start:
{
lean_object* v___x_2940_; 
v___x_2940_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_forIn_x27_loop___redArg(v_step_2937_, v_stream_2935_, v_acc_2936_, v___y_2938_);
return v___x_2940_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_forIn_x27___redArg___boxed(lean_object* v_stream_2941_, lean_object* v_acc_2942_, lean_object* v_step_2943_, lean_object* v___y_2944_, lean_object* v___y_2945_){
_start:
{
lean_object* v_res_2946_; 
v_res_2946_ = l_Std_Http_Body_Stream_forIn_x27___redArg(v_stream_2941_, v_acc_2942_, v_step_2943_, v___y_2944_);
lean_dec_ref(v___y_2944_);
return v_res_2946_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_forIn_x27(lean_object* v_00_u03b2_2947_, lean_object* v_stream_2948_, lean_object* v_acc_2949_, lean_object* v_step_2950_, lean_object* v___y_2951_){
_start:
{
lean_object* v___x_2953_; 
v___x_2953_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_forIn_x27_loop___redArg(v_step_2950_, v_stream_2948_, v_acc_2949_, v___y_2951_);
return v___x_2953_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_forIn_x27___boxed(lean_object* v_00_u03b2_2954_, lean_object* v_stream_2955_, lean_object* v_acc_2956_, lean_object* v_step_2957_, lean_object* v___y_2958_, lean_object* v___y_2959_){
_start:
{
lean_object* v_res_2960_; 
v_res_2960_ = l_Std_Http_Body_Stream_forIn_x27(v_00_u03b2_2954_, v_stream_2955_, v_acc_2956_, v_step_2957_, v___y_2958_);
lean_dec_ref(v___y_2958_);
return v_res_2960_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_instNextChunkContextAsync___lam__0(lean_object* v_x_2963_){
_start:
{
if (lean_obj_tag(v_x_2963_) == 0)
{
lean_object* v_a_2965_; lean_object* v___x_2967_; uint8_t v_isShared_2968_; uint8_t v_isSharedCheck_2973_; 
v_a_2965_ = lean_ctor_get(v_x_2963_, 0);
v_isSharedCheck_2973_ = !lean_is_exclusive(v_x_2963_);
if (v_isSharedCheck_2973_ == 0)
{
v___x_2967_ = v_x_2963_;
v_isShared_2968_ = v_isSharedCheck_2973_;
goto v_resetjp_2966_;
}
else
{
lean_inc(v_a_2965_);
lean_dec(v_x_2963_);
v___x_2967_ = lean_box(0);
v_isShared_2968_ = v_isSharedCheck_2973_;
goto v_resetjp_2966_;
}
v_resetjp_2966_:
{
lean_object* v___x_2970_; 
if (v_isShared_2968_ == 0)
{
v___x_2970_ = v___x_2967_;
goto v_reusejp_2969_;
}
else
{
lean_object* v_reuseFailAlloc_2972_; 
v_reuseFailAlloc_2972_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2972_, 0, v_a_2965_);
v___x_2970_ = v_reuseFailAlloc_2972_;
goto v_reusejp_2969_;
}
v_reusejp_2969_:
{
lean_object* v___x_2971_; 
v___x_2971_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2971_, 0, v___x_2970_);
return v___x_2971_;
}
}
}
else
{
lean_object* v_a_2974_; lean_object* v___x_2976_; uint8_t v_isShared_2977_; uint8_t v_isSharedCheck_2984_; 
v_a_2974_ = lean_ctor_get(v_x_2963_, 0);
v_isSharedCheck_2984_ = !lean_is_exclusive(v_x_2963_);
if (v_isSharedCheck_2984_ == 0)
{
v___x_2976_ = v_x_2963_;
v_isShared_2977_ = v_isSharedCheck_2984_;
goto v_resetjp_2975_;
}
else
{
lean_inc(v_a_2974_);
lean_dec(v_x_2963_);
v___x_2976_ = lean_box(0);
v_isShared_2977_ = v_isSharedCheck_2984_;
goto v_resetjp_2975_;
}
v_resetjp_2975_:
{
lean_object* v_token_2978_; lean_object* v___x_2979_; lean_object* v___x_2981_; 
v_token_2978_ = lean_ctor_get(v_a_2974_, 1);
lean_inc_ref(v_token_2978_);
lean_dec(v_a_2974_);
v___x_2979_ = l_Std_CancellationToken_selector(v_token_2978_);
if (v_isShared_2977_ == 0)
{
lean_ctor_set(v___x_2976_, 0, v___x_2979_);
v___x_2981_ = v___x_2976_;
goto v_reusejp_2980_;
}
else
{
lean_object* v_reuseFailAlloc_2983_; 
v_reuseFailAlloc_2983_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2983_, 0, v___x_2979_);
v___x_2981_ = v_reuseFailAlloc_2983_;
goto v_reusejp_2980_;
}
v_reusejp_2980_:
{
lean_object* v___x_2982_; 
v___x_2982_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2982_, 0, v___x_2981_);
return v___x_2982_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_instNextChunkContextAsync___lam__0___boxed(lean_object* v_x_2985_, lean_object* v___y_2986_){
_start:
{
lean_object* v_res_2987_; 
v_res_2987_ = l_Std_Http_Body_Stream_instNextChunkContextAsync___lam__0(v_x_2985_);
return v_res_2987_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_instNextChunkContextAsync___lam__1(lean_object* v_x_2988_){
_start:
{
lean_object* v___x_2990_; 
v___x_2990_ = ((lean_object*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_tryRecv_x27___at___00__private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___at___00Std_Http_Body_Stream_tryRecv_spec__0_spec__0___lam__2___closed__0));
return v___x_2990_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_instNextChunkContextAsync___lam__1___boxed(lean_object* v_x_2991_, lean_object* v___y_2992_){
_start:
{
lean_object* v_res_2993_; 
v_res_2993_ = l_Std_Http_Body_Stream_instNextChunkContextAsync___lam__1(v_x_2991_);
return v_res_2993_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_instNextChunkContextAsync___lam__2(lean_object* v___y_2994_){
_start:
{
lean_object* v___x_2996_; lean_object* v___x_2997_; 
v___x_2996_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2996_, 0, v___y_2994_);
v___x_2997_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2997_, 0, v___x_2996_);
return v___x_2997_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_instNextChunkContextAsync___lam__2___boxed(lean_object* v___y_2998_, lean_object* v___y_2999_){
_start:
{
lean_object* v_res_3000_; 
v_res_3000_ = l_Std_Http_Body_Stream_instNextChunkContextAsync___lam__2(v___y_2998_);
return v_res_3000_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_instNextChunkContextAsync___lam__3(lean_object* v_stream_3001_, lean_object* v___f_3002_, lean_object* v___f_3003_, lean_object* v_x_3004_){
_start:
{
if (lean_obj_tag(v_x_3004_) == 0)
{
lean_object* v_a_3006_; lean_object* v___x_3008_; uint8_t v_isShared_3009_; uint8_t v_isSharedCheck_3014_; 
lean_dec_ref(v___f_3003_);
lean_dec_ref(v___f_3002_);
lean_dec_ref(v_stream_3001_);
v_a_3006_ = lean_ctor_get(v_x_3004_, 0);
v_isSharedCheck_3014_ = !lean_is_exclusive(v_x_3004_);
if (v_isSharedCheck_3014_ == 0)
{
v___x_3008_ = v_x_3004_;
v_isShared_3009_ = v_isSharedCheck_3014_;
goto v_resetjp_3007_;
}
else
{
lean_inc(v_a_3006_);
lean_dec(v_x_3004_);
v___x_3008_ = lean_box(0);
v_isShared_3009_ = v_isSharedCheck_3014_;
goto v_resetjp_3007_;
}
v_resetjp_3007_:
{
lean_object* v___x_3011_; 
if (v_isShared_3009_ == 0)
{
v___x_3011_ = v___x_3008_;
goto v_reusejp_3010_;
}
else
{
lean_object* v_reuseFailAlloc_3013_; 
v_reuseFailAlloc_3013_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3013_, 0, v_a_3006_);
v___x_3011_ = v_reuseFailAlloc_3013_;
goto v_reusejp_3010_;
}
v_reusejp_3010_:
{
lean_object* v___x_3012_; 
v___x_3012_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3012_, 0, v___x_3011_);
return v___x_3012_;
}
}
}
else
{
lean_object* v_a_3015_; lean_object* v___x_3016_; lean_object* v___x_3017_; lean_object* v___x_3018_; lean_object* v___x_3019_; lean_object* v___x_3020_; lean_object* v___x_3021_; lean_object* v___x_3022_; lean_object* v___x_3023_; 
v_a_3015_ = lean_ctor_get(v_x_3004_, 0);
lean_inc(v_a_3015_);
lean_dec_ref_known(v_x_3004_, 1);
v___x_3016_ = l_Std_Http_Body_Stream_recvSelector(v_stream_3001_);
v___x_3017_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3017_, 0, v___x_3016_);
lean_ctor_set(v___x_3017_, 1, v___f_3002_);
v___x_3018_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3018_, 0, v_a_3015_);
lean_ctor_set(v___x_3018_, 1, v___f_3003_);
v___x_3019_ = lean_unsigned_to_nat(2u);
v___x_3020_ = lean_mk_empty_array_with_capacity(v___x_3019_);
v___x_3021_ = lean_array_push(v___x_3020_, v___x_3017_);
v___x_3022_ = lean_array_push(v___x_3021_, v___x_3018_);
v___x_3023_ = l_Std_Async_Selectable_one___redArg(v___x_3022_);
return v___x_3023_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_instNextChunkContextAsync___lam__3___boxed(lean_object* v_stream_3024_, lean_object* v___f_3025_, lean_object* v___f_3026_, lean_object* v_x_3027_, lean_object* v___y_3028_){
_start:
{
lean_object* v_res_3029_; 
v_res_3029_ = l_Std_Http_Body_Stream_instNextChunkContextAsync___lam__3(v_stream_3024_, v___f_3025_, v___f_3026_, v_x_3027_);
return v_res_3029_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_instNextChunkContextAsync___lam__4(lean_object* v___f_3030_, lean_object* v___f_3031_, lean_object* v___f_3032_, lean_object* v_stream_3033_, lean_object* v___y_3034_){
_start:
{
lean_object* v___f_3036_; lean_object* v___x_3037_; uint8_t v___x_3038_; lean_object* v___x_3039_; lean_object* v___x_3040_; lean_object* v___x_3041_; lean_object* v___x_3042_; 
v___f_3036_ = lean_alloc_closure((void*)(l_Std_Http_Body_Stream_instNextChunkContextAsync___lam__3___boxed), 5, 3);
lean_closure_set(v___f_3036_, 0, v_stream_3033_);
lean_closure_set(v___f_3036_, 1, v___f_3030_);
lean_closure_set(v___f_3036_, 2, v___f_3031_);
v___x_3037_ = lean_unsigned_to_nat(0u);
v___x_3038_ = 0;
lean_inc_ref(v___y_3034_);
v___x_3039_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3039_, 0, v___y_3034_);
v___x_3040_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3040_, 0, v___x_3039_);
v___x_3041_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_3037_, v___x_3038_, v___x_3040_, v___f_3032_);
v___x_3042_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_3037_, v___x_3038_, v___x_3041_, v___f_3036_);
return v___x_3042_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_instNextChunkContextAsync___lam__4___boxed(lean_object* v___f_3043_, lean_object* v___f_3044_, lean_object* v___f_3045_, lean_object* v_stream_3046_, lean_object* v___y_3047_, lean_object* v___y_3048_){
_start:
{
lean_object* v_res_3049_; 
v_res_3049_ = l_Std_Http_Body_Stream_instNextChunkContextAsync___lam__4(v___f_3043_, v___f_3044_, v___f_3045_, v_stream_3046_, v___y_3047_);
lean_dec_ref(v___y_3047_);
return v_res_3049_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_readAll_loop___redArg___lam__1(lean_object* v_toPure_3060_, lean_object* v_result_3061_, lean_object* v_maximumSize_3062_, lean_object* v_inst_3063_, lean_object* v_inst_3064_, lean_object* v_inst_3065_, lean_object* v_stream_3066_, lean_object* v_toBind_3067_, lean_object* v_____do__lift_3068_){
_start:
{
if (lean_obj_tag(v_____do__lift_3068_) == 0)
{
lean_object* v___x_3069_; 
lean_dec(v_toBind_3067_);
lean_dec_ref(v_stream_3066_);
lean_dec(v_inst_3065_);
lean_dec_ref(v_inst_3064_);
lean_dec_ref(v_inst_3063_);
lean_dec(v_maximumSize_3062_);
v___x_3069_ = lean_apply_2(v_toPure_3060_, lean_box(0), v_result_3061_);
return v___x_3069_;
}
else
{
lean_object* v_val_3070_; lean_object* v___x_3072_; uint8_t v_isShared_3073_; uint8_t v_isSharedCheck_3101_; 
lean_dec(v_toPure_3060_);
v_val_3070_ = lean_ctor_get(v_____do__lift_3068_, 0);
v_isSharedCheck_3101_ = !lean_is_exclusive(v_____do__lift_3068_);
if (v_isSharedCheck_3101_ == 0)
{
v___x_3072_ = v_____do__lift_3068_;
v_isShared_3073_ = v_isSharedCheck_3101_;
goto v_resetjp_3071_;
}
else
{
lean_inc(v_val_3070_);
lean_dec(v_____do__lift_3068_);
v___x_3072_ = lean_box(0);
v_isShared_3073_ = v_isSharedCheck_3101_;
goto v_resetjp_3071_;
}
v_resetjp_3071_:
{
lean_object* v_data_3074_; lean_object* v___x_3075_; lean_object* v___x_3076_; lean_object* v___x_3077_; uint8_t v___x_3078_; lean_object* v_result_3079_; 
v_data_3074_ = lean_ctor_get(v_val_3070_, 0);
lean_inc_ref(v_data_3074_);
lean_dec(v_val_3070_);
v___x_3075_ = lean_unsigned_to_nat(0u);
v___x_3076_ = lean_byte_array_size(v_result_3061_);
v___x_3077_ = lean_byte_array_size(v_data_3074_);
v___x_3078_ = 0;
v_result_3079_ = lean_byte_array_copy_slice(v_data_3074_, v___x_3075_, v_result_3061_, v___x_3076_, v___x_3077_, v___x_3078_);
lean_dec_ref(v_data_3074_);
if (lean_obj_tag(v_maximumSize_3062_) == 1)
{
lean_object* v_val_3080_; lean_object* v___x_3081_; uint64_t v___x_3082_; uint64_t v___x_3083_; uint8_t v___x_3084_; 
v_val_3080_ = lean_ctor_get(v_maximumSize_3062_, 0);
v___x_3081_ = lean_byte_array_size(v_result_3079_);
v___x_3082_ = lean_uint64_of_nat(v___x_3081_);
v___x_3083_ = lean_unbox_uint64(v_val_3080_);
v___x_3084_ = lean_uint64_dec_lt(v___x_3083_, v___x_3082_);
if (v___x_3084_ == 0)
{
lean_object* v___x_3085_; 
lean_del_object(v___x_3072_);
lean_dec(v_toBind_3067_);
v___x_3085_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_readAll_loop___redArg(v_inst_3063_, v_inst_3064_, v_inst_3065_, v_stream_3066_, v_maximumSize_3062_, v_result_3079_);
return v___x_3085_;
}
else
{
lean_object* v_throw_3086_; lean_object* v___f_3087_; lean_object* v___x_3088_; uint64_t v___x_3089_; lean_object* v___x_3090_; lean_object* v___x_3091_; lean_object* v___x_3092_; lean_object* v___x_3093_; lean_object* v___x_3094_; lean_object* v___x_3096_; 
lean_inc(v_val_3080_);
v_throw_3086_ = lean_ctor_get(v_inst_3064_, 0);
lean_inc(v_throw_3086_);
v___f_3087_ = lean_alloc_closure((void*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_readAll_loop___redArg___lam__0), 7, 6);
lean_closure_set(v___f_3087_, 0, v_inst_3063_);
lean_closure_set(v___f_3087_, 1, v_inst_3064_);
lean_closure_set(v___f_3087_, 2, v_inst_3065_);
lean_closure_set(v___f_3087_, 3, v_stream_3066_);
lean_closure_set(v___f_3087_, 4, v_maximumSize_3062_);
lean_closure_set(v___f_3087_, 5, v_result_3079_);
v___x_3088_ = ((lean_object*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_readAll_loop___redArg___lam__1___closed__0));
v___x_3089_ = lean_unbox_uint64(v_val_3080_);
lean_dec(v_val_3080_);
v___x_3090_ = lean_uint64_to_nat(v___x_3089_);
v___x_3091_ = l_Nat_reprFast(v___x_3090_);
v___x_3092_ = lean_string_append(v___x_3088_, v___x_3091_);
lean_dec_ref(v___x_3091_);
v___x_3093_ = ((lean_object*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_readAll_loop___redArg___lam__1___closed__1));
v___x_3094_ = lean_string_append(v___x_3092_, v___x_3093_);
if (v_isShared_3073_ == 0)
{
lean_ctor_set_tag(v___x_3072_, 18);
lean_ctor_set(v___x_3072_, 0, v___x_3094_);
v___x_3096_ = v___x_3072_;
goto v_reusejp_3095_;
}
else
{
lean_object* v_reuseFailAlloc_3099_; 
v_reuseFailAlloc_3099_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3099_, 0, v___x_3094_);
v___x_3096_ = v_reuseFailAlloc_3099_;
goto v_reusejp_3095_;
}
v_reusejp_3095_:
{
lean_object* v___x_3097_; lean_object* v___x_3098_; 
v___x_3097_ = lean_apply_2(v_throw_3086_, lean_box(0), v___x_3096_);
v___x_3098_ = lean_apply_4(v_toBind_3067_, lean_box(0), lean_box(0), v___x_3097_, v___f_3087_);
return v___x_3098_;
}
}
}
else
{
lean_object* v___x_3100_; 
lean_del_object(v___x_3072_);
lean_dec(v_toBind_3067_);
v___x_3100_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_readAll_loop___redArg(v_inst_3063_, v_inst_3064_, v_inst_3065_, v_stream_3066_, v_maximumSize_3062_, v_result_3079_);
return v___x_3100_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_readAll_loop___redArg(lean_object* v_inst_3102_, lean_object* v_inst_3103_, lean_object* v_inst_3104_, lean_object* v_stream_3105_, lean_object* v_maximumSize_3106_, lean_object* v_result_3107_){
_start:
{
lean_object* v_toApplicative_3108_; lean_object* v_toBind_3109_; lean_object* v_toPure_3110_; lean_object* v___x_3111_; lean_object* v___f_3112_; lean_object* v___x_3113_; 
v_toApplicative_3108_ = lean_ctor_get(v_inst_3102_, 0);
v_toBind_3109_ = lean_ctor_get(v_inst_3102_, 1);
lean_inc_n(v_toBind_3109_, 2);
v_toPure_3110_ = lean_ctor_get(v_toApplicative_3108_, 1);
lean_inc(v_toPure_3110_);
lean_inc(v_inst_3104_);
lean_inc_ref(v_stream_3105_);
v___x_3111_ = lean_apply_1(v_inst_3104_, v_stream_3105_);
v___f_3112_ = lean_alloc_closure((void*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_readAll_loop___redArg___lam__1), 9, 8);
lean_closure_set(v___f_3112_, 0, v_toPure_3110_);
lean_closure_set(v___f_3112_, 1, v_result_3107_);
lean_closure_set(v___f_3112_, 2, v_maximumSize_3106_);
lean_closure_set(v___f_3112_, 3, v_inst_3102_);
lean_closure_set(v___f_3112_, 4, v_inst_3103_);
lean_closure_set(v___f_3112_, 5, v_inst_3104_);
lean_closure_set(v___f_3112_, 6, v_stream_3105_);
lean_closure_set(v___f_3112_, 7, v_toBind_3109_);
v___x_3113_ = lean_apply_4(v_toBind_3109_, lean_box(0), lean_box(0), v___x_3111_, v___f_3112_);
return v___x_3113_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_readAll_loop___redArg___lam__0(lean_object* v_inst_3114_, lean_object* v_inst_3115_, lean_object* v_inst_3116_, lean_object* v_stream_3117_, lean_object* v_maximumSize_3118_, lean_object* v_result_3119_, lean_object* v_____r_3120_){
_start:
{
lean_object* v___x_3121_; 
v___x_3121_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_readAll_loop___redArg(v_inst_3114_, v_inst_3115_, v_inst_3116_, v_stream_3117_, v_maximumSize_3118_, v_result_3119_);
return v___x_3121_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_readAll_loop(lean_object* v_m_3122_, lean_object* v_inst_3123_, lean_object* v_inst_3124_, lean_object* v_inst_3125_, lean_object* v_stream_3126_, lean_object* v_maximumSize_3127_, lean_object* v_result_3128_){
_start:
{
lean_object* v___x_3129_; 
v___x_3129_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_readAll_loop___redArg(v_inst_3123_, v_inst_3124_, v_inst_3125_, v_stream_3126_, v_maximumSize_3127_, v_result_3128_);
return v___x_3129_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_readAll___redArg___lam__0(lean_object* v_inst_3130_, lean_object* v_inst_3131_, lean_object* v_toPure_3132_, lean_object* v_result_3133_){
_start:
{
lean_object* v___x_3134_; 
v___x_3134_ = lean_apply_1(v_inst_3130_, v_result_3133_);
if (lean_obj_tag(v___x_3134_) == 0)
{
lean_object* v_a_3135_; lean_object* v___x_3137_; uint8_t v_isShared_3138_; uint8_t v_isSharedCheck_3144_; 
lean_dec(v_toPure_3132_);
v_a_3135_ = lean_ctor_get(v___x_3134_, 0);
v_isSharedCheck_3144_ = !lean_is_exclusive(v___x_3134_);
if (v_isSharedCheck_3144_ == 0)
{
v___x_3137_ = v___x_3134_;
v_isShared_3138_ = v_isSharedCheck_3144_;
goto v_resetjp_3136_;
}
else
{
lean_inc(v_a_3135_);
lean_dec(v___x_3134_);
v___x_3137_ = lean_box(0);
v_isShared_3138_ = v_isSharedCheck_3144_;
goto v_resetjp_3136_;
}
v_resetjp_3136_:
{
lean_object* v_throw_3139_; lean_object* v___x_3141_; 
v_throw_3139_ = lean_ctor_get(v_inst_3131_, 0);
lean_inc(v_throw_3139_);
lean_dec_ref(v_inst_3131_);
if (v_isShared_3138_ == 0)
{
lean_ctor_set_tag(v___x_3137_, 18);
v___x_3141_ = v___x_3137_;
goto v_reusejp_3140_;
}
else
{
lean_object* v_reuseFailAlloc_3143_; 
v_reuseFailAlloc_3143_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3143_, 0, v_a_3135_);
v___x_3141_ = v_reuseFailAlloc_3143_;
goto v_reusejp_3140_;
}
v_reusejp_3140_:
{
lean_object* v___x_3142_; 
v___x_3142_ = lean_apply_2(v_throw_3139_, lean_box(0), v___x_3141_);
return v___x_3142_;
}
}
}
else
{
lean_object* v_a_3145_; lean_object* v___x_3146_; 
lean_dec_ref(v_inst_3131_);
v_a_3145_ = lean_ctor_get(v___x_3134_, 0);
lean_inc(v_a_3145_);
lean_dec_ref_known(v___x_3134_, 1);
v___x_3146_ = lean_apply_2(v_toPure_3132_, lean_box(0), v_a_3145_);
return v___x_3146_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_readAll___redArg(lean_object* v_inst_3147_, lean_object* v_inst_3148_, lean_object* v_inst_3149_, lean_object* v_inst_3150_, lean_object* v_stream_3151_, lean_object* v_maximumSize_3152_){
_start:
{
lean_object* v_toApplicative_3153_; lean_object* v_toBind_3154_; lean_object* v_toPure_3155_; lean_object* v___x_3156_; lean_object* v___x_3157_; lean_object* v___f_3158_; lean_object* v___x_3159_; 
v_toApplicative_3153_ = lean_ctor_get(v_inst_3148_, 0);
v_toBind_3154_ = lean_ctor_get(v_inst_3148_, 1);
lean_inc(v_toBind_3154_);
v_toPure_3155_ = lean_ctor_get(v_toApplicative_3153_, 1);
lean_inc(v_toPure_3155_);
v___x_3156_ = l_ByteArray_empty;
lean_inc_ref(v_inst_3149_);
v___x_3157_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_readAll_loop___redArg(v_inst_3148_, v_inst_3149_, v_inst_3150_, v_stream_3151_, v_maximumSize_3152_, v___x_3156_);
v___f_3158_ = lean_alloc_closure((void*)(l_Std_Http_Body_Stream_readAll___redArg___lam__0), 4, 3);
lean_closure_set(v___f_3158_, 0, v_inst_3147_);
lean_closure_set(v___f_3158_, 1, v_inst_3149_);
lean_closure_set(v___f_3158_, 2, v_toPure_3155_);
v___x_3159_ = lean_apply_4(v_toBind_3154_, lean_box(0), lean_box(0), v___x_3157_, v___f_3158_);
return v___x_3159_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_readAll(lean_object* v_00_u03b1_3160_, lean_object* v_m_3161_, lean_object* v_inst_3162_, lean_object* v_inst_3163_, lean_object* v_inst_3164_, lean_object* v_inst_3165_, lean_object* v_stream_3166_, lean_object* v_maximumSize_3167_){
_start:
{
lean_object* v___x_3168_; 
v___x_3168_ = l_Std_Http_Body_Stream_readAll___redArg(v_inst_3162_, v_inst_3163_, v_inst_3164_, v_inst_3165_, v_stream_3166_, v_maximumSize_3167_);
return v___x_3168_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_drain_loop___redArg___lam__0(lean_object* v_toPure_3169_, lean_object* v_____r_3170_){
_start:
{
lean_object* v___x_3171_; lean_object* v___x_3172_; 
v___x_3171_ = lean_box(0);
v___x_3172_ = lean_apply_2(v_toPure_3169_, lean_box(0), v___x_3171_);
return v___x_3172_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_drain_loop___redArg___lam__1(lean_object* v_toPure_3173_, uint64_t v_consumed_3174_, lean_object* v_drainLimit_3175_, lean_object* v_inst_3176_, lean_object* v_inst_3177_, lean_object* v_stream_3178_, lean_object* v_closeStream_3179_, lean_object* v_toBind_3180_, lean_object* v___f_3181_, lean_object* v_____do__lift_3182_){
_start:
{
if (lean_obj_tag(v_____do__lift_3182_) == 0)
{
lean_object* v___x_3183_; lean_object* v___x_3184_; 
lean_dec(v___f_3181_);
lean_dec(v_toBind_3180_);
lean_dec(v_closeStream_3179_);
lean_dec_ref(v_stream_3178_);
lean_dec(v_inst_3177_);
lean_dec_ref(v_inst_3176_);
lean_dec(v_drainLimit_3175_);
v___x_3183_ = lean_box(0);
v___x_3184_ = lean_apply_2(v_toPure_3173_, lean_box(0), v___x_3183_);
return v___x_3184_;
}
else
{
lean_object* v_val_3185_; lean_object* v_data_3186_; lean_object* v___x_3187_; uint64_t v___x_3188_; uint64_t v_consumed_3189_; 
lean_dec(v_toPure_3173_);
v_val_3185_ = lean_ctor_get(v_____do__lift_3182_, 0);
v_data_3186_ = lean_ctor_get(v_val_3185_, 0);
v___x_3187_ = lean_byte_array_size(v_data_3186_);
v___x_3188_ = lean_uint64_of_nat(v___x_3187_);
v_consumed_3189_ = lean_uint64_add(v_consumed_3174_, v___x_3188_);
if (lean_obj_tag(v_drainLimit_3175_) == 1)
{
lean_object* v_val_3190_; uint64_t v___x_3191_; uint8_t v___x_3192_; 
v_val_3190_ = lean_ctor_get(v_drainLimit_3175_, 0);
v___x_3191_ = lean_unbox_uint64(v_val_3190_);
v___x_3192_ = lean_uint64_dec_lt(v___x_3191_, v_consumed_3189_);
if (v___x_3192_ == 0)
{
lean_object* v___x_3193_; 
lean_dec(v___f_3181_);
lean_dec(v_toBind_3180_);
v___x_3193_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_drain_loop___redArg(v_inst_3176_, v_inst_3177_, v_stream_3178_, v_drainLimit_3175_, v_closeStream_3179_, v_consumed_3189_);
return v___x_3193_;
}
else
{
lean_object* v___x_3194_; 
lean_dec_ref_known(v_drainLimit_3175_, 1);
lean_dec_ref(v_stream_3178_);
lean_dec(v_inst_3177_);
lean_dec_ref(v_inst_3176_);
v___x_3194_ = lean_apply_4(v_toBind_3180_, lean_box(0), lean_box(0), v_closeStream_3179_, v___f_3181_);
return v___x_3194_;
}
}
else
{
lean_object* v___x_3195_; 
lean_dec(v___f_3181_);
lean_dec(v_toBind_3180_);
v___x_3195_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_drain_loop___redArg(v_inst_3176_, v_inst_3177_, v_stream_3178_, v_drainLimit_3175_, v_closeStream_3179_, v_consumed_3189_);
return v___x_3195_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_drain_loop___redArg___lam__1___boxed(lean_object* v_toPure_3196_, lean_object* v_consumed_3197_, lean_object* v_drainLimit_3198_, lean_object* v_inst_3199_, lean_object* v_inst_3200_, lean_object* v_stream_3201_, lean_object* v_closeStream_3202_, lean_object* v_toBind_3203_, lean_object* v___f_3204_, lean_object* v_____do__lift_3205_){
_start:
{
uint64_t v_consumed_boxed_3206_; lean_object* v_res_3207_; 
v_consumed_boxed_3206_ = lean_unbox_uint64(v_consumed_3197_);
lean_dec_ref(v_consumed_3197_);
v_res_3207_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_drain_loop___redArg___lam__1(v_toPure_3196_, v_consumed_boxed_3206_, v_drainLimit_3198_, v_inst_3199_, v_inst_3200_, v_stream_3201_, v_closeStream_3202_, v_toBind_3203_, v___f_3204_, v_____do__lift_3205_);
lean_dec(v_____do__lift_3205_);
return v_res_3207_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_drain_loop___redArg(lean_object* v_inst_3208_, lean_object* v_inst_3209_, lean_object* v_stream_3210_, lean_object* v_drainLimit_3211_, lean_object* v_closeStream_3212_, uint64_t v_consumed_3213_){
_start:
{
lean_object* v_toApplicative_3214_; lean_object* v_toBind_3215_; lean_object* v_toPure_3216_; lean_object* v___x_3217_; lean_object* v___f_3218_; lean_object* v___x_3219_; lean_object* v___f_3220_; lean_object* v___x_3221_; 
v_toApplicative_3214_ = lean_ctor_get(v_inst_3208_, 0);
v_toBind_3215_ = lean_ctor_get(v_inst_3208_, 1);
lean_inc_n(v_toBind_3215_, 2);
v_toPure_3216_ = lean_ctor_get(v_toApplicative_3214_, 1);
lean_inc_n(v_toPure_3216_, 2);
lean_inc(v_inst_3209_);
lean_inc_ref(v_stream_3210_);
v___x_3217_ = lean_apply_1(v_inst_3209_, v_stream_3210_);
v___f_3218_ = lean_alloc_closure((void*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_drain_loop___redArg___lam__0), 2, 1);
lean_closure_set(v___f_3218_, 0, v_toPure_3216_);
v___x_3219_ = lean_box_uint64(v_consumed_3213_);
v___f_3220_ = lean_alloc_closure((void*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_drain_loop___redArg___lam__1___boxed), 10, 9);
lean_closure_set(v___f_3220_, 0, v_toPure_3216_);
lean_closure_set(v___f_3220_, 1, v___x_3219_);
lean_closure_set(v___f_3220_, 2, v_drainLimit_3211_);
lean_closure_set(v___f_3220_, 3, v_inst_3208_);
lean_closure_set(v___f_3220_, 4, v_inst_3209_);
lean_closure_set(v___f_3220_, 5, v_stream_3210_);
lean_closure_set(v___f_3220_, 6, v_closeStream_3212_);
lean_closure_set(v___f_3220_, 7, v_toBind_3215_);
lean_closure_set(v___f_3220_, 8, v___f_3218_);
v___x_3221_ = lean_apply_4(v_toBind_3215_, lean_box(0), lean_box(0), v___x_3217_, v___f_3220_);
return v___x_3221_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_drain_loop___redArg___boxed(lean_object* v_inst_3222_, lean_object* v_inst_3223_, lean_object* v_stream_3224_, lean_object* v_drainLimit_3225_, lean_object* v_closeStream_3226_, lean_object* v_consumed_3227_){
_start:
{
uint64_t v_consumed_boxed_3228_; lean_object* v_res_3229_; 
v_consumed_boxed_3228_ = lean_unbox_uint64(v_consumed_3227_);
lean_dec_ref(v_consumed_3227_);
v_res_3229_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_drain_loop___redArg(v_inst_3222_, v_inst_3223_, v_stream_3224_, v_drainLimit_3225_, v_closeStream_3226_, v_consumed_boxed_3228_);
return v_res_3229_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_drain_loop(lean_object* v_m_3230_, lean_object* v_inst_3231_, lean_object* v_inst_3232_, lean_object* v_stream_3233_, lean_object* v_drainLimit_3234_, lean_object* v_closeStream_3235_, uint64_t v_consumed_3236_){
_start:
{
lean_object* v___x_3237_; 
v___x_3237_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_drain_loop___redArg(v_inst_3231_, v_inst_3232_, v_stream_3233_, v_drainLimit_3234_, v_closeStream_3235_, v_consumed_3236_);
return v___x_3237_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_drain_loop___boxed(lean_object* v_m_3238_, lean_object* v_inst_3239_, lean_object* v_inst_3240_, lean_object* v_stream_3241_, lean_object* v_drainLimit_3242_, lean_object* v_closeStream_3243_, lean_object* v_consumed_3244_){
_start:
{
uint64_t v_consumed_boxed_3245_; lean_object* v_res_3246_; 
v_consumed_boxed_3245_ = lean_unbox_uint64(v_consumed_3244_);
lean_dec_ref(v_consumed_3244_);
v_res_3246_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_drain_loop(v_m_3238_, v_inst_3239_, v_inst_3240_, v_stream_3241_, v_drainLimit_3242_, v_closeStream_3243_, v_consumed_boxed_3245_);
return v_res_3246_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_drain___redArg(lean_object* v_inst_3247_, lean_object* v_inst_3248_, lean_object* v_stream_3249_, lean_object* v_drainLimit_3250_, lean_object* v_closeStream_3251_){
_start:
{
uint64_t v___x_3252_; lean_object* v___x_3253_; 
v___x_3252_ = 0ULL;
v___x_3253_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_drain_loop___redArg(v_inst_3247_, v_inst_3248_, v_stream_3249_, v_drainLimit_3250_, v_closeStream_3251_, v___x_3252_);
return v___x_3253_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_drain(lean_object* v_m_3254_, lean_object* v_inst_3255_, lean_object* v_inst_3256_, lean_object* v_stream_3257_, lean_object* v_drainLimit_3258_, lean_object* v_closeStream_3259_){
_start:
{
lean_object* v___x_3260_; 
v___x_3260_ = l_Std_Http_Body_Stream_drain___redArg(v_inst_3255_, v_inst_3256_, v_stream_3257_, v_drainLimit_3258_, v_closeStream_3259_);
return v___x_3260_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_collapseForSend___lam__0(uint8_t v_incomplete_3266_, lean_object* v_chunk_3267_, lean_object* v___y_3268_){
_start:
{
lean_object* v___x_3270_; lean_object* v___x_3271_; lean_object* v_pendingProducer_3272_; lean_object* v_pendingConsumer_3273_; lean_object* v_interestWaiter_3274_; uint8_t v_closed_3275_; lean_object* v_knownSize_3276_; lean_object* v_pendingIncompleteChunk_3277_; lean_object* v_closeError_3278_; lean_object* v___x_3280_; uint8_t v_isShared_3281_; uint8_t v_isSharedCheck_3319_; 
v___x_3270_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00__private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27_spec__0(v___y_3268_);
v___x_3271_ = lean_st_ref_get(v___y_3268_);
v_pendingProducer_3272_ = lean_ctor_get(v___x_3271_, 0);
v_pendingConsumer_3273_ = lean_ctor_get(v___x_3271_, 1);
v_interestWaiter_3274_ = lean_ctor_get(v___x_3271_, 2);
v_closed_3275_ = lean_ctor_get_uint8(v___x_3271_, sizeof(void*)*6);
v_knownSize_3276_ = lean_ctor_get(v___x_3271_, 3);
v_pendingIncompleteChunk_3277_ = lean_ctor_get(v___x_3271_, 4);
v_closeError_3278_ = lean_ctor_get(v___x_3271_, 5);
v_isSharedCheck_3319_ = !lean_is_exclusive(v___x_3271_);
if (v_isSharedCheck_3319_ == 0)
{
v___x_3280_ = v___x_3271_;
v_isShared_3281_ = v_isSharedCheck_3319_;
goto v_resetjp_3279_;
}
else
{
lean_inc(v_closeError_3278_);
lean_inc(v_pendingIncompleteChunk_3277_);
lean_inc(v_knownSize_3276_);
lean_inc(v_interestWaiter_3274_);
lean_inc(v_pendingConsumer_3273_);
lean_inc(v_pendingProducer_3272_);
lean_dec(v___x_3271_);
v___x_3280_ = lean_box(0);
v_isShared_3281_ = v_isSharedCheck_3319_;
goto v_resetjp_3279_;
}
v_resetjp_3279_:
{
lean_object* v___y_3283_; 
if (v_closed_3275_ == 0)
{
if (lean_obj_tag(v_pendingIncompleteChunk_3277_) == 0)
{
v___y_3283_ = v_chunk_3267_;
goto v___jp_3282_;
}
else
{
lean_object* v_val_3297_; lean_object* v_data_3298_; lean_object* v_extensions_3299_; lean_object* v_data_3300_; lean_object* v_extensions_3301_; lean_object* v___x_3303_; uint8_t v_isShared_3304_; uint8_t v_isSharedCheck_3317_; 
v_val_3297_ = lean_ctor_get(v_pendingIncompleteChunk_3277_, 0);
lean_inc(v_val_3297_);
lean_dec_ref_known(v_pendingIncompleteChunk_3277_, 1);
v_data_3298_ = lean_ctor_get(v_val_3297_, 0);
lean_inc_ref(v_data_3298_);
v_extensions_3299_ = lean_ctor_get(v_val_3297_, 1);
lean_inc_ref(v_extensions_3299_);
lean_dec(v_val_3297_);
v_data_3300_ = lean_ctor_get(v_chunk_3267_, 0);
v_extensions_3301_ = lean_ctor_get(v_chunk_3267_, 1);
v_isSharedCheck_3317_ = !lean_is_exclusive(v_chunk_3267_);
if (v_isSharedCheck_3317_ == 0)
{
v___x_3303_ = v_chunk_3267_;
v_isShared_3304_ = v_isSharedCheck_3317_;
goto v_resetjp_3302_;
}
else
{
lean_inc(v_extensions_3301_);
lean_inc(v_data_3300_);
lean_dec(v_chunk_3267_);
v___x_3303_ = lean_box(0);
v_isShared_3304_ = v_isSharedCheck_3317_;
goto v_resetjp_3302_;
}
v_resetjp_3302_:
{
lean_object* v___x_3305_; lean_object* v___x_3306_; lean_object* v___x_3307_; lean_object* v___x_3308_; lean_object* v___x_3309_; uint8_t v___x_3310_; 
v___x_3305_ = lean_unsigned_to_nat(0u);
v___x_3306_ = lean_byte_array_size(v_data_3298_);
v___x_3307_ = lean_byte_array_size(v_data_3300_);
v___x_3308_ = lean_byte_array_copy_slice(v_data_3300_, v___x_3305_, v_data_3298_, v___x_3306_, v___x_3307_, v_closed_3275_);
lean_dec_ref(v_data_3300_);
v___x_3309_ = lean_array_get_size(v_extensions_3299_);
v___x_3310_ = lean_nat_dec_eq(v___x_3309_, v___x_3305_);
if (v___x_3310_ == 0)
{
lean_object* v___x_3312_; 
lean_dec_ref(v_extensions_3301_);
if (v_isShared_3304_ == 0)
{
lean_ctor_set(v___x_3303_, 1, v_extensions_3299_);
lean_ctor_set(v___x_3303_, 0, v___x_3308_);
v___x_3312_ = v___x_3303_;
goto v_reusejp_3311_;
}
else
{
lean_object* v_reuseFailAlloc_3313_; 
v_reuseFailAlloc_3313_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3313_, 0, v___x_3308_);
lean_ctor_set(v_reuseFailAlloc_3313_, 1, v_extensions_3299_);
v___x_3312_ = v_reuseFailAlloc_3313_;
goto v_reusejp_3311_;
}
v_reusejp_3311_:
{
v___y_3283_ = v___x_3312_;
goto v___jp_3282_;
}
}
else
{
lean_object* v___x_3315_; 
lean_dec_ref(v_extensions_3299_);
if (v_isShared_3304_ == 0)
{
lean_ctor_set(v___x_3303_, 0, v___x_3308_);
v___x_3315_ = v___x_3303_;
goto v_reusejp_3314_;
}
else
{
lean_object* v_reuseFailAlloc_3316_; 
v_reuseFailAlloc_3316_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3316_, 0, v___x_3308_);
lean_ctor_set(v_reuseFailAlloc_3316_, 1, v_extensions_3301_);
v___x_3315_ = v_reuseFailAlloc_3316_;
goto v_reusejp_3314_;
}
v_reusejp_3314_:
{
v___y_3283_ = v___x_3315_;
goto v___jp_3282_;
}
}
}
}
}
else
{
lean_object* v___x_3318_; 
lean_del_object(v___x_3280_);
lean_dec(v_closeError_3278_);
lean_dec(v_pendingIncompleteChunk_3277_);
lean_dec(v_knownSize_3276_);
lean_dec(v_interestWaiter_3274_);
lean_dec(v_pendingConsumer_3273_);
lean_dec(v_pendingProducer_3272_);
lean_dec_ref(v_chunk_3267_);
v___x_3318_ = ((lean_object*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_collapseForSend___lam__0___closed__2));
return v___x_3318_;
}
v___jp_3282_:
{
if (v_incomplete_3266_ == 0)
{
lean_object* v___x_3284_; lean_object* v___x_3286_; 
v___x_3284_ = lean_box(0);
if (v_isShared_3281_ == 0)
{
lean_ctor_set(v___x_3280_, 4, v___x_3284_);
v___x_3286_ = v___x_3280_;
goto v_reusejp_3285_;
}
else
{
lean_object* v_reuseFailAlloc_3290_; 
v_reuseFailAlloc_3290_ = lean_alloc_ctor(0, 6, 1);
lean_ctor_set(v_reuseFailAlloc_3290_, 0, v_pendingProducer_3272_);
lean_ctor_set(v_reuseFailAlloc_3290_, 1, v_pendingConsumer_3273_);
lean_ctor_set(v_reuseFailAlloc_3290_, 2, v_interestWaiter_3274_);
lean_ctor_set(v_reuseFailAlloc_3290_, 3, v_knownSize_3276_);
lean_ctor_set(v_reuseFailAlloc_3290_, 4, v___x_3284_);
lean_ctor_set(v_reuseFailAlloc_3290_, 5, v_closeError_3278_);
lean_ctor_set_uint8(v_reuseFailAlloc_3290_, sizeof(void*)*6, v_closed_3275_);
v___x_3286_ = v_reuseFailAlloc_3290_;
goto v_reusejp_3285_;
}
v_reusejp_3285_:
{
lean_object* v___x_3287_; lean_object* v___x_3288_; lean_object* v___x_3289_; 
v___x_3287_ = lean_st_ref_swap(v___y_3268_, v___x_3286_);
lean_dec(v___x_3287_);
v___x_3288_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3288_, 0, v___y_3283_);
v___x_3289_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3289_, 0, v___x_3288_);
return v___x_3289_;
}
}
else
{
lean_object* v___x_3291_; lean_object* v___x_3293_; 
v___x_3291_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3291_, 0, v___y_3283_);
if (v_isShared_3281_ == 0)
{
lean_ctor_set(v___x_3280_, 4, v___x_3291_);
v___x_3293_ = v___x_3280_;
goto v_reusejp_3292_;
}
else
{
lean_object* v_reuseFailAlloc_3296_; 
v_reuseFailAlloc_3296_ = lean_alloc_ctor(0, 6, 1);
lean_ctor_set(v_reuseFailAlloc_3296_, 0, v_pendingProducer_3272_);
lean_ctor_set(v_reuseFailAlloc_3296_, 1, v_pendingConsumer_3273_);
lean_ctor_set(v_reuseFailAlloc_3296_, 2, v_interestWaiter_3274_);
lean_ctor_set(v_reuseFailAlloc_3296_, 3, v_knownSize_3276_);
lean_ctor_set(v_reuseFailAlloc_3296_, 4, v___x_3291_);
lean_ctor_set(v_reuseFailAlloc_3296_, 5, v_closeError_3278_);
lean_ctor_set_uint8(v_reuseFailAlloc_3296_, sizeof(void*)*6, v_closed_3275_);
v___x_3293_ = v_reuseFailAlloc_3296_;
goto v_reusejp_3292_;
}
v_reusejp_3292_:
{
lean_object* v___x_3294_; lean_object* v___x_3295_; 
v___x_3294_ = lean_st_ref_swap(v___y_3268_, v___x_3293_);
lean_dec(v___x_3294_);
v___x_3295_ = ((lean_object*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___redArg___lam__0___closed__0));
return v___x_3295_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_collapseForSend___lam__0___boxed(lean_object* v_incomplete_3320_, lean_object* v_chunk_3321_, lean_object* v___y_3322_, lean_object* v___y_3323_){
_start:
{
uint8_t v_incomplete_boxed_3324_; lean_object* v_res_3325_; 
v_incomplete_boxed_3324_ = lean_unbox(v_incomplete_3320_);
v_res_3325_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_collapseForSend___lam__0(v_incomplete_boxed_3324_, v_chunk_3321_, v___y_3322_);
lean_dec(v___y_3322_);
return v_res_3325_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_collapseForSend(lean_object* v_stream_3326_, lean_object* v_chunk_3327_, uint8_t v_incomplete_3328_){
_start:
{
lean_object* v___x_3330_; lean_object* v___f_3331_; lean_object* v___x_3332_; 
v___x_3330_ = lean_box(v_incomplete_3328_);
v___f_3331_ = lean_alloc_closure((void*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_collapseForSend___lam__0___boxed), 4, 2);
lean_closure_set(v___f_3331_, 0, v___x_3330_);
lean_closure_set(v___f_3331_, 1, v_chunk_3327_);
v___x_3332_ = l_Std_Mutex_atomically___at___00__private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27_spec__3___redArg(v_stream_3326_, v___f_3331_);
return v___x_3332_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_collapseForSend___boxed(lean_object* v_stream_3333_, lean_object* v_chunk_3334_, lean_object* v_incomplete_3335_, lean_object* v___y_3336_){
_start:
{
uint8_t v_incomplete_boxed_3337_; lean_object* v_res_3338_; 
v_incomplete_boxed_3337_ = lean_unbox(v_incomplete_3335_);
v_res_3338_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_collapseForSend(v_stream_3333_, v_chunk_3334_, v_incomplete_boxed_3337_);
return v_res_3338_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__0(lean_object* v_x_3345_){
_start:
{
if (lean_obj_tag(v_x_3345_) == 0)
{
lean_object* v_a_3347_; lean_object* v___x_3349_; uint8_t v_isShared_3350_; uint8_t v_isSharedCheck_3355_; 
v_a_3347_ = lean_ctor_get(v_x_3345_, 0);
v_isSharedCheck_3355_ = !lean_is_exclusive(v_x_3345_);
if (v_isSharedCheck_3355_ == 0)
{
v___x_3349_ = v_x_3345_;
v_isShared_3350_ = v_isSharedCheck_3355_;
goto v_resetjp_3348_;
}
else
{
lean_inc(v_a_3347_);
lean_dec(v_x_3345_);
v___x_3349_ = lean_box(0);
v_isShared_3350_ = v_isSharedCheck_3355_;
goto v_resetjp_3348_;
}
v_resetjp_3348_:
{
lean_object* v___x_3352_; 
if (v_isShared_3350_ == 0)
{
v___x_3352_ = v___x_3349_;
goto v_reusejp_3351_;
}
else
{
lean_object* v_reuseFailAlloc_3354_; 
v_reuseFailAlloc_3354_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3354_, 0, v_a_3347_);
v___x_3352_ = v_reuseFailAlloc_3354_;
goto v_reusejp_3351_;
}
v_reusejp_3351_:
{
lean_object* v___x_3353_; 
v___x_3353_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3353_, 0, v___x_3352_);
return v___x_3353_;
}
}
}
else
{
lean_object* v___x_3356_; 
lean_dec_ref_known(v_x_3345_, 1);
v___x_3356_ = ((lean_object*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__0___closed__2));
return v___x_3356_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__0___boxed(lean_object* v_x_3357_, lean_object* v___y_3358_){
_start:
{
lean_object* v_res_3359_; 
v_res_3359_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__0(v_x_3357_);
return v_res_3359_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__1(lean_object* v_00___3360_){
_start:
{
lean_object* v___x_3362_; 
v___x_3362_ = ((lean_object*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__0___closed__1));
return v___x_3362_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__1___boxed(lean_object* v_00___3363_, lean_object* v___y_3364_){
_start:
{
lean_object* v_res_3365_; 
v_res_3365_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__1(v_00___3363_);
return v_res_3365_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__2(lean_object* v___f_3370_, lean_object* v_x_3371_){
_start:
{
if (lean_obj_tag(v_x_3371_) == 0)
{
lean_object* v_a_3375_; lean_object* v___x_3377_; uint8_t v_isShared_3378_; uint8_t v_isSharedCheck_3383_; 
lean_dec_ref(v___f_3370_);
v_a_3375_ = lean_ctor_get(v_x_3371_, 0);
v_isSharedCheck_3383_ = !lean_is_exclusive(v_x_3371_);
if (v_isSharedCheck_3383_ == 0)
{
v___x_3377_ = v_x_3371_;
v_isShared_3378_ = v_isSharedCheck_3383_;
goto v_resetjp_3376_;
}
else
{
lean_inc(v_a_3375_);
lean_dec(v_x_3371_);
v___x_3377_ = lean_box(0);
v_isShared_3378_ = v_isSharedCheck_3383_;
goto v_resetjp_3376_;
}
v_resetjp_3376_:
{
lean_object* v___x_3380_; 
if (v_isShared_3378_ == 0)
{
v___x_3380_ = v___x_3377_;
goto v_reusejp_3379_;
}
else
{
lean_object* v_reuseFailAlloc_3382_; 
v_reuseFailAlloc_3382_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3382_, 0, v_a_3375_);
v___x_3380_ = v_reuseFailAlloc_3382_;
goto v_reusejp_3379_;
}
v_reusejp_3379_:
{
lean_object* v___x_3381_; 
v___x_3381_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3381_, 0, v___x_3380_);
return v___x_3381_;
}
}
}
else
{
lean_object* v_a_3384_; 
v_a_3384_ = lean_ctor_get(v_x_3371_, 0);
lean_inc(v_a_3384_);
lean_dec_ref_known(v_x_3371_, 1);
if (lean_obj_tag(v_a_3384_) == 1)
{
lean_object* v_val_3385_; uint8_t v___x_3386_; 
v_val_3385_ = lean_ctor_get(v_a_3384_, 0);
lean_inc(v_val_3385_);
lean_dec_ref_known(v_a_3384_, 1);
v___x_3386_ = lean_unbox(v_val_3385_);
lean_dec(v_val_3385_);
if (v___x_3386_ == 1)
{
lean_object* v___x_3387_; lean_object* v___x_3388_; 
v___x_3387_ = lean_box(0);
v___x_3388_ = lean_apply_2(v___f_3370_, v___x_3387_, lean_box(0));
return v___x_3388_;
}
else
{
lean_dec_ref(v___f_3370_);
goto v___jp_3373_;
}
}
else
{
lean_dec(v_a_3384_);
lean_dec_ref(v___f_3370_);
goto v___jp_3373_;
}
}
v___jp_3373_:
{
lean_object* v___x_3374_; 
v___x_3374_ = ((lean_object*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__2___closed__1));
return v___x_3374_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__2___boxed(lean_object* v___f_3389_, lean_object* v_x_3390_, lean_object* v___y_3391_){
_start:
{
lean_object* v_res_3392_; 
v_res_3392_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__2(v___f_3389_, v_x_3390_);
return v_res_3392_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__3(lean_object* v_a_3393_){
_start:
{
lean_object* v___x_3394_; 
v___x_3394_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3394_, 0, v_a_3393_);
return v___x_3394_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__4(uint8_t v___x_3395_, lean_object* v_x_3396_){
_start:
{
if (lean_obj_tag(v_x_3396_) == 0)
{
lean_object* v_a_3398_; lean_object* v___x_3400_; uint8_t v_isShared_3401_; uint8_t v_isSharedCheck_3406_; 
v_a_3398_ = lean_ctor_get(v_x_3396_, 0);
v_isSharedCheck_3406_ = !lean_is_exclusive(v_x_3396_);
if (v_isSharedCheck_3406_ == 0)
{
v___x_3400_ = v_x_3396_;
v_isShared_3401_ = v_isSharedCheck_3406_;
goto v_resetjp_3399_;
}
else
{
lean_inc(v_a_3398_);
lean_dec(v_x_3396_);
v___x_3400_ = lean_box(0);
v_isShared_3401_ = v_isSharedCheck_3406_;
goto v_resetjp_3399_;
}
v_resetjp_3399_:
{
lean_object* v___x_3403_; 
if (v_isShared_3401_ == 0)
{
v___x_3403_ = v___x_3400_;
goto v_reusejp_3402_;
}
else
{
lean_object* v_reuseFailAlloc_3405_; 
v_reuseFailAlloc_3405_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3405_, 0, v_a_3398_);
v___x_3403_ = v_reuseFailAlloc_3405_;
goto v_reusejp_3402_;
}
v_reusejp_3402_:
{
lean_object* v___x_3404_; 
v___x_3404_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3404_, 0, v___x_3403_);
return v___x_3404_;
}
}
}
else
{
lean_object* v___x_3408_; uint8_t v_isShared_3409_; uint8_t v_isSharedCheck_3417_; 
v_isSharedCheck_3417_ = !lean_is_exclusive(v_x_3396_);
if (v_isSharedCheck_3417_ == 0)
{
lean_object* v_unused_3418_; 
v_unused_3418_ = lean_ctor_get(v_x_3396_, 0);
lean_dec(v_unused_3418_);
v___x_3408_ = v_x_3396_;
v_isShared_3409_ = v_isSharedCheck_3417_;
goto v_resetjp_3407_;
}
else
{
lean_dec(v_x_3396_);
v___x_3408_ = lean_box(0);
v_isShared_3409_ = v_isSharedCheck_3417_;
goto v_resetjp_3407_;
}
v_resetjp_3407_:
{
lean_object* v___x_3410_; lean_object* v___x_3411_; lean_object* v___x_3413_; 
v___x_3410_ = lean_box(v___x_3395_);
v___x_3411_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3411_, 0, v___x_3410_);
if (v_isShared_3409_ == 0)
{
lean_ctor_set(v___x_3408_, 0, v___x_3411_);
v___x_3413_ = v___x_3408_;
goto v_reusejp_3412_;
}
else
{
lean_object* v_reuseFailAlloc_3416_; 
v_reuseFailAlloc_3416_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3416_, 0, v___x_3411_);
v___x_3413_ = v_reuseFailAlloc_3416_;
goto v_reusejp_3412_;
}
v_reusejp_3412_:
{
lean_object* v___x_3414_; lean_object* v___x_3415_; 
v___x_3414_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3414_, 0, v___x_3413_);
v___x_3415_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3415_, 0, v___x_3414_);
return v___x_3415_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__4___boxed(lean_object* v___x_3419_, lean_object* v_x_3420_, lean_object* v___y_3421_){
_start:
{
uint8_t v___x_5379__boxed_3422_; lean_object* v_res_3423_; 
v___x_5379__boxed_3422_ = lean_unbox(v___x_3419_);
v_res_3423_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__4(v___x_5379__boxed_3422_, v_x_3420_);
return v_res_3423_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__5(uint8_t v_a_3424_, lean_object* v_x_3425_){
_start:
{
if (lean_obj_tag(v_x_3425_) == 0)
{
lean_object* v_a_3427_; lean_object* v___x_3429_; uint8_t v_isShared_3430_; uint8_t v_isSharedCheck_3435_; 
v_a_3427_ = lean_ctor_get(v_x_3425_, 0);
v_isSharedCheck_3435_ = !lean_is_exclusive(v_x_3425_);
if (v_isSharedCheck_3435_ == 0)
{
v___x_3429_ = v_x_3425_;
v_isShared_3430_ = v_isSharedCheck_3435_;
goto v_resetjp_3428_;
}
else
{
lean_inc(v_a_3427_);
lean_dec(v_x_3425_);
v___x_3429_ = lean_box(0);
v_isShared_3430_ = v_isSharedCheck_3435_;
goto v_resetjp_3428_;
}
v_resetjp_3428_:
{
lean_object* v___x_3432_; 
if (v_isShared_3430_ == 0)
{
v___x_3432_ = v___x_3429_;
goto v_reusejp_3431_;
}
else
{
lean_object* v_reuseFailAlloc_3434_; 
v_reuseFailAlloc_3434_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3434_, 0, v_a_3427_);
v___x_3432_ = v_reuseFailAlloc_3434_;
goto v_reusejp_3431_;
}
v_reusejp_3431_:
{
lean_object* v___x_3433_; 
v___x_3433_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3433_, 0, v___x_3432_);
return v___x_3433_;
}
}
}
else
{
lean_object* v___x_3437_; uint8_t v_isShared_3438_; uint8_t v_isSharedCheck_3446_; 
v_isSharedCheck_3446_ = !lean_is_exclusive(v_x_3425_);
if (v_isSharedCheck_3446_ == 0)
{
lean_object* v_unused_3447_; 
v_unused_3447_ = lean_ctor_get(v_x_3425_, 0);
lean_dec(v_unused_3447_);
v___x_3437_ = v_x_3425_;
v_isShared_3438_ = v_isSharedCheck_3446_;
goto v_resetjp_3436_;
}
else
{
lean_dec(v_x_3425_);
v___x_3437_ = lean_box(0);
v_isShared_3438_ = v_isSharedCheck_3446_;
goto v_resetjp_3436_;
}
v_resetjp_3436_:
{
lean_object* v___x_3439_; lean_object* v___x_3440_; lean_object* v___x_3442_; 
v___x_3439_ = lean_box(v_a_3424_);
v___x_3440_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3440_, 0, v___x_3439_);
if (v_isShared_3438_ == 0)
{
lean_ctor_set(v___x_3437_, 0, v___x_3440_);
v___x_3442_ = v___x_3437_;
goto v_reusejp_3441_;
}
else
{
lean_object* v_reuseFailAlloc_3445_; 
v_reuseFailAlloc_3445_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3445_, 0, v___x_3440_);
v___x_3442_ = v_reuseFailAlloc_3445_;
goto v_reusejp_3441_;
}
v_reusejp_3441_:
{
lean_object* v___x_3443_; lean_object* v___x_3444_; 
v___x_3443_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3443_, 0, v___x_3442_);
v___x_3444_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3444_, 0, v___x_3443_);
return v___x_3444_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__5___boxed(lean_object* v_a_3448_, lean_object* v_x_3449_, lean_object* v___y_3450_){
_start:
{
uint8_t v_a_5431__boxed_3451_; lean_object* v_res_3452_; 
v_a_5431__boxed_3451_ = lean_unbox(v_a_3448_);
v_res_3452_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__5(v_a_5431__boxed_3451_, v_x_3449_);
return v_res_3452_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__6(lean_object* v_pendingProducer_3453_, lean_object* v_interestWaiter_3454_, uint8_t v_closed_3455_, lean_object* v_knownSize_3456_, lean_object* v_pendingIncompleteChunk_3457_, lean_object* v_closeError_3458_, lean_object* v___y_3459_, lean_object* v_chunk_3460_, lean_object* v___f_3461_, lean_object* v_x_3462_){
_start:
{
if (lean_obj_tag(v_x_3462_) == 0)
{
lean_object* v_a_3464_; lean_object* v___x_3466_; uint8_t v_isShared_3467_; uint8_t v_isSharedCheck_3472_; 
lean_dec_ref(v___f_3461_);
lean_dec(v_closeError_3458_);
lean_dec(v_pendingIncompleteChunk_3457_);
lean_dec(v_knownSize_3456_);
lean_dec(v_interestWaiter_3454_);
lean_dec(v_pendingProducer_3453_);
v_a_3464_ = lean_ctor_get(v_x_3462_, 0);
v_isSharedCheck_3472_ = !lean_is_exclusive(v_x_3462_);
if (v_isSharedCheck_3472_ == 0)
{
v___x_3466_ = v_x_3462_;
v_isShared_3467_ = v_isSharedCheck_3472_;
goto v_resetjp_3465_;
}
else
{
lean_inc(v_a_3464_);
lean_dec(v_x_3462_);
v___x_3466_ = lean_box(0);
v_isShared_3467_ = v_isSharedCheck_3472_;
goto v_resetjp_3465_;
}
v_resetjp_3465_:
{
lean_object* v___x_3469_; 
if (v_isShared_3467_ == 0)
{
v___x_3469_ = v___x_3466_;
goto v_reusejp_3468_;
}
else
{
lean_object* v_reuseFailAlloc_3471_; 
v_reuseFailAlloc_3471_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3471_, 0, v_a_3464_);
v___x_3469_ = v_reuseFailAlloc_3471_;
goto v_reusejp_3468_;
}
v_reusejp_3468_:
{
lean_object* v___x_3470_; 
v___x_3470_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3470_, 0, v___x_3469_);
return v___x_3470_;
}
}
}
else
{
lean_object* v_a_3473_; uint8_t v___x_3474_; 
v_a_3473_ = lean_ctor_get(v_x_3462_, 0);
lean_inc(v_a_3473_);
lean_dec_ref_known(v_x_3462_, 1);
v___x_3474_ = lean_unbox(v_a_3473_);
if (v___x_3474_ == 0)
{
lean_object* v___f_3475_; lean_object* v___x_3476_; lean_object* v___x_3477_; lean_object* v___x_3478_; lean_object* v___x_3479_; lean_object* v___x_3480_; uint8_t v___x_3481_; lean_object* v___x_3482_; 
lean_dec_ref(v___f_3461_);
lean_inc(v_a_3473_);
v___f_3475_ = lean_alloc_closure((void*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__5___boxed), 3, 1);
lean_closure_set(v___f_3475_, 0, v_a_3473_);
v___x_3476_ = lean_box(0);
v___x_3477_ = lean_alloc_ctor(0, 6, 1);
lean_ctor_set(v___x_3477_, 0, v_pendingProducer_3453_);
lean_ctor_set(v___x_3477_, 1, v___x_3476_);
lean_ctor_set(v___x_3477_, 2, v_interestWaiter_3454_);
lean_ctor_set(v___x_3477_, 3, v_knownSize_3456_);
lean_ctor_set(v___x_3477_, 4, v_pendingIncompleteChunk_3457_);
lean_ctor_set(v___x_3477_, 5, v_closeError_3458_);
lean_ctor_set_uint8(v___x_3477_, sizeof(void*)*6, v_closed_3455_);
v___x_3478_ = lean_unsigned_to_nat(0u);
v___x_3479_ = lean_st_ref_swap(v___y_3459_, v___x_3477_);
lean_dec(v___x_3479_);
v___x_3480_ = ((lean_object*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__0___closed__1));
v___x_3481_ = lean_unbox(v_a_3473_);
lean_dec(v_a_3473_);
v___x_3482_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_3478_, v___x_3481_, v___x_3480_, v___f_3475_);
return v___x_3482_;
}
else
{
lean_object* v___x_3483_; lean_object* v___x_3484_; lean_object* v___x_3485_; lean_object* v___x_3486_; lean_object* v___x_3487_; lean_object* v___x_3488_; lean_object* v___x_3489_; 
lean_dec(v_a_3473_);
v___x_3483_ = lean_box(0);
v___x_3484_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_decreaseKnownSize(v_knownSize_3456_, v_chunk_3460_);
v___x_3485_ = lean_alloc_ctor(0, 6, 1);
lean_ctor_set(v___x_3485_, 0, v_pendingProducer_3453_);
lean_ctor_set(v___x_3485_, 1, v___x_3483_);
lean_ctor_set(v___x_3485_, 2, v_interestWaiter_3454_);
lean_ctor_set(v___x_3485_, 3, v___x_3484_);
lean_ctor_set(v___x_3485_, 4, v_pendingIncompleteChunk_3457_);
lean_ctor_set(v___x_3485_, 5, v_closeError_3458_);
lean_ctor_set_uint8(v___x_3485_, sizeof(void*)*6, v_closed_3455_);
v___x_3486_ = lean_unsigned_to_nat(0u);
v___x_3487_ = lean_st_ref_swap(v___y_3459_, v___x_3485_);
lean_dec(v___x_3487_);
v___x_3488_ = ((lean_object*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__0___closed__1));
v___x_3489_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_3486_, v_closed_3455_, v___x_3488_, v___f_3461_);
return v___x_3489_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__6___boxed(lean_object* v_pendingProducer_3490_, lean_object* v_interestWaiter_3491_, lean_object* v_closed_3492_, lean_object* v_knownSize_3493_, lean_object* v_pendingIncompleteChunk_3494_, lean_object* v_closeError_3495_, lean_object* v___y_3496_, lean_object* v_chunk_3497_, lean_object* v___f_3498_, lean_object* v_x_3499_, lean_object* v___y_3500_){
_start:
{
uint8_t v_closed_boxed_3501_; lean_object* v_res_3502_; 
v_closed_boxed_3501_ = lean_unbox(v_closed_3492_);
v_res_3502_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__6(v_pendingProducer_3490_, v_interestWaiter_3491_, v_closed_boxed_3501_, v_knownSize_3493_, v_pendingIncompleteChunk_3494_, v_closeError_3495_, v___y_3496_, v_chunk_3497_, v___f_3498_, v_x_3499_);
lean_dec_ref(v_chunk_3497_);
lean_dec(v___y_3496_);
return v_res_3502_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__7(lean_object* v___y_3521_, lean_object* v_chunk_3522_, lean_object* v_a_3523_, lean_object* v___f_3524_, lean_object* v_x_3525_){
_start:
{
if (lean_obj_tag(v_x_3525_) == 0)
{
lean_object* v_a_3527_; lean_object* v___x_3529_; uint8_t v_isShared_3530_; uint8_t v_isSharedCheck_3535_; 
lean_dec_ref(v___f_3524_);
lean_dec(v_a_3523_);
lean_dec_ref(v_chunk_3522_);
v_a_3527_ = lean_ctor_get(v_x_3525_, 0);
v_isSharedCheck_3535_ = !lean_is_exclusive(v_x_3525_);
if (v_isSharedCheck_3535_ == 0)
{
v___x_3529_ = v_x_3525_;
v_isShared_3530_ = v_isSharedCheck_3535_;
goto v_resetjp_3528_;
}
else
{
lean_inc(v_a_3527_);
lean_dec(v_x_3525_);
v___x_3529_ = lean_box(0);
v_isShared_3530_ = v_isSharedCheck_3535_;
goto v_resetjp_3528_;
}
v_resetjp_3528_:
{
lean_object* v___x_3532_; 
if (v_isShared_3530_ == 0)
{
v___x_3532_ = v___x_3529_;
goto v_reusejp_3531_;
}
else
{
lean_object* v_reuseFailAlloc_3534_; 
v_reuseFailAlloc_3534_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3534_, 0, v_a_3527_);
v___x_3532_ = v_reuseFailAlloc_3534_;
goto v_reusejp_3531_;
}
v_reusejp_3531_:
{
lean_object* v___x_3533_; 
v___x_3533_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3533_, 0, v___x_3532_);
return v___x_3533_;
}
}
}
else
{
lean_object* v_a_3536_; lean_object* v___x_3538_; uint8_t v_isShared_3539_; uint8_t v_isSharedCheck_3589_; 
v_a_3536_ = lean_ctor_get(v_x_3525_, 0);
v_isSharedCheck_3589_ = !lean_is_exclusive(v_x_3525_);
if (v_isSharedCheck_3589_ == 0)
{
v___x_3538_ = v_x_3525_;
v_isShared_3539_ = v_isSharedCheck_3589_;
goto v_resetjp_3537_;
}
else
{
lean_inc(v_a_3536_);
lean_dec(v_x_3525_);
v___x_3538_ = lean_box(0);
v_isShared_3539_ = v_isSharedCheck_3589_;
goto v_resetjp_3537_;
}
v_resetjp_3537_:
{
uint8_t v_closed_3540_; 
v_closed_3540_ = lean_ctor_get_uint8(v_a_3536_, sizeof(void*)*6);
if (v_closed_3540_ == 0)
{
lean_object* v_pendingConsumer_3541_; 
v_pendingConsumer_3541_ = lean_ctor_get(v_a_3536_, 1);
lean_inc(v_pendingConsumer_3541_);
if (lean_obj_tag(v_pendingConsumer_3541_) == 1)
{
lean_object* v_pendingProducer_3542_; lean_object* v_interestWaiter_3543_; lean_object* v_knownSize_3544_; lean_object* v_pendingIncompleteChunk_3545_; lean_object* v_closeError_3546_; lean_object* v_val_3547_; lean_object* v___x_3549_; uint8_t v_isShared_3550_; uint8_t v_isSharedCheck_3566_; 
lean_dec_ref(v___f_3524_);
lean_dec(v_a_3523_);
v_pendingProducer_3542_ = lean_ctor_get(v_a_3536_, 0);
lean_inc(v_pendingProducer_3542_);
v_interestWaiter_3543_ = lean_ctor_get(v_a_3536_, 2);
lean_inc(v_interestWaiter_3543_);
v_knownSize_3544_ = lean_ctor_get(v_a_3536_, 3);
lean_inc(v_knownSize_3544_);
v_pendingIncompleteChunk_3545_ = lean_ctor_get(v_a_3536_, 4);
lean_inc(v_pendingIncompleteChunk_3545_);
v_closeError_3546_ = lean_ctor_get(v_a_3536_, 5);
lean_inc(v_closeError_3546_);
lean_dec(v_a_3536_);
v_val_3547_ = lean_ctor_get(v_pendingConsumer_3541_, 0);
v_isSharedCheck_3566_ = !lean_is_exclusive(v_pendingConsumer_3541_);
if (v_isSharedCheck_3566_ == 0)
{
v___x_3549_ = v_pendingConsumer_3541_;
v_isShared_3550_ = v_isSharedCheck_3566_;
goto v_resetjp_3548_;
}
else
{
lean_inc(v_val_3547_);
lean_dec(v_pendingConsumer_3541_);
v___x_3549_ = lean_box(0);
v_isShared_3550_ = v_isSharedCheck_3566_;
goto v_resetjp_3548_;
}
v_resetjp_3548_:
{
lean_object* v___f_3551_; lean_object* v___x_3552_; lean_object* v___f_3553_; lean_object* v___x_3555_; 
v___f_3551_ = ((lean_object*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__7___closed__0));
v___x_3552_ = lean_box(v_closed_3540_);
lean_inc_ref(v_chunk_3522_);
lean_inc(v___y_3521_);
v___f_3553_ = lean_alloc_closure((void*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__6___boxed), 11, 9);
lean_closure_set(v___f_3553_, 0, v_pendingProducer_3542_);
lean_closure_set(v___f_3553_, 1, v_interestWaiter_3543_);
lean_closure_set(v___f_3553_, 2, v___x_3552_);
lean_closure_set(v___f_3553_, 3, v_knownSize_3544_);
lean_closure_set(v___f_3553_, 4, v_pendingIncompleteChunk_3545_);
lean_closure_set(v___f_3553_, 5, v_closeError_3546_);
lean_closure_set(v___f_3553_, 6, v___y_3521_);
lean_closure_set(v___f_3553_, 7, v_chunk_3522_);
lean_closure_set(v___f_3553_, 8, v___f_3551_);
if (v_isShared_3550_ == 0)
{
lean_ctor_set(v___x_3549_, 0, v_chunk_3522_);
v___x_3555_ = v___x_3549_;
goto v_reusejp_3554_;
}
else
{
lean_object* v_reuseFailAlloc_3565_; 
v_reuseFailAlloc_3565_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3565_, 0, v_chunk_3522_);
v___x_3555_ = v_reuseFailAlloc_3565_;
goto v_reusejp_3554_;
}
v_reusejp_3554_:
{
lean_object* v___x_3557_; 
if (v_isShared_3539_ == 0)
{
lean_ctor_set(v___x_3538_, 0, v___x_3555_);
v___x_3557_ = v___x_3538_;
goto v_reusejp_3556_;
}
else
{
lean_object* v_reuseFailAlloc_3564_; 
v_reuseFailAlloc_3564_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3564_, 0, v___x_3555_);
v___x_3557_ = v_reuseFailAlloc_3564_;
goto v_reusejp_3556_;
}
v_reusejp_3556_:
{
lean_object* v___x_3558_; uint8_t v___x_3559_; lean_object* v___x_3560_; lean_object* v___x_3561_; lean_object* v___x_3562_; lean_object* v___x_3563_; 
v___x_3558_ = lean_unsigned_to_nat(0u);
v___x_3559_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_Consumer_resolve(v_val_3547_, v___x_3557_);
lean_dec(v_val_3547_);
v___x_3560_ = lean_box(v___x_3559_);
v___x_3561_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3561_, 0, v___x_3560_);
v___x_3562_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3562_, 0, v___x_3561_);
v___x_3563_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_3558_, v_closed_3540_, v___x_3562_, v___f_3553_);
return v___x_3563_;
}
}
}
}
else
{
lean_object* v_pendingProducer_3567_; 
lean_del_object(v___x_3538_);
v_pendingProducer_3567_ = lean_ctor_get(v_a_3536_, 0);
if (lean_obj_tag(v_pendingProducer_3567_) == 0)
{
lean_object* v_interestWaiter_3568_; lean_object* v_knownSize_3569_; lean_object* v_pendingIncompleteChunk_3570_; lean_object* v_closeError_3571_; lean_object* v___x_3573_; uint8_t v_isShared_3574_; uint8_t v_isSharedCheck_3584_; 
v_interestWaiter_3568_ = lean_ctor_get(v_a_3536_, 2);
v_knownSize_3569_ = lean_ctor_get(v_a_3536_, 3);
v_pendingIncompleteChunk_3570_ = lean_ctor_get(v_a_3536_, 4);
v_closeError_3571_ = lean_ctor_get(v_a_3536_, 5);
v_isSharedCheck_3584_ = !lean_is_exclusive(v_a_3536_);
if (v_isSharedCheck_3584_ == 0)
{
lean_object* v_unused_3585_; lean_object* v_unused_3586_; 
v_unused_3585_ = lean_ctor_get(v_a_3536_, 1);
lean_dec(v_unused_3585_);
v_unused_3586_ = lean_ctor_get(v_a_3536_, 0);
lean_dec(v_unused_3586_);
v___x_3573_ = v_a_3536_;
v_isShared_3574_ = v_isSharedCheck_3584_;
goto v_resetjp_3572_;
}
else
{
lean_inc(v_closeError_3571_);
lean_inc(v_pendingIncompleteChunk_3570_);
lean_inc(v_knownSize_3569_);
lean_inc(v_interestWaiter_3568_);
lean_dec(v_a_3536_);
v___x_3573_ = lean_box(0);
v_isShared_3574_ = v_isSharedCheck_3584_;
goto v_resetjp_3572_;
}
v_resetjp_3572_:
{
lean_object* v___x_3575_; lean_object* v___x_3576_; lean_object* v___x_3578_; 
v___x_3575_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3575_, 0, v_chunk_3522_);
lean_ctor_set(v___x_3575_, 1, v_a_3523_);
v___x_3576_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3576_, 0, v___x_3575_);
if (v_isShared_3574_ == 0)
{
lean_ctor_set(v___x_3573_, 0, v___x_3576_);
v___x_3578_ = v___x_3573_;
goto v_reusejp_3577_;
}
else
{
lean_object* v_reuseFailAlloc_3583_; 
v_reuseFailAlloc_3583_ = lean_alloc_ctor(0, 6, 1);
lean_ctor_set(v_reuseFailAlloc_3583_, 0, v___x_3576_);
lean_ctor_set(v_reuseFailAlloc_3583_, 1, v_pendingConsumer_3541_);
lean_ctor_set(v_reuseFailAlloc_3583_, 2, v_interestWaiter_3568_);
lean_ctor_set(v_reuseFailAlloc_3583_, 3, v_knownSize_3569_);
lean_ctor_set(v_reuseFailAlloc_3583_, 4, v_pendingIncompleteChunk_3570_);
lean_ctor_set(v_reuseFailAlloc_3583_, 5, v_closeError_3571_);
lean_ctor_set_uint8(v_reuseFailAlloc_3583_, sizeof(void*)*6, v_closed_3540_);
v___x_3578_ = v_reuseFailAlloc_3583_;
goto v_reusejp_3577_;
}
v_reusejp_3577_:
{
lean_object* v___x_3579_; lean_object* v___x_3580_; lean_object* v___x_3581_; lean_object* v___x_3582_; 
v___x_3579_ = lean_unsigned_to_nat(0u);
v___x_3580_ = lean_st_ref_swap(v___y_3521_, v___x_3578_);
lean_dec(v___x_3580_);
v___x_3581_ = ((lean_object*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__0___closed__1));
v___x_3582_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_3579_, v_closed_3540_, v___x_3581_, v___f_3524_);
return v___x_3582_;
}
}
}
else
{
lean_object* v___x_3587_; 
lean_dec(v_pendingConsumer_3541_);
lean_dec(v_a_3536_);
lean_dec_ref(v___f_3524_);
lean_dec(v_a_3523_);
lean_dec_ref(v_chunk_3522_);
v___x_3587_ = ((lean_object*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__7___closed__5));
return v___x_3587_;
}
}
}
else
{
lean_object* v___x_3588_; 
lean_del_object(v___x_3538_);
lean_dec(v_a_3536_);
lean_dec_ref(v___f_3524_);
lean_dec(v_a_3523_);
lean_dec_ref(v_chunk_3522_);
v___x_3588_ = ((lean_object*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__7___closed__8));
return v___x_3588_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__7___boxed(lean_object* v___y_3590_, lean_object* v_chunk_3591_, lean_object* v_a_3592_, lean_object* v___f_3593_, lean_object* v_x_3594_, lean_object* v___y_3595_){
_start:
{
lean_object* v_res_3596_; 
v_res_3596_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__7(v___y_3590_, v_chunk_3591_, v_a_3592_, v___f_3593_, v_x_3594_);
lean_dec(v___y_3590_);
return v_res_3596_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__8(lean_object* v___y_3597_, lean_object* v___f_3598_, lean_object* v_x_3599_){
_start:
{
if (lean_obj_tag(v_x_3599_) == 0)
{
lean_object* v_a_3601_; lean_object* v___x_3603_; uint8_t v_isShared_3604_; uint8_t v_isSharedCheck_3609_; 
lean_dec_ref(v___f_3598_);
v_a_3601_ = lean_ctor_get(v_x_3599_, 0);
v_isSharedCheck_3609_ = !lean_is_exclusive(v_x_3599_);
if (v_isSharedCheck_3609_ == 0)
{
v___x_3603_ = v_x_3599_;
v_isShared_3604_ = v_isSharedCheck_3609_;
goto v_resetjp_3602_;
}
else
{
lean_inc(v_a_3601_);
lean_dec(v_x_3599_);
v___x_3603_ = lean_box(0);
v_isShared_3604_ = v_isSharedCheck_3609_;
goto v_resetjp_3602_;
}
v_resetjp_3602_:
{
lean_object* v___x_3606_; 
if (v_isShared_3604_ == 0)
{
v___x_3606_ = v___x_3603_;
goto v_reusejp_3605_;
}
else
{
lean_object* v_reuseFailAlloc_3608_; 
v_reuseFailAlloc_3608_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3608_, 0, v_a_3601_);
v___x_3606_ = v_reuseFailAlloc_3608_;
goto v_reusejp_3605_;
}
v_reusejp_3605_:
{
lean_object* v___x_3607_; 
v___x_3607_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3607_, 0, v___x_3606_);
return v___x_3607_;
}
}
}
else
{
lean_object* v___x_3611_; uint8_t v_isShared_3612_; uint8_t v_isSharedCheck_3621_; 
v_isSharedCheck_3621_ = !lean_is_exclusive(v_x_3599_);
if (v_isSharedCheck_3621_ == 0)
{
lean_object* v_unused_3622_; 
v_unused_3622_ = lean_ctor_get(v_x_3599_, 0);
lean_dec(v_unused_3622_);
v___x_3611_ = v_x_3599_;
v_isShared_3612_ = v_isSharedCheck_3621_;
goto v_resetjp_3610_;
}
else
{
lean_dec(v_x_3599_);
v___x_3611_ = lean_box(0);
v_isShared_3612_ = v_isSharedCheck_3621_;
goto v_resetjp_3610_;
}
v_resetjp_3610_:
{
lean_object* v___x_3613_; uint8_t v___x_3614_; lean_object* v___x_3615_; lean_object* v___x_3617_; 
v___x_3613_ = lean_unsigned_to_nat(0u);
v___x_3614_ = 0;
v___x_3615_ = lean_st_ref_get(v___y_3597_);
if (v_isShared_3612_ == 0)
{
lean_ctor_set(v___x_3611_, 0, v___x_3615_);
v___x_3617_ = v___x_3611_;
goto v_reusejp_3616_;
}
else
{
lean_object* v_reuseFailAlloc_3620_; 
v_reuseFailAlloc_3620_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3620_, 0, v___x_3615_);
v___x_3617_ = v_reuseFailAlloc_3620_;
goto v_reusejp_3616_;
}
v_reusejp_3616_:
{
lean_object* v___x_3618_; lean_object* v___x_3619_; 
v___x_3618_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3618_, 0, v___x_3617_);
v___x_3619_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_3613_, v___x_3614_, v___x_3618_, v___f_3598_);
return v___x_3619_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__8___boxed(lean_object* v___y_3623_, lean_object* v___f_3624_, lean_object* v_x_3625_, lean_object* v___y_3626_){
_start:
{
lean_object* v_res_3627_; 
v_res_3627_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__8(v___y_3623_, v___f_3624_, v_x_3625_);
lean_dec(v___y_3623_);
return v_res_3627_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__9(lean_object* v_chunk_3628_, lean_object* v_a_3629_, lean_object* v___f_3630_, lean_object* v___y_3631_){
_start:
{
lean_object* v___f_3633_; lean_object* v___f_3634_; lean_object* v___x_3635_; uint8_t v___x_3636_; lean_object* v___x_3637_; lean_object* v___x_3638_; 
lean_inc_n(v___y_3631_, 2);
v___f_3633_ = lean_alloc_closure((void*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__7___boxed), 6, 4);
lean_closure_set(v___f_3633_, 0, v___y_3631_);
lean_closure_set(v___f_3633_, 1, v_chunk_3628_);
lean_closure_set(v___f_3633_, 2, v_a_3629_);
lean_closure_set(v___f_3633_, 3, v___f_3630_);
v___f_3634_ = lean_alloc_closure((void*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__8___boxed), 4, 2);
lean_closure_set(v___f_3634_, 0, v___y_3631_);
lean_closure_set(v___f_3634_, 1, v___f_3633_);
v___x_3635_ = lean_unsigned_to_nat(0u);
v___x_3636_ = 0;
v___x_3637_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1(v___y_3631_);
v___x_3638_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_3635_, v___x_3636_, v___x_3637_, v___f_3634_);
return v___x_3638_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__9___boxed(lean_object* v_chunk_3639_, lean_object* v_a_3640_, lean_object* v___f_3641_, lean_object* v___y_3642_, lean_object* v___y_3643_){
_start:
{
lean_object* v_res_3644_; 
v_res_3644_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__9(v_chunk_3639_, v_a_3640_, v___f_3641_, v___y_3642_);
lean_dec(v___y_3642_);
return v_res_3644_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__10(lean_object* v_a_3650_, lean_object* v___f_3651_, lean_object* v___f_3652_, lean_object* v_stream_3653_, lean_object* v_chunk_3654_, lean_object* v___f_3655_, lean_object* v_x_3656_){
_start:
{
if (lean_obj_tag(v_x_3656_) == 0)
{
lean_object* v_a_3658_; lean_object* v___x_3660_; uint8_t v_isShared_3661_; uint8_t v_isSharedCheck_3666_; 
lean_dec_ref(v___f_3655_);
lean_dec_ref(v_chunk_3654_);
lean_dec_ref(v_stream_3653_);
lean_dec_ref(v___f_3652_);
lean_dec_ref(v___f_3651_);
v_a_3658_ = lean_ctor_get(v_x_3656_, 0);
v_isSharedCheck_3666_ = !lean_is_exclusive(v_x_3656_);
if (v_isSharedCheck_3666_ == 0)
{
v___x_3660_ = v_x_3656_;
v_isShared_3661_ = v_isSharedCheck_3666_;
goto v_resetjp_3659_;
}
else
{
lean_inc(v_a_3658_);
lean_dec(v_x_3656_);
v___x_3660_ = lean_box(0);
v_isShared_3661_ = v_isSharedCheck_3666_;
goto v_resetjp_3659_;
}
v_resetjp_3659_:
{
lean_object* v___x_3663_; 
if (v_isShared_3661_ == 0)
{
v___x_3663_ = v___x_3660_;
goto v_reusejp_3662_;
}
else
{
lean_object* v_reuseFailAlloc_3665_; 
v_reuseFailAlloc_3665_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3665_, 0, v_a_3658_);
v___x_3663_ = v_reuseFailAlloc_3665_;
goto v_reusejp_3662_;
}
v_reusejp_3662_:
{
lean_object* v___x_3664_; 
v___x_3664_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3664_, 0, v___x_3663_);
return v___x_3664_;
}
}
}
else
{
lean_object* v_a_3667_; 
v_a_3667_ = lean_ctor_get(v_x_3656_, 0);
lean_inc(v_a_3667_);
lean_dec_ref_known(v_x_3656_, 1);
if (lean_obj_tag(v_a_3667_) == 0)
{
lean_object* v_a_3668_; lean_object* v___x_3670_; uint8_t v_isShared_3671_; uint8_t v_isSharedCheck_3676_; 
lean_dec_ref(v___f_3655_);
lean_dec_ref(v_chunk_3654_);
lean_dec_ref(v_stream_3653_);
lean_dec_ref(v___f_3652_);
lean_dec_ref(v___f_3651_);
v_a_3668_ = lean_ctor_get(v_a_3667_, 0);
v_isSharedCheck_3676_ = !lean_is_exclusive(v_a_3667_);
if (v_isSharedCheck_3676_ == 0)
{
v___x_3670_ = v_a_3667_;
v_isShared_3671_ = v_isSharedCheck_3676_;
goto v_resetjp_3669_;
}
else
{
lean_inc(v_a_3668_);
lean_dec(v_a_3667_);
v___x_3670_ = lean_box(0);
v_isShared_3671_ = v_isSharedCheck_3676_;
goto v_resetjp_3669_;
}
v_resetjp_3669_:
{
lean_object* v___x_3673_; 
if (v_isShared_3671_ == 0)
{
v___x_3673_ = v___x_3670_;
goto v_reusejp_3672_;
}
else
{
lean_object* v_reuseFailAlloc_3675_; 
v_reuseFailAlloc_3675_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3675_, 0, v_a_3668_);
v___x_3673_ = v_reuseFailAlloc_3675_;
goto v_reusejp_3672_;
}
v_reusejp_3672_:
{
lean_object* v___x_3674_; 
v___x_3674_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3674_, 0, v___x_3673_);
return v___x_3674_;
}
}
}
else
{
lean_object* v_a_3677_; 
v_a_3677_ = lean_ctor_get(v_a_3667_, 0);
lean_inc(v_a_3677_);
lean_dec_ref_known(v_a_3667_, 1);
if (lean_obj_tag(v_a_3677_) == 0)
{
lean_object* v___x_3678_; lean_object* v___x_3679_; uint8_t v___x_3680_; lean_object* v___x_3681_; lean_object* v___x_3682_; lean_object* v___x_3683_; 
lean_dec_ref(v___f_3655_);
lean_dec_ref(v_chunk_3654_);
lean_dec_ref(v_stream_3653_);
v___x_3678_ = lean_io_promise_result_opt(v_a_3650_);
v___x_3679_ = lean_unsigned_to_nat(0u);
v___x_3680_ = 0;
v___x_3681_ = lean_task_map(v___f_3651_, v___x_3678_, v___x_3679_, v___x_3680_);
v___x_3682_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3682_, 0, v___x_3681_);
v___x_3683_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_3679_, v___x_3680_, v___x_3682_, v___f_3652_);
return v___x_3683_;
}
else
{
lean_object* v_val_3684_; uint8_t v___x_3685_; 
lean_dec_ref(v___f_3652_);
lean_dec_ref(v___f_3651_);
v_val_3684_ = lean_ctor_get(v_a_3677_, 0);
lean_inc(v_val_3684_);
lean_dec_ref_known(v_a_3677_, 1);
v___x_3685_ = lean_unbox(v_val_3684_);
lean_dec(v_val_3684_);
if (v___x_3685_ == 0)
{
lean_object* v___x_3686_; 
lean_dec_ref(v___f_3655_);
v___x_3686_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27(v_stream_3653_, v_chunk_3654_);
return v___x_3686_;
}
else
{
lean_object* v___x_3687_; lean_object* v___x_3688_; 
lean_dec_ref(v_chunk_3654_);
lean_dec_ref(v_stream_3653_);
v___x_3687_ = lean_box(0);
v___x_3688_ = lean_apply_2(v___f_3655_, v___x_3687_, lean_box(0));
return v___x_3688_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__10___boxed(lean_object* v_a_3689_, lean_object* v___f_3690_, lean_object* v___f_3691_, lean_object* v_stream_3692_, lean_object* v_chunk_3693_, lean_object* v___f_3694_, lean_object* v_x_3695_, lean_object* v___y_3696_){
_start:
{
lean_object* v_res_3697_; 
v_res_3697_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__10(v_a_3689_, v___f_3690_, v___f_3691_, v_stream_3692_, v_chunk_3693_, v___f_3694_, v_x_3695_);
lean_dec(v_a_3689_);
return v_res_3697_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__11(lean_object* v_chunk_3698_, lean_object* v___f_3699_, lean_object* v___f_3700_, lean_object* v___f_3701_, lean_object* v_stream_3702_, lean_object* v___f_3703_, lean_object* v_x_3704_){
_start:
{
if (lean_obj_tag(v_x_3704_) == 0)
{
lean_object* v_a_3706_; lean_object* v___x_3708_; uint8_t v_isShared_3709_; uint8_t v_isSharedCheck_3714_; 
lean_dec_ref(v___f_3703_);
lean_dec_ref(v_stream_3702_);
lean_dec_ref(v___f_3701_);
lean_dec_ref(v___f_3700_);
lean_dec_ref(v___f_3699_);
lean_dec_ref(v_chunk_3698_);
v_a_3706_ = lean_ctor_get(v_x_3704_, 0);
v_isSharedCheck_3714_ = !lean_is_exclusive(v_x_3704_);
if (v_isSharedCheck_3714_ == 0)
{
v___x_3708_ = v_x_3704_;
v_isShared_3709_ = v_isSharedCheck_3714_;
goto v_resetjp_3707_;
}
else
{
lean_inc(v_a_3706_);
lean_dec(v_x_3704_);
v___x_3708_ = lean_box(0);
v_isShared_3709_ = v_isSharedCheck_3714_;
goto v_resetjp_3707_;
}
v_resetjp_3707_:
{
lean_object* v___x_3711_; 
if (v_isShared_3709_ == 0)
{
v___x_3711_ = v___x_3708_;
goto v_reusejp_3710_;
}
else
{
lean_object* v_reuseFailAlloc_3713_; 
v_reuseFailAlloc_3713_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3713_, 0, v_a_3706_);
v___x_3711_ = v_reuseFailAlloc_3713_;
goto v_reusejp_3710_;
}
v_reusejp_3710_:
{
lean_object* v___x_3712_; 
v___x_3712_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3712_, 0, v___x_3711_);
return v___x_3712_;
}
}
}
else
{
lean_object* v_a_3715_; lean_object* v___f_3716_; lean_object* v___f_3717_; lean_object* v___x_3718_; uint8_t v___x_3719_; lean_object* v___x_3720_; lean_object* v___x_3721_; 
v_a_3715_ = lean_ctor_get(v_x_3704_, 0);
lean_inc_n(v_a_3715_, 2);
lean_dec_ref_known(v_x_3704_, 1);
lean_inc_ref(v_chunk_3698_);
v___f_3716_ = lean_alloc_closure((void*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__9___boxed), 5, 3);
lean_closure_set(v___f_3716_, 0, v_chunk_3698_);
lean_closure_set(v___f_3716_, 1, v_a_3715_);
lean_closure_set(v___f_3716_, 2, v___f_3699_);
lean_inc_ref(v_stream_3702_);
v___f_3717_ = lean_alloc_closure((void*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__10___boxed), 8, 6);
lean_closure_set(v___f_3717_, 0, v_a_3715_);
lean_closure_set(v___f_3717_, 1, v___f_3700_);
lean_closure_set(v___f_3717_, 2, v___f_3701_);
lean_closure_set(v___f_3717_, 3, v_stream_3702_);
lean_closure_set(v___f_3717_, 4, v_chunk_3698_);
lean_closure_set(v___f_3717_, 5, v___f_3703_);
v___x_3718_ = lean_unsigned_to_nat(0u);
v___x_3719_ = 0;
v___x_3720_ = l_Std_Mutex_atomically___at___00Std_Http_Body_Stream_tryRecv_spec__2___redArg(v_stream_3702_, v___f_3716_);
v___x_3721_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_3718_, v___x_3719_, v___x_3720_, v___f_3717_);
return v___x_3721_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__11___boxed(lean_object* v_chunk_3722_, lean_object* v___f_3723_, lean_object* v___f_3724_, lean_object* v___f_3725_, lean_object* v_stream_3726_, lean_object* v___f_3727_, lean_object* v_x_3728_, lean_object* v___y_3729_){
_start:
{
lean_object* v_res_3730_; 
v_res_3730_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__11(v_chunk_3722_, v___f_3723_, v___f_3724_, v___f_3725_, v_stream_3726_, v___f_3727_, v_x_3728_);
return v_res_3730_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27(lean_object* v_stream_3731_, lean_object* v_chunk_3732_){
_start:
{
lean_object* v___f_3734_; lean_object* v___f_3735_; lean_object* v___f_3736_; lean_object* v___f_3737_; lean_object* v___f_3738_; lean_object* v___x_3739_; uint8_t v___x_3740_; lean_object* v___x_3741_; lean_object* v___x_3742_; lean_object* v___x_3743_; lean_object* v___x_3744_; 
v___f_3734_ = ((lean_object*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___closed__0));
v___f_3735_ = ((lean_object*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___closed__1));
v___f_3736_ = ((lean_object*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___closed__2));
v___f_3737_ = ((lean_object*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___closed__3));
v___f_3738_ = lean_alloc_closure((void*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__11___boxed), 8, 6);
lean_closure_set(v___f_3738_, 0, v_chunk_3732_);
lean_closure_set(v___f_3738_, 1, v___f_3734_);
lean_closure_set(v___f_3738_, 2, v___f_3737_);
lean_closure_set(v___f_3738_, 3, v___f_3736_);
lean_closure_set(v___f_3738_, 4, v_stream_3731_);
lean_closure_set(v___f_3738_, 5, v___f_3735_);
v___x_3739_ = lean_unsigned_to_nat(0u);
v___x_3740_ = 0;
v___x_3741_ = lean_io_promise_new();
v___x_3742_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3742_, 0, v___x_3741_);
v___x_3743_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3743_, 0, v___x_3742_);
v___x_3744_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_3739_, v___x_3740_, v___x_3743_, v___f_3738_);
return v___x_3744_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___boxed(lean_object* v_stream_3745_, lean_object* v_chunk_3746_, lean_object* v___y_3747_){
_start:
{
lean_object* v_res_3748_; 
v_res_3748_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27(v_stream_3745_, v_chunk_3746_);
return v_res_3748_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_send___lam__0(lean_object* v_stream_3749_, lean_object* v_x_3750_){
_start:
{
if (lean_obj_tag(v_x_3750_) == 0)
{
lean_object* v_a_3752_; lean_object* v___x_3754_; uint8_t v_isShared_3755_; uint8_t v_isSharedCheck_3760_; 
lean_dec_ref(v_stream_3749_);
v_a_3752_ = lean_ctor_get(v_x_3750_, 0);
v_isSharedCheck_3760_ = !lean_is_exclusive(v_x_3750_);
if (v_isSharedCheck_3760_ == 0)
{
v___x_3754_ = v_x_3750_;
v_isShared_3755_ = v_isSharedCheck_3760_;
goto v_resetjp_3753_;
}
else
{
lean_inc(v_a_3752_);
lean_dec(v_x_3750_);
v___x_3754_ = lean_box(0);
v_isShared_3755_ = v_isSharedCheck_3760_;
goto v_resetjp_3753_;
}
v_resetjp_3753_:
{
lean_object* v___x_3757_; 
if (v_isShared_3755_ == 0)
{
v___x_3757_ = v___x_3754_;
goto v_reusejp_3756_;
}
else
{
lean_object* v_reuseFailAlloc_3759_; 
v_reuseFailAlloc_3759_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3759_, 0, v_a_3752_);
v___x_3757_ = v_reuseFailAlloc_3759_;
goto v_reusejp_3756_;
}
v_reusejp_3756_:
{
lean_object* v___x_3758_; 
v___x_3758_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3758_, 0, v___x_3757_);
return v___x_3758_;
}
}
}
else
{
lean_object* v_a_3761_; 
v_a_3761_ = lean_ctor_get(v_x_3750_, 0);
lean_inc(v_a_3761_);
lean_dec_ref_known(v_x_3750_, 1);
if (lean_obj_tag(v_a_3761_) == 0)
{
lean_object* v_a_3762_; lean_object* v___x_3764_; uint8_t v_isShared_3765_; uint8_t v_isSharedCheck_3770_; 
lean_dec_ref(v_stream_3749_);
v_a_3762_ = lean_ctor_get(v_a_3761_, 0);
v_isSharedCheck_3770_ = !lean_is_exclusive(v_a_3761_);
if (v_isSharedCheck_3770_ == 0)
{
v___x_3764_ = v_a_3761_;
v_isShared_3765_ = v_isSharedCheck_3770_;
goto v_resetjp_3763_;
}
else
{
lean_inc(v_a_3762_);
lean_dec(v_a_3761_);
v___x_3764_ = lean_box(0);
v_isShared_3765_ = v_isSharedCheck_3770_;
goto v_resetjp_3763_;
}
v_resetjp_3763_:
{
lean_object* v___x_3767_; 
if (v_isShared_3765_ == 0)
{
v___x_3767_ = v___x_3764_;
goto v_reusejp_3766_;
}
else
{
lean_object* v_reuseFailAlloc_3769_; 
v_reuseFailAlloc_3769_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3769_, 0, v_a_3762_);
v___x_3767_ = v_reuseFailAlloc_3769_;
goto v_reusejp_3766_;
}
v_reusejp_3766_:
{
lean_object* v___x_3768_; 
v___x_3768_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3768_, 0, v___x_3767_);
return v___x_3768_;
}
}
}
else
{
lean_object* v_a_3771_; 
v_a_3771_ = lean_ctor_get(v_a_3761_, 0);
lean_inc(v_a_3771_);
lean_dec_ref_known(v_a_3761_, 1);
if (lean_obj_tag(v_a_3771_) == 0)
{
lean_object* v___x_3772_; 
lean_dec_ref(v_stream_3749_);
v___x_3772_ = ((lean_object*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__0___closed__1));
return v___x_3772_;
}
else
{
lean_object* v_val_3773_; uint8_t v___y_3775_; lean_object* v_data_3778_; lean_object* v_extensions_3779_; uint8_t v___x_3780_; 
v_val_3773_ = lean_ctor_get(v_a_3771_, 0);
lean_inc(v_val_3773_);
lean_dec_ref_known(v_a_3771_, 1);
v_data_3778_ = lean_ctor_get(v_val_3773_, 0);
v_extensions_3779_ = lean_ctor_get(v_val_3773_, 1);
v___x_3780_ = l_ByteArray_isEmpty(v_data_3778_);
if (v___x_3780_ == 0)
{
v___y_3775_ = v___x_3780_;
goto v___jp_3774_;
}
else
{
lean_object* v___x_3781_; lean_object* v___x_3782_; uint8_t v___x_3783_; 
v___x_3781_ = lean_array_get_size(v_extensions_3779_);
v___x_3782_ = lean_unsigned_to_nat(0u);
v___x_3783_ = lean_nat_dec_eq(v___x_3781_, v___x_3782_);
v___y_3775_ = v___x_3783_;
goto v___jp_3774_;
}
v___jp_3774_:
{
if (v___y_3775_ == 0)
{
lean_object* v___x_3776_; 
v___x_3776_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27(v_stream_3749_, v_val_3773_);
return v___x_3776_;
}
else
{
lean_object* v___x_3777_; 
lean_dec(v_val_3773_);
lean_dec_ref(v_stream_3749_);
v___x_3777_ = ((lean_object*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__0___closed__1));
return v___x_3777_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_send___lam__0___boxed(lean_object* v_stream_3784_, lean_object* v_x_3785_, lean_object* v___y_3786_){
_start:
{
lean_object* v_res_3787_; 
v_res_3787_ = l_Std_Http_Body_Stream_send___lam__0(v_stream_3784_, v_x_3785_);
return v_res_3787_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_send(lean_object* v_stream_3788_, lean_object* v_chunk_3789_, uint8_t v_incomplete_3790_){
_start:
{
lean_object* v___f_3792_; lean_object* v___x_3793_; uint8_t v___x_3794_; lean_object* v___x_3795_; lean_object* v___x_3796_; lean_object* v___x_3797_; lean_object* v___x_3798_; 
lean_inc_ref(v_stream_3788_);
v___f_3792_ = lean_alloc_closure((void*)(l_Std_Http_Body_Stream_send___lam__0___boxed), 3, 1);
lean_closure_set(v___f_3792_, 0, v_stream_3788_);
v___x_3793_ = lean_unsigned_to_nat(0u);
v___x_3794_ = 0;
v___x_3795_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_collapseForSend(v_stream_3788_, v_chunk_3789_, v_incomplete_3790_);
v___x_3796_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3796_, 0, v___x_3795_);
v___x_3797_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3797_, 0, v___x_3796_);
v___x_3798_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_3793_, v___x_3794_, v___x_3797_, v___f_3792_);
return v___x_3798_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_send___boxed(lean_object* v_stream_3799_, lean_object* v_chunk_3800_, lean_object* v_incomplete_3801_, lean_object* v___y_3802_){
_start:
{
uint8_t v_incomplete_boxed_3803_; lean_object* v_res_3804_; 
v_incomplete_boxed_3803_ = lean_unbox(v_incomplete_3801_);
v_res_3804_ = l_Std_Http_Body_Stream_send(v_stream_3799_, v_chunk_3800_, v_incomplete_boxed_3803_);
return v_res_3804_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_hasInterest_x27___at___00Std_Http_Body_Stream_hasInterest_spec__0___lam__0(lean_object* v_x_3805_){
_start:
{
uint8_t v___y_3808_; 
if (lean_obj_tag(v_x_3805_) == 0)
{
lean_object* v_a_3812_; lean_object* v___x_3814_; uint8_t v_isShared_3815_; uint8_t v_isSharedCheck_3820_; 
v_a_3812_ = lean_ctor_get(v_x_3805_, 0);
v_isSharedCheck_3820_ = !lean_is_exclusive(v_x_3805_);
if (v_isSharedCheck_3820_ == 0)
{
v___x_3814_ = v_x_3805_;
v_isShared_3815_ = v_isSharedCheck_3820_;
goto v_resetjp_3813_;
}
else
{
lean_inc(v_a_3812_);
lean_dec(v_x_3805_);
v___x_3814_ = lean_box(0);
v_isShared_3815_ = v_isSharedCheck_3820_;
goto v_resetjp_3813_;
}
v_resetjp_3813_:
{
lean_object* v___x_3817_; 
if (v_isShared_3815_ == 0)
{
v___x_3817_ = v___x_3814_;
goto v_reusejp_3816_;
}
else
{
lean_object* v_reuseFailAlloc_3819_; 
v_reuseFailAlloc_3819_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3819_, 0, v_a_3812_);
v___x_3817_ = v_reuseFailAlloc_3819_;
goto v_reusejp_3816_;
}
v_reusejp_3816_:
{
lean_object* v___x_3818_; 
v___x_3818_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3818_, 0, v___x_3817_);
return v___x_3818_;
}
}
}
else
{
lean_object* v_a_3821_; lean_object* v_pendingConsumer_3822_; 
v_a_3821_ = lean_ctor_get(v_x_3805_, 0);
lean_inc(v_a_3821_);
lean_dec_ref_known(v_x_3805_, 1);
v_pendingConsumer_3822_ = lean_ctor_get(v_a_3821_, 1);
lean_inc(v_pendingConsumer_3822_);
lean_dec(v_a_3821_);
if (lean_obj_tag(v_pendingConsumer_3822_) == 0)
{
uint8_t v___x_3823_; 
v___x_3823_ = 0;
v___y_3808_ = v___x_3823_;
goto v___jp_3807_;
}
else
{
uint8_t v___x_3824_; 
lean_dec_ref_known(v_pendingConsumer_3822_, 1);
v___x_3824_ = 1;
v___y_3808_ = v___x_3824_;
goto v___jp_3807_;
}
}
v___jp_3807_:
{
lean_object* v___x_3809_; lean_object* v___x_3810_; lean_object* v___x_3811_; 
v___x_3809_ = lean_box(v___y_3808_);
v___x_3810_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3810_, 0, v___x_3809_);
v___x_3811_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3811_, 0, v___x_3810_);
return v___x_3811_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_hasInterest_x27___at___00Std_Http_Body_Stream_hasInterest_spec__0___lam__0___boxed(lean_object* v_x_3825_, lean_object* v___y_3826_){
_start:
{
lean_object* v_res_3827_; 
v_res_3827_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_hasInterest_x27___at___00Std_Http_Body_Stream_hasInterest_spec__0___lam__0(v_x_3825_);
return v_res_3827_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_hasInterest_x27___at___00Std_Http_Body_Stream_hasInterest_spec__0(lean_object* v___y_3829_){
_start:
{
lean_object* v___f_3831_; lean_object* v___x_3832_; uint8_t v___x_3833_; lean_object* v___x_3834_; lean_object* v___x_3835_; lean_object* v___x_3836_; lean_object* v___x_3837_; 
v___f_3831_ = ((lean_object*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_hasInterest_x27___at___00Std_Http_Body_Stream_hasInterest_spec__0___closed__0));
v___x_3832_ = lean_unsigned_to_nat(0u);
v___x_3833_ = 0;
v___x_3834_ = lean_st_ref_get(v___y_3829_);
v___x_3835_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3835_, 0, v___x_3834_);
v___x_3836_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3836_, 0, v___x_3835_);
v___x_3837_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_3832_, v___x_3833_, v___x_3836_, v___f_3831_);
return v___x_3837_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_hasInterest_x27___at___00Std_Http_Body_Stream_hasInterest_spec__0___boxed(lean_object* v___y_3838_, lean_object* v___y_3839_){
_start:
{
lean_object* v_res_3840_; 
v_res_3840_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_hasInterest_x27___at___00Std_Http_Body_Stream_hasInterest_spec__0(v___y_3838_);
lean_dec(v___y_3838_);
return v_res_3840_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_hasInterest___lam__0(lean_object* v___y_3841_, lean_object* v_x_3842_){
_start:
{
if (lean_obj_tag(v_x_3842_) == 0)
{
lean_object* v_a_3844_; lean_object* v___x_3846_; uint8_t v_isShared_3847_; uint8_t v_isSharedCheck_3852_; 
v_a_3844_ = lean_ctor_get(v_x_3842_, 0);
v_isSharedCheck_3852_ = !lean_is_exclusive(v_x_3842_);
if (v_isSharedCheck_3852_ == 0)
{
v___x_3846_ = v_x_3842_;
v_isShared_3847_ = v_isSharedCheck_3852_;
goto v_resetjp_3845_;
}
else
{
lean_inc(v_a_3844_);
lean_dec(v_x_3842_);
v___x_3846_ = lean_box(0);
v_isShared_3847_ = v_isSharedCheck_3852_;
goto v_resetjp_3845_;
}
v_resetjp_3845_:
{
lean_object* v___x_3849_; 
if (v_isShared_3847_ == 0)
{
v___x_3849_ = v___x_3846_;
goto v_reusejp_3848_;
}
else
{
lean_object* v_reuseFailAlloc_3851_; 
v_reuseFailAlloc_3851_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3851_, 0, v_a_3844_);
v___x_3849_ = v_reuseFailAlloc_3851_;
goto v_reusejp_3848_;
}
v_reusejp_3848_:
{
lean_object* v___x_3850_; 
v___x_3850_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3850_, 0, v___x_3849_);
return v___x_3850_;
}
}
}
else
{
lean_object* v___x_3853_; 
lean_dec_ref_known(v_x_3842_, 1);
v___x_3853_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_hasInterest_x27___at___00Std_Http_Body_Stream_hasInterest_spec__0(v___y_3841_);
return v___x_3853_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_hasInterest___lam__0___boxed(lean_object* v___y_3854_, lean_object* v_x_3855_, lean_object* v___y_3856_){
_start:
{
lean_object* v_res_3857_; 
v_res_3857_ = l_Std_Http_Body_Stream_hasInterest___lam__0(v___y_3854_, v_x_3855_);
lean_dec(v___y_3854_);
return v_res_3857_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_hasInterest___lam__1(lean_object* v___y_3858_){
_start:
{
lean_object* v___f_3860_; lean_object* v___x_3861_; uint8_t v___x_3862_; lean_object* v___x_3863_; lean_object* v___x_3864_; 
lean_inc(v___y_3858_);
v___f_3860_ = lean_alloc_closure((void*)(l_Std_Http_Body_Stream_hasInterest___lam__0___boxed), 3, 1);
lean_closure_set(v___f_3860_, 0, v___y_3858_);
v___x_3861_ = lean_unsigned_to_nat(0u);
v___x_3862_ = 0;
v___x_3863_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1(v___y_3858_);
v___x_3864_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_3861_, v___x_3862_, v___x_3863_, v___f_3860_);
return v___x_3864_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_hasInterest___lam__1___boxed(lean_object* v___y_3865_, lean_object* v___y_3866_){
_start:
{
lean_object* v_res_3867_; 
v_res_3867_ = l_Std_Http_Body_Stream_hasInterest___lam__1(v___y_3865_);
lean_dec(v___y_3865_);
return v_res_3867_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_hasInterest(lean_object* v_stream_3869_){
_start:
{
lean_object* v___f_3871_; lean_object* v___x_3872_; 
v___f_3871_ = ((lean_object*)(l_Std_Http_Body_Stream_hasInterest___closed__0));
v___x_3872_ = l_Std_Mutex_atomically___at___00Std_Http_Body_Stream_tryRecv_spec__2___redArg(v_stream_3869_, v___f_3871_);
return v___x_3872_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_hasInterest___boxed(lean_object* v_stream_3873_, lean_object* v___y_3874_){
_start:
{
lean_object* v_res_3875_; 
v_res_3875_ = l_Std_Http_Body_Stream_hasInterest(v_stream_3873_);
return v_res_3875_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Waiter_race___at___00Std_Http_Body_Stream_interestSelector_spec__0___lam__0(lean_object* v_lose_3876_, lean_object* v___y_3877_, uint8_t v___x_3878_, lean_object* v_promise_3879_, lean_object* v_x_3880_){
_start:
{
if (lean_obj_tag(v_x_3880_) == 0)
{
lean_object* v_a_3882_; lean_object* v___x_3884_; uint8_t v_isShared_3885_; uint8_t v_isSharedCheck_3890_; 
lean_dec_ref(v_lose_3876_);
v_a_3882_ = lean_ctor_get(v_x_3880_, 0);
v_isSharedCheck_3890_ = !lean_is_exclusive(v_x_3880_);
if (v_isSharedCheck_3890_ == 0)
{
v___x_3884_ = v_x_3880_;
v_isShared_3885_ = v_isSharedCheck_3890_;
goto v_resetjp_3883_;
}
else
{
lean_inc(v_a_3882_);
lean_dec(v_x_3880_);
v___x_3884_ = lean_box(0);
v_isShared_3885_ = v_isSharedCheck_3890_;
goto v_resetjp_3883_;
}
v_resetjp_3883_:
{
lean_object* v___x_3887_; 
if (v_isShared_3885_ == 0)
{
v___x_3887_ = v___x_3884_;
goto v_reusejp_3886_;
}
else
{
lean_object* v_reuseFailAlloc_3889_; 
v_reuseFailAlloc_3889_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3889_, 0, v_a_3882_);
v___x_3887_ = v_reuseFailAlloc_3889_;
goto v_reusejp_3886_;
}
v_reusejp_3886_:
{
lean_object* v___x_3888_; 
v___x_3888_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3888_, 0, v___x_3887_);
return v___x_3888_;
}
}
}
else
{
lean_object* v_a_3891_; lean_object* v___x_3893_; uint8_t v_isShared_3894_; uint8_t v_isSharedCheck_3904_; 
v_a_3891_ = lean_ctor_get(v_x_3880_, 0);
v_isSharedCheck_3904_ = !lean_is_exclusive(v_x_3880_);
if (v_isSharedCheck_3904_ == 0)
{
v___x_3893_ = v_x_3880_;
v_isShared_3894_ = v_isSharedCheck_3904_;
goto v_resetjp_3892_;
}
else
{
lean_inc(v_a_3891_);
lean_dec(v_x_3880_);
v___x_3893_ = lean_box(0);
v_isShared_3894_ = v_isSharedCheck_3904_;
goto v_resetjp_3892_;
}
v_resetjp_3892_:
{
uint8_t v___x_3895_; 
v___x_3895_ = lean_unbox(v_a_3891_);
lean_dec(v_a_3891_);
if (v___x_3895_ == 0)
{
lean_object* v___x_3896_; 
lean_del_object(v___x_3893_);
lean_inc(v___y_3877_);
v___x_3896_ = lean_apply_2(v_lose_3876_, v___y_3877_, lean_box(0));
return v___x_3896_;
}
else
{
lean_object* v___x_3897_; lean_object* v___x_3899_; 
lean_dec_ref(v_lose_3876_);
v___x_3897_ = lean_box(v___x_3878_);
if (v_isShared_3894_ == 0)
{
lean_ctor_set(v___x_3893_, 0, v___x_3897_);
v___x_3899_ = v___x_3893_;
goto v_reusejp_3898_;
}
else
{
lean_object* v_reuseFailAlloc_3903_; 
v_reuseFailAlloc_3903_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3903_, 0, v___x_3897_);
v___x_3899_ = v_reuseFailAlloc_3903_;
goto v_reusejp_3898_;
}
v_reusejp_3898_:
{
lean_object* v___x_3900_; lean_object* v___x_3901_; lean_object* v___x_3902_; 
v___x_3900_ = lean_io_promise_resolve(v___x_3899_, v_promise_3879_);
v___x_3901_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3901_, 0, v___x_3900_);
v___x_3902_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3902_, 0, v___x_3901_);
return v___x_3902_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_Waiter_race___at___00Std_Http_Body_Stream_interestSelector_spec__0___lam__0___boxed(lean_object* v_lose_3905_, lean_object* v___y_3906_, lean_object* v___x_3907_, lean_object* v_promise_3908_, lean_object* v_x_3909_, lean_object* v___y_3910_){
_start:
{
uint8_t v___x_4451__boxed_3911_; lean_object* v_res_3912_; 
v___x_4451__boxed_3911_ = lean_unbox(v___x_3907_);
v_res_3912_ = l_Std_Async_Waiter_race___at___00Std_Http_Body_Stream_interestSelector_spec__0___lam__0(v_lose_3905_, v___y_3906_, v___x_4451__boxed_3911_, v_promise_3908_, v_x_3909_);
lean_dec(v_promise_3908_);
lean_dec(v___y_3906_);
return v_res_3912_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Waiter_race___at___00Std_Http_Body_Stream_interestSelector_spec__0(lean_object* v_w_3913_, lean_object* v_lose_3914_, lean_object* v___y_3915_){
_start:
{
lean_object* v_finished_3917_; lean_object* v_promise_3918_; uint8_t v___x_3919_; lean_object* v___x_3920_; lean_object* v___f_3921_; lean_object* v___x_3922_; lean_object* v___x_3923_; uint8_t v___y_3925_; uint8_t v___x_3933_; 
v_finished_3917_ = lean_ctor_get(v_w_3913_, 0);
lean_inc(v_finished_3917_);
v_promise_3918_ = lean_ctor_get(v_w_3913_, 1);
lean_inc(v_promise_3918_);
lean_dec_ref(v_w_3913_);
v___x_3919_ = 0;
v___x_3920_ = lean_box(v___x_3919_);
lean_inc(v___y_3915_);
v___f_3921_ = lean_alloc_closure((void*)(l_Std_Async_Waiter_race___at___00Std_Http_Body_Stream_interestSelector_spec__0___lam__0___boxed), 6, 4);
lean_closure_set(v___f_3921_, 0, v_lose_3914_);
lean_closure_set(v___f_3921_, 1, v___y_3915_);
lean_closure_set(v___f_3921_, 2, v___x_3920_);
lean_closure_set(v___f_3921_, 3, v_promise_3918_);
v___x_3922_ = lean_unsigned_to_nat(0u);
v___x_3923_ = lean_st_ref_take(v_finished_3917_);
v___x_3933_ = lean_unbox(v___x_3923_);
lean_dec(v___x_3923_);
if (v___x_3933_ == 0)
{
uint8_t v___x_3934_; 
v___x_3934_ = 1;
v___y_3925_ = v___x_3934_;
goto v___jp_3924_;
}
else
{
v___y_3925_ = v___x_3919_;
goto v___jp_3924_;
}
v___jp_3924_:
{
uint8_t v___x_3926_; lean_object* v___x_3927_; lean_object* v___x_3928_; lean_object* v___x_3929_; lean_object* v___x_3930_; lean_object* v___x_3931_; lean_object* v___x_3932_; 
v___x_3926_ = 1;
v___x_3927_ = lean_box(v___x_3926_);
v___x_3928_ = lean_st_ref_put(v_finished_3917_, v___x_3927_);
lean_dec(v_finished_3917_);
v___x_3929_ = lean_box(v___y_3925_);
v___x_3930_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3930_, 0, v___x_3929_);
v___x_3931_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3931_, 0, v___x_3930_);
v___x_3932_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_3922_, v___x_3919_, v___x_3931_, v___f_3921_);
return v___x_3932_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_Waiter_race___at___00Std_Http_Body_Stream_interestSelector_spec__0___boxed(lean_object* v_w_3935_, lean_object* v_lose_3936_, lean_object* v___y_3937_, lean_object* v___y_3938_){
_start:
{
lean_object* v_res_3939_; 
v_res_3939_ = l_Std_Async_Waiter_race___at___00Std_Http_Body_Stream_interestSelector_spec__0(v_w_3935_, v_lose_3936_, v___y_3937_);
lean_dec(v___y_3937_);
return v_res_3939_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Waiter_race___at___00Std_Http_Body_Stream_interestSelector_spec__1(lean_object* v_w_3940_, lean_object* v_lose_3941_, lean_object* v___y_3942_){
_start:
{
lean_object* v_finished_3944_; lean_object* v_promise_3945_; uint8_t v___x_3946_; lean_object* v___x_3947_; lean_object* v___f_3948_; lean_object* v___x_3949_; uint8_t v___x_3950_; lean_object* v___x_3951_; uint8_t v___y_3953_; uint8_t v___x_3960_; 
v_finished_3944_ = lean_ctor_get(v_w_3940_, 0);
lean_inc(v_finished_3944_);
v_promise_3945_ = lean_ctor_get(v_w_3940_, 1);
lean_inc(v_promise_3945_);
lean_dec_ref(v_w_3940_);
v___x_3946_ = 1;
v___x_3947_ = lean_box(v___x_3946_);
lean_inc(v___y_3942_);
v___f_3948_ = lean_alloc_closure((void*)(l_Std_Async_Waiter_race___at___00Std_Http_Body_Stream_interestSelector_spec__0___lam__0___boxed), 6, 4);
lean_closure_set(v___f_3948_, 0, v_lose_3941_);
lean_closure_set(v___f_3948_, 1, v___y_3942_);
lean_closure_set(v___f_3948_, 2, v___x_3947_);
lean_closure_set(v___f_3948_, 3, v_promise_3945_);
v___x_3949_ = lean_unsigned_to_nat(0u);
v___x_3950_ = 0;
v___x_3951_ = lean_st_ref_take(v_finished_3944_);
v___x_3960_ = lean_unbox(v___x_3951_);
lean_dec(v___x_3951_);
if (v___x_3960_ == 0)
{
v___y_3953_ = v___x_3946_;
goto v___jp_3952_;
}
else
{
v___y_3953_ = v___x_3950_;
goto v___jp_3952_;
}
v___jp_3952_:
{
lean_object* v___x_3954_; lean_object* v___x_3955_; lean_object* v___x_3956_; lean_object* v___x_3957_; lean_object* v___x_3958_; lean_object* v___x_3959_; 
v___x_3954_ = lean_box(v___x_3946_);
v___x_3955_ = lean_st_ref_put(v_finished_3944_, v___x_3954_);
lean_dec(v_finished_3944_);
v___x_3956_ = lean_box(v___y_3953_);
v___x_3957_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3957_, 0, v___x_3956_);
v___x_3958_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3958_, 0, v___x_3957_);
v___x_3959_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_3949_, v___x_3950_, v___x_3958_, v___f_3948_);
return v___x_3959_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_Waiter_race___at___00Std_Http_Body_Stream_interestSelector_spec__1___boxed(lean_object* v_w_3961_, lean_object* v_lose_3962_, lean_object* v___y_3963_, lean_object* v___y_3964_){
_start:
{
lean_object* v_res_3965_; 
v_res_3965_ = l_Std_Async_Waiter_race___at___00Std_Http_Body_Stream_interestSelector_spec__1(v_w_3961_, v_lose_3962_, v___y_3963_);
lean_dec(v___y_3963_);
return v_res_3965_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_interestSelector___lam__0(lean_object* v_x_3982_){
_start:
{
if (lean_obj_tag(v_x_3982_) == 0)
{
lean_object* v_a_3984_; lean_object* v___x_3986_; uint8_t v_isShared_3987_; uint8_t v_isSharedCheck_3992_; 
v_a_3984_ = lean_ctor_get(v_x_3982_, 0);
v_isSharedCheck_3992_ = !lean_is_exclusive(v_x_3982_);
if (v_isSharedCheck_3992_ == 0)
{
v___x_3986_ = v_x_3982_;
v_isShared_3987_ = v_isSharedCheck_3992_;
goto v_resetjp_3985_;
}
else
{
lean_inc(v_a_3984_);
lean_dec(v_x_3982_);
v___x_3986_ = lean_box(0);
v_isShared_3987_ = v_isSharedCheck_3992_;
goto v_resetjp_3985_;
}
v_resetjp_3985_:
{
lean_object* v___x_3989_; 
if (v_isShared_3987_ == 0)
{
v___x_3989_ = v___x_3986_;
goto v_reusejp_3988_;
}
else
{
lean_object* v_reuseFailAlloc_3991_; 
v_reuseFailAlloc_3991_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3991_, 0, v_a_3984_);
v___x_3989_ = v_reuseFailAlloc_3991_;
goto v_reusejp_3988_;
}
v_reusejp_3988_:
{
lean_object* v___x_3990_; 
v___x_3990_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3990_, 0, v___x_3989_);
return v___x_3990_;
}
}
}
else
{
lean_object* v_a_3993_; lean_object* v_pendingConsumer_3994_; 
v_a_3993_ = lean_ctor_get(v_x_3982_, 0);
lean_inc(v_a_3993_);
lean_dec_ref_known(v_x_3982_, 1);
v_pendingConsumer_3994_ = lean_ctor_get(v_a_3993_, 1);
if (lean_obj_tag(v_pendingConsumer_3994_) == 0)
{
uint8_t v_closed_3995_; 
v_closed_3995_ = lean_ctor_get_uint8(v_a_3993_, sizeof(void*)*6);
lean_dec(v_a_3993_);
if (v_closed_3995_ == 0)
{
lean_object* v___x_3996_; 
v___x_3996_ = ((lean_object*)(l_Std_Http_Body_Stream_interestSelector___lam__0___closed__0));
return v___x_3996_;
}
else
{
lean_object* v___x_3997_; 
v___x_3997_ = ((lean_object*)(l_Std_Http_Body_Stream_interestSelector___lam__0___closed__3));
return v___x_3997_;
}
}
else
{
lean_object* v___x_3998_; 
lean_dec(v_a_3993_);
v___x_3998_ = ((lean_object*)(l_Std_Http_Body_Stream_interestSelector___lam__0___closed__6));
return v___x_3998_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_interestSelector___lam__0___boxed(lean_object* v_x_3999_, lean_object* v___y_4000_){
_start:
{
lean_object* v_res_4001_; 
v_res_4001_ = l_Std_Http_Body_Stream_interestSelector___lam__0(v_x_3999_);
return v_res_4001_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_interestSelector___lam__3(lean_object* v_waiter_4009_, lean_object* v___y_4010_, lean_object* v_x_4011_){
_start:
{
if (lean_obj_tag(v_x_4011_) == 0)
{
lean_object* v_a_4013_; lean_object* v___x_4015_; uint8_t v_isShared_4016_; uint8_t v_isSharedCheck_4021_; 
lean_dec_ref(v_waiter_4009_);
v_a_4013_ = lean_ctor_get(v_x_4011_, 0);
v_isSharedCheck_4021_ = !lean_is_exclusive(v_x_4011_);
if (v_isSharedCheck_4021_ == 0)
{
v___x_4015_ = v_x_4011_;
v_isShared_4016_ = v_isSharedCheck_4021_;
goto v_resetjp_4014_;
}
else
{
lean_inc(v_a_4013_);
lean_dec(v_x_4011_);
v___x_4015_ = lean_box(0);
v_isShared_4016_ = v_isSharedCheck_4021_;
goto v_resetjp_4014_;
}
v_resetjp_4014_:
{
lean_object* v___x_4018_; 
if (v_isShared_4016_ == 0)
{
v___x_4018_ = v___x_4015_;
goto v_reusejp_4017_;
}
else
{
lean_object* v_reuseFailAlloc_4020_; 
v_reuseFailAlloc_4020_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4020_, 0, v_a_4013_);
v___x_4018_ = v_reuseFailAlloc_4020_;
goto v_reusejp_4017_;
}
v_reusejp_4017_:
{
lean_object* v___x_4019_; 
v___x_4019_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4019_, 0, v___x_4018_);
return v___x_4019_;
}
}
}
else
{
lean_object* v_a_4022_; lean_object* v_pendingConsumer_4023_; 
v_a_4022_ = lean_ctor_get(v_x_4011_, 0);
lean_inc(v_a_4022_);
lean_dec_ref_known(v_x_4011_, 1);
v_pendingConsumer_4023_ = lean_ctor_get(v_a_4022_, 1);
lean_inc(v_pendingConsumer_4023_);
if (lean_obj_tag(v_pendingConsumer_4023_) == 0)
{
uint8_t v_closed_4024_; 
v_closed_4024_ = lean_ctor_get_uint8(v_a_4022_, sizeof(void*)*6);
if (v_closed_4024_ == 0)
{
lean_object* v_interestWaiter_4025_; 
v_interestWaiter_4025_ = lean_ctor_get(v_a_4022_, 2);
if (lean_obj_tag(v_interestWaiter_4025_) == 0)
{
lean_object* v_pendingProducer_4026_; lean_object* v_knownSize_4027_; lean_object* v_pendingIncompleteChunk_4028_; lean_object* v_closeError_4029_; lean_object* v___x_4031_; uint8_t v_isShared_4032_; uint8_t v_isSharedCheck_4039_; 
v_pendingProducer_4026_ = lean_ctor_get(v_a_4022_, 0);
v_knownSize_4027_ = lean_ctor_get(v_a_4022_, 3);
v_pendingIncompleteChunk_4028_ = lean_ctor_get(v_a_4022_, 4);
v_closeError_4029_ = lean_ctor_get(v_a_4022_, 5);
v_isSharedCheck_4039_ = !lean_is_exclusive(v_a_4022_);
if (v_isSharedCheck_4039_ == 0)
{
lean_object* v_unused_4040_; lean_object* v_unused_4041_; 
v_unused_4040_ = lean_ctor_get(v_a_4022_, 2);
lean_dec(v_unused_4040_);
v_unused_4041_ = lean_ctor_get(v_a_4022_, 1);
lean_dec(v_unused_4041_);
v___x_4031_ = v_a_4022_;
v_isShared_4032_ = v_isSharedCheck_4039_;
goto v_resetjp_4030_;
}
else
{
lean_inc(v_closeError_4029_);
lean_inc(v_pendingIncompleteChunk_4028_);
lean_inc(v_knownSize_4027_);
lean_inc(v_pendingProducer_4026_);
lean_dec(v_a_4022_);
v___x_4031_ = lean_box(0);
v_isShared_4032_ = v_isSharedCheck_4039_;
goto v_resetjp_4030_;
}
v_resetjp_4030_:
{
lean_object* v___x_4033_; lean_object* v___x_4035_; 
v___x_4033_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4033_, 0, v_waiter_4009_);
if (v_isShared_4032_ == 0)
{
lean_ctor_set(v___x_4031_, 2, v___x_4033_);
v___x_4035_ = v___x_4031_;
goto v_reusejp_4034_;
}
else
{
lean_object* v_reuseFailAlloc_4038_; 
v_reuseFailAlloc_4038_ = lean_alloc_ctor(0, 6, 1);
lean_ctor_set(v_reuseFailAlloc_4038_, 0, v_pendingProducer_4026_);
lean_ctor_set(v_reuseFailAlloc_4038_, 1, v_pendingConsumer_4023_);
lean_ctor_set(v_reuseFailAlloc_4038_, 2, v___x_4033_);
lean_ctor_set(v_reuseFailAlloc_4038_, 3, v_knownSize_4027_);
lean_ctor_set(v_reuseFailAlloc_4038_, 4, v_pendingIncompleteChunk_4028_);
lean_ctor_set(v_reuseFailAlloc_4038_, 5, v_closeError_4029_);
lean_ctor_set_uint8(v_reuseFailAlloc_4038_, sizeof(void*)*6, v_closed_4024_);
v___x_4035_ = v_reuseFailAlloc_4038_;
goto v_reusejp_4034_;
}
v_reusejp_4034_:
{
lean_object* v___x_4036_; lean_object* v___x_4037_; 
v___x_4036_ = lean_st_ref_swap(v___y_4010_, v___x_4035_);
lean_dec(v___x_4036_);
v___x_4037_ = ((lean_object*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__0___closed__1));
return v___x_4037_;
}
}
}
else
{
lean_object* v___x_4042_; 
lean_dec(v_a_4022_);
lean_dec_ref(v_waiter_4009_);
v___x_4042_ = ((lean_object*)(l_Std_Http_Body_Stream_interestSelector___lam__3___closed__3));
return v___x_4042_;
}
}
else
{
lean_object* v___f_4043_; lean_object* v___x_4044_; 
lean_dec(v_a_4022_);
v___f_4043_ = ((lean_object*)(l_Std_Http_Body_Stream_recvSelector___lam__4___closed__0));
v___x_4044_ = l_Std_Async_Waiter_race___at___00Std_Http_Body_Stream_interestSelector_spec__0(v_waiter_4009_, v___f_4043_, v___y_4010_);
return v___x_4044_;
}
}
else
{
lean_object* v___f_4045_; lean_object* v___x_4046_; 
lean_dec_ref_known(v_pendingConsumer_4023_, 1);
lean_dec(v_a_4022_);
v___f_4045_ = ((lean_object*)(l_Std_Http_Body_Stream_recvSelector___lam__4___closed__0));
v___x_4046_ = l_Std_Async_Waiter_race___at___00Std_Http_Body_Stream_interestSelector_spec__1(v_waiter_4009_, v___f_4045_, v___y_4010_);
return v___x_4046_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_interestSelector___lam__3___boxed(lean_object* v_waiter_4047_, lean_object* v___y_4048_, lean_object* v_x_4049_, lean_object* v___y_4050_){
_start:
{
lean_object* v_res_4051_; 
v_res_4051_ = l_Std_Http_Body_Stream_interestSelector___lam__3(v_waiter_4047_, v___y_4048_, v_x_4049_);
lean_dec(v___y_4048_);
return v_res_4051_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_interestSelector___lam__1(lean_object* v___y_4052_, lean_object* v___f_4053_, lean_object* v_x_4054_){
_start:
{
if (lean_obj_tag(v_x_4054_) == 0)
{
lean_object* v___x_4056_; 
lean_dec_ref(v___f_4053_);
v___x_4056_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4056_, 0, v_x_4054_);
return v___x_4056_;
}
else
{
lean_object* v___x_4058_; uint8_t v_isShared_4059_; uint8_t v_isSharedCheck_4068_; 
v_isSharedCheck_4068_ = !lean_is_exclusive(v_x_4054_);
if (v_isSharedCheck_4068_ == 0)
{
lean_object* v_unused_4069_; 
v_unused_4069_ = lean_ctor_get(v_x_4054_, 0);
lean_dec(v_unused_4069_);
v___x_4058_ = v_x_4054_;
v_isShared_4059_ = v_isSharedCheck_4068_;
goto v_resetjp_4057_;
}
else
{
lean_dec(v_x_4054_);
v___x_4058_ = lean_box(0);
v_isShared_4059_ = v_isSharedCheck_4068_;
goto v_resetjp_4057_;
}
v_resetjp_4057_:
{
lean_object* v___x_4060_; uint8_t v___x_4061_; lean_object* v___x_4062_; lean_object* v___x_4064_; 
v___x_4060_ = lean_unsigned_to_nat(0u);
v___x_4061_ = 0;
v___x_4062_ = lean_st_ref_get(v___y_4052_);
if (v_isShared_4059_ == 0)
{
lean_ctor_set(v___x_4058_, 0, v___x_4062_);
v___x_4064_ = v___x_4058_;
goto v_reusejp_4063_;
}
else
{
lean_object* v_reuseFailAlloc_4067_; 
v_reuseFailAlloc_4067_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4067_, 0, v___x_4062_);
v___x_4064_ = v_reuseFailAlloc_4067_;
goto v_reusejp_4063_;
}
v_reusejp_4063_:
{
lean_object* v___x_4065_; lean_object* v___x_4066_; 
v___x_4065_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4065_, 0, v___x_4064_);
v___x_4066_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_4060_, v___x_4061_, v___x_4065_, v___f_4053_);
return v___x_4066_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_interestSelector___lam__1___boxed(lean_object* v___y_4070_, lean_object* v___f_4071_, lean_object* v_x_4072_, lean_object* v___y_4073_){
_start:
{
lean_object* v_res_4074_; 
v_res_4074_ = l_Std_Http_Body_Stream_interestSelector___lam__1(v___y_4070_, v___f_4071_, v_x_4072_);
lean_dec(v___y_4070_);
return v_res_4074_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_interestSelector___lam__2(lean_object* v_waiter_4075_, lean_object* v___y_4076_){
_start:
{
lean_object* v___f_4078_; lean_object* v___f_4079_; lean_object* v___x_4080_; uint8_t v___x_4081_; lean_object* v___x_4082_; lean_object* v___x_4083_; 
lean_inc_n(v___y_4076_, 2);
v___f_4078_ = lean_alloc_closure((void*)(l_Std_Http_Body_Stream_interestSelector___lam__3___boxed), 4, 2);
lean_closure_set(v___f_4078_, 0, v_waiter_4075_);
lean_closure_set(v___f_4078_, 1, v___y_4076_);
v___f_4079_ = lean_alloc_closure((void*)(l_Std_Http_Body_Stream_interestSelector___lam__1___boxed), 4, 2);
lean_closure_set(v___f_4079_, 0, v___y_4076_);
lean_closure_set(v___f_4079_, 1, v___f_4078_);
v___x_4080_ = lean_unsigned_to_nat(0u);
v___x_4081_ = 0;
v___x_4082_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1(v___y_4076_);
v___x_4083_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_4080_, v___x_4081_, v___x_4082_, v___f_4079_);
return v___x_4083_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_interestSelector___lam__2___boxed(lean_object* v_waiter_4084_, lean_object* v___y_4085_, lean_object* v___y_4086_){
_start:
{
lean_object* v_res_4087_; 
v_res_4087_ = l_Std_Http_Body_Stream_interestSelector___lam__2(v_waiter_4084_, v___y_4085_);
lean_dec(v___y_4085_);
return v_res_4087_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_interestSelector___lam__4(lean_object* v_stream_4088_, lean_object* v_waiter_4089_){
_start:
{
lean_object* v___f_4091_; lean_object* v___x_4092_; 
v___f_4091_ = lean_alloc_closure((void*)(l_Std_Http_Body_Stream_interestSelector___lam__2___boxed), 3, 1);
lean_closure_set(v___f_4091_, 0, v_waiter_4089_);
v___x_4092_ = l_Std_Mutex_atomically___at___00Std_Http_Body_Stream_tryRecv_spec__2___redArg(v_stream_4088_, v___f_4091_);
return v___x_4092_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_interestSelector___lam__4___boxed(lean_object* v_stream_4093_, lean_object* v_waiter_4094_, lean_object* v___y_4095_){
_start:
{
lean_object* v_res_4096_; 
v_res_4096_ = l_Std_Http_Body_Stream_interestSelector___lam__4(v_stream_4093_, v_waiter_4094_);
return v_res_4096_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_interestSelector___lam__5(lean_object* v___y_4097_, lean_object* v___f_4098_, lean_object* v_x_4099_){
_start:
{
if (lean_obj_tag(v_x_4099_) == 0)
{
lean_object* v_a_4101_; lean_object* v___x_4103_; uint8_t v_isShared_4104_; uint8_t v_isSharedCheck_4109_; 
lean_dec_ref(v___f_4098_);
v_a_4101_ = lean_ctor_get(v_x_4099_, 0);
v_isSharedCheck_4109_ = !lean_is_exclusive(v_x_4099_);
if (v_isSharedCheck_4109_ == 0)
{
v___x_4103_ = v_x_4099_;
v_isShared_4104_ = v_isSharedCheck_4109_;
goto v_resetjp_4102_;
}
else
{
lean_inc(v_a_4101_);
lean_dec(v_x_4099_);
v___x_4103_ = lean_box(0);
v_isShared_4104_ = v_isSharedCheck_4109_;
goto v_resetjp_4102_;
}
v_resetjp_4102_:
{
lean_object* v___x_4106_; 
if (v_isShared_4104_ == 0)
{
v___x_4106_ = v___x_4103_;
goto v_reusejp_4105_;
}
else
{
lean_object* v_reuseFailAlloc_4108_; 
v_reuseFailAlloc_4108_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4108_, 0, v_a_4101_);
v___x_4106_ = v_reuseFailAlloc_4108_;
goto v_reusejp_4105_;
}
v_reusejp_4105_:
{
lean_object* v___x_4107_; 
v___x_4107_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4107_, 0, v___x_4106_);
return v___x_4107_;
}
}
}
else
{
lean_object* v___x_4111_; uint8_t v_isShared_4112_; uint8_t v_isSharedCheck_4121_; 
v_isSharedCheck_4121_ = !lean_is_exclusive(v_x_4099_);
if (v_isSharedCheck_4121_ == 0)
{
lean_object* v_unused_4122_; 
v_unused_4122_ = lean_ctor_get(v_x_4099_, 0);
lean_dec(v_unused_4122_);
v___x_4111_ = v_x_4099_;
v_isShared_4112_ = v_isSharedCheck_4121_;
goto v_resetjp_4110_;
}
else
{
lean_dec(v_x_4099_);
v___x_4111_ = lean_box(0);
v_isShared_4112_ = v_isSharedCheck_4121_;
goto v_resetjp_4110_;
}
v_resetjp_4110_:
{
lean_object* v___x_4113_; uint8_t v___x_4114_; lean_object* v___x_4115_; lean_object* v___x_4117_; 
v___x_4113_ = lean_unsigned_to_nat(0u);
v___x_4114_ = 0;
v___x_4115_ = lean_st_ref_get(v___y_4097_);
if (v_isShared_4112_ == 0)
{
lean_ctor_set(v___x_4111_, 0, v___x_4115_);
v___x_4117_ = v___x_4111_;
goto v_reusejp_4116_;
}
else
{
lean_object* v_reuseFailAlloc_4120_; 
v_reuseFailAlloc_4120_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4120_, 0, v___x_4115_);
v___x_4117_ = v_reuseFailAlloc_4120_;
goto v_reusejp_4116_;
}
v_reusejp_4116_:
{
lean_object* v___x_4118_; lean_object* v___x_4119_; 
v___x_4118_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4118_, 0, v___x_4117_);
v___x_4119_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_4113_, v___x_4114_, v___x_4118_, v___f_4098_);
return v___x_4119_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_interestSelector___lam__5___boxed(lean_object* v___y_4123_, lean_object* v___f_4124_, lean_object* v_x_4125_, lean_object* v___y_4126_){
_start:
{
lean_object* v_res_4127_; 
v_res_4127_ = l_Std_Http_Body_Stream_interestSelector___lam__5(v___y_4123_, v___f_4124_, v_x_4125_);
lean_dec(v___y_4123_);
return v_res_4127_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_interestSelector___lam__6(lean_object* v___f_4128_, lean_object* v___y_4129_){
_start:
{
lean_object* v___f_4131_; lean_object* v___x_4132_; uint8_t v___x_4133_; lean_object* v___x_4134_; lean_object* v___x_4135_; 
lean_inc(v___y_4129_);
v___f_4131_ = lean_alloc_closure((void*)(l_Std_Http_Body_Stream_interestSelector___lam__5___boxed), 4, 2);
lean_closure_set(v___f_4131_, 0, v___y_4129_);
lean_closure_set(v___f_4131_, 1, v___f_4128_);
v___x_4132_ = lean_unsigned_to_nat(0u);
v___x_4133_ = 0;
v___x_4134_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1(v___y_4129_);
v___x_4135_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_4132_, v___x_4133_, v___x_4134_, v___f_4131_);
return v___x_4135_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_interestSelector___lam__6___boxed(lean_object* v___f_4136_, lean_object* v___y_4137_, lean_object* v___y_4138_){
_start:
{
lean_object* v_res_4139_; 
v_res_4139_ = l_Std_Http_Body_Stream_interestSelector___lam__6(v___f_4136_, v___y_4137_);
lean_dec(v___y_4137_);
return v_res_4139_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_interestSelector(lean_object* v_stream_4143_){
_start:
{
lean_object* v___f_4144_; lean_object* v___f_4145_; lean_object* v___f_4146_; lean_object* v___x_4147_; lean_object* v___x_4148_; lean_object* v___x_4149_; 
v___f_4144_ = ((lean_object*)(l_Std_Http_Body_Stream_recvSelector___closed__0));
lean_inc_ref_n(v_stream_4143_, 2);
v___f_4145_ = lean_alloc_closure((void*)(l_Std_Http_Body_Stream_interestSelector___lam__4___boxed), 3, 1);
lean_closure_set(v___f_4145_, 0, v_stream_4143_);
v___f_4146_ = ((lean_object*)(l_Std_Http_Body_Stream_interestSelector___closed__1));
v___x_4147_ = lean_alloc_closure((void*)(l_Std_Mutex_atomically___at___00Std_Http_Body_Stream_tryRecv_spec__2___boxed), 5, 4);
lean_closure_set(v___x_4147_, 0, lean_box(0));
lean_closure_set(v___x_4147_, 1, lean_box(0));
lean_closure_set(v___x_4147_, 2, v_stream_4143_);
lean_closure_set(v___x_4147_, 3, v___f_4146_);
v___x_4148_ = lean_alloc_closure((void*)(l_Std_Mutex_atomically___at___00Std_Http_Body_Stream_tryRecv_spec__2___boxed), 5, 4);
lean_closure_set(v___x_4148_, 0, lean_box(0));
lean_closure_set(v___x_4148_, 1, lean_box(0));
lean_closure_set(v___x_4148_, 2, v_stream_4143_);
lean_closure_set(v___x_4148_, 3, v___f_4144_);
v___x_4149_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_4149_, 0, v___x_4147_);
lean_ctor_set(v___x_4149_, 1, v___f_4145_);
lean_ctor_set(v___x_4149_, 2, v___x_4148_);
return v___x_4149_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_stream___lam__0(lean_object* v_x_4150_, lean_object* v_x_4151_){
_start:
{
if (lean_obj_tag(v_x_4151_) == 0)
{
lean_object* v_a_4153_; lean_object* v___x_4155_; uint8_t v_isShared_4156_; uint8_t v_isSharedCheck_4161_; 
lean_dec_ref(v_x_4150_);
v_a_4153_ = lean_ctor_get(v_x_4151_, 0);
v_isSharedCheck_4161_ = !lean_is_exclusive(v_x_4151_);
if (v_isSharedCheck_4161_ == 0)
{
v___x_4155_ = v_x_4151_;
v_isShared_4156_ = v_isSharedCheck_4161_;
goto v_resetjp_4154_;
}
else
{
lean_inc(v_a_4153_);
lean_dec(v_x_4151_);
v___x_4155_ = lean_box(0);
v_isShared_4156_ = v_isSharedCheck_4161_;
goto v_resetjp_4154_;
}
v_resetjp_4154_:
{
lean_object* v___x_4158_; 
if (v_isShared_4156_ == 0)
{
v___x_4158_ = v___x_4155_;
goto v_reusejp_4157_;
}
else
{
lean_object* v_reuseFailAlloc_4160_; 
v_reuseFailAlloc_4160_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4160_, 0, v_a_4153_);
v___x_4158_ = v_reuseFailAlloc_4160_;
goto v_reusejp_4157_;
}
v_reusejp_4157_:
{
lean_object* v___x_4159_; 
v___x_4159_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4159_, 0, v___x_4158_);
return v___x_4159_;
}
}
}
else
{
lean_object* v___x_4162_; 
lean_dec_ref_known(v_x_4151_, 1);
v___x_4162_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4162_, 0, v_x_4150_);
return v___x_4162_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_stream___lam__0___boxed(lean_object* v_x_4163_, lean_object* v_x_4164_, lean_object* v___y_4165_){
_start:
{
lean_object* v_res_4166_; 
v_res_4166_ = l_Std_Http_Body_stream___lam__0(v_x_4163_, v_x_4164_);
return v_res_4166_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_stream___lam__1(lean_object* v_a_4167_, lean_object* v_x_4168_){
_start:
{
if (lean_obj_tag(v_x_4168_) == 0)
{
lean_object* v_a_4170_; lean_object* v___x_4171_; 
v_a_4170_ = lean_ctor_get(v_x_4168_, 0);
lean_inc(v_a_4170_);
lean_dec_ref_known(v_x_4168_, 1);
v___x_4171_ = l_Std_Http_Body_Stream_closeWithError(v_a_4167_, v_a_4170_);
return v___x_4171_;
}
else
{
lean_object* v___x_4172_; 
lean_dec_ref(v_a_4167_);
v___x_4172_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4172_, 0, v_x_4168_);
return v___x_4172_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_stream___lam__1___boxed(lean_object* v_a_4173_, lean_object* v_x_4174_, lean_object* v___y_4175_){
_start:
{
lean_object* v_res_4176_; 
v_res_4176_ = l_Std_Http_Body_stream___lam__1(v_a_4173_, v_x_4174_);
return v_res_4176_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_stream___lam__2(lean_object* v_a_4177_, lean_object* v_x_4178_){
_start:
{
if (lean_obj_tag(v_x_4178_) == 0)
{
lean_object* v___x_4180_; 
lean_dec_ref(v_a_4177_);
v___x_4180_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4180_, 0, v_x_4178_);
return v___x_4180_;
}
else
{
lean_object* v___x_4181_; 
lean_dec_ref_known(v_x_4178_, 1);
v___x_4181_ = l_Std_Http_Body_Stream_close(v_a_4177_);
return v___x_4181_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_stream___lam__2___boxed(lean_object* v_a_4182_, lean_object* v_x_4183_, lean_object* v___y_4184_){
_start:
{
lean_object* v_res_4185_; 
v_res_4185_ = l_Std_Http_Body_stream___lam__2(v_a_4182_, v_x_4183_);
return v_res_4185_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_stream___lam__3(lean_object* v_gen_4186_, lean_object* v_a_4187_, lean_object* v___x_4188_, uint8_t v___x_4189_, lean_object* v___f_4190_, lean_object* v___f_4191_){
_start:
{
lean_object* v___x_4193_; lean_object* v___x_4194_; lean_object* v___x_4195_; 
v___x_4193_ = lean_apply_2(v_gen_4186_, v_a_4187_, lean_box(0));
lean_inc(v___x_4188_);
v___x_4194_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_4188_, v___x_4189_, v___x_4193_, v___f_4190_);
v___x_4195_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_4188_, v___x_4189_, v___x_4194_, v___f_4191_);
return v___x_4195_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_stream___lam__3___boxed(lean_object* v_gen_4196_, lean_object* v_a_4197_, lean_object* v___x_4198_, lean_object* v___x_4199_, lean_object* v___f_4200_, lean_object* v___f_4201_, lean_object* v___y_4202_){
_start:
{
uint8_t v___x_1076__boxed_4203_; lean_object* v_res_4204_; 
v___x_1076__boxed_4203_ = lean_unbox(v___x_4199_);
v_res_4204_ = l_Std_Http_Body_stream___lam__3(v_gen_4196_, v_a_4197_, v___x_4198_, v___x_1076__boxed_4203_, v___f_4200_, v___f_4201_);
return v_res_4204_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_stream___lam__4(lean_object* v_gen_4205_, lean_object* v_a_4206_, lean_object* v___f_4207_, lean_object* v___f_4208_, lean_object* v___f_4209_, lean_object* v_x_4210_){
_start:
{
if (lean_obj_tag(v_x_4210_) == 0)
{
lean_object* v_a_4212_; lean_object* v___x_4214_; uint8_t v_isShared_4215_; uint8_t v_isSharedCheck_4220_; 
lean_dec_ref(v___f_4209_);
lean_dec_ref(v___f_4208_);
lean_dec_ref(v___f_4207_);
lean_dec_ref(v_a_4206_);
lean_dec_ref(v_gen_4205_);
v_a_4212_ = lean_ctor_get(v_x_4210_, 0);
v_isSharedCheck_4220_ = !lean_is_exclusive(v_x_4210_);
if (v_isSharedCheck_4220_ == 0)
{
v___x_4214_ = v_x_4210_;
v_isShared_4215_ = v_isSharedCheck_4220_;
goto v_resetjp_4213_;
}
else
{
lean_inc(v_a_4212_);
lean_dec(v_x_4210_);
v___x_4214_ = lean_box(0);
v_isShared_4215_ = v_isSharedCheck_4220_;
goto v_resetjp_4213_;
}
v_resetjp_4213_:
{
lean_object* v___x_4217_; 
if (v_isShared_4215_ == 0)
{
v___x_4217_ = v___x_4214_;
goto v_reusejp_4216_;
}
else
{
lean_object* v_reuseFailAlloc_4219_; 
v_reuseFailAlloc_4219_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4219_, 0, v_a_4212_);
v___x_4217_ = v_reuseFailAlloc_4219_;
goto v_reusejp_4216_;
}
v_reusejp_4216_:
{
lean_object* v___x_4218_; 
v___x_4218_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4218_, 0, v___x_4217_);
return v___x_4218_;
}
}
}
else
{
lean_object* v___x_4221_; uint8_t v___x_4222_; lean_object* v___x_4223_; lean_object* v___f_4224_; lean_object* v___x_4225_; lean_object* v___x_4226_; lean_object* v___x_4227_; 
lean_dec_ref_known(v_x_4210_, 1);
v___x_4221_ = lean_unsigned_to_nat(0u);
v___x_4222_ = 0;
v___x_4223_ = lean_box(v___x_4222_);
v___f_4224_ = lean_alloc_closure((void*)(l_Std_Http_Body_stream___lam__3___boxed), 7, 6);
lean_closure_set(v___f_4224_, 0, v_gen_4205_);
lean_closure_set(v___f_4224_, 1, v_a_4206_);
lean_closure_set(v___f_4224_, 2, v___x_4221_);
lean_closure_set(v___f_4224_, 3, v___x_4223_);
lean_closure_set(v___f_4224_, 4, v___f_4207_);
lean_closure_set(v___f_4224_, 5, v___f_4208_);
v___x_4225_ = lean_io_as_task(v___f_4224_, v___x_4221_);
lean_dec_ref(v___x_4225_);
v___x_4226_ = ((lean_object*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__0___closed__1));
v___x_4227_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_4221_, v___x_4222_, v___x_4226_, v___f_4209_);
return v___x_4227_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_stream___lam__4___boxed(lean_object* v_gen_4228_, lean_object* v_a_4229_, lean_object* v___f_4230_, lean_object* v___f_4231_, lean_object* v___f_4232_, lean_object* v_x_4233_, lean_object* v___y_4234_){
_start:
{
lean_object* v_res_4235_; 
v_res_4235_ = l_Std_Http_Body_stream___lam__4(v_gen_4228_, v_a_4229_, v___f_4230_, v___f_4231_, v___f_4232_, v_x_4233_);
return v_res_4235_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_stream___lam__5(lean_object* v___x_4236_, lean_object* v___y_4237_){
_start:
{
lean_object* v___x_4239_; lean_object* v_pendingProducer_4240_; lean_object* v_pendingConsumer_4241_; lean_object* v_interestWaiter_4242_; uint8_t v_closed_4243_; lean_object* v_pendingIncompleteChunk_4244_; lean_object* v_closeError_4245_; lean_object* v___x_4247_; uint8_t v_isShared_4248_; uint8_t v_isSharedCheck_4254_; 
v___x_4239_ = lean_st_ref_take(v___y_4237_);
v_pendingProducer_4240_ = lean_ctor_get(v___x_4239_, 0);
v_pendingConsumer_4241_ = lean_ctor_get(v___x_4239_, 1);
v_interestWaiter_4242_ = lean_ctor_get(v___x_4239_, 2);
v_closed_4243_ = lean_ctor_get_uint8(v___x_4239_, sizeof(void*)*6);
v_pendingIncompleteChunk_4244_ = lean_ctor_get(v___x_4239_, 4);
v_closeError_4245_ = lean_ctor_get(v___x_4239_, 5);
v_isSharedCheck_4254_ = !lean_is_exclusive(v___x_4239_);
if (v_isSharedCheck_4254_ == 0)
{
lean_object* v_unused_4255_; 
v_unused_4255_ = lean_ctor_get(v___x_4239_, 3);
lean_dec(v_unused_4255_);
v___x_4247_ = v___x_4239_;
v_isShared_4248_ = v_isSharedCheck_4254_;
goto v_resetjp_4246_;
}
else
{
lean_inc(v_closeError_4245_);
lean_inc(v_pendingIncompleteChunk_4244_);
lean_inc(v_interestWaiter_4242_);
lean_inc(v_pendingConsumer_4241_);
lean_inc(v_pendingProducer_4240_);
lean_dec(v___x_4239_);
v___x_4247_ = lean_box(0);
v_isShared_4248_ = v_isSharedCheck_4254_;
goto v_resetjp_4246_;
}
v_resetjp_4246_:
{
lean_object* v___x_4250_; 
if (v_isShared_4248_ == 0)
{
lean_ctor_set(v___x_4247_, 3, v___x_4236_);
v___x_4250_ = v___x_4247_;
goto v_reusejp_4249_;
}
else
{
lean_object* v_reuseFailAlloc_4253_; 
v_reuseFailAlloc_4253_ = lean_alloc_ctor(0, 6, 1);
lean_ctor_set(v_reuseFailAlloc_4253_, 0, v_pendingProducer_4240_);
lean_ctor_set(v_reuseFailAlloc_4253_, 1, v_pendingConsumer_4241_);
lean_ctor_set(v_reuseFailAlloc_4253_, 2, v_interestWaiter_4242_);
lean_ctor_set(v_reuseFailAlloc_4253_, 3, v___x_4236_);
lean_ctor_set(v_reuseFailAlloc_4253_, 4, v_pendingIncompleteChunk_4244_);
lean_ctor_set(v_reuseFailAlloc_4253_, 5, v_closeError_4245_);
lean_ctor_set_uint8(v_reuseFailAlloc_4253_, sizeof(void*)*6, v_closed_4243_);
v___x_4250_ = v_reuseFailAlloc_4253_;
goto v_reusejp_4249_;
}
v_reusejp_4249_:
{
lean_object* v___x_4251_; lean_object* v___x_4252_; 
v___x_4251_ = lean_st_ref_put(v___y_4237_, v___x_4250_);
v___x_4252_ = ((lean_object*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__0___closed__1));
return v___x_4252_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_stream___lam__5___boxed(lean_object* v___x_4256_, lean_object* v___y_4257_, lean_object* v___y_4258_){
_start:
{
lean_object* v_res_4259_; 
v_res_4259_ = l_Std_Http_Body_stream___lam__5(v___x_4256_, v___y_4257_);
lean_dec(v___y_4257_);
return v_res_4259_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_stream___lam__6(lean_object* v_gen_4264_, lean_object* v_x_4265_){
_start:
{
if (lean_obj_tag(v_x_4265_) == 0)
{
lean_object* v___x_4267_; 
lean_dec_ref(v_gen_4264_);
v___x_4267_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4267_, 0, v_x_4265_);
return v___x_4267_;
}
else
{
lean_object* v_a_4268_; lean_object* v___f_4269_; lean_object* v___f_4270_; lean_object* v___f_4271_; lean_object* v___f_4272_; lean_object* v___f_4273_; lean_object* v___x_4274_; uint8_t v___x_4275_; lean_object* v___x_4276_; lean_object* v___x_4277_; 
v_a_4268_ = lean_ctor_get(v_x_4265_, 0);
lean_inc_n(v_a_4268_, 4);
v___f_4269_ = lean_alloc_closure((void*)(l_Std_Http_Body_stream___lam__0___boxed), 3, 1);
lean_closure_set(v___f_4269_, 0, v_x_4265_);
v___f_4270_ = lean_alloc_closure((void*)(l_Std_Http_Body_stream___lam__1___boxed), 3, 1);
lean_closure_set(v___f_4270_, 0, v_a_4268_);
v___f_4271_ = lean_alloc_closure((void*)(l_Std_Http_Body_stream___lam__2___boxed), 3, 1);
lean_closure_set(v___f_4271_, 0, v_a_4268_);
v___f_4272_ = lean_alloc_closure((void*)(l_Std_Http_Body_stream___lam__4___boxed), 7, 5);
lean_closure_set(v___f_4272_, 0, v_gen_4264_);
lean_closure_set(v___f_4272_, 1, v_a_4268_);
lean_closure_set(v___f_4272_, 2, v___f_4271_);
lean_closure_set(v___f_4272_, 3, v___f_4270_);
lean_closure_set(v___f_4272_, 4, v___f_4269_);
v___f_4273_ = ((lean_object*)(l_Std_Http_Body_stream___lam__6___closed__1));
v___x_4274_ = lean_unsigned_to_nat(0u);
v___x_4275_ = 0;
v___x_4276_ = l_Std_Mutex_atomically___at___00Std_Http_Body_Stream_tryRecv_spec__2___redArg(v_a_4268_, v___f_4273_);
v___x_4277_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_4274_, v___x_4275_, v___x_4276_, v___f_4272_);
return v___x_4277_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_stream___lam__6___boxed(lean_object* v_gen_4278_, lean_object* v_x_4279_, lean_object* v___y_4280_){
_start:
{
lean_object* v_res_4281_; 
v_res_4281_ = l_Std_Http_Body_stream___lam__6(v_gen_4278_, v_x_4279_);
return v_res_4281_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_stream(lean_object* v_gen_4282_){
_start:
{
lean_object* v___f_4284_; lean_object* v___x_4285_; uint8_t v___x_4286_; lean_object* v___x_4287_; lean_object* v___x_4288_; 
v___f_4284_ = lean_alloc_closure((void*)(l_Std_Http_Body_stream___lam__6___boxed), 3, 1);
lean_closure_set(v___f_4284_, 0, v_gen_4282_);
v___x_4285_ = lean_unsigned_to_nat(0u);
v___x_4286_ = 0;
v___x_4287_ = l_Std_Http_Body_mkStream();
v___x_4288_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_4285_, v___x_4286_, v___x_4287_, v___f_4284_);
return v___x_4288_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_stream___boxed(lean_object* v_gen_4289_, lean_object* v___y_4290_){
_start:
{
lean_object* v_res_4291_; 
v_res_4291_ = l_Std_Http_Body_stream(v_gen_4289_);
return v_res_4291_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_fromBytes___lam__0(lean_object* v___x_4292_, lean_object* v_content_4293_, lean_object* v_s_4294_, lean_object* v_x_4295_){
_start:
{
if (lean_obj_tag(v_x_4295_) == 0)
{
lean_object* v___x_4297_; 
lean_dec_ref(v_s_4294_);
lean_dec_ref(v_content_4293_);
v___x_4297_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4297_, 0, v_x_4295_);
return v___x_4297_;
}
else
{
lean_object* v___x_4298_; uint8_t v___x_4299_; 
lean_dec_ref_known(v_x_4295_, 1);
v___x_4298_ = lean_unsigned_to_nat(0u);
v___x_4299_ = lean_nat_dec_lt(v___x_4298_, v___x_4292_);
if (v___x_4299_ == 0)
{
lean_object* v___x_4300_; 
lean_dec_ref(v_s_4294_);
lean_dec_ref(v_content_4293_);
v___x_4300_ = ((lean_object*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__0___closed__1));
return v___x_4300_;
}
else
{
lean_object* v___x_4301_; uint8_t v___x_4302_; lean_object* v___x_4303_; 
v___x_4301_ = l_Std_Http_Chunk_ofByteArray(v_content_4293_);
v___x_4302_ = 0;
v___x_4303_ = l_Std_Http_Body_Stream_send(v_s_4294_, v___x_4301_, v___x_4302_);
return v___x_4303_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_fromBytes___lam__0___boxed(lean_object* v___x_4304_, lean_object* v_content_4305_, lean_object* v_s_4306_, lean_object* v_x_4307_, lean_object* v___y_4308_){
_start:
{
lean_object* v_res_4309_; 
v_res_4309_ = l_Std_Http_Body_fromBytes___lam__0(v___x_4304_, v_content_4305_, v_s_4306_, v_x_4307_);
lean_dec(v___x_4304_);
return v_res_4309_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_fromBytes___lam__2(lean_object* v_content_4310_, lean_object* v_s_4311_){
_start:
{
lean_object* v___x_4313_; lean_object* v___f_4314_; lean_object* v___x_4315_; lean_object* v___x_4316_; lean_object* v___f_4317_; lean_object* v___x_4318_; uint8_t v___x_4319_; lean_object* v___x_4320_; lean_object* v___x_4321_; 
v___x_4313_ = lean_byte_array_size(v_content_4310_);
lean_inc_ref(v_s_4311_);
v___f_4314_ = lean_alloc_closure((void*)(l_Std_Http_Body_fromBytes___lam__0___boxed), 5, 3);
lean_closure_set(v___f_4314_, 0, v___x_4313_);
lean_closure_set(v___f_4314_, 1, v_content_4310_);
lean_closure_set(v___f_4314_, 2, v_s_4311_);
v___x_4315_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4315_, 0, v___x_4313_);
v___x_4316_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4316_, 0, v___x_4315_);
v___f_4317_ = lean_alloc_closure((void*)(l_Std_Http_Body_stream___lam__5___boxed), 3, 1);
lean_closure_set(v___f_4317_, 0, v___x_4316_);
v___x_4318_ = lean_unsigned_to_nat(0u);
v___x_4319_ = 0;
v___x_4320_ = l_Std_Mutex_atomically___at___00Std_Http_Body_Stream_tryRecv_spec__2___redArg(v_s_4311_, v___f_4317_);
v___x_4321_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_4318_, v___x_4319_, v___x_4320_, v___f_4314_);
return v___x_4321_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_fromBytes___lam__2___boxed(lean_object* v_content_4322_, lean_object* v_s_4323_, lean_object* v___y_4324_){
_start:
{
lean_object* v_res_4325_; 
v_res_4325_ = l_Std_Http_Body_fromBytes___lam__2(v_content_4322_, v_s_4323_);
return v_res_4325_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_fromBytes(lean_object* v_content_4326_){
_start:
{
lean_object* v___f_4328_; lean_object* v___x_4329_; 
v___f_4328_ = lean_alloc_closure((void*)(l_Std_Http_Body_fromBytes___lam__2___boxed), 3, 1);
lean_closure_set(v___f_4328_, 0, v_content_4326_);
v___x_4329_ = l_Std_Http_Body_stream(v___f_4328_);
return v___x_4329_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_fromBytes___boxed(lean_object* v_content_4330_, lean_object* v___y_4331_){
_start:
{
lean_object* v_res_4332_; 
v_res_4332_ = l_Std_Http_Body_fromBytes(v_content_4330_);
return v_res_4332_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_empty___lam__1(lean_object* v_a_4333_, lean_object* v___f_4334_, lean_object* v_x_4335_){
_start:
{
if (lean_obj_tag(v_x_4335_) == 0)
{
lean_object* v_a_4337_; lean_object* v___x_4339_; uint8_t v_isShared_4340_; uint8_t v_isSharedCheck_4345_; 
lean_dec_ref(v___f_4334_);
lean_dec_ref(v_a_4333_);
v_a_4337_ = lean_ctor_get(v_x_4335_, 0);
v_isSharedCheck_4345_ = !lean_is_exclusive(v_x_4335_);
if (v_isSharedCheck_4345_ == 0)
{
v___x_4339_ = v_x_4335_;
v_isShared_4340_ = v_isSharedCheck_4345_;
goto v_resetjp_4338_;
}
else
{
lean_inc(v_a_4337_);
lean_dec(v_x_4335_);
v___x_4339_ = lean_box(0);
v_isShared_4340_ = v_isSharedCheck_4345_;
goto v_resetjp_4338_;
}
v_resetjp_4338_:
{
lean_object* v___x_4342_; 
if (v_isShared_4340_ == 0)
{
v___x_4342_ = v___x_4339_;
goto v_reusejp_4341_;
}
else
{
lean_object* v_reuseFailAlloc_4344_; 
v_reuseFailAlloc_4344_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4344_, 0, v_a_4337_);
v___x_4342_ = v_reuseFailAlloc_4344_;
goto v_reusejp_4341_;
}
v_reusejp_4341_:
{
lean_object* v___x_4343_; 
v___x_4343_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4343_, 0, v___x_4342_);
return v___x_4343_;
}
}
}
else
{
lean_object* v___x_4346_; uint8_t v___x_4347_; lean_object* v___x_4348_; lean_object* v___x_4349_; 
lean_dec_ref_known(v_x_4335_, 1);
v___x_4346_ = lean_unsigned_to_nat(0u);
v___x_4347_ = 0;
v___x_4348_ = l_Std_Http_Body_Stream_close(v_a_4333_);
v___x_4349_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_4346_, v___x_4347_, v___x_4348_, v___f_4334_);
return v___x_4349_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_empty___lam__1___boxed(lean_object* v_a_4350_, lean_object* v___f_4351_, lean_object* v_x_4352_, lean_object* v___y_4353_){
_start:
{
lean_object* v_res_4354_; 
v_res_4354_ = l_Std_Http_Body_empty___lam__1(v_a_4350_, v___f_4351_, v_x_4352_);
return v_res_4354_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_empty___lam__2(lean_object* v_x_4361_){
_start:
{
if (lean_obj_tag(v_x_4361_) == 0)
{
lean_object* v___x_4363_; 
v___x_4363_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4363_, 0, v_x_4361_);
return v___x_4363_;
}
else
{
lean_object* v_a_4364_; lean_object* v___f_4365_; lean_object* v___f_4366_; lean_object* v___x_4367_; lean_object* v___f_4368_; uint8_t v___x_4369_; lean_object* v___x_4370_; lean_object* v___x_4371_; 
v_a_4364_ = lean_ctor_get(v_x_4361_, 0);
lean_inc_n(v_a_4364_, 2);
v___f_4365_ = lean_alloc_closure((void*)(l_Std_Http_Body_stream___lam__0___boxed), 3, 1);
lean_closure_set(v___f_4365_, 0, v_x_4361_);
v___f_4366_ = lean_alloc_closure((void*)(l_Std_Http_Body_empty___lam__1___boxed), 4, 2);
lean_closure_set(v___f_4366_, 0, v_a_4364_);
lean_closure_set(v___f_4366_, 1, v___f_4365_);
v___x_4367_ = lean_unsigned_to_nat(0u);
v___f_4368_ = ((lean_object*)(l_Std_Http_Body_empty___lam__2___closed__2));
v___x_4369_ = 0;
v___x_4370_ = l_Std_Mutex_atomically___at___00Std_Http_Body_Stream_tryRecv_spec__2___redArg(v_a_4364_, v___f_4368_);
v___x_4371_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_4367_, v___x_4369_, v___x_4370_, v___f_4366_);
return v___x_4371_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_empty___lam__2___boxed(lean_object* v_x_4372_, lean_object* v___y_4373_){
_start:
{
lean_object* v_res_4374_; 
v_res_4374_ = l_Std_Http_Body_empty___lam__2(v_x_4372_);
return v_res_4374_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_empty(){
_start:
{
lean_object* v___f_4377_; lean_object* v___x_4378_; uint8_t v___x_4379_; lean_object* v___x_4380_; lean_object* v___x_4381_; 
v___f_4377_ = ((lean_object*)(l_Std_Http_Body_empty___closed__0));
v___x_4378_ = lean_unsigned_to_nat(0u);
v___x_4379_ = 0;
v___x_4380_ = l_Std_Http_Body_mkStream();
v___x_4381_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_4378_, v___x_4379_, v___x_4380_, v___f_4377_);
return v___x_4381_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_empty___boxed(lean_object* v___y_4382_){
_start:
{
lean_object* v_res_4383_; 
v_res_4383_ = l_Std_Http_Body_empty();
return v_res_4383_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_instCoeResponseStreamAny___lam__0(lean_object* v___x_4406_, lean_object* v_f_4407_){
_start:
{
lean_object* v_line_4408_; lean_object* v_body_4409_; lean_object* v_extensions_4410_; lean_object* v___x_4412_; uint8_t v_isShared_4413_; uint8_t v_isSharedCheck_4418_; 
v_line_4408_ = lean_ctor_get(v_f_4407_, 0);
v_body_4409_ = lean_ctor_get(v_f_4407_, 1);
v_extensions_4410_ = lean_ctor_get(v_f_4407_, 2);
v_isSharedCheck_4418_ = !lean_is_exclusive(v_f_4407_);
if (v_isSharedCheck_4418_ == 0)
{
v___x_4412_ = v_f_4407_;
v_isShared_4413_ = v_isSharedCheck_4418_;
goto v_resetjp_4411_;
}
else
{
lean_inc(v_extensions_4410_);
lean_inc(v_body_4409_);
lean_inc(v_line_4408_);
lean_dec(v_f_4407_);
v___x_4412_ = lean_box(0);
v_isShared_4413_ = v_isSharedCheck_4418_;
goto v_resetjp_4411_;
}
v_resetjp_4411_:
{
lean_object* v___x_4414_; lean_object* v___x_4416_; 
v___x_4414_ = l_Std_Http_Body_Any_ofBody___redArg(v___x_4406_, v_body_4409_);
if (v_isShared_4413_ == 0)
{
lean_ctor_set(v___x_4412_, 1, v___x_4414_);
v___x_4416_ = v___x_4412_;
goto v_reusejp_4415_;
}
else
{
lean_object* v_reuseFailAlloc_4417_; 
v_reuseFailAlloc_4417_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_4417_, 0, v_line_4408_);
lean_ctor_set(v_reuseFailAlloc_4417_, 1, v___x_4414_);
lean_ctor_set(v_reuseFailAlloc_4417_, 2, v_extensions_4410_);
v___x_4416_ = v_reuseFailAlloc_4417_;
goto v_reusejp_4415_;
}
v_reusejp_4415_:
{
return v___x_4416_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_instCoeContextAsyncResponseStreamAny___lam__0(lean_object* v___x_4422_, lean_object* v_x_4423_){
_start:
{
if (lean_obj_tag(v_x_4423_) == 0)
{
lean_object* v_a_4425_; lean_object* v___x_4427_; uint8_t v_isShared_4428_; uint8_t v_isSharedCheck_4433_; 
lean_dec_ref(v___x_4422_);
v_a_4425_ = lean_ctor_get(v_x_4423_, 0);
v_isSharedCheck_4433_ = !lean_is_exclusive(v_x_4423_);
if (v_isSharedCheck_4433_ == 0)
{
v___x_4427_ = v_x_4423_;
v_isShared_4428_ = v_isSharedCheck_4433_;
goto v_resetjp_4426_;
}
else
{
lean_inc(v_a_4425_);
lean_dec(v_x_4423_);
v___x_4427_ = lean_box(0);
v_isShared_4428_ = v_isSharedCheck_4433_;
goto v_resetjp_4426_;
}
v_resetjp_4426_:
{
lean_object* v___x_4430_; 
if (v_isShared_4428_ == 0)
{
v___x_4430_ = v___x_4427_;
goto v_reusejp_4429_;
}
else
{
lean_object* v_reuseFailAlloc_4432_; 
v_reuseFailAlloc_4432_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4432_, 0, v_a_4425_);
v___x_4430_ = v_reuseFailAlloc_4432_;
goto v_reusejp_4429_;
}
v_reusejp_4429_:
{
lean_object* v___x_4431_; 
v___x_4431_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4431_, 0, v___x_4430_);
return v___x_4431_;
}
}
}
else
{
lean_object* v_a_4434_; lean_object* v___x_4436_; uint8_t v_isShared_4437_; uint8_t v_isSharedCheck_4453_; 
v_a_4434_ = lean_ctor_get(v_x_4423_, 0);
v_isSharedCheck_4453_ = !lean_is_exclusive(v_x_4423_);
if (v_isSharedCheck_4453_ == 0)
{
v___x_4436_ = v_x_4423_;
v_isShared_4437_ = v_isSharedCheck_4453_;
goto v_resetjp_4435_;
}
else
{
lean_inc(v_a_4434_);
lean_dec(v_x_4423_);
v___x_4436_ = lean_box(0);
v_isShared_4437_ = v_isSharedCheck_4453_;
goto v_resetjp_4435_;
}
v_resetjp_4435_:
{
lean_object* v_line_4438_; lean_object* v_body_4439_; lean_object* v_extensions_4440_; lean_object* v___x_4442_; uint8_t v_isShared_4443_; uint8_t v_isSharedCheck_4452_; 
v_line_4438_ = lean_ctor_get(v_a_4434_, 0);
v_body_4439_ = lean_ctor_get(v_a_4434_, 1);
v_extensions_4440_ = lean_ctor_get(v_a_4434_, 2);
v_isSharedCheck_4452_ = !lean_is_exclusive(v_a_4434_);
if (v_isSharedCheck_4452_ == 0)
{
v___x_4442_ = v_a_4434_;
v_isShared_4443_ = v_isSharedCheck_4452_;
goto v_resetjp_4441_;
}
else
{
lean_inc(v_extensions_4440_);
lean_inc(v_body_4439_);
lean_inc(v_line_4438_);
lean_dec(v_a_4434_);
v___x_4442_ = lean_box(0);
v_isShared_4443_ = v_isSharedCheck_4452_;
goto v_resetjp_4441_;
}
v_resetjp_4441_:
{
lean_object* v___x_4444_; lean_object* v___x_4446_; 
v___x_4444_ = l_Std_Http_Body_Any_ofBody___redArg(v___x_4422_, v_body_4439_);
if (v_isShared_4443_ == 0)
{
lean_ctor_set(v___x_4442_, 1, v___x_4444_);
v___x_4446_ = v___x_4442_;
goto v_reusejp_4445_;
}
else
{
lean_object* v_reuseFailAlloc_4451_; 
v_reuseFailAlloc_4451_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_4451_, 0, v_line_4438_);
lean_ctor_set(v_reuseFailAlloc_4451_, 1, v___x_4444_);
lean_ctor_set(v_reuseFailAlloc_4451_, 2, v_extensions_4440_);
v___x_4446_ = v_reuseFailAlloc_4451_;
goto v_reusejp_4445_;
}
v_reusejp_4445_:
{
lean_object* v___x_4448_; 
if (v_isShared_4437_ == 0)
{
lean_ctor_set(v___x_4436_, 0, v___x_4446_);
v___x_4448_ = v___x_4436_;
goto v_reusejp_4447_;
}
else
{
lean_object* v_reuseFailAlloc_4450_; 
v_reuseFailAlloc_4450_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4450_, 0, v___x_4446_);
v___x_4448_ = v_reuseFailAlloc_4450_;
goto v_reusejp_4447_;
}
v_reusejp_4447_:
{
lean_object* v___x_4449_; 
v___x_4449_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4449_, 0, v___x_4448_);
return v___x_4449_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_instCoeContextAsyncResponseStreamAny___lam__0___boxed(lean_object* v___x_4454_, lean_object* v_x_4455_, lean_object* v___y_4456_){
_start:
{
lean_object* v_res_4457_; 
v_res_4457_ = l_Std_Http_Body_instCoeContextAsyncResponseStreamAny___lam__0(v___x_4454_, v_x_4455_);
return v_res_4457_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_instCoeContextAsyncResponseStreamAny___lam__1(lean_object* v___f_4458_, lean_object* v_action_4459_, lean_object* v___y_4460_){
_start:
{
lean_object* v___x_4462_; uint8_t v___x_4463_; lean_object* v___x_4464_; lean_object* v___x_4465_; 
v___x_4462_ = lean_unsigned_to_nat(0u);
v___x_4463_ = 0;
lean_inc_ref(v___y_4460_);
v___x_4464_ = lean_apply_2(v_action_4459_, v___y_4460_, lean_box(0));
v___x_4465_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_4462_, v___x_4463_, v___x_4464_, v___f_4458_);
return v___x_4465_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_instCoeContextAsyncResponseStreamAny___lam__1___boxed(lean_object* v___f_4466_, lean_object* v_action_4467_, lean_object* v___y_4468_, lean_object* v___y_4469_){
_start:
{
lean_object* v_res_4470_; 
v_res_4470_ = l_Std_Http_Body_instCoeContextAsyncResponseStreamAny___lam__1(v___f_4466_, v_action_4467_, v___y_4468_);
lean_dec_ref(v___y_4468_);
return v_res_4470_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_instCoeAsyncResponseStreamContextAsyncAny___lam__1(lean_object* v___f_4476_, lean_object* v_action_4477_, lean_object* v___y_4478_){
_start:
{
lean_object* v___x_4480_; uint8_t v___x_4481_; lean_object* v___x_4482_; lean_object* v___x_4483_; 
v___x_4480_ = lean_unsigned_to_nat(0u);
v___x_4481_ = 0;
v___x_4482_ = lean_apply_1(v_action_4477_, lean_box(0));
v___x_4483_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_4480_, v___x_4481_, v___x_4482_, v___f_4476_);
return v___x_4483_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_instCoeAsyncResponseStreamContextAsyncAny___lam__1___boxed(lean_object* v___f_4484_, lean_object* v_action_4485_, lean_object* v___y_4486_, lean_object* v___y_4487_){
_start:
{
lean_object* v_res_4488_; 
v_res_4488_ = l_Std_Http_Body_instCoeAsyncResponseStreamContextAsyncAny___lam__1(v___f_4484_, v_action_4485_, v___y_4486_);
lean_dec_ref(v___y_4486_);
return v_res_4488_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Request_Builder_stream___lam__0(lean_object* v_builder_4492_, lean_object* v_x_4493_){
_start:
{
if (lean_obj_tag(v_x_4493_) == 0)
{
lean_object* v_a_4495_; lean_object* v___x_4497_; uint8_t v_isShared_4498_; uint8_t v_isSharedCheck_4503_; 
v_a_4495_ = lean_ctor_get(v_x_4493_, 0);
v_isSharedCheck_4503_ = !lean_is_exclusive(v_x_4493_);
if (v_isSharedCheck_4503_ == 0)
{
v___x_4497_ = v_x_4493_;
v_isShared_4498_ = v_isSharedCheck_4503_;
goto v_resetjp_4496_;
}
else
{
lean_inc(v_a_4495_);
lean_dec(v_x_4493_);
v___x_4497_ = lean_box(0);
v_isShared_4498_ = v_isSharedCheck_4503_;
goto v_resetjp_4496_;
}
v_resetjp_4496_:
{
lean_object* v___x_4500_; 
if (v_isShared_4498_ == 0)
{
v___x_4500_ = v___x_4497_;
goto v_reusejp_4499_;
}
else
{
lean_object* v_reuseFailAlloc_4502_; 
v_reuseFailAlloc_4502_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4502_, 0, v_a_4495_);
v___x_4500_ = v_reuseFailAlloc_4502_;
goto v_reusejp_4499_;
}
v_reusejp_4499_:
{
lean_object* v___x_4501_; 
v___x_4501_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4501_, 0, v___x_4500_);
return v___x_4501_;
}
}
}
else
{
lean_object* v_a_4504_; lean_object* v___x_4506_; uint8_t v_isShared_4507_; uint8_t v_isSharedCheck_4513_; 
v_a_4504_ = lean_ctor_get(v_x_4493_, 0);
v_isSharedCheck_4513_ = !lean_is_exclusive(v_x_4493_);
if (v_isSharedCheck_4513_ == 0)
{
v___x_4506_ = v_x_4493_;
v_isShared_4507_ = v_isSharedCheck_4513_;
goto v_resetjp_4505_;
}
else
{
lean_inc(v_a_4504_);
lean_dec(v_x_4493_);
v___x_4506_ = lean_box(0);
v_isShared_4507_ = v_isSharedCheck_4513_;
goto v_resetjp_4505_;
}
v_resetjp_4505_:
{
lean_object* v___x_4508_; lean_object* v___x_4510_; 
v___x_4508_ = l_Std_Http_Request_Builder_body___redArg(v_builder_4492_, v_a_4504_);
if (v_isShared_4507_ == 0)
{
lean_ctor_set(v___x_4506_, 0, v___x_4508_);
v___x_4510_ = v___x_4506_;
goto v_reusejp_4509_;
}
else
{
lean_object* v_reuseFailAlloc_4512_; 
v_reuseFailAlloc_4512_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4512_, 0, v___x_4508_);
v___x_4510_ = v_reuseFailAlloc_4512_;
goto v_reusejp_4509_;
}
v_reusejp_4509_:
{
lean_object* v___x_4511_; 
v___x_4511_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4511_, 0, v___x_4510_);
return v___x_4511_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Request_Builder_stream___lam__0___boxed(lean_object* v_builder_4514_, lean_object* v_x_4515_, lean_object* v___y_4516_){
_start:
{
lean_object* v_res_4517_; 
v_res_4517_ = l_Std_Http_Request_Builder_stream___lam__0(v_builder_4514_, v_x_4515_);
lean_dec_ref(v_builder_4514_);
return v_res_4517_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Request_Builder_stream(lean_object* v_builder_4518_, lean_object* v_gen_4519_){
_start:
{
lean_object* v___f_4521_; lean_object* v___x_4522_; uint8_t v___x_4523_; lean_object* v___x_4524_; lean_object* v___x_4525_; 
v___f_4521_ = lean_alloc_closure((void*)(l_Std_Http_Request_Builder_stream___lam__0___boxed), 3, 1);
lean_closure_set(v___f_4521_, 0, v_builder_4518_);
v___x_4522_ = lean_unsigned_to_nat(0u);
v___x_4523_ = 0;
v___x_4524_ = l_Std_Http_Body_stream(v_gen_4519_);
v___x_4525_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_4522_, v___x_4523_, v___x_4524_, v___f_4521_);
return v___x_4525_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Request_Builder_stream___boxed(lean_object* v_builder_4526_, lean_object* v_gen_4527_, lean_object* v___y_4528_){
_start:
{
lean_object* v_res_4529_; 
v_res_4529_ = l_Std_Http_Request_Builder_stream(v_builder_4526_, v_gen_4527_);
return v_res_4529_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Response_Builder_stream___lam__0(lean_object* v_builder_4530_, lean_object* v_x_4531_){
_start:
{
if (lean_obj_tag(v_x_4531_) == 0)
{
lean_object* v_a_4533_; lean_object* v___x_4535_; uint8_t v_isShared_4536_; uint8_t v_isSharedCheck_4541_; 
v_a_4533_ = lean_ctor_get(v_x_4531_, 0);
v_isSharedCheck_4541_ = !lean_is_exclusive(v_x_4531_);
if (v_isSharedCheck_4541_ == 0)
{
v___x_4535_ = v_x_4531_;
v_isShared_4536_ = v_isSharedCheck_4541_;
goto v_resetjp_4534_;
}
else
{
lean_inc(v_a_4533_);
lean_dec(v_x_4531_);
v___x_4535_ = lean_box(0);
v_isShared_4536_ = v_isSharedCheck_4541_;
goto v_resetjp_4534_;
}
v_resetjp_4534_:
{
lean_object* v___x_4538_; 
if (v_isShared_4536_ == 0)
{
v___x_4538_ = v___x_4535_;
goto v_reusejp_4537_;
}
else
{
lean_object* v_reuseFailAlloc_4540_; 
v_reuseFailAlloc_4540_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4540_, 0, v_a_4533_);
v___x_4538_ = v_reuseFailAlloc_4540_;
goto v_reusejp_4537_;
}
v_reusejp_4537_:
{
lean_object* v___x_4539_; 
v___x_4539_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4539_, 0, v___x_4538_);
return v___x_4539_;
}
}
}
else
{
lean_object* v_a_4542_; lean_object* v___x_4544_; uint8_t v_isShared_4545_; uint8_t v_isSharedCheck_4551_; 
v_a_4542_ = lean_ctor_get(v_x_4531_, 0);
v_isSharedCheck_4551_ = !lean_is_exclusive(v_x_4531_);
if (v_isSharedCheck_4551_ == 0)
{
v___x_4544_ = v_x_4531_;
v_isShared_4545_ = v_isSharedCheck_4551_;
goto v_resetjp_4543_;
}
else
{
lean_inc(v_a_4542_);
lean_dec(v_x_4531_);
v___x_4544_ = lean_box(0);
v_isShared_4545_ = v_isSharedCheck_4551_;
goto v_resetjp_4543_;
}
v_resetjp_4543_:
{
lean_object* v___x_4546_; lean_object* v___x_4548_; 
v___x_4546_ = l_Std_Http_Response_Builder_body___redArg(v_builder_4530_, v_a_4542_);
if (v_isShared_4545_ == 0)
{
lean_ctor_set(v___x_4544_, 0, v___x_4546_);
v___x_4548_ = v___x_4544_;
goto v_reusejp_4547_;
}
else
{
lean_object* v_reuseFailAlloc_4550_; 
v_reuseFailAlloc_4550_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4550_, 0, v___x_4546_);
v___x_4548_ = v_reuseFailAlloc_4550_;
goto v_reusejp_4547_;
}
v_reusejp_4547_:
{
lean_object* v___x_4549_; 
v___x_4549_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4549_, 0, v___x_4548_);
return v___x_4549_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Response_Builder_stream___lam__0___boxed(lean_object* v_builder_4552_, lean_object* v_x_4553_, lean_object* v___y_4554_){
_start:
{
lean_object* v_res_4555_; 
v_res_4555_ = l_Std_Http_Response_Builder_stream___lam__0(v_builder_4552_, v_x_4553_);
lean_dec_ref(v_builder_4552_);
return v_res_4555_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Response_Builder_stream(lean_object* v_builder_4556_, lean_object* v_gen_4557_){
_start:
{
lean_object* v___f_4559_; lean_object* v___x_4560_; uint8_t v___x_4561_; lean_object* v___x_4562_; lean_object* v___x_4563_; 
v___f_4559_ = lean_alloc_closure((void*)(l_Std_Http_Response_Builder_stream___lam__0___boxed), 3, 1);
lean_closure_set(v___f_4559_, 0, v_builder_4556_);
v___x_4560_ = lean_unsigned_to_nat(0u);
v___x_4561_ = 0;
v___x_4562_ = l_Std_Http_Body_stream(v_gen_4557_);
v___x_4563_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_4560_, v___x_4561_, v___x_4562_, v___f_4559_);
return v___x_4563_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Response_Builder_stream___boxed(lean_object* v_builder_4564_, lean_object* v_gen_4565_, lean_object* v___y_4566_){
_start:
{
lean_object* v_res_4567_; 
v_res_4567_ = l_Std_Http_Response_Builder_stream(v_builder_4564_, v_gen_4565_);
return v_res_4567_;
}
}
lean_object* runtime_initialize_Std_Sync(uint8_t builtin);
lean_object* runtime_initialize_Std_Async(uint8_t builtin);
lean_object* runtime_initialize_Std_Http_Data_Request(uint8_t builtin);
lean_object* runtime_initialize_Std_Http_Data_Response(uint8_t builtin);
lean_object* runtime_initialize_Std_Http_Data_Chunk(uint8_t builtin);
lean_object* runtime_initialize_Std_Http_Data_Body_Basic(uint8_t builtin);
lean_object* runtime_initialize_Std_Http_Data_Body_Any(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_ByteArray(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Std_Http_Data_Body_Stream(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Std_Sync(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Async(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Http_Data_Request(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Http_Data_Response(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Http_Data_Chunk(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Http_Data_Body_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Http_Data_Body_Any(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_ByteArray(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Std_Http_Data_Body_Stream(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Std_Sync(uint8_t builtin);
lean_object* initialize_Std_Async(uint8_t builtin);
lean_object* initialize_Std_Http_Data_Request(uint8_t builtin);
lean_object* initialize_Std_Http_Data_Response(uint8_t builtin);
lean_object* initialize_Std_Http_Data_Chunk(uint8_t builtin);
lean_object* initialize_Std_Http_Data_Body_Basic(uint8_t builtin);
lean_object* initialize_Std_Http_Data_Body_Any(uint8_t builtin);
lean_object* initialize_Init_Data_ByteArray(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Std_Http_Data_Body_Stream(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Std_Sync(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Async(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Http_Data_Request(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Http_Data_Response(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Http_Data_Chunk(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Http_Data_Body_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Http_Data_Body_Any(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_ByteArray(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Http_Data_Body_Stream(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Std_Http_Data_Body_Stream(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Std_Http_Data_Body_Stream(builtin);
}
#ifdef __cplusplus
}
#endif
