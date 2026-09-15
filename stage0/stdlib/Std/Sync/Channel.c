// Lean compiler output
// Module: Std.Sync.Channel
// Imports: public import Init.Data.Queue public import Std.Sync.Mutex public import Std.Async.IO import Init.Data.Vector.Basic import Init.Data.Option.BasicAux import Init.Omega
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
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Std_Queue_dequeue_x3f___redArg(lean_object*);
lean_object* lean_io_promise_resolve(lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* lean_st_ref_swap(lean_object*, lean_object*);
extern lean_object* l_instMonadBaseIO;
lean_object* lean_task_pure(lean_object*);
lean_object* l_instInhabitedOfMonad___redArg(lean_object*, lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_panic___redArg(lean_object*, lean_object*);
lean_object* lean_io_promise_new();
lean_object* l_Std_Queue_enqueue___redArg(lean_object*, lean_object*);
lean_object* lean_io_promise_result_opt(lean_object*);
lean_object* lean_task_map(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* lean_io_basemutex_lock(lean_object*);
lean_object* lean_io_basemutex_unlock(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_io_bind_task(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* lean_io_wait(lean_object*);
lean_object* l_Std_Queue_empty___redArg();
lean_object* l_Std_Mutex_new___redArg(lean_object*);
lean_object* lean_st_mk_ref(lean_object*);
lean_object* l_Array_range(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
uint8_t l_Std_Queue_isEmpty___redArg(lean_object*);
lean_object* l_ST_Prim_Ref_get___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_ST_Prim_Ref_set___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_IO_Promise_resolve___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* l_ST_Prim_Ref_swap___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_Queue_toArray___redArg(lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
size_t lean_usize_add(size_t, size_t);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
uint8_t l_List_isEmpty___redArg(lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_Std_Async_EAsync_tryFinally_x27___redArg(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Std_Async_EAsync_instMonad___redArg();
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_EIO_chainTask___redArg(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* lean_nat_to_int(lean_object*);
lean_object* lean_mk_io_user_error(lean_object*);
lean_object* l_Function_comp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Except_mapError(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Repr_addAppParen(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_CloseableChannel_Error_ctorIdx(uint8_t);
LEAN_EXPORT lean_object* l_Std_CloseableChannel_Error_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_CloseableChannel_Error_ctorElim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_CloseableChannel_Error_ctorElim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_CloseableChannel_Error_ctorElim(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_CloseableChannel_Error_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_CloseableChannel_Error_closed_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_CloseableChannel_Error_closed_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_CloseableChannel_Error_closed_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_CloseableChannel_Error_closed_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_CloseableChannel_Error_alreadyClosed_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_CloseableChannel_Error_alreadyClosed_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_CloseableChannel_Error_alreadyClosed_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_CloseableChannel_Error_alreadyClosed_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Std_CloseableChannel_instReprError_repr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "Std.CloseableChannel.Error.closed"};
static const lean_object* l_Std_CloseableChannel_instReprError_repr___closed__0 = (const lean_object*)&l_Std_CloseableChannel_instReprError_repr___closed__0_value;
static const lean_ctor_object l_Std_CloseableChannel_instReprError_repr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_CloseableChannel_instReprError_repr___closed__0_value)}};
static const lean_object* l_Std_CloseableChannel_instReprError_repr___closed__1 = (const lean_object*)&l_Std_CloseableChannel_instReprError_repr___closed__1_value;
static const lean_string_object l_Std_CloseableChannel_instReprError_repr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 41, .m_capacity = 41, .m_length = 40, .m_data = "Std.CloseableChannel.Error.alreadyClosed"};
static const lean_object* l_Std_CloseableChannel_instReprError_repr___closed__2 = (const lean_object*)&l_Std_CloseableChannel_instReprError_repr___closed__2_value;
static const lean_ctor_object l_Std_CloseableChannel_instReprError_repr___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_CloseableChannel_instReprError_repr___closed__2_value)}};
static const lean_object* l_Std_CloseableChannel_instReprError_repr___closed__3 = (const lean_object*)&l_Std_CloseableChannel_instReprError_repr___closed__3_value;
static lean_once_cell_t l_Std_CloseableChannel_instReprError_repr___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_CloseableChannel_instReprError_repr___closed__4;
static lean_once_cell_t l_Std_CloseableChannel_instReprError_repr___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_CloseableChannel_instReprError_repr___closed__5;
LEAN_EXPORT lean_object* l_Std_CloseableChannel_instReprError_repr(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Std_CloseableChannel_instReprError_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_CloseableChannel_instReprError___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_CloseableChannel_instReprError_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_CloseableChannel_instReprError___closed__0 = (const lean_object*)&l_Std_CloseableChannel_instReprError___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_CloseableChannel_instReprError = (const lean_object*)&l_Std_CloseableChannel_instReprError___closed__0_value;
LEAN_EXPORT uint8_t l_Std_CloseableChannel_Error_ofNat(lean_object*);
LEAN_EXPORT lean_object* l_Std_CloseableChannel_Error_ofNat___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Std_CloseableChannel_instDecidableEqError(uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_Std_CloseableChannel_instDecidableEqError___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint64_t l_Std_CloseableChannel_instHashableError_hash(uint8_t);
LEAN_EXPORT lean_object* l_Std_CloseableChannel_instHashableError_hash___boxed(lean_object*);
static const lean_closure_object l_Std_CloseableChannel_instHashableError___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_CloseableChannel_instHashableError_hash___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_CloseableChannel_instHashableError___closed__0 = (const lean_object*)&l_Std_CloseableChannel_instHashableError___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_CloseableChannel_instHashableError = (const lean_object*)&l_Std_CloseableChannel_instHashableError___closed__0_value;
static const lean_string_object l_Std_CloseableChannel_instToStringError___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 44, .m_capacity = 44, .m_length = 43, .m_data = "trying to send on an already closed channel"};
static const lean_object* l_Std_CloseableChannel_instToStringError___lam__0___closed__0 = (const lean_object*)&l_Std_CloseableChannel_instToStringError___lam__0___closed__0_value;
static const lean_string_object l_Std_CloseableChannel_instToStringError___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 42, .m_capacity = 42, .m_length = 41, .m_data = "trying to close an already closed channel"};
static const lean_object* l_Std_CloseableChannel_instToStringError___lam__0___closed__1 = (const lean_object*)&l_Std_CloseableChannel_instToStringError___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l_Std_CloseableChannel_instToStringError___lam__0(uint8_t);
LEAN_EXPORT lean_object* l_Std_CloseableChannel_instToStringError___lam__0___boxed(lean_object*);
static const lean_closure_object l_Std_CloseableChannel_instToStringError___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_CloseableChannel_instToStringError___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_CloseableChannel_instToStringError___closed__0 = (const lean_object*)&l_Std_CloseableChannel_instToStringError___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_CloseableChannel_instToStringError = (const lean_object*)&l_Std_CloseableChannel_instToStringError___closed__0_value;
static const lean_ctor_object l_Std_CloseableChannel_instMonadLiftEIOErrorIO___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 18}, .m_objs = {((lean_object*)&l_Std_CloseableChannel_instToStringError___lam__0___closed__0_value)}};
static const lean_object* l_Std_CloseableChannel_instMonadLiftEIOErrorIO___lam__0___closed__0 = (const lean_object*)&l_Std_CloseableChannel_instMonadLiftEIOErrorIO___lam__0___closed__0_value;
static const lean_ctor_object l_Std_CloseableChannel_instMonadLiftEIOErrorIO___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 18}, .m_objs = {((lean_object*)&l_Std_CloseableChannel_instToStringError___lam__0___closed__1_value)}};
static const lean_object* l_Std_CloseableChannel_instMonadLiftEIOErrorIO___lam__0___closed__1 = (const lean_object*)&l_Std_CloseableChannel_instMonadLiftEIOErrorIO___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l_Std_CloseableChannel_instMonadLiftEIOErrorIO___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_CloseableChannel_instMonadLiftEIOErrorIO___lam__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_CloseableChannel_instMonadLiftEIOErrorIO___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_CloseableChannel_instMonadLiftEIOErrorIO___lam__0___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_CloseableChannel_instMonadLiftEIOErrorIO___closed__0 = (const lean_object*)&l_Std_CloseableChannel_instMonadLiftEIOErrorIO___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_CloseableChannel_instMonadLiftEIOErrorIO = (const lean_object*)&l_Std_CloseableChannel_instMonadLiftEIOErrorIO___closed__0_value;
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Consumer_ctorIdx___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Consumer_ctorIdx___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Consumer_ctorIdx(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Consumer_ctorIdx___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Consumer_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Consumer_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Consumer_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Consumer_normal_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Consumer_normal_elim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Consumer_select_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Consumer_select_elim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_Async_Waiter_race___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Consumer_resolve_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Waiter_race___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Consumer_resolve_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_Async_Waiter_race___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Consumer_resolve_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Waiter_race___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Consumer_resolve_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Std_Sync_Channel_0__Std_CloseableChannel_Consumer_resolve___redArg___lam__0(uint8_t);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Consumer_resolve___redArg___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l___private_Std_Sync_Channel_0__Std_CloseableChannel_Consumer_resolve___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Std_Sync_Channel_0__Std_CloseableChannel_Consumer_resolve___redArg___lam__0___boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Consumer_resolve___redArg___closed__0 = (const lean_object*)&l___private_Std_Sync_Channel_0__Std_CloseableChannel_Consumer_resolve___redArg___closed__0_value;
LEAN_EXPORT uint8_t l___private_Std_Sync_Channel_0__Std_CloseableChannel_Consumer_resolve___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Consumer_resolve___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Std_Sync_Channel_0__Std_CloseableChannel_Consumer_resolve(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Consumer_resolve___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_new___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_new___redArg___closed__0;
static lean_once_cell_t l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_new___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_new___redArg___closed__1;
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_new___redArg();
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_new___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_new(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_new___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_trySend_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_trySend_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_trySend_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_trySend_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_trySend_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_trySend_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_trySend___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_trySend___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_trySend___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_trySend___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_trySend(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_trySend___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_trySend_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_trySend_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_send___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_send___redArg___closed__0 = (const lean_object*)&l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_send___redArg___closed__0_value;
static lean_once_cell_t l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_send___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_send___redArg___closed__1;
static const lean_ctor_object l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_send___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_send___redArg___closed__2 = (const lean_object*)&l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_send___redArg___closed__2_value;
static lean_once_cell_t l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_send___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_send___redArg___closed__3;
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_send___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_send___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_send(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_send___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_close_spec__1___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_close_spec__1___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_close_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_close_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_close_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_close_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_close_spec__0___redArg(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_close_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_close___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_close___redArg___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_close___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_close___redArg___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_close___redArg___closed__0 = (const lean_object*)&l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_close___redArg___closed__0_value;
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_close___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_close___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_close(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_close___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_close_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_close_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_isClosed___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_isClosed___redArg___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_isClosed___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_isClosed___redArg___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_isClosed___redArg___closed__0 = (const lean_object*)&l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_isClosed___redArg___closed__0_value;
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_isClosed___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_isClosed___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_isClosed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_isClosed___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_tryRecv_x27___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_tryRecv_x27___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_tryRecv_x27___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_tryRecv_x27___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_tryRecv_x27___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_tryRecv_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_tryRecv_x27___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_tryRecv_x27___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_tryRecv_spec__0___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_tryRecv_x27___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_tryRecv_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_tryRecv_x27___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_tryRecv_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_tryRecv_x27___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_tryRecv_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_tryRecv___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_tryRecv_x27___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_tryRecv_spec__0___redArg___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_tryRecv___redArg___closed__0 = (const lean_object*)&l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_tryRecv___redArg___closed__0_value;
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_tryRecv___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_tryRecv___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_tryRecv(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_tryRecv___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recv___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recv___redArg___lam__0___boxed(lean_object*);
static lean_once_cell_t l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recv___redArg___lam__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recv___redArg___lam__1___closed__0;
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recv___redArg___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recv___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recv___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recv___redArg___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recv___redArg___closed__0 = (const lean_object*)&l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recv___redArg___closed__0_value;
static const lean_closure_object l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recv___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recv___redArg___lam__1___boxed, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)&l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recv___redArg___closed__0_value)} };
static const lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recv___redArg___closed__1 = (const lean_object*)&l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recv___redArg___closed__1_value;
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recv___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recv___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recv(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recv___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvReady_x27___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvReady_x27___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvReady_x27___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvReady_x27___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvReady_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvReady_x27___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_tryRecv_x27___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector_spec__0___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_tryRecv_x27___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector_spec__0___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_tryRecv_x27___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector_spec__0___redArg___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_tryRecv_x27___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector_spec__0___redArg___lam__1___closed__0 = (const lean_object*)&l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_tryRecv_x27___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector_spec__0___redArg___lam__1___closed__0_value;
static const lean_ctor_object l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_tryRecv_x27___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector_spec__0___redArg___lam__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_tryRecv_x27___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector_spec__0___redArg___lam__1___closed__0_value)}};
static const lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_tryRecv_x27___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector_spec__0___redArg___lam__1___closed__1 = (const lean_object*)&l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_tryRecv_x27___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector_spec__0___redArg___lam__1___closed__1_value;
static const lean_ctor_object l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_tryRecv_x27___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector_spec__0___redArg___lam__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_tryRecv_x27___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector_spec__0___redArg___lam__1___closed__2 = (const lean_object*)&l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_tryRecv_x27___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector_spec__0___redArg___lam__1___closed__2_value;
static const lean_ctor_object l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_tryRecv_x27___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector_spec__0___redArg___lam__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_tryRecv_x27___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector_spec__0___redArg___lam__1___closed__2_value)}};
static const lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_tryRecv_x27___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector_spec__0___redArg___lam__1___closed__3 = (const lean_object*)&l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_tryRecv_x27___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector_spec__0___redArg___lam__1___closed__3_value;
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_tryRecv_x27___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector_spec__0___redArg___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_tryRecv_x27___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector_spec__0___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_tryRecv_x27___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector_spec__0___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_tryRecv_x27___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_tryRecv_x27___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_tryRecv_x27___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Waiter_race___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector_spec__1___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Waiter_race___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector_spec__1___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Waiter_race___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector_spec__1___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Waiter_race___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector_spec__1___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Waiter_race___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Waiter_race___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Waiter_race___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Waiter_race___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector_spec__2___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector_spec__2___redArg___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector_spec__2___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector_spec__2___redArg___lam__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector_spec__2___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector_spec__2___redArg___lam__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector_spec__2___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Mutex_atomically___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector_spec__2___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Mutex_atomically___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector_spec__2___redArg___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Mutex_atomically___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector_spec__2___redArg___closed__0 = (const lean_object*)&l_Std_Mutex_atomically___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector_spec__2___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector___redArg___lam__1(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector___redArg___lam__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector___redArg___lam__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector___redArg___lam__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector___redArg___lam__2___boxed, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector___redArg___lam__3___closed__0 = (const lean_object*)&l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector___redArg___lam__3___closed__0_value;
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector___redArg___lam__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector___redArg___lam__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector___redArg___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector___redArg___lam__5(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector___redArg___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector___redArg___lam__7___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector___redArg___lam__7___closed__0 = (const lean_object*)&l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector___redArg___lam__7___closed__0_value;
static const lean_ctor_object l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector___redArg___lam__7___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector___redArg___lam__7___closed__0_value)}};
static const lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector___redArg___lam__7___closed__1 = (const lean_object*)&l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector___redArg___lam__7___closed__1_value;
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector___redArg___lam__7(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector___redArg___lam__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector___redArg___lam__6(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector___redArg___lam__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector___redArg___lam__8(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector___redArg___lam__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Queue_filterM___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector_spec__3___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Std_Queue_filterM___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector_spec__3___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Queue_filterM___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector_spec__3___redArg___lam__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Queue_filterM___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector_spec__3___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_filterAuxM___at___00Std_Queue_filterM___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector_spec__3_spec__3___redArg___lam__1(lean_object*);
LEAN_EXPORT lean_object* l_List_filterAuxM___at___00Std_Queue_filterM___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector_spec__3_spec__3___redArg___lam__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_filterAuxM___at___00Std_Queue_filterM___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector_spec__3_spec__3___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_List_filterAuxM___at___00Std_Queue_filterM___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector_spec__3_spec__3___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_List_filterAuxM___at___00Std_Queue_filterM___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector_spec__3_spec__3___redArg___closed__0 = (const lean_object*)&l_List_filterAuxM___at___00Std_Queue_filterM___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector_spec__3_spec__3___redArg___closed__0_value;
static const lean_ctor_object l_List_filterAuxM___at___00Std_Queue_filterM___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector_spec__3_spec__3___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_List_filterAuxM___at___00Std_Queue_filterM___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector_spec__3_spec__3___redArg___closed__0_value)}};
static const lean_object* l_List_filterAuxM___at___00Std_Queue_filterM___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector_spec__3_spec__3___redArg___closed__1 = (const lean_object*)&l_List_filterAuxM___at___00Std_Queue_filterM___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector_spec__3_spec__3___redArg___closed__1_value;
static const lean_closure_object l_List_filterAuxM___at___00Std_Queue_filterM___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector_spec__3_spec__3___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_List_filterAuxM___at___00Std_Queue_filterM___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector_spec__3_spec__3___redArg___lam__1___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_List_filterAuxM___at___00Std_Queue_filterM___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector_spec__3_spec__3___redArg___closed__2 = (const lean_object*)&l_List_filterAuxM___at___00Std_Queue_filterM___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector_spec__3_spec__3___redArg___closed__2_value;
LEAN_EXPORT lean_object* l_List_filterAuxM___at___00Std_Queue_filterM___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector_spec__3_spec__3___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_filterAuxM___at___00Std_Queue_filterM___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector_spec__3_spec__3___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_filterAuxM___at___00Std_Queue_filterM___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector_spec__3_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Queue_filterM___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector_spec__3___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Queue_filterM___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector_spec__3___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Queue_filterM___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector_spec__3___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Queue_filterM___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector_spec__3___redArg___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Queue_filterM___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector_spec__3___redArg___closed__0 = (const lean_object*)&l_Std_Queue_filterM___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector_spec__3___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Queue_filterM___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector_spec__3___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Queue_filterM___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector___redArg___lam__9(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector___redArg___lam__9___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector___redArg___lam__10(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector___redArg___lam__10___boxed(lean_object*, lean_object*);
static const lean_closure_object l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector___redArg___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector___redArg___closed__0 = (const lean_object*)&l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector___redArg___closed__0_value;
static const lean_closure_object l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector___redArg___lam__1___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector___redArg___closed__1 = (const lean_object*)&l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector___redArg___closed__1_value;
static const lean_closure_object l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector___redArg___lam__6___boxed, .m_arity = 4, .m_num_fixed = 2, .m_objs = {((lean_object*)&l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector___redArg___closed__0_value),((lean_object*)&l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector___redArg___closed__1_value)} };
static const lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector___redArg___closed__2 = (const lean_object*)&l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector___redArg___closed__2_value;
static const lean_closure_object l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector___redArg___lam__10___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector___redArg___closed__3 = (const lean_object*)&l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector___redArg___closed__3_value;
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Queue_filterM___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector_spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Queue_filterM___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_filterAuxM___at___00Std_Queue_filterM___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector_spec__3_spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_filterAuxM___at___00Std_Queue_filterM___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector_spec__3_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_new___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_new___redArg___closed__0;
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_new___redArg();
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_new___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_new(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_new___boxed(lean_object*, lean_object*);
static const lean_ctor_object l___private_Init_While_0__repeatM_erased___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_trySend_x27_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_trySend_x27_spec__0___redArg___closed__0 = (const lean_object*)&l___private_Init_While_0__repeatM_erased___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_trySend_x27_spec__0___redArg___closed__0_value;
static const lean_ctor_object l___private_Init_While_0__repeatM_erased___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_trySend_x27_spec__0___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_trySend_x27_spec__0___redArg___closed__1 = (const lean_object*)&l___private_Init_While_0__repeatM_erased___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_trySend_x27_spec__0___redArg___closed__1_value;
static const lean_ctor_object l___private_Init_While_0__repeatM_erased___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_trySend_x27_spec__0___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Init_While_0__repeatM_erased___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_trySend_x27_spec__0___redArg___closed__1_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_trySend_x27_spec__0___redArg___closed__2 = (const lean_object*)&l___private_Init_While_0__repeatM_erased___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_trySend_x27_spec__0___redArg___closed__2_value;
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_trySend_x27_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_trySend_x27_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_trySend_x27___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_trySend_x27___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_trySend_x27(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_trySend_x27___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_trySend_x27_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_trySend_x27_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_trySend___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_trySend___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_trySend___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_trySend___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_trySend(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_trySend___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_send___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_send___redArg___lam__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_send___redArg___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_send___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_send___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_send___redArg___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_send___redArg___closed__0 = (const lean_object*)&l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_send___redArg___closed__0_value;
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_send___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_send___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_send(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_send___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_close_spec__0___redArg(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_close_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_close___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_close___redArg___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_close___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_close___redArg___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_close___redArg___closed__0 = (const lean_object*)&l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_close___redArg___closed__0_value;
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_close___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_close___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_close(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_close___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_close_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_close_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_isClosed___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_isClosed___redArg___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_isClosed___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_isClosed___redArg___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_isClosed___redArg___closed__0 = (const lean_object*)&l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_isClosed___redArg___closed__0_value;
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_isClosed___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_isClosed___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_isClosed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_isClosed___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_tryRecv_x27___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_tryRecv_x27___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_tryRecv_x27___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_tryRecv_x27___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_tryRecv_x27___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_tryRecv_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_tryRecv_x27___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_tryRecv_x27___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_tryRecv_spec__0___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_tryRecv_x27___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_tryRecv_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_tryRecv_x27___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_tryRecv_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_tryRecv_x27___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_tryRecv_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_tryRecv___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_tryRecv_x27___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_tryRecv_spec__0___redArg___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_tryRecv___redArg___closed__0 = (const lean_object*)&l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_tryRecv___redArg___closed__0_value;
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_tryRecv___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_tryRecv___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_tryRecv(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_tryRecv___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_recv___redArg___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_recv___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_recv___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_recv___redArg___lam__1___boxed, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)&l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recv___redArg___closed__0_value)} };
static const lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_recv___redArg___closed__0 = (const lean_object*)&l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_recv___redArg___closed__0_value;
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_recv___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_recv___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_recv(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_recv___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_recvReady_x27___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_recvReady_x27___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_recvReady_x27___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_recvReady_x27___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_recvReady_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_recvReady_x27___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_tryRecv_x27___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_recvSelector_spec__0___redArg___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_tryRecv_x27___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_recvSelector_spec__0___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_tryRecv_x27___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_recvSelector_spec__0___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_tryRecv_x27___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_recvSelector_spec__0___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_tryRecv_x27___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_recvSelector_spec__0___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_tryRecv_x27___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_recvSelector_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_tryRecv_x27___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_recvSelector_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_tryRecv_x27___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_recvSelector_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Waiter_race___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_recvSelector_spec__1___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Waiter_race___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_recvSelector_spec__1___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Waiter_race___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_recvSelector_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Waiter_race___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_recvSelector_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Waiter_race___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_recvSelector_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Waiter_race___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_recvSelector_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_recvSelector___redArg___lam__1(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_recvSelector___redArg___lam__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_recvSelector___redArg___lam__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_recvSelector___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_recvSelector___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_recvSelector___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_recvSelector___redArg___lam__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_recvSelector___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_recvSelector___redArg___lam__5(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_recvSelector___redArg___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_recvSelector___redArg___lam__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_recvSelector___redArg___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_recvSelector___redArg___lam__6(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_recvSelector___redArg___lam__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_filterAuxM___at___00Std_Queue_filterM___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_recvSelector_spec__2_spec__2___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_filterAuxM___at___00Std_Queue_filterM___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_recvSelector_spec__2_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_filterAuxM___at___00Std_Queue_filterM___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_recvSelector_spec__2_spec__2___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_filterAuxM___at___00Std_Queue_filterM___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_recvSelector_spec__2_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Queue_filterM___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_recvSelector_spec__2___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Queue_filterM___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_recvSelector_spec__2___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Queue_filterM___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_recvSelector_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Queue_filterM___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_recvSelector_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_recvSelector___redArg___lam__7(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_recvSelector___redArg___lam__7___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_recvSelector___redArg___lam__8(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_recvSelector___redArg___lam__8___boxed(lean_object*, lean_object*);
static const lean_closure_object l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_recvSelector___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_recvSelector___redArg___lam__1___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_recvSelector___redArg___closed__0 = (const lean_object*)&l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_recvSelector___redArg___closed__0_value;
static const lean_closure_object l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_recvSelector___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_recvSelector___redArg___lam__4___boxed, .m_arity = 4, .m_num_fixed = 2, .m_objs = {((lean_object*)&l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector___redArg___closed__0_value),((lean_object*)&l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_recvSelector___redArg___closed__0_value)} };
static const lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_recvSelector___redArg___closed__1 = (const lean_object*)&l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_recvSelector___redArg___closed__1_value;
static const lean_closure_object l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_recvSelector___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_recvSelector___redArg___lam__8___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_recvSelector___redArg___closed__2 = (const lean_object*)&l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_recvSelector___redArg___closed__2_value;
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_recvSelector___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_recvSelector(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Queue_filterM___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_recvSelector_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Queue_filterM___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_recvSelector_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_filterAuxM___at___00Std_Queue_filterM___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_recvSelector_spec__2_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_filterAuxM___at___00Std_Queue_filterM___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_recvSelector_spec__2_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_Consumer_resolve___redArg(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_Consumer_resolve___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_Consumer_resolve(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_Consumer_resolve___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_new___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_new___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Vector_Basic_0__Vector_mapM_go___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_new_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Vector_Basic_0__Vector_mapM_go___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_new_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_new___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_new___redArg___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_new___redArg___closed__0 = (const lean_object*)&l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_new___redArg___closed__0_value;
static const lean_array_object l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_new___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_new___redArg___closed__1 = (const lean_object*)&l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_new___redArg___closed__1_value;
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_new___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_new___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_new(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_new___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Vector_Basic_0__Vector_mapM_go___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_new_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Vector_Basic_0__Vector_mapM_go___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_new_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_incMod(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_incMod___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_trySend_x27___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_trySend_x27___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_trySend_x27(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_trySend_x27___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_trySend___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_trySend___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_trySend___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_trySend___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_trySend(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_trySend___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_send___redArg___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_send___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_send___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_send___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_send___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_send___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_send(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_send___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_close_spec__0___redArg(uint8_t, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_close_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_close___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_close___redArg___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_close___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_close___redArg___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_close___redArg___closed__0 = (const lean_object*)&l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_close___redArg___closed__0_value;
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_close___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_close___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_close(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_close___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_close_spec__0(lean_object*, uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_close_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_isClosed___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_isClosed___redArg___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_isClosed___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_isClosed___redArg___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_isClosed___redArg___closed__0 = (const lean_object*)&l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_isClosed___redArg___closed__0_value;
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_isClosed___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_isClosed___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_isClosed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_isClosed___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_tryRecv_x27___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_tryRecv_x27___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_tryRecv_x27___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_tryRecv_x27___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_tryRecv_x27___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_tryRecv_x27___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_tryRecv_x27___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_tryRecv_x27___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_tryRecv_x27___redArg___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_tryRecv_x27___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_tryRecv_x27___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_tryRecv_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_tryRecv_x27___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_tryRecv_x27___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_tryRecv_spec__0___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_tryRecv_x27___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_tryRecv_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_tryRecv_x27___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_tryRecv_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_tryRecv_x27___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_tryRecv_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_tryRecv___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_tryRecv_x27___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_tryRecv_spec__0___redArg___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_tryRecv___redArg___closed__0 = (const lean_object*)&l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_tryRecv___redArg___closed__0_value;
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_tryRecv___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_tryRecv___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_tryRecv(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_tryRecv___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recv___redArg___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recv___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recv___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recv___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recv___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recv___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recv(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recv___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvReady_x27___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvReady_x27___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvReady_x27___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvReady_x27___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvReady_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvReady_x27___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_tryRecv_x27___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvSelector_registerAux_spec__0___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_tryRecv_x27___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvSelector_registerAux_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_tryRecv_x27___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvSelector_registerAux_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_tryRecv_x27___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvSelector_registerAux_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Waiter_race___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvSelector_registerAux_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Waiter_race___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvSelector_registerAux_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Waiter_race___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvSelector_registerAux_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Waiter_race___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvSelector_registerAux_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Waiter_race___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvSelector_registerAux_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Waiter_race___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvSelector_registerAux_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Waiter_race___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvSelector_registerAux_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Waiter_race___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvSelector_registerAux_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvSelector_registerAux_spec__3___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvSelector_registerAux_spec__3___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvSelector_registerAux_spec__3___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvSelector_registerAux_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvSelector_registerAux_spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvSelector_registerAux_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvSelector_registerAux___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvSelector_registerAux___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvSelector_registerAux___redArg___lam__2(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvSelector_registerAux___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvSelector_registerAux___redArg___lam__3(lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvSelector_registerAux___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvSelector_registerAux___redArg___lam__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvSelector_registerAux___redArg___lam__4___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvSelector_registerAux___redArg___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvSelector_registerAux___redArg___lam__0___boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvSelector_registerAux___redArg___lam__1___closed__0 = (const lean_object*)&l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvSelector_registerAux___redArg___lam__1___closed__0_value;
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvSelector_registerAux___redArg___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvSelector_registerAux___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvSelector_registerAux___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvSelector_registerAux___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvSelector_registerAux(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvSelector_registerAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_tryRecv_x27___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvSelector_spec__0___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_tryRecv_x27___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvSelector_spec__0___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_tryRecv_x27___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvSelector_spec__0___redArg___lam__1(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_tryRecv_x27___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvSelector_spec__0___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_tryRecv_x27___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvSelector_spec__0___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_tryRecv_x27___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvSelector_spec__0___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_tryRecv_x27___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvSelector_spec__0___redArg___lam__3(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_tryRecv_x27___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvSelector_spec__0___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_tryRecv_x27___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvSelector_spec__0___redArg___lam__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_tryRecv_x27___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvSelector_spec__0___redArg___lam__4___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_tryRecv_x27___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvSelector_spec__0___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_tryRecv_x27___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvSelector_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_tryRecv_x27___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvSelector_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_tryRecv_x27___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvSelector_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvSelector___redArg___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvSelector___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvSelector___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvSelector___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvSelector___redArg___lam__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvSelector___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvSelector___redArg___lam__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvSelector___redArg___lam__2___boxed, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvSelector___redArg___lam__3___closed__0 = (const lean_object*)&l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvSelector___redArg___lam__3___closed__0_value;
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvSelector___redArg___lam__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvSelector___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvSelector___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvSelector___redArg___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_filterAuxM___at___00Std_Queue_filterM___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvSelector_spec__1_spec__1___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_filterAuxM___at___00Std_Queue_filterM___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvSelector_spec__1_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_filterAuxM___at___00Std_Queue_filterM___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvSelector_spec__1_spec__1___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_filterAuxM___at___00Std_Queue_filterM___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvSelector_spec__1_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Queue_filterM___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvSelector_spec__1___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Std_Queue_filterM___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvSelector_spec__1___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Queue_filterM___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvSelector_spec__1___redArg___lam__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Queue_filterM___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvSelector_spec__1___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Queue_filterM___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvSelector_spec__1___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Queue_filterM___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvSelector_spec__1___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Queue_filterM___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvSelector_spec__1___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Queue_filterM___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvSelector_spec__1___redArg___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Queue_filterM___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvSelector_spec__1___redArg___closed__0 = (const lean_object*)&l_Std_Queue_filterM___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvSelector_spec__1___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Queue_filterM___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvSelector_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Queue_filterM___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvSelector_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvSelector___redArg___lam__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvSelector___redArg___lam__5___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvSelector___redArg___lam__6(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvSelector___redArg___lam__6___boxed(lean_object*, lean_object*);
static const lean_closure_object l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvSelector___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvSelector___redArg___lam__3___boxed, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)&l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector___redArg___closed__0_value)} };
static const lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvSelector___redArg___closed__0 = (const lean_object*)&l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvSelector___redArg___closed__0_value;
static const lean_closure_object l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvSelector___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvSelector___redArg___lam__6___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvSelector___redArg___closed__1 = (const lean_object*)&l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvSelector___redArg___closed__1_value;
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvSelector___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvSelector(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Queue_filterM___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvSelector_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Queue_filterM___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvSelector_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_filterAuxM___at___00Std_Queue_filterM___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvSelector_spec__1_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_filterAuxM___at___00Std_Queue_filterM___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvSelector_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_CloseableChannel_Flavors_ctorIdx___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_CloseableChannel_Flavors_ctorIdx___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_CloseableChannel_Flavors_ctorIdx(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_CloseableChannel_Flavors_ctorIdx___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_CloseableChannel_Flavors_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_CloseableChannel_Flavors_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_CloseableChannel_Flavors_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_CloseableChannel_Flavors_unbounded_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_CloseableChannel_Flavors_unbounded_elim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_CloseableChannel_Flavors_zero_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_CloseableChannel_Flavors_zero_elim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_CloseableChannel_Flavors_bounded_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_CloseableChannel_Flavors_bounded_elim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_CloseableChannel_new___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_CloseableChannel_new___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_CloseableChannel_new(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_CloseableChannel_new___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_CloseableChannel_trySend___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_CloseableChannel_trySend___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_CloseableChannel_trySend(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_CloseableChannel_trySend___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_CloseableChannel_send___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_CloseableChannel_send___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_CloseableChannel_send(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_CloseableChannel_send___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_CloseableChannel_close___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_CloseableChannel_close___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_CloseableChannel_close(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_CloseableChannel_close___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_CloseableChannel_isClosed___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_CloseableChannel_isClosed___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_CloseableChannel_isClosed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_CloseableChannel_isClosed___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_CloseableChannel_tryRecv___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_CloseableChannel_tryRecv___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_CloseableChannel_tryRecv(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_CloseableChannel_tryRecv___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_CloseableChannel_recv___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_CloseableChannel_recv___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_CloseableChannel_recv(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_CloseableChannel_recv___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_CloseableChannel_recvSelector___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_CloseableChannel_recvSelector(lean_object*, lean_object*);
static lean_once_cell_t l_Std_CloseableChannel_forAsync___redArg___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_CloseableChannel_forAsync___redArg___lam__0___closed__0;
LEAN_EXPORT lean_object* l_Std_CloseableChannel_forAsync___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_CloseableChannel_forAsync___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_CloseableChannel_forAsync___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_CloseableChannel_forAsync___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_CloseableChannel_forAsync(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_CloseableChannel_forAsync___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_CloseableChannel_instAsyncStreamOptionOfInhabited___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Std_CloseableChannel_instAsyncStreamOptionOfInhabited___redArg___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_CloseableChannel_instAsyncStreamOptionOfInhabited___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_CloseableChannel_recvSelector___redArg, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_CloseableChannel_instAsyncStreamOptionOfInhabited___redArg___closed__0 = (const lean_object*)&l_Std_CloseableChannel_instAsyncStreamOptionOfInhabited___redArg___closed__0_value;
static const lean_closure_object l_Std_CloseableChannel_instAsyncStreamOptionOfInhabited___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_CloseableChannel_instAsyncStreamOptionOfInhabited___redArg___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_CloseableChannel_instAsyncStreamOptionOfInhabited___redArg___closed__1 = (const lean_object*)&l_Std_CloseableChannel_instAsyncStreamOptionOfInhabited___redArg___closed__1_value;
static const lean_ctor_object l_Std_CloseableChannel_instAsyncStreamOptionOfInhabited___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Std_CloseableChannel_instAsyncStreamOptionOfInhabited___redArg___closed__0_value),((lean_object*)&l_Std_CloseableChannel_instAsyncStreamOptionOfInhabited___redArg___closed__1_value)}};
static const lean_object* l_Std_CloseableChannel_instAsyncStreamOptionOfInhabited___redArg___closed__2 = (const lean_object*)&l_Std_CloseableChannel_instAsyncStreamOptionOfInhabited___redArg___closed__2_value;
LEAN_EXPORT lean_object* l_Std_CloseableChannel_instAsyncStreamOptionOfInhabited___redArg();
LEAN_EXPORT lean_object* l_Std_CloseableChannel_instAsyncStreamOptionOfInhabited___redArg___boxed(lean_object*);
static lean_once_cell_t l_Std_CloseableChannel_instAsyncStreamOptionOfInhabited___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_CloseableChannel_instAsyncStreamOptionOfInhabited___closed__0;
LEAN_EXPORT lean_object* l_Std_CloseableChannel_instAsyncStreamOptionOfInhabited(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_CloseableChannel_instAsyncStreamOptionOfInhabited___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_CloseableChannel_instAsyncReadOptionOfInhabited___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Std_CloseableChannel_instAsyncReadOptionOfInhabited___redArg___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_CloseableChannel_instAsyncReadOptionOfInhabited___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_CloseableChannel_instAsyncReadOptionOfInhabited___redArg___lam__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_CloseableChannel_instAsyncReadOptionOfInhabited___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_CloseableChannel_instAsyncReadOptionOfInhabited___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_CloseableChannel_instAsyncReadOptionOfInhabited___redArg___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_CloseableChannel_instAsyncReadOptionOfInhabited___redArg___closed__0 = (const lean_object*)&l_Std_CloseableChannel_instAsyncReadOptionOfInhabited___redArg___closed__0_value;
static const lean_closure_object l_Std_CloseableChannel_instAsyncReadOptionOfInhabited___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_CloseableChannel_instAsyncReadOptionOfInhabited___redArg___lam__1___boxed, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Std_CloseableChannel_instAsyncReadOptionOfInhabited___redArg___closed__0_value)} };
static const lean_object* l_Std_CloseableChannel_instAsyncReadOptionOfInhabited___redArg___closed__1 = (const lean_object*)&l_Std_CloseableChannel_instAsyncReadOptionOfInhabited___redArg___closed__1_value;
static const lean_closure_object l_Std_CloseableChannel_instAsyncReadOptionOfInhabited___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_CloseableChannel_instAsyncReadOptionOfInhabited___redArg___lam__2___boxed, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Std_CloseableChannel_instAsyncReadOptionOfInhabited___redArg___closed__1_value)} };
static const lean_object* l_Std_CloseableChannel_instAsyncReadOptionOfInhabited___redArg___closed__2 = (const lean_object*)&l_Std_CloseableChannel_instAsyncReadOptionOfInhabited___redArg___closed__2_value;
LEAN_EXPORT lean_object* l_Std_CloseableChannel_instAsyncReadOptionOfInhabited___redArg();
LEAN_EXPORT lean_object* l_Std_CloseableChannel_instAsyncReadOptionOfInhabited___redArg___boxed(lean_object*);
static lean_once_cell_t l_Std_CloseableChannel_instAsyncReadOptionOfInhabited___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_CloseableChannel_instAsyncReadOptionOfInhabited___closed__0;
LEAN_EXPORT lean_object* l_Std_CloseableChannel_instAsyncReadOptionOfInhabited(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_CloseableChannel_instAsyncReadOptionOfInhabited___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_CloseableChannel_instAsyncWriteOfInhabited___redArg___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lean_mk_io_user_error, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_CloseableChannel_instAsyncWriteOfInhabited___redArg___lam__1___closed__0 = (const lean_object*)&l_Std_CloseableChannel_instAsyncWriteOfInhabited___redArg___lam__1___closed__0_value;
LEAN_EXPORT lean_object* l_Std_CloseableChannel_instAsyncWriteOfInhabited___redArg___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_CloseableChannel_instAsyncWriteOfInhabited___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_CloseableChannel_instAsyncWriteOfInhabited___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_CloseableChannel_instAsyncWriteOfInhabited___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_CloseableChannel_instAsyncWriteOfInhabited___redArg___lam__2(lean_object*);
LEAN_EXPORT lean_object* l_Std_CloseableChannel_instAsyncWriteOfInhabited___redArg___lam__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_CloseableChannel_instAsyncWriteOfInhabited___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_CloseableChannel_instAsyncWriteOfInhabited___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_CloseableChannel_instAsyncWriteOfInhabited___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_CloseableChannel_instAsyncWriteOfInhabited___redArg___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_CloseableChannel_instAsyncWriteOfInhabited___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_CloseableChannel_instAsyncWriteOfInhabited___redArg___lam__1___boxed, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Std_CloseableChannel_instToStringError___closed__0_value)} };
static const lean_object* l_Std_CloseableChannel_instAsyncWriteOfInhabited___redArg___closed__0 = (const lean_object*)&l_Std_CloseableChannel_instAsyncWriteOfInhabited___redArg___closed__0_value;
static const lean_closure_object l_Std_CloseableChannel_instAsyncWriteOfInhabited___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_CloseableChannel_instAsyncWriteOfInhabited___redArg___lam__0___boxed, .m_arity = 4, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Std_CloseableChannel_instAsyncWriteOfInhabited___redArg___closed__0_value)} };
static const lean_object* l_Std_CloseableChannel_instAsyncWriteOfInhabited___redArg___closed__1 = (const lean_object*)&l_Std_CloseableChannel_instAsyncWriteOfInhabited___redArg___closed__1_value;
static const lean_closure_object l_Std_CloseableChannel_instAsyncWriteOfInhabited___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_CloseableChannel_instAsyncWriteOfInhabited___redArg___lam__2___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_CloseableChannel_instAsyncWriteOfInhabited___redArg___closed__2 = (const lean_object*)&l_Std_CloseableChannel_instAsyncWriteOfInhabited___redArg___closed__2_value;
static lean_once_cell_t l_Std_CloseableChannel_instAsyncWriteOfInhabited___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_CloseableChannel_instAsyncWriteOfInhabited___redArg___closed__3;
static lean_once_cell_t l_Std_CloseableChannel_instAsyncWriteOfInhabited___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_CloseableChannel_instAsyncWriteOfInhabited___redArg___closed__4;
static lean_once_cell_t l_Std_CloseableChannel_instAsyncWriteOfInhabited___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_CloseableChannel_instAsyncWriteOfInhabited___redArg___closed__5;
LEAN_EXPORT lean_object* l_Std_CloseableChannel_instAsyncWriteOfInhabited___redArg();
LEAN_EXPORT lean_object* l_Std_CloseableChannel_instAsyncWriteOfInhabited___redArg___boxed(lean_object*);
static lean_once_cell_t l_Std_CloseableChannel_instAsyncWriteOfInhabited___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_CloseableChannel_instAsyncWriteOfInhabited___closed__0;
LEAN_EXPORT lean_object* l_Std_CloseableChannel_instAsyncWriteOfInhabited(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_CloseableChannel_instAsyncWriteOfInhabited___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_CloseableChannel_sync___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_CloseableChannel_sync___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_CloseableChannel_sync(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_CloseableChannel_sync___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_CloseableChannel_Sync_new___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_CloseableChannel_Sync_new___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_CloseableChannel_Sync_new(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_CloseableChannel_Sync_new___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_CloseableChannel_Sync_trySend___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_CloseableChannel_Sync_trySend___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_CloseableChannel_Sync_trySend(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_CloseableChannel_Sync_trySend___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_CloseableChannel_Sync_send___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_CloseableChannel_Sync_send___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_CloseableChannel_Sync_send(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_CloseableChannel_Sync_send___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_CloseableChannel_Sync_close___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_CloseableChannel_Sync_close___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_CloseableChannel_Sync_close(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_CloseableChannel_Sync_close___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_CloseableChannel_Sync_isClosed___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_CloseableChannel_Sync_isClosed___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_CloseableChannel_Sync_isClosed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_CloseableChannel_Sync_isClosed___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_CloseableChannel_Sync_tryRecv___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_CloseableChannel_Sync_tryRecv___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_CloseableChannel_Sync_tryRecv(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_CloseableChannel_Sync_tryRecv___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_CloseableChannel_Sync_recv___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_CloseableChannel_Sync_recv___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_CloseableChannel_Sync_recv(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_CloseableChannel_Sync_recv___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Sync_forIn___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Sync_forIn___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Sync_forIn___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Sync_forIn(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_CloseableChannel_Sync_instForInOfMonadOfMonadLiftTBaseIO___private__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_CloseableChannel_Sync_instForInOfMonadOfMonadLiftTBaseIO___private__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_CloseableChannel_Sync_instForInOfMonadOfMonadLiftTBaseIO___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_CloseableChannel_Sync_instForInOfMonadOfMonadLiftTBaseIO___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_CloseableChannel_Sync_instForInOfMonadOfMonadLiftTBaseIO(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Channel_new___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Channel_new___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Channel_new(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Channel_new___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_Channel_trySend___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Channel_trySend___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_Channel_trySend(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Channel_trySend___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_panic___at___00Std_Channel_send_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00Std_Channel_send_spec__0___closed__0;
LEAN_EXPORT lean_object* l_panic___at___00Std_Channel_send_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Std_Channel_send_spec__0___boxed(lean_object*, lean_object*);
static const lean_string_object l_Std_Channel_send___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "Std.Sync.Channel"};
static const lean_object* l_Std_Channel_send___redArg___lam__0___closed__0 = (const lean_object*)&l_Std_Channel_send___redArg___lam__0___closed__0_value;
static const lean_string_object l_Std_Channel_send___redArg___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "Std.Channel.send"};
static const lean_object* l_Std_Channel_send___redArg___lam__0___closed__1 = (const lean_object*)&l_Std_Channel_send___redArg___lam__0___closed__1_value;
static const lean_string_object l_Std_Channel_send___redArg___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "unreachable code has been reached"};
static const lean_object* l_Std_Channel_send___redArg___lam__0___closed__2 = (const lean_object*)&l_Std_Channel_send___redArg___lam__0___closed__2_value;
static lean_once_cell_t l_Std_Channel_send___redArg___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Channel_send___redArg___lam__0___closed__3;
LEAN_EXPORT lean_object* l_Std_Channel_send___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Std_Channel_send___redArg___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_Channel_send___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Channel_send___redArg___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Channel_send___redArg___closed__0 = (const lean_object*)&l_Std_Channel_send___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Channel_send___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Channel_send___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Channel_send(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Channel_send___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Channel_tryRecv___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Channel_tryRecv___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Channel_tryRecv(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Channel_tryRecv___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Std_Channel_recv___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "Std.Channel.recv"};
static const lean_object* l_Std_Channel_recv___redArg___lam__0___closed__0 = (const lean_object*)&l_Std_Channel_recv___redArg___lam__0___closed__0_value;
static lean_once_cell_t l_Std_Channel_recv___redArg___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Channel_recv___redArg___lam__0___closed__1;
LEAN_EXPORT lean_object* l_Std_Channel_recv___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Channel_recv___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Channel_recv___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Channel_recv___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Channel_recv(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Channel_recv___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Channel_recvSelector___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Std_Channel_recvSelector___redArg___lam__0___boxed(lean_object*, lean_object*);
static const lean_string_object l_Std_Channel_recvSelector___redArg___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "Init.Data.Option.BasicAux"};
static const lean_object* l_Std_Channel_recvSelector___redArg___lam__1___closed__0 = (const lean_object*)&l_Std_Channel_recvSelector___redArg___lam__1___closed__0_value;
static const lean_string_object l_Std_Channel_recvSelector___redArg___lam__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "Option.get!"};
static const lean_object* l_Std_Channel_recvSelector___redArg___lam__1___closed__1 = (const lean_object*)&l_Std_Channel_recvSelector___redArg___lam__1___closed__1_value;
static const lean_string_object l_Std_Channel_recvSelector___redArg___lam__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "value is none"};
static const lean_object* l_Std_Channel_recvSelector___redArg___lam__1___closed__2 = (const lean_object*)&l_Std_Channel_recvSelector___redArg___lam__1___closed__2_value;
static lean_once_cell_t l_Std_Channel_recvSelector___redArg___lam__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Channel_recvSelector___redArg___lam__1___closed__3;
LEAN_EXPORT lean_object* l_Std_Channel_recvSelector___redArg___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Channel_recvSelector___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Channel_recvSelector___redArg___lam__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Channel_recvSelector___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Channel_recvSelector___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Channel_recvSelector___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Channel_recvSelector___redArg___lam__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Channel_recvSelector___redArg___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Channel_recvSelector___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Channel_recvSelector(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Channel_forAsync___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Channel_forAsync___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Channel_forAsync___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Channel_forAsync___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Channel_forAsync(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Channel_forAsync___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Channel_instAsyncStreamOfInhabited___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Channel_instAsyncStreamOfInhabited___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Channel_instAsyncStreamOfInhabited(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Channel_instAsyncReadOfInhabited___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Std_Channel_instAsyncReadOfInhabited___redArg___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Channel_instAsyncReadOfInhabited___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Channel_instAsyncReadOfInhabited___redArg___lam__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Channel_instAsyncReadOfInhabited___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Channel_instAsyncReadOfInhabited___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Channel_instAsyncReadOfInhabited___redArg___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Channel_instAsyncReadOfInhabited___redArg___closed__0 = (const lean_object*)&l_Std_Channel_instAsyncReadOfInhabited___redArg___closed__0_value;
static const lean_closure_object l_Std_Channel_instAsyncReadOfInhabited___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Channel_instAsyncReadOfInhabited___redArg___lam__1___boxed, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Std_Channel_instAsyncReadOfInhabited___redArg___closed__0_value)} };
static const lean_object* l_Std_Channel_instAsyncReadOfInhabited___redArg___closed__1 = (const lean_object*)&l_Std_Channel_instAsyncReadOfInhabited___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_Std_Channel_instAsyncReadOfInhabited___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Channel_instAsyncReadOfInhabited(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Channel_instAsyncWriteOfInhabited___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Std_Channel_instAsyncWriteOfInhabited___redArg___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Channel_instAsyncWriteOfInhabited___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Channel_instAsyncWriteOfInhabited___redArg___lam__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Channel_instAsyncWriteOfInhabited___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Channel_instAsyncWriteOfInhabited___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Channel_instAsyncWriteOfInhabited___redArg___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Channel_instAsyncWriteOfInhabited___redArg___closed__0 = (const lean_object*)&l_Std_Channel_instAsyncWriteOfInhabited___redArg___closed__0_value;
static const lean_closure_object l_Std_Channel_instAsyncWriteOfInhabited___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Channel_instAsyncWriteOfInhabited___redArg___lam__1___boxed, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Std_Channel_instAsyncWriteOfInhabited___redArg___closed__0_value)} };
static const lean_object* l_Std_Channel_instAsyncWriteOfInhabited___redArg___closed__1 = (const lean_object*)&l_Std_Channel_instAsyncWriteOfInhabited___redArg___closed__1_value;
static const lean_closure_object l_Std_Channel_instAsyncWriteOfInhabited___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Channel_instAsyncWriteOfInhabited___redArg___lam__2___boxed, .m_arity = 4, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Std_Channel_instAsyncWriteOfInhabited___redArg___closed__1_value)} };
static const lean_object* l_Std_Channel_instAsyncWriteOfInhabited___redArg___closed__2 = (const lean_object*)&l_Std_Channel_instAsyncWriteOfInhabited___redArg___closed__2_value;
static lean_once_cell_t l_Std_Channel_instAsyncWriteOfInhabited___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Channel_instAsyncWriteOfInhabited___redArg___closed__3;
static lean_once_cell_t l_Std_Channel_instAsyncWriteOfInhabited___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Channel_instAsyncWriteOfInhabited___redArg___closed__4;
LEAN_EXPORT lean_object* l_Std_Channel_instAsyncWriteOfInhabited___redArg();
LEAN_EXPORT lean_object* l_Std_Channel_instAsyncWriteOfInhabited___redArg___boxed(lean_object*);
static lean_once_cell_t l_Std_Channel_instAsyncWriteOfInhabited___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Channel_instAsyncWriteOfInhabited___closed__0;
LEAN_EXPORT lean_object* l_Std_Channel_instAsyncWriteOfInhabited(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Channel_instAsyncWriteOfInhabited___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Channel_sync___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Channel_sync___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Channel_sync(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Channel_sync___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Channel_Sync_new___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Channel_Sync_new___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Channel_Sync_new(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Channel_Sync_new___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_Channel_Sync_trySend___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Channel_Sync_trySend___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_Channel_Sync_trySend(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Channel_Sync_trySend___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Channel_Sync_send___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Channel_Sync_send___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Channel_Sync_send(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Channel_Sync_send___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Channel_Sync_tryRecv___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Channel_Sync_tryRecv___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Channel_Sync_tryRecv(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Channel_Sync_tryRecv___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Channel_Sync_recv___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Channel_Sync_recv___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Channel_Sync_recv(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Channel_Sync_recv___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_Channel_Sync_forIn___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_Channel_Sync_forIn___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_Channel_Sync_forIn___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_Channel_Sync_forIn(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Channel_Sync_instForInOfInhabitedOfMonadOfMonadLiftTBaseIO___private__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Channel_Sync_instForInOfInhabitedOfMonadOfMonadLiftTBaseIO___private__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Channel_Sync_instForInOfInhabitedOfMonadOfMonadLiftTBaseIO___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Channel_Sync_instForInOfInhabitedOfMonadOfMonadLiftTBaseIO___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Channel_Sync_instForInOfInhabitedOfMonadOfMonadLiftTBaseIO(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_CloseableChannel_Error_ctorIdx(uint8_t v_x_1_){
_start:
{
if (v_x_1_ == 0)
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
LEAN_EXPORT lean_object* l_Std_CloseableChannel_Error_ctorIdx___boxed(lean_object* v_x_4_){
_start:
{
uint8_t v_x_boxed_5_; lean_object* v_res_6_; 
v_x_boxed_5_ = lean_unbox(v_x_4_);
v_res_6_ = l_Std_CloseableChannel_Error_ctorIdx(v_x_boxed_5_);
return v_res_6_;
}
}
LEAN_EXPORT lean_object* l_Std_CloseableChannel_Error_ctorElim___redArg(lean_object* v_k_7_){
_start:
{
lean_inc(v_k_7_);
return v_k_7_;
}
}
LEAN_EXPORT lean_object* l_Std_CloseableChannel_Error_ctorElim___redArg___boxed(lean_object* v_k_8_){
_start:
{
lean_object* v_res_9_; 
v_res_9_ = l_Std_CloseableChannel_Error_ctorElim___redArg(v_k_8_);
lean_dec(v_k_8_);
return v_res_9_;
}
}
LEAN_EXPORT lean_object* l_Std_CloseableChannel_Error_ctorElim(lean_object* v_motive_10_, lean_object* v_ctorIdx_11_, uint8_t v_t_12_, lean_object* v_h_13_, lean_object* v_k_14_){
_start:
{
lean_inc(v_k_14_);
return v_k_14_;
}
}
LEAN_EXPORT lean_object* l_Std_CloseableChannel_Error_ctorElim___boxed(lean_object* v_motive_15_, lean_object* v_ctorIdx_16_, lean_object* v_t_17_, lean_object* v_h_18_, lean_object* v_k_19_){
_start:
{
uint8_t v_t_boxed_20_; lean_object* v_res_21_; 
v_t_boxed_20_ = lean_unbox(v_t_17_);
v_res_21_ = l_Std_CloseableChannel_Error_ctorElim(v_motive_15_, v_ctorIdx_16_, v_t_boxed_20_, v_h_18_, v_k_19_);
lean_dec(v_k_19_);
lean_dec(v_ctorIdx_16_);
return v_res_21_;
}
}
LEAN_EXPORT lean_object* l_Std_CloseableChannel_Error_closed_elim___redArg(lean_object* v_closed_22_){
_start:
{
lean_inc(v_closed_22_);
return v_closed_22_;
}
}
LEAN_EXPORT lean_object* l_Std_CloseableChannel_Error_closed_elim___redArg___boxed(lean_object* v_closed_23_){
_start:
{
lean_object* v_res_24_; 
v_res_24_ = l_Std_CloseableChannel_Error_closed_elim___redArg(v_closed_23_);
lean_dec(v_closed_23_);
return v_res_24_;
}
}
LEAN_EXPORT lean_object* l_Std_CloseableChannel_Error_closed_elim(lean_object* v_motive_25_, uint8_t v_t_26_, lean_object* v_h_27_, lean_object* v_closed_28_){
_start:
{
lean_inc(v_closed_28_);
return v_closed_28_;
}
}
LEAN_EXPORT lean_object* l_Std_CloseableChannel_Error_closed_elim___boxed(lean_object* v_motive_29_, lean_object* v_t_30_, lean_object* v_h_31_, lean_object* v_closed_32_){
_start:
{
uint8_t v_t_boxed_33_; lean_object* v_res_34_; 
v_t_boxed_33_ = lean_unbox(v_t_30_);
v_res_34_ = l_Std_CloseableChannel_Error_closed_elim(v_motive_29_, v_t_boxed_33_, v_h_31_, v_closed_32_);
lean_dec(v_closed_32_);
return v_res_34_;
}
}
LEAN_EXPORT lean_object* l_Std_CloseableChannel_Error_alreadyClosed_elim___redArg(lean_object* v_alreadyClosed_35_){
_start:
{
lean_inc(v_alreadyClosed_35_);
return v_alreadyClosed_35_;
}
}
LEAN_EXPORT lean_object* l_Std_CloseableChannel_Error_alreadyClosed_elim___redArg___boxed(lean_object* v_alreadyClosed_36_){
_start:
{
lean_object* v_res_37_; 
v_res_37_ = l_Std_CloseableChannel_Error_alreadyClosed_elim___redArg(v_alreadyClosed_36_);
lean_dec(v_alreadyClosed_36_);
return v_res_37_;
}
}
LEAN_EXPORT lean_object* l_Std_CloseableChannel_Error_alreadyClosed_elim(lean_object* v_motive_38_, uint8_t v_t_39_, lean_object* v_h_40_, lean_object* v_alreadyClosed_41_){
_start:
{
lean_inc(v_alreadyClosed_41_);
return v_alreadyClosed_41_;
}
}
LEAN_EXPORT lean_object* l_Std_CloseableChannel_Error_alreadyClosed_elim___boxed(lean_object* v_motive_42_, lean_object* v_t_43_, lean_object* v_h_44_, lean_object* v_alreadyClosed_45_){
_start:
{
uint8_t v_t_boxed_46_; lean_object* v_res_47_; 
v_t_boxed_46_ = lean_unbox(v_t_43_);
v_res_47_ = l_Std_CloseableChannel_Error_alreadyClosed_elim(v_motive_42_, v_t_boxed_46_, v_h_44_, v_alreadyClosed_45_);
lean_dec(v_alreadyClosed_45_);
return v_res_47_;
}
}
static lean_object* _init_l_Std_CloseableChannel_instReprError_repr___closed__4(void){
_start:
{
lean_object* v___x_54_; lean_object* v___x_55_; 
v___x_54_ = lean_unsigned_to_nat(2u);
v___x_55_ = lean_nat_to_int(v___x_54_);
return v___x_55_;
}
}
static lean_object* _init_l_Std_CloseableChannel_instReprError_repr___closed__5(void){
_start:
{
lean_object* v___x_56_; lean_object* v___x_57_; 
v___x_56_ = lean_unsigned_to_nat(1u);
v___x_57_ = lean_nat_to_int(v___x_56_);
return v___x_57_;
}
}
LEAN_EXPORT lean_object* l_Std_CloseableChannel_instReprError_repr(uint8_t v_x_58_, lean_object* v_prec_59_){
_start:
{
lean_object* v___y_61_; lean_object* v___y_68_; 
if (v_x_58_ == 0)
{
lean_object* v___x_74_; uint8_t v___x_75_; 
v___x_74_ = lean_unsigned_to_nat(1024u);
v___x_75_ = lean_nat_dec_le(v___x_74_, v_prec_59_);
if (v___x_75_ == 0)
{
lean_object* v___x_76_; 
v___x_76_ = lean_obj_once(&l_Std_CloseableChannel_instReprError_repr___closed__4, &l_Std_CloseableChannel_instReprError_repr___closed__4_once, _init_l_Std_CloseableChannel_instReprError_repr___closed__4);
v___y_61_ = v___x_76_;
goto v___jp_60_;
}
else
{
lean_object* v___x_77_; 
v___x_77_ = lean_obj_once(&l_Std_CloseableChannel_instReprError_repr___closed__5, &l_Std_CloseableChannel_instReprError_repr___closed__5_once, _init_l_Std_CloseableChannel_instReprError_repr___closed__5);
v___y_61_ = v___x_77_;
goto v___jp_60_;
}
}
else
{
lean_object* v___x_78_; uint8_t v___x_79_; 
v___x_78_ = lean_unsigned_to_nat(1024u);
v___x_79_ = lean_nat_dec_le(v___x_78_, v_prec_59_);
if (v___x_79_ == 0)
{
lean_object* v___x_80_; 
v___x_80_ = lean_obj_once(&l_Std_CloseableChannel_instReprError_repr___closed__4, &l_Std_CloseableChannel_instReprError_repr___closed__4_once, _init_l_Std_CloseableChannel_instReprError_repr___closed__4);
v___y_68_ = v___x_80_;
goto v___jp_67_;
}
else
{
lean_object* v___x_81_; 
v___x_81_ = lean_obj_once(&l_Std_CloseableChannel_instReprError_repr___closed__5, &l_Std_CloseableChannel_instReprError_repr___closed__5_once, _init_l_Std_CloseableChannel_instReprError_repr___closed__5);
v___y_68_ = v___x_81_;
goto v___jp_67_;
}
}
v___jp_60_:
{
lean_object* v___x_62_; lean_object* v___x_63_; uint8_t v___x_64_; lean_object* v___x_65_; lean_object* v___x_66_; 
v___x_62_ = ((lean_object*)(l_Std_CloseableChannel_instReprError_repr___closed__1));
lean_inc(v___y_61_);
v___x_63_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_63_, 0, v___y_61_);
lean_ctor_set(v___x_63_, 1, v___x_62_);
v___x_64_ = 0;
v___x_65_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_65_, 0, v___x_63_);
lean_ctor_set_uint8(v___x_65_, sizeof(void*)*1, v___x_64_);
v___x_66_ = l_Repr_addAppParen(v___x_65_, v_prec_59_);
return v___x_66_;
}
v___jp_67_:
{
lean_object* v___x_69_; lean_object* v___x_70_; uint8_t v___x_71_; lean_object* v___x_72_; lean_object* v___x_73_; 
v___x_69_ = ((lean_object*)(l_Std_CloseableChannel_instReprError_repr___closed__3));
lean_inc(v___y_68_);
v___x_70_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_70_, 0, v___y_68_);
lean_ctor_set(v___x_70_, 1, v___x_69_);
v___x_71_ = 0;
v___x_72_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_72_, 0, v___x_70_);
lean_ctor_set_uint8(v___x_72_, sizeof(void*)*1, v___x_71_);
v___x_73_ = l_Repr_addAppParen(v___x_72_, v_prec_59_);
return v___x_73_;
}
}
}
LEAN_EXPORT lean_object* l_Std_CloseableChannel_instReprError_repr___boxed(lean_object* v_x_82_, lean_object* v_prec_83_){
_start:
{
uint8_t v_x_117__boxed_84_; lean_object* v_res_85_; 
v_x_117__boxed_84_ = lean_unbox(v_x_82_);
v_res_85_ = l_Std_CloseableChannel_instReprError_repr(v_x_117__boxed_84_, v_prec_83_);
lean_dec(v_prec_83_);
return v_res_85_;
}
}
LEAN_EXPORT uint8_t l_Std_CloseableChannel_Error_ofNat(lean_object* v_n_88_){
_start:
{
lean_object* v___x_89_; uint8_t v___x_90_; 
v___x_89_ = lean_unsigned_to_nat(0u);
v___x_90_ = lean_nat_dec_le(v_n_88_, v___x_89_);
if (v___x_90_ == 0)
{
uint8_t v___x_91_; 
v___x_91_ = 1;
return v___x_91_;
}
else
{
uint8_t v___x_92_; 
v___x_92_ = 0;
return v___x_92_;
}
}
}
LEAN_EXPORT lean_object* l_Std_CloseableChannel_Error_ofNat___boxed(lean_object* v_n_93_){
_start:
{
uint8_t v_res_94_; lean_object* v_r_95_; 
v_res_94_ = l_Std_CloseableChannel_Error_ofNat(v_n_93_);
lean_dec(v_n_93_);
v_r_95_ = lean_box(v_res_94_);
return v_r_95_;
}
}
LEAN_EXPORT uint8_t l_Std_CloseableChannel_instDecidableEqError(uint8_t v_x_96_, uint8_t v_y_97_){
_start:
{
lean_object* v___x_98_; lean_object* v___x_99_; uint8_t v___x_100_; 
v___x_98_ = l_Std_CloseableChannel_Error_ctorIdx(v_x_96_);
v___x_99_ = l_Std_CloseableChannel_Error_ctorIdx(v_y_97_);
v___x_100_ = lean_nat_dec_eq(v___x_98_, v___x_99_);
lean_dec(v___x_99_);
lean_dec(v___x_98_);
return v___x_100_;
}
}
LEAN_EXPORT lean_object* l_Std_CloseableChannel_instDecidableEqError___boxed(lean_object* v_x_101_, lean_object* v_y_102_){
_start:
{
uint8_t v_x_20__boxed_103_; uint8_t v_y_21__boxed_104_; uint8_t v_res_105_; lean_object* v_r_106_; 
v_x_20__boxed_103_ = lean_unbox(v_x_101_);
v_y_21__boxed_104_ = lean_unbox(v_y_102_);
v_res_105_ = l_Std_CloseableChannel_instDecidableEqError(v_x_20__boxed_103_, v_y_21__boxed_104_);
v_r_106_ = lean_box(v_res_105_);
return v_r_106_;
}
}
LEAN_EXPORT uint64_t l_Std_CloseableChannel_instHashableError_hash(uint8_t v_x_107_){
_start:
{
if (v_x_107_ == 0)
{
uint64_t v___x_108_; 
v___x_108_ = 0ULL;
return v___x_108_;
}
else
{
uint64_t v___x_109_; 
v___x_109_ = 1ULL;
return v___x_109_;
}
}
}
LEAN_EXPORT lean_object* l_Std_CloseableChannel_instHashableError_hash___boxed(lean_object* v_x_110_){
_start:
{
uint8_t v_x_28__boxed_111_; uint64_t v_res_112_; lean_object* v_r_113_; 
v_x_28__boxed_111_ = lean_unbox(v_x_110_);
v_res_112_ = l_Std_CloseableChannel_instHashableError_hash(v_x_28__boxed_111_);
v_r_113_ = lean_box_uint64(v_res_112_);
return v_r_113_;
}
}
LEAN_EXPORT lean_object* l_Std_CloseableChannel_instToStringError___lam__0(uint8_t v_x_118_){
_start:
{
if (v_x_118_ == 0)
{
lean_object* v___x_119_; 
v___x_119_ = ((lean_object*)(l_Std_CloseableChannel_instToStringError___lam__0___closed__0));
return v___x_119_;
}
else
{
lean_object* v___x_120_; 
v___x_120_ = ((lean_object*)(l_Std_CloseableChannel_instToStringError___lam__0___closed__1));
return v___x_120_;
}
}
}
LEAN_EXPORT lean_object* l_Std_CloseableChannel_instToStringError___lam__0___boxed(lean_object* v_x_121_){
_start:
{
uint8_t v_x_26__boxed_122_; lean_object* v_res_123_; 
v_x_26__boxed_122_ = lean_unbox(v_x_121_);
v_res_123_ = l_Std_CloseableChannel_instToStringError___lam__0(v_x_26__boxed_122_);
return v_res_123_;
}
}
LEAN_EXPORT lean_object* l_Std_CloseableChannel_instMonadLiftEIOErrorIO___lam__0(lean_object* v_00_u03b1_130_, lean_object* v_x_131_){
_start:
{
lean_object* v___x_133_; 
v___x_133_ = lean_apply_1(v_x_131_, lean_box(0));
if (lean_obj_tag(v___x_133_) == 0)
{
lean_object* v_a_134_; lean_object* v___x_136_; uint8_t v_isShared_137_; uint8_t v_isSharedCheck_141_; 
v_a_134_ = lean_ctor_get(v___x_133_, 0);
v_isSharedCheck_141_ = !lean_is_exclusive(v___x_133_);
if (v_isSharedCheck_141_ == 0)
{
v___x_136_ = v___x_133_;
v_isShared_137_ = v_isSharedCheck_141_;
goto v_resetjp_135_;
}
else
{
lean_inc(v_a_134_);
lean_dec(v___x_133_);
v___x_136_ = lean_box(0);
v_isShared_137_ = v_isSharedCheck_141_;
goto v_resetjp_135_;
}
v_resetjp_135_:
{
lean_object* v___x_139_; 
if (v_isShared_137_ == 0)
{
v___x_139_ = v___x_136_;
goto v_reusejp_138_;
}
else
{
lean_object* v_reuseFailAlloc_140_; 
v_reuseFailAlloc_140_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_140_, 0, v_a_134_);
v___x_139_ = v_reuseFailAlloc_140_;
goto v_reusejp_138_;
}
v_reusejp_138_:
{
return v___x_139_;
}
}
}
else
{
lean_object* v_a_142_; lean_object* v___x_144_; uint8_t v_isShared_145_; uint8_t v_isSharedCheck_155_; 
v_a_142_ = lean_ctor_get(v___x_133_, 0);
v_isSharedCheck_155_ = !lean_is_exclusive(v___x_133_);
if (v_isSharedCheck_155_ == 0)
{
v___x_144_ = v___x_133_;
v_isShared_145_ = v_isSharedCheck_155_;
goto v_resetjp_143_;
}
else
{
lean_inc(v_a_142_);
lean_dec(v___x_133_);
v___x_144_ = lean_box(0);
v_isShared_145_ = v_isSharedCheck_155_;
goto v_resetjp_143_;
}
v_resetjp_143_:
{
uint8_t v___x_146_; 
v___x_146_ = lean_unbox(v_a_142_);
lean_dec(v_a_142_);
if (v___x_146_ == 0)
{
lean_object* v___x_147_; lean_object* v___x_149_; 
v___x_147_ = ((lean_object*)(l_Std_CloseableChannel_instMonadLiftEIOErrorIO___lam__0___closed__0));
if (v_isShared_145_ == 0)
{
lean_ctor_set(v___x_144_, 0, v___x_147_);
v___x_149_ = v___x_144_;
goto v_reusejp_148_;
}
else
{
lean_object* v_reuseFailAlloc_150_; 
v_reuseFailAlloc_150_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_150_, 0, v___x_147_);
v___x_149_ = v_reuseFailAlloc_150_;
goto v_reusejp_148_;
}
v_reusejp_148_:
{
return v___x_149_;
}
}
else
{
lean_object* v___x_151_; lean_object* v___x_153_; 
v___x_151_ = ((lean_object*)(l_Std_CloseableChannel_instMonadLiftEIOErrorIO___lam__0___closed__1));
if (v_isShared_145_ == 0)
{
lean_ctor_set(v___x_144_, 0, v___x_151_);
v___x_153_ = v___x_144_;
goto v_reusejp_152_;
}
else
{
lean_object* v_reuseFailAlloc_154_; 
v_reuseFailAlloc_154_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_154_, 0, v___x_151_);
v___x_153_ = v_reuseFailAlloc_154_;
goto v_reusejp_152_;
}
v_reusejp_152_:
{
return v___x_153_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_CloseableChannel_instMonadLiftEIOErrorIO___lam__0___boxed(lean_object* v_00_u03b1_156_, lean_object* v_x_157_, lean_object* v___y_158_){
_start:
{
lean_object* v_res_159_; 
v_res_159_ = l_Std_CloseableChannel_instMonadLiftEIOErrorIO___lam__0(v_00_u03b1_156_, v_x_157_);
return v_res_159_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Consumer_ctorIdx___redArg(lean_object* v_x_162_){
_start:
{
if (lean_obj_tag(v_x_162_) == 0)
{
lean_object* v___x_163_; 
v___x_163_ = lean_unsigned_to_nat(0u);
return v___x_163_;
}
else
{
lean_object* v___x_164_; 
v___x_164_ = lean_unsigned_to_nat(1u);
return v___x_164_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Consumer_ctorIdx___redArg___boxed(lean_object* v_x_165_){
_start:
{
lean_object* v_res_166_; 
v_res_166_ = l___private_Std_Sync_Channel_0__Std_CloseableChannel_Consumer_ctorIdx___redArg(v_x_165_);
lean_dec_ref(v_x_165_);
return v_res_166_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Consumer_ctorIdx(lean_object* v_00_u03b1_167_, lean_object* v_x_168_){
_start:
{
lean_object* v___x_169_; 
v___x_169_ = l___private_Std_Sync_Channel_0__Std_CloseableChannel_Consumer_ctorIdx___redArg(v_x_168_);
return v___x_169_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Consumer_ctorIdx___boxed(lean_object* v_00_u03b1_170_, lean_object* v_x_171_){
_start:
{
lean_object* v_res_172_; 
v_res_172_ = l___private_Std_Sync_Channel_0__Std_CloseableChannel_Consumer_ctorIdx(v_00_u03b1_170_, v_x_171_);
lean_dec_ref(v_x_171_);
return v_res_172_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Consumer_ctorElim___redArg(lean_object* v_t_173_, lean_object* v_k_174_){
_start:
{
if (lean_obj_tag(v_t_173_) == 0)
{
lean_object* v_promise_175_; lean_object* v___x_176_; 
v_promise_175_ = lean_ctor_get(v_t_173_, 0);
lean_inc(v_promise_175_);
lean_dec_ref_known(v_t_173_, 1);
v___x_176_ = lean_apply_1(v_k_174_, v_promise_175_);
return v___x_176_;
}
else
{
lean_object* v_finished_177_; lean_object* v___x_178_; 
v_finished_177_ = lean_ctor_get(v_t_173_, 0);
lean_inc_ref(v_finished_177_);
lean_dec_ref_known(v_t_173_, 1);
v___x_178_ = lean_apply_1(v_k_174_, v_finished_177_);
return v___x_178_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Consumer_ctorElim(lean_object* v_00_u03b1_179_, lean_object* v_motive_180_, lean_object* v_ctorIdx_181_, lean_object* v_t_182_, lean_object* v_h_183_, lean_object* v_k_184_){
_start:
{
lean_object* v___x_185_; 
v___x_185_ = l___private_Std_Sync_Channel_0__Std_CloseableChannel_Consumer_ctorElim___redArg(v_t_182_, v_k_184_);
return v___x_185_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Consumer_ctorElim___boxed(lean_object* v_00_u03b1_186_, lean_object* v_motive_187_, lean_object* v_ctorIdx_188_, lean_object* v_t_189_, lean_object* v_h_190_, lean_object* v_k_191_){
_start:
{
lean_object* v_res_192_; 
v_res_192_ = l___private_Std_Sync_Channel_0__Std_CloseableChannel_Consumer_ctorElim(v_00_u03b1_186_, v_motive_187_, v_ctorIdx_188_, v_t_189_, v_h_190_, v_k_191_);
lean_dec(v_ctorIdx_188_);
return v_res_192_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Consumer_normal_elim___redArg(lean_object* v_t_193_, lean_object* v_normal_194_){
_start:
{
lean_object* v___x_195_; 
v___x_195_ = l___private_Std_Sync_Channel_0__Std_CloseableChannel_Consumer_ctorElim___redArg(v_t_193_, v_normal_194_);
return v___x_195_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Consumer_normal_elim(lean_object* v_00_u03b1_196_, lean_object* v_motive_197_, lean_object* v_t_198_, lean_object* v_h_199_, lean_object* v_normal_200_){
_start:
{
lean_object* v___x_201_; 
v___x_201_ = l___private_Std_Sync_Channel_0__Std_CloseableChannel_Consumer_ctorElim___redArg(v_t_198_, v_normal_200_);
return v___x_201_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Consumer_select_elim___redArg(lean_object* v_t_202_, lean_object* v_select_203_){
_start:
{
lean_object* v___x_204_; 
v___x_204_ = l___private_Std_Sync_Channel_0__Std_CloseableChannel_Consumer_ctorElim___redArg(v_t_202_, v_select_203_);
return v___x_204_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Consumer_select_elim(lean_object* v_00_u03b1_205_, lean_object* v_motive_206_, lean_object* v_t_207_, lean_object* v_h_208_, lean_object* v_select_209_){
_start:
{
lean_object* v___x_210_; 
v___x_210_ = l___private_Std_Sync_Channel_0__Std_CloseableChannel_Consumer_ctorElim___redArg(v_t_207_, v_select_209_);
return v___x_210_;
}
}
LEAN_EXPORT uint8_t l_Std_Async_Waiter_race___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Consumer_resolve_spec__0___redArg(lean_object* v_x_211_, lean_object* v_w_212_, lean_object* v_lose_213_){
_start:
{
lean_object* v_finished_215_; lean_object* v_promise_216_; lean_object* v___x_217_; uint8_t v___y_219_; uint8_t v___x_227_; 
v_finished_215_ = lean_ctor_get(v_w_212_, 0);
v_promise_216_ = lean_ctor_get(v_w_212_, 1);
v___x_217_ = lean_st_ref_take(v_finished_215_);
v___x_227_ = lean_unbox(v___x_217_);
lean_dec(v___x_217_);
if (v___x_227_ == 0)
{
uint8_t v___x_228_; 
v___x_228_ = 1;
v___y_219_ = v___x_228_;
goto v___jp_218_;
}
else
{
uint8_t v___x_229_; 
v___x_229_ = 0;
v___y_219_ = v___x_229_;
goto v___jp_218_;
}
v___jp_218_:
{
uint8_t v___x_220_; lean_object* v___x_221_; lean_object* v___x_222_; 
v___x_220_ = 1;
v___x_221_ = lean_box(v___x_220_);
v___x_222_ = lean_st_ref_put(v_finished_215_, v___x_221_);
if (v___y_219_ == 0)
{
lean_object* v___x_223_; uint8_t v___x_224_; 
lean_dec(v_x_211_);
v___x_223_ = lean_apply_1(v_lose_213_, lean_box(0));
v___x_224_ = lean_unbox(v___x_223_);
return v___x_224_;
}
else
{
lean_object* v___x_225_; lean_object* v___x_226_; 
lean_dec_ref(v_lose_213_);
v___x_225_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_225_, 0, v_x_211_);
v___x_226_ = lean_io_promise_resolve(v___x_225_, v_promise_216_);
return v___y_219_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_Waiter_race___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Consumer_resolve_spec__0___redArg___boxed(lean_object* v_x_230_, lean_object* v_w_231_, lean_object* v_lose_232_, lean_object* v___y_233_){
_start:
{
uint8_t v_res_234_; lean_object* v_r_235_; 
v_res_234_ = l_Std_Async_Waiter_race___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Consumer_resolve_spec__0___redArg(v_x_230_, v_w_231_, v_lose_232_);
lean_dec_ref(v_w_231_);
v_r_235_ = lean_box(v_res_234_);
return v_r_235_;
}
}
LEAN_EXPORT uint8_t l_Std_Async_Waiter_race___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Consumer_resolve_spec__0(lean_object* v_00_u03b1_236_, lean_object* v_x_237_, lean_object* v_w_238_, lean_object* v_lose_239_){
_start:
{
uint8_t v___x_241_; 
v___x_241_ = l_Std_Async_Waiter_race___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Consumer_resolve_spec__0___redArg(v_x_237_, v_w_238_, v_lose_239_);
return v___x_241_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Waiter_race___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Consumer_resolve_spec__0___boxed(lean_object* v_00_u03b1_242_, lean_object* v_x_243_, lean_object* v_w_244_, lean_object* v_lose_245_, lean_object* v___y_246_){
_start:
{
uint8_t v_res_247_; lean_object* v_r_248_; 
v_res_247_ = l_Std_Async_Waiter_race___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Consumer_resolve_spec__0(v_00_u03b1_242_, v_x_243_, v_w_244_, v_lose_245_);
lean_dec_ref(v_w_244_);
v_r_248_ = lean_box(v_res_247_);
return v_r_248_;
}
}
LEAN_EXPORT uint8_t l___private_Std_Sync_Channel_0__Std_CloseableChannel_Consumer_resolve___redArg___lam__0(uint8_t v___x_249_){
_start:
{
return v___x_249_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Consumer_resolve___redArg___lam__0___boxed(lean_object* v___x_251_, lean_object* v___y_252_){
_start:
{
uint8_t v___x_1174__boxed_253_; uint8_t v_res_254_; lean_object* v_r_255_; 
v___x_1174__boxed_253_ = lean_unbox(v___x_251_);
v_res_254_ = l___private_Std_Sync_Channel_0__Std_CloseableChannel_Consumer_resolve___redArg___lam__0(v___x_1174__boxed_253_);
v_r_255_ = lean_box(v_res_254_);
return v_r_255_;
}
}
LEAN_EXPORT uint8_t l___private_Std_Sync_Channel_0__Std_CloseableChannel_Consumer_resolve___redArg(lean_object* v_c_259_, lean_object* v_x_260_){
_start:
{
if (lean_obj_tag(v_c_259_) == 0)
{
lean_object* v_promise_262_; lean_object* v___x_263_; uint8_t v___x_264_; 
v_promise_262_ = lean_ctor_get(v_c_259_, 0);
v___x_263_ = lean_io_promise_resolve(v_x_260_, v_promise_262_);
v___x_264_ = 1;
return v___x_264_;
}
else
{
lean_object* v_finished_265_; lean_object* v_lose_266_; uint8_t v___x_267_; 
v_finished_265_ = lean_ctor_get(v_c_259_, 0);
v_lose_266_ = ((lean_object*)(l___private_Std_Sync_Channel_0__Std_CloseableChannel_Consumer_resolve___redArg___closed__0));
v___x_267_ = l_Std_Async_Waiter_race___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Consumer_resolve_spec__0___redArg(v_x_260_, v_finished_265_, v_lose_266_);
return v___x_267_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Consumer_resolve___redArg___boxed(lean_object* v_c_268_, lean_object* v_x_269_, lean_object* v___y_270_){
_start:
{
uint8_t v_res_271_; lean_object* v_r_272_; 
v_res_271_ = l___private_Std_Sync_Channel_0__Std_CloseableChannel_Consumer_resolve___redArg(v_c_268_, v_x_269_);
lean_dec_ref(v_c_268_);
v_r_272_ = lean_box(v_res_271_);
return v_r_272_;
}
}
LEAN_EXPORT uint8_t l___private_Std_Sync_Channel_0__Std_CloseableChannel_Consumer_resolve(lean_object* v_00_u03b1_273_, lean_object* v_c_274_, lean_object* v_x_275_){
_start:
{
uint8_t v___x_277_; 
v___x_277_ = l___private_Std_Sync_Channel_0__Std_CloseableChannel_Consumer_resolve___redArg(v_c_274_, v_x_275_);
return v___x_277_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Consumer_resolve___boxed(lean_object* v_00_u03b1_278_, lean_object* v_c_279_, lean_object* v_x_280_, lean_object* v___y_281_){
_start:
{
uint8_t v_res_282_; lean_object* v_r_283_; 
v_res_282_ = l___private_Std_Sync_Channel_0__Std_CloseableChannel_Consumer_resolve(v_00_u03b1_278_, v_c_279_, v_x_280_);
lean_dec_ref(v_c_279_);
v_r_283_ = lean_box(v_res_282_);
return v_r_283_;
}
}
static lean_object* _init_l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_new___redArg___closed__0(void){
_start:
{
lean_object* v___x_284_; 
v___x_284_ = l_Std_Queue_empty___redArg();
return v___x_284_;
}
}
static lean_object* _init_l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_new___redArg___closed__1(void){
_start:
{
uint8_t v___x_285_; lean_object* v___x_286_; lean_object* v___x_287_; 
v___x_285_ = 0;
v___x_286_ = lean_obj_once(&l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_new___redArg___closed__0, &l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_new___redArg___closed__0_once, _init_l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_new___redArg___closed__0);
v___x_287_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_287_, 0, v___x_286_);
lean_ctor_set(v___x_287_, 1, v___x_286_);
lean_ctor_set_uint8(v___x_287_, sizeof(void*)*2, v___x_285_);
return v___x_287_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_new___redArg(){
_start:
{
lean_object* v___x_289_; lean_object* v___x_290_; 
v___x_289_ = lean_obj_once(&l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_new___redArg___closed__1, &l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_new___redArg___closed__1_once, _init_l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_new___redArg___closed__1);
v___x_290_ = l_Std_Mutex_new___redArg(v___x_289_);
return v___x_290_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_new___redArg___boxed(lean_object* v___y_291_){
_start:
{
lean_object* v_res_292_; 
v_res_292_ = l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_new___redArg();
return v_res_292_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_new(lean_object* v_00_u03b1_293_){
_start:
{
lean_object* v___x_295_; 
v___x_295_ = l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_new___redArg();
return v___x_295_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_new___boxed(lean_object* v_00_u03b1_296_, lean_object* v___y_297_){
_start:
{
lean_object* v_res_298_; 
v_res_298_ = l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_new(v_00_u03b1_296_);
return v_res_298_;
}
}
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_trySend_spec__1___redArg(lean_object* v_mutex_299_, lean_object* v_k_300_){
_start:
{
lean_object* v_ref_302_; lean_object* v_mutex_303_; lean_object* v___x_304_; lean_object* v___x_305_; lean_object* v___x_306_; 
v_ref_302_ = lean_ctor_get(v_mutex_299_, 0);
lean_inc(v_ref_302_);
v_mutex_303_ = lean_ctor_get(v_mutex_299_, 1);
lean_inc(v_mutex_303_);
lean_dec_ref(v_mutex_299_);
v___x_304_ = lean_io_basemutex_lock(v_mutex_303_);
v___x_305_ = lean_apply_2(v_k_300_, v_ref_302_, lean_box(0));
v___x_306_ = lean_io_basemutex_unlock(v_mutex_303_);
lean_dec(v_mutex_303_);
return v___x_305_;
}
}
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_trySend_spec__1___redArg___boxed(lean_object* v_mutex_307_, lean_object* v_k_308_, lean_object* v___y_309_){
_start:
{
lean_object* v_res_310_; 
v_res_310_ = l_Std_Mutex_atomically___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_trySend_spec__1___redArg(v_mutex_307_, v_k_308_);
return v_res_310_;
}
}
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_trySend_spec__1(lean_object* v_00_u03b1_311_, lean_object* v_00_u03b2_312_, lean_object* v_mutex_313_, lean_object* v_k_314_){
_start:
{
lean_object* v___x_316_; 
v___x_316_ = l_Std_Mutex_atomically___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_trySend_spec__1___redArg(v_mutex_313_, v_k_314_);
return v___x_316_;
}
}
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_trySend_spec__1___boxed(lean_object* v_00_u03b1_317_, lean_object* v_00_u03b2_318_, lean_object* v_mutex_319_, lean_object* v_k_320_, lean_object* v___y_321_){
_start:
{
lean_object* v_res_322_; 
v_res_322_ = l_Std_Mutex_atomically___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_trySend_spec__1(v_00_u03b1_317_, v_00_u03b2_318_, v_mutex_319_, v_k_320_);
return v_res_322_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_trySend_spec__0___redArg(lean_object* v_v_323_, lean_object* v___y_324_){
_start:
{
lean_object* v___x_326_; lean_object* v___x_327_; lean_object* v_values_328_; lean_object* v_consumers_329_; uint8_t v_closed_330_; lean_object* v___x_332_; uint8_t v_isShared_333_; uint8_t v_isSharedCheck_356_; 
v___x_326_ = lean_box(0);
v___x_327_ = lean_st_ref_get(v___y_324_);
v_values_328_ = lean_ctor_get(v___x_327_, 0);
v_consumers_329_ = lean_ctor_get(v___x_327_, 1);
v_closed_330_ = lean_ctor_get_uint8(v___x_327_, sizeof(void*)*2);
v_isSharedCheck_356_ = !lean_is_exclusive(v___x_327_);
if (v_isSharedCheck_356_ == 0)
{
v___x_332_ = v___x_327_;
v_isShared_333_ = v_isSharedCheck_356_;
goto v_resetjp_331_;
}
else
{
lean_inc(v_consumers_329_);
lean_inc(v_values_328_);
lean_dec(v___x_327_);
v___x_332_ = lean_box(0);
v_isShared_333_ = v_isSharedCheck_356_;
goto v_resetjp_331_;
}
v_resetjp_331_:
{
lean_object* v___x_334_; 
lean_inc_ref(v_consumers_329_);
v___x_334_ = l_Std_Queue_dequeue_x3f___redArg(v_consumers_329_);
if (lean_obj_tag(v___x_334_) == 1)
{
lean_object* v_val_335_; lean_object* v___x_337_; uint8_t v_isShared_338_; uint8_t v_isSharedCheck_350_; 
lean_dec_ref(v_consumers_329_);
v_val_335_ = lean_ctor_get(v___x_334_, 0);
v_isSharedCheck_350_ = !lean_is_exclusive(v___x_334_);
if (v_isSharedCheck_350_ == 0)
{
v___x_337_ = v___x_334_;
v_isShared_338_ = v_isSharedCheck_350_;
goto v_resetjp_336_;
}
else
{
lean_inc(v_val_335_);
lean_dec(v___x_334_);
v___x_337_ = lean_box(0);
v_isShared_338_ = v_isSharedCheck_350_;
goto v_resetjp_336_;
}
v_resetjp_336_:
{
lean_object* v_fst_339_; lean_object* v_snd_340_; lean_object* v___x_342_; 
v_fst_339_ = lean_ctor_get(v_val_335_, 0);
lean_inc(v_fst_339_);
v_snd_340_ = lean_ctor_get(v_val_335_, 1);
lean_inc(v_snd_340_);
lean_dec(v_val_335_);
lean_inc(v_v_323_);
if (v_isShared_338_ == 0)
{
lean_ctor_set(v___x_337_, 0, v_v_323_);
v___x_342_ = v___x_337_;
goto v_reusejp_341_;
}
else
{
lean_object* v_reuseFailAlloc_349_; 
v_reuseFailAlloc_349_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_349_, 0, v_v_323_);
v___x_342_ = v_reuseFailAlloc_349_;
goto v_reusejp_341_;
}
v_reusejp_341_:
{
uint8_t v___x_343_; lean_object* v___x_345_; 
v___x_343_ = l___private_Std_Sync_Channel_0__Std_CloseableChannel_Consumer_resolve___redArg(v_fst_339_, v___x_342_);
lean_dec(v_fst_339_);
if (v_isShared_333_ == 0)
{
lean_ctor_set(v___x_332_, 1, v_snd_340_);
v___x_345_ = v___x_332_;
goto v_reusejp_344_;
}
else
{
lean_object* v_reuseFailAlloc_348_; 
v_reuseFailAlloc_348_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v_reuseFailAlloc_348_, 0, v_values_328_);
lean_ctor_set(v_reuseFailAlloc_348_, 1, v_snd_340_);
lean_ctor_set_uint8(v_reuseFailAlloc_348_, sizeof(void*)*2, v_closed_330_);
v___x_345_ = v_reuseFailAlloc_348_;
goto v_reusejp_344_;
}
v_reusejp_344_:
{
lean_object* v___x_346_; 
v___x_346_ = lean_st_ref_swap(v___y_324_, v___x_345_);
lean_dec(v___x_346_);
if (v___x_343_ == 0)
{
goto _start;
}
else
{
lean_dec(v_v_323_);
return v___x_326_;
}
}
}
}
}
else
{
lean_object* v___x_351_; lean_object* v___x_353_; 
lean_dec(v___x_334_);
v___x_351_ = l_Std_Queue_enqueue___redArg(v_v_323_, v_values_328_);
if (v_isShared_333_ == 0)
{
lean_ctor_set(v___x_332_, 0, v___x_351_);
v___x_353_ = v___x_332_;
goto v_reusejp_352_;
}
else
{
lean_object* v_reuseFailAlloc_355_; 
v_reuseFailAlloc_355_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v_reuseFailAlloc_355_, 0, v___x_351_);
lean_ctor_set(v_reuseFailAlloc_355_, 1, v_consumers_329_);
lean_ctor_set_uint8(v_reuseFailAlloc_355_, sizeof(void*)*2, v_closed_330_);
v___x_353_ = v_reuseFailAlloc_355_;
goto v_reusejp_352_;
}
v_reusejp_352_:
{
lean_object* v___x_354_; 
v___x_354_ = lean_st_ref_swap(v___y_324_, v___x_353_);
lean_dec(v___x_354_);
return v___x_326_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_trySend_spec__0___redArg___boxed(lean_object* v_v_357_, lean_object* v___y_358_, lean_object* v___y_359_){
_start:
{
lean_object* v_res_360_; 
v_res_360_ = l___private_Init_While_0__repeatM_erased___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_trySend_spec__0___redArg(v_v_357_, v___y_358_);
lean_dec(v___y_358_);
return v_res_360_;
}
}
LEAN_EXPORT uint8_t l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_trySend___redArg___lam__0(lean_object* v_v_361_, lean_object* v___y_362_){
_start:
{
lean_object* v___x_364_; uint8_t v_closed_365_; 
v___x_364_ = lean_st_ref_get(v___y_362_);
v_closed_365_ = lean_ctor_get_uint8(v___x_364_, sizeof(void*)*2);
lean_dec(v___x_364_);
if (v_closed_365_ == 0)
{
uint8_t v___x_366_; lean_object* v___x_367_; 
v___x_366_ = 1;
v___x_367_ = l___private_Init_While_0__repeatM_erased___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_trySend_spec__0___redArg(v_v_361_, v___y_362_);
return v___x_366_;
}
else
{
uint8_t v___x_368_; 
lean_dec(v_v_361_);
v___x_368_ = 0;
return v___x_368_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_trySend___redArg___lam__0___boxed(lean_object* v_v_369_, lean_object* v___y_370_, lean_object* v___y_371_){
_start:
{
uint8_t v_res_372_; lean_object* v_r_373_; 
v_res_372_ = l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_trySend___redArg___lam__0(v_v_369_, v___y_370_);
lean_dec(v___y_370_);
v_r_373_ = lean_box(v_res_372_);
return v_r_373_;
}
}
LEAN_EXPORT uint8_t l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_trySend___redArg(lean_object* v_ch_374_, lean_object* v_v_375_){
_start:
{
lean_object* v___f_377_; lean_object* v___x_378_; uint8_t v___x_379_; 
v___f_377_ = lean_alloc_closure((void*)(l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_trySend___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_377_, 0, v_v_375_);
v___x_378_ = l_Std_Mutex_atomically___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_trySend_spec__1___redArg(v_ch_374_, v___f_377_);
v___x_379_ = lean_unbox(v___x_378_);
lean_dec(v___x_378_);
return v___x_379_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_trySend___redArg___boxed(lean_object* v_ch_380_, lean_object* v_v_381_, lean_object* v___y_382_){
_start:
{
uint8_t v_res_383_; lean_object* v_r_384_; 
v_res_383_ = l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_trySend___redArg(v_ch_380_, v_v_381_);
v_r_384_ = lean_box(v_res_383_);
return v_r_384_;
}
}
LEAN_EXPORT uint8_t l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_trySend(lean_object* v_00_u03b1_385_, lean_object* v_ch_386_, lean_object* v_v_387_){
_start:
{
uint8_t v___x_389_; 
v___x_389_ = l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_trySend___redArg(v_ch_386_, v_v_387_);
return v___x_389_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_trySend___boxed(lean_object* v_00_u03b1_390_, lean_object* v_ch_391_, lean_object* v_v_392_, lean_object* v___y_393_){
_start:
{
uint8_t v_res_394_; lean_object* v_r_395_; 
v_res_394_ = l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_trySend(v_00_u03b1_390_, v_ch_391_, v_v_392_);
v_r_395_ = lean_box(v_res_394_);
return v_r_395_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_trySend_spec__0(lean_object* v_00_u03b1_396_, lean_object* v_v_397_, lean_object* v_inst_398_, lean_object* v_a_399_, lean_object* v___y_400_){
_start:
{
lean_object* v___x_402_; 
v___x_402_ = l___private_Init_While_0__repeatM_erased___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_trySend_spec__0___redArg(v_v_397_, v___y_400_);
return v___x_402_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_trySend_spec__0___boxed(lean_object* v_00_u03b1_403_, lean_object* v_v_404_, lean_object* v_inst_405_, lean_object* v_a_406_, lean_object* v___y_407_, lean_object* v___y_408_){
_start:
{
lean_object* v_res_409_; 
v_res_409_ = l___private_Init_While_0__repeatM_erased___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_trySend_spec__0(v_00_u03b1_403_, v_v_404_, v_inst_405_, v_a_406_, v___y_407_);
lean_dec(v___y_407_);
return v_res_409_;
}
}
static lean_object* _init_l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_send___redArg___closed__1(void){
_start:
{
lean_object* v___x_413_; lean_object* v___x_414_; 
v___x_413_ = ((lean_object*)(l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_send___redArg___closed__0));
v___x_414_ = lean_task_pure(v___x_413_);
return v___x_414_;
}
}
static lean_object* _init_l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_send___redArg___closed__3(void){
_start:
{
lean_object* v___x_417_; lean_object* v___x_418_; 
v___x_417_ = ((lean_object*)(l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_send___redArg___closed__2));
v___x_418_ = lean_task_pure(v___x_417_);
return v___x_418_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_send___redArg(lean_object* v_ch_419_, lean_object* v_v_420_){
_start:
{
uint8_t v___x_422_; 
v___x_422_ = l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_trySend___redArg(v_ch_419_, v_v_420_);
if (v___x_422_ == 0)
{
lean_object* v___x_423_; 
v___x_423_ = lean_obj_once(&l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_send___redArg___closed__1, &l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_send___redArg___closed__1_once, _init_l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_send___redArg___closed__1);
return v___x_423_;
}
else
{
lean_object* v___x_424_; 
v___x_424_ = lean_obj_once(&l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_send___redArg___closed__3, &l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_send___redArg___closed__3_once, _init_l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_send___redArg___closed__3);
return v___x_424_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_send___redArg___boxed(lean_object* v_ch_425_, lean_object* v_v_426_, lean_object* v___y_427_){
_start:
{
lean_object* v_res_428_; 
v_res_428_ = l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_send___redArg(v_ch_425_, v_v_426_);
return v_res_428_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_send(lean_object* v_00_u03b1_429_, lean_object* v_ch_430_, lean_object* v_v_431_){
_start:
{
lean_object* v___x_433_; 
v___x_433_ = l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_send___redArg(v_ch_430_, v_v_431_);
return v___x_433_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_send___boxed(lean_object* v_00_u03b1_434_, lean_object* v_ch_435_, lean_object* v_v_436_, lean_object* v___y_437_){
_start:
{
lean_object* v_res_438_; 
v_res_438_ = l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_send(v_00_u03b1_434_, v_ch_435_, v_v_436_);
return v_res_438_;
}
}
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_close_spec__1___redArg___lam__0(lean_object* v_mutex_439_, lean_object* v_a_x3f_440_){
_start:
{
lean_object* v___x_442_; lean_object* v___x_443_; 
v___x_442_ = lean_io_basemutex_unlock(v_mutex_439_);
v___x_443_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_443_, 0, v___x_442_);
return v___x_443_;
}
}
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_close_spec__1___redArg___lam__0___boxed(lean_object* v_mutex_444_, lean_object* v_a_x3f_445_, lean_object* v___y_446_){
_start:
{
lean_object* v_res_447_; 
v_res_447_ = l_Std_Mutex_atomically___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_close_spec__1___redArg___lam__0(v_mutex_444_, v_a_x3f_445_);
lean_dec(v_a_x3f_445_);
lean_dec(v_mutex_444_);
return v_res_447_;
}
}
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_close_spec__1___redArg(lean_object* v_mutex_448_, lean_object* v_k_449_){
_start:
{
lean_object* v_ref_451_; lean_object* v_mutex_452_; lean_object* v___x_453_; lean_object* v___x_454_; 
v_ref_451_ = lean_ctor_get(v_mutex_448_, 0);
lean_inc(v_ref_451_);
v_mutex_452_ = lean_ctor_get(v_mutex_448_, 1);
lean_inc(v_mutex_452_);
lean_dec_ref(v_mutex_448_);
v___x_453_ = lean_io_basemutex_lock(v_mutex_452_);
v___x_454_ = lean_apply_2(v_k_449_, v_ref_451_, lean_box(0));
if (lean_obj_tag(v___x_454_) == 0)
{
lean_object* v_a_455_; lean_object* v___x_457_; uint8_t v_isShared_458_; uint8_t v_isSharedCheck_471_; 
v_a_455_ = lean_ctor_get(v___x_454_, 0);
v_isSharedCheck_471_ = !lean_is_exclusive(v___x_454_);
if (v_isSharedCheck_471_ == 0)
{
v___x_457_ = v___x_454_;
v_isShared_458_ = v_isSharedCheck_471_;
goto v_resetjp_456_;
}
else
{
lean_inc(v_a_455_);
lean_dec(v___x_454_);
v___x_457_ = lean_box(0);
v_isShared_458_ = v_isSharedCheck_471_;
goto v_resetjp_456_;
}
v_resetjp_456_:
{
lean_object* v___x_460_; 
lean_inc(v_a_455_);
if (v_isShared_458_ == 0)
{
lean_ctor_set_tag(v___x_457_, 1);
v___x_460_ = v___x_457_;
goto v_reusejp_459_;
}
else
{
lean_object* v_reuseFailAlloc_470_; 
v_reuseFailAlloc_470_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_470_, 0, v_a_455_);
v___x_460_ = v_reuseFailAlloc_470_;
goto v_reusejp_459_;
}
v_reusejp_459_:
{
lean_object* v___x_461_; lean_object* v___x_463_; uint8_t v_isShared_464_; uint8_t v_isSharedCheck_468_; 
v___x_461_ = l_Std_Mutex_atomically___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_close_spec__1___redArg___lam__0(v_mutex_452_, v___x_460_);
lean_dec_ref(v___x_460_);
lean_dec(v_mutex_452_);
v_isSharedCheck_468_ = !lean_is_exclusive(v___x_461_);
if (v_isSharedCheck_468_ == 0)
{
lean_object* v_unused_469_; 
v_unused_469_ = lean_ctor_get(v___x_461_, 0);
lean_dec(v_unused_469_);
v___x_463_ = v___x_461_;
v_isShared_464_ = v_isSharedCheck_468_;
goto v_resetjp_462_;
}
else
{
lean_dec(v___x_461_);
v___x_463_ = lean_box(0);
v_isShared_464_ = v_isSharedCheck_468_;
goto v_resetjp_462_;
}
v_resetjp_462_:
{
lean_object* v___x_466_; 
if (v_isShared_464_ == 0)
{
lean_ctor_set(v___x_463_, 0, v_a_455_);
v___x_466_ = v___x_463_;
goto v_reusejp_465_;
}
else
{
lean_object* v_reuseFailAlloc_467_; 
v_reuseFailAlloc_467_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_467_, 0, v_a_455_);
v___x_466_ = v_reuseFailAlloc_467_;
goto v_reusejp_465_;
}
v_reusejp_465_:
{
return v___x_466_;
}
}
}
}
}
else
{
lean_object* v_a_472_; lean_object* v___x_473_; lean_object* v___x_474_; lean_object* v___x_476_; uint8_t v_isShared_477_; uint8_t v_isSharedCheck_481_; 
v_a_472_ = lean_ctor_get(v___x_454_, 0);
lean_inc(v_a_472_);
lean_dec_ref_known(v___x_454_, 1);
v___x_473_ = lean_box(0);
v___x_474_ = l_Std_Mutex_atomically___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_close_spec__1___redArg___lam__0(v_mutex_452_, v___x_473_);
lean_dec(v_mutex_452_);
v_isSharedCheck_481_ = !lean_is_exclusive(v___x_474_);
if (v_isSharedCheck_481_ == 0)
{
lean_object* v_unused_482_; 
v_unused_482_ = lean_ctor_get(v___x_474_, 0);
lean_dec(v_unused_482_);
v___x_476_ = v___x_474_;
v_isShared_477_ = v_isSharedCheck_481_;
goto v_resetjp_475_;
}
else
{
lean_dec(v___x_474_);
v___x_476_ = lean_box(0);
v_isShared_477_ = v_isSharedCheck_481_;
goto v_resetjp_475_;
}
v_resetjp_475_:
{
lean_object* v___x_479_; 
if (v_isShared_477_ == 0)
{
lean_ctor_set_tag(v___x_476_, 1);
lean_ctor_set(v___x_476_, 0, v_a_472_);
v___x_479_ = v___x_476_;
goto v_reusejp_478_;
}
else
{
lean_object* v_reuseFailAlloc_480_; 
v_reuseFailAlloc_480_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_480_, 0, v_a_472_);
v___x_479_ = v_reuseFailAlloc_480_;
goto v_reusejp_478_;
}
v_reusejp_478_:
{
return v___x_479_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_close_spec__1___redArg___boxed(lean_object* v_mutex_483_, lean_object* v_k_484_, lean_object* v___y_485_){
_start:
{
lean_object* v_res_486_; 
v_res_486_ = l_Std_Mutex_atomically___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_close_spec__1___redArg(v_mutex_483_, v_k_484_);
return v_res_486_;
}
}
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_close_spec__1(lean_object* v_00_u03b1_487_, lean_object* v_00_u03b2_488_, lean_object* v_mutex_489_, lean_object* v_k_490_){
_start:
{
lean_object* v___x_492_; 
v___x_492_ = l_Std_Mutex_atomically___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_close_spec__1___redArg(v_mutex_489_, v_k_490_);
return v___x_492_;
}
}
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_close_spec__1___boxed(lean_object* v_00_u03b1_493_, lean_object* v_00_u03b2_494_, lean_object* v_mutex_495_, lean_object* v_k_496_, lean_object* v___y_497_){
_start:
{
lean_object* v_res_498_; 
v_res_498_ = l_Std_Mutex_atomically___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_close_spec__1(v_00_u03b1_493_, v_00_u03b2_494_, v_mutex_495_, v_k_496_);
return v_res_498_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_close_spec__0___redArg(lean_object* v_as_499_, size_t v_sz_500_, size_t v_i_501_, lean_object* v_b_502_){
_start:
{
uint8_t v___x_504_; 
v___x_504_ = lean_usize_dec_lt(v_i_501_, v_sz_500_);
if (v___x_504_ == 0)
{
lean_object* v___x_505_; 
v___x_505_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_505_, 0, v_b_502_);
return v___x_505_;
}
else
{
lean_object* v___x_506_; lean_object* v_a_507_; lean_object* v___x_508_; uint8_t v___x_509_; size_t v___x_510_; size_t v___x_511_; 
v___x_506_ = lean_box(0);
v_a_507_ = lean_array_uget_borrowed(v_as_499_, v_i_501_);
v___x_508_ = lean_box(0);
v___x_509_ = l___private_Std_Sync_Channel_0__Std_CloseableChannel_Consumer_resolve___redArg(v_a_507_, v___x_508_);
v___x_510_ = ((size_t)1ULL);
v___x_511_ = lean_usize_add(v_i_501_, v___x_510_);
v_i_501_ = v___x_511_;
v_b_502_ = v___x_506_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_close_spec__0___redArg___boxed(lean_object* v_as_513_, lean_object* v_sz_514_, lean_object* v_i_515_, lean_object* v_b_516_, lean_object* v___y_517_){
_start:
{
size_t v_sz_boxed_518_; size_t v_i_boxed_519_; lean_object* v_res_520_; 
v_sz_boxed_518_ = lean_unbox_usize(v_sz_514_);
lean_dec(v_sz_514_);
v_i_boxed_519_ = lean_unbox_usize(v_i_515_);
lean_dec(v_i_515_);
v_res_520_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_close_spec__0___redArg(v_as_513_, v_sz_boxed_518_, v_i_boxed_519_, v_b_516_);
lean_dec_ref(v_as_513_);
return v_res_520_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_close___redArg___lam__0(lean_object* v___y_521_){
_start:
{
lean_object* v___x_523_; uint8_t v_closed_524_; 
v___x_523_ = lean_st_ref_get(v___y_521_);
v_closed_524_ = lean_ctor_get_uint8(v___x_523_, sizeof(void*)*2);
if (v_closed_524_ == 0)
{
lean_object* v_values_525_; lean_object* v_consumers_526_; lean_object* v___x_528_; uint8_t v_isShared_529_; uint8_t v_isSharedCheck_549_; 
v_values_525_ = lean_ctor_get(v___x_523_, 0);
v_consumers_526_ = lean_ctor_get(v___x_523_, 1);
v_isSharedCheck_549_ = !lean_is_exclusive(v___x_523_);
if (v_isSharedCheck_549_ == 0)
{
v___x_528_ = v___x_523_;
v_isShared_529_ = v_isSharedCheck_549_;
goto v_resetjp_527_;
}
else
{
lean_inc(v_consumers_526_);
lean_inc(v_values_525_);
lean_dec(v___x_523_);
v___x_528_ = lean_box(0);
v_isShared_529_ = v_isSharedCheck_549_;
goto v_resetjp_527_;
}
v_resetjp_527_:
{
lean_object* v___x_530_; lean_object* v___x_531_; size_t v_sz_532_; size_t v___x_533_; lean_object* v___x_534_; 
v___x_530_ = l_Std_Queue_toArray___redArg(v_consumers_526_);
v___x_531_ = lean_box(0);
v_sz_532_ = lean_array_size(v___x_530_);
v___x_533_ = ((size_t)0ULL);
v___x_534_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_close_spec__0___redArg(v___x_530_, v_sz_532_, v___x_533_, v___x_531_);
lean_dec_ref(v___x_530_);
if (lean_obj_tag(v___x_534_) == 0)
{
lean_object* v___x_536_; uint8_t v_isShared_537_; uint8_t v_isSharedCheck_547_; 
v_isSharedCheck_547_ = !lean_is_exclusive(v___x_534_);
if (v_isSharedCheck_547_ == 0)
{
lean_object* v_unused_548_; 
v_unused_548_ = lean_ctor_get(v___x_534_, 0);
lean_dec(v_unused_548_);
v___x_536_ = v___x_534_;
v_isShared_537_ = v_isSharedCheck_547_;
goto v_resetjp_535_;
}
else
{
lean_dec(v___x_534_);
v___x_536_ = lean_box(0);
v_isShared_537_ = v_isSharedCheck_547_;
goto v_resetjp_535_;
}
v_resetjp_535_:
{
lean_object* v___x_538_; uint8_t v___x_539_; lean_object* v___x_541_; 
v___x_538_ = lean_obj_once(&l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_new___redArg___closed__0, &l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_new___redArg___closed__0_once, _init_l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_new___redArg___closed__0);
v___x_539_ = 1;
if (v_isShared_529_ == 0)
{
lean_ctor_set(v___x_528_, 1, v___x_538_);
v___x_541_ = v___x_528_;
goto v_reusejp_540_;
}
else
{
lean_object* v_reuseFailAlloc_546_; 
v_reuseFailAlloc_546_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v_reuseFailAlloc_546_, 0, v_values_525_);
lean_ctor_set(v_reuseFailAlloc_546_, 1, v___x_538_);
v___x_541_ = v_reuseFailAlloc_546_;
goto v_reusejp_540_;
}
v_reusejp_540_:
{
lean_object* v___x_542_; lean_object* v___x_544_; 
lean_ctor_set_uint8(v___x_541_, sizeof(void*)*2, v___x_539_);
v___x_542_ = lean_st_ref_swap(v___y_521_, v___x_541_);
lean_dec(v___x_542_);
if (v_isShared_537_ == 0)
{
lean_ctor_set(v___x_536_, 0, v___x_531_);
v___x_544_ = v___x_536_;
goto v_reusejp_543_;
}
else
{
lean_object* v_reuseFailAlloc_545_; 
v_reuseFailAlloc_545_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_545_, 0, v___x_531_);
v___x_544_ = v_reuseFailAlloc_545_;
goto v_reusejp_543_;
}
v_reusejp_543_:
{
return v___x_544_;
}
}
}
}
else
{
lean_del_object(v___x_528_);
lean_dec_ref(v_values_525_);
return v___x_534_;
}
}
}
else
{
uint8_t v___x_550_; lean_object* v___x_551_; lean_object* v___x_552_; 
lean_dec(v___x_523_);
v___x_550_ = 1;
v___x_551_ = lean_box(v___x_550_);
v___x_552_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_552_, 0, v___x_551_);
return v___x_552_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_close___redArg___lam__0___boxed(lean_object* v___y_553_, lean_object* v___y_554_){
_start:
{
lean_object* v_res_555_; 
v_res_555_ = l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_close___redArg___lam__0(v___y_553_);
lean_dec(v___y_553_);
return v_res_555_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_close___redArg(lean_object* v_ch_557_){
_start:
{
lean_object* v___f_559_; lean_object* v___x_560_; 
v___f_559_ = ((lean_object*)(l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_close___redArg___closed__0));
v___x_560_ = l_Std_Mutex_atomically___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_close_spec__1___redArg(v_ch_557_, v___f_559_);
return v___x_560_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_close___redArg___boxed(lean_object* v_ch_561_, lean_object* v___y_562_){
_start:
{
lean_object* v_res_563_; 
v_res_563_ = l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_close___redArg(v_ch_561_);
return v_res_563_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_close(lean_object* v_00_u03b1_564_, lean_object* v_ch_565_){
_start:
{
lean_object* v___x_567_; 
v___x_567_ = l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_close___redArg(v_ch_565_);
return v___x_567_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_close___boxed(lean_object* v_00_u03b1_568_, lean_object* v_ch_569_, lean_object* v___y_570_){
_start:
{
lean_object* v_res_571_; 
v_res_571_ = l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_close(v_00_u03b1_568_, v_ch_569_);
return v_res_571_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_close_spec__0(lean_object* v_00_u03b1_572_, lean_object* v_as_573_, size_t v_sz_574_, size_t v_i_575_, lean_object* v_b_576_, lean_object* v___y_577_){
_start:
{
lean_object* v___x_579_; 
v___x_579_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_close_spec__0___redArg(v_as_573_, v_sz_574_, v_i_575_, v_b_576_);
return v___x_579_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_close_spec__0___boxed(lean_object* v_00_u03b1_580_, lean_object* v_as_581_, lean_object* v_sz_582_, lean_object* v_i_583_, lean_object* v_b_584_, lean_object* v___y_585_, lean_object* v___y_586_){
_start:
{
size_t v_sz_boxed_587_; size_t v_i_boxed_588_; lean_object* v_res_589_; 
v_sz_boxed_587_ = lean_unbox_usize(v_sz_582_);
lean_dec(v_sz_582_);
v_i_boxed_588_ = lean_unbox_usize(v_i_583_);
lean_dec(v_i_583_);
v_res_589_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_close_spec__0(v_00_u03b1_580_, v_as_581_, v_sz_boxed_587_, v_i_boxed_588_, v_b_584_, v___y_585_);
lean_dec(v___y_585_);
lean_dec_ref(v_as_581_);
return v_res_589_;
}
}
LEAN_EXPORT uint8_t l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_isClosed___redArg___lam__0(lean_object* v___y_590_){
_start:
{
lean_object* v___x_592_; uint8_t v_closed_593_; 
v___x_592_ = lean_st_ref_get(v___y_590_);
v_closed_593_ = lean_ctor_get_uint8(v___x_592_, sizeof(void*)*2);
lean_dec(v___x_592_);
return v_closed_593_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_isClosed___redArg___lam__0___boxed(lean_object* v___y_594_, lean_object* v___y_595_){
_start:
{
uint8_t v_res_596_; lean_object* v_r_597_; 
v_res_596_ = l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_isClosed___redArg___lam__0(v___y_594_);
lean_dec(v___y_594_);
v_r_597_ = lean_box(v_res_596_);
return v_r_597_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_isClosed___redArg(lean_object* v_ch_599_){
_start:
{
lean_object* v___f_601_; lean_object* v___x_602_; 
v___f_601_ = ((lean_object*)(l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_isClosed___redArg___closed__0));
v___x_602_ = l_Std_Mutex_atomically___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_trySend_spec__1___redArg(v_ch_599_, v___f_601_);
return v___x_602_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_isClosed___redArg___boxed(lean_object* v_ch_603_, lean_object* v___y_604_){
_start:
{
lean_object* v_res_605_; 
v_res_605_ = l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_isClosed___redArg(v_ch_603_);
return v_res_605_;
}
}
LEAN_EXPORT uint8_t l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_isClosed(lean_object* v_00_u03b1_606_, lean_object* v_ch_607_){
_start:
{
lean_object* v___x_609_; uint8_t v___x_610_; 
v___x_609_ = l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_isClosed___redArg(v_ch_607_);
v___x_610_ = lean_unbox(v___x_609_);
lean_dec(v___x_609_);
return v___x_610_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_isClosed___boxed(lean_object* v_00_u03b1_611_, lean_object* v_ch_612_, lean_object* v___y_613_){
_start:
{
uint8_t v_res_614_; lean_object* v_r_615_; 
v_res_614_ = l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_isClosed(v_00_u03b1_611_, v_ch_612_);
v_r_615_ = lean_box(v_res_614_);
return v_r_615_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_tryRecv_x27___redArg___lam__0(lean_object* v_toApplicative_616_, lean_object* v_fst_617_, lean_object* v_a_618_){
_start:
{
lean_object* v_toPure_619_; lean_object* v___x_620_; lean_object* v___x_621_; 
v_toPure_619_ = lean_ctor_get(v_toApplicative_616_, 1);
lean_inc(v_toPure_619_);
lean_dec_ref(v_toApplicative_616_);
v___x_620_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_620_, 0, v_fst_617_);
v___x_621_ = lean_apply_2(v_toPure_619_, lean_box(0), v___x_620_);
return v___x_621_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_tryRecv_x27___redArg___lam__1(lean_object* v_toApplicative_622_, lean_object* v___y_623_, lean_object* v_inst_624_, lean_object* v_toBind_625_, lean_object* v_a_626_){
_start:
{
lean_object* v_values_627_; lean_object* v_consumers_628_; uint8_t v_closed_629_; lean_object* v___x_631_; uint8_t v_isShared_632_; uint8_t v_isSharedCheck_647_; 
v_values_627_ = lean_ctor_get(v_a_626_, 0);
v_consumers_628_ = lean_ctor_get(v_a_626_, 1);
v_closed_629_ = lean_ctor_get_uint8(v_a_626_, sizeof(void*)*2);
v_isSharedCheck_647_ = !lean_is_exclusive(v_a_626_);
if (v_isSharedCheck_647_ == 0)
{
v___x_631_ = v_a_626_;
v_isShared_632_ = v_isSharedCheck_647_;
goto v_resetjp_630_;
}
else
{
lean_inc(v_consumers_628_);
lean_inc(v_values_627_);
lean_dec(v_a_626_);
v___x_631_ = lean_box(0);
v_isShared_632_ = v_isSharedCheck_647_;
goto v_resetjp_630_;
}
v_resetjp_630_:
{
lean_object* v___x_633_; 
v___x_633_ = l_Std_Queue_dequeue_x3f___redArg(v_values_627_);
if (lean_obj_tag(v___x_633_) == 1)
{
lean_object* v_val_634_; lean_object* v_fst_635_; lean_object* v_snd_636_; lean_object* v___f_637_; lean_object* v___x_639_; 
v_val_634_ = lean_ctor_get(v___x_633_, 0);
lean_inc(v_val_634_);
lean_dec_ref_known(v___x_633_, 1);
v_fst_635_ = lean_ctor_get(v_val_634_, 0);
lean_inc(v_fst_635_);
v_snd_636_ = lean_ctor_get(v_val_634_, 1);
lean_inc(v_snd_636_);
lean_dec(v_val_634_);
v___f_637_ = lean_alloc_closure((void*)(l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_tryRecv_x27___redArg___lam__0), 3, 2);
lean_closure_set(v___f_637_, 0, v_toApplicative_622_);
lean_closure_set(v___f_637_, 1, v_fst_635_);
if (v_isShared_632_ == 0)
{
lean_ctor_set(v___x_631_, 0, v_snd_636_);
v___x_639_ = v___x_631_;
goto v_reusejp_638_;
}
else
{
lean_object* v_reuseFailAlloc_643_; 
v_reuseFailAlloc_643_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v_reuseFailAlloc_643_, 0, v_snd_636_);
lean_ctor_set(v_reuseFailAlloc_643_, 1, v_consumers_628_);
lean_ctor_set_uint8(v_reuseFailAlloc_643_, sizeof(void*)*2, v_closed_629_);
v___x_639_ = v_reuseFailAlloc_643_;
goto v_reusejp_638_;
}
v_reusejp_638_:
{
lean_object* v___x_640_; lean_object* v___x_641_; lean_object* v___x_642_; 
lean_inc(v___y_623_);
v___x_640_ = lean_alloc_closure((void*)(l_ST_Prim_Ref_set___boxed), 5, 4);
lean_closure_set(v___x_640_, 0, lean_box(0));
lean_closure_set(v___x_640_, 1, lean_box(0));
lean_closure_set(v___x_640_, 2, v___y_623_);
lean_closure_set(v___x_640_, 3, v___x_639_);
v___x_641_ = lean_apply_2(v_inst_624_, lean_box(0), v___x_640_);
v___x_642_ = lean_apply_4(v_toBind_625_, lean_box(0), lean_box(0), v___x_641_, v___f_637_);
return v___x_642_;
}
}
else
{
lean_object* v_toPure_644_; lean_object* v___x_645_; lean_object* v___x_646_; 
lean_dec(v___x_633_);
lean_del_object(v___x_631_);
lean_dec_ref(v_consumers_628_);
lean_dec(v_toBind_625_);
lean_dec(v_inst_624_);
v_toPure_644_ = lean_ctor_get(v_toApplicative_622_, 1);
lean_inc(v_toPure_644_);
lean_dec_ref(v_toApplicative_622_);
v___x_645_ = lean_box(0);
v___x_646_ = lean_apply_2(v_toPure_644_, lean_box(0), v___x_645_);
return v___x_646_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_tryRecv_x27___redArg___lam__1___boxed(lean_object* v_toApplicative_648_, lean_object* v___y_649_, lean_object* v_inst_650_, lean_object* v_toBind_651_, lean_object* v_a_652_){
_start:
{
lean_object* v_res_653_; 
v_res_653_ = l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_tryRecv_x27___redArg___lam__1(v_toApplicative_648_, v___y_649_, v_inst_650_, v_toBind_651_, v_a_652_);
lean_dec(v___y_649_);
return v_res_653_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_tryRecv_x27___redArg(lean_object* v_inst_654_, lean_object* v_inst_655_, lean_object* v___y_656_){
_start:
{
lean_object* v_toApplicative_657_; lean_object* v_toBind_658_; lean_object* v___f_659_; lean_object* v___x_660_; lean_object* v___x_661_; lean_object* v___x_662_; 
v_toApplicative_657_ = lean_ctor_get(v_inst_654_, 0);
lean_inc_ref(v_toApplicative_657_);
v_toBind_658_ = lean_ctor_get(v_inst_654_, 1);
lean_inc_n(v_toBind_658_, 2);
lean_dec_ref(v_inst_654_);
lean_inc(v_inst_655_);
lean_inc_n(v___y_656_, 2);
v___f_659_ = lean_alloc_closure((void*)(l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_tryRecv_x27___redArg___lam__1___boxed), 5, 4);
lean_closure_set(v___f_659_, 0, v_toApplicative_657_);
lean_closure_set(v___f_659_, 1, v___y_656_);
lean_closure_set(v___f_659_, 2, v_inst_655_);
lean_closure_set(v___f_659_, 3, v_toBind_658_);
v___x_660_ = lean_alloc_closure((void*)(l_ST_Prim_Ref_get___boxed), 4, 3);
lean_closure_set(v___x_660_, 0, lean_box(0));
lean_closure_set(v___x_660_, 1, lean_box(0));
lean_closure_set(v___x_660_, 2, v___y_656_);
v___x_661_ = lean_apply_2(v_inst_655_, lean_box(0), v___x_660_);
v___x_662_ = lean_apply_4(v_toBind_658_, lean_box(0), lean_box(0), v___x_661_, v___f_659_);
return v___x_662_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_tryRecv_x27___redArg___boxed(lean_object* v_inst_663_, lean_object* v_inst_664_, lean_object* v___y_665_){
_start:
{
lean_object* v_res_666_; 
v_res_666_ = l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_tryRecv_x27___redArg(v_inst_663_, v_inst_664_, v___y_665_);
lean_dec(v___y_665_);
return v_res_666_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_tryRecv_x27(lean_object* v_m_667_, lean_object* v_00_u03b1_668_, lean_object* v_inst_669_, lean_object* v_inst_670_, lean_object* v___y_671_){
_start:
{
lean_object* v___x_672_; 
v___x_672_ = l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_tryRecv_x27___redArg(v_inst_669_, v_inst_670_, v___y_671_);
return v___x_672_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_tryRecv_x27___boxed(lean_object* v_m_673_, lean_object* v_00_u03b1_674_, lean_object* v_inst_675_, lean_object* v_inst_676_, lean_object* v___y_677_){
_start:
{
lean_object* v_res_678_; 
v_res_678_ = l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_tryRecv_x27(v_m_673_, v_00_u03b1_674_, v_inst_675_, v_inst_676_, v___y_677_);
lean_dec(v___y_677_);
return v_res_678_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_tryRecv_x27___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_tryRecv_spec__0___redArg(lean_object* v___y_679_){
_start:
{
lean_object* v___x_681_; lean_object* v_values_682_; lean_object* v_consumers_683_; uint8_t v_closed_684_; lean_object* v___x_686_; uint8_t v_isShared_687_; uint8_t v_isSharedCheck_704_; 
v___x_681_ = lean_st_ref_get(v___y_679_);
v_values_682_ = lean_ctor_get(v___x_681_, 0);
v_consumers_683_ = lean_ctor_get(v___x_681_, 1);
v_closed_684_ = lean_ctor_get_uint8(v___x_681_, sizeof(void*)*2);
v_isSharedCheck_704_ = !lean_is_exclusive(v___x_681_);
if (v_isSharedCheck_704_ == 0)
{
v___x_686_ = v___x_681_;
v_isShared_687_ = v_isSharedCheck_704_;
goto v_resetjp_685_;
}
else
{
lean_inc(v_consumers_683_);
lean_inc(v_values_682_);
lean_dec(v___x_681_);
v___x_686_ = lean_box(0);
v_isShared_687_ = v_isSharedCheck_704_;
goto v_resetjp_685_;
}
v_resetjp_685_:
{
lean_object* v___x_688_; 
v___x_688_ = l_Std_Queue_dequeue_x3f___redArg(v_values_682_);
if (lean_obj_tag(v___x_688_) == 1)
{
lean_object* v_val_689_; lean_object* v___x_691_; uint8_t v_isShared_692_; uint8_t v_isSharedCheck_702_; 
v_val_689_ = lean_ctor_get(v___x_688_, 0);
v_isSharedCheck_702_ = !lean_is_exclusive(v___x_688_);
if (v_isSharedCheck_702_ == 0)
{
v___x_691_ = v___x_688_;
v_isShared_692_ = v_isSharedCheck_702_;
goto v_resetjp_690_;
}
else
{
lean_inc(v_val_689_);
lean_dec(v___x_688_);
v___x_691_ = lean_box(0);
v_isShared_692_ = v_isSharedCheck_702_;
goto v_resetjp_690_;
}
v_resetjp_690_:
{
lean_object* v_fst_693_; lean_object* v_snd_694_; lean_object* v___x_696_; 
v_fst_693_ = lean_ctor_get(v_val_689_, 0);
lean_inc(v_fst_693_);
v_snd_694_ = lean_ctor_get(v_val_689_, 1);
lean_inc(v_snd_694_);
lean_dec(v_val_689_);
if (v_isShared_687_ == 0)
{
lean_ctor_set(v___x_686_, 0, v_snd_694_);
v___x_696_ = v___x_686_;
goto v_reusejp_695_;
}
else
{
lean_object* v_reuseFailAlloc_701_; 
v_reuseFailAlloc_701_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v_reuseFailAlloc_701_, 0, v_snd_694_);
lean_ctor_set(v_reuseFailAlloc_701_, 1, v_consumers_683_);
lean_ctor_set_uint8(v_reuseFailAlloc_701_, sizeof(void*)*2, v_closed_684_);
v___x_696_ = v_reuseFailAlloc_701_;
goto v_reusejp_695_;
}
v_reusejp_695_:
{
lean_object* v___x_697_; lean_object* v___x_699_; 
v___x_697_ = lean_st_ref_swap(v___y_679_, v___x_696_);
lean_dec(v___x_697_);
if (v_isShared_692_ == 0)
{
lean_ctor_set(v___x_691_, 0, v_fst_693_);
v___x_699_ = v___x_691_;
goto v_reusejp_698_;
}
else
{
lean_object* v_reuseFailAlloc_700_; 
v_reuseFailAlloc_700_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_700_, 0, v_fst_693_);
v___x_699_ = v_reuseFailAlloc_700_;
goto v_reusejp_698_;
}
v_reusejp_698_:
{
return v___x_699_;
}
}
}
}
else
{
lean_object* v___x_703_; 
lean_dec(v___x_688_);
lean_del_object(v___x_686_);
lean_dec_ref(v_consumers_683_);
v___x_703_ = lean_box(0);
return v___x_703_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_tryRecv_x27___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_tryRecv_spec__0___redArg___boxed(lean_object* v___y_705_, lean_object* v___y_706_){
_start:
{
lean_object* v_res_707_; 
v_res_707_ = l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_tryRecv_x27___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_tryRecv_spec__0___redArg(v___y_705_);
lean_dec(v___y_705_);
return v_res_707_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_tryRecv_x27___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_tryRecv_spec__0(lean_object* v_00_u03b1_708_, lean_object* v___y_709_){
_start:
{
lean_object* v___x_711_; 
v___x_711_ = l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_tryRecv_x27___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_tryRecv_spec__0___redArg(v___y_709_);
return v___x_711_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_tryRecv_x27___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_tryRecv_spec__0___boxed(lean_object* v_00_u03b1_712_, lean_object* v___y_713_, lean_object* v___y_714_){
_start:
{
lean_object* v_res_715_; 
v_res_715_ = l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_tryRecv_x27___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_tryRecv_spec__0(v_00_u03b1_712_, v___y_713_);
lean_dec(v___y_713_);
return v_res_715_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_tryRecv___redArg(lean_object* v_ch_717_){
_start:
{
lean_object* v___f_719_; lean_object* v___x_720_; 
v___f_719_ = ((lean_object*)(l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_tryRecv___redArg___closed__0));
v___x_720_ = l_Std_Mutex_atomically___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_trySend_spec__1___redArg(v_ch_717_, v___f_719_);
return v___x_720_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_tryRecv___redArg___boxed(lean_object* v_ch_721_, lean_object* v___y_722_){
_start:
{
lean_object* v_res_723_; 
v_res_723_ = l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_tryRecv___redArg(v_ch_721_);
return v_res_723_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_tryRecv(lean_object* v_00_u03b1_724_, lean_object* v_ch_725_){
_start:
{
lean_object* v___x_727_; 
v___x_727_ = l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_tryRecv___redArg(v_ch_725_);
return v___x_727_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_tryRecv___boxed(lean_object* v_00_u03b1_728_, lean_object* v_ch_729_, lean_object* v___y_730_){
_start:
{
lean_object* v_res_731_; 
v_res_731_ = l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_tryRecv(v_00_u03b1_728_, v_ch_729_);
return v_res_731_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recv___redArg___lam__0(lean_object* v_x_732_){
_start:
{
if (lean_obj_tag(v_x_732_) == 0)
{
lean_object* v___x_733_; 
v___x_733_ = lean_box(0);
return v___x_733_;
}
else
{
lean_object* v_val_734_; 
v_val_734_ = lean_ctor_get(v_x_732_, 0);
lean_inc(v_val_734_);
return v_val_734_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recv___redArg___lam__0___boxed(lean_object* v_x_735_){
_start:
{
lean_object* v_res_736_; 
v_res_736_ = l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recv___redArg___lam__0(v_x_735_);
lean_dec(v_x_735_);
return v_res_736_;
}
}
static lean_object* _init_l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recv___redArg___lam__1___closed__0(void){
_start:
{
lean_object* v___x_737_; lean_object* v___x_738_; 
v___x_737_ = lean_box(0);
v___x_738_ = lean_task_pure(v___x_737_);
return v___x_738_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recv___redArg___lam__1(lean_object* v___f_739_, lean_object* v___y_740_){
_start:
{
lean_object* v___x_742_; 
v___x_742_ = l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_tryRecv_x27___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_tryRecv_spec__0___redArg(v___y_740_);
if (lean_obj_tag(v___x_742_) == 1)
{
lean_object* v___x_743_; 
lean_dec_ref(v___f_739_);
v___x_743_ = lean_task_pure(v___x_742_);
return v___x_743_;
}
else
{
lean_object* v___x_744_; uint8_t v_closed_745_; 
lean_dec(v___x_742_);
v___x_744_ = lean_st_ref_get(v___y_740_);
v_closed_745_ = lean_ctor_get_uint8(v___x_744_, sizeof(void*)*2);
lean_dec(v___x_744_);
if (v_closed_745_ == 0)
{
uint8_t v___x_746_; lean_object* v___x_747_; lean_object* v___x_748_; lean_object* v_values_749_; lean_object* v_consumers_750_; uint8_t v_closed_751_; lean_object* v___x_753_; uint8_t v_isShared_754_; uint8_t v_isSharedCheck_764_; 
v___x_746_ = 1;
v___x_747_ = lean_io_promise_new();
v___x_748_ = lean_st_ref_take(v___y_740_);
v_values_749_ = lean_ctor_get(v___x_748_, 0);
v_consumers_750_ = lean_ctor_get(v___x_748_, 1);
v_closed_751_ = lean_ctor_get_uint8(v___x_748_, sizeof(void*)*2);
v_isSharedCheck_764_ = !lean_is_exclusive(v___x_748_);
if (v_isSharedCheck_764_ == 0)
{
v___x_753_ = v___x_748_;
v_isShared_754_ = v_isSharedCheck_764_;
goto v_resetjp_752_;
}
else
{
lean_inc(v_consumers_750_);
lean_inc(v_values_749_);
lean_dec(v___x_748_);
v___x_753_ = lean_box(0);
v_isShared_754_ = v_isSharedCheck_764_;
goto v_resetjp_752_;
}
v_resetjp_752_:
{
lean_object* v___x_755_; lean_object* v___x_756_; lean_object* v___x_758_; 
lean_inc(v___x_747_);
v___x_755_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_755_, 0, v___x_747_);
v___x_756_ = l_Std_Queue_enqueue___redArg(v___x_755_, v_consumers_750_);
if (v_isShared_754_ == 0)
{
lean_ctor_set(v___x_753_, 1, v___x_756_);
v___x_758_ = v___x_753_;
goto v_reusejp_757_;
}
else
{
lean_object* v_reuseFailAlloc_763_; 
v_reuseFailAlloc_763_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v_reuseFailAlloc_763_, 0, v_values_749_);
lean_ctor_set(v_reuseFailAlloc_763_, 1, v___x_756_);
lean_ctor_set_uint8(v_reuseFailAlloc_763_, sizeof(void*)*2, v_closed_751_);
v___x_758_ = v_reuseFailAlloc_763_;
goto v_reusejp_757_;
}
v_reusejp_757_:
{
lean_object* v___x_759_; lean_object* v___x_760_; lean_object* v___x_761_; lean_object* v___x_762_; 
v___x_759_ = lean_st_ref_put(v___y_740_, v___x_758_);
v___x_760_ = lean_io_promise_result_opt(v___x_747_);
lean_dec(v___x_747_);
v___x_761_ = lean_unsigned_to_nat(0u);
v___x_762_ = lean_task_map(v___f_739_, v___x_760_, v___x_761_, v___x_746_);
return v___x_762_;
}
}
}
else
{
lean_object* v___x_765_; 
lean_dec_ref(v___f_739_);
v___x_765_ = lean_obj_once(&l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recv___redArg___lam__1___closed__0, &l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recv___redArg___lam__1___closed__0_once, _init_l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recv___redArg___lam__1___closed__0);
return v___x_765_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recv___redArg___lam__1___boxed(lean_object* v___f_766_, lean_object* v___y_767_, lean_object* v___y_768_){
_start:
{
lean_object* v_res_769_; 
v_res_769_ = l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recv___redArg___lam__1(v___f_766_, v___y_767_);
lean_dec(v___y_767_);
return v_res_769_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recv___redArg(lean_object* v_ch_773_){
_start:
{
lean_object* v___f_775_; lean_object* v___x_776_; 
v___f_775_ = ((lean_object*)(l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recv___redArg___closed__1));
v___x_776_ = l_Std_Mutex_atomically___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_trySend_spec__1___redArg(v_ch_773_, v___f_775_);
return v___x_776_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recv___redArg___boxed(lean_object* v_ch_777_, lean_object* v___y_778_){
_start:
{
lean_object* v_res_779_; 
v_res_779_ = l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recv___redArg(v_ch_777_);
return v_res_779_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recv(lean_object* v_00_u03b1_780_, lean_object* v_ch_781_){
_start:
{
lean_object* v___x_783_; 
v___x_783_ = l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recv___redArg(v_ch_781_);
return v___x_783_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recv___boxed(lean_object* v_00_u03b1_784_, lean_object* v_ch_785_, lean_object* v___y_786_){
_start:
{
lean_object* v_res_787_; 
v_res_787_ = l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recv(v_00_u03b1_784_, v_ch_785_);
return v_res_787_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvReady_x27___redArg___lam__0(lean_object* v_toApplicative_788_, lean_object* v_a_789_){
_start:
{
uint8_t v___y_791_; lean_object* v_values_795_; uint8_t v_closed_796_; uint8_t v___x_797_; 
v_values_795_ = lean_ctor_get(v_a_789_, 0);
v_closed_796_ = lean_ctor_get_uint8(v_a_789_, sizeof(void*)*2);
v___x_797_ = l_Std_Queue_isEmpty___redArg(v_values_795_);
if (v___x_797_ == 0)
{
uint8_t v___x_798_; 
v___x_798_ = 1;
v___y_791_ = v___x_798_;
goto v___jp_790_;
}
else
{
v___y_791_ = v_closed_796_;
goto v___jp_790_;
}
v___jp_790_:
{
lean_object* v_toPure_792_; lean_object* v___x_793_; lean_object* v___x_794_; 
v_toPure_792_ = lean_ctor_get(v_toApplicative_788_, 1);
lean_inc(v_toPure_792_);
lean_dec_ref(v_toApplicative_788_);
v___x_793_ = lean_box(v___y_791_);
v___x_794_ = lean_apply_2(v_toPure_792_, lean_box(0), v___x_793_);
return v___x_794_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvReady_x27___redArg___lam__0___boxed(lean_object* v_toApplicative_799_, lean_object* v_a_800_){
_start:
{
lean_object* v_res_801_; 
v_res_801_ = l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvReady_x27___redArg___lam__0(v_toApplicative_799_, v_a_800_);
lean_dec_ref(v_a_800_);
return v_res_801_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvReady_x27___redArg(lean_object* v_inst_802_, lean_object* v_inst_803_, lean_object* v___y_804_){
_start:
{
lean_object* v_toApplicative_805_; lean_object* v_toBind_806_; lean_object* v___f_807_; lean_object* v___x_808_; lean_object* v___x_809_; lean_object* v___x_810_; 
v_toApplicative_805_ = lean_ctor_get(v_inst_802_, 0);
lean_inc_ref(v_toApplicative_805_);
v_toBind_806_ = lean_ctor_get(v_inst_802_, 1);
lean_inc(v_toBind_806_);
lean_dec_ref(v_inst_802_);
v___f_807_ = lean_alloc_closure((void*)(l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvReady_x27___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_807_, 0, v_toApplicative_805_);
lean_inc(v___y_804_);
v___x_808_ = lean_alloc_closure((void*)(l_ST_Prim_Ref_get___boxed), 4, 3);
lean_closure_set(v___x_808_, 0, lean_box(0));
lean_closure_set(v___x_808_, 1, lean_box(0));
lean_closure_set(v___x_808_, 2, v___y_804_);
v___x_809_ = lean_apply_2(v_inst_803_, lean_box(0), v___x_808_);
v___x_810_ = lean_apply_4(v_toBind_806_, lean_box(0), lean_box(0), v___x_809_, v___f_807_);
return v___x_810_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvReady_x27___redArg___boxed(lean_object* v_inst_811_, lean_object* v_inst_812_, lean_object* v___y_813_){
_start:
{
lean_object* v_res_814_; 
v_res_814_ = l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvReady_x27___redArg(v_inst_811_, v_inst_812_, v___y_813_);
lean_dec(v___y_813_);
return v_res_814_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvReady_x27(lean_object* v_m_815_, lean_object* v_00_u03b1_816_, lean_object* v_inst_817_, lean_object* v_inst_818_, lean_object* v___y_819_){
_start:
{
lean_object* v_toApplicative_820_; lean_object* v_toBind_821_; lean_object* v___f_822_; lean_object* v___x_823_; lean_object* v___x_824_; lean_object* v___x_825_; 
v_toApplicative_820_ = lean_ctor_get(v_inst_817_, 0);
lean_inc_ref(v_toApplicative_820_);
v_toBind_821_ = lean_ctor_get(v_inst_817_, 1);
lean_inc(v_toBind_821_);
lean_dec_ref(v_inst_817_);
v___f_822_ = lean_alloc_closure((void*)(l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvReady_x27___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_822_, 0, v_toApplicative_820_);
lean_inc(v___y_819_);
v___x_823_ = lean_alloc_closure((void*)(l_ST_Prim_Ref_get___boxed), 4, 3);
lean_closure_set(v___x_823_, 0, lean_box(0));
lean_closure_set(v___x_823_, 1, lean_box(0));
lean_closure_set(v___x_823_, 2, v___y_819_);
v___x_824_ = lean_apply_2(v_inst_818_, lean_box(0), v___x_823_);
v___x_825_ = lean_apply_4(v_toBind_821_, lean_box(0), lean_box(0), v___x_824_, v___f_822_);
return v___x_825_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvReady_x27___boxed(lean_object* v_m_826_, lean_object* v_00_u03b1_827_, lean_object* v_inst_828_, lean_object* v_inst_829_, lean_object* v___y_830_){
_start:
{
lean_object* v_res_831_; 
v_res_831_ = l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvReady_x27(v_m_826_, v_00_u03b1_827_, v_inst_828_, v_inst_829_, v___y_830_);
lean_dec(v___y_830_);
return v_res_831_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_tryRecv_x27___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector_spec__0___redArg___lam__0(lean_object* v_fst_832_, lean_object* v_x_833_){
_start:
{
if (lean_obj_tag(v_x_833_) == 0)
{
lean_object* v_a_835_; lean_object* v___x_837_; uint8_t v_isShared_838_; uint8_t v_isSharedCheck_843_; 
lean_dec(v_fst_832_);
v_a_835_ = lean_ctor_get(v_x_833_, 0);
v_isSharedCheck_843_ = !lean_is_exclusive(v_x_833_);
if (v_isSharedCheck_843_ == 0)
{
v___x_837_ = v_x_833_;
v_isShared_838_ = v_isSharedCheck_843_;
goto v_resetjp_836_;
}
else
{
lean_inc(v_a_835_);
lean_dec(v_x_833_);
v___x_837_ = lean_box(0);
v_isShared_838_ = v_isSharedCheck_843_;
goto v_resetjp_836_;
}
v_resetjp_836_:
{
lean_object* v___x_840_; 
if (v_isShared_838_ == 0)
{
v___x_840_ = v___x_837_;
goto v_reusejp_839_;
}
else
{
lean_object* v_reuseFailAlloc_842_; 
v_reuseFailAlloc_842_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_842_, 0, v_a_835_);
v___x_840_ = v_reuseFailAlloc_842_;
goto v_reusejp_839_;
}
v_reusejp_839_:
{
lean_object* v___x_841_; 
v___x_841_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_841_, 0, v___x_840_);
return v___x_841_;
}
}
}
else
{
lean_object* v___x_845_; uint8_t v_isShared_846_; uint8_t v_isSharedCheck_852_; 
v_isSharedCheck_852_ = !lean_is_exclusive(v_x_833_);
if (v_isSharedCheck_852_ == 0)
{
lean_object* v_unused_853_; 
v_unused_853_ = lean_ctor_get(v_x_833_, 0);
lean_dec(v_unused_853_);
v___x_845_ = v_x_833_;
v_isShared_846_ = v_isSharedCheck_852_;
goto v_resetjp_844_;
}
else
{
lean_dec(v_x_833_);
v___x_845_ = lean_box(0);
v_isShared_846_ = v_isSharedCheck_852_;
goto v_resetjp_844_;
}
v_resetjp_844_:
{
lean_object* v___x_847_; lean_object* v___x_849_; 
v___x_847_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_847_, 0, v_fst_832_);
if (v_isShared_846_ == 0)
{
lean_ctor_set(v___x_845_, 0, v___x_847_);
v___x_849_ = v___x_845_;
goto v_reusejp_848_;
}
else
{
lean_object* v_reuseFailAlloc_851_; 
v_reuseFailAlloc_851_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_851_, 0, v___x_847_);
v___x_849_ = v_reuseFailAlloc_851_;
goto v_reusejp_848_;
}
v_reusejp_848_:
{
lean_object* v___x_850_; 
v___x_850_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_850_, 0, v___x_849_);
return v___x_850_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_tryRecv_x27___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector_spec__0___redArg___lam__0___boxed(lean_object* v_fst_854_, lean_object* v_x_855_, lean_object* v___y_856_){
_start:
{
lean_object* v_res_857_; 
v_res_857_ = l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_tryRecv_x27___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector_spec__0___redArg___lam__0(v_fst_854_, v_x_855_);
return v_res_857_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_tryRecv_x27___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector_spec__0___redArg___lam__1(lean_object* v___y_866_, lean_object* v_x_867_){
_start:
{
if (lean_obj_tag(v_x_867_) == 0)
{
lean_object* v_a_869_; lean_object* v___x_871_; uint8_t v_isShared_872_; uint8_t v_isSharedCheck_877_; 
v_a_869_ = lean_ctor_get(v_x_867_, 0);
v_isSharedCheck_877_ = !lean_is_exclusive(v_x_867_);
if (v_isSharedCheck_877_ == 0)
{
v___x_871_ = v_x_867_;
v_isShared_872_ = v_isSharedCheck_877_;
goto v_resetjp_870_;
}
else
{
lean_inc(v_a_869_);
lean_dec(v_x_867_);
v___x_871_ = lean_box(0);
v_isShared_872_ = v_isSharedCheck_877_;
goto v_resetjp_870_;
}
v_resetjp_870_:
{
lean_object* v___x_874_; 
if (v_isShared_872_ == 0)
{
v___x_874_ = v___x_871_;
goto v_reusejp_873_;
}
else
{
lean_object* v_reuseFailAlloc_876_; 
v_reuseFailAlloc_876_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_876_, 0, v_a_869_);
v___x_874_ = v_reuseFailAlloc_876_;
goto v_reusejp_873_;
}
v_reusejp_873_:
{
lean_object* v___x_875_; 
v___x_875_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_875_, 0, v___x_874_);
return v___x_875_;
}
}
}
else
{
lean_object* v_a_878_; lean_object* v_values_879_; lean_object* v_consumers_880_; uint8_t v_closed_881_; lean_object* v___x_883_; uint8_t v_isShared_884_; uint8_t v_isSharedCheck_899_; 
v_a_878_ = lean_ctor_get(v_x_867_, 0);
lean_inc(v_a_878_);
lean_dec_ref_known(v_x_867_, 1);
v_values_879_ = lean_ctor_get(v_a_878_, 0);
v_consumers_880_ = lean_ctor_get(v_a_878_, 1);
v_closed_881_ = lean_ctor_get_uint8(v_a_878_, sizeof(void*)*2);
v_isSharedCheck_899_ = !lean_is_exclusive(v_a_878_);
if (v_isSharedCheck_899_ == 0)
{
v___x_883_ = v_a_878_;
v_isShared_884_ = v_isSharedCheck_899_;
goto v_resetjp_882_;
}
else
{
lean_inc(v_consumers_880_);
lean_inc(v_values_879_);
lean_dec(v_a_878_);
v___x_883_ = lean_box(0);
v_isShared_884_ = v_isSharedCheck_899_;
goto v_resetjp_882_;
}
v_resetjp_882_:
{
lean_object* v___x_885_; 
v___x_885_ = l_Std_Queue_dequeue_x3f___redArg(v_values_879_);
if (lean_obj_tag(v___x_885_) == 1)
{
lean_object* v_val_886_; lean_object* v_fst_887_; lean_object* v_snd_888_; lean_object* v___f_889_; lean_object* v___x_891_; 
v_val_886_ = lean_ctor_get(v___x_885_, 0);
lean_inc(v_val_886_);
lean_dec_ref_known(v___x_885_, 1);
v_fst_887_ = lean_ctor_get(v_val_886_, 0);
lean_inc(v_fst_887_);
v_snd_888_ = lean_ctor_get(v_val_886_, 1);
lean_inc(v_snd_888_);
lean_dec(v_val_886_);
v___f_889_ = lean_alloc_closure((void*)(l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_tryRecv_x27___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector_spec__0___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_889_, 0, v_fst_887_);
if (v_isShared_884_ == 0)
{
lean_ctor_set(v___x_883_, 0, v_snd_888_);
v___x_891_ = v___x_883_;
goto v_reusejp_890_;
}
else
{
lean_object* v_reuseFailAlloc_897_; 
v_reuseFailAlloc_897_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v_reuseFailAlloc_897_, 0, v_snd_888_);
lean_ctor_set(v_reuseFailAlloc_897_, 1, v_consumers_880_);
lean_ctor_set_uint8(v_reuseFailAlloc_897_, sizeof(void*)*2, v_closed_881_);
v___x_891_ = v_reuseFailAlloc_897_;
goto v_reusejp_890_;
}
v_reusejp_890_:
{
lean_object* v___x_892_; uint8_t v___x_893_; lean_object* v___x_894_; lean_object* v___x_895_; lean_object* v___x_896_; 
v___x_892_ = lean_unsigned_to_nat(0u);
v___x_893_ = 0;
v___x_894_ = lean_st_ref_swap(v___y_866_, v___x_891_);
lean_dec(v___x_894_);
v___x_895_ = ((lean_object*)(l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_tryRecv_x27___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector_spec__0___redArg___lam__1___closed__1));
v___x_896_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_892_, v___x_893_, v___x_895_, v___f_889_);
return v___x_896_;
}
}
else
{
lean_object* v___x_898_; 
lean_dec(v___x_885_);
lean_del_object(v___x_883_);
lean_dec_ref(v_consumers_880_);
v___x_898_ = ((lean_object*)(l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_tryRecv_x27___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector_spec__0___redArg___lam__1___closed__3));
return v___x_898_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_tryRecv_x27___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector_spec__0___redArg___lam__1___boxed(lean_object* v___y_900_, lean_object* v_x_901_, lean_object* v___y_902_){
_start:
{
lean_object* v_res_903_; 
v_res_903_ = l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_tryRecv_x27___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector_spec__0___redArg___lam__1(v___y_900_, v_x_901_);
lean_dec(v___y_900_);
return v_res_903_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_tryRecv_x27___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector_spec__0___redArg(lean_object* v___y_904_){
_start:
{
lean_object* v___f_906_; lean_object* v___x_907_; uint8_t v___x_908_; lean_object* v___x_909_; lean_object* v___x_910_; lean_object* v___x_911_; lean_object* v___x_912_; 
lean_inc(v___y_904_);
v___f_906_ = lean_alloc_closure((void*)(l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_tryRecv_x27___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector_spec__0___redArg___lam__1___boxed), 3, 1);
lean_closure_set(v___f_906_, 0, v___y_904_);
v___x_907_ = lean_unsigned_to_nat(0u);
v___x_908_ = 0;
v___x_909_ = lean_st_ref_get(v___y_904_);
v___x_910_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_910_, 0, v___x_909_);
v___x_911_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_911_, 0, v___x_910_);
v___x_912_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_907_, v___x_908_, v___x_911_, v___f_906_);
return v___x_912_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_tryRecv_x27___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector_spec__0___redArg___boxed(lean_object* v___y_913_, lean_object* v___y_914_){
_start:
{
lean_object* v_res_915_; 
v_res_915_ = l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_tryRecv_x27___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector_spec__0___redArg(v___y_913_);
lean_dec(v___y_913_);
return v_res_915_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_tryRecv_x27___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector_spec__0(lean_object* v_00_u03b1_916_, lean_object* v___y_917_){
_start:
{
lean_object* v___x_919_; 
v___x_919_ = l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_tryRecv_x27___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector_spec__0___redArg(v___y_917_);
return v___x_919_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_tryRecv_x27___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector_spec__0___boxed(lean_object* v_00_u03b1_920_, lean_object* v___y_921_, lean_object* v___y_922_){
_start:
{
lean_object* v_res_923_; 
v_res_923_ = l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_tryRecv_x27___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector_spec__0(v_00_u03b1_920_, v___y_921_);
lean_dec(v___y_921_);
return v_res_923_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Waiter_race___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector_spec__1___redArg___lam__0(lean_object* v_promise_924_, lean_object* v_x_925_){
_start:
{
if (lean_obj_tag(v_x_925_) == 0)
{
lean_object* v_a_927_; lean_object* v___x_929_; uint8_t v_isShared_930_; uint8_t v_isSharedCheck_935_; 
v_a_927_ = lean_ctor_get(v_x_925_, 0);
v_isSharedCheck_935_ = !lean_is_exclusive(v_x_925_);
if (v_isSharedCheck_935_ == 0)
{
v___x_929_ = v_x_925_;
v_isShared_930_ = v_isSharedCheck_935_;
goto v_resetjp_928_;
}
else
{
lean_inc(v_a_927_);
lean_dec(v_x_925_);
v___x_929_ = lean_box(0);
v_isShared_930_ = v_isSharedCheck_935_;
goto v_resetjp_928_;
}
v_resetjp_928_:
{
lean_object* v___x_932_; 
if (v_isShared_930_ == 0)
{
v___x_932_ = v___x_929_;
goto v_reusejp_931_;
}
else
{
lean_object* v_reuseFailAlloc_934_; 
v_reuseFailAlloc_934_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_934_, 0, v_a_927_);
v___x_932_ = v_reuseFailAlloc_934_;
goto v_reusejp_931_;
}
v_reusejp_931_:
{
lean_object* v___x_933_; 
v___x_933_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_933_, 0, v___x_932_);
return v___x_933_;
}
}
}
else
{
lean_object* v___x_936_; lean_object* v___x_937_; lean_object* v___x_938_; 
v___x_936_ = lean_io_promise_resolve(v_x_925_, v_promise_924_);
v___x_937_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_937_, 0, v___x_936_);
v___x_938_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_938_, 0, v___x_937_);
return v___x_938_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_Waiter_race___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector_spec__1___redArg___lam__0___boxed(lean_object* v_promise_939_, lean_object* v_x_940_, lean_object* v___y_941_){
_start:
{
lean_object* v_res_942_; 
v_res_942_ = l_Std_Async_Waiter_race___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector_spec__1___redArg___lam__0(v_promise_939_, v_x_940_);
lean_dec(v_promise_939_);
return v_res_942_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Waiter_race___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector_spec__1___redArg___lam__1(lean_object* v_lose_943_, lean_object* v___y_944_, lean_object* v___f_945_, lean_object* v_x_946_){
_start:
{
if (lean_obj_tag(v_x_946_) == 0)
{
lean_object* v_a_948_; lean_object* v___x_950_; uint8_t v_isShared_951_; uint8_t v_isSharedCheck_956_; 
lean_dec_ref(v___f_945_);
lean_dec_ref(v_lose_943_);
v_a_948_ = lean_ctor_get(v_x_946_, 0);
v_isSharedCheck_956_ = !lean_is_exclusive(v_x_946_);
if (v_isSharedCheck_956_ == 0)
{
v___x_950_ = v_x_946_;
v_isShared_951_ = v_isSharedCheck_956_;
goto v_resetjp_949_;
}
else
{
lean_inc(v_a_948_);
lean_dec(v_x_946_);
v___x_950_ = lean_box(0);
v_isShared_951_ = v_isSharedCheck_956_;
goto v_resetjp_949_;
}
v_resetjp_949_:
{
lean_object* v___x_953_; 
if (v_isShared_951_ == 0)
{
v___x_953_ = v___x_950_;
goto v_reusejp_952_;
}
else
{
lean_object* v_reuseFailAlloc_955_; 
v_reuseFailAlloc_955_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_955_, 0, v_a_948_);
v___x_953_ = v_reuseFailAlloc_955_;
goto v_reusejp_952_;
}
v_reusejp_952_:
{
lean_object* v___x_954_; 
v___x_954_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_954_, 0, v___x_953_);
return v___x_954_;
}
}
}
else
{
lean_object* v_a_957_; uint8_t v___x_958_; 
v_a_957_ = lean_ctor_get(v_x_946_, 0);
lean_inc(v_a_957_);
lean_dec_ref_known(v_x_946_, 1);
v___x_958_ = lean_unbox(v_a_957_);
lean_dec(v_a_957_);
if (v___x_958_ == 0)
{
lean_object* v___x_959_; 
lean_dec_ref(v___f_945_);
lean_inc(v___y_944_);
v___x_959_ = lean_apply_2(v_lose_943_, v___y_944_, lean_box(0));
return v___x_959_;
}
else
{
lean_object* v___x_960_; uint8_t v___x_961_; lean_object* v___x_962_; lean_object* v___x_963_; 
lean_dec_ref(v_lose_943_);
v___x_960_ = lean_unsigned_to_nat(0u);
v___x_961_ = 0;
v___x_962_ = l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_tryRecv_x27___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector_spec__0___redArg(v___y_944_);
v___x_963_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_960_, v___x_961_, v___x_962_, v___f_945_);
return v___x_963_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_Waiter_race___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector_spec__1___redArg___lam__1___boxed(lean_object* v_lose_964_, lean_object* v___y_965_, lean_object* v___f_966_, lean_object* v_x_967_, lean_object* v___y_968_){
_start:
{
lean_object* v_res_969_; 
v_res_969_ = l_Std_Async_Waiter_race___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector_spec__1___redArg___lam__1(v_lose_964_, v___y_965_, v___f_966_, v_x_967_);
lean_dec(v___y_965_);
return v_res_969_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Waiter_race___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector_spec__1___redArg(lean_object* v_w_970_, lean_object* v_lose_971_, lean_object* v___y_972_){
_start:
{
lean_object* v_finished_974_; lean_object* v_promise_975_; lean_object* v___f_976_; lean_object* v___f_977_; lean_object* v___x_978_; uint8_t v___x_979_; lean_object* v___x_980_; uint8_t v___y_982_; uint8_t v___x_990_; 
v_finished_974_ = lean_ctor_get(v_w_970_, 0);
lean_inc(v_finished_974_);
v_promise_975_ = lean_ctor_get(v_w_970_, 1);
lean_inc(v_promise_975_);
lean_dec_ref(v_w_970_);
v___f_976_ = lean_alloc_closure((void*)(l_Std_Async_Waiter_race___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector_spec__1___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_976_, 0, v_promise_975_);
lean_inc(v___y_972_);
v___f_977_ = lean_alloc_closure((void*)(l_Std_Async_Waiter_race___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector_spec__1___redArg___lam__1___boxed), 5, 3);
lean_closure_set(v___f_977_, 0, v_lose_971_);
lean_closure_set(v___f_977_, 1, v___y_972_);
lean_closure_set(v___f_977_, 2, v___f_976_);
v___x_978_ = lean_unsigned_to_nat(0u);
v___x_979_ = 0;
v___x_980_ = lean_st_ref_take(v_finished_974_);
v___x_990_ = lean_unbox(v___x_980_);
lean_dec(v___x_980_);
if (v___x_990_ == 0)
{
uint8_t v___x_991_; 
v___x_991_ = 1;
v___y_982_ = v___x_991_;
goto v___jp_981_;
}
else
{
v___y_982_ = v___x_979_;
goto v___jp_981_;
}
v___jp_981_:
{
uint8_t v___x_983_; lean_object* v___x_984_; lean_object* v___x_985_; lean_object* v___x_986_; lean_object* v___x_987_; lean_object* v___x_988_; lean_object* v___x_989_; 
v___x_983_ = 1;
v___x_984_ = lean_box(v___x_983_);
v___x_985_ = lean_st_ref_put(v_finished_974_, v___x_984_);
lean_dec(v_finished_974_);
v___x_986_ = lean_box(v___y_982_);
v___x_987_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_987_, 0, v___x_986_);
v___x_988_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_988_, 0, v___x_987_);
v___x_989_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_978_, v___x_979_, v___x_988_, v___f_977_);
return v___x_989_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_Waiter_race___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector_spec__1___redArg___boxed(lean_object* v_w_992_, lean_object* v_lose_993_, lean_object* v___y_994_, lean_object* v___y_995_){
_start:
{
lean_object* v_res_996_; 
v_res_996_ = l_Std_Async_Waiter_race___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector_spec__1___redArg(v_w_992_, v_lose_993_, v___y_994_);
lean_dec(v___y_994_);
return v_res_996_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Waiter_race___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector_spec__1(lean_object* v_00_u03b1_997_, lean_object* v_w_998_, lean_object* v_lose_999_, lean_object* v___y_1000_){
_start:
{
lean_object* v___x_1002_; 
v___x_1002_ = l_Std_Async_Waiter_race___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector_spec__1___redArg(v_w_998_, v_lose_999_, v___y_1000_);
return v___x_1002_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Waiter_race___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector_spec__1___boxed(lean_object* v_00_u03b1_1003_, lean_object* v_w_1004_, lean_object* v_lose_1005_, lean_object* v___y_1006_, lean_object* v___y_1007_){
_start:
{
lean_object* v_res_1008_; 
v_res_1008_ = l_Std_Async_Waiter_race___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector_spec__1(v_00_u03b1_1003_, v_w_1004_, v_lose_1005_, v___y_1006_);
lean_dec(v___y_1006_);
return v_res_1008_;
}
}
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector_spec__2___redArg___lam__0(lean_object* v___y_1009_){
_start:
{
if (lean_obj_tag(v___y_1009_) == 0)
{
lean_object* v_a_1010_; lean_object* v___x_1012_; uint8_t v_isShared_1013_; uint8_t v_isSharedCheck_1017_; 
v_a_1010_ = lean_ctor_get(v___y_1009_, 0);
v_isSharedCheck_1017_ = !lean_is_exclusive(v___y_1009_);
if (v_isSharedCheck_1017_ == 0)
{
v___x_1012_ = v___y_1009_;
v_isShared_1013_ = v_isSharedCheck_1017_;
goto v_resetjp_1011_;
}
else
{
lean_inc(v_a_1010_);
lean_dec(v___y_1009_);
v___x_1012_ = lean_box(0);
v_isShared_1013_ = v_isSharedCheck_1017_;
goto v_resetjp_1011_;
}
v_resetjp_1011_:
{
lean_object* v___x_1015_; 
if (v_isShared_1013_ == 0)
{
v___x_1015_ = v___x_1012_;
goto v_reusejp_1014_;
}
else
{
lean_object* v_reuseFailAlloc_1016_; 
v_reuseFailAlloc_1016_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1016_, 0, v_a_1010_);
v___x_1015_ = v_reuseFailAlloc_1016_;
goto v_reusejp_1014_;
}
v_reusejp_1014_:
{
return v___x_1015_;
}
}
}
else
{
lean_object* v_a_1018_; lean_object* v___x_1020_; uint8_t v_isShared_1021_; uint8_t v_isSharedCheck_1026_; 
v_a_1018_ = lean_ctor_get(v___y_1009_, 0);
v_isSharedCheck_1026_ = !lean_is_exclusive(v___y_1009_);
if (v_isSharedCheck_1026_ == 0)
{
v___x_1020_ = v___y_1009_;
v_isShared_1021_ = v_isSharedCheck_1026_;
goto v_resetjp_1019_;
}
else
{
lean_inc(v_a_1018_);
lean_dec(v___y_1009_);
v___x_1020_ = lean_box(0);
v_isShared_1021_ = v_isSharedCheck_1026_;
goto v_resetjp_1019_;
}
v_resetjp_1019_:
{
lean_object* v_fst_1022_; lean_object* v___x_1024_; 
v_fst_1022_ = lean_ctor_get(v_a_1018_, 0);
lean_inc(v_fst_1022_);
lean_dec(v_a_1018_);
if (v_isShared_1021_ == 0)
{
lean_ctor_set(v___x_1020_, 0, v_fst_1022_);
v___x_1024_ = v___x_1020_;
goto v_reusejp_1023_;
}
else
{
lean_object* v_reuseFailAlloc_1025_; 
v_reuseFailAlloc_1025_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1025_, 0, v_fst_1022_);
v___x_1024_ = v_reuseFailAlloc_1025_;
goto v_reusejp_1023_;
}
v_reusejp_1023_:
{
return v___x_1024_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector_spec__2___redArg___lam__1(lean_object* v_mutex_1027_, lean_object* v_x_1028_){
_start:
{
lean_object* v___x_1030_; lean_object* v___x_1031_; lean_object* v___x_1032_; 
v___x_1030_ = lean_io_basemutex_unlock(v_mutex_1027_);
v___x_1031_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1031_, 0, v___x_1030_);
v___x_1032_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1032_, 0, v___x_1031_);
return v___x_1032_;
}
}
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector_spec__2___redArg___lam__1___boxed(lean_object* v_mutex_1033_, lean_object* v_x_1034_, lean_object* v___y_1035_){
_start:
{
lean_object* v_res_1036_; 
v_res_1036_ = l_Std_Mutex_atomically___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector_spec__2___redArg___lam__1(v_mutex_1033_, v_x_1034_);
lean_dec(v_x_1034_);
lean_dec(v_mutex_1033_);
return v_res_1036_;
}
}
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector_spec__2___redArg___lam__2(lean_object* v_k_1037_, lean_object* v_ref_1038_, lean_object* v_x_1039_){
_start:
{
if (lean_obj_tag(v_x_1039_) == 0)
{
lean_object* v_a_1041_; lean_object* v___x_1043_; uint8_t v_isShared_1044_; uint8_t v_isSharedCheck_1049_; 
lean_dec(v_ref_1038_);
lean_dec_ref(v_k_1037_);
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
lean_object* v___x_1050_; 
lean_dec_ref_known(v_x_1039_, 1);
v___x_1050_ = lean_apply_2(v_k_1037_, v_ref_1038_, lean_box(0));
return v___x_1050_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector_spec__2___redArg___lam__2___boxed(lean_object* v_k_1051_, lean_object* v_ref_1052_, lean_object* v_x_1053_, lean_object* v___y_1054_){
_start:
{
lean_object* v_res_1055_; 
v_res_1055_ = l_Std_Mutex_atomically___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector_spec__2___redArg___lam__2(v_k_1051_, v_ref_1052_, v_x_1053_);
return v_res_1055_;
}
}
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector_spec__2___redArg___lam__3(lean_object* v_mutex_1056_, lean_object* v___f_1057_){
_start:
{
lean_object* v___x_1059_; uint8_t v___x_1060_; lean_object* v___x_1061_; lean_object* v___x_1062_; lean_object* v___x_1063_; lean_object* v___x_1064_; 
v___x_1059_ = lean_unsigned_to_nat(0u);
v___x_1060_ = 0;
v___x_1061_ = lean_io_basemutex_lock(v_mutex_1056_);
v___x_1062_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1062_, 0, v___x_1061_);
v___x_1063_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1063_, 0, v___x_1062_);
v___x_1064_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_1059_, v___x_1060_, v___x_1063_, v___f_1057_);
return v___x_1064_;
}
}
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector_spec__2___redArg___lam__3___boxed(lean_object* v_mutex_1065_, lean_object* v___f_1066_, lean_object* v___y_1067_){
_start:
{
lean_object* v_res_1068_; 
v_res_1068_ = l_Std_Mutex_atomically___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector_spec__2___redArg___lam__3(v_mutex_1065_, v___f_1066_);
lean_dec(v_mutex_1065_);
return v_res_1068_;
}
}
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector_spec__2___redArg(lean_object* v_mutex_1070_, lean_object* v_k_1071_){
_start:
{
lean_object* v_ref_1073_; lean_object* v_mutex_1074_; lean_object* v___f_1075_; lean_object* v___f_1076_; lean_object* v___f_1077_; lean_object* v___f_1078_; lean_object* v___x_1079_; uint8_t v___x_1080_; lean_object* v___x_1081_; lean_object* v___y_1083_; 
v_ref_1073_ = lean_ctor_get(v_mutex_1070_, 0);
lean_inc(v_ref_1073_);
v_mutex_1074_ = lean_ctor_get(v_mutex_1070_, 1);
lean_inc_n(v_mutex_1074_, 2);
lean_dec_ref(v_mutex_1070_);
v___f_1075_ = ((lean_object*)(l_Std_Mutex_atomically___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector_spec__2___redArg___closed__0));
v___f_1076_ = lean_alloc_closure((void*)(l_Std_Mutex_atomically___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector_spec__2___redArg___lam__1___boxed), 3, 1);
lean_closure_set(v___f_1076_, 0, v_mutex_1074_);
v___f_1077_ = lean_alloc_closure((void*)(l_Std_Mutex_atomically___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector_spec__2___redArg___lam__2___boxed), 4, 2);
lean_closure_set(v___f_1077_, 0, v_k_1071_);
lean_closure_set(v___f_1077_, 1, v_ref_1073_);
v___f_1078_ = lean_alloc_closure((void*)(l_Std_Mutex_atomically___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector_spec__2___redArg___lam__3___boxed), 3, 2);
lean_closure_set(v___f_1078_, 0, v_mutex_1074_);
lean_closure_set(v___f_1078_, 1, v___f_1077_);
v___x_1079_ = lean_unsigned_to_nat(0u);
v___x_1080_ = 0;
v___x_1081_ = l_Std_Async_EAsync_tryFinally_x27___redArg(v___f_1078_, v___f_1076_, v___x_1079_, v___x_1080_);
if (lean_obj_tag(v___x_1081_) == 0)
{
lean_object* v_a_1085_; 
v_a_1085_ = lean_ctor_get(v___x_1081_, 0);
lean_inc(v_a_1085_);
lean_dec_ref_known(v___x_1081_, 1);
if (lean_obj_tag(v_a_1085_) == 0)
{
lean_object* v_a_1086_; lean_object* v___x_1088_; uint8_t v_isShared_1089_; uint8_t v_isSharedCheck_1093_; 
v_a_1086_ = lean_ctor_get(v_a_1085_, 0);
v_isSharedCheck_1093_ = !lean_is_exclusive(v_a_1085_);
if (v_isSharedCheck_1093_ == 0)
{
v___x_1088_ = v_a_1085_;
v_isShared_1089_ = v_isSharedCheck_1093_;
goto v_resetjp_1087_;
}
else
{
lean_inc(v_a_1086_);
lean_dec(v_a_1085_);
v___x_1088_ = lean_box(0);
v_isShared_1089_ = v_isSharedCheck_1093_;
goto v_resetjp_1087_;
}
v_resetjp_1087_:
{
lean_object* v___x_1091_; 
if (v_isShared_1089_ == 0)
{
v___x_1091_ = v___x_1088_;
goto v_reusejp_1090_;
}
else
{
lean_object* v_reuseFailAlloc_1092_; 
v_reuseFailAlloc_1092_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1092_, 0, v_a_1086_);
v___x_1091_ = v_reuseFailAlloc_1092_;
goto v_reusejp_1090_;
}
v_reusejp_1090_:
{
v___y_1083_ = v___x_1091_;
goto v___jp_1082_;
}
}
}
else
{
lean_object* v_a_1094_; lean_object* v___x_1096_; uint8_t v_isShared_1097_; uint8_t v_isSharedCheck_1102_; 
v_a_1094_ = lean_ctor_get(v_a_1085_, 0);
v_isSharedCheck_1102_ = !lean_is_exclusive(v_a_1085_);
if (v_isSharedCheck_1102_ == 0)
{
v___x_1096_ = v_a_1085_;
v_isShared_1097_ = v_isSharedCheck_1102_;
goto v_resetjp_1095_;
}
else
{
lean_inc(v_a_1094_);
lean_dec(v_a_1085_);
v___x_1096_ = lean_box(0);
v_isShared_1097_ = v_isSharedCheck_1102_;
goto v_resetjp_1095_;
}
v_resetjp_1095_:
{
lean_object* v_fst_1098_; lean_object* v___x_1100_; 
v_fst_1098_ = lean_ctor_get(v_a_1094_, 0);
lean_inc(v_fst_1098_);
lean_dec(v_a_1094_);
if (v_isShared_1097_ == 0)
{
lean_ctor_set(v___x_1096_, 0, v_fst_1098_);
v___x_1100_ = v___x_1096_;
goto v_reusejp_1099_;
}
else
{
lean_object* v_reuseFailAlloc_1101_; 
v_reuseFailAlloc_1101_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1101_, 0, v_fst_1098_);
v___x_1100_ = v_reuseFailAlloc_1101_;
goto v_reusejp_1099_;
}
v_reusejp_1099_:
{
v___y_1083_ = v___x_1100_;
goto v___jp_1082_;
}
}
}
}
else
{
lean_object* v_a_1103_; lean_object* v___x_1105_; uint8_t v_isShared_1106_; uint8_t v_isSharedCheck_1111_; 
v_a_1103_ = lean_ctor_get(v___x_1081_, 0);
v_isSharedCheck_1111_ = !lean_is_exclusive(v___x_1081_);
if (v_isSharedCheck_1111_ == 0)
{
v___x_1105_ = v___x_1081_;
v_isShared_1106_ = v_isSharedCheck_1111_;
goto v_resetjp_1104_;
}
else
{
lean_inc(v_a_1103_);
lean_dec(v___x_1081_);
v___x_1105_ = lean_box(0);
v_isShared_1106_ = v_isSharedCheck_1111_;
goto v_resetjp_1104_;
}
v_resetjp_1104_:
{
lean_object* v___x_1107_; lean_object* v___x_1109_; 
v___x_1107_ = lean_task_map(v___f_1075_, v_a_1103_, v___x_1079_, v___x_1080_);
if (v_isShared_1106_ == 0)
{
lean_ctor_set(v___x_1105_, 0, v___x_1107_);
v___x_1109_ = v___x_1105_;
goto v_reusejp_1108_;
}
else
{
lean_object* v_reuseFailAlloc_1110_; 
v_reuseFailAlloc_1110_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1110_, 0, v___x_1107_);
v___x_1109_ = v_reuseFailAlloc_1110_;
goto v_reusejp_1108_;
}
v_reusejp_1108_:
{
return v___x_1109_;
}
}
}
v___jp_1082_:
{
lean_object* v___x_1084_; 
v___x_1084_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1084_, 0, v___y_1083_);
return v___x_1084_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector_spec__2___redArg___boxed(lean_object* v_mutex_1112_, lean_object* v_k_1113_, lean_object* v___y_1114_){
_start:
{
lean_object* v_res_1115_; 
v_res_1115_ = l_Std_Mutex_atomically___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector_spec__2___redArg(v_mutex_1112_, v_k_1113_);
return v_res_1115_;
}
}
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector_spec__2(lean_object* v_00_u03b1_1116_, lean_object* v_00_u03b2_1117_, lean_object* v_mutex_1118_, lean_object* v_k_1119_){
_start:
{
lean_object* v___x_1121_; 
v___x_1121_ = l_Std_Mutex_atomically___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector_spec__2___redArg(v_mutex_1118_, v_k_1119_);
return v___x_1121_;
}
}
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector_spec__2___boxed(lean_object* v_00_u03b1_1122_, lean_object* v_00_u03b2_1123_, lean_object* v_mutex_1124_, lean_object* v_k_1125_, lean_object* v___y_1126_){
_start:
{
lean_object* v_res_1127_; 
v_res_1127_ = l_Std_Mutex_atomically___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector_spec__2(v_00_u03b1_1122_, v_00_u03b2_1123_, v_mutex_1124_, v_k_1125_);
return v_res_1127_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector___redArg___lam__0(lean_object* v_x_1128_){
_start:
{
if (lean_obj_tag(v_x_1128_) == 0)
{
lean_object* v_a_1130_; lean_object* v___x_1132_; uint8_t v_isShared_1133_; uint8_t v_isSharedCheck_1138_; 
v_a_1130_ = lean_ctor_get(v_x_1128_, 0);
v_isSharedCheck_1138_ = !lean_is_exclusive(v_x_1128_);
if (v_isSharedCheck_1138_ == 0)
{
v___x_1132_ = v_x_1128_;
v_isShared_1133_ = v_isSharedCheck_1138_;
goto v_resetjp_1131_;
}
else
{
lean_inc(v_a_1130_);
lean_dec(v_x_1128_);
v___x_1132_ = lean_box(0);
v_isShared_1133_ = v_isSharedCheck_1138_;
goto v_resetjp_1131_;
}
v_resetjp_1131_:
{
lean_object* v___x_1135_; 
if (v_isShared_1133_ == 0)
{
v___x_1135_ = v___x_1132_;
goto v_reusejp_1134_;
}
else
{
lean_object* v_reuseFailAlloc_1137_; 
v_reuseFailAlloc_1137_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1137_, 0, v_a_1130_);
v___x_1135_ = v_reuseFailAlloc_1137_;
goto v_reusejp_1134_;
}
v_reusejp_1134_:
{
lean_object* v___x_1136_; 
v___x_1136_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1136_, 0, v___x_1135_);
return v___x_1136_;
}
}
}
else
{
lean_object* v_a_1139_; lean_object* v___x_1141_; uint8_t v_isShared_1142_; uint8_t v_isSharedCheck_1148_; 
v_a_1139_ = lean_ctor_get(v_x_1128_, 0);
v_isSharedCheck_1148_ = !lean_is_exclusive(v_x_1128_);
if (v_isSharedCheck_1148_ == 0)
{
v___x_1141_ = v_x_1128_;
v_isShared_1142_ = v_isSharedCheck_1148_;
goto v_resetjp_1140_;
}
else
{
lean_inc(v_a_1139_);
lean_dec(v_x_1128_);
v___x_1141_ = lean_box(0);
v_isShared_1142_ = v_isSharedCheck_1148_;
goto v_resetjp_1140_;
}
v_resetjp_1140_:
{
lean_object* v___x_1143_; lean_object* v___x_1145_; 
v___x_1143_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1143_, 0, v_a_1139_);
if (v_isShared_1142_ == 0)
{
lean_ctor_set(v___x_1141_, 0, v___x_1143_);
v___x_1145_ = v___x_1141_;
goto v_reusejp_1144_;
}
else
{
lean_object* v_reuseFailAlloc_1147_; 
v_reuseFailAlloc_1147_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1147_, 0, v___x_1143_);
v___x_1145_ = v_reuseFailAlloc_1147_;
goto v_reusejp_1144_;
}
v_reusejp_1144_:
{
lean_object* v___x_1146_; 
v___x_1146_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1146_, 0, v___x_1145_);
return v___x_1146_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector___redArg___lam__0___boxed(lean_object* v_x_1149_, lean_object* v___y_1150_){
_start:
{
lean_object* v_res_1151_; 
v_res_1151_ = l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector___redArg___lam__0(v_x_1149_);
return v_res_1151_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector___redArg___lam__1(lean_object* v_x_1152_){
_start:
{
uint8_t v___y_1155_; 
if (lean_obj_tag(v_x_1152_) == 0)
{
lean_object* v_a_1159_; lean_object* v___x_1161_; uint8_t v_isShared_1162_; uint8_t v_isSharedCheck_1167_; 
v_a_1159_ = lean_ctor_get(v_x_1152_, 0);
v_isSharedCheck_1167_ = !lean_is_exclusive(v_x_1152_);
if (v_isSharedCheck_1167_ == 0)
{
v___x_1161_ = v_x_1152_;
v_isShared_1162_ = v_isSharedCheck_1167_;
goto v_resetjp_1160_;
}
else
{
lean_inc(v_a_1159_);
lean_dec(v_x_1152_);
v___x_1161_ = lean_box(0);
v_isShared_1162_ = v_isSharedCheck_1167_;
goto v_resetjp_1160_;
}
v_resetjp_1160_:
{
lean_object* v___x_1164_; 
if (v_isShared_1162_ == 0)
{
v___x_1164_ = v___x_1161_;
goto v_reusejp_1163_;
}
else
{
lean_object* v_reuseFailAlloc_1166_; 
v_reuseFailAlloc_1166_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1166_, 0, v_a_1159_);
v___x_1164_ = v_reuseFailAlloc_1166_;
goto v_reusejp_1163_;
}
v_reusejp_1163_:
{
lean_object* v___x_1165_; 
v___x_1165_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1165_, 0, v___x_1164_);
return v___x_1165_;
}
}
}
else
{
lean_object* v_a_1168_; lean_object* v_values_1169_; uint8_t v_closed_1170_; uint8_t v___x_1171_; 
v_a_1168_ = lean_ctor_get(v_x_1152_, 0);
lean_inc(v_a_1168_);
lean_dec_ref_known(v_x_1152_, 1);
v_values_1169_ = lean_ctor_get(v_a_1168_, 0);
lean_inc_ref(v_values_1169_);
v_closed_1170_ = lean_ctor_get_uint8(v_a_1168_, sizeof(void*)*2);
lean_dec(v_a_1168_);
v___x_1171_ = l_Std_Queue_isEmpty___redArg(v_values_1169_);
lean_dec_ref(v_values_1169_);
if (v___x_1171_ == 0)
{
uint8_t v___x_1172_; 
v___x_1172_ = 1;
v___y_1155_ = v___x_1172_;
goto v___jp_1154_;
}
else
{
v___y_1155_ = v_closed_1170_;
goto v___jp_1154_;
}
}
v___jp_1154_:
{
lean_object* v___x_1156_; lean_object* v___x_1157_; lean_object* v___x_1158_; 
v___x_1156_ = lean_box(v___y_1155_);
v___x_1157_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1157_, 0, v___x_1156_);
v___x_1158_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1158_, 0, v___x_1157_);
return v___x_1158_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector___redArg___lam__1___boxed(lean_object* v_x_1173_, lean_object* v___y_1174_){
_start:
{
lean_object* v_res_1175_; 
v_res_1175_ = l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector___redArg___lam__1(v_x_1173_);
return v_res_1175_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector___redArg___lam__2(lean_object* v___x_1176_, lean_object* v___y_1177_){
_start:
{
lean_object* v___x_1179_; lean_object* v___x_1180_; 
v___x_1179_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1179_, 0, v___x_1176_);
v___x_1180_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1180_, 0, v___x_1179_);
return v___x_1180_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector___redArg___lam__2___boxed(lean_object* v___x_1181_, lean_object* v___y_1182_, lean_object* v___y_1183_){
_start:
{
lean_object* v_res_1184_; 
v_res_1184_ = l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector___redArg___lam__2(v___x_1181_, v___y_1182_);
lean_dec(v___y_1182_);
return v_res_1184_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector___redArg___lam__3(lean_object* v___y_1187_, lean_object* v_waiter_1188_, lean_object* v_x_1189_){
_start:
{
if (lean_obj_tag(v_x_1189_) == 0)
{
lean_object* v_a_1191_; lean_object* v___x_1193_; uint8_t v_isShared_1194_; uint8_t v_isSharedCheck_1199_; 
lean_dec_ref(v_waiter_1188_);
v_a_1191_ = lean_ctor_get(v_x_1189_, 0);
v_isSharedCheck_1199_ = !lean_is_exclusive(v_x_1189_);
if (v_isSharedCheck_1199_ == 0)
{
v___x_1193_ = v_x_1189_;
v_isShared_1194_ = v_isSharedCheck_1199_;
goto v_resetjp_1192_;
}
else
{
lean_inc(v_a_1191_);
lean_dec(v_x_1189_);
v___x_1193_ = lean_box(0);
v_isShared_1194_ = v_isSharedCheck_1199_;
goto v_resetjp_1192_;
}
v_resetjp_1192_:
{
lean_object* v___x_1196_; 
if (v_isShared_1194_ == 0)
{
v___x_1196_ = v___x_1193_;
goto v_reusejp_1195_;
}
else
{
lean_object* v_reuseFailAlloc_1198_; 
v_reuseFailAlloc_1198_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1198_, 0, v_a_1191_);
v___x_1196_ = v_reuseFailAlloc_1198_;
goto v_reusejp_1195_;
}
v_reusejp_1195_:
{
lean_object* v___x_1197_; 
v___x_1197_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1197_, 0, v___x_1196_);
return v___x_1197_;
}
}
}
else
{
lean_object* v_a_1200_; uint8_t v___x_1201_; 
v_a_1200_ = lean_ctor_get(v_x_1189_, 0);
lean_inc(v_a_1200_);
lean_dec_ref_known(v_x_1189_, 1);
v___x_1201_ = lean_unbox(v_a_1200_);
lean_dec(v_a_1200_);
if (v___x_1201_ == 0)
{
lean_object* v___x_1202_; lean_object* v_values_1203_; lean_object* v_consumers_1204_; uint8_t v_closed_1205_; lean_object* v___x_1207_; uint8_t v_isShared_1208_; uint8_t v_isSharedCheck_1216_; 
v___x_1202_ = lean_st_ref_take(v___y_1187_);
v_values_1203_ = lean_ctor_get(v___x_1202_, 0);
v_consumers_1204_ = lean_ctor_get(v___x_1202_, 1);
v_closed_1205_ = lean_ctor_get_uint8(v___x_1202_, sizeof(void*)*2);
v_isSharedCheck_1216_ = !lean_is_exclusive(v___x_1202_);
if (v_isSharedCheck_1216_ == 0)
{
v___x_1207_ = v___x_1202_;
v_isShared_1208_ = v_isSharedCheck_1216_;
goto v_resetjp_1206_;
}
else
{
lean_inc(v_consumers_1204_);
lean_inc(v_values_1203_);
lean_dec(v___x_1202_);
v___x_1207_ = lean_box(0);
v_isShared_1208_ = v_isSharedCheck_1216_;
goto v_resetjp_1206_;
}
v_resetjp_1206_:
{
lean_object* v___x_1209_; lean_object* v___x_1210_; lean_object* v___x_1212_; 
v___x_1209_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1209_, 0, v_waiter_1188_);
v___x_1210_ = l_Std_Queue_enqueue___redArg(v___x_1209_, v_consumers_1204_);
if (v_isShared_1208_ == 0)
{
lean_ctor_set(v___x_1207_, 1, v___x_1210_);
v___x_1212_ = v___x_1207_;
goto v_reusejp_1211_;
}
else
{
lean_object* v_reuseFailAlloc_1215_; 
v_reuseFailAlloc_1215_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v_reuseFailAlloc_1215_, 0, v_values_1203_);
lean_ctor_set(v_reuseFailAlloc_1215_, 1, v___x_1210_);
lean_ctor_set_uint8(v_reuseFailAlloc_1215_, sizeof(void*)*2, v_closed_1205_);
v___x_1212_ = v_reuseFailAlloc_1215_;
goto v_reusejp_1211_;
}
v_reusejp_1211_:
{
lean_object* v___x_1213_; lean_object* v___x_1214_; 
v___x_1213_ = lean_st_ref_put(v___y_1187_, v___x_1212_);
v___x_1214_ = ((lean_object*)(l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_tryRecv_x27___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector_spec__0___redArg___lam__1___closed__1));
return v___x_1214_;
}
}
}
else
{
lean_object* v_lose_1217_; lean_object* v___x_1218_; 
v_lose_1217_ = ((lean_object*)(l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector___redArg___lam__3___closed__0));
v___x_1218_ = l_Std_Async_Waiter_race___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector_spec__1___redArg(v_waiter_1188_, v_lose_1217_, v___y_1187_);
return v___x_1218_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector___redArg___lam__3___boxed(lean_object* v___y_1219_, lean_object* v_waiter_1220_, lean_object* v_x_1221_, lean_object* v___y_1222_){
_start:
{
lean_object* v_res_1223_; 
v_res_1223_ = l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector___redArg___lam__3(v___y_1219_, v_waiter_1220_, v_x_1221_);
lean_dec(v___y_1219_);
return v_res_1223_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector___redArg___lam__4(lean_object* v_waiter_1224_, lean_object* v___f_1225_, lean_object* v___y_1226_){
_start:
{
lean_object* v___f_1228_; lean_object* v___x_1229_; uint8_t v___x_1230_; lean_object* v___x_1231_; lean_object* v___x_1232_; lean_object* v___x_1233_; lean_object* v___x_1234_; lean_object* v___x_1235_; 
lean_inc(v___y_1226_);
v___f_1228_ = lean_alloc_closure((void*)(l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector___redArg___lam__3___boxed), 4, 2);
lean_closure_set(v___f_1228_, 0, v___y_1226_);
lean_closure_set(v___f_1228_, 1, v_waiter_1224_);
v___x_1229_ = lean_unsigned_to_nat(0u);
v___x_1230_ = 0;
v___x_1231_ = lean_st_ref_get(v___y_1226_);
v___x_1232_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1232_, 0, v___x_1231_);
v___x_1233_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1233_, 0, v___x_1232_);
v___x_1234_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_1229_, v___x_1230_, v___x_1233_, v___f_1225_);
v___x_1235_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_1229_, v___x_1230_, v___x_1234_, v___f_1228_);
return v___x_1235_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector___redArg___lam__4___boxed(lean_object* v_waiter_1236_, lean_object* v___f_1237_, lean_object* v___y_1238_, lean_object* v___y_1239_){
_start:
{
lean_object* v_res_1240_; 
v_res_1240_ = l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector___redArg___lam__4(v_waiter_1236_, v___f_1237_, v___y_1238_);
lean_dec(v___y_1238_);
return v_res_1240_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector___redArg___lam__5(lean_object* v___f_1241_, lean_object* v_ch_1242_, lean_object* v_waiter_1243_){
_start:
{
lean_object* v___f_1245_; lean_object* v___x_1246_; 
v___f_1245_ = lean_alloc_closure((void*)(l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector___redArg___lam__4___boxed), 4, 2);
lean_closure_set(v___f_1245_, 0, v_waiter_1243_);
lean_closure_set(v___f_1245_, 1, v___f_1241_);
v___x_1246_ = l_Std_Mutex_atomically___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector_spec__2___redArg(v_ch_1242_, v___f_1245_);
return v___x_1246_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector___redArg___lam__5___boxed(lean_object* v___f_1247_, lean_object* v_ch_1248_, lean_object* v_waiter_1249_, lean_object* v___y_1250_){
_start:
{
lean_object* v_res_1251_; 
v_res_1251_ = l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector___redArg___lam__5(v___f_1247_, v_ch_1248_, v_waiter_1249_);
return v_res_1251_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector___redArg___lam__7(lean_object* v___y_1256_, lean_object* v___f_1257_, lean_object* v_x_1258_){
_start:
{
if (lean_obj_tag(v_x_1258_) == 0)
{
lean_object* v_a_1260_; lean_object* v___x_1262_; uint8_t v_isShared_1263_; uint8_t v_isSharedCheck_1268_; 
lean_dec_ref(v___f_1257_);
v_a_1260_ = lean_ctor_get(v_x_1258_, 0);
v_isSharedCheck_1268_ = !lean_is_exclusive(v_x_1258_);
if (v_isSharedCheck_1268_ == 0)
{
v___x_1262_ = v_x_1258_;
v_isShared_1263_ = v_isSharedCheck_1268_;
goto v_resetjp_1261_;
}
else
{
lean_inc(v_a_1260_);
lean_dec(v_x_1258_);
v___x_1262_ = lean_box(0);
v_isShared_1263_ = v_isSharedCheck_1268_;
goto v_resetjp_1261_;
}
v_resetjp_1261_:
{
lean_object* v___x_1265_; 
if (v_isShared_1263_ == 0)
{
v___x_1265_ = v___x_1262_;
goto v_reusejp_1264_;
}
else
{
lean_object* v_reuseFailAlloc_1267_; 
v_reuseFailAlloc_1267_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1267_, 0, v_a_1260_);
v___x_1265_ = v_reuseFailAlloc_1267_;
goto v_reusejp_1264_;
}
v_reusejp_1264_:
{
lean_object* v___x_1266_; 
v___x_1266_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1266_, 0, v___x_1265_);
return v___x_1266_;
}
}
}
else
{
lean_object* v_a_1269_; uint8_t v___x_1270_; 
v_a_1269_ = lean_ctor_get(v_x_1258_, 0);
lean_inc(v_a_1269_);
lean_dec_ref_known(v_x_1258_, 1);
v___x_1270_ = lean_unbox(v_a_1269_);
lean_dec(v_a_1269_);
if (v___x_1270_ == 0)
{
lean_object* v___x_1271_; 
lean_dec_ref(v___f_1257_);
v___x_1271_ = ((lean_object*)(l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector___redArg___lam__7___closed__1));
return v___x_1271_;
}
else
{
lean_object* v___x_1272_; uint8_t v___x_1273_; lean_object* v___x_1274_; lean_object* v___x_1275_; 
v___x_1272_ = lean_unsigned_to_nat(0u);
v___x_1273_ = 0;
v___x_1274_ = l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_tryRecv_x27___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector_spec__0___redArg(v___y_1256_);
v___x_1275_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_1272_, v___x_1273_, v___x_1274_, v___f_1257_);
return v___x_1275_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector___redArg___lam__7___boxed(lean_object* v___y_1276_, lean_object* v___f_1277_, lean_object* v_x_1278_, lean_object* v___y_1279_){
_start:
{
lean_object* v_res_1280_; 
v_res_1280_ = l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector___redArg___lam__7(v___y_1276_, v___f_1277_, v_x_1278_);
lean_dec(v___y_1276_);
return v_res_1280_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector___redArg___lam__6(lean_object* v___f_1281_, lean_object* v___f_1282_, lean_object* v___y_1283_){
_start:
{
lean_object* v___f_1285_; lean_object* v___x_1286_; uint8_t v___x_1287_; lean_object* v___x_1288_; lean_object* v___x_1289_; lean_object* v___x_1290_; lean_object* v___x_1291_; lean_object* v___x_1292_; 
lean_inc(v___y_1283_);
v___f_1285_ = lean_alloc_closure((void*)(l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector___redArg___lam__7___boxed), 4, 2);
lean_closure_set(v___f_1285_, 0, v___y_1283_);
lean_closure_set(v___f_1285_, 1, v___f_1281_);
v___x_1286_ = lean_unsigned_to_nat(0u);
v___x_1287_ = 0;
v___x_1288_ = lean_st_ref_get(v___y_1283_);
v___x_1289_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1289_, 0, v___x_1288_);
v___x_1290_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1290_, 0, v___x_1289_);
v___x_1291_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_1286_, v___x_1287_, v___x_1290_, v___f_1282_);
v___x_1292_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_1286_, v___x_1287_, v___x_1291_, v___f_1285_);
return v___x_1292_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector___redArg___lam__6___boxed(lean_object* v___f_1293_, lean_object* v___f_1294_, lean_object* v___y_1295_, lean_object* v___y_1296_){
_start:
{
lean_object* v_res_1297_; 
v_res_1297_ = l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector___redArg___lam__6(v___f_1293_, v___f_1294_, v___y_1295_);
lean_dec(v___y_1295_);
return v_res_1297_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector___redArg___lam__8(lean_object* v_values_1298_, uint8_t v_closed_1299_, lean_object* v___y_1300_, lean_object* v_x_1301_){
_start:
{
if (lean_obj_tag(v_x_1301_) == 0)
{
lean_object* v_a_1303_; lean_object* v___x_1305_; uint8_t v_isShared_1306_; uint8_t v_isSharedCheck_1311_; 
lean_dec_ref(v_values_1298_);
v_a_1303_ = lean_ctor_get(v_x_1301_, 0);
v_isSharedCheck_1311_ = !lean_is_exclusive(v_x_1301_);
if (v_isSharedCheck_1311_ == 0)
{
v___x_1305_ = v_x_1301_;
v_isShared_1306_ = v_isSharedCheck_1311_;
goto v_resetjp_1304_;
}
else
{
lean_inc(v_a_1303_);
lean_dec(v_x_1301_);
v___x_1305_ = lean_box(0);
v_isShared_1306_ = v_isSharedCheck_1311_;
goto v_resetjp_1304_;
}
v_resetjp_1304_:
{
lean_object* v___x_1308_; 
if (v_isShared_1306_ == 0)
{
v___x_1308_ = v___x_1305_;
goto v_reusejp_1307_;
}
else
{
lean_object* v_reuseFailAlloc_1310_; 
v_reuseFailAlloc_1310_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1310_, 0, v_a_1303_);
v___x_1308_ = v_reuseFailAlloc_1310_;
goto v_reusejp_1307_;
}
v_reusejp_1307_:
{
lean_object* v___x_1309_; 
v___x_1309_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1309_, 0, v___x_1308_);
return v___x_1309_;
}
}
}
else
{
lean_object* v_a_1312_; lean_object* v___x_1313_; lean_object* v___x_1314_; lean_object* v___x_1315_; 
v_a_1312_ = lean_ctor_get(v_x_1301_, 0);
lean_inc(v_a_1312_);
lean_dec_ref_known(v_x_1301_, 1);
v___x_1313_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_1313_, 0, v_values_1298_);
lean_ctor_set(v___x_1313_, 1, v_a_1312_);
lean_ctor_set_uint8(v___x_1313_, sizeof(void*)*2, v_closed_1299_);
v___x_1314_ = lean_st_ref_swap(v___y_1300_, v___x_1313_);
lean_dec(v___x_1314_);
v___x_1315_ = ((lean_object*)(l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_tryRecv_x27___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector_spec__0___redArg___lam__1___closed__1));
return v___x_1315_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector___redArg___lam__8___boxed(lean_object* v_values_1316_, lean_object* v_closed_1317_, lean_object* v___y_1318_, lean_object* v_x_1319_, lean_object* v___y_1320_){
_start:
{
uint8_t v_closed_boxed_1321_; lean_object* v_res_1322_; 
v_closed_boxed_1321_ = lean_unbox(v_closed_1317_);
v_res_1322_ = l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector___redArg___lam__8(v_values_1316_, v_closed_boxed_1321_, v___y_1318_, v_x_1319_);
lean_dec(v___y_1318_);
return v_res_1322_;
}
}
LEAN_EXPORT lean_object* l_Std_Queue_filterM___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector_spec__3___redArg___lam__0(lean_object* v_x_1323_){
_start:
{
if (lean_obj_tag(v_x_1323_) == 0)
{
lean_object* v___x_1325_; 
v___x_1325_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1325_, 0, v_x_1323_);
return v___x_1325_;
}
else
{
lean_object* v_a_1326_; lean_object* v___x_1328_; uint8_t v_isShared_1329_; uint8_t v_isSharedCheck_1335_; 
v_a_1326_ = lean_ctor_get(v_x_1323_, 0);
v_isSharedCheck_1335_ = !lean_is_exclusive(v_x_1323_);
if (v_isSharedCheck_1335_ == 0)
{
v___x_1328_ = v_x_1323_;
v_isShared_1329_ = v_isSharedCheck_1335_;
goto v_resetjp_1327_;
}
else
{
lean_inc(v_a_1326_);
lean_dec(v_x_1323_);
v___x_1328_ = lean_box(0);
v_isShared_1329_ = v_isSharedCheck_1335_;
goto v_resetjp_1327_;
}
v_resetjp_1327_:
{
lean_object* v___x_1330_; lean_object* v___x_1332_; 
v___x_1330_ = l_List_reverse___redArg(v_a_1326_);
if (v_isShared_1329_ == 0)
{
lean_ctor_set(v___x_1328_, 0, v___x_1330_);
v___x_1332_ = v___x_1328_;
goto v_reusejp_1331_;
}
else
{
lean_object* v_reuseFailAlloc_1334_; 
v_reuseFailAlloc_1334_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1334_, 0, v___x_1330_);
v___x_1332_ = v_reuseFailAlloc_1334_;
goto v_reusejp_1331_;
}
v_reusejp_1331_:
{
lean_object* v___x_1333_; 
v___x_1333_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1333_, 0, v___x_1332_);
return v___x_1333_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Queue_filterM___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector_spec__3___redArg___lam__0___boxed(lean_object* v_x_1336_, lean_object* v___y_1337_){
_start:
{
lean_object* v_res_1338_; 
v_res_1338_ = l_Std_Queue_filterM___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector_spec__3___redArg___lam__0(v_x_1336_);
return v_res_1338_;
}
}
LEAN_EXPORT lean_object* l_Std_Queue_filterM___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector_spec__3___redArg___lam__2(lean_object* v_a_1339_, lean_object* v___x_1340_, lean_object* v_x_1341_){
_start:
{
if (lean_obj_tag(v_x_1341_) == 0)
{
lean_object* v_a_1343_; lean_object* v___x_1345_; uint8_t v_isShared_1346_; uint8_t v_isSharedCheck_1351_; 
lean_dec(v___x_1340_);
lean_dec(v_a_1339_);
v_a_1343_ = lean_ctor_get(v_x_1341_, 0);
v_isSharedCheck_1351_ = !lean_is_exclusive(v_x_1341_);
if (v_isSharedCheck_1351_ == 0)
{
v___x_1345_ = v_x_1341_;
v_isShared_1346_ = v_isSharedCheck_1351_;
goto v_resetjp_1344_;
}
else
{
lean_inc(v_a_1343_);
lean_dec(v_x_1341_);
v___x_1345_ = lean_box(0);
v_isShared_1346_ = v_isSharedCheck_1351_;
goto v_resetjp_1344_;
}
v_resetjp_1344_:
{
lean_object* v___x_1348_; 
if (v_isShared_1346_ == 0)
{
v___x_1348_ = v___x_1345_;
goto v_reusejp_1347_;
}
else
{
lean_object* v_reuseFailAlloc_1350_; 
v_reuseFailAlloc_1350_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1350_, 0, v_a_1343_);
v___x_1348_ = v_reuseFailAlloc_1350_;
goto v_reusejp_1347_;
}
v_reusejp_1347_:
{
lean_object* v___x_1349_; 
v___x_1349_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1349_, 0, v___x_1348_);
return v___x_1349_;
}
}
}
else
{
lean_object* v_a_1352_; lean_object* v___x_1354_; uint8_t v_isShared_1355_; uint8_t v_isSharedCheck_1368_; 
v_a_1352_ = lean_ctor_get(v_x_1341_, 0);
v_isSharedCheck_1368_ = !lean_is_exclusive(v_x_1341_);
if (v_isSharedCheck_1368_ == 0)
{
v___x_1354_ = v_x_1341_;
v_isShared_1355_ = v_isSharedCheck_1368_;
goto v_resetjp_1353_;
}
else
{
lean_inc(v_a_1352_);
lean_dec(v_x_1341_);
v___x_1354_ = lean_box(0);
v_isShared_1355_ = v_isSharedCheck_1368_;
goto v_resetjp_1353_;
}
v_resetjp_1353_:
{
uint8_t v___x_1356_; 
v___x_1356_ = l_List_isEmpty___redArg(v_a_1339_);
if (v___x_1356_ == 0)
{
lean_object* v___x_1357_; lean_object* v___x_1359_; 
lean_dec(v___x_1340_);
v___x_1357_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1357_, 0, v_a_1352_);
lean_ctor_set(v___x_1357_, 1, v_a_1339_);
if (v_isShared_1355_ == 0)
{
lean_ctor_set(v___x_1354_, 0, v___x_1357_);
v___x_1359_ = v___x_1354_;
goto v_reusejp_1358_;
}
else
{
lean_object* v_reuseFailAlloc_1361_; 
v_reuseFailAlloc_1361_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1361_, 0, v___x_1357_);
v___x_1359_ = v_reuseFailAlloc_1361_;
goto v_reusejp_1358_;
}
v_reusejp_1358_:
{
lean_object* v___x_1360_; 
v___x_1360_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1360_, 0, v___x_1359_);
return v___x_1360_;
}
}
else
{
lean_object* v___x_1362_; lean_object* v___x_1363_; lean_object* v___x_1365_; 
lean_dec(v_a_1339_);
v___x_1362_ = l_List_reverse___redArg(v_a_1352_);
v___x_1363_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1363_, 0, v___x_1340_);
lean_ctor_set(v___x_1363_, 1, v___x_1362_);
if (v_isShared_1355_ == 0)
{
lean_ctor_set(v___x_1354_, 0, v___x_1363_);
v___x_1365_ = v___x_1354_;
goto v_reusejp_1364_;
}
else
{
lean_object* v_reuseFailAlloc_1367_; 
v_reuseFailAlloc_1367_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1367_, 0, v___x_1363_);
v___x_1365_ = v_reuseFailAlloc_1367_;
goto v_reusejp_1364_;
}
v_reusejp_1364_:
{
lean_object* v___x_1366_; 
v___x_1366_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1366_, 0, v___x_1365_);
return v___x_1366_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Queue_filterM___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector_spec__3___redArg___lam__2___boxed(lean_object* v_a_1369_, lean_object* v___x_1370_, lean_object* v_x_1371_, lean_object* v___y_1372_){
_start:
{
lean_object* v_res_1373_; 
v_res_1373_ = l_Std_Queue_filterM___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector_spec__3___redArg___lam__2(v_a_1369_, v___x_1370_, v_x_1371_);
return v_res_1373_;
}
}
LEAN_EXPORT lean_object* l_List_filterAuxM___at___00Std_Queue_filterM___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector_spec__3_spec__3___redArg___lam__1(lean_object* v_x_1374_){
_start:
{
uint8_t v___y_1377_; 
if (lean_obj_tag(v_x_1374_) == 0)
{
lean_object* v___x_1381_; 
v___x_1381_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1381_, 0, v_x_1374_);
return v___x_1381_;
}
else
{
lean_object* v_a_1382_; uint8_t v___x_1383_; 
v_a_1382_ = lean_ctor_get(v_x_1374_, 0);
lean_inc(v_a_1382_);
lean_dec_ref_known(v_x_1374_, 1);
v___x_1383_ = lean_unbox(v_a_1382_);
lean_dec(v_a_1382_);
if (v___x_1383_ == 0)
{
uint8_t v___x_1384_; 
v___x_1384_ = 1;
v___y_1377_ = v___x_1384_;
goto v___jp_1376_;
}
else
{
uint8_t v___x_1385_; 
v___x_1385_ = 0;
v___y_1377_ = v___x_1385_;
goto v___jp_1376_;
}
}
v___jp_1376_:
{
lean_object* v___x_1378_; lean_object* v___x_1379_; lean_object* v___x_1380_; 
v___x_1378_ = lean_box(v___y_1377_);
v___x_1379_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1379_, 0, v___x_1378_);
v___x_1380_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1380_, 0, v___x_1379_);
return v___x_1380_;
}
}
}
LEAN_EXPORT lean_object* l_List_filterAuxM___at___00Std_Queue_filterM___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector_spec__3_spec__3___redArg___lam__1___boxed(lean_object* v_x_1386_, lean_object* v___y_1387_){
_start:
{
lean_object* v_res_1388_; 
v_res_1388_ = l_List_filterAuxM___at___00Std_Queue_filterM___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector_spec__3_spec__3___redArg___lam__1(v_x_1386_);
return v_res_1388_;
}
}
LEAN_EXPORT lean_object* l_List_filterAuxM___at___00Std_Queue_filterM___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector_spec__3_spec__3___redArg___lam__0___boxed(lean_object* v_tail_1389_, lean_object* v_x_1390_, lean_object* v_head_1391_, lean_object* v_x_1392_, lean_object* v___y_1393_){
_start:
{
lean_object* v_res_1394_; 
v_res_1394_ = l_List_filterAuxM___at___00Std_Queue_filterM___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector_spec__3_spec__3___redArg___lam__0(v_tail_1389_, v_x_1390_, v_head_1391_, v_x_1392_);
return v_res_1394_;
}
}
LEAN_EXPORT lean_object* l_List_filterAuxM___at___00Std_Queue_filterM___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector_spec__3_spec__3___redArg(lean_object* v_x_1401_, lean_object* v_x_1402_){
_start:
{
if (lean_obj_tag(v_x_1401_) == 0)
{
lean_object* v___x_1404_; lean_object* v___x_1405_; 
v___x_1404_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1404_, 0, v_x_1402_);
v___x_1405_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1405_, 0, v___x_1404_);
return v___x_1405_;
}
else
{
lean_object* v_head_1406_; lean_object* v_tail_1407_; lean_object* v___f_1408_; lean_object* v___x_1409_; uint8_t v___x_1410_; 
v_head_1406_ = lean_ctor_get(v_x_1401_, 0);
lean_inc_n(v_head_1406_, 2);
v_tail_1407_ = lean_ctor_get(v_x_1401_, 1);
lean_inc(v_tail_1407_);
lean_dec_ref_known(v_x_1401_, 2);
v___f_1408_ = lean_alloc_closure((void*)(l_List_filterAuxM___at___00Std_Queue_filterM___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector_spec__3_spec__3___redArg___lam__0___boxed), 5, 3);
lean_closure_set(v___f_1408_, 0, v_tail_1407_);
lean_closure_set(v___f_1408_, 1, v_x_1402_);
lean_closure_set(v___f_1408_, 2, v_head_1406_);
v___x_1409_ = lean_unsigned_to_nat(0u);
v___x_1410_ = 0;
if (lean_obj_tag(v_head_1406_) == 0)
{
lean_object* v___x_1411_; lean_object* v___x_1412_; 
lean_dec_ref_known(v_head_1406_, 1);
v___x_1411_ = ((lean_object*)(l_List_filterAuxM___at___00Std_Queue_filterM___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector_spec__3_spec__3___redArg___closed__1));
v___x_1412_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_1409_, v___x_1410_, v___x_1411_, v___f_1408_);
return v___x_1412_;
}
else
{
lean_object* v_finished_1413_; lean_object* v___x_1415_; uint8_t v_isShared_1416_; uint8_t v_isSharedCheck_1426_; 
v_finished_1413_ = lean_ctor_get(v_head_1406_, 0);
v_isSharedCheck_1426_ = !lean_is_exclusive(v_head_1406_);
if (v_isSharedCheck_1426_ == 0)
{
v___x_1415_ = v_head_1406_;
v_isShared_1416_ = v_isSharedCheck_1426_;
goto v_resetjp_1414_;
}
else
{
lean_inc(v_finished_1413_);
lean_dec(v_head_1406_);
v___x_1415_ = lean_box(0);
v_isShared_1416_ = v_isSharedCheck_1426_;
goto v_resetjp_1414_;
}
v_resetjp_1414_:
{
lean_object* v_finished_1417_; lean_object* v___f_1418_; lean_object* v___x_1419_; lean_object* v___x_1421_; 
v_finished_1417_ = lean_ctor_get(v_finished_1413_, 0);
lean_inc(v_finished_1417_);
lean_dec_ref(v_finished_1413_);
v___f_1418_ = ((lean_object*)(l_List_filterAuxM___at___00Std_Queue_filterM___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector_spec__3_spec__3___redArg___closed__2));
v___x_1419_ = lean_st_ref_get(v_finished_1417_);
lean_dec(v_finished_1417_);
if (v_isShared_1416_ == 0)
{
lean_ctor_set(v___x_1415_, 0, v___x_1419_);
v___x_1421_ = v___x_1415_;
goto v_reusejp_1420_;
}
else
{
lean_object* v_reuseFailAlloc_1425_; 
v_reuseFailAlloc_1425_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1425_, 0, v___x_1419_);
v___x_1421_ = v_reuseFailAlloc_1425_;
goto v_reusejp_1420_;
}
v_reusejp_1420_:
{
lean_object* v___x_1422_; lean_object* v___x_1423_; lean_object* v___x_1424_; 
v___x_1422_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1422_, 0, v___x_1421_);
v___x_1423_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_1409_, v___x_1410_, v___x_1422_, v___f_1418_);
v___x_1424_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_1409_, v___x_1410_, v___x_1423_, v___f_1408_);
return v___x_1424_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_filterAuxM___at___00Std_Queue_filterM___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector_spec__3_spec__3___redArg___lam__0(lean_object* v_tail_1427_, lean_object* v_x_1428_, lean_object* v_head_1429_, lean_object* v_x_1430_){
_start:
{
if (lean_obj_tag(v_x_1430_) == 0)
{
lean_object* v_a_1432_; lean_object* v___x_1434_; uint8_t v_isShared_1435_; uint8_t v_isSharedCheck_1440_; 
lean_dec_ref(v_head_1429_);
lean_dec(v_x_1428_);
lean_dec(v_tail_1427_);
v_a_1432_ = lean_ctor_get(v_x_1430_, 0);
v_isSharedCheck_1440_ = !lean_is_exclusive(v_x_1430_);
if (v_isSharedCheck_1440_ == 0)
{
v___x_1434_ = v_x_1430_;
v_isShared_1435_ = v_isSharedCheck_1440_;
goto v_resetjp_1433_;
}
else
{
lean_inc(v_a_1432_);
lean_dec(v_x_1430_);
v___x_1434_ = lean_box(0);
v_isShared_1435_ = v_isSharedCheck_1440_;
goto v_resetjp_1433_;
}
v_resetjp_1433_:
{
lean_object* v___x_1437_; 
if (v_isShared_1435_ == 0)
{
v___x_1437_ = v___x_1434_;
goto v_reusejp_1436_;
}
else
{
lean_object* v_reuseFailAlloc_1439_; 
v_reuseFailAlloc_1439_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1439_, 0, v_a_1432_);
v___x_1437_ = v_reuseFailAlloc_1439_;
goto v_reusejp_1436_;
}
v_reusejp_1436_:
{
lean_object* v___x_1438_; 
v___x_1438_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1438_, 0, v___x_1437_);
return v___x_1438_;
}
}
}
else
{
lean_object* v_a_1441_; uint8_t v___x_1442_; 
v_a_1441_ = lean_ctor_get(v_x_1430_, 0);
lean_inc(v_a_1441_);
lean_dec_ref_known(v_x_1430_, 1);
v___x_1442_ = lean_unbox(v_a_1441_);
lean_dec(v_a_1441_);
if (v___x_1442_ == 0)
{
lean_object* v___x_1443_; 
lean_dec_ref(v_head_1429_);
v___x_1443_ = l_List_filterAuxM___at___00Std_Queue_filterM___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector_spec__3_spec__3___redArg(v_tail_1427_, v_x_1428_);
return v___x_1443_;
}
else
{
lean_object* v___x_1444_; lean_object* v___x_1445_; 
v___x_1444_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1444_, 0, v_head_1429_);
lean_ctor_set(v___x_1444_, 1, v_x_1428_);
v___x_1445_ = l_List_filterAuxM___at___00Std_Queue_filterM___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector_spec__3_spec__3___redArg(v_tail_1427_, v___x_1444_);
return v___x_1445_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_filterAuxM___at___00Std_Queue_filterM___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector_spec__3_spec__3___redArg___boxed(lean_object* v_x_1446_, lean_object* v_x_1447_, lean_object* v___y_1448_){
_start:
{
lean_object* v_res_1449_; 
v_res_1449_ = l_List_filterAuxM___at___00Std_Queue_filterM___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector_spec__3_spec__3___redArg(v_x_1446_, v_x_1447_);
return v_res_1449_;
}
}
LEAN_EXPORT lean_object* l_Std_Queue_filterM___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector_spec__3___redArg___lam__1(lean_object* v___x_1450_, lean_object* v_eList_1451_, lean_object* v___f_1452_, lean_object* v_x_1453_){
_start:
{
if (lean_obj_tag(v_x_1453_) == 0)
{
lean_object* v_a_1455_; lean_object* v___x_1457_; uint8_t v_isShared_1458_; uint8_t v_isSharedCheck_1463_; 
lean_dec_ref(v___f_1452_);
lean_dec(v_eList_1451_);
lean_dec(v___x_1450_);
v_a_1455_ = lean_ctor_get(v_x_1453_, 0);
v_isSharedCheck_1463_ = !lean_is_exclusive(v_x_1453_);
if (v_isSharedCheck_1463_ == 0)
{
v___x_1457_ = v_x_1453_;
v_isShared_1458_ = v_isSharedCheck_1463_;
goto v_resetjp_1456_;
}
else
{
lean_inc(v_a_1455_);
lean_dec(v_x_1453_);
v___x_1457_ = lean_box(0);
v_isShared_1458_ = v_isSharedCheck_1463_;
goto v_resetjp_1456_;
}
v_resetjp_1456_:
{
lean_object* v___x_1460_; 
if (v_isShared_1458_ == 0)
{
v___x_1460_ = v___x_1457_;
goto v_reusejp_1459_;
}
else
{
lean_object* v_reuseFailAlloc_1462_; 
v_reuseFailAlloc_1462_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1462_, 0, v_a_1455_);
v___x_1460_ = v_reuseFailAlloc_1462_;
goto v_reusejp_1459_;
}
v_reusejp_1459_:
{
lean_object* v___x_1461_; 
v___x_1461_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1461_, 0, v___x_1460_);
return v___x_1461_;
}
}
}
else
{
lean_object* v_a_1464_; lean_object* v___f_1465_; lean_object* v___x_1466_; uint8_t v___x_1467_; lean_object* v___x_1468_; lean_object* v___x_1469_; lean_object* v___x_1470_; 
v_a_1464_ = lean_ctor_get(v_x_1453_, 0);
lean_inc(v_a_1464_);
lean_dec_ref_known(v_x_1453_, 1);
lean_inc(v___x_1450_);
v___f_1465_ = lean_alloc_closure((void*)(l_Std_Queue_filterM___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector_spec__3___redArg___lam__2___boxed), 4, 2);
lean_closure_set(v___f_1465_, 0, v_a_1464_);
lean_closure_set(v___f_1465_, 1, v___x_1450_);
v___x_1466_ = lean_unsigned_to_nat(0u);
v___x_1467_ = 0;
v___x_1468_ = l_List_filterAuxM___at___00Std_Queue_filterM___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector_spec__3_spec__3___redArg(v_eList_1451_, v___x_1450_);
v___x_1469_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_1466_, v___x_1467_, v___x_1468_, v___f_1452_);
v___x_1470_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_1466_, v___x_1467_, v___x_1469_, v___f_1465_);
return v___x_1470_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Queue_filterM___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector_spec__3___redArg___lam__1___boxed(lean_object* v___x_1471_, lean_object* v_eList_1472_, lean_object* v___f_1473_, lean_object* v_x_1474_, lean_object* v___y_1475_){
_start:
{
lean_object* v_res_1476_; 
v_res_1476_ = l_Std_Queue_filterM___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector_spec__3___redArg___lam__1(v___x_1471_, v_eList_1472_, v___f_1473_, v_x_1474_);
return v_res_1476_;
}
}
LEAN_EXPORT lean_object* l_Std_Queue_filterM___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector_spec__3___redArg(lean_object* v_q_1478_, lean_object* v___y_1479_){
_start:
{
lean_object* v_eList_1481_; lean_object* v_dList_1482_; lean_object* v___f_1483_; lean_object* v___x_1484_; lean_object* v___f_1485_; lean_object* v___x_1486_; uint8_t v___x_1487_; lean_object* v___x_1488_; lean_object* v___x_1489_; lean_object* v___x_1490_; 
v_eList_1481_ = lean_ctor_get(v_q_1478_, 0);
lean_inc(v_eList_1481_);
v_dList_1482_ = lean_ctor_get(v_q_1478_, 1);
lean_inc(v_dList_1482_);
lean_dec_ref(v_q_1478_);
v___f_1483_ = ((lean_object*)(l_Std_Queue_filterM___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector_spec__3___redArg___closed__0));
v___x_1484_ = lean_box(0);
v___f_1485_ = lean_alloc_closure((void*)(l_Std_Queue_filterM___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector_spec__3___redArg___lam__1___boxed), 5, 3);
lean_closure_set(v___f_1485_, 0, v___x_1484_);
lean_closure_set(v___f_1485_, 1, v_eList_1481_);
lean_closure_set(v___f_1485_, 2, v___f_1483_);
v___x_1486_ = lean_unsigned_to_nat(0u);
v___x_1487_ = 0;
v___x_1488_ = l_List_filterAuxM___at___00Std_Queue_filterM___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector_spec__3_spec__3___redArg(v_dList_1482_, v___x_1484_);
v___x_1489_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_1486_, v___x_1487_, v___x_1488_, v___f_1483_);
v___x_1490_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_1486_, v___x_1487_, v___x_1489_, v___f_1485_);
return v___x_1490_;
}
}
LEAN_EXPORT lean_object* l_Std_Queue_filterM___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector_spec__3___redArg___boxed(lean_object* v_q_1491_, lean_object* v___y_1492_, lean_object* v___y_1493_){
_start:
{
lean_object* v_res_1494_; 
v_res_1494_ = l_Std_Queue_filterM___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector_spec__3___redArg(v_q_1491_, v___y_1492_);
lean_dec(v___y_1492_);
return v_res_1494_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector___redArg___lam__9(lean_object* v___y_1495_, lean_object* v_x_1496_){
_start:
{
if (lean_obj_tag(v_x_1496_) == 0)
{
lean_object* v_a_1498_; lean_object* v___x_1500_; uint8_t v_isShared_1501_; uint8_t v_isSharedCheck_1506_; 
v_a_1498_ = lean_ctor_get(v_x_1496_, 0);
v_isSharedCheck_1506_ = !lean_is_exclusive(v_x_1496_);
if (v_isSharedCheck_1506_ == 0)
{
v___x_1500_ = v_x_1496_;
v_isShared_1501_ = v_isSharedCheck_1506_;
goto v_resetjp_1499_;
}
else
{
lean_inc(v_a_1498_);
lean_dec(v_x_1496_);
v___x_1500_ = lean_box(0);
v_isShared_1501_ = v_isSharedCheck_1506_;
goto v_resetjp_1499_;
}
v_resetjp_1499_:
{
lean_object* v___x_1503_; 
if (v_isShared_1501_ == 0)
{
v___x_1503_ = v___x_1500_;
goto v_reusejp_1502_;
}
else
{
lean_object* v_reuseFailAlloc_1505_; 
v_reuseFailAlloc_1505_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1505_, 0, v_a_1498_);
v___x_1503_ = v_reuseFailAlloc_1505_;
goto v_reusejp_1502_;
}
v_reusejp_1502_:
{
lean_object* v___x_1504_; 
v___x_1504_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1504_, 0, v___x_1503_);
return v___x_1504_;
}
}
}
else
{
lean_object* v_a_1507_; lean_object* v_values_1508_; lean_object* v_consumers_1509_; uint8_t v_closed_1510_; lean_object* v___x_1511_; lean_object* v___f_1512_; lean_object* v___x_1513_; uint8_t v___x_1514_; lean_object* v___x_1515_; lean_object* v___x_1516_; 
v_a_1507_ = lean_ctor_get(v_x_1496_, 0);
lean_inc(v_a_1507_);
lean_dec_ref_known(v_x_1496_, 1);
v_values_1508_ = lean_ctor_get(v_a_1507_, 0);
lean_inc_ref(v_values_1508_);
v_consumers_1509_ = lean_ctor_get(v_a_1507_, 1);
lean_inc_ref(v_consumers_1509_);
v_closed_1510_ = lean_ctor_get_uint8(v_a_1507_, sizeof(void*)*2);
lean_dec(v_a_1507_);
v___x_1511_ = lean_box(v_closed_1510_);
lean_inc(v___y_1495_);
v___f_1512_ = lean_alloc_closure((void*)(l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector___redArg___lam__8___boxed), 5, 3);
lean_closure_set(v___f_1512_, 0, v_values_1508_);
lean_closure_set(v___f_1512_, 1, v___x_1511_);
lean_closure_set(v___f_1512_, 2, v___y_1495_);
v___x_1513_ = lean_unsigned_to_nat(0u);
v___x_1514_ = 0;
v___x_1515_ = l_Std_Queue_filterM___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector_spec__3___redArg(v_consumers_1509_, v___y_1495_);
v___x_1516_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_1513_, v___x_1514_, v___x_1515_, v___f_1512_);
return v___x_1516_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector___redArg___lam__9___boxed(lean_object* v___y_1517_, lean_object* v_x_1518_, lean_object* v___y_1519_){
_start:
{
lean_object* v_res_1520_; 
v_res_1520_ = l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector___redArg___lam__9(v___y_1517_, v_x_1518_);
lean_dec(v___y_1517_);
return v_res_1520_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector___redArg___lam__10(lean_object* v___y_1521_){
_start:
{
lean_object* v___f_1523_; lean_object* v___x_1524_; uint8_t v___x_1525_; lean_object* v___x_1526_; lean_object* v___x_1527_; lean_object* v___x_1528_; lean_object* v___x_1529_; 
lean_inc(v___y_1521_);
v___f_1523_ = lean_alloc_closure((void*)(l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector___redArg___lam__9___boxed), 3, 1);
lean_closure_set(v___f_1523_, 0, v___y_1521_);
v___x_1524_ = lean_unsigned_to_nat(0u);
v___x_1525_ = 0;
v___x_1526_ = lean_st_ref_get(v___y_1521_);
v___x_1527_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1527_, 0, v___x_1526_);
v___x_1528_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1528_, 0, v___x_1527_);
v___x_1529_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_1524_, v___x_1525_, v___x_1528_, v___f_1523_);
return v___x_1529_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector___redArg___lam__10___boxed(lean_object* v___y_1530_, lean_object* v___y_1531_){
_start:
{
lean_object* v_res_1532_; 
v_res_1532_ = l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector___redArg___lam__10(v___y_1530_);
lean_dec(v___y_1530_);
return v_res_1532_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector___redArg(lean_object* v_ch_1539_){
_start:
{
lean_object* v___f_1540_; lean_object* v___f_1541_; lean_object* v___f_1542_; lean_object* v___f_1543_; lean_object* v___x_1544_; lean_object* v___x_1545_; lean_object* v___x_1546_; 
v___f_1540_ = ((lean_object*)(l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector___redArg___closed__1));
lean_inc_ref_n(v_ch_1539_, 2);
v___f_1541_ = lean_alloc_closure((void*)(l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector___redArg___lam__5___boxed), 4, 2);
lean_closure_set(v___f_1541_, 0, v___f_1540_);
lean_closure_set(v___f_1541_, 1, v_ch_1539_);
v___f_1542_ = ((lean_object*)(l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector___redArg___closed__2));
v___f_1543_ = ((lean_object*)(l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector___redArg___closed__3));
v___x_1544_ = lean_alloc_closure((void*)(l_Std_Mutex_atomically___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector_spec__2___boxed), 5, 4);
lean_closure_set(v___x_1544_, 0, lean_box(0));
lean_closure_set(v___x_1544_, 1, lean_box(0));
lean_closure_set(v___x_1544_, 2, v_ch_1539_);
lean_closure_set(v___x_1544_, 3, v___f_1542_);
v___x_1545_ = lean_alloc_closure((void*)(l_Std_Mutex_atomically___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector_spec__2___boxed), 5, 4);
lean_closure_set(v___x_1545_, 0, lean_box(0));
lean_closure_set(v___x_1545_, 1, lean_box(0));
lean_closure_set(v___x_1545_, 2, v_ch_1539_);
lean_closure_set(v___x_1545_, 3, v___f_1543_);
v___x_1546_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1546_, 0, v___x_1544_);
lean_ctor_set(v___x_1546_, 1, v___f_1541_);
lean_ctor_set(v___x_1546_, 2, v___x_1545_);
return v___x_1546_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector(lean_object* v_00_u03b1_1547_, lean_object* v_ch_1548_){
_start:
{
lean_object* v___x_1549_; 
v___x_1549_ = l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector___redArg(v_ch_1548_);
return v___x_1549_;
}
}
LEAN_EXPORT lean_object* l_Std_Queue_filterM___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector_spec__3(lean_object* v_00_u03b1_1550_, lean_object* v_q_1551_, lean_object* v___y_1552_){
_start:
{
lean_object* v___x_1554_; 
v___x_1554_ = l_Std_Queue_filterM___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector_spec__3___redArg(v_q_1551_, v___y_1552_);
return v___x_1554_;
}
}
LEAN_EXPORT lean_object* l_Std_Queue_filterM___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector_spec__3___boxed(lean_object* v_00_u03b1_1555_, lean_object* v_q_1556_, lean_object* v___y_1557_, lean_object* v___y_1558_){
_start:
{
lean_object* v_res_1559_; 
v_res_1559_ = l_Std_Queue_filterM___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector_spec__3(v_00_u03b1_1555_, v_q_1556_, v___y_1557_);
lean_dec(v___y_1557_);
return v_res_1559_;
}
}
LEAN_EXPORT lean_object* l_List_filterAuxM___at___00Std_Queue_filterM___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector_spec__3_spec__3(lean_object* v_00_u03b1_1560_, lean_object* v_x_1561_, lean_object* v_x_1562_, lean_object* v___y_1563_){
_start:
{
lean_object* v___x_1565_; 
v___x_1565_ = l_List_filterAuxM___at___00Std_Queue_filterM___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector_spec__3_spec__3___redArg(v_x_1561_, v_x_1562_);
return v___x_1565_;
}
}
LEAN_EXPORT lean_object* l_List_filterAuxM___at___00Std_Queue_filterM___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector_spec__3_spec__3___boxed(lean_object* v_00_u03b1_1566_, lean_object* v_x_1567_, lean_object* v_x_1568_, lean_object* v___y_1569_, lean_object* v___y_1570_){
_start:
{
lean_object* v_res_1571_; 
v_res_1571_ = l_List_filterAuxM___at___00Std_Queue_filterM___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector_spec__3_spec__3(v_00_u03b1_1566_, v_x_1567_, v_x_1568_, v___y_1569_);
lean_dec(v___y_1569_);
return v_res_1571_;
}
}
static lean_object* _init_l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_new___redArg___closed__0(void){
_start:
{
uint8_t v___x_1572_; lean_object* v___x_1573_; lean_object* v___x_1574_; 
v___x_1572_ = 0;
v___x_1573_ = lean_obj_once(&l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_new___redArg___closed__0, &l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_new___redArg___closed__0_once, _init_l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_new___redArg___closed__0);
v___x_1574_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_1574_, 0, v___x_1573_);
lean_ctor_set(v___x_1574_, 1, v___x_1573_);
lean_ctor_set_uint8(v___x_1574_, sizeof(void*)*2, v___x_1572_);
return v___x_1574_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_new___redArg(){
_start:
{
lean_object* v___x_1576_; lean_object* v___x_1577_; 
v___x_1576_ = lean_obj_once(&l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_new___redArg___closed__0, &l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_new___redArg___closed__0_once, _init_l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_new___redArg___closed__0);
v___x_1577_ = l_Std_Mutex_new___redArg(v___x_1576_);
return v___x_1577_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_new___redArg___boxed(lean_object* v___y_1578_){
_start:
{
lean_object* v_res_1579_; 
v_res_1579_ = l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_new___redArg();
return v_res_1579_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_new(lean_object* v_00_u03b1_1580_){
_start:
{
lean_object* v___x_1582_; 
v___x_1582_ = l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_new___redArg();
return v___x_1582_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_new___boxed(lean_object* v_00_u03b1_1583_, lean_object* v___y_1584_){
_start:
{
lean_object* v_res_1585_; 
v_res_1585_ = l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_new(v_00_u03b1_1583_);
return v_res_1585_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_trySend_x27_spec__0___redArg(lean_object* v_v_1595_, lean_object* v___y_1596_){
_start:
{
lean_object* v___x_1598_; lean_object* v___x_1599_; lean_object* v_producers_1600_; lean_object* v_consumers_1601_; uint8_t v_closed_1602_; lean_object* v___x_1604_; uint8_t v_isShared_1605_; uint8_t v_isSharedCheck_1624_; 
v___x_1598_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_trySend_x27_spec__0___redArg___closed__0));
v___x_1599_ = lean_st_ref_get(v___y_1596_);
v_producers_1600_ = lean_ctor_get(v___x_1599_, 0);
v_consumers_1601_ = lean_ctor_get(v___x_1599_, 1);
v_closed_1602_ = lean_ctor_get_uint8(v___x_1599_, sizeof(void*)*2);
v_isSharedCheck_1624_ = !lean_is_exclusive(v___x_1599_);
if (v_isSharedCheck_1624_ == 0)
{
v___x_1604_ = v___x_1599_;
v_isShared_1605_ = v_isSharedCheck_1624_;
goto v_resetjp_1603_;
}
else
{
lean_inc(v_consumers_1601_);
lean_inc(v_producers_1600_);
lean_dec(v___x_1599_);
v___x_1604_ = lean_box(0);
v_isShared_1605_ = v_isSharedCheck_1624_;
goto v_resetjp_1603_;
}
v_resetjp_1603_:
{
lean_object* v___x_1606_; 
v___x_1606_ = l_Std_Queue_dequeue_x3f___redArg(v_consumers_1601_);
if (lean_obj_tag(v___x_1606_) == 1)
{
lean_object* v_val_1607_; lean_object* v___x_1609_; uint8_t v_isShared_1610_; uint8_t v_isSharedCheck_1622_; 
v_val_1607_ = lean_ctor_get(v___x_1606_, 0);
v_isSharedCheck_1622_ = !lean_is_exclusive(v___x_1606_);
if (v_isSharedCheck_1622_ == 0)
{
v___x_1609_ = v___x_1606_;
v_isShared_1610_ = v_isSharedCheck_1622_;
goto v_resetjp_1608_;
}
else
{
lean_inc(v_val_1607_);
lean_dec(v___x_1606_);
v___x_1609_ = lean_box(0);
v_isShared_1610_ = v_isSharedCheck_1622_;
goto v_resetjp_1608_;
}
v_resetjp_1608_:
{
lean_object* v_fst_1611_; lean_object* v_snd_1612_; lean_object* v___x_1614_; 
v_fst_1611_ = lean_ctor_get(v_val_1607_, 0);
lean_inc(v_fst_1611_);
v_snd_1612_ = lean_ctor_get(v_val_1607_, 1);
lean_inc(v_snd_1612_);
lean_dec(v_val_1607_);
lean_inc(v_v_1595_);
if (v_isShared_1610_ == 0)
{
lean_ctor_set(v___x_1609_, 0, v_v_1595_);
v___x_1614_ = v___x_1609_;
goto v_reusejp_1613_;
}
else
{
lean_object* v_reuseFailAlloc_1621_; 
v_reuseFailAlloc_1621_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1621_, 0, v_v_1595_);
v___x_1614_ = v_reuseFailAlloc_1621_;
goto v_reusejp_1613_;
}
v_reusejp_1613_:
{
uint8_t v___x_1615_; lean_object* v___x_1617_; 
v___x_1615_ = l___private_Std_Sync_Channel_0__Std_CloseableChannel_Consumer_resolve___redArg(v_fst_1611_, v___x_1614_);
lean_dec(v_fst_1611_);
if (v_isShared_1605_ == 0)
{
lean_ctor_set(v___x_1604_, 1, v_snd_1612_);
v___x_1617_ = v___x_1604_;
goto v_reusejp_1616_;
}
else
{
lean_object* v_reuseFailAlloc_1620_; 
v_reuseFailAlloc_1620_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v_reuseFailAlloc_1620_, 0, v_producers_1600_);
lean_ctor_set(v_reuseFailAlloc_1620_, 1, v_snd_1612_);
lean_ctor_set_uint8(v_reuseFailAlloc_1620_, sizeof(void*)*2, v_closed_1602_);
v___x_1617_ = v_reuseFailAlloc_1620_;
goto v_reusejp_1616_;
}
v_reusejp_1616_:
{
lean_object* v___x_1618_; 
v___x_1618_ = lean_st_ref_swap(v___y_1596_, v___x_1617_);
lean_dec(v___x_1618_);
if (v___x_1615_ == 0)
{
goto _start;
}
else
{
lean_dec(v_v_1595_);
return v___x_1598_;
}
}
}
}
}
else
{
lean_object* v___x_1623_; 
lean_dec(v___x_1606_);
lean_del_object(v___x_1604_);
lean_dec_ref(v_producers_1600_);
lean_dec(v_v_1595_);
v___x_1623_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_trySend_x27_spec__0___redArg___closed__2));
return v___x_1623_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_trySend_x27_spec__0___redArg___boxed(lean_object* v_v_1625_, lean_object* v___y_1626_, lean_object* v___y_1627_){
_start:
{
lean_object* v_res_1628_; 
v_res_1628_ = l___private_Init_While_0__repeatM_erased___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_trySend_x27_spec__0___redArg(v_v_1625_, v___y_1626_);
lean_dec(v___y_1626_);
return v_res_1628_;
}
}
LEAN_EXPORT uint8_t l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_trySend_x27___redArg(lean_object* v_v_1629_, lean_object* v___y_1630_){
_start:
{
lean_object* v___x_1632_; lean_object* v_fst_1633_; 
v___x_1632_ = l___private_Init_While_0__repeatM_erased___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_trySend_x27_spec__0___redArg(v_v_1629_, v___y_1630_);
v_fst_1633_ = lean_ctor_get(v___x_1632_, 0);
lean_inc(v_fst_1633_);
lean_dec_ref(v___x_1632_);
if (lean_obj_tag(v_fst_1633_) == 0)
{
uint8_t v___x_1634_; 
v___x_1634_ = 1;
return v___x_1634_;
}
else
{
lean_object* v_val_1635_; uint8_t v___x_1636_; 
v_val_1635_ = lean_ctor_get(v_fst_1633_, 0);
lean_inc(v_val_1635_);
lean_dec_ref_known(v_fst_1633_, 1);
v___x_1636_ = lean_unbox(v_val_1635_);
lean_dec(v_val_1635_);
return v___x_1636_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_trySend_x27___redArg___boxed(lean_object* v_v_1637_, lean_object* v___y_1638_, lean_object* v___y_1639_){
_start:
{
uint8_t v_res_1640_; lean_object* v_r_1641_; 
v_res_1640_ = l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_trySend_x27___redArg(v_v_1637_, v___y_1638_);
lean_dec(v___y_1638_);
v_r_1641_ = lean_box(v_res_1640_);
return v_r_1641_;
}
}
LEAN_EXPORT uint8_t l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_trySend_x27(lean_object* v_00_u03b1_1642_, lean_object* v_v_1643_, lean_object* v___y_1644_){
_start:
{
uint8_t v___x_1646_; 
v___x_1646_ = l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_trySend_x27___redArg(v_v_1643_, v___y_1644_);
return v___x_1646_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_trySend_x27___boxed(lean_object* v_00_u03b1_1647_, lean_object* v_v_1648_, lean_object* v___y_1649_, lean_object* v___y_1650_){
_start:
{
uint8_t v_res_1651_; lean_object* v_r_1652_; 
v_res_1651_ = l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_trySend_x27(v_00_u03b1_1647_, v_v_1648_, v___y_1649_);
lean_dec(v___y_1649_);
v_r_1652_ = lean_box(v_res_1651_);
return v_r_1652_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_trySend_x27_spec__0(lean_object* v_00_u03b1_1653_, lean_object* v_v_1654_, lean_object* v_inst_1655_, lean_object* v_a_1656_, lean_object* v___y_1657_){
_start:
{
lean_object* v___x_1659_; 
v___x_1659_ = l___private_Init_While_0__repeatM_erased___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_trySend_x27_spec__0___redArg(v_v_1654_, v___y_1657_);
return v___x_1659_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_trySend_x27_spec__0___boxed(lean_object* v_00_u03b1_1660_, lean_object* v_v_1661_, lean_object* v_inst_1662_, lean_object* v_a_1663_, lean_object* v___y_1664_, lean_object* v___y_1665_){
_start:
{
lean_object* v_res_1666_; 
v_res_1666_ = l___private_Init_While_0__repeatM_erased___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_trySend_x27_spec__0(v_00_u03b1_1660_, v_v_1661_, v_inst_1662_, v_a_1663_, v___y_1664_);
lean_dec(v___y_1664_);
lean_dec_ref(v_a_1663_);
return v_res_1666_;
}
}
LEAN_EXPORT uint8_t l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_trySend___redArg___lam__0(lean_object* v_v_1667_, lean_object* v___y_1668_){
_start:
{
lean_object* v___x_1670_; uint8_t v_closed_1671_; 
v___x_1670_ = lean_st_ref_get(v___y_1668_);
v_closed_1671_ = lean_ctor_get_uint8(v___x_1670_, sizeof(void*)*2);
lean_dec(v___x_1670_);
if (v_closed_1671_ == 0)
{
uint8_t v___x_1672_; 
v___x_1672_ = l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_trySend_x27___redArg(v_v_1667_, v___y_1668_);
return v___x_1672_;
}
else
{
uint8_t v___x_1673_; 
lean_dec(v_v_1667_);
v___x_1673_ = 0;
return v___x_1673_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_trySend___redArg___lam__0___boxed(lean_object* v_v_1674_, lean_object* v___y_1675_, lean_object* v___y_1676_){
_start:
{
uint8_t v_res_1677_; lean_object* v_r_1678_; 
v_res_1677_ = l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_trySend___redArg___lam__0(v_v_1674_, v___y_1675_);
lean_dec(v___y_1675_);
v_r_1678_ = lean_box(v_res_1677_);
return v_r_1678_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_trySend___redArg(lean_object* v_ch_1679_, lean_object* v_v_1680_){
_start:
{
lean_object* v___f_1682_; lean_object* v___x_1683_; 
v___f_1682_ = lean_alloc_closure((void*)(l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_trySend___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_1682_, 0, v_v_1680_);
v___x_1683_ = l_Std_Mutex_atomically___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_trySend_spec__1___redArg(v_ch_1679_, v___f_1682_);
return v___x_1683_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_trySend___redArg___boxed(lean_object* v_ch_1684_, lean_object* v_v_1685_, lean_object* v___y_1686_){
_start:
{
lean_object* v_res_1687_; 
v_res_1687_ = l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_trySend___redArg(v_ch_1684_, v_v_1685_);
return v_res_1687_;
}
}
LEAN_EXPORT uint8_t l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_trySend(lean_object* v_00_u03b1_1688_, lean_object* v_ch_1689_, lean_object* v_v_1690_){
_start:
{
lean_object* v___x_1692_; uint8_t v___x_1693_; 
v___x_1692_ = l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_trySend___redArg(v_ch_1689_, v_v_1690_);
v___x_1693_ = lean_unbox(v___x_1692_);
lean_dec(v___x_1692_);
return v___x_1693_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_trySend___boxed(lean_object* v_00_u03b1_1694_, lean_object* v_ch_1695_, lean_object* v_v_1696_, lean_object* v___y_1697_){
_start:
{
uint8_t v_res_1698_; lean_object* v_r_1699_; 
v_res_1698_ = l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_trySend(v_00_u03b1_1694_, v_ch_1695_, v_v_1696_);
v_r_1699_ = lean_box(v_res_1698_);
return v_r_1699_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_send___redArg___lam__0(lean_object* v_x_1700_){
_start:
{
if (lean_obj_tag(v_x_1700_) == 0)
{
goto v___jp_1701_;
}
else
{
lean_object* v_val_1703_; uint8_t v___x_1704_; 
v_val_1703_ = lean_ctor_get(v_x_1700_, 0);
v___x_1704_ = lean_unbox(v_val_1703_);
if (v___x_1704_ == 0)
{
goto v___jp_1701_;
}
else
{
lean_object* v___x_1705_; 
v___x_1705_ = ((lean_object*)(l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_send___redArg___closed__2));
return v___x_1705_;
}
}
v___jp_1701_:
{
lean_object* v___x_1702_; 
v___x_1702_ = ((lean_object*)(l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_send___redArg___closed__0));
return v___x_1702_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_send___redArg___lam__0___boxed(lean_object* v_x_1706_){
_start:
{
lean_object* v_res_1707_; 
v_res_1707_ = l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_send___redArg___lam__0(v_x_1706_);
lean_dec(v_x_1706_);
return v_res_1707_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_send___redArg___lam__1(lean_object* v_v_1708_, lean_object* v___f_1709_, lean_object* v___y_1710_){
_start:
{
lean_object* v___x_1712_; uint8_t v_closed_1713_; 
v___x_1712_ = lean_st_ref_get(v___y_1710_);
v_closed_1713_ = lean_ctor_get_uint8(v___x_1712_, sizeof(void*)*2);
lean_dec(v___x_1712_);
if (v_closed_1713_ == 0)
{
uint8_t v___x_1714_; uint8_t v___x_1715_; 
v___x_1714_ = 1;
lean_inc(v_v_1708_);
v___x_1715_ = l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_trySend_x27___redArg(v_v_1708_, v___y_1710_);
if (v___x_1715_ == 0)
{
lean_object* v___x_1716_; lean_object* v___x_1717_; lean_object* v_producers_1718_; lean_object* v_consumers_1719_; uint8_t v_closed_1720_; lean_object* v___x_1722_; uint8_t v_isShared_1723_; uint8_t v_isSharedCheck_1733_; 
v___x_1716_ = lean_io_promise_new();
v___x_1717_ = lean_st_ref_take(v___y_1710_);
v_producers_1718_ = lean_ctor_get(v___x_1717_, 0);
v_consumers_1719_ = lean_ctor_get(v___x_1717_, 1);
v_closed_1720_ = lean_ctor_get_uint8(v___x_1717_, sizeof(void*)*2);
v_isSharedCheck_1733_ = !lean_is_exclusive(v___x_1717_);
if (v_isSharedCheck_1733_ == 0)
{
v___x_1722_ = v___x_1717_;
v_isShared_1723_ = v_isSharedCheck_1733_;
goto v_resetjp_1721_;
}
else
{
lean_inc(v_consumers_1719_);
lean_inc(v_producers_1718_);
lean_dec(v___x_1717_);
v___x_1722_ = lean_box(0);
v_isShared_1723_ = v_isSharedCheck_1733_;
goto v_resetjp_1721_;
}
v_resetjp_1721_:
{
lean_object* v___x_1724_; lean_object* v___x_1725_; lean_object* v___x_1727_; 
lean_inc(v___x_1716_);
v___x_1724_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1724_, 0, v_v_1708_);
lean_ctor_set(v___x_1724_, 1, v___x_1716_);
v___x_1725_ = l_Std_Queue_enqueue___redArg(v___x_1724_, v_producers_1718_);
if (v_isShared_1723_ == 0)
{
lean_ctor_set(v___x_1722_, 0, v___x_1725_);
v___x_1727_ = v___x_1722_;
goto v_reusejp_1726_;
}
else
{
lean_object* v_reuseFailAlloc_1732_; 
v_reuseFailAlloc_1732_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v_reuseFailAlloc_1732_, 0, v___x_1725_);
lean_ctor_set(v_reuseFailAlloc_1732_, 1, v_consumers_1719_);
lean_ctor_set_uint8(v_reuseFailAlloc_1732_, sizeof(void*)*2, v_closed_1720_);
v___x_1727_ = v_reuseFailAlloc_1732_;
goto v_reusejp_1726_;
}
v_reusejp_1726_:
{
lean_object* v___x_1728_; lean_object* v___x_1729_; lean_object* v___x_1730_; lean_object* v___x_1731_; 
v___x_1728_ = lean_st_ref_put(v___y_1710_, v___x_1727_);
v___x_1729_ = lean_io_promise_result_opt(v___x_1716_);
lean_dec(v___x_1716_);
v___x_1730_ = lean_unsigned_to_nat(0u);
v___x_1731_ = lean_task_map(v___f_1709_, v___x_1729_, v___x_1730_, v___x_1714_);
return v___x_1731_;
}
}
}
else
{
lean_object* v___x_1734_; 
lean_dec_ref(v___f_1709_);
lean_dec(v_v_1708_);
v___x_1734_ = lean_obj_once(&l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_send___redArg___closed__3, &l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_send___redArg___closed__3_once, _init_l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_send___redArg___closed__3);
return v___x_1734_;
}
}
else
{
lean_object* v___x_1735_; 
lean_dec_ref(v___f_1709_);
lean_dec(v_v_1708_);
v___x_1735_ = lean_obj_once(&l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_send___redArg___closed__1, &l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_send___redArg___closed__1_once, _init_l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_send___redArg___closed__1);
return v___x_1735_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_send___redArg___lam__1___boxed(lean_object* v_v_1736_, lean_object* v___f_1737_, lean_object* v___y_1738_, lean_object* v___y_1739_){
_start:
{
lean_object* v_res_1740_; 
v_res_1740_ = l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_send___redArg___lam__1(v_v_1736_, v___f_1737_, v___y_1738_);
lean_dec(v___y_1738_);
return v_res_1740_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_send___redArg(lean_object* v_ch_1742_, lean_object* v_v_1743_){
_start:
{
lean_object* v___f_1745_; lean_object* v___f_1746_; lean_object* v___x_1747_; 
v___f_1745_ = ((lean_object*)(l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_send___redArg___closed__0));
v___f_1746_ = lean_alloc_closure((void*)(l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_send___redArg___lam__1___boxed), 4, 2);
lean_closure_set(v___f_1746_, 0, v_v_1743_);
lean_closure_set(v___f_1746_, 1, v___f_1745_);
v___x_1747_ = l_Std_Mutex_atomically___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_trySend_spec__1___redArg(v_ch_1742_, v___f_1746_);
return v___x_1747_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_send___redArg___boxed(lean_object* v_ch_1748_, lean_object* v_v_1749_, lean_object* v___y_1750_){
_start:
{
lean_object* v_res_1751_; 
v_res_1751_ = l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_send___redArg(v_ch_1748_, v_v_1749_);
return v_res_1751_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_send(lean_object* v_00_u03b1_1752_, lean_object* v_ch_1753_, lean_object* v_v_1754_){
_start:
{
lean_object* v___x_1756_; 
v___x_1756_ = l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_send___redArg(v_ch_1753_, v_v_1754_);
return v___x_1756_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_send___boxed(lean_object* v_00_u03b1_1757_, lean_object* v_ch_1758_, lean_object* v_v_1759_, lean_object* v___y_1760_){
_start:
{
lean_object* v_res_1761_; 
v_res_1761_ = l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_send(v_00_u03b1_1757_, v_ch_1758_, v_v_1759_);
return v_res_1761_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_close_spec__0___redArg(lean_object* v_as_1762_, size_t v_sz_1763_, size_t v_i_1764_, lean_object* v_b_1765_){
_start:
{
uint8_t v___x_1767_; 
v___x_1767_ = lean_usize_dec_lt(v_i_1764_, v_sz_1763_);
if (v___x_1767_ == 0)
{
lean_object* v___x_1768_; 
v___x_1768_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1768_, 0, v_b_1765_);
return v___x_1768_;
}
else
{
lean_object* v___x_1769_; lean_object* v_a_1770_; lean_object* v___x_1771_; uint8_t v___x_1772_; size_t v___x_1773_; size_t v___x_1774_; 
v___x_1769_ = lean_box(0);
v_a_1770_ = lean_array_uget_borrowed(v_as_1762_, v_i_1764_);
v___x_1771_ = lean_box(0);
v___x_1772_ = l___private_Std_Sync_Channel_0__Std_CloseableChannel_Consumer_resolve___redArg(v_a_1770_, v___x_1771_);
v___x_1773_ = ((size_t)1ULL);
v___x_1774_ = lean_usize_add(v_i_1764_, v___x_1773_);
v_i_1764_ = v___x_1774_;
v_b_1765_ = v___x_1769_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_close_spec__0___redArg___boxed(lean_object* v_as_1776_, lean_object* v_sz_1777_, lean_object* v_i_1778_, lean_object* v_b_1779_, lean_object* v___y_1780_){
_start:
{
size_t v_sz_boxed_1781_; size_t v_i_boxed_1782_; lean_object* v_res_1783_; 
v_sz_boxed_1781_ = lean_unbox_usize(v_sz_1777_);
lean_dec(v_sz_1777_);
v_i_boxed_1782_ = lean_unbox_usize(v_i_1778_);
lean_dec(v_i_1778_);
v_res_1783_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_close_spec__0___redArg(v_as_1776_, v_sz_boxed_1781_, v_i_boxed_1782_, v_b_1779_);
lean_dec_ref(v_as_1776_);
return v_res_1783_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_close___redArg___lam__0(lean_object* v___y_1784_){
_start:
{
lean_object* v___x_1786_; uint8_t v_closed_1787_; 
v___x_1786_ = lean_st_ref_get(v___y_1784_);
v_closed_1787_ = lean_ctor_get_uint8(v___x_1786_, sizeof(void*)*2);
if (v_closed_1787_ == 0)
{
lean_object* v_producers_1788_; lean_object* v_consumers_1789_; lean_object* v___x_1791_; uint8_t v_isShared_1792_; uint8_t v_isSharedCheck_1812_; 
v_producers_1788_ = lean_ctor_get(v___x_1786_, 0);
v_consumers_1789_ = lean_ctor_get(v___x_1786_, 1);
v_isSharedCheck_1812_ = !lean_is_exclusive(v___x_1786_);
if (v_isSharedCheck_1812_ == 0)
{
v___x_1791_ = v___x_1786_;
v_isShared_1792_ = v_isSharedCheck_1812_;
goto v_resetjp_1790_;
}
else
{
lean_inc(v_consumers_1789_);
lean_inc(v_producers_1788_);
lean_dec(v___x_1786_);
v___x_1791_ = lean_box(0);
v_isShared_1792_ = v_isSharedCheck_1812_;
goto v_resetjp_1790_;
}
v_resetjp_1790_:
{
lean_object* v___x_1793_; lean_object* v___x_1794_; size_t v_sz_1795_; size_t v___x_1796_; lean_object* v___x_1797_; 
v___x_1793_ = l_Std_Queue_toArray___redArg(v_consumers_1789_);
v___x_1794_ = lean_box(0);
v_sz_1795_ = lean_array_size(v___x_1793_);
v___x_1796_ = ((size_t)0ULL);
v___x_1797_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_close_spec__0___redArg(v___x_1793_, v_sz_1795_, v___x_1796_, v___x_1794_);
lean_dec_ref(v___x_1793_);
if (lean_obj_tag(v___x_1797_) == 0)
{
lean_object* v___x_1799_; uint8_t v_isShared_1800_; uint8_t v_isSharedCheck_1810_; 
v_isSharedCheck_1810_ = !lean_is_exclusive(v___x_1797_);
if (v_isSharedCheck_1810_ == 0)
{
lean_object* v_unused_1811_; 
v_unused_1811_ = lean_ctor_get(v___x_1797_, 0);
lean_dec(v_unused_1811_);
v___x_1799_ = v___x_1797_;
v_isShared_1800_ = v_isSharedCheck_1810_;
goto v_resetjp_1798_;
}
else
{
lean_dec(v___x_1797_);
v___x_1799_ = lean_box(0);
v_isShared_1800_ = v_isSharedCheck_1810_;
goto v_resetjp_1798_;
}
v_resetjp_1798_:
{
lean_object* v___x_1801_; uint8_t v___x_1802_; lean_object* v___x_1804_; 
v___x_1801_ = lean_obj_once(&l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_new___redArg___closed__0, &l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_new___redArg___closed__0_once, _init_l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_new___redArg___closed__0);
v___x_1802_ = 1;
if (v_isShared_1792_ == 0)
{
lean_ctor_set(v___x_1791_, 1, v___x_1801_);
v___x_1804_ = v___x_1791_;
goto v_reusejp_1803_;
}
else
{
lean_object* v_reuseFailAlloc_1809_; 
v_reuseFailAlloc_1809_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v_reuseFailAlloc_1809_, 0, v_producers_1788_);
lean_ctor_set(v_reuseFailAlloc_1809_, 1, v___x_1801_);
v___x_1804_ = v_reuseFailAlloc_1809_;
goto v_reusejp_1803_;
}
v_reusejp_1803_:
{
lean_object* v___x_1805_; lean_object* v___x_1807_; 
lean_ctor_set_uint8(v___x_1804_, sizeof(void*)*2, v___x_1802_);
v___x_1805_ = lean_st_ref_swap(v___y_1784_, v___x_1804_);
lean_dec(v___x_1805_);
if (v_isShared_1800_ == 0)
{
lean_ctor_set(v___x_1799_, 0, v___x_1794_);
v___x_1807_ = v___x_1799_;
goto v_reusejp_1806_;
}
else
{
lean_object* v_reuseFailAlloc_1808_; 
v_reuseFailAlloc_1808_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1808_, 0, v___x_1794_);
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
else
{
lean_del_object(v___x_1791_);
lean_dec_ref(v_producers_1788_);
return v___x_1797_;
}
}
}
else
{
uint8_t v___x_1813_; lean_object* v___x_1814_; lean_object* v___x_1815_; 
lean_dec(v___x_1786_);
v___x_1813_ = 1;
v___x_1814_ = lean_box(v___x_1813_);
v___x_1815_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1815_, 0, v___x_1814_);
return v___x_1815_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_close___redArg___lam__0___boxed(lean_object* v___y_1816_, lean_object* v___y_1817_){
_start:
{
lean_object* v_res_1818_; 
v_res_1818_ = l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_close___redArg___lam__0(v___y_1816_);
lean_dec(v___y_1816_);
return v_res_1818_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_close___redArg(lean_object* v_ch_1820_){
_start:
{
lean_object* v___f_1822_; lean_object* v___x_1823_; 
v___f_1822_ = ((lean_object*)(l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_close___redArg___closed__0));
v___x_1823_ = l_Std_Mutex_atomically___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_close_spec__1___redArg(v_ch_1820_, v___f_1822_);
return v___x_1823_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_close___redArg___boxed(lean_object* v_ch_1824_, lean_object* v___y_1825_){
_start:
{
lean_object* v_res_1826_; 
v_res_1826_ = l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_close___redArg(v_ch_1824_);
return v_res_1826_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_close(lean_object* v_00_u03b1_1827_, lean_object* v_ch_1828_){
_start:
{
lean_object* v___x_1830_; 
v___x_1830_ = l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_close___redArg(v_ch_1828_);
return v___x_1830_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_close___boxed(lean_object* v_00_u03b1_1831_, lean_object* v_ch_1832_, lean_object* v___y_1833_){
_start:
{
lean_object* v_res_1834_; 
v_res_1834_ = l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_close(v_00_u03b1_1831_, v_ch_1832_);
return v_res_1834_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_close_spec__0(lean_object* v_00_u03b1_1835_, lean_object* v_as_1836_, size_t v_sz_1837_, size_t v_i_1838_, lean_object* v_b_1839_, lean_object* v___y_1840_){
_start:
{
lean_object* v___x_1842_; 
v___x_1842_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_close_spec__0___redArg(v_as_1836_, v_sz_1837_, v_i_1838_, v_b_1839_);
return v___x_1842_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_close_spec__0___boxed(lean_object* v_00_u03b1_1843_, lean_object* v_as_1844_, lean_object* v_sz_1845_, lean_object* v_i_1846_, lean_object* v_b_1847_, lean_object* v___y_1848_, lean_object* v___y_1849_){
_start:
{
size_t v_sz_boxed_1850_; size_t v_i_boxed_1851_; lean_object* v_res_1852_; 
v_sz_boxed_1850_ = lean_unbox_usize(v_sz_1845_);
lean_dec(v_sz_1845_);
v_i_boxed_1851_ = lean_unbox_usize(v_i_1846_);
lean_dec(v_i_1846_);
v_res_1852_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_close_spec__0(v_00_u03b1_1843_, v_as_1844_, v_sz_boxed_1850_, v_i_boxed_1851_, v_b_1847_, v___y_1848_);
lean_dec(v___y_1848_);
lean_dec_ref(v_as_1844_);
return v_res_1852_;
}
}
LEAN_EXPORT uint8_t l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_isClosed___redArg___lam__0(lean_object* v___y_1853_){
_start:
{
lean_object* v___x_1855_; uint8_t v_closed_1856_; 
v___x_1855_ = lean_st_ref_get(v___y_1853_);
v_closed_1856_ = lean_ctor_get_uint8(v___x_1855_, sizeof(void*)*2);
lean_dec(v___x_1855_);
return v_closed_1856_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_isClosed___redArg___lam__0___boxed(lean_object* v___y_1857_, lean_object* v___y_1858_){
_start:
{
uint8_t v_res_1859_; lean_object* v_r_1860_; 
v_res_1859_ = l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_isClosed___redArg___lam__0(v___y_1857_);
lean_dec(v___y_1857_);
v_r_1860_ = lean_box(v_res_1859_);
return v_r_1860_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_isClosed___redArg(lean_object* v_ch_1862_){
_start:
{
lean_object* v___f_1864_; lean_object* v___x_1865_; 
v___f_1864_ = ((lean_object*)(l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_isClosed___redArg___closed__0));
v___x_1865_ = l_Std_Mutex_atomically___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_trySend_spec__1___redArg(v_ch_1862_, v___f_1864_);
return v___x_1865_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_isClosed___redArg___boxed(lean_object* v_ch_1866_, lean_object* v___y_1867_){
_start:
{
lean_object* v_res_1868_; 
v_res_1868_ = l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_isClosed___redArg(v_ch_1866_);
return v_res_1868_;
}
}
LEAN_EXPORT uint8_t l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_isClosed(lean_object* v_00_u03b1_1869_, lean_object* v_ch_1870_){
_start:
{
lean_object* v___x_1872_; uint8_t v___x_1873_; 
v___x_1872_ = l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_isClosed___redArg(v_ch_1870_);
v___x_1873_ = lean_unbox(v___x_1872_);
lean_dec(v___x_1872_);
return v___x_1873_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_isClosed___boxed(lean_object* v_00_u03b1_1874_, lean_object* v_ch_1875_, lean_object* v___y_1876_){
_start:
{
uint8_t v_res_1877_; lean_object* v_r_1878_; 
v_res_1877_ = l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_isClosed(v_00_u03b1_1874_, v_ch_1875_);
v_r_1878_ = lean_box(v_res_1877_);
return v_r_1878_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_tryRecv_x27___redArg___lam__1(lean_object* v_snd_1879_, lean_object* v_inst_1880_, lean_object* v_toBind_1881_, lean_object* v___f_1882_, lean_object* v_a_1883_){
_start:
{
uint8_t v___x_1884_; lean_object* v___x_1885_; lean_object* v___x_1886_; lean_object* v___x_1887_; lean_object* v___x_1888_; 
v___x_1884_ = 1;
v___x_1885_ = lean_box(v___x_1884_);
v___x_1886_ = lean_alloc_closure((void*)(l_IO_Promise_resolve___boxed), 4, 3);
lean_closure_set(v___x_1886_, 0, lean_box(0));
lean_closure_set(v___x_1886_, 1, v___x_1885_);
lean_closure_set(v___x_1886_, 2, v_snd_1879_);
v___x_1887_ = lean_apply_2(v_inst_1880_, lean_box(0), v___x_1886_);
v___x_1888_ = lean_apply_4(v_toBind_1881_, lean_box(0), lean_box(0), v___x_1887_, v___f_1882_);
return v___x_1888_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_tryRecv_x27___redArg___lam__0(lean_object* v_toApplicative_1889_, lean_object* v_inst_1890_, lean_object* v_toBind_1891_, lean_object* v___y_1892_, lean_object* v_inst_1893_, lean_object* v_a_1894_){
_start:
{
lean_object* v_producers_1895_; lean_object* v_consumers_1896_; uint8_t v_closed_1897_; lean_object* v___x_1899_; uint8_t v_isShared_1900_; uint8_t v_isSharedCheck_1918_; 
v_producers_1895_ = lean_ctor_get(v_a_1894_, 0);
v_consumers_1896_ = lean_ctor_get(v_a_1894_, 1);
v_closed_1897_ = lean_ctor_get_uint8(v_a_1894_, sizeof(void*)*2);
v_isSharedCheck_1918_ = !lean_is_exclusive(v_a_1894_);
if (v_isSharedCheck_1918_ == 0)
{
v___x_1899_ = v_a_1894_;
v_isShared_1900_ = v_isSharedCheck_1918_;
goto v_resetjp_1898_;
}
else
{
lean_inc(v_consumers_1896_);
lean_inc(v_producers_1895_);
lean_dec(v_a_1894_);
v___x_1899_ = lean_box(0);
v_isShared_1900_ = v_isSharedCheck_1918_;
goto v_resetjp_1898_;
}
v_resetjp_1898_:
{
lean_object* v___x_1901_; 
v___x_1901_ = l_Std_Queue_dequeue_x3f___redArg(v_producers_1895_);
if (lean_obj_tag(v___x_1901_) == 1)
{
lean_object* v_val_1902_; lean_object* v_fst_1903_; lean_object* v_snd_1904_; lean_object* v_fst_1905_; lean_object* v_snd_1906_; lean_object* v___f_1907_; lean_object* v___f_1908_; lean_object* v___x_1910_; 
v_val_1902_ = lean_ctor_get(v___x_1901_, 0);
lean_inc(v_val_1902_);
lean_dec_ref_known(v___x_1901_, 1);
v_fst_1903_ = lean_ctor_get(v_val_1902_, 0);
lean_inc(v_fst_1903_);
v_snd_1904_ = lean_ctor_get(v_val_1902_, 1);
lean_inc(v_snd_1904_);
lean_dec(v_val_1902_);
v_fst_1905_ = lean_ctor_get(v_fst_1903_, 0);
lean_inc(v_fst_1905_);
v_snd_1906_ = lean_ctor_get(v_fst_1903_, 1);
lean_inc(v_snd_1906_);
lean_dec(v_fst_1903_);
v___f_1907_ = lean_alloc_closure((void*)(l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_tryRecv_x27___redArg___lam__0), 3, 2);
lean_closure_set(v___f_1907_, 0, v_toApplicative_1889_);
lean_closure_set(v___f_1907_, 1, v_fst_1905_);
lean_inc(v_toBind_1891_);
v___f_1908_ = lean_alloc_closure((void*)(l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_tryRecv_x27___redArg___lam__1), 5, 4);
lean_closure_set(v___f_1908_, 0, v_snd_1906_);
lean_closure_set(v___f_1908_, 1, v_inst_1890_);
lean_closure_set(v___f_1908_, 2, v_toBind_1891_);
lean_closure_set(v___f_1908_, 3, v___f_1907_);
if (v_isShared_1900_ == 0)
{
lean_ctor_set(v___x_1899_, 0, v_snd_1904_);
v___x_1910_ = v___x_1899_;
goto v_reusejp_1909_;
}
else
{
lean_object* v_reuseFailAlloc_1914_; 
v_reuseFailAlloc_1914_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v_reuseFailAlloc_1914_, 0, v_snd_1904_);
lean_ctor_set(v_reuseFailAlloc_1914_, 1, v_consumers_1896_);
lean_ctor_set_uint8(v_reuseFailAlloc_1914_, sizeof(void*)*2, v_closed_1897_);
v___x_1910_ = v_reuseFailAlloc_1914_;
goto v_reusejp_1909_;
}
v_reusejp_1909_:
{
lean_object* v___x_1911_; lean_object* v___x_1912_; lean_object* v___x_1913_; 
lean_inc(v___y_1892_);
v___x_1911_ = lean_alloc_closure((void*)(l_ST_Prim_Ref_set___boxed), 5, 4);
lean_closure_set(v___x_1911_, 0, lean_box(0));
lean_closure_set(v___x_1911_, 1, lean_box(0));
lean_closure_set(v___x_1911_, 2, v___y_1892_);
lean_closure_set(v___x_1911_, 3, v___x_1910_);
v___x_1912_ = lean_apply_2(v_inst_1893_, lean_box(0), v___x_1911_);
v___x_1913_ = lean_apply_4(v_toBind_1891_, lean_box(0), lean_box(0), v___x_1912_, v___f_1908_);
return v___x_1913_;
}
}
else
{
lean_object* v_toPure_1915_; lean_object* v___x_1916_; lean_object* v___x_1917_; 
lean_dec(v___x_1901_);
lean_del_object(v___x_1899_);
lean_dec_ref(v_consumers_1896_);
lean_dec(v_inst_1893_);
lean_dec(v_toBind_1891_);
lean_dec(v_inst_1890_);
v_toPure_1915_ = lean_ctor_get(v_toApplicative_1889_, 1);
lean_inc(v_toPure_1915_);
lean_dec_ref(v_toApplicative_1889_);
v___x_1916_ = lean_box(0);
v___x_1917_ = lean_apply_2(v_toPure_1915_, lean_box(0), v___x_1916_);
return v___x_1917_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_tryRecv_x27___redArg___lam__0___boxed(lean_object* v_toApplicative_1919_, lean_object* v_inst_1920_, lean_object* v_toBind_1921_, lean_object* v___y_1922_, lean_object* v_inst_1923_, lean_object* v_a_1924_){
_start:
{
lean_object* v_res_1925_; 
v_res_1925_ = l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_tryRecv_x27___redArg___lam__0(v_toApplicative_1919_, v_inst_1920_, v_toBind_1921_, v___y_1922_, v_inst_1923_, v_a_1924_);
lean_dec(v___y_1922_);
return v_res_1925_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_tryRecv_x27___redArg(lean_object* v_inst_1926_, lean_object* v_inst_1927_, lean_object* v_inst_1928_, lean_object* v___y_1929_){
_start:
{
lean_object* v_toApplicative_1930_; lean_object* v_toBind_1931_; lean_object* v___f_1932_; lean_object* v___x_1933_; lean_object* v___x_1934_; lean_object* v___x_1935_; 
v_toApplicative_1930_ = lean_ctor_get(v_inst_1926_, 0);
lean_inc_ref(v_toApplicative_1930_);
v_toBind_1931_ = lean_ctor_get(v_inst_1926_, 1);
lean_inc_n(v_toBind_1931_, 2);
lean_dec_ref(v_inst_1926_);
lean_inc(v_inst_1927_);
lean_inc_n(v___y_1929_, 2);
v___f_1932_ = lean_alloc_closure((void*)(l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_tryRecv_x27___redArg___lam__0___boxed), 6, 5);
lean_closure_set(v___f_1932_, 0, v_toApplicative_1930_);
lean_closure_set(v___f_1932_, 1, v_inst_1928_);
lean_closure_set(v___f_1932_, 2, v_toBind_1931_);
lean_closure_set(v___f_1932_, 3, v___y_1929_);
lean_closure_set(v___f_1932_, 4, v_inst_1927_);
v___x_1933_ = lean_alloc_closure((void*)(l_ST_Prim_Ref_get___boxed), 4, 3);
lean_closure_set(v___x_1933_, 0, lean_box(0));
lean_closure_set(v___x_1933_, 1, lean_box(0));
lean_closure_set(v___x_1933_, 2, v___y_1929_);
v___x_1934_ = lean_apply_2(v_inst_1927_, lean_box(0), v___x_1933_);
v___x_1935_ = lean_apply_4(v_toBind_1931_, lean_box(0), lean_box(0), v___x_1934_, v___f_1932_);
return v___x_1935_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_tryRecv_x27___redArg___boxed(lean_object* v_inst_1936_, lean_object* v_inst_1937_, lean_object* v_inst_1938_, lean_object* v___y_1939_){
_start:
{
lean_object* v_res_1940_; 
v_res_1940_ = l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_tryRecv_x27___redArg(v_inst_1936_, v_inst_1937_, v_inst_1938_, v___y_1939_);
lean_dec(v___y_1939_);
return v_res_1940_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_tryRecv_x27(lean_object* v_m_1941_, lean_object* v_00_u03b1_1942_, lean_object* v_inst_1943_, lean_object* v_inst_1944_, lean_object* v_inst_1945_, lean_object* v___y_1946_){
_start:
{
lean_object* v___x_1947_; 
v___x_1947_ = l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_tryRecv_x27___redArg(v_inst_1943_, v_inst_1944_, v_inst_1945_, v___y_1946_);
return v___x_1947_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_tryRecv_x27___boxed(lean_object* v_m_1948_, lean_object* v_00_u03b1_1949_, lean_object* v_inst_1950_, lean_object* v_inst_1951_, lean_object* v_inst_1952_, lean_object* v___y_1953_){
_start:
{
lean_object* v_res_1954_; 
v_res_1954_ = l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_tryRecv_x27(v_m_1948_, v_00_u03b1_1949_, v_inst_1950_, v_inst_1951_, v_inst_1952_, v___y_1953_);
lean_dec(v___y_1953_);
return v_res_1954_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_tryRecv_x27___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_tryRecv_spec__0___redArg(lean_object* v___y_1955_){
_start:
{
lean_object* v___x_1957_; lean_object* v_producers_1958_; lean_object* v_consumers_1959_; uint8_t v_closed_1960_; lean_object* v___x_1962_; uint8_t v_isShared_1963_; uint8_t v_isSharedCheck_1985_; 
v___x_1957_ = lean_st_ref_get(v___y_1955_);
v_producers_1958_ = lean_ctor_get(v___x_1957_, 0);
v_consumers_1959_ = lean_ctor_get(v___x_1957_, 1);
v_closed_1960_ = lean_ctor_get_uint8(v___x_1957_, sizeof(void*)*2);
v_isSharedCheck_1985_ = !lean_is_exclusive(v___x_1957_);
if (v_isSharedCheck_1985_ == 0)
{
v___x_1962_ = v___x_1957_;
v_isShared_1963_ = v_isSharedCheck_1985_;
goto v_resetjp_1961_;
}
else
{
lean_inc(v_consumers_1959_);
lean_inc(v_producers_1958_);
lean_dec(v___x_1957_);
v___x_1962_ = lean_box(0);
v_isShared_1963_ = v_isSharedCheck_1985_;
goto v_resetjp_1961_;
}
v_resetjp_1961_:
{
lean_object* v___x_1964_; 
v___x_1964_ = l_Std_Queue_dequeue_x3f___redArg(v_producers_1958_);
if (lean_obj_tag(v___x_1964_) == 1)
{
lean_object* v_val_1965_; lean_object* v___x_1967_; uint8_t v_isShared_1968_; uint8_t v_isSharedCheck_1983_; 
v_val_1965_ = lean_ctor_get(v___x_1964_, 0);
v_isSharedCheck_1983_ = !lean_is_exclusive(v___x_1964_);
if (v_isSharedCheck_1983_ == 0)
{
v___x_1967_ = v___x_1964_;
v_isShared_1968_ = v_isSharedCheck_1983_;
goto v_resetjp_1966_;
}
else
{
lean_inc(v_val_1965_);
lean_dec(v___x_1964_);
v___x_1967_ = lean_box(0);
v_isShared_1968_ = v_isSharedCheck_1983_;
goto v_resetjp_1966_;
}
v_resetjp_1966_:
{
lean_object* v_fst_1969_; lean_object* v_snd_1970_; lean_object* v_fst_1971_; lean_object* v_snd_1972_; lean_object* v___x_1974_; 
v_fst_1969_ = lean_ctor_get(v_val_1965_, 0);
lean_inc(v_fst_1969_);
v_snd_1970_ = lean_ctor_get(v_val_1965_, 1);
lean_inc(v_snd_1970_);
lean_dec(v_val_1965_);
v_fst_1971_ = lean_ctor_get(v_fst_1969_, 0);
lean_inc(v_fst_1971_);
v_snd_1972_ = lean_ctor_get(v_fst_1969_, 1);
lean_inc(v_snd_1972_);
lean_dec(v_fst_1969_);
if (v_isShared_1963_ == 0)
{
lean_ctor_set(v___x_1962_, 0, v_snd_1970_);
v___x_1974_ = v___x_1962_;
goto v_reusejp_1973_;
}
else
{
lean_object* v_reuseFailAlloc_1982_; 
v_reuseFailAlloc_1982_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v_reuseFailAlloc_1982_, 0, v_snd_1970_);
lean_ctor_set(v_reuseFailAlloc_1982_, 1, v_consumers_1959_);
lean_ctor_set_uint8(v_reuseFailAlloc_1982_, sizeof(void*)*2, v_closed_1960_);
v___x_1974_ = v_reuseFailAlloc_1982_;
goto v_reusejp_1973_;
}
v_reusejp_1973_:
{
lean_object* v___x_1975_; uint8_t v___x_1976_; lean_object* v___x_1977_; lean_object* v___x_1978_; lean_object* v___x_1980_; 
v___x_1975_ = lean_st_ref_swap(v___y_1955_, v___x_1974_);
lean_dec(v___x_1975_);
v___x_1976_ = 1;
v___x_1977_ = lean_box(v___x_1976_);
v___x_1978_ = lean_io_promise_resolve(v___x_1977_, v_snd_1972_);
lean_dec(v_snd_1972_);
if (v_isShared_1968_ == 0)
{
lean_ctor_set(v___x_1967_, 0, v_fst_1971_);
v___x_1980_ = v___x_1967_;
goto v_reusejp_1979_;
}
else
{
lean_object* v_reuseFailAlloc_1981_; 
v_reuseFailAlloc_1981_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1981_, 0, v_fst_1971_);
v___x_1980_ = v_reuseFailAlloc_1981_;
goto v_reusejp_1979_;
}
v_reusejp_1979_:
{
return v___x_1980_;
}
}
}
}
else
{
lean_object* v___x_1984_; 
lean_dec(v___x_1964_);
lean_del_object(v___x_1962_);
lean_dec_ref(v_consumers_1959_);
v___x_1984_ = lean_box(0);
return v___x_1984_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_tryRecv_x27___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_tryRecv_spec__0___redArg___boxed(lean_object* v___y_1986_, lean_object* v___y_1987_){
_start:
{
lean_object* v_res_1988_; 
v_res_1988_ = l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_tryRecv_x27___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_tryRecv_spec__0___redArg(v___y_1986_);
lean_dec(v___y_1986_);
return v_res_1988_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_tryRecv_x27___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_tryRecv_spec__0(lean_object* v_00_u03b1_1989_, lean_object* v___y_1990_){
_start:
{
lean_object* v___x_1992_; 
v___x_1992_ = l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_tryRecv_x27___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_tryRecv_spec__0___redArg(v___y_1990_);
return v___x_1992_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_tryRecv_x27___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_tryRecv_spec__0___boxed(lean_object* v_00_u03b1_1993_, lean_object* v___y_1994_, lean_object* v___y_1995_){
_start:
{
lean_object* v_res_1996_; 
v_res_1996_ = l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_tryRecv_x27___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_tryRecv_spec__0(v_00_u03b1_1993_, v___y_1994_);
lean_dec(v___y_1994_);
return v_res_1996_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_tryRecv___redArg(lean_object* v_ch_1998_){
_start:
{
lean_object* v___f_2000_; lean_object* v___x_2001_; 
v___f_2000_ = ((lean_object*)(l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_tryRecv___redArg___closed__0));
v___x_2001_ = l_Std_Mutex_atomically___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_trySend_spec__1___redArg(v_ch_1998_, v___f_2000_);
return v___x_2001_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_tryRecv___redArg___boxed(lean_object* v_ch_2002_, lean_object* v___y_2003_){
_start:
{
lean_object* v_res_2004_; 
v_res_2004_ = l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_tryRecv___redArg(v_ch_2002_);
return v_res_2004_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_tryRecv(lean_object* v_00_u03b1_2005_, lean_object* v_ch_2006_){
_start:
{
lean_object* v___x_2008_; 
v___x_2008_ = l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_tryRecv___redArg(v_ch_2006_);
return v___x_2008_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_tryRecv___boxed(lean_object* v_00_u03b1_2009_, lean_object* v_ch_2010_, lean_object* v___y_2011_){
_start:
{
lean_object* v_res_2012_; 
v_res_2012_ = l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_tryRecv(v_00_u03b1_2009_, v_ch_2010_);
return v_res_2012_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_recv___redArg___lam__1(lean_object* v___f_2013_, lean_object* v___y_2014_){
_start:
{
lean_object* v___x_2016_; lean_object* v___x_2017_; 
v___x_2016_ = lean_st_ref_get(v___y_2014_);
v___x_2017_ = l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_tryRecv_x27___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_tryRecv_spec__0___redArg(v___y_2014_);
if (lean_obj_tag(v___x_2017_) == 1)
{
lean_object* v___x_2018_; 
lean_dec(v___x_2016_);
lean_dec_ref(v___f_2013_);
v___x_2018_ = lean_task_pure(v___x_2017_);
return v___x_2018_;
}
else
{
uint8_t v_closed_2019_; 
lean_dec(v___x_2017_);
v_closed_2019_ = lean_ctor_get_uint8(v___x_2016_, sizeof(void*)*2);
if (v_closed_2019_ == 0)
{
lean_object* v_producers_2020_; lean_object* v_consumers_2021_; lean_object* v___x_2023_; uint8_t v_isShared_2024_; uint8_t v_isSharedCheck_2036_; 
v_producers_2020_ = lean_ctor_get(v___x_2016_, 0);
v_consumers_2021_ = lean_ctor_get(v___x_2016_, 1);
v_isSharedCheck_2036_ = !lean_is_exclusive(v___x_2016_);
if (v_isSharedCheck_2036_ == 0)
{
v___x_2023_ = v___x_2016_;
v_isShared_2024_ = v_isSharedCheck_2036_;
goto v_resetjp_2022_;
}
else
{
lean_inc(v_consumers_2021_);
lean_inc(v_producers_2020_);
lean_dec(v___x_2016_);
v___x_2023_ = lean_box(0);
v_isShared_2024_ = v_isSharedCheck_2036_;
goto v_resetjp_2022_;
}
v_resetjp_2022_:
{
uint8_t v___x_2025_; lean_object* v___x_2026_; lean_object* v___x_2027_; lean_object* v___x_2028_; lean_object* v___x_2030_; 
v___x_2025_ = 1;
v___x_2026_ = lean_io_promise_new();
lean_inc(v___x_2026_);
v___x_2027_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2027_, 0, v___x_2026_);
v___x_2028_ = l_Std_Queue_enqueue___redArg(v___x_2027_, v_consumers_2021_);
if (v_isShared_2024_ == 0)
{
lean_ctor_set(v___x_2023_, 1, v___x_2028_);
v___x_2030_ = v___x_2023_;
goto v_reusejp_2029_;
}
else
{
lean_object* v_reuseFailAlloc_2035_; 
v_reuseFailAlloc_2035_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v_reuseFailAlloc_2035_, 0, v_producers_2020_);
lean_ctor_set(v_reuseFailAlloc_2035_, 1, v___x_2028_);
lean_ctor_set_uint8(v_reuseFailAlloc_2035_, sizeof(void*)*2, v_closed_2019_);
v___x_2030_ = v_reuseFailAlloc_2035_;
goto v_reusejp_2029_;
}
v_reusejp_2029_:
{
lean_object* v___x_2031_; lean_object* v___x_2032_; lean_object* v___x_2033_; lean_object* v___x_2034_; 
v___x_2031_ = lean_st_ref_swap(v___y_2014_, v___x_2030_);
lean_dec(v___x_2031_);
v___x_2032_ = lean_io_promise_result_opt(v___x_2026_);
lean_dec(v___x_2026_);
v___x_2033_ = lean_unsigned_to_nat(0u);
v___x_2034_ = lean_task_map(v___f_2013_, v___x_2032_, v___x_2033_, v___x_2025_);
return v___x_2034_;
}
}
}
else
{
lean_object* v___x_2037_; 
lean_dec(v___x_2016_);
lean_dec_ref(v___f_2013_);
v___x_2037_ = lean_obj_once(&l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recv___redArg___lam__1___closed__0, &l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recv___redArg___lam__1___closed__0_once, _init_l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recv___redArg___lam__1___closed__0);
return v___x_2037_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_recv___redArg___lam__1___boxed(lean_object* v___f_2038_, lean_object* v___y_2039_, lean_object* v___y_2040_){
_start:
{
lean_object* v_res_2041_; 
v_res_2041_ = l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_recv___redArg___lam__1(v___f_2038_, v___y_2039_);
lean_dec(v___y_2039_);
return v_res_2041_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_recv___redArg(lean_object* v_ch_2044_){
_start:
{
lean_object* v___f_2046_; lean_object* v___x_2047_; 
v___f_2046_ = ((lean_object*)(l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_recv___redArg___closed__0));
v___x_2047_ = l_Std_Mutex_atomically___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_trySend_spec__1___redArg(v_ch_2044_, v___f_2046_);
return v___x_2047_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_recv___redArg___boxed(lean_object* v_ch_2048_, lean_object* v___y_2049_){
_start:
{
lean_object* v_res_2050_; 
v_res_2050_ = l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_recv___redArg(v_ch_2048_);
return v_res_2050_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_recv(lean_object* v_00_u03b1_2051_, lean_object* v_ch_2052_){
_start:
{
lean_object* v___x_2054_; 
v___x_2054_ = l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_recv___redArg(v_ch_2052_);
return v___x_2054_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_recv___boxed(lean_object* v_00_u03b1_2055_, lean_object* v_ch_2056_, lean_object* v___y_2057_){
_start:
{
lean_object* v_res_2058_; 
v_res_2058_ = l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_recv(v_00_u03b1_2055_, v_ch_2056_);
return v_res_2058_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_recvReady_x27___redArg___lam__0(lean_object* v_toApplicative_2059_, lean_object* v_a_2060_){
_start:
{
uint8_t v___y_2062_; lean_object* v_producers_2066_; uint8_t v_closed_2067_; uint8_t v___x_2068_; 
v_producers_2066_ = lean_ctor_get(v_a_2060_, 0);
v_closed_2067_ = lean_ctor_get_uint8(v_a_2060_, sizeof(void*)*2);
v___x_2068_ = l_Std_Queue_isEmpty___redArg(v_producers_2066_);
if (v___x_2068_ == 0)
{
uint8_t v___x_2069_; 
v___x_2069_ = 1;
v___y_2062_ = v___x_2069_;
goto v___jp_2061_;
}
else
{
v___y_2062_ = v_closed_2067_;
goto v___jp_2061_;
}
v___jp_2061_:
{
lean_object* v_toPure_2063_; lean_object* v___x_2064_; lean_object* v___x_2065_; 
v_toPure_2063_ = lean_ctor_get(v_toApplicative_2059_, 1);
lean_inc(v_toPure_2063_);
lean_dec_ref(v_toApplicative_2059_);
v___x_2064_ = lean_box(v___y_2062_);
v___x_2065_ = lean_apply_2(v_toPure_2063_, lean_box(0), v___x_2064_);
return v___x_2065_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_recvReady_x27___redArg___lam__0___boxed(lean_object* v_toApplicative_2070_, lean_object* v_a_2071_){
_start:
{
lean_object* v_res_2072_; 
v_res_2072_ = l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_recvReady_x27___redArg___lam__0(v_toApplicative_2070_, v_a_2071_);
lean_dec_ref(v_a_2071_);
return v_res_2072_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_recvReady_x27___redArg(lean_object* v_inst_2073_, lean_object* v_inst_2074_, lean_object* v___y_2075_){
_start:
{
lean_object* v_toApplicative_2076_; lean_object* v_toBind_2077_; lean_object* v___f_2078_; lean_object* v___x_2079_; lean_object* v___x_2080_; lean_object* v___x_2081_; 
v_toApplicative_2076_ = lean_ctor_get(v_inst_2073_, 0);
lean_inc_ref(v_toApplicative_2076_);
v_toBind_2077_ = lean_ctor_get(v_inst_2073_, 1);
lean_inc(v_toBind_2077_);
lean_dec_ref(v_inst_2073_);
v___f_2078_ = lean_alloc_closure((void*)(l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_recvReady_x27___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_2078_, 0, v_toApplicative_2076_);
lean_inc(v___y_2075_);
v___x_2079_ = lean_alloc_closure((void*)(l_ST_Prim_Ref_get___boxed), 4, 3);
lean_closure_set(v___x_2079_, 0, lean_box(0));
lean_closure_set(v___x_2079_, 1, lean_box(0));
lean_closure_set(v___x_2079_, 2, v___y_2075_);
v___x_2080_ = lean_apply_2(v_inst_2074_, lean_box(0), v___x_2079_);
v___x_2081_ = lean_apply_4(v_toBind_2077_, lean_box(0), lean_box(0), v___x_2080_, v___f_2078_);
return v___x_2081_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_recvReady_x27___redArg___boxed(lean_object* v_inst_2082_, lean_object* v_inst_2083_, lean_object* v___y_2084_){
_start:
{
lean_object* v_res_2085_; 
v_res_2085_ = l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_recvReady_x27___redArg(v_inst_2082_, v_inst_2083_, v___y_2084_);
lean_dec(v___y_2084_);
return v_res_2085_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_recvReady_x27(lean_object* v_m_2086_, lean_object* v_00_u03b1_2087_, lean_object* v_inst_2088_, lean_object* v_inst_2089_, lean_object* v___y_2090_){
_start:
{
lean_object* v_toApplicative_2091_; lean_object* v_toBind_2092_; lean_object* v___f_2093_; lean_object* v___x_2094_; lean_object* v___x_2095_; lean_object* v___x_2096_; 
v_toApplicative_2091_ = lean_ctor_get(v_inst_2088_, 0);
lean_inc_ref(v_toApplicative_2091_);
v_toBind_2092_ = lean_ctor_get(v_inst_2088_, 1);
lean_inc(v_toBind_2092_);
lean_dec_ref(v_inst_2088_);
v___f_2093_ = lean_alloc_closure((void*)(l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_recvReady_x27___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_2093_, 0, v_toApplicative_2091_);
lean_inc(v___y_2090_);
v___x_2094_ = lean_alloc_closure((void*)(l_ST_Prim_Ref_get___boxed), 4, 3);
lean_closure_set(v___x_2094_, 0, lean_box(0));
lean_closure_set(v___x_2094_, 1, lean_box(0));
lean_closure_set(v___x_2094_, 2, v___y_2090_);
v___x_2095_ = lean_apply_2(v_inst_2089_, lean_box(0), v___x_2094_);
v___x_2096_ = lean_apply_4(v_toBind_2092_, lean_box(0), lean_box(0), v___x_2095_, v___f_2093_);
return v___x_2096_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_recvReady_x27___boxed(lean_object* v_m_2097_, lean_object* v_00_u03b1_2098_, lean_object* v_inst_2099_, lean_object* v_inst_2100_, lean_object* v___y_2101_){
_start:
{
lean_object* v_res_2102_; 
v_res_2102_ = l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_recvReady_x27(v_m_2097_, v_00_u03b1_2098_, v_inst_2099_, v_inst_2100_, v___y_2101_);
lean_dec(v___y_2101_);
return v_res_2102_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_tryRecv_x27___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_recvSelector_spec__0___redArg___lam__1(lean_object* v_snd_2103_, lean_object* v___f_2104_, lean_object* v_x_2105_){
_start:
{
if (lean_obj_tag(v_x_2105_) == 0)
{
lean_object* v_a_2107_; lean_object* v___x_2109_; uint8_t v_isShared_2110_; uint8_t v_isSharedCheck_2115_; 
lean_dec_ref(v___f_2104_);
v_a_2107_ = lean_ctor_get(v_x_2105_, 0);
v_isSharedCheck_2115_ = !lean_is_exclusive(v_x_2105_);
if (v_isSharedCheck_2115_ == 0)
{
v___x_2109_ = v_x_2105_;
v_isShared_2110_ = v_isSharedCheck_2115_;
goto v_resetjp_2108_;
}
else
{
lean_inc(v_a_2107_);
lean_dec(v_x_2105_);
v___x_2109_ = lean_box(0);
v_isShared_2110_ = v_isSharedCheck_2115_;
goto v_resetjp_2108_;
}
v_resetjp_2108_:
{
lean_object* v___x_2112_; 
if (v_isShared_2110_ == 0)
{
v___x_2112_ = v___x_2109_;
goto v_reusejp_2111_;
}
else
{
lean_object* v_reuseFailAlloc_2114_; 
v_reuseFailAlloc_2114_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2114_, 0, v_a_2107_);
v___x_2112_ = v_reuseFailAlloc_2114_;
goto v_reusejp_2111_;
}
v_reusejp_2111_:
{
lean_object* v___x_2113_; 
v___x_2113_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2113_, 0, v___x_2112_);
return v___x_2113_;
}
}
}
else
{
lean_object* v___x_2117_; uint8_t v_isShared_2118_; uint8_t v_isSharedCheck_2129_; 
v_isSharedCheck_2129_ = !lean_is_exclusive(v_x_2105_);
if (v_isSharedCheck_2129_ == 0)
{
lean_object* v_unused_2130_; 
v_unused_2130_ = lean_ctor_get(v_x_2105_, 0);
lean_dec(v_unused_2130_);
v___x_2117_ = v_x_2105_;
v_isShared_2118_ = v_isSharedCheck_2129_;
goto v_resetjp_2116_;
}
else
{
lean_dec(v_x_2105_);
v___x_2117_ = lean_box(0);
v_isShared_2118_ = v_isSharedCheck_2129_;
goto v_resetjp_2116_;
}
v_resetjp_2116_:
{
uint8_t v___x_2119_; lean_object* v___x_2120_; uint8_t v___x_2121_; lean_object* v___x_2122_; lean_object* v___x_2123_; lean_object* v___x_2125_; 
v___x_2119_ = 1;
v___x_2120_ = lean_unsigned_to_nat(0u);
v___x_2121_ = 0;
v___x_2122_ = lean_box(v___x_2119_);
v___x_2123_ = lean_io_promise_resolve(v___x_2122_, v_snd_2103_);
if (v_isShared_2118_ == 0)
{
lean_ctor_set(v___x_2117_, 0, v___x_2123_);
v___x_2125_ = v___x_2117_;
goto v_reusejp_2124_;
}
else
{
lean_object* v_reuseFailAlloc_2128_; 
v_reuseFailAlloc_2128_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2128_, 0, v___x_2123_);
v___x_2125_ = v_reuseFailAlloc_2128_;
goto v_reusejp_2124_;
}
v_reusejp_2124_:
{
lean_object* v___x_2126_; lean_object* v___x_2127_; 
v___x_2126_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2126_, 0, v___x_2125_);
v___x_2127_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_2120_, v___x_2121_, v___x_2126_, v___f_2104_);
return v___x_2127_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_tryRecv_x27___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_recvSelector_spec__0___redArg___lam__1___boxed(lean_object* v_snd_2131_, lean_object* v___f_2132_, lean_object* v_x_2133_, lean_object* v___y_2134_){
_start:
{
lean_object* v_res_2135_; 
v_res_2135_ = l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_tryRecv_x27___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_recvSelector_spec__0___redArg___lam__1(v_snd_2131_, v___f_2132_, v_x_2133_);
lean_dec(v_snd_2131_);
return v_res_2135_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_tryRecv_x27___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_recvSelector_spec__0___redArg___lam__0(lean_object* v___y_2136_, lean_object* v_x_2137_){
_start:
{
if (lean_obj_tag(v_x_2137_) == 0)
{
lean_object* v_a_2139_; lean_object* v___x_2141_; uint8_t v_isShared_2142_; uint8_t v_isSharedCheck_2147_; 
v_a_2139_ = lean_ctor_get(v_x_2137_, 0);
v_isSharedCheck_2147_ = !lean_is_exclusive(v_x_2137_);
if (v_isSharedCheck_2147_ == 0)
{
v___x_2141_ = v_x_2137_;
v_isShared_2142_ = v_isSharedCheck_2147_;
goto v_resetjp_2140_;
}
else
{
lean_inc(v_a_2139_);
lean_dec(v_x_2137_);
v___x_2141_ = lean_box(0);
v_isShared_2142_ = v_isSharedCheck_2147_;
goto v_resetjp_2140_;
}
v_resetjp_2140_:
{
lean_object* v___x_2144_; 
if (v_isShared_2142_ == 0)
{
v___x_2144_ = v___x_2141_;
goto v_reusejp_2143_;
}
else
{
lean_object* v_reuseFailAlloc_2146_; 
v_reuseFailAlloc_2146_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2146_, 0, v_a_2139_);
v___x_2144_ = v_reuseFailAlloc_2146_;
goto v_reusejp_2143_;
}
v_reusejp_2143_:
{
lean_object* v___x_2145_; 
v___x_2145_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2145_, 0, v___x_2144_);
return v___x_2145_;
}
}
}
else
{
lean_object* v_a_2148_; lean_object* v_producers_2149_; lean_object* v_consumers_2150_; uint8_t v_closed_2151_; lean_object* v___x_2153_; uint8_t v_isShared_2154_; uint8_t v_isSharedCheck_2172_; 
v_a_2148_ = lean_ctor_get(v_x_2137_, 0);
lean_inc(v_a_2148_);
lean_dec_ref_known(v_x_2137_, 1);
v_producers_2149_ = lean_ctor_get(v_a_2148_, 0);
v_consumers_2150_ = lean_ctor_get(v_a_2148_, 1);
v_closed_2151_ = lean_ctor_get_uint8(v_a_2148_, sizeof(void*)*2);
v_isSharedCheck_2172_ = !lean_is_exclusive(v_a_2148_);
if (v_isSharedCheck_2172_ == 0)
{
v___x_2153_ = v_a_2148_;
v_isShared_2154_ = v_isSharedCheck_2172_;
goto v_resetjp_2152_;
}
else
{
lean_inc(v_consumers_2150_);
lean_inc(v_producers_2149_);
lean_dec(v_a_2148_);
v___x_2153_ = lean_box(0);
v_isShared_2154_ = v_isSharedCheck_2172_;
goto v_resetjp_2152_;
}
v_resetjp_2152_:
{
lean_object* v___x_2155_; 
v___x_2155_ = l_Std_Queue_dequeue_x3f___redArg(v_producers_2149_);
if (lean_obj_tag(v___x_2155_) == 1)
{
lean_object* v_val_2156_; lean_object* v_fst_2157_; lean_object* v_snd_2158_; lean_object* v_fst_2159_; lean_object* v_snd_2160_; lean_object* v___f_2161_; lean_object* v___f_2162_; lean_object* v___x_2164_; 
v_val_2156_ = lean_ctor_get(v___x_2155_, 0);
lean_inc(v_val_2156_);
lean_dec_ref_known(v___x_2155_, 1);
v_fst_2157_ = lean_ctor_get(v_val_2156_, 0);
lean_inc(v_fst_2157_);
v_snd_2158_ = lean_ctor_get(v_val_2156_, 1);
lean_inc(v_snd_2158_);
lean_dec(v_val_2156_);
v_fst_2159_ = lean_ctor_get(v_fst_2157_, 0);
lean_inc(v_fst_2159_);
v_snd_2160_ = lean_ctor_get(v_fst_2157_, 1);
lean_inc(v_snd_2160_);
lean_dec(v_fst_2157_);
v___f_2161_ = lean_alloc_closure((void*)(l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_tryRecv_x27___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector_spec__0___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_2161_, 0, v_fst_2159_);
v___f_2162_ = lean_alloc_closure((void*)(l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_tryRecv_x27___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_recvSelector_spec__0___redArg___lam__1___boxed), 4, 2);
lean_closure_set(v___f_2162_, 0, v_snd_2160_);
lean_closure_set(v___f_2162_, 1, v___f_2161_);
if (v_isShared_2154_ == 0)
{
lean_ctor_set(v___x_2153_, 0, v_snd_2158_);
v___x_2164_ = v___x_2153_;
goto v_reusejp_2163_;
}
else
{
lean_object* v_reuseFailAlloc_2170_; 
v_reuseFailAlloc_2170_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v_reuseFailAlloc_2170_, 0, v_snd_2158_);
lean_ctor_set(v_reuseFailAlloc_2170_, 1, v_consumers_2150_);
lean_ctor_set_uint8(v_reuseFailAlloc_2170_, sizeof(void*)*2, v_closed_2151_);
v___x_2164_ = v_reuseFailAlloc_2170_;
goto v_reusejp_2163_;
}
v_reusejp_2163_:
{
lean_object* v___x_2165_; uint8_t v___x_2166_; lean_object* v___x_2167_; lean_object* v___x_2168_; lean_object* v___x_2169_; 
v___x_2165_ = lean_unsigned_to_nat(0u);
v___x_2166_ = 0;
v___x_2167_ = lean_st_ref_swap(v___y_2136_, v___x_2164_);
lean_dec(v___x_2167_);
v___x_2168_ = ((lean_object*)(l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_tryRecv_x27___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector_spec__0___redArg___lam__1___closed__1));
v___x_2169_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_2165_, v___x_2166_, v___x_2168_, v___f_2162_);
return v___x_2169_;
}
}
else
{
lean_object* v___x_2171_; 
lean_dec(v___x_2155_);
lean_del_object(v___x_2153_);
lean_dec_ref(v_consumers_2150_);
v___x_2171_ = ((lean_object*)(l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_tryRecv_x27___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector_spec__0___redArg___lam__1___closed__3));
return v___x_2171_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_tryRecv_x27___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_recvSelector_spec__0___redArg___lam__0___boxed(lean_object* v___y_2173_, lean_object* v_x_2174_, lean_object* v___y_2175_){
_start:
{
lean_object* v_res_2176_; 
v_res_2176_ = l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_tryRecv_x27___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_recvSelector_spec__0___redArg___lam__0(v___y_2173_, v_x_2174_);
lean_dec(v___y_2173_);
return v_res_2176_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_tryRecv_x27___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_recvSelector_spec__0___redArg(lean_object* v___y_2177_){
_start:
{
lean_object* v___f_2179_; lean_object* v___x_2180_; uint8_t v___x_2181_; lean_object* v___x_2182_; lean_object* v___x_2183_; lean_object* v___x_2184_; lean_object* v___x_2185_; 
lean_inc(v___y_2177_);
v___f_2179_ = lean_alloc_closure((void*)(l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_tryRecv_x27___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_recvSelector_spec__0___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_2179_, 0, v___y_2177_);
v___x_2180_ = lean_unsigned_to_nat(0u);
v___x_2181_ = 0;
v___x_2182_ = lean_st_ref_get(v___y_2177_);
v___x_2183_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2183_, 0, v___x_2182_);
v___x_2184_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2184_, 0, v___x_2183_);
v___x_2185_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_2180_, v___x_2181_, v___x_2184_, v___f_2179_);
return v___x_2185_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_tryRecv_x27___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_recvSelector_spec__0___redArg___boxed(lean_object* v___y_2186_, lean_object* v___y_2187_){
_start:
{
lean_object* v_res_2188_; 
v_res_2188_ = l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_tryRecv_x27___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_recvSelector_spec__0___redArg(v___y_2186_);
lean_dec(v___y_2186_);
return v_res_2188_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_tryRecv_x27___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_recvSelector_spec__0(lean_object* v_00_u03b1_2189_, lean_object* v___y_2190_){
_start:
{
lean_object* v___x_2192_; 
v___x_2192_ = l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_tryRecv_x27___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_recvSelector_spec__0___redArg(v___y_2190_);
return v___x_2192_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_tryRecv_x27___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_recvSelector_spec__0___boxed(lean_object* v_00_u03b1_2193_, lean_object* v___y_2194_, lean_object* v___y_2195_){
_start:
{
lean_object* v_res_2196_; 
v_res_2196_ = l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_tryRecv_x27___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_recvSelector_spec__0(v_00_u03b1_2193_, v___y_2194_);
lean_dec(v___y_2194_);
return v_res_2196_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Waiter_race___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_recvSelector_spec__1___redArg___lam__1(lean_object* v_lose_2197_, lean_object* v___y_2198_, lean_object* v___f_2199_, lean_object* v_x_2200_){
_start:
{
if (lean_obj_tag(v_x_2200_) == 0)
{
lean_object* v_a_2202_; lean_object* v___x_2204_; uint8_t v_isShared_2205_; uint8_t v_isSharedCheck_2210_; 
lean_dec_ref(v___f_2199_);
lean_dec_ref(v_lose_2197_);
v_a_2202_ = lean_ctor_get(v_x_2200_, 0);
v_isSharedCheck_2210_ = !lean_is_exclusive(v_x_2200_);
if (v_isSharedCheck_2210_ == 0)
{
v___x_2204_ = v_x_2200_;
v_isShared_2205_ = v_isSharedCheck_2210_;
goto v_resetjp_2203_;
}
else
{
lean_inc(v_a_2202_);
lean_dec(v_x_2200_);
v___x_2204_ = lean_box(0);
v_isShared_2205_ = v_isSharedCheck_2210_;
goto v_resetjp_2203_;
}
v_resetjp_2203_:
{
lean_object* v___x_2207_; 
if (v_isShared_2205_ == 0)
{
v___x_2207_ = v___x_2204_;
goto v_reusejp_2206_;
}
else
{
lean_object* v_reuseFailAlloc_2209_; 
v_reuseFailAlloc_2209_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2209_, 0, v_a_2202_);
v___x_2207_ = v_reuseFailAlloc_2209_;
goto v_reusejp_2206_;
}
v_reusejp_2206_:
{
lean_object* v___x_2208_; 
v___x_2208_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2208_, 0, v___x_2207_);
return v___x_2208_;
}
}
}
else
{
lean_object* v_a_2211_; uint8_t v___x_2212_; 
v_a_2211_ = lean_ctor_get(v_x_2200_, 0);
lean_inc(v_a_2211_);
lean_dec_ref_known(v_x_2200_, 1);
v___x_2212_ = lean_unbox(v_a_2211_);
lean_dec(v_a_2211_);
if (v___x_2212_ == 0)
{
lean_object* v___x_2213_; 
lean_dec_ref(v___f_2199_);
lean_inc(v___y_2198_);
v___x_2213_ = lean_apply_2(v_lose_2197_, v___y_2198_, lean_box(0));
return v___x_2213_;
}
else
{
lean_object* v___x_2214_; uint8_t v___x_2215_; lean_object* v___x_2216_; lean_object* v___x_2217_; 
lean_dec_ref(v_lose_2197_);
v___x_2214_ = lean_unsigned_to_nat(0u);
v___x_2215_ = 0;
v___x_2216_ = l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_tryRecv_x27___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_recvSelector_spec__0___redArg(v___y_2198_);
v___x_2217_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_2214_, v___x_2215_, v___x_2216_, v___f_2199_);
return v___x_2217_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_Waiter_race___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_recvSelector_spec__1___redArg___lam__1___boxed(lean_object* v_lose_2218_, lean_object* v___y_2219_, lean_object* v___f_2220_, lean_object* v_x_2221_, lean_object* v___y_2222_){
_start:
{
lean_object* v_res_2223_; 
v_res_2223_ = l_Std_Async_Waiter_race___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_recvSelector_spec__1___redArg___lam__1(v_lose_2218_, v___y_2219_, v___f_2220_, v_x_2221_);
lean_dec(v___y_2219_);
return v_res_2223_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Waiter_race___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_recvSelector_spec__1___redArg(lean_object* v_w_2224_, lean_object* v_lose_2225_, lean_object* v___y_2226_){
_start:
{
lean_object* v_finished_2228_; lean_object* v_promise_2229_; lean_object* v___f_2230_; lean_object* v___f_2231_; lean_object* v___x_2232_; uint8_t v___x_2233_; lean_object* v___x_2234_; uint8_t v___y_2236_; uint8_t v___x_2244_; 
v_finished_2228_ = lean_ctor_get(v_w_2224_, 0);
lean_inc(v_finished_2228_);
v_promise_2229_ = lean_ctor_get(v_w_2224_, 1);
lean_inc(v_promise_2229_);
lean_dec_ref(v_w_2224_);
v___f_2230_ = lean_alloc_closure((void*)(l_Std_Async_Waiter_race___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector_spec__1___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_2230_, 0, v_promise_2229_);
lean_inc(v___y_2226_);
v___f_2231_ = lean_alloc_closure((void*)(l_Std_Async_Waiter_race___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_recvSelector_spec__1___redArg___lam__1___boxed), 5, 3);
lean_closure_set(v___f_2231_, 0, v_lose_2225_);
lean_closure_set(v___f_2231_, 1, v___y_2226_);
lean_closure_set(v___f_2231_, 2, v___f_2230_);
v___x_2232_ = lean_unsigned_to_nat(0u);
v___x_2233_ = 0;
v___x_2234_ = lean_st_ref_take(v_finished_2228_);
v___x_2244_ = lean_unbox(v___x_2234_);
lean_dec(v___x_2234_);
if (v___x_2244_ == 0)
{
uint8_t v___x_2245_; 
v___x_2245_ = 1;
v___y_2236_ = v___x_2245_;
goto v___jp_2235_;
}
else
{
v___y_2236_ = v___x_2233_;
goto v___jp_2235_;
}
v___jp_2235_:
{
uint8_t v___x_2237_; lean_object* v___x_2238_; lean_object* v___x_2239_; lean_object* v___x_2240_; lean_object* v___x_2241_; lean_object* v___x_2242_; lean_object* v___x_2243_; 
v___x_2237_ = 1;
v___x_2238_ = lean_box(v___x_2237_);
v___x_2239_ = lean_st_ref_put(v_finished_2228_, v___x_2238_);
lean_dec(v_finished_2228_);
v___x_2240_ = lean_box(v___y_2236_);
v___x_2241_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2241_, 0, v___x_2240_);
v___x_2242_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2242_, 0, v___x_2241_);
v___x_2243_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_2232_, v___x_2233_, v___x_2242_, v___f_2231_);
return v___x_2243_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_Waiter_race___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_recvSelector_spec__1___redArg___boxed(lean_object* v_w_2246_, lean_object* v_lose_2247_, lean_object* v___y_2248_, lean_object* v___y_2249_){
_start:
{
lean_object* v_res_2250_; 
v_res_2250_ = l_Std_Async_Waiter_race___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_recvSelector_spec__1___redArg(v_w_2246_, v_lose_2247_, v___y_2248_);
lean_dec(v___y_2248_);
return v_res_2250_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Waiter_race___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_recvSelector_spec__1(lean_object* v_00_u03b1_2251_, lean_object* v_w_2252_, lean_object* v_lose_2253_, lean_object* v___y_2254_){
_start:
{
lean_object* v___x_2256_; 
v___x_2256_ = l_Std_Async_Waiter_race___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_recvSelector_spec__1___redArg(v_w_2252_, v_lose_2253_, v___y_2254_);
return v___x_2256_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Waiter_race___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_recvSelector_spec__1___boxed(lean_object* v_00_u03b1_2257_, lean_object* v_w_2258_, lean_object* v_lose_2259_, lean_object* v___y_2260_, lean_object* v___y_2261_){
_start:
{
lean_object* v_res_2262_; 
v_res_2262_ = l_Std_Async_Waiter_race___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_recvSelector_spec__1(v_00_u03b1_2257_, v_w_2258_, v_lose_2259_, v___y_2260_);
lean_dec(v___y_2260_);
return v_res_2262_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_recvSelector___redArg___lam__1(lean_object* v_x_2263_){
_start:
{
uint8_t v___y_2266_; 
if (lean_obj_tag(v_x_2263_) == 0)
{
lean_object* v_a_2270_; lean_object* v___x_2272_; uint8_t v_isShared_2273_; uint8_t v_isSharedCheck_2278_; 
v_a_2270_ = lean_ctor_get(v_x_2263_, 0);
v_isSharedCheck_2278_ = !lean_is_exclusive(v_x_2263_);
if (v_isSharedCheck_2278_ == 0)
{
v___x_2272_ = v_x_2263_;
v_isShared_2273_ = v_isSharedCheck_2278_;
goto v_resetjp_2271_;
}
else
{
lean_inc(v_a_2270_);
lean_dec(v_x_2263_);
v___x_2272_ = lean_box(0);
v_isShared_2273_ = v_isSharedCheck_2278_;
goto v_resetjp_2271_;
}
v_resetjp_2271_:
{
lean_object* v___x_2275_; 
if (v_isShared_2273_ == 0)
{
v___x_2275_ = v___x_2272_;
goto v_reusejp_2274_;
}
else
{
lean_object* v_reuseFailAlloc_2277_; 
v_reuseFailAlloc_2277_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2277_, 0, v_a_2270_);
v___x_2275_ = v_reuseFailAlloc_2277_;
goto v_reusejp_2274_;
}
v_reusejp_2274_:
{
lean_object* v___x_2276_; 
v___x_2276_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2276_, 0, v___x_2275_);
return v___x_2276_;
}
}
}
else
{
lean_object* v_a_2279_; lean_object* v_producers_2280_; uint8_t v_closed_2281_; uint8_t v___x_2282_; 
v_a_2279_ = lean_ctor_get(v_x_2263_, 0);
lean_inc(v_a_2279_);
lean_dec_ref_known(v_x_2263_, 1);
v_producers_2280_ = lean_ctor_get(v_a_2279_, 0);
lean_inc_ref(v_producers_2280_);
v_closed_2281_ = lean_ctor_get_uint8(v_a_2279_, sizeof(void*)*2);
lean_dec(v_a_2279_);
v___x_2282_ = l_Std_Queue_isEmpty___redArg(v_producers_2280_);
lean_dec_ref(v_producers_2280_);
if (v___x_2282_ == 0)
{
uint8_t v___x_2283_; 
v___x_2283_ = 1;
v___y_2266_ = v___x_2283_;
goto v___jp_2265_;
}
else
{
v___y_2266_ = v_closed_2281_;
goto v___jp_2265_;
}
}
v___jp_2265_:
{
lean_object* v___x_2267_; lean_object* v___x_2268_; lean_object* v___x_2269_; 
v___x_2267_ = lean_box(v___y_2266_);
v___x_2268_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2268_, 0, v___x_2267_);
v___x_2269_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2269_, 0, v___x_2268_);
return v___x_2269_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_recvSelector___redArg___lam__1___boxed(lean_object* v_x_2284_, lean_object* v___y_2285_){
_start:
{
lean_object* v_res_2286_; 
v_res_2286_ = l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_recvSelector___redArg___lam__1(v_x_2284_);
return v_res_2286_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_recvSelector___redArg___lam__2(lean_object* v___y_2287_, lean_object* v_waiter_2288_, lean_object* v_x_2289_){
_start:
{
if (lean_obj_tag(v_x_2289_) == 0)
{
lean_object* v_a_2291_; lean_object* v___x_2293_; uint8_t v_isShared_2294_; uint8_t v_isSharedCheck_2299_; 
lean_dec_ref(v_waiter_2288_);
v_a_2291_ = lean_ctor_get(v_x_2289_, 0);
v_isSharedCheck_2299_ = !lean_is_exclusive(v_x_2289_);
if (v_isSharedCheck_2299_ == 0)
{
v___x_2293_ = v_x_2289_;
v_isShared_2294_ = v_isSharedCheck_2299_;
goto v_resetjp_2292_;
}
else
{
lean_inc(v_a_2291_);
lean_dec(v_x_2289_);
v___x_2293_ = lean_box(0);
v_isShared_2294_ = v_isSharedCheck_2299_;
goto v_resetjp_2292_;
}
v_resetjp_2292_:
{
lean_object* v___x_2296_; 
if (v_isShared_2294_ == 0)
{
v___x_2296_ = v___x_2293_;
goto v_reusejp_2295_;
}
else
{
lean_object* v_reuseFailAlloc_2298_; 
v_reuseFailAlloc_2298_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2298_, 0, v_a_2291_);
v___x_2296_ = v_reuseFailAlloc_2298_;
goto v_reusejp_2295_;
}
v_reusejp_2295_:
{
lean_object* v___x_2297_; 
v___x_2297_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2297_, 0, v___x_2296_);
return v___x_2297_;
}
}
}
else
{
lean_object* v_a_2300_; uint8_t v___x_2301_; 
v_a_2300_ = lean_ctor_get(v_x_2289_, 0);
lean_inc(v_a_2300_);
lean_dec_ref_known(v_x_2289_, 1);
v___x_2301_ = lean_unbox(v_a_2300_);
lean_dec(v_a_2300_);
if (v___x_2301_ == 0)
{
lean_object* v___x_2302_; lean_object* v_producers_2303_; lean_object* v_consumers_2304_; uint8_t v_closed_2305_; lean_object* v___x_2307_; uint8_t v_isShared_2308_; uint8_t v_isSharedCheck_2316_; 
v___x_2302_ = lean_st_ref_take(v___y_2287_);
v_producers_2303_ = lean_ctor_get(v___x_2302_, 0);
v_consumers_2304_ = lean_ctor_get(v___x_2302_, 1);
v_closed_2305_ = lean_ctor_get_uint8(v___x_2302_, sizeof(void*)*2);
v_isSharedCheck_2316_ = !lean_is_exclusive(v___x_2302_);
if (v_isSharedCheck_2316_ == 0)
{
v___x_2307_ = v___x_2302_;
v_isShared_2308_ = v_isSharedCheck_2316_;
goto v_resetjp_2306_;
}
else
{
lean_inc(v_consumers_2304_);
lean_inc(v_producers_2303_);
lean_dec(v___x_2302_);
v___x_2307_ = lean_box(0);
v_isShared_2308_ = v_isSharedCheck_2316_;
goto v_resetjp_2306_;
}
v_resetjp_2306_:
{
lean_object* v___x_2309_; lean_object* v___x_2310_; lean_object* v___x_2312_; 
v___x_2309_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2309_, 0, v_waiter_2288_);
v___x_2310_ = l_Std_Queue_enqueue___redArg(v___x_2309_, v_consumers_2304_);
if (v_isShared_2308_ == 0)
{
lean_ctor_set(v___x_2307_, 1, v___x_2310_);
v___x_2312_ = v___x_2307_;
goto v_reusejp_2311_;
}
else
{
lean_object* v_reuseFailAlloc_2315_; 
v_reuseFailAlloc_2315_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v_reuseFailAlloc_2315_, 0, v_producers_2303_);
lean_ctor_set(v_reuseFailAlloc_2315_, 1, v___x_2310_);
lean_ctor_set_uint8(v_reuseFailAlloc_2315_, sizeof(void*)*2, v_closed_2305_);
v___x_2312_ = v_reuseFailAlloc_2315_;
goto v_reusejp_2311_;
}
v_reusejp_2311_:
{
lean_object* v___x_2313_; lean_object* v___x_2314_; 
v___x_2313_ = lean_st_ref_put(v___y_2287_, v___x_2312_);
v___x_2314_ = ((lean_object*)(l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_tryRecv_x27___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector_spec__0___redArg___lam__1___closed__1));
return v___x_2314_;
}
}
}
else
{
lean_object* v_lose_2317_; lean_object* v___x_2318_; 
v_lose_2317_ = ((lean_object*)(l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector___redArg___lam__3___closed__0));
v___x_2318_ = l_Std_Async_Waiter_race___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_recvSelector_spec__1___redArg(v_waiter_2288_, v_lose_2317_, v___y_2287_);
return v___x_2318_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_recvSelector___redArg___lam__2___boxed(lean_object* v___y_2319_, lean_object* v_waiter_2320_, lean_object* v_x_2321_, lean_object* v___y_2322_){
_start:
{
lean_object* v_res_2323_; 
v_res_2323_ = l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_recvSelector___redArg___lam__2(v___y_2319_, v_waiter_2320_, v_x_2321_);
lean_dec(v___y_2319_);
return v_res_2323_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_recvSelector___redArg___lam__0(lean_object* v_waiter_2324_, lean_object* v___f_2325_, lean_object* v___y_2326_){
_start:
{
lean_object* v___f_2328_; lean_object* v___x_2329_; uint8_t v___x_2330_; lean_object* v___x_2331_; lean_object* v___x_2332_; lean_object* v___x_2333_; lean_object* v___x_2334_; lean_object* v___x_2335_; 
lean_inc(v___y_2326_);
v___f_2328_ = lean_alloc_closure((void*)(l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_recvSelector___redArg___lam__2___boxed), 4, 2);
lean_closure_set(v___f_2328_, 0, v___y_2326_);
lean_closure_set(v___f_2328_, 1, v_waiter_2324_);
v___x_2329_ = lean_unsigned_to_nat(0u);
v___x_2330_ = 0;
v___x_2331_ = lean_st_ref_get(v___y_2326_);
v___x_2332_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2332_, 0, v___x_2331_);
v___x_2333_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2333_, 0, v___x_2332_);
v___x_2334_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_2329_, v___x_2330_, v___x_2333_, v___f_2325_);
v___x_2335_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_2329_, v___x_2330_, v___x_2334_, v___f_2328_);
return v___x_2335_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_recvSelector___redArg___lam__0___boxed(lean_object* v_waiter_2336_, lean_object* v___f_2337_, lean_object* v___y_2338_, lean_object* v___y_2339_){
_start:
{
lean_object* v_res_2340_; 
v_res_2340_ = l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_recvSelector___redArg___lam__0(v_waiter_2336_, v___f_2337_, v___y_2338_);
lean_dec(v___y_2338_);
return v_res_2340_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_recvSelector___redArg___lam__3(lean_object* v___f_2341_, lean_object* v_ch_2342_, lean_object* v_waiter_2343_){
_start:
{
lean_object* v___f_2345_; lean_object* v___x_2346_; 
v___f_2345_ = lean_alloc_closure((void*)(l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_recvSelector___redArg___lam__0___boxed), 4, 2);
lean_closure_set(v___f_2345_, 0, v_waiter_2343_);
lean_closure_set(v___f_2345_, 1, v___f_2341_);
v___x_2346_ = l_Std_Mutex_atomically___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector_spec__2___redArg(v_ch_2342_, v___f_2345_);
return v___x_2346_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_recvSelector___redArg___lam__3___boxed(lean_object* v___f_2347_, lean_object* v_ch_2348_, lean_object* v_waiter_2349_, lean_object* v___y_2350_){
_start:
{
lean_object* v_res_2351_; 
v_res_2351_ = l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_recvSelector___redArg___lam__3(v___f_2347_, v_ch_2348_, v_waiter_2349_);
return v_res_2351_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_recvSelector___redArg___lam__5(lean_object* v___y_2352_, lean_object* v___f_2353_, lean_object* v_x_2354_){
_start:
{
if (lean_obj_tag(v_x_2354_) == 0)
{
lean_object* v_a_2356_; lean_object* v___x_2358_; uint8_t v_isShared_2359_; uint8_t v_isSharedCheck_2364_; 
lean_dec_ref(v___f_2353_);
v_a_2356_ = lean_ctor_get(v_x_2354_, 0);
v_isSharedCheck_2364_ = !lean_is_exclusive(v_x_2354_);
if (v_isSharedCheck_2364_ == 0)
{
v___x_2358_ = v_x_2354_;
v_isShared_2359_ = v_isSharedCheck_2364_;
goto v_resetjp_2357_;
}
else
{
lean_inc(v_a_2356_);
lean_dec(v_x_2354_);
v___x_2358_ = lean_box(0);
v_isShared_2359_ = v_isSharedCheck_2364_;
goto v_resetjp_2357_;
}
v_resetjp_2357_:
{
lean_object* v___x_2361_; 
if (v_isShared_2359_ == 0)
{
v___x_2361_ = v___x_2358_;
goto v_reusejp_2360_;
}
else
{
lean_object* v_reuseFailAlloc_2363_; 
v_reuseFailAlloc_2363_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2363_, 0, v_a_2356_);
v___x_2361_ = v_reuseFailAlloc_2363_;
goto v_reusejp_2360_;
}
v_reusejp_2360_:
{
lean_object* v___x_2362_; 
v___x_2362_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2362_, 0, v___x_2361_);
return v___x_2362_;
}
}
}
else
{
lean_object* v_a_2365_; uint8_t v___x_2366_; 
v_a_2365_ = lean_ctor_get(v_x_2354_, 0);
lean_inc(v_a_2365_);
lean_dec_ref_known(v_x_2354_, 1);
v___x_2366_ = lean_unbox(v_a_2365_);
lean_dec(v_a_2365_);
if (v___x_2366_ == 0)
{
lean_object* v___x_2367_; 
lean_dec_ref(v___f_2353_);
v___x_2367_ = ((lean_object*)(l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector___redArg___lam__7___closed__1));
return v___x_2367_;
}
else
{
lean_object* v___x_2368_; uint8_t v___x_2369_; lean_object* v___x_2370_; lean_object* v___x_2371_; 
v___x_2368_ = lean_unsigned_to_nat(0u);
v___x_2369_ = 0;
v___x_2370_ = l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_tryRecv_x27___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_recvSelector_spec__0___redArg(v___y_2352_);
v___x_2371_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_2368_, v___x_2369_, v___x_2370_, v___f_2353_);
return v___x_2371_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_recvSelector___redArg___lam__5___boxed(lean_object* v___y_2372_, lean_object* v___f_2373_, lean_object* v_x_2374_, lean_object* v___y_2375_){
_start:
{
lean_object* v_res_2376_; 
v_res_2376_ = l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_recvSelector___redArg___lam__5(v___y_2372_, v___f_2373_, v_x_2374_);
lean_dec(v___y_2372_);
return v_res_2376_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_recvSelector___redArg___lam__4(lean_object* v___f_2377_, lean_object* v___f_2378_, lean_object* v___y_2379_){
_start:
{
lean_object* v___f_2381_; lean_object* v___x_2382_; uint8_t v___x_2383_; lean_object* v___x_2384_; lean_object* v___x_2385_; lean_object* v___x_2386_; lean_object* v___x_2387_; lean_object* v___x_2388_; 
lean_inc(v___y_2379_);
v___f_2381_ = lean_alloc_closure((void*)(l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_recvSelector___redArg___lam__5___boxed), 4, 2);
lean_closure_set(v___f_2381_, 0, v___y_2379_);
lean_closure_set(v___f_2381_, 1, v___f_2377_);
v___x_2382_ = lean_unsigned_to_nat(0u);
v___x_2383_ = 0;
v___x_2384_ = lean_st_ref_get(v___y_2379_);
v___x_2385_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2385_, 0, v___x_2384_);
v___x_2386_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2386_, 0, v___x_2385_);
v___x_2387_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_2382_, v___x_2383_, v___x_2386_, v___f_2378_);
v___x_2388_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_2382_, v___x_2383_, v___x_2387_, v___f_2381_);
return v___x_2388_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_recvSelector___redArg___lam__4___boxed(lean_object* v___f_2389_, lean_object* v___f_2390_, lean_object* v___y_2391_, lean_object* v___y_2392_){
_start:
{
lean_object* v_res_2393_; 
v_res_2393_ = l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_recvSelector___redArg___lam__4(v___f_2389_, v___f_2390_, v___y_2391_);
lean_dec(v___y_2391_);
return v_res_2393_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_recvSelector___redArg___lam__6(lean_object* v_producers_2394_, uint8_t v_closed_2395_, lean_object* v___y_2396_, lean_object* v_x_2397_){
_start:
{
if (lean_obj_tag(v_x_2397_) == 0)
{
lean_object* v_a_2399_; lean_object* v___x_2401_; uint8_t v_isShared_2402_; uint8_t v_isSharedCheck_2407_; 
lean_dec_ref(v_producers_2394_);
v_a_2399_ = lean_ctor_get(v_x_2397_, 0);
v_isSharedCheck_2407_ = !lean_is_exclusive(v_x_2397_);
if (v_isSharedCheck_2407_ == 0)
{
v___x_2401_ = v_x_2397_;
v_isShared_2402_ = v_isSharedCheck_2407_;
goto v_resetjp_2400_;
}
else
{
lean_inc(v_a_2399_);
lean_dec(v_x_2397_);
v___x_2401_ = lean_box(0);
v_isShared_2402_ = v_isSharedCheck_2407_;
goto v_resetjp_2400_;
}
v_resetjp_2400_:
{
lean_object* v___x_2404_; 
if (v_isShared_2402_ == 0)
{
v___x_2404_ = v___x_2401_;
goto v_reusejp_2403_;
}
else
{
lean_object* v_reuseFailAlloc_2406_; 
v_reuseFailAlloc_2406_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2406_, 0, v_a_2399_);
v___x_2404_ = v_reuseFailAlloc_2406_;
goto v_reusejp_2403_;
}
v_reusejp_2403_:
{
lean_object* v___x_2405_; 
v___x_2405_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2405_, 0, v___x_2404_);
return v___x_2405_;
}
}
}
else
{
lean_object* v_a_2408_; lean_object* v___x_2409_; lean_object* v___x_2410_; lean_object* v___x_2411_; 
v_a_2408_ = lean_ctor_get(v_x_2397_, 0);
lean_inc(v_a_2408_);
lean_dec_ref_known(v_x_2397_, 1);
v___x_2409_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_2409_, 0, v_producers_2394_);
lean_ctor_set(v___x_2409_, 1, v_a_2408_);
lean_ctor_set_uint8(v___x_2409_, sizeof(void*)*2, v_closed_2395_);
v___x_2410_ = lean_st_ref_swap(v___y_2396_, v___x_2409_);
lean_dec(v___x_2410_);
v___x_2411_ = ((lean_object*)(l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_tryRecv_x27___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector_spec__0___redArg___lam__1___closed__1));
return v___x_2411_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_recvSelector___redArg___lam__6___boxed(lean_object* v_producers_2412_, lean_object* v_closed_2413_, lean_object* v___y_2414_, lean_object* v_x_2415_, lean_object* v___y_2416_){
_start:
{
uint8_t v_closed_boxed_2417_; lean_object* v_res_2418_; 
v_closed_boxed_2417_ = lean_unbox(v_closed_2413_);
v_res_2418_ = l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_recvSelector___redArg___lam__6(v_producers_2412_, v_closed_boxed_2417_, v___y_2414_, v_x_2415_);
lean_dec(v___y_2414_);
return v_res_2418_;
}
}
LEAN_EXPORT lean_object* l_List_filterAuxM___at___00Std_Queue_filterM___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_recvSelector_spec__2_spec__2___redArg___lam__0___boxed(lean_object* v_tail_2419_, lean_object* v_x_2420_, lean_object* v_head_2421_, lean_object* v_x_2422_, lean_object* v___y_2423_){
_start:
{
lean_object* v_res_2424_; 
v_res_2424_ = l_List_filterAuxM___at___00Std_Queue_filterM___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_recvSelector_spec__2_spec__2___redArg___lam__0(v_tail_2419_, v_x_2420_, v_head_2421_, v_x_2422_);
return v_res_2424_;
}
}
LEAN_EXPORT lean_object* l_List_filterAuxM___at___00Std_Queue_filterM___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_recvSelector_spec__2_spec__2___redArg(lean_object* v_x_2425_, lean_object* v_x_2426_){
_start:
{
if (lean_obj_tag(v_x_2425_) == 0)
{
lean_object* v___x_2428_; lean_object* v___x_2429_; 
v___x_2428_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2428_, 0, v_x_2426_);
v___x_2429_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2429_, 0, v___x_2428_);
return v___x_2429_;
}
else
{
lean_object* v_head_2430_; lean_object* v_tail_2431_; lean_object* v___f_2432_; lean_object* v___x_2433_; uint8_t v___x_2434_; 
v_head_2430_ = lean_ctor_get(v_x_2425_, 0);
lean_inc_n(v_head_2430_, 2);
v_tail_2431_ = lean_ctor_get(v_x_2425_, 1);
lean_inc(v_tail_2431_);
lean_dec_ref_known(v_x_2425_, 2);
v___f_2432_ = lean_alloc_closure((void*)(l_List_filterAuxM___at___00Std_Queue_filterM___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_recvSelector_spec__2_spec__2___redArg___lam__0___boxed), 5, 3);
lean_closure_set(v___f_2432_, 0, v_tail_2431_);
lean_closure_set(v___f_2432_, 1, v_x_2426_);
lean_closure_set(v___f_2432_, 2, v_head_2430_);
v___x_2433_ = lean_unsigned_to_nat(0u);
v___x_2434_ = 0;
if (lean_obj_tag(v_head_2430_) == 0)
{
lean_object* v___x_2435_; lean_object* v___x_2436_; 
lean_dec_ref_known(v_head_2430_, 1);
v___x_2435_ = ((lean_object*)(l_List_filterAuxM___at___00Std_Queue_filterM___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector_spec__3_spec__3___redArg___closed__1));
v___x_2436_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_2433_, v___x_2434_, v___x_2435_, v___f_2432_);
return v___x_2436_;
}
else
{
lean_object* v_finished_2437_; lean_object* v___x_2439_; uint8_t v_isShared_2440_; uint8_t v_isSharedCheck_2450_; 
v_finished_2437_ = lean_ctor_get(v_head_2430_, 0);
v_isSharedCheck_2450_ = !lean_is_exclusive(v_head_2430_);
if (v_isSharedCheck_2450_ == 0)
{
v___x_2439_ = v_head_2430_;
v_isShared_2440_ = v_isSharedCheck_2450_;
goto v_resetjp_2438_;
}
else
{
lean_inc(v_finished_2437_);
lean_dec(v_head_2430_);
v___x_2439_ = lean_box(0);
v_isShared_2440_ = v_isSharedCheck_2450_;
goto v_resetjp_2438_;
}
v_resetjp_2438_:
{
lean_object* v_finished_2441_; lean_object* v___f_2442_; lean_object* v___x_2443_; lean_object* v___x_2445_; 
v_finished_2441_ = lean_ctor_get(v_finished_2437_, 0);
lean_inc(v_finished_2441_);
lean_dec_ref(v_finished_2437_);
v___f_2442_ = ((lean_object*)(l_List_filterAuxM___at___00Std_Queue_filterM___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector_spec__3_spec__3___redArg___closed__2));
v___x_2443_ = lean_st_ref_get(v_finished_2441_);
lean_dec(v_finished_2441_);
if (v_isShared_2440_ == 0)
{
lean_ctor_set(v___x_2439_, 0, v___x_2443_);
v___x_2445_ = v___x_2439_;
goto v_reusejp_2444_;
}
else
{
lean_object* v_reuseFailAlloc_2449_; 
v_reuseFailAlloc_2449_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2449_, 0, v___x_2443_);
v___x_2445_ = v_reuseFailAlloc_2449_;
goto v_reusejp_2444_;
}
v_reusejp_2444_:
{
lean_object* v___x_2446_; lean_object* v___x_2447_; lean_object* v___x_2448_; 
v___x_2446_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2446_, 0, v___x_2445_);
v___x_2447_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_2433_, v___x_2434_, v___x_2446_, v___f_2442_);
v___x_2448_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_2433_, v___x_2434_, v___x_2447_, v___f_2432_);
return v___x_2448_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_filterAuxM___at___00Std_Queue_filterM___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_recvSelector_spec__2_spec__2___redArg___lam__0(lean_object* v_tail_2451_, lean_object* v_x_2452_, lean_object* v_head_2453_, lean_object* v_x_2454_){
_start:
{
if (lean_obj_tag(v_x_2454_) == 0)
{
lean_object* v_a_2456_; lean_object* v___x_2458_; uint8_t v_isShared_2459_; uint8_t v_isSharedCheck_2464_; 
lean_dec_ref(v_head_2453_);
lean_dec(v_x_2452_);
lean_dec(v_tail_2451_);
v_a_2456_ = lean_ctor_get(v_x_2454_, 0);
v_isSharedCheck_2464_ = !lean_is_exclusive(v_x_2454_);
if (v_isSharedCheck_2464_ == 0)
{
v___x_2458_ = v_x_2454_;
v_isShared_2459_ = v_isSharedCheck_2464_;
goto v_resetjp_2457_;
}
else
{
lean_inc(v_a_2456_);
lean_dec(v_x_2454_);
v___x_2458_ = lean_box(0);
v_isShared_2459_ = v_isSharedCheck_2464_;
goto v_resetjp_2457_;
}
v_resetjp_2457_:
{
lean_object* v___x_2461_; 
if (v_isShared_2459_ == 0)
{
v___x_2461_ = v___x_2458_;
goto v_reusejp_2460_;
}
else
{
lean_object* v_reuseFailAlloc_2463_; 
v_reuseFailAlloc_2463_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2463_, 0, v_a_2456_);
v___x_2461_ = v_reuseFailAlloc_2463_;
goto v_reusejp_2460_;
}
v_reusejp_2460_:
{
lean_object* v___x_2462_; 
v___x_2462_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2462_, 0, v___x_2461_);
return v___x_2462_;
}
}
}
else
{
lean_object* v_a_2465_; uint8_t v___x_2466_; 
v_a_2465_ = lean_ctor_get(v_x_2454_, 0);
lean_inc(v_a_2465_);
lean_dec_ref_known(v_x_2454_, 1);
v___x_2466_ = lean_unbox(v_a_2465_);
lean_dec(v_a_2465_);
if (v___x_2466_ == 0)
{
lean_object* v___x_2467_; 
lean_dec_ref(v_head_2453_);
v___x_2467_ = l_List_filterAuxM___at___00Std_Queue_filterM___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_recvSelector_spec__2_spec__2___redArg(v_tail_2451_, v_x_2452_);
return v___x_2467_;
}
else
{
lean_object* v___x_2468_; lean_object* v___x_2469_; 
v___x_2468_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2468_, 0, v_head_2453_);
lean_ctor_set(v___x_2468_, 1, v_x_2452_);
v___x_2469_ = l_List_filterAuxM___at___00Std_Queue_filterM___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_recvSelector_spec__2_spec__2___redArg(v_tail_2451_, v___x_2468_);
return v___x_2469_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_filterAuxM___at___00Std_Queue_filterM___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_recvSelector_spec__2_spec__2___redArg___boxed(lean_object* v_x_2470_, lean_object* v_x_2471_, lean_object* v___y_2472_){
_start:
{
lean_object* v_res_2473_; 
v_res_2473_ = l_List_filterAuxM___at___00Std_Queue_filterM___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_recvSelector_spec__2_spec__2___redArg(v_x_2470_, v_x_2471_);
return v_res_2473_;
}
}
LEAN_EXPORT lean_object* l_Std_Queue_filterM___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_recvSelector_spec__2___redArg___lam__3(lean_object* v___x_2474_, lean_object* v_eList_2475_, lean_object* v___f_2476_, lean_object* v_x_2477_){
_start:
{
if (lean_obj_tag(v_x_2477_) == 0)
{
lean_object* v_a_2479_; lean_object* v___x_2481_; uint8_t v_isShared_2482_; uint8_t v_isSharedCheck_2487_; 
lean_dec_ref(v___f_2476_);
lean_dec(v_eList_2475_);
lean_dec(v___x_2474_);
v_a_2479_ = lean_ctor_get(v_x_2477_, 0);
v_isSharedCheck_2487_ = !lean_is_exclusive(v_x_2477_);
if (v_isSharedCheck_2487_ == 0)
{
v___x_2481_ = v_x_2477_;
v_isShared_2482_ = v_isSharedCheck_2487_;
goto v_resetjp_2480_;
}
else
{
lean_inc(v_a_2479_);
lean_dec(v_x_2477_);
v___x_2481_ = lean_box(0);
v_isShared_2482_ = v_isSharedCheck_2487_;
goto v_resetjp_2480_;
}
v_resetjp_2480_:
{
lean_object* v___x_2484_; 
if (v_isShared_2482_ == 0)
{
v___x_2484_ = v___x_2481_;
goto v_reusejp_2483_;
}
else
{
lean_object* v_reuseFailAlloc_2486_; 
v_reuseFailAlloc_2486_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2486_, 0, v_a_2479_);
v___x_2484_ = v_reuseFailAlloc_2486_;
goto v_reusejp_2483_;
}
v_reusejp_2483_:
{
lean_object* v___x_2485_; 
v___x_2485_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2485_, 0, v___x_2484_);
return v___x_2485_;
}
}
}
else
{
lean_object* v_a_2488_; lean_object* v___f_2489_; lean_object* v___x_2490_; uint8_t v___x_2491_; lean_object* v___x_2492_; lean_object* v___x_2493_; lean_object* v___x_2494_; 
v_a_2488_ = lean_ctor_get(v_x_2477_, 0);
lean_inc(v_a_2488_);
lean_dec_ref_known(v_x_2477_, 1);
lean_inc(v___x_2474_);
v___f_2489_ = lean_alloc_closure((void*)(l_Std_Queue_filterM___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector_spec__3___redArg___lam__2___boxed), 4, 2);
lean_closure_set(v___f_2489_, 0, v_a_2488_);
lean_closure_set(v___f_2489_, 1, v___x_2474_);
v___x_2490_ = lean_unsigned_to_nat(0u);
v___x_2491_ = 0;
v___x_2492_ = l_List_filterAuxM___at___00Std_Queue_filterM___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_recvSelector_spec__2_spec__2___redArg(v_eList_2475_, v___x_2474_);
v___x_2493_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_2490_, v___x_2491_, v___x_2492_, v___f_2476_);
v___x_2494_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_2490_, v___x_2491_, v___x_2493_, v___f_2489_);
return v___x_2494_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Queue_filterM___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_recvSelector_spec__2___redArg___lam__3___boxed(lean_object* v___x_2495_, lean_object* v_eList_2496_, lean_object* v___f_2497_, lean_object* v_x_2498_, lean_object* v___y_2499_){
_start:
{
lean_object* v_res_2500_; 
v_res_2500_ = l_Std_Queue_filterM___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_recvSelector_spec__2___redArg___lam__3(v___x_2495_, v_eList_2496_, v___f_2497_, v_x_2498_);
return v_res_2500_;
}
}
LEAN_EXPORT lean_object* l_Std_Queue_filterM___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_recvSelector_spec__2___redArg(lean_object* v_q_2501_, lean_object* v___y_2502_){
_start:
{
lean_object* v_eList_2504_; lean_object* v_dList_2505_; lean_object* v___f_2506_; lean_object* v___x_2507_; lean_object* v___f_2508_; lean_object* v___x_2509_; uint8_t v___x_2510_; lean_object* v___x_2511_; lean_object* v___x_2512_; lean_object* v___x_2513_; 
v_eList_2504_ = lean_ctor_get(v_q_2501_, 0);
lean_inc(v_eList_2504_);
v_dList_2505_ = lean_ctor_get(v_q_2501_, 1);
lean_inc(v_dList_2505_);
lean_dec_ref(v_q_2501_);
v___f_2506_ = ((lean_object*)(l_Std_Queue_filterM___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector_spec__3___redArg___closed__0));
v___x_2507_ = lean_box(0);
v___f_2508_ = lean_alloc_closure((void*)(l_Std_Queue_filterM___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_recvSelector_spec__2___redArg___lam__3___boxed), 5, 3);
lean_closure_set(v___f_2508_, 0, v___x_2507_);
lean_closure_set(v___f_2508_, 1, v_eList_2504_);
lean_closure_set(v___f_2508_, 2, v___f_2506_);
v___x_2509_ = lean_unsigned_to_nat(0u);
v___x_2510_ = 0;
v___x_2511_ = l_List_filterAuxM___at___00Std_Queue_filterM___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_recvSelector_spec__2_spec__2___redArg(v_dList_2505_, v___x_2507_);
v___x_2512_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_2509_, v___x_2510_, v___x_2511_, v___f_2506_);
v___x_2513_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_2509_, v___x_2510_, v___x_2512_, v___f_2508_);
return v___x_2513_;
}
}
LEAN_EXPORT lean_object* l_Std_Queue_filterM___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_recvSelector_spec__2___redArg___boxed(lean_object* v_q_2514_, lean_object* v___y_2515_, lean_object* v___y_2516_){
_start:
{
lean_object* v_res_2517_; 
v_res_2517_ = l_Std_Queue_filterM___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_recvSelector_spec__2___redArg(v_q_2514_, v___y_2515_);
lean_dec(v___y_2515_);
return v_res_2517_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_recvSelector___redArg___lam__7(lean_object* v___y_2518_, lean_object* v_x_2519_){
_start:
{
if (lean_obj_tag(v_x_2519_) == 0)
{
lean_object* v_a_2521_; lean_object* v___x_2523_; uint8_t v_isShared_2524_; uint8_t v_isSharedCheck_2529_; 
v_a_2521_ = lean_ctor_get(v_x_2519_, 0);
v_isSharedCheck_2529_ = !lean_is_exclusive(v_x_2519_);
if (v_isSharedCheck_2529_ == 0)
{
v___x_2523_ = v_x_2519_;
v_isShared_2524_ = v_isSharedCheck_2529_;
goto v_resetjp_2522_;
}
else
{
lean_inc(v_a_2521_);
lean_dec(v_x_2519_);
v___x_2523_ = lean_box(0);
v_isShared_2524_ = v_isSharedCheck_2529_;
goto v_resetjp_2522_;
}
v_resetjp_2522_:
{
lean_object* v___x_2526_; 
if (v_isShared_2524_ == 0)
{
v___x_2526_ = v___x_2523_;
goto v_reusejp_2525_;
}
else
{
lean_object* v_reuseFailAlloc_2528_; 
v_reuseFailAlloc_2528_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2528_, 0, v_a_2521_);
v___x_2526_ = v_reuseFailAlloc_2528_;
goto v_reusejp_2525_;
}
v_reusejp_2525_:
{
lean_object* v___x_2527_; 
v___x_2527_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2527_, 0, v___x_2526_);
return v___x_2527_;
}
}
}
else
{
lean_object* v_a_2530_; lean_object* v_producers_2531_; lean_object* v_consumers_2532_; uint8_t v_closed_2533_; lean_object* v___x_2534_; lean_object* v___f_2535_; lean_object* v___x_2536_; uint8_t v___x_2537_; lean_object* v___x_2538_; lean_object* v___x_2539_; 
v_a_2530_ = lean_ctor_get(v_x_2519_, 0);
lean_inc(v_a_2530_);
lean_dec_ref_known(v_x_2519_, 1);
v_producers_2531_ = lean_ctor_get(v_a_2530_, 0);
lean_inc_ref(v_producers_2531_);
v_consumers_2532_ = lean_ctor_get(v_a_2530_, 1);
lean_inc_ref(v_consumers_2532_);
v_closed_2533_ = lean_ctor_get_uint8(v_a_2530_, sizeof(void*)*2);
lean_dec(v_a_2530_);
v___x_2534_ = lean_box(v_closed_2533_);
lean_inc(v___y_2518_);
v___f_2535_ = lean_alloc_closure((void*)(l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_recvSelector___redArg___lam__6___boxed), 5, 3);
lean_closure_set(v___f_2535_, 0, v_producers_2531_);
lean_closure_set(v___f_2535_, 1, v___x_2534_);
lean_closure_set(v___f_2535_, 2, v___y_2518_);
v___x_2536_ = lean_unsigned_to_nat(0u);
v___x_2537_ = 0;
v___x_2538_ = l_Std_Queue_filterM___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_recvSelector_spec__2___redArg(v_consumers_2532_, v___y_2518_);
v___x_2539_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_2536_, v___x_2537_, v___x_2538_, v___f_2535_);
return v___x_2539_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_recvSelector___redArg___lam__7___boxed(lean_object* v___y_2540_, lean_object* v_x_2541_, lean_object* v___y_2542_){
_start:
{
lean_object* v_res_2543_; 
v_res_2543_ = l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_recvSelector___redArg___lam__7(v___y_2540_, v_x_2541_);
lean_dec(v___y_2540_);
return v_res_2543_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_recvSelector___redArg___lam__8(lean_object* v___y_2544_){
_start:
{
lean_object* v___f_2546_; lean_object* v___x_2547_; uint8_t v___x_2548_; lean_object* v___x_2549_; lean_object* v___x_2550_; lean_object* v___x_2551_; lean_object* v___x_2552_; 
lean_inc(v___y_2544_);
v___f_2546_ = lean_alloc_closure((void*)(l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_recvSelector___redArg___lam__7___boxed), 3, 1);
lean_closure_set(v___f_2546_, 0, v___y_2544_);
v___x_2547_ = lean_unsigned_to_nat(0u);
v___x_2548_ = 0;
v___x_2549_ = lean_st_ref_get(v___y_2544_);
v___x_2550_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2550_, 0, v___x_2549_);
v___x_2551_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2551_, 0, v___x_2550_);
v___x_2552_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_2547_, v___x_2548_, v___x_2551_, v___f_2546_);
return v___x_2552_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_recvSelector___redArg___lam__8___boxed(lean_object* v___y_2553_, lean_object* v___y_2554_){
_start:
{
lean_object* v_res_2555_; 
v_res_2555_ = l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_recvSelector___redArg___lam__8(v___y_2553_);
lean_dec(v___y_2553_);
return v_res_2555_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_recvSelector___redArg(lean_object* v_ch_2561_){
_start:
{
lean_object* v___f_2562_; lean_object* v___f_2563_; lean_object* v___f_2564_; lean_object* v___f_2565_; lean_object* v___x_2566_; lean_object* v___x_2567_; lean_object* v___x_2568_; 
v___f_2562_ = ((lean_object*)(l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_recvSelector___redArg___closed__0));
lean_inc_ref_n(v_ch_2561_, 2);
v___f_2563_ = lean_alloc_closure((void*)(l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_recvSelector___redArg___lam__3___boxed), 4, 2);
lean_closure_set(v___f_2563_, 0, v___f_2562_);
lean_closure_set(v___f_2563_, 1, v_ch_2561_);
v___f_2564_ = ((lean_object*)(l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_recvSelector___redArg___closed__1));
v___f_2565_ = ((lean_object*)(l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_recvSelector___redArg___closed__2));
v___x_2566_ = lean_alloc_closure((void*)(l_Std_Mutex_atomically___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector_spec__2___boxed), 5, 4);
lean_closure_set(v___x_2566_, 0, lean_box(0));
lean_closure_set(v___x_2566_, 1, lean_box(0));
lean_closure_set(v___x_2566_, 2, v_ch_2561_);
lean_closure_set(v___x_2566_, 3, v___f_2564_);
v___x_2567_ = lean_alloc_closure((void*)(l_Std_Mutex_atomically___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector_spec__2___boxed), 5, 4);
lean_closure_set(v___x_2567_, 0, lean_box(0));
lean_closure_set(v___x_2567_, 1, lean_box(0));
lean_closure_set(v___x_2567_, 2, v_ch_2561_);
lean_closure_set(v___x_2567_, 3, v___f_2565_);
v___x_2568_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2568_, 0, v___x_2566_);
lean_ctor_set(v___x_2568_, 1, v___f_2563_);
lean_ctor_set(v___x_2568_, 2, v___x_2567_);
return v___x_2568_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_recvSelector(lean_object* v_00_u03b1_2569_, lean_object* v_ch_2570_){
_start:
{
lean_object* v___x_2571_; 
v___x_2571_ = l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_recvSelector___redArg(v_ch_2570_);
return v___x_2571_;
}
}
LEAN_EXPORT lean_object* l_Std_Queue_filterM___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_recvSelector_spec__2(lean_object* v_00_u03b1_2572_, lean_object* v_q_2573_, lean_object* v___y_2574_){
_start:
{
lean_object* v___x_2576_; 
v___x_2576_ = l_Std_Queue_filterM___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_recvSelector_spec__2___redArg(v_q_2573_, v___y_2574_);
return v___x_2576_;
}
}
LEAN_EXPORT lean_object* l_Std_Queue_filterM___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_recvSelector_spec__2___boxed(lean_object* v_00_u03b1_2577_, lean_object* v_q_2578_, lean_object* v___y_2579_, lean_object* v___y_2580_){
_start:
{
lean_object* v_res_2581_; 
v_res_2581_ = l_Std_Queue_filterM___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_recvSelector_spec__2(v_00_u03b1_2577_, v_q_2578_, v___y_2579_);
lean_dec(v___y_2579_);
return v_res_2581_;
}
}
LEAN_EXPORT lean_object* l_List_filterAuxM___at___00Std_Queue_filterM___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_recvSelector_spec__2_spec__2(lean_object* v_00_u03b1_2582_, lean_object* v_x_2583_, lean_object* v_x_2584_, lean_object* v___y_2585_){
_start:
{
lean_object* v___x_2587_; 
v___x_2587_ = l_List_filterAuxM___at___00Std_Queue_filterM___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_recvSelector_spec__2_spec__2___redArg(v_x_2583_, v_x_2584_);
return v___x_2587_;
}
}
LEAN_EXPORT lean_object* l_List_filterAuxM___at___00Std_Queue_filterM___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_recvSelector_spec__2_spec__2___boxed(lean_object* v_00_u03b1_2588_, lean_object* v_x_2589_, lean_object* v_x_2590_, lean_object* v___y_2591_, lean_object* v___y_2592_){
_start:
{
lean_object* v_res_2593_; 
v_res_2593_ = l_List_filterAuxM___at___00Std_Queue_filterM___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_recvSelector_spec__2_spec__2(v_00_u03b1_2588_, v_x_2589_, v_x_2590_, v___y_2591_);
lean_dec(v___y_2591_);
return v_res_2593_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_Consumer_resolve___redArg(lean_object* v_c_2594_, uint8_t v_b_2595_){
_start:
{
lean_object* v_promise_2597_; lean_object* v___x_2598_; lean_object* v___x_2599_; 
v_promise_2597_ = lean_ctor_get(v_c_2594_, 0);
v___x_2598_ = lean_box(v_b_2595_);
v___x_2599_ = lean_io_promise_resolve(v___x_2598_, v_promise_2597_);
return v___x_2599_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_Consumer_resolve___redArg___boxed(lean_object* v_c_2600_, lean_object* v_b_2601_, lean_object* v___y_2602_){
_start:
{
uint8_t v_b_boxed_2603_; lean_object* v_res_2604_; 
v_b_boxed_2603_ = lean_unbox(v_b_2601_);
v_res_2604_ = l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_Consumer_resolve___redArg(v_c_2600_, v_b_boxed_2603_);
lean_dec_ref(v_c_2600_);
return v_res_2604_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_Consumer_resolve(lean_object* v_00_u03b1_2605_, lean_object* v_c_2606_, uint8_t v_b_2607_){
_start:
{
lean_object* v___x_2609_; 
v___x_2609_ = l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_Consumer_resolve___redArg(v_c_2606_, v_b_2607_);
return v___x_2609_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_Consumer_resolve___boxed(lean_object* v_00_u03b1_2610_, lean_object* v_c_2611_, lean_object* v_b_2612_, lean_object* v___y_2613_){
_start:
{
uint8_t v_b_boxed_2614_; lean_object* v_res_2615_; 
v_b_boxed_2614_ = lean_unbox(v_b_2612_);
v_res_2615_ = l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_Consumer_resolve(v_00_u03b1_2610_, v_c_2611_, v_b_boxed_2614_);
lean_dec_ref(v_c_2611_);
return v_res_2615_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_new___redArg___lam__0(lean_object* v_x_2616_){
_start:
{
lean_object* v___x_2618_; lean_object* v___x_2619_; 
v___x_2618_ = lean_box(0);
v___x_2619_ = lean_st_mk_ref(v___x_2618_);
return v___x_2619_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_new___redArg___lam__0___boxed(lean_object* v_x_2620_, lean_object* v___y_2621_){
_start:
{
lean_object* v_res_2622_; 
v_res_2622_ = l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_new___redArg___lam__0(v_x_2620_);
lean_dec(v_x_2620_);
return v_res_2622_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Vector_Basic_0__Vector_mapM_go___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_new_spec__0___redArg(lean_object* v_n_2623_, lean_object* v_f_2624_, lean_object* v_xs_2625_, lean_object* v_k_2626_, lean_object* v_acc_2627_){
_start:
{
uint8_t v___x_2629_; 
v___x_2629_ = lean_nat_dec_lt(v_k_2626_, v_n_2623_);
if (v___x_2629_ == 0)
{
lean_dec(v_k_2626_);
lean_dec_ref(v_f_2624_);
return v_acc_2627_;
}
else
{
lean_object* v___x_2630_; lean_object* v___x_2631_; lean_object* v___x_2632_; lean_object* v___x_2633_; lean_object* v___x_2634_; 
v___x_2630_ = lean_array_fget_borrowed(v_xs_2625_, v_k_2626_);
lean_inc_ref(v_f_2624_);
lean_inc(v___x_2630_);
v___x_2631_ = lean_apply_2(v_f_2624_, v___x_2630_, lean_box(0));
v___x_2632_ = lean_unsigned_to_nat(1u);
v___x_2633_ = lean_nat_add(v_k_2626_, v___x_2632_);
lean_dec(v_k_2626_);
v___x_2634_ = lean_array_push(v_acc_2627_, v___x_2631_);
v_k_2626_ = v___x_2633_;
v_acc_2627_ = v___x_2634_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Vector_Basic_0__Vector_mapM_go___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_new_spec__0___redArg___boxed(lean_object* v_n_2636_, lean_object* v_f_2637_, lean_object* v_xs_2638_, lean_object* v_k_2639_, lean_object* v_acc_2640_, lean_object* v___y_2641_){
_start:
{
lean_object* v_res_2642_; 
v_res_2642_ = l___private_Init_Data_Vector_Basic_0__Vector_mapM_go___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_new_spec__0___redArg(v_n_2636_, v_f_2637_, v_xs_2638_, v_k_2639_, v_acc_2640_);
lean_dec_ref(v_xs_2638_);
lean_dec(v_n_2636_);
return v_res_2642_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_new___redArg(lean_object* v_capacity_2646_){
_start:
{
lean_object* v___f_2648_; lean_object* v___x_2649_; lean_object* v___x_2650_; lean_object* v___x_2651_; lean_object* v___x_2652_; lean_object* v___x_2653_; uint8_t v___x_2654_; lean_object* v___x_2655_; lean_object* v___x_2656_; 
v___f_2648_ = ((lean_object*)(l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_new___redArg___closed__0));
lean_inc(v_capacity_2646_);
v___x_2649_ = l_Array_range(v_capacity_2646_);
v___x_2650_ = lean_unsigned_to_nat(0u);
v___x_2651_ = ((lean_object*)(l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_new___redArg___closed__1));
v___x_2652_ = l___private_Init_Data_Vector_Basic_0__Vector_mapM_go___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_new_spec__0___redArg(v_capacity_2646_, v___f_2648_, v___x_2649_, v___x_2650_, v___x_2651_);
lean_dec_ref(v___x_2649_);
v___x_2653_ = lean_obj_once(&l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_new___redArg___closed__0, &l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_new___redArg___closed__0_once, _init_l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_new___redArg___closed__0);
v___x_2654_ = 0;
v___x_2655_ = lean_alloc_ctor(0, 7, 1);
lean_ctor_set(v___x_2655_, 0, v___x_2653_);
lean_ctor_set(v___x_2655_, 1, v___x_2653_);
lean_ctor_set(v___x_2655_, 2, v_capacity_2646_);
lean_ctor_set(v___x_2655_, 3, v___x_2652_);
lean_ctor_set(v___x_2655_, 4, v___x_2650_);
lean_ctor_set(v___x_2655_, 5, v___x_2650_);
lean_ctor_set(v___x_2655_, 6, v___x_2650_);
lean_ctor_set_uint8(v___x_2655_, sizeof(void*)*7, v___x_2654_);
v___x_2656_ = l_Std_Mutex_new___redArg(v___x_2655_);
return v___x_2656_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_new___redArg___boxed(lean_object* v_capacity_2657_, lean_object* v___y_2658_){
_start:
{
lean_object* v_res_2659_; 
v_res_2659_ = l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_new___redArg(v_capacity_2657_);
return v_res_2659_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_new(lean_object* v_00_u03b1_2660_, lean_object* v_capacity_2661_, lean_object* v_hcap_2662_){
_start:
{
lean_object* v___x_2664_; 
v___x_2664_ = l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_new___redArg(v_capacity_2661_);
return v___x_2664_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_new___boxed(lean_object* v_00_u03b1_2665_, lean_object* v_capacity_2666_, lean_object* v_hcap_2667_, lean_object* v___y_2668_){
_start:
{
lean_object* v_res_2669_; 
v_res_2669_ = l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_new(v_00_u03b1_2665_, v_capacity_2666_, v_hcap_2667_);
return v_res_2669_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Vector_Basic_0__Vector_mapM_go___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_new_spec__0(lean_object* v_00_u03b1_2670_, lean_object* v_00_u03b2_2671_, lean_object* v_n_2672_, lean_object* v_f_2673_, lean_object* v_xs_2674_, lean_object* v_k_2675_, lean_object* v_h_2676_, lean_object* v_acc_2677_){
_start:
{
lean_object* v___x_2679_; 
v___x_2679_ = l___private_Init_Data_Vector_Basic_0__Vector_mapM_go___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_new_spec__0___redArg(v_n_2672_, v_f_2673_, v_xs_2674_, v_k_2675_, v_acc_2677_);
return v___x_2679_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Vector_Basic_0__Vector_mapM_go___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_new_spec__0___boxed(lean_object* v_00_u03b1_2680_, lean_object* v_00_u03b2_2681_, lean_object* v_n_2682_, lean_object* v_f_2683_, lean_object* v_xs_2684_, lean_object* v_k_2685_, lean_object* v_h_2686_, lean_object* v_acc_2687_, lean_object* v___y_2688_){
_start:
{
lean_object* v_res_2689_; 
v_res_2689_ = l___private_Init_Data_Vector_Basic_0__Vector_mapM_go___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_new_spec__0(v_00_u03b1_2680_, v_00_u03b2_2681_, v_n_2682_, v_f_2683_, v_xs_2684_, v_k_2685_, v_h_2686_, v_acc_2687_);
lean_dec_ref(v_xs_2684_);
lean_dec(v_n_2682_);
return v_res_2689_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_incMod(lean_object* v_idx_2690_, lean_object* v_cap_2691_){
_start:
{
lean_object* v___x_2692_; lean_object* v___x_2693_; uint8_t v___x_2694_; 
v___x_2692_ = lean_unsigned_to_nat(1u);
v___x_2693_ = lean_nat_add(v_idx_2690_, v___x_2692_);
v___x_2694_ = lean_nat_dec_eq(v___x_2693_, v_cap_2691_);
if (v___x_2694_ == 0)
{
return v___x_2693_;
}
else
{
lean_object* v___x_2695_; 
lean_dec(v___x_2693_);
v___x_2695_ = lean_unsigned_to_nat(0u);
return v___x_2695_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_incMod___boxed(lean_object* v_idx_2696_, lean_object* v_cap_2697_){
_start:
{
lean_object* v_res_2698_; 
v_res_2698_ = l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_incMod(v_idx_2696_, v_cap_2697_);
lean_dec(v_cap_2697_);
lean_dec(v_idx_2696_);
return v_res_2698_;
}
}
LEAN_EXPORT uint8_t l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_trySend_x27___redArg(lean_object* v_v_2699_, lean_object* v___y_2700_){
_start:
{
lean_object* v_st_2703_; lean_object* v___y_2704_; lean_object* v___x_2707_; lean_object* v_producers_2708_; lean_object* v_consumers_2709_; lean_object* v_capacity_2710_; lean_object* v_buf_2711_; lean_object* v_bufCount_2712_; lean_object* v_sendIdx_2713_; lean_object* v_recvIdx_2714_; uint8_t v_closed_2715_; lean_object* v___x_2717_; uint8_t v_isShared_2718_; uint8_t v_isSharedCheck_2741_; 
v___x_2707_ = lean_st_ref_get(v___y_2700_);
v_producers_2708_ = lean_ctor_get(v___x_2707_, 0);
v_consumers_2709_ = lean_ctor_get(v___x_2707_, 1);
v_capacity_2710_ = lean_ctor_get(v___x_2707_, 2);
v_buf_2711_ = lean_ctor_get(v___x_2707_, 3);
v_bufCount_2712_ = lean_ctor_get(v___x_2707_, 4);
v_sendIdx_2713_ = lean_ctor_get(v___x_2707_, 5);
v_recvIdx_2714_ = lean_ctor_get(v___x_2707_, 6);
v_closed_2715_ = lean_ctor_get_uint8(v___x_2707_, sizeof(void*)*7);
v_isSharedCheck_2741_ = !lean_is_exclusive(v___x_2707_);
if (v_isSharedCheck_2741_ == 0)
{
v___x_2717_ = v___x_2707_;
v_isShared_2718_ = v_isSharedCheck_2741_;
goto v_resetjp_2716_;
}
else
{
lean_inc(v_recvIdx_2714_);
lean_inc(v_sendIdx_2713_);
lean_inc(v_bufCount_2712_);
lean_inc(v_buf_2711_);
lean_inc(v_capacity_2710_);
lean_inc(v_consumers_2709_);
lean_inc(v_producers_2708_);
lean_dec(v___x_2707_);
v___x_2717_ = lean_box(0);
v_isShared_2718_ = v_isSharedCheck_2741_;
goto v_resetjp_2716_;
}
v___jp_2702_:
{
lean_object* v___x_2705_; uint8_t v___x_2706_; 
v___x_2705_ = lean_st_ref_swap(v___y_2704_, v_st_2703_);
lean_dec(v___x_2705_);
v___x_2706_ = 1;
return v___x_2706_;
}
v_resetjp_2716_:
{
uint8_t v___x_2719_; 
v___x_2719_ = lean_nat_dec_eq(v_bufCount_2712_, v_capacity_2710_);
if (v___x_2719_ == 0)
{
lean_object* v___x_2720_; lean_object* v___x_2721_; lean_object* v___x_2722_; lean_object* v___x_2723_; lean_object* v___x_2724_; lean_object* v___y_2726_; lean_object* v___x_2737_; uint8_t v___x_2738_; 
v___x_2720_ = lean_array_fget_borrowed(v_buf_2711_, v_sendIdx_2713_);
v___x_2721_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2721_, 0, v_v_2699_);
v___x_2722_ = lean_st_ref_swap(v___x_2720_, v___x_2721_);
lean_dec(v___x_2722_);
v___x_2723_ = lean_unsigned_to_nat(1u);
v___x_2724_ = lean_nat_add(v_bufCount_2712_, v___x_2723_);
lean_dec(v_bufCount_2712_);
v___x_2737_ = lean_nat_add(v_sendIdx_2713_, v___x_2723_);
lean_dec(v_sendIdx_2713_);
v___x_2738_ = lean_nat_dec_eq(v___x_2737_, v_capacity_2710_);
if (v___x_2738_ == 0)
{
v___y_2726_ = v___x_2737_;
goto v___jp_2725_;
}
else
{
lean_object* v___x_2739_; 
lean_dec(v___x_2737_);
v___x_2739_ = lean_unsigned_to_nat(0u);
v___y_2726_ = v___x_2739_;
goto v___jp_2725_;
}
v___jp_2725_:
{
lean_object* v___x_2728_; 
lean_inc(v_recvIdx_2714_);
lean_inc(v___y_2726_);
lean_inc(v___x_2724_);
lean_inc_ref(v_buf_2711_);
lean_inc(v_capacity_2710_);
lean_inc_ref(v_consumers_2709_);
lean_inc_ref(v_producers_2708_);
if (v_isShared_2718_ == 0)
{
lean_ctor_set(v___x_2717_, 5, v___y_2726_);
lean_ctor_set(v___x_2717_, 4, v___x_2724_);
v___x_2728_ = v___x_2717_;
goto v_reusejp_2727_;
}
else
{
lean_object* v_reuseFailAlloc_2736_; 
v_reuseFailAlloc_2736_ = lean_alloc_ctor(0, 7, 1);
lean_ctor_set(v_reuseFailAlloc_2736_, 0, v_producers_2708_);
lean_ctor_set(v_reuseFailAlloc_2736_, 1, v_consumers_2709_);
lean_ctor_set(v_reuseFailAlloc_2736_, 2, v_capacity_2710_);
lean_ctor_set(v_reuseFailAlloc_2736_, 3, v_buf_2711_);
lean_ctor_set(v_reuseFailAlloc_2736_, 4, v___x_2724_);
lean_ctor_set(v_reuseFailAlloc_2736_, 5, v___y_2726_);
lean_ctor_set(v_reuseFailAlloc_2736_, 6, v_recvIdx_2714_);
lean_ctor_set_uint8(v_reuseFailAlloc_2736_, sizeof(void*)*7, v_closed_2715_);
v___x_2728_ = v_reuseFailAlloc_2736_;
goto v_reusejp_2727_;
}
v_reusejp_2727_:
{
lean_object* v___x_2729_; 
v___x_2729_ = l_Std_Queue_dequeue_x3f___redArg(v_consumers_2709_);
if (lean_obj_tag(v___x_2729_) == 1)
{
lean_object* v_val_2730_; lean_object* v_fst_2731_; lean_object* v_snd_2732_; uint8_t v___x_2733_; lean_object* v___x_2734_; lean_object* v___x_2735_; 
lean_dec_ref(v___x_2728_);
v_val_2730_ = lean_ctor_get(v___x_2729_, 0);
lean_inc(v_val_2730_);
lean_dec_ref_known(v___x_2729_, 1);
v_fst_2731_ = lean_ctor_get(v_val_2730_, 0);
lean_inc(v_fst_2731_);
v_snd_2732_ = lean_ctor_get(v_val_2730_, 1);
lean_inc(v_snd_2732_);
lean_dec(v_val_2730_);
v___x_2733_ = 1;
v___x_2734_ = l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_Consumer_resolve___redArg(v_fst_2731_, v___x_2733_);
lean_dec(v_fst_2731_);
v___x_2735_ = lean_alloc_ctor(0, 7, 1);
lean_ctor_set(v___x_2735_, 0, v_producers_2708_);
lean_ctor_set(v___x_2735_, 1, v_snd_2732_);
lean_ctor_set(v___x_2735_, 2, v_capacity_2710_);
lean_ctor_set(v___x_2735_, 3, v_buf_2711_);
lean_ctor_set(v___x_2735_, 4, v___x_2724_);
lean_ctor_set(v___x_2735_, 5, v___y_2726_);
lean_ctor_set(v___x_2735_, 6, v_recvIdx_2714_);
lean_ctor_set_uint8(v___x_2735_, sizeof(void*)*7, v_closed_2715_);
v_st_2703_ = v___x_2735_;
v___y_2704_ = v___y_2700_;
goto v___jp_2702_;
}
else
{
lean_dec(v___x_2729_);
lean_dec(v___y_2726_);
lean_dec(v___x_2724_);
lean_dec(v_recvIdx_2714_);
lean_dec_ref(v_buf_2711_);
lean_dec(v_capacity_2710_);
lean_dec_ref(v_producers_2708_);
v_st_2703_ = v___x_2728_;
v___y_2704_ = v___y_2700_;
goto v___jp_2702_;
}
}
}
}
else
{
uint8_t v___x_2740_; 
lean_del_object(v___x_2717_);
lean_dec(v_recvIdx_2714_);
lean_dec(v_sendIdx_2713_);
lean_dec(v_bufCount_2712_);
lean_dec_ref(v_buf_2711_);
lean_dec(v_capacity_2710_);
lean_dec_ref(v_consumers_2709_);
lean_dec_ref(v_producers_2708_);
lean_dec(v_v_2699_);
v___x_2740_ = 0;
return v___x_2740_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_trySend_x27___redArg___boxed(lean_object* v_v_2742_, lean_object* v___y_2743_, lean_object* v___y_2744_){
_start:
{
uint8_t v_res_2745_; lean_object* v_r_2746_; 
v_res_2745_ = l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_trySend_x27___redArg(v_v_2742_, v___y_2743_);
lean_dec(v___y_2743_);
v_r_2746_ = lean_box(v_res_2745_);
return v_r_2746_;
}
}
LEAN_EXPORT uint8_t l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_trySend_x27(lean_object* v_00_u03b1_2747_, lean_object* v_v_2748_, lean_object* v___y_2749_){
_start:
{
uint8_t v___x_2751_; 
v___x_2751_ = l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_trySend_x27___redArg(v_v_2748_, v___y_2749_);
return v___x_2751_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_trySend_x27___boxed(lean_object* v_00_u03b1_2752_, lean_object* v_v_2753_, lean_object* v___y_2754_, lean_object* v___y_2755_){
_start:
{
uint8_t v_res_2756_; lean_object* v_r_2757_; 
v_res_2756_ = l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_trySend_x27(v_00_u03b1_2752_, v_v_2753_, v___y_2754_);
lean_dec(v___y_2754_);
v_r_2757_ = lean_box(v_res_2756_);
return v_r_2757_;
}
}
LEAN_EXPORT uint8_t l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_trySend___redArg___lam__0(lean_object* v_v_2758_, lean_object* v___y_2759_){
_start:
{
lean_object* v___x_2761_; uint8_t v_closed_2762_; 
v___x_2761_ = lean_st_ref_get(v___y_2759_);
v_closed_2762_ = lean_ctor_get_uint8(v___x_2761_, sizeof(void*)*7);
lean_dec(v___x_2761_);
if (v_closed_2762_ == 0)
{
uint8_t v___x_2763_; 
v___x_2763_ = l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_trySend_x27___redArg(v_v_2758_, v___y_2759_);
return v___x_2763_;
}
else
{
uint8_t v___x_2764_; 
lean_dec(v_v_2758_);
v___x_2764_ = 0;
return v___x_2764_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_trySend___redArg___lam__0___boxed(lean_object* v_v_2765_, lean_object* v___y_2766_, lean_object* v___y_2767_){
_start:
{
uint8_t v_res_2768_; lean_object* v_r_2769_; 
v_res_2768_ = l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_trySend___redArg___lam__0(v_v_2765_, v___y_2766_);
lean_dec(v___y_2766_);
v_r_2769_ = lean_box(v_res_2768_);
return v_r_2769_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_trySend___redArg(lean_object* v_ch_2770_, lean_object* v_v_2771_){
_start:
{
lean_object* v___f_2773_; lean_object* v___x_2774_; 
v___f_2773_ = lean_alloc_closure((void*)(l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_trySend___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_2773_, 0, v_v_2771_);
v___x_2774_ = l_Std_Mutex_atomically___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_trySend_spec__1___redArg(v_ch_2770_, v___f_2773_);
return v___x_2774_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_trySend___redArg___boxed(lean_object* v_ch_2775_, lean_object* v_v_2776_, lean_object* v___y_2777_){
_start:
{
lean_object* v_res_2778_; 
v_res_2778_ = l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_trySend___redArg(v_ch_2775_, v_v_2776_);
return v_res_2778_;
}
}
LEAN_EXPORT uint8_t l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_trySend(lean_object* v_00_u03b1_2779_, lean_object* v_ch_2780_, lean_object* v_v_2781_){
_start:
{
lean_object* v___x_2783_; uint8_t v___x_2784_; 
v___x_2783_ = l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_trySend___redArg(v_ch_2780_, v_v_2781_);
v___x_2784_ = lean_unbox(v___x_2783_);
lean_dec(v___x_2783_);
return v___x_2784_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_trySend___boxed(lean_object* v_00_u03b1_2785_, lean_object* v_ch_2786_, lean_object* v_v_2787_, lean_object* v___y_2788_){
_start:
{
uint8_t v_res_2789_; lean_object* v_r_2790_; 
v_res_2789_ = l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_trySend(v_00_u03b1_2785_, v_ch_2786_, v_v_2787_);
v_r_2790_ = lean_box(v_res_2789_);
return v_r_2790_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_send___redArg___lam__1(lean_object* v_v_2791_, lean_object* v___f_2792_, lean_object* v___y_2793_){
_start:
{
lean_object* v___x_2795_; uint8_t v_closed_2796_; 
v___x_2795_ = lean_st_ref_get(v___y_2793_);
v_closed_2796_ = lean_ctor_get_uint8(v___x_2795_, sizeof(void*)*7);
lean_dec(v___x_2795_);
if (v_closed_2796_ == 0)
{
uint8_t v___x_2797_; 
v___x_2797_ = l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_trySend_x27___redArg(v_v_2791_, v___y_2793_);
if (v___x_2797_ == 0)
{
lean_object* v___x_2798_; lean_object* v___x_2799_; lean_object* v_producers_2800_; lean_object* v_consumers_2801_; lean_object* v_capacity_2802_; lean_object* v_buf_2803_; lean_object* v_bufCount_2804_; lean_object* v_sendIdx_2805_; lean_object* v_recvIdx_2806_; uint8_t v_closed_2807_; lean_object* v___x_2809_; uint8_t v_isShared_2810_; uint8_t v_isSharedCheck_2819_; 
v___x_2798_ = lean_io_promise_new();
v___x_2799_ = lean_st_ref_take(v___y_2793_);
v_producers_2800_ = lean_ctor_get(v___x_2799_, 0);
v_consumers_2801_ = lean_ctor_get(v___x_2799_, 1);
v_capacity_2802_ = lean_ctor_get(v___x_2799_, 2);
v_buf_2803_ = lean_ctor_get(v___x_2799_, 3);
v_bufCount_2804_ = lean_ctor_get(v___x_2799_, 4);
v_sendIdx_2805_ = lean_ctor_get(v___x_2799_, 5);
v_recvIdx_2806_ = lean_ctor_get(v___x_2799_, 6);
v_closed_2807_ = lean_ctor_get_uint8(v___x_2799_, sizeof(void*)*7);
v_isSharedCheck_2819_ = !lean_is_exclusive(v___x_2799_);
if (v_isSharedCheck_2819_ == 0)
{
v___x_2809_ = v___x_2799_;
v_isShared_2810_ = v_isSharedCheck_2819_;
goto v_resetjp_2808_;
}
else
{
lean_inc(v_recvIdx_2806_);
lean_inc(v_sendIdx_2805_);
lean_inc(v_bufCount_2804_);
lean_inc(v_buf_2803_);
lean_inc(v_capacity_2802_);
lean_inc(v_consumers_2801_);
lean_inc(v_producers_2800_);
lean_dec(v___x_2799_);
v___x_2809_ = lean_box(0);
v_isShared_2810_ = v_isSharedCheck_2819_;
goto v_resetjp_2808_;
}
v_resetjp_2808_:
{
lean_object* v___x_2811_; lean_object* v___x_2813_; 
lean_inc(v___x_2798_);
v___x_2811_ = l_Std_Queue_enqueue___redArg(v___x_2798_, v_producers_2800_);
if (v_isShared_2810_ == 0)
{
lean_ctor_set(v___x_2809_, 0, v___x_2811_);
v___x_2813_ = v___x_2809_;
goto v_reusejp_2812_;
}
else
{
lean_object* v_reuseFailAlloc_2818_; 
v_reuseFailAlloc_2818_ = lean_alloc_ctor(0, 7, 1);
lean_ctor_set(v_reuseFailAlloc_2818_, 0, v___x_2811_);
lean_ctor_set(v_reuseFailAlloc_2818_, 1, v_consumers_2801_);
lean_ctor_set(v_reuseFailAlloc_2818_, 2, v_capacity_2802_);
lean_ctor_set(v_reuseFailAlloc_2818_, 3, v_buf_2803_);
lean_ctor_set(v_reuseFailAlloc_2818_, 4, v_bufCount_2804_);
lean_ctor_set(v_reuseFailAlloc_2818_, 5, v_sendIdx_2805_);
lean_ctor_set(v_reuseFailAlloc_2818_, 6, v_recvIdx_2806_);
lean_ctor_set_uint8(v_reuseFailAlloc_2818_, sizeof(void*)*7, v_closed_2807_);
v___x_2813_ = v_reuseFailAlloc_2818_;
goto v_reusejp_2812_;
}
v_reusejp_2812_:
{
lean_object* v___x_2814_; lean_object* v___x_2815_; lean_object* v___x_2816_; lean_object* v___x_2817_; 
v___x_2814_ = lean_st_ref_put(v___y_2793_, v___x_2813_);
v___x_2815_ = lean_io_promise_result_opt(v___x_2798_);
lean_dec(v___x_2798_);
v___x_2816_ = lean_unsigned_to_nat(0u);
v___x_2817_ = lean_io_bind_task(v___x_2815_, v___f_2792_, v___x_2816_, v___x_2797_);
return v___x_2817_;
}
}
}
else
{
lean_object* v___x_2820_; 
lean_dec_ref(v___f_2792_);
v___x_2820_ = lean_obj_once(&l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_send___redArg___closed__3, &l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_send___redArg___closed__3_once, _init_l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_send___redArg___closed__3);
return v___x_2820_;
}
}
else
{
lean_object* v___x_2821_; 
lean_dec_ref(v___f_2792_);
lean_dec(v_v_2791_);
v___x_2821_ = lean_obj_once(&l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_send___redArg___closed__1, &l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_send___redArg___closed__1_once, _init_l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_send___redArg___closed__1);
return v___x_2821_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_send___redArg___lam__1___boxed(lean_object* v_v_2822_, lean_object* v___f_2823_, lean_object* v___y_2824_, lean_object* v___y_2825_){
_start:
{
lean_object* v_res_2826_; 
v_res_2826_ = l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_send___redArg___lam__1(v_v_2822_, v___f_2823_, v___y_2824_);
lean_dec(v___y_2824_);
return v_res_2826_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_send___redArg___lam__0(lean_object* v_ch_2827_, lean_object* v_v_2828_, lean_object* v_res_2829_){
_start:
{
if (lean_obj_tag(v_res_2829_) == 0)
{
lean_dec(v_v_2828_);
lean_dec_ref(v_ch_2827_);
goto v___jp_2831_;
}
else
{
lean_object* v_val_2833_; uint8_t v___x_2834_; 
v_val_2833_ = lean_ctor_get(v_res_2829_, 0);
v___x_2834_ = lean_unbox(v_val_2833_);
if (v___x_2834_ == 0)
{
lean_dec(v_v_2828_);
lean_dec_ref(v_ch_2827_);
goto v___jp_2831_;
}
else
{
lean_object* v___x_2835_; 
v___x_2835_ = l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_send___redArg(v_ch_2827_, v_v_2828_);
return v___x_2835_;
}
}
v___jp_2831_:
{
lean_object* v___x_2832_; 
v___x_2832_ = lean_obj_once(&l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_send___redArg___closed__1, &l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_send___redArg___closed__1_once, _init_l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_send___redArg___closed__1);
return v___x_2832_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_send___redArg___lam__0___boxed(lean_object* v_ch_2836_, lean_object* v_v_2837_, lean_object* v_res_2838_, lean_object* v___y_2839_){
_start:
{
lean_object* v_res_2840_; 
v_res_2840_ = l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_send___redArg___lam__0(v_ch_2836_, v_v_2837_, v_res_2838_);
lean_dec(v_res_2838_);
return v_res_2840_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_send___redArg(lean_object* v_ch_2841_, lean_object* v_v_2842_){
_start:
{
lean_object* v___f_2844_; lean_object* v___f_2845_; lean_object* v___x_2846_; 
lean_inc(v_v_2842_);
lean_inc_ref(v_ch_2841_);
v___f_2844_ = lean_alloc_closure((void*)(l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_send___redArg___lam__0___boxed), 4, 2);
lean_closure_set(v___f_2844_, 0, v_ch_2841_);
lean_closure_set(v___f_2844_, 1, v_v_2842_);
v___f_2845_ = lean_alloc_closure((void*)(l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_send___redArg___lam__1___boxed), 4, 2);
lean_closure_set(v___f_2845_, 0, v_v_2842_);
lean_closure_set(v___f_2845_, 1, v___f_2844_);
v___x_2846_ = l_Std_Mutex_atomically___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_trySend_spec__1___redArg(v_ch_2841_, v___f_2845_);
return v___x_2846_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_send___redArg___boxed(lean_object* v_ch_2847_, lean_object* v_v_2848_, lean_object* v___y_2849_){
_start:
{
lean_object* v_res_2850_; 
v_res_2850_ = l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_send___redArg(v_ch_2847_, v_v_2848_);
return v_res_2850_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_send(lean_object* v_00_u03b1_2851_, lean_object* v_ch_2852_, lean_object* v_v_2853_){
_start:
{
lean_object* v___x_2855_; 
v___x_2855_ = l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_send___redArg(v_ch_2852_, v_v_2853_);
return v___x_2855_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_send___boxed(lean_object* v_00_u03b1_2856_, lean_object* v_ch_2857_, lean_object* v_v_2858_, lean_object* v___y_2859_){
_start:
{
lean_object* v_res_2860_; 
v_res_2860_ = l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_send(v_00_u03b1_2856_, v_ch_2857_, v_v_2858_);
return v_res_2860_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_close_spec__0___redArg(uint8_t v___x_2861_, lean_object* v_as_2862_, size_t v_sz_2863_, size_t v_i_2864_, lean_object* v_b_2865_){
_start:
{
uint8_t v___x_2867_; 
v___x_2867_ = lean_usize_dec_lt(v_i_2864_, v_sz_2863_);
if (v___x_2867_ == 0)
{
lean_object* v___x_2868_; 
v___x_2868_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2868_, 0, v_b_2865_);
return v___x_2868_;
}
else
{
lean_object* v___x_2869_; lean_object* v_a_2870_; lean_object* v___x_2871_; size_t v___x_2872_; size_t v___x_2873_; 
v___x_2869_ = lean_box(0);
v_a_2870_ = lean_array_uget_borrowed(v_as_2862_, v_i_2864_);
v___x_2871_ = l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_Consumer_resolve___redArg(v_a_2870_, v___x_2861_);
v___x_2872_ = ((size_t)1ULL);
v___x_2873_ = lean_usize_add(v_i_2864_, v___x_2872_);
v_i_2864_ = v___x_2873_;
v_b_2865_ = v___x_2869_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_close_spec__0___redArg___boxed(lean_object* v___x_2875_, lean_object* v_as_2876_, lean_object* v_sz_2877_, lean_object* v_i_2878_, lean_object* v_b_2879_, lean_object* v___y_2880_){
_start:
{
uint8_t v___x_3217__boxed_2881_; size_t v_sz_boxed_2882_; size_t v_i_boxed_2883_; lean_object* v_res_2884_; 
v___x_3217__boxed_2881_ = lean_unbox(v___x_2875_);
v_sz_boxed_2882_ = lean_unbox_usize(v_sz_2877_);
lean_dec(v_sz_2877_);
v_i_boxed_2883_ = lean_unbox_usize(v_i_2878_);
lean_dec(v_i_2878_);
v_res_2884_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_close_spec__0___redArg(v___x_3217__boxed_2881_, v_as_2876_, v_sz_boxed_2882_, v_i_boxed_2883_, v_b_2879_);
lean_dec_ref(v_as_2876_);
return v_res_2884_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_close___redArg___lam__0(lean_object* v___y_2885_){
_start:
{
lean_object* v___x_2887_; uint8_t v_closed_2888_; 
v___x_2887_ = lean_st_ref_get(v___y_2885_);
v_closed_2888_ = lean_ctor_get_uint8(v___x_2887_, sizeof(void*)*7);
if (v_closed_2888_ == 0)
{
lean_object* v_producers_2889_; lean_object* v_consumers_2890_; lean_object* v_capacity_2891_; lean_object* v_buf_2892_; lean_object* v_bufCount_2893_; lean_object* v_sendIdx_2894_; lean_object* v_recvIdx_2895_; lean_object* v___x_2897_; uint8_t v_isShared_2898_; uint8_t v_isSharedCheck_2918_; 
v_producers_2889_ = lean_ctor_get(v___x_2887_, 0);
v_consumers_2890_ = lean_ctor_get(v___x_2887_, 1);
v_capacity_2891_ = lean_ctor_get(v___x_2887_, 2);
v_buf_2892_ = lean_ctor_get(v___x_2887_, 3);
v_bufCount_2893_ = lean_ctor_get(v___x_2887_, 4);
v_sendIdx_2894_ = lean_ctor_get(v___x_2887_, 5);
v_recvIdx_2895_ = lean_ctor_get(v___x_2887_, 6);
v_isSharedCheck_2918_ = !lean_is_exclusive(v___x_2887_);
if (v_isSharedCheck_2918_ == 0)
{
v___x_2897_ = v___x_2887_;
v_isShared_2898_ = v_isSharedCheck_2918_;
goto v_resetjp_2896_;
}
else
{
lean_inc(v_recvIdx_2895_);
lean_inc(v_sendIdx_2894_);
lean_inc(v_bufCount_2893_);
lean_inc(v_buf_2892_);
lean_inc(v_capacity_2891_);
lean_inc(v_consumers_2890_);
lean_inc(v_producers_2889_);
lean_dec(v___x_2887_);
v___x_2897_ = lean_box(0);
v_isShared_2898_ = v_isSharedCheck_2918_;
goto v_resetjp_2896_;
}
v_resetjp_2896_:
{
lean_object* v___x_2899_; lean_object* v___x_2900_; size_t v_sz_2901_; size_t v___x_2902_; lean_object* v___x_2903_; 
v___x_2899_ = l_Std_Queue_toArray___redArg(v_consumers_2890_);
v___x_2900_ = lean_box(0);
v_sz_2901_ = lean_array_size(v___x_2899_);
v___x_2902_ = ((size_t)0ULL);
v___x_2903_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_close_spec__0___redArg(v_closed_2888_, v___x_2899_, v_sz_2901_, v___x_2902_, v___x_2900_);
lean_dec_ref(v___x_2899_);
if (lean_obj_tag(v___x_2903_) == 0)
{
lean_object* v___x_2905_; uint8_t v_isShared_2906_; uint8_t v_isSharedCheck_2916_; 
v_isSharedCheck_2916_ = !lean_is_exclusive(v___x_2903_);
if (v_isSharedCheck_2916_ == 0)
{
lean_object* v_unused_2917_; 
v_unused_2917_ = lean_ctor_get(v___x_2903_, 0);
lean_dec(v_unused_2917_);
v___x_2905_ = v___x_2903_;
v_isShared_2906_ = v_isSharedCheck_2916_;
goto v_resetjp_2904_;
}
else
{
lean_dec(v___x_2903_);
v___x_2905_ = lean_box(0);
v_isShared_2906_ = v_isSharedCheck_2916_;
goto v_resetjp_2904_;
}
v_resetjp_2904_:
{
lean_object* v___x_2907_; uint8_t v___x_2908_; lean_object* v___x_2910_; 
v___x_2907_ = lean_obj_once(&l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_new___redArg___closed__0, &l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_new___redArg___closed__0_once, _init_l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_new___redArg___closed__0);
v___x_2908_ = 1;
if (v_isShared_2898_ == 0)
{
lean_ctor_set(v___x_2897_, 1, v___x_2907_);
v___x_2910_ = v___x_2897_;
goto v_reusejp_2909_;
}
else
{
lean_object* v_reuseFailAlloc_2915_; 
v_reuseFailAlloc_2915_ = lean_alloc_ctor(0, 7, 1);
lean_ctor_set(v_reuseFailAlloc_2915_, 0, v_producers_2889_);
lean_ctor_set(v_reuseFailAlloc_2915_, 1, v___x_2907_);
lean_ctor_set(v_reuseFailAlloc_2915_, 2, v_capacity_2891_);
lean_ctor_set(v_reuseFailAlloc_2915_, 3, v_buf_2892_);
lean_ctor_set(v_reuseFailAlloc_2915_, 4, v_bufCount_2893_);
lean_ctor_set(v_reuseFailAlloc_2915_, 5, v_sendIdx_2894_);
lean_ctor_set(v_reuseFailAlloc_2915_, 6, v_recvIdx_2895_);
v___x_2910_ = v_reuseFailAlloc_2915_;
goto v_reusejp_2909_;
}
v_reusejp_2909_:
{
lean_object* v___x_2911_; lean_object* v___x_2913_; 
lean_ctor_set_uint8(v___x_2910_, sizeof(void*)*7, v___x_2908_);
v___x_2911_ = lean_st_ref_swap(v___y_2885_, v___x_2910_);
lean_dec(v___x_2911_);
if (v_isShared_2906_ == 0)
{
lean_ctor_set(v___x_2905_, 0, v___x_2900_);
v___x_2913_ = v___x_2905_;
goto v_reusejp_2912_;
}
else
{
lean_object* v_reuseFailAlloc_2914_; 
v_reuseFailAlloc_2914_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2914_, 0, v___x_2900_);
v___x_2913_ = v_reuseFailAlloc_2914_;
goto v_reusejp_2912_;
}
v_reusejp_2912_:
{
return v___x_2913_;
}
}
}
}
else
{
lean_del_object(v___x_2897_);
lean_dec(v_recvIdx_2895_);
lean_dec(v_sendIdx_2894_);
lean_dec(v_bufCount_2893_);
lean_dec_ref(v_buf_2892_);
lean_dec(v_capacity_2891_);
lean_dec_ref(v_producers_2889_);
return v___x_2903_;
}
}
}
else
{
uint8_t v___x_2919_; lean_object* v___x_2920_; lean_object* v___x_2921_; 
lean_dec(v___x_2887_);
v___x_2919_ = 1;
v___x_2920_ = lean_box(v___x_2919_);
v___x_2921_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2921_, 0, v___x_2920_);
return v___x_2921_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_close___redArg___lam__0___boxed(lean_object* v___y_2922_, lean_object* v___y_2923_){
_start:
{
lean_object* v_res_2924_; 
v_res_2924_ = l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_close___redArg___lam__0(v___y_2922_);
lean_dec(v___y_2922_);
return v_res_2924_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_close___redArg(lean_object* v_ch_2926_){
_start:
{
lean_object* v___f_2928_; lean_object* v___x_2929_; 
v___f_2928_ = ((lean_object*)(l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_close___redArg___closed__0));
v___x_2929_ = l_Std_Mutex_atomically___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_close_spec__1___redArg(v_ch_2926_, v___f_2928_);
return v___x_2929_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_close___redArg___boxed(lean_object* v_ch_2930_, lean_object* v___y_2931_){
_start:
{
lean_object* v_res_2932_; 
v_res_2932_ = l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_close___redArg(v_ch_2930_);
return v_res_2932_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_close(lean_object* v_00_u03b1_2933_, lean_object* v_ch_2934_){
_start:
{
lean_object* v___x_2936_; 
v___x_2936_ = l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_close___redArg(v_ch_2934_);
return v___x_2936_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_close___boxed(lean_object* v_00_u03b1_2937_, lean_object* v_ch_2938_, lean_object* v___y_2939_){
_start:
{
lean_object* v_res_2940_; 
v_res_2940_ = l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_close(v_00_u03b1_2937_, v_ch_2938_);
return v_res_2940_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_close_spec__0(lean_object* v_00_u03b1_2941_, uint8_t v___x_2942_, lean_object* v_as_2943_, size_t v_sz_2944_, size_t v_i_2945_, lean_object* v_b_2946_, lean_object* v___y_2947_){
_start:
{
lean_object* v___x_2949_; 
v___x_2949_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_close_spec__0___redArg(v___x_2942_, v_as_2943_, v_sz_2944_, v_i_2945_, v_b_2946_);
return v___x_2949_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_close_spec__0___boxed(lean_object* v_00_u03b1_2950_, lean_object* v___x_2951_, lean_object* v_as_2952_, lean_object* v_sz_2953_, lean_object* v_i_2954_, lean_object* v_b_2955_, lean_object* v___y_2956_, lean_object* v___y_2957_){
_start:
{
uint8_t v___x_3313__boxed_2958_; size_t v_sz_boxed_2959_; size_t v_i_boxed_2960_; lean_object* v_res_2961_; 
v___x_3313__boxed_2958_ = lean_unbox(v___x_2951_);
v_sz_boxed_2959_ = lean_unbox_usize(v_sz_2953_);
lean_dec(v_sz_2953_);
v_i_boxed_2960_ = lean_unbox_usize(v_i_2954_);
lean_dec(v_i_2954_);
v_res_2961_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_close_spec__0(v_00_u03b1_2950_, v___x_3313__boxed_2958_, v_as_2952_, v_sz_boxed_2959_, v_i_boxed_2960_, v_b_2955_, v___y_2956_);
lean_dec(v___y_2956_);
lean_dec_ref(v_as_2952_);
return v_res_2961_;
}
}
LEAN_EXPORT uint8_t l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_isClosed___redArg___lam__0(lean_object* v___y_2962_){
_start:
{
lean_object* v___x_2964_; uint8_t v_closed_2965_; 
v___x_2964_ = lean_st_ref_get(v___y_2962_);
v_closed_2965_ = lean_ctor_get_uint8(v___x_2964_, sizeof(void*)*7);
lean_dec(v___x_2964_);
return v_closed_2965_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_isClosed___redArg___lam__0___boxed(lean_object* v___y_2966_, lean_object* v___y_2967_){
_start:
{
uint8_t v_res_2968_; lean_object* v_r_2969_; 
v_res_2968_ = l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_isClosed___redArg___lam__0(v___y_2966_);
lean_dec(v___y_2966_);
v_r_2969_ = lean_box(v_res_2968_);
return v_r_2969_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_isClosed___redArg(lean_object* v_ch_2971_){
_start:
{
lean_object* v___f_2973_; lean_object* v___x_2974_; 
v___f_2973_ = ((lean_object*)(l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_isClosed___redArg___closed__0));
v___x_2974_ = l_Std_Mutex_atomically___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_trySend_spec__1___redArg(v_ch_2971_, v___f_2973_);
return v___x_2974_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_isClosed___redArg___boxed(lean_object* v_ch_2975_, lean_object* v___y_2976_){
_start:
{
lean_object* v_res_2977_; 
v_res_2977_ = l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_isClosed___redArg(v_ch_2975_);
return v_res_2977_;
}
}
LEAN_EXPORT uint8_t l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_isClosed(lean_object* v_00_u03b1_2978_, lean_object* v_ch_2979_){
_start:
{
lean_object* v___x_2981_; uint8_t v___x_2982_; 
v___x_2981_ = l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_isClosed___redArg(v_ch_2979_);
v___x_2982_ = lean_unbox(v___x_2981_);
lean_dec(v___x_2981_);
return v___x_2982_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_isClosed___boxed(lean_object* v_00_u03b1_2983_, lean_object* v_ch_2984_, lean_object* v___y_2985_){
_start:
{
uint8_t v_res_2986_; lean_object* v_r_2987_; 
v_res_2986_ = l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_isClosed(v_00_u03b1_2983_, v_ch_2984_);
v_r_2987_ = lean_box(v_res_2986_);
return v_r_2987_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_tryRecv_x27___redArg___lam__0(lean_object* v_toApplicative_2988_, lean_object* v_a_2989_, lean_object* v_a_2990_){
_start:
{
lean_object* v_toPure_2991_; lean_object* v___x_2992_; 
v_toPure_2991_ = lean_ctor_get(v_toApplicative_2988_, 1);
lean_inc(v_toPure_2991_);
lean_dec_ref(v_toApplicative_2988_);
v___x_2992_ = lean_apply_2(v_toPure_2991_, lean_box(0), v_a_2989_);
return v___x_2992_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_tryRecv_x27___redArg___lam__1(lean_object* v_inst_2993_, lean_object* v_toBind_2994_, lean_object* v___f_2995_, lean_object* v_____r_2996_, lean_object* v_st_2997_, lean_object* v___y_2998_){
_start:
{
lean_object* v___x_2999_; lean_object* v___x_3000_; lean_object* v___x_3001_; 
lean_inc(v___y_2998_);
v___x_2999_ = lean_alloc_closure((void*)(l_ST_Prim_Ref_set___boxed), 5, 4);
lean_closure_set(v___x_2999_, 0, lean_box(0));
lean_closure_set(v___x_2999_, 1, lean_box(0));
lean_closure_set(v___x_2999_, 2, v___y_2998_);
lean_closure_set(v___x_2999_, 3, v_st_2997_);
v___x_3000_ = lean_apply_2(v_inst_2993_, lean_box(0), v___x_2999_);
v___x_3001_ = lean_apply_4(v_toBind_2994_, lean_box(0), lean_box(0), v___x_3000_, v___f_2995_);
return v___x_3001_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_tryRecv_x27___redArg___lam__1___boxed(lean_object* v_inst_3002_, lean_object* v_toBind_3003_, lean_object* v___f_3004_, lean_object* v_____r_3005_, lean_object* v_st_3006_, lean_object* v___y_3007_){
_start:
{
lean_object* v_res_3008_; 
v_res_3008_ = l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_tryRecv_x27___redArg___lam__1(v_inst_3002_, v_toBind_3003_, v___f_3004_, v_____r_3005_, v_st_3006_, v___y_3007_);
lean_dec(v___y_3007_);
return v_res_3008_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_tryRecv_x27___redArg___lam__2(lean_object* v_snd_3009_, lean_object* v_consumers_3010_, lean_object* v_capacity_3011_, lean_object* v_buf_3012_, lean_object* v___x_3013_, lean_object* v_sendIdx_3014_, lean_object* v___y_3015_, uint8_t v_closed_3016_, lean_object* v___f_3017_, lean_object* v___y_3018_, lean_object* v_a_3019_){
_start:
{
lean_object* v___x_3020_; lean_object* v___x_3021_; lean_object* v___x_3022_; 
v___x_3020_ = lean_alloc_ctor(0, 7, 1);
lean_ctor_set(v___x_3020_, 0, v_snd_3009_);
lean_ctor_set(v___x_3020_, 1, v_consumers_3010_);
lean_ctor_set(v___x_3020_, 2, v_capacity_3011_);
lean_ctor_set(v___x_3020_, 3, v_buf_3012_);
lean_ctor_set(v___x_3020_, 4, v___x_3013_);
lean_ctor_set(v___x_3020_, 5, v_sendIdx_3014_);
lean_ctor_set(v___x_3020_, 6, v___y_3015_);
lean_ctor_set_uint8(v___x_3020_, sizeof(void*)*7, v_closed_3016_);
v___x_3021_ = lean_box(0);
lean_inc(v___y_3018_);
v___x_3022_ = lean_apply_3(v___f_3017_, v___x_3021_, v___x_3020_, v___y_3018_);
return v___x_3022_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_tryRecv_x27___redArg___lam__2___boxed(lean_object* v_snd_3023_, lean_object* v_consumers_3024_, lean_object* v_capacity_3025_, lean_object* v_buf_3026_, lean_object* v___x_3027_, lean_object* v_sendIdx_3028_, lean_object* v___y_3029_, lean_object* v_closed_3030_, lean_object* v___f_3031_, lean_object* v___y_3032_, lean_object* v_a_3033_){
_start:
{
uint8_t v_closed_boxed_3034_; lean_object* v_res_3035_; 
v_closed_boxed_3034_ = lean_unbox(v_closed_3030_);
v_res_3035_ = l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_tryRecv_x27___redArg___lam__2(v_snd_3023_, v_consumers_3024_, v_capacity_3025_, v_buf_3026_, v___x_3027_, v_sendIdx_3028_, v___y_3029_, v_closed_boxed_3034_, v___f_3031_, v___y_3032_, v_a_3033_);
lean_dec(v___y_3032_);
return v_res_3035_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_tryRecv_x27___redArg___lam__3(lean_object* v_toApplicative_3036_, lean_object* v_inst_3037_, lean_object* v_toBind_3038_, lean_object* v_bufCount_3039_, lean_object* v_producers_3040_, lean_object* v_consumers_3041_, lean_object* v_capacity_3042_, lean_object* v_buf_3043_, lean_object* v_sendIdx_3044_, uint8_t v_closed_3045_, lean_object* v___y_3046_, uint8_t v___x_3047_, lean_object* v_inst_3048_, lean_object* v_recvIdx_3049_, lean_object* v___x_3050_, lean_object* v_a_3051_){
_start:
{
lean_object* v___f_3052_; lean_object* v___f_3053_; lean_object* v___y_3055_; lean_object* v___x_3071_; lean_object* v___x_3072_; uint8_t v___x_3073_; 
v___f_3052_ = lean_alloc_closure((void*)(l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_tryRecv_x27___redArg___lam__0), 3, 2);
lean_closure_set(v___f_3052_, 0, v_toApplicative_3036_);
lean_closure_set(v___f_3052_, 1, v_a_3051_);
lean_inc_ref(v___f_3052_);
lean_inc(v_toBind_3038_);
lean_inc(v_inst_3037_);
v___f_3053_ = lean_alloc_closure((void*)(l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_tryRecv_x27___redArg___lam__1___boxed), 6, 3);
lean_closure_set(v___f_3053_, 0, v_inst_3037_);
lean_closure_set(v___f_3053_, 1, v_toBind_3038_);
lean_closure_set(v___f_3053_, 2, v___f_3052_);
v___x_3071_ = lean_unsigned_to_nat(1u);
v___x_3072_ = lean_nat_add(v_recvIdx_3049_, v___x_3071_);
v___x_3073_ = lean_nat_dec_eq(v___x_3072_, v_capacity_3042_);
if (v___x_3073_ == 0)
{
lean_dec(v___x_3050_);
v___y_3055_ = v___x_3072_;
goto v___jp_3054_;
}
else
{
lean_dec(v___x_3072_);
v___y_3055_ = v___x_3050_;
goto v___jp_3054_;
}
v___jp_3054_:
{
lean_object* v___x_3056_; lean_object* v___x_3057_; lean_object* v___x_3058_; lean_object* v___x_3059_; 
v___x_3056_ = lean_unsigned_to_nat(1u);
v___x_3057_ = lean_nat_sub(v_bufCount_3039_, v___x_3056_);
lean_inc(v___y_3055_);
lean_inc(v_sendIdx_3044_);
lean_inc(v___x_3057_);
lean_inc_ref(v_buf_3043_);
lean_inc(v_capacity_3042_);
lean_inc_ref(v_consumers_3041_);
lean_inc_ref(v_producers_3040_);
v___x_3058_ = lean_alloc_ctor(0, 7, 1);
lean_ctor_set(v___x_3058_, 0, v_producers_3040_);
lean_ctor_set(v___x_3058_, 1, v_consumers_3041_);
lean_ctor_set(v___x_3058_, 2, v_capacity_3042_);
lean_ctor_set(v___x_3058_, 3, v_buf_3043_);
lean_ctor_set(v___x_3058_, 4, v___x_3057_);
lean_ctor_set(v___x_3058_, 5, v_sendIdx_3044_);
lean_ctor_set(v___x_3058_, 6, v___y_3055_);
lean_ctor_set_uint8(v___x_3058_, sizeof(void*)*7, v_closed_3045_);
v___x_3059_ = l_Std_Queue_dequeue_x3f___redArg(v_producers_3040_);
if (lean_obj_tag(v___x_3059_) == 1)
{
lean_object* v_val_3060_; lean_object* v_fst_3061_; lean_object* v_snd_3062_; lean_object* v___x_3063_; lean_object* v___f_3064_; lean_object* v___x_3065_; lean_object* v___x_3066_; lean_object* v___x_3067_; lean_object* v___x_3068_; 
lean_dec_ref_known(v___x_3058_, 7);
lean_dec_ref(v___f_3052_);
lean_dec(v_inst_3037_);
v_val_3060_ = lean_ctor_get(v___x_3059_, 0);
lean_inc(v_val_3060_);
lean_dec_ref_known(v___x_3059_, 1);
v_fst_3061_ = lean_ctor_get(v_val_3060_, 0);
lean_inc(v_fst_3061_);
v_snd_3062_ = lean_ctor_get(v_val_3060_, 1);
lean_inc(v_snd_3062_);
lean_dec(v_val_3060_);
v___x_3063_ = lean_box(v_closed_3045_);
lean_inc(v___y_3046_);
v___f_3064_ = lean_alloc_closure((void*)(l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_tryRecv_x27___redArg___lam__2___boxed), 11, 10);
lean_closure_set(v___f_3064_, 0, v_snd_3062_);
lean_closure_set(v___f_3064_, 1, v_consumers_3041_);
lean_closure_set(v___f_3064_, 2, v_capacity_3042_);
lean_closure_set(v___f_3064_, 3, v_buf_3043_);
lean_closure_set(v___f_3064_, 4, v___x_3057_);
lean_closure_set(v___f_3064_, 5, v_sendIdx_3044_);
lean_closure_set(v___f_3064_, 6, v___y_3055_);
lean_closure_set(v___f_3064_, 7, v___x_3063_);
lean_closure_set(v___f_3064_, 8, v___f_3053_);
lean_closure_set(v___f_3064_, 9, v___y_3046_);
v___x_3065_ = lean_box(v___x_3047_);
v___x_3066_ = lean_alloc_closure((void*)(l_IO_Promise_resolve___boxed), 4, 3);
lean_closure_set(v___x_3066_, 0, lean_box(0));
lean_closure_set(v___x_3066_, 1, v___x_3065_);
lean_closure_set(v___x_3066_, 2, v_fst_3061_);
v___x_3067_ = lean_apply_2(v_inst_3048_, lean_box(0), v___x_3066_);
v___x_3068_ = lean_apply_4(v_toBind_3038_, lean_box(0), lean_box(0), v___x_3067_, v___f_3064_);
return v___x_3068_;
}
else
{
lean_object* v___x_3069_; lean_object* v___x_3070_; 
lean_dec(v___x_3059_);
lean_dec(v___x_3057_);
lean_dec(v___y_3055_);
lean_dec_ref(v___f_3053_);
lean_dec(v_inst_3048_);
lean_dec(v_sendIdx_3044_);
lean_dec_ref(v_buf_3043_);
lean_dec(v_capacity_3042_);
lean_dec_ref(v_consumers_3041_);
v___x_3069_ = lean_box(0);
v___x_3070_ = l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_tryRecv_x27___redArg___lam__1(v_inst_3037_, v_toBind_3038_, v___f_3052_, v___x_3069_, v___x_3058_, v___y_3046_);
return v___x_3070_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_tryRecv_x27___redArg___lam__3___boxed(lean_object* v_toApplicative_3074_, lean_object* v_inst_3075_, lean_object* v_toBind_3076_, lean_object* v_bufCount_3077_, lean_object* v_producers_3078_, lean_object* v_consumers_3079_, lean_object* v_capacity_3080_, lean_object* v_buf_3081_, lean_object* v_sendIdx_3082_, lean_object* v_closed_3083_, lean_object* v___y_3084_, lean_object* v___x_3085_, lean_object* v_inst_3086_, lean_object* v_recvIdx_3087_, lean_object* v___x_3088_, lean_object* v_a_3089_){
_start:
{
uint8_t v_closed_boxed_3090_; uint8_t v___x_694__boxed_3091_; lean_object* v_res_3092_; 
v_closed_boxed_3090_ = lean_unbox(v_closed_3083_);
v___x_694__boxed_3091_ = lean_unbox(v___x_3085_);
v_res_3092_ = l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_tryRecv_x27___redArg___lam__3(v_toApplicative_3074_, v_inst_3075_, v_toBind_3076_, v_bufCount_3077_, v_producers_3078_, v_consumers_3079_, v_capacity_3080_, v_buf_3081_, v_sendIdx_3082_, v_closed_boxed_3090_, v___y_3084_, v___x_694__boxed_3091_, v_inst_3086_, v_recvIdx_3087_, v___x_3088_, v_a_3089_);
lean_dec(v_recvIdx_3087_);
lean_dec(v___y_3084_);
lean_dec(v_bufCount_3077_);
return v_res_3092_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_tryRecv_x27___redArg___lam__4(lean_object* v_toApplicative_3093_, lean_object* v_inst_3094_, lean_object* v_toBind_3095_, lean_object* v___y_3096_, lean_object* v_inst_3097_, lean_object* v_a_3098_){
_start:
{
lean_object* v_producers_3099_; lean_object* v_consumers_3100_; lean_object* v_capacity_3101_; lean_object* v_buf_3102_; lean_object* v_bufCount_3103_; lean_object* v_sendIdx_3104_; lean_object* v_recvIdx_3105_; uint8_t v_closed_3106_; lean_object* v___x_3107_; uint8_t v___x_3108_; 
v_producers_3099_ = lean_ctor_get(v_a_3098_, 0);
lean_inc_ref(v_producers_3099_);
v_consumers_3100_ = lean_ctor_get(v_a_3098_, 1);
lean_inc_ref(v_consumers_3100_);
v_capacity_3101_ = lean_ctor_get(v_a_3098_, 2);
lean_inc(v_capacity_3101_);
v_buf_3102_ = lean_ctor_get(v_a_3098_, 3);
lean_inc_ref(v_buf_3102_);
v_bufCount_3103_ = lean_ctor_get(v_a_3098_, 4);
lean_inc(v_bufCount_3103_);
v_sendIdx_3104_ = lean_ctor_get(v_a_3098_, 5);
lean_inc(v_sendIdx_3104_);
v_recvIdx_3105_ = lean_ctor_get(v_a_3098_, 6);
lean_inc(v_recvIdx_3105_);
v_closed_3106_ = lean_ctor_get_uint8(v_a_3098_, sizeof(void*)*7);
lean_dec_ref(v_a_3098_);
v___x_3107_ = lean_unsigned_to_nat(0u);
v___x_3108_ = lean_nat_dec_eq(v_bufCount_3103_, v___x_3107_);
if (v___x_3108_ == 0)
{
uint8_t v___x_3109_; lean_object* v___x_3110_; lean_object* v___x_3111_; lean_object* v___f_3112_; lean_object* v___x_3113_; lean_object* v___x_3114_; lean_object* v___x_3115_; lean_object* v___x_3116_; lean_object* v___x_3117_; 
v___x_3109_ = 1;
v___x_3110_ = lean_box(v_closed_3106_);
v___x_3111_ = lean_box(v___x_3109_);
lean_inc(v_recvIdx_3105_);
lean_inc(v___y_3096_);
lean_inc_ref(v_buf_3102_);
lean_inc(v_toBind_3095_);
lean_inc(v_inst_3094_);
v___f_3112_ = lean_alloc_closure((void*)(l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_tryRecv_x27___redArg___lam__3___boxed), 16, 15);
lean_closure_set(v___f_3112_, 0, v_toApplicative_3093_);
lean_closure_set(v___f_3112_, 1, v_inst_3094_);
lean_closure_set(v___f_3112_, 2, v_toBind_3095_);
lean_closure_set(v___f_3112_, 3, v_bufCount_3103_);
lean_closure_set(v___f_3112_, 4, v_producers_3099_);
lean_closure_set(v___f_3112_, 5, v_consumers_3100_);
lean_closure_set(v___f_3112_, 6, v_capacity_3101_);
lean_closure_set(v___f_3112_, 7, v_buf_3102_);
lean_closure_set(v___f_3112_, 8, v_sendIdx_3104_);
lean_closure_set(v___f_3112_, 9, v___x_3110_);
lean_closure_set(v___f_3112_, 10, v___y_3096_);
lean_closure_set(v___f_3112_, 11, v___x_3111_);
lean_closure_set(v___f_3112_, 12, v_inst_3097_);
lean_closure_set(v___f_3112_, 13, v_recvIdx_3105_);
lean_closure_set(v___f_3112_, 14, v___x_3107_);
v___x_3113_ = lean_array_fget(v_buf_3102_, v_recvIdx_3105_);
lean_dec(v_recvIdx_3105_);
lean_dec_ref(v_buf_3102_);
v___x_3114_ = lean_box(0);
v___x_3115_ = lean_alloc_closure((void*)(l_ST_Prim_Ref_swap___boxed), 5, 4);
lean_closure_set(v___x_3115_, 0, lean_box(0));
lean_closure_set(v___x_3115_, 1, lean_box(0));
lean_closure_set(v___x_3115_, 2, v___x_3113_);
lean_closure_set(v___x_3115_, 3, v___x_3114_);
v___x_3116_ = lean_apply_2(v_inst_3094_, lean_box(0), v___x_3115_);
v___x_3117_ = lean_apply_4(v_toBind_3095_, lean_box(0), lean_box(0), v___x_3116_, v___f_3112_);
return v___x_3117_;
}
else
{
lean_object* v_toPure_3118_; lean_object* v___x_3119_; lean_object* v___x_3120_; 
lean_dec(v_recvIdx_3105_);
lean_dec(v_sendIdx_3104_);
lean_dec(v_bufCount_3103_);
lean_dec_ref(v_buf_3102_);
lean_dec(v_capacity_3101_);
lean_dec_ref(v_consumers_3100_);
lean_dec_ref(v_producers_3099_);
lean_dec(v_inst_3097_);
lean_dec(v_toBind_3095_);
lean_dec(v_inst_3094_);
v_toPure_3118_ = lean_ctor_get(v_toApplicative_3093_, 1);
lean_inc(v_toPure_3118_);
lean_dec_ref(v_toApplicative_3093_);
v___x_3119_ = lean_box(0);
v___x_3120_ = lean_apply_2(v_toPure_3118_, lean_box(0), v___x_3119_);
return v___x_3120_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_tryRecv_x27___redArg___lam__4___boxed(lean_object* v_toApplicative_3121_, lean_object* v_inst_3122_, lean_object* v_toBind_3123_, lean_object* v___y_3124_, lean_object* v_inst_3125_, lean_object* v_a_3126_){
_start:
{
lean_object* v_res_3127_; 
v_res_3127_ = l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_tryRecv_x27___redArg___lam__4(v_toApplicative_3121_, v_inst_3122_, v_toBind_3123_, v___y_3124_, v_inst_3125_, v_a_3126_);
lean_dec(v___y_3124_);
return v_res_3127_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_tryRecv_x27___redArg(lean_object* v_inst_3128_, lean_object* v_inst_3129_, lean_object* v_inst_3130_, lean_object* v___y_3131_){
_start:
{
lean_object* v_toApplicative_3132_; lean_object* v_toBind_3133_; lean_object* v___f_3134_; lean_object* v___x_3135_; lean_object* v___x_3136_; lean_object* v___x_3137_; 
v_toApplicative_3132_ = lean_ctor_get(v_inst_3128_, 0);
lean_inc_ref(v_toApplicative_3132_);
v_toBind_3133_ = lean_ctor_get(v_inst_3128_, 1);
lean_inc_n(v_toBind_3133_, 2);
lean_dec_ref(v_inst_3128_);
lean_inc_n(v___y_3131_, 2);
lean_inc(v_inst_3129_);
v___f_3134_ = lean_alloc_closure((void*)(l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_tryRecv_x27___redArg___lam__4___boxed), 6, 5);
lean_closure_set(v___f_3134_, 0, v_toApplicative_3132_);
lean_closure_set(v___f_3134_, 1, v_inst_3129_);
lean_closure_set(v___f_3134_, 2, v_toBind_3133_);
lean_closure_set(v___f_3134_, 3, v___y_3131_);
lean_closure_set(v___f_3134_, 4, v_inst_3130_);
v___x_3135_ = lean_alloc_closure((void*)(l_ST_Prim_Ref_get___boxed), 4, 3);
lean_closure_set(v___x_3135_, 0, lean_box(0));
lean_closure_set(v___x_3135_, 1, lean_box(0));
lean_closure_set(v___x_3135_, 2, v___y_3131_);
v___x_3136_ = lean_apply_2(v_inst_3129_, lean_box(0), v___x_3135_);
v___x_3137_ = lean_apply_4(v_toBind_3133_, lean_box(0), lean_box(0), v___x_3136_, v___f_3134_);
return v___x_3137_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_tryRecv_x27___redArg___boxed(lean_object* v_inst_3138_, lean_object* v_inst_3139_, lean_object* v_inst_3140_, lean_object* v___y_3141_){
_start:
{
lean_object* v_res_3142_; 
v_res_3142_ = l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_tryRecv_x27___redArg(v_inst_3138_, v_inst_3139_, v_inst_3140_, v___y_3141_);
lean_dec(v___y_3141_);
return v_res_3142_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_tryRecv_x27(lean_object* v_m_3143_, lean_object* v_00_u03b1_3144_, lean_object* v_inst_3145_, lean_object* v_inst_3146_, lean_object* v_inst_3147_, lean_object* v___y_3148_){
_start:
{
lean_object* v___x_3149_; 
v___x_3149_ = l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_tryRecv_x27___redArg(v_inst_3145_, v_inst_3146_, v_inst_3147_, v___y_3148_);
return v___x_3149_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_tryRecv_x27___boxed(lean_object* v_m_3150_, lean_object* v_00_u03b1_3151_, lean_object* v_inst_3152_, lean_object* v_inst_3153_, lean_object* v_inst_3154_, lean_object* v___y_3155_){
_start:
{
lean_object* v_res_3156_; 
v_res_3156_ = l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_tryRecv_x27(v_m_3150_, v_00_u03b1_3151_, v_inst_3152_, v_inst_3153_, v_inst_3154_, v___y_3155_);
lean_dec(v___y_3155_);
return v_res_3156_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_tryRecv_x27___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_tryRecv_spec__0___redArg(lean_object* v___y_3157_){
_start:
{
lean_object* v___x_3159_; lean_object* v_producers_3160_; lean_object* v_consumers_3161_; lean_object* v_capacity_3162_; lean_object* v_buf_3163_; lean_object* v_bufCount_3164_; lean_object* v_sendIdx_3165_; lean_object* v_recvIdx_3166_; uint8_t v_closed_3167_; lean_object* v___x_3169_; uint8_t v_isShared_3170_; uint8_t v_isSharedCheck_3199_; 
v___x_3159_ = lean_st_ref_get(v___y_3157_);
v_producers_3160_ = lean_ctor_get(v___x_3159_, 0);
v_consumers_3161_ = lean_ctor_get(v___x_3159_, 1);
v_capacity_3162_ = lean_ctor_get(v___x_3159_, 2);
v_buf_3163_ = lean_ctor_get(v___x_3159_, 3);
v_bufCount_3164_ = lean_ctor_get(v___x_3159_, 4);
v_sendIdx_3165_ = lean_ctor_get(v___x_3159_, 5);
v_recvIdx_3166_ = lean_ctor_get(v___x_3159_, 6);
v_closed_3167_ = lean_ctor_get_uint8(v___x_3159_, sizeof(void*)*7);
v_isSharedCheck_3199_ = !lean_is_exclusive(v___x_3159_);
if (v_isSharedCheck_3199_ == 0)
{
v___x_3169_ = v___x_3159_;
v_isShared_3170_ = v_isSharedCheck_3199_;
goto v_resetjp_3168_;
}
else
{
lean_inc(v_recvIdx_3166_);
lean_inc(v_sendIdx_3165_);
lean_inc(v_bufCount_3164_);
lean_inc(v_buf_3163_);
lean_inc(v_capacity_3162_);
lean_inc(v_consumers_3161_);
lean_inc(v_producers_3160_);
lean_dec(v___x_3159_);
v___x_3169_ = lean_box(0);
v_isShared_3170_ = v_isSharedCheck_3199_;
goto v_resetjp_3168_;
}
v_resetjp_3168_:
{
lean_object* v___x_3171_; uint8_t v___x_3172_; 
v___x_3171_ = lean_unsigned_to_nat(0u);
v___x_3172_ = lean_nat_dec_eq(v_bufCount_3164_, v___x_3171_);
if (v___x_3172_ == 0)
{
uint8_t v___x_3173_; lean_object* v___x_3174_; lean_object* v___x_3175_; lean_object* v___x_3176_; lean_object* v_st_3178_; lean_object* v___y_3179_; lean_object* v___y_3182_; lean_object* v___x_3195_; lean_object* v___x_3196_; uint8_t v___x_3197_; 
v___x_3173_ = 1;
v___x_3174_ = lean_array_fget_borrowed(v_buf_3163_, v_recvIdx_3166_);
v___x_3175_ = lean_box(0);
v___x_3176_ = lean_st_ref_swap(v___x_3174_, v___x_3175_);
v___x_3195_ = lean_unsigned_to_nat(1u);
v___x_3196_ = lean_nat_add(v_recvIdx_3166_, v___x_3195_);
lean_dec(v_recvIdx_3166_);
v___x_3197_ = lean_nat_dec_eq(v___x_3196_, v_capacity_3162_);
if (v___x_3197_ == 0)
{
v___y_3182_ = v___x_3196_;
goto v___jp_3181_;
}
else
{
lean_dec(v___x_3196_);
v___y_3182_ = v___x_3171_;
goto v___jp_3181_;
}
v___jp_3177_:
{
lean_object* v___x_3180_; 
v___x_3180_ = lean_st_ref_swap(v___y_3179_, v_st_3178_);
lean_dec(v___x_3180_);
return v___x_3176_;
}
v___jp_3181_:
{
lean_object* v___x_3183_; lean_object* v___x_3184_; lean_object* v___x_3186_; 
v___x_3183_ = lean_unsigned_to_nat(1u);
v___x_3184_ = lean_nat_sub(v_bufCount_3164_, v___x_3183_);
lean_dec(v_bufCount_3164_);
lean_inc(v___y_3182_);
lean_inc(v_sendIdx_3165_);
lean_inc(v___x_3184_);
lean_inc_ref(v_buf_3163_);
lean_inc(v_capacity_3162_);
lean_inc_ref(v_consumers_3161_);
lean_inc_ref(v_producers_3160_);
if (v_isShared_3170_ == 0)
{
lean_ctor_set(v___x_3169_, 6, v___y_3182_);
lean_ctor_set(v___x_3169_, 4, v___x_3184_);
v___x_3186_ = v___x_3169_;
goto v_reusejp_3185_;
}
else
{
lean_object* v_reuseFailAlloc_3194_; 
v_reuseFailAlloc_3194_ = lean_alloc_ctor(0, 7, 1);
lean_ctor_set(v_reuseFailAlloc_3194_, 0, v_producers_3160_);
lean_ctor_set(v_reuseFailAlloc_3194_, 1, v_consumers_3161_);
lean_ctor_set(v_reuseFailAlloc_3194_, 2, v_capacity_3162_);
lean_ctor_set(v_reuseFailAlloc_3194_, 3, v_buf_3163_);
lean_ctor_set(v_reuseFailAlloc_3194_, 4, v___x_3184_);
lean_ctor_set(v_reuseFailAlloc_3194_, 5, v_sendIdx_3165_);
lean_ctor_set(v_reuseFailAlloc_3194_, 6, v___y_3182_);
lean_ctor_set_uint8(v_reuseFailAlloc_3194_, sizeof(void*)*7, v_closed_3167_);
v___x_3186_ = v_reuseFailAlloc_3194_;
goto v_reusejp_3185_;
}
v_reusejp_3185_:
{
lean_object* v___x_3187_; 
v___x_3187_ = l_Std_Queue_dequeue_x3f___redArg(v_producers_3160_);
if (lean_obj_tag(v___x_3187_) == 1)
{
lean_object* v_val_3188_; lean_object* v_fst_3189_; lean_object* v_snd_3190_; lean_object* v___x_3191_; lean_object* v___x_3192_; lean_object* v___x_3193_; 
lean_dec_ref(v___x_3186_);
v_val_3188_ = lean_ctor_get(v___x_3187_, 0);
lean_inc(v_val_3188_);
lean_dec_ref_known(v___x_3187_, 1);
v_fst_3189_ = lean_ctor_get(v_val_3188_, 0);
lean_inc(v_fst_3189_);
v_snd_3190_ = lean_ctor_get(v_val_3188_, 1);
lean_inc(v_snd_3190_);
lean_dec(v_val_3188_);
v___x_3191_ = lean_box(v___x_3173_);
v___x_3192_ = lean_io_promise_resolve(v___x_3191_, v_fst_3189_);
lean_dec(v_fst_3189_);
v___x_3193_ = lean_alloc_ctor(0, 7, 1);
lean_ctor_set(v___x_3193_, 0, v_snd_3190_);
lean_ctor_set(v___x_3193_, 1, v_consumers_3161_);
lean_ctor_set(v___x_3193_, 2, v_capacity_3162_);
lean_ctor_set(v___x_3193_, 3, v_buf_3163_);
lean_ctor_set(v___x_3193_, 4, v___x_3184_);
lean_ctor_set(v___x_3193_, 5, v_sendIdx_3165_);
lean_ctor_set(v___x_3193_, 6, v___y_3182_);
lean_ctor_set_uint8(v___x_3193_, sizeof(void*)*7, v_closed_3167_);
v_st_3178_ = v___x_3193_;
v___y_3179_ = v___y_3157_;
goto v___jp_3177_;
}
else
{
lean_dec(v___x_3187_);
lean_dec(v___x_3184_);
lean_dec(v___y_3182_);
lean_dec(v_sendIdx_3165_);
lean_dec_ref(v_buf_3163_);
lean_dec(v_capacity_3162_);
lean_dec_ref(v_consumers_3161_);
v_st_3178_ = v___x_3186_;
v___y_3179_ = v___y_3157_;
goto v___jp_3177_;
}
}
}
}
else
{
lean_object* v___x_3198_; 
lean_del_object(v___x_3169_);
lean_dec(v_recvIdx_3166_);
lean_dec(v_sendIdx_3165_);
lean_dec(v_bufCount_3164_);
lean_dec_ref(v_buf_3163_);
lean_dec(v_capacity_3162_);
lean_dec_ref(v_consumers_3161_);
lean_dec_ref(v_producers_3160_);
v___x_3198_ = lean_box(0);
return v___x_3198_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_tryRecv_x27___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_tryRecv_spec__0___redArg___boxed(lean_object* v___y_3200_, lean_object* v___y_3201_){
_start:
{
lean_object* v_res_3202_; 
v_res_3202_ = l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_tryRecv_x27___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_tryRecv_spec__0___redArg(v___y_3200_);
lean_dec(v___y_3200_);
return v_res_3202_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_tryRecv_x27___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_tryRecv_spec__0(lean_object* v_00_u03b1_3203_, lean_object* v___y_3204_){
_start:
{
lean_object* v___x_3206_; 
v___x_3206_ = l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_tryRecv_x27___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_tryRecv_spec__0___redArg(v___y_3204_);
return v___x_3206_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_tryRecv_x27___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_tryRecv_spec__0___boxed(lean_object* v_00_u03b1_3207_, lean_object* v___y_3208_, lean_object* v___y_3209_){
_start:
{
lean_object* v_res_3210_; 
v_res_3210_ = l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_tryRecv_x27___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_tryRecv_spec__0(v_00_u03b1_3207_, v___y_3208_);
lean_dec(v___y_3208_);
return v_res_3210_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_tryRecv___redArg(lean_object* v_ch_3212_){
_start:
{
lean_object* v___f_3214_; lean_object* v___x_3215_; 
v___f_3214_ = ((lean_object*)(l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_tryRecv___redArg___closed__0));
v___x_3215_ = l_Std_Mutex_atomically___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_trySend_spec__1___redArg(v_ch_3212_, v___f_3214_);
return v___x_3215_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_tryRecv___redArg___boxed(lean_object* v_ch_3216_, lean_object* v___y_3217_){
_start:
{
lean_object* v_res_3218_; 
v_res_3218_ = l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_tryRecv___redArg(v_ch_3216_);
return v_res_3218_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_tryRecv(lean_object* v_00_u03b1_3219_, lean_object* v_ch_3220_){
_start:
{
lean_object* v___x_3222_; 
v___x_3222_ = l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_tryRecv___redArg(v_ch_3220_);
return v___x_3222_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_tryRecv___boxed(lean_object* v_00_u03b1_3223_, lean_object* v_ch_3224_, lean_object* v___y_3225_){
_start:
{
lean_object* v_res_3226_; 
v_res_3226_ = l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_tryRecv(v_00_u03b1_3223_, v_ch_3224_);
return v_res_3226_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recv___redArg___lam__1(lean_object* v___f_3227_, lean_object* v___y_3228_){
_start:
{
lean_object* v___x_3230_; 
v___x_3230_ = l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_tryRecv_x27___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_tryRecv_spec__0___redArg(v___y_3228_);
if (lean_obj_tag(v___x_3230_) == 1)
{
lean_object* v___x_3231_; 
lean_dec_ref(v___f_3227_);
v___x_3231_ = lean_task_pure(v___x_3230_);
return v___x_3231_;
}
else
{
lean_object* v___x_3232_; uint8_t v_closed_3233_; 
lean_dec(v___x_3230_);
v___x_3232_ = lean_st_ref_get(v___y_3228_);
v_closed_3233_ = lean_ctor_get_uint8(v___x_3232_, sizeof(void*)*7);
lean_dec(v___x_3232_);
if (v_closed_3233_ == 0)
{
lean_object* v___x_3234_; lean_object* v___x_3235_; lean_object* v_producers_3236_; lean_object* v_consumers_3237_; lean_object* v_capacity_3238_; lean_object* v_buf_3239_; lean_object* v_bufCount_3240_; lean_object* v_sendIdx_3241_; lean_object* v_recvIdx_3242_; uint8_t v_closed_3243_; lean_object* v___x_3245_; uint8_t v_isShared_3246_; uint8_t v_isSharedCheck_3257_; 
v___x_3234_ = lean_io_promise_new();
v___x_3235_ = lean_st_ref_take(v___y_3228_);
v_producers_3236_ = lean_ctor_get(v___x_3235_, 0);
v_consumers_3237_ = lean_ctor_get(v___x_3235_, 1);
v_capacity_3238_ = lean_ctor_get(v___x_3235_, 2);
v_buf_3239_ = lean_ctor_get(v___x_3235_, 3);
v_bufCount_3240_ = lean_ctor_get(v___x_3235_, 4);
v_sendIdx_3241_ = lean_ctor_get(v___x_3235_, 5);
v_recvIdx_3242_ = lean_ctor_get(v___x_3235_, 6);
v_closed_3243_ = lean_ctor_get_uint8(v___x_3235_, sizeof(void*)*7);
v_isSharedCheck_3257_ = !lean_is_exclusive(v___x_3235_);
if (v_isSharedCheck_3257_ == 0)
{
v___x_3245_ = v___x_3235_;
v_isShared_3246_ = v_isSharedCheck_3257_;
goto v_resetjp_3244_;
}
else
{
lean_inc(v_recvIdx_3242_);
lean_inc(v_sendIdx_3241_);
lean_inc(v_bufCount_3240_);
lean_inc(v_buf_3239_);
lean_inc(v_capacity_3238_);
lean_inc(v_consumers_3237_);
lean_inc(v_producers_3236_);
lean_dec(v___x_3235_);
v___x_3245_ = lean_box(0);
v_isShared_3246_ = v_isSharedCheck_3257_;
goto v_resetjp_3244_;
}
v_resetjp_3244_:
{
lean_object* v___x_3247_; lean_object* v___x_3248_; lean_object* v___x_3249_; lean_object* v___x_3251_; 
v___x_3247_ = lean_box(0);
lean_inc(v___x_3234_);
v___x_3248_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3248_, 0, v___x_3234_);
lean_ctor_set(v___x_3248_, 1, v___x_3247_);
v___x_3249_ = l_Std_Queue_enqueue___redArg(v___x_3248_, v_consumers_3237_);
if (v_isShared_3246_ == 0)
{
lean_ctor_set(v___x_3245_, 1, v___x_3249_);
v___x_3251_ = v___x_3245_;
goto v_reusejp_3250_;
}
else
{
lean_object* v_reuseFailAlloc_3256_; 
v_reuseFailAlloc_3256_ = lean_alloc_ctor(0, 7, 1);
lean_ctor_set(v_reuseFailAlloc_3256_, 0, v_producers_3236_);
lean_ctor_set(v_reuseFailAlloc_3256_, 1, v___x_3249_);
lean_ctor_set(v_reuseFailAlloc_3256_, 2, v_capacity_3238_);
lean_ctor_set(v_reuseFailAlloc_3256_, 3, v_buf_3239_);
lean_ctor_set(v_reuseFailAlloc_3256_, 4, v_bufCount_3240_);
lean_ctor_set(v_reuseFailAlloc_3256_, 5, v_sendIdx_3241_);
lean_ctor_set(v_reuseFailAlloc_3256_, 6, v_recvIdx_3242_);
lean_ctor_set_uint8(v_reuseFailAlloc_3256_, sizeof(void*)*7, v_closed_3243_);
v___x_3251_ = v_reuseFailAlloc_3256_;
goto v_reusejp_3250_;
}
v_reusejp_3250_:
{
lean_object* v___x_3252_; lean_object* v___x_3253_; lean_object* v___x_3254_; lean_object* v___x_3255_; 
v___x_3252_ = lean_st_ref_put(v___y_3228_, v___x_3251_);
v___x_3253_ = lean_io_promise_result_opt(v___x_3234_);
lean_dec(v___x_3234_);
v___x_3254_ = lean_unsigned_to_nat(0u);
v___x_3255_ = lean_io_bind_task(v___x_3253_, v___f_3227_, v___x_3254_, v_closed_3233_);
return v___x_3255_;
}
}
}
else
{
lean_object* v___x_3258_; 
lean_dec_ref(v___f_3227_);
v___x_3258_ = lean_obj_once(&l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recv___redArg___lam__1___closed__0, &l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recv___redArg___lam__1___closed__0_once, _init_l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recv___redArg___lam__1___closed__0);
return v___x_3258_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recv___redArg___lam__1___boxed(lean_object* v___f_3259_, lean_object* v___y_3260_, lean_object* v___y_3261_){
_start:
{
lean_object* v_res_3262_; 
v_res_3262_ = l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recv___redArg___lam__1(v___f_3259_, v___y_3260_);
lean_dec(v___y_3260_);
return v_res_3262_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recv___redArg___lam__0(lean_object* v_ch_3263_, lean_object* v_res_3264_){
_start:
{
if (lean_obj_tag(v_res_3264_) == 0)
{
lean_dec_ref(v_ch_3263_);
goto v___jp_3266_;
}
else
{
lean_object* v_val_3268_; uint8_t v___x_3269_; 
v_val_3268_ = lean_ctor_get(v_res_3264_, 0);
v___x_3269_ = lean_unbox(v_val_3268_);
if (v___x_3269_ == 0)
{
lean_dec_ref(v_ch_3263_);
goto v___jp_3266_;
}
else
{
lean_object* v___x_3270_; 
v___x_3270_ = l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recv___redArg(v_ch_3263_);
return v___x_3270_;
}
}
v___jp_3266_:
{
lean_object* v___x_3267_; 
v___x_3267_ = lean_obj_once(&l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recv___redArg___lam__1___closed__0, &l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recv___redArg___lam__1___closed__0_once, _init_l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recv___redArg___lam__1___closed__0);
return v___x_3267_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recv___redArg___lam__0___boxed(lean_object* v_ch_3271_, lean_object* v_res_3272_, lean_object* v___y_3273_){
_start:
{
lean_object* v_res_3274_; 
v_res_3274_ = l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recv___redArg___lam__0(v_ch_3271_, v_res_3272_);
lean_dec(v_res_3272_);
return v_res_3274_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recv___redArg(lean_object* v_ch_3275_){
_start:
{
lean_object* v___f_3277_; lean_object* v___f_3278_; lean_object* v___x_3279_; 
lean_inc_ref(v_ch_3275_);
v___f_3277_ = lean_alloc_closure((void*)(l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recv___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_3277_, 0, v_ch_3275_);
v___f_3278_ = lean_alloc_closure((void*)(l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recv___redArg___lam__1___boxed), 3, 1);
lean_closure_set(v___f_3278_, 0, v___f_3277_);
v___x_3279_ = l_Std_Mutex_atomically___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_trySend_spec__1___redArg(v_ch_3275_, v___f_3278_);
return v___x_3279_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recv___redArg___boxed(lean_object* v_ch_3280_, lean_object* v___y_3281_){
_start:
{
lean_object* v_res_3282_; 
v_res_3282_ = l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recv___redArg(v_ch_3280_);
return v_res_3282_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recv(lean_object* v_00_u03b1_3283_, lean_object* v_ch_3284_){
_start:
{
lean_object* v___x_3286_; 
v___x_3286_ = l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recv___redArg(v_ch_3284_);
return v___x_3286_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recv___boxed(lean_object* v_00_u03b1_3287_, lean_object* v_ch_3288_, lean_object* v___y_3289_){
_start:
{
lean_object* v_res_3290_; 
v_res_3290_ = l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recv(v_00_u03b1_3287_, v_ch_3288_);
return v_res_3290_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvReady_x27___redArg___lam__0(lean_object* v_toApplicative_3291_, lean_object* v_a_3292_){
_start:
{
uint8_t v___y_3294_; lean_object* v_bufCount_3298_; uint8_t v_closed_3299_; lean_object* v___x_3300_; uint8_t v___x_3301_; 
v_bufCount_3298_ = lean_ctor_get(v_a_3292_, 4);
v_closed_3299_ = lean_ctor_get_uint8(v_a_3292_, sizeof(void*)*7);
v___x_3300_ = lean_unsigned_to_nat(0u);
v___x_3301_ = lean_nat_dec_eq(v_bufCount_3298_, v___x_3300_);
if (v___x_3301_ == 0)
{
uint8_t v___x_3302_; 
v___x_3302_ = 1;
v___y_3294_ = v___x_3302_;
goto v___jp_3293_;
}
else
{
v___y_3294_ = v_closed_3299_;
goto v___jp_3293_;
}
v___jp_3293_:
{
lean_object* v_toPure_3295_; lean_object* v___x_3296_; lean_object* v___x_3297_; 
v_toPure_3295_ = lean_ctor_get(v_toApplicative_3291_, 1);
lean_inc(v_toPure_3295_);
lean_dec_ref(v_toApplicative_3291_);
v___x_3296_ = lean_box(v___y_3294_);
v___x_3297_ = lean_apply_2(v_toPure_3295_, lean_box(0), v___x_3296_);
return v___x_3297_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvReady_x27___redArg___lam__0___boxed(lean_object* v_toApplicative_3303_, lean_object* v_a_3304_){
_start:
{
lean_object* v_res_3305_; 
v_res_3305_ = l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvReady_x27___redArg___lam__0(v_toApplicative_3303_, v_a_3304_);
lean_dec_ref(v_a_3304_);
return v_res_3305_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvReady_x27___redArg(lean_object* v_inst_3306_, lean_object* v_inst_3307_, lean_object* v___y_3308_){
_start:
{
lean_object* v_toApplicative_3309_; lean_object* v_toBind_3310_; lean_object* v___f_3311_; lean_object* v___x_3312_; lean_object* v___x_3313_; lean_object* v___x_3314_; 
v_toApplicative_3309_ = lean_ctor_get(v_inst_3306_, 0);
lean_inc_ref(v_toApplicative_3309_);
v_toBind_3310_ = lean_ctor_get(v_inst_3306_, 1);
lean_inc(v_toBind_3310_);
lean_dec_ref(v_inst_3306_);
v___f_3311_ = lean_alloc_closure((void*)(l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvReady_x27___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_3311_, 0, v_toApplicative_3309_);
lean_inc(v___y_3308_);
v___x_3312_ = lean_alloc_closure((void*)(l_ST_Prim_Ref_get___boxed), 4, 3);
lean_closure_set(v___x_3312_, 0, lean_box(0));
lean_closure_set(v___x_3312_, 1, lean_box(0));
lean_closure_set(v___x_3312_, 2, v___y_3308_);
v___x_3313_ = lean_apply_2(v_inst_3307_, lean_box(0), v___x_3312_);
v___x_3314_ = lean_apply_4(v_toBind_3310_, lean_box(0), lean_box(0), v___x_3313_, v___f_3311_);
return v___x_3314_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvReady_x27___redArg___boxed(lean_object* v_inst_3315_, lean_object* v_inst_3316_, lean_object* v___y_3317_){
_start:
{
lean_object* v_res_3318_; 
v_res_3318_ = l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvReady_x27___redArg(v_inst_3315_, v_inst_3316_, v___y_3317_);
lean_dec(v___y_3317_);
return v_res_3318_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvReady_x27(lean_object* v_m_3319_, lean_object* v_00_u03b1_3320_, lean_object* v_inst_3321_, lean_object* v_inst_3322_, lean_object* v___y_3323_){
_start:
{
lean_object* v_toApplicative_3324_; lean_object* v_toBind_3325_; lean_object* v___f_3326_; lean_object* v___x_3327_; lean_object* v___x_3328_; lean_object* v___x_3329_; 
v_toApplicative_3324_ = lean_ctor_get(v_inst_3321_, 0);
lean_inc_ref(v_toApplicative_3324_);
v_toBind_3325_ = lean_ctor_get(v_inst_3321_, 1);
lean_inc(v_toBind_3325_);
lean_dec_ref(v_inst_3321_);
v___f_3326_ = lean_alloc_closure((void*)(l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvReady_x27___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_3326_, 0, v_toApplicative_3324_);
lean_inc(v___y_3323_);
v___x_3327_ = lean_alloc_closure((void*)(l_ST_Prim_Ref_get___boxed), 4, 3);
lean_closure_set(v___x_3327_, 0, lean_box(0));
lean_closure_set(v___x_3327_, 1, lean_box(0));
lean_closure_set(v___x_3327_, 2, v___y_3323_);
v___x_3328_ = lean_apply_2(v_inst_3322_, lean_box(0), v___x_3327_);
v___x_3329_ = lean_apply_4(v_toBind_3325_, lean_box(0), lean_box(0), v___x_3328_, v___f_3326_);
return v___x_3329_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvReady_x27___boxed(lean_object* v_m_3330_, lean_object* v_00_u03b1_3331_, lean_object* v_inst_3332_, lean_object* v_inst_3333_, lean_object* v___y_3334_){
_start:
{
lean_object* v_res_3335_; 
v_res_3335_ = l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvReady_x27(v_m_3330_, v_00_u03b1_3331_, v_inst_3332_, v_inst_3333_, v___y_3334_);
lean_dec(v___y_3334_);
return v_res_3335_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_tryRecv_x27___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvSelector_registerAux_spec__0___redArg(lean_object* v___y_3336_){
_start:
{
lean_object* v___x_3338_; lean_object* v_producers_3339_; lean_object* v_consumers_3340_; lean_object* v_capacity_3341_; lean_object* v_buf_3342_; lean_object* v_bufCount_3343_; lean_object* v_sendIdx_3344_; lean_object* v_recvIdx_3345_; uint8_t v_closed_3346_; lean_object* v___x_3348_; uint8_t v_isShared_3349_; uint8_t v_isSharedCheck_3380_; 
v___x_3338_ = lean_st_ref_get(v___y_3336_);
v_producers_3339_ = lean_ctor_get(v___x_3338_, 0);
v_consumers_3340_ = lean_ctor_get(v___x_3338_, 1);
v_capacity_3341_ = lean_ctor_get(v___x_3338_, 2);
v_buf_3342_ = lean_ctor_get(v___x_3338_, 3);
v_bufCount_3343_ = lean_ctor_get(v___x_3338_, 4);
v_sendIdx_3344_ = lean_ctor_get(v___x_3338_, 5);
v_recvIdx_3345_ = lean_ctor_get(v___x_3338_, 6);
v_closed_3346_ = lean_ctor_get_uint8(v___x_3338_, sizeof(void*)*7);
v_isSharedCheck_3380_ = !lean_is_exclusive(v___x_3338_);
if (v_isSharedCheck_3380_ == 0)
{
v___x_3348_ = v___x_3338_;
v_isShared_3349_ = v_isSharedCheck_3380_;
goto v_resetjp_3347_;
}
else
{
lean_inc(v_recvIdx_3345_);
lean_inc(v_sendIdx_3344_);
lean_inc(v_bufCount_3343_);
lean_inc(v_buf_3342_);
lean_inc(v_capacity_3341_);
lean_inc(v_consumers_3340_);
lean_inc(v_producers_3339_);
lean_dec(v___x_3338_);
v___x_3348_ = lean_box(0);
v_isShared_3349_ = v_isSharedCheck_3380_;
goto v_resetjp_3347_;
}
v_resetjp_3347_:
{
lean_object* v___x_3350_; uint8_t v___x_3351_; 
v___x_3350_ = lean_unsigned_to_nat(0u);
v___x_3351_ = lean_nat_dec_eq(v_bufCount_3343_, v___x_3350_);
if (v___x_3351_ == 0)
{
uint8_t v___x_3352_; lean_object* v___x_3353_; lean_object* v___x_3354_; lean_object* v___x_3355_; lean_object* v_st_3357_; lean_object* v___y_3358_; lean_object* v___y_3362_; lean_object* v___x_3375_; lean_object* v___x_3376_; uint8_t v___x_3377_; 
v___x_3352_ = 1;
v___x_3353_ = lean_array_fget_borrowed(v_buf_3342_, v_recvIdx_3345_);
v___x_3354_ = lean_box(0);
v___x_3355_ = lean_st_ref_swap(v___x_3353_, v___x_3354_);
v___x_3375_ = lean_unsigned_to_nat(1u);
v___x_3376_ = lean_nat_add(v_recvIdx_3345_, v___x_3375_);
lean_dec(v_recvIdx_3345_);
v___x_3377_ = lean_nat_dec_eq(v___x_3376_, v_capacity_3341_);
if (v___x_3377_ == 0)
{
v___y_3362_ = v___x_3376_;
goto v___jp_3361_;
}
else
{
lean_dec(v___x_3376_);
v___y_3362_ = v___x_3350_;
goto v___jp_3361_;
}
v___jp_3356_:
{
lean_object* v___x_3359_; lean_object* v___x_3360_; 
v___x_3359_ = lean_st_ref_swap(v___y_3358_, v_st_3357_);
lean_dec(v___x_3359_);
v___x_3360_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3360_, 0, v___x_3355_);
return v___x_3360_;
}
v___jp_3361_:
{
lean_object* v___x_3363_; lean_object* v___x_3364_; lean_object* v___x_3366_; 
v___x_3363_ = lean_unsigned_to_nat(1u);
v___x_3364_ = lean_nat_sub(v_bufCount_3343_, v___x_3363_);
lean_dec(v_bufCount_3343_);
lean_inc(v___y_3362_);
lean_inc(v_sendIdx_3344_);
lean_inc(v___x_3364_);
lean_inc_ref(v_buf_3342_);
lean_inc(v_capacity_3341_);
lean_inc_ref(v_consumers_3340_);
lean_inc_ref(v_producers_3339_);
if (v_isShared_3349_ == 0)
{
lean_ctor_set(v___x_3348_, 6, v___y_3362_);
lean_ctor_set(v___x_3348_, 4, v___x_3364_);
v___x_3366_ = v___x_3348_;
goto v_reusejp_3365_;
}
else
{
lean_object* v_reuseFailAlloc_3374_; 
v_reuseFailAlloc_3374_ = lean_alloc_ctor(0, 7, 1);
lean_ctor_set(v_reuseFailAlloc_3374_, 0, v_producers_3339_);
lean_ctor_set(v_reuseFailAlloc_3374_, 1, v_consumers_3340_);
lean_ctor_set(v_reuseFailAlloc_3374_, 2, v_capacity_3341_);
lean_ctor_set(v_reuseFailAlloc_3374_, 3, v_buf_3342_);
lean_ctor_set(v_reuseFailAlloc_3374_, 4, v___x_3364_);
lean_ctor_set(v_reuseFailAlloc_3374_, 5, v_sendIdx_3344_);
lean_ctor_set(v_reuseFailAlloc_3374_, 6, v___y_3362_);
lean_ctor_set_uint8(v_reuseFailAlloc_3374_, sizeof(void*)*7, v_closed_3346_);
v___x_3366_ = v_reuseFailAlloc_3374_;
goto v_reusejp_3365_;
}
v_reusejp_3365_:
{
lean_object* v___x_3367_; 
v___x_3367_ = l_Std_Queue_dequeue_x3f___redArg(v_producers_3339_);
if (lean_obj_tag(v___x_3367_) == 1)
{
lean_object* v_val_3368_; lean_object* v_fst_3369_; lean_object* v_snd_3370_; lean_object* v___x_3371_; lean_object* v___x_3372_; lean_object* v___x_3373_; 
lean_dec_ref(v___x_3366_);
v_val_3368_ = lean_ctor_get(v___x_3367_, 0);
lean_inc(v_val_3368_);
lean_dec_ref_known(v___x_3367_, 1);
v_fst_3369_ = lean_ctor_get(v_val_3368_, 0);
lean_inc(v_fst_3369_);
v_snd_3370_ = lean_ctor_get(v_val_3368_, 1);
lean_inc(v_snd_3370_);
lean_dec(v_val_3368_);
v___x_3371_ = lean_box(v___x_3352_);
v___x_3372_ = lean_io_promise_resolve(v___x_3371_, v_fst_3369_);
lean_dec(v_fst_3369_);
v___x_3373_ = lean_alloc_ctor(0, 7, 1);
lean_ctor_set(v___x_3373_, 0, v_snd_3370_);
lean_ctor_set(v___x_3373_, 1, v_consumers_3340_);
lean_ctor_set(v___x_3373_, 2, v_capacity_3341_);
lean_ctor_set(v___x_3373_, 3, v_buf_3342_);
lean_ctor_set(v___x_3373_, 4, v___x_3364_);
lean_ctor_set(v___x_3373_, 5, v_sendIdx_3344_);
lean_ctor_set(v___x_3373_, 6, v___y_3362_);
lean_ctor_set_uint8(v___x_3373_, sizeof(void*)*7, v_closed_3346_);
v_st_3357_ = v___x_3373_;
v___y_3358_ = v___y_3336_;
goto v___jp_3356_;
}
else
{
lean_dec(v___x_3367_);
lean_dec(v___x_3364_);
lean_dec(v___y_3362_);
lean_dec(v_sendIdx_3344_);
lean_dec_ref(v_buf_3342_);
lean_dec(v_capacity_3341_);
lean_dec_ref(v_consumers_3340_);
v_st_3357_ = v___x_3366_;
v___y_3358_ = v___y_3336_;
goto v___jp_3356_;
}
}
}
}
else
{
lean_object* v___x_3378_; lean_object* v___x_3379_; 
lean_del_object(v___x_3348_);
lean_dec(v_recvIdx_3345_);
lean_dec(v_sendIdx_3344_);
lean_dec(v_bufCount_3343_);
lean_dec_ref(v_buf_3342_);
lean_dec(v_capacity_3341_);
lean_dec_ref(v_consumers_3340_);
lean_dec_ref(v_producers_3339_);
v___x_3378_ = lean_box(0);
v___x_3379_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3379_, 0, v___x_3378_);
return v___x_3379_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_tryRecv_x27___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvSelector_registerAux_spec__0___redArg___boxed(lean_object* v___y_3381_, lean_object* v___y_3382_){
_start:
{
lean_object* v_res_3383_; 
v_res_3383_ = l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_tryRecv_x27___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvSelector_registerAux_spec__0___redArg(v___y_3381_);
lean_dec(v___y_3381_);
return v_res_3383_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_tryRecv_x27___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvSelector_registerAux_spec__0(lean_object* v_00_u03b1_3384_, lean_object* v___y_3385_){
_start:
{
lean_object* v___x_3387_; 
v___x_3387_ = l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_tryRecv_x27___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvSelector_registerAux_spec__0___redArg(v___y_3385_);
return v___x_3387_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_tryRecv_x27___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvSelector_registerAux_spec__0___boxed(lean_object* v_00_u03b1_3388_, lean_object* v___y_3389_, lean_object* v___y_3390_){
_start:
{
lean_object* v_res_3391_; 
v_res_3391_ = l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_tryRecv_x27___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvSelector_registerAux_spec__0(v_00_u03b1_3388_, v___y_3389_);
lean_dec(v___y_3389_);
return v_res_3391_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Waiter_race___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvSelector_registerAux_spec__1___redArg(lean_object* v_w_3392_, lean_object* v_lose_3393_){
_start:
{
lean_object* v_finished_3395_; lean_object* v_promise_3396_; lean_object* v___x_3397_; uint8_t v___y_3399_; uint8_t v___x_3407_; 
v_finished_3395_ = lean_ctor_get(v_w_3392_, 0);
v_promise_3396_ = lean_ctor_get(v_w_3392_, 1);
v___x_3397_ = lean_st_ref_take(v_finished_3395_);
v___x_3407_ = lean_unbox(v___x_3397_);
lean_dec(v___x_3397_);
if (v___x_3407_ == 0)
{
uint8_t v___x_3408_; 
v___x_3408_ = 1;
v___y_3399_ = v___x_3408_;
goto v___jp_3398_;
}
else
{
uint8_t v___x_3409_; 
v___x_3409_ = 0;
v___y_3399_ = v___x_3409_;
goto v___jp_3398_;
}
v___jp_3398_:
{
uint8_t v___x_3400_; lean_object* v___x_3401_; lean_object* v___x_3402_; 
v___x_3400_ = 1;
v___x_3401_ = lean_box(v___x_3400_);
v___x_3402_ = lean_st_ref_put(v_finished_3395_, v___x_3401_);
if (v___y_3399_ == 0)
{
lean_object* v___x_3403_; 
v___x_3403_ = lean_apply_1(v_lose_3393_, lean_box(0));
return v___x_3403_;
}
else
{
lean_object* v___x_3404_; lean_object* v___x_3405_; lean_object* v___x_3406_; 
lean_dec_ref(v_lose_3393_);
v___x_3404_ = ((lean_object*)(l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_tryRecv_x27___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector_spec__0___redArg___lam__1___closed__2));
v___x_3405_ = lean_io_promise_resolve(v___x_3404_, v_promise_3396_);
v___x_3406_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3406_, 0, v___x_3405_);
return v___x_3406_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_Waiter_race___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvSelector_registerAux_spec__1___redArg___boxed(lean_object* v_w_3410_, lean_object* v_lose_3411_, lean_object* v___y_3412_){
_start:
{
lean_object* v_res_3413_; 
v_res_3413_ = l_Std_Async_Waiter_race___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvSelector_registerAux_spec__1___redArg(v_w_3410_, v_lose_3411_);
lean_dec_ref(v_w_3410_);
return v_res_3413_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Waiter_race___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvSelector_registerAux_spec__1(lean_object* v_00_u03b1_3414_, lean_object* v_w_3415_, lean_object* v_lose_3416_){
_start:
{
lean_object* v___x_3418_; 
v___x_3418_ = l_Std_Async_Waiter_race___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvSelector_registerAux_spec__1___redArg(v_w_3415_, v_lose_3416_);
return v___x_3418_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Waiter_race___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvSelector_registerAux_spec__1___boxed(lean_object* v_00_u03b1_3419_, lean_object* v_w_3420_, lean_object* v_lose_3421_, lean_object* v___y_3422_){
_start:
{
lean_object* v_res_3423_; 
v_res_3423_ = l_Std_Async_Waiter_race___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvSelector_registerAux_spec__1(v_00_u03b1_3419_, v_w_3420_, v_lose_3421_);
lean_dec_ref(v_w_3420_);
return v_res_3423_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Waiter_race___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvSelector_registerAux_spec__2___redArg(lean_object* v_w_3424_, lean_object* v_lose_3425_, lean_object* v___y_3426_){
_start:
{
lean_object* v_finished_3428_; lean_object* v_promise_3429_; lean_object* v___x_3430_; uint8_t v___y_3432_; uint8_t v___x_3448_; 
v_finished_3428_ = lean_ctor_get(v_w_3424_, 0);
v_promise_3429_ = lean_ctor_get(v_w_3424_, 1);
v___x_3430_ = lean_st_ref_take(v_finished_3428_);
v___x_3448_ = lean_unbox(v___x_3430_);
lean_dec(v___x_3430_);
if (v___x_3448_ == 0)
{
uint8_t v___x_3449_; 
v___x_3449_ = 1;
v___y_3432_ = v___x_3449_;
goto v___jp_3431_;
}
else
{
uint8_t v___x_3450_; 
v___x_3450_ = 0;
v___y_3432_ = v___x_3450_;
goto v___jp_3431_;
}
v___jp_3431_:
{
uint8_t v___x_3433_; lean_object* v___x_3434_; lean_object* v___x_3435_; 
v___x_3433_ = 1;
v___x_3434_ = lean_box(v___x_3433_);
v___x_3435_ = lean_st_ref_put(v_finished_3428_, v___x_3434_);
if (v___y_3432_ == 0)
{
lean_object* v___x_3436_; 
lean_inc(v___y_3426_);
v___x_3436_ = lean_apply_2(v_lose_3425_, v___y_3426_, lean_box(0));
return v___x_3436_;
}
else
{
lean_object* v___x_3437_; lean_object* v_a_3438_; lean_object* v___x_3440_; uint8_t v_isShared_3441_; uint8_t v_isSharedCheck_3447_; 
lean_dec_ref(v_lose_3425_);
v___x_3437_ = l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_tryRecv_x27___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvSelector_registerAux_spec__0___redArg(v___y_3426_);
v_a_3438_ = lean_ctor_get(v___x_3437_, 0);
v_isSharedCheck_3447_ = !lean_is_exclusive(v___x_3437_);
if (v_isSharedCheck_3447_ == 0)
{
v___x_3440_ = v___x_3437_;
v_isShared_3441_ = v_isSharedCheck_3447_;
goto v_resetjp_3439_;
}
else
{
lean_inc(v_a_3438_);
lean_dec(v___x_3437_);
v___x_3440_ = lean_box(0);
v_isShared_3441_ = v_isSharedCheck_3447_;
goto v_resetjp_3439_;
}
v_resetjp_3439_:
{
lean_object* v___x_3442_; lean_object* v___x_3443_; lean_object* v___x_3445_; 
v___x_3442_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3442_, 0, v_a_3438_);
v___x_3443_ = lean_io_promise_resolve(v___x_3442_, v_promise_3429_);
if (v_isShared_3441_ == 0)
{
lean_ctor_set(v___x_3440_, 0, v___x_3443_);
v___x_3445_ = v___x_3440_;
goto v_reusejp_3444_;
}
else
{
lean_object* v_reuseFailAlloc_3446_; 
v_reuseFailAlloc_3446_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3446_, 0, v___x_3443_);
v___x_3445_ = v_reuseFailAlloc_3446_;
goto v_reusejp_3444_;
}
v_reusejp_3444_:
{
return v___x_3445_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_Waiter_race___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvSelector_registerAux_spec__2___redArg___boxed(lean_object* v_w_3451_, lean_object* v_lose_3452_, lean_object* v___y_3453_, lean_object* v___y_3454_){
_start:
{
lean_object* v_res_3455_; 
v_res_3455_ = l_Std_Async_Waiter_race___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvSelector_registerAux_spec__2___redArg(v_w_3451_, v_lose_3452_, v___y_3453_);
lean_dec(v___y_3453_);
lean_dec_ref(v_w_3451_);
return v_res_3455_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Waiter_race___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvSelector_registerAux_spec__2(lean_object* v_00_u03b1_3456_, lean_object* v_w_3457_, lean_object* v_lose_3458_, lean_object* v___y_3459_){
_start:
{
lean_object* v___x_3461_; 
v___x_3461_ = l_Std_Async_Waiter_race___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvSelector_registerAux_spec__2___redArg(v_w_3457_, v_lose_3458_, v___y_3459_);
return v___x_3461_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Waiter_race___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvSelector_registerAux_spec__2___boxed(lean_object* v_00_u03b1_3462_, lean_object* v_w_3463_, lean_object* v_lose_3464_, lean_object* v___y_3465_, lean_object* v___y_3466_){
_start:
{
lean_object* v_res_3467_; 
v_res_3467_ = l_Std_Async_Waiter_race___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvSelector_registerAux_spec__2(v_00_u03b1_3462_, v_w_3463_, v_lose_3464_, v___y_3465_);
lean_dec(v___y_3465_);
lean_dec_ref(v_w_3463_);
return v_res_3467_;
}
}
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvSelector_registerAux_spec__3___redArg___lam__0(lean_object* v_mutex_3468_, lean_object* v_a_x3f_3469_){
_start:
{
lean_object* v___x_3471_; lean_object* v___x_3472_; 
v___x_3471_ = lean_io_basemutex_unlock(v_mutex_3468_);
v___x_3472_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3472_, 0, v___x_3471_);
return v___x_3472_;
}
}
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvSelector_registerAux_spec__3___redArg___lam__0___boxed(lean_object* v_mutex_3473_, lean_object* v_a_x3f_3474_, lean_object* v___y_3475_){
_start:
{
lean_object* v_res_3476_; 
v_res_3476_ = l_Std_Mutex_atomically___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvSelector_registerAux_spec__3___redArg___lam__0(v_mutex_3473_, v_a_x3f_3474_);
lean_dec(v_a_x3f_3474_);
lean_dec(v_mutex_3473_);
return v_res_3476_;
}
}
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvSelector_registerAux_spec__3___redArg(lean_object* v_mutex_3477_, lean_object* v_k_3478_){
_start:
{
lean_object* v_ref_3480_; lean_object* v_mutex_3481_; lean_object* v___x_3482_; lean_object* v___x_3483_; 
v_ref_3480_ = lean_ctor_get(v_mutex_3477_, 0);
lean_inc(v_ref_3480_);
v_mutex_3481_ = lean_ctor_get(v_mutex_3477_, 1);
lean_inc(v_mutex_3481_);
lean_dec_ref(v_mutex_3477_);
v___x_3482_ = lean_io_basemutex_lock(v_mutex_3481_);
v___x_3483_ = lean_apply_2(v_k_3478_, v_ref_3480_, lean_box(0));
if (lean_obj_tag(v___x_3483_) == 0)
{
lean_object* v_a_3484_; lean_object* v___x_3486_; uint8_t v_isShared_3487_; uint8_t v_isSharedCheck_3500_; 
v_a_3484_ = lean_ctor_get(v___x_3483_, 0);
v_isSharedCheck_3500_ = !lean_is_exclusive(v___x_3483_);
if (v_isSharedCheck_3500_ == 0)
{
v___x_3486_ = v___x_3483_;
v_isShared_3487_ = v_isSharedCheck_3500_;
goto v_resetjp_3485_;
}
else
{
lean_inc(v_a_3484_);
lean_dec(v___x_3483_);
v___x_3486_ = lean_box(0);
v_isShared_3487_ = v_isSharedCheck_3500_;
goto v_resetjp_3485_;
}
v_resetjp_3485_:
{
lean_object* v___x_3489_; 
lean_inc(v_a_3484_);
if (v_isShared_3487_ == 0)
{
lean_ctor_set_tag(v___x_3486_, 1);
v___x_3489_ = v___x_3486_;
goto v_reusejp_3488_;
}
else
{
lean_object* v_reuseFailAlloc_3499_; 
v_reuseFailAlloc_3499_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3499_, 0, v_a_3484_);
v___x_3489_ = v_reuseFailAlloc_3499_;
goto v_reusejp_3488_;
}
v_reusejp_3488_:
{
lean_object* v___x_3490_; lean_object* v___x_3492_; uint8_t v_isShared_3493_; uint8_t v_isSharedCheck_3497_; 
v___x_3490_ = l_Std_Mutex_atomically___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvSelector_registerAux_spec__3___redArg___lam__0(v_mutex_3481_, v___x_3489_);
lean_dec_ref(v___x_3489_);
lean_dec(v_mutex_3481_);
v_isSharedCheck_3497_ = !lean_is_exclusive(v___x_3490_);
if (v_isSharedCheck_3497_ == 0)
{
lean_object* v_unused_3498_; 
v_unused_3498_ = lean_ctor_get(v___x_3490_, 0);
lean_dec(v_unused_3498_);
v___x_3492_ = v___x_3490_;
v_isShared_3493_ = v_isSharedCheck_3497_;
goto v_resetjp_3491_;
}
else
{
lean_dec(v___x_3490_);
v___x_3492_ = lean_box(0);
v_isShared_3493_ = v_isSharedCheck_3497_;
goto v_resetjp_3491_;
}
v_resetjp_3491_:
{
lean_object* v___x_3495_; 
if (v_isShared_3493_ == 0)
{
lean_ctor_set(v___x_3492_, 0, v_a_3484_);
v___x_3495_ = v___x_3492_;
goto v_reusejp_3494_;
}
else
{
lean_object* v_reuseFailAlloc_3496_; 
v_reuseFailAlloc_3496_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3496_, 0, v_a_3484_);
v___x_3495_ = v_reuseFailAlloc_3496_;
goto v_reusejp_3494_;
}
v_reusejp_3494_:
{
return v___x_3495_;
}
}
}
}
}
else
{
lean_object* v_a_3501_; lean_object* v___x_3502_; lean_object* v___x_3503_; lean_object* v___x_3505_; uint8_t v_isShared_3506_; uint8_t v_isSharedCheck_3510_; 
v_a_3501_ = lean_ctor_get(v___x_3483_, 0);
lean_inc(v_a_3501_);
lean_dec_ref_known(v___x_3483_, 1);
v___x_3502_ = lean_box(0);
v___x_3503_ = l_Std_Mutex_atomically___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvSelector_registerAux_spec__3___redArg___lam__0(v_mutex_3481_, v___x_3502_);
lean_dec(v_mutex_3481_);
v_isSharedCheck_3510_ = !lean_is_exclusive(v___x_3503_);
if (v_isSharedCheck_3510_ == 0)
{
lean_object* v_unused_3511_; 
v_unused_3511_ = lean_ctor_get(v___x_3503_, 0);
lean_dec(v_unused_3511_);
v___x_3505_ = v___x_3503_;
v_isShared_3506_ = v_isSharedCheck_3510_;
goto v_resetjp_3504_;
}
else
{
lean_dec(v___x_3503_);
v___x_3505_ = lean_box(0);
v_isShared_3506_ = v_isSharedCheck_3510_;
goto v_resetjp_3504_;
}
v_resetjp_3504_:
{
lean_object* v___x_3508_; 
if (v_isShared_3506_ == 0)
{
lean_ctor_set_tag(v___x_3505_, 1);
lean_ctor_set(v___x_3505_, 0, v_a_3501_);
v___x_3508_ = v___x_3505_;
goto v_reusejp_3507_;
}
else
{
lean_object* v_reuseFailAlloc_3509_; 
v_reuseFailAlloc_3509_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3509_, 0, v_a_3501_);
v___x_3508_ = v_reuseFailAlloc_3509_;
goto v_reusejp_3507_;
}
v_reusejp_3507_:
{
return v___x_3508_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvSelector_registerAux_spec__3___redArg___boxed(lean_object* v_mutex_3512_, lean_object* v_k_3513_, lean_object* v___y_3514_){
_start:
{
lean_object* v_res_3515_; 
v_res_3515_ = l_Std_Mutex_atomically___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvSelector_registerAux_spec__3___redArg(v_mutex_3512_, v_k_3513_);
return v_res_3515_;
}
}
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvSelector_registerAux_spec__3(lean_object* v_00_u03b1_3516_, lean_object* v_00_u03b2_3517_, lean_object* v_mutex_3518_, lean_object* v_k_3519_){
_start:
{
lean_object* v___x_3521_; 
v___x_3521_ = l_Std_Mutex_atomically___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvSelector_registerAux_spec__3___redArg(v_mutex_3518_, v_k_3519_);
return v___x_3521_;
}
}
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvSelector_registerAux_spec__3___boxed(lean_object* v_00_u03b1_3522_, lean_object* v_00_u03b2_3523_, lean_object* v_mutex_3524_, lean_object* v_k_3525_, lean_object* v___y_3526_){
_start:
{
lean_object* v_res_3527_; 
v_res_3527_ = l_Std_Mutex_atomically___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvSelector_registerAux_spec__3(v_00_u03b1_3522_, v_00_u03b2_3523_, v_mutex_3524_, v_k_3525_);
return v_res_3527_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvSelector_registerAux___redArg___lam__0(lean_object* v___x_3528_){
_start:
{
lean_object* v___x_3530_; 
v___x_3530_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3530_, 0, v___x_3528_);
return v___x_3530_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvSelector_registerAux___redArg___lam__0___boxed(lean_object* v___x_3531_, lean_object* v___y_3532_){
_start:
{
lean_object* v_res_3533_; 
v_res_3533_ = l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvSelector_registerAux___redArg___lam__0(v___x_3531_);
return v_res_3533_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvSelector_registerAux___redArg___lam__2(uint8_t v_____do__lift_3534_, lean_object* v___y_3535_){
_start:
{
lean_object* v___x_3537_; lean_object* v_producers_3538_; lean_object* v_consumers_3539_; lean_object* v_capacity_3540_; lean_object* v_buf_3541_; lean_object* v_bufCount_3542_; lean_object* v_sendIdx_3543_; lean_object* v_recvIdx_3544_; uint8_t v_closed_3545_; lean_object* v___x_3547_; uint8_t v_isShared_3548_; uint8_t v_isSharedCheck_3568_; 
v___x_3537_ = lean_st_ref_get(v___y_3535_);
v_producers_3538_ = lean_ctor_get(v___x_3537_, 0);
v_consumers_3539_ = lean_ctor_get(v___x_3537_, 1);
v_capacity_3540_ = lean_ctor_get(v___x_3537_, 2);
v_buf_3541_ = lean_ctor_get(v___x_3537_, 3);
v_bufCount_3542_ = lean_ctor_get(v___x_3537_, 4);
v_sendIdx_3543_ = lean_ctor_get(v___x_3537_, 5);
v_recvIdx_3544_ = lean_ctor_get(v___x_3537_, 6);
v_closed_3545_ = lean_ctor_get_uint8(v___x_3537_, sizeof(void*)*7);
v_isSharedCheck_3568_ = !lean_is_exclusive(v___x_3537_);
if (v_isSharedCheck_3568_ == 0)
{
v___x_3547_ = v___x_3537_;
v_isShared_3548_ = v_isSharedCheck_3568_;
goto v_resetjp_3546_;
}
else
{
lean_inc(v_recvIdx_3544_);
lean_inc(v_sendIdx_3543_);
lean_inc(v_bufCount_3542_);
lean_inc(v_buf_3541_);
lean_inc(v_capacity_3540_);
lean_inc(v_consumers_3539_);
lean_inc(v_producers_3538_);
lean_dec(v___x_3537_);
v___x_3547_ = lean_box(0);
v_isShared_3548_ = v_isSharedCheck_3568_;
goto v_resetjp_3546_;
}
v_resetjp_3546_:
{
lean_object* v___x_3549_; 
v___x_3549_ = l_Std_Queue_dequeue_x3f___redArg(v_consumers_3539_);
if (lean_obj_tag(v___x_3549_) == 1)
{
lean_object* v_val_3550_; lean_object* v___x_3552_; uint8_t v_isShared_3553_; uint8_t v_isSharedCheck_3565_; 
v_val_3550_ = lean_ctor_get(v___x_3549_, 0);
v_isSharedCheck_3565_ = !lean_is_exclusive(v___x_3549_);
if (v_isSharedCheck_3565_ == 0)
{
v___x_3552_ = v___x_3549_;
v_isShared_3553_ = v_isSharedCheck_3565_;
goto v_resetjp_3551_;
}
else
{
lean_inc(v_val_3550_);
lean_dec(v___x_3549_);
v___x_3552_ = lean_box(0);
v_isShared_3553_ = v_isSharedCheck_3565_;
goto v_resetjp_3551_;
}
v_resetjp_3551_:
{
lean_object* v_fst_3554_; lean_object* v_snd_3555_; lean_object* v___x_3556_; lean_object* v___x_3558_; 
v_fst_3554_ = lean_ctor_get(v_val_3550_, 0);
lean_inc(v_fst_3554_);
v_snd_3555_ = lean_ctor_get(v_val_3550_, 1);
lean_inc(v_snd_3555_);
lean_dec(v_val_3550_);
v___x_3556_ = l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_Consumer_resolve___redArg(v_fst_3554_, v_____do__lift_3534_);
lean_dec(v_fst_3554_);
if (v_isShared_3548_ == 0)
{
lean_ctor_set(v___x_3547_, 1, v_snd_3555_);
v___x_3558_ = v___x_3547_;
goto v_reusejp_3557_;
}
else
{
lean_object* v_reuseFailAlloc_3564_; 
v_reuseFailAlloc_3564_ = lean_alloc_ctor(0, 7, 1);
lean_ctor_set(v_reuseFailAlloc_3564_, 0, v_producers_3538_);
lean_ctor_set(v_reuseFailAlloc_3564_, 1, v_snd_3555_);
lean_ctor_set(v_reuseFailAlloc_3564_, 2, v_capacity_3540_);
lean_ctor_set(v_reuseFailAlloc_3564_, 3, v_buf_3541_);
lean_ctor_set(v_reuseFailAlloc_3564_, 4, v_bufCount_3542_);
lean_ctor_set(v_reuseFailAlloc_3564_, 5, v_sendIdx_3543_);
lean_ctor_set(v_reuseFailAlloc_3564_, 6, v_recvIdx_3544_);
lean_ctor_set_uint8(v_reuseFailAlloc_3564_, sizeof(void*)*7, v_closed_3545_);
v___x_3558_ = v_reuseFailAlloc_3564_;
goto v_reusejp_3557_;
}
v_reusejp_3557_:
{
lean_object* v___x_3559_; lean_object* v___x_3560_; lean_object* v___x_3562_; 
v___x_3559_ = lean_box(0);
v___x_3560_ = lean_st_ref_swap(v___y_3535_, v___x_3558_);
lean_dec(v___x_3560_);
if (v_isShared_3553_ == 0)
{
lean_ctor_set_tag(v___x_3552_, 0);
lean_ctor_set(v___x_3552_, 0, v___x_3559_);
v___x_3562_ = v___x_3552_;
goto v_reusejp_3561_;
}
else
{
lean_object* v_reuseFailAlloc_3563_; 
v_reuseFailAlloc_3563_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3563_, 0, v___x_3559_);
v___x_3562_ = v_reuseFailAlloc_3563_;
goto v_reusejp_3561_;
}
v_reusejp_3561_:
{
return v___x_3562_;
}
}
}
}
else
{
lean_object* v___x_3566_; lean_object* v___x_3567_; 
lean_dec(v___x_3549_);
lean_del_object(v___x_3547_);
lean_dec(v_recvIdx_3544_);
lean_dec(v_sendIdx_3543_);
lean_dec(v_bufCount_3542_);
lean_dec_ref(v_buf_3541_);
lean_dec(v_capacity_3540_);
lean_dec_ref(v_producers_3538_);
v___x_3566_ = lean_box(0);
v___x_3567_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3567_, 0, v___x_3566_);
return v___x_3567_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvSelector_registerAux___redArg___lam__2___boxed(lean_object* v_____do__lift_3569_, lean_object* v___y_3570_, lean_object* v___y_3571_){
_start:
{
uint8_t v_____do__lift_8166__boxed_3572_; lean_object* v_res_3573_; 
v_____do__lift_8166__boxed_3572_ = lean_unbox(v_____do__lift_3569_);
v_res_3573_ = l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvSelector_registerAux___redArg___lam__2(v_____do__lift_8166__boxed_3572_, v___y_3570_);
lean_dec(v___y_3570_);
return v_res_3573_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvSelector_registerAux___redArg___lam__3(lean_object* v_waiter_3574_, lean_object* v___f_3575_, uint8_t v_____do__lift_3576_, lean_object* v___y_3577_){
_start:
{
if (v_____do__lift_3576_ == 0)
{
lean_object* v___x_3579_; lean_object* v___x_3580_; lean_object* v_producers_3581_; lean_object* v_consumers_3582_; lean_object* v_capacity_3583_; lean_object* v_buf_3584_; lean_object* v_bufCount_3585_; lean_object* v_sendIdx_3586_; lean_object* v_recvIdx_3587_; uint8_t v_closed_3588_; lean_object* v___x_3590_; uint8_t v_isShared_3591_; uint8_t v_isSharedCheck_3602_; 
v___x_3579_ = lean_io_promise_new();
v___x_3580_ = lean_st_ref_take(v___y_3577_);
v_producers_3581_ = lean_ctor_get(v___x_3580_, 0);
v_consumers_3582_ = lean_ctor_get(v___x_3580_, 1);
v_capacity_3583_ = lean_ctor_get(v___x_3580_, 2);
v_buf_3584_ = lean_ctor_get(v___x_3580_, 3);
v_bufCount_3585_ = lean_ctor_get(v___x_3580_, 4);
v_sendIdx_3586_ = lean_ctor_get(v___x_3580_, 5);
v_recvIdx_3587_ = lean_ctor_get(v___x_3580_, 6);
v_closed_3588_ = lean_ctor_get_uint8(v___x_3580_, sizeof(void*)*7);
v_isSharedCheck_3602_ = !lean_is_exclusive(v___x_3580_);
if (v_isSharedCheck_3602_ == 0)
{
v___x_3590_ = v___x_3580_;
v_isShared_3591_ = v_isSharedCheck_3602_;
goto v_resetjp_3589_;
}
else
{
lean_inc(v_recvIdx_3587_);
lean_inc(v_sendIdx_3586_);
lean_inc(v_bufCount_3585_);
lean_inc(v_buf_3584_);
lean_inc(v_capacity_3583_);
lean_inc(v_consumers_3582_);
lean_inc(v_producers_3581_);
lean_dec(v___x_3580_);
v___x_3590_ = lean_box(0);
v_isShared_3591_ = v_isSharedCheck_3602_;
goto v_resetjp_3589_;
}
v_resetjp_3589_:
{
lean_object* v___x_3592_; lean_object* v___x_3593_; lean_object* v___x_3594_; lean_object* v___x_3596_; 
v___x_3592_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3592_, 0, v_waiter_3574_);
lean_inc(v___x_3579_);
v___x_3593_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3593_, 0, v___x_3579_);
lean_ctor_set(v___x_3593_, 1, v___x_3592_);
v___x_3594_ = l_Std_Queue_enqueue___redArg(v___x_3593_, v_consumers_3582_);
if (v_isShared_3591_ == 0)
{
lean_ctor_set(v___x_3590_, 1, v___x_3594_);
v___x_3596_ = v___x_3590_;
goto v_reusejp_3595_;
}
else
{
lean_object* v_reuseFailAlloc_3601_; 
v_reuseFailAlloc_3601_ = lean_alloc_ctor(0, 7, 1);
lean_ctor_set(v_reuseFailAlloc_3601_, 0, v_producers_3581_);
lean_ctor_set(v_reuseFailAlloc_3601_, 1, v___x_3594_);
lean_ctor_set(v_reuseFailAlloc_3601_, 2, v_capacity_3583_);
lean_ctor_set(v_reuseFailAlloc_3601_, 3, v_buf_3584_);
lean_ctor_set(v_reuseFailAlloc_3601_, 4, v_bufCount_3585_);
lean_ctor_set(v_reuseFailAlloc_3601_, 5, v_sendIdx_3586_);
lean_ctor_set(v_reuseFailAlloc_3601_, 6, v_recvIdx_3587_);
lean_ctor_set_uint8(v_reuseFailAlloc_3601_, sizeof(void*)*7, v_closed_3588_);
v___x_3596_ = v_reuseFailAlloc_3601_;
goto v_reusejp_3595_;
}
v_reusejp_3595_:
{
lean_object* v___x_3597_; lean_object* v___x_3598_; lean_object* v___x_3599_; lean_object* v___x_3600_; 
v___x_3597_ = lean_st_ref_put(v___y_3577_, v___x_3596_);
v___x_3598_ = lean_io_promise_result_opt(v___x_3579_);
lean_dec(v___x_3579_);
v___x_3599_ = lean_unsigned_to_nat(0u);
v___x_3600_ = l_EIO_chainTask___redArg(v___x_3598_, v___f_3575_, v___x_3599_, v_____do__lift_3576_);
return v___x_3600_;
}
}
}
else
{
lean_object* v___x_3603_; lean_object* v_lose_3604_; lean_object* v___x_3605_; 
lean_dec_ref(v___f_3575_);
v___x_3603_ = lean_box(v_____do__lift_3576_);
v_lose_3604_ = lean_alloc_closure((void*)(l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvSelector_registerAux___redArg___lam__2___boxed), 3, 1);
lean_closure_set(v_lose_3604_, 0, v___x_3603_);
v___x_3605_ = l_Std_Async_Waiter_race___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvSelector_registerAux_spec__2___redArg(v_waiter_3574_, v_lose_3604_, v___y_3577_);
lean_dec_ref(v_waiter_3574_);
return v___x_3605_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvSelector_registerAux___redArg___lam__3___boxed(lean_object* v_waiter_3606_, lean_object* v___f_3607_, lean_object* v_____do__lift_3608_, lean_object* v___y_3609_, lean_object* v___y_3610_){
_start:
{
uint8_t v_____do__lift_8224__boxed_3611_; lean_object* v_res_3612_; 
v_____do__lift_8224__boxed_3611_ = lean_unbox(v_____do__lift_3608_);
v_res_3612_ = l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvSelector_registerAux___redArg___lam__3(v_waiter_3606_, v___f_3607_, v_____do__lift_8224__boxed_3611_, v___y_3609_);
lean_dec(v___y_3609_);
return v_res_3612_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvSelector_registerAux___redArg___lam__4(lean_object* v___f_3613_, lean_object* v___y_3614_){
_start:
{
lean_object* v___x_3616_; lean_object* v_bufCount_3617_; uint8_t v_closed_3618_; lean_object* v___x_3619_; uint8_t v___x_3620_; 
v___x_3616_ = lean_st_ref_get(v___y_3614_);
v_bufCount_3617_ = lean_ctor_get(v___x_3616_, 4);
lean_inc(v_bufCount_3617_);
v_closed_3618_ = lean_ctor_get_uint8(v___x_3616_, sizeof(void*)*7);
lean_dec(v___x_3616_);
v___x_3619_ = lean_unsigned_to_nat(0u);
v___x_3620_ = lean_nat_dec_eq(v_bufCount_3617_, v___x_3619_);
lean_dec(v_bufCount_3617_);
if (v___x_3620_ == 0)
{
uint8_t v___x_3621_; lean_object* v___x_3622_; lean_object* v___x_3623_; 
v___x_3621_ = 1;
v___x_3622_ = lean_box(v___x_3621_);
lean_inc(v___y_3614_);
v___x_3623_ = lean_apply_3(v___f_3613_, v___x_3622_, v___y_3614_, lean_box(0));
return v___x_3623_;
}
else
{
lean_object* v___x_3624_; lean_object* v___x_3625_; 
v___x_3624_ = lean_box(v_closed_3618_);
lean_inc(v___y_3614_);
v___x_3625_ = lean_apply_3(v___f_3613_, v___x_3624_, v___y_3614_, lean_box(0));
return v___x_3625_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvSelector_registerAux___redArg___lam__4___boxed(lean_object* v___f_3626_, lean_object* v___y_3627_, lean_object* v___y_3628_){
_start:
{
lean_object* v_res_3629_; 
v_res_3629_ = l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvSelector_registerAux___redArg___lam__4(v___f_3626_, v___y_3627_);
lean_dec(v___y_3627_);
return v_res_3629_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvSelector_registerAux___redArg___lam__1(lean_object* v_waiter_3632_, lean_object* v_ch_3633_, lean_object* v_x_3634_){
_start:
{
if (lean_obj_tag(v_x_3634_) == 0)
{
lean_object* v___x_3636_; lean_object* v___x_3637_; 
lean_dec_ref(v_ch_3633_);
lean_dec_ref(v_waiter_3632_);
v___x_3636_ = lean_box(0);
v___x_3637_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3637_, 0, v___x_3636_);
return v___x_3637_;
}
else
{
lean_object* v_val_3638_; uint8_t v___x_3639_; 
v_val_3638_ = lean_ctor_get(v_x_3634_, 0);
v___x_3639_ = lean_unbox(v_val_3638_);
if (v___x_3639_ == 0)
{
lean_object* v___f_3640_; lean_object* v___x_3641_; 
lean_dec_ref(v_ch_3633_);
v___f_3640_ = ((lean_object*)(l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvSelector_registerAux___redArg___lam__1___closed__0));
v___x_3641_ = l_Std_Async_Waiter_race___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvSelector_registerAux_spec__1___redArg(v_waiter_3632_, v___f_3640_);
lean_dec_ref(v_waiter_3632_);
return v___x_3641_;
}
else
{
lean_object* v___x_3642_; 
v___x_3642_ = l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvSelector_registerAux___redArg(v_ch_3633_, v_waiter_3632_);
return v___x_3642_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvSelector_registerAux___redArg___lam__1___boxed(lean_object* v_waiter_3643_, lean_object* v_ch_3644_, lean_object* v_x_3645_, lean_object* v___y_3646_){
_start:
{
lean_object* v_res_3647_; 
v_res_3647_ = l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvSelector_registerAux___redArg___lam__1(v_waiter_3643_, v_ch_3644_, v_x_3645_);
lean_dec(v_x_3645_);
return v_res_3647_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvSelector_registerAux___redArg(lean_object* v_ch_3648_, lean_object* v_waiter_3649_){
_start:
{
lean_object* v___f_3651_; lean_object* v___f_3652_; lean_object* v___f_3653_; lean_object* v___x_3654_; 
lean_inc_ref(v_ch_3648_);
lean_inc_ref(v_waiter_3649_);
v___f_3651_ = lean_alloc_closure((void*)(l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvSelector_registerAux___redArg___lam__1___boxed), 4, 2);
lean_closure_set(v___f_3651_, 0, v_waiter_3649_);
lean_closure_set(v___f_3651_, 1, v_ch_3648_);
v___f_3652_ = lean_alloc_closure((void*)(l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvSelector_registerAux___redArg___lam__3___boxed), 5, 2);
lean_closure_set(v___f_3652_, 0, v_waiter_3649_);
lean_closure_set(v___f_3652_, 1, v___f_3651_);
v___f_3653_ = lean_alloc_closure((void*)(l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvSelector_registerAux___redArg___lam__4___boxed), 3, 1);
lean_closure_set(v___f_3653_, 0, v___f_3652_);
v___x_3654_ = l_Std_Mutex_atomically___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvSelector_registerAux_spec__3___redArg(v_ch_3648_, v___f_3653_);
return v___x_3654_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvSelector_registerAux___redArg___boxed(lean_object* v_ch_3655_, lean_object* v_waiter_3656_, lean_object* v___y_3657_){
_start:
{
lean_object* v_res_3658_; 
v_res_3658_ = l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvSelector_registerAux___redArg(v_ch_3655_, v_waiter_3656_);
return v_res_3658_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvSelector_registerAux(lean_object* v_00_u03b1_3659_, lean_object* v_ch_3660_, lean_object* v_waiter_3661_){
_start:
{
lean_object* v___x_3663_; 
v___x_3663_ = l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvSelector_registerAux___redArg(v_ch_3660_, v_waiter_3661_);
return v___x_3663_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvSelector_registerAux___boxed(lean_object* v_00_u03b1_3664_, lean_object* v_ch_3665_, lean_object* v_waiter_3666_, lean_object* v___y_3667_){
_start:
{
lean_object* v_res_3668_; 
v_res_3668_ = l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvSelector_registerAux(v_00_u03b1_3664_, v_ch_3665_, v_waiter_3666_);
return v_res_3668_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_tryRecv_x27___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvSelector_spec__0___redArg___lam__0(lean_object* v_x_3669_, lean_object* v_x_3670_){
_start:
{
if (lean_obj_tag(v_x_3670_) == 0)
{
lean_object* v_a_3672_; lean_object* v___x_3674_; uint8_t v_isShared_3675_; uint8_t v_isSharedCheck_3680_; 
lean_dec_ref(v_x_3669_);
v_a_3672_ = lean_ctor_get(v_x_3670_, 0);
v_isSharedCheck_3680_ = !lean_is_exclusive(v_x_3670_);
if (v_isSharedCheck_3680_ == 0)
{
v___x_3674_ = v_x_3670_;
v_isShared_3675_ = v_isSharedCheck_3680_;
goto v_resetjp_3673_;
}
else
{
lean_inc(v_a_3672_);
lean_dec(v_x_3670_);
v___x_3674_ = lean_box(0);
v_isShared_3675_ = v_isSharedCheck_3680_;
goto v_resetjp_3673_;
}
v_resetjp_3673_:
{
lean_object* v___x_3677_; 
if (v_isShared_3675_ == 0)
{
v___x_3677_ = v___x_3674_;
goto v_reusejp_3676_;
}
else
{
lean_object* v_reuseFailAlloc_3679_; 
v_reuseFailAlloc_3679_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3679_, 0, v_a_3672_);
v___x_3677_ = v_reuseFailAlloc_3679_;
goto v_reusejp_3676_;
}
v_reusejp_3676_:
{
lean_object* v___x_3678_; 
v___x_3678_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3678_, 0, v___x_3677_);
return v___x_3678_;
}
}
}
else
{
lean_object* v___x_3681_; 
lean_dec_ref_known(v_x_3670_, 1);
v___x_3681_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3681_, 0, v_x_3669_);
return v___x_3681_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_tryRecv_x27___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvSelector_spec__0___redArg___lam__0___boxed(lean_object* v_x_3682_, lean_object* v_x_3683_, lean_object* v___y_3684_){
_start:
{
lean_object* v_res_3685_; 
v_res_3685_ = l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_tryRecv_x27___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvSelector_spec__0___redArg___lam__0(v_x_3682_, v_x_3683_);
return v_res_3685_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_tryRecv_x27___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvSelector_spec__0___redArg___lam__1(lean_object* v___x_3686_, uint8_t v___x_3687_, lean_object* v___f_3688_, lean_object* v_____r_3689_, lean_object* v_st_3690_, lean_object* v___y_3691_){
_start:
{
lean_object* v___x_3693_; lean_object* v___x_3694_; lean_object* v___x_3695_; 
v___x_3693_ = lean_st_ref_swap(v___y_3691_, v_st_3690_);
lean_dec(v___x_3693_);
v___x_3694_ = ((lean_object*)(l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_tryRecv_x27___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector_spec__0___redArg___lam__1___closed__1));
v___x_3695_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_3686_, v___x_3687_, v___x_3694_, v___f_3688_);
return v___x_3695_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_tryRecv_x27___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvSelector_spec__0___redArg___lam__1___boxed(lean_object* v___x_3696_, lean_object* v___x_3697_, lean_object* v___f_3698_, lean_object* v_____r_3699_, lean_object* v_st_3700_, lean_object* v___y_3701_, lean_object* v___y_3702_){
_start:
{
uint8_t v___x_6943__boxed_3703_; lean_object* v_res_3704_; 
v___x_6943__boxed_3703_ = lean_unbox(v___x_3697_);
v_res_3704_ = l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_tryRecv_x27___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvSelector_spec__0___redArg___lam__1(v___x_3696_, v___x_6943__boxed_3703_, v___f_3698_, v_____r_3699_, v_st_3700_, v___y_3701_);
lean_dec(v___y_3701_);
return v_res_3704_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_tryRecv_x27___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvSelector_spec__0___redArg___lam__2(lean_object* v_snd_3705_, lean_object* v_consumers_3706_, lean_object* v_capacity_3707_, lean_object* v_buf_3708_, lean_object* v___x_3709_, lean_object* v_sendIdx_3710_, lean_object* v___y_3711_, uint8_t v_closed_3712_, lean_object* v___f_3713_, lean_object* v___y_3714_, lean_object* v_x_3715_){
_start:
{
if (lean_obj_tag(v_x_3715_) == 0)
{
lean_object* v_a_3717_; lean_object* v___x_3719_; uint8_t v_isShared_3720_; uint8_t v_isSharedCheck_3725_; 
lean_dec_ref(v___f_3713_);
lean_dec(v___y_3711_);
lean_dec(v_sendIdx_3710_);
lean_dec(v___x_3709_);
lean_dec_ref(v_buf_3708_);
lean_dec(v_capacity_3707_);
lean_dec_ref(v_consumers_3706_);
lean_dec_ref(v_snd_3705_);
v_a_3717_ = lean_ctor_get(v_x_3715_, 0);
v_isSharedCheck_3725_ = !lean_is_exclusive(v_x_3715_);
if (v_isSharedCheck_3725_ == 0)
{
v___x_3719_ = v_x_3715_;
v_isShared_3720_ = v_isSharedCheck_3725_;
goto v_resetjp_3718_;
}
else
{
lean_inc(v_a_3717_);
lean_dec(v_x_3715_);
v___x_3719_ = lean_box(0);
v_isShared_3720_ = v_isSharedCheck_3725_;
goto v_resetjp_3718_;
}
v_resetjp_3718_:
{
lean_object* v___x_3722_; 
if (v_isShared_3720_ == 0)
{
v___x_3722_ = v___x_3719_;
goto v_reusejp_3721_;
}
else
{
lean_object* v_reuseFailAlloc_3724_; 
v_reuseFailAlloc_3724_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3724_, 0, v_a_3717_);
v___x_3722_ = v_reuseFailAlloc_3724_;
goto v_reusejp_3721_;
}
v_reusejp_3721_:
{
lean_object* v___x_3723_; 
v___x_3723_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3723_, 0, v___x_3722_);
return v___x_3723_;
}
}
}
else
{
lean_object* v___x_3726_; lean_object* v___x_3727_; lean_object* v___x_3728_; 
lean_dec_ref_known(v_x_3715_, 1);
v___x_3726_ = lean_alloc_ctor(0, 7, 1);
lean_ctor_set(v___x_3726_, 0, v_snd_3705_);
lean_ctor_set(v___x_3726_, 1, v_consumers_3706_);
lean_ctor_set(v___x_3726_, 2, v_capacity_3707_);
lean_ctor_set(v___x_3726_, 3, v_buf_3708_);
lean_ctor_set(v___x_3726_, 4, v___x_3709_);
lean_ctor_set(v___x_3726_, 5, v_sendIdx_3710_);
lean_ctor_set(v___x_3726_, 6, v___y_3711_);
lean_ctor_set_uint8(v___x_3726_, sizeof(void*)*7, v_closed_3712_);
v___x_3727_ = lean_box(0);
lean_inc(v___y_3714_);
v___x_3728_ = lean_apply_4(v___f_3713_, v___x_3727_, v___x_3726_, v___y_3714_, lean_box(0));
return v___x_3728_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_tryRecv_x27___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvSelector_spec__0___redArg___lam__2___boxed(lean_object* v_snd_3729_, lean_object* v_consumers_3730_, lean_object* v_capacity_3731_, lean_object* v_buf_3732_, lean_object* v___x_3733_, lean_object* v_sendIdx_3734_, lean_object* v___y_3735_, lean_object* v_closed_3736_, lean_object* v___f_3737_, lean_object* v___y_3738_, lean_object* v_x_3739_, lean_object* v___y_3740_){
_start:
{
uint8_t v_closed_boxed_3741_; lean_object* v_res_3742_; 
v_closed_boxed_3741_ = lean_unbox(v_closed_3736_);
v_res_3742_ = l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_tryRecv_x27___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvSelector_spec__0___redArg___lam__2(v_snd_3729_, v_consumers_3730_, v_capacity_3731_, v_buf_3732_, v___x_3733_, v_sendIdx_3734_, v___y_3735_, v_closed_boxed_3741_, v___f_3737_, v___y_3738_, v_x_3739_);
lean_dec(v___y_3738_);
return v_res_3742_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_tryRecv_x27___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvSelector_spec__0___redArg___lam__3(lean_object* v___x_3743_, uint8_t v___x_3744_, lean_object* v_bufCount_3745_, lean_object* v_producers_3746_, lean_object* v_consumers_3747_, lean_object* v_capacity_3748_, lean_object* v_buf_3749_, lean_object* v_sendIdx_3750_, uint8_t v_closed_3751_, lean_object* v___y_3752_, uint8_t v___x_3753_, lean_object* v_recvIdx_3754_, lean_object* v_x_3755_){
_start:
{
if (lean_obj_tag(v_x_3755_) == 0)
{
lean_object* v___x_3757_; 
lean_dec(v_sendIdx_3750_);
lean_dec_ref(v_buf_3749_);
lean_dec(v_capacity_3748_);
lean_dec_ref(v_consumers_3747_);
lean_dec_ref(v_producers_3746_);
lean_dec(v___x_3743_);
v___x_3757_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3757_, 0, v_x_3755_);
return v___x_3757_;
}
else
{
lean_object* v___f_3758_; lean_object* v___x_3759_; lean_object* v___f_3760_; lean_object* v___y_3762_; lean_object* v___x_3785_; lean_object* v___x_3786_; uint8_t v___x_3787_; 
v___f_3758_ = lean_alloc_closure((void*)(l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_tryRecv_x27___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvSelector_spec__0___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_3758_, 0, v_x_3755_);
v___x_3759_ = lean_box(v___x_3744_);
lean_inc_ref(v___f_3758_);
lean_inc(v___x_3743_);
v___f_3760_ = lean_alloc_closure((void*)(l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_tryRecv_x27___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvSelector_spec__0___redArg___lam__1___boxed), 7, 3);
lean_closure_set(v___f_3760_, 0, v___x_3743_);
lean_closure_set(v___f_3760_, 1, v___x_3759_);
lean_closure_set(v___f_3760_, 2, v___f_3758_);
v___x_3785_ = lean_unsigned_to_nat(1u);
v___x_3786_ = lean_nat_add(v_recvIdx_3754_, v___x_3785_);
v___x_3787_ = lean_nat_dec_eq(v___x_3786_, v_capacity_3748_);
if (v___x_3787_ == 0)
{
v___y_3762_ = v___x_3786_;
goto v___jp_3761_;
}
else
{
lean_dec(v___x_3786_);
lean_inc(v___x_3743_);
v___y_3762_ = v___x_3743_;
goto v___jp_3761_;
}
v___jp_3761_:
{
lean_object* v___x_3763_; lean_object* v___x_3764_; lean_object* v___x_3765_; lean_object* v___x_3766_; 
v___x_3763_ = lean_unsigned_to_nat(1u);
v___x_3764_ = lean_nat_sub(v_bufCount_3745_, v___x_3763_);
lean_inc(v___y_3762_);
lean_inc(v_sendIdx_3750_);
lean_inc(v___x_3764_);
lean_inc_ref(v_buf_3749_);
lean_inc(v_capacity_3748_);
lean_inc_ref(v_consumers_3747_);
lean_inc_ref(v_producers_3746_);
v___x_3765_ = lean_alloc_ctor(0, 7, 1);
lean_ctor_set(v___x_3765_, 0, v_producers_3746_);
lean_ctor_set(v___x_3765_, 1, v_consumers_3747_);
lean_ctor_set(v___x_3765_, 2, v_capacity_3748_);
lean_ctor_set(v___x_3765_, 3, v_buf_3749_);
lean_ctor_set(v___x_3765_, 4, v___x_3764_);
lean_ctor_set(v___x_3765_, 5, v_sendIdx_3750_);
lean_ctor_set(v___x_3765_, 6, v___y_3762_);
lean_ctor_set_uint8(v___x_3765_, sizeof(void*)*7, v_closed_3751_);
v___x_3766_ = l_Std_Queue_dequeue_x3f___redArg(v_producers_3746_);
if (lean_obj_tag(v___x_3766_) == 1)
{
lean_object* v_val_3767_; lean_object* v___x_3769_; uint8_t v_isShared_3770_; uint8_t v_isSharedCheck_3782_; 
lean_dec_ref_known(v___x_3765_, 7);
lean_dec_ref(v___f_3758_);
v_val_3767_ = lean_ctor_get(v___x_3766_, 0);
v_isSharedCheck_3782_ = !lean_is_exclusive(v___x_3766_);
if (v_isSharedCheck_3782_ == 0)
{
v___x_3769_ = v___x_3766_;
v_isShared_3770_ = v_isSharedCheck_3782_;
goto v_resetjp_3768_;
}
else
{
lean_inc(v_val_3767_);
lean_dec(v___x_3766_);
v___x_3769_ = lean_box(0);
v_isShared_3770_ = v_isSharedCheck_3782_;
goto v_resetjp_3768_;
}
v_resetjp_3768_:
{
lean_object* v_fst_3771_; lean_object* v_snd_3772_; lean_object* v___x_3773_; lean_object* v___f_3774_; lean_object* v___x_3775_; lean_object* v___x_3776_; lean_object* v___x_3778_; 
v_fst_3771_ = lean_ctor_get(v_val_3767_, 0);
lean_inc(v_fst_3771_);
v_snd_3772_ = lean_ctor_get(v_val_3767_, 1);
lean_inc(v_snd_3772_);
lean_dec(v_val_3767_);
v___x_3773_ = lean_box(v_closed_3751_);
lean_inc(v___y_3752_);
v___f_3774_ = lean_alloc_closure((void*)(l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_tryRecv_x27___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvSelector_spec__0___redArg___lam__2___boxed), 12, 10);
lean_closure_set(v___f_3774_, 0, v_snd_3772_);
lean_closure_set(v___f_3774_, 1, v_consumers_3747_);
lean_closure_set(v___f_3774_, 2, v_capacity_3748_);
lean_closure_set(v___f_3774_, 3, v_buf_3749_);
lean_closure_set(v___f_3774_, 4, v___x_3764_);
lean_closure_set(v___f_3774_, 5, v_sendIdx_3750_);
lean_closure_set(v___f_3774_, 6, v___y_3762_);
lean_closure_set(v___f_3774_, 7, v___x_3773_);
lean_closure_set(v___f_3774_, 8, v___f_3760_);
lean_closure_set(v___f_3774_, 9, v___y_3752_);
v___x_3775_ = lean_box(v___x_3753_);
v___x_3776_ = lean_io_promise_resolve(v___x_3775_, v_fst_3771_);
lean_dec(v_fst_3771_);
if (v_isShared_3770_ == 0)
{
lean_ctor_set(v___x_3769_, 0, v___x_3776_);
v___x_3778_ = v___x_3769_;
goto v_reusejp_3777_;
}
else
{
lean_object* v_reuseFailAlloc_3781_; 
v_reuseFailAlloc_3781_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3781_, 0, v___x_3776_);
v___x_3778_ = v_reuseFailAlloc_3781_;
goto v_reusejp_3777_;
}
v_reusejp_3777_:
{
lean_object* v___x_3779_; lean_object* v___x_3780_; 
v___x_3779_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3779_, 0, v___x_3778_);
v___x_3780_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_3743_, v___x_3744_, v___x_3779_, v___f_3774_);
return v___x_3780_;
}
}
}
else
{
lean_object* v___x_3783_; lean_object* v___x_3784_; 
lean_dec(v___x_3766_);
lean_dec(v___x_3764_);
lean_dec(v___y_3762_);
lean_dec_ref(v___f_3760_);
lean_dec(v_sendIdx_3750_);
lean_dec_ref(v_buf_3749_);
lean_dec(v_capacity_3748_);
lean_dec_ref(v_consumers_3747_);
v___x_3783_ = lean_box(0);
v___x_3784_ = l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_tryRecv_x27___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvSelector_spec__0___redArg___lam__1(v___x_3743_, v___x_3744_, v___f_3758_, v___x_3783_, v___x_3765_, v___y_3752_);
return v___x_3784_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_tryRecv_x27___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvSelector_spec__0___redArg___lam__3___boxed(lean_object* v___x_3788_, lean_object* v___x_3789_, lean_object* v_bufCount_3790_, lean_object* v_producers_3791_, lean_object* v_consumers_3792_, lean_object* v_capacity_3793_, lean_object* v_buf_3794_, lean_object* v_sendIdx_3795_, lean_object* v_closed_3796_, lean_object* v___y_3797_, lean_object* v___x_3798_, lean_object* v_recvIdx_3799_, lean_object* v_x_3800_, lean_object* v___y_3801_){
_start:
{
uint8_t v___x_7015__boxed_3802_; uint8_t v_closed_boxed_3803_; uint8_t v___x_7017__boxed_3804_; lean_object* v_res_3805_; 
v___x_7015__boxed_3802_ = lean_unbox(v___x_3789_);
v_closed_boxed_3803_ = lean_unbox(v_closed_3796_);
v___x_7017__boxed_3804_ = lean_unbox(v___x_3798_);
v_res_3805_ = l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_tryRecv_x27___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvSelector_spec__0___redArg___lam__3(v___x_3788_, v___x_7015__boxed_3802_, v_bufCount_3790_, v_producers_3791_, v_consumers_3792_, v_capacity_3793_, v_buf_3794_, v_sendIdx_3795_, v_closed_boxed_3803_, v___y_3797_, v___x_7017__boxed_3804_, v_recvIdx_3799_, v_x_3800_);
lean_dec(v_recvIdx_3799_);
lean_dec(v___y_3797_);
lean_dec(v_bufCount_3790_);
return v_res_3805_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_tryRecv_x27___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvSelector_spec__0___redArg___lam__4(lean_object* v___y_3806_, lean_object* v_x_3807_){
_start:
{
if (lean_obj_tag(v_x_3807_) == 0)
{
lean_object* v_a_3809_; lean_object* v___x_3811_; uint8_t v_isShared_3812_; uint8_t v_isSharedCheck_3817_; 
v_a_3809_ = lean_ctor_get(v_x_3807_, 0);
v_isSharedCheck_3817_ = !lean_is_exclusive(v_x_3807_);
if (v_isSharedCheck_3817_ == 0)
{
v___x_3811_ = v_x_3807_;
v_isShared_3812_ = v_isSharedCheck_3817_;
goto v_resetjp_3810_;
}
else
{
lean_inc(v_a_3809_);
lean_dec(v_x_3807_);
v___x_3811_ = lean_box(0);
v_isShared_3812_ = v_isSharedCheck_3817_;
goto v_resetjp_3810_;
}
v_resetjp_3810_:
{
lean_object* v___x_3814_; 
if (v_isShared_3812_ == 0)
{
v___x_3814_ = v___x_3811_;
goto v_reusejp_3813_;
}
else
{
lean_object* v_reuseFailAlloc_3816_; 
v_reuseFailAlloc_3816_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3816_, 0, v_a_3809_);
v___x_3814_ = v_reuseFailAlloc_3816_;
goto v_reusejp_3813_;
}
v_reusejp_3813_:
{
lean_object* v___x_3815_; 
v___x_3815_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3815_, 0, v___x_3814_);
return v___x_3815_;
}
}
}
else
{
lean_object* v_a_3818_; lean_object* v___x_3820_; uint8_t v_isShared_3821_; uint8_t v_isSharedCheck_3846_; 
v_a_3818_ = lean_ctor_get(v_x_3807_, 0);
v_isSharedCheck_3846_ = !lean_is_exclusive(v_x_3807_);
if (v_isSharedCheck_3846_ == 0)
{
v___x_3820_ = v_x_3807_;
v_isShared_3821_ = v_isSharedCheck_3846_;
goto v_resetjp_3819_;
}
else
{
lean_inc(v_a_3818_);
lean_dec(v_x_3807_);
v___x_3820_ = lean_box(0);
v_isShared_3821_ = v_isSharedCheck_3846_;
goto v_resetjp_3819_;
}
v_resetjp_3819_:
{
lean_object* v_producers_3822_; lean_object* v_consumers_3823_; lean_object* v_capacity_3824_; lean_object* v_buf_3825_; lean_object* v_bufCount_3826_; lean_object* v_sendIdx_3827_; lean_object* v_recvIdx_3828_; uint8_t v_closed_3829_; lean_object* v___x_3830_; uint8_t v___x_3831_; 
v_producers_3822_ = lean_ctor_get(v_a_3818_, 0);
lean_inc_ref(v_producers_3822_);
v_consumers_3823_ = lean_ctor_get(v_a_3818_, 1);
lean_inc_ref(v_consumers_3823_);
v_capacity_3824_ = lean_ctor_get(v_a_3818_, 2);
lean_inc(v_capacity_3824_);
v_buf_3825_ = lean_ctor_get(v_a_3818_, 3);
lean_inc_ref(v_buf_3825_);
v_bufCount_3826_ = lean_ctor_get(v_a_3818_, 4);
lean_inc(v_bufCount_3826_);
v_sendIdx_3827_ = lean_ctor_get(v_a_3818_, 5);
lean_inc(v_sendIdx_3827_);
v_recvIdx_3828_ = lean_ctor_get(v_a_3818_, 6);
lean_inc(v_recvIdx_3828_);
v_closed_3829_ = lean_ctor_get_uint8(v_a_3818_, sizeof(void*)*7);
lean_dec(v_a_3818_);
v___x_3830_ = lean_unsigned_to_nat(0u);
v___x_3831_ = lean_nat_dec_eq(v_bufCount_3826_, v___x_3830_);
if (v___x_3831_ == 0)
{
uint8_t v___x_3832_; lean_object* v___x_3833_; lean_object* v___x_3834_; lean_object* v___x_3835_; lean_object* v___f_3836_; lean_object* v___x_3837_; lean_object* v___x_3838_; lean_object* v___x_3839_; lean_object* v___x_3841_; 
v___x_3832_ = 1;
v___x_3833_ = lean_box(v___x_3831_);
v___x_3834_ = lean_box(v_closed_3829_);
v___x_3835_ = lean_box(v___x_3832_);
lean_inc(v_recvIdx_3828_);
lean_inc(v___y_3806_);
lean_inc_ref(v_buf_3825_);
v___f_3836_ = lean_alloc_closure((void*)(l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_tryRecv_x27___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvSelector_spec__0___redArg___lam__3___boxed), 14, 12);
lean_closure_set(v___f_3836_, 0, v___x_3830_);
lean_closure_set(v___f_3836_, 1, v___x_3833_);
lean_closure_set(v___f_3836_, 2, v_bufCount_3826_);
lean_closure_set(v___f_3836_, 3, v_producers_3822_);
lean_closure_set(v___f_3836_, 4, v_consumers_3823_);
lean_closure_set(v___f_3836_, 5, v_capacity_3824_);
lean_closure_set(v___f_3836_, 6, v_buf_3825_);
lean_closure_set(v___f_3836_, 7, v_sendIdx_3827_);
lean_closure_set(v___f_3836_, 8, v___x_3834_);
lean_closure_set(v___f_3836_, 9, v___y_3806_);
lean_closure_set(v___f_3836_, 10, v___x_3835_);
lean_closure_set(v___f_3836_, 11, v_recvIdx_3828_);
v___x_3837_ = lean_array_fget(v_buf_3825_, v_recvIdx_3828_);
lean_dec(v_recvIdx_3828_);
lean_dec_ref(v_buf_3825_);
v___x_3838_ = lean_box(0);
v___x_3839_ = lean_st_ref_swap(v___x_3837_, v___x_3838_);
lean_dec(v___x_3837_);
if (v_isShared_3821_ == 0)
{
lean_ctor_set(v___x_3820_, 0, v___x_3839_);
v___x_3841_ = v___x_3820_;
goto v_reusejp_3840_;
}
else
{
lean_object* v_reuseFailAlloc_3844_; 
v_reuseFailAlloc_3844_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3844_, 0, v___x_3839_);
v___x_3841_ = v_reuseFailAlloc_3844_;
goto v_reusejp_3840_;
}
v_reusejp_3840_:
{
lean_object* v___x_3842_; lean_object* v___x_3843_; 
v___x_3842_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3842_, 0, v___x_3841_);
v___x_3843_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_3830_, v___x_3831_, v___x_3842_, v___f_3836_);
return v___x_3843_;
}
}
else
{
lean_object* v___x_3845_; 
lean_dec(v_recvIdx_3828_);
lean_dec(v_sendIdx_3827_);
lean_dec(v_bufCount_3826_);
lean_dec_ref(v_buf_3825_);
lean_dec(v_capacity_3824_);
lean_dec_ref(v_consumers_3823_);
lean_dec_ref(v_producers_3822_);
lean_del_object(v___x_3820_);
v___x_3845_ = ((lean_object*)(l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_tryRecv_x27___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector_spec__0___redArg___lam__1___closed__3));
return v___x_3845_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_tryRecv_x27___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvSelector_spec__0___redArg___lam__4___boxed(lean_object* v___y_3847_, lean_object* v_x_3848_, lean_object* v___y_3849_){
_start:
{
lean_object* v_res_3850_; 
v_res_3850_ = l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_tryRecv_x27___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvSelector_spec__0___redArg___lam__4(v___y_3847_, v_x_3848_);
lean_dec(v___y_3847_);
return v_res_3850_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_tryRecv_x27___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvSelector_spec__0___redArg(lean_object* v___y_3851_){
_start:
{
lean_object* v___f_3853_; lean_object* v___x_3854_; uint8_t v___x_3855_; lean_object* v___x_3856_; lean_object* v___x_3857_; lean_object* v___x_3858_; lean_object* v___x_3859_; 
lean_inc(v___y_3851_);
v___f_3853_ = lean_alloc_closure((void*)(l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_tryRecv_x27___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvSelector_spec__0___redArg___lam__4___boxed), 3, 1);
lean_closure_set(v___f_3853_, 0, v___y_3851_);
v___x_3854_ = lean_unsigned_to_nat(0u);
v___x_3855_ = 0;
v___x_3856_ = lean_st_ref_get(v___y_3851_);
v___x_3857_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3857_, 0, v___x_3856_);
v___x_3858_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3858_, 0, v___x_3857_);
v___x_3859_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_3854_, v___x_3855_, v___x_3858_, v___f_3853_);
return v___x_3859_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_tryRecv_x27___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvSelector_spec__0___redArg___boxed(lean_object* v___y_3860_, lean_object* v___y_3861_){
_start:
{
lean_object* v_res_3862_; 
v_res_3862_ = l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_tryRecv_x27___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvSelector_spec__0___redArg(v___y_3860_);
lean_dec(v___y_3860_);
return v_res_3862_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_tryRecv_x27___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvSelector_spec__0(lean_object* v_00_u03b1_3863_, lean_object* v___y_3864_){
_start:
{
lean_object* v___x_3866_; 
v___x_3866_ = l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_tryRecv_x27___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvSelector_spec__0___redArg(v___y_3864_);
return v___x_3866_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_tryRecv_x27___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvSelector_spec__0___boxed(lean_object* v_00_u03b1_3867_, lean_object* v___y_3868_, lean_object* v___y_3869_){
_start:
{
lean_object* v_res_3870_; 
v_res_3870_ = l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_tryRecv_x27___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvSelector_spec__0(v_00_u03b1_3867_, v___y_3868_);
lean_dec(v___y_3868_);
return v_res_3870_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvSelector___redArg___lam__1(lean_object* v_ch_3871_, lean_object* v_x_3872_){
_start:
{
lean_object* v_val_3875_; lean_object* v___x_3877_; 
v___x_3877_ = l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvSelector_registerAux___redArg(v_ch_3871_, v_x_3872_);
if (lean_obj_tag(v___x_3877_) == 0)
{
lean_object* v_a_3878_; lean_object* v___x_3880_; uint8_t v_isShared_3881_; uint8_t v_isSharedCheck_3885_; 
v_a_3878_ = lean_ctor_get(v___x_3877_, 0);
v_isSharedCheck_3885_ = !lean_is_exclusive(v___x_3877_);
if (v_isSharedCheck_3885_ == 0)
{
v___x_3880_ = v___x_3877_;
v_isShared_3881_ = v_isSharedCheck_3885_;
goto v_resetjp_3879_;
}
else
{
lean_inc(v_a_3878_);
lean_dec(v___x_3877_);
v___x_3880_ = lean_box(0);
v_isShared_3881_ = v_isSharedCheck_3885_;
goto v_resetjp_3879_;
}
v_resetjp_3879_:
{
lean_object* v___x_3883_; 
if (v_isShared_3881_ == 0)
{
lean_ctor_set_tag(v___x_3880_, 1);
v___x_3883_ = v___x_3880_;
goto v_reusejp_3882_;
}
else
{
lean_object* v_reuseFailAlloc_3884_; 
v_reuseFailAlloc_3884_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3884_, 0, v_a_3878_);
v___x_3883_ = v_reuseFailAlloc_3884_;
goto v_reusejp_3882_;
}
v_reusejp_3882_:
{
v_val_3875_ = v___x_3883_;
goto v___jp_3874_;
}
}
}
else
{
lean_object* v_a_3886_; lean_object* v___x_3888_; uint8_t v_isShared_3889_; uint8_t v_isSharedCheck_3893_; 
v_a_3886_ = lean_ctor_get(v___x_3877_, 0);
v_isSharedCheck_3893_ = !lean_is_exclusive(v___x_3877_);
if (v_isSharedCheck_3893_ == 0)
{
v___x_3888_ = v___x_3877_;
v_isShared_3889_ = v_isSharedCheck_3893_;
goto v_resetjp_3887_;
}
else
{
lean_inc(v_a_3886_);
lean_dec(v___x_3877_);
v___x_3888_ = lean_box(0);
v_isShared_3889_ = v_isSharedCheck_3893_;
goto v_resetjp_3887_;
}
v_resetjp_3887_:
{
lean_object* v___x_3891_; 
if (v_isShared_3889_ == 0)
{
lean_ctor_set_tag(v___x_3888_, 0);
v___x_3891_ = v___x_3888_;
goto v_reusejp_3890_;
}
else
{
lean_object* v_reuseFailAlloc_3892_; 
v_reuseFailAlloc_3892_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3892_, 0, v_a_3886_);
v___x_3891_ = v_reuseFailAlloc_3892_;
goto v_reusejp_3890_;
}
v_reusejp_3890_:
{
v_val_3875_ = v___x_3891_;
goto v___jp_3874_;
}
}
}
v___jp_3874_:
{
lean_object* v___x_3876_; 
v___x_3876_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3876_, 0, v_val_3875_);
return v___x_3876_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvSelector___redArg___lam__1___boxed(lean_object* v_ch_3894_, lean_object* v_x_3895_, lean_object* v___y_3896_){
_start:
{
lean_object* v_res_3897_; 
v_res_3897_ = l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvSelector___redArg___lam__1(v_ch_3894_, v_x_3895_);
return v_res_3897_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvSelector___redArg___lam__0(lean_object* v___y_3898_, lean_object* v___f_3899_, lean_object* v_x_3900_){
_start:
{
if (lean_obj_tag(v_x_3900_) == 0)
{
lean_object* v_a_3902_; lean_object* v___x_3904_; uint8_t v_isShared_3905_; uint8_t v_isSharedCheck_3910_; 
lean_dec_ref(v___f_3899_);
v_a_3902_ = lean_ctor_get(v_x_3900_, 0);
v_isSharedCheck_3910_ = !lean_is_exclusive(v_x_3900_);
if (v_isSharedCheck_3910_ == 0)
{
v___x_3904_ = v_x_3900_;
v_isShared_3905_ = v_isSharedCheck_3910_;
goto v_resetjp_3903_;
}
else
{
lean_inc(v_a_3902_);
lean_dec(v_x_3900_);
v___x_3904_ = lean_box(0);
v_isShared_3905_ = v_isSharedCheck_3910_;
goto v_resetjp_3903_;
}
v_resetjp_3903_:
{
lean_object* v___x_3907_; 
if (v_isShared_3905_ == 0)
{
v___x_3907_ = v___x_3904_;
goto v_reusejp_3906_;
}
else
{
lean_object* v_reuseFailAlloc_3909_; 
v_reuseFailAlloc_3909_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3909_, 0, v_a_3902_);
v___x_3907_ = v_reuseFailAlloc_3909_;
goto v_reusejp_3906_;
}
v_reusejp_3906_:
{
lean_object* v___x_3908_; 
v___x_3908_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3908_, 0, v___x_3907_);
return v___x_3908_;
}
}
}
else
{
lean_object* v_a_3911_; uint8_t v___x_3912_; 
v_a_3911_ = lean_ctor_get(v_x_3900_, 0);
lean_inc(v_a_3911_);
lean_dec_ref_known(v_x_3900_, 1);
v___x_3912_ = lean_unbox(v_a_3911_);
lean_dec(v_a_3911_);
if (v___x_3912_ == 0)
{
lean_object* v___x_3913_; 
lean_dec_ref(v___f_3899_);
v___x_3913_ = ((lean_object*)(l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector___redArg___lam__7___closed__1));
return v___x_3913_;
}
else
{
lean_object* v___x_3914_; uint8_t v___x_3915_; lean_object* v___x_3916_; lean_object* v___x_3917_; 
v___x_3914_ = lean_unsigned_to_nat(0u);
v___x_3915_ = 0;
v___x_3916_ = l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_tryRecv_x27___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvSelector_spec__0___redArg(v___y_3898_);
v___x_3917_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_3914_, v___x_3915_, v___x_3916_, v___f_3899_);
return v___x_3917_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvSelector___redArg___lam__0___boxed(lean_object* v___y_3918_, lean_object* v___f_3919_, lean_object* v_x_3920_, lean_object* v___y_3921_){
_start:
{
lean_object* v_res_3922_; 
v_res_3922_ = l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvSelector___redArg___lam__0(v___y_3918_, v___f_3919_, v_x_3920_);
lean_dec(v___y_3918_);
return v_res_3922_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvSelector___redArg___lam__2(lean_object* v___x_3923_, lean_object* v_x_3924_){
_start:
{
uint8_t v___y_3927_; 
if (lean_obj_tag(v_x_3924_) == 0)
{
lean_object* v_a_3931_; lean_object* v___x_3933_; uint8_t v_isShared_3934_; uint8_t v_isSharedCheck_3939_; 
v_a_3931_ = lean_ctor_get(v_x_3924_, 0);
v_isSharedCheck_3939_ = !lean_is_exclusive(v_x_3924_);
if (v_isSharedCheck_3939_ == 0)
{
v___x_3933_ = v_x_3924_;
v_isShared_3934_ = v_isSharedCheck_3939_;
goto v_resetjp_3932_;
}
else
{
lean_inc(v_a_3931_);
lean_dec(v_x_3924_);
v___x_3933_ = lean_box(0);
v_isShared_3934_ = v_isSharedCheck_3939_;
goto v_resetjp_3932_;
}
v_resetjp_3932_:
{
lean_object* v___x_3936_; 
if (v_isShared_3934_ == 0)
{
v___x_3936_ = v___x_3933_;
goto v_reusejp_3935_;
}
else
{
lean_object* v_reuseFailAlloc_3938_; 
v_reuseFailAlloc_3938_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3938_, 0, v_a_3931_);
v___x_3936_ = v_reuseFailAlloc_3938_;
goto v_reusejp_3935_;
}
v_reusejp_3935_:
{
lean_object* v___x_3937_; 
v___x_3937_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3937_, 0, v___x_3936_);
return v___x_3937_;
}
}
}
else
{
lean_object* v_a_3940_; lean_object* v_bufCount_3941_; uint8_t v_closed_3942_; uint8_t v___x_3943_; 
v_a_3940_ = lean_ctor_get(v_x_3924_, 0);
lean_inc(v_a_3940_);
lean_dec_ref_known(v_x_3924_, 1);
v_bufCount_3941_ = lean_ctor_get(v_a_3940_, 4);
lean_inc(v_bufCount_3941_);
v_closed_3942_ = lean_ctor_get_uint8(v_a_3940_, sizeof(void*)*7);
lean_dec(v_a_3940_);
v___x_3943_ = lean_nat_dec_eq(v_bufCount_3941_, v___x_3923_);
lean_dec(v_bufCount_3941_);
if (v___x_3943_ == 0)
{
uint8_t v___x_3944_; 
v___x_3944_ = 1;
v___y_3927_ = v___x_3944_;
goto v___jp_3926_;
}
else
{
v___y_3927_ = v_closed_3942_;
goto v___jp_3926_;
}
}
v___jp_3926_:
{
lean_object* v___x_3928_; lean_object* v___x_3929_; lean_object* v___x_3930_; 
v___x_3928_ = lean_box(v___y_3927_);
v___x_3929_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3929_, 0, v___x_3928_);
v___x_3930_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3930_, 0, v___x_3929_);
return v___x_3930_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvSelector___redArg___lam__2___boxed(lean_object* v___x_3945_, lean_object* v_x_3946_, lean_object* v___y_3947_){
_start:
{
lean_object* v_res_3948_; 
v_res_3948_ = l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvSelector___redArg___lam__2(v___x_3945_, v_x_3946_);
lean_dec(v___x_3945_);
return v_res_3948_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvSelector___redArg___lam__3(lean_object* v___f_3951_, lean_object* v___y_3952_){
_start:
{
lean_object* v___f_3954_; lean_object* v___x_3955_; lean_object* v___f_3956_; uint8_t v___x_3957_; lean_object* v___x_3958_; lean_object* v___x_3959_; lean_object* v___x_3960_; lean_object* v___x_3961_; lean_object* v___x_3962_; 
lean_inc(v___y_3952_);
v___f_3954_ = lean_alloc_closure((void*)(l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvSelector___redArg___lam__0___boxed), 4, 2);
lean_closure_set(v___f_3954_, 0, v___y_3952_);
lean_closure_set(v___f_3954_, 1, v___f_3951_);
v___x_3955_ = lean_unsigned_to_nat(0u);
v___f_3956_ = ((lean_object*)(l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvSelector___redArg___lam__3___closed__0));
v___x_3957_ = 0;
v___x_3958_ = lean_st_ref_get(v___y_3952_);
v___x_3959_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3959_, 0, v___x_3958_);
v___x_3960_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3960_, 0, v___x_3959_);
v___x_3961_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_3955_, v___x_3957_, v___x_3960_, v___f_3956_);
v___x_3962_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_3955_, v___x_3957_, v___x_3961_, v___f_3954_);
return v___x_3962_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvSelector___redArg___lam__3___boxed(lean_object* v___f_3963_, lean_object* v___y_3964_, lean_object* v___y_3965_){
_start:
{
lean_object* v_res_3966_; 
v_res_3966_ = l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvSelector___redArg___lam__3(v___f_3963_, v___y_3964_);
lean_dec(v___y_3964_);
return v_res_3966_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvSelector___redArg___lam__4(lean_object* v_producers_3967_, lean_object* v_capacity_3968_, lean_object* v_buf_3969_, lean_object* v_bufCount_3970_, lean_object* v_sendIdx_3971_, lean_object* v_recvIdx_3972_, uint8_t v_closed_3973_, lean_object* v___y_3974_, lean_object* v_x_3975_){
_start:
{
if (lean_obj_tag(v_x_3975_) == 0)
{
lean_object* v_a_3977_; lean_object* v___x_3979_; uint8_t v_isShared_3980_; uint8_t v_isSharedCheck_3985_; 
lean_dec(v_recvIdx_3972_);
lean_dec(v_sendIdx_3971_);
lean_dec(v_bufCount_3970_);
lean_dec_ref(v_buf_3969_);
lean_dec(v_capacity_3968_);
lean_dec_ref(v_producers_3967_);
v_a_3977_ = lean_ctor_get(v_x_3975_, 0);
v_isSharedCheck_3985_ = !lean_is_exclusive(v_x_3975_);
if (v_isSharedCheck_3985_ == 0)
{
v___x_3979_ = v_x_3975_;
v_isShared_3980_ = v_isSharedCheck_3985_;
goto v_resetjp_3978_;
}
else
{
lean_inc(v_a_3977_);
lean_dec(v_x_3975_);
v___x_3979_ = lean_box(0);
v_isShared_3980_ = v_isSharedCheck_3985_;
goto v_resetjp_3978_;
}
v_resetjp_3978_:
{
lean_object* v___x_3982_; 
if (v_isShared_3980_ == 0)
{
v___x_3982_ = v___x_3979_;
goto v_reusejp_3981_;
}
else
{
lean_object* v_reuseFailAlloc_3984_; 
v_reuseFailAlloc_3984_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3984_, 0, v_a_3977_);
v___x_3982_ = v_reuseFailAlloc_3984_;
goto v_reusejp_3981_;
}
v_reusejp_3981_:
{
lean_object* v___x_3983_; 
v___x_3983_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3983_, 0, v___x_3982_);
return v___x_3983_;
}
}
}
else
{
lean_object* v_a_3986_; lean_object* v___x_3987_; lean_object* v___x_3988_; lean_object* v___x_3989_; 
v_a_3986_ = lean_ctor_get(v_x_3975_, 0);
lean_inc(v_a_3986_);
lean_dec_ref_known(v_x_3975_, 1);
v___x_3987_ = lean_alloc_ctor(0, 7, 1);
lean_ctor_set(v___x_3987_, 0, v_producers_3967_);
lean_ctor_set(v___x_3987_, 1, v_a_3986_);
lean_ctor_set(v___x_3987_, 2, v_capacity_3968_);
lean_ctor_set(v___x_3987_, 3, v_buf_3969_);
lean_ctor_set(v___x_3987_, 4, v_bufCount_3970_);
lean_ctor_set(v___x_3987_, 5, v_sendIdx_3971_);
lean_ctor_set(v___x_3987_, 6, v_recvIdx_3972_);
lean_ctor_set_uint8(v___x_3987_, sizeof(void*)*7, v_closed_3973_);
v___x_3988_ = lean_st_ref_swap(v___y_3974_, v___x_3987_);
lean_dec(v___x_3988_);
v___x_3989_ = ((lean_object*)(l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_tryRecv_x27___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector_spec__0___redArg___lam__1___closed__1));
return v___x_3989_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvSelector___redArg___lam__4___boxed(lean_object* v_producers_3990_, lean_object* v_capacity_3991_, lean_object* v_buf_3992_, lean_object* v_bufCount_3993_, lean_object* v_sendIdx_3994_, lean_object* v_recvIdx_3995_, lean_object* v_closed_3996_, lean_object* v___y_3997_, lean_object* v_x_3998_, lean_object* v___y_3999_){
_start:
{
uint8_t v_closed_boxed_4000_; lean_object* v_res_4001_; 
v_closed_boxed_4000_ = lean_unbox(v_closed_3996_);
v_res_4001_ = l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvSelector___redArg___lam__4(v_producers_3990_, v_capacity_3991_, v_buf_3992_, v_bufCount_3993_, v_sendIdx_3994_, v_recvIdx_3995_, v_closed_boxed_4000_, v___y_3997_, v_x_3998_);
lean_dec(v___y_3997_);
return v_res_4001_;
}
}
LEAN_EXPORT lean_object* l_List_filterAuxM___at___00Std_Queue_filterM___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvSelector_spec__1_spec__1___redArg___lam__0___boxed(lean_object* v_tail_4002_, lean_object* v_x_4003_, lean_object* v_head_4004_, lean_object* v_x_4005_, lean_object* v___y_4006_){
_start:
{
lean_object* v_res_4007_; 
v_res_4007_ = l_List_filterAuxM___at___00Std_Queue_filterM___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvSelector_spec__1_spec__1___redArg___lam__0(v_tail_4002_, v_x_4003_, v_head_4004_, v_x_4005_);
return v_res_4007_;
}
}
LEAN_EXPORT lean_object* l_List_filterAuxM___at___00Std_Queue_filterM___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvSelector_spec__1_spec__1___redArg(lean_object* v_x_4008_, lean_object* v_x_4009_){
_start:
{
if (lean_obj_tag(v_x_4008_) == 0)
{
lean_object* v___x_4011_; lean_object* v___x_4012_; 
v___x_4011_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4011_, 0, v_x_4009_);
v___x_4012_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4012_, 0, v___x_4011_);
return v___x_4012_;
}
else
{
lean_object* v_head_4013_; lean_object* v_tail_4014_; lean_object* v_waiter_4015_; lean_object* v___f_4016_; lean_object* v___x_4017_; uint8_t v___x_4018_; 
v_head_4013_ = lean_ctor_get(v_x_4008_, 0);
lean_inc(v_head_4013_);
v_tail_4014_ = lean_ctor_get(v_x_4008_, 1);
lean_inc(v_tail_4014_);
lean_dec_ref_known(v_x_4008_, 2);
v_waiter_4015_ = lean_ctor_get(v_head_4013_, 1);
lean_inc(v_waiter_4015_);
v___f_4016_ = lean_alloc_closure((void*)(l_List_filterAuxM___at___00Std_Queue_filterM___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvSelector_spec__1_spec__1___redArg___lam__0___boxed), 5, 3);
lean_closure_set(v___f_4016_, 0, v_tail_4014_);
lean_closure_set(v___f_4016_, 1, v_x_4009_);
lean_closure_set(v___f_4016_, 2, v_head_4013_);
v___x_4017_ = lean_unsigned_to_nat(0u);
v___x_4018_ = 0;
if (lean_obj_tag(v_waiter_4015_) == 0)
{
lean_object* v___x_4019_; lean_object* v___x_4020_; 
v___x_4019_ = ((lean_object*)(l_List_filterAuxM___at___00Std_Queue_filterM___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector_spec__3_spec__3___redArg___closed__1));
v___x_4020_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_4017_, v___x_4018_, v___x_4019_, v___f_4016_);
return v___x_4020_;
}
else
{
lean_object* v_val_4021_; lean_object* v___x_4023_; uint8_t v_isShared_4024_; uint8_t v_isSharedCheck_4034_; 
v_val_4021_ = lean_ctor_get(v_waiter_4015_, 0);
v_isSharedCheck_4034_ = !lean_is_exclusive(v_waiter_4015_);
if (v_isSharedCheck_4034_ == 0)
{
v___x_4023_ = v_waiter_4015_;
v_isShared_4024_ = v_isSharedCheck_4034_;
goto v_resetjp_4022_;
}
else
{
lean_inc(v_val_4021_);
lean_dec(v_waiter_4015_);
v___x_4023_ = lean_box(0);
v_isShared_4024_ = v_isSharedCheck_4034_;
goto v_resetjp_4022_;
}
v_resetjp_4022_:
{
lean_object* v_finished_4025_; lean_object* v___f_4026_; lean_object* v___x_4027_; lean_object* v___x_4029_; 
v_finished_4025_ = lean_ctor_get(v_val_4021_, 0);
lean_inc(v_finished_4025_);
lean_dec(v_val_4021_);
v___f_4026_ = ((lean_object*)(l_List_filterAuxM___at___00Std_Queue_filterM___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector_spec__3_spec__3___redArg___closed__2));
v___x_4027_ = lean_st_ref_get(v_finished_4025_);
lean_dec(v_finished_4025_);
if (v_isShared_4024_ == 0)
{
lean_ctor_set(v___x_4023_, 0, v___x_4027_);
v___x_4029_ = v___x_4023_;
goto v_reusejp_4028_;
}
else
{
lean_object* v_reuseFailAlloc_4033_; 
v_reuseFailAlloc_4033_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4033_, 0, v___x_4027_);
v___x_4029_ = v_reuseFailAlloc_4033_;
goto v_reusejp_4028_;
}
v_reusejp_4028_:
{
lean_object* v___x_4030_; lean_object* v___x_4031_; lean_object* v___x_4032_; 
v___x_4030_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4030_, 0, v___x_4029_);
v___x_4031_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_4017_, v___x_4018_, v___x_4030_, v___f_4026_);
v___x_4032_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_4017_, v___x_4018_, v___x_4031_, v___f_4016_);
return v___x_4032_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_filterAuxM___at___00Std_Queue_filterM___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvSelector_spec__1_spec__1___redArg___lam__0(lean_object* v_tail_4035_, lean_object* v_x_4036_, lean_object* v_head_4037_, lean_object* v_x_4038_){
_start:
{
if (lean_obj_tag(v_x_4038_) == 0)
{
lean_object* v_a_4040_; lean_object* v___x_4042_; uint8_t v_isShared_4043_; uint8_t v_isSharedCheck_4048_; 
lean_dec_ref(v_head_4037_);
lean_dec(v_x_4036_);
lean_dec(v_tail_4035_);
v_a_4040_ = lean_ctor_get(v_x_4038_, 0);
v_isSharedCheck_4048_ = !lean_is_exclusive(v_x_4038_);
if (v_isSharedCheck_4048_ == 0)
{
v___x_4042_ = v_x_4038_;
v_isShared_4043_ = v_isSharedCheck_4048_;
goto v_resetjp_4041_;
}
else
{
lean_inc(v_a_4040_);
lean_dec(v_x_4038_);
v___x_4042_ = lean_box(0);
v_isShared_4043_ = v_isSharedCheck_4048_;
goto v_resetjp_4041_;
}
v_resetjp_4041_:
{
lean_object* v___x_4045_; 
if (v_isShared_4043_ == 0)
{
v___x_4045_ = v___x_4042_;
goto v_reusejp_4044_;
}
else
{
lean_object* v_reuseFailAlloc_4047_; 
v_reuseFailAlloc_4047_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4047_, 0, v_a_4040_);
v___x_4045_ = v_reuseFailAlloc_4047_;
goto v_reusejp_4044_;
}
v_reusejp_4044_:
{
lean_object* v___x_4046_; 
v___x_4046_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4046_, 0, v___x_4045_);
return v___x_4046_;
}
}
}
else
{
lean_object* v_a_4049_; uint8_t v___x_4050_; 
v_a_4049_ = lean_ctor_get(v_x_4038_, 0);
lean_inc(v_a_4049_);
lean_dec_ref_known(v_x_4038_, 1);
v___x_4050_ = lean_unbox(v_a_4049_);
lean_dec(v_a_4049_);
if (v___x_4050_ == 0)
{
lean_object* v___x_4051_; 
lean_dec_ref(v_head_4037_);
v___x_4051_ = l_List_filterAuxM___at___00Std_Queue_filterM___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvSelector_spec__1_spec__1___redArg(v_tail_4035_, v_x_4036_);
return v___x_4051_;
}
else
{
lean_object* v___x_4052_; lean_object* v___x_4053_; 
v___x_4052_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4052_, 0, v_head_4037_);
lean_ctor_set(v___x_4052_, 1, v_x_4036_);
v___x_4053_ = l_List_filterAuxM___at___00Std_Queue_filterM___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvSelector_spec__1_spec__1___redArg(v_tail_4035_, v___x_4052_);
return v___x_4053_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_filterAuxM___at___00Std_Queue_filterM___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvSelector_spec__1_spec__1___redArg___boxed(lean_object* v_x_4054_, lean_object* v_x_4055_, lean_object* v___y_4056_){
_start:
{
lean_object* v_res_4057_; 
v_res_4057_ = l_List_filterAuxM___at___00Std_Queue_filterM___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvSelector_spec__1_spec__1___redArg(v_x_4054_, v_x_4055_);
return v_res_4057_;
}
}
LEAN_EXPORT lean_object* l_Std_Queue_filterM___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvSelector_spec__1___redArg___lam__0(lean_object* v_x_4058_){
_start:
{
if (lean_obj_tag(v_x_4058_) == 0)
{
lean_object* v___x_4060_; 
v___x_4060_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4060_, 0, v_x_4058_);
return v___x_4060_;
}
else
{
lean_object* v_a_4061_; lean_object* v___x_4063_; uint8_t v_isShared_4064_; uint8_t v_isSharedCheck_4070_; 
v_a_4061_ = lean_ctor_get(v_x_4058_, 0);
v_isSharedCheck_4070_ = !lean_is_exclusive(v_x_4058_);
if (v_isSharedCheck_4070_ == 0)
{
v___x_4063_ = v_x_4058_;
v_isShared_4064_ = v_isSharedCheck_4070_;
goto v_resetjp_4062_;
}
else
{
lean_inc(v_a_4061_);
lean_dec(v_x_4058_);
v___x_4063_ = lean_box(0);
v_isShared_4064_ = v_isSharedCheck_4070_;
goto v_resetjp_4062_;
}
v_resetjp_4062_:
{
lean_object* v___x_4065_; lean_object* v___x_4067_; 
v___x_4065_ = l_List_reverse___redArg(v_a_4061_);
if (v_isShared_4064_ == 0)
{
lean_ctor_set(v___x_4063_, 0, v___x_4065_);
v___x_4067_ = v___x_4063_;
goto v_reusejp_4066_;
}
else
{
lean_object* v_reuseFailAlloc_4069_; 
v_reuseFailAlloc_4069_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4069_, 0, v___x_4065_);
v___x_4067_ = v_reuseFailAlloc_4069_;
goto v_reusejp_4066_;
}
v_reusejp_4066_:
{
lean_object* v___x_4068_; 
v___x_4068_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4068_, 0, v___x_4067_);
return v___x_4068_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Queue_filterM___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvSelector_spec__1___redArg___lam__0___boxed(lean_object* v_x_4071_, lean_object* v___y_4072_){
_start:
{
lean_object* v_res_4073_; 
v_res_4073_ = l_Std_Queue_filterM___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvSelector_spec__1___redArg___lam__0(v_x_4071_);
return v_res_4073_;
}
}
LEAN_EXPORT lean_object* l_Std_Queue_filterM___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvSelector_spec__1___redArg___lam__2(lean_object* v_a_4074_, lean_object* v___x_4075_, lean_object* v_x_4076_){
_start:
{
if (lean_obj_tag(v_x_4076_) == 0)
{
lean_object* v_a_4078_; lean_object* v___x_4080_; uint8_t v_isShared_4081_; uint8_t v_isSharedCheck_4086_; 
lean_dec(v___x_4075_);
lean_dec(v_a_4074_);
v_a_4078_ = lean_ctor_get(v_x_4076_, 0);
v_isSharedCheck_4086_ = !lean_is_exclusive(v_x_4076_);
if (v_isSharedCheck_4086_ == 0)
{
v___x_4080_ = v_x_4076_;
v_isShared_4081_ = v_isSharedCheck_4086_;
goto v_resetjp_4079_;
}
else
{
lean_inc(v_a_4078_);
lean_dec(v_x_4076_);
v___x_4080_ = lean_box(0);
v_isShared_4081_ = v_isSharedCheck_4086_;
goto v_resetjp_4079_;
}
v_resetjp_4079_:
{
lean_object* v___x_4083_; 
if (v_isShared_4081_ == 0)
{
v___x_4083_ = v___x_4080_;
goto v_reusejp_4082_;
}
else
{
lean_object* v_reuseFailAlloc_4085_; 
v_reuseFailAlloc_4085_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4085_, 0, v_a_4078_);
v___x_4083_ = v_reuseFailAlloc_4085_;
goto v_reusejp_4082_;
}
v_reusejp_4082_:
{
lean_object* v___x_4084_; 
v___x_4084_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4084_, 0, v___x_4083_);
return v___x_4084_;
}
}
}
else
{
lean_object* v_a_4087_; lean_object* v___x_4089_; uint8_t v_isShared_4090_; uint8_t v_isSharedCheck_4103_; 
v_a_4087_ = lean_ctor_get(v_x_4076_, 0);
v_isSharedCheck_4103_ = !lean_is_exclusive(v_x_4076_);
if (v_isSharedCheck_4103_ == 0)
{
v___x_4089_ = v_x_4076_;
v_isShared_4090_ = v_isSharedCheck_4103_;
goto v_resetjp_4088_;
}
else
{
lean_inc(v_a_4087_);
lean_dec(v_x_4076_);
v___x_4089_ = lean_box(0);
v_isShared_4090_ = v_isSharedCheck_4103_;
goto v_resetjp_4088_;
}
v_resetjp_4088_:
{
uint8_t v___x_4091_; 
v___x_4091_ = l_List_isEmpty___redArg(v_a_4074_);
if (v___x_4091_ == 0)
{
lean_object* v___x_4092_; lean_object* v___x_4094_; 
lean_dec(v___x_4075_);
v___x_4092_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4092_, 0, v_a_4087_);
lean_ctor_set(v___x_4092_, 1, v_a_4074_);
if (v_isShared_4090_ == 0)
{
lean_ctor_set(v___x_4089_, 0, v___x_4092_);
v___x_4094_ = v___x_4089_;
goto v_reusejp_4093_;
}
else
{
lean_object* v_reuseFailAlloc_4096_; 
v_reuseFailAlloc_4096_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4096_, 0, v___x_4092_);
v___x_4094_ = v_reuseFailAlloc_4096_;
goto v_reusejp_4093_;
}
v_reusejp_4093_:
{
lean_object* v___x_4095_; 
v___x_4095_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4095_, 0, v___x_4094_);
return v___x_4095_;
}
}
else
{
lean_object* v___x_4097_; lean_object* v___x_4098_; lean_object* v___x_4100_; 
lean_dec(v_a_4074_);
v___x_4097_ = l_List_reverse___redArg(v_a_4087_);
v___x_4098_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4098_, 0, v___x_4075_);
lean_ctor_set(v___x_4098_, 1, v___x_4097_);
if (v_isShared_4090_ == 0)
{
lean_ctor_set(v___x_4089_, 0, v___x_4098_);
v___x_4100_ = v___x_4089_;
goto v_reusejp_4099_;
}
else
{
lean_object* v_reuseFailAlloc_4102_; 
v_reuseFailAlloc_4102_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4102_, 0, v___x_4098_);
v___x_4100_ = v_reuseFailAlloc_4102_;
goto v_reusejp_4099_;
}
v_reusejp_4099_:
{
lean_object* v___x_4101_; 
v___x_4101_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4101_, 0, v___x_4100_);
return v___x_4101_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Queue_filterM___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvSelector_spec__1___redArg___lam__2___boxed(lean_object* v_a_4104_, lean_object* v___x_4105_, lean_object* v_x_4106_, lean_object* v___y_4107_){
_start:
{
lean_object* v_res_4108_; 
v_res_4108_ = l_Std_Queue_filterM___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvSelector_spec__1___redArg___lam__2(v_a_4104_, v___x_4105_, v_x_4106_);
return v_res_4108_;
}
}
LEAN_EXPORT lean_object* l_Std_Queue_filterM___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvSelector_spec__1___redArg___lam__1(lean_object* v___x_4109_, lean_object* v_eList_4110_, lean_object* v___f_4111_, lean_object* v_x_4112_){
_start:
{
if (lean_obj_tag(v_x_4112_) == 0)
{
lean_object* v_a_4114_; lean_object* v___x_4116_; uint8_t v_isShared_4117_; uint8_t v_isSharedCheck_4122_; 
lean_dec_ref(v___f_4111_);
lean_dec(v_eList_4110_);
lean_dec(v___x_4109_);
v_a_4114_ = lean_ctor_get(v_x_4112_, 0);
v_isSharedCheck_4122_ = !lean_is_exclusive(v_x_4112_);
if (v_isSharedCheck_4122_ == 0)
{
v___x_4116_ = v_x_4112_;
v_isShared_4117_ = v_isSharedCheck_4122_;
goto v_resetjp_4115_;
}
else
{
lean_inc(v_a_4114_);
lean_dec(v_x_4112_);
v___x_4116_ = lean_box(0);
v_isShared_4117_ = v_isSharedCheck_4122_;
goto v_resetjp_4115_;
}
v_resetjp_4115_:
{
lean_object* v___x_4119_; 
if (v_isShared_4117_ == 0)
{
v___x_4119_ = v___x_4116_;
goto v_reusejp_4118_;
}
else
{
lean_object* v_reuseFailAlloc_4121_; 
v_reuseFailAlloc_4121_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4121_, 0, v_a_4114_);
v___x_4119_ = v_reuseFailAlloc_4121_;
goto v_reusejp_4118_;
}
v_reusejp_4118_:
{
lean_object* v___x_4120_; 
v___x_4120_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4120_, 0, v___x_4119_);
return v___x_4120_;
}
}
}
else
{
lean_object* v_a_4123_; lean_object* v___f_4124_; lean_object* v___x_4125_; uint8_t v___x_4126_; lean_object* v___x_4127_; lean_object* v___x_4128_; lean_object* v___x_4129_; 
v_a_4123_ = lean_ctor_get(v_x_4112_, 0);
lean_inc(v_a_4123_);
lean_dec_ref_known(v_x_4112_, 1);
lean_inc(v___x_4109_);
v___f_4124_ = lean_alloc_closure((void*)(l_Std_Queue_filterM___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvSelector_spec__1___redArg___lam__2___boxed), 4, 2);
lean_closure_set(v___f_4124_, 0, v_a_4123_);
lean_closure_set(v___f_4124_, 1, v___x_4109_);
v___x_4125_ = lean_unsigned_to_nat(0u);
v___x_4126_ = 0;
v___x_4127_ = l_List_filterAuxM___at___00Std_Queue_filterM___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvSelector_spec__1_spec__1___redArg(v_eList_4110_, v___x_4109_);
v___x_4128_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_4125_, v___x_4126_, v___x_4127_, v___f_4111_);
v___x_4129_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_4125_, v___x_4126_, v___x_4128_, v___f_4124_);
return v___x_4129_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Queue_filterM___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvSelector_spec__1___redArg___lam__1___boxed(lean_object* v___x_4130_, lean_object* v_eList_4131_, lean_object* v___f_4132_, lean_object* v_x_4133_, lean_object* v___y_4134_){
_start:
{
lean_object* v_res_4135_; 
v_res_4135_ = l_Std_Queue_filterM___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvSelector_spec__1___redArg___lam__1(v___x_4130_, v_eList_4131_, v___f_4132_, v_x_4133_);
return v_res_4135_;
}
}
LEAN_EXPORT lean_object* l_Std_Queue_filterM___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvSelector_spec__1___redArg(lean_object* v_q_4137_, lean_object* v___y_4138_){
_start:
{
lean_object* v_eList_4140_; lean_object* v_dList_4141_; lean_object* v___f_4142_; lean_object* v___x_4143_; lean_object* v___f_4144_; lean_object* v___x_4145_; uint8_t v___x_4146_; lean_object* v___x_4147_; lean_object* v___x_4148_; lean_object* v___x_4149_; 
v_eList_4140_ = lean_ctor_get(v_q_4137_, 0);
lean_inc(v_eList_4140_);
v_dList_4141_ = lean_ctor_get(v_q_4137_, 1);
lean_inc(v_dList_4141_);
lean_dec_ref(v_q_4137_);
v___f_4142_ = ((lean_object*)(l_Std_Queue_filterM___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvSelector_spec__1___redArg___closed__0));
v___x_4143_ = lean_box(0);
v___f_4144_ = lean_alloc_closure((void*)(l_Std_Queue_filterM___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvSelector_spec__1___redArg___lam__1___boxed), 5, 3);
lean_closure_set(v___f_4144_, 0, v___x_4143_);
lean_closure_set(v___f_4144_, 1, v_eList_4140_);
lean_closure_set(v___f_4144_, 2, v___f_4142_);
v___x_4145_ = lean_unsigned_to_nat(0u);
v___x_4146_ = 0;
v___x_4147_ = l_List_filterAuxM___at___00Std_Queue_filterM___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvSelector_spec__1_spec__1___redArg(v_dList_4141_, v___x_4143_);
v___x_4148_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_4145_, v___x_4146_, v___x_4147_, v___f_4142_);
v___x_4149_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_4145_, v___x_4146_, v___x_4148_, v___f_4144_);
return v___x_4149_;
}
}
LEAN_EXPORT lean_object* l_Std_Queue_filterM___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvSelector_spec__1___redArg___boxed(lean_object* v_q_4150_, lean_object* v___y_4151_, lean_object* v___y_4152_){
_start:
{
lean_object* v_res_4153_; 
v_res_4153_ = l_Std_Queue_filterM___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvSelector_spec__1___redArg(v_q_4150_, v___y_4151_);
lean_dec(v___y_4151_);
return v_res_4153_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvSelector___redArg___lam__5(lean_object* v___y_4154_, lean_object* v_x_4155_){
_start:
{
if (lean_obj_tag(v_x_4155_) == 0)
{
lean_object* v_a_4157_; lean_object* v___x_4159_; uint8_t v_isShared_4160_; uint8_t v_isSharedCheck_4165_; 
v_a_4157_ = lean_ctor_get(v_x_4155_, 0);
v_isSharedCheck_4165_ = !lean_is_exclusive(v_x_4155_);
if (v_isSharedCheck_4165_ == 0)
{
v___x_4159_ = v_x_4155_;
v_isShared_4160_ = v_isSharedCheck_4165_;
goto v_resetjp_4158_;
}
else
{
lean_inc(v_a_4157_);
lean_dec(v_x_4155_);
v___x_4159_ = lean_box(0);
v_isShared_4160_ = v_isSharedCheck_4165_;
goto v_resetjp_4158_;
}
v_resetjp_4158_:
{
lean_object* v___x_4162_; 
if (v_isShared_4160_ == 0)
{
v___x_4162_ = v___x_4159_;
goto v_reusejp_4161_;
}
else
{
lean_object* v_reuseFailAlloc_4164_; 
v_reuseFailAlloc_4164_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4164_, 0, v_a_4157_);
v___x_4162_ = v_reuseFailAlloc_4164_;
goto v_reusejp_4161_;
}
v_reusejp_4161_:
{
lean_object* v___x_4163_; 
v___x_4163_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4163_, 0, v___x_4162_);
return v___x_4163_;
}
}
}
else
{
lean_object* v_a_4166_; lean_object* v_producers_4167_; lean_object* v_consumers_4168_; lean_object* v_capacity_4169_; lean_object* v_buf_4170_; lean_object* v_bufCount_4171_; lean_object* v_sendIdx_4172_; lean_object* v_recvIdx_4173_; uint8_t v_closed_4174_; lean_object* v___x_4175_; lean_object* v___f_4176_; lean_object* v___x_4177_; uint8_t v___x_4178_; lean_object* v___x_4179_; lean_object* v___x_4180_; 
v_a_4166_ = lean_ctor_get(v_x_4155_, 0);
lean_inc(v_a_4166_);
lean_dec_ref_known(v_x_4155_, 1);
v_producers_4167_ = lean_ctor_get(v_a_4166_, 0);
lean_inc_ref(v_producers_4167_);
v_consumers_4168_ = lean_ctor_get(v_a_4166_, 1);
lean_inc_ref(v_consumers_4168_);
v_capacity_4169_ = lean_ctor_get(v_a_4166_, 2);
lean_inc(v_capacity_4169_);
v_buf_4170_ = lean_ctor_get(v_a_4166_, 3);
lean_inc_ref(v_buf_4170_);
v_bufCount_4171_ = lean_ctor_get(v_a_4166_, 4);
lean_inc(v_bufCount_4171_);
v_sendIdx_4172_ = lean_ctor_get(v_a_4166_, 5);
lean_inc(v_sendIdx_4172_);
v_recvIdx_4173_ = lean_ctor_get(v_a_4166_, 6);
lean_inc(v_recvIdx_4173_);
v_closed_4174_ = lean_ctor_get_uint8(v_a_4166_, sizeof(void*)*7);
lean_dec(v_a_4166_);
v___x_4175_ = lean_box(v_closed_4174_);
lean_inc(v___y_4154_);
v___f_4176_ = lean_alloc_closure((void*)(l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvSelector___redArg___lam__4___boxed), 10, 8);
lean_closure_set(v___f_4176_, 0, v_producers_4167_);
lean_closure_set(v___f_4176_, 1, v_capacity_4169_);
lean_closure_set(v___f_4176_, 2, v_buf_4170_);
lean_closure_set(v___f_4176_, 3, v_bufCount_4171_);
lean_closure_set(v___f_4176_, 4, v_sendIdx_4172_);
lean_closure_set(v___f_4176_, 5, v_recvIdx_4173_);
lean_closure_set(v___f_4176_, 6, v___x_4175_);
lean_closure_set(v___f_4176_, 7, v___y_4154_);
v___x_4177_ = lean_unsigned_to_nat(0u);
v___x_4178_ = 0;
v___x_4179_ = l_Std_Queue_filterM___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvSelector_spec__1___redArg(v_consumers_4168_, v___y_4154_);
v___x_4180_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_4177_, v___x_4178_, v___x_4179_, v___f_4176_);
return v___x_4180_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvSelector___redArg___lam__5___boxed(lean_object* v___y_4181_, lean_object* v_x_4182_, lean_object* v___y_4183_){
_start:
{
lean_object* v_res_4184_; 
v_res_4184_ = l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvSelector___redArg___lam__5(v___y_4181_, v_x_4182_);
lean_dec(v___y_4181_);
return v_res_4184_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvSelector___redArg___lam__6(lean_object* v___y_4185_){
_start:
{
lean_object* v___f_4187_; lean_object* v___x_4188_; uint8_t v___x_4189_; lean_object* v___x_4190_; lean_object* v___x_4191_; lean_object* v___x_4192_; lean_object* v___x_4193_; 
lean_inc(v___y_4185_);
v___f_4187_ = lean_alloc_closure((void*)(l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvSelector___redArg___lam__5___boxed), 3, 1);
lean_closure_set(v___f_4187_, 0, v___y_4185_);
v___x_4188_ = lean_unsigned_to_nat(0u);
v___x_4189_ = 0;
v___x_4190_ = lean_st_ref_get(v___y_4185_);
v___x_4191_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4191_, 0, v___x_4190_);
v___x_4192_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4192_, 0, v___x_4191_);
v___x_4193_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_4188_, v___x_4189_, v___x_4192_, v___f_4187_);
return v___x_4193_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvSelector___redArg___lam__6___boxed(lean_object* v___y_4194_, lean_object* v___y_4195_){
_start:
{
lean_object* v_res_4196_; 
v_res_4196_ = l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvSelector___redArg___lam__6(v___y_4194_);
lean_dec(v___y_4194_);
return v_res_4196_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvSelector___redArg(lean_object* v_ch_4200_){
_start:
{
lean_object* v___f_4201_; lean_object* v___f_4202_; lean_object* v___f_4203_; lean_object* v___x_4204_; lean_object* v___x_4205_; lean_object* v___x_4206_; 
lean_inc_ref_n(v_ch_4200_, 2);
v___f_4201_ = lean_alloc_closure((void*)(l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvSelector___redArg___lam__1___boxed), 3, 1);
lean_closure_set(v___f_4201_, 0, v_ch_4200_);
v___f_4202_ = ((lean_object*)(l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvSelector___redArg___closed__0));
v___f_4203_ = ((lean_object*)(l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvSelector___redArg___closed__1));
v___x_4204_ = lean_alloc_closure((void*)(l_Std_Mutex_atomically___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector_spec__2___boxed), 5, 4);
lean_closure_set(v___x_4204_, 0, lean_box(0));
lean_closure_set(v___x_4204_, 1, lean_box(0));
lean_closure_set(v___x_4204_, 2, v_ch_4200_);
lean_closure_set(v___x_4204_, 3, v___f_4202_);
v___x_4205_ = lean_alloc_closure((void*)(l_Std_Mutex_atomically___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector_spec__2___boxed), 5, 4);
lean_closure_set(v___x_4205_, 0, lean_box(0));
lean_closure_set(v___x_4205_, 1, lean_box(0));
lean_closure_set(v___x_4205_, 2, v_ch_4200_);
lean_closure_set(v___x_4205_, 3, v___f_4203_);
v___x_4206_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_4206_, 0, v___x_4204_);
lean_ctor_set(v___x_4206_, 1, v___f_4201_);
lean_ctor_set(v___x_4206_, 2, v___x_4205_);
return v___x_4206_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvSelector(lean_object* v_00_u03b1_4207_, lean_object* v_ch_4208_){
_start:
{
lean_object* v___x_4209_; 
v___x_4209_ = l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvSelector___redArg(v_ch_4208_);
return v___x_4209_;
}
}
LEAN_EXPORT lean_object* l_Std_Queue_filterM___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvSelector_spec__1(lean_object* v_00_u03b1_4210_, lean_object* v_q_4211_, lean_object* v___y_4212_){
_start:
{
lean_object* v___x_4214_; 
v___x_4214_ = l_Std_Queue_filterM___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvSelector_spec__1___redArg(v_q_4211_, v___y_4212_);
return v___x_4214_;
}
}
LEAN_EXPORT lean_object* l_Std_Queue_filterM___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvSelector_spec__1___boxed(lean_object* v_00_u03b1_4215_, lean_object* v_q_4216_, lean_object* v___y_4217_, lean_object* v___y_4218_){
_start:
{
lean_object* v_res_4219_; 
v_res_4219_ = l_Std_Queue_filterM___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvSelector_spec__1(v_00_u03b1_4215_, v_q_4216_, v___y_4217_);
lean_dec(v___y_4217_);
return v_res_4219_;
}
}
LEAN_EXPORT lean_object* l_List_filterAuxM___at___00Std_Queue_filterM___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvSelector_spec__1_spec__1(lean_object* v_00_u03b1_4220_, lean_object* v_x_4221_, lean_object* v_x_4222_, lean_object* v___y_4223_){
_start:
{
lean_object* v___x_4225_; 
v___x_4225_ = l_List_filterAuxM___at___00Std_Queue_filterM___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvSelector_spec__1_spec__1___redArg(v_x_4221_, v_x_4222_);
return v___x_4225_;
}
}
LEAN_EXPORT lean_object* l_List_filterAuxM___at___00Std_Queue_filterM___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvSelector_spec__1_spec__1___boxed(lean_object* v_00_u03b1_4226_, lean_object* v_x_4227_, lean_object* v_x_4228_, lean_object* v___y_4229_, lean_object* v___y_4230_){
_start:
{
lean_object* v_res_4231_; 
v_res_4231_ = l_List_filterAuxM___at___00Std_Queue_filterM___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvSelector_spec__1_spec__1(v_00_u03b1_4226_, v_x_4227_, v_x_4228_, v___y_4229_);
lean_dec(v___y_4229_);
return v_res_4231_;
}
}
LEAN_EXPORT lean_object* l_Std_CloseableChannel_Flavors_ctorIdx___redArg(lean_object* v_x_4232_){
_start:
{
switch(lean_obj_tag(v_x_4232_))
{
case 0:
{
lean_object* v___x_4233_; 
v___x_4233_ = lean_unsigned_to_nat(0u);
return v___x_4233_;
}
case 1:
{
lean_object* v___x_4234_; 
v___x_4234_ = lean_unsigned_to_nat(1u);
return v___x_4234_;
}
default: 
{
lean_object* v___x_4235_; 
v___x_4235_ = lean_unsigned_to_nat(2u);
return v___x_4235_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_CloseableChannel_Flavors_ctorIdx___redArg___boxed(lean_object* v_x_4236_){
_start:
{
lean_object* v_res_4237_; 
v_res_4237_ = l_Std_CloseableChannel_Flavors_ctorIdx___redArg(v_x_4236_);
lean_dec_ref(v_x_4236_);
return v_res_4237_;
}
}
LEAN_EXPORT lean_object* l_Std_CloseableChannel_Flavors_ctorIdx(lean_object* v_00_u03b1_4238_, lean_object* v_x_4239_){
_start:
{
lean_object* v___x_4240_; 
v___x_4240_ = l_Std_CloseableChannel_Flavors_ctorIdx___redArg(v_x_4239_);
return v___x_4240_;
}
}
LEAN_EXPORT lean_object* l_Std_CloseableChannel_Flavors_ctorIdx___boxed(lean_object* v_00_u03b1_4241_, lean_object* v_x_4242_){
_start:
{
lean_object* v_res_4243_; 
v_res_4243_ = l_Std_CloseableChannel_Flavors_ctorIdx(v_00_u03b1_4241_, v_x_4242_);
lean_dec_ref(v_x_4242_);
return v_res_4243_;
}
}
LEAN_EXPORT lean_object* l_Std_CloseableChannel_Flavors_ctorElim___redArg(lean_object* v_t_4244_, lean_object* v_k_4245_){
_start:
{
lean_object* v_ch_4246_; lean_object* v___x_4247_; 
v_ch_4246_ = lean_ctor_get(v_t_4244_, 0);
lean_inc_ref(v_ch_4246_);
lean_dec_ref(v_t_4244_);
v___x_4247_ = lean_apply_1(v_k_4245_, v_ch_4246_);
return v___x_4247_;
}
}
LEAN_EXPORT lean_object* l_Std_CloseableChannel_Flavors_ctorElim(lean_object* v_00_u03b1_4248_, lean_object* v_motive_4249_, lean_object* v_ctorIdx_4250_, lean_object* v_t_4251_, lean_object* v_h_4252_, lean_object* v_k_4253_){
_start:
{
lean_object* v___x_4254_; 
v___x_4254_ = l_Std_CloseableChannel_Flavors_ctorElim___redArg(v_t_4251_, v_k_4253_);
return v___x_4254_;
}
}
LEAN_EXPORT lean_object* l_Std_CloseableChannel_Flavors_ctorElim___boxed(lean_object* v_00_u03b1_4255_, lean_object* v_motive_4256_, lean_object* v_ctorIdx_4257_, lean_object* v_t_4258_, lean_object* v_h_4259_, lean_object* v_k_4260_){
_start:
{
lean_object* v_res_4261_; 
v_res_4261_ = l_Std_CloseableChannel_Flavors_ctorElim(v_00_u03b1_4255_, v_motive_4256_, v_ctorIdx_4257_, v_t_4258_, v_h_4259_, v_k_4260_);
lean_dec(v_ctorIdx_4257_);
return v_res_4261_;
}
}
LEAN_EXPORT lean_object* l_Std_CloseableChannel_Flavors_unbounded_elim___redArg(lean_object* v_t_4262_, lean_object* v___private_Std_Sync_Channel_0__Std_CloseableChannel_Flavors_unbounded_4263_){
_start:
{
lean_object* v___x_4264_; 
v___x_4264_ = l_Std_CloseableChannel_Flavors_ctorElim___redArg(v_t_4262_, v___private_Std_Sync_Channel_0__Std_CloseableChannel_Flavors_unbounded_4263_);
return v___x_4264_;
}
}
LEAN_EXPORT lean_object* l_Std_CloseableChannel_Flavors_unbounded_elim(lean_object* v_00_u03b1_4265_, lean_object* v_motive_4266_, lean_object* v_t_4267_, lean_object* v_h_4268_, lean_object* v___private_Std_Sync_Channel_0__Std_CloseableChannel_Flavors_unbounded_4269_){
_start:
{
lean_object* v___x_4270_; 
v___x_4270_ = l_Std_CloseableChannel_Flavors_ctorElim___redArg(v_t_4267_, v___private_Std_Sync_Channel_0__Std_CloseableChannel_Flavors_unbounded_4269_);
return v___x_4270_;
}
}
LEAN_EXPORT lean_object* l_Std_CloseableChannel_Flavors_zero_elim___redArg(lean_object* v_t_4271_, lean_object* v___private_Std_Sync_Channel_0__Std_CloseableChannel_Flavors_zero_4272_){
_start:
{
lean_object* v___x_4273_; 
v___x_4273_ = l_Std_CloseableChannel_Flavors_ctorElim___redArg(v_t_4271_, v___private_Std_Sync_Channel_0__Std_CloseableChannel_Flavors_zero_4272_);
return v___x_4273_;
}
}
LEAN_EXPORT lean_object* l_Std_CloseableChannel_Flavors_zero_elim(lean_object* v_00_u03b1_4274_, lean_object* v_motive_4275_, lean_object* v_t_4276_, lean_object* v_h_4277_, lean_object* v___private_Std_Sync_Channel_0__Std_CloseableChannel_Flavors_zero_4278_){
_start:
{
lean_object* v___x_4279_; 
v___x_4279_ = l_Std_CloseableChannel_Flavors_ctorElim___redArg(v_t_4276_, v___private_Std_Sync_Channel_0__Std_CloseableChannel_Flavors_zero_4278_);
return v___x_4279_;
}
}
LEAN_EXPORT lean_object* l_Std_CloseableChannel_Flavors_bounded_elim___redArg(lean_object* v_t_4280_, lean_object* v___private_Std_Sync_Channel_0__Std_CloseableChannel_Flavors_bounded_4281_){
_start:
{
lean_object* v___x_4282_; 
v___x_4282_ = l_Std_CloseableChannel_Flavors_ctorElim___redArg(v_t_4280_, v___private_Std_Sync_Channel_0__Std_CloseableChannel_Flavors_bounded_4281_);
return v___x_4282_;
}
}
LEAN_EXPORT lean_object* l_Std_CloseableChannel_Flavors_bounded_elim(lean_object* v_00_u03b1_4283_, lean_object* v_motive_4284_, lean_object* v_t_4285_, lean_object* v_h_4286_, lean_object* v___private_Std_Sync_Channel_0__Std_CloseableChannel_Flavors_bounded_4287_){
_start:
{
lean_object* v___x_4288_; 
v___x_4288_ = l_Std_CloseableChannel_Flavors_ctorElim___redArg(v_t_4285_, v___private_Std_Sync_Channel_0__Std_CloseableChannel_Flavors_bounded_4287_);
return v___x_4288_;
}
}
LEAN_EXPORT lean_object* l_Std_CloseableChannel_new___redArg(lean_object* v_capacity_4289_){
_start:
{
if (lean_obj_tag(v_capacity_4289_) == 0)
{
lean_object* v___x_4291_; lean_object* v___x_4292_; 
v___x_4291_ = l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_new___redArg();
v___x_4292_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4292_, 0, v___x_4291_);
return v___x_4292_;
}
else
{
lean_object* v_val_4293_; lean_object* v___x_4295_; uint8_t v_isShared_4296_; uint8_t v_isSharedCheck_4310_; 
v_val_4293_ = lean_ctor_get(v_capacity_4289_, 0);
v_isSharedCheck_4310_ = !lean_is_exclusive(v_capacity_4289_);
if (v_isSharedCheck_4310_ == 0)
{
v___x_4295_ = v_capacity_4289_;
v_isShared_4296_ = v_isSharedCheck_4310_;
goto v_resetjp_4294_;
}
else
{
lean_inc(v_val_4293_);
lean_dec(v_capacity_4289_);
v___x_4295_ = lean_box(0);
v_isShared_4296_ = v_isSharedCheck_4310_;
goto v_resetjp_4294_;
}
v_resetjp_4294_:
{
lean_object* v_zero_4297_; uint8_t v_isZero_4298_; 
v_zero_4297_ = lean_unsigned_to_nat(0u);
v_isZero_4298_ = lean_nat_dec_eq(v_val_4293_, v_zero_4297_);
if (v_isZero_4298_ == 1)
{
lean_object* v___x_4299_; lean_object* v___x_4301_; 
lean_dec(v_val_4293_);
v___x_4299_ = l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_new___redArg();
if (v_isShared_4296_ == 0)
{
lean_ctor_set(v___x_4295_, 0, v___x_4299_);
v___x_4301_ = v___x_4295_;
goto v_reusejp_4300_;
}
else
{
lean_object* v_reuseFailAlloc_4302_; 
v_reuseFailAlloc_4302_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4302_, 0, v___x_4299_);
v___x_4301_ = v_reuseFailAlloc_4302_;
goto v_reusejp_4300_;
}
v_reusejp_4300_:
{
return v___x_4301_;
}
}
else
{
lean_object* v_one_4303_; lean_object* v_n_4304_; lean_object* v___x_4305_; lean_object* v___x_4306_; lean_object* v___x_4308_; 
v_one_4303_ = lean_unsigned_to_nat(1u);
v_n_4304_ = lean_nat_sub(v_val_4293_, v_one_4303_);
lean_dec(v_val_4293_);
v___x_4305_ = lean_nat_add(v_n_4304_, v_one_4303_);
lean_dec(v_n_4304_);
v___x_4306_ = l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_new___redArg(v___x_4305_);
if (v_isShared_4296_ == 0)
{
lean_ctor_set_tag(v___x_4295_, 2);
lean_ctor_set(v___x_4295_, 0, v___x_4306_);
v___x_4308_ = v___x_4295_;
goto v_reusejp_4307_;
}
else
{
lean_object* v_reuseFailAlloc_4309_; 
v_reuseFailAlloc_4309_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4309_, 0, v___x_4306_);
v___x_4308_ = v_reuseFailAlloc_4309_;
goto v_reusejp_4307_;
}
v_reusejp_4307_:
{
return v___x_4308_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_CloseableChannel_new___redArg___boxed(lean_object* v_capacity_4311_, lean_object* v___y_4312_){
_start:
{
lean_object* v_res_4313_; 
v_res_4313_ = l_Std_CloseableChannel_new___redArg(v_capacity_4311_);
return v_res_4313_;
}
}
LEAN_EXPORT lean_object* l_Std_CloseableChannel_new(lean_object* v_00_u03b1_4314_, lean_object* v_capacity_4315_){
_start:
{
lean_object* v___x_4317_; 
v___x_4317_ = l_Std_CloseableChannel_new___redArg(v_capacity_4315_);
return v___x_4317_;
}
}
LEAN_EXPORT lean_object* l_Std_CloseableChannel_new___boxed(lean_object* v_00_u03b1_4318_, lean_object* v_capacity_4319_, lean_object* v___y_4320_){
_start:
{
lean_object* v_res_4321_; 
v_res_4321_ = l_Std_CloseableChannel_new(v_00_u03b1_4318_, v_capacity_4319_);
return v_res_4321_;
}
}
LEAN_EXPORT uint8_t l_Std_CloseableChannel_trySend___redArg(lean_object* v_ch_4322_, lean_object* v_v_4323_){
_start:
{
switch(lean_obj_tag(v_ch_4322_))
{
case 0:
{
lean_object* v_ch_4325_; uint8_t v___x_4326_; 
v_ch_4325_ = lean_ctor_get(v_ch_4322_, 0);
lean_inc_ref(v_ch_4325_);
lean_dec_ref_known(v_ch_4322_, 1);
v___x_4326_ = l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_trySend___redArg(v_ch_4325_, v_v_4323_);
return v___x_4326_;
}
case 1:
{
lean_object* v_ch_4327_; lean_object* v___x_4328_; uint8_t v___x_4329_; 
v_ch_4327_ = lean_ctor_get(v_ch_4322_, 0);
lean_inc_ref(v_ch_4327_);
lean_dec_ref_known(v_ch_4322_, 1);
v___x_4328_ = l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_trySend___redArg(v_ch_4327_, v_v_4323_);
v___x_4329_ = lean_unbox(v___x_4328_);
lean_dec(v___x_4328_);
return v___x_4329_;
}
default: 
{
lean_object* v_ch_4330_; lean_object* v___x_4331_; uint8_t v___x_4332_; 
v_ch_4330_ = lean_ctor_get(v_ch_4322_, 0);
lean_inc_ref(v_ch_4330_);
lean_dec_ref_known(v_ch_4322_, 1);
v___x_4331_ = l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_trySend___redArg(v_ch_4330_, v_v_4323_);
v___x_4332_ = lean_unbox(v___x_4331_);
lean_dec(v___x_4331_);
return v___x_4332_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_CloseableChannel_trySend___redArg___boxed(lean_object* v_ch_4333_, lean_object* v_v_4334_, lean_object* v___y_4335_){
_start:
{
uint8_t v_res_4336_; lean_object* v_r_4337_; 
v_res_4336_ = l_Std_CloseableChannel_trySend___redArg(v_ch_4333_, v_v_4334_);
v_r_4337_ = lean_box(v_res_4336_);
return v_r_4337_;
}
}
LEAN_EXPORT uint8_t l_Std_CloseableChannel_trySend(lean_object* v_00_u03b1_4338_, lean_object* v_ch_4339_, lean_object* v_v_4340_){
_start:
{
uint8_t v___x_4342_; 
v___x_4342_ = l_Std_CloseableChannel_trySend___redArg(v_ch_4339_, v_v_4340_);
return v___x_4342_;
}
}
LEAN_EXPORT lean_object* l_Std_CloseableChannel_trySend___boxed(lean_object* v_00_u03b1_4343_, lean_object* v_ch_4344_, lean_object* v_v_4345_, lean_object* v___y_4346_){
_start:
{
uint8_t v_res_4347_; lean_object* v_r_4348_; 
v_res_4347_ = l_Std_CloseableChannel_trySend(v_00_u03b1_4343_, v_ch_4344_, v_v_4345_);
v_r_4348_ = lean_box(v_res_4347_);
return v_r_4348_;
}
}
LEAN_EXPORT lean_object* l_Std_CloseableChannel_send___redArg(lean_object* v_ch_4349_, lean_object* v_v_4350_){
_start:
{
switch(lean_obj_tag(v_ch_4349_))
{
case 0:
{
lean_object* v_ch_4352_; lean_object* v___x_4353_; 
v_ch_4352_ = lean_ctor_get(v_ch_4349_, 0);
lean_inc_ref(v_ch_4352_);
lean_dec_ref_known(v_ch_4349_, 1);
v___x_4353_ = l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_send___redArg(v_ch_4352_, v_v_4350_);
return v___x_4353_;
}
case 1:
{
lean_object* v_ch_4354_; lean_object* v___x_4355_; 
v_ch_4354_ = lean_ctor_get(v_ch_4349_, 0);
lean_inc_ref(v_ch_4354_);
lean_dec_ref_known(v_ch_4349_, 1);
v___x_4355_ = l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_send___redArg(v_ch_4354_, v_v_4350_);
return v___x_4355_;
}
default: 
{
lean_object* v_ch_4356_; lean_object* v___x_4357_; 
v_ch_4356_ = lean_ctor_get(v_ch_4349_, 0);
lean_inc_ref(v_ch_4356_);
lean_dec_ref_known(v_ch_4349_, 1);
v___x_4357_ = l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_send___redArg(v_ch_4356_, v_v_4350_);
return v___x_4357_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_CloseableChannel_send___redArg___boxed(lean_object* v_ch_4358_, lean_object* v_v_4359_, lean_object* v___y_4360_){
_start:
{
lean_object* v_res_4361_; 
v_res_4361_ = l_Std_CloseableChannel_send___redArg(v_ch_4358_, v_v_4359_);
return v_res_4361_;
}
}
LEAN_EXPORT lean_object* l_Std_CloseableChannel_send(lean_object* v_00_u03b1_4362_, lean_object* v_ch_4363_, lean_object* v_v_4364_){
_start:
{
lean_object* v___x_4366_; 
v___x_4366_ = l_Std_CloseableChannel_send___redArg(v_ch_4363_, v_v_4364_);
return v___x_4366_;
}
}
LEAN_EXPORT lean_object* l_Std_CloseableChannel_send___boxed(lean_object* v_00_u03b1_4367_, lean_object* v_ch_4368_, lean_object* v_v_4369_, lean_object* v___y_4370_){
_start:
{
lean_object* v_res_4371_; 
v_res_4371_ = l_Std_CloseableChannel_send(v_00_u03b1_4367_, v_ch_4368_, v_v_4369_);
return v_res_4371_;
}
}
LEAN_EXPORT lean_object* l_Std_CloseableChannel_close___redArg(lean_object* v_ch_4372_){
_start:
{
switch(lean_obj_tag(v_ch_4372_))
{
case 0:
{
lean_object* v_ch_4374_; lean_object* v___x_4375_; 
v_ch_4374_ = lean_ctor_get(v_ch_4372_, 0);
lean_inc_ref(v_ch_4374_);
lean_dec_ref_known(v_ch_4372_, 1);
v___x_4375_ = l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_close___redArg(v_ch_4374_);
return v___x_4375_;
}
case 1:
{
lean_object* v_ch_4376_; lean_object* v___x_4377_; 
v_ch_4376_ = lean_ctor_get(v_ch_4372_, 0);
lean_inc_ref(v_ch_4376_);
lean_dec_ref_known(v_ch_4372_, 1);
v___x_4377_ = l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_close___redArg(v_ch_4376_);
return v___x_4377_;
}
default: 
{
lean_object* v_ch_4378_; lean_object* v___x_4379_; 
v_ch_4378_ = lean_ctor_get(v_ch_4372_, 0);
lean_inc_ref(v_ch_4378_);
lean_dec_ref_known(v_ch_4372_, 1);
v___x_4379_ = l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_close___redArg(v_ch_4378_);
return v___x_4379_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_CloseableChannel_close___redArg___boxed(lean_object* v_ch_4380_, lean_object* v___y_4381_){
_start:
{
lean_object* v_res_4382_; 
v_res_4382_ = l_Std_CloseableChannel_close___redArg(v_ch_4380_);
return v_res_4382_;
}
}
LEAN_EXPORT lean_object* l_Std_CloseableChannel_close(lean_object* v_00_u03b1_4383_, lean_object* v_ch_4384_){
_start:
{
lean_object* v___x_4386_; 
v___x_4386_ = l_Std_CloseableChannel_close___redArg(v_ch_4384_);
return v___x_4386_;
}
}
LEAN_EXPORT lean_object* l_Std_CloseableChannel_close___boxed(lean_object* v_00_u03b1_4387_, lean_object* v_ch_4388_, lean_object* v___y_4389_){
_start:
{
lean_object* v_res_4390_; 
v_res_4390_ = l_Std_CloseableChannel_close(v_00_u03b1_4387_, v_ch_4388_);
return v_res_4390_;
}
}
LEAN_EXPORT uint8_t l_Std_CloseableChannel_isClosed___redArg(lean_object* v_ch_4391_){
_start:
{
switch(lean_obj_tag(v_ch_4391_))
{
case 0:
{
lean_object* v_ch_4393_; lean_object* v___x_4394_; uint8_t v___x_4395_; 
v_ch_4393_ = lean_ctor_get(v_ch_4391_, 0);
lean_inc_ref(v_ch_4393_);
lean_dec_ref_known(v_ch_4391_, 1);
v___x_4394_ = l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_isClosed___redArg(v_ch_4393_);
v___x_4395_ = lean_unbox(v___x_4394_);
lean_dec(v___x_4394_);
return v___x_4395_;
}
case 1:
{
lean_object* v_ch_4396_; lean_object* v___x_4397_; uint8_t v___x_4398_; 
v_ch_4396_ = lean_ctor_get(v_ch_4391_, 0);
lean_inc_ref(v_ch_4396_);
lean_dec_ref_known(v_ch_4391_, 1);
v___x_4397_ = l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_isClosed___redArg(v_ch_4396_);
v___x_4398_ = lean_unbox(v___x_4397_);
lean_dec(v___x_4397_);
return v___x_4398_;
}
default: 
{
lean_object* v_ch_4399_; lean_object* v___x_4400_; uint8_t v___x_4401_; 
v_ch_4399_ = lean_ctor_get(v_ch_4391_, 0);
lean_inc_ref(v_ch_4399_);
lean_dec_ref_known(v_ch_4391_, 1);
v___x_4400_ = l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_isClosed___redArg(v_ch_4399_);
v___x_4401_ = lean_unbox(v___x_4400_);
lean_dec(v___x_4400_);
return v___x_4401_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_CloseableChannel_isClosed___redArg___boxed(lean_object* v_ch_4402_, lean_object* v___y_4403_){
_start:
{
uint8_t v_res_4404_; lean_object* v_r_4405_; 
v_res_4404_ = l_Std_CloseableChannel_isClosed___redArg(v_ch_4402_);
v_r_4405_ = lean_box(v_res_4404_);
return v_r_4405_;
}
}
LEAN_EXPORT uint8_t l_Std_CloseableChannel_isClosed(lean_object* v_00_u03b1_4406_, lean_object* v_ch_4407_){
_start:
{
uint8_t v___x_4409_; 
v___x_4409_ = l_Std_CloseableChannel_isClosed___redArg(v_ch_4407_);
return v___x_4409_;
}
}
LEAN_EXPORT lean_object* l_Std_CloseableChannel_isClosed___boxed(lean_object* v_00_u03b1_4410_, lean_object* v_ch_4411_, lean_object* v___y_4412_){
_start:
{
uint8_t v_res_4413_; lean_object* v_r_4414_; 
v_res_4413_ = l_Std_CloseableChannel_isClosed(v_00_u03b1_4410_, v_ch_4411_);
v_r_4414_ = lean_box(v_res_4413_);
return v_r_4414_;
}
}
LEAN_EXPORT lean_object* l_Std_CloseableChannel_tryRecv___redArg(lean_object* v_ch_4415_){
_start:
{
switch(lean_obj_tag(v_ch_4415_))
{
case 0:
{
lean_object* v_ch_4417_; lean_object* v___x_4418_; 
v_ch_4417_ = lean_ctor_get(v_ch_4415_, 0);
lean_inc_ref(v_ch_4417_);
lean_dec_ref_known(v_ch_4415_, 1);
v___x_4418_ = l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_tryRecv___redArg(v_ch_4417_);
return v___x_4418_;
}
case 1:
{
lean_object* v_ch_4419_; lean_object* v___x_4420_; 
v_ch_4419_ = lean_ctor_get(v_ch_4415_, 0);
lean_inc_ref(v_ch_4419_);
lean_dec_ref_known(v_ch_4415_, 1);
v___x_4420_ = l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_tryRecv___redArg(v_ch_4419_);
return v___x_4420_;
}
default: 
{
lean_object* v_ch_4421_; lean_object* v___x_4422_; 
v_ch_4421_ = lean_ctor_get(v_ch_4415_, 0);
lean_inc_ref(v_ch_4421_);
lean_dec_ref_known(v_ch_4415_, 1);
v___x_4422_ = l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_tryRecv___redArg(v_ch_4421_);
return v___x_4422_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_CloseableChannel_tryRecv___redArg___boxed(lean_object* v_ch_4423_, lean_object* v___y_4424_){
_start:
{
lean_object* v_res_4425_; 
v_res_4425_ = l_Std_CloseableChannel_tryRecv___redArg(v_ch_4423_);
return v_res_4425_;
}
}
LEAN_EXPORT lean_object* l_Std_CloseableChannel_tryRecv(lean_object* v_00_u03b1_4426_, lean_object* v_ch_4427_){
_start:
{
lean_object* v___x_4429_; 
v___x_4429_ = l_Std_CloseableChannel_tryRecv___redArg(v_ch_4427_);
return v___x_4429_;
}
}
LEAN_EXPORT lean_object* l_Std_CloseableChannel_tryRecv___boxed(lean_object* v_00_u03b1_4430_, lean_object* v_ch_4431_, lean_object* v___y_4432_){
_start:
{
lean_object* v_res_4433_; 
v_res_4433_ = l_Std_CloseableChannel_tryRecv(v_00_u03b1_4430_, v_ch_4431_);
return v_res_4433_;
}
}
LEAN_EXPORT lean_object* l_Std_CloseableChannel_recv___redArg(lean_object* v_ch_4434_){
_start:
{
switch(lean_obj_tag(v_ch_4434_))
{
case 0:
{
lean_object* v_ch_4436_; lean_object* v___x_4437_; 
v_ch_4436_ = lean_ctor_get(v_ch_4434_, 0);
lean_inc_ref(v_ch_4436_);
lean_dec_ref_known(v_ch_4434_, 1);
v___x_4437_ = l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recv___redArg(v_ch_4436_);
return v___x_4437_;
}
case 1:
{
lean_object* v_ch_4438_; lean_object* v___x_4439_; 
v_ch_4438_ = lean_ctor_get(v_ch_4434_, 0);
lean_inc_ref(v_ch_4438_);
lean_dec_ref_known(v_ch_4434_, 1);
v___x_4439_ = l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_recv___redArg(v_ch_4438_);
return v___x_4439_;
}
default: 
{
lean_object* v_ch_4440_; lean_object* v___x_4441_; 
v_ch_4440_ = lean_ctor_get(v_ch_4434_, 0);
lean_inc_ref(v_ch_4440_);
lean_dec_ref_known(v_ch_4434_, 1);
v___x_4441_ = l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recv___redArg(v_ch_4440_);
return v___x_4441_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_CloseableChannel_recv___redArg___boxed(lean_object* v_ch_4442_, lean_object* v___y_4443_){
_start:
{
lean_object* v_res_4444_; 
v_res_4444_ = l_Std_CloseableChannel_recv___redArg(v_ch_4442_);
return v_res_4444_;
}
}
LEAN_EXPORT lean_object* l_Std_CloseableChannel_recv(lean_object* v_00_u03b1_4445_, lean_object* v_ch_4446_){
_start:
{
lean_object* v___x_4448_; 
v___x_4448_ = l_Std_CloseableChannel_recv___redArg(v_ch_4446_);
return v___x_4448_;
}
}
LEAN_EXPORT lean_object* l_Std_CloseableChannel_recv___boxed(lean_object* v_00_u03b1_4449_, lean_object* v_ch_4450_, lean_object* v___y_4451_){
_start:
{
lean_object* v_res_4452_; 
v_res_4452_ = l_Std_CloseableChannel_recv(v_00_u03b1_4449_, v_ch_4450_);
return v_res_4452_;
}
}
LEAN_EXPORT lean_object* l_Std_CloseableChannel_recvSelector___redArg(lean_object* v_ch_4453_){
_start:
{
switch(lean_obj_tag(v_ch_4453_))
{
case 0:
{
lean_object* v_ch_4454_; lean_object* v___x_4455_; 
v_ch_4454_ = lean_ctor_get(v_ch_4453_, 0);
lean_inc_ref(v_ch_4454_);
lean_dec_ref_known(v_ch_4453_, 1);
v___x_4455_ = l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector___redArg(v_ch_4454_);
return v___x_4455_;
}
case 1:
{
lean_object* v_ch_4456_; lean_object* v___x_4457_; 
v_ch_4456_ = lean_ctor_get(v_ch_4453_, 0);
lean_inc_ref(v_ch_4456_);
lean_dec_ref_known(v_ch_4453_, 1);
v___x_4457_ = l___private_Std_Sync_Channel_0__Std_CloseableChannel_Zero_recvSelector___redArg(v_ch_4456_);
return v___x_4457_;
}
default: 
{
lean_object* v_ch_4458_; lean_object* v___x_4459_; 
v_ch_4458_ = lean_ctor_get(v_ch_4453_, 0);
lean_inc_ref(v_ch_4458_);
lean_dec_ref_known(v_ch_4453_, 1);
v___x_4459_ = l___private_Std_Sync_Channel_0__Std_CloseableChannel_Bounded_recvSelector___redArg(v_ch_4458_);
return v___x_4459_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_CloseableChannel_recvSelector(lean_object* v_00_u03b1_4460_, lean_object* v_ch_4461_){
_start:
{
lean_object* v___x_4462_; 
v___x_4462_ = l_Std_CloseableChannel_recvSelector___redArg(v_ch_4461_);
return v___x_4462_;
}
}
static lean_object* _init_l_Std_CloseableChannel_forAsync___redArg___lam__0___closed__0(void){
_start:
{
lean_object* v___x_4463_; lean_object* v___x_4464_; 
v___x_4463_ = lean_box(0);
v___x_4464_ = lean_task_pure(v___x_4463_);
return v___x_4464_;
}
}
LEAN_EXPORT lean_object* l_Std_CloseableChannel_forAsync___redArg___lam__0(lean_object* v_f_4465_, lean_object* v_ch_4466_, lean_object* v_prio_4467_, lean_object* v_x_4468_){
_start:
{
if (lean_obj_tag(v_x_4468_) == 0)
{
lean_object* v___x_4470_; 
lean_dec(v_prio_4467_);
lean_dec_ref(v_ch_4466_);
lean_dec_ref(v_f_4465_);
v___x_4470_ = lean_obj_once(&l_Std_CloseableChannel_forAsync___redArg___lam__0___closed__0, &l_Std_CloseableChannel_forAsync___redArg___lam__0___closed__0_once, _init_l_Std_CloseableChannel_forAsync___redArg___lam__0___closed__0);
return v___x_4470_;
}
else
{
lean_object* v_val_4471_; lean_object* v___x_4472_; lean_object* v___x_4473_; 
v_val_4471_ = lean_ctor_get(v_x_4468_, 0);
lean_inc(v_val_4471_);
lean_dec_ref_known(v_x_4468_, 1);
lean_inc_ref(v_f_4465_);
v___x_4472_ = lean_apply_2(v_f_4465_, v_val_4471_, lean_box(0));
v___x_4473_ = l_Std_CloseableChannel_forAsync___redArg(v_f_4465_, v_ch_4466_, v_prio_4467_);
return v___x_4473_;
}
}
}
LEAN_EXPORT lean_object* l_Std_CloseableChannel_forAsync___redArg___lam__0___boxed(lean_object* v_f_4474_, lean_object* v_ch_4475_, lean_object* v_prio_4476_, lean_object* v_x_4477_, lean_object* v___y_4478_){
_start:
{
lean_object* v_res_4479_; 
v_res_4479_ = l_Std_CloseableChannel_forAsync___redArg___lam__0(v_f_4474_, v_ch_4475_, v_prio_4476_, v_x_4477_);
return v_res_4479_;
}
}
LEAN_EXPORT lean_object* l_Std_CloseableChannel_forAsync___redArg(lean_object* v_f_4480_, lean_object* v_ch_4481_, lean_object* v_prio_4482_){
_start:
{
lean_object* v___f_4484_; lean_object* v___x_4485_; uint8_t v___x_4486_; lean_object* v___x_4487_; 
lean_inc(v_prio_4482_);
lean_inc_ref(v_ch_4481_);
v___f_4484_ = lean_alloc_closure((void*)(l_Std_CloseableChannel_forAsync___redArg___lam__0___boxed), 5, 3);
lean_closure_set(v___f_4484_, 0, v_f_4480_);
lean_closure_set(v___f_4484_, 1, v_ch_4481_);
lean_closure_set(v___f_4484_, 2, v_prio_4482_);
v___x_4485_ = l_Std_CloseableChannel_recv___redArg(v_ch_4481_);
v___x_4486_ = 0;
v___x_4487_ = lean_io_bind_task(v___x_4485_, v___f_4484_, v_prio_4482_, v___x_4486_);
return v___x_4487_;
}
}
LEAN_EXPORT lean_object* l_Std_CloseableChannel_forAsync___redArg___boxed(lean_object* v_f_4488_, lean_object* v_ch_4489_, lean_object* v_prio_4490_, lean_object* v___y_4491_){
_start:
{
lean_object* v_res_4492_; 
v_res_4492_ = l_Std_CloseableChannel_forAsync___redArg(v_f_4488_, v_ch_4489_, v_prio_4490_);
return v_res_4492_;
}
}
LEAN_EXPORT lean_object* l_Std_CloseableChannel_forAsync(lean_object* v_00_u03b1_4493_, lean_object* v_f_4494_, lean_object* v_ch_4495_, lean_object* v_prio_4496_){
_start:
{
lean_object* v___x_4498_; 
v___x_4498_ = l_Std_CloseableChannel_forAsync___redArg(v_f_4494_, v_ch_4495_, v_prio_4496_);
return v___x_4498_;
}
}
LEAN_EXPORT lean_object* l_Std_CloseableChannel_forAsync___boxed(lean_object* v_00_u03b1_4499_, lean_object* v_f_4500_, lean_object* v_ch_4501_, lean_object* v_prio_4502_, lean_object* v___y_4503_){
_start:
{
lean_object* v_res_4504_; 
v_res_4504_ = l_Std_CloseableChannel_forAsync(v_00_u03b1_4499_, v_f_4500_, v_ch_4501_, v_prio_4502_);
return v_res_4504_;
}
}
LEAN_EXPORT lean_object* l_Std_CloseableChannel_instAsyncStreamOptionOfInhabited___redArg___lam__0(lean_object* v_x_4505_){
_start:
{
lean_object* v___x_4507_; lean_object* v___x_4508_; 
v___x_4507_ = lean_box(0);
v___x_4508_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4508_, 0, v___x_4507_);
return v___x_4508_;
}
}
LEAN_EXPORT lean_object* l_Std_CloseableChannel_instAsyncStreamOptionOfInhabited___redArg___lam__0___boxed(lean_object* v_x_4509_, lean_object* v___y_4510_){
_start:
{
lean_object* v_res_4511_; 
v_res_4511_ = l_Std_CloseableChannel_instAsyncStreamOptionOfInhabited___redArg___lam__0(v_x_4509_);
lean_dec_ref(v_x_4509_);
return v_res_4511_;
}
}
LEAN_EXPORT lean_object* l_Std_CloseableChannel_instAsyncStreamOptionOfInhabited___redArg(){
_start:
{
lean_object* v___x_4518_; 
v___x_4518_ = ((lean_object*)(l_Std_CloseableChannel_instAsyncStreamOptionOfInhabited___redArg___closed__2));
return v___x_4518_;
}
}
LEAN_EXPORT lean_object* l_Std_CloseableChannel_instAsyncStreamOptionOfInhabited___redArg___boxed(lean_object* v___dummy_4519_){
_start:
{
lean_object* v_res_4520_; 
v_res_4520_ = l_Std_CloseableChannel_instAsyncStreamOptionOfInhabited___redArg();
return v_res_4520_;
}
}
static lean_object* _init_l_Std_CloseableChannel_instAsyncStreamOptionOfInhabited___closed__0(void){
_start:
{
lean_object* v___x_4521_; 
v___x_4521_ = l_Std_CloseableChannel_instAsyncStreamOptionOfInhabited___redArg();
return v___x_4521_;
}
}
LEAN_EXPORT lean_object* l_Std_CloseableChannel_instAsyncStreamOptionOfInhabited(lean_object* v_00_u03b1_4522_, lean_object* v_inst_4523_){
_start:
{
lean_object* v___x_4524_; 
v___x_4524_ = lean_obj_once(&l_Std_CloseableChannel_instAsyncStreamOptionOfInhabited___closed__0, &l_Std_CloseableChannel_instAsyncStreamOptionOfInhabited___closed__0_once, _init_l_Std_CloseableChannel_instAsyncStreamOptionOfInhabited___closed__0);
return v___x_4524_;
}
}
LEAN_EXPORT lean_object* l_Std_CloseableChannel_instAsyncStreamOptionOfInhabited___boxed(lean_object* v_00_u03b1_4525_, lean_object* v_inst_4526_){
_start:
{
lean_object* v_res_4527_; 
v_res_4527_ = l_Std_CloseableChannel_instAsyncStreamOptionOfInhabited(v_00_u03b1_4525_, v_inst_4526_);
lean_dec(v_inst_4526_);
return v_res_4527_;
}
}
LEAN_EXPORT lean_object* l_Std_CloseableChannel_instAsyncReadOptionOfInhabited___redArg___lam__0(lean_object* v_a_4528_){
_start:
{
lean_object* v___x_4529_; 
v___x_4529_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4529_, 0, v_a_4528_);
return v___x_4529_;
}
}
LEAN_EXPORT lean_object* l_Std_CloseableChannel_instAsyncReadOptionOfInhabited___redArg___lam__1(lean_object* v___f_4530_, lean_object* v_x_4531_){
_start:
{
if (lean_obj_tag(v_x_4531_) == 0)
{
lean_object* v_a_4533_; lean_object* v___x_4535_; uint8_t v_isShared_4536_; uint8_t v_isSharedCheck_4541_; 
lean_dec_ref(v___f_4530_);
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
lean_object* v_a_4542_; 
v_a_4542_ = lean_ctor_get(v_x_4531_, 0);
lean_inc(v_a_4542_);
lean_dec_ref_known(v_x_4531_, 1);
if (lean_obj_tag(v_a_4542_) == 0)
{
lean_object* v_a_4543_; lean_object* v___x_4545_; uint8_t v_isShared_4546_; uint8_t v_isSharedCheck_4551_; 
lean_dec_ref(v___f_4530_);
v_a_4543_ = lean_ctor_get(v_a_4542_, 0);
v_isSharedCheck_4551_ = !lean_is_exclusive(v_a_4542_);
if (v_isSharedCheck_4551_ == 0)
{
v___x_4545_ = v_a_4542_;
v_isShared_4546_ = v_isSharedCheck_4551_;
goto v_resetjp_4544_;
}
else
{
lean_inc(v_a_4543_);
lean_dec(v_a_4542_);
v___x_4545_ = lean_box(0);
v_isShared_4546_ = v_isSharedCheck_4551_;
goto v_resetjp_4544_;
}
v_resetjp_4544_:
{
lean_object* v___x_4548_; 
if (v_isShared_4546_ == 0)
{
v___x_4548_ = v___x_4545_;
goto v_reusejp_4547_;
}
else
{
lean_object* v_reuseFailAlloc_4550_; 
v_reuseFailAlloc_4550_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4550_, 0, v_a_4543_);
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
else
{
lean_object* v_a_4552_; lean_object* v___x_4553_; uint8_t v___x_4554_; lean_object* v___x_4555_; lean_object* v___x_4556_; 
v_a_4552_ = lean_ctor_get(v_a_4542_, 0);
lean_inc(v_a_4552_);
lean_dec_ref_known(v_a_4542_, 1);
v___x_4553_ = lean_unsigned_to_nat(0u);
v___x_4554_ = 0;
v___x_4555_ = lean_task_map(v___f_4530_, v_a_4552_, v___x_4553_, v___x_4554_);
v___x_4556_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4556_, 0, v___x_4555_);
return v___x_4556_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_CloseableChannel_instAsyncReadOptionOfInhabited___redArg___lam__1___boxed(lean_object* v___f_4557_, lean_object* v_x_4558_, lean_object* v___y_4559_){
_start:
{
lean_object* v_res_4560_; 
v_res_4560_ = l_Std_CloseableChannel_instAsyncReadOptionOfInhabited___redArg___lam__1(v___f_4557_, v_x_4558_);
return v_res_4560_;
}
}
LEAN_EXPORT lean_object* l_Std_CloseableChannel_instAsyncReadOptionOfInhabited___redArg___lam__2(lean_object* v___f_4561_, lean_object* v_receiver_4562_){
_start:
{
lean_object* v___x_4564_; uint8_t v___x_4565_; lean_object* v___x_4566_; lean_object* v___x_4567_; lean_object* v___x_4568_; lean_object* v___x_4569_; lean_object* v___x_4570_; 
v___x_4564_ = lean_unsigned_to_nat(0u);
v___x_4565_ = 0;
v___x_4566_ = l_Std_CloseableChannel_recv___redArg(v_receiver_4562_);
v___x_4567_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4567_, 0, v___x_4566_);
v___x_4568_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4568_, 0, v___x_4567_);
v___x_4569_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4569_, 0, v___x_4568_);
v___x_4570_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_4564_, v___x_4565_, v___x_4569_, v___f_4561_);
return v___x_4570_;
}
}
LEAN_EXPORT lean_object* l_Std_CloseableChannel_instAsyncReadOptionOfInhabited___redArg___lam__2___boxed(lean_object* v___f_4571_, lean_object* v_receiver_4572_, lean_object* v___y_4573_){
_start:
{
lean_object* v_res_4574_; 
v_res_4574_ = l_Std_CloseableChannel_instAsyncReadOptionOfInhabited___redArg___lam__2(v___f_4571_, v_receiver_4572_);
return v_res_4574_;
}
}
LEAN_EXPORT lean_object* l_Std_CloseableChannel_instAsyncReadOptionOfInhabited___redArg(){
_start:
{
lean_object* v___f_4581_; 
v___f_4581_ = ((lean_object*)(l_Std_CloseableChannel_instAsyncReadOptionOfInhabited___redArg___closed__2));
return v___f_4581_;
}
}
LEAN_EXPORT lean_object* l_Std_CloseableChannel_instAsyncReadOptionOfInhabited___redArg___boxed(lean_object* v___dummy_4582_){
_start:
{
lean_object* v_res_4583_; 
v_res_4583_ = l_Std_CloseableChannel_instAsyncReadOptionOfInhabited___redArg();
return v_res_4583_;
}
}
static lean_object* _init_l_Std_CloseableChannel_instAsyncReadOptionOfInhabited___closed__0(void){
_start:
{
lean_object* v___x_4584_; 
v___x_4584_ = l_Std_CloseableChannel_instAsyncReadOptionOfInhabited___redArg();
return v___x_4584_;
}
}
LEAN_EXPORT lean_object* l_Std_CloseableChannel_instAsyncReadOptionOfInhabited(lean_object* v_00_u03b1_4585_, lean_object* v_inst_4586_){
_start:
{
lean_object* v___x_4587_; 
v___x_4587_ = lean_obj_once(&l_Std_CloseableChannel_instAsyncReadOptionOfInhabited___closed__0, &l_Std_CloseableChannel_instAsyncReadOptionOfInhabited___closed__0_once, _init_l_Std_CloseableChannel_instAsyncReadOptionOfInhabited___closed__0);
return v___x_4587_;
}
}
LEAN_EXPORT lean_object* l_Std_CloseableChannel_instAsyncReadOptionOfInhabited___boxed(lean_object* v_00_u03b1_4588_, lean_object* v_inst_4589_){
_start:
{
lean_object* v_res_4590_; 
v_res_4590_ = l_Std_CloseableChannel_instAsyncReadOptionOfInhabited(v_00_u03b1_4588_, v_inst_4589_);
lean_dec(v_inst_4589_);
return v_res_4590_;
}
}
LEAN_EXPORT lean_object* l_Std_CloseableChannel_instAsyncWriteOfInhabited___redArg___lam__1(lean_object* v___f_4592_, lean_object* v_x_4593_){
_start:
{
if (lean_obj_tag(v_x_4593_) == 0)
{
lean_object* v_a_4595_; lean_object* v___x_4597_; uint8_t v_isShared_4598_; uint8_t v_isSharedCheck_4603_; 
lean_dec_ref(v___f_4592_);
v_a_4595_ = lean_ctor_get(v_x_4593_, 0);
v_isSharedCheck_4603_ = !lean_is_exclusive(v_x_4593_);
if (v_isSharedCheck_4603_ == 0)
{
v___x_4597_ = v_x_4593_;
v_isShared_4598_ = v_isSharedCheck_4603_;
goto v_resetjp_4596_;
}
else
{
lean_inc(v_a_4595_);
lean_dec(v_x_4593_);
v___x_4597_ = lean_box(0);
v_isShared_4598_ = v_isSharedCheck_4603_;
goto v_resetjp_4596_;
}
v_resetjp_4596_:
{
lean_object* v___x_4600_; 
if (v_isShared_4598_ == 0)
{
v___x_4600_ = v___x_4597_;
goto v_reusejp_4599_;
}
else
{
lean_object* v_reuseFailAlloc_4602_; 
v_reuseFailAlloc_4602_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4602_, 0, v_a_4595_);
v___x_4600_ = v_reuseFailAlloc_4602_;
goto v_reusejp_4599_;
}
v_reusejp_4599_:
{
lean_object* v___x_4601_; 
v___x_4601_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4601_, 0, v___x_4600_);
return v___x_4601_;
}
}
}
else
{
lean_object* v_a_4604_; lean_object* v___x_4605_; lean_object* v___x_4606_; lean_object* v___x_4607_; lean_object* v___x_4608_; uint8_t v___x_4609_; lean_object* v___x_4610_; lean_object* v___x_4611_; 
v_a_4604_ = lean_ctor_get(v_x_4593_, 0);
lean_inc(v_a_4604_);
lean_dec_ref_known(v_x_4593_, 1);
v___x_4605_ = ((lean_object*)(l_Std_CloseableChannel_instAsyncWriteOfInhabited___redArg___lam__1___closed__0));
v___x_4606_ = lean_alloc_closure((void*)(l_Function_comp), 6, 5);
lean_closure_set(v___x_4606_, 0, lean_box(0));
lean_closure_set(v___x_4606_, 1, lean_box(0));
lean_closure_set(v___x_4606_, 2, lean_box(0));
lean_closure_set(v___x_4606_, 3, v___x_4605_);
lean_closure_set(v___x_4606_, 4, v___f_4592_);
v___x_4607_ = lean_alloc_closure((void*)(l_Except_mapError), 5, 4);
lean_closure_set(v___x_4607_, 0, lean_box(0));
lean_closure_set(v___x_4607_, 1, lean_box(0));
lean_closure_set(v___x_4607_, 2, lean_box(0));
lean_closure_set(v___x_4607_, 3, v___x_4606_);
v___x_4608_ = lean_unsigned_to_nat(0u);
v___x_4609_ = 0;
v___x_4610_ = lean_task_map(v___x_4607_, v_a_4604_, v___x_4608_, v___x_4609_);
v___x_4611_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4611_, 0, v___x_4610_);
return v___x_4611_;
}
}
}
LEAN_EXPORT lean_object* l_Std_CloseableChannel_instAsyncWriteOfInhabited___redArg___lam__1___boxed(lean_object* v___f_4612_, lean_object* v_x_4613_, lean_object* v___y_4614_){
_start:
{
lean_object* v_res_4615_; 
v_res_4615_ = l_Std_CloseableChannel_instAsyncWriteOfInhabited___redArg___lam__1(v___f_4612_, v_x_4613_);
return v_res_4615_;
}
}
LEAN_EXPORT lean_object* l_Std_CloseableChannel_instAsyncWriteOfInhabited___redArg___lam__0(lean_object* v___f_4616_, lean_object* v_receiver_4617_, lean_object* v_x_4618_){
_start:
{
lean_object* v___x_4620_; uint8_t v___x_4621_; lean_object* v___x_4622_; lean_object* v___x_4623_; lean_object* v___x_4624_; lean_object* v___x_4625_; 
v___x_4620_ = lean_unsigned_to_nat(0u);
v___x_4621_ = 0;
v___x_4622_ = l_Std_CloseableChannel_send___redArg(v_receiver_4617_, v_x_4618_);
v___x_4623_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4623_, 0, v___x_4622_);
v___x_4624_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4624_, 0, v___x_4623_);
v___x_4625_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_4620_, v___x_4621_, v___x_4624_, v___f_4616_);
return v___x_4625_;
}
}
LEAN_EXPORT lean_object* l_Std_CloseableChannel_instAsyncWriteOfInhabited___redArg___lam__0___boxed(lean_object* v___f_4626_, lean_object* v_receiver_4627_, lean_object* v_x_4628_, lean_object* v___y_4629_){
_start:
{
lean_object* v_res_4630_; 
v_res_4630_ = l_Std_CloseableChannel_instAsyncWriteOfInhabited___redArg___lam__0(v___f_4626_, v_receiver_4627_, v_x_4628_);
return v_res_4630_;
}
}
LEAN_EXPORT lean_object* l_Std_CloseableChannel_instAsyncWriteOfInhabited___redArg___lam__2(lean_object* v_x_4631_){
_start:
{
lean_object* v___x_4633_; 
v___x_4633_ = ((lean_object*)(l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_tryRecv_x27___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector_spec__0___redArg___lam__1___closed__1));
return v___x_4633_;
}
}
LEAN_EXPORT lean_object* l_Std_CloseableChannel_instAsyncWriteOfInhabited___redArg___lam__2___boxed(lean_object* v_x_4634_, lean_object* v___y_4635_){
_start:
{
lean_object* v_res_4636_; 
v_res_4636_ = l_Std_CloseableChannel_instAsyncWriteOfInhabited___redArg___lam__2(v_x_4634_);
lean_dec_ref(v_x_4634_);
return v_res_4636_;
}
}
LEAN_EXPORT lean_object* l_Std_CloseableChannel_instAsyncWriteOfInhabited___redArg___lam__3(lean_object* v___f_4637_, lean_object* v_socket_4638_, lean_object* v_x_4639_, lean_object* v___y_4640_){
_start:
{
lean_object* v___x_4642_; 
v___x_4642_ = lean_apply_3(v___f_4637_, v_socket_4638_, v___y_4640_, lean_box(0));
return v___x_4642_;
}
}
LEAN_EXPORT lean_object* l_Std_CloseableChannel_instAsyncWriteOfInhabited___redArg___lam__3___boxed(lean_object* v___f_4643_, lean_object* v_socket_4644_, lean_object* v_x_4645_, lean_object* v___y_4646_, lean_object* v___y_4647_){
_start:
{
lean_object* v_res_4648_; 
v_res_4648_ = l_Std_CloseableChannel_instAsyncWriteOfInhabited___redArg___lam__3(v___f_4643_, v_socket_4644_, v_x_4645_, v___y_4646_);
return v_res_4648_;
}
}
LEAN_EXPORT lean_object* l_Std_CloseableChannel_instAsyncWriteOfInhabited___redArg___lam__4(lean_object* v___f_4649_, lean_object* v___x_4650_, lean_object* v_socket_4651_, lean_object* v_data_4652_){
_start:
{
lean_object* v___x_4654_; lean_object* v___x_4655_; lean_object* v___x_4656_; uint8_t v___x_4657_; 
v___x_4654_ = lean_unsigned_to_nat(0u);
v___x_4655_ = lean_array_get_size(v_data_4652_);
v___x_4656_ = lean_box(0);
v___x_4657_ = lean_nat_dec_lt(v___x_4654_, v___x_4655_);
if (v___x_4657_ == 0)
{
lean_object* v___x_4658_; 
lean_dec_ref(v_data_4652_);
lean_dec_ref(v_socket_4651_);
lean_dec_ref(v___x_4650_);
lean_dec_ref(v___f_4649_);
v___x_4658_ = ((lean_object*)(l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_tryRecv_x27___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector_spec__0___redArg___lam__1___closed__1));
return v___x_4658_;
}
else
{
lean_object* v___f_4659_; uint8_t v___x_4660_; 
v___f_4659_ = lean_alloc_closure((void*)(l_Std_CloseableChannel_instAsyncWriteOfInhabited___redArg___lam__3___boxed), 5, 2);
lean_closure_set(v___f_4659_, 0, v___f_4649_);
lean_closure_set(v___f_4659_, 1, v_socket_4651_);
v___x_4660_ = lean_nat_dec_le(v___x_4655_, v___x_4655_);
if (v___x_4660_ == 0)
{
if (v___x_4657_ == 0)
{
lean_object* v___x_4661_; 
lean_dec_ref(v___f_4659_);
lean_dec_ref(v_data_4652_);
lean_dec_ref(v___x_4650_);
v___x_4661_ = ((lean_object*)(l___private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_tryRecv_x27___at___00__private_Std_Sync_Channel_0__Std_CloseableChannel_Unbounded_recvSelector_spec__0___redArg___lam__1___closed__1));
return v___x_4661_;
}
else
{
size_t v___x_4662_; size_t v___x_4663_; lean_object* v___x_750__overap_4664_; lean_object* v___x_4665_; 
v___x_4662_ = ((size_t)0ULL);
v___x_4663_ = lean_usize_of_nat(v___x_4655_);
v___x_750__overap_4664_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_4650_, v___f_4659_, v_data_4652_, v___x_4662_, v___x_4663_, v___x_4656_);
v___x_4665_ = lean_apply_1(v___x_750__overap_4664_, lean_box(0));
return v___x_4665_;
}
}
else
{
size_t v___x_4666_; size_t v___x_4667_; lean_object* v___x_753__overap_4668_; lean_object* v___x_4669_; 
v___x_4666_ = ((size_t)0ULL);
v___x_4667_ = lean_usize_of_nat(v___x_4655_);
v___x_753__overap_4668_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_4650_, v___f_4659_, v_data_4652_, v___x_4666_, v___x_4667_, v___x_4656_);
v___x_4669_ = lean_apply_1(v___x_753__overap_4668_, lean_box(0));
return v___x_4669_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_CloseableChannel_instAsyncWriteOfInhabited___redArg___lam__4___boxed(lean_object* v___f_4670_, lean_object* v___x_4671_, lean_object* v_socket_4672_, lean_object* v_data_4673_, lean_object* v___y_4674_){
_start:
{
lean_object* v_res_4675_; 
v_res_4675_ = l_Std_CloseableChannel_instAsyncWriteOfInhabited___redArg___lam__4(v___f_4670_, v___x_4671_, v_socket_4672_, v_data_4673_);
return v_res_4675_;
}
}
static lean_object* _init_l_Std_CloseableChannel_instAsyncWriteOfInhabited___redArg___closed__3(void){
_start:
{
lean_object* v___x_4681_; 
v___x_4681_ = l_Std_Async_EAsync_instMonad___redArg();
return v___x_4681_;
}
}
static lean_object* _init_l_Std_CloseableChannel_instAsyncWriteOfInhabited___redArg___closed__4(void){
_start:
{
lean_object* v___x_4682_; lean_object* v___f_4683_; lean_object* v___f_4684_; 
v___x_4682_ = lean_obj_once(&l_Std_CloseableChannel_instAsyncWriteOfInhabited___redArg___closed__3, &l_Std_CloseableChannel_instAsyncWriteOfInhabited___redArg___closed__3_once, _init_l_Std_CloseableChannel_instAsyncWriteOfInhabited___redArg___closed__3);
v___f_4683_ = ((lean_object*)(l_Std_CloseableChannel_instAsyncWriteOfInhabited___redArg___closed__1));
v___f_4684_ = lean_alloc_closure((void*)(l_Std_CloseableChannel_instAsyncWriteOfInhabited___redArg___lam__4___boxed), 5, 2);
lean_closure_set(v___f_4684_, 0, v___f_4683_);
lean_closure_set(v___f_4684_, 1, v___x_4682_);
return v___f_4684_;
}
}
static lean_object* _init_l_Std_CloseableChannel_instAsyncWriteOfInhabited___redArg___closed__5(void){
_start:
{
lean_object* v___f_4685_; lean_object* v___f_4686_; lean_object* v___f_4687_; lean_object* v___x_4688_; 
v___f_4685_ = ((lean_object*)(l_Std_CloseableChannel_instAsyncWriteOfInhabited___redArg___closed__2));
v___f_4686_ = lean_obj_once(&l_Std_CloseableChannel_instAsyncWriteOfInhabited___redArg___closed__4, &l_Std_CloseableChannel_instAsyncWriteOfInhabited___redArg___closed__4_once, _init_l_Std_CloseableChannel_instAsyncWriteOfInhabited___redArg___closed__4);
v___f_4687_ = ((lean_object*)(l_Std_CloseableChannel_instAsyncWriteOfInhabited___redArg___closed__1));
v___x_4688_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_4688_, 0, v___f_4687_);
lean_ctor_set(v___x_4688_, 1, v___f_4686_);
lean_ctor_set(v___x_4688_, 2, v___f_4685_);
return v___x_4688_;
}
}
LEAN_EXPORT lean_object* l_Std_CloseableChannel_instAsyncWriteOfInhabited___redArg(){
_start:
{
lean_object* v___x_4690_; 
v___x_4690_ = lean_obj_once(&l_Std_CloseableChannel_instAsyncWriteOfInhabited___redArg___closed__5, &l_Std_CloseableChannel_instAsyncWriteOfInhabited___redArg___closed__5_once, _init_l_Std_CloseableChannel_instAsyncWriteOfInhabited___redArg___closed__5);
return v___x_4690_;
}
}
LEAN_EXPORT lean_object* l_Std_CloseableChannel_instAsyncWriteOfInhabited___redArg___boxed(lean_object* v___dummy_4691_){
_start:
{
lean_object* v_res_4692_; 
v_res_4692_ = l_Std_CloseableChannel_instAsyncWriteOfInhabited___redArg();
return v_res_4692_;
}
}
static lean_object* _init_l_Std_CloseableChannel_instAsyncWriteOfInhabited___closed__0(void){
_start:
{
lean_object* v___x_4693_; 
v___x_4693_ = l_Std_CloseableChannel_instAsyncWriteOfInhabited___redArg();
return v___x_4693_;
}
}
LEAN_EXPORT lean_object* l_Std_CloseableChannel_instAsyncWriteOfInhabited(lean_object* v_00_u03b1_4694_, lean_object* v_inst_4695_){
_start:
{
lean_object* v___x_4696_; 
v___x_4696_ = lean_obj_once(&l_Std_CloseableChannel_instAsyncWriteOfInhabited___closed__0, &l_Std_CloseableChannel_instAsyncWriteOfInhabited___closed__0_once, _init_l_Std_CloseableChannel_instAsyncWriteOfInhabited___closed__0);
return v___x_4696_;
}
}
LEAN_EXPORT lean_object* l_Std_CloseableChannel_instAsyncWriteOfInhabited___boxed(lean_object* v_00_u03b1_4697_, lean_object* v_inst_4698_){
_start:
{
lean_object* v_res_4699_; 
v_res_4699_ = l_Std_CloseableChannel_instAsyncWriteOfInhabited(v_00_u03b1_4697_, v_inst_4698_);
lean_dec(v_inst_4698_);
return v_res_4699_;
}
}
LEAN_EXPORT lean_object* l_Std_CloseableChannel_sync___redArg(lean_object* v_ch_4700_){
_start:
{
lean_inc_ref(v_ch_4700_);
return v_ch_4700_;
}
}
LEAN_EXPORT lean_object* l_Std_CloseableChannel_sync___redArg___boxed(lean_object* v_ch_4701_){
_start:
{
lean_object* v_res_4702_; 
v_res_4702_ = l_Std_CloseableChannel_sync___redArg(v_ch_4701_);
lean_dec_ref(v_ch_4701_);
return v_res_4702_;
}
}
LEAN_EXPORT lean_object* l_Std_CloseableChannel_sync(lean_object* v_00_u03b1_4703_, lean_object* v_ch_4704_){
_start:
{
lean_inc_ref(v_ch_4704_);
return v_ch_4704_;
}
}
LEAN_EXPORT lean_object* l_Std_CloseableChannel_sync___boxed(lean_object* v_00_u03b1_4705_, lean_object* v_ch_4706_){
_start:
{
lean_object* v_res_4707_; 
v_res_4707_ = l_Std_CloseableChannel_sync(v_00_u03b1_4705_, v_ch_4706_);
lean_dec_ref(v_ch_4706_);
return v_res_4707_;
}
}
LEAN_EXPORT lean_object* l_Std_CloseableChannel_Sync_new___redArg(lean_object* v_capacity_4708_){
_start:
{
lean_object* v___x_4710_; 
v___x_4710_ = l_Std_CloseableChannel_new___redArg(v_capacity_4708_);
return v___x_4710_;
}
}
LEAN_EXPORT lean_object* l_Std_CloseableChannel_Sync_new___redArg___boxed(lean_object* v_capacity_4711_, lean_object* v___y_4712_){
_start:
{
lean_object* v_res_4713_; 
v_res_4713_ = l_Std_CloseableChannel_Sync_new___redArg(v_capacity_4711_);
return v_res_4713_;
}
}
LEAN_EXPORT lean_object* l_Std_CloseableChannel_Sync_new(lean_object* v_00_u03b1_4714_, lean_object* v_capacity_4715_){
_start:
{
lean_object* v___x_4717_; 
v___x_4717_ = l_Std_CloseableChannel_new___redArg(v_capacity_4715_);
return v___x_4717_;
}
}
LEAN_EXPORT lean_object* l_Std_CloseableChannel_Sync_new___boxed(lean_object* v_00_u03b1_4718_, lean_object* v_capacity_4719_, lean_object* v___y_4720_){
_start:
{
lean_object* v_res_4721_; 
v_res_4721_ = l_Std_CloseableChannel_Sync_new(v_00_u03b1_4718_, v_capacity_4719_);
return v_res_4721_;
}
}
LEAN_EXPORT uint8_t l_Std_CloseableChannel_Sync_trySend___redArg(lean_object* v_ch_4722_, lean_object* v_v_4723_){
_start:
{
uint8_t v___x_4725_; 
v___x_4725_ = l_Std_CloseableChannel_trySend___redArg(v_ch_4722_, v_v_4723_);
return v___x_4725_;
}
}
LEAN_EXPORT lean_object* l_Std_CloseableChannel_Sync_trySend___redArg___boxed(lean_object* v_ch_4726_, lean_object* v_v_4727_, lean_object* v___y_4728_){
_start:
{
uint8_t v_res_4729_; lean_object* v_r_4730_; 
v_res_4729_ = l_Std_CloseableChannel_Sync_trySend___redArg(v_ch_4726_, v_v_4727_);
v_r_4730_ = lean_box(v_res_4729_);
return v_r_4730_;
}
}
LEAN_EXPORT uint8_t l_Std_CloseableChannel_Sync_trySend(lean_object* v_00_u03b1_4731_, lean_object* v_ch_4732_, lean_object* v_v_4733_){
_start:
{
uint8_t v___x_4735_; 
v___x_4735_ = l_Std_CloseableChannel_trySend___redArg(v_ch_4732_, v_v_4733_);
return v___x_4735_;
}
}
LEAN_EXPORT lean_object* l_Std_CloseableChannel_Sync_trySend___boxed(lean_object* v_00_u03b1_4736_, lean_object* v_ch_4737_, lean_object* v_v_4738_, lean_object* v___y_4739_){
_start:
{
uint8_t v_res_4740_; lean_object* v_r_4741_; 
v_res_4740_ = l_Std_CloseableChannel_Sync_trySend(v_00_u03b1_4736_, v_ch_4737_, v_v_4738_);
v_r_4741_ = lean_box(v_res_4740_);
return v_r_4741_;
}
}
LEAN_EXPORT lean_object* l_Std_CloseableChannel_Sync_send___redArg(lean_object* v_ch_4742_, lean_object* v_v_4743_){
_start:
{
lean_object* v___x_4745_; lean_object* v___x_4746_; 
v___x_4745_ = l_Std_CloseableChannel_send___redArg(v_ch_4742_, v_v_4743_);
v___x_4746_ = lean_io_wait(v___x_4745_);
if (lean_obj_tag(v___x_4746_) == 0)
{
lean_object* v_a_4747_; lean_object* v___x_4749_; uint8_t v_isShared_4750_; uint8_t v_isSharedCheck_4754_; 
v_a_4747_ = lean_ctor_get(v___x_4746_, 0);
v_isSharedCheck_4754_ = !lean_is_exclusive(v___x_4746_);
if (v_isSharedCheck_4754_ == 0)
{
v___x_4749_ = v___x_4746_;
v_isShared_4750_ = v_isSharedCheck_4754_;
goto v_resetjp_4748_;
}
else
{
lean_inc(v_a_4747_);
lean_dec(v___x_4746_);
v___x_4749_ = lean_box(0);
v_isShared_4750_ = v_isSharedCheck_4754_;
goto v_resetjp_4748_;
}
v_resetjp_4748_:
{
lean_object* v___x_4752_; 
if (v_isShared_4750_ == 0)
{
lean_ctor_set_tag(v___x_4749_, 1);
v___x_4752_ = v___x_4749_;
goto v_reusejp_4751_;
}
else
{
lean_object* v_reuseFailAlloc_4753_; 
v_reuseFailAlloc_4753_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4753_, 0, v_a_4747_);
v___x_4752_ = v_reuseFailAlloc_4753_;
goto v_reusejp_4751_;
}
v_reusejp_4751_:
{
return v___x_4752_;
}
}
}
else
{
lean_object* v_a_4755_; lean_object* v___x_4757_; uint8_t v_isShared_4758_; uint8_t v_isSharedCheck_4762_; 
v_a_4755_ = lean_ctor_get(v___x_4746_, 0);
v_isSharedCheck_4762_ = !lean_is_exclusive(v___x_4746_);
if (v_isSharedCheck_4762_ == 0)
{
v___x_4757_ = v___x_4746_;
v_isShared_4758_ = v_isSharedCheck_4762_;
goto v_resetjp_4756_;
}
else
{
lean_inc(v_a_4755_);
lean_dec(v___x_4746_);
v___x_4757_ = lean_box(0);
v_isShared_4758_ = v_isSharedCheck_4762_;
goto v_resetjp_4756_;
}
v_resetjp_4756_:
{
lean_object* v___x_4760_; 
if (v_isShared_4758_ == 0)
{
lean_ctor_set_tag(v___x_4757_, 0);
v___x_4760_ = v___x_4757_;
goto v_reusejp_4759_;
}
else
{
lean_object* v_reuseFailAlloc_4761_; 
v_reuseFailAlloc_4761_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4761_, 0, v_a_4755_);
v___x_4760_ = v_reuseFailAlloc_4761_;
goto v_reusejp_4759_;
}
v_reusejp_4759_:
{
return v___x_4760_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_CloseableChannel_Sync_send___redArg___boxed(lean_object* v_ch_4763_, lean_object* v_v_4764_, lean_object* v___y_4765_){
_start:
{
lean_object* v_res_4766_; 
v_res_4766_ = l_Std_CloseableChannel_Sync_send___redArg(v_ch_4763_, v_v_4764_);
return v_res_4766_;
}
}
LEAN_EXPORT lean_object* l_Std_CloseableChannel_Sync_send(lean_object* v_00_u03b1_4767_, lean_object* v_ch_4768_, lean_object* v_v_4769_){
_start:
{
lean_object* v___x_4771_; 
v___x_4771_ = l_Std_CloseableChannel_Sync_send___redArg(v_ch_4768_, v_v_4769_);
return v___x_4771_;
}
}
LEAN_EXPORT lean_object* l_Std_CloseableChannel_Sync_send___boxed(lean_object* v_00_u03b1_4772_, lean_object* v_ch_4773_, lean_object* v_v_4774_, lean_object* v___y_4775_){
_start:
{
lean_object* v_res_4776_; 
v_res_4776_ = l_Std_CloseableChannel_Sync_send(v_00_u03b1_4772_, v_ch_4773_, v_v_4774_);
return v_res_4776_;
}
}
LEAN_EXPORT lean_object* l_Std_CloseableChannel_Sync_close___redArg(lean_object* v_ch_4777_){
_start:
{
lean_object* v___x_4779_; 
v___x_4779_ = l_Std_CloseableChannel_close___redArg(v_ch_4777_);
return v___x_4779_;
}
}
LEAN_EXPORT lean_object* l_Std_CloseableChannel_Sync_close___redArg___boxed(lean_object* v_ch_4780_, lean_object* v___y_4781_){
_start:
{
lean_object* v_res_4782_; 
v_res_4782_ = l_Std_CloseableChannel_Sync_close___redArg(v_ch_4780_);
return v_res_4782_;
}
}
LEAN_EXPORT lean_object* l_Std_CloseableChannel_Sync_close(lean_object* v_00_u03b1_4783_, lean_object* v_ch_4784_){
_start:
{
lean_object* v___x_4786_; 
v___x_4786_ = l_Std_CloseableChannel_close___redArg(v_ch_4784_);
return v___x_4786_;
}
}
LEAN_EXPORT lean_object* l_Std_CloseableChannel_Sync_close___boxed(lean_object* v_00_u03b1_4787_, lean_object* v_ch_4788_, lean_object* v___y_4789_){
_start:
{
lean_object* v_res_4790_; 
v_res_4790_ = l_Std_CloseableChannel_Sync_close(v_00_u03b1_4787_, v_ch_4788_);
return v_res_4790_;
}
}
LEAN_EXPORT uint8_t l_Std_CloseableChannel_Sync_isClosed___redArg(lean_object* v_ch_4791_){
_start:
{
uint8_t v___x_4793_; 
v___x_4793_ = l_Std_CloseableChannel_isClosed___redArg(v_ch_4791_);
return v___x_4793_;
}
}
LEAN_EXPORT lean_object* l_Std_CloseableChannel_Sync_isClosed___redArg___boxed(lean_object* v_ch_4794_, lean_object* v___y_4795_){
_start:
{
uint8_t v_res_4796_; lean_object* v_r_4797_; 
v_res_4796_ = l_Std_CloseableChannel_Sync_isClosed___redArg(v_ch_4794_);
v_r_4797_ = lean_box(v_res_4796_);
return v_r_4797_;
}
}
LEAN_EXPORT uint8_t l_Std_CloseableChannel_Sync_isClosed(lean_object* v_00_u03b1_4798_, lean_object* v_ch_4799_){
_start:
{
uint8_t v___x_4801_; 
v___x_4801_ = l_Std_CloseableChannel_isClosed___redArg(v_ch_4799_);
return v___x_4801_;
}
}
LEAN_EXPORT lean_object* l_Std_CloseableChannel_Sync_isClosed___boxed(lean_object* v_00_u03b1_4802_, lean_object* v_ch_4803_, lean_object* v___y_4804_){
_start:
{
uint8_t v_res_4805_; lean_object* v_r_4806_; 
v_res_4805_ = l_Std_CloseableChannel_Sync_isClosed(v_00_u03b1_4802_, v_ch_4803_);
v_r_4806_ = lean_box(v_res_4805_);
return v_r_4806_;
}
}
LEAN_EXPORT lean_object* l_Std_CloseableChannel_Sync_tryRecv___redArg(lean_object* v_ch_4807_){
_start:
{
lean_object* v___x_4809_; 
v___x_4809_ = l_Std_CloseableChannel_tryRecv___redArg(v_ch_4807_);
return v___x_4809_;
}
}
LEAN_EXPORT lean_object* l_Std_CloseableChannel_Sync_tryRecv___redArg___boxed(lean_object* v_ch_4810_, lean_object* v___y_4811_){
_start:
{
lean_object* v_res_4812_; 
v_res_4812_ = l_Std_CloseableChannel_Sync_tryRecv___redArg(v_ch_4810_);
return v_res_4812_;
}
}
LEAN_EXPORT lean_object* l_Std_CloseableChannel_Sync_tryRecv(lean_object* v_00_u03b1_4813_, lean_object* v_ch_4814_){
_start:
{
lean_object* v___x_4816_; 
v___x_4816_ = l_Std_CloseableChannel_tryRecv___redArg(v_ch_4814_);
return v___x_4816_;
}
}
LEAN_EXPORT lean_object* l_Std_CloseableChannel_Sync_tryRecv___boxed(lean_object* v_00_u03b1_4817_, lean_object* v_ch_4818_, lean_object* v___y_4819_){
_start:
{
lean_object* v_res_4820_; 
v_res_4820_ = l_Std_CloseableChannel_Sync_tryRecv(v_00_u03b1_4817_, v_ch_4818_);
return v_res_4820_;
}
}
LEAN_EXPORT lean_object* l_Std_CloseableChannel_Sync_recv___redArg(lean_object* v_ch_4821_){
_start:
{
lean_object* v___x_4823_; lean_object* v___x_4824_; 
v___x_4823_ = l_Std_CloseableChannel_recv___redArg(v_ch_4821_);
v___x_4824_ = lean_io_wait(v___x_4823_);
return v___x_4824_;
}
}
LEAN_EXPORT lean_object* l_Std_CloseableChannel_Sync_recv___redArg___boxed(lean_object* v_ch_4825_, lean_object* v___y_4826_){
_start:
{
lean_object* v_res_4827_; 
v_res_4827_ = l_Std_CloseableChannel_Sync_recv___redArg(v_ch_4825_);
return v_res_4827_;
}
}
LEAN_EXPORT lean_object* l_Std_CloseableChannel_Sync_recv(lean_object* v_00_u03b1_4828_, lean_object* v_ch_4829_){
_start:
{
lean_object* v___x_4831_; 
v___x_4831_ = l_Std_CloseableChannel_Sync_recv___redArg(v_ch_4829_);
return v___x_4831_;
}
}
LEAN_EXPORT lean_object* l_Std_CloseableChannel_Sync_recv___boxed(lean_object* v_00_u03b1_4832_, lean_object* v_ch_4833_, lean_object* v___y_4834_){
_start:
{
lean_object* v_res_4835_; 
v_res_4835_ = l_Std_CloseableChannel_Sync_recv(v_00_u03b1_4832_, v_ch_4833_);
return v_res_4835_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Sync_forIn___redArg___lam__1(lean_object* v_toPure_4836_, lean_object* v_b_4837_, lean_object* v_f_4838_, lean_object* v_toBind_4839_, lean_object* v___f_4840_, lean_object* v_____do__lift_4841_){
_start:
{
if (lean_obj_tag(v_____do__lift_4841_) == 0)
{
lean_object* v___x_4842_; 
lean_dec(v___f_4840_);
lean_dec(v_toBind_4839_);
lean_dec(v_f_4838_);
v___x_4842_ = lean_apply_2(v_toPure_4836_, lean_box(0), v_b_4837_);
return v___x_4842_;
}
else
{
lean_object* v_val_4843_; lean_object* v___x_4844_; lean_object* v___x_4845_; 
lean_dec(v_toPure_4836_);
v_val_4843_ = lean_ctor_get(v_____do__lift_4841_, 0);
lean_inc(v_val_4843_);
lean_dec_ref_known(v_____do__lift_4841_, 1);
v___x_4844_ = lean_apply_2(v_f_4838_, v_val_4843_, v_b_4837_);
v___x_4845_ = lean_apply_4(v_toBind_4839_, lean_box(0), lean_box(0), v___x_4844_, v___f_4840_);
return v___x_4845_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Sync_forIn___redArg(lean_object* v_inst_4846_, lean_object* v_inst_4847_, lean_object* v_ch_4848_, lean_object* v_f_4849_, lean_object* v_b_4850_){
_start:
{
lean_object* v_toApplicative_4851_; lean_object* v_toBind_4852_; lean_object* v_toPure_4853_; lean_object* v___x_4854_; lean_object* v___x_4855_; lean_object* v___f_4856_; lean_object* v___f_4857_; lean_object* v___x_4858_; 
v_toApplicative_4851_ = lean_ctor_get(v_inst_4846_, 0);
v_toBind_4852_ = lean_ctor_get(v_inst_4846_, 1);
lean_inc_n(v_toBind_4852_, 2);
v_toPure_4853_ = lean_ctor_get(v_toApplicative_4851_, 1);
lean_inc_n(v_toPure_4853_, 2);
lean_inc_ref(v_ch_4848_);
v___x_4854_ = lean_alloc_closure((void*)(l_Std_CloseableChannel_Sync_recv___boxed), 3, 2);
lean_closure_set(v___x_4854_, 0, lean_box(0));
lean_closure_set(v___x_4854_, 1, v_ch_4848_);
lean_inc(v_inst_4847_);
v___x_4855_ = lean_apply_2(v_inst_4847_, lean_box(0), v___x_4854_);
lean_inc(v_f_4849_);
v___f_4856_ = lean_alloc_closure((void*)(l___private_Std_Sync_Channel_0__Std_CloseableChannel_Sync_forIn___redArg___lam__0), 6, 5);
lean_closure_set(v___f_4856_, 0, v_toPure_4853_);
lean_closure_set(v___f_4856_, 1, v_inst_4846_);
lean_closure_set(v___f_4856_, 2, v_inst_4847_);
lean_closure_set(v___f_4856_, 3, v_ch_4848_);
lean_closure_set(v___f_4856_, 4, v_f_4849_);
v___f_4857_ = lean_alloc_closure((void*)(l___private_Std_Sync_Channel_0__Std_CloseableChannel_Sync_forIn___redArg___lam__1), 6, 5);
lean_closure_set(v___f_4857_, 0, v_toPure_4853_);
lean_closure_set(v___f_4857_, 1, v_b_4850_);
lean_closure_set(v___f_4857_, 2, v_f_4849_);
lean_closure_set(v___f_4857_, 3, v_toBind_4852_);
lean_closure_set(v___f_4857_, 4, v___f_4856_);
v___x_4858_ = lean_apply_4(v_toBind_4852_, lean_box(0), lean_box(0), v___x_4855_, v___f_4857_);
return v___x_4858_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Sync_forIn___redArg___lam__0(lean_object* v_toPure_4859_, lean_object* v_inst_4860_, lean_object* v_inst_4861_, lean_object* v_ch_4862_, lean_object* v_f_4863_, lean_object* v_____do__lift_4864_){
_start:
{
if (lean_obj_tag(v_____do__lift_4864_) == 0)
{
lean_object* v_a_4865_; lean_object* v___x_4866_; 
lean_dec(v_f_4863_);
lean_dec_ref(v_ch_4862_);
lean_dec(v_inst_4861_);
lean_dec_ref(v_inst_4860_);
v_a_4865_ = lean_ctor_get(v_____do__lift_4864_, 0);
lean_inc(v_a_4865_);
lean_dec_ref_known(v_____do__lift_4864_, 1);
v___x_4866_ = lean_apply_2(v_toPure_4859_, lean_box(0), v_a_4865_);
return v___x_4866_;
}
else
{
lean_object* v_a_4867_; lean_object* v___x_4868_; 
lean_dec(v_toPure_4859_);
v_a_4867_ = lean_ctor_get(v_____do__lift_4864_, 0);
lean_inc(v_a_4867_);
lean_dec_ref_known(v_____do__lift_4864_, 1);
v___x_4868_ = l___private_Std_Sync_Channel_0__Std_CloseableChannel_Sync_forIn___redArg(v_inst_4860_, v_inst_4861_, v_ch_4862_, v_f_4863_, v_a_4867_);
return v___x_4868_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_CloseableChannel_Sync_forIn(lean_object* v_m_4869_, lean_object* v_00_u03b1_4870_, lean_object* v_00_u03b2_4871_, lean_object* v_inst_4872_, lean_object* v_inst_4873_, lean_object* v_ch_4874_, lean_object* v_f_4875_, lean_object* v_b_4876_){
_start:
{
lean_object* v___x_4877_; 
v___x_4877_ = l___private_Std_Sync_Channel_0__Std_CloseableChannel_Sync_forIn___redArg(v_inst_4872_, v_inst_4873_, v_ch_4874_, v_f_4875_, v_b_4876_);
return v___x_4877_;
}
}
LEAN_EXPORT lean_object* l_Std_CloseableChannel_Sync_instForInOfMonadOfMonadLiftTBaseIO___private__1___redArg(lean_object* v_inst_4878_, lean_object* v_inst_4879_, lean_object* v_ch_4880_, lean_object* v_b_4881_, lean_object* v_f_4882_){
_start:
{
lean_object* v___x_4883_; 
v___x_4883_ = l___private_Std_Sync_Channel_0__Std_CloseableChannel_Sync_forIn___redArg(v_inst_4878_, v_inst_4879_, v_ch_4880_, v_f_4882_, v_b_4881_);
return v___x_4883_;
}
}
LEAN_EXPORT lean_object* l_Std_CloseableChannel_Sync_instForInOfMonadOfMonadLiftTBaseIO___private__1(lean_object* v_m_4884_, lean_object* v_00_u03b1_4885_, lean_object* v_inst_4886_, lean_object* v_inst_4887_, lean_object* v_00_u03b2_4888_, lean_object* v_ch_4889_, lean_object* v_b_4890_, lean_object* v_f_4891_){
_start:
{
lean_object* v___x_4892_; 
v___x_4892_ = l___private_Std_Sync_Channel_0__Std_CloseableChannel_Sync_forIn___redArg(v_inst_4886_, v_inst_4887_, v_ch_4889_, v_f_4891_, v_b_4890_);
return v___x_4892_;
}
}
LEAN_EXPORT lean_object* l_Std_CloseableChannel_Sync_instForInOfMonadOfMonadLiftTBaseIO___redArg___lam__0(lean_object* v_inst_4893_, lean_object* v_inst_4894_, lean_object* v_00_u03b2_4895_, lean_object* v_ch_4896_, lean_object* v_b_4897_, lean_object* v_f_4898_){
_start:
{
lean_object* v___x_4899_; 
v___x_4899_ = l___private_Std_Sync_Channel_0__Std_CloseableChannel_Sync_forIn___redArg(v_inst_4893_, v_inst_4894_, v_ch_4896_, v_f_4898_, v_b_4897_);
return v___x_4899_;
}
}
LEAN_EXPORT lean_object* l_Std_CloseableChannel_Sync_instForInOfMonadOfMonadLiftTBaseIO___redArg(lean_object* v_inst_4900_, lean_object* v_inst_4901_){
_start:
{
lean_object* v___f_4902_; 
v___f_4902_ = lean_alloc_closure((void*)(l_Std_CloseableChannel_Sync_instForInOfMonadOfMonadLiftTBaseIO___redArg___lam__0), 6, 2);
lean_closure_set(v___f_4902_, 0, v_inst_4900_);
lean_closure_set(v___f_4902_, 1, v_inst_4901_);
return v___f_4902_;
}
}
LEAN_EXPORT lean_object* l_Std_CloseableChannel_Sync_instForInOfMonadOfMonadLiftTBaseIO(lean_object* v_m_4903_, lean_object* v_00_u03b1_4904_, lean_object* v_inst_4905_, lean_object* v_inst_4906_){
_start:
{
lean_object* v___f_4907_; 
v___f_4907_ = lean_alloc_closure((void*)(l_Std_CloseableChannel_Sync_instForInOfMonadOfMonadLiftTBaseIO___redArg___lam__0), 6, 2);
lean_closure_set(v___f_4907_, 0, v_inst_4905_);
lean_closure_set(v___f_4907_, 1, v_inst_4906_);
return v___f_4907_;
}
}
LEAN_EXPORT lean_object* l_Std_Channel_new___redArg(lean_object* v_capacity_4908_){
_start:
{
lean_object* v___x_4910_; 
v___x_4910_ = l_Std_CloseableChannel_new___redArg(v_capacity_4908_);
return v___x_4910_;
}
}
LEAN_EXPORT lean_object* l_Std_Channel_new___redArg___boxed(lean_object* v_capacity_4911_, lean_object* v___y_4912_){
_start:
{
lean_object* v_res_4913_; 
v_res_4913_ = l_Std_Channel_new___redArg(v_capacity_4911_);
return v_res_4913_;
}
}
LEAN_EXPORT lean_object* l_Std_Channel_new(lean_object* v_00_u03b1_4914_, lean_object* v_capacity_4915_){
_start:
{
lean_object* v___x_4917_; 
v___x_4917_ = l_Std_CloseableChannel_new___redArg(v_capacity_4915_);
return v___x_4917_;
}
}
LEAN_EXPORT lean_object* l_Std_Channel_new___boxed(lean_object* v_00_u03b1_4918_, lean_object* v_capacity_4919_, lean_object* v___y_4920_){
_start:
{
lean_object* v_res_4921_; 
v_res_4921_ = l_Std_Channel_new(v_00_u03b1_4918_, v_capacity_4919_);
return v_res_4921_;
}
}
LEAN_EXPORT uint8_t l_Std_Channel_trySend___redArg(lean_object* v_ch_4922_, lean_object* v_v_4923_){
_start:
{
uint8_t v___x_4925_; 
v___x_4925_ = l_Std_CloseableChannel_trySend___redArg(v_ch_4922_, v_v_4923_);
return v___x_4925_;
}
}
LEAN_EXPORT lean_object* l_Std_Channel_trySend___redArg___boxed(lean_object* v_ch_4926_, lean_object* v_v_4927_, lean_object* v___y_4928_){
_start:
{
uint8_t v_res_4929_; lean_object* v_r_4930_; 
v_res_4929_ = l_Std_Channel_trySend___redArg(v_ch_4926_, v_v_4927_);
v_r_4930_ = lean_box(v_res_4929_);
return v_r_4930_;
}
}
LEAN_EXPORT uint8_t l_Std_Channel_trySend(lean_object* v_00_u03b1_4931_, lean_object* v_ch_4932_, lean_object* v_v_4933_){
_start:
{
uint8_t v___x_4935_; 
v___x_4935_ = l_Std_CloseableChannel_trySend___redArg(v_ch_4932_, v_v_4933_);
return v___x_4935_;
}
}
LEAN_EXPORT lean_object* l_Std_Channel_trySend___boxed(lean_object* v_00_u03b1_4936_, lean_object* v_ch_4937_, lean_object* v_v_4938_, lean_object* v___y_4939_){
_start:
{
uint8_t v_res_4940_; lean_object* v_r_4941_; 
v_res_4940_ = l_Std_Channel_trySend(v_00_u03b1_4936_, v_ch_4937_, v_v_4938_);
v_r_4941_ = lean_box(v_res_4940_);
return v_r_4941_;
}
}
static lean_object* _init_l_panic___at___00Std_Channel_send_spec__0___closed__0(void){
_start:
{
lean_object* v___x_4942_; lean_object* v___x_4943_; 
v___x_4942_ = lean_box(0);
v___x_4943_ = lean_task_pure(v___x_4942_);
return v___x_4943_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Std_Channel_send_spec__0(lean_object* v_msg_4944_){
_start:
{
lean_object* v___x_4946_; lean_object* v___x_4947_; lean_object* v___x_4948_; lean_object* v___x_492__overap_4949_; lean_object* v___x_4950_; 
v___x_4946_ = l_instMonadBaseIO;
v___x_4947_ = lean_obj_once(&l_panic___at___00Std_Channel_send_spec__0___closed__0, &l_panic___at___00Std_Channel_send_spec__0___closed__0_once, _init_l_panic___at___00Std_Channel_send_spec__0___closed__0);
v___x_4948_ = l_instInhabitedOfMonad___redArg(v___x_4946_, v___x_4947_);
v___x_492__overap_4949_ = lean_panic_fn_borrowed(v___x_4948_, v_msg_4944_);
lean_dec(v___x_4948_);
v___x_4950_ = lean_apply_1(v___x_492__overap_4949_, lean_box(0));
return v___x_4950_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Std_Channel_send_spec__0___boxed(lean_object* v_msg_4951_, lean_object* v___y_4952_){
_start:
{
lean_object* v_res_4953_; 
v_res_4953_ = l_panic___at___00Std_Channel_send_spec__0(v_msg_4951_);
return v_res_4953_;
}
}
static lean_object* _init_l_Std_Channel_send___redArg___lam__0___closed__3(void){
_start:
{
lean_object* v___x_4957_; lean_object* v___x_4958_; lean_object* v___x_4959_; lean_object* v___x_4960_; lean_object* v___x_4961_; lean_object* v___x_4962_; 
v___x_4957_ = ((lean_object*)(l_Std_Channel_send___redArg___lam__0___closed__2));
v___x_4958_ = lean_unsigned_to_nat(21u);
v___x_4959_ = lean_unsigned_to_nat(867u);
v___x_4960_ = ((lean_object*)(l_Std_Channel_send___redArg___lam__0___closed__1));
v___x_4961_ = ((lean_object*)(l_Std_Channel_send___redArg___lam__0___closed__0));
v___x_4962_ = l_mkPanicMessageWithDecl(v___x_4961_, v___x_4960_, v___x_4959_, v___x_4958_, v___x_4957_);
return v___x_4962_;
}
}
LEAN_EXPORT lean_object* l_Std_Channel_send___redArg___lam__0(lean_object* v_x_4963_){
_start:
{
if (lean_obj_tag(v_x_4963_) == 0)
{
lean_object* v___x_4965_; lean_object* v___x_4966_; 
v___x_4965_ = lean_obj_once(&l_Std_Channel_send___redArg___lam__0___closed__3, &l_Std_Channel_send___redArg___lam__0___closed__3_once, _init_l_Std_Channel_send___redArg___lam__0___closed__3);
v___x_4966_ = l_panic___at___00Std_Channel_send_spec__0(v___x_4965_);
return v___x_4966_;
}
else
{
lean_object* v___x_4967_; 
v___x_4967_ = lean_obj_once(&l_Std_CloseableChannel_forAsync___redArg___lam__0___closed__0, &l_Std_CloseableChannel_forAsync___redArg___lam__0___closed__0_once, _init_l_Std_CloseableChannel_forAsync___redArg___lam__0___closed__0);
return v___x_4967_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Channel_send___redArg___lam__0___boxed(lean_object* v_x_4968_, lean_object* v___y_4969_){
_start:
{
lean_object* v_res_4970_; 
v_res_4970_ = l_Std_Channel_send___redArg___lam__0(v_x_4968_);
lean_dec_ref(v_x_4968_);
return v_res_4970_;
}
}
LEAN_EXPORT lean_object* l_Std_Channel_send___redArg(lean_object* v_ch_4972_, lean_object* v_v_4973_){
_start:
{
lean_object* v___f_4975_; lean_object* v___x_4976_; lean_object* v___x_4977_; uint8_t v___x_4978_; lean_object* v___x_4979_; 
v___f_4975_ = ((lean_object*)(l_Std_Channel_send___redArg___closed__0));
v___x_4976_ = l_Std_CloseableChannel_send___redArg(v_ch_4972_, v_v_4973_);
v___x_4977_ = lean_unsigned_to_nat(0u);
v___x_4978_ = 1;
v___x_4979_ = lean_io_bind_task(v___x_4976_, v___f_4975_, v___x_4977_, v___x_4978_);
return v___x_4979_;
}
}
LEAN_EXPORT lean_object* l_Std_Channel_send___redArg___boxed(lean_object* v_ch_4980_, lean_object* v_v_4981_, lean_object* v___y_4982_){
_start:
{
lean_object* v_res_4983_; 
v_res_4983_ = l_Std_Channel_send___redArg(v_ch_4980_, v_v_4981_);
return v_res_4983_;
}
}
LEAN_EXPORT lean_object* l_Std_Channel_send(lean_object* v_00_u03b1_4984_, lean_object* v_ch_4985_, lean_object* v_v_4986_){
_start:
{
lean_object* v___x_4988_; 
v___x_4988_ = l_Std_Channel_send___redArg(v_ch_4985_, v_v_4986_);
return v___x_4988_;
}
}
LEAN_EXPORT lean_object* l_Std_Channel_send___boxed(lean_object* v_00_u03b1_4989_, lean_object* v_ch_4990_, lean_object* v_v_4991_, lean_object* v___y_4992_){
_start:
{
lean_object* v_res_4993_; 
v_res_4993_ = l_Std_Channel_send(v_00_u03b1_4989_, v_ch_4990_, v_v_4991_);
return v_res_4993_;
}
}
LEAN_EXPORT lean_object* l_Std_Channel_tryRecv___redArg(lean_object* v_ch_4994_){
_start:
{
lean_object* v___x_4996_; 
v___x_4996_ = l_Std_CloseableChannel_tryRecv___redArg(v_ch_4994_);
return v___x_4996_;
}
}
LEAN_EXPORT lean_object* l_Std_Channel_tryRecv___redArg___boxed(lean_object* v_ch_4997_, lean_object* v___y_4998_){
_start:
{
lean_object* v_res_4999_; 
v_res_4999_ = l_Std_Channel_tryRecv___redArg(v_ch_4997_);
return v_res_4999_;
}
}
LEAN_EXPORT lean_object* l_Std_Channel_tryRecv(lean_object* v_00_u03b1_5000_, lean_object* v_ch_5001_){
_start:
{
lean_object* v___x_5003_; 
v___x_5003_ = l_Std_CloseableChannel_tryRecv___redArg(v_ch_5001_);
return v___x_5003_;
}
}
LEAN_EXPORT lean_object* l_Std_Channel_tryRecv___boxed(lean_object* v_00_u03b1_5004_, lean_object* v_ch_5005_, lean_object* v___y_5006_){
_start:
{
lean_object* v_res_5007_; 
v_res_5007_ = l_Std_Channel_tryRecv(v_00_u03b1_5004_, v_ch_5005_);
return v_res_5007_;
}
}
static lean_object* _init_l_Std_Channel_recv___redArg___lam__0___closed__1(void){
_start:
{
lean_object* v___x_5009_; lean_object* v___x_5010_; lean_object* v___x_5011_; lean_object* v___x_5012_; lean_object* v___x_5013_; lean_object* v___x_5014_; 
v___x_5009_ = ((lean_object*)(l_Std_Channel_send___redArg___lam__0___closed__2));
v___x_5010_ = lean_unsigned_to_nat(16u);
v___x_5011_ = lean_unsigned_to_nat(878u);
v___x_5012_ = ((lean_object*)(l_Std_Channel_recv___redArg___lam__0___closed__0));
v___x_5013_ = ((lean_object*)(l_Std_Channel_send___redArg___lam__0___closed__0));
v___x_5014_ = l_mkPanicMessageWithDecl(v___x_5013_, v___x_5012_, v___x_5011_, v___x_5010_, v___x_5009_);
return v___x_5014_;
}
}
LEAN_EXPORT lean_object* l_Std_Channel_recv___redArg___lam__0(lean_object* v___x_5015_, lean_object* v_x_5016_){
_start:
{
if (lean_obj_tag(v_x_5016_) == 0)
{
lean_object* v___x_5018_; lean_object* v___x_488__overap_5019_; lean_object* v___x_5020_; 
v___x_5018_ = lean_obj_once(&l_Std_Channel_recv___redArg___lam__0___closed__1, &l_Std_Channel_recv___redArg___lam__0___closed__1_once, _init_l_Std_Channel_recv___redArg___lam__0___closed__1);
v___x_488__overap_5019_ = l_panic___redArg(v___x_5015_, v___x_5018_);
v___x_5020_ = lean_apply_1(v___x_488__overap_5019_, lean_box(0));
return v___x_5020_;
}
else
{
lean_object* v_val_5021_; lean_object* v___x_5022_; 
v_val_5021_ = lean_ctor_get(v_x_5016_, 0);
lean_inc(v_val_5021_);
lean_dec_ref_known(v_x_5016_, 1);
v___x_5022_ = lean_task_pure(v_val_5021_);
return v___x_5022_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Channel_recv___redArg___lam__0___boxed(lean_object* v___x_5023_, lean_object* v_x_5024_, lean_object* v___y_5025_){
_start:
{
lean_object* v_res_5026_; 
v_res_5026_ = l_Std_Channel_recv___redArg___lam__0(v___x_5023_, v_x_5024_);
lean_dec(v___x_5023_);
return v_res_5026_;
}
}
LEAN_EXPORT lean_object* l_Std_Channel_recv___redArg(lean_object* v_inst_5027_, lean_object* v_ch_5028_){
_start:
{
lean_object* v___x_5030_; lean_object* v___x_5031_; lean_object* v___x_5032_; lean_object* v___f_5033_; lean_object* v___x_5034_; lean_object* v___x_5035_; uint8_t v___x_5036_; lean_object* v___x_5037_; 
v___x_5030_ = l_instMonadBaseIO;
v___x_5031_ = lean_task_pure(v_inst_5027_);
v___x_5032_ = l_instInhabitedOfMonad___redArg(v___x_5030_, v___x_5031_);
v___f_5033_ = lean_alloc_closure((void*)(l_Std_Channel_recv___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_5033_, 0, v___x_5032_);
v___x_5034_ = l_Std_CloseableChannel_recv___redArg(v_ch_5028_);
v___x_5035_ = lean_unsigned_to_nat(0u);
v___x_5036_ = 1;
v___x_5037_ = lean_io_bind_task(v___x_5034_, v___f_5033_, v___x_5035_, v___x_5036_);
return v___x_5037_;
}
}
LEAN_EXPORT lean_object* l_Std_Channel_recv___redArg___boxed(lean_object* v_inst_5038_, lean_object* v_ch_5039_, lean_object* v___y_5040_){
_start:
{
lean_object* v_res_5041_; 
v_res_5041_ = l_Std_Channel_recv___redArg(v_inst_5038_, v_ch_5039_);
return v_res_5041_;
}
}
LEAN_EXPORT lean_object* l_Std_Channel_recv(lean_object* v_00_u03b1_5042_, lean_object* v_inst_5043_, lean_object* v_ch_5044_){
_start:
{
lean_object* v___x_5046_; 
v___x_5046_ = l_Std_Channel_recv___redArg(v_inst_5043_, v_ch_5044_);
return v___x_5046_;
}
}
LEAN_EXPORT lean_object* l_Std_Channel_recv___boxed(lean_object* v_00_u03b1_5047_, lean_object* v_inst_5048_, lean_object* v_ch_5049_, lean_object* v___y_5050_){
_start:
{
lean_object* v_res_5051_; 
v_res_5051_ = l_Std_Channel_recv(v_00_u03b1_5047_, v_inst_5048_, v_ch_5049_);
return v_res_5051_;
}
}
LEAN_EXPORT lean_object* l_Std_Channel_recvSelector___redArg___lam__0(lean_object* v_ch_5052_){
_start:
{
lean_object* v___x_5054_; lean_object* v___x_5055_; lean_object* v___x_5056_; 
v___x_5054_ = l_Std_CloseableChannel_tryRecv___redArg(v_ch_5052_);
v___x_5055_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5055_, 0, v___x_5054_);
v___x_5056_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5056_, 0, v___x_5055_);
return v___x_5056_;
}
}
LEAN_EXPORT lean_object* l_Std_Channel_recvSelector___redArg___lam__0___boxed(lean_object* v_ch_5057_, lean_object* v___y_5058_){
_start:
{
lean_object* v_res_5059_; 
v_res_5059_ = l_Std_Channel_recvSelector___redArg___lam__0(v_ch_5057_);
return v_res_5059_;
}
}
static lean_object* _init_l_Std_Channel_recvSelector___redArg___lam__1___closed__3(void){
_start:
{
lean_object* v___x_5063_; lean_object* v___x_5064_; lean_object* v___x_5065_; lean_object* v___x_5066_; lean_object* v___x_5067_; lean_object* v___x_5068_; 
v___x_5063_ = ((lean_object*)(l_Std_Channel_recvSelector___redArg___lam__1___closed__2));
v___x_5064_ = lean_unsigned_to_nat(14u);
v___x_5065_ = lean_unsigned_to_nat(22u);
v___x_5066_ = ((lean_object*)(l_Std_Channel_recvSelector___redArg___lam__1___closed__1));
v___x_5067_ = ((lean_object*)(l_Std_Channel_recvSelector___redArg___lam__1___closed__0));
v___x_5068_ = l_mkPanicMessageWithDecl(v___x_5067_, v___x_5066_, v___x_5065_, v___x_5064_, v___x_5063_);
return v___x_5068_;
}
}
LEAN_EXPORT lean_object* l_Std_Channel_recvSelector___redArg___lam__1(lean_object* v_promise_5069_, lean_object* v_inst_5070_, lean_object* v_x_5071_){
_start:
{
lean_object* v___y_5074_; lean_object* v___y_5078_; 
if (lean_obj_tag(v_x_5071_) == 0)
{
lean_object* v___x_5080_; lean_object* v___x_5081_; 
v___x_5080_ = lean_box(0);
v___x_5081_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5081_, 0, v___x_5080_);
return v___x_5081_;
}
else
{
lean_object* v_val_5082_; 
v_val_5082_ = lean_ctor_get(v_x_5071_, 0);
lean_inc(v_val_5082_);
lean_dec_ref_known(v_x_5071_, 1);
if (lean_obj_tag(v_val_5082_) == 0)
{
lean_object* v_a_5083_; lean_object* v___x_5085_; uint8_t v_isShared_5086_; uint8_t v_isSharedCheck_5090_; 
v_a_5083_ = lean_ctor_get(v_val_5082_, 0);
v_isSharedCheck_5090_ = !lean_is_exclusive(v_val_5082_);
if (v_isSharedCheck_5090_ == 0)
{
v___x_5085_ = v_val_5082_;
v_isShared_5086_ = v_isSharedCheck_5090_;
goto v_resetjp_5084_;
}
else
{
lean_inc(v_a_5083_);
lean_dec(v_val_5082_);
v___x_5085_ = lean_box(0);
v_isShared_5086_ = v_isSharedCheck_5090_;
goto v_resetjp_5084_;
}
v_resetjp_5084_:
{
lean_object* v___x_5088_; 
if (v_isShared_5086_ == 0)
{
v___x_5088_ = v___x_5085_;
goto v_reusejp_5087_;
}
else
{
lean_object* v_reuseFailAlloc_5089_; 
v_reuseFailAlloc_5089_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5089_, 0, v_a_5083_);
v___x_5088_ = v_reuseFailAlloc_5089_;
goto v_reusejp_5087_;
}
v_reusejp_5087_:
{
v___y_5074_ = v___x_5088_;
goto v___jp_5073_;
}
}
}
else
{
lean_object* v_a_5091_; 
v_a_5091_ = lean_ctor_get(v_val_5082_, 0);
lean_inc(v_a_5091_);
lean_dec_ref_known(v_val_5082_, 1);
if (lean_obj_tag(v_a_5091_) == 0)
{
lean_object* v___x_5092_; lean_object* v___x_5093_; 
v___x_5092_ = lean_obj_once(&l_Std_Channel_recvSelector___redArg___lam__1___closed__3, &l_Std_Channel_recvSelector___redArg___lam__1___closed__3_once, _init_l_Std_Channel_recvSelector___redArg___lam__1___closed__3);
v___x_5093_ = l_panic___redArg(v_inst_5070_, v___x_5092_);
v___y_5078_ = v___x_5093_;
goto v___jp_5077_;
}
else
{
lean_object* v_val_5094_; 
v_val_5094_ = lean_ctor_get(v_a_5091_, 0);
lean_inc(v_val_5094_);
lean_dec_ref_known(v_a_5091_, 1);
v___y_5078_ = v_val_5094_;
goto v___jp_5077_;
}
}
}
v___jp_5073_:
{
lean_object* v___x_5075_; lean_object* v___x_5076_; 
v___x_5075_ = lean_io_promise_resolve(v___y_5074_, v_promise_5069_);
v___x_5076_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5076_, 0, v___x_5075_);
return v___x_5076_;
}
v___jp_5077_:
{
lean_object* v___x_5079_; 
v___x_5079_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5079_, 0, v___y_5078_);
v___y_5074_ = v___x_5079_;
goto v___jp_5073_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Channel_recvSelector___redArg___lam__1___boxed(lean_object* v_promise_5095_, lean_object* v_inst_5096_, lean_object* v_x_5097_, lean_object* v___y_5098_){
_start:
{
lean_object* v_res_5099_; 
v_res_5099_ = l_Std_Channel_recvSelector___redArg___lam__1(v_promise_5095_, v_inst_5096_, v_x_5097_);
lean_dec(v_inst_5096_);
lean_dec(v_promise_5095_);
return v_res_5099_;
}
}
LEAN_EXPORT lean_object* l_Std_Channel_recvSelector___redArg___lam__2(lean_object* v_a_5100_, lean_object* v___f_5101_, lean_object* v_x_5102_){
_start:
{
lean_object* v_val_5105_; 
if (lean_obj_tag(v_x_5102_) == 0)
{
lean_object* v___x_5107_; 
lean_dec_ref(v___f_5101_);
v___x_5107_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5107_, 0, v_x_5102_);
return v___x_5107_;
}
else
{
lean_object* v___x_5109_; uint8_t v_isShared_5110_; uint8_t v_isSharedCheck_5123_; 
v_isSharedCheck_5123_ = !lean_is_exclusive(v_x_5102_);
if (v_isSharedCheck_5123_ == 0)
{
lean_object* v_unused_5124_; 
v_unused_5124_ = lean_ctor_get(v_x_5102_, 0);
lean_dec(v_unused_5124_);
v___x_5109_ = v_x_5102_;
v_isShared_5110_ = v_isSharedCheck_5123_;
goto v_resetjp_5108_;
}
else
{
lean_dec(v_x_5102_);
v___x_5109_ = lean_box(0);
v_isShared_5110_ = v_isSharedCheck_5123_;
goto v_resetjp_5108_;
}
v_resetjp_5108_:
{
lean_object* v___x_5111_; lean_object* v___x_5112_; uint8_t v___x_5113_; lean_object* v___x_5114_; 
v___x_5111_ = lean_io_promise_result_opt(v_a_5100_);
v___x_5112_ = lean_unsigned_to_nat(0u);
v___x_5113_ = 1;
v___x_5114_ = l_EIO_chainTask___redArg(v___x_5111_, v___f_5101_, v___x_5112_, v___x_5113_);
if (lean_obj_tag(v___x_5114_) == 0)
{
lean_object* v_a_5115_; lean_object* v___x_5117_; 
v_a_5115_ = lean_ctor_get(v___x_5114_, 0);
lean_inc(v_a_5115_);
lean_dec_ref_known(v___x_5114_, 1);
if (v_isShared_5110_ == 0)
{
lean_ctor_set(v___x_5109_, 0, v_a_5115_);
v___x_5117_ = v___x_5109_;
goto v_reusejp_5116_;
}
else
{
lean_object* v_reuseFailAlloc_5118_; 
v_reuseFailAlloc_5118_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5118_, 0, v_a_5115_);
v___x_5117_ = v_reuseFailAlloc_5118_;
goto v_reusejp_5116_;
}
v_reusejp_5116_:
{
v_val_5105_ = v___x_5117_;
goto v___jp_5104_;
}
}
else
{
lean_object* v_a_5119_; lean_object* v___x_5121_; 
v_a_5119_ = lean_ctor_get(v___x_5114_, 0);
lean_inc(v_a_5119_);
lean_dec_ref_known(v___x_5114_, 1);
if (v_isShared_5110_ == 0)
{
lean_ctor_set_tag(v___x_5109_, 0);
lean_ctor_set(v___x_5109_, 0, v_a_5119_);
v___x_5121_ = v___x_5109_;
goto v_reusejp_5120_;
}
else
{
lean_object* v_reuseFailAlloc_5122_; 
v_reuseFailAlloc_5122_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5122_, 0, v_a_5119_);
v___x_5121_ = v_reuseFailAlloc_5122_;
goto v_reusejp_5120_;
}
v_reusejp_5120_:
{
v_val_5105_ = v___x_5121_;
goto v___jp_5104_;
}
}
}
}
v___jp_5104_:
{
lean_object* v___x_5106_; 
v___x_5106_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5106_, 0, v_val_5105_);
return v___x_5106_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Channel_recvSelector___redArg___lam__2___boxed(lean_object* v_a_5125_, lean_object* v___f_5126_, lean_object* v_x_5127_, lean_object* v___y_5128_){
_start:
{
lean_object* v_res_5129_; 
v_res_5129_ = l_Std_Channel_recvSelector___redArg___lam__2(v_a_5125_, v___f_5126_, v_x_5127_);
lean_dec(v_a_5125_);
return v_res_5129_;
}
}
LEAN_EXPORT lean_object* l_Std_Channel_recvSelector___redArg___lam__3(lean_object* v_sel_5130_, lean_object* v___f_5131_, lean_object* v_finished_5132_, lean_object* v_x_5133_){
_start:
{
if (lean_obj_tag(v_x_5133_) == 0)
{
lean_object* v_a_5135_; lean_object* v___x_5137_; uint8_t v_isShared_5138_; uint8_t v_isSharedCheck_5143_; 
lean_dec(v_finished_5132_);
lean_dec_ref(v___f_5131_);
lean_dec_ref(v_sel_5130_);
v_a_5135_ = lean_ctor_get(v_x_5133_, 0);
v_isSharedCheck_5143_ = !lean_is_exclusive(v_x_5133_);
if (v_isSharedCheck_5143_ == 0)
{
v___x_5137_ = v_x_5133_;
v_isShared_5138_ = v_isSharedCheck_5143_;
goto v_resetjp_5136_;
}
else
{
lean_inc(v_a_5135_);
lean_dec(v_x_5133_);
v___x_5137_ = lean_box(0);
v_isShared_5138_ = v_isSharedCheck_5143_;
goto v_resetjp_5136_;
}
v_resetjp_5136_:
{
lean_object* v___x_5140_; 
if (v_isShared_5138_ == 0)
{
v___x_5140_ = v___x_5137_;
goto v_reusejp_5139_;
}
else
{
lean_object* v_reuseFailAlloc_5142_; 
v_reuseFailAlloc_5142_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5142_, 0, v_a_5135_);
v___x_5140_ = v_reuseFailAlloc_5142_;
goto v_reusejp_5139_;
}
v_reusejp_5139_:
{
lean_object* v___x_5141_; 
v___x_5141_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5141_, 0, v___x_5140_);
return v___x_5141_;
}
}
}
else
{
lean_object* v_a_5144_; lean_object* v_registerFn_5145_; lean_object* v___f_5146_; lean_object* v___x_5147_; lean_object* v___x_5148_; uint8_t v___x_5149_; lean_object* v___x_5150_; lean_object* v___x_5151_; 
v_a_5144_ = lean_ctor_get(v_x_5133_, 0);
lean_inc_n(v_a_5144_, 2);
lean_dec_ref_known(v_x_5133_, 1);
v_registerFn_5145_ = lean_ctor_get(v_sel_5130_, 1);
lean_inc_ref(v_registerFn_5145_);
lean_dec_ref(v_sel_5130_);
v___f_5146_ = lean_alloc_closure((void*)(l_Std_Channel_recvSelector___redArg___lam__2___boxed), 4, 2);
lean_closure_set(v___f_5146_, 0, v_a_5144_);
lean_closure_set(v___f_5146_, 1, v___f_5131_);
v___x_5147_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5147_, 0, v_finished_5132_);
lean_ctor_set(v___x_5147_, 1, v_a_5144_);
v___x_5148_ = lean_unsigned_to_nat(0u);
v___x_5149_ = 0;
v___x_5150_ = lean_apply_2(v_registerFn_5145_, v___x_5147_, lean_box(0));
v___x_5151_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_5148_, v___x_5149_, v___x_5150_, v___f_5146_);
return v___x_5151_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Channel_recvSelector___redArg___lam__3___boxed(lean_object* v_sel_5152_, lean_object* v___f_5153_, lean_object* v_finished_5154_, lean_object* v_x_5155_, lean_object* v___y_5156_){
_start:
{
lean_object* v_res_5157_; 
v_res_5157_ = l_Std_Channel_recvSelector___redArg___lam__3(v_sel_5152_, v___f_5153_, v_finished_5154_, v_x_5155_);
return v_res_5157_;
}
}
LEAN_EXPORT lean_object* l_Std_Channel_recvSelector___redArg___lam__4(lean_object* v_inst_5158_, lean_object* v_sel_5159_, lean_object* v_waiter_5160_){
_start:
{
lean_object* v_finished_5162_; lean_object* v_promise_5163_; lean_object* v___f_5164_; lean_object* v___f_5165_; lean_object* v___x_5166_; uint8_t v___x_5167_; lean_object* v___x_5168_; lean_object* v___x_5169_; lean_object* v___x_5170_; lean_object* v___x_5171_; 
v_finished_5162_ = lean_ctor_get(v_waiter_5160_, 0);
lean_inc(v_finished_5162_);
v_promise_5163_ = lean_ctor_get(v_waiter_5160_, 1);
lean_inc(v_promise_5163_);
lean_dec_ref(v_waiter_5160_);
v___f_5164_ = lean_alloc_closure((void*)(l_Std_Channel_recvSelector___redArg___lam__1___boxed), 4, 2);
lean_closure_set(v___f_5164_, 0, v_promise_5163_);
lean_closure_set(v___f_5164_, 1, v_inst_5158_);
v___f_5165_ = lean_alloc_closure((void*)(l_Std_Channel_recvSelector___redArg___lam__3___boxed), 5, 3);
lean_closure_set(v___f_5165_, 0, v_sel_5159_);
lean_closure_set(v___f_5165_, 1, v___f_5164_);
lean_closure_set(v___f_5165_, 2, v_finished_5162_);
v___x_5166_ = lean_unsigned_to_nat(0u);
v___x_5167_ = 0;
v___x_5168_ = lean_io_promise_new();
v___x_5169_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5169_, 0, v___x_5168_);
v___x_5170_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5170_, 0, v___x_5169_);
v___x_5171_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_5166_, v___x_5167_, v___x_5170_, v___f_5165_);
return v___x_5171_;
}
}
LEAN_EXPORT lean_object* l_Std_Channel_recvSelector___redArg___lam__4___boxed(lean_object* v_inst_5172_, lean_object* v_sel_5173_, lean_object* v_waiter_5174_, lean_object* v___y_5175_){
_start:
{
lean_object* v_res_5176_; 
v_res_5176_ = l_Std_Channel_recvSelector___redArg___lam__4(v_inst_5172_, v_sel_5173_, v_waiter_5174_);
return v_res_5176_;
}
}
LEAN_EXPORT lean_object* l_Std_Channel_recvSelector___redArg(lean_object* v_inst_5177_, lean_object* v_ch_5178_){
_start:
{
lean_object* v_sel_5179_; lean_object* v_unregisterFn_5180_; lean_object* v___f_5181_; lean_object* v___f_5182_; lean_object* v___x_5183_; 
lean_inc_ref(v_ch_5178_);
v_sel_5179_ = l_Std_CloseableChannel_recvSelector___redArg(v_ch_5178_);
v_unregisterFn_5180_ = lean_ctor_get(v_sel_5179_, 2);
lean_inc_ref(v_unregisterFn_5180_);
v___f_5181_ = lean_alloc_closure((void*)(l_Std_Channel_recvSelector___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_5181_, 0, v_ch_5178_);
v___f_5182_ = lean_alloc_closure((void*)(l_Std_Channel_recvSelector___redArg___lam__4___boxed), 4, 2);
lean_closure_set(v___f_5182_, 0, v_inst_5177_);
lean_closure_set(v___f_5182_, 1, v_sel_5179_);
v___x_5183_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_5183_, 0, v___f_5181_);
lean_ctor_set(v___x_5183_, 1, v___f_5182_);
lean_ctor_set(v___x_5183_, 2, v_unregisterFn_5180_);
return v___x_5183_;
}
}
LEAN_EXPORT lean_object* l_Std_Channel_recvSelector(lean_object* v_00_u03b1_5184_, lean_object* v_inst_5185_, lean_object* v_ch_5186_){
_start:
{
lean_object* v___x_5187_; 
v___x_5187_ = l_Std_Channel_recvSelector___redArg(v_inst_5185_, v_ch_5186_);
return v___x_5187_;
}
}
LEAN_EXPORT lean_object* l_Std_Channel_forAsync___redArg___lam__0___boxed(lean_object* v_f_5188_, lean_object* v_inst_5189_, lean_object* v_ch_5190_, lean_object* v_prio_5191_, lean_object* v_v_5192_, lean_object* v___y_5193_){
_start:
{
lean_object* v_res_5194_; 
v_res_5194_ = l_Std_Channel_forAsync___redArg___lam__0(v_f_5188_, v_inst_5189_, v_ch_5190_, v_prio_5191_, v_v_5192_);
return v_res_5194_;
}
}
LEAN_EXPORT lean_object* l_Std_Channel_forAsync___redArg(lean_object* v_inst_5195_, lean_object* v_f_5196_, lean_object* v_ch_5197_, lean_object* v_prio_5198_){
_start:
{
lean_object* v___f_5200_; lean_object* v___x_5201_; uint8_t v___x_5202_; lean_object* v___x_5203_; 
lean_inc(v_prio_5198_);
lean_inc_ref(v_ch_5197_);
lean_inc(v_inst_5195_);
v___f_5200_ = lean_alloc_closure((void*)(l_Std_Channel_forAsync___redArg___lam__0___boxed), 6, 4);
lean_closure_set(v___f_5200_, 0, v_f_5196_);
lean_closure_set(v___f_5200_, 1, v_inst_5195_);
lean_closure_set(v___f_5200_, 2, v_ch_5197_);
lean_closure_set(v___f_5200_, 3, v_prio_5198_);
v___x_5201_ = l_Std_Channel_recv___redArg(v_inst_5195_, v_ch_5197_);
v___x_5202_ = 0;
v___x_5203_ = lean_io_bind_task(v___x_5201_, v___f_5200_, v_prio_5198_, v___x_5202_);
return v___x_5203_;
}
}
LEAN_EXPORT lean_object* l_Std_Channel_forAsync___redArg___lam__0(lean_object* v_f_5204_, lean_object* v_inst_5205_, lean_object* v_ch_5206_, lean_object* v_prio_5207_, lean_object* v_v_5208_){
_start:
{
lean_object* v___x_5210_; lean_object* v___x_5211_; 
lean_inc_ref(v_f_5204_);
v___x_5210_ = lean_apply_2(v_f_5204_, v_v_5208_, lean_box(0));
v___x_5211_ = l_Std_Channel_forAsync___redArg(v_inst_5205_, v_f_5204_, v_ch_5206_, v_prio_5207_);
return v___x_5211_;
}
}
LEAN_EXPORT lean_object* l_Std_Channel_forAsync___redArg___boxed(lean_object* v_inst_5212_, lean_object* v_f_5213_, lean_object* v_ch_5214_, lean_object* v_prio_5215_, lean_object* v___y_5216_){
_start:
{
lean_object* v_res_5217_; 
v_res_5217_ = l_Std_Channel_forAsync___redArg(v_inst_5212_, v_f_5213_, v_ch_5214_, v_prio_5215_);
return v_res_5217_;
}
}
LEAN_EXPORT lean_object* l_Std_Channel_forAsync(lean_object* v_00_u03b1_5218_, lean_object* v_inst_5219_, lean_object* v_f_5220_, lean_object* v_ch_5221_, lean_object* v_prio_5222_){
_start:
{
lean_object* v___x_5224_; 
v___x_5224_ = l_Std_Channel_forAsync___redArg(v_inst_5219_, v_f_5220_, v_ch_5221_, v_prio_5222_);
return v___x_5224_;
}
}
LEAN_EXPORT lean_object* l_Std_Channel_forAsync___boxed(lean_object* v_00_u03b1_5225_, lean_object* v_inst_5226_, lean_object* v_f_5227_, lean_object* v_ch_5228_, lean_object* v_prio_5229_, lean_object* v___y_5230_){
_start:
{
lean_object* v_res_5231_; 
v_res_5231_ = l_Std_Channel_forAsync(v_00_u03b1_5225_, v_inst_5226_, v_f_5227_, v_ch_5228_, v_prio_5229_);
return v_res_5231_;
}
}
LEAN_EXPORT lean_object* l_Std_Channel_instAsyncStreamOfInhabited___redArg___lam__0(lean_object* v_inst_5232_, lean_object* v_channel_5233_){
_start:
{
lean_object* v___x_5234_; 
v___x_5234_ = l_Std_Channel_recvSelector___redArg(v_inst_5232_, v_channel_5233_);
return v___x_5234_;
}
}
LEAN_EXPORT lean_object* l_Std_Channel_instAsyncStreamOfInhabited___redArg(lean_object* v_inst_5235_){
_start:
{
lean_object* v___f_5236_; lean_object* v___f_5237_; lean_object* v___x_5238_; 
v___f_5236_ = lean_alloc_closure((void*)(l_Std_Channel_instAsyncStreamOfInhabited___redArg___lam__0), 2, 1);
lean_closure_set(v___f_5236_, 0, v_inst_5235_);
v___f_5237_ = ((lean_object*)(l_Std_CloseableChannel_instAsyncStreamOptionOfInhabited___redArg___closed__1));
v___x_5238_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5238_, 0, v___f_5236_);
lean_ctor_set(v___x_5238_, 1, v___f_5237_);
return v___x_5238_;
}
}
LEAN_EXPORT lean_object* l_Std_Channel_instAsyncStreamOfInhabited(lean_object* v_00_u03b1_5239_, lean_object* v_inst_5240_){
_start:
{
lean_object* v___x_5241_; 
v___x_5241_ = l_Std_Channel_instAsyncStreamOfInhabited___redArg(v_inst_5240_);
return v___x_5241_;
}
}
LEAN_EXPORT lean_object* l_Std_Channel_instAsyncReadOfInhabited___redArg___lam__0(lean_object* v_a_5242_){
_start:
{
lean_object* v___x_5243_; 
v___x_5243_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5243_, 0, v_a_5242_);
return v___x_5243_;
}
}
LEAN_EXPORT lean_object* l_Std_Channel_instAsyncReadOfInhabited___redArg___lam__1(lean_object* v___f_5244_, lean_object* v_x_5245_){
_start:
{
if (lean_obj_tag(v_x_5245_) == 0)
{
lean_object* v_a_5247_; lean_object* v___x_5249_; uint8_t v_isShared_5250_; uint8_t v_isSharedCheck_5255_; 
lean_dec_ref(v___f_5244_);
v_a_5247_ = lean_ctor_get(v_x_5245_, 0);
v_isSharedCheck_5255_ = !lean_is_exclusive(v_x_5245_);
if (v_isSharedCheck_5255_ == 0)
{
v___x_5249_ = v_x_5245_;
v_isShared_5250_ = v_isSharedCheck_5255_;
goto v_resetjp_5248_;
}
else
{
lean_inc(v_a_5247_);
lean_dec(v_x_5245_);
v___x_5249_ = lean_box(0);
v_isShared_5250_ = v_isSharedCheck_5255_;
goto v_resetjp_5248_;
}
v_resetjp_5248_:
{
lean_object* v___x_5252_; 
if (v_isShared_5250_ == 0)
{
v___x_5252_ = v___x_5249_;
goto v_reusejp_5251_;
}
else
{
lean_object* v_reuseFailAlloc_5254_; 
v_reuseFailAlloc_5254_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5254_, 0, v_a_5247_);
v___x_5252_ = v_reuseFailAlloc_5254_;
goto v_reusejp_5251_;
}
v_reusejp_5251_:
{
lean_object* v___x_5253_; 
v___x_5253_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5253_, 0, v___x_5252_);
return v___x_5253_;
}
}
}
else
{
lean_object* v_a_5256_; 
v_a_5256_ = lean_ctor_get(v_x_5245_, 0);
lean_inc(v_a_5256_);
lean_dec_ref_known(v_x_5245_, 1);
if (lean_obj_tag(v_a_5256_) == 0)
{
lean_object* v_a_5257_; lean_object* v___x_5259_; uint8_t v_isShared_5260_; uint8_t v_isSharedCheck_5265_; 
lean_dec_ref(v___f_5244_);
v_a_5257_ = lean_ctor_get(v_a_5256_, 0);
v_isSharedCheck_5265_ = !lean_is_exclusive(v_a_5256_);
if (v_isSharedCheck_5265_ == 0)
{
v___x_5259_ = v_a_5256_;
v_isShared_5260_ = v_isSharedCheck_5265_;
goto v_resetjp_5258_;
}
else
{
lean_inc(v_a_5257_);
lean_dec(v_a_5256_);
v___x_5259_ = lean_box(0);
v_isShared_5260_ = v_isSharedCheck_5265_;
goto v_resetjp_5258_;
}
v_resetjp_5258_:
{
lean_object* v___x_5262_; 
if (v_isShared_5260_ == 0)
{
v___x_5262_ = v___x_5259_;
goto v_reusejp_5261_;
}
else
{
lean_object* v_reuseFailAlloc_5264_; 
v_reuseFailAlloc_5264_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5264_, 0, v_a_5257_);
v___x_5262_ = v_reuseFailAlloc_5264_;
goto v_reusejp_5261_;
}
v_reusejp_5261_:
{
lean_object* v___x_5263_; 
v___x_5263_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5263_, 0, v___x_5262_);
return v___x_5263_;
}
}
}
else
{
lean_object* v_a_5266_; lean_object* v___x_5267_; uint8_t v___x_5268_; lean_object* v___x_5269_; lean_object* v___x_5270_; 
v_a_5266_ = lean_ctor_get(v_a_5256_, 0);
lean_inc(v_a_5266_);
lean_dec_ref_known(v_a_5256_, 1);
v___x_5267_ = lean_unsigned_to_nat(0u);
v___x_5268_ = 0;
v___x_5269_ = lean_task_map(v___f_5244_, v_a_5266_, v___x_5267_, v___x_5268_);
v___x_5270_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5270_, 0, v___x_5269_);
return v___x_5270_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Channel_instAsyncReadOfInhabited___redArg___lam__1___boxed(lean_object* v___f_5271_, lean_object* v_x_5272_, lean_object* v___y_5273_){
_start:
{
lean_object* v_res_5274_; 
v_res_5274_ = l_Std_Channel_instAsyncReadOfInhabited___redArg___lam__1(v___f_5271_, v_x_5272_);
return v_res_5274_;
}
}
LEAN_EXPORT lean_object* l_Std_Channel_instAsyncReadOfInhabited___redArg___lam__2(lean_object* v_inst_5275_, lean_object* v___f_5276_, lean_object* v_receiver_5277_){
_start:
{
lean_object* v___x_5279_; uint8_t v___x_5280_; lean_object* v___x_5281_; lean_object* v___x_5282_; lean_object* v___x_5283_; lean_object* v___x_5284_; lean_object* v___x_5285_; 
v___x_5279_ = lean_unsigned_to_nat(0u);
v___x_5280_ = 0;
v___x_5281_ = l_Std_Channel_recv___redArg(v_inst_5275_, v_receiver_5277_);
v___x_5282_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5282_, 0, v___x_5281_);
v___x_5283_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5283_, 0, v___x_5282_);
v___x_5284_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5284_, 0, v___x_5283_);
v___x_5285_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_5279_, v___x_5280_, v___x_5284_, v___f_5276_);
return v___x_5285_;
}
}
LEAN_EXPORT lean_object* l_Std_Channel_instAsyncReadOfInhabited___redArg___lam__2___boxed(lean_object* v_inst_5286_, lean_object* v___f_5287_, lean_object* v_receiver_5288_, lean_object* v___y_5289_){
_start:
{
lean_object* v_res_5290_; 
v_res_5290_ = l_Std_Channel_instAsyncReadOfInhabited___redArg___lam__2(v_inst_5286_, v___f_5287_, v_receiver_5288_);
return v_res_5290_;
}
}
LEAN_EXPORT lean_object* l_Std_Channel_instAsyncReadOfInhabited___redArg(lean_object* v_inst_5294_){
_start:
{
lean_object* v___f_5295_; lean_object* v___f_5296_; 
v___f_5295_ = ((lean_object*)(l_Std_Channel_instAsyncReadOfInhabited___redArg___closed__1));
v___f_5296_ = lean_alloc_closure((void*)(l_Std_Channel_instAsyncReadOfInhabited___redArg___lam__2___boxed), 4, 2);
lean_closure_set(v___f_5296_, 0, v_inst_5294_);
lean_closure_set(v___f_5296_, 1, v___f_5295_);
return v___f_5296_;
}
}
LEAN_EXPORT lean_object* l_Std_Channel_instAsyncReadOfInhabited(lean_object* v_00_u03b1_5297_, lean_object* v_inst_5298_){
_start:
{
lean_object* v___x_5299_; 
v___x_5299_ = l_Std_Channel_instAsyncReadOfInhabited___redArg(v_inst_5298_);
return v___x_5299_;
}
}
LEAN_EXPORT lean_object* l_Std_Channel_instAsyncWriteOfInhabited___redArg___lam__0(lean_object* v_a_5300_){
_start:
{
lean_object* v___x_5301_; 
v___x_5301_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5301_, 0, v_a_5300_);
return v___x_5301_;
}
}
LEAN_EXPORT lean_object* l_Std_Channel_instAsyncWriteOfInhabited___redArg___lam__1(lean_object* v___f_5302_, lean_object* v_x_5303_){
_start:
{
if (lean_obj_tag(v_x_5303_) == 0)
{
lean_object* v_a_5305_; lean_object* v___x_5307_; uint8_t v_isShared_5308_; uint8_t v_isSharedCheck_5313_; 
lean_dec_ref(v___f_5302_);
v_a_5305_ = lean_ctor_get(v_x_5303_, 0);
v_isSharedCheck_5313_ = !lean_is_exclusive(v_x_5303_);
if (v_isSharedCheck_5313_ == 0)
{
v___x_5307_ = v_x_5303_;
v_isShared_5308_ = v_isSharedCheck_5313_;
goto v_resetjp_5306_;
}
else
{
lean_inc(v_a_5305_);
lean_dec(v_x_5303_);
v___x_5307_ = lean_box(0);
v_isShared_5308_ = v_isSharedCheck_5313_;
goto v_resetjp_5306_;
}
v_resetjp_5306_:
{
lean_object* v___x_5310_; 
if (v_isShared_5308_ == 0)
{
v___x_5310_ = v___x_5307_;
goto v_reusejp_5309_;
}
else
{
lean_object* v_reuseFailAlloc_5312_; 
v_reuseFailAlloc_5312_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5312_, 0, v_a_5305_);
v___x_5310_ = v_reuseFailAlloc_5312_;
goto v_reusejp_5309_;
}
v_reusejp_5309_:
{
lean_object* v___x_5311_; 
v___x_5311_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5311_, 0, v___x_5310_);
return v___x_5311_;
}
}
}
else
{
lean_object* v_a_5314_; lean_object* v___x_5315_; uint8_t v___x_5316_; lean_object* v___x_5317_; lean_object* v___x_5318_; 
v_a_5314_ = lean_ctor_get(v_x_5303_, 0);
lean_inc(v_a_5314_);
lean_dec_ref_known(v_x_5303_, 1);
v___x_5315_ = lean_unsigned_to_nat(0u);
v___x_5316_ = 0;
v___x_5317_ = lean_task_map(v___f_5302_, v_a_5314_, v___x_5315_, v___x_5316_);
v___x_5318_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5318_, 0, v___x_5317_);
return v___x_5318_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Channel_instAsyncWriteOfInhabited___redArg___lam__1___boxed(lean_object* v___f_5319_, lean_object* v_x_5320_, lean_object* v___y_5321_){
_start:
{
lean_object* v_res_5322_; 
v_res_5322_ = l_Std_Channel_instAsyncWriteOfInhabited___redArg___lam__1(v___f_5319_, v_x_5320_);
return v_res_5322_;
}
}
LEAN_EXPORT lean_object* l_Std_Channel_instAsyncWriteOfInhabited___redArg___lam__2(lean_object* v___f_5323_, lean_object* v_receiver_5324_, lean_object* v_x_5325_){
_start:
{
lean_object* v___x_5327_; uint8_t v___x_5328_; lean_object* v___x_5329_; lean_object* v___x_5330_; lean_object* v___x_5331_; lean_object* v___x_5332_; 
v___x_5327_ = lean_unsigned_to_nat(0u);
v___x_5328_ = 0;
v___x_5329_ = l_Std_Channel_send___redArg(v_receiver_5324_, v_x_5325_);
v___x_5330_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5330_, 0, v___x_5329_);
v___x_5331_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5331_, 0, v___x_5330_);
v___x_5332_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_5327_, v___x_5328_, v___x_5331_, v___f_5323_);
return v___x_5332_;
}
}
LEAN_EXPORT lean_object* l_Std_Channel_instAsyncWriteOfInhabited___redArg___lam__2___boxed(lean_object* v___f_5333_, lean_object* v_receiver_5334_, lean_object* v_x_5335_, lean_object* v___y_5336_){
_start:
{
lean_object* v_res_5337_; 
v_res_5337_ = l_Std_Channel_instAsyncWriteOfInhabited___redArg___lam__2(v___f_5333_, v_receiver_5334_, v_x_5335_);
return v_res_5337_;
}
}
static lean_object* _init_l_Std_Channel_instAsyncWriteOfInhabited___redArg___closed__3(void){
_start:
{
lean_object* v___x_5343_; lean_object* v___f_5344_; lean_object* v___f_5345_; 
v___x_5343_ = lean_obj_once(&l_Std_CloseableChannel_instAsyncWriteOfInhabited___redArg___closed__3, &l_Std_CloseableChannel_instAsyncWriteOfInhabited___redArg___closed__3_once, _init_l_Std_CloseableChannel_instAsyncWriteOfInhabited___redArg___closed__3);
v___f_5344_ = ((lean_object*)(l_Std_Channel_instAsyncWriteOfInhabited___redArg___closed__2));
v___f_5345_ = lean_alloc_closure((void*)(l_Std_CloseableChannel_instAsyncWriteOfInhabited___redArg___lam__4___boxed), 5, 2);
lean_closure_set(v___f_5345_, 0, v___f_5344_);
lean_closure_set(v___f_5345_, 1, v___x_5343_);
return v___f_5345_;
}
}
static lean_object* _init_l_Std_Channel_instAsyncWriteOfInhabited___redArg___closed__4(void){
_start:
{
lean_object* v___f_5346_; lean_object* v___f_5347_; lean_object* v___f_5348_; lean_object* v___x_5349_; 
v___f_5346_ = ((lean_object*)(l_Std_CloseableChannel_instAsyncWriteOfInhabited___redArg___closed__2));
v___f_5347_ = lean_obj_once(&l_Std_Channel_instAsyncWriteOfInhabited___redArg___closed__3, &l_Std_Channel_instAsyncWriteOfInhabited___redArg___closed__3_once, _init_l_Std_Channel_instAsyncWriteOfInhabited___redArg___closed__3);
v___f_5348_ = ((lean_object*)(l_Std_Channel_instAsyncWriteOfInhabited___redArg___closed__2));
v___x_5349_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_5349_, 0, v___f_5348_);
lean_ctor_set(v___x_5349_, 1, v___f_5347_);
lean_ctor_set(v___x_5349_, 2, v___f_5346_);
return v___x_5349_;
}
}
LEAN_EXPORT lean_object* l_Std_Channel_instAsyncWriteOfInhabited___redArg(){
_start:
{
lean_object* v___x_5351_; 
v___x_5351_ = lean_obj_once(&l_Std_Channel_instAsyncWriteOfInhabited___redArg___closed__4, &l_Std_Channel_instAsyncWriteOfInhabited___redArg___closed__4_once, _init_l_Std_Channel_instAsyncWriteOfInhabited___redArg___closed__4);
return v___x_5351_;
}
}
LEAN_EXPORT lean_object* l_Std_Channel_instAsyncWriteOfInhabited___redArg___boxed(lean_object* v___dummy_5352_){
_start:
{
lean_object* v_res_5353_; 
v_res_5353_ = l_Std_Channel_instAsyncWriteOfInhabited___redArg();
return v_res_5353_;
}
}
static lean_object* _init_l_Std_Channel_instAsyncWriteOfInhabited___closed__0(void){
_start:
{
lean_object* v___x_5354_; 
v___x_5354_ = l_Std_Channel_instAsyncWriteOfInhabited___redArg();
return v___x_5354_;
}
}
LEAN_EXPORT lean_object* l_Std_Channel_instAsyncWriteOfInhabited(lean_object* v_00_u03b1_5355_, lean_object* v_inst_5356_){
_start:
{
lean_object* v___x_5357_; 
v___x_5357_ = lean_obj_once(&l_Std_Channel_instAsyncWriteOfInhabited___closed__0, &l_Std_Channel_instAsyncWriteOfInhabited___closed__0_once, _init_l_Std_Channel_instAsyncWriteOfInhabited___closed__0);
return v___x_5357_;
}
}
LEAN_EXPORT lean_object* l_Std_Channel_instAsyncWriteOfInhabited___boxed(lean_object* v_00_u03b1_5358_, lean_object* v_inst_5359_){
_start:
{
lean_object* v_res_5360_; 
v_res_5360_ = l_Std_Channel_instAsyncWriteOfInhabited(v_00_u03b1_5358_, v_inst_5359_);
lean_dec(v_inst_5359_);
return v_res_5360_;
}
}
LEAN_EXPORT lean_object* l_Std_Channel_sync___redArg(lean_object* v_ch_5361_){
_start:
{
lean_inc_ref(v_ch_5361_);
return v_ch_5361_;
}
}
LEAN_EXPORT lean_object* l_Std_Channel_sync___redArg___boxed(lean_object* v_ch_5362_){
_start:
{
lean_object* v_res_5363_; 
v_res_5363_ = l_Std_Channel_sync___redArg(v_ch_5362_);
lean_dec_ref(v_ch_5362_);
return v_res_5363_;
}
}
LEAN_EXPORT lean_object* l_Std_Channel_sync(lean_object* v_00_u03b1_5364_, lean_object* v_ch_5365_){
_start:
{
lean_inc_ref(v_ch_5365_);
return v_ch_5365_;
}
}
LEAN_EXPORT lean_object* l_Std_Channel_sync___boxed(lean_object* v_00_u03b1_5366_, lean_object* v_ch_5367_){
_start:
{
lean_object* v_res_5368_; 
v_res_5368_ = l_Std_Channel_sync(v_00_u03b1_5366_, v_ch_5367_);
lean_dec_ref(v_ch_5367_);
return v_res_5368_;
}
}
LEAN_EXPORT lean_object* l_Std_Channel_Sync_new___redArg(lean_object* v_capacity_5369_){
_start:
{
lean_object* v___x_5371_; 
v___x_5371_ = l_Std_CloseableChannel_new___redArg(v_capacity_5369_);
return v___x_5371_;
}
}
LEAN_EXPORT lean_object* l_Std_Channel_Sync_new___redArg___boxed(lean_object* v_capacity_5372_, lean_object* v___y_5373_){
_start:
{
lean_object* v_res_5374_; 
v_res_5374_ = l_Std_Channel_Sync_new___redArg(v_capacity_5372_);
return v_res_5374_;
}
}
LEAN_EXPORT lean_object* l_Std_Channel_Sync_new(lean_object* v_00_u03b1_5375_, lean_object* v_capacity_5376_){
_start:
{
lean_object* v___x_5378_; 
v___x_5378_ = l_Std_CloseableChannel_new___redArg(v_capacity_5376_);
return v___x_5378_;
}
}
LEAN_EXPORT lean_object* l_Std_Channel_Sync_new___boxed(lean_object* v_00_u03b1_5379_, lean_object* v_capacity_5380_, lean_object* v___y_5381_){
_start:
{
lean_object* v_res_5382_; 
v_res_5382_ = l_Std_Channel_Sync_new(v_00_u03b1_5379_, v_capacity_5380_);
return v_res_5382_;
}
}
LEAN_EXPORT uint8_t l_Std_Channel_Sync_trySend___redArg(lean_object* v_ch_5383_, lean_object* v_v_5384_){
_start:
{
uint8_t v___x_5386_; 
v___x_5386_ = l_Std_CloseableChannel_trySend___redArg(v_ch_5383_, v_v_5384_);
return v___x_5386_;
}
}
LEAN_EXPORT lean_object* l_Std_Channel_Sync_trySend___redArg___boxed(lean_object* v_ch_5387_, lean_object* v_v_5388_, lean_object* v___y_5389_){
_start:
{
uint8_t v_res_5390_; lean_object* v_r_5391_; 
v_res_5390_ = l_Std_Channel_Sync_trySend___redArg(v_ch_5387_, v_v_5388_);
v_r_5391_ = lean_box(v_res_5390_);
return v_r_5391_;
}
}
LEAN_EXPORT uint8_t l_Std_Channel_Sync_trySend(lean_object* v_00_u03b1_5392_, lean_object* v_ch_5393_, lean_object* v_v_5394_){
_start:
{
uint8_t v___x_5396_; 
v___x_5396_ = l_Std_CloseableChannel_trySend___redArg(v_ch_5393_, v_v_5394_);
return v___x_5396_;
}
}
LEAN_EXPORT lean_object* l_Std_Channel_Sync_trySend___boxed(lean_object* v_00_u03b1_5397_, lean_object* v_ch_5398_, lean_object* v_v_5399_, lean_object* v___y_5400_){
_start:
{
uint8_t v_res_5401_; lean_object* v_r_5402_; 
v_res_5401_ = l_Std_Channel_Sync_trySend(v_00_u03b1_5397_, v_ch_5398_, v_v_5399_);
v_r_5402_ = lean_box(v_res_5401_);
return v_r_5402_;
}
}
LEAN_EXPORT lean_object* l_Std_Channel_Sync_send___redArg(lean_object* v_ch_5403_, lean_object* v_v_5404_){
_start:
{
lean_object* v___x_5406_; lean_object* v___x_5407_; 
v___x_5406_ = l_Std_Channel_send___redArg(v_ch_5403_, v_v_5404_);
v___x_5407_ = lean_io_wait(v___x_5406_);
return v___x_5407_;
}
}
LEAN_EXPORT lean_object* l_Std_Channel_Sync_send___redArg___boxed(lean_object* v_ch_5408_, lean_object* v_v_5409_, lean_object* v___y_5410_){
_start:
{
lean_object* v_res_5411_; 
v_res_5411_ = l_Std_Channel_Sync_send___redArg(v_ch_5408_, v_v_5409_);
return v_res_5411_;
}
}
LEAN_EXPORT lean_object* l_Std_Channel_Sync_send(lean_object* v_00_u03b1_5412_, lean_object* v_ch_5413_, lean_object* v_v_5414_){
_start:
{
lean_object* v___x_5416_; 
v___x_5416_ = l_Std_Channel_Sync_send___redArg(v_ch_5413_, v_v_5414_);
return v___x_5416_;
}
}
LEAN_EXPORT lean_object* l_Std_Channel_Sync_send___boxed(lean_object* v_00_u03b1_5417_, lean_object* v_ch_5418_, lean_object* v_v_5419_, lean_object* v___y_5420_){
_start:
{
lean_object* v_res_5421_; 
v_res_5421_ = l_Std_Channel_Sync_send(v_00_u03b1_5417_, v_ch_5418_, v_v_5419_);
return v_res_5421_;
}
}
LEAN_EXPORT lean_object* l_Std_Channel_Sync_tryRecv___redArg(lean_object* v_ch_5422_){
_start:
{
lean_object* v___x_5424_; 
v___x_5424_ = l_Std_CloseableChannel_tryRecv___redArg(v_ch_5422_);
return v___x_5424_;
}
}
LEAN_EXPORT lean_object* l_Std_Channel_Sync_tryRecv___redArg___boxed(lean_object* v_ch_5425_, lean_object* v___y_5426_){
_start:
{
lean_object* v_res_5427_; 
v_res_5427_ = l_Std_Channel_Sync_tryRecv___redArg(v_ch_5425_);
return v_res_5427_;
}
}
LEAN_EXPORT lean_object* l_Std_Channel_Sync_tryRecv(lean_object* v_00_u03b1_5428_, lean_object* v_ch_5429_){
_start:
{
lean_object* v___x_5431_; 
v___x_5431_ = l_Std_CloseableChannel_tryRecv___redArg(v_ch_5429_);
return v___x_5431_;
}
}
LEAN_EXPORT lean_object* l_Std_Channel_Sync_tryRecv___boxed(lean_object* v_00_u03b1_5432_, lean_object* v_ch_5433_, lean_object* v___y_5434_){
_start:
{
lean_object* v_res_5435_; 
v_res_5435_ = l_Std_Channel_Sync_tryRecv(v_00_u03b1_5432_, v_ch_5433_);
return v_res_5435_;
}
}
LEAN_EXPORT lean_object* l_Std_Channel_Sync_recv___redArg(lean_object* v_inst_5436_, lean_object* v_ch_5437_){
_start:
{
lean_object* v___x_5439_; lean_object* v___x_5440_; 
v___x_5439_ = l_Std_Channel_recv___redArg(v_inst_5436_, v_ch_5437_);
v___x_5440_ = lean_io_wait(v___x_5439_);
return v___x_5440_;
}
}
LEAN_EXPORT lean_object* l_Std_Channel_Sync_recv___redArg___boxed(lean_object* v_inst_5441_, lean_object* v_ch_5442_, lean_object* v___y_5443_){
_start:
{
lean_object* v_res_5444_; 
v_res_5444_ = l_Std_Channel_Sync_recv___redArg(v_inst_5441_, v_ch_5442_);
return v_res_5444_;
}
}
LEAN_EXPORT lean_object* l_Std_Channel_Sync_recv(lean_object* v_00_u03b1_5445_, lean_object* v_inst_5446_, lean_object* v_ch_5447_){
_start:
{
lean_object* v___x_5449_; 
v___x_5449_ = l_Std_Channel_Sync_recv___redArg(v_inst_5446_, v_ch_5447_);
return v___x_5449_;
}
}
LEAN_EXPORT lean_object* l_Std_Channel_Sync_recv___boxed(lean_object* v_00_u03b1_5450_, lean_object* v_inst_5451_, lean_object* v_ch_5452_, lean_object* v___y_5453_){
_start:
{
lean_object* v_res_5454_; 
v_res_5454_ = l_Std_Channel_Sync_recv(v_00_u03b1_5450_, v_inst_5451_, v_ch_5452_);
return v_res_5454_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_Channel_Sync_forIn___redArg___lam__1(lean_object* v_f_5455_, lean_object* v_b_5456_, lean_object* v_toBind_5457_, lean_object* v___f_5458_, lean_object* v_a_5459_){
_start:
{
lean_object* v___x_5460_; lean_object* v___x_5461_; 
v___x_5460_ = lean_apply_2(v_f_5455_, v_a_5459_, v_b_5456_);
v___x_5461_ = lean_apply_4(v_toBind_5457_, lean_box(0), lean_box(0), v___x_5460_, v___f_5458_);
return v___x_5461_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_Channel_Sync_forIn___redArg(lean_object* v_inst_5462_, lean_object* v_inst_5463_, lean_object* v_inst_5464_, lean_object* v_ch_5465_, lean_object* v_f_5466_, lean_object* v_b_5467_){
_start:
{
lean_object* v_toApplicative_5468_; lean_object* v_toBind_5469_; lean_object* v_toPure_5470_; lean_object* v___x_5471_; lean_object* v___x_5472_; lean_object* v___f_5473_; lean_object* v___f_5474_; lean_object* v___x_5475_; 
v_toApplicative_5468_ = lean_ctor_get(v_inst_5463_, 0);
v_toBind_5469_ = lean_ctor_get(v_inst_5463_, 1);
lean_inc_n(v_toBind_5469_, 2);
v_toPure_5470_ = lean_ctor_get(v_toApplicative_5468_, 1);
lean_inc(v_toPure_5470_);
lean_inc_ref(v_ch_5465_);
lean_inc(v_inst_5462_);
v___x_5471_ = lean_alloc_closure((void*)(l_Std_Channel_Sync_recv___boxed), 4, 3);
lean_closure_set(v___x_5471_, 0, lean_box(0));
lean_closure_set(v___x_5471_, 1, v_inst_5462_);
lean_closure_set(v___x_5471_, 2, v_ch_5465_);
lean_inc(v_inst_5464_);
v___x_5472_ = lean_apply_2(v_inst_5464_, lean_box(0), v___x_5471_);
lean_inc(v_f_5466_);
v___f_5473_ = lean_alloc_closure((void*)(l___private_Std_Sync_Channel_0__Std_Channel_Sync_forIn___redArg___lam__0), 7, 6);
lean_closure_set(v___f_5473_, 0, v_toPure_5470_);
lean_closure_set(v___f_5473_, 1, v_inst_5462_);
lean_closure_set(v___f_5473_, 2, v_inst_5463_);
lean_closure_set(v___f_5473_, 3, v_inst_5464_);
lean_closure_set(v___f_5473_, 4, v_ch_5465_);
lean_closure_set(v___f_5473_, 5, v_f_5466_);
v___f_5474_ = lean_alloc_closure((void*)(l___private_Std_Sync_Channel_0__Std_Channel_Sync_forIn___redArg___lam__1), 5, 4);
lean_closure_set(v___f_5474_, 0, v_f_5466_);
lean_closure_set(v___f_5474_, 1, v_b_5467_);
lean_closure_set(v___f_5474_, 2, v_toBind_5469_);
lean_closure_set(v___f_5474_, 3, v___f_5473_);
v___x_5475_ = lean_apply_4(v_toBind_5469_, lean_box(0), lean_box(0), v___x_5472_, v___f_5474_);
return v___x_5475_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_Channel_Sync_forIn___redArg___lam__0(lean_object* v_toPure_5476_, lean_object* v_inst_5477_, lean_object* v_inst_5478_, lean_object* v_inst_5479_, lean_object* v_ch_5480_, lean_object* v_f_5481_, lean_object* v_____do__lift_5482_){
_start:
{
if (lean_obj_tag(v_____do__lift_5482_) == 0)
{
lean_object* v_a_5483_; lean_object* v___x_5484_; 
lean_dec(v_f_5481_);
lean_dec_ref(v_ch_5480_);
lean_dec(v_inst_5479_);
lean_dec_ref(v_inst_5478_);
lean_dec(v_inst_5477_);
v_a_5483_ = lean_ctor_get(v_____do__lift_5482_, 0);
lean_inc(v_a_5483_);
lean_dec_ref_known(v_____do__lift_5482_, 1);
v___x_5484_ = lean_apply_2(v_toPure_5476_, lean_box(0), v_a_5483_);
return v___x_5484_;
}
else
{
lean_object* v_a_5485_; lean_object* v___x_5486_; 
lean_dec(v_toPure_5476_);
v_a_5485_ = lean_ctor_get(v_____do__lift_5482_, 0);
lean_inc(v_a_5485_);
lean_dec_ref_known(v_____do__lift_5482_, 1);
v___x_5486_ = l___private_Std_Sync_Channel_0__Std_Channel_Sync_forIn___redArg(v_inst_5477_, v_inst_5478_, v_inst_5479_, v_ch_5480_, v_f_5481_, v_a_5485_);
return v___x_5486_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Channel_0__Std_Channel_Sync_forIn(lean_object* v_00_u03b1_5487_, lean_object* v_m_5488_, lean_object* v_00_u03b2_5489_, lean_object* v_inst_5490_, lean_object* v_inst_5491_, lean_object* v_inst_5492_, lean_object* v_ch_5493_, lean_object* v_f_5494_, lean_object* v_b_5495_){
_start:
{
lean_object* v___x_5496_; 
v___x_5496_ = l___private_Std_Sync_Channel_0__Std_Channel_Sync_forIn___redArg(v_inst_5490_, v_inst_5491_, v_inst_5492_, v_ch_5493_, v_f_5494_, v_b_5495_);
return v___x_5496_;
}
}
LEAN_EXPORT lean_object* l_Std_Channel_Sync_instForInOfInhabitedOfMonadOfMonadLiftTBaseIO___private__1___redArg(lean_object* v_inst_5497_, lean_object* v_inst_5498_, lean_object* v_inst_5499_, lean_object* v_ch_5500_, lean_object* v_b_5501_, lean_object* v_f_5502_){
_start:
{
lean_object* v___x_5503_; 
v___x_5503_ = l___private_Std_Sync_Channel_0__Std_Channel_Sync_forIn___redArg(v_inst_5497_, v_inst_5498_, v_inst_5499_, v_ch_5500_, v_f_5502_, v_b_5501_);
return v___x_5503_;
}
}
LEAN_EXPORT lean_object* l_Std_Channel_Sync_instForInOfInhabitedOfMonadOfMonadLiftTBaseIO___private__1(lean_object* v_00_u03b1_5504_, lean_object* v_m_5505_, lean_object* v_inst_5506_, lean_object* v_inst_5507_, lean_object* v_inst_5508_, lean_object* v_00_u03b2_5509_, lean_object* v_ch_5510_, lean_object* v_b_5511_, lean_object* v_f_5512_){
_start:
{
lean_object* v___x_5513_; 
v___x_5513_ = l___private_Std_Sync_Channel_0__Std_Channel_Sync_forIn___redArg(v_inst_5506_, v_inst_5507_, v_inst_5508_, v_ch_5510_, v_f_5512_, v_b_5511_);
return v___x_5513_;
}
}
LEAN_EXPORT lean_object* l_Std_Channel_Sync_instForInOfInhabitedOfMonadOfMonadLiftTBaseIO___redArg___lam__0(lean_object* v_inst_5514_, lean_object* v_inst_5515_, lean_object* v_inst_5516_, lean_object* v_00_u03b2_5517_, lean_object* v_ch_5518_, lean_object* v_b_5519_, lean_object* v_f_5520_){
_start:
{
lean_object* v___x_5521_; 
v___x_5521_ = l___private_Std_Sync_Channel_0__Std_Channel_Sync_forIn___redArg(v_inst_5514_, v_inst_5515_, v_inst_5516_, v_ch_5518_, v_f_5520_, v_b_5519_);
return v___x_5521_;
}
}
LEAN_EXPORT lean_object* l_Std_Channel_Sync_instForInOfInhabitedOfMonadOfMonadLiftTBaseIO___redArg(lean_object* v_inst_5522_, lean_object* v_inst_5523_, lean_object* v_inst_5524_){
_start:
{
lean_object* v___f_5525_; 
v___f_5525_ = lean_alloc_closure((void*)(l_Std_Channel_Sync_instForInOfInhabitedOfMonadOfMonadLiftTBaseIO___redArg___lam__0), 7, 3);
lean_closure_set(v___f_5525_, 0, v_inst_5522_);
lean_closure_set(v___f_5525_, 1, v_inst_5523_);
lean_closure_set(v___f_5525_, 2, v_inst_5524_);
return v___f_5525_;
}
}
LEAN_EXPORT lean_object* l_Std_Channel_Sync_instForInOfInhabitedOfMonadOfMonadLiftTBaseIO(lean_object* v_00_u03b1_5526_, lean_object* v_m_5527_, lean_object* v_inst_5528_, lean_object* v_inst_5529_, lean_object* v_inst_5530_){
_start:
{
lean_object* v___f_5531_; 
v___f_5531_ = lean_alloc_closure((void*)(l_Std_Channel_Sync_instForInOfInhabitedOfMonadOfMonadLiftTBaseIO___redArg___lam__0), 7, 3);
lean_closure_set(v___f_5531_, 0, v_inst_5528_);
lean_closure_set(v___f_5531_, 1, v_inst_5529_);
lean_closure_set(v___f_5531_, 2, v_inst_5530_);
return v___f_5531_;
}
}
lean_object* runtime_initialize_Init_Data_Queue(uint8_t builtin);
lean_object* runtime_initialize_Std_Sync_Mutex(uint8_t builtin);
lean_object* runtime_initialize_Std_Async_IO(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Vector_Basic(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Option_BasicAux(uint8_t builtin);
lean_object* runtime_initialize_Init_Omega(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Std_Sync_Channel(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Init_Data_Queue(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Sync_Mutex(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Async_IO(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Vector_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Option_BasicAux(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Omega(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Std_Sync_Channel(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Init_Data_Queue(uint8_t builtin);
lean_object* initialize_Std_Sync_Mutex(uint8_t builtin);
lean_object* initialize_Std_Async_IO(uint8_t builtin);
lean_object* initialize_Init_Data_Vector_Basic(uint8_t builtin);
lean_object* initialize_Init_Data_Option_BasicAux(uint8_t builtin);
lean_object* initialize_Init_Omega(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Std_Sync_Channel(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init_Data_Queue(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Sync_Mutex(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Async_IO(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Vector_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Option_BasicAux(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Omega(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Sync_Channel(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Std_Sync_Channel(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Std_Sync_Channel(builtin);
}
#ifdef __cplusplus
}
#endif
