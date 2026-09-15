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
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_equiv___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_equiv___redArg___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_Async_BaseAsync_equiv___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Async_BaseAsync_equiv___redArg___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Async_BaseAsync_equiv___redArg___closed__0 = (const lean_object*)&l_Std_Async_BaseAsync_equiv___redArg___closed__0_value;
static const lean_ctor_object l_Std_Async_BaseAsync_equiv___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Std_Async_BaseAsync_equiv___redArg___closed__0_value),((lean_object*)&l_Std_Async_BaseAsync_equiv___redArg___closed__0_value)}};
static const lean_object* l_Std_Async_BaseAsync_equiv___redArg___closed__1 = (const lean_object*)&l_Std_Async_BaseAsync_equiv___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_equiv___redArg();
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_equiv___redArg___boxed(lean_object*);
static lean_once_cell_t l_Std_Async_BaseAsync_equiv___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Async_BaseAsync_equiv___closed__0;
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_equiv(lean_object*);
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
LEAN_EXPORT lean_object* l_Std_Async_EAsync_equiv___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_EAsync_equiv___redArg___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_Async_EAsync_equiv___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Async_EAsync_equiv___redArg___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Async_EAsync_equiv___redArg___closed__0 = (const lean_object*)&l_Std_Async_EAsync_equiv___redArg___closed__0_value;
static const lean_ctor_object l_Std_Async_EAsync_equiv___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Std_Async_EAsync_equiv___redArg___closed__0_value),((lean_object*)&l_Std_Async_EAsync_equiv___redArg___closed__0_value)}};
static const lean_object* l_Std_Async_EAsync_equiv___redArg___closed__1 = (const lean_object*)&l_Std_Async_EAsync_equiv___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_Std_Async_EAsync_equiv___redArg();
LEAN_EXPORT lean_object* l_Std_Async_EAsync_equiv___redArg___boxed(lean_object*);
static lean_once_cell_t l_Std_Async_EAsync_equiv___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Async_EAsync_equiv___closed__0;
LEAN_EXPORT lean_object* l_Std_Async_EAsync_equiv(lean_object*, lean_object*);
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
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_equiv___redArg___lam__0(lean_object* v___y_1359_){
_start:
{
lean_object* v___x_1361_; 
v___x_1361_ = lean_apply_1(v___y_1359_, lean_box(0));
return v___x_1361_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_equiv___redArg___lam__0___boxed(lean_object* v___y_1362_, lean_object* v___y_1363_){
_start:
{
lean_object* v_res_1364_; 
v_res_1364_ = l_Std_Async_BaseAsync_equiv___redArg___lam__0(v___y_1362_);
return v_res_1364_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_equiv___redArg(){
_start:
{
lean_object* v___x_1369_; 
v___x_1369_ = ((lean_object*)(l_Std_Async_BaseAsync_equiv___redArg___closed__1));
return v___x_1369_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_equiv___redArg___boxed(lean_object* v___dummy_1370_){
_start:
{
lean_object* v_res_1371_; 
v_res_1371_ = l_Std_Async_BaseAsync_equiv___redArg();
return v_res_1371_;
}
}
static lean_object* _init_l_Std_Async_BaseAsync_equiv___closed__0(void){
_start:
{
lean_object* v___x_1372_; 
v___x_1372_ = l_Std_Async_BaseAsync_equiv___redArg();
return v___x_1372_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_equiv(lean_object* v_00_u03b1_1373_){
_start:
{
lean_object* v___x_1374_; 
v___x_1374_ = lean_obj_once(&l_Std_Async_BaseAsync_equiv___closed__0, &l_Std_Async_BaseAsync_equiv___closed__0_once, _init_l_Std_Async_BaseAsync_equiv___closed__0);
return v___x_1374_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_toBaseIO___redArg(lean_object* v_x_1375_){
_start:
{
lean_object* v___x_1377_; 
v___x_1377_ = lean_apply_1(v_x_1375_, lean_box(0));
if (lean_obj_tag(v___x_1377_) == 0)
{
lean_object* v_a_1378_; lean_object* v___x_1379_; 
v_a_1378_ = lean_ctor_get(v___x_1377_, 0);
lean_inc(v_a_1378_);
lean_dec_ref_known(v___x_1377_, 1);
v___x_1379_ = lean_task_pure(v_a_1378_);
return v___x_1379_;
}
else
{
lean_object* v_a_1380_; 
v_a_1380_ = lean_ctor_get(v___x_1377_, 0);
lean_inc_ref(v_a_1380_);
lean_dec_ref_known(v___x_1377_, 1);
return v_a_1380_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_toBaseIO___redArg___boxed(lean_object* v_x_1381_, lean_object* v___y_1382_){
_start:
{
lean_object* v_res_1383_; 
v_res_1383_ = l_Std_Async_BaseAsync_toBaseIO___redArg(v_x_1381_);
return v_res_1383_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_toBaseIO(lean_object* v_00_u03b1_1384_, lean_object* v_x_1385_){
_start:
{
lean_object* v___x_1387_; 
v___x_1387_ = lean_apply_1(v_x_1385_, lean_box(0));
if (lean_obj_tag(v___x_1387_) == 0)
{
lean_object* v_a_1388_; lean_object* v___x_1389_; 
v_a_1388_ = lean_ctor_get(v___x_1387_, 0);
lean_inc(v_a_1388_);
lean_dec_ref_known(v___x_1387_, 1);
v___x_1389_ = lean_task_pure(v_a_1388_);
return v___x_1389_;
}
else
{
lean_object* v_a_1390_; 
v_a_1390_ = lean_ctor_get(v___x_1387_, 0);
lean_inc_ref(v_a_1390_);
lean_dec_ref_known(v___x_1387_, 1);
return v_a_1390_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_toBaseIO___boxed(lean_object* v_00_u03b1_1391_, lean_object* v_x_1392_, lean_object* v___y_1393_){
_start:
{
lean_object* v_res_1394_; 
v_res_1394_ = l_Std_Async_BaseAsync_toBaseIO(v_00_u03b1_1391_, v_x_1392_);
return v_res_1394_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_ofTask___redArg(lean_object* v_x_1395_){
_start:
{
lean_object* v___x_1397_; 
v___x_1397_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1397_, 0, v_x_1395_);
return v___x_1397_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_ofTask___redArg___boxed(lean_object* v_x_1398_, lean_object* v___y_1399_){
_start:
{
lean_object* v_res_1400_; 
v_res_1400_ = l_Std_Async_BaseAsync_ofTask___redArg(v_x_1398_);
return v_res_1400_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_ofTask(lean_object* v_00_u03b1_1401_, lean_object* v_x_1402_){
_start:
{
lean_object* v___x_1404_; 
v___x_1404_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1404_, 0, v_x_1402_);
return v___x_1404_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_ofTask___boxed(lean_object* v_00_u03b1_1405_, lean_object* v_x_1406_, lean_object* v___y_1407_){
_start:
{
lean_object* v_res_1408_; 
v_res_1408_ = l_Std_Async_BaseAsync_ofTask(v_00_u03b1_1405_, v_x_1406_);
return v_res_1408_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_pure___redArg(lean_object* v_a_1409_){
_start:
{
lean_object* v___x_1411_; 
v___x_1411_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1411_, 0, v_a_1409_);
return v___x_1411_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_pure___redArg___boxed(lean_object* v_a_1412_, lean_object* v___y_1413_){
_start:
{
lean_object* v_res_1414_; 
v_res_1414_ = l_Std_Async_BaseAsync_pure___redArg(v_a_1412_);
return v_res_1414_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_pure(lean_object* v_00_u03b1_1415_, lean_object* v_a_1416_){
_start:
{
lean_object* v___x_1418_; 
v___x_1418_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1418_, 0, v_a_1416_);
return v___x_1418_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_pure___boxed(lean_object* v_00_u03b1_1419_, lean_object* v_a_1420_, lean_object* v___y_1421_){
_start:
{
lean_object* v_res_1422_; 
v_res_1422_ = l_Std_Async_BaseAsync_pure(v_00_u03b1_1419_, v_a_1420_);
return v_res_1422_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_map___redArg(lean_object* v_f_1423_, lean_object* v_self_1424_, lean_object* v_prio_1425_, uint8_t v_sync_1426_){
_start:
{
lean_object* v___x_1428_; 
v___x_1428_ = lean_apply_1(v_self_1424_, lean_box(0));
if (lean_obj_tag(v___x_1428_) == 0)
{
lean_object* v_a_1429_; lean_object* v___x_1431_; uint8_t v_isShared_1432_; uint8_t v_isSharedCheck_1437_; 
lean_dec(v_prio_1425_);
v_a_1429_ = lean_ctor_get(v___x_1428_, 0);
v_isSharedCheck_1437_ = !lean_is_exclusive(v___x_1428_);
if (v_isSharedCheck_1437_ == 0)
{
v___x_1431_ = v___x_1428_;
v_isShared_1432_ = v_isSharedCheck_1437_;
goto v_resetjp_1430_;
}
else
{
lean_inc(v_a_1429_);
lean_dec(v___x_1428_);
v___x_1431_ = lean_box(0);
v_isShared_1432_ = v_isSharedCheck_1437_;
goto v_resetjp_1430_;
}
v_resetjp_1430_:
{
lean_object* v___x_1433_; lean_object* v___x_1435_; 
v___x_1433_ = lean_apply_1(v_f_1423_, v_a_1429_);
if (v_isShared_1432_ == 0)
{
lean_ctor_set(v___x_1431_, 0, v___x_1433_);
v___x_1435_ = v___x_1431_;
goto v_reusejp_1434_;
}
else
{
lean_object* v_reuseFailAlloc_1436_; 
v_reuseFailAlloc_1436_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1436_, 0, v___x_1433_);
v___x_1435_ = v_reuseFailAlloc_1436_;
goto v_reusejp_1434_;
}
v_reusejp_1434_:
{
return v___x_1435_;
}
}
}
else
{
lean_object* v_a_1438_; lean_object* v___x_1440_; uint8_t v_isShared_1441_; uint8_t v_isSharedCheck_1446_; 
v_a_1438_ = lean_ctor_get(v___x_1428_, 0);
v_isSharedCheck_1446_ = !lean_is_exclusive(v___x_1428_);
if (v_isSharedCheck_1446_ == 0)
{
v___x_1440_ = v___x_1428_;
v_isShared_1441_ = v_isSharedCheck_1446_;
goto v_resetjp_1439_;
}
else
{
lean_inc(v_a_1438_);
lean_dec(v___x_1428_);
v___x_1440_ = lean_box(0);
v_isShared_1441_ = v_isSharedCheck_1446_;
goto v_resetjp_1439_;
}
v_resetjp_1439_:
{
lean_object* v___x_1442_; lean_object* v___x_1444_; 
v___x_1442_ = lean_task_map(v_f_1423_, v_a_1438_, v_prio_1425_, v_sync_1426_);
if (v_isShared_1441_ == 0)
{
lean_ctor_set(v___x_1440_, 0, v___x_1442_);
v___x_1444_ = v___x_1440_;
goto v_reusejp_1443_;
}
else
{
lean_object* v_reuseFailAlloc_1445_; 
v_reuseFailAlloc_1445_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1445_, 0, v___x_1442_);
v___x_1444_ = v_reuseFailAlloc_1445_;
goto v_reusejp_1443_;
}
v_reusejp_1443_:
{
return v___x_1444_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_map___redArg___boxed(lean_object* v_f_1447_, lean_object* v_self_1448_, lean_object* v_prio_1449_, lean_object* v_sync_1450_, lean_object* v___y_1451_){
_start:
{
uint8_t v_sync_boxed_1452_; lean_object* v_res_1453_; 
v_sync_boxed_1452_ = lean_unbox(v_sync_1450_);
v_res_1453_ = l_Std_Async_BaseAsync_map___redArg(v_f_1447_, v_self_1448_, v_prio_1449_, v_sync_boxed_1452_);
return v_res_1453_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_map(lean_object* v_00_u03b1_1454_, lean_object* v_00_u03b2_1455_, lean_object* v_f_1456_, lean_object* v_self_1457_, lean_object* v_prio_1458_, uint8_t v_sync_1459_){
_start:
{
lean_object* v___x_1461_; 
v___x_1461_ = lean_apply_1(v_self_1457_, lean_box(0));
if (lean_obj_tag(v___x_1461_) == 0)
{
lean_object* v_a_1462_; lean_object* v___x_1464_; uint8_t v_isShared_1465_; uint8_t v_isSharedCheck_1470_; 
lean_dec(v_prio_1458_);
v_a_1462_ = lean_ctor_get(v___x_1461_, 0);
v_isSharedCheck_1470_ = !lean_is_exclusive(v___x_1461_);
if (v_isSharedCheck_1470_ == 0)
{
v___x_1464_ = v___x_1461_;
v_isShared_1465_ = v_isSharedCheck_1470_;
goto v_resetjp_1463_;
}
else
{
lean_inc(v_a_1462_);
lean_dec(v___x_1461_);
v___x_1464_ = lean_box(0);
v_isShared_1465_ = v_isSharedCheck_1470_;
goto v_resetjp_1463_;
}
v_resetjp_1463_:
{
lean_object* v___x_1466_; lean_object* v___x_1468_; 
v___x_1466_ = lean_apply_1(v_f_1456_, v_a_1462_);
if (v_isShared_1465_ == 0)
{
lean_ctor_set(v___x_1464_, 0, v___x_1466_);
v___x_1468_ = v___x_1464_;
goto v_reusejp_1467_;
}
else
{
lean_object* v_reuseFailAlloc_1469_; 
v_reuseFailAlloc_1469_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1469_, 0, v___x_1466_);
v___x_1468_ = v_reuseFailAlloc_1469_;
goto v_reusejp_1467_;
}
v_reusejp_1467_:
{
return v___x_1468_;
}
}
}
else
{
lean_object* v_a_1471_; lean_object* v___x_1473_; uint8_t v_isShared_1474_; uint8_t v_isSharedCheck_1479_; 
v_a_1471_ = lean_ctor_get(v___x_1461_, 0);
v_isSharedCheck_1479_ = !lean_is_exclusive(v___x_1461_);
if (v_isSharedCheck_1479_ == 0)
{
v___x_1473_ = v___x_1461_;
v_isShared_1474_ = v_isSharedCheck_1479_;
goto v_resetjp_1472_;
}
else
{
lean_inc(v_a_1471_);
lean_dec(v___x_1461_);
v___x_1473_ = lean_box(0);
v_isShared_1474_ = v_isSharedCheck_1479_;
goto v_resetjp_1472_;
}
v_resetjp_1472_:
{
lean_object* v___x_1475_; lean_object* v___x_1477_; 
v___x_1475_ = lean_task_map(v_f_1456_, v_a_1471_, v_prio_1458_, v_sync_1459_);
if (v_isShared_1474_ == 0)
{
lean_ctor_set(v___x_1473_, 0, v___x_1475_);
v___x_1477_ = v___x_1473_;
goto v_reusejp_1476_;
}
else
{
lean_object* v_reuseFailAlloc_1478_; 
v_reuseFailAlloc_1478_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1478_, 0, v___x_1475_);
v___x_1477_ = v_reuseFailAlloc_1478_;
goto v_reusejp_1476_;
}
v_reusejp_1476_:
{
return v___x_1477_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_map___boxed(lean_object* v_00_u03b1_1480_, lean_object* v_00_u03b2_1481_, lean_object* v_f_1482_, lean_object* v_self_1483_, lean_object* v_prio_1484_, lean_object* v_sync_1485_, lean_object* v___y_1486_){
_start:
{
uint8_t v_sync_boxed_1487_; lean_object* v_res_1488_; 
v_sync_boxed_1487_ = lean_unbox(v_sync_1485_);
v_res_1488_ = l_Std_Async_BaseAsync_map(v_00_u03b1_1480_, v_00_u03b2_1481_, v_f_1482_, v_self_1483_, v_prio_1484_, v_sync_boxed_1487_);
return v_res_1488_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg___lam__0(lean_object* v_f_1489_, lean_object* v_a_1490_){
_start:
{
lean_object* v___x_1492_; 
v___x_1492_ = lean_apply_2(v_f_1489_, v_a_1490_, lean_box(0));
if (lean_obj_tag(v___x_1492_) == 0)
{
lean_object* v_a_1493_; lean_object* v___x_1494_; 
v_a_1493_ = lean_ctor_get(v___x_1492_, 0);
lean_inc(v_a_1493_);
lean_dec_ref_known(v___x_1492_, 1);
v___x_1494_ = lean_task_pure(v_a_1493_);
return v___x_1494_;
}
else
{
lean_object* v_a_1495_; 
v_a_1495_ = lean_ctor_get(v___x_1492_, 0);
lean_inc_ref(v_a_1495_);
lean_dec_ref_known(v___x_1492_, 1);
return v_a_1495_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg___lam__0___boxed(lean_object* v_f_1496_, lean_object* v_a_1497_, lean_object* v___y_1498_){
_start:
{
lean_object* v_res_1499_; 
v_res_1499_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg___lam__0(v_f_1496_, v_a_1497_);
return v_res_1499_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(lean_object* v_prio_1500_, uint8_t v_sync_1501_, lean_object* v_t_1502_, lean_object* v_f_1503_){
_start:
{
if (lean_obj_tag(v_t_1502_) == 0)
{
lean_object* v_a_1505_; lean_object* v___x_1506_; 
lean_dec(v_prio_1500_);
v_a_1505_ = lean_ctor_get(v_t_1502_, 0);
lean_inc(v_a_1505_);
lean_dec_ref_known(v_t_1502_, 1);
v___x_1506_ = lean_apply_2(v_f_1503_, v_a_1505_, lean_box(0));
return v___x_1506_;
}
else
{
lean_object* v_a_1507_; lean_object* v___x_1509_; uint8_t v_isShared_1510_; uint8_t v_isSharedCheck_1516_; 
v_a_1507_ = lean_ctor_get(v_t_1502_, 0);
v_isSharedCheck_1516_ = !lean_is_exclusive(v_t_1502_);
if (v_isSharedCheck_1516_ == 0)
{
v___x_1509_ = v_t_1502_;
v_isShared_1510_ = v_isSharedCheck_1516_;
goto v_resetjp_1508_;
}
else
{
lean_inc(v_a_1507_);
lean_dec(v_t_1502_);
v___x_1509_ = lean_box(0);
v_isShared_1510_ = v_isSharedCheck_1516_;
goto v_resetjp_1508_;
}
v_resetjp_1508_:
{
lean_object* v___f_1511_; lean_object* v___x_1512_; lean_object* v___x_1514_; 
v___f_1511_ = lean_alloc_closure((void*)(l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_1511_, 0, v_f_1503_);
v___x_1512_ = lean_io_bind_task(v_a_1507_, v___f_1511_, v_prio_1500_, v_sync_1501_);
if (v_isShared_1510_ == 0)
{
lean_ctor_set(v___x_1509_, 0, v___x_1512_);
v___x_1514_ = v___x_1509_;
goto v_reusejp_1513_;
}
else
{
lean_object* v_reuseFailAlloc_1515_; 
v_reuseFailAlloc_1515_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1515_, 0, v___x_1512_);
v___x_1514_ = v_reuseFailAlloc_1515_;
goto v_reusejp_1513_;
}
v_reusejp_1513_:
{
return v___x_1514_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg___boxed(lean_object* v_prio_1517_, lean_object* v_sync_1518_, lean_object* v_t_1519_, lean_object* v_f_1520_, lean_object* v___y_1521_){
_start:
{
uint8_t v_sync_boxed_1522_; lean_object* v_res_1523_; 
v_sync_boxed_1522_ = lean_unbox(v_sync_1518_);
v_res_1523_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v_prio_1517_, v_sync_boxed_1522_, v_t_1519_, v_f_1520_);
return v_res_1523_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_object* v_00_u03b1_1524_, lean_object* v_00_u03b2_1525_, lean_object* v_prio_1526_, uint8_t v_sync_1527_, lean_object* v_t_1528_, lean_object* v_f_1529_){
_start:
{
lean_object* v___x_1531_; 
v___x_1531_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v_prio_1526_, v_sync_1527_, v_t_1528_, v_f_1529_);
return v___x_1531_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___boxed(lean_object* v_00_u03b1_1532_, lean_object* v_00_u03b2_1533_, lean_object* v_prio_1534_, lean_object* v_sync_1535_, lean_object* v_t_1536_, lean_object* v_f_1537_, lean_object* v___y_1538_){
_start:
{
uint8_t v_sync_boxed_1539_; lean_object* v_res_1540_; 
v_sync_boxed_1539_ = lean_unbox(v_sync_1535_);
v_res_1540_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(v_00_u03b1_1532_, v_00_u03b2_1533_, v_prio_1534_, v_sync_boxed_1539_, v_t_1536_, v_f_1537_);
return v_res_1540_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_bind___redArg(lean_object* v_self_1541_, lean_object* v_f_1542_, lean_object* v_prio_1543_, uint8_t v_sync_1544_){
_start:
{
lean_object* v___x_1546_; lean_object* v___x_1547_; 
v___x_1546_ = lean_apply_1(v_self_1541_, lean_box(0));
v___x_1547_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v_prio_1543_, v_sync_1544_, v___x_1546_, v_f_1542_);
return v___x_1547_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_bind___redArg___boxed(lean_object* v_self_1548_, lean_object* v_f_1549_, lean_object* v_prio_1550_, lean_object* v_sync_1551_, lean_object* v___y_1552_){
_start:
{
uint8_t v_sync_boxed_1553_; lean_object* v_res_1554_; 
v_sync_boxed_1553_ = lean_unbox(v_sync_1551_);
v_res_1554_ = l_Std_Async_BaseAsync_bind___redArg(v_self_1548_, v_f_1549_, v_prio_1550_, v_sync_boxed_1553_);
return v_res_1554_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_bind(lean_object* v_00_u03b1_1555_, lean_object* v_00_u03b2_1556_, lean_object* v_self_1557_, lean_object* v_f_1558_, lean_object* v_prio_1559_, uint8_t v_sync_1560_){
_start:
{
lean_object* v___x_1562_; lean_object* v___x_1563_; 
v___x_1562_ = lean_apply_1(v_self_1557_, lean_box(0));
v___x_1563_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v_prio_1559_, v_sync_1560_, v___x_1562_, v_f_1558_);
return v___x_1563_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_bind___boxed(lean_object* v_00_u03b1_1564_, lean_object* v_00_u03b2_1565_, lean_object* v_self_1566_, lean_object* v_f_1567_, lean_object* v_prio_1568_, lean_object* v_sync_1569_, lean_object* v___y_1570_){
_start:
{
uint8_t v_sync_boxed_1571_; lean_object* v_res_1572_; 
v_sync_boxed_1571_ = lean_unbox(v_sync_1569_);
v_res_1572_ = l_Std_Async_BaseAsync_bind(v_00_u03b1_1564_, v_00_u03b2_1565_, v_self_1566_, v_f_1567_, v_prio_1568_, v_sync_boxed_1571_);
return v_res_1572_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_lift___redArg(lean_object* v_x_1573_){
_start:
{
lean_object* v___x_1575_; lean_object* v___x_1576_; 
v___x_1575_ = lean_apply_1(v_x_1573_, lean_box(0));
v___x_1576_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1576_, 0, v___x_1575_);
return v___x_1576_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_lift___redArg___boxed(lean_object* v_x_1577_, lean_object* v___y_1578_){
_start:
{
lean_object* v_res_1579_; 
v_res_1579_ = l_Std_Async_BaseAsync_lift___redArg(v_x_1577_);
return v_res_1579_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_lift(lean_object* v_00_u03b1_1580_, lean_object* v_x_1581_){
_start:
{
lean_object* v___x_1583_; lean_object* v___x_1584_; 
v___x_1583_ = lean_apply_1(v_x_1581_, lean_box(0));
v___x_1584_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1584_, 0, v___x_1583_);
return v___x_1584_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_lift___boxed(lean_object* v_00_u03b1_1585_, lean_object* v_x_1586_, lean_object* v___y_1587_){
_start:
{
lean_object* v_res_1588_; 
v_res_1588_ = l_Std_Async_BaseAsync_lift(v_00_u03b1_1585_, v_x_1586_);
return v_res_1588_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_wait___redArg(lean_object* v_self_1589_){
_start:
{
lean_object* v_val_1592_; lean_object* v___x_1594_; 
v___x_1594_ = lean_apply_1(v_self_1589_, lean_box(0));
if (lean_obj_tag(v___x_1594_) == 0)
{
lean_object* v_a_1595_; lean_object* v___x_1596_; 
v_a_1595_ = lean_ctor_get(v___x_1594_, 0);
lean_inc(v_a_1595_);
lean_dec_ref_known(v___x_1594_, 1);
v___x_1596_ = lean_task_pure(v_a_1595_);
v_val_1592_ = v___x_1596_;
goto v___jp_1591_;
}
else
{
lean_object* v_a_1597_; 
v_a_1597_ = lean_ctor_get(v___x_1594_, 0);
lean_inc_ref(v_a_1597_);
lean_dec_ref_known(v___x_1594_, 1);
v_val_1592_ = v_a_1597_;
goto v___jp_1591_;
}
v___jp_1591_:
{
lean_object* v___x_1593_; 
v___x_1593_ = lean_task_get_own(v_val_1592_);
return v___x_1593_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_wait___redArg___boxed(lean_object* v_self_1598_, lean_object* v___y_1599_){
_start:
{
lean_object* v_res_1600_; 
v_res_1600_ = l_Std_Async_BaseAsync_wait___redArg(v_self_1598_);
return v_res_1600_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_wait(lean_object* v_00_u03b1_1601_, lean_object* v_self_1602_){
_start:
{
lean_object* v_val_1605_; lean_object* v___x_1607_; 
v___x_1607_ = lean_apply_1(v_self_1602_, lean_box(0));
if (lean_obj_tag(v___x_1607_) == 0)
{
lean_object* v_a_1608_; lean_object* v___x_1609_; 
v_a_1608_ = lean_ctor_get(v___x_1607_, 0);
lean_inc(v_a_1608_);
lean_dec_ref_known(v___x_1607_, 1);
v___x_1609_ = lean_task_pure(v_a_1608_);
v_val_1605_ = v___x_1609_;
goto v___jp_1604_;
}
else
{
lean_object* v_a_1610_; 
v_a_1610_ = lean_ctor_get(v___x_1607_, 0);
lean_inc_ref(v_a_1610_);
lean_dec_ref_known(v___x_1607_, 1);
v_val_1605_ = v_a_1610_;
goto v___jp_1604_;
}
v___jp_1604_:
{
lean_object* v___x_1606_; 
v___x_1606_ = lean_task_get_own(v_val_1605_);
return v___x_1606_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_wait___boxed(lean_object* v_00_u03b1_1611_, lean_object* v_self_1612_, lean_object* v___y_1613_){
_start:
{
lean_object* v_res_1614_; 
v_res_1614_ = l_Std_Async_BaseAsync_wait(v_00_u03b1_1611_, v_self_1612_);
return v_res_1614_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_asTask___redArg(lean_object* v_x_1615_, lean_object* v_prio_1616_){
_start:
{
lean_object* v___f_1618_; lean_object* v___x_1619_; lean_object* v___x_1620_; lean_object* v___x_1621_; uint8_t v___x_1622_; lean_object* v___x_1623_; 
v___f_1618_ = ((lean_object*)(l_Std_Async_MaybeTask_joinTask___redArg___closed__0));
v___x_1619_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_toRawBaseIO___boxed), 3, 2);
lean_closure_set(v___x_1619_, 0, lean_box(0));
lean_closure_set(v___x_1619_, 1, v_x_1615_);
v___x_1620_ = lean_io_as_task(v___x_1619_, v_prio_1616_);
v___x_1621_ = lean_unsigned_to_nat(0u);
v___x_1622_ = 1;
v___x_1623_ = lean_task_bind(v___x_1620_, v___f_1618_, v___x_1621_, v___x_1622_);
return v___x_1623_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_asTask___redArg___boxed(lean_object* v_x_1624_, lean_object* v_prio_1625_, lean_object* v___y_1626_){
_start:
{
lean_object* v_res_1627_; 
v_res_1627_ = l_Std_Async_BaseAsync_asTask___redArg(v_x_1624_, v_prio_1625_);
return v_res_1627_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_asTask(lean_object* v_00_u03b1_1628_, lean_object* v_x_1629_, lean_object* v_prio_1630_){
_start:
{
lean_object* v___f_1632_; lean_object* v___x_1633_; lean_object* v___x_1634_; lean_object* v___x_1635_; uint8_t v___x_1636_; lean_object* v___x_1637_; 
v___f_1632_ = ((lean_object*)(l_Std_Async_MaybeTask_joinTask___redArg___closed__0));
v___x_1633_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_toRawBaseIO___boxed), 3, 2);
lean_closure_set(v___x_1633_, 0, lean_box(0));
lean_closure_set(v___x_1633_, 1, v_x_1629_);
v___x_1634_ = lean_io_as_task(v___x_1633_, v_prio_1630_);
v___x_1635_ = lean_unsigned_to_nat(0u);
v___x_1636_ = 1;
v___x_1637_ = lean_task_bind(v___x_1634_, v___f_1632_, v___x_1635_, v___x_1636_);
return v___x_1637_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_asTask___boxed(lean_object* v_00_u03b1_1638_, lean_object* v_x_1639_, lean_object* v_prio_1640_, lean_object* v___y_1641_){
_start:
{
lean_object* v_res_1642_; 
v_res_1642_ = l_Std_Async_BaseAsync_asTask(v_00_u03b1_1638_, v_x_1639_, v_prio_1640_);
return v_res_1642_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_await___redArg(lean_object* v_t_1643_){
_start:
{
lean_object* v___x_1645_; 
v___x_1645_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1645_, 0, v_t_1643_);
return v___x_1645_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_await___redArg___boxed(lean_object* v_t_1646_, lean_object* v___y_1647_){
_start:
{
lean_object* v_res_1648_; 
v_res_1648_ = l_Std_Async_BaseAsync_await___redArg(v_t_1646_);
return v_res_1648_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_await(lean_object* v_00_u03b1_1649_, lean_object* v_t_1650_){
_start:
{
lean_object* v___x_1652_; 
v___x_1652_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1652_, 0, v_t_1650_);
return v___x_1652_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_await___boxed(lean_object* v_00_u03b1_1653_, lean_object* v_t_1654_, lean_object* v___y_1655_){
_start:
{
lean_object* v_res_1656_; 
v_res_1656_ = l_Std_Async_BaseAsync_await(v_00_u03b1_1653_, v_t_1654_);
return v_res_1656_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_async___redArg(lean_object* v_self_1657_, lean_object* v_prio_1658_){
_start:
{
lean_object* v___f_1660_; lean_object* v___x_1661_; lean_object* v___x_1662_; lean_object* v___x_1663_; uint8_t v___x_1664_; lean_object* v___x_1665_; lean_object* v___x_1666_; 
v___f_1660_ = ((lean_object*)(l_Std_Async_MaybeTask_joinTask___redArg___closed__0));
v___x_1661_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_toRawBaseIO___boxed), 3, 2);
lean_closure_set(v___x_1661_, 0, lean_box(0));
lean_closure_set(v___x_1661_, 1, v_self_1657_);
v___x_1662_ = lean_io_as_task(v___x_1661_, v_prio_1658_);
v___x_1663_ = lean_unsigned_to_nat(0u);
v___x_1664_ = 1;
v___x_1665_ = lean_task_bind(v___x_1662_, v___f_1660_, v___x_1663_, v___x_1664_);
v___x_1666_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1666_, 0, v___x_1665_);
return v___x_1666_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_async___redArg___boxed(lean_object* v_self_1667_, lean_object* v_prio_1668_, lean_object* v___y_1669_){
_start:
{
lean_object* v_res_1670_; 
v_res_1670_ = l_Std_Async_BaseAsync_async___redArg(v_self_1667_, v_prio_1668_);
return v_res_1670_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_async(lean_object* v_00_u03b1_1671_, lean_object* v_self_1672_, lean_object* v_prio_1673_){
_start:
{
lean_object* v___f_1675_; lean_object* v___x_1676_; lean_object* v___x_1677_; lean_object* v___x_1678_; uint8_t v___x_1679_; lean_object* v___x_1680_; lean_object* v___x_1681_; 
v___f_1675_ = ((lean_object*)(l_Std_Async_MaybeTask_joinTask___redArg___closed__0));
v___x_1676_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_toRawBaseIO___boxed), 3, 2);
lean_closure_set(v___x_1676_, 0, lean_box(0));
lean_closure_set(v___x_1676_, 1, v_self_1672_);
v___x_1677_ = lean_io_as_task(v___x_1676_, v_prio_1673_);
v___x_1678_ = lean_unsigned_to_nat(0u);
v___x_1679_ = 1;
v___x_1680_ = lean_task_bind(v___x_1677_, v___f_1675_, v___x_1678_, v___x_1679_);
v___x_1681_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1681_, 0, v___x_1680_);
return v___x_1681_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_async___boxed(lean_object* v_00_u03b1_1682_, lean_object* v_self_1683_, lean_object* v_prio_1684_, lean_object* v___y_1685_){
_start:
{
lean_object* v_res_1686_; 
v_res_1686_ = l_Std_Async_BaseAsync_async(v_00_u03b1_1682_, v_self_1683_, v_prio_1684_);
return v_res_1686_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_instFunctor___lam__0(lean_object* v_00_u03b1_1687_, lean_object* v_00_u03b2_1688_, lean_object* v_f_1689_, lean_object* v_self_1690_){
_start:
{
lean_object* v___x_1692_; uint8_t v___x_1693_; lean_object* v___x_1694_; 
v___x_1692_ = lean_unsigned_to_nat(0u);
v___x_1693_ = 0;
v___x_1694_ = lean_apply_1(v_self_1690_, lean_box(0));
if (lean_obj_tag(v___x_1694_) == 0)
{
lean_object* v_a_1695_; lean_object* v___x_1697_; uint8_t v_isShared_1698_; uint8_t v_isSharedCheck_1703_; 
v_a_1695_ = lean_ctor_get(v___x_1694_, 0);
v_isSharedCheck_1703_ = !lean_is_exclusive(v___x_1694_);
if (v_isSharedCheck_1703_ == 0)
{
v___x_1697_ = v___x_1694_;
v_isShared_1698_ = v_isSharedCheck_1703_;
goto v_resetjp_1696_;
}
else
{
lean_inc(v_a_1695_);
lean_dec(v___x_1694_);
v___x_1697_ = lean_box(0);
v_isShared_1698_ = v_isSharedCheck_1703_;
goto v_resetjp_1696_;
}
v_resetjp_1696_:
{
lean_object* v___x_1699_; lean_object* v___x_1701_; 
v___x_1699_ = lean_apply_1(v_f_1689_, v_a_1695_);
if (v_isShared_1698_ == 0)
{
lean_ctor_set(v___x_1697_, 0, v___x_1699_);
v___x_1701_ = v___x_1697_;
goto v_reusejp_1700_;
}
else
{
lean_object* v_reuseFailAlloc_1702_; 
v_reuseFailAlloc_1702_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1702_, 0, v___x_1699_);
v___x_1701_ = v_reuseFailAlloc_1702_;
goto v_reusejp_1700_;
}
v_reusejp_1700_:
{
return v___x_1701_;
}
}
}
else
{
lean_object* v_a_1704_; lean_object* v___x_1706_; uint8_t v_isShared_1707_; uint8_t v_isSharedCheck_1712_; 
v_a_1704_ = lean_ctor_get(v___x_1694_, 0);
v_isSharedCheck_1712_ = !lean_is_exclusive(v___x_1694_);
if (v_isSharedCheck_1712_ == 0)
{
v___x_1706_ = v___x_1694_;
v_isShared_1707_ = v_isSharedCheck_1712_;
goto v_resetjp_1705_;
}
else
{
lean_inc(v_a_1704_);
lean_dec(v___x_1694_);
v___x_1706_ = lean_box(0);
v_isShared_1707_ = v_isSharedCheck_1712_;
goto v_resetjp_1705_;
}
v_resetjp_1705_:
{
lean_object* v___x_1708_; lean_object* v___x_1710_; 
v___x_1708_ = lean_task_map(v_f_1689_, v_a_1704_, v___x_1692_, v___x_1693_);
if (v_isShared_1707_ == 0)
{
lean_ctor_set(v___x_1706_, 0, v___x_1708_);
v___x_1710_ = v___x_1706_;
goto v_reusejp_1709_;
}
else
{
lean_object* v_reuseFailAlloc_1711_; 
v_reuseFailAlloc_1711_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1711_, 0, v___x_1708_);
v___x_1710_ = v_reuseFailAlloc_1711_;
goto v_reusejp_1709_;
}
v_reusejp_1709_:
{
return v___x_1710_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_instFunctor___lam__0___boxed(lean_object* v_00_u03b1_1713_, lean_object* v_00_u03b2_1714_, lean_object* v_f_1715_, lean_object* v_self_1716_, lean_object* v___y_1717_){
_start:
{
lean_object* v_res_1718_; 
v_res_1718_ = l_Std_Async_BaseAsync_instFunctor___lam__0(v_00_u03b1_1713_, v_00_u03b2_1714_, v_f_1715_, v_self_1716_);
return v_res_1718_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_instFunctor___lam__1(lean_object* v___f_1719_, lean_object* v_00_u03b1_1720_, lean_object* v_00_u03b2_1721_, lean_object* v___y_1722_, lean_object* v___y_1723_){
_start:
{
lean_object* v___x_1725_; lean_object* v___x_1726_; 
v___x_1725_ = lean_alloc_closure((void*)(l_Function_const___boxed), 4, 3);
lean_closure_set(v___x_1725_, 0, lean_box(0));
lean_closure_set(v___x_1725_, 1, lean_box(0));
lean_closure_set(v___x_1725_, 2, v___y_1722_);
v___x_1726_ = lean_apply_5(v___f_1719_, lean_box(0), lean_box(0), v___x_1725_, v___y_1723_, lean_box(0));
return v___x_1726_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_instFunctor___lam__1___boxed(lean_object* v___f_1727_, lean_object* v_00_u03b1_1728_, lean_object* v_00_u03b2_1729_, lean_object* v___y_1730_, lean_object* v___y_1731_, lean_object* v___y_1732_){
_start:
{
lean_object* v_res_1733_; 
v_res_1733_ = l_Std_Async_BaseAsync_instFunctor___lam__1(v___f_1727_, v_00_u03b1_1728_, v_00_u03b2_1729_, v___y_1730_, v___y_1731_);
return v_res_1733_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_instMonad___lam__0(lean_object* v_x_1741_, lean_object* v_y_1742_){
_start:
{
lean_object* v___x_1744_; lean_object* v___x_1745_; uint8_t v___x_1746_; lean_object* v___x_1747_; 
v___x_1744_ = lean_box(0);
v___x_1745_ = lean_unsigned_to_nat(0u);
v___x_1746_ = 0;
v___x_1747_ = lean_apply_2(v_x_1741_, v___x_1744_, lean_box(0));
if (lean_obj_tag(v___x_1747_) == 0)
{
lean_object* v_a_1748_; lean_object* v___x_1750_; uint8_t v_isShared_1751_; uint8_t v_isSharedCheck_1756_; 
v_a_1748_ = lean_ctor_get(v___x_1747_, 0);
v_isSharedCheck_1756_ = !lean_is_exclusive(v___x_1747_);
if (v_isSharedCheck_1756_ == 0)
{
v___x_1750_ = v___x_1747_;
v_isShared_1751_ = v_isSharedCheck_1756_;
goto v_resetjp_1749_;
}
else
{
lean_inc(v_a_1748_);
lean_dec(v___x_1747_);
v___x_1750_ = lean_box(0);
v_isShared_1751_ = v_isSharedCheck_1756_;
goto v_resetjp_1749_;
}
v_resetjp_1749_:
{
lean_object* v___x_1752_; lean_object* v___x_1754_; 
v___x_1752_ = lean_apply_1(v_y_1742_, v_a_1748_);
if (v_isShared_1751_ == 0)
{
lean_ctor_set(v___x_1750_, 0, v___x_1752_);
v___x_1754_ = v___x_1750_;
goto v_reusejp_1753_;
}
else
{
lean_object* v_reuseFailAlloc_1755_; 
v_reuseFailAlloc_1755_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1755_, 0, v___x_1752_);
v___x_1754_ = v_reuseFailAlloc_1755_;
goto v_reusejp_1753_;
}
v_reusejp_1753_:
{
return v___x_1754_;
}
}
}
else
{
lean_object* v_a_1757_; lean_object* v___x_1759_; uint8_t v_isShared_1760_; uint8_t v_isSharedCheck_1765_; 
v_a_1757_ = lean_ctor_get(v___x_1747_, 0);
v_isSharedCheck_1765_ = !lean_is_exclusive(v___x_1747_);
if (v_isSharedCheck_1765_ == 0)
{
v___x_1759_ = v___x_1747_;
v_isShared_1760_ = v_isSharedCheck_1765_;
goto v_resetjp_1758_;
}
else
{
lean_inc(v_a_1757_);
lean_dec(v___x_1747_);
v___x_1759_ = lean_box(0);
v_isShared_1760_ = v_isSharedCheck_1765_;
goto v_resetjp_1758_;
}
v_resetjp_1758_:
{
lean_object* v___x_1761_; lean_object* v___x_1763_; 
v___x_1761_ = lean_task_map(v_y_1742_, v_a_1757_, v___x_1745_, v___x_1746_);
if (v_isShared_1760_ == 0)
{
lean_ctor_set(v___x_1759_, 0, v___x_1761_);
v___x_1763_ = v___x_1759_;
goto v_reusejp_1762_;
}
else
{
lean_object* v_reuseFailAlloc_1764_; 
v_reuseFailAlloc_1764_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1764_, 0, v___x_1761_);
v___x_1763_ = v_reuseFailAlloc_1764_;
goto v_reusejp_1762_;
}
v_reusejp_1762_:
{
return v___x_1763_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_instMonad___lam__0___boxed(lean_object* v_x_1766_, lean_object* v_y_1767_, lean_object* v___y_1768_){
_start:
{
lean_object* v_res_1769_; 
v_res_1769_ = l_Std_Async_BaseAsync_instMonad___lam__0(v_x_1766_, v_y_1767_);
return v_res_1769_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_instMonad___lam__1(lean_object* v_00_u03b1_1770_, lean_object* v_00_u03b2_1771_, lean_object* v_f_1772_, lean_object* v_x_1773_){
_start:
{
lean_object* v___f_1775_; lean_object* v___x_1776_; uint8_t v___x_1777_; lean_object* v___x_1778_; lean_object* v___x_1779_; 
v___f_1775_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_instMonad___lam__0___boxed), 3, 1);
lean_closure_set(v___f_1775_, 0, v_x_1773_);
v___x_1776_ = lean_unsigned_to_nat(0u);
v___x_1777_ = 0;
v___x_1778_ = lean_apply_1(v_f_1772_, lean_box(0));
v___x_1779_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1776_, v___x_1777_, v___x_1778_, v___f_1775_);
return v___x_1779_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_instMonad___lam__1___boxed(lean_object* v_00_u03b1_1780_, lean_object* v_00_u03b2_1781_, lean_object* v_f_1782_, lean_object* v_x_1783_, lean_object* v___y_1784_){
_start:
{
lean_object* v_res_1785_; 
v_res_1785_ = l_Std_Async_BaseAsync_instMonad___lam__1(v_00_u03b1_1780_, v_00_u03b2_1781_, v_f_1782_, v_x_1783_);
return v_res_1785_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_instMonad___lam__2(lean_object* v_00_u03b1_1786_, lean_object* v_00_u03b2_1787_, lean_object* v_self_1788_, lean_object* v_f_1789_){
_start:
{
lean_object* v___x_1791_; uint8_t v___x_1792_; lean_object* v___x_1793_; lean_object* v___x_1794_; 
v___x_1791_ = lean_unsigned_to_nat(0u);
v___x_1792_ = 0;
v___x_1793_ = lean_apply_1(v_self_1788_, lean_box(0));
v___x_1794_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1791_, v___x_1792_, v___x_1793_, v_f_1789_);
return v___x_1794_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_instMonad___lam__2___boxed(lean_object* v_00_u03b1_1795_, lean_object* v_00_u03b2_1796_, lean_object* v_self_1797_, lean_object* v_f_1798_, lean_object* v___y_1799_){
_start:
{
lean_object* v_res_1800_; 
v_res_1800_ = l_Std_Async_BaseAsync_instMonad___lam__2(v_00_u03b1_1795_, v_00_u03b2_1796_, v_self_1797_, v_f_1798_);
return v_res_1800_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_instMonad___lam__3(lean_object* v_a_1801_, lean_object* v_x_1802_){
_start:
{
lean_object* v___x_1804_; 
v___x_1804_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1804_, 0, v_a_1801_);
return v___x_1804_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_instMonad___lam__3___boxed(lean_object* v_a_1805_, lean_object* v_x_1806_, lean_object* v___y_1807_){
_start:
{
lean_object* v_res_1808_; 
v_res_1808_ = l_Std_Async_BaseAsync_instMonad___lam__3(v_a_1805_, v_x_1806_);
lean_dec(v_x_1806_);
return v_res_1808_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_instMonad___lam__4(lean_object* v_y_1809_, lean_object* v___f_1810_, lean_object* v_a_1811_){
_start:
{
lean_object* v___f_1813_; lean_object* v___x_1814_; lean_object* v___x_1815_; lean_object* v___x_1816_; 
v___f_1813_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_instMonad___lam__3___boxed), 3, 1);
lean_closure_set(v___f_1813_, 0, v_a_1811_);
v___x_1814_ = lean_box(0);
v___x_1815_ = lean_apply_1(v_y_1809_, v___x_1814_);
v___x_1816_ = lean_apply_5(v___f_1810_, lean_box(0), lean_box(0), v___x_1815_, v___f_1813_, lean_box(0));
return v___x_1816_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_instMonad___lam__4___boxed(lean_object* v_y_1817_, lean_object* v___f_1818_, lean_object* v_a_1819_, lean_object* v___y_1820_){
_start:
{
lean_object* v_res_1821_; 
v_res_1821_ = l_Std_Async_BaseAsync_instMonad___lam__4(v_y_1817_, v___f_1818_, v_a_1819_);
return v_res_1821_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_instMonad___lam__5(lean_object* v___f_1822_, lean_object* v_00_u03b1_1823_, lean_object* v_00_u03b2_1824_, lean_object* v_x_1825_, lean_object* v_y_1826_){
_start:
{
lean_object* v___f_1828_; lean_object* v___x_1829_; 
lean_inc_ref(v___f_1822_);
v___f_1828_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_instMonad___lam__4___boxed), 4, 2);
lean_closure_set(v___f_1828_, 0, v_y_1826_);
lean_closure_set(v___f_1828_, 1, v___f_1822_);
v___x_1829_ = lean_apply_5(v___f_1822_, lean_box(0), lean_box(0), v_x_1825_, v___f_1828_, lean_box(0));
return v___x_1829_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_instMonad___lam__5___boxed(lean_object* v___f_1830_, lean_object* v_00_u03b1_1831_, lean_object* v_00_u03b2_1832_, lean_object* v_x_1833_, lean_object* v_y_1834_, lean_object* v___y_1835_){
_start:
{
lean_object* v_res_1836_; 
v_res_1836_ = l_Std_Async_BaseAsync_instMonad___lam__5(v___f_1830_, v_00_u03b1_1831_, v_00_u03b2_1832_, v_x_1833_, v_y_1834_);
return v_res_1836_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_instMonad___lam__6(lean_object* v_y_1837_, lean_object* v_x_1838_){
_start:
{
lean_object* v___x_1840_; lean_object* v___x_1841_; 
v___x_1840_ = lean_box(0);
v___x_1841_ = lean_apply_2(v_y_1837_, v___x_1840_, lean_box(0));
return v___x_1841_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_instMonad___lam__6___boxed(lean_object* v_y_1842_, lean_object* v_x_1843_, lean_object* v___y_1844_){
_start:
{
lean_object* v_res_1845_; 
v_res_1845_ = l_Std_Async_BaseAsync_instMonad___lam__6(v_y_1842_, v_x_1843_);
lean_dec(v_x_1843_);
return v_res_1845_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_instMonad___lam__7(lean_object* v_00_u03b1_1846_, lean_object* v_00_u03b2_1847_, lean_object* v_x_1848_, lean_object* v_y_1849_){
_start:
{
lean_object* v___f_1851_; lean_object* v___x_1852_; uint8_t v___x_1853_; lean_object* v___x_1854_; lean_object* v___x_1855_; 
v___f_1851_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_instMonad___lam__6___boxed), 3, 1);
lean_closure_set(v___f_1851_, 0, v_y_1849_);
v___x_1852_ = lean_unsigned_to_nat(0u);
v___x_1853_ = 0;
v___x_1854_ = lean_apply_1(v_x_1848_, lean_box(0));
v___x_1855_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1852_, v___x_1853_, v___x_1854_, v___f_1851_);
return v___x_1855_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_instMonad___lam__7___boxed(lean_object* v_00_u03b1_1856_, lean_object* v_00_u03b2_1857_, lean_object* v_x_1858_, lean_object* v_y_1859_, lean_object* v___y_1860_){
_start:
{
lean_object* v_res_1861_; 
v_res_1861_ = l_Std_Async_BaseAsync_instMonad___lam__7(v_00_u03b1_1856_, v_00_u03b2_1857_, v_x_1858_, v_y_1859_);
return v_res_1861_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_instMonadAsyncTask___lam__1(lean_object* v___f_1882_, lean_object* v_00_u03b1_1883_, lean_object* v_t_1884_, lean_object* v_prio_1885_){
_start:
{
lean_object* v___x_1887_; lean_object* v___x_1888_; lean_object* v___x_1889_; uint8_t v___x_1890_; lean_object* v___x_1891_; lean_object* v___x_1892_; 
v___x_1887_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_toRawBaseIO___boxed), 3, 2);
lean_closure_set(v___x_1887_, 0, lean_box(0));
lean_closure_set(v___x_1887_, 1, v_t_1884_);
v___x_1888_ = lean_io_as_task(v___x_1887_, v_prio_1885_);
v___x_1889_ = lean_unsigned_to_nat(0u);
v___x_1890_ = 1;
v___x_1891_ = lean_task_bind(v___x_1888_, v___f_1882_, v___x_1889_, v___x_1890_);
v___x_1892_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1892_, 0, v___x_1891_);
return v___x_1892_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_instMonadAsyncTask___lam__1___boxed(lean_object* v___f_1893_, lean_object* v_00_u03b1_1894_, lean_object* v_t_1895_, lean_object* v_prio_1896_, lean_object* v___y_1897_){
_start:
{
lean_object* v_res_1898_; 
v_res_1898_ = l_Std_Async_BaseAsync_instMonadAsyncTask___lam__1(v___f_1893_, v_00_u03b1_1894_, v_t_1895_, v_prio_1896_);
return v_res_1898_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_instInhabited___redArg___lam__0(lean_object* v___x_1902_){
_start:
{
lean_inc_ref(v___x_1902_);
return v___x_1902_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_instInhabited___redArg___lam__0___boxed(lean_object* v___x_1904_, lean_object* v___y_1905_){
_start:
{
lean_object* v_res_1906_; 
v_res_1906_ = l_Std_Async_BaseAsync_instInhabited___redArg___lam__0(v___x_1904_);
lean_dec_ref(v___x_1904_);
return v_res_1906_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_instInhabited___redArg(lean_object* v_inst_1907_){
_start:
{
lean_object* v___x_1908_; lean_object* v___f_1909_; lean_object* v___x_1910_; 
v___x_1908_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1908_, 0, v_inst_1907_);
v___f_1909_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_instInhabited___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_1909_, 0, v___x_1908_);
v___x_1910_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_mk___boxed), 3, 2);
lean_closure_set(v___x_1910_, 0, lean_box(0));
lean_closure_set(v___x_1910_, 1, v___f_1909_);
return v___x_1910_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_instInhabited(lean_object* v_00_u03b1_1911_, lean_object* v_inst_1912_){
_start:
{
lean_object* v___x_1913_; 
v___x_1913_ = l_Std_Async_BaseAsync_instInhabited___redArg(v_inst_1912_);
return v___x_1913_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_instMonadFinally___lam__0(lean_object* v_res_1914_, lean_object* v_snd_1915_){
_start:
{
lean_object* v___x_1916_; 
v___x_1916_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1916_, 0, v_res_1914_);
lean_ctor_set(v___x_1916_, 1, v_snd_1915_);
return v___x_1916_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_instMonadFinally___lam__1(lean_object* v_f_1917_, lean_object* v_res_1918_){
_start:
{
lean_object* v___f_1920_; lean_object* v___x_1921_; lean_object* v___x_1922_; uint8_t v___x_1923_; lean_object* v___x_1924_; 
lean_inc_n(v_res_1918_, 2);
v___f_1920_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_instMonadFinally___lam__0), 2, 1);
lean_closure_set(v___f_1920_, 0, v_res_1918_);
v___x_1921_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1921_, 0, v_res_1918_);
v___x_1922_ = lean_unsigned_to_nat(0u);
v___x_1923_ = 0;
v___x_1924_ = lean_apply_2(v_f_1917_, v___x_1921_, lean_box(0));
if (lean_obj_tag(v___x_1924_) == 0)
{
lean_object* v_a_1925_; lean_object* v___x_1927_; uint8_t v_isShared_1928_; uint8_t v_isSharedCheck_1933_; 
lean_dec_ref(v___f_1920_);
v_a_1925_ = lean_ctor_get(v___x_1924_, 0);
v_isSharedCheck_1933_ = !lean_is_exclusive(v___x_1924_);
if (v_isSharedCheck_1933_ == 0)
{
v___x_1927_ = v___x_1924_;
v_isShared_1928_ = v_isSharedCheck_1933_;
goto v_resetjp_1926_;
}
else
{
lean_inc(v_a_1925_);
lean_dec(v___x_1924_);
v___x_1927_ = lean_box(0);
v_isShared_1928_ = v_isSharedCheck_1933_;
goto v_resetjp_1926_;
}
v_resetjp_1926_:
{
lean_object* v___x_1929_; lean_object* v___x_1931_; 
v___x_1929_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1929_, 0, v_res_1918_);
lean_ctor_set(v___x_1929_, 1, v_a_1925_);
if (v_isShared_1928_ == 0)
{
lean_ctor_set(v___x_1927_, 0, v___x_1929_);
v___x_1931_ = v___x_1927_;
goto v_reusejp_1930_;
}
else
{
lean_object* v_reuseFailAlloc_1932_; 
v_reuseFailAlloc_1932_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1932_, 0, v___x_1929_);
v___x_1931_ = v_reuseFailAlloc_1932_;
goto v_reusejp_1930_;
}
v_reusejp_1930_:
{
return v___x_1931_;
}
}
}
else
{
lean_object* v_a_1934_; lean_object* v___x_1936_; uint8_t v_isShared_1937_; uint8_t v_isSharedCheck_1942_; 
lean_dec(v_res_1918_);
v_a_1934_ = lean_ctor_get(v___x_1924_, 0);
v_isSharedCheck_1942_ = !lean_is_exclusive(v___x_1924_);
if (v_isSharedCheck_1942_ == 0)
{
v___x_1936_ = v___x_1924_;
v_isShared_1937_ = v_isSharedCheck_1942_;
goto v_resetjp_1935_;
}
else
{
lean_inc(v_a_1934_);
lean_dec(v___x_1924_);
v___x_1936_ = lean_box(0);
v_isShared_1937_ = v_isSharedCheck_1942_;
goto v_resetjp_1935_;
}
v_resetjp_1935_:
{
lean_object* v___x_1938_; lean_object* v___x_1940_; 
v___x_1938_ = lean_task_map(v___f_1920_, v_a_1934_, v___x_1922_, v___x_1923_);
if (v_isShared_1937_ == 0)
{
lean_ctor_set(v___x_1936_, 0, v___x_1938_);
v___x_1940_ = v___x_1936_;
goto v_reusejp_1939_;
}
else
{
lean_object* v_reuseFailAlloc_1941_; 
v_reuseFailAlloc_1941_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1941_, 0, v___x_1938_);
v___x_1940_ = v_reuseFailAlloc_1941_;
goto v_reusejp_1939_;
}
v_reusejp_1939_:
{
return v___x_1940_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_instMonadFinally___lam__1___boxed(lean_object* v_f_1943_, lean_object* v_res_1944_, lean_object* v___y_1945_){
_start:
{
lean_object* v_res_1946_; 
v_res_1946_ = l_Std_Async_BaseAsync_instMonadFinally___lam__1(v_f_1943_, v_res_1944_);
return v_res_1946_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_instMonadFinally___lam__2(lean_object* v_00_u03b1_1947_, lean_object* v_00_u03b2_1948_, lean_object* v_x_1949_, lean_object* v_f_1950_){
_start:
{
lean_object* v___f_1952_; lean_object* v___x_1953_; uint8_t v___x_1954_; lean_object* v___x_1955_; lean_object* v___x_1956_; 
v___f_1952_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_instMonadFinally___lam__1___boxed), 3, 1);
lean_closure_set(v___f_1952_, 0, v_f_1950_);
v___x_1953_ = lean_unsigned_to_nat(0u);
v___x_1954_ = 0;
v___x_1955_ = lean_apply_1(v_x_1949_, lean_box(0));
v___x_1956_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1953_, v___x_1954_, v___x_1955_, v___f_1952_);
return v___x_1956_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_instMonadFinally___lam__2___boxed(lean_object* v_00_u03b1_1957_, lean_object* v_00_u03b2_1958_, lean_object* v_x_1959_, lean_object* v_f_1960_, lean_object* v___y_1961_){
_start:
{
lean_object* v_res_1962_; 
v_res_1962_ = l_Std_Async_BaseAsync_instMonadFinally___lam__2(v_00_u03b1_1957_, v_00_u03b2_1958_, v_x_1959_, v_f_1960_);
return v_res_1962_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_ofExcept___redArg(lean_object* v_except_1965_){
_start:
{
lean_object* v_a_1967_; lean_object* v___x_1969_; uint8_t v_isShared_1970_; uint8_t v_isSharedCheck_1974_; 
v_a_1967_ = lean_ctor_get(v_except_1965_, 0);
v_isSharedCheck_1974_ = !lean_is_exclusive(v_except_1965_);
if (v_isSharedCheck_1974_ == 0)
{
v___x_1969_ = v_except_1965_;
v_isShared_1970_ = v_isSharedCheck_1974_;
goto v_resetjp_1968_;
}
else
{
lean_inc(v_a_1967_);
lean_dec(v_except_1965_);
v___x_1969_ = lean_box(0);
v_isShared_1970_ = v_isSharedCheck_1974_;
goto v_resetjp_1968_;
}
v_resetjp_1968_:
{
lean_object* v___x_1972_; 
if (v_isShared_1970_ == 0)
{
lean_ctor_set_tag(v___x_1969_, 0);
v___x_1972_ = v___x_1969_;
goto v_reusejp_1971_;
}
else
{
lean_object* v_reuseFailAlloc_1973_; 
v_reuseFailAlloc_1973_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1973_, 0, v_a_1967_);
v___x_1972_ = v_reuseFailAlloc_1973_;
goto v_reusejp_1971_;
}
v_reusejp_1971_:
{
return v___x_1972_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_ofExcept___redArg___boxed(lean_object* v_except_1975_, lean_object* v___y_1976_){
_start:
{
lean_object* v_res_1977_; 
v_res_1977_ = l_Std_Async_BaseAsync_ofExcept___redArg(v_except_1975_);
return v_res_1977_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_ofExcept(lean_object* v_00_u03b1_1978_, lean_object* v_except_1979_){
_start:
{
lean_object* v_a_1981_; lean_object* v___x_1983_; uint8_t v_isShared_1984_; uint8_t v_isSharedCheck_1988_; 
v_a_1981_ = lean_ctor_get(v_except_1979_, 0);
v_isSharedCheck_1988_ = !lean_is_exclusive(v_except_1979_);
if (v_isSharedCheck_1988_ == 0)
{
v___x_1983_ = v_except_1979_;
v_isShared_1984_ = v_isSharedCheck_1988_;
goto v_resetjp_1982_;
}
else
{
lean_inc(v_a_1981_);
lean_dec(v_except_1979_);
v___x_1983_ = lean_box(0);
v_isShared_1984_ = v_isSharedCheck_1988_;
goto v_resetjp_1982_;
}
v_resetjp_1982_:
{
lean_object* v___x_1986_; 
if (v_isShared_1984_ == 0)
{
lean_ctor_set_tag(v___x_1983_, 0);
v___x_1986_ = v___x_1983_;
goto v_reusejp_1985_;
}
else
{
lean_object* v_reuseFailAlloc_1987_; 
v_reuseFailAlloc_1987_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1987_, 0, v_a_1981_);
v___x_1986_ = v_reuseFailAlloc_1987_;
goto v_reusejp_1985_;
}
v_reusejp_1985_:
{
return v___x_1986_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_ofExcept___boxed(lean_object* v_00_u03b1_1989_, lean_object* v_except_1990_, lean_object* v___y_1991_){
_start:
{
lean_object* v_res_1992_; 
v_res_1992_ = l_Std_Async_BaseAsync_ofExcept(v_00_u03b1_1989_, v_except_1990_);
return v_res_1992_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_concurrently___redArg___lam__1(lean_object* v_resultX_1993_, lean_object* v_resultY_1994_){
_start:
{
lean_object* v___x_1996_; lean_object* v___x_1997_; 
v___x_1996_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1996_, 0, v_resultX_1993_);
lean_ctor_set(v___x_1996_, 1, v_resultY_1994_);
v___x_1997_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1997_, 0, v___x_1996_);
return v___x_1997_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_concurrently___redArg___lam__1___boxed(lean_object* v_resultX_1998_, lean_object* v_resultY_1999_, lean_object* v___y_2000_){
_start:
{
lean_object* v_res_2001_; 
v_res_2001_ = l_Std_Async_BaseAsync_concurrently___redArg___lam__1(v_resultX_1998_, v_resultY_1999_);
return v_res_2001_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_concurrently___redArg___lam__0(lean_object* v_taskY_2002_, lean_object* v_resultX_2003_){
_start:
{
lean_object* v___f_2005_; lean_object* v___x_2006_; uint8_t v___x_2007_; lean_object* v___x_2008_; lean_object* v___x_2009_; 
v___f_2005_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_concurrently___redArg___lam__1___boxed), 3, 1);
lean_closure_set(v___f_2005_, 0, v_resultX_2003_);
v___x_2006_ = lean_unsigned_to_nat(0u);
v___x_2007_ = 0;
v___x_2008_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2008_, 0, v_taskY_2002_);
v___x_2009_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2006_, v___x_2007_, v___x_2008_, v___f_2005_);
return v___x_2009_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_concurrently___redArg___lam__0___boxed(lean_object* v_taskY_2010_, lean_object* v_resultX_2011_, lean_object* v___y_2012_){
_start:
{
lean_object* v_res_2013_; 
v_res_2013_ = l_Std_Async_BaseAsync_concurrently___redArg___lam__0(v_taskY_2010_, v_resultX_2011_);
return v_res_2013_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_concurrently___redArg___lam__2(lean_object* v_taskX_2014_, lean_object* v_taskY_2015_){
_start:
{
lean_object* v___f_2017_; lean_object* v___x_2018_; uint8_t v___x_2019_; lean_object* v___x_2020_; lean_object* v___x_2021_; 
v___f_2017_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_concurrently___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_2017_, 0, v_taskY_2015_);
v___x_2018_ = lean_unsigned_to_nat(0u);
v___x_2019_ = 0;
v___x_2020_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2020_, 0, v_taskX_2014_);
v___x_2021_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2018_, v___x_2019_, v___x_2020_, v___f_2017_);
return v___x_2021_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_concurrently___redArg___lam__2___boxed(lean_object* v_taskX_2022_, lean_object* v_taskY_2023_, lean_object* v___y_2024_){
_start:
{
lean_object* v_res_2025_; 
v_res_2025_ = l_Std_Async_BaseAsync_concurrently___redArg___lam__2(v_taskX_2022_, v_taskY_2023_);
return v_res_2025_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_concurrently___redArg___lam__3(lean_object* v_y_2026_, lean_object* v_prio_2027_, lean_object* v___f_2028_, lean_object* v_taskX_2029_){
_start:
{
lean_object* v___f_2031_; lean_object* v___x_2032_; uint8_t v___x_2033_; lean_object* v___x_2034_; lean_object* v___x_2035_; uint8_t v___x_2036_; lean_object* v___x_2037_; lean_object* v___x_2038_; lean_object* v___x_2039_; 
v___f_2031_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_concurrently___redArg___lam__2___boxed), 3, 1);
lean_closure_set(v___f_2031_, 0, v_taskX_2029_);
v___x_2032_ = lean_unsigned_to_nat(0u);
v___x_2033_ = 0;
v___x_2034_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_toRawBaseIO___boxed), 3, 2);
lean_closure_set(v___x_2034_, 0, lean_box(0));
lean_closure_set(v___x_2034_, 1, v_y_2026_);
v___x_2035_ = lean_io_as_task(v___x_2034_, v_prio_2027_);
v___x_2036_ = 1;
v___x_2037_ = lean_task_bind(v___x_2035_, v___f_2028_, v___x_2032_, v___x_2036_);
v___x_2038_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2038_, 0, v___x_2037_);
v___x_2039_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2032_, v___x_2033_, v___x_2038_, v___f_2031_);
return v___x_2039_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_concurrently___redArg___lam__3___boxed(lean_object* v_y_2040_, lean_object* v_prio_2041_, lean_object* v___f_2042_, lean_object* v_taskX_2043_, lean_object* v___y_2044_){
_start:
{
lean_object* v_res_2045_; 
v_res_2045_ = l_Std_Async_BaseAsync_concurrently___redArg___lam__3(v_y_2040_, v_prio_2041_, v___f_2042_, v_taskX_2043_);
return v_res_2045_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_concurrently___redArg(lean_object* v_x_2046_, lean_object* v_y_2047_, lean_object* v_prio_2048_){
_start:
{
lean_object* v___f_2050_; lean_object* v___f_2051_; lean_object* v___x_2052_; uint8_t v___x_2053_; lean_object* v___x_2054_; lean_object* v___x_2055_; uint8_t v___x_2056_; lean_object* v___x_2057_; lean_object* v___x_2058_; lean_object* v___x_2059_; 
v___f_2050_ = ((lean_object*)(l_Std_Async_MaybeTask_joinTask___redArg___closed__0));
lean_inc(v_prio_2048_);
v___f_2051_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_concurrently___redArg___lam__3___boxed), 5, 3);
lean_closure_set(v___f_2051_, 0, v_y_2047_);
lean_closure_set(v___f_2051_, 1, v_prio_2048_);
lean_closure_set(v___f_2051_, 2, v___f_2050_);
v___x_2052_ = lean_unsigned_to_nat(0u);
v___x_2053_ = 0;
v___x_2054_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_toRawBaseIO___boxed), 3, 2);
lean_closure_set(v___x_2054_, 0, lean_box(0));
lean_closure_set(v___x_2054_, 1, v_x_2046_);
v___x_2055_ = lean_io_as_task(v___x_2054_, v_prio_2048_);
v___x_2056_ = 1;
v___x_2057_ = lean_task_bind(v___x_2055_, v___f_2050_, v___x_2052_, v___x_2056_);
v___x_2058_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2058_, 0, v___x_2057_);
v___x_2059_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2052_, v___x_2053_, v___x_2058_, v___f_2051_);
return v___x_2059_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_concurrently___redArg___boxed(lean_object* v_x_2060_, lean_object* v_y_2061_, lean_object* v_prio_2062_, lean_object* v___y_2063_){
_start:
{
lean_object* v_res_2064_; 
v_res_2064_ = l_Std_Async_BaseAsync_concurrently___redArg(v_x_2060_, v_y_2061_, v_prio_2062_);
return v_res_2064_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_concurrently(lean_object* v_00_u03b1_2065_, lean_object* v_00_u03b2_2066_, lean_object* v_x_2067_, lean_object* v_y_2068_, lean_object* v_prio_2069_){
_start:
{
lean_object* v___f_2071_; lean_object* v___f_2072_; lean_object* v___x_2073_; uint8_t v___x_2074_; lean_object* v___x_2075_; lean_object* v___x_2076_; uint8_t v___x_2077_; lean_object* v___x_2078_; lean_object* v___x_2079_; lean_object* v___x_2080_; 
v___f_2071_ = ((lean_object*)(l_Std_Async_MaybeTask_joinTask___redArg___closed__0));
lean_inc(v_prio_2069_);
v___f_2072_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_concurrently___redArg___lam__3___boxed), 5, 3);
lean_closure_set(v___f_2072_, 0, v_y_2068_);
lean_closure_set(v___f_2072_, 1, v_prio_2069_);
lean_closure_set(v___f_2072_, 2, v___f_2071_);
v___x_2073_ = lean_unsigned_to_nat(0u);
v___x_2074_ = 0;
v___x_2075_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_toRawBaseIO___boxed), 3, 2);
lean_closure_set(v___x_2075_, 0, lean_box(0));
lean_closure_set(v___x_2075_, 1, v_x_2067_);
v___x_2076_ = lean_io_as_task(v___x_2075_, v_prio_2069_);
v___x_2077_ = 1;
v___x_2078_ = lean_task_bind(v___x_2076_, v___f_2071_, v___x_2073_, v___x_2077_);
v___x_2079_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2079_, 0, v___x_2078_);
v___x_2080_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2073_, v___x_2074_, v___x_2079_, v___f_2072_);
return v___x_2080_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_concurrently___boxed(lean_object* v_00_u03b1_2081_, lean_object* v_00_u03b2_2082_, lean_object* v_x_2083_, lean_object* v_y_2084_, lean_object* v_prio_2085_, lean_object* v___y_2086_){
_start:
{
lean_object* v_res_2087_; 
v_res_2087_ = l_Std_Async_BaseAsync_concurrently(v_00_u03b1_2081_, v_00_u03b2_2082_, v_x_2083_, v_y_2084_, v_prio_2085_);
return v_res_2087_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_race___redArg___lam__2(lean_object* v_promise_2088_, lean_object* v_value_2089_){
_start:
{
lean_object* v___x_2091_; 
v___x_2091_ = lean_io_promise_resolve(v_value_2089_, v_promise_2088_);
return v___x_2091_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_race___redArg___lam__2___boxed(lean_object* v_promise_2092_, lean_object* v_value_2093_, lean_object* v___y_2094_){
_start:
{
lean_object* v_res_2095_; 
v_res_2095_ = l_Std_Async_BaseAsync_race___redArg___lam__2(v_promise_2092_, v_value_2093_);
lean_dec(v_promise_2092_);
return v_res_2095_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_race___redArg___lam__0(lean_object* v_promise_2096_, lean_object* v_____r_2097_){
_start:
{
lean_object* v___x_2099_; lean_object* v___x_2100_; 
v___x_2099_ = l_IO_Promise_result_x21___redArg(v_promise_2096_);
v___x_2100_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2100_, 0, v___x_2099_);
return v___x_2100_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_race___redArg___lam__0___boxed(lean_object* v_promise_2101_, lean_object* v_____r_2102_, lean_object* v___y_2103_){
_start:
{
lean_object* v_res_2104_; 
v_res_2104_ = l_Std_Async_BaseAsync_race___redArg___lam__0(v_promise_2101_, v_____r_2102_);
lean_dec(v_promise_2101_);
return v_res_2104_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_race___redArg___lam__1(lean_object* v_task_u2082_2105_, lean_object* v___x_2106_, lean_object* v___x_2107_, uint8_t v___x_2108_, lean_object* v___f_2109_, lean_object* v_____r_2110_){
_start:
{
lean_object* v___x_2112_; lean_object* v___x_2113_; lean_object* v___x_2114_; 
lean_inc(v___x_2107_);
v___x_2112_ = l_BaseIO_chainTask___redArg(v_task_u2082_2105_, v___x_2106_, v___x_2107_, v___x_2108_);
v___x_2113_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2113_, 0, v___x_2112_);
v___x_2114_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2107_, v___x_2108_, v___x_2113_, v___f_2109_);
return v___x_2114_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_race___redArg___lam__1___boxed(lean_object* v_task_u2082_2115_, lean_object* v___x_2116_, lean_object* v___x_2117_, lean_object* v___x_2118_, lean_object* v___f_2119_, lean_object* v_____r_2120_, lean_object* v___y_2121_){
_start:
{
uint8_t v___x_635__boxed_2122_; lean_object* v_res_2123_; 
v___x_635__boxed_2122_ = lean_unbox(v___x_2118_);
v_res_2123_ = l_Std_Async_BaseAsync_race___redArg___lam__1(v_task_u2082_2115_, v___x_2116_, v___x_2117_, v___x_635__boxed_2122_, v___f_2119_, v_____r_2120_);
return v_res_2123_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_race___redArg___lam__3(lean_object* v___f_2124_, lean_object* v___f_2125_, lean_object* v___f_2126_, lean_object* v_task_u2081_2127_, lean_object* v_task_u2082_2128_){
_start:
{
lean_object* v___x_2130_; lean_object* v___x_2131_; lean_object* v___x_2132_; uint8_t v___x_2133_; lean_object* v___x_2134_; lean_object* v___f_2135_; lean_object* v___x_2136_; lean_object* v___x_2137_; lean_object* v___x_2138_; 
v___x_2130_ = lean_alloc_closure((void*)(l_liftM), 5, 4);
lean_closure_set(v___x_2130_, 0, lean_box(0));
lean_closure_set(v___x_2130_, 1, lean_box(0));
lean_closure_set(v___x_2130_, 2, v___f_2124_);
lean_closure_set(v___x_2130_, 3, lean_box(0));
v___x_2131_ = lean_alloc_closure((void*)(l_Function_comp), 6, 5);
lean_closure_set(v___x_2131_, 0, lean_box(0));
lean_closure_set(v___x_2131_, 1, lean_box(0));
lean_closure_set(v___x_2131_, 2, lean_box(0));
lean_closure_set(v___x_2131_, 3, v___x_2130_);
lean_closure_set(v___x_2131_, 4, v___f_2125_);
v___x_2132_ = lean_unsigned_to_nat(0u);
v___x_2133_ = 0;
v___x_2134_ = lean_box(v___x_2133_);
lean_inc_ref(v___x_2131_);
v___f_2135_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_race___redArg___lam__1___boxed), 7, 5);
lean_closure_set(v___f_2135_, 0, v_task_u2082_2128_);
lean_closure_set(v___f_2135_, 1, v___x_2131_);
lean_closure_set(v___f_2135_, 2, v___x_2132_);
lean_closure_set(v___f_2135_, 3, v___x_2134_);
lean_closure_set(v___f_2135_, 4, v___f_2126_);
v___x_2136_ = l_BaseIO_chainTask___redArg(v_task_u2081_2127_, v___x_2131_, v___x_2132_, v___x_2133_);
v___x_2137_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2137_, 0, v___x_2136_);
v___x_2138_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2132_, v___x_2133_, v___x_2137_, v___f_2135_);
return v___x_2138_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_race___redArg___lam__3___boxed(lean_object* v___f_2139_, lean_object* v___f_2140_, lean_object* v___f_2141_, lean_object* v_task_u2081_2142_, lean_object* v_task_u2082_2143_, lean_object* v___y_2144_){
_start:
{
lean_object* v_res_2145_; 
v_res_2145_ = l_Std_Async_BaseAsync_race___redArg___lam__3(v___f_2139_, v___f_2140_, v___f_2141_, v_task_u2081_2142_, v_task_u2082_2143_);
return v_res_2145_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_race___redArg___lam__4(lean_object* v___f_2146_, lean_object* v___f_2147_, lean_object* v___f_2148_, lean_object* v_y_2149_, lean_object* v_prio_2150_, lean_object* v___f_2151_, lean_object* v_task_u2081_2152_){
_start:
{
lean_object* v___f_2154_; lean_object* v___x_2155_; uint8_t v___x_2156_; lean_object* v___x_2157_; lean_object* v___x_2158_; uint8_t v___x_2159_; lean_object* v___x_2160_; lean_object* v___x_2161_; lean_object* v___x_2162_; 
v___f_2154_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_race___redArg___lam__3___boxed), 6, 4);
lean_closure_set(v___f_2154_, 0, v___f_2146_);
lean_closure_set(v___f_2154_, 1, v___f_2147_);
lean_closure_set(v___f_2154_, 2, v___f_2148_);
lean_closure_set(v___f_2154_, 3, v_task_u2081_2152_);
v___x_2155_ = lean_unsigned_to_nat(0u);
v___x_2156_ = 0;
v___x_2157_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_toRawBaseIO___boxed), 3, 2);
lean_closure_set(v___x_2157_, 0, lean_box(0));
lean_closure_set(v___x_2157_, 1, v_y_2149_);
v___x_2158_ = lean_io_as_task(v___x_2157_, v_prio_2150_);
v___x_2159_ = 1;
v___x_2160_ = lean_task_bind(v___x_2158_, v___f_2151_, v___x_2155_, v___x_2159_);
v___x_2161_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2161_, 0, v___x_2160_);
v___x_2162_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2155_, v___x_2156_, v___x_2161_, v___f_2154_);
return v___x_2162_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_race___redArg___lam__4___boxed(lean_object* v___f_2163_, lean_object* v___f_2164_, lean_object* v___f_2165_, lean_object* v_y_2166_, lean_object* v_prio_2167_, lean_object* v___f_2168_, lean_object* v_task_u2081_2169_, lean_object* v___y_2170_){
_start:
{
lean_object* v_res_2171_; 
v_res_2171_ = l_Std_Async_BaseAsync_race___redArg___lam__4(v___f_2163_, v___f_2164_, v___f_2165_, v_y_2166_, v_prio_2167_, v___f_2168_, v_task_u2081_2169_);
return v_res_2171_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_race___redArg___lam__5(lean_object* v___f_2172_, lean_object* v_y_2173_, lean_object* v_prio_2174_, lean_object* v___f_2175_, lean_object* v_x_2176_, lean_object* v___f_2177_, lean_object* v_promise_2178_){
_start:
{
lean_object* v___f_2180_; lean_object* v___f_2181_; lean_object* v___f_2182_; lean_object* v___x_2183_; uint8_t v___x_2184_; lean_object* v___x_2185_; lean_object* v___x_2186_; uint8_t v___x_2187_; lean_object* v___x_2188_; lean_object* v___x_2189_; lean_object* v___x_2190_; 
lean_inc(v_promise_2178_);
v___f_2180_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_race___redArg___lam__2___boxed), 3, 1);
lean_closure_set(v___f_2180_, 0, v_promise_2178_);
v___f_2181_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_race___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_2181_, 0, v_promise_2178_);
lean_inc(v_prio_2174_);
v___f_2182_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_race___redArg___lam__4___boxed), 8, 6);
lean_closure_set(v___f_2182_, 0, v___f_2172_);
lean_closure_set(v___f_2182_, 1, v___f_2180_);
lean_closure_set(v___f_2182_, 2, v___f_2181_);
lean_closure_set(v___f_2182_, 3, v_y_2173_);
lean_closure_set(v___f_2182_, 4, v_prio_2174_);
lean_closure_set(v___f_2182_, 5, v___f_2175_);
v___x_2183_ = lean_unsigned_to_nat(0u);
v___x_2184_ = 0;
v___x_2185_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_toRawBaseIO___boxed), 3, 2);
lean_closure_set(v___x_2185_, 0, lean_box(0));
lean_closure_set(v___x_2185_, 1, v_x_2176_);
v___x_2186_ = lean_io_as_task(v___x_2185_, v_prio_2174_);
v___x_2187_ = 1;
v___x_2188_ = lean_task_bind(v___x_2186_, v___f_2177_, v___x_2183_, v___x_2187_);
v___x_2189_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2189_, 0, v___x_2188_);
v___x_2190_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2183_, v___x_2184_, v___x_2189_, v___f_2182_);
return v___x_2190_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_race___redArg___lam__5___boxed(lean_object* v___f_2191_, lean_object* v_y_2192_, lean_object* v_prio_2193_, lean_object* v___f_2194_, lean_object* v_x_2195_, lean_object* v___f_2196_, lean_object* v_promise_2197_, lean_object* v___y_2198_){
_start:
{
lean_object* v_res_2199_; 
v_res_2199_ = l_Std_Async_BaseAsync_race___redArg___lam__5(v___f_2191_, v_y_2192_, v_prio_2193_, v___f_2194_, v_x_2195_, v___f_2196_, v_promise_2197_);
return v_res_2199_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_race___redArg(lean_object* v_x_2201_, lean_object* v_y_2202_, lean_object* v_prio_2203_){
_start:
{
lean_object* v___f_2205_; lean_object* v___f_2206_; lean_object* v___f_2207_; lean_object* v___x_2208_; uint8_t v___x_2209_; lean_object* v___x_2210_; lean_object* v___x_2211_; lean_object* v___x_2212_; 
v___f_2205_ = ((lean_object*)(l_Std_Async_MaybeTask_joinTask___redArg___closed__0));
v___f_2206_ = ((lean_object*)(l_Std_Async_BaseAsync_race___redArg___closed__0));
v___f_2207_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_race___redArg___lam__5___boxed), 8, 6);
lean_closure_set(v___f_2207_, 0, v___f_2206_);
lean_closure_set(v___f_2207_, 1, v_y_2202_);
lean_closure_set(v___f_2207_, 2, v_prio_2203_);
lean_closure_set(v___f_2207_, 3, v___f_2205_);
lean_closure_set(v___f_2207_, 4, v_x_2201_);
lean_closure_set(v___f_2207_, 5, v___f_2205_);
v___x_2208_ = lean_unsigned_to_nat(0u);
v___x_2209_ = 0;
v___x_2210_ = lean_io_promise_new();
v___x_2211_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2211_, 0, v___x_2210_);
v___x_2212_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2208_, v___x_2209_, v___x_2211_, v___f_2207_);
return v___x_2212_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_race___redArg___boxed(lean_object* v_x_2213_, lean_object* v_y_2214_, lean_object* v_prio_2215_, lean_object* v___y_2216_){
_start:
{
lean_object* v_res_2217_; 
v_res_2217_ = l_Std_Async_BaseAsync_race___redArg(v_x_2213_, v_y_2214_, v_prio_2215_);
return v_res_2217_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_race(lean_object* v_00_u03b1_2218_, lean_object* v_inst_2219_, lean_object* v_x_2220_, lean_object* v_y_2221_, lean_object* v_prio_2222_){
_start:
{
lean_object* v___f_2224_; lean_object* v___f_2225_; lean_object* v___f_2226_; lean_object* v___x_2227_; uint8_t v___x_2228_; lean_object* v___x_2229_; lean_object* v___x_2230_; lean_object* v___x_2231_; 
v___f_2224_ = ((lean_object*)(l_Std_Async_MaybeTask_joinTask___redArg___closed__0));
v___f_2225_ = ((lean_object*)(l_Std_Async_BaseAsync_race___redArg___closed__0));
v___f_2226_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_race___redArg___lam__5___boxed), 8, 6);
lean_closure_set(v___f_2226_, 0, v___f_2225_);
lean_closure_set(v___f_2226_, 1, v_y_2221_);
lean_closure_set(v___f_2226_, 2, v_prio_2222_);
lean_closure_set(v___f_2226_, 3, v___f_2224_);
lean_closure_set(v___f_2226_, 4, v_x_2220_);
lean_closure_set(v___f_2226_, 5, v___f_2224_);
v___x_2227_ = lean_unsigned_to_nat(0u);
v___x_2228_ = 0;
v___x_2229_ = lean_io_promise_new();
v___x_2230_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2230_, 0, v___x_2229_);
v___x_2231_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2227_, v___x_2228_, v___x_2230_, v___f_2226_);
return v___x_2231_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_race___boxed(lean_object* v_00_u03b1_2232_, lean_object* v_inst_2233_, lean_object* v_x_2234_, lean_object* v_y_2235_, lean_object* v_prio_2236_, lean_object* v___y_2237_){
_start:
{
lean_object* v_res_2238_; 
v_res_2238_ = l_Std_Async_BaseAsync_race(v_00_u03b1_2232_, v_inst_2233_, v_x_2234_, v_y_2235_, v_prio_2236_);
lean_dec(v_inst_2233_);
return v_res_2238_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_concurrentlyAll___redArg___lam__1(lean_object* v_prio_2239_, lean_object* v___f_2240_, lean_object* v_x_2241_){
_start:
{
lean_object* v___x_2243_; lean_object* v___x_2244_; lean_object* v___x_2245_; uint8_t v___x_2246_; lean_object* v___x_2247_; lean_object* v___x_2248_; 
v___x_2243_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_toRawBaseIO___boxed), 3, 2);
lean_closure_set(v___x_2243_, 0, lean_box(0));
lean_closure_set(v___x_2243_, 1, v_x_2241_);
v___x_2244_ = lean_io_as_task(v___x_2243_, v_prio_2239_);
v___x_2245_ = lean_unsigned_to_nat(0u);
v___x_2246_ = 1;
v___x_2247_ = lean_task_bind(v___x_2244_, v___f_2240_, v___x_2245_, v___x_2246_);
v___x_2248_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2248_, 0, v___x_2247_);
return v___x_2248_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_concurrentlyAll___redArg___lam__1___boxed(lean_object* v_prio_2249_, lean_object* v___f_2250_, lean_object* v_x_2251_, lean_object* v___y_2252_){
_start:
{
lean_object* v_res_2253_; 
v_res_2253_ = l_Std_Async_BaseAsync_concurrentlyAll___redArg___lam__1(v_prio_2249_, v___f_2250_, v_x_2251_);
return v_res_2253_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_concurrentlyAll___redArg___lam__0(lean_object* v___x_2255_, lean_object* v_tasks_2256_){
_start:
{
lean_object* v___x_2258_; size_t v_sz_2259_; size_t v___x_2260_; lean_object* v___x_228__overap_2261_; lean_object* v___x_2262_; 
v___x_2258_ = ((lean_object*)(l_Std_Async_BaseAsync_concurrentlyAll___redArg___lam__0___closed__0));
v_sz_2259_ = lean_array_size(v_tasks_2256_);
v___x_2260_ = ((size_t)0ULL);
v___x_228__overap_2261_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_2255_, v___x_2258_, v_sz_2259_, v___x_2260_, v_tasks_2256_);
v___x_2262_ = lean_apply_1(v___x_228__overap_2261_, lean_box(0));
return v___x_2262_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_concurrentlyAll___redArg___lam__0___boxed(lean_object* v___x_2263_, lean_object* v_tasks_2264_, lean_object* v___y_2265_){
_start:
{
lean_object* v_res_2266_; 
v_res_2266_ = l_Std_Async_BaseAsync_concurrentlyAll___redArg___lam__0(v___x_2263_, v_tasks_2264_);
return v_res_2266_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_concurrentlyAll___redArg(lean_object* v_xs_2269_, lean_object* v_prio_2270_){
_start:
{
lean_object* v___f_2272_; lean_object* v___f_2273_; lean_object* v___x_2274_; lean_object* v___f_2275_; lean_object* v___x_2276_; uint8_t v___x_2277_; size_t v_sz_2278_; size_t v___x_2279_; lean_object* v___x_176__overap_2280_; lean_object* v___x_2281_; lean_object* v___x_2282_; 
v___f_2272_ = ((lean_object*)(l_Std_Async_MaybeTask_joinTask___redArg___closed__0));
v___f_2273_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_concurrentlyAll___redArg___lam__1___boxed), 4, 2);
lean_closure_set(v___f_2273_, 0, v_prio_2270_);
lean_closure_set(v___f_2273_, 1, v___f_2272_);
v___x_2274_ = ((lean_object*)(l_Std_Async_BaseAsync_instMonad));
v___f_2275_ = ((lean_object*)(l_Std_Async_BaseAsync_concurrentlyAll___redArg___closed__0));
v___x_2276_ = lean_unsigned_to_nat(0u);
v___x_2277_ = 0;
v_sz_2278_ = lean_array_size(v_xs_2269_);
v___x_2279_ = ((size_t)0ULL);
v___x_176__overap_2280_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_2274_, v___f_2273_, v_sz_2278_, v___x_2279_, v_xs_2269_);
v___x_2281_ = lean_apply_1(v___x_176__overap_2280_, lean_box(0));
v___x_2282_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2276_, v___x_2277_, v___x_2281_, v___f_2275_);
return v___x_2282_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_concurrentlyAll___redArg___boxed(lean_object* v_xs_2283_, lean_object* v_prio_2284_, lean_object* v___y_2285_){
_start:
{
lean_object* v_res_2286_; 
v_res_2286_ = l_Std_Async_BaseAsync_concurrentlyAll___redArg(v_xs_2283_, v_prio_2284_);
return v_res_2286_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_concurrentlyAll(lean_object* v_00_u03b1_2287_, lean_object* v_xs_2288_, lean_object* v_prio_2289_){
_start:
{
lean_object* v___f_2291_; lean_object* v___f_2292_; lean_object* v___x_2293_; lean_object* v___f_2294_; lean_object* v___x_2295_; uint8_t v___x_2296_; size_t v_sz_2297_; size_t v___x_2298_; lean_object* v___x_205__overap_2299_; lean_object* v___x_2300_; lean_object* v___x_2301_; 
v___f_2291_ = ((lean_object*)(l_Std_Async_MaybeTask_joinTask___redArg___closed__0));
v___f_2292_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_concurrentlyAll___redArg___lam__1___boxed), 4, 2);
lean_closure_set(v___f_2292_, 0, v_prio_2289_);
lean_closure_set(v___f_2292_, 1, v___f_2291_);
v___x_2293_ = ((lean_object*)(l_Std_Async_BaseAsync_instMonad));
v___f_2294_ = ((lean_object*)(l_Std_Async_BaseAsync_concurrentlyAll___redArg___closed__0));
v___x_2295_ = lean_unsigned_to_nat(0u);
v___x_2296_ = 0;
v_sz_2297_ = lean_array_size(v_xs_2288_);
v___x_2298_ = ((size_t)0ULL);
v___x_205__overap_2299_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_2293_, v___f_2292_, v_sz_2297_, v___x_2298_, v_xs_2288_);
v___x_2300_ = lean_apply_1(v___x_205__overap_2299_, lean_box(0));
v___x_2301_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2295_, v___x_2296_, v___x_2300_, v___f_2294_);
return v___x_2301_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_concurrentlyAll___boxed(lean_object* v_00_u03b1_2302_, lean_object* v_xs_2303_, lean_object* v_prio_2304_, lean_object* v___y_2305_){
_start:
{
lean_object* v_res_2306_; 
v_res_2306_ = l_Std_Async_BaseAsync_concurrentlyAll(v_00_u03b1_2302_, v_xs_2303_, v_prio_2304_);
return v_res_2306_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_raceAll___redArg___lam__2(lean_object* v___f_2307_, lean_object* v___f_2308_, lean_object* v_task_u2081_2309_){
_start:
{
lean_object* v___x_2311_; lean_object* v___x_2312_; lean_object* v___x_2313_; uint8_t v___x_2314_; lean_object* v___x_2315_; lean_object* v___x_2316_; 
v___x_2311_ = lean_alloc_closure((void*)(l_liftM), 5, 4);
lean_closure_set(v___x_2311_, 0, lean_box(0));
lean_closure_set(v___x_2311_, 1, lean_box(0));
lean_closure_set(v___x_2311_, 2, v___f_2307_);
lean_closure_set(v___x_2311_, 3, lean_box(0));
v___x_2312_ = lean_alloc_closure((void*)(l_Function_comp), 6, 5);
lean_closure_set(v___x_2312_, 0, lean_box(0));
lean_closure_set(v___x_2312_, 1, lean_box(0));
lean_closure_set(v___x_2312_, 2, lean_box(0));
lean_closure_set(v___x_2312_, 3, v___x_2311_);
lean_closure_set(v___x_2312_, 4, v___f_2308_);
v___x_2313_ = lean_unsigned_to_nat(0u);
v___x_2314_ = 0;
v___x_2315_ = l_BaseIO_chainTask___redArg(v_task_u2081_2309_, v___x_2312_, v___x_2313_, v___x_2314_);
v___x_2316_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2316_, 0, v___x_2315_);
return v___x_2316_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_raceAll___redArg___lam__2___boxed(lean_object* v___f_2317_, lean_object* v___f_2318_, lean_object* v_task_u2081_2319_, lean_object* v___y_2320_){
_start:
{
lean_object* v_res_2321_; 
v_res_2321_ = l_Std_Async_BaseAsync_raceAll___redArg___lam__2(v___f_2317_, v___f_2318_, v_task_u2081_2319_);
return v_res_2321_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_raceAll___redArg___lam__0(lean_object* v_prio_2322_, lean_object* v___f_2323_, lean_object* v___f_2324_, lean_object* v_x_2325_){
_start:
{
lean_object* v___x_2327_; uint8_t v___x_2328_; lean_object* v___x_2329_; lean_object* v___x_2330_; uint8_t v___x_2331_; lean_object* v___x_2332_; lean_object* v___x_2333_; lean_object* v___x_2334_; 
v___x_2327_ = lean_unsigned_to_nat(0u);
v___x_2328_ = 0;
v___x_2329_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_toRawBaseIO___boxed), 3, 2);
lean_closure_set(v___x_2329_, 0, lean_box(0));
lean_closure_set(v___x_2329_, 1, v_x_2325_);
v___x_2330_ = lean_io_as_task(v___x_2329_, v_prio_2322_);
v___x_2331_ = 1;
v___x_2332_ = lean_task_bind(v___x_2330_, v___f_2323_, v___x_2327_, v___x_2331_);
v___x_2333_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2333_, 0, v___x_2332_);
v___x_2334_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2327_, v___x_2328_, v___x_2333_, v___f_2324_);
return v___x_2334_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_raceAll___redArg___lam__0___boxed(lean_object* v_prio_2335_, lean_object* v___f_2336_, lean_object* v___f_2337_, lean_object* v_x_2338_, lean_object* v___y_2339_){
_start:
{
lean_object* v_res_2340_; 
v_res_2340_ = l_Std_Async_BaseAsync_raceAll___redArg___lam__0(v_prio_2335_, v___f_2336_, v___f_2337_, v_x_2338_);
return v_res_2340_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_raceAll___redArg___lam__3(lean_object* v___f_2341_, lean_object* v_prio_2342_, lean_object* v___f_2343_, lean_object* v_inst_2344_, lean_object* v_xs_2345_, lean_object* v_promise_2346_){
_start:
{
lean_object* v___f_2348_; lean_object* v___f_2349_; lean_object* v___f_2350_; lean_object* v___f_2351_; lean_object* v___x_2352_; uint8_t v___x_2353_; lean_object* v___x_2354_; lean_object* v___x_2355_; 
lean_inc(v_promise_2346_);
v___f_2348_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_race___redArg___lam__2___boxed), 3, 1);
lean_closure_set(v___f_2348_, 0, v_promise_2346_);
v___f_2349_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_raceAll___redArg___lam__2___boxed), 4, 2);
lean_closure_set(v___f_2349_, 0, v___f_2341_);
lean_closure_set(v___f_2349_, 1, v___f_2348_);
v___f_2350_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_raceAll___redArg___lam__0___boxed), 5, 3);
lean_closure_set(v___f_2350_, 0, v_prio_2342_);
lean_closure_set(v___f_2350_, 1, v___f_2343_);
lean_closure_set(v___f_2350_, 2, v___f_2349_);
v___f_2351_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_race___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_2351_, 0, v_promise_2346_);
v___x_2352_ = lean_unsigned_to_nat(0u);
v___x_2353_ = 0;
v___x_2354_ = lean_apply_3(v_inst_2344_, v_xs_2345_, v___f_2350_, lean_box(0));
v___x_2355_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2352_, v___x_2353_, v___x_2354_, v___f_2351_);
return v___x_2355_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_raceAll___redArg___lam__3___boxed(lean_object* v___f_2356_, lean_object* v_prio_2357_, lean_object* v___f_2358_, lean_object* v_inst_2359_, lean_object* v_xs_2360_, lean_object* v_promise_2361_, lean_object* v___y_2362_){
_start:
{
lean_object* v_res_2363_; 
v_res_2363_ = l_Std_Async_BaseAsync_raceAll___redArg___lam__3(v___f_2356_, v_prio_2357_, v___f_2358_, v_inst_2359_, v_xs_2360_, v_promise_2361_);
return v_res_2363_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_raceAll___redArg(lean_object* v_inst_2364_, lean_object* v_xs_2365_, lean_object* v_prio_2366_){
_start:
{
lean_object* v___f_2368_; lean_object* v___f_2369_; lean_object* v___f_2370_; lean_object* v___x_2371_; uint8_t v___x_2372_; lean_object* v___x_2373_; lean_object* v___x_2374_; lean_object* v___x_2375_; 
v___f_2368_ = ((lean_object*)(l_Std_Async_MaybeTask_joinTask___redArg___closed__0));
v___f_2369_ = ((lean_object*)(l_Std_Async_BaseAsync_race___redArg___closed__0));
v___f_2370_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_raceAll___redArg___lam__3___boxed), 7, 5);
lean_closure_set(v___f_2370_, 0, v___f_2369_);
lean_closure_set(v___f_2370_, 1, v_prio_2366_);
lean_closure_set(v___f_2370_, 2, v___f_2368_);
lean_closure_set(v___f_2370_, 3, v_inst_2364_);
lean_closure_set(v___f_2370_, 4, v_xs_2365_);
v___x_2371_ = lean_unsigned_to_nat(0u);
v___x_2372_ = 0;
v___x_2373_ = lean_io_promise_new();
v___x_2374_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2374_, 0, v___x_2373_);
v___x_2375_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2371_, v___x_2372_, v___x_2374_, v___f_2370_);
return v___x_2375_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_raceAll___redArg___boxed(lean_object* v_inst_2376_, lean_object* v_xs_2377_, lean_object* v_prio_2378_, lean_object* v___y_2379_){
_start:
{
lean_object* v_res_2380_; 
v_res_2380_ = l_Std_Async_BaseAsync_raceAll___redArg(v_inst_2376_, v_xs_2377_, v_prio_2378_);
return v_res_2380_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_raceAll(lean_object* v_00_u03b1_2381_, lean_object* v_c_2382_, lean_object* v_inst_2383_, lean_object* v_inst_2384_, lean_object* v_xs_2385_, lean_object* v_prio_2386_){
_start:
{
lean_object* v___f_2388_; lean_object* v___f_2389_; lean_object* v___f_2390_; lean_object* v___x_2391_; uint8_t v___x_2392_; lean_object* v___x_2393_; lean_object* v___x_2394_; lean_object* v___x_2395_; 
v___f_2388_ = ((lean_object*)(l_Std_Async_MaybeTask_joinTask___redArg___closed__0));
v___f_2389_ = ((lean_object*)(l_Std_Async_BaseAsync_race___redArg___closed__0));
v___f_2390_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_raceAll___redArg___lam__3___boxed), 7, 5);
lean_closure_set(v___f_2390_, 0, v___f_2389_);
lean_closure_set(v___f_2390_, 1, v_prio_2386_);
lean_closure_set(v___f_2390_, 2, v___f_2388_);
lean_closure_set(v___f_2390_, 3, v_inst_2384_);
lean_closure_set(v___f_2390_, 4, v_xs_2385_);
v___x_2391_ = lean_unsigned_to_nat(0u);
v___x_2392_ = 0;
v___x_2393_ = lean_io_promise_new();
v___x_2394_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2394_, 0, v___x_2393_);
v___x_2395_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2391_, v___x_2392_, v___x_2394_, v___f_2390_);
return v___x_2395_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_raceAll___boxed(lean_object* v_00_u03b1_2396_, lean_object* v_c_2397_, lean_object* v_inst_2398_, lean_object* v_inst_2399_, lean_object* v_xs_2400_, lean_object* v_prio_2401_, lean_object* v___y_2402_){
_start:
{
lean_object* v_res_2403_; 
v_res_2403_ = l_Std_Async_BaseAsync_raceAll(v_00_u03b1_2396_, v_c_2397_, v_inst_2398_, v_inst_2399_, v_xs_2400_, v_prio_2401_);
lean_dec(v_inst_2398_);
return v_res_2403_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_mk___redArg(lean_object* v_toBaseAsync_2404_){
_start:
{
lean_object* v___x_2406_; 
v___x_2406_ = lean_apply_1(v_toBaseAsync_2404_, lean_box(0));
return v___x_2406_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_mk___redArg___boxed(lean_object* v_toBaseAsync_2407_, lean_object* v___y_2408_){
_start:
{
lean_object* v_res_2409_; 
v_res_2409_ = l_Std_Async_EAsync_mk___redArg(v_toBaseAsync_2407_);
return v_res_2409_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_mk(lean_object* v_00_u03b5_2410_, lean_object* v_00_u03b1_2411_, lean_object* v_toBaseAsync_2412_){
_start:
{
lean_object* v___x_2414_; 
v___x_2414_ = lean_apply_1(v_toBaseAsync_2412_, lean_box(0));
return v___x_2414_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_mk___boxed(lean_object* v_00_u03b5_2415_, lean_object* v_00_u03b1_2416_, lean_object* v_toBaseAsync_2417_, lean_object* v___y_2418_){
_start:
{
lean_object* v_res_2419_; 
v_res_2419_ = l_Std_Async_EAsync_mk(v_00_u03b5_2415_, v_00_u03b1_2416_, v_toBaseAsync_2417_);
return v_res_2419_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_toBaseAsync___redArg(lean_object* v_self_2420_){
_start:
{
lean_object* v___x_2422_; 
v___x_2422_ = lean_apply_1(v_self_2420_, lean_box(0));
return v___x_2422_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_toBaseAsync___redArg___boxed(lean_object* v_self_2423_, lean_object* v___y_2424_){
_start:
{
lean_object* v_res_2425_; 
v_res_2425_ = l_Std_Async_EAsync_toBaseAsync___redArg(v_self_2423_);
return v_res_2425_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_toBaseAsync(lean_object* v_00_u03b5_2426_, lean_object* v_00_u03b1_2427_, lean_object* v_self_2428_){
_start:
{
lean_object* v___x_2430_; 
v___x_2430_ = lean_apply_1(v_self_2428_, lean_box(0));
return v___x_2430_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_toBaseAsync___boxed(lean_object* v_00_u03b5_2431_, lean_object* v_00_u03b1_2432_, lean_object* v_self_2433_, lean_object* v___y_2434_){
_start:
{
lean_object* v_res_2435_; 
v_res_2435_ = l_Std_Async_EAsync_toBaseAsync(v_00_u03b5_2431_, v_00_u03b1_2432_, v_self_2433_);
return v_res_2435_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_equiv___redArg___lam__0(lean_object* v___y_2436_){
_start:
{
lean_object* v___x_2438_; 
v___x_2438_ = lean_apply_1(v___y_2436_, lean_box(0));
return v___x_2438_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_equiv___redArg___lam__0___boxed(lean_object* v___y_2439_, lean_object* v___y_2440_){
_start:
{
lean_object* v_res_2441_; 
v_res_2441_ = l_Std_Async_EAsync_equiv___redArg___lam__0(v___y_2439_);
return v_res_2441_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_equiv___redArg(){
_start:
{
lean_object* v___x_2446_; 
v___x_2446_ = ((lean_object*)(l_Std_Async_EAsync_equiv___redArg___closed__1));
return v___x_2446_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_equiv___redArg___boxed(lean_object* v___dummy_2447_){
_start:
{
lean_object* v_res_2448_; 
v_res_2448_ = l_Std_Async_EAsync_equiv___redArg();
return v_res_2448_;
}
}
static lean_object* _init_l_Std_Async_EAsync_equiv___closed__0(void){
_start:
{
lean_object* v___x_2449_; 
v___x_2449_ = l_Std_Async_EAsync_equiv___redArg();
return v___x_2449_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_equiv(lean_object* v_00_u03b5_2450_, lean_object* v_00_u03b1_2451_){
_start:
{
lean_object* v___x_2452_; 
v___x_2452_ = lean_obj_once(&l_Std_Async_EAsync_equiv___closed__0, &l_Std_Async_EAsync_equiv___closed__0_once, _init_l_Std_Async_EAsync_equiv___closed__0);
return v___x_2452_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_toBaseIO___redArg(lean_object* v_x_2453_){
_start:
{
lean_object* v___x_2455_; 
v___x_2455_ = lean_apply_1(v_x_2453_, lean_box(0));
if (lean_obj_tag(v___x_2455_) == 0)
{
lean_object* v_a_2456_; lean_object* v___x_2457_; 
v_a_2456_ = lean_ctor_get(v___x_2455_, 0);
lean_inc(v_a_2456_);
lean_dec_ref_known(v___x_2455_, 1);
v___x_2457_ = lean_task_pure(v_a_2456_);
return v___x_2457_;
}
else
{
lean_object* v_a_2458_; 
v_a_2458_ = lean_ctor_get(v___x_2455_, 0);
lean_inc_ref(v_a_2458_);
lean_dec_ref_known(v___x_2455_, 1);
return v_a_2458_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_toBaseIO___redArg___boxed(lean_object* v_x_2459_, lean_object* v___y_2460_){
_start:
{
lean_object* v_res_2461_; 
v_res_2461_ = l_Std_Async_EAsync_toBaseIO___redArg(v_x_2459_);
return v_res_2461_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_toBaseIO(lean_object* v_00_u03b5_2462_, lean_object* v_00_u03b1_2463_, lean_object* v_x_2464_){
_start:
{
lean_object* v___x_2466_; 
v___x_2466_ = lean_apply_1(v_x_2464_, lean_box(0));
if (lean_obj_tag(v___x_2466_) == 0)
{
lean_object* v_a_2467_; lean_object* v___x_2468_; 
v_a_2467_ = lean_ctor_get(v___x_2466_, 0);
lean_inc(v_a_2467_);
lean_dec_ref_known(v___x_2466_, 1);
v___x_2468_ = lean_task_pure(v_a_2467_);
return v___x_2468_;
}
else
{
lean_object* v_a_2469_; 
v_a_2469_ = lean_ctor_get(v___x_2466_, 0);
lean_inc_ref(v_a_2469_);
lean_dec_ref_known(v___x_2466_, 1);
return v_a_2469_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_toBaseIO___boxed(lean_object* v_00_u03b5_2470_, lean_object* v_00_u03b1_2471_, lean_object* v_x_2472_, lean_object* v___y_2473_){
_start:
{
lean_object* v_res_2474_; 
v_res_2474_ = l_Std_Async_EAsync_toBaseIO(v_00_u03b5_2470_, v_00_u03b1_2471_, v_x_2472_);
return v_res_2474_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_ofTask___redArg(lean_object* v_x_2475_){
_start:
{
lean_object* v___x_2477_; 
v___x_2477_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2477_, 0, v_x_2475_);
return v___x_2477_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_ofTask___redArg___boxed(lean_object* v_x_2478_, lean_object* v___y_2479_){
_start:
{
lean_object* v_res_2480_; 
v_res_2480_ = l_Std_Async_EAsync_ofTask___redArg(v_x_2478_);
return v_res_2480_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_ofTask(lean_object* v_00_u03b5_2481_, lean_object* v_00_u03b1_2482_, lean_object* v_x_2483_){
_start:
{
lean_object* v___x_2485_; 
v___x_2485_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2485_, 0, v_x_2483_);
return v___x_2485_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_ofTask___boxed(lean_object* v_00_u03b5_2486_, lean_object* v_00_u03b1_2487_, lean_object* v_x_2488_, lean_object* v___y_2489_){
_start:
{
lean_object* v_res_2490_; 
v_res_2490_ = l_Std_Async_EAsync_ofTask(v_00_u03b5_2486_, v_00_u03b1_2487_, v_x_2488_);
return v_res_2490_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_toEIO___redArg(lean_object* v_x_2491_){
_start:
{
lean_object* v___x_2493_; 
v___x_2493_ = lean_apply_1(v_x_2491_, lean_box(0));
if (lean_obj_tag(v___x_2493_) == 0)
{
lean_object* v_a_2494_; lean_object* v___x_2496_; uint8_t v_isShared_2497_; uint8_t v_isSharedCheck_2502_; 
v_a_2494_ = lean_ctor_get(v___x_2493_, 0);
v_isSharedCheck_2502_ = !lean_is_exclusive(v___x_2493_);
if (v_isSharedCheck_2502_ == 0)
{
v___x_2496_ = v___x_2493_;
v_isShared_2497_ = v_isSharedCheck_2502_;
goto v_resetjp_2495_;
}
else
{
lean_inc(v_a_2494_);
lean_dec(v___x_2493_);
v___x_2496_ = lean_box(0);
v_isShared_2497_ = v_isSharedCheck_2502_;
goto v_resetjp_2495_;
}
v_resetjp_2495_:
{
lean_object* v___x_2498_; lean_object* v___x_2500_; 
v___x_2498_ = lean_task_pure(v_a_2494_);
if (v_isShared_2497_ == 0)
{
lean_ctor_set(v___x_2496_, 0, v___x_2498_);
v___x_2500_ = v___x_2496_;
goto v_reusejp_2499_;
}
else
{
lean_object* v_reuseFailAlloc_2501_; 
v_reuseFailAlloc_2501_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2501_, 0, v___x_2498_);
v___x_2500_ = v_reuseFailAlloc_2501_;
goto v_reusejp_2499_;
}
v_reusejp_2499_:
{
return v___x_2500_;
}
}
}
else
{
lean_object* v_a_2503_; lean_object* v___x_2505_; uint8_t v_isShared_2506_; uint8_t v_isSharedCheck_2510_; 
v_a_2503_ = lean_ctor_get(v___x_2493_, 0);
v_isSharedCheck_2510_ = !lean_is_exclusive(v___x_2493_);
if (v_isSharedCheck_2510_ == 0)
{
v___x_2505_ = v___x_2493_;
v_isShared_2506_ = v_isSharedCheck_2510_;
goto v_resetjp_2504_;
}
else
{
lean_inc(v_a_2503_);
lean_dec(v___x_2493_);
v___x_2505_ = lean_box(0);
v_isShared_2506_ = v_isSharedCheck_2510_;
goto v_resetjp_2504_;
}
v_resetjp_2504_:
{
lean_object* v___x_2508_; 
if (v_isShared_2506_ == 0)
{
lean_ctor_set_tag(v___x_2505_, 0);
v___x_2508_ = v___x_2505_;
goto v_reusejp_2507_;
}
else
{
lean_object* v_reuseFailAlloc_2509_; 
v_reuseFailAlloc_2509_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2509_, 0, v_a_2503_);
v___x_2508_ = v_reuseFailAlloc_2509_;
goto v_reusejp_2507_;
}
v_reusejp_2507_:
{
return v___x_2508_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_toEIO___redArg___boxed(lean_object* v_x_2511_, lean_object* v___y_2512_){
_start:
{
lean_object* v_res_2513_; 
v_res_2513_ = l_Std_Async_EAsync_toEIO___redArg(v_x_2511_);
return v_res_2513_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_toEIO(lean_object* v_00_u03b5_2514_, lean_object* v_00_u03b1_2515_, lean_object* v_x_2516_){
_start:
{
lean_object* v___x_2518_; 
v___x_2518_ = lean_apply_1(v_x_2516_, lean_box(0));
if (lean_obj_tag(v___x_2518_) == 0)
{
lean_object* v_a_2519_; lean_object* v___x_2521_; uint8_t v_isShared_2522_; uint8_t v_isSharedCheck_2527_; 
v_a_2519_ = lean_ctor_get(v___x_2518_, 0);
v_isSharedCheck_2527_ = !lean_is_exclusive(v___x_2518_);
if (v_isSharedCheck_2527_ == 0)
{
v___x_2521_ = v___x_2518_;
v_isShared_2522_ = v_isSharedCheck_2527_;
goto v_resetjp_2520_;
}
else
{
lean_inc(v_a_2519_);
lean_dec(v___x_2518_);
v___x_2521_ = lean_box(0);
v_isShared_2522_ = v_isSharedCheck_2527_;
goto v_resetjp_2520_;
}
v_resetjp_2520_:
{
lean_object* v___x_2523_; lean_object* v___x_2525_; 
v___x_2523_ = lean_task_pure(v_a_2519_);
if (v_isShared_2522_ == 0)
{
lean_ctor_set(v___x_2521_, 0, v___x_2523_);
v___x_2525_ = v___x_2521_;
goto v_reusejp_2524_;
}
else
{
lean_object* v_reuseFailAlloc_2526_; 
v_reuseFailAlloc_2526_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2526_, 0, v___x_2523_);
v___x_2525_ = v_reuseFailAlloc_2526_;
goto v_reusejp_2524_;
}
v_reusejp_2524_:
{
return v___x_2525_;
}
}
}
else
{
lean_object* v_a_2528_; lean_object* v___x_2530_; uint8_t v_isShared_2531_; uint8_t v_isSharedCheck_2535_; 
v_a_2528_ = lean_ctor_get(v___x_2518_, 0);
v_isSharedCheck_2535_ = !lean_is_exclusive(v___x_2518_);
if (v_isSharedCheck_2535_ == 0)
{
v___x_2530_ = v___x_2518_;
v_isShared_2531_ = v_isSharedCheck_2535_;
goto v_resetjp_2529_;
}
else
{
lean_inc(v_a_2528_);
lean_dec(v___x_2518_);
v___x_2530_ = lean_box(0);
v_isShared_2531_ = v_isSharedCheck_2535_;
goto v_resetjp_2529_;
}
v_resetjp_2529_:
{
lean_object* v___x_2533_; 
if (v_isShared_2531_ == 0)
{
lean_ctor_set_tag(v___x_2530_, 0);
v___x_2533_ = v___x_2530_;
goto v_reusejp_2532_;
}
else
{
lean_object* v_reuseFailAlloc_2534_; 
v_reuseFailAlloc_2534_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2534_, 0, v_a_2528_);
v___x_2533_ = v_reuseFailAlloc_2534_;
goto v_reusejp_2532_;
}
v_reusejp_2532_:
{
return v___x_2533_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_toEIO___boxed(lean_object* v_00_u03b5_2536_, lean_object* v_00_u03b1_2537_, lean_object* v_x_2538_, lean_object* v___y_2539_){
_start:
{
lean_object* v_res_2540_; 
v_res_2540_ = l_Std_Async_EAsync_toEIO(v_00_u03b5_2536_, v_00_u03b1_2537_, v_x_2538_);
return v_res_2540_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_ofETask___redArg(lean_object* v_x_2541_){
_start:
{
lean_object* v___x_2543_; 
v___x_2543_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2543_, 0, v_x_2541_);
return v___x_2543_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_ofETask___redArg___boxed(lean_object* v_x_2544_, lean_object* v___y_2545_){
_start:
{
lean_object* v_res_2546_; 
v_res_2546_ = l_Std_Async_EAsync_ofETask___redArg(v_x_2544_);
return v_res_2546_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_ofETask(lean_object* v_00_u03b5_2547_, lean_object* v_00_u03b1_2548_, lean_object* v_x_2549_){
_start:
{
lean_object* v___x_2551_; 
v___x_2551_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2551_, 0, v_x_2549_);
return v___x_2551_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_ofETask___boxed(lean_object* v_00_u03b5_2552_, lean_object* v_00_u03b1_2553_, lean_object* v_x_2554_, lean_object* v___y_2555_){
_start:
{
lean_object* v_res_2556_; 
v_res_2556_ = l_Std_Async_EAsync_ofETask(v_00_u03b5_2552_, v_00_u03b1_2553_, v_x_2554_);
return v_res_2556_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_pure___redArg(lean_object* v_a_2557_){
_start:
{
lean_object* v___x_2559_; lean_object* v___x_2560_; 
v___x_2559_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2559_, 0, v_a_2557_);
v___x_2560_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2560_, 0, v___x_2559_);
return v___x_2560_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_pure___redArg___boxed(lean_object* v_a_2561_, lean_object* v___y_2562_){
_start:
{
lean_object* v_res_2563_; 
v_res_2563_ = l_Std_Async_EAsync_pure___redArg(v_a_2561_);
return v_res_2563_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_pure(lean_object* v_00_u03b1_2564_, lean_object* v_00_u03b5_2565_, lean_object* v_a_2566_){
_start:
{
lean_object* v___x_2568_; lean_object* v___x_2569_; 
v___x_2568_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2568_, 0, v_a_2566_);
v___x_2569_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2569_, 0, v___x_2568_);
return v___x_2569_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_pure___boxed(lean_object* v_00_u03b1_2570_, lean_object* v_00_u03b5_2571_, lean_object* v_a_2572_, lean_object* v___y_2573_){
_start:
{
lean_object* v_res_2574_; 
v_res_2574_ = l_Std_Async_EAsync_pure(v_00_u03b1_2570_, v_00_u03b5_2571_, v_a_2572_);
return v_res_2574_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_map___redArg(lean_object* v_f_2575_, lean_object* v_self_2576_){
_start:
{
lean_object* v___x_2578_; lean_object* v___x_2579_; uint8_t v___x_2580_; lean_object* v___x_2581_; lean_object* v___y_2583_; 
lean_inc(v_f_2575_);
v___x_2578_ = lean_alloc_closure((void*)(l_Except_map), 5, 4);
lean_closure_set(v___x_2578_, 0, lean_box(0));
lean_closure_set(v___x_2578_, 1, lean_box(0));
lean_closure_set(v___x_2578_, 2, lean_box(0));
lean_closure_set(v___x_2578_, 3, v_f_2575_);
v___x_2579_ = lean_unsigned_to_nat(0u);
v___x_2580_ = 0;
v___x_2581_ = lean_apply_1(v_self_2576_, lean_box(0));
if (lean_obj_tag(v___x_2581_) == 0)
{
lean_object* v_a_2585_; 
lean_dec_ref(v___x_2578_);
v_a_2585_ = lean_ctor_get(v___x_2581_, 0);
lean_inc(v_a_2585_);
lean_dec_ref_known(v___x_2581_, 1);
if (lean_obj_tag(v_a_2585_) == 0)
{
lean_object* v_a_2586_; lean_object* v___x_2588_; uint8_t v_isShared_2589_; uint8_t v_isSharedCheck_2593_; 
lean_dec(v_f_2575_);
v_a_2586_ = lean_ctor_get(v_a_2585_, 0);
v_isSharedCheck_2593_ = !lean_is_exclusive(v_a_2585_);
if (v_isSharedCheck_2593_ == 0)
{
v___x_2588_ = v_a_2585_;
v_isShared_2589_ = v_isSharedCheck_2593_;
goto v_resetjp_2587_;
}
else
{
lean_inc(v_a_2586_);
lean_dec(v_a_2585_);
v___x_2588_ = lean_box(0);
v_isShared_2589_ = v_isSharedCheck_2593_;
goto v_resetjp_2587_;
}
v_resetjp_2587_:
{
lean_object* v___x_2591_; 
if (v_isShared_2589_ == 0)
{
v___x_2591_ = v___x_2588_;
goto v_reusejp_2590_;
}
else
{
lean_object* v_reuseFailAlloc_2592_; 
v_reuseFailAlloc_2592_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2592_, 0, v_a_2586_);
v___x_2591_ = v_reuseFailAlloc_2592_;
goto v_reusejp_2590_;
}
v_reusejp_2590_:
{
v___y_2583_ = v___x_2591_;
goto v___jp_2582_;
}
}
}
else
{
lean_object* v_a_2594_; lean_object* v___x_2596_; uint8_t v_isShared_2597_; uint8_t v_isSharedCheck_2602_; 
v_a_2594_ = lean_ctor_get(v_a_2585_, 0);
v_isSharedCheck_2602_ = !lean_is_exclusive(v_a_2585_);
if (v_isSharedCheck_2602_ == 0)
{
v___x_2596_ = v_a_2585_;
v_isShared_2597_ = v_isSharedCheck_2602_;
goto v_resetjp_2595_;
}
else
{
lean_inc(v_a_2594_);
lean_dec(v_a_2585_);
v___x_2596_ = lean_box(0);
v_isShared_2597_ = v_isSharedCheck_2602_;
goto v_resetjp_2595_;
}
v_resetjp_2595_:
{
lean_object* v___x_2598_; lean_object* v___x_2600_; 
v___x_2598_ = lean_apply_1(v_f_2575_, v_a_2594_);
if (v_isShared_2597_ == 0)
{
lean_ctor_set(v___x_2596_, 0, v___x_2598_);
v___x_2600_ = v___x_2596_;
goto v_reusejp_2599_;
}
else
{
lean_object* v_reuseFailAlloc_2601_; 
v_reuseFailAlloc_2601_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2601_, 0, v___x_2598_);
v___x_2600_ = v_reuseFailAlloc_2601_;
goto v_reusejp_2599_;
}
v_reusejp_2599_:
{
v___y_2583_ = v___x_2600_;
goto v___jp_2582_;
}
}
}
}
else
{
lean_object* v_a_2603_; lean_object* v___x_2605_; uint8_t v_isShared_2606_; uint8_t v_isSharedCheck_2611_; 
lean_dec(v_f_2575_);
v_a_2603_ = lean_ctor_get(v___x_2581_, 0);
v_isSharedCheck_2611_ = !lean_is_exclusive(v___x_2581_);
if (v_isSharedCheck_2611_ == 0)
{
v___x_2605_ = v___x_2581_;
v_isShared_2606_ = v_isSharedCheck_2611_;
goto v_resetjp_2604_;
}
else
{
lean_inc(v_a_2603_);
lean_dec(v___x_2581_);
v___x_2605_ = lean_box(0);
v_isShared_2606_ = v_isSharedCheck_2611_;
goto v_resetjp_2604_;
}
v_resetjp_2604_:
{
lean_object* v___x_2607_; lean_object* v___x_2609_; 
v___x_2607_ = lean_task_map(v___x_2578_, v_a_2603_, v___x_2579_, v___x_2580_);
if (v_isShared_2606_ == 0)
{
lean_ctor_set(v___x_2605_, 0, v___x_2607_);
v___x_2609_ = v___x_2605_;
goto v_reusejp_2608_;
}
else
{
lean_object* v_reuseFailAlloc_2610_; 
v_reuseFailAlloc_2610_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2610_, 0, v___x_2607_);
v___x_2609_ = v_reuseFailAlloc_2610_;
goto v_reusejp_2608_;
}
v_reusejp_2608_:
{
return v___x_2609_;
}
}
}
v___jp_2582_:
{
lean_object* v___x_2584_; 
v___x_2584_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2584_, 0, v___y_2583_);
return v___x_2584_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_map___redArg___boxed(lean_object* v_f_2612_, lean_object* v_self_2613_, lean_object* v___y_2614_){
_start:
{
lean_object* v_res_2615_; 
v_res_2615_ = l_Std_Async_EAsync_map___redArg(v_f_2612_, v_self_2613_);
return v_res_2615_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_map(lean_object* v_00_u03b1_2616_, lean_object* v_00_u03b2_2617_, lean_object* v_00_u03b5_2618_, lean_object* v_f_2619_, lean_object* v_self_2620_){
_start:
{
lean_object* v___x_2622_; lean_object* v___x_2623_; uint8_t v___x_2624_; lean_object* v___x_2625_; lean_object* v___y_2627_; 
lean_inc(v_f_2619_);
v___x_2622_ = lean_alloc_closure((void*)(l_Except_map), 5, 4);
lean_closure_set(v___x_2622_, 0, lean_box(0));
lean_closure_set(v___x_2622_, 1, lean_box(0));
lean_closure_set(v___x_2622_, 2, lean_box(0));
lean_closure_set(v___x_2622_, 3, v_f_2619_);
v___x_2623_ = lean_unsigned_to_nat(0u);
v___x_2624_ = 0;
v___x_2625_ = lean_apply_1(v_self_2620_, lean_box(0));
if (lean_obj_tag(v___x_2625_) == 0)
{
lean_object* v_a_2629_; 
lean_dec_ref(v___x_2622_);
v_a_2629_ = lean_ctor_get(v___x_2625_, 0);
lean_inc(v_a_2629_);
lean_dec_ref_known(v___x_2625_, 1);
if (lean_obj_tag(v_a_2629_) == 0)
{
lean_object* v_a_2630_; lean_object* v___x_2632_; uint8_t v_isShared_2633_; uint8_t v_isSharedCheck_2637_; 
lean_dec(v_f_2619_);
v_a_2630_ = lean_ctor_get(v_a_2629_, 0);
v_isSharedCheck_2637_ = !lean_is_exclusive(v_a_2629_);
if (v_isSharedCheck_2637_ == 0)
{
v___x_2632_ = v_a_2629_;
v_isShared_2633_ = v_isSharedCheck_2637_;
goto v_resetjp_2631_;
}
else
{
lean_inc(v_a_2630_);
lean_dec(v_a_2629_);
v___x_2632_ = lean_box(0);
v_isShared_2633_ = v_isSharedCheck_2637_;
goto v_resetjp_2631_;
}
v_resetjp_2631_:
{
lean_object* v___x_2635_; 
if (v_isShared_2633_ == 0)
{
v___x_2635_ = v___x_2632_;
goto v_reusejp_2634_;
}
else
{
lean_object* v_reuseFailAlloc_2636_; 
v_reuseFailAlloc_2636_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2636_, 0, v_a_2630_);
v___x_2635_ = v_reuseFailAlloc_2636_;
goto v_reusejp_2634_;
}
v_reusejp_2634_:
{
v___y_2627_ = v___x_2635_;
goto v___jp_2626_;
}
}
}
else
{
lean_object* v_a_2638_; lean_object* v___x_2640_; uint8_t v_isShared_2641_; uint8_t v_isSharedCheck_2646_; 
v_a_2638_ = lean_ctor_get(v_a_2629_, 0);
v_isSharedCheck_2646_ = !lean_is_exclusive(v_a_2629_);
if (v_isSharedCheck_2646_ == 0)
{
v___x_2640_ = v_a_2629_;
v_isShared_2641_ = v_isSharedCheck_2646_;
goto v_resetjp_2639_;
}
else
{
lean_inc(v_a_2638_);
lean_dec(v_a_2629_);
v___x_2640_ = lean_box(0);
v_isShared_2641_ = v_isSharedCheck_2646_;
goto v_resetjp_2639_;
}
v_resetjp_2639_:
{
lean_object* v___x_2642_; lean_object* v___x_2644_; 
v___x_2642_ = lean_apply_1(v_f_2619_, v_a_2638_);
if (v_isShared_2641_ == 0)
{
lean_ctor_set(v___x_2640_, 0, v___x_2642_);
v___x_2644_ = v___x_2640_;
goto v_reusejp_2643_;
}
else
{
lean_object* v_reuseFailAlloc_2645_; 
v_reuseFailAlloc_2645_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2645_, 0, v___x_2642_);
v___x_2644_ = v_reuseFailAlloc_2645_;
goto v_reusejp_2643_;
}
v_reusejp_2643_:
{
v___y_2627_ = v___x_2644_;
goto v___jp_2626_;
}
}
}
}
else
{
lean_object* v_a_2647_; lean_object* v___x_2649_; uint8_t v_isShared_2650_; uint8_t v_isSharedCheck_2655_; 
lean_dec(v_f_2619_);
v_a_2647_ = lean_ctor_get(v___x_2625_, 0);
v_isSharedCheck_2655_ = !lean_is_exclusive(v___x_2625_);
if (v_isSharedCheck_2655_ == 0)
{
v___x_2649_ = v___x_2625_;
v_isShared_2650_ = v_isSharedCheck_2655_;
goto v_resetjp_2648_;
}
else
{
lean_inc(v_a_2647_);
lean_dec(v___x_2625_);
v___x_2649_ = lean_box(0);
v_isShared_2650_ = v_isSharedCheck_2655_;
goto v_resetjp_2648_;
}
v_resetjp_2648_:
{
lean_object* v___x_2651_; lean_object* v___x_2653_; 
v___x_2651_ = lean_task_map(v___x_2622_, v_a_2647_, v___x_2623_, v___x_2624_);
if (v_isShared_2650_ == 0)
{
lean_ctor_set(v___x_2649_, 0, v___x_2651_);
v___x_2653_ = v___x_2649_;
goto v_reusejp_2652_;
}
else
{
lean_object* v_reuseFailAlloc_2654_; 
v_reuseFailAlloc_2654_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2654_, 0, v___x_2651_);
v___x_2653_ = v_reuseFailAlloc_2654_;
goto v_reusejp_2652_;
}
v_reusejp_2652_:
{
return v___x_2653_;
}
}
}
v___jp_2626_:
{
lean_object* v___x_2628_; 
v___x_2628_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2628_, 0, v___y_2627_);
return v___x_2628_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_map___boxed(lean_object* v_00_u03b1_2656_, lean_object* v_00_u03b2_2657_, lean_object* v_00_u03b5_2658_, lean_object* v_f_2659_, lean_object* v_self_2660_, lean_object* v___y_2661_){
_start:
{
lean_object* v_res_2662_; 
v_res_2662_ = l_Std_Async_EAsync_map(v_00_u03b1_2656_, v_00_u03b2_2657_, v_00_u03b5_2658_, v_f_2659_, v_self_2660_);
return v_res_2662_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_bind___redArg___lam__0(lean_object* v_f_2663_, lean_object* v_x_2664_){
_start:
{
if (lean_obj_tag(v_x_2664_) == 0)
{
lean_object* v_a_2666_; lean_object* v___x_2668_; uint8_t v_isShared_2669_; uint8_t v_isSharedCheck_2674_; 
lean_dec_ref(v_f_2663_);
v_a_2666_ = lean_ctor_get(v_x_2664_, 0);
v_isSharedCheck_2674_ = !lean_is_exclusive(v_x_2664_);
if (v_isSharedCheck_2674_ == 0)
{
v___x_2668_ = v_x_2664_;
v_isShared_2669_ = v_isSharedCheck_2674_;
goto v_resetjp_2667_;
}
else
{
lean_inc(v_a_2666_);
lean_dec(v_x_2664_);
v___x_2668_ = lean_box(0);
v_isShared_2669_ = v_isSharedCheck_2674_;
goto v_resetjp_2667_;
}
v_resetjp_2667_:
{
lean_object* v___x_2671_; 
if (v_isShared_2669_ == 0)
{
v___x_2671_ = v___x_2668_;
goto v_reusejp_2670_;
}
else
{
lean_object* v_reuseFailAlloc_2673_; 
v_reuseFailAlloc_2673_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2673_, 0, v_a_2666_);
v___x_2671_ = v_reuseFailAlloc_2673_;
goto v_reusejp_2670_;
}
v_reusejp_2670_:
{
lean_object* v___x_2672_; 
v___x_2672_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2672_, 0, v___x_2671_);
return v___x_2672_;
}
}
}
else
{
lean_object* v_a_2675_; lean_object* v___x_2676_; 
v_a_2675_ = lean_ctor_get(v_x_2664_, 0);
lean_inc(v_a_2675_);
lean_dec_ref_known(v_x_2664_, 1);
v___x_2676_ = lean_apply_2(v_f_2663_, v_a_2675_, lean_box(0));
return v___x_2676_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_bind___redArg___lam__0___boxed(lean_object* v_f_2677_, lean_object* v_x_2678_, lean_object* v___y_2679_){
_start:
{
lean_object* v_res_2680_; 
v_res_2680_ = l_Std_Async_EAsync_bind___redArg___lam__0(v_f_2677_, v_x_2678_);
return v_res_2680_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_bind___redArg(lean_object* v_self_2681_, lean_object* v_f_2682_){
_start:
{
lean_object* v___f_2684_; lean_object* v___x_2685_; uint8_t v___x_2686_; lean_object* v___x_2687_; lean_object* v___x_2688_; 
v___f_2684_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_bind___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_2684_, 0, v_f_2682_);
v___x_2685_ = lean_unsigned_to_nat(0u);
v___x_2686_ = 0;
v___x_2687_ = lean_apply_1(v_self_2681_, lean_box(0));
v___x_2688_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2685_, v___x_2686_, v___x_2687_, v___f_2684_);
return v___x_2688_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_bind___redArg___boxed(lean_object* v_self_2689_, lean_object* v_f_2690_, lean_object* v___y_2691_){
_start:
{
lean_object* v_res_2692_; 
v_res_2692_ = l_Std_Async_EAsync_bind___redArg(v_self_2689_, v_f_2690_);
return v_res_2692_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_bind(lean_object* v_00_u03b5_2693_, lean_object* v_00_u03b1_2694_, lean_object* v_00_u03b2_2695_, lean_object* v_self_2696_, lean_object* v_f_2697_){
_start:
{
lean_object* v___f_2699_; lean_object* v___x_2700_; uint8_t v___x_2701_; lean_object* v___x_2702_; lean_object* v___x_2703_; 
v___f_2699_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_bind___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_2699_, 0, v_f_2697_);
v___x_2700_ = lean_unsigned_to_nat(0u);
v___x_2701_ = 0;
v___x_2702_ = lean_apply_1(v_self_2696_, lean_box(0));
v___x_2703_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2700_, v___x_2701_, v___x_2702_, v___f_2699_);
return v___x_2703_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_bind___boxed(lean_object* v_00_u03b5_2704_, lean_object* v_00_u03b1_2705_, lean_object* v_00_u03b2_2706_, lean_object* v_self_2707_, lean_object* v_f_2708_, lean_object* v___y_2709_){
_start:
{
lean_object* v_res_2710_; 
v_res_2710_ = l_Std_Async_EAsync_bind(v_00_u03b5_2704_, v_00_u03b1_2705_, v_00_u03b2_2706_, v_self_2707_, v_f_2708_);
return v_res_2710_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_lift___redArg(lean_object* v_x_2711_){
_start:
{
lean_object* v_val_2714_; lean_object* v___x_2716_; 
v___x_2716_ = lean_apply_1(v_x_2711_, lean_box(0));
if (lean_obj_tag(v___x_2716_) == 0)
{
lean_object* v_a_2717_; lean_object* v___x_2719_; uint8_t v_isShared_2720_; uint8_t v_isSharedCheck_2724_; 
v_a_2717_ = lean_ctor_get(v___x_2716_, 0);
v_isSharedCheck_2724_ = !lean_is_exclusive(v___x_2716_);
if (v_isSharedCheck_2724_ == 0)
{
v___x_2719_ = v___x_2716_;
v_isShared_2720_ = v_isSharedCheck_2724_;
goto v_resetjp_2718_;
}
else
{
lean_inc(v_a_2717_);
lean_dec(v___x_2716_);
v___x_2719_ = lean_box(0);
v_isShared_2720_ = v_isSharedCheck_2724_;
goto v_resetjp_2718_;
}
v_resetjp_2718_:
{
lean_object* v___x_2722_; 
if (v_isShared_2720_ == 0)
{
lean_ctor_set_tag(v___x_2719_, 1);
v___x_2722_ = v___x_2719_;
goto v_reusejp_2721_;
}
else
{
lean_object* v_reuseFailAlloc_2723_; 
v_reuseFailAlloc_2723_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2723_, 0, v_a_2717_);
v___x_2722_ = v_reuseFailAlloc_2723_;
goto v_reusejp_2721_;
}
v_reusejp_2721_:
{
v_val_2714_ = v___x_2722_;
goto v___jp_2713_;
}
}
}
else
{
lean_object* v_a_2725_; lean_object* v___x_2727_; uint8_t v_isShared_2728_; uint8_t v_isSharedCheck_2732_; 
v_a_2725_ = lean_ctor_get(v___x_2716_, 0);
v_isSharedCheck_2732_ = !lean_is_exclusive(v___x_2716_);
if (v_isSharedCheck_2732_ == 0)
{
v___x_2727_ = v___x_2716_;
v_isShared_2728_ = v_isSharedCheck_2732_;
goto v_resetjp_2726_;
}
else
{
lean_inc(v_a_2725_);
lean_dec(v___x_2716_);
v___x_2727_ = lean_box(0);
v_isShared_2728_ = v_isSharedCheck_2732_;
goto v_resetjp_2726_;
}
v_resetjp_2726_:
{
lean_object* v___x_2730_; 
if (v_isShared_2728_ == 0)
{
lean_ctor_set_tag(v___x_2727_, 0);
v___x_2730_ = v___x_2727_;
goto v_reusejp_2729_;
}
else
{
lean_object* v_reuseFailAlloc_2731_; 
v_reuseFailAlloc_2731_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2731_, 0, v_a_2725_);
v___x_2730_ = v_reuseFailAlloc_2731_;
goto v_reusejp_2729_;
}
v_reusejp_2729_:
{
v_val_2714_ = v___x_2730_;
goto v___jp_2713_;
}
}
}
v___jp_2713_:
{
lean_object* v___x_2715_; 
v___x_2715_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2715_, 0, v_val_2714_);
return v___x_2715_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_lift___redArg___boxed(lean_object* v_x_2733_, lean_object* v___y_2734_){
_start:
{
lean_object* v_res_2735_; 
v_res_2735_ = l_Std_Async_EAsync_lift___redArg(v_x_2733_);
return v_res_2735_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_lift(lean_object* v_00_u03b5_2736_, lean_object* v_00_u03b1_2737_, lean_object* v_x_2738_){
_start:
{
lean_object* v_val_2741_; lean_object* v___x_2743_; 
v___x_2743_ = lean_apply_1(v_x_2738_, lean_box(0));
if (lean_obj_tag(v___x_2743_) == 0)
{
lean_object* v_a_2744_; lean_object* v___x_2746_; uint8_t v_isShared_2747_; uint8_t v_isSharedCheck_2751_; 
v_a_2744_ = lean_ctor_get(v___x_2743_, 0);
v_isSharedCheck_2751_ = !lean_is_exclusive(v___x_2743_);
if (v_isSharedCheck_2751_ == 0)
{
v___x_2746_ = v___x_2743_;
v_isShared_2747_ = v_isSharedCheck_2751_;
goto v_resetjp_2745_;
}
else
{
lean_inc(v_a_2744_);
lean_dec(v___x_2743_);
v___x_2746_ = lean_box(0);
v_isShared_2747_ = v_isSharedCheck_2751_;
goto v_resetjp_2745_;
}
v_resetjp_2745_:
{
lean_object* v___x_2749_; 
if (v_isShared_2747_ == 0)
{
lean_ctor_set_tag(v___x_2746_, 1);
v___x_2749_ = v___x_2746_;
goto v_reusejp_2748_;
}
else
{
lean_object* v_reuseFailAlloc_2750_; 
v_reuseFailAlloc_2750_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2750_, 0, v_a_2744_);
v___x_2749_ = v_reuseFailAlloc_2750_;
goto v_reusejp_2748_;
}
v_reusejp_2748_:
{
v_val_2741_ = v___x_2749_;
goto v___jp_2740_;
}
}
}
else
{
lean_object* v_a_2752_; lean_object* v___x_2754_; uint8_t v_isShared_2755_; uint8_t v_isSharedCheck_2759_; 
v_a_2752_ = lean_ctor_get(v___x_2743_, 0);
v_isSharedCheck_2759_ = !lean_is_exclusive(v___x_2743_);
if (v_isSharedCheck_2759_ == 0)
{
v___x_2754_ = v___x_2743_;
v_isShared_2755_ = v_isSharedCheck_2759_;
goto v_resetjp_2753_;
}
else
{
lean_inc(v_a_2752_);
lean_dec(v___x_2743_);
v___x_2754_ = lean_box(0);
v_isShared_2755_ = v_isSharedCheck_2759_;
goto v_resetjp_2753_;
}
v_resetjp_2753_:
{
lean_object* v___x_2757_; 
if (v_isShared_2755_ == 0)
{
lean_ctor_set_tag(v___x_2754_, 0);
v___x_2757_ = v___x_2754_;
goto v_reusejp_2756_;
}
else
{
lean_object* v_reuseFailAlloc_2758_; 
v_reuseFailAlloc_2758_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2758_, 0, v_a_2752_);
v___x_2757_ = v_reuseFailAlloc_2758_;
goto v_reusejp_2756_;
}
v_reusejp_2756_:
{
v_val_2741_ = v___x_2757_;
goto v___jp_2740_;
}
}
}
v___jp_2740_:
{
lean_object* v___x_2742_; 
v___x_2742_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2742_, 0, v_val_2741_);
return v___x_2742_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_lift___boxed(lean_object* v_00_u03b5_2760_, lean_object* v_00_u03b1_2761_, lean_object* v_x_2762_, lean_object* v___y_2763_){
_start:
{
lean_object* v_res_2764_; 
v_res_2764_ = l_Std_Async_EAsync_lift(v_00_u03b5_2760_, v_00_u03b1_2761_, v_x_2762_);
return v_res_2764_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_wait___redArg(lean_object* v_self_2765_){
_start:
{
lean_object* v_val_2768_; lean_object* v___x_2786_; 
v___x_2786_ = lean_apply_1(v_self_2765_, lean_box(0));
if (lean_obj_tag(v___x_2786_) == 0)
{
lean_object* v_a_2787_; lean_object* v___x_2788_; 
v_a_2787_ = lean_ctor_get(v___x_2786_, 0);
lean_inc(v_a_2787_);
lean_dec_ref_known(v___x_2786_, 1);
v___x_2788_ = lean_task_pure(v_a_2787_);
v_val_2768_ = v___x_2788_;
goto v___jp_2767_;
}
else
{
lean_object* v_a_2789_; 
v_a_2789_ = lean_ctor_get(v___x_2786_, 0);
lean_inc_ref(v_a_2789_);
lean_dec_ref_known(v___x_2786_, 1);
v_val_2768_ = v_a_2789_;
goto v___jp_2767_;
}
v___jp_2767_:
{
lean_object* v___x_2769_; 
v___x_2769_ = lean_task_get_own(v_val_2768_);
if (lean_obj_tag(v___x_2769_) == 0)
{
lean_object* v_a_2770_; lean_object* v___x_2772_; uint8_t v_isShared_2773_; uint8_t v_isSharedCheck_2777_; 
v_a_2770_ = lean_ctor_get(v___x_2769_, 0);
v_isSharedCheck_2777_ = !lean_is_exclusive(v___x_2769_);
if (v_isSharedCheck_2777_ == 0)
{
v___x_2772_ = v___x_2769_;
v_isShared_2773_ = v_isSharedCheck_2777_;
goto v_resetjp_2771_;
}
else
{
lean_inc(v_a_2770_);
lean_dec(v___x_2769_);
v___x_2772_ = lean_box(0);
v_isShared_2773_ = v_isSharedCheck_2777_;
goto v_resetjp_2771_;
}
v_resetjp_2771_:
{
lean_object* v___x_2775_; 
if (v_isShared_2773_ == 0)
{
lean_ctor_set_tag(v___x_2772_, 1);
v___x_2775_ = v___x_2772_;
goto v_reusejp_2774_;
}
else
{
lean_object* v_reuseFailAlloc_2776_; 
v_reuseFailAlloc_2776_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2776_, 0, v_a_2770_);
v___x_2775_ = v_reuseFailAlloc_2776_;
goto v_reusejp_2774_;
}
v_reusejp_2774_:
{
return v___x_2775_;
}
}
}
else
{
lean_object* v_a_2778_; lean_object* v___x_2780_; uint8_t v_isShared_2781_; uint8_t v_isSharedCheck_2785_; 
v_a_2778_ = lean_ctor_get(v___x_2769_, 0);
v_isSharedCheck_2785_ = !lean_is_exclusive(v___x_2769_);
if (v_isSharedCheck_2785_ == 0)
{
v___x_2780_ = v___x_2769_;
v_isShared_2781_ = v_isSharedCheck_2785_;
goto v_resetjp_2779_;
}
else
{
lean_inc(v_a_2778_);
lean_dec(v___x_2769_);
v___x_2780_ = lean_box(0);
v_isShared_2781_ = v_isSharedCheck_2785_;
goto v_resetjp_2779_;
}
v_resetjp_2779_:
{
lean_object* v___x_2783_; 
if (v_isShared_2781_ == 0)
{
lean_ctor_set_tag(v___x_2780_, 0);
v___x_2783_ = v___x_2780_;
goto v_reusejp_2782_;
}
else
{
lean_object* v_reuseFailAlloc_2784_; 
v_reuseFailAlloc_2784_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2784_, 0, v_a_2778_);
v___x_2783_ = v_reuseFailAlloc_2784_;
goto v_reusejp_2782_;
}
v_reusejp_2782_:
{
return v___x_2783_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_wait___redArg___boxed(lean_object* v_self_2790_, lean_object* v___y_2791_){
_start:
{
lean_object* v_res_2792_; 
v_res_2792_ = l_Std_Async_EAsync_wait___redArg(v_self_2790_);
return v_res_2792_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_wait(lean_object* v_00_u03b5_2793_, lean_object* v_00_u03b1_2794_, lean_object* v_self_2795_){
_start:
{
lean_object* v_val_2798_; lean_object* v___x_2816_; 
v___x_2816_ = lean_apply_1(v_self_2795_, lean_box(0));
if (lean_obj_tag(v___x_2816_) == 0)
{
lean_object* v_a_2817_; lean_object* v___x_2818_; 
v_a_2817_ = lean_ctor_get(v___x_2816_, 0);
lean_inc(v_a_2817_);
lean_dec_ref_known(v___x_2816_, 1);
v___x_2818_ = lean_task_pure(v_a_2817_);
v_val_2798_ = v___x_2818_;
goto v___jp_2797_;
}
else
{
lean_object* v_a_2819_; 
v_a_2819_ = lean_ctor_get(v___x_2816_, 0);
lean_inc_ref(v_a_2819_);
lean_dec_ref_known(v___x_2816_, 1);
v_val_2798_ = v_a_2819_;
goto v___jp_2797_;
}
v___jp_2797_:
{
lean_object* v___x_2799_; 
v___x_2799_ = lean_task_get_own(v_val_2798_);
if (lean_obj_tag(v___x_2799_) == 0)
{
lean_object* v_a_2800_; lean_object* v___x_2802_; uint8_t v_isShared_2803_; uint8_t v_isSharedCheck_2807_; 
v_a_2800_ = lean_ctor_get(v___x_2799_, 0);
v_isSharedCheck_2807_ = !lean_is_exclusive(v___x_2799_);
if (v_isSharedCheck_2807_ == 0)
{
v___x_2802_ = v___x_2799_;
v_isShared_2803_ = v_isSharedCheck_2807_;
goto v_resetjp_2801_;
}
else
{
lean_inc(v_a_2800_);
lean_dec(v___x_2799_);
v___x_2802_ = lean_box(0);
v_isShared_2803_ = v_isSharedCheck_2807_;
goto v_resetjp_2801_;
}
v_resetjp_2801_:
{
lean_object* v___x_2805_; 
if (v_isShared_2803_ == 0)
{
lean_ctor_set_tag(v___x_2802_, 1);
v___x_2805_ = v___x_2802_;
goto v_reusejp_2804_;
}
else
{
lean_object* v_reuseFailAlloc_2806_; 
v_reuseFailAlloc_2806_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2806_, 0, v_a_2800_);
v___x_2805_ = v_reuseFailAlloc_2806_;
goto v_reusejp_2804_;
}
v_reusejp_2804_:
{
return v___x_2805_;
}
}
}
else
{
lean_object* v_a_2808_; lean_object* v___x_2810_; uint8_t v_isShared_2811_; uint8_t v_isSharedCheck_2815_; 
v_a_2808_ = lean_ctor_get(v___x_2799_, 0);
v_isSharedCheck_2815_ = !lean_is_exclusive(v___x_2799_);
if (v_isSharedCheck_2815_ == 0)
{
v___x_2810_ = v___x_2799_;
v_isShared_2811_ = v_isSharedCheck_2815_;
goto v_resetjp_2809_;
}
else
{
lean_inc(v_a_2808_);
lean_dec(v___x_2799_);
v___x_2810_ = lean_box(0);
v_isShared_2811_ = v_isSharedCheck_2815_;
goto v_resetjp_2809_;
}
v_resetjp_2809_:
{
lean_object* v___x_2813_; 
if (v_isShared_2811_ == 0)
{
lean_ctor_set_tag(v___x_2810_, 0);
v___x_2813_ = v___x_2810_;
goto v_reusejp_2812_;
}
else
{
lean_object* v_reuseFailAlloc_2814_; 
v_reuseFailAlloc_2814_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2814_, 0, v_a_2808_);
v___x_2813_ = v_reuseFailAlloc_2814_;
goto v_reusejp_2812_;
}
v_reusejp_2812_:
{
return v___x_2813_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_wait___boxed(lean_object* v_00_u03b5_2820_, lean_object* v_00_u03b1_2821_, lean_object* v_self_2822_, lean_object* v___y_2823_){
_start:
{
lean_object* v_res_2824_; 
v_res_2824_ = l_Std_Async_EAsync_wait(v_00_u03b5_2820_, v_00_u03b1_2821_, v_self_2822_);
return v_res_2824_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_asTask___redArg___lam__0(lean_object* v_x_2825_){
_start:
{
if (lean_obj_tag(v_x_2825_) == 0)
{
lean_object* v_a_2826_; lean_object* v___x_2827_; 
v_a_2826_ = lean_ctor_get(v_x_2825_, 0);
lean_inc(v_a_2826_);
lean_dec_ref_known(v_x_2825_, 1);
v___x_2827_ = lean_task_pure(v_a_2826_);
return v___x_2827_;
}
else
{
lean_object* v_a_2828_; 
v_a_2828_ = lean_ctor_get(v_x_2825_, 0);
lean_inc_ref(v_a_2828_);
lean_dec_ref_known(v_x_2825_, 1);
return v_a_2828_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_asTask___redArg(lean_object* v_x_2830_, lean_object* v_prio_2831_){
_start:
{
lean_object* v___f_2833_; lean_object* v___x_2834_; lean_object* v___x_2835_; lean_object* v___x_2836_; lean_object* v___x_2837_; uint8_t v___x_2838_; lean_object* v___x_2839_; lean_object* v___x_2840_; 
v___f_2833_ = ((lean_object*)(l_Std_Async_EAsync_asTask___redArg___closed__0));
v___x_2834_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_toBaseAsync___boxed), 4, 3);
lean_closure_set(v___x_2834_, 0, lean_box(0));
lean_closure_set(v___x_2834_, 1, lean_box(0));
lean_closure_set(v___x_2834_, 2, v_x_2830_);
v___x_2835_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_toRawBaseIO___boxed), 3, 2);
lean_closure_set(v___x_2835_, 0, lean_box(0));
lean_closure_set(v___x_2835_, 1, v___x_2834_);
v___x_2836_ = lean_io_as_task(v___x_2835_, v_prio_2831_);
v___x_2837_ = lean_unsigned_to_nat(0u);
v___x_2838_ = 1;
v___x_2839_ = lean_task_bind(v___x_2836_, v___f_2833_, v___x_2837_, v___x_2838_);
v___x_2840_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2840_, 0, v___x_2839_);
return v___x_2840_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_asTask___redArg___boxed(lean_object* v_x_2841_, lean_object* v_prio_2842_, lean_object* v___y_2843_){
_start:
{
lean_object* v_res_2844_; 
v_res_2844_ = l_Std_Async_EAsync_asTask___redArg(v_x_2841_, v_prio_2842_);
return v_res_2844_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_asTask(lean_object* v_00_u03b5_2845_, lean_object* v_00_u03b1_2846_, lean_object* v_x_2847_, lean_object* v_prio_2848_){
_start:
{
lean_object* v___f_2850_; lean_object* v___x_2851_; lean_object* v___x_2852_; lean_object* v___x_2853_; lean_object* v___x_2854_; uint8_t v___x_2855_; lean_object* v___x_2856_; lean_object* v___x_2857_; 
v___f_2850_ = ((lean_object*)(l_Std_Async_EAsync_asTask___redArg___closed__0));
v___x_2851_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_toBaseAsync___boxed), 4, 3);
lean_closure_set(v___x_2851_, 0, lean_box(0));
lean_closure_set(v___x_2851_, 1, lean_box(0));
lean_closure_set(v___x_2851_, 2, v_x_2847_);
v___x_2852_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_toRawBaseIO___boxed), 3, 2);
lean_closure_set(v___x_2852_, 0, lean_box(0));
lean_closure_set(v___x_2852_, 1, v___x_2851_);
v___x_2853_ = lean_io_as_task(v___x_2852_, v_prio_2848_);
v___x_2854_ = lean_unsigned_to_nat(0u);
v___x_2855_ = 1;
v___x_2856_ = lean_task_bind(v___x_2853_, v___f_2850_, v___x_2854_, v___x_2855_);
v___x_2857_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2857_, 0, v___x_2856_);
return v___x_2857_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_asTask___boxed(lean_object* v_00_u03b5_2858_, lean_object* v_00_u03b1_2859_, lean_object* v_x_2860_, lean_object* v_prio_2861_, lean_object* v___y_2862_){
_start:
{
lean_object* v_res_2863_; 
v_res_2863_ = l_Std_Async_EAsync_asTask(v_00_u03b5_2858_, v_00_u03b1_2859_, v_x_2860_, v_prio_2861_);
return v_res_2863_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_block___redArg(lean_object* v_x_2864_, lean_object* v_prio_2865_){
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
LEAN_EXPORT lean_object* l_Std_Async_EAsync_block___redArg___boxed(lean_object* v_x_2891_, lean_object* v_prio_2892_, lean_object* v___y_2893_){
_start:
{
lean_object* v_res_2894_; 
v_res_2894_ = l_Std_Async_EAsync_block___redArg(v_x_2891_, v_prio_2892_);
return v_res_2894_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_block(lean_object* v_00_u03b5_2895_, lean_object* v_00_u03b1_2896_, lean_object* v_x_2897_, lean_object* v_prio_2898_){
_start:
{
lean_object* v___f_2900_; lean_object* v___x_2901_; lean_object* v___x_2902_; lean_object* v___x_2903_; lean_object* v___x_2904_; uint8_t v___x_2905_; lean_object* v___x_2906_; lean_object* v___x_2907_; 
v___f_2900_ = ((lean_object*)(l_Std_Async_EAsync_asTask___redArg___closed__0));
v___x_2901_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_toBaseAsync___boxed), 4, 3);
lean_closure_set(v___x_2901_, 0, lean_box(0));
lean_closure_set(v___x_2901_, 1, lean_box(0));
lean_closure_set(v___x_2901_, 2, v_x_2897_);
v___x_2902_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_toRawBaseIO___boxed), 3, 2);
lean_closure_set(v___x_2902_, 0, lean_box(0));
lean_closure_set(v___x_2902_, 1, v___x_2901_);
v___x_2903_ = lean_io_as_task(v___x_2902_, v_prio_2898_);
v___x_2904_ = lean_unsigned_to_nat(0u);
v___x_2905_ = 1;
v___x_2906_ = lean_task_bind(v___x_2903_, v___f_2900_, v___x_2904_, v___x_2905_);
v___x_2907_ = lean_task_get_own(v___x_2906_);
if (lean_obj_tag(v___x_2907_) == 0)
{
lean_object* v_a_2908_; lean_object* v___x_2910_; uint8_t v_isShared_2911_; uint8_t v_isSharedCheck_2915_; 
v_a_2908_ = lean_ctor_get(v___x_2907_, 0);
v_isSharedCheck_2915_ = !lean_is_exclusive(v___x_2907_);
if (v_isSharedCheck_2915_ == 0)
{
v___x_2910_ = v___x_2907_;
v_isShared_2911_ = v_isSharedCheck_2915_;
goto v_resetjp_2909_;
}
else
{
lean_inc(v_a_2908_);
lean_dec(v___x_2907_);
v___x_2910_ = lean_box(0);
v_isShared_2911_ = v_isSharedCheck_2915_;
goto v_resetjp_2909_;
}
v_resetjp_2909_:
{
lean_object* v___x_2913_; 
if (v_isShared_2911_ == 0)
{
lean_ctor_set_tag(v___x_2910_, 1);
v___x_2913_ = v___x_2910_;
goto v_reusejp_2912_;
}
else
{
lean_object* v_reuseFailAlloc_2914_; 
v_reuseFailAlloc_2914_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2914_, 0, v_a_2908_);
v___x_2913_ = v_reuseFailAlloc_2914_;
goto v_reusejp_2912_;
}
v_reusejp_2912_:
{
return v___x_2913_;
}
}
}
else
{
lean_object* v_a_2916_; lean_object* v___x_2918_; uint8_t v_isShared_2919_; uint8_t v_isSharedCheck_2923_; 
v_a_2916_ = lean_ctor_get(v___x_2907_, 0);
v_isSharedCheck_2923_ = !lean_is_exclusive(v___x_2907_);
if (v_isSharedCheck_2923_ == 0)
{
v___x_2918_ = v___x_2907_;
v_isShared_2919_ = v_isSharedCheck_2923_;
goto v_resetjp_2917_;
}
else
{
lean_inc(v_a_2916_);
lean_dec(v___x_2907_);
v___x_2918_ = lean_box(0);
v_isShared_2919_ = v_isSharedCheck_2923_;
goto v_resetjp_2917_;
}
v_resetjp_2917_:
{
lean_object* v___x_2921_; 
if (v_isShared_2919_ == 0)
{
lean_ctor_set_tag(v___x_2918_, 0);
v___x_2921_ = v___x_2918_;
goto v_reusejp_2920_;
}
else
{
lean_object* v_reuseFailAlloc_2922_; 
v_reuseFailAlloc_2922_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2922_, 0, v_a_2916_);
v___x_2921_ = v_reuseFailAlloc_2922_;
goto v_reusejp_2920_;
}
v_reusejp_2920_:
{
return v___x_2921_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_block___boxed(lean_object* v_00_u03b5_2924_, lean_object* v_00_u03b1_2925_, lean_object* v_x_2926_, lean_object* v_prio_2927_, lean_object* v___y_2928_){
_start:
{
lean_object* v_res_2929_; 
v_res_2929_ = l_Std_Async_EAsync_block(v_00_u03b5_2924_, v_00_u03b1_2925_, v_x_2926_, v_prio_2927_);
return v_res_2929_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_throw___redArg(lean_object* v_e_2930_){
_start:
{
lean_object* v___x_2932_; lean_object* v___x_2933_; 
v___x_2932_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2932_, 0, v_e_2930_);
v___x_2933_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2933_, 0, v___x_2932_);
return v___x_2933_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_throw___redArg___boxed(lean_object* v_e_2934_, lean_object* v___y_2935_){
_start:
{
lean_object* v_res_2936_; 
v_res_2936_ = l_Std_Async_EAsync_throw___redArg(v_e_2934_);
return v_res_2936_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_throw(lean_object* v_00_u03b5_2937_, lean_object* v_00_u03b1_2938_, lean_object* v_e_2939_){
_start:
{
lean_object* v___x_2941_; lean_object* v___x_2942_; 
v___x_2941_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2941_, 0, v_e_2939_);
v___x_2942_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2942_, 0, v___x_2941_);
return v___x_2942_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_throw___boxed(lean_object* v_00_u03b5_2943_, lean_object* v_00_u03b1_2944_, lean_object* v_e_2945_, lean_object* v___y_2946_){
_start:
{
lean_object* v_res_2947_; 
v_res_2947_ = l_Std_Async_EAsync_throw(v_00_u03b5_2943_, v_00_u03b1_2944_, v_e_2945_);
return v_res_2947_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_tryCatch___redArg___lam__0(lean_object* v_f_2948_, lean_object* v_x_2949_){
_start:
{
if (lean_obj_tag(v_x_2949_) == 0)
{
lean_object* v_a_2951_; lean_object* v___x_2952_; 
v_a_2951_ = lean_ctor_get(v_x_2949_, 0);
lean_inc(v_a_2951_);
lean_dec_ref_known(v_x_2949_, 1);
v___x_2952_ = lean_apply_2(v_f_2948_, v_a_2951_, lean_box(0));
return v___x_2952_;
}
else
{
lean_object* v___x_2953_; 
lean_dec_ref(v_f_2948_);
v___x_2953_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2953_, 0, v_x_2949_);
return v___x_2953_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_tryCatch___redArg___lam__0___boxed(lean_object* v_f_2954_, lean_object* v_x_2955_, lean_object* v___y_2956_){
_start:
{
lean_object* v_res_2957_; 
v_res_2957_ = l_Std_Async_EAsync_tryCatch___redArg___lam__0(v_f_2954_, v_x_2955_);
return v_res_2957_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_tryCatch___redArg(lean_object* v_x_2958_, lean_object* v_f_2959_, lean_object* v_prio_2960_, uint8_t v_sync_2961_){
_start:
{
lean_object* v___f_2963_; lean_object* v___x_2964_; lean_object* v___x_2965_; 
v___f_2963_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_tryCatch___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_2963_, 0, v_f_2959_);
v___x_2964_ = lean_apply_1(v_x_2958_, lean_box(0));
v___x_2965_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v_prio_2960_, v_sync_2961_, v___x_2964_, v___f_2963_);
return v___x_2965_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_tryCatch___redArg___boxed(lean_object* v_x_2966_, lean_object* v_f_2967_, lean_object* v_prio_2968_, lean_object* v_sync_2969_, lean_object* v___y_2970_){
_start:
{
uint8_t v_sync_boxed_2971_; lean_object* v_res_2972_; 
v_sync_boxed_2971_ = lean_unbox(v_sync_2969_);
v_res_2972_ = l_Std_Async_EAsync_tryCatch___redArg(v_x_2966_, v_f_2967_, v_prio_2968_, v_sync_boxed_2971_);
return v_res_2972_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_tryCatch(lean_object* v_00_u03b5_2973_, lean_object* v_00_u03b1_2974_, lean_object* v_x_2975_, lean_object* v_f_2976_, lean_object* v_prio_2977_, uint8_t v_sync_2978_){
_start:
{
lean_object* v___f_2980_; lean_object* v___x_2981_; lean_object* v___x_2982_; 
v___f_2980_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_tryCatch___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_2980_, 0, v_f_2976_);
v___x_2981_ = lean_apply_1(v_x_2975_, lean_box(0));
v___x_2982_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v_prio_2977_, v_sync_2978_, v___x_2981_, v___f_2980_);
return v___x_2982_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_tryCatch___boxed(lean_object* v_00_u03b5_2983_, lean_object* v_00_u03b1_2984_, lean_object* v_x_2985_, lean_object* v_f_2986_, lean_object* v_prio_2987_, lean_object* v_sync_2988_, lean_object* v___y_2989_){
_start:
{
uint8_t v_sync_boxed_2990_; lean_object* v_res_2991_; 
v_sync_boxed_2990_ = lean_unbox(v_sync_2988_);
v_res_2991_ = l_Std_Async_EAsync_tryCatch(v_00_u03b5_2983_, v_00_u03b1_2984_, v_x_2985_, v_f_2986_, v_prio_2987_, v_sync_boxed_2990_);
return v_res_2991_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_tryFinally_x27___redArg___lam__0(lean_object* v_a_2992_, lean_object* v_____do__lift_2993_){
_start:
{
if (lean_obj_tag(v_____do__lift_2993_) == 0)
{
lean_object* v_a_2995_; lean_object* v___x_2997_; uint8_t v_isShared_2998_; uint8_t v_isSharedCheck_3003_; 
lean_dec(v_a_2992_);
v_a_2995_ = lean_ctor_get(v_____do__lift_2993_, 0);
v_isSharedCheck_3003_ = !lean_is_exclusive(v_____do__lift_2993_);
if (v_isSharedCheck_3003_ == 0)
{
v___x_2997_ = v_____do__lift_2993_;
v_isShared_2998_ = v_isSharedCheck_3003_;
goto v_resetjp_2996_;
}
else
{
lean_inc(v_a_2995_);
lean_dec(v_____do__lift_2993_);
v___x_2997_ = lean_box(0);
v_isShared_2998_ = v_isSharedCheck_3003_;
goto v_resetjp_2996_;
}
v_resetjp_2996_:
{
lean_object* v___x_3000_; 
if (v_isShared_2998_ == 0)
{
v___x_3000_ = v___x_2997_;
goto v_reusejp_2999_;
}
else
{
lean_object* v_reuseFailAlloc_3002_; 
v_reuseFailAlloc_3002_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3002_, 0, v_a_2995_);
v___x_3000_ = v_reuseFailAlloc_3002_;
goto v_reusejp_2999_;
}
v_reusejp_2999_:
{
lean_object* v___x_3001_; 
v___x_3001_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3001_, 0, v___x_3000_);
return v___x_3001_;
}
}
}
else
{
lean_object* v___x_3005_; uint8_t v_isShared_3006_; uint8_t v_isSharedCheck_3011_; 
v_isSharedCheck_3011_ = !lean_is_exclusive(v_____do__lift_2993_);
if (v_isSharedCheck_3011_ == 0)
{
lean_object* v_unused_3012_; 
v_unused_3012_ = lean_ctor_get(v_____do__lift_2993_, 0);
lean_dec(v_unused_3012_);
v___x_3005_ = v_____do__lift_2993_;
v_isShared_3006_ = v_isSharedCheck_3011_;
goto v_resetjp_3004_;
}
else
{
lean_dec(v_____do__lift_2993_);
v___x_3005_ = lean_box(0);
v_isShared_3006_ = v_isSharedCheck_3011_;
goto v_resetjp_3004_;
}
v_resetjp_3004_:
{
lean_object* v___x_3008_; 
if (v_isShared_3006_ == 0)
{
lean_ctor_set_tag(v___x_3005_, 0);
lean_ctor_set(v___x_3005_, 0, v_a_2992_);
v___x_3008_ = v___x_3005_;
goto v_reusejp_3007_;
}
else
{
lean_object* v_reuseFailAlloc_3010_; 
v_reuseFailAlloc_3010_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3010_, 0, v_a_2992_);
v___x_3008_ = v_reuseFailAlloc_3010_;
goto v_reusejp_3007_;
}
v_reusejp_3007_:
{
lean_object* v___x_3009_; 
v___x_3009_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3009_, 0, v___x_3008_);
return v___x_3009_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_tryFinally_x27___redArg___lam__0___boxed(lean_object* v_a_3013_, lean_object* v_____do__lift_3014_, lean_object* v___y_3015_){
_start:
{
lean_object* v_res_3016_; 
v_res_3016_ = l_Std_Async_EAsync_tryFinally_x27___redArg___lam__0(v_a_3013_, v_____do__lift_3014_);
return v_res_3016_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_tryFinally_x27___redArg___lam__1(lean_object* v_a_3017_, lean_object* v_____do__lift_3018_){
_start:
{
if (lean_obj_tag(v_____do__lift_3018_) == 0)
{
lean_object* v_a_3020_; lean_object* v___x_3022_; uint8_t v_isShared_3023_; uint8_t v_isSharedCheck_3028_; 
lean_dec(v_a_3017_);
v_a_3020_ = lean_ctor_get(v_____do__lift_3018_, 0);
v_isSharedCheck_3028_ = !lean_is_exclusive(v_____do__lift_3018_);
if (v_isSharedCheck_3028_ == 0)
{
v___x_3022_ = v_____do__lift_3018_;
v_isShared_3023_ = v_isSharedCheck_3028_;
goto v_resetjp_3021_;
}
else
{
lean_inc(v_a_3020_);
lean_dec(v_____do__lift_3018_);
v___x_3022_ = lean_box(0);
v_isShared_3023_ = v_isSharedCheck_3028_;
goto v_resetjp_3021_;
}
v_resetjp_3021_:
{
lean_object* v___x_3025_; 
if (v_isShared_3023_ == 0)
{
v___x_3025_ = v___x_3022_;
goto v_reusejp_3024_;
}
else
{
lean_object* v_reuseFailAlloc_3027_; 
v_reuseFailAlloc_3027_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3027_, 0, v_a_3020_);
v___x_3025_ = v_reuseFailAlloc_3027_;
goto v_reusejp_3024_;
}
v_reusejp_3024_:
{
lean_object* v___x_3026_; 
v___x_3026_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3026_, 0, v___x_3025_);
return v___x_3026_;
}
}
}
else
{
lean_object* v_a_3029_; lean_object* v___x_3031_; uint8_t v_isShared_3032_; uint8_t v_isSharedCheck_3038_; 
v_a_3029_ = lean_ctor_get(v_____do__lift_3018_, 0);
v_isSharedCheck_3038_ = !lean_is_exclusive(v_____do__lift_3018_);
if (v_isSharedCheck_3038_ == 0)
{
v___x_3031_ = v_____do__lift_3018_;
v_isShared_3032_ = v_isSharedCheck_3038_;
goto v_resetjp_3030_;
}
else
{
lean_inc(v_a_3029_);
lean_dec(v_____do__lift_3018_);
v___x_3031_ = lean_box(0);
v_isShared_3032_ = v_isSharedCheck_3038_;
goto v_resetjp_3030_;
}
v_resetjp_3030_:
{
lean_object* v___x_3033_; lean_object* v___x_3035_; 
v___x_3033_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3033_, 0, v_a_3017_);
lean_ctor_set(v___x_3033_, 1, v_a_3029_);
if (v_isShared_3032_ == 0)
{
lean_ctor_set(v___x_3031_, 0, v___x_3033_);
v___x_3035_ = v___x_3031_;
goto v_reusejp_3034_;
}
else
{
lean_object* v_reuseFailAlloc_3037_; 
v_reuseFailAlloc_3037_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3037_, 0, v___x_3033_);
v___x_3035_ = v_reuseFailAlloc_3037_;
goto v_reusejp_3034_;
}
v_reusejp_3034_:
{
lean_object* v___x_3036_; 
v___x_3036_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3036_, 0, v___x_3035_);
return v___x_3036_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_tryFinally_x27___redArg___lam__1___boxed(lean_object* v_a_3039_, lean_object* v_____do__lift_3040_, lean_object* v___y_3041_){
_start:
{
lean_object* v_res_3042_; 
v_res_3042_ = l_Std_Async_EAsync_tryFinally_x27___redArg___lam__1(v_a_3039_, v_____do__lift_3040_);
return v_res_3042_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_tryFinally_x27___redArg___lam__2(lean_object* v_f_3043_, lean_object* v_x_3044_){
_start:
{
if (lean_obj_tag(v_x_3044_) == 0)
{
lean_object* v_a_3046_; lean_object* v___f_3047_; lean_object* v___x_3048_; lean_object* v___x_3049_; uint8_t v___x_3050_; lean_object* v___x_3051_; lean_object* v___x_3052_; 
v_a_3046_ = lean_ctor_get(v_x_3044_, 0);
lean_inc(v_a_3046_);
lean_dec_ref_known(v_x_3044_, 1);
v___f_3047_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_tryFinally_x27___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_3047_, 0, v_a_3046_);
v___x_3048_ = lean_box(0);
v___x_3049_ = lean_unsigned_to_nat(0u);
v___x_3050_ = 0;
v___x_3051_ = lean_apply_2(v_f_3043_, v___x_3048_, lean_box(0));
v___x_3052_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3049_, v___x_3050_, v___x_3051_, v___f_3047_);
return v___x_3052_;
}
else
{
lean_object* v_a_3053_; lean_object* v___x_3055_; uint8_t v_isShared_3056_; uint8_t v_isSharedCheck_3065_; 
v_a_3053_ = lean_ctor_get(v_x_3044_, 0);
v_isSharedCheck_3065_ = !lean_is_exclusive(v_x_3044_);
if (v_isSharedCheck_3065_ == 0)
{
v___x_3055_ = v_x_3044_;
v_isShared_3056_ = v_isSharedCheck_3065_;
goto v_resetjp_3054_;
}
else
{
lean_inc(v_a_3053_);
lean_dec(v_x_3044_);
v___x_3055_ = lean_box(0);
v_isShared_3056_ = v_isSharedCheck_3065_;
goto v_resetjp_3054_;
}
v_resetjp_3054_:
{
lean_object* v___f_3057_; lean_object* v___x_3059_; 
lean_inc(v_a_3053_);
v___f_3057_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_tryFinally_x27___redArg___lam__1___boxed), 3, 1);
lean_closure_set(v___f_3057_, 0, v_a_3053_);
if (v_isShared_3056_ == 0)
{
v___x_3059_ = v___x_3055_;
goto v_reusejp_3058_;
}
else
{
lean_object* v_reuseFailAlloc_3064_; 
v_reuseFailAlloc_3064_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3064_, 0, v_a_3053_);
v___x_3059_ = v_reuseFailAlloc_3064_;
goto v_reusejp_3058_;
}
v_reusejp_3058_:
{
lean_object* v___x_3060_; uint8_t v___x_3061_; lean_object* v___x_3062_; lean_object* v___x_3063_; 
v___x_3060_ = lean_unsigned_to_nat(0u);
v___x_3061_ = 0;
v___x_3062_ = lean_apply_2(v_f_3043_, v___x_3059_, lean_box(0));
v___x_3063_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3060_, v___x_3061_, v___x_3062_, v___f_3057_);
return v___x_3063_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_tryFinally_x27___redArg___lam__2___boxed(lean_object* v_f_3066_, lean_object* v_x_3067_, lean_object* v___y_3068_){
_start:
{
lean_object* v_res_3069_; 
v_res_3069_ = l_Std_Async_EAsync_tryFinally_x27___redArg___lam__2(v_f_3066_, v_x_3067_);
return v_res_3069_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_tryFinally_x27___redArg(lean_object* v_x_3070_, lean_object* v_f_3071_, lean_object* v_prio_3072_, uint8_t v_sync_3073_){
_start:
{
lean_object* v___f_3075_; lean_object* v___x_3076_; lean_object* v___x_3077_; 
v___f_3075_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_tryFinally_x27___redArg___lam__2___boxed), 3, 1);
lean_closure_set(v___f_3075_, 0, v_f_3071_);
v___x_3076_ = lean_apply_1(v_x_3070_, lean_box(0));
v___x_3077_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v_prio_3072_, v_sync_3073_, v___x_3076_, v___f_3075_);
return v___x_3077_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_tryFinally_x27___redArg___boxed(lean_object* v_x_3078_, lean_object* v_f_3079_, lean_object* v_prio_3080_, lean_object* v_sync_3081_, lean_object* v___y_3082_){
_start:
{
uint8_t v_sync_boxed_3083_; lean_object* v_res_3084_; 
v_sync_boxed_3083_ = lean_unbox(v_sync_3081_);
v_res_3084_ = l_Std_Async_EAsync_tryFinally_x27___redArg(v_x_3078_, v_f_3079_, v_prio_3080_, v_sync_boxed_3083_);
return v_res_3084_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_tryFinally_x27(lean_object* v_00_u03b5_3085_, lean_object* v_00_u03b1_3086_, lean_object* v_00_u03b2_3087_, lean_object* v_x_3088_, lean_object* v_f_3089_, lean_object* v_prio_3090_, uint8_t v_sync_3091_){
_start:
{
lean_object* v___x_3093_; 
v___x_3093_ = l_Std_Async_EAsync_tryFinally_x27___redArg(v_x_3088_, v_f_3089_, v_prio_3090_, v_sync_3091_);
return v___x_3093_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_tryFinally_x27___boxed(lean_object* v_00_u03b5_3094_, lean_object* v_00_u03b1_3095_, lean_object* v_00_u03b2_3096_, lean_object* v_x_3097_, lean_object* v_f_3098_, lean_object* v_prio_3099_, lean_object* v_sync_3100_, lean_object* v___y_3101_){
_start:
{
uint8_t v_sync_boxed_3102_; lean_object* v_res_3103_; 
v_sync_boxed_3102_ = lean_unbox(v_sync_3100_);
v_res_3103_ = l_Std_Async_EAsync_tryFinally_x27(v_00_u03b5_3094_, v_00_u03b1_3095_, v_00_u03b2_3096_, v_x_3097_, v_f_3098_, v_prio_3099_, v_sync_boxed_3102_);
return v_res_3103_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_await___redArg(lean_object* v_x_3104_){
_start:
{
lean_object* v___x_3106_; 
v___x_3106_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3106_, 0, v_x_3104_);
return v___x_3106_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_await___redArg___boxed(lean_object* v_x_3107_, lean_object* v___y_3108_){
_start:
{
lean_object* v_res_3109_; 
v_res_3109_ = l_Std_Async_EAsync_await___redArg(v_x_3107_);
return v_res_3109_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_await(lean_object* v_00_u03b5_3110_, lean_object* v_00_u03b1_3111_, lean_object* v_x_3112_){
_start:
{
lean_object* v___x_3114_; 
v___x_3114_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3114_, 0, v_x_3112_);
return v___x_3114_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_await___boxed(lean_object* v_00_u03b5_3115_, lean_object* v_00_u03b1_3116_, lean_object* v_x_3117_, lean_object* v___y_3118_){
_start:
{
lean_object* v_res_3119_; 
v_res_3119_ = l_Std_Async_EAsync_await(v_00_u03b5_3115_, v_00_u03b1_3116_, v_x_3117_);
return v_res_3119_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_async___redArg(lean_object* v_self_3120_, lean_object* v_prio_3121_){
_start:
{
lean_object* v___f_3123_; lean_object* v___x_3124_; lean_object* v___x_3125_; lean_object* v___x_3126_; lean_object* v___x_3127_; uint8_t v___x_3128_; lean_object* v___x_3129_; lean_object* v___x_3130_; lean_object* v___x_3131_; 
v___f_3123_ = ((lean_object*)(l_Std_Async_EAsync_asTask___redArg___closed__0));
v___x_3124_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_toBaseAsync___boxed), 4, 3);
lean_closure_set(v___x_3124_, 0, lean_box(0));
lean_closure_set(v___x_3124_, 1, lean_box(0));
lean_closure_set(v___x_3124_, 2, v_self_3120_);
v___x_3125_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_toRawBaseIO___boxed), 3, 2);
lean_closure_set(v___x_3125_, 0, lean_box(0));
lean_closure_set(v___x_3125_, 1, v___x_3124_);
v___x_3126_ = lean_io_as_task(v___x_3125_, v_prio_3121_);
v___x_3127_ = lean_unsigned_to_nat(0u);
v___x_3128_ = 1;
v___x_3129_ = lean_task_bind(v___x_3126_, v___f_3123_, v___x_3127_, v___x_3128_);
v___x_3130_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3130_, 0, v___x_3129_);
v___x_3131_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3131_, 0, v___x_3130_);
return v___x_3131_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_async___redArg___boxed(lean_object* v_self_3132_, lean_object* v_prio_3133_, lean_object* v___y_3134_){
_start:
{
lean_object* v_res_3135_; 
v_res_3135_ = l_Std_Async_EAsync_async___redArg(v_self_3132_, v_prio_3133_);
return v_res_3135_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_async(lean_object* v_00_u03b5_3136_, lean_object* v_00_u03b1_3137_, lean_object* v_self_3138_, lean_object* v_prio_3139_){
_start:
{
lean_object* v___f_3141_; lean_object* v___x_3142_; lean_object* v___x_3143_; lean_object* v___x_3144_; lean_object* v___x_3145_; uint8_t v___x_3146_; lean_object* v___x_3147_; lean_object* v___x_3148_; lean_object* v___x_3149_; 
v___f_3141_ = ((lean_object*)(l_Std_Async_EAsync_asTask___redArg___closed__0));
v___x_3142_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_toBaseAsync___boxed), 4, 3);
lean_closure_set(v___x_3142_, 0, lean_box(0));
lean_closure_set(v___x_3142_, 1, lean_box(0));
lean_closure_set(v___x_3142_, 2, v_self_3138_);
v___x_3143_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_toRawBaseIO___boxed), 3, 2);
lean_closure_set(v___x_3143_, 0, lean_box(0));
lean_closure_set(v___x_3143_, 1, v___x_3142_);
v___x_3144_ = lean_io_as_task(v___x_3143_, v_prio_3139_);
v___x_3145_ = lean_unsigned_to_nat(0u);
v___x_3146_ = 1;
v___x_3147_ = lean_task_bind(v___x_3144_, v___f_3141_, v___x_3145_, v___x_3146_);
v___x_3148_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3148_, 0, v___x_3147_);
v___x_3149_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3149_, 0, v___x_3148_);
return v___x_3149_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_async___boxed(lean_object* v_00_u03b5_3150_, lean_object* v_00_u03b1_3151_, lean_object* v_self_3152_, lean_object* v_prio_3153_, lean_object* v___y_3154_){
_start:
{
lean_object* v_res_3155_; 
v_res_3155_ = l_Std_Async_EAsync_async(v_00_u03b5_3150_, v_00_u03b1_3151_, v_self_3152_, v_prio_3153_);
return v_res_3155_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instFunctor___redArg___lam__0(lean_object* v_00_u03b1_3156_, lean_object* v_00_u03b2_3157_, lean_object* v___y_3158_, lean_object* v___y_3159_){
_start:
{
lean_object* v___x_3161_; lean_object* v___x_3162_; uint8_t v___x_3163_; lean_object* v___x_3164_; lean_object* v___y_3166_; 
lean_inc(v___y_3158_);
v___x_3161_ = lean_alloc_closure((void*)(l_Except_map), 5, 4);
lean_closure_set(v___x_3161_, 0, lean_box(0));
lean_closure_set(v___x_3161_, 1, lean_box(0));
lean_closure_set(v___x_3161_, 2, lean_box(0));
lean_closure_set(v___x_3161_, 3, v___y_3158_);
v___x_3162_ = lean_unsigned_to_nat(0u);
v___x_3163_ = 0;
v___x_3164_ = lean_apply_1(v___y_3159_, lean_box(0));
if (lean_obj_tag(v___x_3164_) == 0)
{
lean_object* v_a_3168_; 
lean_dec_ref(v___x_3161_);
v_a_3168_ = lean_ctor_get(v___x_3164_, 0);
lean_inc(v_a_3168_);
lean_dec_ref_known(v___x_3164_, 1);
if (lean_obj_tag(v_a_3168_) == 0)
{
lean_object* v_a_3169_; lean_object* v___x_3171_; uint8_t v_isShared_3172_; uint8_t v_isSharedCheck_3176_; 
lean_dec(v___y_3158_);
v_a_3169_ = lean_ctor_get(v_a_3168_, 0);
v_isSharedCheck_3176_ = !lean_is_exclusive(v_a_3168_);
if (v_isSharedCheck_3176_ == 0)
{
v___x_3171_ = v_a_3168_;
v_isShared_3172_ = v_isSharedCheck_3176_;
goto v_resetjp_3170_;
}
else
{
lean_inc(v_a_3169_);
lean_dec(v_a_3168_);
v___x_3171_ = lean_box(0);
v_isShared_3172_ = v_isSharedCheck_3176_;
goto v_resetjp_3170_;
}
v_resetjp_3170_:
{
lean_object* v___x_3174_; 
if (v_isShared_3172_ == 0)
{
v___x_3174_ = v___x_3171_;
goto v_reusejp_3173_;
}
else
{
lean_object* v_reuseFailAlloc_3175_; 
v_reuseFailAlloc_3175_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3175_, 0, v_a_3169_);
v___x_3174_ = v_reuseFailAlloc_3175_;
goto v_reusejp_3173_;
}
v_reusejp_3173_:
{
v___y_3166_ = v___x_3174_;
goto v___jp_3165_;
}
}
}
else
{
lean_object* v_a_3177_; lean_object* v___x_3179_; uint8_t v_isShared_3180_; uint8_t v_isSharedCheck_3185_; 
v_a_3177_ = lean_ctor_get(v_a_3168_, 0);
v_isSharedCheck_3185_ = !lean_is_exclusive(v_a_3168_);
if (v_isSharedCheck_3185_ == 0)
{
v___x_3179_ = v_a_3168_;
v_isShared_3180_ = v_isSharedCheck_3185_;
goto v_resetjp_3178_;
}
else
{
lean_inc(v_a_3177_);
lean_dec(v_a_3168_);
v___x_3179_ = lean_box(0);
v_isShared_3180_ = v_isSharedCheck_3185_;
goto v_resetjp_3178_;
}
v_resetjp_3178_:
{
lean_object* v___x_3181_; lean_object* v___x_3183_; 
v___x_3181_ = lean_apply_1(v___y_3158_, v_a_3177_);
if (v_isShared_3180_ == 0)
{
lean_ctor_set(v___x_3179_, 0, v___x_3181_);
v___x_3183_ = v___x_3179_;
goto v_reusejp_3182_;
}
else
{
lean_object* v_reuseFailAlloc_3184_; 
v_reuseFailAlloc_3184_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3184_, 0, v___x_3181_);
v___x_3183_ = v_reuseFailAlloc_3184_;
goto v_reusejp_3182_;
}
v_reusejp_3182_:
{
v___y_3166_ = v___x_3183_;
goto v___jp_3165_;
}
}
}
}
else
{
lean_object* v_a_3186_; lean_object* v___x_3188_; uint8_t v_isShared_3189_; uint8_t v_isSharedCheck_3194_; 
lean_dec(v___y_3158_);
v_a_3186_ = lean_ctor_get(v___x_3164_, 0);
v_isSharedCheck_3194_ = !lean_is_exclusive(v___x_3164_);
if (v_isSharedCheck_3194_ == 0)
{
v___x_3188_ = v___x_3164_;
v_isShared_3189_ = v_isSharedCheck_3194_;
goto v_resetjp_3187_;
}
else
{
lean_inc(v_a_3186_);
lean_dec(v___x_3164_);
v___x_3188_ = lean_box(0);
v_isShared_3189_ = v_isSharedCheck_3194_;
goto v_resetjp_3187_;
}
v_resetjp_3187_:
{
lean_object* v___x_3190_; lean_object* v___x_3192_; 
v___x_3190_ = lean_task_map(v___x_3161_, v_a_3186_, v___x_3162_, v___x_3163_);
if (v_isShared_3189_ == 0)
{
lean_ctor_set(v___x_3188_, 0, v___x_3190_);
v___x_3192_ = v___x_3188_;
goto v_reusejp_3191_;
}
else
{
lean_object* v_reuseFailAlloc_3193_; 
v_reuseFailAlloc_3193_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3193_, 0, v___x_3190_);
v___x_3192_ = v_reuseFailAlloc_3193_;
goto v_reusejp_3191_;
}
v_reusejp_3191_:
{
return v___x_3192_;
}
}
}
v___jp_3165_:
{
lean_object* v___x_3167_; 
v___x_3167_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3167_, 0, v___y_3166_);
return v___x_3167_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instFunctor___redArg___lam__0___boxed(lean_object* v_00_u03b1_3195_, lean_object* v_00_u03b2_3196_, lean_object* v___y_3197_, lean_object* v___y_3198_, lean_object* v___y_3199_){
_start:
{
lean_object* v_res_3200_; 
v_res_3200_ = l_Std_Async_EAsync_instFunctor___redArg___lam__0(v_00_u03b1_3195_, v_00_u03b2_3196_, v___y_3197_, v___y_3198_);
return v_res_3200_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instFunctor___redArg___lam__1(lean_object* v___f_3201_, lean_object* v_00_u03b1_3202_, lean_object* v_00_u03b2_3203_, lean_object* v___y_3204_, lean_object* v___y_3205_){
_start:
{
lean_object* v___x_3207_; lean_object* v___x_3208_; 
v___x_3207_ = lean_alloc_closure((void*)(l_Function_const___boxed), 4, 3);
lean_closure_set(v___x_3207_, 0, lean_box(0));
lean_closure_set(v___x_3207_, 1, lean_box(0));
lean_closure_set(v___x_3207_, 2, v___y_3204_);
v___x_3208_ = lean_apply_5(v___f_3201_, lean_box(0), lean_box(0), v___x_3207_, v___y_3205_, lean_box(0));
return v___x_3208_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instFunctor___redArg___lam__1___boxed(lean_object* v___f_3209_, lean_object* v_00_u03b1_3210_, lean_object* v_00_u03b2_3211_, lean_object* v___y_3212_, lean_object* v___y_3213_, lean_object* v___y_3214_){
_start:
{
lean_object* v_res_3215_; 
v_res_3215_ = l_Std_Async_EAsync_instFunctor___redArg___lam__1(v___f_3209_, v_00_u03b1_3210_, v_00_u03b2_3211_, v___y_3212_, v___y_3213_);
return v_res_3215_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instFunctor___redArg(){
_start:
{
lean_object* v___x_3223_; 
v___x_3223_ = ((lean_object*)(l_Std_Async_EAsync_instFunctor___redArg___closed__2));
return v___x_3223_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instFunctor___redArg___boxed(lean_object* v___dummy_3224_){
_start:
{
lean_object* v_res_3225_; 
v_res_3225_ = l_Std_Async_EAsync_instFunctor___redArg();
return v_res_3225_;
}
}
static lean_object* _init_l_Std_Async_EAsync_instFunctor___closed__0(void){
_start:
{
lean_object* v___x_3226_; 
v___x_3226_ = l_Std_Async_EAsync_instFunctor___redArg();
return v___x_3226_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instFunctor(lean_object* v_00_u03b5_3227_){
_start:
{
lean_object* v___x_3228_; 
v___x_3228_ = lean_obj_once(&l_Std_Async_EAsync_instFunctor___closed__0, &l_Std_Async_EAsync_instFunctor___closed__0_once, _init_l_Std_Async_EAsync_instFunctor___closed__0);
return v___x_3228_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonad___redArg___lam__0(lean_object* v_00_u03b1_3229_, lean_object* v___y_3230_){
_start:
{
lean_object* v___x_3232_; lean_object* v___x_3233_; 
v___x_3232_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3232_, 0, v___y_3230_);
v___x_3233_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3233_, 0, v___x_3232_);
return v___x_3233_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonad___redArg___lam__0___boxed(lean_object* v_00_u03b1_3234_, lean_object* v___y_3235_, lean_object* v___y_3236_){
_start:
{
lean_object* v_res_3237_; 
v_res_3237_ = l_Std_Async_EAsync_instMonad___redArg___lam__0(v_00_u03b1_3234_, v___y_3235_);
return v_res_3237_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonad___redArg___lam__1(lean_object* v_x_3238_, lean_object* v_x_3239_){
_start:
{
if (lean_obj_tag(v_x_3239_) == 0)
{
lean_object* v_a_3241_; lean_object* v___x_3243_; uint8_t v_isShared_3244_; uint8_t v_isSharedCheck_3249_; 
lean_dec_ref(v_x_3238_);
v_a_3241_ = lean_ctor_get(v_x_3239_, 0);
v_isSharedCheck_3249_ = !lean_is_exclusive(v_x_3239_);
if (v_isSharedCheck_3249_ == 0)
{
v___x_3243_ = v_x_3239_;
v_isShared_3244_ = v_isSharedCheck_3249_;
goto v_resetjp_3242_;
}
else
{
lean_inc(v_a_3241_);
lean_dec(v_x_3239_);
v___x_3243_ = lean_box(0);
v_isShared_3244_ = v_isSharedCheck_3249_;
goto v_resetjp_3242_;
}
v_resetjp_3242_:
{
lean_object* v___x_3246_; 
if (v_isShared_3244_ == 0)
{
v___x_3246_ = v___x_3243_;
goto v_reusejp_3245_;
}
else
{
lean_object* v_reuseFailAlloc_3248_; 
v_reuseFailAlloc_3248_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3248_, 0, v_a_3241_);
v___x_3246_ = v_reuseFailAlloc_3248_;
goto v_reusejp_3245_;
}
v_reusejp_3245_:
{
lean_object* v___x_3247_; 
v___x_3247_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3247_, 0, v___x_3246_);
return v___x_3247_;
}
}
}
else
{
lean_object* v_a_3250_; lean_object* v___x_3251_; lean_object* v___x_3252_; lean_object* v___x_3253_; uint8_t v___x_3254_; lean_object* v___x_3255_; lean_object* v___y_3257_; 
v_a_3250_ = lean_ctor_get(v_x_3239_, 0);
lean_inc_n(v_a_3250_, 2);
lean_dec_ref_known(v_x_3239_, 1);
v___x_3251_ = lean_box(0);
v___x_3252_ = lean_alloc_closure((void*)(l_Except_map), 5, 4);
lean_closure_set(v___x_3252_, 0, lean_box(0));
lean_closure_set(v___x_3252_, 1, lean_box(0));
lean_closure_set(v___x_3252_, 2, lean_box(0));
lean_closure_set(v___x_3252_, 3, v_a_3250_);
v___x_3253_ = lean_unsigned_to_nat(0u);
v___x_3254_ = 0;
v___x_3255_ = lean_apply_2(v_x_3238_, v___x_3251_, lean_box(0));
if (lean_obj_tag(v___x_3255_) == 0)
{
lean_object* v_a_3259_; 
lean_dec_ref(v___x_3252_);
v_a_3259_ = lean_ctor_get(v___x_3255_, 0);
lean_inc(v_a_3259_);
lean_dec_ref_known(v___x_3255_, 1);
if (lean_obj_tag(v_a_3259_) == 0)
{
lean_object* v_a_3260_; lean_object* v___x_3262_; uint8_t v_isShared_3263_; uint8_t v_isSharedCheck_3267_; 
lean_dec(v_a_3250_);
v_a_3260_ = lean_ctor_get(v_a_3259_, 0);
v_isSharedCheck_3267_ = !lean_is_exclusive(v_a_3259_);
if (v_isSharedCheck_3267_ == 0)
{
v___x_3262_ = v_a_3259_;
v_isShared_3263_ = v_isSharedCheck_3267_;
goto v_resetjp_3261_;
}
else
{
lean_inc(v_a_3260_);
lean_dec(v_a_3259_);
v___x_3262_ = lean_box(0);
v_isShared_3263_ = v_isSharedCheck_3267_;
goto v_resetjp_3261_;
}
v_resetjp_3261_:
{
lean_object* v___x_3265_; 
if (v_isShared_3263_ == 0)
{
v___x_3265_ = v___x_3262_;
goto v_reusejp_3264_;
}
else
{
lean_object* v_reuseFailAlloc_3266_; 
v_reuseFailAlloc_3266_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3266_, 0, v_a_3260_);
v___x_3265_ = v_reuseFailAlloc_3266_;
goto v_reusejp_3264_;
}
v_reusejp_3264_:
{
v___y_3257_ = v___x_3265_;
goto v___jp_3256_;
}
}
}
else
{
lean_object* v_a_3268_; lean_object* v___x_3270_; uint8_t v_isShared_3271_; uint8_t v_isSharedCheck_3276_; 
v_a_3268_ = lean_ctor_get(v_a_3259_, 0);
v_isSharedCheck_3276_ = !lean_is_exclusive(v_a_3259_);
if (v_isSharedCheck_3276_ == 0)
{
v___x_3270_ = v_a_3259_;
v_isShared_3271_ = v_isSharedCheck_3276_;
goto v_resetjp_3269_;
}
else
{
lean_inc(v_a_3268_);
lean_dec(v_a_3259_);
v___x_3270_ = lean_box(0);
v_isShared_3271_ = v_isSharedCheck_3276_;
goto v_resetjp_3269_;
}
v_resetjp_3269_:
{
lean_object* v___x_3272_; lean_object* v___x_3274_; 
v___x_3272_ = lean_apply_1(v_a_3250_, v_a_3268_);
if (v_isShared_3271_ == 0)
{
lean_ctor_set(v___x_3270_, 0, v___x_3272_);
v___x_3274_ = v___x_3270_;
goto v_reusejp_3273_;
}
else
{
lean_object* v_reuseFailAlloc_3275_; 
v_reuseFailAlloc_3275_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3275_, 0, v___x_3272_);
v___x_3274_ = v_reuseFailAlloc_3275_;
goto v_reusejp_3273_;
}
v_reusejp_3273_:
{
v___y_3257_ = v___x_3274_;
goto v___jp_3256_;
}
}
}
}
else
{
lean_object* v_a_3277_; lean_object* v___x_3279_; uint8_t v_isShared_3280_; uint8_t v_isSharedCheck_3285_; 
lean_dec(v_a_3250_);
v_a_3277_ = lean_ctor_get(v___x_3255_, 0);
v_isSharedCheck_3285_ = !lean_is_exclusive(v___x_3255_);
if (v_isSharedCheck_3285_ == 0)
{
v___x_3279_ = v___x_3255_;
v_isShared_3280_ = v_isSharedCheck_3285_;
goto v_resetjp_3278_;
}
else
{
lean_inc(v_a_3277_);
lean_dec(v___x_3255_);
v___x_3279_ = lean_box(0);
v_isShared_3280_ = v_isSharedCheck_3285_;
goto v_resetjp_3278_;
}
v_resetjp_3278_:
{
lean_object* v___x_3281_; lean_object* v___x_3283_; 
v___x_3281_ = lean_task_map(v___x_3252_, v_a_3277_, v___x_3253_, v___x_3254_);
if (v_isShared_3280_ == 0)
{
lean_ctor_set(v___x_3279_, 0, v___x_3281_);
v___x_3283_ = v___x_3279_;
goto v_reusejp_3282_;
}
else
{
lean_object* v_reuseFailAlloc_3284_; 
v_reuseFailAlloc_3284_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3284_, 0, v___x_3281_);
v___x_3283_ = v_reuseFailAlloc_3284_;
goto v_reusejp_3282_;
}
v_reusejp_3282_:
{
return v___x_3283_;
}
}
}
v___jp_3256_:
{
lean_object* v___x_3258_; 
v___x_3258_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3258_, 0, v___y_3257_);
return v___x_3258_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonad___redArg___lam__1___boxed(lean_object* v_x_3286_, lean_object* v_x_3287_, lean_object* v___y_3288_){
_start:
{
lean_object* v_res_3289_; 
v_res_3289_ = l_Std_Async_EAsync_instMonad___redArg___lam__1(v_x_3286_, v_x_3287_);
return v_res_3289_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonad___redArg___lam__2(lean_object* v_00_u03b1_3290_, lean_object* v_00_u03b2_3291_, lean_object* v_f_3292_, lean_object* v_x_3293_){
_start:
{
lean_object* v___f_3295_; lean_object* v___x_3296_; uint8_t v___x_3297_; lean_object* v___x_3298_; lean_object* v___x_3299_; 
v___f_3295_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_instMonad___redArg___lam__1___boxed), 3, 1);
lean_closure_set(v___f_3295_, 0, v_x_3293_);
v___x_3296_ = lean_unsigned_to_nat(0u);
v___x_3297_ = 0;
v___x_3298_ = lean_apply_1(v_f_3292_, lean_box(0));
v___x_3299_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3296_, v___x_3297_, v___x_3298_, v___f_3295_);
return v___x_3299_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonad___redArg___lam__2___boxed(lean_object* v_00_u03b1_3300_, lean_object* v_00_u03b2_3301_, lean_object* v_f_3302_, lean_object* v_x_3303_, lean_object* v___y_3304_){
_start:
{
lean_object* v_res_3305_; 
v_res_3305_ = l_Std_Async_EAsync_instMonad___redArg___lam__2(v_00_u03b1_3300_, v_00_u03b2_3301_, v_f_3302_, v_x_3303_);
return v_res_3305_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonad___redArg___lam__3(lean_object* v___f_3306_, lean_object* v_a_3307_, lean_object* v_x_3308_){
_start:
{
if (lean_obj_tag(v_x_3308_) == 0)
{
lean_object* v_a_3310_; lean_object* v___x_3312_; uint8_t v_isShared_3313_; uint8_t v_isSharedCheck_3318_; 
lean_dec(v_a_3307_);
lean_dec_ref(v___f_3306_);
v_a_3310_ = lean_ctor_get(v_x_3308_, 0);
v_isSharedCheck_3318_ = !lean_is_exclusive(v_x_3308_);
if (v_isSharedCheck_3318_ == 0)
{
v___x_3312_ = v_x_3308_;
v_isShared_3313_ = v_isSharedCheck_3318_;
goto v_resetjp_3311_;
}
else
{
lean_inc(v_a_3310_);
lean_dec(v_x_3308_);
v___x_3312_ = lean_box(0);
v_isShared_3313_ = v_isSharedCheck_3318_;
goto v_resetjp_3311_;
}
v_resetjp_3311_:
{
lean_object* v___x_3315_; 
if (v_isShared_3313_ == 0)
{
v___x_3315_ = v___x_3312_;
goto v_reusejp_3314_;
}
else
{
lean_object* v_reuseFailAlloc_3317_; 
v_reuseFailAlloc_3317_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3317_, 0, v_a_3310_);
v___x_3315_ = v_reuseFailAlloc_3317_;
goto v_reusejp_3314_;
}
v_reusejp_3314_:
{
lean_object* v___x_3316_; 
v___x_3316_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3316_, 0, v___x_3315_);
return v___x_3316_;
}
}
}
else
{
lean_object* v___x_3319_; 
lean_dec_ref_known(v_x_3308_, 1);
v___x_3319_ = lean_apply_3(v___f_3306_, lean_box(0), v_a_3307_, lean_box(0));
return v___x_3319_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonad___redArg___lam__3___boxed(lean_object* v___f_3320_, lean_object* v_a_3321_, lean_object* v_x_3322_, lean_object* v___y_3323_){
_start:
{
lean_object* v_res_3324_; 
v_res_3324_ = l_Std_Async_EAsync_instMonad___redArg___lam__3(v___f_3320_, v_a_3321_, v_x_3322_);
return v_res_3324_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonad___redArg___lam__4(lean_object* v___f_3325_, lean_object* v_y_3326_, lean_object* v_x_3327_){
_start:
{
if (lean_obj_tag(v_x_3327_) == 0)
{
lean_object* v___x_3329_; 
lean_dec_ref(v_y_3326_);
lean_dec_ref(v___f_3325_);
v___x_3329_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3329_, 0, v_x_3327_);
return v___x_3329_;
}
else
{
lean_object* v_a_3330_; lean_object* v___f_3331_; lean_object* v___x_3332_; lean_object* v___x_3333_; uint8_t v___x_3334_; lean_object* v___x_3335_; lean_object* v___x_3336_; 
v_a_3330_ = lean_ctor_get(v_x_3327_, 0);
lean_inc(v_a_3330_);
lean_dec_ref_known(v_x_3327_, 1);
v___f_3331_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_instMonad___redArg___lam__3___boxed), 4, 2);
lean_closure_set(v___f_3331_, 0, v___f_3325_);
lean_closure_set(v___f_3331_, 1, v_a_3330_);
v___x_3332_ = lean_box(0);
v___x_3333_ = lean_unsigned_to_nat(0u);
v___x_3334_ = 0;
v___x_3335_ = lean_apply_2(v_y_3326_, v___x_3332_, lean_box(0));
v___x_3336_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3333_, v___x_3334_, v___x_3335_, v___f_3331_);
return v___x_3336_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonad___redArg___lam__4___boxed(lean_object* v___f_3337_, lean_object* v_y_3338_, lean_object* v_x_3339_, lean_object* v___y_3340_){
_start:
{
lean_object* v_res_3341_; 
v_res_3341_ = l_Std_Async_EAsync_instMonad___redArg___lam__4(v___f_3337_, v_y_3338_, v_x_3339_);
return v_res_3341_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonad___redArg___lam__5(lean_object* v___f_3342_, lean_object* v_00_u03b1_3343_, lean_object* v_00_u03b2_3344_, lean_object* v_x_3345_, lean_object* v_y_3346_){
_start:
{
lean_object* v___f_3348_; lean_object* v___x_3349_; uint8_t v___x_3350_; lean_object* v___x_3351_; lean_object* v___x_3352_; 
v___f_3348_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_instMonad___redArg___lam__4___boxed), 4, 2);
lean_closure_set(v___f_3348_, 0, v___f_3342_);
lean_closure_set(v___f_3348_, 1, v_y_3346_);
v___x_3349_ = lean_unsigned_to_nat(0u);
v___x_3350_ = 0;
v___x_3351_ = lean_apply_1(v_x_3345_, lean_box(0));
v___x_3352_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3349_, v___x_3350_, v___x_3351_, v___f_3348_);
return v___x_3352_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonad___redArg___lam__5___boxed(lean_object* v___f_3353_, lean_object* v_00_u03b1_3354_, lean_object* v_00_u03b2_3355_, lean_object* v_x_3356_, lean_object* v_y_3357_, lean_object* v___y_3358_){
_start:
{
lean_object* v_res_3359_; 
v_res_3359_ = l_Std_Async_EAsync_instMonad___redArg___lam__5(v___f_3353_, v_00_u03b1_3354_, v_00_u03b2_3355_, v_x_3356_, v_y_3357_);
return v_res_3359_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonad___redArg___lam__6(lean_object* v_y_3360_, lean_object* v_x_3361_){
_start:
{
if (lean_obj_tag(v_x_3361_) == 0)
{
lean_object* v_a_3363_; lean_object* v___x_3365_; uint8_t v_isShared_3366_; uint8_t v_isSharedCheck_3371_; 
lean_dec_ref(v_y_3360_);
v_a_3363_ = lean_ctor_get(v_x_3361_, 0);
v_isSharedCheck_3371_ = !lean_is_exclusive(v_x_3361_);
if (v_isSharedCheck_3371_ == 0)
{
v___x_3365_ = v_x_3361_;
v_isShared_3366_ = v_isSharedCheck_3371_;
goto v_resetjp_3364_;
}
else
{
lean_inc(v_a_3363_);
lean_dec(v_x_3361_);
v___x_3365_ = lean_box(0);
v_isShared_3366_ = v_isSharedCheck_3371_;
goto v_resetjp_3364_;
}
v_resetjp_3364_:
{
lean_object* v___x_3368_; 
if (v_isShared_3366_ == 0)
{
v___x_3368_ = v___x_3365_;
goto v_reusejp_3367_;
}
else
{
lean_object* v_reuseFailAlloc_3370_; 
v_reuseFailAlloc_3370_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3370_, 0, v_a_3363_);
v___x_3368_ = v_reuseFailAlloc_3370_;
goto v_reusejp_3367_;
}
v_reusejp_3367_:
{
lean_object* v___x_3369_; 
v___x_3369_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3369_, 0, v___x_3368_);
return v___x_3369_;
}
}
}
else
{
lean_object* v___x_3372_; lean_object* v___x_3373_; 
lean_dec_ref_known(v_x_3361_, 1);
v___x_3372_ = lean_box(0);
v___x_3373_ = lean_apply_2(v_y_3360_, v___x_3372_, lean_box(0));
return v___x_3373_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonad___redArg___lam__6___boxed(lean_object* v_y_3374_, lean_object* v_x_3375_, lean_object* v___y_3376_){
_start:
{
lean_object* v_res_3377_; 
v_res_3377_ = l_Std_Async_EAsync_instMonad___redArg___lam__6(v_y_3374_, v_x_3375_);
return v_res_3377_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonad___redArg___lam__7(lean_object* v_00_u03b1_3378_, lean_object* v_00_u03b2_3379_, lean_object* v_x_3380_, lean_object* v_y_3381_){
_start:
{
lean_object* v___f_3383_; lean_object* v___x_3384_; uint8_t v___x_3385_; lean_object* v___x_3386_; lean_object* v___x_3387_; 
v___f_3383_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_instMonad___redArg___lam__6___boxed), 3, 1);
lean_closure_set(v___f_3383_, 0, v_y_3381_);
v___x_3384_ = lean_unsigned_to_nat(0u);
v___x_3385_ = 0;
v___x_3386_ = lean_apply_1(v_x_3380_, lean_box(0));
v___x_3387_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3384_, v___x_3385_, v___x_3386_, v___f_3383_);
return v___x_3387_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonad___redArg___lam__7___boxed(lean_object* v_00_u03b1_3388_, lean_object* v_00_u03b2_3389_, lean_object* v_x_3390_, lean_object* v_y_3391_, lean_object* v___y_3392_){
_start:
{
lean_object* v_res_3393_; 
v_res_3393_ = l_Std_Async_EAsync_instMonad___redArg___lam__7(v_00_u03b1_3388_, v_00_u03b2_3389_, v_x_3390_, v_y_3391_);
return v_res_3393_;
}
}
static lean_object* _init_l_Std_Async_EAsync_instMonad___redArg___closed__4(void){
_start:
{
lean_object* v___f_3399_; lean_object* v___f_3400_; lean_object* v___f_3401_; lean_object* v___f_3402_; lean_object* v___x_3403_; lean_object* v___x_3404_; 
v___f_3399_ = ((lean_object*)(l_Std_Async_EAsync_instMonad___redArg___closed__3));
v___f_3400_ = ((lean_object*)(l_Std_Async_EAsync_instMonad___redArg___closed__2));
v___f_3401_ = ((lean_object*)(l_Std_Async_EAsync_instMonad___redArg___closed__1));
v___f_3402_ = ((lean_object*)(l_Std_Async_EAsync_instMonad___redArg___closed__0));
v___x_3403_ = lean_obj_once(&l_Std_Async_EAsync_instFunctor___closed__0, &l_Std_Async_EAsync_instFunctor___closed__0_once, _init_l_Std_Async_EAsync_instFunctor___closed__0);
v___x_3404_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_3404_, 0, v___x_3403_);
lean_ctor_set(v___x_3404_, 1, v___f_3402_);
lean_ctor_set(v___x_3404_, 2, v___f_3401_);
lean_ctor_set(v___x_3404_, 3, v___f_3400_);
lean_ctor_set(v___x_3404_, 4, v___f_3399_);
return v___x_3404_;
}
}
static lean_object* _init_l_Std_Async_EAsync_instMonad___redArg___closed__6(void){
_start:
{
lean_object* v___x_3406_; lean_object* v___x_3407_; lean_object* v___x_3408_; 
v___x_3406_ = ((lean_object*)(l_Std_Async_EAsync_instMonad___redArg___closed__5));
v___x_3407_ = lean_obj_once(&l_Std_Async_EAsync_instMonad___redArg___closed__4, &l_Std_Async_EAsync_instMonad___redArg___closed__4_once, _init_l_Std_Async_EAsync_instMonad___redArg___closed__4);
v___x_3408_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3408_, 0, v___x_3407_);
lean_ctor_set(v___x_3408_, 1, v___x_3406_);
return v___x_3408_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonad___redArg(){
_start:
{
lean_object* v___x_3410_; 
v___x_3410_ = lean_obj_once(&l_Std_Async_EAsync_instMonad___redArg___closed__6, &l_Std_Async_EAsync_instMonad___redArg___closed__6_once, _init_l_Std_Async_EAsync_instMonad___redArg___closed__6);
return v___x_3410_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonad___redArg___boxed(lean_object* v___dummy_3411_){
_start:
{
lean_object* v_res_3412_; 
v_res_3412_ = l_Std_Async_EAsync_instMonad___redArg();
return v_res_3412_;
}
}
static lean_object* _init_l_Std_Async_EAsync_instMonad___closed__0(void){
_start:
{
lean_object* v___x_3413_; 
v___x_3413_ = l_Std_Async_EAsync_instMonad___redArg();
return v___x_3413_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonad(lean_object* v_00_u03b5_3414_){
_start:
{
lean_object* v___x_3415_; 
v___x_3415_ = lean_obj_once(&l_Std_Async_EAsync_instMonad___closed__0, &l_Std_Async_EAsync_instMonad___closed__0_once, _init_l_Std_Async_EAsync_instMonad___closed__0);
return v___x_3415_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadLiftEIO___redArg(){
_start:
{
lean_object* v___x_3418_; 
v___x_3418_ = ((lean_object*)(l_Std_Async_EAsync_instMonadLiftEIO___redArg___closed__0));
return v___x_3418_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadLiftEIO___redArg___boxed(lean_object* v___dummy_3419_){
_start:
{
lean_object* v_res_3420_; 
v_res_3420_ = l_Std_Async_EAsync_instMonadLiftEIO___redArg();
return v_res_3420_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadLiftEIO(lean_object* v_00_u03b5_3421_){
_start:
{
lean_object* v___x_3422_; 
v___x_3422_ = ((lean_object*)(l_Std_Async_EAsync_instMonadLiftEIO___redArg___closed__0));
return v___x_3422_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadExcept___redArg___lam__1(lean_object* v_00_u03b1_3423_, lean_object* v_x_3424_, lean_object* v_f_3425_){
_start:
{
lean_object* v___f_3427_; lean_object* v___x_3428_; uint8_t v___x_3429_; lean_object* v___x_3430_; lean_object* v___x_3431_; 
v___f_3427_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_tryCatch___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_3427_, 0, v_f_3425_);
v___x_3428_ = lean_unsigned_to_nat(0u);
v___x_3429_ = 0;
v___x_3430_ = lean_apply_1(v_x_3424_, lean_box(0));
v___x_3431_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3428_, v___x_3429_, v___x_3430_, v___f_3427_);
return v___x_3431_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadExcept___redArg___lam__1___boxed(lean_object* v_00_u03b1_3432_, lean_object* v_x_3433_, lean_object* v_f_3434_, lean_object* v___y_3435_){
_start:
{
lean_object* v_res_3436_; 
v_res_3436_ = l_Std_Async_EAsync_instMonadExcept___redArg___lam__1(v_00_u03b1_3432_, v_x_3433_, v_f_3434_);
return v_res_3436_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadExcept___redArg(){
_start:
{
lean_object* v___x_3443_; 
v___x_3443_ = ((lean_object*)(l_Std_Async_EAsync_instMonadExcept___redArg___closed__2));
return v___x_3443_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadExcept___redArg___boxed(lean_object* v___dummy_3444_){
_start:
{
lean_object* v_res_3445_; 
v_res_3445_ = l_Std_Async_EAsync_instMonadExcept___redArg();
return v_res_3445_;
}
}
static lean_object* _init_l_Std_Async_EAsync_instMonadExcept___closed__0(void){
_start:
{
lean_object* v___x_3446_; 
v___x_3446_ = l_Std_Async_EAsync_instMonadExcept___redArg();
return v___x_3446_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadExcept(lean_object* v_00_u03b5_3447_){
_start:
{
lean_object* v___x_3448_; 
v___x_3448_ = lean_obj_once(&l_Std_Async_EAsync_instMonadExcept___closed__0, &l_Std_Async_EAsync_instMonadExcept___closed__0_once, _init_l_Std_Async_EAsync_instMonadExcept___closed__0);
return v___x_3448_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadExceptOf___redArg(){
_start:
{
lean_object* v___x_3453_; 
v___x_3453_ = ((lean_object*)(l_Std_Async_EAsync_instMonadExceptOf___redArg___closed__0));
return v___x_3453_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadExceptOf___redArg___boxed(lean_object* v___dummy_3454_){
_start:
{
lean_object* v_res_3455_; 
v_res_3455_ = l_Std_Async_EAsync_instMonadExceptOf___redArg();
return v_res_3455_;
}
}
static lean_object* _init_l_Std_Async_EAsync_instMonadExceptOf___closed__0(void){
_start:
{
lean_object* v___x_3456_; 
v___x_3456_ = l_Std_Async_EAsync_instMonadExceptOf___redArg();
return v___x_3456_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadExceptOf(lean_object* v_00_u03b5_3457_){
_start:
{
lean_object* v___x_3458_; 
v___x_3458_ = lean_obj_once(&l_Std_Async_EAsync_instMonadExceptOf___closed__0, &l_Std_Async_EAsync_instMonadExceptOf___closed__0_once, _init_l_Std_Async_EAsync_instMonadExceptOf___closed__0);
return v___x_3458_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadFinally___redArg___lam__0(lean_object* v_00_u03b1_3459_, lean_object* v_00_u03b2_3460_, lean_object* v_x_3461_, lean_object* v_f_3462_){
_start:
{
lean_object* v___x_3464_; uint8_t v___x_3465_; lean_object* v___x_3466_; 
v___x_3464_ = lean_unsigned_to_nat(0u);
v___x_3465_ = 0;
v___x_3466_ = l_Std_Async_EAsync_tryFinally_x27___redArg(v_x_3461_, v_f_3462_, v___x_3464_, v___x_3465_);
return v___x_3466_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadFinally___redArg___lam__0___boxed(lean_object* v_00_u03b1_3467_, lean_object* v_00_u03b2_3468_, lean_object* v_x_3469_, lean_object* v_f_3470_, lean_object* v___y_3471_){
_start:
{
lean_object* v_res_3472_; 
v_res_3472_ = l_Std_Async_EAsync_instMonadFinally___redArg___lam__0(v_00_u03b1_3467_, v_00_u03b2_3468_, v_x_3469_, v_f_3470_);
return v_res_3472_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadFinally___redArg(){
_start:
{
lean_object* v___f_3475_; 
v___f_3475_ = ((lean_object*)(l_Std_Async_EAsync_instMonadFinally___redArg___closed__0));
return v___f_3475_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadFinally___redArg___boxed(lean_object* v___dummy_3476_){
_start:
{
lean_object* v_res_3477_; 
v_res_3477_ = l_Std_Async_EAsync_instMonadFinally___redArg();
return v_res_3477_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadFinally(lean_object* v_00_u03b5_3478_){
_start:
{
lean_object* v___f_3479_; 
v___f_3479_ = ((lean_object*)(l_Std_Async_EAsync_instMonadFinally___redArg___closed__0));
return v___f_3479_;
}
}
static lean_object* _init_l_Std_Async_EAsync_instOrElse___redArg___closed__0(void){
_start:
{
lean_object* v___x_3480_; lean_object* v___x_3481_; 
v___x_3480_ = lean_obj_once(&l_Std_Async_EAsync_instMonadExcept___closed__0, &l_Std_Async_EAsync_instMonadExcept___closed__0_once, _init_l_Std_Async_EAsync_instMonadExcept___closed__0);
v___x_3481_ = lean_alloc_closure((void*)(l_MonadExcept_orElse), 6, 4);
lean_closure_set(v___x_3481_, 0, lean_box(0));
lean_closure_set(v___x_3481_, 1, lean_box(0));
lean_closure_set(v___x_3481_, 2, v___x_3480_);
lean_closure_set(v___x_3481_, 3, lean_box(0));
return v___x_3481_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instOrElse___redArg(){
_start:
{
lean_object* v___x_3483_; 
v___x_3483_ = lean_obj_once(&l_Std_Async_EAsync_instOrElse___redArg___closed__0, &l_Std_Async_EAsync_instOrElse___redArg___closed__0_once, _init_l_Std_Async_EAsync_instOrElse___redArg___closed__0);
return v___x_3483_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instOrElse___redArg___boxed(lean_object* v___dummy_3484_){
_start:
{
lean_object* v_res_3485_; 
v_res_3485_ = l_Std_Async_EAsync_instOrElse___redArg();
return v_res_3485_;
}
}
static lean_object* _init_l_Std_Async_EAsync_instOrElse___closed__0(void){
_start:
{
lean_object* v___x_3486_; 
v___x_3486_ = l_Std_Async_EAsync_instOrElse___redArg();
return v___x_3486_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instOrElse(lean_object* v_00_u03b5_3487_, lean_object* v_00_u03b1_3488_){
_start:
{
lean_object* v___x_3489_; 
v___x_3489_ = lean_obj_once(&l_Std_Async_EAsync_instOrElse___closed__0, &l_Std_Async_EAsync_instOrElse___closed__0_once, _init_l_Std_Async_EAsync_instOrElse___closed__0);
return v___x_3489_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instInhabited___redArg(lean_object* v_inst_3490_){
_start:
{
lean_object* v___x_3491_; lean_object* v___x_3492_; lean_object* v___x_3493_; 
v___x_3491_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3491_, 0, v_inst_3490_);
v___x_3492_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_pure___boxed), 3, 2);
lean_closure_set(v___x_3492_, 0, lean_box(0));
lean_closure_set(v___x_3492_, 1, v___x_3491_);
v___x_3493_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_mk___boxed), 4, 3);
lean_closure_set(v___x_3493_, 0, lean_box(0));
lean_closure_set(v___x_3493_, 1, lean_box(0));
lean_closure_set(v___x_3493_, 2, v___x_3492_);
return v___x_3493_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instInhabited(lean_object* v_00_u03b5_3494_, lean_object* v_00_u03b1_3495_, lean_object* v_inst_3496_){
_start:
{
lean_object* v___x_3497_; 
v___x_3497_ = l_Std_Async_EAsync_instInhabited___redArg(v_inst_3496_);
return v___x_3497_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadAwaitETask___redArg___lam__0(lean_object* v_00_u03b1_3498_, lean_object* v_t_3499_){
_start:
{
lean_object* v___x_3501_; 
v___x_3501_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3501_, 0, v_t_3499_);
return v___x_3501_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadAwaitETask___redArg___lam__0___boxed(lean_object* v_00_u03b1_3502_, lean_object* v_t_3503_, lean_object* v___y_3504_){
_start:
{
lean_object* v_res_3505_; 
v_res_3505_ = l_Std_Async_EAsync_instMonadAwaitETask___redArg___lam__0(v_00_u03b1_3502_, v_t_3503_);
return v_res_3505_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadAwaitETask___redArg(){
_start:
{
lean_object* v___f_3508_; 
v___f_3508_ = ((lean_object*)(l_Std_Async_EAsync_instMonadAwaitETask___redArg___closed__0));
return v___f_3508_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadAwaitETask___redArg___boxed(lean_object* v___dummy_3509_){
_start:
{
lean_object* v_res_3510_; 
v_res_3510_ = l_Std_Async_EAsync_instMonadAwaitETask___redArg();
return v_res_3510_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadAwaitETask(lean_object* v_00_u03b5_3511_){
_start:
{
lean_object* v___f_3512_; 
v___f_3512_ = ((lean_object*)(l_Std_Async_EAsync_instMonadAwaitETask___redArg___closed__0));
return v___f_3512_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadAwaitTask___redArg___lam__1(lean_object* v___f_3513_, lean_object* v_00_u03b1_3514_, lean_object* v_t_3515_){
_start:
{
lean_object* v___x_3517_; uint8_t v___x_3518_; lean_object* v___x_3519_; lean_object* v___x_3520_; 
v___x_3517_ = lean_unsigned_to_nat(0u);
v___x_3518_ = 0;
v___x_3519_ = lean_task_map(v___f_3513_, v_t_3515_, v___x_3517_, v___x_3518_);
v___x_3520_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3520_, 0, v___x_3519_);
return v___x_3520_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadAwaitTask___redArg___lam__1___boxed(lean_object* v___f_3521_, lean_object* v_00_u03b1_3522_, lean_object* v_t_3523_, lean_object* v___y_3524_){
_start:
{
lean_object* v_res_3525_; 
v_res_3525_ = l_Std_Async_EAsync_instMonadAwaitTask___redArg___lam__1(v___f_3521_, v_00_u03b1_3522_, v_t_3523_);
return v_res_3525_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadAwaitTask___redArg(){
_start:
{
lean_object* v___f_3529_; 
v___f_3529_ = ((lean_object*)(l_Std_Async_EAsync_instMonadAwaitTask___redArg___closed__0));
return v___f_3529_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadAwaitTask___redArg___boxed(lean_object* v___dummy_3530_){
_start:
{
lean_object* v_res_3531_; 
v_res_3531_ = l_Std_Async_EAsync_instMonadAwaitTask___redArg();
return v_res_3531_;
}
}
static lean_object* _init_l_Std_Async_EAsync_instMonadAwaitTask___closed__0(void){
_start:
{
lean_object* v___x_3532_; 
v___x_3532_ = l_Std_Async_EAsync_instMonadAwaitTask___redArg();
return v___x_3532_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadAwaitTask(lean_object* v_00_u03b5_3533_){
_start:
{
lean_object* v___x_3534_; 
v___x_3534_ = lean_obj_once(&l_Std_Async_EAsync_instMonadAwaitTask___closed__0, &l_Std_Async_EAsync_instMonadAwaitTask___closed__0_once, _init_l_Std_Async_EAsync_instMonadAwaitTask___closed__0);
return v___x_3534_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadAwaitAsyncTaskError___lam__0(lean_object* v_00_u03b1_3535_, lean_object* v_t_3536_){
_start:
{
lean_object* v___x_3538_; 
v___x_3538_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3538_, 0, v_t_3536_);
return v___x_3538_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadAwaitAsyncTaskError___lam__0___boxed(lean_object* v_00_u03b1_3539_, lean_object* v_t_3540_, lean_object* v___y_3541_){
_start:
{
lean_object* v_res_3542_; 
v_res_3542_ = l_Std_Async_EAsync_instMonadAwaitAsyncTaskError___lam__0(v_00_u03b1_3539_, v_t_3540_);
return v_res_3542_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadAwaitPromise___redArg___lam__1(lean_object* v___f_3545_, lean_object* v_00_u03b1_3546_, lean_object* v_t_3547_){
_start:
{
lean_object* v___x_3549_; lean_object* v___x_3550_; uint8_t v___x_3551_; lean_object* v___x_3552_; lean_object* v___x_3553_; 
v___x_3549_ = l_IO_Promise_result_x21___redArg(v_t_3547_);
v___x_3550_ = lean_unsigned_to_nat(0u);
v___x_3551_ = 0;
v___x_3552_ = lean_task_map(v___f_3545_, v___x_3549_, v___x_3550_, v___x_3551_);
v___x_3553_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3553_, 0, v___x_3552_);
return v___x_3553_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadAwaitPromise___redArg___lam__1___boxed(lean_object* v___f_3554_, lean_object* v_00_u03b1_3555_, lean_object* v_t_3556_, lean_object* v___y_3557_){
_start:
{
lean_object* v_res_3558_; 
v_res_3558_ = l_Std_Async_EAsync_instMonadAwaitPromise___redArg___lam__1(v___f_3554_, v_00_u03b1_3555_, v_t_3556_);
lean_dec(v_t_3556_);
return v_res_3558_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadAwaitPromise___redArg(){
_start:
{
lean_object* v___f_3562_; 
v___f_3562_ = ((lean_object*)(l_Std_Async_EAsync_instMonadAwaitPromise___redArg___closed__0));
return v___f_3562_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadAwaitPromise___redArg___boxed(lean_object* v___dummy_3563_){
_start:
{
lean_object* v_res_3564_; 
v_res_3564_ = l_Std_Async_EAsync_instMonadAwaitPromise___redArg();
return v_res_3564_;
}
}
static lean_object* _init_l_Std_Async_EAsync_instMonadAwaitPromise___closed__0(void){
_start:
{
lean_object* v___x_3565_; 
v___x_3565_ = l_Std_Async_EAsync_instMonadAwaitPromise___redArg();
return v___x_3565_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadAwaitPromise(lean_object* v_00_u03b5_3566_){
_start:
{
lean_object* v___x_3567_; 
v___x_3567_ = lean_obj_once(&l_Std_Async_EAsync_instMonadAwaitPromise___closed__0, &l_Std_Async_EAsync_instMonadAwaitPromise___closed__0_once, _init_l_Std_Async_EAsync_instMonadAwaitPromise___closed__0);
return v___x_3567_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadAsyncETask___redArg___lam__1(lean_object* v___f_3568_, lean_object* v_00_u03b1_3569_, lean_object* v_t_3570_, lean_object* v_prio_3571_){
_start:
{
lean_object* v___x_3573_; lean_object* v___x_3574_; lean_object* v___x_3575_; lean_object* v___x_3576_; uint8_t v___x_3577_; lean_object* v___x_3578_; lean_object* v___x_3579_; lean_object* v___x_3580_; 
v___x_3573_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_toBaseAsync___boxed), 4, 3);
lean_closure_set(v___x_3573_, 0, lean_box(0));
lean_closure_set(v___x_3573_, 1, lean_box(0));
lean_closure_set(v___x_3573_, 2, v_t_3570_);
v___x_3574_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_toRawBaseIO___boxed), 3, 2);
lean_closure_set(v___x_3574_, 0, lean_box(0));
lean_closure_set(v___x_3574_, 1, v___x_3573_);
v___x_3575_ = lean_io_as_task(v___x_3574_, v_prio_3571_);
v___x_3576_ = lean_unsigned_to_nat(0u);
v___x_3577_ = 1;
v___x_3578_ = lean_task_bind(v___x_3575_, v___f_3568_, v___x_3576_, v___x_3577_);
v___x_3579_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3579_, 0, v___x_3578_);
v___x_3580_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3580_, 0, v___x_3579_);
return v___x_3580_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadAsyncETask___redArg___lam__1___boxed(lean_object* v___f_3581_, lean_object* v_00_u03b1_3582_, lean_object* v_t_3583_, lean_object* v_prio_3584_, lean_object* v___y_3585_){
_start:
{
lean_object* v_res_3586_; 
v_res_3586_ = l_Std_Async_EAsync_instMonadAsyncETask___redArg___lam__1(v___f_3581_, v_00_u03b1_3582_, v_t_3583_, v_prio_3584_);
return v_res_3586_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadAsyncETask___redArg(){
_start:
{
lean_object* v___f_3590_; 
v___f_3590_ = ((lean_object*)(l_Std_Async_EAsync_instMonadAsyncETask___redArg___closed__0));
return v___f_3590_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadAsyncETask___redArg___boxed(lean_object* v___dummy_3591_){
_start:
{
lean_object* v_res_3592_; 
v_res_3592_ = l_Std_Async_EAsync_instMonadAsyncETask___redArg();
return v_res_3592_;
}
}
static lean_object* _init_l_Std_Async_EAsync_instMonadAsyncETask___closed__0(void){
_start:
{
lean_object* v___x_3593_; 
v___x_3593_ = l_Std_Async_EAsync_instMonadAsyncETask___redArg();
return v___x_3593_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadAsyncETask(lean_object* v_00_u03b5_3594_){
_start:
{
lean_object* v___x_3595_; 
v___x_3595_ = lean_obj_once(&l_Std_Async_EAsync_instMonadAsyncETask___closed__0, &l_Std_Async_EAsync_instMonadAsyncETask___closed__0_once, _init_l_Std_Async_EAsync_instMonadAsyncETask___closed__0);
return v___x_3595_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadAsyncAsyncTaskError___lam__0(lean_object* v_x_3596_){
_start:
{
if (lean_obj_tag(v_x_3596_) == 0)
{
lean_object* v_a_3597_; lean_object* v___x_3598_; 
v_a_3597_ = lean_ctor_get(v_x_3596_, 0);
lean_inc(v_a_3597_);
lean_dec_ref_known(v_x_3596_, 1);
v___x_3598_ = lean_task_pure(v_a_3597_);
return v___x_3598_;
}
else
{
lean_object* v_a_3599_; 
v_a_3599_ = lean_ctor_get(v_x_3596_, 0);
lean_inc_ref(v_a_3599_);
lean_dec_ref_known(v_x_3596_, 1);
return v_a_3599_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadAsyncAsyncTaskError___lam__1(lean_object* v___f_3600_, lean_object* v_00_u03b1_3601_, lean_object* v_t_3602_, lean_object* v_prio_3603_){
_start:
{
lean_object* v___x_3605_; lean_object* v___x_3606_; lean_object* v___x_3607_; lean_object* v___x_3608_; uint8_t v___x_3609_; lean_object* v___x_3610_; lean_object* v___x_3611_; lean_object* v___x_3612_; 
v___x_3605_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_toBaseAsync___boxed), 4, 3);
lean_closure_set(v___x_3605_, 0, lean_box(0));
lean_closure_set(v___x_3605_, 1, lean_box(0));
lean_closure_set(v___x_3605_, 2, v_t_3602_);
v___x_3606_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_toRawBaseIO___boxed), 3, 2);
lean_closure_set(v___x_3606_, 0, lean_box(0));
lean_closure_set(v___x_3606_, 1, v___x_3605_);
v___x_3607_ = lean_io_as_task(v___x_3606_, v_prio_3603_);
v___x_3608_ = lean_unsigned_to_nat(0u);
v___x_3609_ = 1;
v___x_3610_ = lean_task_bind(v___x_3607_, v___f_3600_, v___x_3608_, v___x_3609_);
v___x_3611_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3611_, 0, v___x_3610_);
v___x_3612_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3612_, 0, v___x_3611_);
return v___x_3612_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadAsyncAsyncTaskError___lam__1___boxed(lean_object* v___f_3613_, lean_object* v_00_u03b1_3614_, lean_object* v_t_3615_, lean_object* v_prio_3616_, lean_object* v___y_3617_){
_start:
{
lean_object* v_res_3618_; 
v_res_3618_ = l_Std_Async_EAsync_instMonadAsyncAsyncTaskError___lam__1(v___f_3613_, v_00_u03b1_3614_, v_t_3615_, v_prio_3616_);
return v_res_3618_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadLiftBaseIO___redArg___lam__0(lean_object* v_00_u03b1_3623_, lean_object* v_x_3624_){
_start:
{
lean_object* v___x_3626_; lean_object* v___x_3627_; lean_object* v___x_3628_; 
v___x_3626_ = lean_apply_1(v_x_3624_, lean_box(0));
v___x_3627_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3627_, 0, v___x_3626_);
v___x_3628_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3628_, 0, v___x_3627_);
return v___x_3628_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadLiftBaseIO___redArg___lam__0___boxed(lean_object* v_00_u03b1_3629_, lean_object* v_x_3630_, lean_object* v___y_3631_){
_start:
{
lean_object* v_res_3632_; 
v_res_3632_ = l_Std_Async_EAsync_instMonadLiftBaseIO___redArg___lam__0(v_00_u03b1_3629_, v_x_3630_);
return v_res_3632_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadLiftBaseIO___redArg(){
_start:
{
lean_object* v___f_3635_; 
v___f_3635_ = ((lean_object*)(l_Std_Async_EAsync_instMonadLiftBaseIO___redArg___closed__0));
return v___f_3635_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadLiftBaseIO___redArg___boxed(lean_object* v___dummy_3636_){
_start:
{
lean_object* v_res_3637_; 
v_res_3637_ = l_Std_Async_EAsync_instMonadLiftBaseIO___redArg();
return v_res_3637_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadLiftBaseIO(lean_object* v_00_u03b5_3638_){
_start:
{
lean_object* v___f_3639_; 
v___f_3639_ = ((lean_object*)(l_Std_Async_EAsync_instMonadLiftBaseIO___redArg___closed__0));
return v___f_3639_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadLiftEIO__1___redArg___lam__0(lean_object* v_00_u03b1_3640_, lean_object* v_x_3641_){
_start:
{
lean_object* v_val_3644_; lean_object* v___x_3646_; 
v___x_3646_ = lean_apply_1(v_x_3641_, lean_box(0));
if (lean_obj_tag(v___x_3646_) == 0)
{
lean_object* v_a_3647_; lean_object* v___x_3649_; uint8_t v_isShared_3650_; uint8_t v_isSharedCheck_3654_; 
v_a_3647_ = lean_ctor_get(v___x_3646_, 0);
v_isSharedCheck_3654_ = !lean_is_exclusive(v___x_3646_);
if (v_isSharedCheck_3654_ == 0)
{
v___x_3649_ = v___x_3646_;
v_isShared_3650_ = v_isSharedCheck_3654_;
goto v_resetjp_3648_;
}
else
{
lean_inc(v_a_3647_);
lean_dec(v___x_3646_);
v___x_3649_ = lean_box(0);
v_isShared_3650_ = v_isSharedCheck_3654_;
goto v_resetjp_3648_;
}
v_resetjp_3648_:
{
lean_object* v___x_3652_; 
if (v_isShared_3650_ == 0)
{
lean_ctor_set_tag(v___x_3649_, 1);
v___x_3652_ = v___x_3649_;
goto v_reusejp_3651_;
}
else
{
lean_object* v_reuseFailAlloc_3653_; 
v_reuseFailAlloc_3653_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3653_, 0, v_a_3647_);
v___x_3652_ = v_reuseFailAlloc_3653_;
goto v_reusejp_3651_;
}
v_reusejp_3651_:
{
v_val_3644_ = v___x_3652_;
goto v___jp_3643_;
}
}
}
else
{
lean_object* v_a_3655_; lean_object* v___x_3657_; uint8_t v_isShared_3658_; uint8_t v_isSharedCheck_3662_; 
v_a_3655_ = lean_ctor_get(v___x_3646_, 0);
v_isSharedCheck_3662_ = !lean_is_exclusive(v___x_3646_);
if (v_isSharedCheck_3662_ == 0)
{
v___x_3657_ = v___x_3646_;
v_isShared_3658_ = v_isSharedCheck_3662_;
goto v_resetjp_3656_;
}
else
{
lean_inc(v_a_3655_);
lean_dec(v___x_3646_);
v___x_3657_ = lean_box(0);
v_isShared_3658_ = v_isSharedCheck_3662_;
goto v_resetjp_3656_;
}
v_resetjp_3656_:
{
lean_object* v___x_3660_; 
if (v_isShared_3658_ == 0)
{
lean_ctor_set_tag(v___x_3657_, 0);
v___x_3660_ = v___x_3657_;
goto v_reusejp_3659_;
}
else
{
lean_object* v_reuseFailAlloc_3661_; 
v_reuseFailAlloc_3661_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3661_, 0, v_a_3655_);
v___x_3660_ = v_reuseFailAlloc_3661_;
goto v_reusejp_3659_;
}
v_reusejp_3659_:
{
v_val_3644_ = v___x_3660_;
goto v___jp_3643_;
}
}
}
v___jp_3643_:
{
lean_object* v___x_3645_; 
v___x_3645_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3645_, 0, v_val_3644_);
return v___x_3645_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadLiftEIO__1___redArg___lam__0___boxed(lean_object* v_00_u03b1_3663_, lean_object* v_x_3664_, lean_object* v___y_3665_){
_start:
{
lean_object* v_res_3666_; 
v_res_3666_ = l_Std_Async_EAsync_instMonadLiftEIO__1___redArg___lam__0(v_00_u03b1_3663_, v_x_3664_);
return v_res_3666_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadLiftEIO__1___redArg(){
_start:
{
lean_object* v___f_3669_; 
v___f_3669_ = ((lean_object*)(l_Std_Async_EAsync_instMonadLiftEIO__1___redArg___closed__0));
return v___f_3669_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadLiftEIO__1___redArg___boxed(lean_object* v___dummy_3670_){
_start:
{
lean_object* v_res_3671_; 
v_res_3671_ = l_Std_Async_EAsync_instMonadLiftEIO__1___redArg();
return v_res_3671_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadLiftEIO__1(lean_object* v_00_u03b5_3672_){
_start:
{
lean_object* v___f_3673_; 
v___f_3673_ = ((lean_object*)(l_Std_Async_EAsync_instMonadLiftEIO__1___redArg___closed__0));
return v___f_3673_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadLiftBaseAsync___redArg___lam__1(lean_object* v___f_3674_, lean_object* v_00_u03b1_3675_, lean_object* v_x_3676_){
_start:
{
lean_object* v___x_3678_; uint8_t v___x_3679_; lean_object* v___x_3680_; 
v___x_3678_ = lean_unsigned_to_nat(0u);
v___x_3679_ = 0;
v___x_3680_ = lean_apply_1(v_x_3676_, lean_box(0));
if (lean_obj_tag(v___x_3680_) == 0)
{
lean_object* v_a_3681_; lean_object* v___x_3683_; uint8_t v_isShared_3684_; uint8_t v_isSharedCheck_3689_; 
lean_dec_ref(v___f_3674_);
v_a_3681_ = lean_ctor_get(v___x_3680_, 0);
v_isSharedCheck_3689_ = !lean_is_exclusive(v___x_3680_);
if (v_isSharedCheck_3689_ == 0)
{
v___x_3683_ = v___x_3680_;
v_isShared_3684_ = v_isSharedCheck_3689_;
goto v_resetjp_3682_;
}
else
{
lean_inc(v_a_3681_);
lean_dec(v___x_3680_);
v___x_3683_ = lean_box(0);
v_isShared_3684_ = v_isSharedCheck_3689_;
goto v_resetjp_3682_;
}
v_resetjp_3682_:
{
lean_object* v___x_3685_; lean_object* v___x_3687_; 
v___x_3685_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3685_, 0, v_a_3681_);
if (v_isShared_3684_ == 0)
{
lean_ctor_set(v___x_3683_, 0, v___x_3685_);
v___x_3687_ = v___x_3683_;
goto v_reusejp_3686_;
}
else
{
lean_object* v_reuseFailAlloc_3688_; 
v_reuseFailAlloc_3688_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3688_, 0, v___x_3685_);
v___x_3687_ = v_reuseFailAlloc_3688_;
goto v_reusejp_3686_;
}
v_reusejp_3686_:
{
return v___x_3687_;
}
}
}
else
{
lean_object* v_a_3690_; lean_object* v___x_3692_; uint8_t v_isShared_3693_; uint8_t v_isSharedCheck_3698_; 
v_a_3690_ = lean_ctor_get(v___x_3680_, 0);
v_isSharedCheck_3698_ = !lean_is_exclusive(v___x_3680_);
if (v_isSharedCheck_3698_ == 0)
{
v___x_3692_ = v___x_3680_;
v_isShared_3693_ = v_isSharedCheck_3698_;
goto v_resetjp_3691_;
}
else
{
lean_inc(v_a_3690_);
lean_dec(v___x_3680_);
v___x_3692_ = lean_box(0);
v_isShared_3693_ = v_isSharedCheck_3698_;
goto v_resetjp_3691_;
}
v_resetjp_3691_:
{
lean_object* v___x_3694_; lean_object* v___x_3696_; 
v___x_3694_ = lean_task_map(v___f_3674_, v_a_3690_, v___x_3678_, v___x_3679_);
if (v_isShared_3693_ == 0)
{
lean_ctor_set(v___x_3692_, 0, v___x_3694_);
v___x_3696_ = v___x_3692_;
goto v_reusejp_3695_;
}
else
{
lean_object* v_reuseFailAlloc_3697_; 
v_reuseFailAlloc_3697_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3697_, 0, v___x_3694_);
v___x_3696_ = v_reuseFailAlloc_3697_;
goto v_reusejp_3695_;
}
v_reusejp_3695_:
{
return v___x_3696_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadLiftBaseAsync___redArg___lam__1___boxed(lean_object* v___f_3699_, lean_object* v_00_u03b1_3700_, lean_object* v_x_3701_, lean_object* v___y_3702_){
_start:
{
lean_object* v_res_3703_; 
v_res_3703_ = l_Std_Async_EAsync_instMonadLiftBaseAsync___redArg___lam__1(v___f_3699_, v_00_u03b1_3700_, v_x_3701_);
return v_res_3703_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadLiftBaseAsync___redArg(){
_start:
{
lean_object* v___f_3707_; 
v___f_3707_ = ((lean_object*)(l_Std_Async_EAsync_instMonadLiftBaseAsync___redArg___closed__0));
return v___f_3707_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadLiftBaseAsync___redArg___boxed(lean_object* v___dummy_3708_){
_start:
{
lean_object* v_res_3709_; 
v_res_3709_ = l_Std_Async_EAsync_instMonadLiftBaseAsync___redArg();
return v_res_3709_;
}
}
static lean_object* _init_l_Std_Async_EAsync_instMonadLiftBaseAsync___closed__0(void){
_start:
{
lean_object* v___x_3710_; 
v___x_3710_ = l_Std_Async_EAsync_instMonadLiftBaseAsync___redArg();
return v___x_3710_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadLiftBaseAsync(lean_object* v_00_u03b5_3711_){
_start:
{
lean_object* v___x_3712_; 
v___x_3712_ = lean_obj_once(&l_Std_Async_EAsync_instMonadLiftBaseAsync___closed__0, &l_Std_Async_EAsync_instMonadLiftBaseAsync___closed__0_once, _init_l_Std_Async_EAsync_instMonadLiftBaseAsync___closed__0);
return v___x_3712_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Async_Basic_0__Std_Async_EAsync_forIn_loop___redArg___lam__0___boxed(lean_object* v_promise_3713_, lean_object* v_f_3714_, lean_object* v_prio_3715_, lean_object* v_x_3716_, lean_object* v___y_3717_){
_start:
{
lean_object* v_res_3718_; 
v_res_3718_ = l___private_Std_Async_Basic_0__Std_Async_EAsync_forIn_loop___redArg___lam__0(v_promise_3713_, v_f_3714_, v_prio_3715_, v_x_3716_);
return v_res_3718_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Async_Basic_0__Std_Async_EAsync_forIn_loop___redArg(lean_object* v_f_3719_, lean_object* v_prio_3720_, lean_object* v_promise_3721_, lean_object* v_b_3722_){
_start:
{
lean_object* v___f_3724_; lean_object* v___x_3725_; lean_object* v___x_3726_; 
lean_inc(v_prio_3720_);
lean_inc_ref_n(v_f_3719_, 2);
lean_inc(v_promise_3721_);
v___f_3724_ = lean_alloc_closure((void*)(l___private_Std_Async_Basic_0__Std_Async_EAsync_forIn_loop___redArg___lam__0___boxed), 5, 3);
lean_closure_set(v___f_3724_, 0, v_promise_3721_);
lean_closure_set(v___f_3724_, 1, v_f_3719_);
lean_closure_set(v___f_3724_, 2, v_prio_3720_);
v___x_3725_ = lean_box(0);
v___x_3726_ = lean_apply_3(v_f_3719_, v___x_3725_, v_b_3722_, lean_box(0));
if (lean_obj_tag(v___x_3726_) == 0)
{
lean_object* v_a_3727_; 
lean_dec_ref(v___f_3724_);
v_a_3727_ = lean_ctor_get(v___x_3726_, 0);
lean_inc(v_a_3727_);
lean_dec_ref_known(v___x_3726_, 1);
if (lean_obj_tag(v_a_3727_) == 0)
{
lean_object* v_a_3728_; lean_object* v___x_3730_; uint8_t v_isShared_3731_; uint8_t v_isSharedCheck_3736_; 
lean_dec(v_prio_3720_);
lean_dec_ref(v_f_3719_);
v_a_3728_ = lean_ctor_get(v_a_3727_, 0);
v_isSharedCheck_3736_ = !lean_is_exclusive(v_a_3727_);
if (v_isSharedCheck_3736_ == 0)
{
v___x_3730_ = v_a_3727_;
v_isShared_3731_ = v_isSharedCheck_3736_;
goto v_resetjp_3729_;
}
else
{
lean_inc(v_a_3728_);
lean_dec(v_a_3727_);
v___x_3730_ = lean_box(0);
v_isShared_3731_ = v_isSharedCheck_3736_;
goto v_resetjp_3729_;
}
v_resetjp_3729_:
{
lean_object* v___x_3733_; 
if (v_isShared_3731_ == 0)
{
v___x_3733_ = v___x_3730_;
goto v_reusejp_3732_;
}
else
{
lean_object* v_reuseFailAlloc_3735_; 
v_reuseFailAlloc_3735_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3735_, 0, v_a_3728_);
v___x_3733_ = v_reuseFailAlloc_3735_;
goto v_reusejp_3732_;
}
v_reusejp_3732_:
{
lean_object* v___x_3734_; 
v___x_3734_ = lean_io_promise_resolve(v___x_3733_, v_promise_3721_);
lean_dec(v_promise_3721_);
return v___x_3734_;
}
}
}
else
{
lean_object* v_a_3737_; lean_object* v___x_3739_; uint8_t v_isShared_3740_; uint8_t v_isSharedCheck_3748_; 
v_a_3737_ = lean_ctor_get(v_a_3727_, 0);
v_isSharedCheck_3748_ = !lean_is_exclusive(v_a_3727_);
if (v_isSharedCheck_3748_ == 0)
{
v___x_3739_ = v_a_3727_;
v_isShared_3740_ = v_isSharedCheck_3748_;
goto v_resetjp_3738_;
}
else
{
lean_inc(v_a_3737_);
lean_dec(v_a_3727_);
v___x_3739_ = lean_box(0);
v_isShared_3740_ = v_isSharedCheck_3748_;
goto v_resetjp_3738_;
}
v_resetjp_3738_:
{
if (lean_obj_tag(v_a_3737_) == 0)
{
lean_object* v_a_3741_; lean_object* v___x_3743_; 
lean_dec(v_prio_3720_);
lean_dec_ref(v_f_3719_);
v_a_3741_ = lean_ctor_get(v_a_3737_, 0);
lean_inc(v_a_3741_);
lean_dec_ref_known(v_a_3737_, 1);
if (v_isShared_3740_ == 0)
{
lean_ctor_set(v___x_3739_, 0, v_a_3741_);
v___x_3743_ = v___x_3739_;
goto v_reusejp_3742_;
}
else
{
lean_object* v_reuseFailAlloc_3745_; 
v_reuseFailAlloc_3745_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3745_, 0, v_a_3741_);
v___x_3743_ = v_reuseFailAlloc_3745_;
goto v_reusejp_3742_;
}
v_reusejp_3742_:
{
lean_object* v___x_3744_; 
v___x_3744_ = lean_io_promise_resolve(v___x_3743_, v_promise_3721_);
lean_dec(v_promise_3721_);
return v___x_3744_;
}
}
else
{
lean_object* v_a_3746_; 
lean_del_object(v___x_3739_);
v_a_3746_ = lean_ctor_get(v_a_3737_, 0);
lean_inc(v_a_3746_);
lean_dec_ref_known(v_a_3737_, 1);
v_b_3722_ = v_a_3746_;
goto _start;
}
}
}
}
else
{
lean_object* v_a_3749_; uint8_t v___x_3750_; lean_object* v___x_3751_; 
lean_dec(v_promise_3721_);
lean_dec_ref(v_f_3719_);
v_a_3749_ = lean_ctor_get(v___x_3726_, 0);
lean_inc_ref(v_a_3749_);
lean_dec_ref_known(v___x_3726_, 1);
v___x_3750_ = 0;
v___x_3751_ = l_BaseIO_chainTask___redArg(v_a_3749_, v___f_3724_, v_prio_3720_, v___x_3750_);
return v___x_3751_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Async_Basic_0__Std_Async_EAsync_forIn_loop___redArg___lam__0(lean_object* v_promise_3752_, lean_object* v_f_3753_, lean_object* v_prio_3754_, lean_object* v_x_3755_){
_start:
{
if (lean_obj_tag(v_x_3755_) == 0)
{
lean_object* v_a_3757_; lean_object* v___x_3759_; uint8_t v_isShared_3760_; uint8_t v_isSharedCheck_3765_; 
lean_dec(v_prio_3754_);
lean_dec_ref(v_f_3753_);
v_a_3757_ = lean_ctor_get(v_x_3755_, 0);
v_isSharedCheck_3765_ = !lean_is_exclusive(v_x_3755_);
if (v_isSharedCheck_3765_ == 0)
{
v___x_3759_ = v_x_3755_;
v_isShared_3760_ = v_isSharedCheck_3765_;
goto v_resetjp_3758_;
}
else
{
lean_inc(v_a_3757_);
lean_dec(v_x_3755_);
v___x_3759_ = lean_box(0);
v_isShared_3760_ = v_isSharedCheck_3765_;
goto v_resetjp_3758_;
}
v_resetjp_3758_:
{
lean_object* v___x_3762_; 
if (v_isShared_3760_ == 0)
{
v___x_3762_ = v___x_3759_;
goto v_reusejp_3761_;
}
else
{
lean_object* v_reuseFailAlloc_3764_; 
v_reuseFailAlloc_3764_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3764_, 0, v_a_3757_);
v___x_3762_ = v_reuseFailAlloc_3764_;
goto v_reusejp_3761_;
}
v_reusejp_3761_:
{
lean_object* v___x_3763_; 
v___x_3763_ = lean_io_promise_resolve(v___x_3762_, v_promise_3752_);
lean_dec(v_promise_3752_);
return v___x_3763_;
}
}
}
else
{
lean_object* v_a_3766_; lean_object* v___x_3768_; uint8_t v_isShared_3769_; uint8_t v_isSharedCheck_3777_; 
v_a_3766_ = lean_ctor_get(v_x_3755_, 0);
v_isSharedCheck_3777_ = !lean_is_exclusive(v_x_3755_);
if (v_isSharedCheck_3777_ == 0)
{
v___x_3768_ = v_x_3755_;
v_isShared_3769_ = v_isSharedCheck_3777_;
goto v_resetjp_3767_;
}
else
{
lean_inc(v_a_3766_);
lean_dec(v_x_3755_);
v___x_3768_ = lean_box(0);
v_isShared_3769_ = v_isSharedCheck_3777_;
goto v_resetjp_3767_;
}
v_resetjp_3767_:
{
if (lean_obj_tag(v_a_3766_) == 0)
{
lean_object* v_a_3770_; lean_object* v___x_3772_; 
lean_dec(v_prio_3754_);
lean_dec_ref(v_f_3753_);
v_a_3770_ = lean_ctor_get(v_a_3766_, 0);
lean_inc(v_a_3770_);
lean_dec_ref_known(v_a_3766_, 1);
if (v_isShared_3769_ == 0)
{
lean_ctor_set(v___x_3768_, 0, v_a_3770_);
v___x_3772_ = v___x_3768_;
goto v_reusejp_3771_;
}
else
{
lean_object* v_reuseFailAlloc_3774_; 
v_reuseFailAlloc_3774_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3774_, 0, v_a_3770_);
v___x_3772_ = v_reuseFailAlloc_3774_;
goto v_reusejp_3771_;
}
v_reusejp_3771_:
{
lean_object* v___x_3773_; 
v___x_3773_ = lean_io_promise_resolve(v___x_3772_, v_promise_3752_);
lean_dec(v_promise_3752_);
return v___x_3773_;
}
}
else
{
lean_object* v_a_3775_; lean_object* v___x_3776_; 
lean_del_object(v___x_3768_);
v_a_3775_ = lean_ctor_get(v_a_3766_, 0);
lean_inc(v_a_3775_);
lean_dec_ref_known(v_a_3766_, 1);
v___x_3776_ = l___private_Std_Async_Basic_0__Std_Async_EAsync_forIn_loop___redArg(v_f_3753_, v_prio_3754_, v_promise_3752_, v_a_3775_);
return v___x_3776_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Async_Basic_0__Std_Async_EAsync_forIn_loop___redArg___boxed(lean_object* v_f_3778_, lean_object* v_prio_3779_, lean_object* v_promise_3780_, lean_object* v_b_3781_, lean_object* v___y_3782_){
_start:
{
lean_object* v_res_3783_; 
v_res_3783_ = l___private_Std_Async_Basic_0__Std_Async_EAsync_forIn_loop___redArg(v_f_3778_, v_prio_3779_, v_promise_3780_, v_b_3781_);
return v_res_3783_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Async_Basic_0__Std_Async_EAsync_forIn_loop(lean_object* v_00_u03b5_3784_, lean_object* v_00_u03b2_3785_, lean_object* v_f_3786_, lean_object* v_prio_3787_, lean_object* v_promise_3788_, lean_object* v_b_3789_){
_start:
{
lean_object* v___x_3791_; 
v___x_3791_ = l___private_Std_Async_Basic_0__Std_Async_EAsync_forIn_loop___redArg(v_f_3786_, v_prio_3787_, v_promise_3788_, v_b_3789_);
return v___x_3791_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Async_Basic_0__Std_Async_EAsync_forIn_loop___boxed(lean_object* v_00_u03b5_3792_, lean_object* v_00_u03b2_3793_, lean_object* v_f_3794_, lean_object* v_prio_3795_, lean_object* v_promise_3796_, lean_object* v_b_3797_, lean_object* v___y_3798_){
_start:
{
lean_object* v_res_3799_; 
v_res_3799_ = l___private_Std_Async_Basic_0__Std_Async_EAsync_forIn_loop(v_00_u03b5_3792_, v_00_u03b2_3793_, v_f_3794_, v_prio_3795_, v_promise_3796_, v_b_3797_);
return v_res_3799_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_forIn___redArg___lam__0(lean_object* v_a_3800_, lean_object* v_x_3801_){
_start:
{
if (lean_obj_tag(v_x_3801_) == 0)
{
lean_object* v_a_3803_; lean_object* v___x_3805_; uint8_t v_isShared_3806_; uint8_t v_isSharedCheck_3811_; 
v_a_3803_ = lean_ctor_get(v_x_3801_, 0);
v_isSharedCheck_3811_ = !lean_is_exclusive(v_x_3801_);
if (v_isSharedCheck_3811_ == 0)
{
v___x_3805_ = v_x_3801_;
v_isShared_3806_ = v_isSharedCheck_3811_;
goto v_resetjp_3804_;
}
else
{
lean_inc(v_a_3803_);
lean_dec(v_x_3801_);
v___x_3805_ = lean_box(0);
v_isShared_3806_ = v_isSharedCheck_3811_;
goto v_resetjp_3804_;
}
v_resetjp_3804_:
{
lean_object* v___x_3808_; 
if (v_isShared_3806_ == 0)
{
v___x_3808_ = v___x_3805_;
goto v_reusejp_3807_;
}
else
{
lean_object* v_reuseFailAlloc_3810_; 
v_reuseFailAlloc_3810_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3810_, 0, v_a_3803_);
v___x_3808_ = v_reuseFailAlloc_3810_;
goto v_reusejp_3807_;
}
v_reusejp_3807_:
{
lean_object* v___x_3809_; 
v___x_3809_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3809_, 0, v___x_3808_);
return v___x_3809_;
}
}
}
else
{
lean_object* v___x_3812_; lean_object* v___x_3813_; 
lean_dec_ref_known(v_x_3801_, 1);
v___x_3812_ = l_IO_Promise_result_x21___redArg(v_a_3800_);
v___x_3813_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3813_, 0, v___x_3812_);
return v___x_3813_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_forIn___redArg___lam__0___boxed(lean_object* v_a_3814_, lean_object* v_x_3815_, lean_object* v___y_3816_){
_start:
{
lean_object* v_res_3817_; 
v_res_3817_ = l_Std_Async_EAsync_forIn___redArg___lam__0(v_a_3814_, v_x_3815_);
lean_dec(v_a_3814_);
return v_res_3817_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_forIn___redArg___lam__1(lean_object* v_f_3818_, lean_object* v_prio_3819_, lean_object* v_init_3820_, lean_object* v_x_3821_){
_start:
{
if (lean_obj_tag(v_x_3821_) == 0)
{
lean_object* v_a_3823_; lean_object* v___x_3825_; uint8_t v_isShared_3826_; uint8_t v_isSharedCheck_3831_; 
lean_dec(v_init_3820_);
lean_dec(v_prio_3819_);
lean_dec_ref(v_f_3818_);
v_a_3823_ = lean_ctor_get(v_x_3821_, 0);
v_isSharedCheck_3831_ = !lean_is_exclusive(v_x_3821_);
if (v_isSharedCheck_3831_ == 0)
{
v___x_3825_ = v_x_3821_;
v_isShared_3826_ = v_isSharedCheck_3831_;
goto v_resetjp_3824_;
}
else
{
lean_inc(v_a_3823_);
lean_dec(v_x_3821_);
v___x_3825_ = lean_box(0);
v_isShared_3826_ = v_isSharedCheck_3831_;
goto v_resetjp_3824_;
}
v_resetjp_3824_:
{
lean_object* v___x_3828_; 
if (v_isShared_3826_ == 0)
{
v___x_3828_ = v___x_3825_;
goto v_reusejp_3827_;
}
else
{
lean_object* v_reuseFailAlloc_3830_; 
v_reuseFailAlloc_3830_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3830_, 0, v_a_3823_);
v___x_3828_ = v_reuseFailAlloc_3830_;
goto v_reusejp_3827_;
}
v_reusejp_3827_:
{
lean_object* v___x_3829_; 
v___x_3829_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3829_, 0, v___x_3828_);
return v___x_3829_;
}
}
}
else
{
lean_object* v_a_3832_; lean_object* v___x_3834_; uint8_t v_isShared_3835_; uint8_t v_isSharedCheck_3845_; 
v_a_3832_ = lean_ctor_get(v_x_3821_, 0);
v_isSharedCheck_3845_ = !lean_is_exclusive(v_x_3821_);
if (v_isSharedCheck_3845_ == 0)
{
v___x_3834_ = v_x_3821_;
v_isShared_3835_ = v_isSharedCheck_3845_;
goto v_resetjp_3833_;
}
else
{
lean_inc(v_a_3832_);
lean_dec(v_x_3821_);
v___x_3834_ = lean_box(0);
v_isShared_3835_ = v_isSharedCheck_3845_;
goto v_resetjp_3833_;
}
v_resetjp_3833_:
{
lean_object* v___f_3836_; lean_object* v___x_3837_; uint8_t v___x_3838_; lean_object* v___x_3839_; lean_object* v___x_3841_; 
lean_inc(v_a_3832_);
v___f_3836_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_forIn___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_3836_, 0, v_a_3832_);
v___x_3837_ = lean_unsigned_to_nat(0u);
v___x_3838_ = 0;
v___x_3839_ = l___private_Std_Async_Basic_0__Std_Async_EAsync_forIn_loop___redArg(v_f_3818_, v_prio_3819_, v_a_3832_, v_init_3820_);
if (v_isShared_3835_ == 0)
{
lean_ctor_set(v___x_3834_, 0, v___x_3839_);
v___x_3841_ = v___x_3834_;
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
v___x_3843_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3837_, v___x_3838_, v___x_3842_, v___f_3836_);
return v___x_3843_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_forIn___redArg___lam__1___boxed(lean_object* v_f_3846_, lean_object* v_prio_3847_, lean_object* v_init_3848_, lean_object* v_x_3849_, lean_object* v___y_3850_){
_start:
{
lean_object* v_res_3851_; 
v_res_3851_ = l_Std_Async_EAsync_forIn___redArg___lam__1(v_f_3846_, v_prio_3847_, v_init_3848_, v_x_3849_);
return v_res_3851_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_forIn___redArg(lean_object* v_init_3852_, lean_object* v_f_3853_, lean_object* v_prio_3854_){
_start:
{
lean_object* v___f_3856_; lean_object* v___x_3857_; uint8_t v___x_3858_; lean_object* v___x_3859_; lean_object* v___x_3860_; lean_object* v___x_3861_; lean_object* v___x_3862_; 
v___f_3856_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_forIn___redArg___lam__1___boxed), 5, 3);
lean_closure_set(v___f_3856_, 0, v_f_3853_);
lean_closure_set(v___f_3856_, 1, v_prio_3854_);
lean_closure_set(v___f_3856_, 2, v_init_3852_);
v___x_3857_ = lean_unsigned_to_nat(0u);
v___x_3858_ = 0;
v___x_3859_ = lean_io_promise_new();
v___x_3860_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3860_, 0, v___x_3859_);
v___x_3861_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3861_, 0, v___x_3860_);
v___x_3862_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3857_, v___x_3858_, v___x_3861_, v___f_3856_);
return v___x_3862_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_forIn___redArg___boxed(lean_object* v_init_3863_, lean_object* v_f_3864_, lean_object* v_prio_3865_, lean_object* v___y_3866_){
_start:
{
lean_object* v_res_3867_; 
v_res_3867_ = l_Std_Async_EAsync_forIn___redArg(v_init_3863_, v_f_3864_, v_prio_3865_);
return v_res_3867_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_forIn(lean_object* v_00_u03b5_3868_, lean_object* v_00_u03b2_3869_, lean_object* v_init_3870_, lean_object* v_f_3871_, lean_object* v_prio_3872_){
_start:
{
lean_object* v___f_3874_; lean_object* v___x_3875_; uint8_t v___x_3876_; lean_object* v___x_3877_; lean_object* v___x_3878_; lean_object* v___x_3879_; lean_object* v___x_3880_; 
v___f_3874_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_forIn___redArg___lam__1___boxed), 5, 3);
lean_closure_set(v___f_3874_, 0, v_f_3871_);
lean_closure_set(v___f_3874_, 1, v_prio_3872_);
lean_closure_set(v___f_3874_, 2, v_init_3870_);
v___x_3875_ = lean_unsigned_to_nat(0u);
v___x_3876_ = 0;
v___x_3877_ = lean_io_promise_new();
v___x_3878_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3878_, 0, v___x_3877_);
v___x_3879_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3879_, 0, v___x_3878_);
v___x_3880_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3875_, v___x_3876_, v___x_3879_, v___f_3874_);
return v___x_3880_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_forIn___boxed(lean_object* v_00_u03b5_3881_, lean_object* v_00_u03b2_3882_, lean_object* v_init_3883_, lean_object* v_f_3884_, lean_object* v_prio_3885_, lean_object* v___y_3886_){
_start:
{
lean_object* v_res_3887_; 
v_res_3887_ = l_Std_Async_EAsync_forIn(v_00_u03b5_3881_, v_00_u03b2_3882_, v_init_3883_, v_f_3884_, v_prio_3885_);
return v_res_3887_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instForInLoopUnit___redArg___lam__1(lean_object* v_f_3888_, lean_object* v___x_3889_, lean_object* v_init_3890_, lean_object* v_x_3891_){
_start:
{
if (lean_obj_tag(v_x_3891_) == 0)
{
lean_object* v_a_3893_; lean_object* v___x_3895_; uint8_t v_isShared_3896_; uint8_t v_isSharedCheck_3901_; 
lean_dec(v_init_3890_);
lean_dec(v___x_3889_);
lean_dec_ref(v_f_3888_);
v_a_3893_ = lean_ctor_get(v_x_3891_, 0);
v_isSharedCheck_3901_ = !lean_is_exclusive(v_x_3891_);
if (v_isSharedCheck_3901_ == 0)
{
v___x_3895_ = v_x_3891_;
v_isShared_3896_ = v_isSharedCheck_3901_;
goto v_resetjp_3894_;
}
else
{
lean_inc(v_a_3893_);
lean_dec(v_x_3891_);
v___x_3895_ = lean_box(0);
v_isShared_3896_ = v_isSharedCheck_3901_;
goto v_resetjp_3894_;
}
v_resetjp_3894_:
{
lean_object* v___x_3898_; 
if (v_isShared_3896_ == 0)
{
v___x_3898_ = v___x_3895_;
goto v_reusejp_3897_;
}
else
{
lean_object* v_reuseFailAlloc_3900_; 
v_reuseFailAlloc_3900_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3900_, 0, v_a_3893_);
v___x_3898_ = v_reuseFailAlloc_3900_;
goto v_reusejp_3897_;
}
v_reusejp_3897_:
{
lean_object* v___x_3899_; 
v___x_3899_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3899_, 0, v___x_3898_);
return v___x_3899_;
}
}
}
else
{
lean_object* v_a_3902_; lean_object* v___x_3904_; uint8_t v_isShared_3905_; uint8_t v_isSharedCheck_3914_; 
v_a_3902_ = lean_ctor_get(v_x_3891_, 0);
v_isSharedCheck_3914_ = !lean_is_exclusive(v_x_3891_);
if (v_isSharedCheck_3914_ == 0)
{
v___x_3904_ = v_x_3891_;
v_isShared_3905_ = v_isSharedCheck_3914_;
goto v_resetjp_3903_;
}
else
{
lean_inc(v_a_3902_);
lean_dec(v_x_3891_);
v___x_3904_ = lean_box(0);
v_isShared_3905_ = v_isSharedCheck_3914_;
goto v_resetjp_3903_;
}
v_resetjp_3903_:
{
lean_object* v___f_3906_; uint8_t v___x_3907_; lean_object* v___x_3908_; lean_object* v___x_3910_; 
lean_inc(v_a_3902_);
v___f_3906_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_forIn___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_3906_, 0, v_a_3902_);
v___x_3907_ = 0;
lean_inc(v___x_3889_);
v___x_3908_ = l___private_Std_Async_Basic_0__Std_Async_EAsync_forIn_loop___redArg(v_f_3888_, v___x_3889_, v_a_3902_, v_init_3890_);
if (v_isShared_3905_ == 0)
{
lean_ctor_set(v___x_3904_, 0, v___x_3908_);
v___x_3910_ = v___x_3904_;
goto v_reusejp_3909_;
}
else
{
lean_object* v_reuseFailAlloc_3913_; 
v_reuseFailAlloc_3913_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3913_, 0, v___x_3908_);
v___x_3910_ = v_reuseFailAlloc_3913_;
goto v_reusejp_3909_;
}
v_reusejp_3909_:
{
lean_object* v___x_3911_; lean_object* v___x_3912_; 
v___x_3911_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3911_, 0, v___x_3910_);
v___x_3912_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3889_, v___x_3907_, v___x_3911_, v___f_3906_);
return v___x_3912_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instForInLoopUnit___redArg___lam__1___boxed(lean_object* v_f_3915_, lean_object* v___x_3916_, lean_object* v_init_3917_, lean_object* v_x_3918_, lean_object* v___y_3919_){
_start:
{
lean_object* v_res_3920_; 
v_res_3920_ = l_Std_Async_EAsync_instForInLoopUnit___redArg___lam__1(v_f_3915_, v___x_3916_, v_init_3917_, v_x_3918_);
return v_res_3920_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instForInLoopUnit___redArg___lam__0(lean_object* v_00_u03b2_3921_, lean_object* v_x_3922_, lean_object* v_init_3923_, lean_object* v_f_3924_){
_start:
{
lean_object* v___x_3926_; lean_object* v___f_3927_; uint8_t v___x_3928_; lean_object* v___x_3929_; lean_object* v___x_3930_; lean_object* v___x_3931_; lean_object* v___x_3932_; 
v___x_3926_ = lean_unsigned_to_nat(0u);
v___f_3927_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_instForInLoopUnit___redArg___lam__1___boxed), 5, 3);
lean_closure_set(v___f_3927_, 0, v_f_3924_);
lean_closure_set(v___f_3927_, 1, v___x_3926_);
lean_closure_set(v___f_3927_, 2, v_init_3923_);
v___x_3928_ = 0;
v___x_3929_ = lean_io_promise_new();
v___x_3930_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3930_, 0, v___x_3929_);
v___x_3931_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3931_, 0, v___x_3930_);
v___x_3932_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3926_, v___x_3928_, v___x_3931_, v___f_3927_);
return v___x_3932_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instForInLoopUnit___redArg___lam__0___boxed(lean_object* v_00_u03b2_3933_, lean_object* v_x_3934_, lean_object* v_init_3935_, lean_object* v_f_3936_, lean_object* v___y_3937_){
_start:
{
lean_object* v_res_3938_; 
v_res_3938_ = l_Std_Async_EAsync_instForInLoopUnit___redArg___lam__0(v_00_u03b2_3933_, v_x_3934_, v_init_3935_, v_f_3936_);
return v_res_3938_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instForInLoopUnit___redArg(){
_start:
{
lean_object* v___f_3941_; 
v___f_3941_ = ((lean_object*)(l_Std_Async_EAsync_instForInLoopUnit___redArg___closed__0));
return v___f_3941_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instForInLoopUnit___redArg___boxed(lean_object* v___dummy_3942_){
_start:
{
lean_object* v_res_3943_; 
v_res_3943_ = l_Std_Async_EAsync_instForInLoopUnit___redArg();
return v_res_3943_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instForInLoopUnit(lean_object* v_00_u03b5_3944_){
_start:
{
lean_object* v___f_3945_; 
v___f_3945_ = ((lean_object*)(l_Std_Async_EAsync_instForInLoopUnit___redArg___closed__0));
return v___f_3945_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_ofExcept___redArg(lean_object* v_except_3946_){
_start:
{
lean_object* v___x_3948_; 
v___x_3948_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3948_, 0, v_except_3946_);
return v___x_3948_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_ofExcept___redArg___boxed(lean_object* v_except_3949_, lean_object* v___y_3950_){
_start:
{
lean_object* v_res_3951_; 
v_res_3951_ = l_Std_Async_EAsync_ofExcept___redArg(v_except_3949_);
return v_res_3951_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_ofExcept(lean_object* v_00_u03b5_3952_, lean_object* v_00_u03b1_3953_, lean_object* v_except_3954_){
_start:
{
lean_object* v___x_3956_; 
v___x_3956_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3956_, 0, v_except_3954_);
return v___x_3956_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_ofExcept___boxed(lean_object* v_00_u03b5_3957_, lean_object* v_00_u03b1_3958_, lean_object* v_except_3959_, lean_object* v___y_3960_){
_start:
{
lean_object* v_res_3961_; 
v_res_3961_ = l_Std_Async_EAsync_ofExcept(v_00_u03b5_3957_, v_00_u03b1_3958_, v_except_3959_);
return v_res_3961_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_concurrently___redArg___lam__1(lean_object* v_a_3962_, lean_object* v_x_3963_){
_start:
{
if (lean_obj_tag(v_x_3963_) == 0)
{
lean_object* v_a_3965_; lean_object* v___x_3967_; uint8_t v_isShared_3968_; uint8_t v_isSharedCheck_3973_; 
lean_dec(v_a_3962_);
v_a_3965_ = lean_ctor_get(v_x_3963_, 0);
v_isSharedCheck_3973_ = !lean_is_exclusive(v_x_3963_);
if (v_isSharedCheck_3973_ == 0)
{
v___x_3967_ = v_x_3963_;
v_isShared_3968_ = v_isSharedCheck_3973_;
goto v_resetjp_3966_;
}
else
{
lean_inc(v_a_3965_);
lean_dec(v_x_3963_);
v___x_3967_ = lean_box(0);
v_isShared_3968_ = v_isSharedCheck_3973_;
goto v_resetjp_3966_;
}
v_resetjp_3966_:
{
lean_object* v___x_3970_; 
if (v_isShared_3968_ == 0)
{
v___x_3970_ = v___x_3967_;
goto v_reusejp_3969_;
}
else
{
lean_object* v_reuseFailAlloc_3972_; 
v_reuseFailAlloc_3972_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3972_, 0, v_a_3965_);
v___x_3970_ = v_reuseFailAlloc_3972_;
goto v_reusejp_3969_;
}
v_reusejp_3969_:
{
lean_object* v___x_3971_; 
v___x_3971_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3971_, 0, v___x_3970_);
return v___x_3971_;
}
}
}
else
{
lean_object* v_a_3974_; lean_object* v___x_3976_; uint8_t v_isShared_3977_; uint8_t v_isSharedCheck_3983_; 
v_a_3974_ = lean_ctor_get(v_x_3963_, 0);
v_isSharedCheck_3983_ = !lean_is_exclusive(v_x_3963_);
if (v_isSharedCheck_3983_ == 0)
{
v___x_3976_ = v_x_3963_;
v_isShared_3977_ = v_isSharedCheck_3983_;
goto v_resetjp_3975_;
}
else
{
lean_inc(v_a_3974_);
lean_dec(v_x_3963_);
v___x_3976_ = lean_box(0);
v_isShared_3977_ = v_isSharedCheck_3983_;
goto v_resetjp_3975_;
}
v_resetjp_3975_:
{
lean_object* v___x_3978_; lean_object* v___x_3980_; 
v___x_3978_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3978_, 0, v_a_3962_);
lean_ctor_set(v___x_3978_, 1, v_a_3974_);
if (v_isShared_3977_ == 0)
{
lean_ctor_set(v___x_3976_, 0, v___x_3978_);
v___x_3980_ = v___x_3976_;
goto v_reusejp_3979_;
}
else
{
lean_object* v_reuseFailAlloc_3982_; 
v_reuseFailAlloc_3982_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3982_, 0, v___x_3978_);
v___x_3980_ = v_reuseFailAlloc_3982_;
goto v_reusejp_3979_;
}
v_reusejp_3979_:
{
lean_object* v___x_3981_; 
v___x_3981_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3981_, 0, v___x_3980_);
return v___x_3981_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_concurrently___redArg___lam__1___boxed(lean_object* v_a_3984_, lean_object* v_x_3985_, lean_object* v___y_3986_){
_start:
{
lean_object* v_res_3987_; 
v_res_3987_ = l_Std_Async_EAsync_concurrently___redArg___lam__1(v_a_3984_, v_x_3985_);
return v_res_3987_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_concurrently___redArg___lam__0(lean_object* v_a_3988_, lean_object* v_x_3989_){
_start:
{
if (lean_obj_tag(v_x_3989_) == 0)
{
lean_object* v_a_3991_; lean_object* v___x_3993_; uint8_t v_isShared_3994_; uint8_t v_isSharedCheck_3999_; 
lean_dec_ref(v_a_3988_);
v_a_3991_ = lean_ctor_get(v_x_3989_, 0);
v_isSharedCheck_3999_ = !lean_is_exclusive(v_x_3989_);
if (v_isSharedCheck_3999_ == 0)
{
v___x_3993_ = v_x_3989_;
v_isShared_3994_ = v_isSharedCheck_3999_;
goto v_resetjp_3992_;
}
else
{
lean_inc(v_a_3991_);
lean_dec(v_x_3989_);
v___x_3993_ = lean_box(0);
v_isShared_3994_ = v_isSharedCheck_3999_;
goto v_resetjp_3992_;
}
v_resetjp_3992_:
{
lean_object* v___x_3996_; 
if (v_isShared_3994_ == 0)
{
v___x_3996_ = v___x_3993_;
goto v_reusejp_3995_;
}
else
{
lean_object* v_reuseFailAlloc_3998_; 
v_reuseFailAlloc_3998_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3998_, 0, v_a_3991_);
v___x_3996_ = v_reuseFailAlloc_3998_;
goto v_reusejp_3995_;
}
v_reusejp_3995_:
{
lean_object* v___x_3997_; 
v___x_3997_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3997_, 0, v___x_3996_);
return v___x_3997_;
}
}
}
else
{
lean_object* v_a_4000_; lean_object* v___f_4001_; lean_object* v___x_4002_; uint8_t v___x_4003_; lean_object* v___x_4004_; lean_object* v___x_4005_; 
v_a_4000_ = lean_ctor_get(v_x_3989_, 0);
lean_inc(v_a_4000_);
lean_dec_ref_known(v_x_3989_, 1);
v___f_4001_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_concurrently___redArg___lam__1___boxed), 3, 1);
lean_closure_set(v___f_4001_, 0, v_a_4000_);
v___x_4002_ = lean_unsigned_to_nat(0u);
v___x_4003_ = 0;
v___x_4004_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4004_, 0, v_a_3988_);
v___x_4005_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4002_, v___x_4003_, v___x_4004_, v___f_4001_);
return v___x_4005_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_concurrently___redArg___lam__0___boxed(lean_object* v_a_4006_, lean_object* v_x_4007_, lean_object* v___y_4008_){
_start:
{
lean_object* v_res_4009_; 
v_res_4009_ = l_Std_Async_EAsync_concurrently___redArg___lam__0(v_a_4006_, v_x_4007_);
return v_res_4009_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_concurrently___redArg___lam__2(lean_object* v_a_4010_, lean_object* v_x_4011_){
_start:
{
if (lean_obj_tag(v_x_4011_) == 0)
{
lean_object* v_a_4013_; lean_object* v___x_4015_; uint8_t v_isShared_4016_; uint8_t v_isSharedCheck_4021_; 
lean_dec_ref(v_a_4010_);
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
lean_object* v_a_4022_; lean_object* v___f_4023_; lean_object* v___x_4024_; uint8_t v___x_4025_; lean_object* v___x_4026_; lean_object* v___x_4027_; 
v_a_4022_ = lean_ctor_get(v_x_4011_, 0);
lean_inc(v_a_4022_);
lean_dec_ref_known(v_x_4011_, 1);
v___f_4023_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_concurrently___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_4023_, 0, v_a_4022_);
v___x_4024_ = lean_unsigned_to_nat(0u);
v___x_4025_ = 0;
v___x_4026_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4026_, 0, v_a_4010_);
v___x_4027_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4024_, v___x_4025_, v___x_4026_, v___f_4023_);
return v___x_4027_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_concurrently___redArg___lam__2___boxed(lean_object* v_a_4028_, lean_object* v_x_4029_, lean_object* v___y_4030_){
_start:
{
lean_object* v_res_4031_; 
v_res_4031_ = l_Std_Async_EAsync_concurrently___redArg___lam__2(v_a_4028_, v_x_4029_);
return v_res_4031_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_concurrently___redArg___lam__3(lean_object* v_y_4032_, lean_object* v_prio_4033_, lean_object* v___f_4034_, lean_object* v_x_4035_){
_start:
{
if (lean_obj_tag(v_x_4035_) == 0)
{
lean_object* v_a_4037_; lean_object* v___x_4039_; uint8_t v_isShared_4040_; uint8_t v_isSharedCheck_4045_; 
lean_dec_ref(v___f_4034_);
lean_dec(v_prio_4033_);
lean_dec_ref(v_y_4032_);
v_a_4037_ = lean_ctor_get(v_x_4035_, 0);
v_isSharedCheck_4045_ = !lean_is_exclusive(v_x_4035_);
if (v_isSharedCheck_4045_ == 0)
{
v___x_4039_ = v_x_4035_;
v_isShared_4040_ = v_isSharedCheck_4045_;
goto v_resetjp_4038_;
}
else
{
lean_inc(v_a_4037_);
lean_dec(v_x_4035_);
v___x_4039_ = lean_box(0);
v_isShared_4040_ = v_isSharedCheck_4045_;
goto v_resetjp_4038_;
}
v_resetjp_4038_:
{
lean_object* v___x_4042_; 
if (v_isShared_4040_ == 0)
{
v___x_4042_ = v___x_4039_;
goto v_reusejp_4041_;
}
else
{
lean_object* v_reuseFailAlloc_4044_; 
v_reuseFailAlloc_4044_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4044_, 0, v_a_4037_);
v___x_4042_ = v_reuseFailAlloc_4044_;
goto v_reusejp_4041_;
}
v_reusejp_4041_:
{
lean_object* v___x_4043_; 
v___x_4043_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4043_, 0, v___x_4042_);
return v___x_4043_;
}
}
}
else
{
lean_object* v_a_4046_; lean_object* v___x_4048_; uint8_t v_isShared_4049_; uint8_t v_isSharedCheck_4063_; 
v_a_4046_ = lean_ctor_get(v_x_4035_, 0);
v_isSharedCheck_4063_ = !lean_is_exclusive(v_x_4035_);
if (v_isSharedCheck_4063_ == 0)
{
v___x_4048_ = v_x_4035_;
v_isShared_4049_ = v_isSharedCheck_4063_;
goto v_resetjp_4047_;
}
else
{
lean_inc(v_a_4046_);
lean_dec(v_x_4035_);
v___x_4048_ = lean_box(0);
v_isShared_4049_ = v_isSharedCheck_4063_;
goto v_resetjp_4047_;
}
v_resetjp_4047_:
{
lean_object* v___f_4050_; lean_object* v___x_4051_; uint8_t v___x_4052_; lean_object* v___x_4053_; lean_object* v___x_4054_; lean_object* v___x_4055_; uint8_t v___x_4056_; lean_object* v___x_4057_; lean_object* v___x_4059_; 
v___f_4050_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_concurrently___redArg___lam__2___boxed), 3, 1);
lean_closure_set(v___f_4050_, 0, v_a_4046_);
v___x_4051_ = lean_unsigned_to_nat(0u);
v___x_4052_ = 0;
v___x_4053_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_toBaseAsync___boxed), 4, 3);
lean_closure_set(v___x_4053_, 0, lean_box(0));
lean_closure_set(v___x_4053_, 1, lean_box(0));
lean_closure_set(v___x_4053_, 2, v_y_4032_);
v___x_4054_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_toRawBaseIO___boxed), 3, 2);
lean_closure_set(v___x_4054_, 0, lean_box(0));
lean_closure_set(v___x_4054_, 1, v___x_4053_);
v___x_4055_ = lean_io_as_task(v___x_4054_, v_prio_4033_);
v___x_4056_ = 1;
v___x_4057_ = lean_task_bind(v___x_4055_, v___f_4034_, v___x_4051_, v___x_4056_);
if (v_isShared_4049_ == 0)
{
lean_ctor_set(v___x_4048_, 0, v___x_4057_);
v___x_4059_ = v___x_4048_;
goto v_reusejp_4058_;
}
else
{
lean_object* v_reuseFailAlloc_4062_; 
v_reuseFailAlloc_4062_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4062_, 0, v___x_4057_);
v___x_4059_ = v_reuseFailAlloc_4062_;
goto v_reusejp_4058_;
}
v_reusejp_4058_:
{
lean_object* v___x_4060_; lean_object* v___x_4061_; 
v___x_4060_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4060_, 0, v___x_4059_);
v___x_4061_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4051_, v___x_4052_, v___x_4060_, v___f_4050_);
return v___x_4061_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_concurrently___redArg___lam__3___boxed(lean_object* v_y_4064_, lean_object* v_prio_4065_, lean_object* v___f_4066_, lean_object* v_x_4067_, lean_object* v___y_4068_){
_start:
{
lean_object* v_res_4069_; 
v_res_4069_ = l_Std_Async_EAsync_concurrently___redArg___lam__3(v_y_4064_, v_prio_4065_, v___f_4066_, v_x_4067_);
return v_res_4069_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_concurrently___redArg(lean_object* v_x_4070_, lean_object* v_y_4071_, lean_object* v_prio_4072_){
_start:
{
lean_object* v___f_4074_; lean_object* v___f_4075_; lean_object* v___x_4076_; uint8_t v___x_4077_; lean_object* v___x_4078_; lean_object* v___x_4079_; lean_object* v___x_4080_; uint8_t v___x_4081_; lean_object* v___x_4082_; lean_object* v___x_4083_; lean_object* v___x_4084_; lean_object* v___x_4085_; 
v___f_4074_ = ((lean_object*)(l_Std_Async_EAsync_asTask___redArg___closed__0));
lean_inc(v_prio_4072_);
v___f_4075_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_concurrently___redArg___lam__3___boxed), 5, 3);
lean_closure_set(v___f_4075_, 0, v_y_4071_);
lean_closure_set(v___f_4075_, 1, v_prio_4072_);
lean_closure_set(v___f_4075_, 2, v___f_4074_);
v___x_4076_ = lean_unsigned_to_nat(0u);
v___x_4077_ = 0;
v___x_4078_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_toBaseAsync___boxed), 4, 3);
lean_closure_set(v___x_4078_, 0, lean_box(0));
lean_closure_set(v___x_4078_, 1, lean_box(0));
lean_closure_set(v___x_4078_, 2, v_x_4070_);
v___x_4079_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_toRawBaseIO___boxed), 3, 2);
lean_closure_set(v___x_4079_, 0, lean_box(0));
lean_closure_set(v___x_4079_, 1, v___x_4078_);
v___x_4080_ = lean_io_as_task(v___x_4079_, v_prio_4072_);
v___x_4081_ = 1;
v___x_4082_ = lean_task_bind(v___x_4080_, v___f_4074_, v___x_4076_, v___x_4081_);
v___x_4083_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4083_, 0, v___x_4082_);
v___x_4084_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4084_, 0, v___x_4083_);
v___x_4085_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4076_, v___x_4077_, v___x_4084_, v___f_4075_);
return v___x_4085_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_concurrently___redArg___boxed(lean_object* v_x_4086_, lean_object* v_y_4087_, lean_object* v_prio_4088_, lean_object* v___y_4089_){
_start:
{
lean_object* v_res_4090_; 
v_res_4090_ = l_Std_Async_EAsync_concurrently___redArg(v_x_4086_, v_y_4087_, v_prio_4088_);
return v_res_4090_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_concurrently(lean_object* v_00_u03b5_4091_, lean_object* v_00_u03b1_4092_, lean_object* v_00_u03b2_4093_, lean_object* v_x_4094_, lean_object* v_y_4095_, lean_object* v_prio_4096_){
_start:
{
lean_object* v___f_4098_; lean_object* v___f_4099_; lean_object* v___x_4100_; uint8_t v___x_4101_; lean_object* v___x_4102_; lean_object* v___x_4103_; lean_object* v___x_4104_; uint8_t v___x_4105_; lean_object* v___x_4106_; lean_object* v___x_4107_; lean_object* v___x_4108_; lean_object* v___x_4109_; 
v___f_4098_ = ((lean_object*)(l_Std_Async_EAsync_asTask___redArg___closed__0));
lean_inc(v_prio_4096_);
v___f_4099_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_concurrently___redArg___lam__3___boxed), 5, 3);
lean_closure_set(v___f_4099_, 0, v_y_4095_);
lean_closure_set(v___f_4099_, 1, v_prio_4096_);
lean_closure_set(v___f_4099_, 2, v___f_4098_);
v___x_4100_ = lean_unsigned_to_nat(0u);
v___x_4101_ = 0;
v___x_4102_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_toBaseAsync___boxed), 4, 3);
lean_closure_set(v___x_4102_, 0, lean_box(0));
lean_closure_set(v___x_4102_, 1, lean_box(0));
lean_closure_set(v___x_4102_, 2, v_x_4094_);
v___x_4103_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_toRawBaseIO___boxed), 3, 2);
lean_closure_set(v___x_4103_, 0, lean_box(0));
lean_closure_set(v___x_4103_, 1, v___x_4102_);
v___x_4104_ = lean_io_as_task(v___x_4103_, v_prio_4096_);
v___x_4105_ = 1;
v___x_4106_ = lean_task_bind(v___x_4104_, v___f_4098_, v___x_4100_, v___x_4105_);
v___x_4107_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4107_, 0, v___x_4106_);
v___x_4108_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4108_, 0, v___x_4107_);
v___x_4109_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4100_, v___x_4101_, v___x_4108_, v___f_4099_);
return v___x_4109_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_concurrently___boxed(lean_object* v_00_u03b5_4110_, lean_object* v_00_u03b1_4111_, lean_object* v_00_u03b2_4112_, lean_object* v_x_4113_, lean_object* v_y_4114_, lean_object* v_prio_4115_, lean_object* v___y_4116_){
_start:
{
lean_object* v_res_4117_; 
v_res_4117_ = l_Std_Async_EAsync_concurrently(v_00_u03b5_4110_, v_00_u03b1_4111_, v_00_u03b2_4112_, v_x_4113_, v_y_4114_, v_prio_4115_);
return v_res_4117_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_race___redArg___lam__1(lean_object* v_x_4118_){
_start:
{
if (lean_obj_tag(v_x_4118_) == 0)
{
lean_object* v_a_4120_; lean_object* v___x_4122_; uint8_t v_isShared_4123_; uint8_t v_isSharedCheck_4128_; 
v_a_4120_ = lean_ctor_get(v_x_4118_, 0);
v_isSharedCheck_4128_ = !lean_is_exclusive(v_x_4118_);
if (v_isSharedCheck_4128_ == 0)
{
v___x_4122_ = v_x_4118_;
v_isShared_4123_ = v_isSharedCheck_4128_;
goto v_resetjp_4121_;
}
else
{
lean_inc(v_a_4120_);
lean_dec(v_x_4118_);
v___x_4122_ = lean_box(0);
v_isShared_4123_ = v_isSharedCheck_4128_;
goto v_resetjp_4121_;
}
v_resetjp_4121_:
{
lean_object* v___x_4125_; 
if (v_isShared_4123_ == 0)
{
v___x_4125_ = v___x_4122_;
goto v_reusejp_4124_;
}
else
{
lean_object* v_reuseFailAlloc_4127_; 
v_reuseFailAlloc_4127_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4127_, 0, v_a_4120_);
v___x_4125_ = v_reuseFailAlloc_4127_;
goto v_reusejp_4124_;
}
v_reusejp_4124_:
{
lean_object* v___x_4126_; 
v___x_4126_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4126_, 0, v___x_4125_);
return v___x_4126_;
}
}
}
else
{
lean_object* v_a_4129_; lean_object* v___x_4130_; 
v_a_4129_ = lean_ctor_get(v_x_4118_, 0);
lean_inc(v_a_4129_);
lean_dec_ref_known(v_x_4118_, 1);
v___x_4130_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4130_, 0, v_a_4129_);
return v___x_4130_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_race___redArg___lam__1___boxed(lean_object* v_x_4131_, lean_object* v___y_4132_){
_start:
{
lean_object* v_res_4133_; 
v_res_4133_ = l_Std_Async_EAsync_race___redArg___lam__1(v_x_4131_);
return v_res_4133_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_race___redArg___lam__0(lean_object* v_a_4134_){
_start:
{
lean_object* v___x_4135_; 
v___x_4135_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4135_, 0, v_a_4134_);
return v___x_4135_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_race___redArg___lam__3(lean_object* v_a_4136_, lean_object* v_value_4137_){
_start:
{
lean_object* v___x_4139_; 
v___x_4139_ = lean_io_promise_resolve(v_value_4137_, v_a_4136_);
return v___x_4139_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_race___redArg___lam__3___boxed(lean_object* v_a_4140_, lean_object* v_value_4141_, lean_object* v___y_4142_){
_start:
{
lean_object* v_res_4143_; 
v_res_4143_ = l_Std_Async_EAsync_race___redArg___lam__3(v_a_4140_, v_value_4141_);
lean_dec(v_a_4140_);
return v_res_4143_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_race___redArg___lam__2(lean_object* v_a_4144_, lean_object* v___f_4145_, lean_object* v___f_4146_, lean_object* v_x_4147_){
_start:
{
if (lean_obj_tag(v_x_4147_) == 0)
{
lean_object* v_a_4149_; lean_object* v___x_4151_; uint8_t v_isShared_4152_; uint8_t v_isSharedCheck_4157_; 
lean_dec_ref(v___f_4146_);
lean_dec_ref(v___f_4145_);
v_a_4149_ = lean_ctor_get(v_x_4147_, 0);
v_isSharedCheck_4157_ = !lean_is_exclusive(v_x_4147_);
if (v_isSharedCheck_4157_ == 0)
{
v___x_4151_ = v_x_4147_;
v_isShared_4152_ = v_isSharedCheck_4157_;
goto v_resetjp_4150_;
}
else
{
lean_inc(v_a_4149_);
lean_dec(v_x_4147_);
v___x_4151_ = lean_box(0);
v_isShared_4152_ = v_isSharedCheck_4157_;
goto v_resetjp_4150_;
}
v_resetjp_4150_:
{
lean_object* v___x_4154_; 
if (v_isShared_4152_ == 0)
{
v___x_4154_ = v___x_4151_;
goto v_reusejp_4153_;
}
else
{
lean_object* v_reuseFailAlloc_4156_; 
v_reuseFailAlloc_4156_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4156_, 0, v_a_4149_);
v___x_4154_ = v_reuseFailAlloc_4156_;
goto v_reusejp_4153_;
}
v_reusejp_4153_:
{
lean_object* v___x_4155_; 
v___x_4155_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4155_, 0, v___x_4154_);
return v___x_4155_;
}
}
}
else
{
lean_object* v___x_4158_; lean_object* v___x_4159_; uint8_t v___x_4160_; lean_object* v___x_4161_; lean_object* v___x_4162_; lean_object* v___x_4163_; 
lean_dec_ref_known(v_x_4147_, 1);
v___x_4158_ = l_IO_Promise_result_x21___redArg(v_a_4144_);
v___x_4159_ = lean_unsigned_to_nat(0u);
v___x_4160_ = 0;
v___x_4161_ = lean_task_map(v___f_4145_, v___x_4158_, v___x_4159_, v___x_4160_);
v___x_4162_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4162_, 0, v___x_4161_);
v___x_4163_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4159_, v___x_4160_, v___x_4162_, v___f_4146_);
return v___x_4163_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_race___redArg___lam__2___boxed(lean_object* v_a_4164_, lean_object* v___f_4165_, lean_object* v___f_4166_, lean_object* v_x_4167_, lean_object* v___y_4168_){
_start:
{
lean_object* v_res_4169_; 
v_res_4169_ = l_Std_Async_EAsync_race___redArg___lam__2(v_a_4164_, v___f_4165_, v___f_4166_, v_x_4167_);
lean_dec(v_a_4164_);
return v_res_4169_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_race___redArg___lam__4(lean_object* v_a_4170_, lean_object* v___x_4171_, lean_object* v___x_4172_, uint8_t v___x_4173_, lean_object* v___f_4174_, lean_object* v_x_4175_){
_start:
{
if (lean_obj_tag(v_x_4175_) == 0)
{
lean_object* v_a_4177_; lean_object* v___x_4179_; uint8_t v_isShared_4180_; uint8_t v_isSharedCheck_4185_; 
lean_dec_ref(v___f_4174_);
lean_dec(v___x_4172_);
lean_dec_ref(v___x_4171_);
lean_dec_ref(v_a_4170_);
v_a_4177_ = lean_ctor_get(v_x_4175_, 0);
v_isSharedCheck_4185_ = !lean_is_exclusive(v_x_4175_);
if (v_isSharedCheck_4185_ == 0)
{
v___x_4179_ = v_x_4175_;
v_isShared_4180_ = v_isSharedCheck_4185_;
goto v_resetjp_4178_;
}
else
{
lean_inc(v_a_4177_);
lean_dec(v_x_4175_);
v___x_4179_ = lean_box(0);
v_isShared_4180_ = v_isSharedCheck_4185_;
goto v_resetjp_4178_;
}
v_resetjp_4178_:
{
lean_object* v___x_4182_; 
if (v_isShared_4180_ == 0)
{
v___x_4182_ = v___x_4179_;
goto v_reusejp_4181_;
}
else
{
lean_object* v_reuseFailAlloc_4184_; 
v_reuseFailAlloc_4184_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4184_, 0, v_a_4177_);
v___x_4182_ = v_reuseFailAlloc_4184_;
goto v_reusejp_4181_;
}
v_reusejp_4181_:
{
lean_object* v___x_4183_; 
v___x_4183_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4183_, 0, v___x_4182_);
return v___x_4183_;
}
}
}
else
{
lean_object* v___x_4187_; uint8_t v_isShared_4188_; uint8_t v_isSharedCheck_4195_; 
v_isSharedCheck_4195_ = !lean_is_exclusive(v_x_4175_);
if (v_isSharedCheck_4195_ == 0)
{
lean_object* v_unused_4196_; 
v_unused_4196_ = lean_ctor_get(v_x_4175_, 0);
lean_dec(v_unused_4196_);
v___x_4187_ = v_x_4175_;
v_isShared_4188_ = v_isSharedCheck_4195_;
goto v_resetjp_4186_;
}
else
{
lean_dec(v_x_4175_);
v___x_4187_ = lean_box(0);
v_isShared_4188_ = v_isSharedCheck_4195_;
goto v_resetjp_4186_;
}
v_resetjp_4186_:
{
lean_object* v___x_4189_; lean_object* v___x_4191_; 
lean_inc(v___x_4172_);
v___x_4189_ = l_BaseIO_chainTask___redArg(v_a_4170_, v___x_4171_, v___x_4172_, v___x_4173_);
if (v_isShared_4188_ == 0)
{
lean_ctor_set(v___x_4187_, 0, v___x_4189_);
v___x_4191_ = v___x_4187_;
goto v_reusejp_4190_;
}
else
{
lean_object* v_reuseFailAlloc_4194_; 
v_reuseFailAlloc_4194_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4194_, 0, v___x_4189_);
v___x_4191_ = v_reuseFailAlloc_4194_;
goto v_reusejp_4190_;
}
v_reusejp_4190_:
{
lean_object* v___x_4192_; lean_object* v___x_4193_; 
v___x_4192_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4192_, 0, v___x_4191_);
v___x_4193_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4172_, v___x_4173_, v___x_4192_, v___f_4174_);
return v___x_4193_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_race___redArg___lam__4___boxed(lean_object* v_a_4197_, lean_object* v___x_4198_, lean_object* v___x_4199_, lean_object* v___x_4200_, lean_object* v___f_4201_, lean_object* v_x_4202_, lean_object* v___y_4203_){
_start:
{
uint8_t v___x_1451__boxed_4204_; lean_object* v_res_4205_; 
v___x_1451__boxed_4204_ = lean_unbox(v___x_4200_);
v_res_4205_ = l_Std_Async_EAsync_race___redArg___lam__4(v_a_4197_, v___x_4198_, v___x_4199_, v___x_1451__boxed_4204_, v___f_4201_, v_x_4202_);
return v_res_4205_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_race___redArg___lam__5(lean_object* v___f_4206_, lean_object* v___f_4207_, lean_object* v___f_4208_, lean_object* v_a_4209_, lean_object* v_x_4210_){
_start:
{
if (lean_obj_tag(v_x_4210_) == 0)
{
lean_object* v_a_4212_; lean_object* v___x_4214_; uint8_t v_isShared_4215_; uint8_t v_isSharedCheck_4220_; 
lean_dec_ref(v_a_4209_);
lean_dec_ref(v___f_4208_);
lean_dec_ref(v___f_4207_);
lean_dec(v___f_4206_);
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
lean_object* v_a_4221_; lean_object* v___x_4223_; uint8_t v_isShared_4224_; uint8_t v_isSharedCheck_4237_; 
v_a_4221_ = lean_ctor_get(v_x_4210_, 0);
v_isSharedCheck_4237_ = !lean_is_exclusive(v_x_4210_);
if (v_isSharedCheck_4237_ == 0)
{
v___x_4223_ = v_x_4210_;
v_isShared_4224_ = v_isSharedCheck_4237_;
goto v_resetjp_4222_;
}
else
{
lean_inc(v_a_4221_);
lean_dec(v_x_4210_);
v___x_4223_ = lean_box(0);
v_isShared_4224_ = v_isSharedCheck_4237_;
goto v_resetjp_4222_;
}
v_resetjp_4222_:
{
lean_object* v___x_4225_; lean_object* v___x_4226_; lean_object* v___x_4227_; uint8_t v___x_4228_; lean_object* v___x_4229_; lean_object* v___f_4230_; lean_object* v___x_4231_; lean_object* v___x_4233_; 
v___x_4225_ = lean_alloc_closure((void*)(l_liftM), 5, 4);
lean_closure_set(v___x_4225_, 0, lean_box(0));
lean_closure_set(v___x_4225_, 1, lean_box(0));
lean_closure_set(v___x_4225_, 2, v___f_4206_);
lean_closure_set(v___x_4225_, 3, lean_box(0));
v___x_4226_ = lean_alloc_closure((void*)(l_Function_comp), 6, 5);
lean_closure_set(v___x_4226_, 0, lean_box(0));
lean_closure_set(v___x_4226_, 1, lean_box(0));
lean_closure_set(v___x_4226_, 2, lean_box(0));
lean_closure_set(v___x_4226_, 3, v___x_4225_);
lean_closure_set(v___x_4226_, 4, v___f_4207_);
v___x_4227_ = lean_unsigned_to_nat(0u);
v___x_4228_ = 0;
v___x_4229_ = lean_box(v___x_4228_);
lean_inc_ref(v___x_4226_);
v___f_4230_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_race___redArg___lam__4___boxed), 7, 5);
lean_closure_set(v___f_4230_, 0, v_a_4221_);
lean_closure_set(v___f_4230_, 1, v___x_4226_);
lean_closure_set(v___f_4230_, 2, v___x_4227_);
lean_closure_set(v___f_4230_, 3, v___x_4229_);
lean_closure_set(v___f_4230_, 4, v___f_4208_);
v___x_4231_ = l_BaseIO_chainTask___redArg(v_a_4209_, v___x_4226_, v___x_4227_, v___x_4228_);
if (v_isShared_4224_ == 0)
{
lean_ctor_set(v___x_4223_, 0, v___x_4231_);
v___x_4233_ = v___x_4223_;
goto v_reusejp_4232_;
}
else
{
lean_object* v_reuseFailAlloc_4236_; 
v_reuseFailAlloc_4236_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4236_, 0, v___x_4231_);
v___x_4233_ = v_reuseFailAlloc_4236_;
goto v_reusejp_4232_;
}
v_reusejp_4232_:
{
lean_object* v___x_4234_; lean_object* v___x_4235_; 
v___x_4234_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4234_, 0, v___x_4233_);
v___x_4235_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4227_, v___x_4228_, v___x_4234_, v___f_4230_);
return v___x_4235_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_race___redArg___lam__5___boxed(lean_object* v___f_4238_, lean_object* v___f_4239_, lean_object* v___f_4240_, lean_object* v_a_4241_, lean_object* v_x_4242_, lean_object* v___y_4243_){
_start:
{
lean_object* v_res_4244_; 
v_res_4244_ = l_Std_Async_EAsync_race___redArg___lam__5(v___f_4238_, v___f_4239_, v___f_4240_, v_a_4241_, v_x_4242_);
return v_res_4244_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_race___redArg___lam__6(lean_object* v___f_4245_, lean_object* v___f_4246_, lean_object* v___f_4247_, lean_object* v_y_4248_, lean_object* v_prio_4249_, lean_object* v___f_4250_, lean_object* v_x_4251_){
_start:
{
if (lean_obj_tag(v_x_4251_) == 0)
{
lean_object* v_a_4253_; lean_object* v___x_4255_; uint8_t v_isShared_4256_; uint8_t v_isSharedCheck_4261_; 
lean_dec_ref(v___f_4250_);
lean_dec(v_prio_4249_);
lean_dec_ref(v_y_4248_);
lean_dec_ref(v___f_4247_);
lean_dec_ref(v___f_4246_);
lean_dec(v___f_4245_);
v_a_4253_ = lean_ctor_get(v_x_4251_, 0);
v_isSharedCheck_4261_ = !lean_is_exclusive(v_x_4251_);
if (v_isSharedCheck_4261_ == 0)
{
v___x_4255_ = v_x_4251_;
v_isShared_4256_ = v_isSharedCheck_4261_;
goto v_resetjp_4254_;
}
else
{
lean_inc(v_a_4253_);
lean_dec(v_x_4251_);
v___x_4255_ = lean_box(0);
v_isShared_4256_ = v_isSharedCheck_4261_;
goto v_resetjp_4254_;
}
v_resetjp_4254_:
{
lean_object* v___x_4258_; 
if (v_isShared_4256_ == 0)
{
v___x_4258_ = v___x_4255_;
goto v_reusejp_4257_;
}
else
{
lean_object* v_reuseFailAlloc_4260_; 
v_reuseFailAlloc_4260_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4260_, 0, v_a_4253_);
v___x_4258_ = v_reuseFailAlloc_4260_;
goto v_reusejp_4257_;
}
v_reusejp_4257_:
{
lean_object* v___x_4259_; 
v___x_4259_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4259_, 0, v___x_4258_);
return v___x_4259_;
}
}
}
else
{
lean_object* v_a_4262_; lean_object* v___x_4264_; uint8_t v_isShared_4265_; uint8_t v_isSharedCheck_4279_; 
v_a_4262_ = lean_ctor_get(v_x_4251_, 0);
v_isSharedCheck_4279_ = !lean_is_exclusive(v_x_4251_);
if (v_isSharedCheck_4279_ == 0)
{
v___x_4264_ = v_x_4251_;
v_isShared_4265_ = v_isSharedCheck_4279_;
goto v_resetjp_4263_;
}
else
{
lean_inc(v_a_4262_);
lean_dec(v_x_4251_);
v___x_4264_ = lean_box(0);
v_isShared_4265_ = v_isSharedCheck_4279_;
goto v_resetjp_4263_;
}
v_resetjp_4263_:
{
lean_object* v___f_4266_; lean_object* v___x_4267_; uint8_t v___x_4268_; lean_object* v___x_4269_; lean_object* v___x_4270_; lean_object* v___x_4271_; uint8_t v___x_4272_; lean_object* v___x_4273_; lean_object* v___x_4275_; 
v___f_4266_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_race___redArg___lam__5___boxed), 6, 4);
lean_closure_set(v___f_4266_, 0, v___f_4245_);
lean_closure_set(v___f_4266_, 1, v___f_4246_);
lean_closure_set(v___f_4266_, 2, v___f_4247_);
lean_closure_set(v___f_4266_, 3, v_a_4262_);
v___x_4267_ = lean_unsigned_to_nat(0u);
v___x_4268_ = 0;
v___x_4269_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_toBaseAsync___boxed), 4, 3);
lean_closure_set(v___x_4269_, 0, lean_box(0));
lean_closure_set(v___x_4269_, 1, lean_box(0));
lean_closure_set(v___x_4269_, 2, v_y_4248_);
v___x_4270_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_toRawBaseIO___boxed), 3, 2);
lean_closure_set(v___x_4270_, 0, lean_box(0));
lean_closure_set(v___x_4270_, 1, v___x_4269_);
v___x_4271_ = lean_io_as_task(v___x_4270_, v_prio_4249_);
v___x_4272_ = 1;
v___x_4273_ = lean_task_bind(v___x_4271_, v___f_4250_, v___x_4267_, v___x_4272_);
if (v_isShared_4265_ == 0)
{
lean_ctor_set(v___x_4264_, 0, v___x_4273_);
v___x_4275_ = v___x_4264_;
goto v_reusejp_4274_;
}
else
{
lean_object* v_reuseFailAlloc_4278_; 
v_reuseFailAlloc_4278_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4278_, 0, v___x_4273_);
v___x_4275_ = v_reuseFailAlloc_4278_;
goto v_reusejp_4274_;
}
v_reusejp_4274_:
{
lean_object* v___x_4276_; lean_object* v___x_4277_; 
v___x_4276_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4276_, 0, v___x_4275_);
v___x_4277_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4267_, v___x_4268_, v___x_4276_, v___f_4266_);
return v___x_4277_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_race___redArg___lam__6___boxed(lean_object* v___f_4280_, lean_object* v___f_4281_, lean_object* v___f_4282_, lean_object* v_y_4283_, lean_object* v_prio_4284_, lean_object* v___f_4285_, lean_object* v_x_4286_, lean_object* v___y_4287_){
_start:
{
lean_object* v_res_4288_; 
v_res_4288_ = l_Std_Async_EAsync_race___redArg___lam__6(v___f_4280_, v___f_4281_, v___f_4282_, v_y_4283_, v_prio_4284_, v___f_4285_, v_x_4286_);
return v_res_4288_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_race___redArg___lam__7(lean_object* v___f_4289_, lean_object* v___f_4290_, lean_object* v___f_4291_, lean_object* v_y_4292_, lean_object* v_prio_4293_, lean_object* v___f_4294_, lean_object* v_x_4295_, lean_object* v___f_4296_, lean_object* v_x_4297_){
_start:
{
if (lean_obj_tag(v_x_4297_) == 0)
{
lean_object* v_a_4299_; lean_object* v___x_4301_; uint8_t v_isShared_4302_; uint8_t v_isSharedCheck_4307_; 
lean_dec_ref(v___f_4296_);
lean_dec_ref(v_x_4295_);
lean_dec_ref(v___f_4294_);
lean_dec(v_prio_4293_);
lean_dec_ref(v_y_4292_);
lean_dec(v___f_4291_);
lean_dec_ref(v___f_4290_);
lean_dec_ref(v___f_4289_);
v_a_4299_ = lean_ctor_get(v_x_4297_, 0);
v_isSharedCheck_4307_ = !lean_is_exclusive(v_x_4297_);
if (v_isSharedCheck_4307_ == 0)
{
v___x_4301_ = v_x_4297_;
v_isShared_4302_ = v_isSharedCheck_4307_;
goto v_resetjp_4300_;
}
else
{
lean_inc(v_a_4299_);
lean_dec(v_x_4297_);
v___x_4301_ = lean_box(0);
v_isShared_4302_ = v_isSharedCheck_4307_;
goto v_resetjp_4300_;
}
v_resetjp_4300_:
{
lean_object* v___x_4304_; 
if (v_isShared_4302_ == 0)
{
v___x_4304_ = v___x_4301_;
goto v_reusejp_4303_;
}
else
{
lean_object* v_reuseFailAlloc_4306_; 
v_reuseFailAlloc_4306_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4306_, 0, v_a_4299_);
v___x_4304_ = v_reuseFailAlloc_4306_;
goto v_reusejp_4303_;
}
v_reusejp_4303_:
{
lean_object* v___x_4305_; 
v___x_4305_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4305_, 0, v___x_4304_);
return v___x_4305_;
}
}
}
else
{
lean_object* v_a_4308_; lean_object* v___x_4310_; uint8_t v_isShared_4311_; uint8_t v_isSharedCheck_4327_; 
v_a_4308_ = lean_ctor_get(v_x_4297_, 0);
v_isSharedCheck_4327_ = !lean_is_exclusive(v_x_4297_);
if (v_isSharedCheck_4327_ == 0)
{
v___x_4310_ = v_x_4297_;
v_isShared_4311_ = v_isSharedCheck_4327_;
goto v_resetjp_4309_;
}
else
{
lean_inc(v_a_4308_);
lean_dec(v_x_4297_);
v___x_4310_ = lean_box(0);
v_isShared_4311_ = v_isSharedCheck_4327_;
goto v_resetjp_4309_;
}
v_resetjp_4309_:
{
lean_object* v___f_4312_; lean_object* v___f_4313_; lean_object* v___f_4314_; lean_object* v___x_4315_; uint8_t v___x_4316_; lean_object* v___x_4317_; lean_object* v___x_4318_; lean_object* v___x_4319_; uint8_t v___x_4320_; lean_object* v___x_4321_; lean_object* v___x_4323_; 
lean_inc(v_a_4308_);
v___f_4312_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_race___redArg___lam__3___boxed), 3, 1);
lean_closure_set(v___f_4312_, 0, v_a_4308_);
v___f_4313_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_race___redArg___lam__2___boxed), 5, 3);
lean_closure_set(v___f_4313_, 0, v_a_4308_);
lean_closure_set(v___f_4313_, 1, v___f_4289_);
lean_closure_set(v___f_4313_, 2, v___f_4290_);
lean_inc(v_prio_4293_);
v___f_4314_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_race___redArg___lam__6___boxed), 8, 6);
lean_closure_set(v___f_4314_, 0, v___f_4291_);
lean_closure_set(v___f_4314_, 1, v___f_4312_);
lean_closure_set(v___f_4314_, 2, v___f_4313_);
lean_closure_set(v___f_4314_, 3, v_y_4292_);
lean_closure_set(v___f_4314_, 4, v_prio_4293_);
lean_closure_set(v___f_4314_, 5, v___f_4294_);
v___x_4315_ = lean_unsigned_to_nat(0u);
v___x_4316_ = 0;
v___x_4317_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_toBaseAsync___boxed), 4, 3);
lean_closure_set(v___x_4317_, 0, lean_box(0));
lean_closure_set(v___x_4317_, 1, lean_box(0));
lean_closure_set(v___x_4317_, 2, v_x_4295_);
v___x_4318_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_toRawBaseIO___boxed), 3, 2);
lean_closure_set(v___x_4318_, 0, lean_box(0));
lean_closure_set(v___x_4318_, 1, v___x_4317_);
v___x_4319_ = lean_io_as_task(v___x_4318_, v_prio_4293_);
v___x_4320_ = 1;
v___x_4321_ = lean_task_bind(v___x_4319_, v___f_4296_, v___x_4315_, v___x_4320_);
if (v_isShared_4311_ == 0)
{
lean_ctor_set(v___x_4310_, 0, v___x_4321_);
v___x_4323_ = v___x_4310_;
goto v_reusejp_4322_;
}
else
{
lean_object* v_reuseFailAlloc_4326_; 
v_reuseFailAlloc_4326_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4326_, 0, v___x_4321_);
v___x_4323_ = v_reuseFailAlloc_4326_;
goto v_reusejp_4322_;
}
v_reusejp_4322_:
{
lean_object* v___x_4324_; lean_object* v___x_4325_; 
v___x_4324_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4324_, 0, v___x_4323_);
v___x_4325_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4315_, v___x_4316_, v___x_4324_, v___f_4314_);
return v___x_4325_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_race___redArg___lam__7___boxed(lean_object* v___f_4328_, lean_object* v___f_4329_, lean_object* v___f_4330_, lean_object* v_y_4331_, lean_object* v_prio_4332_, lean_object* v___f_4333_, lean_object* v_x_4334_, lean_object* v___f_4335_, lean_object* v_x_4336_, lean_object* v___y_4337_){
_start:
{
lean_object* v_res_4338_; 
v_res_4338_ = l_Std_Async_EAsync_race___redArg___lam__7(v___f_4328_, v___f_4329_, v___f_4330_, v_y_4331_, v_prio_4332_, v___f_4333_, v_x_4334_, v___f_4335_, v_x_4336_);
return v_res_4338_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_race___redArg(lean_object* v_x_4341_, lean_object* v_y_4342_, lean_object* v_prio_4343_){
_start:
{
lean_object* v___f_4345_; lean_object* v___f_4346_; lean_object* v___f_4347_; lean_object* v___f_4348_; lean_object* v___f_4349_; lean_object* v___x_4350_; uint8_t v___x_4351_; lean_object* v___x_4352_; lean_object* v___x_4353_; lean_object* v___x_4354_; lean_object* v___x_4355_; 
v___f_4345_ = ((lean_object*)(l_Std_Async_EAsync_asTask___redArg___closed__0));
v___f_4346_ = ((lean_object*)(l_Std_Async_EAsync_race___redArg___closed__0));
v___f_4347_ = ((lean_object*)(l_Std_Async_EAsync_race___redArg___closed__1));
v___f_4348_ = ((lean_object*)(l_Std_Async_BaseAsync_race___redArg___closed__0));
v___f_4349_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_race___redArg___lam__7___boxed), 10, 8);
lean_closure_set(v___f_4349_, 0, v___f_4347_);
lean_closure_set(v___f_4349_, 1, v___f_4346_);
lean_closure_set(v___f_4349_, 2, v___f_4348_);
lean_closure_set(v___f_4349_, 3, v_y_4342_);
lean_closure_set(v___f_4349_, 4, v_prio_4343_);
lean_closure_set(v___f_4349_, 5, v___f_4345_);
lean_closure_set(v___f_4349_, 6, v_x_4341_);
lean_closure_set(v___f_4349_, 7, v___f_4345_);
v___x_4350_ = lean_unsigned_to_nat(0u);
v___x_4351_ = 0;
v___x_4352_ = lean_io_promise_new();
v___x_4353_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4353_, 0, v___x_4352_);
v___x_4354_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4354_, 0, v___x_4353_);
v___x_4355_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4350_, v___x_4351_, v___x_4354_, v___f_4349_);
return v___x_4355_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_race___redArg___boxed(lean_object* v_x_4356_, lean_object* v_y_4357_, lean_object* v_prio_4358_, lean_object* v___y_4359_){
_start:
{
lean_object* v_res_4360_; 
v_res_4360_ = l_Std_Async_EAsync_race___redArg(v_x_4356_, v_y_4357_, v_prio_4358_);
return v_res_4360_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_race(lean_object* v_00_u03b1_4361_, lean_object* v_00_u03b5_4362_, lean_object* v_inst_4363_, lean_object* v_x_4364_, lean_object* v_y_4365_, lean_object* v_prio_4366_){
_start:
{
lean_object* v___f_4368_; lean_object* v___f_4369_; lean_object* v___f_4370_; lean_object* v___f_4371_; lean_object* v___f_4372_; lean_object* v___x_4373_; uint8_t v___x_4374_; lean_object* v___x_4375_; lean_object* v___x_4376_; lean_object* v___x_4377_; lean_object* v___x_4378_; 
v___f_4368_ = ((lean_object*)(l_Std_Async_EAsync_asTask___redArg___closed__0));
v___f_4369_ = ((lean_object*)(l_Std_Async_EAsync_race___redArg___closed__0));
v___f_4370_ = ((lean_object*)(l_Std_Async_EAsync_race___redArg___closed__1));
v___f_4371_ = ((lean_object*)(l_Std_Async_BaseAsync_race___redArg___closed__0));
v___f_4372_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_race___redArg___lam__7___boxed), 10, 8);
lean_closure_set(v___f_4372_, 0, v___f_4370_);
lean_closure_set(v___f_4372_, 1, v___f_4369_);
lean_closure_set(v___f_4372_, 2, v___f_4371_);
lean_closure_set(v___f_4372_, 3, v_y_4365_);
lean_closure_set(v___f_4372_, 4, v_prio_4366_);
lean_closure_set(v___f_4372_, 5, v___f_4368_);
lean_closure_set(v___f_4372_, 6, v_x_4364_);
lean_closure_set(v___f_4372_, 7, v___f_4368_);
v___x_4373_ = lean_unsigned_to_nat(0u);
v___x_4374_ = 0;
v___x_4375_ = lean_io_promise_new();
v___x_4376_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4376_, 0, v___x_4375_);
v___x_4377_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4377_, 0, v___x_4376_);
v___x_4378_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4373_, v___x_4374_, v___x_4377_, v___f_4372_);
return v___x_4378_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_race___boxed(lean_object* v_00_u03b1_4379_, lean_object* v_00_u03b5_4380_, lean_object* v_inst_4381_, lean_object* v_x_4382_, lean_object* v_y_4383_, lean_object* v_prio_4384_, lean_object* v___y_4385_){
_start:
{
lean_object* v_res_4386_; 
v_res_4386_ = l_Std_Async_EAsync_race(v_00_u03b1_4379_, v_00_u03b5_4380_, v_inst_4381_, v_x_4382_, v_y_4383_, v_prio_4384_);
lean_dec(v_inst_4381_);
return v_res_4386_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_concurrentlyAll___redArg___lam__1(lean_object* v_prio_4387_, lean_object* v___f_4388_, lean_object* v_x_4389_){
_start:
{
lean_object* v___x_4391_; lean_object* v___x_4392_; lean_object* v___x_4393_; lean_object* v___x_4394_; uint8_t v___x_4395_; lean_object* v___x_4396_; lean_object* v___x_4397_; lean_object* v___x_4398_; 
v___x_4391_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_toBaseAsync___boxed), 4, 3);
lean_closure_set(v___x_4391_, 0, lean_box(0));
lean_closure_set(v___x_4391_, 1, lean_box(0));
lean_closure_set(v___x_4391_, 2, v_x_4389_);
v___x_4392_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_toRawBaseIO___boxed), 3, 2);
lean_closure_set(v___x_4392_, 0, lean_box(0));
lean_closure_set(v___x_4392_, 1, v___x_4391_);
v___x_4393_ = lean_io_as_task(v___x_4392_, v_prio_4387_);
v___x_4394_ = lean_unsigned_to_nat(0u);
v___x_4395_ = 1;
v___x_4396_ = lean_task_bind(v___x_4393_, v___f_4388_, v___x_4394_, v___x_4395_);
v___x_4397_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4397_, 0, v___x_4396_);
v___x_4398_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4398_, 0, v___x_4397_);
return v___x_4398_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_concurrentlyAll___redArg___lam__1___boxed(lean_object* v_prio_4399_, lean_object* v___f_4400_, lean_object* v_x_4401_, lean_object* v___y_4402_){
_start:
{
lean_object* v_res_4403_; 
v_res_4403_ = l_Std_Async_EAsync_concurrentlyAll___redArg___lam__1(v_prio_4399_, v___f_4400_, v_x_4401_);
return v_res_4403_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_concurrentlyAll___redArg___lam__0(lean_object* v___y_4404_){
_start:
{
lean_object* v___x_4406_; 
v___x_4406_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4406_, 0, v___y_4404_);
return v___x_4406_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_concurrentlyAll___redArg___lam__0___boxed(lean_object* v___y_4407_, lean_object* v___y_4408_){
_start:
{
lean_object* v_res_4409_; 
v_res_4409_ = l_Std_Async_EAsync_concurrentlyAll___redArg___lam__0(v___y_4407_);
return v_res_4409_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_concurrentlyAll___redArg___lam__2(lean_object* v___x_4410_, lean_object* v___f_4411_, lean_object* v_x_4412_){
_start:
{
if (lean_obj_tag(v_x_4412_) == 0)
{
lean_object* v_a_4414_; lean_object* v___x_4416_; uint8_t v_isShared_4417_; uint8_t v_isSharedCheck_4422_; 
lean_dec_ref(v___f_4411_);
lean_dec_ref(v___x_4410_);
v_a_4414_ = lean_ctor_get(v_x_4412_, 0);
v_isSharedCheck_4422_ = !lean_is_exclusive(v_x_4412_);
if (v_isSharedCheck_4422_ == 0)
{
v___x_4416_ = v_x_4412_;
v_isShared_4417_ = v_isSharedCheck_4422_;
goto v_resetjp_4415_;
}
else
{
lean_inc(v_a_4414_);
lean_dec(v_x_4412_);
v___x_4416_ = lean_box(0);
v_isShared_4417_ = v_isSharedCheck_4422_;
goto v_resetjp_4415_;
}
v_resetjp_4415_:
{
lean_object* v___x_4419_; 
if (v_isShared_4417_ == 0)
{
v___x_4419_ = v___x_4416_;
goto v_reusejp_4418_;
}
else
{
lean_object* v_reuseFailAlloc_4421_; 
v_reuseFailAlloc_4421_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4421_, 0, v_a_4414_);
v___x_4419_ = v_reuseFailAlloc_4421_;
goto v_reusejp_4418_;
}
v_reusejp_4418_:
{
lean_object* v___x_4420_; 
v___x_4420_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4420_, 0, v___x_4419_);
return v___x_4420_;
}
}
}
else
{
lean_object* v_a_4423_; size_t v_sz_4424_; size_t v___x_4425_; lean_object* v___x_298__overap_4426_; lean_object* v___x_4427_; 
v_a_4423_ = lean_ctor_get(v_x_4412_, 0);
lean_inc(v_a_4423_);
lean_dec_ref_known(v_x_4412_, 1);
v_sz_4424_ = lean_array_size(v_a_4423_);
v___x_4425_ = ((size_t)0ULL);
v___x_298__overap_4426_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_4410_, v___f_4411_, v_sz_4424_, v___x_4425_, v_a_4423_);
v___x_4427_ = lean_apply_1(v___x_298__overap_4426_, lean_box(0));
return v___x_4427_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_concurrentlyAll___redArg___lam__2___boxed(lean_object* v___x_4428_, lean_object* v___f_4429_, lean_object* v_x_4430_, lean_object* v___y_4431_){
_start:
{
lean_object* v_res_4432_; 
v_res_4432_ = l_Std_Async_EAsync_concurrentlyAll___redArg___lam__2(v___x_4428_, v___f_4429_, v_x_4430_);
return v_res_4432_;
}
}
static lean_object* _init_l_Std_Async_EAsync_concurrentlyAll___redArg___closed__1(void){
_start:
{
lean_object* v___f_4434_; lean_object* v___x_4435_; lean_object* v___f_4436_; 
v___f_4434_ = ((lean_object*)(l_Std_Async_EAsync_concurrentlyAll___redArg___closed__0));
v___x_4435_ = lean_obj_once(&l_Std_Async_EAsync_instMonad___closed__0, &l_Std_Async_EAsync_instMonad___closed__0_once, _init_l_Std_Async_EAsync_instMonad___closed__0);
v___f_4436_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_concurrentlyAll___redArg___lam__2___boxed), 4, 2);
lean_closure_set(v___f_4436_, 0, v___x_4435_);
lean_closure_set(v___f_4436_, 1, v___f_4434_);
return v___f_4436_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_concurrentlyAll___redArg(lean_object* v_xs_4437_, lean_object* v_prio_4438_){
_start:
{
lean_object* v___f_4440_; lean_object* v___f_4441_; lean_object* v___x_4442_; lean_object* v___f_4443_; lean_object* v___x_4444_; uint8_t v___x_4445_; size_t v_sz_4446_; size_t v___x_4447_; lean_object* v___x_221__overap_4448_; lean_object* v___x_4449_; lean_object* v___x_4450_; 
v___f_4440_ = ((lean_object*)(l_Std_Async_EAsync_asTask___redArg___closed__0));
v___f_4441_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_concurrentlyAll___redArg___lam__1___boxed), 4, 2);
lean_closure_set(v___f_4441_, 0, v_prio_4438_);
lean_closure_set(v___f_4441_, 1, v___f_4440_);
v___x_4442_ = lean_obj_once(&l_Std_Async_EAsync_instMonad___closed__0, &l_Std_Async_EAsync_instMonad___closed__0_once, _init_l_Std_Async_EAsync_instMonad___closed__0);
v___f_4443_ = lean_obj_once(&l_Std_Async_EAsync_concurrentlyAll___redArg___closed__1, &l_Std_Async_EAsync_concurrentlyAll___redArg___closed__1_once, _init_l_Std_Async_EAsync_concurrentlyAll___redArg___closed__1);
v___x_4444_ = lean_unsigned_to_nat(0u);
v___x_4445_ = 0;
v_sz_4446_ = lean_array_size(v_xs_4437_);
v___x_4447_ = ((size_t)0ULL);
v___x_221__overap_4448_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_4442_, v___f_4441_, v_sz_4446_, v___x_4447_, v_xs_4437_);
v___x_4449_ = lean_apply_1(v___x_221__overap_4448_, lean_box(0));
v___x_4450_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4444_, v___x_4445_, v___x_4449_, v___f_4443_);
return v___x_4450_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_concurrentlyAll___redArg___boxed(lean_object* v_xs_4451_, lean_object* v_prio_4452_, lean_object* v___y_4453_){
_start:
{
lean_object* v_res_4454_; 
v_res_4454_ = l_Std_Async_EAsync_concurrentlyAll___redArg(v_xs_4451_, v_prio_4452_);
return v_res_4454_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_concurrentlyAll(lean_object* v_00_u03b5_4455_, lean_object* v_00_u03b1_4456_, lean_object* v_xs_4457_, lean_object* v_prio_4458_){
_start:
{
lean_object* v___f_4460_; lean_object* v___f_4461_; lean_object* v___x_4462_; lean_object* v___f_4463_; lean_object* v___x_4464_; uint8_t v___x_4465_; size_t v_sz_4466_; size_t v___x_4467_; lean_object* v___x_263__overap_4468_; lean_object* v___x_4469_; lean_object* v___x_4470_; 
v___f_4460_ = ((lean_object*)(l_Std_Async_EAsync_asTask___redArg___closed__0));
v___f_4461_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_concurrentlyAll___redArg___lam__1___boxed), 4, 2);
lean_closure_set(v___f_4461_, 0, v_prio_4458_);
lean_closure_set(v___f_4461_, 1, v___f_4460_);
v___x_4462_ = lean_obj_once(&l_Std_Async_EAsync_instMonad___closed__0, &l_Std_Async_EAsync_instMonad___closed__0_once, _init_l_Std_Async_EAsync_instMonad___closed__0);
v___f_4463_ = lean_obj_once(&l_Std_Async_EAsync_concurrentlyAll___redArg___closed__1, &l_Std_Async_EAsync_concurrentlyAll___redArg___closed__1_once, _init_l_Std_Async_EAsync_concurrentlyAll___redArg___closed__1);
v___x_4464_ = lean_unsigned_to_nat(0u);
v___x_4465_ = 0;
v_sz_4466_ = lean_array_size(v_xs_4457_);
v___x_4467_ = ((size_t)0ULL);
v___x_263__overap_4468_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_4462_, v___f_4461_, v_sz_4466_, v___x_4467_, v_xs_4457_);
v___x_4469_ = lean_apply_1(v___x_263__overap_4468_, lean_box(0));
v___x_4470_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4464_, v___x_4465_, v___x_4469_, v___f_4463_);
return v___x_4470_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_concurrentlyAll___boxed(lean_object* v_00_u03b5_4471_, lean_object* v_00_u03b1_4472_, lean_object* v_xs_4473_, lean_object* v_prio_4474_, lean_object* v___y_4475_){
_start:
{
lean_object* v_res_4476_; 
v_res_4476_ = l_Std_Async_EAsync_concurrentlyAll(v_00_u03b5_4471_, v_00_u03b1_4472_, v_xs_4473_, v_prio_4474_);
return v_res_4476_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_raceAll___redArg___lam__4(lean_object* v___f_4477_, lean_object* v___f_4478_, lean_object* v_x_4479_){
_start:
{
if (lean_obj_tag(v_x_4479_) == 0)
{
lean_object* v_a_4481_; lean_object* v___x_4483_; uint8_t v_isShared_4484_; uint8_t v_isSharedCheck_4489_; 
lean_dec_ref(v___f_4478_);
lean_dec(v___f_4477_);
v_a_4481_ = lean_ctor_get(v_x_4479_, 0);
v_isSharedCheck_4489_ = !lean_is_exclusive(v_x_4479_);
if (v_isSharedCheck_4489_ == 0)
{
v___x_4483_ = v_x_4479_;
v_isShared_4484_ = v_isSharedCheck_4489_;
goto v_resetjp_4482_;
}
else
{
lean_inc(v_a_4481_);
lean_dec(v_x_4479_);
v___x_4483_ = lean_box(0);
v_isShared_4484_ = v_isSharedCheck_4489_;
goto v_resetjp_4482_;
}
v_resetjp_4482_:
{
lean_object* v___x_4486_; 
if (v_isShared_4484_ == 0)
{
v___x_4486_ = v___x_4483_;
goto v_reusejp_4485_;
}
else
{
lean_object* v_reuseFailAlloc_4488_; 
v_reuseFailAlloc_4488_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4488_, 0, v_a_4481_);
v___x_4486_ = v_reuseFailAlloc_4488_;
goto v_reusejp_4485_;
}
v_reusejp_4485_:
{
lean_object* v___x_4487_; 
v___x_4487_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4487_, 0, v___x_4486_);
return v___x_4487_;
}
}
}
else
{
lean_object* v_a_4490_; lean_object* v___x_4492_; uint8_t v_isShared_4493_; uint8_t v_isSharedCheck_4503_; 
v_a_4490_ = lean_ctor_get(v_x_4479_, 0);
v_isSharedCheck_4503_ = !lean_is_exclusive(v_x_4479_);
if (v_isSharedCheck_4503_ == 0)
{
v___x_4492_ = v_x_4479_;
v_isShared_4493_ = v_isSharedCheck_4503_;
goto v_resetjp_4491_;
}
else
{
lean_inc(v_a_4490_);
lean_dec(v_x_4479_);
v___x_4492_ = lean_box(0);
v_isShared_4493_ = v_isSharedCheck_4503_;
goto v_resetjp_4491_;
}
v_resetjp_4491_:
{
lean_object* v___x_4494_; lean_object* v___x_4495_; lean_object* v___x_4496_; uint8_t v___x_4497_; lean_object* v___x_4498_; lean_object* v___x_4500_; 
v___x_4494_ = lean_alloc_closure((void*)(l_liftM), 5, 4);
lean_closure_set(v___x_4494_, 0, lean_box(0));
lean_closure_set(v___x_4494_, 1, lean_box(0));
lean_closure_set(v___x_4494_, 2, v___f_4477_);
lean_closure_set(v___x_4494_, 3, lean_box(0));
v___x_4495_ = lean_alloc_closure((void*)(l_Function_comp), 6, 5);
lean_closure_set(v___x_4495_, 0, lean_box(0));
lean_closure_set(v___x_4495_, 1, lean_box(0));
lean_closure_set(v___x_4495_, 2, lean_box(0));
lean_closure_set(v___x_4495_, 3, v___x_4494_);
lean_closure_set(v___x_4495_, 4, v___f_4478_);
v___x_4496_ = lean_unsigned_to_nat(0u);
v___x_4497_ = 0;
v___x_4498_ = l_BaseIO_chainTask___redArg(v_a_4490_, v___x_4495_, v___x_4496_, v___x_4497_);
if (v_isShared_4493_ == 0)
{
lean_ctor_set(v___x_4492_, 0, v___x_4498_);
v___x_4500_ = v___x_4492_;
goto v_reusejp_4499_;
}
else
{
lean_object* v_reuseFailAlloc_4502_; 
v_reuseFailAlloc_4502_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4502_, 0, v___x_4498_);
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
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_raceAll___redArg___lam__4___boxed(lean_object* v___f_4504_, lean_object* v___f_4505_, lean_object* v_x_4506_, lean_object* v___y_4507_){
_start:
{
lean_object* v_res_4508_; 
v_res_4508_ = l_Std_Async_EAsync_raceAll___redArg___lam__4(v___f_4504_, v___f_4505_, v_x_4506_);
return v_res_4508_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_raceAll___redArg___lam__0(lean_object* v_prio_4509_, lean_object* v___f_4510_, lean_object* v___f_4511_, lean_object* v_x_4512_){
_start:
{
lean_object* v___x_4514_; uint8_t v___x_4515_; lean_object* v___x_4516_; lean_object* v___x_4517_; lean_object* v___x_4518_; uint8_t v___x_4519_; lean_object* v___x_4520_; lean_object* v___x_4521_; lean_object* v___x_4522_; lean_object* v___x_4523_; 
v___x_4514_ = lean_unsigned_to_nat(0u);
v___x_4515_ = 0;
v___x_4516_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_toBaseAsync___boxed), 4, 3);
lean_closure_set(v___x_4516_, 0, lean_box(0));
lean_closure_set(v___x_4516_, 1, lean_box(0));
lean_closure_set(v___x_4516_, 2, v_x_4512_);
v___x_4517_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_toRawBaseIO___boxed), 3, 2);
lean_closure_set(v___x_4517_, 0, lean_box(0));
lean_closure_set(v___x_4517_, 1, v___x_4516_);
v___x_4518_ = lean_io_as_task(v___x_4517_, v_prio_4509_);
v___x_4519_ = 1;
v___x_4520_ = lean_task_bind(v___x_4518_, v___f_4510_, v___x_4514_, v___x_4519_);
v___x_4521_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4521_, 0, v___x_4520_);
v___x_4522_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4522_, 0, v___x_4521_);
v___x_4523_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4514_, v___x_4515_, v___x_4522_, v___f_4511_);
return v___x_4523_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_raceAll___redArg___lam__0___boxed(lean_object* v_prio_4524_, lean_object* v___f_4525_, lean_object* v___f_4526_, lean_object* v_x_4527_, lean_object* v___y_4528_){
_start:
{
lean_object* v_res_4529_; 
v_res_4529_ = l_Std_Async_EAsync_raceAll___redArg___lam__0(v_prio_4524_, v___f_4525_, v___f_4526_, v_x_4527_);
return v_res_4529_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_raceAll___redArg___lam__2(lean_object* v___f_4530_, lean_object* v_prio_4531_, lean_object* v___f_4532_, lean_object* v___f_4533_, lean_object* v___f_4534_, lean_object* v_inst_4535_, lean_object* v_xs_4536_, lean_object* v_x_4537_){
_start:
{
if (lean_obj_tag(v_x_4537_) == 0)
{
lean_object* v_a_4539_; lean_object* v___x_4541_; uint8_t v_isShared_4542_; uint8_t v_isSharedCheck_4547_; 
lean_dec(v_xs_4536_);
lean_dec_ref(v_inst_4535_);
lean_dec_ref(v___f_4534_);
lean_dec_ref(v___f_4533_);
lean_dec_ref(v___f_4532_);
lean_dec(v_prio_4531_);
lean_dec(v___f_4530_);
v_a_4539_ = lean_ctor_get(v_x_4537_, 0);
v_isSharedCheck_4547_ = !lean_is_exclusive(v_x_4537_);
if (v_isSharedCheck_4547_ == 0)
{
v___x_4541_ = v_x_4537_;
v_isShared_4542_ = v_isSharedCheck_4547_;
goto v_resetjp_4540_;
}
else
{
lean_inc(v_a_4539_);
lean_dec(v_x_4537_);
v___x_4541_ = lean_box(0);
v_isShared_4542_ = v_isSharedCheck_4547_;
goto v_resetjp_4540_;
}
v_resetjp_4540_:
{
lean_object* v___x_4544_; 
if (v_isShared_4542_ == 0)
{
v___x_4544_ = v___x_4541_;
goto v_reusejp_4543_;
}
else
{
lean_object* v_reuseFailAlloc_4546_; 
v_reuseFailAlloc_4546_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4546_, 0, v_a_4539_);
v___x_4544_ = v_reuseFailAlloc_4546_;
goto v_reusejp_4543_;
}
v_reusejp_4543_:
{
lean_object* v___x_4545_; 
v___x_4545_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4545_, 0, v___x_4544_);
return v___x_4545_;
}
}
}
else
{
lean_object* v_a_4548_; lean_object* v___f_4549_; lean_object* v___f_4550_; lean_object* v___f_4551_; lean_object* v___f_4552_; lean_object* v___x_4553_; uint8_t v___x_4554_; lean_object* v___x_4555_; lean_object* v___x_4556_; 
v_a_4548_ = lean_ctor_get(v_x_4537_, 0);
lean_inc_n(v_a_4548_, 2);
lean_dec_ref_known(v_x_4537_, 1);
v___f_4549_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_race___redArg___lam__3___boxed), 3, 1);
lean_closure_set(v___f_4549_, 0, v_a_4548_);
v___f_4550_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_raceAll___redArg___lam__4___boxed), 4, 2);
lean_closure_set(v___f_4550_, 0, v___f_4530_);
lean_closure_set(v___f_4550_, 1, v___f_4549_);
v___f_4551_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_raceAll___redArg___lam__0___boxed), 5, 3);
lean_closure_set(v___f_4551_, 0, v_prio_4531_);
lean_closure_set(v___f_4551_, 1, v___f_4532_);
lean_closure_set(v___f_4551_, 2, v___f_4550_);
v___f_4552_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_race___redArg___lam__2___boxed), 5, 3);
lean_closure_set(v___f_4552_, 0, v_a_4548_);
lean_closure_set(v___f_4552_, 1, v___f_4533_);
lean_closure_set(v___f_4552_, 2, v___f_4534_);
v___x_4553_ = lean_unsigned_to_nat(0u);
v___x_4554_ = 0;
v___x_4555_ = lean_apply_3(v_inst_4535_, v_xs_4536_, v___f_4551_, lean_box(0));
v___x_4556_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4553_, v___x_4554_, v___x_4555_, v___f_4552_);
return v___x_4556_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_raceAll___redArg___lam__2___boxed(lean_object* v___f_4557_, lean_object* v_prio_4558_, lean_object* v___f_4559_, lean_object* v___f_4560_, lean_object* v___f_4561_, lean_object* v_inst_4562_, lean_object* v_xs_4563_, lean_object* v_x_4564_, lean_object* v___y_4565_){
_start:
{
lean_object* v_res_4566_; 
v_res_4566_ = l_Std_Async_EAsync_raceAll___redArg___lam__2(v___f_4557_, v_prio_4558_, v___f_4559_, v___f_4560_, v___f_4561_, v_inst_4562_, v_xs_4563_, v_x_4564_);
return v_res_4566_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_raceAll___redArg(lean_object* v_inst_4567_, lean_object* v_xs_4568_, lean_object* v_prio_4569_){
_start:
{
lean_object* v___f_4571_; lean_object* v___f_4572_; lean_object* v___f_4573_; lean_object* v___f_4574_; lean_object* v___f_4575_; lean_object* v___x_4576_; uint8_t v___x_4577_; lean_object* v___x_4578_; lean_object* v___x_4579_; lean_object* v___x_4580_; lean_object* v___x_4581_; 
v___f_4571_ = ((lean_object*)(l_Std_Async_EAsync_race___redArg___closed__1));
v___f_4572_ = ((lean_object*)(l_Std_Async_EAsync_race___redArg___closed__0));
v___f_4573_ = ((lean_object*)(l_Std_Async_EAsync_asTask___redArg___closed__0));
v___f_4574_ = ((lean_object*)(l_Std_Async_BaseAsync_race___redArg___closed__0));
v___f_4575_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_raceAll___redArg___lam__2___boxed), 9, 7);
lean_closure_set(v___f_4575_, 0, v___f_4574_);
lean_closure_set(v___f_4575_, 1, v_prio_4569_);
lean_closure_set(v___f_4575_, 2, v___f_4573_);
lean_closure_set(v___f_4575_, 3, v___f_4571_);
lean_closure_set(v___f_4575_, 4, v___f_4572_);
lean_closure_set(v___f_4575_, 5, v_inst_4567_);
lean_closure_set(v___f_4575_, 6, v_xs_4568_);
v___x_4576_ = lean_unsigned_to_nat(0u);
v___x_4577_ = 0;
v___x_4578_ = lean_io_promise_new();
v___x_4579_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4579_, 0, v___x_4578_);
v___x_4580_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4580_, 0, v___x_4579_);
v___x_4581_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4576_, v___x_4577_, v___x_4580_, v___f_4575_);
return v___x_4581_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_raceAll___redArg___boxed(lean_object* v_inst_4582_, lean_object* v_xs_4583_, lean_object* v_prio_4584_, lean_object* v___y_4585_){
_start:
{
lean_object* v_res_4586_; 
v_res_4586_ = l_Std_Async_EAsync_raceAll___redArg(v_inst_4582_, v_xs_4583_, v_prio_4584_);
return v_res_4586_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_raceAll(lean_object* v_00_u03b1_4587_, lean_object* v_00_u03b5_4588_, lean_object* v_c_4589_, lean_object* v_inst_4590_, lean_object* v_inst_4591_, lean_object* v_xs_4592_, lean_object* v_prio_4593_){
_start:
{
lean_object* v___f_4595_; lean_object* v___f_4596_; lean_object* v___f_4597_; lean_object* v___f_4598_; lean_object* v___f_4599_; lean_object* v___x_4600_; uint8_t v___x_4601_; lean_object* v___x_4602_; lean_object* v___x_4603_; lean_object* v___x_4604_; lean_object* v___x_4605_; 
v___f_4595_ = ((lean_object*)(l_Std_Async_EAsync_race___redArg___closed__1));
v___f_4596_ = ((lean_object*)(l_Std_Async_EAsync_race___redArg___closed__0));
v___f_4597_ = ((lean_object*)(l_Std_Async_EAsync_asTask___redArg___closed__0));
v___f_4598_ = ((lean_object*)(l_Std_Async_BaseAsync_race___redArg___closed__0));
v___f_4599_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_raceAll___redArg___lam__2___boxed), 9, 7);
lean_closure_set(v___f_4599_, 0, v___f_4598_);
lean_closure_set(v___f_4599_, 1, v_prio_4593_);
lean_closure_set(v___f_4599_, 2, v___f_4597_);
lean_closure_set(v___f_4599_, 3, v___f_4595_);
lean_closure_set(v___f_4599_, 4, v___f_4596_);
lean_closure_set(v___f_4599_, 5, v_inst_4591_);
lean_closure_set(v___f_4599_, 6, v_xs_4592_);
v___x_4600_ = lean_unsigned_to_nat(0u);
v___x_4601_ = 0;
v___x_4602_ = lean_io_promise_new();
v___x_4603_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4603_, 0, v___x_4602_);
v___x_4604_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4604_, 0, v___x_4603_);
v___x_4605_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4600_, v___x_4601_, v___x_4604_, v___f_4599_);
return v___x_4605_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_raceAll___boxed(lean_object* v_00_u03b1_4606_, lean_object* v_00_u03b5_4607_, lean_object* v_c_4608_, lean_object* v_inst_4609_, lean_object* v_inst_4610_, lean_object* v_xs_4611_, lean_object* v_prio_4612_, lean_object* v___y_4613_){
_start:
{
lean_object* v_res_4614_; 
v_res_4614_ = l_Std_Async_EAsync_raceAll(v_00_u03b1_4606_, v_00_u03b5_4607_, v_c_4608_, v_inst_4609_, v_inst_4610_, v_xs_4611_, v_prio_4612_);
lean_dec(v_inst_4609_);
return v_res_4614_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_toIO___redArg(lean_object* v_x_4615_){
_start:
{
lean_object* v___x_4617_; 
v___x_4617_ = lean_apply_1(v_x_4615_, lean_box(0));
if (lean_obj_tag(v___x_4617_) == 0)
{
lean_object* v_a_4618_; lean_object* v___x_4620_; uint8_t v_isShared_4621_; uint8_t v_isSharedCheck_4626_; 
v_a_4618_ = lean_ctor_get(v___x_4617_, 0);
v_isSharedCheck_4626_ = !lean_is_exclusive(v___x_4617_);
if (v_isSharedCheck_4626_ == 0)
{
v___x_4620_ = v___x_4617_;
v_isShared_4621_ = v_isSharedCheck_4626_;
goto v_resetjp_4619_;
}
else
{
lean_inc(v_a_4618_);
lean_dec(v___x_4617_);
v___x_4620_ = lean_box(0);
v_isShared_4621_ = v_isSharedCheck_4626_;
goto v_resetjp_4619_;
}
v_resetjp_4619_:
{
lean_object* v___x_4622_; lean_object* v___x_4624_; 
v___x_4622_ = lean_task_pure(v_a_4618_);
if (v_isShared_4621_ == 0)
{
lean_ctor_set(v___x_4620_, 0, v___x_4622_);
v___x_4624_ = v___x_4620_;
goto v_reusejp_4623_;
}
else
{
lean_object* v_reuseFailAlloc_4625_; 
v_reuseFailAlloc_4625_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4625_, 0, v___x_4622_);
v___x_4624_ = v_reuseFailAlloc_4625_;
goto v_reusejp_4623_;
}
v_reusejp_4623_:
{
return v___x_4624_;
}
}
}
else
{
lean_object* v_a_4627_; lean_object* v___x_4629_; uint8_t v_isShared_4630_; uint8_t v_isSharedCheck_4634_; 
v_a_4627_ = lean_ctor_get(v___x_4617_, 0);
v_isSharedCheck_4634_ = !lean_is_exclusive(v___x_4617_);
if (v_isSharedCheck_4634_ == 0)
{
v___x_4629_ = v___x_4617_;
v_isShared_4630_ = v_isSharedCheck_4634_;
goto v_resetjp_4628_;
}
else
{
lean_inc(v_a_4627_);
lean_dec(v___x_4617_);
v___x_4629_ = lean_box(0);
v_isShared_4630_ = v_isSharedCheck_4634_;
goto v_resetjp_4628_;
}
v_resetjp_4628_:
{
lean_object* v___x_4632_; 
if (v_isShared_4630_ == 0)
{
lean_ctor_set_tag(v___x_4629_, 0);
v___x_4632_ = v___x_4629_;
goto v_reusejp_4631_;
}
else
{
lean_object* v_reuseFailAlloc_4633_; 
v_reuseFailAlloc_4633_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4633_, 0, v_a_4627_);
v___x_4632_ = v_reuseFailAlloc_4633_;
goto v_reusejp_4631_;
}
v_reusejp_4631_:
{
return v___x_4632_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_toIO___redArg___boxed(lean_object* v_x_4635_, lean_object* v___y_4636_){
_start:
{
lean_object* v_res_4637_; 
v_res_4637_ = l_Std_Async_Async_toIO___redArg(v_x_4635_);
return v_res_4637_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_toIO(lean_object* v_00_u03b1_4638_, lean_object* v_x_4639_){
_start:
{
lean_object* v___x_4641_; 
v___x_4641_ = lean_apply_1(v_x_4639_, lean_box(0));
if (lean_obj_tag(v___x_4641_) == 0)
{
lean_object* v_a_4642_; lean_object* v___x_4644_; uint8_t v_isShared_4645_; uint8_t v_isSharedCheck_4650_; 
v_a_4642_ = lean_ctor_get(v___x_4641_, 0);
v_isSharedCheck_4650_ = !lean_is_exclusive(v___x_4641_);
if (v_isSharedCheck_4650_ == 0)
{
v___x_4644_ = v___x_4641_;
v_isShared_4645_ = v_isSharedCheck_4650_;
goto v_resetjp_4643_;
}
else
{
lean_inc(v_a_4642_);
lean_dec(v___x_4641_);
v___x_4644_ = lean_box(0);
v_isShared_4645_ = v_isSharedCheck_4650_;
goto v_resetjp_4643_;
}
v_resetjp_4643_:
{
lean_object* v___x_4646_; lean_object* v___x_4648_; 
v___x_4646_ = lean_task_pure(v_a_4642_);
if (v_isShared_4645_ == 0)
{
lean_ctor_set(v___x_4644_, 0, v___x_4646_);
v___x_4648_ = v___x_4644_;
goto v_reusejp_4647_;
}
else
{
lean_object* v_reuseFailAlloc_4649_; 
v_reuseFailAlloc_4649_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4649_, 0, v___x_4646_);
v___x_4648_ = v_reuseFailAlloc_4649_;
goto v_reusejp_4647_;
}
v_reusejp_4647_:
{
return v___x_4648_;
}
}
}
else
{
lean_object* v_a_4651_; lean_object* v___x_4653_; uint8_t v_isShared_4654_; uint8_t v_isSharedCheck_4658_; 
v_a_4651_ = lean_ctor_get(v___x_4641_, 0);
v_isSharedCheck_4658_ = !lean_is_exclusive(v___x_4641_);
if (v_isSharedCheck_4658_ == 0)
{
v___x_4653_ = v___x_4641_;
v_isShared_4654_ = v_isSharedCheck_4658_;
goto v_resetjp_4652_;
}
else
{
lean_inc(v_a_4651_);
lean_dec(v___x_4641_);
v___x_4653_ = lean_box(0);
v_isShared_4654_ = v_isSharedCheck_4658_;
goto v_resetjp_4652_;
}
v_resetjp_4652_:
{
lean_object* v___x_4656_; 
if (v_isShared_4654_ == 0)
{
lean_ctor_set_tag(v___x_4653_, 0);
v___x_4656_ = v___x_4653_;
goto v_reusejp_4655_;
}
else
{
lean_object* v_reuseFailAlloc_4657_; 
v_reuseFailAlloc_4657_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4657_, 0, v_a_4651_);
v___x_4656_ = v_reuseFailAlloc_4657_;
goto v_reusejp_4655_;
}
v_reusejp_4655_:
{
return v___x_4656_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_toIO___boxed(lean_object* v_00_u03b1_4659_, lean_object* v_x_4660_, lean_object* v___y_4661_){
_start:
{
lean_object* v_res_4662_; 
v_res_4662_ = l_Std_Async_Async_toIO(v_00_u03b1_4659_, v_x_4660_);
return v_res_4662_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_block___redArg(lean_object* v_x_4663_, lean_object* v_prio_4664_){
_start:
{
lean_object* v___f_4666_; lean_object* v___x_4667_; lean_object* v___x_4668_; lean_object* v___x_4669_; lean_object* v___x_4670_; uint8_t v___x_4671_; lean_object* v___x_4672_; lean_object* v___x_4673_; 
v___f_4666_ = ((lean_object*)(l_Std_Async_EAsync_instMonadAsyncAsyncTaskError___closed__0));
v___x_4667_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_toBaseAsync___boxed), 4, 3);
lean_closure_set(v___x_4667_, 0, lean_box(0));
lean_closure_set(v___x_4667_, 1, lean_box(0));
lean_closure_set(v___x_4667_, 2, v_x_4663_);
v___x_4668_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_toRawBaseIO___boxed), 3, 2);
lean_closure_set(v___x_4668_, 0, lean_box(0));
lean_closure_set(v___x_4668_, 1, v___x_4667_);
v___x_4669_ = lean_io_as_task(v___x_4668_, v_prio_4664_);
v___x_4670_ = lean_unsigned_to_nat(0u);
v___x_4671_ = 1;
v___x_4672_ = lean_task_bind(v___x_4669_, v___f_4666_, v___x_4670_, v___x_4671_);
v___x_4673_ = lean_task_get_own(v___x_4672_);
if (lean_obj_tag(v___x_4673_) == 0)
{
lean_object* v_a_4674_; lean_object* v___x_4676_; uint8_t v_isShared_4677_; uint8_t v_isSharedCheck_4681_; 
v_a_4674_ = lean_ctor_get(v___x_4673_, 0);
v_isSharedCheck_4681_ = !lean_is_exclusive(v___x_4673_);
if (v_isSharedCheck_4681_ == 0)
{
v___x_4676_ = v___x_4673_;
v_isShared_4677_ = v_isSharedCheck_4681_;
goto v_resetjp_4675_;
}
else
{
lean_inc(v_a_4674_);
lean_dec(v___x_4673_);
v___x_4676_ = lean_box(0);
v_isShared_4677_ = v_isSharedCheck_4681_;
goto v_resetjp_4675_;
}
v_resetjp_4675_:
{
lean_object* v___x_4679_; 
if (v_isShared_4677_ == 0)
{
lean_ctor_set_tag(v___x_4676_, 1);
v___x_4679_ = v___x_4676_;
goto v_reusejp_4678_;
}
else
{
lean_object* v_reuseFailAlloc_4680_; 
v_reuseFailAlloc_4680_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4680_, 0, v_a_4674_);
v___x_4679_ = v_reuseFailAlloc_4680_;
goto v_reusejp_4678_;
}
v_reusejp_4678_:
{
return v___x_4679_;
}
}
}
else
{
lean_object* v_a_4682_; lean_object* v___x_4684_; uint8_t v_isShared_4685_; uint8_t v_isSharedCheck_4689_; 
v_a_4682_ = lean_ctor_get(v___x_4673_, 0);
v_isSharedCheck_4689_ = !lean_is_exclusive(v___x_4673_);
if (v_isSharedCheck_4689_ == 0)
{
v___x_4684_ = v___x_4673_;
v_isShared_4685_ = v_isSharedCheck_4689_;
goto v_resetjp_4683_;
}
else
{
lean_inc(v_a_4682_);
lean_dec(v___x_4673_);
v___x_4684_ = lean_box(0);
v_isShared_4685_ = v_isSharedCheck_4689_;
goto v_resetjp_4683_;
}
v_resetjp_4683_:
{
lean_object* v___x_4687_; 
if (v_isShared_4685_ == 0)
{
lean_ctor_set_tag(v___x_4684_, 0);
v___x_4687_ = v___x_4684_;
goto v_reusejp_4686_;
}
else
{
lean_object* v_reuseFailAlloc_4688_; 
v_reuseFailAlloc_4688_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4688_, 0, v_a_4682_);
v___x_4687_ = v_reuseFailAlloc_4688_;
goto v_reusejp_4686_;
}
v_reusejp_4686_:
{
return v___x_4687_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_block___redArg___boxed(lean_object* v_x_4690_, lean_object* v_prio_4691_, lean_object* v___y_4692_){
_start:
{
lean_object* v_res_4693_; 
v_res_4693_ = l_Std_Async_Async_block___redArg(v_x_4690_, v_prio_4691_);
return v_res_4693_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_block(lean_object* v_00_u03b1_4694_, lean_object* v_x_4695_, lean_object* v_prio_4696_){
_start:
{
lean_object* v___f_4698_; lean_object* v___x_4699_; lean_object* v___x_4700_; lean_object* v___x_4701_; lean_object* v___x_4702_; uint8_t v___x_4703_; lean_object* v___x_4704_; lean_object* v___x_4705_; 
v___f_4698_ = ((lean_object*)(l_Std_Async_EAsync_instMonadAsyncAsyncTaskError___closed__0));
v___x_4699_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_toBaseAsync___boxed), 4, 3);
lean_closure_set(v___x_4699_, 0, lean_box(0));
lean_closure_set(v___x_4699_, 1, lean_box(0));
lean_closure_set(v___x_4699_, 2, v_x_4695_);
v___x_4700_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_toRawBaseIO___boxed), 3, 2);
lean_closure_set(v___x_4700_, 0, lean_box(0));
lean_closure_set(v___x_4700_, 1, v___x_4699_);
v___x_4701_ = lean_io_as_task(v___x_4700_, v_prio_4696_);
v___x_4702_ = lean_unsigned_to_nat(0u);
v___x_4703_ = 1;
v___x_4704_ = lean_task_bind(v___x_4701_, v___f_4698_, v___x_4702_, v___x_4703_);
v___x_4705_ = lean_task_get_own(v___x_4704_);
if (lean_obj_tag(v___x_4705_) == 0)
{
lean_object* v_a_4706_; lean_object* v___x_4708_; uint8_t v_isShared_4709_; uint8_t v_isSharedCheck_4713_; 
v_a_4706_ = lean_ctor_get(v___x_4705_, 0);
v_isSharedCheck_4713_ = !lean_is_exclusive(v___x_4705_);
if (v_isSharedCheck_4713_ == 0)
{
v___x_4708_ = v___x_4705_;
v_isShared_4709_ = v_isSharedCheck_4713_;
goto v_resetjp_4707_;
}
else
{
lean_inc(v_a_4706_);
lean_dec(v___x_4705_);
v___x_4708_ = lean_box(0);
v_isShared_4709_ = v_isSharedCheck_4713_;
goto v_resetjp_4707_;
}
v_resetjp_4707_:
{
lean_object* v___x_4711_; 
if (v_isShared_4709_ == 0)
{
lean_ctor_set_tag(v___x_4708_, 1);
v___x_4711_ = v___x_4708_;
goto v_reusejp_4710_;
}
else
{
lean_object* v_reuseFailAlloc_4712_; 
v_reuseFailAlloc_4712_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4712_, 0, v_a_4706_);
v___x_4711_ = v_reuseFailAlloc_4712_;
goto v_reusejp_4710_;
}
v_reusejp_4710_:
{
return v___x_4711_;
}
}
}
else
{
lean_object* v_a_4714_; lean_object* v___x_4716_; uint8_t v_isShared_4717_; uint8_t v_isSharedCheck_4721_; 
v_a_4714_ = lean_ctor_get(v___x_4705_, 0);
v_isSharedCheck_4721_ = !lean_is_exclusive(v___x_4705_);
if (v_isSharedCheck_4721_ == 0)
{
v___x_4716_ = v___x_4705_;
v_isShared_4717_ = v_isSharedCheck_4721_;
goto v_resetjp_4715_;
}
else
{
lean_inc(v_a_4714_);
lean_dec(v___x_4705_);
v___x_4716_ = lean_box(0);
v_isShared_4717_ = v_isSharedCheck_4721_;
goto v_resetjp_4715_;
}
v_resetjp_4715_:
{
lean_object* v___x_4719_; 
if (v_isShared_4717_ == 0)
{
lean_ctor_set_tag(v___x_4716_, 0);
v___x_4719_ = v___x_4716_;
goto v_reusejp_4718_;
}
else
{
lean_object* v_reuseFailAlloc_4720_; 
v_reuseFailAlloc_4720_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4720_, 0, v_a_4714_);
v___x_4719_ = v_reuseFailAlloc_4720_;
goto v_reusejp_4718_;
}
v_reusejp_4718_:
{
return v___x_4719_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_block___boxed(lean_object* v_00_u03b1_4722_, lean_object* v_x_4723_, lean_object* v_prio_4724_, lean_object* v___y_4725_){
_start:
{
lean_object* v_res_4726_; 
v_res_4726_ = l_Std_Async_Async_block(v_00_u03b1_4722_, v_x_4723_, v_prio_4724_);
return v_res_4726_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_ofPromise___redArg(lean_object* v_task_4727_, lean_object* v_error_4728_){
_start:
{
lean_object* v___f_4730_; lean_object* v___x_4731_; 
v___f_4730_ = lean_alloc_closure((void*)(l_Std_Async_AsyncTask_ofPromise___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_4730_, 0, v_error_4728_);
v___x_4731_ = lean_apply_1(v_task_4727_, lean_box(0));
if (lean_obj_tag(v___x_4731_) == 0)
{
lean_object* v_a_4732_; lean_object* v___x_4734_; uint8_t v_isShared_4735_; uint8_t v_isSharedCheck_4743_; 
v_a_4732_ = lean_ctor_get(v___x_4731_, 0);
v_isSharedCheck_4743_ = !lean_is_exclusive(v___x_4731_);
if (v_isSharedCheck_4743_ == 0)
{
v___x_4734_ = v___x_4731_;
v_isShared_4735_ = v_isSharedCheck_4743_;
goto v_resetjp_4733_;
}
else
{
lean_inc(v_a_4732_);
lean_dec(v___x_4731_);
v___x_4734_ = lean_box(0);
v_isShared_4735_ = v_isSharedCheck_4743_;
goto v_resetjp_4733_;
}
v_resetjp_4733_:
{
lean_object* v___x_4736_; lean_object* v___x_4737_; uint8_t v___x_4738_; lean_object* v___x_4739_; lean_object* v___x_4741_; 
v___x_4736_ = lean_io_promise_result_opt(v_a_4732_);
lean_dec(v_a_4732_);
v___x_4737_ = lean_unsigned_to_nat(0u);
v___x_4738_ = 0;
v___x_4739_ = lean_task_map(v___f_4730_, v___x_4736_, v___x_4737_, v___x_4738_);
if (v_isShared_4735_ == 0)
{
lean_ctor_set_tag(v___x_4734_, 1);
lean_ctor_set(v___x_4734_, 0, v___x_4739_);
v___x_4741_ = v___x_4734_;
goto v_reusejp_4740_;
}
else
{
lean_object* v_reuseFailAlloc_4742_; 
v_reuseFailAlloc_4742_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4742_, 0, v___x_4739_);
v___x_4741_ = v_reuseFailAlloc_4742_;
goto v_reusejp_4740_;
}
v_reusejp_4740_:
{
return v___x_4741_;
}
}
}
else
{
lean_object* v_a_4744_; lean_object* v___x_4746_; uint8_t v_isShared_4747_; uint8_t v_isSharedCheck_4752_; 
lean_dec_ref(v___f_4730_);
v_a_4744_ = lean_ctor_get(v___x_4731_, 0);
v_isSharedCheck_4752_ = !lean_is_exclusive(v___x_4731_);
if (v_isSharedCheck_4752_ == 0)
{
v___x_4746_ = v___x_4731_;
v_isShared_4747_ = v_isSharedCheck_4752_;
goto v_resetjp_4745_;
}
else
{
lean_inc(v_a_4744_);
lean_dec(v___x_4731_);
v___x_4746_ = lean_box(0);
v_isShared_4747_ = v_isSharedCheck_4752_;
goto v_resetjp_4745_;
}
v_resetjp_4745_:
{
lean_object* v___x_4749_; 
if (v_isShared_4747_ == 0)
{
lean_ctor_set_tag(v___x_4746_, 0);
v___x_4749_ = v___x_4746_;
goto v_reusejp_4748_;
}
else
{
lean_object* v_reuseFailAlloc_4751_; 
v_reuseFailAlloc_4751_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4751_, 0, v_a_4744_);
v___x_4749_ = v_reuseFailAlloc_4751_;
goto v_reusejp_4748_;
}
v_reusejp_4748_:
{
lean_object* v___x_4750_; 
v___x_4750_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4750_, 0, v___x_4749_);
return v___x_4750_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_ofPromise___redArg___boxed(lean_object* v_task_4753_, lean_object* v_error_4754_, lean_object* v___y_4755_){
_start:
{
lean_object* v_res_4756_; 
v_res_4756_ = l_Std_Async_Async_ofPromise___redArg(v_task_4753_, v_error_4754_);
return v_res_4756_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_ofPromise(lean_object* v_00_u03b1_4757_, lean_object* v_task_4758_, lean_object* v_error_4759_){
_start:
{
lean_object* v___f_4761_; lean_object* v___x_4762_; 
v___f_4761_ = lean_alloc_closure((void*)(l_Std_Async_AsyncTask_ofPromise___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_4761_, 0, v_error_4759_);
v___x_4762_ = lean_apply_1(v_task_4758_, lean_box(0));
if (lean_obj_tag(v___x_4762_) == 0)
{
lean_object* v_a_4763_; lean_object* v___x_4765_; uint8_t v_isShared_4766_; uint8_t v_isSharedCheck_4774_; 
v_a_4763_ = lean_ctor_get(v___x_4762_, 0);
v_isSharedCheck_4774_ = !lean_is_exclusive(v___x_4762_);
if (v_isSharedCheck_4774_ == 0)
{
v___x_4765_ = v___x_4762_;
v_isShared_4766_ = v_isSharedCheck_4774_;
goto v_resetjp_4764_;
}
else
{
lean_inc(v_a_4763_);
lean_dec(v___x_4762_);
v___x_4765_ = lean_box(0);
v_isShared_4766_ = v_isSharedCheck_4774_;
goto v_resetjp_4764_;
}
v_resetjp_4764_:
{
lean_object* v___x_4767_; lean_object* v___x_4768_; uint8_t v___x_4769_; lean_object* v___x_4770_; lean_object* v___x_4772_; 
v___x_4767_ = lean_io_promise_result_opt(v_a_4763_);
lean_dec(v_a_4763_);
v___x_4768_ = lean_unsigned_to_nat(0u);
v___x_4769_ = 0;
v___x_4770_ = lean_task_map(v___f_4761_, v___x_4767_, v___x_4768_, v___x_4769_);
if (v_isShared_4766_ == 0)
{
lean_ctor_set_tag(v___x_4765_, 1);
lean_ctor_set(v___x_4765_, 0, v___x_4770_);
v___x_4772_ = v___x_4765_;
goto v_reusejp_4771_;
}
else
{
lean_object* v_reuseFailAlloc_4773_; 
v_reuseFailAlloc_4773_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4773_, 0, v___x_4770_);
v___x_4772_ = v_reuseFailAlloc_4773_;
goto v_reusejp_4771_;
}
v_reusejp_4771_:
{
return v___x_4772_;
}
}
}
else
{
lean_object* v_a_4775_; lean_object* v___x_4777_; uint8_t v_isShared_4778_; uint8_t v_isSharedCheck_4783_; 
lean_dec_ref(v___f_4761_);
v_a_4775_ = lean_ctor_get(v___x_4762_, 0);
v_isSharedCheck_4783_ = !lean_is_exclusive(v___x_4762_);
if (v_isSharedCheck_4783_ == 0)
{
v___x_4777_ = v___x_4762_;
v_isShared_4778_ = v_isSharedCheck_4783_;
goto v_resetjp_4776_;
}
else
{
lean_inc(v_a_4775_);
lean_dec(v___x_4762_);
v___x_4777_ = lean_box(0);
v_isShared_4778_ = v_isSharedCheck_4783_;
goto v_resetjp_4776_;
}
v_resetjp_4776_:
{
lean_object* v___x_4780_; 
if (v_isShared_4778_ == 0)
{
lean_ctor_set_tag(v___x_4777_, 0);
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
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_ofPromise___boxed(lean_object* v_00_u03b1_4784_, lean_object* v_task_4785_, lean_object* v_error_4786_, lean_object* v___y_4787_){
_start:
{
lean_object* v_res_4788_; 
v_res_4788_ = l_Std_Async_Async_ofPromise(v_00_u03b1_4784_, v_task_4785_, v_error_4786_);
return v_res_4788_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_ofAsyncTask___redArg(lean_object* v_task_4789_){
_start:
{
lean_object* v___x_4791_; 
v___x_4791_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4791_, 0, v_task_4789_);
return v___x_4791_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_ofAsyncTask___redArg___boxed(lean_object* v_task_4792_, lean_object* v___y_4793_){
_start:
{
lean_object* v_res_4794_; 
v_res_4794_ = l_Std_Async_Async_ofAsyncTask___redArg(v_task_4792_);
return v_res_4794_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_ofAsyncTask(lean_object* v_00_u03b1_4795_, lean_object* v_task_4796_){
_start:
{
lean_object* v___x_4798_; 
v___x_4798_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4798_, 0, v_task_4796_);
return v___x_4798_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_ofAsyncTask___boxed(lean_object* v_00_u03b1_4799_, lean_object* v_task_4800_, lean_object* v___y_4801_){
_start:
{
lean_object* v_res_4802_; 
v_res_4802_ = l_Std_Async_Async_ofAsyncTask(v_00_u03b1_4799_, v_task_4800_);
return v_res_4802_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_ofIOTask___redArg___lam__0(lean_object* v_a_4803_){
_start:
{
lean_object* v___x_4804_; 
v___x_4804_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4804_, 0, v_a_4803_);
return v___x_4804_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_ofIOTask___redArg___lam__1(lean_object* v___f_4805_, lean_object* v_x_4806_){
_start:
{
if (lean_obj_tag(v_x_4806_) == 0)
{
lean_object* v_a_4808_; lean_object* v___x_4810_; uint8_t v_isShared_4811_; uint8_t v_isSharedCheck_4816_; 
lean_dec_ref(v___f_4805_);
v_a_4808_ = lean_ctor_get(v_x_4806_, 0);
v_isSharedCheck_4816_ = !lean_is_exclusive(v_x_4806_);
if (v_isSharedCheck_4816_ == 0)
{
v___x_4810_ = v_x_4806_;
v_isShared_4811_ = v_isSharedCheck_4816_;
goto v_resetjp_4809_;
}
else
{
lean_inc(v_a_4808_);
lean_dec(v_x_4806_);
v___x_4810_ = lean_box(0);
v_isShared_4811_ = v_isSharedCheck_4816_;
goto v_resetjp_4809_;
}
v_resetjp_4809_:
{
lean_object* v___x_4813_; 
if (v_isShared_4811_ == 0)
{
v___x_4813_ = v___x_4810_;
goto v_reusejp_4812_;
}
else
{
lean_object* v_reuseFailAlloc_4815_; 
v_reuseFailAlloc_4815_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4815_, 0, v_a_4808_);
v___x_4813_ = v_reuseFailAlloc_4815_;
goto v_reusejp_4812_;
}
v_reusejp_4812_:
{
lean_object* v___x_4814_; 
v___x_4814_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4814_, 0, v___x_4813_);
return v___x_4814_;
}
}
}
else
{
lean_object* v_a_4817_; 
v_a_4817_ = lean_ctor_get(v_x_4806_, 0);
lean_inc(v_a_4817_);
lean_dec_ref_known(v_x_4806_, 1);
if (lean_obj_tag(v_a_4817_) == 0)
{
lean_object* v_a_4818_; lean_object* v___x_4820_; uint8_t v_isShared_4821_; uint8_t v_isSharedCheck_4826_; 
lean_dec_ref(v___f_4805_);
v_a_4818_ = lean_ctor_get(v_a_4817_, 0);
v_isSharedCheck_4826_ = !lean_is_exclusive(v_a_4817_);
if (v_isSharedCheck_4826_ == 0)
{
v___x_4820_ = v_a_4817_;
v_isShared_4821_ = v_isSharedCheck_4826_;
goto v_resetjp_4819_;
}
else
{
lean_inc(v_a_4818_);
lean_dec(v_a_4817_);
v___x_4820_ = lean_box(0);
v_isShared_4821_ = v_isSharedCheck_4826_;
goto v_resetjp_4819_;
}
v_resetjp_4819_:
{
lean_object* v___x_4823_; 
if (v_isShared_4821_ == 0)
{
v___x_4823_ = v___x_4820_;
goto v_reusejp_4822_;
}
else
{
lean_object* v_reuseFailAlloc_4825_; 
v_reuseFailAlloc_4825_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4825_, 0, v_a_4818_);
v___x_4823_ = v_reuseFailAlloc_4825_;
goto v_reusejp_4822_;
}
v_reusejp_4822_:
{
lean_object* v___x_4824_; 
v___x_4824_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4824_, 0, v___x_4823_);
return v___x_4824_;
}
}
}
else
{
lean_object* v_a_4827_; lean_object* v___x_4828_; uint8_t v___x_4829_; lean_object* v___x_4830_; lean_object* v___x_4831_; 
v_a_4827_ = lean_ctor_get(v_a_4817_, 0);
lean_inc(v_a_4827_);
lean_dec_ref_known(v_a_4817_, 1);
v___x_4828_ = lean_unsigned_to_nat(0u);
v___x_4829_ = 0;
v___x_4830_ = lean_task_map(v___f_4805_, v_a_4827_, v___x_4828_, v___x_4829_);
v___x_4831_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4831_, 0, v___x_4830_);
return v___x_4831_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_ofIOTask___redArg___lam__1___boxed(lean_object* v___f_4832_, lean_object* v_x_4833_, lean_object* v___y_4834_){
_start:
{
lean_object* v_res_4835_; 
v_res_4835_ = l_Std_Async_Async_ofIOTask___redArg___lam__1(v___f_4832_, v_x_4833_);
return v_res_4835_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_ofIOTask___redArg(lean_object* v_task_4839_){
_start:
{
lean_object* v___f_4841_; lean_object* v___x_4842_; uint8_t v___x_4843_; lean_object* v_val_4845_; lean_object* v___x_4849_; 
v___f_4841_ = ((lean_object*)(l_Std_Async_Async_ofIOTask___redArg___closed__1));
v___x_4842_ = lean_unsigned_to_nat(0u);
v___x_4843_ = 0;
v___x_4849_ = lean_apply_1(v_task_4839_, lean_box(0));
if (lean_obj_tag(v___x_4849_) == 0)
{
lean_object* v_a_4850_; lean_object* v___x_4852_; uint8_t v_isShared_4853_; uint8_t v_isSharedCheck_4857_; 
v_a_4850_ = lean_ctor_get(v___x_4849_, 0);
v_isSharedCheck_4857_ = !lean_is_exclusive(v___x_4849_);
if (v_isSharedCheck_4857_ == 0)
{
v___x_4852_ = v___x_4849_;
v_isShared_4853_ = v_isSharedCheck_4857_;
goto v_resetjp_4851_;
}
else
{
lean_inc(v_a_4850_);
lean_dec(v___x_4849_);
v___x_4852_ = lean_box(0);
v_isShared_4853_ = v_isSharedCheck_4857_;
goto v_resetjp_4851_;
}
v_resetjp_4851_:
{
lean_object* v___x_4855_; 
if (v_isShared_4853_ == 0)
{
lean_ctor_set_tag(v___x_4852_, 1);
v___x_4855_ = v___x_4852_;
goto v_reusejp_4854_;
}
else
{
lean_object* v_reuseFailAlloc_4856_; 
v_reuseFailAlloc_4856_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4856_, 0, v_a_4850_);
v___x_4855_ = v_reuseFailAlloc_4856_;
goto v_reusejp_4854_;
}
v_reusejp_4854_:
{
v_val_4845_ = v___x_4855_;
goto v___jp_4844_;
}
}
}
else
{
lean_object* v_a_4858_; lean_object* v___x_4860_; uint8_t v_isShared_4861_; uint8_t v_isSharedCheck_4865_; 
v_a_4858_ = lean_ctor_get(v___x_4849_, 0);
v_isSharedCheck_4865_ = !lean_is_exclusive(v___x_4849_);
if (v_isSharedCheck_4865_ == 0)
{
v___x_4860_ = v___x_4849_;
v_isShared_4861_ = v_isSharedCheck_4865_;
goto v_resetjp_4859_;
}
else
{
lean_inc(v_a_4858_);
lean_dec(v___x_4849_);
v___x_4860_ = lean_box(0);
v_isShared_4861_ = v_isSharedCheck_4865_;
goto v_resetjp_4859_;
}
v_resetjp_4859_:
{
lean_object* v___x_4863_; 
if (v_isShared_4861_ == 0)
{
lean_ctor_set_tag(v___x_4860_, 0);
v___x_4863_ = v___x_4860_;
goto v_reusejp_4862_;
}
else
{
lean_object* v_reuseFailAlloc_4864_; 
v_reuseFailAlloc_4864_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4864_, 0, v_a_4858_);
v___x_4863_ = v_reuseFailAlloc_4864_;
goto v_reusejp_4862_;
}
v_reusejp_4862_:
{
v_val_4845_ = v___x_4863_;
goto v___jp_4844_;
}
}
}
v___jp_4844_:
{
lean_object* v___x_4846_; lean_object* v___x_4847_; lean_object* v___x_4848_; 
v___x_4846_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4846_, 0, v_val_4845_);
v___x_4847_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4847_, 0, v___x_4846_);
v___x_4848_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4842_, v___x_4843_, v___x_4847_, v___f_4841_);
return v___x_4848_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_ofIOTask___redArg___boxed(lean_object* v_task_4866_, lean_object* v___y_4867_){
_start:
{
lean_object* v_res_4868_; 
v_res_4868_ = l_Std_Async_Async_ofIOTask___redArg(v_task_4866_);
return v_res_4868_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_ofIOTask(lean_object* v_00_u03b1_4869_, lean_object* v_task_4870_){
_start:
{
lean_object* v___f_4872_; lean_object* v___x_4873_; uint8_t v___x_4874_; lean_object* v_val_4876_; lean_object* v___x_4880_; 
v___f_4872_ = ((lean_object*)(l_Std_Async_Async_ofIOTask___redArg___closed__1));
v___x_4873_ = lean_unsigned_to_nat(0u);
v___x_4874_ = 0;
v___x_4880_ = lean_apply_1(v_task_4870_, lean_box(0));
if (lean_obj_tag(v___x_4880_) == 0)
{
lean_object* v_a_4881_; lean_object* v___x_4883_; uint8_t v_isShared_4884_; uint8_t v_isSharedCheck_4888_; 
v_a_4881_ = lean_ctor_get(v___x_4880_, 0);
v_isSharedCheck_4888_ = !lean_is_exclusive(v___x_4880_);
if (v_isSharedCheck_4888_ == 0)
{
v___x_4883_ = v___x_4880_;
v_isShared_4884_ = v_isSharedCheck_4888_;
goto v_resetjp_4882_;
}
else
{
lean_inc(v_a_4881_);
lean_dec(v___x_4880_);
v___x_4883_ = lean_box(0);
v_isShared_4884_ = v_isSharedCheck_4888_;
goto v_resetjp_4882_;
}
v_resetjp_4882_:
{
lean_object* v___x_4886_; 
if (v_isShared_4884_ == 0)
{
lean_ctor_set_tag(v___x_4883_, 1);
v___x_4886_ = v___x_4883_;
goto v_reusejp_4885_;
}
else
{
lean_object* v_reuseFailAlloc_4887_; 
v_reuseFailAlloc_4887_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4887_, 0, v_a_4881_);
v___x_4886_ = v_reuseFailAlloc_4887_;
goto v_reusejp_4885_;
}
v_reusejp_4885_:
{
v_val_4876_ = v___x_4886_;
goto v___jp_4875_;
}
}
}
else
{
lean_object* v_a_4889_; lean_object* v___x_4891_; uint8_t v_isShared_4892_; uint8_t v_isSharedCheck_4896_; 
v_a_4889_ = lean_ctor_get(v___x_4880_, 0);
v_isSharedCheck_4896_ = !lean_is_exclusive(v___x_4880_);
if (v_isSharedCheck_4896_ == 0)
{
v___x_4891_ = v___x_4880_;
v_isShared_4892_ = v_isSharedCheck_4896_;
goto v_resetjp_4890_;
}
else
{
lean_inc(v_a_4889_);
lean_dec(v___x_4880_);
v___x_4891_ = lean_box(0);
v_isShared_4892_ = v_isSharedCheck_4896_;
goto v_resetjp_4890_;
}
v_resetjp_4890_:
{
lean_object* v___x_4894_; 
if (v_isShared_4892_ == 0)
{
lean_ctor_set_tag(v___x_4891_, 0);
v___x_4894_ = v___x_4891_;
goto v_reusejp_4893_;
}
else
{
lean_object* v_reuseFailAlloc_4895_; 
v_reuseFailAlloc_4895_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4895_, 0, v_a_4889_);
v___x_4894_ = v_reuseFailAlloc_4895_;
goto v_reusejp_4893_;
}
v_reusejp_4893_:
{
v_val_4876_ = v___x_4894_;
goto v___jp_4875_;
}
}
}
v___jp_4875_:
{
lean_object* v___x_4877_; lean_object* v___x_4878_; lean_object* v___x_4879_; 
v___x_4877_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4877_, 0, v_val_4876_);
v___x_4878_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4878_, 0, v___x_4877_);
v___x_4879_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4873_, v___x_4874_, v___x_4878_, v___f_4872_);
return v___x_4879_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_ofIOTask___boxed(lean_object* v_00_u03b1_4897_, lean_object* v_task_4898_, lean_object* v___y_4899_){
_start:
{
lean_object* v_res_4900_; 
v_res_4900_ = l_Std_Async_Async_ofIOTask(v_00_u03b1_4897_, v_task_4898_);
return v_res_4900_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_ofExcept___redArg(lean_object* v_except_4901_){
_start:
{
lean_object* v___x_4903_; 
v___x_4903_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4903_, 0, v_except_4901_);
return v___x_4903_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_ofExcept___redArg___boxed(lean_object* v_except_4904_, lean_object* v___y_4905_){
_start:
{
lean_object* v_res_4906_; 
v_res_4906_ = l_Std_Async_Async_ofExcept___redArg(v_except_4904_);
return v_res_4906_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_ofExcept(lean_object* v_00_u03b1_4907_, lean_object* v_except_4908_){
_start:
{
lean_object* v___x_4910_; 
v___x_4910_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4910_, 0, v_except_4908_);
return v___x_4910_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_ofExcept___boxed(lean_object* v_00_u03b1_4911_, lean_object* v_except_4912_, lean_object* v___y_4913_){
_start:
{
lean_object* v_res_4914_; 
v_res_4914_ = l_Std_Async_Async_ofExcept(v_00_u03b1_4911_, v_except_4912_);
return v_res_4914_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_ofTask___redArg(lean_object* v_task_4915_){
_start:
{
lean_object* v___f_4917_; lean_object* v___x_4918_; uint8_t v___x_4919_; lean_object* v___x_4920_; lean_object* v___x_4921_; 
v___f_4917_ = ((lean_object*)(l_Std_Async_Async_ofIOTask___redArg___closed__0));
v___x_4918_ = lean_unsigned_to_nat(0u);
v___x_4919_ = 0;
v___x_4920_ = lean_task_map(v___f_4917_, v_task_4915_, v___x_4918_, v___x_4919_);
v___x_4921_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4921_, 0, v___x_4920_);
return v___x_4921_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_ofTask___redArg___boxed(lean_object* v_task_4922_, lean_object* v___y_4923_){
_start:
{
lean_object* v_res_4924_; 
v_res_4924_ = l_Std_Async_Async_ofTask___redArg(v_task_4922_);
return v_res_4924_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_ofTask(lean_object* v_00_u03b1_4925_, lean_object* v_task_4926_){
_start:
{
lean_object* v___f_4928_; lean_object* v___x_4929_; uint8_t v___x_4930_; lean_object* v___x_4931_; lean_object* v___x_4932_; 
v___f_4928_ = ((lean_object*)(l_Std_Async_Async_ofIOTask___redArg___closed__0));
v___x_4929_ = lean_unsigned_to_nat(0u);
v___x_4930_ = 0;
v___x_4931_ = lean_task_map(v___f_4928_, v_task_4926_, v___x_4929_, v___x_4930_);
v___x_4932_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4932_, 0, v___x_4931_);
return v___x_4932_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_ofTask___boxed(lean_object* v_00_u03b1_4933_, lean_object* v_task_4934_, lean_object* v___y_4935_){
_start:
{
lean_object* v_res_4936_; 
v_res_4936_ = l_Std_Async_Async_ofTask(v_00_u03b1_4933_, v_task_4934_);
return v_res_4936_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_ofPurePromise___redArg(lean_object* v_task_4937_, lean_object* v_error_4938_){
_start:
{
lean_object* v___f_4940_; lean_object* v___x_4941_; 
v___f_4940_ = lean_alloc_closure((void*)(l_Std_Async_AsyncTask_ofPurePromise___redArg___lam__0), 2, 1);
lean_closure_set(v___f_4940_, 0, v_error_4938_);
v___x_4941_ = lean_apply_1(v_task_4937_, lean_box(0));
if (lean_obj_tag(v___x_4941_) == 0)
{
lean_object* v_a_4942_; lean_object* v___x_4944_; uint8_t v_isShared_4945_; uint8_t v_isSharedCheck_4953_; 
v_a_4942_ = lean_ctor_get(v___x_4941_, 0);
v_isSharedCheck_4953_ = !lean_is_exclusive(v___x_4941_);
if (v_isSharedCheck_4953_ == 0)
{
v___x_4944_ = v___x_4941_;
v_isShared_4945_ = v_isSharedCheck_4953_;
goto v_resetjp_4943_;
}
else
{
lean_inc(v_a_4942_);
lean_dec(v___x_4941_);
v___x_4944_ = lean_box(0);
v_isShared_4945_ = v_isSharedCheck_4953_;
goto v_resetjp_4943_;
}
v_resetjp_4943_:
{
lean_object* v___x_4946_; lean_object* v___x_4947_; uint8_t v___x_4948_; lean_object* v___x_4949_; lean_object* v___x_4951_; 
v___x_4946_ = lean_io_promise_result_opt(v_a_4942_);
lean_dec(v_a_4942_);
v___x_4947_ = lean_unsigned_to_nat(0u);
v___x_4948_ = 0;
v___x_4949_ = lean_task_map(v___f_4940_, v___x_4946_, v___x_4947_, v___x_4948_);
if (v_isShared_4945_ == 0)
{
lean_ctor_set_tag(v___x_4944_, 1);
lean_ctor_set(v___x_4944_, 0, v___x_4949_);
v___x_4951_ = v___x_4944_;
goto v_reusejp_4950_;
}
else
{
lean_object* v_reuseFailAlloc_4952_; 
v_reuseFailAlloc_4952_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4952_, 0, v___x_4949_);
v___x_4951_ = v_reuseFailAlloc_4952_;
goto v_reusejp_4950_;
}
v_reusejp_4950_:
{
return v___x_4951_;
}
}
}
else
{
lean_object* v_a_4954_; lean_object* v___x_4956_; uint8_t v_isShared_4957_; uint8_t v_isSharedCheck_4962_; 
lean_dec_ref(v___f_4940_);
v_a_4954_ = lean_ctor_get(v___x_4941_, 0);
v_isSharedCheck_4962_ = !lean_is_exclusive(v___x_4941_);
if (v_isSharedCheck_4962_ == 0)
{
v___x_4956_ = v___x_4941_;
v_isShared_4957_ = v_isSharedCheck_4962_;
goto v_resetjp_4955_;
}
else
{
lean_inc(v_a_4954_);
lean_dec(v___x_4941_);
v___x_4956_ = lean_box(0);
v_isShared_4957_ = v_isSharedCheck_4962_;
goto v_resetjp_4955_;
}
v_resetjp_4955_:
{
lean_object* v___x_4959_; 
if (v_isShared_4957_ == 0)
{
lean_ctor_set_tag(v___x_4956_, 0);
v___x_4959_ = v___x_4956_;
goto v_reusejp_4958_;
}
else
{
lean_object* v_reuseFailAlloc_4961_; 
v_reuseFailAlloc_4961_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4961_, 0, v_a_4954_);
v___x_4959_ = v_reuseFailAlloc_4961_;
goto v_reusejp_4958_;
}
v_reusejp_4958_:
{
lean_object* v___x_4960_; 
v___x_4960_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4960_, 0, v___x_4959_);
return v___x_4960_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_ofPurePromise___redArg___boxed(lean_object* v_task_4963_, lean_object* v_error_4964_, lean_object* v___y_4965_){
_start:
{
lean_object* v_res_4966_; 
v_res_4966_ = l_Std_Async_Async_ofPurePromise___redArg(v_task_4963_, v_error_4964_);
return v_res_4966_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_ofPurePromise(lean_object* v_00_u03b1_4967_, lean_object* v_task_4968_, lean_object* v_error_4969_){
_start:
{
lean_object* v___f_4971_; lean_object* v___x_4972_; 
v___f_4971_ = lean_alloc_closure((void*)(l_Std_Async_AsyncTask_ofPurePromise___redArg___lam__0), 2, 1);
lean_closure_set(v___f_4971_, 0, v_error_4969_);
v___x_4972_ = lean_apply_1(v_task_4968_, lean_box(0));
if (lean_obj_tag(v___x_4972_) == 0)
{
lean_object* v_a_4973_; lean_object* v___x_4975_; uint8_t v_isShared_4976_; uint8_t v_isSharedCheck_4984_; 
v_a_4973_ = lean_ctor_get(v___x_4972_, 0);
v_isSharedCheck_4984_ = !lean_is_exclusive(v___x_4972_);
if (v_isSharedCheck_4984_ == 0)
{
v___x_4975_ = v___x_4972_;
v_isShared_4976_ = v_isSharedCheck_4984_;
goto v_resetjp_4974_;
}
else
{
lean_inc(v_a_4973_);
lean_dec(v___x_4972_);
v___x_4975_ = lean_box(0);
v_isShared_4976_ = v_isSharedCheck_4984_;
goto v_resetjp_4974_;
}
v_resetjp_4974_:
{
lean_object* v___x_4977_; lean_object* v___x_4978_; uint8_t v___x_4979_; lean_object* v___x_4980_; lean_object* v___x_4982_; 
v___x_4977_ = lean_io_promise_result_opt(v_a_4973_);
lean_dec(v_a_4973_);
v___x_4978_ = lean_unsigned_to_nat(0u);
v___x_4979_ = 0;
v___x_4980_ = lean_task_map(v___f_4971_, v___x_4977_, v___x_4978_, v___x_4979_);
if (v_isShared_4976_ == 0)
{
lean_ctor_set_tag(v___x_4975_, 1);
lean_ctor_set(v___x_4975_, 0, v___x_4980_);
v___x_4982_ = v___x_4975_;
goto v_reusejp_4981_;
}
else
{
lean_object* v_reuseFailAlloc_4983_; 
v_reuseFailAlloc_4983_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4983_, 0, v___x_4980_);
v___x_4982_ = v_reuseFailAlloc_4983_;
goto v_reusejp_4981_;
}
v_reusejp_4981_:
{
return v___x_4982_;
}
}
}
else
{
lean_object* v_a_4985_; lean_object* v___x_4987_; uint8_t v_isShared_4988_; uint8_t v_isSharedCheck_4993_; 
lean_dec_ref(v___f_4971_);
v_a_4985_ = lean_ctor_get(v___x_4972_, 0);
v_isSharedCheck_4993_ = !lean_is_exclusive(v___x_4972_);
if (v_isSharedCheck_4993_ == 0)
{
v___x_4987_ = v___x_4972_;
v_isShared_4988_ = v_isSharedCheck_4993_;
goto v_resetjp_4986_;
}
else
{
lean_inc(v_a_4985_);
lean_dec(v___x_4972_);
v___x_4987_ = lean_box(0);
v_isShared_4988_ = v_isSharedCheck_4993_;
goto v_resetjp_4986_;
}
v_resetjp_4986_:
{
lean_object* v___x_4990_; 
if (v_isShared_4988_ == 0)
{
lean_ctor_set_tag(v___x_4987_, 0);
v___x_4990_ = v___x_4987_;
goto v_reusejp_4989_;
}
else
{
lean_object* v_reuseFailAlloc_4992_; 
v_reuseFailAlloc_4992_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4992_, 0, v_a_4985_);
v___x_4990_ = v_reuseFailAlloc_4992_;
goto v_reusejp_4989_;
}
v_reusejp_4989_:
{
lean_object* v___x_4991_; 
v___x_4991_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4991_, 0, v___x_4990_);
return v___x_4991_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_ofPurePromise___boxed(lean_object* v_00_u03b1_4994_, lean_object* v_task_4995_, lean_object* v_error_4996_, lean_object* v___y_4997_){
_start:
{
lean_object* v_res_4998_; 
v_res_4998_ = l_Std_Async_Async_ofPurePromise(v_00_u03b1_4994_, v_task_4995_, v_error_4996_);
return v_res_4998_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_instMonadAwaitPromise___lam__1(lean_object* v___f_5001_, lean_object* v_00_u03b1_5002_, lean_object* v_t_5003_){
_start:
{
lean_object* v___x_5005_; lean_object* v___x_5006_; uint8_t v___x_5007_; lean_object* v___x_5008_; lean_object* v___x_5009_; 
v___x_5005_ = l_IO_Promise_result_x21___redArg(v_t_5003_);
v___x_5006_ = lean_unsigned_to_nat(0u);
v___x_5007_ = 0;
v___x_5008_ = lean_task_map(v___f_5001_, v___x_5005_, v___x_5006_, v___x_5007_);
v___x_5009_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5009_, 0, v___x_5008_);
return v___x_5009_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_instMonadAwaitPromise___lam__1___boxed(lean_object* v___f_5010_, lean_object* v_00_u03b1_5011_, lean_object* v_t_5012_, lean_object* v___y_5013_){
_start:
{
lean_object* v_res_5014_; 
v_res_5014_ = l_Std_Async_Async_instMonadAwaitPromise___lam__1(v___f_5010_, v_00_u03b1_5011_, v_t_5012_);
lean_dec(v_t_5012_);
return v_res_5014_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_concurrently___redArg___lam__1(lean_object* v_a_5018_, lean_object* v_x_5019_){
_start:
{
if (lean_obj_tag(v_x_5019_) == 0)
{
lean_object* v_a_5021_; lean_object* v___x_5023_; uint8_t v_isShared_5024_; uint8_t v_isSharedCheck_5029_; 
lean_dec(v_a_5018_);
v_a_5021_ = lean_ctor_get(v_x_5019_, 0);
v_isSharedCheck_5029_ = !lean_is_exclusive(v_x_5019_);
if (v_isSharedCheck_5029_ == 0)
{
v___x_5023_ = v_x_5019_;
v_isShared_5024_ = v_isSharedCheck_5029_;
goto v_resetjp_5022_;
}
else
{
lean_inc(v_a_5021_);
lean_dec(v_x_5019_);
v___x_5023_ = lean_box(0);
v_isShared_5024_ = v_isSharedCheck_5029_;
goto v_resetjp_5022_;
}
v_resetjp_5022_:
{
lean_object* v___x_5026_; 
if (v_isShared_5024_ == 0)
{
v___x_5026_ = v___x_5023_;
goto v_reusejp_5025_;
}
else
{
lean_object* v_reuseFailAlloc_5028_; 
v_reuseFailAlloc_5028_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5028_, 0, v_a_5021_);
v___x_5026_ = v_reuseFailAlloc_5028_;
goto v_reusejp_5025_;
}
v_reusejp_5025_:
{
lean_object* v___x_5027_; 
v___x_5027_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5027_, 0, v___x_5026_);
return v___x_5027_;
}
}
}
else
{
lean_object* v_a_5030_; lean_object* v___x_5032_; uint8_t v_isShared_5033_; uint8_t v_isSharedCheck_5039_; 
v_a_5030_ = lean_ctor_get(v_x_5019_, 0);
v_isSharedCheck_5039_ = !lean_is_exclusive(v_x_5019_);
if (v_isSharedCheck_5039_ == 0)
{
v___x_5032_ = v_x_5019_;
v_isShared_5033_ = v_isSharedCheck_5039_;
goto v_resetjp_5031_;
}
else
{
lean_inc(v_a_5030_);
lean_dec(v_x_5019_);
v___x_5032_ = lean_box(0);
v_isShared_5033_ = v_isSharedCheck_5039_;
goto v_resetjp_5031_;
}
v_resetjp_5031_:
{
lean_object* v___x_5034_; lean_object* v___x_5036_; 
v___x_5034_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5034_, 0, v_a_5018_);
lean_ctor_set(v___x_5034_, 1, v_a_5030_);
if (v_isShared_5033_ == 0)
{
lean_ctor_set(v___x_5032_, 0, v___x_5034_);
v___x_5036_ = v___x_5032_;
goto v_reusejp_5035_;
}
else
{
lean_object* v_reuseFailAlloc_5038_; 
v_reuseFailAlloc_5038_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5038_, 0, v___x_5034_);
v___x_5036_ = v_reuseFailAlloc_5038_;
goto v_reusejp_5035_;
}
v_reusejp_5035_:
{
lean_object* v___x_5037_; 
v___x_5037_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5037_, 0, v___x_5036_);
return v___x_5037_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_concurrently___redArg___lam__1___boxed(lean_object* v_a_5040_, lean_object* v_x_5041_, lean_object* v___y_5042_){
_start:
{
lean_object* v_res_5043_; 
v_res_5043_ = l_Std_Async_Async_concurrently___redArg___lam__1(v_a_5040_, v_x_5041_);
return v_res_5043_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_concurrently___redArg___lam__0(lean_object* v_a_5044_, lean_object* v_x_5045_){
_start:
{
if (lean_obj_tag(v_x_5045_) == 0)
{
lean_object* v_a_5047_; lean_object* v___x_5049_; uint8_t v_isShared_5050_; uint8_t v_isSharedCheck_5055_; 
lean_dec_ref(v_a_5044_);
v_a_5047_ = lean_ctor_get(v_x_5045_, 0);
v_isSharedCheck_5055_ = !lean_is_exclusive(v_x_5045_);
if (v_isSharedCheck_5055_ == 0)
{
v___x_5049_ = v_x_5045_;
v_isShared_5050_ = v_isSharedCheck_5055_;
goto v_resetjp_5048_;
}
else
{
lean_inc(v_a_5047_);
lean_dec(v_x_5045_);
v___x_5049_ = lean_box(0);
v_isShared_5050_ = v_isSharedCheck_5055_;
goto v_resetjp_5048_;
}
v_resetjp_5048_:
{
lean_object* v___x_5052_; 
if (v_isShared_5050_ == 0)
{
v___x_5052_ = v___x_5049_;
goto v_reusejp_5051_;
}
else
{
lean_object* v_reuseFailAlloc_5054_; 
v_reuseFailAlloc_5054_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5054_, 0, v_a_5047_);
v___x_5052_ = v_reuseFailAlloc_5054_;
goto v_reusejp_5051_;
}
v_reusejp_5051_:
{
lean_object* v___x_5053_; 
v___x_5053_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5053_, 0, v___x_5052_);
return v___x_5053_;
}
}
}
else
{
lean_object* v_a_5056_; lean_object* v___f_5057_; lean_object* v___x_5058_; uint8_t v___x_5059_; lean_object* v___x_5060_; lean_object* v___x_5061_; 
v_a_5056_ = lean_ctor_get(v_x_5045_, 0);
lean_inc(v_a_5056_);
lean_dec_ref_known(v_x_5045_, 1);
v___f_5057_ = lean_alloc_closure((void*)(l_Std_Async_Async_concurrently___redArg___lam__1___boxed), 3, 1);
lean_closure_set(v___f_5057_, 0, v_a_5056_);
v___x_5058_ = lean_unsigned_to_nat(0u);
v___x_5059_ = 0;
v___x_5060_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5060_, 0, v_a_5044_);
v___x_5061_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5058_, v___x_5059_, v___x_5060_, v___f_5057_);
return v___x_5061_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_concurrently___redArg___lam__0___boxed(lean_object* v_a_5062_, lean_object* v_x_5063_, lean_object* v___y_5064_){
_start:
{
lean_object* v_res_5065_; 
v_res_5065_ = l_Std_Async_Async_concurrently___redArg___lam__0(v_a_5062_, v_x_5063_);
return v_res_5065_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_concurrently___redArg___lam__2(lean_object* v_a_5066_, lean_object* v_x_5067_){
_start:
{
if (lean_obj_tag(v_x_5067_) == 0)
{
lean_object* v_a_5069_; lean_object* v___x_5071_; uint8_t v_isShared_5072_; uint8_t v_isSharedCheck_5077_; 
lean_dec_ref(v_a_5066_);
v_a_5069_ = lean_ctor_get(v_x_5067_, 0);
v_isSharedCheck_5077_ = !lean_is_exclusive(v_x_5067_);
if (v_isSharedCheck_5077_ == 0)
{
v___x_5071_ = v_x_5067_;
v_isShared_5072_ = v_isSharedCheck_5077_;
goto v_resetjp_5070_;
}
else
{
lean_inc(v_a_5069_);
lean_dec(v_x_5067_);
v___x_5071_ = lean_box(0);
v_isShared_5072_ = v_isSharedCheck_5077_;
goto v_resetjp_5070_;
}
v_resetjp_5070_:
{
lean_object* v___x_5074_; 
if (v_isShared_5072_ == 0)
{
v___x_5074_ = v___x_5071_;
goto v_reusejp_5073_;
}
else
{
lean_object* v_reuseFailAlloc_5076_; 
v_reuseFailAlloc_5076_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5076_, 0, v_a_5069_);
v___x_5074_ = v_reuseFailAlloc_5076_;
goto v_reusejp_5073_;
}
v_reusejp_5073_:
{
lean_object* v___x_5075_; 
v___x_5075_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5075_, 0, v___x_5074_);
return v___x_5075_;
}
}
}
else
{
lean_object* v_a_5078_; lean_object* v___f_5079_; lean_object* v___x_5080_; uint8_t v___x_5081_; lean_object* v___x_5082_; lean_object* v___x_5083_; 
v_a_5078_ = lean_ctor_get(v_x_5067_, 0);
lean_inc(v_a_5078_);
lean_dec_ref_known(v_x_5067_, 1);
v___f_5079_ = lean_alloc_closure((void*)(l_Std_Async_Async_concurrently___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_5079_, 0, v_a_5078_);
v___x_5080_ = lean_unsigned_to_nat(0u);
v___x_5081_ = 0;
v___x_5082_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5082_, 0, v_a_5066_);
v___x_5083_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5080_, v___x_5081_, v___x_5082_, v___f_5079_);
return v___x_5083_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_concurrently___redArg___lam__2___boxed(lean_object* v_a_5084_, lean_object* v_x_5085_, lean_object* v___y_5086_){
_start:
{
lean_object* v_res_5087_; 
v_res_5087_ = l_Std_Async_Async_concurrently___redArg___lam__2(v_a_5084_, v_x_5085_);
return v_res_5087_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_concurrently___redArg___lam__3(lean_object* v_y_5088_, lean_object* v_prio_5089_, lean_object* v___f_5090_, lean_object* v_x_5091_){
_start:
{
if (lean_obj_tag(v_x_5091_) == 0)
{
lean_object* v_a_5093_; lean_object* v___x_5095_; uint8_t v_isShared_5096_; uint8_t v_isSharedCheck_5101_; 
lean_dec_ref(v___f_5090_);
lean_dec(v_prio_5089_);
lean_dec_ref(v_y_5088_);
v_a_5093_ = lean_ctor_get(v_x_5091_, 0);
v_isSharedCheck_5101_ = !lean_is_exclusive(v_x_5091_);
if (v_isSharedCheck_5101_ == 0)
{
v___x_5095_ = v_x_5091_;
v_isShared_5096_ = v_isSharedCheck_5101_;
goto v_resetjp_5094_;
}
else
{
lean_inc(v_a_5093_);
lean_dec(v_x_5091_);
v___x_5095_ = lean_box(0);
v_isShared_5096_ = v_isSharedCheck_5101_;
goto v_resetjp_5094_;
}
v_resetjp_5094_:
{
lean_object* v___x_5098_; 
if (v_isShared_5096_ == 0)
{
v___x_5098_ = v___x_5095_;
goto v_reusejp_5097_;
}
else
{
lean_object* v_reuseFailAlloc_5100_; 
v_reuseFailAlloc_5100_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5100_, 0, v_a_5093_);
v___x_5098_ = v_reuseFailAlloc_5100_;
goto v_reusejp_5097_;
}
v_reusejp_5097_:
{
lean_object* v___x_5099_; 
v___x_5099_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5099_, 0, v___x_5098_);
return v___x_5099_;
}
}
}
else
{
lean_object* v_a_5102_; lean_object* v___x_5104_; uint8_t v_isShared_5105_; uint8_t v_isSharedCheck_5119_; 
v_a_5102_ = lean_ctor_get(v_x_5091_, 0);
v_isSharedCheck_5119_ = !lean_is_exclusive(v_x_5091_);
if (v_isSharedCheck_5119_ == 0)
{
v___x_5104_ = v_x_5091_;
v_isShared_5105_ = v_isSharedCheck_5119_;
goto v_resetjp_5103_;
}
else
{
lean_inc(v_a_5102_);
lean_dec(v_x_5091_);
v___x_5104_ = lean_box(0);
v_isShared_5105_ = v_isSharedCheck_5119_;
goto v_resetjp_5103_;
}
v_resetjp_5103_:
{
lean_object* v___f_5106_; lean_object* v___x_5107_; uint8_t v___x_5108_; lean_object* v___x_5109_; lean_object* v___x_5110_; lean_object* v___x_5111_; uint8_t v___x_5112_; lean_object* v___x_5113_; lean_object* v___x_5115_; 
v___f_5106_ = lean_alloc_closure((void*)(l_Std_Async_Async_concurrently___redArg___lam__2___boxed), 3, 1);
lean_closure_set(v___f_5106_, 0, v_a_5102_);
v___x_5107_ = lean_unsigned_to_nat(0u);
v___x_5108_ = 0;
v___x_5109_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_toBaseAsync___boxed), 4, 3);
lean_closure_set(v___x_5109_, 0, lean_box(0));
lean_closure_set(v___x_5109_, 1, lean_box(0));
lean_closure_set(v___x_5109_, 2, v_y_5088_);
v___x_5110_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_toRawBaseIO___boxed), 3, 2);
lean_closure_set(v___x_5110_, 0, lean_box(0));
lean_closure_set(v___x_5110_, 1, v___x_5109_);
v___x_5111_ = lean_io_as_task(v___x_5110_, v_prio_5089_);
v___x_5112_ = 1;
v___x_5113_ = lean_task_bind(v___x_5111_, v___f_5090_, v___x_5107_, v___x_5112_);
if (v_isShared_5105_ == 0)
{
lean_ctor_set(v___x_5104_, 0, v___x_5113_);
v___x_5115_ = v___x_5104_;
goto v_reusejp_5114_;
}
else
{
lean_object* v_reuseFailAlloc_5118_; 
v_reuseFailAlloc_5118_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5118_, 0, v___x_5113_);
v___x_5115_ = v_reuseFailAlloc_5118_;
goto v_reusejp_5114_;
}
v_reusejp_5114_:
{
lean_object* v___x_5116_; lean_object* v___x_5117_; 
v___x_5116_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5116_, 0, v___x_5115_);
v___x_5117_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5107_, v___x_5108_, v___x_5116_, v___f_5106_);
return v___x_5117_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_concurrently___redArg___lam__3___boxed(lean_object* v_y_5120_, lean_object* v_prio_5121_, lean_object* v___f_5122_, lean_object* v_x_5123_, lean_object* v___y_5124_){
_start:
{
lean_object* v_res_5125_; 
v_res_5125_ = l_Std_Async_Async_concurrently___redArg___lam__3(v_y_5120_, v_prio_5121_, v___f_5122_, v_x_5123_);
return v_res_5125_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_concurrently___redArg(lean_object* v_x_5126_, lean_object* v_y_5127_, lean_object* v_prio_5128_){
_start:
{
lean_object* v___f_5130_; lean_object* v___f_5131_; lean_object* v___x_5132_; uint8_t v___x_5133_; lean_object* v___x_5134_; lean_object* v___x_5135_; lean_object* v___x_5136_; uint8_t v___x_5137_; lean_object* v___x_5138_; lean_object* v___x_5139_; lean_object* v___x_5140_; lean_object* v___x_5141_; 
v___f_5130_ = ((lean_object*)(l_Std_Async_EAsync_instMonadAsyncAsyncTaskError___closed__0));
lean_inc(v_prio_5128_);
v___f_5131_ = lean_alloc_closure((void*)(l_Std_Async_Async_concurrently___redArg___lam__3___boxed), 5, 3);
lean_closure_set(v___f_5131_, 0, v_y_5127_);
lean_closure_set(v___f_5131_, 1, v_prio_5128_);
lean_closure_set(v___f_5131_, 2, v___f_5130_);
v___x_5132_ = lean_unsigned_to_nat(0u);
v___x_5133_ = 0;
v___x_5134_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_toBaseAsync___boxed), 4, 3);
lean_closure_set(v___x_5134_, 0, lean_box(0));
lean_closure_set(v___x_5134_, 1, lean_box(0));
lean_closure_set(v___x_5134_, 2, v_x_5126_);
v___x_5135_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_toRawBaseIO___boxed), 3, 2);
lean_closure_set(v___x_5135_, 0, lean_box(0));
lean_closure_set(v___x_5135_, 1, v___x_5134_);
v___x_5136_ = lean_io_as_task(v___x_5135_, v_prio_5128_);
v___x_5137_ = 1;
v___x_5138_ = lean_task_bind(v___x_5136_, v___f_5130_, v___x_5132_, v___x_5137_);
v___x_5139_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5139_, 0, v___x_5138_);
v___x_5140_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5140_, 0, v___x_5139_);
v___x_5141_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5132_, v___x_5133_, v___x_5140_, v___f_5131_);
return v___x_5141_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_concurrently___redArg___boxed(lean_object* v_x_5142_, lean_object* v_y_5143_, lean_object* v_prio_5144_, lean_object* v___y_5145_){
_start:
{
lean_object* v_res_5146_; 
v_res_5146_ = l_Std_Async_Async_concurrently___redArg(v_x_5142_, v_y_5143_, v_prio_5144_);
return v_res_5146_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_concurrently(lean_object* v_00_u03b1_5147_, lean_object* v_00_u03b2_5148_, lean_object* v_x_5149_, lean_object* v_y_5150_, lean_object* v_prio_5151_){
_start:
{
lean_object* v___f_5153_; lean_object* v___f_5154_; lean_object* v___x_5155_; uint8_t v___x_5156_; lean_object* v___x_5157_; lean_object* v___x_5158_; lean_object* v___x_5159_; uint8_t v___x_5160_; lean_object* v___x_5161_; lean_object* v___x_5162_; lean_object* v___x_5163_; lean_object* v___x_5164_; 
v___f_5153_ = ((lean_object*)(l_Std_Async_EAsync_instMonadAsyncAsyncTaskError___closed__0));
lean_inc(v_prio_5151_);
v___f_5154_ = lean_alloc_closure((void*)(l_Std_Async_Async_concurrently___redArg___lam__3___boxed), 5, 3);
lean_closure_set(v___f_5154_, 0, v_y_5150_);
lean_closure_set(v___f_5154_, 1, v_prio_5151_);
lean_closure_set(v___f_5154_, 2, v___f_5153_);
v___x_5155_ = lean_unsigned_to_nat(0u);
v___x_5156_ = 0;
v___x_5157_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_toBaseAsync___boxed), 4, 3);
lean_closure_set(v___x_5157_, 0, lean_box(0));
lean_closure_set(v___x_5157_, 1, lean_box(0));
lean_closure_set(v___x_5157_, 2, v_x_5149_);
v___x_5158_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_toRawBaseIO___boxed), 3, 2);
lean_closure_set(v___x_5158_, 0, lean_box(0));
lean_closure_set(v___x_5158_, 1, v___x_5157_);
v___x_5159_ = lean_io_as_task(v___x_5158_, v_prio_5151_);
v___x_5160_ = 1;
v___x_5161_ = lean_task_bind(v___x_5159_, v___f_5153_, v___x_5155_, v___x_5160_);
v___x_5162_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5162_, 0, v___x_5161_);
v___x_5163_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5163_, 0, v___x_5162_);
v___x_5164_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5155_, v___x_5156_, v___x_5163_, v___f_5154_);
return v___x_5164_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_concurrently___boxed(lean_object* v_00_u03b1_5165_, lean_object* v_00_u03b2_5166_, lean_object* v_x_5167_, lean_object* v_y_5168_, lean_object* v_prio_5169_, lean_object* v___y_5170_){
_start:
{
lean_object* v_res_5171_; 
v_res_5171_ = l_Std_Async_Async_concurrently(v_00_u03b1_5165_, v_00_u03b2_5166_, v_x_5167_, v_y_5168_, v_prio_5169_);
return v_res_5171_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_race___redArg___lam__1(lean_object* v_x_5172_){
_start:
{
if (lean_obj_tag(v_x_5172_) == 0)
{
lean_object* v_a_5174_; lean_object* v___x_5176_; uint8_t v_isShared_5177_; uint8_t v_isSharedCheck_5182_; 
v_a_5174_ = lean_ctor_get(v_x_5172_, 0);
v_isSharedCheck_5182_ = !lean_is_exclusive(v_x_5172_);
if (v_isSharedCheck_5182_ == 0)
{
v___x_5176_ = v_x_5172_;
v_isShared_5177_ = v_isSharedCheck_5182_;
goto v_resetjp_5175_;
}
else
{
lean_inc(v_a_5174_);
lean_dec(v_x_5172_);
v___x_5176_ = lean_box(0);
v_isShared_5177_ = v_isSharedCheck_5182_;
goto v_resetjp_5175_;
}
v_resetjp_5175_:
{
lean_object* v___x_5179_; 
if (v_isShared_5177_ == 0)
{
v___x_5179_ = v___x_5176_;
goto v_reusejp_5178_;
}
else
{
lean_object* v_reuseFailAlloc_5181_; 
v_reuseFailAlloc_5181_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5181_, 0, v_a_5174_);
v___x_5179_ = v_reuseFailAlloc_5181_;
goto v_reusejp_5178_;
}
v_reusejp_5178_:
{
lean_object* v___x_5180_; 
v___x_5180_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5180_, 0, v___x_5179_);
return v___x_5180_;
}
}
}
else
{
lean_object* v_a_5183_; lean_object* v___x_5184_; 
v_a_5183_ = lean_ctor_get(v_x_5172_, 0);
lean_inc(v_a_5183_);
lean_dec_ref_known(v_x_5172_, 1);
v___x_5184_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5184_, 0, v_a_5183_);
return v___x_5184_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_race___redArg___lam__1___boxed(lean_object* v_x_5185_, lean_object* v___y_5186_){
_start:
{
lean_object* v_res_5187_; 
v_res_5187_ = l_Std_Async_Async_race___redArg___lam__1(v_x_5185_);
return v_res_5187_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_race___redArg___lam__0(lean_object* v_a_5188_){
_start:
{
lean_object* v___x_5189_; 
v___x_5189_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5189_, 0, v_a_5188_);
return v___x_5189_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_race___redArg___lam__3(lean_object* v_a_5190_, lean_object* v_value_5191_){
_start:
{
lean_object* v___x_5193_; 
v___x_5193_ = lean_io_promise_resolve(v_value_5191_, v_a_5190_);
return v___x_5193_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_race___redArg___lam__3___boxed(lean_object* v_a_5194_, lean_object* v_value_5195_, lean_object* v___y_5196_){
_start:
{
lean_object* v_res_5197_; 
v_res_5197_ = l_Std_Async_Async_race___redArg___lam__3(v_a_5194_, v_value_5195_);
lean_dec(v_a_5194_);
return v_res_5197_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_race___redArg___lam__2(lean_object* v_a_5198_, lean_object* v___f_5199_, lean_object* v___f_5200_, lean_object* v_x_5201_){
_start:
{
if (lean_obj_tag(v_x_5201_) == 0)
{
lean_object* v_a_5203_; lean_object* v___x_5205_; uint8_t v_isShared_5206_; uint8_t v_isSharedCheck_5211_; 
lean_dec_ref(v___f_5200_);
lean_dec_ref(v___f_5199_);
v_a_5203_ = lean_ctor_get(v_x_5201_, 0);
v_isSharedCheck_5211_ = !lean_is_exclusive(v_x_5201_);
if (v_isSharedCheck_5211_ == 0)
{
v___x_5205_ = v_x_5201_;
v_isShared_5206_ = v_isSharedCheck_5211_;
goto v_resetjp_5204_;
}
else
{
lean_inc(v_a_5203_);
lean_dec(v_x_5201_);
v___x_5205_ = lean_box(0);
v_isShared_5206_ = v_isSharedCheck_5211_;
goto v_resetjp_5204_;
}
v_resetjp_5204_:
{
lean_object* v___x_5208_; 
if (v_isShared_5206_ == 0)
{
v___x_5208_ = v___x_5205_;
goto v_reusejp_5207_;
}
else
{
lean_object* v_reuseFailAlloc_5210_; 
v_reuseFailAlloc_5210_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5210_, 0, v_a_5203_);
v___x_5208_ = v_reuseFailAlloc_5210_;
goto v_reusejp_5207_;
}
v_reusejp_5207_:
{
lean_object* v___x_5209_; 
v___x_5209_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5209_, 0, v___x_5208_);
return v___x_5209_;
}
}
}
else
{
lean_object* v___x_5212_; uint8_t v___x_5213_; lean_object* v___x_5214_; lean_object* v___x_5215_; lean_object* v___x_5216_; lean_object* v___x_5217_; 
lean_dec_ref_known(v_x_5201_, 1);
v___x_5212_ = lean_unsigned_to_nat(0u);
v___x_5213_ = 0;
v___x_5214_ = l_IO_Promise_result_x21___redArg(v_a_5198_);
v___x_5215_ = lean_task_map(v___f_5199_, v___x_5214_, v___x_5212_, v___x_5213_);
v___x_5216_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5216_, 0, v___x_5215_);
v___x_5217_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5212_, v___x_5213_, v___x_5216_, v___f_5200_);
return v___x_5217_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_race___redArg___lam__2___boxed(lean_object* v_a_5218_, lean_object* v___f_5219_, lean_object* v___f_5220_, lean_object* v_x_5221_, lean_object* v___y_5222_){
_start:
{
lean_object* v_res_5223_; 
v_res_5223_ = l_Std_Async_Async_race___redArg___lam__2(v_a_5218_, v___f_5219_, v___f_5220_, v_x_5221_);
lean_dec(v_a_5218_);
return v_res_5223_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_race___redArg___lam__4(lean_object* v_a_5224_, lean_object* v___x_5225_, lean_object* v___x_5226_, uint8_t v___x_5227_, lean_object* v___f_5228_, lean_object* v_x_5229_){
_start:
{
if (lean_obj_tag(v_x_5229_) == 0)
{
lean_object* v_a_5231_; lean_object* v___x_5233_; uint8_t v_isShared_5234_; uint8_t v_isSharedCheck_5239_; 
lean_dec_ref(v___f_5228_);
lean_dec(v___x_5226_);
lean_dec_ref(v___x_5225_);
lean_dec_ref(v_a_5224_);
v_a_5231_ = lean_ctor_get(v_x_5229_, 0);
v_isSharedCheck_5239_ = !lean_is_exclusive(v_x_5229_);
if (v_isSharedCheck_5239_ == 0)
{
v___x_5233_ = v_x_5229_;
v_isShared_5234_ = v_isSharedCheck_5239_;
goto v_resetjp_5232_;
}
else
{
lean_inc(v_a_5231_);
lean_dec(v_x_5229_);
v___x_5233_ = lean_box(0);
v_isShared_5234_ = v_isSharedCheck_5239_;
goto v_resetjp_5232_;
}
v_resetjp_5232_:
{
lean_object* v___x_5236_; 
if (v_isShared_5234_ == 0)
{
v___x_5236_ = v___x_5233_;
goto v_reusejp_5235_;
}
else
{
lean_object* v_reuseFailAlloc_5238_; 
v_reuseFailAlloc_5238_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5238_, 0, v_a_5231_);
v___x_5236_ = v_reuseFailAlloc_5238_;
goto v_reusejp_5235_;
}
v_reusejp_5235_:
{
lean_object* v___x_5237_; 
v___x_5237_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5237_, 0, v___x_5236_);
return v___x_5237_;
}
}
}
else
{
lean_object* v___x_5241_; uint8_t v_isShared_5242_; uint8_t v_isSharedCheck_5249_; 
v_isSharedCheck_5249_ = !lean_is_exclusive(v_x_5229_);
if (v_isSharedCheck_5249_ == 0)
{
lean_object* v_unused_5250_; 
v_unused_5250_ = lean_ctor_get(v_x_5229_, 0);
lean_dec(v_unused_5250_);
v___x_5241_ = v_x_5229_;
v_isShared_5242_ = v_isSharedCheck_5249_;
goto v_resetjp_5240_;
}
else
{
lean_dec(v_x_5229_);
v___x_5241_ = lean_box(0);
v_isShared_5242_ = v_isSharedCheck_5249_;
goto v_resetjp_5240_;
}
v_resetjp_5240_:
{
lean_object* v___x_5243_; lean_object* v___x_5245_; 
lean_inc(v___x_5226_);
v___x_5243_ = l_BaseIO_chainTask___redArg(v_a_5224_, v___x_5225_, v___x_5226_, v___x_5227_);
if (v_isShared_5242_ == 0)
{
lean_ctor_set(v___x_5241_, 0, v___x_5243_);
v___x_5245_ = v___x_5241_;
goto v_reusejp_5244_;
}
else
{
lean_object* v_reuseFailAlloc_5248_; 
v_reuseFailAlloc_5248_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5248_, 0, v___x_5243_);
v___x_5245_ = v_reuseFailAlloc_5248_;
goto v_reusejp_5244_;
}
v_reusejp_5244_:
{
lean_object* v___x_5246_; lean_object* v___x_5247_; 
v___x_5246_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5246_, 0, v___x_5245_);
v___x_5247_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5226_, v___x_5227_, v___x_5246_, v___f_5228_);
return v___x_5247_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_race___redArg___lam__4___boxed(lean_object* v_a_5251_, lean_object* v___x_5252_, lean_object* v___x_5253_, lean_object* v___x_5254_, lean_object* v___f_5255_, lean_object* v_x_5256_, lean_object* v___y_5257_){
_start:
{
uint8_t v___x_1453__boxed_5258_; lean_object* v_res_5259_; 
v___x_1453__boxed_5258_ = lean_unbox(v___x_5254_);
v_res_5259_ = l_Std_Async_Async_race___redArg___lam__4(v_a_5251_, v___x_5252_, v___x_5253_, v___x_1453__boxed_5258_, v___f_5255_, v_x_5256_);
return v_res_5259_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_race___redArg___lam__5(lean_object* v___f_5260_, lean_object* v___f_5261_, lean_object* v___f_5262_, lean_object* v_a_5263_, lean_object* v_x_5264_){
_start:
{
if (lean_obj_tag(v_x_5264_) == 0)
{
lean_object* v_a_5266_; lean_object* v___x_5268_; uint8_t v_isShared_5269_; uint8_t v_isSharedCheck_5274_; 
lean_dec_ref(v_a_5263_);
lean_dec_ref(v___f_5262_);
lean_dec_ref(v___f_5261_);
lean_dec(v___f_5260_);
v_a_5266_ = lean_ctor_get(v_x_5264_, 0);
v_isSharedCheck_5274_ = !lean_is_exclusive(v_x_5264_);
if (v_isSharedCheck_5274_ == 0)
{
v___x_5268_ = v_x_5264_;
v_isShared_5269_ = v_isSharedCheck_5274_;
goto v_resetjp_5267_;
}
else
{
lean_inc(v_a_5266_);
lean_dec(v_x_5264_);
v___x_5268_ = lean_box(0);
v_isShared_5269_ = v_isSharedCheck_5274_;
goto v_resetjp_5267_;
}
v_resetjp_5267_:
{
lean_object* v___x_5271_; 
if (v_isShared_5269_ == 0)
{
v___x_5271_ = v___x_5268_;
goto v_reusejp_5270_;
}
else
{
lean_object* v_reuseFailAlloc_5273_; 
v_reuseFailAlloc_5273_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5273_, 0, v_a_5266_);
v___x_5271_ = v_reuseFailAlloc_5273_;
goto v_reusejp_5270_;
}
v_reusejp_5270_:
{
lean_object* v___x_5272_; 
v___x_5272_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5272_, 0, v___x_5271_);
return v___x_5272_;
}
}
}
else
{
lean_object* v_a_5275_; lean_object* v___x_5277_; uint8_t v_isShared_5278_; uint8_t v_isSharedCheck_5291_; 
v_a_5275_ = lean_ctor_get(v_x_5264_, 0);
v_isSharedCheck_5291_ = !lean_is_exclusive(v_x_5264_);
if (v_isSharedCheck_5291_ == 0)
{
v___x_5277_ = v_x_5264_;
v_isShared_5278_ = v_isSharedCheck_5291_;
goto v_resetjp_5276_;
}
else
{
lean_inc(v_a_5275_);
lean_dec(v_x_5264_);
v___x_5277_ = lean_box(0);
v_isShared_5278_ = v_isSharedCheck_5291_;
goto v_resetjp_5276_;
}
v_resetjp_5276_:
{
lean_object* v___x_5279_; lean_object* v___x_5280_; lean_object* v___x_5281_; uint8_t v___x_5282_; lean_object* v___x_5283_; lean_object* v___f_5284_; lean_object* v___x_5285_; lean_object* v___x_5287_; 
v___x_5279_ = lean_alloc_closure((void*)(l_liftM), 5, 4);
lean_closure_set(v___x_5279_, 0, lean_box(0));
lean_closure_set(v___x_5279_, 1, lean_box(0));
lean_closure_set(v___x_5279_, 2, v___f_5260_);
lean_closure_set(v___x_5279_, 3, lean_box(0));
v___x_5280_ = lean_alloc_closure((void*)(l_Function_comp), 6, 5);
lean_closure_set(v___x_5280_, 0, lean_box(0));
lean_closure_set(v___x_5280_, 1, lean_box(0));
lean_closure_set(v___x_5280_, 2, lean_box(0));
lean_closure_set(v___x_5280_, 3, v___x_5279_);
lean_closure_set(v___x_5280_, 4, v___f_5261_);
v___x_5281_ = lean_unsigned_to_nat(0u);
v___x_5282_ = 0;
v___x_5283_ = lean_box(v___x_5282_);
lean_inc_ref(v___x_5280_);
v___f_5284_ = lean_alloc_closure((void*)(l_Std_Async_Async_race___redArg___lam__4___boxed), 7, 5);
lean_closure_set(v___f_5284_, 0, v_a_5275_);
lean_closure_set(v___f_5284_, 1, v___x_5280_);
lean_closure_set(v___f_5284_, 2, v___x_5281_);
lean_closure_set(v___f_5284_, 3, v___x_5283_);
lean_closure_set(v___f_5284_, 4, v___f_5262_);
v___x_5285_ = l_BaseIO_chainTask___redArg(v_a_5263_, v___x_5280_, v___x_5281_, v___x_5282_);
if (v_isShared_5278_ == 0)
{
lean_ctor_set(v___x_5277_, 0, v___x_5285_);
v___x_5287_ = v___x_5277_;
goto v_reusejp_5286_;
}
else
{
lean_object* v_reuseFailAlloc_5290_; 
v_reuseFailAlloc_5290_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5290_, 0, v___x_5285_);
v___x_5287_ = v_reuseFailAlloc_5290_;
goto v_reusejp_5286_;
}
v_reusejp_5286_:
{
lean_object* v___x_5288_; lean_object* v___x_5289_; 
v___x_5288_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5288_, 0, v___x_5287_);
v___x_5289_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5281_, v___x_5282_, v___x_5288_, v___f_5284_);
return v___x_5289_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_race___redArg___lam__5___boxed(lean_object* v___f_5292_, lean_object* v___f_5293_, lean_object* v___f_5294_, lean_object* v_a_5295_, lean_object* v_x_5296_, lean_object* v___y_5297_){
_start:
{
lean_object* v_res_5298_; 
v_res_5298_ = l_Std_Async_Async_race___redArg___lam__5(v___f_5292_, v___f_5293_, v___f_5294_, v_a_5295_, v_x_5296_);
return v_res_5298_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_race___redArg___lam__6(lean_object* v___f_5299_, lean_object* v___f_5300_, lean_object* v___f_5301_, lean_object* v_y_5302_, lean_object* v_prio_5303_, lean_object* v___f_5304_, lean_object* v_x_5305_){
_start:
{
if (lean_obj_tag(v_x_5305_) == 0)
{
lean_object* v_a_5307_; lean_object* v___x_5309_; uint8_t v_isShared_5310_; uint8_t v_isSharedCheck_5315_; 
lean_dec_ref(v___f_5304_);
lean_dec(v_prio_5303_);
lean_dec_ref(v_y_5302_);
lean_dec_ref(v___f_5301_);
lean_dec_ref(v___f_5300_);
lean_dec(v___f_5299_);
v_a_5307_ = lean_ctor_get(v_x_5305_, 0);
v_isSharedCheck_5315_ = !lean_is_exclusive(v_x_5305_);
if (v_isSharedCheck_5315_ == 0)
{
v___x_5309_ = v_x_5305_;
v_isShared_5310_ = v_isSharedCheck_5315_;
goto v_resetjp_5308_;
}
else
{
lean_inc(v_a_5307_);
lean_dec(v_x_5305_);
v___x_5309_ = lean_box(0);
v_isShared_5310_ = v_isSharedCheck_5315_;
goto v_resetjp_5308_;
}
v_resetjp_5308_:
{
lean_object* v___x_5312_; 
if (v_isShared_5310_ == 0)
{
v___x_5312_ = v___x_5309_;
goto v_reusejp_5311_;
}
else
{
lean_object* v_reuseFailAlloc_5314_; 
v_reuseFailAlloc_5314_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5314_, 0, v_a_5307_);
v___x_5312_ = v_reuseFailAlloc_5314_;
goto v_reusejp_5311_;
}
v_reusejp_5311_:
{
lean_object* v___x_5313_; 
v___x_5313_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5313_, 0, v___x_5312_);
return v___x_5313_;
}
}
}
else
{
lean_object* v_a_5316_; lean_object* v___x_5318_; uint8_t v_isShared_5319_; uint8_t v_isSharedCheck_5333_; 
v_a_5316_ = lean_ctor_get(v_x_5305_, 0);
v_isSharedCheck_5333_ = !lean_is_exclusive(v_x_5305_);
if (v_isSharedCheck_5333_ == 0)
{
v___x_5318_ = v_x_5305_;
v_isShared_5319_ = v_isSharedCheck_5333_;
goto v_resetjp_5317_;
}
else
{
lean_inc(v_a_5316_);
lean_dec(v_x_5305_);
v___x_5318_ = lean_box(0);
v_isShared_5319_ = v_isSharedCheck_5333_;
goto v_resetjp_5317_;
}
v_resetjp_5317_:
{
lean_object* v___f_5320_; lean_object* v___x_5321_; uint8_t v___x_5322_; lean_object* v___x_5323_; lean_object* v___x_5324_; lean_object* v___x_5325_; uint8_t v___x_5326_; lean_object* v___x_5327_; lean_object* v___x_5329_; 
v___f_5320_ = lean_alloc_closure((void*)(l_Std_Async_Async_race___redArg___lam__5___boxed), 6, 4);
lean_closure_set(v___f_5320_, 0, v___f_5299_);
lean_closure_set(v___f_5320_, 1, v___f_5300_);
lean_closure_set(v___f_5320_, 2, v___f_5301_);
lean_closure_set(v___f_5320_, 3, v_a_5316_);
v___x_5321_ = lean_unsigned_to_nat(0u);
v___x_5322_ = 0;
v___x_5323_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_toBaseAsync___boxed), 4, 3);
lean_closure_set(v___x_5323_, 0, lean_box(0));
lean_closure_set(v___x_5323_, 1, lean_box(0));
lean_closure_set(v___x_5323_, 2, v_y_5302_);
v___x_5324_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_toRawBaseIO___boxed), 3, 2);
lean_closure_set(v___x_5324_, 0, lean_box(0));
lean_closure_set(v___x_5324_, 1, v___x_5323_);
v___x_5325_ = lean_io_as_task(v___x_5324_, v_prio_5303_);
v___x_5326_ = 1;
v___x_5327_ = lean_task_bind(v___x_5325_, v___f_5304_, v___x_5321_, v___x_5326_);
if (v_isShared_5319_ == 0)
{
lean_ctor_set(v___x_5318_, 0, v___x_5327_);
v___x_5329_ = v___x_5318_;
goto v_reusejp_5328_;
}
else
{
lean_object* v_reuseFailAlloc_5332_; 
v_reuseFailAlloc_5332_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5332_, 0, v___x_5327_);
v___x_5329_ = v_reuseFailAlloc_5332_;
goto v_reusejp_5328_;
}
v_reusejp_5328_:
{
lean_object* v___x_5330_; lean_object* v___x_5331_; 
v___x_5330_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5330_, 0, v___x_5329_);
v___x_5331_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5321_, v___x_5322_, v___x_5330_, v___f_5320_);
return v___x_5331_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_race___redArg___lam__6___boxed(lean_object* v___f_5334_, lean_object* v___f_5335_, lean_object* v___f_5336_, lean_object* v_y_5337_, lean_object* v_prio_5338_, lean_object* v___f_5339_, lean_object* v_x_5340_, lean_object* v___y_5341_){
_start:
{
lean_object* v_res_5342_; 
v_res_5342_ = l_Std_Async_Async_race___redArg___lam__6(v___f_5334_, v___f_5335_, v___f_5336_, v_y_5337_, v_prio_5338_, v___f_5339_, v_x_5340_);
return v_res_5342_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_race___redArg___lam__7(lean_object* v___f_5343_, lean_object* v___f_5344_, lean_object* v___f_5345_, lean_object* v_y_5346_, lean_object* v_prio_5347_, lean_object* v___f_5348_, lean_object* v_x_5349_, lean_object* v___f_5350_, lean_object* v_x_5351_){
_start:
{
if (lean_obj_tag(v_x_5351_) == 0)
{
lean_object* v_a_5353_; lean_object* v___x_5355_; uint8_t v_isShared_5356_; uint8_t v_isSharedCheck_5361_; 
lean_dec_ref(v___f_5350_);
lean_dec_ref(v_x_5349_);
lean_dec_ref(v___f_5348_);
lean_dec(v_prio_5347_);
lean_dec_ref(v_y_5346_);
lean_dec(v___f_5345_);
lean_dec_ref(v___f_5344_);
lean_dec_ref(v___f_5343_);
v_a_5353_ = lean_ctor_get(v_x_5351_, 0);
v_isSharedCheck_5361_ = !lean_is_exclusive(v_x_5351_);
if (v_isSharedCheck_5361_ == 0)
{
v___x_5355_ = v_x_5351_;
v_isShared_5356_ = v_isSharedCheck_5361_;
goto v_resetjp_5354_;
}
else
{
lean_inc(v_a_5353_);
lean_dec(v_x_5351_);
v___x_5355_ = lean_box(0);
v_isShared_5356_ = v_isSharedCheck_5361_;
goto v_resetjp_5354_;
}
v_resetjp_5354_:
{
lean_object* v___x_5358_; 
if (v_isShared_5356_ == 0)
{
v___x_5358_ = v___x_5355_;
goto v_reusejp_5357_;
}
else
{
lean_object* v_reuseFailAlloc_5360_; 
v_reuseFailAlloc_5360_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5360_, 0, v_a_5353_);
v___x_5358_ = v_reuseFailAlloc_5360_;
goto v_reusejp_5357_;
}
v_reusejp_5357_:
{
lean_object* v___x_5359_; 
v___x_5359_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5359_, 0, v___x_5358_);
return v___x_5359_;
}
}
}
else
{
lean_object* v_a_5362_; lean_object* v___x_5364_; uint8_t v_isShared_5365_; uint8_t v_isSharedCheck_5381_; 
v_a_5362_ = lean_ctor_get(v_x_5351_, 0);
v_isSharedCheck_5381_ = !lean_is_exclusive(v_x_5351_);
if (v_isSharedCheck_5381_ == 0)
{
v___x_5364_ = v_x_5351_;
v_isShared_5365_ = v_isSharedCheck_5381_;
goto v_resetjp_5363_;
}
else
{
lean_inc(v_a_5362_);
lean_dec(v_x_5351_);
v___x_5364_ = lean_box(0);
v_isShared_5365_ = v_isSharedCheck_5381_;
goto v_resetjp_5363_;
}
v_resetjp_5363_:
{
lean_object* v___f_5366_; lean_object* v___f_5367_; lean_object* v___f_5368_; lean_object* v___x_5369_; uint8_t v___x_5370_; lean_object* v___x_5371_; lean_object* v___x_5372_; lean_object* v___x_5373_; uint8_t v___x_5374_; lean_object* v___x_5375_; lean_object* v___x_5377_; 
lean_inc(v_a_5362_);
v___f_5366_ = lean_alloc_closure((void*)(l_Std_Async_Async_race___redArg___lam__3___boxed), 3, 1);
lean_closure_set(v___f_5366_, 0, v_a_5362_);
v___f_5367_ = lean_alloc_closure((void*)(l_Std_Async_Async_race___redArg___lam__2___boxed), 5, 3);
lean_closure_set(v___f_5367_, 0, v_a_5362_);
lean_closure_set(v___f_5367_, 1, v___f_5343_);
lean_closure_set(v___f_5367_, 2, v___f_5344_);
lean_inc(v_prio_5347_);
v___f_5368_ = lean_alloc_closure((void*)(l_Std_Async_Async_race___redArg___lam__6___boxed), 8, 6);
lean_closure_set(v___f_5368_, 0, v___f_5345_);
lean_closure_set(v___f_5368_, 1, v___f_5366_);
lean_closure_set(v___f_5368_, 2, v___f_5367_);
lean_closure_set(v___f_5368_, 3, v_y_5346_);
lean_closure_set(v___f_5368_, 4, v_prio_5347_);
lean_closure_set(v___f_5368_, 5, v___f_5348_);
v___x_5369_ = lean_unsigned_to_nat(0u);
v___x_5370_ = 0;
v___x_5371_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_toBaseAsync___boxed), 4, 3);
lean_closure_set(v___x_5371_, 0, lean_box(0));
lean_closure_set(v___x_5371_, 1, lean_box(0));
lean_closure_set(v___x_5371_, 2, v_x_5349_);
v___x_5372_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_toRawBaseIO___boxed), 3, 2);
lean_closure_set(v___x_5372_, 0, lean_box(0));
lean_closure_set(v___x_5372_, 1, v___x_5371_);
v___x_5373_ = lean_io_as_task(v___x_5372_, v_prio_5347_);
v___x_5374_ = 1;
v___x_5375_ = lean_task_bind(v___x_5373_, v___f_5350_, v___x_5369_, v___x_5374_);
if (v_isShared_5365_ == 0)
{
lean_ctor_set(v___x_5364_, 0, v___x_5375_);
v___x_5377_ = v___x_5364_;
goto v_reusejp_5376_;
}
else
{
lean_object* v_reuseFailAlloc_5380_; 
v_reuseFailAlloc_5380_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5380_, 0, v___x_5375_);
v___x_5377_ = v_reuseFailAlloc_5380_;
goto v_reusejp_5376_;
}
v_reusejp_5376_:
{
lean_object* v___x_5378_; lean_object* v___x_5379_; 
v___x_5378_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5378_, 0, v___x_5377_);
v___x_5379_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5369_, v___x_5370_, v___x_5378_, v___f_5368_);
return v___x_5379_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_race___redArg___lam__7___boxed(lean_object* v___f_5382_, lean_object* v___f_5383_, lean_object* v___f_5384_, lean_object* v_y_5385_, lean_object* v_prio_5386_, lean_object* v___f_5387_, lean_object* v_x_5388_, lean_object* v___f_5389_, lean_object* v_x_5390_, lean_object* v___y_5391_){
_start:
{
lean_object* v_res_5392_; 
v_res_5392_ = l_Std_Async_Async_race___redArg___lam__7(v___f_5382_, v___f_5383_, v___f_5384_, v_y_5385_, v_prio_5386_, v___f_5387_, v_x_5388_, v___f_5389_, v_x_5390_);
return v_res_5392_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_race___redArg(lean_object* v_x_5395_, lean_object* v_y_5396_, lean_object* v_prio_5397_){
_start:
{
lean_object* v___f_5399_; lean_object* v___f_5400_; lean_object* v___f_5401_; lean_object* v___f_5402_; lean_object* v___f_5403_; lean_object* v___x_5404_; uint8_t v___x_5405_; lean_object* v___x_5406_; lean_object* v___x_5407_; lean_object* v___x_5408_; lean_object* v___x_5409_; 
v___f_5399_ = ((lean_object*)(l_Std_Async_EAsync_instMonadAsyncAsyncTaskError___closed__0));
v___f_5400_ = ((lean_object*)(l_Std_Async_Async_race___redArg___closed__0));
v___f_5401_ = ((lean_object*)(l_Std_Async_Async_race___redArg___closed__1));
v___f_5402_ = ((lean_object*)(l_Std_Async_BaseAsync_race___redArg___closed__0));
v___f_5403_ = lean_alloc_closure((void*)(l_Std_Async_Async_race___redArg___lam__7___boxed), 10, 8);
lean_closure_set(v___f_5403_, 0, v___f_5401_);
lean_closure_set(v___f_5403_, 1, v___f_5400_);
lean_closure_set(v___f_5403_, 2, v___f_5402_);
lean_closure_set(v___f_5403_, 3, v_y_5396_);
lean_closure_set(v___f_5403_, 4, v_prio_5397_);
lean_closure_set(v___f_5403_, 5, v___f_5399_);
lean_closure_set(v___f_5403_, 6, v_x_5395_);
lean_closure_set(v___f_5403_, 7, v___f_5399_);
v___x_5404_ = lean_unsigned_to_nat(0u);
v___x_5405_ = 0;
v___x_5406_ = lean_io_promise_new();
v___x_5407_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5407_, 0, v___x_5406_);
v___x_5408_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5408_, 0, v___x_5407_);
v___x_5409_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5404_, v___x_5405_, v___x_5408_, v___f_5403_);
return v___x_5409_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_race___redArg___boxed(lean_object* v_x_5410_, lean_object* v_y_5411_, lean_object* v_prio_5412_, lean_object* v___y_5413_){
_start:
{
lean_object* v_res_5414_; 
v_res_5414_ = l_Std_Async_Async_race___redArg(v_x_5410_, v_y_5411_, v_prio_5412_);
return v_res_5414_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_race(lean_object* v_00_u03b1_5415_, lean_object* v_inst_5416_, lean_object* v_x_5417_, lean_object* v_y_5418_, lean_object* v_prio_5419_){
_start:
{
lean_object* v___f_5421_; lean_object* v___f_5422_; lean_object* v___f_5423_; lean_object* v___f_5424_; lean_object* v___f_5425_; lean_object* v___x_5426_; uint8_t v___x_5427_; lean_object* v___x_5428_; lean_object* v___x_5429_; lean_object* v___x_5430_; lean_object* v___x_5431_; 
v___f_5421_ = ((lean_object*)(l_Std_Async_EAsync_instMonadAsyncAsyncTaskError___closed__0));
v___f_5422_ = ((lean_object*)(l_Std_Async_Async_race___redArg___closed__0));
v___f_5423_ = ((lean_object*)(l_Std_Async_Async_race___redArg___closed__1));
v___f_5424_ = ((lean_object*)(l_Std_Async_BaseAsync_race___redArg___closed__0));
v___f_5425_ = lean_alloc_closure((void*)(l_Std_Async_Async_race___redArg___lam__7___boxed), 10, 8);
lean_closure_set(v___f_5425_, 0, v___f_5423_);
lean_closure_set(v___f_5425_, 1, v___f_5422_);
lean_closure_set(v___f_5425_, 2, v___f_5424_);
lean_closure_set(v___f_5425_, 3, v_y_5418_);
lean_closure_set(v___f_5425_, 4, v_prio_5419_);
lean_closure_set(v___f_5425_, 5, v___f_5421_);
lean_closure_set(v___f_5425_, 6, v_x_5417_);
lean_closure_set(v___f_5425_, 7, v___f_5421_);
v___x_5426_ = lean_unsigned_to_nat(0u);
v___x_5427_ = 0;
v___x_5428_ = lean_io_promise_new();
v___x_5429_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5429_, 0, v___x_5428_);
v___x_5430_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5430_, 0, v___x_5429_);
v___x_5431_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5426_, v___x_5427_, v___x_5430_, v___f_5425_);
return v___x_5431_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_race___boxed(lean_object* v_00_u03b1_5432_, lean_object* v_inst_5433_, lean_object* v_x_5434_, lean_object* v_y_5435_, lean_object* v_prio_5436_, lean_object* v___y_5437_){
_start:
{
lean_object* v_res_5438_; 
v_res_5438_ = l_Std_Async_Async_race(v_00_u03b1_5432_, v_inst_5433_, v_x_5434_, v_y_5435_, v_prio_5436_);
lean_dec(v_inst_5433_);
return v_res_5438_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_concurrentlyAll___redArg___lam__1(lean_object* v_prio_5439_, lean_object* v___f_5440_, lean_object* v_x_5441_){
_start:
{
lean_object* v___x_5443_; lean_object* v___x_5444_; lean_object* v___x_5445_; lean_object* v___x_5446_; uint8_t v___x_5447_; lean_object* v___x_5448_; lean_object* v___x_5449_; lean_object* v___x_5450_; 
v___x_5443_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_toBaseAsync___boxed), 4, 3);
lean_closure_set(v___x_5443_, 0, lean_box(0));
lean_closure_set(v___x_5443_, 1, lean_box(0));
lean_closure_set(v___x_5443_, 2, v_x_5441_);
v___x_5444_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_toRawBaseIO___boxed), 3, 2);
lean_closure_set(v___x_5444_, 0, lean_box(0));
lean_closure_set(v___x_5444_, 1, v___x_5443_);
v___x_5445_ = lean_io_as_task(v___x_5444_, v_prio_5439_);
v___x_5446_ = lean_unsigned_to_nat(0u);
v___x_5447_ = 1;
v___x_5448_ = lean_task_bind(v___x_5445_, v___f_5440_, v___x_5446_, v___x_5447_);
v___x_5449_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5449_, 0, v___x_5448_);
v___x_5450_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5450_, 0, v___x_5449_);
return v___x_5450_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_concurrentlyAll___redArg___lam__1___boxed(lean_object* v_prio_5451_, lean_object* v___f_5452_, lean_object* v_x_5453_, lean_object* v___y_5454_){
_start:
{
lean_object* v_res_5455_; 
v_res_5455_ = l_Std_Async_Async_concurrentlyAll___redArg___lam__1(v_prio_5451_, v___f_5452_, v_x_5453_);
return v_res_5455_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_concurrentlyAll___redArg___lam__0(lean_object* v___y_5456_){
_start:
{
lean_object* v___x_5458_; 
v___x_5458_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5458_, 0, v___y_5456_);
return v___x_5458_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_concurrentlyAll___redArg___lam__0___boxed(lean_object* v___y_5459_, lean_object* v___y_5460_){
_start:
{
lean_object* v_res_5461_; 
v_res_5461_ = l_Std_Async_Async_concurrentlyAll___redArg___lam__0(v___y_5459_);
return v_res_5461_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_concurrentlyAll___redArg___lam__2(lean_object* v___x_5462_, lean_object* v___f_5463_, lean_object* v_x_5464_){
_start:
{
if (lean_obj_tag(v_x_5464_) == 0)
{
lean_object* v_a_5466_; lean_object* v___x_5468_; uint8_t v_isShared_5469_; uint8_t v_isSharedCheck_5474_; 
lean_dec_ref(v___f_5463_);
lean_dec_ref(v___x_5462_);
v_a_5466_ = lean_ctor_get(v_x_5464_, 0);
v_isSharedCheck_5474_ = !lean_is_exclusive(v_x_5464_);
if (v_isSharedCheck_5474_ == 0)
{
v___x_5468_ = v_x_5464_;
v_isShared_5469_ = v_isSharedCheck_5474_;
goto v_resetjp_5467_;
}
else
{
lean_inc(v_a_5466_);
lean_dec(v_x_5464_);
v___x_5468_ = lean_box(0);
v_isShared_5469_ = v_isSharedCheck_5474_;
goto v_resetjp_5467_;
}
v_resetjp_5467_:
{
lean_object* v___x_5471_; 
if (v_isShared_5469_ == 0)
{
v___x_5471_ = v___x_5468_;
goto v_reusejp_5470_;
}
else
{
lean_object* v_reuseFailAlloc_5473_; 
v_reuseFailAlloc_5473_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5473_, 0, v_a_5466_);
v___x_5471_ = v_reuseFailAlloc_5473_;
goto v_reusejp_5470_;
}
v_reusejp_5470_:
{
lean_object* v___x_5472_; 
v___x_5472_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5472_, 0, v___x_5471_);
return v___x_5472_;
}
}
}
else
{
lean_object* v_a_5475_; size_t v_sz_5476_; size_t v___x_5477_; lean_object* v___x_298__overap_5478_; lean_object* v___x_5479_; 
v_a_5475_ = lean_ctor_get(v_x_5464_, 0);
lean_inc(v_a_5475_);
lean_dec_ref_known(v_x_5464_, 1);
v_sz_5476_ = lean_array_size(v_a_5475_);
v___x_5477_ = ((size_t)0ULL);
v___x_298__overap_5478_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_5462_, v___f_5463_, v_sz_5476_, v___x_5477_, v_a_5475_);
v___x_5479_ = lean_apply_1(v___x_298__overap_5478_, lean_box(0));
return v___x_5479_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_concurrentlyAll___redArg___lam__2___boxed(lean_object* v___x_5480_, lean_object* v___f_5481_, lean_object* v_x_5482_, lean_object* v___y_5483_){
_start:
{
lean_object* v_res_5484_; 
v_res_5484_ = l_Std_Async_Async_concurrentlyAll___redArg___lam__2(v___x_5480_, v___f_5481_, v_x_5482_);
return v_res_5484_;
}
}
static lean_object* _init_l_Std_Async_Async_concurrentlyAll___redArg___closed__1(void){
_start:
{
lean_object* v___f_5486_; lean_object* v___x_5487_; lean_object* v___f_5488_; 
v___f_5486_ = ((lean_object*)(l_Std_Async_Async_concurrentlyAll___redArg___closed__0));
v___x_5487_ = lean_obj_once(&l_Std_Async_EAsync_instMonad___closed__0, &l_Std_Async_EAsync_instMonad___closed__0_once, _init_l_Std_Async_EAsync_instMonad___closed__0);
v___f_5488_ = lean_alloc_closure((void*)(l_Std_Async_Async_concurrentlyAll___redArg___lam__2___boxed), 4, 2);
lean_closure_set(v___f_5488_, 0, v___x_5487_);
lean_closure_set(v___f_5488_, 1, v___f_5486_);
return v___f_5488_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_concurrentlyAll___redArg(lean_object* v_xs_5489_, lean_object* v_prio_5490_){
_start:
{
lean_object* v___f_5492_; lean_object* v___f_5493_; lean_object* v___x_5494_; lean_object* v___f_5495_; lean_object* v___x_5496_; uint8_t v___x_5497_; size_t v_sz_5498_; size_t v___x_5499_; lean_object* v___x_221__overap_5500_; lean_object* v___x_5501_; lean_object* v___x_5502_; 
v___f_5492_ = ((lean_object*)(l_Std_Async_EAsync_instMonadAsyncAsyncTaskError___closed__0));
v___f_5493_ = lean_alloc_closure((void*)(l_Std_Async_Async_concurrentlyAll___redArg___lam__1___boxed), 4, 2);
lean_closure_set(v___f_5493_, 0, v_prio_5490_);
lean_closure_set(v___f_5493_, 1, v___f_5492_);
v___x_5494_ = lean_obj_once(&l_Std_Async_EAsync_instMonad___closed__0, &l_Std_Async_EAsync_instMonad___closed__0_once, _init_l_Std_Async_EAsync_instMonad___closed__0);
v___f_5495_ = lean_obj_once(&l_Std_Async_Async_concurrentlyAll___redArg___closed__1, &l_Std_Async_Async_concurrentlyAll___redArg___closed__1_once, _init_l_Std_Async_Async_concurrentlyAll___redArg___closed__1);
v___x_5496_ = lean_unsigned_to_nat(0u);
v___x_5497_ = 0;
v_sz_5498_ = lean_array_size(v_xs_5489_);
v___x_5499_ = ((size_t)0ULL);
v___x_221__overap_5500_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_5494_, v___f_5493_, v_sz_5498_, v___x_5499_, v_xs_5489_);
v___x_5501_ = lean_apply_1(v___x_221__overap_5500_, lean_box(0));
v___x_5502_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5496_, v___x_5497_, v___x_5501_, v___f_5495_);
return v___x_5502_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_concurrentlyAll___redArg___boxed(lean_object* v_xs_5503_, lean_object* v_prio_5504_, lean_object* v___y_5505_){
_start:
{
lean_object* v_res_5506_; 
v_res_5506_ = l_Std_Async_Async_concurrentlyAll___redArg(v_xs_5503_, v_prio_5504_);
return v_res_5506_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_concurrentlyAll(lean_object* v_00_u03b1_5507_, lean_object* v_xs_5508_, lean_object* v_prio_5509_){
_start:
{
lean_object* v___f_5511_; lean_object* v___f_5512_; lean_object* v___x_5513_; lean_object* v___f_5514_; lean_object* v___x_5515_; uint8_t v___x_5516_; size_t v_sz_5517_; size_t v___x_5518_; lean_object* v___x_263__overap_5519_; lean_object* v___x_5520_; lean_object* v___x_5521_; 
v___f_5511_ = ((lean_object*)(l_Std_Async_EAsync_instMonadAsyncAsyncTaskError___closed__0));
v___f_5512_ = lean_alloc_closure((void*)(l_Std_Async_Async_concurrentlyAll___redArg___lam__1___boxed), 4, 2);
lean_closure_set(v___f_5512_, 0, v_prio_5509_);
lean_closure_set(v___f_5512_, 1, v___f_5511_);
v___x_5513_ = lean_obj_once(&l_Std_Async_EAsync_instMonad___closed__0, &l_Std_Async_EAsync_instMonad___closed__0_once, _init_l_Std_Async_EAsync_instMonad___closed__0);
v___f_5514_ = lean_obj_once(&l_Std_Async_Async_concurrentlyAll___redArg___closed__1, &l_Std_Async_Async_concurrentlyAll___redArg___closed__1_once, _init_l_Std_Async_Async_concurrentlyAll___redArg___closed__1);
v___x_5515_ = lean_unsigned_to_nat(0u);
v___x_5516_ = 0;
v_sz_5517_ = lean_array_size(v_xs_5508_);
v___x_5518_ = ((size_t)0ULL);
v___x_263__overap_5519_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_5513_, v___f_5512_, v_sz_5517_, v___x_5518_, v_xs_5508_);
v___x_5520_ = lean_apply_1(v___x_263__overap_5519_, lean_box(0));
v___x_5521_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5515_, v___x_5516_, v___x_5520_, v___f_5514_);
return v___x_5521_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_concurrentlyAll___boxed(lean_object* v_00_u03b1_5522_, lean_object* v_xs_5523_, lean_object* v_prio_5524_, lean_object* v___y_5525_){
_start:
{
lean_object* v_res_5526_; 
v_res_5526_ = l_Std_Async_Async_concurrentlyAll(v_00_u03b1_5522_, v_xs_5523_, v_prio_5524_);
return v_res_5526_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_raceAll___redArg___lam__4(lean_object* v___f_5527_, lean_object* v___f_5528_, lean_object* v_x_5529_){
_start:
{
if (lean_obj_tag(v_x_5529_) == 0)
{
lean_object* v_a_5531_; lean_object* v___x_5533_; uint8_t v_isShared_5534_; uint8_t v_isSharedCheck_5539_; 
lean_dec_ref(v___f_5528_);
lean_dec(v___f_5527_);
v_a_5531_ = lean_ctor_get(v_x_5529_, 0);
v_isSharedCheck_5539_ = !lean_is_exclusive(v_x_5529_);
if (v_isSharedCheck_5539_ == 0)
{
v___x_5533_ = v_x_5529_;
v_isShared_5534_ = v_isSharedCheck_5539_;
goto v_resetjp_5532_;
}
else
{
lean_inc(v_a_5531_);
lean_dec(v_x_5529_);
v___x_5533_ = lean_box(0);
v_isShared_5534_ = v_isSharedCheck_5539_;
goto v_resetjp_5532_;
}
v_resetjp_5532_:
{
lean_object* v___x_5536_; 
if (v_isShared_5534_ == 0)
{
v___x_5536_ = v___x_5533_;
goto v_reusejp_5535_;
}
else
{
lean_object* v_reuseFailAlloc_5538_; 
v_reuseFailAlloc_5538_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5538_, 0, v_a_5531_);
v___x_5536_ = v_reuseFailAlloc_5538_;
goto v_reusejp_5535_;
}
v_reusejp_5535_:
{
lean_object* v___x_5537_; 
v___x_5537_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5537_, 0, v___x_5536_);
return v___x_5537_;
}
}
}
else
{
lean_object* v_a_5540_; lean_object* v___x_5542_; uint8_t v_isShared_5543_; uint8_t v_isSharedCheck_5553_; 
v_a_5540_ = lean_ctor_get(v_x_5529_, 0);
v_isSharedCheck_5553_ = !lean_is_exclusive(v_x_5529_);
if (v_isSharedCheck_5553_ == 0)
{
v___x_5542_ = v_x_5529_;
v_isShared_5543_ = v_isSharedCheck_5553_;
goto v_resetjp_5541_;
}
else
{
lean_inc(v_a_5540_);
lean_dec(v_x_5529_);
v___x_5542_ = lean_box(0);
v_isShared_5543_ = v_isSharedCheck_5553_;
goto v_resetjp_5541_;
}
v_resetjp_5541_:
{
lean_object* v___x_5544_; lean_object* v___x_5545_; lean_object* v___x_5546_; uint8_t v___x_5547_; lean_object* v___x_5548_; lean_object* v___x_5550_; 
v___x_5544_ = lean_alloc_closure((void*)(l_liftM), 5, 4);
lean_closure_set(v___x_5544_, 0, lean_box(0));
lean_closure_set(v___x_5544_, 1, lean_box(0));
lean_closure_set(v___x_5544_, 2, v___f_5527_);
lean_closure_set(v___x_5544_, 3, lean_box(0));
v___x_5545_ = lean_alloc_closure((void*)(l_Function_comp), 6, 5);
lean_closure_set(v___x_5545_, 0, lean_box(0));
lean_closure_set(v___x_5545_, 1, lean_box(0));
lean_closure_set(v___x_5545_, 2, lean_box(0));
lean_closure_set(v___x_5545_, 3, v___x_5544_);
lean_closure_set(v___x_5545_, 4, v___f_5528_);
v___x_5546_ = lean_unsigned_to_nat(0u);
v___x_5547_ = 0;
v___x_5548_ = l_BaseIO_chainTask___redArg(v_a_5540_, v___x_5545_, v___x_5546_, v___x_5547_);
if (v_isShared_5543_ == 0)
{
lean_ctor_set(v___x_5542_, 0, v___x_5548_);
v___x_5550_ = v___x_5542_;
goto v_reusejp_5549_;
}
else
{
lean_object* v_reuseFailAlloc_5552_; 
v_reuseFailAlloc_5552_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5552_, 0, v___x_5548_);
v___x_5550_ = v_reuseFailAlloc_5552_;
goto v_reusejp_5549_;
}
v_reusejp_5549_:
{
lean_object* v___x_5551_; 
v___x_5551_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5551_, 0, v___x_5550_);
return v___x_5551_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_raceAll___redArg___lam__4___boxed(lean_object* v___f_5554_, lean_object* v___f_5555_, lean_object* v_x_5556_, lean_object* v___y_5557_){
_start:
{
lean_object* v_res_5558_; 
v_res_5558_ = l_Std_Async_Async_raceAll___redArg___lam__4(v___f_5554_, v___f_5555_, v_x_5556_);
return v_res_5558_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_raceAll___redArg___lam__0(lean_object* v_prio_5559_, lean_object* v___f_5560_, lean_object* v___f_5561_, lean_object* v_x_5562_){
_start:
{
lean_object* v___x_5564_; uint8_t v___x_5565_; lean_object* v___x_5566_; lean_object* v___x_5567_; lean_object* v___x_5568_; uint8_t v___x_5569_; lean_object* v___x_5570_; lean_object* v___x_5571_; lean_object* v___x_5572_; lean_object* v___x_5573_; 
v___x_5564_ = lean_unsigned_to_nat(0u);
v___x_5565_ = 0;
v___x_5566_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_toBaseAsync___boxed), 4, 3);
lean_closure_set(v___x_5566_, 0, lean_box(0));
lean_closure_set(v___x_5566_, 1, lean_box(0));
lean_closure_set(v___x_5566_, 2, v_x_5562_);
v___x_5567_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_toRawBaseIO___boxed), 3, 2);
lean_closure_set(v___x_5567_, 0, lean_box(0));
lean_closure_set(v___x_5567_, 1, v___x_5566_);
v___x_5568_ = lean_io_as_task(v___x_5567_, v_prio_5559_);
v___x_5569_ = 1;
v___x_5570_ = lean_task_bind(v___x_5568_, v___f_5560_, v___x_5564_, v___x_5569_);
v___x_5571_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5571_, 0, v___x_5570_);
v___x_5572_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5572_, 0, v___x_5571_);
v___x_5573_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5564_, v___x_5565_, v___x_5572_, v___f_5561_);
return v___x_5573_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_raceAll___redArg___lam__0___boxed(lean_object* v_prio_5574_, lean_object* v___f_5575_, lean_object* v___f_5576_, lean_object* v_x_5577_, lean_object* v___y_5578_){
_start:
{
lean_object* v_res_5579_; 
v_res_5579_ = l_Std_Async_Async_raceAll___redArg___lam__0(v_prio_5574_, v___f_5575_, v___f_5576_, v_x_5577_);
return v_res_5579_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_raceAll___redArg___lam__2(lean_object* v___f_5580_, lean_object* v_prio_5581_, lean_object* v___f_5582_, lean_object* v___f_5583_, lean_object* v___f_5584_, lean_object* v_inst_5585_, lean_object* v_xs_5586_, lean_object* v_x_5587_){
_start:
{
if (lean_obj_tag(v_x_5587_) == 0)
{
lean_object* v_a_5589_; lean_object* v___x_5591_; uint8_t v_isShared_5592_; uint8_t v_isSharedCheck_5597_; 
lean_dec(v_xs_5586_);
lean_dec_ref(v_inst_5585_);
lean_dec_ref(v___f_5584_);
lean_dec_ref(v___f_5583_);
lean_dec_ref(v___f_5582_);
lean_dec(v_prio_5581_);
lean_dec(v___f_5580_);
v_a_5589_ = lean_ctor_get(v_x_5587_, 0);
v_isSharedCheck_5597_ = !lean_is_exclusive(v_x_5587_);
if (v_isSharedCheck_5597_ == 0)
{
v___x_5591_ = v_x_5587_;
v_isShared_5592_ = v_isSharedCheck_5597_;
goto v_resetjp_5590_;
}
else
{
lean_inc(v_a_5589_);
lean_dec(v_x_5587_);
v___x_5591_ = lean_box(0);
v_isShared_5592_ = v_isSharedCheck_5597_;
goto v_resetjp_5590_;
}
v_resetjp_5590_:
{
lean_object* v___x_5594_; 
if (v_isShared_5592_ == 0)
{
v___x_5594_ = v___x_5591_;
goto v_reusejp_5593_;
}
else
{
lean_object* v_reuseFailAlloc_5596_; 
v_reuseFailAlloc_5596_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5596_, 0, v_a_5589_);
v___x_5594_ = v_reuseFailAlloc_5596_;
goto v_reusejp_5593_;
}
v_reusejp_5593_:
{
lean_object* v___x_5595_; 
v___x_5595_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5595_, 0, v___x_5594_);
return v___x_5595_;
}
}
}
else
{
lean_object* v_a_5598_; lean_object* v___f_5599_; lean_object* v___f_5600_; lean_object* v___f_5601_; lean_object* v___f_5602_; lean_object* v___x_5603_; uint8_t v___x_5604_; lean_object* v___x_5605_; lean_object* v___x_5606_; 
v_a_5598_ = lean_ctor_get(v_x_5587_, 0);
lean_inc_n(v_a_5598_, 2);
lean_dec_ref_known(v_x_5587_, 1);
v___f_5599_ = lean_alloc_closure((void*)(l_Std_Async_Async_race___redArg___lam__3___boxed), 3, 1);
lean_closure_set(v___f_5599_, 0, v_a_5598_);
v___f_5600_ = lean_alloc_closure((void*)(l_Std_Async_Async_raceAll___redArg___lam__4___boxed), 4, 2);
lean_closure_set(v___f_5600_, 0, v___f_5580_);
lean_closure_set(v___f_5600_, 1, v___f_5599_);
v___f_5601_ = lean_alloc_closure((void*)(l_Std_Async_Async_raceAll___redArg___lam__0___boxed), 5, 3);
lean_closure_set(v___f_5601_, 0, v_prio_5581_);
lean_closure_set(v___f_5601_, 1, v___f_5582_);
lean_closure_set(v___f_5601_, 2, v___f_5600_);
v___f_5602_ = lean_alloc_closure((void*)(l_Std_Async_Async_race___redArg___lam__2___boxed), 5, 3);
lean_closure_set(v___f_5602_, 0, v_a_5598_);
lean_closure_set(v___f_5602_, 1, v___f_5583_);
lean_closure_set(v___f_5602_, 2, v___f_5584_);
v___x_5603_ = lean_unsigned_to_nat(0u);
v___x_5604_ = 0;
v___x_5605_ = lean_apply_3(v_inst_5585_, v_xs_5586_, v___f_5601_, lean_box(0));
v___x_5606_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5603_, v___x_5604_, v___x_5605_, v___f_5602_);
return v___x_5606_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_raceAll___redArg___lam__2___boxed(lean_object* v___f_5607_, lean_object* v_prio_5608_, lean_object* v___f_5609_, lean_object* v___f_5610_, lean_object* v___f_5611_, lean_object* v_inst_5612_, lean_object* v_xs_5613_, lean_object* v_x_5614_, lean_object* v___y_5615_){
_start:
{
lean_object* v_res_5616_; 
v_res_5616_ = l_Std_Async_Async_raceAll___redArg___lam__2(v___f_5607_, v_prio_5608_, v___f_5609_, v___f_5610_, v___f_5611_, v_inst_5612_, v_xs_5613_, v_x_5614_);
return v_res_5616_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_raceAll___redArg(lean_object* v_inst_5617_, lean_object* v_xs_5618_, lean_object* v_prio_5619_){
_start:
{
lean_object* v___f_5621_; lean_object* v___f_5622_; lean_object* v___f_5623_; lean_object* v___f_5624_; lean_object* v___f_5625_; lean_object* v___x_5626_; uint8_t v___x_5627_; lean_object* v___x_5628_; lean_object* v___x_5629_; lean_object* v___x_5630_; lean_object* v___x_5631_; 
v___f_5621_ = ((lean_object*)(l_Std_Async_Async_race___redArg___closed__1));
v___f_5622_ = ((lean_object*)(l_Std_Async_Async_race___redArg___closed__0));
v___f_5623_ = ((lean_object*)(l_Std_Async_EAsync_instMonadAsyncAsyncTaskError___closed__0));
v___f_5624_ = ((lean_object*)(l_Std_Async_BaseAsync_race___redArg___closed__0));
v___f_5625_ = lean_alloc_closure((void*)(l_Std_Async_Async_raceAll___redArg___lam__2___boxed), 9, 7);
lean_closure_set(v___f_5625_, 0, v___f_5624_);
lean_closure_set(v___f_5625_, 1, v_prio_5619_);
lean_closure_set(v___f_5625_, 2, v___f_5623_);
lean_closure_set(v___f_5625_, 3, v___f_5621_);
lean_closure_set(v___f_5625_, 4, v___f_5622_);
lean_closure_set(v___f_5625_, 5, v_inst_5617_);
lean_closure_set(v___f_5625_, 6, v_xs_5618_);
v___x_5626_ = lean_unsigned_to_nat(0u);
v___x_5627_ = 0;
v___x_5628_ = lean_io_promise_new();
v___x_5629_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5629_, 0, v___x_5628_);
v___x_5630_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5630_, 0, v___x_5629_);
v___x_5631_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5626_, v___x_5627_, v___x_5630_, v___f_5625_);
return v___x_5631_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_raceAll___redArg___boxed(lean_object* v_inst_5632_, lean_object* v_xs_5633_, lean_object* v_prio_5634_, lean_object* v___y_5635_){
_start:
{
lean_object* v_res_5636_; 
v_res_5636_ = l_Std_Async_Async_raceAll___redArg(v_inst_5632_, v_xs_5633_, v_prio_5634_);
return v_res_5636_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_raceAll(lean_object* v_c_5637_, lean_object* v_00_u03b1_5638_, lean_object* v_inst_5639_, lean_object* v_xs_5640_, lean_object* v_prio_5641_){
_start:
{
lean_object* v___f_5643_; lean_object* v___f_5644_; lean_object* v___f_5645_; lean_object* v___f_5646_; lean_object* v___f_5647_; lean_object* v___x_5648_; uint8_t v___x_5649_; lean_object* v___x_5650_; lean_object* v___x_5651_; lean_object* v___x_5652_; lean_object* v___x_5653_; 
v___f_5643_ = ((lean_object*)(l_Std_Async_Async_race___redArg___closed__1));
v___f_5644_ = ((lean_object*)(l_Std_Async_Async_race___redArg___closed__0));
v___f_5645_ = ((lean_object*)(l_Std_Async_EAsync_instMonadAsyncAsyncTaskError___closed__0));
v___f_5646_ = ((lean_object*)(l_Std_Async_BaseAsync_race___redArg___closed__0));
v___f_5647_ = lean_alloc_closure((void*)(l_Std_Async_Async_raceAll___redArg___lam__2___boxed), 9, 7);
lean_closure_set(v___f_5647_, 0, v___f_5646_);
lean_closure_set(v___f_5647_, 1, v_prio_5641_);
lean_closure_set(v___f_5647_, 2, v___f_5645_);
lean_closure_set(v___f_5647_, 3, v___f_5643_);
lean_closure_set(v___f_5647_, 4, v___f_5644_);
lean_closure_set(v___f_5647_, 5, v_inst_5639_);
lean_closure_set(v___f_5647_, 6, v_xs_5640_);
v___x_5648_ = lean_unsigned_to_nat(0u);
v___x_5649_ = 0;
v___x_5650_ = lean_io_promise_new();
v___x_5651_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5651_, 0, v___x_5650_);
v___x_5652_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5652_, 0, v___x_5651_);
v___x_5653_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5648_, v___x_5649_, v___x_5652_, v___f_5647_);
return v___x_5653_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_raceAll___boxed(lean_object* v_c_5654_, lean_object* v_00_u03b1_5655_, lean_object* v_inst_5656_, lean_object* v_xs_5657_, lean_object* v_prio_5658_, lean_object* v___y_5659_){
_start:
{
lean_object* v_res_5660_; 
v_res_5660_ = l_Std_Async_Async_raceAll(v_c_5654_, v_00_u03b1_5655_, v_inst_5656_, v_xs_5657_, v_prio_5658_);
return v_res_5660_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_background___redArg(lean_object* v_inst_5661_, lean_object* v_inst_5662_, lean_object* v_action_5663_, lean_object* v_prio_5664_){
_start:
{
lean_object* v_toApplicative_5665_; lean_object* v_toFunctor_5666_; lean_object* v_mapConst_5667_; lean_object* v___x_5668_; lean_object* v___x_5669_; lean_object* v___x_5670_; 
v_toApplicative_5665_ = lean_ctor_get(v_inst_5661_, 0);
lean_inc_ref(v_toApplicative_5665_);
lean_dec_ref(v_inst_5661_);
v_toFunctor_5666_ = lean_ctor_get(v_toApplicative_5665_, 0);
lean_inc_ref(v_toFunctor_5666_);
lean_dec_ref(v_toApplicative_5665_);
v_mapConst_5667_ = lean_ctor_get(v_toFunctor_5666_, 1);
lean_inc(v_mapConst_5667_);
lean_dec_ref(v_toFunctor_5666_);
v___x_5668_ = lean_apply_3(v_inst_5662_, lean_box(0), v_action_5663_, v_prio_5664_);
v___x_5669_ = lean_box(0);
v___x_5670_ = lean_apply_4(v_mapConst_5667_, lean_box(0), lean_box(0), v___x_5669_, v___x_5668_);
return v___x_5670_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_background(lean_object* v_m_5671_, lean_object* v_t_5672_, lean_object* v_00_u03b1_5673_, lean_object* v_inst_5674_, lean_object* v_inst_5675_, lean_object* v_action_5676_, lean_object* v_prio_5677_){
_start:
{
lean_object* v_toApplicative_5678_; lean_object* v_toFunctor_5679_; lean_object* v_mapConst_5680_; lean_object* v___x_5681_; lean_object* v___x_5682_; lean_object* v___x_5683_; 
v_toApplicative_5678_ = lean_ctor_get(v_inst_5674_, 0);
lean_inc_ref(v_toApplicative_5678_);
lean_dec_ref(v_inst_5674_);
v_toFunctor_5679_ = lean_ctor_get(v_toApplicative_5678_, 0);
lean_inc_ref(v_toFunctor_5679_);
lean_dec_ref(v_toApplicative_5678_);
v_mapConst_5680_ = lean_ctor_get(v_toFunctor_5679_, 1);
lean_inc(v_mapConst_5680_);
lean_dec_ref(v_toFunctor_5679_);
v___x_5681_ = lean_apply_3(v_inst_5675_, lean_box(0), v_action_5676_, v_prio_5677_);
v___x_5682_ = lean_box(0);
v___x_5683_ = lean_apply_4(v_mapConst_5680_, lean_box(0), lean_box(0), v___x_5682_, v___x_5681_);
return v___x_5683_;
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
