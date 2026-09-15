// Lean compiler output
// Module: Std.Sync.CancellationToken
// Imports: public import Std.Data public import Init.Data.Queue public import Std.Sync.Mutex public import Std.Async.Select public import Init.Data.ToString.Macro
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
lean_object* lean_io_basemutex_unlock(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* lean_io_basemutex_lock(lean_object*);
lean_object* l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Std_Async_EAsync_tryFinally_x27___redArg(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* lean_task_map(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Std_Queue_empty___redArg();
lean_object* l_Std_Queue_dequeue_x3f___redArg(lean_object*);
lean_object* lean_io_promise_resolve(lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* lean_st_ref_swap(lean_object*, lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
uint8_t l_List_isEmpty___redArg(lean_object*);
lean_object* lean_mk_io_user_error(lean_object*);
lean_object* lean_task_pure(lean_object*);
lean_object* lean_io_promise_new();
lean_object* l_Std_Queue_enqueue___redArg(lean_object*, lean_object*);
lean_object* lean_io_promise_result_opt(lean_object*);
lean_object* lean_io_bind_task(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* lean_nat_to_int(lean_object*);
lean_object* l_Repr_addAppParen(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_String_quote(lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* l_Std_Mutex_new___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_CancellationReason_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Std_CancellationReason_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_CancellationReason_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_CancellationReason_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_CancellationReason_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_CancellationReason_deadline_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_CancellationReason_deadline_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_CancellationReason_shutdown_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_CancellationReason_shutdown_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_CancellationReason_cancel_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_CancellationReason_cancel_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_CancellationReason_custom_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_CancellationReason_custom_elim(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Std_instReprCancellationReason_repr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "Std.CancellationReason.cancel"};
static const lean_object* l_Std_instReprCancellationReason_repr___closed__0 = (const lean_object*)&l_Std_instReprCancellationReason_repr___closed__0_value;
static const lean_ctor_object l_Std_instReprCancellationReason_repr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_instReprCancellationReason_repr___closed__0_value)}};
static const lean_object* l_Std_instReprCancellationReason_repr___closed__1 = (const lean_object*)&l_Std_instReprCancellationReason_repr___closed__1_value;
static const lean_string_object l_Std_instReprCancellationReason_repr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "Std.CancellationReason.shutdown"};
static const lean_object* l_Std_instReprCancellationReason_repr___closed__2 = (const lean_object*)&l_Std_instReprCancellationReason_repr___closed__2_value;
static const lean_ctor_object l_Std_instReprCancellationReason_repr___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_instReprCancellationReason_repr___closed__2_value)}};
static const lean_object* l_Std_instReprCancellationReason_repr___closed__3 = (const lean_object*)&l_Std_instReprCancellationReason_repr___closed__3_value;
static const lean_string_object l_Std_instReprCancellationReason_repr___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "Std.CancellationReason.deadline"};
static const lean_object* l_Std_instReprCancellationReason_repr___closed__4 = (const lean_object*)&l_Std_instReprCancellationReason_repr___closed__4_value;
static const lean_ctor_object l_Std_instReprCancellationReason_repr___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_instReprCancellationReason_repr___closed__4_value)}};
static const lean_object* l_Std_instReprCancellationReason_repr___closed__5 = (const lean_object*)&l_Std_instReprCancellationReason_repr___closed__5_value;
static lean_once_cell_t l_Std_instReprCancellationReason_repr___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_instReprCancellationReason_repr___closed__6;
static lean_once_cell_t l_Std_instReprCancellationReason_repr___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_instReprCancellationReason_repr___closed__7;
static const lean_string_object l_Std_instReprCancellationReason_repr___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "Std.CancellationReason.custom"};
static const lean_object* l_Std_instReprCancellationReason_repr___closed__8 = (const lean_object*)&l_Std_instReprCancellationReason_repr___closed__8_value;
static const lean_ctor_object l_Std_instReprCancellationReason_repr___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_instReprCancellationReason_repr___closed__8_value)}};
static const lean_object* l_Std_instReprCancellationReason_repr___closed__9 = (const lean_object*)&l_Std_instReprCancellationReason_repr___closed__9_value;
static const lean_ctor_object l_Std_instReprCancellationReason_repr___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Std_instReprCancellationReason_repr___closed__9_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Std_instReprCancellationReason_repr___closed__10 = (const lean_object*)&l_Std_instReprCancellationReason_repr___closed__10_value;
LEAN_EXPORT lean_object* l_Std_instReprCancellationReason_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_instReprCancellationReason_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_instReprCancellationReason___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_instReprCancellationReason_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_instReprCancellationReason___closed__0 = (const lean_object*)&l_Std_instReprCancellationReason___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_instReprCancellationReason = (const lean_object*)&l_Std_instReprCancellationReason___closed__0_value;
LEAN_EXPORT uint8_t l_Std_instBEqCancellationReason_beq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_instBEqCancellationReason_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_instBEqCancellationReason___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_instBEqCancellationReason_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_instBEqCancellationReason___closed__0 = (const lean_object*)&l_Std_instBEqCancellationReason___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_instBEqCancellationReason = (const lean_object*)&l_Std_instBEqCancellationReason___closed__0_value;
static const lean_string_object l_Std_instToStringCancellationReason___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "deadline"};
static const lean_object* l_Std_instToStringCancellationReason___lam__0___closed__0 = (const lean_object*)&l_Std_instToStringCancellationReason___lam__0___closed__0_value;
static const lean_string_object l_Std_instToStringCancellationReason___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "shutdown"};
static const lean_object* l_Std_instToStringCancellationReason___lam__0___closed__1 = (const lean_object*)&l_Std_instToStringCancellationReason___lam__0___closed__1_value;
static const lean_string_object l_Std_instToStringCancellationReason___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "cancel"};
static const lean_object* l_Std_instToStringCancellationReason___lam__0___closed__2 = (const lean_object*)&l_Std_instToStringCancellationReason___lam__0___closed__2_value;
static const lean_string_object l_Std_instToStringCancellationReason___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "custom(\""};
static const lean_object* l_Std_instToStringCancellationReason___lam__0___closed__3 = (const lean_object*)&l_Std_instToStringCancellationReason___lam__0___closed__3_value;
static const lean_string_object l_Std_instToStringCancellationReason___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "\")"};
static const lean_object* l_Std_instToStringCancellationReason___lam__0___closed__4 = (const lean_object*)&l_Std_instToStringCancellationReason___lam__0___closed__4_value;
LEAN_EXPORT lean_object* l_Std_instToStringCancellationReason___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Std_instToStringCancellationReason___lam__0___boxed(lean_object*);
static const lean_closure_object l_Std_instToStringCancellationReason___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_instToStringCancellationReason___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_instToStringCancellationReason___closed__0 = (const lean_object*)&l_Std_instToStringCancellationReason___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_instToStringCancellationReason = (const lean_object*)&l_Std_instToStringCancellationReason___closed__0_value;
LEAN_EXPORT lean_object* l_Std_CancellationToken_Consumer_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Std_CancellationToken_Consumer_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_CancellationToken_Consumer_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_CancellationToken_Consumer_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_CancellationToken_Consumer_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_CancellationToken_Consumer_normal_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_CancellationToken_Consumer_normal_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_CancellationToken_Consumer_select_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_CancellationToken_Consumer_select_elim(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Std_Async_Waiter_race___at___00Std_CancellationToken_Consumer_resolve_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Std_Async_Waiter_race___at___00Std_CancellationToken_Consumer_resolve_spec__0___closed__0 = (const lean_object*)&l_Std_Async_Waiter_race___at___00Std_CancellationToken_Consumer_resolve_spec__0___closed__0_value;
LEAN_EXPORT uint8_t l_Std_Async_Waiter_race___at___00Std_CancellationToken_Consumer_resolve_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Waiter_race___at___00Std_CancellationToken_Consumer_resolve_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_CancellationToken_Consumer_resolve___lam__0(uint8_t);
LEAN_EXPORT lean_object* l_Std_CancellationToken_Consumer_resolve___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_CancellationToken_Consumer_resolve___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_CancellationToken_Consumer_resolve___lam__0___boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Std_CancellationToken_Consumer_resolve___closed__0 = (const lean_object*)&l_Std_CancellationToken_Consumer_resolve___closed__0_value;
LEAN_EXPORT uint8_t l_Std_CancellationToken_Consumer_resolve(lean_object*);
LEAN_EXPORT lean_object* l_Std_CancellationToken_Consumer_resolve___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Std_CancellationToken_new___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_CancellationToken_new___closed__0;
static lean_once_cell_t l_Std_CancellationToken_new___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_CancellationToken_new___closed__1;
LEAN_EXPORT lean_object* l_Std_CancellationToken_new();
LEAN_EXPORT lean_object* l_Std_CancellationToken_new___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00Std_CancellationToken_cancel_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00Std_CancellationToken_cancel_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00Std_CancellationToken_cancel_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00Std_CancellationToken_cancel_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Std_CancellationToken_cancel_spec__0___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Std_CancellationToken_cancel_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_CancellationToken_cancel___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_CancellationToken_cancel___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_CancellationToken_cancel(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_CancellationToken_cancel___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Std_CancellationToken_cancel_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Std_CancellationToken_cancel_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_CancellationToken_isCancelled___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Std_CancellationToken_isCancelled___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_CancellationToken_isCancelled___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_CancellationToken_isCancelled___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_CancellationToken_isCancelled___closed__0 = (const lean_object*)&l_Std_CancellationToken_isCancelled___closed__0_value;
LEAN_EXPORT uint8_t l_Std_CancellationToken_isCancelled(lean_object*);
LEAN_EXPORT lean_object* l_Std_CancellationToken_isCancelled___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_CancellationToken_getCancellationReason___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Std_CancellationToken_getCancellationReason___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_CancellationToken_getCancellationReason___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_CancellationToken_getCancellationReason___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_CancellationToken_getCancellationReason___closed__0 = (const lean_object*)&l_Std_CancellationToken_getCancellationReason___closed__0_value;
LEAN_EXPORT lean_object* l_Std_CancellationToken_getCancellationReason(lean_object*);
LEAN_EXPORT lean_object* l_Std_CancellationToken_getCancellationReason___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00Std_CancellationToken_wait_spec__0___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00Std_CancellationToken_wait_spec__0___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00Std_CancellationToken_wait_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00Std_CancellationToken_wait_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00Std_CancellationToken_wait_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00Std_CancellationToken_wait_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Std_CancellationToken_wait___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "cancellation token dropped"};
static const lean_object* l_Std_CancellationToken_wait___lam__0___closed__0 = (const lean_object*)&l_Std_CancellationToken_wait___lam__0___closed__0_value;
static lean_once_cell_t l_Std_CancellationToken_wait___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_CancellationToken_wait___lam__0___closed__1;
static lean_once_cell_t l_Std_CancellationToken_wait___lam__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_CancellationToken_wait___lam__0___closed__2;
static lean_once_cell_t l_Std_CancellationToken_wait___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_CancellationToken_wait___lam__0___closed__3;
static lean_once_cell_t l_Std_CancellationToken_wait___lam__0___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_CancellationToken_wait___lam__0___closed__4;
LEAN_EXPORT lean_object* l_Std_CancellationToken_wait___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Std_CancellationToken_wait___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_CancellationToken_wait___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_CancellationToken_wait___lam__1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_CancellationToken_wait___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_CancellationToken_wait___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_CancellationToken_wait___closed__0 = (const lean_object*)&l_Std_CancellationToken_wait___closed__0_value;
static const lean_closure_object l_Std_CancellationToken_wait___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_CancellationToken_wait___lam__1___boxed, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Std_CancellationToken_wait___closed__0_value)} };
static const lean_object* l_Std_CancellationToken_wait___closed__1 = (const lean_object*)&l_Std_CancellationToken_wait___closed__1_value;
LEAN_EXPORT lean_object* l_Std_CancellationToken_wait(lean_object*);
LEAN_EXPORT lean_object* l_Std_CancellationToken_wait___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Waiter_race___at___00Std_CancellationToken_selector_spec__0___lam__0(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Waiter_race___at___00Std_CancellationToken_selector_spec__0___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Waiter_race___at___00Std_CancellationToken_selector_spec__0___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Waiter_race___at___00Std_CancellationToken_selector_spec__0___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Async_Waiter_race___at___00Std_CancellationToken_selector_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Async_Waiter_race___at___00Std_CancellationToken_selector_spec__0___lam__0___boxed, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1))} };
static const lean_object* l_Std_Async_Waiter_race___at___00Std_CancellationToken_selector_spec__0___closed__0 = (const lean_object*)&l_Std_Async_Waiter_race___at___00Std_CancellationToken_selector_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Async_Waiter_race___at___00Std_CancellationToken_selector_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Waiter_race___at___00Std_CancellationToken_selector_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00Std_CancellationToken_selector_spec__1___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00Std_CancellationToken_selector_spec__1___redArg___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00Std_CancellationToken_selector_spec__1___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00Std_CancellationToken_selector_spec__1___redArg___lam__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00Std_CancellationToken_selector_spec__1___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00Std_CancellationToken_selector_spec__1___redArg___lam__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00Std_CancellationToken_selector_spec__1___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Mutex_atomically___at___00Std_CancellationToken_selector_spec__1___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Mutex_atomically___at___00Std_CancellationToken_selector_spec__1___redArg___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Mutex_atomically___at___00Std_CancellationToken_selector_spec__1___redArg___closed__0 = (const lean_object*)&l_Std_Mutex_atomically___at___00Std_CancellationToken_selector_spec__1___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00Std_CancellationToken_selector_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00Std_CancellationToken_selector_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00Std_CancellationToken_selector_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00Std_CancellationToken_selector_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_CancellationToken_selector___lam__0(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Std_CancellationToken_selector___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_CancellationToken_selector___lam__1(lean_object*, lean_object*);
static const lean_ctor_object l_Std_CancellationToken_selector___lam__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Std_Async_Waiter_race___at___00Std_CancellationToken_Consumer_resolve_spec__0___closed__0_value)}};
static const lean_object* l_Std_CancellationToken_selector___lam__2___closed__0 = (const lean_object*)&l_Std_CancellationToken_selector___lam__2___closed__0_value;
static const lean_closure_object l_Std_CancellationToken_selector___lam__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_CancellationToken_selector___lam__0___boxed, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Std_CancellationToken_selector___lam__2___closed__1 = (const lean_object*)&l_Std_CancellationToken_selector___lam__2___closed__1_value;
static const lean_closure_object l_Std_CancellationToken_selector___lam__2___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_CancellationToken_selector___lam__1, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Std_CancellationToken_selector___lam__2___closed__2 = (const lean_object*)&l_Std_CancellationToken_selector___lam__2___closed__2_value;
LEAN_EXPORT lean_object* l_Std_CancellationToken_selector___lam__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_CancellationToken_selector___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_CancellationToken_selector___lam__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_CancellationToken_selector___lam__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_CancellationToken_selector___lam__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_CancellationToken_selector___lam__4___boxed(lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Std_CancellationToken_selector___lam__5___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Std_CancellationToken_selector___lam__5___closed__0 = (const lean_object*)&l_Std_CancellationToken_selector___lam__5___closed__0_value;
static const lean_ctor_object l_Std_CancellationToken_selector___lam__5___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Std_CancellationToken_selector___lam__5___closed__0_value)}};
static const lean_object* l_Std_CancellationToken_selector___lam__5___closed__1 = (const lean_object*)&l_Std_CancellationToken_selector___lam__5___closed__1_value;
static const lean_ctor_object l_Std_CancellationToken_selector___lam__5___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Std_CancellationToken_selector___lam__5___closed__2 = (const lean_object*)&l_Std_CancellationToken_selector___lam__5___closed__2_value;
static const lean_ctor_object l_Std_CancellationToken_selector___lam__5___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_CancellationToken_selector___lam__5___closed__2_value)}};
static const lean_object* l_Std_CancellationToken_selector___lam__5___closed__3 = (const lean_object*)&l_Std_CancellationToken_selector___lam__5___closed__3_value;
static const lean_ctor_object l_Std_CancellationToken_selector___lam__5___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Std_CancellationToken_selector___lam__5___closed__3_value)}};
static const lean_object* l_Std_CancellationToken_selector___lam__5___closed__4 = (const lean_object*)&l_Std_CancellationToken_selector___lam__5___closed__4_value;
LEAN_EXPORT lean_object* l_Std_CancellationToken_selector___lam__5(lean_object*);
LEAN_EXPORT lean_object* l_Std_CancellationToken_selector___lam__5___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_CancellationToken_selector___lam__6(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_CancellationToken_selector___lam__6___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_CancellationToken_selector___lam__7(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_CancellationToken_selector___lam__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Queue_filterM___at___00Std_CancellationToken_selector_spec__2___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Std_Queue_filterM___at___00Std_CancellationToken_selector_spec__2___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_filterAuxM___at___00Std_Queue_filterM___at___00Std_CancellationToken_selector_spec__2_spec__2___redArg___lam__1(lean_object*);
LEAN_EXPORT lean_object* l_List_filterAuxM___at___00Std_Queue_filterM___at___00Std_CancellationToken_selector_spec__2_spec__2___redArg___lam__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_filterAuxM___at___00Std_Queue_filterM___at___00Std_CancellationToken_selector_spec__2_spec__2___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_List_filterAuxM___at___00Std_Queue_filterM___at___00Std_CancellationToken_selector_spec__2_spec__2___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_List_filterAuxM___at___00Std_Queue_filterM___at___00Std_CancellationToken_selector_spec__2_spec__2___redArg___closed__0 = (const lean_object*)&l_List_filterAuxM___at___00Std_Queue_filterM___at___00Std_CancellationToken_selector_spec__2_spec__2___redArg___closed__0_value;
static const lean_ctor_object l_List_filterAuxM___at___00Std_Queue_filterM___at___00Std_CancellationToken_selector_spec__2_spec__2___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_List_filterAuxM___at___00Std_Queue_filterM___at___00Std_CancellationToken_selector_spec__2_spec__2___redArg___closed__0_value)}};
static const lean_object* l_List_filterAuxM___at___00Std_Queue_filterM___at___00Std_CancellationToken_selector_spec__2_spec__2___redArg___closed__1 = (const lean_object*)&l_List_filterAuxM___at___00Std_Queue_filterM___at___00Std_CancellationToken_selector_spec__2_spec__2___redArg___closed__1_value;
static const lean_closure_object l_List_filterAuxM___at___00Std_Queue_filterM___at___00Std_CancellationToken_selector_spec__2_spec__2___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_List_filterAuxM___at___00Std_Queue_filterM___at___00Std_CancellationToken_selector_spec__2_spec__2___redArg___lam__1___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_List_filterAuxM___at___00Std_Queue_filterM___at___00Std_CancellationToken_selector_spec__2_spec__2___redArg___closed__2 = (const lean_object*)&l_List_filterAuxM___at___00Std_Queue_filterM___at___00Std_CancellationToken_selector_spec__2_spec__2___redArg___closed__2_value;
LEAN_EXPORT lean_object* l_List_filterAuxM___at___00Std_Queue_filterM___at___00Std_CancellationToken_selector_spec__2_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_filterAuxM___at___00Std_Queue_filterM___at___00Std_CancellationToken_selector_spec__2_spec__2___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_filterAuxM___at___00Std_Queue_filterM___at___00Std_CancellationToken_selector_spec__2_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Queue_filterM___at___00Std_CancellationToken_selector_spec__2___lam__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Queue_filterM___at___00Std_CancellationToken_selector_spec__2___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Queue_filterM___at___00Std_CancellationToken_selector_spec__2___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Queue_filterM___at___00Std_CancellationToken_selector_spec__2___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Queue_filterM___at___00Std_CancellationToken_selector_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Queue_filterM___at___00Std_CancellationToken_selector_spec__2___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Queue_filterM___at___00Std_CancellationToken_selector_spec__2___closed__0 = (const lean_object*)&l_Std_Queue_filterM___at___00Std_CancellationToken_selector_spec__2___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Queue_filterM___at___00Std_CancellationToken_selector_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Queue_filterM___at___00Std_CancellationToken_selector_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_CancellationToken_selector___lam__8(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_CancellationToken_selector___lam__8___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_CancellationToken_selector___lam__9(lean_object*);
LEAN_EXPORT lean_object* l_Std_CancellationToken_selector___lam__9___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_CancellationToken_selector___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_CancellationToken_selector___lam__5___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_CancellationToken_selector___closed__0 = (const lean_object*)&l_Std_CancellationToken_selector___closed__0_value;
static const lean_closure_object l_Std_CancellationToken_selector___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_CancellationToken_selector___lam__9___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_CancellationToken_selector___closed__1 = (const lean_object*)&l_Std_CancellationToken_selector___closed__1_value;
LEAN_EXPORT lean_object* l_Std_CancellationToken_selector(lean_object*);
LEAN_EXPORT lean_object* l_List_filterAuxM___at___00Std_Queue_filterM___at___00Std_CancellationToken_selector_spec__2_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_filterAuxM___at___00Std_Queue_filterM___at___00Std_CancellationToken_selector_spec__2_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_CancellationReason_ctorIdx(lean_object* v_x_1_){
_start:
{
switch(lean_obj_tag(v_x_1_))
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
case 2:
{
lean_object* v___x_4_; 
v___x_4_ = lean_unsigned_to_nat(2u);
return v___x_4_;
}
default: 
{
lean_object* v___x_5_; 
v___x_5_ = lean_unsigned_to_nat(3u);
return v___x_5_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_CancellationReason_ctorIdx___boxed(lean_object* v_x_6_){
_start:
{
lean_object* v_res_7_; 
v_res_7_ = l_Std_CancellationReason_ctorIdx(v_x_6_);
lean_dec(v_x_6_);
return v_res_7_;
}
}
LEAN_EXPORT lean_object* l_Std_CancellationReason_ctorElim___redArg(lean_object* v_t_8_, lean_object* v_k_9_){
_start:
{
if (lean_obj_tag(v_t_8_) == 3)
{
lean_object* v_msg_10_; lean_object* v___x_11_; 
v_msg_10_ = lean_ctor_get(v_t_8_, 0);
lean_inc_ref(v_msg_10_);
lean_dec_ref_known(v_t_8_, 1);
v___x_11_ = lean_apply_1(v_k_9_, v_msg_10_);
return v___x_11_;
}
else
{
lean_dec(v_t_8_);
return v_k_9_;
}
}
}
LEAN_EXPORT lean_object* l_Std_CancellationReason_ctorElim(lean_object* v_motive_12_, lean_object* v_ctorIdx_13_, lean_object* v_t_14_, lean_object* v_h_15_, lean_object* v_k_16_){
_start:
{
lean_object* v___x_17_; 
v___x_17_ = l_Std_CancellationReason_ctorElim___redArg(v_t_14_, v_k_16_);
return v___x_17_;
}
}
LEAN_EXPORT lean_object* l_Std_CancellationReason_ctorElim___boxed(lean_object* v_motive_18_, lean_object* v_ctorIdx_19_, lean_object* v_t_20_, lean_object* v_h_21_, lean_object* v_k_22_){
_start:
{
lean_object* v_res_23_; 
v_res_23_ = l_Std_CancellationReason_ctorElim(v_motive_18_, v_ctorIdx_19_, v_t_20_, v_h_21_, v_k_22_);
lean_dec(v_ctorIdx_19_);
return v_res_23_;
}
}
LEAN_EXPORT lean_object* l_Std_CancellationReason_deadline_elim___redArg(lean_object* v_t_24_, lean_object* v_deadline_25_){
_start:
{
lean_object* v___x_26_; 
v___x_26_ = l_Std_CancellationReason_ctorElim___redArg(v_t_24_, v_deadline_25_);
return v___x_26_;
}
}
LEAN_EXPORT lean_object* l_Std_CancellationReason_deadline_elim(lean_object* v_motive_27_, lean_object* v_t_28_, lean_object* v_h_29_, lean_object* v_deadline_30_){
_start:
{
lean_object* v___x_31_; 
v___x_31_ = l_Std_CancellationReason_ctorElim___redArg(v_t_28_, v_deadline_30_);
return v___x_31_;
}
}
LEAN_EXPORT lean_object* l_Std_CancellationReason_shutdown_elim___redArg(lean_object* v_t_32_, lean_object* v_shutdown_33_){
_start:
{
lean_object* v___x_34_; 
v___x_34_ = l_Std_CancellationReason_ctorElim___redArg(v_t_32_, v_shutdown_33_);
return v___x_34_;
}
}
LEAN_EXPORT lean_object* l_Std_CancellationReason_shutdown_elim(lean_object* v_motive_35_, lean_object* v_t_36_, lean_object* v_h_37_, lean_object* v_shutdown_38_){
_start:
{
lean_object* v___x_39_; 
v___x_39_ = l_Std_CancellationReason_ctorElim___redArg(v_t_36_, v_shutdown_38_);
return v___x_39_;
}
}
LEAN_EXPORT lean_object* l_Std_CancellationReason_cancel_elim___redArg(lean_object* v_t_40_, lean_object* v_cancel_41_){
_start:
{
lean_object* v___x_42_; 
v___x_42_ = l_Std_CancellationReason_ctorElim___redArg(v_t_40_, v_cancel_41_);
return v___x_42_;
}
}
LEAN_EXPORT lean_object* l_Std_CancellationReason_cancel_elim(lean_object* v_motive_43_, lean_object* v_t_44_, lean_object* v_h_45_, lean_object* v_cancel_46_){
_start:
{
lean_object* v___x_47_; 
v___x_47_ = l_Std_CancellationReason_ctorElim___redArg(v_t_44_, v_cancel_46_);
return v___x_47_;
}
}
LEAN_EXPORT lean_object* l_Std_CancellationReason_custom_elim___redArg(lean_object* v_t_48_, lean_object* v_custom_49_){
_start:
{
lean_object* v___x_50_; 
v___x_50_ = l_Std_CancellationReason_ctorElim___redArg(v_t_48_, v_custom_49_);
return v___x_50_;
}
}
LEAN_EXPORT lean_object* l_Std_CancellationReason_custom_elim(lean_object* v_motive_51_, lean_object* v_t_52_, lean_object* v_h_53_, lean_object* v_custom_54_){
_start:
{
lean_object* v___x_55_; 
v___x_55_ = l_Std_CancellationReason_ctorElim___redArg(v_t_52_, v_custom_54_);
return v___x_55_;
}
}
static lean_object* _init_l_Std_instReprCancellationReason_repr___closed__6(void){
_start:
{
lean_object* v___x_65_; lean_object* v___x_66_; 
v___x_65_ = lean_unsigned_to_nat(2u);
v___x_66_ = lean_nat_to_int(v___x_65_);
return v___x_66_;
}
}
static lean_object* _init_l_Std_instReprCancellationReason_repr___closed__7(void){
_start:
{
lean_object* v___x_67_; lean_object* v___x_68_; 
v___x_67_ = lean_unsigned_to_nat(1u);
v___x_68_ = lean_nat_to_int(v___x_67_);
return v___x_68_;
}
}
LEAN_EXPORT lean_object* l_Std_instReprCancellationReason_repr(lean_object* v_x_75_, lean_object* v_prec_76_){
_start:
{
lean_object* v___y_78_; lean_object* v___y_85_; lean_object* v___y_92_; 
switch(lean_obj_tag(v_x_75_))
{
case 0:
{
lean_object* v___x_98_; uint8_t v___x_99_; 
v___x_98_ = lean_unsigned_to_nat(1024u);
v___x_99_ = lean_nat_dec_le(v___x_98_, v_prec_76_);
if (v___x_99_ == 0)
{
lean_object* v___x_100_; 
v___x_100_ = lean_obj_once(&l_Std_instReprCancellationReason_repr___closed__6, &l_Std_instReprCancellationReason_repr___closed__6_once, _init_l_Std_instReprCancellationReason_repr___closed__6);
v___y_92_ = v___x_100_;
goto v___jp_91_;
}
else
{
lean_object* v___x_101_; 
v___x_101_ = lean_obj_once(&l_Std_instReprCancellationReason_repr___closed__7, &l_Std_instReprCancellationReason_repr___closed__7_once, _init_l_Std_instReprCancellationReason_repr___closed__7);
v___y_92_ = v___x_101_;
goto v___jp_91_;
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
v___x_104_ = lean_obj_once(&l_Std_instReprCancellationReason_repr___closed__6, &l_Std_instReprCancellationReason_repr___closed__6_once, _init_l_Std_instReprCancellationReason_repr___closed__6);
v___y_85_ = v___x_104_;
goto v___jp_84_;
}
else
{
lean_object* v___x_105_; 
v___x_105_ = lean_obj_once(&l_Std_instReprCancellationReason_repr___closed__7, &l_Std_instReprCancellationReason_repr___closed__7_once, _init_l_Std_instReprCancellationReason_repr___closed__7);
v___y_85_ = v___x_105_;
goto v___jp_84_;
}
}
case 2:
{
lean_object* v___x_106_; uint8_t v___x_107_; 
v___x_106_ = lean_unsigned_to_nat(1024u);
v___x_107_ = lean_nat_dec_le(v___x_106_, v_prec_76_);
if (v___x_107_ == 0)
{
lean_object* v___x_108_; 
v___x_108_ = lean_obj_once(&l_Std_instReprCancellationReason_repr___closed__6, &l_Std_instReprCancellationReason_repr___closed__6_once, _init_l_Std_instReprCancellationReason_repr___closed__6);
v___y_78_ = v___x_108_;
goto v___jp_77_;
}
else
{
lean_object* v___x_109_; 
v___x_109_ = lean_obj_once(&l_Std_instReprCancellationReason_repr___closed__7, &l_Std_instReprCancellationReason_repr___closed__7_once, _init_l_Std_instReprCancellationReason_repr___closed__7);
v___y_78_ = v___x_109_;
goto v___jp_77_;
}
}
default: 
{
lean_object* v_msg_110_; lean_object* v___x_112_; uint8_t v_isShared_113_; uint8_t v_isSharedCheck_130_; 
v_msg_110_ = lean_ctor_get(v_x_75_, 0);
v_isSharedCheck_130_ = !lean_is_exclusive(v_x_75_);
if (v_isSharedCheck_130_ == 0)
{
v___x_112_ = v_x_75_;
v_isShared_113_ = v_isSharedCheck_130_;
goto v_resetjp_111_;
}
else
{
lean_inc(v_msg_110_);
lean_dec(v_x_75_);
v___x_112_ = lean_box(0);
v_isShared_113_ = v_isSharedCheck_130_;
goto v_resetjp_111_;
}
v_resetjp_111_:
{
lean_object* v___y_115_; lean_object* v___x_126_; uint8_t v___x_127_; 
v___x_126_ = lean_unsigned_to_nat(1024u);
v___x_127_ = lean_nat_dec_le(v___x_126_, v_prec_76_);
if (v___x_127_ == 0)
{
lean_object* v___x_128_; 
v___x_128_ = lean_obj_once(&l_Std_instReprCancellationReason_repr___closed__6, &l_Std_instReprCancellationReason_repr___closed__6_once, _init_l_Std_instReprCancellationReason_repr___closed__6);
v___y_115_ = v___x_128_;
goto v___jp_114_;
}
else
{
lean_object* v___x_129_; 
v___x_129_ = lean_obj_once(&l_Std_instReprCancellationReason_repr___closed__7, &l_Std_instReprCancellationReason_repr___closed__7_once, _init_l_Std_instReprCancellationReason_repr___closed__7);
v___y_115_ = v___x_129_;
goto v___jp_114_;
}
v___jp_114_:
{
lean_object* v___x_116_; lean_object* v___x_117_; lean_object* v___x_119_; 
v___x_116_ = ((lean_object*)(l_Std_instReprCancellationReason_repr___closed__10));
v___x_117_ = l_String_quote(v_msg_110_);
if (v_isShared_113_ == 0)
{
lean_ctor_set(v___x_112_, 0, v___x_117_);
v___x_119_ = v___x_112_;
goto v_reusejp_118_;
}
else
{
lean_object* v_reuseFailAlloc_125_; 
v_reuseFailAlloc_125_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_125_, 0, v___x_117_);
v___x_119_ = v_reuseFailAlloc_125_;
goto v_reusejp_118_;
}
v_reusejp_118_:
{
lean_object* v___x_120_; lean_object* v___x_121_; uint8_t v___x_122_; lean_object* v___x_123_; lean_object* v___x_124_; 
v___x_120_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_120_, 0, v___x_116_);
lean_ctor_set(v___x_120_, 1, v___x_119_);
lean_inc(v___y_115_);
v___x_121_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_121_, 0, v___y_115_);
lean_ctor_set(v___x_121_, 1, v___x_120_);
v___x_122_ = 0;
v___x_123_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_123_, 0, v___x_121_);
lean_ctor_set_uint8(v___x_123_, sizeof(void*)*1, v___x_122_);
v___x_124_ = l_Repr_addAppParen(v___x_123_, v_prec_76_);
return v___x_124_;
}
}
}
}
}
v___jp_77_:
{
lean_object* v___x_79_; lean_object* v___x_80_; uint8_t v___x_81_; lean_object* v___x_82_; lean_object* v___x_83_; 
v___x_79_ = ((lean_object*)(l_Std_instReprCancellationReason_repr___closed__1));
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
v___x_86_ = ((lean_object*)(l_Std_instReprCancellationReason_repr___closed__3));
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
v___x_93_ = ((lean_object*)(l_Std_instReprCancellationReason_repr___closed__5));
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
LEAN_EXPORT lean_object* l_Std_instReprCancellationReason_repr___boxed(lean_object* v_x_131_, lean_object* v_prec_132_){
_start:
{
lean_object* v_res_133_; 
v_res_133_ = l_Std_instReprCancellationReason_repr(v_x_131_, v_prec_132_);
lean_dec(v_prec_132_);
return v_res_133_;
}
}
LEAN_EXPORT uint8_t l_Std_instBEqCancellationReason_beq(lean_object* v_x_136_, lean_object* v_x_137_){
_start:
{
switch(lean_obj_tag(v_x_136_))
{
case 0:
{
if (lean_obj_tag(v_x_137_) == 0)
{
uint8_t v___x_138_; 
v___x_138_ = 1;
return v___x_138_;
}
else
{
uint8_t v___x_139_; 
v___x_139_ = 0;
return v___x_139_;
}
}
case 1:
{
if (lean_obj_tag(v_x_137_) == 1)
{
uint8_t v___x_140_; 
v___x_140_ = 1;
return v___x_140_;
}
else
{
uint8_t v___x_141_; 
v___x_141_ = 0;
return v___x_141_;
}
}
case 2:
{
if (lean_obj_tag(v_x_137_) == 2)
{
uint8_t v___x_142_; 
v___x_142_ = 1;
return v___x_142_;
}
else
{
uint8_t v___x_143_; 
v___x_143_ = 0;
return v___x_143_;
}
}
default: 
{
if (lean_obj_tag(v_x_137_) == 3)
{
lean_object* v_msg_144_; lean_object* v_msg_145_; uint8_t v___x_146_; 
v_msg_144_ = lean_ctor_get(v_x_136_, 0);
v_msg_145_ = lean_ctor_get(v_x_137_, 0);
v___x_146_ = lean_string_dec_eq(v_msg_144_, v_msg_145_);
return v___x_146_;
}
else
{
uint8_t v___x_147_; 
v___x_147_ = 0;
return v___x_147_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_instBEqCancellationReason_beq___boxed(lean_object* v_x_148_, lean_object* v_x_149_){
_start:
{
uint8_t v_res_150_; lean_object* v_r_151_; 
v_res_150_ = l_Std_instBEqCancellationReason_beq(v_x_148_, v_x_149_);
lean_dec(v_x_149_);
lean_dec(v_x_148_);
v_r_151_ = lean_box(v_res_150_);
return v_r_151_;
}
}
LEAN_EXPORT lean_object* l_Std_instToStringCancellationReason___lam__0(lean_object* v_x_159_){
_start:
{
switch(lean_obj_tag(v_x_159_))
{
case 0:
{
lean_object* v___x_160_; 
v___x_160_ = ((lean_object*)(l_Std_instToStringCancellationReason___lam__0___closed__0));
return v___x_160_;
}
case 1:
{
lean_object* v___x_161_; 
v___x_161_ = ((lean_object*)(l_Std_instToStringCancellationReason___lam__0___closed__1));
return v___x_161_;
}
case 2:
{
lean_object* v___x_162_; 
v___x_162_ = ((lean_object*)(l_Std_instToStringCancellationReason___lam__0___closed__2));
return v___x_162_;
}
default: 
{
lean_object* v_msg_163_; lean_object* v___x_164_; lean_object* v___x_165_; lean_object* v___x_166_; lean_object* v___x_167_; 
v_msg_163_ = lean_ctor_get(v_x_159_, 0);
v___x_164_ = ((lean_object*)(l_Std_instToStringCancellationReason___lam__0___closed__3));
v___x_165_ = lean_string_append(v___x_164_, v_msg_163_);
v___x_166_ = ((lean_object*)(l_Std_instToStringCancellationReason___lam__0___closed__4));
v___x_167_ = lean_string_append(v___x_165_, v___x_166_);
return v___x_167_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_instToStringCancellationReason___lam__0___boxed(lean_object* v_x_168_){
_start:
{
lean_object* v_res_169_; 
v_res_169_ = l_Std_instToStringCancellationReason___lam__0(v_x_168_);
lean_dec(v_x_168_);
return v_res_169_;
}
}
LEAN_EXPORT lean_object* l_Std_CancellationToken_Consumer_ctorIdx(lean_object* v_x_172_){
_start:
{
if (lean_obj_tag(v_x_172_) == 0)
{
lean_object* v___x_173_; 
v___x_173_ = lean_unsigned_to_nat(0u);
return v___x_173_;
}
else
{
lean_object* v___x_174_; 
v___x_174_ = lean_unsigned_to_nat(1u);
return v___x_174_;
}
}
}
LEAN_EXPORT lean_object* l_Std_CancellationToken_Consumer_ctorIdx___boxed(lean_object* v_x_175_){
_start:
{
lean_object* v_res_176_; 
v_res_176_ = l_Std_CancellationToken_Consumer_ctorIdx(v_x_175_);
lean_dec_ref(v_x_175_);
return v_res_176_;
}
}
LEAN_EXPORT lean_object* l_Std_CancellationToken_Consumer_ctorElim___redArg(lean_object* v_t_177_, lean_object* v_k_178_){
_start:
{
if (lean_obj_tag(v_t_177_) == 0)
{
lean_object* v_promise_179_; lean_object* v___x_180_; 
v_promise_179_ = lean_ctor_get(v_t_177_, 0);
lean_inc(v_promise_179_);
lean_dec_ref_known(v_t_177_, 1);
v___x_180_ = lean_apply_1(v_k_178_, v_promise_179_);
return v___x_180_;
}
else
{
lean_object* v_finished_181_; lean_object* v___x_182_; 
v_finished_181_ = lean_ctor_get(v_t_177_, 0);
lean_inc_ref(v_finished_181_);
lean_dec_ref_known(v_t_177_, 1);
v___x_182_ = lean_apply_1(v_k_178_, v_finished_181_);
return v___x_182_;
}
}
}
LEAN_EXPORT lean_object* l_Std_CancellationToken_Consumer_ctorElim(lean_object* v_motive_183_, lean_object* v_ctorIdx_184_, lean_object* v_t_185_, lean_object* v_h_186_, lean_object* v_k_187_){
_start:
{
lean_object* v___x_188_; 
v___x_188_ = l_Std_CancellationToken_Consumer_ctorElim___redArg(v_t_185_, v_k_187_);
return v___x_188_;
}
}
LEAN_EXPORT lean_object* l_Std_CancellationToken_Consumer_ctorElim___boxed(lean_object* v_motive_189_, lean_object* v_ctorIdx_190_, lean_object* v_t_191_, lean_object* v_h_192_, lean_object* v_k_193_){
_start:
{
lean_object* v_res_194_; 
v_res_194_ = l_Std_CancellationToken_Consumer_ctorElim(v_motive_189_, v_ctorIdx_190_, v_t_191_, v_h_192_, v_k_193_);
lean_dec(v_ctorIdx_190_);
return v_res_194_;
}
}
LEAN_EXPORT lean_object* l_Std_CancellationToken_Consumer_normal_elim___redArg(lean_object* v_t_195_, lean_object* v_normal_196_){
_start:
{
lean_object* v___x_197_; 
v___x_197_ = l_Std_CancellationToken_Consumer_ctorElim___redArg(v_t_195_, v_normal_196_);
return v___x_197_;
}
}
LEAN_EXPORT lean_object* l_Std_CancellationToken_Consumer_normal_elim(lean_object* v_motive_198_, lean_object* v_t_199_, lean_object* v_h_200_, lean_object* v_normal_201_){
_start:
{
lean_object* v___x_202_; 
v___x_202_ = l_Std_CancellationToken_Consumer_ctorElim___redArg(v_t_199_, v_normal_201_);
return v___x_202_;
}
}
LEAN_EXPORT lean_object* l_Std_CancellationToken_Consumer_select_elim___redArg(lean_object* v_t_203_, lean_object* v_select_204_){
_start:
{
lean_object* v___x_205_; 
v___x_205_ = l_Std_CancellationToken_Consumer_ctorElim___redArg(v_t_203_, v_select_204_);
return v___x_205_;
}
}
LEAN_EXPORT lean_object* l_Std_CancellationToken_Consumer_select_elim(lean_object* v_motive_206_, lean_object* v_t_207_, lean_object* v_h_208_, lean_object* v_select_209_){
_start:
{
lean_object* v___x_210_; 
v___x_210_ = l_Std_CancellationToken_Consumer_ctorElim___redArg(v_t_207_, v_select_209_);
return v___x_210_;
}
}
LEAN_EXPORT uint8_t l_Std_Async_Waiter_race___at___00Std_CancellationToken_Consumer_resolve_spec__0(lean_object* v_w_213_, lean_object* v_lose_214_){
_start:
{
lean_object* v_finished_216_; lean_object* v_promise_217_; lean_object* v___x_218_; uint8_t v___y_220_; uint8_t v___x_228_; 
v_finished_216_ = lean_ctor_get(v_w_213_, 0);
v_promise_217_ = lean_ctor_get(v_w_213_, 1);
v___x_218_ = lean_st_ref_take(v_finished_216_);
v___x_228_ = lean_unbox(v___x_218_);
lean_dec(v___x_218_);
if (v___x_228_ == 0)
{
uint8_t v___x_229_; 
v___x_229_ = 1;
v___y_220_ = v___x_229_;
goto v___jp_219_;
}
else
{
uint8_t v___x_230_; 
v___x_230_ = 0;
v___y_220_ = v___x_230_;
goto v___jp_219_;
}
v___jp_219_:
{
uint8_t v___x_221_; lean_object* v___x_222_; lean_object* v___x_223_; 
v___x_221_ = 1;
v___x_222_ = lean_box(v___x_221_);
v___x_223_ = lean_st_ref_put(v_finished_216_, v___x_222_);
if (v___y_220_ == 0)
{
lean_object* v___x_224_; uint8_t v___x_225_; 
v___x_224_ = lean_apply_1(v_lose_214_, lean_box(0));
v___x_225_ = lean_unbox(v___x_224_);
return v___x_225_;
}
else
{
lean_object* v___x_226_; lean_object* v___x_227_; 
lean_dec_ref(v_lose_214_);
v___x_226_ = ((lean_object*)(l_Std_Async_Waiter_race___at___00Std_CancellationToken_Consumer_resolve_spec__0___closed__0));
v___x_227_ = lean_io_promise_resolve(v___x_226_, v_promise_217_);
return v___y_220_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_Waiter_race___at___00Std_CancellationToken_Consumer_resolve_spec__0___boxed(lean_object* v_w_231_, lean_object* v_lose_232_, lean_object* v___y_233_){
_start:
{
uint8_t v_res_234_; lean_object* v_r_235_; 
v_res_234_ = l_Std_Async_Waiter_race___at___00Std_CancellationToken_Consumer_resolve_spec__0(v_w_231_, v_lose_232_);
lean_dec_ref(v_w_231_);
v_r_235_ = lean_box(v_res_234_);
return v_r_235_;
}
}
LEAN_EXPORT uint8_t l_Std_CancellationToken_Consumer_resolve___lam__0(uint8_t v___x_236_){
_start:
{
return v___x_236_;
}
}
LEAN_EXPORT lean_object* l_Std_CancellationToken_Consumer_resolve___lam__0___boxed(lean_object* v___x_238_, lean_object* v___y_239_){
_start:
{
uint8_t v___x_1185__boxed_240_; uint8_t v_res_241_; lean_object* v_r_242_; 
v___x_1185__boxed_240_ = lean_unbox(v___x_238_);
v_res_241_ = l_Std_CancellationToken_Consumer_resolve___lam__0(v___x_1185__boxed_240_);
v_r_242_ = lean_box(v_res_241_);
return v_r_242_;
}
}
LEAN_EXPORT uint8_t l_Std_CancellationToken_Consumer_resolve(lean_object* v_c_246_){
_start:
{
if (lean_obj_tag(v_c_246_) == 0)
{
lean_object* v_promise_248_; lean_object* v___x_249_; lean_object* v___x_250_; uint8_t v___x_251_; 
v_promise_248_ = lean_ctor_get(v_c_246_, 0);
v___x_249_ = lean_box(0);
v___x_250_ = lean_io_promise_resolve(v___x_249_, v_promise_248_);
v___x_251_ = 1;
return v___x_251_;
}
else
{
lean_object* v_finished_252_; lean_object* v_lose_253_; uint8_t v___x_254_; 
v_finished_252_ = lean_ctor_get(v_c_246_, 0);
v_lose_253_ = ((lean_object*)(l_Std_CancellationToken_Consumer_resolve___closed__0));
v___x_254_ = l_Std_Async_Waiter_race___at___00Std_CancellationToken_Consumer_resolve_spec__0(v_finished_252_, v_lose_253_);
return v___x_254_;
}
}
}
LEAN_EXPORT lean_object* l_Std_CancellationToken_Consumer_resolve___boxed(lean_object* v_c_255_, lean_object* v___y_256_){
_start:
{
uint8_t v_res_257_; lean_object* v_r_258_; 
v_res_257_ = l_Std_CancellationToken_Consumer_resolve(v_c_255_);
lean_dec_ref(v_c_255_);
v_r_258_ = lean_box(v_res_257_);
return v_r_258_;
}
}
static lean_object* _init_l_Std_CancellationToken_new___closed__0(void){
_start:
{
lean_object* v___x_259_; 
v___x_259_ = l_Std_Queue_empty___redArg();
return v___x_259_;
}
}
static lean_object* _init_l_Std_CancellationToken_new___closed__1(void){
_start:
{
lean_object* v___x_260_; lean_object* v___x_261_; lean_object* v___x_262_; 
v___x_260_ = lean_obj_once(&l_Std_CancellationToken_new___closed__0, &l_Std_CancellationToken_new___closed__0_once, _init_l_Std_CancellationToken_new___closed__0);
v___x_261_ = lean_box(0);
v___x_262_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_262_, 0, v___x_261_);
lean_ctor_set(v___x_262_, 1, v___x_260_);
return v___x_262_;
}
}
LEAN_EXPORT lean_object* l_Std_CancellationToken_new(){
_start:
{
lean_object* v___x_264_; lean_object* v___x_265_; 
v___x_264_ = lean_obj_once(&l_Std_CancellationToken_new___closed__1, &l_Std_CancellationToken_new___closed__1_once, _init_l_Std_CancellationToken_new___closed__1);
v___x_265_ = l_Std_Mutex_new___redArg(v___x_264_);
return v___x_265_;
}
}
LEAN_EXPORT lean_object* l_Std_CancellationToken_new___boxed(lean_object* v___y_266_){
_start:
{
lean_object* v_res_267_; 
v_res_267_ = l_Std_CancellationToken_new();
return v_res_267_;
}
}
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00Std_CancellationToken_cancel_spec__1___redArg(lean_object* v_mutex_268_, lean_object* v_k_269_){
_start:
{
lean_object* v_ref_271_; lean_object* v_mutex_272_; lean_object* v___x_273_; lean_object* v___x_274_; lean_object* v___x_275_; 
v_ref_271_ = lean_ctor_get(v_mutex_268_, 0);
lean_inc(v_ref_271_);
v_mutex_272_ = lean_ctor_get(v_mutex_268_, 1);
lean_inc(v_mutex_272_);
lean_dec_ref(v_mutex_268_);
v___x_273_ = lean_io_basemutex_lock(v_mutex_272_);
v___x_274_ = lean_apply_2(v_k_269_, v_ref_271_, lean_box(0));
v___x_275_ = lean_io_basemutex_unlock(v_mutex_272_);
lean_dec(v_mutex_272_);
return v___x_274_;
}
}
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00Std_CancellationToken_cancel_spec__1___redArg___boxed(lean_object* v_mutex_276_, lean_object* v_k_277_, lean_object* v___y_278_){
_start:
{
lean_object* v_res_279_; 
v_res_279_ = l_Std_Mutex_atomically___at___00Std_CancellationToken_cancel_spec__1___redArg(v_mutex_276_, v_k_277_);
return v_res_279_;
}
}
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00Std_CancellationToken_cancel_spec__1(lean_object* v_00_u03b1_280_, lean_object* v_00_u03b2_281_, lean_object* v_mutex_282_, lean_object* v_k_283_){
_start:
{
lean_object* v___x_285_; 
v___x_285_ = l_Std_Mutex_atomically___at___00Std_CancellationToken_cancel_spec__1___redArg(v_mutex_282_, v_k_283_);
return v___x_285_;
}
}
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00Std_CancellationToken_cancel_spec__1___boxed(lean_object* v_00_u03b1_286_, lean_object* v_00_u03b2_287_, lean_object* v_mutex_288_, lean_object* v_k_289_, lean_object* v___y_290_){
_start:
{
lean_object* v_res_291_; 
v_res_291_ = l_Std_Mutex_atomically___at___00Std_CancellationToken_cancel_spec__1(v_00_u03b1_286_, v_00_u03b2_287_, v_mutex_288_, v_k_289_);
return v_res_291_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Std_CancellationToken_cancel_spec__0___redArg(lean_object* v_a_292_){
_start:
{
lean_object* v___x_294_; 
lean_inc_ref(v_a_292_);
v___x_294_ = l_Std_Queue_dequeue_x3f___redArg(v_a_292_);
if (lean_obj_tag(v___x_294_) == 1)
{
lean_object* v_val_295_; lean_object* v_fst_296_; lean_object* v_snd_297_; uint8_t v___x_298_; 
lean_dec_ref(v_a_292_);
v_val_295_ = lean_ctor_get(v___x_294_, 0);
lean_inc(v_val_295_);
lean_dec_ref_known(v___x_294_, 1);
v_fst_296_ = lean_ctor_get(v_val_295_, 0);
lean_inc(v_fst_296_);
v_snd_297_ = lean_ctor_get(v_val_295_, 1);
lean_inc(v_snd_297_);
lean_dec(v_val_295_);
v___x_298_ = l_Std_CancellationToken_Consumer_resolve(v_fst_296_);
lean_dec(v_fst_296_);
v_a_292_ = v_snd_297_;
goto _start;
}
else
{
lean_dec(v___x_294_);
return v_a_292_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Std_CancellationToken_cancel_spec__0___redArg___boxed(lean_object* v_a_300_, lean_object* v___y_301_){
_start:
{
lean_object* v_res_302_; 
v_res_302_ = l___private_Init_While_0__repeatM_erased___at___00Std_CancellationToken_cancel_spec__0___redArg(v_a_300_);
return v_res_302_;
}
}
LEAN_EXPORT lean_object* l_Std_CancellationToken_cancel___lam__0(lean_object* v_reason_303_, lean_object* v___y_304_){
_start:
{
lean_object* v___x_306_; lean_object* v_reason_307_; 
v___x_306_ = lean_st_ref_get(v___y_304_);
v_reason_307_ = lean_ctor_get(v___x_306_, 0);
lean_inc(v_reason_307_);
if (lean_obj_tag(v_reason_307_) == 0)
{
lean_object* v_consumers_308_; lean_object* v___x_310_; uint8_t v_isShared_311_; uint8_t v_isSharedCheck_320_; 
v_consumers_308_ = lean_ctor_get(v___x_306_, 1);
v_isSharedCheck_320_ = !lean_is_exclusive(v___x_306_);
if (v_isSharedCheck_320_ == 0)
{
lean_object* v_unused_321_; 
v_unused_321_ = lean_ctor_get(v___x_306_, 0);
lean_dec(v_unused_321_);
v___x_310_ = v___x_306_;
v_isShared_311_ = v_isSharedCheck_320_;
goto v_resetjp_309_;
}
else
{
lean_inc(v_consumers_308_);
lean_dec(v___x_306_);
v___x_310_ = lean_box(0);
v_isShared_311_ = v_isSharedCheck_320_;
goto v_resetjp_309_;
}
v_resetjp_309_:
{
lean_object* v___x_312_; lean_object* v___x_313_; lean_object* v_st_315_; 
v___x_312_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_312_, 0, v_reason_303_);
v___x_313_ = lean_obj_once(&l_Std_CancellationToken_new___closed__0, &l_Std_CancellationToken_new___closed__0_once, _init_l_Std_CancellationToken_new___closed__0);
if (v_isShared_311_ == 0)
{
lean_ctor_set(v___x_310_, 1, v___x_313_);
lean_ctor_set(v___x_310_, 0, v___x_312_);
v_st_315_ = v___x_310_;
goto v_reusejp_314_;
}
else
{
lean_object* v_reuseFailAlloc_319_; 
v_reuseFailAlloc_319_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_319_, 0, v___x_312_);
lean_ctor_set(v_reuseFailAlloc_319_, 1, v___x_313_);
v_st_315_ = v_reuseFailAlloc_319_;
goto v_reusejp_314_;
}
v_reusejp_314_:
{
lean_object* v___x_316_; lean_object* v___x_317_; lean_object* v___x_318_; 
v___x_316_ = l___private_Init_While_0__repeatM_erased___at___00Std_CancellationToken_cancel_spec__0___redArg(v_consumers_308_);
lean_dec_ref(v___x_316_);
v___x_317_ = lean_box(0);
v___x_318_ = lean_st_ref_swap(v___y_304_, v_st_315_);
lean_dec(v___x_318_);
return v___x_317_;
}
}
}
else
{
lean_object* v___x_322_; 
lean_dec_ref_known(v_reason_307_, 1);
lean_dec(v___x_306_);
lean_dec(v_reason_303_);
v___x_322_ = lean_box(0);
return v___x_322_;
}
}
}
LEAN_EXPORT lean_object* l_Std_CancellationToken_cancel___lam__0___boxed(lean_object* v_reason_323_, lean_object* v___y_324_, lean_object* v___y_325_){
_start:
{
lean_object* v_res_326_; 
v_res_326_ = l_Std_CancellationToken_cancel___lam__0(v_reason_323_, v___y_324_);
lean_dec(v___y_324_);
return v_res_326_;
}
}
LEAN_EXPORT lean_object* l_Std_CancellationToken_cancel(lean_object* v_x_327_, lean_object* v_reason_328_){
_start:
{
lean_object* v___f_330_; lean_object* v___x_331_; 
v___f_330_ = lean_alloc_closure((void*)(l_Std_CancellationToken_cancel___lam__0___boxed), 3, 1);
lean_closure_set(v___f_330_, 0, v_reason_328_);
v___x_331_ = l_Std_Mutex_atomically___at___00Std_CancellationToken_cancel_spec__1___redArg(v_x_327_, v___f_330_);
return v___x_331_;
}
}
LEAN_EXPORT lean_object* l_Std_CancellationToken_cancel___boxed(lean_object* v_x_332_, lean_object* v_reason_333_, lean_object* v___y_334_){
_start:
{
lean_object* v_res_335_; 
v_res_335_ = l_Std_CancellationToken_cancel(v_x_332_, v_reason_333_);
return v_res_335_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Std_CancellationToken_cancel_spec__0(lean_object* v_inst_336_, lean_object* v_a_337_, lean_object* v___y_338_){
_start:
{
lean_object* v___x_340_; 
v___x_340_ = l___private_Init_While_0__repeatM_erased___at___00Std_CancellationToken_cancel_spec__0___redArg(v_a_337_);
return v___x_340_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Std_CancellationToken_cancel_spec__0___boxed(lean_object* v_inst_341_, lean_object* v_a_342_, lean_object* v___y_343_, lean_object* v___y_344_){
_start:
{
lean_object* v_res_345_; 
v_res_345_ = l___private_Init_While_0__repeatM_erased___at___00Std_CancellationToken_cancel_spec__0(v_inst_341_, v_a_342_, v___y_343_);
lean_dec(v___y_343_);
return v_res_345_;
}
}
LEAN_EXPORT uint8_t l_Std_CancellationToken_isCancelled___lam__0(lean_object* v___y_346_){
_start:
{
lean_object* v___x_348_; lean_object* v_reason_349_; 
v___x_348_ = lean_st_ref_get(v___y_346_);
v_reason_349_ = lean_ctor_get(v___x_348_, 0);
lean_inc(v_reason_349_);
lean_dec(v___x_348_);
if (lean_obj_tag(v_reason_349_) == 0)
{
uint8_t v___x_350_; 
v___x_350_ = 0;
return v___x_350_;
}
else
{
uint8_t v___x_351_; 
lean_dec_ref_known(v_reason_349_, 1);
v___x_351_ = 1;
return v___x_351_;
}
}
}
LEAN_EXPORT lean_object* l_Std_CancellationToken_isCancelled___lam__0___boxed(lean_object* v___y_352_, lean_object* v___y_353_){
_start:
{
uint8_t v_res_354_; lean_object* v_r_355_; 
v_res_354_ = l_Std_CancellationToken_isCancelled___lam__0(v___y_352_);
lean_dec(v___y_352_);
v_r_355_ = lean_box(v_res_354_);
return v_r_355_;
}
}
LEAN_EXPORT uint8_t l_Std_CancellationToken_isCancelled(lean_object* v_x_357_){
_start:
{
lean_object* v___f_359_; lean_object* v___x_360_; uint8_t v___x_361_; 
v___f_359_ = ((lean_object*)(l_Std_CancellationToken_isCancelled___closed__0));
v___x_360_ = l_Std_Mutex_atomically___at___00Std_CancellationToken_cancel_spec__1___redArg(v_x_357_, v___f_359_);
v___x_361_ = lean_unbox(v___x_360_);
lean_dec(v___x_360_);
return v___x_361_;
}
}
LEAN_EXPORT lean_object* l_Std_CancellationToken_isCancelled___boxed(lean_object* v_x_362_, lean_object* v___y_363_){
_start:
{
uint8_t v_res_364_; lean_object* v_r_365_; 
v_res_364_ = l_Std_CancellationToken_isCancelled(v_x_362_);
v_r_365_ = lean_box(v_res_364_);
return v_r_365_;
}
}
LEAN_EXPORT lean_object* l_Std_CancellationToken_getCancellationReason___lam__0(lean_object* v___y_366_){
_start:
{
lean_object* v___x_368_; lean_object* v_reason_369_; 
v___x_368_ = lean_st_ref_get(v___y_366_);
v_reason_369_ = lean_ctor_get(v___x_368_, 0);
lean_inc(v_reason_369_);
lean_dec(v___x_368_);
return v_reason_369_;
}
}
LEAN_EXPORT lean_object* l_Std_CancellationToken_getCancellationReason___lam__0___boxed(lean_object* v___y_370_, lean_object* v___y_371_){
_start:
{
lean_object* v_res_372_; 
v_res_372_ = l_Std_CancellationToken_getCancellationReason___lam__0(v___y_370_);
lean_dec(v___y_370_);
return v_res_372_;
}
}
LEAN_EXPORT lean_object* l_Std_CancellationToken_getCancellationReason(lean_object* v_x_374_){
_start:
{
lean_object* v___f_376_; lean_object* v___x_377_; 
v___f_376_ = ((lean_object*)(l_Std_CancellationToken_getCancellationReason___closed__0));
v___x_377_ = l_Std_Mutex_atomically___at___00Std_CancellationToken_cancel_spec__1___redArg(v_x_374_, v___f_376_);
return v___x_377_;
}
}
LEAN_EXPORT lean_object* l_Std_CancellationToken_getCancellationReason___boxed(lean_object* v_x_378_, lean_object* v___y_379_){
_start:
{
lean_object* v_res_380_; 
v_res_380_ = l_Std_CancellationToken_getCancellationReason(v_x_378_);
return v_res_380_;
}
}
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00Std_CancellationToken_wait_spec__0___redArg___lam__0(lean_object* v_mutex_381_, lean_object* v_a_x3f_382_){
_start:
{
lean_object* v___x_384_; lean_object* v___x_385_; 
v___x_384_ = lean_io_basemutex_unlock(v_mutex_381_);
v___x_385_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_385_, 0, v___x_384_);
return v___x_385_;
}
}
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00Std_CancellationToken_wait_spec__0___redArg___lam__0___boxed(lean_object* v_mutex_386_, lean_object* v_a_x3f_387_, lean_object* v___y_388_){
_start:
{
lean_object* v_res_389_; 
v_res_389_ = l_Std_Mutex_atomically___at___00Std_CancellationToken_wait_spec__0___redArg___lam__0(v_mutex_386_, v_a_x3f_387_);
lean_dec(v_a_x3f_387_);
lean_dec(v_mutex_386_);
return v_res_389_;
}
}
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00Std_CancellationToken_wait_spec__0___redArg(lean_object* v_mutex_390_, lean_object* v_k_391_){
_start:
{
lean_object* v_ref_393_; lean_object* v_mutex_394_; lean_object* v___x_395_; lean_object* v___x_396_; 
v_ref_393_ = lean_ctor_get(v_mutex_390_, 0);
lean_inc(v_ref_393_);
v_mutex_394_ = lean_ctor_get(v_mutex_390_, 1);
lean_inc(v_mutex_394_);
lean_dec_ref(v_mutex_390_);
v___x_395_ = lean_io_basemutex_lock(v_mutex_394_);
v___x_396_ = lean_apply_2(v_k_391_, v_ref_393_, lean_box(0));
if (lean_obj_tag(v___x_396_) == 0)
{
lean_object* v_a_397_; lean_object* v___x_399_; uint8_t v_isShared_400_; uint8_t v_isSharedCheck_413_; 
v_a_397_ = lean_ctor_get(v___x_396_, 0);
v_isSharedCheck_413_ = !lean_is_exclusive(v___x_396_);
if (v_isSharedCheck_413_ == 0)
{
v___x_399_ = v___x_396_;
v_isShared_400_ = v_isSharedCheck_413_;
goto v_resetjp_398_;
}
else
{
lean_inc(v_a_397_);
lean_dec(v___x_396_);
v___x_399_ = lean_box(0);
v_isShared_400_ = v_isSharedCheck_413_;
goto v_resetjp_398_;
}
v_resetjp_398_:
{
lean_object* v___x_402_; 
lean_inc(v_a_397_);
if (v_isShared_400_ == 0)
{
lean_ctor_set_tag(v___x_399_, 1);
v___x_402_ = v___x_399_;
goto v_reusejp_401_;
}
else
{
lean_object* v_reuseFailAlloc_412_; 
v_reuseFailAlloc_412_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_412_, 0, v_a_397_);
v___x_402_ = v_reuseFailAlloc_412_;
goto v_reusejp_401_;
}
v_reusejp_401_:
{
lean_object* v___x_403_; lean_object* v___x_405_; uint8_t v_isShared_406_; uint8_t v_isSharedCheck_410_; 
v___x_403_ = l_Std_Mutex_atomically___at___00Std_CancellationToken_wait_spec__0___redArg___lam__0(v_mutex_394_, v___x_402_);
lean_dec_ref(v___x_402_);
lean_dec(v_mutex_394_);
v_isSharedCheck_410_ = !lean_is_exclusive(v___x_403_);
if (v_isSharedCheck_410_ == 0)
{
lean_object* v_unused_411_; 
v_unused_411_ = lean_ctor_get(v___x_403_, 0);
lean_dec(v_unused_411_);
v___x_405_ = v___x_403_;
v_isShared_406_ = v_isSharedCheck_410_;
goto v_resetjp_404_;
}
else
{
lean_dec(v___x_403_);
v___x_405_ = lean_box(0);
v_isShared_406_ = v_isSharedCheck_410_;
goto v_resetjp_404_;
}
v_resetjp_404_:
{
lean_object* v___x_408_; 
if (v_isShared_406_ == 0)
{
lean_ctor_set(v___x_405_, 0, v_a_397_);
v___x_408_ = v___x_405_;
goto v_reusejp_407_;
}
else
{
lean_object* v_reuseFailAlloc_409_; 
v_reuseFailAlloc_409_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_409_, 0, v_a_397_);
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
else
{
lean_object* v_a_414_; lean_object* v___x_415_; lean_object* v___x_416_; lean_object* v___x_418_; uint8_t v_isShared_419_; uint8_t v_isSharedCheck_423_; 
v_a_414_ = lean_ctor_get(v___x_396_, 0);
lean_inc(v_a_414_);
lean_dec_ref_known(v___x_396_, 1);
v___x_415_ = lean_box(0);
v___x_416_ = l_Std_Mutex_atomically___at___00Std_CancellationToken_wait_spec__0___redArg___lam__0(v_mutex_394_, v___x_415_);
lean_dec(v_mutex_394_);
v_isSharedCheck_423_ = !lean_is_exclusive(v___x_416_);
if (v_isSharedCheck_423_ == 0)
{
lean_object* v_unused_424_; 
v_unused_424_ = lean_ctor_get(v___x_416_, 0);
lean_dec(v_unused_424_);
v___x_418_ = v___x_416_;
v_isShared_419_ = v_isSharedCheck_423_;
goto v_resetjp_417_;
}
else
{
lean_dec(v___x_416_);
v___x_418_ = lean_box(0);
v_isShared_419_ = v_isSharedCheck_423_;
goto v_resetjp_417_;
}
v_resetjp_417_:
{
lean_object* v___x_421_; 
if (v_isShared_419_ == 0)
{
lean_ctor_set_tag(v___x_418_, 1);
lean_ctor_set(v___x_418_, 0, v_a_414_);
v___x_421_ = v___x_418_;
goto v_reusejp_420_;
}
else
{
lean_object* v_reuseFailAlloc_422_; 
v_reuseFailAlloc_422_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_422_, 0, v_a_414_);
v___x_421_ = v_reuseFailAlloc_422_;
goto v_reusejp_420_;
}
v_reusejp_420_:
{
return v___x_421_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00Std_CancellationToken_wait_spec__0___redArg___boxed(lean_object* v_mutex_425_, lean_object* v_k_426_, lean_object* v___y_427_){
_start:
{
lean_object* v_res_428_; 
v_res_428_ = l_Std_Mutex_atomically___at___00Std_CancellationToken_wait_spec__0___redArg(v_mutex_425_, v_k_426_);
return v_res_428_;
}
}
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00Std_CancellationToken_wait_spec__0(lean_object* v_00_u03b1_429_, lean_object* v_00_u03b2_430_, lean_object* v_mutex_431_, lean_object* v_k_432_){
_start:
{
lean_object* v___x_434_; 
v___x_434_ = l_Std_Mutex_atomically___at___00Std_CancellationToken_wait_spec__0___redArg(v_mutex_431_, v_k_432_);
return v___x_434_;
}
}
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00Std_CancellationToken_wait_spec__0___boxed(lean_object* v_00_u03b1_435_, lean_object* v_00_u03b2_436_, lean_object* v_mutex_437_, lean_object* v_k_438_, lean_object* v___y_439_){
_start:
{
lean_object* v_res_440_; 
v_res_440_ = l_Std_Mutex_atomically___at___00Std_CancellationToken_wait_spec__0(v_00_u03b1_435_, v_00_u03b2_436_, v_mutex_437_, v_k_438_);
return v_res_440_;
}
}
static lean_object* _init_l_Std_CancellationToken_wait___lam__0___closed__1(void){
_start:
{
lean_object* v___x_442_; lean_object* v___x_443_; 
v___x_442_ = ((lean_object*)(l_Std_CancellationToken_wait___lam__0___closed__0));
v___x_443_ = lean_mk_io_user_error(v___x_442_);
return v___x_443_;
}
}
static lean_object* _init_l_Std_CancellationToken_wait___lam__0___closed__2(void){
_start:
{
lean_object* v___x_444_; lean_object* v___x_445_; 
v___x_444_ = lean_obj_once(&l_Std_CancellationToken_wait___lam__0___closed__1, &l_Std_CancellationToken_wait___lam__0___closed__1_once, _init_l_Std_CancellationToken_wait___lam__0___closed__1);
v___x_445_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_445_, 0, v___x_444_);
return v___x_445_;
}
}
static lean_object* _init_l_Std_CancellationToken_wait___lam__0___closed__3(void){
_start:
{
lean_object* v___x_446_; lean_object* v___x_447_; 
v___x_446_ = lean_obj_once(&l_Std_CancellationToken_wait___lam__0___closed__2, &l_Std_CancellationToken_wait___lam__0___closed__2_once, _init_l_Std_CancellationToken_wait___lam__0___closed__2);
v___x_447_ = lean_task_pure(v___x_446_);
return v___x_447_;
}
}
static lean_object* _init_l_Std_CancellationToken_wait___lam__0___closed__4(void){
_start:
{
lean_object* v___x_448_; lean_object* v___x_449_; 
v___x_448_ = ((lean_object*)(l_Std_Async_Waiter_race___at___00Std_CancellationToken_Consumer_resolve_spec__0___closed__0));
v___x_449_ = lean_task_pure(v___x_448_);
return v___x_449_;
}
}
LEAN_EXPORT lean_object* l_Std_CancellationToken_wait___lam__0(lean_object* v_a_450_){
_start:
{
if (lean_obj_tag(v_a_450_) == 0)
{
lean_object* v___x_452_; 
v___x_452_ = lean_obj_once(&l_Std_CancellationToken_wait___lam__0___closed__3, &l_Std_CancellationToken_wait___lam__0___closed__3_once, _init_l_Std_CancellationToken_wait___lam__0___closed__3);
return v___x_452_;
}
else
{
lean_object* v___x_453_; 
v___x_453_ = lean_obj_once(&l_Std_CancellationToken_wait___lam__0___closed__4, &l_Std_CancellationToken_wait___lam__0___closed__4_once, _init_l_Std_CancellationToken_wait___lam__0___closed__4);
return v___x_453_;
}
}
}
LEAN_EXPORT lean_object* l_Std_CancellationToken_wait___lam__0___boxed(lean_object* v_a_454_, lean_object* v___y_455_){
_start:
{
lean_object* v_res_456_; 
v_res_456_ = l_Std_CancellationToken_wait___lam__0(v_a_454_);
lean_dec(v_a_454_);
return v_res_456_;
}
}
LEAN_EXPORT lean_object* l_Std_CancellationToken_wait___lam__1(lean_object* v___f_457_, lean_object* v___y_458_){
_start:
{
lean_object* v___x_460_; lean_object* v_reason_461_; 
v___x_460_ = lean_st_ref_get(v___y_458_);
v_reason_461_ = lean_ctor_get(v___x_460_, 0);
lean_inc(v_reason_461_);
lean_dec(v___x_460_);
if (lean_obj_tag(v_reason_461_) == 0)
{
uint8_t v___x_462_; lean_object* v___x_463_; lean_object* v___x_464_; lean_object* v_reason_465_; lean_object* v_consumers_466_; lean_object* v___x_468_; uint8_t v_isShared_469_; uint8_t v_isSharedCheck_480_; 
v___x_462_ = 0;
v___x_463_ = lean_io_promise_new();
v___x_464_ = lean_st_ref_take(v___y_458_);
v_reason_465_ = lean_ctor_get(v___x_464_, 0);
v_consumers_466_ = lean_ctor_get(v___x_464_, 1);
v_isSharedCheck_480_ = !lean_is_exclusive(v___x_464_);
if (v_isSharedCheck_480_ == 0)
{
v___x_468_ = v___x_464_;
v_isShared_469_ = v_isSharedCheck_480_;
goto v_resetjp_467_;
}
else
{
lean_inc(v_consumers_466_);
lean_inc(v_reason_465_);
lean_dec(v___x_464_);
v___x_468_ = lean_box(0);
v_isShared_469_ = v_isSharedCheck_480_;
goto v_resetjp_467_;
}
v_resetjp_467_:
{
lean_object* v___x_470_; lean_object* v___x_471_; lean_object* v___x_473_; 
lean_inc(v___x_463_);
v___x_470_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_470_, 0, v___x_463_);
v___x_471_ = l_Std_Queue_enqueue___redArg(v___x_470_, v_consumers_466_);
if (v_isShared_469_ == 0)
{
lean_ctor_set(v___x_468_, 1, v___x_471_);
v___x_473_ = v___x_468_;
goto v_reusejp_472_;
}
else
{
lean_object* v_reuseFailAlloc_479_; 
v_reuseFailAlloc_479_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_479_, 0, v_reason_465_);
lean_ctor_set(v_reuseFailAlloc_479_, 1, v___x_471_);
v___x_473_ = v_reuseFailAlloc_479_;
goto v_reusejp_472_;
}
v_reusejp_472_:
{
lean_object* v___x_474_; lean_object* v___x_475_; lean_object* v___x_476_; lean_object* v___x_477_; lean_object* v___x_478_; 
v___x_474_ = lean_st_ref_put(v___y_458_, v___x_473_);
v___x_475_ = lean_io_promise_result_opt(v___x_463_);
lean_dec(v___x_463_);
v___x_476_ = lean_unsigned_to_nat(0u);
v___x_477_ = lean_io_bind_task(v___x_475_, v___f_457_, v___x_476_, v___x_462_);
v___x_478_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_478_, 0, v___x_477_);
return v___x_478_;
}
}
}
else
{
lean_object* v___x_482_; uint8_t v_isShared_483_; uint8_t v_isSharedCheck_488_; 
lean_dec_ref(v___f_457_);
v_isSharedCheck_488_ = !lean_is_exclusive(v_reason_461_);
if (v_isSharedCheck_488_ == 0)
{
lean_object* v_unused_489_; 
v_unused_489_ = lean_ctor_get(v_reason_461_, 0);
lean_dec(v_unused_489_);
v___x_482_ = v_reason_461_;
v_isShared_483_ = v_isSharedCheck_488_;
goto v_resetjp_481_;
}
else
{
lean_dec(v_reason_461_);
v___x_482_ = lean_box(0);
v_isShared_483_ = v_isSharedCheck_488_;
goto v_resetjp_481_;
}
v_resetjp_481_:
{
lean_object* v___x_484_; lean_object* v___x_486_; 
v___x_484_ = lean_obj_once(&l_Std_CancellationToken_wait___lam__0___closed__4, &l_Std_CancellationToken_wait___lam__0___closed__4_once, _init_l_Std_CancellationToken_wait___lam__0___closed__4);
if (v_isShared_483_ == 0)
{
lean_ctor_set_tag(v___x_482_, 0);
lean_ctor_set(v___x_482_, 0, v___x_484_);
v___x_486_ = v___x_482_;
goto v_reusejp_485_;
}
else
{
lean_object* v_reuseFailAlloc_487_; 
v_reuseFailAlloc_487_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_487_, 0, v___x_484_);
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
LEAN_EXPORT lean_object* l_Std_CancellationToken_wait___lam__1___boxed(lean_object* v___f_490_, lean_object* v___y_491_, lean_object* v___y_492_){
_start:
{
lean_object* v_res_493_; 
v_res_493_ = l_Std_CancellationToken_wait___lam__1(v___f_490_, v___y_491_);
lean_dec(v___y_491_);
return v_res_493_;
}
}
LEAN_EXPORT lean_object* l_Std_CancellationToken_wait(lean_object* v_x_497_){
_start:
{
lean_object* v___f_499_; lean_object* v___x_500_; 
v___f_499_ = ((lean_object*)(l_Std_CancellationToken_wait___closed__1));
v___x_500_ = l_Std_Mutex_atomically___at___00Std_CancellationToken_wait_spec__0___redArg(v_x_497_, v___f_499_);
return v___x_500_;
}
}
LEAN_EXPORT lean_object* l_Std_CancellationToken_wait___boxed(lean_object* v_x_501_, lean_object* v___y_502_){
_start:
{
lean_object* v_res_503_; 
v_res_503_ = l_Std_CancellationToken_wait(v_x_501_);
return v_res_503_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Waiter_race___at___00Std_CancellationToken_selector_spec__0___lam__0(uint8_t v___x_504_, lean_object* v_x_505_){
_start:
{
if (lean_obj_tag(v_x_505_) == 0)
{
lean_object* v_a_507_; lean_object* v___x_509_; uint8_t v_isShared_510_; uint8_t v_isSharedCheck_515_; 
v_a_507_ = lean_ctor_get(v_x_505_, 0);
v_isSharedCheck_515_ = !lean_is_exclusive(v_x_505_);
if (v_isSharedCheck_515_ == 0)
{
v___x_509_ = v_x_505_;
v_isShared_510_ = v_isSharedCheck_515_;
goto v_resetjp_508_;
}
else
{
lean_inc(v_a_507_);
lean_dec(v_x_505_);
v___x_509_ = lean_box(0);
v_isShared_510_ = v_isSharedCheck_515_;
goto v_resetjp_508_;
}
v_resetjp_508_:
{
lean_object* v___x_512_; 
if (v_isShared_510_ == 0)
{
v___x_512_ = v___x_509_;
goto v_reusejp_511_;
}
else
{
lean_object* v_reuseFailAlloc_514_; 
v_reuseFailAlloc_514_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_514_, 0, v_a_507_);
v___x_512_ = v_reuseFailAlloc_514_;
goto v_reusejp_511_;
}
v_reusejp_511_:
{
lean_object* v___x_513_; 
v___x_513_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_513_, 0, v___x_512_);
return v___x_513_;
}
}
}
else
{
lean_object* v___x_517_; uint8_t v_isShared_518_; uint8_t v_isSharedCheck_524_; 
v_isSharedCheck_524_ = !lean_is_exclusive(v_x_505_);
if (v_isSharedCheck_524_ == 0)
{
lean_object* v_unused_525_; 
v_unused_525_ = lean_ctor_get(v_x_505_, 0);
lean_dec(v_unused_525_);
v___x_517_ = v_x_505_;
v_isShared_518_ = v_isSharedCheck_524_;
goto v_resetjp_516_;
}
else
{
lean_dec(v_x_505_);
v___x_517_ = lean_box(0);
v_isShared_518_ = v_isSharedCheck_524_;
goto v_resetjp_516_;
}
v_resetjp_516_:
{
lean_object* v___x_519_; lean_object* v___x_521_; 
v___x_519_ = lean_box(v___x_504_);
if (v_isShared_518_ == 0)
{
lean_ctor_set(v___x_517_, 0, v___x_519_);
v___x_521_ = v___x_517_;
goto v_reusejp_520_;
}
else
{
lean_object* v_reuseFailAlloc_523_; 
v_reuseFailAlloc_523_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_523_, 0, v___x_519_);
v___x_521_ = v_reuseFailAlloc_523_;
goto v_reusejp_520_;
}
v_reusejp_520_:
{
lean_object* v___x_522_; 
v___x_522_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_522_, 0, v___x_521_);
return v___x_522_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_Waiter_race___at___00Std_CancellationToken_selector_spec__0___lam__0___boxed(lean_object* v___x_526_, lean_object* v_x_527_, lean_object* v___y_528_){
_start:
{
uint8_t v___x_7282__boxed_529_; lean_object* v_res_530_; 
v___x_7282__boxed_529_ = lean_unbox(v___x_526_);
v_res_530_ = l_Std_Async_Waiter_race___at___00Std_CancellationToken_selector_spec__0___lam__0(v___x_7282__boxed_529_, v_x_527_);
return v_res_530_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Waiter_race___at___00Std_CancellationToken_selector_spec__0___lam__1(lean_object* v_lose_531_, lean_object* v___y_532_, lean_object* v_promise_533_, lean_object* v___f_534_, lean_object* v_x_535_){
_start:
{
if (lean_obj_tag(v_x_535_) == 0)
{
lean_object* v___x_537_; 
lean_dec_ref(v___f_534_);
lean_dec_ref(v_lose_531_);
v___x_537_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_537_, 0, v_x_535_);
return v___x_537_;
}
else
{
lean_object* v_a_538_; lean_object* v___x_540_; uint8_t v_isShared_541_; uint8_t v_isSharedCheck_553_; 
v_a_538_ = lean_ctor_get(v_x_535_, 0);
v_isSharedCheck_553_ = !lean_is_exclusive(v_x_535_);
if (v_isSharedCheck_553_ == 0)
{
v___x_540_ = v_x_535_;
v_isShared_541_ = v_isSharedCheck_553_;
goto v_resetjp_539_;
}
else
{
lean_inc(v_a_538_);
lean_dec(v_x_535_);
v___x_540_ = lean_box(0);
v_isShared_541_ = v_isSharedCheck_553_;
goto v_resetjp_539_;
}
v_resetjp_539_:
{
uint8_t v___x_542_; 
v___x_542_ = lean_unbox(v_a_538_);
lean_dec(v_a_538_);
if (v___x_542_ == 0)
{
lean_object* v___x_543_; 
lean_del_object(v___x_540_);
lean_dec_ref(v___f_534_);
lean_inc(v___y_532_);
v___x_543_ = lean_apply_2(v_lose_531_, v___y_532_, lean_box(0));
return v___x_543_;
}
else
{
lean_object* v___x_544_; lean_object* v___x_545_; uint8_t v___x_546_; lean_object* v___x_547_; lean_object* v___x_549_; 
lean_dec_ref(v_lose_531_);
v___x_544_ = ((lean_object*)(l_Std_Async_Waiter_race___at___00Std_CancellationToken_Consumer_resolve_spec__0___closed__0));
v___x_545_ = lean_unsigned_to_nat(0u);
v___x_546_ = 0;
v___x_547_ = lean_io_promise_resolve(v___x_544_, v_promise_533_);
if (v_isShared_541_ == 0)
{
lean_ctor_set(v___x_540_, 0, v___x_547_);
v___x_549_ = v___x_540_;
goto v_reusejp_548_;
}
else
{
lean_object* v_reuseFailAlloc_552_; 
v_reuseFailAlloc_552_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_552_, 0, v___x_547_);
v___x_549_ = v_reuseFailAlloc_552_;
goto v_reusejp_548_;
}
v_reusejp_548_:
{
lean_object* v___x_550_; lean_object* v___x_551_; 
v___x_550_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_550_, 0, v___x_549_);
v___x_551_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_545_, v___x_546_, v___x_550_, v___f_534_);
return v___x_551_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_Waiter_race___at___00Std_CancellationToken_selector_spec__0___lam__1___boxed(lean_object* v_lose_554_, lean_object* v___y_555_, lean_object* v_promise_556_, lean_object* v___f_557_, lean_object* v_x_558_, lean_object* v___y_559_){
_start:
{
lean_object* v_res_560_; 
v_res_560_ = l_Std_Async_Waiter_race___at___00Std_CancellationToken_selector_spec__0___lam__1(v_lose_554_, v___y_555_, v_promise_556_, v___f_557_, v_x_558_);
lean_dec(v_promise_556_);
lean_dec(v___y_555_);
return v_res_560_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Waiter_race___at___00Std_CancellationToken_selector_spec__0(lean_object* v_w_564_, lean_object* v_lose_565_, lean_object* v___y_566_){
_start:
{
lean_object* v_finished_568_; lean_object* v_promise_569_; uint8_t v___x_570_; lean_object* v___f_571_; lean_object* v___f_572_; lean_object* v___x_573_; uint8_t v___x_574_; lean_object* v___x_575_; uint8_t v___y_577_; uint8_t v___x_584_; 
v_finished_568_ = lean_ctor_get(v_w_564_, 0);
lean_inc(v_finished_568_);
v_promise_569_ = lean_ctor_get(v_w_564_, 1);
lean_inc(v_promise_569_);
lean_dec_ref(v_w_564_);
v___x_570_ = 1;
v___f_571_ = ((lean_object*)(l_Std_Async_Waiter_race___at___00Std_CancellationToken_selector_spec__0___closed__0));
lean_inc(v___y_566_);
v___f_572_ = lean_alloc_closure((void*)(l_Std_Async_Waiter_race___at___00Std_CancellationToken_selector_spec__0___lam__1___boxed), 6, 4);
lean_closure_set(v___f_572_, 0, v_lose_565_);
lean_closure_set(v___f_572_, 1, v___y_566_);
lean_closure_set(v___f_572_, 2, v_promise_569_);
lean_closure_set(v___f_572_, 3, v___f_571_);
v___x_573_ = lean_unsigned_to_nat(0u);
v___x_574_ = 0;
v___x_575_ = lean_st_ref_take(v_finished_568_);
v___x_584_ = lean_unbox(v___x_575_);
lean_dec(v___x_575_);
if (v___x_584_ == 0)
{
v___y_577_ = v___x_570_;
goto v___jp_576_;
}
else
{
v___y_577_ = v___x_574_;
goto v___jp_576_;
}
v___jp_576_:
{
lean_object* v___x_578_; lean_object* v___x_579_; lean_object* v___x_580_; lean_object* v___x_581_; lean_object* v___x_582_; lean_object* v___x_583_; 
v___x_578_ = lean_box(v___x_570_);
v___x_579_ = lean_st_ref_put(v_finished_568_, v___x_578_);
lean_dec(v_finished_568_);
v___x_580_ = lean_box(v___y_577_);
v___x_581_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_581_, 0, v___x_580_);
v___x_582_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_582_, 0, v___x_581_);
v___x_583_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_573_, v___x_574_, v___x_582_, v___f_572_);
return v___x_583_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_Waiter_race___at___00Std_CancellationToken_selector_spec__0___boxed(lean_object* v_w_585_, lean_object* v_lose_586_, lean_object* v___y_587_, lean_object* v___y_588_){
_start:
{
lean_object* v_res_589_; 
v_res_589_ = l_Std_Async_Waiter_race___at___00Std_CancellationToken_selector_spec__0(v_w_585_, v_lose_586_, v___y_587_);
lean_dec(v___y_587_);
return v_res_589_;
}
}
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00Std_CancellationToken_selector_spec__1___redArg___lam__0(lean_object* v___y_590_){
_start:
{
if (lean_obj_tag(v___y_590_) == 0)
{
lean_object* v_a_591_; lean_object* v___x_593_; uint8_t v_isShared_594_; uint8_t v_isSharedCheck_598_; 
v_a_591_ = lean_ctor_get(v___y_590_, 0);
v_isSharedCheck_598_ = !lean_is_exclusive(v___y_590_);
if (v_isSharedCheck_598_ == 0)
{
v___x_593_ = v___y_590_;
v_isShared_594_ = v_isSharedCheck_598_;
goto v_resetjp_592_;
}
else
{
lean_inc(v_a_591_);
lean_dec(v___y_590_);
v___x_593_ = lean_box(0);
v_isShared_594_ = v_isSharedCheck_598_;
goto v_resetjp_592_;
}
v_resetjp_592_:
{
lean_object* v___x_596_; 
if (v_isShared_594_ == 0)
{
v___x_596_ = v___x_593_;
goto v_reusejp_595_;
}
else
{
lean_object* v_reuseFailAlloc_597_; 
v_reuseFailAlloc_597_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_597_, 0, v_a_591_);
v___x_596_ = v_reuseFailAlloc_597_;
goto v_reusejp_595_;
}
v_reusejp_595_:
{
return v___x_596_;
}
}
}
else
{
lean_object* v_a_599_; lean_object* v___x_601_; uint8_t v_isShared_602_; uint8_t v_isSharedCheck_607_; 
v_a_599_ = lean_ctor_get(v___y_590_, 0);
v_isSharedCheck_607_ = !lean_is_exclusive(v___y_590_);
if (v_isSharedCheck_607_ == 0)
{
v___x_601_ = v___y_590_;
v_isShared_602_ = v_isSharedCheck_607_;
goto v_resetjp_600_;
}
else
{
lean_inc(v_a_599_);
lean_dec(v___y_590_);
v___x_601_ = lean_box(0);
v_isShared_602_ = v_isSharedCheck_607_;
goto v_resetjp_600_;
}
v_resetjp_600_:
{
lean_object* v_fst_603_; lean_object* v___x_605_; 
v_fst_603_ = lean_ctor_get(v_a_599_, 0);
lean_inc(v_fst_603_);
lean_dec(v_a_599_);
if (v_isShared_602_ == 0)
{
lean_ctor_set(v___x_601_, 0, v_fst_603_);
v___x_605_ = v___x_601_;
goto v_reusejp_604_;
}
else
{
lean_object* v_reuseFailAlloc_606_; 
v_reuseFailAlloc_606_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_606_, 0, v_fst_603_);
v___x_605_ = v_reuseFailAlloc_606_;
goto v_reusejp_604_;
}
v_reusejp_604_:
{
return v___x_605_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00Std_CancellationToken_selector_spec__1___redArg___lam__1(lean_object* v_mutex_608_, lean_object* v_x_609_){
_start:
{
lean_object* v___x_611_; lean_object* v___x_612_; lean_object* v___x_613_; 
v___x_611_ = lean_io_basemutex_unlock(v_mutex_608_);
v___x_612_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_612_, 0, v___x_611_);
v___x_613_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_613_, 0, v___x_612_);
return v___x_613_;
}
}
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00Std_CancellationToken_selector_spec__1___redArg___lam__1___boxed(lean_object* v_mutex_614_, lean_object* v_x_615_, lean_object* v___y_616_){
_start:
{
lean_object* v_res_617_; 
v_res_617_ = l_Std_Mutex_atomically___at___00Std_CancellationToken_selector_spec__1___redArg___lam__1(v_mutex_614_, v_x_615_);
lean_dec(v_x_615_);
lean_dec(v_mutex_614_);
return v_res_617_;
}
}
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00Std_CancellationToken_selector_spec__1___redArg___lam__2(lean_object* v_k_618_, lean_object* v_ref_619_, lean_object* v_x_620_){
_start:
{
if (lean_obj_tag(v_x_620_) == 0)
{
lean_object* v_a_622_; lean_object* v___x_624_; uint8_t v_isShared_625_; uint8_t v_isSharedCheck_630_; 
lean_dec(v_ref_619_);
lean_dec_ref(v_k_618_);
v_a_622_ = lean_ctor_get(v_x_620_, 0);
v_isSharedCheck_630_ = !lean_is_exclusive(v_x_620_);
if (v_isSharedCheck_630_ == 0)
{
v___x_624_ = v_x_620_;
v_isShared_625_ = v_isSharedCheck_630_;
goto v_resetjp_623_;
}
else
{
lean_inc(v_a_622_);
lean_dec(v_x_620_);
v___x_624_ = lean_box(0);
v_isShared_625_ = v_isSharedCheck_630_;
goto v_resetjp_623_;
}
v_resetjp_623_:
{
lean_object* v___x_627_; 
if (v_isShared_625_ == 0)
{
v___x_627_ = v___x_624_;
goto v_reusejp_626_;
}
else
{
lean_object* v_reuseFailAlloc_629_; 
v_reuseFailAlloc_629_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_629_, 0, v_a_622_);
v___x_627_ = v_reuseFailAlloc_629_;
goto v_reusejp_626_;
}
v_reusejp_626_:
{
lean_object* v___x_628_; 
v___x_628_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_628_, 0, v___x_627_);
return v___x_628_;
}
}
}
else
{
lean_object* v___x_631_; 
lean_dec_ref_known(v_x_620_, 1);
v___x_631_ = lean_apply_2(v_k_618_, v_ref_619_, lean_box(0));
return v___x_631_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00Std_CancellationToken_selector_spec__1___redArg___lam__2___boxed(lean_object* v_k_632_, lean_object* v_ref_633_, lean_object* v_x_634_, lean_object* v___y_635_){
_start:
{
lean_object* v_res_636_; 
v_res_636_ = l_Std_Mutex_atomically___at___00Std_CancellationToken_selector_spec__1___redArg___lam__2(v_k_632_, v_ref_633_, v_x_634_);
return v_res_636_;
}
}
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00Std_CancellationToken_selector_spec__1___redArg___lam__3(lean_object* v_mutex_637_, lean_object* v___f_638_){
_start:
{
lean_object* v___x_640_; uint8_t v___x_641_; lean_object* v___x_642_; lean_object* v___x_643_; lean_object* v___x_644_; lean_object* v___x_645_; 
v___x_640_ = lean_unsigned_to_nat(0u);
v___x_641_ = 0;
v___x_642_ = lean_io_basemutex_lock(v_mutex_637_);
v___x_643_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_643_, 0, v___x_642_);
v___x_644_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_644_, 0, v___x_643_);
v___x_645_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_640_, v___x_641_, v___x_644_, v___f_638_);
return v___x_645_;
}
}
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00Std_CancellationToken_selector_spec__1___redArg___lam__3___boxed(lean_object* v_mutex_646_, lean_object* v___f_647_, lean_object* v___y_648_){
_start:
{
lean_object* v_res_649_; 
v_res_649_ = l_Std_Mutex_atomically___at___00Std_CancellationToken_selector_spec__1___redArg___lam__3(v_mutex_646_, v___f_647_);
lean_dec(v_mutex_646_);
return v_res_649_;
}
}
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00Std_CancellationToken_selector_spec__1___redArg(lean_object* v_mutex_651_, lean_object* v_k_652_){
_start:
{
lean_object* v_ref_654_; lean_object* v_mutex_655_; lean_object* v___f_656_; lean_object* v___f_657_; lean_object* v___f_658_; lean_object* v___f_659_; lean_object* v___x_660_; uint8_t v___x_661_; lean_object* v___x_662_; lean_object* v___y_664_; 
v_ref_654_ = lean_ctor_get(v_mutex_651_, 0);
lean_inc(v_ref_654_);
v_mutex_655_ = lean_ctor_get(v_mutex_651_, 1);
lean_inc_n(v_mutex_655_, 2);
lean_dec_ref(v_mutex_651_);
v___f_656_ = ((lean_object*)(l_Std_Mutex_atomically___at___00Std_CancellationToken_selector_spec__1___redArg___closed__0));
v___f_657_ = lean_alloc_closure((void*)(l_Std_Mutex_atomically___at___00Std_CancellationToken_selector_spec__1___redArg___lam__1___boxed), 3, 1);
lean_closure_set(v___f_657_, 0, v_mutex_655_);
v___f_658_ = lean_alloc_closure((void*)(l_Std_Mutex_atomically___at___00Std_CancellationToken_selector_spec__1___redArg___lam__2___boxed), 4, 2);
lean_closure_set(v___f_658_, 0, v_k_652_);
lean_closure_set(v___f_658_, 1, v_ref_654_);
v___f_659_ = lean_alloc_closure((void*)(l_Std_Mutex_atomically___at___00Std_CancellationToken_selector_spec__1___redArg___lam__3___boxed), 3, 2);
lean_closure_set(v___f_659_, 0, v_mutex_655_);
lean_closure_set(v___f_659_, 1, v___f_658_);
v___x_660_ = lean_unsigned_to_nat(0u);
v___x_661_ = 0;
v___x_662_ = l_Std_Async_EAsync_tryFinally_x27___redArg(v___f_659_, v___f_657_, v___x_660_, v___x_661_);
if (lean_obj_tag(v___x_662_) == 0)
{
lean_object* v_a_666_; 
v_a_666_ = lean_ctor_get(v___x_662_, 0);
lean_inc(v_a_666_);
lean_dec_ref_known(v___x_662_, 1);
if (lean_obj_tag(v_a_666_) == 0)
{
lean_object* v_a_667_; lean_object* v___x_669_; uint8_t v_isShared_670_; uint8_t v_isSharedCheck_674_; 
v_a_667_ = lean_ctor_get(v_a_666_, 0);
v_isSharedCheck_674_ = !lean_is_exclusive(v_a_666_);
if (v_isSharedCheck_674_ == 0)
{
v___x_669_ = v_a_666_;
v_isShared_670_ = v_isSharedCheck_674_;
goto v_resetjp_668_;
}
else
{
lean_inc(v_a_667_);
lean_dec(v_a_666_);
v___x_669_ = lean_box(0);
v_isShared_670_ = v_isSharedCheck_674_;
goto v_resetjp_668_;
}
v_resetjp_668_:
{
lean_object* v___x_672_; 
if (v_isShared_670_ == 0)
{
v___x_672_ = v___x_669_;
goto v_reusejp_671_;
}
else
{
lean_object* v_reuseFailAlloc_673_; 
v_reuseFailAlloc_673_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_673_, 0, v_a_667_);
v___x_672_ = v_reuseFailAlloc_673_;
goto v_reusejp_671_;
}
v_reusejp_671_:
{
v___y_664_ = v___x_672_;
goto v___jp_663_;
}
}
}
else
{
lean_object* v_a_675_; lean_object* v___x_677_; uint8_t v_isShared_678_; uint8_t v_isSharedCheck_683_; 
v_a_675_ = lean_ctor_get(v_a_666_, 0);
v_isSharedCheck_683_ = !lean_is_exclusive(v_a_666_);
if (v_isSharedCheck_683_ == 0)
{
v___x_677_ = v_a_666_;
v_isShared_678_ = v_isSharedCheck_683_;
goto v_resetjp_676_;
}
else
{
lean_inc(v_a_675_);
lean_dec(v_a_666_);
v___x_677_ = lean_box(0);
v_isShared_678_ = v_isSharedCheck_683_;
goto v_resetjp_676_;
}
v_resetjp_676_:
{
lean_object* v_fst_679_; lean_object* v___x_681_; 
v_fst_679_ = lean_ctor_get(v_a_675_, 0);
lean_inc(v_fst_679_);
lean_dec(v_a_675_);
if (v_isShared_678_ == 0)
{
lean_ctor_set(v___x_677_, 0, v_fst_679_);
v___x_681_ = v___x_677_;
goto v_reusejp_680_;
}
else
{
lean_object* v_reuseFailAlloc_682_; 
v_reuseFailAlloc_682_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_682_, 0, v_fst_679_);
v___x_681_ = v_reuseFailAlloc_682_;
goto v_reusejp_680_;
}
v_reusejp_680_:
{
v___y_664_ = v___x_681_;
goto v___jp_663_;
}
}
}
}
else
{
lean_object* v_a_684_; lean_object* v___x_686_; uint8_t v_isShared_687_; uint8_t v_isSharedCheck_692_; 
v_a_684_ = lean_ctor_get(v___x_662_, 0);
v_isSharedCheck_692_ = !lean_is_exclusive(v___x_662_);
if (v_isSharedCheck_692_ == 0)
{
v___x_686_ = v___x_662_;
v_isShared_687_ = v_isSharedCheck_692_;
goto v_resetjp_685_;
}
else
{
lean_inc(v_a_684_);
lean_dec(v___x_662_);
v___x_686_ = lean_box(0);
v_isShared_687_ = v_isSharedCheck_692_;
goto v_resetjp_685_;
}
v_resetjp_685_:
{
lean_object* v___x_688_; lean_object* v___x_690_; 
v___x_688_ = lean_task_map(v___f_656_, v_a_684_, v___x_660_, v___x_661_);
if (v_isShared_687_ == 0)
{
lean_ctor_set(v___x_686_, 0, v___x_688_);
v___x_690_ = v___x_686_;
goto v_reusejp_689_;
}
else
{
lean_object* v_reuseFailAlloc_691_; 
v_reuseFailAlloc_691_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_691_, 0, v___x_688_);
v___x_690_ = v_reuseFailAlloc_691_;
goto v_reusejp_689_;
}
v_reusejp_689_:
{
return v___x_690_;
}
}
}
v___jp_663_:
{
lean_object* v___x_665_; 
v___x_665_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_665_, 0, v___y_664_);
return v___x_665_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00Std_CancellationToken_selector_spec__1___redArg___boxed(lean_object* v_mutex_693_, lean_object* v_k_694_, lean_object* v___y_695_){
_start:
{
lean_object* v_res_696_; 
v_res_696_ = l_Std_Mutex_atomically___at___00Std_CancellationToken_selector_spec__1___redArg(v_mutex_693_, v_k_694_);
return v_res_696_;
}
}
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00Std_CancellationToken_selector_spec__1(lean_object* v_00_u03b1_697_, lean_object* v_00_u03b2_698_, lean_object* v_mutex_699_, lean_object* v_k_700_){
_start:
{
lean_object* v___x_702_; 
v___x_702_ = l_Std_Mutex_atomically___at___00Std_CancellationToken_selector_spec__1___redArg(v_mutex_699_, v_k_700_);
return v___x_702_;
}
}
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00Std_CancellationToken_selector_spec__1___boxed(lean_object* v_00_u03b1_703_, lean_object* v_00_u03b2_704_, lean_object* v_mutex_705_, lean_object* v_k_706_, lean_object* v___y_707_){
_start:
{
lean_object* v_res_708_; 
v_res_708_ = l_Std_Mutex_atomically___at___00Std_CancellationToken_selector_spec__1(v_00_u03b1_703_, v_00_u03b2_704_, v_mutex_705_, v_k_706_);
return v_res_708_;
}
}
LEAN_EXPORT lean_object* l_Std_CancellationToken_selector___lam__0(uint8_t v___x_709_, lean_object* v___y_710_){
_start:
{
lean_object* v___x_712_; lean_object* v___x_713_; lean_object* v___x_714_; 
v___x_712_ = lean_box(v___x_709_);
v___x_713_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_713_, 0, v___x_712_);
v___x_714_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_714_, 0, v___x_713_);
return v___x_714_;
}
}
LEAN_EXPORT lean_object* l_Std_CancellationToken_selector___lam__0___boxed(lean_object* v___x_715_, lean_object* v___y_716_, lean_object* v___y_717_){
_start:
{
uint8_t v___x_7598__boxed_718_; lean_object* v_res_719_; 
v___x_7598__boxed_718_ = lean_unbox(v___x_715_);
v_res_719_ = l_Std_CancellationToken_selector___lam__0(v___x_7598__boxed_718_, v___y_716_);
lean_dec(v___y_716_);
return v_res_719_;
}
}
LEAN_EXPORT lean_object* l_Std_CancellationToken_selector___lam__1(lean_object* v___x_720_, lean_object* v___y_721_){
_start:
{
if (lean_obj_tag(v___y_721_) == 0)
{
lean_object* v_a_722_; lean_object* v___x_724_; uint8_t v_isShared_725_; uint8_t v_isSharedCheck_729_; 
v_a_722_ = lean_ctor_get(v___y_721_, 0);
v_isSharedCheck_729_ = !lean_is_exclusive(v___y_721_);
if (v_isSharedCheck_729_ == 0)
{
v___x_724_ = v___y_721_;
v_isShared_725_ = v_isSharedCheck_729_;
goto v_resetjp_723_;
}
else
{
lean_inc(v_a_722_);
lean_dec(v___y_721_);
v___x_724_ = lean_box(0);
v_isShared_725_ = v_isSharedCheck_729_;
goto v_resetjp_723_;
}
v_resetjp_723_:
{
lean_object* v___x_727_; 
if (v_isShared_725_ == 0)
{
v___x_727_ = v___x_724_;
goto v_reusejp_726_;
}
else
{
lean_object* v_reuseFailAlloc_728_; 
v_reuseFailAlloc_728_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_728_, 0, v_a_722_);
v___x_727_ = v_reuseFailAlloc_728_;
goto v_reusejp_726_;
}
v_reusejp_726_:
{
return v___x_727_;
}
}
}
else
{
lean_object* v___x_731_; uint8_t v_isShared_732_; uint8_t v_isSharedCheck_736_; 
v_isSharedCheck_736_ = !lean_is_exclusive(v___y_721_);
if (v_isSharedCheck_736_ == 0)
{
lean_object* v_unused_737_; 
v_unused_737_ = lean_ctor_get(v___y_721_, 0);
lean_dec(v_unused_737_);
v___x_731_ = v___y_721_;
v_isShared_732_ = v_isSharedCheck_736_;
goto v_resetjp_730_;
}
else
{
lean_dec(v___y_721_);
v___x_731_ = lean_box(0);
v_isShared_732_ = v_isSharedCheck_736_;
goto v_resetjp_730_;
}
v_resetjp_730_:
{
lean_object* v___x_734_; 
if (v_isShared_732_ == 0)
{
lean_ctor_set(v___x_731_, 0, v___x_720_);
v___x_734_ = v___x_731_;
goto v_reusejp_733_;
}
else
{
lean_object* v_reuseFailAlloc_735_; 
v_reuseFailAlloc_735_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_735_, 0, v___x_720_);
v___x_734_ = v_reuseFailAlloc_735_;
goto v_reusejp_733_;
}
v_reusejp_733_:
{
return v___x_734_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_CancellationToken_selector___lam__2(lean_object* v___y_745_, lean_object* v_waiter_746_, lean_object* v_x_747_){
_start:
{
if (lean_obj_tag(v_x_747_) == 0)
{
lean_object* v_a_749_; lean_object* v___x_751_; uint8_t v_isShared_752_; uint8_t v_isSharedCheck_757_; 
lean_dec_ref(v_waiter_746_);
v_a_749_ = lean_ctor_get(v_x_747_, 0);
v_isSharedCheck_757_ = !lean_is_exclusive(v_x_747_);
if (v_isSharedCheck_757_ == 0)
{
v___x_751_ = v_x_747_;
v_isShared_752_ = v_isSharedCheck_757_;
goto v_resetjp_750_;
}
else
{
lean_inc(v_a_749_);
lean_dec(v_x_747_);
v___x_751_ = lean_box(0);
v_isShared_752_ = v_isSharedCheck_757_;
goto v_resetjp_750_;
}
v_resetjp_750_:
{
lean_object* v___x_754_; 
if (v_isShared_752_ == 0)
{
v___x_754_ = v___x_751_;
goto v_reusejp_753_;
}
else
{
lean_object* v_reuseFailAlloc_756_; 
v_reuseFailAlloc_756_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_756_, 0, v_a_749_);
v___x_754_ = v_reuseFailAlloc_756_;
goto v_reusejp_753_;
}
v_reusejp_753_:
{
lean_object* v___x_755_; 
v___x_755_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_755_, 0, v___x_754_);
return v___x_755_;
}
}
}
else
{
lean_object* v_a_758_; lean_object* v_reason_759_; 
v_a_758_ = lean_ctor_get(v_x_747_, 0);
lean_inc(v_a_758_);
lean_dec_ref_known(v_x_747_, 1);
v_reason_759_ = lean_ctor_get(v_a_758_, 0);
lean_inc(v_reason_759_);
lean_dec(v_a_758_);
if (lean_obj_tag(v_reason_759_) == 0)
{
lean_object* v___x_760_; lean_object* v_reason_761_; lean_object* v_consumers_762_; lean_object* v___x_764_; uint8_t v_isShared_765_; uint8_t v_isSharedCheck_773_; 
v___x_760_ = lean_st_ref_take(v___y_745_);
v_reason_761_ = lean_ctor_get(v___x_760_, 0);
v_consumers_762_ = lean_ctor_get(v___x_760_, 1);
v_isSharedCheck_773_ = !lean_is_exclusive(v___x_760_);
if (v_isSharedCheck_773_ == 0)
{
v___x_764_ = v___x_760_;
v_isShared_765_ = v_isSharedCheck_773_;
goto v_resetjp_763_;
}
else
{
lean_inc(v_consumers_762_);
lean_inc(v_reason_761_);
lean_dec(v___x_760_);
v___x_764_ = lean_box(0);
v_isShared_765_ = v_isSharedCheck_773_;
goto v_resetjp_763_;
}
v_resetjp_763_:
{
lean_object* v___x_766_; lean_object* v___x_767_; lean_object* v___x_769_; 
v___x_766_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_766_, 0, v_waiter_746_);
v___x_767_ = l_Std_Queue_enqueue___redArg(v___x_766_, v_consumers_762_);
if (v_isShared_765_ == 0)
{
lean_ctor_set(v___x_764_, 1, v___x_767_);
v___x_769_ = v___x_764_;
goto v_reusejp_768_;
}
else
{
lean_object* v_reuseFailAlloc_772_; 
v_reuseFailAlloc_772_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_772_, 0, v_reason_761_);
lean_ctor_set(v_reuseFailAlloc_772_, 1, v___x_767_);
v___x_769_ = v_reuseFailAlloc_772_;
goto v_reusejp_768_;
}
v_reusejp_768_:
{
lean_object* v___x_770_; lean_object* v___x_771_; 
v___x_770_ = lean_st_ref_put(v___y_745_, v___x_769_);
v___x_771_ = ((lean_object*)(l_Std_CancellationToken_selector___lam__2___closed__0));
return v___x_771_;
}
}
}
else
{
lean_object* v___x_775_; uint8_t v_isShared_776_; uint8_t v_isSharedCheck_806_; 
v_isSharedCheck_806_ = !lean_is_exclusive(v_reason_759_);
if (v_isSharedCheck_806_ == 0)
{
lean_object* v_unused_807_; 
v_unused_807_ = lean_ctor_get(v_reason_759_, 0);
lean_dec(v_unused_807_);
v___x_775_ = v_reason_759_;
v_isShared_776_ = v_isSharedCheck_806_;
goto v_resetjp_774_;
}
else
{
lean_dec(v_reason_759_);
v___x_775_ = lean_box(0);
v_isShared_776_ = v_isSharedCheck_806_;
goto v_resetjp_774_;
}
v_resetjp_774_:
{
uint8_t v___x_777_; lean_object* v___f_778_; lean_object* v___f_779_; lean_object* v___x_780_; lean_object* v___x_781_; lean_object* v___y_783_; 
v___x_777_ = 0;
v___f_778_ = ((lean_object*)(l_Std_CancellationToken_selector___lam__2___closed__1));
v___f_779_ = ((lean_object*)(l_Std_CancellationToken_selector___lam__2___closed__2));
v___x_780_ = lean_unsigned_to_nat(0u);
v___x_781_ = l_Std_Async_Waiter_race___at___00Std_CancellationToken_selector_spec__0(v_waiter_746_, v___f_778_, v___y_745_);
if (lean_obj_tag(v___x_781_) == 0)
{
lean_object* v_a_787_; 
v_a_787_ = lean_ctor_get(v___x_781_, 0);
lean_inc(v_a_787_);
lean_dec_ref_known(v___x_781_, 1);
if (lean_obj_tag(v_a_787_) == 0)
{
lean_object* v_a_788_; lean_object* v___x_790_; uint8_t v_isShared_791_; uint8_t v_isSharedCheck_795_; 
v_a_788_ = lean_ctor_get(v_a_787_, 0);
v_isSharedCheck_795_ = !lean_is_exclusive(v_a_787_);
if (v_isSharedCheck_795_ == 0)
{
v___x_790_ = v_a_787_;
v_isShared_791_ = v_isSharedCheck_795_;
goto v_resetjp_789_;
}
else
{
lean_inc(v_a_788_);
lean_dec(v_a_787_);
v___x_790_ = lean_box(0);
v_isShared_791_ = v_isSharedCheck_795_;
goto v_resetjp_789_;
}
v_resetjp_789_:
{
lean_object* v___x_793_; 
if (v_isShared_791_ == 0)
{
v___x_793_ = v___x_790_;
goto v_reusejp_792_;
}
else
{
lean_object* v_reuseFailAlloc_794_; 
v_reuseFailAlloc_794_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_794_, 0, v_a_788_);
v___x_793_ = v_reuseFailAlloc_794_;
goto v_reusejp_792_;
}
v_reusejp_792_:
{
v___y_783_ = v___x_793_;
goto v___jp_782_;
}
}
}
else
{
lean_object* v___x_796_; 
lean_dec_ref_known(v_a_787_, 1);
v___x_796_ = ((lean_object*)(l_Std_Async_Waiter_race___at___00Std_CancellationToken_Consumer_resolve_spec__0___closed__0));
v___y_783_ = v___x_796_;
goto v___jp_782_;
}
}
else
{
lean_object* v_a_797_; lean_object* v___x_799_; uint8_t v_isShared_800_; uint8_t v_isSharedCheck_805_; 
lean_del_object(v___x_775_);
v_a_797_ = lean_ctor_get(v___x_781_, 0);
v_isSharedCheck_805_ = !lean_is_exclusive(v___x_781_);
if (v_isSharedCheck_805_ == 0)
{
v___x_799_ = v___x_781_;
v_isShared_800_ = v_isSharedCheck_805_;
goto v_resetjp_798_;
}
else
{
lean_inc(v_a_797_);
lean_dec(v___x_781_);
v___x_799_ = lean_box(0);
v_isShared_800_ = v_isSharedCheck_805_;
goto v_resetjp_798_;
}
v_resetjp_798_:
{
lean_object* v___x_801_; lean_object* v___x_803_; 
v___x_801_ = lean_task_map(v___f_779_, v_a_797_, v___x_780_, v___x_777_);
if (v_isShared_800_ == 0)
{
lean_ctor_set(v___x_799_, 0, v___x_801_);
v___x_803_ = v___x_799_;
goto v_reusejp_802_;
}
else
{
lean_object* v_reuseFailAlloc_804_; 
v_reuseFailAlloc_804_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_804_, 0, v___x_801_);
v___x_803_ = v_reuseFailAlloc_804_;
goto v_reusejp_802_;
}
v_reusejp_802_:
{
return v___x_803_;
}
}
}
v___jp_782_:
{
lean_object* v___x_785_; 
if (v_isShared_776_ == 0)
{
lean_ctor_set_tag(v___x_775_, 0);
lean_ctor_set(v___x_775_, 0, v___y_783_);
v___x_785_ = v___x_775_;
goto v_reusejp_784_;
}
else
{
lean_object* v_reuseFailAlloc_786_; 
v_reuseFailAlloc_786_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_786_, 0, v___y_783_);
v___x_785_ = v_reuseFailAlloc_786_;
goto v_reusejp_784_;
}
v_reusejp_784_:
{
return v___x_785_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_CancellationToken_selector___lam__2___boxed(lean_object* v___y_808_, lean_object* v_waiter_809_, lean_object* v_x_810_, lean_object* v___y_811_){
_start:
{
lean_object* v_res_812_; 
v_res_812_ = l_Std_CancellationToken_selector___lam__2(v___y_808_, v_waiter_809_, v_x_810_);
lean_dec(v___y_808_);
return v_res_812_;
}
}
LEAN_EXPORT lean_object* l_Std_CancellationToken_selector___lam__3(lean_object* v_waiter_813_, lean_object* v___y_814_){
_start:
{
lean_object* v___f_816_; lean_object* v___x_817_; uint8_t v___x_818_; lean_object* v___x_819_; lean_object* v___x_820_; lean_object* v___x_821_; lean_object* v___x_822_; 
lean_inc(v___y_814_);
v___f_816_ = lean_alloc_closure((void*)(l_Std_CancellationToken_selector___lam__2___boxed), 4, 2);
lean_closure_set(v___f_816_, 0, v___y_814_);
lean_closure_set(v___f_816_, 1, v_waiter_813_);
v___x_817_ = lean_unsigned_to_nat(0u);
v___x_818_ = 0;
v___x_819_ = lean_st_ref_get(v___y_814_);
v___x_820_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_820_, 0, v___x_819_);
v___x_821_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_821_, 0, v___x_820_);
v___x_822_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_817_, v___x_818_, v___x_821_, v___f_816_);
return v___x_822_;
}
}
LEAN_EXPORT lean_object* l_Std_CancellationToken_selector___lam__3___boxed(lean_object* v_waiter_823_, lean_object* v___y_824_, lean_object* v___y_825_){
_start:
{
lean_object* v_res_826_; 
v_res_826_ = l_Std_CancellationToken_selector___lam__3(v_waiter_823_, v___y_824_);
lean_dec(v___y_824_);
return v_res_826_;
}
}
LEAN_EXPORT lean_object* l_Std_CancellationToken_selector___lam__4(lean_object* v_token_827_, lean_object* v_waiter_828_){
_start:
{
lean_object* v___f_830_; lean_object* v___x_831_; 
v___f_830_ = lean_alloc_closure((void*)(l_Std_CancellationToken_selector___lam__3___boxed), 3, 1);
lean_closure_set(v___f_830_, 0, v_waiter_828_);
v___x_831_ = l_Std_Mutex_atomically___at___00Std_CancellationToken_selector_spec__1___redArg(v_token_827_, v___f_830_);
return v___x_831_;
}
}
LEAN_EXPORT lean_object* l_Std_CancellationToken_selector___lam__4___boxed(lean_object* v_token_832_, lean_object* v_waiter_833_, lean_object* v___y_834_){
_start:
{
lean_object* v_res_835_; 
v_res_835_ = l_Std_CancellationToken_selector___lam__4(v_token_832_, v_waiter_833_);
return v_res_835_;
}
}
LEAN_EXPORT lean_object* l_Std_CancellationToken_selector___lam__5(lean_object* v_x_846_){
_start:
{
if (lean_obj_tag(v_x_846_) == 0)
{
lean_object* v_a_848_; lean_object* v___x_850_; uint8_t v_isShared_851_; uint8_t v_isSharedCheck_856_; 
v_a_848_ = lean_ctor_get(v_x_846_, 0);
v_isSharedCheck_856_ = !lean_is_exclusive(v_x_846_);
if (v_isSharedCheck_856_ == 0)
{
v___x_850_ = v_x_846_;
v_isShared_851_ = v_isSharedCheck_856_;
goto v_resetjp_849_;
}
else
{
lean_inc(v_a_848_);
lean_dec(v_x_846_);
v___x_850_ = lean_box(0);
v_isShared_851_ = v_isSharedCheck_856_;
goto v_resetjp_849_;
}
v_resetjp_849_:
{
lean_object* v___x_853_; 
if (v_isShared_851_ == 0)
{
v___x_853_ = v___x_850_;
goto v_reusejp_852_;
}
else
{
lean_object* v_reuseFailAlloc_855_; 
v_reuseFailAlloc_855_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_855_, 0, v_a_848_);
v___x_853_ = v_reuseFailAlloc_855_;
goto v_reusejp_852_;
}
v_reusejp_852_:
{
lean_object* v___x_854_; 
v___x_854_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_854_, 0, v___x_853_);
return v___x_854_;
}
}
}
else
{
lean_object* v_a_857_; uint8_t v___x_858_; 
v_a_857_ = lean_ctor_get(v_x_846_, 0);
lean_inc(v_a_857_);
lean_dec_ref_known(v_x_846_, 1);
v___x_858_ = lean_unbox(v_a_857_);
lean_dec(v_a_857_);
if (v___x_858_ == 0)
{
lean_object* v___x_859_; 
v___x_859_ = ((lean_object*)(l_Std_CancellationToken_selector___lam__5___closed__1));
return v___x_859_;
}
else
{
lean_object* v___x_860_; 
v___x_860_ = ((lean_object*)(l_Std_CancellationToken_selector___lam__5___closed__4));
return v___x_860_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_CancellationToken_selector___lam__5___boxed(lean_object* v_x_861_, lean_object* v___y_862_){
_start:
{
lean_object* v_res_863_; 
v_res_863_ = l_Std_CancellationToken_selector___lam__5(v_x_861_);
return v_res_863_;
}
}
LEAN_EXPORT lean_object* l_Std_CancellationToken_selector___lam__6(lean_object* v_token_864_, lean_object* v___f_865_){
_start:
{
lean_object* v___x_867_; uint8_t v___x_868_; uint8_t v___x_869_; lean_object* v___x_870_; lean_object* v___x_871_; lean_object* v___x_872_; lean_object* v___x_873_; 
v___x_867_ = lean_unsigned_to_nat(0u);
v___x_868_ = 0;
v___x_869_ = l_Std_CancellationToken_isCancelled(v_token_864_);
v___x_870_ = lean_box(v___x_869_);
v___x_871_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_871_, 0, v___x_870_);
v___x_872_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_872_, 0, v___x_871_);
v___x_873_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_867_, v___x_868_, v___x_872_, v___f_865_);
return v___x_873_;
}
}
LEAN_EXPORT lean_object* l_Std_CancellationToken_selector___lam__6___boxed(lean_object* v_token_874_, lean_object* v___f_875_, lean_object* v___y_876_){
_start:
{
lean_object* v_res_877_; 
v_res_877_ = l_Std_CancellationToken_selector___lam__6(v_token_874_, v___f_875_);
return v_res_877_;
}
}
LEAN_EXPORT lean_object* l_Std_CancellationToken_selector___lam__7(lean_object* v_reason_878_, lean_object* v___y_879_, lean_object* v_x_880_){
_start:
{
if (lean_obj_tag(v_x_880_) == 0)
{
lean_object* v_a_882_; lean_object* v___x_884_; uint8_t v_isShared_885_; uint8_t v_isSharedCheck_890_; 
lean_dec(v_reason_878_);
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
lean_object* v_a_891_; lean_object* v___x_892_; lean_object* v___x_893_; lean_object* v___x_894_; 
v_a_891_ = lean_ctor_get(v_x_880_, 0);
lean_inc(v_a_891_);
lean_dec_ref_known(v_x_880_, 1);
v___x_892_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_892_, 0, v_reason_878_);
lean_ctor_set(v___x_892_, 1, v_a_891_);
v___x_893_ = lean_st_ref_swap(v___y_879_, v___x_892_);
lean_dec(v___x_893_);
v___x_894_ = ((lean_object*)(l_Std_CancellationToken_selector___lam__2___closed__0));
return v___x_894_;
}
}
}
LEAN_EXPORT lean_object* l_Std_CancellationToken_selector___lam__7___boxed(lean_object* v_reason_895_, lean_object* v___y_896_, lean_object* v_x_897_, lean_object* v___y_898_){
_start:
{
lean_object* v_res_899_; 
v_res_899_ = l_Std_CancellationToken_selector___lam__7(v_reason_895_, v___y_896_, v_x_897_);
lean_dec(v___y_896_);
return v_res_899_;
}
}
LEAN_EXPORT lean_object* l_Std_Queue_filterM___at___00Std_CancellationToken_selector_spec__2___lam__0(lean_object* v_x_900_){
_start:
{
if (lean_obj_tag(v_x_900_) == 0)
{
lean_object* v___x_902_; 
v___x_902_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_902_, 0, v_x_900_);
return v___x_902_;
}
else
{
lean_object* v_a_903_; lean_object* v___x_905_; uint8_t v_isShared_906_; uint8_t v_isSharedCheck_912_; 
v_a_903_ = lean_ctor_get(v_x_900_, 0);
v_isSharedCheck_912_ = !lean_is_exclusive(v_x_900_);
if (v_isSharedCheck_912_ == 0)
{
v___x_905_ = v_x_900_;
v_isShared_906_ = v_isSharedCheck_912_;
goto v_resetjp_904_;
}
else
{
lean_inc(v_a_903_);
lean_dec(v_x_900_);
v___x_905_ = lean_box(0);
v_isShared_906_ = v_isSharedCheck_912_;
goto v_resetjp_904_;
}
v_resetjp_904_:
{
lean_object* v___x_907_; lean_object* v___x_909_; 
v___x_907_ = l_List_reverse___redArg(v_a_903_);
if (v_isShared_906_ == 0)
{
lean_ctor_set(v___x_905_, 0, v___x_907_);
v___x_909_ = v___x_905_;
goto v_reusejp_908_;
}
else
{
lean_object* v_reuseFailAlloc_911_; 
v_reuseFailAlloc_911_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_911_, 0, v___x_907_);
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
LEAN_EXPORT lean_object* l_Std_Queue_filterM___at___00Std_CancellationToken_selector_spec__2___lam__0___boxed(lean_object* v_x_913_, lean_object* v___y_914_){
_start:
{
lean_object* v_res_915_; 
v_res_915_ = l_Std_Queue_filterM___at___00Std_CancellationToken_selector_spec__2___lam__0(v_x_913_);
return v_res_915_;
}
}
LEAN_EXPORT lean_object* l_List_filterAuxM___at___00Std_Queue_filterM___at___00Std_CancellationToken_selector_spec__2_spec__2___redArg___lam__1(lean_object* v_x_916_){
_start:
{
uint8_t v___y_919_; 
if (lean_obj_tag(v_x_916_) == 0)
{
lean_object* v___x_923_; 
v___x_923_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_923_, 0, v_x_916_);
return v___x_923_;
}
else
{
lean_object* v_a_924_; uint8_t v___x_925_; 
v_a_924_ = lean_ctor_get(v_x_916_, 0);
lean_inc(v_a_924_);
lean_dec_ref_known(v_x_916_, 1);
v___x_925_ = lean_unbox(v_a_924_);
lean_dec(v_a_924_);
if (v___x_925_ == 0)
{
uint8_t v___x_926_; 
v___x_926_ = 1;
v___y_919_ = v___x_926_;
goto v___jp_918_;
}
else
{
uint8_t v___x_927_; 
v___x_927_ = 0;
v___y_919_ = v___x_927_;
goto v___jp_918_;
}
}
v___jp_918_:
{
lean_object* v___x_920_; lean_object* v___x_921_; lean_object* v___x_922_; 
v___x_920_ = lean_box(v___y_919_);
v___x_921_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_921_, 0, v___x_920_);
v___x_922_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_922_, 0, v___x_921_);
return v___x_922_;
}
}
}
LEAN_EXPORT lean_object* l_List_filterAuxM___at___00Std_Queue_filterM___at___00Std_CancellationToken_selector_spec__2_spec__2___redArg___lam__1___boxed(lean_object* v_x_928_, lean_object* v___y_929_){
_start:
{
lean_object* v_res_930_; 
v_res_930_ = l_List_filterAuxM___at___00Std_Queue_filterM___at___00Std_CancellationToken_selector_spec__2_spec__2___redArg___lam__1(v_x_928_);
return v_res_930_;
}
}
LEAN_EXPORT lean_object* l_List_filterAuxM___at___00Std_Queue_filterM___at___00Std_CancellationToken_selector_spec__2_spec__2___redArg___lam__0___boxed(lean_object* v_tail_931_, lean_object* v_x_932_, lean_object* v_head_933_, lean_object* v_x_934_, lean_object* v___y_935_){
_start:
{
lean_object* v_res_936_; 
v_res_936_ = l_List_filterAuxM___at___00Std_Queue_filterM___at___00Std_CancellationToken_selector_spec__2_spec__2___redArg___lam__0(v_tail_931_, v_x_932_, v_head_933_, v_x_934_);
return v_res_936_;
}
}
LEAN_EXPORT lean_object* l_List_filterAuxM___at___00Std_Queue_filterM___at___00Std_CancellationToken_selector_spec__2_spec__2___redArg(lean_object* v_x_943_, lean_object* v_x_944_){
_start:
{
if (lean_obj_tag(v_x_943_) == 0)
{
lean_object* v___x_946_; lean_object* v___x_947_; 
v___x_946_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_946_, 0, v_x_944_);
v___x_947_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_947_, 0, v___x_946_);
return v___x_947_;
}
else
{
lean_object* v_head_948_; lean_object* v_tail_949_; lean_object* v___f_950_; lean_object* v___x_951_; uint8_t v___x_952_; 
v_head_948_ = lean_ctor_get(v_x_943_, 0);
lean_inc_n(v_head_948_, 2);
v_tail_949_ = lean_ctor_get(v_x_943_, 1);
lean_inc(v_tail_949_);
lean_dec_ref_known(v_x_943_, 2);
v___f_950_ = lean_alloc_closure((void*)(l_List_filterAuxM___at___00Std_Queue_filterM___at___00Std_CancellationToken_selector_spec__2_spec__2___redArg___lam__0___boxed), 5, 3);
lean_closure_set(v___f_950_, 0, v_tail_949_);
lean_closure_set(v___f_950_, 1, v_x_944_);
lean_closure_set(v___f_950_, 2, v_head_948_);
v___x_951_ = lean_unsigned_to_nat(0u);
v___x_952_ = 0;
if (lean_obj_tag(v_head_948_) == 0)
{
lean_object* v___x_953_; lean_object* v___x_954_; 
lean_dec_ref_known(v_head_948_, 1);
v___x_953_ = ((lean_object*)(l_List_filterAuxM___at___00Std_Queue_filterM___at___00Std_CancellationToken_selector_spec__2_spec__2___redArg___closed__1));
v___x_954_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_951_, v___x_952_, v___x_953_, v___f_950_);
return v___x_954_;
}
else
{
lean_object* v_finished_955_; lean_object* v___x_957_; uint8_t v_isShared_958_; uint8_t v_isSharedCheck_968_; 
v_finished_955_ = lean_ctor_get(v_head_948_, 0);
v_isSharedCheck_968_ = !lean_is_exclusive(v_head_948_);
if (v_isSharedCheck_968_ == 0)
{
v___x_957_ = v_head_948_;
v_isShared_958_ = v_isSharedCheck_968_;
goto v_resetjp_956_;
}
else
{
lean_inc(v_finished_955_);
lean_dec(v_head_948_);
v___x_957_ = lean_box(0);
v_isShared_958_ = v_isSharedCheck_968_;
goto v_resetjp_956_;
}
v_resetjp_956_:
{
lean_object* v_finished_959_; lean_object* v___f_960_; lean_object* v___x_961_; lean_object* v___x_963_; 
v_finished_959_ = lean_ctor_get(v_finished_955_, 0);
lean_inc(v_finished_959_);
lean_dec_ref(v_finished_955_);
v___f_960_ = ((lean_object*)(l_List_filterAuxM___at___00Std_Queue_filterM___at___00Std_CancellationToken_selector_spec__2_spec__2___redArg___closed__2));
v___x_961_ = lean_st_ref_get(v_finished_959_);
lean_dec(v_finished_959_);
if (v_isShared_958_ == 0)
{
lean_ctor_set(v___x_957_, 0, v___x_961_);
v___x_963_ = v___x_957_;
goto v_reusejp_962_;
}
else
{
lean_object* v_reuseFailAlloc_967_; 
v_reuseFailAlloc_967_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_967_, 0, v___x_961_);
v___x_963_ = v_reuseFailAlloc_967_;
goto v_reusejp_962_;
}
v_reusejp_962_:
{
lean_object* v___x_964_; lean_object* v___x_965_; lean_object* v___x_966_; 
v___x_964_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_964_, 0, v___x_963_);
v___x_965_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_951_, v___x_952_, v___x_964_, v___f_960_);
v___x_966_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_951_, v___x_952_, v___x_965_, v___f_950_);
return v___x_966_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_filterAuxM___at___00Std_Queue_filterM___at___00Std_CancellationToken_selector_spec__2_spec__2___redArg___lam__0(lean_object* v_tail_969_, lean_object* v_x_970_, lean_object* v_head_971_, lean_object* v_x_972_){
_start:
{
if (lean_obj_tag(v_x_972_) == 0)
{
lean_object* v_a_974_; lean_object* v___x_976_; uint8_t v_isShared_977_; uint8_t v_isSharedCheck_982_; 
lean_dec_ref(v_head_971_);
lean_dec(v_x_970_);
lean_dec(v_tail_969_);
v_a_974_ = lean_ctor_get(v_x_972_, 0);
v_isSharedCheck_982_ = !lean_is_exclusive(v_x_972_);
if (v_isSharedCheck_982_ == 0)
{
v___x_976_ = v_x_972_;
v_isShared_977_ = v_isSharedCheck_982_;
goto v_resetjp_975_;
}
else
{
lean_inc(v_a_974_);
lean_dec(v_x_972_);
v___x_976_ = lean_box(0);
v_isShared_977_ = v_isSharedCheck_982_;
goto v_resetjp_975_;
}
v_resetjp_975_:
{
lean_object* v___x_979_; 
if (v_isShared_977_ == 0)
{
v___x_979_ = v___x_976_;
goto v_reusejp_978_;
}
else
{
lean_object* v_reuseFailAlloc_981_; 
v_reuseFailAlloc_981_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_981_, 0, v_a_974_);
v___x_979_ = v_reuseFailAlloc_981_;
goto v_reusejp_978_;
}
v_reusejp_978_:
{
lean_object* v___x_980_; 
v___x_980_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_980_, 0, v___x_979_);
return v___x_980_;
}
}
}
else
{
lean_object* v_a_983_; uint8_t v___x_984_; 
v_a_983_ = lean_ctor_get(v_x_972_, 0);
lean_inc(v_a_983_);
lean_dec_ref_known(v_x_972_, 1);
v___x_984_ = lean_unbox(v_a_983_);
lean_dec(v_a_983_);
if (v___x_984_ == 0)
{
lean_object* v___x_985_; 
lean_dec_ref(v_head_971_);
v___x_985_ = l_List_filterAuxM___at___00Std_Queue_filterM___at___00Std_CancellationToken_selector_spec__2_spec__2___redArg(v_tail_969_, v_x_970_);
return v___x_985_;
}
else
{
lean_object* v___x_986_; lean_object* v___x_987_; 
v___x_986_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_986_, 0, v_head_971_);
lean_ctor_set(v___x_986_, 1, v_x_970_);
v___x_987_ = l_List_filterAuxM___at___00Std_Queue_filterM___at___00Std_CancellationToken_selector_spec__2_spec__2___redArg(v_tail_969_, v___x_986_);
return v___x_987_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_filterAuxM___at___00Std_Queue_filterM___at___00Std_CancellationToken_selector_spec__2_spec__2___redArg___boxed(lean_object* v_x_988_, lean_object* v_x_989_, lean_object* v___y_990_){
_start:
{
lean_object* v_res_991_; 
v_res_991_ = l_List_filterAuxM___at___00Std_Queue_filterM___at___00Std_CancellationToken_selector_spec__2_spec__2___redArg(v_x_988_, v_x_989_);
return v_res_991_;
}
}
LEAN_EXPORT lean_object* l_Std_Queue_filterM___at___00Std_CancellationToken_selector_spec__2___lam__2(lean_object* v_a_992_, lean_object* v___x_993_, lean_object* v_x_994_){
_start:
{
if (lean_obj_tag(v_x_994_) == 0)
{
lean_object* v_a_996_; lean_object* v___x_998_; uint8_t v_isShared_999_; uint8_t v_isSharedCheck_1004_; 
lean_dec(v___x_993_);
lean_dec(v_a_992_);
v_a_996_ = lean_ctor_get(v_x_994_, 0);
v_isSharedCheck_1004_ = !lean_is_exclusive(v_x_994_);
if (v_isSharedCheck_1004_ == 0)
{
v___x_998_ = v_x_994_;
v_isShared_999_ = v_isSharedCheck_1004_;
goto v_resetjp_997_;
}
else
{
lean_inc(v_a_996_);
lean_dec(v_x_994_);
v___x_998_ = lean_box(0);
v_isShared_999_ = v_isSharedCheck_1004_;
goto v_resetjp_997_;
}
v_resetjp_997_:
{
lean_object* v___x_1001_; 
if (v_isShared_999_ == 0)
{
v___x_1001_ = v___x_998_;
goto v_reusejp_1000_;
}
else
{
lean_object* v_reuseFailAlloc_1003_; 
v_reuseFailAlloc_1003_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1003_, 0, v_a_996_);
v___x_1001_ = v_reuseFailAlloc_1003_;
goto v_reusejp_1000_;
}
v_reusejp_1000_:
{
lean_object* v___x_1002_; 
v___x_1002_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1002_, 0, v___x_1001_);
return v___x_1002_;
}
}
}
else
{
lean_object* v_a_1005_; lean_object* v___x_1007_; uint8_t v_isShared_1008_; uint8_t v_isSharedCheck_1021_; 
v_a_1005_ = lean_ctor_get(v_x_994_, 0);
v_isSharedCheck_1021_ = !lean_is_exclusive(v_x_994_);
if (v_isSharedCheck_1021_ == 0)
{
v___x_1007_ = v_x_994_;
v_isShared_1008_ = v_isSharedCheck_1021_;
goto v_resetjp_1006_;
}
else
{
lean_inc(v_a_1005_);
lean_dec(v_x_994_);
v___x_1007_ = lean_box(0);
v_isShared_1008_ = v_isSharedCheck_1021_;
goto v_resetjp_1006_;
}
v_resetjp_1006_:
{
uint8_t v___x_1009_; 
v___x_1009_ = l_List_isEmpty___redArg(v_a_992_);
if (v___x_1009_ == 0)
{
lean_object* v___x_1010_; lean_object* v___x_1012_; 
lean_dec(v___x_993_);
v___x_1010_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1010_, 0, v_a_1005_);
lean_ctor_set(v___x_1010_, 1, v_a_992_);
if (v_isShared_1008_ == 0)
{
lean_ctor_set(v___x_1007_, 0, v___x_1010_);
v___x_1012_ = v___x_1007_;
goto v_reusejp_1011_;
}
else
{
lean_object* v_reuseFailAlloc_1014_; 
v_reuseFailAlloc_1014_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1014_, 0, v___x_1010_);
v___x_1012_ = v_reuseFailAlloc_1014_;
goto v_reusejp_1011_;
}
v_reusejp_1011_:
{
lean_object* v___x_1013_; 
v___x_1013_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1013_, 0, v___x_1012_);
return v___x_1013_;
}
}
else
{
lean_object* v___x_1015_; lean_object* v___x_1016_; lean_object* v___x_1018_; 
lean_dec(v_a_992_);
v___x_1015_ = l_List_reverse___redArg(v_a_1005_);
v___x_1016_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1016_, 0, v___x_993_);
lean_ctor_set(v___x_1016_, 1, v___x_1015_);
if (v_isShared_1008_ == 0)
{
lean_ctor_set(v___x_1007_, 0, v___x_1016_);
v___x_1018_ = v___x_1007_;
goto v_reusejp_1017_;
}
else
{
lean_object* v_reuseFailAlloc_1020_; 
v_reuseFailAlloc_1020_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1020_, 0, v___x_1016_);
v___x_1018_ = v_reuseFailAlloc_1020_;
goto v_reusejp_1017_;
}
v_reusejp_1017_:
{
lean_object* v___x_1019_; 
v___x_1019_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1019_, 0, v___x_1018_);
return v___x_1019_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Queue_filterM___at___00Std_CancellationToken_selector_spec__2___lam__2___boxed(lean_object* v_a_1022_, lean_object* v___x_1023_, lean_object* v_x_1024_, lean_object* v___y_1025_){
_start:
{
lean_object* v_res_1026_; 
v_res_1026_ = l_Std_Queue_filterM___at___00Std_CancellationToken_selector_spec__2___lam__2(v_a_1022_, v___x_1023_, v_x_1024_);
return v_res_1026_;
}
}
LEAN_EXPORT lean_object* l_Std_Queue_filterM___at___00Std_CancellationToken_selector_spec__2___lam__1(lean_object* v___x_1027_, lean_object* v_eList_1028_, lean_object* v___f_1029_, lean_object* v_x_1030_){
_start:
{
if (lean_obj_tag(v_x_1030_) == 0)
{
lean_object* v_a_1032_; lean_object* v___x_1034_; uint8_t v_isShared_1035_; uint8_t v_isSharedCheck_1040_; 
lean_dec_ref(v___f_1029_);
lean_dec(v_eList_1028_);
lean_dec(v___x_1027_);
v_a_1032_ = lean_ctor_get(v_x_1030_, 0);
v_isSharedCheck_1040_ = !lean_is_exclusive(v_x_1030_);
if (v_isSharedCheck_1040_ == 0)
{
v___x_1034_ = v_x_1030_;
v_isShared_1035_ = v_isSharedCheck_1040_;
goto v_resetjp_1033_;
}
else
{
lean_inc(v_a_1032_);
lean_dec(v_x_1030_);
v___x_1034_ = lean_box(0);
v_isShared_1035_ = v_isSharedCheck_1040_;
goto v_resetjp_1033_;
}
v_resetjp_1033_:
{
lean_object* v___x_1037_; 
if (v_isShared_1035_ == 0)
{
v___x_1037_ = v___x_1034_;
goto v_reusejp_1036_;
}
else
{
lean_object* v_reuseFailAlloc_1039_; 
v_reuseFailAlloc_1039_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1039_, 0, v_a_1032_);
v___x_1037_ = v_reuseFailAlloc_1039_;
goto v_reusejp_1036_;
}
v_reusejp_1036_:
{
lean_object* v___x_1038_; 
v___x_1038_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1038_, 0, v___x_1037_);
return v___x_1038_;
}
}
}
else
{
lean_object* v_a_1041_; lean_object* v___f_1042_; lean_object* v___x_1043_; uint8_t v___x_1044_; lean_object* v___x_1045_; lean_object* v___x_1046_; lean_object* v___x_1047_; 
v_a_1041_ = lean_ctor_get(v_x_1030_, 0);
lean_inc(v_a_1041_);
lean_dec_ref_known(v_x_1030_, 1);
lean_inc(v___x_1027_);
v___f_1042_ = lean_alloc_closure((void*)(l_Std_Queue_filterM___at___00Std_CancellationToken_selector_spec__2___lam__2___boxed), 4, 2);
lean_closure_set(v___f_1042_, 0, v_a_1041_);
lean_closure_set(v___f_1042_, 1, v___x_1027_);
v___x_1043_ = lean_unsigned_to_nat(0u);
v___x_1044_ = 0;
v___x_1045_ = l_List_filterAuxM___at___00Std_Queue_filterM___at___00Std_CancellationToken_selector_spec__2_spec__2___redArg(v_eList_1028_, v___x_1027_);
v___x_1046_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_1043_, v___x_1044_, v___x_1045_, v___f_1029_);
v___x_1047_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_1043_, v___x_1044_, v___x_1046_, v___f_1042_);
return v___x_1047_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Queue_filterM___at___00Std_CancellationToken_selector_spec__2___lam__1___boxed(lean_object* v___x_1048_, lean_object* v_eList_1049_, lean_object* v___f_1050_, lean_object* v_x_1051_, lean_object* v___y_1052_){
_start:
{
lean_object* v_res_1053_; 
v_res_1053_ = l_Std_Queue_filterM___at___00Std_CancellationToken_selector_spec__2___lam__1(v___x_1048_, v_eList_1049_, v___f_1050_, v_x_1051_);
return v_res_1053_;
}
}
LEAN_EXPORT lean_object* l_Std_Queue_filterM___at___00Std_CancellationToken_selector_spec__2(lean_object* v_q_1055_, lean_object* v___y_1056_){
_start:
{
lean_object* v_eList_1058_; lean_object* v_dList_1059_; lean_object* v___f_1060_; lean_object* v___x_1061_; lean_object* v___f_1062_; lean_object* v___x_1063_; uint8_t v___x_1064_; lean_object* v___x_1065_; lean_object* v___x_1066_; lean_object* v___x_1067_; 
v_eList_1058_ = lean_ctor_get(v_q_1055_, 0);
lean_inc(v_eList_1058_);
v_dList_1059_ = lean_ctor_get(v_q_1055_, 1);
lean_inc(v_dList_1059_);
lean_dec_ref(v_q_1055_);
v___f_1060_ = ((lean_object*)(l_Std_Queue_filterM___at___00Std_CancellationToken_selector_spec__2___closed__0));
v___x_1061_ = lean_box(0);
v___f_1062_ = lean_alloc_closure((void*)(l_Std_Queue_filterM___at___00Std_CancellationToken_selector_spec__2___lam__1___boxed), 5, 3);
lean_closure_set(v___f_1062_, 0, v___x_1061_);
lean_closure_set(v___f_1062_, 1, v_eList_1058_);
lean_closure_set(v___f_1062_, 2, v___f_1060_);
v___x_1063_ = lean_unsigned_to_nat(0u);
v___x_1064_ = 0;
v___x_1065_ = l_List_filterAuxM___at___00Std_Queue_filterM___at___00Std_CancellationToken_selector_spec__2_spec__2___redArg(v_dList_1059_, v___x_1061_);
v___x_1066_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_1063_, v___x_1064_, v___x_1065_, v___f_1060_);
v___x_1067_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_1063_, v___x_1064_, v___x_1066_, v___f_1062_);
return v___x_1067_;
}
}
LEAN_EXPORT lean_object* l_Std_Queue_filterM___at___00Std_CancellationToken_selector_spec__2___boxed(lean_object* v_q_1068_, lean_object* v___y_1069_, lean_object* v___y_1070_){
_start:
{
lean_object* v_res_1071_; 
v_res_1071_ = l_Std_Queue_filterM___at___00Std_CancellationToken_selector_spec__2(v_q_1068_, v___y_1069_);
lean_dec(v___y_1069_);
return v_res_1071_;
}
}
LEAN_EXPORT lean_object* l_Std_CancellationToken_selector___lam__8(lean_object* v___y_1072_, lean_object* v_x_1073_){
_start:
{
if (lean_obj_tag(v_x_1073_) == 0)
{
lean_object* v_a_1075_; lean_object* v___x_1077_; uint8_t v_isShared_1078_; uint8_t v_isSharedCheck_1083_; 
v_a_1075_ = lean_ctor_get(v_x_1073_, 0);
v_isSharedCheck_1083_ = !lean_is_exclusive(v_x_1073_);
if (v_isSharedCheck_1083_ == 0)
{
v___x_1077_ = v_x_1073_;
v_isShared_1078_ = v_isSharedCheck_1083_;
goto v_resetjp_1076_;
}
else
{
lean_inc(v_a_1075_);
lean_dec(v_x_1073_);
v___x_1077_ = lean_box(0);
v_isShared_1078_ = v_isSharedCheck_1083_;
goto v_resetjp_1076_;
}
v_resetjp_1076_:
{
lean_object* v___x_1080_; 
if (v_isShared_1078_ == 0)
{
v___x_1080_ = v___x_1077_;
goto v_reusejp_1079_;
}
else
{
lean_object* v_reuseFailAlloc_1082_; 
v_reuseFailAlloc_1082_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1082_, 0, v_a_1075_);
v___x_1080_ = v_reuseFailAlloc_1082_;
goto v_reusejp_1079_;
}
v_reusejp_1079_:
{
lean_object* v___x_1081_; 
v___x_1081_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1081_, 0, v___x_1080_);
return v___x_1081_;
}
}
}
else
{
lean_object* v_a_1084_; lean_object* v_reason_1085_; lean_object* v_consumers_1086_; lean_object* v___f_1087_; lean_object* v___x_1088_; uint8_t v___x_1089_; lean_object* v___x_1090_; lean_object* v___x_1091_; 
v_a_1084_ = lean_ctor_get(v_x_1073_, 0);
lean_inc(v_a_1084_);
lean_dec_ref_known(v_x_1073_, 1);
v_reason_1085_ = lean_ctor_get(v_a_1084_, 0);
lean_inc(v_reason_1085_);
v_consumers_1086_ = lean_ctor_get(v_a_1084_, 1);
lean_inc_ref(v_consumers_1086_);
lean_dec(v_a_1084_);
lean_inc(v___y_1072_);
v___f_1087_ = lean_alloc_closure((void*)(l_Std_CancellationToken_selector___lam__7___boxed), 4, 2);
lean_closure_set(v___f_1087_, 0, v_reason_1085_);
lean_closure_set(v___f_1087_, 1, v___y_1072_);
v___x_1088_ = lean_unsigned_to_nat(0u);
v___x_1089_ = 0;
v___x_1090_ = l_Std_Queue_filterM___at___00Std_CancellationToken_selector_spec__2(v_consumers_1086_, v___y_1072_);
v___x_1091_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_1088_, v___x_1089_, v___x_1090_, v___f_1087_);
return v___x_1091_;
}
}
}
LEAN_EXPORT lean_object* l_Std_CancellationToken_selector___lam__8___boxed(lean_object* v___y_1092_, lean_object* v_x_1093_, lean_object* v___y_1094_){
_start:
{
lean_object* v_res_1095_; 
v_res_1095_ = l_Std_CancellationToken_selector___lam__8(v___y_1092_, v_x_1093_);
lean_dec(v___y_1092_);
return v_res_1095_;
}
}
LEAN_EXPORT lean_object* l_Std_CancellationToken_selector___lam__9(lean_object* v___y_1096_){
_start:
{
lean_object* v___f_1098_; lean_object* v___x_1099_; uint8_t v___x_1100_; lean_object* v___x_1101_; lean_object* v___x_1102_; lean_object* v___x_1103_; lean_object* v___x_1104_; 
lean_inc(v___y_1096_);
v___f_1098_ = lean_alloc_closure((void*)(l_Std_CancellationToken_selector___lam__8___boxed), 3, 1);
lean_closure_set(v___f_1098_, 0, v___y_1096_);
v___x_1099_ = lean_unsigned_to_nat(0u);
v___x_1100_ = 0;
v___x_1101_ = lean_st_ref_get(v___y_1096_);
v___x_1102_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1102_, 0, v___x_1101_);
v___x_1103_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1103_, 0, v___x_1102_);
v___x_1104_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_1099_, v___x_1100_, v___x_1103_, v___f_1098_);
return v___x_1104_;
}
}
LEAN_EXPORT lean_object* l_Std_CancellationToken_selector___lam__9___boxed(lean_object* v___y_1105_, lean_object* v___y_1106_){
_start:
{
lean_object* v_res_1107_; 
v_res_1107_ = l_Std_CancellationToken_selector___lam__9(v___y_1105_);
lean_dec(v___y_1105_);
return v_res_1107_;
}
}
LEAN_EXPORT lean_object* l_Std_CancellationToken_selector(lean_object* v_token_1110_){
_start:
{
lean_object* v___f_1111_; lean_object* v___f_1112_; lean_object* v___f_1113_; lean_object* v___f_1114_; lean_object* v___x_1115_; lean_object* v___x_1116_; 
lean_inc_ref_n(v_token_1110_, 2);
v___f_1111_ = lean_alloc_closure((void*)(l_Std_CancellationToken_selector___lam__4___boxed), 3, 1);
lean_closure_set(v___f_1111_, 0, v_token_1110_);
v___f_1112_ = ((lean_object*)(l_Std_CancellationToken_selector___closed__0));
v___f_1113_ = lean_alloc_closure((void*)(l_Std_CancellationToken_selector___lam__6___boxed), 3, 2);
lean_closure_set(v___f_1113_, 0, v_token_1110_);
lean_closure_set(v___f_1113_, 1, v___f_1112_);
v___f_1114_ = ((lean_object*)(l_Std_CancellationToken_selector___closed__1));
v___x_1115_ = lean_alloc_closure((void*)(l_Std_Mutex_atomically___at___00Std_CancellationToken_selector_spec__1___boxed), 5, 4);
lean_closure_set(v___x_1115_, 0, lean_box(0));
lean_closure_set(v___x_1115_, 1, lean_box(0));
lean_closure_set(v___x_1115_, 2, v_token_1110_);
lean_closure_set(v___x_1115_, 3, v___f_1114_);
v___x_1116_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1116_, 0, v___f_1113_);
lean_ctor_set(v___x_1116_, 1, v___f_1111_);
lean_ctor_set(v___x_1116_, 2, v___x_1115_);
return v___x_1116_;
}
}
LEAN_EXPORT lean_object* l_List_filterAuxM___at___00Std_Queue_filterM___at___00Std_CancellationToken_selector_spec__2_spec__2(lean_object* v_x_1117_, lean_object* v_x_1118_, lean_object* v___y_1119_){
_start:
{
lean_object* v___x_1121_; 
v___x_1121_ = l_List_filterAuxM___at___00Std_Queue_filterM___at___00Std_CancellationToken_selector_spec__2_spec__2___redArg(v_x_1117_, v_x_1118_);
return v___x_1121_;
}
}
LEAN_EXPORT lean_object* l_List_filterAuxM___at___00Std_Queue_filterM___at___00Std_CancellationToken_selector_spec__2_spec__2___boxed(lean_object* v_x_1122_, lean_object* v_x_1123_, lean_object* v___y_1124_, lean_object* v___y_1125_){
_start:
{
lean_object* v_res_1126_; 
v_res_1126_ = l_List_filterAuxM___at___00Std_Queue_filterM___at___00Std_CancellationToken_selector_spec__2_spec__2(v_x_1122_, v_x_1123_, v___y_1124_);
lean_dec(v___y_1124_);
return v_res_1126_;
}
}
lean_object* runtime_initialize_Std_Data(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Queue(uint8_t builtin);
lean_object* runtime_initialize_Std_Sync_Mutex(uint8_t builtin);
lean_object* runtime_initialize_Std_Async_Select(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_ToString_Macro(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Std_Sync_CancellationToken(uint8_t builtin) {
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
res = runtime_initialize_Std_Sync_Mutex(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Async_Select(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_ToString_Macro(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Std_Sync_CancellationToken(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Std_Data(uint8_t builtin);
lean_object* initialize_Init_Data_Queue(uint8_t builtin);
lean_object* initialize_Std_Sync_Mutex(uint8_t builtin);
lean_object* initialize_Std_Async_Select(uint8_t builtin);
lean_object* initialize_Init_Data_ToString_Macro(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Std_Sync_CancellationToken(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Std_Data(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Queue(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Sync_Mutex(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Async_Select(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_ToString_Macro(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Sync_CancellationToken(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Std_Sync_CancellationToken(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Std_Sync_CancellationToken(builtin);
}
#ifdef __cplusplus
}
#endif
