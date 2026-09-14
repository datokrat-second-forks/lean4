// Lean compiler output
// Module: Std.Async.ContextAsync
// Imports: public import Std.Internal.UV public import Std.Async.Timer public import Std.Sync.CancellationContext
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
lean_object* lean_task_map(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Std_CancellationContext_cancel(lean_object*, lean_object*);
lean_object* l_Except_map(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_Async_EAsync_tryFinally_x27___redArg(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Std_Async_EAsync_toBaseAsync___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_Async_BaseAsync_toRawBaseIO___boxed(lean_object*, lean_object*, lean_object*);
lean_object* lean_io_as_task(lean_object*, lean_object*);
lean_object* lean_task_bind(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Std_CancellationContext_fork(lean_object*);
lean_object* lean_io_promise_resolve(lean_object*, lean_object*);
lean_object* l_BaseIO_chainTask___redArg(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Std_CancellationToken_selector(lean_object*);
lean_object* lean_task_pure(lean_object*);
lean_object* l_Std_Async_EAsync_instMonad___redArg();
lean_object* l_ReaderT_instMonad___redArg(lean_object*);
size_t lean_array_size(lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Function_const___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_CancellationContext_new();
lean_object* l_Std_CancellationToken_getCancellationReason(lean_object*);
lean_object* l_ReaderT_mk___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_IO_Promise_result_x21___redArg(lean_object*);
lean_object* lean_io_promise_new();
lean_object* l_Std_CancellationToken_wait(lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Std_CancellationToken_isCancelled(lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_runIn___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_runIn___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_runIn(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_runIn___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_run___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_run___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_run___redArg___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_run___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_run___redArg___lam__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_run___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_run___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_run___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_run(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_run___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_getContext(lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_getContext___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_isCancelled___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_isCancelled___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_Async_ContextAsync_isCancelled___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Async_ContextAsync_isCancelled___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Async_ContextAsync_isCancelled___closed__0 = (const lean_object*)&l_Std_Async_ContextAsync_isCancelled___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_isCancelled(lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_isCancelled___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_getCancellationReason___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_getCancellationReason___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_Async_ContextAsync_getCancellationReason___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Async_ContextAsync_getCancellationReason___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Async_ContextAsync_getCancellationReason___closed__0 = (const lean_object*)&l_Std_Async_ContextAsync_getCancellationReason___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_getCancellationReason(lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_getCancellationReason___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_cancel___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_cancel___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_cancel(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_cancel___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_doneSelector___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_doneSelector___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_Async_ContextAsync_doneSelector___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Async_ContextAsync_doneSelector___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Async_ContextAsync_doneSelector___closed__0 = (const lean_object*)&l_Std_Async_ContextAsync_doneSelector___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_doneSelector(lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_doneSelector___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_awaitCancellation___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_awaitCancellation___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_awaitCancellation___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_awaitCancellation___lam__1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Async_ContextAsync_awaitCancellation___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Async_ContextAsync_awaitCancellation___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Async_ContextAsync_awaitCancellation___closed__0 = (const lean_object*)&l_Std_Async_ContextAsync_awaitCancellation___closed__0_value;
static const lean_closure_object l_Std_Async_ContextAsync_awaitCancellation___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Async_ContextAsync_awaitCancellation___lam__1___boxed, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Std_Async_ContextAsync_awaitCancellation___closed__0_value)} };
static const lean_object* l_Std_Async_ContextAsync_awaitCancellation___closed__1 = (const lean_object*)&l_Std_Async_ContextAsync_awaitCancellation___closed__1_value;
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_awaitCancellation(lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_awaitCancellation___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_concurrently___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_concurrently___redArg___lam__2(lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_concurrently___redArg___lam__2___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_concurrently___redArg___lam__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_concurrently___redArg___lam__4___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_concurrently___redArg___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_concurrently___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_concurrently___redArg___lam__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_concurrently___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_concurrently___redArg___lam__5(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_concurrently___redArg___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_concurrently___redArg___lam__7(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_concurrently___redArg___lam__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_concurrently___redArg___lam__6(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_concurrently___redArg___lam__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_concurrently___redArg___lam__10(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_concurrently___redArg___lam__10___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_concurrently___redArg___lam__8(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_concurrently___redArg___lam__8___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_concurrently___redArg___lam__9(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_concurrently___redArg___lam__9___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_concurrently___redArg___lam__11(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_concurrently___redArg___lam__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_concurrently___redArg___lam__12(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_concurrently___redArg___lam__12___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_concurrently___redArg___lam__13(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_concurrently___redArg___lam__13___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_concurrently___redArg___lam__14(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_concurrently___redArg___lam__14___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_concurrently___redArg___lam__15(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_concurrently___redArg___lam__15___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_concurrently___redArg___lam__16(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_concurrently___redArg___lam__16___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_concurrently___redArg___lam__17(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_concurrently___redArg___lam__17___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Async_ContextAsync_concurrently___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Async_ContextAsync_concurrently___redArg___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Async_ContextAsync_concurrently___redArg___closed__0 = (const lean_object*)&l_Std_Async_ContextAsync_concurrently___redArg___closed__0_value;
static const lean_closure_object l_Std_Async_ContextAsync_concurrently___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Async_ContextAsync_concurrently___redArg___lam__2___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Async_ContextAsync_concurrently___redArg___closed__1 = (const lean_object*)&l_Std_Async_ContextAsync_concurrently___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_concurrently___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_concurrently___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_concurrently(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_concurrently___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_concurrentlyAll___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_concurrentlyAll___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_concurrentlyAll___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_concurrentlyAll___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_concurrentlyAll___redArg___lam__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_concurrentlyAll___redArg___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_concurrentlyAll___redArg___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_concurrentlyAll___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_concurrentlyAll___redArg___lam__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_concurrentlyAll___redArg___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_concurrentlyAll___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_concurrentlyAll___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_concurrentlyAll___redArg___lam__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_concurrentlyAll___redArg___lam__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_concurrentlyAll___redArg___lam__7(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_concurrentlyAll___redArg___lam__7___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Async_ContextAsync_concurrentlyAll___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Async_ContextAsync_concurrentlyAll___redArg___lam__0___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Async_ContextAsync_concurrentlyAll___redArg___closed__0 = (const lean_object*)&l_Std_Async_ContextAsync_concurrentlyAll___redArg___closed__0_value;
static lean_once_cell_t l_Std_Async_ContextAsync_concurrentlyAll___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Async_ContextAsync_concurrentlyAll___redArg___closed__1;
static lean_once_cell_t l_Std_Async_ContextAsync_concurrentlyAll___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Async_ContextAsync_concurrentlyAll___redArg___closed__2;
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_concurrentlyAll___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_concurrentlyAll___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_concurrentlyAll(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_concurrentlyAll___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_background___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_background___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_background___redArg___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_background___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Std_Async_ContextAsync_background___redArg___lam__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Std_Async_ContextAsync_background___redArg___lam__2___closed__0 = (const lean_object*)&l_Std_Async_ContextAsync_background___redArg___lam__2___closed__0_value;
static const lean_ctor_object l_Std_Async_ContextAsync_background___redArg___lam__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Std_Async_ContextAsync_background___redArg___lam__2___closed__0_value)}};
static const lean_object* l_Std_Async_ContextAsync_background___redArg___lam__2___closed__1 = (const lean_object*)&l_Std_Async_ContextAsync_background___redArg___lam__2___closed__1_value;
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_background___redArg___lam__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_background___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_background___redArg___lam__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_background___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_background___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_background___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_background(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_background___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_disown___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_disown___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_disown___redArg___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_disown___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_disown___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_disown___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_disown(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_disown___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_raceAll___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_raceAll___redArg___lam__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_raceAll___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_raceAll___redArg___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_raceAll___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_raceAll___redArg___lam__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_raceAll___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_raceAll___redArg___lam__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_raceAll___redArg___lam__4___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_raceAll___redArg___lam__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_raceAll___redArg___lam__5___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_raceAll___redArg___lam__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_raceAll___redArg___lam__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_raceAll___redArg___lam__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_raceAll___redArg___lam__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_raceAll___redArg___lam__8(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_raceAll___redArg___lam__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_raceAll___redArg___lam__9(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_raceAll___redArg___lam__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_raceAll___redArg___lam__10(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_raceAll___redArg___lam__10___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_raceAll___redArg___lam__11(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_raceAll___redArg___lam__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_raceAll___redArg___lam__12(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_raceAll___redArg___lam__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_raceAll___redArg___lam__13(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_raceAll___redArg___lam__13___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_raceAll___redArg___lam__14(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_raceAll___redArg___lam__14___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_raceAll___redArg___lam__15(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_raceAll___redArg___lam__15___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Async_ContextAsync_raceAll___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Async_ContextAsync_raceAll___redArg___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Async_ContextAsync_raceAll___redArg___closed__0 = (const lean_object*)&l_Std_Async_ContextAsync_raceAll___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_raceAll___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_raceAll___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_raceAll(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_raceAll___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_async___redArg___lam__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_async___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_async___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_async___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_async___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_async___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_async(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_async___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_instMonadAsyncAsyncTask___lam__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_instMonadAsyncAsyncTask___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Async_ContextAsync_instMonadAsyncAsyncTask___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Async_ContextAsync_instMonadAsyncAsyncTask___lam__5___boxed, .m_arity = 7, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Std_Async_ContextAsync_concurrently___redArg___closed__1_value),((lean_object*)&l_Std_Async_ContextAsync_concurrently___redArg___closed__0_value)} };
static const lean_object* l_Std_Async_ContextAsync_instMonadAsyncAsyncTask___closed__0 = (const lean_object*)&l_Std_Async_ContextAsync_instMonadAsyncAsyncTask___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Async_ContextAsync_instMonadAsyncAsyncTask = (const lean_object*)&l_Std_Async_ContextAsync_instMonadAsyncAsyncTask___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_instFunctor___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_instFunctor___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_instFunctor___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_instFunctor___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Async_ContextAsync_instFunctor___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Async_ContextAsync_instFunctor___lam__0___boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Async_ContextAsync_instFunctor___closed__0 = (const lean_object*)&l_Std_Async_ContextAsync_instFunctor___closed__0_value;
static const lean_closure_object l_Std_Async_ContextAsync_instFunctor___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Async_ContextAsync_instFunctor___lam__1___boxed, .m_arity = 7, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Std_Async_ContextAsync_instFunctor___closed__0_value)} };
static const lean_object* l_Std_Async_ContextAsync_instFunctor___closed__1 = (const lean_object*)&l_Std_Async_ContextAsync_instFunctor___closed__1_value;
static const lean_ctor_object l_Std_Async_ContextAsync_instFunctor___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Std_Async_ContextAsync_instFunctor___closed__0_value),((lean_object*)&l_Std_Async_ContextAsync_instFunctor___closed__1_value)}};
static const lean_object* l_Std_Async_ContextAsync_instFunctor___closed__2 = (const lean_object*)&l_Std_Async_ContextAsync_instFunctor___closed__2_value;
LEAN_EXPORT const lean_object* l_Std_Async_ContextAsync_instFunctor = (const lean_object*)&l_Std_Async_ContextAsync_instFunctor___closed__2_value;
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_instMonad___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_instMonad___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_instMonad___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_instMonad___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_instMonad___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_instMonad___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Async_ContextAsync_instMonad___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Async_ContextAsync_instMonad___lam__0___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Async_ContextAsync_instMonad___closed__0 = (const lean_object*)&l_Std_Async_ContextAsync_instMonad___closed__0_value;
static const lean_closure_object l_Std_Async_ContextAsync_instMonad___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Async_ContextAsync_instMonad___lam__2___boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Async_ContextAsync_instMonad___closed__1 = (const lean_object*)&l_Std_Async_ContextAsync_instMonad___closed__1_value;
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_instMonad;
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_instMonadLiftIO___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_instMonadLiftIO___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_instMonadLiftIO___lam__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_instMonadLiftIO___lam__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_instMonadLiftIO___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Async_ContextAsync_instMonadLiftIO___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Async_ContextAsync_instMonadLiftIO___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Async_ContextAsync_instMonadLiftIO___closed__0 = (const lean_object*)&l_Std_Async_ContextAsync_instMonadLiftIO___closed__0_value;
static const lean_closure_object l_Std_Async_ContextAsync_instMonadLiftIO___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Async_ContextAsync_instMonadLiftIO___lam__1___boxed, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Std_Async_ContextAsync_instMonadLiftIO___closed__0_value)} };
static const lean_object* l_Std_Async_ContextAsync_instMonadLiftIO___closed__1 = (const lean_object*)&l_Std_Async_ContextAsync_instMonadLiftIO___closed__1_value;
static const lean_closure_object l_Std_Async_ContextAsync_instMonadLiftIO___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Async_ContextAsync_instMonadLiftIO___lam__2___boxed, .m_arity = 5, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Std_Async_ContextAsync_instMonadLiftIO___closed__1_value)} };
static const lean_object* l_Std_Async_ContextAsync_instMonadLiftIO___closed__2 = (const lean_object*)&l_Std_Async_ContextAsync_instMonadLiftIO___closed__2_value;
LEAN_EXPORT const lean_object* l_Std_Async_ContextAsync_instMonadLiftIO = (const lean_object*)&l_Std_Async_ContextAsync_instMonadLiftIO___closed__2_value;
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_instMonadLiftBaseIO___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_instMonadLiftBaseIO___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Async_ContextAsync_instMonadLiftBaseIO___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Async_ContextAsync_instMonadLiftBaseIO___lam__0___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Async_ContextAsync_instMonadLiftBaseIO___closed__0 = (const lean_object*)&l_Std_Async_ContextAsync_instMonadLiftBaseIO___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Async_ContextAsync_instMonadLiftBaseIO = (const lean_object*)&l_Std_Async_ContextAsync_instMonadLiftBaseIO___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_instMonadExceptError___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_instMonadExceptError___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_instMonadExceptError___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_instMonadExceptError___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_instMonadExceptError___lam__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_instMonadExceptError___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Async_ContextAsync_instMonadExceptError___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Async_ContextAsync_instMonadExceptError___lam__0___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Async_ContextAsync_instMonadExceptError___closed__0 = (const lean_object*)&l_Std_Async_ContextAsync_instMonadExceptError___closed__0_value;
static const lean_closure_object l_Std_Async_ContextAsync_instMonadExceptError___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Async_ContextAsync_instMonadExceptError___lam__2___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Async_ContextAsync_instMonadExceptError___closed__1 = (const lean_object*)&l_Std_Async_ContextAsync_instMonadExceptError___closed__1_value;
static const lean_ctor_object l_Std_Async_ContextAsync_instMonadExceptError___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Std_Async_ContextAsync_instMonadExceptError___closed__0_value),((lean_object*)&l_Std_Async_ContextAsync_instMonadExceptError___closed__1_value)}};
static const lean_object* l_Std_Async_ContextAsync_instMonadExceptError___closed__2 = (const lean_object*)&l_Std_Async_ContextAsync_instMonadExceptError___closed__2_value;
LEAN_EXPORT const lean_object* l_Std_Async_ContextAsync_instMonadExceptError = (const lean_object*)&l_Std_Async_ContextAsync_instMonadExceptError___closed__2_value;
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_instMonadFinally___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_instMonadFinally___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_instMonadFinally___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_instMonadFinally___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Async_ContextAsync_instMonadFinally___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Async_ContextAsync_instMonadFinally___lam__1___boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Async_ContextAsync_instMonadFinally___closed__0 = (const lean_object*)&l_Std_Async_ContextAsync_instMonadFinally___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Async_ContextAsync_instMonadFinally = (const lean_object*)&l_Std_Async_ContextAsync_instMonadFinally___closed__0_value;
static const lean_string_object l_Std_Async_ContextAsync_instInhabited___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 37, .m_capacity = 37, .m_length = 36, .m_data = "(`Inhabited.default` for `IO.Error`)"};
static const lean_object* l_Std_Async_ContextAsync_instInhabited___redArg___lam__0___closed__0 = (const lean_object*)&l_Std_Async_ContextAsync_instInhabited___redArg___lam__0___closed__0_value;
static const lean_ctor_object l_Std_Async_ContextAsync_instInhabited___redArg___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 18}, .m_objs = {((lean_object*)&l_Std_Async_ContextAsync_instInhabited___redArg___lam__0___closed__0_value)}};
static const lean_object* l_Std_Async_ContextAsync_instInhabited___redArg___lam__0___closed__1 = (const lean_object*)&l_Std_Async_ContextAsync_instInhabited___redArg___lam__0___closed__1_value;
static const lean_ctor_object l_Std_Async_ContextAsync_instInhabited___redArg___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Std_Async_ContextAsync_instInhabited___redArg___lam__0___closed__1_value)}};
static const lean_object* l_Std_Async_ContextAsync_instInhabited___redArg___lam__0___closed__2 = (const lean_object*)&l_Std_Async_ContextAsync_instInhabited___redArg___lam__0___closed__2_value;
static const lean_ctor_object l_Std_Async_ContextAsync_instInhabited___redArg___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Std_Async_ContextAsync_instInhabited___redArg___lam__0___closed__2_value)}};
static const lean_object* l_Std_Async_ContextAsync_instInhabited___redArg___lam__0___closed__3 = (const lean_object*)&l_Std_Async_ContextAsync_instInhabited___redArg___lam__0___closed__3_value;
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_instInhabited___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_instInhabited___redArg___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_Async_ContextAsync_instInhabited___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Async_ContextAsync_instInhabited___redArg___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Async_ContextAsync_instInhabited___redArg___closed__0 = (const lean_object*)&l_Std_Async_ContextAsync_instInhabited___redArg___closed__0_value;
static const lean_closure_object l_Std_Async_ContextAsync_instInhabited___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*4, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_ReaderT_mk___boxed, .m_arity = 5, .m_num_fixed = 4, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Async_ContextAsync_instInhabited___redArg___closed__0_value)} };
static const lean_object* l_Std_Async_ContextAsync_instInhabited___redArg___closed__1 = (const lean_object*)&l_Std_Async_ContextAsync_instInhabited___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_instInhabited___redArg();
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_instInhabited___redArg___boxed(lean_object*);
static lean_once_cell_t l_Std_Async_ContextAsync_instInhabited___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Async_ContextAsync_instInhabited___closed__0;
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_instInhabited(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_instInhabited___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_instMonadAwaitAsyncTask___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_instMonadAwaitAsyncTask___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Async_ContextAsync_instMonadAwaitAsyncTask___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Async_ContextAsync_instMonadAwaitAsyncTask___lam__0___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Async_ContextAsync_instMonadAwaitAsyncTask___closed__0 = (const lean_object*)&l_Std_Async_ContextAsync_instMonadAwaitAsyncTask___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Async_ContextAsync_instMonadAwaitAsyncTask = (const lean_object*)&l_Std_Async_ContextAsync_instMonadAwaitAsyncTask___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_race___redArg___lam__3(lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_race___redArg___lam__3___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_race___redArg___lam__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_race___redArg___lam__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_race___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_race___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_race___redArg___lam__5(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_race___redArg___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_race___redArg___lam__4(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_race___redArg___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_race___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_race___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_race___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_race___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_race___redArg___lam__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_race___redArg___lam__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_race___redArg___lam__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_race___redArg___lam__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_race___redArg___lam__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_race___redArg___lam__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_race___redArg___lam__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_race___redArg___lam__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Async_ContextAsync_race___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Async_ContextAsync_race___redArg___lam__3___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Async_ContextAsync_race___redArg___closed__0 = (const lean_object*)&l_Std_Async_ContextAsync_race___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_race___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_race___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_race(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_race___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Selector_cancelled(lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Selector_cancelled___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_runIn___redArg(lean_object* v_ctx_1_, lean_object* v_x_2_){
_start:
{
lean_object* v___x_4_; 
v___x_4_ = lean_apply_2(v_x_2_, v_ctx_1_, lean_box(0));
return v___x_4_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_runIn___redArg___boxed(lean_object* v_ctx_5_, lean_object* v_x_6_, lean_object* v___y_7_){
_start:
{
lean_object* v_res_8_; 
v_res_8_ = l_Std_Async_ContextAsync_runIn___redArg(v_ctx_5_, v_x_6_);
return v_res_8_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_runIn(lean_object* v_00_u03b1_9_, lean_object* v_ctx_10_, lean_object* v_x_11_){
_start:
{
lean_object* v___x_13_; 
v___x_13_ = lean_apply_2(v_x_11_, v_ctx_10_, lean_box(0));
return v___x_13_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_runIn___boxed(lean_object* v_00_u03b1_14_, lean_object* v_ctx_15_, lean_object* v_x_16_, lean_object* v___y_17_){
_start:
{
lean_object* v_res_18_; 
v_res_18_ = l_Std_Async_ContextAsync_runIn(v_00_u03b1_14_, v_ctx_15_, v_x_16_);
return v_res_18_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_run___redArg___lam__0(lean_object* v_x_19_, lean_object* v_x_20_){
_start:
{
if (lean_obj_tag(v_x_20_) == 0)
{
lean_object* v_a_22_; lean_object* v___x_24_; uint8_t v_isShared_25_; uint8_t v_isSharedCheck_30_; 
lean_dec_ref(v_x_19_);
v_a_22_ = lean_ctor_get(v_x_20_, 0);
v_isSharedCheck_30_ = !lean_is_exclusive(v_x_20_);
if (v_isSharedCheck_30_ == 0)
{
v___x_24_ = v_x_20_;
v_isShared_25_ = v_isSharedCheck_30_;
goto v_resetjp_23_;
}
else
{
lean_inc(v_a_22_);
lean_dec(v_x_20_);
v___x_24_ = lean_box(0);
v_isShared_25_ = v_isSharedCheck_30_;
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
lean_object* v_reuseFailAlloc_29_; 
v_reuseFailAlloc_29_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_29_, 0, v_a_22_);
v___x_27_ = v_reuseFailAlloc_29_;
goto v_reusejp_26_;
}
v_reusejp_26_:
{
lean_object* v___x_28_; 
v___x_28_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_28_, 0, v___x_27_);
return v___x_28_;
}
}
}
else
{
lean_object* v___x_31_; 
lean_dec_ref_known(v_x_20_, 1);
v___x_31_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_31_, 0, v_x_19_);
return v___x_31_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_run___redArg___lam__0___boxed(lean_object* v_x_32_, lean_object* v_x_33_, lean_object* v___y_34_){
_start:
{
lean_object* v_res_35_; 
v_res_35_ = l_Std_Async_ContextAsync_run___redArg___lam__0(v_x_32_, v_x_33_);
return v_res_35_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_run___redArg___lam__1(lean_object* v_a_36_, lean_object* v_x_37_){
_start:
{
if (lean_obj_tag(v_x_37_) == 0)
{
lean_object* v___x_39_; 
lean_dec_ref(v_a_36_);
v___x_39_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_39_, 0, v_x_37_);
return v___x_39_;
}
else
{
lean_object* v___f_40_; lean_object* v___x_41_; uint8_t v___x_42_; lean_object* v___x_43_; lean_object* v___x_44_; lean_object* v___x_45_; lean_object* v___x_46_; lean_object* v___x_47_; 
v___f_40_ = lean_alloc_closure((void*)(l_Std_Async_ContextAsync_run___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_40_, 0, v_x_37_);
v___x_41_ = lean_unsigned_to_nat(0u);
v___x_42_ = 0;
v___x_43_ = lean_box(2);
v___x_44_ = l_Std_CancellationContext_cancel(v_a_36_, v___x_43_);
v___x_45_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_45_, 0, v___x_44_);
v___x_46_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_46_, 0, v___x_45_);
v___x_47_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_41_, v___x_42_, v___x_46_, v___f_40_);
return v___x_47_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_run___redArg___lam__1___boxed(lean_object* v_a_48_, lean_object* v_x_49_, lean_object* v___y_50_){
_start:
{
lean_object* v_res_51_; 
v_res_51_ = l_Std_Async_ContextAsync_run___redArg___lam__1(v_a_48_, v_x_49_);
return v_res_51_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_run___redArg___lam__2(lean_object* v_x_52_, lean_object* v_x_53_){
_start:
{
if (lean_obj_tag(v_x_53_) == 0)
{
lean_object* v_a_55_; lean_object* v___x_57_; uint8_t v_isShared_58_; uint8_t v_isSharedCheck_63_; 
lean_dec_ref(v_x_52_);
v_a_55_ = lean_ctor_get(v_x_53_, 0);
v_isSharedCheck_63_ = !lean_is_exclusive(v_x_53_);
if (v_isSharedCheck_63_ == 0)
{
v___x_57_ = v_x_53_;
v_isShared_58_ = v_isSharedCheck_63_;
goto v_resetjp_56_;
}
else
{
lean_inc(v_a_55_);
lean_dec(v_x_53_);
v___x_57_ = lean_box(0);
v_isShared_58_ = v_isSharedCheck_63_;
goto v_resetjp_56_;
}
v_resetjp_56_:
{
lean_object* v___x_60_; 
if (v_isShared_58_ == 0)
{
v___x_60_ = v___x_57_;
goto v_reusejp_59_;
}
else
{
lean_object* v_reuseFailAlloc_62_; 
v_reuseFailAlloc_62_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_62_, 0, v_a_55_);
v___x_60_ = v_reuseFailAlloc_62_;
goto v_reusejp_59_;
}
v_reusejp_59_:
{
lean_object* v___x_61_; 
v___x_61_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_61_, 0, v___x_60_);
return v___x_61_;
}
}
}
else
{
lean_object* v_a_64_; lean_object* v___f_65_; lean_object* v___x_66_; uint8_t v___x_67_; lean_object* v___x_68_; lean_object* v___x_69_; 
v_a_64_ = lean_ctor_get(v_x_53_, 0);
lean_inc_n(v_a_64_, 2);
lean_dec_ref_known(v_x_53_, 1);
v___f_65_ = lean_alloc_closure((void*)(l_Std_Async_ContextAsync_run___redArg___lam__1___boxed), 3, 1);
lean_closure_set(v___f_65_, 0, v_a_64_);
v___x_66_ = lean_unsigned_to_nat(0u);
v___x_67_ = 0;
v___x_68_ = lean_apply_2(v_x_52_, v_a_64_, lean_box(0));
v___x_69_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_66_, v___x_67_, v___x_68_, v___f_65_);
return v___x_69_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_run___redArg___lam__2___boxed(lean_object* v_x_70_, lean_object* v_x_71_, lean_object* v___y_72_){
_start:
{
lean_object* v_res_73_; 
v_res_73_ = l_Std_Async_ContextAsync_run___redArg___lam__2(v_x_70_, v_x_71_);
return v_res_73_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_run___redArg(lean_object* v_x_74_){
_start:
{
lean_object* v___f_76_; lean_object* v___x_77_; uint8_t v___x_78_; lean_object* v___x_79_; lean_object* v___x_80_; lean_object* v___x_81_; lean_object* v___x_82_; 
v___f_76_ = lean_alloc_closure((void*)(l_Std_Async_ContextAsync_run___redArg___lam__2___boxed), 3, 1);
lean_closure_set(v___f_76_, 0, v_x_74_);
v___x_77_ = lean_unsigned_to_nat(0u);
v___x_78_ = 0;
v___x_79_ = l_Std_CancellationContext_new();
v___x_80_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_80_, 0, v___x_79_);
v___x_81_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_81_, 0, v___x_80_);
v___x_82_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_77_, v___x_78_, v___x_81_, v___f_76_);
return v___x_82_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_run___redArg___boxed(lean_object* v_x_83_, lean_object* v___y_84_){
_start:
{
lean_object* v_res_85_; 
v_res_85_ = l_Std_Async_ContextAsync_run___redArg(v_x_83_);
return v_res_85_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_run(lean_object* v_00_u03b1_86_, lean_object* v_x_87_){
_start:
{
lean_object* v___f_89_; lean_object* v___x_90_; uint8_t v___x_91_; lean_object* v___x_92_; lean_object* v___x_93_; lean_object* v___x_94_; lean_object* v___x_95_; 
v___f_89_ = lean_alloc_closure((void*)(l_Std_Async_ContextAsync_run___redArg___lam__2___boxed), 3, 1);
lean_closure_set(v___f_89_, 0, v_x_87_);
v___x_90_ = lean_unsigned_to_nat(0u);
v___x_91_ = 0;
v___x_92_ = l_Std_CancellationContext_new();
v___x_93_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_93_, 0, v___x_92_);
v___x_94_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_94_, 0, v___x_93_);
v___x_95_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_90_, v___x_91_, v___x_94_, v___f_89_);
return v___x_95_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_run___boxed(lean_object* v_00_u03b1_96_, lean_object* v_x_97_, lean_object* v___y_98_){
_start:
{
lean_object* v_res_99_; 
v_res_99_ = l_Std_Async_ContextAsync_run(v_00_u03b1_96_, v_x_97_);
return v_res_99_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_getContext(lean_object* v___y_100_){
_start:
{
lean_object* v___x_102_; lean_object* v___x_103_; 
lean_inc_ref(v___y_100_);
v___x_102_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_102_, 0, v___y_100_);
v___x_103_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_103_, 0, v___x_102_);
return v___x_103_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_getContext___boxed(lean_object* v___y_104_, lean_object* v___y_105_){
_start:
{
lean_object* v_res_106_; 
v_res_106_ = l_Std_Async_ContextAsync_getContext(v___y_104_);
lean_dec_ref(v___y_104_);
return v_res_106_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_isCancelled___lam__0(lean_object* v_x_107_){
_start:
{
if (lean_obj_tag(v_x_107_) == 0)
{
lean_object* v_a_109_; lean_object* v___x_111_; uint8_t v_isShared_112_; uint8_t v_isSharedCheck_117_; 
v_a_109_ = lean_ctor_get(v_x_107_, 0);
v_isSharedCheck_117_ = !lean_is_exclusive(v_x_107_);
if (v_isSharedCheck_117_ == 0)
{
v___x_111_ = v_x_107_;
v_isShared_112_ = v_isSharedCheck_117_;
goto v_resetjp_110_;
}
else
{
lean_inc(v_a_109_);
lean_dec(v_x_107_);
v___x_111_ = lean_box(0);
v_isShared_112_ = v_isSharedCheck_117_;
goto v_resetjp_110_;
}
v_resetjp_110_:
{
lean_object* v___x_114_; 
if (v_isShared_112_ == 0)
{
v___x_114_ = v___x_111_;
goto v_reusejp_113_;
}
else
{
lean_object* v_reuseFailAlloc_116_; 
v_reuseFailAlloc_116_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_116_, 0, v_a_109_);
v___x_114_ = v_reuseFailAlloc_116_;
goto v_reusejp_113_;
}
v_reusejp_113_:
{
lean_object* v___x_115_; 
v___x_115_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_115_, 0, v___x_114_);
return v___x_115_;
}
}
}
else
{
lean_object* v_a_118_; lean_object* v___x_120_; uint8_t v_isShared_121_; uint8_t v_isSharedCheck_129_; 
v_a_118_ = lean_ctor_get(v_x_107_, 0);
v_isSharedCheck_129_ = !lean_is_exclusive(v_x_107_);
if (v_isSharedCheck_129_ == 0)
{
v___x_120_ = v_x_107_;
v_isShared_121_ = v_isSharedCheck_129_;
goto v_resetjp_119_;
}
else
{
lean_inc(v_a_118_);
lean_dec(v_x_107_);
v___x_120_ = lean_box(0);
v_isShared_121_ = v_isSharedCheck_129_;
goto v_resetjp_119_;
}
v_resetjp_119_:
{
lean_object* v_token_122_; uint8_t v___x_123_; lean_object* v___x_124_; lean_object* v___x_126_; 
v_token_122_ = lean_ctor_get(v_a_118_, 1);
lean_inc_ref(v_token_122_);
lean_dec(v_a_118_);
v___x_123_ = l_Std_CancellationToken_isCancelled(v_token_122_);
v___x_124_ = lean_box(v___x_123_);
if (v_isShared_121_ == 0)
{
lean_ctor_set(v___x_120_, 0, v___x_124_);
v___x_126_ = v___x_120_;
goto v_reusejp_125_;
}
else
{
lean_object* v_reuseFailAlloc_128_; 
v_reuseFailAlloc_128_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_128_, 0, v___x_124_);
v___x_126_ = v_reuseFailAlloc_128_;
goto v_reusejp_125_;
}
v_reusejp_125_:
{
lean_object* v___x_127_; 
v___x_127_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_127_, 0, v___x_126_);
return v___x_127_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_isCancelled___lam__0___boxed(lean_object* v_x_130_, lean_object* v___y_131_){
_start:
{
lean_object* v_res_132_; 
v_res_132_ = l_Std_Async_ContextAsync_isCancelled___lam__0(v_x_130_);
return v_res_132_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_isCancelled(lean_object* v___y_134_){
_start:
{
lean_object* v___f_136_; lean_object* v___x_137_; uint8_t v___x_138_; lean_object* v___x_139_; lean_object* v___x_140_; lean_object* v___x_141_; 
v___f_136_ = ((lean_object*)(l_Std_Async_ContextAsync_isCancelled___closed__0));
v___x_137_ = lean_unsigned_to_nat(0u);
v___x_138_ = 0;
lean_inc_ref(v___y_134_);
v___x_139_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_139_, 0, v___y_134_);
v___x_140_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_140_, 0, v___x_139_);
v___x_141_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_137_, v___x_138_, v___x_140_, v___f_136_);
return v___x_141_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_isCancelled___boxed(lean_object* v___y_142_, lean_object* v___y_143_){
_start:
{
lean_object* v_res_144_; 
v_res_144_ = l_Std_Async_ContextAsync_isCancelled(v___y_142_);
lean_dec_ref(v___y_142_);
return v_res_144_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_getCancellationReason___lam__0(lean_object* v_x_145_){
_start:
{
if (lean_obj_tag(v_x_145_) == 0)
{
lean_object* v_a_147_; lean_object* v___x_149_; uint8_t v_isShared_150_; uint8_t v_isSharedCheck_155_; 
v_a_147_ = lean_ctor_get(v_x_145_, 0);
v_isSharedCheck_155_ = !lean_is_exclusive(v_x_145_);
if (v_isSharedCheck_155_ == 0)
{
v___x_149_ = v_x_145_;
v_isShared_150_ = v_isSharedCheck_155_;
goto v_resetjp_148_;
}
else
{
lean_inc(v_a_147_);
lean_dec(v_x_145_);
v___x_149_ = lean_box(0);
v_isShared_150_ = v_isSharedCheck_155_;
goto v_resetjp_148_;
}
v_resetjp_148_:
{
lean_object* v___x_152_; 
if (v_isShared_150_ == 0)
{
v___x_152_ = v___x_149_;
goto v_reusejp_151_;
}
else
{
lean_object* v_reuseFailAlloc_154_; 
v_reuseFailAlloc_154_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_154_, 0, v_a_147_);
v___x_152_ = v_reuseFailAlloc_154_;
goto v_reusejp_151_;
}
v_reusejp_151_:
{
lean_object* v___x_153_; 
v___x_153_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_153_, 0, v___x_152_);
return v___x_153_;
}
}
}
else
{
lean_object* v_a_156_; lean_object* v___x_158_; uint8_t v_isShared_159_; uint8_t v_isSharedCheck_166_; 
v_a_156_ = lean_ctor_get(v_x_145_, 0);
v_isSharedCheck_166_ = !lean_is_exclusive(v_x_145_);
if (v_isSharedCheck_166_ == 0)
{
v___x_158_ = v_x_145_;
v_isShared_159_ = v_isSharedCheck_166_;
goto v_resetjp_157_;
}
else
{
lean_inc(v_a_156_);
lean_dec(v_x_145_);
v___x_158_ = lean_box(0);
v_isShared_159_ = v_isSharedCheck_166_;
goto v_resetjp_157_;
}
v_resetjp_157_:
{
lean_object* v_token_160_; lean_object* v___x_161_; lean_object* v___x_163_; 
v_token_160_ = lean_ctor_get(v_a_156_, 1);
lean_inc_ref(v_token_160_);
lean_dec(v_a_156_);
v___x_161_ = l_Std_CancellationToken_getCancellationReason(v_token_160_);
if (v_isShared_159_ == 0)
{
lean_ctor_set(v___x_158_, 0, v___x_161_);
v___x_163_ = v___x_158_;
goto v_reusejp_162_;
}
else
{
lean_object* v_reuseFailAlloc_165_; 
v_reuseFailAlloc_165_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_165_, 0, v___x_161_);
v___x_163_ = v_reuseFailAlloc_165_;
goto v_reusejp_162_;
}
v_reusejp_162_:
{
lean_object* v___x_164_; 
v___x_164_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_164_, 0, v___x_163_);
return v___x_164_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_getCancellationReason___lam__0___boxed(lean_object* v_x_167_, lean_object* v___y_168_){
_start:
{
lean_object* v_res_169_; 
v_res_169_ = l_Std_Async_ContextAsync_getCancellationReason___lam__0(v_x_167_);
return v_res_169_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_getCancellationReason(lean_object* v___y_171_){
_start:
{
lean_object* v___f_173_; lean_object* v___x_174_; uint8_t v___x_175_; lean_object* v___x_176_; lean_object* v___x_177_; lean_object* v___x_178_; 
v___f_173_ = ((lean_object*)(l_Std_Async_ContextAsync_getCancellationReason___closed__0));
v___x_174_ = lean_unsigned_to_nat(0u);
v___x_175_ = 0;
lean_inc_ref(v___y_171_);
v___x_176_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_176_, 0, v___y_171_);
v___x_177_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_177_, 0, v___x_176_);
v___x_178_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_174_, v___x_175_, v___x_177_, v___f_173_);
return v___x_178_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_getCancellationReason___boxed(lean_object* v___y_179_, lean_object* v___y_180_){
_start:
{
lean_object* v_res_181_; 
v_res_181_ = l_Std_Async_ContextAsync_getCancellationReason(v___y_179_);
lean_dec_ref(v___y_179_);
return v_res_181_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_cancel___lam__0(lean_object* v_reason_182_, lean_object* v_x_183_){
_start:
{
if (lean_obj_tag(v_x_183_) == 0)
{
lean_object* v_a_185_; lean_object* v___x_187_; uint8_t v_isShared_188_; uint8_t v_isSharedCheck_193_; 
lean_dec(v_reason_182_);
v_a_185_ = lean_ctor_get(v_x_183_, 0);
v_isSharedCheck_193_ = !lean_is_exclusive(v_x_183_);
if (v_isSharedCheck_193_ == 0)
{
v___x_187_ = v_x_183_;
v_isShared_188_ = v_isSharedCheck_193_;
goto v_resetjp_186_;
}
else
{
lean_inc(v_a_185_);
lean_dec(v_x_183_);
v___x_187_ = lean_box(0);
v_isShared_188_ = v_isSharedCheck_193_;
goto v_resetjp_186_;
}
v_resetjp_186_:
{
lean_object* v___x_190_; 
if (v_isShared_188_ == 0)
{
v___x_190_ = v___x_187_;
goto v_reusejp_189_;
}
else
{
lean_object* v_reuseFailAlloc_192_; 
v_reuseFailAlloc_192_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_192_, 0, v_a_185_);
v___x_190_ = v_reuseFailAlloc_192_;
goto v_reusejp_189_;
}
v_reusejp_189_:
{
lean_object* v___x_191_; 
v___x_191_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_191_, 0, v___x_190_);
return v___x_191_;
}
}
}
else
{
lean_object* v_a_194_; lean_object* v___x_196_; uint8_t v_isShared_197_; uint8_t v_isSharedCheck_203_; 
v_a_194_ = lean_ctor_get(v_x_183_, 0);
v_isSharedCheck_203_ = !lean_is_exclusive(v_x_183_);
if (v_isSharedCheck_203_ == 0)
{
v___x_196_ = v_x_183_;
v_isShared_197_ = v_isSharedCheck_203_;
goto v_resetjp_195_;
}
else
{
lean_inc(v_a_194_);
lean_dec(v_x_183_);
v___x_196_ = lean_box(0);
v_isShared_197_ = v_isSharedCheck_203_;
goto v_resetjp_195_;
}
v_resetjp_195_:
{
lean_object* v___x_198_; lean_object* v___x_200_; 
v___x_198_ = l_Std_CancellationContext_cancel(v_a_194_, v_reason_182_);
if (v_isShared_197_ == 0)
{
lean_ctor_set(v___x_196_, 0, v___x_198_);
v___x_200_ = v___x_196_;
goto v_reusejp_199_;
}
else
{
lean_object* v_reuseFailAlloc_202_; 
v_reuseFailAlloc_202_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_202_, 0, v___x_198_);
v___x_200_ = v_reuseFailAlloc_202_;
goto v_reusejp_199_;
}
v_reusejp_199_:
{
lean_object* v___x_201_; 
v___x_201_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_201_, 0, v___x_200_);
return v___x_201_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_cancel___lam__0___boxed(lean_object* v_reason_204_, lean_object* v_x_205_, lean_object* v___y_206_){
_start:
{
lean_object* v_res_207_; 
v_res_207_ = l_Std_Async_ContextAsync_cancel___lam__0(v_reason_204_, v_x_205_);
return v_res_207_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_cancel(lean_object* v_reason_208_, lean_object* v___y_209_){
_start:
{
lean_object* v___f_211_; lean_object* v___x_212_; uint8_t v___x_213_; lean_object* v___x_214_; lean_object* v___x_215_; lean_object* v___x_216_; 
v___f_211_ = lean_alloc_closure((void*)(l_Std_Async_ContextAsync_cancel___lam__0___boxed), 3, 1);
lean_closure_set(v___f_211_, 0, v_reason_208_);
v___x_212_ = lean_unsigned_to_nat(0u);
v___x_213_ = 0;
lean_inc_ref(v___y_209_);
v___x_214_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_214_, 0, v___y_209_);
v___x_215_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_215_, 0, v___x_214_);
v___x_216_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_212_, v___x_213_, v___x_215_, v___f_211_);
return v___x_216_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_cancel___boxed(lean_object* v_reason_217_, lean_object* v___y_218_, lean_object* v___y_219_){
_start:
{
lean_object* v_res_220_; 
v_res_220_ = l_Std_Async_ContextAsync_cancel(v_reason_217_, v___y_218_);
lean_dec_ref(v___y_218_);
return v_res_220_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_doneSelector___lam__0(lean_object* v_x_221_){
_start:
{
if (lean_obj_tag(v_x_221_) == 0)
{
lean_object* v_a_223_; lean_object* v___x_225_; uint8_t v_isShared_226_; uint8_t v_isSharedCheck_231_; 
v_a_223_ = lean_ctor_get(v_x_221_, 0);
v_isSharedCheck_231_ = !lean_is_exclusive(v_x_221_);
if (v_isSharedCheck_231_ == 0)
{
v___x_225_ = v_x_221_;
v_isShared_226_ = v_isSharedCheck_231_;
goto v_resetjp_224_;
}
else
{
lean_inc(v_a_223_);
lean_dec(v_x_221_);
v___x_225_ = lean_box(0);
v_isShared_226_ = v_isSharedCheck_231_;
goto v_resetjp_224_;
}
v_resetjp_224_:
{
lean_object* v___x_228_; 
if (v_isShared_226_ == 0)
{
v___x_228_ = v___x_225_;
goto v_reusejp_227_;
}
else
{
lean_object* v_reuseFailAlloc_230_; 
v_reuseFailAlloc_230_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_230_, 0, v_a_223_);
v___x_228_ = v_reuseFailAlloc_230_;
goto v_reusejp_227_;
}
v_reusejp_227_:
{
lean_object* v___x_229_; 
v___x_229_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_229_, 0, v___x_228_);
return v___x_229_;
}
}
}
else
{
lean_object* v_a_232_; lean_object* v___x_234_; uint8_t v_isShared_235_; uint8_t v_isSharedCheck_242_; 
v_a_232_ = lean_ctor_get(v_x_221_, 0);
v_isSharedCheck_242_ = !lean_is_exclusive(v_x_221_);
if (v_isSharedCheck_242_ == 0)
{
v___x_234_ = v_x_221_;
v_isShared_235_ = v_isSharedCheck_242_;
goto v_resetjp_233_;
}
else
{
lean_inc(v_a_232_);
lean_dec(v_x_221_);
v___x_234_ = lean_box(0);
v_isShared_235_ = v_isSharedCheck_242_;
goto v_resetjp_233_;
}
v_resetjp_233_:
{
lean_object* v_token_236_; lean_object* v___x_237_; lean_object* v___x_239_; 
v_token_236_ = lean_ctor_get(v_a_232_, 1);
lean_inc_ref(v_token_236_);
lean_dec(v_a_232_);
v___x_237_ = l_Std_CancellationToken_selector(v_token_236_);
if (v_isShared_235_ == 0)
{
lean_ctor_set(v___x_234_, 0, v___x_237_);
v___x_239_ = v___x_234_;
goto v_reusejp_238_;
}
else
{
lean_object* v_reuseFailAlloc_241_; 
v_reuseFailAlloc_241_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_241_, 0, v___x_237_);
v___x_239_ = v_reuseFailAlloc_241_;
goto v_reusejp_238_;
}
v_reusejp_238_:
{
lean_object* v___x_240_; 
v___x_240_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_240_, 0, v___x_239_);
return v___x_240_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_doneSelector___lam__0___boxed(lean_object* v_x_243_, lean_object* v___y_244_){
_start:
{
lean_object* v_res_245_; 
v_res_245_ = l_Std_Async_ContextAsync_doneSelector___lam__0(v_x_243_);
return v_res_245_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_doneSelector(lean_object* v___y_247_){
_start:
{
lean_object* v___f_249_; lean_object* v___x_250_; uint8_t v___x_251_; lean_object* v___x_252_; lean_object* v___x_253_; lean_object* v___x_254_; 
v___f_249_ = ((lean_object*)(l_Std_Async_ContextAsync_doneSelector___closed__0));
v___x_250_ = lean_unsigned_to_nat(0u);
v___x_251_ = 0;
lean_inc_ref(v___y_247_);
v___x_252_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_252_, 0, v___y_247_);
v___x_253_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_253_, 0, v___x_252_);
v___x_254_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_250_, v___x_251_, v___x_253_, v___f_249_);
return v___x_254_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_doneSelector___boxed(lean_object* v___y_255_, lean_object* v___y_256_){
_start:
{
lean_object* v_res_257_; 
v_res_257_ = l_Std_Async_ContextAsync_doneSelector(v___y_255_);
lean_dec_ref(v___y_255_);
return v_res_257_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_awaitCancellation___lam__0(lean_object* v_x_258_){
_start:
{
if (lean_obj_tag(v_x_258_) == 0)
{
lean_object* v_a_260_; lean_object* v___x_262_; uint8_t v_isShared_263_; uint8_t v_isSharedCheck_268_; 
v_a_260_ = lean_ctor_get(v_x_258_, 0);
v_isSharedCheck_268_ = !lean_is_exclusive(v_x_258_);
if (v_isSharedCheck_268_ == 0)
{
v___x_262_ = v_x_258_;
v_isShared_263_ = v_isSharedCheck_268_;
goto v_resetjp_261_;
}
else
{
lean_inc(v_a_260_);
lean_dec(v_x_258_);
v___x_262_ = lean_box(0);
v_isShared_263_ = v_isSharedCheck_268_;
goto v_resetjp_261_;
}
v_resetjp_261_:
{
lean_object* v___x_265_; 
if (v_isShared_263_ == 0)
{
v___x_265_ = v___x_262_;
goto v_reusejp_264_;
}
else
{
lean_object* v_reuseFailAlloc_267_; 
v_reuseFailAlloc_267_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_267_, 0, v_a_260_);
v___x_265_ = v_reuseFailAlloc_267_;
goto v_reusejp_264_;
}
v_reusejp_264_:
{
lean_object* v___x_266_; 
v___x_266_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_266_, 0, v___x_265_);
return v___x_266_;
}
}
}
else
{
lean_object* v_a_269_; lean_object* v___x_270_; 
v_a_269_ = lean_ctor_get(v_x_258_, 0);
lean_inc(v_a_269_);
lean_dec_ref_known(v_x_258_, 1);
v___x_270_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_270_, 0, v_a_269_);
return v___x_270_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_awaitCancellation___lam__0___boxed(lean_object* v_x_271_, lean_object* v___y_272_){
_start:
{
lean_object* v_res_273_; 
v_res_273_ = l_Std_Async_ContextAsync_awaitCancellation___lam__0(v_x_271_);
return v_res_273_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_awaitCancellation___lam__1(lean_object* v___f_274_, lean_object* v_x_275_){
_start:
{
if (lean_obj_tag(v_x_275_) == 0)
{
lean_object* v_a_277_; lean_object* v___x_279_; uint8_t v_isShared_280_; uint8_t v_isSharedCheck_285_; 
lean_dec_ref(v___f_274_);
v_a_277_ = lean_ctor_get(v_x_275_, 0);
v_isSharedCheck_285_ = !lean_is_exclusive(v_x_275_);
if (v_isSharedCheck_285_ == 0)
{
v___x_279_ = v_x_275_;
v_isShared_280_ = v_isSharedCheck_285_;
goto v_resetjp_278_;
}
else
{
lean_inc(v_a_277_);
lean_dec(v_x_275_);
v___x_279_ = lean_box(0);
v_isShared_280_ = v_isSharedCheck_285_;
goto v_resetjp_278_;
}
v_resetjp_278_:
{
lean_object* v___x_282_; 
if (v_isShared_280_ == 0)
{
v___x_282_ = v___x_279_;
goto v_reusejp_281_;
}
else
{
lean_object* v_reuseFailAlloc_284_; 
v_reuseFailAlloc_284_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_284_, 0, v_a_277_);
v___x_282_ = v_reuseFailAlloc_284_;
goto v_reusejp_281_;
}
v_reusejp_281_:
{
lean_object* v___x_283_; 
v___x_283_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_283_, 0, v___x_282_);
return v___x_283_;
}
}
}
else
{
lean_object* v_a_286_; lean_object* v___x_288_; uint8_t v_isShared_289_; uint8_t v_isSharedCheck_306_; 
v_a_286_ = lean_ctor_get(v_x_275_, 0);
v_isSharedCheck_306_ = !lean_is_exclusive(v_x_275_);
if (v_isSharedCheck_306_ == 0)
{
v___x_288_ = v_x_275_;
v_isShared_289_ = v_isSharedCheck_306_;
goto v_resetjp_287_;
}
else
{
lean_inc(v_a_286_);
lean_dec(v_x_275_);
v___x_288_ = lean_box(0);
v_isShared_289_ = v_isSharedCheck_306_;
goto v_resetjp_287_;
}
v_resetjp_287_:
{
lean_object* v_token_290_; lean_object* v___x_291_; uint8_t v___x_292_; lean_object* v_val_294_; lean_object* v___x_297_; 
v_token_290_ = lean_ctor_get(v_a_286_, 1);
lean_inc_ref(v_token_290_);
lean_dec(v_a_286_);
v___x_291_ = lean_unsigned_to_nat(0u);
v___x_292_ = 0;
v___x_297_ = l_Std_CancellationToken_wait(v_token_290_);
if (lean_obj_tag(v___x_297_) == 0)
{
lean_object* v_a_298_; lean_object* v___x_300_; 
v_a_298_ = lean_ctor_get(v___x_297_, 0);
lean_inc(v_a_298_);
lean_dec_ref_known(v___x_297_, 1);
if (v_isShared_289_ == 0)
{
lean_ctor_set(v___x_288_, 0, v_a_298_);
v___x_300_ = v___x_288_;
goto v_reusejp_299_;
}
else
{
lean_object* v_reuseFailAlloc_301_; 
v_reuseFailAlloc_301_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_301_, 0, v_a_298_);
v___x_300_ = v_reuseFailAlloc_301_;
goto v_reusejp_299_;
}
v_reusejp_299_:
{
v_val_294_ = v___x_300_;
goto v___jp_293_;
}
}
else
{
lean_object* v_a_302_; lean_object* v___x_304_; 
v_a_302_ = lean_ctor_get(v___x_297_, 0);
lean_inc(v_a_302_);
lean_dec_ref_known(v___x_297_, 1);
if (v_isShared_289_ == 0)
{
lean_ctor_set_tag(v___x_288_, 0);
lean_ctor_set(v___x_288_, 0, v_a_302_);
v___x_304_ = v___x_288_;
goto v_reusejp_303_;
}
else
{
lean_object* v_reuseFailAlloc_305_; 
v_reuseFailAlloc_305_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_305_, 0, v_a_302_);
v___x_304_ = v_reuseFailAlloc_305_;
goto v_reusejp_303_;
}
v_reusejp_303_:
{
v_val_294_ = v___x_304_;
goto v___jp_293_;
}
}
v___jp_293_:
{
lean_object* v___x_295_; lean_object* v___x_296_; 
v___x_295_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_295_, 0, v_val_294_);
v___x_296_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_291_, v___x_292_, v___x_295_, v___f_274_);
return v___x_296_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_awaitCancellation___lam__1___boxed(lean_object* v___f_307_, lean_object* v_x_308_, lean_object* v___y_309_){
_start:
{
lean_object* v_res_310_; 
v_res_310_ = l_Std_Async_ContextAsync_awaitCancellation___lam__1(v___f_307_, v_x_308_);
return v_res_310_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_awaitCancellation(lean_object* v___y_314_){
_start:
{
lean_object* v___f_316_; lean_object* v___x_317_; uint8_t v___x_318_; lean_object* v___x_319_; lean_object* v___x_320_; lean_object* v___x_321_; 
v___f_316_ = ((lean_object*)(l_Std_Async_ContextAsync_awaitCancellation___closed__1));
v___x_317_ = lean_unsigned_to_nat(0u);
v___x_318_ = 0;
lean_inc_ref(v___y_314_);
v___x_319_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_319_, 0, v___y_314_);
v___x_320_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_320_, 0, v___x_319_);
v___x_321_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_317_, v___x_318_, v___x_320_, v___f_316_);
return v___x_321_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_awaitCancellation___boxed(lean_object* v___y_322_, lean_object* v___y_323_){
_start:
{
lean_object* v_res_324_; 
v_res_324_ = l_Std_Async_ContextAsync_awaitCancellation(v___y_322_);
lean_dec_ref(v___y_322_);
return v_res_324_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_concurrently___redArg___lam__0(lean_object* v_x_325_){
_start:
{
if (lean_obj_tag(v_x_325_) == 0)
{
lean_object* v_a_326_; lean_object* v___x_327_; 
v_a_326_ = lean_ctor_get(v_x_325_, 0);
lean_inc(v_a_326_);
lean_dec_ref_known(v_x_325_, 1);
v___x_327_ = lean_task_pure(v_a_326_);
return v___x_327_;
}
else
{
lean_object* v_a_328_; 
v_a_328_ = lean_ctor_get(v_x_325_, 0);
lean_inc_ref(v_a_328_);
lean_dec_ref_known(v_x_325_, 1);
return v_a_328_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_concurrently___redArg___lam__2(lean_object* v_x_329_){
_start:
{
lean_object* v_fst_330_; 
v_fst_330_ = lean_ctor_get(v_x_329_, 0);
lean_inc(v_fst_330_);
return v_fst_330_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_concurrently___redArg___lam__2___boxed(lean_object* v_x_331_){
_start:
{
lean_object* v_res_332_; 
v_res_332_ = l_Std_Async_ContextAsync_concurrently___redArg___lam__2(v_x_331_);
lean_dec_ref(v_x_331_);
return v_res_332_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_concurrently___redArg___lam__4(lean_object* v_a_333_, lean_object* v_x_334_){
_start:
{
if (lean_obj_tag(v_x_334_) == 0)
{
lean_object* v___f_336_; lean_object* v___x_337_; lean_object* v___x_338_; uint8_t v___x_339_; lean_object* v___x_340_; lean_object* v___x_341_; lean_object* v___x_342_; lean_object* v___x_343_; 
v___f_336_ = lean_alloc_closure((void*)(l_Std_Async_ContextAsync_run___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_336_, 0, v_x_334_);
v___x_337_ = lean_box(2);
v___x_338_ = lean_unsigned_to_nat(0u);
v___x_339_ = 0;
v___x_340_ = l_Std_CancellationContext_cancel(v_a_333_, v___x_337_);
v___x_341_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_341_, 0, v___x_340_);
v___x_342_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_342_, 0, v___x_341_);
v___x_343_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_338_, v___x_339_, v___x_342_, v___f_336_);
return v___x_343_;
}
else
{
lean_object* v___x_344_; 
lean_dec_ref(v_a_333_);
v___x_344_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_344_, 0, v_x_334_);
return v___x_344_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_concurrently___redArg___lam__4___boxed(lean_object* v_a_345_, lean_object* v_x_346_, lean_object* v___y_347_){
_start:
{
lean_object* v_res_348_; 
v_res_348_ = l_Std_Async_ContextAsync_concurrently___redArg___lam__4(v_a_345_, v_x_346_);
return v_res_348_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_concurrently___redArg___lam__1(lean_object* v_x_349_, lean_object* v_a_350_, lean_object* v___f_351_){
_start:
{
lean_object* v___x_353_; uint8_t v___x_354_; lean_object* v___x_355_; lean_object* v___x_356_; 
v___x_353_ = lean_unsigned_to_nat(0u);
v___x_354_ = 0;
v___x_355_ = lean_apply_2(v_x_349_, v_a_350_, lean_box(0));
v___x_356_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_353_, v___x_354_, v___x_355_, v___f_351_);
return v___x_356_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_concurrently___redArg___lam__1___boxed(lean_object* v_x_357_, lean_object* v_a_358_, lean_object* v___f_359_, lean_object* v___y_360_){
_start:
{
lean_object* v_res_361_; 
v_res_361_ = l_Std_Async_ContextAsync_concurrently___redArg___lam__1(v_x_357_, v_a_358_, v___f_359_);
return v_res_361_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_concurrently___redArg___lam__3(lean_object* v_a_362_, lean_object* v___x_363_, lean_object* v_x_364_){
_start:
{
lean_object* v___x_366_; lean_object* v___x_367_; lean_object* v___x_368_; 
v___x_366_ = l_Std_CancellationContext_cancel(v_a_362_, v___x_363_);
v___x_367_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_367_, 0, v___x_366_);
v___x_368_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_368_, 0, v___x_367_);
return v___x_368_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_concurrently___redArg___lam__3___boxed(lean_object* v_a_369_, lean_object* v___x_370_, lean_object* v_x_371_, lean_object* v___y_372_){
_start:
{
lean_object* v_res_373_; 
v_res_373_ = l_Std_Async_ContextAsync_concurrently___redArg___lam__3(v_a_369_, v___x_370_, v_x_371_);
lean_dec(v_x_371_);
return v_res_373_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_concurrently___redArg___lam__5(lean_object* v___f_374_, lean_object* v___f_375_, lean_object* v___f_376_){
_start:
{
lean_object* v___x_378_; lean_object* v___x_379_; uint8_t v___x_380_; lean_object* v___x_381_; lean_object* v___y_383_; 
v___x_378_ = lean_alloc_closure((void*)(l_Except_map), 5, 4);
lean_closure_set(v___x_378_, 0, lean_box(0));
lean_closure_set(v___x_378_, 1, lean_box(0));
lean_closure_set(v___x_378_, 2, lean_box(0));
lean_closure_set(v___x_378_, 3, v___f_374_);
v___x_379_ = lean_unsigned_to_nat(0u);
v___x_380_ = 0;
v___x_381_ = l_Std_Async_EAsync_tryFinally_x27___redArg(v___f_375_, v___f_376_, v___x_379_, v___x_380_);
if (lean_obj_tag(v___x_381_) == 0)
{
lean_object* v_a_385_; 
lean_dec_ref(v___x_378_);
v_a_385_ = lean_ctor_get(v___x_381_, 0);
lean_inc(v_a_385_);
lean_dec_ref_known(v___x_381_, 1);
if (lean_obj_tag(v_a_385_) == 0)
{
lean_object* v_a_386_; lean_object* v___x_388_; uint8_t v_isShared_389_; uint8_t v_isSharedCheck_393_; 
v_a_386_ = lean_ctor_get(v_a_385_, 0);
v_isSharedCheck_393_ = !lean_is_exclusive(v_a_385_);
if (v_isSharedCheck_393_ == 0)
{
v___x_388_ = v_a_385_;
v_isShared_389_ = v_isSharedCheck_393_;
goto v_resetjp_387_;
}
else
{
lean_inc(v_a_386_);
lean_dec(v_a_385_);
v___x_388_ = lean_box(0);
v_isShared_389_ = v_isSharedCheck_393_;
goto v_resetjp_387_;
}
v_resetjp_387_:
{
lean_object* v___x_391_; 
if (v_isShared_389_ == 0)
{
v___x_391_ = v___x_388_;
goto v_reusejp_390_;
}
else
{
lean_object* v_reuseFailAlloc_392_; 
v_reuseFailAlloc_392_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_392_, 0, v_a_386_);
v___x_391_ = v_reuseFailAlloc_392_;
goto v_reusejp_390_;
}
v_reusejp_390_:
{
v___y_383_ = v___x_391_;
goto v___jp_382_;
}
}
}
else
{
lean_object* v_a_394_; lean_object* v___x_396_; uint8_t v_isShared_397_; uint8_t v_isSharedCheck_402_; 
v_a_394_ = lean_ctor_get(v_a_385_, 0);
v_isSharedCheck_402_ = !lean_is_exclusive(v_a_385_);
if (v_isSharedCheck_402_ == 0)
{
v___x_396_ = v_a_385_;
v_isShared_397_ = v_isSharedCheck_402_;
goto v_resetjp_395_;
}
else
{
lean_inc(v_a_394_);
lean_dec(v_a_385_);
v___x_396_ = lean_box(0);
v_isShared_397_ = v_isSharedCheck_402_;
goto v_resetjp_395_;
}
v_resetjp_395_:
{
lean_object* v_fst_398_; lean_object* v___x_400_; 
v_fst_398_ = lean_ctor_get(v_a_394_, 0);
lean_inc(v_fst_398_);
lean_dec(v_a_394_);
if (v_isShared_397_ == 0)
{
lean_ctor_set(v___x_396_, 0, v_fst_398_);
v___x_400_ = v___x_396_;
goto v_reusejp_399_;
}
else
{
lean_object* v_reuseFailAlloc_401_; 
v_reuseFailAlloc_401_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_401_, 0, v_fst_398_);
v___x_400_ = v_reuseFailAlloc_401_;
goto v_reusejp_399_;
}
v_reusejp_399_:
{
v___y_383_ = v___x_400_;
goto v___jp_382_;
}
}
}
}
else
{
lean_object* v_a_403_; lean_object* v___x_405_; uint8_t v_isShared_406_; uint8_t v_isSharedCheck_411_; 
v_a_403_ = lean_ctor_get(v___x_381_, 0);
v_isSharedCheck_411_ = !lean_is_exclusive(v___x_381_);
if (v_isSharedCheck_411_ == 0)
{
v___x_405_ = v___x_381_;
v_isShared_406_ = v_isSharedCheck_411_;
goto v_resetjp_404_;
}
else
{
lean_inc(v_a_403_);
lean_dec(v___x_381_);
v___x_405_ = lean_box(0);
v_isShared_406_ = v_isSharedCheck_411_;
goto v_resetjp_404_;
}
v_resetjp_404_:
{
lean_object* v___x_407_; lean_object* v___x_409_; 
v___x_407_ = lean_task_map(v___x_378_, v_a_403_, v___x_379_, v___x_380_);
if (v_isShared_406_ == 0)
{
lean_ctor_set(v___x_405_, 0, v___x_407_);
v___x_409_ = v___x_405_;
goto v_reusejp_408_;
}
else
{
lean_object* v_reuseFailAlloc_410_; 
v_reuseFailAlloc_410_ = lean_alloc_ctor(1, 1, 0);
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
v___jp_382_:
{
lean_object* v___x_384_; 
v___x_384_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_384_, 0, v___y_383_);
return v___x_384_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_concurrently___redArg___lam__5___boxed(lean_object* v___f_412_, lean_object* v___f_413_, lean_object* v___f_414_, lean_object* v___y_415_){
_start:
{
lean_object* v_res_416_; 
v_res_416_ = l_Std_Async_ContextAsync_concurrently___redArg___lam__5(v___f_412_, v___f_413_, v___f_414_);
return v_res_416_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_concurrently___redArg___lam__7(lean_object* v_a_417_, lean_object* v___x_418_, lean_object* v_x_419_){
_start:
{
if (lean_obj_tag(v_x_419_) == 0)
{
lean_object* v___f_421_; lean_object* v___x_422_; uint8_t v___x_423_; lean_object* v___x_424_; lean_object* v___x_425_; lean_object* v___x_426_; lean_object* v___x_427_; 
v___f_421_ = lean_alloc_closure((void*)(l_Std_Async_ContextAsync_run___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_421_, 0, v_x_419_);
v___x_422_ = lean_unsigned_to_nat(0u);
v___x_423_ = 0;
v___x_424_ = l_Std_CancellationContext_cancel(v_a_417_, v___x_418_);
v___x_425_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_425_, 0, v___x_424_);
v___x_426_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_426_, 0, v___x_425_);
v___x_427_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_422_, v___x_423_, v___x_426_, v___f_421_);
return v___x_427_;
}
else
{
lean_object* v___x_428_; 
lean_dec(v___x_418_);
lean_dec_ref(v_a_417_);
v___x_428_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_428_, 0, v_x_419_);
return v___x_428_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_concurrently___redArg___lam__7___boxed(lean_object* v_a_429_, lean_object* v___x_430_, lean_object* v_x_431_, lean_object* v___y_432_){
_start:
{
lean_object* v_res_433_; 
v_res_433_ = l_Std_Async_ContextAsync_concurrently___redArg___lam__7(v_a_429_, v___x_430_, v_x_431_);
return v_res_433_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_concurrently___redArg___lam__6(lean_object* v_y_434_, lean_object* v_a_435_, lean_object* v___f_436_){
_start:
{
lean_object* v___x_438_; uint8_t v___x_439_; lean_object* v___x_440_; lean_object* v___x_441_; 
v___x_438_ = lean_unsigned_to_nat(0u);
v___x_439_ = 0;
v___x_440_ = lean_apply_2(v_y_434_, v_a_435_, lean_box(0));
v___x_441_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_438_, v___x_439_, v___x_440_, v___f_436_);
return v___x_441_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_concurrently___redArg___lam__6___boxed(lean_object* v_y_442_, lean_object* v_a_443_, lean_object* v___f_444_, lean_object* v___y_445_){
_start:
{
lean_object* v_res_446_; 
v_res_446_ = l_Std_Async_ContextAsync_concurrently___redArg___lam__6(v_y_442_, v_a_443_, v___f_444_);
return v_res_446_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_concurrently___redArg___lam__10(lean_object* v_a_447_, lean_object* v_x_448_){
_start:
{
if (lean_obj_tag(v_x_448_) == 0)
{
lean_object* v_a_450_; lean_object* v___x_452_; uint8_t v_isShared_453_; uint8_t v_isSharedCheck_458_; 
lean_dec(v_a_447_);
v_a_450_ = lean_ctor_get(v_x_448_, 0);
v_isSharedCheck_458_ = !lean_is_exclusive(v_x_448_);
if (v_isSharedCheck_458_ == 0)
{
v___x_452_ = v_x_448_;
v_isShared_453_ = v_isSharedCheck_458_;
goto v_resetjp_451_;
}
else
{
lean_inc(v_a_450_);
lean_dec(v_x_448_);
v___x_452_ = lean_box(0);
v_isShared_453_ = v_isSharedCheck_458_;
goto v_resetjp_451_;
}
v_resetjp_451_:
{
lean_object* v___x_455_; 
if (v_isShared_453_ == 0)
{
v___x_455_ = v___x_452_;
goto v_reusejp_454_;
}
else
{
lean_object* v_reuseFailAlloc_457_; 
v_reuseFailAlloc_457_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_457_, 0, v_a_450_);
v___x_455_ = v_reuseFailAlloc_457_;
goto v_reusejp_454_;
}
v_reusejp_454_:
{
lean_object* v___x_456_; 
v___x_456_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_456_, 0, v___x_455_);
return v___x_456_;
}
}
}
else
{
lean_object* v_a_459_; lean_object* v___x_461_; uint8_t v_isShared_462_; uint8_t v_isSharedCheck_468_; 
v_a_459_ = lean_ctor_get(v_x_448_, 0);
v_isSharedCheck_468_ = !lean_is_exclusive(v_x_448_);
if (v_isSharedCheck_468_ == 0)
{
v___x_461_ = v_x_448_;
v_isShared_462_ = v_isSharedCheck_468_;
goto v_resetjp_460_;
}
else
{
lean_inc(v_a_459_);
lean_dec(v_x_448_);
v___x_461_ = lean_box(0);
v_isShared_462_ = v_isSharedCheck_468_;
goto v_resetjp_460_;
}
v_resetjp_460_:
{
lean_object* v___x_463_; lean_object* v___x_465_; 
v___x_463_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_463_, 0, v_a_447_);
lean_ctor_set(v___x_463_, 1, v_a_459_);
if (v_isShared_462_ == 0)
{
lean_ctor_set(v___x_461_, 0, v___x_463_);
v___x_465_ = v___x_461_;
goto v_reusejp_464_;
}
else
{
lean_object* v_reuseFailAlloc_467_; 
v_reuseFailAlloc_467_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_467_, 0, v___x_463_);
v___x_465_ = v_reuseFailAlloc_467_;
goto v_reusejp_464_;
}
v_reusejp_464_:
{
lean_object* v___x_466_; 
v___x_466_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_466_, 0, v___x_465_);
return v___x_466_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_concurrently___redArg___lam__10___boxed(lean_object* v_a_469_, lean_object* v_x_470_, lean_object* v___y_471_){
_start:
{
lean_object* v_res_472_; 
v_res_472_ = l_Std_Async_ContextAsync_concurrently___redArg___lam__10(v_a_469_, v_x_470_);
return v_res_472_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_concurrently___redArg___lam__8(lean_object* v_a_473_, lean_object* v_x_474_){
_start:
{
if (lean_obj_tag(v_x_474_) == 0)
{
lean_object* v_a_476_; lean_object* v___x_478_; uint8_t v_isShared_479_; uint8_t v_isSharedCheck_484_; 
lean_dec_ref(v_a_473_);
v_a_476_ = lean_ctor_get(v_x_474_, 0);
v_isSharedCheck_484_ = !lean_is_exclusive(v_x_474_);
if (v_isSharedCheck_484_ == 0)
{
v___x_478_ = v_x_474_;
v_isShared_479_ = v_isSharedCheck_484_;
goto v_resetjp_477_;
}
else
{
lean_inc(v_a_476_);
lean_dec(v_x_474_);
v___x_478_ = lean_box(0);
v_isShared_479_ = v_isSharedCheck_484_;
goto v_resetjp_477_;
}
v_resetjp_477_:
{
lean_object* v___x_481_; 
if (v_isShared_479_ == 0)
{
v___x_481_ = v___x_478_;
goto v_reusejp_480_;
}
else
{
lean_object* v_reuseFailAlloc_483_; 
v_reuseFailAlloc_483_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_483_, 0, v_a_476_);
v___x_481_ = v_reuseFailAlloc_483_;
goto v_reusejp_480_;
}
v_reusejp_480_:
{
lean_object* v___x_482_; 
v___x_482_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_482_, 0, v___x_481_);
return v___x_482_;
}
}
}
else
{
lean_object* v_a_485_; lean_object* v___f_486_; lean_object* v___x_487_; uint8_t v___x_488_; lean_object* v___x_489_; lean_object* v___x_490_; 
v_a_485_ = lean_ctor_get(v_x_474_, 0);
lean_inc(v_a_485_);
lean_dec_ref_known(v_x_474_, 1);
v___f_486_ = lean_alloc_closure((void*)(l_Std_Async_ContextAsync_concurrently___redArg___lam__10___boxed), 3, 1);
lean_closure_set(v___f_486_, 0, v_a_485_);
v___x_487_ = lean_unsigned_to_nat(0u);
v___x_488_ = 0;
v___x_489_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_489_, 0, v_a_473_);
v___x_490_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_487_, v___x_488_, v___x_489_, v___f_486_);
return v___x_490_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_concurrently___redArg___lam__8___boxed(lean_object* v_a_491_, lean_object* v_x_492_, lean_object* v___y_493_){
_start:
{
lean_object* v_res_494_; 
v_res_494_ = l_Std_Async_ContextAsync_concurrently___redArg___lam__8(v_a_491_, v_x_492_);
return v_res_494_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_concurrently___redArg___lam__9(lean_object* v_a_495_, lean_object* v_x_496_){
_start:
{
if (lean_obj_tag(v_x_496_) == 0)
{
lean_object* v_a_498_; lean_object* v___x_500_; uint8_t v_isShared_501_; uint8_t v_isSharedCheck_506_; 
lean_dec_ref(v_a_495_);
v_a_498_ = lean_ctor_get(v_x_496_, 0);
v_isSharedCheck_506_ = !lean_is_exclusive(v_x_496_);
if (v_isSharedCheck_506_ == 0)
{
v___x_500_ = v_x_496_;
v_isShared_501_ = v_isSharedCheck_506_;
goto v_resetjp_499_;
}
else
{
lean_inc(v_a_498_);
lean_dec(v_x_496_);
v___x_500_ = lean_box(0);
v_isShared_501_ = v_isSharedCheck_506_;
goto v_resetjp_499_;
}
v_resetjp_499_:
{
lean_object* v___x_503_; 
if (v_isShared_501_ == 0)
{
v___x_503_ = v___x_500_;
goto v_reusejp_502_;
}
else
{
lean_object* v_reuseFailAlloc_505_; 
v_reuseFailAlloc_505_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_505_, 0, v_a_498_);
v___x_503_ = v_reuseFailAlloc_505_;
goto v_reusejp_502_;
}
v_reusejp_502_:
{
lean_object* v___x_504_; 
v___x_504_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_504_, 0, v___x_503_);
return v___x_504_;
}
}
}
else
{
lean_object* v_a_507_; lean_object* v___f_508_; lean_object* v___x_509_; uint8_t v___x_510_; lean_object* v___x_511_; lean_object* v___x_512_; 
v_a_507_ = lean_ctor_get(v_x_496_, 0);
lean_inc(v_a_507_);
lean_dec_ref_known(v_x_496_, 1);
v___f_508_ = lean_alloc_closure((void*)(l_Std_Async_ContextAsync_concurrently___redArg___lam__8___boxed), 3, 1);
lean_closure_set(v___f_508_, 0, v_a_507_);
v___x_509_ = lean_unsigned_to_nat(0u);
v___x_510_ = 0;
v___x_511_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_511_, 0, v_a_495_);
v___x_512_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_509_, v___x_510_, v___x_511_, v___f_508_);
return v___x_512_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_concurrently___redArg___lam__9___boxed(lean_object* v_a_513_, lean_object* v_x_514_, lean_object* v___y_515_){
_start:
{
lean_object* v_res_516_; 
v_res_516_ = l_Std_Async_ContextAsync_concurrently___redArg___lam__9(v_a_513_, v_x_514_);
return v_res_516_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_concurrently___redArg___lam__11(lean_object* v___f_517_, lean_object* v_prio_518_, lean_object* v___f_519_, lean_object* v_x_520_){
_start:
{
if (lean_obj_tag(v_x_520_) == 0)
{
lean_object* v_a_522_; lean_object* v___x_524_; uint8_t v_isShared_525_; uint8_t v_isSharedCheck_530_; 
lean_dec_ref(v___f_519_);
lean_dec(v_prio_518_);
lean_dec_ref(v___f_517_);
v_a_522_ = lean_ctor_get(v_x_520_, 0);
v_isSharedCheck_530_ = !lean_is_exclusive(v_x_520_);
if (v_isSharedCheck_530_ == 0)
{
v___x_524_ = v_x_520_;
v_isShared_525_ = v_isSharedCheck_530_;
goto v_resetjp_523_;
}
else
{
lean_inc(v_a_522_);
lean_dec(v_x_520_);
v___x_524_ = lean_box(0);
v_isShared_525_ = v_isSharedCheck_530_;
goto v_resetjp_523_;
}
v_resetjp_523_:
{
lean_object* v___x_527_; 
if (v_isShared_525_ == 0)
{
v___x_527_ = v___x_524_;
goto v_reusejp_526_;
}
else
{
lean_object* v_reuseFailAlloc_529_; 
v_reuseFailAlloc_529_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_529_, 0, v_a_522_);
v___x_527_ = v_reuseFailAlloc_529_;
goto v_reusejp_526_;
}
v_reusejp_526_:
{
lean_object* v___x_528_; 
v___x_528_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_528_, 0, v___x_527_);
return v___x_528_;
}
}
}
else
{
lean_object* v_a_531_; lean_object* v___x_533_; uint8_t v_isShared_534_; uint8_t v_isSharedCheck_548_; 
v_a_531_ = lean_ctor_get(v_x_520_, 0);
v_isSharedCheck_548_ = !lean_is_exclusive(v_x_520_);
if (v_isSharedCheck_548_ == 0)
{
v___x_533_ = v_x_520_;
v_isShared_534_ = v_isSharedCheck_548_;
goto v_resetjp_532_;
}
else
{
lean_inc(v_a_531_);
lean_dec(v_x_520_);
v___x_533_ = lean_box(0);
v_isShared_534_ = v_isSharedCheck_548_;
goto v_resetjp_532_;
}
v_resetjp_532_:
{
lean_object* v___f_535_; lean_object* v___x_536_; uint8_t v___x_537_; lean_object* v___x_538_; lean_object* v___x_539_; lean_object* v___x_540_; uint8_t v___x_541_; lean_object* v___x_542_; lean_object* v___x_544_; 
v___f_535_ = lean_alloc_closure((void*)(l_Std_Async_ContextAsync_concurrently___redArg___lam__9___boxed), 3, 1);
lean_closure_set(v___f_535_, 0, v_a_531_);
v___x_536_ = lean_unsigned_to_nat(0u);
v___x_537_ = 0;
v___x_538_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_toBaseAsync___boxed), 4, 3);
lean_closure_set(v___x_538_, 0, lean_box(0));
lean_closure_set(v___x_538_, 1, lean_box(0));
lean_closure_set(v___x_538_, 2, v___f_517_);
v___x_539_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_toRawBaseIO___boxed), 3, 2);
lean_closure_set(v___x_539_, 0, lean_box(0));
lean_closure_set(v___x_539_, 1, v___x_538_);
v___x_540_ = lean_io_as_task(v___x_539_, v_prio_518_);
v___x_541_ = 1;
v___x_542_ = lean_task_bind(v___x_540_, v___f_519_, v___x_536_, v___x_541_);
if (v_isShared_534_ == 0)
{
lean_ctor_set(v___x_533_, 0, v___x_542_);
v___x_544_ = v___x_533_;
goto v_reusejp_543_;
}
else
{
lean_object* v_reuseFailAlloc_547_; 
v_reuseFailAlloc_547_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_547_, 0, v___x_542_);
v___x_544_ = v_reuseFailAlloc_547_;
goto v_reusejp_543_;
}
v_reusejp_543_:
{
lean_object* v___x_545_; lean_object* v___x_546_; 
v___x_545_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_545_, 0, v___x_544_);
v___x_546_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_536_, v___x_537_, v___x_545_, v___f_535_);
return v___x_546_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_concurrently___redArg___lam__11___boxed(lean_object* v___f_549_, lean_object* v_prio_550_, lean_object* v___f_551_, lean_object* v_x_552_, lean_object* v___y_553_){
_start:
{
lean_object* v_res_554_; 
v_res_554_ = l_Std_Async_ContextAsync_concurrently___redArg___lam__11(v___f_549_, v_prio_550_, v___f_551_, v_x_552_);
return v_res_554_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_concurrently___redArg___lam__12(lean_object* v_x_555_, lean_object* v_x_556_){
_start:
{
if (lean_obj_tag(v_x_556_) == 0)
{
lean_object* v_a_558_; lean_object* v___x_560_; uint8_t v_isShared_561_; uint8_t v_isSharedCheck_566_; 
lean_dec_ref(v_x_555_);
v_a_558_ = lean_ctor_get(v_x_556_, 0);
v_isSharedCheck_566_ = !lean_is_exclusive(v_x_556_);
if (v_isSharedCheck_566_ == 0)
{
v___x_560_ = v_x_556_;
v_isShared_561_ = v_isSharedCheck_566_;
goto v_resetjp_559_;
}
else
{
lean_inc(v_a_558_);
lean_dec(v_x_556_);
v___x_560_ = lean_box(0);
v_isShared_561_ = v_isSharedCheck_566_;
goto v_resetjp_559_;
}
v_resetjp_559_:
{
lean_object* v___x_563_; 
if (v_isShared_561_ == 0)
{
v___x_563_ = v___x_560_;
goto v_reusejp_562_;
}
else
{
lean_object* v_reuseFailAlloc_565_; 
v_reuseFailAlloc_565_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_565_, 0, v_a_558_);
v___x_563_ = v_reuseFailAlloc_565_;
goto v_reusejp_562_;
}
v_reusejp_562_:
{
lean_object* v___x_564_; 
v___x_564_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_564_, 0, v___x_563_);
return v___x_564_;
}
}
}
else
{
lean_object* v___x_567_; 
lean_dec_ref_known(v_x_556_, 1);
v___x_567_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_567_, 0, v_x_555_);
return v___x_567_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_concurrently___redArg___lam__12___boxed(lean_object* v_x_568_, lean_object* v_x_569_, lean_object* v___y_570_){
_start:
{
lean_object* v_res_571_; 
v_res_571_ = l_Std_Async_ContextAsync_concurrently___redArg___lam__12(v_x_568_, v_x_569_);
return v_res_571_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_concurrently___redArg___lam__13(lean_object* v_a_572_, lean_object* v___x_573_, lean_object* v_x_574_){
_start:
{
if (lean_obj_tag(v_x_574_) == 0)
{
lean_object* v___x_576_; 
lean_dec(v___x_573_);
lean_dec_ref(v_a_572_);
v___x_576_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_576_, 0, v_x_574_);
return v___x_576_;
}
else
{
lean_object* v___f_577_; lean_object* v___x_578_; uint8_t v___x_579_; lean_object* v___x_580_; lean_object* v___x_581_; lean_object* v___x_582_; lean_object* v___x_583_; 
v___f_577_ = lean_alloc_closure((void*)(l_Std_Async_ContextAsync_concurrently___redArg___lam__12___boxed), 3, 1);
lean_closure_set(v___f_577_, 0, v_x_574_);
v___x_578_ = lean_unsigned_to_nat(0u);
v___x_579_ = 0;
v___x_580_ = l_Std_CancellationContext_cancel(v_a_572_, v___x_573_);
v___x_581_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_581_, 0, v___x_580_);
v___x_582_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_582_, 0, v___x_581_);
v___x_583_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_578_, v___x_579_, v___x_582_, v___f_577_);
return v___x_583_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_concurrently___redArg___lam__13___boxed(lean_object* v_a_584_, lean_object* v___x_585_, lean_object* v_x_586_, lean_object* v___y_587_){
_start:
{
lean_object* v_res_588_; 
v_res_588_ = l_Std_Async_ContextAsync_concurrently___redArg___lam__13(v_a_584_, v___x_585_, v_x_586_);
return v_res_588_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_concurrently___redArg___lam__14(lean_object* v_a_589_, lean_object* v___f_590_, lean_object* v___f_591_, lean_object* v_a_592_, lean_object* v_y_593_, lean_object* v___f_594_, lean_object* v_prio_595_, lean_object* v___f_596_, lean_object* v___f_597_, lean_object* v_x_598_){
_start:
{
if (lean_obj_tag(v_x_598_) == 0)
{
lean_object* v_a_600_; lean_object* v___x_602_; uint8_t v_isShared_603_; uint8_t v_isSharedCheck_608_; 
lean_dec_ref(v___f_597_);
lean_dec_ref(v___f_596_);
lean_dec(v_prio_595_);
lean_dec(v___f_594_);
lean_dec_ref(v_y_593_);
lean_dec_ref(v_a_592_);
lean_dec_ref(v___f_591_);
lean_dec(v___f_590_);
lean_dec_ref(v_a_589_);
v_a_600_ = lean_ctor_get(v_x_598_, 0);
v_isSharedCheck_608_ = !lean_is_exclusive(v_x_598_);
if (v_isSharedCheck_608_ == 0)
{
v___x_602_ = v_x_598_;
v_isShared_603_ = v_isSharedCheck_608_;
goto v_resetjp_601_;
}
else
{
lean_inc(v_a_600_);
lean_dec(v_x_598_);
v___x_602_ = lean_box(0);
v_isShared_603_ = v_isSharedCheck_608_;
goto v_resetjp_601_;
}
v_resetjp_601_:
{
lean_object* v___x_605_; 
if (v_isShared_603_ == 0)
{
v___x_605_ = v___x_602_;
goto v_reusejp_604_;
}
else
{
lean_object* v_reuseFailAlloc_607_; 
v_reuseFailAlloc_607_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_607_, 0, v_a_600_);
v___x_605_ = v_reuseFailAlloc_607_;
goto v_reusejp_604_;
}
v_reusejp_604_:
{
lean_object* v___x_606_; 
v___x_606_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_606_, 0, v___x_605_);
return v___x_606_;
}
}
}
else
{
lean_object* v_a_609_; lean_object* v___x_611_; uint8_t v_isShared_612_; uint8_t v_isSharedCheck_635_; 
v_a_609_ = lean_ctor_get(v_x_598_, 0);
v_isSharedCheck_635_ = !lean_is_exclusive(v_x_598_);
if (v_isSharedCheck_635_ == 0)
{
v___x_611_ = v_x_598_;
v_isShared_612_ = v_isSharedCheck_635_;
goto v_resetjp_610_;
}
else
{
lean_inc(v_a_609_);
lean_dec(v_x_598_);
v___x_611_ = lean_box(0);
v_isShared_612_ = v_isSharedCheck_635_;
goto v_resetjp_610_;
}
v_resetjp_610_:
{
lean_object* v___x_613_; lean_object* v___f_614_; lean_object* v___f_615_; lean_object* v___f_616_; lean_object* v___f_617_; lean_object* v___f_618_; lean_object* v___f_619_; lean_object* v___f_620_; lean_object* v___f_621_; lean_object* v___x_622_; uint8_t v___x_623_; lean_object* v___x_624_; lean_object* v___x_625_; lean_object* v___x_626_; uint8_t v___x_627_; lean_object* v___x_628_; lean_object* v___x_630_; 
v___x_613_ = lean_box(2);
v___f_614_ = lean_alloc_closure((void*)(l_Std_Async_ContextAsync_concurrently___redArg___lam__3___boxed), 4, 2);
lean_closure_set(v___f_614_, 0, v_a_589_);
lean_closure_set(v___f_614_, 1, v___x_613_);
v___f_615_ = lean_alloc_closure((void*)(l_Std_Async_ContextAsync_concurrently___redArg___lam__5___boxed), 4, 3);
lean_closure_set(v___f_615_, 0, v___f_590_);
lean_closure_set(v___f_615_, 1, v___f_591_);
lean_closure_set(v___f_615_, 2, v___f_614_);
lean_inc_ref(v_a_592_);
v___f_616_ = lean_alloc_closure((void*)(l_Std_Async_ContextAsync_concurrently___redArg___lam__7___boxed), 4, 2);
lean_closure_set(v___f_616_, 0, v_a_592_);
lean_closure_set(v___f_616_, 1, v___x_613_);
lean_inc(v_a_609_);
v___f_617_ = lean_alloc_closure((void*)(l_Std_Async_ContextAsync_concurrently___redArg___lam__6___boxed), 4, 3);
lean_closure_set(v___f_617_, 0, v_y_593_);
lean_closure_set(v___f_617_, 1, v_a_609_);
lean_closure_set(v___f_617_, 2, v___f_616_);
v___f_618_ = lean_alloc_closure((void*)(l_Std_Async_ContextAsync_concurrently___redArg___lam__3___boxed), 4, 2);
lean_closure_set(v___f_618_, 0, v_a_609_);
lean_closure_set(v___f_618_, 1, v___x_613_);
v___f_619_ = lean_alloc_closure((void*)(l_Std_Async_ContextAsync_concurrently___redArg___lam__5___boxed), 4, 3);
lean_closure_set(v___f_619_, 0, v___f_594_);
lean_closure_set(v___f_619_, 1, v___f_617_);
lean_closure_set(v___f_619_, 2, v___f_618_);
lean_inc(v_prio_595_);
v___f_620_ = lean_alloc_closure((void*)(l_Std_Async_ContextAsync_concurrently___redArg___lam__11___boxed), 5, 3);
lean_closure_set(v___f_620_, 0, v___f_619_);
lean_closure_set(v___f_620_, 1, v_prio_595_);
lean_closure_set(v___f_620_, 2, v___f_596_);
v___f_621_ = lean_alloc_closure((void*)(l_Std_Async_ContextAsync_concurrently___redArg___lam__13___boxed), 4, 2);
lean_closure_set(v___f_621_, 0, v_a_592_);
lean_closure_set(v___f_621_, 1, v___x_613_);
v___x_622_ = lean_unsigned_to_nat(0u);
v___x_623_ = 0;
v___x_624_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_toBaseAsync___boxed), 4, 3);
lean_closure_set(v___x_624_, 0, lean_box(0));
lean_closure_set(v___x_624_, 1, lean_box(0));
lean_closure_set(v___x_624_, 2, v___f_615_);
v___x_625_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_toRawBaseIO___boxed), 3, 2);
lean_closure_set(v___x_625_, 0, lean_box(0));
lean_closure_set(v___x_625_, 1, v___x_624_);
v___x_626_ = lean_io_as_task(v___x_625_, v_prio_595_);
v___x_627_ = 1;
v___x_628_ = lean_task_bind(v___x_626_, v___f_597_, v___x_622_, v___x_627_);
if (v_isShared_612_ == 0)
{
lean_ctor_set(v___x_611_, 0, v___x_628_);
v___x_630_ = v___x_611_;
goto v_reusejp_629_;
}
else
{
lean_object* v_reuseFailAlloc_634_; 
v_reuseFailAlloc_634_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_634_, 0, v___x_628_);
v___x_630_ = v_reuseFailAlloc_634_;
goto v_reusejp_629_;
}
v_reusejp_629_:
{
lean_object* v___x_631_; lean_object* v___x_632_; lean_object* v___x_633_; 
v___x_631_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_631_, 0, v___x_630_);
v___x_632_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_622_, v___x_623_, v___x_631_, v___f_620_);
v___x_633_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_622_, v___x_623_, v___x_632_, v___f_621_);
return v___x_633_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_concurrently___redArg___lam__14___boxed(lean_object* v_a_636_, lean_object* v___f_637_, lean_object* v___f_638_, lean_object* v_a_639_, lean_object* v_y_640_, lean_object* v___f_641_, lean_object* v_prio_642_, lean_object* v___f_643_, lean_object* v___f_644_, lean_object* v_x_645_, lean_object* v___y_646_){
_start:
{
lean_object* v_res_647_; 
v_res_647_ = l_Std_Async_ContextAsync_concurrently___redArg___lam__14(v_a_636_, v___f_637_, v___f_638_, v_a_639_, v_y_640_, v___f_641_, v_prio_642_, v___f_643_, v___f_644_, v_x_645_);
return v_res_647_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_concurrently___redArg___lam__15(lean_object* v_x_648_, lean_object* v___f_649_, lean_object* v___f_650_, lean_object* v_a_651_, lean_object* v_y_652_, lean_object* v___f_653_, lean_object* v_prio_654_, lean_object* v___f_655_, lean_object* v___f_656_, lean_object* v_x_657_){
_start:
{
if (lean_obj_tag(v_x_657_) == 0)
{
lean_object* v_a_659_; lean_object* v___x_661_; uint8_t v_isShared_662_; uint8_t v_isSharedCheck_667_; 
lean_dec_ref(v___f_656_);
lean_dec_ref(v___f_655_);
lean_dec(v_prio_654_);
lean_dec(v___f_653_);
lean_dec_ref(v_y_652_);
lean_dec_ref(v_a_651_);
lean_dec(v___f_650_);
lean_dec_ref(v___f_649_);
lean_dec_ref(v_x_648_);
v_a_659_ = lean_ctor_get(v_x_657_, 0);
v_isSharedCheck_667_ = !lean_is_exclusive(v_x_657_);
if (v_isSharedCheck_667_ == 0)
{
v___x_661_ = v_x_657_;
v_isShared_662_ = v_isSharedCheck_667_;
goto v_resetjp_660_;
}
else
{
lean_inc(v_a_659_);
lean_dec(v_x_657_);
v___x_661_ = lean_box(0);
v_isShared_662_ = v_isSharedCheck_667_;
goto v_resetjp_660_;
}
v_resetjp_660_:
{
lean_object* v___x_664_; 
if (v_isShared_662_ == 0)
{
v___x_664_ = v___x_661_;
goto v_reusejp_663_;
}
else
{
lean_object* v_reuseFailAlloc_666_; 
v_reuseFailAlloc_666_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_666_, 0, v_a_659_);
v___x_664_ = v_reuseFailAlloc_666_;
goto v_reusejp_663_;
}
v_reusejp_663_:
{
lean_object* v___x_665_; 
v___x_665_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_665_, 0, v___x_664_);
return v___x_665_;
}
}
}
else
{
lean_object* v_a_668_; lean_object* v___x_670_; uint8_t v_isShared_671_; uint8_t v_isSharedCheck_682_; 
v_a_668_ = lean_ctor_get(v_x_657_, 0);
v_isSharedCheck_682_ = !lean_is_exclusive(v_x_657_);
if (v_isSharedCheck_682_ == 0)
{
v___x_670_ = v_x_657_;
v_isShared_671_ = v_isSharedCheck_682_;
goto v_resetjp_669_;
}
else
{
lean_inc(v_a_668_);
lean_dec(v_x_657_);
v___x_670_ = lean_box(0);
v_isShared_671_ = v_isSharedCheck_682_;
goto v_resetjp_669_;
}
v_resetjp_669_:
{
lean_object* v___f_672_; lean_object* v___f_673_; lean_object* v___x_674_; uint8_t v___x_675_; lean_object* v___x_676_; lean_object* v___x_678_; 
lean_inc(v_a_668_);
v___f_672_ = lean_alloc_closure((void*)(l_Std_Async_ContextAsync_concurrently___redArg___lam__1___boxed), 4, 3);
lean_closure_set(v___f_672_, 0, v_x_648_);
lean_closure_set(v___f_672_, 1, v_a_668_);
lean_closure_set(v___f_672_, 2, v___f_649_);
lean_inc_ref(v_a_651_);
v___f_673_ = lean_alloc_closure((void*)(l_Std_Async_ContextAsync_concurrently___redArg___lam__14___boxed), 11, 9);
lean_closure_set(v___f_673_, 0, v_a_668_);
lean_closure_set(v___f_673_, 1, v___f_650_);
lean_closure_set(v___f_673_, 2, v___f_672_);
lean_closure_set(v___f_673_, 3, v_a_651_);
lean_closure_set(v___f_673_, 4, v_y_652_);
lean_closure_set(v___f_673_, 5, v___f_653_);
lean_closure_set(v___f_673_, 6, v_prio_654_);
lean_closure_set(v___f_673_, 7, v___f_655_);
lean_closure_set(v___f_673_, 8, v___f_656_);
v___x_674_ = lean_unsigned_to_nat(0u);
v___x_675_ = 0;
v___x_676_ = l_Std_CancellationContext_fork(v_a_651_);
if (v_isShared_671_ == 0)
{
lean_ctor_set(v___x_670_, 0, v___x_676_);
v___x_678_ = v___x_670_;
goto v_reusejp_677_;
}
else
{
lean_object* v_reuseFailAlloc_681_; 
v_reuseFailAlloc_681_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_681_, 0, v___x_676_);
v___x_678_ = v_reuseFailAlloc_681_;
goto v_reusejp_677_;
}
v_reusejp_677_:
{
lean_object* v___x_679_; lean_object* v___x_680_; 
v___x_679_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_679_, 0, v___x_678_);
v___x_680_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_674_, v___x_675_, v___x_679_, v___f_673_);
return v___x_680_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_concurrently___redArg___lam__15___boxed(lean_object* v_x_683_, lean_object* v___f_684_, lean_object* v___f_685_, lean_object* v_a_686_, lean_object* v_y_687_, lean_object* v___f_688_, lean_object* v_prio_689_, lean_object* v___f_690_, lean_object* v___f_691_, lean_object* v_x_692_, lean_object* v___y_693_){
_start:
{
lean_object* v_res_694_; 
v_res_694_ = l_Std_Async_ContextAsync_concurrently___redArg___lam__15(v_x_683_, v___f_684_, v___f_685_, v_a_686_, v_y_687_, v___f_688_, v_prio_689_, v___f_690_, v___f_691_, v_x_692_);
return v_res_694_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_concurrently___redArg___lam__16(lean_object* v_x_695_, lean_object* v___f_696_, lean_object* v_y_697_, lean_object* v___f_698_, lean_object* v_prio_699_, lean_object* v___f_700_, lean_object* v___f_701_, lean_object* v_x_702_){
_start:
{
if (lean_obj_tag(v_x_702_) == 0)
{
lean_object* v_a_704_; lean_object* v___x_706_; uint8_t v_isShared_707_; uint8_t v_isSharedCheck_712_; 
lean_dec_ref(v___f_701_);
lean_dec_ref(v___f_700_);
lean_dec(v_prio_699_);
lean_dec(v___f_698_);
lean_dec_ref(v_y_697_);
lean_dec(v___f_696_);
lean_dec_ref(v_x_695_);
v_a_704_ = lean_ctor_get(v_x_702_, 0);
v_isSharedCheck_712_ = !lean_is_exclusive(v_x_702_);
if (v_isSharedCheck_712_ == 0)
{
v___x_706_ = v_x_702_;
v_isShared_707_ = v_isSharedCheck_712_;
goto v_resetjp_705_;
}
else
{
lean_inc(v_a_704_);
lean_dec(v_x_702_);
v___x_706_ = lean_box(0);
v_isShared_707_ = v_isSharedCheck_712_;
goto v_resetjp_705_;
}
v_resetjp_705_:
{
lean_object* v___x_709_; 
if (v_isShared_707_ == 0)
{
v___x_709_ = v___x_706_;
goto v_reusejp_708_;
}
else
{
lean_object* v_reuseFailAlloc_711_; 
v_reuseFailAlloc_711_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_711_, 0, v_a_704_);
v___x_709_ = v_reuseFailAlloc_711_;
goto v_reusejp_708_;
}
v_reusejp_708_:
{
lean_object* v___x_710_; 
v___x_710_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_710_, 0, v___x_709_);
return v___x_710_;
}
}
}
else
{
lean_object* v_a_713_; lean_object* v___x_715_; uint8_t v_isShared_716_; uint8_t v_isSharedCheck_727_; 
v_a_713_ = lean_ctor_get(v_x_702_, 0);
v_isSharedCheck_727_ = !lean_is_exclusive(v_x_702_);
if (v_isSharedCheck_727_ == 0)
{
v___x_715_ = v_x_702_;
v_isShared_716_ = v_isSharedCheck_727_;
goto v_resetjp_714_;
}
else
{
lean_inc(v_a_713_);
lean_dec(v_x_702_);
v___x_715_ = lean_box(0);
v_isShared_716_ = v_isSharedCheck_727_;
goto v_resetjp_714_;
}
v_resetjp_714_:
{
lean_object* v___f_717_; lean_object* v___f_718_; lean_object* v___x_719_; uint8_t v___x_720_; lean_object* v___x_721_; lean_object* v___x_723_; 
lean_inc_n(v_a_713_, 2);
v___f_717_ = lean_alloc_closure((void*)(l_Std_Async_ContextAsync_concurrently___redArg___lam__4___boxed), 3, 1);
lean_closure_set(v___f_717_, 0, v_a_713_);
v___f_718_ = lean_alloc_closure((void*)(l_Std_Async_ContextAsync_concurrently___redArg___lam__15___boxed), 11, 9);
lean_closure_set(v___f_718_, 0, v_x_695_);
lean_closure_set(v___f_718_, 1, v___f_717_);
lean_closure_set(v___f_718_, 2, v___f_696_);
lean_closure_set(v___f_718_, 3, v_a_713_);
lean_closure_set(v___f_718_, 4, v_y_697_);
lean_closure_set(v___f_718_, 5, v___f_698_);
lean_closure_set(v___f_718_, 6, v_prio_699_);
lean_closure_set(v___f_718_, 7, v___f_700_);
lean_closure_set(v___f_718_, 8, v___f_701_);
v___x_719_ = lean_unsigned_to_nat(0u);
v___x_720_ = 0;
v___x_721_ = l_Std_CancellationContext_fork(v_a_713_);
if (v_isShared_716_ == 0)
{
lean_ctor_set(v___x_715_, 0, v___x_721_);
v___x_723_ = v___x_715_;
goto v_reusejp_722_;
}
else
{
lean_object* v_reuseFailAlloc_726_; 
v_reuseFailAlloc_726_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_726_, 0, v___x_721_);
v___x_723_ = v_reuseFailAlloc_726_;
goto v_reusejp_722_;
}
v_reusejp_722_:
{
lean_object* v___x_724_; lean_object* v___x_725_; 
v___x_724_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_724_, 0, v___x_723_);
v___x_725_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_719_, v___x_720_, v___x_724_, v___f_718_);
return v___x_725_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_concurrently___redArg___lam__16___boxed(lean_object* v_x_728_, lean_object* v___f_729_, lean_object* v_y_730_, lean_object* v___f_731_, lean_object* v_prio_732_, lean_object* v___f_733_, lean_object* v___f_734_, lean_object* v_x_735_, lean_object* v___y_736_){
_start:
{
lean_object* v_res_737_; 
v_res_737_ = l_Std_Async_ContextAsync_concurrently___redArg___lam__16(v_x_728_, v___f_729_, v_y_730_, v___f_731_, v_prio_732_, v___f_733_, v___f_734_, v_x_735_);
return v_res_737_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_concurrently___redArg___lam__17(lean_object* v___f_738_, lean_object* v_x_739_){
_start:
{
if (lean_obj_tag(v_x_739_) == 0)
{
lean_object* v_a_741_; lean_object* v___x_743_; uint8_t v_isShared_744_; uint8_t v_isSharedCheck_749_; 
lean_dec_ref(v___f_738_);
v_a_741_ = lean_ctor_get(v_x_739_, 0);
v_isSharedCheck_749_ = !lean_is_exclusive(v_x_739_);
if (v_isSharedCheck_749_ == 0)
{
v___x_743_ = v_x_739_;
v_isShared_744_ = v_isSharedCheck_749_;
goto v_resetjp_742_;
}
else
{
lean_inc(v_a_741_);
lean_dec(v_x_739_);
v___x_743_ = lean_box(0);
v_isShared_744_ = v_isSharedCheck_749_;
goto v_resetjp_742_;
}
v_resetjp_742_:
{
lean_object* v___x_746_; 
if (v_isShared_744_ == 0)
{
v___x_746_ = v___x_743_;
goto v_reusejp_745_;
}
else
{
lean_object* v_reuseFailAlloc_748_; 
v_reuseFailAlloc_748_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_748_, 0, v_a_741_);
v___x_746_ = v_reuseFailAlloc_748_;
goto v_reusejp_745_;
}
v_reusejp_745_:
{
lean_object* v___x_747_; 
v___x_747_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_747_, 0, v___x_746_);
return v___x_747_;
}
}
}
else
{
lean_object* v_a_750_; lean_object* v___x_752_; uint8_t v_isShared_753_; uint8_t v_isSharedCheck_762_; 
v_a_750_ = lean_ctor_get(v_x_739_, 0);
v_isSharedCheck_762_ = !lean_is_exclusive(v_x_739_);
if (v_isSharedCheck_762_ == 0)
{
v___x_752_ = v_x_739_;
v_isShared_753_ = v_isSharedCheck_762_;
goto v_resetjp_751_;
}
else
{
lean_inc(v_a_750_);
lean_dec(v_x_739_);
v___x_752_ = lean_box(0);
v_isShared_753_ = v_isSharedCheck_762_;
goto v_resetjp_751_;
}
v_resetjp_751_:
{
lean_object* v___x_754_; uint8_t v___x_755_; lean_object* v___x_756_; lean_object* v___x_758_; 
v___x_754_ = lean_unsigned_to_nat(0u);
v___x_755_ = 0;
v___x_756_ = l_Std_CancellationContext_fork(v_a_750_);
if (v_isShared_753_ == 0)
{
lean_ctor_set(v___x_752_, 0, v___x_756_);
v___x_758_ = v___x_752_;
goto v_reusejp_757_;
}
else
{
lean_object* v_reuseFailAlloc_761_; 
v_reuseFailAlloc_761_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_761_, 0, v___x_756_);
v___x_758_ = v_reuseFailAlloc_761_;
goto v_reusejp_757_;
}
v_reusejp_757_:
{
lean_object* v___x_759_; lean_object* v___x_760_; 
v___x_759_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_759_, 0, v___x_758_);
v___x_760_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_754_, v___x_755_, v___x_759_, v___f_738_);
return v___x_760_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_concurrently___redArg___lam__17___boxed(lean_object* v___f_763_, lean_object* v_x_764_, lean_object* v___y_765_){
_start:
{
lean_object* v_res_766_; 
v_res_766_ = l_Std_Async_ContextAsync_concurrently___redArg___lam__17(v___f_763_, v_x_764_);
return v_res_766_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_concurrently___redArg(lean_object* v_x_769_, lean_object* v_y_770_, lean_object* v_prio_771_, lean_object* v___y_772_){
_start:
{
lean_object* v___f_774_; lean_object* v___f_775_; lean_object* v___f_776_; lean_object* v___f_777_; lean_object* v___x_778_; uint8_t v___x_779_; lean_object* v___x_780_; lean_object* v___x_781_; lean_object* v___x_782_; 
v___f_774_ = ((lean_object*)(l_Std_Async_ContextAsync_concurrently___redArg___closed__0));
v___f_775_ = ((lean_object*)(l_Std_Async_ContextAsync_concurrently___redArg___closed__1));
v___f_776_ = lean_alloc_closure((void*)(l_Std_Async_ContextAsync_concurrently___redArg___lam__16___boxed), 9, 7);
lean_closure_set(v___f_776_, 0, v_x_769_);
lean_closure_set(v___f_776_, 1, v___f_775_);
lean_closure_set(v___f_776_, 2, v_y_770_);
lean_closure_set(v___f_776_, 3, v___f_775_);
lean_closure_set(v___f_776_, 4, v_prio_771_);
lean_closure_set(v___f_776_, 5, v___f_774_);
lean_closure_set(v___f_776_, 6, v___f_774_);
v___f_777_ = lean_alloc_closure((void*)(l_Std_Async_ContextAsync_concurrently___redArg___lam__17___boxed), 3, 1);
lean_closure_set(v___f_777_, 0, v___f_776_);
v___x_778_ = lean_unsigned_to_nat(0u);
v___x_779_ = 0;
lean_inc_ref(v___y_772_);
v___x_780_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_780_, 0, v___y_772_);
v___x_781_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_781_, 0, v___x_780_);
v___x_782_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_778_, v___x_779_, v___x_781_, v___f_777_);
return v___x_782_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_concurrently___redArg___boxed(lean_object* v_x_783_, lean_object* v_y_784_, lean_object* v_prio_785_, lean_object* v___y_786_, lean_object* v___y_787_){
_start:
{
lean_object* v_res_788_; 
v_res_788_ = l_Std_Async_ContextAsync_concurrently___redArg(v_x_783_, v_y_784_, v_prio_785_, v___y_786_);
lean_dec_ref(v___y_786_);
return v_res_788_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_concurrently(lean_object* v_00_u03b1_789_, lean_object* v_00_u03b2_790_, lean_object* v_x_791_, lean_object* v_y_792_, lean_object* v_prio_793_, lean_object* v___y_794_){
_start:
{
lean_object* v___f_796_; lean_object* v___f_797_; lean_object* v___f_798_; lean_object* v___f_799_; lean_object* v___x_800_; uint8_t v___x_801_; lean_object* v___x_802_; lean_object* v___x_803_; lean_object* v___x_804_; 
v___f_796_ = ((lean_object*)(l_Std_Async_ContextAsync_concurrently___redArg___closed__0));
v___f_797_ = ((lean_object*)(l_Std_Async_ContextAsync_concurrently___redArg___closed__1));
v___f_798_ = lean_alloc_closure((void*)(l_Std_Async_ContextAsync_concurrently___redArg___lam__16___boxed), 9, 7);
lean_closure_set(v___f_798_, 0, v_x_791_);
lean_closure_set(v___f_798_, 1, v___f_797_);
lean_closure_set(v___f_798_, 2, v_y_792_);
lean_closure_set(v___f_798_, 3, v___f_797_);
lean_closure_set(v___f_798_, 4, v_prio_793_);
lean_closure_set(v___f_798_, 5, v___f_796_);
lean_closure_set(v___f_798_, 6, v___f_796_);
v___f_799_ = lean_alloc_closure((void*)(l_Std_Async_ContextAsync_concurrently___redArg___lam__17___boxed), 3, 1);
lean_closure_set(v___f_799_, 0, v___f_798_);
v___x_800_ = lean_unsigned_to_nat(0u);
v___x_801_ = 0;
lean_inc_ref(v___y_794_);
v___x_802_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_802_, 0, v___y_794_);
v___x_803_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_803_, 0, v___x_802_);
v___x_804_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_800_, v___x_801_, v___x_803_, v___f_799_);
return v___x_804_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_concurrently___boxed(lean_object* v_00_u03b1_805_, lean_object* v_00_u03b2_806_, lean_object* v_x_807_, lean_object* v_y_808_, lean_object* v_prio_809_, lean_object* v___y_810_, lean_object* v___y_811_){
_start:
{
lean_object* v_res_812_; 
v_res_812_ = l_Std_Async_ContextAsync_concurrently(v_00_u03b1_805_, v_00_u03b2_806_, v_x_807_, v_y_808_, v_prio_809_, v___y_810_);
lean_dec_ref(v___y_810_);
return v_res_812_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_concurrentlyAll___redArg___lam__0(lean_object* v___y_813_, lean_object* v___y_814_){
_start:
{
lean_object* v___x_816_; 
v___x_816_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_816_, 0, v___y_813_);
return v___x_816_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_concurrentlyAll___redArg___lam__0___boxed(lean_object* v___y_817_, lean_object* v___y_818_, lean_object* v___y_819_){
_start:
{
lean_object* v_res_820_; 
v_res_820_ = l_Std_Async_ContextAsync_concurrentlyAll___redArg___lam__0(v___y_817_, v___y_818_);
lean_dec_ref(v___y_818_);
return v_res_820_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_concurrentlyAll___redArg___lam__3(lean_object* v___x_821_, lean_object* v___f_822_, lean_object* v___y_823_, lean_object* v_x_824_){
_start:
{
if (lean_obj_tag(v_x_824_) == 0)
{
lean_object* v_a_826_; lean_object* v___x_828_; uint8_t v_isShared_829_; uint8_t v_isSharedCheck_834_; 
lean_dec_ref(v___f_822_);
lean_dec_ref(v___x_821_);
v_a_826_ = lean_ctor_get(v_x_824_, 0);
v_isSharedCheck_834_ = !lean_is_exclusive(v_x_824_);
if (v_isSharedCheck_834_ == 0)
{
v___x_828_ = v_x_824_;
v_isShared_829_ = v_isSharedCheck_834_;
goto v_resetjp_827_;
}
else
{
lean_inc(v_a_826_);
lean_dec(v_x_824_);
v___x_828_ = lean_box(0);
v_isShared_829_ = v_isSharedCheck_834_;
goto v_resetjp_827_;
}
v_resetjp_827_:
{
lean_object* v___x_831_; 
if (v_isShared_829_ == 0)
{
v___x_831_ = v___x_828_;
goto v_reusejp_830_;
}
else
{
lean_object* v_reuseFailAlloc_833_; 
v_reuseFailAlloc_833_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_833_, 0, v_a_826_);
v___x_831_ = v_reuseFailAlloc_833_;
goto v_reusejp_830_;
}
v_reusejp_830_:
{
lean_object* v___x_832_; 
v___x_832_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_832_, 0, v___x_831_);
return v___x_832_;
}
}
}
else
{
lean_object* v_a_835_; size_t v_sz_836_; size_t v___x_837_; lean_object* v___x_4379__overap_838_; lean_object* v___x_839_; 
v_a_835_ = lean_ctor_get(v_x_824_, 0);
lean_inc(v_a_835_);
lean_dec_ref_known(v_x_824_, 1);
v_sz_836_ = lean_array_size(v_a_835_);
v___x_837_ = ((size_t)0ULL);
v___x_4379__overap_838_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_821_, v___f_822_, v_sz_836_, v___x_837_, v_a_835_);
lean_inc_ref(v___y_823_);
v___x_839_ = lean_apply_2(v___x_4379__overap_838_, v___y_823_, lean_box(0));
return v___x_839_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_concurrentlyAll___redArg___lam__3___boxed(lean_object* v___x_840_, lean_object* v___f_841_, lean_object* v___y_842_, lean_object* v_x_843_, lean_object* v___y_844_){
_start:
{
lean_object* v_res_845_; 
v_res_845_ = l_Std_Async_ContextAsync_concurrentlyAll___redArg___lam__3(v___x_840_, v___f_841_, v___y_842_, v_x_843_);
lean_dec_ref(v___y_842_);
return v_res_845_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_concurrentlyAll___redArg___lam__4(lean_object* v_ctxAsync_846_, lean_object* v_a_847_, lean_object* v___f_848_){
_start:
{
lean_object* v___x_850_; uint8_t v___x_851_; lean_object* v___x_852_; lean_object* v___x_853_; 
v___x_850_ = lean_unsigned_to_nat(0u);
v___x_851_ = 0;
v___x_852_ = lean_apply_2(v_ctxAsync_846_, v_a_847_, lean_box(0));
v___x_853_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_850_, v___x_851_, v___x_852_, v___f_848_);
return v___x_853_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_concurrentlyAll___redArg___lam__4___boxed(lean_object* v_ctxAsync_854_, lean_object* v_a_855_, lean_object* v___f_856_, lean_object* v___y_857_){
_start:
{
lean_object* v_res_858_; 
v_res_858_ = l_Std_Async_ContextAsync_concurrentlyAll___redArg___lam__4(v_ctxAsync_854_, v_a_855_, v___f_856_);
return v_res_858_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_concurrentlyAll___redArg___lam__1(lean_object* v_a_859_, lean_object* v___x_860_, lean_object* v_a_x3f_861_){
_start:
{
lean_object* v___x_863_; lean_object* v___x_864_; lean_object* v___x_865_; 
v___x_863_ = l_Std_CancellationContext_cancel(v_a_859_, v___x_860_);
v___x_864_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_864_, 0, v___x_863_);
v___x_865_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_865_, 0, v___x_864_);
return v___x_865_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_concurrentlyAll___redArg___lam__1___boxed(lean_object* v_a_866_, lean_object* v___x_867_, lean_object* v_a_x3f_868_, lean_object* v___y_869_){
_start:
{
lean_object* v_res_870_; 
v_res_870_ = l_Std_Async_ContextAsync_concurrentlyAll___redArg___lam__1(v_a_866_, v___x_867_, v_a_x3f_868_);
lean_dec(v_a_x3f_868_);
return v_res_870_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_concurrentlyAll___redArg___lam__5(lean_object* v_ctxAsync_871_, lean_object* v___f_872_, lean_object* v___f_873_, lean_object* v_prio_874_, lean_object* v___f_875_, lean_object* v_x_876_){
_start:
{
if (lean_obj_tag(v_x_876_) == 0)
{
lean_object* v_a_878_; lean_object* v___x_880_; uint8_t v_isShared_881_; uint8_t v_isSharedCheck_886_; 
lean_dec_ref(v___f_875_);
lean_dec(v_prio_874_);
lean_dec(v___f_873_);
lean_dec_ref(v___f_872_);
lean_dec_ref(v_ctxAsync_871_);
v_a_878_ = lean_ctor_get(v_x_876_, 0);
v_isSharedCheck_886_ = !lean_is_exclusive(v_x_876_);
if (v_isSharedCheck_886_ == 0)
{
v___x_880_ = v_x_876_;
v_isShared_881_ = v_isSharedCheck_886_;
goto v_resetjp_879_;
}
else
{
lean_inc(v_a_878_);
lean_dec(v_x_876_);
v___x_880_ = lean_box(0);
v_isShared_881_ = v_isSharedCheck_886_;
goto v_resetjp_879_;
}
v_resetjp_879_:
{
lean_object* v___x_883_; 
if (v_isShared_881_ == 0)
{
v___x_883_ = v___x_880_;
goto v_reusejp_882_;
}
else
{
lean_object* v_reuseFailAlloc_885_; 
v_reuseFailAlloc_885_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_885_, 0, v_a_878_);
v___x_883_ = v_reuseFailAlloc_885_;
goto v_reusejp_882_;
}
v_reusejp_882_:
{
lean_object* v___x_884_; 
v___x_884_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_884_, 0, v___x_883_);
return v___x_884_;
}
}
}
else
{
lean_object* v_a_887_; lean_object* v___x_889_; uint8_t v_isShared_890_; uint8_t v_isSharedCheck_905_; 
v_a_887_ = lean_ctor_get(v_x_876_, 0);
v_isSharedCheck_905_ = !lean_is_exclusive(v_x_876_);
if (v_isSharedCheck_905_ == 0)
{
v___x_889_ = v_x_876_;
v_isShared_890_ = v_isSharedCheck_905_;
goto v_resetjp_888_;
}
else
{
lean_inc(v_a_887_);
lean_dec(v_x_876_);
v___x_889_ = lean_box(0);
v_isShared_890_ = v_isSharedCheck_905_;
goto v_resetjp_888_;
}
v_resetjp_888_:
{
lean_object* v___f_891_; lean_object* v___x_892_; lean_object* v___f_893_; lean_object* v___f_894_; lean_object* v___x_895_; lean_object* v___x_896_; lean_object* v___x_897_; lean_object* v___x_898_; uint8_t v___x_899_; lean_object* v___x_900_; lean_object* v___x_902_; 
lean_inc(v_a_887_);
v___f_891_ = lean_alloc_closure((void*)(l_Std_Async_ContextAsync_concurrentlyAll___redArg___lam__4___boxed), 4, 3);
lean_closure_set(v___f_891_, 0, v_ctxAsync_871_);
lean_closure_set(v___f_891_, 1, v_a_887_);
lean_closure_set(v___f_891_, 2, v___f_872_);
v___x_892_ = lean_box(2);
v___f_893_ = lean_alloc_closure((void*)(l_Std_Async_ContextAsync_concurrentlyAll___redArg___lam__1___boxed), 4, 2);
lean_closure_set(v___f_893_, 0, v_a_887_);
lean_closure_set(v___f_893_, 1, v___x_892_);
v___f_894_ = lean_alloc_closure((void*)(l_Std_Async_ContextAsync_concurrently___redArg___lam__5___boxed), 4, 3);
lean_closure_set(v___f_894_, 0, v___f_873_);
lean_closure_set(v___f_894_, 1, v___f_891_);
lean_closure_set(v___f_894_, 2, v___f_893_);
v___x_895_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_toBaseAsync___boxed), 4, 3);
lean_closure_set(v___x_895_, 0, lean_box(0));
lean_closure_set(v___x_895_, 1, lean_box(0));
lean_closure_set(v___x_895_, 2, v___f_894_);
v___x_896_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_toRawBaseIO___boxed), 3, 2);
lean_closure_set(v___x_896_, 0, lean_box(0));
lean_closure_set(v___x_896_, 1, v___x_895_);
v___x_897_ = lean_io_as_task(v___x_896_, v_prio_874_);
v___x_898_ = lean_unsigned_to_nat(0u);
v___x_899_ = 1;
v___x_900_ = lean_task_bind(v___x_897_, v___f_875_, v___x_898_, v___x_899_);
if (v_isShared_890_ == 0)
{
lean_ctor_set(v___x_889_, 0, v___x_900_);
v___x_902_ = v___x_889_;
goto v_reusejp_901_;
}
else
{
lean_object* v_reuseFailAlloc_904_; 
v_reuseFailAlloc_904_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_904_, 0, v___x_900_);
v___x_902_ = v_reuseFailAlloc_904_;
goto v_reusejp_901_;
}
v_reusejp_901_:
{
lean_object* v___x_903_; 
v___x_903_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_903_, 0, v___x_902_);
return v___x_903_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_concurrentlyAll___redArg___lam__5___boxed(lean_object* v_ctxAsync_906_, lean_object* v___f_907_, lean_object* v___f_908_, lean_object* v_prio_909_, lean_object* v___f_910_, lean_object* v_x_911_, lean_object* v___y_912_){
_start:
{
lean_object* v_res_913_; 
v_res_913_ = l_Std_Async_ContextAsync_concurrentlyAll___redArg___lam__5(v_ctxAsync_906_, v___f_907_, v___f_908_, v_prio_909_, v___f_910_, v_x_911_);
return v_res_913_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_concurrentlyAll___redArg___lam__2(lean_object* v___f_914_, lean_object* v___f_915_, lean_object* v_prio_916_, lean_object* v___f_917_, lean_object* v_a_918_, lean_object* v_ctxAsync_919_, lean_object* v___y_920_){
_start:
{
lean_object* v___f_922_; lean_object* v___x_923_; uint8_t v___x_924_; lean_object* v___x_925_; lean_object* v___x_926_; lean_object* v___x_927_; lean_object* v___x_928_; 
v___f_922_ = lean_alloc_closure((void*)(l_Std_Async_ContextAsync_concurrentlyAll___redArg___lam__5___boxed), 7, 5);
lean_closure_set(v___f_922_, 0, v_ctxAsync_919_);
lean_closure_set(v___f_922_, 1, v___f_914_);
lean_closure_set(v___f_922_, 2, v___f_915_);
lean_closure_set(v___f_922_, 3, v_prio_916_);
lean_closure_set(v___f_922_, 4, v___f_917_);
v___x_923_ = lean_unsigned_to_nat(0u);
v___x_924_ = 0;
v___x_925_ = l_Std_CancellationContext_fork(v_a_918_);
v___x_926_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_926_, 0, v___x_925_);
v___x_927_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_927_, 0, v___x_926_);
v___x_928_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_923_, v___x_924_, v___x_927_, v___f_922_);
return v___x_928_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_concurrentlyAll___redArg___lam__2___boxed(lean_object* v___f_929_, lean_object* v___f_930_, lean_object* v_prio_931_, lean_object* v___f_932_, lean_object* v_a_933_, lean_object* v_ctxAsync_934_, lean_object* v___y_935_, lean_object* v___y_936_){
_start:
{
lean_object* v_res_937_; 
v_res_937_ = l_Std_Async_ContextAsync_concurrentlyAll___redArg___lam__2(v___f_929_, v___f_930_, v_prio_931_, v___f_932_, v_a_933_, v_ctxAsync_934_, v___y_935_);
lean_dec_ref(v___y_935_);
return v_res_937_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_concurrentlyAll___redArg___lam__6(lean_object* v___f_938_, lean_object* v_prio_939_, lean_object* v___f_940_, lean_object* v_xs_941_, lean_object* v___x_942_, lean_object* v___y_943_, lean_object* v___f_944_, lean_object* v_x_945_){
_start:
{
if (lean_obj_tag(v_x_945_) == 0)
{
lean_object* v_a_947_; lean_object* v___x_949_; uint8_t v_isShared_950_; uint8_t v_isSharedCheck_955_; 
lean_dec_ref(v___f_944_);
lean_dec_ref(v___x_942_);
lean_dec_ref(v_xs_941_);
lean_dec_ref(v___f_940_);
lean_dec(v_prio_939_);
lean_dec(v___f_938_);
v_a_947_ = lean_ctor_get(v_x_945_, 0);
v_isSharedCheck_955_ = !lean_is_exclusive(v_x_945_);
if (v_isSharedCheck_955_ == 0)
{
v___x_949_ = v_x_945_;
v_isShared_950_ = v_isSharedCheck_955_;
goto v_resetjp_948_;
}
else
{
lean_inc(v_a_947_);
lean_dec(v_x_945_);
v___x_949_ = lean_box(0);
v_isShared_950_ = v_isSharedCheck_955_;
goto v_resetjp_948_;
}
v_resetjp_948_:
{
lean_object* v___x_952_; 
if (v_isShared_950_ == 0)
{
v___x_952_ = v___x_949_;
goto v_reusejp_951_;
}
else
{
lean_object* v_reuseFailAlloc_954_; 
v_reuseFailAlloc_954_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_954_, 0, v_a_947_);
v___x_952_ = v_reuseFailAlloc_954_;
goto v_reusejp_951_;
}
v_reusejp_951_:
{
lean_object* v___x_953_; 
v___x_953_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_953_, 0, v___x_952_);
return v___x_953_;
}
}
}
else
{
lean_object* v_a_956_; lean_object* v___f_957_; lean_object* v___f_958_; lean_object* v___x_959_; uint8_t v___x_960_; size_t v_sz_961_; size_t v___x_962_; lean_object* v___x_4505__overap_963_; lean_object* v___x_964_; lean_object* v___x_965_; 
v_a_956_ = lean_ctor_get(v_x_945_, 0);
lean_inc_n(v_a_956_, 2);
lean_dec_ref_known(v_x_945_, 1);
v___f_957_ = lean_alloc_closure((void*)(l_Std_Async_ContextAsync_concurrently___redArg___lam__4___boxed), 3, 1);
lean_closure_set(v___f_957_, 0, v_a_956_);
v___f_958_ = lean_alloc_closure((void*)(l_Std_Async_ContextAsync_concurrentlyAll___redArg___lam__2___boxed), 8, 5);
lean_closure_set(v___f_958_, 0, v___f_957_);
lean_closure_set(v___f_958_, 1, v___f_938_);
lean_closure_set(v___f_958_, 2, v_prio_939_);
lean_closure_set(v___f_958_, 3, v___f_940_);
lean_closure_set(v___f_958_, 4, v_a_956_);
v___x_959_ = lean_unsigned_to_nat(0u);
v___x_960_ = 0;
v_sz_961_ = lean_array_size(v_xs_941_);
v___x_962_ = ((size_t)0ULL);
v___x_4505__overap_963_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_942_, v___f_958_, v_sz_961_, v___x_962_, v_xs_941_);
lean_inc_ref(v___y_943_);
v___x_964_ = lean_apply_2(v___x_4505__overap_963_, v___y_943_, lean_box(0));
v___x_965_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_959_, v___x_960_, v___x_964_, v___f_944_);
return v___x_965_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_concurrentlyAll___redArg___lam__6___boxed(lean_object* v___f_966_, lean_object* v_prio_967_, lean_object* v___f_968_, lean_object* v_xs_969_, lean_object* v___x_970_, lean_object* v___y_971_, lean_object* v___f_972_, lean_object* v_x_973_, lean_object* v___y_974_){
_start:
{
lean_object* v_res_975_; 
v_res_975_ = l_Std_Async_ContextAsync_concurrentlyAll___redArg___lam__6(v___f_966_, v_prio_967_, v___f_968_, v_xs_969_, v___x_970_, v___y_971_, v___f_972_, v_x_973_);
lean_dec_ref(v___y_971_);
return v_res_975_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_concurrentlyAll___redArg___lam__7(lean_object* v___f_976_, lean_object* v_x_977_){
_start:
{
if (lean_obj_tag(v_x_977_) == 0)
{
lean_object* v_a_979_; lean_object* v___x_981_; uint8_t v_isShared_982_; uint8_t v_isSharedCheck_987_; 
lean_dec_ref(v___f_976_);
v_a_979_ = lean_ctor_get(v_x_977_, 0);
v_isSharedCheck_987_ = !lean_is_exclusive(v_x_977_);
if (v_isSharedCheck_987_ == 0)
{
v___x_981_ = v_x_977_;
v_isShared_982_ = v_isSharedCheck_987_;
goto v_resetjp_980_;
}
else
{
lean_inc(v_a_979_);
lean_dec(v_x_977_);
v___x_981_ = lean_box(0);
v_isShared_982_ = v_isSharedCheck_987_;
goto v_resetjp_980_;
}
v_resetjp_980_:
{
lean_object* v___x_984_; 
if (v_isShared_982_ == 0)
{
v___x_984_ = v___x_981_;
goto v_reusejp_983_;
}
else
{
lean_object* v_reuseFailAlloc_986_; 
v_reuseFailAlloc_986_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_986_, 0, v_a_979_);
v___x_984_ = v_reuseFailAlloc_986_;
goto v_reusejp_983_;
}
v_reusejp_983_:
{
lean_object* v___x_985_; 
v___x_985_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_985_, 0, v___x_984_);
return v___x_985_;
}
}
}
else
{
lean_object* v_a_988_; lean_object* v___x_990_; uint8_t v_isShared_991_; uint8_t v_isSharedCheck_1000_; 
v_a_988_ = lean_ctor_get(v_x_977_, 0);
v_isSharedCheck_1000_ = !lean_is_exclusive(v_x_977_);
if (v_isSharedCheck_1000_ == 0)
{
v___x_990_ = v_x_977_;
v_isShared_991_ = v_isSharedCheck_1000_;
goto v_resetjp_989_;
}
else
{
lean_inc(v_a_988_);
lean_dec(v_x_977_);
v___x_990_ = lean_box(0);
v_isShared_991_ = v_isSharedCheck_1000_;
goto v_resetjp_989_;
}
v_resetjp_989_:
{
lean_object* v___x_992_; uint8_t v___x_993_; lean_object* v___x_994_; lean_object* v___x_996_; 
v___x_992_ = lean_unsigned_to_nat(0u);
v___x_993_ = 0;
v___x_994_ = l_Std_CancellationContext_fork(v_a_988_);
if (v_isShared_991_ == 0)
{
lean_ctor_set(v___x_990_, 0, v___x_994_);
v___x_996_ = v___x_990_;
goto v_reusejp_995_;
}
else
{
lean_object* v_reuseFailAlloc_999_; 
v_reuseFailAlloc_999_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_999_, 0, v___x_994_);
v___x_996_ = v_reuseFailAlloc_999_;
goto v_reusejp_995_;
}
v_reusejp_995_:
{
lean_object* v___x_997_; lean_object* v___x_998_; 
v___x_997_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_997_, 0, v___x_996_);
v___x_998_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_992_, v___x_993_, v___x_997_, v___f_976_);
return v___x_998_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_concurrentlyAll___redArg___lam__7___boxed(lean_object* v___f_1001_, lean_object* v_x_1002_, lean_object* v___y_1003_){
_start:
{
lean_object* v_res_1004_; 
v_res_1004_ = l_Std_Async_ContextAsync_concurrentlyAll___redArg___lam__7(v___f_1001_, v_x_1002_);
return v_res_1004_;
}
}
static lean_object* _init_l_Std_Async_ContextAsync_concurrentlyAll___redArg___closed__1(void){
_start:
{
lean_object* v___x_1006_; 
v___x_1006_ = l_Std_Async_EAsync_instMonad___redArg();
return v___x_1006_;
}
}
static lean_object* _init_l_Std_Async_ContextAsync_concurrentlyAll___redArg___closed__2(void){
_start:
{
lean_object* v___x_1007_; lean_object* v___x_1008_; 
v___x_1007_ = lean_obj_once(&l_Std_Async_ContextAsync_concurrentlyAll___redArg___closed__1, &l_Std_Async_ContextAsync_concurrentlyAll___redArg___closed__1_once, _init_l_Std_Async_ContextAsync_concurrentlyAll___redArg___closed__1);
v___x_1008_ = l_ReaderT_instMonad___redArg(v___x_1007_);
return v___x_1008_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_concurrentlyAll___redArg(lean_object* v_xs_1009_, lean_object* v_prio_1010_, lean_object* v___y_1011_){
_start:
{
lean_object* v___f_1013_; lean_object* v___f_1014_; lean_object* v___f_1015_; lean_object* v___x_1016_; lean_object* v___f_1017_; lean_object* v___f_1018_; lean_object* v___f_1019_; lean_object* v___x_1020_; uint8_t v___x_1021_; lean_object* v___x_1022_; lean_object* v___x_1023_; lean_object* v___x_1024_; 
v___f_1013_ = ((lean_object*)(l_Std_Async_ContextAsync_concurrentlyAll___redArg___closed__0));
v___f_1014_ = ((lean_object*)(l_Std_Async_ContextAsync_concurrently___redArg___closed__0));
v___f_1015_ = ((lean_object*)(l_Std_Async_ContextAsync_concurrently___redArg___closed__1));
v___x_1016_ = lean_obj_once(&l_Std_Async_ContextAsync_concurrentlyAll___redArg___closed__2, &l_Std_Async_ContextAsync_concurrentlyAll___redArg___closed__2_once, _init_l_Std_Async_ContextAsync_concurrentlyAll___redArg___closed__2);
lean_inc_ref_n(v___y_1011_, 3);
v___f_1017_ = lean_alloc_closure((void*)(l_Std_Async_ContextAsync_concurrentlyAll___redArg___lam__3___boxed), 5, 3);
lean_closure_set(v___f_1017_, 0, v___x_1016_);
lean_closure_set(v___f_1017_, 1, v___f_1013_);
lean_closure_set(v___f_1017_, 2, v___y_1011_);
v___f_1018_ = lean_alloc_closure((void*)(l_Std_Async_ContextAsync_concurrentlyAll___redArg___lam__6___boxed), 9, 7);
lean_closure_set(v___f_1018_, 0, v___f_1015_);
lean_closure_set(v___f_1018_, 1, v_prio_1010_);
lean_closure_set(v___f_1018_, 2, v___f_1014_);
lean_closure_set(v___f_1018_, 3, v_xs_1009_);
lean_closure_set(v___f_1018_, 4, v___x_1016_);
lean_closure_set(v___f_1018_, 5, v___y_1011_);
lean_closure_set(v___f_1018_, 6, v___f_1017_);
v___f_1019_ = lean_alloc_closure((void*)(l_Std_Async_ContextAsync_concurrentlyAll___redArg___lam__7___boxed), 3, 1);
lean_closure_set(v___f_1019_, 0, v___f_1018_);
v___x_1020_ = lean_unsigned_to_nat(0u);
v___x_1021_ = 0;
v___x_1022_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1022_, 0, v___y_1011_);
v___x_1023_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1023_, 0, v___x_1022_);
v___x_1024_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_1020_, v___x_1021_, v___x_1023_, v___f_1019_);
return v___x_1024_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_concurrentlyAll___redArg___boxed(lean_object* v_xs_1025_, lean_object* v_prio_1026_, lean_object* v___y_1027_, lean_object* v___y_1028_){
_start:
{
lean_object* v_res_1029_; 
v_res_1029_ = l_Std_Async_ContextAsync_concurrentlyAll___redArg(v_xs_1025_, v_prio_1026_, v___y_1027_);
lean_dec_ref(v___y_1027_);
return v_res_1029_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_concurrentlyAll(lean_object* v_00_u03b1_1030_, lean_object* v_xs_1031_, lean_object* v_prio_1032_, lean_object* v___y_1033_){
_start:
{
lean_object* v___f_1035_; lean_object* v___f_1036_; lean_object* v___f_1037_; lean_object* v___x_1038_; lean_object* v___f_1039_; lean_object* v___f_1040_; lean_object* v___f_1041_; lean_object* v___x_1042_; uint8_t v___x_1043_; lean_object* v___x_1044_; lean_object* v___x_1045_; lean_object* v___x_1046_; 
v___f_1035_ = ((lean_object*)(l_Std_Async_ContextAsync_concurrentlyAll___redArg___closed__0));
v___f_1036_ = ((lean_object*)(l_Std_Async_ContextAsync_concurrently___redArg___closed__0));
v___f_1037_ = ((lean_object*)(l_Std_Async_ContextAsync_concurrently___redArg___closed__1));
v___x_1038_ = lean_obj_once(&l_Std_Async_ContextAsync_concurrentlyAll___redArg___closed__2, &l_Std_Async_ContextAsync_concurrentlyAll___redArg___closed__2_once, _init_l_Std_Async_ContextAsync_concurrentlyAll___redArg___closed__2);
lean_inc_ref_n(v___y_1033_, 3);
v___f_1039_ = lean_alloc_closure((void*)(l_Std_Async_ContextAsync_concurrentlyAll___redArg___lam__3___boxed), 5, 3);
lean_closure_set(v___f_1039_, 0, v___x_1038_);
lean_closure_set(v___f_1039_, 1, v___f_1035_);
lean_closure_set(v___f_1039_, 2, v___y_1033_);
v___f_1040_ = lean_alloc_closure((void*)(l_Std_Async_ContextAsync_concurrentlyAll___redArg___lam__6___boxed), 9, 7);
lean_closure_set(v___f_1040_, 0, v___f_1037_);
lean_closure_set(v___f_1040_, 1, v_prio_1032_);
lean_closure_set(v___f_1040_, 2, v___f_1036_);
lean_closure_set(v___f_1040_, 3, v_xs_1031_);
lean_closure_set(v___f_1040_, 4, v___x_1038_);
lean_closure_set(v___f_1040_, 5, v___y_1033_);
lean_closure_set(v___f_1040_, 6, v___f_1039_);
v___f_1041_ = lean_alloc_closure((void*)(l_Std_Async_ContextAsync_concurrentlyAll___redArg___lam__7___boxed), 3, 1);
lean_closure_set(v___f_1041_, 0, v___f_1040_);
v___x_1042_ = lean_unsigned_to_nat(0u);
v___x_1043_ = 0;
v___x_1044_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1044_, 0, v___y_1033_);
v___x_1045_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1045_, 0, v___x_1044_);
v___x_1046_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_1042_, v___x_1043_, v___x_1045_, v___f_1041_);
return v___x_1046_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_concurrentlyAll___boxed(lean_object* v_00_u03b1_1047_, lean_object* v_xs_1048_, lean_object* v_prio_1049_, lean_object* v___y_1050_, lean_object* v___y_1051_){
_start:
{
lean_object* v_res_1052_; 
v_res_1052_ = l_Std_Async_ContextAsync_concurrentlyAll(v_00_u03b1_1047_, v_xs_1048_, v_prio_1049_, v___y_1050_);
lean_dec_ref(v___y_1050_);
return v_res_1052_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_background___redArg___lam__0(lean_object* v_a_1053_, lean_object* v_x_1054_){
_start:
{
if (lean_obj_tag(v_x_1054_) == 0)
{
lean_object* v_a_1056_; lean_object* v___x_1058_; uint8_t v_isShared_1059_; uint8_t v_isSharedCheck_1064_; 
lean_dec_ref(v_a_1053_);
v_a_1056_ = lean_ctor_get(v_x_1054_, 0);
v_isSharedCheck_1064_ = !lean_is_exclusive(v_x_1054_);
if (v_isSharedCheck_1064_ == 0)
{
v___x_1058_ = v_x_1054_;
v_isShared_1059_ = v_isSharedCheck_1064_;
goto v_resetjp_1057_;
}
else
{
lean_inc(v_a_1056_);
lean_dec(v_x_1054_);
v___x_1058_ = lean_box(0);
v_isShared_1059_ = v_isSharedCheck_1064_;
goto v_resetjp_1057_;
}
v_resetjp_1057_:
{
lean_object* v___x_1061_; 
if (v_isShared_1059_ == 0)
{
v___x_1061_ = v___x_1058_;
goto v_reusejp_1060_;
}
else
{
lean_object* v_reuseFailAlloc_1063_; 
v_reuseFailAlloc_1063_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1063_, 0, v_a_1056_);
v___x_1061_ = v_reuseFailAlloc_1063_;
goto v_reusejp_1060_;
}
v_reusejp_1060_:
{
lean_object* v___x_1062_; 
v___x_1062_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1062_, 0, v___x_1061_);
return v___x_1062_;
}
}
}
else
{
lean_object* v___x_1066_; uint8_t v_isShared_1067_; uint8_t v_isSharedCheck_1074_; 
v_isSharedCheck_1074_ = !lean_is_exclusive(v_x_1054_);
if (v_isSharedCheck_1074_ == 0)
{
lean_object* v_unused_1075_; 
v_unused_1075_ = lean_ctor_get(v_x_1054_, 0);
lean_dec(v_unused_1075_);
v___x_1066_ = v_x_1054_;
v_isShared_1067_ = v_isSharedCheck_1074_;
goto v_resetjp_1065_;
}
else
{
lean_dec(v_x_1054_);
v___x_1066_ = lean_box(0);
v_isShared_1067_ = v_isSharedCheck_1074_;
goto v_resetjp_1065_;
}
v_resetjp_1065_:
{
lean_object* v___x_1068_; lean_object* v___x_1069_; lean_object* v___x_1071_; 
v___x_1068_ = lean_box(2);
v___x_1069_ = l_Std_CancellationContext_cancel(v_a_1053_, v___x_1068_);
if (v_isShared_1067_ == 0)
{
lean_ctor_set(v___x_1066_, 0, v___x_1069_);
v___x_1071_ = v___x_1066_;
goto v_reusejp_1070_;
}
else
{
lean_object* v_reuseFailAlloc_1073_; 
v_reuseFailAlloc_1073_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1073_, 0, v___x_1069_);
v___x_1071_ = v_reuseFailAlloc_1073_;
goto v_reusejp_1070_;
}
v_reusejp_1070_:
{
lean_object* v___x_1072_; 
v___x_1072_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1072_, 0, v___x_1071_);
return v___x_1072_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_background___redArg___lam__0___boxed(lean_object* v_a_1076_, lean_object* v_x_1077_, lean_object* v___y_1078_){
_start:
{
lean_object* v_res_1079_; 
v_res_1079_ = l_Std_Async_ContextAsync_background___redArg___lam__0(v_a_1076_, v_x_1077_);
return v_res_1079_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_background___redArg___lam__1(lean_object* v_action_1080_, lean_object* v_a_1081_, lean_object* v___f_1082_){
_start:
{
lean_object* v___x_1084_; uint8_t v___x_1085_; lean_object* v___x_1086_; lean_object* v___x_1087_; 
v___x_1084_ = lean_unsigned_to_nat(0u);
v___x_1085_ = 0;
v___x_1086_ = lean_apply_2(v_action_1080_, v_a_1081_, lean_box(0));
v___x_1087_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_1084_, v___x_1085_, v___x_1086_, v___f_1082_);
return v___x_1087_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_background___redArg___lam__1___boxed(lean_object* v_action_1088_, lean_object* v_a_1089_, lean_object* v___f_1090_, lean_object* v___y_1091_){
_start:
{
lean_object* v_res_1092_; 
v_res_1092_ = l_Std_Async_ContextAsync_background___redArg___lam__1(v_action_1088_, v_a_1089_, v___f_1090_);
return v_res_1092_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_background___redArg___lam__2(lean_object* v_action_1097_, lean_object* v_prio_1098_, lean_object* v_x_1099_){
_start:
{
if (lean_obj_tag(v_x_1099_) == 0)
{
lean_object* v_a_1101_; lean_object* v___x_1103_; uint8_t v_isShared_1104_; uint8_t v_isSharedCheck_1109_; 
lean_dec(v_prio_1098_);
lean_dec_ref(v_action_1097_);
v_a_1101_ = lean_ctor_get(v_x_1099_, 0);
v_isSharedCheck_1109_ = !lean_is_exclusive(v_x_1099_);
if (v_isSharedCheck_1109_ == 0)
{
v___x_1103_ = v_x_1099_;
v_isShared_1104_ = v_isSharedCheck_1109_;
goto v_resetjp_1102_;
}
else
{
lean_inc(v_a_1101_);
lean_dec(v_x_1099_);
v___x_1103_ = lean_box(0);
v_isShared_1104_ = v_isSharedCheck_1109_;
goto v_resetjp_1102_;
}
v_resetjp_1102_:
{
lean_object* v___x_1106_; 
if (v_isShared_1104_ == 0)
{
v___x_1106_ = v___x_1103_;
goto v_reusejp_1105_;
}
else
{
lean_object* v_reuseFailAlloc_1108_; 
v_reuseFailAlloc_1108_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1108_, 0, v_a_1101_);
v___x_1106_ = v_reuseFailAlloc_1108_;
goto v_reusejp_1105_;
}
v_reusejp_1105_:
{
lean_object* v___x_1107_; 
v___x_1107_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1107_, 0, v___x_1106_);
return v___x_1107_;
}
}
}
else
{
lean_object* v_a_1110_; lean_object* v___f_1111_; lean_object* v___f_1112_; lean_object* v___x_1113_; lean_object* v___x_1114_; lean_object* v___x_1115_; lean_object* v___x_1116_; 
v_a_1110_ = lean_ctor_get(v_x_1099_, 0);
lean_inc_n(v_a_1110_, 2);
lean_dec_ref_known(v_x_1099_, 1);
v___f_1111_ = lean_alloc_closure((void*)(l_Std_Async_ContextAsync_background___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_1111_, 0, v_a_1110_);
v___f_1112_ = lean_alloc_closure((void*)(l_Std_Async_ContextAsync_background___redArg___lam__1___boxed), 4, 3);
lean_closure_set(v___f_1112_, 0, v_action_1097_);
lean_closure_set(v___f_1112_, 1, v_a_1110_);
lean_closure_set(v___f_1112_, 2, v___f_1111_);
v___x_1113_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_toBaseAsync___boxed), 4, 3);
lean_closure_set(v___x_1113_, 0, lean_box(0));
lean_closure_set(v___x_1113_, 1, lean_box(0));
lean_closure_set(v___x_1113_, 2, v___f_1112_);
v___x_1114_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_toRawBaseIO___boxed), 3, 2);
lean_closure_set(v___x_1114_, 0, lean_box(0));
lean_closure_set(v___x_1114_, 1, v___x_1113_);
v___x_1115_ = lean_io_as_task(v___x_1114_, v_prio_1098_);
lean_dec_ref(v___x_1115_);
v___x_1116_ = ((lean_object*)(l_Std_Async_ContextAsync_background___redArg___lam__2___closed__1));
return v___x_1116_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_background___redArg___lam__2___boxed(lean_object* v_action_1117_, lean_object* v_prio_1118_, lean_object* v_x_1119_, lean_object* v___y_1120_){
_start:
{
lean_object* v_res_1121_; 
v_res_1121_ = l_Std_Async_ContextAsync_background___redArg___lam__2(v_action_1117_, v_prio_1118_, v_x_1119_);
return v_res_1121_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_background___redArg___lam__3(lean_object* v___f_1122_, lean_object* v_x_1123_){
_start:
{
if (lean_obj_tag(v_x_1123_) == 0)
{
lean_object* v_a_1125_; lean_object* v___x_1127_; uint8_t v_isShared_1128_; uint8_t v_isSharedCheck_1133_; 
lean_dec_ref(v___f_1122_);
v_a_1125_ = lean_ctor_get(v_x_1123_, 0);
v_isSharedCheck_1133_ = !lean_is_exclusive(v_x_1123_);
if (v_isSharedCheck_1133_ == 0)
{
v___x_1127_ = v_x_1123_;
v_isShared_1128_ = v_isSharedCheck_1133_;
goto v_resetjp_1126_;
}
else
{
lean_inc(v_a_1125_);
lean_dec(v_x_1123_);
v___x_1127_ = lean_box(0);
v_isShared_1128_ = v_isSharedCheck_1133_;
goto v_resetjp_1126_;
}
v_resetjp_1126_:
{
lean_object* v___x_1130_; 
if (v_isShared_1128_ == 0)
{
v___x_1130_ = v___x_1127_;
goto v_reusejp_1129_;
}
else
{
lean_object* v_reuseFailAlloc_1132_; 
v_reuseFailAlloc_1132_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1132_, 0, v_a_1125_);
v___x_1130_ = v_reuseFailAlloc_1132_;
goto v_reusejp_1129_;
}
v_reusejp_1129_:
{
lean_object* v___x_1131_; 
v___x_1131_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1131_, 0, v___x_1130_);
return v___x_1131_;
}
}
}
else
{
lean_object* v_a_1134_; lean_object* v___x_1136_; uint8_t v_isShared_1137_; uint8_t v_isSharedCheck_1146_; 
v_a_1134_ = lean_ctor_get(v_x_1123_, 0);
v_isSharedCheck_1146_ = !lean_is_exclusive(v_x_1123_);
if (v_isSharedCheck_1146_ == 0)
{
v___x_1136_ = v_x_1123_;
v_isShared_1137_ = v_isSharedCheck_1146_;
goto v_resetjp_1135_;
}
else
{
lean_inc(v_a_1134_);
lean_dec(v_x_1123_);
v___x_1136_ = lean_box(0);
v_isShared_1137_ = v_isSharedCheck_1146_;
goto v_resetjp_1135_;
}
v_resetjp_1135_:
{
lean_object* v___x_1138_; uint8_t v___x_1139_; lean_object* v___x_1140_; lean_object* v___x_1142_; 
v___x_1138_ = lean_unsigned_to_nat(0u);
v___x_1139_ = 0;
v___x_1140_ = l_Std_CancellationContext_fork(v_a_1134_);
if (v_isShared_1137_ == 0)
{
lean_ctor_set(v___x_1136_, 0, v___x_1140_);
v___x_1142_ = v___x_1136_;
goto v_reusejp_1141_;
}
else
{
lean_object* v_reuseFailAlloc_1145_; 
v_reuseFailAlloc_1145_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1145_, 0, v___x_1140_);
v___x_1142_ = v_reuseFailAlloc_1145_;
goto v_reusejp_1141_;
}
v_reusejp_1141_:
{
lean_object* v___x_1143_; lean_object* v___x_1144_; 
v___x_1143_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1143_, 0, v___x_1142_);
v___x_1144_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_1138_, v___x_1139_, v___x_1143_, v___f_1122_);
return v___x_1144_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_background___redArg___lam__3___boxed(lean_object* v___f_1147_, lean_object* v_x_1148_, lean_object* v___y_1149_){
_start:
{
lean_object* v_res_1150_; 
v_res_1150_ = l_Std_Async_ContextAsync_background___redArg___lam__3(v___f_1147_, v_x_1148_);
return v_res_1150_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_background___redArg(lean_object* v_action_1151_, lean_object* v_prio_1152_, lean_object* v___y_1153_){
_start:
{
lean_object* v___f_1155_; lean_object* v___f_1156_; lean_object* v___x_1157_; uint8_t v___x_1158_; lean_object* v___x_1159_; lean_object* v___x_1160_; lean_object* v___x_1161_; 
v___f_1155_ = lean_alloc_closure((void*)(l_Std_Async_ContextAsync_background___redArg___lam__2___boxed), 4, 2);
lean_closure_set(v___f_1155_, 0, v_action_1151_);
lean_closure_set(v___f_1155_, 1, v_prio_1152_);
v___f_1156_ = lean_alloc_closure((void*)(l_Std_Async_ContextAsync_background___redArg___lam__3___boxed), 3, 1);
lean_closure_set(v___f_1156_, 0, v___f_1155_);
v___x_1157_ = lean_unsigned_to_nat(0u);
v___x_1158_ = 0;
lean_inc_ref(v___y_1153_);
v___x_1159_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1159_, 0, v___y_1153_);
v___x_1160_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1160_, 0, v___x_1159_);
v___x_1161_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_1157_, v___x_1158_, v___x_1160_, v___f_1156_);
return v___x_1161_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_background___redArg___boxed(lean_object* v_action_1162_, lean_object* v_prio_1163_, lean_object* v___y_1164_, lean_object* v___y_1165_){
_start:
{
lean_object* v_res_1166_; 
v_res_1166_ = l_Std_Async_ContextAsync_background___redArg(v_action_1162_, v_prio_1163_, v___y_1164_);
lean_dec_ref(v___y_1164_);
return v_res_1166_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_background(lean_object* v_00_u03b1_1167_, lean_object* v_action_1168_, lean_object* v_prio_1169_, lean_object* v___y_1170_){
_start:
{
lean_object* v___f_1172_; lean_object* v___f_1173_; lean_object* v___x_1174_; uint8_t v___x_1175_; lean_object* v___x_1176_; lean_object* v___x_1177_; lean_object* v___x_1178_; 
v___f_1172_ = lean_alloc_closure((void*)(l_Std_Async_ContextAsync_background___redArg___lam__2___boxed), 4, 2);
lean_closure_set(v___f_1172_, 0, v_action_1168_);
lean_closure_set(v___f_1172_, 1, v_prio_1169_);
v___f_1173_ = lean_alloc_closure((void*)(l_Std_Async_ContextAsync_background___redArg___lam__3___boxed), 3, 1);
lean_closure_set(v___f_1173_, 0, v___f_1172_);
v___x_1174_ = lean_unsigned_to_nat(0u);
v___x_1175_ = 0;
lean_inc_ref(v___y_1170_);
v___x_1176_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1176_, 0, v___y_1170_);
v___x_1177_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1177_, 0, v___x_1176_);
v___x_1178_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_1174_, v___x_1175_, v___x_1177_, v___f_1173_);
return v___x_1178_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_background___boxed(lean_object* v_00_u03b1_1179_, lean_object* v_action_1180_, lean_object* v_prio_1181_, lean_object* v___y_1182_, lean_object* v___y_1183_){
_start:
{
lean_object* v_res_1184_; 
v_res_1184_ = l_Std_Async_ContextAsync_background(v_00_u03b1_1179_, v_action_1180_, v_prio_1181_, v___y_1182_);
lean_dec_ref(v___y_1182_);
return v_res_1184_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_disown___redArg___lam__0(lean_object* v_action_1185_, lean_object* v_a_1186_){
_start:
{
lean_object* v___x_1188_; 
v___x_1188_ = lean_apply_2(v_action_1185_, v_a_1186_, lean_box(0));
return v___x_1188_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_disown___redArg___lam__0___boxed(lean_object* v_action_1189_, lean_object* v_a_1190_, lean_object* v___y_1191_){
_start:
{
lean_object* v_res_1192_; 
v_res_1192_ = l_Std_Async_ContextAsync_disown___redArg___lam__0(v_action_1189_, v_a_1190_);
return v_res_1192_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_disown___redArg___lam__1(lean_object* v_action_1193_, lean_object* v_prio_1194_, lean_object* v_x_1195_){
_start:
{
if (lean_obj_tag(v_x_1195_) == 0)
{
lean_object* v_a_1197_; lean_object* v___x_1199_; uint8_t v_isShared_1200_; uint8_t v_isSharedCheck_1205_; 
lean_dec(v_prio_1194_);
lean_dec_ref(v_action_1193_);
v_a_1197_ = lean_ctor_get(v_x_1195_, 0);
v_isSharedCheck_1205_ = !lean_is_exclusive(v_x_1195_);
if (v_isSharedCheck_1205_ == 0)
{
v___x_1199_ = v_x_1195_;
v_isShared_1200_ = v_isSharedCheck_1205_;
goto v_resetjp_1198_;
}
else
{
lean_inc(v_a_1197_);
lean_dec(v_x_1195_);
v___x_1199_ = lean_box(0);
v_isShared_1200_ = v_isSharedCheck_1205_;
goto v_resetjp_1198_;
}
v_resetjp_1198_:
{
lean_object* v___x_1202_; 
if (v_isShared_1200_ == 0)
{
v___x_1202_ = v___x_1199_;
goto v_reusejp_1201_;
}
else
{
lean_object* v_reuseFailAlloc_1204_; 
v_reuseFailAlloc_1204_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1204_, 0, v_a_1197_);
v___x_1202_ = v_reuseFailAlloc_1204_;
goto v_reusejp_1201_;
}
v_reusejp_1201_:
{
lean_object* v___x_1203_; 
v___x_1203_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1203_, 0, v___x_1202_);
return v___x_1203_;
}
}
}
else
{
lean_object* v_a_1206_; lean_object* v___f_1207_; lean_object* v___x_1208_; lean_object* v___x_1209_; lean_object* v___x_1210_; lean_object* v___x_1211_; 
v_a_1206_ = lean_ctor_get(v_x_1195_, 0);
lean_inc(v_a_1206_);
lean_dec_ref_known(v_x_1195_, 1);
v___f_1207_ = lean_alloc_closure((void*)(l_Std_Async_ContextAsync_disown___redArg___lam__0___boxed), 3, 2);
lean_closure_set(v___f_1207_, 0, v_action_1193_);
lean_closure_set(v___f_1207_, 1, v_a_1206_);
v___x_1208_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_toBaseAsync___boxed), 4, 3);
lean_closure_set(v___x_1208_, 0, lean_box(0));
lean_closure_set(v___x_1208_, 1, lean_box(0));
lean_closure_set(v___x_1208_, 2, v___f_1207_);
v___x_1209_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_toRawBaseIO___boxed), 3, 2);
lean_closure_set(v___x_1209_, 0, lean_box(0));
lean_closure_set(v___x_1209_, 1, v___x_1208_);
v___x_1210_ = lean_io_as_task(v___x_1209_, v_prio_1194_);
lean_dec_ref(v___x_1210_);
v___x_1211_ = ((lean_object*)(l_Std_Async_ContextAsync_background___redArg___lam__2___closed__1));
return v___x_1211_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_disown___redArg___lam__1___boxed(lean_object* v_action_1212_, lean_object* v_prio_1213_, lean_object* v_x_1214_, lean_object* v___y_1215_){
_start:
{
lean_object* v_res_1216_; 
v_res_1216_ = l_Std_Async_ContextAsync_disown___redArg___lam__1(v_action_1212_, v_prio_1213_, v_x_1214_);
return v_res_1216_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_disown___redArg(lean_object* v_action_1217_, lean_object* v_prio_1218_){
_start:
{
lean_object* v___f_1220_; lean_object* v___x_1221_; uint8_t v___x_1222_; lean_object* v___x_1223_; lean_object* v___x_1224_; lean_object* v___x_1225_; lean_object* v___x_1226_; 
v___f_1220_ = lean_alloc_closure((void*)(l_Std_Async_ContextAsync_disown___redArg___lam__1___boxed), 4, 2);
lean_closure_set(v___f_1220_, 0, v_action_1217_);
lean_closure_set(v___f_1220_, 1, v_prio_1218_);
v___x_1221_ = lean_unsigned_to_nat(0u);
v___x_1222_ = 0;
v___x_1223_ = l_Std_CancellationContext_new();
v___x_1224_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1224_, 0, v___x_1223_);
v___x_1225_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1225_, 0, v___x_1224_);
v___x_1226_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_1221_, v___x_1222_, v___x_1225_, v___f_1220_);
return v___x_1226_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_disown___redArg___boxed(lean_object* v_action_1227_, lean_object* v_prio_1228_, lean_object* v___y_1229_){
_start:
{
lean_object* v_res_1230_; 
v_res_1230_ = l_Std_Async_ContextAsync_disown___redArg(v_action_1227_, v_prio_1228_);
return v_res_1230_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_disown(lean_object* v_00_u03b1_1231_, lean_object* v_action_1232_, lean_object* v_prio_1233_, lean_object* v___y_1234_){
_start:
{
lean_object* v___f_1236_; lean_object* v___x_1237_; uint8_t v___x_1238_; lean_object* v___x_1239_; lean_object* v___x_1240_; lean_object* v___x_1241_; lean_object* v___x_1242_; 
v___f_1236_ = lean_alloc_closure((void*)(l_Std_Async_ContextAsync_disown___redArg___lam__1___boxed), 4, 2);
lean_closure_set(v___f_1236_, 0, v_action_1232_);
lean_closure_set(v___f_1236_, 1, v_prio_1233_);
v___x_1237_ = lean_unsigned_to_nat(0u);
v___x_1238_ = 0;
v___x_1239_ = l_Std_CancellationContext_new();
v___x_1240_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1240_, 0, v___x_1239_);
v___x_1241_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1241_, 0, v___x_1240_);
v___x_1242_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_1237_, v___x_1238_, v___x_1241_, v___f_1236_);
return v___x_1242_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_disown___boxed(lean_object* v_00_u03b1_1243_, lean_object* v_action_1244_, lean_object* v_prio_1245_, lean_object* v___y_1246_, lean_object* v___y_1247_){
_start:
{
lean_object* v_res_1248_; 
v_res_1248_ = l_Std_Async_ContextAsync_disown(v_00_u03b1_1243_, v_action_1244_, v_prio_1245_, v___y_1246_);
lean_dec_ref(v___y_1246_);
return v_res_1248_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_raceAll___redArg___lam__0(lean_object* v_a_1249_){
_start:
{
lean_object* v___x_1250_; 
v___x_1250_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1250_, 0, v_a_1249_);
return v___x_1250_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_raceAll___redArg___lam__2(lean_object* v_a_1251_, lean_object* v_x_1252_){
_start:
{
if (lean_obj_tag(v_x_1252_) == 0)
{
lean_object* v_a_1254_; lean_object* v___x_1256_; uint8_t v_isShared_1257_; uint8_t v_isSharedCheck_1262_; 
lean_dec_ref(v_a_1251_);
v_a_1254_ = lean_ctor_get(v_x_1252_, 0);
v_isSharedCheck_1262_ = !lean_is_exclusive(v_x_1252_);
if (v_isSharedCheck_1262_ == 0)
{
v___x_1256_ = v_x_1252_;
v_isShared_1257_ = v_isSharedCheck_1262_;
goto v_resetjp_1255_;
}
else
{
lean_inc(v_a_1254_);
lean_dec(v_x_1252_);
v___x_1256_ = lean_box(0);
v_isShared_1257_ = v_isSharedCheck_1262_;
goto v_resetjp_1255_;
}
v_resetjp_1255_:
{
lean_object* v___x_1259_; 
if (v_isShared_1257_ == 0)
{
v___x_1259_ = v___x_1256_;
goto v_reusejp_1258_;
}
else
{
lean_object* v_reuseFailAlloc_1261_; 
v_reuseFailAlloc_1261_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1261_, 0, v_a_1254_);
v___x_1259_ = v_reuseFailAlloc_1261_;
goto v_reusejp_1258_;
}
v_reusejp_1258_:
{
lean_object* v___x_1260_; 
v___x_1260_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1260_, 0, v___x_1259_);
return v___x_1260_;
}
}
}
else
{
lean_object* v___x_1263_; 
lean_dec_ref_known(v_x_1252_, 1);
v___x_1263_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1263_, 0, v_a_1251_);
return v___x_1263_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_raceAll___redArg___lam__2___boxed(lean_object* v_a_1264_, lean_object* v_x_1265_, lean_object* v___y_1266_){
_start:
{
lean_object* v_res_1267_; 
v_res_1267_ = l_Std_Async_ContextAsync_raceAll___redArg___lam__2(v_a_1264_, v_x_1265_);
return v_res_1267_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_raceAll___redArg___lam__1(lean_object* v_a_1268_, lean_object* v_x_1269_){
_start:
{
if (lean_obj_tag(v_x_1269_) == 0)
{
lean_object* v_a_1271_; lean_object* v___x_1273_; uint8_t v_isShared_1274_; uint8_t v_isSharedCheck_1279_; 
lean_dec_ref(v_a_1268_);
v_a_1271_ = lean_ctor_get(v_x_1269_, 0);
v_isSharedCheck_1279_ = !lean_is_exclusive(v_x_1269_);
if (v_isSharedCheck_1279_ == 0)
{
v___x_1273_ = v_x_1269_;
v_isShared_1274_ = v_isSharedCheck_1279_;
goto v_resetjp_1272_;
}
else
{
lean_inc(v_a_1271_);
lean_dec(v_x_1269_);
v___x_1273_ = lean_box(0);
v_isShared_1274_ = v_isSharedCheck_1279_;
goto v_resetjp_1272_;
}
v_resetjp_1272_:
{
lean_object* v___x_1276_; 
if (v_isShared_1274_ == 0)
{
v___x_1276_ = v___x_1273_;
goto v_reusejp_1275_;
}
else
{
lean_object* v_reuseFailAlloc_1278_; 
v_reuseFailAlloc_1278_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1278_, 0, v_a_1271_);
v___x_1276_ = v_reuseFailAlloc_1278_;
goto v_reusejp_1275_;
}
v_reusejp_1275_:
{
lean_object* v___x_1277_; 
v___x_1277_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1277_, 0, v___x_1276_);
return v___x_1277_;
}
}
}
else
{
lean_object* v_a_1280_; lean_object* v___x_1282_; uint8_t v_isShared_1283_; uint8_t v_isSharedCheck_1294_; 
v_a_1280_ = lean_ctor_get(v_x_1269_, 0);
v_isSharedCheck_1294_ = !lean_is_exclusive(v_x_1269_);
if (v_isSharedCheck_1294_ == 0)
{
v___x_1282_ = v_x_1269_;
v_isShared_1283_ = v_isSharedCheck_1294_;
goto v_resetjp_1281_;
}
else
{
lean_inc(v_a_1280_);
lean_dec(v_x_1269_);
v___x_1282_ = lean_box(0);
v_isShared_1283_ = v_isSharedCheck_1294_;
goto v_resetjp_1281_;
}
v_resetjp_1281_:
{
lean_object* v___f_1284_; lean_object* v___x_1285_; lean_object* v___x_1286_; uint8_t v___x_1287_; lean_object* v___x_1288_; lean_object* v___x_1290_; 
v___f_1284_ = lean_alloc_closure((void*)(l_Std_Async_ContextAsync_raceAll___redArg___lam__2___boxed), 3, 1);
lean_closure_set(v___f_1284_, 0, v_a_1280_);
v___x_1285_ = lean_box(2);
v___x_1286_ = lean_unsigned_to_nat(0u);
v___x_1287_ = 0;
v___x_1288_ = l_Std_CancellationContext_cancel(v_a_1268_, v___x_1285_);
if (v_isShared_1283_ == 0)
{
lean_ctor_set(v___x_1282_, 0, v___x_1288_);
v___x_1290_ = v___x_1282_;
goto v_reusejp_1289_;
}
else
{
lean_object* v_reuseFailAlloc_1293_; 
v_reuseFailAlloc_1293_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1293_, 0, v___x_1288_);
v___x_1290_ = v_reuseFailAlloc_1293_;
goto v_reusejp_1289_;
}
v_reusejp_1289_:
{
lean_object* v___x_1291_; lean_object* v___x_1292_; 
v___x_1291_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1291_, 0, v___x_1290_);
v___x_1292_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_1286_, v___x_1287_, v___x_1291_, v___f_1284_);
return v___x_1292_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_raceAll___redArg___lam__1___boxed(lean_object* v_a_1295_, lean_object* v_x_1296_, lean_object* v___y_1297_){
_start:
{
lean_object* v_res_1298_; 
v_res_1298_ = l_Std_Async_ContextAsync_raceAll___redArg___lam__1(v_a_1295_, v_x_1296_);
return v_res_1298_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_raceAll___redArg___lam__3(lean_object* v_a_1299_, lean_object* v_x_1300_){
_start:
{
if (lean_obj_tag(v_x_1300_) == 0)
{
lean_object* v_a_1302_; lean_object* v___x_1304_; uint8_t v_isShared_1305_; uint8_t v_isSharedCheck_1310_; 
v_a_1302_ = lean_ctor_get(v_x_1300_, 0);
v_isSharedCheck_1310_ = !lean_is_exclusive(v_x_1300_);
if (v_isSharedCheck_1310_ == 0)
{
v___x_1304_ = v_x_1300_;
v_isShared_1305_ = v_isSharedCheck_1310_;
goto v_resetjp_1303_;
}
else
{
lean_inc(v_a_1302_);
lean_dec(v_x_1300_);
v___x_1304_ = lean_box(0);
v_isShared_1305_ = v_isSharedCheck_1310_;
goto v_resetjp_1303_;
}
v_resetjp_1303_:
{
lean_object* v___x_1307_; 
if (v_isShared_1305_ == 0)
{
v___x_1307_ = v___x_1304_;
goto v_reusejp_1306_;
}
else
{
lean_object* v_reuseFailAlloc_1309_; 
v_reuseFailAlloc_1309_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1309_, 0, v_a_1302_);
v___x_1307_ = v_reuseFailAlloc_1309_;
goto v_reusejp_1306_;
}
v_reusejp_1306_:
{
lean_object* v___x_1308_; 
v___x_1308_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1308_, 0, v___x_1307_);
return v___x_1308_;
}
}
}
else
{
lean_object* v___x_1311_; lean_object* v___x_1312_; lean_object* v___x_1313_; 
v___x_1311_ = lean_io_promise_resolve(v_x_1300_, v_a_1299_);
v___x_1312_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1312_, 0, v___x_1311_);
v___x_1313_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1313_, 0, v___x_1312_);
return v___x_1313_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_raceAll___redArg___lam__3___boxed(lean_object* v_a_1314_, lean_object* v_x_1315_, lean_object* v___y_1316_){
_start:
{
lean_object* v_res_1317_; 
v_res_1317_ = l_Std_Async_ContextAsync_raceAll___redArg___lam__3(v_a_1314_, v_x_1315_);
lean_dec(v_a_1314_);
return v_res_1317_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_raceAll___redArg___lam__4(lean_object* v_a_1318_, lean_object* v_x_1319_){
_start:
{
if (lean_obj_tag(v_x_1319_) == 0)
{
lean_object* v_a_1321_; lean_object* v___x_1323_; uint8_t v_isShared_1324_; uint8_t v_isSharedCheck_1330_; 
v_a_1321_ = lean_ctor_get(v_x_1319_, 0);
v_isSharedCheck_1330_ = !lean_is_exclusive(v_x_1319_);
if (v_isSharedCheck_1330_ == 0)
{
v___x_1323_ = v_x_1319_;
v_isShared_1324_ = v_isSharedCheck_1330_;
goto v_resetjp_1322_;
}
else
{
lean_inc(v_a_1321_);
lean_dec(v_x_1319_);
v___x_1323_ = lean_box(0);
v_isShared_1324_ = v_isSharedCheck_1330_;
goto v_resetjp_1322_;
}
v_resetjp_1322_:
{
lean_object* v___x_1326_; 
if (v_isShared_1324_ == 0)
{
v___x_1326_ = v___x_1323_;
goto v_reusejp_1325_;
}
else
{
lean_object* v_reuseFailAlloc_1329_; 
v_reuseFailAlloc_1329_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1329_, 0, v_a_1321_);
v___x_1326_ = v_reuseFailAlloc_1329_;
goto v_reusejp_1325_;
}
v_reusejp_1325_:
{
lean_object* v___x_1327_; lean_object* v___x_1328_; 
v___x_1327_ = lean_io_promise_resolve(v___x_1326_, v_a_1318_);
v___x_1328_ = ((lean_object*)(l_Std_Async_ContextAsync_background___redArg___lam__2___closed__1));
return v___x_1328_;
}
}
}
else
{
lean_object* v___x_1331_; 
v___x_1331_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1331_, 0, v_x_1319_);
return v___x_1331_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_raceAll___redArg___lam__4___boxed(lean_object* v_a_1332_, lean_object* v_x_1333_, lean_object* v___y_1334_){
_start:
{
lean_object* v_res_1335_; 
v_res_1335_ = l_Std_Async_ContextAsync_raceAll___redArg___lam__4(v_a_1332_, v_x_1333_);
lean_dec(v_a_1332_);
return v_res_1335_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_raceAll___redArg___lam__5(lean_object* v_a_1336_, lean_object* v_x_1337_){
_start:
{
if (lean_obj_tag(v_x_1337_) == 0)
{
lean_object* v___x_1339_; 
lean_dec_ref(v_a_1336_);
v___x_1339_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1339_, 0, v_x_1337_);
return v___x_1339_;
}
else
{
lean_object* v___x_1341_; uint8_t v_isShared_1342_; uint8_t v_isSharedCheck_1349_; 
v_isSharedCheck_1349_ = !lean_is_exclusive(v_x_1337_);
if (v_isSharedCheck_1349_ == 0)
{
lean_object* v_unused_1350_; 
v_unused_1350_ = lean_ctor_get(v_x_1337_, 0);
lean_dec(v_unused_1350_);
v___x_1341_ = v_x_1337_;
v_isShared_1342_ = v_isSharedCheck_1349_;
goto v_resetjp_1340_;
}
else
{
lean_dec(v_x_1337_);
v___x_1341_ = lean_box(0);
v_isShared_1342_ = v_isSharedCheck_1349_;
goto v_resetjp_1340_;
}
v_resetjp_1340_:
{
lean_object* v___x_1343_; lean_object* v___x_1344_; lean_object* v___x_1346_; 
v___x_1343_ = lean_box(2);
v___x_1344_ = l_Std_CancellationContext_cancel(v_a_1336_, v___x_1343_);
if (v_isShared_1342_ == 0)
{
lean_ctor_set(v___x_1341_, 0, v___x_1344_);
v___x_1346_ = v___x_1341_;
goto v_reusejp_1345_;
}
else
{
lean_object* v_reuseFailAlloc_1348_; 
v_reuseFailAlloc_1348_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1348_, 0, v___x_1344_);
v___x_1346_ = v_reuseFailAlloc_1348_;
goto v_reusejp_1345_;
}
v_reusejp_1345_:
{
lean_object* v___x_1347_; 
v___x_1347_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1347_, 0, v___x_1346_);
return v___x_1347_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_raceAll___redArg___lam__5___boxed(lean_object* v_a_1351_, lean_object* v_x_1352_, lean_object* v___y_1353_){
_start:
{
lean_object* v_res_1354_; 
v_res_1354_ = l_Std_Async_ContextAsync_raceAll___redArg___lam__5(v_a_1351_, v_x_1352_);
return v_res_1354_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_raceAll___redArg___lam__6(lean_object* v_a_1355_, lean_object* v___x_1356_, lean_object* v___f_1357_, lean_object* v___f_1358_, lean_object* v___f_1359_){
_start:
{
uint8_t v___x_1361_; lean_object* v___x_1362_; lean_object* v___x_1363_; lean_object* v___x_1364_; lean_object* v___x_1365_; 
v___x_1361_ = 0;
v___x_1362_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1362_, 0, v_a_1355_);
lean_inc_n(v___x_1356_, 2);
v___x_1363_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_1356_, v___x_1361_, v___x_1362_, v___f_1357_);
v___x_1364_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_1356_, v___x_1361_, v___x_1363_, v___f_1358_);
v___x_1365_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_1356_, v___x_1361_, v___x_1364_, v___f_1359_);
return v___x_1365_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_raceAll___redArg___lam__6___boxed(lean_object* v_a_1366_, lean_object* v___x_1367_, lean_object* v___f_1368_, lean_object* v___f_1369_, lean_object* v___f_1370_, lean_object* v___y_1371_){
_start:
{
lean_object* v_res_1372_; 
v_res_1372_ = l_Std_Async_ContextAsync_raceAll___redArg___lam__6(v_a_1366_, v___x_1367_, v___f_1368_, v___f_1369_, v___f_1370_);
return v_res_1372_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_raceAll___redArg___lam__7(lean_object* v_a_1373_, lean_object* v___x_1374_, lean_object* v___f_1375_, lean_object* v___f_1376_, lean_object* v_x_1377_){
_start:
{
if (lean_obj_tag(v_x_1377_) == 0)
{
lean_object* v_a_1379_; lean_object* v___x_1381_; uint8_t v_isShared_1382_; uint8_t v_isSharedCheck_1387_; 
lean_dec_ref(v___f_1376_);
lean_dec_ref(v___f_1375_);
lean_dec(v___x_1374_);
lean_dec_ref(v_a_1373_);
v_a_1379_ = lean_ctor_get(v_x_1377_, 0);
v_isSharedCheck_1387_ = !lean_is_exclusive(v_x_1377_);
if (v_isSharedCheck_1387_ == 0)
{
v___x_1381_ = v_x_1377_;
v_isShared_1382_ = v_isSharedCheck_1387_;
goto v_resetjp_1380_;
}
else
{
lean_inc(v_a_1379_);
lean_dec(v_x_1377_);
v___x_1381_ = lean_box(0);
v_isShared_1382_ = v_isSharedCheck_1387_;
goto v_resetjp_1380_;
}
v_resetjp_1380_:
{
lean_object* v___x_1384_; 
if (v_isShared_1382_ == 0)
{
v___x_1384_ = v___x_1381_;
goto v_reusejp_1383_;
}
else
{
lean_object* v_reuseFailAlloc_1386_; 
v_reuseFailAlloc_1386_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1386_, 0, v_a_1379_);
v___x_1384_ = v_reuseFailAlloc_1386_;
goto v_reusejp_1383_;
}
v_reusejp_1383_:
{
lean_object* v___x_1385_; 
v___x_1385_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1385_, 0, v___x_1384_);
return v___x_1385_;
}
}
}
else
{
lean_object* v_a_1388_; lean_object* v___f_1389_; lean_object* v___f_1390_; lean_object* v___x_1391_; lean_object* v___x_1392_; lean_object* v___x_1393_; lean_object* v___x_1394_; 
v_a_1388_ = lean_ctor_get(v_x_1377_, 0);
lean_inc(v_a_1388_);
lean_dec_ref_known(v_x_1377_, 1);
v___f_1389_ = lean_alloc_closure((void*)(l_Std_Async_ContextAsync_raceAll___redArg___lam__5___boxed), 3, 1);
lean_closure_set(v___f_1389_, 0, v_a_1388_);
lean_inc(v___x_1374_);
v___f_1390_ = lean_alloc_closure((void*)(l_Std_Async_ContextAsync_raceAll___redArg___lam__6___boxed), 6, 5);
lean_closure_set(v___f_1390_, 0, v_a_1373_);
lean_closure_set(v___f_1390_, 1, v___x_1374_);
lean_closure_set(v___f_1390_, 2, v___f_1375_);
lean_closure_set(v___f_1390_, 3, v___f_1376_);
lean_closure_set(v___f_1390_, 4, v___f_1389_);
v___x_1391_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_toBaseAsync___boxed), 4, 3);
lean_closure_set(v___x_1391_, 0, lean_box(0));
lean_closure_set(v___x_1391_, 1, lean_box(0));
lean_closure_set(v___x_1391_, 2, v___f_1390_);
v___x_1392_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_toRawBaseIO___boxed), 3, 2);
lean_closure_set(v___x_1392_, 0, lean_box(0));
lean_closure_set(v___x_1392_, 1, v___x_1391_);
v___x_1393_ = lean_io_as_task(v___x_1392_, v___x_1374_);
lean_dec_ref(v___x_1393_);
v___x_1394_ = ((lean_object*)(l_Std_Async_ContextAsync_background___redArg___lam__2___closed__1));
return v___x_1394_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_raceAll___redArg___lam__7___boxed(lean_object* v_a_1395_, lean_object* v___x_1396_, lean_object* v___f_1397_, lean_object* v___f_1398_, lean_object* v_x_1399_, lean_object* v___y_1400_){
_start:
{
lean_object* v_res_1401_; 
v_res_1401_ = l_Std_Async_ContextAsync_raceAll___redArg___lam__7(v_a_1395_, v___x_1396_, v___f_1397_, v___f_1398_, v_x_1399_);
return v_res_1401_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_raceAll___redArg___lam__8(lean_object* v___x_1402_, lean_object* v___f_1403_, lean_object* v_x_1404_){
_start:
{
if (lean_obj_tag(v_x_1404_) == 0)
{
lean_object* v_a_1406_; lean_object* v___x_1408_; uint8_t v_isShared_1409_; uint8_t v_isSharedCheck_1414_; 
lean_dec_ref(v___f_1403_);
lean_dec(v___x_1402_);
v_a_1406_ = lean_ctor_get(v_x_1404_, 0);
v_isSharedCheck_1414_ = !lean_is_exclusive(v_x_1404_);
if (v_isSharedCheck_1414_ == 0)
{
v___x_1408_ = v_x_1404_;
v_isShared_1409_ = v_isSharedCheck_1414_;
goto v_resetjp_1407_;
}
else
{
lean_inc(v_a_1406_);
lean_dec(v_x_1404_);
v___x_1408_ = lean_box(0);
v_isShared_1409_ = v_isSharedCheck_1414_;
goto v_resetjp_1407_;
}
v_resetjp_1407_:
{
lean_object* v___x_1411_; 
if (v_isShared_1409_ == 0)
{
v___x_1411_ = v___x_1408_;
goto v_reusejp_1410_;
}
else
{
lean_object* v_reuseFailAlloc_1413_; 
v_reuseFailAlloc_1413_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1413_, 0, v_a_1406_);
v___x_1411_ = v_reuseFailAlloc_1413_;
goto v_reusejp_1410_;
}
v_reusejp_1410_:
{
lean_object* v___x_1412_; 
v___x_1412_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1412_, 0, v___x_1411_);
return v___x_1412_;
}
}
}
else
{
lean_object* v_a_1415_; lean_object* v___x_1417_; uint8_t v_isShared_1418_; uint8_t v_isSharedCheck_1426_; 
v_a_1415_ = lean_ctor_get(v_x_1404_, 0);
v_isSharedCheck_1426_ = !lean_is_exclusive(v_x_1404_);
if (v_isSharedCheck_1426_ == 0)
{
v___x_1417_ = v_x_1404_;
v_isShared_1418_ = v_isSharedCheck_1426_;
goto v_resetjp_1416_;
}
else
{
lean_inc(v_a_1415_);
lean_dec(v_x_1404_);
v___x_1417_ = lean_box(0);
v_isShared_1418_ = v_isSharedCheck_1426_;
goto v_resetjp_1416_;
}
v_resetjp_1416_:
{
uint8_t v___x_1419_; lean_object* v___x_1420_; lean_object* v___x_1422_; 
v___x_1419_ = 0;
v___x_1420_ = l_Std_CancellationContext_fork(v_a_1415_);
if (v_isShared_1418_ == 0)
{
lean_ctor_set(v___x_1417_, 0, v___x_1420_);
v___x_1422_ = v___x_1417_;
goto v_reusejp_1421_;
}
else
{
lean_object* v_reuseFailAlloc_1425_; 
v_reuseFailAlloc_1425_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1425_, 0, v___x_1420_);
v___x_1422_ = v_reuseFailAlloc_1425_;
goto v_reusejp_1421_;
}
v_reusejp_1421_:
{
lean_object* v___x_1423_; lean_object* v___x_1424_; 
v___x_1423_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1423_, 0, v___x_1422_);
v___x_1424_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_1402_, v___x_1419_, v___x_1423_, v___f_1403_);
return v___x_1424_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_raceAll___redArg___lam__8___boxed(lean_object* v___x_1427_, lean_object* v___f_1428_, lean_object* v_x_1429_, lean_object* v___y_1430_){
_start:
{
lean_object* v_res_1431_; 
v_res_1431_ = l_Std_Async_ContextAsync_raceAll___redArg___lam__8(v___x_1427_, v___f_1428_, v_x_1429_);
return v_res_1431_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_raceAll___redArg___lam__9(lean_object* v___f_1432_, lean_object* v___f_1433_, lean_object* v___y_1434_, lean_object* v_x_1435_){
_start:
{
if (lean_obj_tag(v_x_1435_) == 0)
{
lean_object* v_a_1437_; lean_object* v___x_1439_; uint8_t v_isShared_1440_; uint8_t v_isSharedCheck_1445_; 
lean_dec_ref(v___f_1433_);
lean_dec_ref(v___f_1432_);
v_a_1437_ = lean_ctor_get(v_x_1435_, 0);
v_isSharedCheck_1445_ = !lean_is_exclusive(v_x_1435_);
if (v_isSharedCheck_1445_ == 0)
{
v___x_1439_ = v_x_1435_;
v_isShared_1440_ = v_isSharedCheck_1445_;
goto v_resetjp_1438_;
}
else
{
lean_inc(v_a_1437_);
lean_dec(v_x_1435_);
v___x_1439_ = lean_box(0);
v_isShared_1440_ = v_isSharedCheck_1445_;
goto v_resetjp_1438_;
}
v_resetjp_1438_:
{
lean_object* v___x_1442_; 
if (v_isShared_1440_ == 0)
{
v___x_1442_ = v___x_1439_;
goto v_reusejp_1441_;
}
else
{
lean_object* v_reuseFailAlloc_1444_; 
v_reuseFailAlloc_1444_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1444_, 0, v_a_1437_);
v___x_1442_ = v_reuseFailAlloc_1444_;
goto v_reusejp_1441_;
}
v_reusejp_1441_:
{
lean_object* v___x_1443_; 
v___x_1443_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1443_, 0, v___x_1442_);
return v___x_1443_;
}
}
}
else
{
lean_object* v_a_1446_; lean_object* v___x_1448_; uint8_t v_isShared_1449_; uint8_t v_isSharedCheck_1459_; 
v_a_1446_ = lean_ctor_get(v_x_1435_, 0);
v_isSharedCheck_1459_ = !lean_is_exclusive(v_x_1435_);
if (v_isSharedCheck_1459_ == 0)
{
v___x_1448_ = v_x_1435_;
v_isShared_1449_ = v_isSharedCheck_1459_;
goto v_resetjp_1447_;
}
else
{
lean_inc(v_a_1446_);
lean_dec(v_x_1435_);
v___x_1448_ = lean_box(0);
v_isShared_1449_ = v_isSharedCheck_1459_;
goto v_resetjp_1447_;
}
v_resetjp_1447_:
{
lean_object* v___x_1450_; lean_object* v___f_1451_; lean_object* v___f_1452_; uint8_t v___x_1453_; lean_object* v___x_1455_; 
v___x_1450_ = lean_unsigned_to_nat(0u);
v___f_1451_ = lean_alloc_closure((void*)(l_Std_Async_ContextAsync_raceAll___redArg___lam__7___boxed), 6, 4);
lean_closure_set(v___f_1451_, 0, v_a_1446_);
lean_closure_set(v___f_1451_, 1, v___x_1450_);
lean_closure_set(v___f_1451_, 2, v___f_1432_);
lean_closure_set(v___f_1451_, 3, v___f_1433_);
v___f_1452_ = lean_alloc_closure((void*)(l_Std_Async_ContextAsync_raceAll___redArg___lam__8___boxed), 4, 2);
lean_closure_set(v___f_1452_, 0, v___x_1450_);
lean_closure_set(v___f_1452_, 1, v___f_1451_);
v___x_1453_ = 0;
lean_inc_ref(v___y_1434_);
if (v_isShared_1449_ == 0)
{
lean_ctor_set(v___x_1448_, 0, v___y_1434_);
v___x_1455_ = v___x_1448_;
goto v_reusejp_1454_;
}
else
{
lean_object* v_reuseFailAlloc_1458_; 
v_reuseFailAlloc_1458_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1458_, 0, v___y_1434_);
v___x_1455_ = v_reuseFailAlloc_1458_;
goto v_reusejp_1454_;
}
v_reusejp_1454_:
{
lean_object* v___x_1456_; lean_object* v___x_1457_; 
v___x_1456_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1456_, 0, v___x_1455_);
v___x_1457_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_1450_, v___x_1453_, v___x_1456_, v___f_1452_);
return v___x_1457_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_raceAll___redArg___lam__9___boxed(lean_object* v___f_1460_, lean_object* v___f_1461_, lean_object* v___y_1462_, lean_object* v_x_1463_, lean_object* v___y_1464_){
_start:
{
lean_object* v_res_1465_; 
v_res_1465_ = l_Std_Async_ContextAsync_raceAll___redArg___lam__9(v___f_1460_, v___f_1461_, v___y_1462_, v_x_1463_);
lean_dec_ref(v___y_1462_);
return v_res_1465_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_raceAll___redArg___lam__10(lean_object* v_x_1466_, lean_object* v_a_1467_){
_start:
{
lean_object* v___x_1469_; 
v___x_1469_ = lean_apply_2(v_x_1466_, v_a_1467_, lean_box(0));
return v___x_1469_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_raceAll___redArg___lam__10___boxed(lean_object* v_x_1470_, lean_object* v_a_1471_, lean_object* v___y_1472_){
_start:
{
lean_object* v_res_1473_; 
v_res_1473_ = l_Std_Async_ContextAsync_raceAll___redArg___lam__10(v_x_1470_, v_a_1471_);
return v_res_1473_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_raceAll___redArg___lam__11(lean_object* v_x_1474_, lean_object* v_prio_1475_, lean_object* v___f_1476_, lean_object* v___f_1477_, lean_object* v_x_1478_){
_start:
{
if (lean_obj_tag(v_x_1478_) == 0)
{
lean_object* v_a_1480_; lean_object* v___x_1482_; uint8_t v_isShared_1483_; uint8_t v_isSharedCheck_1488_; 
lean_dec_ref(v___f_1477_);
lean_dec_ref(v___f_1476_);
lean_dec(v_prio_1475_);
lean_dec_ref(v_x_1474_);
v_a_1480_ = lean_ctor_get(v_x_1478_, 0);
v_isSharedCheck_1488_ = !lean_is_exclusive(v_x_1478_);
if (v_isSharedCheck_1488_ == 0)
{
v___x_1482_ = v_x_1478_;
v_isShared_1483_ = v_isSharedCheck_1488_;
goto v_resetjp_1481_;
}
else
{
lean_inc(v_a_1480_);
lean_dec(v_x_1478_);
v___x_1482_ = lean_box(0);
v_isShared_1483_ = v_isSharedCheck_1488_;
goto v_resetjp_1481_;
}
v_resetjp_1481_:
{
lean_object* v___x_1485_; 
if (v_isShared_1483_ == 0)
{
v___x_1485_ = v___x_1482_;
goto v_reusejp_1484_;
}
else
{
lean_object* v_reuseFailAlloc_1487_; 
v_reuseFailAlloc_1487_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1487_, 0, v_a_1480_);
v___x_1485_ = v_reuseFailAlloc_1487_;
goto v_reusejp_1484_;
}
v_reusejp_1484_:
{
lean_object* v___x_1486_; 
v___x_1486_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1486_, 0, v___x_1485_);
return v___x_1486_;
}
}
}
else
{
lean_object* v_a_1489_; lean_object* v___x_1491_; uint8_t v_isShared_1492_; uint8_t v_isSharedCheck_1506_; 
v_a_1489_ = lean_ctor_get(v_x_1478_, 0);
v_isSharedCheck_1506_ = !lean_is_exclusive(v_x_1478_);
if (v_isSharedCheck_1506_ == 0)
{
v___x_1491_ = v_x_1478_;
v_isShared_1492_ = v_isSharedCheck_1506_;
goto v_resetjp_1490_;
}
else
{
lean_inc(v_a_1489_);
lean_dec(v_x_1478_);
v___x_1491_ = lean_box(0);
v_isShared_1492_ = v_isSharedCheck_1506_;
goto v_resetjp_1490_;
}
v_resetjp_1490_:
{
lean_object* v___f_1493_; lean_object* v___x_1494_; uint8_t v___x_1495_; lean_object* v___x_1496_; lean_object* v___x_1497_; lean_object* v___x_1498_; uint8_t v___x_1499_; lean_object* v___x_1500_; lean_object* v___x_1502_; 
v___f_1493_ = lean_alloc_closure((void*)(l_Std_Async_ContextAsync_raceAll___redArg___lam__10___boxed), 3, 2);
lean_closure_set(v___f_1493_, 0, v_x_1474_);
lean_closure_set(v___f_1493_, 1, v_a_1489_);
v___x_1494_ = lean_unsigned_to_nat(0u);
v___x_1495_ = 0;
v___x_1496_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_toBaseAsync___boxed), 4, 3);
lean_closure_set(v___x_1496_, 0, lean_box(0));
lean_closure_set(v___x_1496_, 1, lean_box(0));
lean_closure_set(v___x_1496_, 2, v___f_1493_);
v___x_1497_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_toRawBaseIO___boxed), 3, 2);
lean_closure_set(v___x_1497_, 0, lean_box(0));
lean_closure_set(v___x_1497_, 1, v___x_1496_);
v___x_1498_ = lean_io_as_task(v___x_1497_, v_prio_1475_);
v___x_1499_ = 1;
v___x_1500_ = lean_task_bind(v___x_1498_, v___f_1476_, v___x_1494_, v___x_1499_);
if (v_isShared_1492_ == 0)
{
lean_ctor_set(v___x_1491_, 0, v___x_1500_);
v___x_1502_ = v___x_1491_;
goto v_reusejp_1501_;
}
else
{
lean_object* v_reuseFailAlloc_1505_; 
v_reuseFailAlloc_1505_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1505_, 0, v___x_1500_);
v___x_1502_ = v_reuseFailAlloc_1505_;
goto v_reusejp_1501_;
}
v_reusejp_1501_:
{
lean_object* v___x_1503_; lean_object* v___x_1504_; 
v___x_1503_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1503_, 0, v___x_1502_);
v___x_1504_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_1494_, v___x_1495_, v___x_1503_, v___f_1477_);
return v___x_1504_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_raceAll___redArg___lam__11___boxed(lean_object* v_x_1507_, lean_object* v_prio_1508_, lean_object* v___f_1509_, lean_object* v___f_1510_, lean_object* v_x_1511_, lean_object* v___y_1512_){
_start:
{
lean_object* v_res_1513_; 
v_res_1513_ = l_Std_Async_ContextAsync_raceAll___redArg___lam__11(v_x_1507_, v_prio_1508_, v___f_1509_, v___f_1510_, v_x_1511_);
return v_res_1513_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_raceAll___redArg___lam__12(lean_object* v___f_1514_, lean_object* v___f_1515_, lean_object* v_prio_1516_, lean_object* v___f_1517_, lean_object* v_a_1518_, lean_object* v_x_1519_, lean_object* v___y_1520_){
_start:
{
lean_object* v___f_1522_; lean_object* v___f_1523_; lean_object* v___x_1524_; uint8_t v___x_1525_; lean_object* v___x_1526_; lean_object* v___x_1527_; lean_object* v___x_1528_; lean_object* v___x_1529_; 
lean_inc_ref(v___y_1520_);
v___f_1522_ = lean_alloc_closure((void*)(l_Std_Async_ContextAsync_raceAll___redArg___lam__9___boxed), 5, 3);
lean_closure_set(v___f_1522_, 0, v___f_1514_);
lean_closure_set(v___f_1522_, 1, v___f_1515_);
lean_closure_set(v___f_1522_, 2, v___y_1520_);
v___f_1523_ = lean_alloc_closure((void*)(l_Std_Async_ContextAsync_raceAll___redArg___lam__11___boxed), 6, 4);
lean_closure_set(v___f_1523_, 0, v_x_1519_);
lean_closure_set(v___f_1523_, 1, v_prio_1516_);
lean_closure_set(v___f_1523_, 2, v___f_1517_);
lean_closure_set(v___f_1523_, 3, v___f_1522_);
v___x_1524_ = lean_unsigned_to_nat(0u);
v___x_1525_ = 0;
v___x_1526_ = l_Std_CancellationContext_fork(v_a_1518_);
v___x_1527_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1527_, 0, v___x_1526_);
v___x_1528_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1528_, 0, v___x_1527_);
v___x_1529_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_1524_, v___x_1525_, v___x_1528_, v___f_1523_);
return v___x_1529_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_raceAll___redArg___lam__12___boxed(lean_object* v___f_1530_, lean_object* v___f_1531_, lean_object* v_prio_1532_, lean_object* v___f_1533_, lean_object* v_a_1534_, lean_object* v_x_1535_, lean_object* v___y_1536_, lean_object* v___y_1537_){
_start:
{
lean_object* v_res_1538_; 
v_res_1538_ = l_Std_Async_ContextAsync_raceAll___redArg___lam__12(v___f_1530_, v___f_1531_, v_prio_1532_, v___f_1533_, v_a_1534_, v_x_1535_, v___y_1536_);
lean_dec_ref(v___y_1536_);
return v_res_1538_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_raceAll___redArg___lam__13(lean_object* v_a_1539_, lean_object* v___f_1540_, lean_object* v___f_1541_, lean_object* v_x_1542_){
_start:
{
if (lean_obj_tag(v_x_1542_) == 0)
{
lean_object* v_a_1544_; lean_object* v___x_1546_; uint8_t v_isShared_1547_; uint8_t v_isSharedCheck_1552_; 
lean_dec_ref(v___f_1541_);
lean_dec_ref(v___f_1540_);
v_a_1544_ = lean_ctor_get(v_x_1542_, 0);
v_isSharedCheck_1552_ = !lean_is_exclusive(v_x_1542_);
if (v_isSharedCheck_1552_ == 0)
{
v___x_1546_ = v_x_1542_;
v_isShared_1547_ = v_isSharedCheck_1552_;
goto v_resetjp_1545_;
}
else
{
lean_inc(v_a_1544_);
lean_dec(v_x_1542_);
v___x_1546_ = lean_box(0);
v_isShared_1547_ = v_isSharedCheck_1552_;
goto v_resetjp_1545_;
}
v_resetjp_1545_:
{
lean_object* v___x_1549_; 
if (v_isShared_1547_ == 0)
{
v___x_1549_ = v___x_1546_;
goto v_reusejp_1548_;
}
else
{
lean_object* v_reuseFailAlloc_1551_; 
v_reuseFailAlloc_1551_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1551_, 0, v_a_1544_);
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
else
{
lean_object* v___x_1553_; uint8_t v___x_1554_; lean_object* v___x_1555_; lean_object* v___x_1556_; lean_object* v___x_1557_; lean_object* v___x_1558_; 
lean_dec_ref_known(v_x_1542_, 1);
v___x_1553_ = lean_unsigned_to_nat(0u);
v___x_1554_ = 0;
v___x_1555_ = l_IO_Promise_result_x21___redArg(v_a_1539_);
v___x_1556_ = lean_task_map(v___f_1540_, v___x_1555_, v___x_1553_, v___x_1554_);
v___x_1557_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1557_, 0, v___x_1556_);
v___x_1558_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_1553_, v___x_1554_, v___x_1557_, v___f_1541_);
return v___x_1558_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_raceAll___redArg___lam__13___boxed(lean_object* v_a_1559_, lean_object* v___f_1560_, lean_object* v___f_1561_, lean_object* v_x_1562_, lean_object* v___y_1563_){
_start:
{
lean_object* v_res_1564_; 
v_res_1564_ = l_Std_Async_ContextAsync_raceAll___redArg___lam__13(v_a_1559_, v___f_1560_, v___f_1561_, v_x_1562_);
lean_dec(v_a_1559_);
return v_res_1564_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_raceAll___redArg___lam__14(lean_object* v_prio_1565_, lean_object* v___f_1566_, lean_object* v_a_1567_, lean_object* v___f_1568_, lean_object* v___f_1569_, lean_object* v_inst_1570_, lean_object* v_xs_1571_, lean_object* v___y_1572_, lean_object* v_x_1573_){
_start:
{
if (lean_obj_tag(v_x_1573_) == 0)
{
lean_object* v_a_1575_; lean_object* v___x_1577_; uint8_t v_isShared_1578_; uint8_t v_isSharedCheck_1583_; 
lean_dec(v_xs_1571_);
lean_dec_ref(v_inst_1570_);
lean_dec_ref(v___f_1569_);
lean_dec_ref(v___f_1568_);
lean_dec_ref(v_a_1567_);
lean_dec_ref(v___f_1566_);
lean_dec(v_prio_1565_);
v_a_1575_ = lean_ctor_get(v_x_1573_, 0);
v_isSharedCheck_1583_ = !lean_is_exclusive(v_x_1573_);
if (v_isSharedCheck_1583_ == 0)
{
v___x_1577_ = v_x_1573_;
v_isShared_1578_ = v_isSharedCheck_1583_;
goto v_resetjp_1576_;
}
else
{
lean_inc(v_a_1575_);
lean_dec(v_x_1573_);
v___x_1577_ = lean_box(0);
v_isShared_1578_ = v_isSharedCheck_1583_;
goto v_resetjp_1576_;
}
v_resetjp_1576_:
{
lean_object* v___x_1580_; 
if (v_isShared_1578_ == 0)
{
v___x_1580_ = v___x_1577_;
goto v_reusejp_1579_;
}
else
{
lean_object* v_reuseFailAlloc_1582_; 
v_reuseFailAlloc_1582_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1582_, 0, v_a_1575_);
v___x_1580_ = v_reuseFailAlloc_1582_;
goto v_reusejp_1579_;
}
v_reusejp_1579_:
{
lean_object* v___x_1581_; 
v___x_1581_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1581_, 0, v___x_1580_);
return v___x_1581_;
}
}
}
else
{
lean_object* v_a_1584_; lean_object* v___f_1585_; lean_object* v___f_1586_; lean_object* v___f_1587_; lean_object* v___f_1588_; lean_object* v___x_1589_; uint8_t v___x_1590_; lean_object* v___x_1591_; lean_object* v___x_1592_; 
v_a_1584_ = lean_ctor_get(v_x_1573_, 0);
lean_inc_n(v_a_1584_, 3);
lean_dec_ref_known(v_x_1573_, 1);
v___f_1585_ = lean_alloc_closure((void*)(l_Std_Async_ContextAsync_raceAll___redArg___lam__3___boxed), 3, 1);
lean_closure_set(v___f_1585_, 0, v_a_1584_);
v___f_1586_ = lean_alloc_closure((void*)(l_Std_Async_ContextAsync_raceAll___redArg___lam__4___boxed), 3, 1);
lean_closure_set(v___f_1586_, 0, v_a_1584_);
v___f_1587_ = lean_alloc_closure((void*)(l_Std_Async_ContextAsync_raceAll___redArg___lam__12___boxed), 8, 5);
lean_closure_set(v___f_1587_, 0, v___f_1585_);
lean_closure_set(v___f_1587_, 1, v___f_1586_);
lean_closure_set(v___f_1587_, 2, v_prio_1565_);
lean_closure_set(v___f_1587_, 3, v___f_1566_);
lean_closure_set(v___f_1587_, 4, v_a_1567_);
v___f_1588_ = lean_alloc_closure((void*)(l_Std_Async_ContextAsync_raceAll___redArg___lam__13___boxed), 5, 3);
lean_closure_set(v___f_1588_, 0, v_a_1584_);
lean_closure_set(v___f_1588_, 1, v___f_1568_);
lean_closure_set(v___f_1588_, 2, v___f_1569_);
v___x_1589_ = lean_unsigned_to_nat(0u);
v___x_1590_ = 0;
lean_inc_ref(v___y_1572_);
v___x_1591_ = lean_apply_4(v_inst_1570_, v_xs_1571_, v___f_1587_, v___y_1572_, lean_box(0));
v___x_1592_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_1589_, v___x_1590_, v___x_1591_, v___f_1588_);
return v___x_1592_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_raceAll___redArg___lam__14___boxed(lean_object* v_prio_1593_, lean_object* v___f_1594_, lean_object* v_a_1595_, lean_object* v___f_1596_, lean_object* v___f_1597_, lean_object* v_inst_1598_, lean_object* v_xs_1599_, lean_object* v___y_1600_, lean_object* v_x_1601_, lean_object* v___y_1602_){
_start:
{
lean_object* v_res_1603_; 
v_res_1603_ = l_Std_Async_ContextAsync_raceAll___redArg___lam__14(v_prio_1593_, v___f_1594_, v_a_1595_, v___f_1596_, v___f_1597_, v_inst_1598_, v_xs_1599_, v___y_1600_, v_x_1601_);
lean_dec_ref(v___y_1600_);
return v_res_1603_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_raceAll___redArg___lam__15(lean_object* v_prio_1604_, lean_object* v___f_1605_, lean_object* v___f_1606_, lean_object* v_inst_1607_, lean_object* v_xs_1608_, lean_object* v___y_1609_, lean_object* v_x_1610_){
_start:
{
if (lean_obj_tag(v_x_1610_) == 0)
{
lean_object* v_a_1612_; lean_object* v___x_1614_; uint8_t v_isShared_1615_; uint8_t v_isSharedCheck_1620_; 
lean_dec(v_xs_1608_);
lean_dec_ref(v_inst_1607_);
lean_dec_ref(v___f_1606_);
lean_dec_ref(v___f_1605_);
lean_dec(v_prio_1604_);
v_a_1612_ = lean_ctor_get(v_x_1610_, 0);
v_isSharedCheck_1620_ = !lean_is_exclusive(v_x_1610_);
if (v_isSharedCheck_1620_ == 0)
{
v___x_1614_ = v_x_1610_;
v_isShared_1615_ = v_isSharedCheck_1620_;
goto v_resetjp_1613_;
}
else
{
lean_inc(v_a_1612_);
lean_dec(v_x_1610_);
v___x_1614_ = lean_box(0);
v_isShared_1615_ = v_isSharedCheck_1620_;
goto v_resetjp_1613_;
}
v_resetjp_1613_:
{
lean_object* v___x_1617_; 
if (v_isShared_1615_ == 0)
{
v___x_1617_ = v___x_1614_;
goto v_reusejp_1616_;
}
else
{
lean_object* v_reuseFailAlloc_1619_; 
v_reuseFailAlloc_1619_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1619_, 0, v_a_1612_);
v___x_1617_ = v_reuseFailAlloc_1619_;
goto v_reusejp_1616_;
}
v_reusejp_1616_:
{
lean_object* v___x_1618_; 
v___x_1618_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1618_, 0, v___x_1617_);
return v___x_1618_;
}
}
}
else
{
lean_object* v_a_1621_; lean_object* v___x_1623_; uint8_t v_isShared_1624_; uint8_t v_isSharedCheck_1635_; 
v_a_1621_ = lean_ctor_get(v_x_1610_, 0);
v_isSharedCheck_1635_ = !lean_is_exclusive(v_x_1610_);
if (v_isSharedCheck_1635_ == 0)
{
v___x_1623_ = v_x_1610_;
v_isShared_1624_ = v_isSharedCheck_1635_;
goto v_resetjp_1622_;
}
else
{
lean_inc(v_a_1621_);
lean_dec(v_x_1610_);
v___x_1623_ = lean_box(0);
v_isShared_1624_ = v_isSharedCheck_1635_;
goto v_resetjp_1622_;
}
v_resetjp_1622_:
{
lean_object* v___f_1625_; lean_object* v___f_1626_; lean_object* v___x_1627_; uint8_t v___x_1628_; lean_object* v___x_1629_; lean_object* v___x_1631_; 
lean_inc(v_a_1621_);
v___f_1625_ = lean_alloc_closure((void*)(l_Std_Async_ContextAsync_raceAll___redArg___lam__1___boxed), 3, 1);
lean_closure_set(v___f_1625_, 0, v_a_1621_);
lean_inc_ref(v___y_1609_);
v___f_1626_ = lean_alloc_closure((void*)(l_Std_Async_ContextAsync_raceAll___redArg___lam__14___boxed), 10, 8);
lean_closure_set(v___f_1626_, 0, v_prio_1604_);
lean_closure_set(v___f_1626_, 1, v___f_1605_);
lean_closure_set(v___f_1626_, 2, v_a_1621_);
lean_closure_set(v___f_1626_, 3, v___f_1606_);
lean_closure_set(v___f_1626_, 4, v___f_1625_);
lean_closure_set(v___f_1626_, 5, v_inst_1607_);
lean_closure_set(v___f_1626_, 6, v_xs_1608_);
lean_closure_set(v___f_1626_, 7, v___y_1609_);
v___x_1627_ = lean_unsigned_to_nat(0u);
v___x_1628_ = 0;
v___x_1629_ = lean_io_promise_new();
if (v_isShared_1624_ == 0)
{
lean_ctor_set(v___x_1623_, 0, v___x_1629_);
v___x_1631_ = v___x_1623_;
goto v_reusejp_1630_;
}
else
{
lean_object* v_reuseFailAlloc_1634_; 
v_reuseFailAlloc_1634_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1634_, 0, v___x_1629_);
v___x_1631_ = v_reuseFailAlloc_1634_;
goto v_reusejp_1630_;
}
v_reusejp_1630_:
{
lean_object* v___x_1632_; lean_object* v___x_1633_; 
v___x_1632_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1632_, 0, v___x_1631_);
v___x_1633_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_1627_, v___x_1628_, v___x_1632_, v___f_1626_);
return v___x_1633_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_raceAll___redArg___lam__15___boxed(lean_object* v_prio_1636_, lean_object* v___f_1637_, lean_object* v___f_1638_, lean_object* v_inst_1639_, lean_object* v_xs_1640_, lean_object* v___y_1641_, lean_object* v_x_1642_, lean_object* v___y_1643_){
_start:
{
lean_object* v_res_1644_; 
v_res_1644_ = l_Std_Async_ContextAsync_raceAll___redArg___lam__15(v_prio_1636_, v___f_1637_, v___f_1638_, v_inst_1639_, v_xs_1640_, v___y_1641_, v_x_1642_);
lean_dec_ref(v___y_1641_);
return v_res_1644_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_raceAll___redArg(lean_object* v_inst_1646_, lean_object* v_xs_1647_, lean_object* v_prio_1648_, lean_object* v___y_1649_){
_start:
{
lean_object* v___f_1651_; lean_object* v___f_1652_; lean_object* v___f_1653_; lean_object* v___x_1654_; uint8_t v___x_1655_; lean_object* v___x_1656_; lean_object* v___x_1657_; lean_object* v___x_1658_; 
v___f_1651_ = ((lean_object*)(l_Std_Async_ContextAsync_raceAll___redArg___closed__0));
v___f_1652_ = ((lean_object*)(l_Std_Async_ContextAsync_concurrently___redArg___closed__0));
lean_inc_ref_n(v___y_1649_, 2);
v___f_1653_ = lean_alloc_closure((void*)(l_Std_Async_ContextAsync_raceAll___redArg___lam__15___boxed), 8, 6);
lean_closure_set(v___f_1653_, 0, v_prio_1648_);
lean_closure_set(v___f_1653_, 1, v___f_1652_);
lean_closure_set(v___f_1653_, 2, v___f_1651_);
lean_closure_set(v___f_1653_, 3, v_inst_1646_);
lean_closure_set(v___f_1653_, 4, v_xs_1647_);
lean_closure_set(v___f_1653_, 5, v___y_1649_);
v___x_1654_ = lean_unsigned_to_nat(0u);
v___x_1655_ = 0;
v___x_1656_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1656_, 0, v___y_1649_);
v___x_1657_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1657_, 0, v___x_1656_);
v___x_1658_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_1654_, v___x_1655_, v___x_1657_, v___f_1653_);
return v___x_1658_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_raceAll___redArg___boxed(lean_object* v_inst_1659_, lean_object* v_xs_1660_, lean_object* v_prio_1661_, lean_object* v___y_1662_, lean_object* v___y_1663_){
_start:
{
lean_object* v_res_1664_; 
v_res_1664_ = l_Std_Async_ContextAsync_raceAll___redArg(v_inst_1659_, v_xs_1660_, v_prio_1661_, v___y_1662_);
lean_dec_ref(v___y_1662_);
return v_res_1664_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_raceAll(lean_object* v_c_1665_, lean_object* v_00_u03b1_1666_, lean_object* v_inst_1667_, lean_object* v_xs_1668_, lean_object* v_prio_1669_, lean_object* v___y_1670_){
_start:
{
lean_object* v___x_1672_; 
v___x_1672_ = l_Std_Async_ContextAsync_raceAll___redArg(v_inst_1667_, v_xs_1668_, v_prio_1669_, v___y_1670_);
return v___x_1672_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_raceAll___boxed(lean_object* v_c_1673_, lean_object* v_00_u03b1_1674_, lean_object* v_inst_1675_, lean_object* v_xs_1676_, lean_object* v_prio_1677_, lean_object* v___y_1678_, lean_object* v___y_1679_){
_start:
{
lean_object* v_res_1680_; 
v_res_1680_ = l_Std_Async_ContextAsync_raceAll(v_c_1673_, v_00_u03b1_1674_, v_inst_1675_, v_xs_1676_, v_prio_1677_, v___y_1678_);
lean_dec_ref(v___y_1678_);
return v_res_1680_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_async___redArg___lam__3(lean_object* v___f_1681_, lean_object* v___x_1682_, lean_object* v___f_1683_){
_start:
{
lean_object* v___x_1685_; lean_object* v___x_1686_; uint8_t v___x_1687_; lean_object* v___x_1688_; lean_object* v___y_1690_; 
v___x_1685_ = lean_alloc_closure((void*)(l_Except_map), 5, 4);
lean_closure_set(v___x_1685_, 0, lean_box(0));
lean_closure_set(v___x_1685_, 1, lean_box(0));
lean_closure_set(v___x_1685_, 2, lean_box(0));
lean_closure_set(v___x_1685_, 3, v___f_1681_);
v___x_1686_ = lean_unsigned_to_nat(0u);
v___x_1687_ = 0;
v___x_1688_ = l_Std_Async_EAsync_tryFinally_x27___redArg(v___x_1682_, v___f_1683_, v___x_1686_, v___x_1687_);
if (lean_obj_tag(v___x_1688_) == 0)
{
lean_object* v_a_1692_; 
lean_dec_ref(v___x_1685_);
v_a_1692_ = lean_ctor_get(v___x_1688_, 0);
lean_inc(v_a_1692_);
lean_dec_ref_known(v___x_1688_, 1);
if (lean_obj_tag(v_a_1692_) == 0)
{
lean_object* v_a_1693_; lean_object* v___x_1695_; uint8_t v_isShared_1696_; uint8_t v_isSharedCheck_1700_; 
v_a_1693_ = lean_ctor_get(v_a_1692_, 0);
v_isSharedCheck_1700_ = !lean_is_exclusive(v_a_1692_);
if (v_isSharedCheck_1700_ == 0)
{
v___x_1695_ = v_a_1692_;
v_isShared_1696_ = v_isSharedCheck_1700_;
goto v_resetjp_1694_;
}
else
{
lean_inc(v_a_1693_);
lean_dec(v_a_1692_);
v___x_1695_ = lean_box(0);
v_isShared_1696_ = v_isSharedCheck_1700_;
goto v_resetjp_1694_;
}
v_resetjp_1694_:
{
lean_object* v___x_1698_; 
if (v_isShared_1696_ == 0)
{
v___x_1698_ = v___x_1695_;
goto v_reusejp_1697_;
}
else
{
lean_object* v_reuseFailAlloc_1699_; 
v_reuseFailAlloc_1699_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1699_, 0, v_a_1693_);
v___x_1698_ = v_reuseFailAlloc_1699_;
goto v_reusejp_1697_;
}
v_reusejp_1697_:
{
v___y_1690_ = v___x_1698_;
goto v___jp_1689_;
}
}
}
else
{
lean_object* v_a_1701_; lean_object* v___x_1703_; uint8_t v_isShared_1704_; uint8_t v_isSharedCheck_1709_; 
v_a_1701_ = lean_ctor_get(v_a_1692_, 0);
v_isSharedCheck_1709_ = !lean_is_exclusive(v_a_1692_);
if (v_isSharedCheck_1709_ == 0)
{
v___x_1703_ = v_a_1692_;
v_isShared_1704_ = v_isSharedCheck_1709_;
goto v_resetjp_1702_;
}
else
{
lean_inc(v_a_1701_);
lean_dec(v_a_1692_);
v___x_1703_ = lean_box(0);
v_isShared_1704_ = v_isSharedCheck_1709_;
goto v_resetjp_1702_;
}
v_resetjp_1702_:
{
lean_object* v_fst_1705_; lean_object* v___x_1707_; 
v_fst_1705_ = lean_ctor_get(v_a_1701_, 0);
lean_inc(v_fst_1705_);
lean_dec(v_a_1701_);
if (v_isShared_1704_ == 0)
{
lean_ctor_set(v___x_1703_, 0, v_fst_1705_);
v___x_1707_ = v___x_1703_;
goto v_reusejp_1706_;
}
else
{
lean_object* v_reuseFailAlloc_1708_; 
v_reuseFailAlloc_1708_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1708_, 0, v_fst_1705_);
v___x_1707_ = v_reuseFailAlloc_1708_;
goto v_reusejp_1706_;
}
v_reusejp_1706_:
{
v___y_1690_ = v___x_1707_;
goto v___jp_1689_;
}
}
}
}
else
{
lean_object* v_a_1710_; lean_object* v___x_1712_; uint8_t v_isShared_1713_; uint8_t v_isSharedCheck_1718_; 
v_a_1710_ = lean_ctor_get(v___x_1688_, 0);
v_isSharedCheck_1718_ = !lean_is_exclusive(v___x_1688_);
if (v_isSharedCheck_1718_ == 0)
{
v___x_1712_ = v___x_1688_;
v_isShared_1713_ = v_isSharedCheck_1718_;
goto v_resetjp_1711_;
}
else
{
lean_inc(v_a_1710_);
lean_dec(v___x_1688_);
v___x_1712_ = lean_box(0);
v_isShared_1713_ = v_isSharedCheck_1718_;
goto v_resetjp_1711_;
}
v_resetjp_1711_:
{
lean_object* v___x_1714_; lean_object* v___x_1716_; 
v___x_1714_ = lean_task_map(v___x_1685_, v_a_1710_, v___x_1686_, v___x_1687_);
if (v_isShared_1713_ == 0)
{
lean_ctor_set(v___x_1712_, 0, v___x_1714_);
v___x_1716_ = v___x_1712_;
goto v_reusejp_1715_;
}
else
{
lean_object* v_reuseFailAlloc_1717_; 
v_reuseFailAlloc_1717_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1717_, 0, v___x_1714_);
v___x_1716_ = v_reuseFailAlloc_1717_;
goto v_reusejp_1715_;
}
v_reusejp_1715_:
{
return v___x_1716_;
}
}
}
v___jp_1689_:
{
lean_object* v___x_1691_; 
v___x_1691_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1691_, 0, v___y_1690_);
return v___x_1691_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_async___redArg___lam__3___boxed(lean_object* v___f_1719_, lean_object* v___x_1720_, lean_object* v___f_1721_, lean_object* v___y_1722_){
_start:
{
lean_object* v_res_1723_; 
v_res_1723_ = l_Std_Async_ContextAsync_async___redArg___lam__3(v___f_1719_, v___x_1720_, v___f_1721_);
return v_res_1723_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_async___redArg___lam__0(lean_object* v_x_1724_, lean_object* v___f_1725_, lean_object* v_prio_1726_, lean_object* v___f_1727_, lean_object* v_x_1728_){
_start:
{
if (lean_obj_tag(v_x_1728_) == 0)
{
lean_object* v_a_1730_; lean_object* v___x_1732_; uint8_t v_isShared_1733_; uint8_t v_isSharedCheck_1738_; 
lean_dec_ref(v___f_1727_);
lean_dec(v_prio_1726_);
lean_dec(v___f_1725_);
lean_dec_ref(v_x_1724_);
v_a_1730_ = lean_ctor_get(v_x_1728_, 0);
v_isSharedCheck_1738_ = !lean_is_exclusive(v_x_1728_);
if (v_isSharedCheck_1738_ == 0)
{
v___x_1732_ = v_x_1728_;
v_isShared_1733_ = v_isSharedCheck_1738_;
goto v_resetjp_1731_;
}
else
{
lean_inc(v_a_1730_);
lean_dec(v_x_1728_);
v___x_1732_ = lean_box(0);
v_isShared_1733_ = v_isSharedCheck_1738_;
goto v_resetjp_1731_;
}
v_resetjp_1731_:
{
lean_object* v___x_1735_; 
if (v_isShared_1733_ == 0)
{
v___x_1735_ = v___x_1732_;
goto v_reusejp_1734_;
}
else
{
lean_object* v_reuseFailAlloc_1737_; 
v_reuseFailAlloc_1737_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1737_, 0, v_a_1730_);
v___x_1735_ = v_reuseFailAlloc_1737_;
goto v_reusejp_1734_;
}
v_reusejp_1734_:
{
lean_object* v___x_1736_; 
v___x_1736_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1736_, 0, v___x_1735_);
return v___x_1736_;
}
}
}
else
{
lean_object* v_a_1739_; lean_object* v___x_1741_; uint8_t v_isShared_1742_; uint8_t v_isSharedCheck_1757_; 
v_a_1739_ = lean_ctor_get(v_x_1728_, 0);
v_isSharedCheck_1757_ = !lean_is_exclusive(v_x_1728_);
if (v_isSharedCheck_1757_ == 0)
{
v___x_1741_ = v_x_1728_;
v_isShared_1742_ = v_isSharedCheck_1757_;
goto v_resetjp_1740_;
}
else
{
lean_inc(v_a_1739_);
lean_dec(v_x_1728_);
v___x_1741_ = lean_box(0);
v_isShared_1742_ = v_isSharedCheck_1757_;
goto v_resetjp_1740_;
}
v_resetjp_1740_:
{
lean_object* v___x_1743_; lean_object* v___x_1744_; lean_object* v___f_1745_; lean_object* v___f_1746_; lean_object* v___x_1747_; lean_object* v___x_1748_; lean_object* v___x_1749_; lean_object* v___x_1750_; uint8_t v___x_1751_; lean_object* v___x_1752_; lean_object* v___x_1754_; 
lean_inc(v_a_1739_);
v___x_1743_ = lean_apply_1(v_x_1724_, v_a_1739_);
v___x_1744_ = lean_box(2);
v___f_1745_ = lean_alloc_closure((void*)(l_Std_Async_ContextAsync_concurrently___redArg___lam__3___boxed), 4, 2);
lean_closure_set(v___f_1745_, 0, v_a_1739_);
lean_closure_set(v___f_1745_, 1, v___x_1744_);
v___f_1746_ = lean_alloc_closure((void*)(l_Std_Async_ContextAsync_async___redArg___lam__3___boxed), 4, 3);
lean_closure_set(v___f_1746_, 0, v___f_1725_);
lean_closure_set(v___f_1746_, 1, v___x_1743_);
lean_closure_set(v___f_1746_, 2, v___f_1745_);
v___x_1747_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_toBaseAsync___boxed), 4, 3);
lean_closure_set(v___x_1747_, 0, lean_box(0));
lean_closure_set(v___x_1747_, 1, lean_box(0));
lean_closure_set(v___x_1747_, 2, v___f_1746_);
v___x_1748_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_toRawBaseIO___boxed), 3, 2);
lean_closure_set(v___x_1748_, 0, lean_box(0));
lean_closure_set(v___x_1748_, 1, v___x_1747_);
v___x_1749_ = lean_io_as_task(v___x_1748_, v_prio_1726_);
v___x_1750_ = lean_unsigned_to_nat(0u);
v___x_1751_ = 1;
v___x_1752_ = lean_task_bind(v___x_1749_, v___f_1727_, v___x_1750_, v___x_1751_);
if (v_isShared_1742_ == 0)
{
lean_ctor_set(v___x_1741_, 0, v___x_1752_);
v___x_1754_ = v___x_1741_;
goto v_reusejp_1753_;
}
else
{
lean_object* v_reuseFailAlloc_1756_; 
v_reuseFailAlloc_1756_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1756_, 0, v___x_1752_);
v___x_1754_ = v_reuseFailAlloc_1756_;
goto v_reusejp_1753_;
}
v_reusejp_1753_:
{
lean_object* v___x_1755_; 
v___x_1755_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1755_, 0, v___x_1754_);
return v___x_1755_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_async___redArg___lam__0___boxed(lean_object* v_x_1758_, lean_object* v___f_1759_, lean_object* v_prio_1760_, lean_object* v___f_1761_, lean_object* v_x_1762_, lean_object* v___y_1763_){
_start:
{
lean_object* v_res_1764_; 
v_res_1764_ = l_Std_Async_ContextAsync_async___redArg___lam__0(v_x_1758_, v___f_1759_, v_prio_1760_, v___f_1761_, v_x_1762_);
return v_res_1764_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_async___redArg(lean_object* v_x_1765_, lean_object* v_prio_1766_, lean_object* v___y_1767_){
_start:
{
lean_object* v___f_1769_; lean_object* v___f_1770_; lean_object* v___f_1771_; lean_object* v___x_1772_; uint8_t v___x_1773_; lean_object* v___x_1774_; lean_object* v___x_1775_; lean_object* v___x_1776_; lean_object* v___x_1777_; 
v___f_1769_ = ((lean_object*)(l_Std_Async_ContextAsync_concurrently___redArg___closed__1));
v___f_1770_ = ((lean_object*)(l_Std_Async_ContextAsync_concurrently___redArg___closed__0));
v___f_1771_ = lean_alloc_closure((void*)(l_Std_Async_ContextAsync_async___redArg___lam__0___boxed), 6, 4);
lean_closure_set(v___f_1771_, 0, v_x_1765_);
lean_closure_set(v___f_1771_, 1, v___f_1769_);
lean_closure_set(v___f_1771_, 2, v_prio_1766_);
lean_closure_set(v___f_1771_, 3, v___f_1770_);
v___x_1772_ = lean_unsigned_to_nat(0u);
v___x_1773_ = 0;
lean_inc_ref(v___y_1767_);
v___x_1774_ = l_Std_CancellationContext_fork(v___y_1767_);
v___x_1775_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1775_, 0, v___x_1774_);
v___x_1776_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1776_, 0, v___x_1775_);
v___x_1777_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_1772_, v___x_1773_, v___x_1776_, v___f_1771_);
return v___x_1777_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_async___redArg___boxed(lean_object* v_x_1778_, lean_object* v_prio_1779_, lean_object* v___y_1780_, lean_object* v___y_1781_){
_start:
{
lean_object* v_res_1782_; 
v_res_1782_ = l_Std_Async_ContextAsync_async___redArg(v_x_1778_, v_prio_1779_, v___y_1780_);
lean_dec_ref(v___y_1780_);
return v_res_1782_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_async(lean_object* v_00_u03b1_1783_, lean_object* v_x_1784_, lean_object* v_prio_1785_, lean_object* v___y_1786_){
_start:
{
lean_object* v___f_1788_; lean_object* v___f_1789_; lean_object* v___f_1790_; lean_object* v___x_1791_; uint8_t v___x_1792_; lean_object* v___x_1793_; lean_object* v___x_1794_; lean_object* v___x_1795_; lean_object* v___x_1796_; 
v___f_1788_ = ((lean_object*)(l_Std_Async_ContextAsync_concurrently___redArg___closed__1));
v___f_1789_ = ((lean_object*)(l_Std_Async_ContextAsync_concurrently___redArg___closed__0));
v___f_1790_ = lean_alloc_closure((void*)(l_Std_Async_ContextAsync_async___redArg___lam__0___boxed), 6, 4);
lean_closure_set(v___f_1790_, 0, v_x_1784_);
lean_closure_set(v___f_1790_, 1, v___f_1788_);
lean_closure_set(v___f_1790_, 2, v_prio_1785_);
lean_closure_set(v___f_1790_, 3, v___f_1789_);
v___x_1791_ = lean_unsigned_to_nat(0u);
v___x_1792_ = 0;
lean_inc_ref(v___y_1786_);
v___x_1793_ = l_Std_CancellationContext_fork(v___y_1786_);
v___x_1794_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1794_, 0, v___x_1793_);
v___x_1795_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1795_, 0, v___x_1794_);
v___x_1796_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_1791_, v___x_1792_, v___x_1795_, v___f_1790_);
return v___x_1796_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_async___boxed(lean_object* v_00_u03b1_1797_, lean_object* v_x_1798_, lean_object* v_prio_1799_, lean_object* v___y_1800_, lean_object* v___y_1801_){
_start:
{
lean_object* v_res_1802_; 
v_res_1802_ = l_Std_Async_ContextAsync_async(v_00_u03b1_1797_, v_x_1798_, v_prio_1799_, v___y_1800_);
lean_dec_ref(v___y_1800_);
return v_res_1802_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_instMonadAsyncAsyncTask___lam__5(lean_object* v___f_1803_, lean_object* v___f_1804_, lean_object* v_00_u03b1_1805_, lean_object* v_x_1806_, lean_object* v_prio_1807_, lean_object* v___y_1808_){
_start:
{
lean_object* v___f_1810_; lean_object* v___x_1811_; uint8_t v___x_1812_; lean_object* v___x_1813_; lean_object* v___x_1814_; lean_object* v___x_1815_; lean_object* v___x_1816_; 
v___f_1810_ = lean_alloc_closure((void*)(l_Std_Async_ContextAsync_async___redArg___lam__0___boxed), 6, 4);
lean_closure_set(v___f_1810_, 0, v_x_1806_);
lean_closure_set(v___f_1810_, 1, v___f_1803_);
lean_closure_set(v___f_1810_, 2, v_prio_1807_);
lean_closure_set(v___f_1810_, 3, v___f_1804_);
v___x_1811_ = lean_unsigned_to_nat(0u);
v___x_1812_ = 0;
lean_inc_ref(v___y_1808_);
v___x_1813_ = l_Std_CancellationContext_fork(v___y_1808_);
v___x_1814_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1814_, 0, v___x_1813_);
v___x_1815_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1815_, 0, v___x_1814_);
v___x_1816_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_1811_, v___x_1812_, v___x_1815_, v___f_1810_);
return v___x_1816_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_instMonadAsyncAsyncTask___lam__5___boxed(lean_object* v___f_1817_, lean_object* v___f_1818_, lean_object* v_00_u03b1_1819_, lean_object* v_x_1820_, lean_object* v_prio_1821_, lean_object* v___y_1822_, lean_object* v___y_1823_){
_start:
{
lean_object* v_res_1824_; 
v_res_1824_ = l_Std_Async_ContextAsync_instMonadAsyncAsyncTask___lam__5(v___f_1817_, v___f_1818_, v_00_u03b1_1819_, v_x_1820_, v_prio_1821_, v___y_1822_);
lean_dec_ref(v___y_1822_);
return v_res_1824_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_instFunctor___lam__0(lean_object* v_00_u03b1_1829_, lean_object* v_00_u03b2_1830_, lean_object* v_f_1831_, lean_object* v_x_1832_, lean_object* v___y_1833_){
_start:
{
lean_object* v___x_1835_; lean_object* v___x_1836_; uint8_t v___x_1837_; lean_object* v___x_1838_; lean_object* v___y_1840_; 
lean_inc(v_f_1831_);
v___x_1835_ = lean_alloc_closure((void*)(l_Except_map), 5, 4);
lean_closure_set(v___x_1835_, 0, lean_box(0));
lean_closure_set(v___x_1835_, 1, lean_box(0));
lean_closure_set(v___x_1835_, 2, lean_box(0));
lean_closure_set(v___x_1835_, 3, v_f_1831_);
v___x_1836_ = lean_unsigned_to_nat(0u);
v___x_1837_ = 0;
lean_inc_ref(v___y_1833_);
v___x_1838_ = lean_apply_2(v_x_1832_, v___y_1833_, lean_box(0));
if (lean_obj_tag(v___x_1838_) == 0)
{
lean_object* v_a_1842_; 
lean_dec_ref(v___x_1835_);
v_a_1842_ = lean_ctor_get(v___x_1838_, 0);
lean_inc(v_a_1842_);
lean_dec_ref_known(v___x_1838_, 1);
if (lean_obj_tag(v_a_1842_) == 0)
{
lean_object* v_a_1843_; lean_object* v___x_1845_; uint8_t v_isShared_1846_; uint8_t v_isSharedCheck_1850_; 
lean_dec(v_f_1831_);
v_a_1843_ = lean_ctor_get(v_a_1842_, 0);
v_isSharedCheck_1850_ = !lean_is_exclusive(v_a_1842_);
if (v_isSharedCheck_1850_ == 0)
{
v___x_1845_ = v_a_1842_;
v_isShared_1846_ = v_isSharedCheck_1850_;
goto v_resetjp_1844_;
}
else
{
lean_inc(v_a_1843_);
lean_dec(v_a_1842_);
v___x_1845_ = lean_box(0);
v_isShared_1846_ = v_isSharedCheck_1850_;
goto v_resetjp_1844_;
}
v_resetjp_1844_:
{
lean_object* v___x_1848_; 
if (v_isShared_1846_ == 0)
{
v___x_1848_ = v___x_1845_;
goto v_reusejp_1847_;
}
else
{
lean_object* v_reuseFailAlloc_1849_; 
v_reuseFailAlloc_1849_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1849_, 0, v_a_1843_);
v___x_1848_ = v_reuseFailAlloc_1849_;
goto v_reusejp_1847_;
}
v_reusejp_1847_:
{
v___y_1840_ = v___x_1848_;
goto v___jp_1839_;
}
}
}
else
{
lean_object* v_a_1851_; lean_object* v___x_1853_; uint8_t v_isShared_1854_; uint8_t v_isSharedCheck_1859_; 
v_a_1851_ = lean_ctor_get(v_a_1842_, 0);
v_isSharedCheck_1859_ = !lean_is_exclusive(v_a_1842_);
if (v_isSharedCheck_1859_ == 0)
{
v___x_1853_ = v_a_1842_;
v_isShared_1854_ = v_isSharedCheck_1859_;
goto v_resetjp_1852_;
}
else
{
lean_inc(v_a_1851_);
lean_dec(v_a_1842_);
v___x_1853_ = lean_box(0);
v_isShared_1854_ = v_isSharedCheck_1859_;
goto v_resetjp_1852_;
}
v_resetjp_1852_:
{
lean_object* v___x_1855_; lean_object* v___x_1857_; 
v___x_1855_ = lean_apply_1(v_f_1831_, v_a_1851_);
if (v_isShared_1854_ == 0)
{
lean_ctor_set(v___x_1853_, 0, v___x_1855_);
v___x_1857_ = v___x_1853_;
goto v_reusejp_1856_;
}
else
{
lean_object* v_reuseFailAlloc_1858_; 
v_reuseFailAlloc_1858_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1858_, 0, v___x_1855_);
v___x_1857_ = v_reuseFailAlloc_1858_;
goto v_reusejp_1856_;
}
v_reusejp_1856_:
{
v___y_1840_ = v___x_1857_;
goto v___jp_1839_;
}
}
}
}
else
{
lean_object* v_a_1860_; lean_object* v___x_1862_; uint8_t v_isShared_1863_; uint8_t v_isSharedCheck_1868_; 
lean_dec(v_f_1831_);
v_a_1860_ = lean_ctor_get(v___x_1838_, 0);
v_isSharedCheck_1868_ = !lean_is_exclusive(v___x_1838_);
if (v_isSharedCheck_1868_ == 0)
{
v___x_1862_ = v___x_1838_;
v_isShared_1863_ = v_isSharedCheck_1868_;
goto v_resetjp_1861_;
}
else
{
lean_inc(v_a_1860_);
lean_dec(v___x_1838_);
v___x_1862_ = lean_box(0);
v_isShared_1863_ = v_isSharedCheck_1868_;
goto v_resetjp_1861_;
}
v_resetjp_1861_:
{
lean_object* v___x_1864_; lean_object* v___x_1866_; 
v___x_1864_ = lean_task_map(v___x_1835_, v_a_1860_, v___x_1836_, v___x_1837_);
if (v_isShared_1863_ == 0)
{
lean_ctor_set(v___x_1862_, 0, v___x_1864_);
v___x_1866_ = v___x_1862_;
goto v_reusejp_1865_;
}
else
{
lean_object* v_reuseFailAlloc_1867_; 
v_reuseFailAlloc_1867_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1867_, 0, v___x_1864_);
v___x_1866_ = v_reuseFailAlloc_1867_;
goto v_reusejp_1865_;
}
v_reusejp_1865_:
{
return v___x_1866_;
}
}
}
v___jp_1839_:
{
lean_object* v___x_1841_; 
v___x_1841_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1841_, 0, v___y_1840_);
return v___x_1841_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_instFunctor___lam__0___boxed(lean_object* v_00_u03b1_1869_, lean_object* v_00_u03b2_1870_, lean_object* v_f_1871_, lean_object* v_x_1872_, lean_object* v___y_1873_, lean_object* v___y_1874_){
_start:
{
lean_object* v_res_1875_; 
v_res_1875_ = l_Std_Async_ContextAsync_instFunctor___lam__0(v_00_u03b1_1869_, v_00_u03b2_1870_, v_f_1871_, v_x_1872_, v___y_1873_);
lean_dec_ref(v___y_1873_);
return v_res_1875_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_instFunctor___lam__1(lean_object* v___f_1876_, lean_object* v_00_u03b1_1877_, lean_object* v_00_u03b2_1878_, lean_object* v___y_1879_, lean_object* v___y_1880_, lean_object* v___y_1881_){
_start:
{
lean_object* v___x_1883_; lean_object* v___x_1884_; 
v___x_1883_ = lean_alloc_closure((void*)(l_Function_const___boxed), 4, 3);
lean_closure_set(v___x_1883_, 0, lean_box(0));
lean_closure_set(v___x_1883_, 1, lean_box(0));
lean_closure_set(v___x_1883_, 2, v___y_1879_);
lean_inc_ref(v___y_1881_);
v___x_1884_ = lean_apply_6(v___f_1876_, lean_box(0), lean_box(0), v___x_1883_, v___y_1880_, v___y_1881_, lean_box(0));
return v___x_1884_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_instFunctor___lam__1___boxed(lean_object* v___f_1885_, lean_object* v_00_u03b1_1886_, lean_object* v_00_u03b2_1887_, lean_object* v___y_1888_, lean_object* v___y_1889_, lean_object* v___y_1890_, lean_object* v___y_1891_){
_start:
{
lean_object* v_res_1892_; 
v_res_1892_ = l_Std_Async_ContextAsync_instFunctor___lam__1(v___f_1885_, v_00_u03b1_1886_, v_00_u03b2_1887_, v___y_1888_, v___y_1889_, v___y_1890_);
lean_dec_ref(v___y_1890_);
return v_res_1892_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_instMonad___lam__0(lean_object* v_00_u03b1_1900_, lean_object* v_a_1901_, lean_object* v___y_1902_){
_start:
{
lean_object* v___x_1904_; lean_object* v___x_1905_; 
v___x_1904_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1904_, 0, v_a_1901_);
v___x_1905_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1905_, 0, v___x_1904_);
return v___x_1905_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_instMonad___lam__0___boxed(lean_object* v_00_u03b1_1906_, lean_object* v_a_1907_, lean_object* v___y_1908_, lean_object* v___y_1909_){
_start:
{
lean_object* v_res_1910_; 
v_res_1910_ = l_Std_Async_ContextAsync_instMonad___lam__0(v_00_u03b1_1906_, v_a_1907_, v___y_1908_);
lean_dec_ref(v___y_1908_);
return v_res_1910_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_instMonad___lam__1(lean_object* v_f_1911_, lean_object* v___y_1912_, lean_object* v_x_1913_){
_start:
{
if (lean_obj_tag(v_x_1913_) == 0)
{
lean_object* v_a_1915_; lean_object* v___x_1917_; uint8_t v_isShared_1918_; uint8_t v_isSharedCheck_1923_; 
lean_dec_ref(v_f_1911_);
v_a_1915_ = lean_ctor_get(v_x_1913_, 0);
v_isSharedCheck_1923_ = !lean_is_exclusive(v_x_1913_);
if (v_isSharedCheck_1923_ == 0)
{
v___x_1917_ = v_x_1913_;
v_isShared_1918_ = v_isSharedCheck_1923_;
goto v_resetjp_1916_;
}
else
{
lean_inc(v_a_1915_);
lean_dec(v_x_1913_);
v___x_1917_ = lean_box(0);
v_isShared_1918_ = v_isSharedCheck_1923_;
goto v_resetjp_1916_;
}
v_resetjp_1916_:
{
lean_object* v___x_1920_; 
if (v_isShared_1918_ == 0)
{
v___x_1920_ = v___x_1917_;
goto v_reusejp_1919_;
}
else
{
lean_object* v_reuseFailAlloc_1922_; 
v_reuseFailAlloc_1922_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1922_, 0, v_a_1915_);
v___x_1920_ = v_reuseFailAlloc_1922_;
goto v_reusejp_1919_;
}
v_reusejp_1919_:
{
lean_object* v___x_1921_; 
v___x_1921_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1921_, 0, v___x_1920_);
return v___x_1921_;
}
}
}
else
{
lean_object* v_a_1924_; lean_object* v___x_1925_; 
v_a_1924_ = lean_ctor_get(v_x_1913_, 0);
lean_inc(v_a_1924_);
lean_dec_ref_known(v_x_1913_, 1);
lean_inc_ref(v___y_1912_);
v___x_1925_ = lean_apply_3(v_f_1911_, v_a_1924_, v___y_1912_, lean_box(0));
return v___x_1925_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_instMonad___lam__1___boxed(lean_object* v_f_1926_, lean_object* v___y_1927_, lean_object* v_x_1928_, lean_object* v___y_1929_){
_start:
{
lean_object* v_res_1930_; 
v_res_1930_ = l_Std_Async_ContextAsync_instMonad___lam__1(v_f_1926_, v___y_1927_, v_x_1928_);
lean_dec_ref(v___y_1927_);
return v_res_1930_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_instMonad___lam__2(lean_object* v_00_u03b1_1931_, lean_object* v_00_u03b2_1932_, lean_object* v_x_1933_, lean_object* v_f_1934_, lean_object* v___y_1935_){
_start:
{
lean_object* v___f_1937_; lean_object* v___x_1938_; uint8_t v___x_1939_; lean_object* v___x_1940_; lean_object* v___x_1941_; 
lean_inc_ref_n(v___y_1935_, 2);
v___f_1937_ = lean_alloc_closure((void*)(l_Std_Async_ContextAsync_instMonad___lam__1___boxed), 4, 2);
lean_closure_set(v___f_1937_, 0, v_f_1934_);
lean_closure_set(v___f_1937_, 1, v___y_1935_);
v___x_1938_ = lean_unsigned_to_nat(0u);
v___x_1939_ = 0;
v___x_1940_ = lean_apply_2(v_x_1933_, v___y_1935_, lean_box(0));
v___x_1941_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_1938_, v___x_1939_, v___x_1940_, v___f_1937_);
return v___x_1941_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_instMonad___lam__2___boxed(lean_object* v_00_u03b1_1942_, lean_object* v_00_u03b2_1943_, lean_object* v_x_1944_, lean_object* v_f_1945_, lean_object* v___y_1946_, lean_object* v___y_1947_){
_start:
{
lean_object* v_res_1948_; 
v_res_1948_ = l_Std_Async_ContextAsync_instMonad___lam__2(v_00_u03b1_1942_, v_00_u03b2_1943_, v_x_1944_, v_f_1945_, v___y_1946_);
lean_dec_ref(v___y_1946_);
return v_res_1948_;
}
}
static lean_object* _init_l_Std_Async_ContextAsync_instMonad(void){
_start:
{
lean_object* v___x_1951_; lean_object* v___x_1952_; lean_object* v_toApplicative_1953_; lean_object* v_toSeq_1954_; lean_object* v_toSeqLeft_1955_; lean_object* v_toSeqRight_1956_; lean_object* v___f_1957_; lean_object* v___f_1958_; lean_object* v___f_1959_; lean_object* v___f_1960_; lean_object* v___f_1961_; lean_object* v___x_1962_; lean_object* v___x_1963_; 
v___x_1951_ = ((lean_object*)(l_Std_Async_ContextAsync_instFunctor));
v___x_1952_ = lean_obj_once(&l_Std_Async_ContextAsync_concurrentlyAll___redArg___closed__1, &l_Std_Async_ContextAsync_concurrentlyAll___redArg___closed__1_once, _init_l_Std_Async_ContextAsync_concurrentlyAll___redArg___closed__1);
v_toApplicative_1953_ = lean_ctor_get(v___x_1952_, 0);
v_toSeq_1954_ = lean_ctor_get(v_toApplicative_1953_, 2);
v_toSeqLeft_1955_ = lean_ctor_get(v_toApplicative_1953_, 3);
v_toSeqRight_1956_ = lean_ctor_get(v_toApplicative_1953_, 4);
v___f_1957_ = ((lean_object*)(l_Std_Async_ContextAsync_instMonad___closed__0));
v___f_1958_ = ((lean_object*)(l_Std_Async_ContextAsync_instMonad___closed__1));
lean_inc(v_toSeqRight_1956_);
v___f_1959_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_1959_, 0, v_toSeqRight_1956_);
lean_inc(v_toSeqLeft_1955_);
v___f_1960_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3___boxed), 6, 1);
lean_closure_set(v___f_1960_, 0, v_toSeqLeft_1955_);
lean_inc(v_toSeq_1954_);
v___f_1961_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4___boxed), 6, 1);
lean_closure_set(v___f_1961_, 0, v_toSeq_1954_);
v___x_1962_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_1962_, 0, v___x_1951_);
lean_ctor_set(v___x_1962_, 1, v___f_1957_);
lean_ctor_set(v___x_1962_, 2, v___f_1961_);
lean_ctor_set(v___x_1962_, 3, v___f_1960_);
lean_ctor_set(v___x_1962_, 4, v___f_1959_);
v___x_1963_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1963_, 0, v___x_1962_);
lean_ctor_set(v___x_1963_, 1, v___f_1958_);
return v___x_1963_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_instMonadLiftIO___lam__0(lean_object* v_a_1964_){
_start:
{
lean_object* v___x_1965_; 
v___x_1965_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1965_, 0, v_a_1964_);
return v___x_1965_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_instMonadLiftIO___lam__1(lean_object* v___f_1966_, lean_object* v_x_1967_){
_start:
{
if (lean_obj_tag(v_x_1967_) == 0)
{
lean_object* v_a_1969_; lean_object* v___x_1971_; uint8_t v_isShared_1972_; uint8_t v_isSharedCheck_1977_; 
lean_dec_ref(v___f_1966_);
v_a_1969_ = lean_ctor_get(v_x_1967_, 0);
v_isSharedCheck_1977_ = !lean_is_exclusive(v_x_1967_);
if (v_isSharedCheck_1977_ == 0)
{
v___x_1971_ = v_x_1967_;
v_isShared_1972_ = v_isSharedCheck_1977_;
goto v_resetjp_1970_;
}
else
{
lean_inc(v_a_1969_);
lean_dec(v_x_1967_);
v___x_1971_ = lean_box(0);
v_isShared_1972_ = v_isSharedCheck_1977_;
goto v_resetjp_1970_;
}
v_resetjp_1970_:
{
lean_object* v___x_1974_; 
if (v_isShared_1972_ == 0)
{
v___x_1974_ = v___x_1971_;
goto v_reusejp_1973_;
}
else
{
lean_object* v_reuseFailAlloc_1976_; 
v_reuseFailAlloc_1976_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1976_, 0, v_a_1969_);
v___x_1974_ = v_reuseFailAlloc_1976_;
goto v_reusejp_1973_;
}
v_reusejp_1973_:
{
lean_object* v___x_1975_; 
v___x_1975_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1975_, 0, v___x_1974_);
return v___x_1975_;
}
}
}
else
{
lean_object* v_a_1978_; 
v_a_1978_ = lean_ctor_get(v_x_1967_, 0);
lean_inc(v_a_1978_);
lean_dec_ref_known(v_x_1967_, 1);
if (lean_obj_tag(v_a_1978_) == 0)
{
lean_object* v_a_1979_; lean_object* v___x_1981_; uint8_t v_isShared_1982_; uint8_t v_isSharedCheck_1987_; 
lean_dec_ref(v___f_1966_);
v_a_1979_ = lean_ctor_get(v_a_1978_, 0);
v_isSharedCheck_1987_ = !lean_is_exclusive(v_a_1978_);
if (v_isSharedCheck_1987_ == 0)
{
v___x_1981_ = v_a_1978_;
v_isShared_1982_ = v_isSharedCheck_1987_;
goto v_resetjp_1980_;
}
else
{
lean_inc(v_a_1979_);
lean_dec(v_a_1978_);
v___x_1981_ = lean_box(0);
v_isShared_1982_ = v_isSharedCheck_1987_;
goto v_resetjp_1980_;
}
v_resetjp_1980_:
{
lean_object* v___x_1984_; 
if (v_isShared_1982_ == 0)
{
v___x_1984_ = v___x_1981_;
goto v_reusejp_1983_;
}
else
{
lean_object* v_reuseFailAlloc_1986_; 
v_reuseFailAlloc_1986_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1986_, 0, v_a_1979_);
v___x_1984_ = v_reuseFailAlloc_1986_;
goto v_reusejp_1983_;
}
v_reusejp_1983_:
{
lean_object* v___x_1985_; 
v___x_1985_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1985_, 0, v___x_1984_);
return v___x_1985_;
}
}
}
else
{
lean_object* v_a_1988_; lean_object* v___x_1989_; uint8_t v___x_1990_; lean_object* v___x_1991_; lean_object* v___x_1992_; 
v_a_1988_ = lean_ctor_get(v_a_1978_, 0);
lean_inc(v_a_1988_);
lean_dec_ref_known(v_a_1978_, 1);
v___x_1989_ = lean_unsigned_to_nat(0u);
v___x_1990_ = 0;
v___x_1991_ = lean_task_map(v___f_1966_, v_a_1988_, v___x_1989_, v___x_1990_);
v___x_1992_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1992_, 0, v___x_1991_);
return v___x_1992_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_instMonadLiftIO___lam__1___boxed(lean_object* v___f_1993_, lean_object* v_x_1994_, lean_object* v___y_1995_){
_start:
{
lean_object* v_res_1996_; 
v_res_1996_ = l_Std_Async_ContextAsync_instMonadLiftIO___lam__1(v___f_1993_, v_x_1994_);
return v_res_1996_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_instMonadLiftIO___lam__2(lean_object* v___f_1997_, lean_object* v_00_u03b1_1998_, lean_object* v_x_1999_, lean_object* v___y_2000_){
_start:
{
lean_object* v___x_2002_; uint8_t v___x_2003_; lean_object* v_val_2005_; lean_object* v___x_2009_; 
v___x_2002_ = lean_unsigned_to_nat(0u);
v___x_2003_ = 0;
v___x_2009_ = lean_apply_1(v_x_1999_, lean_box(0));
if (lean_obj_tag(v___x_2009_) == 0)
{
lean_object* v_a_2010_; lean_object* v___x_2012_; uint8_t v_isShared_2013_; uint8_t v_isSharedCheck_2018_; 
v_a_2010_ = lean_ctor_get(v___x_2009_, 0);
v_isSharedCheck_2018_ = !lean_is_exclusive(v___x_2009_);
if (v_isSharedCheck_2018_ == 0)
{
v___x_2012_ = v___x_2009_;
v_isShared_2013_ = v_isSharedCheck_2018_;
goto v_resetjp_2011_;
}
else
{
lean_inc(v_a_2010_);
lean_dec(v___x_2009_);
v___x_2012_ = lean_box(0);
v_isShared_2013_ = v_isSharedCheck_2018_;
goto v_resetjp_2011_;
}
v_resetjp_2011_:
{
lean_object* v___x_2014_; lean_object* v___x_2016_; 
v___x_2014_ = lean_task_pure(v_a_2010_);
if (v_isShared_2013_ == 0)
{
lean_ctor_set_tag(v___x_2012_, 1);
lean_ctor_set(v___x_2012_, 0, v___x_2014_);
v___x_2016_ = v___x_2012_;
goto v_reusejp_2015_;
}
else
{
lean_object* v_reuseFailAlloc_2017_; 
v_reuseFailAlloc_2017_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2017_, 0, v___x_2014_);
v___x_2016_ = v_reuseFailAlloc_2017_;
goto v_reusejp_2015_;
}
v_reusejp_2015_:
{
v_val_2005_ = v___x_2016_;
goto v___jp_2004_;
}
}
}
else
{
lean_object* v_a_2019_; lean_object* v___x_2021_; uint8_t v_isShared_2022_; uint8_t v_isSharedCheck_2026_; 
v_a_2019_ = lean_ctor_get(v___x_2009_, 0);
v_isSharedCheck_2026_ = !lean_is_exclusive(v___x_2009_);
if (v_isSharedCheck_2026_ == 0)
{
v___x_2021_ = v___x_2009_;
v_isShared_2022_ = v_isSharedCheck_2026_;
goto v_resetjp_2020_;
}
else
{
lean_inc(v_a_2019_);
lean_dec(v___x_2009_);
v___x_2021_ = lean_box(0);
v_isShared_2022_ = v_isSharedCheck_2026_;
goto v_resetjp_2020_;
}
v_resetjp_2020_:
{
lean_object* v___x_2024_; 
if (v_isShared_2022_ == 0)
{
lean_ctor_set_tag(v___x_2021_, 0);
v___x_2024_ = v___x_2021_;
goto v_reusejp_2023_;
}
else
{
lean_object* v_reuseFailAlloc_2025_; 
v_reuseFailAlloc_2025_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2025_, 0, v_a_2019_);
v___x_2024_ = v_reuseFailAlloc_2025_;
goto v_reusejp_2023_;
}
v_reusejp_2023_:
{
v_val_2005_ = v___x_2024_;
goto v___jp_2004_;
}
}
}
v___jp_2004_:
{
lean_object* v___x_2006_; lean_object* v___x_2007_; lean_object* v___x_2008_; 
v___x_2006_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2006_, 0, v_val_2005_);
v___x_2007_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2007_, 0, v___x_2006_);
v___x_2008_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_2002_, v___x_2003_, v___x_2007_, v___f_1997_);
return v___x_2008_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_instMonadLiftIO___lam__2___boxed(lean_object* v___f_2027_, lean_object* v_00_u03b1_2028_, lean_object* v_x_2029_, lean_object* v___y_2030_, lean_object* v___y_2031_){
_start:
{
lean_object* v_res_2032_; 
v_res_2032_ = l_Std_Async_ContextAsync_instMonadLiftIO___lam__2(v___f_2027_, v_00_u03b1_2028_, v_x_2029_, v___y_2030_);
lean_dec_ref(v___y_2030_);
return v_res_2032_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_instMonadLiftBaseIO___lam__0(lean_object* v_00_u03b1_2039_, lean_object* v_x_2040_, lean_object* v___y_2041_){
_start:
{
lean_object* v___x_2043_; lean_object* v___x_2044_; lean_object* v___x_2045_; 
v___x_2043_ = lean_apply_1(v_x_2040_, lean_box(0));
v___x_2044_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2044_, 0, v___x_2043_);
v___x_2045_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2045_, 0, v___x_2044_);
return v___x_2045_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_instMonadLiftBaseIO___lam__0___boxed(lean_object* v_00_u03b1_2046_, lean_object* v_x_2047_, lean_object* v___y_2048_, lean_object* v___y_2049_){
_start:
{
lean_object* v_res_2050_; 
v_res_2050_ = l_Std_Async_ContextAsync_instMonadLiftBaseIO___lam__0(v_00_u03b1_2046_, v_x_2047_, v___y_2048_);
lean_dec_ref(v___y_2048_);
return v_res_2050_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_instMonadExceptError___lam__0(lean_object* v_00_u03b1_2053_, lean_object* v_e_2054_, lean_object* v___y_2055_){
_start:
{
lean_object* v___x_2057_; lean_object* v___x_2058_; 
v___x_2057_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2057_, 0, v_e_2054_);
v___x_2058_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2058_, 0, v___x_2057_);
return v___x_2058_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_instMonadExceptError___lam__0___boxed(lean_object* v_00_u03b1_2059_, lean_object* v_e_2060_, lean_object* v___y_2061_, lean_object* v___y_2062_){
_start:
{
lean_object* v_res_2063_; 
v_res_2063_ = l_Std_Async_ContextAsync_instMonadExceptError___lam__0(v_00_u03b1_2059_, v_e_2060_, v___y_2061_);
lean_dec_ref(v___y_2061_);
return v_res_2063_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_instMonadExceptError___lam__1(lean_object* v_h_2064_, lean_object* v___y_2065_, lean_object* v_x_2066_){
_start:
{
if (lean_obj_tag(v_x_2066_) == 0)
{
lean_object* v_a_2068_; lean_object* v___x_2069_; 
v_a_2068_ = lean_ctor_get(v_x_2066_, 0);
lean_inc(v_a_2068_);
lean_dec_ref_known(v_x_2066_, 1);
lean_inc_ref(v___y_2065_);
v___x_2069_ = lean_apply_3(v_h_2064_, v_a_2068_, v___y_2065_, lean_box(0));
return v___x_2069_;
}
else
{
lean_object* v___x_2070_; 
lean_dec_ref(v_h_2064_);
v___x_2070_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2070_, 0, v_x_2066_);
return v___x_2070_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_instMonadExceptError___lam__1___boxed(lean_object* v_h_2071_, lean_object* v___y_2072_, lean_object* v_x_2073_, lean_object* v___y_2074_){
_start:
{
lean_object* v_res_2075_; 
v_res_2075_ = l_Std_Async_ContextAsync_instMonadExceptError___lam__1(v_h_2071_, v___y_2072_, v_x_2073_);
lean_dec_ref(v___y_2072_);
return v_res_2075_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_instMonadExceptError___lam__2(lean_object* v_00_u03b1_2076_, lean_object* v_x_2077_, lean_object* v_h_2078_, lean_object* v___y_2079_){
_start:
{
lean_object* v___f_2081_; lean_object* v___x_2082_; uint8_t v___x_2083_; lean_object* v___x_2084_; lean_object* v___x_2085_; 
lean_inc_ref_n(v___y_2079_, 2);
v___f_2081_ = lean_alloc_closure((void*)(l_Std_Async_ContextAsync_instMonadExceptError___lam__1___boxed), 4, 2);
lean_closure_set(v___f_2081_, 0, v_h_2078_);
lean_closure_set(v___f_2081_, 1, v___y_2079_);
v___x_2082_ = lean_unsigned_to_nat(0u);
v___x_2083_ = 0;
v___x_2084_ = lean_apply_2(v_x_2077_, v___y_2079_, lean_box(0));
v___x_2085_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_2082_, v___x_2083_, v___x_2084_, v___f_2081_);
return v___x_2085_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_instMonadExceptError___lam__2___boxed(lean_object* v_00_u03b1_2086_, lean_object* v_x_2087_, lean_object* v_h_2088_, lean_object* v___y_2089_, lean_object* v___y_2090_){
_start:
{
lean_object* v_res_2091_; 
v_res_2091_ = l_Std_Async_ContextAsync_instMonadExceptError___lam__2(v_00_u03b1_2086_, v_x_2087_, v_h_2088_, v___y_2089_);
lean_dec_ref(v___y_2089_);
return v_res_2091_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_instMonadFinally___lam__0(lean_object* v_f_2098_, lean_object* v___y_2099_, lean_object* v_opt_2100_){
_start:
{
lean_object* v___x_2102_; 
lean_inc_ref(v___y_2099_);
v___x_2102_ = lean_apply_3(v_f_2098_, v_opt_2100_, v___y_2099_, lean_box(0));
return v___x_2102_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_instMonadFinally___lam__0___boxed(lean_object* v_f_2103_, lean_object* v___y_2104_, lean_object* v_opt_2105_, lean_object* v___y_2106_){
_start:
{
lean_object* v_res_2107_; 
v_res_2107_ = l_Std_Async_ContextAsync_instMonadFinally___lam__0(v_f_2103_, v___y_2104_, v_opt_2105_);
lean_dec_ref(v___y_2104_);
return v_res_2107_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_instMonadFinally___lam__1(lean_object* v_00_u03b1_2108_, lean_object* v_00_u03b2_2109_, lean_object* v_x_2110_, lean_object* v_f_2111_, lean_object* v___y_2112_){
_start:
{
lean_object* v___f_2114_; lean_object* v___x_2115_; lean_object* v___x_2116_; uint8_t v___x_2117_; lean_object* v___x_2118_; 
lean_inc_ref_n(v___y_2112_, 2);
v___f_2114_ = lean_alloc_closure((void*)(l_Std_Async_ContextAsync_instMonadFinally___lam__0___boxed), 4, 2);
lean_closure_set(v___f_2114_, 0, v_f_2111_);
lean_closure_set(v___f_2114_, 1, v___y_2112_);
v___x_2115_ = lean_apply_1(v_x_2110_, v___y_2112_);
v___x_2116_ = lean_unsigned_to_nat(0u);
v___x_2117_ = 0;
v___x_2118_ = l_Std_Async_EAsync_tryFinally_x27___redArg(v___x_2115_, v___f_2114_, v___x_2116_, v___x_2117_);
return v___x_2118_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_instMonadFinally___lam__1___boxed(lean_object* v_00_u03b1_2119_, lean_object* v_00_u03b2_2120_, lean_object* v_x_2121_, lean_object* v_f_2122_, lean_object* v___y_2123_, lean_object* v___y_2124_){
_start:
{
lean_object* v_res_2125_; 
v_res_2125_ = l_Std_Async_ContextAsync_instMonadFinally___lam__1(v_00_u03b1_2119_, v_00_u03b2_2120_, v_x_2121_, v_f_2122_, v___y_2123_);
lean_dec_ref(v___y_2123_);
return v_res_2125_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_instInhabited___redArg___lam__0(lean_object* v_x_2135_){
_start:
{
lean_object* v___x_2137_; 
v___x_2137_ = ((lean_object*)(l_Std_Async_ContextAsync_instInhabited___redArg___lam__0___closed__3));
return v___x_2137_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_instInhabited___redArg___lam__0___boxed(lean_object* v_x_2138_, lean_object* v___y_2139_){
_start:
{
lean_object* v_res_2140_; 
v_res_2140_ = l_Std_Async_ContextAsync_instInhabited___redArg___lam__0(v_x_2138_);
lean_dec_ref(v_x_2138_);
return v_res_2140_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_instInhabited___redArg(){
_start:
{
lean_object* v___x_2145_; 
v___x_2145_ = ((lean_object*)(l_Std_Async_ContextAsync_instInhabited___redArg___closed__1));
return v___x_2145_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_instInhabited___redArg___boxed(lean_object* v___dummy_2146_){
_start:
{
lean_object* v_res_2147_; 
v_res_2147_ = l_Std_Async_ContextAsync_instInhabited___redArg();
return v_res_2147_;
}
}
static lean_object* _init_l_Std_Async_ContextAsync_instInhabited___closed__0(void){
_start:
{
lean_object* v___x_2148_; 
v___x_2148_ = l_Std_Async_ContextAsync_instInhabited___redArg();
return v___x_2148_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_instInhabited(lean_object* v_00_u03b1_2149_, lean_object* v_inst_2150_){
_start:
{
lean_object* v___x_2151_; 
v___x_2151_ = lean_obj_once(&l_Std_Async_ContextAsync_instInhabited___closed__0, &l_Std_Async_ContextAsync_instInhabited___closed__0_once, _init_l_Std_Async_ContextAsync_instInhabited___closed__0);
return v___x_2151_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_instInhabited___boxed(lean_object* v_00_u03b1_2152_, lean_object* v_inst_2153_){
_start:
{
lean_object* v_res_2154_; 
v_res_2154_ = l_Std_Async_ContextAsync_instInhabited(v_00_u03b1_2152_, v_inst_2153_);
lean_dec(v_inst_2153_);
return v_res_2154_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_instMonadAwaitAsyncTask___lam__0(lean_object* v_00_u03b1_2155_, lean_object* v_t_2156_, lean_object* v___y_2157_){
_start:
{
lean_object* v___x_2159_; 
v___x_2159_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2159_, 0, v_t_2156_);
return v___x_2159_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_instMonadAwaitAsyncTask___lam__0___boxed(lean_object* v_00_u03b1_2160_, lean_object* v_t_2161_, lean_object* v___y_2162_, lean_object* v___y_2163_){
_start:
{
lean_object* v_res_2164_; 
v_res_2164_ = l_Std_Async_ContextAsync_instMonadAwaitAsyncTask___lam__0(v_00_u03b1_2160_, v_t_2161_, v___y_2162_);
lean_dec_ref(v___y_2162_);
return v_res_2164_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_race___redArg___lam__3(lean_object* v_x_2167_){
_start:
{
if (lean_obj_tag(v_x_2167_) == 0)
{
lean_object* v_a_2169_; lean_object* v___x_2171_; uint8_t v_isShared_2172_; uint8_t v_isSharedCheck_2177_; 
v_a_2169_ = lean_ctor_get(v_x_2167_, 0);
v_isSharedCheck_2177_ = !lean_is_exclusive(v_x_2167_);
if (v_isSharedCheck_2177_ == 0)
{
v___x_2171_ = v_x_2167_;
v_isShared_2172_ = v_isSharedCheck_2177_;
goto v_resetjp_2170_;
}
else
{
lean_inc(v_a_2169_);
lean_dec(v_x_2167_);
v___x_2171_ = lean_box(0);
v_isShared_2172_ = v_isSharedCheck_2177_;
goto v_resetjp_2170_;
}
v_resetjp_2170_:
{
lean_object* v___x_2174_; 
if (v_isShared_2172_ == 0)
{
v___x_2174_ = v___x_2171_;
goto v_reusejp_2173_;
}
else
{
lean_object* v_reuseFailAlloc_2176_; 
v_reuseFailAlloc_2176_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2176_, 0, v_a_2169_);
v___x_2174_ = v_reuseFailAlloc_2176_;
goto v_reusejp_2173_;
}
v_reusejp_2173_:
{
lean_object* v___x_2175_; 
v___x_2175_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2175_, 0, v___x_2174_);
return v___x_2175_;
}
}
}
else
{
lean_object* v_a_2178_; lean_object* v___x_2179_; 
v_a_2178_ = lean_ctor_get(v_x_2167_, 0);
lean_inc(v_a_2178_);
lean_dec_ref_known(v_x_2167_, 1);
v___x_2179_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2179_, 0, v_a_2178_);
return v___x_2179_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_race___redArg___lam__3___boxed(lean_object* v_x_2180_, lean_object* v___y_2181_){
_start:
{
lean_object* v_res_2182_; 
v_res_2182_ = l_Std_Async_ContextAsync_race___redArg___lam__3(v_x_2180_);
return v_res_2182_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_race___redArg___lam__6(lean_object* v___f_2183_, lean_object* v___f_2184_, lean_object* v_prio_2185_, lean_object* v___f_2186_, lean_object* v_x_2187_){
_start:
{
if (lean_obj_tag(v_x_2187_) == 0)
{
lean_object* v_a_2189_; lean_object* v___x_2191_; uint8_t v_isShared_2192_; uint8_t v_isSharedCheck_2197_; 
lean_dec_ref(v___f_2186_);
lean_dec(v_prio_2185_);
lean_dec_ref(v___f_2184_);
lean_dec(v___f_2183_);
v_a_2189_ = lean_ctor_get(v_x_2187_, 0);
v_isSharedCheck_2197_ = !lean_is_exclusive(v_x_2187_);
if (v_isSharedCheck_2197_ == 0)
{
v___x_2191_ = v_x_2187_;
v_isShared_2192_ = v_isSharedCheck_2197_;
goto v_resetjp_2190_;
}
else
{
lean_inc(v_a_2189_);
lean_dec(v_x_2187_);
v___x_2191_ = lean_box(0);
v_isShared_2192_ = v_isSharedCheck_2197_;
goto v_resetjp_2190_;
}
v_resetjp_2190_:
{
lean_object* v___x_2194_; 
if (v_isShared_2192_ == 0)
{
v___x_2194_ = v___x_2191_;
goto v_reusejp_2193_;
}
else
{
lean_object* v_reuseFailAlloc_2196_; 
v_reuseFailAlloc_2196_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2196_, 0, v_a_2189_);
v___x_2194_ = v_reuseFailAlloc_2196_;
goto v_reusejp_2193_;
}
v_reusejp_2193_:
{
lean_object* v___x_2195_; 
v___x_2195_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2195_, 0, v___x_2194_);
return v___x_2195_;
}
}
}
else
{
lean_object* v_a_2198_; lean_object* v___x_2200_; uint8_t v_isShared_2201_; uint8_t v_isSharedCheck_2215_; 
v_a_2198_ = lean_ctor_get(v_x_2187_, 0);
v_isSharedCheck_2215_ = !lean_is_exclusive(v_x_2187_);
if (v_isSharedCheck_2215_ == 0)
{
v___x_2200_ = v_x_2187_;
v_isShared_2201_ = v_isSharedCheck_2215_;
goto v_resetjp_2199_;
}
else
{
lean_inc(v_a_2198_);
lean_dec(v_x_2187_);
v___x_2200_ = lean_box(0);
v_isShared_2201_ = v_isSharedCheck_2215_;
goto v_resetjp_2199_;
}
v_resetjp_2199_:
{
lean_object* v___x_2202_; lean_object* v___f_2203_; lean_object* v___f_2204_; lean_object* v___x_2205_; lean_object* v___x_2206_; lean_object* v___x_2207_; lean_object* v___x_2208_; uint8_t v___x_2209_; lean_object* v___x_2210_; lean_object* v___x_2212_; 
v___x_2202_ = lean_box(2);
v___f_2203_ = lean_alloc_closure((void*)(l_Std_Async_ContextAsync_concurrently___redArg___lam__3___boxed), 4, 2);
lean_closure_set(v___f_2203_, 0, v_a_2198_);
lean_closure_set(v___f_2203_, 1, v___x_2202_);
v___f_2204_ = lean_alloc_closure((void*)(l_Std_Async_ContextAsync_concurrently___redArg___lam__5___boxed), 4, 3);
lean_closure_set(v___f_2204_, 0, v___f_2183_);
lean_closure_set(v___f_2204_, 1, v___f_2184_);
lean_closure_set(v___f_2204_, 2, v___f_2203_);
v___x_2205_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_toBaseAsync___boxed), 4, 3);
lean_closure_set(v___x_2205_, 0, lean_box(0));
lean_closure_set(v___x_2205_, 1, lean_box(0));
lean_closure_set(v___x_2205_, 2, v___f_2204_);
v___x_2206_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_toRawBaseIO___boxed), 3, 2);
lean_closure_set(v___x_2206_, 0, lean_box(0));
lean_closure_set(v___x_2206_, 1, v___x_2205_);
v___x_2207_ = lean_io_as_task(v___x_2206_, v_prio_2185_);
v___x_2208_ = lean_unsigned_to_nat(0u);
v___x_2209_ = 1;
v___x_2210_ = lean_task_bind(v___x_2207_, v___f_2186_, v___x_2208_, v___x_2209_);
if (v_isShared_2201_ == 0)
{
lean_ctor_set(v___x_2200_, 0, v___x_2210_);
v___x_2212_ = v___x_2200_;
goto v_reusejp_2211_;
}
else
{
lean_object* v_reuseFailAlloc_2214_; 
v_reuseFailAlloc_2214_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2214_, 0, v___x_2210_);
v___x_2212_ = v_reuseFailAlloc_2214_;
goto v_reusejp_2211_;
}
v_reusejp_2211_:
{
lean_object* v___x_2213_; 
v___x_2213_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2213_, 0, v___x_2212_);
return v___x_2213_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_race___redArg___lam__6___boxed(lean_object* v___f_2216_, lean_object* v___f_2217_, lean_object* v_prio_2218_, lean_object* v___f_2219_, lean_object* v_x_2220_, lean_object* v___y_2221_){
_start:
{
lean_object* v_res_2222_; 
v_res_2222_ = l_Std_Async_ContextAsync_race___redArg___lam__6(v___f_2216_, v___f_2217_, v_prio_2218_, v___f_2219_, v_x_2220_);
return v_res_2222_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_race___redArg___lam__0(lean_object* v_y_2223_, lean_object* v_a_2224_){
_start:
{
lean_object* v___x_2226_; 
v___x_2226_ = lean_apply_2(v_y_2223_, v_a_2224_, lean_box(0));
return v___x_2226_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_race___redArg___lam__0___boxed(lean_object* v_y_2227_, lean_object* v_a_2228_, lean_object* v___y_2229_){
_start:
{
lean_object* v_res_2230_; 
v_res_2230_ = l_Std_Async_ContextAsync_race___redArg___lam__0(v_y_2227_, v_a_2228_);
return v_res_2230_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_race___redArg___lam__5(lean_object* v_a_2231_, lean_object* v_a_2232_, lean_object* v_result_2233_){
_start:
{
lean_object* v___x_2235_; lean_object* v___x_2236_; lean_object* v___x_2237_; 
v___x_2235_ = lean_io_promise_resolve(v_result_2233_, v_a_2231_);
v___x_2236_ = lean_box(2);
v___x_2237_ = l_Std_CancellationContext_cancel(v_a_2232_, v___x_2236_);
return v___x_2237_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_race___redArg___lam__5___boxed(lean_object* v_a_2238_, lean_object* v_a_2239_, lean_object* v_result_2240_, lean_object* v___y_2241_){
_start:
{
lean_object* v_res_2242_; 
v_res_2242_ = l_Std_Async_ContextAsync_race___redArg___lam__5(v_a_2238_, v_a_2239_, v_result_2240_);
lean_dec(v_a_2238_);
return v_res_2242_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_race___redArg___lam__4(lean_object* v_a_2243_, lean_object* v___f_2244_, lean_object* v___x_2245_, uint8_t v___x_2246_, lean_object* v___f_2247_, lean_object* v_x_2248_){
_start:
{
if (lean_obj_tag(v_x_2248_) == 0)
{
lean_object* v_a_2250_; lean_object* v___x_2252_; uint8_t v_isShared_2253_; uint8_t v_isSharedCheck_2258_; 
lean_dec_ref(v___f_2247_);
lean_dec(v___x_2245_);
lean_dec_ref(v___f_2244_);
lean_dec_ref(v_a_2243_);
v_a_2250_ = lean_ctor_get(v_x_2248_, 0);
v_isSharedCheck_2258_ = !lean_is_exclusive(v_x_2248_);
if (v_isSharedCheck_2258_ == 0)
{
v___x_2252_ = v_x_2248_;
v_isShared_2253_ = v_isSharedCheck_2258_;
goto v_resetjp_2251_;
}
else
{
lean_inc(v_a_2250_);
lean_dec(v_x_2248_);
v___x_2252_ = lean_box(0);
v_isShared_2253_ = v_isSharedCheck_2258_;
goto v_resetjp_2251_;
}
v_resetjp_2251_:
{
lean_object* v___x_2255_; 
if (v_isShared_2253_ == 0)
{
v___x_2255_ = v___x_2252_;
goto v_reusejp_2254_;
}
else
{
lean_object* v_reuseFailAlloc_2257_; 
v_reuseFailAlloc_2257_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2257_, 0, v_a_2250_);
v___x_2255_ = v_reuseFailAlloc_2257_;
goto v_reusejp_2254_;
}
v_reusejp_2254_:
{
lean_object* v___x_2256_; 
v___x_2256_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2256_, 0, v___x_2255_);
return v___x_2256_;
}
}
}
else
{
lean_object* v___x_2260_; uint8_t v_isShared_2261_; uint8_t v_isSharedCheck_2268_; 
v_isSharedCheck_2268_ = !lean_is_exclusive(v_x_2248_);
if (v_isSharedCheck_2268_ == 0)
{
lean_object* v_unused_2269_; 
v_unused_2269_ = lean_ctor_get(v_x_2248_, 0);
lean_dec(v_unused_2269_);
v___x_2260_ = v_x_2248_;
v_isShared_2261_ = v_isSharedCheck_2268_;
goto v_resetjp_2259_;
}
else
{
lean_dec(v_x_2248_);
v___x_2260_ = lean_box(0);
v_isShared_2261_ = v_isSharedCheck_2268_;
goto v_resetjp_2259_;
}
v_resetjp_2259_:
{
lean_object* v___x_2262_; lean_object* v___x_2264_; 
lean_inc(v___x_2245_);
v___x_2262_ = l_BaseIO_chainTask___redArg(v_a_2243_, v___f_2244_, v___x_2245_, v___x_2246_);
if (v_isShared_2261_ == 0)
{
lean_ctor_set(v___x_2260_, 0, v___x_2262_);
v___x_2264_ = v___x_2260_;
goto v_reusejp_2263_;
}
else
{
lean_object* v_reuseFailAlloc_2267_; 
v_reuseFailAlloc_2267_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2267_, 0, v___x_2262_);
v___x_2264_ = v_reuseFailAlloc_2267_;
goto v_reusejp_2263_;
}
v_reusejp_2263_:
{
lean_object* v___x_2265_; lean_object* v___x_2266_; 
v___x_2265_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2265_, 0, v___x_2264_);
v___x_2266_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_2245_, v___x_2246_, v___x_2265_, v___f_2247_);
return v___x_2266_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_race___redArg___lam__4___boxed(lean_object* v_a_2270_, lean_object* v___f_2271_, lean_object* v___x_2272_, lean_object* v___x_2273_, lean_object* v___f_2274_, lean_object* v_x_2275_, lean_object* v___y_2276_){
_start:
{
uint8_t v___x_4684__boxed_2277_; lean_object* v_res_2278_; 
v___x_4684__boxed_2277_ = lean_unbox(v___x_2273_);
v_res_2278_ = l_Std_Async_ContextAsync_race___redArg___lam__4(v_a_2270_, v___f_2271_, v___x_2272_, v___x_4684__boxed_2277_, v___f_2274_, v_x_2275_);
return v_res_2278_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_race___redArg___lam__1(lean_object* v_a_2279_, lean_object* v_a_2280_, lean_object* v___f_2281_, lean_object* v___f_2282_, lean_object* v_a_2283_, lean_object* v_a_2284_, lean_object* v_x_2285_){
_start:
{
if (lean_obj_tag(v_x_2285_) == 0)
{
lean_object* v_a_2287_; lean_object* v___x_2289_; uint8_t v_isShared_2290_; uint8_t v_isSharedCheck_2295_; 
lean_dec_ref(v_a_2284_);
lean_dec_ref(v_a_2283_);
lean_dec_ref(v___f_2282_);
lean_dec_ref(v___f_2281_);
lean_dec_ref(v_a_2280_);
lean_dec_ref(v_a_2279_);
v_a_2287_ = lean_ctor_get(v_x_2285_, 0);
v_isSharedCheck_2295_ = !lean_is_exclusive(v_x_2285_);
if (v_isSharedCheck_2295_ == 0)
{
v___x_2289_ = v_x_2285_;
v_isShared_2290_ = v_isSharedCheck_2295_;
goto v_resetjp_2288_;
}
else
{
lean_inc(v_a_2287_);
lean_dec(v_x_2285_);
v___x_2289_ = lean_box(0);
v_isShared_2290_ = v_isSharedCheck_2295_;
goto v_resetjp_2288_;
}
v_resetjp_2288_:
{
lean_object* v___x_2292_; 
if (v_isShared_2290_ == 0)
{
v___x_2292_ = v___x_2289_;
goto v_reusejp_2291_;
}
else
{
lean_object* v_reuseFailAlloc_2294_; 
v_reuseFailAlloc_2294_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2294_, 0, v_a_2287_);
v___x_2292_ = v_reuseFailAlloc_2294_;
goto v_reusejp_2291_;
}
v_reusejp_2291_:
{
lean_object* v___x_2293_; 
v___x_2293_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2293_, 0, v___x_2292_);
return v___x_2293_;
}
}
}
else
{
lean_object* v_a_2296_; lean_object* v___x_2298_; uint8_t v_isShared_2299_; uint8_t v_isSharedCheck_2313_; 
v_a_2296_ = lean_ctor_get(v_x_2285_, 0);
v_isSharedCheck_2313_ = !lean_is_exclusive(v_x_2285_);
if (v_isSharedCheck_2313_ == 0)
{
v___x_2298_ = v_x_2285_;
v_isShared_2299_ = v_isSharedCheck_2313_;
goto v_resetjp_2297_;
}
else
{
lean_inc(v_a_2296_);
lean_dec(v_x_2285_);
v___x_2298_ = lean_box(0);
v_isShared_2299_ = v_isSharedCheck_2313_;
goto v_resetjp_2297_;
}
v_resetjp_2297_:
{
lean_object* v___f_2300_; lean_object* v___f_2301_; lean_object* v___f_2302_; lean_object* v___x_2303_; uint8_t v___x_2304_; lean_object* v___x_2305_; lean_object* v___f_2306_; lean_object* v___x_2307_; lean_object* v___x_2309_; 
lean_inc_n(v_a_2296_, 2);
v___f_2300_ = lean_alloc_closure((void*)(l_Std_Async_ContextAsync_race___redArg___lam__5___boxed), 4, 2);
lean_closure_set(v___f_2300_, 0, v_a_2296_);
lean_closure_set(v___f_2300_, 1, v_a_2279_);
v___f_2301_ = lean_alloc_closure((void*)(l_Std_Async_ContextAsync_race___redArg___lam__5___boxed), 4, 2);
lean_closure_set(v___f_2301_, 0, v_a_2296_);
lean_closure_set(v___f_2301_, 1, v_a_2280_);
v___f_2302_ = lean_alloc_closure((void*)(l_Std_Async_ContextAsync_raceAll___redArg___lam__13___boxed), 5, 3);
lean_closure_set(v___f_2302_, 0, v_a_2296_);
lean_closure_set(v___f_2302_, 1, v___f_2281_);
lean_closure_set(v___f_2302_, 2, v___f_2282_);
v___x_2303_ = lean_unsigned_to_nat(0u);
v___x_2304_ = 0;
v___x_2305_ = lean_box(v___x_2304_);
v___f_2306_ = lean_alloc_closure((void*)(l_Std_Async_ContextAsync_race___redArg___lam__4___boxed), 7, 5);
lean_closure_set(v___f_2306_, 0, v_a_2283_);
lean_closure_set(v___f_2306_, 1, v___f_2301_);
lean_closure_set(v___f_2306_, 2, v___x_2303_);
lean_closure_set(v___f_2306_, 3, v___x_2305_);
lean_closure_set(v___f_2306_, 4, v___f_2302_);
v___x_2307_ = l_BaseIO_chainTask___redArg(v_a_2284_, v___f_2300_, v___x_2303_, v___x_2304_);
if (v_isShared_2299_ == 0)
{
lean_ctor_set(v___x_2298_, 0, v___x_2307_);
v___x_2309_ = v___x_2298_;
goto v_reusejp_2308_;
}
else
{
lean_object* v_reuseFailAlloc_2312_; 
v_reuseFailAlloc_2312_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2312_, 0, v___x_2307_);
v___x_2309_ = v_reuseFailAlloc_2312_;
goto v_reusejp_2308_;
}
v_reusejp_2308_:
{
lean_object* v___x_2310_; lean_object* v___x_2311_; 
v___x_2310_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2310_, 0, v___x_2309_);
v___x_2311_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_2303_, v___x_2304_, v___x_2310_, v___f_2306_);
return v___x_2311_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_race___redArg___lam__1___boxed(lean_object* v_a_2314_, lean_object* v_a_2315_, lean_object* v___f_2316_, lean_object* v___f_2317_, lean_object* v_a_2318_, lean_object* v_a_2319_, lean_object* v_x_2320_, lean_object* v___y_2321_){
_start:
{
lean_object* v_res_2322_; 
v_res_2322_ = l_Std_Async_ContextAsync_race___redArg___lam__1(v_a_2314_, v_a_2315_, v___f_2316_, v___f_2317_, v_a_2318_, v_a_2319_, v_x_2320_);
return v_res_2322_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_race___redArg___lam__2(lean_object* v_a_2323_, lean_object* v_a_2324_, lean_object* v___f_2325_, lean_object* v___f_2326_, lean_object* v_a_2327_, lean_object* v_x_2328_){
_start:
{
if (lean_obj_tag(v_x_2328_) == 0)
{
lean_object* v_a_2330_; lean_object* v___x_2332_; uint8_t v_isShared_2333_; uint8_t v_isSharedCheck_2338_; 
lean_dec_ref(v_a_2327_);
lean_dec_ref(v___f_2326_);
lean_dec_ref(v___f_2325_);
lean_dec_ref(v_a_2324_);
lean_dec_ref(v_a_2323_);
v_a_2330_ = lean_ctor_get(v_x_2328_, 0);
v_isSharedCheck_2338_ = !lean_is_exclusive(v_x_2328_);
if (v_isSharedCheck_2338_ == 0)
{
v___x_2332_ = v_x_2328_;
v_isShared_2333_ = v_isSharedCheck_2338_;
goto v_resetjp_2331_;
}
else
{
lean_inc(v_a_2330_);
lean_dec(v_x_2328_);
v___x_2332_ = lean_box(0);
v_isShared_2333_ = v_isSharedCheck_2338_;
goto v_resetjp_2331_;
}
v_resetjp_2331_:
{
lean_object* v___x_2335_; 
if (v_isShared_2333_ == 0)
{
v___x_2335_ = v___x_2332_;
goto v_reusejp_2334_;
}
else
{
lean_object* v_reuseFailAlloc_2337_; 
v_reuseFailAlloc_2337_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2337_, 0, v_a_2330_);
v___x_2335_ = v_reuseFailAlloc_2337_;
goto v_reusejp_2334_;
}
v_reusejp_2334_:
{
lean_object* v___x_2336_; 
v___x_2336_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2336_, 0, v___x_2335_);
return v___x_2336_;
}
}
}
else
{
lean_object* v_a_2339_; lean_object* v___x_2341_; uint8_t v_isShared_2342_; uint8_t v_isSharedCheck_2352_; 
v_a_2339_ = lean_ctor_get(v_x_2328_, 0);
v_isSharedCheck_2352_ = !lean_is_exclusive(v_x_2328_);
if (v_isSharedCheck_2352_ == 0)
{
v___x_2341_ = v_x_2328_;
v_isShared_2342_ = v_isSharedCheck_2352_;
goto v_resetjp_2340_;
}
else
{
lean_inc(v_a_2339_);
lean_dec(v_x_2328_);
v___x_2341_ = lean_box(0);
v_isShared_2342_ = v_isSharedCheck_2352_;
goto v_resetjp_2340_;
}
v_resetjp_2340_:
{
lean_object* v___f_2343_; lean_object* v___x_2344_; uint8_t v___x_2345_; lean_object* v___x_2346_; lean_object* v___x_2348_; 
v___f_2343_ = lean_alloc_closure((void*)(l_Std_Async_ContextAsync_race___redArg___lam__1___boxed), 8, 6);
lean_closure_set(v___f_2343_, 0, v_a_2323_);
lean_closure_set(v___f_2343_, 1, v_a_2324_);
lean_closure_set(v___f_2343_, 2, v___f_2325_);
lean_closure_set(v___f_2343_, 3, v___f_2326_);
lean_closure_set(v___f_2343_, 4, v_a_2339_);
lean_closure_set(v___f_2343_, 5, v_a_2327_);
v___x_2344_ = lean_unsigned_to_nat(0u);
v___x_2345_ = 0;
v___x_2346_ = lean_io_promise_new();
if (v_isShared_2342_ == 0)
{
lean_ctor_set(v___x_2341_, 0, v___x_2346_);
v___x_2348_ = v___x_2341_;
goto v_reusejp_2347_;
}
else
{
lean_object* v_reuseFailAlloc_2351_; 
v_reuseFailAlloc_2351_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2351_, 0, v___x_2346_);
v___x_2348_ = v_reuseFailAlloc_2351_;
goto v_reusejp_2347_;
}
v_reusejp_2347_:
{
lean_object* v___x_2349_; lean_object* v___x_2350_; 
v___x_2349_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2349_, 0, v___x_2348_);
v___x_2350_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_2344_, v___x_2345_, v___x_2349_, v___f_2343_);
return v___x_2350_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_race___redArg___lam__2___boxed(lean_object* v_a_2353_, lean_object* v_a_2354_, lean_object* v___f_2355_, lean_object* v___f_2356_, lean_object* v_a_2357_, lean_object* v_x_2358_, lean_object* v___y_2359_){
_start:
{
lean_object* v_res_2360_; 
v_res_2360_ = l_Std_Async_ContextAsync_race___redArg___lam__2(v_a_2353_, v_a_2354_, v___f_2355_, v___f_2356_, v_a_2357_, v_x_2358_);
return v_res_2360_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_race___redArg___lam__7(lean_object* v_a_2361_, lean_object* v_a_2362_, lean_object* v___f_2363_, lean_object* v___f_2364_, lean_object* v___y_2365_, lean_object* v___f_2366_, lean_object* v_x_2367_){
_start:
{
if (lean_obj_tag(v_x_2367_) == 0)
{
lean_object* v_a_2369_; lean_object* v___x_2371_; uint8_t v_isShared_2372_; uint8_t v_isSharedCheck_2377_; 
lean_dec_ref(v___f_2366_);
lean_dec_ref(v___f_2364_);
lean_dec_ref(v___f_2363_);
lean_dec_ref(v_a_2362_);
lean_dec_ref(v_a_2361_);
v_a_2369_ = lean_ctor_get(v_x_2367_, 0);
v_isSharedCheck_2377_ = !lean_is_exclusive(v_x_2367_);
if (v_isSharedCheck_2377_ == 0)
{
v___x_2371_ = v_x_2367_;
v_isShared_2372_ = v_isSharedCheck_2377_;
goto v_resetjp_2370_;
}
else
{
lean_inc(v_a_2369_);
lean_dec(v_x_2367_);
v___x_2371_ = lean_box(0);
v_isShared_2372_ = v_isSharedCheck_2377_;
goto v_resetjp_2370_;
}
v_resetjp_2370_:
{
lean_object* v___x_2374_; 
if (v_isShared_2372_ == 0)
{
v___x_2374_ = v___x_2371_;
goto v_reusejp_2373_;
}
else
{
lean_object* v_reuseFailAlloc_2376_; 
v_reuseFailAlloc_2376_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2376_, 0, v_a_2369_);
v___x_2374_ = v_reuseFailAlloc_2376_;
goto v_reusejp_2373_;
}
v_reusejp_2373_:
{
lean_object* v___x_2375_; 
v___x_2375_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2375_, 0, v___x_2374_);
return v___x_2375_;
}
}
}
else
{
lean_object* v_a_2378_; lean_object* v___x_2380_; uint8_t v_isShared_2381_; uint8_t v_isSharedCheck_2392_; 
v_a_2378_ = lean_ctor_get(v_x_2367_, 0);
v_isSharedCheck_2392_ = !lean_is_exclusive(v_x_2367_);
if (v_isSharedCheck_2392_ == 0)
{
v___x_2380_ = v_x_2367_;
v_isShared_2381_ = v_isSharedCheck_2392_;
goto v_resetjp_2379_;
}
else
{
lean_inc(v_a_2378_);
lean_dec(v_x_2367_);
v___x_2380_ = lean_box(0);
v_isShared_2381_ = v_isSharedCheck_2392_;
goto v_resetjp_2379_;
}
v_resetjp_2379_:
{
lean_object* v___f_2382_; lean_object* v___x_2383_; uint8_t v___x_2384_; lean_object* v___x_2385_; lean_object* v___x_2387_; 
v___f_2382_ = lean_alloc_closure((void*)(l_Std_Async_ContextAsync_race___redArg___lam__2___boxed), 7, 5);
lean_closure_set(v___f_2382_, 0, v_a_2361_);
lean_closure_set(v___f_2382_, 1, v_a_2362_);
lean_closure_set(v___f_2382_, 2, v___f_2363_);
lean_closure_set(v___f_2382_, 3, v___f_2364_);
lean_closure_set(v___f_2382_, 4, v_a_2378_);
v___x_2383_ = lean_unsigned_to_nat(0u);
v___x_2384_ = 0;
lean_inc_ref(v___y_2365_);
v___x_2385_ = l_Std_CancellationContext_fork(v___y_2365_);
if (v_isShared_2381_ == 0)
{
lean_ctor_set(v___x_2380_, 0, v___x_2385_);
v___x_2387_ = v___x_2380_;
goto v_reusejp_2386_;
}
else
{
lean_object* v_reuseFailAlloc_2391_; 
v_reuseFailAlloc_2391_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2391_, 0, v___x_2385_);
v___x_2387_ = v_reuseFailAlloc_2391_;
goto v_reusejp_2386_;
}
v_reusejp_2386_:
{
lean_object* v___x_2388_; lean_object* v___x_2389_; lean_object* v___x_2390_; 
v___x_2388_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2388_, 0, v___x_2387_);
v___x_2389_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_2383_, v___x_2384_, v___x_2388_, v___f_2366_);
v___x_2390_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_2383_, v___x_2384_, v___x_2389_, v___f_2382_);
return v___x_2390_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_race___redArg___lam__7___boxed(lean_object* v_a_2393_, lean_object* v_a_2394_, lean_object* v___f_2395_, lean_object* v___f_2396_, lean_object* v___y_2397_, lean_object* v___f_2398_, lean_object* v_x_2399_, lean_object* v___y_2400_){
_start:
{
lean_object* v_res_2401_; 
v_res_2401_ = l_Std_Async_ContextAsync_race___redArg___lam__7(v_a_2393_, v_a_2394_, v___f_2395_, v___f_2396_, v___y_2397_, v___f_2398_, v_x_2399_);
lean_dec_ref(v___y_2397_);
return v_res_2401_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_race___redArg___lam__8(lean_object* v_y_2402_, lean_object* v___f_2403_, lean_object* v_prio_2404_, lean_object* v___f_2405_, lean_object* v_a_2406_, lean_object* v___f_2407_, lean_object* v___f_2408_, lean_object* v___y_2409_, lean_object* v___f_2410_, lean_object* v_x_2411_){
_start:
{
if (lean_obj_tag(v_x_2411_) == 0)
{
lean_object* v_a_2413_; lean_object* v___x_2415_; uint8_t v_isShared_2416_; uint8_t v_isSharedCheck_2421_; 
lean_dec_ref(v___f_2410_);
lean_dec_ref(v___f_2408_);
lean_dec_ref(v___f_2407_);
lean_dec_ref(v_a_2406_);
lean_dec_ref(v___f_2405_);
lean_dec(v_prio_2404_);
lean_dec(v___f_2403_);
lean_dec_ref(v_y_2402_);
v_a_2413_ = lean_ctor_get(v_x_2411_, 0);
v_isSharedCheck_2421_ = !lean_is_exclusive(v_x_2411_);
if (v_isSharedCheck_2421_ == 0)
{
v___x_2415_ = v_x_2411_;
v_isShared_2416_ = v_isSharedCheck_2421_;
goto v_resetjp_2414_;
}
else
{
lean_inc(v_a_2413_);
lean_dec(v_x_2411_);
v___x_2415_ = lean_box(0);
v_isShared_2416_ = v_isSharedCheck_2421_;
goto v_resetjp_2414_;
}
v_resetjp_2414_:
{
lean_object* v___x_2418_; 
if (v_isShared_2416_ == 0)
{
v___x_2418_ = v___x_2415_;
goto v_reusejp_2417_;
}
else
{
lean_object* v_reuseFailAlloc_2420_; 
v_reuseFailAlloc_2420_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2420_, 0, v_a_2413_);
v___x_2418_ = v_reuseFailAlloc_2420_;
goto v_reusejp_2417_;
}
v_reusejp_2417_:
{
lean_object* v___x_2419_; 
v___x_2419_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2419_, 0, v___x_2418_);
return v___x_2419_;
}
}
}
else
{
lean_object* v_a_2422_; lean_object* v___x_2424_; uint8_t v_isShared_2425_; uint8_t v_isSharedCheck_2438_; 
v_a_2422_ = lean_ctor_get(v_x_2411_, 0);
v_isSharedCheck_2438_ = !lean_is_exclusive(v_x_2411_);
if (v_isSharedCheck_2438_ == 0)
{
v___x_2424_ = v_x_2411_;
v_isShared_2425_ = v_isSharedCheck_2438_;
goto v_resetjp_2423_;
}
else
{
lean_inc(v_a_2422_);
lean_dec(v_x_2411_);
v___x_2424_ = lean_box(0);
v_isShared_2425_ = v_isSharedCheck_2438_;
goto v_resetjp_2423_;
}
v_resetjp_2423_:
{
lean_object* v___f_2426_; lean_object* v___f_2427_; lean_object* v___f_2428_; lean_object* v___x_2429_; uint8_t v___x_2430_; lean_object* v___x_2431_; lean_object* v___x_2433_; 
lean_inc(v_a_2422_);
v___f_2426_ = lean_alloc_closure((void*)(l_Std_Async_ContextAsync_race___redArg___lam__0___boxed), 3, 2);
lean_closure_set(v___f_2426_, 0, v_y_2402_);
lean_closure_set(v___f_2426_, 1, v_a_2422_);
v___f_2427_ = lean_alloc_closure((void*)(l_Std_Async_ContextAsync_race___redArg___lam__6___boxed), 6, 4);
lean_closure_set(v___f_2427_, 0, v___f_2403_);
lean_closure_set(v___f_2427_, 1, v___f_2426_);
lean_closure_set(v___f_2427_, 2, v_prio_2404_);
lean_closure_set(v___f_2427_, 3, v___f_2405_);
lean_inc_ref_n(v___y_2409_, 2);
v___f_2428_ = lean_alloc_closure((void*)(l_Std_Async_ContextAsync_race___redArg___lam__7___boxed), 8, 6);
lean_closure_set(v___f_2428_, 0, v_a_2422_);
lean_closure_set(v___f_2428_, 1, v_a_2406_);
lean_closure_set(v___f_2428_, 2, v___f_2407_);
lean_closure_set(v___f_2428_, 3, v___f_2408_);
lean_closure_set(v___f_2428_, 4, v___y_2409_);
lean_closure_set(v___f_2428_, 5, v___f_2427_);
v___x_2429_ = lean_unsigned_to_nat(0u);
v___x_2430_ = 0;
v___x_2431_ = l_Std_CancellationContext_fork(v___y_2409_);
if (v_isShared_2425_ == 0)
{
lean_ctor_set(v___x_2424_, 0, v___x_2431_);
v___x_2433_ = v___x_2424_;
goto v_reusejp_2432_;
}
else
{
lean_object* v_reuseFailAlloc_2437_; 
v_reuseFailAlloc_2437_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2437_, 0, v___x_2431_);
v___x_2433_ = v_reuseFailAlloc_2437_;
goto v_reusejp_2432_;
}
v_reusejp_2432_:
{
lean_object* v___x_2434_; lean_object* v___x_2435_; lean_object* v___x_2436_; 
v___x_2434_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2434_, 0, v___x_2433_);
v___x_2435_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_2429_, v___x_2430_, v___x_2434_, v___f_2410_);
v___x_2436_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_2429_, v___x_2430_, v___x_2435_, v___f_2428_);
return v___x_2436_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_race___redArg___lam__8___boxed(lean_object* v_y_2439_, lean_object* v___f_2440_, lean_object* v_prio_2441_, lean_object* v___f_2442_, lean_object* v_a_2443_, lean_object* v___f_2444_, lean_object* v___f_2445_, lean_object* v___y_2446_, lean_object* v___f_2447_, lean_object* v_x_2448_, lean_object* v___y_2449_){
_start:
{
lean_object* v_res_2450_; 
v_res_2450_ = l_Std_Async_ContextAsync_race___redArg___lam__8(v_y_2439_, v___f_2440_, v_prio_2441_, v___f_2442_, v_a_2443_, v___f_2444_, v___f_2445_, v___y_2446_, v___f_2447_, v_x_2448_);
lean_dec_ref(v___y_2446_);
return v_res_2450_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_race___redArg___lam__9(lean_object* v_x_2451_, lean_object* v___f_2452_, lean_object* v_prio_2453_, lean_object* v___f_2454_, lean_object* v_y_2455_, lean_object* v___f_2456_, lean_object* v___f_2457_, lean_object* v___f_2458_, lean_object* v___f_2459_, lean_object* v___y_2460_, lean_object* v_a_2461_, lean_object* v_x_2462_){
_start:
{
if (lean_obj_tag(v_x_2462_) == 0)
{
lean_object* v_a_2464_; lean_object* v___x_2466_; uint8_t v_isShared_2467_; uint8_t v_isSharedCheck_2472_; 
lean_dec_ref(v_a_2461_);
lean_dec_ref(v___f_2459_);
lean_dec_ref(v___f_2458_);
lean_dec_ref(v___f_2457_);
lean_dec(v___f_2456_);
lean_dec_ref(v_y_2455_);
lean_dec_ref(v___f_2454_);
lean_dec(v_prio_2453_);
lean_dec(v___f_2452_);
lean_dec_ref(v_x_2451_);
v_a_2464_ = lean_ctor_get(v_x_2462_, 0);
v_isSharedCheck_2472_ = !lean_is_exclusive(v_x_2462_);
if (v_isSharedCheck_2472_ == 0)
{
v___x_2466_ = v_x_2462_;
v_isShared_2467_ = v_isSharedCheck_2472_;
goto v_resetjp_2465_;
}
else
{
lean_inc(v_a_2464_);
lean_dec(v_x_2462_);
v___x_2466_ = lean_box(0);
v_isShared_2467_ = v_isSharedCheck_2472_;
goto v_resetjp_2465_;
}
v_resetjp_2465_:
{
lean_object* v___x_2469_; 
if (v_isShared_2467_ == 0)
{
v___x_2469_ = v___x_2466_;
goto v_reusejp_2468_;
}
else
{
lean_object* v_reuseFailAlloc_2471_; 
v_reuseFailAlloc_2471_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2471_, 0, v_a_2464_);
v___x_2469_ = v_reuseFailAlloc_2471_;
goto v_reusejp_2468_;
}
v_reusejp_2468_:
{
lean_object* v___x_2470_; 
v___x_2470_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2470_, 0, v___x_2469_);
return v___x_2470_;
}
}
}
else
{
lean_object* v_a_2473_; lean_object* v___x_2475_; uint8_t v_isShared_2476_; uint8_t v_isSharedCheck_2488_; 
v_a_2473_ = lean_ctor_get(v_x_2462_, 0);
v_isSharedCheck_2488_ = !lean_is_exclusive(v_x_2462_);
if (v_isSharedCheck_2488_ == 0)
{
v___x_2475_ = v_x_2462_;
v_isShared_2476_ = v_isSharedCheck_2488_;
goto v_resetjp_2474_;
}
else
{
lean_inc(v_a_2473_);
lean_dec(v_x_2462_);
v___x_2475_ = lean_box(0);
v_isShared_2476_ = v_isSharedCheck_2488_;
goto v_resetjp_2474_;
}
v_resetjp_2474_:
{
lean_object* v___f_2477_; lean_object* v___f_2478_; lean_object* v___f_2479_; lean_object* v___x_2480_; uint8_t v___x_2481_; lean_object* v___x_2482_; lean_object* v___x_2484_; 
lean_inc(v_a_2473_);
v___f_2477_ = lean_alloc_closure((void*)(l_Std_Async_ContextAsync_raceAll___redArg___lam__10___boxed), 3, 2);
lean_closure_set(v___f_2477_, 0, v_x_2451_);
lean_closure_set(v___f_2477_, 1, v_a_2473_);
lean_inc(v_prio_2453_);
v___f_2478_ = lean_alloc_closure((void*)(l_Std_Async_ContextAsync_race___redArg___lam__6___boxed), 6, 4);
lean_closure_set(v___f_2478_, 0, v___f_2452_);
lean_closure_set(v___f_2478_, 1, v___f_2477_);
lean_closure_set(v___f_2478_, 2, v_prio_2453_);
lean_closure_set(v___f_2478_, 3, v___f_2454_);
lean_inc_ref(v___y_2460_);
v___f_2479_ = lean_alloc_closure((void*)(l_Std_Async_ContextAsync_race___redArg___lam__8___boxed), 11, 9);
lean_closure_set(v___f_2479_, 0, v_y_2455_);
lean_closure_set(v___f_2479_, 1, v___f_2456_);
lean_closure_set(v___f_2479_, 2, v_prio_2453_);
lean_closure_set(v___f_2479_, 3, v___f_2457_);
lean_closure_set(v___f_2479_, 4, v_a_2473_);
lean_closure_set(v___f_2479_, 5, v___f_2458_);
lean_closure_set(v___f_2479_, 6, v___f_2459_);
lean_closure_set(v___f_2479_, 7, v___y_2460_);
lean_closure_set(v___f_2479_, 8, v___f_2478_);
v___x_2480_ = lean_unsigned_to_nat(0u);
v___x_2481_ = 0;
v___x_2482_ = l_Std_CancellationContext_fork(v_a_2461_);
if (v_isShared_2476_ == 0)
{
lean_ctor_set(v___x_2475_, 0, v___x_2482_);
v___x_2484_ = v___x_2475_;
goto v_reusejp_2483_;
}
else
{
lean_object* v_reuseFailAlloc_2487_; 
v_reuseFailAlloc_2487_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2487_, 0, v___x_2482_);
v___x_2484_ = v_reuseFailAlloc_2487_;
goto v_reusejp_2483_;
}
v_reusejp_2483_:
{
lean_object* v___x_2485_; lean_object* v___x_2486_; 
v___x_2485_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2485_, 0, v___x_2484_);
v___x_2486_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_2480_, v___x_2481_, v___x_2485_, v___f_2479_);
return v___x_2486_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_race___redArg___lam__9___boxed(lean_object* v_x_2489_, lean_object* v___f_2490_, lean_object* v_prio_2491_, lean_object* v___f_2492_, lean_object* v_y_2493_, lean_object* v___f_2494_, lean_object* v___f_2495_, lean_object* v___f_2496_, lean_object* v___f_2497_, lean_object* v___y_2498_, lean_object* v_a_2499_, lean_object* v_x_2500_, lean_object* v___y_2501_){
_start:
{
lean_object* v_res_2502_; 
v_res_2502_ = l_Std_Async_ContextAsync_race___redArg___lam__9(v_x_2489_, v___f_2490_, v_prio_2491_, v___f_2492_, v_y_2493_, v___f_2494_, v___f_2495_, v___f_2496_, v___f_2497_, v___y_2498_, v_a_2499_, v_x_2500_);
lean_dec_ref(v___y_2498_);
return v_res_2502_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_race___redArg___lam__10(lean_object* v_x_2503_, lean_object* v___f_2504_, lean_object* v_prio_2505_, lean_object* v___f_2506_, lean_object* v_y_2507_, lean_object* v___f_2508_, lean_object* v___f_2509_, lean_object* v___f_2510_, lean_object* v___f_2511_, lean_object* v___y_2512_, lean_object* v_x_2513_){
_start:
{
if (lean_obj_tag(v_x_2513_) == 0)
{
lean_object* v_a_2515_; lean_object* v___x_2517_; uint8_t v_isShared_2518_; uint8_t v_isSharedCheck_2523_; 
lean_dec_ref(v___f_2511_);
lean_dec_ref(v___f_2510_);
lean_dec_ref(v___f_2509_);
lean_dec(v___f_2508_);
lean_dec_ref(v_y_2507_);
lean_dec_ref(v___f_2506_);
lean_dec(v_prio_2505_);
lean_dec(v___f_2504_);
lean_dec_ref(v_x_2503_);
v_a_2515_ = lean_ctor_get(v_x_2513_, 0);
v_isSharedCheck_2523_ = !lean_is_exclusive(v_x_2513_);
if (v_isSharedCheck_2523_ == 0)
{
v___x_2517_ = v_x_2513_;
v_isShared_2518_ = v_isSharedCheck_2523_;
goto v_resetjp_2516_;
}
else
{
lean_inc(v_a_2515_);
lean_dec(v_x_2513_);
v___x_2517_ = lean_box(0);
v_isShared_2518_ = v_isSharedCheck_2523_;
goto v_resetjp_2516_;
}
v_resetjp_2516_:
{
lean_object* v___x_2520_; 
if (v_isShared_2518_ == 0)
{
v___x_2520_ = v___x_2517_;
goto v_reusejp_2519_;
}
else
{
lean_object* v_reuseFailAlloc_2522_; 
v_reuseFailAlloc_2522_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2522_, 0, v_a_2515_);
v___x_2520_ = v_reuseFailAlloc_2522_;
goto v_reusejp_2519_;
}
v_reusejp_2519_:
{
lean_object* v___x_2521_; 
v___x_2521_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2521_, 0, v___x_2520_);
return v___x_2521_;
}
}
}
else
{
lean_object* v_a_2524_; lean_object* v___x_2526_; uint8_t v_isShared_2527_; uint8_t v_isSharedCheck_2537_; 
v_a_2524_ = lean_ctor_get(v_x_2513_, 0);
v_isSharedCheck_2537_ = !lean_is_exclusive(v_x_2513_);
if (v_isSharedCheck_2537_ == 0)
{
v___x_2526_ = v_x_2513_;
v_isShared_2527_ = v_isSharedCheck_2537_;
goto v_resetjp_2525_;
}
else
{
lean_inc(v_a_2524_);
lean_dec(v_x_2513_);
v___x_2526_ = lean_box(0);
v_isShared_2527_ = v_isSharedCheck_2537_;
goto v_resetjp_2525_;
}
v_resetjp_2525_:
{
lean_object* v___f_2528_; lean_object* v___x_2529_; uint8_t v___x_2530_; lean_object* v___x_2531_; lean_object* v___x_2533_; 
lean_inc(v_a_2524_);
lean_inc_ref(v___y_2512_);
v___f_2528_ = lean_alloc_closure((void*)(l_Std_Async_ContextAsync_race___redArg___lam__9___boxed), 13, 11);
lean_closure_set(v___f_2528_, 0, v_x_2503_);
lean_closure_set(v___f_2528_, 1, v___f_2504_);
lean_closure_set(v___f_2528_, 2, v_prio_2505_);
lean_closure_set(v___f_2528_, 3, v___f_2506_);
lean_closure_set(v___f_2528_, 4, v_y_2507_);
lean_closure_set(v___f_2528_, 5, v___f_2508_);
lean_closure_set(v___f_2528_, 6, v___f_2509_);
lean_closure_set(v___f_2528_, 7, v___f_2510_);
lean_closure_set(v___f_2528_, 8, v___f_2511_);
lean_closure_set(v___f_2528_, 9, v___y_2512_);
lean_closure_set(v___f_2528_, 10, v_a_2524_);
v___x_2529_ = lean_unsigned_to_nat(0u);
v___x_2530_ = 0;
v___x_2531_ = l_Std_CancellationContext_fork(v_a_2524_);
if (v_isShared_2527_ == 0)
{
lean_ctor_set(v___x_2526_, 0, v___x_2531_);
v___x_2533_ = v___x_2526_;
goto v_reusejp_2532_;
}
else
{
lean_object* v_reuseFailAlloc_2536_; 
v_reuseFailAlloc_2536_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2536_, 0, v___x_2531_);
v___x_2533_ = v_reuseFailAlloc_2536_;
goto v_reusejp_2532_;
}
v_reusejp_2532_:
{
lean_object* v___x_2534_; lean_object* v___x_2535_; 
v___x_2534_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2534_, 0, v___x_2533_);
v___x_2535_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_2529_, v___x_2530_, v___x_2534_, v___f_2528_);
return v___x_2535_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_race___redArg___lam__10___boxed(lean_object* v_x_2538_, lean_object* v___f_2539_, lean_object* v_prio_2540_, lean_object* v___f_2541_, lean_object* v_y_2542_, lean_object* v___f_2543_, lean_object* v___f_2544_, lean_object* v___f_2545_, lean_object* v___f_2546_, lean_object* v___y_2547_, lean_object* v_x_2548_, lean_object* v___y_2549_){
_start:
{
lean_object* v_res_2550_; 
v_res_2550_ = l_Std_Async_ContextAsync_race___redArg___lam__10(v_x_2538_, v___f_2539_, v_prio_2540_, v___f_2541_, v_y_2542_, v___f_2543_, v___f_2544_, v___f_2545_, v___f_2546_, v___y_2547_, v_x_2548_);
lean_dec_ref(v___y_2547_);
return v_res_2550_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_race___redArg(lean_object* v_x_2552_, lean_object* v_y_2553_, lean_object* v_prio_2554_, lean_object* v___y_2555_){
_start:
{
lean_object* v___f_2557_; lean_object* v___f_2558_; lean_object* v___f_2559_; lean_object* v___f_2560_; lean_object* v___f_2561_; lean_object* v___x_2562_; uint8_t v___x_2563_; lean_object* v___x_2564_; lean_object* v___x_2565_; lean_object* v___x_2566_; 
v___f_2557_ = ((lean_object*)(l_Std_Async_ContextAsync_concurrently___redArg___closed__0));
v___f_2558_ = ((lean_object*)(l_Std_Async_ContextAsync_concurrently___redArg___closed__1));
v___f_2559_ = ((lean_object*)(l_Std_Async_ContextAsync_raceAll___redArg___closed__0));
v___f_2560_ = ((lean_object*)(l_Std_Async_ContextAsync_race___redArg___closed__0));
lean_inc_ref_n(v___y_2555_, 2);
v___f_2561_ = lean_alloc_closure((void*)(l_Std_Async_ContextAsync_race___redArg___lam__10___boxed), 12, 10);
lean_closure_set(v___f_2561_, 0, v_x_2552_);
lean_closure_set(v___f_2561_, 1, v___f_2558_);
lean_closure_set(v___f_2561_, 2, v_prio_2554_);
lean_closure_set(v___f_2561_, 3, v___f_2557_);
lean_closure_set(v___f_2561_, 4, v_y_2553_);
lean_closure_set(v___f_2561_, 5, v___f_2558_);
lean_closure_set(v___f_2561_, 6, v___f_2557_);
lean_closure_set(v___f_2561_, 7, v___f_2559_);
lean_closure_set(v___f_2561_, 8, v___f_2560_);
lean_closure_set(v___f_2561_, 9, v___y_2555_);
v___x_2562_ = lean_unsigned_to_nat(0u);
v___x_2563_ = 0;
v___x_2564_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2564_, 0, v___y_2555_);
v___x_2565_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2565_, 0, v___x_2564_);
v___x_2566_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_2562_, v___x_2563_, v___x_2565_, v___f_2561_);
return v___x_2566_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_race___redArg___boxed(lean_object* v_x_2567_, lean_object* v_y_2568_, lean_object* v_prio_2569_, lean_object* v___y_2570_, lean_object* v___y_2571_){
_start:
{
lean_object* v_res_2572_; 
v_res_2572_ = l_Std_Async_ContextAsync_race___redArg(v_x_2567_, v_y_2568_, v_prio_2569_, v___y_2570_);
lean_dec_ref(v___y_2570_);
return v_res_2572_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_race(lean_object* v_00_u03b1_2573_, lean_object* v_inst_2574_, lean_object* v_x_2575_, lean_object* v_y_2576_, lean_object* v_prio_2577_, lean_object* v___y_2578_){
_start:
{
lean_object* v___f_2580_; lean_object* v___f_2581_; lean_object* v___f_2582_; lean_object* v___f_2583_; lean_object* v___f_2584_; lean_object* v___x_2585_; uint8_t v___x_2586_; lean_object* v___x_2587_; lean_object* v___x_2588_; lean_object* v___x_2589_; 
v___f_2580_ = ((lean_object*)(l_Std_Async_ContextAsync_concurrently___redArg___closed__0));
v___f_2581_ = ((lean_object*)(l_Std_Async_ContextAsync_concurrently___redArg___closed__1));
v___f_2582_ = ((lean_object*)(l_Std_Async_ContextAsync_raceAll___redArg___closed__0));
v___f_2583_ = ((lean_object*)(l_Std_Async_ContextAsync_race___redArg___closed__0));
lean_inc_ref_n(v___y_2578_, 2);
v___f_2584_ = lean_alloc_closure((void*)(l_Std_Async_ContextAsync_race___redArg___lam__10___boxed), 12, 10);
lean_closure_set(v___f_2584_, 0, v_x_2575_);
lean_closure_set(v___f_2584_, 1, v___f_2581_);
lean_closure_set(v___f_2584_, 2, v_prio_2577_);
lean_closure_set(v___f_2584_, 3, v___f_2580_);
lean_closure_set(v___f_2584_, 4, v_y_2576_);
lean_closure_set(v___f_2584_, 5, v___f_2581_);
lean_closure_set(v___f_2584_, 6, v___f_2580_);
lean_closure_set(v___f_2584_, 7, v___f_2582_);
lean_closure_set(v___f_2584_, 8, v___f_2583_);
lean_closure_set(v___f_2584_, 9, v___y_2578_);
v___x_2585_ = lean_unsigned_to_nat(0u);
v___x_2586_ = 0;
v___x_2587_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2587_, 0, v___y_2578_);
v___x_2588_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2588_, 0, v___x_2587_);
v___x_2589_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_2585_, v___x_2586_, v___x_2588_, v___f_2584_);
return v___x_2589_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ContextAsync_race___boxed(lean_object* v_00_u03b1_2590_, lean_object* v_inst_2591_, lean_object* v_x_2592_, lean_object* v_y_2593_, lean_object* v_prio_2594_, lean_object* v___y_2595_, lean_object* v___y_2596_){
_start:
{
lean_object* v_res_2597_; 
v_res_2597_ = l_Std_Async_ContextAsync_race(v_00_u03b1_2590_, v_inst_2591_, v_x_2592_, v_y_2593_, v_prio_2594_, v___y_2595_);
lean_dec_ref(v___y_2595_);
lean_dec(v_inst_2591_);
return v_res_2597_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Selector_cancelled(lean_object* v___y_2598_){
_start:
{
lean_object* v___f_2600_; lean_object* v___x_2601_; uint8_t v___x_2602_; lean_object* v___x_2603_; lean_object* v___x_2604_; lean_object* v___x_2605_; 
v___f_2600_ = ((lean_object*)(l_Std_Async_ContextAsync_doneSelector___closed__0));
v___x_2601_ = lean_unsigned_to_nat(0u);
v___x_2602_ = 0;
lean_inc_ref(v___y_2598_);
v___x_2603_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2603_, 0, v___y_2598_);
v___x_2604_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2604_, 0, v___x_2603_);
v___x_2605_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_2601_, v___x_2602_, v___x_2604_, v___f_2600_);
return v___x_2605_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Selector_cancelled___boxed(lean_object* v___y_2606_, lean_object* v___y_2607_){
_start:
{
lean_object* v_res_2608_; 
v_res_2608_ = l_Std_Async_Selector_cancelled(v___y_2606_);
lean_dec_ref(v___y_2606_);
return v_res_2608_;
}
}
lean_object* runtime_initialize_Std_Internal_UV(uint8_t builtin);
lean_object* runtime_initialize_Std_Async_Timer(uint8_t builtin);
lean_object* runtime_initialize_Std_Sync_CancellationContext(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Std_Async_ContextAsync(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Std_Internal_UV(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Async_Timer(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Sync_CancellationContext(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Std_Async_ContextAsync_instMonad = _init_l_Std_Async_ContextAsync_instMonad();
lean_mark_persistent(l_Std_Async_ContextAsync_instMonad);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Std_Async_ContextAsync(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Std_Internal_UV(uint8_t builtin);
lean_object* initialize_Std_Async_Timer(uint8_t builtin);
lean_object* initialize_Std_Sync_CancellationContext(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Std_Async_ContextAsync(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Std_Internal_UV(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Async_Timer(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Sync_CancellationContext(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Async_ContextAsync(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Std_Async_ContextAsync(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Std_Async_ContextAsync(builtin);
}
#ifdef __cplusplus
}
#endif
