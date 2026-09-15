// Lean compiler output
// Module: Std.Sync.Broadcast
// Imports: public import Std.Data public import Init.Data.Queue public import Init.Data.Vector public import Std.Sync.Mutex public import Std.Async.IO
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
lean_object* lean_task_pure(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_mod(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_st_ref_swap(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Std_Queue_dequeue_x3f___redArg(lean_object*);
lean_object* lean_io_promise_resolve(lean_object*, lean_object*);
lean_object* lean_io_promise_new();
lean_object* l_Std_Queue_enqueue___redArg(lean_object*, lean_object*);
lean_object* lean_io_promise_result_opt(lean_object*);
lean_object* lean_io_bind_task(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* lean_io_basemutex_lock(lean_object*);
lean_object* lean_io_basemutex_unlock(lean_object*);
uint8_t l_List_isEmpty___redArg(lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* lean_mk_io_user_error(lean_object*);
lean_object* lean_io_error_to_string(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* l_Std_Queue_empty___redArg();
lean_object* l_Std_Queue_toArray___redArg(lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_io_wait(lean_object*);
lean_object* l_IO_ofExcept___redArg(lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_maxView___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_minView___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_mk_ref(lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Std_Mutex_new___redArg(lean_object*);
lean_object* l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Repr_addAppParen(lean_object*, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
lean_object* l_EIO_chainTask___redArg(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Std_Async_EAsync_tryFinally_x27___redArg(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* lean_task_map(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ST_Prim_Ref_set___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
size_t lean_usize_of_nat(lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Option_repr___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* lean_string_length(lean_object*);
lean_object* l_IO_Promise_resolve___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ST_Prim_Ref_modifyGetUnsafe___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ST_Prim_Ref_get___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Function_const___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Except_map(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_mkAtom(lean_object*);
lean_object* l_Std_Async_EAsync_instMonad___redArg();
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_Const_modify___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Broadcast_Error_ctorIdx(uint8_t);
LEAN_EXPORT lean_object* l_Std_Broadcast_Error_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Broadcast_Error_ctorElim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Broadcast_Error_ctorElim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Broadcast_Error_ctorElim(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Broadcast_Error_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Broadcast_Error_closed_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Broadcast_Error_closed_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Broadcast_Error_closed_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Broadcast_Error_closed_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Broadcast_Error_alreadyClosed_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Broadcast_Error_alreadyClosed_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Broadcast_Error_alreadyClosed_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Broadcast_Error_alreadyClosed_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Broadcast_Error_notSubscribed_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Broadcast_Error_notSubscribed_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Broadcast_Error_notSubscribed_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Broadcast_Error_notSubscribed_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Std_Broadcast_instReprError_repr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "Std.Broadcast.Error.closed"};
static const lean_object* l_Std_Broadcast_instReprError_repr___closed__0 = (const lean_object*)&l_Std_Broadcast_instReprError_repr___closed__0_value;
static const lean_ctor_object l_Std_Broadcast_instReprError_repr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Broadcast_instReprError_repr___closed__0_value)}};
static const lean_object* l_Std_Broadcast_instReprError_repr___closed__1 = (const lean_object*)&l_Std_Broadcast_instReprError_repr___closed__1_value;
static const lean_string_object l_Std_Broadcast_instReprError_repr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "Std.Broadcast.Error.alreadyClosed"};
static const lean_object* l_Std_Broadcast_instReprError_repr___closed__2 = (const lean_object*)&l_Std_Broadcast_instReprError_repr___closed__2_value;
static const lean_ctor_object l_Std_Broadcast_instReprError_repr___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Broadcast_instReprError_repr___closed__2_value)}};
static const lean_object* l_Std_Broadcast_instReprError_repr___closed__3 = (const lean_object*)&l_Std_Broadcast_instReprError_repr___closed__3_value;
static const lean_string_object l_Std_Broadcast_instReprError_repr___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "Std.Broadcast.Error.notSubscribed"};
static const lean_object* l_Std_Broadcast_instReprError_repr___closed__4 = (const lean_object*)&l_Std_Broadcast_instReprError_repr___closed__4_value;
static const lean_ctor_object l_Std_Broadcast_instReprError_repr___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Broadcast_instReprError_repr___closed__4_value)}};
static const lean_object* l_Std_Broadcast_instReprError_repr___closed__5 = (const lean_object*)&l_Std_Broadcast_instReprError_repr___closed__5_value;
static lean_once_cell_t l_Std_Broadcast_instReprError_repr___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Broadcast_instReprError_repr___closed__6;
static lean_once_cell_t l_Std_Broadcast_instReprError_repr___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Broadcast_instReprError_repr___closed__7;
LEAN_EXPORT lean_object* l_Std_Broadcast_instReprError_repr(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Std_Broadcast_instReprError_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_Broadcast_instReprError___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Broadcast_instReprError_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Broadcast_instReprError___closed__0 = (const lean_object*)&l_Std_Broadcast_instReprError___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Broadcast_instReprError = (const lean_object*)&l_Std_Broadcast_instReprError___closed__0_value;
LEAN_EXPORT uint8_t l_Std_Broadcast_Error_ofNat(lean_object*);
LEAN_EXPORT lean_object* l_Std_Broadcast_Error_ofNat___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Std_Broadcast_instDecidableEqError(uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_Std_Broadcast_instDecidableEqError___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint64_t l_Std_Broadcast_instHashableError_hash(uint8_t);
LEAN_EXPORT lean_object* l_Std_Broadcast_instHashableError_hash___boxed(lean_object*);
static const lean_closure_object l_Std_Broadcast_instHashableError___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Broadcast_instHashableError_hash___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Broadcast_instHashableError___closed__0 = (const lean_object*)&l_Std_Broadcast_instHashableError___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Broadcast_instHashableError = (const lean_object*)&l_Std_Broadcast_instHashableError___closed__0_value;
static const lean_string_object l_Std_instToStringBroadcastError___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 47, .m_capacity = 47, .m_length = 46, .m_data = "attempted to send on an already closed channel"};
static const lean_object* l_Std_instToStringBroadcastError___lam__0___closed__0 = (const lean_object*)&l_Std_instToStringBroadcastError___lam__0___closed__0_value;
static const lean_string_object l_Std_instToStringBroadcastError___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 55, .m_capacity = 55, .m_length = 54, .m_data = "attempted to close an already closed broadcast channel"};
static const lean_object* l_Std_instToStringBroadcastError___lam__0___closed__1 = (const lean_object*)&l_Std_instToStringBroadcastError___lam__0___closed__1_value;
static const lean_string_object l_Std_instToStringBroadcastError___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 47, .m_capacity = 47, .m_length = 46, .m_data = "receiver not subscribed in a broadcast channel"};
static const lean_object* l_Std_instToStringBroadcastError___lam__0___closed__2 = (const lean_object*)&l_Std_instToStringBroadcastError___lam__0___closed__2_value;
LEAN_EXPORT lean_object* l_Std_instToStringBroadcastError___lam__0(uint8_t);
LEAN_EXPORT lean_object* l_Std_instToStringBroadcastError___lam__0___boxed(lean_object*);
static const lean_closure_object l_Std_instToStringBroadcastError___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_instToStringBroadcastError___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_instToStringBroadcastError___closed__0 = (const lean_object*)&l_Std_instToStringBroadcastError___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_instToStringBroadcastError = (const lean_object*)&l_Std_instToStringBroadcastError___closed__0_value;
static const lean_ctor_object l_Std_instMonadLiftBroadcastIO___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 18}, .m_objs = {((lean_object*)&l_Std_instToStringBroadcastError___lam__0___closed__0_value)}};
static const lean_object* l_Std_instMonadLiftBroadcastIO___lam__0___closed__0 = (const lean_object*)&l_Std_instMonadLiftBroadcastIO___lam__0___closed__0_value;
static const lean_ctor_object l_Std_instMonadLiftBroadcastIO___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 18}, .m_objs = {((lean_object*)&l_Std_instToStringBroadcastError___lam__0___closed__1_value)}};
static const lean_object* l_Std_instMonadLiftBroadcastIO___lam__0___closed__1 = (const lean_object*)&l_Std_instMonadLiftBroadcastIO___lam__0___closed__1_value;
static const lean_ctor_object l_Std_instMonadLiftBroadcastIO___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 18}, .m_objs = {((lean_object*)&l_Std_instToStringBroadcastError___lam__0___closed__2_value)}};
static const lean_object* l_Std_instMonadLiftBroadcastIO___lam__0___closed__2 = (const lean_object*)&l_Std_instMonadLiftBroadcastIO___lam__0___closed__2_value;
LEAN_EXPORT lean_object* l_Std_instMonadLiftBroadcastIO___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_instMonadLiftBroadcastIO___lam__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_instMonadLiftBroadcastIO___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_instMonadLiftBroadcastIO___lam__0___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_instMonadLiftBroadcastIO___closed__0 = (const lean_object*)&l_Std_instMonadLiftBroadcastIO___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_instMonadLiftBroadcastIO = (const lean_object*)&l_Std_instMonadLiftBroadcastIO___closed__0_value;
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Broadcast_Consumer_resolve___redArg(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Broadcast_Consumer_resolve___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Broadcast_Consumer_resolve(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Broadcast_Consumer_resolve___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Std_instInhabitedSlot_default___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Std_instInhabitedSlot_default___redArg___closed__0 = (const lean_object*)&l_Std_instInhabitedSlot_default___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Std_instInhabitedSlot_default___redArg();
LEAN_EXPORT lean_object* l_Std_instInhabitedSlot_default___redArg___boxed(lean_object*);
static lean_once_cell_t l_Std_instInhabitedSlot_default___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_instInhabitedSlot_default___closed__0;
LEAN_EXPORT lean_object* l_Std_instInhabitedSlot_default(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_instInhabitedSlot___redArg();
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_instInhabitedSlot___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_instInhabitedSlot(lean_object*);
static const lean_string_object l___private_Std_Sync_Broadcast_0__Std_instReprSlot_repr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "{ "};
static const lean_object* l___private_Std_Sync_Broadcast_0__Std_instReprSlot_repr___redArg___closed__0 = (const lean_object*)&l___private_Std_Sync_Broadcast_0__Std_instReprSlot_repr___redArg___closed__0_value;
static const lean_string_object l___private_Std_Sync_Broadcast_0__Std_instReprSlot_repr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "value"};
static const lean_object* l___private_Std_Sync_Broadcast_0__Std_instReprSlot_repr___redArg___closed__1 = (const lean_object*)&l___private_Std_Sync_Broadcast_0__Std_instReprSlot_repr___redArg___closed__1_value;
static const lean_ctor_object l___private_Std_Sync_Broadcast_0__Std_instReprSlot_repr___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Std_Sync_Broadcast_0__Std_instReprSlot_repr___redArg___closed__1_value)}};
static const lean_object* l___private_Std_Sync_Broadcast_0__Std_instReprSlot_repr___redArg___closed__2 = (const lean_object*)&l___private_Std_Sync_Broadcast_0__Std_instReprSlot_repr___redArg___closed__2_value;
static const lean_ctor_object l___private_Std_Sync_Broadcast_0__Std_instReprSlot_repr___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Std_Sync_Broadcast_0__Std_instReprSlot_repr___redArg___closed__2_value)}};
static const lean_object* l___private_Std_Sync_Broadcast_0__Std_instReprSlot_repr___redArg___closed__3 = (const lean_object*)&l___private_Std_Sync_Broadcast_0__Std_instReprSlot_repr___redArg___closed__3_value;
static const lean_string_object l___private_Std_Sync_Broadcast_0__Std_instReprSlot_repr___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " := "};
static const lean_object* l___private_Std_Sync_Broadcast_0__Std_instReprSlot_repr___redArg___closed__4 = (const lean_object*)&l___private_Std_Sync_Broadcast_0__Std_instReprSlot_repr___redArg___closed__4_value;
static const lean_ctor_object l___private_Std_Sync_Broadcast_0__Std_instReprSlot_repr___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Std_Sync_Broadcast_0__Std_instReprSlot_repr___redArg___closed__4_value)}};
static const lean_object* l___private_Std_Sync_Broadcast_0__Std_instReprSlot_repr___redArg___closed__5 = (const lean_object*)&l___private_Std_Sync_Broadcast_0__Std_instReprSlot_repr___redArg___closed__5_value;
static const lean_ctor_object l___private_Std_Sync_Broadcast_0__Std_instReprSlot_repr___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l___private_Std_Sync_Broadcast_0__Std_instReprSlot_repr___redArg___closed__3_value),((lean_object*)&l___private_Std_Sync_Broadcast_0__Std_instReprSlot_repr___redArg___closed__5_value)}};
static const lean_object* l___private_Std_Sync_Broadcast_0__Std_instReprSlot_repr___redArg___closed__6 = (const lean_object*)&l___private_Std_Sync_Broadcast_0__Std_instReprSlot_repr___redArg___closed__6_value;
static lean_once_cell_t l___private_Std_Sync_Broadcast_0__Std_instReprSlot_repr___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Sync_Broadcast_0__Std_instReprSlot_repr___redArg___closed__7;
static const lean_string_object l___private_Std_Sync_Broadcast_0__Std_instReprSlot_repr___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ","};
static const lean_object* l___private_Std_Sync_Broadcast_0__Std_instReprSlot_repr___redArg___closed__8 = (const lean_object*)&l___private_Std_Sync_Broadcast_0__Std_instReprSlot_repr___redArg___closed__8_value;
static const lean_ctor_object l___private_Std_Sync_Broadcast_0__Std_instReprSlot_repr___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Std_Sync_Broadcast_0__Std_instReprSlot_repr___redArg___closed__8_value)}};
static const lean_object* l___private_Std_Sync_Broadcast_0__Std_instReprSlot_repr___redArg___closed__9 = (const lean_object*)&l___private_Std_Sync_Broadcast_0__Std_instReprSlot_repr___redArg___closed__9_value;
static const lean_string_object l___private_Std_Sync_Broadcast_0__Std_instReprSlot_repr___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "pos"};
static const lean_object* l___private_Std_Sync_Broadcast_0__Std_instReprSlot_repr___redArg___closed__10 = (const lean_object*)&l___private_Std_Sync_Broadcast_0__Std_instReprSlot_repr___redArg___closed__10_value;
static const lean_ctor_object l___private_Std_Sync_Broadcast_0__Std_instReprSlot_repr___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Std_Sync_Broadcast_0__Std_instReprSlot_repr___redArg___closed__10_value)}};
static const lean_object* l___private_Std_Sync_Broadcast_0__Std_instReprSlot_repr___redArg___closed__11 = (const lean_object*)&l___private_Std_Sync_Broadcast_0__Std_instReprSlot_repr___redArg___closed__11_value;
static lean_once_cell_t l___private_Std_Sync_Broadcast_0__Std_instReprSlot_repr___redArg___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Sync_Broadcast_0__Std_instReprSlot_repr___redArg___closed__12;
static const lean_string_object l___private_Std_Sync_Broadcast_0__Std_instReprSlot_repr___redArg___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "remaining"};
static const lean_object* l___private_Std_Sync_Broadcast_0__Std_instReprSlot_repr___redArg___closed__13 = (const lean_object*)&l___private_Std_Sync_Broadcast_0__Std_instReprSlot_repr___redArg___closed__13_value;
static const lean_ctor_object l___private_Std_Sync_Broadcast_0__Std_instReprSlot_repr___redArg___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Std_Sync_Broadcast_0__Std_instReprSlot_repr___redArg___closed__13_value)}};
static const lean_object* l___private_Std_Sync_Broadcast_0__Std_instReprSlot_repr___redArg___closed__14 = (const lean_object*)&l___private_Std_Sync_Broadcast_0__Std_instReprSlot_repr___redArg___closed__14_value;
static lean_once_cell_t l___private_Std_Sync_Broadcast_0__Std_instReprSlot_repr___redArg___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Sync_Broadcast_0__Std_instReprSlot_repr___redArg___closed__15;
static const lean_string_object l___private_Std_Sync_Broadcast_0__Std_instReprSlot_repr___redArg___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = " }"};
static const lean_object* l___private_Std_Sync_Broadcast_0__Std_instReprSlot_repr___redArg___closed__16 = (const lean_object*)&l___private_Std_Sync_Broadcast_0__Std_instReprSlot_repr___redArg___closed__16_value;
static lean_once_cell_t l___private_Std_Sync_Broadcast_0__Std_instReprSlot_repr___redArg___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Sync_Broadcast_0__Std_instReprSlot_repr___redArg___closed__17;
static lean_once_cell_t l___private_Std_Sync_Broadcast_0__Std_instReprSlot_repr___redArg___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Sync_Broadcast_0__Std_instReprSlot_repr___redArg___closed__18;
static const lean_ctor_object l___private_Std_Sync_Broadcast_0__Std_instReprSlot_repr___redArg___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Std_Sync_Broadcast_0__Std_instReprSlot_repr___redArg___closed__0_value)}};
static const lean_object* l___private_Std_Sync_Broadcast_0__Std_instReprSlot_repr___redArg___closed__19 = (const lean_object*)&l___private_Std_Sync_Broadcast_0__Std_instReprSlot_repr___redArg___closed__19_value;
static const lean_ctor_object l___private_Std_Sync_Broadcast_0__Std_instReprSlot_repr___redArg___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Std_Sync_Broadcast_0__Std_instReprSlot_repr___redArg___closed__16_value)}};
static const lean_object* l___private_Std_Sync_Broadcast_0__Std_instReprSlot_repr___redArg___closed__20 = (const lean_object*)&l___private_Std_Sync_Broadcast_0__Std_instReprSlot_repr___redArg___closed__20_value;
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_instReprSlot_repr___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_instReprSlot_repr(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_instReprSlot_repr___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_instReprSlot___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_instReprSlot(lean_object*, lean_object*);
static const lean_string_object l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__0 = (const lean_object*)&l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__0_value;
static const lean_string_object l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__1 = (const lean_object*)&l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__1_value;
static const lean_string_object l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__2 = (const lean_object*)&l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__2_value;
static const lean_string_object l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "tacticSeq"};
static const lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__3 = (const lean_object*)&l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__3_value;
static const lean_ctor_object l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__4_value_aux_0),((lean_object*)&l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__4_value_aux_1),((lean_object*)&l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__4_value_aux_2),((lean_object*)&l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__3_value),LEAN_SCALAR_PTR_LITERAL(212, 140, 85, 215, 241, 69, 7, 118)}};
static const lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__4 = (const lean_object*)&l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__4_value;
static const lean_array_object l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__5 = (const lean_object*)&l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__5_value;
static const lean_string_object l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "tacticSeq1Indented"};
static const lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__6 = (const lean_object*)&l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__6_value;
static const lean_ctor_object l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__7_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__7_value_aux_0),((lean_object*)&l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__7_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__7_value_aux_1),((lean_object*)&l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__7_value_aux_2),((lean_object*)&l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__6_value),LEAN_SCALAR_PTR_LITERAL(223, 90, 160, 238, 133, 180, 23, 239)}};
static const lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__7 = (const lean_object*)&l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__7_value;
static const lean_string_object l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "null"};
static const lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__8 = (const lean_object*)&l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__8_value;
static const lean_ctor_object l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__8_value),LEAN_SCALAR_PTR_LITERAL(24, 58, 49, 223, 146, 207, 197, 136)}};
static const lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__9 = (const lean_object*)&l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__9_value;
static const lean_string_object l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "decide"};
static const lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__10 = (const lean_object*)&l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__10_value;
static const lean_ctor_object l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__11_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__11_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__11_value_aux_0),((lean_object*)&l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__11_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__11_value_aux_1),((lean_object*)&l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__11_value_aux_2),((lean_object*)&l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__10_value),LEAN_SCALAR_PTR_LITERAL(53, 158, 1, 232, 101, 200, 191, 197)}};
static const lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__11 = (const lean_object*)&l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__11_value;
static lean_once_cell_t l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__12;
static lean_once_cell_t l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__13;
static const lean_string_object l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "optConfig"};
static const lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__14 = (const lean_object*)&l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__14_value;
static const lean_ctor_object l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__15_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__15_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__15_value_aux_0),((lean_object*)&l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__15_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__15_value_aux_1),((lean_object*)&l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__15_value_aux_2),((lean_object*)&l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__14_value),LEAN_SCALAR_PTR_LITERAL(137, 208, 10, 74, 108, 50, 106, 48)}};
static const lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__15 = (const lean_object*)&l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__15_value;
static const lean_ctor_object l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(2) << 1) | 1)),((lean_object*)&l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__9_value),((lean_object*)&l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__5_value)}};
static const lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__16 = (const lean_object*)&l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__16_value;
static lean_once_cell_t l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__17;
static lean_once_cell_t l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__18;
static lean_once_cell_t l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__19;
static lean_once_cell_t l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__20_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__20;
static lean_once_cell_t l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__21;
static lean_once_cell_t l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__22_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__22;
static lean_once_cell_t l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__23_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__23;
static lean_once_cell_t l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__24_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__24;
static lean_once_cell_t l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__25_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__25;
static lean_once_cell_t l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__26_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__26;
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1;
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_new___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_new___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Vector_Basic_0__Vector_mapM_go___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_new_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Vector_Basic_0__Vector_mapM_go___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_new_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Std_Sync_Broadcast_0__Std_Bounded_new___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Std_Sync_Broadcast_0__Std_Bounded_new___redArg___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_new___redArg___closed__0 = (const lean_object*)&l___private_Std_Sync_Broadcast_0__Std_Bounded_new___redArg___closed__0_value;
static const lean_array_object l___private_Std_Sync_Broadcast_0__Std_Bounded_new___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_new___redArg___closed__1 = (const lean_object*)&l___private_Std_Sync_Broadcast_0__Std_Bounded_new___redArg___closed__1_value;
static lean_once_cell_t l___private_Std_Sync_Broadcast_0__Std_Bounded_new___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_new___redArg___closed__2;
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_new___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_new___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_new(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_new___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Vector_Basic_0__Vector_mapM_go___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_new_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Vector_Basic_0__Vector_mapM_go___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_new_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_subscribe_spec__1___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_subscribe_spec__1___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_subscribe_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_subscribe_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_subscribe_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_subscribe_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_subscribe_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_subscribe___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_subscribe___redArg___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l___private_Std_Sync_Broadcast_0__Std_Bounded_subscribe___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Std_Sync_Broadcast_0__Std_Bounded_subscribe___redArg___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_subscribe___redArg___closed__0 = (const lean_object*)&l___private_Std_Sync_Broadcast_0__Std_Bounded_subscribe___redArg___closed__0_value;
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_subscribe___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_subscribe___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_subscribe(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_subscribe___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_subscribe_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_isEmpty___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_isEmpty___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_isEmpty___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_isEmpty___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_isEmpty(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_isEmpty___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Std_Sync_Broadcast_0__Std_Bounded_isFull___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_isFull___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Std_Sync_Broadcast_0__Std_Bounded_isFull(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_isFull___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_enqueue___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_enqueue___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_enqueue(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_enqueue___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_dequeue___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_dequeue(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_getSlot___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_getSlot___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_getSlot___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_getSlot___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_getSlot(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_getSlot___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_trySend_x27_spec__0___redArg(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_trySend_x27_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_trySend_x27___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_trySend_x27___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_trySend_x27(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_trySend_x27___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_trySend_x27_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_trySend_x27_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_trySend_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_trySend_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_trySend_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_trySend_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Std_Sync_Broadcast_0__Std_Bounded_trySend___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_trySend___redArg___lam__0___closed__0 = (const lean_object*)&l___private_Std_Sync_Broadcast_0__Std_Bounded_trySend___redArg___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_trySend___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_trySend___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_trySend___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_trySend___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_trySend(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_trySend___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Std_Sync_Broadcast_0__Std_Bounded_send___redArg___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_send___redArg___lam__1___closed__0 = (const lean_object*)&l___private_Std_Sync_Broadcast_0__Std_Bounded_send___redArg___lam__1___closed__0_value;
static lean_once_cell_t l___private_Std_Sync_Broadcast_0__Std_Bounded_send___redArg___lam__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_send___redArg___lam__1___closed__1;
static const lean_ctor_object l___private_Std_Sync_Broadcast_0__Std_Bounded_send___redArg___lam__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_send___redArg___lam__1___closed__2 = (const lean_object*)&l___private_Std_Sync_Broadcast_0__Std_Bounded_send___redArg___lam__1___closed__2_value;
static lean_once_cell_t l___private_Std_Sync_Broadcast_0__Std_Bounded_send___redArg___lam__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_send___redArg___lam__1___closed__3;
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_send___redArg___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_send___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_send___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_send___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_send___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_send___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_send(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_send___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_close_spec__1___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_close_spec__1___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_close_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_close_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_close_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_close_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_close_spec__0___redArg(uint8_t, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_close_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_close___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_close___redArg___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l___private_Std_Sync_Broadcast_0__Std_Bounded_close___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Std_Sync_Broadcast_0__Std_Bounded_close___redArg___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_close___redArg___closed__0 = (const lean_object*)&l___private_Std_Sync_Broadcast_0__Std_Bounded_close___redArg___closed__0_value;
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_close___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_close___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_close(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_close___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_close_spec__0(lean_object*, uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_close_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Std_Sync_Broadcast_0__Std_Bounded_isClosed___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_isClosed___redArg___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l___private_Std_Sync_Broadcast_0__Std_Bounded_isClosed___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Std_Sync_Broadcast_0__Std_Bounded_isClosed___redArg___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_isClosed___redArg___closed__0 = (const lean_object*)&l___private_Std_Sync_Broadcast_0__Std_Bounded_isClosed___redArg___closed__0_value;
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_isClosed___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_isClosed___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Std_Sync_Broadcast_0__Std_Bounded_isClosed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_isClosed___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getSlotValue___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getSlotValue___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getSlotValue___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getSlotValue(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getSlotValue___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___redArg___lam__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___redArg___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___redArg___lam__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___redArg___lam__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_getSlot___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_unsubscribe_spec__0_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_getSlot___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_unsubscribe_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_isEmpty___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_unsubscribe_spec__0_spec__0___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_isEmpty___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_unsubscribe_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getSlotValue___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_unsubscribe_spec__0_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getSlotValue___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_unsubscribe_spec__0_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_unsubscribe_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_unsubscribe_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_unsubscribe_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_unsubscribe_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_unsubscribe_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_unsubscribe_spec__1___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_erase___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_unsubscribe_spec__3___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_erase___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_unsubscribe_spec__3___redArg___boxed(lean_object*, lean_object*);
static const lean_ctor_object l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_unsubscribe___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_unsubscribe___redArg___lam__0___closed__0 = (const lean_object*)&l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_unsubscribe___redArg___lam__0___closed__0_value;
static const lean_ctor_object l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_unsubscribe___redArg___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(2) << 1) | 1))}};
static const lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_unsubscribe___redArg___lam__0___closed__1 = (const lean_object*)&l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_unsubscribe___redArg___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_unsubscribe___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_unsubscribe___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_unsubscribe___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_unsubscribe___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_unsubscribe(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_unsubscribe___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_isEmpty___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_unsubscribe_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_isEmpty___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_unsubscribe_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_getSlot___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_unsubscribe_spec__0_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_getSlot___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_unsubscribe_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getSlotValue___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_unsubscribe_spec__0_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getSlotValue___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_unsubscribe_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_unsubscribe_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_unsubscribe_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_unsubscribe_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_unsubscribe_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_unsubscribe_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_unsubscribe_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_erase___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_unsubscribe_spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_erase___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_unsubscribe_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___redArg___lam__1(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___redArg___lam__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___redArg___lam__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___redArg___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___redArg___lam__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___redArg___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___redArg___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___redArg___closed__0 = (const lean_object*)&l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___redArg___closed__0_value;
static const lean_closure_object l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___redArg___lam__1___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___redArg___closed__1 = (const lean_object*)&l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___redArg___closed__1_value;
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_modify___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getSlotValue___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_spec__0_spec__0_spec__3___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getSlotValue___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_spec__0_spec__0_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Std_Sync_Broadcast_0__Std_Bounded_isEmpty___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_spec__0_spec__0_spec__1___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_isEmpty___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_getSlot___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_spec__0_spec__0_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_getSlot___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_spec__0_spec__0_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Std_Sync_Broadcast_0__Std_Bounded_isEmpty___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_spec__0_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_isEmpty___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_getSlot___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_spec__0_spec__0_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_getSlot___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getSlotValue___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_spec__0_spec__0_spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getSlotValue___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_spec__0_spec__0_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recv_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recv_spec__0___redArg___boxed(lean_object*, lean_object*);
static lean_once_cell_t l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recv___redArg___lam__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recv___redArg___lam__1___closed__0;
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recv___redArg___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recv___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recv___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recv___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recv___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recv___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recv(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recv___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recv_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recv_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_forAsync___redArg___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_forAsync___redArg___lam__0___closed__0;
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_forAsync___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_forAsync___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_forAsync___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_forAsync___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_forAsync(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_forAsync___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvReady_x27___redArg___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvReady_x27___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvReady_x27___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvReady_x27___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvReady_x27___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvReady_x27___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvReady_x27___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvReady_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvReady_x27___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Std_Async_Waiter_race___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_registerAux_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Std_Async_Waiter_race___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_registerAux_spec__0___redArg___closed__0 = (const lean_object*)&l_Std_Async_Waiter_race___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_registerAux_spec__0___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Async_Waiter_race___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_registerAux_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Waiter_race___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_registerAux_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Waiter_race___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_registerAux_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Waiter_race___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_registerAux_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_registerAux_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_registerAux_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Waiter_race___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_registerAux_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Waiter_race___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_registerAux_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Waiter_race___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_registerAux_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Waiter_race___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_registerAux_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_registerAux___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_registerAux___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_registerAux___redArg___lam__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_registerAux___redArg___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_registerAux___redArg___lam__2(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_registerAux___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_registerAux___redArg___lam__3(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_registerAux___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_registerAux___redArg___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_registerAux___redArg___lam__0___boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_registerAux___redArg___lam__1___closed__0 = (const lean_object*)&l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_registerAux___redArg___lam__1___closed__0_value;
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_registerAux___redArg___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_registerAux___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_registerAux___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_registerAux___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_registerAux(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_registerAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_registerAux_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_registerAux_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_getSlot___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__1___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_getSlot___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__1___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_getSlot___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_getSlot___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_getSlot___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_getSlot___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__2___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__2___redArg___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__2___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__2___redArg___lam__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__2___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__2___redArg___lam__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__2___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Mutex_atomically___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__2___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Mutex_atomically___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__2___redArg___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Mutex_atomically___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__2___redArg___closed__0 = (const lean_object*)&l_Std_Mutex_atomically___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__2___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector___redArg___lam__0___closed__0 = (const lean_object*)&l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector___redArg___lam__0___closed__0_value;
static const lean_ctor_object l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector___redArg___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector___redArg___lam__0___closed__0_value)}};
static const lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector___redArg___lam__0___closed__1 = (const lean_object*)&l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector___redArg___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Queue_filterM___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__3___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Std_Queue_filterM___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__3___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Queue_filterM___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__3___redArg___lam__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Queue_filterM___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__3___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_filterAuxM___at___00Std_Queue_filterM___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__3_spec__4___redArg___lam__1(lean_object*);
LEAN_EXPORT lean_object* l_List_filterAuxM___at___00Std_Queue_filterM___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__3_spec__4___redArg___lam__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_filterAuxM___at___00Std_Queue_filterM___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__3_spec__4___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_List_filterAuxM___at___00Std_Queue_filterM___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__3_spec__4___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_List_filterAuxM___at___00Std_Queue_filterM___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__3_spec__4___redArg___closed__0 = (const lean_object*)&l_List_filterAuxM___at___00Std_Queue_filterM___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__3_spec__4___redArg___closed__0_value;
static const lean_ctor_object l_List_filterAuxM___at___00Std_Queue_filterM___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__3_spec__4___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_List_filterAuxM___at___00Std_Queue_filterM___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__3_spec__4___redArg___closed__0_value)}};
static const lean_object* l_List_filterAuxM___at___00Std_Queue_filterM___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__3_spec__4___redArg___closed__1 = (const lean_object*)&l_List_filterAuxM___at___00Std_Queue_filterM___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__3_spec__4___redArg___closed__1_value;
static const lean_closure_object l_List_filterAuxM___at___00Std_Queue_filterM___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__3_spec__4___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_List_filterAuxM___at___00Std_Queue_filterM___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__3_spec__4___redArg___lam__1___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_List_filterAuxM___at___00Std_Queue_filterM___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__3_spec__4___redArg___closed__2 = (const lean_object*)&l_List_filterAuxM___at___00Std_Queue_filterM___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__3_spec__4___redArg___closed__2_value;
LEAN_EXPORT lean_object* l_List_filterAuxM___at___00Std_Queue_filterM___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__3_spec__4___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_filterAuxM___at___00Std_Queue_filterM___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__3_spec__4___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_filterAuxM___at___00Std_Queue_filterM___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__3_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Queue_filterM___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__3___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Queue_filterM___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__3___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Queue_filterM___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__3___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Queue_filterM___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__3___redArg___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Queue_filterM___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__3___redArg___closed__0 = (const lean_object*)&l_Std_Queue_filterM___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__3___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Queue_filterM___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__3___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Queue_filterM___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector___redArg___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector___redArg___lam__2(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector___redArg___lam__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector___redArg___lam__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector___redArg___lam__4(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector___redArg___lam__4___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__0___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__0___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__0___redArg___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Std_Async_Waiter_race___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_registerAux_spec__0___redArg___closed__0_value)}};
static const lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__0___redArg___lam__1___closed__0 = (const lean_object*)&l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__0___redArg___lam__1___closed__0_value;
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__0___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__0___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_isEmpty___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__0_spec__0_spec__4___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_isEmpty___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__0_spec__0_spec__4___redArg___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l___private_Std_Sync_Broadcast_0__Std_Bounded_isEmpty___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__0_spec__0_spec__4___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Std_Sync_Broadcast_0__Std_Bounded_isEmpty___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__0_spec__0_spec__4___redArg___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_isEmpty___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__0_spec__0_spec__4___redArg___closed__0 = (const lean_object*)&l___private_Std_Sync_Broadcast_0__Std_Bounded_isEmpty___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__0_spec__0_spec__4___redArg___closed__0_value;
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_isEmpty___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__0_spec__0_spec__4___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_isEmpty___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__0_spec__0_spec__4___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getSlotValue___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__0_spec__0_spec__3___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getSlotValue___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__0_spec__0_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__0_spec__0___redArg___lam__4(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__0_spec__0___redArg___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__0_spec__0___redArg___lam__1(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__0_spec__0___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__0_spec__0___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__0_spec__0___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__0_spec__0___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__0_spec__0___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__0_spec__0___redArg___lam__3(uint8_t, lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__0_spec__0___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__0_spec__0___redArg___lam__5(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__0_spec__0___redArg___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__0_spec__0___redArg___lam__6(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__0_spec__0___redArg___lam__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__0___redArg___lam__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__0___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector___redArg___lam__5___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector___redArg___lam__5___closed__0 = (const lean_object*)&l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector___redArg___lam__5___closed__0_value;
static const lean_ctor_object l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector___redArg___lam__5___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector___redArg___lam__5___closed__0_value)}};
static const lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector___redArg___lam__5___closed__1 = (const lean_object*)&l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector___redArg___lam__5___closed__1_value;
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector___redArg___lam__5(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector___redArg___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector___redArg___lam__6(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector___redArg___lam__6___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector___redArg___lam__7(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector___redArg___lam__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector___redArg___lam__8(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector___redArg___lam__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector___redArg___lam__9(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector___redArg___lam__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector___redArg___lam__2___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector___redArg___closed__0 = (const lean_object*)&l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector___redArg___closed__0_value;
static const lean_closure_object l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector___redArg___lam__4___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector___redArg___closed__1 = (const lean_object*)&l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector___redArg___closed__1_value;
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Queue_filterM___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Queue_filterM___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getSlotValue___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__0_spec__0_spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getSlotValue___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__0_spec__0_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_isEmpty___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__0_spec__0_spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_isEmpty___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__0_spec__0_spec__4___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_filterAuxM___at___00Std_Queue_filterM___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__3_spec__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_filterAuxM___at___00Std_Queue_filterM___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__3_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Broadcast_new___auto__1;
LEAN_EXPORT lean_object* l_Std_Broadcast_new___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Broadcast_new___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Broadcast_new(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Broadcast_new___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Broadcast_trySend___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Broadcast_trySend___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Broadcast_trySend(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Broadcast_trySend___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Broadcast_subscribe___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Broadcast_subscribe___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Broadcast_subscribe(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Broadcast_subscribe___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Broadcast_close___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Broadcast_close___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Broadcast_close(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Broadcast_close___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Broadcast_send___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Std_Broadcast_send___redArg___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_Broadcast_send___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Broadcast_send___redArg___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Broadcast_send___redArg___closed__0 = (const lean_object*)&l_Std_Broadcast_send___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Broadcast_send___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Broadcast_send___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Broadcast_send(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Broadcast_send___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Broadcast_Receiver_tryRecv___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Broadcast_Receiver_tryRecv___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Broadcast_Receiver_tryRecv(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Broadcast_Receiver_tryRecv___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Broadcast_Receiver_recv___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Broadcast_Receiver_recv___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Broadcast_Receiver_recv(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Broadcast_Receiver_recv___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Broadcast_Receiver_recvSelector___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Broadcast_Receiver_recvSelector(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Broadcast_Receiver_recvSelector___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Broadcast_Receiver_unsubscribe___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Broadcast_Receiver_unsubscribe___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Broadcast_Receiver_unsubscribe(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Broadcast_Receiver_unsubscribe___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Broadcast_Receiver_forAsync___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Broadcast_Receiver_forAsync___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Broadcast_Receiver_forAsync(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Broadcast_Receiver_forAsync___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Broadcast_Receiver_instAsyncStreamOptionOfInhabited___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector___redArg, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Broadcast_Receiver_instAsyncStreamOptionOfInhabited___redArg___closed__0 = (const lean_object*)&l_Std_Broadcast_Receiver_instAsyncStreamOptionOfInhabited___redArg___closed__0_value;
static const lean_closure_object l_Std_Broadcast_Receiver_instAsyncStreamOptionOfInhabited___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_unsubscribe___redArg___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Broadcast_Receiver_instAsyncStreamOptionOfInhabited___redArg___closed__1 = (const lean_object*)&l_Std_Broadcast_Receiver_instAsyncStreamOptionOfInhabited___redArg___closed__1_value;
static const lean_ctor_object l_Std_Broadcast_Receiver_instAsyncStreamOptionOfInhabited___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Std_Broadcast_Receiver_instAsyncStreamOptionOfInhabited___redArg___closed__0_value),((lean_object*)&l_Std_Broadcast_Receiver_instAsyncStreamOptionOfInhabited___redArg___closed__1_value)}};
static const lean_object* l_Std_Broadcast_Receiver_instAsyncStreamOptionOfInhabited___redArg___closed__2 = (const lean_object*)&l_Std_Broadcast_Receiver_instAsyncStreamOptionOfInhabited___redArg___closed__2_value;
LEAN_EXPORT lean_object* l_Std_Broadcast_Receiver_instAsyncStreamOptionOfInhabited___redArg();
LEAN_EXPORT lean_object* l_Std_Broadcast_Receiver_instAsyncStreamOptionOfInhabited___redArg___boxed(lean_object*);
static lean_once_cell_t l_Std_Broadcast_Receiver_instAsyncStreamOptionOfInhabited___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Broadcast_Receiver_instAsyncStreamOptionOfInhabited___closed__0;
LEAN_EXPORT lean_object* l_Std_Broadcast_Receiver_instAsyncStreamOptionOfInhabited(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Broadcast_Receiver_instAsyncStreamOptionOfInhabited___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Broadcast_Receiver_instAsyncReadOptionOfInhabited___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Std_Broadcast_Receiver_instAsyncReadOptionOfInhabited___redArg___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Broadcast_Receiver_instAsyncReadOptionOfInhabited___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Broadcast_Receiver_instAsyncReadOptionOfInhabited___redArg___lam__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Broadcast_Receiver_instAsyncReadOptionOfInhabited___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Broadcast_Receiver_instAsyncReadOptionOfInhabited___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Broadcast_Receiver_instAsyncReadOptionOfInhabited___redArg___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Broadcast_Receiver_instAsyncReadOptionOfInhabited___redArg___closed__0 = (const lean_object*)&l_Std_Broadcast_Receiver_instAsyncReadOptionOfInhabited___redArg___closed__0_value;
static const lean_closure_object l_Std_Broadcast_Receiver_instAsyncReadOptionOfInhabited___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Broadcast_Receiver_instAsyncReadOptionOfInhabited___redArg___lam__1___boxed, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Std_Broadcast_Receiver_instAsyncReadOptionOfInhabited___redArg___closed__0_value)} };
static const lean_object* l_Std_Broadcast_Receiver_instAsyncReadOptionOfInhabited___redArg___closed__1 = (const lean_object*)&l_Std_Broadcast_Receiver_instAsyncReadOptionOfInhabited___redArg___closed__1_value;
static const lean_closure_object l_Std_Broadcast_Receiver_instAsyncReadOptionOfInhabited___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Broadcast_Receiver_instAsyncReadOptionOfInhabited___redArg___lam__2___boxed, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Std_Broadcast_Receiver_instAsyncReadOptionOfInhabited___redArg___closed__1_value)} };
static const lean_object* l_Std_Broadcast_Receiver_instAsyncReadOptionOfInhabited___redArg___closed__2 = (const lean_object*)&l_Std_Broadcast_Receiver_instAsyncReadOptionOfInhabited___redArg___closed__2_value;
LEAN_EXPORT lean_object* l_Std_Broadcast_Receiver_instAsyncReadOptionOfInhabited___redArg();
LEAN_EXPORT lean_object* l_Std_Broadcast_Receiver_instAsyncReadOptionOfInhabited___redArg___boxed(lean_object*);
static lean_once_cell_t l_Std_Broadcast_Receiver_instAsyncReadOptionOfInhabited___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Broadcast_Receiver_instAsyncReadOptionOfInhabited___closed__0;
LEAN_EXPORT lean_object* l_Std_Broadcast_Receiver_instAsyncReadOptionOfInhabited(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Broadcast_Receiver_instAsyncReadOptionOfInhabited___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Broadcast_Receiver_instAsyncWriteOfInhabited___redArg___lam__0(lean_object*);
static const lean_closure_object l_Std_Broadcast_Receiver_instAsyncWriteOfInhabited___redArg___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*3, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Function_const___boxed, .m_arity = 4, .m_num_fixed = 3, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Std_Broadcast_Receiver_instAsyncWriteOfInhabited___redArg___lam__1___closed__0 = (const lean_object*)&l_Std_Broadcast_Receiver_instAsyncWriteOfInhabited___redArg___lam__1___closed__0_value;
static const lean_closure_object l_Std_Broadcast_Receiver_instAsyncWriteOfInhabited___redArg___lam__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*4, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Except_map, .m_arity = 5, .m_num_fixed = 4, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Broadcast_Receiver_instAsyncWriteOfInhabited___redArg___lam__1___closed__0_value)} };
static const lean_object* l_Std_Broadcast_Receiver_instAsyncWriteOfInhabited___redArg___lam__1___closed__1 = (const lean_object*)&l_Std_Broadcast_Receiver_instAsyncWriteOfInhabited___redArg___lam__1___closed__1_value;
LEAN_EXPORT lean_object* l_Std_Broadcast_Receiver_instAsyncWriteOfInhabited___redArg___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Broadcast_Receiver_instAsyncWriteOfInhabited___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Broadcast_Receiver_instAsyncWriteOfInhabited___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Broadcast_Receiver_instAsyncWriteOfInhabited___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Broadcast_Receiver_instAsyncWriteOfInhabited___redArg___lam__2(lean_object*);
LEAN_EXPORT lean_object* l_Std_Broadcast_Receiver_instAsyncWriteOfInhabited___redArg___lam__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Broadcast_Receiver_instAsyncWriteOfInhabited___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Broadcast_Receiver_instAsyncWriteOfInhabited___redArg___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Broadcast_Receiver_instAsyncWriteOfInhabited___redArg___lam__5(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Broadcast_Receiver_instAsyncWriteOfInhabited___redArg___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Broadcast_Receiver_instAsyncWriteOfInhabited___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Broadcast_Receiver_instAsyncWriteOfInhabited___redArg___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Broadcast_Receiver_instAsyncWriteOfInhabited___redArg___closed__0 = (const lean_object*)&l_Std_Broadcast_Receiver_instAsyncWriteOfInhabited___redArg___closed__0_value;
static const lean_closure_object l_Std_Broadcast_Receiver_instAsyncWriteOfInhabited___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Broadcast_Receiver_instAsyncWriteOfInhabited___redArg___lam__1___boxed, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Std_Broadcast_Receiver_instAsyncWriteOfInhabited___redArg___closed__0_value)} };
static const lean_object* l_Std_Broadcast_Receiver_instAsyncWriteOfInhabited___redArg___closed__1 = (const lean_object*)&l_Std_Broadcast_Receiver_instAsyncWriteOfInhabited___redArg___closed__1_value;
static const lean_closure_object l_Std_Broadcast_Receiver_instAsyncWriteOfInhabited___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Broadcast_Receiver_instAsyncWriteOfInhabited___redArg___lam__3___boxed, .m_arity = 5, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Std_Broadcast_send___redArg___closed__0_value),((lean_object*)&l_Std_Broadcast_Receiver_instAsyncWriteOfInhabited___redArg___closed__1_value)} };
static const lean_object* l_Std_Broadcast_Receiver_instAsyncWriteOfInhabited___redArg___closed__2 = (const lean_object*)&l_Std_Broadcast_Receiver_instAsyncWriteOfInhabited___redArg___closed__2_value;
static const lean_closure_object l_Std_Broadcast_Receiver_instAsyncWriteOfInhabited___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Broadcast_Receiver_instAsyncWriteOfInhabited___redArg___lam__2___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Broadcast_Receiver_instAsyncWriteOfInhabited___redArg___closed__3 = (const lean_object*)&l_Std_Broadcast_Receiver_instAsyncWriteOfInhabited___redArg___closed__3_value;
static lean_once_cell_t l_Std_Broadcast_Receiver_instAsyncWriteOfInhabited___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Broadcast_Receiver_instAsyncWriteOfInhabited___redArg___closed__4;
static lean_once_cell_t l_Std_Broadcast_Receiver_instAsyncWriteOfInhabited___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Broadcast_Receiver_instAsyncWriteOfInhabited___redArg___closed__5;
static lean_once_cell_t l_Std_Broadcast_Receiver_instAsyncWriteOfInhabited___redArg___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Broadcast_Receiver_instAsyncWriteOfInhabited___redArg___closed__6;
LEAN_EXPORT lean_object* l_Std_Broadcast_Receiver_instAsyncWriteOfInhabited___redArg();
LEAN_EXPORT lean_object* l_Std_Broadcast_Receiver_instAsyncWriteOfInhabited___redArg___boxed(lean_object*);
static lean_once_cell_t l_Std_Broadcast_Receiver_instAsyncWriteOfInhabited___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Broadcast_Receiver_instAsyncWriteOfInhabited___closed__0;
LEAN_EXPORT lean_object* l_Std_Broadcast_Receiver_instAsyncWriteOfInhabited(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Broadcast_Receiver_instAsyncWriteOfInhabited___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Broadcast_Sync_new___auto__3;
LEAN_EXPORT lean_object* l_Std_Broadcast_Sync_new___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Broadcast_Sync_new___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Broadcast_Sync_new(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Broadcast_Sync_new___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Broadcast_Sync_trySend___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Broadcast_Sync_trySend___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Broadcast_Sync_trySend(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Broadcast_Sync_trySend___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Broadcast_Sync_subscribe___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Broadcast_Sync_subscribe___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Broadcast_Sync_subscribe(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Broadcast_Sync_subscribe___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Broadcast_Sync_close___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Broadcast_Sync_close___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Broadcast_Sync_close(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Broadcast_Sync_close___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Broadcast_Sync_send___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lean_io_error_to_string, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Broadcast_Sync_send___redArg___closed__0 = (const lean_object*)&l_Std_Broadcast_Sync_send___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Broadcast_Sync_send___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Broadcast_Sync_send___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Broadcast_Sync_send(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Broadcast_Sync_send___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Broadcast_Sync_Receiver_tryRecv___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Broadcast_Sync_Receiver_tryRecv___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Broadcast_Sync_Receiver_tryRecv(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Broadcast_Sync_Receiver_tryRecv___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Broadcast_Sync_Receiver_recv___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Broadcast_Sync_Receiver_recv___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Broadcast_Sync_Receiver_recv(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Broadcast_Sync_Receiver_recv___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Broadcast_Sync_Receiver_unsubscribe___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Broadcast_Sync_Receiver_unsubscribe___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Broadcast_Sync_Receiver_unsubscribe(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Broadcast_Sync_Receiver_unsubscribe___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Broadcast_Sync_Receiver_forIn___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Broadcast_Sync_Receiver_forIn___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Broadcast_Sync_Receiver_forIn___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Broadcast_Sync_Receiver_forIn(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Broadcast_Sync_Receiver_instForInOfInhabitedOfMonadOfMonadLiftTBaseIO___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Broadcast_Sync_Receiver_instForInOfInhabitedOfMonadOfMonadLiftTBaseIO___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Broadcast_Sync_Receiver_instForInOfInhabitedOfMonadOfMonadLiftTBaseIO(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Broadcast_Error_ctorIdx(uint8_t v_x_1_){
_start:
{
switch(v_x_1_)
{
case 0:
{
lean_object* v___x_2_; 
v___x_2_ = lean_unsigned_to_nat(0u);
return v___x_2_;
}
case 1:
{
lean_object* v___x_3_; 
v___x_3_ = lean_unsigned_to_nat(1u);
return v___x_3_;
}
default: 
{
lean_object* v___x_4_; 
v___x_4_ = lean_unsigned_to_nat(2u);
return v___x_4_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Broadcast_Error_ctorIdx___boxed(lean_object* v_x_5_){
_start:
{
uint8_t v_x_boxed_6_; lean_object* v_res_7_; 
v_x_boxed_6_ = lean_unbox(v_x_5_);
v_res_7_ = l_Std_Broadcast_Error_ctorIdx(v_x_boxed_6_);
return v_res_7_;
}
}
LEAN_EXPORT lean_object* l_Std_Broadcast_Error_ctorElim___redArg(lean_object* v_k_8_){
_start:
{
lean_inc(v_k_8_);
return v_k_8_;
}
}
LEAN_EXPORT lean_object* l_Std_Broadcast_Error_ctorElim___redArg___boxed(lean_object* v_k_9_){
_start:
{
lean_object* v_res_10_; 
v_res_10_ = l_Std_Broadcast_Error_ctorElim___redArg(v_k_9_);
lean_dec(v_k_9_);
return v_res_10_;
}
}
LEAN_EXPORT lean_object* l_Std_Broadcast_Error_ctorElim(lean_object* v_motive_11_, lean_object* v_ctorIdx_12_, uint8_t v_t_13_, lean_object* v_h_14_, lean_object* v_k_15_){
_start:
{
lean_inc(v_k_15_);
return v_k_15_;
}
}
LEAN_EXPORT lean_object* l_Std_Broadcast_Error_ctorElim___boxed(lean_object* v_motive_16_, lean_object* v_ctorIdx_17_, lean_object* v_t_18_, lean_object* v_h_19_, lean_object* v_k_20_){
_start:
{
uint8_t v_t_boxed_21_; lean_object* v_res_22_; 
v_t_boxed_21_ = lean_unbox(v_t_18_);
v_res_22_ = l_Std_Broadcast_Error_ctorElim(v_motive_16_, v_ctorIdx_17_, v_t_boxed_21_, v_h_19_, v_k_20_);
lean_dec(v_k_20_);
lean_dec(v_ctorIdx_17_);
return v_res_22_;
}
}
LEAN_EXPORT lean_object* l_Std_Broadcast_Error_closed_elim___redArg(lean_object* v_closed_23_){
_start:
{
lean_inc(v_closed_23_);
return v_closed_23_;
}
}
LEAN_EXPORT lean_object* l_Std_Broadcast_Error_closed_elim___redArg___boxed(lean_object* v_closed_24_){
_start:
{
lean_object* v_res_25_; 
v_res_25_ = l_Std_Broadcast_Error_closed_elim___redArg(v_closed_24_);
lean_dec(v_closed_24_);
return v_res_25_;
}
}
LEAN_EXPORT lean_object* l_Std_Broadcast_Error_closed_elim(lean_object* v_motive_26_, uint8_t v_t_27_, lean_object* v_h_28_, lean_object* v_closed_29_){
_start:
{
lean_inc(v_closed_29_);
return v_closed_29_;
}
}
LEAN_EXPORT lean_object* l_Std_Broadcast_Error_closed_elim___boxed(lean_object* v_motive_30_, lean_object* v_t_31_, lean_object* v_h_32_, lean_object* v_closed_33_){
_start:
{
uint8_t v_t_boxed_34_; lean_object* v_res_35_; 
v_t_boxed_34_ = lean_unbox(v_t_31_);
v_res_35_ = l_Std_Broadcast_Error_closed_elim(v_motive_30_, v_t_boxed_34_, v_h_32_, v_closed_33_);
lean_dec(v_closed_33_);
return v_res_35_;
}
}
LEAN_EXPORT lean_object* l_Std_Broadcast_Error_alreadyClosed_elim___redArg(lean_object* v_alreadyClosed_36_){
_start:
{
lean_inc(v_alreadyClosed_36_);
return v_alreadyClosed_36_;
}
}
LEAN_EXPORT lean_object* l_Std_Broadcast_Error_alreadyClosed_elim___redArg___boxed(lean_object* v_alreadyClosed_37_){
_start:
{
lean_object* v_res_38_; 
v_res_38_ = l_Std_Broadcast_Error_alreadyClosed_elim___redArg(v_alreadyClosed_37_);
lean_dec(v_alreadyClosed_37_);
return v_res_38_;
}
}
LEAN_EXPORT lean_object* l_Std_Broadcast_Error_alreadyClosed_elim(lean_object* v_motive_39_, uint8_t v_t_40_, lean_object* v_h_41_, lean_object* v_alreadyClosed_42_){
_start:
{
lean_inc(v_alreadyClosed_42_);
return v_alreadyClosed_42_;
}
}
LEAN_EXPORT lean_object* l_Std_Broadcast_Error_alreadyClosed_elim___boxed(lean_object* v_motive_43_, lean_object* v_t_44_, lean_object* v_h_45_, lean_object* v_alreadyClosed_46_){
_start:
{
uint8_t v_t_boxed_47_; lean_object* v_res_48_; 
v_t_boxed_47_ = lean_unbox(v_t_44_);
v_res_48_ = l_Std_Broadcast_Error_alreadyClosed_elim(v_motive_43_, v_t_boxed_47_, v_h_45_, v_alreadyClosed_46_);
lean_dec(v_alreadyClosed_46_);
return v_res_48_;
}
}
LEAN_EXPORT lean_object* l_Std_Broadcast_Error_notSubscribed_elim___redArg(lean_object* v_notSubscribed_49_){
_start:
{
lean_inc(v_notSubscribed_49_);
return v_notSubscribed_49_;
}
}
LEAN_EXPORT lean_object* l_Std_Broadcast_Error_notSubscribed_elim___redArg___boxed(lean_object* v_notSubscribed_50_){
_start:
{
lean_object* v_res_51_; 
v_res_51_ = l_Std_Broadcast_Error_notSubscribed_elim___redArg(v_notSubscribed_50_);
lean_dec(v_notSubscribed_50_);
return v_res_51_;
}
}
LEAN_EXPORT lean_object* l_Std_Broadcast_Error_notSubscribed_elim(lean_object* v_motive_52_, uint8_t v_t_53_, lean_object* v_h_54_, lean_object* v_notSubscribed_55_){
_start:
{
lean_inc(v_notSubscribed_55_);
return v_notSubscribed_55_;
}
}
LEAN_EXPORT lean_object* l_Std_Broadcast_Error_notSubscribed_elim___boxed(lean_object* v_motive_56_, lean_object* v_t_57_, lean_object* v_h_58_, lean_object* v_notSubscribed_59_){
_start:
{
uint8_t v_t_boxed_60_; lean_object* v_res_61_; 
v_t_boxed_60_ = lean_unbox(v_t_57_);
v_res_61_ = l_Std_Broadcast_Error_notSubscribed_elim(v_motive_56_, v_t_boxed_60_, v_h_58_, v_notSubscribed_59_);
lean_dec(v_notSubscribed_59_);
return v_res_61_;
}
}
static lean_object* _init_l_Std_Broadcast_instReprError_repr___closed__6(void){
_start:
{
lean_object* v___x_71_; lean_object* v___x_72_; 
v___x_71_ = lean_unsigned_to_nat(2u);
v___x_72_ = lean_nat_to_int(v___x_71_);
return v___x_72_;
}
}
static lean_object* _init_l_Std_Broadcast_instReprError_repr___closed__7(void){
_start:
{
lean_object* v___x_73_; lean_object* v___x_74_; 
v___x_73_ = lean_unsigned_to_nat(1u);
v___x_74_ = lean_nat_to_int(v___x_73_);
return v___x_74_;
}
}
LEAN_EXPORT lean_object* l_Std_Broadcast_instReprError_repr(uint8_t v_x_75_, lean_object* v_prec_76_){
_start:
{
lean_object* v___y_78_; lean_object* v___y_85_; lean_object* v___y_92_; 
switch(v_x_75_)
{
case 0:
{
lean_object* v___x_98_; uint8_t v___x_99_; 
v___x_98_ = lean_unsigned_to_nat(1024u);
v___x_99_ = lean_nat_dec_le(v___x_98_, v_prec_76_);
if (v___x_99_ == 0)
{
lean_object* v___x_100_; 
v___x_100_ = lean_obj_once(&l_Std_Broadcast_instReprError_repr___closed__6, &l_Std_Broadcast_instReprError_repr___closed__6_once, _init_l_Std_Broadcast_instReprError_repr___closed__6);
v___y_78_ = v___x_100_;
goto v___jp_77_;
}
else
{
lean_object* v___x_101_; 
v___x_101_ = lean_obj_once(&l_Std_Broadcast_instReprError_repr___closed__7, &l_Std_Broadcast_instReprError_repr___closed__7_once, _init_l_Std_Broadcast_instReprError_repr___closed__7);
v___y_78_ = v___x_101_;
goto v___jp_77_;
}
}
case 1:
{
lean_object* v___x_102_; uint8_t v___x_103_; 
v___x_102_ = lean_unsigned_to_nat(1024u);
v___x_103_ = lean_nat_dec_le(v___x_102_, v_prec_76_);
if (v___x_103_ == 0)
{
lean_object* v___x_104_; 
v___x_104_ = lean_obj_once(&l_Std_Broadcast_instReprError_repr___closed__6, &l_Std_Broadcast_instReprError_repr___closed__6_once, _init_l_Std_Broadcast_instReprError_repr___closed__6);
v___y_85_ = v___x_104_;
goto v___jp_84_;
}
else
{
lean_object* v___x_105_; 
v___x_105_ = lean_obj_once(&l_Std_Broadcast_instReprError_repr___closed__7, &l_Std_Broadcast_instReprError_repr___closed__7_once, _init_l_Std_Broadcast_instReprError_repr___closed__7);
v___y_85_ = v___x_105_;
goto v___jp_84_;
}
}
default: 
{
lean_object* v___x_106_; uint8_t v___x_107_; 
v___x_106_ = lean_unsigned_to_nat(1024u);
v___x_107_ = lean_nat_dec_le(v___x_106_, v_prec_76_);
if (v___x_107_ == 0)
{
lean_object* v___x_108_; 
v___x_108_ = lean_obj_once(&l_Std_Broadcast_instReprError_repr___closed__6, &l_Std_Broadcast_instReprError_repr___closed__6_once, _init_l_Std_Broadcast_instReprError_repr___closed__6);
v___y_92_ = v___x_108_;
goto v___jp_91_;
}
else
{
lean_object* v___x_109_; 
v___x_109_ = lean_obj_once(&l_Std_Broadcast_instReprError_repr___closed__7, &l_Std_Broadcast_instReprError_repr___closed__7_once, _init_l_Std_Broadcast_instReprError_repr___closed__7);
v___y_92_ = v___x_109_;
goto v___jp_91_;
}
}
}
v___jp_77_:
{
lean_object* v___x_79_; lean_object* v___x_80_; uint8_t v___x_81_; lean_object* v___x_82_; lean_object* v___x_83_; 
v___x_79_ = ((lean_object*)(l_Std_Broadcast_instReprError_repr___closed__1));
lean_inc(v___y_78_);
v___x_80_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_80_, 0, v___y_78_);
lean_ctor_set(v___x_80_, 1, v___x_79_);
v___x_81_ = 0;
v___x_82_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_82_, 0, v___x_80_);
lean_ctor_set_uint8(v___x_82_, sizeof(void*)*1, v___x_81_);
v___x_83_ = l_Repr_addAppParen(v___x_82_, v_prec_76_);
return v___x_83_;
}
v___jp_84_:
{
lean_object* v___x_86_; lean_object* v___x_87_; uint8_t v___x_88_; lean_object* v___x_89_; lean_object* v___x_90_; 
v___x_86_ = ((lean_object*)(l_Std_Broadcast_instReprError_repr___closed__3));
lean_inc(v___y_85_);
v___x_87_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_87_, 0, v___y_85_);
lean_ctor_set(v___x_87_, 1, v___x_86_);
v___x_88_ = 0;
v___x_89_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_89_, 0, v___x_87_);
lean_ctor_set_uint8(v___x_89_, sizeof(void*)*1, v___x_88_);
v___x_90_ = l_Repr_addAppParen(v___x_89_, v_prec_76_);
return v___x_90_;
}
v___jp_91_:
{
lean_object* v___x_93_; lean_object* v___x_94_; uint8_t v___x_95_; lean_object* v___x_96_; lean_object* v___x_97_; 
v___x_93_ = ((lean_object*)(l_Std_Broadcast_instReprError_repr___closed__5));
lean_inc(v___y_92_);
v___x_94_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_94_, 0, v___y_92_);
lean_ctor_set(v___x_94_, 1, v___x_93_);
v___x_95_ = 0;
v___x_96_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_96_, 0, v___x_94_);
lean_ctor_set_uint8(v___x_96_, sizeof(void*)*1, v___x_95_);
v___x_97_ = l_Repr_addAppParen(v___x_96_, v_prec_76_);
return v___x_97_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Broadcast_instReprError_repr___boxed(lean_object* v_x_110_, lean_object* v_prec_111_){
_start:
{
uint8_t v_x_171__boxed_112_; lean_object* v_res_113_; 
v_x_171__boxed_112_ = lean_unbox(v_x_110_);
v_res_113_ = l_Std_Broadcast_instReprError_repr(v_x_171__boxed_112_, v_prec_111_);
lean_dec(v_prec_111_);
return v_res_113_;
}
}
LEAN_EXPORT uint8_t l_Std_Broadcast_Error_ofNat(lean_object* v_n_116_){
_start:
{
lean_object* v___x_117_; uint8_t v___x_118_; 
v___x_117_ = lean_unsigned_to_nat(0u);
v___x_118_ = lean_nat_dec_le(v_n_116_, v___x_117_);
if (v___x_118_ == 0)
{
lean_object* v___x_119_; uint8_t v___x_120_; 
v___x_119_ = lean_unsigned_to_nat(1u);
v___x_120_ = lean_nat_dec_le(v_n_116_, v___x_119_);
if (v___x_120_ == 0)
{
uint8_t v___x_121_; 
v___x_121_ = 2;
return v___x_121_;
}
else
{
uint8_t v___x_122_; 
v___x_122_ = 1;
return v___x_122_;
}
}
else
{
uint8_t v___x_123_; 
v___x_123_ = 0;
return v___x_123_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Broadcast_Error_ofNat___boxed(lean_object* v_n_124_){
_start:
{
uint8_t v_res_125_; lean_object* v_r_126_; 
v_res_125_ = l_Std_Broadcast_Error_ofNat(v_n_124_);
lean_dec(v_n_124_);
v_r_126_ = lean_box(v_res_125_);
return v_r_126_;
}
}
LEAN_EXPORT uint8_t l_Std_Broadcast_instDecidableEqError(uint8_t v_x_127_, uint8_t v_y_128_){
_start:
{
lean_object* v___x_129_; lean_object* v___x_130_; uint8_t v___x_131_; 
v___x_129_ = l_Std_Broadcast_Error_ctorIdx(v_x_127_);
v___x_130_ = l_Std_Broadcast_Error_ctorIdx(v_y_128_);
v___x_131_ = lean_nat_dec_eq(v___x_129_, v___x_130_);
lean_dec(v___x_130_);
lean_dec(v___x_129_);
return v___x_131_;
}
}
LEAN_EXPORT lean_object* l_Std_Broadcast_instDecidableEqError___boxed(lean_object* v_x_132_, lean_object* v_y_133_){
_start:
{
uint8_t v_x_20__boxed_134_; uint8_t v_y_21__boxed_135_; uint8_t v_res_136_; lean_object* v_r_137_; 
v_x_20__boxed_134_ = lean_unbox(v_x_132_);
v_y_21__boxed_135_ = lean_unbox(v_y_133_);
v_res_136_ = l_Std_Broadcast_instDecidableEqError(v_x_20__boxed_134_, v_y_21__boxed_135_);
v_r_137_ = lean_box(v_res_136_);
return v_r_137_;
}
}
LEAN_EXPORT uint64_t l_Std_Broadcast_instHashableError_hash(uint8_t v_x_138_){
_start:
{
switch(v_x_138_)
{
case 0:
{
uint64_t v___x_139_; 
v___x_139_ = 0ULL;
return v___x_139_;
}
case 1:
{
uint64_t v___x_140_; 
v___x_140_ = 1ULL;
return v___x_140_;
}
default: 
{
uint64_t v___x_141_; 
v___x_141_ = 2ULL;
return v___x_141_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Broadcast_instHashableError_hash___boxed(lean_object* v_x_142_){
_start:
{
uint8_t v_x_40__boxed_143_; uint64_t v_res_144_; lean_object* v_r_145_; 
v_x_40__boxed_143_ = lean_unbox(v_x_142_);
v_res_144_ = l_Std_Broadcast_instHashableError_hash(v_x_40__boxed_143_);
v_r_145_ = lean_box_uint64(v_res_144_);
return v_r_145_;
}
}
LEAN_EXPORT lean_object* l_Std_instToStringBroadcastError___lam__0(uint8_t v_x_151_){
_start:
{
switch(v_x_151_)
{
case 0:
{
lean_object* v___x_152_; 
v___x_152_ = ((lean_object*)(l_Std_instToStringBroadcastError___lam__0___closed__0));
return v___x_152_;
}
case 1:
{
lean_object* v___x_153_; 
v___x_153_ = ((lean_object*)(l_Std_instToStringBroadcastError___lam__0___closed__1));
return v___x_153_;
}
default: 
{
lean_object* v___x_154_; 
v___x_154_ = ((lean_object*)(l_Std_instToStringBroadcastError___lam__0___closed__2));
return v___x_154_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_instToStringBroadcastError___lam__0___boxed(lean_object* v_x_155_){
_start:
{
uint8_t v_x_36__boxed_156_; lean_object* v_res_157_; 
v_x_36__boxed_156_ = lean_unbox(v_x_155_);
v_res_157_ = l_Std_instToStringBroadcastError___lam__0(v_x_36__boxed_156_);
return v_res_157_;
}
}
LEAN_EXPORT lean_object* l_Std_instMonadLiftBroadcastIO___lam__0(lean_object* v_00_u03b1_166_, lean_object* v_x_167_){
_start:
{
lean_object* v___x_169_; 
v___x_169_ = lean_apply_1(v_x_167_, lean_box(0));
if (lean_obj_tag(v___x_169_) == 0)
{
lean_object* v_a_170_; lean_object* v___x_172_; uint8_t v_isShared_173_; uint8_t v_isSharedCheck_177_; 
v_a_170_ = lean_ctor_get(v___x_169_, 0);
v_isSharedCheck_177_ = !lean_is_exclusive(v___x_169_);
if (v_isSharedCheck_177_ == 0)
{
v___x_172_ = v___x_169_;
v_isShared_173_ = v_isSharedCheck_177_;
goto v_resetjp_171_;
}
else
{
lean_inc(v_a_170_);
lean_dec(v___x_169_);
v___x_172_ = lean_box(0);
v_isShared_173_ = v_isSharedCheck_177_;
goto v_resetjp_171_;
}
v_resetjp_171_:
{
lean_object* v___x_175_; 
if (v_isShared_173_ == 0)
{
v___x_175_ = v___x_172_;
goto v_reusejp_174_;
}
else
{
lean_object* v_reuseFailAlloc_176_; 
v_reuseFailAlloc_176_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_176_, 0, v_a_170_);
v___x_175_ = v_reuseFailAlloc_176_;
goto v_reusejp_174_;
}
v_reusejp_174_:
{
return v___x_175_;
}
}
}
else
{
lean_object* v_a_178_; lean_object* v___x_180_; uint8_t v_isShared_181_; uint8_t v_isSharedCheck_195_; 
v_a_178_ = lean_ctor_get(v___x_169_, 0);
v_isSharedCheck_195_ = !lean_is_exclusive(v___x_169_);
if (v_isSharedCheck_195_ == 0)
{
v___x_180_ = v___x_169_;
v_isShared_181_ = v_isSharedCheck_195_;
goto v_resetjp_179_;
}
else
{
lean_inc(v_a_178_);
lean_dec(v___x_169_);
v___x_180_ = lean_box(0);
v_isShared_181_ = v_isSharedCheck_195_;
goto v_resetjp_179_;
}
v_resetjp_179_:
{
uint8_t v___x_182_; 
v___x_182_ = lean_unbox(v_a_178_);
lean_dec(v_a_178_);
switch(v___x_182_)
{
case 0:
{
lean_object* v___x_183_; lean_object* v___x_185_; 
v___x_183_ = ((lean_object*)(l_Std_instMonadLiftBroadcastIO___lam__0___closed__0));
if (v_isShared_181_ == 0)
{
lean_ctor_set(v___x_180_, 0, v___x_183_);
v___x_185_ = v___x_180_;
goto v_reusejp_184_;
}
else
{
lean_object* v_reuseFailAlloc_186_; 
v_reuseFailAlloc_186_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_186_, 0, v___x_183_);
v___x_185_ = v_reuseFailAlloc_186_;
goto v_reusejp_184_;
}
v_reusejp_184_:
{
return v___x_185_;
}
}
case 1:
{
lean_object* v___x_187_; lean_object* v___x_189_; 
v___x_187_ = ((lean_object*)(l_Std_instMonadLiftBroadcastIO___lam__0___closed__1));
if (v_isShared_181_ == 0)
{
lean_ctor_set(v___x_180_, 0, v___x_187_);
v___x_189_ = v___x_180_;
goto v_reusejp_188_;
}
else
{
lean_object* v_reuseFailAlloc_190_; 
v_reuseFailAlloc_190_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_190_, 0, v___x_187_);
v___x_189_ = v_reuseFailAlloc_190_;
goto v_reusejp_188_;
}
v_reusejp_188_:
{
return v___x_189_;
}
}
default: 
{
lean_object* v___x_191_; lean_object* v___x_193_; 
v___x_191_ = ((lean_object*)(l_Std_instMonadLiftBroadcastIO___lam__0___closed__2));
if (v_isShared_181_ == 0)
{
lean_ctor_set(v___x_180_, 0, v___x_191_);
v___x_193_ = v___x_180_;
goto v_reusejp_192_;
}
else
{
lean_object* v_reuseFailAlloc_194_; 
v_reuseFailAlloc_194_ = lean_alloc_ctor(1, 1, 0);
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
LEAN_EXPORT lean_object* l_Std_instMonadLiftBroadcastIO___lam__0___boxed(lean_object* v_00_u03b1_196_, lean_object* v_x_197_, lean_object* v___y_198_){
_start:
{
lean_object* v_res_199_; 
v_res_199_ = l_Std_instMonadLiftBroadcastIO___lam__0(v_00_u03b1_196_, v_x_197_);
return v_res_199_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Broadcast_Consumer_resolve___redArg(lean_object* v_c_202_, uint8_t v_b_203_){
_start:
{
lean_object* v_promise_205_; lean_object* v___x_206_; lean_object* v___x_207_; 
v_promise_205_ = lean_ctor_get(v_c_202_, 0);
v___x_206_ = lean_box(v_b_203_);
v___x_207_ = lean_io_promise_resolve(v___x_206_, v_promise_205_);
return v___x_207_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Broadcast_Consumer_resolve___redArg___boxed(lean_object* v_c_208_, lean_object* v_b_209_, lean_object* v___y_210_){
_start:
{
uint8_t v_b_boxed_211_; lean_object* v_res_212_; 
v_b_boxed_211_ = lean_unbox(v_b_209_);
v_res_212_ = l___private_Std_Sync_Broadcast_0__Std_Broadcast_Consumer_resolve___redArg(v_c_208_, v_b_boxed_211_);
lean_dec_ref(v_c_208_);
return v_res_212_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Broadcast_Consumer_resolve(lean_object* v_00_u03b1_213_, lean_object* v_c_214_, uint8_t v_b_215_){
_start:
{
lean_object* v___x_217_; 
v___x_217_ = l___private_Std_Sync_Broadcast_0__Std_Broadcast_Consumer_resolve___redArg(v_c_214_, v_b_215_);
return v___x_217_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Broadcast_Consumer_resolve___boxed(lean_object* v_00_u03b1_218_, lean_object* v_c_219_, lean_object* v_b_220_, lean_object* v___y_221_){
_start:
{
uint8_t v_b_boxed_222_; lean_object* v_res_223_; 
v_b_boxed_222_ = lean_unbox(v_b_220_);
v_res_223_ = l___private_Std_Sync_Broadcast_0__Std_Broadcast_Consumer_resolve(v_00_u03b1_218_, v_c_219_, v_b_boxed_222_);
lean_dec_ref(v_c_219_);
return v_res_223_;
}
}
LEAN_EXPORT lean_object* l_Std_instInhabitedSlot_default___redArg(){
_start:
{
lean_object* v___x_228_; 
v___x_228_ = ((lean_object*)(l_Std_instInhabitedSlot_default___redArg___closed__0));
return v___x_228_;
}
}
LEAN_EXPORT lean_object* l_Std_instInhabitedSlot_default___redArg___boxed(lean_object* v___dummy_229_){
_start:
{
lean_object* v_res_230_; 
v_res_230_ = l_Std_instInhabitedSlot_default___redArg();
return v_res_230_;
}
}
static lean_object* _init_l_Std_instInhabitedSlot_default___closed__0(void){
_start:
{
lean_object* v___x_231_; 
v___x_231_ = l_Std_instInhabitedSlot_default___redArg();
return v___x_231_;
}
}
LEAN_EXPORT lean_object* l_Std_instInhabitedSlot_default(lean_object* v_00_u03b1_232_){
_start:
{
lean_object* v___x_233_; 
v___x_233_ = lean_obj_once(&l_Std_instInhabitedSlot_default___closed__0, &l_Std_instInhabitedSlot_default___closed__0_once, _init_l_Std_instInhabitedSlot_default___closed__0);
return v___x_233_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_instInhabitedSlot___redArg(){
_start:
{
lean_object* v___x_235_; 
v___x_235_ = lean_obj_once(&l_Std_instInhabitedSlot_default___closed__0, &l_Std_instInhabitedSlot_default___closed__0_once, _init_l_Std_instInhabitedSlot_default___closed__0);
return v___x_235_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_instInhabitedSlot___redArg___boxed(lean_object* v___dummy_236_){
_start:
{
lean_object* v_res_237_; 
v_res_237_ = l___private_Std_Sync_Broadcast_0__Std_instInhabitedSlot___redArg();
return v_res_237_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_instInhabitedSlot(lean_object* v_a_238_){
_start:
{
lean_object* v___x_239_; 
v___x_239_ = lean_obj_once(&l_Std_instInhabitedSlot_default___closed__0, &l_Std_instInhabitedSlot_default___closed__0_once, _init_l_Std_instInhabitedSlot_default___closed__0);
return v___x_239_;
}
}
static lean_object* _init_l___private_Std_Sync_Broadcast_0__Std_instReprSlot_repr___redArg___closed__7(void){
_start:
{
lean_object* v___x_253_; lean_object* v___x_254_; 
v___x_253_ = lean_unsigned_to_nat(9u);
v___x_254_ = lean_nat_to_int(v___x_253_);
return v___x_254_;
}
}
static lean_object* _init_l___private_Std_Sync_Broadcast_0__Std_instReprSlot_repr___redArg___closed__12(void){
_start:
{
lean_object* v___x_261_; lean_object* v___x_262_; 
v___x_261_ = lean_unsigned_to_nat(7u);
v___x_262_ = lean_nat_to_int(v___x_261_);
return v___x_262_;
}
}
static lean_object* _init_l___private_Std_Sync_Broadcast_0__Std_instReprSlot_repr___redArg___closed__15(void){
_start:
{
lean_object* v___x_266_; lean_object* v___x_267_; 
v___x_266_ = lean_unsigned_to_nat(13u);
v___x_267_ = lean_nat_to_int(v___x_266_);
return v___x_267_;
}
}
static lean_object* _init_l___private_Std_Sync_Broadcast_0__Std_instReprSlot_repr___redArg___closed__17(void){
_start:
{
lean_object* v___x_269_; lean_object* v___x_270_; 
v___x_269_ = ((lean_object*)(l___private_Std_Sync_Broadcast_0__Std_instReprSlot_repr___redArg___closed__0));
v___x_270_ = lean_string_length(v___x_269_);
return v___x_270_;
}
}
static lean_object* _init_l___private_Std_Sync_Broadcast_0__Std_instReprSlot_repr___redArg___closed__18(void){
_start:
{
lean_object* v___x_271_; lean_object* v___x_272_; 
v___x_271_ = lean_obj_once(&l___private_Std_Sync_Broadcast_0__Std_instReprSlot_repr___redArg___closed__17, &l___private_Std_Sync_Broadcast_0__Std_instReprSlot_repr___redArg___closed__17_once, _init_l___private_Std_Sync_Broadcast_0__Std_instReprSlot_repr___redArg___closed__17);
v___x_272_ = lean_nat_to_int(v___x_271_);
return v___x_272_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_instReprSlot_repr___redArg(lean_object* v_inst_277_, lean_object* v_x_278_){
_start:
{
lean_object* v_value_279_; lean_object* v_pos_280_; lean_object* v_remaining_281_; lean_object* v___x_282_; lean_object* v___x_283_; lean_object* v___x_284_; lean_object* v___x_285_; lean_object* v___x_286_; lean_object* v___x_287_; uint8_t v___x_288_; lean_object* v___x_289_; lean_object* v___x_290_; lean_object* v___x_291_; lean_object* v___x_292_; lean_object* v___x_293_; lean_object* v___x_294_; lean_object* v___x_295_; lean_object* v___x_296_; lean_object* v___x_297_; lean_object* v___x_298_; lean_object* v___x_299_; lean_object* v___x_300_; lean_object* v___x_301_; lean_object* v___x_302_; lean_object* v___x_303_; lean_object* v___x_304_; lean_object* v___x_305_; lean_object* v___x_306_; lean_object* v___x_307_; lean_object* v___x_308_; lean_object* v___x_309_; lean_object* v___x_310_; lean_object* v___x_311_; lean_object* v___x_312_; lean_object* v___x_313_; lean_object* v___x_314_; lean_object* v___x_315_; lean_object* v___x_316_; lean_object* v___x_317_; lean_object* v___x_318_; lean_object* v___x_319_; lean_object* v___x_320_; lean_object* v___x_321_; 
v_value_279_ = lean_ctor_get(v_x_278_, 0);
lean_inc(v_value_279_);
v_pos_280_ = lean_ctor_get(v_x_278_, 1);
lean_inc(v_pos_280_);
v_remaining_281_ = lean_ctor_get(v_x_278_, 2);
lean_inc(v_remaining_281_);
lean_dec_ref(v_x_278_);
v___x_282_ = ((lean_object*)(l___private_Std_Sync_Broadcast_0__Std_instReprSlot_repr___redArg___closed__5));
v___x_283_ = ((lean_object*)(l___private_Std_Sync_Broadcast_0__Std_instReprSlot_repr___redArg___closed__6));
v___x_284_ = lean_obj_once(&l___private_Std_Sync_Broadcast_0__Std_instReprSlot_repr___redArg___closed__7, &l___private_Std_Sync_Broadcast_0__Std_instReprSlot_repr___redArg___closed__7_once, _init_l___private_Std_Sync_Broadcast_0__Std_instReprSlot_repr___redArg___closed__7);
v___x_285_ = lean_unsigned_to_nat(0u);
v___x_286_ = l_Option_repr___redArg(v_inst_277_, v_value_279_, v___x_285_);
v___x_287_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_287_, 0, v___x_284_);
lean_ctor_set(v___x_287_, 1, v___x_286_);
v___x_288_ = 0;
v___x_289_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_289_, 0, v___x_287_);
lean_ctor_set_uint8(v___x_289_, sizeof(void*)*1, v___x_288_);
v___x_290_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_290_, 0, v___x_283_);
lean_ctor_set(v___x_290_, 1, v___x_289_);
v___x_291_ = ((lean_object*)(l___private_Std_Sync_Broadcast_0__Std_instReprSlot_repr___redArg___closed__9));
v___x_292_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_292_, 0, v___x_290_);
lean_ctor_set(v___x_292_, 1, v___x_291_);
v___x_293_ = lean_box(1);
v___x_294_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_294_, 0, v___x_292_);
lean_ctor_set(v___x_294_, 1, v___x_293_);
v___x_295_ = ((lean_object*)(l___private_Std_Sync_Broadcast_0__Std_instReprSlot_repr___redArg___closed__11));
v___x_296_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_296_, 0, v___x_294_);
lean_ctor_set(v___x_296_, 1, v___x_295_);
v___x_297_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_297_, 0, v___x_296_);
lean_ctor_set(v___x_297_, 1, v___x_282_);
v___x_298_ = lean_obj_once(&l___private_Std_Sync_Broadcast_0__Std_instReprSlot_repr___redArg___closed__12, &l___private_Std_Sync_Broadcast_0__Std_instReprSlot_repr___redArg___closed__12_once, _init_l___private_Std_Sync_Broadcast_0__Std_instReprSlot_repr___redArg___closed__12);
v___x_299_ = l_Nat_reprFast(v_pos_280_);
v___x_300_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_300_, 0, v___x_299_);
v___x_301_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_301_, 0, v___x_298_);
lean_ctor_set(v___x_301_, 1, v___x_300_);
v___x_302_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_302_, 0, v___x_301_);
lean_ctor_set_uint8(v___x_302_, sizeof(void*)*1, v___x_288_);
v___x_303_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_303_, 0, v___x_297_);
lean_ctor_set(v___x_303_, 1, v___x_302_);
v___x_304_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_304_, 0, v___x_303_);
lean_ctor_set(v___x_304_, 1, v___x_291_);
v___x_305_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_305_, 0, v___x_304_);
lean_ctor_set(v___x_305_, 1, v___x_293_);
v___x_306_ = ((lean_object*)(l___private_Std_Sync_Broadcast_0__Std_instReprSlot_repr___redArg___closed__14));
v___x_307_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_307_, 0, v___x_305_);
lean_ctor_set(v___x_307_, 1, v___x_306_);
v___x_308_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_308_, 0, v___x_307_);
lean_ctor_set(v___x_308_, 1, v___x_282_);
v___x_309_ = lean_obj_once(&l___private_Std_Sync_Broadcast_0__Std_instReprSlot_repr___redArg___closed__15, &l___private_Std_Sync_Broadcast_0__Std_instReprSlot_repr___redArg___closed__15_once, _init_l___private_Std_Sync_Broadcast_0__Std_instReprSlot_repr___redArg___closed__15);
v___x_310_ = l_Nat_reprFast(v_remaining_281_);
v___x_311_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_311_, 0, v___x_310_);
v___x_312_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_312_, 0, v___x_309_);
lean_ctor_set(v___x_312_, 1, v___x_311_);
v___x_313_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_313_, 0, v___x_312_);
lean_ctor_set_uint8(v___x_313_, sizeof(void*)*1, v___x_288_);
v___x_314_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_314_, 0, v___x_308_);
lean_ctor_set(v___x_314_, 1, v___x_313_);
v___x_315_ = lean_obj_once(&l___private_Std_Sync_Broadcast_0__Std_instReprSlot_repr___redArg___closed__18, &l___private_Std_Sync_Broadcast_0__Std_instReprSlot_repr___redArg___closed__18_once, _init_l___private_Std_Sync_Broadcast_0__Std_instReprSlot_repr___redArg___closed__18);
v___x_316_ = ((lean_object*)(l___private_Std_Sync_Broadcast_0__Std_instReprSlot_repr___redArg___closed__19));
v___x_317_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_317_, 0, v___x_316_);
lean_ctor_set(v___x_317_, 1, v___x_314_);
v___x_318_ = ((lean_object*)(l___private_Std_Sync_Broadcast_0__Std_instReprSlot_repr___redArg___closed__20));
v___x_319_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_319_, 0, v___x_317_);
lean_ctor_set(v___x_319_, 1, v___x_318_);
v___x_320_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_320_, 0, v___x_315_);
lean_ctor_set(v___x_320_, 1, v___x_319_);
v___x_321_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_321_, 0, v___x_320_);
lean_ctor_set_uint8(v___x_321_, sizeof(void*)*1, v___x_288_);
return v___x_321_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_instReprSlot_repr(lean_object* v_00_u03b1_322_, lean_object* v_inst_323_, lean_object* v_x_324_, lean_object* v_prec_325_){
_start:
{
lean_object* v___x_326_; 
v___x_326_ = l___private_Std_Sync_Broadcast_0__Std_instReprSlot_repr___redArg(v_inst_323_, v_x_324_);
return v___x_326_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_instReprSlot_repr___boxed(lean_object* v_00_u03b1_327_, lean_object* v_inst_328_, lean_object* v_x_329_, lean_object* v_prec_330_){
_start:
{
lean_object* v_res_331_; 
v_res_331_ = l___private_Std_Sync_Broadcast_0__Std_instReprSlot_repr(v_00_u03b1_327_, v_inst_328_, v_x_329_, v_prec_330_);
lean_dec(v_prec_330_);
return v_res_331_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_instReprSlot___redArg(lean_object* v_inst_332_){
_start:
{
lean_object* v___x_333_; 
v___x_333_ = lean_alloc_closure((void*)(l___private_Std_Sync_Broadcast_0__Std_instReprSlot_repr___boxed), 4, 2);
lean_closure_set(v___x_333_, 0, lean_box(0));
lean_closure_set(v___x_333_, 1, v_inst_332_);
return v___x_333_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_instReprSlot(lean_object* v_00_u03b1_334_, lean_object* v_inst_335_){
_start:
{
lean_object* v___x_336_; 
v___x_336_ = lean_alloc_closure((void*)(l___private_Std_Sync_Broadcast_0__Std_instReprSlot_repr___boxed), 4, 2);
lean_closure_set(v___x_336_, 0, lean_box(0));
lean_closure_set(v___x_336_, 1, v_inst_335_);
return v___x_336_;
}
}
static lean_object* _init_l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__12(void){
_start:
{
lean_object* v___x_363_; lean_object* v___x_364_; 
v___x_363_ = ((lean_object*)(l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__10));
v___x_364_ = l_Lean_mkAtom(v___x_363_);
return v___x_364_;
}
}
static lean_object* _init_l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__13(void){
_start:
{
lean_object* v___x_365_; lean_object* v___x_366_; lean_object* v___x_367_; 
v___x_365_ = lean_obj_once(&l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__12, &l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__12_once, _init_l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__12);
v___x_366_ = ((lean_object*)(l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__5));
v___x_367_ = lean_array_push(v___x_366_, v___x_365_);
return v___x_367_;
}
}
static lean_object* _init_l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__17(void){
_start:
{
lean_object* v___x_378_; lean_object* v___x_379_; lean_object* v___x_380_; 
v___x_378_ = ((lean_object*)(l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__16));
v___x_379_ = ((lean_object*)(l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__5));
v___x_380_ = lean_array_push(v___x_379_, v___x_378_);
return v___x_380_;
}
}
static lean_object* _init_l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__18(void){
_start:
{
lean_object* v___x_381_; lean_object* v___x_382_; lean_object* v___x_383_; lean_object* v___x_384_; 
v___x_381_ = lean_obj_once(&l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__17, &l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__17_once, _init_l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__17);
v___x_382_ = ((lean_object*)(l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__15));
v___x_383_ = lean_box(2);
v___x_384_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_384_, 0, v___x_383_);
lean_ctor_set(v___x_384_, 1, v___x_382_);
lean_ctor_set(v___x_384_, 2, v___x_381_);
return v___x_384_;
}
}
static lean_object* _init_l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__19(void){
_start:
{
lean_object* v___x_385_; lean_object* v___x_386_; lean_object* v___x_387_; 
v___x_385_ = lean_obj_once(&l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__18, &l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__18_once, _init_l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__18);
v___x_386_ = lean_obj_once(&l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__13, &l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__13_once, _init_l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__13);
v___x_387_ = lean_array_push(v___x_386_, v___x_385_);
return v___x_387_;
}
}
static lean_object* _init_l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__20(void){
_start:
{
lean_object* v___x_388_; lean_object* v___x_389_; lean_object* v___x_390_; lean_object* v___x_391_; 
v___x_388_ = lean_obj_once(&l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__19, &l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__19_once, _init_l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__19);
v___x_389_ = ((lean_object*)(l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__11));
v___x_390_ = lean_box(2);
v___x_391_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_391_, 0, v___x_390_);
lean_ctor_set(v___x_391_, 1, v___x_389_);
lean_ctor_set(v___x_391_, 2, v___x_388_);
return v___x_391_;
}
}
static lean_object* _init_l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__21(void){
_start:
{
lean_object* v___x_392_; lean_object* v___x_393_; lean_object* v___x_394_; 
v___x_392_ = lean_obj_once(&l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__20, &l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__20_once, _init_l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__20);
v___x_393_ = ((lean_object*)(l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__5));
v___x_394_ = lean_array_push(v___x_393_, v___x_392_);
return v___x_394_;
}
}
static lean_object* _init_l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__22(void){
_start:
{
lean_object* v___x_395_; lean_object* v___x_396_; lean_object* v___x_397_; lean_object* v___x_398_; 
v___x_395_ = lean_obj_once(&l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__21, &l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__21_once, _init_l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__21);
v___x_396_ = ((lean_object*)(l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__9));
v___x_397_ = lean_box(2);
v___x_398_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_398_, 0, v___x_397_);
lean_ctor_set(v___x_398_, 1, v___x_396_);
lean_ctor_set(v___x_398_, 2, v___x_395_);
return v___x_398_;
}
}
static lean_object* _init_l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__23(void){
_start:
{
lean_object* v___x_399_; lean_object* v___x_400_; lean_object* v___x_401_; 
v___x_399_ = lean_obj_once(&l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__22, &l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__22_once, _init_l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__22);
v___x_400_ = ((lean_object*)(l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__5));
v___x_401_ = lean_array_push(v___x_400_, v___x_399_);
return v___x_401_;
}
}
static lean_object* _init_l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__24(void){
_start:
{
lean_object* v___x_402_; lean_object* v___x_403_; lean_object* v___x_404_; lean_object* v___x_405_; 
v___x_402_ = lean_obj_once(&l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__23, &l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__23_once, _init_l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__23);
v___x_403_ = ((lean_object*)(l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__7));
v___x_404_ = lean_box(2);
v___x_405_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_405_, 0, v___x_404_);
lean_ctor_set(v___x_405_, 1, v___x_403_);
lean_ctor_set(v___x_405_, 2, v___x_402_);
return v___x_405_;
}
}
static lean_object* _init_l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__25(void){
_start:
{
lean_object* v___x_406_; lean_object* v___x_407_; lean_object* v___x_408_; 
v___x_406_ = lean_obj_once(&l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__24, &l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__24_once, _init_l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__24);
v___x_407_ = ((lean_object*)(l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__5));
v___x_408_ = lean_array_push(v___x_407_, v___x_406_);
return v___x_408_;
}
}
static lean_object* _init_l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__26(void){
_start:
{
lean_object* v___x_409_; lean_object* v___x_410_; lean_object* v___x_411_; lean_object* v___x_412_; 
v___x_409_ = lean_obj_once(&l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__25, &l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__25_once, _init_l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__25);
v___x_410_ = ((lean_object*)(l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__4));
v___x_411_ = lean_box(2);
v___x_412_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_412_, 0, v___x_411_);
lean_ctor_set(v___x_412_, 1, v___x_410_);
lean_ctor_set(v___x_412_, 2, v___x_409_);
return v___x_412_;
}
}
static lean_object* _init_l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1(void){
_start:
{
lean_object* v___x_413_; 
v___x_413_ = lean_obj_once(&l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__26, &l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__26_once, _init_l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__26);
return v___x_413_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_new___redArg___lam__0(lean_object* v_x_414_){
_start:
{
lean_object* v___x_416_; lean_object* v___x_417_; 
v___x_416_ = ((lean_object*)(l_Std_instInhabitedSlot_default___redArg___closed__0));
v___x_417_ = lean_st_mk_ref(v___x_416_);
return v___x_417_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_new___redArg___lam__0___boxed(lean_object* v_x_418_, lean_object* v___y_419_){
_start:
{
lean_object* v_res_420_; 
v_res_420_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_new___redArg___lam__0(v_x_418_);
return v_res_420_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Vector_Basic_0__Vector_mapM_go___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_new_spec__0___redArg(lean_object* v_n_421_, lean_object* v_f_422_, lean_object* v_xs_423_, lean_object* v_k_424_, lean_object* v_acc_425_){
_start:
{
uint8_t v___x_427_; 
v___x_427_ = lean_nat_dec_lt(v_k_424_, v_n_421_);
if (v___x_427_ == 0)
{
lean_dec(v_k_424_);
lean_dec_ref(v_f_422_);
return v_acc_425_;
}
else
{
lean_object* v___x_428_; lean_object* v___x_429_; lean_object* v___x_430_; lean_object* v___x_431_; lean_object* v___x_432_; 
v___x_428_ = lean_array_fget_borrowed(v_xs_423_, v_k_424_);
lean_inc_ref(v_f_422_);
lean_inc(v___x_428_);
v___x_429_ = lean_apply_2(v_f_422_, v___x_428_, lean_box(0));
v___x_430_ = lean_unsigned_to_nat(1u);
v___x_431_ = lean_nat_add(v_k_424_, v___x_430_);
lean_dec(v_k_424_);
v___x_432_ = lean_array_push(v_acc_425_, v___x_429_);
v_k_424_ = v___x_431_;
v_acc_425_ = v___x_432_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Vector_Basic_0__Vector_mapM_go___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_new_spec__0___redArg___boxed(lean_object* v_n_434_, lean_object* v_f_435_, lean_object* v_xs_436_, lean_object* v_k_437_, lean_object* v_acc_438_, lean_object* v___y_439_){
_start:
{
lean_object* v_res_440_; 
v_res_440_ = l___private_Init_Data_Vector_Basic_0__Vector_mapM_go___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_new_spec__0___redArg(v_n_434_, v_f_435_, v_xs_436_, v_k_437_, v_acc_438_);
lean_dec_ref(v_xs_436_);
lean_dec(v_n_434_);
return v_res_440_;
}
}
static lean_object* _init_l___private_Std_Sync_Broadcast_0__Std_Bounded_new___redArg___closed__2(void){
_start:
{
lean_object* v___x_444_; 
v___x_444_ = l_Std_Queue_empty___redArg();
return v___x_444_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_new___redArg(lean_object* v_capacity_445_){
_start:
{
lean_object* v___f_447_; lean_object* v___x_448_; lean_object* v___x_449_; lean_object* v___x_450_; lean_object* v___x_451_; lean_object* v___x_452_; lean_object* v___x_453_; lean_object* v___x_454_; uint8_t v___x_455_; lean_object* v___x_456_; lean_object* v___x_457_; 
v___f_447_ = ((lean_object*)(l___private_Std_Sync_Broadcast_0__Std_Bounded_new___redArg___closed__0));
v___x_448_ = lean_box(0);
lean_inc(v_capacity_445_);
v___x_449_ = lean_mk_array(v_capacity_445_, v___x_448_);
v___x_450_ = lean_unsigned_to_nat(0u);
v___x_451_ = ((lean_object*)(l___private_Std_Sync_Broadcast_0__Std_Bounded_new___redArg___closed__1));
v___x_452_ = l___private_Init_Data_Vector_Basic_0__Vector_mapM_go___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_new_spec__0___redArg(v_capacity_445_, v___f_447_, v___x_449_, v___x_450_, v___x_451_);
lean_dec_ref(v___x_449_);
v___x_453_ = lean_obj_once(&l___private_Std_Sync_Broadcast_0__Std_Bounded_new___redArg___closed__2, &l___private_Std_Sync_Broadcast_0__Std_Bounded_new___redArg___closed__2_once, _init_l___private_Std_Sync_Broadcast_0__Std_Bounded_new___redArg___closed__2);
v___x_454_ = lean_box(1);
v___x_455_ = 0;
v___x_456_ = lean_alloc_ctor(0, 10, 1);
lean_ctor_set(v___x_456_, 0, v___x_453_);
lean_ctor_set(v___x_456_, 1, v___x_453_);
lean_ctor_set(v___x_456_, 2, v_capacity_445_);
lean_ctor_set(v___x_456_, 3, v___x_450_);
lean_ctor_set(v___x_456_, 4, v___x_452_);
lean_ctor_set(v___x_456_, 5, v___x_450_);
lean_ctor_set(v___x_456_, 6, v___x_450_);
lean_ctor_set(v___x_456_, 7, v___x_454_);
lean_ctor_set(v___x_456_, 8, v___x_450_);
lean_ctor_set(v___x_456_, 9, v___x_450_);
lean_ctor_set_uint8(v___x_456_, sizeof(void*)*10, v___x_455_);
v___x_457_ = l_Std_Mutex_new___redArg(v___x_456_);
return v___x_457_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_new___redArg___boxed(lean_object* v_capacity_458_, lean_object* v___y_459_){
_start:
{
lean_object* v_res_460_; 
v_res_460_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_new___redArg(v_capacity_458_);
return v_res_460_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_new(lean_object* v_00_u03b1_461_, lean_object* v_capacity_462_, lean_object* v_h_463_){
_start:
{
lean_object* v___x_465_; 
v___x_465_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_new___redArg(v_capacity_462_);
return v___x_465_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_new___boxed(lean_object* v_00_u03b1_466_, lean_object* v_capacity_467_, lean_object* v_h_468_, lean_object* v___y_469_){
_start:
{
lean_object* v_res_470_; 
v_res_470_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_new(v_00_u03b1_466_, v_capacity_467_, v_h_468_);
return v_res_470_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Vector_Basic_0__Vector_mapM_go___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_new_spec__0(lean_object* v_00_u03b1_471_, lean_object* v_00_u03b2_472_, lean_object* v_n_473_, lean_object* v_f_474_, lean_object* v_xs_475_, lean_object* v_k_476_, lean_object* v_h_477_, lean_object* v_acc_478_){
_start:
{
lean_object* v___x_480_; 
v___x_480_ = l___private_Init_Data_Vector_Basic_0__Vector_mapM_go___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_new_spec__0___redArg(v_n_473_, v_f_474_, v_xs_475_, v_k_476_, v_acc_478_);
return v___x_480_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Vector_Basic_0__Vector_mapM_go___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_new_spec__0___boxed(lean_object* v_00_u03b1_481_, lean_object* v_00_u03b2_482_, lean_object* v_n_483_, lean_object* v_f_484_, lean_object* v_xs_485_, lean_object* v_k_486_, lean_object* v_h_487_, lean_object* v_acc_488_, lean_object* v___y_489_){
_start:
{
lean_object* v_res_490_; 
v_res_490_ = l___private_Init_Data_Vector_Basic_0__Vector_mapM_go___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_new_spec__0(v_00_u03b1_481_, v_00_u03b2_482_, v_n_483_, v_f_484_, v_xs_485_, v_k_486_, v_h_487_, v_acc_488_);
lean_dec_ref(v_xs_485_);
lean_dec(v_n_483_);
return v_res_490_;
}
}
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_subscribe_spec__1___redArg___lam__0(lean_object* v_mutex_491_, lean_object* v_a_x3f_492_){
_start:
{
lean_object* v___x_494_; lean_object* v___x_495_; 
v___x_494_ = lean_io_basemutex_unlock(v_mutex_491_);
v___x_495_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_495_, 0, v___x_494_);
return v___x_495_;
}
}
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_subscribe_spec__1___redArg___lam__0___boxed(lean_object* v_mutex_496_, lean_object* v_a_x3f_497_, lean_object* v___y_498_){
_start:
{
lean_object* v_res_499_; 
v_res_499_ = l_Std_Mutex_atomically___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_subscribe_spec__1___redArg___lam__0(v_mutex_496_, v_a_x3f_497_);
lean_dec(v_a_x3f_497_);
lean_dec(v_mutex_496_);
return v_res_499_;
}
}
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_subscribe_spec__1___redArg(lean_object* v_mutex_500_, lean_object* v_k_501_){
_start:
{
lean_object* v_ref_503_; lean_object* v_mutex_504_; lean_object* v___x_505_; lean_object* v___x_506_; 
v_ref_503_ = lean_ctor_get(v_mutex_500_, 0);
lean_inc(v_ref_503_);
v_mutex_504_ = lean_ctor_get(v_mutex_500_, 1);
lean_inc(v_mutex_504_);
lean_dec_ref(v_mutex_500_);
v___x_505_ = lean_io_basemutex_lock(v_mutex_504_);
v___x_506_ = lean_apply_2(v_k_501_, v_ref_503_, lean_box(0));
if (lean_obj_tag(v___x_506_) == 0)
{
lean_object* v_a_507_; lean_object* v___x_509_; uint8_t v_isShared_510_; uint8_t v_isSharedCheck_523_; 
v_a_507_ = lean_ctor_get(v___x_506_, 0);
v_isSharedCheck_523_ = !lean_is_exclusive(v___x_506_);
if (v_isSharedCheck_523_ == 0)
{
v___x_509_ = v___x_506_;
v_isShared_510_ = v_isSharedCheck_523_;
goto v_resetjp_508_;
}
else
{
lean_inc(v_a_507_);
lean_dec(v___x_506_);
v___x_509_ = lean_box(0);
v_isShared_510_ = v_isSharedCheck_523_;
goto v_resetjp_508_;
}
v_resetjp_508_:
{
lean_object* v___x_512_; 
lean_inc(v_a_507_);
if (v_isShared_510_ == 0)
{
lean_ctor_set_tag(v___x_509_, 1);
v___x_512_ = v___x_509_;
goto v_reusejp_511_;
}
else
{
lean_object* v_reuseFailAlloc_522_; 
v_reuseFailAlloc_522_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_522_, 0, v_a_507_);
v___x_512_ = v_reuseFailAlloc_522_;
goto v_reusejp_511_;
}
v_reusejp_511_:
{
lean_object* v___x_513_; lean_object* v___x_515_; uint8_t v_isShared_516_; uint8_t v_isSharedCheck_520_; 
v___x_513_ = l_Std_Mutex_atomically___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_subscribe_spec__1___redArg___lam__0(v_mutex_504_, v___x_512_);
lean_dec_ref(v___x_512_);
lean_dec(v_mutex_504_);
v_isSharedCheck_520_ = !lean_is_exclusive(v___x_513_);
if (v_isSharedCheck_520_ == 0)
{
lean_object* v_unused_521_; 
v_unused_521_ = lean_ctor_get(v___x_513_, 0);
lean_dec(v_unused_521_);
v___x_515_ = v___x_513_;
v_isShared_516_ = v_isSharedCheck_520_;
goto v_resetjp_514_;
}
else
{
lean_dec(v___x_513_);
v___x_515_ = lean_box(0);
v_isShared_516_ = v_isSharedCheck_520_;
goto v_resetjp_514_;
}
v_resetjp_514_:
{
lean_object* v___x_518_; 
if (v_isShared_516_ == 0)
{
lean_ctor_set(v___x_515_, 0, v_a_507_);
v___x_518_ = v___x_515_;
goto v_reusejp_517_;
}
else
{
lean_object* v_reuseFailAlloc_519_; 
v_reuseFailAlloc_519_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_519_, 0, v_a_507_);
v___x_518_ = v_reuseFailAlloc_519_;
goto v_reusejp_517_;
}
v_reusejp_517_:
{
return v___x_518_;
}
}
}
}
}
else
{
lean_object* v_a_524_; lean_object* v___x_525_; lean_object* v___x_526_; lean_object* v___x_528_; uint8_t v_isShared_529_; uint8_t v_isSharedCheck_533_; 
v_a_524_ = lean_ctor_get(v___x_506_, 0);
lean_inc(v_a_524_);
lean_dec_ref_known(v___x_506_, 1);
v___x_525_ = lean_box(0);
v___x_526_ = l_Std_Mutex_atomically___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_subscribe_spec__1___redArg___lam__0(v_mutex_504_, v___x_525_);
lean_dec(v_mutex_504_);
v_isSharedCheck_533_ = !lean_is_exclusive(v___x_526_);
if (v_isSharedCheck_533_ == 0)
{
lean_object* v_unused_534_; 
v_unused_534_ = lean_ctor_get(v___x_526_, 0);
lean_dec(v_unused_534_);
v___x_528_ = v___x_526_;
v_isShared_529_ = v_isSharedCheck_533_;
goto v_resetjp_527_;
}
else
{
lean_dec(v___x_526_);
v___x_528_ = lean_box(0);
v_isShared_529_ = v_isSharedCheck_533_;
goto v_resetjp_527_;
}
v_resetjp_527_:
{
lean_object* v___x_531_; 
if (v_isShared_529_ == 0)
{
lean_ctor_set_tag(v___x_528_, 1);
lean_ctor_set(v___x_528_, 0, v_a_524_);
v___x_531_ = v___x_528_;
goto v_reusejp_530_;
}
else
{
lean_object* v_reuseFailAlloc_532_; 
v_reuseFailAlloc_532_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_532_, 0, v_a_524_);
v___x_531_ = v_reuseFailAlloc_532_;
goto v_reusejp_530_;
}
v_reusejp_530_:
{
return v___x_531_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_subscribe_spec__1___redArg___boxed(lean_object* v_mutex_535_, lean_object* v_k_536_, lean_object* v___y_537_){
_start:
{
lean_object* v_res_538_; 
v_res_538_ = l_Std_Mutex_atomically___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_subscribe_spec__1___redArg(v_mutex_535_, v_k_536_);
return v_res_538_;
}
}
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_subscribe_spec__1(lean_object* v_00_u03b1_539_, lean_object* v_00_u03b2_540_, lean_object* v_mutex_541_, lean_object* v_k_542_){
_start:
{
lean_object* v___x_544_; 
v___x_544_ = l_Std_Mutex_atomically___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_subscribe_spec__1___redArg(v_mutex_541_, v_k_542_);
return v___x_544_;
}
}
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_subscribe_spec__1___boxed(lean_object* v_00_u03b1_545_, lean_object* v_00_u03b2_546_, lean_object* v_mutex_547_, lean_object* v_k_548_, lean_object* v___y_549_){
_start:
{
lean_object* v_res_550_; 
v_res_550_ = l_Std_Mutex_atomically___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_subscribe_spec__1(v_00_u03b1_545_, v_00_u03b2_546_, v_mutex_547_, v_k_548_);
return v_res_550_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_subscribe_spec__0___redArg(lean_object* v_k_551_, lean_object* v_v_552_, lean_object* v_t_553_){
_start:
{
if (lean_obj_tag(v_t_553_) == 0)
{
lean_object* v_size_554_; lean_object* v_k_555_; lean_object* v_v_556_; lean_object* v_l_557_; lean_object* v_r_558_; lean_object* v___x_560_; uint8_t v_isShared_561_; uint8_t v_isSharedCheck_839_; 
v_size_554_ = lean_ctor_get(v_t_553_, 0);
v_k_555_ = lean_ctor_get(v_t_553_, 1);
v_v_556_ = lean_ctor_get(v_t_553_, 2);
v_l_557_ = lean_ctor_get(v_t_553_, 3);
v_r_558_ = lean_ctor_get(v_t_553_, 4);
v_isSharedCheck_839_ = !lean_is_exclusive(v_t_553_);
if (v_isSharedCheck_839_ == 0)
{
v___x_560_ = v_t_553_;
v_isShared_561_ = v_isSharedCheck_839_;
goto v_resetjp_559_;
}
else
{
lean_inc(v_r_558_);
lean_inc(v_l_557_);
lean_inc(v_v_556_);
lean_inc(v_k_555_);
lean_inc(v_size_554_);
lean_dec(v_t_553_);
v___x_560_ = lean_box(0);
v_isShared_561_ = v_isSharedCheck_839_;
goto v_resetjp_559_;
}
v_resetjp_559_:
{
uint8_t v___x_562_; 
v___x_562_ = lean_nat_dec_lt(v_k_551_, v_k_555_);
if (v___x_562_ == 0)
{
uint8_t v___x_563_; 
v___x_563_ = lean_nat_dec_eq(v_k_551_, v_k_555_);
if (v___x_563_ == 0)
{
lean_object* v_impl_564_; lean_object* v___x_565_; 
lean_dec(v_size_554_);
v_impl_564_ = l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_subscribe_spec__0___redArg(v_k_551_, v_v_552_, v_r_558_);
v___x_565_ = lean_unsigned_to_nat(1u);
if (lean_obj_tag(v_l_557_) == 0)
{
lean_object* v_size_566_; lean_object* v_size_567_; lean_object* v_k_568_; lean_object* v_v_569_; lean_object* v_l_570_; lean_object* v_r_571_; lean_object* v___x_572_; lean_object* v___x_573_; uint8_t v___x_574_; 
v_size_566_ = lean_ctor_get(v_l_557_, 0);
v_size_567_ = lean_ctor_get(v_impl_564_, 0);
lean_inc(v_size_567_);
v_k_568_ = lean_ctor_get(v_impl_564_, 1);
lean_inc(v_k_568_);
v_v_569_ = lean_ctor_get(v_impl_564_, 2);
lean_inc(v_v_569_);
v_l_570_ = lean_ctor_get(v_impl_564_, 3);
lean_inc(v_l_570_);
v_r_571_ = lean_ctor_get(v_impl_564_, 4);
lean_inc(v_r_571_);
v___x_572_ = lean_unsigned_to_nat(3u);
v___x_573_ = lean_nat_mul(v___x_572_, v_size_566_);
v___x_574_ = lean_nat_dec_lt(v___x_573_, v_size_567_);
lean_dec(v___x_573_);
if (v___x_574_ == 0)
{
lean_object* v___x_575_; lean_object* v___x_576_; lean_object* v___x_578_; 
lean_dec(v_r_571_);
lean_dec(v_l_570_);
lean_dec(v_v_569_);
lean_dec(v_k_568_);
v___x_575_ = lean_nat_add(v___x_565_, v_size_566_);
v___x_576_ = lean_nat_add(v___x_575_, v_size_567_);
lean_dec(v_size_567_);
lean_dec(v___x_575_);
if (v_isShared_561_ == 0)
{
lean_ctor_set(v___x_560_, 4, v_impl_564_);
lean_ctor_set(v___x_560_, 0, v___x_576_);
v___x_578_ = v___x_560_;
goto v_reusejp_577_;
}
else
{
lean_object* v_reuseFailAlloc_579_; 
v_reuseFailAlloc_579_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_579_, 0, v___x_576_);
lean_ctor_set(v_reuseFailAlloc_579_, 1, v_k_555_);
lean_ctor_set(v_reuseFailAlloc_579_, 2, v_v_556_);
lean_ctor_set(v_reuseFailAlloc_579_, 3, v_l_557_);
lean_ctor_set(v_reuseFailAlloc_579_, 4, v_impl_564_);
v___x_578_ = v_reuseFailAlloc_579_;
goto v_reusejp_577_;
}
v_reusejp_577_:
{
return v___x_578_;
}
}
else
{
lean_object* v___x_581_; uint8_t v_isShared_582_; uint8_t v_isSharedCheck_643_; 
v_isSharedCheck_643_ = !lean_is_exclusive(v_impl_564_);
if (v_isSharedCheck_643_ == 0)
{
lean_object* v_unused_644_; lean_object* v_unused_645_; lean_object* v_unused_646_; lean_object* v_unused_647_; lean_object* v_unused_648_; 
v_unused_644_ = lean_ctor_get(v_impl_564_, 4);
lean_dec(v_unused_644_);
v_unused_645_ = lean_ctor_get(v_impl_564_, 3);
lean_dec(v_unused_645_);
v_unused_646_ = lean_ctor_get(v_impl_564_, 2);
lean_dec(v_unused_646_);
v_unused_647_ = lean_ctor_get(v_impl_564_, 1);
lean_dec(v_unused_647_);
v_unused_648_ = lean_ctor_get(v_impl_564_, 0);
lean_dec(v_unused_648_);
v___x_581_ = v_impl_564_;
v_isShared_582_ = v_isSharedCheck_643_;
goto v_resetjp_580_;
}
else
{
lean_dec(v_impl_564_);
v___x_581_ = lean_box(0);
v_isShared_582_ = v_isSharedCheck_643_;
goto v_resetjp_580_;
}
v_resetjp_580_:
{
lean_object* v_size_583_; lean_object* v_k_584_; lean_object* v_v_585_; lean_object* v_l_586_; lean_object* v_r_587_; lean_object* v_size_588_; lean_object* v___x_589_; lean_object* v___x_590_; uint8_t v___x_591_; 
v_size_583_ = lean_ctor_get(v_l_570_, 0);
v_k_584_ = lean_ctor_get(v_l_570_, 1);
v_v_585_ = lean_ctor_get(v_l_570_, 2);
v_l_586_ = lean_ctor_get(v_l_570_, 3);
v_r_587_ = lean_ctor_get(v_l_570_, 4);
v_size_588_ = lean_ctor_get(v_r_571_, 0);
v___x_589_ = lean_unsigned_to_nat(2u);
v___x_590_ = lean_nat_mul(v___x_589_, v_size_588_);
v___x_591_ = lean_nat_dec_lt(v_size_583_, v___x_590_);
lean_dec(v___x_590_);
if (v___x_591_ == 0)
{
lean_object* v___x_593_; uint8_t v_isShared_594_; uint8_t v_isSharedCheck_619_; 
lean_inc(v_r_587_);
lean_inc(v_l_586_);
lean_inc(v_v_585_);
lean_inc(v_k_584_);
v_isSharedCheck_619_ = !lean_is_exclusive(v_l_570_);
if (v_isSharedCheck_619_ == 0)
{
lean_object* v_unused_620_; lean_object* v_unused_621_; lean_object* v_unused_622_; lean_object* v_unused_623_; lean_object* v_unused_624_; 
v_unused_620_ = lean_ctor_get(v_l_570_, 4);
lean_dec(v_unused_620_);
v_unused_621_ = lean_ctor_get(v_l_570_, 3);
lean_dec(v_unused_621_);
v_unused_622_ = lean_ctor_get(v_l_570_, 2);
lean_dec(v_unused_622_);
v_unused_623_ = lean_ctor_get(v_l_570_, 1);
lean_dec(v_unused_623_);
v_unused_624_ = lean_ctor_get(v_l_570_, 0);
lean_dec(v_unused_624_);
v___x_593_ = v_l_570_;
v_isShared_594_ = v_isSharedCheck_619_;
goto v_resetjp_592_;
}
else
{
lean_dec(v_l_570_);
v___x_593_ = lean_box(0);
v_isShared_594_ = v_isSharedCheck_619_;
goto v_resetjp_592_;
}
v_resetjp_592_:
{
lean_object* v___x_595_; lean_object* v___x_596_; lean_object* v___y_598_; lean_object* v___y_599_; lean_object* v___y_600_; lean_object* v___y_609_; 
v___x_595_ = lean_nat_add(v___x_565_, v_size_566_);
v___x_596_ = lean_nat_add(v___x_595_, v_size_567_);
lean_dec(v_size_567_);
if (lean_obj_tag(v_l_586_) == 0)
{
lean_object* v_size_617_; 
v_size_617_ = lean_ctor_get(v_l_586_, 0);
lean_inc(v_size_617_);
v___y_609_ = v_size_617_;
goto v___jp_608_;
}
else
{
lean_object* v___x_618_; 
v___x_618_ = lean_unsigned_to_nat(0u);
v___y_609_ = v___x_618_;
goto v___jp_608_;
}
v___jp_597_:
{
lean_object* v___x_601_; lean_object* v___x_603_; 
v___x_601_ = lean_nat_add(v___y_598_, v___y_600_);
lean_dec(v___y_600_);
lean_dec(v___y_598_);
if (v_isShared_594_ == 0)
{
lean_ctor_set(v___x_593_, 4, v_r_571_);
lean_ctor_set(v___x_593_, 3, v_r_587_);
lean_ctor_set(v___x_593_, 2, v_v_569_);
lean_ctor_set(v___x_593_, 1, v_k_568_);
lean_ctor_set(v___x_593_, 0, v___x_601_);
v___x_603_ = v___x_593_;
goto v_reusejp_602_;
}
else
{
lean_object* v_reuseFailAlloc_607_; 
v_reuseFailAlloc_607_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_607_, 0, v___x_601_);
lean_ctor_set(v_reuseFailAlloc_607_, 1, v_k_568_);
lean_ctor_set(v_reuseFailAlloc_607_, 2, v_v_569_);
lean_ctor_set(v_reuseFailAlloc_607_, 3, v_r_587_);
lean_ctor_set(v_reuseFailAlloc_607_, 4, v_r_571_);
v___x_603_ = v_reuseFailAlloc_607_;
goto v_reusejp_602_;
}
v_reusejp_602_:
{
lean_object* v___x_605_; 
if (v_isShared_582_ == 0)
{
lean_ctor_set(v___x_581_, 4, v___x_603_);
lean_ctor_set(v___x_581_, 3, v___y_599_);
lean_ctor_set(v___x_581_, 2, v_v_585_);
lean_ctor_set(v___x_581_, 1, v_k_584_);
lean_ctor_set(v___x_581_, 0, v___x_596_);
v___x_605_ = v___x_581_;
goto v_reusejp_604_;
}
else
{
lean_object* v_reuseFailAlloc_606_; 
v_reuseFailAlloc_606_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_606_, 0, v___x_596_);
lean_ctor_set(v_reuseFailAlloc_606_, 1, v_k_584_);
lean_ctor_set(v_reuseFailAlloc_606_, 2, v_v_585_);
lean_ctor_set(v_reuseFailAlloc_606_, 3, v___y_599_);
lean_ctor_set(v_reuseFailAlloc_606_, 4, v___x_603_);
v___x_605_ = v_reuseFailAlloc_606_;
goto v_reusejp_604_;
}
v_reusejp_604_:
{
return v___x_605_;
}
}
}
v___jp_608_:
{
lean_object* v___x_610_; lean_object* v___x_612_; 
v___x_610_ = lean_nat_add(v___x_595_, v___y_609_);
lean_dec(v___y_609_);
lean_dec(v___x_595_);
if (v_isShared_561_ == 0)
{
lean_ctor_set(v___x_560_, 4, v_l_586_);
lean_ctor_set(v___x_560_, 0, v___x_610_);
v___x_612_ = v___x_560_;
goto v_reusejp_611_;
}
else
{
lean_object* v_reuseFailAlloc_616_; 
v_reuseFailAlloc_616_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_616_, 0, v___x_610_);
lean_ctor_set(v_reuseFailAlloc_616_, 1, v_k_555_);
lean_ctor_set(v_reuseFailAlloc_616_, 2, v_v_556_);
lean_ctor_set(v_reuseFailAlloc_616_, 3, v_l_557_);
lean_ctor_set(v_reuseFailAlloc_616_, 4, v_l_586_);
v___x_612_ = v_reuseFailAlloc_616_;
goto v_reusejp_611_;
}
v_reusejp_611_:
{
lean_object* v___x_613_; 
v___x_613_ = lean_nat_add(v___x_565_, v_size_588_);
if (lean_obj_tag(v_r_587_) == 0)
{
lean_object* v_size_614_; 
v_size_614_ = lean_ctor_get(v_r_587_, 0);
lean_inc(v_size_614_);
v___y_598_ = v___x_613_;
v___y_599_ = v___x_612_;
v___y_600_ = v_size_614_;
goto v___jp_597_;
}
else
{
lean_object* v___x_615_; 
v___x_615_ = lean_unsigned_to_nat(0u);
v___y_598_ = v___x_613_;
v___y_599_ = v___x_612_;
v___y_600_ = v___x_615_;
goto v___jp_597_;
}
}
}
}
}
else
{
lean_object* v___x_625_; lean_object* v___x_626_; lean_object* v___x_627_; lean_object* v___x_629_; 
lean_del_object(v___x_560_);
v___x_625_ = lean_nat_add(v___x_565_, v_size_566_);
v___x_626_ = lean_nat_add(v___x_625_, v_size_567_);
lean_dec(v_size_567_);
v___x_627_ = lean_nat_add(v___x_625_, v_size_583_);
lean_dec(v___x_625_);
lean_inc_ref(v_l_557_);
if (v_isShared_582_ == 0)
{
lean_ctor_set(v___x_581_, 4, v_l_570_);
lean_ctor_set(v___x_581_, 3, v_l_557_);
lean_ctor_set(v___x_581_, 2, v_v_556_);
lean_ctor_set(v___x_581_, 1, v_k_555_);
lean_ctor_set(v___x_581_, 0, v___x_627_);
v___x_629_ = v___x_581_;
goto v_reusejp_628_;
}
else
{
lean_object* v_reuseFailAlloc_642_; 
v_reuseFailAlloc_642_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_642_, 0, v___x_627_);
lean_ctor_set(v_reuseFailAlloc_642_, 1, v_k_555_);
lean_ctor_set(v_reuseFailAlloc_642_, 2, v_v_556_);
lean_ctor_set(v_reuseFailAlloc_642_, 3, v_l_557_);
lean_ctor_set(v_reuseFailAlloc_642_, 4, v_l_570_);
v___x_629_ = v_reuseFailAlloc_642_;
goto v_reusejp_628_;
}
v_reusejp_628_:
{
lean_object* v___x_631_; uint8_t v_isShared_632_; uint8_t v_isSharedCheck_636_; 
v_isSharedCheck_636_ = !lean_is_exclusive(v_l_557_);
if (v_isSharedCheck_636_ == 0)
{
lean_object* v_unused_637_; lean_object* v_unused_638_; lean_object* v_unused_639_; lean_object* v_unused_640_; lean_object* v_unused_641_; 
v_unused_637_ = lean_ctor_get(v_l_557_, 4);
lean_dec(v_unused_637_);
v_unused_638_ = lean_ctor_get(v_l_557_, 3);
lean_dec(v_unused_638_);
v_unused_639_ = lean_ctor_get(v_l_557_, 2);
lean_dec(v_unused_639_);
v_unused_640_ = lean_ctor_get(v_l_557_, 1);
lean_dec(v_unused_640_);
v_unused_641_ = lean_ctor_get(v_l_557_, 0);
lean_dec(v_unused_641_);
v___x_631_ = v_l_557_;
v_isShared_632_ = v_isSharedCheck_636_;
goto v_resetjp_630_;
}
else
{
lean_dec(v_l_557_);
v___x_631_ = lean_box(0);
v_isShared_632_ = v_isSharedCheck_636_;
goto v_resetjp_630_;
}
v_resetjp_630_:
{
lean_object* v___x_634_; 
if (v_isShared_632_ == 0)
{
lean_ctor_set(v___x_631_, 4, v_r_571_);
lean_ctor_set(v___x_631_, 3, v___x_629_);
lean_ctor_set(v___x_631_, 2, v_v_569_);
lean_ctor_set(v___x_631_, 1, v_k_568_);
lean_ctor_set(v___x_631_, 0, v___x_626_);
v___x_634_ = v___x_631_;
goto v_reusejp_633_;
}
else
{
lean_object* v_reuseFailAlloc_635_; 
v_reuseFailAlloc_635_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_635_, 0, v___x_626_);
lean_ctor_set(v_reuseFailAlloc_635_, 1, v_k_568_);
lean_ctor_set(v_reuseFailAlloc_635_, 2, v_v_569_);
lean_ctor_set(v_reuseFailAlloc_635_, 3, v___x_629_);
lean_ctor_set(v_reuseFailAlloc_635_, 4, v_r_571_);
v___x_634_ = v_reuseFailAlloc_635_;
goto v_reusejp_633_;
}
v_reusejp_633_:
{
return v___x_634_;
}
}
}
}
}
}
}
else
{
lean_object* v_l_649_; 
v_l_649_ = lean_ctor_get(v_impl_564_, 3);
lean_inc(v_l_649_);
if (lean_obj_tag(v_l_649_) == 0)
{
lean_object* v_r_650_; lean_object* v_k_651_; lean_object* v_v_652_; lean_object* v___x_654_; uint8_t v_isShared_655_; uint8_t v_isSharedCheck_675_; 
v_r_650_ = lean_ctor_get(v_impl_564_, 4);
v_k_651_ = lean_ctor_get(v_impl_564_, 1);
v_v_652_ = lean_ctor_get(v_impl_564_, 2);
v_isSharedCheck_675_ = !lean_is_exclusive(v_impl_564_);
if (v_isSharedCheck_675_ == 0)
{
lean_object* v_unused_676_; lean_object* v_unused_677_; 
v_unused_676_ = lean_ctor_get(v_impl_564_, 3);
lean_dec(v_unused_676_);
v_unused_677_ = lean_ctor_get(v_impl_564_, 0);
lean_dec(v_unused_677_);
v___x_654_ = v_impl_564_;
v_isShared_655_ = v_isSharedCheck_675_;
goto v_resetjp_653_;
}
else
{
lean_inc(v_r_650_);
lean_inc(v_v_652_);
lean_inc(v_k_651_);
lean_dec(v_impl_564_);
v___x_654_ = lean_box(0);
v_isShared_655_ = v_isSharedCheck_675_;
goto v_resetjp_653_;
}
v_resetjp_653_:
{
lean_object* v_k_656_; lean_object* v_v_657_; lean_object* v___x_659_; uint8_t v_isShared_660_; uint8_t v_isSharedCheck_671_; 
v_k_656_ = lean_ctor_get(v_l_649_, 1);
v_v_657_ = lean_ctor_get(v_l_649_, 2);
v_isSharedCheck_671_ = !lean_is_exclusive(v_l_649_);
if (v_isSharedCheck_671_ == 0)
{
lean_object* v_unused_672_; lean_object* v_unused_673_; lean_object* v_unused_674_; 
v_unused_672_ = lean_ctor_get(v_l_649_, 4);
lean_dec(v_unused_672_);
v_unused_673_ = lean_ctor_get(v_l_649_, 3);
lean_dec(v_unused_673_);
v_unused_674_ = lean_ctor_get(v_l_649_, 0);
lean_dec(v_unused_674_);
v___x_659_ = v_l_649_;
v_isShared_660_ = v_isSharedCheck_671_;
goto v_resetjp_658_;
}
else
{
lean_inc(v_v_657_);
lean_inc(v_k_656_);
lean_dec(v_l_649_);
v___x_659_ = lean_box(0);
v_isShared_660_ = v_isSharedCheck_671_;
goto v_resetjp_658_;
}
v_resetjp_658_:
{
lean_object* v___x_661_; lean_object* v___x_663_; 
v___x_661_ = lean_unsigned_to_nat(3u);
lean_inc_n(v_r_650_, 2);
if (v_isShared_660_ == 0)
{
lean_ctor_set(v___x_659_, 4, v_r_650_);
lean_ctor_set(v___x_659_, 3, v_r_650_);
lean_ctor_set(v___x_659_, 2, v_v_556_);
lean_ctor_set(v___x_659_, 1, v_k_555_);
lean_ctor_set(v___x_659_, 0, v___x_565_);
v___x_663_ = v___x_659_;
goto v_reusejp_662_;
}
else
{
lean_object* v_reuseFailAlloc_670_; 
v_reuseFailAlloc_670_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_670_, 0, v___x_565_);
lean_ctor_set(v_reuseFailAlloc_670_, 1, v_k_555_);
lean_ctor_set(v_reuseFailAlloc_670_, 2, v_v_556_);
lean_ctor_set(v_reuseFailAlloc_670_, 3, v_r_650_);
lean_ctor_set(v_reuseFailAlloc_670_, 4, v_r_650_);
v___x_663_ = v_reuseFailAlloc_670_;
goto v_reusejp_662_;
}
v_reusejp_662_:
{
lean_object* v___x_665_; 
lean_inc(v_r_650_);
if (v_isShared_655_ == 0)
{
lean_ctor_set(v___x_654_, 3, v_r_650_);
lean_ctor_set(v___x_654_, 0, v___x_565_);
v___x_665_ = v___x_654_;
goto v_reusejp_664_;
}
else
{
lean_object* v_reuseFailAlloc_669_; 
v_reuseFailAlloc_669_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_669_, 0, v___x_565_);
lean_ctor_set(v_reuseFailAlloc_669_, 1, v_k_651_);
lean_ctor_set(v_reuseFailAlloc_669_, 2, v_v_652_);
lean_ctor_set(v_reuseFailAlloc_669_, 3, v_r_650_);
lean_ctor_set(v_reuseFailAlloc_669_, 4, v_r_650_);
v___x_665_ = v_reuseFailAlloc_669_;
goto v_reusejp_664_;
}
v_reusejp_664_:
{
lean_object* v___x_667_; 
if (v_isShared_561_ == 0)
{
lean_ctor_set(v___x_560_, 4, v___x_665_);
lean_ctor_set(v___x_560_, 3, v___x_663_);
lean_ctor_set(v___x_560_, 2, v_v_657_);
lean_ctor_set(v___x_560_, 1, v_k_656_);
lean_ctor_set(v___x_560_, 0, v___x_661_);
v___x_667_ = v___x_560_;
goto v_reusejp_666_;
}
else
{
lean_object* v_reuseFailAlloc_668_; 
v_reuseFailAlloc_668_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_668_, 0, v___x_661_);
lean_ctor_set(v_reuseFailAlloc_668_, 1, v_k_656_);
lean_ctor_set(v_reuseFailAlloc_668_, 2, v_v_657_);
lean_ctor_set(v_reuseFailAlloc_668_, 3, v___x_663_);
lean_ctor_set(v_reuseFailAlloc_668_, 4, v___x_665_);
v___x_667_ = v_reuseFailAlloc_668_;
goto v_reusejp_666_;
}
v_reusejp_666_:
{
return v___x_667_;
}
}
}
}
}
}
else
{
lean_object* v_r_678_; 
v_r_678_ = lean_ctor_get(v_impl_564_, 4);
lean_inc(v_r_678_);
if (lean_obj_tag(v_r_678_) == 0)
{
lean_object* v_k_679_; lean_object* v_v_680_; lean_object* v___x_682_; uint8_t v_isShared_683_; uint8_t v_isSharedCheck_691_; 
v_k_679_ = lean_ctor_get(v_impl_564_, 1);
v_v_680_ = lean_ctor_get(v_impl_564_, 2);
v_isSharedCheck_691_ = !lean_is_exclusive(v_impl_564_);
if (v_isSharedCheck_691_ == 0)
{
lean_object* v_unused_692_; lean_object* v_unused_693_; lean_object* v_unused_694_; 
v_unused_692_ = lean_ctor_get(v_impl_564_, 4);
lean_dec(v_unused_692_);
v_unused_693_ = lean_ctor_get(v_impl_564_, 3);
lean_dec(v_unused_693_);
v_unused_694_ = lean_ctor_get(v_impl_564_, 0);
lean_dec(v_unused_694_);
v___x_682_ = v_impl_564_;
v_isShared_683_ = v_isSharedCheck_691_;
goto v_resetjp_681_;
}
else
{
lean_inc(v_v_680_);
lean_inc(v_k_679_);
lean_dec(v_impl_564_);
v___x_682_ = lean_box(0);
v_isShared_683_ = v_isSharedCheck_691_;
goto v_resetjp_681_;
}
v_resetjp_681_:
{
lean_object* v___x_684_; lean_object* v___x_686_; 
v___x_684_ = lean_unsigned_to_nat(3u);
if (v_isShared_683_ == 0)
{
lean_ctor_set(v___x_682_, 4, v_l_649_);
lean_ctor_set(v___x_682_, 2, v_v_556_);
lean_ctor_set(v___x_682_, 1, v_k_555_);
lean_ctor_set(v___x_682_, 0, v___x_565_);
v___x_686_ = v___x_682_;
goto v_reusejp_685_;
}
else
{
lean_object* v_reuseFailAlloc_690_; 
v_reuseFailAlloc_690_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_690_, 0, v___x_565_);
lean_ctor_set(v_reuseFailAlloc_690_, 1, v_k_555_);
lean_ctor_set(v_reuseFailAlloc_690_, 2, v_v_556_);
lean_ctor_set(v_reuseFailAlloc_690_, 3, v_l_649_);
lean_ctor_set(v_reuseFailAlloc_690_, 4, v_l_649_);
v___x_686_ = v_reuseFailAlloc_690_;
goto v_reusejp_685_;
}
v_reusejp_685_:
{
lean_object* v___x_688_; 
if (v_isShared_561_ == 0)
{
lean_ctor_set(v___x_560_, 4, v_r_678_);
lean_ctor_set(v___x_560_, 3, v___x_686_);
lean_ctor_set(v___x_560_, 2, v_v_680_);
lean_ctor_set(v___x_560_, 1, v_k_679_);
lean_ctor_set(v___x_560_, 0, v___x_684_);
v___x_688_ = v___x_560_;
goto v_reusejp_687_;
}
else
{
lean_object* v_reuseFailAlloc_689_; 
v_reuseFailAlloc_689_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_689_, 0, v___x_684_);
lean_ctor_set(v_reuseFailAlloc_689_, 1, v_k_679_);
lean_ctor_set(v_reuseFailAlloc_689_, 2, v_v_680_);
lean_ctor_set(v_reuseFailAlloc_689_, 3, v___x_686_);
lean_ctor_set(v_reuseFailAlloc_689_, 4, v_r_678_);
v___x_688_ = v_reuseFailAlloc_689_;
goto v_reusejp_687_;
}
v_reusejp_687_:
{
return v___x_688_;
}
}
}
}
else
{
lean_object* v___x_695_; lean_object* v___x_697_; 
v___x_695_ = lean_unsigned_to_nat(2u);
if (v_isShared_561_ == 0)
{
lean_ctor_set(v___x_560_, 4, v_impl_564_);
lean_ctor_set(v___x_560_, 3, v_r_678_);
lean_ctor_set(v___x_560_, 0, v___x_695_);
v___x_697_ = v___x_560_;
goto v_reusejp_696_;
}
else
{
lean_object* v_reuseFailAlloc_698_; 
v_reuseFailAlloc_698_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_698_, 0, v___x_695_);
lean_ctor_set(v_reuseFailAlloc_698_, 1, v_k_555_);
lean_ctor_set(v_reuseFailAlloc_698_, 2, v_v_556_);
lean_ctor_set(v_reuseFailAlloc_698_, 3, v_r_678_);
lean_ctor_set(v_reuseFailAlloc_698_, 4, v_impl_564_);
v___x_697_ = v_reuseFailAlloc_698_;
goto v_reusejp_696_;
}
v_reusejp_696_:
{
return v___x_697_;
}
}
}
}
}
else
{
lean_object* v___x_700_; 
lean_dec(v_v_556_);
lean_dec(v_k_555_);
if (v_isShared_561_ == 0)
{
lean_ctor_set(v___x_560_, 2, v_v_552_);
lean_ctor_set(v___x_560_, 1, v_k_551_);
v___x_700_ = v___x_560_;
goto v_reusejp_699_;
}
else
{
lean_object* v_reuseFailAlloc_701_; 
v_reuseFailAlloc_701_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_701_, 0, v_size_554_);
lean_ctor_set(v_reuseFailAlloc_701_, 1, v_k_551_);
lean_ctor_set(v_reuseFailAlloc_701_, 2, v_v_552_);
lean_ctor_set(v_reuseFailAlloc_701_, 3, v_l_557_);
lean_ctor_set(v_reuseFailAlloc_701_, 4, v_r_558_);
v___x_700_ = v_reuseFailAlloc_701_;
goto v_reusejp_699_;
}
v_reusejp_699_:
{
return v___x_700_;
}
}
}
else
{
lean_object* v_impl_702_; lean_object* v___x_703_; 
lean_dec(v_size_554_);
v_impl_702_ = l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_subscribe_spec__0___redArg(v_k_551_, v_v_552_, v_l_557_);
v___x_703_ = lean_unsigned_to_nat(1u);
if (lean_obj_tag(v_r_558_) == 0)
{
lean_object* v_size_704_; lean_object* v_size_705_; lean_object* v_k_706_; lean_object* v_v_707_; lean_object* v_l_708_; lean_object* v_r_709_; lean_object* v___x_710_; lean_object* v___x_711_; uint8_t v___x_712_; 
v_size_704_ = lean_ctor_get(v_r_558_, 0);
v_size_705_ = lean_ctor_get(v_impl_702_, 0);
lean_inc(v_size_705_);
v_k_706_ = lean_ctor_get(v_impl_702_, 1);
lean_inc(v_k_706_);
v_v_707_ = lean_ctor_get(v_impl_702_, 2);
lean_inc(v_v_707_);
v_l_708_ = lean_ctor_get(v_impl_702_, 3);
lean_inc(v_l_708_);
v_r_709_ = lean_ctor_get(v_impl_702_, 4);
lean_inc(v_r_709_);
v___x_710_ = lean_unsigned_to_nat(3u);
v___x_711_ = lean_nat_mul(v___x_710_, v_size_704_);
v___x_712_ = lean_nat_dec_lt(v___x_711_, v_size_705_);
lean_dec(v___x_711_);
if (v___x_712_ == 0)
{
lean_object* v___x_713_; lean_object* v___x_714_; lean_object* v___x_716_; 
lean_dec(v_r_709_);
lean_dec(v_l_708_);
lean_dec(v_v_707_);
lean_dec(v_k_706_);
v___x_713_ = lean_nat_add(v___x_703_, v_size_705_);
lean_dec(v_size_705_);
v___x_714_ = lean_nat_add(v___x_713_, v_size_704_);
lean_dec(v___x_713_);
if (v_isShared_561_ == 0)
{
lean_ctor_set(v___x_560_, 3, v_impl_702_);
lean_ctor_set(v___x_560_, 0, v___x_714_);
v___x_716_ = v___x_560_;
goto v_reusejp_715_;
}
else
{
lean_object* v_reuseFailAlloc_717_; 
v_reuseFailAlloc_717_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_717_, 0, v___x_714_);
lean_ctor_set(v_reuseFailAlloc_717_, 1, v_k_555_);
lean_ctor_set(v_reuseFailAlloc_717_, 2, v_v_556_);
lean_ctor_set(v_reuseFailAlloc_717_, 3, v_impl_702_);
lean_ctor_set(v_reuseFailAlloc_717_, 4, v_r_558_);
v___x_716_ = v_reuseFailAlloc_717_;
goto v_reusejp_715_;
}
v_reusejp_715_:
{
return v___x_716_;
}
}
else
{
lean_object* v___x_719_; uint8_t v_isShared_720_; uint8_t v_isSharedCheck_783_; 
v_isSharedCheck_783_ = !lean_is_exclusive(v_impl_702_);
if (v_isSharedCheck_783_ == 0)
{
lean_object* v_unused_784_; lean_object* v_unused_785_; lean_object* v_unused_786_; lean_object* v_unused_787_; lean_object* v_unused_788_; 
v_unused_784_ = lean_ctor_get(v_impl_702_, 4);
lean_dec(v_unused_784_);
v_unused_785_ = lean_ctor_get(v_impl_702_, 3);
lean_dec(v_unused_785_);
v_unused_786_ = lean_ctor_get(v_impl_702_, 2);
lean_dec(v_unused_786_);
v_unused_787_ = lean_ctor_get(v_impl_702_, 1);
lean_dec(v_unused_787_);
v_unused_788_ = lean_ctor_get(v_impl_702_, 0);
lean_dec(v_unused_788_);
v___x_719_ = v_impl_702_;
v_isShared_720_ = v_isSharedCheck_783_;
goto v_resetjp_718_;
}
else
{
lean_dec(v_impl_702_);
v___x_719_ = lean_box(0);
v_isShared_720_ = v_isSharedCheck_783_;
goto v_resetjp_718_;
}
v_resetjp_718_:
{
lean_object* v_size_721_; lean_object* v_size_722_; lean_object* v_k_723_; lean_object* v_v_724_; lean_object* v_l_725_; lean_object* v_r_726_; lean_object* v___x_727_; lean_object* v___x_728_; uint8_t v___x_729_; 
v_size_721_ = lean_ctor_get(v_l_708_, 0);
v_size_722_ = lean_ctor_get(v_r_709_, 0);
v_k_723_ = lean_ctor_get(v_r_709_, 1);
v_v_724_ = lean_ctor_get(v_r_709_, 2);
v_l_725_ = lean_ctor_get(v_r_709_, 3);
v_r_726_ = lean_ctor_get(v_r_709_, 4);
v___x_727_ = lean_unsigned_to_nat(2u);
v___x_728_ = lean_nat_mul(v___x_727_, v_size_721_);
v___x_729_ = lean_nat_dec_lt(v_size_722_, v___x_728_);
lean_dec(v___x_728_);
if (v___x_729_ == 0)
{
lean_object* v___x_731_; uint8_t v_isShared_732_; uint8_t v_isSharedCheck_758_; 
lean_inc(v_r_726_);
lean_inc(v_l_725_);
lean_inc(v_v_724_);
lean_inc(v_k_723_);
v_isSharedCheck_758_ = !lean_is_exclusive(v_r_709_);
if (v_isSharedCheck_758_ == 0)
{
lean_object* v_unused_759_; lean_object* v_unused_760_; lean_object* v_unused_761_; lean_object* v_unused_762_; lean_object* v_unused_763_; 
v_unused_759_ = lean_ctor_get(v_r_709_, 4);
lean_dec(v_unused_759_);
v_unused_760_ = lean_ctor_get(v_r_709_, 3);
lean_dec(v_unused_760_);
v_unused_761_ = lean_ctor_get(v_r_709_, 2);
lean_dec(v_unused_761_);
v_unused_762_ = lean_ctor_get(v_r_709_, 1);
lean_dec(v_unused_762_);
v_unused_763_ = lean_ctor_get(v_r_709_, 0);
lean_dec(v_unused_763_);
v___x_731_ = v_r_709_;
v_isShared_732_ = v_isSharedCheck_758_;
goto v_resetjp_730_;
}
else
{
lean_dec(v_r_709_);
v___x_731_ = lean_box(0);
v_isShared_732_ = v_isSharedCheck_758_;
goto v_resetjp_730_;
}
v_resetjp_730_:
{
lean_object* v___x_733_; lean_object* v___x_734_; lean_object* v___y_736_; lean_object* v___y_737_; lean_object* v___y_738_; lean_object* v___x_746_; lean_object* v___y_748_; 
v___x_733_ = lean_nat_add(v___x_703_, v_size_705_);
lean_dec(v_size_705_);
v___x_734_ = lean_nat_add(v___x_733_, v_size_704_);
lean_dec(v___x_733_);
v___x_746_ = lean_nat_add(v___x_703_, v_size_721_);
if (lean_obj_tag(v_l_725_) == 0)
{
lean_object* v_size_756_; 
v_size_756_ = lean_ctor_get(v_l_725_, 0);
lean_inc(v_size_756_);
v___y_748_ = v_size_756_;
goto v___jp_747_;
}
else
{
lean_object* v___x_757_; 
v___x_757_ = lean_unsigned_to_nat(0u);
v___y_748_ = v___x_757_;
goto v___jp_747_;
}
v___jp_735_:
{
lean_object* v___x_739_; lean_object* v___x_741_; 
v___x_739_ = lean_nat_add(v___y_737_, v___y_738_);
lean_dec(v___y_738_);
lean_dec(v___y_737_);
if (v_isShared_732_ == 0)
{
lean_ctor_set(v___x_731_, 4, v_r_558_);
lean_ctor_set(v___x_731_, 3, v_r_726_);
lean_ctor_set(v___x_731_, 2, v_v_556_);
lean_ctor_set(v___x_731_, 1, v_k_555_);
lean_ctor_set(v___x_731_, 0, v___x_739_);
v___x_741_ = v___x_731_;
goto v_reusejp_740_;
}
else
{
lean_object* v_reuseFailAlloc_745_; 
v_reuseFailAlloc_745_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_745_, 0, v___x_739_);
lean_ctor_set(v_reuseFailAlloc_745_, 1, v_k_555_);
lean_ctor_set(v_reuseFailAlloc_745_, 2, v_v_556_);
lean_ctor_set(v_reuseFailAlloc_745_, 3, v_r_726_);
lean_ctor_set(v_reuseFailAlloc_745_, 4, v_r_558_);
v___x_741_ = v_reuseFailAlloc_745_;
goto v_reusejp_740_;
}
v_reusejp_740_:
{
lean_object* v___x_743_; 
if (v_isShared_720_ == 0)
{
lean_ctor_set(v___x_719_, 4, v___x_741_);
lean_ctor_set(v___x_719_, 3, v___y_736_);
lean_ctor_set(v___x_719_, 2, v_v_724_);
lean_ctor_set(v___x_719_, 1, v_k_723_);
lean_ctor_set(v___x_719_, 0, v___x_734_);
v___x_743_ = v___x_719_;
goto v_reusejp_742_;
}
else
{
lean_object* v_reuseFailAlloc_744_; 
v_reuseFailAlloc_744_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_744_, 0, v___x_734_);
lean_ctor_set(v_reuseFailAlloc_744_, 1, v_k_723_);
lean_ctor_set(v_reuseFailAlloc_744_, 2, v_v_724_);
lean_ctor_set(v_reuseFailAlloc_744_, 3, v___y_736_);
lean_ctor_set(v_reuseFailAlloc_744_, 4, v___x_741_);
v___x_743_ = v_reuseFailAlloc_744_;
goto v_reusejp_742_;
}
v_reusejp_742_:
{
return v___x_743_;
}
}
}
v___jp_747_:
{
lean_object* v___x_749_; lean_object* v___x_751_; 
v___x_749_ = lean_nat_add(v___x_746_, v___y_748_);
lean_dec(v___y_748_);
lean_dec(v___x_746_);
if (v_isShared_561_ == 0)
{
lean_ctor_set(v___x_560_, 4, v_l_725_);
lean_ctor_set(v___x_560_, 3, v_l_708_);
lean_ctor_set(v___x_560_, 2, v_v_707_);
lean_ctor_set(v___x_560_, 1, v_k_706_);
lean_ctor_set(v___x_560_, 0, v___x_749_);
v___x_751_ = v___x_560_;
goto v_reusejp_750_;
}
else
{
lean_object* v_reuseFailAlloc_755_; 
v_reuseFailAlloc_755_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_755_, 0, v___x_749_);
lean_ctor_set(v_reuseFailAlloc_755_, 1, v_k_706_);
lean_ctor_set(v_reuseFailAlloc_755_, 2, v_v_707_);
lean_ctor_set(v_reuseFailAlloc_755_, 3, v_l_708_);
lean_ctor_set(v_reuseFailAlloc_755_, 4, v_l_725_);
v___x_751_ = v_reuseFailAlloc_755_;
goto v_reusejp_750_;
}
v_reusejp_750_:
{
lean_object* v___x_752_; 
v___x_752_ = lean_nat_add(v___x_703_, v_size_704_);
if (lean_obj_tag(v_r_726_) == 0)
{
lean_object* v_size_753_; 
v_size_753_ = lean_ctor_get(v_r_726_, 0);
lean_inc(v_size_753_);
v___y_736_ = v___x_751_;
v___y_737_ = v___x_752_;
v___y_738_ = v_size_753_;
goto v___jp_735_;
}
else
{
lean_object* v___x_754_; 
v___x_754_ = lean_unsigned_to_nat(0u);
v___y_736_ = v___x_751_;
v___y_737_ = v___x_752_;
v___y_738_ = v___x_754_;
goto v___jp_735_;
}
}
}
}
}
else
{
lean_object* v___x_764_; lean_object* v___x_765_; lean_object* v___x_766_; lean_object* v___x_767_; lean_object* v___x_769_; 
lean_del_object(v___x_560_);
v___x_764_ = lean_nat_add(v___x_703_, v_size_705_);
lean_dec(v_size_705_);
v___x_765_ = lean_nat_add(v___x_764_, v_size_704_);
lean_dec(v___x_764_);
v___x_766_ = lean_nat_add(v___x_703_, v_size_704_);
v___x_767_ = lean_nat_add(v___x_766_, v_size_722_);
lean_dec(v___x_766_);
lean_inc_ref(v_r_558_);
if (v_isShared_720_ == 0)
{
lean_ctor_set(v___x_719_, 4, v_r_558_);
lean_ctor_set(v___x_719_, 3, v_r_709_);
lean_ctor_set(v___x_719_, 2, v_v_556_);
lean_ctor_set(v___x_719_, 1, v_k_555_);
lean_ctor_set(v___x_719_, 0, v___x_767_);
v___x_769_ = v___x_719_;
goto v_reusejp_768_;
}
else
{
lean_object* v_reuseFailAlloc_782_; 
v_reuseFailAlloc_782_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_782_, 0, v___x_767_);
lean_ctor_set(v_reuseFailAlloc_782_, 1, v_k_555_);
lean_ctor_set(v_reuseFailAlloc_782_, 2, v_v_556_);
lean_ctor_set(v_reuseFailAlloc_782_, 3, v_r_709_);
lean_ctor_set(v_reuseFailAlloc_782_, 4, v_r_558_);
v___x_769_ = v_reuseFailAlloc_782_;
goto v_reusejp_768_;
}
v_reusejp_768_:
{
lean_object* v___x_771_; uint8_t v_isShared_772_; uint8_t v_isSharedCheck_776_; 
v_isSharedCheck_776_ = !lean_is_exclusive(v_r_558_);
if (v_isSharedCheck_776_ == 0)
{
lean_object* v_unused_777_; lean_object* v_unused_778_; lean_object* v_unused_779_; lean_object* v_unused_780_; lean_object* v_unused_781_; 
v_unused_777_ = lean_ctor_get(v_r_558_, 4);
lean_dec(v_unused_777_);
v_unused_778_ = lean_ctor_get(v_r_558_, 3);
lean_dec(v_unused_778_);
v_unused_779_ = lean_ctor_get(v_r_558_, 2);
lean_dec(v_unused_779_);
v_unused_780_ = lean_ctor_get(v_r_558_, 1);
lean_dec(v_unused_780_);
v_unused_781_ = lean_ctor_get(v_r_558_, 0);
lean_dec(v_unused_781_);
v___x_771_ = v_r_558_;
v_isShared_772_ = v_isSharedCheck_776_;
goto v_resetjp_770_;
}
else
{
lean_dec(v_r_558_);
v___x_771_ = lean_box(0);
v_isShared_772_ = v_isSharedCheck_776_;
goto v_resetjp_770_;
}
v_resetjp_770_:
{
lean_object* v___x_774_; 
if (v_isShared_772_ == 0)
{
lean_ctor_set(v___x_771_, 4, v___x_769_);
lean_ctor_set(v___x_771_, 3, v_l_708_);
lean_ctor_set(v___x_771_, 2, v_v_707_);
lean_ctor_set(v___x_771_, 1, v_k_706_);
lean_ctor_set(v___x_771_, 0, v___x_765_);
v___x_774_ = v___x_771_;
goto v_reusejp_773_;
}
else
{
lean_object* v_reuseFailAlloc_775_; 
v_reuseFailAlloc_775_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_775_, 0, v___x_765_);
lean_ctor_set(v_reuseFailAlloc_775_, 1, v_k_706_);
lean_ctor_set(v_reuseFailAlloc_775_, 2, v_v_707_);
lean_ctor_set(v_reuseFailAlloc_775_, 3, v_l_708_);
lean_ctor_set(v_reuseFailAlloc_775_, 4, v___x_769_);
v___x_774_ = v_reuseFailAlloc_775_;
goto v_reusejp_773_;
}
v_reusejp_773_:
{
return v___x_774_;
}
}
}
}
}
}
}
else
{
lean_object* v_l_789_; 
v_l_789_ = lean_ctor_get(v_impl_702_, 3);
lean_inc(v_l_789_);
if (lean_obj_tag(v_l_789_) == 0)
{
lean_object* v_r_790_; lean_object* v_k_791_; lean_object* v_v_792_; lean_object* v___x_794_; uint8_t v_isShared_795_; uint8_t v_isSharedCheck_803_; 
v_r_790_ = lean_ctor_get(v_impl_702_, 4);
v_k_791_ = lean_ctor_get(v_impl_702_, 1);
v_v_792_ = lean_ctor_get(v_impl_702_, 2);
v_isSharedCheck_803_ = !lean_is_exclusive(v_impl_702_);
if (v_isSharedCheck_803_ == 0)
{
lean_object* v_unused_804_; lean_object* v_unused_805_; 
v_unused_804_ = lean_ctor_get(v_impl_702_, 3);
lean_dec(v_unused_804_);
v_unused_805_ = lean_ctor_get(v_impl_702_, 0);
lean_dec(v_unused_805_);
v___x_794_ = v_impl_702_;
v_isShared_795_ = v_isSharedCheck_803_;
goto v_resetjp_793_;
}
else
{
lean_inc(v_r_790_);
lean_inc(v_v_792_);
lean_inc(v_k_791_);
lean_dec(v_impl_702_);
v___x_794_ = lean_box(0);
v_isShared_795_ = v_isSharedCheck_803_;
goto v_resetjp_793_;
}
v_resetjp_793_:
{
lean_object* v___x_796_; lean_object* v___x_798_; 
v___x_796_ = lean_unsigned_to_nat(3u);
lean_inc(v_r_790_);
if (v_isShared_795_ == 0)
{
lean_ctor_set(v___x_794_, 3, v_r_790_);
lean_ctor_set(v___x_794_, 2, v_v_556_);
lean_ctor_set(v___x_794_, 1, v_k_555_);
lean_ctor_set(v___x_794_, 0, v___x_703_);
v___x_798_ = v___x_794_;
goto v_reusejp_797_;
}
else
{
lean_object* v_reuseFailAlloc_802_; 
v_reuseFailAlloc_802_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_802_, 0, v___x_703_);
lean_ctor_set(v_reuseFailAlloc_802_, 1, v_k_555_);
lean_ctor_set(v_reuseFailAlloc_802_, 2, v_v_556_);
lean_ctor_set(v_reuseFailAlloc_802_, 3, v_r_790_);
lean_ctor_set(v_reuseFailAlloc_802_, 4, v_r_790_);
v___x_798_ = v_reuseFailAlloc_802_;
goto v_reusejp_797_;
}
v_reusejp_797_:
{
lean_object* v___x_800_; 
if (v_isShared_561_ == 0)
{
lean_ctor_set(v___x_560_, 4, v___x_798_);
lean_ctor_set(v___x_560_, 3, v_l_789_);
lean_ctor_set(v___x_560_, 2, v_v_792_);
lean_ctor_set(v___x_560_, 1, v_k_791_);
lean_ctor_set(v___x_560_, 0, v___x_796_);
v___x_800_ = v___x_560_;
goto v_reusejp_799_;
}
else
{
lean_object* v_reuseFailAlloc_801_; 
v_reuseFailAlloc_801_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_801_, 0, v___x_796_);
lean_ctor_set(v_reuseFailAlloc_801_, 1, v_k_791_);
lean_ctor_set(v_reuseFailAlloc_801_, 2, v_v_792_);
lean_ctor_set(v_reuseFailAlloc_801_, 3, v_l_789_);
lean_ctor_set(v_reuseFailAlloc_801_, 4, v___x_798_);
v___x_800_ = v_reuseFailAlloc_801_;
goto v_reusejp_799_;
}
v_reusejp_799_:
{
return v___x_800_;
}
}
}
}
else
{
lean_object* v_r_806_; 
v_r_806_ = lean_ctor_get(v_impl_702_, 4);
lean_inc(v_r_806_);
if (lean_obj_tag(v_r_806_) == 0)
{
lean_object* v_k_807_; lean_object* v_v_808_; lean_object* v___x_810_; uint8_t v_isShared_811_; uint8_t v_isSharedCheck_831_; 
v_k_807_ = lean_ctor_get(v_impl_702_, 1);
v_v_808_ = lean_ctor_get(v_impl_702_, 2);
v_isSharedCheck_831_ = !lean_is_exclusive(v_impl_702_);
if (v_isSharedCheck_831_ == 0)
{
lean_object* v_unused_832_; lean_object* v_unused_833_; lean_object* v_unused_834_; 
v_unused_832_ = lean_ctor_get(v_impl_702_, 4);
lean_dec(v_unused_832_);
v_unused_833_ = lean_ctor_get(v_impl_702_, 3);
lean_dec(v_unused_833_);
v_unused_834_ = lean_ctor_get(v_impl_702_, 0);
lean_dec(v_unused_834_);
v___x_810_ = v_impl_702_;
v_isShared_811_ = v_isSharedCheck_831_;
goto v_resetjp_809_;
}
else
{
lean_inc(v_v_808_);
lean_inc(v_k_807_);
lean_dec(v_impl_702_);
v___x_810_ = lean_box(0);
v_isShared_811_ = v_isSharedCheck_831_;
goto v_resetjp_809_;
}
v_resetjp_809_:
{
lean_object* v_k_812_; lean_object* v_v_813_; lean_object* v___x_815_; uint8_t v_isShared_816_; uint8_t v_isSharedCheck_827_; 
v_k_812_ = lean_ctor_get(v_r_806_, 1);
v_v_813_ = lean_ctor_get(v_r_806_, 2);
v_isSharedCheck_827_ = !lean_is_exclusive(v_r_806_);
if (v_isSharedCheck_827_ == 0)
{
lean_object* v_unused_828_; lean_object* v_unused_829_; lean_object* v_unused_830_; 
v_unused_828_ = lean_ctor_get(v_r_806_, 4);
lean_dec(v_unused_828_);
v_unused_829_ = lean_ctor_get(v_r_806_, 3);
lean_dec(v_unused_829_);
v_unused_830_ = lean_ctor_get(v_r_806_, 0);
lean_dec(v_unused_830_);
v___x_815_ = v_r_806_;
v_isShared_816_ = v_isSharedCheck_827_;
goto v_resetjp_814_;
}
else
{
lean_inc(v_v_813_);
lean_inc(v_k_812_);
lean_dec(v_r_806_);
v___x_815_ = lean_box(0);
v_isShared_816_ = v_isSharedCheck_827_;
goto v_resetjp_814_;
}
v_resetjp_814_:
{
lean_object* v___x_817_; lean_object* v___x_819_; 
v___x_817_ = lean_unsigned_to_nat(3u);
if (v_isShared_816_ == 0)
{
lean_ctor_set(v___x_815_, 4, v_l_789_);
lean_ctor_set(v___x_815_, 3, v_l_789_);
lean_ctor_set(v___x_815_, 2, v_v_808_);
lean_ctor_set(v___x_815_, 1, v_k_807_);
lean_ctor_set(v___x_815_, 0, v___x_703_);
v___x_819_ = v___x_815_;
goto v_reusejp_818_;
}
else
{
lean_object* v_reuseFailAlloc_826_; 
v_reuseFailAlloc_826_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_826_, 0, v___x_703_);
lean_ctor_set(v_reuseFailAlloc_826_, 1, v_k_807_);
lean_ctor_set(v_reuseFailAlloc_826_, 2, v_v_808_);
lean_ctor_set(v_reuseFailAlloc_826_, 3, v_l_789_);
lean_ctor_set(v_reuseFailAlloc_826_, 4, v_l_789_);
v___x_819_ = v_reuseFailAlloc_826_;
goto v_reusejp_818_;
}
v_reusejp_818_:
{
lean_object* v___x_821_; 
if (v_isShared_811_ == 0)
{
lean_ctor_set(v___x_810_, 4, v_l_789_);
lean_ctor_set(v___x_810_, 2, v_v_556_);
lean_ctor_set(v___x_810_, 1, v_k_555_);
lean_ctor_set(v___x_810_, 0, v___x_703_);
v___x_821_ = v___x_810_;
goto v_reusejp_820_;
}
else
{
lean_object* v_reuseFailAlloc_825_; 
v_reuseFailAlloc_825_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_825_, 0, v___x_703_);
lean_ctor_set(v_reuseFailAlloc_825_, 1, v_k_555_);
lean_ctor_set(v_reuseFailAlloc_825_, 2, v_v_556_);
lean_ctor_set(v_reuseFailAlloc_825_, 3, v_l_789_);
lean_ctor_set(v_reuseFailAlloc_825_, 4, v_l_789_);
v___x_821_ = v_reuseFailAlloc_825_;
goto v_reusejp_820_;
}
v_reusejp_820_:
{
lean_object* v___x_823_; 
if (v_isShared_561_ == 0)
{
lean_ctor_set(v___x_560_, 4, v___x_821_);
lean_ctor_set(v___x_560_, 3, v___x_819_);
lean_ctor_set(v___x_560_, 2, v_v_813_);
lean_ctor_set(v___x_560_, 1, v_k_812_);
lean_ctor_set(v___x_560_, 0, v___x_817_);
v___x_823_ = v___x_560_;
goto v_reusejp_822_;
}
else
{
lean_object* v_reuseFailAlloc_824_; 
v_reuseFailAlloc_824_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_824_, 0, v___x_817_);
lean_ctor_set(v_reuseFailAlloc_824_, 1, v_k_812_);
lean_ctor_set(v_reuseFailAlloc_824_, 2, v_v_813_);
lean_ctor_set(v_reuseFailAlloc_824_, 3, v___x_819_);
lean_ctor_set(v_reuseFailAlloc_824_, 4, v___x_821_);
v___x_823_ = v_reuseFailAlloc_824_;
goto v_reusejp_822_;
}
v_reusejp_822_:
{
return v___x_823_;
}
}
}
}
}
}
else
{
lean_object* v___x_835_; lean_object* v___x_837_; 
v___x_835_ = lean_unsigned_to_nat(2u);
if (v_isShared_561_ == 0)
{
lean_ctor_set(v___x_560_, 4, v_r_806_);
lean_ctor_set(v___x_560_, 3, v_impl_702_);
lean_ctor_set(v___x_560_, 0, v___x_835_);
v___x_837_ = v___x_560_;
goto v_reusejp_836_;
}
else
{
lean_object* v_reuseFailAlloc_838_; 
v_reuseFailAlloc_838_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_838_, 0, v___x_835_);
lean_ctor_set(v_reuseFailAlloc_838_, 1, v_k_555_);
lean_ctor_set(v_reuseFailAlloc_838_, 2, v_v_556_);
lean_ctor_set(v_reuseFailAlloc_838_, 3, v_impl_702_);
lean_ctor_set(v_reuseFailAlloc_838_, 4, v_r_806_);
v___x_837_ = v_reuseFailAlloc_838_;
goto v_reusejp_836_;
}
v_reusejp_836_:
{
return v___x_837_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_840_; lean_object* v___x_841_; 
v___x_840_ = lean_unsigned_to_nat(1u);
v___x_841_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_841_, 0, v___x_840_);
lean_ctor_set(v___x_841_, 1, v_k_551_);
lean_ctor_set(v___x_841_, 2, v_v_552_);
lean_ctor_set(v___x_841_, 3, v_t_553_);
lean_ctor_set(v___x_841_, 4, v_t_553_);
return v___x_841_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_subscribe___redArg___lam__0(lean_object* v___y_842_){
_start:
{
lean_object* v___x_844_; lean_object* v_producers_845_; lean_object* v_waiters_846_; lean_object* v_capacity_847_; lean_object* v_size_848_; lean_object* v_buffer_849_; lean_object* v_write_850_; lean_object* v_read_851_; lean_object* v_receivers_852_; lean_object* v_nextId_853_; uint8_t v_closed_854_; lean_object* v_pos_855_; lean_object* v___x_857_; uint8_t v_isShared_858_; uint8_t v_isSharedCheck_867_; 
v___x_844_ = lean_st_ref_take(v___y_842_);
v_producers_845_ = lean_ctor_get(v___x_844_, 0);
v_waiters_846_ = lean_ctor_get(v___x_844_, 1);
v_capacity_847_ = lean_ctor_get(v___x_844_, 2);
v_size_848_ = lean_ctor_get(v___x_844_, 3);
v_buffer_849_ = lean_ctor_get(v___x_844_, 4);
v_write_850_ = lean_ctor_get(v___x_844_, 5);
v_read_851_ = lean_ctor_get(v___x_844_, 6);
v_receivers_852_ = lean_ctor_get(v___x_844_, 7);
v_nextId_853_ = lean_ctor_get(v___x_844_, 8);
v_closed_854_ = lean_ctor_get_uint8(v___x_844_, sizeof(void*)*10);
v_pos_855_ = lean_ctor_get(v___x_844_, 9);
v_isSharedCheck_867_ = !lean_is_exclusive(v___x_844_);
if (v_isSharedCheck_867_ == 0)
{
v___x_857_ = v___x_844_;
v_isShared_858_ = v_isSharedCheck_867_;
goto v_resetjp_856_;
}
else
{
lean_inc(v_pos_855_);
lean_inc(v_nextId_853_);
lean_inc(v_receivers_852_);
lean_inc(v_read_851_);
lean_inc(v_write_850_);
lean_inc(v_buffer_849_);
lean_inc(v_size_848_);
lean_inc(v_capacity_847_);
lean_inc(v_waiters_846_);
lean_inc(v_producers_845_);
lean_dec(v___x_844_);
v___x_857_ = lean_box(0);
v_isShared_858_ = v_isSharedCheck_867_;
goto v_resetjp_856_;
}
v_resetjp_856_:
{
lean_object* v___x_859_; lean_object* v___x_860_; lean_object* v___x_861_; lean_object* v___x_863_; 
lean_inc(v_pos_855_);
lean_inc(v_nextId_853_);
v___x_859_ = l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_subscribe_spec__0___redArg(v_nextId_853_, v_pos_855_, v_receivers_852_);
v___x_860_ = lean_unsigned_to_nat(1u);
v___x_861_ = lean_nat_add(v_nextId_853_, v___x_860_);
if (v_isShared_858_ == 0)
{
lean_ctor_set(v___x_857_, 8, v___x_861_);
lean_ctor_set(v___x_857_, 7, v___x_859_);
v___x_863_ = v___x_857_;
goto v_reusejp_862_;
}
else
{
lean_object* v_reuseFailAlloc_866_; 
v_reuseFailAlloc_866_ = lean_alloc_ctor(0, 10, 1);
lean_ctor_set(v_reuseFailAlloc_866_, 0, v_producers_845_);
lean_ctor_set(v_reuseFailAlloc_866_, 1, v_waiters_846_);
lean_ctor_set(v_reuseFailAlloc_866_, 2, v_capacity_847_);
lean_ctor_set(v_reuseFailAlloc_866_, 3, v_size_848_);
lean_ctor_set(v_reuseFailAlloc_866_, 4, v_buffer_849_);
lean_ctor_set(v_reuseFailAlloc_866_, 5, v_write_850_);
lean_ctor_set(v_reuseFailAlloc_866_, 6, v_read_851_);
lean_ctor_set(v_reuseFailAlloc_866_, 7, v___x_859_);
lean_ctor_set(v_reuseFailAlloc_866_, 8, v___x_861_);
lean_ctor_set(v_reuseFailAlloc_866_, 9, v_pos_855_);
lean_ctor_set_uint8(v_reuseFailAlloc_866_, sizeof(void*)*10, v_closed_854_);
v___x_863_ = v_reuseFailAlloc_866_;
goto v_reusejp_862_;
}
v_reusejp_862_:
{
lean_object* v___x_864_; lean_object* v___x_865_; 
v___x_864_ = lean_st_ref_put(v___y_842_, v___x_863_);
v___x_865_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_865_, 0, v_nextId_853_);
return v___x_865_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_subscribe___redArg___lam__0___boxed(lean_object* v___y_868_, lean_object* v___y_869_){
_start:
{
lean_object* v_res_870_; 
v_res_870_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_subscribe___redArg___lam__0(v___y_868_);
lean_dec(v___y_868_);
return v_res_870_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_subscribe___redArg(lean_object* v_bd_872_){
_start:
{
lean_object* v___f_874_; lean_object* v___x_875_; 
v___f_874_ = ((lean_object*)(l___private_Std_Sync_Broadcast_0__Std_Bounded_subscribe___redArg___closed__0));
lean_inc_ref(v_bd_872_);
v___x_875_ = l_Std_Mutex_atomically___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_subscribe_spec__1___redArg(v_bd_872_, v___f_874_);
if (lean_obj_tag(v___x_875_) == 0)
{
lean_object* v_a_876_; lean_object* v___x_878_; uint8_t v_isShared_879_; uint8_t v_isSharedCheck_884_; 
v_a_876_ = lean_ctor_get(v___x_875_, 0);
v_isSharedCheck_884_ = !lean_is_exclusive(v___x_875_);
if (v_isSharedCheck_884_ == 0)
{
v___x_878_ = v___x_875_;
v_isShared_879_ = v_isSharedCheck_884_;
goto v_resetjp_877_;
}
else
{
lean_inc(v_a_876_);
lean_dec(v___x_875_);
v___x_878_ = lean_box(0);
v_isShared_879_ = v_isSharedCheck_884_;
goto v_resetjp_877_;
}
v_resetjp_877_:
{
lean_object* v___x_880_; lean_object* v___x_882_; 
v___x_880_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_880_, 0, v_bd_872_);
lean_ctor_set(v___x_880_, 1, v_a_876_);
if (v_isShared_879_ == 0)
{
lean_ctor_set(v___x_878_, 0, v___x_880_);
v___x_882_ = v___x_878_;
goto v_reusejp_881_;
}
else
{
lean_object* v_reuseFailAlloc_883_; 
v_reuseFailAlloc_883_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_883_, 0, v___x_880_);
v___x_882_ = v_reuseFailAlloc_883_;
goto v_reusejp_881_;
}
v_reusejp_881_:
{
return v___x_882_;
}
}
}
else
{
lean_object* v_a_885_; lean_object* v___x_887_; uint8_t v_isShared_888_; uint8_t v_isSharedCheck_892_; 
lean_dec_ref(v_bd_872_);
v_a_885_ = lean_ctor_get(v___x_875_, 0);
v_isSharedCheck_892_ = !lean_is_exclusive(v___x_875_);
if (v_isSharedCheck_892_ == 0)
{
v___x_887_ = v___x_875_;
v_isShared_888_ = v_isSharedCheck_892_;
goto v_resetjp_886_;
}
else
{
lean_inc(v_a_885_);
lean_dec(v___x_875_);
v___x_887_ = lean_box(0);
v_isShared_888_ = v_isSharedCheck_892_;
goto v_resetjp_886_;
}
v_resetjp_886_:
{
lean_object* v___x_890_; 
if (v_isShared_888_ == 0)
{
v___x_890_ = v___x_887_;
goto v_reusejp_889_;
}
else
{
lean_object* v_reuseFailAlloc_891_; 
v_reuseFailAlloc_891_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_891_, 0, v_a_885_);
v___x_890_ = v_reuseFailAlloc_891_;
goto v_reusejp_889_;
}
v_reusejp_889_:
{
return v___x_890_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_subscribe___redArg___boxed(lean_object* v_bd_893_, lean_object* v___y_894_){
_start:
{
lean_object* v_res_895_; 
v_res_895_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_subscribe___redArg(v_bd_893_);
return v_res_895_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_subscribe(lean_object* v_00_u03b1_896_, lean_object* v_bd_897_){
_start:
{
lean_object* v___x_899_; 
v___x_899_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_subscribe___redArg(v_bd_897_);
return v___x_899_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_subscribe___boxed(lean_object* v_00_u03b1_900_, lean_object* v_bd_901_, lean_object* v___y_902_){
_start:
{
lean_object* v_res_903_; 
v_res_903_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_subscribe(v_00_u03b1_900_, v_bd_901_);
return v_res_903_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_subscribe_spec__0(lean_object* v_00_u03b2_904_, lean_object* v_k_905_, lean_object* v_v_906_, lean_object* v_t_907_, lean_object* v_hl_908_){
_start:
{
lean_object* v___x_909_; 
v___x_909_ = l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_subscribe_spec__0___redArg(v_k_905_, v_v_906_, v_t_907_);
return v___x_909_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_isEmpty___redArg___lam__0(lean_object* v_toApplicative_910_, lean_object* v_a_911_){
_start:
{
lean_object* v_size_912_; lean_object* v_toPure_913_; lean_object* v___x_914_; uint8_t v___x_915_; lean_object* v___x_916_; lean_object* v___x_917_; 
v_size_912_ = lean_ctor_get(v_a_911_, 3);
v_toPure_913_ = lean_ctor_get(v_toApplicative_910_, 1);
lean_inc(v_toPure_913_);
lean_dec_ref(v_toApplicative_910_);
v___x_914_ = lean_unsigned_to_nat(0u);
v___x_915_ = lean_nat_dec_eq(v_size_912_, v___x_914_);
v___x_916_ = lean_box(v___x_915_);
v___x_917_ = lean_apply_2(v_toPure_913_, lean_box(0), v___x_916_);
return v___x_917_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_isEmpty___redArg___lam__0___boxed(lean_object* v_toApplicative_918_, lean_object* v_a_919_){
_start:
{
lean_object* v_res_920_; 
v_res_920_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_isEmpty___redArg___lam__0(v_toApplicative_918_, v_a_919_);
lean_dec_ref(v_a_919_);
return v_res_920_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_isEmpty___redArg(lean_object* v_inst_921_, lean_object* v_inst_922_, lean_object* v___y_923_){
_start:
{
lean_object* v_toApplicative_924_; lean_object* v_toBind_925_; lean_object* v___f_926_; lean_object* v___x_927_; lean_object* v___x_928_; lean_object* v___x_929_; 
v_toApplicative_924_ = lean_ctor_get(v_inst_921_, 0);
lean_inc_ref(v_toApplicative_924_);
v_toBind_925_ = lean_ctor_get(v_inst_921_, 1);
lean_inc(v_toBind_925_);
lean_dec_ref(v_inst_921_);
v___f_926_ = lean_alloc_closure((void*)(l___private_Std_Sync_Broadcast_0__Std_Bounded_isEmpty___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_926_, 0, v_toApplicative_924_);
lean_inc(v___y_923_);
v___x_927_ = lean_alloc_closure((void*)(l_ST_Prim_Ref_get___boxed), 4, 3);
lean_closure_set(v___x_927_, 0, lean_box(0));
lean_closure_set(v___x_927_, 1, lean_box(0));
lean_closure_set(v___x_927_, 2, v___y_923_);
v___x_928_ = lean_apply_2(v_inst_922_, lean_box(0), v___x_927_);
v___x_929_ = lean_apply_4(v_toBind_925_, lean_box(0), lean_box(0), v___x_928_, v___f_926_);
return v___x_929_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_isEmpty___redArg___boxed(lean_object* v_inst_930_, lean_object* v_inst_931_, lean_object* v___y_932_){
_start:
{
lean_object* v_res_933_; 
v_res_933_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_isEmpty___redArg(v_inst_930_, v_inst_931_, v___y_932_);
lean_dec(v___y_932_);
return v_res_933_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_isEmpty(lean_object* v_m_934_, lean_object* v_00_u03b1_935_, lean_object* v_inst_936_, lean_object* v_inst_937_, lean_object* v___y_938_){
_start:
{
lean_object* v___x_939_; 
v___x_939_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_isEmpty___redArg(v_inst_936_, v_inst_937_, v___y_938_);
return v___x_939_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_isEmpty___boxed(lean_object* v_m_940_, lean_object* v_00_u03b1_941_, lean_object* v_inst_942_, lean_object* v_inst_943_, lean_object* v___y_944_){
_start:
{
lean_object* v_res_945_; 
v_res_945_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_isEmpty(v_m_940_, v_00_u03b1_941_, v_inst_942_, v_inst_943_, v___y_944_);
lean_dec(v___y_944_);
return v_res_945_;
}
}
LEAN_EXPORT uint8_t l___private_Std_Sync_Broadcast_0__Std_Bounded_isFull___redArg(lean_object* v___y_946_){
_start:
{
lean_object* v___x_948_; lean_object* v_capacity_949_; lean_object* v_size_950_; uint8_t v___x_951_; 
v___x_948_ = lean_st_ref_get(v___y_946_);
v_capacity_949_ = lean_ctor_get(v___x_948_, 2);
lean_inc(v_capacity_949_);
v_size_950_ = lean_ctor_get(v___x_948_, 3);
lean_inc(v_size_950_);
lean_dec(v___x_948_);
v___x_951_ = lean_nat_dec_le(v_capacity_949_, v_size_950_);
lean_dec(v_size_950_);
lean_dec(v_capacity_949_);
return v___x_951_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_isFull___redArg___boxed(lean_object* v___y_952_, lean_object* v___y_953_){
_start:
{
uint8_t v_res_954_; lean_object* v_r_955_; 
v_res_954_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_isFull___redArg(v___y_952_);
lean_dec(v___y_952_);
v_r_955_ = lean_box(v_res_954_);
return v_r_955_;
}
}
LEAN_EXPORT uint8_t l___private_Std_Sync_Broadcast_0__Std_Bounded_isFull(lean_object* v_00_u03b1_956_, lean_object* v___y_957_){
_start:
{
uint8_t v___x_959_; 
v___x_959_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_isFull___redArg(v___y_957_);
return v___x_959_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_isFull___boxed(lean_object* v_00_u03b1_960_, lean_object* v___y_961_, lean_object* v___y_962_){
_start:
{
uint8_t v_res_963_; lean_object* v_r_964_; 
v_res_963_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_isFull(v_00_u03b1_960_, v___y_961_);
lean_dec(v___y_961_);
v_r_964_ = lean_box(v_res_963_);
return v_r_964_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_enqueue___redArg(lean_object* v_value_965_, lean_object* v_st_966_){
_start:
{
lean_object* v_producers_968_; lean_object* v_waiters_969_; lean_object* v_capacity_970_; lean_object* v_size_971_; lean_object* v_buffer_972_; lean_object* v_write_973_; lean_object* v_read_974_; lean_object* v_receivers_975_; lean_object* v_nextId_976_; uint8_t v_closed_977_; lean_object* v_pos_978_; lean_object* v___x_980_; uint8_t v_isShared_981_; uint8_t v_isSharedCheck_998_; 
v_producers_968_ = lean_ctor_get(v_st_966_, 0);
v_waiters_969_ = lean_ctor_get(v_st_966_, 1);
v_capacity_970_ = lean_ctor_get(v_st_966_, 2);
v_size_971_ = lean_ctor_get(v_st_966_, 3);
v_buffer_972_ = lean_ctor_get(v_st_966_, 4);
v_write_973_ = lean_ctor_get(v_st_966_, 5);
v_read_974_ = lean_ctor_get(v_st_966_, 6);
v_receivers_975_ = lean_ctor_get(v_st_966_, 7);
v_nextId_976_ = lean_ctor_get(v_st_966_, 8);
v_closed_977_ = lean_ctor_get_uint8(v_st_966_, sizeof(void*)*10);
v_pos_978_ = lean_ctor_get(v_st_966_, 9);
v_isSharedCheck_998_ = !lean_is_exclusive(v_st_966_);
if (v_isSharedCheck_998_ == 0)
{
v___x_980_ = v_st_966_;
v_isShared_981_ = v_isSharedCheck_998_;
goto v_resetjp_979_;
}
else
{
lean_inc(v_pos_978_);
lean_inc(v_nextId_976_);
lean_inc(v_receivers_975_);
lean_inc(v_read_974_);
lean_inc(v_write_973_);
lean_inc(v_buffer_972_);
lean_inc(v_size_971_);
lean_inc(v_capacity_970_);
lean_inc(v_waiters_969_);
lean_inc(v_producers_968_);
lean_dec(v_st_966_);
v___x_980_ = lean_box(0);
v_isShared_981_ = v_isSharedCheck_998_;
goto v_resetjp_979_;
}
v_resetjp_979_:
{
lean_object* v_tailRef_982_; lean_object* v___x_983_; lean_object* v___y_985_; 
v_tailRef_982_ = lean_array_fget_borrowed(v_buffer_972_, v_write_973_);
v___x_983_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_983_, 0, v_value_965_);
if (lean_obj_tag(v_receivers_975_) == 0)
{
lean_object* v_size_996_; 
v_size_996_ = lean_ctor_get(v_receivers_975_, 0);
lean_inc(v_size_996_);
v___y_985_ = v_size_996_;
goto v___jp_984_;
}
else
{
lean_object* v___x_997_; 
v___x_997_ = lean_unsigned_to_nat(0u);
v___y_985_ = v___x_997_;
goto v___jp_984_;
}
v___jp_984_:
{
lean_object* v___x_986_; lean_object* v___x_987_; lean_object* v___x_988_; lean_object* v___x_989_; lean_object* v___x_990_; lean_object* v___x_991_; lean_object* v___x_992_; lean_object* v___x_994_; 
lean_inc(v_pos_978_);
v___x_986_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_986_, 0, v___x_983_);
lean_ctor_set(v___x_986_, 1, v_pos_978_);
lean_ctor_set(v___x_986_, 2, v___y_985_);
v___x_987_ = lean_st_ref_swap(v_tailRef_982_, v___x_986_);
lean_dec(v___x_987_);
v___x_988_ = lean_unsigned_to_nat(1u);
v___x_989_ = lean_nat_add(v_write_973_, v___x_988_);
lean_dec(v_write_973_);
v___x_990_ = lean_nat_mod(v___x_989_, v_capacity_970_);
lean_dec(v___x_989_);
v___x_991_ = lean_nat_add(v_size_971_, v___x_988_);
lean_dec(v_size_971_);
v___x_992_ = lean_nat_add(v_pos_978_, v___x_988_);
lean_dec(v_pos_978_);
if (v_isShared_981_ == 0)
{
lean_ctor_set(v___x_980_, 9, v___x_992_);
lean_ctor_set(v___x_980_, 5, v___x_990_);
lean_ctor_set(v___x_980_, 3, v___x_991_);
v___x_994_ = v___x_980_;
goto v_reusejp_993_;
}
else
{
lean_object* v_reuseFailAlloc_995_; 
v_reuseFailAlloc_995_ = lean_alloc_ctor(0, 10, 1);
lean_ctor_set(v_reuseFailAlloc_995_, 0, v_producers_968_);
lean_ctor_set(v_reuseFailAlloc_995_, 1, v_waiters_969_);
lean_ctor_set(v_reuseFailAlloc_995_, 2, v_capacity_970_);
lean_ctor_set(v_reuseFailAlloc_995_, 3, v___x_991_);
lean_ctor_set(v_reuseFailAlloc_995_, 4, v_buffer_972_);
lean_ctor_set(v_reuseFailAlloc_995_, 5, v___x_990_);
lean_ctor_set(v_reuseFailAlloc_995_, 6, v_read_974_);
lean_ctor_set(v_reuseFailAlloc_995_, 7, v_receivers_975_);
lean_ctor_set(v_reuseFailAlloc_995_, 8, v_nextId_976_);
lean_ctor_set(v_reuseFailAlloc_995_, 9, v___x_992_);
lean_ctor_set_uint8(v_reuseFailAlloc_995_, sizeof(void*)*10, v_closed_977_);
v___x_994_ = v_reuseFailAlloc_995_;
goto v_reusejp_993_;
}
v_reusejp_993_:
{
return v___x_994_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_enqueue___redArg___boxed(lean_object* v_value_999_, lean_object* v_st_1000_, lean_object* v___y_1001_){
_start:
{
lean_object* v_res_1002_; 
v_res_1002_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_enqueue___redArg(v_value_999_, v_st_1000_);
return v_res_1002_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_enqueue(lean_object* v_00_u03b1_1003_, lean_object* v_value_1004_, lean_object* v_st_1005_){
_start:
{
lean_object* v___x_1007_; 
v___x_1007_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_enqueue___redArg(v_value_1004_, v_st_1005_);
return v___x_1007_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_enqueue___boxed(lean_object* v_00_u03b1_1008_, lean_object* v_value_1009_, lean_object* v_st_1010_, lean_object* v___y_1011_){
_start:
{
lean_object* v_res_1012_; 
v_res_1012_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_enqueue(v_00_u03b1_1008_, v_value_1009_, v_st_1010_);
return v_res_1012_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_dequeue___redArg(lean_object* v_st_1013_){
_start:
{
lean_object* v_producers_1014_; lean_object* v_waiters_1015_; lean_object* v_capacity_1016_; lean_object* v_size_1017_; lean_object* v_buffer_1018_; lean_object* v_write_1019_; lean_object* v_read_1020_; lean_object* v_receivers_1021_; lean_object* v_nextId_1022_; uint8_t v_closed_1023_; lean_object* v_pos_1024_; lean_object* v___x_1026_; uint8_t v_isShared_1027_; uint8_t v_isSharedCheck_1035_; 
v_producers_1014_ = lean_ctor_get(v_st_1013_, 0);
v_waiters_1015_ = lean_ctor_get(v_st_1013_, 1);
v_capacity_1016_ = lean_ctor_get(v_st_1013_, 2);
v_size_1017_ = lean_ctor_get(v_st_1013_, 3);
v_buffer_1018_ = lean_ctor_get(v_st_1013_, 4);
v_write_1019_ = lean_ctor_get(v_st_1013_, 5);
v_read_1020_ = lean_ctor_get(v_st_1013_, 6);
v_receivers_1021_ = lean_ctor_get(v_st_1013_, 7);
v_nextId_1022_ = lean_ctor_get(v_st_1013_, 8);
v_closed_1023_ = lean_ctor_get_uint8(v_st_1013_, sizeof(void*)*10);
v_pos_1024_ = lean_ctor_get(v_st_1013_, 9);
v_isSharedCheck_1035_ = !lean_is_exclusive(v_st_1013_);
if (v_isSharedCheck_1035_ == 0)
{
v___x_1026_ = v_st_1013_;
v_isShared_1027_ = v_isSharedCheck_1035_;
goto v_resetjp_1025_;
}
else
{
lean_inc(v_pos_1024_);
lean_inc(v_nextId_1022_);
lean_inc(v_receivers_1021_);
lean_inc(v_read_1020_);
lean_inc(v_write_1019_);
lean_inc(v_buffer_1018_);
lean_inc(v_size_1017_);
lean_inc(v_capacity_1016_);
lean_inc(v_waiters_1015_);
lean_inc(v_producers_1014_);
lean_dec(v_st_1013_);
v___x_1026_ = lean_box(0);
v_isShared_1027_ = v_isSharedCheck_1035_;
goto v_resetjp_1025_;
}
v_resetjp_1025_:
{
lean_object* v___x_1028_; lean_object* v_size_1029_; lean_object* v___x_1030_; lean_object* v_read_1031_; lean_object* v___x_1033_; 
v___x_1028_ = lean_unsigned_to_nat(1u);
v_size_1029_ = lean_nat_sub(v_size_1017_, v___x_1028_);
lean_dec(v_size_1017_);
v___x_1030_ = lean_nat_add(v_read_1020_, v___x_1028_);
lean_dec(v_read_1020_);
v_read_1031_ = lean_nat_mod(v___x_1030_, v_capacity_1016_);
lean_dec(v___x_1030_);
if (v_isShared_1027_ == 0)
{
lean_ctor_set(v___x_1026_, 6, v_read_1031_);
lean_ctor_set(v___x_1026_, 3, v_size_1029_);
v___x_1033_ = v___x_1026_;
goto v_reusejp_1032_;
}
else
{
lean_object* v_reuseFailAlloc_1034_; 
v_reuseFailAlloc_1034_ = lean_alloc_ctor(0, 10, 1);
lean_ctor_set(v_reuseFailAlloc_1034_, 0, v_producers_1014_);
lean_ctor_set(v_reuseFailAlloc_1034_, 1, v_waiters_1015_);
lean_ctor_set(v_reuseFailAlloc_1034_, 2, v_capacity_1016_);
lean_ctor_set(v_reuseFailAlloc_1034_, 3, v_size_1029_);
lean_ctor_set(v_reuseFailAlloc_1034_, 4, v_buffer_1018_);
lean_ctor_set(v_reuseFailAlloc_1034_, 5, v_write_1019_);
lean_ctor_set(v_reuseFailAlloc_1034_, 6, v_read_1031_);
lean_ctor_set(v_reuseFailAlloc_1034_, 7, v_receivers_1021_);
lean_ctor_set(v_reuseFailAlloc_1034_, 8, v_nextId_1022_);
lean_ctor_set(v_reuseFailAlloc_1034_, 9, v_pos_1024_);
lean_ctor_set_uint8(v_reuseFailAlloc_1034_, sizeof(void*)*10, v_closed_1023_);
v___x_1033_ = v_reuseFailAlloc_1034_;
goto v_reusejp_1032_;
}
v_reusejp_1032_:
{
return v___x_1033_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_dequeue(lean_object* v_00_u03b1_1036_, lean_object* v_st_1037_){
_start:
{
lean_object* v___x_1038_; 
v___x_1038_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_dequeue___redArg(v_st_1037_);
return v___x_1038_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_getSlot___redArg___lam__0(lean_object* v_toApplicative_1039_, lean_object* v_place_1040_, lean_object* v_a_1041_){
_start:
{
lean_object* v_capacity_1042_; lean_object* v_buffer_1043_; lean_object* v_toPure_1044_; lean_object* v___x_1045_; lean_object* v___x_1046_; lean_object* v___x_1047_; 
v_capacity_1042_ = lean_ctor_get(v_a_1041_, 2);
v_buffer_1043_ = lean_ctor_get(v_a_1041_, 4);
v_toPure_1044_ = lean_ctor_get(v_toApplicative_1039_, 1);
lean_inc(v_toPure_1044_);
lean_dec_ref(v_toApplicative_1039_);
v___x_1045_ = lean_nat_mod(v_place_1040_, v_capacity_1042_);
v___x_1046_ = lean_array_fget_borrowed(v_buffer_1043_, v___x_1045_);
lean_dec(v___x_1045_);
lean_inc(v___x_1046_);
v___x_1047_ = lean_apply_2(v_toPure_1044_, lean_box(0), v___x_1046_);
return v___x_1047_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_getSlot___redArg___lam__0___boxed(lean_object* v_toApplicative_1048_, lean_object* v_place_1049_, lean_object* v_a_1050_){
_start:
{
lean_object* v_res_1051_; 
v_res_1051_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_getSlot___redArg___lam__0(v_toApplicative_1048_, v_place_1049_, v_a_1050_);
lean_dec_ref(v_a_1050_);
lean_dec(v_place_1049_);
return v_res_1051_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_getSlot___redArg(lean_object* v_inst_1052_, lean_object* v_inst_1053_, lean_object* v_place_1054_, lean_object* v___y_1055_){
_start:
{
lean_object* v_toApplicative_1056_; lean_object* v_toBind_1057_; lean_object* v___f_1058_; lean_object* v___x_1059_; lean_object* v___x_1060_; lean_object* v___x_1061_; 
v_toApplicative_1056_ = lean_ctor_get(v_inst_1052_, 0);
lean_inc_ref(v_toApplicative_1056_);
v_toBind_1057_ = lean_ctor_get(v_inst_1052_, 1);
lean_inc(v_toBind_1057_);
lean_dec_ref(v_inst_1052_);
v___f_1058_ = lean_alloc_closure((void*)(l___private_Std_Sync_Broadcast_0__Std_Bounded_getSlot___redArg___lam__0___boxed), 3, 2);
lean_closure_set(v___f_1058_, 0, v_toApplicative_1056_);
lean_closure_set(v___f_1058_, 1, v_place_1054_);
lean_inc(v___y_1055_);
v___x_1059_ = lean_alloc_closure((void*)(l_ST_Prim_Ref_get___boxed), 4, 3);
lean_closure_set(v___x_1059_, 0, lean_box(0));
lean_closure_set(v___x_1059_, 1, lean_box(0));
lean_closure_set(v___x_1059_, 2, v___y_1055_);
v___x_1060_ = lean_apply_2(v_inst_1053_, lean_box(0), v___x_1059_);
v___x_1061_ = lean_apply_4(v_toBind_1057_, lean_box(0), lean_box(0), v___x_1060_, v___f_1058_);
return v___x_1061_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_getSlot___redArg___boxed(lean_object* v_inst_1062_, lean_object* v_inst_1063_, lean_object* v_place_1064_, lean_object* v___y_1065_){
_start:
{
lean_object* v_res_1066_; 
v_res_1066_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_getSlot___redArg(v_inst_1062_, v_inst_1063_, v_place_1064_, v___y_1065_);
lean_dec(v___y_1065_);
return v_res_1066_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_getSlot(lean_object* v_m_1067_, lean_object* v_00_u03b1_1068_, lean_object* v_inst_1069_, lean_object* v_inst_1070_, lean_object* v_place_1071_, lean_object* v___y_1072_){
_start:
{
lean_object* v___x_1073_; 
v___x_1073_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_getSlot___redArg(v_inst_1069_, v_inst_1070_, v_place_1071_, v___y_1072_);
return v___x_1073_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_getSlot___boxed(lean_object* v_m_1074_, lean_object* v_00_u03b1_1075_, lean_object* v_inst_1076_, lean_object* v_inst_1077_, lean_object* v_place_1078_, lean_object* v___y_1079_){
_start:
{
lean_object* v_res_1080_; 
v_res_1080_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_getSlot(v_m_1074_, v_00_u03b1_1075_, v_inst_1076_, v_inst_1077_, v_place_1078_, v___y_1079_);
lean_dec(v___y_1079_);
return v_res_1080_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_trySend_x27_spec__0___redArg(lean_object* v_as_1081_, size_t v_sz_1082_, size_t v_i_1083_, lean_object* v_b_1084_){
_start:
{
uint8_t v___x_1086_; 
v___x_1086_ = lean_usize_dec_lt(v_i_1083_, v_sz_1082_);
if (v___x_1086_ == 0)
{
return v_b_1084_;
}
else
{
lean_object* v___x_1087_; lean_object* v_a_1088_; lean_object* v___x_1089_; size_t v___x_1090_; size_t v___x_1091_; 
v___x_1087_ = lean_box(0);
v_a_1088_ = lean_array_uget_borrowed(v_as_1081_, v_i_1083_);
v___x_1089_ = l___private_Std_Sync_Broadcast_0__Std_Broadcast_Consumer_resolve___redArg(v_a_1088_, v___x_1086_);
v___x_1090_ = ((size_t)1ULL);
v___x_1091_ = lean_usize_add(v_i_1083_, v___x_1090_);
v_i_1083_ = v___x_1091_;
v_b_1084_ = v___x_1087_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_trySend_x27_spec__0___redArg___boxed(lean_object* v_as_1093_, lean_object* v_sz_1094_, lean_object* v_i_1095_, lean_object* v_b_1096_, lean_object* v___y_1097_){
_start:
{
size_t v_sz_boxed_1098_; size_t v_i_boxed_1099_; lean_object* v_res_1100_; 
v_sz_boxed_1098_ = lean_unbox_usize(v_sz_1094_);
lean_dec(v_sz_1094_);
v_i_boxed_1099_ = lean_unbox_usize(v_i_1095_);
lean_dec(v_i_1095_);
v_res_1100_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_trySend_x27_spec__0___redArg(v_as_1093_, v_sz_boxed_1098_, v_i_boxed_1099_, v_b_1096_);
lean_dec_ref(v_as_1093_);
return v_res_1100_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_trySend_x27___redArg(lean_object* v_v_1101_, lean_object* v___y_1102_){
_start:
{
uint8_t v___x_1104_; 
v___x_1104_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_isFull___redArg(v___y_1102_);
if (v___x_1104_ == 0)
{
lean_object* v___x_1105_; lean_object* v___x_1106_; lean_object* v_producers_1107_; lean_object* v_waiters_1108_; lean_object* v_capacity_1109_; lean_object* v_size_1110_; lean_object* v_buffer_1111_; lean_object* v_write_1112_; lean_object* v_read_1113_; lean_object* v_receivers_1114_; lean_object* v_nextId_1115_; uint8_t v_closed_1116_; lean_object* v_pos_1117_; lean_object* v___x_1119_; uint8_t v_isShared_1120_; uint8_t v_isSharedCheck_1136_; 
v___x_1105_ = lean_st_ref_get(v___y_1102_);
v___x_1106_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_enqueue___redArg(v_v_1101_, v___x_1105_);
v_producers_1107_ = lean_ctor_get(v___x_1106_, 0);
v_waiters_1108_ = lean_ctor_get(v___x_1106_, 1);
v_capacity_1109_ = lean_ctor_get(v___x_1106_, 2);
v_size_1110_ = lean_ctor_get(v___x_1106_, 3);
v_buffer_1111_ = lean_ctor_get(v___x_1106_, 4);
v_write_1112_ = lean_ctor_get(v___x_1106_, 5);
v_read_1113_ = lean_ctor_get(v___x_1106_, 6);
v_receivers_1114_ = lean_ctor_get(v___x_1106_, 7);
v_nextId_1115_ = lean_ctor_get(v___x_1106_, 8);
v_closed_1116_ = lean_ctor_get_uint8(v___x_1106_, sizeof(void*)*10);
v_pos_1117_ = lean_ctor_get(v___x_1106_, 9);
v_isSharedCheck_1136_ = !lean_is_exclusive(v___x_1106_);
if (v_isSharedCheck_1136_ == 0)
{
v___x_1119_ = v___x_1106_;
v_isShared_1120_ = v_isSharedCheck_1136_;
goto v_resetjp_1118_;
}
else
{
lean_inc(v_pos_1117_);
lean_inc(v_nextId_1115_);
lean_inc(v_receivers_1114_);
lean_inc(v_read_1113_);
lean_inc(v_write_1112_);
lean_inc(v_buffer_1111_);
lean_inc(v_size_1110_);
lean_inc(v_capacity_1109_);
lean_inc(v_waiters_1108_);
lean_inc(v_producers_1107_);
lean_dec(v___x_1106_);
v___x_1119_ = lean_box(0);
v_isShared_1120_ = v_isSharedCheck_1136_;
goto v_resetjp_1118_;
}
v_resetjp_1118_:
{
lean_object* v___x_1121_; lean_object* v___x_1123_; 
v___x_1121_ = lean_obj_once(&l___private_Std_Sync_Broadcast_0__Std_Bounded_new___redArg___closed__2, &l___private_Std_Sync_Broadcast_0__Std_Bounded_new___redArg___closed__2_once, _init_l___private_Std_Sync_Broadcast_0__Std_Bounded_new___redArg___closed__2);
lean_inc(v_receivers_1114_);
if (v_isShared_1120_ == 0)
{
lean_ctor_set(v___x_1119_, 1, v___x_1121_);
v___x_1123_ = v___x_1119_;
goto v_reusejp_1122_;
}
else
{
lean_object* v_reuseFailAlloc_1135_; 
v_reuseFailAlloc_1135_ = lean_alloc_ctor(0, 10, 1);
lean_ctor_set(v_reuseFailAlloc_1135_, 0, v_producers_1107_);
lean_ctor_set(v_reuseFailAlloc_1135_, 1, v___x_1121_);
lean_ctor_set(v_reuseFailAlloc_1135_, 2, v_capacity_1109_);
lean_ctor_set(v_reuseFailAlloc_1135_, 3, v_size_1110_);
lean_ctor_set(v_reuseFailAlloc_1135_, 4, v_buffer_1111_);
lean_ctor_set(v_reuseFailAlloc_1135_, 5, v_write_1112_);
lean_ctor_set(v_reuseFailAlloc_1135_, 6, v_read_1113_);
lean_ctor_set(v_reuseFailAlloc_1135_, 7, v_receivers_1114_);
lean_ctor_set(v_reuseFailAlloc_1135_, 8, v_nextId_1115_);
lean_ctor_set(v_reuseFailAlloc_1135_, 9, v_pos_1117_);
lean_ctor_set_uint8(v_reuseFailAlloc_1135_, sizeof(void*)*10, v_closed_1116_);
v___x_1123_ = v_reuseFailAlloc_1135_;
goto v_reusejp_1122_;
}
v_reusejp_1122_:
{
lean_object* v___x_1124_; lean_object* v___x_1125_; lean_object* v___x_1126_; size_t v_sz_1127_; size_t v___x_1128_; lean_object* v___x_1129_; lean_object* v___y_1131_; 
v___x_1124_ = lean_st_ref_swap(v___y_1102_, v___x_1123_);
lean_dec(v___x_1124_);
v___x_1125_ = l_Std_Queue_toArray___redArg(v_waiters_1108_);
v___x_1126_ = lean_box(0);
v_sz_1127_ = lean_array_size(v___x_1125_);
v___x_1128_ = ((size_t)0ULL);
v___x_1129_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_trySend_x27_spec__0___redArg(v___x_1125_, v_sz_1127_, v___x_1128_, v___x_1126_);
lean_dec_ref(v___x_1125_);
if (lean_obj_tag(v_receivers_1114_) == 0)
{
lean_object* v_size_1133_; 
v_size_1133_ = lean_ctor_get(v_receivers_1114_, 0);
lean_inc(v_size_1133_);
lean_dec_ref_known(v_receivers_1114_, 5);
v___y_1131_ = v_size_1133_;
goto v___jp_1130_;
}
else
{
lean_object* v___x_1134_; 
v___x_1134_ = lean_unsigned_to_nat(0u);
v___y_1131_ = v___x_1134_;
goto v___jp_1130_;
}
v___jp_1130_:
{
lean_object* v___x_1132_; 
v___x_1132_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1132_, 0, v___y_1131_);
return v___x_1132_;
}
}
}
}
else
{
lean_object* v___x_1137_; 
lean_dec(v_v_1101_);
v___x_1137_ = lean_box(0);
return v___x_1137_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_trySend_x27___redArg___boxed(lean_object* v_v_1138_, lean_object* v___y_1139_, lean_object* v___y_1140_){
_start:
{
lean_object* v_res_1141_; 
v_res_1141_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_trySend_x27___redArg(v_v_1138_, v___y_1139_);
lean_dec(v___y_1139_);
return v_res_1141_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_trySend_x27(lean_object* v_00_u03b1_1142_, lean_object* v_v_1143_, lean_object* v___y_1144_){
_start:
{
lean_object* v___x_1146_; 
v___x_1146_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_trySend_x27___redArg(v_v_1143_, v___y_1144_);
return v___x_1146_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_trySend_x27___boxed(lean_object* v_00_u03b1_1147_, lean_object* v_v_1148_, lean_object* v___y_1149_, lean_object* v___y_1150_){
_start:
{
lean_object* v_res_1151_; 
v_res_1151_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_trySend_x27(v_00_u03b1_1147_, v_v_1148_, v___y_1149_);
lean_dec(v___y_1149_);
return v_res_1151_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_trySend_x27_spec__0(lean_object* v_00_u03b1_1152_, lean_object* v_as_1153_, size_t v_sz_1154_, size_t v_i_1155_, lean_object* v_b_1156_, lean_object* v___y_1157_){
_start:
{
lean_object* v___x_1159_; 
v___x_1159_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_trySend_x27_spec__0___redArg(v_as_1153_, v_sz_1154_, v_i_1155_, v_b_1156_);
return v___x_1159_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_trySend_x27_spec__0___boxed(lean_object* v_00_u03b1_1160_, lean_object* v_as_1161_, lean_object* v_sz_1162_, lean_object* v_i_1163_, lean_object* v_b_1164_, lean_object* v___y_1165_, lean_object* v___y_1166_){
_start:
{
size_t v_sz_boxed_1167_; size_t v_i_boxed_1168_; lean_object* v_res_1169_; 
v_sz_boxed_1167_ = lean_unbox_usize(v_sz_1162_);
lean_dec(v_sz_1162_);
v_i_boxed_1168_ = lean_unbox_usize(v_i_1163_);
lean_dec(v_i_1163_);
v_res_1169_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_trySend_x27_spec__0(v_00_u03b1_1160_, v_as_1161_, v_sz_boxed_1167_, v_i_boxed_1168_, v_b_1164_, v___y_1165_);
lean_dec(v___y_1165_);
lean_dec_ref(v_as_1161_);
return v_res_1169_;
}
}
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_trySend_spec__0___redArg(lean_object* v_mutex_1170_, lean_object* v_k_1171_){
_start:
{
lean_object* v_ref_1173_; lean_object* v_mutex_1174_; lean_object* v___x_1175_; lean_object* v___x_1176_; lean_object* v___x_1177_; 
v_ref_1173_ = lean_ctor_get(v_mutex_1170_, 0);
lean_inc(v_ref_1173_);
v_mutex_1174_ = lean_ctor_get(v_mutex_1170_, 1);
lean_inc(v_mutex_1174_);
lean_dec_ref(v_mutex_1170_);
v___x_1175_ = lean_io_basemutex_lock(v_mutex_1174_);
v___x_1176_ = lean_apply_2(v_k_1171_, v_ref_1173_, lean_box(0));
v___x_1177_ = lean_io_basemutex_unlock(v_mutex_1174_);
lean_dec(v_mutex_1174_);
return v___x_1176_;
}
}
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_trySend_spec__0___redArg___boxed(lean_object* v_mutex_1178_, lean_object* v_k_1179_, lean_object* v___y_1180_){
_start:
{
lean_object* v_res_1181_; 
v_res_1181_ = l_Std_Mutex_atomically___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_trySend_spec__0___redArg(v_mutex_1178_, v_k_1179_);
return v_res_1181_;
}
}
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_trySend_spec__0(lean_object* v_00_u03b1_1182_, lean_object* v_00_u03b2_1183_, lean_object* v_mutex_1184_, lean_object* v_k_1185_){
_start:
{
lean_object* v___x_1187_; 
v___x_1187_ = l_Std_Mutex_atomically___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_trySend_spec__0___redArg(v_mutex_1184_, v_k_1185_);
return v___x_1187_;
}
}
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_trySend_spec__0___boxed(lean_object* v_00_u03b1_1188_, lean_object* v_00_u03b2_1189_, lean_object* v_mutex_1190_, lean_object* v_k_1191_, lean_object* v___y_1192_){
_start:
{
lean_object* v_res_1193_; 
v_res_1193_ = l_Std_Mutex_atomically___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_trySend_spec__0(v_00_u03b1_1188_, v_00_u03b2_1189_, v_mutex_1190_, v_k_1191_);
return v_res_1193_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_trySend___redArg___lam__0(lean_object* v_v_1196_, lean_object* v___y_1197_){
_start:
{
lean_object* v___x_1199_; uint8_t v_closed_1200_; 
v___x_1199_ = lean_st_ref_get(v___y_1197_);
v_closed_1200_ = lean_ctor_get_uint8(v___x_1199_, sizeof(void*)*10);
lean_dec(v___x_1199_);
if (v_closed_1200_ == 0)
{
lean_object* v___x_1201_; lean_object* v_receivers_1202_; 
v___x_1201_ = lean_st_ref_get(v___y_1197_);
v_receivers_1202_ = lean_ctor_get(v___x_1201_, 7);
lean_inc(v_receivers_1202_);
lean_dec(v___x_1201_);
if (lean_obj_tag(v_receivers_1202_) == 0)
{
lean_object* v___x_1203_; 
lean_dec_ref_known(v_receivers_1202_, 5);
v___x_1203_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_trySend_x27___redArg(v_v_1196_, v___y_1197_);
return v___x_1203_;
}
else
{
lean_object* v___x_1204_; 
lean_dec(v_v_1196_);
v___x_1204_ = ((lean_object*)(l___private_Std_Sync_Broadcast_0__Std_Bounded_trySend___redArg___lam__0___closed__0));
return v___x_1204_;
}
}
else
{
lean_object* v___x_1205_; 
lean_dec(v_v_1196_);
v___x_1205_ = lean_box(0);
return v___x_1205_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_trySend___redArg___lam__0___boxed(lean_object* v_v_1206_, lean_object* v___y_1207_, lean_object* v___y_1208_){
_start:
{
lean_object* v_res_1209_; 
v_res_1209_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_trySend___redArg___lam__0(v_v_1206_, v___y_1207_);
lean_dec(v___y_1207_);
return v_res_1209_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_trySend___redArg(lean_object* v_ch_1210_, lean_object* v_v_1211_){
_start:
{
lean_object* v___f_1213_; lean_object* v___x_1214_; 
v___f_1213_ = lean_alloc_closure((void*)(l___private_Std_Sync_Broadcast_0__Std_Bounded_trySend___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_1213_, 0, v_v_1211_);
v___x_1214_ = l_Std_Mutex_atomically___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_trySend_spec__0___redArg(v_ch_1210_, v___f_1213_);
return v___x_1214_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_trySend___redArg___boxed(lean_object* v_ch_1215_, lean_object* v_v_1216_, lean_object* v___y_1217_){
_start:
{
lean_object* v_res_1218_; 
v_res_1218_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_trySend___redArg(v_ch_1215_, v_v_1216_);
return v_res_1218_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_trySend(lean_object* v_00_u03b1_1219_, lean_object* v_ch_1220_, lean_object* v_v_1221_){
_start:
{
lean_object* v___x_1223_; 
v___x_1223_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_trySend___redArg(v_ch_1220_, v_v_1221_);
return v___x_1223_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_trySend___boxed(lean_object* v_00_u03b1_1224_, lean_object* v_ch_1225_, lean_object* v_v_1226_, lean_object* v___y_1227_){
_start:
{
lean_object* v_res_1228_; 
v_res_1228_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_trySend(v_00_u03b1_1224_, v_ch_1225_, v_v_1226_);
return v_res_1228_;
}
}
static lean_object* _init_l___private_Std_Sync_Broadcast_0__Std_Bounded_send___redArg___lam__1___closed__1(void){
_start:
{
lean_object* v___x_1231_; lean_object* v___x_1232_; 
v___x_1231_ = ((lean_object*)(l___private_Std_Sync_Broadcast_0__Std_Bounded_send___redArg___lam__1___closed__0));
v___x_1232_ = lean_task_pure(v___x_1231_);
return v___x_1232_;
}
}
static lean_object* _init_l___private_Std_Sync_Broadcast_0__Std_Bounded_send___redArg___lam__1___closed__3(void){
_start:
{
lean_object* v___x_1236_; lean_object* v___x_1237_; 
v___x_1236_ = ((lean_object*)(l___private_Std_Sync_Broadcast_0__Std_Bounded_send___redArg___lam__1___closed__2));
v___x_1237_ = lean_task_pure(v___x_1236_);
return v___x_1237_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_send___redArg___lam__1(lean_object* v_v_1238_, lean_object* v___f_1239_, lean_object* v___y_1240_){
_start:
{
lean_object* v___x_1242_; uint8_t v_closed_1243_; 
v___x_1242_ = lean_st_ref_get(v___y_1240_);
v_closed_1243_ = lean_ctor_get_uint8(v___x_1242_, sizeof(void*)*10);
lean_dec(v___x_1242_);
if (v_closed_1243_ == 0)
{
lean_object* v___x_1244_; lean_object* v_receivers_1245_; 
v___x_1244_ = lean_st_ref_get(v___y_1240_);
v_receivers_1245_ = lean_ctor_get(v___x_1244_, 7);
lean_inc(v_receivers_1245_);
lean_dec(v___x_1244_);
if (lean_obj_tag(v_receivers_1245_) == 0)
{
lean_object* v___x_1246_; 
lean_dec_ref_known(v_receivers_1245_, 5);
v___x_1246_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_trySend_x27___redArg(v_v_1238_, v___y_1240_);
if (lean_obj_tag(v___x_1246_) == 1)
{
lean_object* v_val_1247_; lean_object* v___x_1249_; uint8_t v_isShared_1250_; uint8_t v_isSharedCheck_1255_; 
lean_dec_ref(v___f_1239_);
v_val_1247_ = lean_ctor_get(v___x_1246_, 0);
v_isSharedCheck_1255_ = !lean_is_exclusive(v___x_1246_);
if (v_isSharedCheck_1255_ == 0)
{
v___x_1249_ = v___x_1246_;
v_isShared_1250_ = v_isSharedCheck_1255_;
goto v_resetjp_1248_;
}
else
{
lean_inc(v_val_1247_);
lean_dec(v___x_1246_);
v___x_1249_ = lean_box(0);
v_isShared_1250_ = v_isSharedCheck_1255_;
goto v_resetjp_1248_;
}
v_resetjp_1248_:
{
lean_object* v___x_1252_; 
if (v_isShared_1250_ == 0)
{
v___x_1252_ = v___x_1249_;
goto v_reusejp_1251_;
}
else
{
lean_object* v_reuseFailAlloc_1254_; 
v_reuseFailAlloc_1254_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1254_, 0, v_val_1247_);
v___x_1252_ = v_reuseFailAlloc_1254_;
goto v_reusejp_1251_;
}
v_reusejp_1251_:
{
lean_object* v___x_1253_; 
v___x_1253_ = lean_task_pure(v___x_1252_);
return v___x_1253_;
}
}
}
else
{
lean_object* v___x_1256_; lean_object* v___x_1257_; lean_object* v_producers_1258_; lean_object* v_waiters_1259_; lean_object* v_capacity_1260_; lean_object* v_size_1261_; lean_object* v_buffer_1262_; lean_object* v_write_1263_; lean_object* v_read_1264_; lean_object* v_receivers_1265_; lean_object* v_nextId_1266_; uint8_t v_closed_1267_; lean_object* v_pos_1268_; lean_object* v___x_1270_; uint8_t v_isShared_1271_; uint8_t v_isSharedCheck_1280_; 
lean_dec(v___x_1246_);
v___x_1256_ = lean_io_promise_new();
v___x_1257_ = lean_st_ref_take(v___y_1240_);
v_producers_1258_ = lean_ctor_get(v___x_1257_, 0);
v_waiters_1259_ = lean_ctor_get(v___x_1257_, 1);
v_capacity_1260_ = lean_ctor_get(v___x_1257_, 2);
v_size_1261_ = lean_ctor_get(v___x_1257_, 3);
v_buffer_1262_ = lean_ctor_get(v___x_1257_, 4);
v_write_1263_ = lean_ctor_get(v___x_1257_, 5);
v_read_1264_ = lean_ctor_get(v___x_1257_, 6);
v_receivers_1265_ = lean_ctor_get(v___x_1257_, 7);
v_nextId_1266_ = lean_ctor_get(v___x_1257_, 8);
v_closed_1267_ = lean_ctor_get_uint8(v___x_1257_, sizeof(void*)*10);
v_pos_1268_ = lean_ctor_get(v___x_1257_, 9);
v_isSharedCheck_1280_ = !lean_is_exclusive(v___x_1257_);
if (v_isSharedCheck_1280_ == 0)
{
v___x_1270_ = v___x_1257_;
v_isShared_1271_ = v_isSharedCheck_1280_;
goto v_resetjp_1269_;
}
else
{
lean_inc(v_pos_1268_);
lean_inc(v_nextId_1266_);
lean_inc(v_receivers_1265_);
lean_inc(v_read_1264_);
lean_inc(v_write_1263_);
lean_inc(v_buffer_1262_);
lean_inc(v_size_1261_);
lean_inc(v_capacity_1260_);
lean_inc(v_waiters_1259_);
lean_inc(v_producers_1258_);
lean_dec(v___x_1257_);
v___x_1270_ = lean_box(0);
v_isShared_1271_ = v_isSharedCheck_1280_;
goto v_resetjp_1269_;
}
v_resetjp_1269_:
{
lean_object* v___x_1272_; lean_object* v___x_1274_; 
lean_inc(v___x_1256_);
v___x_1272_ = l_Std_Queue_enqueue___redArg(v___x_1256_, v_producers_1258_);
if (v_isShared_1271_ == 0)
{
lean_ctor_set(v___x_1270_, 0, v___x_1272_);
v___x_1274_ = v___x_1270_;
goto v_reusejp_1273_;
}
else
{
lean_object* v_reuseFailAlloc_1279_; 
v_reuseFailAlloc_1279_ = lean_alloc_ctor(0, 10, 1);
lean_ctor_set(v_reuseFailAlloc_1279_, 0, v___x_1272_);
lean_ctor_set(v_reuseFailAlloc_1279_, 1, v_waiters_1259_);
lean_ctor_set(v_reuseFailAlloc_1279_, 2, v_capacity_1260_);
lean_ctor_set(v_reuseFailAlloc_1279_, 3, v_size_1261_);
lean_ctor_set(v_reuseFailAlloc_1279_, 4, v_buffer_1262_);
lean_ctor_set(v_reuseFailAlloc_1279_, 5, v_write_1263_);
lean_ctor_set(v_reuseFailAlloc_1279_, 6, v_read_1264_);
lean_ctor_set(v_reuseFailAlloc_1279_, 7, v_receivers_1265_);
lean_ctor_set(v_reuseFailAlloc_1279_, 8, v_nextId_1266_);
lean_ctor_set(v_reuseFailAlloc_1279_, 9, v_pos_1268_);
lean_ctor_set_uint8(v_reuseFailAlloc_1279_, sizeof(void*)*10, v_closed_1267_);
v___x_1274_ = v_reuseFailAlloc_1279_;
goto v_reusejp_1273_;
}
v_reusejp_1273_:
{
lean_object* v___x_1275_; lean_object* v___x_1276_; lean_object* v___x_1277_; lean_object* v___x_1278_; 
v___x_1275_ = lean_st_ref_put(v___y_1240_, v___x_1274_);
v___x_1276_ = lean_io_promise_result_opt(v___x_1256_);
lean_dec(v___x_1256_);
v___x_1277_ = lean_unsigned_to_nat(0u);
v___x_1278_ = lean_io_bind_task(v___x_1276_, v___f_1239_, v___x_1277_, v_closed_1243_);
return v___x_1278_;
}
}
}
}
else
{
lean_object* v___x_1281_; 
lean_dec_ref(v___f_1239_);
lean_dec(v_v_1238_);
v___x_1281_ = lean_obj_once(&l___private_Std_Sync_Broadcast_0__Std_Bounded_send___redArg___lam__1___closed__1, &l___private_Std_Sync_Broadcast_0__Std_Bounded_send___redArg___lam__1___closed__1_once, _init_l___private_Std_Sync_Broadcast_0__Std_Bounded_send___redArg___lam__1___closed__1);
return v___x_1281_;
}
}
else
{
lean_object* v___x_1282_; 
lean_dec_ref(v___f_1239_);
lean_dec(v_v_1238_);
v___x_1282_ = lean_obj_once(&l___private_Std_Sync_Broadcast_0__Std_Bounded_send___redArg___lam__1___closed__3, &l___private_Std_Sync_Broadcast_0__Std_Bounded_send___redArg___lam__1___closed__3_once, _init_l___private_Std_Sync_Broadcast_0__Std_Bounded_send___redArg___lam__1___closed__3);
return v___x_1282_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_send___redArg___lam__1___boxed(lean_object* v_v_1283_, lean_object* v___f_1284_, lean_object* v___y_1285_, lean_object* v___y_1286_){
_start:
{
lean_object* v_res_1287_; 
v_res_1287_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_send___redArg___lam__1(v_v_1283_, v___f_1284_, v___y_1285_);
lean_dec(v___y_1285_);
return v_res_1287_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_send___redArg___lam__0(lean_object* v_ch_1288_, lean_object* v_v_1289_, lean_object* v_res_1290_){
_start:
{
if (lean_obj_tag(v_res_1290_) == 0)
{
lean_dec(v_v_1289_);
lean_dec_ref(v_ch_1288_);
goto v___jp_1292_;
}
else
{
lean_object* v_val_1294_; uint8_t v___x_1295_; 
v_val_1294_ = lean_ctor_get(v_res_1290_, 0);
v___x_1295_ = lean_unbox(v_val_1294_);
if (v___x_1295_ == 0)
{
lean_dec(v_v_1289_);
lean_dec_ref(v_ch_1288_);
goto v___jp_1292_;
}
else
{
lean_object* v___x_1296_; 
v___x_1296_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_send___redArg(v_ch_1288_, v_v_1289_);
return v___x_1296_;
}
}
v___jp_1292_:
{
lean_object* v___x_1293_; 
v___x_1293_ = lean_obj_once(&l___private_Std_Sync_Broadcast_0__Std_Bounded_send___redArg___lam__1___closed__3, &l___private_Std_Sync_Broadcast_0__Std_Bounded_send___redArg___lam__1___closed__3_once, _init_l___private_Std_Sync_Broadcast_0__Std_Bounded_send___redArg___lam__1___closed__3);
return v___x_1293_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_send___redArg___lam__0___boxed(lean_object* v_ch_1297_, lean_object* v_v_1298_, lean_object* v_res_1299_, lean_object* v___y_1300_){
_start:
{
lean_object* v_res_1301_; 
v_res_1301_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_send___redArg___lam__0(v_ch_1297_, v_v_1298_, v_res_1299_);
lean_dec(v_res_1299_);
return v_res_1301_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_send___redArg(lean_object* v_ch_1302_, lean_object* v_v_1303_){
_start:
{
lean_object* v___f_1305_; lean_object* v___f_1306_; lean_object* v___x_1307_; 
lean_inc(v_v_1303_);
lean_inc_ref(v_ch_1302_);
v___f_1305_ = lean_alloc_closure((void*)(l___private_Std_Sync_Broadcast_0__Std_Bounded_send___redArg___lam__0___boxed), 4, 2);
lean_closure_set(v___f_1305_, 0, v_ch_1302_);
lean_closure_set(v___f_1305_, 1, v_v_1303_);
v___f_1306_ = lean_alloc_closure((void*)(l___private_Std_Sync_Broadcast_0__Std_Bounded_send___redArg___lam__1___boxed), 4, 2);
lean_closure_set(v___f_1306_, 0, v_v_1303_);
lean_closure_set(v___f_1306_, 1, v___f_1305_);
v___x_1307_ = l_Std_Mutex_atomically___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_trySend_spec__0___redArg(v_ch_1302_, v___f_1306_);
return v___x_1307_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_send___redArg___boxed(lean_object* v_ch_1308_, lean_object* v_v_1309_, lean_object* v___y_1310_){
_start:
{
lean_object* v_res_1311_; 
v_res_1311_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_send___redArg(v_ch_1308_, v_v_1309_);
return v_res_1311_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_send(lean_object* v_00_u03b1_1312_, lean_object* v_ch_1313_, lean_object* v_v_1314_){
_start:
{
lean_object* v___x_1316_; 
v___x_1316_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_send___redArg(v_ch_1313_, v_v_1314_);
return v___x_1316_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_send___boxed(lean_object* v_00_u03b1_1317_, lean_object* v_ch_1318_, lean_object* v_v_1319_, lean_object* v___y_1320_){
_start:
{
lean_object* v_res_1321_; 
v_res_1321_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_send(v_00_u03b1_1317_, v_ch_1318_, v_v_1319_);
return v_res_1321_;
}
}
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_close_spec__1___redArg___lam__0(lean_object* v_mutex_1322_, lean_object* v_a_x3f_1323_){
_start:
{
lean_object* v___x_1325_; lean_object* v___x_1326_; 
v___x_1325_ = lean_io_basemutex_unlock(v_mutex_1322_);
v___x_1326_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1326_, 0, v___x_1325_);
return v___x_1326_;
}
}
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_close_spec__1___redArg___lam__0___boxed(lean_object* v_mutex_1327_, lean_object* v_a_x3f_1328_, lean_object* v___y_1329_){
_start:
{
lean_object* v_res_1330_; 
v_res_1330_ = l_Std_Mutex_atomically___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_close_spec__1___redArg___lam__0(v_mutex_1327_, v_a_x3f_1328_);
lean_dec(v_a_x3f_1328_);
lean_dec(v_mutex_1327_);
return v_res_1330_;
}
}
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_close_spec__1___redArg(lean_object* v_mutex_1331_, lean_object* v_k_1332_){
_start:
{
lean_object* v_ref_1334_; lean_object* v_mutex_1335_; lean_object* v___x_1336_; lean_object* v___x_1337_; 
v_ref_1334_ = lean_ctor_get(v_mutex_1331_, 0);
lean_inc(v_ref_1334_);
v_mutex_1335_ = lean_ctor_get(v_mutex_1331_, 1);
lean_inc(v_mutex_1335_);
lean_dec_ref(v_mutex_1331_);
v___x_1336_ = lean_io_basemutex_lock(v_mutex_1335_);
v___x_1337_ = lean_apply_2(v_k_1332_, v_ref_1334_, lean_box(0));
if (lean_obj_tag(v___x_1337_) == 0)
{
lean_object* v_a_1338_; lean_object* v___x_1340_; uint8_t v_isShared_1341_; uint8_t v_isSharedCheck_1354_; 
v_a_1338_ = lean_ctor_get(v___x_1337_, 0);
v_isSharedCheck_1354_ = !lean_is_exclusive(v___x_1337_);
if (v_isSharedCheck_1354_ == 0)
{
v___x_1340_ = v___x_1337_;
v_isShared_1341_ = v_isSharedCheck_1354_;
goto v_resetjp_1339_;
}
else
{
lean_inc(v_a_1338_);
lean_dec(v___x_1337_);
v___x_1340_ = lean_box(0);
v_isShared_1341_ = v_isSharedCheck_1354_;
goto v_resetjp_1339_;
}
v_resetjp_1339_:
{
lean_object* v___x_1343_; 
lean_inc(v_a_1338_);
if (v_isShared_1341_ == 0)
{
lean_ctor_set_tag(v___x_1340_, 1);
v___x_1343_ = v___x_1340_;
goto v_reusejp_1342_;
}
else
{
lean_object* v_reuseFailAlloc_1353_; 
v_reuseFailAlloc_1353_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1353_, 0, v_a_1338_);
v___x_1343_ = v_reuseFailAlloc_1353_;
goto v_reusejp_1342_;
}
v_reusejp_1342_:
{
lean_object* v___x_1344_; lean_object* v___x_1346_; uint8_t v_isShared_1347_; uint8_t v_isSharedCheck_1351_; 
v___x_1344_ = l_Std_Mutex_atomically___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_close_spec__1___redArg___lam__0(v_mutex_1335_, v___x_1343_);
lean_dec_ref(v___x_1343_);
lean_dec(v_mutex_1335_);
v_isSharedCheck_1351_ = !lean_is_exclusive(v___x_1344_);
if (v_isSharedCheck_1351_ == 0)
{
lean_object* v_unused_1352_; 
v_unused_1352_ = lean_ctor_get(v___x_1344_, 0);
lean_dec(v_unused_1352_);
v___x_1346_ = v___x_1344_;
v_isShared_1347_ = v_isSharedCheck_1351_;
goto v_resetjp_1345_;
}
else
{
lean_dec(v___x_1344_);
v___x_1346_ = lean_box(0);
v_isShared_1347_ = v_isSharedCheck_1351_;
goto v_resetjp_1345_;
}
v_resetjp_1345_:
{
lean_object* v___x_1349_; 
if (v_isShared_1347_ == 0)
{
lean_ctor_set(v___x_1346_, 0, v_a_1338_);
v___x_1349_ = v___x_1346_;
goto v_reusejp_1348_;
}
else
{
lean_object* v_reuseFailAlloc_1350_; 
v_reuseFailAlloc_1350_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1350_, 0, v_a_1338_);
v___x_1349_ = v_reuseFailAlloc_1350_;
goto v_reusejp_1348_;
}
v_reusejp_1348_:
{
return v___x_1349_;
}
}
}
}
}
else
{
lean_object* v_a_1355_; lean_object* v___x_1356_; lean_object* v___x_1357_; lean_object* v___x_1359_; uint8_t v_isShared_1360_; uint8_t v_isSharedCheck_1364_; 
v_a_1355_ = lean_ctor_get(v___x_1337_, 0);
lean_inc(v_a_1355_);
lean_dec_ref_known(v___x_1337_, 1);
v___x_1356_ = lean_box(0);
v___x_1357_ = l_Std_Mutex_atomically___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_close_spec__1___redArg___lam__0(v_mutex_1335_, v___x_1356_);
lean_dec(v_mutex_1335_);
v_isSharedCheck_1364_ = !lean_is_exclusive(v___x_1357_);
if (v_isSharedCheck_1364_ == 0)
{
lean_object* v_unused_1365_; 
v_unused_1365_ = lean_ctor_get(v___x_1357_, 0);
lean_dec(v_unused_1365_);
v___x_1359_ = v___x_1357_;
v_isShared_1360_ = v_isSharedCheck_1364_;
goto v_resetjp_1358_;
}
else
{
lean_dec(v___x_1357_);
v___x_1359_ = lean_box(0);
v_isShared_1360_ = v_isSharedCheck_1364_;
goto v_resetjp_1358_;
}
v_resetjp_1358_:
{
lean_object* v___x_1362_; 
if (v_isShared_1360_ == 0)
{
lean_ctor_set_tag(v___x_1359_, 1);
lean_ctor_set(v___x_1359_, 0, v_a_1355_);
v___x_1362_ = v___x_1359_;
goto v_reusejp_1361_;
}
else
{
lean_object* v_reuseFailAlloc_1363_; 
v_reuseFailAlloc_1363_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1363_, 0, v_a_1355_);
v___x_1362_ = v_reuseFailAlloc_1363_;
goto v_reusejp_1361_;
}
v_reusejp_1361_:
{
return v___x_1362_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_close_spec__1___redArg___boxed(lean_object* v_mutex_1366_, lean_object* v_k_1367_, lean_object* v___y_1368_){
_start:
{
lean_object* v_res_1369_; 
v_res_1369_ = l_Std_Mutex_atomically___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_close_spec__1___redArg(v_mutex_1366_, v_k_1367_);
return v_res_1369_;
}
}
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_close_spec__1(lean_object* v_00_u03b1_1370_, lean_object* v_00_u03b2_1371_, lean_object* v_mutex_1372_, lean_object* v_k_1373_){
_start:
{
lean_object* v___x_1375_; 
v___x_1375_ = l_Std_Mutex_atomically___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_close_spec__1___redArg(v_mutex_1372_, v_k_1373_);
return v___x_1375_;
}
}
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_close_spec__1___boxed(lean_object* v_00_u03b1_1376_, lean_object* v_00_u03b2_1377_, lean_object* v_mutex_1378_, lean_object* v_k_1379_, lean_object* v___y_1380_){
_start:
{
lean_object* v_res_1381_; 
v_res_1381_ = l_Std_Mutex_atomically___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_close_spec__1(v_00_u03b1_1376_, v_00_u03b2_1377_, v_mutex_1378_, v_k_1379_);
return v_res_1381_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_close_spec__0___redArg(uint8_t v___x_1382_, lean_object* v_as_1383_, size_t v_sz_1384_, size_t v_i_1385_, lean_object* v_b_1386_){
_start:
{
uint8_t v___x_1388_; 
v___x_1388_ = lean_usize_dec_lt(v_i_1385_, v_sz_1384_);
if (v___x_1388_ == 0)
{
lean_object* v___x_1389_; 
v___x_1389_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1389_, 0, v_b_1386_);
return v___x_1389_;
}
else
{
lean_object* v___x_1390_; lean_object* v_a_1391_; lean_object* v___x_1392_; size_t v___x_1393_; size_t v___x_1394_; 
v___x_1390_ = lean_box(0);
v_a_1391_ = lean_array_uget_borrowed(v_as_1383_, v_i_1385_);
v___x_1392_ = l___private_Std_Sync_Broadcast_0__Std_Broadcast_Consumer_resolve___redArg(v_a_1391_, v___x_1382_);
v___x_1393_ = ((size_t)1ULL);
v___x_1394_ = lean_usize_add(v_i_1385_, v___x_1393_);
v_i_1385_ = v___x_1394_;
v_b_1386_ = v___x_1390_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_close_spec__0___redArg___boxed(lean_object* v___x_1396_, lean_object* v_as_1397_, lean_object* v_sz_1398_, lean_object* v_i_1399_, lean_object* v_b_1400_, lean_object* v___y_1401_){
_start:
{
uint8_t v___x_4104__boxed_1402_; size_t v_sz_boxed_1403_; size_t v_i_boxed_1404_; lean_object* v_res_1405_; 
v___x_4104__boxed_1402_ = lean_unbox(v___x_1396_);
v_sz_boxed_1403_ = lean_unbox_usize(v_sz_1398_);
lean_dec(v_sz_1398_);
v_i_boxed_1404_ = lean_unbox_usize(v_i_1399_);
lean_dec(v_i_1399_);
v_res_1405_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_close_spec__0___redArg(v___x_4104__boxed_1402_, v_as_1397_, v_sz_boxed_1403_, v_i_boxed_1404_, v_b_1400_);
lean_dec_ref(v_as_1397_);
return v_res_1405_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_close___redArg___lam__0(lean_object* v___y_1406_){
_start:
{
lean_object* v___x_1408_; uint8_t v_closed_1409_; 
v___x_1408_ = lean_st_ref_get(v___y_1406_);
v_closed_1409_ = lean_ctor_get_uint8(v___x_1408_, sizeof(void*)*10);
if (v_closed_1409_ == 0)
{
lean_object* v_producers_1410_; lean_object* v_waiters_1411_; lean_object* v_capacity_1412_; lean_object* v_size_1413_; lean_object* v_buffer_1414_; lean_object* v_write_1415_; lean_object* v_read_1416_; lean_object* v_receivers_1417_; lean_object* v_nextId_1418_; lean_object* v_pos_1419_; lean_object* v___x_1421_; uint8_t v_isShared_1422_; uint8_t v_isSharedCheck_1442_; 
v_producers_1410_ = lean_ctor_get(v___x_1408_, 0);
v_waiters_1411_ = lean_ctor_get(v___x_1408_, 1);
v_capacity_1412_ = lean_ctor_get(v___x_1408_, 2);
v_size_1413_ = lean_ctor_get(v___x_1408_, 3);
v_buffer_1414_ = lean_ctor_get(v___x_1408_, 4);
v_write_1415_ = lean_ctor_get(v___x_1408_, 5);
v_read_1416_ = lean_ctor_get(v___x_1408_, 6);
v_receivers_1417_ = lean_ctor_get(v___x_1408_, 7);
v_nextId_1418_ = lean_ctor_get(v___x_1408_, 8);
v_pos_1419_ = lean_ctor_get(v___x_1408_, 9);
v_isSharedCheck_1442_ = !lean_is_exclusive(v___x_1408_);
if (v_isSharedCheck_1442_ == 0)
{
v___x_1421_ = v___x_1408_;
v_isShared_1422_ = v_isSharedCheck_1442_;
goto v_resetjp_1420_;
}
else
{
lean_inc(v_pos_1419_);
lean_inc(v_nextId_1418_);
lean_inc(v_receivers_1417_);
lean_inc(v_read_1416_);
lean_inc(v_write_1415_);
lean_inc(v_buffer_1414_);
lean_inc(v_size_1413_);
lean_inc(v_capacity_1412_);
lean_inc(v_waiters_1411_);
lean_inc(v_producers_1410_);
lean_dec(v___x_1408_);
v___x_1421_ = lean_box(0);
v_isShared_1422_ = v_isSharedCheck_1442_;
goto v_resetjp_1420_;
}
v_resetjp_1420_:
{
lean_object* v___x_1423_; lean_object* v___x_1424_; size_t v_sz_1425_; size_t v___x_1426_; lean_object* v___x_1427_; 
v___x_1423_ = l_Std_Queue_toArray___redArg(v_waiters_1411_);
v___x_1424_ = lean_box(0);
v_sz_1425_ = lean_array_size(v___x_1423_);
v___x_1426_ = ((size_t)0ULL);
v___x_1427_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_close_spec__0___redArg(v_closed_1409_, v___x_1423_, v_sz_1425_, v___x_1426_, v___x_1424_);
lean_dec_ref(v___x_1423_);
if (lean_obj_tag(v___x_1427_) == 0)
{
lean_object* v___x_1429_; uint8_t v_isShared_1430_; uint8_t v_isSharedCheck_1440_; 
v_isSharedCheck_1440_ = !lean_is_exclusive(v___x_1427_);
if (v_isSharedCheck_1440_ == 0)
{
lean_object* v_unused_1441_; 
v_unused_1441_ = lean_ctor_get(v___x_1427_, 0);
lean_dec(v_unused_1441_);
v___x_1429_ = v___x_1427_;
v_isShared_1430_ = v_isSharedCheck_1440_;
goto v_resetjp_1428_;
}
else
{
lean_dec(v___x_1427_);
v___x_1429_ = lean_box(0);
v_isShared_1430_ = v_isSharedCheck_1440_;
goto v_resetjp_1428_;
}
v_resetjp_1428_:
{
lean_object* v___x_1431_; uint8_t v___x_1432_; lean_object* v___x_1434_; 
v___x_1431_ = lean_obj_once(&l___private_Std_Sync_Broadcast_0__Std_Bounded_new___redArg___closed__2, &l___private_Std_Sync_Broadcast_0__Std_Bounded_new___redArg___closed__2_once, _init_l___private_Std_Sync_Broadcast_0__Std_Bounded_new___redArg___closed__2);
v___x_1432_ = 1;
if (v_isShared_1422_ == 0)
{
lean_ctor_set(v___x_1421_, 1, v___x_1431_);
v___x_1434_ = v___x_1421_;
goto v_reusejp_1433_;
}
else
{
lean_object* v_reuseFailAlloc_1439_; 
v_reuseFailAlloc_1439_ = lean_alloc_ctor(0, 10, 1);
lean_ctor_set(v_reuseFailAlloc_1439_, 0, v_producers_1410_);
lean_ctor_set(v_reuseFailAlloc_1439_, 1, v___x_1431_);
lean_ctor_set(v_reuseFailAlloc_1439_, 2, v_capacity_1412_);
lean_ctor_set(v_reuseFailAlloc_1439_, 3, v_size_1413_);
lean_ctor_set(v_reuseFailAlloc_1439_, 4, v_buffer_1414_);
lean_ctor_set(v_reuseFailAlloc_1439_, 5, v_write_1415_);
lean_ctor_set(v_reuseFailAlloc_1439_, 6, v_read_1416_);
lean_ctor_set(v_reuseFailAlloc_1439_, 7, v_receivers_1417_);
lean_ctor_set(v_reuseFailAlloc_1439_, 8, v_nextId_1418_);
lean_ctor_set(v_reuseFailAlloc_1439_, 9, v_pos_1419_);
v___x_1434_ = v_reuseFailAlloc_1439_;
goto v_reusejp_1433_;
}
v_reusejp_1433_:
{
lean_object* v___x_1435_; lean_object* v___x_1437_; 
lean_ctor_set_uint8(v___x_1434_, sizeof(void*)*10, v___x_1432_);
v___x_1435_ = lean_st_ref_swap(v___y_1406_, v___x_1434_);
lean_dec(v___x_1435_);
if (v_isShared_1430_ == 0)
{
lean_ctor_set(v___x_1429_, 0, v___x_1424_);
v___x_1437_ = v___x_1429_;
goto v_reusejp_1436_;
}
else
{
lean_object* v_reuseFailAlloc_1438_; 
v_reuseFailAlloc_1438_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1438_, 0, v___x_1424_);
v___x_1437_ = v_reuseFailAlloc_1438_;
goto v_reusejp_1436_;
}
v_reusejp_1436_:
{
return v___x_1437_;
}
}
}
}
else
{
lean_del_object(v___x_1421_);
lean_dec(v_pos_1419_);
lean_dec(v_nextId_1418_);
lean_dec(v_receivers_1417_);
lean_dec(v_read_1416_);
lean_dec(v_write_1415_);
lean_dec_ref(v_buffer_1414_);
lean_dec(v_size_1413_);
lean_dec(v_capacity_1412_);
lean_dec_ref(v_producers_1410_);
return v___x_1427_;
}
}
}
else
{
uint8_t v___x_1443_; lean_object* v___x_1444_; lean_object* v___x_1445_; 
lean_dec(v___x_1408_);
v___x_1443_ = 1;
v___x_1444_ = lean_box(v___x_1443_);
v___x_1445_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1445_, 0, v___x_1444_);
return v___x_1445_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_close___redArg___lam__0___boxed(lean_object* v___y_1446_, lean_object* v___y_1447_){
_start:
{
lean_object* v_res_1448_; 
v_res_1448_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_close___redArg___lam__0(v___y_1446_);
lean_dec(v___y_1446_);
return v_res_1448_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_close___redArg(lean_object* v_ch_1450_){
_start:
{
lean_object* v___f_1452_; lean_object* v___x_1453_; 
v___f_1452_ = ((lean_object*)(l___private_Std_Sync_Broadcast_0__Std_Bounded_close___redArg___closed__0));
v___x_1453_ = l_Std_Mutex_atomically___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_close_spec__1___redArg(v_ch_1450_, v___f_1452_);
return v___x_1453_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_close___redArg___boxed(lean_object* v_ch_1454_, lean_object* v___y_1455_){
_start:
{
lean_object* v_res_1456_; 
v_res_1456_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_close___redArg(v_ch_1454_);
return v_res_1456_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_close(lean_object* v_00_u03b1_1457_, lean_object* v_ch_1458_){
_start:
{
lean_object* v___x_1460_; 
v___x_1460_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_close___redArg(v_ch_1458_);
return v___x_1460_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_close___boxed(lean_object* v_00_u03b1_1461_, lean_object* v_ch_1462_, lean_object* v___y_1463_){
_start:
{
lean_object* v_res_1464_; 
v_res_1464_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_close(v_00_u03b1_1461_, v_ch_1462_);
return v_res_1464_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_close_spec__0(lean_object* v_00_u03b1_1465_, uint8_t v___x_1466_, lean_object* v_as_1467_, size_t v_sz_1468_, size_t v_i_1469_, lean_object* v_b_1470_, lean_object* v___y_1471_){
_start:
{
lean_object* v___x_1473_; 
v___x_1473_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_close_spec__0___redArg(v___x_1466_, v_as_1467_, v_sz_1468_, v_i_1469_, v_b_1470_);
return v___x_1473_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_close_spec__0___boxed(lean_object* v_00_u03b1_1474_, lean_object* v___x_1475_, lean_object* v_as_1476_, lean_object* v_sz_1477_, lean_object* v_i_1478_, lean_object* v_b_1479_, lean_object* v___y_1480_, lean_object* v___y_1481_){
_start:
{
uint8_t v___x_4200__boxed_1482_; size_t v_sz_boxed_1483_; size_t v_i_boxed_1484_; lean_object* v_res_1485_; 
v___x_4200__boxed_1482_ = lean_unbox(v___x_1475_);
v_sz_boxed_1483_ = lean_unbox_usize(v_sz_1477_);
lean_dec(v_sz_1477_);
v_i_boxed_1484_ = lean_unbox_usize(v_i_1478_);
lean_dec(v_i_1478_);
v_res_1485_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_close_spec__0(v_00_u03b1_1474_, v___x_4200__boxed_1482_, v_as_1476_, v_sz_boxed_1483_, v_i_boxed_1484_, v_b_1479_, v___y_1480_);
lean_dec(v___y_1480_);
lean_dec_ref(v_as_1476_);
return v_res_1485_;
}
}
LEAN_EXPORT uint8_t l___private_Std_Sync_Broadcast_0__Std_Bounded_isClosed___redArg___lam__0(lean_object* v___y_1486_){
_start:
{
lean_object* v___x_1488_; uint8_t v_closed_1489_; 
v___x_1488_ = lean_st_ref_get(v___y_1486_);
v_closed_1489_ = lean_ctor_get_uint8(v___x_1488_, sizeof(void*)*10);
lean_dec(v___x_1488_);
return v_closed_1489_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_isClosed___redArg___lam__0___boxed(lean_object* v___y_1490_, lean_object* v___y_1491_){
_start:
{
uint8_t v_res_1492_; lean_object* v_r_1493_; 
v_res_1492_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_isClosed___redArg___lam__0(v___y_1490_);
lean_dec(v___y_1490_);
v_r_1493_ = lean_box(v_res_1492_);
return v_r_1493_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_isClosed___redArg(lean_object* v_ch_1495_){
_start:
{
lean_object* v___f_1497_; lean_object* v___x_1498_; 
v___f_1497_ = ((lean_object*)(l___private_Std_Sync_Broadcast_0__Std_Bounded_isClosed___redArg___closed__0));
v___x_1498_ = l_Std_Mutex_atomically___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_trySend_spec__0___redArg(v_ch_1495_, v___f_1497_);
return v___x_1498_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_isClosed___redArg___boxed(lean_object* v_ch_1499_, lean_object* v___y_1500_){
_start:
{
lean_object* v_res_1501_; 
v_res_1501_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_isClosed___redArg(v_ch_1499_);
return v_res_1501_;
}
}
LEAN_EXPORT uint8_t l___private_Std_Sync_Broadcast_0__Std_Bounded_isClosed(lean_object* v_00_u03b1_1502_, lean_object* v_ch_1503_){
_start:
{
lean_object* v___x_1505_; uint8_t v___x_1506_; 
v___x_1505_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_isClosed___redArg(v_ch_1503_);
v___x_1506_ = lean_unbox(v___x_1505_);
lean_dec(v___x_1505_);
return v___x_1506_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_isClosed___boxed(lean_object* v_00_u03b1_1507_, lean_object* v_ch_1508_, lean_object* v___y_1509_){
_start:
{
uint8_t v_res_1510_; lean_object* v_r_1511_; 
v_res_1510_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_isClosed(v_00_u03b1_1507_, v_ch_1508_);
v_r_1511_ = lean_box(v_res_1510_);
return v_r_1511_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getSlotValue___redArg___lam__0(lean_object* v_next_1512_, lean_object* v_slot_1513_){
_start:
{
lean_object* v_value_1514_; lean_object* v_pos_1515_; lean_object* v_remaining_1516_; uint8_t v___x_1517_; 
v_value_1514_ = lean_ctor_get(v_slot_1513_, 0);
v_pos_1515_ = lean_ctor_get(v_slot_1513_, 1);
v_remaining_1516_ = lean_ctor_get(v_slot_1513_, 2);
v___x_1517_ = lean_nat_dec_eq(v_next_1512_, v_pos_1515_);
if (v___x_1517_ == 0)
{
lean_object* v___x_1518_; lean_object* v___x_1519_; lean_object* v___x_1520_; lean_object* v___x_1521_; 
v___x_1518_ = lean_box(0);
v___x_1519_ = lean_box(v___x_1517_);
v___x_1520_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1520_, 0, v___x_1518_);
lean_ctor_set(v___x_1520_, 1, v___x_1519_);
v___x_1521_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1521_, 0, v___x_1520_);
lean_ctor_set(v___x_1521_, 1, v_slot_1513_);
return v___x_1521_;
}
else
{
lean_object* v___x_1523_; uint8_t v_isShared_1524_; uint8_t v_isSharedCheck_1542_; 
lean_inc(v_remaining_1516_);
lean_inc(v_pos_1515_);
lean_inc(v_value_1514_);
v_isSharedCheck_1542_ = !lean_is_exclusive(v_slot_1513_);
if (v_isSharedCheck_1542_ == 0)
{
lean_object* v_unused_1543_; lean_object* v_unused_1544_; lean_object* v_unused_1545_; 
v_unused_1543_ = lean_ctor_get(v_slot_1513_, 2);
lean_dec(v_unused_1543_);
v_unused_1544_ = lean_ctor_get(v_slot_1513_, 1);
lean_dec(v_unused_1544_);
v_unused_1545_ = lean_ctor_get(v_slot_1513_, 0);
lean_dec(v_unused_1545_);
v___x_1523_ = v_slot_1513_;
v_isShared_1524_ = v_isSharedCheck_1542_;
goto v_resetjp_1522_;
}
else
{
lean_dec(v_slot_1513_);
v___x_1523_ = lean_box(0);
v_isShared_1524_ = v_isSharedCheck_1542_;
goto v_resetjp_1522_;
}
v_resetjp_1522_:
{
lean_object* v___x_1525_; uint8_t v___x_1526_; 
v___x_1525_ = lean_unsigned_to_nat(1u);
v___x_1526_ = lean_nat_dec_eq(v_remaining_1516_, v___x_1525_);
if (v___x_1526_ == 0)
{
lean_object* v___x_1527_; lean_object* v___x_1528_; lean_object* v___x_1529_; lean_object* v___x_1531_; 
v___x_1527_ = lean_box(v___x_1526_);
lean_inc(v_value_1514_);
v___x_1528_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1528_, 0, v_value_1514_);
lean_ctor_set(v___x_1528_, 1, v___x_1527_);
v___x_1529_ = lean_nat_sub(v_remaining_1516_, v___x_1525_);
lean_dec(v_remaining_1516_);
if (v_isShared_1524_ == 0)
{
lean_ctor_set(v___x_1523_, 2, v___x_1529_);
v___x_1531_ = v___x_1523_;
goto v_reusejp_1530_;
}
else
{
lean_object* v_reuseFailAlloc_1533_; 
v_reuseFailAlloc_1533_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1533_, 0, v_value_1514_);
lean_ctor_set(v_reuseFailAlloc_1533_, 1, v_pos_1515_);
lean_ctor_set(v_reuseFailAlloc_1533_, 2, v___x_1529_);
v___x_1531_ = v_reuseFailAlloc_1533_;
goto v_reusejp_1530_;
}
v_reusejp_1530_:
{
lean_object* v___x_1532_; 
v___x_1532_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1532_, 0, v___x_1528_);
lean_ctor_set(v___x_1532_, 1, v___x_1531_);
return v___x_1532_;
}
}
else
{
lean_object* v___x_1534_; lean_object* v___x_1535_; lean_object* v___x_1536_; lean_object* v___x_1537_; lean_object* v___x_1539_; 
lean_dec(v_remaining_1516_);
v___x_1534_ = lean_box(v___x_1517_);
v___x_1535_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1535_, 0, v_value_1514_);
lean_ctor_set(v___x_1535_, 1, v___x_1534_);
v___x_1536_ = lean_box(0);
v___x_1537_ = lean_unsigned_to_nat(0u);
if (v_isShared_1524_ == 0)
{
lean_ctor_set(v___x_1523_, 2, v___x_1537_);
lean_ctor_set(v___x_1523_, 0, v___x_1536_);
v___x_1539_ = v___x_1523_;
goto v_reusejp_1538_;
}
else
{
lean_object* v_reuseFailAlloc_1541_; 
v_reuseFailAlloc_1541_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1541_, 0, v___x_1536_);
lean_ctor_set(v_reuseFailAlloc_1541_, 1, v_pos_1515_);
lean_ctor_set(v_reuseFailAlloc_1541_, 2, v___x_1537_);
v___x_1539_ = v_reuseFailAlloc_1541_;
goto v_reusejp_1538_;
}
v_reusejp_1538_:
{
lean_object* v___x_1540_; 
v___x_1540_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1540_, 0, v___x_1535_);
lean_ctor_set(v___x_1540_, 1, v___x_1539_);
return v___x_1540_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getSlotValue___redArg___lam__0___boxed(lean_object* v_next_1546_, lean_object* v_slot_1547_){
_start:
{
lean_object* v_res_1548_; 
v_res_1548_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getSlotValue___redArg___lam__0(v_next_1546_, v_slot_1547_);
lean_dec(v_next_1546_);
return v_res_1548_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getSlotValue___redArg(lean_object* v_inst_1549_, lean_object* v_slot_1550_, lean_object* v_next_1551_){
_start:
{
lean_object* v___f_1552_; lean_object* v___x_1553_; lean_object* v___x_1554_; 
v___f_1552_ = lean_alloc_closure((void*)(l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getSlotValue___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_1552_, 0, v_next_1551_);
v___x_1553_ = lean_alloc_closure((void*)(l_ST_Prim_Ref_modifyGetUnsafe___boxed), 6, 5);
lean_closure_set(v___x_1553_, 0, lean_box(0));
lean_closure_set(v___x_1553_, 1, lean_box(0));
lean_closure_set(v___x_1553_, 2, lean_box(0));
lean_closure_set(v___x_1553_, 3, v_slot_1550_);
lean_closure_set(v___x_1553_, 4, v___f_1552_);
v___x_1554_ = lean_apply_2(v_inst_1549_, lean_box(0), v___x_1553_);
return v___x_1554_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getSlotValue(lean_object* v_m_1555_, lean_object* v_00_u03b1_1556_, lean_object* v_inst_1557_, lean_object* v_inst_1558_, lean_object* v_slot_1559_, lean_object* v_next_1560_, lean_object* v___y_1561_){
_start:
{
lean_object* v___x_1562_; 
v___x_1562_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getSlotValue___redArg(v_inst_1558_, v_slot_1559_, v_next_1560_);
return v___x_1562_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getSlotValue___boxed(lean_object* v_m_1563_, lean_object* v_00_u03b1_1564_, lean_object* v_inst_1565_, lean_object* v_inst_1566_, lean_object* v_slot_1567_, lean_object* v_next_1568_, lean_object* v___y_1569_){
_start:
{
lean_object* v_res_1570_; 
v_res_1570_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getSlotValue(v_m_1563_, v_00_u03b1_1564_, v_inst_1565_, v_inst_1566_, v_slot_1567_, v_next_1568_, v___y_1569_);
lean_dec(v___y_1569_);
lean_dec_ref(v_inst_1565_);
return v_res_1570_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___redArg___lam__0(lean_object* v_toApplicative_1571_, lean_object* v_fst_1572_, lean_object* v_a_1573_){
_start:
{
lean_object* v_toPure_1574_; lean_object* v___x_1575_; 
v_toPure_1574_ = lean_ctor_get(v_toApplicative_1571_, 1);
lean_inc(v_toPure_1574_);
lean_dec_ref(v_toApplicative_1571_);
v___x_1575_ = lean_apply_2(v_toPure_1574_, lean_box(0), v_fst_1572_);
return v___x_1575_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___redArg___lam__1(lean_object* v_inst_1576_, lean_object* v_toBind_1577_, lean_object* v___f_1578_, lean_object* v_____r_1579_, lean_object* v_st_1580_, lean_object* v___y_1581_){
_start:
{
lean_object* v___x_1582_; lean_object* v___x_1583_; lean_object* v___x_1584_; 
lean_inc(v___y_1581_);
v___x_1582_ = lean_alloc_closure((void*)(l_ST_Prim_Ref_set___boxed), 5, 4);
lean_closure_set(v___x_1582_, 0, lean_box(0));
lean_closure_set(v___x_1582_, 1, lean_box(0));
lean_closure_set(v___x_1582_, 2, v___y_1581_);
lean_closure_set(v___x_1582_, 3, v_st_1580_);
v___x_1583_ = lean_apply_2(v_inst_1576_, lean_box(0), v___x_1582_);
v___x_1584_ = lean_apply_4(v_toBind_1577_, lean_box(0), lean_box(0), v___x_1583_, v___f_1578_);
return v___x_1584_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___redArg___lam__1___boxed(lean_object* v_inst_1585_, lean_object* v_toBind_1586_, lean_object* v___f_1587_, lean_object* v_____r_1588_, lean_object* v_st_1589_, lean_object* v___y_1590_){
_start:
{
lean_object* v_res_1591_; 
v_res_1591_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___redArg___lam__1(v_inst_1585_, v_toBind_1586_, v___f_1587_, v_____r_1588_, v_st_1589_, v___y_1590_);
lean_dec(v___y_1590_);
return v_res_1591_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___redArg___lam__2(lean_object* v_snd_1592_, lean_object* v_waiters_1593_, lean_object* v_capacity_1594_, lean_object* v_size_1595_, lean_object* v_buffer_1596_, lean_object* v_write_1597_, lean_object* v_read_1598_, lean_object* v_receivers_1599_, lean_object* v_nextId_1600_, uint8_t v_closed_1601_, lean_object* v_pos_1602_, lean_object* v___f_1603_, lean_object* v___y_1604_, lean_object* v_a_1605_){
_start:
{
lean_object* v___x_1606_; lean_object* v___x_1607_; lean_object* v___x_1608_; 
v___x_1606_ = lean_alloc_ctor(0, 10, 1);
lean_ctor_set(v___x_1606_, 0, v_snd_1592_);
lean_ctor_set(v___x_1606_, 1, v_waiters_1593_);
lean_ctor_set(v___x_1606_, 2, v_capacity_1594_);
lean_ctor_set(v___x_1606_, 3, v_size_1595_);
lean_ctor_set(v___x_1606_, 4, v_buffer_1596_);
lean_ctor_set(v___x_1606_, 5, v_write_1597_);
lean_ctor_set(v___x_1606_, 6, v_read_1598_);
lean_ctor_set(v___x_1606_, 7, v_receivers_1599_);
lean_ctor_set(v___x_1606_, 8, v_nextId_1600_);
lean_ctor_set(v___x_1606_, 9, v_pos_1602_);
lean_ctor_set_uint8(v___x_1606_, sizeof(void*)*10, v_closed_1601_);
v___x_1607_ = lean_box(0);
lean_inc(v___y_1604_);
v___x_1608_ = lean_apply_3(v___f_1603_, v___x_1607_, v___x_1606_, v___y_1604_);
return v___x_1608_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___redArg___lam__2___boxed(lean_object* v_snd_1609_, lean_object* v_waiters_1610_, lean_object* v_capacity_1611_, lean_object* v_size_1612_, lean_object* v_buffer_1613_, lean_object* v_write_1614_, lean_object* v_read_1615_, lean_object* v_receivers_1616_, lean_object* v_nextId_1617_, lean_object* v_closed_1618_, lean_object* v_pos_1619_, lean_object* v___f_1620_, lean_object* v___y_1621_, lean_object* v_a_1622_){
_start:
{
uint8_t v_closed_boxed_1623_; lean_object* v_res_1624_; 
v_closed_boxed_1623_ = lean_unbox(v_closed_1618_);
v_res_1624_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___redArg___lam__2(v_snd_1609_, v_waiters_1610_, v_capacity_1611_, v_size_1612_, v_buffer_1613_, v_write_1614_, v_read_1615_, v_receivers_1616_, v_nextId_1617_, v_closed_boxed_1623_, v_pos_1619_, v___f_1620_, v___y_1621_, v_a_1622_);
lean_dec(v___y_1621_);
return v_res_1624_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___redArg___lam__3(lean_object* v_toApplicative_1625_, lean_object* v_inst_1626_, lean_object* v_toBind_1627_, lean_object* v_a_1628_, lean_object* v___y_1629_, uint8_t v___x_1630_, lean_object* v_inst_1631_, lean_object* v_a_1632_){
_start:
{
lean_object* v_fst_1633_; 
v_fst_1633_ = lean_ctor_get(v_a_1632_, 0);
lean_inc(v_fst_1633_);
if (lean_obj_tag(v_fst_1633_) == 1)
{
lean_object* v_snd_1634_; lean_object* v___f_1635_; lean_object* v___f_1636_; uint8_t v___x_1637_; 
v_snd_1634_ = lean_ctor_get(v_a_1632_, 1);
lean_inc(v_snd_1634_);
lean_dec_ref(v_a_1632_);
v___f_1635_ = lean_alloc_closure((void*)(l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___redArg___lam__0), 3, 2);
lean_closure_set(v___f_1635_, 0, v_toApplicative_1625_);
lean_closure_set(v___f_1635_, 1, v_fst_1633_);
lean_inc_ref(v___f_1635_);
lean_inc(v_toBind_1627_);
lean_inc(v_inst_1626_);
v___f_1636_ = lean_alloc_closure((void*)(l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___redArg___lam__1___boxed), 6, 3);
lean_closure_set(v___f_1636_, 0, v_inst_1626_);
lean_closure_set(v___f_1636_, 1, v_toBind_1627_);
lean_closure_set(v___f_1636_, 2, v___f_1635_);
v___x_1637_ = lean_unbox(v_snd_1634_);
lean_dec(v_snd_1634_);
if (v___x_1637_ == 0)
{
lean_object* v___x_1638_; lean_object* v___x_1639_; 
lean_dec_ref(v___f_1636_);
lean_dec(v_inst_1631_);
v___x_1638_ = lean_box(0);
v___x_1639_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___redArg___lam__1(v_inst_1626_, v_toBind_1627_, v___f_1635_, v___x_1638_, v_a_1628_, v___y_1629_);
return v___x_1639_;
}
else
{
lean_object* v___x_1640_; lean_object* v_producers_1641_; lean_object* v_waiters_1642_; lean_object* v_capacity_1643_; lean_object* v_size_1644_; lean_object* v_buffer_1645_; lean_object* v_write_1646_; lean_object* v_read_1647_; lean_object* v_receivers_1648_; lean_object* v_nextId_1649_; uint8_t v_closed_1650_; lean_object* v_pos_1651_; lean_object* v___x_1652_; 
v___x_1640_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_dequeue___redArg(v_a_1628_);
v_producers_1641_ = lean_ctor_get(v___x_1640_, 0);
lean_inc_ref(v_producers_1641_);
v_waiters_1642_ = lean_ctor_get(v___x_1640_, 1);
lean_inc_ref(v_waiters_1642_);
v_capacity_1643_ = lean_ctor_get(v___x_1640_, 2);
lean_inc(v_capacity_1643_);
v_size_1644_ = lean_ctor_get(v___x_1640_, 3);
lean_inc(v_size_1644_);
v_buffer_1645_ = lean_ctor_get(v___x_1640_, 4);
lean_inc_ref(v_buffer_1645_);
v_write_1646_ = lean_ctor_get(v___x_1640_, 5);
lean_inc(v_write_1646_);
v_read_1647_ = lean_ctor_get(v___x_1640_, 6);
lean_inc(v_read_1647_);
v_receivers_1648_ = lean_ctor_get(v___x_1640_, 7);
lean_inc(v_receivers_1648_);
v_nextId_1649_ = lean_ctor_get(v___x_1640_, 8);
lean_inc(v_nextId_1649_);
v_closed_1650_ = lean_ctor_get_uint8(v___x_1640_, sizeof(void*)*10);
v_pos_1651_ = lean_ctor_get(v___x_1640_, 9);
lean_inc(v_pos_1651_);
v___x_1652_ = l_Std_Queue_dequeue_x3f___redArg(v_producers_1641_);
if (lean_obj_tag(v___x_1652_) == 1)
{
lean_object* v_val_1653_; lean_object* v_fst_1654_; lean_object* v_snd_1655_; lean_object* v___x_1656_; lean_object* v___f_1657_; lean_object* v___x_1658_; lean_object* v___x_1659_; lean_object* v___x_1660_; lean_object* v___x_1661_; 
lean_dec_ref(v___x_1640_);
lean_dec_ref(v___f_1635_);
lean_dec(v_inst_1626_);
v_val_1653_ = lean_ctor_get(v___x_1652_, 0);
lean_inc(v_val_1653_);
lean_dec_ref_known(v___x_1652_, 1);
v_fst_1654_ = lean_ctor_get(v_val_1653_, 0);
lean_inc(v_fst_1654_);
v_snd_1655_ = lean_ctor_get(v_val_1653_, 1);
lean_inc(v_snd_1655_);
lean_dec(v_val_1653_);
v___x_1656_ = lean_box(v_closed_1650_);
lean_inc(v___y_1629_);
v___f_1657_ = lean_alloc_closure((void*)(l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___redArg___lam__2___boxed), 14, 13);
lean_closure_set(v___f_1657_, 0, v_snd_1655_);
lean_closure_set(v___f_1657_, 1, v_waiters_1642_);
lean_closure_set(v___f_1657_, 2, v_capacity_1643_);
lean_closure_set(v___f_1657_, 3, v_size_1644_);
lean_closure_set(v___f_1657_, 4, v_buffer_1645_);
lean_closure_set(v___f_1657_, 5, v_write_1646_);
lean_closure_set(v___f_1657_, 6, v_read_1647_);
lean_closure_set(v___f_1657_, 7, v_receivers_1648_);
lean_closure_set(v___f_1657_, 8, v_nextId_1649_);
lean_closure_set(v___f_1657_, 9, v___x_1656_);
lean_closure_set(v___f_1657_, 10, v_pos_1651_);
lean_closure_set(v___f_1657_, 11, v___f_1636_);
lean_closure_set(v___f_1657_, 12, v___y_1629_);
v___x_1658_ = lean_box(v___x_1630_);
v___x_1659_ = lean_alloc_closure((void*)(l_IO_Promise_resolve___boxed), 4, 3);
lean_closure_set(v___x_1659_, 0, lean_box(0));
lean_closure_set(v___x_1659_, 1, v___x_1658_);
lean_closure_set(v___x_1659_, 2, v_fst_1654_);
v___x_1660_ = lean_apply_2(v_inst_1631_, lean_box(0), v___x_1659_);
v___x_1661_ = lean_apply_4(v_toBind_1627_, lean_box(0), lean_box(0), v___x_1660_, v___f_1657_);
return v___x_1661_;
}
else
{
lean_object* v___x_1662_; lean_object* v___x_1663_; 
lean_dec(v___x_1652_);
lean_dec(v_pos_1651_);
lean_dec(v_nextId_1649_);
lean_dec(v_receivers_1648_);
lean_dec(v_read_1647_);
lean_dec(v_write_1646_);
lean_dec_ref(v_buffer_1645_);
lean_dec(v_size_1644_);
lean_dec(v_capacity_1643_);
lean_dec_ref(v_waiters_1642_);
lean_dec_ref(v___f_1636_);
lean_dec(v_inst_1631_);
v___x_1662_ = lean_box(0);
v___x_1663_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___redArg___lam__1(v_inst_1626_, v_toBind_1627_, v___f_1635_, v___x_1662_, v___x_1640_, v___y_1629_);
return v___x_1663_;
}
}
}
else
{
lean_object* v_toPure_1664_; lean_object* v___x_1665_; lean_object* v___x_1666_; 
lean_dec(v_fst_1633_);
lean_dec_ref(v_a_1632_);
lean_dec(v_inst_1631_);
lean_dec_ref(v_a_1628_);
lean_dec(v_toBind_1627_);
lean_dec(v_inst_1626_);
v_toPure_1664_ = lean_ctor_get(v_toApplicative_1625_, 1);
lean_inc(v_toPure_1664_);
lean_dec_ref(v_toApplicative_1625_);
v___x_1665_ = lean_box(0);
v___x_1666_ = lean_apply_2(v_toPure_1664_, lean_box(0), v___x_1665_);
return v___x_1666_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___redArg___lam__3___boxed(lean_object* v_toApplicative_1667_, lean_object* v_inst_1668_, lean_object* v_toBind_1669_, lean_object* v_a_1670_, lean_object* v___y_1671_, lean_object* v___x_1672_, lean_object* v_inst_1673_, lean_object* v_a_1674_){
_start:
{
uint8_t v___x_988__boxed_1675_; lean_object* v_res_1676_; 
v___x_988__boxed_1675_ = lean_unbox(v___x_1672_);
v_res_1676_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___redArg___lam__3(v_toApplicative_1667_, v_inst_1668_, v_toBind_1669_, v_a_1670_, v___y_1671_, v___x_988__boxed_1675_, v_inst_1673_, v_a_1674_);
lean_dec(v___y_1671_);
return v_res_1676_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___redArg___lam__4(lean_object* v_inst_1677_, lean_object* v_next_1678_, lean_object* v_toBind_1679_, lean_object* v___f_1680_, lean_object* v_a_1681_){
_start:
{
lean_object* v___x_1682_; lean_object* v___x_1683_; 
v___x_1682_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getSlotValue___redArg(v_inst_1677_, v_a_1681_, v_next_1678_);
v___x_1683_ = lean_apply_4(v_toBind_1679_, lean_box(0), lean_box(0), v___x_1682_, v___f_1680_);
return v___x_1683_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___redArg___lam__5(lean_object* v_a_1684_, lean_object* v_toApplicative_1685_, lean_object* v_inst_1686_, lean_object* v_toBind_1687_, lean_object* v___y_1688_, lean_object* v_inst_1689_, lean_object* v_next_1690_, lean_object* v_inst_1691_, uint8_t v_a_1692_){
_start:
{
if (v_a_1692_ == 0)
{
lean_object* v_capacity_1693_; uint8_t v___x_1694_; lean_object* v___x_1695_; lean_object* v___f_1696_; lean_object* v___f_1697_; lean_object* v___x_1698_; lean_object* v___x_1699_; lean_object* v___x_1700_; 
v_capacity_1693_ = lean_ctor_get(v_a_1684_, 2);
lean_inc(v_capacity_1693_);
v___x_1694_ = 1;
v___x_1695_ = lean_box(v___x_1694_);
lean_inc(v___y_1688_);
lean_inc_n(v_toBind_1687_, 2);
lean_inc_n(v_inst_1686_, 2);
v___f_1696_ = lean_alloc_closure((void*)(l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___redArg___lam__3___boxed), 8, 7);
lean_closure_set(v___f_1696_, 0, v_toApplicative_1685_);
lean_closure_set(v___f_1696_, 1, v_inst_1686_);
lean_closure_set(v___f_1696_, 2, v_toBind_1687_);
lean_closure_set(v___f_1696_, 3, v_a_1684_);
lean_closure_set(v___f_1696_, 4, v___y_1688_);
lean_closure_set(v___f_1696_, 5, v___x_1695_);
lean_closure_set(v___f_1696_, 6, v_inst_1689_);
lean_inc(v_next_1690_);
v___f_1697_ = lean_alloc_closure((void*)(l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___redArg___lam__4), 5, 4);
lean_closure_set(v___f_1697_, 0, v_inst_1686_);
lean_closure_set(v___f_1697_, 1, v_next_1690_);
lean_closure_set(v___f_1697_, 2, v_toBind_1687_);
lean_closure_set(v___f_1697_, 3, v___f_1696_);
v___x_1698_ = lean_nat_mod(v_next_1690_, v_capacity_1693_);
lean_dec(v_capacity_1693_);
lean_dec(v_next_1690_);
v___x_1699_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_getSlot___redArg(v_inst_1691_, v_inst_1686_, v___x_1698_, v___y_1688_);
v___x_1700_ = lean_apply_4(v_toBind_1687_, lean_box(0), lean_box(0), v___x_1699_, v___f_1697_);
return v___x_1700_;
}
else
{
lean_object* v_toPure_1701_; lean_object* v___x_1702_; lean_object* v___x_1703_; 
lean_dec_ref(v_inst_1691_);
lean_dec(v_next_1690_);
lean_dec(v_inst_1689_);
lean_dec(v_toBind_1687_);
lean_dec(v_inst_1686_);
lean_dec_ref(v_a_1684_);
v_toPure_1701_ = lean_ctor_get(v_toApplicative_1685_, 1);
lean_inc(v_toPure_1701_);
lean_dec_ref(v_toApplicative_1685_);
v___x_1702_ = lean_box(0);
v___x_1703_ = lean_apply_2(v_toPure_1701_, lean_box(0), v___x_1702_);
return v___x_1703_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___redArg___lam__5___boxed(lean_object* v_a_1704_, lean_object* v_toApplicative_1705_, lean_object* v_inst_1706_, lean_object* v_toBind_1707_, lean_object* v___y_1708_, lean_object* v_inst_1709_, lean_object* v_next_1710_, lean_object* v_inst_1711_, lean_object* v_a_1712_){
_start:
{
uint8_t v_a_boxed_1713_; lean_object* v_res_1714_; 
v_a_boxed_1713_ = lean_unbox(v_a_1712_);
v_res_1714_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___redArg___lam__5(v_a_1704_, v_toApplicative_1705_, v_inst_1706_, v_toBind_1707_, v___y_1708_, v_inst_1709_, v_next_1710_, v_inst_1711_, v_a_boxed_1713_);
lean_dec(v___y_1708_);
return v_res_1714_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___redArg___lam__6(lean_object* v_toApplicative_1715_, lean_object* v_inst_1716_, lean_object* v_toBind_1717_, lean_object* v___y_1718_, lean_object* v_inst_1719_, lean_object* v_next_1720_, lean_object* v_inst_1721_, lean_object* v_a_1722_){
_start:
{
lean_object* v___f_1723_; lean_object* v___x_1724_; lean_object* v___x_1725_; 
lean_inc_ref(v_inst_1721_);
lean_inc(v___y_1718_);
lean_inc(v_toBind_1717_);
lean_inc(v_inst_1716_);
v___f_1723_ = lean_alloc_closure((void*)(l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___redArg___lam__5___boxed), 9, 8);
lean_closure_set(v___f_1723_, 0, v_a_1722_);
lean_closure_set(v___f_1723_, 1, v_toApplicative_1715_);
lean_closure_set(v___f_1723_, 2, v_inst_1716_);
lean_closure_set(v___f_1723_, 3, v_toBind_1717_);
lean_closure_set(v___f_1723_, 4, v___y_1718_);
lean_closure_set(v___f_1723_, 5, v_inst_1719_);
lean_closure_set(v___f_1723_, 6, v_next_1720_);
lean_closure_set(v___f_1723_, 7, v_inst_1721_);
v___x_1724_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_isEmpty___redArg(v_inst_1721_, v_inst_1716_, v___y_1718_);
v___x_1725_ = lean_apply_4(v_toBind_1717_, lean_box(0), lean_box(0), v___x_1724_, v___f_1723_);
return v___x_1725_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___redArg___lam__6___boxed(lean_object* v_toApplicative_1726_, lean_object* v_inst_1727_, lean_object* v_toBind_1728_, lean_object* v___y_1729_, lean_object* v_inst_1730_, lean_object* v_next_1731_, lean_object* v_inst_1732_, lean_object* v_a_1733_){
_start:
{
lean_object* v_res_1734_; 
v_res_1734_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___redArg___lam__6(v_toApplicative_1726_, v_inst_1727_, v_toBind_1728_, v___y_1729_, v_inst_1730_, v_next_1731_, v_inst_1732_, v_a_1733_);
lean_dec(v___y_1729_);
return v_res_1734_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___redArg(lean_object* v_inst_1735_, lean_object* v_inst_1736_, lean_object* v_inst_1737_, lean_object* v_next_1738_, lean_object* v___y_1739_){
_start:
{
lean_object* v_toApplicative_1740_; lean_object* v_toBind_1741_; lean_object* v___f_1742_; lean_object* v___x_1743_; lean_object* v___x_1744_; lean_object* v___x_1745_; 
v_toApplicative_1740_ = lean_ctor_get(v_inst_1735_, 0);
lean_inc_ref(v_toApplicative_1740_);
v_toBind_1741_ = lean_ctor_get(v_inst_1735_, 1);
lean_inc_n(v_toBind_1741_, 2);
lean_inc_n(v___y_1739_, 2);
lean_inc(v_inst_1736_);
v___f_1742_ = lean_alloc_closure((void*)(l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___redArg___lam__6___boxed), 8, 7);
lean_closure_set(v___f_1742_, 0, v_toApplicative_1740_);
lean_closure_set(v___f_1742_, 1, v_inst_1736_);
lean_closure_set(v___f_1742_, 2, v_toBind_1741_);
lean_closure_set(v___f_1742_, 3, v___y_1739_);
lean_closure_set(v___f_1742_, 4, v_inst_1737_);
lean_closure_set(v___f_1742_, 5, v_next_1738_);
lean_closure_set(v___f_1742_, 6, v_inst_1735_);
v___x_1743_ = lean_alloc_closure((void*)(l_ST_Prim_Ref_get___boxed), 4, 3);
lean_closure_set(v___x_1743_, 0, lean_box(0));
lean_closure_set(v___x_1743_, 1, lean_box(0));
lean_closure_set(v___x_1743_, 2, v___y_1739_);
v___x_1744_ = lean_apply_2(v_inst_1736_, lean_box(0), v___x_1743_);
v___x_1745_ = lean_apply_4(v_toBind_1741_, lean_box(0), lean_box(0), v___x_1744_, v___f_1742_);
return v___x_1745_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___redArg___boxed(lean_object* v_inst_1746_, lean_object* v_inst_1747_, lean_object* v_inst_1748_, lean_object* v_next_1749_, lean_object* v___y_1750_){
_start:
{
lean_object* v_res_1751_; 
v_res_1751_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___redArg(v_inst_1746_, v_inst_1747_, v_inst_1748_, v_next_1749_, v___y_1750_);
lean_dec(v___y_1750_);
return v_res_1751_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition(lean_object* v_m_1752_, lean_object* v_00_u03b1_1753_, lean_object* v_inst_1754_, lean_object* v_inst_1755_, lean_object* v_inst_1756_, lean_object* v_next_1757_, lean_object* v___y_1758_){
_start:
{
lean_object* v___x_1759_; 
v___x_1759_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___redArg(v_inst_1754_, v_inst_1755_, v_inst_1756_, v_next_1757_, v___y_1758_);
return v___x_1759_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___boxed(lean_object* v_m_1760_, lean_object* v_00_u03b1_1761_, lean_object* v_inst_1762_, lean_object* v_inst_1763_, lean_object* v_inst_1764_, lean_object* v_next_1765_, lean_object* v___y_1766_){
_start:
{
lean_object* v_res_1767_; 
v_res_1767_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition(v_m_1760_, v_00_u03b1_1761_, v_inst_1762_, v_inst_1763_, v_inst_1764_, v_next_1765_, v___y_1766_);
lean_dec(v___y_1766_);
return v_res_1767_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_getSlot___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_unsubscribe_spec__0_spec__1___redArg(lean_object* v_place_1768_, lean_object* v___y_1769_){
_start:
{
lean_object* v___x_1771_; lean_object* v_capacity_1772_; lean_object* v_buffer_1773_; lean_object* v___x_1774_; lean_object* v___x_1775_; lean_object* v___x_1776_; 
v___x_1771_ = lean_st_ref_get(v___y_1769_);
v_capacity_1772_ = lean_ctor_get(v___x_1771_, 2);
lean_inc(v_capacity_1772_);
v_buffer_1773_ = lean_ctor_get(v___x_1771_, 4);
lean_inc_ref(v_buffer_1773_);
lean_dec(v___x_1771_);
v___x_1774_ = lean_nat_mod(v_place_1768_, v_capacity_1772_);
lean_dec(v_capacity_1772_);
v___x_1775_ = lean_array_fget(v_buffer_1773_, v___x_1774_);
lean_dec(v___x_1774_);
lean_dec_ref(v_buffer_1773_);
v___x_1776_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1776_, 0, v___x_1775_);
return v___x_1776_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_getSlot___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_unsubscribe_spec__0_spec__1___redArg___boxed(lean_object* v_place_1777_, lean_object* v___y_1778_, lean_object* v___y_1779_){
_start:
{
lean_object* v_res_1780_; 
v_res_1780_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_getSlot___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_unsubscribe_spec__0_spec__1___redArg(v_place_1777_, v___y_1778_);
lean_dec(v___y_1778_);
lean_dec(v_place_1777_);
return v_res_1780_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_isEmpty___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_unsubscribe_spec__0_spec__0___redArg(lean_object* v___y_1781_){
_start:
{
lean_object* v___x_1783_; lean_object* v_size_1784_; lean_object* v___x_1785_; uint8_t v___x_1786_; lean_object* v___x_1787_; lean_object* v___x_1788_; 
v___x_1783_ = lean_st_ref_get(v___y_1781_);
v_size_1784_ = lean_ctor_get(v___x_1783_, 3);
lean_inc(v_size_1784_);
lean_dec(v___x_1783_);
v___x_1785_ = lean_unsigned_to_nat(0u);
v___x_1786_ = lean_nat_dec_eq(v_size_1784_, v___x_1785_);
lean_dec(v_size_1784_);
v___x_1787_ = lean_box(v___x_1786_);
v___x_1788_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1788_, 0, v___x_1787_);
return v___x_1788_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_isEmpty___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_unsubscribe_spec__0_spec__0___redArg___boxed(lean_object* v___y_1789_, lean_object* v___y_1790_){
_start:
{
lean_object* v_res_1791_; 
v_res_1791_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_isEmpty___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_unsubscribe_spec__0_spec__0___redArg(v___y_1789_);
lean_dec(v___y_1789_);
return v_res_1791_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getSlotValue___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_unsubscribe_spec__0_spec__2___redArg(lean_object* v_slot_1792_, lean_object* v_next_1793_){
_start:
{
lean_object* v___x_1795_; lean_object* v_fst_1797_; lean_object* v_snd_1798_; lean_object* v_value_1801_; lean_object* v_pos_1802_; lean_object* v_remaining_1803_; uint8_t v___x_1804_; 
v___x_1795_ = lean_st_ref_take(v_slot_1792_);
v_value_1801_ = lean_ctor_get(v___x_1795_, 0);
lean_inc(v_value_1801_);
v_pos_1802_ = lean_ctor_get(v___x_1795_, 1);
lean_inc(v_pos_1802_);
v_remaining_1803_ = lean_ctor_get(v___x_1795_, 2);
lean_inc(v_remaining_1803_);
v___x_1804_ = lean_nat_dec_eq(v_next_1793_, v_pos_1802_);
if (v___x_1804_ == 0)
{
lean_object* v___x_1805_; lean_object* v___x_1806_; lean_object* v___x_1807_; 
lean_dec(v_remaining_1803_);
lean_dec(v_pos_1802_);
lean_dec(v_value_1801_);
v___x_1805_ = lean_box(0);
v___x_1806_ = lean_box(v___x_1804_);
v___x_1807_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1807_, 0, v___x_1805_);
lean_ctor_set(v___x_1807_, 1, v___x_1806_);
v_fst_1797_ = v___x_1807_;
v_snd_1798_ = v___x_1795_;
goto v___jp_1796_;
}
else
{
lean_object* v___x_1809_; uint8_t v_isShared_1810_; uint8_t v_isSharedCheck_1826_; 
v_isSharedCheck_1826_ = !lean_is_exclusive(v___x_1795_);
if (v_isSharedCheck_1826_ == 0)
{
lean_object* v_unused_1827_; lean_object* v_unused_1828_; lean_object* v_unused_1829_; 
v_unused_1827_ = lean_ctor_get(v___x_1795_, 2);
lean_dec(v_unused_1827_);
v_unused_1828_ = lean_ctor_get(v___x_1795_, 1);
lean_dec(v_unused_1828_);
v_unused_1829_ = lean_ctor_get(v___x_1795_, 0);
lean_dec(v_unused_1829_);
v___x_1809_ = v___x_1795_;
v_isShared_1810_ = v_isSharedCheck_1826_;
goto v_resetjp_1808_;
}
else
{
lean_dec(v___x_1795_);
v___x_1809_ = lean_box(0);
v_isShared_1810_ = v_isSharedCheck_1826_;
goto v_resetjp_1808_;
}
v_resetjp_1808_:
{
lean_object* v___x_1811_; uint8_t v___x_1812_; 
v___x_1811_ = lean_unsigned_to_nat(1u);
v___x_1812_ = lean_nat_dec_eq(v_remaining_1803_, v___x_1811_);
if (v___x_1812_ == 0)
{
lean_object* v___x_1813_; lean_object* v___x_1814_; lean_object* v___x_1815_; lean_object* v___x_1817_; 
v___x_1813_ = lean_box(v___x_1812_);
lean_inc(v_value_1801_);
v___x_1814_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1814_, 0, v_value_1801_);
lean_ctor_set(v___x_1814_, 1, v___x_1813_);
v___x_1815_ = lean_nat_sub(v_remaining_1803_, v___x_1811_);
lean_dec(v_remaining_1803_);
if (v_isShared_1810_ == 0)
{
lean_ctor_set(v___x_1809_, 2, v___x_1815_);
v___x_1817_ = v___x_1809_;
goto v_reusejp_1816_;
}
else
{
lean_object* v_reuseFailAlloc_1818_; 
v_reuseFailAlloc_1818_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1818_, 0, v_value_1801_);
lean_ctor_set(v_reuseFailAlloc_1818_, 1, v_pos_1802_);
lean_ctor_set(v_reuseFailAlloc_1818_, 2, v___x_1815_);
v___x_1817_ = v_reuseFailAlloc_1818_;
goto v_reusejp_1816_;
}
v_reusejp_1816_:
{
v_fst_1797_ = v___x_1814_;
v_snd_1798_ = v___x_1817_;
goto v___jp_1796_;
}
}
else
{
lean_object* v___x_1819_; lean_object* v___x_1820_; lean_object* v___x_1821_; lean_object* v___x_1822_; lean_object* v___x_1824_; 
lean_dec(v_remaining_1803_);
v___x_1819_ = lean_box(v___x_1804_);
v___x_1820_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1820_, 0, v_value_1801_);
lean_ctor_set(v___x_1820_, 1, v___x_1819_);
v___x_1821_ = lean_box(0);
v___x_1822_ = lean_unsigned_to_nat(0u);
if (v_isShared_1810_ == 0)
{
lean_ctor_set(v___x_1809_, 2, v___x_1822_);
lean_ctor_set(v___x_1809_, 0, v___x_1821_);
v___x_1824_ = v___x_1809_;
goto v_reusejp_1823_;
}
else
{
lean_object* v_reuseFailAlloc_1825_; 
v_reuseFailAlloc_1825_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1825_, 0, v___x_1821_);
lean_ctor_set(v_reuseFailAlloc_1825_, 1, v_pos_1802_);
lean_ctor_set(v_reuseFailAlloc_1825_, 2, v___x_1822_);
v___x_1824_ = v_reuseFailAlloc_1825_;
goto v_reusejp_1823_;
}
v_reusejp_1823_:
{
v_fst_1797_ = v___x_1820_;
v_snd_1798_ = v___x_1824_;
goto v___jp_1796_;
}
}
}
}
v___jp_1796_:
{
lean_object* v___x_1799_; lean_object* v___x_1800_; 
v___x_1799_ = lean_st_ref_put(v_slot_1792_, v_snd_1798_);
v___x_1800_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1800_, 0, v_fst_1797_);
return v___x_1800_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getSlotValue___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_unsubscribe_spec__0_spec__2___redArg___boxed(lean_object* v_slot_1830_, lean_object* v_next_1831_, lean_object* v___y_1832_){
_start:
{
lean_object* v_res_1833_; 
v_res_1833_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getSlotValue___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_unsubscribe_spec__0_spec__2___redArg(v_slot_1830_, v_next_1831_);
lean_dec(v_next_1831_);
lean_dec(v_slot_1830_);
return v_res_1833_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_unsubscribe_spec__0___redArg(lean_object* v_next_1834_, lean_object* v___y_1835_){
_start:
{
lean_object* v___x_1837_; lean_object* v___x_1838_; lean_object* v_a_1839_; lean_object* v___x_1841_; uint8_t v_isShared_1842_; uint8_t v_isSharedCheck_1912_; 
v___x_1837_ = lean_st_ref_get(v___y_1835_);
v___x_1838_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_isEmpty___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_unsubscribe_spec__0_spec__0___redArg(v___y_1835_);
v_a_1839_ = lean_ctor_get(v___x_1838_, 0);
v_isSharedCheck_1912_ = !lean_is_exclusive(v___x_1838_);
if (v_isSharedCheck_1912_ == 0)
{
v___x_1841_ = v___x_1838_;
v_isShared_1842_ = v_isSharedCheck_1912_;
goto v_resetjp_1840_;
}
else
{
lean_inc(v_a_1839_);
lean_dec(v___x_1838_);
v___x_1841_ = lean_box(0);
v_isShared_1842_ = v_isSharedCheck_1912_;
goto v_resetjp_1840_;
}
v_resetjp_1840_:
{
uint8_t v___x_1843_; 
v___x_1843_ = lean_unbox(v_a_1839_);
lean_dec(v_a_1839_);
if (v___x_1843_ == 0)
{
lean_object* v_capacity_1844_; uint8_t v___x_1845_; lean_object* v___x_1846_; lean_object* v___x_1847_; lean_object* v_a_1848_; lean_object* v___x_1850_; uint8_t v_isShared_1851_; uint8_t v_isSharedCheck_1907_; 
lean_del_object(v___x_1841_);
v_capacity_1844_ = lean_ctor_get(v___x_1837_, 2);
lean_inc(v_capacity_1844_);
v___x_1845_ = 1;
v___x_1846_ = lean_nat_mod(v_next_1834_, v_capacity_1844_);
lean_dec(v_capacity_1844_);
v___x_1847_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_getSlot___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_unsubscribe_spec__0_spec__1___redArg(v___x_1846_, v___y_1835_);
lean_dec(v___x_1846_);
v_a_1848_ = lean_ctor_get(v___x_1847_, 0);
v_isSharedCheck_1907_ = !lean_is_exclusive(v___x_1847_);
if (v_isSharedCheck_1907_ == 0)
{
v___x_1850_ = v___x_1847_;
v_isShared_1851_ = v_isSharedCheck_1907_;
goto v_resetjp_1849_;
}
else
{
lean_inc(v_a_1848_);
lean_dec(v___x_1847_);
v___x_1850_ = lean_box(0);
v_isShared_1851_ = v_isSharedCheck_1907_;
goto v_resetjp_1849_;
}
v_resetjp_1849_:
{
lean_object* v___x_1852_; lean_object* v_a_1853_; lean_object* v___x_1855_; uint8_t v_isShared_1856_; uint8_t v_isSharedCheck_1906_; 
v___x_1852_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getSlotValue___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_unsubscribe_spec__0_spec__2___redArg(v_a_1848_, v_next_1834_);
lean_dec(v_a_1848_);
v_a_1853_ = lean_ctor_get(v___x_1852_, 0);
v_isSharedCheck_1906_ = !lean_is_exclusive(v___x_1852_);
if (v_isSharedCheck_1906_ == 0)
{
v___x_1855_ = v___x_1852_;
v_isShared_1856_ = v_isSharedCheck_1906_;
goto v_resetjp_1854_;
}
else
{
lean_inc(v_a_1853_);
lean_dec(v___x_1852_);
v___x_1855_ = lean_box(0);
v_isShared_1856_ = v_isSharedCheck_1906_;
goto v_resetjp_1854_;
}
v_resetjp_1854_:
{
lean_object* v_fst_1857_; lean_object* v_snd_1858_; lean_object* v_st_1860_; lean_object* v___y_1861_; 
v_fst_1857_ = lean_ctor_get(v_a_1853_, 0);
lean_inc(v_fst_1857_);
v_snd_1858_ = lean_ctor_get(v_a_1853_, 1);
lean_inc(v_snd_1858_);
lean_dec(v_a_1853_);
if (lean_obj_tag(v_fst_1857_) == 1)
{
uint8_t v___x_1866_; 
lean_del_object(v___x_1850_);
v___x_1866_ = lean_unbox(v_snd_1858_);
lean_dec(v_snd_1858_);
if (v___x_1866_ == 0)
{
v_st_1860_ = v___x_1837_;
v___y_1861_ = v___y_1835_;
goto v___jp_1859_;
}
else
{
lean_object* v___x_1867_; lean_object* v_producers_1868_; lean_object* v_waiters_1869_; lean_object* v_capacity_1870_; lean_object* v_size_1871_; lean_object* v_buffer_1872_; lean_object* v_write_1873_; lean_object* v_read_1874_; lean_object* v_receivers_1875_; lean_object* v_nextId_1876_; uint8_t v_closed_1877_; lean_object* v_pos_1878_; lean_object* v___x_1879_; 
v___x_1867_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_dequeue___redArg(v___x_1837_);
v_producers_1868_ = lean_ctor_get(v___x_1867_, 0);
lean_inc_ref(v_producers_1868_);
v_waiters_1869_ = lean_ctor_get(v___x_1867_, 1);
lean_inc_ref(v_waiters_1869_);
v_capacity_1870_ = lean_ctor_get(v___x_1867_, 2);
lean_inc(v_capacity_1870_);
v_size_1871_ = lean_ctor_get(v___x_1867_, 3);
lean_inc(v_size_1871_);
v_buffer_1872_ = lean_ctor_get(v___x_1867_, 4);
lean_inc_ref(v_buffer_1872_);
v_write_1873_ = lean_ctor_get(v___x_1867_, 5);
lean_inc(v_write_1873_);
v_read_1874_ = lean_ctor_get(v___x_1867_, 6);
lean_inc(v_read_1874_);
v_receivers_1875_ = lean_ctor_get(v___x_1867_, 7);
lean_inc(v_receivers_1875_);
v_nextId_1876_ = lean_ctor_get(v___x_1867_, 8);
lean_inc(v_nextId_1876_);
v_closed_1877_ = lean_ctor_get_uint8(v___x_1867_, sizeof(void*)*10);
v_pos_1878_ = lean_ctor_get(v___x_1867_, 9);
lean_inc(v_pos_1878_);
v___x_1879_ = l_Std_Queue_dequeue_x3f___redArg(v_producers_1868_);
if (lean_obj_tag(v___x_1879_) == 1)
{
lean_object* v___x_1881_; uint8_t v_isShared_1882_; uint8_t v_isSharedCheck_1891_; 
v_isSharedCheck_1891_ = !lean_is_exclusive(v___x_1867_);
if (v_isSharedCheck_1891_ == 0)
{
lean_object* v_unused_1892_; lean_object* v_unused_1893_; lean_object* v_unused_1894_; lean_object* v_unused_1895_; lean_object* v_unused_1896_; lean_object* v_unused_1897_; lean_object* v_unused_1898_; lean_object* v_unused_1899_; lean_object* v_unused_1900_; lean_object* v_unused_1901_; 
v_unused_1892_ = lean_ctor_get(v___x_1867_, 9);
lean_dec(v_unused_1892_);
v_unused_1893_ = lean_ctor_get(v___x_1867_, 8);
lean_dec(v_unused_1893_);
v_unused_1894_ = lean_ctor_get(v___x_1867_, 7);
lean_dec(v_unused_1894_);
v_unused_1895_ = lean_ctor_get(v___x_1867_, 6);
lean_dec(v_unused_1895_);
v_unused_1896_ = lean_ctor_get(v___x_1867_, 5);
lean_dec(v_unused_1896_);
v_unused_1897_ = lean_ctor_get(v___x_1867_, 4);
lean_dec(v_unused_1897_);
v_unused_1898_ = lean_ctor_get(v___x_1867_, 3);
lean_dec(v_unused_1898_);
v_unused_1899_ = lean_ctor_get(v___x_1867_, 2);
lean_dec(v_unused_1899_);
v_unused_1900_ = lean_ctor_get(v___x_1867_, 1);
lean_dec(v_unused_1900_);
v_unused_1901_ = lean_ctor_get(v___x_1867_, 0);
lean_dec(v_unused_1901_);
v___x_1881_ = v___x_1867_;
v_isShared_1882_ = v_isSharedCheck_1891_;
goto v_resetjp_1880_;
}
else
{
lean_dec(v___x_1867_);
v___x_1881_ = lean_box(0);
v_isShared_1882_ = v_isSharedCheck_1891_;
goto v_resetjp_1880_;
}
v_resetjp_1880_:
{
lean_object* v_val_1883_; lean_object* v_fst_1884_; lean_object* v_snd_1885_; lean_object* v___x_1886_; lean_object* v___x_1887_; lean_object* v___x_1889_; 
v_val_1883_ = lean_ctor_get(v___x_1879_, 0);
lean_inc(v_val_1883_);
lean_dec_ref_known(v___x_1879_, 1);
v_fst_1884_ = lean_ctor_get(v_val_1883_, 0);
lean_inc(v_fst_1884_);
v_snd_1885_ = lean_ctor_get(v_val_1883_, 1);
lean_inc(v_snd_1885_);
lean_dec(v_val_1883_);
v___x_1886_ = lean_box(v___x_1845_);
v___x_1887_ = lean_io_promise_resolve(v___x_1886_, v_fst_1884_);
lean_dec(v_fst_1884_);
if (v_isShared_1882_ == 0)
{
lean_ctor_set(v___x_1881_, 0, v_snd_1885_);
v___x_1889_ = v___x_1881_;
goto v_reusejp_1888_;
}
else
{
lean_object* v_reuseFailAlloc_1890_; 
v_reuseFailAlloc_1890_ = lean_alloc_ctor(0, 10, 1);
lean_ctor_set(v_reuseFailAlloc_1890_, 0, v_snd_1885_);
lean_ctor_set(v_reuseFailAlloc_1890_, 1, v_waiters_1869_);
lean_ctor_set(v_reuseFailAlloc_1890_, 2, v_capacity_1870_);
lean_ctor_set(v_reuseFailAlloc_1890_, 3, v_size_1871_);
lean_ctor_set(v_reuseFailAlloc_1890_, 4, v_buffer_1872_);
lean_ctor_set(v_reuseFailAlloc_1890_, 5, v_write_1873_);
lean_ctor_set(v_reuseFailAlloc_1890_, 6, v_read_1874_);
lean_ctor_set(v_reuseFailAlloc_1890_, 7, v_receivers_1875_);
lean_ctor_set(v_reuseFailAlloc_1890_, 8, v_nextId_1876_);
lean_ctor_set(v_reuseFailAlloc_1890_, 9, v_pos_1878_);
lean_ctor_set_uint8(v_reuseFailAlloc_1890_, sizeof(void*)*10, v_closed_1877_);
v___x_1889_ = v_reuseFailAlloc_1890_;
goto v_reusejp_1888_;
}
v_reusejp_1888_:
{
v_st_1860_ = v___x_1889_;
v___y_1861_ = v___y_1835_;
goto v___jp_1859_;
}
}
}
else
{
lean_dec(v___x_1879_);
lean_dec(v_pos_1878_);
lean_dec(v_nextId_1876_);
lean_dec(v_receivers_1875_);
lean_dec(v_read_1874_);
lean_dec(v_write_1873_);
lean_dec_ref(v_buffer_1872_);
lean_dec(v_size_1871_);
lean_dec(v_capacity_1870_);
lean_dec_ref(v_waiters_1869_);
v_st_1860_ = v___x_1867_;
v___y_1861_ = v___y_1835_;
goto v___jp_1859_;
}
}
}
else
{
lean_object* v___x_1902_; lean_object* v___x_1904_; 
lean_dec(v_snd_1858_);
lean_dec(v_fst_1857_);
lean_del_object(v___x_1855_);
lean_dec(v___x_1837_);
v___x_1902_ = lean_box(0);
if (v_isShared_1851_ == 0)
{
lean_ctor_set(v___x_1850_, 0, v___x_1902_);
v___x_1904_ = v___x_1850_;
goto v_reusejp_1903_;
}
else
{
lean_object* v_reuseFailAlloc_1905_; 
v_reuseFailAlloc_1905_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1905_, 0, v___x_1902_);
v___x_1904_ = v_reuseFailAlloc_1905_;
goto v_reusejp_1903_;
}
v_reusejp_1903_:
{
return v___x_1904_;
}
}
v___jp_1859_:
{
lean_object* v___x_1862_; lean_object* v___x_1864_; 
v___x_1862_ = lean_st_ref_swap(v___y_1861_, v_st_1860_);
lean_dec(v___x_1862_);
if (v_isShared_1856_ == 0)
{
lean_ctor_set(v___x_1855_, 0, v_fst_1857_);
v___x_1864_ = v___x_1855_;
goto v_reusejp_1863_;
}
else
{
lean_object* v_reuseFailAlloc_1865_; 
v_reuseFailAlloc_1865_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1865_, 0, v_fst_1857_);
v___x_1864_ = v_reuseFailAlloc_1865_;
goto v_reusejp_1863_;
}
v_reusejp_1863_:
{
return v___x_1864_;
}
}
}
}
}
else
{
lean_object* v___x_1908_; lean_object* v___x_1910_; 
lean_dec(v___x_1837_);
v___x_1908_ = lean_box(0);
if (v_isShared_1842_ == 0)
{
lean_ctor_set(v___x_1841_, 0, v___x_1908_);
v___x_1910_ = v___x_1841_;
goto v_reusejp_1909_;
}
else
{
lean_object* v_reuseFailAlloc_1911_; 
v_reuseFailAlloc_1911_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1911_, 0, v___x_1908_);
v___x_1910_ = v_reuseFailAlloc_1911_;
goto v_reusejp_1909_;
}
v_reusejp_1909_:
{
return v___x_1910_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_unsubscribe_spec__0___redArg___boxed(lean_object* v_next_1913_, lean_object* v___y_1914_, lean_object* v___y_1915_){
_start:
{
lean_object* v_res_1916_; 
v_res_1916_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_unsubscribe_spec__0___redArg(v_next_1913_, v___y_1914_);
lean_dec(v___y_1914_);
lean_dec(v_next_1913_);
return v_res_1916_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_unsubscribe_spec__2___redArg(lean_object* v_a_1917_, lean_object* v___y_1918_){
_start:
{
lean_object* v_fst_1920_; lean_object* v_snd_1921_; lean_object* v___x_1923_; uint8_t v_isShared_1924_; uint8_t v_isSharedCheck_1963_; 
v_fst_1920_ = lean_ctor_get(v_a_1917_, 0);
v_snd_1921_ = lean_ctor_get(v_a_1917_, 1);
v_isSharedCheck_1963_ = !lean_is_exclusive(v_a_1917_);
if (v_isSharedCheck_1963_ == 0)
{
v___x_1923_ = v_a_1917_;
v_isShared_1924_ = v_isSharedCheck_1963_;
goto v_resetjp_1922_;
}
else
{
lean_inc(v_snd_1921_);
lean_inc(v_fst_1920_);
lean_dec(v_a_1917_);
v___x_1923_ = lean_box(0);
v_isShared_1924_ = v_isSharedCheck_1963_;
goto v_resetjp_1922_;
}
v_resetjp_1922_:
{
uint8_t v___y_1926_; lean_object* v_size_1958_; lean_object* v_pos_1959_; uint8_t v___x_1960_; 
v_size_1958_ = lean_ctor_get(v_fst_1920_, 3);
v_pos_1959_ = lean_ctor_get(v_fst_1920_, 9);
v___x_1960_ = lean_nat_dec_lt(v_snd_1921_, v_pos_1959_);
if (v___x_1960_ == 0)
{
v___y_1926_ = v___x_1960_;
goto v___jp_1925_;
}
else
{
lean_object* v___x_1961_; uint8_t v___x_1962_; 
v___x_1961_ = lean_unsigned_to_nat(0u);
v___x_1962_ = lean_nat_dec_lt(v___x_1961_, v_size_1958_);
v___y_1926_ = v___x_1962_;
goto v___jp_1925_;
}
v___jp_1925_:
{
if (v___y_1926_ == 0)
{
lean_object* v___x_1928_; 
if (v_isShared_1924_ == 0)
{
v___x_1928_ = v___x_1923_;
goto v_reusejp_1927_;
}
else
{
lean_object* v_reuseFailAlloc_1930_; 
v_reuseFailAlloc_1930_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1930_, 0, v_fst_1920_);
lean_ctor_set(v_reuseFailAlloc_1930_, 1, v_snd_1921_);
v___x_1928_ = v_reuseFailAlloc_1930_;
goto v_reusejp_1927_;
}
v_reusejp_1927_:
{
lean_object* v___x_1929_; 
v___x_1929_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1929_, 0, v___x_1928_);
return v___x_1929_;
}
}
else
{
lean_object* v___x_1931_; 
v___x_1931_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_unsubscribe_spec__0___redArg(v_snd_1921_, v___y_1918_);
if (lean_obj_tag(v___x_1931_) == 0)
{
lean_object* v_a_1932_; lean_object* v___x_1934_; uint8_t v_isShared_1935_; uint8_t v_isSharedCheck_1949_; 
v_a_1932_ = lean_ctor_get(v___x_1931_, 0);
v_isSharedCheck_1949_ = !lean_is_exclusive(v___x_1931_);
if (v_isSharedCheck_1949_ == 0)
{
v___x_1934_ = v___x_1931_;
v_isShared_1935_ = v_isSharedCheck_1949_;
goto v_resetjp_1933_;
}
else
{
lean_inc(v_a_1932_);
lean_dec(v___x_1931_);
v___x_1934_ = lean_box(0);
v_isShared_1935_ = v_isSharedCheck_1949_;
goto v_resetjp_1933_;
}
v_resetjp_1933_:
{
if (lean_obj_tag(v_a_1932_) == 1)
{
lean_object* v___x_1936_; lean_object* v___x_1937_; lean_object* v___x_1938_; lean_object* v___x_1940_; 
lean_dec_ref_known(v_a_1932_, 1);
lean_del_object(v___x_1934_);
lean_dec(v_fst_1920_);
v___x_1936_ = lean_st_ref_get(v___y_1918_);
v___x_1937_ = lean_unsigned_to_nat(1u);
v___x_1938_ = lean_nat_add(v_snd_1921_, v___x_1937_);
lean_dec(v_snd_1921_);
if (v_isShared_1924_ == 0)
{
lean_ctor_set(v___x_1923_, 1, v___x_1938_);
lean_ctor_set(v___x_1923_, 0, v___x_1936_);
v___x_1940_ = v___x_1923_;
goto v_reusejp_1939_;
}
else
{
lean_object* v_reuseFailAlloc_1942_; 
v_reuseFailAlloc_1942_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1942_, 0, v___x_1936_);
lean_ctor_set(v_reuseFailAlloc_1942_, 1, v___x_1938_);
v___x_1940_ = v_reuseFailAlloc_1942_;
goto v_reusejp_1939_;
}
v_reusejp_1939_:
{
v_a_1917_ = v___x_1940_;
goto _start;
}
}
else
{
lean_object* v___x_1944_; 
lean_dec(v_a_1932_);
if (v_isShared_1924_ == 0)
{
v___x_1944_ = v___x_1923_;
goto v_reusejp_1943_;
}
else
{
lean_object* v_reuseFailAlloc_1948_; 
v_reuseFailAlloc_1948_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1948_, 0, v_fst_1920_);
lean_ctor_set(v_reuseFailAlloc_1948_, 1, v_snd_1921_);
v___x_1944_ = v_reuseFailAlloc_1948_;
goto v_reusejp_1943_;
}
v_reusejp_1943_:
{
lean_object* v___x_1946_; 
if (v_isShared_1935_ == 0)
{
lean_ctor_set(v___x_1934_, 0, v___x_1944_);
v___x_1946_ = v___x_1934_;
goto v_reusejp_1945_;
}
else
{
lean_object* v_reuseFailAlloc_1947_; 
v_reuseFailAlloc_1947_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1947_, 0, v___x_1944_);
v___x_1946_ = v_reuseFailAlloc_1947_;
goto v_reusejp_1945_;
}
v_reusejp_1945_:
{
return v___x_1946_;
}
}
}
}
}
else
{
lean_object* v_a_1950_; lean_object* v___x_1952_; uint8_t v_isShared_1953_; uint8_t v_isSharedCheck_1957_; 
lean_del_object(v___x_1923_);
lean_dec(v_snd_1921_);
lean_dec(v_fst_1920_);
v_a_1950_ = lean_ctor_get(v___x_1931_, 0);
v_isSharedCheck_1957_ = !lean_is_exclusive(v___x_1931_);
if (v_isSharedCheck_1957_ == 0)
{
v___x_1952_ = v___x_1931_;
v_isShared_1953_ = v_isSharedCheck_1957_;
goto v_resetjp_1951_;
}
else
{
lean_inc(v_a_1950_);
lean_dec(v___x_1931_);
v___x_1952_ = lean_box(0);
v_isShared_1953_ = v_isSharedCheck_1957_;
goto v_resetjp_1951_;
}
v_resetjp_1951_:
{
lean_object* v___x_1955_; 
if (v_isShared_1953_ == 0)
{
v___x_1955_ = v___x_1952_;
goto v_reusejp_1954_;
}
else
{
lean_object* v_reuseFailAlloc_1956_; 
v_reuseFailAlloc_1956_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1956_, 0, v_a_1950_);
v___x_1955_ = v_reuseFailAlloc_1956_;
goto v_reusejp_1954_;
}
v_reusejp_1954_:
{
return v___x_1955_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_unsubscribe_spec__2___redArg___boxed(lean_object* v_a_1964_, lean_object* v___y_1965_, lean_object* v___y_1966_){
_start:
{
lean_object* v_res_1967_; 
v_res_1967_ = l___private_Init_While_0__repeatM_erased___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_unsubscribe_spec__2___redArg(v_a_1964_, v___y_1965_);
lean_dec(v___y_1965_);
return v_res_1967_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_unsubscribe_spec__1___redArg(lean_object* v_t_1968_, lean_object* v_k_1969_){
_start:
{
if (lean_obj_tag(v_t_1968_) == 0)
{
lean_object* v_k_1970_; lean_object* v_v_1971_; lean_object* v_l_1972_; lean_object* v_r_1973_; uint8_t v___x_1974_; 
v_k_1970_ = lean_ctor_get(v_t_1968_, 1);
v_v_1971_ = lean_ctor_get(v_t_1968_, 2);
v_l_1972_ = lean_ctor_get(v_t_1968_, 3);
v_r_1973_ = lean_ctor_get(v_t_1968_, 4);
v___x_1974_ = lean_nat_dec_lt(v_k_1969_, v_k_1970_);
if (v___x_1974_ == 0)
{
uint8_t v___x_1975_; 
v___x_1975_ = lean_nat_dec_eq(v_k_1969_, v_k_1970_);
if (v___x_1975_ == 0)
{
v_t_1968_ = v_r_1973_;
goto _start;
}
else
{
lean_object* v___x_1977_; 
lean_inc(v_v_1971_);
v___x_1977_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1977_, 0, v_v_1971_);
return v___x_1977_;
}
}
else
{
v_t_1968_ = v_l_1972_;
goto _start;
}
}
else
{
lean_object* v___x_1979_; 
v___x_1979_ = lean_box(0);
return v___x_1979_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_unsubscribe_spec__1___redArg___boxed(lean_object* v_t_1980_, lean_object* v_k_1981_){
_start:
{
lean_object* v_res_1982_; 
v_res_1982_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_unsubscribe_spec__1___redArg(v_t_1980_, v_k_1981_);
lean_dec(v_k_1981_);
lean_dec(v_t_1980_);
return v_res_1982_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_erase___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_unsubscribe_spec__3___redArg(lean_object* v_k_1983_, lean_object* v_t_1984_){
_start:
{
if (lean_obj_tag(v_t_1984_) == 0)
{
lean_object* v_k_1985_; lean_object* v_v_1986_; lean_object* v_l_1987_; lean_object* v_r_1988_; lean_object* v___x_1990_; uint8_t v_isShared_1991_; uint8_t v_isSharedCheck_2643_; 
v_k_1985_ = lean_ctor_get(v_t_1984_, 1);
v_v_1986_ = lean_ctor_get(v_t_1984_, 2);
v_l_1987_ = lean_ctor_get(v_t_1984_, 3);
v_r_1988_ = lean_ctor_get(v_t_1984_, 4);
v_isSharedCheck_2643_ = !lean_is_exclusive(v_t_1984_);
if (v_isSharedCheck_2643_ == 0)
{
lean_object* v_unused_2644_; 
v_unused_2644_ = lean_ctor_get(v_t_1984_, 0);
lean_dec(v_unused_2644_);
v___x_1990_ = v_t_1984_;
v_isShared_1991_ = v_isSharedCheck_2643_;
goto v_resetjp_1989_;
}
else
{
lean_inc(v_r_1988_);
lean_inc(v_l_1987_);
lean_inc(v_v_1986_);
lean_inc(v_k_1985_);
lean_dec(v_t_1984_);
v___x_1990_ = lean_box(0);
v_isShared_1991_ = v_isSharedCheck_2643_;
goto v_resetjp_1989_;
}
v_resetjp_1989_:
{
uint8_t v___x_1992_; 
v___x_1992_ = lean_nat_dec_lt(v_k_1983_, v_k_1985_);
if (v___x_1992_ == 0)
{
uint8_t v___x_1993_; 
v___x_1993_ = lean_nat_dec_eq(v_k_1983_, v_k_1985_);
if (v___x_1993_ == 0)
{
lean_object* v_impl_1994_; lean_object* v___x_1995_; 
v_impl_1994_ = l_Std_DTreeMap_Internal_Impl_erase___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_unsubscribe_spec__3___redArg(v_k_1983_, v_r_1988_);
v___x_1995_ = lean_unsigned_to_nat(1u);
if (lean_obj_tag(v_impl_1994_) == 0)
{
if (lean_obj_tag(v_l_1987_) == 0)
{
lean_object* v_size_1996_; lean_object* v_size_1997_; lean_object* v_k_1998_; lean_object* v_v_1999_; lean_object* v_l_2000_; lean_object* v_r_2001_; lean_object* v___x_2002_; lean_object* v___x_2003_; uint8_t v___x_2004_; 
v_size_1996_ = lean_ctor_get(v_impl_1994_, 0);
lean_inc(v_size_1996_);
v_size_1997_ = lean_ctor_get(v_l_1987_, 0);
v_k_1998_ = lean_ctor_get(v_l_1987_, 1);
v_v_1999_ = lean_ctor_get(v_l_1987_, 2);
v_l_2000_ = lean_ctor_get(v_l_1987_, 3);
v_r_2001_ = lean_ctor_get(v_l_1987_, 4);
lean_inc(v_r_2001_);
v___x_2002_ = lean_unsigned_to_nat(3u);
v___x_2003_ = lean_nat_mul(v___x_2002_, v_size_1996_);
v___x_2004_ = lean_nat_dec_lt(v___x_2003_, v_size_1997_);
lean_dec(v___x_2003_);
if (v___x_2004_ == 0)
{
lean_object* v___x_2005_; lean_object* v___x_2006_; lean_object* v___x_2008_; 
lean_dec(v_r_2001_);
v___x_2005_ = lean_nat_add(v___x_1995_, v_size_1997_);
v___x_2006_ = lean_nat_add(v___x_2005_, v_size_1996_);
lean_dec(v_size_1996_);
lean_dec(v___x_2005_);
if (v_isShared_1991_ == 0)
{
lean_ctor_set(v___x_1990_, 4, v_impl_1994_);
lean_ctor_set(v___x_1990_, 0, v___x_2006_);
v___x_2008_ = v___x_1990_;
goto v_reusejp_2007_;
}
else
{
lean_object* v_reuseFailAlloc_2009_; 
v_reuseFailAlloc_2009_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2009_, 0, v___x_2006_);
lean_ctor_set(v_reuseFailAlloc_2009_, 1, v_k_1985_);
lean_ctor_set(v_reuseFailAlloc_2009_, 2, v_v_1986_);
lean_ctor_set(v_reuseFailAlloc_2009_, 3, v_l_1987_);
lean_ctor_set(v_reuseFailAlloc_2009_, 4, v_impl_1994_);
v___x_2008_ = v_reuseFailAlloc_2009_;
goto v_reusejp_2007_;
}
v_reusejp_2007_:
{
return v___x_2008_;
}
}
else
{
lean_object* v___x_2011_; uint8_t v_isShared_2012_; uint8_t v_isSharedCheck_2075_; 
lean_inc(v_l_2000_);
lean_inc(v_v_1999_);
lean_inc(v_k_1998_);
lean_inc(v_size_1997_);
v_isSharedCheck_2075_ = !lean_is_exclusive(v_l_1987_);
if (v_isSharedCheck_2075_ == 0)
{
lean_object* v_unused_2076_; lean_object* v_unused_2077_; lean_object* v_unused_2078_; lean_object* v_unused_2079_; lean_object* v_unused_2080_; 
v_unused_2076_ = lean_ctor_get(v_l_1987_, 4);
lean_dec(v_unused_2076_);
v_unused_2077_ = lean_ctor_get(v_l_1987_, 3);
lean_dec(v_unused_2077_);
v_unused_2078_ = lean_ctor_get(v_l_1987_, 2);
lean_dec(v_unused_2078_);
v_unused_2079_ = lean_ctor_get(v_l_1987_, 1);
lean_dec(v_unused_2079_);
v_unused_2080_ = lean_ctor_get(v_l_1987_, 0);
lean_dec(v_unused_2080_);
v___x_2011_ = v_l_1987_;
v_isShared_2012_ = v_isSharedCheck_2075_;
goto v_resetjp_2010_;
}
else
{
lean_dec(v_l_1987_);
v___x_2011_ = lean_box(0);
v_isShared_2012_ = v_isSharedCheck_2075_;
goto v_resetjp_2010_;
}
v_resetjp_2010_:
{
lean_object* v_size_2013_; lean_object* v_size_2014_; lean_object* v_k_2015_; lean_object* v_v_2016_; lean_object* v_l_2017_; lean_object* v_r_2018_; lean_object* v___x_2019_; lean_object* v___x_2020_; uint8_t v___x_2021_; 
v_size_2013_ = lean_ctor_get(v_l_2000_, 0);
v_size_2014_ = lean_ctor_get(v_r_2001_, 0);
v_k_2015_ = lean_ctor_get(v_r_2001_, 1);
v_v_2016_ = lean_ctor_get(v_r_2001_, 2);
v_l_2017_ = lean_ctor_get(v_r_2001_, 3);
v_r_2018_ = lean_ctor_get(v_r_2001_, 4);
v___x_2019_ = lean_unsigned_to_nat(2u);
v___x_2020_ = lean_nat_mul(v___x_2019_, v_size_2013_);
v___x_2021_ = lean_nat_dec_lt(v_size_2014_, v___x_2020_);
lean_dec(v___x_2020_);
if (v___x_2021_ == 0)
{
lean_object* v___x_2023_; uint8_t v_isShared_2024_; uint8_t v_isSharedCheck_2050_; 
lean_inc(v_r_2018_);
lean_inc(v_l_2017_);
lean_inc(v_v_2016_);
lean_inc(v_k_2015_);
v_isSharedCheck_2050_ = !lean_is_exclusive(v_r_2001_);
if (v_isSharedCheck_2050_ == 0)
{
lean_object* v_unused_2051_; lean_object* v_unused_2052_; lean_object* v_unused_2053_; lean_object* v_unused_2054_; lean_object* v_unused_2055_; 
v_unused_2051_ = lean_ctor_get(v_r_2001_, 4);
lean_dec(v_unused_2051_);
v_unused_2052_ = lean_ctor_get(v_r_2001_, 3);
lean_dec(v_unused_2052_);
v_unused_2053_ = lean_ctor_get(v_r_2001_, 2);
lean_dec(v_unused_2053_);
v_unused_2054_ = lean_ctor_get(v_r_2001_, 1);
lean_dec(v_unused_2054_);
v_unused_2055_ = lean_ctor_get(v_r_2001_, 0);
lean_dec(v_unused_2055_);
v___x_2023_ = v_r_2001_;
v_isShared_2024_ = v_isSharedCheck_2050_;
goto v_resetjp_2022_;
}
else
{
lean_dec(v_r_2001_);
v___x_2023_ = lean_box(0);
v_isShared_2024_ = v_isSharedCheck_2050_;
goto v_resetjp_2022_;
}
v_resetjp_2022_:
{
lean_object* v___x_2025_; lean_object* v___x_2026_; lean_object* v___y_2028_; lean_object* v___y_2029_; lean_object* v___y_2030_; lean_object* v___x_2038_; lean_object* v___y_2040_; 
v___x_2025_ = lean_nat_add(v___x_1995_, v_size_1997_);
lean_dec(v_size_1997_);
v___x_2026_ = lean_nat_add(v___x_2025_, v_size_1996_);
lean_dec(v___x_2025_);
v___x_2038_ = lean_nat_add(v___x_1995_, v_size_2013_);
if (lean_obj_tag(v_l_2017_) == 0)
{
lean_object* v_size_2048_; 
v_size_2048_ = lean_ctor_get(v_l_2017_, 0);
lean_inc(v_size_2048_);
v___y_2040_ = v_size_2048_;
goto v___jp_2039_;
}
else
{
lean_object* v___x_2049_; 
v___x_2049_ = lean_unsigned_to_nat(0u);
v___y_2040_ = v___x_2049_;
goto v___jp_2039_;
}
v___jp_2027_:
{
lean_object* v___x_2031_; lean_object* v___x_2033_; 
v___x_2031_ = lean_nat_add(v___y_2028_, v___y_2030_);
lean_dec(v___y_2030_);
lean_dec(v___y_2028_);
if (v_isShared_2024_ == 0)
{
lean_ctor_set(v___x_2023_, 4, v_impl_1994_);
lean_ctor_set(v___x_2023_, 3, v_r_2018_);
lean_ctor_set(v___x_2023_, 2, v_v_1986_);
lean_ctor_set(v___x_2023_, 1, v_k_1985_);
lean_ctor_set(v___x_2023_, 0, v___x_2031_);
v___x_2033_ = v___x_2023_;
goto v_reusejp_2032_;
}
else
{
lean_object* v_reuseFailAlloc_2037_; 
v_reuseFailAlloc_2037_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2037_, 0, v___x_2031_);
lean_ctor_set(v_reuseFailAlloc_2037_, 1, v_k_1985_);
lean_ctor_set(v_reuseFailAlloc_2037_, 2, v_v_1986_);
lean_ctor_set(v_reuseFailAlloc_2037_, 3, v_r_2018_);
lean_ctor_set(v_reuseFailAlloc_2037_, 4, v_impl_1994_);
v___x_2033_ = v_reuseFailAlloc_2037_;
goto v_reusejp_2032_;
}
v_reusejp_2032_:
{
lean_object* v___x_2035_; 
if (v_isShared_2012_ == 0)
{
lean_ctor_set(v___x_2011_, 4, v___x_2033_);
lean_ctor_set(v___x_2011_, 3, v___y_2029_);
lean_ctor_set(v___x_2011_, 2, v_v_2016_);
lean_ctor_set(v___x_2011_, 1, v_k_2015_);
lean_ctor_set(v___x_2011_, 0, v___x_2026_);
v___x_2035_ = v___x_2011_;
goto v_reusejp_2034_;
}
else
{
lean_object* v_reuseFailAlloc_2036_; 
v_reuseFailAlloc_2036_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2036_, 0, v___x_2026_);
lean_ctor_set(v_reuseFailAlloc_2036_, 1, v_k_2015_);
lean_ctor_set(v_reuseFailAlloc_2036_, 2, v_v_2016_);
lean_ctor_set(v_reuseFailAlloc_2036_, 3, v___y_2029_);
lean_ctor_set(v_reuseFailAlloc_2036_, 4, v___x_2033_);
v___x_2035_ = v_reuseFailAlloc_2036_;
goto v_reusejp_2034_;
}
v_reusejp_2034_:
{
return v___x_2035_;
}
}
}
v___jp_2039_:
{
lean_object* v___x_2041_; lean_object* v___x_2043_; 
v___x_2041_ = lean_nat_add(v___x_2038_, v___y_2040_);
lean_dec(v___y_2040_);
lean_dec(v___x_2038_);
if (v_isShared_1991_ == 0)
{
lean_ctor_set(v___x_1990_, 4, v_l_2017_);
lean_ctor_set(v___x_1990_, 3, v_l_2000_);
lean_ctor_set(v___x_1990_, 2, v_v_1999_);
lean_ctor_set(v___x_1990_, 1, v_k_1998_);
lean_ctor_set(v___x_1990_, 0, v___x_2041_);
v___x_2043_ = v___x_1990_;
goto v_reusejp_2042_;
}
else
{
lean_object* v_reuseFailAlloc_2047_; 
v_reuseFailAlloc_2047_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2047_, 0, v___x_2041_);
lean_ctor_set(v_reuseFailAlloc_2047_, 1, v_k_1998_);
lean_ctor_set(v_reuseFailAlloc_2047_, 2, v_v_1999_);
lean_ctor_set(v_reuseFailAlloc_2047_, 3, v_l_2000_);
lean_ctor_set(v_reuseFailAlloc_2047_, 4, v_l_2017_);
v___x_2043_ = v_reuseFailAlloc_2047_;
goto v_reusejp_2042_;
}
v_reusejp_2042_:
{
lean_object* v___x_2044_; 
v___x_2044_ = lean_nat_add(v___x_1995_, v_size_1996_);
lean_dec(v_size_1996_);
if (lean_obj_tag(v_r_2018_) == 0)
{
lean_object* v_size_2045_; 
v_size_2045_ = lean_ctor_get(v_r_2018_, 0);
lean_inc(v_size_2045_);
v___y_2028_ = v___x_2044_;
v___y_2029_ = v___x_2043_;
v___y_2030_ = v_size_2045_;
goto v___jp_2027_;
}
else
{
lean_object* v___x_2046_; 
v___x_2046_ = lean_unsigned_to_nat(0u);
v___y_2028_ = v___x_2044_;
v___y_2029_ = v___x_2043_;
v___y_2030_ = v___x_2046_;
goto v___jp_2027_;
}
}
}
}
}
else
{
lean_object* v___x_2056_; lean_object* v___x_2057_; lean_object* v___x_2058_; lean_object* v___x_2059_; lean_object* v___x_2061_; 
lean_del_object(v___x_1990_);
v___x_2056_ = lean_nat_add(v___x_1995_, v_size_1997_);
lean_dec(v_size_1997_);
v___x_2057_ = lean_nat_add(v___x_2056_, v_size_1996_);
lean_dec(v___x_2056_);
v___x_2058_ = lean_nat_add(v___x_1995_, v_size_1996_);
lean_dec(v_size_1996_);
v___x_2059_ = lean_nat_add(v___x_2058_, v_size_2014_);
lean_dec(v___x_2058_);
lean_inc_ref(v_impl_1994_);
if (v_isShared_2012_ == 0)
{
lean_ctor_set(v___x_2011_, 4, v_impl_1994_);
lean_ctor_set(v___x_2011_, 3, v_r_2001_);
lean_ctor_set(v___x_2011_, 2, v_v_1986_);
lean_ctor_set(v___x_2011_, 1, v_k_1985_);
lean_ctor_set(v___x_2011_, 0, v___x_2059_);
v___x_2061_ = v___x_2011_;
goto v_reusejp_2060_;
}
else
{
lean_object* v_reuseFailAlloc_2074_; 
v_reuseFailAlloc_2074_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2074_, 0, v___x_2059_);
lean_ctor_set(v_reuseFailAlloc_2074_, 1, v_k_1985_);
lean_ctor_set(v_reuseFailAlloc_2074_, 2, v_v_1986_);
lean_ctor_set(v_reuseFailAlloc_2074_, 3, v_r_2001_);
lean_ctor_set(v_reuseFailAlloc_2074_, 4, v_impl_1994_);
v___x_2061_ = v_reuseFailAlloc_2074_;
goto v_reusejp_2060_;
}
v_reusejp_2060_:
{
lean_object* v___x_2063_; uint8_t v_isShared_2064_; uint8_t v_isSharedCheck_2068_; 
v_isSharedCheck_2068_ = !lean_is_exclusive(v_impl_1994_);
if (v_isSharedCheck_2068_ == 0)
{
lean_object* v_unused_2069_; lean_object* v_unused_2070_; lean_object* v_unused_2071_; lean_object* v_unused_2072_; lean_object* v_unused_2073_; 
v_unused_2069_ = lean_ctor_get(v_impl_1994_, 4);
lean_dec(v_unused_2069_);
v_unused_2070_ = lean_ctor_get(v_impl_1994_, 3);
lean_dec(v_unused_2070_);
v_unused_2071_ = lean_ctor_get(v_impl_1994_, 2);
lean_dec(v_unused_2071_);
v_unused_2072_ = lean_ctor_get(v_impl_1994_, 1);
lean_dec(v_unused_2072_);
v_unused_2073_ = lean_ctor_get(v_impl_1994_, 0);
lean_dec(v_unused_2073_);
v___x_2063_ = v_impl_1994_;
v_isShared_2064_ = v_isSharedCheck_2068_;
goto v_resetjp_2062_;
}
else
{
lean_dec(v_impl_1994_);
v___x_2063_ = lean_box(0);
v_isShared_2064_ = v_isSharedCheck_2068_;
goto v_resetjp_2062_;
}
v_resetjp_2062_:
{
lean_object* v___x_2066_; 
if (v_isShared_2064_ == 0)
{
lean_ctor_set(v___x_2063_, 4, v___x_2061_);
lean_ctor_set(v___x_2063_, 3, v_l_2000_);
lean_ctor_set(v___x_2063_, 2, v_v_1999_);
lean_ctor_set(v___x_2063_, 1, v_k_1998_);
lean_ctor_set(v___x_2063_, 0, v___x_2057_);
v___x_2066_ = v___x_2063_;
goto v_reusejp_2065_;
}
else
{
lean_object* v_reuseFailAlloc_2067_; 
v_reuseFailAlloc_2067_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2067_, 0, v___x_2057_);
lean_ctor_set(v_reuseFailAlloc_2067_, 1, v_k_1998_);
lean_ctor_set(v_reuseFailAlloc_2067_, 2, v_v_1999_);
lean_ctor_set(v_reuseFailAlloc_2067_, 3, v_l_2000_);
lean_ctor_set(v_reuseFailAlloc_2067_, 4, v___x_2061_);
v___x_2066_ = v_reuseFailAlloc_2067_;
goto v_reusejp_2065_;
}
v_reusejp_2065_:
{
return v___x_2066_;
}
}
}
}
}
}
}
else
{
lean_object* v_size_2081_; lean_object* v___x_2082_; lean_object* v___x_2084_; 
v_size_2081_ = lean_ctor_get(v_impl_1994_, 0);
lean_inc(v_size_2081_);
v___x_2082_ = lean_nat_add(v___x_1995_, v_size_2081_);
lean_dec(v_size_2081_);
if (v_isShared_1991_ == 0)
{
lean_ctor_set(v___x_1990_, 4, v_impl_1994_);
lean_ctor_set(v___x_1990_, 0, v___x_2082_);
v___x_2084_ = v___x_1990_;
goto v_reusejp_2083_;
}
else
{
lean_object* v_reuseFailAlloc_2085_; 
v_reuseFailAlloc_2085_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2085_, 0, v___x_2082_);
lean_ctor_set(v_reuseFailAlloc_2085_, 1, v_k_1985_);
lean_ctor_set(v_reuseFailAlloc_2085_, 2, v_v_1986_);
lean_ctor_set(v_reuseFailAlloc_2085_, 3, v_l_1987_);
lean_ctor_set(v_reuseFailAlloc_2085_, 4, v_impl_1994_);
v___x_2084_ = v_reuseFailAlloc_2085_;
goto v_reusejp_2083_;
}
v_reusejp_2083_:
{
return v___x_2084_;
}
}
}
else
{
if (lean_obj_tag(v_l_1987_) == 0)
{
lean_object* v_l_2086_; 
v_l_2086_ = lean_ctor_get(v_l_1987_, 3);
if (lean_obj_tag(v_l_2086_) == 0)
{
lean_object* v_r_2087_; 
lean_inc_ref(v_l_2086_);
v_r_2087_ = lean_ctor_get(v_l_1987_, 4);
lean_inc(v_r_2087_);
if (lean_obj_tag(v_r_2087_) == 0)
{
lean_object* v_size_2088_; lean_object* v_k_2089_; lean_object* v_v_2090_; lean_object* v___x_2092_; uint8_t v_isShared_2093_; uint8_t v_isSharedCheck_2103_; 
v_size_2088_ = lean_ctor_get(v_l_1987_, 0);
v_k_2089_ = lean_ctor_get(v_l_1987_, 1);
v_v_2090_ = lean_ctor_get(v_l_1987_, 2);
v_isSharedCheck_2103_ = !lean_is_exclusive(v_l_1987_);
if (v_isSharedCheck_2103_ == 0)
{
lean_object* v_unused_2104_; lean_object* v_unused_2105_; 
v_unused_2104_ = lean_ctor_get(v_l_1987_, 4);
lean_dec(v_unused_2104_);
v_unused_2105_ = lean_ctor_get(v_l_1987_, 3);
lean_dec(v_unused_2105_);
v___x_2092_ = v_l_1987_;
v_isShared_2093_ = v_isSharedCheck_2103_;
goto v_resetjp_2091_;
}
else
{
lean_inc(v_v_2090_);
lean_inc(v_k_2089_);
lean_inc(v_size_2088_);
lean_dec(v_l_1987_);
v___x_2092_ = lean_box(0);
v_isShared_2093_ = v_isSharedCheck_2103_;
goto v_resetjp_2091_;
}
v_resetjp_2091_:
{
lean_object* v_size_2094_; lean_object* v___x_2095_; lean_object* v___x_2096_; lean_object* v___x_2098_; 
v_size_2094_ = lean_ctor_get(v_r_2087_, 0);
v___x_2095_ = lean_nat_add(v___x_1995_, v_size_2088_);
lean_dec(v_size_2088_);
v___x_2096_ = lean_nat_add(v___x_1995_, v_size_2094_);
if (v_isShared_2093_ == 0)
{
lean_ctor_set(v___x_2092_, 4, v_impl_1994_);
lean_ctor_set(v___x_2092_, 3, v_r_2087_);
lean_ctor_set(v___x_2092_, 2, v_v_1986_);
lean_ctor_set(v___x_2092_, 1, v_k_1985_);
lean_ctor_set(v___x_2092_, 0, v___x_2096_);
v___x_2098_ = v___x_2092_;
goto v_reusejp_2097_;
}
else
{
lean_object* v_reuseFailAlloc_2102_; 
v_reuseFailAlloc_2102_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2102_, 0, v___x_2096_);
lean_ctor_set(v_reuseFailAlloc_2102_, 1, v_k_1985_);
lean_ctor_set(v_reuseFailAlloc_2102_, 2, v_v_1986_);
lean_ctor_set(v_reuseFailAlloc_2102_, 3, v_r_2087_);
lean_ctor_set(v_reuseFailAlloc_2102_, 4, v_impl_1994_);
v___x_2098_ = v_reuseFailAlloc_2102_;
goto v_reusejp_2097_;
}
v_reusejp_2097_:
{
lean_object* v___x_2100_; 
if (v_isShared_1991_ == 0)
{
lean_ctor_set(v___x_1990_, 4, v___x_2098_);
lean_ctor_set(v___x_1990_, 3, v_l_2086_);
lean_ctor_set(v___x_1990_, 2, v_v_2090_);
lean_ctor_set(v___x_1990_, 1, v_k_2089_);
lean_ctor_set(v___x_1990_, 0, v___x_2095_);
v___x_2100_ = v___x_1990_;
goto v_reusejp_2099_;
}
else
{
lean_object* v_reuseFailAlloc_2101_; 
v_reuseFailAlloc_2101_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2101_, 0, v___x_2095_);
lean_ctor_set(v_reuseFailAlloc_2101_, 1, v_k_2089_);
lean_ctor_set(v_reuseFailAlloc_2101_, 2, v_v_2090_);
lean_ctor_set(v_reuseFailAlloc_2101_, 3, v_l_2086_);
lean_ctor_set(v_reuseFailAlloc_2101_, 4, v___x_2098_);
v___x_2100_ = v_reuseFailAlloc_2101_;
goto v_reusejp_2099_;
}
v_reusejp_2099_:
{
return v___x_2100_;
}
}
}
}
else
{
lean_object* v_k_2106_; lean_object* v_v_2107_; lean_object* v___x_2109_; uint8_t v_isShared_2110_; uint8_t v_isSharedCheck_2118_; 
v_k_2106_ = lean_ctor_get(v_l_1987_, 1);
v_v_2107_ = lean_ctor_get(v_l_1987_, 2);
v_isSharedCheck_2118_ = !lean_is_exclusive(v_l_1987_);
if (v_isSharedCheck_2118_ == 0)
{
lean_object* v_unused_2119_; lean_object* v_unused_2120_; lean_object* v_unused_2121_; 
v_unused_2119_ = lean_ctor_get(v_l_1987_, 4);
lean_dec(v_unused_2119_);
v_unused_2120_ = lean_ctor_get(v_l_1987_, 3);
lean_dec(v_unused_2120_);
v_unused_2121_ = lean_ctor_get(v_l_1987_, 0);
lean_dec(v_unused_2121_);
v___x_2109_ = v_l_1987_;
v_isShared_2110_ = v_isSharedCheck_2118_;
goto v_resetjp_2108_;
}
else
{
lean_inc(v_v_2107_);
lean_inc(v_k_2106_);
lean_dec(v_l_1987_);
v___x_2109_ = lean_box(0);
v_isShared_2110_ = v_isSharedCheck_2118_;
goto v_resetjp_2108_;
}
v_resetjp_2108_:
{
lean_object* v___x_2111_; lean_object* v___x_2113_; 
v___x_2111_ = lean_unsigned_to_nat(3u);
if (v_isShared_2110_ == 0)
{
lean_ctor_set(v___x_2109_, 3, v_r_2087_);
lean_ctor_set(v___x_2109_, 2, v_v_1986_);
lean_ctor_set(v___x_2109_, 1, v_k_1985_);
lean_ctor_set(v___x_2109_, 0, v___x_1995_);
v___x_2113_ = v___x_2109_;
goto v_reusejp_2112_;
}
else
{
lean_object* v_reuseFailAlloc_2117_; 
v_reuseFailAlloc_2117_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2117_, 0, v___x_1995_);
lean_ctor_set(v_reuseFailAlloc_2117_, 1, v_k_1985_);
lean_ctor_set(v_reuseFailAlloc_2117_, 2, v_v_1986_);
lean_ctor_set(v_reuseFailAlloc_2117_, 3, v_r_2087_);
lean_ctor_set(v_reuseFailAlloc_2117_, 4, v_r_2087_);
v___x_2113_ = v_reuseFailAlloc_2117_;
goto v_reusejp_2112_;
}
v_reusejp_2112_:
{
lean_object* v___x_2115_; 
if (v_isShared_1991_ == 0)
{
lean_ctor_set(v___x_1990_, 4, v___x_2113_);
lean_ctor_set(v___x_1990_, 3, v_l_2086_);
lean_ctor_set(v___x_1990_, 2, v_v_2107_);
lean_ctor_set(v___x_1990_, 1, v_k_2106_);
lean_ctor_set(v___x_1990_, 0, v___x_2111_);
v___x_2115_ = v___x_1990_;
goto v_reusejp_2114_;
}
else
{
lean_object* v_reuseFailAlloc_2116_; 
v_reuseFailAlloc_2116_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2116_, 0, v___x_2111_);
lean_ctor_set(v_reuseFailAlloc_2116_, 1, v_k_2106_);
lean_ctor_set(v_reuseFailAlloc_2116_, 2, v_v_2107_);
lean_ctor_set(v_reuseFailAlloc_2116_, 3, v_l_2086_);
lean_ctor_set(v_reuseFailAlloc_2116_, 4, v___x_2113_);
v___x_2115_ = v_reuseFailAlloc_2116_;
goto v_reusejp_2114_;
}
v_reusejp_2114_:
{
return v___x_2115_;
}
}
}
}
}
else
{
lean_object* v_r_2122_; 
v_r_2122_ = lean_ctor_get(v_l_1987_, 4);
lean_inc(v_r_2122_);
if (lean_obj_tag(v_r_2122_) == 0)
{
lean_object* v_k_2123_; lean_object* v_v_2124_; lean_object* v___x_2126_; uint8_t v_isShared_2127_; uint8_t v_isSharedCheck_2147_; 
lean_inc(v_l_2086_);
v_k_2123_ = lean_ctor_get(v_l_1987_, 1);
v_v_2124_ = lean_ctor_get(v_l_1987_, 2);
v_isSharedCheck_2147_ = !lean_is_exclusive(v_l_1987_);
if (v_isSharedCheck_2147_ == 0)
{
lean_object* v_unused_2148_; lean_object* v_unused_2149_; lean_object* v_unused_2150_; 
v_unused_2148_ = lean_ctor_get(v_l_1987_, 4);
lean_dec(v_unused_2148_);
v_unused_2149_ = lean_ctor_get(v_l_1987_, 3);
lean_dec(v_unused_2149_);
v_unused_2150_ = lean_ctor_get(v_l_1987_, 0);
lean_dec(v_unused_2150_);
v___x_2126_ = v_l_1987_;
v_isShared_2127_ = v_isSharedCheck_2147_;
goto v_resetjp_2125_;
}
else
{
lean_inc(v_v_2124_);
lean_inc(v_k_2123_);
lean_dec(v_l_1987_);
v___x_2126_ = lean_box(0);
v_isShared_2127_ = v_isSharedCheck_2147_;
goto v_resetjp_2125_;
}
v_resetjp_2125_:
{
lean_object* v_k_2128_; lean_object* v_v_2129_; lean_object* v___x_2131_; uint8_t v_isShared_2132_; uint8_t v_isSharedCheck_2143_; 
v_k_2128_ = lean_ctor_get(v_r_2122_, 1);
v_v_2129_ = lean_ctor_get(v_r_2122_, 2);
v_isSharedCheck_2143_ = !lean_is_exclusive(v_r_2122_);
if (v_isSharedCheck_2143_ == 0)
{
lean_object* v_unused_2144_; lean_object* v_unused_2145_; lean_object* v_unused_2146_; 
v_unused_2144_ = lean_ctor_get(v_r_2122_, 4);
lean_dec(v_unused_2144_);
v_unused_2145_ = lean_ctor_get(v_r_2122_, 3);
lean_dec(v_unused_2145_);
v_unused_2146_ = lean_ctor_get(v_r_2122_, 0);
lean_dec(v_unused_2146_);
v___x_2131_ = v_r_2122_;
v_isShared_2132_ = v_isSharedCheck_2143_;
goto v_resetjp_2130_;
}
else
{
lean_inc(v_v_2129_);
lean_inc(v_k_2128_);
lean_dec(v_r_2122_);
v___x_2131_ = lean_box(0);
v_isShared_2132_ = v_isSharedCheck_2143_;
goto v_resetjp_2130_;
}
v_resetjp_2130_:
{
lean_object* v___x_2133_; lean_object* v___x_2135_; 
v___x_2133_ = lean_unsigned_to_nat(3u);
if (v_isShared_2132_ == 0)
{
lean_ctor_set(v___x_2131_, 4, v_l_2086_);
lean_ctor_set(v___x_2131_, 3, v_l_2086_);
lean_ctor_set(v___x_2131_, 2, v_v_2124_);
lean_ctor_set(v___x_2131_, 1, v_k_2123_);
lean_ctor_set(v___x_2131_, 0, v___x_1995_);
v___x_2135_ = v___x_2131_;
goto v_reusejp_2134_;
}
else
{
lean_object* v_reuseFailAlloc_2142_; 
v_reuseFailAlloc_2142_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2142_, 0, v___x_1995_);
lean_ctor_set(v_reuseFailAlloc_2142_, 1, v_k_2123_);
lean_ctor_set(v_reuseFailAlloc_2142_, 2, v_v_2124_);
lean_ctor_set(v_reuseFailAlloc_2142_, 3, v_l_2086_);
lean_ctor_set(v_reuseFailAlloc_2142_, 4, v_l_2086_);
v___x_2135_ = v_reuseFailAlloc_2142_;
goto v_reusejp_2134_;
}
v_reusejp_2134_:
{
lean_object* v___x_2137_; 
if (v_isShared_2127_ == 0)
{
lean_ctor_set(v___x_2126_, 4, v_l_2086_);
lean_ctor_set(v___x_2126_, 2, v_v_1986_);
lean_ctor_set(v___x_2126_, 1, v_k_1985_);
lean_ctor_set(v___x_2126_, 0, v___x_1995_);
v___x_2137_ = v___x_2126_;
goto v_reusejp_2136_;
}
else
{
lean_object* v_reuseFailAlloc_2141_; 
v_reuseFailAlloc_2141_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2141_, 0, v___x_1995_);
lean_ctor_set(v_reuseFailAlloc_2141_, 1, v_k_1985_);
lean_ctor_set(v_reuseFailAlloc_2141_, 2, v_v_1986_);
lean_ctor_set(v_reuseFailAlloc_2141_, 3, v_l_2086_);
lean_ctor_set(v_reuseFailAlloc_2141_, 4, v_l_2086_);
v___x_2137_ = v_reuseFailAlloc_2141_;
goto v_reusejp_2136_;
}
v_reusejp_2136_:
{
lean_object* v___x_2139_; 
if (v_isShared_1991_ == 0)
{
lean_ctor_set(v___x_1990_, 4, v___x_2137_);
lean_ctor_set(v___x_1990_, 3, v___x_2135_);
lean_ctor_set(v___x_1990_, 2, v_v_2129_);
lean_ctor_set(v___x_1990_, 1, v_k_2128_);
lean_ctor_set(v___x_1990_, 0, v___x_2133_);
v___x_2139_ = v___x_1990_;
goto v_reusejp_2138_;
}
else
{
lean_object* v_reuseFailAlloc_2140_; 
v_reuseFailAlloc_2140_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2140_, 0, v___x_2133_);
lean_ctor_set(v_reuseFailAlloc_2140_, 1, v_k_2128_);
lean_ctor_set(v_reuseFailAlloc_2140_, 2, v_v_2129_);
lean_ctor_set(v_reuseFailAlloc_2140_, 3, v___x_2135_);
lean_ctor_set(v_reuseFailAlloc_2140_, 4, v___x_2137_);
v___x_2139_ = v_reuseFailAlloc_2140_;
goto v_reusejp_2138_;
}
v_reusejp_2138_:
{
return v___x_2139_;
}
}
}
}
}
}
else
{
lean_object* v___x_2151_; lean_object* v___x_2153_; 
v___x_2151_ = lean_unsigned_to_nat(2u);
if (v_isShared_1991_ == 0)
{
lean_ctor_set(v___x_1990_, 4, v_r_2122_);
lean_ctor_set(v___x_1990_, 0, v___x_2151_);
v___x_2153_ = v___x_1990_;
goto v_reusejp_2152_;
}
else
{
lean_object* v_reuseFailAlloc_2154_; 
v_reuseFailAlloc_2154_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2154_, 0, v___x_2151_);
lean_ctor_set(v_reuseFailAlloc_2154_, 1, v_k_1985_);
lean_ctor_set(v_reuseFailAlloc_2154_, 2, v_v_1986_);
lean_ctor_set(v_reuseFailAlloc_2154_, 3, v_l_1987_);
lean_ctor_set(v_reuseFailAlloc_2154_, 4, v_r_2122_);
v___x_2153_ = v_reuseFailAlloc_2154_;
goto v_reusejp_2152_;
}
v_reusejp_2152_:
{
return v___x_2153_;
}
}
}
}
else
{
lean_object* v___x_2156_; 
if (v_isShared_1991_ == 0)
{
lean_ctor_set(v___x_1990_, 4, v_l_1987_);
lean_ctor_set(v___x_1990_, 0, v___x_1995_);
v___x_2156_ = v___x_1990_;
goto v_reusejp_2155_;
}
else
{
lean_object* v_reuseFailAlloc_2157_; 
v_reuseFailAlloc_2157_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2157_, 0, v___x_1995_);
lean_ctor_set(v_reuseFailAlloc_2157_, 1, v_k_1985_);
lean_ctor_set(v_reuseFailAlloc_2157_, 2, v_v_1986_);
lean_ctor_set(v_reuseFailAlloc_2157_, 3, v_l_1987_);
lean_ctor_set(v_reuseFailAlloc_2157_, 4, v_l_1987_);
v___x_2156_ = v_reuseFailAlloc_2157_;
goto v_reusejp_2155_;
}
v_reusejp_2155_:
{
return v___x_2156_;
}
}
}
}
else
{
lean_del_object(v___x_1990_);
lean_dec(v_v_1986_);
lean_dec(v_k_1985_);
if (lean_obj_tag(v_l_1987_) == 0)
{
if (lean_obj_tag(v_r_1988_) == 0)
{
lean_object* v_size_2158_; lean_object* v_k_2159_; lean_object* v_v_2160_; lean_object* v_l_2161_; lean_object* v_r_2162_; lean_object* v_size_2163_; lean_object* v_k_2164_; lean_object* v_v_2165_; lean_object* v_l_2166_; lean_object* v_r_2167_; lean_object* v___x_2168_; uint8_t v___x_2169_; 
v_size_2158_ = lean_ctor_get(v_l_1987_, 0);
v_k_2159_ = lean_ctor_get(v_l_1987_, 1);
v_v_2160_ = lean_ctor_get(v_l_1987_, 2);
v_l_2161_ = lean_ctor_get(v_l_1987_, 3);
v_r_2162_ = lean_ctor_get(v_l_1987_, 4);
lean_inc(v_r_2162_);
v_size_2163_ = lean_ctor_get(v_r_1988_, 0);
v_k_2164_ = lean_ctor_get(v_r_1988_, 1);
v_v_2165_ = lean_ctor_get(v_r_1988_, 2);
v_l_2166_ = lean_ctor_get(v_r_1988_, 3);
lean_inc(v_l_2166_);
v_r_2167_ = lean_ctor_get(v_r_1988_, 4);
v___x_2168_ = lean_unsigned_to_nat(1u);
v___x_2169_ = lean_nat_dec_lt(v_size_2158_, v_size_2163_);
if (v___x_2169_ == 0)
{
lean_object* v___x_2171_; uint8_t v_isShared_2172_; uint8_t v_isSharedCheck_2305_; 
lean_inc(v_l_2161_);
lean_inc(v_v_2160_);
lean_inc(v_k_2159_);
v_isSharedCheck_2305_ = !lean_is_exclusive(v_l_1987_);
if (v_isSharedCheck_2305_ == 0)
{
lean_object* v_unused_2306_; lean_object* v_unused_2307_; lean_object* v_unused_2308_; lean_object* v_unused_2309_; lean_object* v_unused_2310_; 
v_unused_2306_ = lean_ctor_get(v_l_1987_, 4);
lean_dec(v_unused_2306_);
v_unused_2307_ = lean_ctor_get(v_l_1987_, 3);
lean_dec(v_unused_2307_);
v_unused_2308_ = lean_ctor_get(v_l_1987_, 2);
lean_dec(v_unused_2308_);
v_unused_2309_ = lean_ctor_get(v_l_1987_, 1);
lean_dec(v_unused_2309_);
v_unused_2310_ = lean_ctor_get(v_l_1987_, 0);
lean_dec(v_unused_2310_);
v___x_2171_ = v_l_1987_;
v_isShared_2172_ = v_isSharedCheck_2305_;
goto v_resetjp_2170_;
}
else
{
lean_dec(v_l_1987_);
v___x_2171_ = lean_box(0);
v_isShared_2172_ = v_isSharedCheck_2305_;
goto v_resetjp_2170_;
}
v_resetjp_2170_:
{
lean_object* v___x_2173_; lean_object* v_tree_2174_; 
v___x_2173_ = l_Std_DTreeMap_Internal_Impl_maxView___redArg(v_k_2159_, v_v_2160_, v_l_2161_, v_r_2162_);
v_tree_2174_ = lean_ctor_get(v___x_2173_, 2);
lean_inc(v_tree_2174_);
if (lean_obj_tag(v_tree_2174_) == 0)
{
lean_object* v_k_2175_; lean_object* v_v_2176_; lean_object* v_size_2177_; lean_object* v___x_2178_; lean_object* v___x_2179_; uint8_t v___x_2180_; 
v_k_2175_ = lean_ctor_get(v___x_2173_, 0);
lean_inc(v_k_2175_);
v_v_2176_ = lean_ctor_get(v___x_2173_, 1);
lean_inc(v_v_2176_);
lean_dec_ref(v___x_2173_);
v_size_2177_ = lean_ctor_get(v_tree_2174_, 0);
v___x_2178_ = lean_unsigned_to_nat(3u);
v___x_2179_ = lean_nat_mul(v___x_2178_, v_size_2177_);
v___x_2180_ = lean_nat_dec_lt(v___x_2179_, v_size_2163_);
lean_dec(v___x_2179_);
if (v___x_2180_ == 0)
{
lean_object* v___x_2181_; lean_object* v___x_2182_; lean_object* v___x_2184_; 
lean_dec(v_l_2166_);
v___x_2181_ = lean_nat_add(v___x_2168_, v_size_2177_);
v___x_2182_ = lean_nat_add(v___x_2181_, v_size_2163_);
lean_dec(v___x_2181_);
if (v_isShared_2172_ == 0)
{
lean_ctor_set(v___x_2171_, 4, v_r_1988_);
lean_ctor_set(v___x_2171_, 3, v_tree_2174_);
lean_ctor_set(v___x_2171_, 2, v_v_2176_);
lean_ctor_set(v___x_2171_, 1, v_k_2175_);
lean_ctor_set(v___x_2171_, 0, v___x_2182_);
v___x_2184_ = v___x_2171_;
goto v_reusejp_2183_;
}
else
{
lean_object* v_reuseFailAlloc_2185_; 
v_reuseFailAlloc_2185_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2185_, 0, v___x_2182_);
lean_ctor_set(v_reuseFailAlloc_2185_, 1, v_k_2175_);
lean_ctor_set(v_reuseFailAlloc_2185_, 2, v_v_2176_);
lean_ctor_set(v_reuseFailAlloc_2185_, 3, v_tree_2174_);
lean_ctor_set(v_reuseFailAlloc_2185_, 4, v_r_1988_);
v___x_2184_ = v_reuseFailAlloc_2185_;
goto v_reusejp_2183_;
}
v_reusejp_2183_:
{
return v___x_2184_;
}
}
else
{
lean_object* v___x_2187_; uint8_t v_isShared_2188_; uint8_t v_isSharedCheck_2240_; 
lean_inc(v_r_2167_);
lean_inc(v_v_2165_);
lean_inc(v_k_2164_);
lean_inc(v_size_2163_);
v_isSharedCheck_2240_ = !lean_is_exclusive(v_r_1988_);
if (v_isSharedCheck_2240_ == 0)
{
lean_object* v_unused_2241_; lean_object* v_unused_2242_; lean_object* v_unused_2243_; lean_object* v_unused_2244_; lean_object* v_unused_2245_; 
v_unused_2241_ = lean_ctor_get(v_r_1988_, 4);
lean_dec(v_unused_2241_);
v_unused_2242_ = lean_ctor_get(v_r_1988_, 3);
lean_dec(v_unused_2242_);
v_unused_2243_ = lean_ctor_get(v_r_1988_, 2);
lean_dec(v_unused_2243_);
v_unused_2244_ = lean_ctor_get(v_r_1988_, 1);
lean_dec(v_unused_2244_);
v_unused_2245_ = lean_ctor_get(v_r_1988_, 0);
lean_dec(v_unused_2245_);
v___x_2187_ = v_r_1988_;
v_isShared_2188_ = v_isSharedCheck_2240_;
goto v_resetjp_2186_;
}
else
{
lean_dec(v_r_1988_);
v___x_2187_ = lean_box(0);
v_isShared_2188_ = v_isSharedCheck_2240_;
goto v_resetjp_2186_;
}
v_resetjp_2186_:
{
lean_object* v_size_2189_; lean_object* v_k_2190_; lean_object* v_v_2191_; lean_object* v_l_2192_; lean_object* v_r_2193_; lean_object* v_size_2194_; lean_object* v___x_2195_; lean_object* v___x_2196_; uint8_t v___x_2197_; 
v_size_2189_ = lean_ctor_get(v_l_2166_, 0);
v_k_2190_ = lean_ctor_get(v_l_2166_, 1);
v_v_2191_ = lean_ctor_get(v_l_2166_, 2);
v_l_2192_ = lean_ctor_get(v_l_2166_, 3);
v_r_2193_ = lean_ctor_get(v_l_2166_, 4);
v_size_2194_ = lean_ctor_get(v_r_2167_, 0);
v___x_2195_ = lean_unsigned_to_nat(2u);
v___x_2196_ = lean_nat_mul(v___x_2195_, v_size_2194_);
v___x_2197_ = lean_nat_dec_lt(v_size_2189_, v___x_2196_);
lean_dec(v___x_2196_);
if (v___x_2197_ == 0)
{
lean_object* v___x_2199_; uint8_t v_isShared_2200_; uint8_t v_isSharedCheck_2225_; 
lean_inc(v_r_2193_);
lean_inc(v_l_2192_);
lean_inc(v_v_2191_);
lean_inc(v_k_2190_);
v_isSharedCheck_2225_ = !lean_is_exclusive(v_l_2166_);
if (v_isSharedCheck_2225_ == 0)
{
lean_object* v_unused_2226_; lean_object* v_unused_2227_; lean_object* v_unused_2228_; lean_object* v_unused_2229_; lean_object* v_unused_2230_; 
v_unused_2226_ = lean_ctor_get(v_l_2166_, 4);
lean_dec(v_unused_2226_);
v_unused_2227_ = lean_ctor_get(v_l_2166_, 3);
lean_dec(v_unused_2227_);
v_unused_2228_ = lean_ctor_get(v_l_2166_, 2);
lean_dec(v_unused_2228_);
v_unused_2229_ = lean_ctor_get(v_l_2166_, 1);
lean_dec(v_unused_2229_);
v_unused_2230_ = lean_ctor_get(v_l_2166_, 0);
lean_dec(v_unused_2230_);
v___x_2199_ = v_l_2166_;
v_isShared_2200_ = v_isSharedCheck_2225_;
goto v_resetjp_2198_;
}
else
{
lean_dec(v_l_2166_);
v___x_2199_ = lean_box(0);
v_isShared_2200_ = v_isSharedCheck_2225_;
goto v_resetjp_2198_;
}
v_resetjp_2198_:
{
lean_object* v___x_2201_; lean_object* v___x_2202_; lean_object* v___y_2204_; lean_object* v___y_2205_; lean_object* v___y_2206_; lean_object* v___y_2215_; 
v___x_2201_ = lean_nat_add(v___x_2168_, v_size_2177_);
v___x_2202_ = lean_nat_add(v___x_2201_, v_size_2163_);
lean_dec(v_size_2163_);
if (lean_obj_tag(v_l_2192_) == 0)
{
lean_object* v_size_2223_; 
v_size_2223_ = lean_ctor_get(v_l_2192_, 0);
lean_inc(v_size_2223_);
v___y_2215_ = v_size_2223_;
goto v___jp_2214_;
}
else
{
lean_object* v___x_2224_; 
v___x_2224_ = lean_unsigned_to_nat(0u);
v___y_2215_ = v___x_2224_;
goto v___jp_2214_;
}
v___jp_2203_:
{
lean_object* v___x_2207_; lean_object* v___x_2209_; 
v___x_2207_ = lean_nat_add(v___y_2205_, v___y_2206_);
lean_dec(v___y_2206_);
lean_dec(v___y_2205_);
if (v_isShared_2200_ == 0)
{
lean_ctor_set(v___x_2199_, 4, v_r_2167_);
lean_ctor_set(v___x_2199_, 3, v_r_2193_);
lean_ctor_set(v___x_2199_, 2, v_v_2165_);
lean_ctor_set(v___x_2199_, 1, v_k_2164_);
lean_ctor_set(v___x_2199_, 0, v___x_2207_);
v___x_2209_ = v___x_2199_;
goto v_reusejp_2208_;
}
else
{
lean_object* v_reuseFailAlloc_2213_; 
v_reuseFailAlloc_2213_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2213_, 0, v___x_2207_);
lean_ctor_set(v_reuseFailAlloc_2213_, 1, v_k_2164_);
lean_ctor_set(v_reuseFailAlloc_2213_, 2, v_v_2165_);
lean_ctor_set(v_reuseFailAlloc_2213_, 3, v_r_2193_);
lean_ctor_set(v_reuseFailAlloc_2213_, 4, v_r_2167_);
v___x_2209_ = v_reuseFailAlloc_2213_;
goto v_reusejp_2208_;
}
v_reusejp_2208_:
{
lean_object* v___x_2211_; 
if (v_isShared_2188_ == 0)
{
lean_ctor_set(v___x_2187_, 4, v___x_2209_);
lean_ctor_set(v___x_2187_, 3, v___y_2204_);
lean_ctor_set(v___x_2187_, 2, v_v_2191_);
lean_ctor_set(v___x_2187_, 1, v_k_2190_);
lean_ctor_set(v___x_2187_, 0, v___x_2202_);
v___x_2211_ = v___x_2187_;
goto v_reusejp_2210_;
}
else
{
lean_object* v_reuseFailAlloc_2212_; 
v_reuseFailAlloc_2212_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2212_, 0, v___x_2202_);
lean_ctor_set(v_reuseFailAlloc_2212_, 1, v_k_2190_);
lean_ctor_set(v_reuseFailAlloc_2212_, 2, v_v_2191_);
lean_ctor_set(v_reuseFailAlloc_2212_, 3, v___y_2204_);
lean_ctor_set(v_reuseFailAlloc_2212_, 4, v___x_2209_);
v___x_2211_ = v_reuseFailAlloc_2212_;
goto v_reusejp_2210_;
}
v_reusejp_2210_:
{
return v___x_2211_;
}
}
}
v___jp_2214_:
{
lean_object* v___x_2216_; lean_object* v___x_2218_; 
v___x_2216_ = lean_nat_add(v___x_2201_, v___y_2215_);
lean_dec(v___y_2215_);
lean_dec(v___x_2201_);
if (v_isShared_2172_ == 0)
{
lean_ctor_set(v___x_2171_, 4, v_l_2192_);
lean_ctor_set(v___x_2171_, 3, v_tree_2174_);
lean_ctor_set(v___x_2171_, 2, v_v_2176_);
lean_ctor_set(v___x_2171_, 1, v_k_2175_);
lean_ctor_set(v___x_2171_, 0, v___x_2216_);
v___x_2218_ = v___x_2171_;
goto v_reusejp_2217_;
}
else
{
lean_object* v_reuseFailAlloc_2222_; 
v_reuseFailAlloc_2222_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2222_, 0, v___x_2216_);
lean_ctor_set(v_reuseFailAlloc_2222_, 1, v_k_2175_);
lean_ctor_set(v_reuseFailAlloc_2222_, 2, v_v_2176_);
lean_ctor_set(v_reuseFailAlloc_2222_, 3, v_tree_2174_);
lean_ctor_set(v_reuseFailAlloc_2222_, 4, v_l_2192_);
v___x_2218_ = v_reuseFailAlloc_2222_;
goto v_reusejp_2217_;
}
v_reusejp_2217_:
{
lean_object* v___x_2219_; 
v___x_2219_ = lean_nat_add(v___x_2168_, v_size_2194_);
if (lean_obj_tag(v_r_2193_) == 0)
{
lean_object* v_size_2220_; 
v_size_2220_ = lean_ctor_get(v_r_2193_, 0);
lean_inc(v_size_2220_);
v___y_2204_ = v___x_2218_;
v___y_2205_ = v___x_2219_;
v___y_2206_ = v_size_2220_;
goto v___jp_2203_;
}
else
{
lean_object* v___x_2221_; 
v___x_2221_ = lean_unsigned_to_nat(0u);
v___y_2204_ = v___x_2218_;
v___y_2205_ = v___x_2219_;
v___y_2206_ = v___x_2221_;
goto v___jp_2203_;
}
}
}
}
}
else
{
lean_object* v___x_2231_; lean_object* v___x_2232_; lean_object* v___x_2233_; lean_object* v___x_2235_; 
v___x_2231_ = lean_nat_add(v___x_2168_, v_size_2177_);
v___x_2232_ = lean_nat_add(v___x_2231_, v_size_2163_);
lean_dec(v_size_2163_);
v___x_2233_ = lean_nat_add(v___x_2231_, v_size_2189_);
lean_dec(v___x_2231_);
if (v_isShared_2188_ == 0)
{
lean_ctor_set(v___x_2187_, 4, v_l_2166_);
lean_ctor_set(v___x_2187_, 3, v_tree_2174_);
lean_ctor_set(v___x_2187_, 2, v_v_2176_);
lean_ctor_set(v___x_2187_, 1, v_k_2175_);
lean_ctor_set(v___x_2187_, 0, v___x_2233_);
v___x_2235_ = v___x_2187_;
goto v_reusejp_2234_;
}
else
{
lean_object* v_reuseFailAlloc_2239_; 
v_reuseFailAlloc_2239_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2239_, 0, v___x_2233_);
lean_ctor_set(v_reuseFailAlloc_2239_, 1, v_k_2175_);
lean_ctor_set(v_reuseFailAlloc_2239_, 2, v_v_2176_);
lean_ctor_set(v_reuseFailAlloc_2239_, 3, v_tree_2174_);
lean_ctor_set(v_reuseFailAlloc_2239_, 4, v_l_2166_);
v___x_2235_ = v_reuseFailAlloc_2239_;
goto v_reusejp_2234_;
}
v_reusejp_2234_:
{
lean_object* v___x_2237_; 
if (v_isShared_2172_ == 0)
{
lean_ctor_set(v___x_2171_, 4, v_r_2167_);
lean_ctor_set(v___x_2171_, 3, v___x_2235_);
lean_ctor_set(v___x_2171_, 2, v_v_2165_);
lean_ctor_set(v___x_2171_, 1, v_k_2164_);
lean_ctor_set(v___x_2171_, 0, v___x_2232_);
v___x_2237_ = v___x_2171_;
goto v_reusejp_2236_;
}
else
{
lean_object* v_reuseFailAlloc_2238_; 
v_reuseFailAlloc_2238_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2238_, 0, v___x_2232_);
lean_ctor_set(v_reuseFailAlloc_2238_, 1, v_k_2164_);
lean_ctor_set(v_reuseFailAlloc_2238_, 2, v_v_2165_);
lean_ctor_set(v_reuseFailAlloc_2238_, 3, v___x_2235_);
lean_ctor_set(v_reuseFailAlloc_2238_, 4, v_r_2167_);
v___x_2237_ = v_reuseFailAlloc_2238_;
goto v_reusejp_2236_;
}
v_reusejp_2236_:
{
return v___x_2237_;
}
}
}
}
}
}
else
{
lean_object* v___x_2247_; uint8_t v_isShared_2248_; uint8_t v_isSharedCheck_2299_; 
lean_inc(v_r_2167_);
lean_inc(v_v_2165_);
lean_inc(v_k_2164_);
lean_inc(v_size_2163_);
v_isSharedCheck_2299_ = !lean_is_exclusive(v_r_1988_);
if (v_isSharedCheck_2299_ == 0)
{
lean_object* v_unused_2300_; lean_object* v_unused_2301_; lean_object* v_unused_2302_; lean_object* v_unused_2303_; lean_object* v_unused_2304_; 
v_unused_2300_ = lean_ctor_get(v_r_1988_, 4);
lean_dec(v_unused_2300_);
v_unused_2301_ = lean_ctor_get(v_r_1988_, 3);
lean_dec(v_unused_2301_);
v_unused_2302_ = lean_ctor_get(v_r_1988_, 2);
lean_dec(v_unused_2302_);
v_unused_2303_ = lean_ctor_get(v_r_1988_, 1);
lean_dec(v_unused_2303_);
v_unused_2304_ = lean_ctor_get(v_r_1988_, 0);
lean_dec(v_unused_2304_);
v___x_2247_ = v_r_1988_;
v_isShared_2248_ = v_isSharedCheck_2299_;
goto v_resetjp_2246_;
}
else
{
lean_dec(v_r_1988_);
v___x_2247_ = lean_box(0);
v_isShared_2248_ = v_isSharedCheck_2299_;
goto v_resetjp_2246_;
}
v_resetjp_2246_:
{
if (lean_obj_tag(v_l_2166_) == 0)
{
if (lean_obj_tag(v_r_2167_) == 0)
{
lean_object* v_k_2249_; lean_object* v_v_2250_; lean_object* v_size_2251_; lean_object* v___x_2252_; lean_object* v___x_2253_; lean_object* v___x_2255_; 
v_k_2249_ = lean_ctor_get(v___x_2173_, 0);
lean_inc(v_k_2249_);
v_v_2250_ = lean_ctor_get(v___x_2173_, 1);
lean_inc(v_v_2250_);
lean_dec_ref(v___x_2173_);
v_size_2251_ = lean_ctor_get(v_l_2166_, 0);
v___x_2252_ = lean_nat_add(v___x_2168_, v_size_2163_);
lean_dec(v_size_2163_);
v___x_2253_ = lean_nat_add(v___x_2168_, v_size_2251_);
if (v_isShared_2248_ == 0)
{
lean_ctor_set(v___x_2247_, 4, v_l_2166_);
lean_ctor_set(v___x_2247_, 3, v_tree_2174_);
lean_ctor_set(v___x_2247_, 2, v_v_2250_);
lean_ctor_set(v___x_2247_, 1, v_k_2249_);
lean_ctor_set(v___x_2247_, 0, v___x_2253_);
v___x_2255_ = v___x_2247_;
goto v_reusejp_2254_;
}
else
{
lean_object* v_reuseFailAlloc_2259_; 
v_reuseFailAlloc_2259_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2259_, 0, v___x_2253_);
lean_ctor_set(v_reuseFailAlloc_2259_, 1, v_k_2249_);
lean_ctor_set(v_reuseFailAlloc_2259_, 2, v_v_2250_);
lean_ctor_set(v_reuseFailAlloc_2259_, 3, v_tree_2174_);
lean_ctor_set(v_reuseFailAlloc_2259_, 4, v_l_2166_);
v___x_2255_ = v_reuseFailAlloc_2259_;
goto v_reusejp_2254_;
}
v_reusejp_2254_:
{
lean_object* v___x_2257_; 
if (v_isShared_2172_ == 0)
{
lean_ctor_set(v___x_2171_, 4, v_r_2167_);
lean_ctor_set(v___x_2171_, 3, v___x_2255_);
lean_ctor_set(v___x_2171_, 2, v_v_2165_);
lean_ctor_set(v___x_2171_, 1, v_k_2164_);
lean_ctor_set(v___x_2171_, 0, v___x_2252_);
v___x_2257_ = v___x_2171_;
goto v_reusejp_2256_;
}
else
{
lean_object* v_reuseFailAlloc_2258_; 
v_reuseFailAlloc_2258_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2258_, 0, v___x_2252_);
lean_ctor_set(v_reuseFailAlloc_2258_, 1, v_k_2164_);
lean_ctor_set(v_reuseFailAlloc_2258_, 2, v_v_2165_);
lean_ctor_set(v_reuseFailAlloc_2258_, 3, v___x_2255_);
lean_ctor_set(v_reuseFailAlloc_2258_, 4, v_r_2167_);
v___x_2257_ = v_reuseFailAlloc_2258_;
goto v_reusejp_2256_;
}
v_reusejp_2256_:
{
return v___x_2257_;
}
}
}
else
{
lean_object* v_k_2260_; lean_object* v_v_2261_; lean_object* v_k_2262_; lean_object* v_v_2263_; lean_object* v___x_2265_; uint8_t v_isShared_2266_; uint8_t v_isSharedCheck_2277_; 
lean_dec(v_size_2163_);
v_k_2260_ = lean_ctor_get(v___x_2173_, 0);
lean_inc(v_k_2260_);
v_v_2261_ = lean_ctor_get(v___x_2173_, 1);
lean_inc(v_v_2261_);
lean_dec_ref(v___x_2173_);
v_k_2262_ = lean_ctor_get(v_l_2166_, 1);
v_v_2263_ = lean_ctor_get(v_l_2166_, 2);
v_isSharedCheck_2277_ = !lean_is_exclusive(v_l_2166_);
if (v_isSharedCheck_2277_ == 0)
{
lean_object* v_unused_2278_; lean_object* v_unused_2279_; lean_object* v_unused_2280_; 
v_unused_2278_ = lean_ctor_get(v_l_2166_, 4);
lean_dec(v_unused_2278_);
v_unused_2279_ = lean_ctor_get(v_l_2166_, 3);
lean_dec(v_unused_2279_);
v_unused_2280_ = lean_ctor_get(v_l_2166_, 0);
lean_dec(v_unused_2280_);
v___x_2265_ = v_l_2166_;
v_isShared_2266_ = v_isSharedCheck_2277_;
goto v_resetjp_2264_;
}
else
{
lean_inc(v_v_2263_);
lean_inc(v_k_2262_);
lean_dec(v_l_2166_);
v___x_2265_ = lean_box(0);
v_isShared_2266_ = v_isSharedCheck_2277_;
goto v_resetjp_2264_;
}
v_resetjp_2264_:
{
lean_object* v___x_2267_; lean_object* v___x_2269_; 
v___x_2267_ = lean_unsigned_to_nat(3u);
if (v_isShared_2266_ == 0)
{
lean_ctor_set(v___x_2265_, 4, v_r_2167_);
lean_ctor_set(v___x_2265_, 3, v_r_2167_);
lean_ctor_set(v___x_2265_, 2, v_v_2261_);
lean_ctor_set(v___x_2265_, 1, v_k_2260_);
lean_ctor_set(v___x_2265_, 0, v___x_2168_);
v___x_2269_ = v___x_2265_;
goto v_reusejp_2268_;
}
else
{
lean_object* v_reuseFailAlloc_2276_; 
v_reuseFailAlloc_2276_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2276_, 0, v___x_2168_);
lean_ctor_set(v_reuseFailAlloc_2276_, 1, v_k_2260_);
lean_ctor_set(v_reuseFailAlloc_2276_, 2, v_v_2261_);
lean_ctor_set(v_reuseFailAlloc_2276_, 3, v_r_2167_);
lean_ctor_set(v_reuseFailAlloc_2276_, 4, v_r_2167_);
v___x_2269_ = v_reuseFailAlloc_2276_;
goto v_reusejp_2268_;
}
v_reusejp_2268_:
{
lean_object* v___x_2271_; 
if (v_isShared_2248_ == 0)
{
lean_ctor_set(v___x_2247_, 3, v_r_2167_);
lean_ctor_set(v___x_2247_, 0, v___x_2168_);
v___x_2271_ = v___x_2247_;
goto v_reusejp_2270_;
}
else
{
lean_object* v_reuseFailAlloc_2275_; 
v_reuseFailAlloc_2275_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2275_, 0, v___x_2168_);
lean_ctor_set(v_reuseFailAlloc_2275_, 1, v_k_2164_);
lean_ctor_set(v_reuseFailAlloc_2275_, 2, v_v_2165_);
lean_ctor_set(v_reuseFailAlloc_2275_, 3, v_r_2167_);
lean_ctor_set(v_reuseFailAlloc_2275_, 4, v_r_2167_);
v___x_2271_ = v_reuseFailAlloc_2275_;
goto v_reusejp_2270_;
}
v_reusejp_2270_:
{
lean_object* v___x_2273_; 
if (v_isShared_2172_ == 0)
{
lean_ctor_set(v___x_2171_, 4, v___x_2271_);
lean_ctor_set(v___x_2171_, 3, v___x_2269_);
lean_ctor_set(v___x_2171_, 2, v_v_2263_);
lean_ctor_set(v___x_2171_, 1, v_k_2262_);
lean_ctor_set(v___x_2171_, 0, v___x_2267_);
v___x_2273_ = v___x_2171_;
goto v_reusejp_2272_;
}
else
{
lean_object* v_reuseFailAlloc_2274_; 
v_reuseFailAlloc_2274_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2274_, 0, v___x_2267_);
lean_ctor_set(v_reuseFailAlloc_2274_, 1, v_k_2262_);
lean_ctor_set(v_reuseFailAlloc_2274_, 2, v_v_2263_);
lean_ctor_set(v_reuseFailAlloc_2274_, 3, v___x_2269_);
lean_ctor_set(v_reuseFailAlloc_2274_, 4, v___x_2271_);
v___x_2273_ = v_reuseFailAlloc_2274_;
goto v_reusejp_2272_;
}
v_reusejp_2272_:
{
return v___x_2273_;
}
}
}
}
}
}
else
{
if (lean_obj_tag(v_r_2167_) == 0)
{
lean_object* v_k_2281_; lean_object* v_v_2282_; lean_object* v___x_2283_; lean_object* v___x_2285_; 
lean_dec(v_size_2163_);
v_k_2281_ = lean_ctor_get(v___x_2173_, 0);
lean_inc(v_k_2281_);
v_v_2282_ = lean_ctor_get(v___x_2173_, 1);
lean_inc(v_v_2282_);
lean_dec_ref(v___x_2173_);
v___x_2283_ = lean_unsigned_to_nat(3u);
if (v_isShared_2248_ == 0)
{
lean_ctor_set(v___x_2247_, 4, v_l_2166_);
lean_ctor_set(v___x_2247_, 2, v_v_2282_);
lean_ctor_set(v___x_2247_, 1, v_k_2281_);
lean_ctor_set(v___x_2247_, 0, v___x_2168_);
v___x_2285_ = v___x_2247_;
goto v_reusejp_2284_;
}
else
{
lean_object* v_reuseFailAlloc_2289_; 
v_reuseFailAlloc_2289_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2289_, 0, v___x_2168_);
lean_ctor_set(v_reuseFailAlloc_2289_, 1, v_k_2281_);
lean_ctor_set(v_reuseFailAlloc_2289_, 2, v_v_2282_);
lean_ctor_set(v_reuseFailAlloc_2289_, 3, v_l_2166_);
lean_ctor_set(v_reuseFailAlloc_2289_, 4, v_l_2166_);
v___x_2285_ = v_reuseFailAlloc_2289_;
goto v_reusejp_2284_;
}
v_reusejp_2284_:
{
lean_object* v___x_2287_; 
if (v_isShared_2172_ == 0)
{
lean_ctor_set(v___x_2171_, 4, v_r_2167_);
lean_ctor_set(v___x_2171_, 3, v___x_2285_);
lean_ctor_set(v___x_2171_, 2, v_v_2165_);
lean_ctor_set(v___x_2171_, 1, v_k_2164_);
lean_ctor_set(v___x_2171_, 0, v___x_2283_);
v___x_2287_ = v___x_2171_;
goto v_reusejp_2286_;
}
else
{
lean_object* v_reuseFailAlloc_2288_; 
v_reuseFailAlloc_2288_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2288_, 0, v___x_2283_);
lean_ctor_set(v_reuseFailAlloc_2288_, 1, v_k_2164_);
lean_ctor_set(v_reuseFailAlloc_2288_, 2, v_v_2165_);
lean_ctor_set(v_reuseFailAlloc_2288_, 3, v___x_2285_);
lean_ctor_set(v_reuseFailAlloc_2288_, 4, v_r_2167_);
v___x_2287_ = v_reuseFailAlloc_2288_;
goto v_reusejp_2286_;
}
v_reusejp_2286_:
{
return v___x_2287_;
}
}
}
else
{
lean_object* v_k_2290_; lean_object* v_v_2291_; lean_object* v___x_2293_; 
v_k_2290_ = lean_ctor_get(v___x_2173_, 0);
lean_inc(v_k_2290_);
v_v_2291_ = lean_ctor_get(v___x_2173_, 1);
lean_inc(v_v_2291_);
lean_dec_ref(v___x_2173_);
if (v_isShared_2248_ == 0)
{
lean_ctor_set(v___x_2247_, 3, v_r_2167_);
v___x_2293_ = v___x_2247_;
goto v_reusejp_2292_;
}
else
{
lean_object* v_reuseFailAlloc_2298_; 
v_reuseFailAlloc_2298_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2298_, 0, v_size_2163_);
lean_ctor_set(v_reuseFailAlloc_2298_, 1, v_k_2164_);
lean_ctor_set(v_reuseFailAlloc_2298_, 2, v_v_2165_);
lean_ctor_set(v_reuseFailAlloc_2298_, 3, v_r_2167_);
lean_ctor_set(v_reuseFailAlloc_2298_, 4, v_r_2167_);
v___x_2293_ = v_reuseFailAlloc_2298_;
goto v_reusejp_2292_;
}
v_reusejp_2292_:
{
lean_object* v___x_2294_; lean_object* v___x_2296_; 
v___x_2294_ = lean_unsigned_to_nat(2u);
if (v_isShared_2172_ == 0)
{
lean_ctor_set(v___x_2171_, 4, v___x_2293_);
lean_ctor_set(v___x_2171_, 3, v_r_2167_);
lean_ctor_set(v___x_2171_, 2, v_v_2291_);
lean_ctor_set(v___x_2171_, 1, v_k_2290_);
lean_ctor_set(v___x_2171_, 0, v___x_2294_);
v___x_2296_ = v___x_2171_;
goto v_reusejp_2295_;
}
else
{
lean_object* v_reuseFailAlloc_2297_; 
v_reuseFailAlloc_2297_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2297_, 0, v___x_2294_);
lean_ctor_set(v_reuseFailAlloc_2297_, 1, v_k_2290_);
lean_ctor_set(v_reuseFailAlloc_2297_, 2, v_v_2291_);
lean_ctor_set(v_reuseFailAlloc_2297_, 3, v_r_2167_);
lean_ctor_set(v_reuseFailAlloc_2297_, 4, v___x_2293_);
v___x_2296_ = v_reuseFailAlloc_2297_;
goto v_reusejp_2295_;
}
v_reusejp_2295_:
{
return v___x_2296_;
}
}
}
}
}
}
}
}
else
{
lean_object* v___x_2312_; uint8_t v_isShared_2313_; uint8_t v_isSharedCheck_2463_; 
lean_inc(v_r_2167_);
lean_inc(v_v_2165_);
lean_inc(v_k_2164_);
v_isSharedCheck_2463_ = !lean_is_exclusive(v_r_1988_);
if (v_isSharedCheck_2463_ == 0)
{
lean_object* v_unused_2464_; lean_object* v_unused_2465_; lean_object* v_unused_2466_; lean_object* v_unused_2467_; lean_object* v_unused_2468_; 
v_unused_2464_ = lean_ctor_get(v_r_1988_, 4);
lean_dec(v_unused_2464_);
v_unused_2465_ = lean_ctor_get(v_r_1988_, 3);
lean_dec(v_unused_2465_);
v_unused_2466_ = lean_ctor_get(v_r_1988_, 2);
lean_dec(v_unused_2466_);
v_unused_2467_ = lean_ctor_get(v_r_1988_, 1);
lean_dec(v_unused_2467_);
v_unused_2468_ = lean_ctor_get(v_r_1988_, 0);
lean_dec(v_unused_2468_);
v___x_2312_ = v_r_1988_;
v_isShared_2313_ = v_isSharedCheck_2463_;
goto v_resetjp_2311_;
}
else
{
lean_dec(v_r_1988_);
v___x_2312_ = lean_box(0);
v_isShared_2313_ = v_isSharedCheck_2463_;
goto v_resetjp_2311_;
}
v_resetjp_2311_:
{
lean_object* v___x_2314_; lean_object* v_tree_2315_; 
v___x_2314_ = l_Std_DTreeMap_Internal_Impl_minView___redArg(v_k_2164_, v_v_2165_, v_l_2166_, v_r_2167_);
v_tree_2315_ = lean_ctor_get(v___x_2314_, 2);
lean_inc(v_tree_2315_);
if (lean_obj_tag(v_tree_2315_) == 0)
{
lean_object* v_k_2316_; lean_object* v_v_2317_; lean_object* v_size_2318_; lean_object* v___x_2319_; lean_object* v___x_2320_; uint8_t v___x_2321_; 
v_k_2316_ = lean_ctor_get(v___x_2314_, 0);
lean_inc(v_k_2316_);
v_v_2317_ = lean_ctor_get(v___x_2314_, 1);
lean_inc(v_v_2317_);
lean_dec_ref(v___x_2314_);
v_size_2318_ = lean_ctor_get(v_tree_2315_, 0);
v___x_2319_ = lean_unsigned_to_nat(3u);
v___x_2320_ = lean_nat_mul(v___x_2319_, v_size_2318_);
v___x_2321_ = lean_nat_dec_lt(v___x_2320_, v_size_2158_);
lean_dec(v___x_2320_);
if (v___x_2321_ == 0)
{
lean_object* v___x_2322_; lean_object* v___x_2323_; lean_object* v___x_2325_; 
lean_dec(v_r_2162_);
v___x_2322_ = lean_nat_add(v___x_2168_, v_size_2158_);
v___x_2323_ = lean_nat_add(v___x_2322_, v_size_2318_);
lean_dec(v___x_2322_);
if (v_isShared_2313_ == 0)
{
lean_ctor_set(v___x_2312_, 4, v_tree_2315_);
lean_ctor_set(v___x_2312_, 3, v_l_1987_);
lean_ctor_set(v___x_2312_, 2, v_v_2317_);
lean_ctor_set(v___x_2312_, 1, v_k_2316_);
lean_ctor_set(v___x_2312_, 0, v___x_2323_);
v___x_2325_ = v___x_2312_;
goto v_reusejp_2324_;
}
else
{
lean_object* v_reuseFailAlloc_2326_; 
v_reuseFailAlloc_2326_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2326_, 0, v___x_2323_);
lean_ctor_set(v_reuseFailAlloc_2326_, 1, v_k_2316_);
lean_ctor_set(v_reuseFailAlloc_2326_, 2, v_v_2317_);
lean_ctor_set(v_reuseFailAlloc_2326_, 3, v_l_1987_);
lean_ctor_set(v_reuseFailAlloc_2326_, 4, v_tree_2315_);
v___x_2325_ = v_reuseFailAlloc_2326_;
goto v_reusejp_2324_;
}
v_reusejp_2324_:
{
return v___x_2325_;
}
}
else
{
lean_object* v___x_2328_; uint8_t v_isShared_2329_; uint8_t v_isSharedCheck_2392_; 
lean_inc(v_l_2161_);
lean_inc(v_v_2160_);
lean_inc(v_k_2159_);
lean_inc(v_size_2158_);
v_isSharedCheck_2392_ = !lean_is_exclusive(v_l_1987_);
if (v_isSharedCheck_2392_ == 0)
{
lean_object* v_unused_2393_; lean_object* v_unused_2394_; lean_object* v_unused_2395_; lean_object* v_unused_2396_; lean_object* v_unused_2397_; 
v_unused_2393_ = lean_ctor_get(v_l_1987_, 4);
lean_dec(v_unused_2393_);
v_unused_2394_ = lean_ctor_get(v_l_1987_, 3);
lean_dec(v_unused_2394_);
v_unused_2395_ = lean_ctor_get(v_l_1987_, 2);
lean_dec(v_unused_2395_);
v_unused_2396_ = lean_ctor_get(v_l_1987_, 1);
lean_dec(v_unused_2396_);
v_unused_2397_ = lean_ctor_get(v_l_1987_, 0);
lean_dec(v_unused_2397_);
v___x_2328_ = v_l_1987_;
v_isShared_2329_ = v_isSharedCheck_2392_;
goto v_resetjp_2327_;
}
else
{
lean_dec(v_l_1987_);
v___x_2328_ = lean_box(0);
v_isShared_2329_ = v_isSharedCheck_2392_;
goto v_resetjp_2327_;
}
v_resetjp_2327_:
{
lean_object* v_size_2330_; lean_object* v_size_2331_; lean_object* v_k_2332_; lean_object* v_v_2333_; lean_object* v_l_2334_; lean_object* v_r_2335_; lean_object* v___x_2336_; lean_object* v___x_2337_; uint8_t v___x_2338_; 
v_size_2330_ = lean_ctor_get(v_l_2161_, 0);
v_size_2331_ = lean_ctor_get(v_r_2162_, 0);
v_k_2332_ = lean_ctor_get(v_r_2162_, 1);
v_v_2333_ = lean_ctor_get(v_r_2162_, 2);
v_l_2334_ = lean_ctor_get(v_r_2162_, 3);
v_r_2335_ = lean_ctor_get(v_r_2162_, 4);
v___x_2336_ = lean_unsigned_to_nat(2u);
v___x_2337_ = lean_nat_mul(v___x_2336_, v_size_2330_);
v___x_2338_ = lean_nat_dec_lt(v_size_2331_, v___x_2337_);
lean_dec(v___x_2337_);
if (v___x_2338_ == 0)
{
lean_object* v___x_2340_; uint8_t v_isShared_2341_; uint8_t v_isSharedCheck_2376_; 
lean_inc(v_r_2335_);
lean_inc(v_l_2334_);
lean_inc(v_v_2333_);
lean_inc(v_k_2332_);
lean_del_object(v___x_2328_);
v_isSharedCheck_2376_ = !lean_is_exclusive(v_r_2162_);
if (v_isSharedCheck_2376_ == 0)
{
lean_object* v_unused_2377_; lean_object* v_unused_2378_; lean_object* v_unused_2379_; lean_object* v_unused_2380_; lean_object* v_unused_2381_; 
v_unused_2377_ = lean_ctor_get(v_r_2162_, 4);
lean_dec(v_unused_2377_);
v_unused_2378_ = lean_ctor_get(v_r_2162_, 3);
lean_dec(v_unused_2378_);
v_unused_2379_ = lean_ctor_get(v_r_2162_, 2);
lean_dec(v_unused_2379_);
v_unused_2380_ = lean_ctor_get(v_r_2162_, 1);
lean_dec(v_unused_2380_);
v_unused_2381_ = lean_ctor_get(v_r_2162_, 0);
lean_dec(v_unused_2381_);
v___x_2340_ = v_r_2162_;
v_isShared_2341_ = v_isSharedCheck_2376_;
goto v_resetjp_2339_;
}
else
{
lean_dec(v_r_2162_);
v___x_2340_ = lean_box(0);
v_isShared_2341_ = v_isSharedCheck_2376_;
goto v_resetjp_2339_;
}
v_resetjp_2339_:
{
lean_object* v___x_2342_; lean_object* v___x_2343_; lean_object* v___y_2345_; lean_object* v___y_2346_; lean_object* v___y_2347_; lean_object* v___x_2364_; lean_object* v___y_2366_; 
v___x_2342_ = lean_nat_add(v___x_2168_, v_size_2158_);
lean_dec(v_size_2158_);
v___x_2343_ = lean_nat_add(v___x_2342_, v_size_2318_);
lean_dec(v___x_2342_);
v___x_2364_ = lean_nat_add(v___x_2168_, v_size_2330_);
if (lean_obj_tag(v_l_2334_) == 0)
{
lean_object* v_size_2374_; 
v_size_2374_ = lean_ctor_get(v_l_2334_, 0);
lean_inc(v_size_2374_);
v___y_2366_ = v_size_2374_;
goto v___jp_2365_;
}
else
{
lean_object* v___x_2375_; 
v___x_2375_ = lean_unsigned_to_nat(0u);
v___y_2366_ = v___x_2375_;
goto v___jp_2365_;
}
v___jp_2344_:
{
lean_object* v___x_2348_; lean_object* v___x_2350_; 
v___x_2348_ = lean_nat_add(v___y_2345_, v___y_2347_);
lean_dec(v___y_2347_);
lean_dec(v___y_2345_);
lean_inc_ref(v_tree_2315_);
if (v_isShared_2341_ == 0)
{
lean_ctor_set(v___x_2340_, 4, v_tree_2315_);
lean_ctor_set(v___x_2340_, 3, v_r_2335_);
lean_ctor_set(v___x_2340_, 2, v_v_2317_);
lean_ctor_set(v___x_2340_, 1, v_k_2316_);
lean_ctor_set(v___x_2340_, 0, v___x_2348_);
v___x_2350_ = v___x_2340_;
goto v_reusejp_2349_;
}
else
{
lean_object* v_reuseFailAlloc_2363_; 
v_reuseFailAlloc_2363_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2363_, 0, v___x_2348_);
lean_ctor_set(v_reuseFailAlloc_2363_, 1, v_k_2316_);
lean_ctor_set(v_reuseFailAlloc_2363_, 2, v_v_2317_);
lean_ctor_set(v_reuseFailAlloc_2363_, 3, v_r_2335_);
lean_ctor_set(v_reuseFailAlloc_2363_, 4, v_tree_2315_);
v___x_2350_ = v_reuseFailAlloc_2363_;
goto v_reusejp_2349_;
}
v_reusejp_2349_:
{
lean_object* v___x_2352_; uint8_t v_isShared_2353_; uint8_t v_isSharedCheck_2357_; 
v_isSharedCheck_2357_ = !lean_is_exclusive(v_tree_2315_);
if (v_isSharedCheck_2357_ == 0)
{
lean_object* v_unused_2358_; lean_object* v_unused_2359_; lean_object* v_unused_2360_; lean_object* v_unused_2361_; lean_object* v_unused_2362_; 
v_unused_2358_ = lean_ctor_get(v_tree_2315_, 4);
lean_dec(v_unused_2358_);
v_unused_2359_ = lean_ctor_get(v_tree_2315_, 3);
lean_dec(v_unused_2359_);
v_unused_2360_ = lean_ctor_get(v_tree_2315_, 2);
lean_dec(v_unused_2360_);
v_unused_2361_ = lean_ctor_get(v_tree_2315_, 1);
lean_dec(v_unused_2361_);
v_unused_2362_ = lean_ctor_get(v_tree_2315_, 0);
lean_dec(v_unused_2362_);
v___x_2352_ = v_tree_2315_;
v_isShared_2353_ = v_isSharedCheck_2357_;
goto v_resetjp_2351_;
}
else
{
lean_dec(v_tree_2315_);
v___x_2352_ = lean_box(0);
v_isShared_2353_ = v_isSharedCheck_2357_;
goto v_resetjp_2351_;
}
v_resetjp_2351_:
{
lean_object* v___x_2355_; 
if (v_isShared_2353_ == 0)
{
lean_ctor_set(v___x_2352_, 4, v___x_2350_);
lean_ctor_set(v___x_2352_, 3, v___y_2346_);
lean_ctor_set(v___x_2352_, 2, v_v_2333_);
lean_ctor_set(v___x_2352_, 1, v_k_2332_);
lean_ctor_set(v___x_2352_, 0, v___x_2343_);
v___x_2355_ = v___x_2352_;
goto v_reusejp_2354_;
}
else
{
lean_object* v_reuseFailAlloc_2356_; 
v_reuseFailAlloc_2356_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2356_, 0, v___x_2343_);
lean_ctor_set(v_reuseFailAlloc_2356_, 1, v_k_2332_);
lean_ctor_set(v_reuseFailAlloc_2356_, 2, v_v_2333_);
lean_ctor_set(v_reuseFailAlloc_2356_, 3, v___y_2346_);
lean_ctor_set(v_reuseFailAlloc_2356_, 4, v___x_2350_);
v___x_2355_ = v_reuseFailAlloc_2356_;
goto v_reusejp_2354_;
}
v_reusejp_2354_:
{
return v___x_2355_;
}
}
}
}
v___jp_2365_:
{
lean_object* v___x_2367_; lean_object* v___x_2369_; 
v___x_2367_ = lean_nat_add(v___x_2364_, v___y_2366_);
lean_dec(v___y_2366_);
lean_dec(v___x_2364_);
if (v_isShared_2313_ == 0)
{
lean_ctor_set(v___x_2312_, 4, v_l_2334_);
lean_ctor_set(v___x_2312_, 3, v_l_2161_);
lean_ctor_set(v___x_2312_, 2, v_v_2160_);
lean_ctor_set(v___x_2312_, 1, v_k_2159_);
lean_ctor_set(v___x_2312_, 0, v___x_2367_);
v___x_2369_ = v___x_2312_;
goto v_reusejp_2368_;
}
else
{
lean_object* v_reuseFailAlloc_2373_; 
v_reuseFailAlloc_2373_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2373_, 0, v___x_2367_);
lean_ctor_set(v_reuseFailAlloc_2373_, 1, v_k_2159_);
lean_ctor_set(v_reuseFailAlloc_2373_, 2, v_v_2160_);
lean_ctor_set(v_reuseFailAlloc_2373_, 3, v_l_2161_);
lean_ctor_set(v_reuseFailAlloc_2373_, 4, v_l_2334_);
v___x_2369_ = v_reuseFailAlloc_2373_;
goto v_reusejp_2368_;
}
v_reusejp_2368_:
{
lean_object* v___x_2370_; 
v___x_2370_ = lean_nat_add(v___x_2168_, v_size_2318_);
if (lean_obj_tag(v_r_2335_) == 0)
{
lean_object* v_size_2371_; 
v_size_2371_ = lean_ctor_get(v_r_2335_, 0);
lean_inc(v_size_2371_);
v___y_2345_ = v___x_2370_;
v___y_2346_ = v___x_2369_;
v___y_2347_ = v_size_2371_;
goto v___jp_2344_;
}
else
{
lean_object* v___x_2372_; 
v___x_2372_ = lean_unsigned_to_nat(0u);
v___y_2345_ = v___x_2370_;
v___y_2346_ = v___x_2369_;
v___y_2347_ = v___x_2372_;
goto v___jp_2344_;
}
}
}
}
}
else
{
lean_object* v___x_2382_; lean_object* v___x_2383_; lean_object* v___x_2384_; lean_object* v___x_2385_; lean_object* v___x_2387_; 
v___x_2382_ = lean_nat_add(v___x_2168_, v_size_2158_);
lean_dec(v_size_2158_);
v___x_2383_ = lean_nat_add(v___x_2382_, v_size_2318_);
lean_dec(v___x_2382_);
v___x_2384_ = lean_nat_add(v___x_2168_, v_size_2318_);
v___x_2385_ = lean_nat_add(v___x_2384_, v_size_2331_);
lean_dec(v___x_2384_);
if (v_isShared_2313_ == 0)
{
lean_ctor_set(v___x_2312_, 4, v_tree_2315_);
lean_ctor_set(v___x_2312_, 3, v_r_2162_);
lean_ctor_set(v___x_2312_, 2, v_v_2317_);
lean_ctor_set(v___x_2312_, 1, v_k_2316_);
lean_ctor_set(v___x_2312_, 0, v___x_2385_);
v___x_2387_ = v___x_2312_;
goto v_reusejp_2386_;
}
else
{
lean_object* v_reuseFailAlloc_2391_; 
v_reuseFailAlloc_2391_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2391_, 0, v___x_2385_);
lean_ctor_set(v_reuseFailAlloc_2391_, 1, v_k_2316_);
lean_ctor_set(v_reuseFailAlloc_2391_, 2, v_v_2317_);
lean_ctor_set(v_reuseFailAlloc_2391_, 3, v_r_2162_);
lean_ctor_set(v_reuseFailAlloc_2391_, 4, v_tree_2315_);
v___x_2387_ = v_reuseFailAlloc_2391_;
goto v_reusejp_2386_;
}
v_reusejp_2386_:
{
lean_object* v___x_2389_; 
if (v_isShared_2329_ == 0)
{
lean_ctor_set(v___x_2328_, 4, v___x_2387_);
lean_ctor_set(v___x_2328_, 0, v___x_2383_);
v___x_2389_ = v___x_2328_;
goto v_reusejp_2388_;
}
else
{
lean_object* v_reuseFailAlloc_2390_; 
v_reuseFailAlloc_2390_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2390_, 0, v___x_2383_);
lean_ctor_set(v_reuseFailAlloc_2390_, 1, v_k_2159_);
lean_ctor_set(v_reuseFailAlloc_2390_, 2, v_v_2160_);
lean_ctor_set(v_reuseFailAlloc_2390_, 3, v_l_2161_);
lean_ctor_set(v_reuseFailAlloc_2390_, 4, v___x_2387_);
v___x_2389_ = v_reuseFailAlloc_2390_;
goto v_reusejp_2388_;
}
v_reusejp_2388_:
{
return v___x_2389_;
}
}
}
}
}
}
else
{
if (lean_obj_tag(v_l_2161_) == 0)
{
lean_object* v___x_2399_; uint8_t v_isShared_2400_; uint8_t v_isSharedCheck_2421_; 
lean_inc_ref(v_l_2161_);
lean_inc(v_v_2160_);
lean_inc(v_k_2159_);
lean_inc(v_size_2158_);
v_isSharedCheck_2421_ = !lean_is_exclusive(v_l_1987_);
if (v_isSharedCheck_2421_ == 0)
{
lean_object* v_unused_2422_; lean_object* v_unused_2423_; lean_object* v_unused_2424_; lean_object* v_unused_2425_; lean_object* v_unused_2426_; 
v_unused_2422_ = lean_ctor_get(v_l_1987_, 4);
lean_dec(v_unused_2422_);
v_unused_2423_ = lean_ctor_get(v_l_1987_, 3);
lean_dec(v_unused_2423_);
v_unused_2424_ = lean_ctor_get(v_l_1987_, 2);
lean_dec(v_unused_2424_);
v_unused_2425_ = lean_ctor_get(v_l_1987_, 1);
lean_dec(v_unused_2425_);
v_unused_2426_ = lean_ctor_get(v_l_1987_, 0);
lean_dec(v_unused_2426_);
v___x_2399_ = v_l_1987_;
v_isShared_2400_ = v_isSharedCheck_2421_;
goto v_resetjp_2398_;
}
else
{
lean_dec(v_l_1987_);
v___x_2399_ = lean_box(0);
v_isShared_2400_ = v_isSharedCheck_2421_;
goto v_resetjp_2398_;
}
v_resetjp_2398_:
{
if (lean_obj_tag(v_r_2162_) == 0)
{
lean_object* v_k_2401_; lean_object* v_v_2402_; lean_object* v_size_2403_; lean_object* v___x_2404_; lean_object* v___x_2405_; lean_object* v___x_2407_; 
v_k_2401_ = lean_ctor_get(v___x_2314_, 0);
lean_inc(v_k_2401_);
v_v_2402_ = lean_ctor_get(v___x_2314_, 1);
lean_inc(v_v_2402_);
lean_dec_ref(v___x_2314_);
v_size_2403_ = lean_ctor_get(v_r_2162_, 0);
v___x_2404_ = lean_nat_add(v___x_2168_, v_size_2158_);
lean_dec(v_size_2158_);
v___x_2405_ = lean_nat_add(v___x_2168_, v_size_2403_);
if (v_isShared_2313_ == 0)
{
lean_ctor_set(v___x_2312_, 4, v_tree_2315_);
lean_ctor_set(v___x_2312_, 3, v_r_2162_);
lean_ctor_set(v___x_2312_, 2, v_v_2402_);
lean_ctor_set(v___x_2312_, 1, v_k_2401_);
lean_ctor_set(v___x_2312_, 0, v___x_2405_);
v___x_2407_ = v___x_2312_;
goto v_reusejp_2406_;
}
else
{
lean_object* v_reuseFailAlloc_2411_; 
v_reuseFailAlloc_2411_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2411_, 0, v___x_2405_);
lean_ctor_set(v_reuseFailAlloc_2411_, 1, v_k_2401_);
lean_ctor_set(v_reuseFailAlloc_2411_, 2, v_v_2402_);
lean_ctor_set(v_reuseFailAlloc_2411_, 3, v_r_2162_);
lean_ctor_set(v_reuseFailAlloc_2411_, 4, v_tree_2315_);
v___x_2407_ = v_reuseFailAlloc_2411_;
goto v_reusejp_2406_;
}
v_reusejp_2406_:
{
lean_object* v___x_2409_; 
if (v_isShared_2400_ == 0)
{
lean_ctor_set(v___x_2399_, 4, v___x_2407_);
lean_ctor_set(v___x_2399_, 0, v___x_2404_);
v___x_2409_ = v___x_2399_;
goto v_reusejp_2408_;
}
else
{
lean_object* v_reuseFailAlloc_2410_; 
v_reuseFailAlloc_2410_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2410_, 0, v___x_2404_);
lean_ctor_set(v_reuseFailAlloc_2410_, 1, v_k_2159_);
lean_ctor_set(v_reuseFailAlloc_2410_, 2, v_v_2160_);
lean_ctor_set(v_reuseFailAlloc_2410_, 3, v_l_2161_);
lean_ctor_set(v_reuseFailAlloc_2410_, 4, v___x_2407_);
v___x_2409_ = v_reuseFailAlloc_2410_;
goto v_reusejp_2408_;
}
v_reusejp_2408_:
{
return v___x_2409_;
}
}
}
else
{
lean_object* v_k_2412_; lean_object* v_v_2413_; lean_object* v___x_2414_; lean_object* v___x_2416_; 
lean_dec(v_size_2158_);
v_k_2412_ = lean_ctor_get(v___x_2314_, 0);
lean_inc(v_k_2412_);
v_v_2413_ = lean_ctor_get(v___x_2314_, 1);
lean_inc(v_v_2413_);
lean_dec_ref(v___x_2314_);
v___x_2414_ = lean_unsigned_to_nat(3u);
if (v_isShared_2313_ == 0)
{
lean_ctor_set(v___x_2312_, 4, v_r_2162_);
lean_ctor_set(v___x_2312_, 3, v_r_2162_);
lean_ctor_set(v___x_2312_, 2, v_v_2413_);
lean_ctor_set(v___x_2312_, 1, v_k_2412_);
lean_ctor_set(v___x_2312_, 0, v___x_2168_);
v___x_2416_ = v___x_2312_;
goto v_reusejp_2415_;
}
else
{
lean_object* v_reuseFailAlloc_2420_; 
v_reuseFailAlloc_2420_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2420_, 0, v___x_2168_);
lean_ctor_set(v_reuseFailAlloc_2420_, 1, v_k_2412_);
lean_ctor_set(v_reuseFailAlloc_2420_, 2, v_v_2413_);
lean_ctor_set(v_reuseFailAlloc_2420_, 3, v_r_2162_);
lean_ctor_set(v_reuseFailAlloc_2420_, 4, v_r_2162_);
v___x_2416_ = v_reuseFailAlloc_2420_;
goto v_reusejp_2415_;
}
v_reusejp_2415_:
{
lean_object* v___x_2418_; 
if (v_isShared_2400_ == 0)
{
lean_ctor_set(v___x_2399_, 4, v___x_2416_);
lean_ctor_set(v___x_2399_, 0, v___x_2414_);
v___x_2418_ = v___x_2399_;
goto v_reusejp_2417_;
}
else
{
lean_object* v_reuseFailAlloc_2419_; 
v_reuseFailAlloc_2419_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2419_, 0, v___x_2414_);
lean_ctor_set(v_reuseFailAlloc_2419_, 1, v_k_2159_);
lean_ctor_set(v_reuseFailAlloc_2419_, 2, v_v_2160_);
lean_ctor_set(v_reuseFailAlloc_2419_, 3, v_l_2161_);
lean_ctor_set(v_reuseFailAlloc_2419_, 4, v___x_2416_);
v___x_2418_ = v_reuseFailAlloc_2419_;
goto v_reusejp_2417_;
}
v_reusejp_2417_:
{
return v___x_2418_;
}
}
}
}
}
else
{
if (lean_obj_tag(v_r_2162_) == 0)
{
lean_object* v___x_2428_; uint8_t v_isShared_2429_; uint8_t v_isSharedCheck_2451_; 
lean_inc(v_l_2161_);
lean_inc(v_v_2160_);
lean_inc(v_k_2159_);
v_isSharedCheck_2451_ = !lean_is_exclusive(v_l_1987_);
if (v_isSharedCheck_2451_ == 0)
{
lean_object* v_unused_2452_; lean_object* v_unused_2453_; lean_object* v_unused_2454_; lean_object* v_unused_2455_; lean_object* v_unused_2456_; 
v_unused_2452_ = lean_ctor_get(v_l_1987_, 4);
lean_dec(v_unused_2452_);
v_unused_2453_ = lean_ctor_get(v_l_1987_, 3);
lean_dec(v_unused_2453_);
v_unused_2454_ = lean_ctor_get(v_l_1987_, 2);
lean_dec(v_unused_2454_);
v_unused_2455_ = lean_ctor_get(v_l_1987_, 1);
lean_dec(v_unused_2455_);
v_unused_2456_ = lean_ctor_get(v_l_1987_, 0);
lean_dec(v_unused_2456_);
v___x_2428_ = v_l_1987_;
v_isShared_2429_ = v_isSharedCheck_2451_;
goto v_resetjp_2427_;
}
else
{
lean_dec(v_l_1987_);
v___x_2428_ = lean_box(0);
v_isShared_2429_ = v_isSharedCheck_2451_;
goto v_resetjp_2427_;
}
v_resetjp_2427_:
{
lean_object* v_k_2430_; lean_object* v_v_2431_; lean_object* v_k_2432_; lean_object* v_v_2433_; lean_object* v___x_2435_; uint8_t v_isShared_2436_; uint8_t v_isSharedCheck_2447_; 
v_k_2430_ = lean_ctor_get(v___x_2314_, 0);
lean_inc(v_k_2430_);
v_v_2431_ = lean_ctor_get(v___x_2314_, 1);
lean_inc(v_v_2431_);
lean_dec_ref(v___x_2314_);
v_k_2432_ = lean_ctor_get(v_r_2162_, 1);
v_v_2433_ = lean_ctor_get(v_r_2162_, 2);
v_isSharedCheck_2447_ = !lean_is_exclusive(v_r_2162_);
if (v_isSharedCheck_2447_ == 0)
{
lean_object* v_unused_2448_; lean_object* v_unused_2449_; lean_object* v_unused_2450_; 
v_unused_2448_ = lean_ctor_get(v_r_2162_, 4);
lean_dec(v_unused_2448_);
v_unused_2449_ = lean_ctor_get(v_r_2162_, 3);
lean_dec(v_unused_2449_);
v_unused_2450_ = lean_ctor_get(v_r_2162_, 0);
lean_dec(v_unused_2450_);
v___x_2435_ = v_r_2162_;
v_isShared_2436_ = v_isSharedCheck_2447_;
goto v_resetjp_2434_;
}
else
{
lean_inc(v_v_2433_);
lean_inc(v_k_2432_);
lean_dec(v_r_2162_);
v___x_2435_ = lean_box(0);
v_isShared_2436_ = v_isSharedCheck_2447_;
goto v_resetjp_2434_;
}
v_resetjp_2434_:
{
lean_object* v___x_2437_; lean_object* v___x_2439_; 
v___x_2437_ = lean_unsigned_to_nat(3u);
if (v_isShared_2436_ == 0)
{
lean_ctor_set(v___x_2435_, 4, v_l_2161_);
lean_ctor_set(v___x_2435_, 3, v_l_2161_);
lean_ctor_set(v___x_2435_, 2, v_v_2160_);
lean_ctor_set(v___x_2435_, 1, v_k_2159_);
lean_ctor_set(v___x_2435_, 0, v___x_2168_);
v___x_2439_ = v___x_2435_;
goto v_reusejp_2438_;
}
else
{
lean_object* v_reuseFailAlloc_2446_; 
v_reuseFailAlloc_2446_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2446_, 0, v___x_2168_);
lean_ctor_set(v_reuseFailAlloc_2446_, 1, v_k_2159_);
lean_ctor_set(v_reuseFailAlloc_2446_, 2, v_v_2160_);
lean_ctor_set(v_reuseFailAlloc_2446_, 3, v_l_2161_);
lean_ctor_set(v_reuseFailAlloc_2446_, 4, v_l_2161_);
v___x_2439_ = v_reuseFailAlloc_2446_;
goto v_reusejp_2438_;
}
v_reusejp_2438_:
{
lean_object* v___x_2441_; 
if (v_isShared_2313_ == 0)
{
lean_ctor_set(v___x_2312_, 4, v_l_2161_);
lean_ctor_set(v___x_2312_, 3, v_l_2161_);
lean_ctor_set(v___x_2312_, 2, v_v_2431_);
lean_ctor_set(v___x_2312_, 1, v_k_2430_);
lean_ctor_set(v___x_2312_, 0, v___x_2168_);
v___x_2441_ = v___x_2312_;
goto v_reusejp_2440_;
}
else
{
lean_object* v_reuseFailAlloc_2445_; 
v_reuseFailAlloc_2445_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2445_, 0, v___x_2168_);
lean_ctor_set(v_reuseFailAlloc_2445_, 1, v_k_2430_);
lean_ctor_set(v_reuseFailAlloc_2445_, 2, v_v_2431_);
lean_ctor_set(v_reuseFailAlloc_2445_, 3, v_l_2161_);
lean_ctor_set(v_reuseFailAlloc_2445_, 4, v_l_2161_);
v___x_2441_ = v_reuseFailAlloc_2445_;
goto v_reusejp_2440_;
}
v_reusejp_2440_:
{
lean_object* v___x_2443_; 
if (v_isShared_2429_ == 0)
{
lean_ctor_set(v___x_2428_, 4, v___x_2441_);
lean_ctor_set(v___x_2428_, 3, v___x_2439_);
lean_ctor_set(v___x_2428_, 2, v_v_2433_);
lean_ctor_set(v___x_2428_, 1, v_k_2432_);
lean_ctor_set(v___x_2428_, 0, v___x_2437_);
v___x_2443_ = v___x_2428_;
goto v_reusejp_2442_;
}
else
{
lean_object* v_reuseFailAlloc_2444_; 
v_reuseFailAlloc_2444_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2444_, 0, v___x_2437_);
lean_ctor_set(v_reuseFailAlloc_2444_, 1, v_k_2432_);
lean_ctor_set(v_reuseFailAlloc_2444_, 2, v_v_2433_);
lean_ctor_set(v_reuseFailAlloc_2444_, 3, v___x_2439_);
lean_ctor_set(v_reuseFailAlloc_2444_, 4, v___x_2441_);
v___x_2443_ = v_reuseFailAlloc_2444_;
goto v_reusejp_2442_;
}
v_reusejp_2442_:
{
return v___x_2443_;
}
}
}
}
}
}
else
{
lean_object* v_k_2457_; lean_object* v_v_2458_; lean_object* v___x_2459_; lean_object* v___x_2461_; 
v_k_2457_ = lean_ctor_get(v___x_2314_, 0);
lean_inc(v_k_2457_);
v_v_2458_ = lean_ctor_get(v___x_2314_, 1);
lean_inc(v_v_2458_);
lean_dec_ref(v___x_2314_);
v___x_2459_ = lean_unsigned_to_nat(2u);
if (v_isShared_2313_ == 0)
{
lean_ctor_set(v___x_2312_, 4, v_r_2162_);
lean_ctor_set(v___x_2312_, 3, v_l_1987_);
lean_ctor_set(v___x_2312_, 2, v_v_2458_);
lean_ctor_set(v___x_2312_, 1, v_k_2457_);
lean_ctor_set(v___x_2312_, 0, v___x_2459_);
v___x_2461_ = v___x_2312_;
goto v_reusejp_2460_;
}
else
{
lean_object* v_reuseFailAlloc_2462_; 
v_reuseFailAlloc_2462_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2462_, 0, v___x_2459_);
lean_ctor_set(v_reuseFailAlloc_2462_, 1, v_k_2457_);
lean_ctor_set(v_reuseFailAlloc_2462_, 2, v_v_2458_);
lean_ctor_set(v_reuseFailAlloc_2462_, 3, v_l_1987_);
lean_ctor_set(v_reuseFailAlloc_2462_, 4, v_r_2162_);
v___x_2461_ = v_reuseFailAlloc_2462_;
goto v_reusejp_2460_;
}
v_reusejp_2460_:
{
return v___x_2461_;
}
}
}
}
}
}
}
else
{
return v_l_1987_;
}
}
else
{
return v_r_1988_;
}
}
}
else
{
lean_object* v_impl_2469_; lean_object* v___x_2470_; 
v_impl_2469_ = l_Std_DTreeMap_Internal_Impl_erase___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_unsubscribe_spec__3___redArg(v_k_1983_, v_l_1987_);
v___x_2470_ = lean_unsigned_to_nat(1u);
if (lean_obj_tag(v_impl_2469_) == 0)
{
if (lean_obj_tag(v_r_1988_) == 0)
{
lean_object* v_size_2471_; lean_object* v_size_2472_; lean_object* v_k_2473_; lean_object* v_v_2474_; lean_object* v_l_2475_; lean_object* v_r_2476_; lean_object* v___x_2477_; lean_object* v___x_2478_; uint8_t v___x_2479_; 
v_size_2471_ = lean_ctor_get(v_impl_2469_, 0);
lean_inc(v_size_2471_);
v_size_2472_ = lean_ctor_get(v_r_1988_, 0);
v_k_2473_ = lean_ctor_get(v_r_1988_, 1);
v_v_2474_ = lean_ctor_get(v_r_1988_, 2);
v_l_2475_ = lean_ctor_get(v_r_1988_, 3);
lean_inc(v_l_2475_);
v_r_2476_ = lean_ctor_get(v_r_1988_, 4);
v___x_2477_ = lean_unsigned_to_nat(3u);
v___x_2478_ = lean_nat_mul(v___x_2477_, v_size_2471_);
v___x_2479_ = lean_nat_dec_lt(v___x_2478_, v_size_2472_);
lean_dec(v___x_2478_);
if (v___x_2479_ == 0)
{
lean_object* v___x_2480_; lean_object* v___x_2481_; lean_object* v___x_2483_; 
lean_dec(v_l_2475_);
v___x_2480_ = lean_nat_add(v___x_2470_, v_size_2471_);
lean_dec(v_size_2471_);
v___x_2481_ = lean_nat_add(v___x_2480_, v_size_2472_);
lean_dec(v___x_2480_);
if (v_isShared_1991_ == 0)
{
lean_ctor_set(v___x_1990_, 3, v_impl_2469_);
lean_ctor_set(v___x_1990_, 0, v___x_2481_);
v___x_2483_ = v___x_1990_;
goto v_reusejp_2482_;
}
else
{
lean_object* v_reuseFailAlloc_2484_; 
v_reuseFailAlloc_2484_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2484_, 0, v___x_2481_);
lean_ctor_set(v_reuseFailAlloc_2484_, 1, v_k_1985_);
lean_ctor_set(v_reuseFailAlloc_2484_, 2, v_v_1986_);
lean_ctor_set(v_reuseFailAlloc_2484_, 3, v_impl_2469_);
lean_ctor_set(v_reuseFailAlloc_2484_, 4, v_r_1988_);
v___x_2483_ = v_reuseFailAlloc_2484_;
goto v_reusejp_2482_;
}
v_reusejp_2482_:
{
return v___x_2483_;
}
}
else
{
lean_object* v___x_2486_; uint8_t v_isShared_2487_; uint8_t v_isSharedCheck_2548_; 
lean_inc(v_r_2476_);
lean_inc(v_v_2474_);
lean_inc(v_k_2473_);
lean_inc(v_size_2472_);
v_isSharedCheck_2548_ = !lean_is_exclusive(v_r_1988_);
if (v_isSharedCheck_2548_ == 0)
{
lean_object* v_unused_2549_; lean_object* v_unused_2550_; lean_object* v_unused_2551_; lean_object* v_unused_2552_; lean_object* v_unused_2553_; 
v_unused_2549_ = lean_ctor_get(v_r_1988_, 4);
lean_dec(v_unused_2549_);
v_unused_2550_ = lean_ctor_get(v_r_1988_, 3);
lean_dec(v_unused_2550_);
v_unused_2551_ = lean_ctor_get(v_r_1988_, 2);
lean_dec(v_unused_2551_);
v_unused_2552_ = lean_ctor_get(v_r_1988_, 1);
lean_dec(v_unused_2552_);
v_unused_2553_ = lean_ctor_get(v_r_1988_, 0);
lean_dec(v_unused_2553_);
v___x_2486_ = v_r_1988_;
v_isShared_2487_ = v_isSharedCheck_2548_;
goto v_resetjp_2485_;
}
else
{
lean_dec(v_r_1988_);
v___x_2486_ = lean_box(0);
v_isShared_2487_ = v_isSharedCheck_2548_;
goto v_resetjp_2485_;
}
v_resetjp_2485_:
{
lean_object* v_size_2488_; lean_object* v_k_2489_; lean_object* v_v_2490_; lean_object* v_l_2491_; lean_object* v_r_2492_; lean_object* v_size_2493_; lean_object* v___x_2494_; lean_object* v___x_2495_; uint8_t v___x_2496_; 
v_size_2488_ = lean_ctor_get(v_l_2475_, 0);
v_k_2489_ = lean_ctor_get(v_l_2475_, 1);
v_v_2490_ = lean_ctor_get(v_l_2475_, 2);
v_l_2491_ = lean_ctor_get(v_l_2475_, 3);
v_r_2492_ = lean_ctor_get(v_l_2475_, 4);
v_size_2493_ = lean_ctor_get(v_r_2476_, 0);
v___x_2494_ = lean_unsigned_to_nat(2u);
v___x_2495_ = lean_nat_mul(v___x_2494_, v_size_2493_);
v___x_2496_ = lean_nat_dec_lt(v_size_2488_, v___x_2495_);
lean_dec(v___x_2495_);
if (v___x_2496_ == 0)
{
lean_object* v___x_2498_; uint8_t v_isShared_2499_; uint8_t v_isSharedCheck_2524_; 
lean_inc(v_r_2492_);
lean_inc(v_l_2491_);
lean_inc(v_v_2490_);
lean_inc(v_k_2489_);
v_isSharedCheck_2524_ = !lean_is_exclusive(v_l_2475_);
if (v_isSharedCheck_2524_ == 0)
{
lean_object* v_unused_2525_; lean_object* v_unused_2526_; lean_object* v_unused_2527_; lean_object* v_unused_2528_; lean_object* v_unused_2529_; 
v_unused_2525_ = lean_ctor_get(v_l_2475_, 4);
lean_dec(v_unused_2525_);
v_unused_2526_ = lean_ctor_get(v_l_2475_, 3);
lean_dec(v_unused_2526_);
v_unused_2527_ = lean_ctor_get(v_l_2475_, 2);
lean_dec(v_unused_2527_);
v_unused_2528_ = lean_ctor_get(v_l_2475_, 1);
lean_dec(v_unused_2528_);
v_unused_2529_ = lean_ctor_get(v_l_2475_, 0);
lean_dec(v_unused_2529_);
v___x_2498_ = v_l_2475_;
v_isShared_2499_ = v_isSharedCheck_2524_;
goto v_resetjp_2497_;
}
else
{
lean_dec(v_l_2475_);
v___x_2498_ = lean_box(0);
v_isShared_2499_ = v_isSharedCheck_2524_;
goto v_resetjp_2497_;
}
v_resetjp_2497_:
{
lean_object* v___x_2500_; lean_object* v___x_2501_; lean_object* v___y_2503_; lean_object* v___y_2504_; lean_object* v___y_2505_; lean_object* v___y_2514_; 
v___x_2500_ = lean_nat_add(v___x_2470_, v_size_2471_);
lean_dec(v_size_2471_);
v___x_2501_ = lean_nat_add(v___x_2500_, v_size_2472_);
lean_dec(v_size_2472_);
if (lean_obj_tag(v_l_2491_) == 0)
{
lean_object* v_size_2522_; 
v_size_2522_ = lean_ctor_get(v_l_2491_, 0);
lean_inc(v_size_2522_);
v___y_2514_ = v_size_2522_;
goto v___jp_2513_;
}
else
{
lean_object* v___x_2523_; 
v___x_2523_ = lean_unsigned_to_nat(0u);
v___y_2514_ = v___x_2523_;
goto v___jp_2513_;
}
v___jp_2502_:
{
lean_object* v___x_2506_; lean_object* v___x_2508_; 
v___x_2506_ = lean_nat_add(v___y_2504_, v___y_2505_);
lean_dec(v___y_2505_);
lean_dec(v___y_2504_);
if (v_isShared_2499_ == 0)
{
lean_ctor_set(v___x_2498_, 4, v_r_2476_);
lean_ctor_set(v___x_2498_, 3, v_r_2492_);
lean_ctor_set(v___x_2498_, 2, v_v_2474_);
lean_ctor_set(v___x_2498_, 1, v_k_2473_);
lean_ctor_set(v___x_2498_, 0, v___x_2506_);
v___x_2508_ = v___x_2498_;
goto v_reusejp_2507_;
}
else
{
lean_object* v_reuseFailAlloc_2512_; 
v_reuseFailAlloc_2512_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2512_, 0, v___x_2506_);
lean_ctor_set(v_reuseFailAlloc_2512_, 1, v_k_2473_);
lean_ctor_set(v_reuseFailAlloc_2512_, 2, v_v_2474_);
lean_ctor_set(v_reuseFailAlloc_2512_, 3, v_r_2492_);
lean_ctor_set(v_reuseFailAlloc_2512_, 4, v_r_2476_);
v___x_2508_ = v_reuseFailAlloc_2512_;
goto v_reusejp_2507_;
}
v_reusejp_2507_:
{
lean_object* v___x_2510_; 
if (v_isShared_2487_ == 0)
{
lean_ctor_set(v___x_2486_, 4, v___x_2508_);
lean_ctor_set(v___x_2486_, 3, v___y_2503_);
lean_ctor_set(v___x_2486_, 2, v_v_2490_);
lean_ctor_set(v___x_2486_, 1, v_k_2489_);
lean_ctor_set(v___x_2486_, 0, v___x_2501_);
v___x_2510_ = v___x_2486_;
goto v_reusejp_2509_;
}
else
{
lean_object* v_reuseFailAlloc_2511_; 
v_reuseFailAlloc_2511_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2511_, 0, v___x_2501_);
lean_ctor_set(v_reuseFailAlloc_2511_, 1, v_k_2489_);
lean_ctor_set(v_reuseFailAlloc_2511_, 2, v_v_2490_);
lean_ctor_set(v_reuseFailAlloc_2511_, 3, v___y_2503_);
lean_ctor_set(v_reuseFailAlloc_2511_, 4, v___x_2508_);
v___x_2510_ = v_reuseFailAlloc_2511_;
goto v_reusejp_2509_;
}
v_reusejp_2509_:
{
return v___x_2510_;
}
}
}
v___jp_2513_:
{
lean_object* v___x_2515_; lean_object* v___x_2517_; 
v___x_2515_ = lean_nat_add(v___x_2500_, v___y_2514_);
lean_dec(v___y_2514_);
lean_dec(v___x_2500_);
if (v_isShared_1991_ == 0)
{
lean_ctor_set(v___x_1990_, 4, v_l_2491_);
lean_ctor_set(v___x_1990_, 3, v_impl_2469_);
lean_ctor_set(v___x_1990_, 0, v___x_2515_);
v___x_2517_ = v___x_1990_;
goto v_reusejp_2516_;
}
else
{
lean_object* v_reuseFailAlloc_2521_; 
v_reuseFailAlloc_2521_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2521_, 0, v___x_2515_);
lean_ctor_set(v_reuseFailAlloc_2521_, 1, v_k_1985_);
lean_ctor_set(v_reuseFailAlloc_2521_, 2, v_v_1986_);
lean_ctor_set(v_reuseFailAlloc_2521_, 3, v_impl_2469_);
lean_ctor_set(v_reuseFailAlloc_2521_, 4, v_l_2491_);
v___x_2517_ = v_reuseFailAlloc_2521_;
goto v_reusejp_2516_;
}
v_reusejp_2516_:
{
lean_object* v___x_2518_; 
v___x_2518_ = lean_nat_add(v___x_2470_, v_size_2493_);
if (lean_obj_tag(v_r_2492_) == 0)
{
lean_object* v_size_2519_; 
v_size_2519_ = lean_ctor_get(v_r_2492_, 0);
lean_inc(v_size_2519_);
v___y_2503_ = v___x_2517_;
v___y_2504_ = v___x_2518_;
v___y_2505_ = v_size_2519_;
goto v___jp_2502_;
}
else
{
lean_object* v___x_2520_; 
v___x_2520_ = lean_unsigned_to_nat(0u);
v___y_2503_ = v___x_2517_;
v___y_2504_ = v___x_2518_;
v___y_2505_ = v___x_2520_;
goto v___jp_2502_;
}
}
}
}
}
else
{
lean_object* v___x_2530_; lean_object* v___x_2531_; lean_object* v___x_2532_; lean_object* v___x_2534_; 
lean_del_object(v___x_1990_);
v___x_2530_ = lean_nat_add(v___x_2470_, v_size_2471_);
lean_dec(v_size_2471_);
v___x_2531_ = lean_nat_add(v___x_2530_, v_size_2472_);
lean_dec(v_size_2472_);
v___x_2532_ = lean_nat_add(v___x_2530_, v_size_2488_);
lean_dec(v___x_2530_);
lean_inc_ref(v_impl_2469_);
if (v_isShared_2487_ == 0)
{
lean_ctor_set(v___x_2486_, 4, v_l_2475_);
lean_ctor_set(v___x_2486_, 3, v_impl_2469_);
lean_ctor_set(v___x_2486_, 2, v_v_1986_);
lean_ctor_set(v___x_2486_, 1, v_k_1985_);
lean_ctor_set(v___x_2486_, 0, v___x_2532_);
v___x_2534_ = v___x_2486_;
goto v_reusejp_2533_;
}
else
{
lean_object* v_reuseFailAlloc_2547_; 
v_reuseFailAlloc_2547_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2547_, 0, v___x_2532_);
lean_ctor_set(v_reuseFailAlloc_2547_, 1, v_k_1985_);
lean_ctor_set(v_reuseFailAlloc_2547_, 2, v_v_1986_);
lean_ctor_set(v_reuseFailAlloc_2547_, 3, v_impl_2469_);
lean_ctor_set(v_reuseFailAlloc_2547_, 4, v_l_2475_);
v___x_2534_ = v_reuseFailAlloc_2547_;
goto v_reusejp_2533_;
}
v_reusejp_2533_:
{
lean_object* v___x_2536_; uint8_t v_isShared_2537_; uint8_t v_isSharedCheck_2541_; 
v_isSharedCheck_2541_ = !lean_is_exclusive(v_impl_2469_);
if (v_isSharedCheck_2541_ == 0)
{
lean_object* v_unused_2542_; lean_object* v_unused_2543_; lean_object* v_unused_2544_; lean_object* v_unused_2545_; lean_object* v_unused_2546_; 
v_unused_2542_ = lean_ctor_get(v_impl_2469_, 4);
lean_dec(v_unused_2542_);
v_unused_2543_ = lean_ctor_get(v_impl_2469_, 3);
lean_dec(v_unused_2543_);
v_unused_2544_ = lean_ctor_get(v_impl_2469_, 2);
lean_dec(v_unused_2544_);
v_unused_2545_ = lean_ctor_get(v_impl_2469_, 1);
lean_dec(v_unused_2545_);
v_unused_2546_ = lean_ctor_get(v_impl_2469_, 0);
lean_dec(v_unused_2546_);
v___x_2536_ = v_impl_2469_;
v_isShared_2537_ = v_isSharedCheck_2541_;
goto v_resetjp_2535_;
}
else
{
lean_dec(v_impl_2469_);
v___x_2536_ = lean_box(0);
v_isShared_2537_ = v_isSharedCheck_2541_;
goto v_resetjp_2535_;
}
v_resetjp_2535_:
{
lean_object* v___x_2539_; 
if (v_isShared_2537_ == 0)
{
lean_ctor_set(v___x_2536_, 4, v_r_2476_);
lean_ctor_set(v___x_2536_, 3, v___x_2534_);
lean_ctor_set(v___x_2536_, 2, v_v_2474_);
lean_ctor_set(v___x_2536_, 1, v_k_2473_);
lean_ctor_set(v___x_2536_, 0, v___x_2531_);
v___x_2539_ = v___x_2536_;
goto v_reusejp_2538_;
}
else
{
lean_object* v_reuseFailAlloc_2540_; 
v_reuseFailAlloc_2540_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2540_, 0, v___x_2531_);
lean_ctor_set(v_reuseFailAlloc_2540_, 1, v_k_2473_);
lean_ctor_set(v_reuseFailAlloc_2540_, 2, v_v_2474_);
lean_ctor_set(v_reuseFailAlloc_2540_, 3, v___x_2534_);
lean_ctor_set(v_reuseFailAlloc_2540_, 4, v_r_2476_);
v___x_2539_ = v_reuseFailAlloc_2540_;
goto v_reusejp_2538_;
}
v_reusejp_2538_:
{
return v___x_2539_;
}
}
}
}
}
}
}
else
{
lean_object* v_size_2554_; lean_object* v___x_2555_; lean_object* v___x_2557_; 
v_size_2554_ = lean_ctor_get(v_impl_2469_, 0);
lean_inc(v_size_2554_);
v___x_2555_ = lean_nat_add(v___x_2470_, v_size_2554_);
lean_dec(v_size_2554_);
if (v_isShared_1991_ == 0)
{
lean_ctor_set(v___x_1990_, 3, v_impl_2469_);
lean_ctor_set(v___x_1990_, 0, v___x_2555_);
v___x_2557_ = v___x_1990_;
goto v_reusejp_2556_;
}
else
{
lean_object* v_reuseFailAlloc_2558_; 
v_reuseFailAlloc_2558_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2558_, 0, v___x_2555_);
lean_ctor_set(v_reuseFailAlloc_2558_, 1, v_k_1985_);
lean_ctor_set(v_reuseFailAlloc_2558_, 2, v_v_1986_);
lean_ctor_set(v_reuseFailAlloc_2558_, 3, v_impl_2469_);
lean_ctor_set(v_reuseFailAlloc_2558_, 4, v_r_1988_);
v___x_2557_ = v_reuseFailAlloc_2558_;
goto v_reusejp_2556_;
}
v_reusejp_2556_:
{
return v___x_2557_;
}
}
}
else
{
if (lean_obj_tag(v_r_1988_) == 0)
{
lean_object* v_l_2559_; 
v_l_2559_ = lean_ctor_get(v_r_1988_, 3);
lean_inc(v_l_2559_);
if (lean_obj_tag(v_l_2559_) == 0)
{
lean_object* v_r_2560_; 
v_r_2560_ = lean_ctor_get(v_r_1988_, 4);
lean_inc(v_r_2560_);
if (lean_obj_tag(v_r_2560_) == 0)
{
lean_object* v_size_2561_; lean_object* v_k_2562_; lean_object* v_v_2563_; lean_object* v___x_2565_; uint8_t v_isShared_2566_; uint8_t v_isSharedCheck_2576_; 
v_size_2561_ = lean_ctor_get(v_r_1988_, 0);
v_k_2562_ = lean_ctor_get(v_r_1988_, 1);
v_v_2563_ = lean_ctor_get(v_r_1988_, 2);
v_isSharedCheck_2576_ = !lean_is_exclusive(v_r_1988_);
if (v_isSharedCheck_2576_ == 0)
{
lean_object* v_unused_2577_; lean_object* v_unused_2578_; 
v_unused_2577_ = lean_ctor_get(v_r_1988_, 4);
lean_dec(v_unused_2577_);
v_unused_2578_ = lean_ctor_get(v_r_1988_, 3);
lean_dec(v_unused_2578_);
v___x_2565_ = v_r_1988_;
v_isShared_2566_ = v_isSharedCheck_2576_;
goto v_resetjp_2564_;
}
else
{
lean_inc(v_v_2563_);
lean_inc(v_k_2562_);
lean_inc(v_size_2561_);
lean_dec(v_r_1988_);
v___x_2565_ = lean_box(0);
v_isShared_2566_ = v_isSharedCheck_2576_;
goto v_resetjp_2564_;
}
v_resetjp_2564_:
{
lean_object* v_size_2567_; lean_object* v___x_2568_; lean_object* v___x_2569_; lean_object* v___x_2571_; 
v_size_2567_ = lean_ctor_get(v_l_2559_, 0);
v___x_2568_ = lean_nat_add(v___x_2470_, v_size_2561_);
lean_dec(v_size_2561_);
v___x_2569_ = lean_nat_add(v___x_2470_, v_size_2567_);
if (v_isShared_2566_ == 0)
{
lean_ctor_set(v___x_2565_, 4, v_l_2559_);
lean_ctor_set(v___x_2565_, 3, v_impl_2469_);
lean_ctor_set(v___x_2565_, 2, v_v_1986_);
lean_ctor_set(v___x_2565_, 1, v_k_1985_);
lean_ctor_set(v___x_2565_, 0, v___x_2569_);
v___x_2571_ = v___x_2565_;
goto v_reusejp_2570_;
}
else
{
lean_object* v_reuseFailAlloc_2575_; 
v_reuseFailAlloc_2575_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2575_, 0, v___x_2569_);
lean_ctor_set(v_reuseFailAlloc_2575_, 1, v_k_1985_);
lean_ctor_set(v_reuseFailAlloc_2575_, 2, v_v_1986_);
lean_ctor_set(v_reuseFailAlloc_2575_, 3, v_impl_2469_);
lean_ctor_set(v_reuseFailAlloc_2575_, 4, v_l_2559_);
v___x_2571_ = v_reuseFailAlloc_2575_;
goto v_reusejp_2570_;
}
v_reusejp_2570_:
{
lean_object* v___x_2573_; 
if (v_isShared_1991_ == 0)
{
lean_ctor_set(v___x_1990_, 4, v_r_2560_);
lean_ctor_set(v___x_1990_, 3, v___x_2571_);
lean_ctor_set(v___x_1990_, 2, v_v_2563_);
lean_ctor_set(v___x_1990_, 1, v_k_2562_);
lean_ctor_set(v___x_1990_, 0, v___x_2568_);
v___x_2573_ = v___x_1990_;
goto v_reusejp_2572_;
}
else
{
lean_object* v_reuseFailAlloc_2574_; 
v_reuseFailAlloc_2574_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2574_, 0, v___x_2568_);
lean_ctor_set(v_reuseFailAlloc_2574_, 1, v_k_2562_);
lean_ctor_set(v_reuseFailAlloc_2574_, 2, v_v_2563_);
lean_ctor_set(v_reuseFailAlloc_2574_, 3, v___x_2571_);
lean_ctor_set(v_reuseFailAlloc_2574_, 4, v_r_2560_);
v___x_2573_ = v_reuseFailAlloc_2574_;
goto v_reusejp_2572_;
}
v_reusejp_2572_:
{
return v___x_2573_;
}
}
}
}
else
{
lean_object* v_k_2579_; lean_object* v_v_2580_; lean_object* v___x_2582_; uint8_t v_isShared_2583_; uint8_t v_isSharedCheck_2603_; 
v_k_2579_ = lean_ctor_get(v_r_1988_, 1);
v_v_2580_ = lean_ctor_get(v_r_1988_, 2);
v_isSharedCheck_2603_ = !lean_is_exclusive(v_r_1988_);
if (v_isSharedCheck_2603_ == 0)
{
lean_object* v_unused_2604_; lean_object* v_unused_2605_; lean_object* v_unused_2606_; 
v_unused_2604_ = lean_ctor_get(v_r_1988_, 4);
lean_dec(v_unused_2604_);
v_unused_2605_ = lean_ctor_get(v_r_1988_, 3);
lean_dec(v_unused_2605_);
v_unused_2606_ = lean_ctor_get(v_r_1988_, 0);
lean_dec(v_unused_2606_);
v___x_2582_ = v_r_1988_;
v_isShared_2583_ = v_isSharedCheck_2603_;
goto v_resetjp_2581_;
}
else
{
lean_inc(v_v_2580_);
lean_inc(v_k_2579_);
lean_dec(v_r_1988_);
v___x_2582_ = lean_box(0);
v_isShared_2583_ = v_isSharedCheck_2603_;
goto v_resetjp_2581_;
}
v_resetjp_2581_:
{
lean_object* v_k_2584_; lean_object* v_v_2585_; lean_object* v___x_2587_; uint8_t v_isShared_2588_; uint8_t v_isSharedCheck_2599_; 
v_k_2584_ = lean_ctor_get(v_l_2559_, 1);
v_v_2585_ = lean_ctor_get(v_l_2559_, 2);
v_isSharedCheck_2599_ = !lean_is_exclusive(v_l_2559_);
if (v_isSharedCheck_2599_ == 0)
{
lean_object* v_unused_2600_; lean_object* v_unused_2601_; lean_object* v_unused_2602_; 
v_unused_2600_ = lean_ctor_get(v_l_2559_, 4);
lean_dec(v_unused_2600_);
v_unused_2601_ = lean_ctor_get(v_l_2559_, 3);
lean_dec(v_unused_2601_);
v_unused_2602_ = lean_ctor_get(v_l_2559_, 0);
lean_dec(v_unused_2602_);
v___x_2587_ = v_l_2559_;
v_isShared_2588_ = v_isSharedCheck_2599_;
goto v_resetjp_2586_;
}
else
{
lean_inc(v_v_2585_);
lean_inc(v_k_2584_);
lean_dec(v_l_2559_);
v___x_2587_ = lean_box(0);
v_isShared_2588_ = v_isSharedCheck_2599_;
goto v_resetjp_2586_;
}
v_resetjp_2586_:
{
lean_object* v___x_2589_; lean_object* v___x_2591_; 
v___x_2589_ = lean_unsigned_to_nat(3u);
if (v_isShared_2588_ == 0)
{
lean_ctor_set(v___x_2587_, 4, v_r_2560_);
lean_ctor_set(v___x_2587_, 3, v_r_2560_);
lean_ctor_set(v___x_2587_, 2, v_v_1986_);
lean_ctor_set(v___x_2587_, 1, v_k_1985_);
lean_ctor_set(v___x_2587_, 0, v___x_2470_);
v___x_2591_ = v___x_2587_;
goto v_reusejp_2590_;
}
else
{
lean_object* v_reuseFailAlloc_2598_; 
v_reuseFailAlloc_2598_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2598_, 0, v___x_2470_);
lean_ctor_set(v_reuseFailAlloc_2598_, 1, v_k_1985_);
lean_ctor_set(v_reuseFailAlloc_2598_, 2, v_v_1986_);
lean_ctor_set(v_reuseFailAlloc_2598_, 3, v_r_2560_);
lean_ctor_set(v_reuseFailAlloc_2598_, 4, v_r_2560_);
v___x_2591_ = v_reuseFailAlloc_2598_;
goto v_reusejp_2590_;
}
v_reusejp_2590_:
{
lean_object* v___x_2593_; 
if (v_isShared_2583_ == 0)
{
lean_ctor_set(v___x_2582_, 3, v_r_2560_);
lean_ctor_set(v___x_2582_, 0, v___x_2470_);
v___x_2593_ = v___x_2582_;
goto v_reusejp_2592_;
}
else
{
lean_object* v_reuseFailAlloc_2597_; 
v_reuseFailAlloc_2597_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2597_, 0, v___x_2470_);
lean_ctor_set(v_reuseFailAlloc_2597_, 1, v_k_2579_);
lean_ctor_set(v_reuseFailAlloc_2597_, 2, v_v_2580_);
lean_ctor_set(v_reuseFailAlloc_2597_, 3, v_r_2560_);
lean_ctor_set(v_reuseFailAlloc_2597_, 4, v_r_2560_);
v___x_2593_ = v_reuseFailAlloc_2597_;
goto v_reusejp_2592_;
}
v_reusejp_2592_:
{
lean_object* v___x_2595_; 
if (v_isShared_1991_ == 0)
{
lean_ctor_set(v___x_1990_, 4, v___x_2593_);
lean_ctor_set(v___x_1990_, 3, v___x_2591_);
lean_ctor_set(v___x_1990_, 2, v_v_2585_);
lean_ctor_set(v___x_1990_, 1, v_k_2584_);
lean_ctor_set(v___x_1990_, 0, v___x_2589_);
v___x_2595_ = v___x_1990_;
goto v_reusejp_2594_;
}
else
{
lean_object* v_reuseFailAlloc_2596_; 
v_reuseFailAlloc_2596_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2596_, 0, v___x_2589_);
lean_ctor_set(v_reuseFailAlloc_2596_, 1, v_k_2584_);
lean_ctor_set(v_reuseFailAlloc_2596_, 2, v_v_2585_);
lean_ctor_set(v_reuseFailAlloc_2596_, 3, v___x_2591_);
lean_ctor_set(v_reuseFailAlloc_2596_, 4, v___x_2593_);
v___x_2595_ = v_reuseFailAlloc_2596_;
goto v_reusejp_2594_;
}
v_reusejp_2594_:
{
return v___x_2595_;
}
}
}
}
}
}
}
else
{
lean_object* v_r_2607_; 
v_r_2607_ = lean_ctor_get(v_r_1988_, 4);
lean_inc(v_r_2607_);
if (lean_obj_tag(v_r_2607_) == 0)
{
lean_object* v_k_2608_; lean_object* v_v_2609_; lean_object* v___x_2611_; uint8_t v_isShared_2612_; uint8_t v_isSharedCheck_2620_; 
v_k_2608_ = lean_ctor_get(v_r_1988_, 1);
v_v_2609_ = lean_ctor_get(v_r_1988_, 2);
v_isSharedCheck_2620_ = !lean_is_exclusive(v_r_1988_);
if (v_isSharedCheck_2620_ == 0)
{
lean_object* v_unused_2621_; lean_object* v_unused_2622_; lean_object* v_unused_2623_; 
v_unused_2621_ = lean_ctor_get(v_r_1988_, 4);
lean_dec(v_unused_2621_);
v_unused_2622_ = lean_ctor_get(v_r_1988_, 3);
lean_dec(v_unused_2622_);
v_unused_2623_ = lean_ctor_get(v_r_1988_, 0);
lean_dec(v_unused_2623_);
v___x_2611_ = v_r_1988_;
v_isShared_2612_ = v_isSharedCheck_2620_;
goto v_resetjp_2610_;
}
else
{
lean_inc(v_v_2609_);
lean_inc(v_k_2608_);
lean_dec(v_r_1988_);
v___x_2611_ = lean_box(0);
v_isShared_2612_ = v_isSharedCheck_2620_;
goto v_resetjp_2610_;
}
v_resetjp_2610_:
{
lean_object* v___x_2613_; lean_object* v___x_2615_; 
v___x_2613_ = lean_unsigned_to_nat(3u);
if (v_isShared_2612_ == 0)
{
lean_ctor_set(v___x_2611_, 4, v_l_2559_);
lean_ctor_set(v___x_2611_, 2, v_v_1986_);
lean_ctor_set(v___x_2611_, 1, v_k_1985_);
lean_ctor_set(v___x_2611_, 0, v___x_2470_);
v___x_2615_ = v___x_2611_;
goto v_reusejp_2614_;
}
else
{
lean_object* v_reuseFailAlloc_2619_; 
v_reuseFailAlloc_2619_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2619_, 0, v___x_2470_);
lean_ctor_set(v_reuseFailAlloc_2619_, 1, v_k_1985_);
lean_ctor_set(v_reuseFailAlloc_2619_, 2, v_v_1986_);
lean_ctor_set(v_reuseFailAlloc_2619_, 3, v_l_2559_);
lean_ctor_set(v_reuseFailAlloc_2619_, 4, v_l_2559_);
v___x_2615_ = v_reuseFailAlloc_2619_;
goto v_reusejp_2614_;
}
v_reusejp_2614_:
{
lean_object* v___x_2617_; 
if (v_isShared_1991_ == 0)
{
lean_ctor_set(v___x_1990_, 4, v_r_2607_);
lean_ctor_set(v___x_1990_, 3, v___x_2615_);
lean_ctor_set(v___x_1990_, 2, v_v_2609_);
lean_ctor_set(v___x_1990_, 1, v_k_2608_);
lean_ctor_set(v___x_1990_, 0, v___x_2613_);
v___x_2617_ = v___x_1990_;
goto v_reusejp_2616_;
}
else
{
lean_object* v_reuseFailAlloc_2618_; 
v_reuseFailAlloc_2618_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2618_, 0, v___x_2613_);
lean_ctor_set(v_reuseFailAlloc_2618_, 1, v_k_2608_);
lean_ctor_set(v_reuseFailAlloc_2618_, 2, v_v_2609_);
lean_ctor_set(v_reuseFailAlloc_2618_, 3, v___x_2615_);
lean_ctor_set(v_reuseFailAlloc_2618_, 4, v_r_2607_);
v___x_2617_ = v_reuseFailAlloc_2618_;
goto v_reusejp_2616_;
}
v_reusejp_2616_:
{
return v___x_2617_;
}
}
}
}
else
{
lean_object* v_size_2624_; lean_object* v_k_2625_; lean_object* v_v_2626_; lean_object* v___x_2628_; uint8_t v_isShared_2629_; uint8_t v_isSharedCheck_2637_; 
v_size_2624_ = lean_ctor_get(v_r_1988_, 0);
v_k_2625_ = lean_ctor_get(v_r_1988_, 1);
v_v_2626_ = lean_ctor_get(v_r_1988_, 2);
v_isSharedCheck_2637_ = !lean_is_exclusive(v_r_1988_);
if (v_isSharedCheck_2637_ == 0)
{
lean_object* v_unused_2638_; lean_object* v_unused_2639_; 
v_unused_2638_ = lean_ctor_get(v_r_1988_, 4);
lean_dec(v_unused_2638_);
v_unused_2639_ = lean_ctor_get(v_r_1988_, 3);
lean_dec(v_unused_2639_);
v___x_2628_ = v_r_1988_;
v_isShared_2629_ = v_isSharedCheck_2637_;
goto v_resetjp_2627_;
}
else
{
lean_inc(v_v_2626_);
lean_inc(v_k_2625_);
lean_inc(v_size_2624_);
lean_dec(v_r_1988_);
v___x_2628_ = lean_box(0);
v_isShared_2629_ = v_isSharedCheck_2637_;
goto v_resetjp_2627_;
}
v_resetjp_2627_:
{
lean_object* v___x_2631_; 
if (v_isShared_2629_ == 0)
{
lean_ctor_set(v___x_2628_, 3, v_r_2607_);
v___x_2631_ = v___x_2628_;
goto v_reusejp_2630_;
}
else
{
lean_object* v_reuseFailAlloc_2636_; 
v_reuseFailAlloc_2636_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2636_, 0, v_size_2624_);
lean_ctor_set(v_reuseFailAlloc_2636_, 1, v_k_2625_);
lean_ctor_set(v_reuseFailAlloc_2636_, 2, v_v_2626_);
lean_ctor_set(v_reuseFailAlloc_2636_, 3, v_r_2607_);
lean_ctor_set(v_reuseFailAlloc_2636_, 4, v_r_2607_);
v___x_2631_ = v_reuseFailAlloc_2636_;
goto v_reusejp_2630_;
}
v_reusejp_2630_:
{
lean_object* v___x_2632_; lean_object* v___x_2634_; 
v___x_2632_ = lean_unsigned_to_nat(2u);
if (v_isShared_1991_ == 0)
{
lean_ctor_set(v___x_1990_, 4, v___x_2631_);
lean_ctor_set(v___x_1990_, 3, v_r_2607_);
lean_ctor_set(v___x_1990_, 0, v___x_2632_);
v___x_2634_ = v___x_1990_;
goto v_reusejp_2633_;
}
else
{
lean_object* v_reuseFailAlloc_2635_; 
v_reuseFailAlloc_2635_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2635_, 0, v___x_2632_);
lean_ctor_set(v_reuseFailAlloc_2635_, 1, v_k_1985_);
lean_ctor_set(v_reuseFailAlloc_2635_, 2, v_v_1986_);
lean_ctor_set(v_reuseFailAlloc_2635_, 3, v_r_2607_);
lean_ctor_set(v_reuseFailAlloc_2635_, 4, v___x_2631_);
v___x_2634_ = v_reuseFailAlloc_2635_;
goto v_reusejp_2633_;
}
v_reusejp_2633_:
{
return v___x_2634_;
}
}
}
}
}
}
else
{
lean_object* v___x_2641_; 
if (v_isShared_1991_ == 0)
{
lean_ctor_set(v___x_1990_, 3, v_r_1988_);
lean_ctor_set(v___x_1990_, 0, v___x_2470_);
v___x_2641_ = v___x_1990_;
goto v_reusejp_2640_;
}
else
{
lean_object* v_reuseFailAlloc_2642_; 
v_reuseFailAlloc_2642_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2642_, 0, v___x_2470_);
lean_ctor_set(v_reuseFailAlloc_2642_, 1, v_k_1985_);
lean_ctor_set(v_reuseFailAlloc_2642_, 2, v_v_1986_);
lean_ctor_set(v_reuseFailAlloc_2642_, 3, v_r_1988_);
lean_ctor_set(v_reuseFailAlloc_2642_, 4, v_r_1988_);
v___x_2641_ = v_reuseFailAlloc_2642_;
goto v_reusejp_2640_;
}
v_reusejp_2640_:
{
return v___x_2641_;
}
}
}
}
}
}
else
{
return v_t_1984_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_erase___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_unsubscribe_spec__3___redArg___boxed(lean_object* v_k_2645_, lean_object* v_t_2646_){
_start:
{
lean_object* v_res_2647_; 
v_res_2647_ = l_Std_DTreeMap_Internal_Impl_erase___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_unsubscribe_spec__3___redArg(v_k_2645_, v_t_2646_);
lean_dec(v_k_2645_);
return v_res_2647_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_unsubscribe___redArg___lam__0(lean_object* v_id_2653_, lean_object* v___y_2654_){
_start:
{
lean_object* v___x_2656_; lean_object* v_receivers_2657_; lean_object* v___x_2658_; 
v___x_2656_ = lean_st_ref_get(v___y_2654_);
v_receivers_2657_ = lean_ctor_get(v___x_2656_, 7);
lean_inc(v_receivers_2657_);
v___x_2658_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_unsubscribe_spec__1___redArg(v_receivers_2657_, v_id_2653_);
lean_dec(v_receivers_2657_);
if (lean_obj_tag(v___x_2658_) == 1)
{
lean_object* v_val_2659_; lean_object* v___x_2660_; lean_object* v___x_2661_; 
v_val_2659_ = lean_ctor_get(v___x_2658_, 0);
lean_inc(v_val_2659_);
lean_dec_ref_known(v___x_2658_, 1);
v___x_2660_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2660_, 0, v___x_2656_);
lean_ctor_set(v___x_2660_, 1, v_val_2659_);
v___x_2661_ = l___private_Init_While_0__repeatM_erased___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_unsubscribe_spec__2___redArg(v___x_2660_, v___y_2654_);
if (lean_obj_tag(v___x_2661_) == 0)
{
lean_object* v_a_2662_; lean_object* v___x_2664_; uint8_t v_isShared_2665_; uint8_t v_isSharedCheck_2691_; 
v_a_2662_ = lean_ctor_get(v___x_2661_, 0);
v_isSharedCheck_2691_ = !lean_is_exclusive(v___x_2661_);
if (v_isSharedCheck_2691_ == 0)
{
v___x_2664_ = v___x_2661_;
v_isShared_2665_ = v_isSharedCheck_2691_;
goto v_resetjp_2663_;
}
else
{
lean_inc(v_a_2662_);
lean_dec(v___x_2661_);
v___x_2664_ = lean_box(0);
v_isShared_2665_ = v_isSharedCheck_2691_;
goto v_resetjp_2663_;
}
v_resetjp_2663_:
{
lean_object* v_fst_2666_; lean_object* v_producers_2667_; lean_object* v_waiters_2668_; lean_object* v_capacity_2669_; lean_object* v_size_2670_; lean_object* v_buffer_2671_; lean_object* v_write_2672_; lean_object* v_read_2673_; lean_object* v_receivers_2674_; lean_object* v_nextId_2675_; uint8_t v_closed_2676_; lean_object* v_pos_2677_; lean_object* v___x_2679_; uint8_t v_isShared_2680_; uint8_t v_isSharedCheck_2690_; 
v_fst_2666_ = lean_ctor_get(v_a_2662_, 0);
lean_inc(v_fst_2666_);
lean_dec(v_a_2662_);
v_producers_2667_ = lean_ctor_get(v_fst_2666_, 0);
v_waiters_2668_ = lean_ctor_get(v_fst_2666_, 1);
v_capacity_2669_ = lean_ctor_get(v_fst_2666_, 2);
v_size_2670_ = lean_ctor_get(v_fst_2666_, 3);
v_buffer_2671_ = lean_ctor_get(v_fst_2666_, 4);
v_write_2672_ = lean_ctor_get(v_fst_2666_, 5);
v_read_2673_ = lean_ctor_get(v_fst_2666_, 6);
v_receivers_2674_ = lean_ctor_get(v_fst_2666_, 7);
v_nextId_2675_ = lean_ctor_get(v_fst_2666_, 8);
v_closed_2676_ = lean_ctor_get_uint8(v_fst_2666_, sizeof(void*)*10);
v_pos_2677_ = lean_ctor_get(v_fst_2666_, 9);
v_isSharedCheck_2690_ = !lean_is_exclusive(v_fst_2666_);
if (v_isSharedCheck_2690_ == 0)
{
v___x_2679_ = v_fst_2666_;
v_isShared_2680_ = v_isSharedCheck_2690_;
goto v_resetjp_2678_;
}
else
{
lean_inc(v_pos_2677_);
lean_inc(v_nextId_2675_);
lean_inc(v_receivers_2674_);
lean_inc(v_read_2673_);
lean_inc(v_write_2672_);
lean_inc(v_buffer_2671_);
lean_inc(v_size_2670_);
lean_inc(v_capacity_2669_);
lean_inc(v_waiters_2668_);
lean_inc(v_producers_2667_);
lean_dec(v_fst_2666_);
v___x_2679_ = lean_box(0);
v_isShared_2680_ = v_isSharedCheck_2690_;
goto v_resetjp_2678_;
}
v_resetjp_2678_:
{
lean_object* v___x_2681_; lean_object* v___x_2683_; 
v___x_2681_ = l_Std_DTreeMap_Internal_Impl_erase___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_unsubscribe_spec__3___redArg(v_id_2653_, v_receivers_2674_);
if (v_isShared_2680_ == 0)
{
lean_ctor_set(v___x_2679_, 7, v___x_2681_);
v___x_2683_ = v___x_2679_;
goto v_reusejp_2682_;
}
else
{
lean_object* v_reuseFailAlloc_2689_; 
v_reuseFailAlloc_2689_ = lean_alloc_ctor(0, 10, 1);
lean_ctor_set(v_reuseFailAlloc_2689_, 0, v_producers_2667_);
lean_ctor_set(v_reuseFailAlloc_2689_, 1, v_waiters_2668_);
lean_ctor_set(v_reuseFailAlloc_2689_, 2, v_capacity_2669_);
lean_ctor_set(v_reuseFailAlloc_2689_, 3, v_size_2670_);
lean_ctor_set(v_reuseFailAlloc_2689_, 4, v_buffer_2671_);
lean_ctor_set(v_reuseFailAlloc_2689_, 5, v_write_2672_);
lean_ctor_set(v_reuseFailAlloc_2689_, 6, v_read_2673_);
lean_ctor_set(v_reuseFailAlloc_2689_, 7, v___x_2681_);
lean_ctor_set(v_reuseFailAlloc_2689_, 8, v_nextId_2675_);
lean_ctor_set(v_reuseFailAlloc_2689_, 9, v_pos_2677_);
lean_ctor_set_uint8(v_reuseFailAlloc_2689_, sizeof(void*)*10, v_closed_2676_);
v___x_2683_ = v_reuseFailAlloc_2689_;
goto v_reusejp_2682_;
}
v_reusejp_2682_:
{
lean_object* v___x_2684_; lean_object* v___x_2685_; lean_object* v___x_2687_; 
v___x_2684_ = lean_st_ref_swap(v___y_2654_, v___x_2683_);
lean_dec(v___x_2684_);
v___x_2685_ = ((lean_object*)(l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_unsubscribe___redArg___lam__0___closed__0));
if (v_isShared_2665_ == 0)
{
lean_ctor_set(v___x_2664_, 0, v___x_2685_);
v___x_2687_ = v___x_2664_;
goto v_reusejp_2686_;
}
else
{
lean_object* v_reuseFailAlloc_2688_; 
v_reuseFailAlloc_2688_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2688_, 0, v___x_2685_);
v___x_2687_ = v_reuseFailAlloc_2688_;
goto v_reusejp_2686_;
}
v_reusejp_2686_:
{
return v___x_2687_;
}
}
}
}
}
else
{
lean_object* v_a_2692_; lean_object* v___x_2694_; uint8_t v_isShared_2695_; uint8_t v_isSharedCheck_2699_; 
v_a_2692_ = lean_ctor_get(v___x_2661_, 0);
v_isSharedCheck_2699_ = !lean_is_exclusive(v___x_2661_);
if (v_isSharedCheck_2699_ == 0)
{
v___x_2694_ = v___x_2661_;
v_isShared_2695_ = v_isSharedCheck_2699_;
goto v_resetjp_2693_;
}
else
{
lean_inc(v_a_2692_);
lean_dec(v___x_2661_);
v___x_2694_ = lean_box(0);
v_isShared_2695_ = v_isSharedCheck_2699_;
goto v_resetjp_2693_;
}
v_resetjp_2693_:
{
lean_object* v___x_2697_; 
if (v_isShared_2695_ == 0)
{
v___x_2697_ = v___x_2694_;
goto v_reusejp_2696_;
}
else
{
lean_object* v_reuseFailAlloc_2698_; 
v_reuseFailAlloc_2698_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2698_, 0, v_a_2692_);
v___x_2697_ = v_reuseFailAlloc_2698_;
goto v_reusejp_2696_;
}
v_reusejp_2696_:
{
return v___x_2697_;
}
}
}
}
else
{
lean_object* v___x_2700_; lean_object* v___x_2701_; 
lean_dec(v___x_2658_);
lean_dec(v___x_2656_);
v___x_2700_ = ((lean_object*)(l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_unsubscribe___redArg___lam__0___closed__1));
v___x_2701_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2701_, 0, v___x_2700_);
return v___x_2701_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_unsubscribe___redArg___lam__0___boxed(lean_object* v_id_2702_, lean_object* v___y_2703_, lean_object* v___y_2704_){
_start:
{
lean_object* v_res_2705_; 
v_res_2705_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_unsubscribe___redArg___lam__0(v_id_2702_, v___y_2703_);
lean_dec(v___y_2703_);
lean_dec(v_id_2702_);
return v_res_2705_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_unsubscribe___redArg(lean_object* v_bd_2706_){
_start:
{
lean_object* v_state_2708_; lean_object* v_id_2709_; lean_object* v___f_2710_; lean_object* v___x_2711_; 
v_state_2708_ = lean_ctor_get(v_bd_2706_, 0);
lean_inc_ref(v_state_2708_);
v_id_2709_ = lean_ctor_get(v_bd_2706_, 1);
lean_inc(v_id_2709_);
lean_dec_ref(v_bd_2706_);
v___f_2710_ = lean_alloc_closure((void*)(l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_unsubscribe___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_2710_, 0, v_id_2709_);
v___x_2711_ = l_Std_Mutex_atomically___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_subscribe_spec__1___redArg(v_state_2708_, v___f_2710_);
if (lean_obj_tag(v___x_2711_) == 0)
{
lean_object* v_a_2712_; lean_object* v___x_2714_; uint8_t v_isShared_2715_; uint8_t v_isSharedCheck_2736_; 
v_a_2712_ = lean_ctor_get(v___x_2711_, 0);
v_isSharedCheck_2736_ = !lean_is_exclusive(v___x_2711_);
if (v_isSharedCheck_2736_ == 0)
{
v___x_2714_ = v___x_2711_;
v_isShared_2715_ = v_isSharedCheck_2736_;
goto v_resetjp_2713_;
}
else
{
lean_inc(v_a_2712_);
lean_dec(v___x_2711_);
v___x_2714_ = lean_box(0);
v_isShared_2715_ = v_isSharedCheck_2736_;
goto v_resetjp_2713_;
}
v_resetjp_2713_:
{
lean_object* v___y_2717_; 
if (lean_obj_tag(v_a_2712_) == 0)
{
lean_object* v_a_2722_; uint8_t v___x_2723_; 
v_a_2722_ = lean_ctor_get(v_a_2712_, 0);
lean_inc(v_a_2722_);
lean_dec_ref_known(v_a_2712_, 1);
v___x_2723_ = lean_unbox(v_a_2722_);
lean_dec(v_a_2722_);
switch(v___x_2723_)
{
case 0:
{
lean_object* v___x_2724_; 
v___x_2724_ = ((lean_object*)(l_Std_instToStringBroadcastError___lam__0___closed__0));
v___y_2717_ = v___x_2724_;
goto v___jp_2716_;
}
case 1:
{
lean_object* v___x_2725_; 
v___x_2725_ = ((lean_object*)(l_Std_instToStringBroadcastError___lam__0___closed__1));
v___y_2717_ = v___x_2725_;
goto v___jp_2716_;
}
default: 
{
lean_object* v___x_2726_; 
v___x_2726_ = ((lean_object*)(l_Std_instToStringBroadcastError___lam__0___closed__2));
v___y_2717_ = v___x_2726_;
goto v___jp_2716_;
}
}
}
else
{
lean_object* v___x_2728_; uint8_t v_isShared_2729_; uint8_t v_isSharedCheck_2734_; 
lean_del_object(v___x_2714_);
v_isSharedCheck_2734_ = !lean_is_exclusive(v_a_2712_);
if (v_isSharedCheck_2734_ == 0)
{
lean_object* v_unused_2735_; 
v_unused_2735_ = lean_ctor_get(v_a_2712_, 0);
lean_dec(v_unused_2735_);
v___x_2728_ = v_a_2712_;
v_isShared_2729_ = v_isSharedCheck_2734_;
goto v_resetjp_2727_;
}
else
{
lean_dec(v_a_2712_);
v___x_2728_ = lean_box(0);
v_isShared_2729_ = v_isSharedCheck_2734_;
goto v_resetjp_2727_;
}
v_resetjp_2727_:
{
lean_object* v___x_2730_; lean_object* v___x_2732_; 
v___x_2730_ = lean_box(0);
if (v_isShared_2729_ == 0)
{
lean_ctor_set_tag(v___x_2728_, 0);
lean_ctor_set(v___x_2728_, 0, v___x_2730_);
v___x_2732_ = v___x_2728_;
goto v_reusejp_2731_;
}
else
{
lean_object* v_reuseFailAlloc_2733_; 
v_reuseFailAlloc_2733_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2733_, 0, v___x_2730_);
v___x_2732_ = v_reuseFailAlloc_2733_;
goto v_reusejp_2731_;
}
v_reusejp_2731_:
{
return v___x_2732_;
}
}
}
v___jp_2716_:
{
lean_object* v___x_2718_; lean_object* v___x_2720_; 
lean_inc_ref(v___y_2717_);
v___x_2718_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_2718_, 0, v___y_2717_);
if (v_isShared_2715_ == 0)
{
lean_ctor_set_tag(v___x_2714_, 1);
lean_ctor_set(v___x_2714_, 0, v___x_2718_);
v___x_2720_ = v___x_2714_;
goto v_reusejp_2719_;
}
else
{
lean_object* v_reuseFailAlloc_2721_; 
v_reuseFailAlloc_2721_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2721_, 0, v___x_2718_);
v___x_2720_ = v_reuseFailAlloc_2721_;
goto v_reusejp_2719_;
}
v_reusejp_2719_:
{
return v___x_2720_;
}
}
}
}
else
{
lean_object* v_a_2737_; lean_object* v___x_2739_; uint8_t v_isShared_2740_; uint8_t v_isSharedCheck_2744_; 
v_a_2737_ = lean_ctor_get(v___x_2711_, 0);
v_isSharedCheck_2744_ = !lean_is_exclusive(v___x_2711_);
if (v_isSharedCheck_2744_ == 0)
{
v___x_2739_ = v___x_2711_;
v_isShared_2740_ = v_isSharedCheck_2744_;
goto v_resetjp_2738_;
}
else
{
lean_inc(v_a_2737_);
lean_dec(v___x_2711_);
v___x_2739_ = lean_box(0);
v_isShared_2740_ = v_isSharedCheck_2744_;
goto v_resetjp_2738_;
}
v_resetjp_2738_:
{
lean_object* v___x_2742_; 
if (v_isShared_2740_ == 0)
{
v___x_2742_ = v___x_2739_;
goto v_reusejp_2741_;
}
else
{
lean_object* v_reuseFailAlloc_2743_; 
v_reuseFailAlloc_2743_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2743_, 0, v_a_2737_);
v___x_2742_ = v_reuseFailAlloc_2743_;
goto v_reusejp_2741_;
}
v_reusejp_2741_:
{
return v___x_2742_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_unsubscribe___redArg___boxed(lean_object* v_bd_2745_, lean_object* v___y_2746_){
_start:
{
lean_object* v_res_2747_; 
v_res_2747_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_unsubscribe___redArg(v_bd_2745_);
return v_res_2747_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_unsubscribe(lean_object* v_00_u03b1_2748_, lean_object* v_bd_2749_){
_start:
{
lean_object* v___x_2751_; 
v___x_2751_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_unsubscribe___redArg(v_bd_2749_);
return v___x_2751_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_unsubscribe___boxed(lean_object* v_00_u03b1_2752_, lean_object* v_bd_2753_, lean_object* v___y_2754_){
_start:
{
lean_object* v_res_2755_; 
v_res_2755_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_unsubscribe(v_00_u03b1_2752_, v_bd_2753_);
return v_res_2755_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_isEmpty___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_unsubscribe_spec__0_spec__0(lean_object* v_00_u03b1_2756_, lean_object* v___y_2757_){
_start:
{
lean_object* v___x_2759_; 
v___x_2759_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_isEmpty___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_unsubscribe_spec__0_spec__0___redArg(v___y_2757_);
return v___x_2759_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_isEmpty___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_unsubscribe_spec__0_spec__0___boxed(lean_object* v_00_u03b1_2760_, lean_object* v___y_2761_, lean_object* v___y_2762_){
_start:
{
lean_object* v_res_2763_; 
v_res_2763_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_isEmpty___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_unsubscribe_spec__0_spec__0(v_00_u03b1_2760_, v___y_2761_);
lean_dec(v___y_2761_);
return v_res_2763_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_getSlot___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_unsubscribe_spec__0_spec__1(lean_object* v_00_u03b1_2764_, lean_object* v_place_2765_, lean_object* v___y_2766_){
_start:
{
lean_object* v___x_2768_; 
v___x_2768_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_getSlot___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_unsubscribe_spec__0_spec__1___redArg(v_place_2765_, v___y_2766_);
return v___x_2768_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_getSlot___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_unsubscribe_spec__0_spec__1___boxed(lean_object* v_00_u03b1_2769_, lean_object* v_place_2770_, lean_object* v___y_2771_, lean_object* v___y_2772_){
_start:
{
lean_object* v_res_2773_; 
v_res_2773_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_getSlot___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_unsubscribe_spec__0_spec__1(v_00_u03b1_2769_, v_place_2770_, v___y_2771_);
lean_dec(v___y_2771_);
lean_dec(v_place_2770_);
return v_res_2773_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getSlotValue___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_unsubscribe_spec__0_spec__2(lean_object* v_00_u03b1_2774_, lean_object* v_slot_2775_, lean_object* v_next_2776_, lean_object* v___y_2777_){
_start:
{
lean_object* v___x_2779_; 
v___x_2779_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getSlotValue___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_unsubscribe_spec__0_spec__2___redArg(v_slot_2775_, v_next_2776_);
return v___x_2779_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getSlotValue___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_unsubscribe_spec__0_spec__2___boxed(lean_object* v_00_u03b1_2780_, lean_object* v_slot_2781_, lean_object* v_next_2782_, lean_object* v___y_2783_, lean_object* v___y_2784_){
_start:
{
lean_object* v_res_2785_; 
v_res_2785_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getSlotValue___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_unsubscribe_spec__0_spec__2(v_00_u03b1_2780_, v_slot_2781_, v_next_2782_, v___y_2783_);
lean_dec(v___y_2783_);
lean_dec(v_next_2782_);
lean_dec(v_slot_2781_);
return v_res_2785_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_unsubscribe_spec__0(lean_object* v_00_u03b1_2786_, lean_object* v_next_2787_, lean_object* v___y_2788_){
_start:
{
lean_object* v___x_2790_; 
v___x_2790_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_unsubscribe_spec__0___redArg(v_next_2787_, v___y_2788_);
return v___x_2790_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_unsubscribe_spec__0___boxed(lean_object* v_00_u03b1_2791_, lean_object* v_next_2792_, lean_object* v___y_2793_, lean_object* v___y_2794_){
_start:
{
lean_object* v_res_2795_; 
v_res_2795_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_unsubscribe_spec__0(v_00_u03b1_2791_, v_next_2792_, v___y_2793_);
lean_dec(v___y_2793_);
lean_dec(v_next_2792_);
return v_res_2795_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_unsubscribe_spec__1(lean_object* v_00_u03b4_2796_, lean_object* v_t_2797_, lean_object* v_k_2798_){
_start:
{
lean_object* v___x_2799_; 
v___x_2799_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_unsubscribe_spec__1___redArg(v_t_2797_, v_k_2798_);
return v___x_2799_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_unsubscribe_spec__1___boxed(lean_object* v_00_u03b4_2800_, lean_object* v_t_2801_, lean_object* v_k_2802_){
_start:
{
lean_object* v_res_2803_; 
v_res_2803_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_unsubscribe_spec__1(v_00_u03b4_2800_, v_t_2801_, v_k_2802_);
lean_dec(v_k_2802_);
lean_dec(v_t_2801_);
return v_res_2803_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_unsubscribe_spec__2(lean_object* v_00_u03b1_2804_, lean_object* v_inst_2805_, lean_object* v_a_2806_, lean_object* v___y_2807_){
_start:
{
lean_object* v___x_2809_; 
v___x_2809_ = l___private_Init_While_0__repeatM_erased___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_unsubscribe_spec__2___redArg(v_a_2806_, v___y_2807_);
return v___x_2809_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_unsubscribe_spec__2___boxed(lean_object* v_00_u03b1_2810_, lean_object* v_inst_2811_, lean_object* v_a_2812_, lean_object* v___y_2813_, lean_object* v___y_2814_){
_start:
{
lean_object* v_res_2815_; 
v_res_2815_ = l___private_Init_While_0__repeatM_erased___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_unsubscribe_spec__2(v_00_u03b1_2810_, v_inst_2811_, v_a_2812_, v___y_2813_);
lean_dec(v___y_2813_);
return v_res_2815_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_erase___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_unsubscribe_spec__3(lean_object* v_00_u03b2_2816_, lean_object* v_k_2817_, lean_object* v_t_2818_, lean_object* v_h_2819_){
_start:
{
lean_object* v___x_2820_; 
v___x_2820_ = l_Std_DTreeMap_Internal_Impl_erase___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_unsubscribe_spec__3___redArg(v_k_2817_, v_t_2818_);
return v___x_2820_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_erase___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_unsubscribe_spec__3___boxed(lean_object* v_00_u03b2_2821_, lean_object* v_k_2822_, lean_object* v_t_2823_, lean_object* v_h_2824_){
_start:
{
lean_object* v_res_2825_; 
v_res_2825_ = l_Std_DTreeMap_Internal_Impl_erase___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_unsubscribe_spec__3(v_00_u03b2_2821_, v_k_2822_, v_t_2823_, v_h_2824_);
lean_dec(v_k_2822_);
return v_res_2825_;
}
}
LEAN_EXPORT uint8_t l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___redArg___lam__0(lean_object* v_x_2826_, lean_object* v_y_2827_){
_start:
{
uint8_t v___x_2828_; 
v___x_2828_ = lean_nat_dec_lt(v_x_2826_, v_y_2827_);
if (v___x_2828_ == 0)
{
uint8_t v___x_2829_; 
v___x_2829_ = lean_nat_dec_eq(v_x_2826_, v_y_2827_);
if (v___x_2829_ == 0)
{
uint8_t v___x_2830_; 
v___x_2830_ = 2;
return v___x_2830_;
}
else
{
uint8_t v___x_2831_; 
v___x_2831_ = 1;
return v___x_2831_;
}
}
else
{
uint8_t v___x_2832_; 
v___x_2832_ = 0;
return v___x_2832_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___redArg___lam__0___boxed(lean_object* v_x_2833_, lean_object* v_y_2834_){
_start:
{
uint8_t v_res_2835_; lean_object* v_r_2836_; 
v_res_2835_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___redArg___lam__0(v_x_2833_, v_y_2834_);
lean_dec(v_y_2834_);
lean_dec(v_x_2833_);
v_r_2836_ = lean_box(v_res_2835_);
return v_r_2836_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___redArg___lam__1(lean_object* v_x_2837_){
_start:
{
lean_object* v___x_2838_; lean_object* v___x_2839_; 
v___x_2838_ = lean_unsigned_to_nat(1u);
v___x_2839_ = lean_nat_add(v_x_2837_, v___x_2838_);
return v___x_2839_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___redArg___lam__1___boxed(lean_object* v_x_2840_){
_start:
{
lean_object* v_res_2841_; 
v_res_2841_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___redArg___lam__1(v_x_2840_);
lean_dec(v_x_2840_);
return v_res_2841_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___redArg___lam__3(lean_object* v___f_2842_, lean_object* v_receiverId_2843_, lean_object* v___f_2844_, lean_object* v_receivers_2845_, lean_object* v_s_2846_){
_start:
{
lean_object* v_producers_2847_; lean_object* v_waiters_2848_; lean_object* v_capacity_2849_; lean_object* v_size_2850_; lean_object* v_buffer_2851_; lean_object* v_write_2852_; lean_object* v_read_2853_; lean_object* v_nextId_2854_; uint8_t v_closed_2855_; lean_object* v_pos_2856_; lean_object* v___x_2858_; uint8_t v_isShared_2859_; uint8_t v_isSharedCheck_2866_; 
v_producers_2847_ = lean_ctor_get(v_s_2846_, 0);
v_waiters_2848_ = lean_ctor_get(v_s_2846_, 1);
v_capacity_2849_ = lean_ctor_get(v_s_2846_, 2);
v_size_2850_ = lean_ctor_get(v_s_2846_, 3);
v_buffer_2851_ = lean_ctor_get(v_s_2846_, 4);
v_write_2852_ = lean_ctor_get(v_s_2846_, 5);
v_read_2853_ = lean_ctor_get(v_s_2846_, 6);
v_nextId_2854_ = lean_ctor_get(v_s_2846_, 8);
v_closed_2855_ = lean_ctor_get_uint8(v_s_2846_, sizeof(void*)*10);
v_pos_2856_ = lean_ctor_get(v_s_2846_, 9);
v_isSharedCheck_2866_ = !lean_is_exclusive(v_s_2846_);
if (v_isSharedCheck_2866_ == 0)
{
lean_object* v_unused_2867_; 
v_unused_2867_ = lean_ctor_get(v_s_2846_, 7);
lean_dec(v_unused_2867_);
v___x_2858_ = v_s_2846_;
v_isShared_2859_ = v_isSharedCheck_2866_;
goto v_resetjp_2857_;
}
else
{
lean_inc(v_pos_2856_);
lean_inc(v_nextId_2854_);
lean_inc(v_read_2853_);
lean_inc(v_write_2852_);
lean_inc(v_buffer_2851_);
lean_inc(v_size_2850_);
lean_inc(v_capacity_2849_);
lean_inc(v_waiters_2848_);
lean_inc(v_producers_2847_);
lean_dec(v_s_2846_);
v___x_2858_ = lean_box(0);
v_isShared_2859_ = v_isSharedCheck_2866_;
goto v_resetjp_2857_;
}
v_resetjp_2857_:
{
lean_object* v___x_2860_; lean_object* v___x_2861_; lean_object* v___x_2863_; 
v___x_2860_ = lean_box(0);
v___x_2861_ = l_Std_DTreeMap_Internal_Impl_Const_modify___redArg(v___f_2842_, v_receiverId_2843_, v___f_2844_, v_receivers_2845_);
if (v_isShared_2859_ == 0)
{
lean_ctor_set(v___x_2858_, 7, v___x_2861_);
v___x_2863_ = v___x_2858_;
goto v_reusejp_2862_;
}
else
{
lean_object* v_reuseFailAlloc_2865_; 
v_reuseFailAlloc_2865_ = lean_alloc_ctor(0, 10, 1);
lean_ctor_set(v_reuseFailAlloc_2865_, 0, v_producers_2847_);
lean_ctor_set(v_reuseFailAlloc_2865_, 1, v_waiters_2848_);
lean_ctor_set(v_reuseFailAlloc_2865_, 2, v_capacity_2849_);
lean_ctor_set(v_reuseFailAlloc_2865_, 3, v_size_2850_);
lean_ctor_set(v_reuseFailAlloc_2865_, 4, v_buffer_2851_);
lean_ctor_set(v_reuseFailAlloc_2865_, 5, v_write_2852_);
lean_ctor_set(v_reuseFailAlloc_2865_, 6, v_read_2853_);
lean_ctor_set(v_reuseFailAlloc_2865_, 7, v___x_2861_);
lean_ctor_set(v_reuseFailAlloc_2865_, 8, v_nextId_2854_);
lean_ctor_set(v_reuseFailAlloc_2865_, 9, v_pos_2856_);
lean_ctor_set_uint8(v_reuseFailAlloc_2865_, sizeof(void*)*10, v_closed_2855_);
v___x_2863_ = v_reuseFailAlloc_2865_;
goto v_reusejp_2862_;
}
v_reusejp_2862_:
{
lean_object* v___x_2864_; 
v___x_2864_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2864_, 0, v___x_2860_);
lean_ctor_set(v___x_2864_, 1, v___x_2863_);
return v___x_2864_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___redArg___lam__2(lean_object* v_toApplicative_2868_, lean_object* v_a_2869_, lean_object* v_a_2870_){
_start:
{
lean_object* v_toPure_2871_; lean_object* v___x_2872_; 
v_toPure_2871_ = lean_ctor_get(v_toApplicative_2868_, 1);
lean_inc(v_toPure_2871_);
lean_dec_ref(v_toApplicative_2868_);
v___x_2872_ = lean_apply_2(v_toPure_2871_, lean_box(0), v_a_2869_);
return v___x_2872_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___redArg___lam__4(lean_object* v_toApplicative_2873_, lean_object* v___y_2874_, lean_object* v___f_2875_, lean_object* v_inst_2876_, lean_object* v_toBind_2877_, lean_object* v_a_2878_){
_start:
{
if (lean_obj_tag(v_a_2878_) == 1)
{
lean_object* v___f_2879_; lean_object* v___x_2880_; lean_object* v___x_2881_; lean_object* v___x_2882_; 
v___f_2879_ = lean_alloc_closure((void*)(l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___redArg___lam__2), 3, 2);
lean_closure_set(v___f_2879_, 0, v_toApplicative_2873_);
lean_closure_set(v___f_2879_, 1, v_a_2878_);
lean_inc(v___y_2874_);
v___x_2880_ = lean_alloc_closure((void*)(l_ST_Prim_Ref_modifyGetUnsafe___boxed), 6, 5);
lean_closure_set(v___x_2880_, 0, lean_box(0));
lean_closure_set(v___x_2880_, 1, lean_box(0));
lean_closure_set(v___x_2880_, 2, lean_box(0));
lean_closure_set(v___x_2880_, 3, v___y_2874_);
lean_closure_set(v___x_2880_, 4, v___f_2875_);
v___x_2881_ = lean_apply_2(v_inst_2876_, lean_box(0), v___x_2880_);
v___x_2882_ = lean_apply_4(v_toBind_2877_, lean_box(0), lean_box(0), v___x_2881_, v___f_2879_);
return v___x_2882_;
}
else
{
lean_object* v_toPure_2883_; lean_object* v___x_2884_; lean_object* v___x_2885_; 
lean_dec(v_a_2878_);
lean_dec(v_toBind_2877_);
lean_dec(v_inst_2876_);
lean_dec_ref(v___f_2875_);
v_toPure_2883_ = lean_ctor_get(v_toApplicative_2873_, 1);
lean_inc(v_toPure_2883_);
lean_dec_ref(v_toApplicative_2873_);
v___x_2884_ = lean_box(0);
v___x_2885_ = lean_apply_2(v_toPure_2883_, lean_box(0), v___x_2884_);
return v___x_2885_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___redArg___lam__4___boxed(lean_object* v_toApplicative_2886_, lean_object* v___y_2887_, lean_object* v___f_2888_, lean_object* v_inst_2889_, lean_object* v_toBind_2890_, lean_object* v_a_2891_){
_start:
{
lean_object* v_res_2892_; 
v_res_2892_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___redArg___lam__4(v_toApplicative_2886_, v___y_2887_, v___f_2888_, v_inst_2889_, v_toBind_2890_, v_a_2891_);
lean_dec(v___y_2887_);
return v_res_2892_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___redArg___lam__5(lean_object* v___f_2893_, lean_object* v_receiverId_2894_, lean_object* v___f_2895_, lean_object* v___f_2896_, lean_object* v_toApplicative_2897_, lean_object* v___y_2898_, lean_object* v_inst_2899_, lean_object* v_toBind_2900_, lean_object* v_inst_2901_, lean_object* v_inst_2902_, lean_object* v_a_2903_){
_start:
{
lean_object* v_receivers_2904_; lean_object* v___x_2905_; 
v_receivers_2904_ = lean_ctor_get(v_a_2903_, 7);
lean_inc_n(v_receivers_2904_, 2);
lean_dec_ref(v_a_2903_);
lean_inc(v_receiverId_2894_);
v___x_2905_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___redArg(v___f_2893_, v_receivers_2904_, v_receiverId_2894_);
if (lean_obj_tag(v___x_2905_) == 1)
{
lean_object* v_val_2906_; lean_object* v___f_2907_; lean_object* v___f_2908_; lean_object* v___x_2909_; lean_object* v___x_2910_; 
v_val_2906_ = lean_ctor_get(v___x_2905_, 0);
lean_inc(v_val_2906_);
lean_dec_ref_known(v___x_2905_, 1);
v___f_2907_ = lean_alloc_closure((void*)(l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___redArg___lam__3), 5, 4);
lean_closure_set(v___f_2907_, 0, v___f_2895_);
lean_closure_set(v___f_2907_, 1, v_receiverId_2894_);
lean_closure_set(v___f_2907_, 2, v___f_2896_);
lean_closure_set(v___f_2907_, 3, v_receivers_2904_);
lean_inc(v_toBind_2900_);
lean_inc(v_inst_2899_);
lean_inc(v___y_2898_);
v___f_2908_ = lean_alloc_closure((void*)(l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___redArg___lam__4___boxed), 6, 5);
lean_closure_set(v___f_2908_, 0, v_toApplicative_2897_);
lean_closure_set(v___f_2908_, 1, v___y_2898_);
lean_closure_set(v___f_2908_, 2, v___f_2907_);
lean_closure_set(v___f_2908_, 3, v_inst_2899_);
lean_closure_set(v___f_2908_, 4, v_toBind_2900_);
v___x_2909_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___redArg(v_inst_2901_, v_inst_2899_, v_inst_2902_, v_val_2906_, v___y_2898_);
v___x_2910_ = lean_apply_4(v_toBind_2900_, lean_box(0), lean_box(0), v___x_2909_, v___f_2908_);
return v___x_2910_;
}
else
{
lean_object* v_toPure_2911_; lean_object* v___x_2912_; lean_object* v___x_2913_; 
lean_dec(v___x_2905_);
lean_dec(v_receivers_2904_);
lean_dec(v_inst_2902_);
lean_dec_ref(v_inst_2901_);
lean_dec(v_toBind_2900_);
lean_dec(v_inst_2899_);
lean_dec_ref(v___f_2896_);
lean_dec_ref(v___f_2895_);
lean_dec(v_receiverId_2894_);
v_toPure_2911_ = lean_ctor_get(v_toApplicative_2897_, 1);
lean_inc(v_toPure_2911_);
lean_dec_ref(v_toApplicative_2897_);
v___x_2912_ = lean_box(0);
v___x_2913_ = lean_apply_2(v_toPure_2911_, lean_box(0), v___x_2912_);
return v___x_2913_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___redArg___lam__5___boxed(lean_object* v___f_2914_, lean_object* v_receiverId_2915_, lean_object* v___f_2916_, lean_object* v___f_2917_, lean_object* v_toApplicative_2918_, lean_object* v___y_2919_, lean_object* v_inst_2920_, lean_object* v_toBind_2921_, lean_object* v_inst_2922_, lean_object* v_inst_2923_, lean_object* v_a_2924_){
_start:
{
lean_object* v_res_2925_; 
v_res_2925_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___redArg___lam__5(v___f_2914_, v_receiverId_2915_, v___f_2916_, v___f_2917_, v_toApplicative_2918_, v___y_2919_, v_inst_2920_, v_toBind_2921_, v_inst_2922_, v_inst_2923_, v_a_2924_);
lean_dec(v___y_2919_);
return v_res_2925_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___redArg(lean_object* v_inst_2928_, lean_object* v_inst_2929_, lean_object* v_inst_2930_, lean_object* v_receiverId_2931_, lean_object* v___y_2932_){
_start:
{
lean_object* v_toApplicative_2933_; lean_object* v_toBind_2934_; lean_object* v___f_2935_; lean_object* v___f_2936_; lean_object* v___f_2937_; lean_object* v___x_2938_; lean_object* v___x_2939_; lean_object* v___x_2940_; 
v_toApplicative_2933_ = lean_ctor_get(v_inst_2928_, 0);
lean_inc_ref(v_toApplicative_2933_);
v_toBind_2934_ = lean_ctor_get(v_inst_2928_, 1);
lean_inc_n(v_toBind_2934_, 2);
v___f_2935_ = ((lean_object*)(l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___redArg___closed__0));
v___f_2936_ = ((lean_object*)(l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___redArg___closed__1));
lean_inc(v_inst_2929_);
lean_inc_n(v___y_2932_, 2);
v___f_2937_ = lean_alloc_closure((void*)(l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___redArg___lam__5___boxed), 11, 10);
lean_closure_set(v___f_2937_, 0, v___f_2935_);
lean_closure_set(v___f_2937_, 1, v_receiverId_2931_);
lean_closure_set(v___f_2937_, 2, v___f_2935_);
lean_closure_set(v___f_2937_, 3, v___f_2936_);
lean_closure_set(v___f_2937_, 4, v_toApplicative_2933_);
lean_closure_set(v___f_2937_, 5, v___y_2932_);
lean_closure_set(v___f_2937_, 6, v_inst_2929_);
lean_closure_set(v___f_2937_, 7, v_toBind_2934_);
lean_closure_set(v___f_2937_, 8, v_inst_2928_);
lean_closure_set(v___f_2937_, 9, v_inst_2930_);
v___x_2938_ = lean_alloc_closure((void*)(l_ST_Prim_Ref_get___boxed), 4, 3);
lean_closure_set(v___x_2938_, 0, lean_box(0));
lean_closure_set(v___x_2938_, 1, lean_box(0));
lean_closure_set(v___x_2938_, 2, v___y_2932_);
v___x_2939_ = lean_apply_2(v_inst_2929_, lean_box(0), v___x_2938_);
v___x_2940_ = lean_apply_4(v_toBind_2934_, lean_box(0), lean_box(0), v___x_2939_, v___f_2937_);
return v___x_2940_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___redArg___boxed(lean_object* v_inst_2941_, lean_object* v_inst_2942_, lean_object* v_inst_2943_, lean_object* v_receiverId_2944_, lean_object* v___y_2945_){
_start:
{
lean_object* v_res_2946_; 
v_res_2946_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___redArg(v_inst_2941_, v_inst_2942_, v_inst_2943_, v_receiverId_2944_, v___y_2945_);
lean_dec(v___y_2945_);
return v_res_2946_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27(lean_object* v_m_2947_, lean_object* v_00_u03b1_2948_, lean_object* v_inst_2949_, lean_object* v_inst_2950_, lean_object* v_inst_2951_, lean_object* v_receiverId_2952_, lean_object* v___y_2953_){
_start:
{
lean_object* v___x_2954_; 
v___x_2954_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___redArg(v_inst_2949_, v_inst_2950_, v_inst_2951_, v_receiverId_2952_, v___y_2953_);
return v___x_2954_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___boxed(lean_object* v_m_2955_, lean_object* v_00_u03b1_2956_, lean_object* v_inst_2957_, lean_object* v_inst_2958_, lean_object* v_inst_2959_, lean_object* v_receiverId_2960_, lean_object* v___y_2961_){
_start:
{
lean_object* v_res_2962_; 
v_res_2962_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27(v_m_2955_, v_00_u03b1_2956_, v_inst_2957_, v_inst_2958_, v_inst_2959_, v_receiverId_2960_, v___y_2961_);
lean_dec(v___y_2961_);
return v_res_2962_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_modify___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_spec__0_spec__1(lean_object* v_k_2963_, lean_object* v_t_2964_){
_start:
{
if (lean_obj_tag(v_t_2964_) == 0)
{
lean_object* v_size_2965_; lean_object* v_k_2966_; lean_object* v_v_2967_; lean_object* v_l_2968_; lean_object* v_r_2969_; lean_object* v___x_2971_; uint8_t v_isShared_2972_; uint8_t v_isSharedCheck_2988_; 
v_size_2965_ = lean_ctor_get(v_t_2964_, 0);
v_k_2966_ = lean_ctor_get(v_t_2964_, 1);
v_v_2967_ = lean_ctor_get(v_t_2964_, 2);
v_l_2968_ = lean_ctor_get(v_t_2964_, 3);
v_r_2969_ = lean_ctor_get(v_t_2964_, 4);
v_isSharedCheck_2988_ = !lean_is_exclusive(v_t_2964_);
if (v_isSharedCheck_2988_ == 0)
{
v___x_2971_ = v_t_2964_;
v_isShared_2972_ = v_isSharedCheck_2988_;
goto v_resetjp_2970_;
}
else
{
lean_inc(v_r_2969_);
lean_inc(v_l_2968_);
lean_inc(v_v_2967_);
lean_inc(v_k_2966_);
lean_inc(v_size_2965_);
lean_dec(v_t_2964_);
v___x_2971_ = lean_box(0);
v_isShared_2972_ = v_isSharedCheck_2988_;
goto v_resetjp_2970_;
}
v_resetjp_2970_:
{
uint8_t v___x_2973_; 
v___x_2973_ = lean_nat_dec_lt(v_k_2963_, v_k_2966_);
if (v___x_2973_ == 0)
{
uint8_t v___x_2974_; 
v___x_2974_ = lean_nat_dec_eq(v_k_2963_, v_k_2966_);
if (v___x_2974_ == 0)
{
lean_object* v___x_2975_; lean_object* v___x_2977_; 
v___x_2975_ = l_Std_DTreeMap_Internal_Impl_Const_modify___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_spec__0_spec__1(v_k_2963_, v_r_2969_);
if (v_isShared_2972_ == 0)
{
lean_ctor_set(v___x_2971_, 4, v___x_2975_);
v___x_2977_ = v___x_2971_;
goto v_reusejp_2976_;
}
else
{
lean_object* v_reuseFailAlloc_2978_; 
v_reuseFailAlloc_2978_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2978_, 0, v_size_2965_);
lean_ctor_set(v_reuseFailAlloc_2978_, 1, v_k_2966_);
lean_ctor_set(v_reuseFailAlloc_2978_, 2, v_v_2967_);
lean_ctor_set(v_reuseFailAlloc_2978_, 3, v_l_2968_);
lean_ctor_set(v_reuseFailAlloc_2978_, 4, v___x_2975_);
v___x_2977_ = v_reuseFailAlloc_2978_;
goto v_reusejp_2976_;
}
v_reusejp_2976_:
{
return v___x_2977_;
}
}
else
{
lean_object* v___x_2979_; lean_object* v___x_2980_; lean_object* v___x_2982_; 
lean_dec(v_k_2966_);
v___x_2979_ = lean_unsigned_to_nat(1u);
v___x_2980_ = lean_nat_add(v_v_2967_, v___x_2979_);
lean_dec(v_v_2967_);
if (v_isShared_2972_ == 0)
{
lean_ctor_set(v___x_2971_, 2, v___x_2980_);
lean_ctor_set(v___x_2971_, 1, v_k_2963_);
v___x_2982_ = v___x_2971_;
goto v_reusejp_2981_;
}
else
{
lean_object* v_reuseFailAlloc_2983_; 
v_reuseFailAlloc_2983_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2983_, 0, v_size_2965_);
lean_ctor_set(v_reuseFailAlloc_2983_, 1, v_k_2963_);
lean_ctor_set(v_reuseFailAlloc_2983_, 2, v___x_2980_);
lean_ctor_set(v_reuseFailAlloc_2983_, 3, v_l_2968_);
lean_ctor_set(v_reuseFailAlloc_2983_, 4, v_r_2969_);
v___x_2982_ = v_reuseFailAlloc_2983_;
goto v_reusejp_2981_;
}
v_reusejp_2981_:
{
return v___x_2982_;
}
}
}
else
{
lean_object* v___x_2984_; lean_object* v___x_2986_; 
v___x_2984_ = l_Std_DTreeMap_Internal_Impl_Const_modify___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_spec__0_spec__1(v_k_2963_, v_l_2968_);
if (v_isShared_2972_ == 0)
{
lean_ctor_set(v___x_2971_, 3, v___x_2984_);
v___x_2986_ = v___x_2971_;
goto v_reusejp_2985_;
}
else
{
lean_object* v_reuseFailAlloc_2987_; 
v_reuseFailAlloc_2987_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2987_, 0, v_size_2965_);
lean_ctor_set(v_reuseFailAlloc_2987_, 1, v_k_2966_);
lean_ctor_set(v_reuseFailAlloc_2987_, 2, v_v_2967_);
lean_ctor_set(v_reuseFailAlloc_2987_, 3, v___x_2984_);
lean_ctor_set(v_reuseFailAlloc_2987_, 4, v_r_2969_);
v___x_2986_ = v_reuseFailAlloc_2987_;
goto v_reusejp_2985_;
}
v_reusejp_2985_:
{
return v___x_2986_;
}
}
}
}
else
{
lean_dec(v_k_2963_);
return v_t_2964_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getSlotValue___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_spec__0_spec__0_spec__3___redArg(lean_object* v_slot_2989_, lean_object* v_next_2990_){
_start:
{
lean_object* v___x_2992_; lean_object* v_fst_2994_; lean_object* v_snd_2995_; lean_object* v_value_2997_; lean_object* v_pos_2998_; lean_object* v_remaining_2999_; uint8_t v___x_3000_; 
v___x_2992_ = lean_st_ref_take(v_slot_2989_);
v_value_2997_ = lean_ctor_get(v___x_2992_, 0);
lean_inc(v_value_2997_);
v_pos_2998_ = lean_ctor_get(v___x_2992_, 1);
lean_inc(v_pos_2998_);
v_remaining_2999_ = lean_ctor_get(v___x_2992_, 2);
lean_inc(v_remaining_2999_);
v___x_3000_ = lean_nat_dec_eq(v_next_2990_, v_pos_2998_);
if (v___x_3000_ == 0)
{
lean_object* v___x_3001_; lean_object* v___x_3002_; lean_object* v___x_3003_; 
lean_dec(v_remaining_2999_);
lean_dec(v_pos_2998_);
lean_dec(v_value_2997_);
v___x_3001_ = lean_box(0);
v___x_3002_ = lean_box(v___x_3000_);
v___x_3003_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3003_, 0, v___x_3001_);
lean_ctor_set(v___x_3003_, 1, v___x_3002_);
v_fst_2994_ = v___x_3003_;
v_snd_2995_ = v___x_2992_;
goto v___jp_2993_;
}
else
{
lean_object* v___x_3005_; uint8_t v_isShared_3006_; uint8_t v_isSharedCheck_3022_; 
v_isSharedCheck_3022_ = !lean_is_exclusive(v___x_2992_);
if (v_isSharedCheck_3022_ == 0)
{
lean_object* v_unused_3023_; lean_object* v_unused_3024_; lean_object* v_unused_3025_; 
v_unused_3023_ = lean_ctor_get(v___x_2992_, 2);
lean_dec(v_unused_3023_);
v_unused_3024_ = lean_ctor_get(v___x_2992_, 1);
lean_dec(v_unused_3024_);
v_unused_3025_ = lean_ctor_get(v___x_2992_, 0);
lean_dec(v_unused_3025_);
v___x_3005_ = v___x_2992_;
v_isShared_3006_ = v_isSharedCheck_3022_;
goto v_resetjp_3004_;
}
else
{
lean_dec(v___x_2992_);
v___x_3005_ = lean_box(0);
v_isShared_3006_ = v_isSharedCheck_3022_;
goto v_resetjp_3004_;
}
v_resetjp_3004_:
{
lean_object* v___x_3007_; uint8_t v___x_3008_; 
v___x_3007_ = lean_unsigned_to_nat(1u);
v___x_3008_ = lean_nat_dec_eq(v_remaining_2999_, v___x_3007_);
if (v___x_3008_ == 0)
{
lean_object* v___x_3009_; lean_object* v___x_3010_; lean_object* v___x_3011_; lean_object* v___x_3013_; 
v___x_3009_ = lean_box(v___x_3008_);
lean_inc(v_value_2997_);
v___x_3010_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3010_, 0, v_value_2997_);
lean_ctor_set(v___x_3010_, 1, v___x_3009_);
v___x_3011_ = lean_nat_sub(v_remaining_2999_, v___x_3007_);
lean_dec(v_remaining_2999_);
if (v_isShared_3006_ == 0)
{
lean_ctor_set(v___x_3005_, 2, v___x_3011_);
v___x_3013_ = v___x_3005_;
goto v_reusejp_3012_;
}
else
{
lean_object* v_reuseFailAlloc_3014_; 
v_reuseFailAlloc_3014_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_3014_, 0, v_value_2997_);
lean_ctor_set(v_reuseFailAlloc_3014_, 1, v_pos_2998_);
lean_ctor_set(v_reuseFailAlloc_3014_, 2, v___x_3011_);
v___x_3013_ = v_reuseFailAlloc_3014_;
goto v_reusejp_3012_;
}
v_reusejp_3012_:
{
v_fst_2994_ = v___x_3010_;
v_snd_2995_ = v___x_3013_;
goto v___jp_2993_;
}
}
else
{
lean_object* v___x_3015_; lean_object* v___x_3016_; lean_object* v___x_3017_; lean_object* v___x_3018_; lean_object* v___x_3020_; 
lean_dec(v_remaining_2999_);
v___x_3015_ = lean_box(v___x_3000_);
v___x_3016_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3016_, 0, v_value_2997_);
lean_ctor_set(v___x_3016_, 1, v___x_3015_);
v___x_3017_ = lean_box(0);
v___x_3018_ = lean_unsigned_to_nat(0u);
if (v_isShared_3006_ == 0)
{
lean_ctor_set(v___x_3005_, 2, v___x_3018_);
lean_ctor_set(v___x_3005_, 0, v___x_3017_);
v___x_3020_ = v___x_3005_;
goto v_reusejp_3019_;
}
else
{
lean_object* v_reuseFailAlloc_3021_; 
v_reuseFailAlloc_3021_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_3021_, 0, v___x_3017_);
lean_ctor_set(v_reuseFailAlloc_3021_, 1, v_pos_2998_);
lean_ctor_set(v_reuseFailAlloc_3021_, 2, v___x_3018_);
v___x_3020_ = v_reuseFailAlloc_3021_;
goto v_reusejp_3019_;
}
v_reusejp_3019_:
{
v_fst_2994_ = v___x_3016_;
v_snd_2995_ = v___x_3020_;
goto v___jp_2993_;
}
}
}
}
v___jp_2993_:
{
lean_object* v___x_2996_; 
v___x_2996_ = lean_st_ref_put(v_slot_2989_, v_snd_2995_);
return v_fst_2994_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getSlotValue___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_spec__0_spec__0_spec__3___redArg___boxed(lean_object* v_slot_3026_, lean_object* v_next_3027_, lean_object* v___y_3028_){
_start:
{
lean_object* v_res_3029_; 
v_res_3029_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getSlotValue___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_spec__0_spec__0_spec__3___redArg(v_slot_3026_, v_next_3027_);
lean_dec(v_next_3027_);
lean_dec(v_slot_3026_);
return v_res_3029_;
}
}
LEAN_EXPORT uint8_t l___private_Std_Sync_Broadcast_0__Std_Bounded_isEmpty___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_spec__0_spec__0_spec__1___redArg(lean_object* v___y_3030_){
_start:
{
lean_object* v___x_3032_; lean_object* v_size_3033_; lean_object* v___x_3034_; uint8_t v___x_3035_; 
v___x_3032_ = lean_st_ref_get(v___y_3030_);
v_size_3033_ = lean_ctor_get(v___x_3032_, 3);
lean_inc(v_size_3033_);
lean_dec(v___x_3032_);
v___x_3034_ = lean_unsigned_to_nat(0u);
v___x_3035_ = lean_nat_dec_eq(v_size_3033_, v___x_3034_);
lean_dec(v_size_3033_);
return v___x_3035_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_isEmpty___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v___y_3036_, lean_object* v___y_3037_){
_start:
{
uint8_t v_res_3038_; lean_object* v_r_3039_; 
v_res_3038_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_isEmpty___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_spec__0_spec__0_spec__1___redArg(v___y_3036_);
lean_dec(v___y_3036_);
v_r_3039_ = lean_box(v_res_3038_);
return v_r_3039_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_getSlot___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_spec__0_spec__0_spec__2___redArg(lean_object* v_place_3040_, lean_object* v___y_3041_){
_start:
{
lean_object* v___x_3043_; lean_object* v_capacity_3044_; lean_object* v_buffer_3045_; lean_object* v___x_3046_; lean_object* v___x_3047_; 
v___x_3043_ = lean_st_ref_get(v___y_3041_);
v_capacity_3044_ = lean_ctor_get(v___x_3043_, 2);
lean_inc(v_capacity_3044_);
v_buffer_3045_ = lean_ctor_get(v___x_3043_, 4);
lean_inc_ref(v_buffer_3045_);
lean_dec(v___x_3043_);
v___x_3046_ = lean_nat_mod(v_place_3040_, v_capacity_3044_);
lean_dec(v_capacity_3044_);
v___x_3047_ = lean_array_fget(v_buffer_3045_, v___x_3046_);
lean_dec(v___x_3046_);
lean_dec_ref(v_buffer_3045_);
return v___x_3047_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_getSlot___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_spec__0_spec__0_spec__2___redArg___boxed(lean_object* v_place_3048_, lean_object* v___y_3049_, lean_object* v___y_3050_){
_start:
{
lean_object* v_res_3051_; 
v_res_3051_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_getSlot___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_spec__0_spec__0_spec__2___redArg(v_place_3048_, v___y_3049_);
lean_dec(v___y_3049_);
lean_dec(v_place_3048_);
return v_res_3051_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_spec__0_spec__0___redArg(lean_object* v_next_3052_, lean_object* v___y_3053_){
_start:
{
lean_object* v___x_3055_; uint8_t v___x_3056_; 
v___x_3055_ = lean_st_ref_get(v___y_3053_);
v___x_3056_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_isEmpty___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_spec__0_spec__0_spec__1___redArg(v___y_3053_);
if (v___x_3056_ == 0)
{
lean_object* v_capacity_3057_; uint8_t v___x_3058_; lean_object* v___x_3059_; lean_object* v___x_3060_; lean_object* v___x_3061_; lean_object* v_fst_3062_; lean_object* v_snd_3063_; lean_object* v_st_3065_; lean_object* v___y_3066_; 
v_capacity_3057_ = lean_ctor_get(v___x_3055_, 2);
lean_inc(v_capacity_3057_);
v___x_3058_ = 1;
v___x_3059_ = lean_nat_mod(v_next_3052_, v_capacity_3057_);
lean_dec(v_capacity_3057_);
v___x_3060_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_getSlot___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_spec__0_spec__0_spec__2___redArg(v___x_3059_, v___y_3053_);
lean_dec(v___x_3059_);
v___x_3061_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getSlotValue___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_spec__0_spec__0_spec__3___redArg(v___x_3060_, v_next_3052_);
lean_dec(v___x_3060_);
v_fst_3062_ = lean_ctor_get(v___x_3061_, 0);
lean_inc(v_fst_3062_);
v_snd_3063_ = lean_ctor_get(v___x_3061_, 1);
lean_inc(v_snd_3063_);
lean_dec_ref(v___x_3061_);
if (lean_obj_tag(v_fst_3062_) == 1)
{
uint8_t v___x_3068_; 
v___x_3068_ = lean_unbox(v_snd_3063_);
lean_dec(v_snd_3063_);
if (v___x_3068_ == 0)
{
v_st_3065_ = v___x_3055_;
v___y_3066_ = v___y_3053_;
goto v___jp_3064_;
}
else
{
lean_object* v___x_3069_; lean_object* v_producers_3070_; lean_object* v_waiters_3071_; lean_object* v_capacity_3072_; lean_object* v_size_3073_; lean_object* v_buffer_3074_; lean_object* v_write_3075_; lean_object* v_read_3076_; lean_object* v_receivers_3077_; lean_object* v_nextId_3078_; uint8_t v_closed_3079_; lean_object* v_pos_3080_; lean_object* v___x_3081_; 
v___x_3069_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_dequeue___redArg(v___x_3055_);
v_producers_3070_ = lean_ctor_get(v___x_3069_, 0);
lean_inc_ref(v_producers_3070_);
v_waiters_3071_ = lean_ctor_get(v___x_3069_, 1);
lean_inc_ref(v_waiters_3071_);
v_capacity_3072_ = lean_ctor_get(v___x_3069_, 2);
lean_inc(v_capacity_3072_);
v_size_3073_ = lean_ctor_get(v___x_3069_, 3);
lean_inc(v_size_3073_);
v_buffer_3074_ = lean_ctor_get(v___x_3069_, 4);
lean_inc_ref(v_buffer_3074_);
v_write_3075_ = lean_ctor_get(v___x_3069_, 5);
lean_inc(v_write_3075_);
v_read_3076_ = lean_ctor_get(v___x_3069_, 6);
lean_inc(v_read_3076_);
v_receivers_3077_ = lean_ctor_get(v___x_3069_, 7);
lean_inc(v_receivers_3077_);
v_nextId_3078_ = lean_ctor_get(v___x_3069_, 8);
lean_inc(v_nextId_3078_);
v_closed_3079_ = lean_ctor_get_uint8(v___x_3069_, sizeof(void*)*10);
v_pos_3080_ = lean_ctor_get(v___x_3069_, 9);
lean_inc(v_pos_3080_);
v___x_3081_ = l_Std_Queue_dequeue_x3f___redArg(v_producers_3070_);
if (lean_obj_tag(v___x_3081_) == 1)
{
lean_object* v___x_3083_; uint8_t v_isShared_3084_; uint8_t v_isSharedCheck_3093_; 
v_isSharedCheck_3093_ = !lean_is_exclusive(v___x_3069_);
if (v_isSharedCheck_3093_ == 0)
{
lean_object* v_unused_3094_; lean_object* v_unused_3095_; lean_object* v_unused_3096_; lean_object* v_unused_3097_; lean_object* v_unused_3098_; lean_object* v_unused_3099_; lean_object* v_unused_3100_; lean_object* v_unused_3101_; lean_object* v_unused_3102_; lean_object* v_unused_3103_; 
v_unused_3094_ = lean_ctor_get(v___x_3069_, 9);
lean_dec(v_unused_3094_);
v_unused_3095_ = lean_ctor_get(v___x_3069_, 8);
lean_dec(v_unused_3095_);
v_unused_3096_ = lean_ctor_get(v___x_3069_, 7);
lean_dec(v_unused_3096_);
v_unused_3097_ = lean_ctor_get(v___x_3069_, 6);
lean_dec(v_unused_3097_);
v_unused_3098_ = lean_ctor_get(v___x_3069_, 5);
lean_dec(v_unused_3098_);
v_unused_3099_ = lean_ctor_get(v___x_3069_, 4);
lean_dec(v_unused_3099_);
v_unused_3100_ = lean_ctor_get(v___x_3069_, 3);
lean_dec(v_unused_3100_);
v_unused_3101_ = lean_ctor_get(v___x_3069_, 2);
lean_dec(v_unused_3101_);
v_unused_3102_ = lean_ctor_get(v___x_3069_, 1);
lean_dec(v_unused_3102_);
v_unused_3103_ = lean_ctor_get(v___x_3069_, 0);
lean_dec(v_unused_3103_);
v___x_3083_ = v___x_3069_;
v_isShared_3084_ = v_isSharedCheck_3093_;
goto v_resetjp_3082_;
}
else
{
lean_dec(v___x_3069_);
v___x_3083_ = lean_box(0);
v_isShared_3084_ = v_isSharedCheck_3093_;
goto v_resetjp_3082_;
}
v_resetjp_3082_:
{
lean_object* v_val_3085_; lean_object* v_fst_3086_; lean_object* v_snd_3087_; lean_object* v___x_3088_; lean_object* v___x_3089_; lean_object* v___x_3091_; 
v_val_3085_ = lean_ctor_get(v___x_3081_, 0);
lean_inc(v_val_3085_);
lean_dec_ref_known(v___x_3081_, 1);
v_fst_3086_ = lean_ctor_get(v_val_3085_, 0);
lean_inc(v_fst_3086_);
v_snd_3087_ = lean_ctor_get(v_val_3085_, 1);
lean_inc(v_snd_3087_);
lean_dec(v_val_3085_);
v___x_3088_ = lean_box(v___x_3058_);
v___x_3089_ = lean_io_promise_resolve(v___x_3088_, v_fst_3086_);
lean_dec(v_fst_3086_);
if (v_isShared_3084_ == 0)
{
lean_ctor_set(v___x_3083_, 0, v_snd_3087_);
v___x_3091_ = v___x_3083_;
goto v_reusejp_3090_;
}
else
{
lean_object* v_reuseFailAlloc_3092_; 
v_reuseFailAlloc_3092_ = lean_alloc_ctor(0, 10, 1);
lean_ctor_set(v_reuseFailAlloc_3092_, 0, v_snd_3087_);
lean_ctor_set(v_reuseFailAlloc_3092_, 1, v_waiters_3071_);
lean_ctor_set(v_reuseFailAlloc_3092_, 2, v_capacity_3072_);
lean_ctor_set(v_reuseFailAlloc_3092_, 3, v_size_3073_);
lean_ctor_set(v_reuseFailAlloc_3092_, 4, v_buffer_3074_);
lean_ctor_set(v_reuseFailAlloc_3092_, 5, v_write_3075_);
lean_ctor_set(v_reuseFailAlloc_3092_, 6, v_read_3076_);
lean_ctor_set(v_reuseFailAlloc_3092_, 7, v_receivers_3077_);
lean_ctor_set(v_reuseFailAlloc_3092_, 8, v_nextId_3078_);
lean_ctor_set(v_reuseFailAlloc_3092_, 9, v_pos_3080_);
lean_ctor_set_uint8(v_reuseFailAlloc_3092_, sizeof(void*)*10, v_closed_3079_);
v___x_3091_ = v_reuseFailAlloc_3092_;
goto v_reusejp_3090_;
}
v_reusejp_3090_:
{
v_st_3065_ = v___x_3091_;
v___y_3066_ = v___y_3053_;
goto v___jp_3064_;
}
}
}
else
{
lean_dec(v___x_3081_);
lean_dec(v_pos_3080_);
lean_dec(v_nextId_3078_);
lean_dec(v_receivers_3077_);
lean_dec(v_read_3076_);
lean_dec(v_write_3075_);
lean_dec_ref(v_buffer_3074_);
lean_dec(v_size_3073_);
lean_dec(v_capacity_3072_);
lean_dec_ref(v_waiters_3071_);
v_st_3065_ = v___x_3069_;
v___y_3066_ = v___y_3053_;
goto v___jp_3064_;
}
}
}
else
{
lean_object* v___x_3104_; 
lean_dec(v_snd_3063_);
lean_dec(v_fst_3062_);
lean_dec(v___x_3055_);
v___x_3104_ = lean_box(0);
return v___x_3104_;
}
v___jp_3064_:
{
lean_object* v___x_3067_; 
v___x_3067_ = lean_st_ref_swap(v___y_3066_, v_st_3065_);
lean_dec(v___x_3067_);
return v_fst_3062_;
}
}
else
{
lean_object* v___x_3105_; 
lean_dec(v___x_3055_);
v___x_3105_ = lean_box(0);
return v___x_3105_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_spec__0_spec__0___redArg___boxed(lean_object* v_next_3106_, lean_object* v___y_3107_, lean_object* v___y_3108_){
_start:
{
lean_object* v_res_3109_; 
v_res_3109_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_spec__0_spec__0___redArg(v_next_3106_, v___y_3107_);
lean_dec(v___y_3107_);
lean_dec(v_next_3106_);
return v_res_3109_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_spec__0___redArg(lean_object* v_receiverId_3110_, lean_object* v___y_3111_){
_start:
{
lean_object* v___x_3113_; lean_object* v_receivers_3114_; lean_object* v___x_3115_; 
v___x_3113_ = lean_st_ref_get(v___y_3111_);
v_receivers_3114_ = lean_ctor_get(v___x_3113_, 7);
lean_inc(v_receivers_3114_);
lean_dec(v___x_3113_);
v___x_3115_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_unsubscribe_spec__1___redArg(v_receivers_3114_, v_receiverId_3110_);
if (lean_obj_tag(v___x_3115_) == 1)
{
lean_object* v_val_3116_; lean_object* v___x_3117_; 
v_val_3116_ = lean_ctor_get(v___x_3115_, 0);
lean_inc(v_val_3116_);
lean_dec_ref_known(v___x_3115_, 1);
v___x_3117_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_spec__0_spec__0___redArg(v_val_3116_, v___y_3111_);
lean_dec(v_val_3116_);
if (lean_obj_tag(v___x_3117_) == 1)
{
lean_object* v___x_3118_; lean_object* v_producers_3119_; lean_object* v_waiters_3120_; lean_object* v_capacity_3121_; lean_object* v_size_3122_; lean_object* v_buffer_3123_; lean_object* v_write_3124_; lean_object* v_read_3125_; lean_object* v_nextId_3126_; uint8_t v_closed_3127_; lean_object* v_pos_3128_; lean_object* v___x_3130_; uint8_t v_isShared_3131_; uint8_t v_isSharedCheck_3137_; 
v___x_3118_ = lean_st_ref_take(v___y_3111_);
v_producers_3119_ = lean_ctor_get(v___x_3118_, 0);
v_waiters_3120_ = lean_ctor_get(v___x_3118_, 1);
v_capacity_3121_ = lean_ctor_get(v___x_3118_, 2);
v_size_3122_ = lean_ctor_get(v___x_3118_, 3);
v_buffer_3123_ = lean_ctor_get(v___x_3118_, 4);
v_write_3124_ = lean_ctor_get(v___x_3118_, 5);
v_read_3125_ = lean_ctor_get(v___x_3118_, 6);
v_nextId_3126_ = lean_ctor_get(v___x_3118_, 8);
v_closed_3127_ = lean_ctor_get_uint8(v___x_3118_, sizeof(void*)*10);
v_pos_3128_ = lean_ctor_get(v___x_3118_, 9);
v_isSharedCheck_3137_ = !lean_is_exclusive(v___x_3118_);
if (v_isSharedCheck_3137_ == 0)
{
lean_object* v_unused_3138_; 
v_unused_3138_ = lean_ctor_get(v___x_3118_, 7);
lean_dec(v_unused_3138_);
v___x_3130_ = v___x_3118_;
v_isShared_3131_ = v_isSharedCheck_3137_;
goto v_resetjp_3129_;
}
else
{
lean_inc(v_pos_3128_);
lean_inc(v_nextId_3126_);
lean_inc(v_read_3125_);
lean_inc(v_write_3124_);
lean_inc(v_buffer_3123_);
lean_inc(v_size_3122_);
lean_inc(v_capacity_3121_);
lean_inc(v_waiters_3120_);
lean_inc(v_producers_3119_);
lean_dec(v___x_3118_);
v___x_3130_ = lean_box(0);
v_isShared_3131_ = v_isSharedCheck_3137_;
goto v_resetjp_3129_;
}
v_resetjp_3129_:
{
lean_object* v___x_3132_; lean_object* v___x_3134_; 
v___x_3132_ = l_Std_DTreeMap_Internal_Impl_Const_modify___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_spec__0_spec__1(v_receiverId_3110_, v_receivers_3114_);
if (v_isShared_3131_ == 0)
{
lean_ctor_set(v___x_3130_, 7, v___x_3132_);
v___x_3134_ = v___x_3130_;
goto v_reusejp_3133_;
}
else
{
lean_object* v_reuseFailAlloc_3136_; 
v_reuseFailAlloc_3136_ = lean_alloc_ctor(0, 10, 1);
lean_ctor_set(v_reuseFailAlloc_3136_, 0, v_producers_3119_);
lean_ctor_set(v_reuseFailAlloc_3136_, 1, v_waiters_3120_);
lean_ctor_set(v_reuseFailAlloc_3136_, 2, v_capacity_3121_);
lean_ctor_set(v_reuseFailAlloc_3136_, 3, v_size_3122_);
lean_ctor_set(v_reuseFailAlloc_3136_, 4, v_buffer_3123_);
lean_ctor_set(v_reuseFailAlloc_3136_, 5, v_write_3124_);
lean_ctor_set(v_reuseFailAlloc_3136_, 6, v_read_3125_);
lean_ctor_set(v_reuseFailAlloc_3136_, 7, v___x_3132_);
lean_ctor_set(v_reuseFailAlloc_3136_, 8, v_nextId_3126_);
lean_ctor_set(v_reuseFailAlloc_3136_, 9, v_pos_3128_);
lean_ctor_set_uint8(v_reuseFailAlloc_3136_, sizeof(void*)*10, v_closed_3127_);
v___x_3134_ = v_reuseFailAlloc_3136_;
goto v_reusejp_3133_;
}
v_reusejp_3133_:
{
lean_object* v___x_3135_; 
v___x_3135_ = lean_st_ref_put(v___y_3111_, v___x_3134_);
return v___x_3117_;
}
}
}
else
{
lean_object* v___x_3139_; 
lean_dec(v___x_3117_);
lean_dec(v_receivers_3114_);
lean_dec(v_receiverId_3110_);
v___x_3139_ = lean_box(0);
return v___x_3139_;
}
}
else
{
lean_object* v___x_3140_; 
lean_dec(v___x_3115_);
lean_dec(v_receivers_3114_);
lean_dec(v_receiverId_3110_);
v___x_3140_ = lean_box(0);
return v___x_3140_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_spec__0___redArg___boxed(lean_object* v_receiverId_3141_, lean_object* v___y_3142_, lean_object* v___y_3143_){
_start:
{
lean_object* v_res_3144_; 
v_res_3144_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_spec__0___redArg(v_receiverId_3141_, v___y_3142_);
lean_dec(v___y_3142_);
return v_res_3144_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv___redArg___lam__0(lean_object* v_id_3145_, lean_object* v___y_3146_){
_start:
{
lean_object* v___x_3148_; 
v___x_3148_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_spec__0___redArg(v_id_3145_, v___y_3146_);
return v___x_3148_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv___redArg___lam__0___boxed(lean_object* v_id_3149_, lean_object* v___y_3150_, lean_object* v___y_3151_){
_start:
{
lean_object* v_res_3152_; 
v_res_3152_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv___redArg___lam__0(v_id_3149_, v___y_3150_);
lean_dec(v___y_3150_);
return v_res_3152_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv___redArg(lean_object* v_ch_3153_){
_start:
{
lean_object* v_state_3155_; lean_object* v_id_3156_; lean_object* v___f_3157_; lean_object* v___x_3158_; 
v_state_3155_ = lean_ctor_get(v_ch_3153_, 0);
lean_inc_ref(v_state_3155_);
v_id_3156_ = lean_ctor_get(v_ch_3153_, 1);
lean_inc(v_id_3156_);
lean_dec_ref(v_ch_3153_);
v___f_3157_ = lean_alloc_closure((void*)(l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_3157_, 0, v_id_3156_);
v___x_3158_ = l_Std_Mutex_atomically___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_trySend_spec__0___redArg(v_state_3155_, v___f_3157_);
return v___x_3158_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv___redArg___boxed(lean_object* v_ch_3159_, lean_object* v___y_3160_){
_start:
{
lean_object* v_res_3161_; 
v_res_3161_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv___redArg(v_ch_3159_);
return v_res_3161_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv(lean_object* v_00_u03b1_3162_, lean_object* v_ch_3163_){
_start:
{
lean_object* v___x_3165_; 
v___x_3165_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv___redArg(v_ch_3163_);
return v___x_3165_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv___boxed(lean_object* v_00_u03b1_3166_, lean_object* v_ch_3167_, lean_object* v___y_3168_){
_start:
{
lean_object* v_res_3169_; 
v_res_3169_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv(v_00_u03b1_3166_, v_ch_3167_);
return v_res_3169_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_spec__0(lean_object* v_00_u03b1_3170_, lean_object* v_receiverId_3171_, lean_object* v___y_3172_){
_start:
{
lean_object* v___x_3174_; 
v___x_3174_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_spec__0___redArg(v_receiverId_3171_, v___y_3172_);
return v___x_3174_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_spec__0___boxed(lean_object* v_00_u03b1_3175_, lean_object* v_receiverId_3176_, lean_object* v___y_3177_, lean_object* v___y_3178_){
_start:
{
lean_object* v_res_3179_; 
v_res_3179_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_spec__0(v_00_u03b1_3175_, v_receiverId_3176_, v___y_3177_);
lean_dec(v___y_3177_);
return v_res_3179_;
}
}
LEAN_EXPORT uint8_t l___private_Std_Sync_Broadcast_0__Std_Bounded_isEmpty___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_spec__0_spec__0_spec__1(lean_object* v_00_u03b1_3180_, lean_object* v___y_3181_){
_start:
{
uint8_t v___x_3183_; 
v___x_3183_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_isEmpty___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_spec__0_spec__0_spec__1___redArg(v___y_3181_);
return v___x_3183_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_isEmpty___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b1_3184_, lean_object* v___y_3185_, lean_object* v___y_3186_){
_start:
{
uint8_t v_res_3187_; lean_object* v_r_3188_; 
v_res_3187_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_isEmpty___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_spec__0_spec__0_spec__1(v_00_u03b1_3184_, v___y_3185_);
lean_dec(v___y_3185_);
v_r_3188_ = lean_box(v_res_3187_);
return v_r_3188_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_getSlot___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_spec__0_spec__0_spec__2(lean_object* v_00_u03b1_3189_, lean_object* v_place_3190_, lean_object* v___y_3191_){
_start:
{
lean_object* v___x_3193_; 
v___x_3193_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_getSlot___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_spec__0_spec__0_spec__2___redArg(v_place_3190_, v___y_3191_);
return v___x_3193_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_getSlot___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_spec__0_spec__0_spec__2___boxed(lean_object* v_00_u03b1_3194_, lean_object* v_place_3195_, lean_object* v___y_3196_, lean_object* v___y_3197_){
_start:
{
lean_object* v_res_3198_; 
v_res_3198_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_getSlot___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_spec__0_spec__0_spec__2(v_00_u03b1_3194_, v_place_3195_, v___y_3196_);
lean_dec(v___y_3196_);
lean_dec(v_place_3195_);
return v_res_3198_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getSlotValue___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_spec__0_spec__0_spec__3(lean_object* v_00_u03b1_3199_, lean_object* v_slot_3200_, lean_object* v_next_3201_, lean_object* v___y_3202_){
_start:
{
lean_object* v___x_3204_; 
v___x_3204_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getSlotValue___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_spec__0_spec__0_spec__3___redArg(v_slot_3200_, v_next_3201_);
return v___x_3204_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getSlotValue___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_spec__0_spec__0_spec__3___boxed(lean_object* v_00_u03b1_3205_, lean_object* v_slot_3206_, lean_object* v_next_3207_, lean_object* v___y_3208_, lean_object* v___y_3209_){
_start:
{
lean_object* v_res_3210_; 
v_res_3210_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getSlotValue___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_spec__0_spec__0_spec__3(v_00_u03b1_3205_, v_slot_3206_, v_next_3207_, v___y_3208_);
lean_dec(v___y_3208_);
lean_dec(v_next_3207_);
lean_dec(v_slot_3206_);
return v_res_3210_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_spec__0_spec__0(lean_object* v_00_u03b1_3211_, lean_object* v_next_3212_, lean_object* v___y_3213_){
_start:
{
lean_object* v___x_3215_; 
v___x_3215_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_spec__0_spec__0___redArg(v_next_3212_, v___y_3213_);
return v___x_3215_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_spec__0_spec__0___boxed(lean_object* v_00_u03b1_3216_, lean_object* v_next_3217_, lean_object* v___y_3218_, lean_object* v___y_3219_){
_start:
{
lean_object* v_res_3220_; 
v_res_3220_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_spec__0_spec__0(v_00_u03b1_3216_, v_next_3217_, v___y_3218_);
lean_dec(v___y_3218_);
lean_dec(v_next_3217_);
return v_res_3220_;
}
}
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recv_spec__0___redArg(lean_object* v_k_3221_, lean_object* v_t_3222_){
_start:
{
if (lean_obj_tag(v_t_3222_) == 0)
{
lean_object* v_k_3223_; lean_object* v_l_3224_; lean_object* v_r_3225_; uint8_t v___x_3226_; 
v_k_3223_ = lean_ctor_get(v_t_3222_, 1);
v_l_3224_ = lean_ctor_get(v_t_3222_, 3);
v_r_3225_ = lean_ctor_get(v_t_3222_, 4);
v___x_3226_ = lean_nat_dec_lt(v_k_3221_, v_k_3223_);
if (v___x_3226_ == 0)
{
uint8_t v___x_3227_; 
v___x_3227_ = lean_nat_dec_eq(v_k_3221_, v_k_3223_);
if (v___x_3227_ == 0)
{
v_t_3222_ = v_r_3225_;
goto _start;
}
else
{
return v___x_3227_;
}
}
else
{
v_t_3222_ = v_l_3224_;
goto _start;
}
}
else
{
uint8_t v___x_3230_; 
v___x_3230_ = 0;
return v___x_3230_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recv_spec__0___redArg___boxed(lean_object* v_k_3231_, lean_object* v_t_3232_){
_start:
{
uint8_t v_res_3233_; lean_object* v_r_3234_; 
v_res_3233_ = l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recv_spec__0___redArg(v_k_3231_, v_t_3232_);
lean_dec(v_t_3232_);
lean_dec(v_k_3231_);
v_r_3234_ = lean_box(v_res_3233_);
return v_r_3234_;
}
}
static lean_object* _init_l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recv___redArg___lam__1___closed__0(void){
_start:
{
lean_object* v___x_3235_; lean_object* v___x_3236_; 
v___x_3235_ = lean_box(0);
v___x_3236_ = lean_task_pure(v___x_3235_);
return v___x_3236_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recv___redArg___lam__1(lean_object* v_id_3237_, lean_object* v___f_3238_, lean_object* v___y_3239_){
_start:
{
lean_object* v___x_3241_; lean_object* v_receivers_3242_; uint8_t v___x_3243_; 
v___x_3241_ = lean_st_ref_get(v___y_3239_);
v_receivers_3242_ = lean_ctor_get(v___x_3241_, 7);
lean_inc(v_receivers_3242_);
lean_dec(v___x_3241_);
v___x_3243_ = l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recv_spec__0___redArg(v_id_3237_, v_receivers_3242_);
lean_dec(v_receivers_3242_);
if (v___x_3243_ == 0)
{
lean_object* v___x_3244_; 
lean_dec_ref(v___f_3238_);
lean_dec(v_id_3237_);
v___x_3244_ = lean_obj_once(&l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recv___redArg___lam__1___closed__0, &l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recv___redArg___lam__1___closed__0_once, _init_l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recv___redArg___lam__1___closed__0);
return v___x_3244_;
}
else
{
lean_object* v___x_3245_; 
v___x_3245_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_spec__0___redArg(v_id_3237_, v___y_3239_);
if (lean_obj_tag(v___x_3245_) == 1)
{
lean_object* v___x_3246_; 
lean_dec_ref(v___f_3238_);
v___x_3246_ = lean_task_pure(v___x_3245_);
return v___x_3246_;
}
else
{
lean_object* v___x_3247_; uint8_t v_closed_3248_; 
lean_dec(v___x_3245_);
v___x_3247_ = lean_st_ref_get(v___y_3239_);
v_closed_3248_ = lean_ctor_get_uint8(v___x_3247_, sizeof(void*)*10);
lean_dec(v___x_3247_);
if (v_closed_3248_ == 0)
{
lean_object* v___x_3249_; lean_object* v___x_3250_; lean_object* v_producers_3251_; lean_object* v_waiters_3252_; lean_object* v_capacity_3253_; lean_object* v_size_3254_; lean_object* v_buffer_3255_; lean_object* v_write_3256_; lean_object* v_read_3257_; lean_object* v_receivers_3258_; lean_object* v_nextId_3259_; uint8_t v_closed_3260_; lean_object* v_pos_3261_; lean_object* v___x_3263_; uint8_t v_isShared_3264_; uint8_t v_isSharedCheck_3275_; 
v___x_3249_ = lean_io_promise_new();
v___x_3250_ = lean_st_ref_take(v___y_3239_);
v_producers_3251_ = lean_ctor_get(v___x_3250_, 0);
v_waiters_3252_ = lean_ctor_get(v___x_3250_, 1);
v_capacity_3253_ = lean_ctor_get(v___x_3250_, 2);
v_size_3254_ = lean_ctor_get(v___x_3250_, 3);
v_buffer_3255_ = lean_ctor_get(v___x_3250_, 4);
v_write_3256_ = lean_ctor_get(v___x_3250_, 5);
v_read_3257_ = lean_ctor_get(v___x_3250_, 6);
v_receivers_3258_ = lean_ctor_get(v___x_3250_, 7);
v_nextId_3259_ = lean_ctor_get(v___x_3250_, 8);
v_closed_3260_ = lean_ctor_get_uint8(v___x_3250_, sizeof(void*)*10);
v_pos_3261_ = lean_ctor_get(v___x_3250_, 9);
v_isSharedCheck_3275_ = !lean_is_exclusive(v___x_3250_);
if (v_isSharedCheck_3275_ == 0)
{
v___x_3263_ = v___x_3250_;
v_isShared_3264_ = v_isSharedCheck_3275_;
goto v_resetjp_3262_;
}
else
{
lean_inc(v_pos_3261_);
lean_inc(v_nextId_3259_);
lean_inc(v_receivers_3258_);
lean_inc(v_read_3257_);
lean_inc(v_write_3256_);
lean_inc(v_buffer_3255_);
lean_inc(v_size_3254_);
lean_inc(v_capacity_3253_);
lean_inc(v_waiters_3252_);
lean_inc(v_producers_3251_);
lean_dec(v___x_3250_);
v___x_3263_ = lean_box(0);
v_isShared_3264_ = v_isSharedCheck_3275_;
goto v_resetjp_3262_;
}
v_resetjp_3262_:
{
lean_object* v___x_3265_; lean_object* v___x_3266_; lean_object* v___x_3267_; lean_object* v___x_3269_; 
v___x_3265_ = lean_box(0);
lean_inc(v___x_3249_);
v___x_3266_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3266_, 0, v___x_3249_);
lean_ctor_set(v___x_3266_, 1, v___x_3265_);
v___x_3267_ = l_Std_Queue_enqueue___redArg(v___x_3266_, v_waiters_3252_);
if (v_isShared_3264_ == 0)
{
lean_ctor_set(v___x_3263_, 1, v___x_3267_);
v___x_3269_ = v___x_3263_;
goto v_reusejp_3268_;
}
else
{
lean_object* v_reuseFailAlloc_3274_; 
v_reuseFailAlloc_3274_ = lean_alloc_ctor(0, 10, 1);
lean_ctor_set(v_reuseFailAlloc_3274_, 0, v_producers_3251_);
lean_ctor_set(v_reuseFailAlloc_3274_, 1, v___x_3267_);
lean_ctor_set(v_reuseFailAlloc_3274_, 2, v_capacity_3253_);
lean_ctor_set(v_reuseFailAlloc_3274_, 3, v_size_3254_);
lean_ctor_set(v_reuseFailAlloc_3274_, 4, v_buffer_3255_);
lean_ctor_set(v_reuseFailAlloc_3274_, 5, v_write_3256_);
lean_ctor_set(v_reuseFailAlloc_3274_, 6, v_read_3257_);
lean_ctor_set(v_reuseFailAlloc_3274_, 7, v_receivers_3258_);
lean_ctor_set(v_reuseFailAlloc_3274_, 8, v_nextId_3259_);
lean_ctor_set(v_reuseFailAlloc_3274_, 9, v_pos_3261_);
lean_ctor_set_uint8(v_reuseFailAlloc_3274_, sizeof(void*)*10, v_closed_3260_);
v___x_3269_ = v_reuseFailAlloc_3274_;
goto v_reusejp_3268_;
}
v_reusejp_3268_:
{
lean_object* v___x_3270_; lean_object* v___x_3271_; lean_object* v___x_3272_; lean_object* v___x_3273_; 
v___x_3270_ = lean_st_ref_put(v___y_3239_, v___x_3269_);
v___x_3271_ = lean_io_promise_result_opt(v___x_3249_);
lean_dec(v___x_3249_);
v___x_3272_ = lean_unsigned_to_nat(0u);
v___x_3273_ = lean_io_bind_task(v___x_3271_, v___f_3238_, v___x_3272_, v_closed_3248_);
return v___x_3273_;
}
}
}
else
{
lean_object* v___x_3276_; 
lean_dec_ref(v___f_3238_);
v___x_3276_ = lean_obj_once(&l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recv___redArg___lam__1___closed__0, &l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recv___redArg___lam__1___closed__0_once, _init_l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recv___redArg___lam__1___closed__0);
return v___x_3276_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recv___redArg___lam__1___boxed(lean_object* v_id_3277_, lean_object* v___f_3278_, lean_object* v___y_3279_, lean_object* v___y_3280_){
_start:
{
lean_object* v_res_3281_; 
v_res_3281_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recv___redArg___lam__1(v_id_3277_, v___f_3278_, v___y_3279_);
lean_dec(v___y_3279_);
return v_res_3281_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recv___redArg___lam__0(lean_object* v_ch_3282_, lean_object* v_res_3283_){
_start:
{
if (lean_obj_tag(v_res_3283_) == 0)
{
lean_dec_ref(v_ch_3282_);
goto v___jp_3285_;
}
else
{
lean_object* v_val_3287_; uint8_t v___x_3288_; 
v_val_3287_ = lean_ctor_get(v_res_3283_, 0);
v___x_3288_ = lean_unbox(v_val_3287_);
if (v___x_3288_ == 0)
{
lean_dec_ref(v_ch_3282_);
goto v___jp_3285_;
}
else
{
lean_object* v___x_3289_; 
v___x_3289_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recv___redArg(v_ch_3282_);
return v___x_3289_;
}
}
v___jp_3285_:
{
lean_object* v___x_3286_; 
v___x_3286_ = lean_obj_once(&l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recv___redArg___lam__1___closed__0, &l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recv___redArg___lam__1___closed__0_once, _init_l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recv___redArg___lam__1___closed__0);
return v___x_3286_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recv___redArg___lam__0___boxed(lean_object* v_ch_3290_, lean_object* v_res_3291_, lean_object* v___y_3292_){
_start:
{
lean_object* v_res_3293_; 
v_res_3293_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recv___redArg___lam__0(v_ch_3290_, v_res_3291_);
lean_dec(v_res_3291_);
return v_res_3293_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recv___redArg(lean_object* v_ch_3294_){
_start:
{
lean_object* v_state_3296_; lean_object* v_id_3297_; lean_object* v___f_3298_; lean_object* v___f_3299_; lean_object* v___x_3300_; 
v_state_3296_ = lean_ctor_get(v_ch_3294_, 0);
lean_inc_ref(v_state_3296_);
v_id_3297_ = lean_ctor_get(v_ch_3294_, 1);
lean_inc(v_id_3297_);
v___f_3298_ = lean_alloc_closure((void*)(l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recv___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_3298_, 0, v_ch_3294_);
v___f_3299_ = lean_alloc_closure((void*)(l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recv___redArg___lam__1___boxed), 4, 2);
lean_closure_set(v___f_3299_, 0, v_id_3297_);
lean_closure_set(v___f_3299_, 1, v___f_3298_);
v___x_3300_ = l_Std_Mutex_atomically___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_trySend_spec__0___redArg(v_state_3296_, v___f_3299_);
return v___x_3300_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recv___redArg___boxed(lean_object* v_ch_3301_, lean_object* v___y_3302_){
_start:
{
lean_object* v_res_3303_; 
v_res_3303_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recv___redArg(v_ch_3301_);
return v_res_3303_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recv(lean_object* v_00_u03b1_3304_, lean_object* v_ch_3305_){
_start:
{
lean_object* v___x_3307_; 
v___x_3307_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recv___redArg(v_ch_3305_);
return v___x_3307_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recv___boxed(lean_object* v_00_u03b1_3308_, lean_object* v_ch_3309_, lean_object* v___y_3310_){
_start:
{
lean_object* v_res_3311_; 
v_res_3311_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recv(v_00_u03b1_3308_, v_ch_3309_);
return v_res_3311_;
}
}
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recv_spec__0(lean_object* v_00_u03b2_3312_, lean_object* v_k_3313_, lean_object* v_t_3314_){
_start:
{
uint8_t v___x_3315_; 
v___x_3315_ = l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recv_spec__0___redArg(v_k_3313_, v_t_3314_);
return v___x_3315_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recv_spec__0___boxed(lean_object* v_00_u03b2_3316_, lean_object* v_k_3317_, lean_object* v_t_3318_){
_start:
{
uint8_t v_res_3319_; lean_object* v_r_3320_; 
v_res_3319_ = l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recv_spec__0(v_00_u03b2_3316_, v_k_3317_, v_t_3318_);
lean_dec(v_t_3318_);
lean_dec(v_k_3317_);
v_r_3320_ = lean_box(v_res_3319_);
return v_r_3320_;
}
}
static lean_object* _init_l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_forAsync___redArg___lam__0___closed__0(void){
_start:
{
lean_object* v___x_3321_; lean_object* v___x_3322_; 
v___x_3321_ = lean_box(0);
v___x_3322_ = lean_task_pure(v___x_3321_);
return v___x_3322_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_forAsync___redArg___lam__0(lean_object* v_f_3323_, lean_object* v_ch_3324_, lean_object* v_prio_3325_, lean_object* v_x_3326_){
_start:
{
if (lean_obj_tag(v_x_3326_) == 0)
{
lean_object* v___x_3328_; 
lean_dec(v_prio_3325_);
lean_dec_ref(v_ch_3324_);
lean_dec_ref(v_f_3323_);
v___x_3328_ = lean_obj_once(&l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_forAsync___redArg___lam__0___closed__0, &l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_forAsync___redArg___lam__0___closed__0_once, _init_l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_forAsync___redArg___lam__0___closed__0);
return v___x_3328_;
}
else
{
lean_object* v_val_3329_; lean_object* v___x_3330_; lean_object* v___x_3331_; 
v_val_3329_ = lean_ctor_get(v_x_3326_, 0);
lean_inc(v_val_3329_);
lean_dec_ref_known(v_x_3326_, 1);
lean_inc_ref(v_f_3323_);
v___x_3330_ = lean_apply_2(v_f_3323_, v_val_3329_, lean_box(0));
v___x_3331_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_forAsync___redArg(v_f_3323_, v_ch_3324_, v_prio_3325_);
return v___x_3331_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_forAsync___redArg___lam__0___boxed(lean_object* v_f_3332_, lean_object* v_ch_3333_, lean_object* v_prio_3334_, lean_object* v_x_3335_, lean_object* v___y_3336_){
_start:
{
lean_object* v_res_3337_; 
v_res_3337_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_forAsync___redArg___lam__0(v_f_3332_, v_ch_3333_, v_prio_3334_, v_x_3335_);
return v_res_3337_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_forAsync___redArg(lean_object* v_f_3338_, lean_object* v_ch_3339_, lean_object* v_prio_3340_){
_start:
{
lean_object* v___f_3342_; lean_object* v___x_3343_; uint8_t v___x_3344_; lean_object* v___x_3345_; 
lean_inc(v_prio_3340_);
lean_inc_ref(v_ch_3339_);
v___f_3342_ = lean_alloc_closure((void*)(l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_forAsync___redArg___lam__0___boxed), 5, 3);
lean_closure_set(v___f_3342_, 0, v_f_3338_);
lean_closure_set(v___f_3342_, 1, v_ch_3339_);
lean_closure_set(v___f_3342_, 2, v_prio_3340_);
v___x_3343_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recv___redArg(v_ch_3339_);
v___x_3344_ = 0;
v___x_3345_ = lean_io_bind_task(v___x_3343_, v___f_3342_, v_prio_3340_, v___x_3344_);
return v___x_3345_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_forAsync___redArg___boxed(lean_object* v_f_3346_, lean_object* v_ch_3347_, lean_object* v_prio_3348_, lean_object* v___y_3349_){
_start:
{
lean_object* v_res_3350_; 
v_res_3350_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_forAsync___redArg(v_f_3346_, v_ch_3347_, v_prio_3348_);
return v_res_3350_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_forAsync(lean_object* v_00_u03b1_3351_, lean_object* v_f_3352_, lean_object* v_ch_3353_, lean_object* v_prio_3354_){
_start:
{
lean_object* v___x_3356_; 
v___x_3356_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_forAsync___redArg(v_f_3352_, v_ch_3353_, v_prio_3354_);
return v___x_3356_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_forAsync___boxed(lean_object* v_00_u03b1_3357_, lean_object* v_f_3358_, lean_object* v_ch_3359_, lean_object* v_prio_3360_, lean_object* v___y_3361_){
_start:
{
lean_object* v_res_3362_; 
v_res_3362_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_forAsync(v_00_u03b1_3357_, v_f_3358_, v_ch_3359_, v_prio_3360_);
return v_res_3362_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvReady_x27___redArg___lam__1(lean_object* v_toApplicative_3363_, lean_object* v_val_3364_, lean_object* v_a_3365_){
_start:
{
lean_object* v_pos_3366_; lean_object* v_toPure_3367_; uint8_t v___x_3368_; lean_object* v___x_3369_; lean_object* v___x_3370_; 
v_pos_3366_ = lean_ctor_get(v_a_3365_, 1);
v_toPure_3367_ = lean_ctor_get(v_toApplicative_3363_, 1);
lean_inc(v_toPure_3367_);
lean_dec_ref(v_toApplicative_3363_);
v___x_3368_ = lean_nat_dec_eq(v_pos_3366_, v_val_3364_);
v___x_3369_ = lean_box(v___x_3368_);
v___x_3370_ = lean_apply_2(v_toPure_3367_, lean_box(0), v___x_3369_);
return v___x_3370_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvReady_x27___redArg___lam__1___boxed(lean_object* v_toApplicative_3371_, lean_object* v_val_3372_, lean_object* v_a_3373_){
_start:
{
lean_object* v_res_3374_; 
v_res_3374_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvReady_x27___redArg___lam__1(v_toApplicative_3371_, v_val_3372_, v_a_3373_);
lean_dec_ref(v_a_3373_);
lean_dec(v_val_3372_);
return v_res_3374_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvReady_x27___redArg___lam__0(lean_object* v_inst_3375_, lean_object* v_toBind_3376_, lean_object* v___f_3377_, lean_object* v_a_3378_){
_start:
{
lean_object* v___x_3379_; lean_object* v___x_3380_; lean_object* v___x_3381_; 
v___x_3379_ = lean_alloc_closure((void*)(l_ST_Prim_Ref_get___boxed), 4, 3);
lean_closure_set(v___x_3379_, 0, lean_box(0));
lean_closure_set(v___x_3379_, 1, lean_box(0));
lean_closure_set(v___x_3379_, 2, v_a_3378_);
v___x_3380_ = lean_apply_2(v_inst_3375_, lean_box(0), v___x_3379_);
v___x_3381_ = lean_apply_4(v_toBind_3376_, lean_box(0), lean_box(0), v___x_3380_, v___f_3377_);
return v___x_3381_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvReady_x27___redArg___lam__2(lean_object* v___f_3382_, lean_object* v_receiverId_3383_, lean_object* v_toApplicative_3384_, lean_object* v_inst_3385_, lean_object* v_toBind_3386_, lean_object* v_inst_3387_, lean_object* v___y_3388_, lean_object* v_a_3389_){
_start:
{
uint8_t v_closed_3390_; 
v_closed_3390_ = lean_ctor_get_uint8(v_a_3389_, sizeof(void*)*10);
if (v_closed_3390_ == 0)
{
lean_object* v_capacity_3391_; lean_object* v_size_3392_; lean_object* v_receivers_3393_; lean_object* v___x_3394_; 
v_capacity_3391_ = lean_ctor_get(v_a_3389_, 2);
lean_inc(v_capacity_3391_);
v_size_3392_ = lean_ctor_get(v_a_3389_, 3);
lean_inc(v_size_3392_);
v_receivers_3393_ = lean_ctor_get(v_a_3389_, 7);
lean_inc(v_receivers_3393_);
lean_dec_ref(v_a_3389_);
v___x_3394_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___redArg(v___f_3382_, v_receivers_3393_, v_receiverId_3383_);
if (lean_obj_tag(v___x_3394_) == 1)
{
lean_object* v_val_3395_; lean_object* v___x_3396_; uint8_t v___x_3397_; 
v_val_3395_ = lean_ctor_get(v___x_3394_, 0);
lean_inc(v_val_3395_);
lean_dec_ref_known(v___x_3394_, 1);
v___x_3396_ = lean_unsigned_to_nat(0u);
v___x_3397_ = lean_nat_dec_eq(v_size_3392_, v___x_3396_);
lean_dec(v_size_3392_);
if (v___x_3397_ == 0)
{
lean_object* v___f_3398_; lean_object* v___f_3399_; lean_object* v___x_3400_; lean_object* v___x_3401_; lean_object* v___x_3402_; 
lean_inc(v_val_3395_);
v___f_3398_ = lean_alloc_closure((void*)(l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvReady_x27___redArg___lam__1___boxed), 3, 2);
lean_closure_set(v___f_3398_, 0, v_toApplicative_3384_);
lean_closure_set(v___f_3398_, 1, v_val_3395_);
lean_inc(v_toBind_3386_);
lean_inc(v_inst_3385_);
v___f_3399_ = lean_alloc_closure((void*)(l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvReady_x27___redArg___lam__0), 4, 3);
lean_closure_set(v___f_3399_, 0, v_inst_3385_);
lean_closure_set(v___f_3399_, 1, v_toBind_3386_);
lean_closure_set(v___f_3399_, 2, v___f_3398_);
v___x_3400_ = lean_nat_mod(v_val_3395_, v_capacity_3391_);
lean_dec(v_capacity_3391_);
lean_dec(v_val_3395_);
v___x_3401_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_getSlot___redArg(v_inst_3387_, v_inst_3385_, v___x_3400_, v___y_3388_);
v___x_3402_ = lean_apply_4(v_toBind_3386_, lean_box(0), lean_box(0), v___x_3401_, v___f_3399_);
return v___x_3402_;
}
else
{
lean_object* v_toPure_3403_; lean_object* v___x_3404_; lean_object* v___x_3405_; 
lean_dec(v_val_3395_);
lean_dec(v_capacity_3391_);
lean_dec_ref(v_inst_3387_);
lean_dec(v_toBind_3386_);
lean_dec(v_inst_3385_);
v_toPure_3403_ = lean_ctor_get(v_toApplicative_3384_, 1);
lean_inc(v_toPure_3403_);
lean_dec_ref(v_toApplicative_3384_);
v___x_3404_ = lean_box(v_closed_3390_);
v___x_3405_ = lean_apply_2(v_toPure_3403_, lean_box(0), v___x_3404_);
return v___x_3405_;
}
}
else
{
lean_object* v_toPure_3406_; lean_object* v___x_3407_; lean_object* v___x_3408_; 
lean_dec(v___x_3394_);
lean_dec(v_size_3392_);
lean_dec(v_capacity_3391_);
lean_dec_ref(v_inst_3387_);
lean_dec(v_toBind_3386_);
lean_dec(v_inst_3385_);
v_toPure_3406_ = lean_ctor_get(v_toApplicative_3384_, 1);
lean_inc(v_toPure_3406_);
lean_dec_ref(v_toApplicative_3384_);
v___x_3407_ = lean_box(v_closed_3390_);
v___x_3408_ = lean_apply_2(v_toPure_3406_, lean_box(0), v___x_3407_);
return v___x_3408_;
}
}
else
{
lean_object* v_toPure_3409_; lean_object* v___x_3410_; lean_object* v___x_3411_; 
lean_dec_ref(v_a_3389_);
lean_dec_ref(v_inst_3387_);
lean_dec(v_toBind_3386_);
lean_dec(v_inst_3385_);
lean_dec(v_receiverId_3383_);
lean_dec_ref(v___f_3382_);
v_toPure_3409_ = lean_ctor_get(v_toApplicative_3384_, 1);
lean_inc(v_toPure_3409_);
lean_dec_ref(v_toApplicative_3384_);
v___x_3410_ = lean_box(v_closed_3390_);
v___x_3411_ = lean_apply_2(v_toPure_3409_, lean_box(0), v___x_3410_);
return v___x_3411_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvReady_x27___redArg___lam__2___boxed(lean_object* v___f_3412_, lean_object* v_receiverId_3413_, lean_object* v_toApplicative_3414_, lean_object* v_inst_3415_, lean_object* v_toBind_3416_, lean_object* v_inst_3417_, lean_object* v___y_3418_, lean_object* v_a_3419_){
_start:
{
lean_object* v_res_3420_; 
v_res_3420_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvReady_x27___redArg___lam__2(v___f_3412_, v_receiverId_3413_, v_toApplicative_3414_, v_inst_3415_, v_toBind_3416_, v_inst_3417_, v___y_3418_, v_a_3419_);
lean_dec(v___y_3418_);
return v_res_3420_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvReady_x27___redArg(lean_object* v_inst_3421_, lean_object* v_inst_3422_, lean_object* v_receiverId_3423_, lean_object* v___y_3424_){
_start:
{
lean_object* v_toApplicative_3425_; lean_object* v_toBind_3426_; lean_object* v___f_3427_; lean_object* v___f_3428_; lean_object* v___x_3429_; lean_object* v___x_3430_; lean_object* v___x_3431_; 
v_toApplicative_3425_ = lean_ctor_get(v_inst_3421_, 0);
lean_inc_ref(v_toApplicative_3425_);
v_toBind_3426_ = lean_ctor_get(v_inst_3421_, 1);
lean_inc_n(v_toBind_3426_, 2);
v___f_3427_ = ((lean_object*)(l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___redArg___closed__0));
lean_inc_n(v___y_3424_, 2);
lean_inc(v_inst_3422_);
v___f_3428_ = lean_alloc_closure((void*)(l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvReady_x27___redArg___lam__2___boxed), 8, 7);
lean_closure_set(v___f_3428_, 0, v___f_3427_);
lean_closure_set(v___f_3428_, 1, v_receiverId_3423_);
lean_closure_set(v___f_3428_, 2, v_toApplicative_3425_);
lean_closure_set(v___f_3428_, 3, v_inst_3422_);
lean_closure_set(v___f_3428_, 4, v_toBind_3426_);
lean_closure_set(v___f_3428_, 5, v_inst_3421_);
lean_closure_set(v___f_3428_, 6, v___y_3424_);
v___x_3429_ = lean_alloc_closure((void*)(l_ST_Prim_Ref_get___boxed), 4, 3);
lean_closure_set(v___x_3429_, 0, lean_box(0));
lean_closure_set(v___x_3429_, 1, lean_box(0));
lean_closure_set(v___x_3429_, 2, v___y_3424_);
v___x_3430_ = lean_apply_2(v_inst_3422_, lean_box(0), v___x_3429_);
v___x_3431_ = lean_apply_4(v_toBind_3426_, lean_box(0), lean_box(0), v___x_3430_, v___f_3428_);
return v___x_3431_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvReady_x27___redArg___boxed(lean_object* v_inst_3432_, lean_object* v_inst_3433_, lean_object* v_receiverId_3434_, lean_object* v___y_3435_){
_start:
{
lean_object* v_res_3436_; 
v_res_3436_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvReady_x27___redArg(v_inst_3432_, v_inst_3433_, v_receiverId_3434_, v___y_3435_);
lean_dec(v___y_3435_);
return v_res_3436_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvReady_x27(lean_object* v_m_3437_, lean_object* v_00_u03b1_3438_, lean_object* v_inst_3439_, lean_object* v_inst_3440_, lean_object* v_inst_3441_, lean_object* v_inst_3442_, lean_object* v_receiverId_3443_, lean_object* v___y_3444_){
_start:
{
lean_object* v_toApplicative_3445_; lean_object* v_toBind_3446_; lean_object* v___f_3447_; lean_object* v___f_3448_; lean_object* v___x_3449_; lean_object* v___x_3450_; lean_object* v___x_3451_; 
v_toApplicative_3445_ = lean_ctor_get(v_inst_3439_, 0);
lean_inc_ref(v_toApplicative_3445_);
v_toBind_3446_ = lean_ctor_get(v_inst_3439_, 1);
lean_inc_n(v_toBind_3446_, 2);
v___f_3447_ = ((lean_object*)(l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___redArg___closed__0));
lean_inc_n(v___y_3444_, 2);
lean_inc(v_inst_3440_);
v___f_3448_ = lean_alloc_closure((void*)(l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvReady_x27___redArg___lam__2___boxed), 8, 7);
lean_closure_set(v___f_3448_, 0, v___f_3447_);
lean_closure_set(v___f_3448_, 1, v_receiverId_3443_);
lean_closure_set(v___f_3448_, 2, v_toApplicative_3445_);
lean_closure_set(v___f_3448_, 3, v_inst_3440_);
lean_closure_set(v___f_3448_, 4, v_toBind_3446_);
lean_closure_set(v___f_3448_, 5, v_inst_3439_);
lean_closure_set(v___f_3448_, 6, v___y_3444_);
v___x_3449_ = lean_alloc_closure((void*)(l_ST_Prim_Ref_get___boxed), 4, 3);
lean_closure_set(v___x_3449_, 0, lean_box(0));
lean_closure_set(v___x_3449_, 1, lean_box(0));
lean_closure_set(v___x_3449_, 2, v___y_3444_);
v___x_3450_ = lean_apply_2(v_inst_3440_, lean_box(0), v___x_3449_);
v___x_3451_ = lean_apply_4(v_toBind_3446_, lean_box(0), lean_box(0), v___x_3450_, v___f_3448_);
return v___x_3451_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvReady_x27___boxed(lean_object* v_m_3452_, lean_object* v_00_u03b1_3453_, lean_object* v_inst_3454_, lean_object* v_inst_3455_, lean_object* v_inst_3456_, lean_object* v_inst_3457_, lean_object* v_receiverId_3458_, lean_object* v___y_3459_){
_start:
{
lean_object* v_res_3460_; 
v_res_3460_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvReady_x27(v_m_3452_, v_00_u03b1_3453_, v_inst_3454_, v_inst_3455_, v_inst_3456_, v_inst_3457_, v_receiverId_3458_, v___y_3459_);
lean_dec(v___y_3459_);
lean_dec(v_inst_3457_);
lean_dec(v_inst_3456_);
return v_res_3460_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Waiter_race___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_registerAux_spec__0___redArg(lean_object* v_w_3463_, lean_object* v_lose_3464_){
_start:
{
lean_object* v_finished_3466_; lean_object* v_promise_3467_; lean_object* v___x_3468_; uint8_t v___y_3470_; uint8_t v___x_3478_; 
v_finished_3466_ = lean_ctor_get(v_w_3463_, 0);
v_promise_3467_ = lean_ctor_get(v_w_3463_, 1);
v___x_3468_ = lean_st_ref_take(v_finished_3466_);
v___x_3478_ = lean_unbox(v___x_3468_);
lean_dec(v___x_3468_);
if (v___x_3478_ == 0)
{
uint8_t v___x_3479_; 
v___x_3479_ = 1;
v___y_3470_ = v___x_3479_;
goto v___jp_3469_;
}
else
{
uint8_t v___x_3480_; 
v___x_3480_ = 0;
v___y_3470_ = v___x_3480_;
goto v___jp_3469_;
}
v___jp_3469_:
{
uint8_t v___x_3471_; lean_object* v___x_3472_; lean_object* v___x_3473_; 
v___x_3471_ = 1;
v___x_3472_ = lean_box(v___x_3471_);
v___x_3473_ = lean_st_ref_put(v_finished_3466_, v___x_3472_);
if (v___y_3470_ == 0)
{
lean_object* v___x_3474_; 
v___x_3474_ = lean_apply_1(v_lose_3464_, lean_box(0));
return v___x_3474_;
}
else
{
lean_object* v___x_3475_; lean_object* v___x_3476_; lean_object* v___x_3477_; 
lean_dec_ref(v_lose_3464_);
v___x_3475_ = ((lean_object*)(l_Std_Async_Waiter_race___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_registerAux_spec__0___redArg___closed__0));
v___x_3476_ = lean_io_promise_resolve(v___x_3475_, v_promise_3467_);
v___x_3477_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3477_, 0, v___x_3476_);
return v___x_3477_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_Waiter_race___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_registerAux_spec__0___redArg___boxed(lean_object* v_w_3481_, lean_object* v_lose_3482_, lean_object* v___y_3483_){
_start:
{
lean_object* v_res_3484_; 
v_res_3484_ = l_Std_Async_Waiter_race___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_registerAux_spec__0___redArg(v_w_3481_, v_lose_3482_);
lean_dec_ref(v_w_3481_);
return v_res_3484_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Waiter_race___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_registerAux_spec__0(lean_object* v_00_u03b1_3485_, lean_object* v_w_3486_, lean_object* v_lose_3487_){
_start:
{
lean_object* v___x_3489_; 
v___x_3489_ = l_Std_Async_Waiter_race___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_registerAux_spec__0___redArg(v_w_3486_, v_lose_3487_);
return v___x_3489_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Waiter_race___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_registerAux_spec__0___boxed(lean_object* v_00_u03b1_3490_, lean_object* v_w_3491_, lean_object* v_lose_3492_, lean_object* v___y_3493_){
_start:
{
lean_object* v_res_3494_; 
v_res_3494_ = l_Std_Async_Waiter_race___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_registerAux_spec__0(v_00_u03b1_3490_, v_w_3491_, v_lose_3492_);
lean_dec_ref(v_w_3491_);
return v_res_3494_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_registerAux_spec__1___redArg(lean_object* v_receiverId_3495_, lean_object* v___y_3496_){
_start:
{
lean_object* v___x_3498_; lean_object* v_receivers_3499_; lean_object* v___x_3500_; 
v___x_3498_ = lean_st_ref_get(v___y_3496_);
v_receivers_3499_ = lean_ctor_get(v___x_3498_, 7);
lean_inc(v_receivers_3499_);
lean_dec(v___x_3498_);
v___x_3500_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_unsubscribe_spec__1___redArg(v_receivers_3499_, v_receiverId_3495_);
if (lean_obj_tag(v___x_3500_) == 1)
{
lean_object* v_val_3501_; lean_object* v___x_3502_; 
v_val_3501_ = lean_ctor_get(v___x_3500_, 0);
lean_inc(v_val_3501_);
lean_dec_ref_known(v___x_3500_, 1);
v___x_3502_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_unsubscribe_spec__0___redArg(v_val_3501_, v___y_3496_);
lean_dec(v_val_3501_);
if (lean_obj_tag(v___x_3502_) == 0)
{
lean_object* v_a_3503_; lean_object* v___x_3505_; uint8_t v_isShared_3506_; uint8_t v_isSharedCheck_3535_; 
v_a_3503_ = lean_ctor_get(v___x_3502_, 0);
v_isSharedCheck_3535_ = !lean_is_exclusive(v___x_3502_);
if (v_isSharedCheck_3535_ == 0)
{
v___x_3505_ = v___x_3502_;
v_isShared_3506_ = v_isSharedCheck_3535_;
goto v_resetjp_3504_;
}
else
{
lean_inc(v_a_3503_);
lean_dec(v___x_3502_);
v___x_3505_ = lean_box(0);
v_isShared_3506_ = v_isSharedCheck_3535_;
goto v_resetjp_3504_;
}
v_resetjp_3504_:
{
if (lean_obj_tag(v_a_3503_) == 1)
{
lean_object* v___x_3507_; lean_object* v_producers_3508_; lean_object* v_waiters_3509_; lean_object* v_capacity_3510_; lean_object* v_size_3511_; lean_object* v_buffer_3512_; lean_object* v_write_3513_; lean_object* v_read_3514_; lean_object* v_nextId_3515_; uint8_t v_closed_3516_; lean_object* v_pos_3517_; lean_object* v___x_3519_; uint8_t v_isShared_3520_; uint8_t v_isSharedCheck_3529_; 
v___x_3507_ = lean_st_ref_take(v___y_3496_);
v_producers_3508_ = lean_ctor_get(v___x_3507_, 0);
v_waiters_3509_ = lean_ctor_get(v___x_3507_, 1);
v_capacity_3510_ = lean_ctor_get(v___x_3507_, 2);
v_size_3511_ = lean_ctor_get(v___x_3507_, 3);
v_buffer_3512_ = lean_ctor_get(v___x_3507_, 4);
v_write_3513_ = lean_ctor_get(v___x_3507_, 5);
v_read_3514_ = lean_ctor_get(v___x_3507_, 6);
v_nextId_3515_ = lean_ctor_get(v___x_3507_, 8);
v_closed_3516_ = lean_ctor_get_uint8(v___x_3507_, sizeof(void*)*10);
v_pos_3517_ = lean_ctor_get(v___x_3507_, 9);
v_isSharedCheck_3529_ = !lean_is_exclusive(v___x_3507_);
if (v_isSharedCheck_3529_ == 0)
{
lean_object* v_unused_3530_; 
v_unused_3530_ = lean_ctor_get(v___x_3507_, 7);
lean_dec(v_unused_3530_);
v___x_3519_ = v___x_3507_;
v_isShared_3520_ = v_isSharedCheck_3529_;
goto v_resetjp_3518_;
}
else
{
lean_inc(v_pos_3517_);
lean_inc(v_nextId_3515_);
lean_inc(v_read_3514_);
lean_inc(v_write_3513_);
lean_inc(v_buffer_3512_);
lean_inc(v_size_3511_);
lean_inc(v_capacity_3510_);
lean_inc(v_waiters_3509_);
lean_inc(v_producers_3508_);
lean_dec(v___x_3507_);
v___x_3519_ = lean_box(0);
v_isShared_3520_ = v_isSharedCheck_3529_;
goto v_resetjp_3518_;
}
v_resetjp_3518_:
{
lean_object* v___x_3521_; lean_object* v___x_3523_; 
v___x_3521_ = l_Std_DTreeMap_Internal_Impl_Const_modify___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_spec__0_spec__1(v_receiverId_3495_, v_receivers_3499_);
if (v_isShared_3520_ == 0)
{
lean_ctor_set(v___x_3519_, 7, v___x_3521_);
v___x_3523_ = v___x_3519_;
goto v_reusejp_3522_;
}
else
{
lean_object* v_reuseFailAlloc_3528_; 
v_reuseFailAlloc_3528_ = lean_alloc_ctor(0, 10, 1);
lean_ctor_set(v_reuseFailAlloc_3528_, 0, v_producers_3508_);
lean_ctor_set(v_reuseFailAlloc_3528_, 1, v_waiters_3509_);
lean_ctor_set(v_reuseFailAlloc_3528_, 2, v_capacity_3510_);
lean_ctor_set(v_reuseFailAlloc_3528_, 3, v_size_3511_);
lean_ctor_set(v_reuseFailAlloc_3528_, 4, v_buffer_3512_);
lean_ctor_set(v_reuseFailAlloc_3528_, 5, v_write_3513_);
lean_ctor_set(v_reuseFailAlloc_3528_, 6, v_read_3514_);
lean_ctor_set(v_reuseFailAlloc_3528_, 7, v___x_3521_);
lean_ctor_set(v_reuseFailAlloc_3528_, 8, v_nextId_3515_);
lean_ctor_set(v_reuseFailAlloc_3528_, 9, v_pos_3517_);
lean_ctor_set_uint8(v_reuseFailAlloc_3528_, sizeof(void*)*10, v_closed_3516_);
v___x_3523_ = v_reuseFailAlloc_3528_;
goto v_reusejp_3522_;
}
v_reusejp_3522_:
{
lean_object* v___x_3524_; lean_object* v___x_3526_; 
v___x_3524_ = lean_st_ref_put(v___y_3496_, v___x_3523_);
if (v_isShared_3506_ == 0)
{
v___x_3526_ = v___x_3505_;
goto v_reusejp_3525_;
}
else
{
lean_object* v_reuseFailAlloc_3527_; 
v_reuseFailAlloc_3527_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3527_, 0, v_a_3503_);
v___x_3526_ = v_reuseFailAlloc_3527_;
goto v_reusejp_3525_;
}
v_reusejp_3525_:
{
return v___x_3526_;
}
}
}
}
else
{
lean_object* v___x_3531_; lean_object* v___x_3533_; 
lean_dec(v_a_3503_);
lean_dec(v_receivers_3499_);
lean_dec(v_receiverId_3495_);
v___x_3531_ = lean_box(0);
if (v_isShared_3506_ == 0)
{
lean_ctor_set(v___x_3505_, 0, v___x_3531_);
v___x_3533_ = v___x_3505_;
goto v_reusejp_3532_;
}
else
{
lean_object* v_reuseFailAlloc_3534_; 
v_reuseFailAlloc_3534_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3534_, 0, v___x_3531_);
v___x_3533_ = v_reuseFailAlloc_3534_;
goto v_reusejp_3532_;
}
v_reusejp_3532_:
{
return v___x_3533_;
}
}
}
}
else
{
lean_dec(v_receivers_3499_);
lean_dec(v_receiverId_3495_);
return v___x_3502_;
}
}
else
{
lean_object* v___x_3536_; lean_object* v___x_3537_; 
lean_dec(v___x_3500_);
lean_dec(v_receivers_3499_);
lean_dec(v_receiverId_3495_);
v___x_3536_ = lean_box(0);
v___x_3537_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3537_, 0, v___x_3536_);
return v___x_3537_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_registerAux_spec__1___redArg___boxed(lean_object* v_receiverId_3538_, lean_object* v___y_3539_, lean_object* v___y_3540_){
_start:
{
lean_object* v_res_3541_; 
v_res_3541_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_registerAux_spec__1___redArg(v_receiverId_3538_, v___y_3539_);
lean_dec(v___y_3539_);
return v_res_3541_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Waiter_race___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_registerAux_spec__2___redArg(lean_object* v___x_3542_, lean_object* v_w_3543_, lean_object* v_lose_3544_, lean_object* v___y_3545_){
_start:
{
lean_object* v_finished_3547_; lean_object* v_promise_3548_; lean_object* v___x_3549_; uint8_t v___y_3551_; uint8_t v___x_3575_; 
v_finished_3547_ = lean_ctor_get(v_w_3543_, 0);
v_promise_3548_ = lean_ctor_get(v_w_3543_, 1);
v___x_3549_ = lean_st_ref_take(v_finished_3547_);
v___x_3575_ = lean_unbox(v___x_3549_);
lean_dec(v___x_3549_);
if (v___x_3575_ == 0)
{
uint8_t v___x_3576_; 
v___x_3576_ = 1;
v___y_3551_ = v___x_3576_;
goto v___jp_3550_;
}
else
{
uint8_t v___x_3577_; 
v___x_3577_ = 0;
v___y_3551_ = v___x_3577_;
goto v___jp_3550_;
}
v___jp_3550_:
{
uint8_t v___x_3552_; lean_object* v___x_3553_; lean_object* v___x_3554_; 
v___x_3552_ = 1;
v___x_3553_ = lean_box(v___x_3552_);
v___x_3554_ = lean_st_ref_put(v_finished_3547_, v___x_3553_);
if (v___y_3551_ == 0)
{
lean_object* v___x_3555_; 
lean_dec(v___x_3542_);
lean_inc(v___y_3545_);
v___x_3555_ = lean_apply_2(v_lose_3544_, v___y_3545_, lean_box(0));
return v___x_3555_;
}
else
{
lean_object* v___x_3556_; 
lean_dec_ref(v_lose_3544_);
v___x_3556_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_registerAux_spec__1___redArg(v___x_3542_, v___y_3545_);
if (lean_obj_tag(v___x_3556_) == 0)
{
lean_object* v_a_3557_; lean_object* v___x_3559_; uint8_t v_isShared_3560_; uint8_t v_isSharedCheck_3566_; 
v_a_3557_ = lean_ctor_get(v___x_3556_, 0);
v_isSharedCheck_3566_ = !lean_is_exclusive(v___x_3556_);
if (v_isSharedCheck_3566_ == 0)
{
v___x_3559_ = v___x_3556_;
v_isShared_3560_ = v_isSharedCheck_3566_;
goto v_resetjp_3558_;
}
else
{
lean_inc(v_a_3557_);
lean_dec(v___x_3556_);
v___x_3559_ = lean_box(0);
v_isShared_3560_ = v_isSharedCheck_3566_;
goto v_resetjp_3558_;
}
v_resetjp_3558_:
{
lean_object* v___x_3561_; lean_object* v___x_3562_; lean_object* v___x_3564_; 
v___x_3561_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3561_, 0, v_a_3557_);
v___x_3562_ = lean_io_promise_resolve(v___x_3561_, v_promise_3548_);
if (v_isShared_3560_ == 0)
{
lean_ctor_set(v___x_3559_, 0, v___x_3562_);
v___x_3564_ = v___x_3559_;
goto v_reusejp_3563_;
}
else
{
lean_object* v_reuseFailAlloc_3565_; 
v_reuseFailAlloc_3565_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3565_, 0, v___x_3562_);
v___x_3564_ = v_reuseFailAlloc_3565_;
goto v_reusejp_3563_;
}
v_reusejp_3563_:
{
return v___x_3564_;
}
}
}
else
{
lean_object* v_a_3567_; lean_object* v___x_3569_; uint8_t v_isShared_3570_; uint8_t v_isSharedCheck_3574_; 
v_a_3567_ = lean_ctor_get(v___x_3556_, 0);
v_isSharedCheck_3574_ = !lean_is_exclusive(v___x_3556_);
if (v_isSharedCheck_3574_ == 0)
{
v___x_3569_ = v___x_3556_;
v_isShared_3570_ = v_isSharedCheck_3574_;
goto v_resetjp_3568_;
}
else
{
lean_inc(v_a_3567_);
lean_dec(v___x_3556_);
v___x_3569_ = lean_box(0);
v_isShared_3570_ = v_isSharedCheck_3574_;
goto v_resetjp_3568_;
}
v_resetjp_3568_:
{
lean_object* v___x_3572_; 
if (v_isShared_3570_ == 0)
{
v___x_3572_ = v___x_3569_;
goto v_reusejp_3571_;
}
else
{
lean_object* v_reuseFailAlloc_3573_; 
v_reuseFailAlloc_3573_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3573_, 0, v_a_3567_);
v___x_3572_ = v_reuseFailAlloc_3573_;
goto v_reusejp_3571_;
}
v_reusejp_3571_:
{
return v___x_3572_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_Waiter_race___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_registerAux_spec__2___redArg___boxed(lean_object* v___x_3578_, lean_object* v_w_3579_, lean_object* v_lose_3580_, lean_object* v___y_3581_, lean_object* v___y_3582_){
_start:
{
lean_object* v_res_3583_; 
v_res_3583_ = l_Std_Async_Waiter_race___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_registerAux_spec__2___redArg(v___x_3578_, v_w_3579_, v_lose_3580_, v___y_3581_);
lean_dec(v___y_3581_);
lean_dec_ref(v_w_3579_);
return v_res_3583_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Waiter_race___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_registerAux_spec__2(lean_object* v_00_u03b1_3584_, lean_object* v___x_3585_, lean_object* v_w_3586_, lean_object* v_lose_3587_, lean_object* v___y_3588_){
_start:
{
lean_object* v___x_3590_; 
v___x_3590_ = l_Std_Async_Waiter_race___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_registerAux_spec__2___redArg(v___x_3585_, v_w_3586_, v_lose_3587_, v___y_3588_);
return v___x_3590_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Waiter_race___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_registerAux_spec__2___boxed(lean_object* v_00_u03b1_3591_, lean_object* v___x_3592_, lean_object* v_w_3593_, lean_object* v_lose_3594_, lean_object* v___y_3595_, lean_object* v___y_3596_){
_start:
{
lean_object* v_res_3597_; 
v_res_3597_ = l_Std_Async_Waiter_race___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_registerAux_spec__2(v_00_u03b1_3591_, v___x_3592_, v_w_3593_, v_lose_3594_, v___y_3595_);
lean_dec(v___y_3595_);
lean_dec_ref(v_w_3593_);
return v_res_3597_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_registerAux___redArg___lam__0(lean_object* v___x_3598_){
_start:
{
lean_object* v___x_3600_; 
v___x_3600_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3600_, 0, v___x_3598_);
return v___x_3600_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_registerAux___redArg___lam__0___boxed(lean_object* v___x_3601_, lean_object* v___y_3602_){
_start:
{
lean_object* v_res_3603_; 
v_res_3603_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_registerAux___redArg___lam__0(v___x_3601_);
return v_res_3603_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_registerAux___redArg___lam__4(lean_object* v_id_3604_, lean_object* v___f_3605_, lean_object* v___y_3606_){
_start:
{
lean_object* v___x_3608_; uint8_t v_closed_3609_; 
v___x_3608_ = lean_st_ref_get(v___y_3606_);
v_closed_3609_ = lean_ctor_get_uint8(v___x_3608_, sizeof(void*)*10);
if (v_closed_3609_ == 0)
{
lean_object* v_capacity_3610_; lean_object* v_size_3611_; lean_object* v_receivers_3612_; lean_object* v___x_3613_; 
v_capacity_3610_ = lean_ctor_get(v___x_3608_, 2);
lean_inc(v_capacity_3610_);
v_size_3611_ = lean_ctor_get(v___x_3608_, 3);
lean_inc(v_size_3611_);
v_receivers_3612_ = lean_ctor_get(v___x_3608_, 7);
lean_inc(v_receivers_3612_);
lean_dec(v___x_3608_);
v___x_3613_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_unsubscribe_spec__1___redArg(v_receivers_3612_, v_id_3604_);
lean_dec(v_receivers_3612_);
if (lean_obj_tag(v___x_3613_) == 1)
{
lean_object* v_val_3614_; lean_object* v___x_3615_; uint8_t v___x_3616_; 
v_val_3614_ = lean_ctor_get(v___x_3613_, 0);
lean_inc(v_val_3614_);
lean_dec_ref_known(v___x_3613_, 1);
v___x_3615_ = lean_unsigned_to_nat(0u);
v___x_3616_ = lean_nat_dec_eq(v_size_3611_, v___x_3615_);
lean_dec(v_size_3611_);
if (v___x_3616_ == 0)
{
lean_object* v___x_3617_; lean_object* v___x_3618_; 
v___x_3617_ = lean_nat_mod(v_val_3614_, v_capacity_3610_);
lean_dec(v_capacity_3610_);
v___x_3618_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_getSlot___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_unsubscribe_spec__0_spec__1___redArg(v___x_3617_, v___y_3606_);
lean_dec(v___x_3617_);
if (lean_obj_tag(v___x_3618_) == 0)
{
lean_object* v_a_3619_; lean_object* v___x_3620_; lean_object* v_pos_3621_; uint8_t v___x_3622_; lean_object* v___x_3623_; lean_object* v___x_3624_; 
v_a_3619_ = lean_ctor_get(v___x_3618_, 0);
lean_inc(v_a_3619_);
lean_dec_ref_known(v___x_3618_, 1);
v___x_3620_ = lean_st_ref_get(v_a_3619_);
lean_dec(v_a_3619_);
v_pos_3621_ = lean_ctor_get(v___x_3620_, 1);
lean_inc(v_pos_3621_);
lean_dec(v___x_3620_);
v___x_3622_ = lean_nat_dec_eq(v_pos_3621_, v_val_3614_);
lean_dec(v_val_3614_);
lean_dec(v_pos_3621_);
v___x_3623_ = lean_box(v___x_3622_);
lean_inc(v___y_3606_);
v___x_3624_ = lean_apply_3(v___f_3605_, v___x_3623_, v___y_3606_, lean_box(0));
return v___x_3624_;
}
else
{
lean_object* v_a_3625_; lean_object* v___x_3627_; uint8_t v_isShared_3628_; uint8_t v_isSharedCheck_3632_; 
lean_dec(v_val_3614_);
lean_dec_ref(v___f_3605_);
v_a_3625_ = lean_ctor_get(v___x_3618_, 0);
v_isSharedCheck_3632_ = !lean_is_exclusive(v___x_3618_);
if (v_isSharedCheck_3632_ == 0)
{
v___x_3627_ = v___x_3618_;
v_isShared_3628_ = v_isSharedCheck_3632_;
goto v_resetjp_3626_;
}
else
{
lean_inc(v_a_3625_);
lean_dec(v___x_3618_);
v___x_3627_ = lean_box(0);
v_isShared_3628_ = v_isSharedCheck_3632_;
goto v_resetjp_3626_;
}
v_resetjp_3626_:
{
lean_object* v___x_3630_; 
if (v_isShared_3628_ == 0)
{
v___x_3630_ = v___x_3627_;
goto v_reusejp_3629_;
}
else
{
lean_object* v_reuseFailAlloc_3631_; 
v_reuseFailAlloc_3631_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3631_, 0, v_a_3625_);
v___x_3630_ = v_reuseFailAlloc_3631_;
goto v_reusejp_3629_;
}
v_reusejp_3629_:
{
return v___x_3630_;
}
}
}
}
else
{
lean_object* v___x_3633_; lean_object* v___x_3634_; 
lean_dec(v_val_3614_);
lean_dec(v_capacity_3610_);
v___x_3633_ = lean_box(v_closed_3609_);
lean_inc(v___y_3606_);
v___x_3634_ = lean_apply_3(v___f_3605_, v___x_3633_, v___y_3606_, lean_box(0));
return v___x_3634_;
}
}
else
{
lean_object* v___x_3635_; lean_object* v___x_3636_; 
lean_dec(v___x_3613_);
lean_dec(v_size_3611_);
lean_dec(v_capacity_3610_);
v___x_3635_ = lean_box(v_closed_3609_);
lean_inc(v___y_3606_);
v___x_3636_ = lean_apply_3(v___f_3605_, v___x_3635_, v___y_3606_, lean_box(0));
return v___x_3636_;
}
}
else
{
lean_object* v___x_3637_; lean_object* v___x_3638_; 
lean_dec(v___x_3608_);
v___x_3637_ = lean_box(v_closed_3609_);
lean_inc(v___y_3606_);
v___x_3638_ = lean_apply_3(v___f_3605_, v___x_3637_, v___y_3606_, lean_box(0));
return v___x_3638_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_registerAux___redArg___lam__4___boxed(lean_object* v_id_3639_, lean_object* v___f_3640_, lean_object* v___y_3641_, lean_object* v___y_3642_){
_start:
{
lean_object* v_res_3643_; 
v_res_3643_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_registerAux___redArg___lam__4(v_id_3639_, v___f_3640_, v___y_3641_);
lean_dec(v___y_3641_);
lean_dec(v_id_3639_);
return v_res_3643_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_registerAux___redArg___lam__2(uint8_t v_____do__lift_3644_, lean_object* v___y_3645_){
_start:
{
lean_object* v___x_3647_; lean_object* v_producers_3648_; lean_object* v_waiters_3649_; lean_object* v_capacity_3650_; lean_object* v_size_3651_; lean_object* v_buffer_3652_; lean_object* v_write_3653_; lean_object* v_read_3654_; lean_object* v_receivers_3655_; lean_object* v_nextId_3656_; uint8_t v_closed_3657_; lean_object* v_pos_3658_; lean_object* v___x_3660_; uint8_t v_isShared_3661_; uint8_t v_isSharedCheck_3681_; 
v___x_3647_ = lean_st_ref_get(v___y_3645_);
v_producers_3648_ = lean_ctor_get(v___x_3647_, 0);
v_waiters_3649_ = lean_ctor_get(v___x_3647_, 1);
v_capacity_3650_ = lean_ctor_get(v___x_3647_, 2);
v_size_3651_ = lean_ctor_get(v___x_3647_, 3);
v_buffer_3652_ = lean_ctor_get(v___x_3647_, 4);
v_write_3653_ = lean_ctor_get(v___x_3647_, 5);
v_read_3654_ = lean_ctor_get(v___x_3647_, 6);
v_receivers_3655_ = lean_ctor_get(v___x_3647_, 7);
v_nextId_3656_ = lean_ctor_get(v___x_3647_, 8);
v_closed_3657_ = lean_ctor_get_uint8(v___x_3647_, sizeof(void*)*10);
v_pos_3658_ = lean_ctor_get(v___x_3647_, 9);
v_isSharedCheck_3681_ = !lean_is_exclusive(v___x_3647_);
if (v_isSharedCheck_3681_ == 0)
{
v___x_3660_ = v___x_3647_;
v_isShared_3661_ = v_isSharedCheck_3681_;
goto v_resetjp_3659_;
}
else
{
lean_inc(v_pos_3658_);
lean_inc(v_nextId_3656_);
lean_inc(v_receivers_3655_);
lean_inc(v_read_3654_);
lean_inc(v_write_3653_);
lean_inc(v_buffer_3652_);
lean_inc(v_size_3651_);
lean_inc(v_capacity_3650_);
lean_inc(v_waiters_3649_);
lean_inc(v_producers_3648_);
lean_dec(v___x_3647_);
v___x_3660_ = lean_box(0);
v_isShared_3661_ = v_isSharedCheck_3681_;
goto v_resetjp_3659_;
}
v_resetjp_3659_:
{
lean_object* v___x_3662_; 
v___x_3662_ = l_Std_Queue_dequeue_x3f___redArg(v_waiters_3649_);
if (lean_obj_tag(v___x_3662_) == 1)
{
lean_object* v_val_3663_; lean_object* v___x_3665_; uint8_t v_isShared_3666_; uint8_t v_isSharedCheck_3678_; 
v_val_3663_ = lean_ctor_get(v___x_3662_, 0);
v_isSharedCheck_3678_ = !lean_is_exclusive(v___x_3662_);
if (v_isSharedCheck_3678_ == 0)
{
v___x_3665_ = v___x_3662_;
v_isShared_3666_ = v_isSharedCheck_3678_;
goto v_resetjp_3664_;
}
else
{
lean_inc(v_val_3663_);
lean_dec(v___x_3662_);
v___x_3665_ = lean_box(0);
v_isShared_3666_ = v_isSharedCheck_3678_;
goto v_resetjp_3664_;
}
v_resetjp_3664_:
{
lean_object* v_fst_3667_; lean_object* v_snd_3668_; lean_object* v___x_3669_; lean_object* v___x_3671_; 
v_fst_3667_ = lean_ctor_get(v_val_3663_, 0);
lean_inc(v_fst_3667_);
v_snd_3668_ = lean_ctor_get(v_val_3663_, 1);
lean_inc(v_snd_3668_);
lean_dec(v_val_3663_);
v___x_3669_ = l___private_Std_Sync_Broadcast_0__Std_Broadcast_Consumer_resolve___redArg(v_fst_3667_, v_____do__lift_3644_);
lean_dec(v_fst_3667_);
if (v_isShared_3661_ == 0)
{
lean_ctor_set(v___x_3660_, 1, v_snd_3668_);
v___x_3671_ = v___x_3660_;
goto v_reusejp_3670_;
}
else
{
lean_object* v_reuseFailAlloc_3677_; 
v_reuseFailAlloc_3677_ = lean_alloc_ctor(0, 10, 1);
lean_ctor_set(v_reuseFailAlloc_3677_, 0, v_producers_3648_);
lean_ctor_set(v_reuseFailAlloc_3677_, 1, v_snd_3668_);
lean_ctor_set(v_reuseFailAlloc_3677_, 2, v_capacity_3650_);
lean_ctor_set(v_reuseFailAlloc_3677_, 3, v_size_3651_);
lean_ctor_set(v_reuseFailAlloc_3677_, 4, v_buffer_3652_);
lean_ctor_set(v_reuseFailAlloc_3677_, 5, v_write_3653_);
lean_ctor_set(v_reuseFailAlloc_3677_, 6, v_read_3654_);
lean_ctor_set(v_reuseFailAlloc_3677_, 7, v_receivers_3655_);
lean_ctor_set(v_reuseFailAlloc_3677_, 8, v_nextId_3656_);
lean_ctor_set(v_reuseFailAlloc_3677_, 9, v_pos_3658_);
lean_ctor_set_uint8(v_reuseFailAlloc_3677_, sizeof(void*)*10, v_closed_3657_);
v___x_3671_ = v_reuseFailAlloc_3677_;
goto v_reusejp_3670_;
}
v_reusejp_3670_:
{
lean_object* v___x_3672_; lean_object* v___x_3673_; lean_object* v___x_3675_; 
v___x_3672_ = lean_box(0);
v___x_3673_ = lean_st_ref_swap(v___y_3645_, v___x_3671_);
lean_dec(v___x_3673_);
if (v_isShared_3666_ == 0)
{
lean_ctor_set_tag(v___x_3665_, 0);
lean_ctor_set(v___x_3665_, 0, v___x_3672_);
v___x_3675_ = v___x_3665_;
goto v_reusejp_3674_;
}
else
{
lean_object* v_reuseFailAlloc_3676_; 
v_reuseFailAlloc_3676_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3676_, 0, v___x_3672_);
v___x_3675_ = v_reuseFailAlloc_3676_;
goto v_reusejp_3674_;
}
v_reusejp_3674_:
{
return v___x_3675_;
}
}
}
}
else
{
lean_object* v___x_3679_; lean_object* v___x_3680_; 
lean_dec(v___x_3662_);
lean_del_object(v___x_3660_);
lean_dec(v_pos_3658_);
lean_dec(v_nextId_3656_);
lean_dec(v_receivers_3655_);
lean_dec(v_read_3654_);
lean_dec(v_write_3653_);
lean_dec_ref(v_buffer_3652_);
lean_dec(v_size_3651_);
lean_dec(v_capacity_3650_);
lean_dec_ref(v_producers_3648_);
v___x_3679_ = lean_box(0);
v___x_3680_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3680_, 0, v___x_3679_);
return v___x_3680_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_registerAux___redArg___lam__2___boxed(lean_object* v_____do__lift_3682_, lean_object* v___y_3683_, lean_object* v___y_3684_){
_start:
{
uint8_t v_____do__lift_8774__boxed_3685_; lean_object* v_res_3686_; 
v_____do__lift_8774__boxed_3685_ = lean_unbox(v_____do__lift_3682_);
v_res_3686_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_registerAux___redArg___lam__2(v_____do__lift_8774__boxed_3685_, v___y_3683_);
lean_dec(v___y_3683_);
return v_res_3686_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_registerAux___redArg___lam__3(lean_object* v_waiter_3687_, lean_object* v___f_3688_, lean_object* v_id_3689_, uint8_t v_____do__lift_3690_, lean_object* v___y_3691_){
_start:
{
if (v_____do__lift_3690_ == 0)
{
lean_object* v___x_3693_; lean_object* v___x_3694_; lean_object* v_producers_3695_; lean_object* v_waiters_3696_; lean_object* v_capacity_3697_; lean_object* v_size_3698_; lean_object* v_buffer_3699_; lean_object* v_write_3700_; lean_object* v_read_3701_; lean_object* v_receivers_3702_; lean_object* v_nextId_3703_; uint8_t v_closed_3704_; lean_object* v_pos_3705_; lean_object* v___x_3707_; uint8_t v_isShared_3708_; uint8_t v_isSharedCheck_3719_; 
lean_dec(v_id_3689_);
v___x_3693_ = lean_io_promise_new();
v___x_3694_ = lean_st_ref_take(v___y_3691_);
v_producers_3695_ = lean_ctor_get(v___x_3694_, 0);
v_waiters_3696_ = lean_ctor_get(v___x_3694_, 1);
v_capacity_3697_ = lean_ctor_get(v___x_3694_, 2);
v_size_3698_ = lean_ctor_get(v___x_3694_, 3);
v_buffer_3699_ = lean_ctor_get(v___x_3694_, 4);
v_write_3700_ = lean_ctor_get(v___x_3694_, 5);
v_read_3701_ = lean_ctor_get(v___x_3694_, 6);
v_receivers_3702_ = lean_ctor_get(v___x_3694_, 7);
v_nextId_3703_ = lean_ctor_get(v___x_3694_, 8);
v_closed_3704_ = lean_ctor_get_uint8(v___x_3694_, sizeof(void*)*10);
v_pos_3705_ = lean_ctor_get(v___x_3694_, 9);
v_isSharedCheck_3719_ = !lean_is_exclusive(v___x_3694_);
if (v_isSharedCheck_3719_ == 0)
{
v___x_3707_ = v___x_3694_;
v_isShared_3708_ = v_isSharedCheck_3719_;
goto v_resetjp_3706_;
}
else
{
lean_inc(v_pos_3705_);
lean_inc(v_nextId_3703_);
lean_inc(v_receivers_3702_);
lean_inc(v_read_3701_);
lean_inc(v_write_3700_);
lean_inc(v_buffer_3699_);
lean_inc(v_size_3698_);
lean_inc(v_capacity_3697_);
lean_inc(v_waiters_3696_);
lean_inc(v_producers_3695_);
lean_dec(v___x_3694_);
v___x_3707_ = lean_box(0);
v_isShared_3708_ = v_isSharedCheck_3719_;
goto v_resetjp_3706_;
}
v_resetjp_3706_:
{
lean_object* v___x_3709_; lean_object* v___x_3710_; lean_object* v___x_3711_; lean_object* v___x_3713_; 
v___x_3709_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3709_, 0, v_waiter_3687_);
lean_inc(v___x_3693_);
v___x_3710_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3710_, 0, v___x_3693_);
lean_ctor_set(v___x_3710_, 1, v___x_3709_);
v___x_3711_ = l_Std_Queue_enqueue___redArg(v___x_3710_, v_waiters_3696_);
if (v_isShared_3708_ == 0)
{
lean_ctor_set(v___x_3707_, 1, v___x_3711_);
v___x_3713_ = v___x_3707_;
goto v_reusejp_3712_;
}
else
{
lean_object* v_reuseFailAlloc_3718_; 
v_reuseFailAlloc_3718_ = lean_alloc_ctor(0, 10, 1);
lean_ctor_set(v_reuseFailAlloc_3718_, 0, v_producers_3695_);
lean_ctor_set(v_reuseFailAlloc_3718_, 1, v___x_3711_);
lean_ctor_set(v_reuseFailAlloc_3718_, 2, v_capacity_3697_);
lean_ctor_set(v_reuseFailAlloc_3718_, 3, v_size_3698_);
lean_ctor_set(v_reuseFailAlloc_3718_, 4, v_buffer_3699_);
lean_ctor_set(v_reuseFailAlloc_3718_, 5, v_write_3700_);
lean_ctor_set(v_reuseFailAlloc_3718_, 6, v_read_3701_);
lean_ctor_set(v_reuseFailAlloc_3718_, 7, v_receivers_3702_);
lean_ctor_set(v_reuseFailAlloc_3718_, 8, v_nextId_3703_);
lean_ctor_set(v_reuseFailAlloc_3718_, 9, v_pos_3705_);
lean_ctor_set_uint8(v_reuseFailAlloc_3718_, sizeof(void*)*10, v_closed_3704_);
v___x_3713_ = v_reuseFailAlloc_3718_;
goto v_reusejp_3712_;
}
v_reusejp_3712_:
{
lean_object* v___x_3714_; lean_object* v___x_3715_; lean_object* v___x_3716_; lean_object* v___x_3717_; 
v___x_3714_ = lean_st_ref_put(v___y_3691_, v___x_3713_);
v___x_3715_ = lean_io_promise_result_opt(v___x_3693_);
lean_dec(v___x_3693_);
v___x_3716_ = lean_unsigned_to_nat(0u);
v___x_3717_ = l_EIO_chainTask___redArg(v___x_3715_, v___f_3688_, v___x_3716_, v_____do__lift_3690_);
return v___x_3717_;
}
}
}
else
{
lean_object* v___x_3720_; lean_object* v_lose_3721_; lean_object* v___x_3722_; 
lean_dec_ref(v___f_3688_);
v___x_3720_ = lean_box(v_____do__lift_3690_);
v_lose_3721_ = lean_alloc_closure((void*)(l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_registerAux___redArg___lam__2___boxed), 3, 1);
lean_closure_set(v_lose_3721_, 0, v___x_3720_);
v___x_3722_ = l_Std_Async_Waiter_race___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_registerAux_spec__2___redArg(v_id_3689_, v_waiter_3687_, v_lose_3721_, v___y_3691_);
lean_dec_ref(v_waiter_3687_);
return v___x_3722_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_registerAux___redArg___lam__3___boxed(lean_object* v_waiter_3723_, lean_object* v___f_3724_, lean_object* v_id_3725_, lean_object* v_____do__lift_3726_, lean_object* v___y_3727_, lean_object* v___y_3728_){
_start:
{
uint8_t v_____do__lift_8832__boxed_3729_; lean_object* v_res_3730_; 
v_____do__lift_8832__boxed_3729_ = lean_unbox(v_____do__lift_3726_);
v_res_3730_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_registerAux___redArg___lam__3(v_waiter_3723_, v___f_3724_, v_id_3725_, v_____do__lift_8832__boxed_3729_, v___y_3727_);
lean_dec(v___y_3727_);
return v_res_3730_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_registerAux___redArg___lam__1(lean_object* v_waiter_3733_, lean_object* v_ch_3734_, lean_object* v_res_x3f_3735_){
_start:
{
if (lean_obj_tag(v_res_x3f_3735_) == 0)
{
lean_object* v___x_3737_; lean_object* v___x_3738_; 
lean_dec_ref(v_ch_3734_);
lean_dec_ref(v_waiter_3733_);
v___x_3737_ = lean_box(0);
v___x_3738_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3738_, 0, v___x_3737_);
return v___x_3738_;
}
else
{
lean_object* v_val_3739_; uint8_t v___x_3740_; 
v_val_3739_ = lean_ctor_get(v_res_x3f_3735_, 0);
v___x_3740_ = lean_unbox(v_val_3739_);
if (v___x_3740_ == 0)
{
lean_object* v___f_3741_; lean_object* v___x_3742_; 
lean_dec_ref(v_ch_3734_);
v___f_3741_ = ((lean_object*)(l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_registerAux___redArg___lam__1___closed__0));
v___x_3742_ = l_Std_Async_Waiter_race___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_registerAux_spec__0___redArg(v_waiter_3733_, v___f_3741_);
lean_dec_ref(v_waiter_3733_);
return v___x_3742_;
}
else
{
lean_object* v___x_3743_; 
v___x_3743_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_registerAux___redArg(v_ch_3734_, v_waiter_3733_);
return v___x_3743_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_registerAux___redArg___lam__1___boxed(lean_object* v_waiter_3744_, lean_object* v_ch_3745_, lean_object* v_res_x3f_3746_, lean_object* v___y_3747_){
_start:
{
lean_object* v_res_3748_; 
v_res_3748_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_registerAux___redArg___lam__1(v_waiter_3744_, v_ch_3745_, v_res_x3f_3746_);
lean_dec(v_res_x3f_3746_);
return v_res_3748_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_registerAux___redArg(lean_object* v_ch_3749_, lean_object* v_waiter_3750_){
_start:
{
lean_object* v_state_3752_; lean_object* v_id_3753_; lean_object* v___f_3754_; lean_object* v___f_3755_; lean_object* v___f_3756_; lean_object* v___x_3757_; 
v_state_3752_ = lean_ctor_get(v_ch_3749_, 0);
lean_inc_ref(v_state_3752_);
v_id_3753_ = lean_ctor_get(v_ch_3749_, 1);
lean_inc_n(v_id_3753_, 2);
lean_inc_ref(v_waiter_3750_);
v___f_3754_ = lean_alloc_closure((void*)(l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_registerAux___redArg___lam__1___boxed), 4, 2);
lean_closure_set(v___f_3754_, 0, v_waiter_3750_);
lean_closure_set(v___f_3754_, 1, v_ch_3749_);
v___f_3755_ = lean_alloc_closure((void*)(l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_registerAux___redArg___lam__3___boxed), 6, 3);
lean_closure_set(v___f_3755_, 0, v_waiter_3750_);
lean_closure_set(v___f_3755_, 1, v___f_3754_);
lean_closure_set(v___f_3755_, 2, v_id_3753_);
v___f_3756_ = lean_alloc_closure((void*)(l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_registerAux___redArg___lam__4___boxed), 4, 2);
lean_closure_set(v___f_3756_, 0, v_id_3753_);
lean_closure_set(v___f_3756_, 1, v___f_3755_);
v___x_3757_ = l_Std_Mutex_atomically___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_subscribe_spec__1___redArg(v_state_3752_, v___f_3756_);
return v___x_3757_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_registerAux___redArg___boxed(lean_object* v_ch_3758_, lean_object* v_waiter_3759_, lean_object* v___y_3760_){
_start:
{
lean_object* v_res_3761_; 
v_res_3761_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_registerAux___redArg(v_ch_3758_, v_waiter_3759_);
return v_res_3761_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_registerAux(lean_object* v_00_u03b1_3762_, lean_object* v_ch_3763_, lean_object* v_waiter_3764_){
_start:
{
lean_object* v___x_3766_; 
v___x_3766_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_registerAux___redArg(v_ch_3763_, v_waiter_3764_);
return v___x_3766_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_registerAux___boxed(lean_object* v_00_u03b1_3767_, lean_object* v_ch_3768_, lean_object* v_waiter_3769_, lean_object* v___y_3770_){
_start:
{
lean_object* v_res_3771_; 
v_res_3771_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_registerAux(v_00_u03b1_3767_, v_ch_3768_, v_waiter_3769_);
return v_res_3771_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_registerAux_spec__1(lean_object* v_00_u03b1_3772_, lean_object* v_receiverId_3773_, lean_object* v___y_3774_){
_start:
{
lean_object* v___x_3776_; 
v___x_3776_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_registerAux_spec__1___redArg(v_receiverId_3773_, v___y_3774_);
return v___x_3776_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_registerAux_spec__1___boxed(lean_object* v_00_u03b1_3777_, lean_object* v_receiverId_3778_, lean_object* v___y_3779_, lean_object* v___y_3780_){
_start:
{
lean_object* v_res_3781_; 
v_res_3781_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_registerAux_spec__1(v_00_u03b1_3777_, v_receiverId_3778_, v___y_3779_);
lean_dec(v___y_3779_);
return v_res_3781_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_getSlot___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__1___redArg___lam__0(lean_object* v_place_3782_, lean_object* v_x_3783_){
_start:
{
if (lean_obj_tag(v_x_3783_) == 0)
{
lean_object* v_a_3785_; lean_object* v___x_3787_; uint8_t v_isShared_3788_; uint8_t v_isSharedCheck_3793_; 
v_a_3785_ = lean_ctor_get(v_x_3783_, 0);
v_isSharedCheck_3793_ = !lean_is_exclusive(v_x_3783_);
if (v_isSharedCheck_3793_ == 0)
{
v___x_3787_ = v_x_3783_;
v_isShared_3788_ = v_isSharedCheck_3793_;
goto v_resetjp_3786_;
}
else
{
lean_inc(v_a_3785_);
lean_dec(v_x_3783_);
v___x_3787_ = lean_box(0);
v_isShared_3788_ = v_isSharedCheck_3793_;
goto v_resetjp_3786_;
}
v_resetjp_3786_:
{
lean_object* v___x_3790_; 
if (v_isShared_3788_ == 0)
{
v___x_3790_ = v___x_3787_;
goto v_reusejp_3789_;
}
else
{
lean_object* v_reuseFailAlloc_3792_; 
v_reuseFailAlloc_3792_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3792_, 0, v_a_3785_);
v___x_3790_ = v_reuseFailAlloc_3792_;
goto v_reusejp_3789_;
}
v_reusejp_3789_:
{
lean_object* v___x_3791_; 
v___x_3791_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3791_, 0, v___x_3790_);
return v___x_3791_;
}
}
}
else
{
lean_object* v_a_3794_; lean_object* v___x_3796_; uint8_t v_isShared_3797_; uint8_t v_isSharedCheck_3806_; 
v_a_3794_ = lean_ctor_get(v_x_3783_, 0);
v_isSharedCheck_3806_ = !lean_is_exclusive(v_x_3783_);
if (v_isSharedCheck_3806_ == 0)
{
v___x_3796_ = v_x_3783_;
v_isShared_3797_ = v_isSharedCheck_3806_;
goto v_resetjp_3795_;
}
else
{
lean_inc(v_a_3794_);
lean_dec(v_x_3783_);
v___x_3796_ = lean_box(0);
v_isShared_3797_ = v_isSharedCheck_3806_;
goto v_resetjp_3795_;
}
v_resetjp_3795_:
{
lean_object* v_capacity_3798_; lean_object* v_buffer_3799_; lean_object* v___x_3800_; lean_object* v___x_3801_; lean_object* v___x_3803_; 
v_capacity_3798_ = lean_ctor_get(v_a_3794_, 2);
lean_inc(v_capacity_3798_);
v_buffer_3799_ = lean_ctor_get(v_a_3794_, 4);
lean_inc_ref(v_buffer_3799_);
lean_dec(v_a_3794_);
v___x_3800_ = lean_nat_mod(v_place_3782_, v_capacity_3798_);
lean_dec(v_capacity_3798_);
v___x_3801_ = lean_array_fget(v_buffer_3799_, v___x_3800_);
lean_dec(v___x_3800_);
lean_dec_ref(v_buffer_3799_);
if (v_isShared_3797_ == 0)
{
lean_ctor_set(v___x_3796_, 0, v___x_3801_);
v___x_3803_ = v___x_3796_;
goto v_reusejp_3802_;
}
else
{
lean_object* v_reuseFailAlloc_3805_; 
v_reuseFailAlloc_3805_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3805_, 0, v___x_3801_);
v___x_3803_ = v_reuseFailAlloc_3805_;
goto v_reusejp_3802_;
}
v_reusejp_3802_:
{
lean_object* v___x_3804_; 
v___x_3804_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3804_, 0, v___x_3803_);
return v___x_3804_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_getSlot___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__1___redArg___lam__0___boxed(lean_object* v_place_3807_, lean_object* v_x_3808_, lean_object* v___y_3809_){
_start:
{
lean_object* v_res_3810_; 
v_res_3810_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_getSlot___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__1___redArg___lam__0(v_place_3807_, v_x_3808_);
lean_dec(v_place_3807_);
return v_res_3810_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_getSlot___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__1___redArg(lean_object* v_place_3811_, lean_object* v___y_3812_){
_start:
{
lean_object* v___f_3814_; lean_object* v___x_3815_; uint8_t v___x_3816_; lean_object* v___x_3817_; lean_object* v___x_3818_; lean_object* v___x_3819_; lean_object* v___x_3820_; 
v___f_3814_ = lean_alloc_closure((void*)(l___private_Std_Sync_Broadcast_0__Std_Bounded_getSlot___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__1___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_3814_, 0, v_place_3811_);
v___x_3815_ = lean_unsigned_to_nat(0u);
v___x_3816_ = 0;
v___x_3817_ = lean_st_ref_get(v___y_3812_);
v___x_3818_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3818_, 0, v___x_3817_);
v___x_3819_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3819_, 0, v___x_3818_);
v___x_3820_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_3815_, v___x_3816_, v___x_3819_, v___f_3814_);
return v___x_3820_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_getSlot___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__1___redArg___boxed(lean_object* v_place_3821_, lean_object* v___y_3822_, lean_object* v___y_3823_){
_start:
{
lean_object* v_res_3824_; 
v_res_3824_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_getSlot___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__1___redArg(v_place_3821_, v___y_3822_);
lean_dec(v___y_3822_);
return v_res_3824_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_getSlot___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__1(lean_object* v_00_u03b1_3825_, lean_object* v_place_3826_, lean_object* v___y_3827_){
_start:
{
lean_object* v___x_3829_; 
v___x_3829_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_getSlot___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__1___redArg(v_place_3826_, v___y_3827_);
return v___x_3829_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_getSlot___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__1___boxed(lean_object* v_00_u03b1_3830_, lean_object* v_place_3831_, lean_object* v___y_3832_, lean_object* v___y_3833_){
_start:
{
lean_object* v_res_3834_; 
v_res_3834_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_getSlot___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__1(v_00_u03b1_3830_, v_place_3831_, v___y_3832_);
lean_dec(v___y_3832_);
return v_res_3834_;
}
}
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__2___redArg___lam__0(lean_object* v___y_3835_){
_start:
{
if (lean_obj_tag(v___y_3835_) == 0)
{
lean_object* v_a_3836_; lean_object* v___x_3838_; uint8_t v_isShared_3839_; uint8_t v_isSharedCheck_3843_; 
v_a_3836_ = lean_ctor_get(v___y_3835_, 0);
v_isSharedCheck_3843_ = !lean_is_exclusive(v___y_3835_);
if (v_isSharedCheck_3843_ == 0)
{
v___x_3838_ = v___y_3835_;
v_isShared_3839_ = v_isSharedCheck_3843_;
goto v_resetjp_3837_;
}
else
{
lean_inc(v_a_3836_);
lean_dec(v___y_3835_);
v___x_3838_ = lean_box(0);
v_isShared_3839_ = v_isSharedCheck_3843_;
goto v_resetjp_3837_;
}
v_resetjp_3837_:
{
lean_object* v___x_3841_; 
if (v_isShared_3839_ == 0)
{
v___x_3841_ = v___x_3838_;
goto v_reusejp_3840_;
}
else
{
lean_object* v_reuseFailAlloc_3842_; 
v_reuseFailAlloc_3842_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3842_, 0, v_a_3836_);
v___x_3841_ = v_reuseFailAlloc_3842_;
goto v_reusejp_3840_;
}
v_reusejp_3840_:
{
return v___x_3841_;
}
}
}
else
{
lean_object* v_a_3844_; lean_object* v___x_3846_; uint8_t v_isShared_3847_; uint8_t v_isSharedCheck_3852_; 
v_a_3844_ = lean_ctor_get(v___y_3835_, 0);
v_isSharedCheck_3852_ = !lean_is_exclusive(v___y_3835_);
if (v_isSharedCheck_3852_ == 0)
{
v___x_3846_ = v___y_3835_;
v_isShared_3847_ = v_isSharedCheck_3852_;
goto v_resetjp_3845_;
}
else
{
lean_inc(v_a_3844_);
lean_dec(v___y_3835_);
v___x_3846_ = lean_box(0);
v_isShared_3847_ = v_isSharedCheck_3852_;
goto v_resetjp_3845_;
}
v_resetjp_3845_:
{
lean_object* v_fst_3848_; lean_object* v___x_3850_; 
v_fst_3848_ = lean_ctor_get(v_a_3844_, 0);
lean_inc(v_fst_3848_);
lean_dec(v_a_3844_);
if (v_isShared_3847_ == 0)
{
lean_ctor_set(v___x_3846_, 0, v_fst_3848_);
v___x_3850_ = v___x_3846_;
goto v_reusejp_3849_;
}
else
{
lean_object* v_reuseFailAlloc_3851_; 
v_reuseFailAlloc_3851_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3851_, 0, v_fst_3848_);
v___x_3850_ = v_reuseFailAlloc_3851_;
goto v_reusejp_3849_;
}
v_reusejp_3849_:
{
return v___x_3850_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__2___redArg___lam__1(lean_object* v_mutex_3853_, lean_object* v_x_3854_){
_start:
{
lean_object* v___x_3856_; lean_object* v___x_3857_; lean_object* v___x_3858_; 
v___x_3856_ = lean_io_basemutex_unlock(v_mutex_3853_);
v___x_3857_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3857_, 0, v___x_3856_);
v___x_3858_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3858_, 0, v___x_3857_);
return v___x_3858_;
}
}
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__2___redArg___lam__1___boxed(lean_object* v_mutex_3859_, lean_object* v_x_3860_, lean_object* v___y_3861_){
_start:
{
lean_object* v_res_3862_; 
v_res_3862_ = l_Std_Mutex_atomically___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__2___redArg___lam__1(v_mutex_3859_, v_x_3860_);
lean_dec(v_x_3860_);
lean_dec(v_mutex_3859_);
return v_res_3862_;
}
}
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__2___redArg___lam__2(lean_object* v_k_3863_, lean_object* v_ref_3864_, lean_object* v_x_3865_){
_start:
{
if (lean_obj_tag(v_x_3865_) == 0)
{
lean_object* v_a_3867_; lean_object* v___x_3869_; uint8_t v_isShared_3870_; uint8_t v_isSharedCheck_3875_; 
lean_dec(v_ref_3864_);
lean_dec_ref(v_k_3863_);
v_a_3867_ = lean_ctor_get(v_x_3865_, 0);
v_isSharedCheck_3875_ = !lean_is_exclusive(v_x_3865_);
if (v_isSharedCheck_3875_ == 0)
{
v___x_3869_ = v_x_3865_;
v_isShared_3870_ = v_isSharedCheck_3875_;
goto v_resetjp_3868_;
}
else
{
lean_inc(v_a_3867_);
lean_dec(v_x_3865_);
v___x_3869_ = lean_box(0);
v_isShared_3870_ = v_isSharedCheck_3875_;
goto v_resetjp_3868_;
}
v_resetjp_3868_:
{
lean_object* v___x_3872_; 
if (v_isShared_3870_ == 0)
{
v___x_3872_ = v___x_3869_;
goto v_reusejp_3871_;
}
else
{
lean_object* v_reuseFailAlloc_3874_; 
v_reuseFailAlloc_3874_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3874_, 0, v_a_3867_);
v___x_3872_ = v_reuseFailAlloc_3874_;
goto v_reusejp_3871_;
}
v_reusejp_3871_:
{
lean_object* v___x_3873_; 
v___x_3873_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3873_, 0, v___x_3872_);
return v___x_3873_;
}
}
}
else
{
lean_object* v___x_3876_; 
lean_dec_ref_known(v_x_3865_, 1);
v___x_3876_ = lean_apply_2(v_k_3863_, v_ref_3864_, lean_box(0));
return v___x_3876_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__2___redArg___lam__2___boxed(lean_object* v_k_3877_, lean_object* v_ref_3878_, lean_object* v_x_3879_, lean_object* v___y_3880_){
_start:
{
lean_object* v_res_3881_; 
v_res_3881_ = l_Std_Mutex_atomically___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__2___redArg___lam__2(v_k_3877_, v_ref_3878_, v_x_3879_);
return v_res_3881_;
}
}
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__2___redArg___lam__3(lean_object* v_mutex_3882_, lean_object* v___f_3883_){
_start:
{
lean_object* v___x_3885_; uint8_t v___x_3886_; lean_object* v___x_3887_; lean_object* v___x_3888_; lean_object* v___x_3889_; lean_object* v___x_3890_; 
v___x_3885_ = lean_unsigned_to_nat(0u);
v___x_3886_ = 0;
v___x_3887_ = lean_io_basemutex_lock(v_mutex_3882_);
v___x_3888_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3888_, 0, v___x_3887_);
v___x_3889_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3889_, 0, v___x_3888_);
v___x_3890_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_3885_, v___x_3886_, v___x_3889_, v___f_3883_);
return v___x_3890_;
}
}
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__2___redArg___lam__3___boxed(lean_object* v_mutex_3891_, lean_object* v___f_3892_, lean_object* v___y_3893_){
_start:
{
lean_object* v_res_3894_; 
v_res_3894_ = l_Std_Mutex_atomically___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__2___redArg___lam__3(v_mutex_3891_, v___f_3892_);
lean_dec(v_mutex_3891_);
return v_res_3894_;
}
}
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__2___redArg(lean_object* v_mutex_3896_, lean_object* v_k_3897_){
_start:
{
lean_object* v_ref_3899_; lean_object* v_mutex_3900_; lean_object* v___f_3901_; lean_object* v___f_3902_; lean_object* v___f_3903_; lean_object* v___f_3904_; lean_object* v___x_3905_; uint8_t v___x_3906_; lean_object* v___x_3907_; lean_object* v___y_3909_; 
v_ref_3899_ = lean_ctor_get(v_mutex_3896_, 0);
lean_inc(v_ref_3899_);
v_mutex_3900_ = lean_ctor_get(v_mutex_3896_, 1);
lean_inc_n(v_mutex_3900_, 2);
lean_dec_ref(v_mutex_3896_);
v___f_3901_ = ((lean_object*)(l_Std_Mutex_atomically___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__2___redArg___closed__0));
v___f_3902_ = lean_alloc_closure((void*)(l_Std_Mutex_atomically___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__2___redArg___lam__1___boxed), 3, 1);
lean_closure_set(v___f_3902_, 0, v_mutex_3900_);
v___f_3903_ = lean_alloc_closure((void*)(l_Std_Mutex_atomically___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__2___redArg___lam__2___boxed), 4, 2);
lean_closure_set(v___f_3903_, 0, v_k_3897_);
lean_closure_set(v___f_3903_, 1, v_ref_3899_);
v___f_3904_ = lean_alloc_closure((void*)(l_Std_Mutex_atomically___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__2___redArg___lam__3___boxed), 3, 2);
lean_closure_set(v___f_3904_, 0, v_mutex_3900_);
lean_closure_set(v___f_3904_, 1, v___f_3903_);
v___x_3905_ = lean_unsigned_to_nat(0u);
v___x_3906_ = 0;
v___x_3907_ = l_Std_Async_EAsync_tryFinally_x27___redArg(v___f_3904_, v___f_3902_, v___x_3905_, v___x_3906_);
if (lean_obj_tag(v___x_3907_) == 0)
{
lean_object* v_a_3911_; 
v_a_3911_ = lean_ctor_get(v___x_3907_, 0);
lean_inc(v_a_3911_);
lean_dec_ref_known(v___x_3907_, 1);
if (lean_obj_tag(v_a_3911_) == 0)
{
lean_object* v_a_3912_; lean_object* v___x_3914_; uint8_t v_isShared_3915_; uint8_t v_isSharedCheck_3919_; 
v_a_3912_ = lean_ctor_get(v_a_3911_, 0);
v_isSharedCheck_3919_ = !lean_is_exclusive(v_a_3911_);
if (v_isSharedCheck_3919_ == 0)
{
v___x_3914_ = v_a_3911_;
v_isShared_3915_ = v_isSharedCheck_3919_;
goto v_resetjp_3913_;
}
else
{
lean_inc(v_a_3912_);
lean_dec(v_a_3911_);
v___x_3914_ = lean_box(0);
v_isShared_3915_ = v_isSharedCheck_3919_;
goto v_resetjp_3913_;
}
v_resetjp_3913_:
{
lean_object* v___x_3917_; 
if (v_isShared_3915_ == 0)
{
v___x_3917_ = v___x_3914_;
goto v_reusejp_3916_;
}
else
{
lean_object* v_reuseFailAlloc_3918_; 
v_reuseFailAlloc_3918_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3918_, 0, v_a_3912_);
v___x_3917_ = v_reuseFailAlloc_3918_;
goto v_reusejp_3916_;
}
v_reusejp_3916_:
{
v___y_3909_ = v___x_3917_;
goto v___jp_3908_;
}
}
}
else
{
lean_object* v_a_3920_; lean_object* v___x_3922_; uint8_t v_isShared_3923_; uint8_t v_isSharedCheck_3928_; 
v_a_3920_ = lean_ctor_get(v_a_3911_, 0);
v_isSharedCheck_3928_ = !lean_is_exclusive(v_a_3911_);
if (v_isSharedCheck_3928_ == 0)
{
v___x_3922_ = v_a_3911_;
v_isShared_3923_ = v_isSharedCheck_3928_;
goto v_resetjp_3921_;
}
else
{
lean_inc(v_a_3920_);
lean_dec(v_a_3911_);
v___x_3922_ = lean_box(0);
v_isShared_3923_ = v_isSharedCheck_3928_;
goto v_resetjp_3921_;
}
v_resetjp_3921_:
{
lean_object* v_fst_3924_; lean_object* v___x_3926_; 
v_fst_3924_ = lean_ctor_get(v_a_3920_, 0);
lean_inc(v_fst_3924_);
lean_dec(v_a_3920_);
if (v_isShared_3923_ == 0)
{
lean_ctor_set(v___x_3922_, 0, v_fst_3924_);
v___x_3926_ = v___x_3922_;
goto v_reusejp_3925_;
}
else
{
lean_object* v_reuseFailAlloc_3927_; 
v_reuseFailAlloc_3927_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3927_, 0, v_fst_3924_);
v___x_3926_ = v_reuseFailAlloc_3927_;
goto v_reusejp_3925_;
}
v_reusejp_3925_:
{
v___y_3909_ = v___x_3926_;
goto v___jp_3908_;
}
}
}
}
else
{
lean_object* v_a_3929_; lean_object* v___x_3931_; uint8_t v_isShared_3932_; uint8_t v_isSharedCheck_3937_; 
v_a_3929_ = lean_ctor_get(v___x_3907_, 0);
v_isSharedCheck_3937_ = !lean_is_exclusive(v___x_3907_);
if (v_isSharedCheck_3937_ == 0)
{
v___x_3931_ = v___x_3907_;
v_isShared_3932_ = v_isSharedCheck_3937_;
goto v_resetjp_3930_;
}
else
{
lean_inc(v_a_3929_);
lean_dec(v___x_3907_);
v___x_3931_ = lean_box(0);
v_isShared_3932_ = v_isSharedCheck_3937_;
goto v_resetjp_3930_;
}
v_resetjp_3930_:
{
lean_object* v___x_3933_; lean_object* v___x_3935_; 
v___x_3933_ = lean_task_map(v___f_3901_, v_a_3929_, v___x_3905_, v___x_3906_);
if (v_isShared_3932_ == 0)
{
lean_ctor_set(v___x_3931_, 0, v___x_3933_);
v___x_3935_ = v___x_3931_;
goto v_reusejp_3934_;
}
else
{
lean_object* v_reuseFailAlloc_3936_; 
v_reuseFailAlloc_3936_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3936_, 0, v___x_3933_);
v___x_3935_ = v_reuseFailAlloc_3936_;
goto v_reusejp_3934_;
}
v_reusejp_3934_:
{
return v___x_3935_;
}
}
}
v___jp_3908_:
{
lean_object* v___x_3910_; 
v___x_3910_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3910_, 0, v___y_3909_);
return v___x_3910_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__2___redArg___boxed(lean_object* v_mutex_3938_, lean_object* v_k_3939_, lean_object* v___y_3940_){
_start:
{
lean_object* v_res_3941_; 
v_res_3941_ = l_Std_Mutex_atomically___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__2___redArg(v_mutex_3938_, v_k_3939_);
return v_res_3941_;
}
}
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__2(lean_object* v_00_u03b1_3942_, lean_object* v_00_u03b2_3943_, lean_object* v_mutex_3944_, lean_object* v_k_3945_){
_start:
{
lean_object* v___x_3947_; 
v___x_3947_ = l_Std_Mutex_atomically___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__2___redArg(v_mutex_3944_, v_k_3945_);
return v___x_3947_;
}
}
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__2___boxed(lean_object* v_00_u03b1_3948_, lean_object* v_00_u03b2_3949_, lean_object* v_mutex_3950_, lean_object* v_k_3951_, lean_object* v___y_3952_){
_start:
{
lean_object* v_res_3953_; 
v_res_3953_ = l_Std_Mutex_atomically___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__2(v_00_u03b1_3948_, v_00_u03b2_3949_, v_mutex_3950_, v_k_3951_);
return v_res_3953_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector___redArg___lam__0(lean_object* v_producers_3958_, lean_object* v_capacity_3959_, lean_object* v_size_3960_, lean_object* v_buffer_3961_, lean_object* v_write_3962_, lean_object* v_read_3963_, lean_object* v_receivers_3964_, lean_object* v_nextId_3965_, uint8_t v_closed_3966_, lean_object* v_pos_3967_, lean_object* v___y_3968_, lean_object* v_x_3969_){
_start:
{
if (lean_obj_tag(v_x_3969_) == 0)
{
lean_object* v_a_3971_; lean_object* v___x_3973_; uint8_t v_isShared_3974_; uint8_t v_isSharedCheck_3979_; 
lean_dec(v_pos_3967_);
lean_dec(v_nextId_3965_);
lean_dec(v_receivers_3964_);
lean_dec(v_read_3963_);
lean_dec(v_write_3962_);
lean_dec_ref(v_buffer_3961_);
lean_dec(v_size_3960_);
lean_dec(v_capacity_3959_);
lean_dec_ref(v_producers_3958_);
v_a_3971_ = lean_ctor_get(v_x_3969_, 0);
v_isSharedCheck_3979_ = !lean_is_exclusive(v_x_3969_);
if (v_isSharedCheck_3979_ == 0)
{
v___x_3973_ = v_x_3969_;
v_isShared_3974_ = v_isSharedCheck_3979_;
goto v_resetjp_3972_;
}
else
{
lean_inc(v_a_3971_);
lean_dec(v_x_3969_);
v___x_3973_ = lean_box(0);
v_isShared_3974_ = v_isSharedCheck_3979_;
goto v_resetjp_3972_;
}
v_resetjp_3972_:
{
lean_object* v___x_3976_; 
if (v_isShared_3974_ == 0)
{
v___x_3976_ = v___x_3973_;
goto v_reusejp_3975_;
}
else
{
lean_object* v_reuseFailAlloc_3978_; 
v_reuseFailAlloc_3978_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3978_, 0, v_a_3971_);
v___x_3976_ = v_reuseFailAlloc_3978_;
goto v_reusejp_3975_;
}
v_reusejp_3975_:
{
lean_object* v___x_3977_; 
v___x_3977_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3977_, 0, v___x_3976_);
return v___x_3977_;
}
}
}
else
{
lean_object* v_a_3980_; lean_object* v___x_3981_; lean_object* v___x_3982_; lean_object* v___x_3983_; 
v_a_3980_ = lean_ctor_get(v_x_3969_, 0);
lean_inc(v_a_3980_);
lean_dec_ref_known(v_x_3969_, 1);
v___x_3981_ = lean_alloc_ctor(0, 10, 1);
lean_ctor_set(v___x_3981_, 0, v_producers_3958_);
lean_ctor_set(v___x_3981_, 1, v_a_3980_);
lean_ctor_set(v___x_3981_, 2, v_capacity_3959_);
lean_ctor_set(v___x_3981_, 3, v_size_3960_);
lean_ctor_set(v___x_3981_, 4, v_buffer_3961_);
lean_ctor_set(v___x_3981_, 5, v_write_3962_);
lean_ctor_set(v___x_3981_, 6, v_read_3963_);
lean_ctor_set(v___x_3981_, 7, v_receivers_3964_);
lean_ctor_set(v___x_3981_, 8, v_nextId_3965_);
lean_ctor_set(v___x_3981_, 9, v_pos_3967_);
lean_ctor_set_uint8(v___x_3981_, sizeof(void*)*10, v_closed_3966_);
v___x_3982_ = lean_st_ref_swap(v___y_3968_, v___x_3981_);
lean_dec(v___x_3982_);
v___x_3983_ = ((lean_object*)(l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector___redArg___lam__0___closed__1));
return v___x_3983_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector___redArg___lam__0___boxed(lean_object* v_producers_3984_, lean_object* v_capacity_3985_, lean_object* v_size_3986_, lean_object* v_buffer_3987_, lean_object* v_write_3988_, lean_object* v_read_3989_, lean_object* v_receivers_3990_, lean_object* v_nextId_3991_, lean_object* v_closed_3992_, lean_object* v_pos_3993_, lean_object* v___y_3994_, lean_object* v_x_3995_, lean_object* v___y_3996_){
_start:
{
uint8_t v_closed_boxed_3997_; lean_object* v_res_3998_; 
v_closed_boxed_3997_ = lean_unbox(v_closed_3992_);
v_res_3998_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector___redArg___lam__0(v_producers_3984_, v_capacity_3985_, v_size_3986_, v_buffer_3987_, v_write_3988_, v_read_3989_, v_receivers_3990_, v_nextId_3991_, v_closed_boxed_3997_, v_pos_3993_, v___y_3994_, v_x_3995_);
lean_dec(v___y_3994_);
return v_res_3998_;
}
}
LEAN_EXPORT lean_object* l_Std_Queue_filterM___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__3___redArg___lam__0(lean_object* v_x_3999_){
_start:
{
if (lean_obj_tag(v_x_3999_) == 0)
{
lean_object* v___x_4001_; 
v___x_4001_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4001_, 0, v_x_3999_);
return v___x_4001_;
}
else
{
lean_object* v_a_4002_; lean_object* v___x_4004_; uint8_t v_isShared_4005_; uint8_t v_isSharedCheck_4011_; 
v_a_4002_ = lean_ctor_get(v_x_3999_, 0);
v_isSharedCheck_4011_ = !lean_is_exclusive(v_x_3999_);
if (v_isSharedCheck_4011_ == 0)
{
v___x_4004_ = v_x_3999_;
v_isShared_4005_ = v_isSharedCheck_4011_;
goto v_resetjp_4003_;
}
else
{
lean_inc(v_a_4002_);
lean_dec(v_x_3999_);
v___x_4004_ = lean_box(0);
v_isShared_4005_ = v_isSharedCheck_4011_;
goto v_resetjp_4003_;
}
v_resetjp_4003_:
{
lean_object* v___x_4006_; lean_object* v___x_4008_; 
v___x_4006_ = l_List_reverse___redArg(v_a_4002_);
if (v_isShared_4005_ == 0)
{
lean_ctor_set(v___x_4004_, 0, v___x_4006_);
v___x_4008_ = v___x_4004_;
goto v_reusejp_4007_;
}
else
{
lean_object* v_reuseFailAlloc_4010_; 
v_reuseFailAlloc_4010_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4010_, 0, v___x_4006_);
v___x_4008_ = v_reuseFailAlloc_4010_;
goto v_reusejp_4007_;
}
v_reusejp_4007_:
{
lean_object* v___x_4009_; 
v___x_4009_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4009_, 0, v___x_4008_);
return v___x_4009_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Queue_filterM___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__3___redArg___lam__0___boxed(lean_object* v_x_4012_, lean_object* v___y_4013_){
_start:
{
lean_object* v_res_4014_; 
v_res_4014_ = l_Std_Queue_filterM___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__3___redArg___lam__0(v_x_4012_);
return v_res_4014_;
}
}
LEAN_EXPORT lean_object* l_Std_Queue_filterM___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__3___redArg___lam__2(lean_object* v_a_4015_, lean_object* v___x_4016_, lean_object* v_x_4017_){
_start:
{
if (lean_obj_tag(v_x_4017_) == 0)
{
lean_object* v_a_4019_; lean_object* v___x_4021_; uint8_t v_isShared_4022_; uint8_t v_isSharedCheck_4027_; 
lean_dec(v___x_4016_);
lean_dec(v_a_4015_);
v_a_4019_ = lean_ctor_get(v_x_4017_, 0);
v_isSharedCheck_4027_ = !lean_is_exclusive(v_x_4017_);
if (v_isSharedCheck_4027_ == 0)
{
v___x_4021_ = v_x_4017_;
v_isShared_4022_ = v_isSharedCheck_4027_;
goto v_resetjp_4020_;
}
else
{
lean_inc(v_a_4019_);
lean_dec(v_x_4017_);
v___x_4021_ = lean_box(0);
v_isShared_4022_ = v_isSharedCheck_4027_;
goto v_resetjp_4020_;
}
v_resetjp_4020_:
{
lean_object* v___x_4024_; 
if (v_isShared_4022_ == 0)
{
v___x_4024_ = v___x_4021_;
goto v_reusejp_4023_;
}
else
{
lean_object* v_reuseFailAlloc_4026_; 
v_reuseFailAlloc_4026_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4026_, 0, v_a_4019_);
v___x_4024_ = v_reuseFailAlloc_4026_;
goto v_reusejp_4023_;
}
v_reusejp_4023_:
{
lean_object* v___x_4025_; 
v___x_4025_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4025_, 0, v___x_4024_);
return v___x_4025_;
}
}
}
else
{
lean_object* v_a_4028_; lean_object* v___x_4030_; uint8_t v_isShared_4031_; uint8_t v_isSharedCheck_4044_; 
v_a_4028_ = lean_ctor_get(v_x_4017_, 0);
v_isSharedCheck_4044_ = !lean_is_exclusive(v_x_4017_);
if (v_isSharedCheck_4044_ == 0)
{
v___x_4030_ = v_x_4017_;
v_isShared_4031_ = v_isSharedCheck_4044_;
goto v_resetjp_4029_;
}
else
{
lean_inc(v_a_4028_);
lean_dec(v_x_4017_);
v___x_4030_ = lean_box(0);
v_isShared_4031_ = v_isSharedCheck_4044_;
goto v_resetjp_4029_;
}
v_resetjp_4029_:
{
uint8_t v___x_4032_; 
v___x_4032_ = l_List_isEmpty___redArg(v_a_4015_);
if (v___x_4032_ == 0)
{
lean_object* v___x_4033_; lean_object* v___x_4035_; 
lean_dec(v___x_4016_);
v___x_4033_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4033_, 0, v_a_4028_);
lean_ctor_set(v___x_4033_, 1, v_a_4015_);
if (v_isShared_4031_ == 0)
{
lean_ctor_set(v___x_4030_, 0, v___x_4033_);
v___x_4035_ = v___x_4030_;
goto v_reusejp_4034_;
}
else
{
lean_object* v_reuseFailAlloc_4037_; 
v_reuseFailAlloc_4037_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4037_, 0, v___x_4033_);
v___x_4035_ = v_reuseFailAlloc_4037_;
goto v_reusejp_4034_;
}
v_reusejp_4034_:
{
lean_object* v___x_4036_; 
v___x_4036_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4036_, 0, v___x_4035_);
return v___x_4036_;
}
}
else
{
lean_object* v___x_4038_; lean_object* v___x_4039_; lean_object* v___x_4041_; 
lean_dec(v_a_4015_);
v___x_4038_ = l_List_reverse___redArg(v_a_4028_);
v___x_4039_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4039_, 0, v___x_4016_);
lean_ctor_set(v___x_4039_, 1, v___x_4038_);
if (v_isShared_4031_ == 0)
{
lean_ctor_set(v___x_4030_, 0, v___x_4039_);
v___x_4041_ = v___x_4030_;
goto v_reusejp_4040_;
}
else
{
lean_object* v_reuseFailAlloc_4043_; 
v_reuseFailAlloc_4043_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4043_, 0, v___x_4039_);
v___x_4041_ = v_reuseFailAlloc_4043_;
goto v_reusejp_4040_;
}
v_reusejp_4040_:
{
lean_object* v___x_4042_; 
v___x_4042_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4042_, 0, v___x_4041_);
return v___x_4042_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Queue_filterM___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__3___redArg___lam__2___boxed(lean_object* v_a_4045_, lean_object* v___x_4046_, lean_object* v_x_4047_, lean_object* v___y_4048_){
_start:
{
lean_object* v_res_4049_; 
v_res_4049_ = l_Std_Queue_filterM___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__3___redArg___lam__2(v_a_4045_, v___x_4046_, v_x_4047_);
return v_res_4049_;
}
}
LEAN_EXPORT lean_object* l_List_filterAuxM___at___00Std_Queue_filterM___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__3_spec__4___redArg___lam__1(lean_object* v_x_4050_){
_start:
{
uint8_t v___y_4053_; 
if (lean_obj_tag(v_x_4050_) == 0)
{
lean_object* v___x_4057_; 
v___x_4057_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4057_, 0, v_x_4050_);
return v___x_4057_;
}
else
{
lean_object* v_a_4058_; uint8_t v___x_4059_; 
v_a_4058_ = lean_ctor_get(v_x_4050_, 0);
lean_inc(v_a_4058_);
lean_dec_ref_known(v_x_4050_, 1);
v___x_4059_ = lean_unbox(v_a_4058_);
lean_dec(v_a_4058_);
if (v___x_4059_ == 0)
{
uint8_t v___x_4060_; 
v___x_4060_ = 1;
v___y_4053_ = v___x_4060_;
goto v___jp_4052_;
}
else
{
uint8_t v___x_4061_; 
v___x_4061_ = 0;
v___y_4053_ = v___x_4061_;
goto v___jp_4052_;
}
}
v___jp_4052_:
{
lean_object* v___x_4054_; lean_object* v___x_4055_; lean_object* v___x_4056_; 
v___x_4054_ = lean_box(v___y_4053_);
v___x_4055_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4055_, 0, v___x_4054_);
v___x_4056_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4056_, 0, v___x_4055_);
return v___x_4056_;
}
}
}
LEAN_EXPORT lean_object* l_List_filterAuxM___at___00Std_Queue_filterM___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__3_spec__4___redArg___lam__1___boxed(lean_object* v_x_4062_, lean_object* v___y_4063_){
_start:
{
lean_object* v_res_4064_; 
v_res_4064_ = l_List_filterAuxM___at___00Std_Queue_filterM___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__3_spec__4___redArg___lam__1(v_x_4062_);
return v_res_4064_;
}
}
LEAN_EXPORT lean_object* l_List_filterAuxM___at___00Std_Queue_filterM___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__3_spec__4___redArg___lam__0___boxed(lean_object* v_tail_4065_, lean_object* v_x_4066_, lean_object* v_head_4067_, lean_object* v_x_4068_, lean_object* v___y_4069_){
_start:
{
lean_object* v_res_4070_; 
v_res_4070_ = l_List_filterAuxM___at___00Std_Queue_filterM___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__3_spec__4___redArg___lam__0(v_tail_4065_, v_x_4066_, v_head_4067_, v_x_4068_);
return v_res_4070_;
}
}
LEAN_EXPORT lean_object* l_List_filterAuxM___at___00Std_Queue_filterM___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__3_spec__4___redArg(lean_object* v_x_4077_, lean_object* v_x_4078_){
_start:
{
if (lean_obj_tag(v_x_4077_) == 0)
{
lean_object* v___x_4080_; lean_object* v___x_4081_; 
v___x_4080_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4080_, 0, v_x_4078_);
v___x_4081_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4081_, 0, v___x_4080_);
return v___x_4081_;
}
else
{
lean_object* v_head_4082_; lean_object* v_tail_4083_; lean_object* v_waiter_4084_; lean_object* v___f_4085_; lean_object* v___x_4086_; uint8_t v___x_4087_; 
v_head_4082_ = lean_ctor_get(v_x_4077_, 0);
lean_inc(v_head_4082_);
v_tail_4083_ = lean_ctor_get(v_x_4077_, 1);
lean_inc(v_tail_4083_);
lean_dec_ref_known(v_x_4077_, 2);
v_waiter_4084_ = lean_ctor_get(v_head_4082_, 1);
lean_inc(v_waiter_4084_);
v___f_4085_ = lean_alloc_closure((void*)(l_List_filterAuxM___at___00Std_Queue_filterM___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__3_spec__4___redArg___lam__0___boxed), 5, 3);
lean_closure_set(v___f_4085_, 0, v_tail_4083_);
lean_closure_set(v___f_4085_, 1, v_x_4078_);
lean_closure_set(v___f_4085_, 2, v_head_4082_);
v___x_4086_ = lean_unsigned_to_nat(0u);
v___x_4087_ = 0;
if (lean_obj_tag(v_waiter_4084_) == 0)
{
lean_object* v___x_4088_; lean_object* v___x_4089_; 
v___x_4088_ = ((lean_object*)(l_List_filterAuxM___at___00Std_Queue_filterM___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__3_spec__4___redArg___closed__1));
v___x_4089_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_4086_, v___x_4087_, v___x_4088_, v___f_4085_);
return v___x_4089_;
}
else
{
lean_object* v_val_4090_; lean_object* v___x_4092_; uint8_t v_isShared_4093_; uint8_t v_isSharedCheck_4103_; 
v_val_4090_ = lean_ctor_get(v_waiter_4084_, 0);
v_isSharedCheck_4103_ = !lean_is_exclusive(v_waiter_4084_);
if (v_isSharedCheck_4103_ == 0)
{
v___x_4092_ = v_waiter_4084_;
v_isShared_4093_ = v_isSharedCheck_4103_;
goto v_resetjp_4091_;
}
else
{
lean_inc(v_val_4090_);
lean_dec(v_waiter_4084_);
v___x_4092_ = lean_box(0);
v_isShared_4093_ = v_isSharedCheck_4103_;
goto v_resetjp_4091_;
}
v_resetjp_4091_:
{
lean_object* v_finished_4094_; lean_object* v___f_4095_; lean_object* v___x_4096_; lean_object* v___x_4098_; 
v_finished_4094_ = lean_ctor_get(v_val_4090_, 0);
lean_inc(v_finished_4094_);
lean_dec(v_val_4090_);
v___f_4095_ = ((lean_object*)(l_List_filterAuxM___at___00Std_Queue_filterM___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__3_spec__4___redArg___closed__2));
v___x_4096_ = lean_st_ref_get(v_finished_4094_);
lean_dec(v_finished_4094_);
if (v_isShared_4093_ == 0)
{
lean_ctor_set(v___x_4092_, 0, v___x_4096_);
v___x_4098_ = v___x_4092_;
goto v_reusejp_4097_;
}
else
{
lean_object* v_reuseFailAlloc_4102_; 
v_reuseFailAlloc_4102_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4102_, 0, v___x_4096_);
v___x_4098_ = v_reuseFailAlloc_4102_;
goto v_reusejp_4097_;
}
v_reusejp_4097_:
{
lean_object* v___x_4099_; lean_object* v___x_4100_; lean_object* v___x_4101_; 
v___x_4099_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4099_, 0, v___x_4098_);
v___x_4100_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_4086_, v___x_4087_, v___x_4099_, v___f_4095_);
v___x_4101_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_4086_, v___x_4087_, v___x_4100_, v___f_4085_);
return v___x_4101_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_filterAuxM___at___00Std_Queue_filterM___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__3_spec__4___redArg___lam__0(lean_object* v_tail_4104_, lean_object* v_x_4105_, lean_object* v_head_4106_, lean_object* v_x_4107_){
_start:
{
if (lean_obj_tag(v_x_4107_) == 0)
{
lean_object* v_a_4109_; lean_object* v___x_4111_; uint8_t v_isShared_4112_; uint8_t v_isSharedCheck_4117_; 
lean_dec_ref(v_head_4106_);
lean_dec(v_x_4105_);
lean_dec(v_tail_4104_);
v_a_4109_ = lean_ctor_get(v_x_4107_, 0);
v_isSharedCheck_4117_ = !lean_is_exclusive(v_x_4107_);
if (v_isSharedCheck_4117_ == 0)
{
v___x_4111_ = v_x_4107_;
v_isShared_4112_ = v_isSharedCheck_4117_;
goto v_resetjp_4110_;
}
else
{
lean_inc(v_a_4109_);
lean_dec(v_x_4107_);
v___x_4111_ = lean_box(0);
v_isShared_4112_ = v_isSharedCheck_4117_;
goto v_resetjp_4110_;
}
v_resetjp_4110_:
{
lean_object* v___x_4114_; 
if (v_isShared_4112_ == 0)
{
v___x_4114_ = v___x_4111_;
goto v_reusejp_4113_;
}
else
{
lean_object* v_reuseFailAlloc_4116_; 
v_reuseFailAlloc_4116_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4116_, 0, v_a_4109_);
v___x_4114_ = v_reuseFailAlloc_4116_;
goto v_reusejp_4113_;
}
v_reusejp_4113_:
{
lean_object* v___x_4115_; 
v___x_4115_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4115_, 0, v___x_4114_);
return v___x_4115_;
}
}
}
else
{
lean_object* v_a_4118_; uint8_t v___x_4119_; 
v_a_4118_ = lean_ctor_get(v_x_4107_, 0);
lean_inc(v_a_4118_);
lean_dec_ref_known(v_x_4107_, 1);
v___x_4119_ = lean_unbox(v_a_4118_);
lean_dec(v_a_4118_);
if (v___x_4119_ == 0)
{
lean_object* v___x_4120_; 
lean_dec_ref(v_head_4106_);
v___x_4120_ = l_List_filterAuxM___at___00Std_Queue_filterM___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__3_spec__4___redArg(v_tail_4104_, v_x_4105_);
return v___x_4120_;
}
else
{
lean_object* v___x_4121_; lean_object* v___x_4122_; 
v___x_4121_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4121_, 0, v_head_4106_);
lean_ctor_set(v___x_4121_, 1, v_x_4105_);
v___x_4122_ = l_List_filterAuxM___at___00Std_Queue_filterM___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__3_spec__4___redArg(v_tail_4104_, v___x_4121_);
return v___x_4122_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_filterAuxM___at___00Std_Queue_filterM___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__3_spec__4___redArg___boxed(lean_object* v_x_4123_, lean_object* v_x_4124_, lean_object* v___y_4125_){
_start:
{
lean_object* v_res_4126_; 
v_res_4126_ = l_List_filterAuxM___at___00Std_Queue_filterM___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__3_spec__4___redArg(v_x_4123_, v_x_4124_);
return v_res_4126_;
}
}
LEAN_EXPORT lean_object* l_Std_Queue_filterM___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__3___redArg___lam__1(lean_object* v___x_4127_, lean_object* v_eList_4128_, lean_object* v___f_4129_, lean_object* v_x_4130_){
_start:
{
if (lean_obj_tag(v_x_4130_) == 0)
{
lean_object* v_a_4132_; lean_object* v___x_4134_; uint8_t v_isShared_4135_; uint8_t v_isSharedCheck_4140_; 
lean_dec_ref(v___f_4129_);
lean_dec(v_eList_4128_);
lean_dec(v___x_4127_);
v_a_4132_ = lean_ctor_get(v_x_4130_, 0);
v_isSharedCheck_4140_ = !lean_is_exclusive(v_x_4130_);
if (v_isSharedCheck_4140_ == 0)
{
v___x_4134_ = v_x_4130_;
v_isShared_4135_ = v_isSharedCheck_4140_;
goto v_resetjp_4133_;
}
else
{
lean_inc(v_a_4132_);
lean_dec(v_x_4130_);
v___x_4134_ = lean_box(0);
v_isShared_4135_ = v_isSharedCheck_4140_;
goto v_resetjp_4133_;
}
v_resetjp_4133_:
{
lean_object* v___x_4137_; 
if (v_isShared_4135_ == 0)
{
v___x_4137_ = v___x_4134_;
goto v_reusejp_4136_;
}
else
{
lean_object* v_reuseFailAlloc_4139_; 
v_reuseFailAlloc_4139_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4139_, 0, v_a_4132_);
v___x_4137_ = v_reuseFailAlloc_4139_;
goto v_reusejp_4136_;
}
v_reusejp_4136_:
{
lean_object* v___x_4138_; 
v___x_4138_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4138_, 0, v___x_4137_);
return v___x_4138_;
}
}
}
else
{
lean_object* v_a_4141_; lean_object* v___f_4142_; lean_object* v___x_4143_; uint8_t v___x_4144_; lean_object* v___x_4145_; lean_object* v___x_4146_; lean_object* v___x_4147_; 
v_a_4141_ = lean_ctor_get(v_x_4130_, 0);
lean_inc(v_a_4141_);
lean_dec_ref_known(v_x_4130_, 1);
lean_inc(v___x_4127_);
v___f_4142_ = lean_alloc_closure((void*)(l_Std_Queue_filterM___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__3___redArg___lam__2___boxed), 4, 2);
lean_closure_set(v___f_4142_, 0, v_a_4141_);
lean_closure_set(v___f_4142_, 1, v___x_4127_);
v___x_4143_ = lean_unsigned_to_nat(0u);
v___x_4144_ = 0;
v___x_4145_ = l_List_filterAuxM___at___00Std_Queue_filterM___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__3_spec__4___redArg(v_eList_4128_, v___x_4127_);
v___x_4146_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_4143_, v___x_4144_, v___x_4145_, v___f_4129_);
v___x_4147_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_4143_, v___x_4144_, v___x_4146_, v___f_4142_);
return v___x_4147_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Queue_filterM___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__3___redArg___lam__1___boxed(lean_object* v___x_4148_, lean_object* v_eList_4149_, lean_object* v___f_4150_, lean_object* v_x_4151_, lean_object* v___y_4152_){
_start:
{
lean_object* v_res_4153_; 
v_res_4153_ = l_Std_Queue_filterM___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__3___redArg___lam__1(v___x_4148_, v_eList_4149_, v___f_4150_, v_x_4151_);
return v_res_4153_;
}
}
LEAN_EXPORT lean_object* l_Std_Queue_filterM___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__3___redArg(lean_object* v_q_4155_, lean_object* v___y_4156_){
_start:
{
lean_object* v_eList_4158_; lean_object* v_dList_4159_; lean_object* v___f_4160_; lean_object* v___x_4161_; lean_object* v___f_4162_; lean_object* v___x_4163_; uint8_t v___x_4164_; lean_object* v___x_4165_; lean_object* v___x_4166_; lean_object* v___x_4167_; 
v_eList_4158_ = lean_ctor_get(v_q_4155_, 0);
lean_inc(v_eList_4158_);
v_dList_4159_ = lean_ctor_get(v_q_4155_, 1);
lean_inc(v_dList_4159_);
lean_dec_ref(v_q_4155_);
v___f_4160_ = ((lean_object*)(l_Std_Queue_filterM___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__3___redArg___closed__0));
v___x_4161_ = lean_box(0);
v___f_4162_ = lean_alloc_closure((void*)(l_Std_Queue_filterM___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__3___redArg___lam__1___boxed), 5, 3);
lean_closure_set(v___f_4162_, 0, v___x_4161_);
lean_closure_set(v___f_4162_, 1, v_eList_4158_);
lean_closure_set(v___f_4162_, 2, v___f_4160_);
v___x_4163_ = lean_unsigned_to_nat(0u);
v___x_4164_ = 0;
v___x_4165_ = l_List_filterAuxM___at___00Std_Queue_filterM___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__3_spec__4___redArg(v_dList_4159_, v___x_4161_);
v___x_4166_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_4163_, v___x_4164_, v___x_4165_, v___f_4160_);
v___x_4167_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_4163_, v___x_4164_, v___x_4166_, v___f_4162_);
return v___x_4167_;
}
}
LEAN_EXPORT lean_object* l_Std_Queue_filterM___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__3___redArg___boxed(lean_object* v_q_4168_, lean_object* v___y_4169_, lean_object* v___y_4170_){
_start:
{
lean_object* v_res_4171_; 
v_res_4171_ = l_Std_Queue_filterM___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__3___redArg(v_q_4168_, v___y_4169_);
lean_dec(v___y_4169_);
return v_res_4171_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector___redArg___lam__1(lean_object* v___y_4172_, lean_object* v_x_4173_){
_start:
{
if (lean_obj_tag(v_x_4173_) == 0)
{
lean_object* v_a_4175_; lean_object* v___x_4177_; uint8_t v_isShared_4178_; uint8_t v_isSharedCheck_4183_; 
v_a_4175_ = lean_ctor_get(v_x_4173_, 0);
v_isSharedCheck_4183_ = !lean_is_exclusive(v_x_4173_);
if (v_isSharedCheck_4183_ == 0)
{
v___x_4177_ = v_x_4173_;
v_isShared_4178_ = v_isSharedCheck_4183_;
goto v_resetjp_4176_;
}
else
{
lean_inc(v_a_4175_);
lean_dec(v_x_4173_);
v___x_4177_ = lean_box(0);
v_isShared_4178_ = v_isSharedCheck_4183_;
goto v_resetjp_4176_;
}
v_resetjp_4176_:
{
lean_object* v___x_4180_; 
if (v_isShared_4178_ == 0)
{
v___x_4180_ = v___x_4177_;
goto v_reusejp_4179_;
}
else
{
lean_object* v_reuseFailAlloc_4182_; 
v_reuseFailAlloc_4182_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4182_, 0, v_a_4175_);
v___x_4180_ = v_reuseFailAlloc_4182_;
goto v_reusejp_4179_;
}
v_reusejp_4179_:
{
lean_object* v___x_4181_; 
v___x_4181_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4181_, 0, v___x_4180_);
return v___x_4181_;
}
}
}
else
{
lean_object* v_a_4184_; lean_object* v_producers_4185_; lean_object* v_waiters_4186_; lean_object* v_capacity_4187_; lean_object* v_size_4188_; lean_object* v_buffer_4189_; lean_object* v_write_4190_; lean_object* v_read_4191_; lean_object* v_receivers_4192_; lean_object* v_nextId_4193_; uint8_t v_closed_4194_; lean_object* v_pos_4195_; lean_object* v___x_4196_; lean_object* v___f_4197_; lean_object* v___x_4198_; uint8_t v___x_4199_; lean_object* v___x_4200_; lean_object* v___x_4201_; 
v_a_4184_ = lean_ctor_get(v_x_4173_, 0);
lean_inc(v_a_4184_);
lean_dec_ref_known(v_x_4173_, 1);
v_producers_4185_ = lean_ctor_get(v_a_4184_, 0);
lean_inc_ref(v_producers_4185_);
v_waiters_4186_ = lean_ctor_get(v_a_4184_, 1);
lean_inc_ref(v_waiters_4186_);
v_capacity_4187_ = lean_ctor_get(v_a_4184_, 2);
lean_inc(v_capacity_4187_);
v_size_4188_ = lean_ctor_get(v_a_4184_, 3);
lean_inc(v_size_4188_);
v_buffer_4189_ = lean_ctor_get(v_a_4184_, 4);
lean_inc_ref(v_buffer_4189_);
v_write_4190_ = lean_ctor_get(v_a_4184_, 5);
lean_inc(v_write_4190_);
v_read_4191_ = lean_ctor_get(v_a_4184_, 6);
lean_inc(v_read_4191_);
v_receivers_4192_ = lean_ctor_get(v_a_4184_, 7);
lean_inc(v_receivers_4192_);
v_nextId_4193_ = lean_ctor_get(v_a_4184_, 8);
lean_inc(v_nextId_4193_);
v_closed_4194_ = lean_ctor_get_uint8(v_a_4184_, sizeof(void*)*10);
v_pos_4195_ = lean_ctor_get(v_a_4184_, 9);
lean_inc(v_pos_4195_);
lean_dec(v_a_4184_);
v___x_4196_ = lean_box(v_closed_4194_);
lean_inc(v___y_4172_);
v___f_4197_ = lean_alloc_closure((void*)(l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector___redArg___lam__0___boxed), 13, 11);
lean_closure_set(v___f_4197_, 0, v_producers_4185_);
lean_closure_set(v___f_4197_, 1, v_capacity_4187_);
lean_closure_set(v___f_4197_, 2, v_size_4188_);
lean_closure_set(v___f_4197_, 3, v_buffer_4189_);
lean_closure_set(v___f_4197_, 4, v_write_4190_);
lean_closure_set(v___f_4197_, 5, v_read_4191_);
lean_closure_set(v___f_4197_, 6, v_receivers_4192_);
lean_closure_set(v___f_4197_, 7, v_nextId_4193_);
lean_closure_set(v___f_4197_, 8, v___x_4196_);
lean_closure_set(v___f_4197_, 9, v_pos_4195_);
lean_closure_set(v___f_4197_, 10, v___y_4172_);
v___x_4198_ = lean_unsigned_to_nat(0u);
v___x_4199_ = 0;
v___x_4200_ = l_Std_Queue_filterM___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__3___redArg(v_waiters_4186_, v___y_4172_);
v___x_4201_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_4198_, v___x_4199_, v___x_4200_, v___f_4197_);
return v___x_4201_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector___redArg___lam__1___boxed(lean_object* v___y_4202_, lean_object* v_x_4203_, lean_object* v___y_4204_){
_start:
{
lean_object* v_res_4205_; 
v_res_4205_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector___redArg___lam__1(v___y_4202_, v_x_4203_);
lean_dec(v___y_4202_);
return v_res_4205_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector___redArg___lam__2(lean_object* v___y_4206_){
_start:
{
lean_object* v___f_4208_; lean_object* v___x_4209_; uint8_t v___x_4210_; lean_object* v___x_4211_; lean_object* v___x_4212_; lean_object* v___x_4213_; lean_object* v___x_4214_; 
lean_inc(v___y_4206_);
v___f_4208_ = lean_alloc_closure((void*)(l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector___redArg___lam__1___boxed), 3, 1);
lean_closure_set(v___f_4208_, 0, v___y_4206_);
v___x_4209_ = lean_unsigned_to_nat(0u);
v___x_4210_ = 0;
v___x_4211_ = lean_st_ref_get(v___y_4206_);
v___x_4212_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4212_, 0, v___x_4211_);
v___x_4213_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4213_, 0, v___x_4212_);
v___x_4214_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_4209_, v___x_4210_, v___x_4213_, v___f_4208_);
return v___x_4214_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector___redArg___lam__2___boxed(lean_object* v___y_4215_, lean_object* v___y_4216_){
_start:
{
lean_object* v_res_4217_; 
v_res_4217_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector___redArg___lam__2(v___y_4215_);
lean_dec(v___y_4215_);
return v_res_4217_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector___redArg___lam__3(lean_object* v_ch_4218_, lean_object* v_waiter_4219_){
_start:
{
lean_object* v_val_4222_; lean_object* v___x_4224_; 
v___x_4224_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_registerAux___redArg(v_ch_4218_, v_waiter_4219_);
if (lean_obj_tag(v___x_4224_) == 0)
{
lean_object* v_a_4225_; lean_object* v___x_4227_; uint8_t v_isShared_4228_; uint8_t v_isSharedCheck_4232_; 
v_a_4225_ = lean_ctor_get(v___x_4224_, 0);
v_isSharedCheck_4232_ = !lean_is_exclusive(v___x_4224_);
if (v_isSharedCheck_4232_ == 0)
{
v___x_4227_ = v___x_4224_;
v_isShared_4228_ = v_isSharedCheck_4232_;
goto v_resetjp_4226_;
}
else
{
lean_inc(v_a_4225_);
lean_dec(v___x_4224_);
v___x_4227_ = lean_box(0);
v_isShared_4228_ = v_isSharedCheck_4232_;
goto v_resetjp_4226_;
}
v_resetjp_4226_:
{
lean_object* v___x_4230_; 
if (v_isShared_4228_ == 0)
{
lean_ctor_set_tag(v___x_4227_, 1);
v___x_4230_ = v___x_4227_;
goto v_reusejp_4229_;
}
else
{
lean_object* v_reuseFailAlloc_4231_; 
v_reuseFailAlloc_4231_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4231_, 0, v_a_4225_);
v___x_4230_ = v_reuseFailAlloc_4231_;
goto v_reusejp_4229_;
}
v_reusejp_4229_:
{
v_val_4222_ = v___x_4230_;
goto v___jp_4221_;
}
}
}
else
{
lean_object* v_a_4233_; lean_object* v___x_4235_; uint8_t v_isShared_4236_; uint8_t v_isSharedCheck_4240_; 
v_a_4233_ = lean_ctor_get(v___x_4224_, 0);
v_isSharedCheck_4240_ = !lean_is_exclusive(v___x_4224_);
if (v_isSharedCheck_4240_ == 0)
{
v___x_4235_ = v___x_4224_;
v_isShared_4236_ = v_isSharedCheck_4240_;
goto v_resetjp_4234_;
}
else
{
lean_inc(v_a_4233_);
lean_dec(v___x_4224_);
v___x_4235_ = lean_box(0);
v_isShared_4236_ = v_isSharedCheck_4240_;
goto v_resetjp_4234_;
}
v_resetjp_4234_:
{
lean_object* v___x_4238_; 
if (v_isShared_4236_ == 0)
{
lean_ctor_set_tag(v___x_4235_, 0);
v___x_4238_ = v___x_4235_;
goto v_reusejp_4237_;
}
else
{
lean_object* v_reuseFailAlloc_4239_; 
v_reuseFailAlloc_4239_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4239_, 0, v_a_4233_);
v___x_4238_ = v_reuseFailAlloc_4239_;
goto v_reusejp_4237_;
}
v_reusejp_4237_:
{
v_val_4222_ = v___x_4238_;
goto v___jp_4221_;
}
}
}
v___jp_4221_:
{
lean_object* v___x_4223_; 
v___x_4223_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4223_, 0, v_val_4222_);
return v___x_4223_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector___redArg___lam__3___boxed(lean_object* v_ch_4241_, lean_object* v_waiter_4242_, lean_object* v___y_4243_){
_start:
{
lean_object* v_res_4244_; 
v_res_4244_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector___redArg___lam__3(v_ch_4241_, v_waiter_4242_);
return v_res_4244_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector___redArg___lam__4(lean_object* v_x_4245_){
_start:
{
if (lean_obj_tag(v_x_4245_) == 0)
{
lean_object* v_a_4247_; lean_object* v___x_4249_; uint8_t v_isShared_4250_; uint8_t v_isSharedCheck_4255_; 
v_a_4247_ = lean_ctor_get(v_x_4245_, 0);
v_isSharedCheck_4255_ = !lean_is_exclusive(v_x_4245_);
if (v_isSharedCheck_4255_ == 0)
{
v___x_4249_ = v_x_4245_;
v_isShared_4250_ = v_isSharedCheck_4255_;
goto v_resetjp_4248_;
}
else
{
lean_inc(v_a_4247_);
lean_dec(v_x_4245_);
v___x_4249_ = lean_box(0);
v_isShared_4250_ = v_isSharedCheck_4255_;
goto v_resetjp_4248_;
}
v_resetjp_4248_:
{
lean_object* v___x_4252_; 
if (v_isShared_4250_ == 0)
{
v___x_4252_ = v___x_4249_;
goto v_reusejp_4251_;
}
else
{
lean_object* v_reuseFailAlloc_4254_; 
v_reuseFailAlloc_4254_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4254_, 0, v_a_4247_);
v___x_4252_ = v_reuseFailAlloc_4254_;
goto v_reusejp_4251_;
}
v_reusejp_4251_:
{
lean_object* v___x_4253_; 
v___x_4253_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4253_, 0, v___x_4252_);
return v___x_4253_;
}
}
}
else
{
lean_object* v_a_4256_; lean_object* v___x_4258_; uint8_t v_isShared_4259_; uint8_t v_isSharedCheck_4265_; 
v_a_4256_ = lean_ctor_get(v_x_4245_, 0);
v_isSharedCheck_4265_ = !lean_is_exclusive(v_x_4245_);
if (v_isSharedCheck_4265_ == 0)
{
v___x_4258_ = v_x_4245_;
v_isShared_4259_ = v_isSharedCheck_4265_;
goto v_resetjp_4257_;
}
else
{
lean_inc(v_a_4256_);
lean_dec(v_x_4245_);
v___x_4258_ = lean_box(0);
v_isShared_4259_ = v_isSharedCheck_4265_;
goto v_resetjp_4257_;
}
v_resetjp_4257_:
{
lean_object* v___x_4260_; lean_object* v___x_4262_; 
v___x_4260_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4260_, 0, v_a_4256_);
if (v_isShared_4259_ == 0)
{
lean_ctor_set(v___x_4258_, 0, v___x_4260_);
v___x_4262_ = v___x_4258_;
goto v_reusejp_4261_;
}
else
{
lean_object* v_reuseFailAlloc_4264_; 
v_reuseFailAlloc_4264_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4264_, 0, v___x_4260_);
v___x_4262_ = v_reuseFailAlloc_4264_;
goto v_reusejp_4261_;
}
v_reusejp_4261_:
{
lean_object* v___x_4263_; 
v___x_4263_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4263_, 0, v___x_4262_);
return v___x_4263_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector___redArg___lam__4___boxed(lean_object* v_x_4266_, lean_object* v___y_4267_){
_start:
{
lean_object* v_res_4268_; 
v_res_4268_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector___redArg___lam__4(v_x_4266_);
return v_res_4268_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__0___redArg___lam__0(lean_object* v_x_4269_, lean_object* v_x_4270_){
_start:
{
if (lean_obj_tag(v_x_4270_) == 0)
{
lean_object* v_a_4272_; lean_object* v___x_4274_; uint8_t v_isShared_4275_; uint8_t v_isSharedCheck_4280_; 
lean_dec_ref(v_x_4269_);
v_a_4272_ = lean_ctor_get(v_x_4270_, 0);
v_isSharedCheck_4280_ = !lean_is_exclusive(v_x_4270_);
if (v_isSharedCheck_4280_ == 0)
{
v___x_4274_ = v_x_4270_;
v_isShared_4275_ = v_isSharedCheck_4280_;
goto v_resetjp_4273_;
}
else
{
lean_inc(v_a_4272_);
lean_dec(v_x_4270_);
v___x_4274_ = lean_box(0);
v_isShared_4275_ = v_isSharedCheck_4280_;
goto v_resetjp_4273_;
}
v_resetjp_4273_:
{
lean_object* v___x_4277_; 
if (v_isShared_4275_ == 0)
{
v___x_4277_ = v___x_4274_;
goto v_reusejp_4276_;
}
else
{
lean_object* v_reuseFailAlloc_4279_; 
v_reuseFailAlloc_4279_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4279_, 0, v_a_4272_);
v___x_4277_ = v_reuseFailAlloc_4279_;
goto v_reusejp_4276_;
}
v_reusejp_4276_:
{
lean_object* v___x_4278_; 
v___x_4278_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4278_, 0, v___x_4277_);
return v___x_4278_;
}
}
}
else
{
lean_object* v___x_4281_; 
lean_dec_ref_known(v_x_4270_, 1);
v___x_4281_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4281_, 0, v_x_4269_);
return v___x_4281_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__0___redArg___lam__0___boxed(lean_object* v_x_4282_, lean_object* v_x_4283_, lean_object* v___y_4284_){
_start:
{
lean_object* v_res_4285_; 
v_res_4285_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__0___redArg___lam__0(v_x_4282_, v_x_4283_);
return v_res_4285_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__0___redArg___lam__1(lean_object* v___y_4288_, lean_object* v_receiverId_4289_, lean_object* v_receivers_4290_, lean_object* v_x_4291_){
_start:
{
if (lean_obj_tag(v_x_4291_) == 0)
{
lean_object* v___x_4293_; 
lean_dec(v_receivers_4290_);
lean_dec(v_receiverId_4289_);
v___x_4293_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4293_, 0, v_x_4291_);
return v___x_4293_;
}
else
{
lean_object* v_a_4294_; 
v_a_4294_ = lean_ctor_get(v_x_4291_, 0);
if (lean_obj_tag(v_a_4294_) == 1)
{
lean_object* v___f_4295_; lean_object* v___x_4296_; uint8_t v___x_4297_; lean_object* v___x_4298_; lean_object* v_producers_4299_; lean_object* v_waiters_4300_; lean_object* v_capacity_4301_; lean_object* v_size_4302_; lean_object* v_buffer_4303_; lean_object* v_write_4304_; lean_object* v_read_4305_; lean_object* v_nextId_4306_; uint8_t v_closed_4307_; lean_object* v_pos_4308_; lean_object* v___x_4310_; uint8_t v_isShared_4311_; uint8_t v_isSharedCheck_4319_; 
v___f_4295_ = lean_alloc_closure((void*)(l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__0___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_4295_, 0, v_x_4291_);
v___x_4296_ = lean_unsigned_to_nat(0u);
v___x_4297_ = 0;
v___x_4298_ = lean_st_ref_take(v___y_4288_);
v_producers_4299_ = lean_ctor_get(v___x_4298_, 0);
v_waiters_4300_ = lean_ctor_get(v___x_4298_, 1);
v_capacity_4301_ = lean_ctor_get(v___x_4298_, 2);
v_size_4302_ = lean_ctor_get(v___x_4298_, 3);
v_buffer_4303_ = lean_ctor_get(v___x_4298_, 4);
v_write_4304_ = lean_ctor_get(v___x_4298_, 5);
v_read_4305_ = lean_ctor_get(v___x_4298_, 6);
v_nextId_4306_ = lean_ctor_get(v___x_4298_, 8);
v_closed_4307_ = lean_ctor_get_uint8(v___x_4298_, sizeof(void*)*10);
v_pos_4308_ = lean_ctor_get(v___x_4298_, 9);
v_isSharedCheck_4319_ = !lean_is_exclusive(v___x_4298_);
if (v_isSharedCheck_4319_ == 0)
{
lean_object* v_unused_4320_; 
v_unused_4320_ = lean_ctor_get(v___x_4298_, 7);
lean_dec(v_unused_4320_);
v___x_4310_ = v___x_4298_;
v_isShared_4311_ = v_isSharedCheck_4319_;
goto v_resetjp_4309_;
}
else
{
lean_inc(v_pos_4308_);
lean_inc(v_nextId_4306_);
lean_inc(v_read_4305_);
lean_inc(v_write_4304_);
lean_inc(v_buffer_4303_);
lean_inc(v_size_4302_);
lean_inc(v_capacity_4301_);
lean_inc(v_waiters_4300_);
lean_inc(v_producers_4299_);
lean_dec(v___x_4298_);
v___x_4310_ = lean_box(0);
v_isShared_4311_ = v_isSharedCheck_4319_;
goto v_resetjp_4309_;
}
v_resetjp_4309_:
{
lean_object* v___x_4312_; lean_object* v___x_4314_; 
v___x_4312_ = l_Std_DTreeMap_Internal_Impl_Const_modify___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_spec__0_spec__1(v_receiverId_4289_, v_receivers_4290_);
if (v_isShared_4311_ == 0)
{
lean_ctor_set(v___x_4310_, 7, v___x_4312_);
v___x_4314_ = v___x_4310_;
goto v_reusejp_4313_;
}
else
{
lean_object* v_reuseFailAlloc_4318_; 
v_reuseFailAlloc_4318_ = lean_alloc_ctor(0, 10, 1);
lean_ctor_set(v_reuseFailAlloc_4318_, 0, v_producers_4299_);
lean_ctor_set(v_reuseFailAlloc_4318_, 1, v_waiters_4300_);
lean_ctor_set(v_reuseFailAlloc_4318_, 2, v_capacity_4301_);
lean_ctor_set(v_reuseFailAlloc_4318_, 3, v_size_4302_);
lean_ctor_set(v_reuseFailAlloc_4318_, 4, v_buffer_4303_);
lean_ctor_set(v_reuseFailAlloc_4318_, 5, v_write_4304_);
lean_ctor_set(v_reuseFailAlloc_4318_, 6, v_read_4305_);
lean_ctor_set(v_reuseFailAlloc_4318_, 7, v___x_4312_);
lean_ctor_set(v_reuseFailAlloc_4318_, 8, v_nextId_4306_);
lean_ctor_set(v_reuseFailAlloc_4318_, 9, v_pos_4308_);
lean_ctor_set_uint8(v_reuseFailAlloc_4318_, sizeof(void*)*10, v_closed_4307_);
v___x_4314_ = v_reuseFailAlloc_4318_;
goto v_reusejp_4313_;
}
v_reusejp_4313_:
{
lean_object* v___x_4315_; lean_object* v___x_4316_; lean_object* v___x_4317_; 
v___x_4315_ = lean_st_ref_put(v___y_4288_, v___x_4314_);
v___x_4316_ = ((lean_object*)(l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector___redArg___lam__0___closed__1));
v___x_4317_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_4296_, v___x_4297_, v___x_4316_, v___f_4295_);
return v___x_4317_;
}
}
}
else
{
lean_object* v___x_4321_; 
lean_dec_ref_known(v_x_4291_, 1);
lean_dec(v_receivers_4290_);
lean_dec(v_receiverId_4289_);
v___x_4321_ = ((lean_object*)(l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__0___redArg___lam__1___closed__0));
return v___x_4321_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__0___redArg___lam__1___boxed(lean_object* v___y_4322_, lean_object* v_receiverId_4323_, lean_object* v_receivers_4324_, lean_object* v_x_4325_, lean_object* v___y_4326_){
_start:
{
lean_object* v_res_4327_; 
v_res_4327_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__0___redArg___lam__1(v___y_4322_, v_receiverId_4323_, v_receivers_4324_, v_x_4325_);
lean_dec(v___y_4322_);
return v_res_4327_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_isEmpty___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__0_spec__0_spec__4___redArg___lam__0(lean_object* v_x_4328_){
_start:
{
if (lean_obj_tag(v_x_4328_) == 0)
{
lean_object* v_a_4330_; lean_object* v___x_4332_; uint8_t v_isShared_4333_; uint8_t v_isSharedCheck_4338_; 
v_a_4330_ = lean_ctor_get(v_x_4328_, 0);
v_isSharedCheck_4338_ = !lean_is_exclusive(v_x_4328_);
if (v_isSharedCheck_4338_ == 0)
{
v___x_4332_ = v_x_4328_;
v_isShared_4333_ = v_isSharedCheck_4338_;
goto v_resetjp_4331_;
}
else
{
lean_inc(v_a_4330_);
lean_dec(v_x_4328_);
v___x_4332_ = lean_box(0);
v_isShared_4333_ = v_isSharedCheck_4338_;
goto v_resetjp_4331_;
}
v_resetjp_4331_:
{
lean_object* v___x_4335_; 
if (v_isShared_4333_ == 0)
{
v___x_4335_ = v___x_4332_;
goto v_reusejp_4334_;
}
else
{
lean_object* v_reuseFailAlloc_4337_; 
v_reuseFailAlloc_4337_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4337_, 0, v_a_4330_);
v___x_4335_ = v_reuseFailAlloc_4337_;
goto v_reusejp_4334_;
}
v_reusejp_4334_:
{
lean_object* v___x_4336_; 
v___x_4336_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4336_, 0, v___x_4335_);
return v___x_4336_;
}
}
}
else
{
lean_object* v_a_4339_; lean_object* v___x_4341_; uint8_t v_isShared_4342_; uint8_t v_isSharedCheck_4351_; 
v_a_4339_ = lean_ctor_get(v_x_4328_, 0);
v_isSharedCheck_4351_ = !lean_is_exclusive(v_x_4328_);
if (v_isSharedCheck_4351_ == 0)
{
v___x_4341_ = v_x_4328_;
v_isShared_4342_ = v_isSharedCheck_4351_;
goto v_resetjp_4340_;
}
else
{
lean_inc(v_a_4339_);
lean_dec(v_x_4328_);
v___x_4341_ = lean_box(0);
v_isShared_4342_ = v_isSharedCheck_4351_;
goto v_resetjp_4340_;
}
v_resetjp_4340_:
{
lean_object* v_size_4343_; lean_object* v___x_4344_; uint8_t v___x_4345_; lean_object* v___x_4346_; lean_object* v___x_4348_; 
v_size_4343_ = lean_ctor_get(v_a_4339_, 3);
lean_inc(v_size_4343_);
lean_dec(v_a_4339_);
v___x_4344_ = lean_unsigned_to_nat(0u);
v___x_4345_ = lean_nat_dec_eq(v_size_4343_, v___x_4344_);
lean_dec(v_size_4343_);
v___x_4346_ = lean_box(v___x_4345_);
if (v_isShared_4342_ == 0)
{
lean_ctor_set(v___x_4341_, 0, v___x_4346_);
v___x_4348_ = v___x_4341_;
goto v_reusejp_4347_;
}
else
{
lean_object* v_reuseFailAlloc_4350_; 
v_reuseFailAlloc_4350_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4350_, 0, v___x_4346_);
v___x_4348_ = v_reuseFailAlloc_4350_;
goto v_reusejp_4347_;
}
v_reusejp_4347_:
{
lean_object* v___x_4349_; 
v___x_4349_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4349_, 0, v___x_4348_);
return v___x_4349_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_isEmpty___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__0_spec__0_spec__4___redArg___lam__0___boxed(lean_object* v_x_4352_, lean_object* v___y_4353_){
_start:
{
lean_object* v_res_4354_; 
v_res_4354_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_isEmpty___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__0_spec__0_spec__4___redArg___lam__0(v_x_4352_);
return v_res_4354_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_isEmpty___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__0_spec__0_spec__4___redArg(lean_object* v___y_4356_){
_start:
{
lean_object* v___f_4358_; lean_object* v___x_4359_; uint8_t v___x_4360_; lean_object* v___x_4361_; lean_object* v___x_4362_; lean_object* v___x_4363_; lean_object* v___x_4364_; 
v___f_4358_ = ((lean_object*)(l___private_Std_Sync_Broadcast_0__Std_Bounded_isEmpty___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__0_spec__0_spec__4___redArg___closed__0));
v___x_4359_ = lean_unsigned_to_nat(0u);
v___x_4360_ = 0;
v___x_4361_ = lean_st_ref_get(v___y_4356_);
v___x_4362_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4362_, 0, v___x_4361_);
v___x_4363_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4363_, 0, v___x_4362_);
v___x_4364_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_4359_, v___x_4360_, v___x_4363_, v___f_4358_);
return v___x_4364_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_isEmpty___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__0_spec__0_spec__4___redArg___boxed(lean_object* v___y_4365_, lean_object* v___y_4366_){
_start:
{
lean_object* v_res_4367_; 
v_res_4367_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_isEmpty___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__0_spec__0_spec__4___redArg(v___y_4365_);
lean_dec(v___y_4365_);
return v_res_4367_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getSlotValue___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__0_spec__0_spec__3___redArg(lean_object* v_slot_4368_, lean_object* v_next_4369_){
_start:
{
lean_object* v___x_4371_; lean_object* v_fst_4373_; lean_object* v_snd_4374_; lean_object* v_value_4378_; lean_object* v_pos_4379_; lean_object* v_remaining_4380_; uint8_t v___x_4381_; 
v___x_4371_ = lean_st_ref_take(v_slot_4368_);
v_value_4378_ = lean_ctor_get(v___x_4371_, 0);
lean_inc(v_value_4378_);
v_pos_4379_ = lean_ctor_get(v___x_4371_, 1);
lean_inc(v_pos_4379_);
v_remaining_4380_ = lean_ctor_get(v___x_4371_, 2);
lean_inc(v_remaining_4380_);
v___x_4381_ = lean_nat_dec_eq(v_next_4369_, v_pos_4379_);
if (v___x_4381_ == 0)
{
lean_object* v___x_4382_; lean_object* v___x_4383_; lean_object* v___x_4384_; 
lean_dec(v_remaining_4380_);
lean_dec(v_pos_4379_);
lean_dec(v_value_4378_);
v___x_4382_ = lean_box(0);
v___x_4383_ = lean_box(v___x_4381_);
v___x_4384_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4384_, 0, v___x_4382_);
lean_ctor_set(v___x_4384_, 1, v___x_4383_);
v_fst_4373_ = v___x_4384_;
v_snd_4374_ = v___x_4371_;
goto v___jp_4372_;
}
else
{
lean_object* v___x_4386_; uint8_t v_isShared_4387_; uint8_t v_isSharedCheck_4403_; 
v_isSharedCheck_4403_ = !lean_is_exclusive(v___x_4371_);
if (v_isSharedCheck_4403_ == 0)
{
lean_object* v_unused_4404_; lean_object* v_unused_4405_; lean_object* v_unused_4406_; 
v_unused_4404_ = lean_ctor_get(v___x_4371_, 2);
lean_dec(v_unused_4404_);
v_unused_4405_ = lean_ctor_get(v___x_4371_, 1);
lean_dec(v_unused_4405_);
v_unused_4406_ = lean_ctor_get(v___x_4371_, 0);
lean_dec(v_unused_4406_);
v___x_4386_ = v___x_4371_;
v_isShared_4387_ = v_isSharedCheck_4403_;
goto v_resetjp_4385_;
}
else
{
lean_dec(v___x_4371_);
v___x_4386_ = lean_box(0);
v_isShared_4387_ = v_isSharedCheck_4403_;
goto v_resetjp_4385_;
}
v_resetjp_4385_:
{
lean_object* v___x_4388_; uint8_t v___x_4389_; 
v___x_4388_ = lean_unsigned_to_nat(1u);
v___x_4389_ = lean_nat_dec_eq(v_remaining_4380_, v___x_4388_);
if (v___x_4389_ == 0)
{
lean_object* v___x_4390_; lean_object* v___x_4391_; lean_object* v___x_4392_; lean_object* v___x_4394_; 
v___x_4390_ = lean_box(v___x_4389_);
lean_inc(v_value_4378_);
v___x_4391_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4391_, 0, v_value_4378_);
lean_ctor_set(v___x_4391_, 1, v___x_4390_);
v___x_4392_ = lean_nat_sub(v_remaining_4380_, v___x_4388_);
lean_dec(v_remaining_4380_);
if (v_isShared_4387_ == 0)
{
lean_ctor_set(v___x_4386_, 2, v___x_4392_);
v___x_4394_ = v___x_4386_;
goto v_reusejp_4393_;
}
else
{
lean_object* v_reuseFailAlloc_4395_; 
v_reuseFailAlloc_4395_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_4395_, 0, v_value_4378_);
lean_ctor_set(v_reuseFailAlloc_4395_, 1, v_pos_4379_);
lean_ctor_set(v_reuseFailAlloc_4395_, 2, v___x_4392_);
v___x_4394_ = v_reuseFailAlloc_4395_;
goto v_reusejp_4393_;
}
v_reusejp_4393_:
{
v_fst_4373_ = v___x_4391_;
v_snd_4374_ = v___x_4394_;
goto v___jp_4372_;
}
}
else
{
lean_object* v___x_4396_; lean_object* v___x_4397_; lean_object* v___x_4398_; lean_object* v___x_4399_; lean_object* v___x_4401_; 
lean_dec(v_remaining_4380_);
v___x_4396_ = lean_box(v___x_4381_);
v___x_4397_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4397_, 0, v_value_4378_);
lean_ctor_set(v___x_4397_, 1, v___x_4396_);
v___x_4398_ = lean_box(0);
v___x_4399_ = lean_unsigned_to_nat(0u);
if (v_isShared_4387_ == 0)
{
lean_ctor_set(v___x_4386_, 2, v___x_4399_);
lean_ctor_set(v___x_4386_, 0, v___x_4398_);
v___x_4401_ = v___x_4386_;
goto v_reusejp_4400_;
}
else
{
lean_object* v_reuseFailAlloc_4402_; 
v_reuseFailAlloc_4402_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_4402_, 0, v___x_4398_);
lean_ctor_set(v_reuseFailAlloc_4402_, 1, v_pos_4379_);
lean_ctor_set(v_reuseFailAlloc_4402_, 2, v___x_4399_);
v___x_4401_ = v_reuseFailAlloc_4402_;
goto v_reusejp_4400_;
}
v_reusejp_4400_:
{
v_fst_4373_ = v___x_4397_;
v_snd_4374_ = v___x_4401_;
goto v___jp_4372_;
}
}
}
}
v___jp_4372_:
{
lean_object* v___x_4375_; lean_object* v___x_4376_; lean_object* v___x_4377_; 
v___x_4375_ = lean_st_ref_put(v_slot_4368_, v_snd_4374_);
v___x_4376_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4376_, 0, v_fst_4373_);
v___x_4377_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4377_, 0, v___x_4376_);
return v___x_4377_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getSlotValue___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__0_spec__0_spec__3___redArg___boxed(lean_object* v_slot_4407_, lean_object* v_next_4408_, lean_object* v___y_4409_){
_start:
{
lean_object* v_res_4410_; 
v_res_4410_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getSlotValue___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__0_spec__0_spec__3___redArg(v_slot_4407_, v_next_4408_);
lean_dec(v_next_4408_);
lean_dec(v_slot_4407_);
return v_res_4410_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__0_spec__0___redArg___lam__4(lean_object* v_next_4411_, uint8_t v_a_4412_, lean_object* v___f_4413_, lean_object* v_x_4414_){
_start:
{
if (lean_obj_tag(v_x_4414_) == 0)
{
lean_object* v_a_4416_; lean_object* v___x_4418_; uint8_t v_isShared_4419_; uint8_t v_isSharedCheck_4424_; 
lean_dec_ref(v___f_4413_);
v_a_4416_ = lean_ctor_get(v_x_4414_, 0);
v_isSharedCheck_4424_ = !lean_is_exclusive(v_x_4414_);
if (v_isSharedCheck_4424_ == 0)
{
v___x_4418_ = v_x_4414_;
v_isShared_4419_ = v_isSharedCheck_4424_;
goto v_resetjp_4417_;
}
else
{
lean_inc(v_a_4416_);
lean_dec(v_x_4414_);
v___x_4418_ = lean_box(0);
v_isShared_4419_ = v_isSharedCheck_4424_;
goto v_resetjp_4417_;
}
v_resetjp_4417_:
{
lean_object* v___x_4421_; 
if (v_isShared_4419_ == 0)
{
v___x_4421_ = v___x_4418_;
goto v_reusejp_4420_;
}
else
{
lean_object* v_reuseFailAlloc_4423_; 
v_reuseFailAlloc_4423_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4423_, 0, v_a_4416_);
v___x_4421_ = v_reuseFailAlloc_4423_;
goto v_reusejp_4420_;
}
v_reusejp_4420_:
{
lean_object* v___x_4422_; 
v___x_4422_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4422_, 0, v___x_4421_);
return v___x_4422_;
}
}
}
else
{
lean_object* v_a_4425_; lean_object* v___x_4426_; lean_object* v___x_4427_; lean_object* v___x_4428_; 
v_a_4425_ = lean_ctor_get(v_x_4414_, 0);
lean_inc(v_a_4425_);
lean_dec_ref_known(v_x_4414_, 1);
v___x_4426_ = lean_unsigned_to_nat(0u);
v___x_4427_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getSlotValue___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__0_spec__0_spec__3___redArg(v_a_4425_, v_next_4411_);
lean_dec(v_a_4425_);
v___x_4428_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_4426_, v_a_4412_, v___x_4427_, v___f_4413_);
return v___x_4428_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__0_spec__0___redArg___lam__4___boxed(lean_object* v_next_4429_, lean_object* v_a_4430_, lean_object* v___f_4431_, lean_object* v_x_4432_, lean_object* v___y_4433_){
_start:
{
uint8_t v_a_12641__boxed_4434_; lean_object* v_res_4435_; 
v_a_12641__boxed_4434_ = lean_unbox(v_a_4430_);
v_res_4435_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__0_spec__0___redArg___lam__4(v_next_4429_, v_a_12641__boxed_4434_, v___f_4431_, v_x_4432_);
lean_dec(v_next_4429_);
return v_res_4435_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__0_spec__0___redArg___lam__1(uint8_t v_a_4436_, lean_object* v___f_4437_, lean_object* v_____r_4438_, lean_object* v_st_4439_, lean_object* v___y_4440_){
_start:
{
lean_object* v___x_4442_; lean_object* v___x_4443_; lean_object* v___x_4444_; lean_object* v___x_4445_; 
v___x_4442_ = lean_unsigned_to_nat(0u);
v___x_4443_ = lean_st_ref_swap(v___y_4440_, v_st_4439_);
lean_dec(v___x_4443_);
v___x_4444_ = ((lean_object*)(l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector___redArg___lam__0___closed__1));
v___x_4445_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_4442_, v_a_4436_, v___x_4444_, v___f_4437_);
return v___x_4445_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__0_spec__0___redArg___lam__1___boxed(lean_object* v_a_4446_, lean_object* v___f_4447_, lean_object* v_____r_4448_, lean_object* v_st_4449_, lean_object* v___y_4450_, lean_object* v___y_4451_){
_start:
{
uint8_t v_a_12683__boxed_4452_; lean_object* v_res_4453_; 
v_a_12683__boxed_4452_ = lean_unbox(v_a_4446_);
v_res_4453_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__0_spec__0___redArg___lam__1(v_a_12683__boxed_4452_, v___f_4447_, v_____r_4448_, v_st_4449_, v___y_4450_);
lean_dec(v___y_4450_);
return v_res_4453_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__0_spec__0___redArg___lam__2(lean_object* v_snd_4454_, lean_object* v_waiters_4455_, lean_object* v_capacity_4456_, lean_object* v_size_4457_, lean_object* v_buffer_4458_, lean_object* v_write_4459_, lean_object* v_read_4460_, lean_object* v_receivers_4461_, lean_object* v_nextId_4462_, uint8_t v_closed_4463_, lean_object* v_pos_4464_, lean_object* v___f_4465_, lean_object* v___y_4466_, lean_object* v_x_4467_){
_start:
{
if (lean_obj_tag(v_x_4467_) == 0)
{
lean_object* v_a_4469_; lean_object* v___x_4471_; uint8_t v_isShared_4472_; uint8_t v_isSharedCheck_4477_; 
lean_dec_ref(v___f_4465_);
lean_dec(v_pos_4464_);
lean_dec(v_nextId_4462_);
lean_dec(v_receivers_4461_);
lean_dec(v_read_4460_);
lean_dec(v_write_4459_);
lean_dec_ref(v_buffer_4458_);
lean_dec(v_size_4457_);
lean_dec(v_capacity_4456_);
lean_dec_ref(v_waiters_4455_);
lean_dec_ref(v_snd_4454_);
v_a_4469_ = lean_ctor_get(v_x_4467_, 0);
v_isSharedCheck_4477_ = !lean_is_exclusive(v_x_4467_);
if (v_isSharedCheck_4477_ == 0)
{
v___x_4471_ = v_x_4467_;
v_isShared_4472_ = v_isSharedCheck_4477_;
goto v_resetjp_4470_;
}
else
{
lean_inc(v_a_4469_);
lean_dec(v_x_4467_);
v___x_4471_ = lean_box(0);
v_isShared_4472_ = v_isSharedCheck_4477_;
goto v_resetjp_4470_;
}
v_resetjp_4470_:
{
lean_object* v___x_4474_; 
if (v_isShared_4472_ == 0)
{
v___x_4474_ = v___x_4471_;
goto v_reusejp_4473_;
}
else
{
lean_object* v_reuseFailAlloc_4476_; 
v_reuseFailAlloc_4476_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4476_, 0, v_a_4469_);
v___x_4474_ = v_reuseFailAlloc_4476_;
goto v_reusejp_4473_;
}
v_reusejp_4473_:
{
lean_object* v___x_4475_; 
v___x_4475_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4475_, 0, v___x_4474_);
return v___x_4475_;
}
}
}
else
{
lean_object* v___x_4478_; lean_object* v___x_4479_; lean_object* v___x_4480_; 
lean_dec_ref_known(v_x_4467_, 1);
v___x_4478_ = lean_alloc_ctor(0, 10, 1);
lean_ctor_set(v___x_4478_, 0, v_snd_4454_);
lean_ctor_set(v___x_4478_, 1, v_waiters_4455_);
lean_ctor_set(v___x_4478_, 2, v_capacity_4456_);
lean_ctor_set(v___x_4478_, 3, v_size_4457_);
lean_ctor_set(v___x_4478_, 4, v_buffer_4458_);
lean_ctor_set(v___x_4478_, 5, v_write_4459_);
lean_ctor_set(v___x_4478_, 6, v_read_4460_);
lean_ctor_set(v___x_4478_, 7, v_receivers_4461_);
lean_ctor_set(v___x_4478_, 8, v_nextId_4462_);
lean_ctor_set(v___x_4478_, 9, v_pos_4464_);
lean_ctor_set_uint8(v___x_4478_, sizeof(void*)*10, v_closed_4463_);
v___x_4479_ = lean_box(0);
lean_inc(v___y_4466_);
v___x_4480_ = lean_apply_4(v___f_4465_, v___x_4479_, v___x_4478_, v___y_4466_, lean_box(0));
return v___x_4480_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__0_spec__0___redArg___lam__2___boxed(lean_object* v_snd_4481_, lean_object* v_waiters_4482_, lean_object* v_capacity_4483_, lean_object* v_size_4484_, lean_object* v_buffer_4485_, lean_object* v_write_4486_, lean_object* v_read_4487_, lean_object* v_receivers_4488_, lean_object* v_nextId_4489_, lean_object* v_closed_4490_, lean_object* v_pos_4491_, lean_object* v___f_4492_, lean_object* v___y_4493_, lean_object* v_x_4494_, lean_object* v___y_4495_){
_start:
{
uint8_t v_closed_boxed_4496_; lean_object* v_res_4497_; 
v_closed_boxed_4496_ = lean_unbox(v_closed_4490_);
v_res_4497_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__0_spec__0___redArg___lam__2(v_snd_4481_, v_waiters_4482_, v_capacity_4483_, v_size_4484_, v_buffer_4485_, v_write_4486_, v_read_4487_, v_receivers_4488_, v_nextId_4489_, v_closed_boxed_4496_, v_pos_4491_, v___f_4492_, v___y_4493_, v_x_4494_);
lean_dec(v___y_4493_);
return v_res_4497_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__0_spec__0___redArg___lam__0(lean_object* v_fst_4498_, lean_object* v_x_4499_){
_start:
{
if (lean_obj_tag(v_x_4499_) == 0)
{
lean_object* v_a_4501_; lean_object* v___x_4503_; uint8_t v_isShared_4504_; uint8_t v_isSharedCheck_4509_; 
lean_dec(v_fst_4498_);
v_a_4501_ = lean_ctor_get(v_x_4499_, 0);
v_isSharedCheck_4509_ = !lean_is_exclusive(v_x_4499_);
if (v_isSharedCheck_4509_ == 0)
{
v___x_4503_ = v_x_4499_;
v_isShared_4504_ = v_isSharedCheck_4509_;
goto v_resetjp_4502_;
}
else
{
lean_inc(v_a_4501_);
lean_dec(v_x_4499_);
v___x_4503_ = lean_box(0);
v_isShared_4504_ = v_isSharedCheck_4509_;
goto v_resetjp_4502_;
}
v_resetjp_4502_:
{
lean_object* v___x_4506_; 
if (v_isShared_4504_ == 0)
{
v___x_4506_ = v___x_4503_;
goto v_reusejp_4505_;
}
else
{
lean_object* v_reuseFailAlloc_4508_; 
v_reuseFailAlloc_4508_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4508_, 0, v_a_4501_);
v___x_4506_ = v_reuseFailAlloc_4508_;
goto v_reusejp_4505_;
}
v_reusejp_4505_:
{
lean_object* v___x_4507_; 
v___x_4507_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4507_, 0, v___x_4506_);
return v___x_4507_;
}
}
}
else
{
lean_object* v___x_4511_; uint8_t v_isShared_4512_; uint8_t v_isSharedCheck_4517_; 
v_isSharedCheck_4517_ = !lean_is_exclusive(v_x_4499_);
if (v_isSharedCheck_4517_ == 0)
{
lean_object* v_unused_4518_; 
v_unused_4518_ = lean_ctor_get(v_x_4499_, 0);
lean_dec(v_unused_4518_);
v___x_4511_ = v_x_4499_;
v_isShared_4512_ = v_isSharedCheck_4517_;
goto v_resetjp_4510_;
}
else
{
lean_dec(v_x_4499_);
v___x_4511_ = lean_box(0);
v_isShared_4512_ = v_isSharedCheck_4517_;
goto v_resetjp_4510_;
}
v_resetjp_4510_:
{
lean_object* v___x_4514_; 
if (v_isShared_4512_ == 0)
{
lean_ctor_set(v___x_4511_, 0, v_fst_4498_);
v___x_4514_ = v___x_4511_;
goto v_reusejp_4513_;
}
else
{
lean_object* v_reuseFailAlloc_4516_; 
v_reuseFailAlloc_4516_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4516_, 0, v_fst_4498_);
v___x_4514_ = v_reuseFailAlloc_4516_;
goto v_reusejp_4513_;
}
v_reusejp_4513_:
{
lean_object* v___x_4515_; 
v___x_4515_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4515_, 0, v___x_4514_);
return v___x_4515_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__0_spec__0___redArg___lam__0___boxed(lean_object* v_fst_4519_, lean_object* v_x_4520_, lean_object* v___y_4521_){
_start:
{
lean_object* v_res_4522_; 
v_res_4522_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__0_spec__0___redArg___lam__0(v_fst_4519_, v_x_4520_);
return v_res_4522_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__0_spec__0___redArg___lam__3(uint8_t v_a_4523_, lean_object* v_a_4524_, lean_object* v___y_4525_, uint8_t v___x_4526_, lean_object* v_x_4527_){
_start:
{
if (lean_obj_tag(v_x_4527_) == 0)
{
lean_object* v_a_4529_; lean_object* v___x_4531_; uint8_t v_isShared_4532_; uint8_t v_isSharedCheck_4537_; 
lean_dec_ref(v_a_4524_);
v_a_4529_ = lean_ctor_get(v_x_4527_, 0);
v_isSharedCheck_4537_ = !lean_is_exclusive(v_x_4527_);
if (v_isSharedCheck_4537_ == 0)
{
v___x_4531_ = v_x_4527_;
v_isShared_4532_ = v_isSharedCheck_4537_;
goto v_resetjp_4530_;
}
else
{
lean_inc(v_a_4529_);
lean_dec(v_x_4527_);
v___x_4531_ = lean_box(0);
v_isShared_4532_ = v_isSharedCheck_4537_;
goto v_resetjp_4530_;
}
v_resetjp_4530_:
{
lean_object* v___x_4534_; 
if (v_isShared_4532_ == 0)
{
v___x_4534_ = v___x_4531_;
goto v_reusejp_4533_;
}
else
{
lean_object* v_reuseFailAlloc_4536_; 
v_reuseFailAlloc_4536_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4536_, 0, v_a_4529_);
v___x_4534_ = v_reuseFailAlloc_4536_;
goto v_reusejp_4533_;
}
v_reusejp_4533_:
{
lean_object* v___x_4535_; 
v___x_4535_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4535_, 0, v___x_4534_);
return v___x_4535_;
}
}
}
else
{
lean_object* v_a_4538_; lean_object* v___x_4540_; uint8_t v_isShared_4541_; uint8_t v_isSharedCheck_4585_; 
v_a_4538_ = lean_ctor_get(v_x_4527_, 0);
v_isSharedCheck_4585_ = !lean_is_exclusive(v_x_4527_);
if (v_isSharedCheck_4585_ == 0)
{
v___x_4540_ = v_x_4527_;
v_isShared_4541_ = v_isSharedCheck_4585_;
goto v_resetjp_4539_;
}
else
{
lean_inc(v_a_4538_);
lean_dec(v_x_4527_);
v___x_4540_ = lean_box(0);
v_isShared_4541_ = v_isSharedCheck_4585_;
goto v_resetjp_4539_;
}
v_resetjp_4539_:
{
lean_object* v_fst_4542_; 
v_fst_4542_ = lean_ctor_get(v_a_4538_, 0);
lean_inc(v_fst_4542_);
if (lean_obj_tag(v_fst_4542_) == 1)
{
lean_object* v_snd_4543_; lean_object* v___f_4544_; lean_object* v___x_4545_; lean_object* v___f_4546_; uint8_t v___x_4547_; 
v_snd_4543_ = lean_ctor_get(v_a_4538_, 1);
lean_inc(v_snd_4543_);
lean_dec(v_a_4538_);
v___f_4544_ = lean_alloc_closure((void*)(l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__0_spec__0___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_4544_, 0, v_fst_4542_);
v___x_4545_ = lean_box(v_a_4523_);
lean_inc_ref(v___f_4544_);
v___f_4546_ = lean_alloc_closure((void*)(l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__0_spec__0___redArg___lam__1___boxed), 6, 2);
lean_closure_set(v___f_4546_, 0, v___x_4545_);
lean_closure_set(v___f_4546_, 1, v___f_4544_);
v___x_4547_ = lean_unbox(v_snd_4543_);
lean_dec(v_snd_4543_);
if (v___x_4547_ == 0)
{
lean_object* v___x_4548_; lean_object* v___x_4549_; 
lean_dec_ref(v___f_4546_);
lean_del_object(v___x_4540_);
v___x_4548_ = lean_box(0);
v___x_4549_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__0_spec__0___redArg___lam__1(v_a_4523_, v___f_4544_, v___x_4548_, v_a_4524_, v___y_4525_);
return v___x_4549_;
}
else
{
lean_object* v___x_4550_; lean_object* v_producers_4551_; lean_object* v_waiters_4552_; lean_object* v_capacity_4553_; lean_object* v_size_4554_; lean_object* v_buffer_4555_; lean_object* v_write_4556_; lean_object* v_read_4557_; lean_object* v_receivers_4558_; lean_object* v_nextId_4559_; uint8_t v_closed_4560_; lean_object* v_pos_4561_; lean_object* v___x_4562_; 
v___x_4550_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_dequeue___redArg(v_a_4524_);
v_producers_4551_ = lean_ctor_get(v___x_4550_, 0);
lean_inc_ref(v_producers_4551_);
v_waiters_4552_ = lean_ctor_get(v___x_4550_, 1);
lean_inc_ref(v_waiters_4552_);
v_capacity_4553_ = lean_ctor_get(v___x_4550_, 2);
lean_inc(v_capacity_4553_);
v_size_4554_ = lean_ctor_get(v___x_4550_, 3);
lean_inc(v_size_4554_);
v_buffer_4555_ = lean_ctor_get(v___x_4550_, 4);
lean_inc_ref(v_buffer_4555_);
v_write_4556_ = lean_ctor_get(v___x_4550_, 5);
lean_inc(v_write_4556_);
v_read_4557_ = lean_ctor_get(v___x_4550_, 6);
lean_inc(v_read_4557_);
v_receivers_4558_ = lean_ctor_get(v___x_4550_, 7);
lean_inc(v_receivers_4558_);
v_nextId_4559_ = lean_ctor_get(v___x_4550_, 8);
lean_inc(v_nextId_4559_);
v_closed_4560_ = lean_ctor_get_uint8(v___x_4550_, sizeof(void*)*10);
v_pos_4561_ = lean_ctor_get(v___x_4550_, 9);
lean_inc(v_pos_4561_);
v___x_4562_ = l_Std_Queue_dequeue_x3f___redArg(v_producers_4551_);
if (lean_obj_tag(v___x_4562_) == 1)
{
lean_object* v_val_4563_; lean_object* v___x_4565_; uint8_t v_isShared_4566_; uint8_t v_isSharedCheck_4581_; 
lean_dec_ref(v___x_4550_);
lean_dec_ref(v___f_4544_);
v_val_4563_ = lean_ctor_get(v___x_4562_, 0);
v_isSharedCheck_4581_ = !lean_is_exclusive(v___x_4562_);
if (v_isSharedCheck_4581_ == 0)
{
v___x_4565_ = v___x_4562_;
v_isShared_4566_ = v_isSharedCheck_4581_;
goto v_resetjp_4564_;
}
else
{
lean_inc(v_val_4563_);
lean_dec(v___x_4562_);
v___x_4565_ = lean_box(0);
v_isShared_4566_ = v_isSharedCheck_4581_;
goto v_resetjp_4564_;
}
v_resetjp_4564_:
{
lean_object* v_fst_4567_; lean_object* v_snd_4568_; lean_object* v___x_4569_; lean_object* v___f_4570_; lean_object* v___x_4571_; lean_object* v___x_4572_; lean_object* v___x_4573_; lean_object* v___x_4575_; 
v_fst_4567_ = lean_ctor_get(v_val_4563_, 0);
lean_inc(v_fst_4567_);
v_snd_4568_ = lean_ctor_get(v_val_4563_, 1);
lean_inc(v_snd_4568_);
lean_dec(v_val_4563_);
v___x_4569_ = lean_box(v_closed_4560_);
lean_inc(v___y_4525_);
v___f_4570_ = lean_alloc_closure((void*)(l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__0_spec__0___redArg___lam__2___boxed), 15, 13);
lean_closure_set(v___f_4570_, 0, v_snd_4568_);
lean_closure_set(v___f_4570_, 1, v_waiters_4552_);
lean_closure_set(v___f_4570_, 2, v_capacity_4553_);
lean_closure_set(v___f_4570_, 3, v_size_4554_);
lean_closure_set(v___f_4570_, 4, v_buffer_4555_);
lean_closure_set(v___f_4570_, 5, v_write_4556_);
lean_closure_set(v___f_4570_, 6, v_read_4557_);
lean_closure_set(v___f_4570_, 7, v_receivers_4558_);
lean_closure_set(v___f_4570_, 8, v_nextId_4559_);
lean_closure_set(v___f_4570_, 9, v___x_4569_);
lean_closure_set(v___f_4570_, 10, v_pos_4561_);
lean_closure_set(v___f_4570_, 11, v___f_4546_);
lean_closure_set(v___f_4570_, 12, v___y_4525_);
v___x_4571_ = lean_unsigned_to_nat(0u);
v___x_4572_ = lean_box(v___x_4526_);
v___x_4573_ = lean_io_promise_resolve(v___x_4572_, v_fst_4567_);
lean_dec(v_fst_4567_);
if (v_isShared_4541_ == 0)
{
lean_ctor_set(v___x_4540_, 0, v___x_4573_);
v___x_4575_ = v___x_4540_;
goto v_reusejp_4574_;
}
else
{
lean_object* v_reuseFailAlloc_4580_; 
v_reuseFailAlloc_4580_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4580_, 0, v___x_4573_);
v___x_4575_ = v_reuseFailAlloc_4580_;
goto v_reusejp_4574_;
}
v_reusejp_4574_:
{
lean_object* v___x_4577_; 
if (v_isShared_4566_ == 0)
{
lean_ctor_set_tag(v___x_4565_, 0);
lean_ctor_set(v___x_4565_, 0, v___x_4575_);
v___x_4577_ = v___x_4565_;
goto v_reusejp_4576_;
}
else
{
lean_object* v_reuseFailAlloc_4579_; 
v_reuseFailAlloc_4579_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4579_, 0, v___x_4575_);
v___x_4577_ = v_reuseFailAlloc_4579_;
goto v_reusejp_4576_;
}
v_reusejp_4576_:
{
lean_object* v___x_4578_; 
v___x_4578_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_4571_, v_a_4523_, v___x_4577_, v___f_4570_);
return v___x_4578_;
}
}
}
}
else
{
lean_object* v___x_4582_; lean_object* v___x_4583_; 
lean_dec(v___x_4562_);
lean_dec(v_pos_4561_);
lean_dec(v_nextId_4559_);
lean_dec(v_receivers_4558_);
lean_dec(v_read_4557_);
lean_dec(v_write_4556_);
lean_dec_ref(v_buffer_4555_);
lean_dec(v_size_4554_);
lean_dec(v_capacity_4553_);
lean_dec_ref(v_waiters_4552_);
lean_dec_ref(v___f_4546_);
lean_del_object(v___x_4540_);
v___x_4582_ = lean_box(0);
v___x_4583_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__0_spec__0___redArg___lam__1(v_a_4523_, v___f_4544_, v___x_4582_, v___x_4550_, v___y_4525_);
return v___x_4583_;
}
}
}
else
{
lean_object* v___x_4584_; 
lean_dec(v_fst_4542_);
lean_del_object(v___x_4540_);
lean_dec(v_a_4538_);
lean_dec_ref(v_a_4524_);
v___x_4584_ = ((lean_object*)(l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__0___redArg___lam__1___closed__0));
return v___x_4584_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__0_spec__0___redArg___lam__3___boxed(lean_object* v_a_4586_, lean_object* v_a_4587_, lean_object* v___y_4588_, lean_object* v___x_4589_, lean_object* v_x_4590_, lean_object* v___y_4591_){
_start:
{
uint8_t v_a_12798__boxed_4592_; uint8_t v___x_12801__boxed_4593_; lean_object* v_res_4594_; 
v_a_12798__boxed_4592_ = lean_unbox(v_a_4586_);
v___x_12801__boxed_4593_ = lean_unbox(v___x_4589_);
v_res_4594_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__0_spec__0___redArg___lam__3(v_a_12798__boxed_4592_, v_a_4587_, v___y_4588_, v___x_12801__boxed_4593_, v_x_4590_);
lean_dec(v___y_4588_);
return v_res_4594_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__0_spec__0___redArg___lam__5(lean_object* v_a_4595_, lean_object* v___y_4596_, lean_object* v_next_4597_, lean_object* v_x_4598_){
_start:
{
if (lean_obj_tag(v_x_4598_) == 0)
{
lean_object* v_a_4600_; lean_object* v___x_4602_; uint8_t v_isShared_4603_; uint8_t v_isSharedCheck_4608_; 
lean_dec(v_next_4597_);
lean_dec_ref(v_a_4595_);
v_a_4600_ = lean_ctor_get(v_x_4598_, 0);
v_isSharedCheck_4608_ = !lean_is_exclusive(v_x_4598_);
if (v_isSharedCheck_4608_ == 0)
{
v___x_4602_ = v_x_4598_;
v_isShared_4603_ = v_isSharedCheck_4608_;
goto v_resetjp_4601_;
}
else
{
lean_inc(v_a_4600_);
lean_dec(v_x_4598_);
v___x_4602_ = lean_box(0);
v_isShared_4603_ = v_isSharedCheck_4608_;
goto v_resetjp_4601_;
}
v_resetjp_4601_:
{
lean_object* v___x_4605_; 
if (v_isShared_4603_ == 0)
{
v___x_4605_ = v___x_4602_;
goto v_reusejp_4604_;
}
else
{
lean_object* v_reuseFailAlloc_4607_; 
v_reuseFailAlloc_4607_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4607_, 0, v_a_4600_);
v___x_4605_ = v_reuseFailAlloc_4607_;
goto v_reusejp_4604_;
}
v_reusejp_4604_:
{
lean_object* v___x_4606_; 
v___x_4606_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4606_, 0, v___x_4605_);
return v___x_4606_;
}
}
}
else
{
lean_object* v_a_4609_; uint8_t v___x_4610_; 
v_a_4609_ = lean_ctor_get(v_x_4598_, 0);
lean_inc(v_a_4609_);
lean_dec_ref_known(v_x_4598_, 1);
v___x_4610_ = lean_unbox(v_a_4609_);
if (v___x_4610_ == 0)
{
lean_object* v_capacity_4611_; uint8_t v___x_4612_; lean_object* v___x_4613_; lean_object* v___f_4614_; lean_object* v___f_4615_; lean_object* v___x_4616_; lean_object* v___x_4617_; lean_object* v___x_4618_; uint8_t v___x_4619_; lean_object* v___x_4620_; 
v_capacity_4611_ = lean_ctor_get(v_a_4595_, 2);
lean_inc(v_capacity_4611_);
v___x_4612_ = 1;
v___x_4613_ = lean_box(v___x_4612_);
lean_inc(v___y_4596_);
lean_inc_n(v_a_4609_, 2);
v___f_4614_ = lean_alloc_closure((void*)(l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__0_spec__0___redArg___lam__3___boxed), 6, 4);
lean_closure_set(v___f_4614_, 0, v_a_4609_);
lean_closure_set(v___f_4614_, 1, v_a_4595_);
lean_closure_set(v___f_4614_, 2, v___y_4596_);
lean_closure_set(v___f_4614_, 3, v___x_4613_);
lean_inc(v_next_4597_);
v___f_4615_ = lean_alloc_closure((void*)(l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__0_spec__0___redArg___lam__4___boxed), 5, 3);
lean_closure_set(v___f_4615_, 0, v_next_4597_);
lean_closure_set(v___f_4615_, 1, v_a_4609_);
lean_closure_set(v___f_4615_, 2, v___f_4614_);
v___x_4616_ = lean_nat_mod(v_next_4597_, v_capacity_4611_);
lean_dec(v_capacity_4611_);
lean_dec(v_next_4597_);
v___x_4617_ = lean_unsigned_to_nat(0u);
v___x_4618_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_getSlot___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__1___redArg(v___x_4616_, v___y_4596_);
v___x_4619_ = lean_unbox(v_a_4609_);
lean_dec(v_a_4609_);
v___x_4620_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_4617_, v___x_4619_, v___x_4618_, v___f_4615_);
return v___x_4620_;
}
else
{
lean_object* v___x_4621_; 
lean_dec(v_a_4609_);
lean_dec(v_next_4597_);
lean_dec_ref(v_a_4595_);
v___x_4621_ = ((lean_object*)(l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__0___redArg___lam__1___closed__0));
return v___x_4621_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__0_spec__0___redArg___lam__5___boxed(lean_object* v_a_4622_, lean_object* v___y_4623_, lean_object* v_next_4624_, lean_object* v_x_4625_, lean_object* v___y_4626_){
_start:
{
lean_object* v_res_4627_; 
v_res_4627_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__0_spec__0___redArg___lam__5(v_a_4622_, v___y_4623_, v_next_4624_, v_x_4625_);
lean_dec(v___y_4623_);
return v_res_4627_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__0_spec__0___redArg___lam__6(lean_object* v___y_4628_, lean_object* v_next_4629_, lean_object* v_x_4630_){
_start:
{
if (lean_obj_tag(v_x_4630_) == 0)
{
lean_object* v_a_4632_; lean_object* v___x_4634_; uint8_t v_isShared_4635_; uint8_t v_isSharedCheck_4640_; 
lean_dec(v_next_4629_);
v_a_4632_ = lean_ctor_get(v_x_4630_, 0);
v_isSharedCheck_4640_ = !lean_is_exclusive(v_x_4630_);
if (v_isSharedCheck_4640_ == 0)
{
v___x_4634_ = v_x_4630_;
v_isShared_4635_ = v_isSharedCheck_4640_;
goto v_resetjp_4633_;
}
else
{
lean_inc(v_a_4632_);
lean_dec(v_x_4630_);
v___x_4634_ = lean_box(0);
v_isShared_4635_ = v_isSharedCheck_4640_;
goto v_resetjp_4633_;
}
v_resetjp_4633_:
{
lean_object* v___x_4637_; 
if (v_isShared_4635_ == 0)
{
v___x_4637_ = v___x_4634_;
goto v_reusejp_4636_;
}
else
{
lean_object* v_reuseFailAlloc_4639_; 
v_reuseFailAlloc_4639_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4639_, 0, v_a_4632_);
v___x_4637_ = v_reuseFailAlloc_4639_;
goto v_reusejp_4636_;
}
v_reusejp_4636_:
{
lean_object* v___x_4638_; 
v___x_4638_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4638_, 0, v___x_4637_);
return v___x_4638_;
}
}
}
else
{
lean_object* v_a_4641_; lean_object* v___f_4642_; lean_object* v___x_4643_; uint8_t v___x_4644_; lean_object* v___x_4645_; lean_object* v___x_4646_; 
v_a_4641_ = lean_ctor_get(v_x_4630_, 0);
lean_inc(v_a_4641_);
lean_dec_ref_known(v_x_4630_, 1);
lean_inc(v___y_4628_);
v___f_4642_ = lean_alloc_closure((void*)(l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__0_spec__0___redArg___lam__5___boxed), 5, 3);
lean_closure_set(v___f_4642_, 0, v_a_4641_);
lean_closure_set(v___f_4642_, 1, v___y_4628_);
lean_closure_set(v___f_4642_, 2, v_next_4629_);
v___x_4643_ = lean_unsigned_to_nat(0u);
v___x_4644_ = 0;
v___x_4645_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_isEmpty___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__0_spec__0_spec__4___redArg(v___y_4628_);
v___x_4646_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_4643_, v___x_4644_, v___x_4645_, v___f_4642_);
return v___x_4646_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__0_spec__0___redArg___lam__6___boxed(lean_object* v___y_4647_, lean_object* v_next_4648_, lean_object* v_x_4649_, lean_object* v___y_4650_){
_start:
{
lean_object* v_res_4651_; 
v_res_4651_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__0_spec__0___redArg___lam__6(v___y_4647_, v_next_4648_, v_x_4649_);
lean_dec(v___y_4647_);
return v_res_4651_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__0_spec__0___redArg(lean_object* v_next_4652_, lean_object* v___y_4653_){
_start:
{
lean_object* v___f_4655_; lean_object* v___x_4656_; uint8_t v___x_4657_; lean_object* v___x_4658_; lean_object* v___x_4659_; lean_object* v___x_4660_; lean_object* v___x_4661_; 
lean_inc(v___y_4653_);
v___f_4655_ = lean_alloc_closure((void*)(l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__0_spec__0___redArg___lam__6___boxed), 4, 2);
lean_closure_set(v___f_4655_, 0, v___y_4653_);
lean_closure_set(v___f_4655_, 1, v_next_4652_);
v___x_4656_ = lean_unsigned_to_nat(0u);
v___x_4657_ = 0;
v___x_4658_ = lean_st_ref_get(v___y_4653_);
v___x_4659_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4659_, 0, v___x_4658_);
v___x_4660_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4660_, 0, v___x_4659_);
v___x_4661_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_4656_, v___x_4657_, v___x_4660_, v___f_4655_);
return v___x_4661_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__0_spec__0___redArg___boxed(lean_object* v_next_4662_, lean_object* v___y_4663_, lean_object* v___y_4664_){
_start:
{
lean_object* v_res_4665_; 
v_res_4665_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__0_spec__0___redArg(v_next_4662_, v___y_4663_);
lean_dec(v___y_4663_);
return v_res_4665_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__0___redArg___lam__2(lean_object* v_receiverId_4666_, lean_object* v___y_4667_, lean_object* v_x_4668_){
_start:
{
if (lean_obj_tag(v_x_4668_) == 0)
{
lean_object* v_a_4670_; lean_object* v___x_4672_; uint8_t v_isShared_4673_; uint8_t v_isSharedCheck_4678_; 
lean_dec(v_receiverId_4666_);
v_a_4670_ = lean_ctor_get(v_x_4668_, 0);
v_isSharedCheck_4678_ = !lean_is_exclusive(v_x_4668_);
if (v_isSharedCheck_4678_ == 0)
{
v___x_4672_ = v_x_4668_;
v_isShared_4673_ = v_isSharedCheck_4678_;
goto v_resetjp_4671_;
}
else
{
lean_inc(v_a_4670_);
lean_dec(v_x_4668_);
v___x_4672_ = lean_box(0);
v_isShared_4673_ = v_isSharedCheck_4678_;
goto v_resetjp_4671_;
}
v_resetjp_4671_:
{
lean_object* v___x_4675_; 
if (v_isShared_4673_ == 0)
{
v___x_4675_ = v___x_4672_;
goto v_reusejp_4674_;
}
else
{
lean_object* v_reuseFailAlloc_4677_; 
v_reuseFailAlloc_4677_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4677_, 0, v_a_4670_);
v___x_4675_ = v_reuseFailAlloc_4677_;
goto v_reusejp_4674_;
}
v_reusejp_4674_:
{
lean_object* v___x_4676_; 
v___x_4676_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4676_, 0, v___x_4675_);
return v___x_4676_;
}
}
}
else
{
lean_object* v_a_4679_; lean_object* v_receivers_4680_; lean_object* v___x_4681_; 
v_a_4679_ = lean_ctor_get(v_x_4668_, 0);
lean_inc(v_a_4679_);
lean_dec_ref_known(v_x_4668_, 1);
v_receivers_4680_ = lean_ctor_get(v_a_4679_, 7);
lean_inc(v_receivers_4680_);
lean_dec(v_a_4679_);
v___x_4681_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_unsubscribe_spec__1___redArg(v_receivers_4680_, v_receiverId_4666_);
if (lean_obj_tag(v___x_4681_) == 1)
{
lean_object* v_val_4682_; lean_object* v___f_4683_; lean_object* v___x_4684_; uint8_t v___x_4685_; lean_object* v___x_4686_; lean_object* v___x_4687_; 
v_val_4682_ = lean_ctor_get(v___x_4681_, 0);
lean_inc(v_val_4682_);
lean_dec_ref_known(v___x_4681_, 1);
lean_inc(v___y_4667_);
v___f_4683_ = lean_alloc_closure((void*)(l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__0___redArg___lam__1___boxed), 5, 3);
lean_closure_set(v___f_4683_, 0, v___y_4667_);
lean_closure_set(v___f_4683_, 1, v_receiverId_4666_);
lean_closure_set(v___f_4683_, 2, v_receivers_4680_);
v___x_4684_ = lean_unsigned_to_nat(0u);
v___x_4685_ = 0;
v___x_4686_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__0_spec__0___redArg(v_val_4682_, v___y_4667_);
v___x_4687_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_4684_, v___x_4685_, v___x_4686_, v___f_4683_);
return v___x_4687_;
}
else
{
lean_object* v___x_4688_; 
lean_dec(v___x_4681_);
lean_dec(v_receivers_4680_);
lean_dec(v_receiverId_4666_);
v___x_4688_ = ((lean_object*)(l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__0___redArg___lam__1___closed__0));
return v___x_4688_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__0___redArg___lam__2___boxed(lean_object* v_receiverId_4689_, lean_object* v___y_4690_, lean_object* v_x_4691_, lean_object* v___y_4692_){
_start:
{
lean_object* v_res_4693_; 
v_res_4693_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__0___redArg___lam__2(v_receiverId_4689_, v___y_4690_, v_x_4691_);
lean_dec(v___y_4690_);
return v_res_4693_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__0___redArg(lean_object* v_receiverId_4694_, lean_object* v___y_4695_){
_start:
{
lean_object* v___f_4697_; lean_object* v___x_4698_; uint8_t v___x_4699_; lean_object* v___x_4700_; lean_object* v___x_4701_; lean_object* v___x_4702_; lean_object* v___x_4703_; 
lean_inc(v___y_4695_);
v___f_4697_ = lean_alloc_closure((void*)(l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__0___redArg___lam__2___boxed), 4, 2);
lean_closure_set(v___f_4697_, 0, v_receiverId_4694_);
lean_closure_set(v___f_4697_, 1, v___y_4695_);
v___x_4698_ = lean_unsigned_to_nat(0u);
v___x_4699_ = 0;
v___x_4700_ = lean_st_ref_get(v___y_4695_);
v___x_4701_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4701_, 0, v___x_4700_);
v___x_4702_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4702_, 0, v___x_4701_);
v___x_4703_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_4698_, v___x_4699_, v___x_4702_, v___f_4697_);
return v___x_4703_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__0___redArg___boxed(lean_object* v_receiverId_4704_, lean_object* v___y_4705_, lean_object* v___y_4706_){
_start:
{
lean_object* v_res_4707_; 
v_res_4707_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__0___redArg(v_receiverId_4704_, v___y_4705_);
lean_dec(v___y_4705_);
return v_res_4707_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector___redArg___lam__5(lean_object* v_id_4712_, lean_object* v___y_4713_, lean_object* v___f_4714_, lean_object* v_x_4715_){
_start:
{
if (lean_obj_tag(v_x_4715_) == 0)
{
lean_object* v_a_4717_; lean_object* v___x_4719_; uint8_t v_isShared_4720_; uint8_t v_isSharedCheck_4725_; 
lean_dec_ref(v___f_4714_);
lean_dec(v_id_4712_);
v_a_4717_ = lean_ctor_get(v_x_4715_, 0);
v_isSharedCheck_4725_ = !lean_is_exclusive(v_x_4715_);
if (v_isSharedCheck_4725_ == 0)
{
v___x_4719_ = v_x_4715_;
v_isShared_4720_ = v_isSharedCheck_4725_;
goto v_resetjp_4718_;
}
else
{
lean_inc(v_a_4717_);
lean_dec(v_x_4715_);
v___x_4719_ = lean_box(0);
v_isShared_4720_ = v_isSharedCheck_4725_;
goto v_resetjp_4718_;
}
v_resetjp_4718_:
{
lean_object* v___x_4722_; 
if (v_isShared_4720_ == 0)
{
v___x_4722_ = v___x_4719_;
goto v_reusejp_4721_;
}
else
{
lean_object* v_reuseFailAlloc_4724_; 
v_reuseFailAlloc_4724_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4724_, 0, v_a_4717_);
v___x_4722_ = v_reuseFailAlloc_4724_;
goto v_reusejp_4721_;
}
v_reusejp_4721_:
{
lean_object* v___x_4723_; 
v___x_4723_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4723_, 0, v___x_4722_);
return v___x_4723_;
}
}
}
else
{
lean_object* v_a_4726_; uint8_t v___x_4727_; 
v_a_4726_ = lean_ctor_get(v_x_4715_, 0);
lean_inc(v_a_4726_);
lean_dec_ref_known(v_x_4715_, 1);
v___x_4727_ = lean_unbox(v_a_4726_);
lean_dec(v_a_4726_);
if (v___x_4727_ == 0)
{
lean_object* v___x_4728_; 
lean_dec_ref(v___f_4714_);
lean_dec(v_id_4712_);
v___x_4728_ = ((lean_object*)(l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector___redArg___lam__5___closed__1));
return v___x_4728_;
}
else
{
lean_object* v___x_4729_; uint8_t v___x_4730_; lean_object* v___x_4731_; lean_object* v___x_4732_; 
v___x_4729_ = lean_unsigned_to_nat(0u);
v___x_4730_ = 0;
v___x_4731_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__0___redArg(v_id_4712_, v___y_4713_);
v___x_4732_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_4729_, v___x_4730_, v___x_4731_, v___f_4714_);
return v___x_4732_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector___redArg___lam__5___boxed(lean_object* v_id_4733_, lean_object* v___y_4734_, lean_object* v___f_4735_, lean_object* v_x_4736_, lean_object* v___y_4737_){
_start:
{
lean_object* v_res_4738_; 
v_res_4738_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector___redArg___lam__5(v_id_4733_, v___y_4734_, v___f_4735_, v_x_4736_);
lean_dec(v___y_4734_);
return v_res_4738_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector___redArg___lam__6(lean_object* v_val_4739_, lean_object* v_x_4740_){
_start:
{
if (lean_obj_tag(v_x_4740_) == 0)
{
lean_object* v_a_4742_; lean_object* v___x_4744_; uint8_t v_isShared_4745_; uint8_t v_isSharedCheck_4750_; 
v_a_4742_ = lean_ctor_get(v_x_4740_, 0);
v_isSharedCheck_4750_ = !lean_is_exclusive(v_x_4740_);
if (v_isSharedCheck_4750_ == 0)
{
v___x_4744_ = v_x_4740_;
v_isShared_4745_ = v_isSharedCheck_4750_;
goto v_resetjp_4743_;
}
else
{
lean_inc(v_a_4742_);
lean_dec(v_x_4740_);
v___x_4744_ = lean_box(0);
v_isShared_4745_ = v_isSharedCheck_4750_;
goto v_resetjp_4743_;
}
v_resetjp_4743_:
{
lean_object* v___x_4747_; 
if (v_isShared_4745_ == 0)
{
v___x_4747_ = v___x_4744_;
goto v_reusejp_4746_;
}
else
{
lean_object* v_reuseFailAlloc_4749_; 
v_reuseFailAlloc_4749_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4749_, 0, v_a_4742_);
v___x_4747_ = v_reuseFailAlloc_4749_;
goto v_reusejp_4746_;
}
v_reusejp_4746_:
{
lean_object* v___x_4748_; 
v___x_4748_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4748_, 0, v___x_4747_);
return v___x_4748_;
}
}
}
else
{
lean_object* v_a_4751_; lean_object* v___x_4753_; uint8_t v_isShared_4754_; uint8_t v_isSharedCheck_4762_; 
v_a_4751_ = lean_ctor_get(v_x_4740_, 0);
v_isSharedCheck_4762_ = !lean_is_exclusive(v_x_4740_);
if (v_isSharedCheck_4762_ == 0)
{
v___x_4753_ = v_x_4740_;
v_isShared_4754_ = v_isSharedCheck_4762_;
goto v_resetjp_4752_;
}
else
{
lean_inc(v_a_4751_);
lean_dec(v_x_4740_);
v___x_4753_ = lean_box(0);
v_isShared_4754_ = v_isSharedCheck_4762_;
goto v_resetjp_4752_;
}
v_resetjp_4752_:
{
lean_object* v_pos_4755_; uint8_t v___x_4756_; lean_object* v___x_4757_; lean_object* v___x_4759_; 
v_pos_4755_ = lean_ctor_get(v_a_4751_, 1);
lean_inc(v_pos_4755_);
lean_dec(v_a_4751_);
v___x_4756_ = lean_nat_dec_eq(v_pos_4755_, v_val_4739_);
lean_dec(v_pos_4755_);
v___x_4757_ = lean_box(v___x_4756_);
if (v_isShared_4754_ == 0)
{
lean_ctor_set(v___x_4753_, 0, v___x_4757_);
v___x_4759_ = v___x_4753_;
goto v_reusejp_4758_;
}
else
{
lean_object* v_reuseFailAlloc_4761_; 
v_reuseFailAlloc_4761_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4761_, 0, v___x_4757_);
v___x_4759_ = v_reuseFailAlloc_4761_;
goto v_reusejp_4758_;
}
v_reusejp_4758_:
{
lean_object* v___x_4760_; 
v___x_4760_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4760_, 0, v___x_4759_);
return v___x_4760_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector___redArg___lam__6___boxed(lean_object* v_val_4763_, lean_object* v_x_4764_, lean_object* v___y_4765_){
_start:
{
lean_object* v_res_4766_; 
v_res_4766_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector___redArg___lam__6(v_val_4763_, v_x_4764_);
lean_dec(v_val_4763_);
return v_res_4766_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector___redArg___lam__7(lean_object* v___x_4767_, uint8_t v_closed_4768_, lean_object* v___f_4769_, lean_object* v_x_4770_){
_start:
{
if (lean_obj_tag(v_x_4770_) == 0)
{
lean_object* v_a_4772_; lean_object* v___x_4774_; uint8_t v_isShared_4775_; uint8_t v_isSharedCheck_4780_; 
lean_dec_ref(v___f_4769_);
lean_dec(v___x_4767_);
v_a_4772_ = lean_ctor_get(v_x_4770_, 0);
v_isSharedCheck_4780_ = !lean_is_exclusive(v_x_4770_);
if (v_isSharedCheck_4780_ == 0)
{
v___x_4774_ = v_x_4770_;
v_isShared_4775_ = v_isSharedCheck_4780_;
goto v_resetjp_4773_;
}
else
{
lean_inc(v_a_4772_);
lean_dec(v_x_4770_);
v___x_4774_ = lean_box(0);
v_isShared_4775_ = v_isSharedCheck_4780_;
goto v_resetjp_4773_;
}
v_resetjp_4773_:
{
lean_object* v___x_4777_; 
if (v_isShared_4775_ == 0)
{
v___x_4777_ = v___x_4774_;
goto v_reusejp_4776_;
}
else
{
lean_object* v_reuseFailAlloc_4779_; 
v_reuseFailAlloc_4779_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4779_, 0, v_a_4772_);
v___x_4777_ = v_reuseFailAlloc_4779_;
goto v_reusejp_4776_;
}
v_reusejp_4776_:
{
lean_object* v___x_4778_; 
v___x_4778_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4778_, 0, v___x_4777_);
return v___x_4778_;
}
}
}
else
{
lean_object* v_a_4781_; lean_object* v___x_4783_; uint8_t v_isShared_4784_; uint8_t v_isSharedCheck_4791_; 
v_a_4781_ = lean_ctor_get(v_x_4770_, 0);
v_isSharedCheck_4791_ = !lean_is_exclusive(v_x_4770_);
if (v_isSharedCheck_4791_ == 0)
{
v___x_4783_ = v_x_4770_;
v_isShared_4784_ = v_isSharedCheck_4791_;
goto v_resetjp_4782_;
}
else
{
lean_inc(v_a_4781_);
lean_dec(v_x_4770_);
v___x_4783_ = lean_box(0);
v_isShared_4784_ = v_isSharedCheck_4791_;
goto v_resetjp_4782_;
}
v_resetjp_4782_:
{
lean_object* v___x_4785_; lean_object* v___x_4787_; 
v___x_4785_ = lean_st_ref_get(v_a_4781_);
lean_dec(v_a_4781_);
if (v_isShared_4784_ == 0)
{
lean_ctor_set(v___x_4783_, 0, v___x_4785_);
v___x_4787_ = v___x_4783_;
goto v_reusejp_4786_;
}
else
{
lean_object* v_reuseFailAlloc_4790_; 
v_reuseFailAlloc_4790_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4790_, 0, v___x_4785_);
v___x_4787_ = v_reuseFailAlloc_4790_;
goto v_reusejp_4786_;
}
v_reusejp_4786_:
{
lean_object* v___x_4788_; lean_object* v___x_4789_; 
v___x_4788_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4788_, 0, v___x_4787_);
v___x_4789_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_4767_, v_closed_4768_, v___x_4788_, v___f_4769_);
return v___x_4789_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector___redArg___lam__7___boxed(lean_object* v___x_4792_, lean_object* v_closed_4793_, lean_object* v___f_4794_, lean_object* v_x_4795_, lean_object* v___y_4796_){
_start:
{
uint8_t v_closed_boxed_4797_; lean_object* v_res_4798_; 
v_closed_boxed_4797_ = lean_unbox(v_closed_4793_);
v_res_4798_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector___redArg___lam__7(v___x_4792_, v_closed_boxed_4797_, v___f_4794_, v_x_4795_);
return v_res_4798_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector___redArg___lam__8(lean_object* v_id_4799_, lean_object* v___x_4800_, lean_object* v___y_4801_, lean_object* v_x_4802_){
_start:
{
if (lean_obj_tag(v_x_4802_) == 0)
{
lean_object* v_a_4804_; lean_object* v___x_4806_; uint8_t v_isShared_4807_; uint8_t v_isSharedCheck_4812_; 
lean_dec(v___x_4800_);
v_a_4804_ = lean_ctor_get(v_x_4802_, 0);
v_isSharedCheck_4812_ = !lean_is_exclusive(v_x_4802_);
if (v_isSharedCheck_4812_ == 0)
{
v___x_4806_ = v_x_4802_;
v_isShared_4807_ = v_isSharedCheck_4812_;
goto v_resetjp_4805_;
}
else
{
lean_inc(v_a_4804_);
lean_dec(v_x_4802_);
v___x_4806_ = lean_box(0);
v_isShared_4807_ = v_isSharedCheck_4812_;
goto v_resetjp_4805_;
}
v_resetjp_4805_:
{
lean_object* v___x_4809_; 
if (v_isShared_4807_ == 0)
{
v___x_4809_ = v___x_4806_;
goto v_reusejp_4808_;
}
else
{
lean_object* v_reuseFailAlloc_4811_; 
v_reuseFailAlloc_4811_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4811_, 0, v_a_4804_);
v___x_4809_ = v_reuseFailAlloc_4811_;
goto v_reusejp_4808_;
}
v_reusejp_4808_:
{
lean_object* v___x_4810_; 
v___x_4810_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4810_, 0, v___x_4809_);
return v___x_4810_;
}
}
}
else
{
lean_object* v_a_4813_; lean_object* v___x_4815_; uint8_t v_isShared_4816_; uint8_t v_isSharedCheck_4851_; 
v_a_4813_ = lean_ctor_get(v_x_4802_, 0);
v_isSharedCheck_4851_ = !lean_is_exclusive(v_x_4802_);
if (v_isSharedCheck_4851_ == 0)
{
v___x_4815_ = v_x_4802_;
v_isShared_4816_ = v_isSharedCheck_4851_;
goto v_resetjp_4814_;
}
else
{
lean_inc(v_a_4813_);
lean_dec(v_x_4802_);
v___x_4815_ = lean_box(0);
v_isShared_4816_ = v_isSharedCheck_4851_;
goto v_resetjp_4814_;
}
v_resetjp_4814_:
{
uint8_t v_closed_4817_; 
v_closed_4817_ = lean_ctor_get_uint8(v_a_4813_, sizeof(void*)*10);
if (v_closed_4817_ == 0)
{
lean_object* v_capacity_4818_; lean_object* v_size_4819_; lean_object* v_receivers_4820_; lean_object* v___x_4821_; 
v_capacity_4818_ = lean_ctor_get(v_a_4813_, 2);
lean_inc(v_capacity_4818_);
v_size_4819_ = lean_ctor_get(v_a_4813_, 3);
lean_inc(v_size_4819_);
v_receivers_4820_ = lean_ctor_get(v_a_4813_, 7);
lean_inc(v_receivers_4820_);
lean_dec(v_a_4813_);
v___x_4821_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_unsubscribe_spec__1___redArg(v_receivers_4820_, v_id_4799_);
lean_dec(v_receivers_4820_);
if (lean_obj_tag(v___x_4821_) == 1)
{
lean_object* v_val_4822_; lean_object* v___x_4824_; uint8_t v_isShared_4825_; uint8_t v_isSharedCheck_4840_; 
v_val_4822_ = lean_ctor_get(v___x_4821_, 0);
v_isSharedCheck_4840_ = !lean_is_exclusive(v___x_4821_);
if (v_isSharedCheck_4840_ == 0)
{
v___x_4824_ = v___x_4821_;
v_isShared_4825_ = v_isSharedCheck_4840_;
goto v_resetjp_4823_;
}
else
{
lean_inc(v_val_4822_);
lean_dec(v___x_4821_);
v___x_4824_ = lean_box(0);
v_isShared_4825_ = v_isSharedCheck_4840_;
goto v_resetjp_4823_;
}
v_resetjp_4823_:
{
uint8_t v___x_4826_; 
v___x_4826_ = lean_nat_dec_eq(v_size_4819_, v___x_4800_);
lean_dec(v_size_4819_);
if (v___x_4826_ == 0)
{
lean_object* v___f_4827_; lean_object* v___x_4828_; lean_object* v___f_4829_; lean_object* v___x_4830_; lean_object* v___x_4831_; lean_object* v___x_4832_; 
lean_del_object(v___x_4824_);
lean_del_object(v___x_4815_);
lean_inc(v_val_4822_);
v___f_4827_ = lean_alloc_closure((void*)(l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector___redArg___lam__6___boxed), 3, 1);
lean_closure_set(v___f_4827_, 0, v_val_4822_);
v___x_4828_ = lean_box(v_closed_4817_);
lean_inc(v___x_4800_);
v___f_4829_ = lean_alloc_closure((void*)(l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector___redArg___lam__7___boxed), 5, 3);
lean_closure_set(v___f_4829_, 0, v___x_4800_);
lean_closure_set(v___f_4829_, 1, v___x_4828_);
lean_closure_set(v___f_4829_, 2, v___f_4827_);
v___x_4830_ = lean_nat_mod(v_val_4822_, v_capacity_4818_);
lean_dec(v_capacity_4818_);
lean_dec(v_val_4822_);
v___x_4831_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_getSlot___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__1___redArg(v___x_4830_, v___y_4801_);
v___x_4832_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_4800_, v___x_4826_, v___x_4831_, v___f_4829_);
return v___x_4832_;
}
else
{
lean_object* v___x_4833_; lean_object* v___x_4835_; 
lean_dec(v_val_4822_);
lean_dec(v_capacity_4818_);
lean_dec(v___x_4800_);
v___x_4833_ = lean_box(v_closed_4817_);
if (v_isShared_4816_ == 0)
{
lean_ctor_set(v___x_4815_, 0, v___x_4833_);
v___x_4835_ = v___x_4815_;
goto v_reusejp_4834_;
}
else
{
lean_object* v_reuseFailAlloc_4839_; 
v_reuseFailAlloc_4839_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4839_, 0, v___x_4833_);
v___x_4835_ = v_reuseFailAlloc_4839_;
goto v_reusejp_4834_;
}
v_reusejp_4834_:
{
lean_object* v___x_4837_; 
if (v_isShared_4825_ == 0)
{
lean_ctor_set_tag(v___x_4824_, 0);
lean_ctor_set(v___x_4824_, 0, v___x_4835_);
v___x_4837_ = v___x_4824_;
goto v_reusejp_4836_;
}
else
{
lean_object* v_reuseFailAlloc_4838_; 
v_reuseFailAlloc_4838_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4838_, 0, v___x_4835_);
v___x_4837_ = v_reuseFailAlloc_4838_;
goto v_reusejp_4836_;
}
v_reusejp_4836_:
{
return v___x_4837_;
}
}
}
}
}
else
{
lean_object* v___x_4841_; lean_object* v___x_4843_; 
lean_dec(v___x_4821_);
lean_dec(v_size_4819_);
lean_dec(v_capacity_4818_);
lean_dec(v___x_4800_);
v___x_4841_ = lean_box(v_closed_4817_);
if (v_isShared_4816_ == 0)
{
lean_ctor_set(v___x_4815_, 0, v___x_4841_);
v___x_4843_ = v___x_4815_;
goto v_reusejp_4842_;
}
else
{
lean_object* v_reuseFailAlloc_4845_; 
v_reuseFailAlloc_4845_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4845_, 0, v___x_4841_);
v___x_4843_ = v_reuseFailAlloc_4845_;
goto v_reusejp_4842_;
}
v_reusejp_4842_:
{
lean_object* v___x_4844_; 
v___x_4844_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4844_, 0, v___x_4843_);
return v___x_4844_;
}
}
}
else
{
lean_object* v___x_4846_; lean_object* v___x_4848_; 
lean_dec(v_a_4813_);
lean_dec(v___x_4800_);
v___x_4846_ = lean_box(v_closed_4817_);
if (v_isShared_4816_ == 0)
{
lean_ctor_set(v___x_4815_, 0, v___x_4846_);
v___x_4848_ = v___x_4815_;
goto v_reusejp_4847_;
}
else
{
lean_object* v_reuseFailAlloc_4850_; 
v_reuseFailAlloc_4850_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4850_, 0, v___x_4846_);
v___x_4848_ = v_reuseFailAlloc_4850_;
goto v_reusejp_4847_;
}
v_reusejp_4847_:
{
lean_object* v___x_4849_; 
v___x_4849_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4849_, 0, v___x_4848_);
return v___x_4849_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector___redArg___lam__8___boxed(lean_object* v_id_4852_, lean_object* v___x_4853_, lean_object* v___y_4854_, lean_object* v_x_4855_, lean_object* v___y_4856_){
_start:
{
lean_object* v_res_4857_; 
v_res_4857_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector___redArg___lam__8(v_id_4852_, v___x_4853_, v___y_4854_, v_x_4855_);
lean_dec(v___y_4854_);
lean_dec(v_id_4852_);
return v_res_4857_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector___redArg___lam__9(lean_object* v_id_4858_, lean_object* v___f_4859_, lean_object* v___y_4860_){
_start:
{
lean_object* v___f_4862_; lean_object* v___x_4863_; lean_object* v___f_4864_; uint8_t v___x_4865_; lean_object* v___x_4866_; lean_object* v___x_4867_; lean_object* v___x_4868_; lean_object* v___x_4869_; lean_object* v___x_4870_; 
lean_inc_n(v___y_4860_, 2);
lean_inc(v_id_4858_);
v___f_4862_ = lean_alloc_closure((void*)(l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector___redArg___lam__5___boxed), 5, 3);
lean_closure_set(v___f_4862_, 0, v_id_4858_);
lean_closure_set(v___f_4862_, 1, v___y_4860_);
lean_closure_set(v___f_4862_, 2, v___f_4859_);
v___x_4863_ = lean_unsigned_to_nat(0u);
v___f_4864_ = lean_alloc_closure((void*)(l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector___redArg___lam__8___boxed), 5, 3);
lean_closure_set(v___f_4864_, 0, v_id_4858_);
lean_closure_set(v___f_4864_, 1, v___x_4863_);
lean_closure_set(v___f_4864_, 2, v___y_4860_);
v___x_4865_ = 0;
v___x_4866_ = lean_st_ref_get(v___y_4860_);
v___x_4867_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4867_, 0, v___x_4866_);
v___x_4868_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4868_, 0, v___x_4867_);
v___x_4869_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_4863_, v___x_4865_, v___x_4868_, v___f_4864_);
v___x_4870_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_4863_, v___x_4865_, v___x_4869_, v___f_4862_);
return v___x_4870_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector___redArg___lam__9___boxed(lean_object* v_id_4871_, lean_object* v___f_4872_, lean_object* v___y_4873_, lean_object* v___y_4874_){
_start:
{
lean_object* v_res_4875_; 
v_res_4875_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector___redArg___lam__9(v_id_4871_, v___f_4872_, v___y_4873_);
lean_dec(v___y_4873_);
return v_res_4875_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector___redArg(lean_object* v_ch_4878_){
_start:
{
lean_object* v_state_4879_; lean_object* v_id_4880_; lean_object* v___f_4881_; lean_object* v___f_4882_; lean_object* v___f_4883_; lean_object* v___f_4884_; lean_object* v___x_4885_; lean_object* v___x_4886_; lean_object* v___x_4887_; 
v_state_4879_ = lean_ctor_get(v_ch_4878_, 0);
lean_inc_ref_n(v_state_4879_, 2);
v_id_4880_ = lean_ctor_get(v_ch_4878_, 1);
lean_inc(v_id_4880_);
v___f_4881_ = ((lean_object*)(l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector___redArg___closed__0));
v___f_4882_ = lean_alloc_closure((void*)(l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector___redArg___lam__3___boxed), 3, 1);
lean_closure_set(v___f_4882_, 0, v_ch_4878_);
v___f_4883_ = ((lean_object*)(l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector___redArg___closed__1));
v___f_4884_ = lean_alloc_closure((void*)(l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector___redArg___lam__9___boxed), 4, 2);
lean_closure_set(v___f_4884_, 0, v_id_4880_);
lean_closure_set(v___f_4884_, 1, v___f_4883_);
v___x_4885_ = lean_alloc_closure((void*)(l_Std_Mutex_atomically___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__2___boxed), 5, 4);
lean_closure_set(v___x_4885_, 0, lean_box(0));
lean_closure_set(v___x_4885_, 1, lean_box(0));
lean_closure_set(v___x_4885_, 2, v_state_4879_);
lean_closure_set(v___x_4885_, 3, v___f_4884_);
v___x_4886_ = lean_alloc_closure((void*)(l_Std_Mutex_atomically___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__2___boxed), 5, 4);
lean_closure_set(v___x_4886_, 0, lean_box(0));
lean_closure_set(v___x_4886_, 1, lean_box(0));
lean_closure_set(v___x_4886_, 2, v_state_4879_);
lean_closure_set(v___x_4886_, 3, v___f_4881_);
v___x_4887_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_4887_, 0, v___x_4885_);
lean_ctor_set(v___x_4887_, 1, v___f_4882_);
lean_ctor_set(v___x_4887_, 2, v___x_4886_);
return v___x_4887_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector(lean_object* v_00_u03b1_4888_, lean_object* v_ch_4889_){
_start:
{
lean_object* v___x_4890_; 
v___x_4890_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector___redArg(v_ch_4889_);
return v___x_4890_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__0(lean_object* v_00_u03b1_4891_, lean_object* v_receiverId_4892_, lean_object* v___y_4893_){
_start:
{
lean_object* v___x_4895_; 
v___x_4895_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__0___redArg(v_receiverId_4892_, v___y_4893_);
return v___x_4895_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__0___boxed(lean_object* v_00_u03b1_4896_, lean_object* v_receiverId_4897_, lean_object* v___y_4898_, lean_object* v___y_4899_){
_start:
{
lean_object* v_res_4900_; 
v_res_4900_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__0(v_00_u03b1_4896_, v_receiverId_4897_, v___y_4898_);
lean_dec(v___y_4898_);
return v_res_4900_;
}
}
LEAN_EXPORT lean_object* l_Std_Queue_filterM___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__3(lean_object* v_00_u03b1_4901_, lean_object* v_q_4902_, lean_object* v___y_4903_){
_start:
{
lean_object* v___x_4905_; 
v___x_4905_ = l_Std_Queue_filterM___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__3___redArg(v_q_4902_, v___y_4903_);
return v___x_4905_;
}
}
LEAN_EXPORT lean_object* l_Std_Queue_filterM___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__3___boxed(lean_object* v_00_u03b1_4906_, lean_object* v_q_4907_, lean_object* v___y_4908_, lean_object* v___y_4909_){
_start:
{
lean_object* v_res_4910_; 
v_res_4910_ = l_Std_Queue_filterM___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__3(v_00_u03b1_4906_, v_q_4907_, v___y_4908_);
lean_dec(v___y_4908_);
return v_res_4910_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getSlotValue___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__0_spec__0_spec__3(lean_object* v_00_u03b1_4911_, lean_object* v_slot_4912_, lean_object* v_next_4913_, lean_object* v___y_4914_){
_start:
{
lean_object* v___x_4916_; 
v___x_4916_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getSlotValue___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__0_spec__0_spec__3___redArg(v_slot_4912_, v_next_4913_);
return v___x_4916_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getSlotValue___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__0_spec__0_spec__3___boxed(lean_object* v_00_u03b1_4917_, lean_object* v_slot_4918_, lean_object* v_next_4919_, lean_object* v___y_4920_, lean_object* v___y_4921_){
_start:
{
lean_object* v_res_4922_; 
v_res_4922_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getSlotValue___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__0_spec__0_spec__3(v_00_u03b1_4917_, v_slot_4918_, v_next_4919_, v___y_4920_);
lean_dec(v___y_4920_);
lean_dec(v_next_4919_);
lean_dec(v_slot_4918_);
return v_res_4922_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_isEmpty___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__0_spec__0_spec__4(lean_object* v_00_u03b1_4923_, lean_object* v___y_4924_){
_start:
{
lean_object* v___x_4926_; 
v___x_4926_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_isEmpty___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__0_spec__0_spec__4___redArg(v___y_4924_);
return v___x_4926_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_isEmpty___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__0_spec__0_spec__4___boxed(lean_object* v_00_u03b1_4927_, lean_object* v___y_4928_, lean_object* v___y_4929_){
_start:
{
lean_object* v_res_4930_; 
v_res_4930_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_isEmpty___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__0_spec__0_spec__4(v_00_u03b1_4927_, v___y_4928_);
lean_dec(v___y_4928_);
return v_res_4930_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__0_spec__0(lean_object* v_00_u03b1_4931_, lean_object* v_next_4932_, lean_object* v___y_4933_){
_start:
{
lean_object* v___x_4935_; 
v___x_4935_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__0_spec__0___redArg(v_next_4932_, v___y_4933_);
return v___x_4935_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__0_spec__0___boxed(lean_object* v_00_u03b1_4936_, lean_object* v_next_4937_, lean_object* v___y_4938_, lean_object* v___y_4939_){
_start:
{
lean_object* v_res_4940_; 
v_res_4940_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_getValueByPosition___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv_x27___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__0_spec__0(v_00_u03b1_4936_, v_next_4937_, v___y_4938_);
lean_dec(v___y_4938_);
return v_res_4940_;
}
}
LEAN_EXPORT lean_object* l_List_filterAuxM___at___00Std_Queue_filterM___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__3_spec__4(lean_object* v_00_u03b1_4941_, lean_object* v_x_4942_, lean_object* v_x_4943_, lean_object* v___y_4944_){
_start:
{
lean_object* v___x_4946_; 
v___x_4946_ = l_List_filterAuxM___at___00Std_Queue_filterM___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__3_spec__4___redArg(v_x_4942_, v_x_4943_);
return v___x_4946_;
}
}
LEAN_EXPORT lean_object* l_List_filterAuxM___at___00Std_Queue_filterM___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__3_spec__4___boxed(lean_object* v_00_u03b1_4947_, lean_object* v_x_4948_, lean_object* v_x_4949_, lean_object* v___y_4950_, lean_object* v___y_4951_){
_start:
{
lean_object* v_res_4952_; 
v_res_4952_ = l_List_filterAuxM___at___00Std_Queue_filterM___at___00__private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector_spec__3_spec__4(v_00_u03b1_4947_, v_x_4948_, v_x_4949_, v___y_4950_);
lean_dec(v___y_4950_);
return v_res_4952_;
}
}
static lean_object* _init_l_Std_Broadcast_new___auto__1(void){
_start:
{
lean_object* v___x_4953_; 
v___x_4953_ = lean_obj_once(&l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__26, &l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__26_once, _init_l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__26);
return v___x_4953_;
}
}
LEAN_EXPORT lean_object* l_Std_Broadcast_new___redArg(lean_object* v_capacity_4954_){
_start:
{
lean_object* v___x_4956_; 
v___x_4956_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_new___redArg(v_capacity_4954_);
return v___x_4956_;
}
}
LEAN_EXPORT lean_object* l_Std_Broadcast_new___redArg___boxed(lean_object* v_capacity_4957_, lean_object* v___y_4958_){
_start:
{
lean_object* v_res_4959_; 
v_res_4959_ = l_Std_Broadcast_new___redArg(v_capacity_4957_);
return v_res_4959_;
}
}
LEAN_EXPORT lean_object* l_Std_Broadcast_new(lean_object* v_00_u03b1_4960_, lean_object* v_capacity_4961_, lean_object* v_h_4962_){
_start:
{
lean_object* v___x_4964_; 
v___x_4964_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_new___redArg(v_capacity_4961_);
return v___x_4964_;
}
}
LEAN_EXPORT lean_object* l_Std_Broadcast_new___boxed(lean_object* v_00_u03b1_4965_, lean_object* v_capacity_4966_, lean_object* v_h_4967_, lean_object* v___y_4968_){
_start:
{
lean_object* v_res_4969_; 
v_res_4969_ = l_Std_Broadcast_new(v_00_u03b1_4965_, v_capacity_4966_, v_h_4967_);
return v_res_4969_;
}
}
LEAN_EXPORT lean_object* l_Std_Broadcast_trySend___redArg(lean_object* v_ch_4970_, lean_object* v_v_4971_){
_start:
{
lean_object* v___x_4973_; 
v___x_4973_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_trySend___redArg(v_ch_4970_, v_v_4971_);
return v___x_4973_;
}
}
LEAN_EXPORT lean_object* l_Std_Broadcast_trySend___redArg___boxed(lean_object* v_ch_4974_, lean_object* v_v_4975_, lean_object* v___y_4976_){
_start:
{
lean_object* v_res_4977_; 
v_res_4977_ = l_Std_Broadcast_trySend___redArg(v_ch_4974_, v_v_4975_);
return v_res_4977_;
}
}
LEAN_EXPORT lean_object* l_Std_Broadcast_trySend(lean_object* v_00_u03b1_4978_, lean_object* v_ch_4979_, lean_object* v_v_4980_){
_start:
{
lean_object* v___x_4982_; 
v___x_4982_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_trySend___redArg(v_ch_4979_, v_v_4980_);
return v___x_4982_;
}
}
LEAN_EXPORT lean_object* l_Std_Broadcast_trySend___boxed(lean_object* v_00_u03b1_4983_, lean_object* v_ch_4984_, lean_object* v_v_4985_, lean_object* v___y_4986_){
_start:
{
lean_object* v_res_4987_; 
v_res_4987_ = l_Std_Broadcast_trySend(v_00_u03b1_4983_, v_ch_4984_, v_v_4985_);
return v_res_4987_;
}
}
LEAN_EXPORT lean_object* l_Std_Broadcast_subscribe___redArg(lean_object* v_ch_4988_){
_start:
{
lean_object* v___x_4990_; 
v___x_4990_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_subscribe___redArg(v_ch_4988_);
if (lean_obj_tag(v___x_4990_) == 0)
{
lean_object* v_a_4991_; lean_object* v___x_4993_; uint8_t v_isShared_4994_; uint8_t v_isSharedCheck_4998_; 
v_a_4991_ = lean_ctor_get(v___x_4990_, 0);
v_isSharedCheck_4998_ = !lean_is_exclusive(v___x_4990_);
if (v_isSharedCheck_4998_ == 0)
{
v___x_4993_ = v___x_4990_;
v_isShared_4994_ = v_isSharedCheck_4998_;
goto v_resetjp_4992_;
}
else
{
lean_inc(v_a_4991_);
lean_dec(v___x_4990_);
v___x_4993_ = lean_box(0);
v_isShared_4994_ = v_isSharedCheck_4998_;
goto v_resetjp_4992_;
}
v_resetjp_4992_:
{
lean_object* v___x_4996_; 
if (v_isShared_4994_ == 0)
{
v___x_4996_ = v___x_4993_;
goto v_reusejp_4995_;
}
else
{
lean_object* v_reuseFailAlloc_4997_; 
v_reuseFailAlloc_4997_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4997_, 0, v_a_4991_);
v___x_4996_ = v_reuseFailAlloc_4997_;
goto v_reusejp_4995_;
}
v_reusejp_4995_:
{
return v___x_4996_;
}
}
}
else
{
lean_object* v_a_4999_; lean_object* v___x_5001_; uint8_t v_isShared_5002_; uint8_t v_isSharedCheck_5006_; 
v_a_4999_ = lean_ctor_get(v___x_4990_, 0);
v_isSharedCheck_5006_ = !lean_is_exclusive(v___x_4990_);
if (v_isSharedCheck_5006_ == 0)
{
v___x_5001_ = v___x_4990_;
v_isShared_5002_ = v_isSharedCheck_5006_;
goto v_resetjp_5000_;
}
else
{
lean_inc(v_a_4999_);
lean_dec(v___x_4990_);
v___x_5001_ = lean_box(0);
v_isShared_5002_ = v_isSharedCheck_5006_;
goto v_resetjp_5000_;
}
v_resetjp_5000_:
{
lean_object* v___x_5004_; 
if (v_isShared_5002_ == 0)
{
v___x_5004_ = v___x_5001_;
goto v_reusejp_5003_;
}
else
{
lean_object* v_reuseFailAlloc_5005_; 
v_reuseFailAlloc_5005_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5005_, 0, v_a_4999_);
v___x_5004_ = v_reuseFailAlloc_5005_;
goto v_reusejp_5003_;
}
v_reusejp_5003_:
{
return v___x_5004_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Broadcast_subscribe___redArg___boxed(lean_object* v_ch_5007_, lean_object* v___y_5008_){
_start:
{
lean_object* v_res_5009_; 
v_res_5009_ = l_Std_Broadcast_subscribe___redArg(v_ch_5007_);
return v_res_5009_;
}
}
LEAN_EXPORT lean_object* l_Std_Broadcast_subscribe(lean_object* v_00_u03b1_5010_, lean_object* v_ch_5011_){
_start:
{
lean_object* v___x_5013_; 
v___x_5013_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_subscribe___redArg(v_ch_5011_);
if (lean_obj_tag(v___x_5013_) == 0)
{
lean_object* v_a_5014_; lean_object* v___x_5016_; uint8_t v_isShared_5017_; uint8_t v_isSharedCheck_5021_; 
v_a_5014_ = lean_ctor_get(v___x_5013_, 0);
v_isSharedCheck_5021_ = !lean_is_exclusive(v___x_5013_);
if (v_isSharedCheck_5021_ == 0)
{
v___x_5016_ = v___x_5013_;
v_isShared_5017_ = v_isSharedCheck_5021_;
goto v_resetjp_5015_;
}
else
{
lean_inc(v_a_5014_);
lean_dec(v___x_5013_);
v___x_5016_ = lean_box(0);
v_isShared_5017_ = v_isSharedCheck_5021_;
goto v_resetjp_5015_;
}
v_resetjp_5015_:
{
lean_object* v___x_5019_; 
if (v_isShared_5017_ == 0)
{
v___x_5019_ = v___x_5016_;
goto v_reusejp_5018_;
}
else
{
lean_object* v_reuseFailAlloc_5020_; 
v_reuseFailAlloc_5020_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5020_, 0, v_a_5014_);
v___x_5019_ = v_reuseFailAlloc_5020_;
goto v_reusejp_5018_;
}
v_reusejp_5018_:
{
return v___x_5019_;
}
}
}
else
{
lean_object* v_a_5022_; lean_object* v___x_5024_; uint8_t v_isShared_5025_; uint8_t v_isSharedCheck_5029_; 
v_a_5022_ = lean_ctor_get(v___x_5013_, 0);
v_isSharedCheck_5029_ = !lean_is_exclusive(v___x_5013_);
if (v_isSharedCheck_5029_ == 0)
{
v___x_5024_ = v___x_5013_;
v_isShared_5025_ = v_isSharedCheck_5029_;
goto v_resetjp_5023_;
}
else
{
lean_inc(v_a_5022_);
lean_dec(v___x_5013_);
v___x_5024_ = lean_box(0);
v_isShared_5025_ = v_isSharedCheck_5029_;
goto v_resetjp_5023_;
}
v_resetjp_5023_:
{
lean_object* v___x_5027_; 
if (v_isShared_5025_ == 0)
{
v___x_5027_ = v___x_5024_;
goto v_reusejp_5026_;
}
else
{
lean_object* v_reuseFailAlloc_5028_; 
v_reuseFailAlloc_5028_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5028_, 0, v_a_5022_);
v___x_5027_ = v_reuseFailAlloc_5028_;
goto v_reusejp_5026_;
}
v_reusejp_5026_:
{
return v___x_5027_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Broadcast_subscribe___boxed(lean_object* v_00_u03b1_5030_, lean_object* v_ch_5031_, lean_object* v___y_5032_){
_start:
{
lean_object* v_res_5033_; 
v_res_5033_ = l_Std_Broadcast_subscribe(v_00_u03b1_5030_, v_ch_5031_);
return v_res_5033_;
}
}
LEAN_EXPORT lean_object* l_Std_Broadcast_close___redArg(lean_object* v_ch_5034_){
_start:
{
lean_object* v___x_5036_; 
v___x_5036_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_close___redArg(v_ch_5034_);
if (lean_obj_tag(v___x_5036_) == 0)
{
lean_object* v_a_5037_; lean_object* v___x_5039_; uint8_t v_isShared_5040_; uint8_t v_isSharedCheck_5044_; 
v_a_5037_ = lean_ctor_get(v___x_5036_, 0);
v_isSharedCheck_5044_ = !lean_is_exclusive(v___x_5036_);
if (v_isSharedCheck_5044_ == 0)
{
v___x_5039_ = v___x_5036_;
v_isShared_5040_ = v_isSharedCheck_5044_;
goto v_resetjp_5038_;
}
else
{
lean_inc(v_a_5037_);
lean_dec(v___x_5036_);
v___x_5039_ = lean_box(0);
v_isShared_5040_ = v_isSharedCheck_5044_;
goto v_resetjp_5038_;
}
v_resetjp_5038_:
{
lean_object* v___x_5042_; 
if (v_isShared_5040_ == 0)
{
v___x_5042_ = v___x_5039_;
goto v_reusejp_5041_;
}
else
{
lean_object* v_reuseFailAlloc_5043_; 
v_reuseFailAlloc_5043_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5043_, 0, v_a_5037_);
v___x_5042_ = v_reuseFailAlloc_5043_;
goto v_reusejp_5041_;
}
v_reusejp_5041_:
{
return v___x_5042_;
}
}
}
else
{
lean_object* v_a_5045_; lean_object* v___x_5047_; uint8_t v_isShared_5048_; uint8_t v_isSharedCheck_5062_; 
v_a_5045_ = lean_ctor_get(v___x_5036_, 0);
v_isSharedCheck_5062_ = !lean_is_exclusive(v___x_5036_);
if (v_isSharedCheck_5062_ == 0)
{
v___x_5047_ = v___x_5036_;
v_isShared_5048_ = v_isSharedCheck_5062_;
goto v_resetjp_5046_;
}
else
{
lean_inc(v_a_5045_);
lean_dec(v___x_5036_);
v___x_5047_ = lean_box(0);
v_isShared_5048_ = v_isSharedCheck_5062_;
goto v_resetjp_5046_;
}
v_resetjp_5046_:
{
uint8_t v___x_5049_; 
v___x_5049_ = lean_unbox(v_a_5045_);
lean_dec(v_a_5045_);
switch(v___x_5049_)
{
case 0:
{
lean_object* v___x_5050_; lean_object* v___x_5052_; 
v___x_5050_ = ((lean_object*)(l_Std_instMonadLiftBroadcastIO___lam__0___closed__0));
if (v_isShared_5048_ == 0)
{
lean_ctor_set(v___x_5047_, 0, v___x_5050_);
v___x_5052_ = v___x_5047_;
goto v_reusejp_5051_;
}
else
{
lean_object* v_reuseFailAlloc_5053_; 
v_reuseFailAlloc_5053_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5053_, 0, v___x_5050_);
v___x_5052_ = v_reuseFailAlloc_5053_;
goto v_reusejp_5051_;
}
v_reusejp_5051_:
{
return v___x_5052_;
}
}
case 1:
{
lean_object* v___x_5054_; lean_object* v___x_5056_; 
v___x_5054_ = ((lean_object*)(l_Std_instMonadLiftBroadcastIO___lam__0___closed__1));
if (v_isShared_5048_ == 0)
{
lean_ctor_set(v___x_5047_, 0, v___x_5054_);
v___x_5056_ = v___x_5047_;
goto v_reusejp_5055_;
}
else
{
lean_object* v_reuseFailAlloc_5057_; 
v_reuseFailAlloc_5057_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5057_, 0, v___x_5054_);
v___x_5056_ = v_reuseFailAlloc_5057_;
goto v_reusejp_5055_;
}
v_reusejp_5055_:
{
return v___x_5056_;
}
}
default: 
{
lean_object* v___x_5058_; lean_object* v___x_5060_; 
v___x_5058_ = ((lean_object*)(l_Std_instMonadLiftBroadcastIO___lam__0___closed__2));
if (v_isShared_5048_ == 0)
{
lean_ctor_set(v___x_5047_, 0, v___x_5058_);
v___x_5060_ = v___x_5047_;
goto v_reusejp_5059_;
}
else
{
lean_object* v_reuseFailAlloc_5061_; 
v_reuseFailAlloc_5061_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5061_, 0, v___x_5058_);
v___x_5060_ = v_reuseFailAlloc_5061_;
goto v_reusejp_5059_;
}
v_reusejp_5059_:
{
return v___x_5060_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Broadcast_close___redArg___boxed(lean_object* v_ch_5063_, lean_object* v___y_5064_){
_start:
{
lean_object* v_res_5065_; 
v_res_5065_ = l_Std_Broadcast_close___redArg(v_ch_5063_);
return v_res_5065_;
}
}
LEAN_EXPORT lean_object* l_Std_Broadcast_close(lean_object* v_00_u03b1_5066_, lean_object* v_ch_5067_){
_start:
{
lean_object* v___x_5069_; 
v___x_5069_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_close___redArg(v_ch_5067_);
if (lean_obj_tag(v___x_5069_) == 0)
{
lean_object* v_a_5070_; lean_object* v___x_5072_; uint8_t v_isShared_5073_; uint8_t v_isSharedCheck_5077_; 
v_a_5070_ = lean_ctor_get(v___x_5069_, 0);
v_isSharedCheck_5077_ = !lean_is_exclusive(v___x_5069_);
if (v_isSharedCheck_5077_ == 0)
{
v___x_5072_ = v___x_5069_;
v_isShared_5073_ = v_isSharedCheck_5077_;
goto v_resetjp_5071_;
}
else
{
lean_inc(v_a_5070_);
lean_dec(v___x_5069_);
v___x_5072_ = lean_box(0);
v_isShared_5073_ = v_isSharedCheck_5077_;
goto v_resetjp_5071_;
}
v_resetjp_5071_:
{
lean_object* v___x_5075_; 
if (v_isShared_5073_ == 0)
{
v___x_5075_ = v___x_5072_;
goto v_reusejp_5074_;
}
else
{
lean_object* v_reuseFailAlloc_5076_; 
v_reuseFailAlloc_5076_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5076_, 0, v_a_5070_);
v___x_5075_ = v_reuseFailAlloc_5076_;
goto v_reusejp_5074_;
}
v_reusejp_5074_:
{
return v___x_5075_;
}
}
}
else
{
lean_object* v_a_5078_; lean_object* v___x_5080_; uint8_t v_isShared_5081_; uint8_t v_isSharedCheck_5095_; 
v_a_5078_ = lean_ctor_get(v___x_5069_, 0);
v_isSharedCheck_5095_ = !lean_is_exclusive(v___x_5069_);
if (v_isSharedCheck_5095_ == 0)
{
v___x_5080_ = v___x_5069_;
v_isShared_5081_ = v_isSharedCheck_5095_;
goto v_resetjp_5079_;
}
else
{
lean_inc(v_a_5078_);
lean_dec(v___x_5069_);
v___x_5080_ = lean_box(0);
v_isShared_5081_ = v_isSharedCheck_5095_;
goto v_resetjp_5079_;
}
v_resetjp_5079_:
{
uint8_t v___x_5082_; 
v___x_5082_ = lean_unbox(v_a_5078_);
lean_dec(v_a_5078_);
switch(v___x_5082_)
{
case 0:
{
lean_object* v___x_5083_; lean_object* v___x_5085_; 
v___x_5083_ = ((lean_object*)(l_Std_instMonadLiftBroadcastIO___lam__0___closed__0));
if (v_isShared_5081_ == 0)
{
lean_ctor_set(v___x_5080_, 0, v___x_5083_);
v___x_5085_ = v___x_5080_;
goto v_reusejp_5084_;
}
else
{
lean_object* v_reuseFailAlloc_5086_; 
v_reuseFailAlloc_5086_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5086_, 0, v___x_5083_);
v___x_5085_ = v_reuseFailAlloc_5086_;
goto v_reusejp_5084_;
}
v_reusejp_5084_:
{
return v___x_5085_;
}
}
case 1:
{
lean_object* v___x_5087_; lean_object* v___x_5089_; 
v___x_5087_ = ((lean_object*)(l_Std_instMonadLiftBroadcastIO___lam__0___closed__1));
if (v_isShared_5081_ == 0)
{
lean_ctor_set(v___x_5080_, 0, v___x_5087_);
v___x_5089_ = v___x_5080_;
goto v_reusejp_5088_;
}
else
{
lean_object* v_reuseFailAlloc_5090_; 
v_reuseFailAlloc_5090_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5090_, 0, v___x_5087_);
v___x_5089_ = v_reuseFailAlloc_5090_;
goto v_reusejp_5088_;
}
v_reusejp_5088_:
{
return v___x_5089_;
}
}
default: 
{
lean_object* v___x_5091_; lean_object* v___x_5093_; 
v___x_5091_ = ((lean_object*)(l_Std_instMonadLiftBroadcastIO___lam__0___closed__2));
if (v_isShared_5081_ == 0)
{
lean_ctor_set(v___x_5080_, 0, v___x_5091_);
v___x_5093_ = v___x_5080_;
goto v_reusejp_5092_;
}
else
{
lean_object* v_reuseFailAlloc_5094_; 
v_reuseFailAlloc_5094_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5094_, 0, v___x_5091_);
v___x_5093_ = v_reuseFailAlloc_5094_;
goto v_reusejp_5092_;
}
v_reusejp_5092_:
{
return v___x_5093_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Broadcast_close___boxed(lean_object* v_00_u03b1_5096_, lean_object* v_ch_5097_, lean_object* v___y_5098_){
_start:
{
lean_object* v_res_5099_; 
v_res_5099_ = l_Std_Broadcast_close(v_00_u03b1_5096_, v_ch_5097_);
return v_res_5099_;
}
}
LEAN_EXPORT lean_object* l_Std_Broadcast_send___redArg___lam__0(lean_object* v_x_5100_){
_start:
{
lean_object* v___y_5103_; 
if (lean_obj_tag(v_x_5100_) == 0)
{
lean_object* v_a_5107_; uint8_t v___x_5108_; 
v_a_5107_ = lean_ctor_get(v_x_5100_, 0);
lean_inc(v_a_5107_);
lean_dec_ref_known(v_x_5100_, 1);
v___x_5108_ = lean_unbox(v_a_5107_);
lean_dec(v_a_5107_);
switch(v___x_5108_)
{
case 0:
{
lean_object* v___x_5109_; 
v___x_5109_ = ((lean_object*)(l_Std_instToStringBroadcastError___lam__0___closed__0));
v___y_5103_ = v___x_5109_;
goto v___jp_5102_;
}
case 1:
{
lean_object* v___x_5110_; 
v___x_5110_ = ((lean_object*)(l_Std_instToStringBroadcastError___lam__0___closed__1));
v___y_5103_ = v___x_5110_;
goto v___jp_5102_;
}
default: 
{
lean_object* v___x_5111_; 
v___x_5111_ = ((lean_object*)(l_Std_instToStringBroadcastError___lam__0___closed__2));
v___y_5103_ = v___x_5111_;
goto v___jp_5102_;
}
}
}
else
{
lean_object* v_a_5112_; lean_object* v___x_5114_; uint8_t v_isShared_5115_; uint8_t v_isSharedCheck_5120_; 
v_a_5112_ = lean_ctor_get(v_x_5100_, 0);
v_isSharedCheck_5120_ = !lean_is_exclusive(v_x_5100_);
if (v_isSharedCheck_5120_ == 0)
{
v___x_5114_ = v_x_5100_;
v_isShared_5115_ = v_isSharedCheck_5120_;
goto v_resetjp_5113_;
}
else
{
lean_inc(v_a_5112_);
lean_dec(v_x_5100_);
v___x_5114_ = lean_box(0);
v_isShared_5115_ = v_isSharedCheck_5120_;
goto v_resetjp_5113_;
}
v_resetjp_5113_:
{
lean_object* v___x_5117_; 
if (v_isShared_5115_ == 0)
{
v___x_5117_ = v___x_5114_;
goto v_reusejp_5116_;
}
else
{
lean_object* v_reuseFailAlloc_5119_; 
v_reuseFailAlloc_5119_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5119_, 0, v_a_5112_);
v___x_5117_ = v_reuseFailAlloc_5119_;
goto v_reusejp_5116_;
}
v_reusejp_5116_:
{
lean_object* v___x_5118_; 
v___x_5118_ = lean_task_pure(v___x_5117_);
return v___x_5118_;
}
}
}
v___jp_5102_:
{
lean_object* v___x_5104_; lean_object* v___x_5105_; lean_object* v___x_5106_; 
lean_inc_ref(v___y_5103_);
v___x_5104_ = lean_mk_io_user_error(v___y_5103_);
v___x_5105_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5105_, 0, v___x_5104_);
v___x_5106_ = lean_task_pure(v___x_5105_);
return v___x_5106_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Broadcast_send___redArg___lam__0___boxed(lean_object* v_x_5121_, lean_object* v___y_5122_){
_start:
{
lean_object* v_res_5123_; 
v_res_5123_ = l_Std_Broadcast_send___redArg___lam__0(v_x_5121_);
return v_res_5123_;
}
}
LEAN_EXPORT lean_object* l_Std_Broadcast_send___redArg(lean_object* v_ch_5125_, lean_object* v_v_5126_){
_start:
{
lean_object* v___f_5128_; lean_object* v___x_5129_; lean_object* v___x_5130_; uint8_t v___x_5131_; lean_object* v___x_5132_; 
v___f_5128_ = ((lean_object*)(l_Std_Broadcast_send___redArg___closed__0));
v___x_5129_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_send___redArg(v_ch_5125_, v_v_5126_);
v___x_5130_ = lean_unsigned_to_nat(0u);
v___x_5131_ = 1;
v___x_5132_ = lean_io_bind_task(v___x_5129_, v___f_5128_, v___x_5130_, v___x_5131_);
return v___x_5132_;
}
}
LEAN_EXPORT lean_object* l_Std_Broadcast_send___redArg___boxed(lean_object* v_ch_5133_, lean_object* v_v_5134_, lean_object* v___y_5135_){
_start:
{
lean_object* v_res_5136_; 
v_res_5136_ = l_Std_Broadcast_send___redArg(v_ch_5133_, v_v_5134_);
return v_res_5136_;
}
}
LEAN_EXPORT lean_object* l_Std_Broadcast_send(lean_object* v_00_u03b1_5137_, lean_object* v_ch_5138_, lean_object* v_v_5139_){
_start:
{
lean_object* v___f_5141_; lean_object* v___x_5142_; lean_object* v___x_5143_; uint8_t v___x_5144_; lean_object* v___x_5145_; 
v___f_5141_ = ((lean_object*)(l_Std_Broadcast_send___redArg___closed__0));
v___x_5142_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_send___redArg(v_ch_5138_, v_v_5139_);
v___x_5143_ = lean_unsigned_to_nat(0u);
v___x_5144_ = 1;
v___x_5145_ = lean_io_bind_task(v___x_5142_, v___f_5141_, v___x_5143_, v___x_5144_);
return v___x_5145_;
}
}
LEAN_EXPORT lean_object* l_Std_Broadcast_send___boxed(lean_object* v_00_u03b1_5146_, lean_object* v_ch_5147_, lean_object* v_v_5148_, lean_object* v___y_5149_){
_start:
{
lean_object* v_res_5150_; 
v_res_5150_ = l_Std_Broadcast_send(v_00_u03b1_5146_, v_ch_5147_, v_v_5148_);
return v_res_5150_;
}
}
LEAN_EXPORT lean_object* l_Std_Broadcast_Receiver_tryRecv___redArg(lean_object* v_ch_5151_){
_start:
{
lean_object* v___x_5153_; 
v___x_5153_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv___redArg(v_ch_5151_);
return v___x_5153_;
}
}
LEAN_EXPORT lean_object* l_Std_Broadcast_Receiver_tryRecv___redArg___boxed(lean_object* v_ch_5154_, lean_object* v___y_5155_){
_start:
{
lean_object* v_res_5156_; 
v_res_5156_ = l_Std_Broadcast_Receiver_tryRecv___redArg(v_ch_5154_);
return v_res_5156_;
}
}
LEAN_EXPORT lean_object* l_Std_Broadcast_Receiver_tryRecv(lean_object* v_00_u03b1_5157_, lean_object* v_ch_5158_){
_start:
{
lean_object* v___x_5160_; 
v___x_5160_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv___redArg(v_ch_5158_);
return v___x_5160_;
}
}
LEAN_EXPORT lean_object* l_Std_Broadcast_Receiver_tryRecv___boxed(lean_object* v_00_u03b1_5161_, lean_object* v_ch_5162_, lean_object* v___y_5163_){
_start:
{
lean_object* v_res_5164_; 
v_res_5164_ = l_Std_Broadcast_Receiver_tryRecv(v_00_u03b1_5161_, v_ch_5162_);
return v_res_5164_;
}
}
LEAN_EXPORT lean_object* l_Std_Broadcast_Receiver_recv___redArg(lean_object* v_ch_5165_){
_start:
{
lean_object* v___x_5167_; 
v___x_5167_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recv___redArg(v_ch_5165_);
return v___x_5167_;
}
}
LEAN_EXPORT lean_object* l_Std_Broadcast_Receiver_recv___redArg___boxed(lean_object* v_ch_5168_, lean_object* v___y_5169_){
_start:
{
lean_object* v_res_5170_; 
v_res_5170_ = l_Std_Broadcast_Receiver_recv___redArg(v_ch_5168_);
return v_res_5170_;
}
}
LEAN_EXPORT lean_object* l_Std_Broadcast_Receiver_recv(lean_object* v_00_u03b1_5171_, lean_object* v_inst_5172_, lean_object* v_ch_5173_){
_start:
{
lean_object* v___x_5175_; 
v___x_5175_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recv___redArg(v_ch_5173_);
return v___x_5175_;
}
}
LEAN_EXPORT lean_object* l_Std_Broadcast_Receiver_recv___boxed(lean_object* v_00_u03b1_5176_, lean_object* v_inst_5177_, lean_object* v_ch_5178_, lean_object* v___y_5179_){
_start:
{
lean_object* v_res_5180_; 
v_res_5180_ = l_Std_Broadcast_Receiver_recv(v_00_u03b1_5176_, v_inst_5177_, v_ch_5178_);
lean_dec(v_inst_5177_);
return v_res_5180_;
}
}
LEAN_EXPORT lean_object* l_Std_Broadcast_Receiver_recvSelector___redArg(lean_object* v_ch_5181_){
_start:
{
lean_object* v___x_5182_; 
v___x_5182_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector___redArg(v_ch_5181_);
return v___x_5182_;
}
}
LEAN_EXPORT lean_object* l_Std_Broadcast_Receiver_recvSelector(lean_object* v_00_u03b1_5183_, lean_object* v_inst_5184_, lean_object* v_ch_5185_){
_start:
{
lean_object* v___x_5186_; 
v___x_5186_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector___redArg(v_ch_5185_);
return v___x_5186_;
}
}
LEAN_EXPORT lean_object* l_Std_Broadcast_Receiver_recvSelector___boxed(lean_object* v_00_u03b1_5187_, lean_object* v_inst_5188_, lean_object* v_ch_5189_){
_start:
{
lean_object* v_res_5190_; 
v_res_5190_ = l_Std_Broadcast_Receiver_recvSelector(v_00_u03b1_5187_, v_inst_5188_, v_ch_5189_);
lean_dec(v_inst_5188_);
return v_res_5190_;
}
}
LEAN_EXPORT lean_object* l_Std_Broadcast_Receiver_unsubscribe___redArg(lean_object* v_ch_5191_){
_start:
{
lean_object* v___x_5193_; 
v___x_5193_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_unsubscribe___redArg(v_ch_5191_);
return v___x_5193_;
}
}
LEAN_EXPORT lean_object* l_Std_Broadcast_Receiver_unsubscribe___redArg___boxed(lean_object* v_ch_5194_, lean_object* v___y_5195_){
_start:
{
lean_object* v_res_5196_; 
v_res_5196_ = l_Std_Broadcast_Receiver_unsubscribe___redArg(v_ch_5194_);
return v_res_5196_;
}
}
LEAN_EXPORT lean_object* l_Std_Broadcast_Receiver_unsubscribe(lean_object* v_00_u03b1_5197_, lean_object* v_ch_5198_){
_start:
{
lean_object* v___x_5200_; 
v___x_5200_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_unsubscribe___redArg(v_ch_5198_);
return v___x_5200_;
}
}
LEAN_EXPORT lean_object* l_Std_Broadcast_Receiver_unsubscribe___boxed(lean_object* v_00_u03b1_5201_, lean_object* v_ch_5202_, lean_object* v___y_5203_){
_start:
{
lean_object* v_res_5204_; 
v_res_5204_ = l_Std_Broadcast_Receiver_unsubscribe(v_00_u03b1_5201_, v_ch_5202_);
return v_res_5204_;
}
}
LEAN_EXPORT lean_object* l_Std_Broadcast_Receiver_forAsync___redArg(lean_object* v_f_5205_, lean_object* v_ch_5206_, lean_object* v_prio_5207_){
_start:
{
lean_object* v___x_5209_; 
v___x_5209_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_forAsync___redArg(v_f_5205_, v_ch_5206_, v_prio_5207_);
return v___x_5209_;
}
}
LEAN_EXPORT lean_object* l_Std_Broadcast_Receiver_forAsync___redArg___boxed(lean_object* v_f_5210_, lean_object* v_ch_5211_, lean_object* v_prio_5212_, lean_object* v___y_5213_){
_start:
{
lean_object* v_res_5214_; 
v_res_5214_ = l_Std_Broadcast_Receiver_forAsync___redArg(v_f_5210_, v_ch_5211_, v_prio_5212_);
return v_res_5214_;
}
}
LEAN_EXPORT lean_object* l_Std_Broadcast_Receiver_forAsync(lean_object* v_00_u03b1_5215_, lean_object* v_f_5216_, lean_object* v_ch_5217_, lean_object* v_prio_5218_){
_start:
{
lean_object* v___x_5220_; 
v___x_5220_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_forAsync___redArg(v_f_5216_, v_ch_5217_, v_prio_5218_);
return v___x_5220_;
}
}
LEAN_EXPORT lean_object* l_Std_Broadcast_Receiver_forAsync___boxed(lean_object* v_00_u03b1_5221_, lean_object* v_f_5222_, lean_object* v_ch_5223_, lean_object* v_prio_5224_, lean_object* v___y_5225_){
_start:
{
lean_object* v_res_5226_; 
v_res_5226_ = l_Std_Broadcast_Receiver_forAsync(v_00_u03b1_5221_, v_f_5222_, v_ch_5223_, v_prio_5224_);
return v_res_5226_;
}
}
LEAN_EXPORT lean_object* l_Std_Broadcast_Receiver_instAsyncStreamOptionOfInhabited___redArg(){
_start:
{
lean_object* v___x_5233_; 
v___x_5233_ = ((lean_object*)(l_Std_Broadcast_Receiver_instAsyncStreamOptionOfInhabited___redArg___closed__2));
return v___x_5233_;
}
}
LEAN_EXPORT lean_object* l_Std_Broadcast_Receiver_instAsyncStreamOptionOfInhabited___redArg___boxed(lean_object* v___dummy_5234_){
_start:
{
lean_object* v_res_5235_; 
v_res_5235_ = l_Std_Broadcast_Receiver_instAsyncStreamOptionOfInhabited___redArg();
return v_res_5235_;
}
}
static lean_object* _init_l_Std_Broadcast_Receiver_instAsyncStreamOptionOfInhabited___closed__0(void){
_start:
{
lean_object* v___x_5236_; 
v___x_5236_ = l_Std_Broadcast_Receiver_instAsyncStreamOptionOfInhabited___redArg();
return v___x_5236_;
}
}
LEAN_EXPORT lean_object* l_Std_Broadcast_Receiver_instAsyncStreamOptionOfInhabited(lean_object* v_00_u03b1_5237_, lean_object* v_inst_5238_){
_start:
{
lean_object* v___x_5239_; 
v___x_5239_ = lean_obj_once(&l_Std_Broadcast_Receiver_instAsyncStreamOptionOfInhabited___closed__0, &l_Std_Broadcast_Receiver_instAsyncStreamOptionOfInhabited___closed__0_once, _init_l_Std_Broadcast_Receiver_instAsyncStreamOptionOfInhabited___closed__0);
return v___x_5239_;
}
}
LEAN_EXPORT lean_object* l_Std_Broadcast_Receiver_instAsyncStreamOptionOfInhabited___boxed(lean_object* v_00_u03b1_5240_, lean_object* v_inst_5241_){
_start:
{
lean_object* v_res_5242_; 
v_res_5242_ = l_Std_Broadcast_Receiver_instAsyncStreamOptionOfInhabited(v_00_u03b1_5240_, v_inst_5241_);
lean_dec(v_inst_5241_);
return v_res_5242_;
}
}
LEAN_EXPORT lean_object* l_Std_Broadcast_Receiver_instAsyncReadOptionOfInhabited___redArg___lam__0(lean_object* v_a_5243_){
_start:
{
lean_object* v___x_5244_; 
v___x_5244_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5244_, 0, v_a_5243_);
return v___x_5244_;
}
}
LEAN_EXPORT lean_object* l_Std_Broadcast_Receiver_instAsyncReadOptionOfInhabited___redArg___lam__1(lean_object* v___f_5245_, lean_object* v_x_5246_){
_start:
{
if (lean_obj_tag(v_x_5246_) == 0)
{
lean_object* v_a_5248_; lean_object* v___x_5250_; uint8_t v_isShared_5251_; uint8_t v_isSharedCheck_5256_; 
lean_dec_ref(v___f_5245_);
v_a_5248_ = lean_ctor_get(v_x_5246_, 0);
v_isSharedCheck_5256_ = !lean_is_exclusive(v_x_5246_);
if (v_isSharedCheck_5256_ == 0)
{
v___x_5250_ = v_x_5246_;
v_isShared_5251_ = v_isSharedCheck_5256_;
goto v_resetjp_5249_;
}
else
{
lean_inc(v_a_5248_);
lean_dec(v_x_5246_);
v___x_5250_ = lean_box(0);
v_isShared_5251_ = v_isSharedCheck_5256_;
goto v_resetjp_5249_;
}
v_resetjp_5249_:
{
lean_object* v___x_5253_; 
if (v_isShared_5251_ == 0)
{
v___x_5253_ = v___x_5250_;
goto v_reusejp_5252_;
}
else
{
lean_object* v_reuseFailAlloc_5255_; 
v_reuseFailAlloc_5255_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5255_, 0, v_a_5248_);
v___x_5253_ = v_reuseFailAlloc_5255_;
goto v_reusejp_5252_;
}
v_reusejp_5252_:
{
lean_object* v___x_5254_; 
v___x_5254_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5254_, 0, v___x_5253_);
return v___x_5254_;
}
}
}
else
{
lean_object* v_a_5257_; 
v_a_5257_ = lean_ctor_get(v_x_5246_, 0);
lean_inc(v_a_5257_);
lean_dec_ref_known(v_x_5246_, 1);
if (lean_obj_tag(v_a_5257_) == 0)
{
lean_object* v_a_5258_; lean_object* v___x_5260_; uint8_t v_isShared_5261_; uint8_t v_isSharedCheck_5266_; 
lean_dec_ref(v___f_5245_);
v_a_5258_ = lean_ctor_get(v_a_5257_, 0);
v_isSharedCheck_5266_ = !lean_is_exclusive(v_a_5257_);
if (v_isSharedCheck_5266_ == 0)
{
v___x_5260_ = v_a_5257_;
v_isShared_5261_ = v_isSharedCheck_5266_;
goto v_resetjp_5259_;
}
else
{
lean_inc(v_a_5258_);
lean_dec(v_a_5257_);
v___x_5260_ = lean_box(0);
v_isShared_5261_ = v_isSharedCheck_5266_;
goto v_resetjp_5259_;
}
v_resetjp_5259_:
{
lean_object* v___x_5263_; 
if (v_isShared_5261_ == 0)
{
v___x_5263_ = v___x_5260_;
goto v_reusejp_5262_;
}
else
{
lean_object* v_reuseFailAlloc_5265_; 
v_reuseFailAlloc_5265_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5265_, 0, v_a_5258_);
v___x_5263_ = v_reuseFailAlloc_5265_;
goto v_reusejp_5262_;
}
v_reusejp_5262_:
{
lean_object* v___x_5264_; 
v___x_5264_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5264_, 0, v___x_5263_);
return v___x_5264_;
}
}
}
else
{
lean_object* v_a_5267_; lean_object* v___x_5268_; uint8_t v___x_5269_; lean_object* v___x_5270_; lean_object* v___x_5271_; 
v_a_5267_ = lean_ctor_get(v_a_5257_, 0);
lean_inc(v_a_5267_);
lean_dec_ref_known(v_a_5257_, 1);
v___x_5268_ = lean_unsigned_to_nat(0u);
v___x_5269_ = 0;
v___x_5270_ = lean_task_map(v___f_5245_, v_a_5267_, v___x_5268_, v___x_5269_);
v___x_5271_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5271_, 0, v___x_5270_);
return v___x_5271_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Broadcast_Receiver_instAsyncReadOptionOfInhabited___redArg___lam__1___boxed(lean_object* v___f_5272_, lean_object* v_x_5273_, lean_object* v___y_5274_){
_start:
{
lean_object* v_res_5275_; 
v_res_5275_ = l_Std_Broadcast_Receiver_instAsyncReadOptionOfInhabited___redArg___lam__1(v___f_5272_, v_x_5273_);
return v_res_5275_;
}
}
LEAN_EXPORT lean_object* l_Std_Broadcast_Receiver_instAsyncReadOptionOfInhabited___redArg___lam__2(lean_object* v___f_5276_, lean_object* v_receiver_5277_){
_start:
{
lean_object* v___x_5279_; uint8_t v___x_5280_; lean_object* v___x_5281_; lean_object* v___x_5282_; lean_object* v___x_5283_; lean_object* v___x_5284_; lean_object* v___x_5285_; 
v___x_5279_ = lean_unsigned_to_nat(0u);
v___x_5280_ = 0;
v___x_5281_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recv___redArg(v_receiver_5277_);
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
LEAN_EXPORT lean_object* l_Std_Broadcast_Receiver_instAsyncReadOptionOfInhabited___redArg___lam__2___boxed(lean_object* v___f_5286_, lean_object* v_receiver_5287_, lean_object* v___y_5288_){
_start:
{
lean_object* v_res_5289_; 
v_res_5289_ = l_Std_Broadcast_Receiver_instAsyncReadOptionOfInhabited___redArg___lam__2(v___f_5286_, v_receiver_5287_);
return v_res_5289_;
}
}
LEAN_EXPORT lean_object* l_Std_Broadcast_Receiver_instAsyncReadOptionOfInhabited___redArg(){
_start:
{
lean_object* v___f_5296_; 
v___f_5296_ = ((lean_object*)(l_Std_Broadcast_Receiver_instAsyncReadOptionOfInhabited___redArg___closed__2));
return v___f_5296_;
}
}
LEAN_EXPORT lean_object* l_Std_Broadcast_Receiver_instAsyncReadOptionOfInhabited___redArg___boxed(lean_object* v___dummy_5297_){
_start:
{
lean_object* v_res_5298_; 
v_res_5298_ = l_Std_Broadcast_Receiver_instAsyncReadOptionOfInhabited___redArg();
return v_res_5298_;
}
}
static lean_object* _init_l_Std_Broadcast_Receiver_instAsyncReadOptionOfInhabited___closed__0(void){
_start:
{
lean_object* v___x_5299_; 
v___x_5299_ = l_Std_Broadcast_Receiver_instAsyncReadOptionOfInhabited___redArg();
return v___x_5299_;
}
}
LEAN_EXPORT lean_object* l_Std_Broadcast_Receiver_instAsyncReadOptionOfInhabited(lean_object* v_00_u03b1_5300_, lean_object* v_inst_5301_){
_start:
{
lean_object* v___x_5302_; 
v___x_5302_ = lean_obj_once(&l_Std_Broadcast_Receiver_instAsyncReadOptionOfInhabited___closed__0, &l_Std_Broadcast_Receiver_instAsyncReadOptionOfInhabited___closed__0_once, _init_l_Std_Broadcast_Receiver_instAsyncReadOptionOfInhabited___closed__0);
return v___x_5302_;
}
}
LEAN_EXPORT lean_object* l_Std_Broadcast_Receiver_instAsyncReadOptionOfInhabited___boxed(lean_object* v_00_u03b1_5303_, lean_object* v_inst_5304_){
_start:
{
lean_object* v_res_5305_; 
v_res_5305_ = l_Std_Broadcast_Receiver_instAsyncReadOptionOfInhabited(v_00_u03b1_5303_, v_inst_5304_);
lean_dec(v_inst_5304_);
return v_res_5305_;
}
}
LEAN_EXPORT lean_object* l_Std_Broadcast_Receiver_instAsyncWriteOfInhabited___redArg___lam__0(lean_object* v_a_5306_){
_start:
{
lean_object* v___x_5307_; 
v___x_5307_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5307_, 0, v_a_5306_);
return v___x_5307_;
}
}
LEAN_EXPORT lean_object* l_Std_Broadcast_Receiver_instAsyncWriteOfInhabited___redArg___lam__1(lean_object* v___f_5312_, lean_object* v_x_5313_){
_start:
{
if (lean_obj_tag(v_x_5313_) == 0)
{
lean_object* v_a_5315_; lean_object* v___x_5317_; uint8_t v_isShared_5318_; uint8_t v_isSharedCheck_5323_; 
lean_dec_ref(v___f_5312_);
v_a_5315_ = lean_ctor_get(v_x_5313_, 0);
v_isSharedCheck_5323_ = !lean_is_exclusive(v_x_5313_);
if (v_isSharedCheck_5323_ == 0)
{
v___x_5317_ = v_x_5313_;
v_isShared_5318_ = v_isSharedCheck_5323_;
goto v_resetjp_5316_;
}
else
{
lean_inc(v_a_5315_);
lean_dec(v_x_5313_);
v___x_5317_ = lean_box(0);
v_isShared_5318_ = v_isSharedCheck_5323_;
goto v_resetjp_5316_;
}
v_resetjp_5316_:
{
lean_object* v___x_5320_; 
if (v_isShared_5318_ == 0)
{
v___x_5320_ = v___x_5317_;
goto v_reusejp_5319_;
}
else
{
lean_object* v_reuseFailAlloc_5322_; 
v_reuseFailAlloc_5322_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5322_, 0, v_a_5315_);
v___x_5320_ = v_reuseFailAlloc_5322_;
goto v_reusejp_5319_;
}
v_reusejp_5319_:
{
lean_object* v___x_5321_; 
v___x_5321_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5321_, 0, v___x_5320_);
return v___x_5321_;
}
}
}
else
{
lean_object* v_a_5324_; lean_object* v___x_5325_; lean_object* v___x_5326_; uint8_t v___x_5327_; lean_object* v___x_5328_; lean_object* v___x_5329_; lean_object* v___x_5330_; 
v_a_5324_ = lean_ctor_get(v_x_5313_, 0);
lean_inc(v_a_5324_);
lean_dec_ref_known(v_x_5313_, 1);
v___x_5325_ = ((lean_object*)(l_Std_Broadcast_Receiver_instAsyncWriteOfInhabited___redArg___lam__1___closed__1));
v___x_5326_ = lean_unsigned_to_nat(0u);
v___x_5327_ = 0;
v___x_5328_ = lean_task_map(v___f_5312_, v_a_5324_, v___x_5326_, v___x_5327_);
v___x_5329_ = lean_task_map(v___x_5325_, v___x_5328_, v___x_5326_, v___x_5327_);
v___x_5330_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5330_, 0, v___x_5329_);
return v___x_5330_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Broadcast_Receiver_instAsyncWriteOfInhabited___redArg___lam__1___boxed(lean_object* v___f_5331_, lean_object* v_x_5332_, lean_object* v___y_5333_){
_start:
{
lean_object* v_res_5334_; 
v_res_5334_ = l_Std_Broadcast_Receiver_instAsyncWriteOfInhabited___redArg___lam__1(v___f_5331_, v_x_5332_);
return v_res_5334_;
}
}
LEAN_EXPORT lean_object* l_Std_Broadcast_Receiver_instAsyncWriteOfInhabited___redArg___lam__3(lean_object* v___f_5335_, lean_object* v___f_5336_, lean_object* v_receiver_5337_, lean_object* v_x_5338_){
_start:
{
lean_object* v___x_5340_; uint8_t v___x_5341_; lean_object* v___x_5342_; uint8_t v___x_5343_; lean_object* v___x_5344_; lean_object* v___x_5345_; lean_object* v___x_5346_; lean_object* v___x_5347_; 
v___x_5340_ = lean_unsigned_to_nat(0u);
v___x_5341_ = 0;
v___x_5342_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_send___redArg(v_receiver_5337_, v_x_5338_);
v___x_5343_ = 1;
v___x_5344_ = lean_io_bind_task(v___x_5342_, v___f_5335_, v___x_5340_, v___x_5343_);
v___x_5345_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5345_, 0, v___x_5344_);
v___x_5346_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5346_, 0, v___x_5345_);
v___x_5347_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_5340_, v___x_5341_, v___x_5346_, v___f_5336_);
return v___x_5347_;
}
}
LEAN_EXPORT lean_object* l_Std_Broadcast_Receiver_instAsyncWriteOfInhabited___redArg___lam__3___boxed(lean_object* v___f_5348_, lean_object* v___f_5349_, lean_object* v_receiver_5350_, lean_object* v_x_5351_, lean_object* v___y_5352_){
_start:
{
lean_object* v_res_5353_; 
v_res_5353_ = l_Std_Broadcast_Receiver_instAsyncWriteOfInhabited___redArg___lam__3(v___f_5348_, v___f_5349_, v_receiver_5350_, v_x_5351_);
return v_res_5353_;
}
}
LEAN_EXPORT lean_object* l_Std_Broadcast_Receiver_instAsyncWriteOfInhabited___redArg___lam__2(lean_object* v_x_5354_){
_start:
{
lean_object* v___x_5356_; 
v___x_5356_ = ((lean_object*)(l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector___redArg___lam__0___closed__1));
return v___x_5356_;
}
}
LEAN_EXPORT lean_object* l_Std_Broadcast_Receiver_instAsyncWriteOfInhabited___redArg___lam__2___boxed(lean_object* v_x_5357_, lean_object* v___y_5358_){
_start:
{
lean_object* v_res_5359_; 
v_res_5359_ = l_Std_Broadcast_Receiver_instAsyncWriteOfInhabited___redArg___lam__2(v_x_5357_);
lean_dec_ref(v_x_5357_);
return v_res_5359_;
}
}
LEAN_EXPORT lean_object* l_Std_Broadcast_Receiver_instAsyncWriteOfInhabited___redArg___lam__4(lean_object* v___f_5360_, lean_object* v_socket_5361_, lean_object* v_x_5362_, lean_object* v___y_5363_){
_start:
{
lean_object* v___x_5365_; 
v___x_5365_ = lean_apply_3(v___f_5360_, v_socket_5361_, v___y_5363_, lean_box(0));
return v___x_5365_;
}
}
LEAN_EXPORT lean_object* l_Std_Broadcast_Receiver_instAsyncWriteOfInhabited___redArg___lam__4___boxed(lean_object* v___f_5366_, lean_object* v_socket_5367_, lean_object* v_x_5368_, lean_object* v___y_5369_, lean_object* v___y_5370_){
_start:
{
lean_object* v_res_5371_; 
v_res_5371_ = l_Std_Broadcast_Receiver_instAsyncWriteOfInhabited___redArg___lam__4(v___f_5366_, v_socket_5367_, v_x_5368_, v___y_5369_);
return v_res_5371_;
}
}
LEAN_EXPORT lean_object* l_Std_Broadcast_Receiver_instAsyncWriteOfInhabited___redArg___lam__5(lean_object* v___f_5372_, lean_object* v___x_5373_, lean_object* v_socket_5374_, lean_object* v_data_5375_){
_start:
{
lean_object* v___x_5377_; lean_object* v___x_5378_; lean_object* v___x_5379_; uint8_t v___x_5380_; 
v___x_5377_ = lean_unsigned_to_nat(0u);
v___x_5378_ = lean_array_get_size(v_data_5375_);
v___x_5379_ = lean_box(0);
v___x_5380_ = lean_nat_dec_lt(v___x_5377_, v___x_5378_);
if (v___x_5380_ == 0)
{
lean_object* v___x_5381_; 
lean_dec_ref(v_data_5375_);
lean_dec_ref(v_socket_5374_);
lean_dec_ref(v___x_5373_);
lean_dec_ref(v___f_5372_);
v___x_5381_ = ((lean_object*)(l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector___redArg___lam__0___closed__1));
return v___x_5381_;
}
else
{
lean_object* v___f_5382_; uint8_t v___x_5383_; 
v___f_5382_ = lean_alloc_closure((void*)(l_Std_Broadcast_Receiver_instAsyncWriteOfInhabited___redArg___lam__4___boxed), 5, 2);
lean_closure_set(v___f_5382_, 0, v___f_5372_);
lean_closure_set(v___f_5382_, 1, v_socket_5374_);
v___x_5383_ = lean_nat_dec_le(v___x_5378_, v___x_5378_);
if (v___x_5383_ == 0)
{
if (v___x_5380_ == 0)
{
lean_object* v___x_5384_; 
lean_dec_ref(v___f_5382_);
lean_dec_ref(v_data_5375_);
lean_dec_ref(v___x_5373_);
v___x_5384_ = ((lean_object*)(l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recvSelector___redArg___lam__0___closed__1));
return v___x_5384_;
}
else
{
size_t v___x_5385_; size_t v___x_5386_; lean_object* v___x_895__overap_5387_; lean_object* v___x_5388_; 
v___x_5385_ = ((size_t)0ULL);
v___x_5386_ = lean_usize_of_nat(v___x_5378_);
v___x_895__overap_5387_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_5373_, v___f_5382_, v_data_5375_, v___x_5385_, v___x_5386_, v___x_5379_);
v___x_5388_ = lean_apply_1(v___x_895__overap_5387_, lean_box(0));
return v___x_5388_;
}
}
else
{
size_t v___x_5389_; size_t v___x_5390_; lean_object* v___x_898__overap_5391_; lean_object* v___x_5392_; 
v___x_5389_ = ((size_t)0ULL);
v___x_5390_ = lean_usize_of_nat(v___x_5378_);
v___x_898__overap_5391_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_5373_, v___f_5382_, v_data_5375_, v___x_5389_, v___x_5390_, v___x_5379_);
v___x_5392_ = lean_apply_1(v___x_898__overap_5391_, lean_box(0));
return v___x_5392_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Broadcast_Receiver_instAsyncWriteOfInhabited___redArg___lam__5___boxed(lean_object* v___f_5393_, lean_object* v___x_5394_, lean_object* v_socket_5395_, lean_object* v_data_5396_, lean_object* v___y_5397_){
_start:
{
lean_object* v_res_5398_; 
v_res_5398_ = l_Std_Broadcast_Receiver_instAsyncWriteOfInhabited___redArg___lam__5(v___f_5393_, v___x_5394_, v_socket_5395_, v_data_5396_);
return v_res_5398_;
}
}
static lean_object* _init_l_Std_Broadcast_Receiver_instAsyncWriteOfInhabited___redArg___closed__4(void){
_start:
{
lean_object* v___x_5406_; 
v___x_5406_ = l_Std_Async_EAsync_instMonad___redArg();
return v___x_5406_;
}
}
static lean_object* _init_l_Std_Broadcast_Receiver_instAsyncWriteOfInhabited___redArg___closed__5(void){
_start:
{
lean_object* v___x_5407_; lean_object* v___f_5408_; lean_object* v___f_5409_; 
v___x_5407_ = lean_obj_once(&l_Std_Broadcast_Receiver_instAsyncWriteOfInhabited___redArg___closed__4, &l_Std_Broadcast_Receiver_instAsyncWriteOfInhabited___redArg___closed__4_once, _init_l_Std_Broadcast_Receiver_instAsyncWriteOfInhabited___redArg___closed__4);
v___f_5408_ = ((lean_object*)(l_Std_Broadcast_Receiver_instAsyncWriteOfInhabited___redArg___closed__2));
v___f_5409_ = lean_alloc_closure((void*)(l_Std_Broadcast_Receiver_instAsyncWriteOfInhabited___redArg___lam__5___boxed), 5, 2);
lean_closure_set(v___f_5409_, 0, v___f_5408_);
lean_closure_set(v___f_5409_, 1, v___x_5407_);
return v___f_5409_;
}
}
static lean_object* _init_l_Std_Broadcast_Receiver_instAsyncWriteOfInhabited___redArg___closed__6(void){
_start:
{
lean_object* v___f_5410_; lean_object* v___f_5411_; lean_object* v___f_5412_; lean_object* v___x_5413_; 
v___f_5410_ = ((lean_object*)(l_Std_Broadcast_Receiver_instAsyncWriteOfInhabited___redArg___closed__3));
v___f_5411_ = lean_obj_once(&l_Std_Broadcast_Receiver_instAsyncWriteOfInhabited___redArg___closed__5, &l_Std_Broadcast_Receiver_instAsyncWriteOfInhabited___redArg___closed__5_once, _init_l_Std_Broadcast_Receiver_instAsyncWriteOfInhabited___redArg___closed__5);
v___f_5412_ = ((lean_object*)(l_Std_Broadcast_Receiver_instAsyncWriteOfInhabited___redArg___closed__2));
v___x_5413_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_5413_, 0, v___f_5412_);
lean_ctor_set(v___x_5413_, 1, v___f_5411_);
lean_ctor_set(v___x_5413_, 2, v___f_5410_);
return v___x_5413_;
}
}
LEAN_EXPORT lean_object* l_Std_Broadcast_Receiver_instAsyncWriteOfInhabited___redArg(){
_start:
{
lean_object* v___x_5415_; 
v___x_5415_ = lean_obj_once(&l_Std_Broadcast_Receiver_instAsyncWriteOfInhabited___redArg___closed__6, &l_Std_Broadcast_Receiver_instAsyncWriteOfInhabited___redArg___closed__6_once, _init_l_Std_Broadcast_Receiver_instAsyncWriteOfInhabited___redArg___closed__6);
return v___x_5415_;
}
}
LEAN_EXPORT lean_object* l_Std_Broadcast_Receiver_instAsyncWriteOfInhabited___redArg___boxed(lean_object* v___dummy_5416_){
_start:
{
lean_object* v_res_5417_; 
v_res_5417_ = l_Std_Broadcast_Receiver_instAsyncWriteOfInhabited___redArg();
return v_res_5417_;
}
}
static lean_object* _init_l_Std_Broadcast_Receiver_instAsyncWriteOfInhabited___closed__0(void){
_start:
{
lean_object* v___x_5418_; 
v___x_5418_ = l_Std_Broadcast_Receiver_instAsyncWriteOfInhabited___redArg();
return v___x_5418_;
}
}
LEAN_EXPORT lean_object* l_Std_Broadcast_Receiver_instAsyncWriteOfInhabited(lean_object* v_00_u03b1_5419_, lean_object* v_inst_5420_){
_start:
{
lean_object* v___x_5421_; 
v___x_5421_ = lean_obj_once(&l_Std_Broadcast_Receiver_instAsyncWriteOfInhabited___closed__0, &l_Std_Broadcast_Receiver_instAsyncWriteOfInhabited___closed__0_once, _init_l_Std_Broadcast_Receiver_instAsyncWriteOfInhabited___closed__0);
return v___x_5421_;
}
}
LEAN_EXPORT lean_object* l_Std_Broadcast_Receiver_instAsyncWriteOfInhabited___boxed(lean_object* v_00_u03b1_5422_, lean_object* v_inst_5423_){
_start:
{
lean_object* v_res_5424_; 
v_res_5424_ = l_Std_Broadcast_Receiver_instAsyncWriteOfInhabited(v_00_u03b1_5422_, v_inst_5423_);
lean_dec(v_inst_5423_);
return v_res_5424_;
}
}
static lean_object* _init_l_Std_Broadcast_Sync_new___auto__3(void){
_start:
{
lean_object* v___x_5425_; 
v___x_5425_ = lean_obj_once(&l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__26, &l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__26_once, _init_l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1___closed__26);
return v___x_5425_;
}
}
LEAN_EXPORT lean_object* l_Std_Broadcast_Sync_new___redArg(lean_object* v_capacity_5426_){
_start:
{
lean_object* v___x_5428_; 
v___x_5428_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_new___redArg(v_capacity_5426_);
return v___x_5428_;
}
}
LEAN_EXPORT lean_object* l_Std_Broadcast_Sync_new___redArg___boxed(lean_object* v_capacity_5429_, lean_object* v___y_5430_){
_start:
{
lean_object* v_res_5431_; 
v_res_5431_ = l_Std_Broadcast_Sync_new___redArg(v_capacity_5429_);
return v_res_5431_;
}
}
LEAN_EXPORT lean_object* l_Std_Broadcast_Sync_new(lean_object* v_00_u03b1_5432_, lean_object* v_capacity_5433_, lean_object* v_h_5434_){
_start:
{
lean_object* v___x_5436_; 
v___x_5436_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_new___redArg(v_capacity_5433_);
return v___x_5436_;
}
}
LEAN_EXPORT lean_object* l_Std_Broadcast_Sync_new___boxed(lean_object* v_00_u03b1_5437_, lean_object* v_capacity_5438_, lean_object* v_h_5439_, lean_object* v___y_5440_){
_start:
{
lean_object* v_res_5441_; 
v_res_5441_ = l_Std_Broadcast_Sync_new(v_00_u03b1_5437_, v_capacity_5438_, v_h_5439_);
return v_res_5441_;
}
}
LEAN_EXPORT lean_object* l_Std_Broadcast_Sync_trySend___redArg(lean_object* v_ch_5442_, lean_object* v_v_5443_){
_start:
{
lean_object* v___x_5445_; 
v___x_5445_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_trySend___redArg(v_ch_5442_, v_v_5443_);
return v___x_5445_;
}
}
LEAN_EXPORT lean_object* l_Std_Broadcast_Sync_trySend___redArg___boxed(lean_object* v_ch_5446_, lean_object* v_v_5447_, lean_object* v___y_5448_){
_start:
{
lean_object* v_res_5449_; 
v_res_5449_ = l_Std_Broadcast_Sync_trySend___redArg(v_ch_5446_, v_v_5447_);
return v_res_5449_;
}
}
LEAN_EXPORT lean_object* l_Std_Broadcast_Sync_trySend(lean_object* v_00_u03b1_5450_, lean_object* v_ch_5451_, lean_object* v_v_5452_){
_start:
{
lean_object* v___x_5454_; 
v___x_5454_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_trySend___redArg(v_ch_5451_, v_v_5452_);
return v___x_5454_;
}
}
LEAN_EXPORT lean_object* l_Std_Broadcast_Sync_trySend___boxed(lean_object* v_00_u03b1_5455_, lean_object* v_ch_5456_, lean_object* v_v_5457_, lean_object* v___y_5458_){
_start:
{
lean_object* v_res_5459_; 
v_res_5459_ = l_Std_Broadcast_Sync_trySend(v_00_u03b1_5455_, v_ch_5456_, v_v_5457_);
return v_res_5459_;
}
}
LEAN_EXPORT lean_object* l_Std_Broadcast_Sync_subscribe___redArg(lean_object* v_ch_5460_){
_start:
{
lean_object* v___x_5462_; 
v___x_5462_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_subscribe___redArg(v_ch_5460_);
if (lean_obj_tag(v___x_5462_) == 0)
{
lean_object* v_a_5463_; lean_object* v___x_5465_; uint8_t v_isShared_5466_; uint8_t v_isSharedCheck_5470_; 
v_a_5463_ = lean_ctor_get(v___x_5462_, 0);
v_isSharedCheck_5470_ = !lean_is_exclusive(v___x_5462_);
if (v_isSharedCheck_5470_ == 0)
{
v___x_5465_ = v___x_5462_;
v_isShared_5466_ = v_isSharedCheck_5470_;
goto v_resetjp_5464_;
}
else
{
lean_inc(v_a_5463_);
lean_dec(v___x_5462_);
v___x_5465_ = lean_box(0);
v_isShared_5466_ = v_isSharedCheck_5470_;
goto v_resetjp_5464_;
}
v_resetjp_5464_:
{
lean_object* v___x_5468_; 
if (v_isShared_5466_ == 0)
{
v___x_5468_ = v___x_5465_;
goto v_reusejp_5467_;
}
else
{
lean_object* v_reuseFailAlloc_5469_; 
v_reuseFailAlloc_5469_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5469_, 0, v_a_5463_);
v___x_5468_ = v_reuseFailAlloc_5469_;
goto v_reusejp_5467_;
}
v_reusejp_5467_:
{
return v___x_5468_;
}
}
}
else
{
lean_object* v_a_5471_; lean_object* v___x_5473_; uint8_t v_isShared_5474_; uint8_t v_isSharedCheck_5478_; 
v_a_5471_ = lean_ctor_get(v___x_5462_, 0);
v_isSharedCheck_5478_ = !lean_is_exclusive(v___x_5462_);
if (v_isSharedCheck_5478_ == 0)
{
v___x_5473_ = v___x_5462_;
v_isShared_5474_ = v_isSharedCheck_5478_;
goto v_resetjp_5472_;
}
else
{
lean_inc(v_a_5471_);
lean_dec(v___x_5462_);
v___x_5473_ = lean_box(0);
v_isShared_5474_ = v_isSharedCheck_5478_;
goto v_resetjp_5472_;
}
v_resetjp_5472_:
{
lean_object* v___x_5476_; 
if (v_isShared_5474_ == 0)
{
v___x_5476_ = v___x_5473_;
goto v_reusejp_5475_;
}
else
{
lean_object* v_reuseFailAlloc_5477_; 
v_reuseFailAlloc_5477_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5477_, 0, v_a_5471_);
v___x_5476_ = v_reuseFailAlloc_5477_;
goto v_reusejp_5475_;
}
v_reusejp_5475_:
{
return v___x_5476_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Broadcast_Sync_subscribe___redArg___boxed(lean_object* v_ch_5479_, lean_object* v___y_5480_){
_start:
{
lean_object* v_res_5481_; 
v_res_5481_ = l_Std_Broadcast_Sync_subscribe___redArg(v_ch_5479_);
return v_res_5481_;
}
}
LEAN_EXPORT lean_object* l_Std_Broadcast_Sync_subscribe(lean_object* v_00_u03b1_5482_, lean_object* v_ch_5483_){
_start:
{
lean_object* v___x_5485_; 
v___x_5485_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_subscribe___redArg(v_ch_5483_);
if (lean_obj_tag(v___x_5485_) == 0)
{
lean_object* v_a_5486_; lean_object* v___x_5488_; uint8_t v_isShared_5489_; uint8_t v_isSharedCheck_5493_; 
v_a_5486_ = lean_ctor_get(v___x_5485_, 0);
v_isSharedCheck_5493_ = !lean_is_exclusive(v___x_5485_);
if (v_isSharedCheck_5493_ == 0)
{
v___x_5488_ = v___x_5485_;
v_isShared_5489_ = v_isSharedCheck_5493_;
goto v_resetjp_5487_;
}
else
{
lean_inc(v_a_5486_);
lean_dec(v___x_5485_);
v___x_5488_ = lean_box(0);
v_isShared_5489_ = v_isSharedCheck_5493_;
goto v_resetjp_5487_;
}
v_resetjp_5487_:
{
lean_object* v___x_5491_; 
if (v_isShared_5489_ == 0)
{
v___x_5491_ = v___x_5488_;
goto v_reusejp_5490_;
}
else
{
lean_object* v_reuseFailAlloc_5492_; 
v_reuseFailAlloc_5492_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5492_, 0, v_a_5486_);
v___x_5491_ = v_reuseFailAlloc_5492_;
goto v_reusejp_5490_;
}
v_reusejp_5490_:
{
return v___x_5491_;
}
}
}
else
{
lean_object* v_a_5494_; lean_object* v___x_5496_; uint8_t v_isShared_5497_; uint8_t v_isSharedCheck_5501_; 
v_a_5494_ = lean_ctor_get(v___x_5485_, 0);
v_isSharedCheck_5501_ = !lean_is_exclusive(v___x_5485_);
if (v_isSharedCheck_5501_ == 0)
{
v___x_5496_ = v___x_5485_;
v_isShared_5497_ = v_isSharedCheck_5501_;
goto v_resetjp_5495_;
}
else
{
lean_inc(v_a_5494_);
lean_dec(v___x_5485_);
v___x_5496_ = lean_box(0);
v_isShared_5497_ = v_isSharedCheck_5501_;
goto v_resetjp_5495_;
}
v_resetjp_5495_:
{
lean_object* v___x_5499_; 
if (v_isShared_5497_ == 0)
{
v___x_5499_ = v___x_5496_;
goto v_reusejp_5498_;
}
else
{
lean_object* v_reuseFailAlloc_5500_; 
v_reuseFailAlloc_5500_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5500_, 0, v_a_5494_);
v___x_5499_ = v_reuseFailAlloc_5500_;
goto v_reusejp_5498_;
}
v_reusejp_5498_:
{
return v___x_5499_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Broadcast_Sync_subscribe___boxed(lean_object* v_00_u03b1_5502_, lean_object* v_ch_5503_, lean_object* v___y_5504_){
_start:
{
lean_object* v_res_5505_; 
v_res_5505_ = l_Std_Broadcast_Sync_subscribe(v_00_u03b1_5502_, v_ch_5503_);
return v_res_5505_;
}
}
LEAN_EXPORT lean_object* l_Std_Broadcast_Sync_close___redArg(lean_object* v_ch_5506_){
_start:
{
lean_object* v___x_5508_; 
v___x_5508_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_close___redArg(v_ch_5506_);
if (lean_obj_tag(v___x_5508_) == 0)
{
lean_object* v_a_5509_; lean_object* v___x_5511_; uint8_t v_isShared_5512_; uint8_t v_isSharedCheck_5516_; 
v_a_5509_ = lean_ctor_get(v___x_5508_, 0);
v_isSharedCheck_5516_ = !lean_is_exclusive(v___x_5508_);
if (v_isSharedCheck_5516_ == 0)
{
v___x_5511_ = v___x_5508_;
v_isShared_5512_ = v_isSharedCheck_5516_;
goto v_resetjp_5510_;
}
else
{
lean_inc(v_a_5509_);
lean_dec(v___x_5508_);
v___x_5511_ = lean_box(0);
v_isShared_5512_ = v_isSharedCheck_5516_;
goto v_resetjp_5510_;
}
v_resetjp_5510_:
{
lean_object* v___x_5514_; 
if (v_isShared_5512_ == 0)
{
v___x_5514_ = v___x_5511_;
goto v_reusejp_5513_;
}
else
{
lean_object* v_reuseFailAlloc_5515_; 
v_reuseFailAlloc_5515_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5515_, 0, v_a_5509_);
v___x_5514_ = v_reuseFailAlloc_5515_;
goto v_reusejp_5513_;
}
v_reusejp_5513_:
{
return v___x_5514_;
}
}
}
else
{
lean_object* v_a_5517_; lean_object* v___x_5519_; uint8_t v_isShared_5520_; uint8_t v_isSharedCheck_5534_; 
v_a_5517_ = lean_ctor_get(v___x_5508_, 0);
v_isSharedCheck_5534_ = !lean_is_exclusive(v___x_5508_);
if (v_isSharedCheck_5534_ == 0)
{
v___x_5519_ = v___x_5508_;
v_isShared_5520_ = v_isSharedCheck_5534_;
goto v_resetjp_5518_;
}
else
{
lean_inc(v_a_5517_);
lean_dec(v___x_5508_);
v___x_5519_ = lean_box(0);
v_isShared_5520_ = v_isSharedCheck_5534_;
goto v_resetjp_5518_;
}
v_resetjp_5518_:
{
uint8_t v___x_5521_; 
v___x_5521_ = lean_unbox(v_a_5517_);
lean_dec(v_a_5517_);
switch(v___x_5521_)
{
case 0:
{
lean_object* v___x_5522_; lean_object* v___x_5524_; 
v___x_5522_ = ((lean_object*)(l_Std_instMonadLiftBroadcastIO___lam__0___closed__0));
if (v_isShared_5520_ == 0)
{
lean_ctor_set(v___x_5519_, 0, v___x_5522_);
v___x_5524_ = v___x_5519_;
goto v_reusejp_5523_;
}
else
{
lean_object* v_reuseFailAlloc_5525_; 
v_reuseFailAlloc_5525_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5525_, 0, v___x_5522_);
v___x_5524_ = v_reuseFailAlloc_5525_;
goto v_reusejp_5523_;
}
v_reusejp_5523_:
{
return v___x_5524_;
}
}
case 1:
{
lean_object* v___x_5526_; lean_object* v___x_5528_; 
v___x_5526_ = ((lean_object*)(l_Std_instMonadLiftBroadcastIO___lam__0___closed__1));
if (v_isShared_5520_ == 0)
{
lean_ctor_set(v___x_5519_, 0, v___x_5526_);
v___x_5528_ = v___x_5519_;
goto v_reusejp_5527_;
}
else
{
lean_object* v_reuseFailAlloc_5529_; 
v_reuseFailAlloc_5529_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5529_, 0, v___x_5526_);
v___x_5528_ = v_reuseFailAlloc_5529_;
goto v_reusejp_5527_;
}
v_reusejp_5527_:
{
return v___x_5528_;
}
}
default: 
{
lean_object* v___x_5530_; lean_object* v___x_5532_; 
v___x_5530_ = ((lean_object*)(l_Std_instMonadLiftBroadcastIO___lam__0___closed__2));
if (v_isShared_5520_ == 0)
{
lean_ctor_set(v___x_5519_, 0, v___x_5530_);
v___x_5532_ = v___x_5519_;
goto v_reusejp_5531_;
}
else
{
lean_object* v_reuseFailAlloc_5533_; 
v_reuseFailAlloc_5533_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5533_, 0, v___x_5530_);
v___x_5532_ = v_reuseFailAlloc_5533_;
goto v_reusejp_5531_;
}
v_reusejp_5531_:
{
return v___x_5532_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Broadcast_Sync_close___redArg___boxed(lean_object* v_ch_5535_, lean_object* v___y_5536_){
_start:
{
lean_object* v_res_5537_; 
v_res_5537_ = l_Std_Broadcast_Sync_close___redArg(v_ch_5535_);
return v_res_5537_;
}
}
LEAN_EXPORT lean_object* l_Std_Broadcast_Sync_close(lean_object* v_00_u03b1_5538_, lean_object* v_ch_5539_){
_start:
{
lean_object* v___x_5541_; 
v___x_5541_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_close___redArg(v_ch_5539_);
if (lean_obj_tag(v___x_5541_) == 0)
{
lean_object* v_a_5542_; lean_object* v___x_5544_; uint8_t v_isShared_5545_; uint8_t v_isSharedCheck_5549_; 
v_a_5542_ = lean_ctor_get(v___x_5541_, 0);
v_isSharedCheck_5549_ = !lean_is_exclusive(v___x_5541_);
if (v_isSharedCheck_5549_ == 0)
{
v___x_5544_ = v___x_5541_;
v_isShared_5545_ = v_isSharedCheck_5549_;
goto v_resetjp_5543_;
}
else
{
lean_inc(v_a_5542_);
lean_dec(v___x_5541_);
v___x_5544_ = lean_box(0);
v_isShared_5545_ = v_isSharedCheck_5549_;
goto v_resetjp_5543_;
}
v_resetjp_5543_:
{
lean_object* v___x_5547_; 
if (v_isShared_5545_ == 0)
{
v___x_5547_ = v___x_5544_;
goto v_reusejp_5546_;
}
else
{
lean_object* v_reuseFailAlloc_5548_; 
v_reuseFailAlloc_5548_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5548_, 0, v_a_5542_);
v___x_5547_ = v_reuseFailAlloc_5548_;
goto v_reusejp_5546_;
}
v_reusejp_5546_:
{
return v___x_5547_;
}
}
}
else
{
lean_object* v_a_5550_; lean_object* v___x_5552_; uint8_t v_isShared_5553_; uint8_t v_isSharedCheck_5567_; 
v_a_5550_ = lean_ctor_get(v___x_5541_, 0);
v_isSharedCheck_5567_ = !lean_is_exclusive(v___x_5541_);
if (v_isSharedCheck_5567_ == 0)
{
v___x_5552_ = v___x_5541_;
v_isShared_5553_ = v_isSharedCheck_5567_;
goto v_resetjp_5551_;
}
else
{
lean_inc(v_a_5550_);
lean_dec(v___x_5541_);
v___x_5552_ = lean_box(0);
v_isShared_5553_ = v_isSharedCheck_5567_;
goto v_resetjp_5551_;
}
v_resetjp_5551_:
{
uint8_t v___x_5554_; 
v___x_5554_ = lean_unbox(v_a_5550_);
lean_dec(v_a_5550_);
switch(v___x_5554_)
{
case 0:
{
lean_object* v___x_5555_; lean_object* v___x_5557_; 
v___x_5555_ = ((lean_object*)(l_Std_instMonadLiftBroadcastIO___lam__0___closed__0));
if (v_isShared_5553_ == 0)
{
lean_ctor_set(v___x_5552_, 0, v___x_5555_);
v___x_5557_ = v___x_5552_;
goto v_reusejp_5556_;
}
else
{
lean_object* v_reuseFailAlloc_5558_; 
v_reuseFailAlloc_5558_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5558_, 0, v___x_5555_);
v___x_5557_ = v_reuseFailAlloc_5558_;
goto v_reusejp_5556_;
}
v_reusejp_5556_:
{
return v___x_5557_;
}
}
case 1:
{
lean_object* v___x_5559_; lean_object* v___x_5561_; 
v___x_5559_ = ((lean_object*)(l_Std_instMonadLiftBroadcastIO___lam__0___closed__1));
if (v_isShared_5553_ == 0)
{
lean_ctor_set(v___x_5552_, 0, v___x_5559_);
v___x_5561_ = v___x_5552_;
goto v_reusejp_5560_;
}
else
{
lean_object* v_reuseFailAlloc_5562_; 
v_reuseFailAlloc_5562_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5562_, 0, v___x_5559_);
v___x_5561_ = v_reuseFailAlloc_5562_;
goto v_reusejp_5560_;
}
v_reusejp_5560_:
{
return v___x_5561_;
}
}
default: 
{
lean_object* v___x_5563_; lean_object* v___x_5565_; 
v___x_5563_ = ((lean_object*)(l_Std_instMonadLiftBroadcastIO___lam__0___closed__2));
if (v_isShared_5553_ == 0)
{
lean_ctor_set(v___x_5552_, 0, v___x_5563_);
v___x_5565_ = v___x_5552_;
goto v_reusejp_5564_;
}
else
{
lean_object* v_reuseFailAlloc_5566_; 
v_reuseFailAlloc_5566_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5566_, 0, v___x_5563_);
v___x_5565_ = v_reuseFailAlloc_5566_;
goto v_reusejp_5564_;
}
v_reusejp_5564_:
{
return v___x_5565_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Broadcast_Sync_close___boxed(lean_object* v_00_u03b1_5568_, lean_object* v_ch_5569_, lean_object* v___y_5570_){
_start:
{
lean_object* v_res_5571_; 
v_res_5571_ = l_Std_Broadcast_Sync_close(v_00_u03b1_5568_, v_ch_5569_);
return v_res_5571_;
}
}
LEAN_EXPORT lean_object* l_Std_Broadcast_Sync_send___redArg(lean_object* v_ch_5573_, lean_object* v_v_5574_){
_start:
{
lean_object* v___f_5576_; lean_object* v___x_5577_; lean_object* v___x_5578_; lean_object* v___x_5579_; uint8_t v___x_5580_; lean_object* v___x_5581_; lean_object* v___x_5582_; lean_object* v___x_5583_; 
v___f_5576_ = ((lean_object*)(l_Std_Broadcast_send___redArg___closed__0));
v___x_5577_ = ((lean_object*)(l_Std_Broadcast_Sync_send___redArg___closed__0));
v___x_5578_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_send___redArg(v_ch_5573_, v_v_5574_);
v___x_5579_ = lean_unsigned_to_nat(0u);
v___x_5580_ = 1;
v___x_5581_ = lean_io_bind_task(v___x_5578_, v___f_5576_, v___x_5579_, v___x_5580_);
v___x_5582_ = lean_io_wait(v___x_5581_);
v___x_5583_ = l_IO_ofExcept___redArg(v___x_5577_, v___x_5582_);
return v___x_5583_;
}
}
LEAN_EXPORT lean_object* l_Std_Broadcast_Sync_send___redArg___boxed(lean_object* v_ch_5584_, lean_object* v_v_5585_, lean_object* v___y_5586_){
_start:
{
lean_object* v_res_5587_; 
v_res_5587_ = l_Std_Broadcast_Sync_send___redArg(v_ch_5584_, v_v_5585_);
return v_res_5587_;
}
}
LEAN_EXPORT lean_object* l_Std_Broadcast_Sync_send(lean_object* v_00_u03b1_5588_, lean_object* v_ch_5589_, lean_object* v_v_5590_){
_start:
{
lean_object* v___f_5592_; lean_object* v___x_5593_; lean_object* v___x_5594_; lean_object* v___x_5595_; uint8_t v___x_5596_; lean_object* v___x_5597_; lean_object* v___x_5598_; lean_object* v___x_5599_; 
v___f_5592_ = ((lean_object*)(l_Std_Broadcast_send___redArg___closed__0));
v___x_5593_ = ((lean_object*)(l_Std_Broadcast_Sync_send___redArg___closed__0));
v___x_5594_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_send___redArg(v_ch_5589_, v_v_5590_);
v___x_5595_ = lean_unsigned_to_nat(0u);
v___x_5596_ = 1;
v___x_5597_ = lean_io_bind_task(v___x_5594_, v___f_5592_, v___x_5595_, v___x_5596_);
v___x_5598_ = lean_io_wait(v___x_5597_);
v___x_5599_ = l_IO_ofExcept___redArg(v___x_5593_, v___x_5598_);
return v___x_5599_;
}
}
LEAN_EXPORT lean_object* l_Std_Broadcast_Sync_send___boxed(lean_object* v_00_u03b1_5600_, lean_object* v_ch_5601_, lean_object* v_v_5602_, lean_object* v___y_5603_){
_start:
{
lean_object* v_res_5604_; 
v_res_5604_ = l_Std_Broadcast_Sync_send(v_00_u03b1_5600_, v_ch_5601_, v_v_5602_);
return v_res_5604_;
}
}
LEAN_EXPORT lean_object* l_Std_Broadcast_Sync_Receiver_tryRecv___redArg(lean_object* v_ch_5605_){
_start:
{
lean_object* v___x_5607_; 
v___x_5607_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv___redArg(v_ch_5605_);
return v___x_5607_;
}
}
LEAN_EXPORT lean_object* l_Std_Broadcast_Sync_Receiver_tryRecv___redArg___boxed(lean_object* v_ch_5608_, lean_object* v___y_5609_){
_start:
{
lean_object* v_res_5610_; 
v_res_5610_ = l_Std_Broadcast_Sync_Receiver_tryRecv___redArg(v_ch_5608_);
return v_res_5610_;
}
}
LEAN_EXPORT lean_object* l_Std_Broadcast_Sync_Receiver_tryRecv(lean_object* v_00_u03b1_5611_, lean_object* v_ch_5612_){
_start:
{
lean_object* v___x_5614_; 
v___x_5614_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_tryRecv___redArg(v_ch_5612_);
return v___x_5614_;
}
}
LEAN_EXPORT lean_object* l_Std_Broadcast_Sync_Receiver_tryRecv___boxed(lean_object* v_00_u03b1_5615_, lean_object* v_ch_5616_, lean_object* v___y_5617_){
_start:
{
lean_object* v_res_5618_; 
v_res_5618_ = l_Std_Broadcast_Sync_Receiver_tryRecv(v_00_u03b1_5615_, v_ch_5616_);
return v_res_5618_;
}
}
LEAN_EXPORT lean_object* l_Std_Broadcast_Sync_Receiver_recv___redArg(lean_object* v_ch_5619_){
_start:
{
lean_object* v___x_5621_; lean_object* v___x_5622_; 
v___x_5621_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_recv___redArg(v_ch_5619_);
v___x_5622_ = lean_io_wait(v___x_5621_);
return v___x_5622_;
}
}
LEAN_EXPORT lean_object* l_Std_Broadcast_Sync_Receiver_recv___redArg___boxed(lean_object* v_ch_5623_, lean_object* v___y_5624_){
_start:
{
lean_object* v_res_5625_; 
v_res_5625_ = l_Std_Broadcast_Sync_Receiver_recv___redArg(v_ch_5623_);
return v_res_5625_;
}
}
LEAN_EXPORT lean_object* l_Std_Broadcast_Sync_Receiver_recv(lean_object* v_00_u03b1_5626_, lean_object* v_inst_5627_, lean_object* v_ch_5628_){
_start:
{
lean_object* v___x_5630_; 
v___x_5630_ = l_Std_Broadcast_Sync_Receiver_recv___redArg(v_ch_5628_);
return v___x_5630_;
}
}
LEAN_EXPORT lean_object* l_Std_Broadcast_Sync_Receiver_recv___boxed(lean_object* v_00_u03b1_5631_, lean_object* v_inst_5632_, lean_object* v_ch_5633_, lean_object* v___y_5634_){
_start:
{
lean_object* v_res_5635_; 
v_res_5635_ = l_Std_Broadcast_Sync_Receiver_recv(v_00_u03b1_5631_, v_inst_5632_, v_ch_5633_);
lean_dec(v_inst_5632_);
return v_res_5635_;
}
}
LEAN_EXPORT lean_object* l_Std_Broadcast_Sync_Receiver_unsubscribe___redArg(lean_object* v_ch_5636_){
_start:
{
lean_object* v___x_5638_; 
v___x_5638_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_unsubscribe___redArg(v_ch_5636_);
return v___x_5638_;
}
}
LEAN_EXPORT lean_object* l_Std_Broadcast_Sync_Receiver_unsubscribe___redArg___boxed(lean_object* v_ch_5639_, lean_object* v___y_5640_){
_start:
{
lean_object* v_res_5641_; 
v_res_5641_ = l_Std_Broadcast_Sync_Receiver_unsubscribe___redArg(v_ch_5639_);
return v_res_5641_;
}
}
LEAN_EXPORT lean_object* l_Std_Broadcast_Sync_Receiver_unsubscribe(lean_object* v_00_u03b1_5642_, lean_object* v_ch_5643_){
_start:
{
lean_object* v___x_5645_; 
v___x_5645_ = l___private_Std_Sync_Broadcast_0__Std_Bounded_Receiver_unsubscribe___redArg(v_ch_5643_);
return v___x_5645_;
}
}
LEAN_EXPORT lean_object* l_Std_Broadcast_Sync_Receiver_unsubscribe___boxed(lean_object* v_00_u03b1_5646_, lean_object* v_ch_5647_, lean_object* v___y_5648_){
_start:
{
lean_object* v_res_5649_; 
v_res_5649_ = l_Std_Broadcast_Sync_Receiver_unsubscribe(v_00_u03b1_5646_, v_ch_5647_);
return v_res_5649_;
}
}
LEAN_EXPORT lean_object* l_Std_Broadcast_Sync_Receiver_forIn___redArg___lam__1(lean_object* v_toPure_5650_, lean_object* v_b_5651_, lean_object* v_f_5652_, lean_object* v_toBind_5653_, lean_object* v___f_5654_, lean_object* v_a_5655_){
_start:
{
if (lean_obj_tag(v_a_5655_) == 0)
{
lean_object* v___x_5656_; 
lean_dec(v___f_5654_);
lean_dec(v_toBind_5653_);
lean_dec(v_f_5652_);
v___x_5656_ = lean_apply_2(v_toPure_5650_, lean_box(0), v_b_5651_);
return v___x_5656_;
}
else
{
lean_object* v_val_5657_; lean_object* v___x_5658_; lean_object* v___x_5659_; 
lean_dec(v_toPure_5650_);
v_val_5657_ = lean_ctor_get(v_a_5655_, 0);
lean_inc(v_val_5657_);
lean_dec_ref_known(v_a_5655_, 1);
v___x_5658_ = lean_apply_2(v_f_5652_, v_val_5657_, v_b_5651_);
v___x_5659_ = lean_apply_4(v_toBind_5653_, lean_box(0), lean_box(0), v___x_5658_, v___f_5654_);
return v___x_5659_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Broadcast_Sync_Receiver_forIn___redArg(lean_object* v_inst_5660_, lean_object* v_inst_5661_, lean_object* v_inst_5662_, lean_object* v_ch_5663_, lean_object* v_f_5664_, lean_object* v_b_5665_){
_start:
{
lean_object* v_toApplicative_5666_; lean_object* v_toBind_5667_; lean_object* v_toPure_5668_; lean_object* v___x_5669_; lean_object* v___x_5670_; lean_object* v___f_5671_; lean_object* v___f_5672_; lean_object* v___x_5673_; 
v_toApplicative_5666_ = lean_ctor_get(v_inst_5661_, 0);
v_toBind_5667_ = lean_ctor_get(v_inst_5661_, 1);
lean_inc_n(v_toBind_5667_, 2);
v_toPure_5668_ = lean_ctor_get(v_toApplicative_5666_, 1);
lean_inc_n(v_toPure_5668_, 2);
lean_inc_ref(v_ch_5663_);
lean_inc(v_inst_5660_);
v___x_5669_ = lean_alloc_closure((void*)(l_Std_Broadcast_Sync_Receiver_recv___boxed), 4, 3);
lean_closure_set(v___x_5669_, 0, lean_box(0));
lean_closure_set(v___x_5669_, 1, v_inst_5660_);
lean_closure_set(v___x_5669_, 2, v_ch_5663_);
lean_inc(v_inst_5662_);
v___x_5670_ = lean_apply_2(v_inst_5662_, lean_box(0), v___x_5669_);
lean_inc(v_f_5664_);
v___f_5671_ = lean_alloc_closure((void*)(l_Std_Broadcast_Sync_Receiver_forIn___redArg___lam__0), 7, 6);
lean_closure_set(v___f_5671_, 0, v_toPure_5668_);
lean_closure_set(v___f_5671_, 1, v_inst_5660_);
lean_closure_set(v___f_5671_, 2, v_inst_5661_);
lean_closure_set(v___f_5671_, 3, v_inst_5662_);
lean_closure_set(v___f_5671_, 4, v_ch_5663_);
lean_closure_set(v___f_5671_, 5, v_f_5664_);
v___f_5672_ = lean_alloc_closure((void*)(l_Std_Broadcast_Sync_Receiver_forIn___redArg___lam__1), 6, 5);
lean_closure_set(v___f_5672_, 0, v_toPure_5668_);
lean_closure_set(v___f_5672_, 1, v_b_5665_);
lean_closure_set(v___f_5672_, 2, v_f_5664_);
lean_closure_set(v___f_5672_, 3, v_toBind_5667_);
lean_closure_set(v___f_5672_, 4, v___f_5671_);
v___x_5673_ = lean_apply_4(v_toBind_5667_, lean_box(0), lean_box(0), v___x_5670_, v___f_5672_);
return v___x_5673_;
}
}
LEAN_EXPORT lean_object* l_Std_Broadcast_Sync_Receiver_forIn___redArg___lam__0(lean_object* v_toPure_5674_, lean_object* v_inst_5675_, lean_object* v_inst_5676_, lean_object* v_inst_5677_, lean_object* v_ch_5678_, lean_object* v_f_5679_, lean_object* v_____do__lift_5680_){
_start:
{
if (lean_obj_tag(v_____do__lift_5680_) == 0)
{
lean_object* v_a_5681_; lean_object* v___x_5682_; 
lean_dec(v_f_5679_);
lean_dec_ref(v_ch_5678_);
lean_dec(v_inst_5677_);
lean_dec_ref(v_inst_5676_);
lean_dec(v_inst_5675_);
v_a_5681_ = lean_ctor_get(v_____do__lift_5680_, 0);
lean_inc(v_a_5681_);
lean_dec_ref_known(v_____do__lift_5680_, 1);
v___x_5682_ = lean_apply_2(v_toPure_5674_, lean_box(0), v_a_5681_);
return v___x_5682_;
}
else
{
lean_object* v_a_5683_; lean_object* v___x_5684_; 
lean_dec(v_toPure_5674_);
v_a_5683_ = lean_ctor_get(v_____do__lift_5680_, 0);
lean_inc(v_a_5683_);
lean_dec_ref_known(v_____do__lift_5680_, 1);
v___x_5684_ = l_Std_Broadcast_Sync_Receiver_forIn___redArg(v_inst_5675_, v_inst_5676_, v_inst_5677_, v_ch_5678_, v_f_5679_, v_a_5683_);
return v___x_5684_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Broadcast_Sync_Receiver_forIn(lean_object* v_00_u03b1_5685_, lean_object* v_m_5686_, lean_object* v_00_u03b2_5687_, lean_object* v_inst_5688_, lean_object* v_inst_5689_, lean_object* v_inst_5690_, lean_object* v_ch_5691_, lean_object* v_f_5692_, lean_object* v_b_5693_){
_start:
{
lean_object* v___x_5694_; 
v___x_5694_ = l_Std_Broadcast_Sync_Receiver_forIn___redArg(v_inst_5688_, v_inst_5689_, v_inst_5690_, v_ch_5691_, v_f_5692_, v_b_5693_);
return v___x_5694_;
}
}
LEAN_EXPORT lean_object* l_Std_Broadcast_Sync_Receiver_instForInOfInhabitedOfMonadOfMonadLiftTBaseIO___redArg___lam__0(lean_object* v_inst_5695_, lean_object* v_inst_5696_, lean_object* v_inst_5697_, lean_object* v_00_u03b2_5698_, lean_object* v_ch_5699_, lean_object* v_b_5700_, lean_object* v_f_5701_){
_start:
{
lean_object* v___x_5702_; 
v___x_5702_ = l_Std_Broadcast_Sync_Receiver_forIn___redArg(v_inst_5695_, v_inst_5696_, v_inst_5697_, v_ch_5699_, v_f_5701_, v_b_5700_);
return v___x_5702_;
}
}
LEAN_EXPORT lean_object* l_Std_Broadcast_Sync_Receiver_instForInOfInhabitedOfMonadOfMonadLiftTBaseIO___redArg(lean_object* v_inst_5703_, lean_object* v_inst_5704_, lean_object* v_inst_5705_){
_start:
{
lean_object* v___f_5706_; 
v___f_5706_ = lean_alloc_closure((void*)(l_Std_Broadcast_Sync_Receiver_instForInOfInhabitedOfMonadOfMonadLiftTBaseIO___redArg___lam__0), 7, 3);
lean_closure_set(v___f_5706_, 0, v_inst_5703_);
lean_closure_set(v___f_5706_, 1, v_inst_5704_);
lean_closure_set(v___f_5706_, 2, v_inst_5705_);
return v___f_5706_;
}
}
LEAN_EXPORT lean_object* l_Std_Broadcast_Sync_Receiver_instForInOfInhabitedOfMonadOfMonadLiftTBaseIO(lean_object* v_00_u03b1_5707_, lean_object* v_m_5708_, lean_object* v_inst_5709_, lean_object* v_inst_5710_, lean_object* v_inst_5711_){
_start:
{
lean_object* v___f_5712_; 
v___f_5712_ = lean_alloc_closure((void*)(l_Std_Broadcast_Sync_Receiver_instForInOfInhabitedOfMonadOfMonadLiftTBaseIO___redArg___lam__0), 7, 3);
lean_closure_set(v___f_5712_, 0, v_inst_5709_);
lean_closure_set(v___f_5712_, 1, v_inst_5710_);
lean_closure_set(v___f_5712_, 2, v_inst_5711_);
return v___f_5712_;
}
}
lean_object* runtime_initialize_Std_Data(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Queue(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Vector(uint8_t builtin);
lean_object* runtime_initialize_Std_Sync_Mutex(uint8_t builtin);
lean_object* runtime_initialize_Std_Async_IO(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Std_Sync_Broadcast(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Std_Data(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Queue(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Vector(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Sync_Mutex(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Async_IO(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Std_Sync_Broadcast(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1 = _init_l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1();
lean_mark_persistent(l___private_Std_Sync_Broadcast_0__Std_Bounded_new___auto__1);
l_Std_Broadcast_new___auto__1 = _init_l_Std_Broadcast_new___auto__1();
lean_mark_persistent(l_Std_Broadcast_new___auto__1);
l_Std_Broadcast_Sync_new___auto__3 = _init_l_Std_Broadcast_Sync_new___auto__3();
lean_mark_persistent(l_Std_Broadcast_Sync_new___auto__3);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Std_Data(uint8_t builtin);
lean_object* initialize_Init_Data_Queue(uint8_t builtin);
lean_object* initialize_Init_Data_Vector(uint8_t builtin);
lean_object* initialize_Std_Sync_Mutex(uint8_t builtin);
lean_object* initialize_Std_Async_IO(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Std_Sync_Broadcast(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Std_Data(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Queue(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Vector(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Sync_Mutex(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Async_IO(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Sync_Broadcast(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Std_Sync_Broadcast(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Std_Sync_Broadcast(builtin);
}
#ifdef __cplusplus
}
#endif
