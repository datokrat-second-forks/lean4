// Lean compiler output
// Module: Std.Async.Basic
// Imports: public import Init.System.Promise public import Init.While
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
lean_object* l_Except_pure(lean_object*, lean_object*, lean_object*);
lean_object* l_IO_Promise_result_x21___redArg(lean_object*);
lean_object* lean_task_map(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* lean_task_pure(lean_object*);
lean_object* lean_task_bind(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* lean_io_bind_task(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* lean_io_as_task(lean_object*, lean_object*);
lean_object* lean_io_promise_resolve(lean_object*, lean_object*);
lean_object* l_liftM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Function_comp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_BaseIO_chainTask___redArg(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Function_const___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Except_map(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_task_get_own(lean_object*);
lean_object* l_MonadExcept_orElse(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_io_get_task_state(lean_object*);
lean_object* lean_mk_io_user_error(lean_object*);
lean_object* lean_io_promise_result_opt(lean_object*);
lean_object* lean_io_promise_new();
lean_object* l_instMonadLiftT___redArg___lam__0___boxed(lean_object*, lean_object*);
lean_object* l_Functor_mapRev___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lean_io_map_task(lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Std_Async_instMonadAwaitStateTOfMonad___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_instMonadAwaitStateTOfMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_instMonadAwaitStateTOfMonad___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_instMonadAwaitStateTOfMonad(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_instMonadAwaitExceptTOfMonad___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_instMonadAwaitExceptTOfMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Async_instMonadAwaitExceptTOfMonad___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Async_instMonadAwaitExceptTOfMonad___redArg___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Async_instMonadAwaitExceptTOfMonad___redArg___closed__0 = (const lean_object*)&l_Std_Async_instMonadAwaitExceptTOfMonad___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Async_instMonadAwaitExceptTOfMonad___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_instMonadAwaitExceptTOfMonad(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_instMonadAwaitReaderTOfMonad___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_instMonadAwaitReaderTOfMonad___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_instMonadAwaitReaderTOfMonad___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_instMonadAwaitReaderTOfMonad(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_instMonadAwaitReaderTOfMonad___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_instMonadAwaitStateRefT_x27___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_instMonadAwaitStateRefT_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_instMonadAwaitStateTOfMonad__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_instMonadAwaitStateTOfMonad__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_instMonadAsyncReaderT___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_instMonadAsyncReaderT___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_instMonadAsyncReaderT___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_instMonadAsyncReaderT(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_instMonadAsyncStateRefT_x27___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_instMonadAsyncStateRefT_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_instMonadAsyncStateTOfMonadOfFunctor___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_instMonadAsyncStateTOfMonadOfFunctor___redArg___lam__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_instMonadAsyncStateTOfMonadOfFunctor___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_instMonadAsyncStateTOfMonadOfFunctor___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Async_instMonadAsyncStateTOfMonadOfFunctor___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Async_instMonadAsyncStateTOfMonadOfFunctor___redArg___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Async_instMonadAsyncStateTOfMonadOfFunctor___redArg___closed__0 = (const lean_object*)&l_Std_Async_instMonadAsyncStateTOfMonadOfFunctor___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Async_instMonadAsyncStateTOfMonadOfFunctor___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_instMonadAsyncStateTOfMonadOfFunctor(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ETask_pure___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ETask_pure(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ETask_map___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ETask_map___redArg(lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Std_Async_ETask_map___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ETask_map(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Std_Async_ETask_map___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ETask_bind___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ETask_bind___redArg(lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Std_Async_ETask_bind___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ETask_bind(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Std_Async_ETask_bind___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ETask_bindEIO___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ETask_bindEIO___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ETask_bindEIO___redArg(lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Std_Async_ETask_bindEIO___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ETask_bindEIO(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Std_Async_ETask_bindEIO___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ETask_mapEIO___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ETask_mapEIO___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ETask_mapEIO___redArg(lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Std_Async_ETask_mapEIO___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ETask_mapEIO(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Std_Async_ETask_mapEIO___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ETask_block___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ETask_block___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ETask_block(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ETask_block___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ETask_ofPromise_x21___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ETask_ofPromise_x21___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ETask_ofPromise_x21(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ETask_ofPromise_x21___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Async_ETask_ofPurePromise___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Except_pure, .m_arity = 3, .m_num_fixed = 2, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Std_Async_ETask_ofPurePromise___redArg___closed__0 = (const lean_object*)&l_Std_Async_ETask_ofPurePromise___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Async_ETask_ofPurePromise___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ETask_ofPurePromise___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ETask_ofPurePromise(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ETask_ofPurePromise___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_Async_ETask_getState___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ETask_getState___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_Async_ETask_getState(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ETask_getState___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ETask_instFunctor___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ETask_instFunctor___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Async_ETask_instFunctor___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Async_ETask_instFunctor___redArg___lam__1, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Async_ETask_instFunctor___redArg___closed__0 = (const lean_object*)&l_Std_Async_ETask_instFunctor___redArg___closed__0_value;
static const lean_closure_object l_Std_Async_ETask_instFunctor___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Async_ETask_instFunctor___redArg___lam__0, .m_arity = 5, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Std_Async_ETask_instFunctor___redArg___closed__0_value)} };
static const lean_object* l_Std_Async_ETask_instFunctor___redArg___closed__1 = (const lean_object*)&l_Std_Async_ETask_instFunctor___redArg___closed__1_value;
static const lean_ctor_object l_Std_Async_ETask_instFunctor___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Std_Async_ETask_instFunctor___redArg___closed__0_value),((lean_object*)&l_Std_Async_ETask_instFunctor___redArg___closed__1_value)}};
static const lean_object* l_Std_Async_ETask_instFunctor___redArg___closed__2 = (const lean_object*)&l_Std_Async_ETask_instFunctor___redArg___closed__2_value;
LEAN_EXPORT lean_object* l_Std_Async_ETask_instFunctor___redArg();
LEAN_EXPORT lean_object* l_Std_Async_ETask_instFunctor___redArg___boxed(lean_object*);
static lean_once_cell_t l_Std_Async_ETask_instFunctor___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Async_ETask_instFunctor___closed__0;
LEAN_EXPORT lean_object* l_Std_Async_ETask_instFunctor(lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ETask_instMonad___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ETask_instMonad___redArg___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ETask_instMonad___redArg___lam__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ETask_instMonad___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ETask_instMonad___redArg___lam__5(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ETask_instMonad___redArg___lam__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ETask_instMonad___redArg___lam__4___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ETask_instMonad___redArg___lam__6(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ETask_instMonad___redArg___lam__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ETask_instMonad___redArg___lam__8(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_ETask_instMonad___redArg___lam__9(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Async_ETask_instMonad___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Async_ETask_instMonad___redArg___lam__0, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Async_ETask_instMonad___redArg___closed__0 = (const lean_object*)&l_Std_Async_ETask_instMonad___redArg___closed__0_value;
static const lean_closure_object l_Std_Async_ETask_instMonad___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Async_ETask_instMonad___redArg___lam__3, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Async_ETask_instMonad___redArg___closed__1 = (const lean_object*)&l_Std_Async_ETask_instMonad___redArg___closed__1_value;
static const lean_closure_object l_Std_Async_ETask_instMonad___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Async_ETask_instMonad___redArg___lam__5, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Async_ETask_instMonad___redArg___closed__2 = (const lean_object*)&l_Std_Async_ETask_instMonad___redArg___closed__2_value;
static const lean_closure_object l_Std_Async_ETask_instMonad___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Async_ETask_instMonad___redArg___lam__7, .m_arity = 6, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Std_Async_ETask_instMonad___redArg___closed__0_value),((lean_object*)&l_Std_Async_ETask_instMonad___redArg___closed__2_value)} };
static const lean_object* l_Std_Async_ETask_instMonad___redArg___closed__3 = (const lean_object*)&l_Std_Async_ETask_instMonad___redArg___closed__3_value;
static const lean_closure_object l_Std_Async_ETask_instMonad___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Async_ETask_instMonad___redArg___lam__9, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Async_ETask_instMonad___redArg___closed__4 = (const lean_object*)&l_Std_Async_ETask_instMonad___redArg___closed__4_value;
static lean_once_cell_t l_Std_Async_ETask_instMonad___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Async_ETask_instMonad___redArg___closed__5;
static lean_once_cell_t l_Std_Async_ETask_instMonad___redArg___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Async_ETask_instMonad___redArg___closed__6;
LEAN_EXPORT lean_object* l_Std_Async_ETask_instMonad___redArg();
LEAN_EXPORT lean_object* l_Std_Async_ETask_instMonad___redArg___boxed(lean_object*);
static lean_once_cell_t l_Std_Async_ETask_instMonad___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Async_ETask_instMonad___closed__0;
LEAN_EXPORT lean_object* l_Std_Async_ETask_instMonad(lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_AsyncTask_mapIO___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_AsyncTask_mapIO___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_AsyncTask_mapIO___redArg(lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Std_Async_AsyncTask_mapIO___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_AsyncTask_mapIO(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Std_Async_AsyncTask_mapIO___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_AsyncTask_pure___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_AsyncTask_pure(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_AsyncTask_bind___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_AsyncTask_bind___redArg(lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Std_Async_AsyncTask_bind___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_AsyncTask_bind(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Std_Async_AsyncTask_bind___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_AsyncTask_map___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_AsyncTask_map___redArg(lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Std_Async_AsyncTask_map___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_AsyncTask_map(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Std_Async_AsyncTask_map___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_AsyncTask_bindIO___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_AsyncTask_bindIO___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_AsyncTask_bindIO___redArg(lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Std_Async_AsyncTask_bindIO___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_AsyncTask_bindIO(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Std_Async_AsyncTask_bindIO___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_AsyncTask_mapTaskIO___redArg(lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Std_Async_AsyncTask_mapTaskIO___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_AsyncTask_mapTaskIO(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Std_Async_AsyncTask_mapTaskIO___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_AsyncTask_block___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_AsyncTask_block___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_AsyncTask_block(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_AsyncTask_block___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_AsyncTask_ofPromise___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_AsyncTask_ofPromise___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_AsyncTask_ofPromise___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_AsyncTask_ofPromise___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_AsyncTask_ofPromise(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_AsyncTask_ofPromise___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_AsyncTask_ofPurePromise___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_AsyncTask_ofPurePromise___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_AsyncTask_ofPurePromise___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_AsyncTask_ofPurePromise(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_AsyncTask_ofPurePromise___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_Async_AsyncTask_getState___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_AsyncTask_getState___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_Async_AsyncTask_getState(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_AsyncTask_getState___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_MaybeTask_ctorIdx___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_MaybeTask_ctorIdx___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_MaybeTask_ctorIdx(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_MaybeTask_ctorIdx___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_MaybeTask_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_MaybeTask_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_MaybeTask_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_MaybeTask_pure_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_MaybeTask_pure_elim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_MaybeTask_ofTask_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_MaybeTask_ofTask_elim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_MaybeTask_toTask___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_MaybeTask_toTask(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_MaybeTask_get___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_MaybeTask_get(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_MaybeTask_map___redArg(lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_MaybeTask_map___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_MaybeTask_map(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_MaybeTask_map___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_MaybeTask_bind___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_MaybeTask_bind___redArg(lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Std_Async_MaybeTask_bind___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_MaybeTask_bind(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Std_Async_MaybeTask_bind___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_MaybeTask_joinTask___redArg___lam__0(lean_object*);
static const lean_closure_object l_Std_Async_MaybeTask_joinTask___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Async_MaybeTask_joinTask___redArg___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Async_MaybeTask_joinTask___redArg___closed__0 = (const lean_object*)&l_Std_Async_MaybeTask_joinTask___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Async_MaybeTask_joinTask___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_MaybeTask_joinTask(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_MaybeTask_instFunctor___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_MaybeTask_instFunctor___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Async_MaybeTask_instFunctor___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Async_MaybeTask_instFunctor___lam__0, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Async_MaybeTask_instFunctor___closed__0 = (const lean_object*)&l_Std_Async_MaybeTask_instFunctor___closed__0_value;
static const lean_closure_object l_Std_Async_MaybeTask_instFunctor___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Async_MaybeTask_instFunctor___lam__1, .m_arity = 5, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Std_Async_MaybeTask_instFunctor___closed__0_value)} };
static const lean_object* l_Std_Async_MaybeTask_instFunctor___closed__1 = (const lean_object*)&l_Std_Async_MaybeTask_instFunctor___closed__1_value;
static const lean_ctor_object l_Std_Async_MaybeTask_instFunctor___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Std_Async_MaybeTask_instFunctor___closed__0_value),((lean_object*)&l_Std_Async_MaybeTask_instFunctor___closed__1_value)}};
static const lean_object* l_Std_Async_MaybeTask_instFunctor___closed__2 = (const lean_object*)&l_Std_Async_MaybeTask_instFunctor___closed__2_value;
LEAN_EXPORT const lean_object* l_Std_Async_MaybeTask_instFunctor = (const lean_object*)&l_Std_Async_MaybeTask_instFunctor___closed__2_value;
LEAN_EXPORT lean_object* l_Std_Async_MaybeTask_instMonad___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_MaybeTask_instMonad___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_MaybeTask_instMonad___lam__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_MaybeTask_instMonad___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_MaybeTask_instMonad___lam__5(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_MaybeTask_instMonad___lam__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_MaybeTask_instMonad___lam__4___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_MaybeTask_instMonad___lam__6(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_MaybeTask_instMonad___lam__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_MaybeTask_instMonad___lam__8(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_MaybeTask_instMonad___lam__8___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_MaybeTask_instMonad___lam__9(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_MaybeTask_instMonad___lam__10(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Async_MaybeTask_instMonad___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Async_MaybeTask_instMonad___lam__0, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Async_MaybeTask_instMonad___closed__0 = (const lean_object*)&l_Std_Async_MaybeTask_instMonad___closed__0_value;
static const lean_closure_object l_Std_Async_MaybeTask_instMonad___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Async_MaybeTask_instMonad___lam__3, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Async_MaybeTask_instMonad___closed__1 = (const lean_object*)&l_Std_Async_MaybeTask_instMonad___closed__1_value;
static const lean_closure_object l_Std_Async_MaybeTask_instMonad___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Async_MaybeTask_instMonad___lam__5, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Async_MaybeTask_instMonad___closed__2 = (const lean_object*)&l_Std_Async_MaybeTask_instMonad___closed__2_value;
static const lean_closure_object l_Std_Async_MaybeTask_instMonad___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Async_MaybeTask_instMonad___lam__7, .m_arity = 5, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Std_Async_MaybeTask_instMonad___closed__2_value)} };
static const lean_object* l_Std_Async_MaybeTask_instMonad___closed__3 = (const lean_object*)&l_Std_Async_MaybeTask_instMonad___closed__3_value;
static const lean_closure_object l_Std_Async_MaybeTask_instMonad___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Async_MaybeTask_instMonad___lam__10, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Async_MaybeTask_instMonad___closed__4 = (const lean_object*)&l_Std_Async_MaybeTask_instMonad___closed__4_value;
static const lean_ctor_object l_Std_Async_MaybeTask_instMonad___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*5 + 0, .m_other = 5, .m_tag = 0}, .m_objs = {((lean_object*)&l_Std_Async_MaybeTask_instFunctor___closed__2_value),((lean_object*)&l_Std_Async_MaybeTask_instMonad___closed__0_value),((lean_object*)&l_Std_Async_MaybeTask_instMonad___closed__1_value),((lean_object*)&l_Std_Async_MaybeTask_instMonad___closed__3_value),((lean_object*)&l_Std_Async_MaybeTask_instMonad___closed__4_value)}};
static const lean_object* l_Std_Async_MaybeTask_instMonad___closed__5 = (const lean_object*)&l_Std_Async_MaybeTask_instMonad___closed__5_value;
static const lean_ctor_object l_Std_Async_MaybeTask_instMonad___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Std_Async_MaybeTask_instMonad___closed__5_value),((lean_object*)&l_Std_Async_MaybeTask_instMonad___closed__2_value)}};
static const lean_object* l_Std_Async_MaybeTask_instMonad___closed__6 = (const lean_object*)&l_Std_Async_MaybeTask_instMonad___closed__6_value;
LEAN_EXPORT const lean_object* l_Std_Async_MaybeTask_instMonad = (const lean_object*)&l_Std_Async_MaybeTask_instMonad___closed__6_value;
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_mk___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_mk___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_mk(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_mk___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_toRawBaseIO___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_toRawBaseIO___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_toRawBaseIO(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_toRawBaseIO___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_toBaseIO___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_toBaseIO___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_toBaseIO(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_toBaseIO___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_ofTask___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_ofTask___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_ofTask(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_ofTask___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_pure___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_pure___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_pure(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_pure___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_map___redArg(lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_map___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_map(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_map___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_bind___redArg(lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_bind___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_bind(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_bind___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_lift___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_lift___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_lift(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_lift___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_wait___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_wait___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_wait(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_wait___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_asTask___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_asTask___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_asTask(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_asTask___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_await___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_await___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_await(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_await___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_async___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_async___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_async(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_async___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_instFunctor___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_instFunctor___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_instFunctor___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_instFunctor___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Async_BaseAsync_instFunctor___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Async_BaseAsync_instFunctor___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Async_BaseAsync_instFunctor___closed__0 = (const lean_object*)&l_Std_Async_BaseAsync_instFunctor___closed__0_value;
static const lean_closure_object l_Std_Async_BaseAsync_instFunctor___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Async_BaseAsync_instFunctor___lam__1___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Std_Async_BaseAsync_instFunctor___closed__0_value)} };
static const lean_object* l_Std_Async_BaseAsync_instFunctor___closed__1 = (const lean_object*)&l_Std_Async_BaseAsync_instFunctor___closed__1_value;
static const lean_ctor_object l_Std_Async_BaseAsync_instFunctor___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Std_Async_BaseAsync_instFunctor___closed__0_value),((lean_object*)&l_Std_Async_BaseAsync_instFunctor___closed__1_value)}};
static const lean_object* l_Std_Async_BaseAsync_instFunctor___closed__2 = (const lean_object*)&l_Std_Async_BaseAsync_instFunctor___closed__2_value;
LEAN_EXPORT const lean_object* l_Std_Async_BaseAsync_instFunctor = (const lean_object*)&l_Std_Async_BaseAsync_instFunctor___closed__2_value;
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_instMonad___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_instMonad___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_instMonad___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_instMonad___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_instMonad___lam__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_instMonad___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_instMonad___lam__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_instMonad___lam__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_instMonad___lam__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_instMonad___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_instMonad___lam__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_instMonad___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_instMonad___lam__6(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_instMonad___lam__6___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_instMonad___lam__7(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_instMonad___lam__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Async_BaseAsync_instMonad___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Async_BaseAsync_instMonad___lam__1___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Async_BaseAsync_instMonad___closed__0 = (const lean_object*)&l_Std_Async_BaseAsync_instMonad___closed__0_value;
static const lean_closure_object l_Std_Async_BaseAsync_instMonad___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Async_BaseAsync_instMonad___lam__2___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Async_BaseAsync_instMonad___closed__1 = (const lean_object*)&l_Std_Async_BaseAsync_instMonad___closed__1_value;
static const lean_closure_object l_Std_Async_BaseAsync_instMonad___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Async_BaseAsync_instMonad___lam__5___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Std_Async_BaseAsync_instMonad___closed__1_value)} };
static const lean_object* l_Std_Async_BaseAsync_instMonad___closed__2 = (const lean_object*)&l_Std_Async_BaseAsync_instMonad___closed__2_value;
static const lean_closure_object l_Std_Async_BaseAsync_instMonad___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Async_BaseAsync_instMonad___lam__7___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Async_BaseAsync_instMonad___closed__3 = (const lean_object*)&l_Std_Async_BaseAsync_instMonad___closed__3_value;
static const lean_closure_object l_Std_Async_BaseAsync_instMonad___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Async_BaseAsync_pure___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Async_BaseAsync_instMonad___closed__4 = (const lean_object*)&l_Std_Async_BaseAsync_instMonad___closed__4_value;
static const lean_ctor_object l_Std_Async_BaseAsync_instMonad___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*5 + 0, .m_other = 5, .m_tag = 0}, .m_objs = {((lean_object*)&l_Std_Async_BaseAsync_instFunctor___closed__2_value),((lean_object*)&l_Std_Async_BaseAsync_instMonad___closed__4_value),((lean_object*)&l_Std_Async_BaseAsync_instMonad___closed__0_value),((lean_object*)&l_Std_Async_BaseAsync_instMonad___closed__2_value),((lean_object*)&l_Std_Async_BaseAsync_instMonad___closed__3_value)}};
static const lean_object* l_Std_Async_BaseAsync_instMonad___closed__5 = (const lean_object*)&l_Std_Async_BaseAsync_instMonad___closed__5_value;
static const lean_ctor_object l_Std_Async_BaseAsync_instMonad___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Std_Async_BaseAsync_instMonad___closed__5_value),((lean_object*)&l_Std_Async_BaseAsync_instMonad___closed__1_value)}};
static const lean_object* l_Std_Async_BaseAsync_instMonad___closed__6 = (const lean_object*)&l_Std_Async_BaseAsync_instMonad___closed__6_value;
LEAN_EXPORT const lean_object* l_Std_Async_BaseAsync_instMonad = (const lean_object*)&l_Std_Async_BaseAsync_instMonad___closed__6_value;
static const lean_closure_object l_Std_Async_BaseAsync_instMonadLiftBaseIO___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Async_BaseAsync_lift___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Async_BaseAsync_instMonadLiftBaseIO___closed__0 = (const lean_object*)&l_Std_Async_BaseAsync_instMonadLiftBaseIO___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Async_BaseAsync_instMonadLiftBaseIO = (const lean_object*)&l_Std_Async_BaseAsync_instMonadLiftBaseIO___closed__0_value;
static const lean_closure_object l_Std_Async_BaseAsync_instMonadAwaitTask___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Async_BaseAsync_await___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Async_BaseAsync_instMonadAwaitTask___closed__0 = (const lean_object*)&l_Std_Async_BaseAsync_instMonadAwaitTask___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Async_BaseAsync_instMonadAwaitTask = (const lean_object*)&l_Std_Async_BaseAsync_instMonadAwaitTask___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_instMonadAsyncTask___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_instMonadAsyncTask___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Async_BaseAsync_instMonadAsyncTask___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Async_BaseAsync_instMonadAsyncTask___lam__1___boxed, .m_arity = 5, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Std_Async_MaybeTask_joinTask___redArg___closed__0_value)} };
static const lean_object* l_Std_Async_BaseAsync_instMonadAsyncTask___closed__0 = (const lean_object*)&l_Std_Async_BaseAsync_instMonadAsyncTask___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Async_BaseAsync_instMonadAsyncTask = (const lean_object*)&l_Std_Async_BaseAsync_instMonadAsyncTask___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_instInhabited___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_instInhabited___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_instInhabited___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_instInhabited(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_instMonadFinally___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_instMonadFinally___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_instMonadFinally___lam__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_instMonadFinally___lam__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_instMonadFinally___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Async_BaseAsync_instMonadFinally___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Async_BaseAsync_instMonadFinally___lam__2___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Async_BaseAsync_instMonadFinally___closed__0 = (const lean_object*)&l_Std_Async_BaseAsync_instMonadFinally___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Async_BaseAsync_instMonadFinally = (const lean_object*)&l_Std_Async_BaseAsync_instMonadFinally___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_ofExcept___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_ofExcept___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_ofExcept(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_ofExcept___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_concurrently___redArg___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_concurrently___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_concurrently___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_concurrently___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_concurrently___redArg___lam__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_concurrently___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_concurrently___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_concurrently___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_concurrently___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_concurrently___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_concurrently(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_concurrently___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_race___redArg___lam__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_race___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_race___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_race___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_race___redArg___lam__1(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_race___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_race___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_race___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_race___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_race___redArg___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_race___redArg___lam__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_race___redArg___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Async_BaseAsync_race___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadLiftT___redArg___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Async_BaseAsync_race___redArg___closed__0 = (const lean_object*)&l_Std_Async_BaseAsync_race___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_race___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_race___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_race(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_race___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_concurrentlyAll___redArg___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_concurrentlyAll___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Async_BaseAsync_concurrentlyAll___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Async_BaseAsync_await___boxed, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Std_Async_BaseAsync_concurrentlyAll___redArg___lam__0___closed__0 = (const lean_object*)&l_Std_Async_BaseAsync_concurrentlyAll___redArg___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_concurrentlyAll___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_concurrentlyAll___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Async_BaseAsync_concurrentlyAll___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Async_BaseAsync_concurrentlyAll___redArg___lam__0___boxed, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Std_Async_BaseAsync_instMonad___closed__6_value)} };
static const lean_object* l_Std_Async_BaseAsync_concurrentlyAll___redArg___closed__0 = (const lean_object*)&l_Std_Async_BaseAsync_concurrentlyAll___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_concurrentlyAll___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_concurrentlyAll___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_concurrentlyAll(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_concurrentlyAll___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_raceAll___redArg___lam__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_raceAll___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_raceAll___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_raceAll___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_raceAll___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_raceAll___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_raceAll___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_raceAll___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_raceAll(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_raceAll___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_mk___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_mk___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_mk(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_mk___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_toBaseAsync___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_toBaseAsync___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_toBaseAsync(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_toBaseAsync___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_toBaseIO___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_toBaseIO___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_toBaseIO(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_toBaseIO___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_ofTask___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_ofTask___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_ofTask(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_ofTask___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_toEIO___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_toEIO___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_toEIO(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_toEIO___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_ofETask___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_ofETask___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_ofETask(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_ofETask___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_pure___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_pure___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_pure(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_pure___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_map___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_map___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_map(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_map___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_bind___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_bind___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_bind___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_bind___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_bind(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_bind___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_lift___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_lift___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_lift(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_lift___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_wait___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_wait___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_wait(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_wait___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_asTask___redArg___lam__0(lean_object*);
static const lean_closure_object l_Std_Async_EAsync_asTask___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Async_EAsync_asTask___redArg___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Async_EAsync_asTask___redArg___closed__0 = (const lean_object*)&l_Std_Async_EAsync_asTask___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Async_EAsync_asTask___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_asTask___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_asTask(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_asTask___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_block___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_block___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_block(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_block___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_throw___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_throw___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_throw(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_throw___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_tryCatch___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_tryCatch___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_tryCatch___redArg(lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_tryCatch___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_tryCatch(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_tryCatch___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_tryFinally_x27___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_tryFinally_x27___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_tryFinally_x27___redArg___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_tryFinally_x27___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_tryFinally_x27___redArg___lam__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_tryFinally_x27___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_tryFinally_x27___redArg(lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_tryFinally_x27___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_tryFinally_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_tryFinally_x27___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_await___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_await___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_await(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_await___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_async___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_async___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_async(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_async___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instFunctor___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instFunctor___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instFunctor___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instFunctor___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Async_EAsync_instFunctor___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Async_EAsync_instFunctor___redArg___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Async_EAsync_instFunctor___redArg___closed__0 = (const lean_object*)&l_Std_Async_EAsync_instFunctor___redArg___closed__0_value;
static const lean_closure_object l_Std_Async_EAsync_instFunctor___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Async_EAsync_instFunctor___redArg___lam__1___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Std_Async_EAsync_instFunctor___redArg___closed__0_value)} };
static const lean_object* l_Std_Async_EAsync_instFunctor___redArg___closed__1 = (const lean_object*)&l_Std_Async_EAsync_instFunctor___redArg___closed__1_value;
static const lean_ctor_object l_Std_Async_EAsync_instFunctor___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Std_Async_EAsync_instFunctor___redArg___closed__0_value),((lean_object*)&l_Std_Async_EAsync_instFunctor___redArg___closed__1_value)}};
static const lean_object* l_Std_Async_EAsync_instFunctor___redArg___closed__2 = (const lean_object*)&l_Std_Async_EAsync_instFunctor___redArg___closed__2_value;
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instFunctor___redArg();
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instFunctor___redArg___boxed(lean_object*);
static lean_once_cell_t l_Std_Async_EAsync_instFunctor___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Async_EAsync_instFunctor___closed__0;
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instFunctor(lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonad___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonad___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonad___redArg___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonad___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonad___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonad___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonad___redArg___lam__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonad___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonad___redArg___lam__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonad___redArg___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonad___redArg___lam__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonad___redArg___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonad___redArg___lam__6(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonad___redArg___lam__6___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonad___redArg___lam__7(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonad___redArg___lam__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Async_EAsync_instMonad___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Async_EAsync_instMonad___redArg___lam__0___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Async_EAsync_instMonad___redArg___closed__0 = (const lean_object*)&l_Std_Async_EAsync_instMonad___redArg___closed__0_value;
static const lean_closure_object l_Std_Async_EAsync_instMonad___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Async_EAsync_instMonad___redArg___lam__2___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Async_EAsync_instMonad___redArg___closed__1 = (const lean_object*)&l_Std_Async_EAsync_instMonad___redArg___closed__1_value;
static const lean_closure_object l_Std_Async_EAsync_instMonad___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Async_EAsync_instMonad___redArg___lam__5___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Std_Async_EAsync_instMonad___redArg___closed__0_value)} };
static const lean_object* l_Std_Async_EAsync_instMonad___redArg___closed__2 = (const lean_object*)&l_Std_Async_EAsync_instMonad___redArg___closed__2_value;
static const lean_closure_object l_Std_Async_EAsync_instMonad___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Async_EAsync_instMonad___redArg___lam__7___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Async_EAsync_instMonad___redArg___closed__3 = (const lean_object*)&l_Std_Async_EAsync_instMonad___redArg___closed__3_value;
static lean_once_cell_t l_Std_Async_EAsync_instMonad___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Async_EAsync_instMonad___redArg___closed__4;
static const lean_closure_object l_Std_Async_EAsync_instMonad___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Async_EAsync_bind___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Std_Async_EAsync_instMonad___redArg___closed__5 = (const lean_object*)&l_Std_Async_EAsync_instMonad___redArg___closed__5_value;
static lean_once_cell_t l_Std_Async_EAsync_instMonad___redArg___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Async_EAsync_instMonad___redArg___closed__6;
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonad___redArg();
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonad___redArg___boxed(lean_object*);
static lean_once_cell_t l_Std_Async_EAsync_instMonad___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Async_EAsync_instMonad___closed__0;
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonad(lean_object*);
static const lean_closure_object l_Std_Async_EAsync_instMonadLiftEIO___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Async_EAsync_lift___boxed, .m_arity = 4, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Std_Async_EAsync_instMonadLiftEIO___redArg___closed__0 = (const lean_object*)&l_Std_Async_EAsync_instMonadLiftEIO___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadLiftEIO___redArg();
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadLiftEIO___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadLiftEIO(lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadExcept___redArg___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadExcept___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Async_EAsync_instMonadExcept___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Async_EAsync_instMonadExcept___redArg___lam__1___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Async_EAsync_instMonadExcept___redArg___closed__0 = (const lean_object*)&l_Std_Async_EAsync_instMonadExcept___redArg___closed__0_value;
static const lean_closure_object l_Std_Async_EAsync_instMonadExcept___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Async_EAsync_throw___boxed, .m_arity = 4, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Std_Async_EAsync_instMonadExcept___redArg___closed__1 = (const lean_object*)&l_Std_Async_EAsync_instMonadExcept___redArg___closed__1_value;
static const lean_ctor_object l_Std_Async_EAsync_instMonadExcept___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Std_Async_EAsync_instMonadExcept___redArg___closed__1_value),((lean_object*)&l_Std_Async_EAsync_instMonadExcept___redArg___closed__0_value)}};
static const lean_object* l_Std_Async_EAsync_instMonadExcept___redArg___closed__2 = (const lean_object*)&l_Std_Async_EAsync_instMonadExcept___redArg___closed__2_value;
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadExcept___redArg();
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadExcept___redArg___boxed(lean_object*);
static lean_once_cell_t l_Std_Async_EAsync_instMonadExcept___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Async_EAsync_instMonadExcept___closed__0;
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadExcept(lean_object*);
static const lean_ctor_object l_Std_Async_EAsync_instMonadExceptOf___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Std_Async_EAsync_instMonadExcept___redArg___closed__1_value),((lean_object*)&l_Std_Async_EAsync_instMonadExcept___redArg___closed__0_value)}};
static const lean_object* l_Std_Async_EAsync_instMonadExceptOf___redArg___closed__0 = (const lean_object*)&l_Std_Async_EAsync_instMonadExceptOf___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadExceptOf___redArg();
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadExceptOf___redArg___boxed(lean_object*);
static lean_once_cell_t l_Std_Async_EAsync_instMonadExceptOf___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Async_EAsync_instMonadExceptOf___closed__0;
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadExceptOf(lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadFinally___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadFinally___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Async_EAsync_instMonadFinally___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Async_EAsync_instMonadFinally___redArg___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Async_EAsync_instMonadFinally___redArg___closed__0 = (const lean_object*)&l_Std_Async_EAsync_instMonadFinally___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadFinally___redArg();
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadFinally___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadFinally(lean_object*);
static lean_once_cell_t l_Std_Async_EAsync_instOrElse___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Async_EAsync_instOrElse___redArg___closed__0;
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instOrElse___redArg();
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instOrElse___redArg___boxed(lean_object*);
static lean_once_cell_t l_Std_Async_EAsync_instOrElse___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Async_EAsync_instOrElse___closed__0;
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instOrElse(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instInhabited___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instInhabited(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadAwaitETask___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadAwaitETask___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Async_EAsync_instMonadAwaitETask___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Async_EAsync_instMonadAwaitETask___redArg___lam__0___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Async_EAsync_instMonadAwaitETask___redArg___closed__0 = (const lean_object*)&l_Std_Async_EAsync_instMonadAwaitETask___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadAwaitETask___redArg();
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadAwaitETask___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadAwaitETask(lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadAwaitTask___redArg___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadAwaitTask___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Async_EAsync_instMonadAwaitTask___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Async_EAsync_instMonadAwaitTask___redArg___lam__1___boxed, .m_arity = 4, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Std_Async_instMonadAwaitExceptTOfMonad___redArg___closed__0_value)} };
static const lean_object* l_Std_Async_EAsync_instMonadAwaitTask___redArg___closed__0 = (const lean_object*)&l_Std_Async_EAsync_instMonadAwaitTask___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadAwaitTask___redArg();
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadAwaitTask___redArg___boxed(lean_object*);
static lean_once_cell_t l_Std_Async_EAsync_instMonadAwaitTask___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Async_EAsync_instMonadAwaitTask___closed__0;
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadAwaitTask(lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadAwaitAsyncTaskError___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadAwaitAsyncTaskError___lam__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Async_EAsync_instMonadAwaitAsyncTaskError___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Async_EAsync_instMonadAwaitAsyncTaskError___lam__0___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Async_EAsync_instMonadAwaitAsyncTaskError___closed__0 = (const lean_object*)&l_Std_Async_EAsync_instMonadAwaitAsyncTaskError___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Async_EAsync_instMonadAwaitAsyncTaskError = (const lean_object*)&l_Std_Async_EAsync_instMonadAwaitAsyncTaskError___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadAwaitPromise___redArg___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadAwaitPromise___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Async_EAsync_instMonadAwaitPromise___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Async_EAsync_instMonadAwaitPromise___redArg___lam__1___boxed, .m_arity = 4, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Std_Async_instMonadAwaitExceptTOfMonad___redArg___closed__0_value)} };
static const lean_object* l_Std_Async_EAsync_instMonadAwaitPromise___redArg___closed__0 = (const lean_object*)&l_Std_Async_EAsync_instMonadAwaitPromise___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadAwaitPromise___redArg();
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadAwaitPromise___redArg___boxed(lean_object*);
static lean_once_cell_t l_Std_Async_EAsync_instMonadAwaitPromise___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Async_EAsync_instMonadAwaitPromise___closed__0;
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadAwaitPromise(lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadAsyncETask___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadAsyncETask___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Async_EAsync_instMonadAsyncETask___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Async_EAsync_instMonadAsyncETask___redArg___lam__1___boxed, .m_arity = 5, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Std_Async_EAsync_asTask___redArg___closed__0_value)} };
static const lean_object* l_Std_Async_EAsync_instMonadAsyncETask___redArg___closed__0 = (const lean_object*)&l_Std_Async_EAsync_instMonadAsyncETask___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadAsyncETask___redArg();
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadAsyncETask___redArg___boxed(lean_object*);
static lean_once_cell_t l_Std_Async_EAsync_instMonadAsyncETask___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Async_EAsync_instMonadAsyncETask___closed__0;
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadAsyncETask(lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadAsyncAsyncTaskError___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadAsyncAsyncTaskError___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadAsyncAsyncTaskError___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Async_EAsync_instMonadAsyncAsyncTaskError___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Async_EAsync_instMonadAsyncAsyncTaskError___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Async_EAsync_instMonadAsyncAsyncTaskError___closed__0 = (const lean_object*)&l_Std_Async_EAsync_instMonadAsyncAsyncTaskError___closed__0_value;
static const lean_closure_object l_Std_Async_EAsync_instMonadAsyncAsyncTaskError___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Async_EAsync_instMonadAsyncAsyncTaskError___lam__1___boxed, .m_arity = 5, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Std_Async_EAsync_instMonadAsyncAsyncTaskError___closed__0_value)} };
static const lean_object* l_Std_Async_EAsync_instMonadAsyncAsyncTaskError___closed__1 = (const lean_object*)&l_Std_Async_EAsync_instMonadAsyncAsyncTaskError___closed__1_value;
LEAN_EXPORT const lean_object* l_Std_Async_EAsync_instMonadAsyncAsyncTaskError = (const lean_object*)&l_Std_Async_EAsync_instMonadAsyncAsyncTaskError___closed__1_value;
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadLiftBaseIO___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadLiftBaseIO___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Async_EAsync_instMonadLiftBaseIO___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Async_EAsync_instMonadLiftBaseIO___redArg___lam__0___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Async_EAsync_instMonadLiftBaseIO___redArg___closed__0 = (const lean_object*)&l_Std_Async_EAsync_instMonadLiftBaseIO___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadLiftBaseIO___redArg();
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadLiftBaseIO___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadLiftBaseIO(lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadLiftEIO__1___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadLiftEIO__1___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Async_EAsync_instMonadLiftEIO__1___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Async_EAsync_instMonadLiftEIO__1___redArg___lam__0___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Async_EAsync_instMonadLiftEIO__1___redArg___closed__0 = (const lean_object*)&l_Std_Async_EAsync_instMonadLiftEIO__1___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadLiftEIO__1___redArg();
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadLiftEIO__1___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadLiftEIO__1(lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadLiftBaseAsync___redArg___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadLiftBaseAsync___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Async_EAsync_instMonadLiftBaseAsync___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Async_EAsync_instMonadLiftBaseAsync___redArg___lam__1___boxed, .m_arity = 4, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Std_Async_instMonadAwaitExceptTOfMonad___redArg___closed__0_value)} };
static const lean_object* l_Std_Async_EAsync_instMonadLiftBaseAsync___redArg___closed__0 = (const lean_object*)&l_Std_Async_EAsync_instMonadLiftBaseAsync___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadLiftBaseAsync___redArg();
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadLiftBaseAsync___redArg___boxed(lean_object*);
static lean_once_cell_t l_Std_Async_EAsync_instMonadLiftBaseAsync___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Async_EAsync_instMonadLiftBaseAsync___closed__0;
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadLiftBaseAsync(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Async_Basic_0__Std_Async_EAsync_forIn_loop___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Async_Basic_0__Std_Async_EAsync_forIn_loop___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Async_Basic_0__Std_Async_EAsync_forIn_loop___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Async_Basic_0__Std_Async_EAsync_forIn_loop___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Async_Basic_0__Std_Async_EAsync_forIn_loop(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Async_Basic_0__Std_Async_EAsync_forIn_loop___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_forIn___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_forIn___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_forIn___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_forIn___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_forIn___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_forIn___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_forIn(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_forIn___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instForInLoopUnit___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instForInLoopUnit___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instForInLoopUnit___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instForInLoopUnit___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Async_EAsync_instForInLoopUnit___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Async_EAsync_instForInLoopUnit___redArg___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Async_EAsync_instForInLoopUnit___redArg___closed__0 = (const lean_object*)&l_Std_Async_EAsync_instForInLoopUnit___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instForInLoopUnit___redArg();
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instForInLoopUnit___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instForInLoopUnit(lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_ofExcept___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_ofExcept___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_ofExcept(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_ofExcept___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_concurrently___redArg___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_concurrently___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_concurrently___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_concurrently___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_concurrently___redArg___lam__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_concurrently___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_concurrently___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_concurrently___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_concurrently___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_concurrently___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_concurrently(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_concurrently___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_race___redArg___lam__1(lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_race___redArg___lam__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_race___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_race___redArg___lam__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_race___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_race___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_race___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_race___redArg___lam__4(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_race___redArg___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_race___redArg___lam__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_race___redArg___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_race___redArg___lam__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_race___redArg___lam__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_race___redArg___lam__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_race___redArg___lam__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Async_EAsync_race___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Async_EAsync_race___redArg___lam__1___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Async_EAsync_race___redArg___closed__0 = (const lean_object*)&l_Std_Async_EAsync_race___redArg___closed__0_value;
static const lean_closure_object l_Std_Async_EAsync_race___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Async_EAsync_race___redArg___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Async_EAsync_race___redArg___closed__1 = (const lean_object*)&l_Std_Async_EAsync_race___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_Std_Async_EAsync_race___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_race___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_race(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_race___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_concurrentlyAll___redArg___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_concurrentlyAll___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_concurrentlyAll___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_concurrentlyAll___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_concurrentlyAll___redArg___lam__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_concurrentlyAll___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Async_EAsync_concurrentlyAll___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Async_EAsync_concurrentlyAll___redArg___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Async_EAsync_concurrentlyAll___redArg___closed__0 = (const lean_object*)&l_Std_Async_EAsync_concurrentlyAll___redArg___closed__0_value;
static lean_once_cell_t l_Std_Async_EAsync_concurrentlyAll___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Async_EAsync_concurrentlyAll___redArg___closed__1;
LEAN_EXPORT lean_object* l_Std_Async_EAsync_concurrentlyAll___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_concurrentlyAll___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_concurrentlyAll(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_concurrentlyAll___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_raceAll___redArg___lam__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_raceAll___redArg___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_raceAll___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_raceAll___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_raceAll___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_raceAll___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_raceAll___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_raceAll___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_raceAll(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_raceAll___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Async_toIO___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Async_toIO___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Async_toIO(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Async_toIO___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Async_block___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Async_block___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Async_block(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Async_block___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Async_ofPromise___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Async_ofPromise___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Async_ofPromise(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Async_ofPromise___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Async_ofAsyncTask___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Async_ofAsyncTask___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Async_ofAsyncTask(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Async_ofAsyncTask___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Async_ofIOTask___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Async_ofIOTask___redArg___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Async_ofIOTask___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Async_Async_ofIOTask___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Async_Async_ofIOTask___redArg___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Async_Async_ofIOTask___redArg___closed__0 = (const lean_object*)&l_Std_Async_Async_ofIOTask___redArg___closed__0_value;
static const lean_closure_object l_Std_Async_Async_ofIOTask___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Async_Async_ofIOTask___redArg___lam__1___boxed, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Std_Async_Async_ofIOTask___redArg___closed__0_value)} };
static const lean_object* l_Std_Async_Async_ofIOTask___redArg___closed__1 = (const lean_object*)&l_Std_Async_Async_ofIOTask___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_Std_Async_Async_ofIOTask___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Async_ofIOTask___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Async_ofIOTask(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Async_ofIOTask___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Async_ofExcept___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Async_ofExcept___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Async_ofExcept(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Async_ofExcept___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Async_ofTask___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Async_ofTask___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Async_ofTask(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Async_ofTask___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Async_ofPurePromise___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Async_ofPurePromise___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Async_ofPurePromise(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Async_ofPurePromise___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT const lean_object* l_Std_Async_Async_instMonadAsyncAsyncTask = (const lean_object*)&l_Std_Async_EAsync_instMonadAsyncAsyncTaskError___closed__1_value;
LEAN_EXPORT const lean_object* l_Std_Async_Async_instMonadAwaitAsyncTask = (const lean_object*)&l_Std_Async_EAsync_instMonadAwaitAsyncTaskError___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Async_Async_instMonadAwaitPromise___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Async_instMonadAwaitPromise___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Async_Async_instMonadAwaitPromise___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Async_Async_instMonadAwaitPromise___lam__1___boxed, .m_arity = 4, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Std_Async_Async_ofIOTask___redArg___closed__0_value)} };
static const lean_object* l_Std_Async_Async_instMonadAwaitPromise___closed__0 = (const lean_object*)&l_Std_Async_Async_instMonadAwaitPromise___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Async_Async_instMonadAwaitPromise = (const lean_object*)&l_Std_Async_Async_instMonadAwaitPromise___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Async_Async_concurrently___redArg___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Async_concurrently___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Async_concurrently___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Async_concurrently___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Async_concurrently___redArg___lam__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Async_concurrently___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Async_concurrently___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Async_concurrently___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Async_concurrently___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Async_concurrently___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Async_concurrently(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Async_concurrently___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Async_race___redArg___lam__1(lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Async_race___redArg___lam__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Async_race___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Async_race___redArg___lam__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Async_race___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Async_race___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Async_race___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Async_race___redArg___lam__4(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Async_race___redArg___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Async_race___redArg___lam__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Async_race___redArg___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Async_race___redArg___lam__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Async_race___redArg___lam__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Async_race___redArg___lam__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Async_race___redArg___lam__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Async_Async_race___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Async_Async_race___redArg___lam__1___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Async_Async_race___redArg___closed__0 = (const lean_object*)&l_Std_Async_Async_race___redArg___closed__0_value;
static const lean_closure_object l_Std_Async_Async_race___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Async_Async_race___redArg___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Async_Async_race___redArg___closed__1 = (const lean_object*)&l_Std_Async_Async_race___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_Std_Async_Async_race___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Async_race___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Async_race(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Async_race___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Async_concurrentlyAll___redArg___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Async_concurrentlyAll___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Async_concurrentlyAll___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Async_concurrentlyAll___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Async_concurrentlyAll___redArg___lam__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Async_concurrentlyAll___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Async_Async_concurrentlyAll___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Async_Async_concurrentlyAll___redArg___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Async_Async_concurrentlyAll___redArg___closed__0 = (const lean_object*)&l_Std_Async_Async_concurrentlyAll___redArg___closed__0_value;
static lean_once_cell_t l_Std_Async_Async_concurrentlyAll___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Async_Async_concurrentlyAll___redArg___closed__1;
LEAN_EXPORT lean_object* l_Std_Async_Async_concurrentlyAll___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Async_concurrentlyAll___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Async_concurrentlyAll(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Async_concurrentlyAll___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Async_raceAll___redArg___lam__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Async_raceAll___redArg___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Async_raceAll___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Async_raceAll___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Async_raceAll___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Async_raceAll___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Async_raceAll___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Async_raceAll___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Async_raceAll(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Async_raceAll___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_background___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_background(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_instMonadAwaitStateTOfMonad___redArg___lam__0(lean_object* v___y_1_, lean_object* v_toPure_2_, lean_object* v_a_3_){
_start:
{
lean_object* v___x_4_; lean_object* v___x_5_; 
v___x_4_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4_, 0, v_a_3_);
lean_ctor_set(v___x_4_, 1, v___y_1_);
v___x_5_ = lean_apply_2(v_toPure_2_, lean_box(0), v___x_4_);
return v___x_5_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_instMonadAwaitStateTOfMonad___redArg___lam__1(lean_object* v_inst_6_, lean_object* v_inst_7_, lean_object* v_00_u03b1_8_, lean_object* v___y_9_, lean_object* v___y_10_){
_start:
{
lean_object* v_toApplicative_11_; lean_object* v_toBind_12_; lean_object* v_toPure_13_; lean_object* v___x_14_; lean_object* v___f_15_; lean_object* v___x_16_; 
v_toApplicative_11_ = lean_ctor_get(v_inst_6_, 0);
lean_inc_ref(v_toApplicative_11_);
v_toBind_12_ = lean_ctor_get(v_inst_6_, 1);
lean_inc(v_toBind_12_);
lean_dec_ref(v_inst_6_);
v_toPure_13_ = lean_ctor_get(v_toApplicative_11_, 1);
lean_inc(v_toPure_13_);
lean_dec_ref(v_toApplicative_11_);
v___x_14_ = lean_apply_2(v_inst_7_, lean_box(0), v___y_9_);
v___f_15_ = lean_alloc_closure((void*)(l_Std_Async_instMonadAwaitStateTOfMonad___redArg___lam__0), 3, 2);
lean_closure_set(v___f_15_, 0, v___y_10_);
lean_closure_set(v___f_15_, 1, v_toPure_13_);
v___x_16_ = lean_apply_4(v_toBind_12_, lean_box(0), lean_box(0), v___x_14_, v___f_15_);
return v___x_16_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_instMonadAwaitStateTOfMonad___redArg(lean_object* v_inst_17_, lean_object* v_inst_18_){
_start:
{
lean_object* v___f_19_; 
v___f_19_ = lean_alloc_closure((void*)(l_Std_Async_instMonadAwaitStateTOfMonad___redArg___lam__1), 5, 2);
lean_closure_set(v___f_19_, 0, v_inst_17_);
lean_closure_set(v___f_19_, 1, v_inst_18_);
return v___f_19_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_instMonadAwaitStateTOfMonad(lean_object* v_m_20_, lean_object* v_t_21_, lean_object* v_n_22_, lean_object* v_inst_23_, lean_object* v_inst_24_){
_start:
{
lean_object* v___f_25_; 
v___f_25_ = lean_alloc_closure((void*)(l_Std_Async_instMonadAwaitStateTOfMonad___redArg___lam__1), 5, 2);
lean_closure_set(v___f_25_, 0, v_inst_23_);
lean_closure_set(v___f_25_, 1, v_inst_24_);
return v___f_25_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_instMonadAwaitExceptTOfMonad___redArg___lam__0(lean_object* v_a_26_){
_start:
{
lean_object* v___x_27_; 
v___x_27_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_27_, 0, v_a_26_);
return v___x_27_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_instMonadAwaitExceptTOfMonad___redArg___lam__1(lean_object* v_inst_28_, lean_object* v_inst_29_, lean_object* v___f_30_, lean_object* v_00_u03b1_31_, lean_object* v___y_32_){
_start:
{
lean_object* v_toApplicative_33_; lean_object* v_toFunctor_34_; lean_object* v_map_35_; lean_object* v___x_36_; lean_object* v___x_37_; 
v_toApplicative_33_ = lean_ctor_get(v_inst_28_, 0);
lean_inc_ref(v_toApplicative_33_);
lean_dec_ref(v_inst_28_);
v_toFunctor_34_ = lean_ctor_get(v_toApplicative_33_, 0);
lean_inc_ref(v_toFunctor_34_);
lean_dec_ref(v_toApplicative_33_);
v_map_35_ = lean_ctor_get(v_toFunctor_34_, 0);
lean_inc(v_map_35_);
lean_dec_ref(v_toFunctor_34_);
v___x_36_ = lean_apply_2(v_inst_29_, lean_box(0), v___y_32_);
v___x_37_ = lean_apply_4(v_map_35_, lean_box(0), lean_box(0), v___f_30_, v___x_36_);
return v___x_37_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_instMonadAwaitExceptTOfMonad___redArg(lean_object* v_inst_39_, lean_object* v_inst_40_){
_start:
{
lean_object* v___f_41_; lean_object* v___f_42_; 
v___f_41_ = ((lean_object*)(l_Std_Async_instMonadAwaitExceptTOfMonad___redArg___closed__0));
v___f_42_ = lean_alloc_closure((void*)(l_Std_Async_instMonadAwaitExceptTOfMonad___redArg___lam__1), 5, 3);
lean_closure_set(v___f_42_, 0, v_inst_39_);
lean_closure_set(v___f_42_, 1, v_inst_40_);
lean_closure_set(v___f_42_, 2, v___f_41_);
return v___f_42_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_instMonadAwaitExceptTOfMonad(lean_object* v_m_43_, lean_object* v_t_44_, lean_object* v_n_45_, lean_object* v_inst_46_, lean_object* v_inst_47_){
_start:
{
lean_object* v___x_48_; 
v___x_48_ = l_Std_Async_instMonadAwaitExceptTOfMonad___redArg(v_inst_46_, v_inst_47_);
return v___x_48_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_instMonadAwaitReaderTOfMonad___redArg___lam__0(lean_object* v_inst_49_, lean_object* v_00_u03b1_50_, lean_object* v___y_51_, lean_object* v___y_52_){
_start:
{
lean_object* v___x_53_; 
v___x_53_ = lean_apply_2(v_inst_49_, lean_box(0), v___y_51_);
return v___x_53_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_instMonadAwaitReaderTOfMonad___redArg___lam__0___boxed(lean_object* v_inst_54_, lean_object* v_00_u03b1_55_, lean_object* v___y_56_, lean_object* v___y_57_){
_start:
{
lean_object* v_res_58_; 
v_res_58_ = l_Std_Async_instMonadAwaitReaderTOfMonad___redArg___lam__0(v_inst_54_, v_00_u03b1_55_, v___y_56_, v___y_57_);
lean_dec(v___y_57_);
return v_res_58_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_instMonadAwaitReaderTOfMonad___redArg(lean_object* v_inst_59_){
_start:
{
lean_object* v___f_60_; 
v___f_60_ = lean_alloc_closure((void*)(l_Std_Async_instMonadAwaitReaderTOfMonad___redArg___lam__0___boxed), 4, 1);
lean_closure_set(v___f_60_, 0, v_inst_59_);
return v___f_60_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_instMonadAwaitReaderTOfMonad(lean_object* v_m_61_, lean_object* v_t_62_, lean_object* v_n_63_, lean_object* v_inst_64_, lean_object* v_inst_65_){
_start:
{
lean_object* v___f_66_; 
v___f_66_ = lean_alloc_closure((void*)(l_Std_Async_instMonadAwaitReaderTOfMonad___redArg___lam__0___boxed), 4, 1);
lean_closure_set(v___f_66_, 0, v_inst_65_);
return v___f_66_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_instMonadAwaitReaderTOfMonad___boxed(lean_object* v_m_67_, lean_object* v_t_68_, lean_object* v_n_69_, lean_object* v_inst_70_, lean_object* v_inst_71_){
_start:
{
lean_object* v_res_72_; 
v_res_72_ = l_Std_Async_instMonadAwaitReaderTOfMonad(v_m_67_, v_t_68_, v_n_69_, v_inst_70_, v_inst_71_);
lean_dec_ref(v_inst_70_);
return v_res_72_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_instMonadAwaitStateRefT_x27___redArg(lean_object* v_inst_73_){
_start:
{
lean_object* v___f_74_; 
v___f_74_ = lean_alloc_closure((void*)(l_Std_Async_instMonadAwaitReaderTOfMonad___redArg___lam__0___boxed), 4, 1);
lean_closure_set(v___f_74_, 0, v_inst_73_);
return v___f_74_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_instMonadAwaitStateRefT_x27(lean_object* v_t_75_, lean_object* v_m_76_, lean_object* v_s_77_, lean_object* v_n_78_, lean_object* v_inst_79_){
_start:
{
lean_object* v___f_80_; 
v___f_80_ = lean_alloc_closure((void*)(l_Std_Async_instMonadAwaitReaderTOfMonad___redArg___lam__0___boxed), 4, 1);
lean_closure_set(v___f_80_, 0, v_inst_79_);
return v___f_80_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_instMonadAwaitStateTOfMonad__1___redArg(lean_object* v_inst_81_, lean_object* v_inst_82_){
_start:
{
lean_object* v___f_83_; 
v___f_83_ = lean_alloc_closure((void*)(l_Std_Async_instMonadAwaitStateTOfMonad___redArg___lam__1), 5, 2);
lean_closure_set(v___f_83_, 0, v_inst_81_);
lean_closure_set(v___f_83_, 1, v_inst_82_);
return v___f_83_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_instMonadAwaitStateTOfMonad__1(lean_object* v_m_84_, lean_object* v_t_85_, lean_object* v_s_86_, lean_object* v_inst_87_, lean_object* v_inst_88_){
_start:
{
lean_object* v___f_89_; 
v___f_89_ = lean_alloc_closure((void*)(l_Std_Async_instMonadAwaitStateTOfMonad___redArg___lam__1), 5, 2);
lean_closure_set(v___f_89_, 0, v_inst_87_);
lean_closure_set(v___f_89_, 1, v_inst_88_);
return v___f_89_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_instMonadAsyncReaderT___redArg___lam__0(lean_object* v_inst_90_, lean_object* v_00_u03b1_91_, lean_object* v_p_92_, lean_object* v_prio_93_, lean_object* v___y_94_){
_start:
{
lean_object* v___x_95_; lean_object* v___x_96_; 
lean_inc(v___y_94_);
v___x_95_ = lean_apply_1(v_p_92_, v___y_94_);
v___x_96_ = lean_apply_3(v_inst_90_, lean_box(0), v___x_95_, v_prio_93_);
return v___x_96_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_instMonadAsyncReaderT___redArg___lam__0___boxed(lean_object* v_inst_97_, lean_object* v_00_u03b1_98_, lean_object* v_p_99_, lean_object* v_prio_100_, lean_object* v___y_101_){
_start:
{
lean_object* v_res_102_; 
v_res_102_ = l_Std_Async_instMonadAsyncReaderT___redArg___lam__0(v_inst_97_, v_00_u03b1_98_, v_p_99_, v_prio_100_, v___y_101_);
lean_dec(v___y_101_);
return v_res_102_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_instMonadAsyncReaderT___redArg(lean_object* v_inst_103_){
_start:
{
lean_object* v___f_104_; 
v___f_104_ = lean_alloc_closure((void*)(l_Std_Async_instMonadAsyncReaderT___redArg___lam__0___boxed), 5, 1);
lean_closure_set(v___f_104_, 0, v_inst_103_);
return v___f_104_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_instMonadAsyncReaderT(lean_object* v_t_105_, lean_object* v_m_106_, lean_object* v_n_107_, lean_object* v_inst_108_){
_start:
{
lean_object* v___f_109_; 
v___f_109_ = lean_alloc_closure((void*)(l_Std_Async_instMonadAsyncReaderT___redArg___lam__0___boxed), 5, 1);
lean_closure_set(v___f_109_, 0, v_inst_108_);
return v___f_109_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_instMonadAsyncStateRefT_x27___redArg(lean_object* v_inst_110_){
_start:
{
lean_object* v___f_111_; 
v___f_111_ = lean_alloc_closure((void*)(l_Std_Async_instMonadAsyncReaderT___redArg___lam__0___boxed), 5, 1);
lean_closure_set(v___f_111_, 0, v_inst_110_);
return v___f_111_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_instMonadAsyncStateRefT_x27(lean_object* v_t_112_, lean_object* v_m_113_, lean_object* v_s_114_, lean_object* v_n_115_, lean_object* v_inst_116_){
_start:
{
lean_object* v___f_117_; 
v___f_117_ = lean_alloc_closure((void*)(l_Std_Async_instMonadAsyncReaderT___redArg___lam__0___boxed), 5, 1);
lean_closure_set(v___f_117_, 0, v_inst_116_);
return v___f_117_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_instMonadAsyncStateTOfMonadOfFunctor___redArg___lam__0(lean_object* v_self_118_){
_start:
{
lean_object* v_fst_119_; 
v_fst_119_ = lean_ctor_get(v_self_118_, 0);
lean_inc(v_fst_119_);
return v_fst_119_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_instMonadAsyncStateTOfMonadOfFunctor___redArg___lam__0___boxed(lean_object* v_self_120_){
_start:
{
lean_object* v_res_121_; 
v_res_121_ = l_Std_Async_instMonadAsyncStateTOfMonadOfFunctor___redArg___lam__0(v_self_120_);
lean_dec_ref(v_self_120_);
return v_res_121_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_instMonadAsyncStateTOfMonadOfFunctor___redArg___lam__1(lean_object* v_inst_122_, lean_object* v___f_123_, lean_object* v___y_124_, lean_object* v_toPure_125_, lean_object* v_t_126_){
_start:
{
lean_object* v___x_127_; lean_object* v___x_128_; lean_object* v___x_129_; 
v___x_127_ = l_Functor_mapRev___redArg(v_inst_122_, v_t_126_, v___f_123_);
v___x_128_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_128_, 0, v___x_127_);
lean_ctor_set(v___x_128_, 1, v___y_124_);
v___x_129_ = lean_apply_2(v_toPure_125_, lean_box(0), v___x_128_);
return v___x_129_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_instMonadAsyncStateTOfMonadOfFunctor___redArg___lam__2(lean_object* v_inst_130_, lean_object* v___f_131_, lean_object* v_toPure_132_, lean_object* v_inst_133_, lean_object* v_toBind_134_, lean_object* v_00_u03b1_135_, lean_object* v_p_136_, lean_object* v_prio_137_, lean_object* v___y_138_){
_start:
{
lean_object* v___f_139_; lean_object* v___x_140_; lean_object* v___x_141_; lean_object* v___x_142_; 
lean_inc(v___y_138_);
v___f_139_ = lean_alloc_closure((void*)(l_Std_Async_instMonadAsyncStateTOfMonadOfFunctor___redArg___lam__1), 5, 4);
lean_closure_set(v___f_139_, 0, v_inst_130_);
lean_closure_set(v___f_139_, 1, v___f_131_);
lean_closure_set(v___f_139_, 2, v___y_138_);
lean_closure_set(v___f_139_, 3, v_toPure_132_);
v___x_140_ = lean_apply_1(v_p_136_, v___y_138_);
v___x_141_ = lean_apply_3(v_inst_133_, lean_box(0), v___x_140_, v_prio_137_);
v___x_142_ = lean_apply_4(v_toBind_134_, lean_box(0), lean_box(0), v___x_141_, v___f_139_);
return v___x_142_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_instMonadAsyncStateTOfMonadOfFunctor___redArg(lean_object* v_inst_144_, lean_object* v_inst_145_, lean_object* v_inst_146_){
_start:
{
lean_object* v_toApplicative_147_; lean_object* v_toBind_148_; lean_object* v_toPure_149_; lean_object* v___f_150_; lean_object* v___f_151_; 
v_toApplicative_147_ = lean_ctor_get(v_inst_144_, 0);
lean_inc_ref(v_toApplicative_147_);
v_toBind_148_ = lean_ctor_get(v_inst_144_, 1);
lean_inc(v_toBind_148_);
lean_dec_ref(v_inst_144_);
v_toPure_149_ = lean_ctor_get(v_toApplicative_147_, 1);
lean_inc(v_toPure_149_);
lean_dec_ref(v_toApplicative_147_);
v___f_150_ = ((lean_object*)(l_Std_Async_instMonadAsyncStateTOfMonadOfFunctor___redArg___closed__0));
v___f_151_ = lean_alloc_closure((void*)(l_Std_Async_instMonadAsyncStateTOfMonadOfFunctor___redArg___lam__2), 9, 5);
lean_closure_set(v___f_151_, 0, v_inst_145_);
lean_closure_set(v___f_151_, 1, v___f_150_);
lean_closure_set(v___f_151_, 2, v_toPure_149_);
lean_closure_set(v___f_151_, 3, v_inst_146_);
lean_closure_set(v___f_151_, 4, v_toBind_148_);
return v___f_151_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_instMonadAsyncStateTOfMonadOfFunctor(lean_object* v_m_152_, lean_object* v_t_153_, lean_object* v_s_154_, lean_object* v_inst_155_, lean_object* v_inst_156_, lean_object* v_inst_157_){
_start:
{
lean_object* v___x_158_; 
v___x_158_ = l_Std_Async_instMonadAsyncStateTOfMonadOfFunctor___redArg(v_inst_155_, v_inst_156_, v_inst_157_);
return v___x_158_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ETask_pure___redArg(lean_object* v_x_159_){
_start:
{
lean_object* v___x_160_; lean_object* v___x_161_; 
v___x_160_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_160_, 0, v_x_159_);
v___x_161_ = lean_task_pure(v___x_160_);
return v___x_161_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ETask_pure(lean_object* v_00_u03b1_162_, lean_object* v_00_u03b5_163_, lean_object* v_x_164_){
_start:
{
lean_object* v___x_165_; lean_object* v___x_166_; 
v___x_165_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_165_, 0, v_x_164_);
v___x_166_ = lean_task_pure(v___x_165_);
return v___x_166_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ETask_map___redArg___lam__0(lean_object* v_f_167_, lean_object* v_x_168_){
_start:
{
if (lean_obj_tag(v_x_168_) == 0)
{
lean_object* v_a_169_; lean_object* v___x_171_; uint8_t v_isShared_172_; uint8_t v_isSharedCheck_176_; 
lean_dec(v_f_167_);
v_a_169_ = lean_ctor_get(v_x_168_, 0);
v_isSharedCheck_176_ = !lean_is_exclusive(v_x_168_);
if (v_isSharedCheck_176_ == 0)
{
v___x_171_ = v_x_168_;
v_isShared_172_ = v_isSharedCheck_176_;
goto v_resetjp_170_;
}
else
{
lean_inc(v_a_169_);
lean_dec(v_x_168_);
v___x_171_ = lean_box(0);
v_isShared_172_ = v_isSharedCheck_176_;
goto v_resetjp_170_;
}
v_resetjp_170_:
{
lean_object* v___x_174_; 
if (v_isShared_172_ == 0)
{
v___x_174_ = v___x_171_;
goto v_reusejp_173_;
}
else
{
lean_object* v_reuseFailAlloc_175_; 
v_reuseFailAlloc_175_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_175_, 0, v_a_169_);
v___x_174_ = v_reuseFailAlloc_175_;
goto v_reusejp_173_;
}
v_reusejp_173_:
{
return v___x_174_;
}
}
}
else
{
lean_object* v_a_177_; lean_object* v___x_179_; uint8_t v_isShared_180_; uint8_t v_isSharedCheck_185_; 
v_a_177_ = lean_ctor_get(v_x_168_, 0);
v_isSharedCheck_185_ = !lean_is_exclusive(v_x_168_);
if (v_isSharedCheck_185_ == 0)
{
v___x_179_ = v_x_168_;
v_isShared_180_ = v_isSharedCheck_185_;
goto v_resetjp_178_;
}
else
{
lean_inc(v_a_177_);
lean_dec(v_x_168_);
v___x_179_ = lean_box(0);
v_isShared_180_ = v_isSharedCheck_185_;
goto v_resetjp_178_;
}
v_resetjp_178_:
{
lean_object* v___x_181_; lean_object* v___x_183_; 
v___x_181_ = lean_apply_1(v_f_167_, v_a_177_);
if (v_isShared_180_ == 0)
{
lean_ctor_set(v___x_179_, 0, v___x_181_);
v___x_183_ = v___x_179_;
goto v_reusejp_182_;
}
else
{
lean_object* v_reuseFailAlloc_184_; 
v_reuseFailAlloc_184_ = lean_alloc_ctor(1, 1, 0);
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
}
}
LEAN_EXPORT lean_object* l_Std_Async_ETask_map___redArg(lean_object* v_f_186_, lean_object* v_x_187_, lean_object* v_prio_188_, uint8_t v_sync_189_){
_start:
{
lean_object* v___f_190_; lean_object* v___x_191_; 
v___f_190_ = lean_alloc_closure((void*)(l_Std_Async_ETask_map___redArg___lam__0), 2, 1);
lean_closure_set(v___f_190_, 0, v_f_186_);
v___x_191_ = lean_task_map(v___f_190_, v_x_187_, v_prio_188_, v_sync_189_);
return v___x_191_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ETask_map___redArg___boxed(lean_object* v_f_192_, lean_object* v_x_193_, lean_object* v_prio_194_, lean_object* v_sync_195_){
_start:
{
uint8_t v_sync_boxed_196_; lean_object* v_res_197_; 
v_sync_boxed_196_ = lean_unbox(v_sync_195_);
v_res_197_ = l_Std_Async_ETask_map___redArg(v_f_192_, v_x_193_, v_prio_194_, v_sync_boxed_196_);
return v_res_197_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ETask_map(lean_object* v_00_u03b1_198_, lean_object* v_00_u03b2_199_, lean_object* v_00_u03b5_200_, lean_object* v_f_201_, lean_object* v_x_202_, lean_object* v_prio_203_, uint8_t v_sync_204_){
_start:
{
lean_object* v___f_205_; lean_object* v___x_206_; 
v___f_205_ = lean_alloc_closure((void*)(l_Std_Async_ETask_map___redArg___lam__0), 2, 1);
lean_closure_set(v___f_205_, 0, v_f_201_);
v___x_206_ = lean_task_map(v___f_205_, v_x_202_, v_prio_203_, v_sync_204_);
return v___x_206_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ETask_map___boxed(lean_object* v_00_u03b1_207_, lean_object* v_00_u03b2_208_, lean_object* v_00_u03b5_209_, lean_object* v_f_210_, lean_object* v_x_211_, lean_object* v_prio_212_, lean_object* v_sync_213_){
_start:
{
uint8_t v_sync_boxed_214_; lean_object* v_res_215_; 
v_sync_boxed_214_ = lean_unbox(v_sync_213_);
v_res_215_ = l_Std_Async_ETask_map(v_00_u03b1_207_, v_00_u03b2_208_, v_00_u03b5_209_, v_f_210_, v_x_211_, v_prio_212_, v_sync_boxed_214_);
return v_res_215_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ETask_bind___redArg___lam__0(lean_object* v_f_216_, lean_object* v_x_217_){
_start:
{
if (lean_obj_tag(v_x_217_) == 0)
{
lean_object* v_a_218_; lean_object* v___x_220_; uint8_t v_isShared_221_; uint8_t v_isSharedCheck_226_; 
lean_dec_ref(v_f_216_);
v_a_218_ = lean_ctor_get(v_x_217_, 0);
v_isSharedCheck_226_ = !lean_is_exclusive(v_x_217_);
if (v_isSharedCheck_226_ == 0)
{
v___x_220_ = v_x_217_;
v_isShared_221_ = v_isSharedCheck_226_;
goto v_resetjp_219_;
}
else
{
lean_inc(v_a_218_);
lean_dec(v_x_217_);
v___x_220_ = lean_box(0);
v_isShared_221_ = v_isSharedCheck_226_;
goto v_resetjp_219_;
}
v_resetjp_219_:
{
lean_object* v___x_223_; 
if (v_isShared_221_ == 0)
{
v___x_223_ = v___x_220_;
goto v_reusejp_222_;
}
else
{
lean_object* v_reuseFailAlloc_225_; 
v_reuseFailAlloc_225_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_225_, 0, v_a_218_);
v___x_223_ = v_reuseFailAlloc_225_;
goto v_reusejp_222_;
}
v_reusejp_222_:
{
lean_object* v___x_224_; 
v___x_224_ = lean_task_pure(v___x_223_);
return v___x_224_;
}
}
}
else
{
lean_object* v_a_227_; lean_object* v___x_228_; 
v_a_227_ = lean_ctor_get(v_x_217_, 0);
lean_inc(v_a_227_);
lean_dec_ref_known(v_x_217_, 1);
v___x_228_ = lean_apply_1(v_f_216_, v_a_227_);
return v___x_228_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_ETask_bind___redArg(lean_object* v_x_229_, lean_object* v_f_230_, lean_object* v_prio_231_, uint8_t v_sync_232_){
_start:
{
lean_object* v___f_233_; lean_object* v___x_234_; 
v___f_233_ = lean_alloc_closure((void*)(l_Std_Async_ETask_bind___redArg___lam__0), 2, 1);
lean_closure_set(v___f_233_, 0, v_f_230_);
v___x_234_ = lean_task_bind(v_x_229_, v___f_233_, v_prio_231_, v_sync_232_);
return v___x_234_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ETask_bind___redArg___boxed(lean_object* v_x_235_, lean_object* v_f_236_, lean_object* v_prio_237_, lean_object* v_sync_238_){
_start:
{
uint8_t v_sync_boxed_239_; lean_object* v_res_240_; 
v_sync_boxed_239_ = lean_unbox(v_sync_238_);
v_res_240_ = l_Std_Async_ETask_bind___redArg(v_x_235_, v_f_236_, v_prio_237_, v_sync_boxed_239_);
return v_res_240_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ETask_bind(lean_object* v_00_u03b5_241_, lean_object* v_00_u03b1_242_, lean_object* v_00_u03b2_243_, lean_object* v_x_244_, lean_object* v_f_245_, lean_object* v_prio_246_, uint8_t v_sync_247_){
_start:
{
lean_object* v___f_248_; lean_object* v___x_249_; 
v___f_248_ = lean_alloc_closure((void*)(l_Std_Async_ETask_bind___redArg___lam__0), 2, 1);
lean_closure_set(v___f_248_, 0, v_f_245_);
v___x_249_ = lean_task_bind(v_x_244_, v___f_248_, v_prio_246_, v_sync_247_);
return v___x_249_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ETask_bind___boxed(lean_object* v_00_u03b5_250_, lean_object* v_00_u03b1_251_, lean_object* v_00_u03b2_252_, lean_object* v_x_253_, lean_object* v_f_254_, lean_object* v_prio_255_, lean_object* v_sync_256_){
_start:
{
uint8_t v_sync_boxed_257_; lean_object* v_res_258_; 
v_sync_boxed_257_ = lean_unbox(v_sync_256_);
v_res_258_ = l_Std_Async_ETask_bind(v_00_u03b5_250_, v_00_u03b1_251_, v_00_u03b2_252_, v_x_253_, v_f_254_, v_prio_255_, v_sync_boxed_257_);
return v_res_258_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ETask_bindEIO___redArg___lam__0(lean_object* v_f_259_, lean_object* v_a_260_){
_start:
{
lean_object* v_a_263_; 
if (lean_obj_tag(v_a_260_) == 0)
{
lean_object* v_a_266_; 
lean_dec_ref(v_f_259_);
v_a_266_ = lean_ctor_get(v_a_260_, 0);
lean_inc(v_a_266_);
lean_dec_ref_known(v_a_260_, 1);
v_a_263_ = v_a_266_;
goto v___jp_262_;
}
else
{
lean_object* v_a_267_; lean_object* v___x_268_; 
v_a_267_ = lean_ctor_get(v_a_260_, 0);
lean_inc(v_a_267_);
lean_dec_ref_known(v_a_260_, 1);
v___x_268_ = lean_apply_2(v_f_259_, v_a_267_, lean_box(0));
if (lean_obj_tag(v___x_268_) == 0)
{
lean_object* v_a_269_; 
v_a_269_ = lean_ctor_get(v___x_268_, 0);
lean_inc(v_a_269_);
lean_dec_ref_known(v___x_268_, 1);
return v_a_269_;
}
else
{
lean_object* v_a_270_; 
v_a_270_ = lean_ctor_get(v___x_268_, 0);
lean_inc(v_a_270_);
lean_dec_ref_known(v___x_268_, 1);
v_a_263_ = v_a_270_;
goto v___jp_262_;
}
}
v___jp_262_:
{
lean_object* v___x_264_; lean_object* v___x_265_; 
v___x_264_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_264_, 0, v_a_263_);
v___x_265_ = lean_task_pure(v___x_264_);
return v___x_265_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_ETask_bindEIO___redArg___lam__0___boxed(lean_object* v_f_271_, lean_object* v_a_272_, lean_object* v___y_273_){
_start:
{
lean_object* v_res_274_; 
v_res_274_ = l_Std_Async_ETask_bindEIO___redArg___lam__0(v_f_271_, v_a_272_);
return v_res_274_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ETask_bindEIO___redArg(lean_object* v_x_275_, lean_object* v_f_276_, lean_object* v_prio_277_, uint8_t v_sync_278_){
_start:
{
lean_object* v___f_280_; lean_object* v___x_281_; lean_object* v___x_282_; 
v___f_280_ = lean_alloc_closure((void*)(l_Std_Async_ETask_bindEIO___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_280_, 0, v_f_276_);
v___x_281_ = lean_io_bind_task(v_x_275_, v___f_280_, v_prio_277_, v_sync_278_);
v___x_282_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_282_, 0, v___x_281_);
return v___x_282_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ETask_bindEIO___redArg___boxed(lean_object* v_x_283_, lean_object* v_f_284_, lean_object* v_prio_285_, lean_object* v_sync_286_, lean_object* v___y_287_){
_start:
{
uint8_t v_sync_boxed_288_; lean_object* v_res_289_; 
v_sync_boxed_288_ = lean_unbox(v_sync_286_);
v_res_289_ = l_Std_Async_ETask_bindEIO___redArg(v_x_283_, v_f_284_, v_prio_285_, v_sync_boxed_288_);
return v_res_289_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ETask_bindEIO(lean_object* v_00_u03b5_290_, lean_object* v_00_u03b1_291_, lean_object* v_00_u03b2_292_, lean_object* v_x_293_, lean_object* v_f_294_, lean_object* v_prio_295_, uint8_t v_sync_296_){
_start:
{
lean_object* v___f_298_; lean_object* v___x_299_; lean_object* v___x_300_; 
v___f_298_ = lean_alloc_closure((void*)(l_Std_Async_ETask_bindEIO___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_298_, 0, v_f_294_);
v___x_299_ = lean_io_bind_task(v_x_293_, v___f_298_, v_prio_295_, v_sync_296_);
v___x_300_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_300_, 0, v___x_299_);
return v___x_300_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ETask_bindEIO___boxed(lean_object* v_00_u03b5_301_, lean_object* v_00_u03b1_302_, lean_object* v_00_u03b2_303_, lean_object* v_x_304_, lean_object* v_f_305_, lean_object* v_prio_306_, lean_object* v_sync_307_, lean_object* v___y_308_){
_start:
{
uint8_t v_sync_boxed_309_; lean_object* v_res_310_; 
v_sync_boxed_309_ = lean_unbox(v_sync_307_);
v_res_310_ = l_Std_Async_ETask_bindEIO(v_00_u03b5_301_, v_00_u03b1_302_, v_00_u03b2_303_, v_x_304_, v_f_305_, v_prio_306_, v_sync_boxed_309_);
return v_res_310_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ETask_mapEIO___redArg___lam__0(lean_object* v_f_311_, lean_object* v_a_312_){
_start:
{
lean_object* v_a_315_; 
if (lean_obj_tag(v_a_312_) == 0)
{
lean_object* v_a_317_; 
lean_dec_ref(v_f_311_);
v_a_317_ = lean_ctor_get(v_a_312_, 0);
lean_inc(v_a_317_);
lean_dec_ref_known(v_a_312_, 1);
v_a_315_ = v_a_317_;
goto v___jp_314_;
}
else
{
lean_object* v_a_318_; lean_object* v___x_320_; uint8_t v_isShared_321_; uint8_t v_isSharedCheck_328_; 
v_a_318_ = lean_ctor_get(v_a_312_, 0);
v_isSharedCheck_328_ = !lean_is_exclusive(v_a_312_);
if (v_isSharedCheck_328_ == 0)
{
v___x_320_ = v_a_312_;
v_isShared_321_ = v_isSharedCheck_328_;
goto v_resetjp_319_;
}
else
{
lean_inc(v_a_318_);
lean_dec(v_a_312_);
v___x_320_ = lean_box(0);
v_isShared_321_ = v_isSharedCheck_328_;
goto v_resetjp_319_;
}
v_resetjp_319_:
{
lean_object* v___x_322_; 
v___x_322_ = lean_apply_2(v_f_311_, v_a_318_, lean_box(0));
if (lean_obj_tag(v___x_322_) == 0)
{
lean_object* v_a_323_; lean_object* v___x_325_; 
v_a_323_ = lean_ctor_get(v___x_322_, 0);
lean_inc(v_a_323_);
lean_dec_ref_known(v___x_322_, 1);
if (v_isShared_321_ == 0)
{
lean_ctor_set(v___x_320_, 0, v_a_323_);
v___x_325_ = v___x_320_;
goto v_reusejp_324_;
}
else
{
lean_object* v_reuseFailAlloc_326_; 
v_reuseFailAlloc_326_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_326_, 0, v_a_323_);
v___x_325_ = v_reuseFailAlloc_326_;
goto v_reusejp_324_;
}
v_reusejp_324_:
{
return v___x_325_;
}
}
else
{
lean_object* v_a_327_; 
lean_del_object(v___x_320_);
v_a_327_ = lean_ctor_get(v___x_322_, 0);
lean_inc(v_a_327_);
lean_dec_ref_known(v___x_322_, 1);
v_a_315_ = v_a_327_;
goto v___jp_314_;
}
}
}
v___jp_314_:
{
lean_object* v___x_316_; 
v___x_316_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_316_, 0, v_a_315_);
return v___x_316_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_ETask_mapEIO___redArg___lam__0___boxed(lean_object* v_f_329_, lean_object* v_a_330_, lean_object* v___y_331_){
_start:
{
lean_object* v_res_332_; 
v_res_332_ = l_Std_Async_ETask_mapEIO___redArg___lam__0(v_f_329_, v_a_330_);
return v_res_332_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ETask_mapEIO___redArg(lean_object* v_f_333_, lean_object* v_x_334_, lean_object* v_prio_335_, uint8_t v_sync_336_){
_start:
{
lean_object* v___f_338_; lean_object* v___x_339_; 
v___f_338_ = lean_alloc_closure((void*)(l_Std_Async_ETask_mapEIO___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_338_, 0, v_f_333_);
v___x_339_ = lean_io_map_task(v___f_338_, v_x_334_, v_prio_335_, v_sync_336_);
return v___x_339_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ETask_mapEIO___redArg___boxed(lean_object* v_f_340_, lean_object* v_x_341_, lean_object* v_prio_342_, lean_object* v_sync_343_, lean_object* v___y_344_){
_start:
{
uint8_t v_sync_boxed_345_; lean_object* v_res_346_; 
v_sync_boxed_345_ = lean_unbox(v_sync_343_);
v_res_346_ = l_Std_Async_ETask_mapEIO___redArg(v_f_340_, v_x_341_, v_prio_342_, v_sync_boxed_345_);
return v_res_346_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ETask_mapEIO(lean_object* v_00_u03b1_347_, lean_object* v_00_u03b5_348_, lean_object* v_00_u03b2_349_, lean_object* v_f_350_, lean_object* v_x_351_, lean_object* v_prio_352_, uint8_t v_sync_353_){
_start:
{
lean_object* v___f_355_; lean_object* v___x_356_; 
v___f_355_ = lean_alloc_closure((void*)(l_Std_Async_ETask_mapEIO___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_355_, 0, v_f_350_);
v___x_356_ = lean_io_map_task(v___f_355_, v_x_351_, v_prio_352_, v_sync_353_);
return v___x_356_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ETask_mapEIO___boxed(lean_object* v_00_u03b1_357_, lean_object* v_00_u03b5_358_, lean_object* v_00_u03b2_359_, lean_object* v_f_360_, lean_object* v_x_361_, lean_object* v_prio_362_, lean_object* v_sync_363_, lean_object* v___y_364_){
_start:
{
uint8_t v_sync_boxed_365_; lean_object* v_res_366_; 
v_sync_boxed_365_ = lean_unbox(v_sync_363_);
v_res_366_ = l_Std_Async_ETask_mapEIO(v_00_u03b1_357_, v_00_u03b5_358_, v_00_u03b2_359_, v_f_360_, v_x_361_, v_prio_362_, v_sync_boxed_365_);
return v_res_366_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ETask_block___redArg(lean_object* v_x_367_){
_start:
{
lean_object* v___x_369_; 
v___x_369_ = lean_task_get_own(v_x_367_);
if (lean_obj_tag(v___x_369_) == 0)
{
lean_object* v_a_370_; lean_object* v___x_372_; uint8_t v_isShared_373_; uint8_t v_isSharedCheck_377_; 
v_a_370_ = lean_ctor_get(v___x_369_, 0);
v_isSharedCheck_377_ = !lean_is_exclusive(v___x_369_);
if (v_isSharedCheck_377_ == 0)
{
v___x_372_ = v___x_369_;
v_isShared_373_ = v_isSharedCheck_377_;
goto v_resetjp_371_;
}
else
{
lean_inc(v_a_370_);
lean_dec(v___x_369_);
v___x_372_ = lean_box(0);
v_isShared_373_ = v_isSharedCheck_377_;
goto v_resetjp_371_;
}
v_resetjp_371_:
{
lean_object* v___x_375_; 
if (v_isShared_373_ == 0)
{
lean_ctor_set_tag(v___x_372_, 1);
v___x_375_ = v___x_372_;
goto v_reusejp_374_;
}
else
{
lean_object* v_reuseFailAlloc_376_; 
v_reuseFailAlloc_376_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_376_, 0, v_a_370_);
v___x_375_ = v_reuseFailAlloc_376_;
goto v_reusejp_374_;
}
v_reusejp_374_:
{
return v___x_375_;
}
}
}
else
{
lean_object* v_a_378_; lean_object* v___x_380_; uint8_t v_isShared_381_; uint8_t v_isSharedCheck_385_; 
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
lean_ctor_set_tag(v___x_380_, 0);
v___x_383_ = v___x_380_;
goto v_reusejp_382_;
}
else
{
lean_object* v_reuseFailAlloc_384_; 
v_reuseFailAlloc_384_ = lean_alloc_ctor(0, 1, 0);
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
LEAN_EXPORT lean_object* l_Std_Async_ETask_block___redArg___boxed(lean_object* v_x_386_, lean_object* v___y_387_){
_start:
{
lean_object* v_res_388_; 
v_res_388_ = l_Std_Async_ETask_block___redArg(v_x_386_);
return v_res_388_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ETask_block(lean_object* v_00_u03b5_389_, lean_object* v_00_u03b1_390_, lean_object* v_x_391_){
_start:
{
lean_object* v___x_393_; 
v___x_393_ = lean_task_get_own(v_x_391_);
if (lean_obj_tag(v___x_393_) == 0)
{
lean_object* v_a_394_; lean_object* v___x_396_; uint8_t v_isShared_397_; uint8_t v_isSharedCheck_401_; 
v_a_394_ = lean_ctor_get(v___x_393_, 0);
v_isSharedCheck_401_ = !lean_is_exclusive(v___x_393_);
if (v_isSharedCheck_401_ == 0)
{
v___x_396_ = v___x_393_;
v_isShared_397_ = v_isSharedCheck_401_;
goto v_resetjp_395_;
}
else
{
lean_inc(v_a_394_);
lean_dec(v___x_393_);
v___x_396_ = lean_box(0);
v_isShared_397_ = v_isSharedCheck_401_;
goto v_resetjp_395_;
}
v_resetjp_395_:
{
lean_object* v___x_399_; 
if (v_isShared_397_ == 0)
{
lean_ctor_set_tag(v___x_396_, 1);
v___x_399_ = v___x_396_;
goto v_reusejp_398_;
}
else
{
lean_object* v_reuseFailAlloc_400_; 
v_reuseFailAlloc_400_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_400_, 0, v_a_394_);
v___x_399_ = v_reuseFailAlloc_400_;
goto v_reusejp_398_;
}
v_reusejp_398_:
{
return v___x_399_;
}
}
}
else
{
lean_object* v_a_402_; lean_object* v___x_404_; uint8_t v_isShared_405_; uint8_t v_isSharedCheck_409_; 
v_a_402_ = lean_ctor_get(v___x_393_, 0);
v_isSharedCheck_409_ = !lean_is_exclusive(v___x_393_);
if (v_isSharedCheck_409_ == 0)
{
v___x_404_ = v___x_393_;
v_isShared_405_ = v_isSharedCheck_409_;
goto v_resetjp_403_;
}
else
{
lean_inc(v_a_402_);
lean_dec(v___x_393_);
v___x_404_ = lean_box(0);
v_isShared_405_ = v_isSharedCheck_409_;
goto v_resetjp_403_;
}
v_resetjp_403_:
{
lean_object* v___x_407_; 
if (v_isShared_405_ == 0)
{
lean_ctor_set_tag(v___x_404_, 0);
v___x_407_ = v___x_404_;
goto v_reusejp_406_;
}
else
{
lean_object* v_reuseFailAlloc_408_; 
v_reuseFailAlloc_408_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_408_, 0, v_a_402_);
v___x_407_ = v_reuseFailAlloc_408_;
goto v_reusejp_406_;
}
v_reusejp_406_:
{
return v___x_407_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_ETask_block___boxed(lean_object* v_00_u03b5_410_, lean_object* v_00_u03b1_411_, lean_object* v_x_412_, lean_object* v___y_413_){
_start:
{
lean_object* v_res_414_; 
v_res_414_ = l_Std_Async_ETask_block(v_00_u03b5_410_, v_00_u03b1_411_, v_x_412_);
return v_res_414_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ETask_ofPromise_x21___redArg(lean_object* v_x_415_){
_start:
{
lean_object* v___x_416_; 
v___x_416_ = l_IO_Promise_result_x21___redArg(v_x_415_);
return v___x_416_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ETask_ofPromise_x21___redArg___boxed(lean_object* v_x_417_){
_start:
{
lean_object* v_res_418_; 
v_res_418_ = l_Std_Async_ETask_ofPromise_x21___redArg(v_x_417_);
lean_dec(v_x_417_);
return v_res_418_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ETask_ofPromise_x21(lean_object* v_00_u03b5_419_, lean_object* v_00_u03b1_420_, lean_object* v_x_421_){
_start:
{
lean_object* v___x_422_; 
v___x_422_ = l_IO_Promise_result_x21___redArg(v_x_421_);
return v___x_422_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ETask_ofPromise_x21___boxed(lean_object* v_00_u03b5_423_, lean_object* v_00_u03b1_424_, lean_object* v_x_425_){
_start:
{
lean_object* v_res_426_; 
v_res_426_ = l_Std_Async_ETask_ofPromise_x21(v_00_u03b5_423_, v_00_u03b1_424_, v_x_425_);
lean_dec(v_x_425_);
return v_res_426_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ETask_ofPurePromise___redArg(lean_object* v_x_428_){
_start:
{
lean_object* v___x_429_; lean_object* v___x_430_; lean_object* v___x_431_; uint8_t v___x_432_; lean_object* v___x_433_; 
v___x_429_ = ((lean_object*)(l_Std_Async_ETask_ofPurePromise___redArg___closed__0));
v___x_430_ = l_IO_Promise_result_x21___redArg(v_x_428_);
v___x_431_ = lean_unsigned_to_nat(0u);
v___x_432_ = 1;
v___x_433_ = lean_task_map(v___x_429_, v___x_430_, v___x_431_, v___x_432_);
return v___x_433_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ETask_ofPurePromise___redArg___boxed(lean_object* v_x_434_){
_start:
{
lean_object* v_res_435_; 
v_res_435_ = l_Std_Async_ETask_ofPurePromise___redArg(v_x_434_);
lean_dec(v_x_434_);
return v_res_435_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ETask_ofPurePromise(lean_object* v_00_u03b1_436_, lean_object* v_00_u03b5_437_, lean_object* v_x_438_){
_start:
{
lean_object* v___x_439_; lean_object* v___x_440_; lean_object* v___x_441_; uint8_t v___x_442_; lean_object* v___x_443_; 
v___x_439_ = ((lean_object*)(l_Std_Async_ETask_ofPurePromise___redArg___closed__0));
v___x_440_ = l_IO_Promise_result_x21___redArg(v_x_438_);
v___x_441_ = lean_unsigned_to_nat(0u);
v___x_442_ = 1;
v___x_443_ = lean_task_map(v___x_439_, v___x_440_, v___x_441_, v___x_442_);
return v___x_443_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ETask_ofPurePromise___boxed(lean_object* v_00_u03b1_444_, lean_object* v_00_u03b5_445_, lean_object* v_x_446_){
_start:
{
lean_object* v_res_447_; 
v_res_447_ = l_Std_Async_ETask_ofPurePromise(v_00_u03b1_444_, v_00_u03b5_445_, v_x_446_);
lean_dec(v_x_446_);
return v_res_447_;
}
}
LEAN_EXPORT uint8_t l_Std_Async_ETask_getState___redArg(lean_object* v_x_448_){
_start:
{
uint8_t v___x_450_; 
v___x_450_ = lean_io_get_task_state(v_x_448_);
return v___x_450_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ETask_getState___redArg___boxed(lean_object* v_x_451_, lean_object* v___y_452_){
_start:
{
uint8_t v_res_453_; lean_object* v_r_454_; 
v_res_453_ = l_Std_Async_ETask_getState___redArg(v_x_451_);
lean_dec_ref(v_x_451_);
v_r_454_ = lean_box(v_res_453_);
return v_r_454_;
}
}
LEAN_EXPORT uint8_t l_Std_Async_ETask_getState(lean_object* v_00_u03b5_455_, lean_object* v_00_u03b1_456_, lean_object* v_x_457_){
_start:
{
uint8_t v___x_459_; 
v___x_459_ = lean_io_get_task_state(v_x_457_);
return v___x_459_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ETask_getState___boxed(lean_object* v_00_u03b5_460_, lean_object* v_00_u03b1_461_, lean_object* v_x_462_, lean_object* v___y_463_){
_start:
{
uint8_t v_res_464_; lean_object* v_r_465_; 
v_res_464_ = l_Std_Async_ETask_getState(v_00_u03b5_460_, v_00_u03b1_461_, v_x_462_);
lean_dec_ref(v_x_462_);
v_r_465_ = lean_box(v_res_464_);
return v_r_465_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ETask_instFunctor___redArg___lam__1(lean_object* v_00_u03b1_466_, lean_object* v_00_u03b2_467_, lean_object* v_f_468_, lean_object* v_x_469_){
_start:
{
lean_object* v___f_470_; lean_object* v___x_471_; uint8_t v___x_472_; lean_object* v___x_473_; 
v___f_470_ = lean_alloc_closure((void*)(l_Std_Async_ETask_map___redArg___lam__0), 2, 1);
lean_closure_set(v___f_470_, 0, v_f_468_);
v___x_471_ = lean_unsigned_to_nat(0u);
v___x_472_ = 0;
v___x_473_ = lean_task_map(v___f_470_, v_x_469_, v___x_471_, v___x_472_);
return v___x_473_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ETask_instFunctor___redArg___lam__0(lean_object* v___f_474_, lean_object* v_00_u03b1_475_, lean_object* v_00_u03b2_476_, lean_object* v___y_477_, lean_object* v___y_478_){
_start:
{
lean_object* v___x_479_; lean_object* v___x_480_; 
v___x_479_ = lean_alloc_closure((void*)(l_Function_const___boxed), 4, 3);
lean_closure_set(v___x_479_, 0, lean_box(0));
lean_closure_set(v___x_479_, 1, lean_box(0));
lean_closure_set(v___x_479_, 2, v___y_477_);
v___x_480_ = lean_apply_4(v___f_474_, lean_box(0), lean_box(0), v___x_479_, v___y_478_);
return v___x_480_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ETask_instFunctor___redArg(){
_start:
{
lean_object* v___x_488_; 
v___x_488_ = ((lean_object*)(l_Std_Async_ETask_instFunctor___redArg___closed__2));
return v___x_488_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ETask_instFunctor___redArg___boxed(lean_object* v___dummy_489_){
_start:
{
lean_object* v_res_490_; 
v_res_490_ = l_Std_Async_ETask_instFunctor___redArg();
return v_res_490_;
}
}
static lean_object* _init_l_Std_Async_ETask_instFunctor___closed__0(void){
_start:
{
lean_object* v___x_491_; 
v___x_491_ = l_Std_Async_ETask_instFunctor___redArg();
return v___x_491_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ETask_instFunctor(lean_object* v_00_u03b5_492_){
_start:
{
lean_object* v___x_493_; 
v___x_493_ = lean_obj_once(&l_Std_Async_ETask_instFunctor___closed__0, &l_Std_Async_ETask_instFunctor___closed__0_once, _init_l_Std_Async_ETask_instFunctor___closed__0);
return v___x_493_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ETask_instMonad___redArg___lam__0(lean_object* v_00_u03b1_494_, lean_object* v___y_495_){
_start:
{
lean_object* v___x_496_; lean_object* v___x_497_; 
v___x_496_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_496_, 0, v___y_495_);
v___x_497_ = lean_task_pure(v___x_496_);
return v___x_497_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ETask_instMonad___redArg___lam__1(lean_object* v_a_498_, lean_object* v_x_499_){
_start:
{
if (lean_obj_tag(v_x_499_) == 0)
{
lean_object* v_a_500_; lean_object* v___x_502_; uint8_t v_isShared_503_; uint8_t v_isSharedCheck_507_; 
lean_dec(v_a_498_);
v_a_500_ = lean_ctor_get(v_x_499_, 0);
v_isSharedCheck_507_ = !lean_is_exclusive(v_x_499_);
if (v_isSharedCheck_507_ == 0)
{
v___x_502_ = v_x_499_;
v_isShared_503_ = v_isSharedCheck_507_;
goto v_resetjp_501_;
}
else
{
lean_inc(v_a_500_);
lean_dec(v_x_499_);
v___x_502_ = lean_box(0);
v_isShared_503_ = v_isSharedCheck_507_;
goto v_resetjp_501_;
}
v_resetjp_501_:
{
lean_object* v___x_505_; 
if (v_isShared_503_ == 0)
{
v___x_505_ = v___x_502_;
goto v_reusejp_504_;
}
else
{
lean_object* v_reuseFailAlloc_506_; 
v_reuseFailAlloc_506_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_506_, 0, v_a_500_);
v___x_505_ = v_reuseFailAlloc_506_;
goto v_reusejp_504_;
}
v_reusejp_504_:
{
return v___x_505_;
}
}
}
else
{
lean_object* v_a_508_; lean_object* v___x_510_; uint8_t v_isShared_511_; uint8_t v_isSharedCheck_516_; 
v_a_508_ = lean_ctor_get(v_x_499_, 0);
v_isSharedCheck_516_ = !lean_is_exclusive(v_x_499_);
if (v_isSharedCheck_516_ == 0)
{
v___x_510_ = v_x_499_;
v_isShared_511_ = v_isSharedCheck_516_;
goto v_resetjp_509_;
}
else
{
lean_inc(v_a_508_);
lean_dec(v_x_499_);
v___x_510_ = lean_box(0);
v_isShared_511_ = v_isSharedCheck_516_;
goto v_resetjp_509_;
}
v_resetjp_509_:
{
lean_object* v___x_512_; lean_object* v___x_514_; 
v___x_512_ = lean_apply_1(v_a_498_, v_a_508_);
if (v_isShared_511_ == 0)
{
lean_ctor_set(v___x_510_, 0, v___x_512_);
v___x_514_ = v___x_510_;
goto v_reusejp_513_;
}
else
{
lean_object* v_reuseFailAlloc_515_; 
v_reuseFailAlloc_515_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_515_, 0, v___x_512_);
v___x_514_ = v_reuseFailAlloc_515_;
goto v_reusejp_513_;
}
v_reusejp_513_:
{
return v___x_514_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_ETask_instMonad___redArg___lam__2(lean_object* v_x_517_, lean_object* v_x_518_){
_start:
{
if (lean_obj_tag(v_x_518_) == 0)
{
lean_object* v_a_519_; lean_object* v___x_521_; uint8_t v_isShared_522_; uint8_t v_isSharedCheck_527_; 
lean_dec_ref(v_x_517_);
v_a_519_ = lean_ctor_get(v_x_518_, 0);
v_isSharedCheck_527_ = !lean_is_exclusive(v_x_518_);
if (v_isSharedCheck_527_ == 0)
{
v___x_521_ = v_x_518_;
v_isShared_522_ = v_isSharedCheck_527_;
goto v_resetjp_520_;
}
else
{
lean_inc(v_a_519_);
lean_dec(v_x_518_);
v___x_521_ = lean_box(0);
v_isShared_522_ = v_isSharedCheck_527_;
goto v_resetjp_520_;
}
v_resetjp_520_:
{
lean_object* v___x_524_; 
if (v_isShared_522_ == 0)
{
v___x_524_ = v___x_521_;
goto v_reusejp_523_;
}
else
{
lean_object* v_reuseFailAlloc_526_; 
v_reuseFailAlloc_526_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_526_, 0, v_a_519_);
v___x_524_ = v_reuseFailAlloc_526_;
goto v_reusejp_523_;
}
v_reusejp_523_:
{
lean_object* v___x_525_; 
v___x_525_ = lean_task_pure(v___x_524_);
return v___x_525_;
}
}
}
else
{
lean_object* v_a_528_; lean_object* v___f_529_; lean_object* v___x_530_; lean_object* v___x_531_; lean_object* v___x_532_; uint8_t v___x_533_; lean_object* v___x_534_; 
v_a_528_ = lean_ctor_get(v_x_518_, 0);
lean_inc(v_a_528_);
lean_dec_ref_known(v_x_518_, 1);
v___f_529_ = lean_alloc_closure((void*)(l_Std_Async_ETask_instMonad___redArg___lam__1), 2, 1);
lean_closure_set(v___f_529_, 0, v_a_528_);
v___x_530_ = lean_box(0);
v___x_531_ = lean_apply_1(v_x_517_, v___x_530_);
v___x_532_ = lean_unsigned_to_nat(0u);
v___x_533_ = 0;
v___x_534_ = lean_task_map(v___f_529_, v___x_531_, v___x_532_, v___x_533_);
return v___x_534_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_ETask_instMonad___redArg___lam__3(lean_object* v_00_u03b1_535_, lean_object* v_00_u03b2_536_, lean_object* v_f_537_, lean_object* v_x_538_){
_start:
{
lean_object* v___f_539_; lean_object* v___x_540_; uint8_t v___x_541_; lean_object* v___x_542_; 
v___f_539_ = lean_alloc_closure((void*)(l_Std_Async_ETask_instMonad___redArg___lam__2), 2, 1);
lean_closure_set(v___f_539_, 0, v_x_538_);
v___x_540_ = lean_unsigned_to_nat(0u);
v___x_541_ = 0;
v___x_542_ = lean_task_bind(v_f_537_, v___f_539_, v___x_540_, v___x_541_);
return v___x_542_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ETask_instMonad___redArg___lam__5(lean_object* v_00_u03b1_543_, lean_object* v_00_u03b2_544_, lean_object* v_x_545_, lean_object* v_f_546_){
_start:
{
lean_object* v___f_547_; lean_object* v___x_548_; uint8_t v___x_549_; lean_object* v___x_550_; 
v___f_547_ = lean_alloc_closure((void*)(l_Std_Async_ETask_bind___redArg___lam__0), 2, 1);
lean_closure_set(v___f_547_, 0, v_f_546_);
v___x_548_ = lean_unsigned_to_nat(0u);
v___x_549_ = 0;
v___x_550_ = lean_task_bind(v_x_545_, v___f_547_, v___x_548_, v___x_549_);
return v___x_550_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ETask_instMonad___redArg___lam__4(lean_object* v___f_551_, lean_object* v_a_552_, lean_object* v_x_553_){
_start:
{
lean_object* v___x_554_; 
v___x_554_ = lean_apply_2(v___f_551_, lean_box(0), v_a_552_);
return v___x_554_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ETask_instMonad___redArg___lam__4___boxed(lean_object* v___f_555_, lean_object* v_a_556_, lean_object* v_x_557_){
_start:
{
lean_object* v_res_558_; 
v_res_558_ = l_Std_Async_ETask_instMonad___redArg___lam__4(v___f_555_, v_a_556_, v_x_557_);
lean_dec(v_x_557_);
return v_res_558_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ETask_instMonad___redArg___lam__6(lean_object* v___f_559_, lean_object* v_y_560_, lean_object* v___f_561_, lean_object* v_a_562_){
_start:
{
lean_object* v___f_563_; lean_object* v___x_564_; lean_object* v___x_565_; lean_object* v___x_566_; 
v___f_563_ = lean_alloc_closure((void*)(l_Std_Async_ETask_instMonad___redArg___lam__4___boxed), 3, 2);
lean_closure_set(v___f_563_, 0, v___f_559_);
lean_closure_set(v___f_563_, 1, v_a_562_);
v___x_564_ = lean_box(0);
v___x_565_ = lean_apply_1(v_y_560_, v___x_564_);
v___x_566_ = lean_apply_4(v___f_561_, lean_box(0), lean_box(0), v___x_565_, v___f_563_);
return v___x_566_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ETask_instMonad___redArg___lam__7(lean_object* v___f_567_, lean_object* v___f_568_, lean_object* v_00_u03b1_569_, lean_object* v_00_u03b2_570_, lean_object* v_x_571_, lean_object* v_y_572_){
_start:
{
lean_object* v___f_573_; lean_object* v___x_574_; 
lean_inc_ref(v___f_568_);
v___f_573_ = lean_alloc_closure((void*)(l_Std_Async_ETask_instMonad___redArg___lam__6), 4, 3);
lean_closure_set(v___f_573_, 0, v___f_567_);
lean_closure_set(v___f_573_, 1, v_y_572_);
lean_closure_set(v___f_573_, 2, v___f_568_);
v___x_574_ = lean_apply_4(v___f_568_, lean_box(0), lean_box(0), v_x_571_, v___f_573_);
return v___x_574_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ETask_instMonad___redArg___lam__8(lean_object* v_y_575_, lean_object* v_x_576_){
_start:
{
if (lean_obj_tag(v_x_576_) == 0)
{
lean_object* v_a_577_; lean_object* v___x_579_; uint8_t v_isShared_580_; uint8_t v_isSharedCheck_585_; 
lean_dec_ref(v_y_575_);
v_a_577_ = lean_ctor_get(v_x_576_, 0);
v_isSharedCheck_585_ = !lean_is_exclusive(v_x_576_);
if (v_isSharedCheck_585_ == 0)
{
v___x_579_ = v_x_576_;
v_isShared_580_ = v_isSharedCheck_585_;
goto v_resetjp_578_;
}
else
{
lean_inc(v_a_577_);
lean_dec(v_x_576_);
v___x_579_ = lean_box(0);
v_isShared_580_ = v_isSharedCheck_585_;
goto v_resetjp_578_;
}
v_resetjp_578_:
{
lean_object* v___x_582_; 
if (v_isShared_580_ == 0)
{
v___x_582_ = v___x_579_;
goto v_reusejp_581_;
}
else
{
lean_object* v_reuseFailAlloc_584_; 
v_reuseFailAlloc_584_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_584_, 0, v_a_577_);
v___x_582_ = v_reuseFailAlloc_584_;
goto v_reusejp_581_;
}
v_reusejp_581_:
{
lean_object* v___x_583_; 
v___x_583_ = lean_task_pure(v___x_582_);
return v___x_583_;
}
}
}
else
{
lean_object* v___x_586_; lean_object* v___x_587_; 
lean_dec_ref_known(v_x_576_, 1);
v___x_586_ = lean_box(0);
v___x_587_ = lean_apply_1(v_y_575_, v___x_586_);
return v___x_587_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_ETask_instMonad___redArg___lam__9(lean_object* v_00_u03b1_588_, lean_object* v_00_u03b2_589_, lean_object* v_x_590_, lean_object* v_y_591_){
_start:
{
lean_object* v___f_592_; lean_object* v___x_593_; uint8_t v___x_594_; lean_object* v___x_595_; 
v___f_592_ = lean_alloc_closure((void*)(l_Std_Async_ETask_instMonad___redArg___lam__8), 2, 1);
lean_closure_set(v___f_592_, 0, v_y_591_);
v___x_593_ = lean_unsigned_to_nat(0u);
v___x_594_ = 0;
v___x_595_ = lean_task_bind(v_x_590_, v___f_592_, v___x_593_, v___x_594_);
return v___x_595_;
}
}
static lean_object* _init_l_Std_Async_ETask_instMonad___redArg___closed__5(void){
_start:
{
lean_object* v___f_603_; lean_object* v___f_604_; lean_object* v___f_605_; lean_object* v___f_606_; lean_object* v___x_607_; lean_object* v___x_608_; 
v___f_603_ = ((lean_object*)(l_Std_Async_ETask_instMonad___redArg___closed__4));
v___f_604_ = ((lean_object*)(l_Std_Async_ETask_instMonad___redArg___closed__3));
v___f_605_ = ((lean_object*)(l_Std_Async_ETask_instMonad___redArg___closed__1));
v___f_606_ = ((lean_object*)(l_Std_Async_ETask_instMonad___redArg___closed__0));
v___x_607_ = lean_obj_once(&l_Std_Async_ETask_instFunctor___closed__0, &l_Std_Async_ETask_instFunctor___closed__0_once, _init_l_Std_Async_ETask_instFunctor___closed__0);
v___x_608_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_608_, 0, v___x_607_);
lean_ctor_set(v___x_608_, 1, v___f_606_);
lean_ctor_set(v___x_608_, 2, v___f_605_);
lean_ctor_set(v___x_608_, 3, v___f_604_);
lean_ctor_set(v___x_608_, 4, v___f_603_);
return v___x_608_;
}
}
static lean_object* _init_l_Std_Async_ETask_instMonad___redArg___closed__6(void){
_start:
{
lean_object* v___f_609_; lean_object* v___x_610_; lean_object* v___x_611_; 
v___f_609_ = ((lean_object*)(l_Std_Async_ETask_instMonad___redArg___closed__2));
v___x_610_ = lean_obj_once(&l_Std_Async_ETask_instMonad___redArg___closed__5, &l_Std_Async_ETask_instMonad___redArg___closed__5_once, _init_l_Std_Async_ETask_instMonad___redArg___closed__5);
v___x_611_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_611_, 0, v___x_610_);
lean_ctor_set(v___x_611_, 1, v___f_609_);
return v___x_611_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ETask_instMonad___redArg(){
_start:
{
lean_object* v___x_613_; 
v___x_613_ = lean_obj_once(&l_Std_Async_ETask_instMonad___redArg___closed__6, &l_Std_Async_ETask_instMonad___redArg___closed__6_once, _init_l_Std_Async_ETask_instMonad___redArg___closed__6);
return v___x_613_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ETask_instMonad___redArg___boxed(lean_object* v___dummy_614_){
_start:
{
lean_object* v_res_615_; 
v_res_615_ = l_Std_Async_ETask_instMonad___redArg();
return v_res_615_;
}
}
static lean_object* _init_l_Std_Async_ETask_instMonad___closed__0(void){
_start:
{
lean_object* v___x_616_; 
v___x_616_ = l_Std_Async_ETask_instMonad___redArg();
return v___x_616_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_ETask_instMonad(lean_object* v_00_u03b5_617_){
_start:
{
lean_object* v___x_618_; 
v___x_618_ = lean_obj_once(&l_Std_Async_ETask_instMonad___closed__0, &l_Std_Async_ETask_instMonad___closed__0_once, _init_l_Std_Async_ETask_instMonad___closed__0);
return v___x_618_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_AsyncTask_mapIO___redArg___lam__0(lean_object* v_f_619_, lean_object* v_a_620_){
_start:
{
lean_object* v_a_623_; 
if (lean_obj_tag(v_a_620_) == 0)
{
lean_object* v_a_625_; 
lean_dec_ref(v_f_619_);
v_a_625_ = lean_ctor_get(v_a_620_, 0);
lean_inc(v_a_625_);
lean_dec_ref_known(v_a_620_, 1);
v_a_623_ = v_a_625_;
goto v___jp_622_;
}
else
{
lean_object* v_a_626_; lean_object* v___x_628_; uint8_t v_isShared_629_; uint8_t v_isSharedCheck_636_; 
v_a_626_ = lean_ctor_get(v_a_620_, 0);
v_isSharedCheck_636_ = !lean_is_exclusive(v_a_620_);
if (v_isSharedCheck_636_ == 0)
{
v___x_628_ = v_a_620_;
v_isShared_629_ = v_isSharedCheck_636_;
goto v_resetjp_627_;
}
else
{
lean_inc(v_a_626_);
lean_dec(v_a_620_);
v___x_628_ = lean_box(0);
v_isShared_629_ = v_isSharedCheck_636_;
goto v_resetjp_627_;
}
v_resetjp_627_:
{
lean_object* v___x_630_; 
v___x_630_ = lean_apply_2(v_f_619_, v_a_626_, lean_box(0));
if (lean_obj_tag(v___x_630_) == 0)
{
lean_object* v_a_631_; lean_object* v___x_633_; 
v_a_631_ = lean_ctor_get(v___x_630_, 0);
lean_inc(v_a_631_);
lean_dec_ref_known(v___x_630_, 1);
if (v_isShared_629_ == 0)
{
lean_ctor_set(v___x_628_, 0, v_a_631_);
v___x_633_ = v___x_628_;
goto v_reusejp_632_;
}
else
{
lean_object* v_reuseFailAlloc_634_; 
v_reuseFailAlloc_634_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_634_, 0, v_a_631_);
v___x_633_ = v_reuseFailAlloc_634_;
goto v_reusejp_632_;
}
v_reusejp_632_:
{
return v___x_633_;
}
}
else
{
lean_object* v_a_635_; 
lean_del_object(v___x_628_);
v_a_635_ = lean_ctor_get(v___x_630_, 0);
lean_inc(v_a_635_);
lean_dec_ref_known(v___x_630_, 1);
v_a_623_ = v_a_635_;
goto v___jp_622_;
}
}
}
v___jp_622_:
{
lean_object* v___x_624_; 
v___x_624_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_624_, 0, v_a_623_);
return v___x_624_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_AsyncTask_mapIO___redArg___lam__0___boxed(lean_object* v_f_637_, lean_object* v_a_638_, lean_object* v___y_639_){
_start:
{
lean_object* v_res_640_; 
v_res_640_ = l_Std_Async_AsyncTask_mapIO___redArg___lam__0(v_f_637_, v_a_638_);
return v_res_640_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_AsyncTask_mapIO___redArg(lean_object* v_f_641_, lean_object* v_x_642_, lean_object* v_prio_643_, uint8_t v_sync_644_){
_start:
{
lean_object* v___f_646_; lean_object* v___x_647_; 
v___f_646_ = lean_alloc_closure((void*)(l_Std_Async_AsyncTask_mapIO___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_646_, 0, v_f_641_);
v___x_647_ = lean_io_map_task(v___f_646_, v_x_642_, v_prio_643_, v_sync_644_);
return v___x_647_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_AsyncTask_mapIO___redArg___boxed(lean_object* v_f_648_, lean_object* v_x_649_, lean_object* v_prio_650_, lean_object* v_sync_651_, lean_object* v___y_652_){
_start:
{
uint8_t v_sync_boxed_653_; lean_object* v_res_654_; 
v_sync_boxed_653_ = lean_unbox(v_sync_651_);
v_res_654_ = l_Std_Async_AsyncTask_mapIO___redArg(v_f_648_, v_x_649_, v_prio_650_, v_sync_boxed_653_);
return v_res_654_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_AsyncTask_mapIO(lean_object* v_00_u03b1_655_, lean_object* v_00_u03b2_656_, lean_object* v_f_657_, lean_object* v_x_658_, lean_object* v_prio_659_, uint8_t v_sync_660_){
_start:
{
lean_object* v___f_662_; lean_object* v___x_663_; 
v___f_662_ = lean_alloc_closure((void*)(l_Std_Async_AsyncTask_mapIO___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_662_, 0, v_f_657_);
v___x_663_ = lean_io_map_task(v___f_662_, v_x_658_, v_prio_659_, v_sync_660_);
return v___x_663_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_AsyncTask_mapIO___boxed(lean_object* v_00_u03b1_664_, lean_object* v_00_u03b2_665_, lean_object* v_f_666_, lean_object* v_x_667_, lean_object* v_prio_668_, lean_object* v_sync_669_, lean_object* v___y_670_){
_start:
{
uint8_t v_sync_boxed_671_; lean_object* v_res_672_; 
v_sync_boxed_671_ = lean_unbox(v_sync_669_);
v_res_672_ = l_Std_Async_AsyncTask_mapIO(v_00_u03b1_664_, v_00_u03b2_665_, v_f_666_, v_x_667_, v_prio_668_, v_sync_boxed_671_);
return v_res_672_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_AsyncTask_pure___redArg(lean_object* v_x_673_){
_start:
{
lean_object* v___x_674_; lean_object* v___x_675_; 
v___x_674_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_674_, 0, v_x_673_);
v___x_675_ = lean_task_pure(v___x_674_);
return v___x_675_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_AsyncTask_pure(lean_object* v_00_u03b1_676_, lean_object* v_x_677_){
_start:
{
lean_object* v___x_678_; lean_object* v___x_679_; 
v___x_678_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_678_, 0, v_x_677_);
v___x_679_ = lean_task_pure(v___x_678_);
return v___x_679_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_AsyncTask_bind___redArg___lam__0(lean_object* v_f_680_, lean_object* v_x_681_){
_start:
{
if (lean_obj_tag(v_x_681_) == 0)
{
lean_object* v_a_682_; lean_object* v___x_684_; uint8_t v_isShared_685_; uint8_t v_isSharedCheck_690_; 
lean_dec_ref(v_f_680_);
v_a_682_ = lean_ctor_get(v_x_681_, 0);
v_isSharedCheck_690_ = !lean_is_exclusive(v_x_681_);
if (v_isSharedCheck_690_ == 0)
{
v___x_684_ = v_x_681_;
v_isShared_685_ = v_isSharedCheck_690_;
goto v_resetjp_683_;
}
else
{
lean_inc(v_a_682_);
lean_dec(v_x_681_);
v___x_684_ = lean_box(0);
v_isShared_685_ = v_isSharedCheck_690_;
goto v_resetjp_683_;
}
v_resetjp_683_:
{
lean_object* v___x_687_; 
if (v_isShared_685_ == 0)
{
v___x_687_ = v___x_684_;
goto v_reusejp_686_;
}
else
{
lean_object* v_reuseFailAlloc_689_; 
v_reuseFailAlloc_689_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_689_, 0, v_a_682_);
v___x_687_ = v_reuseFailAlloc_689_;
goto v_reusejp_686_;
}
v_reusejp_686_:
{
lean_object* v___x_688_; 
v___x_688_ = lean_task_pure(v___x_687_);
return v___x_688_;
}
}
}
else
{
lean_object* v_a_691_; lean_object* v___x_692_; 
v_a_691_ = lean_ctor_get(v_x_681_, 0);
lean_inc(v_a_691_);
lean_dec_ref_known(v_x_681_, 1);
v___x_692_ = lean_apply_1(v_f_680_, v_a_691_);
return v___x_692_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_AsyncTask_bind___redArg(lean_object* v_x_693_, lean_object* v_f_694_, lean_object* v_prio_695_, uint8_t v_sync_696_){
_start:
{
lean_object* v___f_697_; lean_object* v___x_698_; 
v___f_697_ = lean_alloc_closure((void*)(l_Std_Async_AsyncTask_bind___redArg___lam__0), 2, 1);
lean_closure_set(v___f_697_, 0, v_f_694_);
v___x_698_ = lean_task_bind(v_x_693_, v___f_697_, v_prio_695_, v_sync_696_);
return v___x_698_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_AsyncTask_bind___redArg___boxed(lean_object* v_x_699_, lean_object* v_f_700_, lean_object* v_prio_701_, lean_object* v_sync_702_){
_start:
{
uint8_t v_sync_boxed_703_; lean_object* v_res_704_; 
v_sync_boxed_703_ = lean_unbox(v_sync_702_);
v_res_704_ = l_Std_Async_AsyncTask_bind___redArg(v_x_699_, v_f_700_, v_prio_701_, v_sync_boxed_703_);
return v_res_704_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_AsyncTask_bind(lean_object* v_00_u03b1_705_, lean_object* v_00_u03b2_706_, lean_object* v_x_707_, lean_object* v_f_708_, lean_object* v_prio_709_, uint8_t v_sync_710_){
_start:
{
lean_object* v___f_711_; lean_object* v___x_712_; 
v___f_711_ = lean_alloc_closure((void*)(l_Std_Async_AsyncTask_bind___redArg___lam__0), 2, 1);
lean_closure_set(v___f_711_, 0, v_f_708_);
v___x_712_ = lean_task_bind(v_x_707_, v___f_711_, v_prio_709_, v_sync_710_);
return v___x_712_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_AsyncTask_bind___boxed(lean_object* v_00_u03b1_713_, lean_object* v_00_u03b2_714_, lean_object* v_x_715_, lean_object* v_f_716_, lean_object* v_prio_717_, lean_object* v_sync_718_){
_start:
{
uint8_t v_sync_boxed_719_; lean_object* v_res_720_; 
v_sync_boxed_719_ = lean_unbox(v_sync_718_);
v_res_720_ = l_Std_Async_AsyncTask_bind(v_00_u03b1_713_, v_00_u03b2_714_, v_x_715_, v_f_716_, v_prio_717_, v_sync_boxed_719_);
return v_res_720_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_AsyncTask_map___redArg___lam__0(lean_object* v_f_721_, lean_object* v_x_722_){
_start:
{
if (lean_obj_tag(v_x_722_) == 0)
{
lean_object* v_a_723_; lean_object* v___x_725_; uint8_t v_isShared_726_; uint8_t v_isSharedCheck_730_; 
lean_dec(v_f_721_);
v_a_723_ = lean_ctor_get(v_x_722_, 0);
v_isSharedCheck_730_ = !lean_is_exclusive(v_x_722_);
if (v_isSharedCheck_730_ == 0)
{
v___x_725_ = v_x_722_;
v_isShared_726_ = v_isSharedCheck_730_;
goto v_resetjp_724_;
}
else
{
lean_inc(v_a_723_);
lean_dec(v_x_722_);
v___x_725_ = lean_box(0);
v_isShared_726_ = v_isSharedCheck_730_;
goto v_resetjp_724_;
}
v_resetjp_724_:
{
lean_object* v___x_728_; 
if (v_isShared_726_ == 0)
{
v___x_728_ = v___x_725_;
goto v_reusejp_727_;
}
else
{
lean_object* v_reuseFailAlloc_729_; 
v_reuseFailAlloc_729_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_729_, 0, v_a_723_);
v___x_728_ = v_reuseFailAlloc_729_;
goto v_reusejp_727_;
}
v_reusejp_727_:
{
return v___x_728_;
}
}
}
else
{
lean_object* v_a_731_; lean_object* v___x_733_; uint8_t v_isShared_734_; uint8_t v_isSharedCheck_739_; 
v_a_731_ = lean_ctor_get(v_x_722_, 0);
v_isSharedCheck_739_ = !lean_is_exclusive(v_x_722_);
if (v_isSharedCheck_739_ == 0)
{
v___x_733_ = v_x_722_;
v_isShared_734_ = v_isSharedCheck_739_;
goto v_resetjp_732_;
}
else
{
lean_inc(v_a_731_);
lean_dec(v_x_722_);
v___x_733_ = lean_box(0);
v_isShared_734_ = v_isSharedCheck_739_;
goto v_resetjp_732_;
}
v_resetjp_732_:
{
lean_object* v___x_735_; lean_object* v___x_737_; 
v___x_735_ = lean_apply_1(v_f_721_, v_a_731_);
if (v_isShared_734_ == 0)
{
lean_ctor_set(v___x_733_, 0, v___x_735_);
v___x_737_ = v___x_733_;
goto v_reusejp_736_;
}
else
{
lean_object* v_reuseFailAlloc_738_; 
v_reuseFailAlloc_738_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_738_, 0, v___x_735_);
v___x_737_ = v_reuseFailAlloc_738_;
goto v_reusejp_736_;
}
v_reusejp_736_:
{
return v___x_737_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_AsyncTask_map___redArg(lean_object* v_f_740_, lean_object* v_x_741_, lean_object* v_prio_742_, uint8_t v_sync_743_){
_start:
{
lean_object* v___f_744_; lean_object* v___x_745_; 
v___f_744_ = lean_alloc_closure((void*)(l_Std_Async_AsyncTask_map___redArg___lam__0), 2, 1);
lean_closure_set(v___f_744_, 0, v_f_740_);
v___x_745_ = lean_task_map(v___f_744_, v_x_741_, v_prio_742_, v_sync_743_);
return v___x_745_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_AsyncTask_map___redArg___boxed(lean_object* v_f_746_, lean_object* v_x_747_, lean_object* v_prio_748_, lean_object* v_sync_749_){
_start:
{
uint8_t v_sync_boxed_750_; lean_object* v_res_751_; 
v_sync_boxed_750_ = lean_unbox(v_sync_749_);
v_res_751_ = l_Std_Async_AsyncTask_map___redArg(v_f_746_, v_x_747_, v_prio_748_, v_sync_boxed_750_);
return v_res_751_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_AsyncTask_map(lean_object* v_00_u03b1_752_, lean_object* v_00_u03b2_753_, lean_object* v_f_754_, lean_object* v_x_755_, lean_object* v_prio_756_, uint8_t v_sync_757_){
_start:
{
lean_object* v___f_758_; lean_object* v___x_759_; 
v___f_758_ = lean_alloc_closure((void*)(l_Std_Async_AsyncTask_map___redArg___lam__0), 2, 1);
lean_closure_set(v___f_758_, 0, v_f_754_);
v___x_759_ = lean_task_map(v___f_758_, v_x_755_, v_prio_756_, v_sync_757_);
return v___x_759_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_AsyncTask_map___boxed(lean_object* v_00_u03b1_760_, lean_object* v_00_u03b2_761_, lean_object* v_f_762_, lean_object* v_x_763_, lean_object* v_prio_764_, lean_object* v_sync_765_){
_start:
{
uint8_t v_sync_boxed_766_; lean_object* v_res_767_; 
v_sync_boxed_766_ = lean_unbox(v_sync_765_);
v_res_767_ = l_Std_Async_AsyncTask_map(v_00_u03b1_760_, v_00_u03b2_761_, v_f_762_, v_x_763_, v_prio_764_, v_sync_boxed_766_);
return v_res_767_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_AsyncTask_bindIO___redArg___lam__0(lean_object* v_f_768_, lean_object* v_a_769_){
_start:
{
lean_object* v_a_772_; 
if (lean_obj_tag(v_a_769_) == 0)
{
lean_object* v_a_775_; 
lean_dec_ref(v_f_768_);
v_a_775_ = lean_ctor_get(v_a_769_, 0);
lean_inc(v_a_775_);
lean_dec_ref_known(v_a_769_, 1);
v_a_772_ = v_a_775_;
goto v___jp_771_;
}
else
{
lean_object* v_a_776_; lean_object* v___x_777_; 
v_a_776_ = lean_ctor_get(v_a_769_, 0);
lean_inc(v_a_776_);
lean_dec_ref_known(v_a_769_, 1);
v___x_777_ = lean_apply_2(v_f_768_, v_a_776_, lean_box(0));
if (lean_obj_tag(v___x_777_) == 0)
{
lean_object* v_a_778_; 
v_a_778_ = lean_ctor_get(v___x_777_, 0);
lean_inc(v_a_778_);
lean_dec_ref_known(v___x_777_, 1);
return v_a_778_;
}
else
{
lean_object* v_a_779_; 
v_a_779_ = lean_ctor_get(v___x_777_, 0);
lean_inc(v_a_779_);
lean_dec_ref_known(v___x_777_, 1);
v_a_772_ = v_a_779_;
goto v___jp_771_;
}
}
v___jp_771_:
{
lean_object* v___x_773_; lean_object* v___x_774_; 
v___x_773_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_773_, 0, v_a_772_);
v___x_774_ = lean_task_pure(v___x_773_);
return v___x_774_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_AsyncTask_bindIO___redArg___lam__0___boxed(lean_object* v_f_780_, lean_object* v_a_781_, lean_object* v___y_782_){
_start:
{
lean_object* v_res_783_; 
v_res_783_ = l_Std_Async_AsyncTask_bindIO___redArg___lam__0(v_f_780_, v_a_781_);
return v_res_783_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_AsyncTask_bindIO___redArg(lean_object* v_x_784_, lean_object* v_f_785_, lean_object* v_prio_786_, uint8_t v_sync_787_){
_start:
{
lean_object* v___f_789_; lean_object* v___x_790_; 
v___f_789_ = lean_alloc_closure((void*)(l_Std_Async_AsyncTask_bindIO___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_789_, 0, v_f_785_);
v___x_790_ = lean_io_bind_task(v_x_784_, v___f_789_, v_prio_786_, v_sync_787_);
return v___x_790_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_AsyncTask_bindIO___redArg___boxed(lean_object* v_x_791_, lean_object* v_f_792_, lean_object* v_prio_793_, lean_object* v_sync_794_, lean_object* v___y_795_){
_start:
{
uint8_t v_sync_boxed_796_; lean_object* v_res_797_; 
v_sync_boxed_796_ = lean_unbox(v_sync_794_);
v_res_797_ = l_Std_Async_AsyncTask_bindIO___redArg(v_x_791_, v_f_792_, v_prio_793_, v_sync_boxed_796_);
return v_res_797_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_AsyncTask_bindIO(lean_object* v_00_u03b1_798_, lean_object* v_00_u03b2_799_, lean_object* v_x_800_, lean_object* v_f_801_, lean_object* v_prio_802_, uint8_t v_sync_803_){
_start:
{
lean_object* v___f_805_; lean_object* v___x_806_; 
v___f_805_ = lean_alloc_closure((void*)(l_Std_Async_AsyncTask_bindIO___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_805_, 0, v_f_801_);
v___x_806_ = lean_io_bind_task(v_x_800_, v___f_805_, v_prio_802_, v_sync_803_);
return v___x_806_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_AsyncTask_bindIO___boxed(lean_object* v_00_u03b1_807_, lean_object* v_00_u03b2_808_, lean_object* v_x_809_, lean_object* v_f_810_, lean_object* v_prio_811_, lean_object* v_sync_812_, lean_object* v___y_813_){
_start:
{
uint8_t v_sync_boxed_814_; lean_object* v_res_815_; 
v_sync_boxed_814_ = lean_unbox(v_sync_812_);
v_res_815_ = l_Std_Async_AsyncTask_bindIO(v_00_u03b1_807_, v_00_u03b2_808_, v_x_809_, v_f_810_, v_prio_811_, v_sync_boxed_814_);
return v_res_815_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_AsyncTask_mapTaskIO___redArg(lean_object* v_f_816_, lean_object* v_x_817_, lean_object* v_prio_818_, uint8_t v_sync_819_){
_start:
{
lean_object* v___f_821_; lean_object* v___x_822_; 
v___f_821_ = lean_alloc_closure((void*)(l_Std_Async_AsyncTask_mapIO___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_821_, 0, v_f_816_);
v___x_822_ = lean_io_map_task(v___f_821_, v_x_817_, v_prio_818_, v_sync_819_);
return v___x_822_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_AsyncTask_mapTaskIO___redArg___boxed(lean_object* v_f_823_, lean_object* v_x_824_, lean_object* v_prio_825_, lean_object* v_sync_826_, lean_object* v___y_827_){
_start:
{
uint8_t v_sync_boxed_828_; lean_object* v_res_829_; 
v_sync_boxed_828_ = lean_unbox(v_sync_826_);
v_res_829_ = l_Std_Async_AsyncTask_mapTaskIO___redArg(v_f_823_, v_x_824_, v_prio_825_, v_sync_boxed_828_);
return v_res_829_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_AsyncTask_mapTaskIO(lean_object* v_00_u03b1_830_, lean_object* v_00_u03b2_831_, lean_object* v_f_832_, lean_object* v_x_833_, lean_object* v_prio_834_, uint8_t v_sync_835_){
_start:
{
lean_object* v___f_837_; lean_object* v___x_838_; 
v___f_837_ = lean_alloc_closure((void*)(l_Std_Async_AsyncTask_mapIO___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_837_, 0, v_f_832_);
v___x_838_ = lean_io_map_task(v___f_837_, v_x_833_, v_prio_834_, v_sync_835_);
return v___x_838_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_AsyncTask_mapTaskIO___boxed(lean_object* v_00_u03b1_839_, lean_object* v_00_u03b2_840_, lean_object* v_f_841_, lean_object* v_x_842_, lean_object* v_prio_843_, lean_object* v_sync_844_, lean_object* v___y_845_){
_start:
{
uint8_t v_sync_boxed_846_; lean_object* v_res_847_; 
v_sync_boxed_846_ = lean_unbox(v_sync_844_);
v_res_847_ = l_Std_Async_AsyncTask_mapTaskIO(v_00_u03b1_839_, v_00_u03b2_840_, v_f_841_, v_x_842_, v_prio_843_, v_sync_boxed_846_);
return v_res_847_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_AsyncTask_block___redArg(lean_object* v_x_848_){
_start:
{
lean_object* v___x_850_; 
v___x_850_ = lean_task_get_own(v_x_848_);
if (lean_obj_tag(v___x_850_) == 0)
{
lean_object* v_a_851_; lean_object* v___x_853_; uint8_t v_isShared_854_; uint8_t v_isSharedCheck_858_; 
v_a_851_ = lean_ctor_get(v___x_850_, 0);
v_isSharedCheck_858_ = !lean_is_exclusive(v___x_850_);
if (v_isSharedCheck_858_ == 0)
{
v___x_853_ = v___x_850_;
v_isShared_854_ = v_isSharedCheck_858_;
goto v_resetjp_852_;
}
else
{
lean_inc(v_a_851_);
lean_dec(v___x_850_);
v___x_853_ = lean_box(0);
v_isShared_854_ = v_isSharedCheck_858_;
goto v_resetjp_852_;
}
v_resetjp_852_:
{
lean_object* v___x_856_; 
if (v_isShared_854_ == 0)
{
lean_ctor_set_tag(v___x_853_, 1);
v___x_856_ = v___x_853_;
goto v_reusejp_855_;
}
else
{
lean_object* v_reuseFailAlloc_857_; 
v_reuseFailAlloc_857_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_857_, 0, v_a_851_);
v___x_856_ = v_reuseFailAlloc_857_;
goto v_reusejp_855_;
}
v_reusejp_855_:
{
return v___x_856_;
}
}
}
else
{
lean_object* v_a_859_; lean_object* v___x_861_; uint8_t v_isShared_862_; uint8_t v_isSharedCheck_866_; 
v_a_859_ = lean_ctor_get(v___x_850_, 0);
v_isSharedCheck_866_ = !lean_is_exclusive(v___x_850_);
if (v_isSharedCheck_866_ == 0)
{
v___x_861_ = v___x_850_;
v_isShared_862_ = v_isSharedCheck_866_;
goto v_resetjp_860_;
}
else
{
lean_inc(v_a_859_);
lean_dec(v___x_850_);
v___x_861_ = lean_box(0);
v_isShared_862_ = v_isSharedCheck_866_;
goto v_resetjp_860_;
}
v_resetjp_860_:
{
lean_object* v___x_864_; 
if (v_isShared_862_ == 0)
{
lean_ctor_set_tag(v___x_861_, 0);
v___x_864_ = v___x_861_;
goto v_reusejp_863_;
}
else
{
lean_object* v_reuseFailAlloc_865_; 
v_reuseFailAlloc_865_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_865_, 0, v_a_859_);
v___x_864_ = v_reuseFailAlloc_865_;
goto v_reusejp_863_;
}
v_reusejp_863_:
{
return v___x_864_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_AsyncTask_block___redArg___boxed(lean_object* v_x_867_, lean_object* v___y_868_){
_start:
{
lean_object* v_res_869_; 
v_res_869_ = l_Std_Async_AsyncTask_block___redArg(v_x_867_);
return v_res_869_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_AsyncTask_block(lean_object* v_00_u03b1_870_, lean_object* v_x_871_){
_start:
{
lean_object* v___x_873_; 
v___x_873_ = l_Std_Async_AsyncTask_block___redArg(v_x_871_);
return v___x_873_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_AsyncTask_block___boxed(lean_object* v_00_u03b1_874_, lean_object* v_x_875_, lean_object* v___y_876_){
_start:
{
lean_object* v_res_877_; 
v_res_877_ = l_Std_Async_AsyncTask_block(v_00_u03b1_874_, v_x_875_);
return v_res_877_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_AsyncTask_ofPromise___redArg___lam__0(lean_object* v_error_878_, lean_object* v_x_879_){
_start:
{
if (lean_obj_tag(v_x_879_) == 0)
{
lean_object* v___x_880_; lean_object* v___x_881_; 
v___x_880_ = lean_mk_io_user_error(v_error_878_);
v___x_881_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_881_, 0, v___x_880_);
return v___x_881_;
}
else
{
lean_object* v_val_882_; 
lean_dec_ref(v_error_878_);
v_val_882_ = lean_ctor_get(v_x_879_, 0);
lean_inc(v_val_882_);
return v_val_882_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_AsyncTask_ofPromise___redArg___lam__0___boxed(lean_object* v_error_883_, lean_object* v_x_884_){
_start:
{
lean_object* v_res_885_; 
v_res_885_ = l_Std_Async_AsyncTask_ofPromise___redArg___lam__0(v_error_883_, v_x_884_);
lean_dec(v_x_884_);
return v_res_885_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_AsyncTask_ofPromise___redArg(lean_object* v_x_886_, lean_object* v_error_887_){
_start:
{
lean_object* v___f_888_; lean_object* v___x_889_; lean_object* v___x_890_; uint8_t v___x_891_; lean_object* v___x_892_; 
v___f_888_ = lean_alloc_closure((void*)(l_Std_Async_AsyncTask_ofPromise___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_888_, 0, v_error_887_);
v___x_889_ = lean_io_promise_result_opt(v_x_886_);
v___x_890_ = lean_unsigned_to_nat(0u);
v___x_891_ = 0;
v___x_892_ = lean_task_map(v___f_888_, v___x_889_, v___x_890_, v___x_891_);
return v___x_892_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_AsyncTask_ofPromise___redArg___boxed(lean_object* v_x_893_, lean_object* v_error_894_){
_start:
{
lean_object* v_res_895_; 
v_res_895_ = l_Std_Async_AsyncTask_ofPromise___redArg(v_x_893_, v_error_894_);
lean_dec(v_x_893_);
return v_res_895_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_AsyncTask_ofPromise(lean_object* v_00_u03b1_896_, lean_object* v_x_897_, lean_object* v_error_898_){
_start:
{
lean_object* v___f_899_; lean_object* v___x_900_; lean_object* v___x_901_; uint8_t v___x_902_; lean_object* v___x_903_; 
v___f_899_ = lean_alloc_closure((void*)(l_Std_Async_AsyncTask_ofPromise___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_899_, 0, v_error_898_);
v___x_900_ = lean_io_promise_result_opt(v_x_897_);
v___x_901_ = lean_unsigned_to_nat(0u);
v___x_902_ = 0;
v___x_903_ = lean_task_map(v___f_899_, v___x_900_, v___x_901_, v___x_902_);
return v___x_903_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_AsyncTask_ofPromise___boxed(lean_object* v_00_u03b1_904_, lean_object* v_x_905_, lean_object* v_error_906_){
_start:
{
lean_object* v_res_907_; 
v_res_907_ = l_Std_Async_AsyncTask_ofPromise(v_00_u03b1_904_, v_x_905_, v_error_906_);
lean_dec(v_x_905_);
return v_res_907_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_AsyncTask_ofPurePromise___redArg___lam__0(lean_object* v_error_908_, lean_object* v_x_909_){
_start:
{
if (lean_obj_tag(v_x_909_) == 0)
{
lean_object* v___x_910_; lean_object* v___x_911_; 
v___x_910_ = lean_mk_io_user_error(v_error_908_);
v___x_911_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_911_, 0, v___x_910_);
return v___x_911_;
}
else
{
lean_object* v_val_912_; lean_object* v___x_914_; uint8_t v_isShared_915_; uint8_t v_isSharedCheck_919_; 
lean_dec_ref(v_error_908_);
v_val_912_ = lean_ctor_get(v_x_909_, 0);
v_isSharedCheck_919_ = !lean_is_exclusive(v_x_909_);
if (v_isSharedCheck_919_ == 0)
{
v___x_914_ = v_x_909_;
v_isShared_915_ = v_isSharedCheck_919_;
goto v_resetjp_913_;
}
else
{
lean_inc(v_val_912_);
lean_dec(v_x_909_);
v___x_914_ = lean_box(0);
v_isShared_915_ = v_isSharedCheck_919_;
goto v_resetjp_913_;
}
v_resetjp_913_:
{
lean_object* v___x_917_; 
if (v_isShared_915_ == 0)
{
v___x_917_ = v___x_914_;
goto v_reusejp_916_;
}
else
{
lean_object* v_reuseFailAlloc_918_; 
v_reuseFailAlloc_918_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_918_, 0, v_val_912_);
v___x_917_ = v_reuseFailAlloc_918_;
goto v_reusejp_916_;
}
v_reusejp_916_:
{
return v___x_917_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_AsyncTask_ofPurePromise___redArg(lean_object* v_x_920_, lean_object* v_error_921_){
_start:
{
lean_object* v___f_922_; lean_object* v___x_923_; lean_object* v___x_924_; uint8_t v___x_925_; lean_object* v___x_926_; 
v___f_922_ = lean_alloc_closure((void*)(l_Std_Async_AsyncTask_ofPurePromise___redArg___lam__0), 2, 1);
lean_closure_set(v___f_922_, 0, v_error_921_);
v___x_923_ = lean_io_promise_result_opt(v_x_920_);
v___x_924_ = lean_unsigned_to_nat(0u);
v___x_925_ = 1;
v___x_926_ = lean_task_map(v___f_922_, v___x_923_, v___x_924_, v___x_925_);
return v___x_926_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_AsyncTask_ofPurePromise___redArg___boxed(lean_object* v_x_927_, lean_object* v_error_928_){
_start:
{
lean_object* v_res_929_; 
v_res_929_ = l_Std_Async_AsyncTask_ofPurePromise___redArg(v_x_927_, v_error_928_);
lean_dec(v_x_927_);
return v_res_929_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_AsyncTask_ofPurePromise(lean_object* v_00_u03b1_930_, lean_object* v_x_931_, lean_object* v_error_932_){
_start:
{
lean_object* v___f_933_; lean_object* v___x_934_; lean_object* v___x_935_; uint8_t v___x_936_; lean_object* v___x_937_; 
v___f_933_ = lean_alloc_closure((void*)(l_Std_Async_AsyncTask_ofPurePromise___redArg___lam__0), 2, 1);
lean_closure_set(v___f_933_, 0, v_error_932_);
v___x_934_ = lean_io_promise_result_opt(v_x_931_);
v___x_935_ = lean_unsigned_to_nat(0u);
v___x_936_ = 1;
v___x_937_ = lean_task_map(v___f_933_, v___x_934_, v___x_935_, v___x_936_);
return v___x_937_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_AsyncTask_ofPurePromise___boxed(lean_object* v_00_u03b1_938_, lean_object* v_x_939_, lean_object* v_error_940_){
_start:
{
lean_object* v_res_941_; 
v_res_941_ = l_Std_Async_AsyncTask_ofPurePromise(v_00_u03b1_938_, v_x_939_, v_error_940_);
lean_dec(v_x_939_);
return v_res_941_;
}
}
LEAN_EXPORT uint8_t l_Std_Async_AsyncTask_getState___redArg(lean_object* v_x_942_){
_start:
{
uint8_t v___x_944_; 
v___x_944_ = lean_io_get_task_state(v_x_942_);
return v___x_944_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_AsyncTask_getState___redArg___boxed(lean_object* v_x_945_, lean_object* v___y_946_){
_start:
{
uint8_t v_res_947_; lean_object* v_r_948_; 
v_res_947_ = l_Std_Async_AsyncTask_getState___redArg(v_x_945_);
lean_dec_ref(v_x_945_);
v_r_948_ = lean_box(v_res_947_);
return v_r_948_;
}
}
LEAN_EXPORT uint8_t l_Std_Async_AsyncTask_getState(lean_object* v_00_u03b1_949_, lean_object* v_x_950_){
_start:
{
uint8_t v___x_952_; 
v___x_952_ = lean_io_get_task_state(v_x_950_);
return v___x_952_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_AsyncTask_getState___boxed(lean_object* v_00_u03b1_953_, lean_object* v_x_954_, lean_object* v___y_955_){
_start:
{
uint8_t v_res_956_; lean_object* v_r_957_; 
v_res_956_ = l_Std_Async_AsyncTask_getState(v_00_u03b1_953_, v_x_954_);
lean_dec_ref(v_x_954_);
v_r_957_ = lean_box(v_res_956_);
return v_r_957_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_MaybeTask_ctorIdx___redArg(lean_object* v_x_958_){
_start:
{
if (lean_obj_tag(v_x_958_) == 0)
{
lean_object* v___x_959_; 
v___x_959_ = lean_unsigned_to_nat(0u);
return v___x_959_;
}
else
{
lean_object* v___x_960_; 
v___x_960_ = lean_unsigned_to_nat(1u);
return v___x_960_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_MaybeTask_ctorIdx___redArg___boxed(lean_object* v_x_961_){
_start:
{
lean_object* v_res_962_; 
v_res_962_ = l_Std_Async_MaybeTask_ctorIdx___redArg(v_x_961_);
lean_dec_ref(v_x_961_);
return v_res_962_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_MaybeTask_ctorIdx(lean_object* v_00_u03b1_963_, lean_object* v_x_964_){
_start:
{
lean_object* v___x_965_; 
v___x_965_ = l_Std_Async_MaybeTask_ctorIdx___redArg(v_x_964_);
return v___x_965_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_MaybeTask_ctorIdx___boxed(lean_object* v_00_u03b1_966_, lean_object* v_x_967_){
_start:
{
lean_object* v_res_968_; 
v_res_968_ = l_Std_Async_MaybeTask_ctorIdx(v_00_u03b1_966_, v_x_967_);
lean_dec_ref(v_x_967_);
return v_res_968_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_MaybeTask_ctorElim___redArg(lean_object* v_t_969_, lean_object* v_k_970_){
_start:
{
if (lean_obj_tag(v_t_969_) == 0)
{
lean_object* v_a_971_; lean_object* v___x_972_; 
v_a_971_ = lean_ctor_get(v_t_969_, 0);
lean_inc(v_a_971_);
lean_dec_ref_known(v_t_969_, 1);
v___x_972_ = lean_apply_1(v_k_970_, v_a_971_);
return v___x_972_;
}
else
{
lean_object* v_a_973_; lean_object* v___x_974_; 
v_a_973_ = lean_ctor_get(v_t_969_, 0);
lean_inc_ref(v_a_973_);
lean_dec_ref_known(v_t_969_, 1);
v___x_974_ = lean_apply_1(v_k_970_, v_a_973_);
return v___x_974_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_MaybeTask_ctorElim(lean_object* v_00_u03b1_975_, lean_object* v_motive_976_, lean_object* v_ctorIdx_977_, lean_object* v_t_978_, lean_object* v_h_979_, lean_object* v_k_980_){
_start:
{
lean_object* v___x_981_; 
v___x_981_ = l_Std_Async_MaybeTask_ctorElim___redArg(v_t_978_, v_k_980_);
return v___x_981_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_MaybeTask_ctorElim___boxed(lean_object* v_00_u03b1_982_, lean_object* v_motive_983_, lean_object* v_ctorIdx_984_, lean_object* v_t_985_, lean_object* v_h_986_, lean_object* v_k_987_){
_start:
{
lean_object* v_res_988_; 
v_res_988_ = l_Std_Async_MaybeTask_ctorElim(v_00_u03b1_982_, v_motive_983_, v_ctorIdx_984_, v_t_985_, v_h_986_, v_k_987_);
lean_dec(v_ctorIdx_984_);
return v_res_988_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_MaybeTask_pure_elim___redArg(lean_object* v_t_989_, lean_object* v_pure_990_){
_start:
{
lean_object* v___x_991_; 
v___x_991_ = l_Std_Async_MaybeTask_ctorElim___redArg(v_t_989_, v_pure_990_);
return v___x_991_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_MaybeTask_pure_elim(lean_object* v_00_u03b1_992_, lean_object* v_motive_993_, lean_object* v_t_994_, lean_object* v_h_995_, lean_object* v_pure_996_){
_start:
{
lean_object* v___x_997_; 
v___x_997_ = l_Std_Async_MaybeTask_ctorElim___redArg(v_t_994_, v_pure_996_);
return v___x_997_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_MaybeTask_ofTask_elim___redArg(lean_object* v_t_998_, lean_object* v_ofTask_999_){
_start:
{
lean_object* v___x_1000_; 
v___x_1000_ = l_Std_Async_MaybeTask_ctorElim___redArg(v_t_998_, v_ofTask_999_);
return v___x_1000_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_MaybeTask_ofTask_elim(lean_object* v_00_u03b1_1001_, lean_object* v_motive_1002_, lean_object* v_t_1003_, lean_object* v_h_1004_, lean_object* v_ofTask_1005_){
_start:
{
lean_object* v___x_1006_; 
v___x_1006_ = l_Std_Async_MaybeTask_ctorElim___redArg(v_t_1003_, v_ofTask_1005_);
return v___x_1006_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_MaybeTask_toTask___redArg(lean_object* v_x_1007_){
_start:
{
if (lean_obj_tag(v_x_1007_) == 0)
{
lean_object* v_a_1008_; lean_object* v___x_1009_; 
v_a_1008_ = lean_ctor_get(v_x_1007_, 0);
lean_inc(v_a_1008_);
lean_dec_ref_known(v_x_1007_, 1);
v___x_1009_ = lean_task_pure(v_a_1008_);
return v___x_1009_;
}
else
{
lean_object* v_a_1010_; 
v_a_1010_ = lean_ctor_get(v_x_1007_, 0);
lean_inc_ref(v_a_1010_);
lean_dec_ref_known(v_x_1007_, 1);
return v_a_1010_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_MaybeTask_toTask(lean_object* v_00_u03b1_1011_, lean_object* v_x_1012_){
_start:
{
if (lean_obj_tag(v_x_1012_) == 0)
{
lean_object* v_a_1013_; lean_object* v___x_1014_; 
v_a_1013_ = lean_ctor_get(v_x_1012_, 0);
lean_inc(v_a_1013_);
lean_dec_ref_known(v_x_1012_, 1);
v___x_1014_ = lean_task_pure(v_a_1013_);
return v___x_1014_;
}
else
{
lean_object* v_a_1015_; 
v_a_1015_ = lean_ctor_get(v_x_1012_, 0);
lean_inc_ref(v_a_1015_);
lean_dec_ref_known(v_x_1012_, 1);
return v_a_1015_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_MaybeTask_get___redArg(lean_object* v_x_1016_){
_start:
{
if (lean_obj_tag(v_x_1016_) == 0)
{
lean_object* v_a_1017_; 
v_a_1017_ = lean_ctor_get(v_x_1016_, 0);
lean_inc(v_a_1017_);
lean_dec_ref_known(v_x_1016_, 1);
return v_a_1017_;
}
else
{
lean_object* v_a_1018_; lean_object* v___x_1019_; 
v_a_1018_ = lean_ctor_get(v_x_1016_, 0);
lean_inc_ref(v_a_1018_);
lean_dec_ref_known(v_x_1016_, 1);
v___x_1019_ = lean_task_get_own(v_a_1018_);
return v___x_1019_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_MaybeTask_get(lean_object* v_00_u03b1_1020_, lean_object* v_x_1021_){
_start:
{
if (lean_obj_tag(v_x_1021_) == 0)
{
lean_object* v_a_1022_; 
v_a_1022_ = lean_ctor_get(v_x_1021_, 0);
lean_inc(v_a_1022_);
lean_dec_ref_known(v_x_1021_, 1);
return v_a_1022_;
}
else
{
lean_object* v_a_1023_; lean_object* v___x_1024_; 
v_a_1023_ = lean_ctor_get(v_x_1021_, 0);
lean_inc_ref(v_a_1023_);
lean_dec_ref_known(v_x_1021_, 1);
v___x_1024_ = lean_task_get_own(v_a_1023_);
return v___x_1024_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_MaybeTask_map___redArg(lean_object* v_f_1025_, lean_object* v_prio_1026_, uint8_t v_sync_1027_, lean_object* v_x_1028_){
_start:
{
if (lean_obj_tag(v_x_1028_) == 0)
{
lean_object* v_a_1029_; lean_object* v___x_1031_; uint8_t v_isShared_1032_; uint8_t v_isSharedCheck_1037_; 
lean_dec(v_prio_1026_);
v_a_1029_ = lean_ctor_get(v_x_1028_, 0);
v_isSharedCheck_1037_ = !lean_is_exclusive(v_x_1028_);
if (v_isSharedCheck_1037_ == 0)
{
v___x_1031_ = v_x_1028_;
v_isShared_1032_ = v_isSharedCheck_1037_;
goto v_resetjp_1030_;
}
else
{
lean_inc(v_a_1029_);
lean_dec(v_x_1028_);
v___x_1031_ = lean_box(0);
v_isShared_1032_ = v_isSharedCheck_1037_;
goto v_resetjp_1030_;
}
v_resetjp_1030_:
{
lean_object* v___x_1033_; lean_object* v___x_1035_; 
v___x_1033_ = lean_apply_1(v_f_1025_, v_a_1029_);
if (v_isShared_1032_ == 0)
{
lean_ctor_set(v___x_1031_, 0, v___x_1033_);
v___x_1035_ = v___x_1031_;
goto v_reusejp_1034_;
}
else
{
lean_object* v_reuseFailAlloc_1036_; 
v_reuseFailAlloc_1036_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1036_, 0, v___x_1033_);
v___x_1035_ = v_reuseFailAlloc_1036_;
goto v_reusejp_1034_;
}
v_reusejp_1034_:
{
return v___x_1035_;
}
}
}
else
{
lean_object* v_a_1038_; lean_object* v___x_1040_; uint8_t v_isShared_1041_; uint8_t v_isSharedCheck_1046_; 
v_a_1038_ = lean_ctor_get(v_x_1028_, 0);
v_isSharedCheck_1046_ = !lean_is_exclusive(v_x_1028_);
if (v_isSharedCheck_1046_ == 0)
{
v___x_1040_ = v_x_1028_;
v_isShared_1041_ = v_isSharedCheck_1046_;
goto v_resetjp_1039_;
}
else
{
lean_inc(v_a_1038_);
lean_dec(v_x_1028_);
v___x_1040_ = lean_box(0);
v_isShared_1041_ = v_isSharedCheck_1046_;
goto v_resetjp_1039_;
}
v_resetjp_1039_:
{
lean_object* v___x_1042_; lean_object* v___x_1044_; 
v___x_1042_ = lean_task_map(v_f_1025_, v_a_1038_, v_prio_1026_, v_sync_1027_);
if (v_isShared_1041_ == 0)
{
lean_ctor_set(v___x_1040_, 0, v___x_1042_);
v___x_1044_ = v___x_1040_;
goto v_reusejp_1043_;
}
else
{
lean_object* v_reuseFailAlloc_1045_; 
v_reuseFailAlloc_1045_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1045_, 0, v___x_1042_);
v___x_1044_ = v_reuseFailAlloc_1045_;
goto v_reusejp_1043_;
}
v_reusejp_1043_:
{
return v___x_1044_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_MaybeTask_map___redArg___boxed(lean_object* v_f_1047_, lean_object* v_prio_1048_, lean_object* v_sync_1049_, lean_object* v_x_1050_){
_start:
{
uint8_t v_sync_boxed_1051_; lean_object* v_res_1052_; 
v_sync_boxed_1051_ = lean_unbox(v_sync_1049_);
v_res_1052_ = l_Std_Async_MaybeTask_map___redArg(v_f_1047_, v_prio_1048_, v_sync_boxed_1051_, v_x_1050_);
return v_res_1052_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_MaybeTask_map(lean_object* v_00_u03b1_1053_, lean_object* v_00_u03b2_1054_, lean_object* v_f_1055_, lean_object* v_prio_1056_, uint8_t v_sync_1057_, lean_object* v_x_1058_){
_start:
{
if (lean_obj_tag(v_x_1058_) == 0)
{
lean_object* v_a_1059_; lean_object* v___x_1061_; uint8_t v_isShared_1062_; uint8_t v_isSharedCheck_1067_; 
lean_dec(v_prio_1056_);
v_a_1059_ = lean_ctor_get(v_x_1058_, 0);
v_isSharedCheck_1067_ = !lean_is_exclusive(v_x_1058_);
if (v_isSharedCheck_1067_ == 0)
{
v___x_1061_ = v_x_1058_;
v_isShared_1062_ = v_isSharedCheck_1067_;
goto v_resetjp_1060_;
}
else
{
lean_inc(v_a_1059_);
lean_dec(v_x_1058_);
v___x_1061_ = lean_box(0);
v_isShared_1062_ = v_isSharedCheck_1067_;
goto v_resetjp_1060_;
}
v_resetjp_1060_:
{
lean_object* v___x_1063_; lean_object* v___x_1065_; 
v___x_1063_ = lean_apply_1(v_f_1055_, v_a_1059_);
if (v_isShared_1062_ == 0)
{
lean_ctor_set(v___x_1061_, 0, v___x_1063_);
v___x_1065_ = v___x_1061_;
goto v_reusejp_1064_;
}
else
{
lean_object* v_reuseFailAlloc_1066_; 
v_reuseFailAlloc_1066_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1066_, 0, v___x_1063_);
v___x_1065_ = v_reuseFailAlloc_1066_;
goto v_reusejp_1064_;
}
v_reusejp_1064_:
{
return v___x_1065_;
}
}
}
else
{
lean_object* v_a_1068_; lean_object* v___x_1070_; uint8_t v_isShared_1071_; uint8_t v_isSharedCheck_1076_; 
v_a_1068_ = lean_ctor_get(v_x_1058_, 0);
v_isSharedCheck_1076_ = !lean_is_exclusive(v_x_1058_);
if (v_isSharedCheck_1076_ == 0)
{
v___x_1070_ = v_x_1058_;
v_isShared_1071_ = v_isSharedCheck_1076_;
goto v_resetjp_1069_;
}
else
{
lean_inc(v_a_1068_);
lean_dec(v_x_1058_);
v___x_1070_ = lean_box(0);
v_isShared_1071_ = v_isSharedCheck_1076_;
goto v_resetjp_1069_;
}
v_resetjp_1069_:
{
lean_object* v___x_1072_; lean_object* v___x_1074_; 
v___x_1072_ = lean_task_map(v_f_1055_, v_a_1068_, v_prio_1056_, v_sync_1057_);
if (v_isShared_1071_ == 0)
{
lean_ctor_set(v___x_1070_, 0, v___x_1072_);
v___x_1074_ = v___x_1070_;
goto v_reusejp_1073_;
}
else
{
lean_object* v_reuseFailAlloc_1075_; 
v_reuseFailAlloc_1075_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1075_, 0, v___x_1072_);
v___x_1074_ = v_reuseFailAlloc_1075_;
goto v_reusejp_1073_;
}
v_reusejp_1073_:
{
return v___x_1074_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_MaybeTask_map___boxed(lean_object* v_00_u03b1_1077_, lean_object* v_00_u03b2_1078_, lean_object* v_f_1079_, lean_object* v_prio_1080_, lean_object* v_sync_1081_, lean_object* v_x_1082_){
_start:
{
uint8_t v_sync_boxed_1083_; lean_object* v_res_1084_; 
v_sync_boxed_1083_ = lean_unbox(v_sync_1081_);
v_res_1084_ = l_Std_Async_MaybeTask_map(v_00_u03b1_1077_, v_00_u03b2_1078_, v_f_1079_, v_prio_1080_, v_sync_boxed_1083_, v_x_1082_);
return v_res_1084_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_MaybeTask_bind___redArg___lam__0(lean_object* v_f_1085_, lean_object* v_x_1086_){
_start:
{
lean_object* v___x_1087_; 
v___x_1087_ = lean_apply_1(v_f_1085_, v_x_1086_);
if (lean_obj_tag(v___x_1087_) == 0)
{
lean_object* v_a_1088_; lean_object* v___x_1089_; 
v_a_1088_ = lean_ctor_get(v___x_1087_, 0);
lean_inc(v_a_1088_);
lean_dec_ref_known(v___x_1087_, 1);
v___x_1089_ = lean_task_pure(v_a_1088_);
return v___x_1089_;
}
else
{
lean_object* v_a_1090_; 
v_a_1090_ = lean_ctor_get(v___x_1087_, 0);
lean_inc_ref(v_a_1090_);
lean_dec_ref_known(v___x_1087_, 1);
return v_a_1090_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_MaybeTask_bind___redArg(lean_object* v_t_1091_, lean_object* v_f_1092_, lean_object* v_prio_1093_, uint8_t v_sync_1094_){
_start:
{
if (lean_obj_tag(v_t_1091_) == 0)
{
lean_object* v_a_1095_; lean_object* v___x_1096_; 
lean_dec(v_prio_1093_);
v_a_1095_ = lean_ctor_get(v_t_1091_, 0);
lean_inc(v_a_1095_);
lean_dec_ref_known(v_t_1091_, 1);
v___x_1096_ = lean_apply_1(v_f_1092_, v_a_1095_);
return v___x_1096_;
}
else
{
lean_object* v_a_1097_; lean_object* v___x_1099_; uint8_t v_isShared_1100_; uint8_t v_isSharedCheck_1106_; 
v_a_1097_ = lean_ctor_get(v_t_1091_, 0);
v_isSharedCheck_1106_ = !lean_is_exclusive(v_t_1091_);
if (v_isSharedCheck_1106_ == 0)
{
v___x_1099_ = v_t_1091_;
v_isShared_1100_ = v_isSharedCheck_1106_;
goto v_resetjp_1098_;
}
else
{
lean_inc(v_a_1097_);
lean_dec(v_t_1091_);
v___x_1099_ = lean_box(0);
v_isShared_1100_ = v_isSharedCheck_1106_;
goto v_resetjp_1098_;
}
v_resetjp_1098_:
{
lean_object* v___f_1101_; lean_object* v___x_1102_; lean_object* v___x_1104_; 
v___f_1101_ = lean_alloc_closure((void*)(l_Std_Async_MaybeTask_bind___redArg___lam__0), 2, 1);
lean_closure_set(v___f_1101_, 0, v_f_1092_);
v___x_1102_ = lean_task_bind(v_a_1097_, v___f_1101_, v_prio_1093_, v_sync_1094_);
if (v_isShared_1100_ == 0)
{
lean_ctor_set(v___x_1099_, 0, v___x_1102_);
v___x_1104_ = v___x_1099_;
goto v_reusejp_1103_;
}
else
{
lean_object* v_reuseFailAlloc_1105_; 
v_reuseFailAlloc_1105_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1105_, 0, v___x_1102_);
v___x_1104_ = v_reuseFailAlloc_1105_;
goto v_reusejp_1103_;
}
v_reusejp_1103_:
{
return v___x_1104_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_MaybeTask_bind___redArg___boxed(lean_object* v_t_1107_, lean_object* v_f_1108_, lean_object* v_prio_1109_, lean_object* v_sync_1110_){
_start:
{
uint8_t v_sync_boxed_1111_; lean_object* v_res_1112_; 
v_sync_boxed_1111_ = lean_unbox(v_sync_1110_);
v_res_1112_ = l_Std_Async_MaybeTask_bind___redArg(v_t_1107_, v_f_1108_, v_prio_1109_, v_sync_boxed_1111_);
return v_res_1112_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_MaybeTask_bind(lean_object* v_00_u03b1_1113_, lean_object* v_00_u03b2_1114_, lean_object* v_t_1115_, lean_object* v_f_1116_, lean_object* v_prio_1117_, uint8_t v_sync_1118_){
_start:
{
if (lean_obj_tag(v_t_1115_) == 0)
{
lean_object* v_a_1119_; lean_object* v___x_1120_; 
lean_dec(v_prio_1117_);
v_a_1119_ = lean_ctor_get(v_t_1115_, 0);
lean_inc(v_a_1119_);
lean_dec_ref_known(v_t_1115_, 1);
v___x_1120_ = lean_apply_1(v_f_1116_, v_a_1119_);
return v___x_1120_;
}
else
{
lean_object* v_a_1121_; lean_object* v___x_1123_; uint8_t v_isShared_1124_; uint8_t v_isSharedCheck_1130_; 
v_a_1121_ = lean_ctor_get(v_t_1115_, 0);
v_isSharedCheck_1130_ = !lean_is_exclusive(v_t_1115_);
if (v_isSharedCheck_1130_ == 0)
{
v___x_1123_ = v_t_1115_;
v_isShared_1124_ = v_isSharedCheck_1130_;
goto v_resetjp_1122_;
}
else
{
lean_inc(v_a_1121_);
lean_dec(v_t_1115_);
v___x_1123_ = lean_box(0);
v_isShared_1124_ = v_isSharedCheck_1130_;
goto v_resetjp_1122_;
}
v_resetjp_1122_:
{
lean_object* v___f_1125_; lean_object* v___x_1126_; lean_object* v___x_1128_; 
v___f_1125_ = lean_alloc_closure((void*)(l_Std_Async_MaybeTask_bind___redArg___lam__0), 2, 1);
lean_closure_set(v___f_1125_, 0, v_f_1116_);
v___x_1126_ = lean_task_bind(v_a_1121_, v___f_1125_, v_prio_1117_, v_sync_1118_);
if (v_isShared_1124_ == 0)
{
lean_ctor_set(v___x_1123_, 0, v___x_1126_);
v___x_1128_ = v___x_1123_;
goto v_reusejp_1127_;
}
else
{
lean_object* v_reuseFailAlloc_1129_; 
v_reuseFailAlloc_1129_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1129_, 0, v___x_1126_);
v___x_1128_ = v_reuseFailAlloc_1129_;
goto v_reusejp_1127_;
}
v_reusejp_1127_:
{
return v___x_1128_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_MaybeTask_bind___boxed(lean_object* v_00_u03b1_1131_, lean_object* v_00_u03b2_1132_, lean_object* v_t_1133_, lean_object* v_f_1134_, lean_object* v_prio_1135_, lean_object* v_sync_1136_){
_start:
{
uint8_t v_sync_boxed_1137_; lean_object* v_res_1138_; 
v_sync_boxed_1137_ = lean_unbox(v_sync_1136_);
v_res_1138_ = l_Std_Async_MaybeTask_bind(v_00_u03b1_1131_, v_00_u03b2_1132_, v_t_1133_, v_f_1134_, v_prio_1135_, v_sync_boxed_1137_);
return v_res_1138_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_MaybeTask_joinTask___redArg___lam__0(lean_object* v_x_1139_){
_start:
{
if (lean_obj_tag(v_x_1139_) == 0)
{
lean_object* v_a_1140_; lean_object* v___x_1141_; 
v_a_1140_ = lean_ctor_get(v_x_1139_, 0);
lean_inc(v_a_1140_);
lean_dec_ref_known(v_x_1139_, 1);
v___x_1141_ = lean_task_pure(v_a_1140_);
return v___x_1141_;
}
else
{
lean_object* v_a_1142_; 
v_a_1142_ = lean_ctor_get(v_x_1139_, 0);
lean_inc_ref(v_a_1142_);
lean_dec_ref_known(v_x_1139_, 1);
return v_a_1142_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_MaybeTask_joinTask___redArg(lean_object* v_t_1144_){
_start:
{
lean_object* v___f_1145_; lean_object* v___x_1146_; uint8_t v___x_1147_; lean_object* v___x_1148_; 
v___f_1145_ = ((lean_object*)(l_Std_Async_MaybeTask_joinTask___redArg___closed__0));
v___x_1146_ = lean_unsigned_to_nat(0u);
v___x_1147_ = 1;
v___x_1148_ = lean_task_bind(v_t_1144_, v___f_1145_, v___x_1146_, v___x_1147_);
return v___x_1148_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_MaybeTask_joinTask(lean_object* v_00_u03b1_1149_, lean_object* v_t_1150_){
_start:
{
lean_object* v___f_1151_; lean_object* v___x_1152_; uint8_t v___x_1153_; lean_object* v___x_1154_; 
v___f_1151_ = ((lean_object*)(l_Std_Async_MaybeTask_joinTask___redArg___closed__0));
v___x_1152_ = lean_unsigned_to_nat(0u);
v___x_1153_ = 1;
v___x_1154_ = lean_task_bind(v_t_1150_, v___f_1151_, v___x_1152_, v___x_1153_);
return v___x_1154_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_MaybeTask_instFunctor___lam__0(lean_object* v_00_u03b1_1155_, lean_object* v_00_u03b2_1156_, lean_object* v_f_1157_, lean_object* v___y_1158_){
_start:
{
if (lean_obj_tag(v___y_1158_) == 0)
{
lean_object* v_a_1159_; lean_object* v___x_1161_; uint8_t v_isShared_1162_; uint8_t v_isSharedCheck_1167_; 
v_a_1159_ = lean_ctor_get(v___y_1158_, 0);
v_isSharedCheck_1167_ = !lean_is_exclusive(v___y_1158_);
if (v_isSharedCheck_1167_ == 0)
{
v___x_1161_ = v___y_1158_;
v_isShared_1162_ = v_isSharedCheck_1167_;
goto v_resetjp_1160_;
}
else
{
lean_inc(v_a_1159_);
lean_dec(v___y_1158_);
v___x_1161_ = lean_box(0);
v_isShared_1162_ = v_isSharedCheck_1167_;
goto v_resetjp_1160_;
}
v_resetjp_1160_:
{
lean_object* v___x_1163_; lean_object* v___x_1165_; 
v___x_1163_ = lean_apply_1(v_f_1157_, v_a_1159_);
if (v_isShared_1162_ == 0)
{
lean_ctor_set(v___x_1161_, 0, v___x_1163_);
v___x_1165_ = v___x_1161_;
goto v_reusejp_1164_;
}
else
{
lean_object* v_reuseFailAlloc_1166_; 
v_reuseFailAlloc_1166_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1166_, 0, v___x_1163_);
v___x_1165_ = v_reuseFailAlloc_1166_;
goto v_reusejp_1164_;
}
v_reusejp_1164_:
{
return v___x_1165_;
}
}
}
else
{
lean_object* v_a_1168_; lean_object* v___x_1170_; uint8_t v_isShared_1171_; uint8_t v_isSharedCheck_1178_; 
v_a_1168_ = lean_ctor_get(v___y_1158_, 0);
v_isSharedCheck_1178_ = !lean_is_exclusive(v___y_1158_);
if (v_isSharedCheck_1178_ == 0)
{
v___x_1170_ = v___y_1158_;
v_isShared_1171_ = v_isSharedCheck_1178_;
goto v_resetjp_1169_;
}
else
{
lean_inc(v_a_1168_);
lean_dec(v___y_1158_);
v___x_1170_ = lean_box(0);
v_isShared_1171_ = v_isSharedCheck_1178_;
goto v_resetjp_1169_;
}
v_resetjp_1169_:
{
lean_object* v___x_1172_; uint8_t v___x_1173_; lean_object* v___x_1174_; lean_object* v___x_1176_; 
v___x_1172_ = lean_unsigned_to_nat(0u);
v___x_1173_ = 0;
v___x_1174_ = lean_task_map(v_f_1157_, v_a_1168_, v___x_1172_, v___x_1173_);
if (v_isShared_1171_ == 0)
{
lean_ctor_set(v___x_1170_, 0, v___x_1174_);
v___x_1176_ = v___x_1170_;
goto v_reusejp_1175_;
}
else
{
lean_object* v_reuseFailAlloc_1177_; 
v_reuseFailAlloc_1177_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1177_, 0, v___x_1174_);
v___x_1176_ = v_reuseFailAlloc_1177_;
goto v_reusejp_1175_;
}
v_reusejp_1175_:
{
return v___x_1176_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_MaybeTask_instFunctor___lam__1(lean_object* v___f_1179_, lean_object* v_00_u03b1_1180_, lean_object* v_00_u03b2_1181_, lean_object* v___y_1182_, lean_object* v___y_1183_){
_start:
{
lean_object* v___x_1184_; lean_object* v___x_1185_; 
v___x_1184_ = lean_alloc_closure((void*)(l_Function_const___boxed), 4, 3);
lean_closure_set(v___x_1184_, 0, lean_box(0));
lean_closure_set(v___x_1184_, 1, lean_box(0));
lean_closure_set(v___x_1184_, 2, v___y_1182_);
v___x_1185_ = lean_apply_4(v___f_1179_, lean_box(0), lean_box(0), v___x_1184_, v___y_1183_);
return v___x_1185_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_MaybeTask_instMonad___lam__0(lean_object* v_00_u03b1_1193_, lean_object* v___y_1194_){
_start:
{
lean_object* v___x_1195_; 
v___x_1195_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1195_, 0, v___y_1194_);
return v___x_1195_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_MaybeTask_instMonad___lam__1(lean_object* v_x_1196_, lean_object* v_y_1197_){
_start:
{
lean_object* v___x_1198_; lean_object* v___x_1199_; 
v___x_1198_ = lean_box(0);
v___x_1199_ = lean_apply_1(v_x_1196_, v___x_1198_);
if (lean_obj_tag(v___x_1199_) == 0)
{
lean_object* v_a_1200_; lean_object* v___x_1202_; uint8_t v_isShared_1203_; uint8_t v_isSharedCheck_1208_; 
v_a_1200_ = lean_ctor_get(v___x_1199_, 0);
v_isSharedCheck_1208_ = !lean_is_exclusive(v___x_1199_);
if (v_isSharedCheck_1208_ == 0)
{
v___x_1202_ = v___x_1199_;
v_isShared_1203_ = v_isSharedCheck_1208_;
goto v_resetjp_1201_;
}
else
{
lean_inc(v_a_1200_);
lean_dec(v___x_1199_);
v___x_1202_ = lean_box(0);
v_isShared_1203_ = v_isSharedCheck_1208_;
goto v_resetjp_1201_;
}
v_resetjp_1201_:
{
lean_object* v___x_1204_; lean_object* v___x_1206_; 
v___x_1204_ = lean_apply_1(v_y_1197_, v_a_1200_);
if (v_isShared_1203_ == 0)
{
lean_ctor_set(v___x_1202_, 0, v___x_1204_);
v___x_1206_ = v___x_1202_;
goto v_reusejp_1205_;
}
else
{
lean_object* v_reuseFailAlloc_1207_; 
v_reuseFailAlloc_1207_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1207_, 0, v___x_1204_);
v___x_1206_ = v_reuseFailAlloc_1207_;
goto v_reusejp_1205_;
}
v_reusejp_1205_:
{
return v___x_1206_;
}
}
}
else
{
lean_object* v_a_1209_; lean_object* v___x_1211_; uint8_t v_isShared_1212_; uint8_t v_isSharedCheck_1219_; 
v_a_1209_ = lean_ctor_get(v___x_1199_, 0);
v_isSharedCheck_1219_ = !lean_is_exclusive(v___x_1199_);
if (v_isSharedCheck_1219_ == 0)
{
v___x_1211_ = v___x_1199_;
v_isShared_1212_ = v_isSharedCheck_1219_;
goto v_resetjp_1210_;
}
else
{
lean_inc(v_a_1209_);
lean_dec(v___x_1199_);
v___x_1211_ = lean_box(0);
v_isShared_1212_ = v_isSharedCheck_1219_;
goto v_resetjp_1210_;
}
v_resetjp_1210_:
{
lean_object* v___x_1213_; uint8_t v___x_1214_; lean_object* v___x_1215_; lean_object* v___x_1217_; 
v___x_1213_ = lean_unsigned_to_nat(0u);
v___x_1214_ = 0;
v___x_1215_ = lean_task_map(v_y_1197_, v_a_1209_, v___x_1213_, v___x_1214_);
if (v_isShared_1212_ == 0)
{
lean_ctor_set(v___x_1211_, 0, v___x_1215_);
v___x_1217_ = v___x_1211_;
goto v_reusejp_1216_;
}
else
{
lean_object* v_reuseFailAlloc_1218_; 
v_reuseFailAlloc_1218_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1218_, 0, v___x_1215_);
v___x_1217_ = v_reuseFailAlloc_1218_;
goto v_reusejp_1216_;
}
v_reusejp_1216_:
{
return v___x_1217_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_MaybeTask_instMonad___lam__2(lean_object* v___f_1220_, lean_object* v_x_1221_){
_start:
{
lean_object* v___x_1222_; 
v___x_1222_ = lean_apply_1(v___f_1220_, v_x_1221_);
if (lean_obj_tag(v___x_1222_) == 0)
{
lean_object* v_a_1223_; lean_object* v___x_1224_; 
v_a_1223_ = lean_ctor_get(v___x_1222_, 0);
lean_inc(v_a_1223_);
lean_dec_ref_known(v___x_1222_, 1);
v___x_1224_ = lean_task_pure(v_a_1223_);
return v___x_1224_;
}
else
{
lean_object* v_a_1225_; 
v_a_1225_ = lean_ctor_get(v___x_1222_, 0);
lean_inc_ref(v_a_1225_);
lean_dec_ref_known(v___x_1222_, 1);
return v_a_1225_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_MaybeTask_instMonad___lam__3(lean_object* v_00_u03b1_1226_, lean_object* v_00_u03b2_1227_, lean_object* v_f_1228_, lean_object* v_x_1229_){
_start:
{
lean_object* v___f_1230_; 
lean_inc_ref(v_x_1229_);
v___f_1230_ = lean_alloc_closure((void*)(l_Std_Async_MaybeTask_instMonad___lam__1), 2, 1);
lean_closure_set(v___f_1230_, 0, v_x_1229_);
if (lean_obj_tag(v_f_1228_) == 0)
{
lean_object* v_a_1231_; lean_object* v___x_1232_; 
lean_dec_ref(v___f_1230_);
v_a_1231_ = lean_ctor_get(v_f_1228_, 0);
lean_inc(v_a_1231_);
lean_dec_ref_known(v_f_1228_, 1);
v___x_1232_ = l_Std_Async_MaybeTask_instMonad___lam__1(v_x_1229_, v_a_1231_);
return v___x_1232_;
}
else
{
lean_object* v_a_1233_; lean_object* v___x_1235_; uint8_t v_isShared_1236_; uint8_t v_isSharedCheck_1244_; 
lean_dec_ref(v_x_1229_);
v_a_1233_ = lean_ctor_get(v_f_1228_, 0);
v_isSharedCheck_1244_ = !lean_is_exclusive(v_f_1228_);
if (v_isSharedCheck_1244_ == 0)
{
v___x_1235_ = v_f_1228_;
v_isShared_1236_ = v_isSharedCheck_1244_;
goto v_resetjp_1234_;
}
else
{
lean_inc(v_a_1233_);
lean_dec(v_f_1228_);
v___x_1235_ = lean_box(0);
v_isShared_1236_ = v_isSharedCheck_1244_;
goto v_resetjp_1234_;
}
v_resetjp_1234_:
{
lean_object* v___f_1237_; lean_object* v___x_1238_; uint8_t v___x_1239_; lean_object* v___x_1240_; lean_object* v___x_1242_; 
v___f_1237_ = lean_alloc_closure((void*)(l_Std_Async_MaybeTask_instMonad___lam__2), 2, 1);
lean_closure_set(v___f_1237_, 0, v___f_1230_);
v___x_1238_ = lean_unsigned_to_nat(0u);
v___x_1239_ = 0;
v___x_1240_ = lean_task_bind(v_a_1233_, v___f_1237_, v___x_1238_, v___x_1239_);
if (v_isShared_1236_ == 0)
{
lean_ctor_set(v___x_1235_, 0, v___x_1240_);
v___x_1242_ = v___x_1235_;
goto v_reusejp_1241_;
}
else
{
lean_object* v_reuseFailAlloc_1243_; 
v_reuseFailAlloc_1243_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1243_, 0, v___x_1240_);
v___x_1242_ = v_reuseFailAlloc_1243_;
goto v_reusejp_1241_;
}
v_reusejp_1241_:
{
return v___x_1242_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_MaybeTask_instMonad___lam__5(lean_object* v_00_u03b1_1245_, lean_object* v_00_u03b2_1246_, lean_object* v_t_1247_, lean_object* v_f_1248_){
_start:
{
if (lean_obj_tag(v_t_1247_) == 0)
{
lean_object* v_a_1249_; lean_object* v___x_1250_; 
v_a_1249_ = lean_ctor_get(v_t_1247_, 0);
lean_inc(v_a_1249_);
lean_dec_ref_known(v_t_1247_, 1);
v___x_1250_ = lean_apply_1(v_f_1248_, v_a_1249_);
return v___x_1250_;
}
else
{
lean_object* v_a_1251_; lean_object* v___x_1253_; uint8_t v_isShared_1254_; uint8_t v_isSharedCheck_1262_; 
v_a_1251_ = lean_ctor_get(v_t_1247_, 0);
v_isSharedCheck_1262_ = !lean_is_exclusive(v_t_1247_);
if (v_isSharedCheck_1262_ == 0)
{
v___x_1253_ = v_t_1247_;
v_isShared_1254_ = v_isSharedCheck_1262_;
goto v_resetjp_1252_;
}
else
{
lean_inc(v_a_1251_);
lean_dec(v_t_1247_);
v___x_1253_ = lean_box(0);
v_isShared_1254_ = v_isSharedCheck_1262_;
goto v_resetjp_1252_;
}
v_resetjp_1252_:
{
lean_object* v___f_1255_; lean_object* v___x_1256_; uint8_t v___x_1257_; lean_object* v___x_1258_; lean_object* v___x_1260_; 
v___f_1255_ = lean_alloc_closure((void*)(l_Std_Async_MaybeTask_bind___redArg___lam__0), 2, 1);
lean_closure_set(v___f_1255_, 0, v_f_1248_);
v___x_1256_ = lean_unsigned_to_nat(0u);
v___x_1257_ = 0;
v___x_1258_ = lean_task_bind(v_a_1251_, v___f_1255_, v___x_1256_, v___x_1257_);
if (v_isShared_1254_ == 0)
{
lean_ctor_set(v___x_1253_, 0, v___x_1258_);
v___x_1260_ = v___x_1253_;
goto v_reusejp_1259_;
}
else
{
lean_object* v_reuseFailAlloc_1261_; 
v_reuseFailAlloc_1261_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1261_, 0, v___x_1258_);
v___x_1260_ = v_reuseFailAlloc_1261_;
goto v_reusejp_1259_;
}
v_reusejp_1259_:
{
return v___x_1260_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_MaybeTask_instMonad___lam__4(lean_object* v_a_1263_, lean_object* v_x_1264_){
_start:
{
lean_object* v___x_1265_; 
v___x_1265_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1265_, 0, v_a_1263_);
return v___x_1265_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_MaybeTask_instMonad___lam__4___boxed(lean_object* v_a_1266_, lean_object* v_x_1267_){
_start:
{
lean_object* v_res_1268_; 
v_res_1268_ = l_Std_Async_MaybeTask_instMonad___lam__4(v_a_1266_, v_x_1267_);
lean_dec(v_x_1267_);
return v_res_1268_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_MaybeTask_instMonad___lam__6(lean_object* v_y_1269_, lean_object* v___f_1270_, lean_object* v_a_1271_){
_start:
{
lean_object* v___f_1272_; lean_object* v___x_1273_; lean_object* v___x_1274_; lean_object* v___x_1275_; 
v___f_1272_ = lean_alloc_closure((void*)(l_Std_Async_MaybeTask_instMonad___lam__4___boxed), 2, 1);
lean_closure_set(v___f_1272_, 0, v_a_1271_);
v___x_1273_ = lean_box(0);
v___x_1274_ = lean_apply_1(v_y_1269_, v___x_1273_);
v___x_1275_ = lean_apply_4(v___f_1270_, lean_box(0), lean_box(0), v___x_1274_, v___f_1272_);
return v___x_1275_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_MaybeTask_instMonad___lam__7(lean_object* v___f_1276_, lean_object* v_00_u03b1_1277_, lean_object* v_00_u03b2_1278_, lean_object* v_x_1279_, lean_object* v_y_1280_){
_start:
{
lean_object* v___f_1281_; lean_object* v___x_1282_; 
lean_inc_ref(v___f_1276_);
v___f_1281_ = lean_alloc_closure((void*)(l_Std_Async_MaybeTask_instMonad___lam__6), 3, 2);
lean_closure_set(v___f_1281_, 0, v_y_1280_);
lean_closure_set(v___f_1281_, 1, v___f_1276_);
v___x_1282_ = lean_apply_4(v___f_1276_, lean_box(0), lean_box(0), v_x_1279_, v___f_1281_);
return v___x_1282_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_MaybeTask_instMonad___lam__8(lean_object* v_y_1283_, lean_object* v_x_1284_){
_start:
{
lean_object* v___x_1285_; lean_object* v___x_1286_; 
v___x_1285_ = lean_box(0);
v___x_1286_ = lean_apply_1(v_y_1283_, v___x_1285_);
return v___x_1286_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_MaybeTask_instMonad___lam__8___boxed(lean_object* v_y_1287_, lean_object* v_x_1288_){
_start:
{
lean_object* v_res_1289_; 
v_res_1289_ = l_Std_Async_MaybeTask_instMonad___lam__8(v_y_1287_, v_x_1288_);
lean_dec(v_x_1288_);
return v_res_1289_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_MaybeTask_instMonad___lam__9(lean_object* v___f_1290_, lean_object* v_x_1291_){
_start:
{
lean_object* v___x_1292_; 
v___x_1292_ = lean_apply_1(v___f_1290_, v_x_1291_);
if (lean_obj_tag(v___x_1292_) == 0)
{
lean_object* v_a_1293_; lean_object* v___x_1294_; 
v_a_1293_ = lean_ctor_get(v___x_1292_, 0);
lean_inc(v_a_1293_);
lean_dec_ref_known(v___x_1292_, 1);
v___x_1294_ = lean_task_pure(v_a_1293_);
return v___x_1294_;
}
else
{
lean_object* v_a_1295_; 
v_a_1295_ = lean_ctor_get(v___x_1292_, 0);
lean_inc_ref(v_a_1295_);
lean_dec_ref_known(v___x_1292_, 1);
return v_a_1295_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_MaybeTask_instMonad___lam__10(lean_object* v_00_u03b1_1296_, lean_object* v_00_u03b2_1297_, lean_object* v_x_1298_, lean_object* v_y_1299_){
_start:
{
lean_object* v___f_1300_; 
lean_inc_ref(v_y_1299_);
v___f_1300_ = lean_alloc_closure((void*)(l_Std_Async_MaybeTask_instMonad___lam__8___boxed), 2, 1);
lean_closure_set(v___f_1300_, 0, v_y_1299_);
if (lean_obj_tag(v_x_1298_) == 0)
{
lean_object* v_a_1301_; lean_object* v___x_1302_; 
lean_dec_ref(v___f_1300_);
v_a_1301_ = lean_ctor_get(v_x_1298_, 0);
lean_inc(v_a_1301_);
lean_dec_ref_known(v_x_1298_, 1);
v___x_1302_ = l_Std_Async_MaybeTask_instMonad___lam__8(v_y_1299_, v_a_1301_);
lean_dec(v_a_1301_);
return v___x_1302_;
}
else
{
lean_object* v_a_1303_; lean_object* v___x_1305_; uint8_t v_isShared_1306_; uint8_t v_isSharedCheck_1314_; 
lean_dec_ref(v_y_1299_);
v_a_1303_ = lean_ctor_get(v_x_1298_, 0);
v_isSharedCheck_1314_ = !lean_is_exclusive(v_x_1298_);
if (v_isSharedCheck_1314_ == 0)
{
v___x_1305_ = v_x_1298_;
v_isShared_1306_ = v_isSharedCheck_1314_;
goto v_resetjp_1304_;
}
else
{
lean_inc(v_a_1303_);
lean_dec(v_x_1298_);
v___x_1305_ = lean_box(0);
v_isShared_1306_ = v_isSharedCheck_1314_;
goto v_resetjp_1304_;
}
v_resetjp_1304_:
{
lean_object* v___f_1307_; lean_object* v___x_1308_; uint8_t v___x_1309_; lean_object* v___x_1310_; lean_object* v___x_1312_; 
v___f_1307_ = lean_alloc_closure((void*)(l_Std_Async_MaybeTask_instMonad___lam__9), 2, 1);
lean_closure_set(v___f_1307_, 0, v___f_1300_);
v___x_1308_ = lean_unsigned_to_nat(0u);
v___x_1309_ = 0;
v___x_1310_ = lean_task_bind(v_a_1303_, v___f_1307_, v___x_1308_, v___x_1309_);
if (v_isShared_1306_ == 0)
{
lean_ctor_set(v___x_1305_, 0, v___x_1310_);
v___x_1312_ = v___x_1305_;
goto v_reusejp_1311_;
}
else
{
lean_object* v_reuseFailAlloc_1313_; 
v_reuseFailAlloc_1313_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1313_, 0, v___x_1310_);
v___x_1312_ = v_reuseFailAlloc_1313_;
goto v_reusejp_1311_;
}
v_reusejp_1311_:
{
return v___x_1312_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_mk___redArg(lean_object* v_toRawBaseIO_1331_){
_start:
{
lean_object* v___x_1333_; 
v___x_1333_ = lean_apply_1(v_toRawBaseIO_1331_, lean_box(0));
return v___x_1333_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_mk___redArg___boxed(lean_object* v_toRawBaseIO_1334_, lean_object* v___y_1335_){
_start:
{
lean_object* v_res_1336_; 
v_res_1336_ = l_Std_Async_BaseAsync_mk___redArg(v_toRawBaseIO_1334_);
return v_res_1336_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_mk(lean_object* v_00_u03b1_1337_, lean_object* v_toRawBaseIO_1338_){
_start:
{
lean_object* v___x_1340_; 
v___x_1340_ = lean_apply_1(v_toRawBaseIO_1338_, lean_box(0));
return v___x_1340_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_mk___boxed(lean_object* v_00_u03b1_1341_, lean_object* v_toRawBaseIO_1342_, lean_object* v___y_1343_){
_start:
{
lean_object* v_res_1344_; 
v_res_1344_ = l_Std_Async_BaseAsync_mk(v_00_u03b1_1341_, v_toRawBaseIO_1342_);
return v_res_1344_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_toRawBaseIO___redArg(lean_object* v_self_1345_){
_start:
{
lean_object* v___x_1347_; 
v___x_1347_ = lean_apply_1(v_self_1345_, lean_box(0));
return v___x_1347_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_toRawBaseIO___redArg___boxed(lean_object* v_self_1348_, lean_object* v___y_1349_){
_start:
{
lean_object* v_res_1350_; 
v_res_1350_ = l_Std_Async_BaseAsync_toRawBaseIO___redArg(v_self_1348_);
return v_res_1350_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_toRawBaseIO(lean_object* v_00_u03b1_1351_, lean_object* v_self_1352_){
_start:
{
lean_object* v___x_1354_; 
v___x_1354_ = lean_apply_1(v_self_1352_, lean_box(0));
return v___x_1354_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_toRawBaseIO___boxed(lean_object* v_00_u03b1_1355_, lean_object* v_self_1356_, lean_object* v___y_1357_){
_start:
{
lean_object* v_res_1358_; 
v_res_1358_ = l_Std_Async_BaseAsync_toRawBaseIO(v_00_u03b1_1355_, v_self_1356_);
return v_res_1358_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_toBaseIO___redArg(lean_object* v_x_1359_){
_start:
{
lean_object* v___x_1361_; 
v___x_1361_ = lean_apply_1(v_x_1359_, lean_box(0));
if (lean_obj_tag(v___x_1361_) == 0)
{
lean_object* v_a_1362_; lean_object* v___x_1363_; 
v_a_1362_ = lean_ctor_get(v___x_1361_, 0);
lean_inc(v_a_1362_);
lean_dec_ref_known(v___x_1361_, 1);
v___x_1363_ = lean_task_pure(v_a_1362_);
return v___x_1363_;
}
else
{
lean_object* v_a_1364_; 
v_a_1364_ = lean_ctor_get(v___x_1361_, 0);
lean_inc_ref(v_a_1364_);
lean_dec_ref_known(v___x_1361_, 1);
return v_a_1364_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_toBaseIO___redArg___boxed(lean_object* v_x_1365_, lean_object* v___y_1366_){
_start:
{
lean_object* v_res_1367_; 
v_res_1367_ = l_Std_Async_BaseAsync_toBaseIO___redArg(v_x_1365_);
return v_res_1367_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_toBaseIO(lean_object* v_00_u03b1_1368_, lean_object* v_x_1369_){
_start:
{
lean_object* v___x_1371_; 
v___x_1371_ = lean_apply_1(v_x_1369_, lean_box(0));
if (lean_obj_tag(v___x_1371_) == 0)
{
lean_object* v_a_1372_; lean_object* v___x_1373_; 
v_a_1372_ = lean_ctor_get(v___x_1371_, 0);
lean_inc(v_a_1372_);
lean_dec_ref_known(v___x_1371_, 1);
v___x_1373_ = lean_task_pure(v_a_1372_);
return v___x_1373_;
}
else
{
lean_object* v_a_1374_; 
v_a_1374_ = lean_ctor_get(v___x_1371_, 0);
lean_inc_ref(v_a_1374_);
lean_dec_ref_known(v___x_1371_, 1);
return v_a_1374_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_toBaseIO___boxed(lean_object* v_00_u03b1_1375_, lean_object* v_x_1376_, lean_object* v___y_1377_){
_start:
{
lean_object* v_res_1378_; 
v_res_1378_ = l_Std_Async_BaseAsync_toBaseIO(v_00_u03b1_1375_, v_x_1376_);
return v_res_1378_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_ofTask___redArg(lean_object* v_x_1379_){
_start:
{
lean_object* v___x_1381_; 
v___x_1381_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1381_, 0, v_x_1379_);
return v___x_1381_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_ofTask___redArg___boxed(lean_object* v_x_1382_, lean_object* v___y_1383_){
_start:
{
lean_object* v_res_1384_; 
v_res_1384_ = l_Std_Async_BaseAsync_ofTask___redArg(v_x_1382_);
return v_res_1384_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_ofTask(lean_object* v_00_u03b1_1385_, lean_object* v_x_1386_){
_start:
{
lean_object* v___x_1388_; 
v___x_1388_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1388_, 0, v_x_1386_);
return v___x_1388_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_ofTask___boxed(lean_object* v_00_u03b1_1389_, lean_object* v_x_1390_, lean_object* v___y_1391_){
_start:
{
lean_object* v_res_1392_; 
v_res_1392_ = l_Std_Async_BaseAsync_ofTask(v_00_u03b1_1389_, v_x_1390_);
return v_res_1392_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_pure___redArg(lean_object* v_a_1393_){
_start:
{
lean_object* v___x_1395_; 
v___x_1395_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1395_, 0, v_a_1393_);
return v___x_1395_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_pure___redArg___boxed(lean_object* v_a_1396_, lean_object* v___y_1397_){
_start:
{
lean_object* v_res_1398_; 
v_res_1398_ = l_Std_Async_BaseAsync_pure___redArg(v_a_1396_);
return v_res_1398_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_pure(lean_object* v_00_u03b1_1399_, lean_object* v_a_1400_){
_start:
{
lean_object* v___x_1402_; 
v___x_1402_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1402_, 0, v_a_1400_);
return v___x_1402_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_pure___boxed(lean_object* v_00_u03b1_1403_, lean_object* v_a_1404_, lean_object* v___y_1405_){
_start:
{
lean_object* v_res_1406_; 
v_res_1406_ = l_Std_Async_BaseAsync_pure(v_00_u03b1_1403_, v_a_1404_);
return v_res_1406_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_map___redArg(lean_object* v_f_1407_, lean_object* v_self_1408_, lean_object* v_prio_1409_, uint8_t v_sync_1410_){
_start:
{
lean_object* v___x_1412_; 
v___x_1412_ = lean_apply_1(v_self_1408_, lean_box(0));
if (lean_obj_tag(v___x_1412_) == 0)
{
lean_object* v_a_1413_; lean_object* v___x_1415_; uint8_t v_isShared_1416_; uint8_t v_isSharedCheck_1421_; 
lean_dec(v_prio_1409_);
v_a_1413_ = lean_ctor_get(v___x_1412_, 0);
v_isSharedCheck_1421_ = !lean_is_exclusive(v___x_1412_);
if (v_isSharedCheck_1421_ == 0)
{
v___x_1415_ = v___x_1412_;
v_isShared_1416_ = v_isSharedCheck_1421_;
goto v_resetjp_1414_;
}
else
{
lean_inc(v_a_1413_);
lean_dec(v___x_1412_);
v___x_1415_ = lean_box(0);
v_isShared_1416_ = v_isSharedCheck_1421_;
goto v_resetjp_1414_;
}
v_resetjp_1414_:
{
lean_object* v___x_1417_; lean_object* v___x_1419_; 
v___x_1417_ = lean_apply_1(v_f_1407_, v_a_1413_);
if (v_isShared_1416_ == 0)
{
lean_ctor_set(v___x_1415_, 0, v___x_1417_);
v___x_1419_ = v___x_1415_;
goto v_reusejp_1418_;
}
else
{
lean_object* v_reuseFailAlloc_1420_; 
v_reuseFailAlloc_1420_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1420_, 0, v___x_1417_);
v___x_1419_ = v_reuseFailAlloc_1420_;
goto v_reusejp_1418_;
}
v_reusejp_1418_:
{
return v___x_1419_;
}
}
}
else
{
lean_object* v_a_1422_; lean_object* v___x_1424_; uint8_t v_isShared_1425_; uint8_t v_isSharedCheck_1430_; 
v_a_1422_ = lean_ctor_get(v___x_1412_, 0);
v_isSharedCheck_1430_ = !lean_is_exclusive(v___x_1412_);
if (v_isSharedCheck_1430_ == 0)
{
v___x_1424_ = v___x_1412_;
v_isShared_1425_ = v_isSharedCheck_1430_;
goto v_resetjp_1423_;
}
else
{
lean_inc(v_a_1422_);
lean_dec(v___x_1412_);
v___x_1424_ = lean_box(0);
v_isShared_1425_ = v_isSharedCheck_1430_;
goto v_resetjp_1423_;
}
v_resetjp_1423_:
{
lean_object* v___x_1426_; lean_object* v___x_1428_; 
v___x_1426_ = lean_task_map(v_f_1407_, v_a_1422_, v_prio_1409_, v_sync_1410_);
if (v_isShared_1425_ == 0)
{
lean_ctor_set(v___x_1424_, 0, v___x_1426_);
v___x_1428_ = v___x_1424_;
goto v_reusejp_1427_;
}
else
{
lean_object* v_reuseFailAlloc_1429_; 
v_reuseFailAlloc_1429_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1429_, 0, v___x_1426_);
v___x_1428_ = v_reuseFailAlloc_1429_;
goto v_reusejp_1427_;
}
v_reusejp_1427_:
{
return v___x_1428_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_map___redArg___boxed(lean_object* v_f_1431_, lean_object* v_self_1432_, lean_object* v_prio_1433_, lean_object* v_sync_1434_, lean_object* v___y_1435_){
_start:
{
uint8_t v_sync_boxed_1436_; lean_object* v_res_1437_; 
v_sync_boxed_1436_ = lean_unbox(v_sync_1434_);
v_res_1437_ = l_Std_Async_BaseAsync_map___redArg(v_f_1431_, v_self_1432_, v_prio_1433_, v_sync_boxed_1436_);
return v_res_1437_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_map(lean_object* v_00_u03b1_1438_, lean_object* v_00_u03b2_1439_, lean_object* v_f_1440_, lean_object* v_self_1441_, lean_object* v_prio_1442_, uint8_t v_sync_1443_){
_start:
{
lean_object* v___x_1445_; 
v___x_1445_ = lean_apply_1(v_self_1441_, lean_box(0));
if (lean_obj_tag(v___x_1445_) == 0)
{
lean_object* v_a_1446_; lean_object* v___x_1448_; uint8_t v_isShared_1449_; uint8_t v_isSharedCheck_1454_; 
lean_dec(v_prio_1442_);
v_a_1446_ = lean_ctor_get(v___x_1445_, 0);
v_isSharedCheck_1454_ = !lean_is_exclusive(v___x_1445_);
if (v_isSharedCheck_1454_ == 0)
{
v___x_1448_ = v___x_1445_;
v_isShared_1449_ = v_isSharedCheck_1454_;
goto v_resetjp_1447_;
}
else
{
lean_inc(v_a_1446_);
lean_dec(v___x_1445_);
v___x_1448_ = lean_box(0);
v_isShared_1449_ = v_isSharedCheck_1454_;
goto v_resetjp_1447_;
}
v_resetjp_1447_:
{
lean_object* v___x_1450_; lean_object* v___x_1452_; 
v___x_1450_ = lean_apply_1(v_f_1440_, v_a_1446_);
if (v_isShared_1449_ == 0)
{
lean_ctor_set(v___x_1448_, 0, v___x_1450_);
v___x_1452_ = v___x_1448_;
goto v_reusejp_1451_;
}
else
{
lean_object* v_reuseFailAlloc_1453_; 
v_reuseFailAlloc_1453_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1453_, 0, v___x_1450_);
v___x_1452_ = v_reuseFailAlloc_1453_;
goto v_reusejp_1451_;
}
v_reusejp_1451_:
{
return v___x_1452_;
}
}
}
else
{
lean_object* v_a_1455_; lean_object* v___x_1457_; uint8_t v_isShared_1458_; uint8_t v_isSharedCheck_1463_; 
v_a_1455_ = lean_ctor_get(v___x_1445_, 0);
v_isSharedCheck_1463_ = !lean_is_exclusive(v___x_1445_);
if (v_isSharedCheck_1463_ == 0)
{
v___x_1457_ = v___x_1445_;
v_isShared_1458_ = v_isSharedCheck_1463_;
goto v_resetjp_1456_;
}
else
{
lean_inc(v_a_1455_);
lean_dec(v___x_1445_);
v___x_1457_ = lean_box(0);
v_isShared_1458_ = v_isSharedCheck_1463_;
goto v_resetjp_1456_;
}
v_resetjp_1456_:
{
lean_object* v___x_1459_; lean_object* v___x_1461_; 
v___x_1459_ = lean_task_map(v_f_1440_, v_a_1455_, v_prio_1442_, v_sync_1443_);
if (v_isShared_1458_ == 0)
{
lean_ctor_set(v___x_1457_, 0, v___x_1459_);
v___x_1461_ = v___x_1457_;
goto v_reusejp_1460_;
}
else
{
lean_object* v_reuseFailAlloc_1462_; 
v_reuseFailAlloc_1462_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1462_, 0, v___x_1459_);
v___x_1461_ = v_reuseFailAlloc_1462_;
goto v_reusejp_1460_;
}
v_reusejp_1460_:
{
return v___x_1461_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_map___boxed(lean_object* v_00_u03b1_1464_, lean_object* v_00_u03b2_1465_, lean_object* v_f_1466_, lean_object* v_self_1467_, lean_object* v_prio_1468_, lean_object* v_sync_1469_, lean_object* v___y_1470_){
_start:
{
uint8_t v_sync_boxed_1471_; lean_object* v_res_1472_; 
v_sync_boxed_1471_ = lean_unbox(v_sync_1469_);
v_res_1472_ = l_Std_Async_BaseAsync_map(v_00_u03b1_1464_, v_00_u03b2_1465_, v_f_1466_, v_self_1467_, v_prio_1468_, v_sync_boxed_1471_);
return v_res_1472_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg___lam__0(lean_object* v_f_1473_, lean_object* v_a_1474_){
_start:
{
lean_object* v___x_1476_; 
v___x_1476_ = lean_apply_2(v_f_1473_, v_a_1474_, lean_box(0));
if (lean_obj_tag(v___x_1476_) == 0)
{
lean_object* v_a_1477_; lean_object* v___x_1478_; 
v_a_1477_ = lean_ctor_get(v___x_1476_, 0);
lean_inc(v_a_1477_);
lean_dec_ref_known(v___x_1476_, 1);
v___x_1478_ = lean_task_pure(v_a_1477_);
return v___x_1478_;
}
else
{
lean_object* v_a_1479_; 
v_a_1479_ = lean_ctor_get(v___x_1476_, 0);
lean_inc_ref(v_a_1479_);
lean_dec_ref_known(v___x_1476_, 1);
return v_a_1479_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg___lam__0___boxed(lean_object* v_f_1480_, lean_object* v_a_1481_, lean_object* v___y_1482_){
_start:
{
lean_object* v_res_1483_; 
v_res_1483_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg___lam__0(v_f_1480_, v_a_1481_);
return v_res_1483_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(lean_object* v_prio_1484_, uint8_t v_sync_1485_, lean_object* v_t_1486_, lean_object* v_f_1487_){
_start:
{
if (lean_obj_tag(v_t_1486_) == 0)
{
lean_object* v_a_1489_; lean_object* v___x_1490_; 
lean_dec(v_prio_1484_);
v_a_1489_ = lean_ctor_get(v_t_1486_, 0);
lean_inc(v_a_1489_);
lean_dec_ref_known(v_t_1486_, 1);
v___x_1490_ = lean_apply_2(v_f_1487_, v_a_1489_, lean_box(0));
return v___x_1490_;
}
else
{
lean_object* v_a_1491_; lean_object* v___x_1493_; uint8_t v_isShared_1494_; uint8_t v_isSharedCheck_1500_; 
v_a_1491_ = lean_ctor_get(v_t_1486_, 0);
v_isSharedCheck_1500_ = !lean_is_exclusive(v_t_1486_);
if (v_isSharedCheck_1500_ == 0)
{
v___x_1493_ = v_t_1486_;
v_isShared_1494_ = v_isSharedCheck_1500_;
goto v_resetjp_1492_;
}
else
{
lean_inc(v_a_1491_);
lean_dec(v_t_1486_);
v___x_1493_ = lean_box(0);
v_isShared_1494_ = v_isSharedCheck_1500_;
goto v_resetjp_1492_;
}
v_resetjp_1492_:
{
lean_object* v___f_1495_; lean_object* v___x_1496_; lean_object* v___x_1498_; 
v___f_1495_ = lean_alloc_closure((void*)(l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_1495_, 0, v_f_1487_);
v___x_1496_ = lean_io_bind_task(v_a_1491_, v___f_1495_, v_prio_1484_, v_sync_1485_);
if (v_isShared_1494_ == 0)
{
lean_ctor_set(v___x_1493_, 0, v___x_1496_);
v___x_1498_ = v___x_1493_;
goto v_reusejp_1497_;
}
else
{
lean_object* v_reuseFailAlloc_1499_; 
v_reuseFailAlloc_1499_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1499_, 0, v___x_1496_);
v___x_1498_ = v_reuseFailAlloc_1499_;
goto v_reusejp_1497_;
}
v_reusejp_1497_:
{
return v___x_1498_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg___boxed(lean_object* v_prio_1501_, lean_object* v_sync_1502_, lean_object* v_t_1503_, lean_object* v_f_1504_, lean_object* v___y_1505_){
_start:
{
uint8_t v_sync_boxed_1506_; lean_object* v_res_1507_; 
v_sync_boxed_1506_ = lean_unbox(v_sync_1502_);
v_res_1507_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v_prio_1501_, v_sync_boxed_1506_, v_t_1503_, v_f_1504_);
return v_res_1507_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_object* v_00_u03b1_1508_, lean_object* v_00_u03b2_1509_, lean_object* v_prio_1510_, uint8_t v_sync_1511_, lean_object* v_t_1512_, lean_object* v_f_1513_){
_start:
{
lean_object* v___x_1515_; 
v___x_1515_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v_prio_1510_, v_sync_1511_, v_t_1512_, v_f_1513_);
return v___x_1515_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___boxed(lean_object* v_00_u03b1_1516_, lean_object* v_00_u03b2_1517_, lean_object* v_prio_1518_, lean_object* v_sync_1519_, lean_object* v_t_1520_, lean_object* v_f_1521_, lean_object* v___y_1522_){
_start:
{
uint8_t v_sync_boxed_1523_; lean_object* v_res_1524_; 
v_sync_boxed_1523_ = lean_unbox(v_sync_1519_);
v_res_1524_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(v_00_u03b1_1516_, v_00_u03b2_1517_, v_prio_1518_, v_sync_boxed_1523_, v_t_1520_, v_f_1521_);
return v_res_1524_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_bind___redArg(lean_object* v_self_1525_, lean_object* v_f_1526_, lean_object* v_prio_1527_, uint8_t v_sync_1528_){
_start:
{
lean_object* v___x_1530_; lean_object* v___x_1531_; 
v___x_1530_ = lean_apply_1(v_self_1525_, lean_box(0));
v___x_1531_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v_prio_1527_, v_sync_1528_, v___x_1530_, v_f_1526_);
return v___x_1531_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_bind___redArg___boxed(lean_object* v_self_1532_, lean_object* v_f_1533_, lean_object* v_prio_1534_, lean_object* v_sync_1535_, lean_object* v___y_1536_){
_start:
{
uint8_t v_sync_boxed_1537_; lean_object* v_res_1538_; 
v_sync_boxed_1537_ = lean_unbox(v_sync_1535_);
v_res_1538_ = l_Std_Async_BaseAsync_bind___redArg(v_self_1532_, v_f_1533_, v_prio_1534_, v_sync_boxed_1537_);
return v_res_1538_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_bind(lean_object* v_00_u03b1_1539_, lean_object* v_00_u03b2_1540_, lean_object* v_self_1541_, lean_object* v_f_1542_, lean_object* v_prio_1543_, uint8_t v_sync_1544_){
_start:
{
lean_object* v___x_1546_; lean_object* v___x_1547_; 
v___x_1546_ = lean_apply_1(v_self_1541_, lean_box(0));
v___x_1547_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v_prio_1543_, v_sync_1544_, v___x_1546_, v_f_1542_);
return v___x_1547_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_bind___boxed(lean_object* v_00_u03b1_1548_, lean_object* v_00_u03b2_1549_, lean_object* v_self_1550_, lean_object* v_f_1551_, lean_object* v_prio_1552_, lean_object* v_sync_1553_, lean_object* v___y_1554_){
_start:
{
uint8_t v_sync_boxed_1555_; lean_object* v_res_1556_; 
v_sync_boxed_1555_ = lean_unbox(v_sync_1553_);
v_res_1556_ = l_Std_Async_BaseAsync_bind(v_00_u03b1_1548_, v_00_u03b2_1549_, v_self_1550_, v_f_1551_, v_prio_1552_, v_sync_boxed_1555_);
return v_res_1556_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_lift___redArg(lean_object* v_x_1557_){
_start:
{
lean_object* v___x_1559_; lean_object* v___x_1560_; 
v___x_1559_ = lean_apply_1(v_x_1557_, lean_box(0));
v___x_1560_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1560_, 0, v___x_1559_);
return v___x_1560_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_lift___redArg___boxed(lean_object* v_x_1561_, lean_object* v___y_1562_){
_start:
{
lean_object* v_res_1563_; 
v_res_1563_ = l_Std_Async_BaseAsync_lift___redArg(v_x_1561_);
return v_res_1563_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_lift(lean_object* v_00_u03b1_1564_, lean_object* v_x_1565_){
_start:
{
lean_object* v___x_1567_; lean_object* v___x_1568_; 
v___x_1567_ = lean_apply_1(v_x_1565_, lean_box(0));
v___x_1568_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1568_, 0, v___x_1567_);
return v___x_1568_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_lift___boxed(lean_object* v_00_u03b1_1569_, lean_object* v_x_1570_, lean_object* v___y_1571_){
_start:
{
lean_object* v_res_1572_; 
v_res_1572_ = l_Std_Async_BaseAsync_lift(v_00_u03b1_1569_, v_x_1570_);
return v_res_1572_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_wait___redArg(lean_object* v_self_1573_){
_start:
{
lean_object* v_val_1576_; lean_object* v___x_1578_; 
v___x_1578_ = lean_apply_1(v_self_1573_, lean_box(0));
if (lean_obj_tag(v___x_1578_) == 0)
{
lean_object* v_a_1579_; lean_object* v___x_1580_; 
v_a_1579_ = lean_ctor_get(v___x_1578_, 0);
lean_inc(v_a_1579_);
lean_dec_ref_known(v___x_1578_, 1);
v___x_1580_ = lean_task_pure(v_a_1579_);
v_val_1576_ = v___x_1580_;
goto v___jp_1575_;
}
else
{
lean_object* v_a_1581_; 
v_a_1581_ = lean_ctor_get(v___x_1578_, 0);
lean_inc_ref(v_a_1581_);
lean_dec_ref_known(v___x_1578_, 1);
v_val_1576_ = v_a_1581_;
goto v___jp_1575_;
}
v___jp_1575_:
{
lean_object* v___x_1577_; 
v___x_1577_ = lean_task_get_own(v_val_1576_);
return v___x_1577_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_wait___redArg___boxed(lean_object* v_self_1582_, lean_object* v___y_1583_){
_start:
{
lean_object* v_res_1584_; 
v_res_1584_ = l_Std_Async_BaseAsync_wait___redArg(v_self_1582_);
return v_res_1584_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_wait(lean_object* v_00_u03b1_1585_, lean_object* v_self_1586_){
_start:
{
lean_object* v_val_1589_; lean_object* v___x_1591_; 
v___x_1591_ = lean_apply_1(v_self_1586_, lean_box(0));
if (lean_obj_tag(v___x_1591_) == 0)
{
lean_object* v_a_1592_; lean_object* v___x_1593_; 
v_a_1592_ = lean_ctor_get(v___x_1591_, 0);
lean_inc(v_a_1592_);
lean_dec_ref_known(v___x_1591_, 1);
v___x_1593_ = lean_task_pure(v_a_1592_);
v_val_1589_ = v___x_1593_;
goto v___jp_1588_;
}
else
{
lean_object* v_a_1594_; 
v_a_1594_ = lean_ctor_get(v___x_1591_, 0);
lean_inc_ref(v_a_1594_);
lean_dec_ref_known(v___x_1591_, 1);
v_val_1589_ = v_a_1594_;
goto v___jp_1588_;
}
v___jp_1588_:
{
lean_object* v___x_1590_; 
v___x_1590_ = lean_task_get_own(v_val_1589_);
return v___x_1590_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_wait___boxed(lean_object* v_00_u03b1_1595_, lean_object* v_self_1596_, lean_object* v___y_1597_){
_start:
{
lean_object* v_res_1598_; 
v_res_1598_ = l_Std_Async_BaseAsync_wait(v_00_u03b1_1595_, v_self_1596_);
return v_res_1598_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_asTask___redArg(lean_object* v_x_1599_, lean_object* v_prio_1600_){
_start:
{
lean_object* v___f_1602_; lean_object* v___x_1603_; lean_object* v___x_1604_; lean_object* v___x_1605_; uint8_t v___x_1606_; lean_object* v___x_1607_; 
v___f_1602_ = ((lean_object*)(l_Std_Async_MaybeTask_joinTask___redArg___closed__0));
v___x_1603_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_toRawBaseIO___boxed), 3, 2);
lean_closure_set(v___x_1603_, 0, lean_box(0));
lean_closure_set(v___x_1603_, 1, v_x_1599_);
v___x_1604_ = lean_io_as_task(v___x_1603_, v_prio_1600_);
v___x_1605_ = lean_unsigned_to_nat(0u);
v___x_1606_ = 1;
v___x_1607_ = lean_task_bind(v___x_1604_, v___f_1602_, v___x_1605_, v___x_1606_);
return v___x_1607_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_asTask___redArg___boxed(lean_object* v_x_1608_, lean_object* v_prio_1609_, lean_object* v___y_1610_){
_start:
{
lean_object* v_res_1611_; 
v_res_1611_ = l_Std_Async_BaseAsync_asTask___redArg(v_x_1608_, v_prio_1609_);
return v_res_1611_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_asTask(lean_object* v_00_u03b1_1612_, lean_object* v_x_1613_, lean_object* v_prio_1614_){
_start:
{
lean_object* v___f_1616_; lean_object* v___x_1617_; lean_object* v___x_1618_; lean_object* v___x_1619_; uint8_t v___x_1620_; lean_object* v___x_1621_; 
v___f_1616_ = ((lean_object*)(l_Std_Async_MaybeTask_joinTask___redArg___closed__0));
v___x_1617_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_toRawBaseIO___boxed), 3, 2);
lean_closure_set(v___x_1617_, 0, lean_box(0));
lean_closure_set(v___x_1617_, 1, v_x_1613_);
v___x_1618_ = lean_io_as_task(v___x_1617_, v_prio_1614_);
v___x_1619_ = lean_unsigned_to_nat(0u);
v___x_1620_ = 1;
v___x_1621_ = lean_task_bind(v___x_1618_, v___f_1616_, v___x_1619_, v___x_1620_);
return v___x_1621_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_asTask___boxed(lean_object* v_00_u03b1_1622_, lean_object* v_x_1623_, lean_object* v_prio_1624_, lean_object* v___y_1625_){
_start:
{
lean_object* v_res_1626_; 
v_res_1626_ = l_Std_Async_BaseAsync_asTask(v_00_u03b1_1622_, v_x_1623_, v_prio_1624_);
return v_res_1626_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_await___redArg(lean_object* v_t_1627_){
_start:
{
lean_object* v___x_1629_; 
v___x_1629_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1629_, 0, v_t_1627_);
return v___x_1629_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_await___redArg___boxed(lean_object* v_t_1630_, lean_object* v___y_1631_){
_start:
{
lean_object* v_res_1632_; 
v_res_1632_ = l_Std_Async_BaseAsync_await___redArg(v_t_1630_);
return v_res_1632_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_await(lean_object* v_00_u03b1_1633_, lean_object* v_t_1634_){
_start:
{
lean_object* v___x_1636_; 
v___x_1636_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1636_, 0, v_t_1634_);
return v___x_1636_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_await___boxed(lean_object* v_00_u03b1_1637_, lean_object* v_t_1638_, lean_object* v___y_1639_){
_start:
{
lean_object* v_res_1640_; 
v_res_1640_ = l_Std_Async_BaseAsync_await(v_00_u03b1_1637_, v_t_1638_);
return v_res_1640_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_async___redArg(lean_object* v_self_1641_, lean_object* v_prio_1642_){
_start:
{
lean_object* v___f_1644_; lean_object* v___x_1645_; lean_object* v___x_1646_; lean_object* v___x_1647_; uint8_t v___x_1648_; lean_object* v___x_1649_; lean_object* v___x_1650_; 
v___f_1644_ = ((lean_object*)(l_Std_Async_MaybeTask_joinTask___redArg___closed__0));
v___x_1645_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_toRawBaseIO___boxed), 3, 2);
lean_closure_set(v___x_1645_, 0, lean_box(0));
lean_closure_set(v___x_1645_, 1, v_self_1641_);
v___x_1646_ = lean_io_as_task(v___x_1645_, v_prio_1642_);
v___x_1647_ = lean_unsigned_to_nat(0u);
v___x_1648_ = 1;
v___x_1649_ = lean_task_bind(v___x_1646_, v___f_1644_, v___x_1647_, v___x_1648_);
v___x_1650_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1650_, 0, v___x_1649_);
return v___x_1650_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_async___redArg___boxed(lean_object* v_self_1651_, lean_object* v_prio_1652_, lean_object* v___y_1653_){
_start:
{
lean_object* v_res_1654_; 
v_res_1654_ = l_Std_Async_BaseAsync_async___redArg(v_self_1651_, v_prio_1652_);
return v_res_1654_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_async(lean_object* v_00_u03b1_1655_, lean_object* v_self_1656_, lean_object* v_prio_1657_){
_start:
{
lean_object* v___f_1659_; lean_object* v___x_1660_; lean_object* v___x_1661_; lean_object* v___x_1662_; uint8_t v___x_1663_; lean_object* v___x_1664_; lean_object* v___x_1665_; 
v___f_1659_ = ((lean_object*)(l_Std_Async_MaybeTask_joinTask___redArg___closed__0));
v___x_1660_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_toRawBaseIO___boxed), 3, 2);
lean_closure_set(v___x_1660_, 0, lean_box(0));
lean_closure_set(v___x_1660_, 1, v_self_1656_);
v___x_1661_ = lean_io_as_task(v___x_1660_, v_prio_1657_);
v___x_1662_ = lean_unsigned_to_nat(0u);
v___x_1663_ = 1;
v___x_1664_ = lean_task_bind(v___x_1661_, v___f_1659_, v___x_1662_, v___x_1663_);
v___x_1665_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1665_, 0, v___x_1664_);
return v___x_1665_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_async___boxed(lean_object* v_00_u03b1_1666_, lean_object* v_self_1667_, lean_object* v_prio_1668_, lean_object* v___y_1669_){
_start:
{
lean_object* v_res_1670_; 
v_res_1670_ = l_Std_Async_BaseAsync_async(v_00_u03b1_1666_, v_self_1667_, v_prio_1668_);
return v_res_1670_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_instFunctor___lam__0(lean_object* v_00_u03b1_1671_, lean_object* v_00_u03b2_1672_, lean_object* v_f_1673_, lean_object* v_self_1674_){
_start:
{
lean_object* v___x_1676_; uint8_t v___x_1677_; lean_object* v___x_1678_; 
v___x_1676_ = lean_unsigned_to_nat(0u);
v___x_1677_ = 0;
v___x_1678_ = lean_apply_1(v_self_1674_, lean_box(0));
if (lean_obj_tag(v___x_1678_) == 0)
{
lean_object* v_a_1679_; lean_object* v___x_1681_; uint8_t v_isShared_1682_; uint8_t v_isSharedCheck_1687_; 
v_a_1679_ = lean_ctor_get(v___x_1678_, 0);
v_isSharedCheck_1687_ = !lean_is_exclusive(v___x_1678_);
if (v_isSharedCheck_1687_ == 0)
{
v___x_1681_ = v___x_1678_;
v_isShared_1682_ = v_isSharedCheck_1687_;
goto v_resetjp_1680_;
}
else
{
lean_inc(v_a_1679_);
lean_dec(v___x_1678_);
v___x_1681_ = lean_box(0);
v_isShared_1682_ = v_isSharedCheck_1687_;
goto v_resetjp_1680_;
}
v_resetjp_1680_:
{
lean_object* v___x_1683_; lean_object* v___x_1685_; 
v___x_1683_ = lean_apply_1(v_f_1673_, v_a_1679_);
if (v_isShared_1682_ == 0)
{
lean_ctor_set(v___x_1681_, 0, v___x_1683_);
v___x_1685_ = v___x_1681_;
goto v_reusejp_1684_;
}
else
{
lean_object* v_reuseFailAlloc_1686_; 
v_reuseFailAlloc_1686_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1686_, 0, v___x_1683_);
v___x_1685_ = v_reuseFailAlloc_1686_;
goto v_reusejp_1684_;
}
v_reusejp_1684_:
{
return v___x_1685_;
}
}
}
else
{
lean_object* v_a_1688_; lean_object* v___x_1690_; uint8_t v_isShared_1691_; uint8_t v_isSharedCheck_1696_; 
v_a_1688_ = lean_ctor_get(v___x_1678_, 0);
v_isSharedCheck_1696_ = !lean_is_exclusive(v___x_1678_);
if (v_isSharedCheck_1696_ == 0)
{
v___x_1690_ = v___x_1678_;
v_isShared_1691_ = v_isSharedCheck_1696_;
goto v_resetjp_1689_;
}
else
{
lean_inc(v_a_1688_);
lean_dec(v___x_1678_);
v___x_1690_ = lean_box(0);
v_isShared_1691_ = v_isSharedCheck_1696_;
goto v_resetjp_1689_;
}
v_resetjp_1689_:
{
lean_object* v___x_1692_; lean_object* v___x_1694_; 
v___x_1692_ = lean_task_map(v_f_1673_, v_a_1688_, v___x_1676_, v___x_1677_);
if (v_isShared_1691_ == 0)
{
lean_ctor_set(v___x_1690_, 0, v___x_1692_);
v___x_1694_ = v___x_1690_;
goto v_reusejp_1693_;
}
else
{
lean_object* v_reuseFailAlloc_1695_; 
v_reuseFailAlloc_1695_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1695_, 0, v___x_1692_);
v___x_1694_ = v_reuseFailAlloc_1695_;
goto v_reusejp_1693_;
}
v_reusejp_1693_:
{
return v___x_1694_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_instFunctor___lam__0___boxed(lean_object* v_00_u03b1_1697_, lean_object* v_00_u03b2_1698_, lean_object* v_f_1699_, lean_object* v_self_1700_, lean_object* v___y_1701_){
_start:
{
lean_object* v_res_1702_; 
v_res_1702_ = l_Std_Async_BaseAsync_instFunctor___lam__0(v_00_u03b1_1697_, v_00_u03b2_1698_, v_f_1699_, v_self_1700_);
return v_res_1702_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_instFunctor___lam__1(lean_object* v___f_1703_, lean_object* v_00_u03b1_1704_, lean_object* v_00_u03b2_1705_, lean_object* v___y_1706_, lean_object* v___y_1707_){
_start:
{
lean_object* v___x_1709_; lean_object* v___x_1710_; 
v___x_1709_ = lean_alloc_closure((void*)(l_Function_const___boxed), 4, 3);
lean_closure_set(v___x_1709_, 0, lean_box(0));
lean_closure_set(v___x_1709_, 1, lean_box(0));
lean_closure_set(v___x_1709_, 2, v___y_1706_);
v___x_1710_ = lean_apply_5(v___f_1703_, lean_box(0), lean_box(0), v___x_1709_, v___y_1707_, lean_box(0));
return v___x_1710_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_instFunctor___lam__1___boxed(lean_object* v___f_1711_, lean_object* v_00_u03b1_1712_, lean_object* v_00_u03b2_1713_, lean_object* v___y_1714_, lean_object* v___y_1715_, lean_object* v___y_1716_){
_start:
{
lean_object* v_res_1717_; 
v_res_1717_ = l_Std_Async_BaseAsync_instFunctor___lam__1(v___f_1711_, v_00_u03b1_1712_, v_00_u03b2_1713_, v___y_1714_, v___y_1715_);
return v_res_1717_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_instMonad___lam__0(lean_object* v_x_1725_, lean_object* v_y_1726_){
_start:
{
lean_object* v___x_1728_; lean_object* v___x_1729_; uint8_t v___x_1730_; lean_object* v___x_1731_; 
v___x_1728_ = lean_box(0);
v___x_1729_ = lean_unsigned_to_nat(0u);
v___x_1730_ = 0;
v___x_1731_ = lean_apply_2(v_x_1725_, v___x_1728_, lean_box(0));
if (lean_obj_tag(v___x_1731_) == 0)
{
lean_object* v_a_1732_; lean_object* v___x_1734_; uint8_t v_isShared_1735_; uint8_t v_isSharedCheck_1740_; 
v_a_1732_ = lean_ctor_get(v___x_1731_, 0);
v_isSharedCheck_1740_ = !lean_is_exclusive(v___x_1731_);
if (v_isSharedCheck_1740_ == 0)
{
v___x_1734_ = v___x_1731_;
v_isShared_1735_ = v_isSharedCheck_1740_;
goto v_resetjp_1733_;
}
else
{
lean_inc(v_a_1732_);
lean_dec(v___x_1731_);
v___x_1734_ = lean_box(0);
v_isShared_1735_ = v_isSharedCheck_1740_;
goto v_resetjp_1733_;
}
v_resetjp_1733_:
{
lean_object* v___x_1736_; lean_object* v___x_1738_; 
v___x_1736_ = lean_apply_1(v_y_1726_, v_a_1732_);
if (v_isShared_1735_ == 0)
{
lean_ctor_set(v___x_1734_, 0, v___x_1736_);
v___x_1738_ = v___x_1734_;
goto v_reusejp_1737_;
}
else
{
lean_object* v_reuseFailAlloc_1739_; 
v_reuseFailAlloc_1739_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1739_, 0, v___x_1736_);
v___x_1738_ = v_reuseFailAlloc_1739_;
goto v_reusejp_1737_;
}
v_reusejp_1737_:
{
return v___x_1738_;
}
}
}
else
{
lean_object* v_a_1741_; lean_object* v___x_1743_; uint8_t v_isShared_1744_; uint8_t v_isSharedCheck_1749_; 
v_a_1741_ = lean_ctor_get(v___x_1731_, 0);
v_isSharedCheck_1749_ = !lean_is_exclusive(v___x_1731_);
if (v_isSharedCheck_1749_ == 0)
{
v___x_1743_ = v___x_1731_;
v_isShared_1744_ = v_isSharedCheck_1749_;
goto v_resetjp_1742_;
}
else
{
lean_inc(v_a_1741_);
lean_dec(v___x_1731_);
v___x_1743_ = lean_box(0);
v_isShared_1744_ = v_isSharedCheck_1749_;
goto v_resetjp_1742_;
}
v_resetjp_1742_:
{
lean_object* v___x_1745_; lean_object* v___x_1747_; 
v___x_1745_ = lean_task_map(v_y_1726_, v_a_1741_, v___x_1729_, v___x_1730_);
if (v_isShared_1744_ == 0)
{
lean_ctor_set(v___x_1743_, 0, v___x_1745_);
v___x_1747_ = v___x_1743_;
goto v_reusejp_1746_;
}
else
{
lean_object* v_reuseFailAlloc_1748_; 
v_reuseFailAlloc_1748_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1748_, 0, v___x_1745_);
v___x_1747_ = v_reuseFailAlloc_1748_;
goto v_reusejp_1746_;
}
v_reusejp_1746_:
{
return v___x_1747_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_instMonad___lam__0___boxed(lean_object* v_x_1750_, lean_object* v_y_1751_, lean_object* v___y_1752_){
_start:
{
lean_object* v_res_1753_; 
v_res_1753_ = l_Std_Async_BaseAsync_instMonad___lam__0(v_x_1750_, v_y_1751_);
return v_res_1753_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_instMonad___lam__1(lean_object* v_00_u03b1_1754_, lean_object* v_00_u03b2_1755_, lean_object* v_f_1756_, lean_object* v_x_1757_){
_start:
{
lean_object* v___f_1759_; lean_object* v___x_1760_; uint8_t v___x_1761_; lean_object* v___x_1762_; lean_object* v___x_1763_; 
v___f_1759_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_instMonad___lam__0___boxed), 3, 1);
lean_closure_set(v___f_1759_, 0, v_x_1757_);
v___x_1760_ = lean_unsigned_to_nat(0u);
v___x_1761_ = 0;
v___x_1762_ = lean_apply_1(v_f_1756_, lean_box(0));
v___x_1763_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1760_, v___x_1761_, v___x_1762_, v___f_1759_);
return v___x_1763_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_instMonad___lam__1___boxed(lean_object* v_00_u03b1_1764_, lean_object* v_00_u03b2_1765_, lean_object* v_f_1766_, lean_object* v_x_1767_, lean_object* v___y_1768_){
_start:
{
lean_object* v_res_1769_; 
v_res_1769_ = l_Std_Async_BaseAsync_instMonad___lam__1(v_00_u03b1_1764_, v_00_u03b2_1765_, v_f_1766_, v_x_1767_);
return v_res_1769_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_instMonad___lam__2(lean_object* v_00_u03b1_1770_, lean_object* v_00_u03b2_1771_, lean_object* v_self_1772_, lean_object* v_f_1773_){
_start:
{
lean_object* v___x_1775_; uint8_t v___x_1776_; lean_object* v___x_1777_; lean_object* v___x_1778_; 
v___x_1775_ = lean_unsigned_to_nat(0u);
v___x_1776_ = 0;
v___x_1777_ = lean_apply_1(v_self_1772_, lean_box(0));
v___x_1778_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1775_, v___x_1776_, v___x_1777_, v_f_1773_);
return v___x_1778_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_instMonad___lam__2___boxed(lean_object* v_00_u03b1_1779_, lean_object* v_00_u03b2_1780_, lean_object* v_self_1781_, lean_object* v_f_1782_, lean_object* v___y_1783_){
_start:
{
lean_object* v_res_1784_; 
v_res_1784_ = l_Std_Async_BaseAsync_instMonad___lam__2(v_00_u03b1_1779_, v_00_u03b2_1780_, v_self_1781_, v_f_1782_);
return v_res_1784_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_instMonad___lam__3(lean_object* v_a_1785_, lean_object* v_x_1786_){
_start:
{
lean_object* v___x_1788_; 
v___x_1788_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1788_, 0, v_a_1785_);
return v___x_1788_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_instMonad___lam__3___boxed(lean_object* v_a_1789_, lean_object* v_x_1790_, lean_object* v___y_1791_){
_start:
{
lean_object* v_res_1792_; 
v_res_1792_ = l_Std_Async_BaseAsync_instMonad___lam__3(v_a_1789_, v_x_1790_);
lean_dec(v_x_1790_);
return v_res_1792_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_instMonad___lam__4(lean_object* v_y_1793_, lean_object* v___f_1794_, lean_object* v_a_1795_){
_start:
{
lean_object* v___f_1797_; lean_object* v___x_1798_; lean_object* v___x_1799_; lean_object* v___x_1800_; 
v___f_1797_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_instMonad___lam__3___boxed), 3, 1);
lean_closure_set(v___f_1797_, 0, v_a_1795_);
v___x_1798_ = lean_box(0);
v___x_1799_ = lean_apply_1(v_y_1793_, v___x_1798_);
v___x_1800_ = lean_apply_5(v___f_1794_, lean_box(0), lean_box(0), v___x_1799_, v___f_1797_, lean_box(0));
return v___x_1800_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_instMonad___lam__4___boxed(lean_object* v_y_1801_, lean_object* v___f_1802_, lean_object* v_a_1803_, lean_object* v___y_1804_){
_start:
{
lean_object* v_res_1805_; 
v_res_1805_ = l_Std_Async_BaseAsync_instMonad___lam__4(v_y_1801_, v___f_1802_, v_a_1803_);
return v_res_1805_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_instMonad___lam__5(lean_object* v___f_1806_, lean_object* v_00_u03b1_1807_, lean_object* v_00_u03b2_1808_, lean_object* v_x_1809_, lean_object* v_y_1810_){
_start:
{
lean_object* v___f_1812_; lean_object* v___x_1813_; 
lean_inc_ref(v___f_1806_);
v___f_1812_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_instMonad___lam__4___boxed), 4, 2);
lean_closure_set(v___f_1812_, 0, v_y_1810_);
lean_closure_set(v___f_1812_, 1, v___f_1806_);
v___x_1813_ = lean_apply_5(v___f_1806_, lean_box(0), lean_box(0), v_x_1809_, v___f_1812_, lean_box(0));
return v___x_1813_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_instMonad___lam__5___boxed(lean_object* v___f_1814_, lean_object* v_00_u03b1_1815_, lean_object* v_00_u03b2_1816_, lean_object* v_x_1817_, lean_object* v_y_1818_, lean_object* v___y_1819_){
_start:
{
lean_object* v_res_1820_; 
v_res_1820_ = l_Std_Async_BaseAsync_instMonad___lam__5(v___f_1814_, v_00_u03b1_1815_, v_00_u03b2_1816_, v_x_1817_, v_y_1818_);
return v_res_1820_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_instMonad___lam__6(lean_object* v_y_1821_, lean_object* v_x_1822_){
_start:
{
lean_object* v___x_1824_; lean_object* v___x_1825_; 
v___x_1824_ = lean_box(0);
v___x_1825_ = lean_apply_2(v_y_1821_, v___x_1824_, lean_box(0));
return v___x_1825_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_instMonad___lam__6___boxed(lean_object* v_y_1826_, lean_object* v_x_1827_, lean_object* v___y_1828_){
_start:
{
lean_object* v_res_1829_; 
v_res_1829_ = l_Std_Async_BaseAsync_instMonad___lam__6(v_y_1826_, v_x_1827_);
lean_dec(v_x_1827_);
return v_res_1829_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_instMonad___lam__7(lean_object* v_00_u03b1_1830_, lean_object* v_00_u03b2_1831_, lean_object* v_x_1832_, lean_object* v_y_1833_){
_start:
{
lean_object* v___f_1835_; lean_object* v___x_1836_; uint8_t v___x_1837_; lean_object* v___x_1838_; lean_object* v___x_1839_; 
v___f_1835_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_instMonad___lam__6___boxed), 3, 1);
lean_closure_set(v___f_1835_, 0, v_y_1833_);
v___x_1836_ = lean_unsigned_to_nat(0u);
v___x_1837_ = 0;
v___x_1838_ = lean_apply_1(v_x_1832_, lean_box(0));
v___x_1839_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1836_, v___x_1837_, v___x_1838_, v___f_1835_);
return v___x_1839_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_instMonad___lam__7___boxed(lean_object* v_00_u03b1_1840_, lean_object* v_00_u03b2_1841_, lean_object* v_x_1842_, lean_object* v_y_1843_, lean_object* v___y_1844_){
_start:
{
lean_object* v_res_1845_; 
v_res_1845_ = l_Std_Async_BaseAsync_instMonad___lam__7(v_00_u03b1_1840_, v_00_u03b2_1841_, v_x_1842_, v_y_1843_);
return v_res_1845_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_instMonadAsyncTask___lam__1(lean_object* v___f_1866_, lean_object* v_00_u03b1_1867_, lean_object* v_t_1868_, lean_object* v_prio_1869_){
_start:
{
lean_object* v___x_1871_; lean_object* v___x_1872_; lean_object* v___x_1873_; uint8_t v___x_1874_; lean_object* v___x_1875_; lean_object* v___x_1876_; 
v___x_1871_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_toRawBaseIO___boxed), 3, 2);
lean_closure_set(v___x_1871_, 0, lean_box(0));
lean_closure_set(v___x_1871_, 1, v_t_1868_);
v___x_1872_ = lean_io_as_task(v___x_1871_, v_prio_1869_);
v___x_1873_ = lean_unsigned_to_nat(0u);
v___x_1874_ = 1;
v___x_1875_ = lean_task_bind(v___x_1872_, v___f_1866_, v___x_1873_, v___x_1874_);
v___x_1876_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1876_, 0, v___x_1875_);
return v___x_1876_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_instMonadAsyncTask___lam__1___boxed(lean_object* v___f_1877_, lean_object* v_00_u03b1_1878_, lean_object* v_t_1879_, lean_object* v_prio_1880_, lean_object* v___y_1881_){
_start:
{
lean_object* v_res_1882_; 
v_res_1882_ = l_Std_Async_BaseAsync_instMonadAsyncTask___lam__1(v___f_1877_, v_00_u03b1_1878_, v_t_1879_, v_prio_1880_);
return v_res_1882_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_instInhabited___redArg___lam__0(lean_object* v___x_1886_){
_start:
{
lean_inc_ref(v___x_1886_);
return v___x_1886_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_instInhabited___redArg___lam__0___boxed(lean_object* v___x_1888_, lean_object* v___y_1889_){
_start:
{
lean_object* v_res_1890_; 
v_res_1890_ = l_Std_Async_BaseAsync_instInhabited___redArg___lam__0(v___x_1888_);
lean_dec_ref(v___x_1888_);
return v_res_1890_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_instInhabited___redArg(lean_object* v_inst_1891_){
_start:
{
lean_object* v___x_1892_; lean_object* v___f_1893_; lean_object* v___x_1894_; 
v___x_1892_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1892_, 0, v_inst_1891_);
v___f_1893_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_instInhabited___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_1893_, 0, v___x_1892_);
v___x_1894_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_mk___boxed), 3, 2);
lean_closure_set(v___x_1894_, 0, lean_box(0));
lean_closure_set(v___x_1894_, 1, v___f_1893_);
return v___x_1894_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_instInhabited(lean_object* v_00_u03b1_1895_, lean_object* v_inst_1896_){
_start:
{
lean_object* v___x_1897_; 
v___x_1897_ = l_Std_Async_BaseAsync_instInhabited___redArg(v_inst_1896_);
return v___x_1897_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_instMonadFinally___lam__0(lean_object* v_res_1898_, lean_object* v_snd_1899_){
_start:
{
lean_object* v___x_1900_; 
v___x_1900_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1900_, 0, v_res_1898_);
lean_ctor_set(v___x_1900_, 1, v_snd_1899_);
return v___x_1900_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_instMonadFinally___lam__1(lean_object* v_f_1901_, lean_object* v_res_1902_){
_start:
{
lean_object* v___f_1904_; lean_object* v___x_1905_; lean_object* v___x_1906_; uint8_t v___x_1907_; lean_object* v___x_1908_; 
lean_inc_n(v_res_1902_, 2);
v___f_1904_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_instMonadFinally___lam__0), 2, 1);
lean_closure_set(v___f_1904_, 0, v_res_1902_);
v___x_1905_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1905_, 0, v_res_1902_);
v___x_1906_ = lean_unsigned_to_nat(0u);
v___x_1907_ = 0;
v___x_1908_ = lean_apply_2(v_f_1901_, v___x_1905_, lean_box(0));
if (lean_obj_tag(v___x_1908_) == 0)
{
lean_object* v_a_1909_; lean_object* v___x_1911_; uint8_t v_isShared_1912_; uint8_t v_isSharedCheck_1917_; 
lean_dec_ref(v___f_1904_);
v_a_1909_ = lean_ctor_get(v___x_1908_, 0);
v_isSharedCheck_1917_ = !lean_is_exclusive(v___x_1908_);
if (v_isSharedCheck_1917_ == 0)
{
v___x_1911_ = v___x_1908_;
v_isShared_1912_ = v_isSharedCheck_1917_;
goto v_resetjp_1910_;
}
else
{
lean_inc(v_a_1909_);
lean_dec(v___x_1908_);
v___x_1911_ = lean_box(0);
v_isShared_1912_ = v_isSharedCheck_1917_;
goto v_resetjp_1910_;
}
v_resetjp_1910_:
{
lean_object* v___x_1913_; lean_object* v___x_1915_; 
v___x_1913_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1913_, 0, v_res_1902_);
lean_ctor_set(v___x_1913_, 1, v_a_1909_);
if (v_isShared_1912_ == 0)
{
lean_ctor_set(v___x_1911_, 0, v___x_1913_);
v___x_1915_ = v___x_1911_;
goto v_reusejp_1914_;
}
else
{
lean_object* v_reuseFailAlloc_1916_; 
v_reuseFailAlloc_1916_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1916_, 0, v___x_1913_);
v___x_1915_ = v_reuseFailAlloc_1916_;
goto v_reusejp_1914_;
}
v_reusejp_1914_:
{
return v___x_1915_;
}
}
}
else
{
lean_object* v_a_1918_; lean_object* v___x_1920_; uint8_t v_isShared_1921_; uint8_t v_isSharedCheck_1926_; 
lean_dec(v_res_1902_);
v_a_1918_ = lean_ctor_get(v___x_1908_, 0);
v_isSharedCheck_1926_ = !lean_is_exclusive(v___x_1908_);
if (v_isSharedCheck_1926_ == 0)
{
v___x_1920_ = v___x_1908_;
v_isShared_1921_ = v_isSharedCheck_1926_;
goto v_resetjp_1919_;
}
else
{
lean_inc(v_a_1918_);
lean_dec(v___x_1908_);
v___x_1920_ = lean_box(0);
v_isShared_1921_ = v_isSharedCheck_1926_;
goto v_resetjp_1919_;
}
v_resetjp_1919_:
{
lean_object* v___x_1922_; lean_object* v___x_1924_; 
v___x_1922_ = lean_task_map(v___f_1904_, v_a_1918_, v___x_1906_, v___x_1907_);
if (v_isShared_1921_ == 0)
{
lean_ctor_set(v___x_1920_, 0, v___x_1922_);
v___x_1924_ = v___x_1920_;
goto v_reusejp_1923_;
}
else
{
lean_object* v_reuseFailAlloc_1925_; 
v_reuseFailAlloc_1925_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1925_, 0, v___x_1922_);
v___x_1924_ = v_reuseFailAlloc_1925_;
goto v_reusejp_1923_;
}
v_reusejp_1923_:
{
return v___x_1924_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_instMonadFinally___lam__1___boxed(lean_object* v_f_1927_, lean_object* v_res_1928_, lean_object* v___y_1929_){
_start:
{
lean_object* v_res_1930_; 
v_res_1930_ = l_Std_Async_BaseAsync_instMonadFinally___lam__1(v_f_1927_, v_res_1928_);
return v_res_1930_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_instMonadFinally___lam__2(lean_object* v_00_u03b1_1931_, lean_object* v_00_u03b2_1932_, lean_object* v_x_1933_, lean_object* v_f_1934_){
_start:
{
lean_object* v___f_1936_; lean_object* v___x_1937_; uint8_t v___x_1938_; lean_object* v___x_1939_; lean_object* v___x_1940_; 
v___f_1936_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_instMonadFinally___lam__1___boxed), 3, 1);
lean_closure_set(v___f_1936_, 0, v_f_1934_);
v___x_1937_ = lean_unsigned_to_nat(0u);
v___x_1938_ = 0;
v___x_1939_ = lean_apply_1(v_x_1933_, lean_box(0));
v___x_1940_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1937_, v___x_1938_, v___x_1939_, v___f_1936_);
return v___x_1940_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_instMonadFinally___lam__2___boxed(lean_object* v_00_u03b1_1941_, lean_object* v_00_u03b2_1942_, lean_object* v_x_1943_, lean_object* v_f_1944_, lean_object* v___y_1945_){
_start:
{
lean_object* v_res_1946_; 
v_res_1946_ = l_Std_Async_BaseAsync_instMonadFinally___lam__2(v_00_u03b1_1941_, v_00_u03b2_1942_, v_x_1943_, v_f_1944_);
return v_res_1946_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_ofExcept___redArg(lean_object* v_except_1949_){
_start:
{
lean_object* v_a_1951_; lean_object* v___x_1953_; uint8_t v_isShared_1954_; uint8_t v_isSharedCheck_1958_; 
v_a_1951_ = lean_ctor_get(v_except_1949_, 0);
v_isSharedCheck_1958_ = !lean_is_exclusive(v_except_1949_);
if (v_isSharedCheck_1958_ == 0)
{
v___x_1953_ = v_except_1949_;
v_isShared_1954_ = v_isSharedCheck_1958_;
goto v_resetjp_1952_;
}
else
{
lean_inc(v_a_1951_);
lean_dec(v_except_1949_);
v___x_1953_ = lean_box(0);
v_isShared_1954_ = v_isSharedCheck_1958_;
goto v_resetjp_1952_;
}
v_resetjp_1952_:
{
lean_object* v___x_1956_; 
if (v_isShared_1954_ == 0)
{
lean_ctor_set_tag(v___x_1953_, 0);
v___x_1956_ = v___x_1953_;
goto v_reusejp_1955_;
}
else
{
lean_object* v_reuseFailAlloc_1957_; 
v_reuseFailAlloc_1957_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1957_, 0, v_a_1951_);
v___x_1956_ = v_reuseFailAlloc_1957_;
goto v_reusejp_1955_;
}
v_reusejp_1955_:
{
return v___x_1956_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_ofExcept___redArg___boxed(lean_object* v_except_1959_, lean_object* v___y_1960_){
_start:
{
lean_object* v_res_1961_; 
v_res_1961_ = l_Std_Async_BaseAsync_ofExcept___redArg(v_except_1959_);
return v_res_1961_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_ofExcept(lean_object* v_00_u03b1_1962_, lean_object* v_except_1963_){
_start:
{
lean_object* v_a_1965_; lean_object* v___x_1967_; uint8_t v_isShared_1968_; uint8_t v_isSharedCheck_1972_; 
v_a_1965_ = lean_ctor_get(v_except_1963_, 0);
v_isSharedCheck_1972_ = !lean_is_exclusive(v_except_1963_);
if (v_isSharedCheck_1972_ == 0)
{
v___x_1967_ = v_except_1963_;
v_isShared_1968_ = v_isSharedCheck_1972_;
goto v_resetjp_1966_;
}
else
{
lean_inc(v_a_1965_);
lean_dec(v_except_1963_);
v___x_1967_ = lean_box(0);
v_isShared_1968_ = v_isSharedCheck_1972_;
goto v_resetjp_1966_;
}
v_resetjp_1966_:
{
lean_object* v___x_1970_; 
if (v_isShared_1968_ == 0)
{
lean_ctor_set_tag(v___x_1967_, 0);
v___x_1970_ = v___x_1967_;
goto v_reusejp_1969_;
}
else
{
lean_object* v_reuseFailAlloc_1971_; 
v_reuseFailAlloc_1971_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1971_, 0, v_a_1965_);
v___x_1970_ = v_reuseFailAlloc_1971_;
goto v_reusejp_1969_;
}
v_reusejp_1969_:
{
return v___x_1970_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_ofExcept___boxed(lean_object* v_00_u03b1_1973_, lean_object* v_except_1974_, lean_object* v___y_1975_){
_start:
{
lean_object* v_res_1976_; 
v_res_1976_ = l_Std_Async_BaseAsync_ofExcept(v_00_u03b1_1973_, v_except_1974_);
return v_res_1976_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_concurrently___redArg___lam__1(lean_object* v_resultX_1977_, lean_object* v_resultY_1978_){
_start:
{
lean_object* v___x_1980_; lean_object* v___x_1981_; 
v___x_1980_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1980_, 0, v_resultX_1977_);
lean_ctor_set(v___x_1980_, 1, v_resultY_1978_);
v___x_1981_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1981_, 0, v___x_1980_);
return v___x_1981_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_concurrently___redArg___lam__1___boxed(lean_object* v_resultX_1982_, lean_object* v_resultY_1983_, lean_object* v___y_1984_){
_start:
{
lean_object* v_res_1985_; 
v_res_1985_ = l_Std_Async_BaseAsync_concurrently___redArg___lam__1(v_resultX_1982_, v_resultY_1983_);
return v_res_1985_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_concurrently___redArg___lam__0(lean_object* v_taskY_1986_, lean_object* v_resultX_1987_){
_start:
{
lean_object* v___f_1989_; lean_object* v___x_1990_; uint8_t v___x_1991_; lean_object* v___x_1992_; lean_object* v___x_1993_; 
v___f_1989_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_concurrently___redArg___lam__1___boxed), 3, 1);
lean_closure_set(v___f_1989_, 0, v_resultX_1987_);
v___x_1990_ = lean_unsigned_to_nat(0u);
v___x_1991_ = 0;
v___x_1992_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1992_, 0, v_taskY_1986_);
v___x_1993_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1990_, v___x_1991_, v___x_1992_, v___f_1989_);
return v___x_1993_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_concurrently___redArg___lam__0___boxed(lean_object* v_taskY_1994_, lean_object* v_resultX_1995_, lean_object* v___y_1996_){
_start:
{
lean_object* v_res_1997_; 
v_res_1997_ = l_Std_Async_BaseAsync_concurrently___redArg___lam__0(v_taskY_1994_, v_resultX_1995_);
return v_res_1997_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_concurrently___redArg___lam__2(lean_object* v_taskX_1998_, lean_object* v_taskY_1999_){
_start:
{
lean_object* v___f_2001_; lean_object* v___x_2002_; uint8_t v___x_2003_; lean_object* v___x_2004_; lean_object* v___x_2005_; 
v___f_2001_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_concurrently___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_2001_, 0, v_taskY_1999_);
v___x_2002_ = lean_unsigned_to_nat(0u);
v___x_2003_ = 0;
v___x_2004_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2004_, 0, v_taskX_1998_);
v___x_2005_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2002_, v___x_2003_, v___x_2004_, v___f_2001_);
return v___x_2005_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_concurrently___redArg___lam__2___boxed(lean_object* v_taskX_2006_, lean_object* v_taskY_2007_, lean_object* v___y_2008_){
_start:
{
lean_object* v_res_2009_; 
v_res_2009_ = l_Std_Async_BaseAsync_concurrently___redArg___lam__2(v_taskX_2006_, v_taskY_2007_);
return v_res_2009_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_concurrently___redArg___lam__3(lean_object* v_y_2010_, lean_object* v_prio_2011_, lean_object* v___f_2012_, lean_object* v_taskX_2013_){
_start:
{
lean_object* v___f_2015_; lean_object* v___x_2016_; uint8_t v___x_2017_; lean_object* v___x_2018_; lean_object* v___x_2019_; uint8_t v___x_2020_; lean_object* v___x_2021_; lean_object* v___x_2022_; lean_object* v___x_2023_; 
v___f_2015_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_concurrently___redArg___lam__2___boxed), 3, 1);
lean_closure_set(v___f_2015_, 0, v_taskX_2013_);
v___x_2016_ = lean_unsigned_to_nat(0u);
v___x_2017_ = 0;
v___x_2018_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_toRawBaseIO___boxed), 3, 2);
lean_closure_set(v___x_2018_, 0, lean_box(0));
lean_closure_set(v___x_2018_, 1, v_y_2010_);
v___x_2019_ = lean_io_as_task(v___x_2018_, v_prio_2011_);
v___x_2020_ = 1;
v___x_2021_ = lean_task_bind(v___x_2019_, v___f_2012_, v___x_2016_, v___x_2020_);
v___x_2022_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2022_, 0, v___x_2021_);
v___x_2023_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2016_, v___x_2017_, v___x_2022_, v___f_2015_);
return v___x_2023_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_concurrently___redArg___lam__3___boxed(lean_object* v_y_2024_, lean_object* v_prio_2025_, lean_object* v___f_2026_, lean_object* v_taskX_2027_, lean_object* v___y_2028_){
_start:
{
lean_object* v_res_2029_; 
v_res_2029_ = l_Std_Async_BaseAsync_concurrently___redArg___lam__3(v_y_2024_, v_prio_2025_, v___f_2026_, v_taskX_2027_);
return v_res_2029_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_concurrently___redArg(lean_object* v_x_2030_, lean_object* v_y_2031_, lean_object* v_prio_2032_){
_start:
{
lean_object* v___f_2034_; lean_object* v___f_2035_; lean_object* v___x_2036_; uint8_t v___x_2037_; lean_object* v___x_2038_; lean_object* v___x_2039_; uint8_t v___x_2040_; lean_object* v___x_2041_; lean_object* v___x_2042_; lean_object* v___x_2043_; 
v___f_2034_ = ((lean_object*)(l_Std_Async_MaybeTask_joinTask___redArg___closed__0));
lean_inc(v_prio_2032_);
v___f_2035_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_concurrently___redArg___lam__3___boxed), 5, 3);
lean_closure_set(v___f_2035_, 0, v_y_2031_);
lean_closure_set(v___f_2035_, 1, v_prio_2032_);
lean_closure_set(v___f_2035_, 2, v___f_2034_);
v___x_2036_ = lean_unsigned_to_nat(0u);
v___x_2037_ = 0;
v___x_2038_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_toRawBaseIO___boxed), 3, 2);
lean_closure_set(v___x_2038_, 0, lean_box(0));
lean_closure_set(v___x_2038_, 1, v_x_2030_);
v___x_2039_ = lean_io_as_task(v___x_2038_, v_prio_2032_);
v___x_2040_ = 1;
v___x_2041_ = lean_task_bind(v___x_2039_, v___f_2034_, v___x_2036_, v___x_2040_);
v___x_2042_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2042_, 0, v___x_2041_);
v___x_2043_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2036_, v___x_2037_, v___x_2042_, v___f_2035_);
return v___x_2043_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_concurrently___redArg___boxed(lean_object* v_x_2044_, lean_object* v_y_2045_, lean_object* v_prio_2046_, lean_object* v___y_2047_){
_start:
{
lean_object* v_res_2048_; 
v_res_2048_ = l_Std_Async_BaseAsync_concurrently___redArg(v_x_2044_, v_y_2045_, v_prio_2046_);
return v_res_2048_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_concurrently(lean_object* v_00_u03b1_2049_, lean_object* v_00_u03b2_2050_, lean_object* v_x_2051_, lean_object* v_y_2052_, lean_object* v_prio_2053_){
_start:
{
lean_object* v___f_2055_; lean_object* v___f_2056_; lean_object* v___x_2057_; uint8_t v___x_2058_; lean_object* v___x_2059_; lean_object* v___x_2060_; uint8_t v___x_2061_; lean_object* v___x_2062_; lean_object* v___x_2063_; lean_object* v___x_2064_; 
v___f_2055_ = ((lean_object*)(l_Std_Async_MaybeTask_joinTask___redArg___closed__0));
lean_inc(v_prio_2053_);
v___f_2056_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_concurrently___redArg___lam__3___boxed), 5, 3);
lean_closure_set(v___f_2056_, 0, v_y_2052_);
lean_closure_set(v___f_2056_, 1, v_prio_2053_);
lean_closure_set(v___f_2056_, 2, v___f_2055_);
v___x_2057_ = lean_unsigned_to_nat(0u);
v___x_2058_ = 0;
v___x_2059_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_toRawBaseIO___boxed), 3, 2);
lean_closure_set(v___x_2059_, 0, lean_box(0));
lean_closure_set(v___x_2059_, 1, v_x_2051_);
v___x_2060_ = lean_io_as_task(v___x_2059_, v_prio_2053_);
v___x_2061_ = 1;
v___x_2062_ = lean_task_bind(v___x_2060_, v___f_2055_, v___x_2057_, v___x_2061_);
v___x_2063_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2063_, 0, v___x_2062_);
v___x_2064_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2057_, v___x_2058_, v___x_2063_, v___f_2056_);
return v___x_2064_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_concurrently___boxed(lean_object* v_00_u03b1_2065_, lean_object* v_00_u03b2_2066_, lean_object* v_x_2067_, lean_object* v_y_2068_, lean_object* v_prio_2069_, lean_object* v___y_2070_){
_start:
{
lean_object* v_res_2071_; 
v_res_2071_ = l_Std_Async_BaseAsync_concurrently(v_00_u03b1_2065_, v_00_u03b2_2066_, v_x_2067_, v_y_2068_, v_prio_2069_);
return v_res_2071_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_race___redArg___lam__2(lean_object* v_promise_2072_, lean_object* v_value_2073_){
_start:
{
lean_object* v___x_2075_; 
v___x_2075_ = lean_io_promise_resolve(v_value_2073_, v_promise_2072_);
return v___x_2075_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_race___redArg___lam__2___boxed(lean_object* v_promise_2076_, lean_object* v_value_2077_, lean_object* v___y_2078_){
_start:
{
lean_object* v_res_2079_; 
v_res_2079_ = l_Std_Async_BaseAsync_race___redArg___lam__2(v_promise_2076_, v_value_2077_);
lean_dec(v_promise_2076_);
return v_res_2079_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_race___redArg___lam__0(lean_object* v_promise_2080_, lean_object* v_____r_2081_){
_start:
{
lean_object* v___x_2083_; lean_object* v___x_2084_; 
v___x_2083_ = l_IO_Promise_result_x21___redArg(v_promise_2080_);
v___x_2084_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2084_, 0, v___x_2083_);
return v___x_2084_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_race___redArg___lam__0___boxed(lean_object* v_promise_2085_, lean_object* v_____r_2086_, lean_object* v___y_2087_){
_start:
{
lean_object* v_res_2088_; 
v_res_2088_ = l_Std_Async_BaseAsync_race___redArg___lam__0(v_promise_2085_, v_____r_2086_);
lean_dec(v_promise_2085_);
return v_res_2088_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_race___redArg___lam__1(lean_object* v_task_u2082_2089_, lean_object* v___x_2090_, lean_object* v___x_2091_, uint8_t v___x_2092_, lean_object* v___f_2093_, lean_object* v_____r_2094_){
_start:
{
lean_object* v___x_2096_; lean_object* v___x_2097_; lean_object* v___x_2098_; 
lean_inc(v___x_2091_);
v___x_2096_ = l_BaseIO_chainTask___redArg(v_task_u2082_2089_, v___x_2090_, v___x_2091_, v___x_2092_);
v___x_2097_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2097_, 0, v___x_2096_);
v___x_2098_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2091_, v___x_2092_, v___x_2097_, v___f_2093_);
return v___x_2098_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_race___redArg___lam__1___boxed(lean_object* v_task_u2082_2099_, lean_object* v___x_2100_, lean_object* v___x_2101_, lean_object* v___x_2102_, lean_object* v___f_2103_, lean_object* v_____r_2104_, lean_object* v___y_2105_){
_start:
{
uint8_t v___x_635__boxed_2106_; lean_object* v_res_2107_; 
v___x_635__boxed_2106_ = lean_unbox(v___x_2102_);
v_res_2107_ = l_Std_Async_BaseAsync_race___redArg___lam__1(v_task_u2082_2099_, v___x_2100_, v___x_2101_, v___x_635__boxed_2106_, v___f_2103_, v_____r_2104_);
return v_res_2107_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_race___redArg___lam__3(lean_object* v___f_2108_, lean_object* v___f_2109_, lean_object* v___f_2110_, lean_object* v_task_u2081_2111_, lean_object* v_task_u2082_2112_){
_start:
{
lean_object* v___x_2114_; lean_object* v___x_2115_; lean_object* v___x_2116_; uint8_t v___x_2117_; lean_object* v___x_2118_; lean_object* v___f_2119_; lean_object* v___x_2120_; lean_object* v___x_2121_; lean_object* v___x_2122_; 
v___x_2114_ = lean_alloc_closure((void*)(l_liftM), 5, 4);
lean_closure_set(v___x_2114_, 0, lean_box(0));
lean_closure_set(v___x_2114_, 1, lean_box(0));
lean_closure_set(v___x_2114_, 2, v___f_2108_);
lean_closure_set(v___x_2114_, 3, lean_box(0));
v___x_2115_ = lean_alloc_closure((void*)(l_Function_comp), 6, 5);
lean_closure_set(v___x_2115_, 0, lean_box(0));
lean_closure_set(v___x_2115_, 1, lean_box(0));
lean_closure_set(v___x_2115_, 2, lean_box(0));
lean_closure_set(v___x_2115_, 3, v___x_2114_);
lean_closure_set(v___x_2115_, 4, v___f_2109_);
v___x_2116_ = lean_unsigned_to_nat(0u);
v___x_2117_ = 0;
v___x_2118_ = lean_box(v___x_2117_);
lean_inc_ref(v___x_2115_);
v___f_2119_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_race___redArg___lam__1___boxed), 7, 5);
lean_closure_set(v___f_2119_, 0, v_task_u2082_2112_);
lean_closure_set(v___f_2119_, 1, v___x_2115_);
lean_closure_set(v___f_2119_, 2, v___x_2116_);
lean_closure_set(v___f_2119_, 3, v___x_2118_);
lean_closure_set(v___f_2119_, 4, v___f_2110_);
v___x_2120_ = l_BaseIO_chainTask___redArg(v_task_u2081_2111_, v___x_2115_, v___x_2116_, v___x_2117_);
v___x_2121_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2121_, 0, v___x_2120_);
v___x_2122_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2116_, v___x_2117_, v___x_2121_, v___f_2119_);
return v___x_2122_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_race___redArg___lam__3___boxed(lean_object* v___f_2123_, lean_object* v___f_2124_, lean_object* v___f_2125_, lean_object* v_task_u2081_2126_, lean_object* v_task_u2082_2127_, lean_object* v___y_2128_){
_start:
{
lean_object* v_res_2129_; 
v_res_2129_ = l_Std_Async_BaseAsync_race___redArg___lam__3(v___f_2123_, v___f_2124_, v___f_2125_, v_task_u2081_2126_, v_task_u2082_2127_);
return v_res_2129_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_race___redArg___lam__4(lean_object* v___f_2130_, lean_object* v___f_2131_, lean_object* v___f_2132_, lean_object* v_y_2133_, lean_object* v_prio_2134_, lean_object* v___f_2135_, lean_object* v_task_u2081_2136_){
_start:
{
lean_object* v___f_2138_; lean_object* v___x_2139_; uint8_t v___x_2140_; lean_object* v___x_2141_; lean_object* v___x_2142_; uint8_t v___x_2143_; lean_object* v___x_2144_; lean_object* v___x_2145_; lean_object* v___x_2146_; 
v___f_2138_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_race___redArg___lam__3___boxed), 6, 4);
lean_closure_set(v___f_2138_, 0, v___f_2130_);
lean_closure_set(v___f_2138_, 1, v___f_2131_);
lean_closure_set(v___f_2138_, 2, v___f_2132_);
lean_closure_set(v___f_2138_, 3, v_task_u2081_2136_);
v___x_2139_ = lean_unsigned_to_nat(0u);
v___x_2140_ = 0;
v___x_2141_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_toRawBaseIO___boxed), 3, 2);
lean_closure_set(v___x_2141_, 0, lean_box(0));
lean_closure_set(v___x_2141_, 1, v_y_2133_);
v___x_2142_ = lean_io_as_task(v___x_2141_, v_prio_2134_);
v___x_2143_ = 1;
v___x_2144_ = lean_task_bind(v___x_2142_, v___f_2135_, v___x_2139_, v___x_2143_);
v___x_2145_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2145_, 0, v___x_2144_);
v___x_2146_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2139_, v___x_2140_, v___x_2145_, v___f_2138_);
return v___x_2146_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_race___redArg___lam__4___boxed(lean_object* v___f_2147_, lean_object* v___f_2148_, lean_object* v___f_2149_, lean_object* v_y_2150_, lean_object* v_prio_2151_, lean_object* v___f_2152_, lean_object* v_task_u2081_2153_, lean_object* v___y_2154_){
_start:
{
lean_object* v_res_2155_; 
v_res_2155_ = l_Std_Async_BaseAsync_race___redArg___lam__4(v___f_2147_, v___f_2148_, v___f_2149_, v_y_2150_, v_prio_2151_, v___f_2152_, v_task_u2081_2153_);
return v_res_2155_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_race___redArg___lam__5(lean_object* v___f_2156_, lean_object* v_y_2157_, lean_object* v_prio_2158_, lean_object* v___f_2159_, lean_object* v_x_2160_, lean_object* v___f_2161_, lean_object* v_promise_2162_){
_start:
{
lean_object* v___f_2164_; lean_object* v___f_2165_; lean_object* v___f_2166_; lean_object* v___x_2167_; uint8_t v___x_2168_; lean_object* v___x_2169_; lean_object* v___x_2170_; uint8_t v___x_2171_; lean_object* v___x_2172_; lean_object* v___x_2173_; lean_object* v___x_2174_; 
lean_inc(v_promise_2162_);
v___f_2164_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_race___redArg___lam__2___boxed), 3, 1);
lean_closure_set(v___f_2164_, 0, v_promise_2162_);
v___f_2165_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_race___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_2165_, 0, v_promise_2162_);
lean_inc(v_prio_2158_);
v___f_2166_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_race___redArg___lam__4___boxed), 8, 6);
lean_closure_set(v___f_2166_, 0, v___f_2156_);
lean_closure_set(v___f_2166_, 1, v___f_2164_);
lean_closure_set(v___f_2166_, 2, v___f_2165_);
lean_closure_set(v___f_2166_, 3, v_y_2157_);
lean_closure_set(v___f_2166_, 4, v_prio_2158_);
lean_closure_set(v___f_2166_, 5, v___f_2159_);
v___x_2167_ = lean_unsigned_to_nat(0u);
v___x_2168_ = 0;
v___x_2169_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_toRawBaseIO___boxed), 3, 2);
lean_closure_set(v___x_2169_, 0, lean_box(0));
lean_closure_set(v___x_2169_, 1, v_x_2160_);
v___x_2170_ = lean_io_as_task(v___x_2169_, v_prio_2158_);
v___x_2171_ = 1;
v___x_2172_ = lean_task_bind(v___x_2170_, v___f_2161_, v___x_2167_, v___x_2171_);
v___x_2173_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2173_, 0, v___x_2172_);
v___x_2174_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2167_, v___x_2168_, v___x_2173_, v___f_2166_);
return v___x_2174_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_race___redArg___lam__5___boxed(lean_object* v___f_2175_, lean_object* v_y_2176_, lean_object* v_prio_2177_, lean_object* v___f_2178_, lean_object* v_x_2179_, lean_object* v___f_2180_, lean_object* v_promise_2181_, lean_object* v___y_2182_){
_start:
{
lean_object* v_res_2183_; 
v_res_2183_ = l_Std_Async_BaseAsync_race___redArg___lam__5(v___f_2175_, v_y_2176_, v_prio_2177_, v___f_2178_, v_x_2179_, v___f_2180_, v_promise_2181_);
return v_res_2183_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_race___redArg(lean_object* v_x_2185_, lean_object* v_y_2186_, lean_object* v_prio_2187_){
_start:
{
lean_object* v___f_2189_; lean_object* v___f_2190_; lean_object* v___f_2191_; lean_object* v___x_2192_; uint8_t v___x_2193_; lean_object* v___x_2194_; lean_object* v___x_2195_; lean_object* v___x_2196_; 
v___f_2189_ = ((lean_object*)(l_Std_Async_MaybeTask_joinTask___redArg___closed__0));
v___f_2190_ = ((lean_object*)(l_Std_Async_BaseAsync_race___redArg___closed__0));
v___f_2191_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_race___redArg___lam__5___boxed), 8, 6);
lean_closure_set(v___f_2191_, 0, v___f_2190_);
lean_closure_set(v___f_2191_, 1, v_y_2186_);
lean_closure_set(v___f_2191_, 2, v_prio_2187_);
lean_closure_set(v___f_2191_, 3, v___f_2189_);
lean_closure_set(v___f_2191_, 4, v_x_2185_);
lean_closure_set(v___f_2191_, 5, v___f_2189_);
v___x_2192_ = lean_unsigned_to_nat(0u);
v___x_2193_ = 0;
v___x_2194_ = lean_io_promise_new();
v___x_2195_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2195_, 0, v___x_2194_);
v___x_2196_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2192_, v___x_2193_, v___x_2195_, v___f_2191_);
return v___x_2196_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_race___redArg___boxed(lean_object* v_x_2197_, lean_object* v_y_2198_, lean_object* v_prio_2199_, lean_object* v___y_2200_){
_start:
{
lean_object* v_res_2201_; 
v_res_2201_ = l_Std_Async_BaseAsync_race___redArg(v_x_2197_, v_y_2198_, v_prio_2199_);
return v_res_2201_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_race(lean_object* v_00_u03b1_2202_, lean_object* v_inst_2203_, lean_object* v_x_2204_, lean_object* v_y_2205_, lean_object* v_prio_2206_){
_start:
{
lean_object* v___f_2208_; lean_object* v___f_2209_; lean_object* v___f_2210_; lean_object* v___x_2211_; uint8_t v___x_2212_; lean_object* v___x_2213_; lean_object* v___x_2214_; lean_object* v___x_2215_; 
v___f_2208_ = ((lean_object*)(l_Std_Async_MaybeTask_joinTask___redArg___closed__0));
v___f_2209_ = ((lean_object*)(l_Std_Async_BaseAsync_race___redArg___closed__0));
v___f_2210_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_race___redArg___lam__5___boxed), 8, 6);
lean_closure_set(v___f_2210_, 0, v___f_2209_);
lean_closure_set(v___f_2210_, 1, v_y_2205_);
lean_closure_set(v___f_2210_, 2, v_prio_2206_);
lean_closure_set(v___f_2210_, 3, v___f_2208_);
lean_closure_set(v___f_2210_, 4, v_x_2204_);
lean_closure_set(v___f_2210_, 5, v___f_2208_);
v___x_2211_ = lean_unsigned_to_nat(0u);
v___x_2212_ = 0;
v___x_2213_ = lean_io_promise_new();
v___x_2214_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2214_, 0, v___x_2213_);
v___x_2215_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2211_, v___x_2212_, v___x_2214_, v___f_2210_);
return v___x_2215_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_race___boxed(lean_object* v_00_u03b1_2216_, lean_object* v_inst_2217_, lean_object* v_x_2218_, lean_object* v_y_2219_, lean_object* v_prio_2220_, lean_object* v___y_2221_){
_start:
{
lean_object* v_res_2222_; 
v_res_2222_ = l_Std_Async_BaseAsync_race(v_00_u03b1_2216_, v_inst_2217_, v_x_2218_, v_y_2219_, v_prio_2220_);
lean_dec(v_inst_2217_);
return v_res_2222_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_concurrentlyAll___redArg___lam__1(lean_object* v_prio_2223_, lean_object* v___f_2224_, lean_object* v_x_2225_){
_start:
{
lean_object* v___x_2227_; lean_object* v___x_2228_; lean_object* v___x_2229_; uint8_t v___x_2230_; lean_object* v___x_2231_; lean_object* v___x_2232_; 
v___x_2227_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_toRawBaseIO___boxed), 3, 2);
lean_closure_set(v___x_2227_, 0, lean_box(0));
lean_closure_set(v___x_2227_, 1, v_x_2225_);
v___x_2228_ = lean_io_as_task(v___x_2227_, v_prio_2223_);
v___x_2229_ = lean_unsigned_to_nat(0u);
v___x_2230_ = 1;
v___x_2231_ = lean_task_bind(v___x_2228_, v___f_2224_, v___x_2229_, v___x_2230_);
v___x_2232_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2232_, 0, v___x_2231_);
return v___x_2232_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_concurrentlyAll___redArg___lam__1___boxed(lean_object* v_prio_2233_, lean_object* v___f_2234_, lean_object* v_x_2235_, lean_object* v___y_2236_){
_start:
{
lean_object* v_res_2237_; 
v_res_2237_ = l_Std_Async_BaseAsync_concurrentlyAll___redArg___lam__1(v_prio_2233_, v___f_2234_, v_x_2235_);
return v_res_2237_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_concurrentlyAll___redArg___lam__0(lean_object* v___x_2239_, lean_object* v_tasks_2240_){
_start:
{
lean_object* v___x_2242_; size_t v_sz_2243_; size_t v___x_2244_; lean_object* v___x_228__overap_2245_; lean_object* v___x_2246_; 
v___x_2242_ = ((lean_object*)(l_Std_Async_BaseAsync_concurrentlyAll___redArg___lam__0___closed__0));
v_sz_2243_ = lean_array_size(v_tasks_2240_);
v___x_2244_ = ((size_t)0ULL);
v___x_228__overap_2245_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_2239_, v___x_2242_, v_sz_2243_, v___x_2244_, v_tasks_2240_);
v___x_2246_ = lean_apply_1(v___x_228__overap_2245_, lean_box(0));
return v___x_2246_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_concurrentlyAll___redArg___lam__0___boxed(lean_object* v___x_2247_, lean_object* v_tasks_2248_, lean_object* v___y_2249_){
_start:
{
lean_object* v_res_2250_; 
v_res_2250_ = l_Std_Async_BaseAsync_concurrentlyAll___redArg___lam__0(v___x_2247_, v_tasks_2248_);
return v_res_2250_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_concurrentlyAll___redArg(lean_object* v_xs_2253_, lean_object* v_prio_2254_){
_start:
{
lean_object* v___f_2256_; lean_object* v___f_2257_; lean_object* v___x_2258_; lean_object* v___f_2259_; lean_object* v___x_2260_; uint8_t v___x_2261_; size_t v_sz_2262_; size_t v___x_2263_; lean_object* v___x_176__overap_2264_; lean_object* v___x_2265_; lean_object* v___x_2266_; 
v___f_2256_ = ((lean_object*)(l_Std_Async_MaybeTask_joinTask___redArg___closed__0));
v___f_2257_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_concurrentlyAll___redArg___lam__1___boxed), 4, 2);
lean_closure_set(v___f_2257_, 0, v_prio_2254_);
lean_closure_set(v___f_2257_, 1, v___f_2256_);
v___x_2258_ = ((lean_object*)(l_Std_Async_BaseAsync_instMonad));
v___f_2259_ = ((lean_object*)(l_Std_Async_BaseAsync_concurrentlyAll___redArg___closed__0));
v___x_2260_ = lean_unsigned_to_nat(0u);
v___x_2261_ = 0;
v_sz_2262_ = lean_array_size(v_xs_2253_);
v___x_2263_ = ((size_t)0ULL);
v___x_176__overap_2264_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_2258_, v___f_2257_, v_sz_2262_, v___x_2263_, v_xs_2253_);
v___x_2265_ = lean_apply_1(v___x_176__overap_2264_, lean_box(0));
v___x_2266_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2260_, v___x_2261_, v___x_2265_, v___f_2259_);
return v___x_2266_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_concurrentlyAll___redArg___boxed(lean_object* v_xs_2267_, lean_object* v_prio_2268_, lean_object* v___y_2269_){
_start:
{
lean_object* v_res_2270_; 
v_res_2270_ = l_Std_Async_BaseAsync_concurrentlyAll___redArg(v_xs_2267_, v_prio_2268_);
return v_res_2270_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_concurrentlyAll(lean_object* v_00_u03b1_2271_, lean_object* v_xs_2272_, lean_object* v_prio_2273_){
_start:
{
lean_object* v___f_2275_; lean_object* v___f_2276_; lean_object* v___x_2277_; lean_object* v___f_2278_; lean_object* v___x_2279_; uint8_t v___x_2280_; size_t v_sz_2281_; size_t v___x_2282_; lean_object* v___x_205__overap_2283_; lean_object* v___x_2284_; lean_object* v___x_2285_; 
v___f_2275_ = ((lean_object*)(l_Std_Async_MaybeTask_joinTask___redArg___closed__0));
v___f_2276_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_concurrentlyAll___redArg___lam__1___boxed), 4, 2);
lean_closure_set(v___f_2276_, 0, v_prio_2273_);
lean_closure_set(v___f_2276_, 1, v___f_2275_);
v___x_2277_ = ((lean_object*)(l_Std_Async_BaseAsync_instMonad));
v___f_2278_ = ((lean_object*)(l_Std_Async_BaseAsync_concurrentlyAll___redArg___closed__0));
v___x_2279_ = lean_unsigned_to_nat(0u);
v___x_2280_ = 0;
v_sz_2281_ = lean_array_size(v_xs_2272_);
v___x_2282_ = ((size_t)0ULL);
v___x_205__overap_2283_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_2277_, v___f_2276_, v_sz_2281_, v___x_2282_, v_xs_2272_);
v___x_2284_ = lean_apply_1(v___x_205__overap_2283_, lean_box(0));
v___x_2285_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2279_, v___x_2280_, v___x_2284_, v___f_2278_);
return v___x_2285_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_concurrentlyAll___boxed(lean_object* v_00_u03b1_2286_, lean_object* v_xs_2287_, lean_object* v_prio_2288_, lean_object* v___y_2289_){
_start:
{
lean_object* v_res_2290_; 
v_res_2290_ = l_Std_Async_BaseAsync_concurrentlyAll(v_00_u03b1_2286_, v_xs_2287_, v_prio_2288_);
return v_res_2290_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_raceAll___redArg___lam__2(lean_object* v___f_2291_, lean_object* v___f_2292_, lean_object* v_task_u2081_2293_){
_start:
{
lean_object* v___x_2295_; lean_object* v___x_2296_; lean_object* v___x_2297_; uint8_t v___x_2298_; lean_object* v___x_2299_; lean_object* v___x_2300_; 
v___x_2295_ = lean_alloc_closure((void*)(l_liftM), 5, 4);
lean_closure_set(v___x_2295_, 0, lean_box(0));
lean_closure_set(v___x_2295_, 1, lean_box(0));
lean_closure_set(v___x_2295_, 2, v___f_2291_);
lean_closure_set(v___x_2295_, 3, lean_box(0));
v___x_2296_ = lean_alloc_closure((void*)(l_Function_comp), 6, 5);
lean_closure_set(v___x_2296_, 0, lean_box(0));
lean_closure_set(v___x_2296_, 1, lean_box(0));
lean_closure_set(v___x_2296_, 2, lean_box(0));
lean_closure_set(v___x_2296_, 3, v___x_2295_);
lean_closure_set(v___x_2296_, 4, v___f_2292_);
v___x_2297_ = lean_unsigned_to_nat(0u);
v___x_2298_ = 0;
v___x_2299_ = l_BaseIO_chainTask___redArg(v_task_u2081_2293_, v___x_2296_, v___x_2297_, v___x_2298_);
v___x_2300_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2300_, 0, v___x_2299_);
return v___x_2300_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_raceAll___redArg___lam__2___boxed(lean_object* v___f_2301_, lean_object* v___f_2302_, lean_object* v_task_u2081_2303_, lean_object* v___y_2304_){
_start:
{
lean_object* v_res_2305_; 
v_res_2305_ = l_Std_Async_BaseAsync_raceAll___redArg___lam__2(v___f_2301_, v___f_2302_, v_task_u2081_2303_);
return v_res_2305_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_raceAll___redArg___lam__0(lean_object* v_prio_2306_, lean_object* v___f_2307_, lean_object* v___f_2308_, lean_object* v_x_2309_){
_start:
{
lean_object* v___x_2311_; uint8_t v___x_2312_; lean_object* v___x_2313_; lean_object* v___x_2314_; uint8_t v___x_2315_; lean_object* v___x_2316_; lean_object* v___x_2317_; lean_object* v___x_2318_; 
v___x_2311_ = lean_unsigned_to_nat(0u);
v___x_2312_ = 0;
v___x_2313_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_toRawBaseIO___boxed), 3, 2);
lean_closure_set(v___x_2313_, 0, lean_box(0));
lean_closure_set(v___x_2313_, 1, v_x_2309_);
v___x_2314_ = lean_io_as_task(v___x_2313_, v_prio_2306_);
v___x_2315_ = 1;
v___x_2316_ = lean_task_bind(v___x_2314_, v___f_2307_, v___x_2311_, v___x_2315_);
v___x_2317_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2317_, 0, v___x_2316_);
v___x_2318_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2311_, v___x_2312_, v___x_2317_, v___f_2308_);
return v___x_2318_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_raceAll___redArg___lam__0___boxed(lean_object* v_prio_2319_, lean_object* v___f_2320_, lean_object* v___f_2321_, lean_object* v_x_2322_, lean_object* v___y_2323_){
_start:
{
lean_object* v_res_2324_; 
v_res_2324_ = l_Std_Async_BaseAsync_raceAll___redArg___lam__0(v_prio_2319_, v___f_2320_, v___f_2321_, v_x_2322_);
return v_res_2324_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_raceAll___redArg___lam__3(lean_object* v___f_2325_, lean_object* v_prio_2326_, lean_object* v___f_2327_, lean_object* v_inst_2328_, lean_object* v_xs_2329_, lean_object* v_promise_2330_){
_start:
{
lean_object* v___f_2332_; lean_object* v___f_2333_; lean_object* v___f_2334_; lean_object* v___f_2335_; lean_object* v___x_2336_; uint8_t v___x_2337_; lean_object* v___x_2338_; lean_object* v___x_2339_; 
lean_inc(v_promise_2330_);
v___f_2332_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_race___redArg___lam__2___boxed), 3, 1);
lean_closure_set(v___f_2332_, 0, v_promise_2330_);
v___f_2333_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_raceAll___redArg___lam__2___boxed), 4, 2);
lean_closure_set(v___f_2333_, 0, v___f_2325_);
lean_closure_set(v___f_2333_, 1, v___f_2332_);
v___f_2334_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_raceAll___redArg___lam__0___boxed), 5, 3);
lean_closure_set(v___f_2334_, 0, v_prio_2326_);
lean_closure_set(v___f_2334_, 1, v___f_2327_);
lean_closure_set(v___f_2334_, 2, v___f_2333_);
v___f_2335_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_race___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_2335_, 0, v_promise_2330_);
v___x_2336_ = lean_unsigned_to_nat(0u);
v___x_2337_ = 0;
v___x_2338_ = lean_apply_3(v_inst_2328_, v_xs_2329_, v___f_2334_, lean_box(0));
v___x_2339_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2336_, v___x_2337_, v___x_2338_, v___f_2335_);
return v___x_2339_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_raceAll___redArg___lam__3___boxed(lean_object* v___f_2340_, lean_object* v_prio_2341_, lean_object* v___f_2342_, lean_object* v_inst_2343_, lean_object* v_xs_2344_, lean_object* v_promise_2345_, lean_object* v___y_2346_){
_start:
{
lean_object* v_res_2347_; 
v_res_2347_ = l_Std_Async_BaseAsync_raceAll___redArg___lam__3(v___f_2340_, v_prio_2341_, v___f_2342_, v_inst_2343_, v_xs_2344_, v_promise_2345_);
return v_res_2347_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_raceAll___redArg(lean_object* v_inst_2348_, lean_object* v_xs_2349_, lean_object* v_prio_2350_){
_start:
{
lean_object* v___f_2352_; lean_object* v___f_2353_; lean_object* v___f_2354_; lean_object* v___x_2355_; uint8_t v___x_2356_; lean_object* v___x_2357_; lean_object* v___x_2358_; lean_object* v___x_2359_; 
v___f_2352_ = ((lean_object*)(l_Std_Async_MaybeTask_joinTask___redArg___closed__0));
v___f_2353_ = ((lean_object*)(l_Std_Async_BaseAsync_race___redArg___closed__0));
v___f_2354_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_raceAll___redArg___lam__3___boxed), 7, 5);
lean_closure_set(v___f_2354_, 0, v___f_2353_);
lean_closure_set(v___f_2354_, 1, v_prio_2350_);
lean_closure_set(v___f_2354_, 2, v___f_2352_);
lean_closure_set(v___f_2354_, 3, v_inst_2348_);
lean_closure_set(v___f_2354_, 4, v_xs_2349_);
v___x_2355_ = lean_unsigned_to_nat(0u);
v___x_2356_ = 0;
v___x_2357_ = lean_io_promise_new();
v___x_2358_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2358_, 0, v___x_2357_);
v___x_2359_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2355_, v___x_2356_, v___x_2358_, v___f_2354_);
return v___x_2359_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_raceAll___redArg___boxed(lean_object* v_inst_2360_, lean_object* v_xs_2361_, lean_object* v_prio_2362_, lean_object* v___y_2363_){
_start:
{
lean_object* v_res_2364_; 
v_res_2364_ = l_Std_Async_BaseAsync_raceAll___redArg(v_inst_2360_, v_xs_2361_, v_prio_2362_);
return v_res_2364_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_raceAll(lean_object* v_00_u03b1_2365_, lean_object* v_c_2366_, lean_object* v_inst_2367_, lean_object* v_inst_2368_, lean_object* v_xs_2369_, lean_object* v_prio_2370_){
_start:
{
lean_object* v___f_2372_; lean_object* v___f_2373_; lean_object* v___f_2374_; lean_object* v___x_2375_; uint8_t v___x_2376_; lean_object* v___x_2377_; lean_object* v___x_2378_; lean_object* v___x_2379_; 
v___f_2372_ = ((lean_object*)(l_Std_Async_MaybeTask_joinTask___redArg___closed__0));
v___f_2373_ = ((lean_object*)(l_Std_Async_BaseAsync_race___redArg___closed__0));
v___f_2374_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_raceAll___redArg___lam__3___boxed), 7, 5);
lean_closure_set(v___f_2374_, 0, v___f_2373_);
lean_closure_set(v___f_2374_, 1, v_prio_2370_);
lean_closure_set(v___f_2374_, 2, v___f_2372_);
lean_closure_set(v___f_2374_, 3, v_inst_2368_);
lean_closure_set(v___f_2374_, 4, v_xs_2369_);
v___x_2375_ = lean_unsigned_to_nat(0u);
v___x_2376_ = 0;
v___x_2377_ = lean_io_promise_new();
v___x_2378_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2378_, 0, v___x_2377_);
v___x_2379_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2375_, v___x_2376_, v___x_2378_, v___f_2374_);
return v___x_2379_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_raceAll___boxed(lean_object* v_00_u03b1_2380_, lean_object* v_c_2381_, lean_object* v_inst_2382_, lean_object* v_inst_2383_, lean_object* v_xs_2384_, lean_object* v_prio_2385_, lean_object* v___y_2386_){
_start:
{
lean_object* v_res_2387_; 
v_res_2387_ = l_Std_Async_BaseAsync_raceAll(v_00_u03b1_2380_, v_c_2381_, v_inst_2382_, v_inst_2383_, v_xs_2384_, v_prio_2385_);
lean_dec(v_inst_2382_);
return v_res_2387_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_mk___redArg(lean_object* v_toBaseAsync_2388_){
_start:
{
lean_object* v___x_2390_; 
v___x_2390_ = lean_apply_1(v_toBaseAsync_2388_, lean_box(0));
return v___x_2390_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_mk___redArg___boxed(lean_object* v_toBaseAsync_2391_, lean_object* v___y_2392_){
_start:
{
lean_object* v_res_2393_; 
v_res_2393_ = l_Std_Async_EAsync_mk___redArg(v_toBaseAsync_2391_);
return v_res_2393_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_mk(lean_object* v_00_u03b5_2394_, lean_object* v_00_u03b1_2395_, lean_object* v_toBaseAsync_2396_){
_start:
{
lean_object* v___x_2398_; 
v___x_2398_ = lean_apply_1(v_toBaseAsync_2396_, lean_box(0));
return v___x_2398_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_mk___boxed(lean_object* v_00_u03b5_2399_, lean_object* v_00_u03b1_2400_, lean_object* v_toBaseAsync_2401_, lean_object* v___y_2402_){
_start:
{
lean_object* v_res_2403_; 
v_res_2403_ = l_Std_Async_EAsync_mk(v_00_u03b5_2399_, v_00_u03b1_2400_, v_toBaseAsync_2401_);
return v_res_2403_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_toBaseAsync___redArg(lean_object* v_self_2404_){
_start:
{
lean_object* v___x_2406_; 
v___x_2406_ = lean_apply_1(v_self_2404_, lean_box(0));
return v___x_2406_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_toBaseAsync___redArg___boxed(lean_object* v_self_2407_, lean_object* v___y_2408_){
_start:
{
lean_object* v_res_2409_; 
v_res_2409_ = l_Std_Async_EAsync_toBaseAsync___redArg(v_self_2407_);
return v_res_2409_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_toBaseAsync(lean_object* v_00_u03b5_2410_, lean_object* v_00_u03b1_2411_, lean_object* v_self_2412_){
_start:
{
lean_object* v___x_2414_; 
v___x_2414_ = lean_apply_1(v_self_2412_, lean_box(0));
return v___x_2414_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_toBaseAsync___boxed(lean_object* v_00_u03b5_2415_, lean_object* v_00_u03b1_2416_, lean_object* v_self_2417_, lean_object* v___y_2418_){
_start:
{
lean_object* v_res_2419_; 
v_res_2419_ = l_Std_Async_EAsync_toBaseAsync(v_00_u03b5_2415_, v_00_u03b1_2416_, v_self_2417_);
return v_res_2419_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_toBaseIO___redArg(lean_object* v_x_2420_){
_start:
{
lean_object* v___x_2422_; 
v___x_2422_ = lean_apply_1(v_x_2420_, lean_box(0));
if (lean_obj_tag(v___x_2422_) == 0)
{
lean_object* v_a_2423_; lean_object* v___x_2424_; 
v_a_2423_ = lean_ctor_get(v___x_2422_, 0);
lean_inc(v_a_2423_);
lean_dec_ref_known(v___x_2422_, 1);
v___x_2424_ = lean_task_pure(v_a_2423_);
return v___x_2424_;
}
else
{
lean_object* v_a_2425_; 
v_a_2425_ = lean_ctor_get(v___x_2422_, 0);
lean_inc_ref(v_a_2425_);
lean_dec_ref_known(v___x_2422_, 1);
return v_a_2425_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_toBaseIO___redArg___boxed(lean_object* v_x_2426_, lean_object* v___y_2427_){
_start:
{
lean_object* v_res_2428_; 
v_res_2428_ = l_Std_Async_EAsync_toBaseIO___redArg(v_x_2426_);
return v_res_2428_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_toBaseIO(lean_object* v_00_u03b5_2429_, lean_object* v_00_u03b1_2430_, lean_object* v_x_2431_){
_start:
{
lean_object* v___x_2433_; 
v___x_2433_ = lean_apply_1(v_x_2431_, lean_box(0));
if (lean_obj_tag(v___x_2433_) == 0)
{
lean_object* v_a_2434_; lean_object* v___x_2435_; 
v_a_2434_ = lean_ctor_get(v___x_2433_, 0);
lean_inc(v_a_2434_);
lean_dec_ref_known(v___x_2433_, 1);
v___x_2435_ = lean_task_pure(v_a_2434_);
return v___x_2435_;
}
else
{
lean_object* v_a_2436_; 
v_a_2436_ = lean_ctor_get(v___x_2433_, 0);
lean_inc_ref(v_a_2436_);
lean_dec_ref_known(v___x_2433_, 1);
return v_a_2436_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_toBaseIO___boxed(lean_object* v_00_u03b5_2437_, lean_object* v_00_u03b1_2438_, lean_object* v_x_2439_, lean_object* v___y_2440_){
_start:
{
lean_object* v_res_2441_; 
v_res_2441_ = l_Std_Async_EAsync_toBaseIO(v_00_u03b5_2437_, v_00_u03b1_2438_, v_x_2439_);
return v_res_2441_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_ofTask___redArg(lean_object* v_x_2442_){
_start:
{
lean_object* v___x_2444_; 
v___x_2444_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2444_, 0, v_x_2442_);
return v___x_2444_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_ofTask___redArg___boxed(lean_object* v_x_2445_, lean_object* v___y_2446_){
_start:
{
lean_object* v_res_2447_; 
v_res_2447_ = l_Std_Async_EAsync_ofTask___redArg(v_x_2445_);
return v_res_2447_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_ofTask(lean_object* v_00_u03b5_2448_, lean_object* v_00_u03b1_2449_, lean_object* v_x_2450_){
_start:
{
lean_object* v___x_2452_; 
v___x_2452_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2452_, 0, v_x_2450_);
return v___x_2452_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_ofTask___boxed(lean_object* v_00_u03b5_2453_, lean_object* v_00_u03b1_2454_, lean_object* v_x_2455_, lean_object* v___y_2456_){
_start:
{
lean_object* v_res_2457_; 
v_res_2457_ = l_Std_Async_EAsync_ofTask(v_00_u03b5_2453_, v_00_u03b1_2454_, v_x_2455_);
return v_res_2457_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_toEIO___redArg(lean_object* v_x_2458_){
_start:
{
lean_object* v___x_2460_; 
v___x_2460_ = lean_apply_1(v_x_2458_, lean_box(0));
if (lean_obj_tag(v___x_2460_) == 0)
{
lean_object* v_a_2461_; lean_object* v___x_2463_; uint8_t v_isShared_2464_; uint8_t v_isSharedCheck_2469_; 
v_a_2461_ = lean_ctor_get(v___x_2460_, 0);
v_isSharedCheck_2469_ = !lean_is_exclusive(v___x_2460_);
if (v_isSharedCheck_2469_ == 0)
{
v___x_2463_ = v___x_2460_;
v_isShared_2464_ = v_isSharedCheck_2469_;
goto v_resetjp_2462_;
}
else
{
lean_inc(v_a_2461_);
lean_dec(v___x_2460_);
v___x_2463_ = lean_box(0);
v_isShared_2464_ = v_isSharedCheck_2469_;
goto v_resetjp_2462_;
}
v_resetjp_2462_:
{
lean_object* v___x_2465_; lean_object* v___x_2467_; 
v___x_2465_ = lean_task_pure(v_a_2461_);
if (v_isShared_2464_ == 0)
{
lean_ctor_set(v___x_2463_, 0, v___x_2465_);
v___x_2467_ = v___x_2463_;
goto v_reusejp_2466_;
}
else
{
lean_object* v_reuseFailAlloc_2468_; 
v_reuseFailAlloc_2468_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2468_, 0, v___x_2465_);
v___x_2467_ = v_reuseFailAlloc_2468_;
goto v_reusejp_2466_;
}
v_reusejp_2466_:
{
return v___x_2467_;
}
}
}
else
{
lean_object* v_a_2470_; lean_object* v___x_2472_; uint8_t v_isShared_2473_; uint8_t v_isSharedCheck_2477_; 
v_a_2470_ = lean_ctor_get(v___x_2460_, 0);
v_isSharedCheck_2477_ = !lean_is_exclusive(v___x_2460_);
if (v_isSharedCheck_2477_ == 0)
{
v___x_2472_ = v___x_2460_;
v_isShared_2473_ = v_isSharedCheck_2477_;
goto v_resetjp_2471_;
}
else
{
lean_inc(v_a_2470_);
lean_dec(v___x_2460_);
v___x_2472_ = lean_box(0);
v_isShared_2473_ = v_isSharedCheck_2477_;
goto v_resetjp_2471_;
}
v_resetjp_2471_:
{
lean_object* v___x_2475_; 
if (v_isShared_2473_ == 0)
{
lean_ctor_set_tag(v___x_2472_, 0);
v___x_2475_ = v___x_2472_;
goto v_reusejp_2474_;
}
else
{
lean_object* v_reuseFailAlloc_2476_; 
v_reuseFailAlloc_2476_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2476_, 0, v_a_2470_);
v___x_2475_ = v_reuseFailAlloc_2476_;
goto v_reusejp_2474_;
}
v_reusejp_2474_:
{
return v___x_2475_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_toEIO___redArg___boxed(lean_object* v_x_2478_, lean_object* v___y_2479_){
_start:
{
lean_object* v_res_2480_; 
v_res_2480_ = l_Std_Async_EAsync_toEIO___redArg(v_x_2478_);
return v_res_2480_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_toEIO(lean_object* v_00_u03b5_2481_, lean_object* v_00_u03b1_2482_, lean_object* v_x_2483_){
_start:
{
lean_object* v___x_2485_; 
v___x_2485_ = lean_apply_1(v_x_2483_, lean_box(0));
if (lean_obj_tag(v___x_2485_) == 0)
{
lean_object* v_a_2486_; lean_object* v___x_2488_; uint8_t v_isShared_2489_; uint8_t v_isSharedCheck_2494_; 
v_a_2486_ = lean_ctor_get(v___x_2485_, 0);
v_isSharedCheck_2494_ = !lean_is_exclusive(v___x_2485_);
if (v_isSharedCheck_2494_ == 0)
{
v___x_2488_ = v___x_2485_;
v_isShared_2489_ = v_isSharedCheck_2494_;
goto v_resetjp_2487_;
}
else
{
lean_inc(v_a_2486_);
lean_dec(v___x_2485_);
v___x_2488_ = lean_box(0);
v_isShared_2489_ = v_isSharedCheck_2494_;
goto v_resetjp_2487_;
}
v_resetjp_2487_:
{
lean_object* v___x_2490_; lean_object* v___x_2492_; 
v___x_2490_ = lean_task_pure(v_a_2486_);
if (v_isShared_2489_ == 0)
{
lean_ctor_set(v___x_2488_, 0, v___x_2490_);
v___x_2492_ = v___x_2488_;
goto v_reusejp_2491_;
}
else
{
lean_object* v_reuseFailAlloc_2493_; 
v_reuseFailAlloc_2493_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2493_, 0, v___x_2490_);
v___x_2492_ = v_reuseFailAlloc_2493_;
goto v_reusejp_2491_;
}
v_reusejp_2491_:
{
return v___x_2492_;
}
}
}
else
{
lean_object* v_a_2495_; lean_object* v___x_2497_; uint8_t v_isShared_2498_; uint8_t v_isSharedCheck_2502_; 
v_a_2495_ = lean_ctor_get(v___x_2485_, 0);
v_isSharedCheck_2502_ = !lean_is_exclusive(v___x_2485_);
if (v_isSharedCheck_2502_ == 0)
{
v___x_2497_ = v___x_2485_;
v_isShared_2498_ = v_isSharedCheck_2502_;
goto v_resetjp_2496_;
}
else
{
lean_inc(v_a_2495_);
lean_dec(v___x_2485_);
v___x_2497_ = lean_box(0);
v_isShared_2498_ = v_isSharedCheck_2502_;
goto v_resetjp_2496_;
}
v_resetjp_2496_:
{
lean_object* v___x_2500_; 
if (v_isShared_2498_ == 0)
{
lean_ctor_set_tag(v___x_2497_, 0);
v___x_2500_ = v___x_2497_;
goto v_reusejp_2499_;
}
else
{
lean_object* v_reuseFailAlloc_2501_; 
v_reuseFailAlloc_2501_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2501_, 0, v_a_2495_);
v___x_2500_ = v_reuseFailAlloc_2501_;
goto v_reusejp_2499_;
}
v_reusejp_2499_:
{
return v___x_2500_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_toEIO___boxed(lean_object* v_00_u03b5_2503_, lean_object* v_00_u03b1_2504_, lean_object* v_x_2505_, lean_object* v___y_2506_){
_start:
{
lean_object* v_res_2507_; 
v_res_2507_ = l_Std_Async_EAsync_toEIO(v_00_u03b5_2503_, v_00_u03b1_2504_, v_x_2505_);
return v_res_2507_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_ofETask___redArg(lean_object* v_x_2508_){
_start:
{
lean_object* v___x_2510_; 
v___x_2510_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2510_, 0, v_x_2508_);
return v___x_2510_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_ofETask___redArg___boxed(lean_object* v_x_2511_, lean_object* v___y_2512_){
_start:
{
lean_object* v_res_2513_; 
v_res_2513_ = l_Std_Async_EAsync_ofETask___redArg(v_x_2511_);
return v_res_2513_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_ofETask(lean_object* v_00_u03b5_2514_, lean_object* v_00_u03b1_2515_, lean_object* v_x_2516_){
_start:
{
lean_object* v___x_2518_; 
v___x_2518_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2518_, 0, v_x_2516_);
return v___x_2518_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_ofETask___boxed(lean_object* v_00_u03b5_2519_, lean_object* v_00_u03b1_2520_, lean_object* v_x_2521_, lean_object* v___y_2522_){
_start:
{
lean_object* v_res_2523_; 
v_res_2523_ = l_Std_Async_EAsync_ofETask(v_00_u03b5_2519_, v_00_u03b1_2520_, v_x_2521_);
return v_res_2523_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_pure___redArg(lean_object* v_a_2524_){
_start:
{
lean_object* v___x_2526_; lean_object* v___x_2527_; 
v___x_2526_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2526_, 0, v_a_2524_);
v___x_2527_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2527_, 0, v___x_2526_);
return v___x_2527_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_pure___redArg___boxed(lean_object* v_a_2528_, lean_object* v___y_2529_){
_start:
{
lean_object* v_res_2530_; 
v_res_2530_ = l_Std_Async_EAsync_pure___redArg(v_a_2528_);
return v_res_2530_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_pure(lean_object* v_00_u03b1_2531_, lean_object* v_00_u03b5_2532_, lean_object* v_a_2533_){
_start:
{
lean_object* v___x_2535_; lean_object* v___x_2536_; 
v___x_2535_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2535_, 0, v_a_2533_);
v___x_2536_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2536_, 0, v___x_2535_);
return v___x_2536_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_pure___boxed(lean_object* v_00_u03b1_2537_, lean_object* v_00_u03b5_2538_, lean_object* v_a_2539_, lean_object* v___y_2540_){
_start:
{
lean_object* v_res_2541_; 
v_res_2541_ = l_Std_Async_EAsync_pure(v_00_u03b1_2537_, v_00_u03b5_2538_, v_a_2539_);
return v_res_2541_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_map___redArg(lean_object* v_f_2542_, lean_object* v_self_2543_){
_start:
{
lean_object* v___x_2545_; lean_object* v___x_2546_; uint8_t v___x_2547_; lean_object* v___x_2548_; lean_object* v___y_2550_; 
lean_inc(v_f_2542_);
v___x_2545_ = lean_alloc_closure((void*)(l_Except_map), 5, 4);
lean_closure_set(v___x_2545_, 0, lean_box(0));
lean_closure_set(v___x_2545_, 1, lean_box(0));
lean_closure_set(v___x_2545_, 2, lean_box(0));
lean_closure_set(v___x_2545_, 3, v_f_2542_);
v___x_2546_ = lean_unsigned_to_nat(0u);
v___x_2547_ = 0;
v___x_2548_ = lean_apply_1(v_self_2543_, lean_box(0));
if (lean_obj_tag(v___x_2548_) == 0)
{
lean_object* v_a_2552_; 
lean_dec_ref(v___x_2545_);
v_a_2552_ = lean_ctor_get(v___x_2548_, 0);
lean_inc(v_a_2552_);
lean_dec_ref_known(v___x_2548_, 1);
if (lean_obj_tag(v_a_2552_) == 0)
{
lean_object* v_a_2553_; lean_object* v___x_2555_; uint8_t v_isShared_2556_; uint8_t v_isSharedCheck_2560_; 
lean_dec(v_f_2542_);
v_a_2553_ = lean_ctor_get(v_a_2552_, 0);
v_isSharedCheck_2560_ = !lean_is_exclusive(v_a_2552_);
if (v_isSharedCheck_2560_ == 0)
{
v___x_2555_ = v_a_2552_;
v_isShared_2556_ = v_isSharedCheck_2560_;
goto v_resetjp_2554_;
}
else
{
lean_inc(v_a_2553_);
lean_dec(v_a_2552_);
v___x_2555_ = lean_box(0);
v_isShared_2556_ = v_isSharedCheck_2560_;
goto v_resetjp_2554_;
}
v_resetjp_2554_:
{
lean_object* v___x_2558_; 
if (v_isShared_2556_ == 0)
{
v___x_2558_ = v___x_2555_;
goto v_reusejp_2557_;
}
else
{
lean_object* v_reuseFailAlloc_2559_; 
v_reuseFailAlloc_2559_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2559_, 0, v_a_2553_);
v___x_2558_ = v_reuseFailAlloc_2559_;
goto v_reusejp_2557_;
}
v_reusejp_2557_:
{
v___y_2550_ = v___x_2558_;
goto v___jp_2549_;
}
}
}
else
{
lean_object* v_a_2561_; lean_object* v___x_2563_; uint8_t v_isShared_2564_; uint8_t v_isSharedCheck_2569_; 
v_a_2561_ = lean_ctor_get(v_a_2552_, 0);
v_isSharedCheck_2569_ = !lean_is_exclusive(v_a_2552_);
if (v_isSharedCheck_2569_ == 0)
{
v___x_2563_ = v_a_2552_;
v_isShared_2564_ = v_isSharedCheck_2569_;
goto v_resetjp_2562_;
}
else
{
lean_inc(v_a_2561_);
lean_dec(v_a_2552_);
v___x_2563_ = lean_box(0);
v_isShared_2564_ = v_isSharedCheck_2569_;
goto v_resetjp_2562_;
}
v_resetjp_2562_:
{
lean_object* v___x_2565_; lean_object* v___x_2567_; 
v___x_2565_ = lean_apply_1(v_f_2542_, v_a_2561_);
if (v_isShared_2564_ == 0)
{
lean_ctor_set(v___x_2563_, 0, v___x_2565_);
v___x_2567_ = v___x_2563_;
goto v_reusejp_2566_;
}
else
{
lean_object* v_reuseFailAlloc_2568_; 
v_reuseFailAlloc_2568_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2568_, 0, v___x_2565_);
v___x_2567_ = v_reuseFailAlloc_2568_;
goto v_reusejp_2566_;
}
v_reusejp_2566_:
{
v___y_2550_ = v___x_2567_;
goto v___jp_2549_;
}
}
}
}
else
{
lean_object* v_a_2570_; lean_object* v___x_2572_; uint8_t v_isShared_2573_; uint8_t v_isSharedCheck_2578_; 
lean_dec(v_f_2542_);
v_a_2570_ = lean_ctor_get(v___x_2548_, 0);
v_isSharedCheck_2578_ = !lean_is_exclusive(v___x_2548_);
if (v_isSharedCheck_2578_ == 0)
{
v___x_2572_ = v___x_2548_;
v_isShared_2573_ = v_isSharedCheck_2578_;
goto v_resetjp_2571_;
}
else
{
lean_inc(v_a_2570_);
lean_dec(v___x_2548_);
v___x_2572_ = lean_box(0);
v_isShared_2573_ = v_isSharedCheck_2578_;
goto v_resetjp_2571_;
}
v_resetjp_2571_:
{
lean_object* v___x_2574_; lean_object* v___x_2576_; 
v___x_2574_ = lean_task_map(v___x_2545_, v_a_2570_, v___x_2546_, v___x_2547_);
if (v_isShared_2573_ == 0)
{
lean_ctor_set(v___x_2572_, 0, v___x_2574_);
v___x_2576_ = v___x_2572_;
goto v_reusejp_2575_;
}
else
{
lean_object* v_reuseFailAlloc_2577_; 
v_reuseFailAlloc_2577_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2577_, 0, v___x_2574_);
v___x_2576_ = v_reuseFailAlloc_2577_;
goto v_reusejp_2575_;
}
v_reusejp_2575_:
{
return v___x_2576_;
}
}
}
v___jp_2549_:
{
lean_object* v___x_2551_; 
v___x_2551_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2551_, 0, v___y_2550_);
return v___x_2551_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_map___redArg___boxed(lean_object* v_f_2579_, lean_object* v_self_2580_, lean_object* v___y_2581_){
_start:
{
lean_object* v_res_2582_; 
v_res_2582_ = l_Std_Async_EAsync_map___redArg(v_f_2579_, v_self_2580_);
return v_res_2582_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_map(lean_object* v_00_u03b1_2583_, lean_object* v_00_u03b2_2584_, lean_object* v_00_u03b5_2585_, lean_object* v_f_2586_, lean_object* v_self_2587_){
_start:
{
lean_object* v___x_2589_; lean_object* v___x_2590_; uint8_t v___x_2591_; lean_object* v___x_2592_; lean_object* v___y_2594_; 
lean_inc(v_f_2586_);
v___x_2589_ = lean_alloc_closure((void*)(l_Except_map), 5, 4);
lean_closure_set(v___x_2589_, 0, lean_box(0));
lean_closure_set(v___x_2589_, 1, lean_box(0));
lean_closure_set(v___x_2589_, 2, lean_box(0));
lean_closure_set(v___x_2589_, 3, v_f_2586_);
v___x_2590_ = lean_unsigned_to_nat(0u);
v___x_2591_ = 0;
v___x_2592_ = lean_apply_1(v_self_2587_, lean_box(0));
if (lean_obj_tag(v___x_2592_) == 0)
{
lean_object* v_a_2596_; 
lean_dec_ref(v___x_2589_);
v_a_2596_ = lean_ctor_get(v___x_2592_, 0);
lean_inc(v_a_2596_);
lean_dec_ref_known(v___x_2592_, 1);
if (lean_obj_tag(v_a_2596_) == 0)
{
lean_object* v_a_2597_; lean_object* v___x_2599_; uint8_t v_isShared_2600_; uint8_t v_isSharedCheck_2604_; 
lean_dec(v_f_2586_);
v_a_2597_ = lean_ctor_get(v_a_2596_, 0);
v_isSharedCheck_2604_ = !lean_is_exclusive(v_a_2596_);
if (v_isSharedCheck_2604_ == 0)
{
v___x_2599_ = v_a_2596_;
v_isShared_2600_ = v_isSharedCheck_2604_;
goto v_resetjp_2598_;
}
else
{
lean_inc(v_a_2597_);
lean_dec(v_a_2596_);
v___x_2599_ = lean_box(0);
v_isShared_2600_ = v_isSharedCheck_2604_;
goto v_resetjp_2598_;
}
v_resetjp_2598_:
{
lean_object* v___x_2602_; 
if (v_isShared_2600_ == 0)
{
v___x_2602_ = v___x_2599_;
goto v_reusejp_2601_;
}
else
{
lean_object* v_reuseFailAlloc_2603_; 
v_reuseFailAlloc_2603_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2603_, 0, v_a_2597_);
v___x_2602_ = v_reuseFailAlloc_2603_;
goto v_reusejp_2601_;
}
v_reusejp_2601_:
{
v___y_2594_ = v___x_2602_;
goto v___jp_2593_;
}
}
}
else
{
lean_object* v_a_2605_; lean_object* v___x_2607_; uint8_t v_isShared_2608_; uint8_t v_isSharedCheck_2613_; 
v_a_2605_ = lean_ctor_get(v_a_2596_, 0);
v_isSharedCheck_2613_ = !lean_is_exclusive(v_a_2596_);
if (v_isSharedCheck_2613_ == 0)
{
v___x_2607_ = v_a_2596_;
v_isShared_2608_ = v_isSharedCheck_2613_;
goto v_resetjp_2606_;
}
else
{
lean_inc(v_a_2605_);
lean_dec(v_a_2596_);
v___x_2607_ = lean_box(0);
v_isShared_2608_ = v_isSharedCheck_2613_;
goto v_resetjp_2606_;
}
v_resetjp_2606_:
{
lean_object* v___x_2609_; lean_object* v___x_2611_; 
v___x_2609_ = lean_apply_1(v_f_2586_, v_a_2605_);
if (v_isShared_2608_ == 0)
{
lean_ctor_set(v___x_2607_, 0, v___x_2609_);
v___x_2611_ = v___x_2607_;
goto v_reusejp_2610_;
}
else
{
lean_object* v_reuseFailAlloc_2612_; 
v_reuseFailAlloc_2612_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2612_, 0, v___x_2609_);
v___x_2611_ = v_reuseFailAlloc_2612_;
goto v_reusejp_2610_;
}
v_reusejp_2610_:
{
v___y_2594_ = v___x_2611_;
goto v___jp_2593_;
}
}
}
}
else
{
lean_object* v_a_2614_; lean_object* v___x_2616_; uint8_t v_isShared_2617_; uint8_t v_isSharedCheck_2622_; 
lean_dec(v_f_2586_);
v_a_2614_ = lean_ctor_get(v___x_2592_, 0);
v_isSharedCheck_2622_ = !lean_is_exclusive(v___x_2592_);
if (v_isSharedCheck_2622_ == 0)
{
v___x_2616_ = v___x_2592_;
v_isShared_2617_ = v_isSharedCheck_2622_;
goto v_resetjp_2615_;
}
else
{
lean_inc(v_a_2614_);
lean_dec(v___x_2592_);
v___x_2616_ = lean_box(0);
v_isShared_2617_ = v_isSharedCheck_2622_;
goto v_resetjp_2615_;
}
v_resetjp_2615_:
{
lean_object* v___x_2618_; lean_object* v___x_2620_; 
v___x_2618_ = lean_task_map(v___x_2589_, v_a_2614_, v___x_2590_, v___x_2591_);
if (v_isShared_2617_ == 0)
{
lean_ctor_set(v___x_2616_, 0, v___x_2618_);
v___x_2620_ = v___x_2616_;
goto v_reusejp_2619_;
}
else
{
lean_object* v_reuseFailAlloc_2621_; 
v_reuseFailAlloc_2621_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2621_, 0, v___x_2618_);
v___x_2620_ = v_reuseFailAlloc_2621_;
goto v_reusejp_2619_;
}
v_reusejp_2619_:
{
return v___x_2620_;
}
}
}
v___jp_2593_:
{
lean_object* v___x_2595_; 
v___x_2595_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2595_, 0, v___y_2594_);
return v___x_2595_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_map___boxed(lean_object* v_00_u03b1_2623_, lean_object* v_00_u03b2_2624_, lean_object* v_00_u03b5_2625_, lean_object* v_f_2626_, lean_object* v_self_2627_, lean_object* v___y_2628_){
_start:
{
lean_object* v_res_2629_; 
v_res_2629_ = l_Std_Async_EAsync_map(v_00_u03b1_2623_, v_00_u03b2_2624_, v_00_u03b5_2625_, v_f_2626_, v_self_2627_);
return v_res_2629_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_bind___redArg___lam__0(lean_object* v_f_2630_, lean_object* v_x_2631_){
_start:
{
if (lean_obj_tag(v_x_2631_) == 0)
{
lean_object* v_a_2633_; lean_object* v___x_2635_; uint8_t v_isShared_2636_; uint8_t v_isSharedCheck_2641_; 
lean_dec_ref(v_f_2630_);
v_a_2633_ = lean_ctor_get(v_x_2631_, 0);
v_isSharedCheck_2641_ = !lean_is_exclusive(v_x_2631_);
if (v_isSharedCheck_2641_ == 0)
{
v___x_2635_ = v_x_2631_;
v_isShared_2636_ = v_isSharedCheck_2641_;
goto v_resetjp_2634_;
}
else
{
lean_inc(v_a_2633_);
lean_dec(v_x_2631_);
v___x_2635_ = lean_box(0);
v_isShared_2636_ = v_isSharedCheck_2641_;
goto v_resetjp_2634_;
}
v_resetjp_2634_:
{
lean_object* v___x_2638_; 
if (v_isShared_2636_ == 0)
{
v___x_2638_ = v___x_2635_;
goto v_reusejp_2637_;
}
else
{
lean_object* v_reuseFailAlloc_2640_; 
v_reuseFailAlloc_2640_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2640_, 0, v_a_2633_);
v___x_2638_ = v_reuseFailAlloc_2640_;
goto v_reusejp_2637_;
}
v_reusejp_2637_:
{
lean_object* v___x_2639_; 
v___x_2639_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2639_, 0, v___x_2638_);
return v___x_2639_;
}
}
}
else
{
lean_object* v_a_2642_; lean_object* v___x_2643_; 
v_a_2642_ = lean_ctor_get(v_x_2631_, 0);
lean_inc(v_a_2642_);
lean_dec_ref_known(v_x_2631_, 1);
v___x_2643_ = lean_apply_2(v_f_2630_, v_a_2642_, lean_box(0));
return v___x_2643_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_bind___redArg___lam__0___boxed(lean_object* v_f_2644_, lean_object* v_x_2645_, lean_object* v___y_2646_){
_start:
{
lean_object* v_res_2647_; 
v_res_2647_ = l_Std_Async_EAsync_bind___redArg___lam__0(v_f_2644_, v_x_2645_);
return v_res_2647_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_bind___redArg(lean_object* v_self_2648_, lean_object* v_f_2649_){
_start:
{
lean_object* v___f_2651_; lean_object* v___x_2652_; uint8_t v___x_2653_; lean_object* v___x_2654_; lean_object* v___x_2655_; 
v___f_2651_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_bind___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_2651_, 0, v_f_2649_);
v___x_2652_ = lean_unsigned_to_nat(0u);
v___x_2653_ = 0;
v___x_2654_ = lean_apply_1(v_self_2648_, lean_box(0));
v___x_2655_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2652_, v___x_2653_, v___x_2654_, v___f_2651_);
return v___x_2655_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_bind___redArg___boxed(lean_object* v_self_2656_, lean_object* v_f_2657_, lean_object* v___y_2658_){
_start:
{
lean_object* v_res_2659_; 
v_res_2659_ = l_Std_Async_EAsync_bind___redArg(v_self_2656_, v_f_2657_);
return v_res_2659_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_bind(lean_object* v_00_u03b5_2660_, lean_object* v_00_u03b1_2661_, lean_object* v_00_u03b2_2662_, lean_object* v_self_2663_, lean_object* v_f_2664_){
_start:
{
lean_object* v___f_2666_; lean_object* v___x_2667_; uint8_t v___x_2668_; lean_object* v___x_2669_; lean_object* v___x_2670_; 
v___f_2666_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_bind___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_2666_, 0, v_f_2664_);
v___x_2667_ = lean_unsigned_to_nat(0u);
v___x_2668_ = 0;
v___x_2669_ = lean_apply_1(v_self_2663_, lean_box(0));
v___x_2670_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2667_, v___x_2668_, v___x_2669_, v___f_2666_);
return v___x_2670_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_bind___boxed(lean_object* v_00_u03b5_2671_, lean_object* v_00_u03b1_2672_, lean_object* v_00_u03b2_2673_, lean_object* v_self_2674_, lean_object* v_f_2675_, lean_object* v___y_2676_){
_start:
{
lean_object* v_res_2677_; 
v_res_2677_ = l_Std_Async_EAsync_bind(v_00_u03b5_2671_, v_00_u03b1_2672_, v_00_u03b2_2673_, v_self_2674_, v_f_2675_);
return v_res_2677_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_lift___redArg(lean_object* v_x_2678_){
_start:
{
lean_object* v_val_2681_; lean_object* v___x_2683_; 
v___x_2683_ = lean_apply_1(v_x_2678_, lean_box(0));
if (lean_obj_tag(v___x_2683_) == 0)
{
lean_object* v_a_2684_; lean_object* v___x_2686_; uint8_t v_isShared_2687_; uint8_t v_isSharedCheck_2691_; 
v_a_2684_ = lean_ctor_get(v___x_2683_, 0);
v_isSharedCheck_2691_ = !lean_is_exclusive(v___x_2683_);
if (v_isSharedCheck_2691_ == 0)
{
v___x_2686_ = v___x_2683_;
v_isShared_2687_ = v_isSharedCheck_2691_;
goto v_resetjp_2685_;
}
else
{
lean_inc(v_a_2684_);
lean_dec(v___x_2683_);
v___x_2686_ = lean_box(0);
v_isShared_2687_ = v_isSharedCheck_2691_;
goto v_resetjp_2685_;
}
v_resetjp_2685_:
{
lean_object* v___x_2689_; 
if (v_isShared_2687_ == 0)
{
lean_ctor_set_tag(v___x_2686_, 1);
v___x_2689_ = v___x_2686_;
goto v_reusejp_2688_;
}
else
{
lean_object* v_reuseFailAlloc_2690_; 
v_reuseFailAlloc_2690_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2690_, 0, v_a_2684_);
v___x_2689_ = v_reuseFailAlloc_2690_;
goto v_reusejp_2688_;
}
v_reusejp_2688_:
{
v_val_2681_ = v___x_2689_;
goto v___jp_2680_;
}
}
}
else
{
lean_object* v_a_2692_; lean_object* v___x_2694_; uint8_t v_isShared_2695_; uint8_t v_isSharedCheck_2699_; 
v_a_2692_ = lean_ctor_get(v___x_2683_, 0);
v_isSharedCheck_2699_ = !lean_is_exclusive(v___x_2683_);
if (v_isSharedCheck_2699_ == 0)
{
v___x_2694_ = v___x_2683_;
v_isShared_2695_ = v_isSharedCheck_2699_;
goto v_resetjp_2693_;
}
else
{
lean_inc(v_a_2692_);
lean_dec(v___x_2683_);
v___x_2694_ = lean_box(0);
v_isShared_2695_ = v_isSharedCheck_2699_;
goto v_resetjp_2693_;
}
v_resetjp_2693_:
{
lean_object* v___x_2697_; 
if (v_isShared_2695_ == 0)
{
lean_ctor_set_tag(v___x_2694_, 0);
v___x_2697_ = v___x_2694_;
goto v_reusejp_2696_;
}
else
{
lean_object* v_reuseFailAlloc_2698_; 
v_reuseFailAlloc_2698_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2698_, 0, v_a_2692_);
v___x_2697_ = v_reuseFailAlloc_2698_;
goto v_reusejp_2696_;
}
v_reusejp_2696_:
{
v_val_2681_ = v___x_2697_;
goto v___jp_2680_;
}
}
}
v___jp_2680_:
{
lean_object* v___x_2682_; 
v___x_2682_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2682_, 0, v_val_2681_);
return v___x_2682_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_lift___redArg___boxed(lean_object* v_x_2700_, lean_object* v___y_2701_){
_start:
{
lean_object* v_res_2702_; 
v_res_2702_ = l_Std_Async_EAsync_lift___redArg(v_x_2700_);
return v_res_2702_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_lift(lean_object* v_00_u03b5_2703_, lean_object* v_00_u03b1_2704_, lean_object* v_x_2705_){
_start:
{
lean_object* v_val_2708_; lean_object* v___x_2710_; 
v___x_2710_ = lean_apply_1(v_x_2705_, lean_box(0));
if (lean_obj_tag(v___x_2710_) == 0)
{
lean_object* v_a_2711_; lean_object* v___x_2713_; uint8_t v_isShared_2714_; uint8_t v_isSharedCheck_2718_; 
v_a_2711_ = lean_ctor_get(v___x_2710_, 0);
v_isSharedCheck_2718_ = !lean_is_exclusive(v___x_2710_);
if (v_isSharedCheck_2718_ == 0)
{
v___x_2713_ = v___x_2710_;
v_isShared_2714_ = v_isSharedCheck_2718_;
goto v_resetjp_2712_;
}
else
{
lean_inc(v_a_2711_);
lean_dec(v___x_2710_);
v___x_2713_ = lean_box(0);
v_isShared_2714_ = v_isSharedCheck_2718_;
goto v_resetjp_2712_;
}
v_resetjp_2712_:
{
lean_object* v___x_2716_; 
if (v_isShared_2714_ == 0)
{
lean_ctor_set_tag(v___x_2713_, 1);
v___x_2716_ = v___x_2713_;
goto v_reusejp_2715_;
}
else
{
lean_object* v_reuseFailAlloc_2717_; 
v_reuseFailAlloc_2717_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2717_, 0, v_a_2711_);
v___x_2716_ = v_reuseFailAlloc_2717_;
goto v_reusejp_2715_;
}
v_reusejp_2715_:
{
v_val_2708_ = v___x_2716_;
goto v___jp_2707_;
}
}
}
else
{
lean_object* v_a_2719_; lean_object* v___x_2721_; uint8_t v_isShared_2722_; uint8_t v_isSharedCheck_2726_; 
v_a_2719_ = lean_ctor_get(v___x_2710_, 0);
v_isSharedCheck_2726_ = !lean_is_exclusive(v___x_2710_);
if (v_isSharedCheck_2726_ == 0)
{
v___x_2721_ = v___x_2710_;
v_isShared_2722_ = v_isSharedCheck_2726_;
goto v_resetjp_2720_;
}
else
{
lean_inc(v_a_2719_);
lean_dec(v___x_2710_);
v___x_2721_ = lean_box(0);
v_isShared_2722_ = v_isSharedCheck_2726_;
goto v_resetjp_2720_;
}
v_resetjp_2720_:
{
lean_object* v___x_2724_; 
if (v_isShared_2722_ == 0)
{
lean_ctor_set_tag(v___x_2721_, 0);
v___x_2724_ = v___x_2721_;
goto v_reusejp_2723_;
}
else
{
lean_object* v_reuseFailAlloc_2725_; 
v_reuseFailAlloc_2725_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2725_, 0, v_a_2719_);
v___x_2724_ = v_reuseFailAlloc_2725_;
goto v_reusejp_2723_;
}
v_reusejp_2723_:
{
v_val_2708_ = v___x_2724_;
goto v___jp_2707_;
}
}
}
v___jp_2707_:
{
lean_object* v___x_2709_; 
v___x_2709_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2709_, 0, v_val_2708_);
return v___x_2709_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_lift___boxed(lean_object* v_00_u03b5_2727_, lean_object* v_00_u03b1_2728_, lean_object* v_x_2729_, lean_object* v___y_2730_){
_start:
{
lean_object* v_res_2731_; 
v_res_2731_ = l_Std_Async_EAsync_lift(v_00_u03b5_2727_, v_00_u03b1_2728_, v_x_2729_);
return v_res_2731_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_wait___redArg(lean_object* v_self_2732_){
_start:
{
lean_object* v_val_2735_; lean_object* v___x_2753_; 
v___x_2753_ = lean_apply_1(v_self_2732_, lean_box(0));
if (lean_obj_tag(v___x_2753_) == 0)
{
lean_object* v_a_2754_; lean_object* v___x_2755_; 
v_a_2754_ = lean_ctor_get(v___x_2753_, 0);
lean_inc(v_a_2754_);
lean_dec_ref_known(v___x_2753_, 1);
v___x_2755_ = lean_task_pure(v_a_2754_);
v_val_2735_ = v___x_2755_;
goto v___jp_2734_;
}
else
{
lean_object* v_a_2756_; 
v_a_2756_ = lean_ctor_get(v___x_2753_, 0);
lean_inc_ref(v_a_2756_);
lean_dec_ref_known(v___x_2753_, 1);
v_val_2735_ = v_a_2756_;
goto v___jp_2734_;
}
v___jp_2734_:
{
lean_object* v___x_2736_; 
v___x_2736_ = lean_task_get_own(v_val_2735_);
if (lean_obj_tag(v___x_2736_) == 0)
{
lean_object* v_a_2737_; lean_object* v___x_2739_; uint8_t v_isShared_2740_; uint8_t v_isSharedCheck_2744_; 
v_a_2737_ = lean_ctor_get(v___x_2736_, 0);
v_isSharedCheck_2744_ = !lean_is_exclusive(v___x_2736_);
if (v_isSharedCheck_2744_ == 0)
{
v___x_2739_ = v___x_2736_;
v_isShared_2740_ = v_isSharedCheck_2744_;
goto v_resetjp_2738_;
}
else
{
lean_inc(v_a_2737_);
lean_dec(v___x_2736_);
v___x_2739_ = lean_box(0);
v_isShared_2740_ = v_isSharedCheck_2744_;
goto v_resetjp_2738_;
}
v_resetjp_2738_:
{
lean_object* v___x_2742_; 
if (v_isShared_2740_ == 0)
{
lean_ctor_set_tag(v___x_2739_, 1);
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
else
{
lean_object* v_a_2745_; lean_object* v___x_2747_; uint8_t v_isShared_2748_; uint8_t v_isSharedCheck_2752_; 
v_a_2745_ = lean_ctor_get(v___x_2736_, 0);
v_isSharedCheck_2752_ = !lean_is_exclusive(v___x_2736_);
if (v_isSharedCheck_2752_ == 0)
{
v___x_2747_ = v___x_2736_;
v_isShared_2748_ = v_isSharedCheck_2752_;
goto v_resetjp_2746_;
}
else
{
lean_inc(v_a_2745_);
lean_dec(v___x_2736_);
v___x_2747_ = lean_box(0);
v_isShared_2748_ = v_isSharedCheck_2752_;
goto v_resetjp_2746_;
}
v_resetjp_2746_:
{
lean_object* v___x_2750_; 
if (v_isShared_2748_ == 0)
{
lean_ctor_set_tag(v___x_2747_, 0);
v___x_2750_ = v___x_2747_;
goto v_reusejp_2749_;
}
else
{
lean_object* v_reuseFailAlloc_2751_; 
v_reuseFailAlloc_2751_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2751_, 0, v_a_2745_);
v___x_2750_ = v_reuseFailAlloc_2751_;
goto v_reusejp_2749_;
}
v_reusejp_2749_:
{
return v___x_2750_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_wait___redArg___boxed(lean_object* v_self_2757_, lean_object* v___y_2758_){
_start:
{
lean_object* v_res_2759_; 
v_res_2759_ = l_Std_Async_EAsync_wait___redArg(v_self_2757_);
return v_res_2759_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_wait(lean_object* v_00_u03b5_2760_, lean_object* v_00_u03b1_2761_, lean_object* v_self_2762_){
_start:
{
lean_object* v_val_2765_; lean_object* v___x_2783_; 
v___x_2783_ = lean_apply_1(v_self_2762_, lean_box(0));
if (lean_obj_tag(v___x_2783_) == 0)
{
lean_object* v_a_2784_; lean_object* v___x_2785_; 
v_a_2784_ = lean_ctor_get(v___x_2783_, 0);
lean_inc(v_a_2784_);
lean_dec_ref_known(v___x_2783_, 1);
v___x_2785_ = lean_task_pure(v_a_2784_);
v_val_2765_ = v___x_2785_;
goto v___jp_2764_;
}
else
{
lean_object* v_a_2786_; 
v_a_2786_ = lean_ctor_get(v___x_2783_, 0);
lean_inc_ref(v_a_2786_);
lean_dec_ref_known(v___x_2783_, 1);
v_val_2765_ = v_a_2786_;
goto v___jp_2764_;
}
v___jp_2764_:
{
lean_object* v___x_2766_; 
v___x_2766_ = lean_task_get_own(v_val_2765_);
if (lean_obj_tag(v___x_2766_) == 0)
{
lean_object* v_a_2767_; lean_object* v___x_2769_; uint8_t v_isShared_2770_; uint8_t v_isSharedCheck_2774_; 
v_a_2767_ = lean_ctor_get(v___x_2766_, 0);
v_isSharedCheck_2774_ = !lean_is_exclusive(v___x_2766_);
if (v_isSharedCheck_2774_ == 0)
{
v___x_2769_ = v___x_2766_;
v_isShared_2770_ = v_isSharedCheck_2774_;
goto v_resetjp_2768_;
}
else
{
lean_inc(v_a_2767_);
lean_dec(v___x_2766_);
v___x_2769_ = lean_box(0);
v_isShared_2770_ = v_isSharedCheck_2774_;
goto v_resetjp_2768_;
}
v_resetjp_2768_:
{
lean_object* v___x_2772_; 
if (v_isShared_2770_ == 0)
{
lean_ctor_set_tag(v___x_2769_, 1);
v___x_2772_ = v___x_2769_;
goto v_reusejp_2771_;
}
else
{
lean_object* v_reuseFailAlloc_2773_; 
v_reuseFailAlloc_2773_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2773_, 0, v_a_2767_);
v___x_2772_ = v_reuseFailAlloc_2773_;
goto v_reusejp_2771_;
}
v_reusejp_2771_:
{
return v___x_2772_;
}
}
}
else
{
lean_object* v_a_2775_; lean_object* v___x_2777_; uint8_t v_isShared_2778_; uint8_t v_isSharedCheck_2782_; 
v_a_2775_ = lean_ctor_get(v___x_2766_, 0);
v_isSharedCheck_2782_ = !lean_is_exclusive(v___x_2766_);
if (v_isSharedCheck_2782_ == 0)
{
v___x_2777_ = v___x_2766_;
v_isShared_2778_ = v_isSharedCheck_2782_;
goto v_resetjp_2776_;
}
else
{
lean_inc(v_a_2775_);
lean_dec(v___x_2766_);
v___x_2777_ = lean_box(0);
v_isShared_2778_ = v_isSharedCheck_2782_;
goto v_resetjp_2776_;
}
v_resetjp_2776_:
{
lean_object* v___x_2780_; 
if (v_isShared_2778_ == 0)
{
lean_ctor_set_tag(v___x_2777_, 0);
v___x_2780_ = v___x_2777_;
goto v_reusejp_2779_;
}
else
{
lean_object* v_reuseFailAlloc_2781_; 
v_reuseFailAlloc_2781_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2781_, 0, v_a_2775_);
v___x_2780_ = v_reuseFailAlloc_2781_;
goto v_reusejp_2779_;
}
v_reusejp_2779_:
{
return v___x_2780_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_wait___boxed(lean_object* v_00_u03b5_2787_, lean_object* v_00_u03b1_2788_, lean_object* v_self_2789_, lean_object* v___y_2790_){
_start:
{
lean_object* v_res_2791_; 
v_res_2791_ = l_Std_Async_EAsync_wait(v_00_u03b5_2787_, v_00_u03b1_2788_, v_self_2789_);
return v_res_2791_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_asTask___redArg___lam__0(lean_object* v_x_2792_){
_start:
{
if (lean_obj_tag(v_x_2792_) == 0)
{
lean_object* v_a_2793_; lean_object* v___x_2794_; 
v_a_2793_ = lean_ctor_get(v_x_2792_, 0);
lean_inc(v_a_2793_);
lean_dec_ref_known(v_x_2792_, 1);
v___x_2794_ = lean_task_pure(v_a_2793_);
return v___x_2794_;
}
else
{
lean_object* v_a_2795_; 
v_a_2795_ = lean_ctor_get(v_x_2792_, 0);
lean_inc_ref(v_a_2795_);
lean_dec_ref_known(v_x_2792_, 1);
return v_a_2795_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_asTask___redArg(lean_object* v_x_2797_, lean_object* v_prio_2798_){
_start:
{
lean_object* v___f_2800_; lean_object* v___x_2801_; lean_object* v___x_2802_; lean_object* v___x_2803_; lean_object* v___x_2804_; uint8_t v___x_2805_; lean_object* v___x_2806_; lean_object* v___x_2807_; 
v___f_2800_ = ((lean_object*)(l_Std_Async_EAsync_asTask___redArg___closed__0));
v___x_2801_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_toBaseAsync___boxed), 4, 3);
lean_closure_set(v___x_2801_, 0, lean_box(0));
lean_closure_set(v___x_2801_, 1, lean_box(0));
lean_closure_set(v___x_2801_, 2, v_x_2797_);
v___x_2802_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_toRawBaseIO___boxed), 3, 2);
lean_closure_set(v___x_2802_, 0, lean_box(0));
lean_closure_set(v___x_2802_, 1, v___x_2801_);
v___x_2803_ = lean_io_as_task(v___x_2802_, v_prio_2798_);
v___x_2804_ = lean_unsigned_to_nat(0u);
v___x_2805_ = 1;
v___x_2806_ = lean_task_bind(v___x_2803_, v___f_2800_, v___x_2804_, v___x_2805_);
v___x_2807_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2807_, 0, v___x_2806_);
return v___x_2807_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_asTask___redArg___boxed(lean_object* v_x_2808_, lean_object* v_prio_2809_, lean_object* v___y_2810_){
_start:
{
lean_object* v_res_2811_; 
v_res_2811_ = l_Std_Async_EAsync_asTask___redArg(v_x_2808_, v_prio_2809_);
return v_res_2811_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_asTask(lean_object* v_00_u03b5_2812_, lean_object* v_00_u03b1_2813_, lean_object* v_x_2814_, lean_object* v_prio_2815_){
_start:
{
lean_object* v___f_2817_; lean_object* v___x_2818_; lean_object* v___x_2819_; lean_object* v___x_2820_; lean_object* v___x_2821_; uint8_t v___x_2822_; lean_object* v___x_2823_; lean_object* v___x_2824_; 
v___f_2817_ = ((lean_object*)(l_Std_Async_EAsync_asTask___redArg___closed__0));
v___x_2818_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_toBaseAsync___boxed), 4, 3);
lean_closure_set(v___x_2818_, 0, lean_box(0));
lean_closure_set(v___x_2818_, 1, lean_box(0));
lean_closure_set(v___x_2818_, 2, v_x_2814_);
v___x_2819_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_toRawBaseIO___boxed), 3, 2);
lean_closure_set(v___x_2819_, 0, lean_box(0));
lean_closure_set(v___x_2819_, 1, v___x_2818_);
v___x_2820_ = lean_io_as_task(v___x_2819_, v_prio_2815_);
v___x_2821_ = lean_unsigned_to_nat(0u);
v___x_2822_ = 1;
v___x_2823_ = lean_task_bind(v___x_2820_, v___f_2817_, v___x_2821_, v___x_2822_);
v___x_2824_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2824_, 0, v___x_2823_);
return v___x_2824_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_asTask___boxed(lean_object* v_00_u03b5_2825_, lean_object* v_00_u03b1_2826_, lean_object* v_x_2827_, lean_object* v_prio_2828_, lean_object* v___y_2829_){
_start:
{
lean_object* v_res_2830_; 
v_res_2830_ = l_Std_Async_EAsync_asTask(v_00_u03b5_2825_, v_00_u03b1_2826_, v_x_2827_, v_prio_2828_);
return v_res_2830_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_block___redArg(lean_object* v_x_2831_, lean_object* v_prio_2832_){
_start:
{
lean_object* v___f_2834_; lean_object* v___x_2835_; lean_object* v___x_2836_; lean_object* v___x_2837_; lean_object* v___x_2838_; uint8_t v___x_2839_; lean_object* v___x_2840_; lean_object* v___x_2841_; 
v___f_2834_ = ((lean_object*)(l_Std_Async_EAsync_asTask___redArg___closed__0));
v___x_2835_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_toBaseAsync___boxed), 4, 3);
lean_closure_set(v___x_2835_, 0, lean_box(0));
lean_closure_set(v___x_2835_, 1, lean_box(0));
lean_closure_set(v___x_2835_, 2, v_x_2831_);
v___x_2836_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_toRawBaseIO___boxed), 3, 2);
lean_closure_set(v___x_2836_, 0, lean_box(0));
lean_closure_set(v___x_2836_, 1, v___x_2835_);
v___x_2837_ = lean_io_as_task(v___x_2836_, v_prio_2832_);
v___x_2838_ = lean_unsigned_to_nat(0u);
v___x_2839_ = 1;
v___x_2840_ = lean_task_bind(v___x_2837_, v___f_2834_, v___x_2838_, v___x_2839_);
v___x_2841_ = lean_task_get_own(v___x_2840_);
if (lean_obj_tag(v___x_2841_) == 0)
{
lean_object* v_a_2842_; lean_object* v___x_2844_; uint8_t v_isShared_2845_; uint8_t v_isSharedCheck_2849_; 
v_a_2842_ = lean_ctor_get(v___x_2841_, 0);
v_isSharedCheck_2849_ = !lean_is_exclusive(v___x_2841_);
if (v_isSharedCheck_2849_ == 0)
{
v___x_2844_ = v___x_2841_;
v_isShared_2845_ = v_isSharedCheck_2849_;
goto v_resetjp_2843_;
}
else
{
lean_inc(v_a_2842_);
lean_dec(v___x_2841_);
v___x_2844_ = lean_box(0);
v_isShared_2845_ = v_isSharedCheck_2849_;
goto v_resetjp_2843_;
}
v_resetjp_2843_:
{
lean_object* v___x_2847_; 
if (v_isShared_2845_ == 0)
{
lean_ctor_set_tag(v___x_2844_, 1);
v___x_2847_ = v___x_2844_;
goto v_reusejp_2846_;
}
else
{
lean_object* v_reuseFailAlloc_2848_; 
v_reuseFailAlloc_2848_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2848_, 0, v_a_2842_);
v___x_2847_ = v_reuseFailAlloc_2848_;
goto v_reusejp_2846_;
}
v_reusejp_2846_:
{
return v___x_2847_;
}
}
}
else
{
lean_object* v_a_2850_; lean_object* v___x_2852_; uint8_t v_isShared_2853_; uint8_t v_isSharedCheck_2857_; 
v_a_2850_ = lean_ctor_get(v___x_2841_, 0);
v_isSharedCheck_2857_ = !lean_is_exclusive(v___x_2841_);
if (v_isSharedCheck_2857_ == 0)
{
v___x_2852_ = v___x_2841_;
v_isShared_2853_ = v_isSharedCheck_2857_;
goto v_resetjp_2851_;
}
else
{
lean_inc(v_a_2850_);
lean_dec(v___x_2841_);
v___x_2852_ = lean_box(0);
v_isShared_2853_ = v_isSharedCheck_2857_;
goto v_resetjp_2851_;
}
v_resetjp_2851_:
{
lean_object* v___x_2855_; 
if (v_isShared_2853_ == 0)
{
lean_ctor_set_tag(v___x_2852_, 0);
v___x_2855_ = v___x_2852_;
goto v_reusejp_2854_;
}
else
{
lean_object* v_reuseFailAlloc_2856_; 
v_reuseFailAlloc_2856_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2856_, 0, v_a_2850_);
v___x_2855_ = v_reuseFailAlloc_2856_;
goto v_reusejp_2854_;
}
v_reusejp_2854_:
{
return v___x_2855_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_block___redArg___boxed(lean_object* v_x_2858_, lean_object* v_prio_2859_, lean_object* v___y_2860_){
_start:
{
lean_object* v_res_2861_; 
v_res_2861_ = l_Std_Async_EAsync_block___redArg(v_x_2858_, v_prio_2859_);
return v_res_2861_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_block(lean_object* v_00_u03b5_2862_, lean_object* v_00_u03b1_2863_, lean_object* v_x_2864_, lean_object* v_prio_2865_){
_start:
{
lean_object* v___f_2867_; lean_object* v___x_2868_; lean_object* v___x_2869_; lean_object* v___x_2870_; lean_object* v___x_2871_; uint8_t v___x_2872_; lean_object* v___x_2873_; lean_object* v___x_2874_; 
v___f_2867_ = ((lean_object*)(l_Std_Async_EAsync_asTask___redArg___closed__0));
v___x_2868_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_toBaseAsync___boxed), 4, 3);
lean_closure_set(v___x_2868_, 0, lean_box(0));
lean_closure_set(v___x_2868_, 1, lean_box(0));
lean_closure_set(v___x_2868_, 2, v_x_2864_);
v___x_2869_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_toRawBaseIO___boxed), 3, 2);
lean_closure_set(v___x_2869_, 0, lean_box(0));
lean_closure_set(v___x_2869_, 1, v___x_2868_);
v___x_2870_ = lean_io_as_task(v___x_2869_, v_prio_2865_);
v___x_2871_ = lean_unsigned_to_nat(0u);
v___x_2872_ = 1;
v___x_2873_ = lean_task_bind(v___x_2870_, v___f_2867_, v___x_2871_, v___x_2872_);
v___x_2874_ = lean_task_get_own(v___x_2873_);
if (lean_obj_tag(v___x_2874_) == 0)
{
lean_object* v_a_2875_; lean_object* v___x_2877_; uint8_t v_isShared_2878_; uint8_t v_isSharedCheck_2882_; 
v_a_2875_ = lean_ctor_get(v___x_2874_, 0);
v_isSharedCheck_2882_ = !lean_is_exclusive(v___x_2874_);
if (v_isSharedCheck_2882_ == 0)
{
v___x_2877_ = v___x_2874_;
v_isShared_2878_ = v_isSharedCheck_2882_;
goto v_resetjp_2876_;
}
else
{
lean_inc(v_a_2875_);
lean_dec(v___x_2874_);
v___x_2877_ = lean_box(0);
v_isShared_2878_ = v_isSharedCheck_2882_;
goto v_resetjp_2876_;
}
v_resetjp_2876_:
{
lean_object* v___x_2880_; 
if (v_isShared_2878_ == 0)
{
lean_ctor_set_tag(v___x_2877_, 1);
v___x_2880_ = v___x_2877_;
goto v_reusejp_2879_;
}
else
{
lean_object* v_reuseFailAlloc_2881_; 
v_reuseFailAlloc_2881_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2881_, 0, v_a_2875_);
v___x_2880_ = v_reuseFailAlloc_2881_;
goto v_reusejp_2879_;
}
v_reusejp_2879_:
{
return v___x_2880_;
}
}
}
else
{
lean_object* v_a_2883_; lean_object* v___x_2885_; uint8_t v_isShared_2886_; uint8_t v_isSharedCheck_2890_; 
v_a_2883_ = lean_ctor_get(v___x_2874_, 0);
v_isSharedCheck_2890_ = !lean_is_exclusive(v___x_2874_);
if (v_isSharedCheck_2890_ == 0)
{
v___x_2885_ = v___x_2874_;
v_isShared_2886_ = v_isSharedCheck_2890_;
goto v_resetjp_2884_;
}
else
{
lean_inc(v_a_2883_);
lean_dec(v___x_2874_);
v___x_2885_ = lean_box(0);
v_isShared_2886_ = v_isSharedCheck_2890_;
goto v_resetjp_2884_;
}
v_resetjp_2884_:
{
lean_object* v___x_2888_; 
if (v_isShared_2886_ == 0)
{
lean_ctor_set_tag(v___x_2885_, 0);
v___x_2888_ = v___x_2885_;
goto v_reusejp_2887_;
}
else
{
lean_object* v_reuseFailAlloc_2889_; 
v_reuseFailAlloc_2889_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2889_, 0, v_a_2883_);
v___x_2888_ = v_reuseFailAlloc_2889_;
goto v_reusejp_2887_;
}
v_reusejp_2887_:
{
return v___x_2888_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_block___boxed(lean_object* v_00_u03b5_2891_, lean_object* v_00_u03b1_2892_, lean_object* v_x_2893_, lean_object* v_prio_2894_, lean_object* v___y_2895_){
_start:
{
lean_object* v_res_2896_; 
v_res_2896_ = l_Std_Async_EAsync_block(v_00_u03b5_2891_, v_00_u03b1_2892_, v_x_2893_, v_prio_2894_);
return v_res_2896_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_throw___redArg(lean_object* v_e_2897_){
_start:
{
lean_object* v___x_2899_; lean_object* v___x_2900_; 
v___x_2899_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2899_, 0, v_e_2897_);
v___x_2900_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2900_, 0, v___x_2899_);
return v___x_2900_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_throw___redArg___boxed(lean_object* v_e_2901_, lean_object* v___y_2902_){
_start:
{
lean_object* v_res_2903_; 
v_res_2903_ = l_Std_Async_EAsync_throw___redArg(v_e_2901_);
return v_res_2903_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_throw(lean_object* v_00_u03b5_2904_, lean_object* v_00_u03b1_2905_, lean_object* v_e_2906_){
_start:
{
lean_object* v___x_2908_; lean_object* v___x_2909_; 
v___x_2908_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2908_, 0, v_e_2906_);
v___x_2909_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2909_, 0, v___x_2908_);
return v___x_2909_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_throw___boxed(lean_object* v_00_u03b5_2910_, lean_object* v_00_u03b1_2911_, lean_object* v_e_2912_, lean_object* v___y_2913_){
_start:
{
lean_object* v_res_2914_; 
v_res_2914_ = l_Std_Async_EAsync_throw(v_00_u03b5_2910_, v_00_u03b1_2911_, v_e_2912_);
return v_res_2914_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_tryCatch___redArg___lam__0(lean_object* v_f_2915_, lean_object* v_x_2916_){
_start:
{
if (lean_obj_tag(v_x_2916_) == 0)
{
lean_object* v_a_2918_; lean_object* v___x_2919_; 
v_a_2918_ = lean_ctor_get(v_x_2916_, 0);
lean_inc(v_a_2918_);
lean_dec_ref_known(v_x_2916_, 1);
v___x_2919_ = lean_apply_2(v_f_2915_, v_a_2918_, lean_box(0));
return v___x_2919_;
}
else
{
lean_object* v___x_2920_; 
lean_dec_ref(v_f_2915_);
v___x_2920_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2920_, 0, v_x_2916_);
return v___x_2920_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_tryCatch___redArg___lam__0___boxed(lean_object* v_f_2921_, lean_object* v_x_2922_, lean_object* v___y_2923_){
_start:
{
lean_object* v_res_2924_; 
v_res_2924_ = l_Std_Async_EAsync_tryCatch___redArg___lam__0(v_f_2921_, v_x_2922_);
return v_res_2924_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_tryCatch___redArg(lean_object* v_x_2925_, lean_object* v_f_2926_, lean_object* v_prio_2927_, uint8_t v_sync_2928_){
_start:
{
lean_object* v___f_2930_; lean_object* v___x_2931_; lean_object* v___x_2932_; 
v___f_2930_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_tryCatch___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_2930_, 0, v_f_2926_);
v___x_2931_ = lean_apply_1(v_x_2925_, lean_box(0));
v___x_2932_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v_prio_2927_, v_sync_2928_, v___x_2931_, v___f_2930_);
return v___x_2932_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_tryCatch___redArg___boxed(lean_object* v_x_2933_, lean_object* v_f_2934_, lean_object* v_prio_2935_, lean_object* v_sync_2936_, lean_object* v___y_2937_){
_start:
{
uint8_t v_sync_boxed_2938_; lean_object* v_res_2939_; 
v_sync_boxed_2938_ = lean_unbox(v_sync_2936_);
v_res_2939_ = l_Std_Async_EAsync_tryCatch___redArg(v_x_2933_, v_f_2934_, v_prio_2935_, v_sync_boxed_2938_);
return v_res_2939_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_tryCatch(lean_object* v_00_u03b5_2940_, lean_object* v_00_u03b1_2941_, lean_object* v_x_2942_, lean_object* v_f_2943_, lean_object* v_prio_2944_, uint8_t v_sync_2945_){
_start:
{
lean_object* v___f_2947_; lean_object* v___x_2948_; lean_object* v___x_2949_; 
v___f_2947_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_tryCatch___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_2947_, 0, v_f_2943_);
v___x_2948_ = lean_apply_1(v_x_2942_, lean_box(0));
v___x_2949_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v_prio_2944_, v_sync_2945_, v___x_2948_, v___f_2947_);
return v___x_2949_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_tryCatch___boxed(lean_object* v_00_u03b5_2950_, lean_object* v_00_u03b1_2951_, lean_object* v_x_2952_, lean_object* v_f_2953_, lean_object* v_prio_2954_, lean_object* v_sync_2955_, lean_object* v___y_2956_){
_start:
{
uint8_t v_sync_boxed_2957_; lean_object* v_res_2958_; 
v_sync_boxed_2957_ = lean_unbox(v_sync_2955_);
v_res_2958_ = l_Std_Async_EAsync_tryCatch(v_00_u03b5_2950_, v_00_u03b1_2951_, v_x_2952_, v_f_2953_, v_prio_2954_, v_sync_boxed_2957_);
return v_res_2958_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_tryFinally_x27___redArg___lam__0(lean_object* v_a_2959_, lean_object* v_____do__lift_2960_){
_start:
{
if (lean_obj_tag(v_____do__lift_2960_) == 0)
{
lean_object* v_a_2962_; lean_object* v___x_2964_; uint8_t v_isShared_2965_; uint8_t v_isSharedCheck_2970_; 
lean_dec(v_a_2959_);
v_a_2962_ = lean_ctor_get(v_____do__lift_2960_, 0);
v_isSharedCheck_2970_ = !lean_is_exclusive(v_____do__lift_2960_);
if (v_isSharedCheck_2970_ == 0)
{
v___x_2964_ = v_____do__lift_2960_;
v_isShared_2965_ = v_isSharedCheck_2970_;
goto v_resetjp_2963_;
}
else
{
lean_inc(v_a_2962_);
lean_dec(v_____do__lift_2960_);
v___x_2964_ = lean_box(0);
v_isShared_2965_ = v_isSharedCheck_2970_;
goto v_resetjp_2963_;
}
v_resetjp_2963_:
{
lean_object* v___x_2967_; 
if (v_isShared_2965_ == 0)
{
v___x_2967_ = v___x_2964_;
goto v_reusejp_2966_;
}
else
{
lean_object* v_reuseFailAlloc_2969_; 
v_reuseFailAlloc_2969_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2969_, 0, v_a_2962_);
v___x_2967_ = v_reuseFailAlloc_2969_;
goto v_reusejp_2966_;
}
v_reusejp_2966_:
{
lean_object* v___x_2968_; 
v___x_2968_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2968_, 0, v___x_2967_);
return v___x_2968_;
}
}
}
else
{
lean_object* v___x_2972_; uint8_t v_isShared_2973_; uint8_t v_isSharedCheck_2978_; 
v_isSharedCheck_2978_ = !lean_is_exclusive(v_____do__lift_2960_);
if (v_isSharedCheck_2978_ == 0)
{
lean_object* v_unused_2979_; 
v_unused_2979_ = lean_ctor_get(v_____do__lift_2960_, 0);
lean_dec(v_unused_2979_);
v___x_2972_ = v_____do__lift_2960_;
v_isShared_2973_ = v_isSharedCheck_2978_;
goto v_resetjp_2971_;
}
else
{
lean_dec(v_____do__lift_2960_);
v___x_2972_ = lean_box(0);
v_isShared_2973_ = v_isSharedCheck_2978_;
goto v_resetjp_2971_;
}
v_resetjp_2971_:
{
lean_object* v___x_2975_; 
if (v_isShared_2973_ == 0)
{
lean_ctor_set_tag(v___x_2972_, 0);
lean_ctor_set(v___x_2972_, 0, v_a_2959_);
v___x_2975_ = v___x_2972_;
goto v_reusejp_2974_;
}
else
{
lean_object* v_reuseFailAlloc_2977_; 
v_reuseFailAlloc_2977_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2977_, 0, v_a_2959_);
v___x_2975_ = v_reuseFailAlloc_2977_;
goto v_reusejp_2974_;
}
v_reusejp_2974_:
{
lean_object* v___x_2976_; 
v___x_2976_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2976_, 0, v___x_2975_);
return v___x_2976_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_tryFinally_x27___redArg___lam__0___boxed(lean_object* v_a_2980_, lean_object* v_____do__lift_2981_, lean_object* v___y_2982_){
_start:
{
lean_object* v_res_2983_; 
v_res_2983_ = l_Std_Async_EAsync_tryFinally_x27___redArg___lam__0(v_a_2980_, v_____do__lift_2981_);
return v_res_2983_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_tryFinally_x27___redArg___lam__1(lean_object* v_a_2984_, lean_object* v_____do__lift_2985_){
_start:
{
if (lean_obj_tag(v_____do__lift_2985_) == 0)
{
lean_object* v_a_2987_; lean_object* v___x_2989_; uint8_t v_isShared_2990_; uint8_t v_isSharedCheck_2995_; 
lean_dec(v_a_2984_);
v_a_2987_ = lean_ctor_get(v_____do__lift_2985_, 0);
v_isSharedCheck_2995_ = !lean_is_exclusive(v_____do__lift_2985_);
if (v_isSharedCheck_2995_ == 0)
{
v___x_2989_ = v_____do__lift_2985_;
v_isShared_2990_ = v_isSharedCheck_2995_;
goto v_resetjp_2988_;
}
else
{
lean_inc(v_a_2987_);
lean_dec(v_____do__lift_2985_);
v___x_2989_ = lean_box(0);
v_isShared_2990_ = v_isSharedCheck_2995_;
goto v_resetjp_2988_;
}
v_resetjp_2988_:
{
lean_object* v___x_2992_; 
if (v_isShared_2990_ == 0)
{
v___x_2992_ = v___x_2989_;
goto v_reusejp_2991_;
}
else
{
lean_object* v_reuseFailAlloc_2994_; 
v_reuseFailAlloc_2994_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2994_, 0, v_a_2987_);
v___x_2992_ = v_reuseFailAlloc_2994_;
goto v_reusejp_2991_;
}
v_reusejp_2991_:
{
lean_object* v___x_2993_; 
v___x_2993_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2993_, 0, v___x_2992_);
return v___x_2993_;
}
}
}
else
{
lean_object* v_a_2996_; lean_object* v___x_2998_; uint8_t v_isShared_2999_; uint8_t v_isSharedCheck_3005_; 
v_a_2996_ = lean_ctor_get(v_____do__lift_2985_, 0);
v_isSharedCheck_3005_ = !lean_is_exclusive(v_____do__lift_2985_);
if (v_isSharedCheck_3005_ == 0)
{
v___x_2998_ = v_____do__lift_2985_;
v_isShared_2999_ = v_isSharedCheck_3005_;
goto v_resetjp_2997_;
}
else
{
lean_inc(v_a_2996_);
lean_dec(v_____do__lift_2985_);
v___x_2998_ = lean_box(0);
v_isShared_2999_ = v_isSharedCheck_3005_;
goto v_resetjp_2997_;
}
v_resetjp_2997_:
{
lean_object* v___x_3000_; lean_object* v___x_3002_; 
v___x_3000_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3000_, 0, v_a_2984_);
lean_ctor_set(v___x_3000_, 1, v_a_2996_);
if (v_isShared_2999_ == 0)
{
lean_ctor_set(v___x_2998_, 0, v___x_3000_);
v___x_3002_ = v___x_2998_;
goto v_reusejp_3001_;
}
else
{
lean_object* v_reuseFailAlloc_3004_; 
v_reuseFailAlloc_3004_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3004_, 0, v___x_3000_);
v___x_3002_ = v_reuseFailAlloc_3004_;
goto v_reusejp_3001_;
}
v_reusejp_3001_:
{
lean_object* v___x_3003_; 
v___x_3003_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3003_, 0, v___x_3002_);
return v___x_3003_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_tryFinally_x27___redArg___lam__1___boxed(lean_object* v_a_3006_, lean_object* v_____do__lift_3007_, lean_object* v___y_3008_){
_start:
{
lean_object* v_res_3009_; 
v_res_3009_ = l_Std_Async_EAsync_tryFinally_x27___redArg___lam__1(v_a_3006_, v_____do__lift_3007_);
return v_res_3009_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_tryFinally_x27___redArg___lam__2(lean_object* v_f_3010_, lean_object* v_x_3011_){
_start:
{
if (lean_obj_tag(v_x_3011_) == 0)
{
lean_object* v_a_3013_; lean_object* v___f_3014_; lean_object* v___x_3015_; lean_object* v___x_3016_; uint8_t v___x_3017_; lean_object* v___x_3018_; lean_object* v___x_3019_; 
v_a_3013_ = lean_ctor_get(v_x_3011_, 0);
lean_inc(v_a_3013_);
lean_dec_ref_known(v_x_3011_, 1);
v___f_3014_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_tryFinally_x27___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_3014_, 0, v_a_3013_);
v___x_3015_ = lean_box(0);
v___x_3016_ = lean_unsigned_to_nat(0u);
v___x_3017_ = 0;
v___x_3018_ = lean_apply_2(v_f_3010_, v___x_3015_, lean_box(0));
v___x_3019_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3016_, v___x_3017_, v___x_3018_, v___f_3014_);
return v___x_3019_;
}
else
{
lean_object* v_a_3020_; lean_object* v___x_3022_; uint8_t v_isShared_3023_; uint8_t v_isSharedCheck_3032_; 
v_a_3020_ = lean_ctor_get(v_x_3011_, 0);
v_isSharedCheck_3032_ = !lean_is_exclusive(v_x_3011_);
if (v_isSharedCheck_3032_ == 0)
{
v___x_3022_ = v_x_3011_;
v_isShared_3023_ = v_isSharedCheck_3032_;
goto v_resetjp_3021_;
}
else
{
lean_inc(v_a_3020_);
lean_dec(v_x_3011_);
v___x_3022_ = lean_box(0);
v_isShared_3023_ = v_isSharedCheck_3032_;
goto v_resetjp_3021_;
}
v_resetjp_3021_:
{
lean_object* v___f_3024_; lean_object* v___x_3026_; 
lean_inc(v_a_3020_);
v___f_3024_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_tryFinally_x27___redArg___lam__1___boxed), 3, 1);
lean_closure_set(v___f_3024_, 0, v_a_3020_);
if (v_isShared_3023_ == 0)
{
v___x_3026_ = v___x_3022_;
goto v_reusejp_3025_;
}
else
{
lean_object* v_reuseFailAlloc_3031_; 
v_reuseFailAlloc_3031_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3031_, 0, v_a_3020_);
v___x_3026_ = v_reuseFailAlloc_3031_;
goto v_reusejp_3025_;
}
v_reusejp_3025_:
{
lean_object* v___x_3027_; uint8_t v___x_3028_; lean_object* v___x_3029_; lean_object* v___x_3030_; 
v___x_3027_ = lean_unsigned_to_nat(0u);
v___x_3028_ = 0;
v___x_3029_ = lean_apply_2(v_f_3010_, v___x_3026_, lean_box(0));
v___x_3030_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3027_, v___x_3028_, v___x_3029_, v___f_3024_);
return v___x_3030_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_tryFinally_x27___redArg___lam__2___boxed(lean_object* v_f_3033_, lean_object* v_x_3034_, lean_object* v___y_3035_){
_start:
{
lean_object* v_res_3036_; 
v_res_3036_ = l_Std_Async_EAsync_tryFinally_x27___redArg___lam__2(v_f_3033_, v_x_3034_);
return v_res_3036_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_tryFinally_x27___redArg(lean_object* v_x_3037_, lean_object* v_f_3038_, lean_object* v_prio_3039_, uint8_t v_sync_3040_){
_start:
{
lean_object* v___f_3042_; lean_object* v___x_3043_; lean_object* v___x_3044_; 
v___f_3042_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_tryFinally_x27___redArg___lam__2___boxed), 3, 1);
lean_closure_set(v___f_3042_, 0, v_f_3038_);
v___x_3043_ = lean_apply_1(v_x_3037_, lean_box(0));
v___x_3044_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v_prio_3039_, v_sync_3040_, v___x_3043_, v___f_3042_);
return v___x_3044_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_tryFinally_x27___redArg___boxed(lean_object* v_x_3045_, lean_object* v_f_3046_, lean_object* v_prio_3047_, lean_object* v_sync_3048_, lean_object* v___y_3049_){
_start:
{
uint8_t v_sync_boxed_3050_; lean_object* v_res_3051_; 
v_sync_boxed_3050_ = lean_unbox(v_sync_3048_);
v_res_3051_ = l_Std_Async_EAsync_tryFinally_x27___redArg(v_x_3045_, v_f_3046_, v_prio_3047_, v_sync_boxed_3050_);
return v_res_3051_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_tryFinally_x27(lean_object* v_00_u03b5_3052_, lean_object* v_00_u03b1_3053_, lean_object* v_00_u03b2_3054_, lean_object* v_x_3055_, lean_object* v_f_3056_, lean_object* v_prio_3057_, uint8_t v_sync_3058_){
_start:
{
lean_object* v___x_3060_; 
v___x_3060_ = l_Std_Async_EAsync_tryFinally_x27___redArg(v_x_3055_, v_f_3056_, v_prio_3057_, v_sync_3058_);
return v___x_3060_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_tryFinally_x27___boxed(lean_object* v_00_u03b5_3061_, lean_object* v_00_u03b1_3062_, lean_object* v_00_u03b2_3063_, lean_object* v_x_3064_, lean_object* v_f_3065_, lean_object* v_prio_3066_, lean_object* v_sync_3067_, lean_object* v___y_3068_){
_start:
{
uint8_t v_sync_boxed_3069_; lean_object* v_res_3070_; 
v_sync_boxed_3069_ = lean_unbox(v_sync_3067_);
v_res_3070_ = l_Std_Async_EAsync_tryFinally_x27(v_00_u03b5_3061_, v_00_u03b1_3062_, v_00_u03b2_3063_, v_x_3064_, v_f_3065_, v_prio_3066_, v_sync_boxed_3069_);
return v_res_3070_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_await___redArg(lean_object* v_x_3071_){
_start:
{
lean_object* v___x_3073_; 
v___x_3073_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3073_, 0, v_x_3071_);
return v___x_3073_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_await___redArg___boxed(lean_object* v_x_3074_, lean_object* v___y_3075_){
_start:
{
lean_object* v_res_3076_; 
v_res_3076_ = l_Std_Async_EAsync_await___redArg(v_x_3074_);
return v_res_3076_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_await(lean_object* v_00_u03b5_3077_, lean_object* v_00_u03b1_3078_, lean_object* v_x_3079_){
_start:
{
lean_object* v___x_3081_; 
v___x_3081_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3081_, 0, v_x_3079_);
return v___x_3081_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_await___boxed(lean_object* v_00_u03b5_3082_, lean_object* v_00_u03b1_3083_, lean_object* v_x_3084_, lean_object* v___y_3085_){
_start:
{
lean_object* v_res_3086_; 
v_res_3086_ = l_Std_Async_EAsync_await(v_00_u03b5_3082_, v_00_u03b1_3083_, v_x_3084_);
return v_res_3086_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_async___redArg(lean_object* v_self_3087_, lean_object* v_prio_3088_){
_start:
{
lean_object* v___f_3090_; lean_object* v___x_3091_; lean_object* v___x_3092_; lean_object* v___x_3093_; lean_object* v___x_3094_; uint8_t v___x_3095_; lean_object* v___x_3096_; lean_object* v___x_3097_; lean_object* v___x_3098_; 
v___f_3090_ = ((lean_object*)(l_Std_Async_EAsync_asTask___redArg___closed__0));
v___x_3091_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_toBaseAsync___boxed), 4, 3);
lean_closure_set(v___x_3091_, 0, lean_box(0));
lean_closure_set(v___x_3091_, 1, lean_box(0));
lean_closure_set(v___x_3091_, 2, v_self_3087_);
v___x_3092_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_toRawBaseIO___boxed), 3, 2);
lean_closure_set(v___x_3092_, 0, lean_box(0));
lean_closure_set(v___x_3092_, 1, v___x_3091_);
v___x_3093_ = lean_io_as_task(v___x_3092_, v_prio_3088_);
v___x_3094_ = lean_unsigned_to_nat(0u);
v___x_3095_ = 1;
v___x_3096_ = lean_task_bind(v___x_3093_, v___f_3090_, v___x_3094_, v___x_3095_);
v___x_3097_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3097_, 0, v___x_3096_);
v___x_3098_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3098_, 0, v___x_3097_);
return v___x_3098_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_async___redArg___boxed(lean_object* v_self_3099_, lean_object* v_prio_3100_, lean_object* v___y_3101_){
_start:
{
lean_object* v_res_3102_; 
v_res_3102_ = l_Std_Async_EAsync_async___redArg(v_self_3099_, v_prio_3100_);
return v_res_3102_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_async(lean_object* v_00_u03b5_3103_, lean_object* v_00_u03b1_3104_, lean_object* v_self_3105_, lean_object* v_prio_3106_){
_start:
{
lean_object* v___f_3108_; lean_object* v___x_3109_; lean_object* v___x_3110_; lean_object* v___x_3111_; lean_object* v___x_3112_; uint8_t v___x_3113_; lean_object* v___x_3114_; lean_object* v___x_3115_; lean_object* v___x_3116_; 
v___f_3108_ = ((lean_object*)(l_Std_Async_EAsync_asTask___redArg___closed__0));
v___x_3109_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_toBaseAsync___boxed), 4, 3);
lean_closure_set(v___x_3109_, 0, lean_box(0));
lean_closure_set(v___x_3109_, 1, lean_box(0));
lean_closure_set(v___x_3109_, 2, v_self_3105_);
v___x_3110_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_toRawBaseIO___boxed), 3, 2);
lean_closure_set(v___x_3110_, 0, lean_box(0));
lean_closure_set(v___x_3110_, 1, v___x_3109_);
v___x_3111_ = lean_io_as_task(v___x_3110_, v_prio_3106_);
v___x_3112_ = lean_unsigned_to_nat(0u);
v___x_3113_ = 1;
v___x_3114_ = lean_task_bind(v___x_3111_, v___f_3108_, v___x_3112_, v___x_3113_);
v___x_3115_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3115_, 0, v___x_3114_);
v___x_3116_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3116_, 0, v___x_3115_);
return v___x_3116_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_async___boxed(lean_object* v_00_u03b5_3117_, lean_object* v_00_u03b1_3118_, lean_object* v_self_3119_, lean_object* v_prio_3120_, lean_object* v___y_3121_){
_start:
{
lean_object* v_res_3122_; 
v_res_3122_ = l_Std_Async_EAsync_async(v_00_u03b5_3117_, v_00_u03b1_3118_, v_self_3119_, v_prio_3120_);
return v_res_3122_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instFunctor___redArg___lam__0(lean_object* v_00_u03b1_3123_, lean_object* v_00_u03b2_3124_, lean_object* v___y_3125_, lean_object* v___y_3126_){
_start:
{
lean_object* v___x_3128_; lean_object* v___x_3129_; uint8_t v___x_3130_; lean_object* v___x_3131_; lean_object* v___y_3133_; 
lean_inc(v___y_3125_);
v___x_3128_ = lean_alloc_closure((void*)(l_Except_map), 5, 4);
lean_closure_set(v___x_3128_, 0, lean_box(0));
lean_closure_set(v___x_3128_, 1, lean_box(0));
lean_closure_set(v___x_3128_, 2, lean_box(0));
lean_closure_set(v___x_3128_, 3, v___y_3125_);
v___x_3129_ = lean_unsigned_to_nat(0u);
v___x_3130_ = 0;
v___x_3131_ = lean_apply_1(v___y_3126_, lean_box(0));
if (lean_obj_tag(v___x_3131_) == 0)
{
lean_object* v_a_3135_; 
lean_dec_ref(v___x_3128_);
v_a_3135_ = lean_ctor_get(v___x_3131_, 0);
lean_inc(v_a_3135_);
lean_dec_ref_known(v___x_3131_, 1);
if (lean_obj_tag(v_a_3135_) == 0)
{
lean_object* v_a_3136_; lean_object* v___x_3138_; uint8_t v_isShared_3139_; uint8_t v_isSharedCheck_3143_; 
lean_dec(v___y_3125_);
v_a_3136_ = lean_ctor_get(v_a_3135_, 0);
v_isSharedCheck_3143_ = !lean_is_exclusive(v_a_3135_);
if (v_isSharedCheck_3143_ == 0)
{
v___x_3138_ = v_a_3135_;
v_isShared_3139_ = v_isSharedCheck_3143_;
goto v_resetjp_3137_;
}
else
{
lean_inc(v_a_3136_);
lean_dec(v_a_3135_);
v___x_3138_ = lean_box(0);
v_isShared_3139_ = v_isSharedCheck_3143_;
goto v_resetjp_3137_;
}
v_resetjp_3137_:
{
lean_object* v___x_3141_; 
if (v_isShared_3139_ == 0)
{
v___x_3141_ = v___x_3138_;
goto v_reusejp_3140_;
}
else
{
lean_object* v_reuseFailAlloc_3142_; 
v_reuseFailAlloc_3142_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3142_, 0, v_a_3136_);
v___x_3141_ = v_reuseFailAlloc_3142_;
goto v_reusejp_3140_;
}
v_reusejp_3140_:
{
v___y_3133_ = v___x_3141_;
goto v___jp_3132_;
}
}
}
else
{
lean_object* v_a_3144_; lean_object* v___x_3146_; uint8_t v_isShared_3147_; uint8_t v_isSharedCheck_3152_; 
v_a_3144_ = lean_ctor_get(v_a_3135_, 0);
v_isSharedCheck_3152_ = !lean_is_exclusive(v_a_3135_);
if (v_isSharedCheck_3152_ == 0)
{
v___x_3146_ = v_a_3135_;
v_isShared_3147_ = v_isSharedCheck_3152_;
goto v_resetjp_3145_;
}
else
{
lean_inc(v_a_3144_);
lean_dec(v_a_3135_);
v___x_3146_ = lean_box(0);
v_isShared_3147_ = v_isSharedCheck_3152_;
goto v_resetjp_3145_;
}
v_resetjp_3145_:
{
lean_object* v___x_3148_; lean_object* v___x_3150_; 
v___x_3148_ = lean_apply_1(v___y_3125_, v_a_3144_);
if (v_isShared_3147_ == 0)
{
lean_ctor_set(v___x_3146_, 0, v___x_3148_);
v___x_3150_ = v___x_3146_;
goto v_reusejp_3149_;
}
else
{
lean_object* v_reuseFailAlloc_3151_; 
v_reuseFailAlloc_3151_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3151_, 0, v___x_3148_);
v___x_3150_ = v_reuseFailAlloc_3151_;
goto v_reusejp_3149_;
}
v_reusejp_3149_:
{
v___y_3133_ = v___x_3150_;
goto v___jp_3132_;
}
}
}
}
else
{
lean_object* v_a_3153_; lean_object* v___x_3155_; uint8_t v_isShared_3156_; uint8_t v_isSharedCheck_3161_; 
lean_dec(v___y_3125_);
v_a_3153_ = lean_ctor_get(v___x_3131_, 0);
v_isSharedCheck_3161_ = !lean_is_exclusive(v___x_3131_);
if (v_isSharedCheck_3161_ == 0)
{
v___x_3155_ = v___x_3131_;
v_isShared_3156_ = v_isSharedCheck_3161_;
goto v_resetjp_3154_;
}
else
{
lean_inc(v_a_3153_);
lean_dec(v___x_3131_);
v___x_3155_ = lean_box(0);
v_isShared_3156_ = v_isSharedCheck_3161_;
goto v_resetjp_3154_;
}
v_resetjp_3154_:
{
lean_object* v___x_3157_; lean_object* v___x_3159_; 
v___x_3157_ = lean_task_map(v___x_3128_, v_a_3153_, v___x_3129_, v___x_3130_);
if (v_isShared_3156_ == 0)
{
lean_ctor_set(v___x_3155_, 0, v___x_3157_);
v___x_3159_ = v___x_3155_;
goto v_reusejp_3158_;
}
else
{
lean_object* v_reuseFailAlloc_3160_; 
v_reuseFailAlloc_3160_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3160_, 0, v___x_3157_);
v___x_3159_ = v_reuseFailAlloc_3160_;
goto v_reusejp_3158_;
}
v_reusejp_3158_:
{
return v___x_3159_;
}
}
}
v___jp_3132_:
{
lean_object* v___x_3134_; 
v___x_3134_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3134_, 0, v___y_3133_);
return v___x_3134_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instFunctor___redArg___lam__0___boxed(lean_object* v_00_u03b1_3162_, lean_object* v_00_u03b2_3163_, lean_object* v___y_3164_, lean_object* v___y_3165_, lean_object* v___y_3166_){
_start:
{
lean_object* v_res_3167_; 
v_res_3167_ = l_Std_Async_EAsync_instFunctor___redArg___lam__0(v_00_u03b1_3162_, v_00_u03b2_3163_, v___y_3164_, v___y_3165_);
return v_res_3167_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instFunctor___redArg___lam__1(lean_object* v___f_3168_, lean_object* v_00_u03b1_3169_, lean_object* v_00_u03b2_3170_, lean_object* v___y_3171_, lean_object* v___y_3172_){
_start:
{
lean_object* v___x_3174_; lean_object* v___x_3175_; 
v___x_3174_ = lean_alloc_closure((void*)(l_Function_const___boxed), 4, 3);
lean_closure_set(v___x_3174_, 0, lean_box(0));
lean_closure_set(v___x_3174_, 1, lean_box(0));
lean_closure_set(v___x_3174_, 2, v___y_3171_);
v___x_3175_ = lean_apply_5(v___f_3168_, lean_box(0), lean_box(0), v___x_3174_, v___y_3172_, lean_box(0));
return v___x_3175_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instFunctor___redArg___lam__1___boxed(lean_object* v___f_3176_, lean_object* v_00_u03b1_3177_, lean_object* v_00_u03b2_3178_, lean_object* v___y_3179_, lean_object* v___y_3180_, lean_object* v___y_3181_){
_start:
{
lean_object* v_res_3182_; 
v_res_3182_ = l_Std_Async_EAsync_instFunctor___redArg___lam__1(v___f_3176_, v_00_u03b1_3177_, v_00_u03b2_3178_, v___y_3179_, v___y_3180_);
return v_res_3182_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instFunctor___redArg(){
_start:
{
lean_object* v___x_3190_; 
v___x_3190_ = ((lean_object*)(l_Std_Async_EAsync_instFunctor___redArg___closed__2));
return v___x_3190_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instFunctor___redArg___boxed(lean_object* v___dummy_3191_){
_start:
{
lean_object* v_res_3192_; 
v_res_3192_ = l_Std_Async_EAsync_instFunctor___redArg();
return v_res_3192_;
}
}
static lean_object* _init_l_Std_Async_EAsync_instFunctor___closed__0(void){
_start:
{
lean_object* v___x_3193_; 
v___x_3193_ = l_Std_Async_EAsync_instFunctor___redArg();
return v___x_3193_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instFunctor(lean_object* v_00_u03b5_3194_){
_start:
{
lean_object* v___x_3195_; 
v___x_3195_ = lean_obj_once(&l_Std_Async_EAsync_instFunctor___closed__0, &l_Std_Async_EAsync_instFunctor___closed__0_once, _init_l_Std_Async_EAsync_instFunctor___closed__0);
return v___x_3195_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonad___redArg___lam__0(lean_object* v_00_u03b1_3196_, lean_object* v___y_3197_){
_start:
{
lean_object* v___x_3199_; lean_object* v___x_3200_; 
v___x_3199_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3199_, 0, v___y_3197_);
v___x_3200_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3200_, 0, v___x_3199_);
return v___x_3200_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonad___redArg___lam__0___boxed(lean_object* v_00_u03b1_3201_, lean_object* v___y_3202_, lean_object* v___y_3203_){
_start:
{
lean_object* v_res_3204_; 
v_res_3204_ = l_Std_Async_EAsync_instMonad___redArg___lam__0(v_00_u03b1_3201_, v___y_3202_);
return v_res_3204_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonad___redArg___lam__1(lean_object* v_x_3205_, lean_object* v_x_3206_){
_start:
{
if (lean_obj_tag(v_x_3206_) == 0)
{
lean_object* v_a_3208_; lean_object* v___x_3210_; uint8_t v_isShared_3211_; uint8_t v_isSharedCheck_3216_; 
lean_dec_ref(v_x_3205_);
v_a_3208_ = lean_ctor_get(v_x_3206_, 0);
v_isSharedCheck_3216_ = !lean_is_exclusive(v_x_3206_);
if (v_isSharedCheck_3216_ == 0)
{
v___x_3210_ = v_x_3206_;
v_isShared_3211_ = v_isSharedCheck_3216_;
goto v_resetjp_3209_;
}
else
{
lean_inc(v_a_3208_);
lean_dec(v_x_3206_);
v___x_3210_ = lean_box(0);
v_isShared_3211_ = v_isSharedCheck_3216_;
goto v_resetjp_3209_;
}
v_resetjp_3209_:
{
lean_object* v___x_3213_; 
if (v_isShared_3211_ == 0)
{
v___x_3213_ = v___x_3210_;
goto v_reusejp_3212_;
}
else
{
lean_object* v_reuseFailAlloc_3215_; 
v_reuseFailAlloc_3215_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3215_, 0, v_a_3208_);
v___x_3213_ = v_reuseFailAlloc_3215_;
goto v_reusejp_3212_;
}
v_reusejp_3212_:
{
lean_object* v___x_3214_; 
v___x_3214_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3214_, 0, v___x_3213_);
return v___x_3214_;
}
}
}
else
{
lean_object* v_a_3217_; lean_object* v___x_3218_; lean_object* v___x_3219_; lean_object* v___x_3220_; uint8_t v___x_3221_; lean_object* v___x_3222_; lean_object* v___y_3224_; 
v_a_3217_ = lean_ctor_get(v_x_3206_, 0);
lean_inc_n(v_a_3217_, 2);
lean_dec_ref_known(v_x_3206_, 1);
v___x_3218_ = lean_box(0);
v___x_3219_ = lean_alloc_closure((void*)(l_Except_map), 5, 4);
lean_closure_set(v___x_3219_, 0, lean_box(0));
lean_closure_set(v___x_3219_, 1, lean_box(0));
lean_closure_set(v___x_3219_, 2, lean_box(0));
lean_closure_set(v___x_3219_, 3, v_a_3217_);
v___x_3220_ = lean_unsigned_to_nat(0u);
v___x_3221_ = 0;
v___x_3222_ = lean_apply_2(v_x_3205_, v___x_3218_, lean_box(0));
if (lean_obj_tag(v___x_3222_) == 0)
{
lean_object* v_a_3226_; 
lean_dec_ref(v___x_3219_);
v_a_3226_ = lean_ctor_get(v___x_3222_, 0);
lean_inc(v_a_3226_);
lean_dec_ref_known(v___x_3222_, 1);
if (lean_obj_tag(v_a_3226_) == 0)
{
lean_object* v_a_3227_; lean_object* v___x_3229_; uint8_t v_isShared_3230_; uint8_t v_isSharedCheck_3234_; 
lean_dec(v_a_3217_);
v_a_3227_ = lean_ctor_get(v_a_3226_, 0);
v_isSharedCheck_3234_ = !lean_is_exclusive(v_a_3226_);
if (v_isSharedCheck_3234_ == 0)
{
v___x_3229_ = v_a_3226_;
v_isShared_3230_ = v_isSharedCheck_3234_;
goto v_resetjp_3228_;
}
else
{
lean_inc(v_a_3227_);
lean_dec(v_a_3226_);
v___x_3229_ = lean_box(0);
v_isShared_3230_ = v_isSharedCheck_3234_;
goto v_resetjp_3228_;
}
v_resetjp_3228_:
{
lean_object* v___x_3232_; 
if (v_isShared_3230_ == 0)
{
v___x_3232_ = v___x_3229_;
goto v_reusejp_3231_;
}
else
{
lean_object* v_reuseFailAlloc_3233_; 
v_reuseFailAlloc_3233_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3233_, 0, v_a_3227_);
v___x_3232_ = v_reuseFailAlloc_3233_;
goto v_reusejp_3231_;
}
v_reusejp_3231_:
{
v___y_3224_ = v___x_3232_;
goto v___jp_3223_;
}
}
}
else
{
lean_object* v_a_3235_; lean_object* v___x_3237_; uint8_t v_isShared_3238_; uint8_t v_isSharedCheck_3243_; 
v_a_3235_ = lean_ctor_get(v_a_3226_, 0);
v_isSharedCheck_3243_ = !lean_is_exclusive(v_a_3226_);
if (v_isSharedCheck_3243_ == 0)
{
v___x_3237_ = v_a_3226_;
v_isShared_3238_ = v_isSharedCheck_3243_;
goto v_resetjp_3236_;
}
else
{
lean_inc(v_a_3235_);
lean_dec(v_a_3226_);
v___x_3237_ = lean_box(0);
v_isShared_3238_ = v_isSharedCheck_3243_;
goto v_resetjp_3236_;
}
v_resetjp_3236_:
{
lean_object* v___x_3239_; lean_object* v___x_3241_; 
v___x_3239_ = lean_apply_1(v_a_3217_, v_a_3235_);
if (v_isShared_3238_ == 0)
{
lean_ctor_set(v___x_3237_, 0, v___x_3239_);
v___x_3241_ = v___x_3237_;
goto v_reusejp_3240_;
}
else
{
lean_object* v_reuseFailAlloc_3242_; 
v_reuseFailAlloc_3242_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3242_, 0, v___x_3239_);
v___x_3241_ = v_reuseFailAlloc_3242_;
goto v_reusejp_3240_;
}
v_reusejp_3240_:
{
v___y_3224_ = v___x_3241_;
goto v___jp_3223_;
}
}
}
}
else
{
lean_object* v_a_3244_; lean_object* v___x_3246_; uint8_t v_isShared_3247_; uint8_t v_isSharedCheck_3252_; 
lean_dec(v_a_3217_);
v_a_3244_ = lean_ctor_get(v___x_3222_, 0);
v_isSharedCheck_3252_ = !lean_is_exclusive(v___x_3222_);
if (v_isSharedCheck_3252_ == 0)
{
v___x_3246_ = v___x_3222_;
v_isShared_3247_ = v_isSharedCheck_3252_;
goto v_resetjp_3245_;
}
else
{
lean_inc(v_a_3244_);
lean_dec(v___x_3222_);
v___x_3246_ = lean_box(0);
v_isShared_3247_ = v_isSharedCheck_3252_;
goto v_resetjp_3245_;
}
v_resetjp_3245_:
{
lean_object* v___x_3248_; lean_object* v___x_3250_; 
v___x_3248_ = lean_task_map(v___x_3219_, v_a_3244_, v___x_3220_, v___x_3221_);
if (v_isShared_3247_ == 0)
{
lean_ctor_set(v___x_3246_, 0, v___x_3248_);
v___x_3250_ = v___x_3246_;
goto v_reusejp_3249_;
}
else
{
lean_object* v_reuseFailAlloc_3251_; 
v_reuseFailAlloc_3251_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3251_, 0, v___x_3248_);
v___x_3250_ = v_reuseFailAlloc_3251_;
goto v_reusejp_3249_;
}
v_reusejp_3249_:
{
return v___x_3250_;
}
}
}
v___jp_3223_:
{
lean_object* v___x_3225_; 
v___x_3225_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3225_, 0, v___y_3224_);
return v___x_3225_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonad___redArg___lam__1___boxed(lean_object* v_x_3253_, lean_object* v_x_3254_, lean_object* v___y_3255_){
_start:
{
lean_object* v_res_3256_; 
v_res_3256_ = l_Std_Async_EAsync_instMonad___redArg___lam__1(v_x_3253_, v_x_3254_);
return v_res_3256_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonad___redArg___lam__2(lean_object* v_00_u03b1_3257_, lean_object* v_00_u03b2_3258_, lean_object* v_f_3259_, lean_object* v_x_3260_){
_start:
{
lean_object* v___f_3262_; lean_object* v___x_3263_; uint8_t v___x_3264_; lean_object* v___x_3265_; lean_object* v___x_3266_; 
v___f_3262_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_instMonad___redArg___lam__1___boxed), 3, 1);
lean_closure_set(v___f_3262_, 0, v_x_3260_);
v___x_3263_ = lean_unsigned_to_nat(0u);
v___x_3264_ = 0;
v___x_3265_ = lean_apply_1(v_f_3259_, lean_box(0));
v___x_3266_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3263_, v___x_3264_, v___x_3265_, v___f_3262_);
return v___x_3266_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonad___redArg___lam__2___boxed(lean_object* v_00_u03b1_3267_, lean_object* v_00_u03b2_3268_, lean_object* v_f_3269_, lean_object* v_x_3270_, lean_object* v___y_3271_){
_start:
{
lean_object* v_res_3272_; 
v_res_3272_ = l_Std_Async_EAsync_instMonad___redArg___lam__2(v_00_u03b1_3267_, v_00_u03b2_3268_, v_f_3269_, v_x_3270_);
return v_res_3272_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonad___redArg___lam__3(lean_object* v___f_3273_, lean_object* v_a_3274_, lean_object* v_x_3275_){
_start:
{
if (lean_obj_tag(v_x_3275_) == 0)
{
lean_object* v_a_3277_; lean_object* v___x_3279_; uint8_t v_isShared_3280_; uint8_t v_isSharedCheck_3285_; 
lean_dec(v_a_3274_);
lean_dec_ref(v___f_3273_);
v_a_3277_ = lean_ctor_get(v_x_3275_, 0);
v_isSharedCheck_3285_ = !lean_is_exclusive(v_x_3275_);
if (v_isSharedCheck_3285_ == 0)
{
v___x_3279_ = v_x_3275_;
v_isShared_3280_ = v_isSharedCheck_3285_;
goto v_resetjp_3278_;
}
else
{
lean_inc(v_a_3277_);
lean_dec(v_x_3275_);
v___x_3279_ = lean_box(0);
v_isShared_3280_ = v_isSharedCheck_3285_;
goto v_resetjp_3278_;
}
v_resetjp_3278_:
{
lean_object* v___x_3282_; 
if (v_isShared_3280_ == 0)
{
v___x_3282_ = v___x_3279_;
goto v_reusejp_3281_;
}
else
{
lean_object* v_reuseFailAlloc_3284_; 
v_reuseFailAlloc_3284_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3284_, 0, v_a_3277_);
v___x_3282_ = v_reuseFailAlloc_3284_;
goto v_reusejp_3281_;
}
v_reusejp_3281_:
{
lean_object* v___x_3283_; 
v___x_3283_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3283_, 0, v___x_3282_);
return v___x_3283_;
}
}
}
else
{
lean_object* v___x_3286_; 
lean_dec_ref_known(v_x_3275_, 1);
v___x_3286_ = lean_apply_3(v___f_3273_, lean_box(0), v_a_3274_, lean_box(0));
return v___x_3286_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonad___redArg___lam__3___boxed(lean_object* v___f_3287_, lean_object* v_a_3288_, lean_object* v_x_3289_, lean_object* v___y_3290_){
_start:
{
lean_object* v_res_3291_; 
v_res_3291_ = l_Std_Async_EAsync_instMonad___redArg___lam__3(v___f_3287_, v_a_3288_, v_x_3289_);
return v_res_3291_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonad___redArg___lam__4(lean_object* v___f_3292_, lean_object* v_y_3293_, lean_object* v_x_3294_){
_start:
{
if (lean_obj_tag(v_x_3294_) == 0)
{
lean_object* v___x_3296_; 
lean_dec_ref(v_y_3293_);
lean_dec_ref(v___f_3292_);
v___x_3296_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3296_, 0, v_x_3294_);
return v___x_3296_;
}
else
{
lean_object* v_a_3297_; lean_object* v___f_3298_; lean_object* v___x_3299_; lean_object* v___x_3300_; uint8_t v___x_3301_; lean_object* v___x_3302_; lean_object* v___x_3303_; 
v_a_3297_ = lean_ctor_get(v_x_3294_, 0);
lean_inc(v_a_3297_);
lean_dec_ref_known(v_x_3294_, 1);
v___f_3298_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_instMonad___redArg___lam__3___boxed), 4, 2);
lean_closure_set(v___f_3298_, 0, v___f_3292_);
lean_closure_set(v___f_3298_, 1, v_a_3297_);
v___x_3299_ = lean_box(0);
v___x_3300_ = lean_unsigned_to_nat(0u);
v___x_3301_ = 0;
v___x_3302_ = lean_apply_2(v_y_3293_, v___x_3299_, lean_box(0));
v___x_3303_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3300_, v___x_3301_, v___x_3302_, v___f_3298_);
return v___x_3303_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonad___redArg___lam__4___boxed(lean_object* v___f_3304_, lean_object* v_y_3305_, lean_object* v_x_3306_, lean_object* v___y_3307_){
_start:
{
lean_object* v_res_3308_; 
v_res_3308_ = l_Std_Async_EAsync_instMonad___redArg___lam__4(v___f_3304_, v_y_3305_, v_x_3306_);
return v_res_3308_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonad___redArg___lam__5(lean_object* v___f_3309_, lean_object* v_00_u03b1_3310_, lean_object* v_00_u03b2_3311_, lean_object* v_x_3312_, lean_object* v_y_3313_){
_start:
{
lean_object* v___f_3315_; lean_object* v___x_3316_; uint8_t v___x_3317_; lean_object* v___x_3318_; lean_object* v___x_3319_; 
v___f_3315_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_instMonad___redArg___lam__4___boxed), 4, 2);
lean_closure_set(v___f_3315_, 0, v___f_3309_);
lean_closure_set(v___f_3315_, 1, v_y_3313_);
v___x_3316_ = lean_unsigned_to_nat(0u);
v___x_3317_ = 0;
v___x_3318_ = lean_apply_1(v_x_3312_, lean_box(0));
v___x_3319_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3316_, v___x_3317_, v___x_3318_, v___f_3315_);
return v___x_3319_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonad___redArg___lam__5___boxed(lean_object* v___f_3320_, lean_object* v_00_u03b1_3321_, lean_object* v_00_u03b2_3322_, lean_object* v_x_3323_, lean_object* v_y_3324_, lean_object* v___y_3325_){
_start:
{
lean_object* v_res_3326_; 
v_res_3326_ = l_Std_Async_EAsync_instMonad___redArg___lam__5(v___f_3320_, v_00_u03b1_3321_, v_00_u03b2_3322_, v_x_3323_, v_y_3324_);
return v_res_3326_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonad___redArg___lam__6(lean_object* v_y_3327_, lean_object* v_x_3328_){
_start:
{
if (lean_obj_tag(v_x_3328_) == 0)
{
lean_object* v_a_3330_; lean_object* v___x_3332_; uint8_t v_isShared_3333_; uint8_t v_isSharedCheck_3338_; 
lean_dec_ref(v_y_3327_);
v_a_3330_ = lean_ctor_get(v_x_3328_, 0);
v_isSharedCheck_3338_ = !lean_is_exclusive(v_x_3328_);
if (v_isSharedCheck_3338_ == 0)
{
v___x_3332_ = v_x_3328_;
v_isShared_3333_ = v_isSharedCheck_3338_;
goto v_resetjp_3331_;
}
else
{
lean_inc(v_a_3330_);
lean_dec(v_x_3328_);
v___x_3332_ = lean_box(0);
v_isShared_3333_ = v_isSharedCheck_3338_;
goto v_resetjp_3331_;
}
v_resetjp_3331_:
{
lean_object* v___x_3335_; 
if (v_isShared_3333_ == 0)
{
v___x_3335_ = v___x_3332_;
goto v_reusejp_3334_;
}
else
{
lean_object* v_reuseFailAlloc_3337_; 
v_reuseFailAlloc_3337_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3337_, 0, v_a_3330_);
v___x_3335_ = v_reuseFailAlloc_3337_;
goto v_reusejp_3334_;
}
v_reusejp_3334_:
{
lean_object* v___x_3336_; 
v___x_3336_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3336_, 0, v___x_3335_);
return v___x_3336_;
}
}
}
else
{
lean_object* v___x_3339_; lean_object* v___x_3340_; 
lean_dec_ref_known(v_x_3328_, 1);
v___x_3339_ = lean_box(0);
v___x_3340_ = lean_apply_2(v_y_3327_, v___x_3339_, lean_box(0));
return v___x_3340_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonad___redArg___lam__6___boxed(lean_object* v_y_3341_, lean_object* v_x_3342_, lean_object* v___y_3343_){
_start:
{
lean_object* v_res_3344_; 
v_res_3344_ = l_Std_Async_EAsync_instMonad___redArg___lam__6(v_y_3341_, v_x_3342_);
return v_res_3344_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonad___redArg___lam__7(lean_object* v_00_u03b1_3345_, lean_object* v_00_u03b2_3346_, lean_object* v_x_3347_, lean_object* v_y_3348_){
_start:
{
lean_object* v___f_3350_; lean_object* v___x_3351_; uint8_t v___x_3352_; lean_object* v___x_3353_; lean_object* v___x_3354_; 
v___f_3350_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_instMonad___redArg___lam__6___boxed), 3, 1);
lean_closure_set(v___f_3350_, 0, v_y_3348_);
v___x_3351_ = lean_unsigned_to_nat(0u);
v___x_3352_ = 0;
v___x_3353_ = lean_apply_1(v_x_3347_, lean_box(0));
v___x_3354_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3351_, v___x_3352_, v___x_3353_, v___f_3350_);
return v___x_3354_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonad___redArg___lam__7___boxed(lean_object* v_00_u03b1_3355_, lean_object* v_00_u03b2_3356_, lean_object* v_x_3357_, lean_object* v_y_3358_, lean_object* v___y_3359_){
_start:
{
lean_object* v_res_3360_; 
v_res_3360_ = l_Std_Async_EAsync_instMonad___redArg___lam__7(v_00_u03b1_3355_, v_00_u03b2_3356_, v_x_3357_, v_y_3358_);
return v_res_3360_;
}
}
static lean_object* _init_l_Std_Async_EAsync_instMonad___redArg___closed__4(void){
_start:
{
lean_object* v___f_3366_; lean_object* v___f_3367_; lean_object* v___f_3368_; lean_object* v___f_3369_; lean_object* v___x_3370_; lean_object* v___x_3371_; 
v___f_3366_ = ((lean_object*)(l_Std_Async_EAsync_instMonad___redArg___closed__3));
v___f_3367_ = ((lean_object*)(l_Std_Async_EAsync_instMonad___redArg___closed__2));
v___f_3368_ = ((lean_object*)(l_Std_Async_EAsync_instMonad___redArg___closed__1));
v___f_3369_ = ((lean_object*)(l_Std_Async_EAsync_instMonad___redArg___closed__0));
v___x_3370_ = lean_obj_once(&l_Std_Async_EAsync_instFunctor___closed__0, &l_Std_Async_EAsync_instFunctor___closed__0_once, _init_l_Std_Async_EAsync_instFunctor___closed__0);
v___x_3371_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_3371_, 0, v___x_3370_);
lean_ctor_set(v___x_3371_, 1, v___f_3369_);
lean_ctor_set(v___x_3371_, 2, v___f_3368_);
lean_ctor_set(v___x_3371_, 3, v___f_3367_);
lean_ctor_set(v___x_3371_, 4, v___f_3366_);
return v___x_3371_;
}
}
static lean_object* _init_l_Std_Async_EAsync_instMonad___redArg___closed__6(void){
_start:
{
lean_object* v___x_3373_; lean_object* v___x_3374_; lean_object* v___x_3375_; 
v___x_3373_ = ((lean_object*)(l_Std_Async_EAsync_instMonad___redArg___closed__5));
v___x_3374_ = lean_obj_once(&l_Std_Async_EAsync_instMonad___redArg___closed__4, &l_Std_Async_EAsync_instMonad___redArg___closed__4_once, _init_l_Std_Async_EAsync_instMonad___redArg___closed__4);
v___x_3375_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3375_, 0, v___x_3374_);
lean_ctor_set(v___x_3375_, 1, v___x_3373_);
return v___x_3375_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonad___redArg(){
_start:
{
lean_object* v___x_3377_; 
v___x_3377_ = lean_obj_once(&l_Std_Async_EAsync_instMonad___redArg___closed__6, &l_Std_Async_EAsync_instMonad___redArg___closed__6_once, _init_l_Std_Async_EAsync_instMonad___redArg___closed__6);
return v___x_3377_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonad___redArg___boxed(lean_object* v___dummy_3378_){
_start:
{
lean_object* v_res_3379_; 
v_res_3379_ = l_Std_Async_EAsync_instMonad___redArg();
return v_res_3379_;
}
}
static lean_object* _init_l_Std_Async_EAsync_instMonad___closed__0(void){
_start:
{
lean_object* v___x_3380_; 
v___x_3380_ = l_Std_Async_EAsync_instMonad___redArg();
return v___x_3380_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonad(lean_object* v_00_u03b5_3381_){
_start:
{
lean_object* v___x_3382_; 
v___x_3382_ = lean_obj_once(&l_Std_Async_EAsync_instMonad___closed__0, &l_Std_Async_EAsync_instMonad___closed__0_once, _init_l_Std_Async_EAsync_instMonad___closed__0);
return v___x_3382_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadLiftEIO___redArg(){
_start:
{
lean_object* v___x_3385_; 
v___x_3385_ = ((lean_object*)(l_Std_Async_EAsync_instMonadLiftEIO___redArg___closed__0));
return v___x_3385_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadLiftEIO___redArg___boxed(lean_object* v___dummy_3386_){
_start:
{
lean_object* v_res_3387_; 
v_res_3387_ = l_Std_Async_EAsync_instMonadLiftEIO___redArg();
return v_res_3387_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadLiftEIO(lean_object* v_00_u03b5_3388_){
_start:
{
lean_object* v___x_3389_; 
v___x_3389_ = ((lean_object*)(l_Std_Async_EAsync_instMonadLiftEIO___redArg___closed__0));
return v___x_3389_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadExcept___redArg___lam__1(lean_object* v_00_u03b1_3390_, lean_object* v_x_3391_, lean_object* v_f_3392_){
_start:
{
lean_object* v___f_3394_; lean_object* v___x_3395_; uint8_t v___x_3396_; lean_object* v___x_3397_; lean_object* v___x_3398_; 
v___f_3394_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_tryCatch___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_3394_, 0, v_f_3392_);
v___x_3395_ = lean_unsigned_to_nat(0u);
v___x_3396_ = 0;
v___x_3397_ = lean_apply_1(v_x_3391_, lean_box(0));
v___x_3398_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3395_, v___x_3396_, v___x_3397_, v___f_3394_);
return v___x_3398_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadExcept___redArg___lam__1___boxed(lean_object* v_00_u03b1_3399_, lean_object* v_x_3400_, lean_object* v_f_3401_, lean_object* v___y_3402_){
_start:
{
lean_object* v_res_3403_; 
v_res_3403_ = l_Std_Async_EAsync_instMonadExcept___redArg___lam__1(v_00_u03b1_3399_, v_x_3400_, v_f_3401_);
return v_res_3403_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadExcept___redArg(){
_start:
{
lean_object* v___x_3410_; 
v___x_3410_ = ((lean_object*)(l_Std_Async_EAsync_instMonadExcept___redArg___closed__2));
return v___x_3410_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadExcept___redArg___boxed(lean_object* v___dummy_3411_){
_start:
{
lean_object* v_res_3412_; 
v_res_3412_ = l_Std_Async_EAsync_instMonadExcept___redArg();
return v_res_3412_;
}
}
static lean_object* _init_l_Std_Async_EAsync_instMonadExcept___closed__0(void){
_start:
{
lean_object* v___x_3413_; 
v___x_3413_ = l_Std_Async_EAsync_instMonadExcept___redArg();
return v___x_3413_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadExcept(lean_object* v_00_u03b5_3414_){
_start:
{
lean_object* v___x_3415_; 
v___x_3415_ = lean_obj_once(&l_Std_Async_EAsync_instMonadExcept___closed__0, &l_Std_Async_EAsync_instMonadExcept___closed__0_once, _init_l_Std_Async_EAsync_instMonadExcept___closed__0);
return v___x_3415_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadExceptOf___redArg(){
_start:
{
lean_object* v___x_3420_; 
v___x_3420_ = ((lean_object*)(l_Std_Async_EAsync_instMonadExceptOf___redArg___closed__0));
return v___x_3420_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadExceptOf___redArg___boxed(lean_object* v___dummy_3421_){
_start:
{
lean_object* v_res_3422_; 
v_res_3422_ = l_Std_Async_EAsync_instMonadExceptOf___redArg();
return v_res_3422_;
}
}
static lean_object* _init_l_Std_Async_EAsync_instMonadExceptOf___closed__0(void){
_start:
{
lean_object* v___x_3423_; 
v___x_3423_ = l_Std_Async_EAsync_instMonadExceptOf___redArg();
return v___x_3423_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadExceptOf(lean_object* v_00_u03b5_3424_){
_start:
{
lean_object* v___x_3425_; 
v___x_3425_ = lean_obj_once(&l_Std_Async_EAsync_instMonadExceptOf___closed__0, &l_Std_Async_EAsync_instMonadExceptOf___closed__0_once, _init_l_Std_Async_EAsync_instMonadExceptOf___closed__0);
return v___x_3425_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadFinally___redArg___lam__0(lean_object* v_00_u03b1_3426_, lean_object* v_00_u03b2_3427_, lean_object* v_x_3428_, lean_object* v_f_3429_){
_start:
{
lean_object* v___x_3431_; uint8_t v___x_3432_; lean_object* v___x_3433_; 
v___x_3431_ = lean_unsigned_to_nat(0u);
v___x_3432_ = 0;
v___x_3433_ = l_Std_Async_EAsync_tryFinally_x27___redArg(v_x_3428_, v_f_3429_, v___x_3431_, v___x_3432_);
return v___x_3433_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadFinally___redArg___lam__0___boxed(lean_object* v_00_u03b1_3434_, lean_object* v_00_u03b2_3435_, lean_object* v_x_3436_, lean_object* v_f_3437_, lean_object* v___y_3438_){
_start:
{
lean_object* v_res_3439_; 
v_res_3439_ = l_Std_Async_EAsync_instMonadFinally___redArg___lam__0(v_00_u03b1_3434_, v_00_u03b2_3435_, v_x_3436_, v_f_3437_);
return v_res_3439_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadFinally___redArg(){
_start:
{
lean_object* v___f_3442_; 
v___f_3442_ = ((lean_object*)(l_Std_Async_EAsync_instMonadFinally___redArg___closed__0));
return v___f_3442_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadFinally___redArg___boxed(lean_object* v___dummy_3443_){
_start:
{
lean_object* v_res_3444_; 
v_res_3444_ = l_Std_Async_EAsync_instMonadFinally___redArg();
return v_res_3444_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadFinally(lean_object* v_00_u03b5_3445_){
_start:
{
lean_object* v___f_3446_; 
v___f_3446_ = ((lean_object*)(l_Std_Async_EAsync_instMonadFinally___redArg___closed__0));
return v___f_3446_;
}
}
static lean_object* _init_l_Std_Async_EAsync_instOrElse___redArg___closed__0(void){
_start:
{
lean_object* v___x_3447_; lean_object* v___x_3448_; 
v___x_3447_ = lean_obj_once(&l_Std_Async_EAsync_instMonadExcept___closed__0, &l_Std_Async_EAsync_instMonadExcept___closed__0_once, _init_l_Std_Async_EAsync_instMonadExcept___closed__0);
v___x_3448_ = lean_alloc_closure((void*)(l_MonadExcept_orElse), 6, 4);
lean_closure_set(v___x_3448_, 0, lean_box(0));
lean_closure_set(v___x_3448_, 1, lean_box(0));
lean_closure_set(v___x_3448_, 2, v___x_3447_);
lean_closure_set(v___x_3448_, 3, lean_box(0));
return v___x_3448_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instOrElse___redArg(){
_start:
{
lean_object* v___x_3450_; 
v___x_3450_ = lean_obj_once(&l_Std_Async_EAsync_instOrElse___redArg___closed__0, &l_Std_Async_EAsync_instOrElse___redArg___closed__0_once, _init_l_Std_Async_EAsync_instOrElse___redArg___closed__0);
return v___x_3450_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instOrElse___redArg___boxed(lean_object* v___dummy_3451_){
_start:
{
lean_object* v_res_3452_; 
v_res_3452_ = l_Std_Async_EAsync_instOrElse___redArg();
return v_res_3452_;
}
}
static lean_object* _init_l_Std_Async_EAsync_instOrElse___closed__0(void){
_start:
{
lean_object* v___x_3453_; 
v___x_3453_ = l_Std_Async_EAsync_instOrElse___redArg();
return v___x_3453_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instOrElse(lean_object* v_00_u03b5_3454_, lean_object* v_00_u03b1_3455_){
_start:
{
lean_object* v___x_3456_; 
v___x_3456_ = lean_obj_once(&l_Std_Async_EAsync_instOrElse___closed__0, &l_Std_Async_EAsync_instOrElse___closed__0_once, _init_l_Std_Async_EAsync_instOrElse___closed__0);
return v___x_3456_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instInhabited___redArg(lean_object* v_inst_3457_){
_start:
{
lean_object* v___x_3458_; lean_object* v___x_3459_; lean_object* v___x_3460_; 
v___x_3458_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3458_, 0, v_inst_3457_);
v___x_3459_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_pure___boxed), 3, 2);
lean_closure_set(v___x_3459_, 0, lean_box(0));
lean_closure_set(v___x_3459_, 1, v___x_3458_);
v___x_3460_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_mk___boxed), 4, 3);
lean_closure_set(v___x_3460_, 0, lean_box(0));
lean_closure_set(v___x_3460_, 1, lean_box(0));
lean_closure_set(v___x_3460_, 2, v___x_3459_);
return v___x_3460_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instInhabited(lean_object* v_00_u03b5_3461_, lean_object* v_00_u03b1_3462_, lean_object* v_inst_3463_){
_start:
{
lean_object* v___x_3464_; 
v___x_3464_ = l_Std_Async_EAsync_instInhabited___redArg(v_inst_3463_);
return v___x_3464_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadAwaitETask___redArg___lam__0(lean_object* v_00_u03b1_3465_, lean_object* v_t_3466_){
_start:
{
lean_object* v___x_3468_; 
v___x_3468_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3468_, 0, v_t_3466_);
return v___x_3468_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadAwaitETask___redArg___lam__0___boxed(lean_object* v_00_u03b1_3469_, lean_object* v_t_3470_, lean_object* v___y_3471_){
_start:
{
lean_object* v_res_3472_; 
v_res_3472_ = l_Std_Async_EAsync_instMonadAwaitETask___redArg___lam__0(v_00_u03b1_3469_, v_t_3470_);
return v_res_3472_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadAwaitETask___redArg(){
_start:
{
lean_object* v___f_3475_; 
v___f_3475_ = ((lean_object*)(l_Std_Async_EAsync_instMonadAwaitETask___redArg___closed__0));
return v___f_3475_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadAwaitETask___redArg___boxed(lean_object* v___dummy_3476_){
_start:
{
lean_object* v_res_3477_; 
v_res_3477_ = l_Std_Async_EAsync_instMonadAwaitETask___redArg();
return v_res_3477_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadAwaitETask(lean_object* v_00_u03b5_3478_){
_start:
{
lean_object* v___f_3479_; 
v___f_3479_ = ((lean_object*)(l_Std_Async_EAsync_instMonadAwaitETask___redArg___closed__0));
return v___f_3479_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadAwaitTask___redArg___lam__1(lean_object* v___f_3480_, lean_object* v_00_u03b1_3481_, lean_object* v_t_3482_){
_start:
{
lean_object* v___x_3484_; uint8_t v___x_3485_; lean_object* v___x_3486_; lean_object* v___x_3487_; 
v___x_3484_ = lean_unsigned_to_nat(0u);
v___x_3485_ = 0;
v___x_3486_ = lean_task_map(v___f_3480_, v_t_3482_, v___x_3484_, v___x_3485_);
v___x_3487_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3487_, 0, v___x_3486_);
return v___x_3487_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadAwaitTask___redArg___lam__1___boxed(lean_object* v___f_3488_, lean_object* v_00_u03b1_3489_, lean_object* v_t_3490_, lean_object* v___y_3491_){
_start:
{
lean_object* v_res_3492_; 
v_res_3492_ = l_Std_Async_EAsync_instMonadAwaitTask___redArg___lam__1(v___f_3488_, v_00_u03b1_3489_, v_t_3490_);
return v_res_3492_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadAwaitTask___redArg(){
_start:
{
lean_object* v___f_3496_; 
v___f_3496_ = ((lean_object*)(l_Std_Async_EAsync_instMonadAwaitTask___redArg___closed__0));
return v___f_3496_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadAwaitTask___redArg___boxed(lean_object* v___dummy_3497_){
_start:
{
lean_object* v_res_3498_; 
v_res_3498_ = l_Std_Async_EAsync_instMonadAwaitTask___redArg();
return v_res_3498_;
}
}
static lean_object* _init_l_Std_Async_EAsync_instMonadAwaitTask___closed__0(void){
_start:
{
lean_object* v___x_3499_; 
v___x_3499_ = l_Std_Async_EAsync_instMonadAwaitTask___redArg();
return v___x_3499_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadAwaitTask(lean_object* v_00_u03b5_3500_){
_start:
{
lean_object* v___x_3501_; 
v___x_3501_ = lean_obj_once(&l_Std_Async_EAsync_instMonadAwaitTask___closed__0, &l_Std_Async_EAsync_instMonadAwaitTask___closed__0_once, _init_l_Std_Async_EAsync_instMonadAwaitTask___closed__0);
return v___x_3501_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadAwaitAsyncTaskError___lam__0(lean_object* v_00_u03b1_3502_, lean_object* v_t_3503_){
_start:
{
lean_object* v___x_3505_; 
v___x_3505_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3505_, 0, v_t_3503_);
return v___x_3505_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadAwaitAsyncTaskError___lam__0___boxed(lean_object* v_00_u03b1_3506_, lean_object* v_t_3507_, lean_object* v___y_3508_){
_start:
{
lean_object* v_res_3509_; 
v_res_3509_ = l_Std_Async_EAsync_instMonadAwaitAsyncTaskError___lam__0(v_00_u03b1_3506_, v_t_3507_);
return v_res_3509_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadAwaitPromise___redArg___lam__1(lean_object* v___f_3512_, lean_object* v_00_u03b1_3513_, lean_object* v_t_3514_){
_start:
{
lean_object* v___x_3516_; lean_object* v___x_3517_; uint8_t v___x_3518_; lean_object* v___x_3519_; lean_object* v___x_3520_; 
v___x_3516_ = l_IO_Promise_result_x21___redArg(v_t_3514_);
v___x_3517_ = lean_unsigned_to_nat(0u);
v___x_3518_ = 0;
v___x_3519_ = lean_task_map(v___f_3512_, v___x_3516_, v___x_3517_, v___x_3518_);
v___x_3520_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3520_, 0, v___x_3519_);
return v___x_3520_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadAwaitPromise___redArg___lam__1___boxed(lean_object* v___f_3521_, lean_object* v_00_u03b1_3522_, lean_object* v_t_3523_, lean_object* v___y_3524_){
_start:
{
lean_object* v_res_3525_; 
v_res_3525_ = l_Std_Async_EAsync_instMonadAwaitPromise___redArg___lam__1(v___f_3521_, v_00_u03b1_3522_, v_t_3523_);
lean_dec(v_t_3523_);
return v_res_3525_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadAwaitPromise___redArg(){
_start:
{
lean_object* v___f_3529_; 
v___f_3529_ = ((lean_object*)(l_Std_Async_EAsync_instMonadAwaitPromise___redArg___closed__0));
return v___f_3529_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadAwaitPromise___redArg___boxed(lean_object* v___dummy_3530_){
_start:
{
lean_object* v_res_3531_; 
v_res_3531_ = l_Std_Async_EAsync_instMonadAwaitPromise___redArg();
return v_res_3531_;
}
}
static lean_object* _init_l_Std_Async_EAsync_instMonadAwaitPromise___closed__0(void){
_start:
{
lean_object* v___x_3532_; 
v___x_3532_ = l_Std_Async_EAsync_instMonadAwaitPromise___redArg();
return v___x_3532_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadAwaitPromise(lean_object* v_00_u03b5_3533_){
_start:
{
lean_object* v___x_3534_; 
v___x_3534_ = lean_obj_once(&l_Std_Async_EAsync_instMonadAwaitPromise___closed__0, &l_Std_Async_EAsync_instMonadAwaitPromise___closed__0_once, _init_l_Std_Async_EAsync_instMonadAwaitPromise___closed__0);
return v___x_3534_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadAsyncETask___redArg___lam__1(lean_object* v___f_3535_, lean_object* v_00_u03b1_3536_, lean_object* v_t_3537_, lean_object* v_prio_3538_){
_start:
{
lean_object* v___x_3540_; lean_object* v___x_3541_; lean_object* v___x_3542_; lean_object* v___x_3543_; uint8_t v___x_3544_; lean_object* v___x_3545_; lean_object* v___x_3546_; lean_object* v___x_3547_; 
v___x_3540_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_toBaseAsync___boxed), 4, 3);
lean_closure_set(v___x_3540_, 0, lean_box(0));
lean_closure_set(v___x_3540_, 1, lean_box(0));
lean_closure_set(v___x_3540_, 2, v_t_3537_);
v___x_3541_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_toRawBaseIO___boxed), 3, 2);
lean_closure_set(v___x_3541_, 0, lean_box(0));
lean_closure_set(v___x_3541_, 1, v___x_3540_);
v___x_3542_ = lean_io_as_task(v___x_3541_, v_prio_3538_);
v___x_3543_ = lean_unsigned_to_nat(0u);
v___x_3544_ = 1;
v___x_3545_ = lean_task_bind(v___x_3542_, v___f_3535_, v___x_3543_, v___x_3544_);
v___x_3546_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3546_, 0, v___x_3545_);
v___x_3547_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3547_, 0, v___x_3546_);
return v___x_3547_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadAsyncETask___redArg___lam__1___boxed(lean_object* v___f_3548_, lean_object* v_00_u03b1_3549_, lean_object* v_t_3550_, lean_object* v_prio_3551_, lean_object* v___y_3552_){
_start:
{
lean_object* v_res_3553_; 
v_res_3553_ = l_Std_Async_EAsync_instMonadAsyncETask___redArg___lam__1(v___f_3548_, v_00_u03b1_3549_, v_t_3550_, v_prio_3551_);
return v_res_3553_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadAsyncETask___redArg(){
_start:
{
lean_object* v___f_3557_; 
v___f_3557_ = ((lean_object*)(l_Std_Async_EAsync_instMonadAsyncETask___redArg___closed__0));
return v___f_3557_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadAsyncETask___redArg___boxed(lean_object* v___dummy_3558_){
_start:
{
lean_object* v_res_3559_; 
v_res_3559_ = l_Std_Async_EAsync_instMonadAsyncETask___redArg();
return v_res_3559_;
}
}
static lean_object* _init_l_Std_Async_EAsync_instMonadAsyncETask___closed__0(void){
_start:
{
lean_object* v___x_3560_; 
v___x_3560_ = l_Std_Async_EAsync_instMonadAsyncETask___redArg();
return v___x_3560_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadAsyncETask(lean_object* v_00_u03b5_3561_){
_start:
{
lean_object* v___x_3562_; 
v___x_3562_ = lean_obj_once(&l_Std_Async_EAsync_instMonadAsyncETask___closed__0, &l_Std_Async_EAsync_instMonadAsyncETask___closed__0_once, _init_l_Std_Async_EAsync_instMonadAsyncETask___closed__0);
return v___x_3562_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadAsyncAsyncTaskError___lam__0(lean_object* v_x_3563_){
_start:
{
if (lean_obj_tag(v_x_3563_) == 0)
{
lean_object* v_a_3564_; lean_object* v___x_3565_; 
v_a_3564_ = lean_ctor_get(v_x_3563_, 0);
lean_inc(v_a_3564_);
lean_dec_ref_known(v_x_3563_, 1);
v___x_3565_ = lean_task_pure(v_a_3564_);
return v___x_3565_;
}
else
{
lean_object* v_a_3566_; 
v_a_3566_ = lean_ctor_get(v_x_3563_, 0);
lean_inc_ref(v_a_3566_);
lean_dec_ref_known(v_x_3563_, 1);
return v_a_3566_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadAsyncAsyncTaskError___lam__1(lean_object* v___f_3567_, lean_object* v_00_u03b1_3568_, lean_object* v_t_3569_, lean_object* v_prio_3570_){
_start:
{
lean_object* v___x_3572_; lean_object* v___x_3573_; lean_object* v___x_3574_; lean_object* v___x_3575_; uint8_t v___x_3576_; lean_object* v___x_3577_; lean_object* v___x_3578_; lean_object* v___x_3579_; 
v___x_3572_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_toBaseAsync___boxed), 4, 3);
lean_closure_set(v___x_3572_, 0, lean_box(0));
lean_closure_set(v___x_3572_, 1, lean_box(0));
lean_closure_set(v___x_3572_, 2, v_t_3569_);
v___x_3573_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_toRawBaseIO___boxed), 3, 2);
lean_closure_set(v___x_3573_, 0, lean_box(0));
lean_closure_set(v___x_3573_, 1, v___x_3572_);
v___x_3574_ = lean_io_as_task(v___x_3573_, v_prio_3570_);
v___x_3575_ = lean_unsigned_to_nat(0u);
v___x_3576_ = 1;
v___x_3577_ = lean_task_bind(v___x_3574_, v___f_3567_, v___x_3575_, v___x_3576_);
v___x_3578_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3578_, 0, v___x_3577_);
v___x_3579_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3579_, 0, v___x_3578_);
return v___x_3579_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadAsyncAsyncTaskError___lam__1___boxed(lean_object* v___f_3580_, lean_object* v_00_u03b1_3581_, lean_object* v_t_3582_, lean_object* v_prio_3583_, lean_object* v___y_3584_){
_start:
{
lean_object* v_res_3585_; 
v_res_3585_ = l_Std_Async_EAsync_instMonadAsyncAsyncTaskError___lam__1(v___f_3580_, v_00_u03b1_3581_, v_t_3582_, v_prio_3583_);
return v_res_3585_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadLiftBaseIO___redArg___lam__0(lean_object* v_00_u03b1_3590_, lean_object* v_x_3591_){
_start:
{
lean_object* v___x_3593_; lean_object* v___x_3594_; lean_object* v___x_3595_; 
v___x_3593_ = lean_apply_1(v_x_3591_, lean_box(0));
v___x_3594_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3594_, 0, v___x_3593_);
v___x_3595_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3595_, 0, v___x_3594_);
return v___x_3595_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadLiftBaseIO___redArg___lam__0___boxed(lean_object* v_00_u03b1_3596_, lean_object* v_x_3597_, lean_object* v___y_3598_){
_start:
{
lean_object* v_res_3599_; 
v_res_3599_ = l_Std_Async_EAsync_instMonadLiftBaseIO___redArg___lam__0(v_00_u03b1_3596_, v_x_3597_);
return v_res_3599_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadLiftBaseIO___redArg(){
_start:
{
lean_object* v___f_3602_; 
v___f_3602_ = ((lean_object*)(l_Std_Async_EAsync_instMonadLiftBaseIO___redArg___closed__0));
return v___f_3602_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadLiftBaseIO___redArg___boxed(lean_object* v___dummy_3603_){
_start:
{
lean_object* v_res_3604_; 
v_res_3604_ = l_Std_Async_EAsync_instMonadLiftBaseIO___redArg();
return v_res_3604_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadLiftBaseIO(lean_object* v_00_u03b5_3605_){
_start:
{
lean_object* v___f_3606_; 
v___f_3606_ = ((lean_object*)(l_Std_Async_EAsync_instMonadLiftBaseIO___redArg___closed__0));
return v___f_3606_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadLiftEIO__1___redArg___lam__0(lean_object* v_00_u03b1_3607_, lean_object* v_x_3608_){
_start:
{
lean_object* v_val_3611_; lean_object* v___x_3613_; 
v___x_3613_ = lean_apply_1(v_x_3608_, lean_box(0));
if (lean_obj_tag(v___x_3613_) == 0)
{
lean_object* v_a_3614_; lean_object* v___x_3616_; uint8_t v_isShared_3617_; uint8_t v_isSharedCheck_3621_; 
v_a_3614_ = lean_ctor_get(v___x_3613_, 0);
v_isSharedCheck_3621_ = !lean_is_exclusive(v___x_3613_);
if (v_isSharedCheck_3621_ == 0)
{
v___x_3616_ = v___x_3613_;
v_isShared_3617_ = v_isSharedCheck_3621_;
goto v_resetjp_3615_;
}
else
{
lean_inc(v_a_3614_);
lean_dec(v___x_3613_);
v___x_3616_ = lean_box(0);
v_isShared_3617_ = v_isSharedCheck_3621_;
goto v_resetjp_3615_;
}
v_resetjp_3615_:
{
lean_object* v___x_3619_; 
if (v_isShared_3617_ == 0)
{
lean_ctor_set_tag(v___x_3616_, 1);
v___x_3619_ = v___x_3616_;
goto v_reusejp_3618_;
}
else
{
lean_object* v_reuseFailAlloc_3620_; 
v_reuseFailAlloc_3620_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3620_, 0, v_a_3614_);
v___x_3619_ = v_reuseFailAlloc_3620_;
goto v_reusejp_3618_;
}
v_reusejp_3618_:
{
v_val_3611_ = v___x_3619_;
goto v___jp_3610_;
}
}
}
else
{
lean_object* v_a_3622_; lean_object* v___x_3624_; uint8_t v_isShared_3625_; uint8_t v_isSharedCheck_3629_; 
v_a_3622_ = lean_ctor_get(v___x_3613_, 0);
v_isSharedCheck_3629_ = !lean_is_exclusive(v___x_3613_);
if (v_isSharedCheck_3629_ == 0)
{
v___x_3624_ = v___x_3613_;
v_isShared_3625_ = v_isSharedCheck_3629_;
goto v_resetjp_3623_;
}
else
{
lean_inc(v_a_3622_);
lean_dec(v___x_3613_);
v___x_3624_ = lean_box(0);
v_isShared_3625_ = v_isSharedCheck_3629_;
goto v_resetjp_3623_;
}
v_resetjp_3623_:
{
lean_object* v___x_3627_; 
if (v_isShared_3625_ == 0)
{
lean_ctor_set_tag(v___x_3624_, 0);
v___x_3627_ = v___x_3624_;
goto v_reusejp_3626_;
}
else
{
lean_object* v_reuseFailAlloc_3628_; 
v_reuseFailAlloc_3628_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3628_, 0, v_a_3622_);
v___x_3627_ = v_reuseFailAlloc_3628_;
goto v_reusejp_3626_;
}
v_reusejp_3626_:
{
v_val_3611_ = v___x_3627_;
goto v___jp_3610_;
}
}
}
v___jp_3610_:
{
lean_object* v___x_3612_; 
v___x_3612_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3612_, 0, v_val_3611_);
return v___x_3612_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadLiftEIO__1___redArg___lam__0___boxed(lean_object* v_00_u03b1_3630_, lean_object* v_x_3631_, lean_object* v___y_3632_){
_start:
{
lean_object* v_res_3633_; 
v_res_3633_ = l_Std_Async_EAsync_instMonadLiftEIO__1___redArg___lam__0(v_00_u03b1_3630_, v_x_3631_);
return v_res_3633_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadLiftEIO__1___redArg(){
_start:
{
lean_object* v___f_3636_; 
v___f_3636_ = ((lean_object*)(l_Std_Async_EAsync_instMonadLiftEIO__1___redArg___closed__0));
return v___f_3636_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadLiftEIO__1___redArg___boxed(lean_object* v___dummy_3637_){
_start:
{
lean_object* v_res_3638_; 
v_res_3638_ = l_Std_Async_EAsync_instMonadLiftEIO__1___redArg();
return v_res_3638_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadLiftEIO__1(lean_object* v_00_u03b5_3639_){
_start:
{
lean_object* v___f_3640_; 
v___f_3640_ = ((lean_object*)(l_Std_Async_EAsync_instMonadLiftEIO__1___redArg___closed__0));
return v___f_3640_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadLiftBaseAsync___redArg___lam__1(lean_object* v___f_3641_, lean_object* v_00_u03b1_3642_, lean_object* v_x_3643_){
_start:
{
lean_object* v___x_3645_; uint8_t v___x_3646_; lean_object* v___x_3647_; 
v___x_3645_ = lean_unsigned_to_nat(0u);
v___x_3646_ = 0;
v___x_3647_ = lean_apply_1(v_x_3643_, lean_box(0));
if (lean_obj_tag(v___x_3647_) == 0)
{
lean_object* v_a_3648_; lean_object* v___x_3650_; uint8_t v_isShared_3651_; uint8_t v_isSharedCheck_3656_; 
lean_dec_ref(v___f_3641_);
v_a_3648_ = lean_ctor_get(v___x_3647_, 0);
v_isSharedCheck_3656_ = !lean_is_exclusive(v___x_3647_);
if (v_isSharedCheck_3656_ == 0)
{
v___x_3650_ = v___x_3647_;
v_isShared_3651_ = v_isSharedCheck_3656_;
goto v_resetjp_3649_;
}
else
{
lean_inc(v_a_3648_);
lean_dec(v___x_3647_);
v___x_3650_ = lean_box(0);
v_isShared_3651_ = v_isSharedCheck_3656_;
goto v_resetjp_3649_;
}
v_resetjp_3649_:
{
lean_object* v___x_3652_; lean_object* v___x_3654_; 
v___x_3652_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3652_, 0, v_a_3648_);
if (v_isShared_3651_ == 0)
{
lean_ctor_set(v___x_3650_, 0, v___x_3652_);
v___x_3654_ = v___x_3650_;
goto v_reusejp_3653_;
}
else
{
lean_object* v_reuseFailAlloc_3655_; 
v_reuseFailAlloc_3655_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3655_, 0, v___x_3652_);
v___x_3654_ = v_reuseFailAlloc_3655_;
goto v_reusejp_3653_;
}
v_reusejp_3653_:
{
return v___x_3654_;
}
}
}
else
{
lean_object* v_a_3657_; lean_object* v___x_3659_; uint8_t v_isShared_3660_; uint8_t v_isSharedCheck_3665_; 
v_a_3657_ = lean_ctor_get(v___x_3647_, 0);
v_isSharedCheck_3665_ = !lean_is_exclusive(v___x_3647_);
if (v_isSharedCheck_3665_ == 0)
{
v___x_3659_ = v___x_3647_;
v_isShared_3660_ = v_isSharedCheck_3665_;
goto v_resetjp_3658_;
}
else
{
lean_inc(v_a_3657_);
lean_dec(v___x_3647_);
v___x_3659_ = lean_box(0);
v_isShared_3660_ = v_isSharedCheck_3665_;
goto v_resetjp_3658_;
}
v_resetjp_3658_:
{
lean_object* v___x_3661_; lean_object* v___x_3663_; 
v___x_3661_ = lean_task_map(v___f_3641_, v_a_3657_, v___x_3645_, v___x_3646_);
if (v_isShared_3660_ == 0)
{
lean_ctor_set(v___x_3659_, 0, v___x_3661_);
v___x_3663_ = v___x_3659_;
goto v_reusejp_3662_;
}
else
{
lean_object* v_reuseFailAlloc_3664_; 
v_reuseFailAlloc_3664_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3664_, 0, v___x_3661_);
v___x_3663_ = v_reuseFailAlloc_3664_;
goto v_reusejp_3662_;
}
v_reusejp_3662_:
{
return v___x_3663_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadLiftBaseAsync___redArg___lam__1___boxed(lean_object* v___f_3666_, lean_object* v_00_u03b1_3667_, lean_object* v_x_3668_, lean_object* v___y_3669_){
_start:
{
lean_object* v_res_3670_; 
v_res_3670_ = l_Std_Async_EAsync_instMonadLiftBaseAsync___redArg___lam__1(v___f_3666_, v_00_u03b1_3667_, v_x_3668_);
return v_res_3670_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadLiftBaseAsync___redArg(){
_start:
{
lean_object* v___f_3674_; 
v___f_3674_ = ((lean_object*)(l_Std_Async_EAsync_instMonadLiftBaseAsync___redArg___closed__0));
return v___f_3674_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadLiftBaseAsync___redArg___boxed(lean_object* v___dummy_3675_){
_start:
{
lean_object* v_res_3676_; 
v_res_3676_ = l_Std_Async_EAsync_instMonadLiftBaseAsync___redArg();
return v_res_3676_;
}
}
static lean_object* _init_l_Std_Async_EAsync_instMonadLiftBaseAsync___closed__0(void){
_start:
{
lean_object* v___x_3677_; 
v___x_3677_ = l_Std_Async_EAsync_instMonadLiftBaseAsync___redArg();
return v___x_3677_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadLiftBaseAsync(lean_object* v_00_u03b5_3678_){
_start:
{
lean_object* v___x_3679_; 
v___x_3679_ = lean_obj_once(&l_Std_Async_EAsync_instMonadLiftBaseAsync___closed__0, &l_Std_Async_EAsync_instMonadLiftBaseAsync___closed__0_once, _init_l_Std_Async_EAsync_instMonadLiftBaseAsync___closed__0);
return v___x_3679_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Async_Basic_0__Std_Async_EAsync_forIn_loop___redArg___lam__0___boxed(lean_object* v_promise_3680_, lean_object* v_f_3681_, lean_object* v_prio_3682_, lean_object* v_x_3683_, lean_object* v___y_3684_){
_start:
{
lean_object* v_res_3685_; 
v_res_3685_ = l___private_Std_Async_Basic_0__Std_Async_EAsync_forIn_loop___redArg___lam__0(v_promise_3680_, v_f_3681_, v_prio_3682_, v_x_3683_);
return v_res_3685_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Async_Basic_0__Std_Async_EAsync_forIn_loop___redArg(lean_object* v_f_3686_, lean_object* v_prio_3687_, lean_object* v_promise_3688_, lean_object* v_b_3689_){
_start:
{
lean_object* v___f_3691_; lean_object* v___x_3692_; lean_object* v___x_3693_; 
lean_inc(v_prio_3687_);
lean_inc_ref_n(v_f_3686_, 2);
lean_inc(v_promise_3688_);
v___f_3691_ = lean_alloc_closure((void*)(l___private_Std_Async_Basic_0__Std_Async_EAsync_forIn_loop___redArg___lam__0___boxed), 5, 3);
lean_closure_set(v___f_3691_, 0, v_promise_3688_);
lean_closure_set(v___f_3691_, 1, v_f_3686_);
lean_closure_set(v___f_3691_, 2, v_prio_3687_);
v___x_3692_ = lean_box(0);
v___x_3693_ = lean_apply_3(v_f_3686_, v___x_3692_, v_b_3689_, lean_box(0));
if (lean_obj_tag(v___x_3693_) == 0)
{
lean_object* v_a_3694_; 
lean_dec_ref(v___f_3691_);
v_a_3694_ = lean_ctor_get(v___x_3693_, 0);
lean_inc(v_a_3694_);
lean_dec_ref_known(v___x_3693_, 1);
if (lean_obj_tag(v_a_3694_) == 0)
{
lean_object* v_a_3695_; lean_object* v___x_3697_; uint8_t v_isShared_3698_; uint8_t v_isSharedCheck_3703_; 
lean_dec(v_prio_3687_);
lean_dec_ref(v_f_3686_);
v_a_3695_ = lean_ctor_get(v_a_3694_, 0);
v_isSharedCheck_3703_ = !lean_is_exclusive(v_a_3694_);
if (v_isSharedCheck_3703_ == 0)
{
v___x_3697_ = v_a_3694_;
v_isShared_3698_ = v_isSharedCheck_3703_;
goto v_resetjp_3696_;
}
else
{
lean_inc(v_a_3695_);
lean_dec(v_a_3694_);
v___x_3697_ = lean_box(0);
v_isShared_3698_ = v_isSharedCheck_3703_;
goto v_resetjp_3696_;
}
v_resetjp_3696_:
{
lean_object* v___x_3700_; 
if (v_isShared_3698_ == 0)
{
v___x_3700_ = v___x_3697_;
goto v_reusejp_3699_;
}
else
{
lean_object* v_reuseFailAlloc_3702_; 
v_reuseFailAlloc_3702_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3702_, 0, v_a_3695_);
v___x_3700_ = v_reuseFailAlloc_3702_;
goto v_reusejp_3699_;
}
v_reusejp_3699_:
{
lean_object* v___x_3701_; 
v___x_3701_ = lean_io_promise_resolve(v___x_3700_, v_promise_3688_);
lean_dec(v_promise_3688_);
return v___x_3701_;
}
}
}
else
{
lean_object* v_a_3704_; lean_object* v___x_3706_; uint8_t v_isShared_3707_; uint8_t v_isSharedCheck_3715_; 
v_a_3704_ = lean_ctor_get(v_a_3694_, 0);
v_isSharedCheck_3715_ = !lean_is_exclusive(v_a_3694_);
if (v_isSharedCheck_3715_ == 0)
{
v___x_3706_ = v_a_3694_;
v_isShared_3707_ = v_isSharedCheck_3715_;
goto v_resetjp_3705_;
}
else
{
lean_inc(v_a_3704_);
lean_dec(v_a_3694_);
v___x_3706_ = lean_box(0);
v_isShared_3707_ = v_isSharedCheck_3715_;
goto v_resetjp_3705_;
}
v_resetjp_3705_:
{
if (lean_obj_tag(v_a_3704_) == 0)
{
lean_object* v_a_3708_; lean_object* v___x_3710_; 
lean_dec(v_prio_3687_);
lean_dec_ref(v_f_3686_);
v_a_3708_ = lean_ctor_get(v_a_3704_, 0);
lean_inc(v_a_3708_);
lean_dec_ref_known(v_a_3704_, 1);
if (v_isShared_3707_ == 0)
{
lean_ctor_set(v___x_3706_, 0, v_a_3708_);
v___x_3710_ = v___x_3706_;
goto v_reusejp_3709_;
}
else
{
lean_object* v_reuseFailAlloc_3712_; 
v_reuseFailAlloc_3712_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3712_, 0, v_a_3708_);
v___x_3710_ = v_reuseFailAlloc_3712_;
goto v_reusejp_3709_;
}
v_reusejp_3709_:
{
lean_object* v___x_3711_; 
v___x_3711_ = lean_io_promise_resolve(v___x_3710_, v_promise_3688_);
lean_dec(v_promise_3688_);
return v___x_3711_;
}
}
else
{
lean_object* v_a_3713_; 
lean_del_object(v___x_3706_);
v_a_3713_ = lean_ctor_get(v_a_3704_, 0);
lean_inc(v_a_3713_);
lean_dec_ref_known(v_a_3704_, 1);
v_b_3689_ = v_a_3713_;
goto _start;
}
}
}
}
else
{
lean_object* v_a_3716_; uint8_t v___x_3717_; lean_object* v___x_3718_; 
lean_dec(v_promise_3688_);
lean_dec_ref(v_f_3686_);
v_a_3716_ = lean_ctor_get(v___x_3693_, 0);
lean_inc_ref(v_a_3716_);
lean_dec_ref_known(v___x_3693_, 1);
v___x_3717_ = 0;
v___x_3718_ = l_BaseIO_chainTask___redArg(v_a_3716_, v___f_3691_, v_prio_3687_, v___x_3717_);
return v___x_3718_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Async_Basic_0__Std_Async_EAsync_forIn_loop___redArg___lam__0(lean_object* v_promise_3719_, lean_object* v_f_3720_, lean_object* v_prio_3721_, lean_object* v_x_3722_){
_start:
{
if (lean_obj_tag(v_x_3722_) == 0)
{
lean_object* v_a_3724_; lean_object* v___x_3726_; uint8_t v_isShared_3727_; uint8_t v_isSharedCheck_3732_; 
lean_dec(v_prio_3721_);
lean_dec_ref(v_f_3720_);
v_a_3724_ = lean_ctor_get(v_x_3722_, 0);
v_isSharedCheck_3732_ = !lean_is_exclusive(v_x_3722_);
if (v_isSharedCheck_3732_ == 0)
{
v___x_3726_ = v_x_3722_;
v_isShared_3727_ = v_isSharedCheck_3732_;
goto v_resetjp_3725_;
}
else
{
lean_inc(v_a_3724_);
lean_dec(v_x_3722_);
v___x_3726_ = lean_box(0);
v_isShared_3727_ = v_isSharedCheck_3732_;
goto v_resetjp_3725_;
}
v_resetjp_3725_:
{
lean_object* v___x_3729_; 
if (v_isShared_3727_ == 0)
{
v___x_3729_ = v___x_3726_;
goto v_reusejp_3728_;
}
else
{
lean_object* v_reuseFailAlloc_3731_; 
v_reuseFailAlloc_3731_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3731_, 0, v_a_3724_);
v___x_3729_ = v_reuseFailAlloc_3731_;
goto v_reusejp_3728_;
}
v_reusejp_3728_:
{
lean_object* v___x_3730_; 
v___x_3730_ = lean_io_promise_resolve(v___x_3729_, v_promise_3719_);
lean_dec(v_promise_3719_);
return v___x_3730_;
}
}
}
else
{
lean_object* v_a_3733_; lean_object* v___x_3735_; uint8_t v_isShared_3736_; uint8_t v_isSharedCheck_3744_; 
v_a_3733_ = lean_ctor_get(v_x_3722_, 0);
v_isSharedCheck_3744_ = !lean_is_exclusive(v_x_3722_);
if (v_isSharedCheck_3744_ == 0)
{
v___x_3735_ = v_x_3722_;
v_isShared_3736_ = v_isSharedCheck_3744_;
goto v_resetjp_3734_;
}
else
{
lean_inc(v_a_3733_);
lean_dec(v_x_3722_);
v___x_3735_ = lean_box(0);
v_isShared_3736_ = v_isSharedCheck_3744_;
goto v_resetjp_3734_;
}
v_resetjp_3734_:
{
if (lean_obj_tag(v_a_3733_) == 0)
{
lean_object* v_a_3737_; lean_object* v___x_3739_; 
lean_dec(v_prio_3721_);
lean_dec_ref(v_f_3720_);
v_a_3737_ = lean_ctor_get(v_a_3733_, 0);
lean_inc(v_a_3737_);
lean_dec_ref_known(v_a_3733_, 1);
if (v_isShared_3736_ == 0)
{
lean_ctor_set(v___x_3735_, 0, v_a_3737_);
v___x_3739_ = v___x_3735_;
goto v_reusejp_3738_;
}
else
{
lean_object* v_reuseFailAlloc_3741_; 
v_reuseFailAlloc_3741_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3741_, 0, v_a_3737_);
v___x_3739_ = v_reuseFailAlloc_3741_;
goto v_reusejp_3738_;
}
v_reusejp_3738_:
{
lean_object* v___x_3740_; 
v___x_3740_ = lean_io_promise_resolve(v___x_3739_, v_promise_3719_);
lean_dec(v_promise_3719_);
return v___x_3740_;
}
}
else
{
lean_object* v_a_3742_; lean_object* v___x_3743_; 
lean_del_object(v___x_3735_);
v_a_3742_ = lean_ctor_get(v_a_3733_, 0);
lean_inc(v_a_3742_);
lean_dec_ref_known(v_a_3733_, 1);
v___x_3743_ = l___private_Std_Async_Basic_0__Std_Async_EAsync_forIn_loop___redArg(v_f_3720_, v_prio_3721_, v_promise_3719_, v_a_3742_);
return v___x_3743_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Async_Basic_0__Std_Async_EAsync_forIn_loop___redArg___boxed(lean_object* v_f_3745_, lean_object* v_prio_3746_, lean_object* v_promise_3747_, lean_object* v_b_3748_, lean_object* v___y_3749_){
_start:
{
lean_object* v_res_3750_; 
v_res_3750_ = l___private_Std_Async_Basic_0__Std_Async_EAsync_forIn_loop___redArg(v_f_3745_, v_prio_3746_, v_promise_3747_, v_b_3748_);
return v_res_3750_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Async_Basic_0__Std_Async_EAsync_forIn_loop(lean_object* v_00_u03b5_3751_, lean_object* v_00_u03b2_3752_, lean_object* v_f_3753_, lean_object* v_prio_3754_, lean_object* v_promise_3755_, lean_object* v_b_3756_){
_start:
{
lean_object* v___x_3758_; 
v___x_3758_ = l___private_Std_Async_Basic_0__Std_Async_EAsync_forIn_loop___redArg(v_f_3753_, v_prio_3754_, v_promise_3755_, v_b_3756_);
return v___x_3758_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Async_Basic_0__Std_Async_EAsync_forIn_loop___boxed(lean_object* v_00_u03b5_3759_, lean_object* v_00_u03b2_3760_, lean_object* v_f_3761_, lean_object* v_prio_3762_, lean_object* v_promise_3763_, lean_object* v_b_3764_, lean_object* v___y_3765_){
_start:
{
lean_object* v_res_3766_; 
v_res_3766_ = l___private_Std_Async_Basic_0__Std_Async_EAsync_forIn_loop(v_00_u03b5_3759_, v_00_u03b2_3760_, v_f_3761_, v_prio_3762_, v_promise_3763_, v_b_3764_);
return v_res_3766_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_forIn___redArg___lam__0(lean_object* v_a_3767_, lean_object* v_x_3768_){
_start:
{
if (lean_obj_tag(v_x_3768_) == 0)
{
lean_object* v_a_3770_; lean_object* v___x_3772_; uint8_t v_isShared_3773_; uint8_t v_isSharedCheck_3778_; 
v_a_3770_ = lean_ctor_get(v_x_3768_, 0);
v_isSharedCheck_3778_ = !lean_is_exclusive(v_x_3768_);
if (v_isSharedCheck_3778_ == 0)
{
v___x_3772_ = v_x_3768_;
v_isShared_3773_ = v_isSharedCheck_3778_;
goto v_resetjp_3771_;
}
else
{
lean_inc(v_a_3770_);
lean_dec(v_x_3768_);
v___x_3772_ = lean_box(0);
v_isShared_3773_ = v_isSharedCheck_3778_;
goto v_resetjp_3771_;
}
v_resetjp_3771_:
{
lean_object* v___x_3775_; 
if (v_isShared_3773_ == 0)
{
v___x_3775_ = v___x_3772_;
goto v_reusejp_3774_;
}
else
{
lean_object* v_reuseFailAlloc_3777_; 
v_reuseFailAlloc_3777_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3777_, 0, v_a_3770_);
v___x_3775_ = v_reuseFailAlloc_3777_;
goto v_reusejp_3774_;
}
v_reusejp_3774_:
{
lean_object* v___x_3776_; 
v___x_3776_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3776_, 0, v___x_3775_);
return v___x_3776_;
}
}
}
else
{
lean_object* v___x_3779_; lean_object* v___x_3780_; 
lean_dec_ref_known(v_x_3768_, 1);
v___x_3779_ = l_IO_Promise_result_x21___redArg(v_a_3767_);
v___x_3780_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3780_, 0, v___x_3779_);
return v___x_3780_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_forIn___redArg___lam__0___boxed(lean_object* v_a_3781_, lean_object* v_x_3782_, lean_object* v___y_3783_){
_start:
{
lean_object* v_res_3784_; 
v_res_3784_ = l_Std_Async_EAsync_forIn___redArg___lam__0(v_a_3781_, v_x_3782_);
lean_dec(v_a_3781_);
return v_res_3784_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_forIn___redArg___lam__1(lean_object* v_f_3785_, lean_object* v_prio_3786_, lean_object* v_init_3787_, lean_object* v_x_3788_){
_start:
{
if (lean_obj_tag(v_x_3788_) == 0)
{
lean_object* v_a_3790_; lean_object* v___x_3792_; uint8_t v_isShared_3793_; uint8_t v_isSharedCheck_3798_; 
lean_dec(v_init_3787_);
lean_dec(v_prio_3786_);
lean_dec_ref(v_f_3785_);
v_a_3790_ = lean_ctor_get(v_x_3788_, 0);
v_isSharedCheck_3798_ = !lean_is_exclusive(v_x_3788_);
if (v_isSharedCheck_3798_ == 0)
{
v___x_3792_ = v_x_3788_;
v_isShared_3793_ = v_isSharedCheck_3798_;
goto v_resetjp_3791_;
}
else
{
lean_inc(v_a_3790_);
lean_dec(v_x_3788_);
v___x_3792_ = lean_box(0);
v_isShared_3793_ = v_isSharedCheck_3798_;
goto v_resetjp_3791_;
}
v_resetjp_3791_:
{
lean_object* v___x_3795_; 
if (v_isShared_3793_ == 0)
{
v___x_3795_ = v___x_3792_;
goto v_reusejp_3794_;
}
else
{
lean_object* v_reuseFailAlloc_3797_; 
v_reuseFailAlloc_3797_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3797_, 0, v_a_3790_);
v___x_3795_ = v_reuseFailAlloc_3797_;
goto v_reusejp_3794_;
}
v_reusejp_3794_:
{
lean_object* v___x_3796_; 
v___x_3796_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3796_, 0, v___x_3795_);
return v___x_3796_;
}
}
}
else
{
lean_object* v_a_3799_; lean_object* v___x_3801_; uint8_t v_isShared_3802_; uint8_t v_isSharedCheck_3812_; 
v_a_3799_ = lean_ctor_get(v_x_3788_, 0);
v_isSharedCheck_3812_ = !lean_is_exclusive(v_x_3788_);
if (v_isSharedCheck_3812_ == 0)
{
v___x_3801_ = v_x_3788_;
v_isShared_3802_ = v_isSharedCheck_3812_;
goto v_resetjp_3800_;
}
else
{
lean_inc(v_a_3799_);
lean_dec(v_x_3788_);
v___x_3801_ = lean_box(0);
v_isShared_3802_ = v_isSharedCheck_3812_;
goto v_resetjp_3800_;
}
v_resetjp_3800_:
{
lean_object* v___f_3803_; lean_object* v___x_3804_; uint8_t v___x_3805_; lean_object* v___x_3806_; lean_object* v___x_3808_; 
lean_inc(v_a_3799_);
v___f_3803_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_forIn___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_3803_, 0, v_a_3799_);
v___x_3804_ = lean_unsigned_to_nat(0u);
v___x_3805_ = 0;
v___x_3806_ = l___private_Std_Async_Basic_0__Std_Async_EAsync_forIn_loop___redArg(v_f_3785_, v_prio_3786_, v_a_3799_, v_init_3787_);
if (v_isShared_3802_ == 0)
{
lean_ctor_set(v___x_3801_, 0, v___x_3806_);
v___x_3808_ = v___x_3801_;
goto v_reusejp_3807_;
}
else
{
lean_object* v_reuseFailAlloc_3811_; 
v_reuseFailAlloc_3811_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3811_, 0, v___x_3806_);
v___x_3808_ = v_reuseFailAlloc_3811_;
goto v_reusejp_3807_;
}
v_reusejp_3807_:
{
lean_object* v___x_3809_; lean_object* v___x_3810_; 
v___x_3809_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3809_, 0, v___x_3808_);
v___x_3810_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3804_, v___x_3805_, v___x_3809_, v___f_3803_);
return v___x_3810_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_forIn___redArg___lam__1___boxed(lean_object* v_f_3813_, lean_object* v_prio_3814_, lean_object* v_init_3815_, lean_object* v_x_3816_, lean_object* v___y_3817_){
_start:
{
lean_object* v_res_3818_; 
v_res_3818_ = l_Std_Async_EAsync_forIn___redArg___lam__1(v_f_3813_, v_prio_3814_, v_init_3815_, v_x_3816_);
return v_res_3818_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_forIn___redArg(lean_object* v_init_3819_, lean_object* v_f_3820_, lean_object* v_prio_3821_){
_start:
{
lean_object* v___f_3823_; lean_object* v___x_3824_; uint8_t v___x_3825_; lean_object* v___x_3826_; lean_object* v___x_3827_; lean_object* v___x_3828_; lean_object* v___x_3829_; 
v___f_3823_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_forIn___redArg___lam__1___boxed), 5, 3);
lean_closure_set(v___f_3823_, 0, v_f_3820_);
lean_closure_set(v___f_3823_, 1, v_prio_3821_);
lean_closure_set(v___f_3823_, 2, v_init_3819_);
v___x_3824_ = lean_unsigned_to_nat(0u);
v___x_3825_ = 0;
v___x_3826_ = lean_io_promise_new();
v___x_3827_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3827_, 0, v___x_3826_);
v___x_3828_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3828_, 0, v___x_3827_);
v___x_3829_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3824_, v___x_3825_, v___x_3828_, v___f_3823_);
return v___x_3829_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_forIn___redArg___boxed(lean_object* v_init_3830_, lean_object* v_f_3831_, lean_object* v_prio_3832_, lean_object* v___y_3833_){
_start:
{
lean_object* v_res_3834_; 
v_res_3834_ = l_Std_Async_EAsync_forIn___redArg(v_init_3830_, v_f_3831_, v_prio_3832_);
return v_res_3834_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_forIn(lean_object* v_00_u03b5_3835_, lean_object* v_00_u03b2_3836_, lean_object* v_init_3837_, lean_object* v_f_3838_, lean_object* v_prio_3839_){
_start:
{
lean_object* v___f_3841_; lean_object* v___x_3842_; uint8_t v___x_3843_; lean_object* v___x_3844_; lean_object* v___x_3845_; lean_object* v___x_3846_; lean_object* v___x_3847_; 
v___f_3841_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_forIn___redArg___lam__1___boxed), 5, 3);
lean_closure_set(v___f_3841_, 0, v_f_3838_);
lean_closure_set(v___f_3841_, 1, v_prio_3839_);
lean_closure_set(v___f_3841_, 2, v_init_3837_);
v___x_3842_ = lean_unsigned_to_nat(0u);
v___x_3843_ = 0;
v___x_3844_ = lean_io_promise_new();
v___x_3845_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3845_, 0, v___x_3844_);
v___x_3846_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3846_, 0, v___x_3845_);
v___x_3847_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3842_, v___x_3843_, v___x_3846_, v___f_3841_);
return v___x_3847_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_forIn___boxed(lean_object* v_00_u03b5_3848_, lean_object* v_00_u03b2_3849_, lean_object* v_init_3850_, lean_object* v_f_3851_, lean_object* v_prio_3852_, lean_object* v___y_3853_){
_start:
{
lean_object* v_res_3854_; 
v_res_3854_ = l_Std_Async_EAsync_forIn(v_00_u03b5_3848_, v_00_u03b2_3849_, v_init_3850_, v_f_3851_, v_prio_3852_);
return v_res_3854_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instForInLoopUnit___redArg___lam__1(lean_object* v_f_3855_, lean_object* v___x_3856_, lean_object* v_init_3857_, lean_object* v_x_3858_){
_start:
{
if (lean_obj_tag(v_x_3858_) == 0)
{
lean_object* v_a_3860_; lean_object* v___x_3862_; uint8_t v_isShared_3863_; uint8_t v_isSharedCheck_3868_; 
lean_dec(v_init_3857_);
lean_dec(v___x_3856_);
lean_dec_ref(v_f_3855_);
v_a_3860_ = lean_ctor_get(v_x_3858_, 0);
v_isSharedCheck_3868_ = !lean_is_exclusive(v_x_3858_);
if (v_isSharedCheck_3868_ == 0)
{
v___x_3862_ = v_x_3858_;
v_isShared_3863_ = v_isSharedCheck_3868_;
goto v_resetjp_3861_;
}
else
{
lean_inc(v_a_3860_);
lean_dec(v_x_3858_);
v___x_3862_ = lean_box(0);
v_isShared_3863_ = v_isSharedCheck_3868_;
goto v_resetjp_3861_;
}
v_resetjp_3861_:
{
lean_object* v___x_3865_; 
if (v_isShared_3863_ == 0)
{
v___x_3865_ = v___x_3862_;
goto v_reusejp_3864_;
}
else
{
lean_object* v_reuseFailAlloc_3867_; 
v_reuseFailAlloc_3867_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3867_, 0, v_a_3860_);
v___x_3865_ = v_reuseFailAlloc_3867_;
goto v_reusejp_3864_;
}
v_reusejp_3864_:
{
lean_object* v___x_3866_; 
v___x_3866_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3866_, 0, v___x_3865_);
return v___x_3866_;
}
}
}
else
{
lean_object* v_a_3869_; lean_object* v___x_3871_; uint8_t v_isShared_3872_; uint8_t v_isSharedCheck_3881_; 
v_a_3869_ = lean_ctor_get(v_x_3858_, 0);
v_isSharedCheck_3881_ = !lean_is_exclusive(v_x_3858_);
if (v_isSharedCheck_3881_ == 0)
{
v___x_3871_ = v_x_3858_;
v_isShared_3872_ = v_isSharedCheck_3881_;
goto v_resetjp_3870_;
}
else
{
lean_inc(v_a_3869_);
lean_dec(v_x_3858_);
v___x_3871_ = lean_box(0);
v_isShared_3872_ = v_isSharedCheck_3881_;
goto v_resetjp_3870_;
}
v_resetjp_3870_:
{
lean_object* v___f_3873_; uint8_t v___x_3874_; lean_object* v___x_3875_; lean_object* v___x_3877_; 
lean_inc(v_a_3869_);
v___f_3873_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_forIn___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_3873_, 0, v_a_3869_);
v___x_3874_ = 0;
lean_inc(v___x_3856_);
v___x_3875_ = l___private_Std_Async_Basic_0__Std_Async_EAsync_forIn_loop___redArg(v_f_3855_, v___x_3856_, v_a_3869_, v_init_3857_);
if (v_isShared_3872_ == 0)
{
lean_ctor_set(v___x_3871_, 0, v___x_3875_);
v___x_3877_ = v___x_3871_;
goto v_reusejp_3876_;
}
else
{
lean_object* v_reuseFailAlloc_3880_; 
v_reuseFailAlloc_3880_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3880_, 0, v___x_3875_);
v___x_3877_ = v_reuseFailAlloc_3880_;
goto v_reusejp_3876_;
}
v_reusejp_3876_:
{
lean_object* v___x_3878_; lean_object* v___x_3879_; 
v___x_3878_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3878_, 0, v___x_3877_);
v___x_3879_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3856_, v___x_3874_, v___x_3878_, v___f_3873_);
return v___x_3879_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instForInLoopUnit___redArg___lam__1___boxed(lean_object* v_f_3882_, lean_object* v___x_3883_, lean_object* v_init_3884_, lean_object* v_x_3885_, lean_object* v___y_3886_){
_start:
{
lean_object* v_res_3887_; 
v_res_3887_ = l_Std_Async_EAsync_instForInLoopUnit___redArg___lam__1(v_f_3882_, v___x_3883_, v_init_3884_, v_x_3885_);
return v_res_3887_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instForInLoopUnit___redArg___lam__0(lean_object* v_00_u03b2_3888_, lean_object* v_x_3889_, lean_object* v_init_3890_, lean_object* v_f_3891_){
_start:
{
lean_object* v___x_3893_; lean_object* v___f_3894_; uint8_t v___x_3895_; lean_object* v___x_3896_; lean_object* v___x_3897_; lean_object* v___x_3898_; lean_object* v___x_3899_; 
v___x_3893_ = lean_unsigned_to_nat(0u);
v___f_3894_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_instForInLoopUnit___redArg___lam__1___boxed), 5, 3);
lean_closure_set(v___f_3894_, 0, v_f_3891_);
lean_closure_set(v___f_3894_, 1, v___x_3893_);
lean_closure_set(v___f_3894_, 2, v_init_3890_);
v___x_3895_ = 0;
v___x_3896_ = lean_io_promise_new();
v___x_3897_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3897_, 0, v___x_3896_);
v___x_3898_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3898_, 0, v___x_3897_);
v___x_3899_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3893_, v___x_3895_, v___x_3898_, v___f_3894_);
return v___x_3899_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instForInLoopUnit___redArg___lam__0___boxed(lean_object* v_00_u03b2_3900_, lean_object* v_x_3901_, lean_object* v_init_3902_, lean_object* v_f_3903_, lean_object* v___y_3904_){
_start:
{
lean_object* v_res_3905_; 
v_res_3905_ = l_Std_Async_EAsync_instForInLoopUnit___redArg___lam__0(v_00_u03b2_3900_, v_x_3901_, v_init_3902_, v_f_3903_);
return v_res_3905_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instForInLoopUnit___redArg(){
_start:
{
lean_object* v___f_3908_; 
v___f_3908_ = ((lean_object*)(l_Std_Async_EAsync_instForInLoopUnit___redArg___closed__0));
return v___f_3908_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instForInLoopUnit___redArg___boxed(lean_object* v___dummy_3909_){
_start:
{
lean_object* v_res_3910_; 
v_res_3910_ = l_Std_Async_EAsync_instForInLoopUnit___redArg();
return v_res_3910_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instForInLoopUnit(lean_object* v_00_u03b5_3911_){
_start:
{
lean_object* v___f_3912_; 
v___f_3912_ = ((lean_object*)(l_Std_Async_EAsync_instForInLoopUnit___redArg___closed__0));
return v___f_3912_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_ofExcept___redArg(lean_object* v_except_3913_){
_start:
{
lean_object* v___x_3915_; 
v___x_3915_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3915_, 0, v_except_3913_);
return v___x_3915_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_ofExcept___redArg___boxed(lean_object* v_except_3916_, lean_object* v___y_3917_){
_start:
{
lean_object* v_res_3918_; 
v_res_3918_ = l_Std_Async_EAsync_ofExcept___redArg(v_except_3916_);
return v_res_3918_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_ofExcept(lean_object* v_00_u03b5_3919_, lean_object* v_00_u03b1_3920_, lean_object* v_except_3921_){
_start:
{
lean_object* v___x_3923_; 
v___x_3923_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3923_, 0, v_except_3921_);
return v___x_3923_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_ofExcept___boxed(lean_object* v_00_u03b5_3924_, lean_object* v_00_u03b1_3925_, lean_object* v_except_3926_, lean_object* v___y_3927_){
_start:
{
lean_object* v_res_3928_; 
v_res_3928_ = l_Std_Async_EAsync_ofExcept(v_00_u03b5_3924_, v_00_u03b1_3925_, v_except_3926_);
return v_res_3928_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_concurrently___redArg___lam__1(lean_object* v_a_3929_, lean_object* v_x_3930_){
_start:
{
if (lean_obj_tag(v_x_3930_) == 0)
{
lean_object* v_a_3932_; lean_object* v___x_3934_; uint8_t v_isShared_3935_; uint8_t v_isSharedCheck_3940_; 
lean_dec(v_a_3929_);
v_a_3932_ = lean_ctor_get(v_x_3930_, 0);
v_isSharedCheck_3940_ = !lean_is_exclusive(v_x_3930_);
if (v_isSharedCheck_3940_ == 0)
{
v___x_3934_ = v_x_3930_;
v_isShared_3935_ = v_isSharedCheck_3940_;
goto v_resetjp_3933_;
}
else
{
lean_inc(v_a_3932_);
lean_dec(v_x_3930_);
v___x_3934_ = lean_box(0);
v_isShared_3935_ = v_isSharedCheck_3940_;
goto v_resetjp_3933_;
}
v_resetjp_3933_:
{
lean_object* v___x_3937_; 
if (v_isShared_3935_ == 0)
{
v___x_3937_ = v___x_3934_;
goto v_reusejp_3936_;
}
else
{
lean_object* v_reuseFailAlloc_3939_; 
v_reuseFailAlloc_3939_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3939_, 0, v_a_3932_);
v___x_3937_ = v_reuseFailAlloc_3939_;
goto v_reusejp_3936_;
}
v_reusejp_3936_:
{
lean_object* v___x_3938_; 
v___x_3938_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3938_, 0, v___x_3937_);
return v___x_3938_;
}
}
}
else
{
lean_object* v_a_3941_; lean_object* v___x_3943_; uint8_t v_isShared_3944_; uint8_t v_isSharedCheck_3950_; 
v_a_3941_ = lean_ctor_get(v_x_3930_, 0);
v_isSharedCheck_3950_ = !lean_is_exclusive(v_x_3930_);
if (v_isSharedCheck_3950_ == 0)
{
v___x_3943_ = v_x_3930_;
v_isShared_3944_ = v_isSharedCheck_3950_;
goto v_resetjp_3942_;
}
else
{
lean_inc(v_a_3941_);
lean_dec(v_x_3930_);
v___x_3943_ = lean_box(0);
v_isShared_3944_ = v_isSharedCheck_3950_;
goto v_resetjp_3942_;
}
v_resetjp_3942_:
{
lean_object* v___x_3945_; lean_object* v___x_3947_; 
v___x_3945_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3945_, 0, v_a_3929_);
lean_ctor_set(v___x_3945_, 1, v_a_3941_);
if (v_isShared_3944_ == 0)
{
lean_ctor_set(v___x_3943_, 0, v___x_3945_);
v___x_3947_ = v___x_3943_;
goto v_reusejp_3946_;
}
else
{
lean_object* v_reuseFailAlloc_3949_; 
v_reuseFailAlloc_3949_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3949_, 0, v___x_3945_);
v___x_3947_ = v_reuseFailAlloc_3949_;
goto v_reusejp_3946_;
}
v_reusejp_3946_:
{
lean_object* v___x_3948_; 
v___x_3948_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3948_, 0, v___x_3947_);
return v___x_3948_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_concurrently___redArg___lam__1___boxed(lean_object* v_a_3951_, lean_object* v_x_3952_, lean_object* v___y_3953_){
_start:
{
lean_object* v_res_3954_; 
v_res_3954_ = l_Std_Async_EAsync_concurrently___redArg___lam__1(v_a_3951_, v_x_3952_);
return v_res_3954_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_concurrently___redArg___lam__0(lean_object* v_a_3955_, lean_object* v_x_3956_){
_start:
{
if (lean_obj_tag(v_x_3956_) == 0)
{
lean_object* v_a_3958_; lean_object* v___x_3960_; uint8_t v_isShared_3961_; uint8_t v_isSharedCheck_3966_; 
lean_dec_ref(v_a_3955_);
v_a_3958_ = lean_ctor_get(v_x_3956_, 0);
v_isSharedCheck_3966_ = !lean_is_exclusive(v_x_3956_);
if (v_isSharedCheck_3966_ == 0)
{
v___x_3960_ = v_x_3956_;
v_isShared_3961_ = v_isSharedCheck_3966_;
goto v_resetjp_3959_;
}
else
{
lean_inc(v_a_3958_);
lean_dec(v_x_3956_);
v___x_3960_ = lean_box(0);
v_isShared_3961_ = v_isSharedCheck_3966_;
goto v_resetjp_3959_;
}
v_resetjp_3959_:
{
lean_object* v___x_3963_; 
if (v_isShared_3961_ == 0)
{
v___x_3963_ = v___x_3960_;
goto v_reusejp_3962_;
}
else
{
lean_object* v_reuseFailAlloc_3965_; 
v_reuseFailAlloc_3965_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3965_, 0, v_a_3958_);
v___x_3963_ = v_reuseFailAlloc_3965_;
goto v_reusejp_3962_;
}
v_reusejp_3962_:
{
lean_object* v___x_3964_; 
v___x_3964_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3964_, 0, v___x_3963_);
return v___x_3964_;
}
}
}
else
{
lean_object* v_a_3967_; lean_object* v___f_3968_; lean_object* v___x_3969_; uint8_t v___x_3970_; lean_object* v___x_3971_; lean_object* v___x_3972_; 
v_a_3967_ = lean_ctor_get(v_x_3956_, 0);
lean_inc(v_a_3967_);
lean_dec_ref_known(v_x_3956_, 1);
v___f_3968_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_concurrently___redArg___lam__1___boxed), 3, 1);
lean_closure_set(v___f_3968_, 0, v_a_3967_);
v___x_3969_ = lean_unsigned_to_nat(0u);
v___x_3970_ = 0;
v___x_3971_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3971_, 0, v_a_3955_);
v___x_3972_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3969_, v___x_3970_, v___x_3971_, v___f_3968_);
return v___x_3972_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_concurrently___redArg___lam__0___boxed(lean_object* v_a_3973_, lean_object* v_x_3974_, lean_object* v___y_3975_){
_start:
{
lean_object* v_res_3976_; 
v_res_3976_ = l_Std_Async_EAsync_concurrently___redArg___lam__0(v_a_3973_, v_x_3974_);
return v_res_3976_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_concurrently___redArg___lam__2(lean_object* v_a_3977_, lean_object* v_x_3978_){
_start:
{
if (lean_obj_tag(v_x_3978_) == 0)
{
lean_object* v_a_3980_; lean_object* v___x_3982_; uint8_t v_isShared_3983_; uint8_t v_isSharedCheck_3988_; 
lean_dec_ref(v_a_3977_);
v_a_3980_ = lean_ctor_get(v_x_3978_, 0);
v_isSharedCheck_3988_ = !lean_is_exclusive(v_x_3978_);
if (v_isSharedCheck_3988_ == 0)
{
v___x_3982_ = v_x_3978_;
v_isShared_3983_ = v_isSharedCheck_3988_;
goto v_resetjp_3981_;
}
else
{
lean_inc(v_a_3980_);
lean_dec(v_x_3978_);
v___x_3982_ = lean_box(0);
v_isShared_3983_ = v_isSharedCheck_3988_;
goto v_resetjp_3981_;
}
v_resetjp_3981_:
{
lean_object* v___x_3985_; 
if (v_isShared_3983_ == 0)
{
v___x_3985_ = v___x_3982_;
goto v_reusejp_3984_;
}
else
{
lean_object* v_reuseFailAlloc_3987_; 
v_reuseFailAlloc_3987_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3987_, 0, v_a_3980_);
v___x_3985_ = v_reuseFailAlloc_3987_;
goto v_reusejp_3984_;
}
v_reusejp_3984_:
{
lean_object* v___x_3986_; 
v___x_3986_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3986_, 0, v___x_3985_);
return v___x_3986_;
}
}
}
else
{
lean_object* v_a_3989_; lean_object* v___f_3990_; lean_object* v___x_3991_; uint8_t v___x_3992_; lean_object* v___x_3993_; lean_object* v___x_3994_; 
v_a_3989_ = lean_ctor_get(v_x_3978_, 0);
lean_inc(v_a_3989_);
lean_dec_ref_known(v_x_3978_, 1);
v___f_3990_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_concurrently___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_3990_, 0, v_a_3989_);
v___x_3991_ = lean_unsigned_to_nat(0u);
v___x_3992_ = 0;
v___x_3993_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3993_, 0, v_a_3977_);
v___x_3994_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3991_, v___x_3992_, v___x_3993_, v___f_3990_);
return v___x_3994_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_concurrently___redArg___lam__2___boxed(lean_object* v_a_3995_, lean_object* v_x_3996_, lean_object* v___y_3997_){
_start:
{
lean_object* v_res_3998_; 
v_res_3998_ = l_Std_Async_EAsync_concurrently___redArg___lam__2(v_a_3995_, v_x_3996_);
return v_res_3998_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_concurrently___redArg___lam__3(lean_object* v_y_3999_, lean_object* v_prio_4000_, lean_object* v___f_4001_, lean_object* v_x_4002_){
_start:
{
if (lean_obj_tag(v_x_4002_) == 0)
{
lean_object* v_a_4004_; lean_object* v___x_4006_; uint8_t v_isShared_4007_; uint8_t v_isSharedCheck_4012_; 
lean_dec_ref(v___f_4001_);
lean_dec(v_prio_4000_);
lean_dec_ref(v_y_3999_);
v_a_4004_ = lean_ctor_get(v_x_4002_, 0);
v_isSharedCheck_4012_ = !lean_is_exclusive(v_x_4002_);
if (v_isSharedCheck_4012_ == 0)
{
v___x_4006_ = v_x_4002_;
v_isShared_4007_ = v_isSharedCheck_4012_;
goto v_resetjp_4005_;
}
else
{
lean_inc(v_a_4004_);
lean_dec(v_x_4002_);
v___x_4006_ = lean_box(0);
v_isShared_4007_ = v_isSharedCheck_4012_;
goto v_resetjp_4005_;
}
v_resetjp_4005_:
{
lean_object* v___x_4009_; 
if (v_isShared_4007_ == 0)
{
v___x_4009_ = v___x_4006_;
goto v_reusejp_4008_;
}
else
{
lean_object* v_reuseFailAlloc_4011_; 
v_reuseFailAlloc_4011_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4011_, 0, v_a_4004_);
v___x_4009_ = v_reuseFailAlloc_4011_;
goto v_reusejp_4008_;
}
v_reusejp_4008_:
{
lean_object* v___x_4010_; 
v___x_4010_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4010_, 0, v___x_4009_);
return v___x_4010_;
}
}
}
else
{
lean_object* v_a_4013_; lean_object* v___x_4015_; uint8_t v_isShared_4016_; uint8_t v_isSharedCheck_4030_; 
v_a_4013_ = lean_ctor_get(v_x_4002_, 0);
v_isSharedCheck_4030_ = !lean_is_exclusive(v_x_4002_);
if (v_isSharedCheck_4030_ == 0)
{
v___x_4015_ = v_x_4002_;
v_isShared_4016_ = v_isSharedCheck_4030_;
goto v_resetjp_4014_;
}
else
{
lean_inc(v_a_4013_);
lean_dec(v_x_4002_);
v___x_4015_ = lean_box(0);
v_isShared_4016_ = v_isSharedCheck_4030_;
goto v_resetjp_4014_;
}
v_resetjp_4014_:
{
lean_object* v___f_4017_; lean_object* v___x_4018_; uint8_t v___x_4019_; lean_object* v___x_4020_; lean_object* v___x_4021_; lean_object* v___x_4022_; uint8_t v___x_4023_; lean_object* v___x_4024_; lean_object* v___x_4026_; 
v___f_4017_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_concurrently___redArg___lam__2___boxed), 3, 1);
lean_closure_set(v___f_4017_, 0, v_a_4013_);
v___x_4018_ = lean_unsigned_to_nat(0u);
v___x_4019_ = 0;
v___x_4020_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_toBaseAsync___boxed), 4, 3);
lean_closure_set(v___x_4020_, 0, lean_box(0));
lean_closure_set(v___x_4020_, 1, lean_box(0));
lean_closure_set(v___x_4020_, 2, v_y_3999_);
v___x_4021_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_toRawBaseIO___boxed), 3, 2);
lean_closure_set(v___x_4021_, 0, lean_box(0));
lean_closure_set(v___x_4021_, 1, v___x_4020_);
v___x_4022_ = lean_io_as_task(v___x_4021_, v_prio_4000_);
v___x_4023_ = 1;
v___x_4024_ = lean_task_bind(v___x_4022_, v___f_4001_, v___x_4018_, v___x_4023_);
if (v_isShared_4016_ == 0)
{
lean_ctor_set(v___x_4015_, 0, v___x_4024_);
v___x_4026_ = v___x_4015_;
goto v_reusejp_4025_;
}
else
{
lean_object* v_reuseFailAlloc_4029_; 
v_reuseFailAlloc_4029_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4029_, 0, v___x_4024_);
v___x_4026_ = v_reuseFailAlloc_4029_;
goto v_reusejp_4025_;
}
v_reusejp_4025_:
{
lean_object* v___x_4027_; lean_object* v___x_4028_; 
v___x_4027_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4027_, 0, v___x_4026_);
v___x_4028_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4018_, v___x_4019_, v___x_4027_, v___f_4017_);
return v___x_4028_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_concurrently___redArg___lam__3___boxed(lean_object* v_y_4031_, lean_object* v_prio_4032_, lean_object* v___f_4033_, lean_object* v_x_4034_, lean_object* v___y_4035_){
_start:
{
lean_object* v_res_4036_; 
v_res_4036_ = l_Std_Async_EAsync_concurrently___redArg___lam__3(v_y_4031_, v_prio_4032_, v___f_4033_, v_x_4034_);
return v_res_4036_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_concurrently___redArg(lean_object* v_x_4037_, lean_object* v_y_4038_, lean_object* v_prio_4039_){
_start:
{
lean_object* v___f_4041_; lean_object* v___f_4042_; lean_object* v___x_4043_; uint8_t v___x_4044_; lean_object* v___x_4045_; lean_object* v___x_4046_; lean_object* v___x_4047_; uint8_t v___x_4048_; lean_object* v___x_4049_; lean_object* v___x_4050_; lean_object* v___x_4051_; lean_object* v___x_4052_; 
v___f_4041_ = ((lean_object*)(l_Std_Async_EAsync_asTask___redArg___closed__0));
lean_inc(v_prio_4039_);
v___f_4042_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_concurrently___redArg___lam__3___boxed), 5, 3);
lean_closure_set(v___f_4042_, 0, v_y_4038_);
lean_closure_set(v___f_4042_, 1, v_prio_4039_);
lean_closure_set(v___f_4042_, 2, v___f_4041_);
v___x_4043_ = lean_unsigned_to_nat(0u);
v___x_4044_ = 0;
v___x_4045_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_toBaseAsync___boxed), 4, 3);
lean_closure_set(v___x_4045_, 0, lean_box(0));
lean_closure_set(v___x_4045_, 1, lean_box(0));
lean_closure_set(v___x_4045_, 2, v_x_4037_);
v___x_4046_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_toRawBaseIO___boxed), 3, 2);
lean_closure_set(v___x_4046_, 0, lean_box(0));
lean_closure_set(v___x_4046_, 1, v___x_4045_);
v___x_4047_ = lean_io_as_task(v___x_4046_, v_prio_4039_);
v___x_4048_ = 1;
v___x_4049_ = lean_task_bind(v___x_4047_, v___f_4041_, v___x_4043_, v___x_4048_);
v___x_4050_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4050_, 0, v___x_4049_);
v___x_4051_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4051_, 0, v___x_4050_);
v___x_4052_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4043_, v___x_4044_, v___x_4051_, v___f_4042_);
return v___x_4052_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_concurrently___redArg___boxed(lean_object* v_x_4053_, lean_object* v_y_4054_, lean_object* v_prio_4055_, lean_object* v___y_4056_){
_start:
{
lean_object* v_res_4057_; 
v_res_4057_ = l_Std_Async_EAsync_concurrently___redArg(v_x_4053_, v_y_4054_, v_prio_4055_);
return v_res_4057_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_concurrently(lean_object* v_00_u03b5_4058_, lean_object* v_00_u03b1_4059_, lean_object* v_00_u03b2_4060_, lean_object* v_x_4061_, lean_object* v_y_4062_, lean_object* v_prio_4063_){
_start:
{
lean_object* v___f_4065_; lean_object* v___f_4066_; lean_object* v___x_4067_; uint8_t v___x_4068_; lean_object* v___x_4069_; lean_object* v___x_4070_; lean_object* v___x_4071_; uint8_t v___x_4072_; lean_object* v___x_4073_; lean_object* v___x_4074_; lean_object* v___x_4075_; lean_object* v___x_4076_; 
v___f_4065_ = ((lean_object*)(l_Std_Async_EAsync_asTask___redArg___closed__0));
lean_inc(v_prio_4063_);
v___f_4066_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_concurrently___redArg___lam__3___boxed), 5, 3);
lean_closure_set(v___f_4066_, 0, v_y_4062_);
lean_closure_set(v___f_4066_, 1, v_prio_4063_);
lean_closure_set(v___f_4066_, 2, v___f_4065_);
v___x_4067_ = lean_unsigned_to_nat(0u);
v___x_4068_ = 0;
v___x_4069_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_toBaseAsync___boxed), 4, 3);
lean_closure_set(v___x_4069_, 0, lean_box(0));
lean_closure_set(v___x_4069_, 1, lean_box(0));
lean_closure_set(v___x_4069_, 2, v_x_4061_);
v___x_4070_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_toRawBaseIO___boxed), 3, 2);
lean_closure_set(v___x_4070_, 0, lean_box(0));
lean_closure_set(v___x_4070_, 1, v___x_4069_);
v___x_4071_ = lean_io_as_task(v___x_4070_, v_prio_4063_);
v___x_4072_ = 1;
v___x_4073_ = lean_task_bind(v___x_4071_, v___f_4065_, v___x_4067_, v___x_4072_);
v___x_4074_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4074_, 0, v___x_4073_);
v___x_4075_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4075_, 0, v___x_4074_);
v___x_4076_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4067_, v___x_4068_, v___x_4075_, v___f_4066_);
return v___x_4076_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_concurrently___boxed(lean_object* v_00_u03b5_4077_, lean_object* v_00_u03b1_4078_, lean_object* v_00_u03b2_4079_, lean_object* v_x_4080_, lean_object* v_y_4081_, lean_object* v_prio_4082_, lean_object* v___y_4083_){
_start:
{
lean_object* v_res_4084_; 
v_res_4084_ = l_Std_Async_EAsync_concurrently(v_00_u03b5_4077_, v_00_u03b1_4078_, v_00_u03b2_4079_, v_x_4080_, v_y_4081_, v_prio_4082_);
return v_res_4084_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_race___redArg___lam__1(lean_object* v_x_4085_){
_start:
{
if (lean_obj_tag(v_x_4085_) == 0)
{
lean_object* v_a_4087_; lean_object* v___x_4089_; uint8_t v_isShared_4090_; uint8_t v_isSharedCheck_4095_; 
v_a_4087_ = lean_ctor_get(v_x_4085_, 0);
v_isSharedCheck_4095_ = !lean_is_exclusive(v_x_4085_);
if (v_isSharedCheck_4095_ == 0)
{
v___x_4089_ = v_x_4085_;
v_isShared_4090_ = v_isSharedCheck_4095_;
goto v_resetjp_4088_;
}
else
{
lean_inc(v_a_4087_);
lean_dec(v_x_4085_);
v___x_4089_ = lean_box(0);
v_isShared_4090_ = v_isSharedCheck_4095_;
goto v_resetjp_4088_;
}
v_resetjp_4088_:
{
lean_object* v___x_4092_; 
if (v_isShared_4090_ == 0)
{
v___x_4092_ = v___x_4089_;
goto v_reusejp_4091_;
}
else
{
lean_object* v_reuseFailAlloc_4094_; 
v_reuseFailAlloc_4094_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4094_, 0, v_a_4087_);
v___x_4092_ = v_reuseFailAlloc_4094_;
goto v_reusejp_4091_;
}
v_reusejp_4091_:
{
lean_object* v___x_4093_; 
v___x_4093_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4093_, 0, v___x_4092_);
return v___x_4093_;
}
}
}
else
{
lean_object* v_a_4096_; lean_object* v___x_4097_; 
v_a_4096_ = lean_ctor_get(v_x_4085_, 0);
lean_inc(v_a_4096_);
lean_dec_ref_known(v_x_4085_, 1);
v___x_4097_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4097_, 0, v_a_4096_);
return v___x_4097_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_race___redArg___lam__1___boxed(lean_object* v_x_4098_, lean_object* v___y_4099_){
_start:
{
lean_object* v_res_4100_; 
v_res_4100_ = l_Std_Async_EAsync_race___redArg___lam__1(v_x_4098_);
return v_res_4100_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_race___redArg___lam__0(lean_object* v_a_4101_){
_start:
{
lean_object* v___x_4102_; 
v___x_4102_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4102_, 0, v_a_4101_);
return v___x_4102_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_race___redArg___lam__3(lean_object* v_a_4103_, lean_object* v_value_4104_){
_start:
{
lean_object* v___x_4106_; 
v___x_4106_ = lean_io_promise_resolve(v_value_4104_, v_a_4103_);
return v___x_4106_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_race___redArg___lam__3___boxed(lean_object* v_a_4107_, lean_object* v_value_4108_, lean_object* v___y_4109_){
_start:
{
lean_object* v_res_4110_; 
v_res_4110_ = l_Std_Async_EAsync_race___redArg___lam__3(v_a_4107_, v_value_4108_);
lean_dec(v_a_4107_);
return v_res_4110_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_race___redArg___lam__2(lean_object* v_a_4111_, lean_object* v___f_4112_, lean_object* v___f_4113_, lean_object* v_x_4114_){
_start:
{
if (lean_obj_tag(v_x_4114_) == 0)
{
lean_object* v_a_4116_; lean_object* v___x_4118_; uint8_t v_isShared_4119_; uint8_t v_isSharedCheck_4124_; 
lean_dec_ref(v___f_4113_);
lean_dec_ref(v___f_4112_);
v_a_4116_ = lean_ctor_get(v_x_4114_, 0);
v_isSharedCheck_4124_ = !lean_is_exclusive(v_x_4114_);
if (v_isSharedCheck_4124_ == 0)
{
v___x_4118_ = v_x_4114_;
v_isShared_4119_ = v_isSharedCheck_4124_;
goto v_resetjp_4117_;
}
else
{
lean_inc(v_a_4116_);
lean_dec(v_x_4114_);
v___x_4118_ = lean_box(0);
v_isShared_4119_ = v_isSharedCheck_4124_;
goto v_resetjp_4117_;
}
v_resetjp_4117_:
{
lean_object* v___x_4121_; 
if (v_isShared_4119_ == 0)
{
v___x_4121_ = v___x_4118_;
goto v_reusejp_4120_;
}
else
{
lean_object* v_reuseFailAlloc_4123_; 
v_reuseFailAlloc_4123_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4123_, 0, v_a_4116_);
v___x_4121_ = v_reuseFailAlloc_4123_;
goto v_reusejp_4120_;
}
v_reusejp_4120_:
{
lean_object* v___x_4122_; 
v___x_4122_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4122_, 0, v___x_4121_);
return v___x_4122_;
}
}
}
else
{
lean_object* v___x_4125_; lean_object* v___x_4126_; uint8_t v___x_4127_; lean_object* v___x_4128_; lean_object* v___x_4129_; lean_object* v___x_4130_; 
lean_dec_ref_known(v_x_4114_, 1);
v___x_4125_ = l_IO_Promise_result_x21___redArg(v_a_4111_);
v___x_4126_ = lean_unsigned_to_nat(0u);
v___x_4127_ = 0;
v___x_4128_ = lean_task_map(v___f_4112_, v___x_4125_, v___x_4126_, v___x_4127_);
v___x_4129_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4129_, 0, v___x_4128_);
v___x_4130_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4126_, v___x_4127_, v___x_4129_, v___f_4113_);
return v___x_4130_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_race___redArg___lam__2___boxed(lean_object* v_a_4131_, lean_object* v___f_4132_, lean_object* v___f_4133_, lean_object* v_x_4134_, lean_object* v___y_4135_){
_start:
{
lean_object* v_res_4136_; 
v_res_4136_ = l_Std_Async_EAsync_race___redArg___lam__2(v_a_4131_, v___f_4132_, v___f_4133_, v_x_4134_);
lean_dec(v_a_4131_);
return v_res_4136_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_race___redArg___lam__4(lean_object* v_a_4137_, lean_object* v___x_4138_, lean_object* v___x_4139_, uint8_t v___x_4140_, lean_object* v___f_4141_, lean_object* v_x_4142_){
_start:
{
if (lean_obj_tag(v_x_4142_) == 0)
{
lean_object* v_a_4144_; lean_object* v___x_4146_; uint8_t v_isShared_4147_; uint8_t v_isSharedCheck_4152_; 
lean_dec_ref(v___f_4141_);
lean_dec(v___x_4139_);
lean_dec_ref(v___x_4138_);
lean_dec_ref(v_a_4137_);
v_a_4144_ = lean_ctor_get(v_x_4142_, 0);
v_isSharedCheck_4152_ = !lean_is_exclusive(v_x_4142_);
if (v_isSharedCheck_4152_ == 0)
{
v___x_4146_ = v_x_4142_;
v_isShared_4147_ = v_isSharedCheck_4152_;
goto v_resetjp_4145_;
}
else
{
lean_inc(v_a_4144_);
lean_dec(v_x_4142_);
v___x_4146_ = lean_box(0);
v_isShared_4147_ = v_isSharedCheck_4152_;
goto v_resetjp_4145_;
}
v_resetjp_4145_:
{
lean_object* v___x_4149_; 
if (v_isShared_4147_ == 0)
{
v___x_4149_ = v___x_4146_;
goto v_reusejp_4148_;
}
else
{
lean_object* v_reuseFailAlloc_4151_; 
v_reuseFailAlloc_4151_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4151_, 0, v_a_4144_);
v___x_4149_ = v_reuseFailAlloc_4151_;
goto v_reusejp_4148_;
}
v_reusejp_4148_:
{
lean_object* v___x_4150_; 
v___x_4150_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4150_, 0, v___x_4149_);
return v___x_4150_;
}
}
}
else
{
lean_object* v___x_4154_; uint8_t v_isShared_4155_; uint8_t v_isSharedCheck_4162_; 
v_isSharedCheck_4162_ = !lean_is_exclusive(v_x_4142_);
if (v_isSharedCheck_4162_ == 0)
{
lean_object* v_unused_4163_; 
v_unused_4163_ = lean_ctor_get(v_x_4142_, 0);
lean_dec(v_unused_4163_);
v___x_4154_ = v_x_4142_;
v_isShared_4155_ = v_isSharedCheck_4162_;
goto v_resetjp_4153_;
}
else
{
lean_dec(v_x_4142_);
v___x_4154_ = lean_box(0);
v_isShared_4155_ = v_isSharedCheck_4162_;
goto v_resetjp_4153_;
}
v_resetjp_4153_:
{
lean_object* v___x_4156_; lean_object* v___x_4158_; 
lean_inc(v___x_4139_);
v___x_4156_ = l_BaseIO_chainTask___redArg(v_a_4137_, v___x_4138_, v___x_4139_, v___x_4140_);
if (v_isShared_4155_ == 0)
{
lean_ctor_set(v___x_4154_, 0, v___x_4156_);
v___x_4158_ = v___x_4154_;
goto v_reusejp_4157_;
}
else
{
lean_object* v_reuseFailAlloc_4161_; 
v_reuseFailAlloc_4161_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4161_, 0, v___x_4156_);
v___x_4158_ = v_reuseFailAlloc_4161_;
goto v_reusejp_4157_;
}
v_reusejp_4157_:
{
lean_object* v___x_4159_; lean_object* v___x_4160_; 
v___x_4159_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4159_, 0, v___x_4158_);
v___x_4160_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4139_, v___x_4140_, v___x_4159_, v___f_4141_);
return v___x_4160_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_race___redArg___lam__4___boxed(lean_object* v_a_4164_, lean_object* v___x_4165_, lean_object* v___x_4166_, lean_object* v___x_4167_, lean_object* v___f_4168_, lean_object* v_x_4169_, lean_object* v___y_4170_){
_start:
{
uint8_t v___x_1451__boxed_4171_; lean_object* v_res_4172_; 
v___x_1451__boxed_4171_ = lean_unbox(v___x_4167_);
v_res_4172_ = l_Std_Async_EAsync_race___redArg___lam__4(v_a_4164_, v___x_4165_, v___x_4166_, v___x_1451__boxed_4171_, v___f_4168_, v_x_4169_);
return v_res_4172_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_race___redArg___lam__5(lean_object* v___f_4173_, lean_object* v___f_4174_, lean_object* v___f_4175_, lean_object* v_a_4176_, lean_object* v_x_4177_){
_start:
{
if (lean_obj_tag(v_x_4177_) == 0)
{
lean_object* v_a_4179_; lean_object* v___x_4181_; uint8_t v_isShared_4182_; uint8_t v_isSharedCheck_4187_; 
lean_dec_ref(v_a_4176_);
lean_dec_ref(v___f_4175_);
lean_dec_ref(v___f_4174_);
lean_dec(v___f_4173_);
v_a_4179_ = lean_ctor_get(v_x_4177_, 0);
v_isSharedCheck_4187_ = !lean_is_exclusive(v_x_4177_);
if (v_isSharedCheck_4187_ == 0)
{
v___x_4181_ = v_x_4177_;
v_isShared_4182_ = v_isSharedCheck_4187_;
goto v_resetjp_4180_;
}
else
{
lean_inc(v_a_4179_);
lean_dec(v_x_4177_);
v___x_4181_ = lean_box(0);
v_isShared_4182_ = v_isSharedCheck_4187_;
goto v_resetjp_4180_;
}
v_resetjp_4180_:
{
lean_object* v___x_4184_; 
if (v_isShared_4182_ == 0)
{
v___x_4184_ = v___x_4181_;
goto v_reusejp_4183_;
}
else
{
lean_object* v_reuseFailAlloc_4186_; 
v_reuseFailAlloc_4186_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4186_, 0, v_a_4179_);
v___x_4184_ = v_reuseFailAlloc_4186_;
goto v_reusejp_4183_;
}
v_reusejp_4183_:
{
lean_object* v___x_4185_; 
v___x_4185_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4185_, 0, v___x_4184_);
return v___x_4185_;
}
}
}
else
{
lean_object* v_a_4188_; lean_object* v___x_4190_; uint8_t v_isShared_4191_; uint8_t v_isSharedCheck_4204_; 
v_a_4188_ = lean_ctor_get(v_x_4177_, 0);
v_isSharedCheck_4204_ = !lean_is_exclusive(v_x_4177_);
if (v_isSharedCheck_4204_ == 0)
{
v___x_4190_ = v_x_4177_;
v_isShared_4191_ = v_isSharedCheck_4204_;
goto v_resetjp_4189_;
}
else
{
lean_inc(v_a_4188_);
lean_dec(v_x_4177_);
v___x_4190_ = lean_box(0);
v_isShared_4191_ = v_isSharedCheck_4204_;
goto v_resetjp_4189_;
}
v_resetjp_4189_:
{
lean_object* v___x_4192_; lean_object* v___x_4193_; lean_object* v___x_4194_; uint8_t v___x_4195_; lean_object* v___x_4196_; lean_object* v___f_4197_; lean_object* v___x_4198_; lean_object* v___x_4200_; 
v___x_4192_ = lean_alloc_closure((void*)(l_liftM), 5, 4);
lean_closure_set(v___x_4192_, 0, lean_box(0));
lean_closure_set(v___x_4192_, 1, lean_box(0));
lean_closure_set(v___x_4192_, 2, v___f_4173_);
lean_closure_set(v___x_4192_, 3, lean_box(0));
v___x_4193_ = lean_alloc_closure((void*)(l_Function_comp), 6, 5);
lean_closure_set(v___x_4193_, 0, lean_box(0));
lean_closure_set(v___x_4193_, 1, lean_box(0));
lean_closure_set(v___x_4193_, 2, lean_box(0));
lean_closure_set(v___x_4193_, 3, v___x_4192_);
lean_closure_set(v___x_4193_, 4, v___f_4174_);
v___x_4194_ = lean_unsigned_to_nat(0u);
v___x_4195_ = 0;
v___x_4196_ = lean_box(v___x_4195_);
lean_inc_ref(v___x_4193_);
v___f_4197_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_race___redArg___lam__4___boxed), 7, 5);
lean_closure_set(v___f_4197_, 0, v_a_4188_);
lean_closure_set(v___f_4197_, 1, v___x_4193_);
lean_closure_set(v___f_4197_, 2, v___x_4194_);
lean_closure_set(v___f_4197_, 3, v___x_4196_);
lean_closure_set(v___f_4197_, 4, v___f_4175_);
v___x_4198_ = l_BaseIO_chainTask___redArg(v_a_4176_, v___x_4193_, v___x_4194_, v___x_4195_);
if (v_isShared_4191_ == 0)
{
lean_ctor_set(v___x_4190_, 0, v___x_4198_);
v___x_4200_ = v___x_4190_;
goto v_reusejp_4199_;
}
else
{
lean_object* v_reuseFailAlloc_4203_; 
v_reuseFailAlloc_4203_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4203_, 0, v___x_4198_);
v___x_4200_ = v_reuseFailAlloc_4203_;
goto v_reusejp_4199_;
}
v_reusejp_4199_:
{
lean_object* v___x_4201_; lean_object* v___x_4202_; 
v___x_4201_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4201_, 0, v___x_4200_);
v___x_4202_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4194_, v___x_4195_, v___x_4201_, v___f_4197_);
return v___x_4202_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_race___redArg___lam__5___boxed(lean_object* v___f_4205_, lean_object* v___f_4206_, lean_object* v___f_4207_, lean_object* v_a_4208_, lean_object* v_x_4209_, lean_object* v___y_4210_){
_start:
{
lean_object* v_res_4211_; 
v_res_4211_ = l_Std_Async_EAsync_race___redArg___lam__5(v___f_4205_, v___f_4206_, v___f_4207_, v_a_4208_, v_x_4209_);
return v_res_4211_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_race___redArg___lam__6(lean_object* v___f_4212_, lean_object* v___f_4213_, lean_object* v___f_4214_, lean_object* v_y_4215_, lean_object* v_prio_4216_, lean_object* v___f_4217_, lean_object* v_x_4218_){
_start:
{
if (lean_obj_tag(v_x_4218_) == 0)
{
lean_object* v_a_4220_; lean_object* v___x_4222_; uint8_t v_isShared_4223_; uint8_t v_isSharedCheck_4228_; 
lean_dec_ref(v___f_4217_);
lean_dec(v_prio_4216_);
lean_dec_ref(v_y_4215_);
lean_dec_ref(v___f_4214_);
lean_dec_ref(v___f_4213_);
lean_dec(v___f_4212_);
v_a_4220_ = lean_ctor_get(v_x_4218_, 0);
v_isSharedCheck_4228_ = !lean_is_exclusive(v_x_4218_);
if (v_isSharedCheck_4228_ == 0)
{
v___x_4222_ = v_x_4218_;
v_isShared_4223_ = v_isSharedCheck_4228_;
goto v_resetjp_4221_;
}
else
{
lean_inc(v_a_4220_);
lean_dec(v_x_4218_);
v___x_4222_ = lean_box(0);
v_isShared_4223_ = v_isSharedCheck_4228_;
goto v_resetjp_4221_;
}
v_resetjp_4221_:
{
lean_object* v___x_4225_; 
if (v_isShared_4223_ == 0)
{
v___x_4225_ = v___x_4222_;
goto v_reusejp_4224_;
}
else
{
lean_object* v_reuseFailAlloc_4227_; 
v_reuseFailAlloc_4227_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4227_, 0, v_a_4220_);
v___x_4225_ = v_reuseFailAlloc_4227_;
goto v_reusejp_4224_;
}
v_reusejp_4224_:
{
lean_object* v___x_4226_; 
v___x_4226_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4226_, 0, v___x_4225_);
return v___x_4226_;
}
}
}
else
{
lean_object* v_a_4229_; lean_object* v___x_4231_; uint8_t v_isShared_4232_; uint8_t v_isSharedCheck_4246_; 
v_a_4229_ = lean_ctor_get(v_x_4218_, 0);
v_isSharedCheck_4246_ = !lean_is_exclusive(v_x_4218_);
if (v_isSharedCheck_4246_ == 0)
{
v___x_4231_ = v_x_4218_;
v_isShared_4232_ = v_isSharedCheck_4246_;
goto v_resetjp_4230_;
}
else
{
lean_inc(v_a_4229_);
lean_dec(v_x_4218_);
v___x_4231_ = lean_box(0);
v_isShared_4232_ = v_isSharedCheck_4246_;
goto v_resetjp_4230_;
}
v_resetjp_4230_:
{
lean_object* v___f_4233_; lean_object* v___x_4234_; uint8_t v___x_4235_; lean_object* v___x_4236_; lean_object* v___x_4237_; lean_object* v___x_4238_; uint8_t v___x_4239_; lean_object* v___x_4240_; lean_object* v___x_4242_; 
v___f_4233_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_race___redArg___lam__5___boxed), 6, 4);
lean_closure_set(v___f_4233_, 0, v___f_4212_);
lean_closure_set(v___f_4233_, 1, v___f_4213_);
lean_closure_set(v___f_4233_, 2, v___f_4214_);
lean_closure_set(v___f_4233_, 3, v_a_4229_);
v___x_4234_ = lean_unsigned_to_nat(0u);
v___x_4235_ = 0;
v___x_4236_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_toBaseAsync___boxed), 4, 3);
lean_closure_set(v___x_4236_, 0, lean_box(0));
lean_closure_set(v___x_4236_, 1, lean_box(0));
lean_closure_set(v___x_4236_, 2, v_y_4215_);
v___x_4237_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_toRawBaseIO___boxed), 3, 2);
lean_closure_set(v___x_4237_, 0, lean_box(0));
lean_closure_set(v___x_4237_, 1, v___x_4236_);
v___x_4238_ = lean_io_as_task(v___x_4237_, v_prio_4216_);
v___x_4239_ = 1;
v___x_4240_ = lean_task_bind(v___x_4238_, v___f_4217_, v___x_4234_, v___x_4239_);
if (v_isShared_4232_ == 0)
{
lean_ctor_set(v___x_4231_, 0, v___x_4240_);
v___x_4242_ = v___x_4231_;
goto v_reusejp_4241_;
}
else
{
lean_object* v_reuseFailAlloc_4245_; 
v_reuseFailAlloc_4245_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4245_, 0, v___x_4240_);
v___x_4242_ = v_reuseFailAlloc_4245_;
goto v_reusejp_4241_;
}
v_reusejp_4241_:
{
lean_object* v___x_4243_; lean_object* v___x_4244_; 
v___x_4243_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4243_, 0, v___x_4242_);
v___x_4244_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4234_, v___x_4235_, v___x_4243_, v___f_4233_);
return v___x_4244_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_race___redArg___lam__6___boxed(lean_object* v___f_4247_, lean_object* v___f_4248_, lean_object* v___f_4249_, lean_object* v_y_4250_, lean_object* v_prio_4251_, lean_object* v___f_4252_, lean_object* v_x_4253_, lean_object* v___y_4254_){
_start:
{
lean_object* v_res_4255_; 
v_res_4255_ = l_Std_Async_EAsync_race___redArg___lam__6(v___f_4247_, v___f_4248_, v___f_4249_, v_y_4250_, v_prio_4251_, v___f_4252_, v_x_4253_);
return v_res_4255_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_race___redArg___lam__7(lean_object* v___f_4256_, lean_object* v___f_4257_, lean_object* v___f_4258_, lean_object* v_y_4259_, lean_object* v_prio_4260_, lean_object* v___f_4261_, lean_object* v_x_4262_, lean_object* v___f_4263_, lean_object* v_x_4264_){
_start:
{
if (lean_obj_tag(v_x_4264_) == 0)
{
lean_object* v_a_4266_; lean_object* v___x_4268_; uint8_t v_isShared_4269_; uint8_t v_isSharedCheck_4274_; 
lean_dec_ref(v___f_4263_);
lean_dec_ref(v_x_4262_);
lean_dec_ref(v___f_4261_);
lean_dec(v_prio_4260_);
lean_dec_ref(v_y_4259_);
lean_dec(v___f_4258_);
lean_dec_ref(v___f_4257_);
lean_dec_ref(v___f_4256_);
v_a_4266_ = lean_ctor_get(v_x_4264_, 0);
v_isSharedCheck_4274_ = !lean_is_exclusive(v_x_4264_);
if (v_isSharedCheck_4274_ == 0)
{
v___x_4268_ = v_x_4264_;
v_isShared_4269_ = v_isSharedCheck_4274_;
goto v_resetjp_4267_;
}
else
{
lean_inc(v_a_4266_);
lean_dec(v_x_4264_);
v___x_4268_ = lean_box(0);
v_isShared_4269_ = v_isSharedCheck_4274_;
goto v_resetjp_4267_;
}
v_resetjp_4267_:
{
lean_object* v___x_4271_; 
if (v_isShared_4269_ == 0)
{
v___x_4271_ = v___x_4268_;
goto v_reusejp_4270_;
}
else
{
lean_object* v_reuseFailAlloc_4273_; 
v_reuseFailAlloc_4273_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4273_, 0, v_a_4266_);
v___x_4271_ = v_reuseFailAlloc_4273_;
goto v_reusejp_4270_;
}
v_reusejp_4270_:
{
lean_object* v___x_4272_; 
v___x_4272_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4272_, 0, v___x_4271_);
return v___x_4272_;
}
}
}
else
{
lean_object* v_a_4275_; lean_object* v___x_4277_; uint8_t v_isShared_4278_; uint8_t v_isSharedCheck_4294_; 
v_a_4275_ = lean_ctor_get(v_x_4264_, 0);
v_isSharedCheck_4294_ = !lean_is_exclusive(v_x_4264_);
if (v_isSharedCheck_4294_ == 0)
{
v___x_4277_ = v_x_4264_;
v_isShared_4278_ = v_isSharedCheck_4294_;
goto v_resetjp_4276_;
}
else
{
lean_inc(v_a_4275_);
lean_dec(v_x_4264_);
v___x_4277_ = lean_box(0);
v_isShared_4278_ = v_isSharedCheck_4294_;
goto v_resetjp_4276_;
}
v_resetjp_4276_:
{
lean_object* v___f_4279_; lean_object* v___f_4280_; lean_object* v___f_4281_; lean_object* v___x_4282_; uint8_t v___x_4283_; lean_object* v___x_4284_; lean_object* v___x_4285_; lean_object* v___x_4286_; uint8_t v___x_4287_; lean_object* v___x_4288_; lean_object* v___x_4290_; 
lean_inc(v_a_4275_);
v___f_4279_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_race___redArg___lam__3___boxed), 3, 1);
lean_closure_set(v___f_4279_, 0, v_a_4275_);
v___f_4280_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_race___redArg___lam__2___boxed), 5, 3);
lean_closure_set(v___f_4280_, 0, v_a_4275_);
lean_closure_set(v___f_4280_, 1, v___f_4256_);
lean_closure_set(v___f_4280_, 2, v___f_4257_);
lean_inc(v_prio_4260_);
v___f_4281_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_race___redArg___lam__6___boxed), 8, 6);
lean_closure_set(v___f_4281_, 0, v___f_4258_);
lean_closure_set(v___f_4281_, 1, v___f_4279_);
lean_closure_set(v___f_4281_, 2, v___f_4280_);
lean_closure_set(v___f_4281_, 3, v_y_4259_);
lean_closure_set(v___f_4281_, 4, v_prio_4260_);
lean_closure_set(v___f_4281_, 5, v___f_4261_);
v___x_4282_ = lean_unsigned_to_nat(0u);
v___x_4283_ = 0;
v___x_4284_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_toBaseAsync___boxed), 4, 3);
lean_closure_set(v___x_4284_, 0, lean_box(0));
lean_closure_set(v___x_4284_, 1, lean_box(0));
lean_closure_set(v___x_4284_, 2, v_x_4262_);
v___x_4285_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_toRawBaseIO___boxed), 3, 2);
lean_closure_set(v___x_4285_, 0, lean_box(0));
lean_closure_set(v___x_4285_, 1, v___x_4284_);
v___x_4286_ = lean_io_as_task(v___x_4285_, v_prio_4260_);
v___x_4287_ = 1;
v___x_4288_ = lean_task_bind(v___x_4286_, v___f_4263_, v___x_4282_, v___x_4287_);
if (v_isShared_4278_ == 0)
{
lean_ctor_set(v___x_4277_, 0, v___x_4288_);
v___x_4290_ = v___x_4277_;
goto v_reusejp_4289_;
}
else
{
lean_object* v_reuseFailAlloc_4293_; 
v_reuseFailAlloc_4293_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4293_, 0, v___x_4288_);
v___x_4290_ = v_reuseFailAlloc_4293_;
goto v_reusejp_4289_;
}
v_reusejp_4289_:
{
lean_object* v___x_4291_; lean_object* v___x_4292_; 
v___x_4291_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4291_, 0, v___x_4290_);
v___x_4292_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4282_, v___x_4283_, v___x_4291_, v___f_4281_);
return v___x_4292_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_race___redArg___lam__7___boxed(lean_object* v___f_4295_, lean_object* v___f_4296_, lean_object* v___f_4297_, lean_object* v_y_4298_, lean_object* v_prio_4299_, lean_object* v___f_4300_, lean_object* v_x_4301_, lean_object* v___f_4302_, lean_object* v_x_4303_, lean_object* v___y_4304_){
_start:
{
lean_object* v_res_4305_; 
v_res_4305_ = l_Std_Async_EAsync_race___redArg___lam__7(v___f_4295_, v___f_4296_, v___f_4297_, v_y_4298_, v_prio_4299_, v___f_4300_, v_x_4301_, v___f_4302_, v_x_4303_);
return v_res_4305_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_race___redArg(lean_object* v_x_4308_, lean_object* v_y_4309_, lean_object* v_prio_4310_){
_start:
{
lean_object* v___f_4312_; lean_object* v___f_4313_; lean_object* v___f_4314_; lean_object* v___f_4315_; lean_object* v___f_4316_; lean_object* v___x_4317_; uint8_t v___x_4318_; lean_object* v___x_4319_; lean_object* v___x_4320_; lean_object* v___x_4321_; lean_object* v___x_4322_; 
v___f_4312_ = ((lean_object*)(l_Std_Async_EAsync_asTask___redArg___closed__0));
v___f_4313_ = ((lean_object*)(l_Std_Async_EAsync_race___redArg___closed__0));
v___f_4314_ = ((lean_object*)(l_Std_Async_EAsync_race___redArg___closed__1));
v___f_4315_ = ((lean_object*)(l_Std_Async_BaseAsync_race___redArg___closed__0));
v___f_4316_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_race___redArg___lam__7___boxed), 10, 8);
lean_closure_set(v___f_4316_, 0, v___f_4314_);
lean_closure_set(v___f_4316_, 1, v___f_4313_);
lean_closure_set(v___f_4316_, 2, v___f_4315_);
lean_closure_set(v___f_4316_, 3, v_y_4309_);
lean_closure_set(v___f_4316_, 4, v_prio_4310_);
lean_closure_set(v___f_4316_, 5, v___f_4312_);
lean_closure_set(v___f_4316_, 6, v_x_4308_);
lean_closure_set(v___f_4316_, 7, v___f_4312_);
v___x_4317_ = lean_unsigned_to_nat(0u);
v___x_4318_ = 0;
v___x_4319_ = lean_io_promise_new();
v___x_4320_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4320_, 0, v___x_4319_);
v___x_4321_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4321_, 0, v___x_4320_);
v___x_4322_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4317_, v___x_4318_, v___x_4321_, v___f_4316_);
return v___x_4322_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_race___redArg___boxed(lean_object* v_x_4323_, lean_object* v_y_4324_, lean_object* v_prio_4325_, lean_object* v___y_4326_){
_start:
{
lean_object* v_res_4327_; 
v_res_4327_ = l_Std_Async_EAsync_race___redArg(v_x_4323_, v_y_4324_, v_prio_4325_);
return v_res_4327_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_race(lean_object* v_00_u03b1_4328_, lean_object* v_00_u03b5_4329_, lean_object* v_inst_4330_, lean_object* v_x_4331_, lean_object* v_y_4332_, lean_object* v_prio_4333_){
_start:
{
lean_object* v___f_4335_; lean_object* v___f_4336_; lean_object* v___f_4337_; lean_object* v___f_4338_; lean_object* v___f_4339_; lean_object* v___x_4340_; uint8_t v___x_4341_; lean_object* v___x_4342_; lean_object* v___x_4343_; lean_object* v___x_4344_; lean_object* v___x_4345_; 
v___f_4335_ = ((lean_object*)(l_Std_Async_EAsync_asTask___redArg___closed__0));
v___f_4336_ = ((lean_object*)(l_Std_Async_EAsync_race___redArg___closed__0));
v___f_4337_ = ((lean_object*)(l_Std_Async_EAsync_race___redArg___closed__1));
v___f_4338_ = ((lean_object*)(l_Std_Async_BaseAsync_race___redArg___closed__0));
v___f_4339_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_race___redArg___lam__7___boxed), 10, 8);
lean_closure_set(v___f_4339_, 0, v___f_4337_);
lean_closure_set(v___f_4339_, 1, v___f_4336_);
lean_closure_set(v___f_4339_, 2, v___f_4338_);
lean_closure_set(v___f_4339_, 3, v_y_4332_);
lean_closure_set(v___f_4339_, 4, v_prio_4333_);
lean_closure_set(v___f_4339_, 5, v___f_4335_);
lean_closure_set(v___f_4339_, 6, v_x_4331_);
lean_closure_set(v___f_4339_, 7, v___f_4335_);
v___x_4340_ = lean_unsigned_to_nat(0u);
v___x_4341_ = 0;
v___x_4342_ = lean_io_promise_new();
v___x_4343_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4343_, 0, v___x_4342_);
v___x_4344_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4344_, 0, v___x_4343_);
v___x_4345_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4340_, v___x_4341_, v___x_4344_, v___f_4339_);
return v___x_4345_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_race___boxed(lean_object* v_00_u03b1_4346_, lean_object* v_00_u03b5_4347_, lean_object* v_inst_4348_, lean_object* v_x_4349_, lean_object* v_y_4350_, lean_object* v_prio_4351_, lean_object* v___y_4352_){
_start:
{
lean_object* v_res_4353_; 
v_res_4353_ = l_Std_Async_EAsync_race(v_00_u03b1_4346_, v_00_u03b5_4347_, v_inst_4348_, v_x_4349_, v_y_4350_, v_prio_4351_);
lean_dec(v_inst_4348_);
return v_res_4353_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_concurrentlyAll___redArg___lam__1(lean_object* v_prio_4354_, lean_object* v___f_4355_, lean_object* v_x_4356_){
_start:
{
lean_object* v___x_4358_; lean_object* v___x_4359_; lean_object* v___x_4360_; lean_object* v___x_4361_; uint8_t v___x_4362_; lean_object* v___x_4363_; lean_object* v___x_4364_; lean_object* v___x_4365_; 
v___x_4358_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_toBaseAsync___boxed), 4, 3);
lean_closure_set(v___x_4358_, 0, lean_box(0));
lean_closure_set(v___x_4358_, 1, lean_box(0));
lean_closure_set(v___x_4358_, 2, v_x_4356_);
v___x_4359_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_toRawBaseIO___boxed), 3, 2);
lean_closure_set(v___x_4359_, 0, lean_box(0));
lean_closure_set(v___x_4359_, 1, v___x_4358_);
v___x_4360_ = lean_io_as_task(v___x_4359_, v_prio_4354_);
v___x_4361_ = lean_unsigned_to_nat(0u);
v___x_4362_ = 1;
v___x_4363_ = lean_task_bind(v___x_4360_, v___f_4355_, v___x_4361_, v___x_4362_);
v___x_4364_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4364_, 0, v___x_4363_);
v___x_4365_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4365_, 0, v___x_4364_);
return v___x_4365_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_concurrentlyAll___redArg___lam__1___boxed(lean_object* v_prio_4366_, lean_object* v___f_4367_, lean_object* v_x_4368_, lean_object* v___y_4369_){
_start:
{
lean_object* v_res_4370_; 
v_res_4370_ = l_Std_Async_EAsync_concurrentlyAll___redArg___lam__1(v_prio_4366_, v___f_4367_, v_x_4368_);
return v_res_4370_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_concurrentlyAll___redArg___lam__0(lean_object* v___y_4371_){
_start:
{
lean_object* v___x_4373_; 
v___x_4373_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4373_, 0, v___y_4371_);
return v___x_4373_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_concurrentlyAll___redArg___lam__0___boxed(lean_object* v___y_4374_, lean_object* v___y_4375_){
_start:
{
lean_object* v_res_4376_; 
v_res_4376_ = l_Std_Async_EAsync_concurrentlyAll___redArg___lam__0(v___y_4374_);
return v_res_4376_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_concurrentlyAll___redArg___lam__2(lean_object* v___x_4377_, lean_object* v___f_4378_, lean_object* v_x_4379_){
_start:
{
if (lean_obj_tag(v_x_4379_) == 0)
{
lean_object* v_a_4381_; lean_object* v___x_4383_; uint8_t v_isShared_4384_; uint8_t v_isSharedCheck_4389_; 
lean_dec_ref(v___f_4378_);
lean_dec_ref(v___x_4377_);
v_a_4381_ = lean_ctor_get(v_x_4379_, 0);
v_isSharedCheck_4389_ = !lean_is_exclusive(v_x_4379_);
if (v_isSharedCheck_4389_ == 0)
{
v___x_4383_ = v_x_4379_;
v_isShared_4384_ = v_isSharedCheck_4389_;
goto v_resetjp_4382_;
}
else
{
lean_inc(v_a_4381_);
lean_dec(v_x_4379_);
v___x_4383_ = lean_box(0);
v_isShared_4384_ = v_isSharedCheck_4389_;
goto v_resetjp_4382_;
}
v_resetjp_4382_:
{
lean_object* v___x_4386_; 
if (v_isShared_4384_ == 0)
{
v___x_4386_ = v___x_4383_;
goto v_reusejp_4385_;
}
else
{
lean_object* v_reuseFailAlloc_4388_; 
v_reuseFailAlloc_4388_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4388_, 0, v_a_4381_);
v___x_4386_ = v_reuseFailAlloc_4388_;
goto v_reusejp_4385_;
}
v_reusejp_4385_:
{
lean_object* v___x_4387_; 
v___x_4387_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4387_, 0, v___x_4386_);
return v___x_4387_;
}
}
}
else
{
lean_object* v_a_4390_; size_t v_sz_4391_; size_t v___x_4392_; lean_object* v___x_298__overap_4393_; lean_object* v___x_4394_; 
v_a_4390_ = lean_ctor_get(v_x_4379_, 0);
lean_inc(v_a_4390_);
lean_dec_ref_known(v_x_4379_, 1);
v_sz_4391_ = lean_array_size(v_a_4390_);
v___x_4392_ = ((size_t)0ULL);
v___x_298__overap_4393_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_4377_, v___f_4378_, v_sz_4391_, v___x_4392_, v_a_4390_);
v___x_4394_ = lean_apply_1(v___x_298__overap_4393_, lean_box(0));
return v___x_4394_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_concurrentlyAll___redArg___lam__2___boxed(lean_object* v___x_4395_, lean_object* v___f_4396_, lean_object* v_x_4397_, lean_object* v___y_4398_){
_start:
{
lean_object* v_res_4399_; 
v_res_4399_ = l_Std_Async_EAsync_concurrentlyAll___redArg___lam__2(v___x_4395_, v___f_4396_, v_x_4397_);
return v_res_4399_;
}
}
static lean_object* _init_l_Std_Async_EAsync_concurrentlyAll___redArg___closed__1(void){
_start:
{
lean_object* v___f_4401_; lean_object* v___x_4402_; lean_object* v___f_4403_; 
v___f_4401_ = ((lean_object*)(l_Std_Async_EAsync_concurrentlyAll___redArg___closed__0));
v___x_4402_ = lean_obj_once(&l_Std_Async_EAsync_instMonad___closed__0, &l_Std_Async_EAsync_instMonad___closed__0_once, _init_l_Std_Async_EAsync_instMonad___closed__0);
v___f_4403_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_concurrentlyAll___redArg___lam__2___boxed), 4, 2);
lean_closure_set(v___f_4403_, 0, v___x_4402_);
lean_closure_set(v___f_4403_, 1, v___f_4401_);
return v___f_4403_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_concurrentlyAll___redArg(lean_object* v_xs_4404_, lean_object* v_prio_4405_){
_start:
{
lean_object* v___f_4407_; lean_object* v___f_4408_; lean_object* v___x_4409_; lean_object* v___f_4410_; lean_object* v___x_4411_; uint8_t v___x_4412_; size_t v_sz_4413_; size_t v___x_4414_; lean_object* v___x_221__overap_4415_; lean_object* v___x_4416_; lean_object* v___x_4417_; 
v___f_4407_ = ((lean_object*)(l_Std_Async_EAsync_asTask___redArg___closed__0));
v___f_4408_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_concurrentlyAll___redArg___lam__1___boxed), 4, 2);
lean_closure_set(v___f_4408_, 0, v_prio_4405_);
lean_closure_set(v___f_4408_, 1, v___f_4407_);
v___x_4409_ = lean_obj_once(&l_Std_Async_EAsync_instMonad___closed__0, &l_Std_Async_EAsync_instMonad___closed__0_once, _init_l_Std_Async_EAsync_instMonad___closed__0);
v___f_4410_ = lean_obj_once(&l_Std_Async_EAsync_concurrentlyAll___redArg___closed__1, &l_Std_Async_EAsync_concurrentlyAll___redArg___closed__1_once, _init_l_Std_Async_EAsync_concurrentlyAll___redArg___closed__1);
v___x_4411_ = lean_unsigned_to_nat(0u);
v___x_4412_ = 0;
v_sz_4413_ = lean_array_size(v_xs_4404_);
v___x_4414_ = ((size_t)0ULL);
v___x_221__overap_4415_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_4409_, v___f_4408_, v_sz_4413_, v___x_4414_, v_xs_4404_);
v___x_4416_ = lean_apply_1(v___x_221__overap_4415_, lean_box(0));
v___x_4417_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4411_, v___x_4412_, v___x_4416_, v___f_4410_);
return v___x_4417_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_concurrentlyAll___redArg___boxed(lean_object* v_xs_4418_, lean_object* v_prio_4419_, lean_object* v___y_4420_){
_start:
{
lean_object* v_res_4421_; 
v_res_4421_ = l_Std_Async_EAsync_concurrentlyAll___redArg(v_xs_4418_, v_prio_4419_);
return v_res_4421_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_concurrentlyAll(lean_object* v_00_u03b5_4422_, lean_object* v_00_u03b1_4423_, lean_object* v_xs_4424_, lean_object* v_prio_4425_){
_start:
{
lean_object* v___f_4427_; lean_object* v___f_4428_; lean_object* v___x_4429_; lean_object* v___f_4430_; lean_object* v___x_4431_; uint8_t v___x_4432_; size_t v_sz_4433_; size_t v___x_4434_; lean_object* v___x_263__overap_4435_; lean_object* v___x_4436_; lean_object* v___x_4437_; 
v___f_4427_ = ((lean_object*)(l_Std_Async_EAsync_asTask___redArg___closed__0));
v___f_4428_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_concurrentlyAll___redArg___lam__1___boxed), 4, 2);
lean_closure_set(v___f_4428_, 0, v_prio_4425_);
lean_closure_set(v___f_4428_, 1, v___f_4427_);
v___x_4429_ = lean_obj_once(&l_Std_Async_EAsync_instMonad___closed__0, &l_Std_Async_EAsync_instMonad___closed__0_once, _init_l_Std_Async_EAsync_instMonad___closed__0);
v___f_4430_ = lean_obj_once(&l_Std_Async_EAsync_concurrentlyAll___redArg___closed__1, &l_Std_Async_EAsync_concurrentlyAll___redArg___closed__1_once, _init_l_Std_Async_EAsync_concurrentlyAll___redArg___closed__1);
v___x_4431_ = lean_unsigned_to_nat(0u);
v___x_4432_ = 0;
v_sz_4433_ = lean_array_size(v_xs_4424_);
v___x_4434_ = ((size_t)0ULL);
v___x_263__overap_4435_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_4429_, v___f_4428_, v_sz_4433_, v___x_4434_, v_xs_4424_);
v___x_4436_ = lean_apply_1(v___x_263__overap_4435_, lean_box(0));
v___x_4437_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4431_, v___x_4432_, v___x_4436_, v___f_4430_);
return v___x_4437_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_concurrentlyAll___boxed(lean_object* v_00_u03b5_4438_, lean_object* v_00_u03b1_4439_, lean_object* v_xs_4440_, lean_object* v_prio_4441_, lean_object* v___y_4442_){
_start:
{
lean_object* v_res_4443_; 
v_res_4443_ = l_Std_Async_EAsync_concurrentlyAll(v_00_u03b5_4438_, v_00_u03b1_4439_, v_xs_4440_, v_prio_4441_);
return v_res_4443_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_raceAll___redArg___lam__4(lean_object* v___f_4444_, lean_object* v___f_4445_, lean_object* v_x_4446_){
_start:
{
if (lean_obj_tag(v_x_4446_) == 0)
{
lean_object* v_a_4448_; lean_object* v___x_4450_; uint8_t v_isShared_4451_; uint8_t v_isSharedCheck_4456_; 
lean_dec_ref(v___f_4445_);
lean_dec(v___f_4444_);
v_a_4448_ = lean_ctor_get(v_x_4446_, 0);
v_isSharedCheck_4456_ = !lean_is_exclusive(v_x_4446_);
if (v_isSharedCheck_4456_ == 0)
{
v___x_4450_ = v_x_4446_;
v_isShared_4451_ = v_isSharedCheck_4456_;
goto v_resetjp_4449_;
}
else
{
lean_inc(v_a_4448_);
lean_dec(v_x_4446_);
v___x_4450_ = lean_box(0);
v_isShared_4451_ = v_isSharedCheck_4456_;
goto v_resetjp_4449_;
}
v_resetjp_4449_:
{
lean_object* v___x_4453_; 
if (v_isShared_4451_ == 0)
{
v___x_4453_ = v___x_4450_;
goto v_reusejp_4452_;
}
else
{
lean_object* v_reuseFailAlloc_4455_; 
v_reuseFailAlloc_4455_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4455_, 0, v_a_4448_);
v___x_4453_ = v_reuseFailAlloc_4455_;
goto v_reusejp_4452_;
}
v_reusejp_4452_:
{
lean_object* v___x_4454_; 
v___x_4454_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4454_, 0, v___x_4453_);
return v___x_4454_;
}
}
}
else
{
lean_object* v_a_4457_; lean_object* v___x_4459_; uint8_t v_isShared_4460_; uint8_t v_isSharedCheck_4470_; 
v_a_4457_ = lean_ctor_get(v_x_4446_, 0);
v_isSharedCheck_4470_ = !lean_is_exclusive(v_x_4446_);
if (v_isSharedCheck_4470_ == 0)
{
v___x_4459_ = v_x_4446_;
v_isShared_4460_ = v_isSharedCheck_4470_;
goto v_resetjp_4458_;
}
else
{
lean_inc(v_a_4457_);
lean_dec(v_x_4446_);
v___x_4459_ = lean_box(0);
v_isShared_4460_ = v_isSharedCheck_4470_;
goto v_resetjp_4458_;
}
v_resetjp_4458_:
{
lean_object* v___x_4461_; lean_object* v___x_4462_; lean_object* v___x_4463_; uint8_t v___x_4464_; lean_object* v___x_4465_; lean_object* v___x_4467_; 
v___x_4461_ = lean_alloc_closure((void*)(l_liftM), 5, 4);
lean_closure_set(v___x_4461_, 0, lean_box(0));
lean_closure_set(v___x_4461_, 1, lean_box(0));
lean_closure_set(v___x_4461_, 2, v___f_4444_);
lean_closure_set(v___x_4461_, 3, lean_box(0));
v___x_4462_ = lean_alloc_closure((void*)(l_Function_comp), 6, 5);
lean_closure_set(v___x_4462_, 0, lean_box(0));
lean_closure_set(v___x_4462_, 1, lean_box(0));
lean_closure_set(v___x_4462_, 2, lean_box(0));
lean_closure_set(v___x_4462_, 3, v___x_4461_);
lean_closure_set(v___x_4462_, 4, v___f_4445_);
v___x_4463_ = lean_unsigned_to_nat(0u);
v___x_4464_ = 0;
v___x_4465_ = l_BaseIO_chainTask___redArg(v_a_4457_, v___x_4462_, v___x_4463_, v___x_4464_);
if (v_isShared_4460_ == 0)
{
lean_ctor_set(v___x_4459_, 0, v___x_4465_);
v___x_4467_ = v___x_4459_;
goto v_reusejp_4466_;
}
else
{
lean_object* v_reuseFailAlloc_4469_; 
v_reuseFailAlloc_4469_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4469_, 0, v___x_4465_);
v___x_4467_ = v_reuseFailAlloc_4469_;
goto v_reusejp_4466_;
}
v_reusejp_4466_:
{
lean_object* v___x_4468_; 
v___x_4468_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4468_, 0, v___x_4467_);
return v___x_4468_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_raceAll___redArg___lam__4___boxed(lean_object* v___f_4471_, lean_object* v___f_4472_, lean_object* v_x_4473_, lean_object* v___y_4474_){
_start:
{
lean_object* v_res_4475_; 
v_res_4475_ = l_Std_Async_EAsync_raceAll___redArg___lam__4(v___f_4471_, v___f_4472_, v_x_4473_);
return v_res_4475_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_raceAll___redArg___lam__0(lean_object* v_prio_4476_, lean_object* v___f_4477_, lean_object* v___f_4478_, lean_object* v_x_4479_){
_start:
{
lean_object* v___x_4481_; uint8_t v___x_4482_; lean_object* v___x_4483_; lean_object* v___x_4484_; lean_object* v___x_4485_; uint8_t v___x_4486_; lean_object* v___x_4487_; lean_object* v___x_4488_; lean_object* v___x_4489_; lean_object* v___x_4490_; 
v___x_4481_ = lean_unsigned_to_nat(0u);
v___x_4482_ = 0;
v___x_4483_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_toBaseAsync___boxed), 4, 3);
lean_closure_set(v___x_4483_, 0, lean_box(0));
lean_closure_set(v___x_4483_, 1, lean_box(0));
lean_closure_set(v___x_4483_, 2, v_x_4479_);
v___x_4484_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_toRawBaseIO___boxed), 3, 2);
lean_closure_set(v___x_4484_, 0, lean_box(0));
lean_closure_set(v___x_4484_, 1, v___x_4483_);
v___x_4485_ = lean_io_as_task(v___x_4484_, v_prio_4476_);
v___x_4486_ = 1;
v___x_4487_ = lean_task_bind(v___x_4485_, v___f_4477_, v___x_4481_, v___x_4486_);
v___x_4488_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4488_, 0, v___x_4487_);
v___x_4489_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4489_, 0, v___x_4488_);
v___x_4490_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4481_, v___x_4482_, v___x_4489_, v___f_4478_);
return v___x_4490_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_raceAll___redArg___lam__0___boxed(lean_object* v_prio_4491_, lean_object* v___f_4492_, lean_object* v___f_4493_, lean_object* v_x_4494_, lean_object* v___y_4495_){
_start:
{
lean_object* v_res_4496_; 
v_res_4496_ = l_Std_Async_EAsync_raceAll___redArg___lam__0(v_prio_4491_, v___f_4492_, v___f_4493_, v_x_4494_);
return v_res_4496_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_raceAll___redArg___lam__2(lean_object* v___f_4497_, lean_object* v_prio_4498_, lean_object* v___f_4499_, lean_object* v___f_4500_, lean_object* v___f_4501_, lean_object* v_inst_4502_, lean_object* v_xs_4503_, lean_object* v_x_4504_){
_start:
{
if (lean_obj_tag(v_x_4504_) == 0)
{
lean_object* v_a_4506_; lean_object* v___x_4508_; uint8_t v_isShared_4509_; uint8_t v_isSharedCheck_4514_; 
lean_dec(v_xs_4503_);
lean_dec_ref(v_inst_4502_);
lean_dec_ref(v___f_4501_);
lean_dec_ref(v___f_4500_);
lean_dec_ref(v___f_4499_);
lean_dec(v_prio_4498_);
lean_dec(v___f_4497_);
v_a_4506_ = lean_ctor_get(v_x_4504_, 0);
v_isSharedCheck_4514_ = !lean_is_exclusive(v_x_4504_);
if (v_isSharedCheck_4514_ == 0)
{
v___x_4508_ = v_x_4504_;
v_isShared_4509_ = v_isSharedCheck_4514_;
goto v_resetjp_4507_;
}
else
{
lean_inc(v_a_4506_);
lean_dec(v_x_4504_);
v___x_4508_ = lean_box(0);
v_isShared_4509_ = v_isSharedCheck_4514_;
goto v_resetjp_4507_;
}
v_resetjp_4507_:
{
lean_object* v___x_4511_; 
if (v_isShared_4509_ == 0)
{
v___x_4511_ = v___x_4508_;
goto v_reusejp_4510_;
}
else
{
lean_object* v_reuseFailAlloc_4513_; 
v_reuseFailAlloc_4513_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4513_, 0, v_a_4506_);
v___x_4511_ = v_reuseFailAlloc_4513_;
goto v_reusejp_4510_;
}
v_reusejp_4510_:
{
lean_object* v___x_4512_; 
v___x_4512_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4512_, 0, v___x_4511_);
return v___x_4512_;
}
}
}
else
{
lean_object* v_a_4515_; lean_object* v___f_4516_; lean_object* v___f_4517_; lean_object* v___f_4518_; lean_object* v___f_4519_; lean_object* v___x_4520_; uint8_t v___x_4521_; lean_object* v___x_4522_; lean_object* v___x_4523_; 
v_a_4515_ = lean_ctor_get(v_x_4504_, 0);
lean_inc_n(v_a_4515_, 2);
lean_dec_ref_known(v_x_4504_, 1);
v___f_4516_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_race___redArg___lam__3___boxed), 3, 1);
lean_closure_set(v___f_4516_, 0, v_a_4515_);
v___f_4517_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_raceAll___redArg___lam__4___boxed), 4, 2);
lean_closure_set(v___f_4517_, 0, v___f_4497_);
lean_closure_set(v___f_4517_, 1, v___f_4516_);
v___f_4518_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_raceAll___redArg___lam__0___boxed), 5, 3);
lean_closure_set(v___f_4518_, 0, v_prio_4498_);
lean_closure_set(v___f_4518_, 1, v___f_4499_);
lean_closure_set(v___f_4518_, 2, v___f_4517_);
v___f_4519_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_race___redArg___lam__2___boxed), 5, 3);
lean_closure_set(v___f_4519_, 0, v_a_4515_);
lean_closure_set(v___f_4519_, 1, v___f_4500_);
lean_closure_set(v___f_4519_, 2, v___f_4501_);
v___x_4520_ = lean_unsigned_to_nat(0u);
v___x_4521_ = 0;
v___x_4522_ = lean_apply_3(v_inst_4502_, v_xs_4503_, v___f_4518_, lean_box(0));
v___x_4523_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4520_, v___x_4521_, v___x_4522_, v___f_4519_);
return v___x_4523_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_raceAll___redArg___lam__2___boxed(lean_object* v___f_4524_, lean_object* v_prio_4525_, lean_object* v___f_4526_, lean_object* v___f_4527_, lean_object* v___f_4528_, lean_object* v_inst_4529_, lean_object* v_xs_4530_, lean_object* v_x_4531_, lean_object* v___y_4532_){
_start:
{
lean_object* v_res_4533_; 
v_res_4533_ = l_Std_Async_EAsync_raceAll___redArg___lam__2(v___f_4524_, v_prio_4525_, v___f_4526_, v___f_4527_, v___f_4528_, v_inst_4529_, v_xs_4530_, v_x_4531_);
return v_res_4533_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_raceAll___redArg(lean_object* v_inst_4534_, lean_object* v_xs_4535_, lean_object* v_prio_4536_){
_start:
{
lean_object* v___f_4538_; lean_object* v___f_4539_; lean_object* v___f_4540_; lean_object* v___f_4541_; lean_object* v___f_4542_; lean_object* v___x_4543_; uint8_t v___x_4544_; lean_object* v___x_4545_; lean_object* v___x_4546_; lean_object* v___x_4547_; lean_object* v___x_4548_; 
v___f_4538_ = ((lean_object*)(l_Std_Async_EAsync_race___redArg___closed__1));
v___f_4539_ = ((lean_object*)(l_Std_Async_EAsync_race___redArg___closed__0));
v___f_4540_ = ((lean_object*)(l_Std_Async_EAsync_asTask___redArg___closed__0));
v___f_4541_ = ((lean_object*)(l_Std_Async_BaseAsync_race___redArg___closed__0));
v___f_4542_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_raceAll___redArg___lam__2___boxed), 9, 7);
lean_closure_set(v___f_4542_, 0, v___f_4541_);
lean_closure_set(v___f_4542_, 1, v_prio_4536_);
lean_closure_set(v___f_4542_, 2, v___f_4540_);
lean_closure_set(v___f_4542_, 3, v___f_4538_);
lean_closure_set(v___f_4542_, 4, v___f_4539_);
lean_closure_set(v___f_4542_, 5, v_inst_4534_);
lean_closure_set(v___f_4542_, 6, v_xs_4535_);
v___x_4543_ = lean_unsigned_to_nat(0u);
v___x_4544_ = 0;
v___x_4545_ = lean_io_promise_new();
v___x_4546_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4546_, 0, v___x_4545_);
v___x_4547_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4547_, 0, v___x_4546_);
v___x_4548_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4543_, v___x_4544_, v___x_4547_, v___f_4542_);
return v___x_4548_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_raceAll___redArg___boxed(lean_object* v_inst_4549_, lean_object* v_xs_4550_, lean_object* v_prio_4551_, lean_object* v___y_4552_){
_start:
{
lean_object* v_res_4553_; 
v_res_4553_ = l_Std_Async_EAsync_raceAll___redArg(v_inst_4549_, v_xs_4550_, v_prio_4551_);
return v_res_4553_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_raceAll(lean_object* v_00_u03b1_4554_, lean_object* v_00_u03b5_4555_, lean_object* v_c_4556_, lean_object* v_inst_4557_, lean_object* v_inst_4558_, lean_object* v_xs_4559_, lean_object* v_prio_4560_){
_start:
{
lean_object* v___f_4562_; lean_object* v___f_4563_; lean_object* v___f_4564_; lean_object* v___f_4565_; lean_object* v___f_4566_; lean_object* v___x_4567_; uint8_t v___x_4568_; lean_object* v___x_4569_; lean_object* v___x_4570_; lean_object* v___x_4571_; lean_object* v___x_4572_; 
v___f_4562_ = ((lean_object*)(l_Std_Async_EAsync_race___redArg___closed__1));
v___f_4563_ = ((lean_object*)(l_Std_Async_EAsync_race___redArg___closed__0));
v___f_4564_ = ((lean_object*)(l_Std_Async_EAsync_asTask___redArg___closed__0));
v___f_4565_ = ((lean_object*)(l_Std_Async_BaseAsync_race___redArg___closed__0));
v___f_4566_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_raceAll___redArg___lam__2___boxed), 9, 7);
lean_closure_set(v___f_4566_, 0, v___f_4565_);
lean_closure_set(v___f_4566_, 1, v_prio_4560_);
lean_closure_set(v___f_4566_, 2, v___f_4564_);
lean_closure_set(v___f_4566_, 3, v___f_4562_);
lean_closure_set(v___f_4566_, 4, v___f_4563_);
lean_closure_set(v___f_4566_, 5, v_inst_4558_);
lean_closure_set(v___f_4566_, 6, v_xs_4559_);
v___x_4567_ = lean_unsigned_to_nat(0u);
v___x_4568_ = 0;
v___x_4569_ = lean_io_promise_new();
v___x_4570_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4570_, 0, v___x_4569_);
v___x_4571_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4571_, 0, v___x_4570_);
v___x_4572_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4567_, v___x_4568_, v___x_4571_, v___f_4566_);
return v___x_4572_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_raceAll___boxed(lean_object* v_00_u03b1_4573_, lean_object* v_00_u03b5_4574_, lean_object* v_c_4575_, lean_object* v_inst_4576_, lean_object* v_inst_4577_, lean_object* v_xs_4578_, lean_object* v_prio_4579_, lean_object* v___y_4580_){
_start:
{
lean_object* v_res_4581_; 
v_res_4581_ = l_Std_Async_EAsync_raceAll(v_00_u03b1_4573_, v_00_u03b5_4574_, v_c_4575_, v_inst_4576_, v_inst_4577_, v_xs_4578_, v_prio_4579_);
lean_dec(v_inst_4576_);
return v_res_4581_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_toIO___redArg(lean_object* v_x_4582_){
_start:
{
lean_object* v___x_4584_; 
v___x_4584_ = lean_apply_1(v_x_4582_, lean_box(0));
if (lean_obj_tag(v___x_4584_) == 0)
{
lean_object* v_a_4585_; lean_object* v___x_4587_; uint8_t v_isShared_4588_; uint8_t v_isSharedCheck_4593_; 
v_a_4585_ = lean_ctor_get(v___x_4584_, 0);
v_isSharedCheck_4593_ = !lean_is_exclusive(v___x_4584_);
if (v_isSharedCheck_4593_ == 0)
{
v___x_4587_ = v___x_4584_;
v_isShared_4588_ = v_isSharedCheck_4593_;
goto v_resetjp_4586_;
}
else
{
lean_inc(v_a_4585_);
lean_dec(v___x_4584_);
v___x_4587_ = lean_box(0);
v_isShared_4588_ = v_isSharedCheck_4593_;
goto v_resetjp_4586_;
}
v_resetjp_4586_:
{
lean_object* v___x_4589_; lean_object* v___x_4591_; 
v___x_4589_ = lean_task_pure(v_a_4585_);
if (v_isShared_4588_ == 0)
{
lean_ctor_set(v___x_4587_, 0, v___x_4589_);
v___x_4591_ = v___x_4587_;
goto v_reusejp_4590_;
}
else
{
lean_object* v_reuseFailAlloc_4592_; 
v_reuseFailAlloc_4592_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4592_, 0, v___x_4589_);
v___x_4591_ = v_reuseFailAlloc_4592_;
goto v_reusejp_4590_;
}
v_reusejp_4590_:
{
return v___x_4591_;
}
}
}
else
{
lean_object* v_a_4594_; lean_object* v___x_4596_; uint8_t v_isShared_4597_; uint8_t v_isSharedCheck_4601_; 
v_a_4594_ = lean_ctor_get(v___x_4584_, 0);
v_isSharedCheck_4601_ = !lean_is_exclusive(v___x_4584_);
if (v_isSharedCheck_4601_ == 0)
{
v___x_4596_ = v___x_4584_;
v_isShared_4597_ = v_isSharedCheck_4601_;
goto v_resetjp_4595_;
}
else
{
lean_inc(v_a_4594_);
lean_dec(v___x_4584_);
v___x_4596_ = lean_box(0);
v_isShared_4597_ = v_isSharedCheck_4601_;
goto v_resetjp_4595_;
}
v_resetjp_4595_:
{
lean_object* v___x_4599_; 
if (v_isShared_4597_ == 0)
{
lean_ctor_set_tag(v___x_4596_, 0);
v___x_4599_ = v___x_4596_;
goto v_reusejp_4598_;
}
else
{
lean_object* v_reuseFailAlloc_4600_; 
v_reuseFailAlloc_4600_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4600_, 0, v_a_4594_);
v___x_4599_ = v_reuseFailAlloc_4600_;
goto v_reusejp_4598_;
}
v_reusejp_4598_:
{
return v___x_4599_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_toIO___redArg___boxed(lean_object* v_x_4602_, lean_object* v___y_4603_){
_start:
{
lean_object* v_res_4604_; 
v_res_4604_ = l_Std_Async_Async_toIO___redArg(v_x_4602_);
return v_res_4604_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_toIO(lean_object* v_00_u03b1_4605_, lean_object* v_x_4606_){
_start:
{
lean_object* v___x_4608_; 
v___x_4608_ = lean_apply_1(v_x_4606_, lean_box(0));
if (lean_obj_tag(v___x_4608_) == 0)
{
lean_object* v_a_4609_; lean_object* v___x_4611_; uint8_t v_isShared_4612_; uint8_t v_isSharedCheck_4617_; 
v_a_4609_ = lean_ctor_get(v___x_4608_, 0);
v_isSharedCheck_4617_ = !lean_is_exclusive(v___x_4608_);
if (v_isSharedCheck_4617_ == 0)
{
v___x_4611_ = v___x_4608_;
v_isShared_4612_ = v_isSharedCheck_4617_;
goto v_resetjp_4610_;
}
else
{
lean_inc(v_a_4609_);
lean_dec(v___x_4608_);
v___x_4611_ = lean_box(0);
v_isShared_4612_ = v_isSharedCheck_4617_;
goto v_resetjp_4610_;
}
v_resetjp_4610_:
{
lean_object* v___x_4613_; lean_object* v___x_4615_; 
v___x_4613_ = lean_task_pure(v_a_4609_);
if (v_isShared_4612_ == 0)
{
lean_ctor_set(v___x_4611_, 0, v___x_4613_);
v___x_4615_ = v___x_4611_;
goto v_reusejp_4614_;
}
else
{
lean_object* v_reuseFailAlloc_4616_; 
v_reuseFailAlloc_4616_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4616_, 0, v___x_4613_);
v___x_4615_ = v_reuseFailAlloc_4616_;
goto v_reusejp_4614_;
}
v_reusejp_4614_:
{
return v___x_4615_;
}
}
}
else
{
lean_object* v_a_4618_; lean_object* v___x_4620_; uint8_t v_isShared_4621_; uint8_t v_isSharedCheck_4625_; 
v_a_4618_ = lean_ctor_get(v___x_4608_, 0);
v_isSharedCheck_4625_ = !lean_is_exclusive(v___x_4608_);
if (v_isSharedCheck_4625_ == 0)
{
v___x_4620_ = v___x_4608_;
v_isShared_4621_ = v_isSharedCheck_4625_;
goto v_resetjp_4619_;
}
else
{
lean_inc(v_a_4618_);
lean_dec(v___x_4608_);
v___x_4620_ = lean_box(0);
v_isShared_4621_ = v_isSharedCheck_4625_;
goto v_resetjp_4619_;
}
v_resetjp_4619_:
{
lean_object* v___x_4623_; 
if (v_isShared_4621_ == 0)
{
lean_ctor_set_tag(v___x_4620_, 0);
v___x_4623_ = v___x_4620_;
goto v_reusejp_4622_;
}
else
{
lean_object* v_reuseFailAlloc_4624_; 
v_reuseFailAlloc_4624_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4624_, 0, v_a_4618_);
v___x_4623_ = v_reuseFailAlloc_4624_;
goto v_reusejp_4622_;
}
v_reusejp_4622_:
{
return v___x_4623_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_toIO___boxed(lean_object* v_00_u03b1_4626_, lean_object* v_x_4627_, lean_object* v___y_4628_){
_start:
{
lean_object* v_res_4629_; 
v_res_4629_ = l_Std_Async_Async_toIO(v_00_u03b1_4626_, v_x_4627_);
return v_res_4629_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_block___redArg(lean_object* v_x_4630_, lean_object* v_prio_4631_){
_start:
{
lean_object* v___f_4633_; lean_object* v___x_4634_; lean_object* v___x_4635_; lean_object* v___x_4636_; lean_object* v___x_4637_; uint8_t v___x_4638_; lean_object* v___x_4639_; lean_object* v___x_4640_; 
v___f_4633_ = ((lean_object*)(l_Std_Async_EAsync_instMonadAsyncAsyncTaskError___closed__0));
v___x_4634_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_toBaseAsync___boxed), 4, 3);
lean_closure_set(v___x_4634_, 0, lean_box(0));
lean_closure_set(v___x_4634_, 1, lean_box(0));
lean_closure_set(v___x_4634_, 2, v_x_4630_);
v___x_4635_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_toRawBaseIO___boxed), 3, 2);
lean_closure_set(v___x_4635_, 0, lean_box(0));
lean_closure_set(v___x_4635_, 1, v___x_4634_);
v___x_4636_ = lean_io_as_task(v___x_4635_, v_prio_4631_);
v___x_4637_ = lean_unsigned_to_nat(0u);
v___x_4638_ = 1;
v___x_4639_ = lean_task_bind(v___x_4636_, v___f_4633_, v___x_4637_, v___x_4638_);
v___x_4640_ = lean_task_get_own(v___x_4639_);
if (lean_obj_tag(v___x_4640_) == 0)
{
lean_object* v_a_4641_; lean_object* v___x_4643_; uint8_t v_isShared_4644_; uint8_t v_isSharedCheck_4648_; 
v_a_4641_ = lean_ctor_get(v___x_4640_, 0);
v_isSharedCheck_4648_ = !lean_is_exclusive(v___x_4640_);
if (v_isSharedCheck_4648_ == 0)
{
v___x_4643_ = v___x_4640_;
v_isShared_4644_ = v_isSharedCheck_4648_;
goto v_resetjp_4642_;
}
else
{
lean_inc(v_a_4641_);
lean_dec(v___x_4640_);
v___x_4643_ = lean_box(0);
v_isShared_4644_ = v_isSharedCheck_4648_;
goto v_resetjp_4642_;
}
v_resetjp_4642_:
{
lean_object* v___x_4646_; 
if (v_isShared_4644_ == 0)
{
lean_ctor_set_tag(v___x_4643_, 1);
v___x_4646_ = v___x_4643_;
goto v_reusejp_4645_;
}
else
{
lean_object* v_reuseFailAlloc_4647_; 
v_reuseFailAlloc_4647_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4647_, 0, v_a_4641_);
v___x_4646_ = v_reuseFailAlloc_4647_;
goto v_reusejp_4645_;
}
v_reusejp_4645_:
{
return v___x_4646_;
}
}
}
else
{
lean_object* v_a_4649_; lean_object* v___x_4651_; uint8_t v_isShared_4652_; uint8_t v_isSharedCheck_4656_; 
v_a_4649_ = lean_ctor_get(v___x_4640_, 0);
v_isSharedCheck_4656_ = !lean_is_exclusive(v___x_4640_);
if (v_isSharedCheck_4656_ == 0)
{
v___x_4651_ = v___x_4640_;
v_isShared_4652_ = v_isSharedCheck_4656_;
goto v_resetjp_4650_;
}
else
{
lean_inc(v_a_4649_);
lean_dec(v___x_4640_);
v___x_4651_ = lean_box(0);
v_isShared_4652_ = v_isSharedCheck_4656_;
goto v_resetjp_4650_;
}
v_resetjp_4650_:
{
lean_object* v___x_4654_; 
if (v_isShared_4652_ == 0)
{
lean_ctor_set_tag(v___x_4651_, 0);
v___x_4654_ = v___x_4651_;
goto v_reusejp_4653_;
}
else
{
lean_object* v_reuseFailAlloc_4655_; 
v_reuseFailAlloc_4655_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4655_, 0, v_a_4649_);
v___x_4654_ = v_reuseFailAlloc_4655_;
goto v_reusejp_4653_;
}
v_reusejp_4653_:
{
return v___x_4654_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_block___redArg___boxed(lean_object* v_x_4657_, lean_object* v_prio_4658_, lean_object* v___y_4659_){
_start:
{
lean_object* v_res_4660_; 
v_res_4660_ = l_Std_Async_Async_block___redArg(v_x_4657_, v_prio_4658_);
return v_res_4660_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_block(lean_object* v_00_u03b1_4661_, lean_object* v_x_4662_, lean_object* v_prio_4663_){
_start:
{
lean_object* v___f_4665_; lean_object* v___x_4666_; lean_object* v___x_4667_; lean_object* v___x_4668_; lean_object* v___x_4669_; uint8_t v___x_4670_; lean_object* v___x_4671_; lean_object* v___x_4672_; 
v___f_4665_ = ((lean_object*)(l_Std_Async_EAsync_instMonadAsyncAsyncTaskError___closed__0));
v___x_4666_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_toBaseAsync___boxed), 4, 3);
lean_closure_set(v___x_4666_, 0, lean_box(0));
lean_closure_set(v___x_4666_, 1, lean_box(0));
lean_closure_set(v___x_4666_, 2, v_x_4662_);
v___x_4667_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_toRawBaseIO___boxed), 3, 2);
lean_closure_set(v___x_4667_, 0, lean_box(0));
lean_closure_set(v___x_4667_, 1, v___x_4666_);
v___x_4668_ = lean_io_as_task(v___x_4667_, v_prio_4663_);
v___x_4669_ = lean_unsigned_to_nat(0u);
v___x_4670_ = 1;
v___x_4671_ = lean_task_bind(v___x_4668_, v___f_4665_, v___x_4669_, v___x_4670_);
v___x_4672_ = lean_task_get_own(v___x_4671_);
if (lean_obj_tag(v___x_4672_) == 0)
{
lean_object* v_a_4673_; lean_object* v___x_4675_; uint8_t v_isShared_4676_; uint8_t v_isSharedCheck_4680_; 
v_a_4673_ = lean_ctor_get(v___x_4672_, 0);
v_isSharedCheck_4680_ = !lean_is_exclusive(v___x_4672_);
if (v_isSharedCheck_4680_ == 0)
{
v___x_4675_ = v___x_4672_;
v_isShared_4676_ = v_isSharedCheck_4680_;
goto v_resetjp_4674_;
}
else
{
lean_inc(v_a_4673_);
lean_dec(v___x_4672_);
v___x_4675_ = lean_box(0);
v_isShared_4676_ = v_isSharedCheck_4680_;
goto v_resetjp_4674_;
}
v_resetjp_4674_:
{
lean_object* v___x_4678_; 
if (v_isShared_4676_ == 0)
{
lean_ctor_set_tag(v___x_4675_, 1);
v___x_4678_ = v___x_4675_;
goto v_reusejp_4677_;
}
else
{
lean_object* v_reuseFailAlloc_4679_; 
v_reuseFailAlloc_4679_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4679_, 0, v_a_4673_);
v___x_4678_ = v_reuseFailAlloc_4679_;
goto v_reusejp_4677_;
}
v_reusejp_4677_:
{
return v___x_4678_;
}
}
}
else
{
lean_object* v_a_4681_; lean_object* v___x_4683_; uint8_t v_isShared_4684_; uint8_t v_isSharedCheck_4688_; 
v_a_4681_ = lean_ctor_get(v___x_4672_, 0);
v_isSharedCheck_4688_ = !lean_is_exclusive(v___x_4672_);
if (v_isSharedCheck_4688_ == 0)
{
v___x_4683_ = v___x_4672_;
v_isShared_4684_ = v_isSharedCheck_4688_;
goto v_resetjp_4682_;
}
else
{
lean_inc(v_a_4681_);
lean_dec(v___x_4672_);
v___x_4683_ = lean_box(0);
v_isShared_4684_ = v_isSharedCheck_4688_;
goto v_resetjp_4682_;
}
v_resetjp_4682_:
{
lean_object* v___x_4686_; 
if (v_isShared_4684_ == 0)
{
lean_ctor_set_tag(v___x_4683_, 0);
v___x_4686_ = v___x_4683_;
goto v_reusejp_4685_;
}
else
{
lean_object* v_reuseFailAlloc_4687_; 
v_reuseFailAlloc_4687_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4687_, 0, v_a_4681_);
v___x_4686_ = v_reuseFailAlloc_4687_;
goto v_reusejp_4685_;
}
v_reusejp_4685_:
{
return v___x_4686_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_block___boxed(lean_object* v_00_u03b1_4689_, lean_object* v_x_4690_, lean_object* v_prio_4691_, lean_object* v___y_4692_){
_start:
{
lean_object* v_res_4693_; 
v_res_4693_ = l_Std_Async_Async_block(v_00_u03b1_4689_, v_x_4690_, v_prio_4691_);
return v_res_4693_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_ofPromise___redArg(lean_object* v_task_4694_, lean_object* v_error_4695_){
_start:
{
lean_object* v___f_4697_; lean_object* v___x_4698_; 
v___f_4697_ = lean_alloc_closure((void*)(l_Std_Async_AsyncTask_ofPromise___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_4697_, 0, v_error_4695_);
v___x_4698_ = lean_apply_1(v_task_4694_, lean_box(0));
if (lean_obj_tag(v___x_4698_) == 0)
{
lean_object* v_a_4699_; lean_object* v___x_4701_; uint8_t v_isShared_4702_; uint8_t v_isSharedCheck_4710_; 
v_a_4699_ = lean_ctor_get(v___x_4698_, 0);
v_isSharedCheck_4710_ = !lean_is_exclusive(v___x_4698_);
if (v_isSharedCheck_4710_ == 0)
{
v___x_4701_ = v___x_4698_;
v_isShared_4702_ = v_isSharedCheck_4710_;
goto v_resetjp_4700_;
}
else
{
lean_inc(v_a_4699_);
lean_dec(v___x_4698_);
v___x_4701_ = lean_box(0);
v_isShared_4702_ = v_isSharedCheck_4710_;
goto v_resetjp_4700_;
}
v_resetjp_4700_:
{
lean_object* v___x_4703_; lean_object* v___x_4704_; uint8_t v___x_4705_; lean_object* v___x_4706_; lean_object* v___x_4708_; 
v___x_4703_ = lean_io_promise_result_opt(v_a_4699_);
lean_dec(v_a_4699_);
v___x_4704_ = lean_unsigned_to_nat(0u);
v___x_4705_ = 0;
v___x_4706_ = lean_task_map(v___f_4697_, v___x_4703_, v___x_4704_, v___x_4705_);
if (v_isShared_4702_ == 0)
{
lean_ctor_set_tag(v___x_4701_, 1);
lean_ctor_set(v___x_4701_, 0, v___x_4706_);
v___x_4708_ = v___x_4701_;
goto v_reusejp_4707_;
}
else
{
lean_object* v_reuseFailAlloc_4709_; 
v_reuseFailAlloc_4709_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4709_, 0, v___x_4706_);
v___x_4708_ = v_reuseFailAlloc_4709_;
goto v_reusejp_4707_;
}
v_reusejp_4707_:
{
return v___x_4708_;
}
}
}
else
{
lean_object* v_a_4711_; lean_object* v___x_4713_; uint8_t v_isShared_4714_; uint8_t v_isSharedCheck_4719_; 
lean_dec_ref(v___f_4697_);
v_a_4711_ = lean_ctor_get(v___x_4698_, 0);
v_isSharedCheck_4719_ = !lean_is_exclusive(v___x_4698_);
if (v_isSharedCheck_4719_ == 0)
{
v___x_4713_ = v___x_4698_;
v_isShared_4714_ = v_isSharedCheck_4719_;
goto v_resetjp_4712_;
}
else
{
lean_inc(v_a_4711_);
lean_dec(v___x_4698_);
v___x_4713_ = lean_box(0);
v_isShared_4714_ = v_isSharedCheck_4719_;
goto v_resetjp_4712_;
}
v_resetjp_4712_:
{
lean_object* v___x_4716_; 
if (v_isShared_4714_ == 0)
{
lean_ctor_set_tag(v___x_4713_, 0);
v___x_4716_ = v___x_4713_;
goto v_reusejp_4715_;
}
else
{
lean_object* v_reuseFailAlloc_4718_; 
v_reuseFailAlloc_4718_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4718_, 0, v_a_4711_);
v___x_4716_ = v_reuseFailAlloc_4718_;
goto v_reusejp_4715_;
}
v_reusejp_4715_:
{
lean_object* v___x_4717_; 
v___x_4717_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4717_, 0, v___x_4716_);
return v___x_4717_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_ofPromise___redArg___boxed(lean_object* v_task_4720_, lean_object* v_error_4721_, lean_object* v___y_4722_){
_start:
{
lean_object* v_res_4723_; 
v_res_4723_ = l_Std_Async_Async_ofPromise___redArg(v_task_4720_, v_error_4721_);
return v_res_4723_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_ofPromise(lean_object* v_00_u03b1_4724_, lean_object* v_task_4725_, lean_object* v_error_4726_){
_start:
{
lean_object* v___f_4728_; lean_object* v___x_4729_; 
v___f_4728_ = lean_alloc_closure((void*)(l_Std_Async_AsyncTask_ofPromise___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_4728_, 0, v_error_4726_);
v___x_4729_ = lean_apply_1(v_task_4725_, lean_box(0));
if (lean_obj_tag(v___x_4729_) == 0)
{
lean_object* v_a_4730_; lean_object* v___x_4732_; uint8_t v_isShared_4733_; uint8_t v_isSharedCheck_4741_; 
v_a_4730_ = lean_ctor_get(v___x_4729_, 0);
v_isSharedCheck_4741_ = !lean_is_exclusive(v___x_4729_);
if (v_isSharedCheck_4741_ == 0)
{
v___x_4732_ = v___x_4729_;
v_isShared_4733_ = v_isSharedCheck_4741_;
goto v_resetjp_4731_;
}
else
{
lean_inc(v_a_4730_);
lean_dec(v___x_4729_);
v___x_4732_ = lean_box(0);
v_isShared_4733_ = v_isSharedCheck_4741_;
goto v_resetjp_4731_;
}
v_resetjp_4731_:
{
lean_object* v___x_4734_; lean_object* v___x_4735_; uint8_t v___x_4736_; lean_object* v___x_4737_; lean_object* v___x_4739_; 
v___x_4734_ = lean_io_promise_result_opt(v_a_4730_);
lean_dec(v_a_4730_);
v___x_4735_ = lean_unsigned_to_nat(0u);
v___x_4736_ = 0;
v___x_4737_ = lean_task_map(v___f_4728_, v___x_4734_, v___x_4735_, v___x_4736_);
if (v_isShared_4733_ == 0)
{
lean_ctor_set_tag(v___x_4732_, 1);
lean_ctor_set(v___x_4732_, 0, v___x_4737_);
v___x_4739_ = v___x_4732_;
goto v_reusejp_4738_;
}
else
{
lean_object* v_reuseFailAlloc_4740_; 
v_reuseFailAlloc_4740_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4740_, 0, v___x_4737_);
v___x_4739_ = v_reuseFailAlloc_4740_;
goto v_reusejp_4738_;
}
v_reusejp_4738_:
{
return v___x_4739_;
}
}
}
else
{
lean_object* v_a_4742_; lean_object* v___x_4744_; uint8_t v_isShared_4745_; uint8_t v_isSharedCheck_4750_; 
lean_dec_ref(v___f_4728_);
v_a_4742_ = lean_ctor_get(v___x_4729_, 0);
v_isSharedCheck_4750_ = !lean_is_exclusive(v___x_4729_);
if (v_isSharedCheck_4750_ == 0)
{
v___x_4744_ = v___x_4729_;
v_isShared_4745_ = v_isSharedCheck_4750_;
goto v_resetjp_4743_;
}
else
{
lean_inc(v_a_4742_);
lean_dec(v___x_4729_);
v___x_4744_ = lean_box(0);
v_isShared_4745_ = v_isSharedCheck_4750_;
goto v_resetjp_4743_;
}
v_resetjp_4743_:
{
lean_object* v___x_4747_; 
if (v_isShared_4745_ == 0)
{
lean_ctor_set_tag(v___x_4744_, 0);
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
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_ofPromise___boxed(lean_object* v_00_u03b1_4751_, lean_object* v_task_4752_, lean_object* v_error_4753_, lean_object* v___y_4754_){
_start:
{
lean_object* v_res_4755_; 
v_res_4755_ = l_Std_Async_Async_ofPromise(v_00_u03b1_4751_, v_task_4752_, v_error_4753_);
return v_res_4755_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_ofAsyncTask___redArg(lean_object* v_task_4756_){
_start:
{
lean_object* v___x_4758_; 
v___x_4758_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4758_, 0, v_task_4756_);
return v___x_4758_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_ofAsyncTask___redArg___boxed(lean_object* v_task_4759_, lean_object* v___y_4760_){
_start:
{
lean_object* v_res_4761_; 
v_res_4761_ = l_Std_Async_Async_ofAsyncTask___redArg(v_task_4759_);
return v_res_4761_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_ofAsyncTask(lean_object* v_00_u03b1_4762_, lean_object* v_task_4763_){
_start:
{
lean_object* v___x_4765_; 
v___x_4765_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4765_, 0, v_task_4763_);
return v___x_4765_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_ofAsyncTask___boxed(lean_object* v_00_u03b1_4766_, lean_object* v_task_4767_, lean_object* v___y_4768_){
_start:
{
lean_object* v_res_4769_; 
v_res_4769_ = l_Std_Async_Async_ofAsyncTask(v_00_u03b1_4766_, v_task_4767_);
return v_res_4769_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_ofIOTask___redArg___lam__0(lean_object* v_a_4770_){
_start:
{
lean_object* v___x_4771_; 
v___x_4771_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4771_, 0, v_a_4770_);
return v___x_4771_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_ofIOTask___redArg___lam__1(lean_object* v___f_4772_, lean_object* v_x_4773_){
_start:
{
if (lean_obj_tag(v_x_4773_) == 0)
{
lean_object* v_a_4775_; lean_object* v___x_4777_; uint8_t v_isShared_4778_; uint8_t v_isSharedCheck_4783_; 
lean_dec_ref(v___f_4772_);
v_a_4775_ = lean_ctor_get(v_x_4773_, 0);
v_isSharedCheck_4783_ = !lean_is_exclusive(v_x_4773_);
if (v_isSharedCheck_4783_ == 0)
{
v___x_4777_ = v_x_4773_;
v_isShared_4778_ = v_isSharedCheck_4783_;
goto v_resetjp_4776_;
}
else
{
lean_inc(v_a_4775_);
lean_dec(v_x_4773_);
v___x_4777_ = lean_box(0);
v_isShared_4778_ = v_isSharedCheck_4783_;
goto v_resetjp_4776_;
}
v_resetjp_4776_:
{
lean_object* v___x_4780_; 
if (v_isShared_4778_ == 0)
{
v___x_4780_ = v___x_4777_;
goto v_reusejp_4779_;
}
else
{
lean_object* v_reuseFailAlloc_4782_; 
v_reuseFailAlloc_4782_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4782_, 0, v_a_4775_);
v___x_4780_ = v_reuseFailAlloc_4782_;
goto v_reusejp_4779_;
}
v_reusejp_4779_:
{
lean_object* v___x_4781_; 
v___x_4781_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4781_, 0, v___x_4780_);
return v___x_4781_;
}
}
}
else
{
lean_object* v_a_4784_; 
v_a_4784_ = lean_ctor_get(v_x_4773_, 0);
lean_inc(v_a_4784_);
lean_dec_ref_known(v_x_4773_, 1);
if (lean_obj_tag(v_a_4784_) == 0)
{
lean_object* v_a_4785_; lean_object* v___x_4787_; uint8_t v_isShared_4788_; uint8_t v_isSharedCheck_4793_; 
lean_dec_ref(v___f_4772_);
v_a_4785_ = lean_ctor_get(v_a_4784_, 0);
v_isSharedCheck_4793_ = !lean_is_exclusive(v_a_4784_);
if (v_isSharedCheck_4793_ == 0)
{
v___x_4787_ = v_a_4784_;
v_isShared_4788_ = v_isSharedCheck_4793_;
goto v_resetjp_4786_;
}
else
{
lean_inc(v_a_4785_);
lean_dec(v_a_4784_);
v___x_4787_ = lean_box(0);
v_isShared_4788_ = v_isSharedCheck_4793_;
goto v_resetjp_4786_;
}
v_resetjp_4786_:
{
lean_object* v___x_4790_; 
if (v_isShared_4788_ == 0)
{
v___x_4790_ = v___x_4787_;
goto v_reusejp_4789_;
}
else
{
lean_object* v_reuseFailAlloc_4792_; 
v_reuseFailAlloc_4792_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4792_, 0, v_a_4785_);
v___x_4790_ = v_reuseFailAlloc_4792_;
goto v_reusejp_4789_;
}
v_reusejp_4789_:
{
lean_object* v___x_4791_; 
v___x_4791_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4791_, 0, v___x_4790_);
return v___x_4791_;
}
}
}
else
{
lean_object* v_a_4794_; lean_object* v___x_4795_; uint8_t v___x_4796_; lean_object* v___x_4797_; lean_object* v___x_4798_; 
v_a_4794_ = lean_ctor_get(v_a_4784_, 0);
lean_inc(v_a_4794_);
lean_dec_ref_known(v_a_4784_, 1);
v___x_4795_ = lean_unsigned_to_nat(0u);
v___x_4796_ = 0;
v___x_4797_ = lean_task_map(v___f_4772_, v_a_4794_, v___x_4795_, v___x_4796_);
v___x_4798_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4798_, 0, v___x_4797_);
return v___x_4798_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_ofIOTask___redArg___lam__1___boxed(lean_object* v___f_4799_, lean_object* v_x_4800_, lean_object* v___y_4801_){
_start:
{
lean_object* v_res_4802_; 
v_res_4802_ = l_Std_Async_Async_ofIOTask___redArg___lam__1(v___f_4799_, v_x_4800_);
return v_res_4802_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_ofIOTask___redArg(lean_object* v_task_4806_){
_start:
{
lean_object* v___f_4808_; lean_object* v___x_4809_; uint8_t v___x_4810_; lean_object* v_val_4812_; lean_object* v___x_4816_; 
v___f_4808_ = ((lean_object*)(l_Std_Async_Async_ofIOTask___redArg___closed__1));
v___x_4809_ = lean_unsigned_to_nat(0u);
v___x_4810_ = 0;
v___x_4816_ = lean_apply_1(v_task_4806_, lean_box(0));
if (lean_obj_tag(v___x_4816_) == 0)
{
lean_object* v_a_4817_; lean_object* v___x_4819_; uint8_t v_isShared_4820_; uint8_t v_isSharedCheck_4824_; 
v_a_4817_ = lean_ctor_get(v___x_4816_, 0);
v_isSharedCheck_4824_ = !lean_is_exclusive(v___x_4816_);
if (v_isSharedCheck_4824_ == 0)
{
v___x_4819_ = v___x_4816_;
v_isShared_4820_ = v_isSharedCheck_4824_;
goto v_resetjp_4818_;
}
else
{
lean_inc(v_a_4817_);
lean_dec(v___x_4816_);
v___x_4819_ = lean_box(0);
v_isShared_4820_ = v_isSharedCheck_4824_;
goto v_resetjp_4818_;
}
v_resetjp_4818_:
{
lean_object* v___x_4822_; 
if (v_isShared_4820_ == 0)
{
lean_ctor_set_tag(v___x_4819_, 1);
v___x_4822_ = v___x_4819_;
goto v_reusejp_4821_;
}
else
{
lean_object* v_reuseFailAlloc_4823_; 
v_reuseFailAlloc_4823_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4823_, 0, v_a_4817_);
v___x_4822_ = v_reuseFailAlloc_4823_;
goto v_reusejp_4821_;
}
v_reusejp_4821_:
{
v_val_4812_ = v___x_4822_;
goto v___jp_4811_;
}
}
}
else
{
lean_object* v_a_4825_; lean_object* v___x_4827_; uint8_t v_isShared_4828_; uint8_t v_isSharedCheck_4832_; 
v_a_4825_ = lean_ctor_get(v___x_4816_, 0);
v_isSharedCheck_4832_ = !lean_is_exclusive(v___x_4816_);
if (v_isSharedCheck_4832_ == 0)
{
v___x_4827_ = v___x_4816_;
v_isShared_4828_ = v_isSharedCheck_4832_;
goto v_resetjp_4826_;
}
else
{
lean_inc(v_a_4825_);
lean_dec(v___x_4816_);
v___x_4827_ = lean_box(0);
v_isShared_4828_ = v_isSharedCheck_4832_;
goto v_resetjp_4826_;
}
v_resetjp_4826_:
{
lean_object* v___x_4830_; 
if (v_isShared_4828_ == 0)
{
lean_ctor_set_tag(v___x_4827_, 0);
v___x_4830_ = v___x_4827_;
goto v_reusejp_4829_;
}
else
{
lean_object* v_reuseFailAlloc_4831_; 
v_reuseFailAlloc_4831_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4831_, 0, v_a_4825_);
v___x_4830_ = v_reuseFailAlloc_4831_;
goto v_reusejp_4829_;
}
v_reusejp_4829_:
{
v_val_4812_ = v___x_4830_;
goto v___jp_4811_;
}
}
}
v___jp_4811_:
{
lean_object* v___x_4813_; lean_object* v___x_4814_; lean_object* v___x_4815_; 
v___x_4813_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4813_, 0, v_val_4812_);
v___x_4814_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4814_, 0, v___x_4813_);
v___x_4815_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4809_, v___x_4810_, v___x_4814_, v___f_4808_);
return v___x_4815_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_ofIOTask___redArg___boxed(lean_object* v_task_4833_, lean_object* v___y_4834_){
_start:
{
lean_object* v_res_4835_; 
v_res_4835_ = l_Std_Async_Async_ofIOTask___redArg(v_task_4833_);
return v_res_4835_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_ofIOTask(lean_object* v_00_u03b1_4836_, lean_object* v_task_4837_){
_start:
{
lean_object* v___f_4839_; lean_object* v___x_4840_; uint8_t v___x_4841_; lean_object* v_val_4843_; lean_object* v___x_4847_; 
v___f_4839_ = ((lean_object*)(l_Std_Async_Async_ofIOTask___redArg___closed__1));
v___x_4840_ = lean_unsigned_to_nat(0u);
v___x_4841_ = 0;
v___x_4847_ = lean_apply_1(v_task_4837_, lean_box(0));
if (lean_obj_tag(v___x_4847_) == 0)
{
lean_object* v_a_4848_; lean_object* v___x_4850_; uint8_t v_isShared_4851_; uint8_t v_isSharedCheck_4855_; 
v_a_4848_ = lean_ctor_get(v___x_4847_, 0);
v_isSharedCheck_4855_ = !lean_is_exclusive(v___x_4847_);
if (v_isSharedCheck_4855_ == 0)
{
v___x_4850_ = v___x_4847_;
v_isShared_4851_ = v_isSharedCheck_4855_;
goto v_resetjp_4849_;
}
else
{
lean_inc(v_a_4848_);
lean_dec(v___x_4847_);
v___x_4850_ = lean_box(0);
v_isShared_4851_ = v_isSharedCheck_4855_;
goto v_resetjp_4849_;
}
v_resetjp_4849_:
{
lean_object* v___x_4853_; 
if (v_isShared_4851_ == 0)
{
lean_ctor_set_tag(v___x_4850_, 1);
v___x_4853_ = v___x_4850_;
goto v_reusejp_4852_;
}
else
{
lean_object* v_reuseFailAlloc_4854_; 
v_reuseFailAlloc_4854_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4854_, 0, v_a_4848_);
v___x_4853_ = v_reuseFailAlloc_4854_;
goto v_reusejp_4852_;
}
v_reusejp_4852_:
{
v_val_4843_ = v___x_4853_;
goto v___jp_4842_;
}
}
}
else
{
lean_object* v_a_4856_; lean_object* v___x_4858_; uint8_t v_isShared_4859_; uint8_t v_isSharedCheck_4863_; 
v_a_4856_ = lean_ctor_get(v___x_4847_, 0);
v_isSharedCheck_4863_ = !lean_is_exclusive(v___x_4847_);
if (v_isSharedCheck_4863_ == 0)
{
v___x_4858_ = v___x_4847_;
v_isShared_4859_ = v_isSharedCheck_4863_;
goto v_resetjp_4857_;
}
else
{
lean_inc(v_a_4856_);
lean_dec(v___x_4847_);
v___x_4858_ = lean_box(0);
v_isShared_4859_ = v_isSharedCheck_4863_;
goto v_resetjp_4857_;
}
v_resetjp_4857_:
{
lean_object* v___x_4861_; 
if (v_isShared_4859_ == 0)
{
lean_ctor_set_tag(v___x_4858_, 0);
v___x_4861_ = v___x_4858_;
goto v_reusejp_4860_;
}
else
{
lean_object* v_reuseFailAlloc_4862_; 
v_reuseFailAlloc_4862_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4862_, 0, v_a_4856_);
v___x_4861_ = v_reuseFailAlloc_4862_;
goto v_reusejp_4860_;
}
v_reusejp_4860_:
{
v_val_4843_ = v___x_4861_;
goto v___jp_4842_;
}
}
}
v___jp_4842_:
{
lean_object* v___x_4844_; lean_object* v___x_4845_; lean_object* v___x_4846_; 
v___x_4844_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4844_, 0, v_val_4843_);
v___x_4845_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4845_, 0, v___x_4844_);
v___x_4846_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4840_, v___x_4841_, v___x_4845_, v___f_4839_);
return v___x_4846_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_ofIOTask___boxed(lean_object* v_00_u03b1_4864_, lean_object* v_task_4865_, lean_object* v___y_4866_){
_start:
{
lean_object* v_res_4867_; 
v_res_4867_ = l_Std_Async_Async_ofIOTask(v_00_u03b1_4864_, v_task_4865_);
return v_res_4867_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_ofExcept___redArg(lean_object* v_except_4868_){
_start:
{
lean_object* v___x_4870_; 
v___x_4870_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4870_, 0, v_except_4868_);
return v___x_4870_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_ofExcept___redArg___boxed(lean_object* v_except_4871_, lean_object* v___y_4872_){
_start:
{
lean_object* v_res_4873_; 
v_res_4873_ = l_Std_Async_Async_ofExcept___redArg(v_except_4871_);
return v_res_4873_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_ofExcept(lean_object* v_00_u03b1_4874_, lean_object* v_except_4875_){
_start:
{
lean_object* v___x_4877_; 
v___x_4877_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4877_, 0, v_except_4875_);
return v___x_4877_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_ofExcept___boxed(lean_object* v_00_u03b1_4878_, lean_object* v_except_4879_, lean_object* v___y_4880_){
_start:
{
lean_object* v_res_4881_; 
v_res_4881_ = l_Std_Async_Async_ofExcept(v_00_u03b1_4878_, v_except_4879_);
return v_res_4881_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_ofTask___redArg(lean_object* v_task_4882_){
_start:
{
lean_object* v___f_4884_; lean_object* v___x_4885_; uint8_t v___x_4886_; lean_object* v___x_4887_; lean_object* v___x_4888_; 
v___f_4884_ = ((lean_object*)(l_Std_Async_Async_ofIOTask___redArg___closed__0));
v___x_4885_ = lean_unsigned_to_nat(0u);
v___x_4886_ = 0;
v___x_4887_ = lean_task_map(v___f_4884_, v_task_4882_, v___x_4885_, v___x_4886_);
v___x_4888_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4888_, 0, v___x_4887_);
return v___x_4888_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_ofTask___redArg___boxed(lean_object* v_task_4889_, lean_object* v___y_4890_){
_start:
{
lean_object* v_res_4891_; 
v_res_4891_ = l_Std_Async_Async_ofTask___redArg(v_task_4889_);
return v_res_4891_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_ofTask(lean_object* v_00_u03b1_4892_, lean_object* v_task_4893_){
_start:
{
lean_object* v___f_4895_; lean_object* v___x_4896_; uint8_t v___x_4897_; lean_object* v___x_4898_; lean_object* v___x_4899_; 
v___f_4895_ = ((lean_object*)(l_Std_Async_Async_ofIOTask___redArg___closed__0));
v___x_4896_ = lean_unsigned_to_nat(0u);
v___x_4897_ = 0;
v___x_4898_ = lean_task_map(v___f_4895_, v_task_4893_, v___x_4896_, v___x_4897_);
v___x_4899_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4899_, 0, v___x_4898_);
return v___x_4899_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_ofTask___boxed(lean_object* v_00_u03b1_4900_, lean_object* v_task_4901_, lean_object* v___y_4902_){
_start:
{
lean_object* v_res_4903_; 
v_res_4903_ = l_Std_Async_Async_ofTask(v_00_u03b1_4900_, v_task_4901_);
return v_res_4903_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_ofPurePromise___redArg(lean_object* v_task_4904_, lean_object* v_error_4905_){
_start:
{
lean_object* v___f_4907_; lean_object* v___x_4908_; 
v___f_4907_ = lean_alloc_closure((void*)(l_Std_Async_AsyncTask_ofPurePromise___redArg___lam__0), 2, 1);
lean_closure_set(v___f_4907_, 0, v_error_4905_);
v___x_4908_ = lean_apply_1(v_task_4904_, lean_box(0));
if (lean_obj_tag(v___x_4908_) == 0)
{
lean_object* v_a_4909_; lean_object* v___x_4911_; uint8_t v_isShared_4912_; uint8_t v_isSharedCheck_4920_; 
v_a_4909_ = lean_ctor_get(v___x_4908_, 0);
v_isSharedCheck_4920_ = !lean_is_exclusive(v___x_4908_);
if (v_isSharedCheck_4920_ == 0)
{
v___x_4911_ = v___x_4908_;
v_isShared_4912_ = v_isSharedCheck_4920_;
goto v_resetjp_4910_;
}
else
{
lean_inc(v_a_4909_);
lean_dec(v___x_4908_);
v___x_4911_ = lean_box(0);
v_isShared_4912_ = v_isSharedCheck_4920_;
goto v_resetjp_4910_;
}
v_resetjp_4910_:
{
lean_object* v___x_4913_; lean_object* v___x_4914_; uint8_t v___x_4915_; lean_object* v___x_4916_; lean_object* v___x_4918_; 
v___x_4913_ = lean_io_promise_result_opt(v_a_4909_);
lean_dec(v_a_4909_);
v___x_4914_ = lean_unsigned_to_nat(0u);
v___x_4915_ = 0;
v___x_4916_ = lean_task_map(v___f_4907_, v___x_4913_, v___x_4914_, v___x_4915_);
if (v_isShared_4912_ == 0)
{
lean_ctor_set_tag(v___x_4911_, 1);
lean_ctor_set(v___x_4911_, 0, v___x_4916_);
v___x_4918_ = v___x_4911_;
goto v_reusejp_4917_;
}
else
{
lean_object* v_reuseFailAlloc_4919_; 
v_reuseFailAlloc_4919_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4919_, 0, v___x_4916_);
v___x_4918_ = v_reuseFailAlloc_4919_;
goto v_reusejp_4917_;
}
v_reusejp_4917_:
{
return v___x_4918_;
}
}
}
else
{
lean_object* v_a_4921_; lean_object* v___x_4923_; uint8_t v_isShared_4924_; uint8_t v_isSharedCheck_4929_; 
lean_dec_ref(v___f_4907_);
v_a_4921_ = lean_ctor_get(v___x_4908_, 0);
v_isSharedCheck_4929_ = !lean_is_exclusive(v___x_4908_);
if (v_isSharedCheck_4929_ == 0)
{
v___x_4923_ = v___x_4908_;
v_isShared_4924_ = v_isSharedCheck_4929_;
goto v_resetjp_4922_;
}
else
{
lean_inc(v_a_4921_);
lean_dec(v___x_4908_);
v___x_4923_ = lean_box(0);
v_isShared_4924_ = v_isSharedCheck_4929_;
goto v_resetjp_4922_;
}
v_resetjp_4922_:
{
lean_object* v___x_4926_; 
if (v_isShared_4924_ == 0)
{
lean_ctor_set_tag(v___x_4923_, 0);
v___x_4926_ = v___x_4923_;
goto v_reusejp_4925_;
}
else
{
lean_object* v_reuseFailAlloc_4928_; 
v_reuseFailAlloc_4928_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4928_, 0, v_a_4921_);
v___x_4926_ = v_reuseFailAlloc_4928_;
goto v_reusejp_4925_;
}
v_reusejp_4925_:
{
lean_object* v___x_4927_; 
v___x_4927_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4927_, 0, v___x_4926_);
return v___x_4927_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_ofPurePromise___redArg___boxed(lean_object* v_task_4930_, lean_object* v_error_4931_, lean_object* v___y_4932_){
_start:
{
lean_object* v_res_4933_; 
v_res_4933_ = l_Std_Async_Async_ofPurePromise___redArg(v_task_4930_, v_error_4931_);
return v_res_4933_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_ofPurePromise(lean_object* v_00_u03b1_4934_, lean_object* v_task_4935_, lean_object* v_error_4936_){
_start:
{
lean_object* v___f_4938_; lean_object* v___x_4939_; 
v___f_4938_ = lean_alloc_closure((void*)(l_Std_Async_AsyncTask_ofPurePromise___redArg___lam__0), 2, 1);
lean_closure_set(v___f_4938_, 0, v_error_4936_);
v___x_4939_ = lean_apply_1(v_task_4935_, lean_box(0));
if (lean_obj_tag(v___x_4939_) == 0)
{
lean_object* v_a_4940_; lean_object* v___x_4942_; uint8_t v_isShared_4943_; uint8_t v_isSharedCheck_4951_; 
v_a_4940_ = lean_ctor_get(v___x_4939_, 0);
v_isSharedCheck_4951_ = !lean_is_exclusive(v___x_4939_);
if (v_isSharedCheck_4951_ == 0)
{
v___x_4942_ = v___x_4939_;
v_isShared_4943_ = v_isSharedCheck_4951_;
goto v_resetjp_4941_;
}
else
{
lean_inc(v_a_4940_);
lean_dec(v___x_4939_);
v___x_4942_ = lean_box(0);
v_isShared_4943_ = v_isSharedCheck_4951_;
goto v_resetjp_4941_;
}
v_resetjp_4941_:
{
lean_object* v___x_4944_; lean_object* v___x_4945_; uint8_t v___x_4946_; lean_object* v___x_4947_; lean_object* v___x_4949_; 
v___x_4944_ = lean_io_promise_result_opt(v_a_4940_);
lean_dec(v_a_4940_);
v___x_4945_ = lean_unsigned_to_nat(0u);
v___x_4946_ = 0;
v___x_4947_ = lean_task_map(v___f_4938_, v___x_4944_, v___x_4945_, v___x_4946_);
if (v_isShared_4943_ == 0)
{
lean_ctor_set_tag(v___x_4942_, 1);
lean_ctor_set(v___x_4942_, 0, v___x_4947_);
v___x_4949_ = v___x_4942_;
goto v_reusejp_4948_;
}
else
{
lean_object* v_reuseFailAlloc_4950_; 
v_reuseFailAlloc_4950_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4950_, 0, v___x_4947_);
v___x_4949_ = v_reuseFailAlloc_4950_;
goto v_reusejp_4948_;
}
v_reusejp_4948_:
{
return v___x_4949_;
}
}
}
else
{
lean_object* v_a_4952_; lean_object* v___x_4954_; uint8_t v_isShared_4955_; uint8_t v_isSharedCheck_4960_; 
lean_dec_ref(v___f_4938_);
v_a_4952_ = lean_ctor_get(v___x_4939_, 0);
v_isSharedCheck_4960_ = !lean_is_exclusive(v___x_4939_);
if (v_isSharedCheck_4960_ == 0)
{
v___x_4954_ = v___x_4939_;
v_isShared_4955_ = v_isSharedCheck_4960_;
goto v_resetjp_4953_;
}
else
{
lean_inc(v_a_4952_);
lean_dec(v___x_4939_);
v___x_4954_ = lean_box(0);
v_isShared_4955_ = v_isSharedCheck_4960_;
goto v_resetjp_4953_;
}
v_resetjp_4953_:
{
lean_object* v___x_4957_; 
if (v_isShared_4955_ == 0)
{
lean_ctor_set_tag(v___x_4954_, 0);
v___x_4957_ = v___x_4954_;
goto v_reusejp_4956_;
}
else
{
lean_object* v_reuseFailAlloc_4959_; 
v_reuseFailAlloc_4959_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4959_, 0, v_a_4952_);
v___x_4957_ = v_reuseFailAlloc_4959_;
goto v_reusejp_4956_;
}
v_reusejp_4956_:
{
lean_object* v___x_4958_; 
v___x_4958_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4958_, 0, v___x_4957_);
return v___x_4958_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_ofPurePromise___boxed(lean_object* v_00_u03b1_4961_, lean_object* v_task_4962_, lean_object* v_error_4963_, lean_object* v___y_4964_){
_start:
{
lean_object* v_res_4965_; 
v_res_4965_ = l_Std_Async_Async_ofPurePromise(v_00_u03b1_4961_, v_task_4962_, v_error_4963_);
return v_res_4965_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_instMonadAwaitPromise___lam__1(lean_object* v___f_4968_, lean_object* v_00_u03b1_4969_, lean_object* v_t_4970_){
_start:
{
lean_object* v___x_4972_; lean_object* v___x_4973_; uint8_t v___x_4974_; lean_object* v___x_4975_; lean_object* v___x_4976_; 
v___x_4972_ = l_IO_Promise_result_x21___redArg(v_t_4970_);
v___x_4973_ = lean_unsigned_to_nat(0u);
v___x_4974_ = 0;
v___x_4975_ = lean_task_map(v___f_4968_, v___x_4972_, v___x_4973_, v___x_4974_);
v___x_4976_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4976_, 0, v___x_4975_);
return v___x_4976_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_instMonadAwaitPromise___lam__1___boxed(lean_object* v___f_4977_, lean_object* v_00_u03b1_4978_, lean_object* v_t_4979_, lean_object* v___y_4980_){
_start:
{
lean_object* v_res_4981_; 
v_res_4981_ = l_Std_Async_Async_instMonadAwaitPromise___lam__1(v___f_4977_, v_00_u03b1_4978_, v_t_4979_);
lean_dec(v_t_4979_);
return v_res_4981_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_concurrently___redArg___lam__1(lean_object* v_a_4985_, lean_object* v_x_4986_){
_start:
{
if (lean_obj_tag(v_x_4986_) == 0)
{
lean_object* v_a_4988_; lean_object* v___x_4990_; uint8_t v_isShared_4991_; uint8_t v_isSharedCheck_4996_; 
lean_dec(v_a_4985_);
v_a_4988_ = lean_ctor_get(v_x_4986_, 0);
v_isSharedCheck_4996_ = !lean_is_exclusive(v_x_4986_);
if (v_isSharedCheck_4996_ == 0)
{
v___x_4990_ = v_x_4986_;
v_isShared_4991_ = v_isSharedCheck_4996_;
goto v_resetjp_4989_;
}
else
{
lean_inc(v_a_4988_);
lean_dec(v_x_4986_);
v___x_4990_ = lean_box(0);
v_isShared_4991_ = v_isSharedCheck_4996_;
goto v_resetjp_4989_;
}
v_resetjp_4989_:
{
lean_object* v___x_4993_; 
if (v_isShared_4991_ == 0)
{
v___x_4993_ = v___x_4990_;
goto v_reusejp_4992_;
}
else
{
lean_object* v_reuseFailAlloc_4995_; 
v_reuseFailAlloc_4995_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4995_, 0, v_a_4988_);
v___x_4993_ = v_reuseFailAlloc_4995_;
goto v_reusejp_4992_;
}
v_reusejp_4992_:
{
lean_object* v___x_4994_; 
v___x_4994_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4994_, 0, v___x_4993_);
return v___x_4994_;
}
}
}
else
{
lean_object* v_a_4997_; lean_object* v___x_4999_; uint8_t v_isShared_5000_; uint8_t v_isSharedCheck_5006_; 
v_a_4997_ = lean_ctor_get(v_x_4986_, 0);
v_isSharedCheck_5006_ = !lean_is_exclusive(v_x_4986_);
if (v_isSharedCheck_5006_ == 0)
{
v___x_4999_ = v_x_4986_;
v_isShared_5000_ = v_isSharedCheck_5006_;
goto v_resetjp_4998_;
}
else
{
lean_inc(v_a_4997_);
lean_dec(v_x_4986_);
v___x_4999_ = lean_box(0);
v_isShared_5000_ = v_isSharedCheck_5006_;
goto v_resetjp_4998_;
}
v_resetjp_4998_:
{
lean_object* v___x_5001_; lean_object* v___x_5003_; 
v___x_5001_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5001_, 0, v_a_4985_);
lean_ctor_set(v___x_5001_, 1, v_a_4997_);
if (v_isShared_5000_ == 0)
{
lean_ctor_set(v___x_4999_, 0, v___x_5001_);
v___x_5003_ = v___x_4999_;
goto v_reusejp_5002_;
}
else
{
lean_object* v_reuseFailAlloc_5005_; 
v_reuseFailAlloc_5005_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5005_, 0, v___x_5001_);
v___x_5003_ = v_reuseFailAlloc_5005_;
goto v_reusejp_5002_;
}
v_reusejp_5002_:
{
lean_object* v___x_5004_; 
v___x_5004_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5004_, 0, v___x_5003_);
return v___x_5004_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_concurrently___redArg___lam__1___boxed(lean_object* v_a_5007_, lean_object* v_x_5008_, lean_object* v___y_5009_){
_start:
{
lean_object* v_res_5010_; 
v_res_5010_ = l_Std_Async_Async_concurrently___redArg___lam__1(v_a_5007_, v_x_5008_);
return v_res_5010_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_concurrently___redArg___lam__0(lean_object* v_a_5011_, lean_object* v_x_5012_){
_start:
{
if (lean_obj_tag(v_x_5012_) == 0)
{
lean_object* v_a_5014_; lean_object* v___x_5016_; uint8_t v_isShared_5017_; uint8_t v_isSharedCheck_5022_; 
lean_dec_ref(v_a_5011_);
v_a_5014_ = lean_ctor_get(v_x_5012_, 0);
v_isSharedCheck_5022_ = !lean_is_exclusive(v_x_5012_);
if (v_isSharedCheck_5022_ == 0)
{
v___x_5016_ = v_x_5012_;
v_isShared_5017_ = v_isSharedCheck_5022_;
goto v_resetjp_5015_;
}
else
{
lean_inc(v_a_5014_);
lean_dec(v_x_5012_);
v___x_5016_ = lean_box(0);
v_isShared_5017_ = v_isSharedCheck_5022_;
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
lean_object* v_reuseFailAlloc_5021_; 
v_reuseFailAlloc_5021_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5021_, 0, v_a_5014_);
v___x_5019_ = v_reuseFailAlloc_5021_;
goto v_reusejp_5018_;
}
v_reusejp_5018_:
{
lean_object* v___x_5020_; 
v___x_5020_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5020_, 0, v___x_5019_);
return v___x_5020_;
}
}
}
else
{
lean_object* v_a_5023_; lean_object* v___f_5024_; lean_object* v___x_5025_; uint8_t v___x_5026_; lean_object* v___x_5027_; lean_object* v___x_5028_; 
v_a_5023_ = lean_ctor_get(v_x_5012_, 0);
lean_inc(v_a_5023_);
lean_dec_ref_known(v_x_5012_, 1);
v___f_5024_ = lean_alloc_closure((void*)(l_Std_Async_Async_concurrently___redArg___lam__1___boxed), 3, 1);
lean_closure_set(v___f_5024_, 0, v_a_5023_);
v___x_5025_ = lean_unsigned_to_nat(0u);
v___x_5026_ = 0;
v___x_5027_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5027_, 0, v_a_5011_);
v___x_5028_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5025_, v___x_5026_, v___x_5027_, v___f_5024_);
return v___x_5028_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_concurrently___redArg___lam__0___boxed(lean_object* v_a_5029_, lean_object* v_x_5030_, lean_object* v___y_5031_){
_start:
{
lean_object* v_res_5032_; 
v_res_5032_ = l_Std_Async_Async_concurrently___redArg___lam__0(v_a_5029_, v_x_5030_);
return v_res_5032_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_concurrently___redArg___lam__2(lean_object* v_a_5033_, lean_object* v_x_5034_){
_start:
{
if (lean_obj_tag(v_x_5034_) == 0)
{
lean_object* v_a_5036_; lean_object* v___x_5038_; uint8_t v_isShared_5039_; uint8_t v_isSharedCheck_5044_; 
lean_dec_ref(v_a_5033_);
v_a_5036_ = lean_ctor_get(v_x_5034_, 0);
v_isSharedCheck_5044_ = !lean_is_exclusive(v_x_5034_);
if (v_isSharedCheck_5044_ == 0)
{
v___x_5038_ = v_x_5034_;
v_isShared_5039_ = v_isSharedCheck_5044_;
goto v_resetjp_5037_;
}
else
{
lean_inc(v_a_5036_);
lean_dec(v_x_5034_);
v___x_5038_ = lean_box(0);
v_isShared_5039_ = v_isSharedCheck_5044_;
goto v_resetjp_5037_;
}
v_resetjp_5037_:
{
lean_object* v___x_5041_; 
if (v_isShared_5039_ == 0)
{
v___x_5041_ = v___x_5038_;
goto v_reusejp_5040_;
}
else
{
lean_object* v_reuseFailAlloc_5043_; 
v_reuseFailAlloc_5043_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5043_, 0, v_a_5036_);
v___x_5041_ = v_reuseFailAlloc_5043_;
goto v_reusejp_5040_;
}
v_reusejp_5040_:
{
lean_object* v___x_5042_; 
v___x_5042_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5042_, 0, v___x_5041_);
return v___x_5042_;
}
}
}
else
{
lean_object* v_a_5045_; lean_object* v___f_5046_; lean_object* v___x_5047_; uint8_t v___x_5048_; lean_object* v___x_5049_; lean_object* v___x_5050_; 
v_a_5045_ = lean_ctor_get(v_x_5034_, 0);
lean_inc(v_a_5045_);
lean_dec_ref_known(v_x_5034_, 1);
v___f_5046_ = lean_alloc_closure((void*)(l_Std_Async_Async_concurrently___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_5046_, 0, v_a_5045_);
v___x_5047_ = lean_unsigned_to_nat(0u);
v___x_5048_ = 0;
v___x_5049_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5049_, 0, v_a_5033_);
v___x_5050_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5047_, v___x_5048_, v___x_5049_, v___f_5046_);
return v___x_5050_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_concurrently___redArg___lam__2___boxed(lean_object* v_a_5051_, lean_object* v_x_5052_, lean_object* v___y_5053_){
_start:
{
lean_object* v_res_5054_; 
v_res_5054_ = l_Std_Async_Async_concurrently___redArg___lam__2(v_a_5051_, v_x_5052_);
return v_res_5054_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_concurrently___redArg___lam__3(lean_object* v_y_5055_, lean_object* v_prio_5056_, lean_object* v___f_5057_, lean_object* v_x_5058_){
_start:
{
if (lean_obj_tag(v_x_5058_) == 0)
{
lean_object* v_a_5060_; lean_object* v___x_5062_; uint8_t v_isShared_5063_; uint8_t v_isSharedCheck_5068_; 
lean_dec_ref(v___f_5057_);
lean_dec(v_prio_5056_);
lean_dec_ref(v_y_5055_);
v_a_5060_ = lean_ctor_get(v_x_5058_, 0);
v_isSharedCheck_5068_ = !lean_is_exclusive(v_x_5058_);
if (v_isSharedCheck_5068_ == 0)
{
v___x_5062_ = v_x_5058_;
v_isShared_5063_ = v_isSharedCheck_5068_;
goto v_resetjp_5061_;
}
else
{
lean_inc(v_a_5060_);
lean_dec(v_x_5058_);
v___x_5062_ = lean_box(0);
v_isShared_5063_ = v_isSharedCheck_5068_;
goto v_resetjp_5061_;
}
v_resetjp_5061_:
{
lean_object* v___x_5065_; 
if (v_isShared_5063_ == 0)
{
v___x_5065_ = v___x_5062_;
goto v_reusejp_5064_;
}
else
{
lean_object* v_reuseFailAlloc_5067_; 
v_reuseFailAlloc_5067_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5067_, 0, v_a_5060_);
v___x_5065_ = v_reuseFailAlloc_5067_;
goto v_reusejp_5064_;
}
v_reusejp_5064_:
{
lean_object* v___x_5066_; 
v___x_5066_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5066_, 0, v___x_5065_);
return v___x_5066_;
}
}
}
else
{
lean_object* v_a_5069_; lean_object* v___x_5071_; uint8_t v_isShared_5072_; uint8_t v_isSharedCheck_5086_; 
v_a_5069_ = lean_ctor_get(v_x_5058_, 0);
v_isSharedCheck_5086_ = !lean_is_exclusive(v_x_5058_);
if (v_isSharedCheck_5086_ == 0)
{
v___x_5071_ = v_x_5058_;
v_isShared_5072_ = v_isSharedCheck_5086_;
goto v_resetjp_5070_;
}
else
{
lean_inc(v_a_5069_);
lean_dec(v_x_5058_);
v___x_5071_ = lean_box(0);
v_isShared_5072_ = v_isSharedCheck_5086_;
goto v_resetjp_5070_;
}
v_resetjp_5070_:
{
lean_object* v___f_5073_; lean_object* v___x_5074_; uint8_t v___x_5075_; lean_object* v___x_5076_; lean_object* v___x_5077_; lean_object* v___x_5078_; uint8_t v___x_5079_; lean_object* v___x_5080_; lean_object* v___x_5082_; 
v___f_5073_ = lean_alloc_closure((void*)(l_Std_Async_Async_concurrently___redArg___lam__2___boxed), 3, 1);
lean_closure_set(v___f_5073_, 0, v_a_5069_);
v___x_5074_ = lean_unsigned_to_nat(0u);
v___x_5075_ = 0;
v___x_5076_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_toBaseAsync___boxed), 4, 3);
lean_closure_set(v___x_5076_, 0, lean_box(0));
lean_closure_set(v___x_5076_, 1, lean_box(0));
lean_closure_set(v___x_5076_, 2, v_y_5055_);
v___x_5077_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_toRawBaseIO___boxed), 3, 2);
lean_closure_set(v___x_5077_, 0, lean_box(0));
lean_closure_set(v___x_5077_, 1, v___x_5076_);
v___x_5078_ = lean_io_as_task(v___x_5077_, v_prio_5056_);
v___x_5079_ = 1;
v___x_5080_ = lean_task_bind(v___x_5078_, v___f_5057_, v___x_5074_, v___x_5079_);
if (v_isShared_5072_ == 0)
{
lean_ctor_set(v___x_5071_, 0, v___x_5080_);
v___x_5082_ = v___x_5071_;
goto v_reusejp_5081_;
}
else
{
lean_object* v_reuseFailAlloc_5085_; 
v_reuseFailAlloc_5085_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5085_, 0, v___x_5080_);
v___x_5082_ = v_reuseFailAlloc_5085_;
goto v_reusejp_5081_;
}
v_reusejp_5081_:
{
lean_object* v___x_5083_; lean_object* v___x_5084_; 
v___x_5083_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5083_, 0, v___x_5082_);
v___x_5084_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5074_, v___x_5075_, v___x_5083_, v___f_5073_);
return v___x_5084_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_concurrently___redArg___lam__3___boxed(lean_object* v_y_5087_, lean_object* v_prio_5088_, lean_object* v___f_5089_, lean_object* v_x_5090_, lean_object* v___y_5091_){
_start:
{
lean_object* v_res_5092_; 
v_res_5092_ = l_Std_Async_Async_concurrently___redArg___lam__3(v_y_5087_, v_prio_5088_, v___f_5089_, v_x_5090_);
return v_res_5092_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_concurrently___redArg(lean_object* v_x_5093_, lean_object* v_y_5094_, lean_object* v_prio_5095_){
_start:
{
lean_object* v___f_5097_; lean_object* v___f_5098_; lean_object* v___x_5099_; uint8_t v___x_5100_; lean_object* v___x_5101_; lean_object* v___x_5102_; lean_object* v___x_5103_; uint8_t v___x_5104_; lean_object* v___x_5105_; lean_object* v___x_5106_; lean_object* v___x_5107_; lean_object* v___x_5108_; 
v___f_5097_ = ((lean_object*)(l_Std_Async_EAsync_instMonadAsyncAsyncTaskError___closed__0));
lean_inc(v_prio_5095_);
v___f_5098_ = lean_alloc_closure((void*)(l_Std_Async_Async_concurrently___redArg___lam__3___boxed), 5, 3);
lean_closure_set(v___f_5098_, 0, v_y_5094_);
lean_closure_set(v___f_5098_, 1, v_prio_5095_);
lean_closure_set(v___f_5098_, 2, v___f_5097_);
v___x_5099_ = lean_unsigned_to_nat(0u);
v___x_5100_ = 0;
v___x_5101_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_toBaseAsync___boxed), 4, 3);
lean_closure_set(v___x_5101_, 0, lean_box(0));
lean_closure_set(v___x_5101_, 1, lean_box(0));
lean_closure_set(v___x_5101_, 2, v_x_5093_);
v___x_5102_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_toRawBaseIO___boxed), 3, 2);
lean_closure_set(v___x_5102_, 0, lean_box(0));
lean_closure_set(v___x_5102_, 1, v___x_5101_);
v___x_5103_ = lean_io_as_task(v___x_5102_, v_prio_5095_);
v___x_5104_ = 1;
v___x_5105_ = lean_task_bind(v___x_5103_, v___f_5097_, v___x_5099_, v___x_5104_);
v___x_5106_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5106_, 0, v___x_5105_);
v___x_5107_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5107_, 0, v___x_5106_);
v___x_5108_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5099_, v___x_5100_, v___x_5107_, v___f_5098_);
return v___x_5108_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_concurrently___redArg___boxed(lean_object* v_x_5109_, lean_object* v_y_5110_, lean_object* v_prio_5111_, lean_object* v___y_5112_){
_start:
{
lean_object* v_res_5113_; 
v_res_5113_ = l_Std_Async_Async_concurrently___redArg(v_x_5109_, v_y_5110_, v_prio_5111_);
return v_res_5113_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_concurrently(lean_object* v_00_u03b1_5114_, lean_object* v_00_u03b2_5115_, lean_object* v_x_5116_, lean_object* v_y_5117_, lean_object* v_prio_5118_){
_start:
{
lean_object* v___f_5120_; lean_object* v___f_5121_; lean_object* v___x_5122_; uint8_t v___x_5123_; lean_object* v___x_5124_; lean_object* v___x_5125_; lean_object* v___x_5126_; uint8_t v___x_5127_; lean_object* v___x_5128_; lean_object* v___x_5129_; lean_object* v___x_5130_; lean_object* v___x_5131_; 
v___f_5120_ = ((lean_object*)(l_Std_Async_EAsync_instMonadAsyncAsyncTaskError___closed__0));
lean_inc(v_prio_5118_);
v___f_5121_ = lean_alloc_closure((void*)(l_Std_Async_Async_concurrently___redArg___lam__3___boxed), 5, 3);
lean_closure_set(v___f_5121_, 0, v_y_5117_);
lean_closure_set(v___f_5121_, 1, v_prio_5118_);
lean_closure_set(v___f_5121_, 2, v___f_5120_);
v___x_5122_ = lean_unsigned_to_nat(0u);
v___x_5123_ = 0;
v___x_5124_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_toBaseAsync___boxed), 4, 3);
lean_closure_set(v___x_5124_, 0, lean_box(0));
lean_closure_set(v___x_5124_, 1, lean_box(0));
lean_closure_set(v___x_5124_, 2, v_x_5116_);
v___x_5125_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_toRawBaseIO___boxed), 3, 2);
lean_closure_set(v___x_5125_, 0, lean_box(0));
lean_closure_set(v___x_5125_, 1, v___x_5124_);
v___x_5126_ = lean_io_as_task(v___x_5125_, v_prio_5118_);
v___x_5127_ = 1;
v___x_5128_ = lean_task_bind(v___x_5126_, v___f_5120_, v___x_5122_, v___x_5127_);
v___x_5129_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5129_, 0, v___x_5128_);
v___x_5130_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5130_, 0, v___x_5129_);
v___x_5131_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5122_, v___x_5123_, v___x_5130_, v___f_5121_);
return v___x_5131_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_concurrently___boxed(lean_object* v_00_u03b1_5132_, lean_object* v_00_u03b2_5133_, lean_object* v_x_5134_, lean_object* v_y_5135_, lean_object* v_prio_5136_, lean_object* v___y_5137_){
_start:
{
lean_object* v_res_5138_; 
v_res_5138_ = l_Std_Async_Async_concurrently(v_00_u03b1_5132_, v_00_u03b2_5133_, v_x_5134_, v_y_5135_, v_prio_5136_);
return v_res_5138_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_race___redArg___lam__1(lean_object* v_x_5139_){
_start:
{
if (lean_obj_tag(v_x_5139_) == 0)
{
lean_object* v_a_5141_; lean_object* v___x_5143_; uint8_t v_isShared_5144_; uint8_t v_isSharedCheck_5149_; 
v_a_5141_ = lean_ctor_get(v_x_5139_, 0);
v_isSharedCheck_5149_ = !lean_is_exclusive(v_x_5139_);
if (v_isSharedCheck_5149_ == 0)
{
v___x_5143_ = v_x_5139_;
v_isShared_5144_ = v_isSharedCheck_5149_;
goto v_resetjp_5142_;
}
else
{
lean_inc(v_a_5141_);
lean_dec(v_x_5139_);
v___x_5143_ = lean_box(0);
v_isShared_5144_ = v_isSharedCheck_5149_;
goto v_resetjp_5142_;
}
v_resetjp_5142_:
{
lean_object* v___x_5146_; 
if (v_isShared_5144_ == 0)
{
v___x_5146_ = v___x_5143_;
goto v_reusejp_5145_;
}
else
{
lean_object* v_reuseFailAlloc_5148_; 
v_reuseFailAlloc_5148_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5148_, 0, v_a_5141_);
v___x_5146_ = v_reuseFailAlloc_5148_;
goto v_reusejp_5145_;
}
v_reusejp_5145_:
{
lean_object* v___x_5147_; 
v___x_5147_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5147_, 0, v___x_5146_);
return v___x_5147_;
}
}
}
else
{
lean_object* v_a_5150_; lean_object* v___x_5151_; 
v_a_5150_ = lean_ctor_get(v_x_5139_, 0);
lean_inc(v_a_5150_);
lean_dec_ref_known(v_x_5139_, 1);
v___x_5151_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5151_, 0, v_a_5150_);
return v___x_5151_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_race___redArg___lam__1___boxed(lean_object* v_x_5152_, lean_object* v___y_5153_){
_start:
{
lean_object* v_res_5154_; 
v_res_5154_ = l_Std_Async_Async_race___redArg___lam__1(v_x_5152_);
return v_res_5154_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_race___redArg___lam__0(lean_object* v_a_5155_){
_start:
{
lean_object* v___x_5156_; 
v___x_5156_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5156_, 0, v_a_5155_);
return v___x_5156_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_race___redArg___lam__3(lean_object* v_a_5157_, lean_object* v_value_5158_){
_start:
{
lean_object* v___x_5160_; 
v___x_5160_ = lean_io_promise_resolve(v_value_5158_, v_a_5157_);
return v___x_5160_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_race___redArg___lam__3___boxed(lean_object* v_a_5161_, lean_object* v_value_5162_, lean_object* v___y_5163_){
_start:
{
lean_object* v_res_5164_; 
v_res_5164_ = l_Std_Async_Async_race___redArg___lam__3(v_a_5161_, v_value_5162_);
lean_dec(v_a_5161_);
return v_res_5164_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_race___redArg___lam__2(lean_object* v_a_5165_, lean_object* v___f_5166_, lean_object* v___f_5167_, lean_object* v_x_5168_){
_start:
{
if (lean_obj_tag(v_x_5168_) == 0)
{
lean_object* v_a_5170_; lean_object* v___x_5172_; uint8_t v_isShared_5173_; uint8_t v_isSharedCheck_5178_; 
lean_dec_ref(v___f_5167_);
lean_dec_ref(v___f_5166_);
v_a_5170_ = lean_ctor_get(v_x_5168_, 0);
v_isSharedCheck_5178_ = !lean_is_exclusive(v_x_5168_);
if (v_isSharedCheck_5178_ == 0)
{
v___x_5172_ = v_x_5168_;
v_isShared_5173_ = v_isSharedCheck_5178_;
goto v_resetjp_5171_;
}
else
{
lean_inc(v_a_5170_);
lean_dec(v_x_5168_);
v___x_5172_ = lean_box(0);
v_isShared_5173_ = v_isSharedCheck_5178_;
goto v_resetjp_5171_;
}
v_resetjp_5171_:
{
lean_object* v___x_5175_; 
if (v_isShared_5173_ == 0)
{
v___x_5175_ = v___x_5172_;
goto v_reusejp_5174_;
}
else
{
lean_object* v_reuseFailAlloc_5177_; 
v_reuseFailAlloc_5177_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5177_, 0, v_a_5170_);
v___x_5175_ = v_reuseFailAlloc_5177_;
goto v_reusejp_5174_;
}
v_reusejp_5174_:
{
lean_object* v___x_5176_; 
v___x_5176_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5176_, 0, v___x_5175_);
return v___x_5176_;
}
}
}
else
{
lean_object* v___x_5179_; uint8_t v___x_5180_; lean_object* v___x_5181_; lean_object* v___x_5182_; lean_object* v___x_5183_; lean_object* v___x_5184_; 
lean_dec_ref_known(v_x_5168_, 1);
v___x_5179_ = lean_unsigned_to_nat(0u);
v___x_5180_ = 0;
v___x_5181_ = l_IO_Promise_result_x21___redArg(v_a_5165_);
v___x_5182_ = lean_task_map(v___f_5166_, v___x_5181_, v___x_5179_, v___x_5180_);
v___x_5183_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5183_, 0, v___x_5182_);
v___x_5184_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5179_, v___x_5180_, v___x_5183_, v___f_5167_);
return v___x_5184_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_race___redArg___lam__2___boxed(lean_object* v_a_5185_, lean_object* v___f_5186_, lean_object* v___f_5187_, lean_object* v_x_5188_, lean_object* v___y_5189_){
_start:
{
lean_object* v_res_5190_; 
v_res_5190_ = l_Std_Async_Async_race___redArg___lam__2(v_a_5185_, v___f_5186_, v___f_5187_, v_x_5188_);
lean_dec(v_a_5185_);
return v_res_5190_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_race___redArg___lam__4(lean_object* v_a_5191_, lean_object* v___x_5192_, lean_object* v___x_5193_, uint8_t v___x_5194_, lean_object* v___f_5195_, lean_object* v_x_5196_){
_start:
{
if (lean_obj_tag(v_x_5196_) == 0)
{
lean_object* v_a_5198_; lean_object* v___x_5200_; uint8_t v_isShared_5201_; uint8_t v_isSharedCheck_5206_; 
lean_dec_ref(v___f_5195_);
lean_dec(v___x_5193_);
lean_dec_ref(v___x_5192_);
lean_dec_ref(v_a_5191_);
v_a_5198_ = lean_ctor_get(v_x_5196_, 0);
v_isSharedCheck_5206_ = !lean_is_exclusive(v_x_5196_);
if (v_isSharedCheck_5206_ == 0)
{
v___x_5200_ = v_x_5196_;
v_isShared_5201_ = v_isSharedCheck_5206_;
goto v_resetjp_5199_;
}
else
{
lean_inc(v_a_5198_);
lean_dec(v_x_5196_);
v___x_5200_ = lean_box(0);
v_isShared_5201_ = v_isSharedCheck_5206_;
goto v_resetjp_5199_;
}
v_resetjp_5199_:
{
lean_object* v___x_5203_; 
if (v_isShared_5201_ == 0)
{
v___x_5203_ = v___x_5200_;
goto v_reusejp_5202_;
}
else
{
lean_object* v_reuseFailAlloc_5205_; 
v_reuseFailAlloc_5205_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5205_, 0, v_a_5198_);
v___x_5203_ = v_reuseFailAlloc_5205_;
goto v_reusejp_5202_;
}
v_reusejp_5202_:
{
lean_object* v___x_5204_; 
v___x_5204_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5204_, 0, v___x_5203_);
return v___x_5204_;
}
}
}
else
{
lean_object* v___x_5208_; uint8_t v_isShared_5209_; uint8_t v_isSharedCheck_5216_; 
v_isSharedCheck_5216_ = !lean_is_exclusive(v_x_5196_);
if (v_isSharedCheck_5216_ == 0)
{
lean_object* v_unused_5217_; 
v_unused_5217_ = lean_ctor_get(v_x_5196_, 0);
lean_dec(v_unused_5217_);
v___x_5208_ = v_x_5196_;
v_isShared_5209_ = v_isSharedCheck_5216_;
goto v_resetjp_5207_;
}
else
{
lean_dec(v_x_5196_);
v___x_5208_ = lean_box(0);
v_isShared_5209_ = v_isSharedCheck_5216_;
goto v_resetjp_5207_;
}
v_resetjp_5207_:
{
lean_object* v___x_5210_; lean_object* v___x_5212_; 
lean_inc(v___x_5193_);
v___x_5210_ = l_BaseIO_chainTask___redArg(v_a_5191_, v___x_5192_, v___x_5193_, v___x_5194_);
if (v_isShared_5209_ == 0)
{
lean_ctor_set(v___x_5208_, 0, v___x_5210_);
v___x_5212_ = v___x_5208_;
goto v_reusejp_5211_;
}
else
{
lean_object* v_reuseFailAlloc_5215_; 
v_reuseFailAlloc_5215_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5215_, 0, v___x_5210_);
v___x_5212_ = v_reuseFailAlloc_5215_;
goto v_reusejp_5211_;
}
v_reusejp_5211_:
{
lean_object* v___x_5213_; lean_object* v___x_5214_; 
v___x_5213_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5213_, 0, v___x_5212_);
v___x_5214_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5193_, v___x_5194_, v___x_5213_, v___f_5195_);
return v___x_5214_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_race___redArg___lam__4___boxed(lean_object* v_a_5218_, lean_object* v___x_5219_, lean_object* v___x_5220_, lean_object* v___x_5221_, lean_object* v___f_5222_, lean_object* v_x_5223_, lean_object* v___y_5224_){
_start:
{
uint8_t v___x_1453__boxed_5225_; lean_object* v_res_5226_; 
v___x_1453__boxed_5225_ = lean_unbox(v___x_5221_);
v_res_5226_ = l_Std_Async_Async_race___redArg___lam__4(v_a_5218_, v___x_5219_, v___x_5220_, v___x_1453__boxed_5225_, v___f_5222_, v_x_5223_);
return v_res_5226_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_race___redArg___lam__5(lean_object* v___f_5227_, lean_object* v___f_5228_, lean_object* v___f_5229_, lean_object* v_a_5230_, lean_object* v_x_5231_){
_start:
{
if (lean_obj_tag(v_x_5231_) == 0)
{
lean_object* v_a_5233_; lean_object* v___x_5235_; uint8_t v_isShared_5236_; uint8_t v_isSharedCheck_5241_; 
lean_dec_ref(v_a_5230_);
lean_dec_ref(v___f_5229_);
lean_dec_ref(v___f_5228_);
lean_dec(v___f_5227_);
v_a_5233_ = lean_ctor_get(v_x_5231_, 0);
v_isSharedCheck_5241_ = !lean_is_exclusive(v_x_5231_);
if (v_isSharedCheck_5241_ == 0)
{
v___x_5235_ = v_x_5231_;
v_isShared_5236_ = v_isSharedCheck_5241_;
goto v_resetjp_5234_;
}
else
{
lean_inc(v_a_5233_);
lean_dec(v_x_5231_);
v___x_5235_ = lean_box(0);
v_isShared_5236_ = v_isSharedCheck_5241_;
goto v_resetjp_5234_;
}
v_resetjp_5234_:
{
lean_object* v___x_5238_; 
if (v_isShared_5236_ == 0)
{
v___x_5238_ = v___x_5235_;
goto v_reusejp_5237_;
}
else
{
lean_object* v_reuseFailAlloc_5240_; 
v_reuseFailAlloc_5240_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5240_, 0, v_a_5233_);
v___x_5238_ = v_reuseFailAlloc_5240_;
goto v_reusejp_5237_;
}
v_reusejp_5237_:
{
lean_object* v___x_5239_; 
v___x_5239_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5239_, 0, v___x_5238_);
return v___x_5239_;
}
}
}
else
{
lean_object* v_a_5242_; lean_object* v___x_5244_; uint8_t v_isShared_5245_; uint8_t v_isSharedCheck_5258_; 
v_a_5242_ = lean_ctor_get(v_x_5231_, 0);
v_isSharedCheck_5258_ = !lean_is_exclusive(v_x_5231_);
if (v_isSharedCheck_5258_ == 0)
{
v___x_5244_ = v_x_5231_;
v_isShared_5245_ = v_isSharedCheck_5258_;
goto v_resetjp_5243_;
}
else
{
lean_inc(v_a_5242_);
lean_dec(v_x_5231_);
v___x_5244_ = lean_box(0);
v_isShared_5245_ = v_isSharedCheck_5258_;
goto v_resetjp_5243_;
}
v_resetjp_5243_:
{
lean_object* v___x_5246_; lean_object* v___x_5247_; lean_object* v___x_5248_; uint8_t v___x_5249_; lean_object* v___x_5250_; lean_object* v___f_5251_; lean_object* v___x_5252_; lean_object* v___x_5254_; 
v___x_5246_ = lean_alloc_closure((void*)(l_liftM), 5, 4);
lean_closure_set(v___x_5246_, 0, lean_box(0));
lean_closure_set(v___x_5246_, 1, lean_box(0));
lean_closure_set(v___x_5246_, 2, v___f_5227_);
lean_closure_set(v___x_5246_, 3, lean_box(0));
v___x_5247_ = lean_alloc_closure((void*)(l_Function_comp), 6, 5);
lean_closure_set(v___x_5247_, 0, lean_box(0));
lean_closure_set(v___x_5247_, 1, lean_box(0));
lean_closure_set(v___x_5247_, 2, lean_box(0));
lean_closure_set(v___x_5247_, 3, v___x_5246_);
lean_closure_set(v___x_5247_, 4, v___f_5228_);
v___x_5248_ = lean_unsigned_to_nat(0u);
v___x_5249_ = 0;
v___x_5250_ = lean_box(v___x_5249_);
lean_inc_ref(v___x_5247_);
v___f_5251_ = lean_alloc_closure((void*)(l_Std_Async_Async_race___redArg___lam__4___boxed), 7, 5);
lean_closure_set(v___f_5251_, 0, v_a_5242_);
lean_closure_set(v___f_5251_, 1, v___x_5247_);
lean_closure_set(v___f_5251_, 2, v___x_5248_);
lean_closure_set(v___f_5251_, 3, v___x_5250_);
lean_closure_set(v___f_5251_, 4, v___f_5229_);
v___x_5252_ = l_BaseIO_chainTask___redArg(v_a_5230_, v___x_5247_, v___x_5248_, v___x_5249_);
if (v_isShared_5245_ == 0)
{
lean_ctor_set(v___x_5244_, 0, v___x_5252_);
v___x_5254_ = v___x_5244_;
goto v_reusejp_5253_;
}
else
{
lean_object* v_reuseFailAlloc_5257_; 
v_reuseFailAlloc_5257_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5257_, 0, v___x_5252_);
v___x_5254_ = v_reuseFailAlloc_5257_;
goto v_reusejp_5253_;
}
v_reusejp_5253_:
{
lean_object* v___x_5255_; lean_object* v___x_5256_; 
v___x_5255_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5255_, 0, v___x_5254_);
v___x_5256_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5248_, v___x_5249_, v___x_5255_, v___f_5251_);
return v___x_5256_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_race___redArg___lam__5___boxed(lean_object* v___f_5259_, lean_object* v___f_5260_, lean_object* v___f_5261_, lean_object* v_a_5262_, lean_object* v_x_5263_, lean_object* v___y_5264_){
_start:
{
lean_object* v_res_5265_; 
v_res_5265_ = l_Std_Async_Async_race___redArg___lam__5(v___f_5259_, v___f_5260_, v___f_5261_, v_a_5262_, v_x_5263_);
return v_res_5265_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_race___redArg___lam__6(lean_object* v___f_5266_, lean_object* v___f_5267_, lean_object* v___f_5268_, lean_object* v_y_5269_, lean_object* v_prio_5270_, lean_object* v___f_5271_, lean_object* v_x_5272_){
_start:
{
if (lean_obj_tag(v_x_5272_) == 0)
{
lean_object* v_a_5274_; lean_object* v___x_5276_; uint8_t v_isShared_5277_; uint8_t v_isSharedCheck_5282_; 
lean_dec_ref(v___f_5271_);
lean_dec(v_prio_5270_);
lean_dec_ref(v_y_5269_);
lean_dec_ref(v___f_5268_);
lean_dec_ref(v___f_5267_);
lean_dec(v___f_5266_);
v_a_5274_ = lean_ctor_get(v_x_5272_, 0);
v_isSharedCheck_5282_ = !lean_is_exclusive(v_x_5272_);
if (v_isSharedCheck_5282_ == 0)
{
v___x_5276_ = v_x_5272_;
v_isShared_5277_ = v_isSharedCheck_5282_;
goto v_resetjp_5275_;
}
else
{
lean_inc(v_a_5274_);
lean_dec(v_x_5272_);
v___x_5276_ = lean_box(0);
v_isShared_5277_ = v_isSharedCheck_5282_;
goto v_resetjp_5275_;
}
v_resetjp_5275_:
{
lean_object* v___x_5279_; 
if (v_isShared_5277_ == 0)
{
v___x_5279_ = v___x_5276_;
goto v_reusejp_5278_;
}
else
{
lean_object* v_reuseFailAlloc_5281_; 
v_reuseFailAlloc_5281_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5281_, 0, v_a_5274_);
v___x_5279_ = v_reuseFailAlloc_5281_;
goto v_reusejp_5278_;
}
v_reusejp_5278_:
{
lean_object* v___x_5280_; 
v___x_5280_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5280_, 0, v___x_5279_);
return v___x_5280_;
}
}
}
else
{
lean_object* v_a_5283_; lean_object* v___x_5285_; uint8_t v_isShared_5286_; uint8_t v_isSharedCheck_5300_; 
v_a_5283_ = lean_ctor_get(v_x_5272_, 0);
v_isSharedCheck_5300_ = !lean_is_exclusive(v_x_5272_);
if (v_isSharedCheck_5300_ == 0)
{
v___x_5285_ = v_x_5272_;
v_isShared_5286_ = v_isSharedCheck_5300_;
goto v_resetjp_5284_;
}
else
{
lean_inc(v_a_5283_);
lean_dec(v_x_5272_);
v___x_5285_ = lean_box(0);
v_isShared_5286_ = v_isSharedCheck_5300_;
goto v_resetjp_5284_;
}
v_resetjp_5284_:
{
lean_object* v___f_5287_; lean_object* v___x_5288_; uint8_t v___x_5289_; lean_object* v___x_5290_; lean_object* v___x_5291_; lean_object* v___x_5292_; uint8_t v___x_5293_; lean_object* v___x_5294_; lean_object* v___x_5296_; 
v___f_5287_ = lean_alloc_closure((void*)(l_Std_Async_Async_race___redArg___lam__5___boxed), 6, 4);
lean_closure_set(v___f_5287_, 0, v___f_5266_);
lean_closure_set(v___f_5287_, 1, v___f_5267_);
lean_closure_set(v___f_5287_, 2, v___f_5268_);
lean_closure_set(v___f_5287_, 3, v_a_5283_);
v___x_5288_ = lean_unsigned_to_nat(0u);
v___x_5289_ = 0;
v___x_5290_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_toBaseAsync___boxed), 4, 3);
lean_closure_set(v___x_5290_, 0, lean_box(0));
lean_closure_set(v___x_5290_, 1, lean_box(0));
lean_closure_set(v___x_5290_, 2, v_y_5269_);
v___x_5291_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_toRawBaseIO___boxed), 3, 2);
lean_closure_set(v___x_5291_, 0, lean_box(0));
lean_closure_set(v___x_5291_, 1, v___x_5290_);
v___x_5292_ = lean_io_as_task(v___x_5291_, v_prio_5270_);
v___x_5293_ = 1;
v___x_5294_ = lean_task_bind(v___x_5292_, v___f_5271_, v___x_5288_, v___x_5293_);
if (v_isShared_5286_ == 0)
{
lean_ctor_set(v___x_5285_, 0, v___x_5294_);
v___x_5296_ = v___x_5285_;
goto v_reusejp_5295_;
}
else
{
lean_object* v_reuseFailAlloc_5299_; 
v_reuseFailAlloc_5299_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5299_, 0, v___x_5294_);
v___x_5296_ = v_reuseFailAlloc_5299_;
goto v_reusejp_5295_;
}
v_reusejp_5295_:
{
lean_object* v___x_5297_; lean_object* v___x_5298_; 
v___x_5297_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5297_, 0, v___x_5296_);
v___x_5298_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5288_, v___x_5289_, v___x_5297_, v___f_5287_);
return v___x_5298_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_race___redArg___lam__6___boxed(lean_object* v___f_5301_, lean_object* v___f_5302_, lean_object* v___f_5303_, lean_object* v_y_5304_, lean_object* v_prio_5305_, lean_object* v___f_5306_, lean_object* v_x_5307_, lean_object* v___y_5308_){
_start:
{
lean_object* v_res_5309_; 
v_res_5309_ = l_Std_Async_Async_race___redArg___lam__6(v___f_5301_, v___f_5302_, v___f_5303_, v_y_5304_, v_prio_5305_, v___f_5306_, v_x_5307_);
return v_res_5309_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_race___redArg___lam__7(lean_object* v___f_5310_, lean_object* v___f_5311_, lean_object* v___f_5312_, lean_object* v_y_5313_, lean_object* v_prio_5314_, lean_object* v___f_5315_, lean_object* v_x_5316_, lean_object* v___f_5317_, lean_object* v_x_5318_){
_start:
{
if (lean_obj_tag(v_x_5318_) == 0)
{
lean_object* v_a_5320_; lean_object* v___x_5322_; uint8_t v_isShared_5323_; uint8_t v_isSharedCheck_5328_; 
lean_dec_ref(v___f_5317_);
lean_dec_ref(v_x_5316_);
lean_dec_ref(v___f_5315_);
lean_dec(v_prio_5314_);
lean_dec_ref(v_y_5313_);
lean_dec(v___f_5312_);
lean_dec_ref(v___f_5311_);
lean_dec_ref(v___f_5310_);
v_a_5320_ = lean_ctor_get(v_x_5318_, 0);
v_isSharedCheck_5328_ = !lean_is_exclusive(v_x_5318_);
if (v_isSharedCheck_5328_ == 0)
{
v___x_5322_ = v_x_5318_;
v_isShared_5323_ = v_isSharedCheck_5328_;
goto v_resetjp_5321_;
}
else
{
lean_inc(v_a_5320_);
lean_dec(v_x_5318_);
v___x_5322_ = lean_box(0);
v_isShared_5323_ = v_isSharedCheck_5328_;
goto v_resetjp_5321_;
}
v_resetjp_5321_:
{
lean_object* v___x_5325_; 
if (v_isShared_5323_ == 0)
{
v___x_5325_ = v___x_5322_;
goto v_reusejp_5324_;
}
else
{
lean_object* v_reuseFailAlloc_5327_; 
v_reuseFailAlloc_5327_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5327_, 0, v_a_5320_);
v___x_5325_ = v_reuseFailAlloc_5327_;
goto v_reusejp_5324_;
}
v_reusejp_5324_:
{
lean_object* v___x_5326_; 
v___x_5326_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5326_, 0, v___x_5325_);
return v___x_5326_;
}
}
}
else
{
lean_object* v_a_5329_; lean_object* v___x_5331_; uint8_t v_isShared_5332_; uint8_t v_isSharedCheck_5348_; 
v_a_5329_ = lean_ctor_get(v_x_5318_, 0);
v_isSharedCheck_5348_ = !lean_is_exclusive(v_x_5318_);
if (v_isSharedCheck_5348_ == 0)
{
v___x_5331_ = v_x_5318_;
v_isShared_5332_ = v_isSharedCheck_5348_;
goto v_resetjp_5330_;
}
else
{
lean_inc(v_a_5329_);
lean_dec(v_x_5318_);
v___x_5331_ = lean_box(0);
v_isShared_5332_ = v_isSharedCheck_5348_;
goto v_resetjp_5330_;
}
v_resetjp_5330_:
{
lean_object* v___f_5333_; lean_object* v___f_5334_; lean_object* v___f_5335_; lean_object* v___x_5336_; uint8_t v___x_5337_; lean_object* v___x_5338_; lean_object* v___x_5339_; lean_object* v___x_5340_; uint8_t v___x_5341_; lean_object* v___x_5342_; lean_object* v___x_5344_; 
lean_inc(v_a_5329_);
v___f_5333_ = lean_alloc_closure((void*)(l_Std_Async_Async_race___redArg___lam__3___boxed), 3, 1);
lean_closure_set(v___f_5333_, 0, v_a_5329_);
v___f_5334_ = lean_alloc_closure((void*)(l_Std_Async_Async_race___redArg___lam__2___boxed), 5, 3);
lean_closure_set(v___f_5334_, 0, v_a_5329_);
lean_closure_set(v___f_5334_, 1, v___f_5310_);
lean_closure_set(v___f_5334_, 2, v___f_5311_);
lean_inc(v_prio_5314_);
v___f_5335_ = lean_alloc_closure((void*)(l_Std_Async_Async_race___redArg___lam__6___boxed), 8, 6);
lean_closure_set(v___f_5335_, 0, v___f_5312_);
lean_closure_set(v___f_5335_, 1, v___f_5333_);
lean_closure_set(v___f_5335_, 2, v___f_5334_);
lean_closure_set(v___f_5335_, 3, v_y_5313_);
lean_closure_set(v___f_5335_, 4, v_prio_5314_);
lean_closure_set(v___f_5335_, 5, v___f_5315_);
v___x_5336_ = lean_unsigned_to_nat(0u);
v___x_5337_ = 0;
v___x_5338_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_toBaseAsync___boxed), 4, 3);
lean_closure_set(v___x_5338_, 0, lean_box(0));
lean_closure_set(v___x_5338_, 1, lean_box(0));
lean_closure_set(v___x_5338_, 2, v_x_5316_);
v___x_5339_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_toRawBaseIO___boxed), 3, 2);
lean_closure_set(v___x_5339_, 0, lean_box(0));
lean_closure_set(v___x_5339_, 1, v___x_5338_);
v___x_5340_ = lean_io_as_task(v___x_5339_, v_prio_5314_);
v___x_5341_ = 1;
v___x_5342_ = lean_task_bind(v___x_5340_, v___f_5317_, v___x_5336_, v___x_5341_);
if (v_isShared_5332_ == 0)
{
lean_ctor_set(v___x_5331_, 0, v___x_5342_);
v___x_5344_ = v___x_5331_;
goto v_reusejp_5343_;
}
else
{
lean_object* v_reuseFailAlloc_5347_; 
v_reuseFailAlloc_5347_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5347_, 0, v___x_5342_);
v___x_5344_ = v_reuseFailAlloc_5347_;
goto v_reusejp_5343_;
}
v_reusejp_5343_:
{
lean_object* v___x_5345_; lean_object* v___x_5346_; 
v___x_5345_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5345_, 0, v___x_5344_);
v___x_5346_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5336_, v___x_5337_, v___x_5345_, v___f_5335_);
return v___x_5346_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_race___redArg___lam__7___boxed(lean_object* v___f_5349_, lean_object* v___f_5350_, lean_object* v___f_5351_, lean_object* v_y_5352_, lean_object* v_prio_5353_, lean_object* v___f_5354_, lean_object* v_x_5355_, lean_object* v___f_5356_, lean_object* v_x_5357_, lean_object* v___y_5358_){
_start:
{
lean_object* v_res_5359_; 
v_res_5359_ = l_Std_Async_Async_race___redArg___lam__7(v___f_5349_, v___f_5350_, v___f_5351_, v_y_5352_, v_prio_5353_, v___f_5354_, v_x_5355_, v___f_5356_, v_x_5357_);
return v_res_5359_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_race___redArg(lean_object* v_x_5362_, lean_object* v_y_5363_, lean_object* v_prio_5364_){
_start:
{
lean_object* v___f_5366_; lean_object* v___f_5367_; lean_object* v___f_5368_; lean_object* v___f_5369_; lean_object* v___f_5370_; lean_object* v___x_5371_; uint8_t v___x_5372_; lean_object* v___x_5373_; lean_object* v___x_5374_; lean_object* v___x_5375_; lean_object* v___x_5376_; 
v___f_5366_ = ((lean_object*)(l_Std_Async_EAsync_instMonadAsyncAsyncTaskError___closed__0));
v___f_5367_ = ((lean_object*)(l_Std_Async_Async_race___redArg___closed__0));
v___f_5368_ = ((lean_object*)(l_Std_Async_Async_race___redArg___closed__1));
v___f_5369_ = ((lean_object*)(l_Std_Async_BaseAsync_race___redArg___closed__0));
v___f_5370_ = lean_alloc_closure((void*)(l_Std_Async_Async_race___redArg___lam__7___boxed), 10, 8);
lean_closure_set(v___f_5370_, 0, v___f_5368_);
lean_closure_set(v___f_5370_, 1, v___f_5367_);
lean_closure_set(v___f_5370_, 2, v___f_5369_);
lean_closure_set(v___f_5370_, 3, v_y_5363_);
lean_closure_set(v___f_5370_, 4, v_prio_5364_);
lean_closure_set(v___f_5370_, 5, v___f_5366_);
lean_closure_set(v___f_5370_, 6, v_x_5362_);
lean_closure_set(v___f_5370_, 7, v___f_5366_);
v___x_5371_ = lean_unsigned_to_nat(0u);
v___x_5372_ = 0;
v___x_5373_ = lean_io_promise_new();
v___x_5374_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5374_, 0, v___x_5373_);
v___x_5375_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5375_, 0, v___x_5374_);
v___x_5376_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5371_, v___x_5372_, v___x_5375_, v___f_5370_);
return v___x_5376_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_race___redArg___boxed(lean_object* v_x_5377_, lean_object* v_y_5378_, lean_object* v_prio_5379_, lean_object* v___y_5380_){
_start:
{
lean_object* v_res_5381_; 
v_res_5381_ = l_Std_Async_Async_race___redArg(v_x_5377_, v_y_5378_, v_prio_5379_);
return v_res_5381_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_race(lean_object* v_00_u03b1_5382_, lean_object* v_inst_5383_, lean_object* v_x_5384_, lean_object* v_y_5385_, lean_object* v_prio_5386_){
_start:
{
lean_object* v___f_5388_; lean_object* v___f_5389_; lean_object* v___f_5390_; lean_object* v___f_5391_; lean_object* v___f_5392_; lean_object* v___x_5393_; uint8_t v___x_5394_; lean_object* v___x_5395_; lean_object* v___x_5396_; lean_object* v___x_5397_; lean_object* v___x_5398_; 
v___f_5388_ = ((lean_object*)(l_Std_Async_EAsync_instMonadAsyncAsyncTaskError___closed__0));
v___f_5389_ = ((lean_object*)(l_Std_Async_Async_race___redArg___closed__0));
v___f_5390_ = ((lean_object*)(l_Std_Async_Async_race___redArg___closed__1));
v___f_5391_ = ((lean_object*)(l_Std_Async_BaseAsync_race___redArg___closed__0));
v___f_5392_ = lean_alloc_closure((void*)(l_Std_Async_Async_race___redArg___lam__7___boxed), 10, 8);
lean_closure_set(v___f_5392_, 0, v___f_5390_);
lean_closure_set(v___f_5392_, 1, v___f_5389_);
lean_closure_set(v___f_5392_, 2, v___f_5391_);
lean_closure_set(v___f_5392_, 3, v_y_5385_);
lean_closure_set(v___f_5392_, 4, v_prio_5386_);
lean_closure_set(v___f_5392_, 5, v___f_5388_);
lean_closure_set(v___f_5392_, 6, v_x_5384_);
lean_closure_set(v___f_5392_, 7, v___f_5388_);
v___x_5393_ = lean_unsigned_to_nat(0u);
v___x_5394_ = 0;
v___x_5395_ = lean_io_promise_new();
v___x_5396_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5396_, 0, v___x_5395_);
v___x_5397_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5397_, 0, v___x_5396_);
v___x_5398_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5393_, v___x_5394_, v___x_5397_, v___f_5392_);
return v___x_5398_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_race___boxed(lean_object* v_00_u03b1_5399_, lean_object* v_inst_5400_, lean_object* v_x_5401_, lean_object* v_y_5402_, lean_object* v_prio_5403_, lean_object* v___y_5404_){
_start:
{
lean_object* v_res_5405_; 
v_res_5405_ = l_Std_Async_Async_race(v_00_u03b1_5399_, v_inst_5400_, v_x_5401_, v_y_5402_, v_prio_5403_);
lean_dec(v_inst_5400_);
return v_res_5405_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_concurrentlyAll___redArg___lam__1(lean_object* v_prio_5406_, lean_object* v___f_5407_, lean_object* v_x_5408_){
_start:
{
lean_object* v___x_5410_; lean_object* v___x_5411_; lean_object* v___x_5412_; lean_object* v___x_5413_; uint8_t v___x_5414_; lean_object* v___x_5415_; lean_object* v___x_5416_; lean_object* v___x_5417_; 
v___x_5410_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_toBaseAsync___boxed), 4, 3);
lean_closure_set(v___x_5410_, 0, lean_box(0));
lean_closure_set(v___x_5410_, 1, lean_box(0));
lean_closure_set(v___x_5410_, 2, v_x_5408_);
v___x_5411_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_toRawBaseIO___boxed), 3, 2);
lean_closure_set(v___x_5411_, 0, lean_box(0));
lean_closure_set(v___x_5411_, 1, v___x_5410_);
v___x_5412_ = lean_io_as_task(v___x_5411_, v_prio_5406_);
v___x_5413_ = lean_unsigned_to_nat(0u);
v___x_5414_ = 1;
v___x_5415_ = lean_task_bind(v___x_5412_, v___f_5407_, v___x_5413_, v___x_5414_);
v___x_5416_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5416_, 0, v___x_5415_);
v___x_5417_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5417_, 0, v___x_5416_);
return v___x_5417_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_concurrentlyAll___redArg___lam__1___boxed(lean_object* v_prio_5418_, lean_object* v___f_5419_, lean_object* v_x_5420_, lean_object* v___y_5421_){
_start:
{
lean_object* v_res_5422_; 
v_res_5422_ = l_Std_Async_Async_concurrentlyAll___redArg___lam__1(v_prio_5418_, v___f_5419_, v_x_5420_);
return v_res_5422_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_concurrentlyAll___redArg___lam__0(lean_object* v___y_5423_){
_start:
{
lean_object* v___x_5425_; 
v___x_5425_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5425_, 0, v___y_5423_);
return v___x_5425_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_concurrentlyAll___redArg___lam__0___boxed(lean_object* v___y_5426_, lean_object* v___y_5427_){
_start:
{
lean_object* v_res_5428_; 
v_res_5428_ = l_Std_Async_Async_concurrentlyAll___redArg___lam__0(v___y_5426_);
return v_res_5428_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_concurrentlyAll___redArg___lam__2(lean_object* v___x_5429_, lean_object* v___f_5430_, lean_object* v_x_5431_){
_start:
{
if (lean_obj_tag(v_x_5431_) == 0)
{
lean_object* v_a_5433_; lean_object* v___x_5435_; uint8_t v_isShared_5436_; uint8_t v_isSharedCheck_5441_; 
lean_dec_ref(v___f_5430_);
lean_dec_ref(v___x_5429_);
v_a_5433_ = lean_ctor_get(v_x_5431_, 0);
v_isSharedCheck_5441_ = !lean_is_exclusive(v_x_5431_);
if (v_isSharedCheck_5441_ == 0)
{
v___x_5435_ = v_x_5431_;
v_isShared_5436_ = v_isSharedCheck_5441_;
goto v_resetjp_5434_;
}
else
{
lean_inc(v_a_5433_);
lean_dec(v_x_5431_);
v___x_5435_ = lean_box(0);
v_isShared_5436_ = v_isSharedCheck_5441_;
goto v_resetjp_5434_;
}
v_resetjp_5434_:
{
lean_object* v___x_5438_; 
if (v_isShared_5436_ == 0)
{
v___x_5438_ = v___x_5435_;
goto v_reusejp_5437_;
}
else
{
lean_object* v_reuseFailAlloc_5440_; 
v_reuseFailAlloc_5440_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5440_, 0, v_a_5433_);
v___x_5438_ = v_reuseFailAlloc_5440_;
goto v_reusejp_5437_;
}
v_reusejp_5437_:
{
lean_object* v___x_5439_; 
v___x_5439_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5439_, 0, v___x_5438_);
return v___x_5439_;
}
}
}
else
{
lean_object* v_a_5442_; size_t v_sz_5443_; size_t v___x_5444_; lean_object* v___x_298__overap_5445_; lean_object* v___x_5446_; 
v_a_5442_ = lean_ctor_get(v_x_5431_, 0);
lean_inc(v_a_5442_);
lean_dec_ref_known(v_x_5431_, 1);
v_sz_5443_ = lean_array_size(v_a_5442_);
v___x_5444_ = ((size_t)0ULL);
v___x_298__overap_5445_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_5429_, v___f_5430_, v_sz_5443_, v___x_5444_, v_a_5442_);
v___x_5446_ = lean_apply_1(v___x_298__overap_5445_, lean_box(0));
return v___x_5446_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_concurrentlyAll___redArg___lam__2___boxed(lean_object* v___x_5447_, lean_object* v___f_5448_, lean_object* v_x_5449_, lean_object* v___y_5450_){
_start:
{
lean_object* v_res_5451_; 
v_res_5451_ = l_Std_Async_Async_concurrentlyAll___redArg___lam__2(v___x_5447_, v___f_5448_, v_x_5449_);
return v_res_5451_;
}
}
static lean_object* _init_l_Std_Async_Async_concurrentlyAll___redArg___closed__1(void){
_start:
{
lean_object* v___f_5453_; lean_object* v___x_5454_; lean_object* v___f_5455_; 
v___f_5453_ = ((lean_object*)(l_Std_Async_Async_concurrentlyAll___redArg___closed__0));
v___x_5454_ = lean_obj_once(&l_Std_Async_EAsync_instMonad___closed__0, &l_Std_Async_EAsync_instMonad___closed__0_once, _init_l_Std_Async_EAsync_instMonad___closed__0);
v___f_5455_ = lean_alloc_closure((void*)(l_Std_Async_Async_concurrentlyAll___redArg___lam__2___boxed), 4, 2);
lean_closure_set(v___f_5455_, 0, v___x_5454_);
lean_closure_set(v___f_5455_, 1, v___f_5453_);
return v___f_5455_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_concurrentlyAll___redArg(lean_object* v_xs_5456_, lean_object* v_prio_5457_){
_start:
{
lean_object* v___f_5459_; lean_object* v___f_5460_; lean_object* v___x_5461_; lean_object* v___f_5462_; lean_object* v___x_5463_; uint8_t v___x_5464_; size_t v_sz_5465_; size_t v___x_5466_; lean_object* v___x_221__overap_5467_; lean_object* v___x_5468_; lean_object* v___x_5469_; 
v___f_5459_ = ((lean_object*)(l_Std_Async_EAsync_instMonadAsyncAsyncTaskError___closed__0));
v___f_5460_ = lean_alloc_closure((void*)(l_Std_Async_Async_concurrentlyAll___redArg___lam__1___boxed), 4, 2);
lean_closure_set(v___f_5460_, 0, v_prio_5457_);
lean_closure_set(v___f_5460_, 1, v___f_5459_);
v___x_5461_ = lean_obj_once(&l_Std_Async_EAsync_instMonad___closed__0, &l_Std_Async_EAsync_instMonad___closed__0_once, _init_l_Std_Async_EAsync_instMonad___closed__0);
v___f_5462_ = lean_obj_once(&l_Std_Async_Async_concurrentlyAll___redArg___closed__1, &l_Std_Async_Async_concurrentlyAll___redArg___closed__1_once, _init_l_Std_Async_Async_concurrentlyAll___redArg___closed__1);
v___x_5463_ = lean_unsigned_to_nat(0u);
v___x_5464_ = 0;
v_sz_5465_ = lean_array_size(v_xs_5456_);
v___x_5466_ = ((size_t)0ULL);
v___x_221__overap_5467_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_5461_, v___f_5460_, v_sz_5465_, v___x_5466_, v_xs_5456_);
v___x_5468_ = lean_apply_1(v___x_221__overap_5467_, lean_box(0));
v___x_5469_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5463_, v___x_5464_, v___x_5468_, v___f_5462_);
return v___x_5469_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_concurrentlyAll___redArg___boxed(lean_object* v_xs_5470_, lean_object* v_prio_5471_, lean_object* v___y_5472_){
_start:
{
lean_object* v_res_5473_; 
v_res_5473_ = l_Std_Async_Async_concurrentlyAll___redArg(v_xs_5470_, v_prio_5471_);
return v_res_5473_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_concurrentlyAll(lean_object* v_00_u03b1_5474_, lean_object* v_xs_5475_, lean_object* v_prio_5476_){
_start:
{
lean_object* v___f_5478_; lean_object* v___f_5479_; lean_object* v___x_5480_; lean_object* v___f_5481_; lean_object* v___x_5482_; uint8_t v___x_5483_; size_t v_sz_5484_; size_t v___x_5485_; lean_object* v___x_263__overap_5486_; lean_object* v___x_5487_; lean_object* v___x_5488_; 
v___f_5478_ = ((lean_object*)(l_Std_Async_EAsync_instMonadAsyncAsyncTaskError___closed__0));
v___f_5479_ = lean_alloc_closure((void*)(l_Std_Async_Async_concurrentlyAll___redArg___lam__1___boxed), 4, 2);
lean_closure_set(v___f_5479_, 0, v_prio_5476_);
lean_closure_set(v___f_5479_, 1, v___f_5478_);
v___x_5480_ = lean_obj_once(&l_Std_Async_EAsync_instMonad___closed__0, &l_Std_Async_EAsync_instMonad___closed__0_once, _init_l_Std_Async_EAsync_instMonad___closed__0);
v___f_5481_ = lean_obj_once(&l_Std_Async_Async_concurrentlyAll___redArg___closed__1, &l_Std_Async_Async_concurrentlyAll___redArg___closed__1_once, _init_l_Std_Async_Async_concurrentlyAll___redArg___closed__1);
v___x_5482_ = lean_unsigned_to_nat(0u);
v___x_5483_ = 0;
v_sz_5484_ = lean_array_size(v_xs_5475_);
v___x_5485_ = ((size_t)0ULL);
v___x_263__overap_5486_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_5480_, v___f_5479_, v_sz_5484_, v___x_5485_, v_xs_5475_);
v___x_5487_ = lean_apply_1(v___x_263__overap_5486_, lean_box(0));
v___x_5488_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5482_, v___x_5483_, v___x_5487_, v___f_5481_);
return v___x_5488_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_concurrentlyAll___boxed(lean_object* v_00_u03b1_5489_, lean_object* v_xs_5490_, lean_object* v_prio_5491_, lean_object* v___y_5492_){
_start:
{
lean_object* v_res_5493_; 
v_res_5493_ = l_Std_Async_Async_concurrentlyAll(v_00_u03b1_5489_, v_xs_5490_, v_prio_5491_);
return v_res_5493_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_raceAll___redArg___lam__4(lean_object* v___f_5494_, lean_object* v___f_5495_, lean_object* v_x_5496_){
_start:
{
if (lean_obj_tag(v_x_5496_) == 0)
{
lean_object* v_a_5498_; lean_object* v___x_5500_; uint8_t v_isShared_5501_; uint8_t v_isSharedCheck_5506_; 
lean_dec_ref(v___f_5495_);
lean_dec(v___f_5494_);
v_a_5498_ = lean_ctor_get(v_x_5496_, 0);
v_isSharedCheck_5506_ = !lean_is_exclusive(v_x_5496_);
if (v_isSharedCheck_5506_ == 0)
{
v___x_5500_ = v_x_5496_;
v_isShared_5501_ = v_isSharedCheck_5506_;
goto v_resetjp_5499_;
}
else
{
lean_inc(v_a_5498_);
lean_dec(v_x_5496_);
v___x_5500_ = lean_box(0);
v_isShared_5501_ = v_isSharedCheck_5506_;
goto v_resetjp_5499_;
}
v_resetjp_5499_:
{
lean_object* v___x_5503_; 
if (v_isShared_5501_ == 0)
{
v___x_5503_ = v___x_5500_;
goto v_reusejp_5502_;
}
else
{
lean_object* v_reuseFailAlloc_5505_; 
v_reuseFailAlloc_5505_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5505_, 0, v_a_5498_);
v___x_5503_ = v_reuseFailAlloc_5505_;
goto v_reusejp_5502_;
}
v_reusejp_5502_:
{
lean_object* v___x_5504_; 
v___x_5504_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5504_, 0, v___x_5503_);
return v___x_5504_;
}
}
}
else
{
lean_object* v_a_5507_; lean_object* v___x_5509_; uint8_t v_isShared_5510_; uint8_t v_isSharedCheck_5520_; 
v_a_5507_ = lean_ctor_get(v_x_5496_, 0);
v_isSharedCheck_5520_ = !lean_is_exclusive(v_x_5496_);
if (v_isSharedCheck_5520_ == 0)
{
v___x_5509_ = v_x_5496_;
v_isShared_5510_ = v_isSharedCheck_5520_;
goto v_resetjp_5508_;
}
else
{
lean_inc(v_a_5507_);
lean_dec(v_x_5496_);
v___x_5509_ = lean_box(0);
v_isShared_5510_ = v_isSharedCheck_5520_;
goto v_resetjp_5508_;
}
v_resetjp_5508_:
{
lean_object* v___x_5511_; lean_object* v___x_5512_; lean_object* v___x_5513_; uint8_t v___x_5514_; lean_object* v___x_5515_; lean_object* v___x_5517_; 
v___x_5511_ = lean_alloc_closure((void*)(l_liftM), 5, 4);
lean_closure_set(v___x_5511_, 0, lean_box(0));
lean_closure_set(v___x_5511_, 1, lean_box(0));
lean_closure_set(v___x_5511_, 2, v___f_5494_);
lean_closure_set(v___x_5511_, 3, lean_box(0));
v___x_5512_ = lean_alloc_closure((void*)(l_Function_comp), 6, 5);
lean_closure_set(v___x_5512_, 0, lean_box(0));
lean_closure_set(v___x_5512_, 1, lean_box(0));
lean_closure_set(v___x_5512_, 2, lean_box(0));
lean_closure_set(v___x_5512_, 3, v___x_5511_);
lean_closure_set(v___x_5512_, 4, v___f_5495_);
v___x_5513_ = lean_unsigned_to_nat(0u);
v___x_5514_ = 0;
v___x_5515_ = l_BaseIO_chainTask___redArg(v_a_5507_, v___x_5512_, v___x_5513_, v___x_5514_);
if (v_isShared_5510_ == 0)
{
lean_ctor_set(v___x_5509_, 0, v___x_5515_);
v___x_5517_ = v___x_5509_;
goto v_reusejp_5516_;
}
else
{
lean_object* v_reuseFailAlloc_5519_; 
v_reuseFailAlloc_5519_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5519_, 0, v___x_5515_);
v___x_5517_ = v_reuseFailAlloc_5519_;
goto v_reusejp_5516_;
}
v_reusejp_5516_:
{
lean_object* v___x_5518_; 
v___x_5518_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5518_, 0, v___x_5517_);
return v___x_5518_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_raceAll___redArg___lam__4___boxed(lean_object* v___f_5521_, lean_object* v___f_5522_, lean_object* v_x_5523_, lean_object* v___y_5524_){
_start:
{
lean_object* v_res_5525_; 
v_res_5525_ = l_Std_Async_Async_raceAll___redArg___lam__4(v___f_5521_, v___f_5522_, v_x_5523_);
return v_res_5525_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_raceAll___redArg___lam__0(lean_object* v_prio_5526_, lean_object* v___f_5527_, lean_object* v___f_5528_, lean_object* v_x_5529_){
_start:
{
lean_object* v___x_5531_; uint8_t v___x_5532_; lean_object* v___x_5533_; lean_object* v___x_5534_; lean_object* v___x_5535_; uint8_t v___x_5536_; lean_object* v___x_5537_; lean_object* v___x_5538_; lean_object* v___x_5539_; lean_object* v___x_5540_; 
v___x_5531_ = lean_unsigned_to_nat(0u);
v___x_5532_ = 0;
v___x_5533_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_toBaseAsync___boxed), 4, 3);
lean_closure_set(v___x_5533_, 0, lean_box(0));
lean_closure_set(v___x_5533_, 1, lean_box(0));
lean_closure_set(v___x_5533_, 2, v_x_5529_);
v___x_5534_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_toRawBaseIO___boxed), 3, 2);
lean_closure_set(v___x_5534_, 0, lean_box(0));
lean_closure_set(v___x_5534_, 1, v___x_5533_);
v___x_5535_ = lean_io_as_task(v___x_5534_, v_prio_5526_);
v___x_5536_ = 1;
v___x_5537_ = lean_task_bind(v___x_5535_, v___f_5527_, v___x_5531_, v___x_5536_);
v___x_5538_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5538_, 0, v___x_5537_);
v___x_5539_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5539_, 0, v___x_5538_);
v___x_5540_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5531_, v___x_5532_, v___x_5539_, v___f_5528_);
return v___x_5540_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_raceAll___redArg___lam__0___boxed(lean_object* v_prio_5541_, lean_object* v___f_5542_, lean_object* v___f_5543_, lean_object* v_x_5544_, lean_object* v___y_5545_){
_start:
{
lean_object* v_res_5546_; 
v_res_5546_ = l_Std_Async_Async_raceAll___redArg___lam__0(v_prio_5541_, v___f_5542_, v___f_5543_, v_x_5544_);
return v_res_5546_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_raceAll___redArg___lam__2(lean_object* v___f_5547_, lean_object* v_prio_5548_, lean_object* v___f_5549_, lean_object* v___f_5550_, lean_object* v___f_5551_, lean_object* v_inst_5552_, lean_object* v_xs_5553_, lean_object* v_x_5554_){
_start:
{
if (lean_obj_tag(v_x_5554_) == 0)
{
lean_object* v_a_5556_; lean_object* v___x_5558_; uint8_t v_isShared_5559_; uint8_t v_isSharedCheck_5564_; 
lean_dec(v_xs_5553_);
lean_dec_ref(v_inst_5552_);
lean_dec_ref(v___f_5551_);
lean_dec_ref(v___f_5550_);
lean_dec_ref(v___f_5549_);
lean_dec(v_prio_5548_);
lean_dec(v___f_5547_);
v_a_5556_ = lean_ctor_get(v_x_5554_, 0);
v_isSharedCheck_5564_ = !lean_is_exclusive(v_x_5554_);
if (v_isSharedCheck_5564_ == 0)
{
v___x_5558_ = v_x_5554_;
v_isShared_5559_ = v_isSharedCheck_5564_;
goto v_resetjp_5557_;
}
else
{
lean_inc(v_a_5556_);
lean_dec(v_x_5554_);
v___x_5558_ = lean_box(0);
v_isShared_5559_ = v_isSharedCheck_5564_;
goto v_resetjp_5557_;
}
v_resetjp_5557_:
{
lean_object* v___x_5561_; 
if (v_isShared_5559_ == 0)
{
v___x_5561_ = v___x_5558_;
goto v_reusejp_5560_;
}
else
{
lean_object* v_reuseFailAlloc_5563_; 
v_reuseFailAlloc_5563_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5563_, 0, v_a_5556_);
v___x_5561_ = v_reuseFailAlloc_5563_;
goto v_reusejp_5560_;
}
v_reusejp_5560_:
{
lean_object* v___x_5562_; 
v___x_5562_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5562_, 0, v___x_5561_);
return v___x_5562_;
}
}
}
else
{
lean_object* v_a_5565_; lean_object* v___f_5566_; lean_object* v___f_5567_; lean_object* v___f_5568_; lean_object* v___f_5569_; lean_object* v___x_5570_; uint8_t v___x_5571_; lean_object* v___x_5572_; lean_object* v___x_5573_; 
v_a_5565_ = lean_ctor_get(v_x_5554_, 0);
lean_inc_n(v_a_5565_, 2);
lean_dec_ref_known(v_x_5554_, 1);
v___f_5566_ = lean_alloc_closure((void*)(l_Std_Async_Async_race___redArg___lam__3___boxed), 3, 1);
lean_closure_set(v___f_5566_, 0, v_a_5565_);
v___f_5567_ = lean_alloc_closure((void*)(l_Std_Async_Async_raceAll___redArg___lam__4___boxed), 4, 2);
lean_closure_set(v___f_5567_, 0, v___f_5547_);
lean_closure_set(v___f_5567_, 1, v___f_5566_);
v___f_5568_ = lean_alloc_closure((void*)(l_Std_Async_Async_raceAll___redArg___lam__0___boxed), 5, 3);
lean_closure_set(v___f_5568_, 0, v_prio_5548_);
lean_closure_set(v___f_5568_, 1, v___f_5549_);
lean_closure_set(v___f_5568_, 2, v___f_5567_);
v___f_5569_ = lean_alloc_closure((void*)(l_Std_Async_Async_race___redArg___lam__2___boxed), 5, 3);
lean_closure_set(v___f_5569_, 0, v_a_5565_);
lean_closure_set(v___f_5569_, 1, v___f_5550_);
lean_closure_set(v___f_5569_, 2, v___f_5551_);
v___x_5570_ = lean_unsigned_to_nat(0u);
v___x_5571_ = 0;
v___x_5572_ = lean_apply_3(v_inst_5552_, v_xs_5553_, v___f_5568_, lean_box(0));
v___x_5573_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5570_, v___x_5571_, v___x_5572_, v___f_5569_);
return v___x_5573_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_raceAll___redArg___lam__2___boxed(lean_object* v___f_5574_, lean_object* v_prio_5575_, lean_object* v___f_5576_, lean_object* v___f_5577_, lean_object* v___f_5578_, lean_object* v_inst_5579_, lean_object* v_xs_5580_, lean_object* v_x_5581_, lean_object* v___y_5582_){
_start:
{
lean_object* v_res_5583_; 
v_res_5583_ = l_Std_Async_Async_raceAll___redArg___lam__2(v___f_5574_, v_prio_5575_, v___f_5576_, v___f_5577_, v___f_5578_, v_inst_5579_, v_xs_5580_, v_x_5581_);
return v_res_5583_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_raceAll___redArg(lean_object* v_inst_5584_, lean_object* v_xs_5585_, lean_object* v_prio_5586_){
_start:
{
lean_object* v___f_5588_; lean_object* v___f_5589_; lean_object* v___f_5590_; lean_object* v___f_5591_; lean_object* v___f_5592_; lean_object* v___x_5593_; uint8_t v___x_5594_; lean_object* v___x_5595_; lean_object* v___x_5596_; lean_object* v___x_5597_; lean_object* v___x_5598_; 
v___f_5588_ = ((lean_object*)(l_Std_Async_Async_race___redArg___closed__1));
v___f_5589_ = ((lean_object*)(l_Std_Async_Async_race___redArg___closed__0));
v___f_5590_ = ((lean_object*)(l_Std_Async_EAsync_instMonadAsyncAsyncTaskError___closed__0));
v___f_5591_ = ((lean_object*)(l_Std_Async_BaseAsync_race___redArg___closed__0));
v___f_5592_ = lean_alloc_closure((void*)(l_Std_Async_Async_raceAll___redArg___lam__2___boxed), 9, 7);
lean_closure_set(v___f_5592_, 0, v___f_5591_);
lean_closure_set(v___f_5592_, 1, v_prio_5586_);
lean_closure_set(v___f_5592_, 2, v___f_5590_);
lean_closure_set(v___f_5592_, 3, v___f_5588_);
lean_closure_set(v___f_5592_, 4, v___f_5589_);
lean_closure_set(v___f_5592_, 5, v_inst_5584_);
lean_closure_set(v___f_5592_, 6, v_xs_5585_);
v___x_5593_ = lean_unsigned_to_nat(0u);
v___x_5594_ = 0;
v___x_5595_ = lean_io_promise_new();
v___x_5596_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5596_, 0, v___x_5595_);
v___x_5597_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5597_, 0, v___x_5596_);
v___x_5598_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5593_, v___x_5594_, v___x_5597_, v___f_5592_);
return v___x_5598_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_raceAll___redArg___boxed(lean_object* v_inst_5599_, lean_object* v_xs_5600_, lean_object* v_prio_5601_, lean_object* v___y_5602_){
_start:
{
lean_object* v_res_5603_; 
v_res_5603_ = l_Std_Async_Async_raceAll___redArg(v_inst_5599_, v_xs_5600_, v_prio_5601_);
return v_res_5603_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_raceAll(lean_object* v_c_5604_, lean_object* v_00_u03b1_5605_, lean_object* v_inst_5606_, lean_object* v_xs_5607_, lean_object* v_prio_5608_){
_start:
{
lean_object* v___f_5610_; lean_object* v___f_5611_; lean_object* v___f_5612_; lean_object* v___f_5613_; lean_object* v___f_5614_; lean_object* v___x_5615_; uint8_t v___x_5616_; lean_object* v___x_5617_; lean_object* v___x_5618_; lean_object* v___x_5619_; lean_object* v___x_5620_; 
v___f_5610_ = ((lean_object*)(l_Std_Async_Async_race___redArg___closed__1));
v___f_5611_ = ((lean_object*)(l_Std_Async_Async_race___redArg___closed__0));
v___f_5612_ = ((lean_object*)(l_Std_Async_EAsync_instMonadAsyncAsyncTaskError___closed__0));
v___f_5613_ = ((lean_object*)(l_Std_Async_BaseAsync_race___redArg___closed__0));
v___f_5614_ = lean_alloc_closure((void*)(l_Std_Async_Async_raceAll___redArg___lam__2___boxed), 9, 7);
lean_closure_set(v___f_5614_, 0, v___f_5613_);
lean_closure_set(v___f_5614_, 1, v_prio_5608_);
lean_closure_set(v___f_5614_, 2, v___f_5612_);
lean_closure_set(v___f_5614_, 3, v___f_5610_);
lean_closure_set(v___f_5614_, 4, v___f_5611_);
lean_closure_set(v___f_5614_, 5, v_inst_5606_);
lean_closure_set(v___f_5614_, 6, v_xs_5607_);
v___x_5615_ = lean_unsigned_to_nat(0u);
v___x_5616_ = 0;
v___x_5617_ = lean_io_promise_new();
v___x_5618_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5618_, 0, v___x_5617_);
v___x_5619_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5619_, 0, v___x_5618_);
v___x_5620_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5615_, v___x_5616_, v___x_5619_, v___f_5614_);
return v___x_5620_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_raceAll___boxed(lean_object* v_c_5621_, lean_object* v_00_u03b1_5622_, lean_object* v_inst_5623_, lean_object* v_xs_5624_, lean_object* v_prio_5625_, lean_object* v___y_5626_){
_start:
{
lean_object* v_res_5627_; 
v_res_5627_ = l_Std_Async_Async_raceAll(v_c_5621_, v_00_u03b1_5622_, v_inst_5623_, v_xs_5624_, v_prio_5625_);
return v_res_5627_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_background___redArg(lean_object* v_inst_5628_, lean_object* v_inst_5629_, lean_object* v_action_5630_, lean_object* v_prio_5631_){
_start:
{
lean_object* v_toApplicative_5632_; lean_object* v_toFunctor_5633_; lean_object* v_mapConst_5634_; lean_object* v___x_5635_; lean_object* v___x_5636_; lean_object* v___x_5637_; 
v_toApplicative_5632_ = lean_ctor_get(v_inst_5628_, 0);
lean_inc_ref(v_toApplicative_5632_);
lean_dec_ref(v_inst_5628_);
v_toFunctor_5633_ = lean_ctor_get(v_toApplicative_5632_, 0);
lean_inc_ref(v_toFunctor_5633_);
lean_dec_ref(v_toApplicative_5632_);
v_mapConst_5634_ = lean_ctor_get(v_toFunctor_5633_, 1);
lean_inc(v_mapConst_5634_);
lean_dec_ref(v_toFunctor_5633_);
v___x_5635_ = lean_apply_3(v_inst_5629_, lean_box(0), v_action_5630_, v_prio_5631_);
v___x_5636_ = lean_box(0);
v___x_5637_ = lean_apply_4(v_mapConst_5634_, lean_box(0), lean_box(0), v___x_5636_, v___x_5635_);
return v___x_5637_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_background(lean_object* v_m_5638_, lean_object* v_t_5639_, lean_object* v_00_u03b1_5640_, lean_object* v_inst_5641_, lean_object* v_inst_5642_, lean_object* v_action_5643_, lean_object* v_prio_5644_){
_start:
{
lean_object* v_toApplicative_5645_; lean_object* v_toFunctor_5646_; lean_object* v_mapConst_5647_; lean_object* v___x_5648_; lean_object* v___x_5649_; lean_object* v___x_5650_; 
v_toApplicative_5645_ = lean_ctor_get(v_inst_5641_, 0);
lean_inc_ref(v_toApplicative_5645_);
lean_dec_ref(v_inst_5641_);
v_toFunctor_5646_ = lean_ctor_get(v_toApplicative_5645_, 0);
lean_inc_ref(v_toFunctor_5646_);
lean_dec_ref(v_toApplicative_5645_);
v_mapConst_5647_ = lean_ctor_get(v_toFunctor_5646_, 1);
lean_inc(v_mapConst_5647_);
lean_dec_ref(v_toFunctor_5646_);
v___x_5648_ = lean_apply_3(v_inst_5642_, lean_box(0), v_action_5643_, v_prio_5644_);
v___x_5649_ = lean_box(0);
v___x_5650_ = lean_apply_4(v_mapConst_5647_, lean_box(0), lean_box(0), v___x_5649_, v___x_5648_);
return v___x_5650_;
}
}
lean_object* runtime_initialize_Init_System_Promise(uint8_t builtin);
lean_object* runtime_initialize_Init_While(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Std_Async_Basic(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Init_System_Promise(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_While(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Std_Async_Basic(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Init_System_Promise(uint8_t builtin);
lean_object* initialize_Init_While(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Std_Async_Basic(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init_System_Promise(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_While(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Async_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Std_Async_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Std_Async_Basic(builtin);
}
#ifdef __cplusplus
}
#endif
