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
lean_object* l_instMonadBaseIO___aux__5___boxed(lean_object*, lean_object*, lean_object*);
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
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_instInhabited___redArg(lean_object* v_inst_1886_){
_start:
{
lean_object* v___x_1887_; lean_object* v___x_1888_; lean_object* v___x_1889_; 
v___x_1887_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1887_, 0, v_inst_1886_);
v___x_1888_ = lean_alloc_closure((void*)(l_instMonadBaseIO___aux__5___boxed), 3, 2);
lean_closure_set(v___x_1888_, 0, lean_box(0));
lean_closure_set(v___x_1888_, 1, v___x_1887_);
v___x_1889_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_mk___boxed), 3, 2);
lean_closure_set(v___x_1889_, 0, lean_box(0));
lean_closure_set(v___x_1889_, 1, v___x_1888_);
return v___x_1889_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_instInhabited(lean_object* v_00_u03b1_1890_, lean_object* v_inst_1891_){
_start:
{
lean_object* v___x_1892_; 
v___x_1892_ = l_Std_Async_BaseAsync_instInhabited___redArg(v_inst_1891_);
return v___x_1892_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_instMonadFinally___lam__0(lean_object* v_res_1893_, lean_object* v_snd_1894_){
_start:
{
lean_object* v___x_1895_; 
v___x_1895_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1895_, 0, v_res_1893_);
lean_ctor_set(v___x_1895_, 1, v_snd_1894_);
return v___x_1895_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_instMonadFinally___lam__1(lean_object* v_f_1896_, lean_object* v_res_1897_){
_start:
{
lean_object* v___f_1899_; lean_object* v___x_1900_; lean_object* v___x_1901_; uint8_t v___x_1902_; lean_object* v___x_1903_; 
lean_inc_n(v_res_1897_, 2);
v___f_1899_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_instMonadFinally___lam__0), 2, 1);
lean_closure_set(v___f_1899_, 0, v_res_1897_);
v___x_1900_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1900_, 0, v_res_1897_);
v___x_1901_ = lean_unsigned_to_nat(0u);
v___x_1902_ = 0;
v___x_1903_ = lean_apply_2(v_f_1896_, v___x_1900_, lean_box(0));
if (lean_obj_tag(v___x_1903_) == 0)
{
lean_object* v_a_1904_; lean_object* v___x_1906_; uint8_t v_isShared_1907_; uint8_t v_isSharedCheck_1912_; 
lean_dec_ref(v___f_1899_);
v_a_1904_ = lean_ctor_get(v___x_1903_, 0);
v_isSharedCheck_1912_ = !lean_is_exclusive(v___x_1903_);
if (v_isSharedCheck_1912_ == 0)
{
v___x_1906_ = v___x_1903_;
v_isShared_1907_ = v_isSharedCheck_1912_;
goto v_resetjp_1905_;
}
else
{
lean_inc(v_a_1904_);
lean_dec(v___x_1903_);
v___x_1906_ = lean_box(0);
v_isShared_1907_ = v_isSharedCheck_1912_;
goto v_resetjp_1905_;
}
v_resetjp_1905_:
{
lean_object* v___x_1908_; lean_object* v___x_1910_; 
v___x_1908_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1908_, 0, v_res_1897_);
lean_ctor_set(v___x_1908_, 1, v_a_1904_);
if (v_isShared_1907_ == 0)
{
lean_ctor_set(v___x_1906_, 0, v___x_1908_);
v___x_1910_ = v___x_1906_;
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
else
{
lean_object* v_a_1913_; lean_object* v___x_1915_; uint8_t v_isShared_1916_; uint8_t v_isSharedCheck_1921_; 
lean_dec(v_res_1897_);
v_a_1913_ = lean_ctor_get(v___x_1903_, 0);
v_isSharedCheck_1921_ = !lean_is_exclusive(v___x_1903_);
if (v_isSharedCheck_1921_ == 0)
{
v___x_1915_ = v___x_1903_;
v_isShared_1916_ = v_isSharedCheck_1921_;
goto v_resetjp_1914_;
}
else
{
lean_inc(v_a_1913_);
lean_dec(v___x_1903_);
v___x_1915_ = lean_box(0);
v_isShared_1916_ = v_isSharedCheck_1921_;
goto v_resetjp_1914_;
}
v_resetjp_1914_:
{
lean_object* v___x_1917_; lean_object* v___x_1919_; 
v___x_1917_ = lean_task_map(v___f_1899_, v_a_1913_, v___x_1901_, v___x_1902_);
if (v_isShared_1916_ == 0)
{
lean_ctor_set(v___x_1915_, 0, v___x_1917_);
v___x_1919_ = v___x_1915_;
goto v_reusejp_1918_;
}
else
{
lean_object* v_reuseFailAlloc_1920_; 
v_reuseFailAlloc_1920_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1920_, 0, v___x_1917_);
v___x_1919_ = v_reuseFailAlloc_1920_;
goto v_reusejp_1918_;
}
v_reusejp_1918_:
{
return v___x_1919_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_instMonadFinally___lam__1___boxed(lean_object* v_f_1922_, lean_object* v_res_1923_, lean_object* v___y_1924_){
_start:
{
lean_object* v_res_1925_; 
v_res_1925_ = l_Std_Async_BaseAsync_instMonadFinally___lam__1(v_f_1922_, v_res_1923_);
return v_res_1925_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_instMonadFinally___lam__2(lean_object* v_00_u03b1_1926_, lean_object* v_00_u03b2_1927_, lean_object* v_x_1928_, lean_object* v_f_1929_){
_start:
{
lean_object* v___f_1931_; lean_object* v___x_1932_; uint8_t v___x_1933_; lean_object* v___x_1934_; lean_object* v___x_1935_; 
v___f_1931_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_instMonadFinally___lam__1___boxed), 3, 1);
lean_closure_set(v___f_1931_, 0, v_f_1929_);
v___x_1932_ = lean_unsigned_to_nat(0u);
v___x_1933_ = 0;
v___x_1934_ = lean_apply_1(v_x_1928_, lean_box(0));
v___x_1935_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1932_, v___x_1933_, v___x_1934_, v___f_1931_);
return v___x_1935_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_instMonadFinally___lam__2___boxed(lean_object* v_00_u03b1_1936_, lean_object* v_00_u03b2_1937_, lean_object* v_x_1938_, lean_object* v_f_1939_, lean_object* v___y_1940_){
_start:
{
lean_object* v_res_1941_; 
v_res_1941_ = l_Std_Async_BaseAsync_instMonadFinally___lam__2(v_00_u03b1_1936_, v_00_u03b2_1937_, v_x_1938_, v_f_1939_);
return v_res_1941_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_ofExcept___redArg(lean_object* v_except_1944_){
_start:
{
lean_object* v_a_1946_; lean_object* v___x_1948_; uint8_t v_isShared_1949_; uint8_t v_isSharedCheck_1953_; 
v_a_1946_ = lean_ctor_get(v_except_1944_, 0);
v_isSharedCheck_1953_ = !lean_is_exclusive(v_except_1944_);
if (v_isSharedCheck_1953_ == 0)
{
v___x_1948_ = v_except_1944_;
v_isShared_1949_ = v_isSharedCheck_1953_;
goto v_resetjp_1947_;
}
else
{
lean_inc(v_a_1946_);
lean_dec(v_except_1944_);
v___x_1948_ = lean_box(0);
v_isShared_1949_ = v_isSharedCheck_1953_;
goto v_resetjp_1947_;
}
v_resetjp_1947_:
{
lean_object* v___x_1951_; 
if (v_isShared_1949_ == 0)
{
lean_ctor_set_tag(v___x_1948_, 0);
v___x_1951_ = v___x_1948_;
goto v_reusejp_1950_;
}
else
{
lean_object* v_reuseFailAlloc_1952_; 
v_reuseFailAlloc_1952_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1952_, 0, v_a_1946_);
v___x_1951_ = v_reuseFailAlloc_1952_;
goto v_reusejp_1950_;
}
v_reusejp_1950_:
{
return v___x_1951_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_ofExcept___redArg___boxed(lean_object* v_except_1954_, lean_object* v___y_1955_){
_start:
{
lean_object* v_res_1956_; 
v_res_1956_ = l_Std_Async_BaseAsync_ofExcept___redArg(v_except_1954_);
return v_res_1956_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_ofExcept(lean_object* v_00_u03b1_1957_, lean_object* v_except_1958_){
_start:
{
lean_object* v_a_1960_; lean_object* v___x_1962_; uint8_t v_isShared_1963_; uint8_t v_isSharedCheck_1967_; 
v_a_1960_ = lean_ctor_get(v_except_1958_, 0);
v_isSharedCheck_1967_ = !lean_is_exclusive(v_except_1958_);
if (v_isSharedCheck_1967_ == 0)
{
v___x_1962_ = v_except_1958_;
v_isShared_1963_ = v_isSharedCheck_1967_;
goto v_resetjp_1961_;
}
else
{
lean_inc(v_a_1960_);
lean_dec(v_except_1958_);
v___x_1962_ = lean_box(0);
v_isShared_1963_ = v_isSharedCheck_1967_;
goto v_resetjp_1961_;
}
v_resetjp_1961_:
{
lean_object* v___x_1965_; 
if (v_isShared_1963_ == 0)
{
lean_ctor_set_tag(v___x_1962_, 0);
v___x_1965_ = v___x_1962_;
goto v_reusejp_1964_;
}
else
{
lean_object* v_reuseFailAlloc_1966_; 
v_reuseFailAlloc_1966_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1966_, 0, v_a_1960_);
v___x_1965_ = v_reuseFailAlloc_1966_;
goto v_reusejp_1964_;
}
v_reusejp_1964_:
{
return v___x_1965_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_ofExcept___boxed(lean_object* v_00_u03b1_1968_, lean_object* v_except_1969_, lean_object* v___y_1970_){
_start:
{
lean_object* v_res_1971_; 
v_res_1971_ = l_Std_Async_BaseAsync_ofExcept(v_00_u03b1_1968_, v_except_1969_);
return v_res_1971_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_concurrently___redArg___lam__1(lean_object* v_resultX_1972_, lean_object* v_resultY_1973_){
_start:
{
lean_object* v___x_1975_; lean_object* v___x_1976_; 
v___x_1975_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1975_, 0, v_resultX_1972_);
lean_ctor_set(v___x_1975_, 1, v_resultY_1973_);
v___x_1976_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1976_, 0, v___x_1975_);
return v___x_1976_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_concurrently___redArg___lam__1___boxed(lean_object* v_resultX_1977_, lean_object* v_resultY_1978_, lean_object* v___y_1979_){
_start:
{
lean_object* v_res_1980_; 
v_res_1980_ = l_Std_Async_BaseAsync_concurrently___redArg___lam__1(v_resultX_1977_, v_resultY_1978_);
return v_res_1980_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_concurrently___redArg___lam__0(lean_object* v_taskY_1981_, lean_object* v_resultX_1982_){
_start:
{
lean_object* v___f_1984_; lean_object* v___x_1985_; uint8_t v___x_1986_; lean_object* v___x_1987_; lean_object* v___x_1988_; 
v___f_1984_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_concurrently___redArg___lam__1___boxed), 3, 1);
lean_closure_set(v___f_1984_, 0, v_resultX_1982_);
v___x_1985_ = lean_unsigned_to_nat(0u);
v___x_1986_ = 0;
v___x_1987_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1987_, 0, v_taskY_1981_);
v___x_1988_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1985_, v___x_1986_, v___x_1987_, v___f_1984_);
return v___x_1988_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_concurrently___redArg___lam__0___boxed(lean_object* v_taskY_1989_, lean_object* v_resultX_1990_, lean_object* v___y_1991_){
_start:
{
lean_object* v_res_1992_; 
v_res_1992_ = l_Std_Async_BaseAsync_concurrently___redArg___lam__0(v_taskY_1989_, v_resultX_1990_);
return v_res_1992_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_concurrently___redArg___lam__2(lean_object* v_taskX_1993_, lean_object* v_taskY_1994_){
_start:
{
lean_object* v___f_1996_; lean_object* v___x_1997_; uint8_t v___x_1998_; lean_object* v___x_1999_; lean_object* v___x_2000_; 
v___f_1996_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_concurrently___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_1996_, 0, v_taskY_1994_);
v___x_1997_ = lean_unsigned_to_nat(0u);
v___x_1998_ = 0;
v___x_1999_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1999_, 0, v_taskX_1993_);
v___x_2000_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1997_, v___x_1998_, v___x_1999_, v___f_1996_);
return v___x_2000_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_concurrently___redArg___lam__2___boxed(lean_object* v_taskX_2001_, lean_object* v_taskY_2002_, lean_object* v___y_2003_){
_start:
{
lean_object* v_res_2004_; 
v_res_2004_ = l_Std_Async_BaseAsync_concurrently___redArg___lam__2(v_taskX_2001_, v_taskY_2002_);
return v_res_2004_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_concurrently___redArg___lam__3(lean_object* v_y_2005_, lean_object* v_prio_2006_, lean_object* v___f_2007_, lean_object* v_taskX_2008_){
_start:
{
lean_object* v___f_2010_; lean_object* v___x_2011_; uint8_t v___x_2012_; lean_object* v___x_2013_; lean_object* v___x_2014_; uint8_t v___x_2015_; lean_object* v___x_2016_; lean_object* v___x_2017_; lean_object* v___x_2018_; 
v___f_2010_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_concurrently___redArg___lam__2___boxed), 3, 1);
lean_closure_set(v___f_2010_, 0, v_taskX_2008_);
v___x_2011_ = lean_unsigned_to_nat(0u);
v___x_2012_ = 0;
v___x_2013_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_toRawBaseIO___boxed), 3, 2);
lean_closure_set(v___x_2013_, 0, lean_box(0));
lean_closure_set(v___x_2013_, 1, v_y_2005_);
v___x_2014_ = lean_io_as_task(v___x_2013_, v_prio_2006_);
v___x_2015_ = 1;
v___x_2016_ = lean_task_bind(v___x_2014_, v___f_2007_, v___x_2011_, v___x_2015_);
v___x_2017_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2017_, 0, v___x_2016_);
v___x_2018_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2011_, v___x_2012_, v___x_2017_, v___f_2010_);
return v___x_2018_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_concurrently___redArg___lam__3___boxed(lean_object* v_y_2019_, lean_object* v_prio_2020_, lean_object* v___f_2021_, lean_object* v_taskX_2022_, lean_object* v___y_2023_){
_start:
{
lean_object* v_res_2024_; 
v_res_2024_ = l_Std_Async_BaseAsync_concurrently___redArg___lam__3(v_y_2019_, v_prio_2020_, v___f_2021_, v_taskX_2022_);
return v_res_2024_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_concurrently___redArg(lean_object* v_x_2025_, lean_object* v_y_2026_, lean_object* v_prio_2027_){
_start:
{
lean_object* v___f_2029_; lean_object* v___f_2030_; lean_object* v___x_2031_; uint8_t v___x_2032_; lean_object* v___x_2033_; lean_object* v___x_2034_; uint8_t v___x_2035_; lean_object* v___x_2036_; lean_object* v___x_2037_; lean_object* v___x_2038_; 
v___f_2029_ = ((lean_object*)(l_Std_Async_MaybeTask_joinTask___redArg___closed__0));
lean_inc(v_prio_2027_);
v___f_2030_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_concurrently___redArg___lam__3___boxed), 5, 3);
lean_closure_set(v___f_2030_, 0, v_y_2026_);
lean_closure_set(v___f_2030_, 1, v_prio_2027_);
lean_closure_set(v___f_2030_, 2, v___f_2029_);
v___x_2031_ = lean_unsigned_to_nat(0u);
v___x_2032_ = 0;
v___x_2033_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_toRawBaseIO___boxed), 3, 2);
lean_closure_set(v___x_2033_, 0, lean_box(0));
lean_closure_set(v___x_2033_, 1, v_x_2025_);
v___x_2034_ = lean_io_as_task(v___x_2033_, v_prio_2027_);
v___x_2035_ = 1;
v___x_2036_ = lean_task_bind(v___x_2034_, v___f_2029_, v___x_2031_, v___x_2035_);
v___x_2037_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2037_, 0, v___x_2036_);
v___x_2038_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2031_, v___x_2032_, v___x_2037_, v___f_2030_);
return v___x_2038_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_concurrently___redArg___boxed(lean_object* v_x_2039_, lean_object* v_y_2040_, lean_object* v_prio_2041_, lean_object* v___y_2042_){
_start:
{
lean_object* v_res_2043_; 
v_res_2043_ = l_Std_Async_BaseAsync_concurrently___redArg(v_x_2039_, v_y_2040_, v_prio_2041_);
return v_res_2043_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_concurrently(lean_object* v_00_u03b1_2044_, lean_object* v_00_u03b2_2045_, lean_object* v_x_2046_, lean_object* v_y_2047_, lean_object* v_prio_2048_){
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
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_concurrently___boxed(lean_object* v_00_u03b1_2060_, lean_object* v_00_u03b2_2061_, lean_object* v_x_2062_, lean_object* v_y_2063_, lean_object* v_prio_2064_, lean_object* v___y_2065_){
_start:
{
lean_object* v_res_2066_; 
v_res_2066_ = l_Std_Async_BaseAsync_concurrently(v_00_u03b1_2060_, v_00_u03b2_2061_, v_x_2062_, v_y_2063_, v_prio_2064_);
return v_res_2066_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_race___redArg___lam__2(lean_object* v_promise_2067_, lean_object* v_value_2068_){
_start:
{
lean_object* v___x_2070_; 
v___x_2070_ = lean_io_promise_resolve(v_value_2068_, v_promise_2067_);
return v___x_2070_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_race___redArg___lam__2___boxed(lean_object* v_promise_2071_, lean_object* v_value_2072_, lean_object* v___y_2073_){
_start:
{
lean_object* v_res_2074_; 
v_res_2074_ = l_Std_Async_BaseAsync_race___redArg___lam__2(v_promise_2071_, v_value_2072_);
lean_dec(v_promise_2071_);
return v_res_2074_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_race___redArg___lam__0(lean_object* v_promise_2075_, lean_object* v_____r_2076_){
_start:
{
lean_object* v___x_2078_; lean_object* v___x_2079_; 
v___x_2078_ = l_IO_Promise_result_x21___redArg(v_promise_2075_);
v___x_2079_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2079_, 0, v___x_2078_);
return v___x_2079_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_race___redArg___lam__0___boxed(lean_object* v_promise_2080_, lean_object* v_____r_2081_, lean_object* v___y_2082_){
_start:
{
lean_object* v_res_2083_; 
v_res_2083_ = l_Std_Async_BaseAsync_race___redArg___lam__0(v_promise_2080_, v_____r_2081_);
lean_dec(v_promise_2080_);
return v_res_2083_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_race___redArg___lam__1(lean_object* v_task_u2082_2084_, lean_object* v___x_2085_, lean_object* v___x_2086_, uint8_t v___x_2087_, lean_object* v___f_2088_, lean_object* v_____r_2089_){
_start:
{
lean_object* v___x_2091_; lean_object* v___x_2092_; lean_object* v___x_2093_; 
lean_inc(v___x_2086_);
v___x_2091_ = l_BaseIO_chainTask___redArg(v_task_u2082_2084_, v___x_2085_, v___x_2086_, v___x_2087_);
v___x_2092_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2092_, 0, v___x_2091_);
v___x_2093_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2086_, v___x_2087_, v___x_2092_, v___f_2088_);
return v___x_2093_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_race___redArg___lam__1___boxed(lean_object* v_task_u2082_2094_, lean_object* v___x_2095_, lean_object* v___x_2096_, lean_object* v___x_2097_, lean_object* v___f_2098_, lean_object* v_____r_2099_, lean_object* v___y_2100_){
_start:
{
uint8_t v___x_635__boxed_2101_; lean_object* v_res_2102_; 
v___x_635__boxed_2101_ = lean_unbox(v___x_2097_);
v_res_2102_ = l_Std_Async_BaseAsync_race___redArg___lam__1(v_task_u2082_2094_, v___x_2095_, v___x_2096_, v___x_635__boxed_2101_, v___f_2098_, v_____r_2099_);
return v_res_2102_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_race___redArg___lam__3(lean_object* v___f_2103_, lean_object* v___f_2104_, lean_object* v___f_2105_, lean_object* v_task_u2081_2106_, lean_object* v_task_u2082_2107_){
_start:
{
lean_object* v___x_2109_; lean_object* v___x_2110_; lean_object* v___x_2111_; uint8_t v___x_2112_; lean_object* v___x_2113_; lean_object* v___f_2114_; lean_object* v___x_2115_; lean_object* v___x_2116_; lean_object* v___x_2117_; 
v___x_2109_ = lean_alloc_closure((void*)(l_liftM), 5, 4);
lean_closure_set(v___x_2109_, 0, lean_box(0));
lean_closure_set(v___x_2109_, 1, lean_box(0));
lean_closure_set(v___x_2109_, 2, v___f_2103_);
lean_closure_set(v___x_2109_, 3, lean_box(0));
v___x_2110_ = lean_alloc_closure((void*)(l_Function_comp), 6, 5);
lean_closure_set(v___x_2110_, 0, lean_box(0));
lean_closure_set(v___x_2110_, 1, lean_box(0));
lean_closure_set(v___x_2110_, 2, lean_box(0));
lean_closure_set(v___x_2110_, 3, v___x_2109_);
lean_closure_set(v___x_2110_, 4, v___f_2104_);
v___x_2111_ = lean_unsigned_to_nat(0u);
v___x_2112_ = 0;
v___x_2113_ = lean_box(v___x_2112_);
lean_inc_ref(v___x_2110_);
v___f_2114_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_race___redArg___lam__1___boxed), 7, 5);
lean_closure_set(v___f_2114_, 0, v_task_u2082_2107_);
lean_closure_set(v___f_2114_, 1, v___x_2110_);
lean_closure_set(v___f_2114_, 2, v___x_2111_);
lean_closure_set(v___f_2114_, 3, v___x_2113_);
lean_closure_set(v___f_2114_, 4, v___f_2105_);
v___x_2115_ = l_BaseIO_chainTask___redArg(v_task_u2081_2106_, v___x_2110_, v___x_2111_, v___x_2112_);
v___x_2116_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2116_, 0, v___x_2115_);
v___x_2117_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2111_, v___x_2112_, v___x_2116_, v___f_2114_);
return v___x_2117_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_race___redArg___lam__3___boxed(lean_object* v___f_2118_, lean_object* v___f_2119_, lean_object* v___f_2120_, lean_object* v_task_u2081_2121_, lean_object* v_task_u2082_2122_, lean_object* v___y_2123_){
_start:
{
lean_object* v_res_2124_; 
v_res_2124_ = l_Std_Async_BaseAsync_race___redArg___lam__3(v___f_2118_, v___f_2119_, v___f_2120_, v_task_u2081_2121_, v_task_u2082_2122_);
return v_res_2124_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_race___redArg___lam__4(lean_object* v___f_2125_, lean_object* v___f_2126_, lean_object* v___f_2127_, lean_object* v_y_2128_, lean_object* v_prio_2129_, lean_object* v___f_2130_, lean_object* v_task_u2081_2131_){
_start:
{
lean_object* v___f_2133_; lean_object* v___x_2134_; uint8_t v___x_2135_; lean_object* v___x_2136_; lean_object* v___x_2137_; uint8_t v___x_2138_; lean_object* v___x_2139_; lean_object* v___x_2140_; lean_object* v___x_2141_; 
v___f_2133_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_race___redArg___lam__3___boxed), 6, 4);
lean_closure_set(v___f_2133_, 0, v___f_2125_);
lean_closure_set(v___f_2133_, 1, v___f_2126_);
lean_closure_set(v___f_2133_, 2, v___f_2127_);
lean_closure_set(v___f_2133_, 3, v_task_u2081_2131_);
v___x_2134_ = lean_unsigned_to_nat(0u);
v___x_2135_ = 0;
v___x_2136_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_toRawBaseIO___boxed), 3, 2);
lean_closure_set(v___x_2136_, 0, lean_box(0));
lean_closure_set(v___x_2136_, 1, v_y_2128_);
v___x_2137_ = lean_io_as_task(v___x_2136_, v_prio_2129_);
v___x_2138_ = 1;
v___x_2139_ = lean_task_bind(v___x_2137_, v___f_2130_, v___x_2134_, v___x_2138_);
v___x_2140_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2140_, 0, v___x_2139_);
v___x_2141_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2134_, v___x_2135_, v___x_2140_, v___f_2133_);
return v___x_2141_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_race___redArg___lam__4___boxed(lean_object* v___f_2142_, lean_object* v___f_2143_, lean_object* v___f_2144_, lean_object* v_y_2145_, lean_object* v_prio_2146_, lean_object* v___f_2147_, lean_object* v_task_u2081_2148_, lean_object* v___y_2149_){
_start:
{
lean_object* v_res_2150_; 
v_res_2150_ = l_Std_Async_BaseAsync_race___redArg___lam__4(v___f_2142_, v___f_2143_, v___f_2144_, v_y_2145_, v_prio_2146_, v___f_2147_, v_task_u2081_2148_);
return v_res_2150_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_race___redArg___lam__5(lean_object* v___f_2151_, lean_object* v_y_2152_, lean_object* v_prio_2153_, lean_object* v___f_2154_, lean_object* v_x_2155_, lean_object* v___f_2156_, lean_object* v_promise_2157_){
_start:
{
lean_object* v___f_2159_; lean_object* v___f_2160_; lean_object* v___f_2161_; lean_object* v___x_2162_; uint8_t v___x_2163_; lean_object* v___x_2164_; lean_object* v___x_2165_; uint8_t v___x_2166_; lean_object* v___x_2167_; lean_object* v___x_2168_; lean_object* v___x_2169_; 
lean_inc(v_promise_2157_);
v___f_2159_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_race___redArg___lam__2___boxed), 3, 1);
lean_closure_set(v___f_2159_, 0, v_promise_2157_);
v___f_2160_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_race___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_2160_, 0, v_promise_2157_);
lean_inc(v_prio_2153_);
v___f_2161_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_race___redArg___lam__4___boxed), 8, 6);
lean_closure_set(v___f_2161_, 0, v___f_2151_);
lean_closure_set(v___f_2161_, 1, v___f_2159_);
lean_closure_set(v___f_2161_, 2, v___f_2160_);
lean_closure_set(v___f_2161_, 3, v_y_2152_);
lean_closure_set(v___f_2161_, 4, v_prio_2153_);
lean_closure_set(v___f_2161_, 5, v___f_2154_);
v___x_2162_ = lean_unsigned_to_nat(0u);
v___x_2163_ = 0;
v___x_2164_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_toRawBaseIO___boxed), 3, 2);
lean_closure_set(v___x_2164_, 0, lean_box(0));
lean_closure_set(v___x_2164_, 1, v_x_2155_);
v___x_2165_ = lean_io_as_task(v___x_2164_, v_prio_2153_);
v___x_2166_ = 1;
v___x_2167_ = lean_task_bind(v___x_2165_, v___f_2156_, v___x_2162_, v___x_2166_);
v___x_2168_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2168_, 0, v___x_2167_);
v___x_2169_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2162_, v___x_2163_, v___x_2168_, v___f_2161_);
return v___x_2169_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_race___redArg___lam__5___boxed(lean_object* v___f_2170_, lean_object* v_y_2171_, lean_object* v_prio_2172_, lean_object* v___f_2173_, lean_object* v_x_2174_, lean_object* v___f_2175_, lean_object* v_promise_2176_, lean_object* v___y_2177_){
_start:
{
lean_object* v_res_2178_; 
v_res_2178_ = l_Std_Async_BaseAsync_race___redArg___lam__5(v___f_2170_, v_y_2171_, v_prio_2172_, v___f_2173_, v_x_2174_, v___f_2175_, v_promise_2176_);
return v_res_2178_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_race___redArg(lean_object* v_x_2180_, lean_object* v_y_2181_, lean_object* v_prio_2182_){
_start:
{
lean_object* v___f_2184_; lean_object* v___f_2185_; lean_object* v___f_2186_; lean_object* v___x_2187_; uint8_t v___x_2188_; lean_object* v___x_2189_; lean_object* v___x_2190_; lean_object* v___x_2191_; 
v___f_2184_ = ((lean_object*)(l_Std_Async_MaybeTask_joinTask___redArg___closed__0));
v___f_2185_ = ((lean_object*)(l_Std_Async_BaseAsync_race___redArg___closed__0));
v___f_2186_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_race___redArg___lam__5___boxed), 8, 6);
lean_closure_set(v___f_2186_, 0, v___f_2185_);
lean_closure_set(v___f_2186_, 1, v_y_2181_);
lean_closure_set(v___f_2186_, 2, v_prio_2182_);
lean_closure_set(v___f_2186_, 3, v___f_2184_);
lean_closure_set(v___f_2186_, 4, v_x_2180_);
lean_closure_set(v___f_2186_, 5, v___f_2184_);
v___x_2187_ = lean_unsigned_to_nat(0u);
v___x_2188_ = 0;
v___x_2189_ = lean_io_promise_new();
v___x_2190_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2190_, 0, v___x_2189_);
v___x_2191_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2187_, v___x_2188_, v___x_2190_, v___f_2186_);
return v___x_2191_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_race___redArg___boxed(lean_object* v_x_2192_, lean_object* v_y_2193_, lean_object* v_prio_2194_, lean_object* v___y_2195_){
_start:
{
lean_object* v_res_2196_; 
v_res_2196_ = l_Std_Async_BaseAsync_race___redArg(v_x_2192_, v_y_2193_, v_prio_2194_);
return v_res_2196_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_race(lean_object* v_00_u03b1_2197_, lean_object* v_inst_2198_, lean_object* v_x_2199_, lean_object* v_y_2200_, lean_object* v_prio_2201_){
_start:
{
lean_object* v___f_2203_; lean_object* v___f_2204_; lean_object* v___f_2205_; lean_object* v___x_2206_; uint8_t v___x_2207_; lean_object* v___x_2208_; lean_object* v___x_2209_; lean_object* v___x_2210_; 
v___f_2203_ = ((lean_object*)(l_Std_Async_MaybeTask_joinTask___redArg___closed__0));
v___f_2204_ = ((lean_object*)(l_Std_Async_BaseAsync_race___redArg___closed__0));
v___f_2205_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_race___redArg___lam__5___boxed), 8, 6);
lean_closure_set(v___f_2205_, 0, v___f_2204_);
lean_closure_set(v___f_2205_, 1, v_y_2200_);
lean_closure_set(v___f_2205_, 2, v_prio_2201_);
lean_closure_set(v___f_2205_, 3, v___f_2203_);
lean_closure_set(v___f_2205_, 4, v_x_2199_);
lean_closure_set(v___f_2205_, 5, v___f_2203_);
v___x_2206_ = lean_unsigned_to_nat(0u);
v___x_2207_ = 0;
v___x_2208_ = lean_io_promise_new();
v___x_2209_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2209_, 0, v___x_2208_);
v___x_2210_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2206_, v___x_2207_, v___x_2209_, v___f_2205_);
return v___x_2210_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_race___boxed(lean_object* v_00_u03b1_2211_, lean_object* v_inst_2212_, lean_object* v_x_2213_, lean_object* v_y_2214_, lean_object* v_prio_2215_, lean_object* v___y_2216_){
_start:
{
lean_object* v_res_2217_; 
v_res_2217_ = l_Std_Async_BaseAsync_race(v_00_u03b1_2211_, v_inst_2212_, v_x_2213_, v_y_2214_, v_prio_2215_);
lean_dec(v_inst_2212_);
return v_res_2217_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_concurrentlyAll___redArg___lam__1(lean_object* v_prio_2218_, lean_object* v___f_2219_, lean_object* v_x_2220_){
_start:
{
lean_object* v___x_2222_; lean_object* v___x_2223_; lean_object* v___x_2224_; uint8_t v___x_2225_; lean_object* v___x_2226_; lean_object* v___x_2227_; 
v___x_2222_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_toRawBaseIO___boxed), 3, 2);
lean_closure_set(v___x_2222_, 0, lean_box(0));
lean_closure_set(v___x_2222_, 1, v_x_2220_);
v___x_2223_ = lean_io_as_task(v___x_2222_, v_prio_2218_);
v___x_2224_ = lean_unsigned_to_nat(0u);
v___x_2225_ = 1;
v___x_2226_ = lean_task_bind(v___x_2223_, v___f_2219_, v___x_2224_, v___x_2225_);
v___x_2227_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2227_, 0, v___x_2226_);
return v___x_2227_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_concurrentlyAll___redArg___lam__1___boxed(lean_object* v_prio_2228_, lean_object* v___f_2229_, lean_object* v_x_2230_, lean_object* v___y_2231_){
_start:
{
lean_object* v_res_2232_; 
v_res_2232_ = l_Std_Async_BaseAsync_concurrentlyAll___redArg___lam__1(v_prio_2228_, v___f_2229_, v_x_2230_);
return v_res_2232_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_concurrentlyAll___redArg___lam__0(lean_object* v___x_2234_, lean_object* v_tasks_2235_){
_start:
{
lean_object* v___x_2237_; size_t v_sz_2238_; size_t v___x_2239_; lean_object* v___x_228__overap_2240_; lean_object* v___x_2241_; 
v___x_2237_ = ((lean_object*)(l_Std_Async_BaseAsync_concurrentlyAll___redArg___lam__0___closed__0));
v_sz_2238_ = lean_array_size(v_tasks_2235_);
v___x_2239_ = ((size_t)0ULL);
v___x_228__overap_2240_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_2234_, v___x_2237_, v_sz_2238_, v___x_2239_, v_tasks_2235_);
v___x_2241_ = lean_apply_1(v___x_228__overap_2240_, lean_box(0));
return v___x_2241_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_concurrentlyAll___redArg___lam__0___boxed(lean_object* v___x_2242_, lean_object* v_tasks_2243_, lean_object* v___y_2244_){
_start:
{
lean_object* v_res_2245_; 
v_res_2245_ = l_Std_Async_BaseAsync_concurrentlyAll___redArg___lam__0(v___x_2242_, v_tasks_2243_);
return v_res_2245_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_concurrentlyAll___redArg(lean_object* v_xs_2248_, lean_object* v_prio_2249_){
_start:
{
lean_object* v___f_2251_; lean_object* v___f_2252_; lean_object* v___x_2253_; lean_object* v___f_2254_; lean_object* v___x_2255_; uint8_t v___x_2256_; size_t v_sz_2257_; size_t v___x_2258_; lean_object* v___x_176__overap_2259_; lean_object* v___x_2260_; lean_object* v___x_2261_; 
v___f_2251_ = ((lean_object*)(l_Std_Async_MaybeTask_joinTask___redArg___closed__0));
v___f_2252_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_concurrentlyAll___redArg___lam__1___boxed), 4, 2);
lean_closure_set(v___f_2252_, 0, v_prio_2249_);
lean_closure_set(v___f_2252_, 1, v___f_2251_);
v___x_2253_ = ((lean_object*)(l_Std_Async_BaseAsync_instMonad));
v___f_2254_ = ((lean_object*)(l_Std_Async_BaseAsync_concurrentlyAll___redArg___closed__0));
v___x_2255_ = lean_unsigned_to_nat(0u);
v___x_2256_ = 0;
v_sz_2257_ = lean_array_size(v_xs_2248_);
v___x_2258_ = ((size_t)0ULL);
v___x_176__overap_2259_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_2253_, v___f_2252_, v_sz_2257_, v___x_2258_, v_xs_2248_);
v___x_2260_ = lean_apply_1(v___x_176__overap_2259_, lean_box(0));
v___x_2261_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2255_, v___x_2256_, v___x_2260_, v___f_2254_);
return v___x_2261_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_concurrentlyAll___redArg___boxed(lean_object* v_xs_2262_, lean_object* v_prio_2263_, lean_object* v___y_2264_){
_start:
{
lean_object* v_res_2265_; 
v_res_2265_ = l_Std_Async_BaseAsync_concurrentlyAll___redArg(v_xs_2262_, v_prio_2263_);
return v_res_2265_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_concurrentlyAll(lean_object* v_00_u03b1_2266_, lean_object* v_xs_2267_, lean_object* v_prio_2268_){
_start:
{
lean_object* v___f_2270_; lean_object* v___f_2271_; lean_object* v___x_2272_; lean_object* v___f_2273_; lean_object* v___x_2274_; uint8_t v___x_2275_; size_t v_sz_2276_; size_t v___x_2277_; lean_object* v___x_205__overap_2278_; lean_object* v___x_2279_; lean_object* v___x_2280_; 
v___f_2270_ = ((lean_object*)(l_Std_Async_MaybeTask_joinTask___redArg___closed__0));
v___f_2271_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_concurrentlyAll___redArg___lam__1___boxed), 4, 2);
lean_closure_set(v___f_2271_, 0, v_prio_2268_);
lean_closure_set(v___f_2271_, 1, v___f_2270_);
v___x_2272_ = ((lean_object*)(l_Std_Async_BaseAsync_instMonad));
v___f_2273_ = ((lean_object*)(l_Std_Async_BaseAsync_concurrentlyAll___redArg___closed__0));
v___x_2274_ = lean_unsigned_to_nat(0u);
v___x_2275_ = 0;
v_sz_2276_ = lean_array_size(v_xs_2267_);
v___x_2277_ = ((size_t)0ULL);
v___x_205__overap_2278_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_2272_, v___f_2271_, v_sz_2276_, v___x_2277_, v_xs_2267_);
v___x_2279_ = lean_apply_1(v___x_205__overap_2278_, lean_box(0));
v___x_2280_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2274_, v___x_2275_, v___x_2279_, v___f_2273_);
return v___x_2280_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_concurrentlyAll___boxed(lean_object* v_00_u03b1_2281_, lean_object* v_xs_2282_, lean_object* v_prio_2283_, lean_object* v___y_2284_){
_start:
{
lean_object* v_res_2285_; 
v_res_2285_ = l_Std_Async_BaseAsync_concurrentlyAll(v_00_u03b1_2281_, v_xs_2282_, v_prio_2283_);
return v_res_2285_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_raceAll___redArg___lam__2(lean_object* v___f_2286_, lean_object* v___f_2287_, lean_object* v_task_u2081_2288_){
_start:
{
lean_object* v___x_2290_; lean_object* v___x_2291_; lean_object* v___x_2292_; uint8_t v___x_2293_; lean_object* v___x_2294_; lean_object* v___x_2295_; 
v___x_2290_ = lean_alloc_closure((void*)(l_liftM), 5, 4);
lean_closure_set(v___x_2290_, 0, lean_box(0));
lean_closure_set(v___x_2290_, 1, lean_box(0));
lean_closure_set(v___x_2290_, 2, v___f_2286_);
lean_closure_set(v___x_2290_, 3, lean_box(0));
v___x_2291_ = lean_alloc_closure((void*)(l_Function_comp), 6, 5);
lean_closure_set(v___x_2291_, 0, lean_box(0));
lean_closure_set(v___x_2291_, 1, lean_box(0));
lean_closure_set(v___x_2291_, 2, lean_box(0));
lean_closure_set(v___x_2291_, 3, v___x_2290_);
lean_closure_set(v___x_2291_, 4, v___f_2287_);
v___x_2292_ = lean_unsigned_to_nat(0u);
v___x_2293_ = 0;
v___x_2294_ = l_BaseIO_chainTask___redArg(v_task_u2081_2288_, v___x_2291_, v___x_2292_, v___x_2293_);
v___x_2295_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2295_, 0, v___x_2294_);
return v___x_2295_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_raceAll___redArg___lam__2___boxed(lean_object* v___f_2296_, lean_object* v___f_2297_, lean_object* v_task_u2081_2298_, lean_object* v___y_2299_){
_start:
{
lean_object* v_res_2300_; 
v_res_2300_ = l_Std_Async_BaseAsync_raceAll___redArg___lam__2(v___f_2296_, v___f_2297_, v_task_u2081_2298_);
return v_res_2300_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_raceAll___redArg___lam__0(lean_object* v_prio_2301_, lean_object* v___f_2302_, lean_object* v___f_2303_, lean_object* v_x_2304_){
_start:
{
lean_object* v___x_2306_; uint8_t v___x_2307_; lean_object* v___x_2308_; lean_object* v___x_2309_; uint8_t v___x_2310_; lean_object* v___x_2311_; lean_object* v___x_2312_; lean_object* v___x_2313_; 
v___x_2306_ = lean_unsigned_to_nat(0u);
v___x_2307_ = 0;
v___x_2308_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_toRawBaseIO___boxed), 3, 2);
lean_closure_set(v___x_2308_, 0, lean_box(0));
lean_closure_set(v___x_2308_, 1, v_x_2304_);
v___x_2309_ = lean_io_as_task(v___x_2308_, v_prio_2301_);
v___x_2310_ = 1;
v___x_2311_ = lean_task_bind(v___x_2309_, v___f_2302_, v___x_2306_, v___x_2310_);
v___x_2312_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2312_, 0, v___x_2311_);
v___x_2313_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2306_, v___x_2307_, v___x_2312_, v___f_2303_);
return v___x_2313_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_raceAll___redArg___lam__0___boxed(lean_object* v_prio_2314_, lean_object* v___f_2315_, lean_object* v___f_2316_, lean_object* v_x_2317_, lean_object* v___y_2318_){
_start:
{
lean_object* v_res_2319_; 
v_res_2319_ = l_Std_Async_BaseAsync_raceAll___redArg___lam__0(v_prio_2314_, v___f_2315_, v___f_2316_, v_x_2317_);
return v_res_2319_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_raceAll___redArg___lam__3(lean_object* v___f_2320_, lean_object* v_prio_2321_, lean_object* v___f_2322_, lean_object* v_inst_2323_, lean_object* v_xs_2324_, lean_object* v_promise_2325_){
_start:
{
lean_object* v___f_2327_; lean_object* v___f_2328_; lean_object* v___f_2329_; lean_object* v___f_2330_; lean_object* v___x_2331_; uint8_t v___x_2332_; lean_object* v___x_2333_; lean_object* v___x_2334_; 
lean_inc(v_promise_2325_);
v___f_2327_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_race___redArg___lam__2___boxed), 3, 1);
lean_closure_set(v___f_2327_, 0, v_promise_2325_);
v___f_2328_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_raceAll___redArg___lam__2___boxed), 4, 2);
lean_closure_set(v___f_2328_, 0, v___f_2320_);
lean_closure_set(v___f_2328_, 1, v___f_2327_);
v___f_2329_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_raceAll___redArg___lam__0___boxed), 5, 3);
lean_closure_set(v___f_2329_, 0, v_prio_2321_);
lean_closure_set(v___f_2329_, 1, v___f_2322_);
lean_closure_set(v___f_2329_, 2, v___f_2328_);
v___f_2330_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_race___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_2330_, 0, v_promise_2325_);
v___x_2331_ = lean_unsigned_to_nat(0u);
v___x_2332_ = 0;
v___x_2333_ = lean_apply_3(v_inst_2323_, v_xs_2324_, v___f_2329_, lean_box(0));
v___x_2334_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2331_, v___x_2332_, v___x_2333_, v___f_2330_);
return v___x_2334_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_raceAll___redArg___lam__3___boxed(lean_object* v___f_2335_, lean_object* v_prio_2336_, lean_object* v___f_2337_, lean_object* v_inst_2338_, lean_object* v_xs_2339_, lean_object* v_promise_2340_, lean_object* v___y_2341_){
_start:
{
lean_object* v_res_2342_; 
v_res_2342_ = l_Std_Async_BaseAsync_raceAll___redArg___lam__3(v___f_2335_, v_prio_2336_, v___f_2337_, v_inst_2338_, v_xs_2339_, v_promise_2340_);
return v_res_2342_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_raceAll___redArg(lean_object* v_inst_2343_, lean_object* v_xs_2344_, lean_object* v_prio_2345_){
_start:
{
lean_object* v___f_2347_; lean_object* v___f_2348_; lean_object* v___f_2349_; lean_object* v___x_2350_; uint8_t v___x_2351_; lean_object* v___x_2352_; lean_object* v___x_2353_; lean_object* v___x_2354_; 
v___f_2347_ = ((lean_object*)(l_Std_Async_MaybeTask_joinTask___redArg___closed__0));
v___f_2348_ = ((lean_object*)(l_Std_Async_BaseAsync_race___redArg___closed__0));
v___f_2349_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_raceAll___redArg___lam__3___boxed), 7, 5);
lean_closure_set(v___f_2349_, 0, v___f_2348_);
lean_closure_set(v___f_2349_, 1, v_prio_2345_);
lean_closure_set(v___f_2349_, 2, v___f_2347_);
lean_closure_set(v___f_2349_, 3, v_inst_2343_);
lean_closure_set(v___f_2349_, 4, v_xs_2344_);
v___x_2350_ = lean_unsigned_to_nat(0u);
v___x_2351_ = 0;
v___x_2352_ = lean_io_promise_new();
v___x_2353_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2353_, 0, v___x_2352_);
v___x_2354_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2350_, v___x_2351_, v___x_2353_, v___f_2349_);
return v___x_2354_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_raceAll___redArg___boxed(lean_object* v_inst_2355_, lean_object* v_xs_2356_, lean_object* v_prio_2357_, lean_object* v___y_2358_){
_start:
{
lean_object* v_res_2359_; 
v_res_2359_ = l_Std_Async_BaseAsync_raceAll___redArg(v_inst_2355_, v_xs_2356_, v_prio_2357_);
return v_res_2359_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_raceAll(lean_object* v_00_u03b1_2360_, lean_object* v_c_2361_, lean_object* v_inst_2362_, lean_object* v_inst_2363_, lean_object* v_xs_2364_, lean_object* v_prio_2365_){
_start:
{
lean_object* v___f_2367_; lean_object* v___f_2368_; lean_object* v___f_2369_; lean_object* v___x_2370_; uint8_t v___x_2371_; lean_object* v___x_2372_; lean_object* v___x_2373_; lean_object* v___x_2374_; 
v___f_2367_ = ((lean_object*)(l_Std_Async_MaybeTask_joinTask___redArg___closed__0));
v___f_2368_ = ((lean_object*)(l_Std_Async_BaseAsync_race___redArg___closed__0));
v___f_2369_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_raceAll___redArg___lam__3___boxed), 7, 5);
lean_closure_set(v___f_2369_, 0, v___f_2368_);
lean_closure_set(v___f_2369_, 1, v_prio_2365_);
lean_closure_set(v___f_2369_, 2, v___f_2367_);
lean_closure_set(v___f_2369_, 3, v_inst_2363_);
lean_closure_set(v___f_2369_, 4, v_xs_2364_);
v___x_2370_ = lean_unsigned_to_nat(0u);
v___x_2371_ = 0;
v___x_2372_ = lean_io_promise_new();
v___x_2373_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2373_, 0, v___x_2372_);
v___x_2374_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2370_, v___x_2371_, v___x_2373_, v___f_2369_);
return v___x_2374_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_raceAll___boxed(lean_object* v_00_u03b1_2375_, lean_object* v_c_2376_, lean_object* v_inst_2377_, lean_object* v_inst_2378_, lean_object* v_xs_2379_, lean_object* v_prio_2380_, lean_object* v___y_2381_){
_start:
{
lean_object* v_res_2382_; 
v_res_2382_ = l_Std_Async_BaseAsync_raceAll(v_00_u03b1_2375_, v_c_2376_, v_inst_2377_, v_inst_2378_, v_xs_2379_, v_prio_2380_);
lean_dec(v_inst_2377_);
return v_res_2382_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_mk___redArg(lean_object* v_toBaseAsync_2383_){
_start:
{
lean_object* v___x_2385_; 
v___x_2385_ = lean_apply_1(v_toBaseAsync_2383_, lean_box(0));
return v___x_2385_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_mk___redArg___boxed(lean_object* v_toBaseAsync_2386_, lean_object* v___y_2387_){
_start:
{
lean_object* v_res_2388_; 
v_res_2388_ = l_Std_Async_EAsync_mk___redArg(v_toBaseAsync_2386_);
return v_res_2388_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_mk(lean_object* v_00_u03b5_2389_, lean_object* v_00_u03b1_2390_, lean_object* v_toBaseAsync_2391_){
_start:
{
lean_object* v___x_2393_; 
v___x_2393_ = lean_apply_1(v_toBaseAsync_2391_, lean_box(0));
return v___x_2393_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_mk___boxed(lean_object* v_00_u03b5_2394_, lean_object* v_00_u03b1_2395_, lean_object* v_toBaseAsync_2396_, lean_object* v___y_2397_){
_start:
{
lean_object* v_res_2398_; 
v_res_2398_ = l_Std_Async_EAsync_mk(v_00_u03b5_2394_, v_00_u03b1_2395_, v_toBaseAsync_2396_);
return v_res_2398_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_toBaseAsync___redArg(lean_object* v_self_2399_){
_start:
{
lean_object* v___x_2401_; 
v___x_2401_ = lean_apply_1(v_self_2399_, lean_box(0));
return v___x_2401_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_toBaseAsync___redArg___boxed(lean_object* v_self_2402_, lean_object* v___y_2403_){
_start:
{
lean_object* v_res_2404_; 
v_res_2404_ = l_Std_Async_EAsync_toBaseAsync___redArg(v_self_2402_);
return v_res_2404_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_toBaseAsync(lean_object* v_00_u03b5_2405_, lean_object* v_00_u03b1_2406_, lean_object* v_self_2407_){
_start:
{
lean_object* v___x_2409_; 
v___x_2409_ = lean_apply_1(v_self_2407_, lean_box(0));
return v___x_2409_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_toBaseAsync___boxed(lean_object* v_00_u03b5_2410_, lean_object* v_00_u03b1_2411_, lean_object* v_self_2412_, lean_object* v___y_2413_){
_start:
{
lean_object* v_res_2414_; 
v_res_2414_ = l_Std_Async_EAsync_toBaseAsync(v_00_u03b5_2410_, v_00_u03b1_2411_, v_self_2412_);
return v_res_2414_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_toBaseIO___redArg(lean_object* v_x_2415_){
_start:
{
lean_object* v___x_2417_; 
v___x_2417_ = lean_apply_1(v_x_2415_, lean_box(0));
if (lean_obj_tag(v___x_2417_) == 0)
{
lean_object* v_a_2418_; lean_object* v___x_2419_; 
v_a_2418_ = lean_ctor_get(v___x_2417_, 0);
lean_inc(v_a_2418_);
lean_dec_ref_known(v___x_2417_, 1);
v___x_2419_ = lean_task_pure(v_a_2418_);
return v___x_2419_;
}
else
{
lean_object* v_a_2420_; 
v_a_2420_ = lean_ctor_get(v___x_2417_, 0);
lean_inc_ref(v_a_2420_);
lean_dec_ref_known(v___x_2417_, 1);
return v_a_2420_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_toBaseIO___redArg___boxed(lean_object* v_x_2421_, lean_object* v___y_2422_){
_start:
{
lean_object* v_res_2423_; 
v_res_2423_ = l_Std_Async_EAsync_toBaseIO___redArg(v_x_2421_);
return v_res_2423_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_toBaseIO(lean_object* v_00_u03b5_2424_, lean_object* v_00_u03b1_2425_, lean_object* v_x_2426_){
_start:
{
lean_object* v___x_2428_; 
v___x_2428_ = lean_apply_1(v_x_2426_, lean_box(0));
if (lean_obj_tag(v___x_2428_) == 0)
{
lean_object* v_a_2429_; lean_object* v___x_2430_; 
v_a_2429_ = lean_ctor_get(v___x_2428_, 0);
lean_inc(v_a_2429_);
lean_dec_ref_known(v___x_2428_, 1);
v___x_2430_ = lean_task_pure(v_a_2429_);
return v___x_2430_;
}
else
{
lean_object* v_a_2431_; 
v_a_2431_ = lean_ctor_get(v___x_2428_, 0);
lean_inc_ref(v_a_2431_);
lean_dec_ref_known(v___x_2428_, 1);
return v_a_2431_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_toBaseIO___boxed(lean_object* v_00_u03b5_2432_, lean_object* v_00_u03b1_2433_, lean_object* v_x_2434_, lean_object* v___y_2435_){
_start:
{
lean_object* v_res_2436_; 
v_res_2436_ = l_Std_Async_EAsync_toBaseIO(v_00_u03b5_2432_, v_00_u03b1_2433_, v_x_2434_);
return v_res_2436_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_ofTask___redArg(lean_object* v_x_2437_){
_start:
{
lean_object* v___x_2439_; 
v___x_2439_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2439_, 0, v_x_2437_);
return v___x_2439_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_ofTask___redArg___boxed(lean_object* v_x_2440_, lean_object* v___y_2441_){
_start:
{
lean_object* v_res_2442_; 
v_res_2442_ = l_Std_Async_EAsync_ofTask___redArg(v_x_2440_);
return v_res_2442_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_ofTask(lean_object* v_00_u03b5_2443_, lean_object* v_00_u03b1_2444_, lean_object* v_x_2445_){
_start:
{
lean_object* v___x_2447_; 
v___x_2447_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2447_, 0, v_x_2445_);
return v___x_2447_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_ofTask___boxed(lean_object* v_00_u03b5_2448_, lean_object* v_00_u03b1_2449_, lean_object* v_x_2450_, lean_object* v___y_2451_){
_start:
{
lean_object* v_res_2452_; 
v_res_2452_ = l_Std_Async_EAsync_ofTask(v_00_u03b5_2448_, v_00_u03b1_2449_, v_x_2450_);
return v_res_2452_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_toEIO___redArg(lean_object* v_x_2453_){
_start:
{
lean_object* v___x_2455_; 
v___x_2455_ = lean_apply_1(v_x_2453_, lean_box(0));
if (lean_obj_tag(v___x_2455_) == 0)
{
lean_object* v_a_2456_; lean_object* v___x_2458_; uint8_t v_isShared_2459_; uint8_t v_isSharedCheck_2464_; 
v_a_2456_ = lean_ctor_get(v___x_2455_, 0);
v_isSharedCheck_2464_ = !lean_is_exclusive(v___x_2455_);
if (v_isSharedCheck_2464_ == 0)
{
v___x_2458_ = v___x_2455_;
v_isShared_2459_ = v_isSharedCheck_2464_;
goto v_resetjp_2457_;
}
else
{
lean_inc(v_a_2456_);
lean_dec(v___x_2455_);
v___x_2458_ = lean_box(0);
v_isShared_2459_ = v_isSharedCheck_2464_;
goto v_resetjp_2457_;
}
v_resetjp_2457_:
{
lean_object* v___x_2460_; lean_object* v___x_2462_; 
v___x_2460_ = lean_task_pure(v_a_2456_);
if (v_isShared_2459_ == 0)
{
lean_ctor_set(v___x_2458_, 0, v___x_2460_);
v___x_2462_ = v___x_2458_;
goto v_reusejp_2461_;
}
else
{
lean_object* v_reuseFailAlloc_2463_; 
v_reuseFailAlloc_2463_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2463_, 0, v___x_2460_);
v___x_2462_ = v_reuseFailAlloc_2463_;
goto v_reusejp_2461_;
}
v_reusejp_2461_:
{
return v___x_2462_;
}
}
}
else
{
lean_object* v_a_2465_; lean_object* v___x_2467_; uint8_t v_isShared_2468_; uint8_t v_isSharedCheck_2472_; 
v_a_2465_ = lean_ctor_get(v___x_2455_, 0);
v_isSharedCheck_2472_ = !lean_is_exclusive(v___x_2455_);
if (v_isSharedCheck_2472_ == 0)
{
v___x_2467_ = v___x_2455_;
v_isShared_2468_ = v_isSharedCheck_2472_;
goto v_resetjp_2466_;
}
else
{
lean_inc(v_a_2465_);
lean_dec(v___x_2455_);
v___x_2467_ = lean_box(0);
v_isShared_2468_ = v_isSharedCheck_2472_;
goto v_resetjp_2466_;
}
v_resetjp_2466_:
{
lean_object* v___x_2470_; 
if (v_isShared_2468_ == 0)
{
lean_ctor_set_tag(v___x_2467_, 0);
v___x_2470_ = v___x_2467_;
goto v_reusejp_2469_;
}
else
{
lean_object* v_reuseFailAlloc_2471_; 
v_reuseFailAlloc_2471_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2471_, 0, v_a_2465_);
v___x_2470_ = v_reuseFailAlloc_2471_;
goto v_reusejp_2469_;
}
v_reusejp_2469_:
{
return v___x_2470_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_toEIO___redArg___boxed(lean_object* v_x_2473_, lean_object* v___y_2474_){
_start:
{
lean_object* v_res_2475_; 
v_res_2475_ = l_Std_Async_EAsync_toEIO___redArg(v_x_2473_);
return v_res_2475_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_toEIO(lean_object* v_00_u03b5_2476_, lean_object* v_00_u03b1_2477_, lean_object* v_x_2478_){
_start:
{
lean_object* v___x_2480_; 
v___x_2480_ = lean_apply_1(v_x_2478_, lean_box(0));
if (lean_obj_tag(v___x_2480_) == 0)
{
lean_object* v_a_2481_; lean_object* v___x_2483_; uint8_t v_isShared_2484_; uint8_t v_isSharedCheck_2489_; 
v_a_2481_ = lean_ctor_get(v___x_2480_, 0);
v_isSharedCheck_2489_ = !lean_is_exclusive(v___x_2480_);
if (v_isSharedCheck_2489_ == 0)
{
v___x_2483_ = v___x_2480_;
v_isShared_2484_ = v_isSharedCheck_2489_;
goto v_resetjp_2482_;
}
else
{
lean_inc(v_a_2481_);
lean_dec(v___x_2480_);
v___x_2483_ = lean_box(0);
v_isShared_2484_ = v_isSharedCheck_2489_;
goto v_resetjp_2482_;
}
v_resetjp_2482_:
{
lean_object* v___x_2485_; lean_object* v___x_2487_; 
v___x_2485_ = lean_task_pure(v_a_2481_);
if (v_isShared_2484_ == 0)
{
lean_ctor_set(v___x_2483_, 0, v___x_2485_);
v___x_2487_ = v___x_2483_;
goto v_reusejp_2486_;
}
else
{
lean_object* v_reuseFailAlloc_2488_; 
v_reuseFailAlloc_2488_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2488_, 0, v___x_2485_);
v___x_2487_ = v_reuseFailAlloc_2488_;
goto v_reusejp_2486_;
}
v_reusejp_2486_:
{
return v___x_2487_;
}
}
}
else
{
lean_object* v_a_2490_; lean_object* v___x_2492_; uint8_t v_isShared_2493_; uint8_t v_isSharedCheck_2497_; 
v_a_2490_ = lean_ctor_get(v___x_2480_, 0);
v_isSharedCheck_2497_ = !lean_is_exclusive(v___x_2480_);
if (v_isSharedCheck_2497_ == 0)
{
v___x_2492_ = v___x_2480_;
v_isShared_2493_ = v_isSharedCheck_2497_;
goto v_resetjp_2491_;
}
else
{
lean_inc(v_a_2490_);
lean_dec(v___x_2480_);
v___x_2492_ = lean_box(0);
v_isShared_2493_ = v_isSharedCheck_2497_;
goto v_resetjp_2491_;
}
v_resetjp_2491_:
{
lean_object* v___x_2495_; 
if (v_isShared_2493_ == 0)
{
lean_ctor_set_tag(v___x_2492_, 0);
v___x_2495_ = v___x_2492_;
goto v_reusejp_2494_;
}
else
{
lean_object* v_reuseFailAlloc_2496_; 
v_reuseFailAlloc_2496_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2496_, 0, v_a_2490_);
v___x_2495_ = v_reuseFailAlloc_2496_;
goto v_reusejp_2494_;
}
v_reusejp_2494_:
{
return v___x_2495_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_toEIO___boxed(lean_object* v_00_u03b5_2498_, lean_object* v_00_u03b1_2499_, lean_object* v_x_2500_, lean_object* v___y_2501_){
_start:
{
lean_object* v_res_2502_; 
v_res_2502_ = l_Std_Async_EAsync_toEIO(v_00_u03b5_2498_, v_00_u03b1_2499_, v_x_2500_);
return v_res_2502_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_ofETask___redArg(lean_object* v_x_2503_){
_start:
{
lean_object* v___x_2505_; 
v___x_2505_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2505_, 0, v_x_2503_);
return v___x_2505_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_ofETask___redArg___boxed(lean_object* v_x_2506_, lean_object* v___y_2507_){
_start:
{
lean_object* v_res_2508_; 
v_res_2508_ = l_Std_Async_EAsync_ofETask___redArg(v_x_2506_);
return v_res_2508_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_ofETask(lean_object* v_00_u03b5_2509_, lean_object* v_00_u03b1_2510_, lean_object* v_x_2511_){
_start:
{
lean_object* v___x_2513_; 
v___x_2513_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2513_, 0, v_x_2511_);
return v___x_2513_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_ofETask___boxed(lean_object* v_00_u03b5_2514_, lean_object* v_00_u03b1_2515_, lean_object* v_x_2516_, lean_object* v___y_2517_){
_start:
{
lean_object* v_res_2518_; 
v_res_2518_ = l_Std_Async_EAsync_ofETask(v_00_u03b5_2514_, v_00_u03b1_2515_, v_x_2516_);
return v_res_2518_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_pure___redArg(lean_object* v_a_2519_){
_start:
{
lean_object* v___x_2521_; lean_object* v___x_2522_; 
v___x_2521_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2521_, 0, v_a_2519_);
v___x_2522_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2522_, 0, v___x_2521_);
return v___x_2522_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_pure___redArg___boxed(lean_object* v_a_2523_, lean_object* v___y_2524_){
_start:
{
lean_object* v_res_2525_; 
v_res_2525_ = l_Std_Async_EAsync_pure___redArg(v_a_2523_);
return v_res_2525_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_pure(lean_object* v_00_u03b1_2526_, lean_object* v_00_u03b5_2527_, lean_object* v_a_2528_){
_start:
{
lean_object* v___x_2530_; lean_object* v___x_2531_; 
v___x_2530_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2530_, 0, v_a_2528_);
v___x_2531_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2531_, 0, v___x_2530_);
return v___x_2531_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_pure___boxed(lean_object* v_00_u03b1_2532_, lean_object* v_00_u03b5_2533_, lean_object* v_a_2534_, lean_object* v___y_2535_){
_start:
{
lean_object* v_res_2536_; 
v_res_2536_ = l_Std_Async_EAsync_pure(v_00_u03b1_2532_, v_00_u03b5_2533_, v_a_2534_);
return v_res_2536_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_map___redArg(lean_object* v_f_2537_, lean_object* v_self_2538_){
_start:
{
lean_object* v___x_2540_; lean_object* v___x_2541_; uint8_t v___x_2542_; lean_object* v___x_2543_; lean_object* v___y_2545_; 
lean_inc(v_f_2537_);
v___x_2540_ = lean_alloc_closure((void*)(l_Except_map), 5, 4);
lean_closure_set(v___x_2540_, 0, lean_box(0));
lean_closure_set(v___x_2540_, 1, lean_box(0));
lean_closure_set(v___x_2540_, 2, lean_box(0));
lean_closure_set(v___x_2540_, 3, v_f_2537_);
v___x_2541_ = lean_unsigned_to_nat(0u);
v___x_2542_ = 0;
v___x_2543_ = lean_apply_1(v_self_2538_, lean_box(0));
if (lean_obj_tag(v___x_2543_) == 0)
{
lean_object* v_a_2547_; 
lean_dec_ref(v___x_2540_);
v_a_2547_ = lean_ctor_get(v___x_2543_, 0);
lean_inc(v_a_2547_);
lean_dec_ref_known(v___x_2543_, 1);
if (lean_obj_tag(v_a_2547_) == 0)
{
lean_object* v_a_2548_; lean_object* v___x_2550_; uint8_t v_isShared_2551_; uint8_t v_isSharedCheck_2555_; 
lean_dec(v_f_2537_);
v_a_2548_ = lean_ctor_get(v_a_2547_, 0);
v_isSharedCheck_2555_ = !lean_is_exclusive(v_a_2547_);
if (v_isSharedCheck_2555_ == 0)
{
v___x_2550_ = v_a_2547_;
v_isShared_2551_ = v_isSharedCheck_2555_;
goto v_resetjp_2549_;
}
else
{
lean_inc(v_a_2548_);
lean_dec(v_a_2547_);
v___x_2550_ = lean_box(0);
v_isShared_2551_ = v_isSharedCheck_2555_;
goto v_resetjp_2549_;
}
v_resetjp_2549_:
{
lean_object* v___x_2553_; 
if (v_isShared_2551_ == 0)
{
v___x_2553_ = v___x_2550_;
goto v_reusejp_2552_;
}
else
{
lean_object* v_reuseFailAlloc_2554_; 
v_reuseFailAlloc_2554_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2554_, 0, v_a_2548_);
v___x_2553_ = v_reuseFailAlloc_2554_;
goto v_reusejp_2552_;
}
v_reusejp_2552_:
{
v___y_2545_ = v___x_2553_;
goto v___jp_2544_;
}
}
}
else
{
lean_object* v_a_2556_; lean_object* v___x_2558_; uint8_t v_isShared_2559_; uint8_t v_isSharedCheck_2564_; 
v_a_2556_ = lean_ctor_get(v_a_2547_, 0);
v_isSharedCheck_2564_ = !lean_is_exclusive(v_a_2547_);
if (v_isSharedCheck_2564_ == 0)
{
v___x_2558_ = v_a_2547_;
v_isShared_2559_ = v_isSharedCheck_2564_;
goto v_resetjp_2557_;
}
else
{
lean_inc(v_a_2556_);
lean_dec(v_a_2547_);
v___x_2558_ = lean_box(0);
v_isShared_2559_ = v_isSharedCheck_2564_;
goto v_resetjp_2557_;
}
v_resetjp_2557_:
{
lean_object* v___x_2560_; lean_object* v___x_2562_; 
v___x_2560_ = lean_apply_1(v_f_2537_, v_a_2556_);
if (v_isShared_2559_ == 0)
{
lean_ctor_set(v___x_2558_, 0, v___x_2560_);
v___x_2562_ = v___x_2558_;
goto v_reusejp_2561_;
}
else
{
lean_object* v_reuseFailAlloc_2563_; 
v_reuseFailAlloc_2563_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2563_, 0, v___x_2560_);
v___x_2562_ = v_reuseFailAlloc_2563_;
goto v_reusejp_2561_;
}
v_reusejp_2561_:
{
v___y_2545_ = v___x_2562_;
goto v___jp_2544_;
}
}
}
}
else
{
lean_object* v_a_2565_; lean_object* v___x_2567_; uint8_t v_isShared_2568_; uint8_t v_isSharedCheck_2573_; 
lean_dec(v_f_2537_);
v_a_2565_ = lean_ctor_get(v___x_2543_, 0);
v_isSharedCheck_2573_ = !lean_is_exclusive(v___x_2543_);
if (v_isSharedCheck_2573_ == 0)
{
v___x_2567_ = v___x_2543_;
v_isShared_2568_ = v_isSharedCheck_2573_;
goto v_resetjp_2566_;
}
else
{
lean_inc(v_a_2565_);
lean_dec(v___x_2543_);
v___x_2567_ = lean_box(0);
v_isShared_2568_ = v_isSharedCheck_2573_;
goto v_resetjp_2566_;
}
v_resetjp_2566_:
{
lean_object* v___x_2569_; lean_object* v___x_2571_; 
v___x_2569_ = lean_task_map(v___x_2540_, v_a_2565_, v___x_2541_, v___x_2542_);
if (v_isShared_2568_ == 0)
{
lean_ctor_set(v___x_2567_, 0, v___x_2569_);
v___x_2571_ = v___x_2567_;
goto v_reusejp_2570_;
}
else
{
lean_object* v_reuseFailAlloc_2572_; 
v_reuseFailAlloc_2572_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2572_, 0, v___x_2569_);
v___x_2571_ = v_reuseFailAlloc_2572_;
goto v_reusejp_2570_;
}
v_reusejp_2570_:
{
return v___x_2571_;
}
}
}
v___jp_2544_:
{
lean_object* v___x_2546_; 
v___x_2546_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2546_, 0, v___y_2545_);
return v___x_2546_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_map___redArg___boxed(lean_object* v_f_2574_, lean_object* v_self_2575_, lean_object* v___y_2576_){
_start:
{
lean_object* v_res_2577_; 
v_res_2577_ = l_Std_Async_EAsync_map___redArg(v_f_2574_, v_self_2575_);
return v_res_2577_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_map(lean_object* v_00_u03b1_2578_, lean_object* v_00_u03b2_2579_, lean_object* v_00_u03b5_2580_, lean_object* v_f_2581_, lean_object* v_self_2582_){
_start:
{
lean_object* v___x_2584_; lean_object* v___x_2585_; uint8_t v___x_2586_; lean_object* v___x_2587_; lean_object* v___y_2589_; 
lean_inc(v_f_2581_);
v___x_2584_ = lean_alloc_closure((void*)(l_Except_map), 5, 4);
lean_closure_set(v___x_2584_, 0, lean_box(0));
lean_closure_set(v___x_2584_, 1, lean_box(0));
lean_closure_set(v___x_2584_, 2, lean_box(0));
lean_closure_set(v___x_2584_, 3, v_f_2581_);
v___x_2585_ = lean_unsigned_to_nat(0u);
v___x_2586_ = 0;
v___x_2587_ = lean_apply_1(v_self_2582_, lean_box(0));
if (lean_obj_tag(v___x_2587_) == 0)
{
lean_object* v_a_2591_; 
lean_dec_ref(v___x_2584_);
v_a_2591_ = lean_ctor_get(v___x_2587_, 0);
lean_inc(v_a_2591_);
lean_dec_ref_known(v___x_2587_, 1);
if (lean_obj_tag(v_a_2591_) == 0)
{
lean_object* v_a_2592_; lean_object* v___x_2594_; uint8_t v_isShared_2595_; uint8_t v_isSharedCheck_2599_; 
lean_dec(v_f_2581_);
v_a_2592_ = lean_ctor_get(v_a_2591_, 0);
v_isSharedCheck_2599_ = !lean_is_exclusive(v_a_2591_);
if (v_isSharedCheck_2599_ == 0)
{
v___x_2594_ = v_a_2591_;
v_isShared_2595_ = v_isSharedCheck_2599_;
goto v_resetjp_2593_;
}
else
{
lean_inc(v_a_2592_);
lean_dec(v_a_2591_);
v___x_2594_ = lean_box(0);
v_isShared_2595_ = v_isSharedCheck_2599_;
goto v_resetjp_2593_;
}
v_resetjp_2593_:
{
lean_object* v___x_2597_; 
if (v_isShared_2595_ == 0)
{
v___x_2597_ = v___x_2594_;
goto v_reusejp_2596_;
}
else
{
lean_object* v_reuseFailAlloc_2598_; 
v_reuseFailAlloc_2598_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2598_, 0, v_a_2592_);
v___x_2597_ = v_reuseFailAlloc_2598_;
goto v_reusejp_2596_;
}
v_reusejp_2596_:
{
v___y_2589_ = v___x_2597_;
goto v___jp_2588_;
}
}
}
else
{
lean_object* v_a_2600_; lean_object* v___x_2602_; uint8_t v_isShared_2603_; uint8_t v_isSharedCheck_2608_; 
v_a_2600_ = lean_ctor_get(v_a_2591_, 0);
v_isSharedCheck_2608_ = !lean_is_exclusive(v_a_2591_);
if (v_isSharedCheck_2608_ == 0)
{
v___x_2602_ = v_a_2591_;
v_isShared_2603_ = v_isSharedCheck_2608_;
goto v_resetjp_2601_;
}
else
{
lean_inc(v_a_2600_);
lean_dec(v_a_2591_);
v___x_2602_ = lean_box(0);
v_isShared_2603_ = v_isSharedCheck_2608_;
goto v_resetjp_2601_;
}
v_resetjp_2601_:
{
lean_object* v___x_2604_; lean_object* v___x_2606_; 
v___x_2604_ = lean_apply_1(v_f_2581_, v_a_2600_);
if (v_isShared_2603_ == 0)
{
lean_ctor_set(v___x_2602_, 0, v___x_2604_);
v___x_2606_ = v___x_2602_;
goto v_reusejp_2605_;
}
else
{
lean_object* v_reuseFailAlloc_2607_; 
v_reuseFailAlloc_2607_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2607_, 0, v___x_2604_);
v___x_2606_ = v_reuseFailAlloc_2607_;
goto v_reusejp_2605_;
}
v_reusejp_2605_:
{
v___y_2589_ = v___x_2606_;
goto v___jp_2588_;
}
}
}
}
else
{
lean_object* v_a_2609_; lean_object* v___x_2611_; uint8_t v_isShared_2612_; uint8_t v_isSharedCheck_2617_; 
lean_dec(v_f_2581_);
v_a_2609_ = lean_ctor_get(v___x_2587_, 0);
v_isSharedCheck_2617_ = !lean_is_exclusive(v___x_2587_);
if (v_isSharedCheck_2617_ == 0)
{
v___x_2611_ = v___x_2587_;
v_isShared_2612_ = v_isSharedCheck_2617_;
goto v_resetjp_2610_;
}
else
{
lean_inc(v_a_2609_);
lean_dec(v___x_2587_);
v___x_2611_ = lean_box(0);
v_isShared_2612_ = v_isSharedCheck_2617_;
goto v_resetjp_2610_;
}
v_resetjp_2610_:
{
lean_object* v___x_2613_; lean_object* v___x_2615_; 
v___x_2613_ = lean_task_map(v___x_2584_, v_a_2609_, v___x_2585_, v___x_2586_);
if (v_isShared_2612_ == 0)
{
lean_ctor_set(v___x_2611_, 0, v___x_2613_);
v___x_2615_ = v___x_2611_;
goto v_reusejp_2614_;
}
else
{
lean_object* v_reuseFailAlloc_2616_; 
v_reuseFailAlloc_2616_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2616_, 0, v___x_2613_);
v___x_2615_ = v_reuseFailAlloc_2616_;
goto v_reusejp_2614_;
}
v_reusejp_2614_:
{
return v___x_2615_;
}
}
}
v___jp_2588_:
{
lean_object* v___x_2590_; 
v___x_2590_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2590_, 0, v___y_2589_);
return v___x_2590_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_map___boxed(lean_object* v_00_u03b1_2618_, lean_object* v_00_u03b2_2619_, lean_object* v_00_u03b5_2620_, lean_object* v_f_2621_, lean_object* v_self_2622_, lean_object* v___y_2623_){
_start:
{
lean_object* v_res_2624_; 
v_res_2624_ = l_Std_Async_EAsync_map(v_00_u03b1_2618_, v_00_u03b2_2619_, v_00_u03b5_2620_, v_f_2621_, v_self_2622_);
return v_res_2624_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_bind___redArg___lam__0(lean_object* v_f_2625_, lean_object* v_x_2626_){
_start:
{
if (lean_obj_tag(v_x_2626_) == 0)
{
lean_object* v_a_2628_; lean_object* v___x_2630_; uint8_t v_isShared_2631_; uint8_t v_isSharedCheck_2636_; 
lean_dec_ref(v_f_2625_);
v_a_2628_ = lean_ctor_get(v_x_2626_, 0);
v_isSharedCheck_2636_ = !lean_is_exclusive(v_x_2626_);
if (v_isSharedCheck_2636_ == 0)
{
v___x_2630_ = v_x_2626_;
v_isShared_2631_ = v_isSharedCheck_2636_;
goto v_resetjp_2629_;
}
else
{
lean_inc(v_a_2628_);
lean_dec(v_x_2626_);
v___x_2630_ = lean_box(0);
v_isShared_2631_ = v_isSharedCheck_2636_;
goto v_resetjp_2629_;
}
v_resetjp_2629_:
{
lean_object* v___x_2633_; 
if (v_isShared_2631_ == 0)
{
v___x_2633_ = v___x_2630_;
goto v_reusejp_2632_;
}
else
{
lean_object* v_reuseFailAlloc_2635_; 
v_reuseFailAlloc_2635_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2635_, 0, v_a_2628_);
v___x_2633_ = v_reuseFailAlloc_2635_;
goto v_reusejp_2632_;
}
v_reusejp_2632_:
{
lean_object* v___x_2634_; 
v___x_2634_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2634_, 0, v___x_2633_);
return v___x_2634_;
}
}
}
else
{
lean_object* v_a_2637_; lean_object* v___x_2638_; 
v_a_2637_ = lean_ctor_get(v_x_2626_, 0);
lean_inc(v_a_2637_);
lean_dec_ref_known(v_x_2626_, 1);
v___x_2638_ = lean_apply_2(v_f_2625_, v_a_2637_, lean_box(0));
return v___x_2638_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_bind___redArg___lam__0___boxed(lean_object* v_f_2639_, lean_object* v_x_2640_, lean_object* v___y_2641_){
_start:
{
lean_object* v_res_2642_; 
v_res_2642_ = l_Std_Async_EAsync_bind___redArg___lam__0(v_f_2639_, v_x_2640_);
return v_res_2642_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_bind___redArg(lean_object* v_self_2643_, lean_object* v_f_2644_){
_start:
{
lean_object* v___f_2646_; lean_object* v___x_2647_; uint8_t v___x_2648_; lean_object* v___x_2649_; lean_object* v___x_2650_; 
v___f_2646_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_bind___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_2646_, 0, v_f_2644_);
v___x_2647_ = lean_unsigned_to_nat(0u);
v___x_2648_ = 0;
v___x_2649_ = lean_apply_1(v_self_2643_, lean_box(0));
v___x_2650_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2647_, v___x_2648_, v___x_2649_, v___f_2646_);
return v___x_2650_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_bind___redArg___boxed(lean_object* v_self_2651_, lean_object* v_f_2652_, lean_object* v___y_2653_){
_start:
{
lean_object* v_res_2654_; 
v_res_2654_ = l_Std_Async_EAsync_bind___redArg(v_self_2651_, v_f_2652_);
return v_res_2654_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_bind(lean_object* v_00_u03b5_2655_, lean_object* v_00_u03b1_2656_, lean_object* v_00_u03b2_2657_, lean_object* v_self_2658_, lean_object* v_f_2659_){
_start:
{
lean_object* v___f_2661_; lean_object* v___x_2662_; uint8_t v___x_2663_; lean_object* v___x_2664_; lean_object* v___x_2665_; 
v___f_2661_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_bind___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_2661_, 0, v_f_2659_);
v___x_2662_ = lean_unsigned_to_nat(0u);
v___x_2663_ = 0;
v___x_2664_ = lean_apply_1(v_self_2658_, lean_box(0));
v___x_2665_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2662_, v___x_2663_, v___x_2664_, v___f_2661_);
return v___x_2665_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_bind___boxed(lean_object* v_00_u03b5_2666_, lean_object* v_00_u03b1_2667_, lean_object* v_00_u03b2_2668_, lean_object* v_self_2669_, lean_object* v_f_2670_, lean_object* v___y_2671_){
_start:
{
lean_object* v_res_2672_; 
v_res_2672_ = l_Std_Async_EAsync_bind(v_00_u03b5_2666_, v_00_u03b1_2667_, v_00_u03b2_2668_, v_self_2669_, v_f_2670_);
return v_res_2672_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_lift___redArg(lean_object* v_x_2673_){
_start:
{
lean_object* v_val_2676_; lean_object* v___x_2678_; 
v___x_2678_ = lean_apply_1(v_x_2673_, lean_box(0));
if (lean_obj_tag(v___x_2678_) == 0)
{
lean_object* v_a_2679_; lean_object* v___x_2681_; uint8_t v_isShared_2682_; uint8_t v_isSharedCheck_2686_; 
v_a_2679_ = lean_ctor_get(v___x_2678_, 0);
v_isSharedCheck_2686_ = !lean_is_exclusive(v___x_2678_);
if (v_isSharedCheck_2686_ == 0)
{
v___x_2681_ = v___x_2678_;
v_isShared_2682_ = v_isSharedCheck_2686_;
goto v_resetjp_2680_;
}
else
{
lean_inc(v_a_2679_);
lean_dec(v___x_2678_);
v___x_2681_ = lean_box(0);
v_isShared_2682_ = v_isSharedCheck_2686_;
goto v_resetjp_2680_;
}
v_resetjp_2680_:
{
lean_object* v___x_2684_; 
if (v_isShared_2682_ == 0)
{
lean_ctor_set_tag(v___x_2681_, 1);
v___x_2684_ = v___x_2681_;
goto v_reusejp_2683_;
}
else
{
lean_object* v_reuseFailAlloc_2685_; 
v_reuseFailAlloc_2685_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2685_, 0, v_a_2679_);
v___x_2684_ = v_reuseFailAlloc_2685_;
goto v_reusejp_2683_;
}
v_reusejp_2683_:
{
v_val_2676_ = v___x_2684_;
goto v___jp_2675_;
}
}
}
else
{
lean_object* v_a_2687_; lean_object* v___x_2689_; uint8_t v_isShared_2690_; uint8_t v_isSharedCheck_2694_; 
v_a_2687_ = lean_ctor_get(v___x_2678_, 0);
v_isSharedCheck_2694_ = !lean_is_exclusive(v___x_2678_);
if (v_isSharedCheck_2694_ == 0)
{
v___x_2689_ = v___x_2678_;
v_isShared_2690_ = v_isSharedCheck_2694_;
goto v_resetjp_2688_;
}
else
{
lean_inc(v_a_2687_);
lean_dec(v___x_2678_);
v___x_2689_ = lean_box(0);
v_isShared_2690_ = v_isSharedCheck_2694_;
goto v_resetjp_2688_;
}
v_resetjp_2688_:
{
lean_object* v___x_2692_; 
if (v_isShared_2690_ == 0)
{
lean_ctor_set_tag(v___x_2689_, 0);
v___x_2692_ = v___x_2689_;
goto v_reusejp_2691_;
}
else
{
lean_object* v_reuseFailAlloc_2693_; 
v_reuseFailAlloc_2693_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2693_, 0, v_a_2687_);
v___x_2692_ = v_reuseFailAlloc_2693_;
goto v_reusejp_2691_;
}
v_reusejp_2691_:
{
v_val_2676_ = v___x_2692_;
goto v___jp_2675_;
}
}
}
v___jp_2675_:
{
lean_object* v___x_2677_; 
v___x_2677_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2677_, 0, v_val_2676_);
return v___x_2677_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_lift___redArg___boxed(lean_object* v_x_2695_, lean_object* v___y_2696_){
_start:
{
lean_object* v_res_2697_; 
v_res_2697_ = l_Std_Async_EAsync_lift___redArg(v_x_2695_);
return v_res_2697_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_lift(lean_object* v_00_u03b5_2698_, lean_object* v_00_u03b1_2699_, lean_object* v_x_2700_){
_start:
{
lean_object* v_val_2703_; lean_object* v___x_2705_; 
v___x_2705_ = lean_apply_1(v_x_2700_, lean_box(0));
if (lean_obj_tag(v___x_2705_) == 0)
{
lean_object* v_a_2706_; lean_object* v___x_2708_; uint8_t v_isShared_2709_; uint8_t v_isSharedCheck_2713_; 
v_a_2706_ = lean_ctor_get(v___x_2705_, 0);
v_isSharedCheck_2713_ = !lean_is_exclusive(v___x_2705_);
if (v_isSharedCheck_2713_ == 0)
{
v___x_2708_ = v___x_2705_;
v_isShared_2709_ = v_isSharedCheck_2713_;
goto v_resetjp_2707_;
}
else
{
lean_inc(v_a_2706_);
lean_dec(v___x_2705_);
v___x_2708_ = lean_box(0);
v_isShared_2709_ = v_isSharedCheck_2713_;
goto v_resetjp_2707_;
}
v_resetjp_2707_:
{
lean_object* v___x_2711_; 
if (v_isShared_2709_ == 0)
{
lean_ctor_set_tag(v___x_2708_, 1);
v___x_2711_ = v___x_2708_;
goto v_reusejp_2710_;
}
else
{
lean_object* v_reuseFailAlloc_2712_; 
v_reuseFailAlloc_2712_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2712_, 0, v_a_2706_);
v___x_2711_ = v_reuseFailAlloc_2712_;
goto v_reusejp_2710_;
}
v_reusejp_2710_:
{
v_val_2703_ = v___x_2711_;
goto v___jp_2702_;
}
}
}
else
{
lean_object* v_a_2714_; lean_object* v___x_2716_; uint8_t v_isShared_2717_; uint8_t v_isSharedCheck_2721_; 
v_a_2714_ = lean_ctor_get(v___x_2705_, 0);
v_isSharedCheck_2721_ = !lean_is_exclusive(v___x_2705_);
if (v_isSharedCheck_2721_ == 0)
{
v___x_2716_ = v___x_2705_;
v_isShared_2717_ = v_isSharedCheck_2721_;
goto v_resetjp_2715_;
}
else
{
lean_inc(v_a_2714_);
lean_dec(v___x_2705_);
v___x_2716_ = lean_box(0);
v_isShared_2717_ = v_isSharedCheck_2721_;
goto v_resetjp_2715_;
}
v_resetjp_2715_:
{
lean_object* v___x_2719_; 
if (v_isShared_2717_ == 0)
{
lean_ctor_set_tag(v___x_2716_, 0);
v___x_2719_ = v___x_2716_;
goto v_reusejp_2718_;
}
else
{
lean_object* v_reuseFailAlloc_2720_; 
v_reuseFailAlloc_2720_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2720_, 0, v_a_2714_);
v___x_2719_ = v_reuseFailAlloc_2720_;
goto v_reusejp_2718_;
}
v_reusejp_2718_:
{
v_val_2703_ = v___x_2719_;
goto v___jp_2702_;
}
}
}
v___jp_2702_:
{
lean_object* v___x_2704_; 
v___x_2704_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2704_, 0, v_val_2703_);
return v___x_2704_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_lift___boxed(lean_object* v_00_u03b5_2722_, lean_object* v_00_u03b1_2723_, lean_object* v_x_2724_, lean_object* v___y_2725_){
_start:
{
lean_object* v_res_2726_; 
v_res_2726_ = l_Std_Async_EAsync_lift(v_00_u03b5_2722_, v_00_u03b1_2723_, v_x_2724_);
return v_res_2726_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_wait___redArg(lean_object* v_self_2727_){
_start:
{
lean_object* v_val_2730_; lean_object* v___x_2748_; 
v___x_2748_ = lean_apply_1(v_self_2727_, lean_box(0));
if (lean_obj_tag(v___x_2748_) == 0)
{
lean_object* v_a_2749_; lean_object* v___x_2750_; 
v_a_2749_ = lean_ctor_get(v___x_2748_, 0);
lean_inc(v_a_2749_);
lean_dec_ref_known(v___x_2748_, 1);
v___x_2750_ = lean_task_pure(v_a_2749_);
v_val_2730_ = v___x_2750_;
goto v___jp_2729_;
}
else
{
lean_object* v_a_2751_; 
v_a_2751_ = lean_ctor_get(v___x_2748_, 0);
lean_inc_ref(v_a_2751_);
lean_dec_ref_known(v___x_2748_, 1);
v_val_2730_ = v_a_2751_;
goto v___jp_2729_;
}
v___jp_2729_:
{
lean_object* v___x_2731_; 
v___x_2731_ = lean_task_get_own(v_val_2730_);
if (lean_obj_tag(v___x_2731_) == 0)
{
lean_object* v_a_2732_; lean_object* v___x_2734_; uint8_t v_isShared_2735_; uint8_t v_isSharedCheck_2739_; 
v_a_2732_ = lean_ctor_get(v___x_2731_, 0);
v_isSharedCheck_2739_ = !lean_is_exclusive(v___x_2731_);
if (v_isSharedCheck_2739_ == 0)
{
v___x_2734_ = v___x_2731_;
v_isShared_2735_ = v_isSharedCheck_2739_;
goto v_resetjp_2733_;
}
else
{
lean_inc(v_a_2732_);
lean_dec(v___x_2731_);
v___x_2734_ = lean_box(0);
v_isShared_2735_ = v_isSharedCheck_2739_;
goto v_resetjp_2733_;
}
v_resetjp_2733_:
{
lean_object* v___x_2737_; 
if (v_isShared_2735_ == 0)
{
lean_ctor_set_tag(v___x_2734_, 1);
v___x_2737_ = v___x_2734_;
goto v_reusejp_2736_;
}
else
{
lean_object* v_reuseFailAlloc_2738_; 
v_reuseFailAlloc_2738_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2738_, 0, v_a_2732_);
v___x_2737_ = v_reuseFailAlloc_2738_;
goto v_reusejp_2736_;
}
v_reusejp_2736_:
{
return v___x_2737_;
}
}
}
else
{
lean_object* v_a_2740_; lean_object* v___x_2742_; uint8_t v_isShared_2743_; uint8_t v_isSharedCheck_2747_; 
v_a_2740_ = lean_ctor_get(v___x_2731_, 0);
v_isSharedCheck_2747_ = !lean_is_exclusive(v___x_2731_);
if (v_isSharedCheck_2747_ == 0)
{
v___x_2742_ = v___x_2731_;
v_isShared_2743_ = v_isSharedCheck_2747_;
goto v_resetjp_2741_;
}
else
{
lean_inc(v_a_2740_);
lean_dec(v___x_2731_);
v___x_2742_ = lean_box(0);
v_isShared_2743_ = v_isSharedCheck_2747_;
goto v_resetjp_2741_;
}
v_resetjp_2741_:
{
lean_object* v___x_2745_; 
if (v_isShared_2743_ == 0)
{
lean_ctor_set_tag(v___x_2742_, 0);
v___x_2745_ = v___x_2742_;
goto v_reusejp_2744_;
}
else
{
lean_object* v_reuseFailAlloc_2746_; 
v_reuseFailAlloc_2746_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2746_, 0, v_a_2740_);
v___x_2745_ = v_reuseFailAlloc_2746_;
goto v_reusejp_2744_;
}
v_reusejp_2744_:
{
return v___x_2745_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_wait___redArg___boxed(lean_object* v_self_2752_, lean_object* v___y_2753_){
_start:
{
lean_object* v_res_2754_; 
v_res_2754_ = l_Std_Async_EAsync_wait___redArg(v_self_2752_);
return v_res_2754_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_wait(lean_object* v_00_u03b5_2755_, lean_object* v_00_u03b1_2756_, lean_object* v_self_2757_){
_start:
{
lean_object* v_val_2760_; lean_object* v___x_2778_; 
v___x_2778_ = lean_apply_1(v_self_2757_, lean_box(0));
if (lean_obj_tag(v___x_2778_) == 0)
{
lean_object* v_a_2779_; lean_object* v___x_2780_; 
v_a_2779_ = lean_ctor_get(v___x_2778_, 0);
lean_inc(v_a_2779_);
lean_dec_ref_known(v___x_2778_, 1);
v___x_2780_ = lean_task_pure(v_a_2779_);
v_val_2760_ = v___x_2780_;
goto v___jp_2759_;
}
else
{
lean_object* v_a_2781_; 
v_a_2781_ = lean_ctor_get(v___x_2778_, 0);
lean_inc_ref(v_a_2781_);
lean_dec_ref_known(v___x_2778_, 1);
v_val_2760_ = v_a_2781_;
goto v___jp_2759_;
}
v___jp_2759_:
{
lean_object* v___x_2761_; 
v___x_2761_ = lean_task_get_own(v_val_2760_);
if (lean_obj_tag(v___x_2761_) == 0)
{
lean_object* v_a_2762_; lean_object* v___x_2764_; uint8_t v_isShared_2765_; uint8_t v_isSharedCheck_2769_; 
v_a_2762_ = lean_ctor_get(v___x_2761_, 0);
v_isSharedCheck_2769_ = !lean_is_exclusive(v___x_2761_);
if (v_isSharedCheck_2769_ == 0)
{
v___x_2764_ = v___x_2761_;
v_isShared_2765_ = v_isSharedCheck_2769_;
goto v_resetjp_2763_;
}
else
{
lean_inc(v_a_2762_);
lean_dec(v___x_2761_);
v___x_2764_ = lean_box(0);
v_isShared_2765_ = v_isSharedCheck_2769_;
goto v_resetjp_2763_;
}
v_resetjp_2763_:
{
lean_object* v___x_2767_; 
if (v_isShared_2765_ == 0)
{
lean_ctor_set_tag(v___x_2764_, 1);
v___x_2767_ = v___x_2764_;
goto v_reusejp_2766_;
}
else
{
lean_object* v_reuseFailAlloc_2768_; 
v_reuseFailAlloc_2768_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2768_, 0, v_a_2762_);
v___x_2767_ = v_reuseFailAlloc_2768_;
goto v_reusejp_2766_;
}
v_reusejp_2766_:
{
return v___x_2767_;
}
}
}
else
{
lean_object* v_a_2770_; lean_object* v___x_2772_; uint8_t v_isShared_2773_; uint8_t v_isSharedCheck_2777_; 
v_a_2770_ = lean_ctor_get(v___x_2761_, 0);
v_isSharedCheck_2777_ = !lean_is_exclusive(v___x_2761_);
if (v_isSharedCheck_2777_ == 0)
{
v___x_2772_ = v___x_2761_;
v_isShared_2773_ = v_isSharedCheck_2777_;
goto v_resetjp_2771_;
}
else
{
lean_inc(v_a_2770_);
lean_dec(v___x_2761_);
v___x_2772_ = lean_box(0);
v_isShared_2773_ = v_isSharedCheck_2777_;
goto v_resetjp_2771_;
}
v_resetjp_2771_:
{
lean_object* v___x_2775_; 
if (v_isShared_2773_ == 0)
{
lean_ctor_set_tag(v___x_2772_, 0);
v___x_2775_ = v___x_2772_;
goto v_reusejp_2774_;
}
else
{
lean_object* v_reuseFailAlloc_2776_; 
v_reuseFailAlloc_2776_ = lean_alloc_ctor(0, 1, 0);
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
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_wait___boxed(lean_object* v_00_u03b5_2782_, lean_object* v_00_u03b1_2783_, lean_object* v_self_2784_, lean_object* v___y_2785_){
_start:
{
lean_object* v_res_2786_; 
v_res_2786_ = l_Std_Async_EAsync_wait(v_00_u03b5_2782_, v_00_u03b1_2783_, v_self_2784_);
return v_res_2786_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_asTask___redArg___lam__0(lean_object* v_x_2787_){
_start:
{
if (lean_obj_tag(v_x_2787_) == 0)
{
lean_object* v_a_2788_; lean_object* v___x_2789_; 
v_a_2788_ = lean_ctor_get(v_x_2787_, 0);
lean_inc(v_a_2788_);
lean_dec_ref_known(v_x_2787_, 1);
v___x_2789_ = lean_task_pure(v_a_2788_);
return v___x_2789_;
}
else
{
lean_object* v_a_2790_; 
v_a_2790_ = lean_ctor_get(v_x_2787_, 0);
lean_inc_ref(v_a_2790_);
lean_dec_ref_known(v_x_2787_, 1);
return v_a_2790_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_asTask___redArg(lean_object* v_x_2792_, lean_object* v_prio_2793_){
_start:
{
lean_object* v___f_2795_; lean_object* v___x_2796_; lean_object* v___x_2797_; lean_object* v___x_2798_; lean_object* v___x_2799_; uint8_t v___x_2800_; lean_object* v___x_2801_; lean_object* v___x_2802_; 
v___f_2795_ = ((lean_object*)(l_Std_Async_EAsync_asTask___redArg___closed__0));
v___x_2796_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_toBaseAsync___boxed), 4, 3);
lean_closure_set(v___x_2796_, 0, lean_box(0));
lean_closure_set(v___x_2796_, 1, lean_box(0));
lean_closure_set(v___x_2796_, 2, v_x_2792_);
v___x_2797_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_toRawBaseIO___boxed), 3, 2);
lean_closure_set(v___x_2797_, 0, lean_box(0));
lean_closure_set(v___x_2797_, 1, v___x_2796_);
v___x_2798_ = lean_io_as_task(v___x_2797_, v_prio_2793_);
v___x_2799_ = lean_unsigned_to_nat(0u);
v___x_2800_ = 1;
v___x_2801_ = lean_task_bind(v___x_2798_, v___f_2795_, v___x_2799_, v___x_2800_);
v___x_2802_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2802_, 0, v___x_2801_);
return v___x_2802_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_asTask___redArg___boxed(lean_object* v_x_2803_, lean_object* v_prio_2804_, lean_object* v___y_2805_){
_start:
{
lean_object* v_res_2806_; 
v_res_2806_ = l_Std_Async_EAsync_asTask___redArg(v_x_2803_, v_prio_2804_);
return v_res_2806_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_asTask(lean_object* v_00_u03b5_2807_, lean_object* v_00_u03b1_2808_, lean_object* v_x_2809_, lean_object* v_prio_2810_){
_start:
{
lean_object* v___f_2812_; lean_object* v___x_2813_; lean_object* v___x_2814_; lean_object* v___x_2815_; lean_object* v___x_2816_; uint8_t v___x_2817_; lean_object* v___x_2818_; lean_object* v___x_2819_; 
v___f_2812_ = ((lean_object*)(l_Std_Async_EAsync_asTask___redArg___closed__0));
v___x_2813_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_toBaseAsync___boxed), 4, 3);
lean_closure_set(v___x_2813_, 0, lean_box(0));
lean_closure_set(v___x_2813_, 1, lean_box(0));
lean_closure_set(v___x_2813_, 2, v_x_2809_);
v___x_2814_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_toRawBaseIO___boxed), 3, 2);
lean_closure_set(v___x_2814_, 0, lean_box(0));
lean_closure_set(v___x_2814_, 1, v___x_2813_);
v___x_2815_ = lean_io_as_task(v___x_2814_, v_prio_2810_);
v___x_2816_ = lean_unsigned_to_nat(0u);
v___x_2817_ = 1;
v___x_2818_ = lean_task_bind(v___x_2815_, v___f_2812_, v___x_2816_, v___x_2817_);
v___x_2819_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2819_, 0, v___x_2818_);
return v___x_2819_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_asTask___boxed(lean_object* v_00_u03b5_2820_, lean_object* v_00_u03b1_2821_, lean_object* v_x_2822_, lean_object* v_prio_2823_, lean_object* v___y_2824_){
_start:
{
lean_object* v_res_2825_; 
v_res_2825_ = l_Std_Async_EAsync_asTask(v_00_u03b5_2820_, v_00_u03b1_2821_, v_x_2822_, v_prio_2823_);
return v_res_2825_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_block___redArg(lean_object* v_x_2826_, lean_object* v_prio_2827_){
_start:
{
lean_object* v___f_2829_; lean_object* v___x_2830_; lean_object* v___x_2831_; lean_object* v___x_2832_; lean_object* v___x_2833_; uint8_t v___x_2834_; lean_object* v___x_2835_; lean_object* v___x_2836_; 
v___f_2829_ = ((lean_object*)(l_Std_Async_EAsync_asTask___redArg___closed__0));
v___x_2830_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_toBaseAsync___boxed), 4, 3);
lean_closure_set(v___x_2830_, 0, lean_box(0));
lean_closure_set(v___x_2830_, 1, lean_box(0));
lean_closure_set(v___x_2830_, 2, v_x_2826_);
v___x_2831_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_toRawBaseIO___boxed), 3, 2);
lean_closure_set(v___x_2831_, 0, lean_box(0));
lean_closure_set(v___x_2831_, 1, v___x_2830_);
v___x_2832_ = lean_io_as_task(v___x_2831_, v_prio_2827_);
v___x_2833_ = lean_unsigned_to_nat(0u);
v___x_2834_ = 1;
v___x_2835_ = lean_task_bind(v___x_2832_, v___f_2829_, v___x_2833_, v___x_2834_);
v___x_2836_ = lean_task_get_own(v___x_2835_);
if (lean_obj_tag(v___x_2836_) == 0)
{
lean_object* v_a_2837_; lean_object* v___x_2839_; uint8_t v_isShared_2840_; uint8_t v_isSharedCheck_2844_; 
v_a_2837_ = lean_ctor_get(v___x_2836_, 0);
v_isSharedCheck_2844_ = !lean_is_exclusive(v___x_2836_);
if (v_isSharedCheck_2844_ == 0)
{
v___x_2839_ = v___x_2836_;
v_isShared_2840_ = v_isSharedCheck_2844_;
goto v_resetjp_2838_;
}
else
{
lean_inc(v_a_2837_);
lean_dec(v___x_2836_);
v___x_2839_ = lean_box(0);
v_isShared_2840_ = v_isSharedCheck_2844_;
goto v_resetjp_2838_;
}
v_resetjp_2838_:
{
lean_object* v___x_2842_; 
if (v_isShared_2840_ == 0)
{
lean_ctor_set_tag(v___x_2839_, 1);
v___x_2842_ = v___x_2839_;
goto v_reusejp_2841_;
}
else
{
lean_object* v_reuseFailAlloc_2843_; 
v_reuseFailAlloc_2843_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2843_, 0, v_a_2837_);
v___x_2842_ = v_reuseFailAlloc_2843_;
goto v_reusejp_2841_;
}
v_reusejp_2841_:
{
return v___x_2842_;
}
}
}
else
{
lean_object* v_a_2845_; lean_object* v___x_2847_; uint8_t v_isShared_2848_; uint8_t v_isSharedCheck_2852_; 
v_a_2845_ = lean_ctor_get(v___x_2836_, 0);
v_isSharedCheck_2852_ = !lean_is_exclusive(v___x_2836_);
if (v_isSharedCheck_2852_ == 0)
{
v___x_2847_ = v___x_2836_;
v_isShared_2848_ = v_isSharedCheck_2852_;
goto v_resetjp_2846_;
}
else
{
lean_inc(v_a_2845_);
lean_dec(v___x_2836_);
v___x_2847_ = lean_box(0);
v_isShared_2848_ = v_isSharedCheck_2852_;
goto v_resetjp_2846_;
}
v_resetjp_2846_:
{
lean_object* v___x_2850_; 
if (v_isShared_2848_ == 0)
{
lean_ctor_set_tag(v___x_2847_, 0);
v___x_2850_ = v___x_2847_;
goto v_reusejp_2849_;
}
else
{
lean_object* v_reuseFailAlloc_2851_; 
v_reuseFailAlloc_2851_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2851_, 0, v_a_2845_);
v___x_2850_ = v_reuseFailAlloc_2851_;
goto v_reusejp_2849_;
}
v_reusejp_2849_:
{
return v___x_2850_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_block___redArg___boxed(lean_object* v_x_2853_, lean_object* v_prio_2854_, lean_object* v___y_2855_){
_start:
{
lean_object* v_res_2856_; 
v_res_2856_ = l_Std_Async_EAsync_block___redArg(v_x_2853_, v_prio_2854_);
return v_res_2856_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_block(lean_object* v_00_u03b5_2857_, lean_object* v_00_u03b1_2858_, lean_object* v_x_2859_, lean_object* v_prio_2860_){
_start:
{
lean_object* v___f_2862_; lean_object* v___x_2863_; lean_object* v___x_2864_; lean_object* v___x_2865_; lean_object* v___x_2866_; uint8_t v___x_2867_; lean_object* v___x_2868_; lean_object* v___x_2869_; 
v___f_2862_ = ((lean_object*)(l_Std_Async_EAsync_asTask___redArg___closed__0));
v___x_2863_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_toBaseAsync___boxed), 4, 3);
lean_closure_set(v___x_2863_, 0, lean_box(0));
lean_closure_set(v___x_2863_, 1, lean_box(0));
lean_closure_set(v___x_2863_, 2, v_x_2859_);
v___x_2864_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_toRawBaseIO___boxed), 3, 2);
lean_closure_set(v___x_2864_, 0, lean_box(0));
lean_closure_set(v___x_2864_, 1, v___x_2863_);
v___x_2865_ = lean_io_as_task(v___x_2864_, v_prio_2860_);
v___x_2866_ = lean_unsigned_to_nat(0u);
v___x_2867_ = 1;
v___x_2868_ = lean_task_bind(v___x_2865_, v___f_2862_, v___x_2866_, v___x_2867_);
v___x_2869_ = lean_task_get_own(v___x_2868_);
if (lean_obj_tag(v___x_2869_) == 0)
{
lean_object* v_a_2870_; lean_object* v___x_2872_; uint8_t v_isShared_2873_; uint8_t v_isSharedCheck_2877_; 
v_a_2870_ = lean_ctor_get(v___x_2869_, 0);
v_isSharedCheck_2877_ = !lean_is_exclusive(v___x_2869_);
if (v_isSharedCheck_2877_ == 0)
{
v___x_2872_ = v___x_2869_;
v_isShared_2873_ = v_isSharedCheck_2877_;
goto v_resetjp_2871_;
}
else
{
lean_inc(v_a_2870_);
lean_dec(v___x_2869_);
v___x_2872_ = lean_box(0);
v_isShared_2873_ = v_isSharedCheck_2877_;
goto v_resetjp_2871_;
}
v_resetjp_2871_:
{
lean_object* v___x_2875_; 
if (v_isShared_2873_ == 0)
{
lean_ctor_set_tag(v___x_2872_, 1);
v___x_2875_ = v___x_2872_;
goto v_reusejp_2874_;
}
else
{
lean_object* v_reuseFailAlloc_2876_; 
v_reuseFailAlloc_2876_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2876_, 0, v_a_2870_);
v___x_2875_ = v_reuseFailAlloc_2876_;
goto v_reusejp_2874_;
}
v_reusejp_2874_:
{
return v___x_2875_;
}
}
}
else
{
lean_object* v_a_2878_; lean_object* v___x_2880_; uint8_t v_isShared_2881_; uint8_t v_isSharedCheck_2885_; 
v_a_2878_ = lean_ctor_get(v___x_2869_, 0);
v_isSharedCheck_2885_ = !lean_is_exclusive(v___x_2869_);
if (v_isSharedCheck_2885_ == 0)
{
v___x_2880_ = v___x_2869_;
v_isShared_2881_ = v_isSharedCheck_2885_;
goto v_resetjp_2879_;
}
else
{
lean_inc(v_a_2878_);
lean_dec(v___x_2869_);
v___x_2880_ = lean_box(0);
v_isShared_2881_ = v_isSharedCheck_2885_;
goto v_resetjp_2879_;
}
v_resetjp_2879_:
{
lean_object* v___x_2883_; 
if (v_isShared_2881_ == 0)
{
lean_ctor_set_tag(v___x_2880_, 0);
v___x_2883_ = v___x_2880_;
goto v_reusejp_2882_;
}
else
{
lean_object* v_reuseFailAlloc_2884_; 
v_reuseFailAlloc_2884_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2884_, 0, v_a_2878_);
v___x_2883_ = v_reuseFailAlloc_2884_;
goto v_reusejp_2882_;
}
v_reusejp_2882_:
{
return v___x_2883_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_block___boxed(lean_object* v_00_u03b5_2886_, lean_object* v_00_u03b1_2887_, lean_object* v_x_2888_, lean_object* v_prio_2889_, lean_object* v___y_2890_){
_start:
{
lean_object* v_res_2891_; 
v_res_2891_ = l_Std_Async_EAsync_block(v_00_u03b5_2886_, v_00_u03b1_2887_, v_x_2888_, v_prio_2889_);
return v_res_2891_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_throw___redArg(lean_object* v_e_2892_){
_start:
{
lean_object* v___x_2894_; lean_object* v___x_2895_; 
v___x_2894_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2894_, 0, v_e_2892_);
v___x_2895_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2895_, 0, v___x_2894_);
return v___x_2895_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_throw___redArg___boxed(lean_object* v_e_2896_, lean_object* v___y_2897_){
_start:
{
lean_object* v_res_2898_; 
v_res_2898_ = l_Std_Async_EAsync_throw___redArg(v_e_2896_);
return v_res_2898_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_throw(lean_object* v_00_u03b5_2899_, lean_object* v_00_u03b1_2900_, lean_object* v_e_2901_){
_start:
{
lean_object* v___x_2903_; lean_object* v___x_2904_; 
v___x_2903_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2903_, 0, v_e_2901_);
v___x_2904_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2904_, 0, v___x_2903_);
return v___x_2904_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_throw___boxed(lean_object* v_00_u03b5_2905_, lean_object* v_00_u03b1_2906_, lean_object* v_e_2907_, lean_object* v___y_2908_){
_start:
{
lean_object* v_res_2909_; 
v_res_2909_ = l_Std_Async_EAsync_throw(v_00_u03b5_2905_, v_00_u03b1_2906_, v_e_2907_);
return v_res_2909_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_tryCatch___redArg___lam__0(lean_object* v_f_2910_, lean_object* v_x_2911_){
_start:
{
if (lean_obj_tag(v_x_2911_) == 0)
{
lean_object* v_a_2913_; lean_object* v___x_2914_; 
v_a_2913_ = lean_ctor_get(v_x_2911_, 0);
lean_inc(v_a_2913_);
lean_dec_ref_known(v_x_2911_, 1);
v___x_2914_ = lean_apply_2(v_f_2910_, v_a_2913_, lean_box(0));
return v___x_2914_;
}
else
{
lean_object* v___x_2915_; 
lean_dec_ref(v_f_2910_);
v___x_2915_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2915_, 0, v_x_2911_);
return v___x_2915_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_tryCatch___redArg___lam__0___boxed(lean_object* v_f_2916_, lean_object* v_x_2917_, lean_object* v___y_2918_){
_start:
{
lean_object* v_res_2919_; 
v_res_2919_ = l_Std_Async_EAsync_tryCatch___redArg___lam__0(v_f_2916_, v_x_2917_);
return v_res_2919_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_tryCatch___redArg(lean_object* v_x_2920_, lean_object* v_f_2921_, lean_object* v_prio_2922_, uint8_t v_sync_2923_){
_start:
{
lean_object* v___f_2925_; lean_object* v___x_2926_; lean_object* v___x_2927_; 
v___f_2925_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_tryCatch___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_2925_, 0, v_f_2921_);
v___x_2926_ = lean_apply_1(v_x_2920_, lean_box(0));
v___x_2927_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v_prio_2922_, v_sync_2923_, v___x_2926_, v___f_2925_);
return v___x_2927_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_tryCatch___redArg___boxed(lean_object* v_x_2928_, lean_object* v_f_2929_, lean_object* v_prio_2930_, lean_object* v_sync_2931_, lean_object* v___y_2932_){
_start:
{
uint8_t v_sync_boxed_2933_; lean_object* v_res_2934_; 
v_sync_boxed_2933_ = lean_unbox(v_sync_2931_);
v_res_2934_ = l_Std_Async_EAsync_tryCatch___redArg(v_x_2928_, v_f_2929_, v_prio_2930_, v_sync_boxed_2933_);
return v_res_2934_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_tryCatch(lean_object* v_00_u03b5_2935_, lean_object* v_00_u03b1_2936_, lean_object* v_x_2937_, lean_object* v_f_2938_, lean_object* v_prio_2939_, uint8_t v_sync_2940_){
_start:
{
lean_object* v___f_2942_; lean_object* v___x_2943_; lean_object* v___x_2944_; 
v___f_2942_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_tryCatch___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_2942_, 0, v_f_2938_);
v___x_2943_ = lean_apply_1(v_x_2937_, lean_box(0));
v___x_2944_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v_prio_2939_, v_sync_2940_, v___x_2943_, v___f_2942_);
return v___x_2944_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_tryCatch___boxed(lean_object* v_00_u03b5_2945_, lean_object* v_00_u03b1_2946_, lean_object* v_x_2947_, lean_object* v_f_2948_, lean_object* v_prio_2949_, lean_object* v_sync_2950_, lean_object* v___y_2951_){
_start:
{
uint8_t v_sync_boxed_2952_; lean_object* v_res_2953_; 
v_sync_boxed_2952_ = lean_unbox(v_sync_2950_);
v_res_2953_ = l_Std_Async_EAsync_tryCatch(v_00_u03b5_2945_, v_00_u03b1_2946_, v_x_2947_, v_f_2948_, v_prio_2949_, v_sync_boxed_2952_);
return v_res_2953_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_tryFinally_x27___redArg___lam__0(lean_object* v_a_2954_, lean_object* v_____do__lift_2955_){
_start:
{
if (lean_obj_tag(v_____do__lift_2955_) == 0)
{
lean_object* v_a_2957_; lean_object* v___x_2959_; uint8_t v_isShared_2960_; uint8_t v_isSharedCheck_2965_; 
lean_dec(v_a_2954_);
v_a_2957_ = lean_ctor_get(v_____do__lift_2955_, 0);
v_isSharedCheck_2965_ = !lean_is_exclusive(v_____do__lift_2955_);
if (v_isSharedCheck_2965_ == 0)
{
v___x_2959_ = v_____do__lift_2955_;
v_isShared_2960_ = v_isSharedCheck_2965_;
goto v_resetjp_2958_;
}
else
{
lean_inc(v_a_2957_);
lean_dec(v_____do__lift_2955_);
v___x_2959_ = lean_box(0);
v_isShared_2960_ = v_isSharedCheck_2965_;
goto v_resetjp_2958_;
}
v_resetjp_2958_:
{
lean_object* v___x_2962_; 
if (v_isShared_2960_ == 0)
{
v___x_2962_ = v___x_2959_;
goto v_reusejp_2961_;
}
else
{
lean_object* v_reuseFailAlloc_2964_; 
v_reuseFailAlloc_2964_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2964_, 0, v_a_2957_);
v___x_2962_ = v_reuseFailAlloc_2964_;
goto v_reusejp_2961_;
}
v_reusejp_2961_:
{
lean_object* v___x_2963_; 
v___x_2963_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2963_, 0, v___x_2962_);
return v___x_2963_;
}
}
}
else
{
lean_object* v___x_2967_; uint8_t v_isShared_2968_; uint8_t v_isSharedCheck_2973_; 
v_isSharedCheck_2973_ = !lean_is_exclusive(v_____do__lift_2955_);
if (v_isSharedCheck_2973_ == 0)
{
lean_object* v_unused_2974_; 
v_unused_2974_ = lean_ctor_get(v_____do__lift_2955_, 0);
lean_dec(v_unused_2974_);
v___x_2967_ = v_____do__lift_2955_;
v_isShared_2968_ = v_isSharedCheck_2973_;
goto v_resetjp_2966_;
}
else
{
lean_dec(v_____do__lift_2955_);
v___x_2967_ = lean_box(0);
v_isShared_2968_ = v_isSharedCheck_2973_;
goto v_resetjp_2966_;
}
v_resetjp_2966_:
{
lean_object* v___x_2970_; 
if (v_isShared_2968_ == 0)
{
lean_ctor_set_tag(v___x_2967_, 0);
lean_ctor_set(v___x_2967_, 0, v_a_2954_);
v___x_2970_ = v___x_2967_;
goto v_reusejp_2969_;
}
else
{
lean_object* v_reuseFailAlloc_2972_; 
v_reuseFailAlloc_2972_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2972_, 0, v_a_2954_);
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
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_tryFinally_x27___redArg___lam__0___boxed(lean_object* v_a_2975_, lean_object* v_____do__lift_2976_, lean_object* v___y_2977_){
_start:
{
lean_object* v_res_2978_; 
v_res_2978_ = l_Std_Async_EAsync_tryFinally_x27___redArg___lam__0(v_a_2975_, v_____do__lift_2976_);
return v_res_2978_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_tryFinally_x27___redArg___lam__1(lean_object* v_a_2979_, lean_object* v_____do__lift_2980_){
_start:
{
if (lean_obj_tag(v_____do__lift_2980_) == 0)
{
lean_object* v_a_2982_; lean_object* v___x_2984_; uint8_t v_isShared_2985_; uint8_t v_isSharedCheck_2990_; 
lean_dec(v_a_2979_);
v_a_2982_ = lean_ctor_get(v_____do__lift_2980_, 0);
v_isSharedCheck_2990_ = !lean_is_exclusive(v_____do__lift_2980_);
if (v_isSharedCheck_2990_ == 0)
{
v___x_2984_ = v_____do__lift_2980_;
v_isShared_2985_ = v_isSharedCheck_2990_;
goto v_resetjp_2983_;
}
else
{
lean_inc(v_a_2982_);
lean_dec(v_____do__lift_2980_);
v___x_2984_ = lean_box(0);
v_isShared_2985_ = v_isSharedCheck_2990_;
goto v_resetjp_2983_;
}
v_resetjp_2983_:
{
lean_object* v___x_2987_; 
if (v_isShared_2985_ == 0)
{
v___x_2987_ = v___x_2984_;
goto v_reusejp_2986_;
}
else
{
lean_object* v_reuseFailAlloc_2989_; 
v_reuseFailAlloc_2989_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2989_, 0, v_a_2982_);
v___x_2987_ = v_reuseFailAlloc_2989_;
goto v_reusejp_2986_;
}
v_reusejp_2986_:
{
lean_object* v___x_2988_; 
v___x_2988_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2988_, 0, v___x_2987_);
return v___x_2988_;
}
}
}
else
{
lean_object* v_a_2991_; lean_object* v___x_2993_; uint8_t v_isShared_2994_; uint8_t v_isSharedCheck_3000_; 
v_a_2991_ = lean_ctor_get(v_____do__lift_2980_, 0);
v_isSharedCheck_3000_ = !lean_is_exclusive(v_____do__lift_2980_);
if (v_isSharedCheck_3000_ == 0)
{
v___x_2993_ = v_____do__lift_2980_;
v_isShared_2994_ = v_isSharedCheck_3000_;
goto v_resetjp_2992_;
}
else
{
lean_inc(v_a_2991_);
lean_dec(v_____do__lift_2980_);
v___x_2993_ = lean_box(0);
v_isShared_2994_ = v_isSharedCheck_3000_;
goto v_resetjp_2992_;
}
v_resetjp_2992_:
{
lean_object* v___x_2995_; lean_object* v___x_2997_; 
v___x_2995_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2995_, 0, v_a_2979_);
lean_ctor_set(v___x_2995_, 1, v_a_2991_);
if (v_isShared_2994_ == 0)
{
lean_ctor_set(v___x_2993_, 0, v___x_2995_);
v___x_2997_ = v___x_2993_;
goto v_reusejp_2996_;
}
else
{
lean_object* v_reuseFailAlloc_2999_; 
v_reuseFailAlloc_2999_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2999_, 0, v___x_2995_);
v___x_2997_ = v_reuseFailAlloc_2999_;
goto v_reusejp_2996_;
}
v_reusejp_2996_:
{
lean_object* v___x_2998_; 
v___x_2998_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2998_, 0, v___x_2997_);
return v___x_2998_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_tryFinally_x27___redArg___lam__1___boxed(lean_object* v_a_3001_, lean_object* v_____do__lift_3002_, lean_object* v___y_3003_){
_start:
{
lean_object* v_res_3004_; 
v_res_3004_ = l_Std_Async_EAsync_tryFinally_x27___redArg___lam__1(v_a_3001_, v_____do__lift_3002_);
return v_res_3004_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_tryFinally_x27___redArg___lam__2(lean_object* v_f_3005_, lean_object* v_x_3006_){
_start:
{
if (lean_obj_tag(v_x_3006_) == 0)
{
lean_object* v_a_3008_; lean_object* v___f_3009_; lean_object* v___x_3010_; lean_object* v___x_3011_; uint8_t v___x_3012_; lean_object* v___x_3013_; lean_object* v___x_3014_; 
v_a_3008_ = lean_ctor_get(v_x_3006_, 0);
lean_inc(v_a_3008_);
lean_dec_ref_known(v_x_3006_, 1);
v___f_3009_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_tryFinally_x27___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_3009_, 0, v_a_3008_);
v___x_3010_ = lean_box(0);
v___x_3011_ = lean_unsigned_to_nat(0u);
v___x_3012_ = 0;
v___x_3013_ = lean_apply_2(v_f_3005_, v___x_3010_, lean_box(0));
v___x_3014_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3011_, v___x_3012_, v___x_3013_, v___f_3009_);
return v___x_3014_;
}
else
{
lean_object* v_a_3015_; lean_object* v___x_3017_; uint8_t v_isShared_3018_; uint8_t v_isSharedCheck_3027_; 
v_a_3015_ = lean_ctor_get(v_x_3006_, 0);
v_isSharedCheck_3027_ = !lean_is_exclusive(v_x_3006_);
if (v_isSharedCheck_3027_ == 0)
{
v___x_3017_ = v_x_3006_;
v_isShared_3018_ = v_isSharedCheck_3027_;
goto v_resetjp_3016_;
}
else
{
lean_inc(v_a_3015_);
lean_dec(v_x_3006_);
v___x_3017_ = lean_box(0);
v_isShared_3018_ = v_isSharedCheck_3027_;
goto v_resetjp_3016_;
}
v_resetjp_3016_:
{
lean_object* v___f_3019_; lean_object* v___x_3021_; 
lean_inc(v_a_3015_);
v___f_3019_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_tryFinally_x27___redArg___lam__1___boxed), 3, 1);
lean_closure_set(v___f_3019_, 0, v_a_3015_);
if (v_isShared_3018_ == 0)
{
v___x_3021_ = v___x_3017_;
goto v_reusejp_3020_;
}
else
{
lean_object* v_reuseFailAlloc_3026_; 
v_reuseFailAlloc_3026_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3026_, 0, v_a_3015_);
v___x_3021_ = v_reuseFailAlloc_3026_;
goto v_reusejp_3020_;
}
v_reusejp_3020_:
{
lean_object* v___x_3022_; uint8_t v___x_3023_; lean_object* v___x_3024_; lean_object* v___x_3025_; 
v___x_3022_ = lean_unsigned_to_nat(0u);
v___x_3023_ = 0;
v___x_3024_ = lean_apply_2(v_f_3005_, v___x_3021_, lean_box(0));
v___x_3025_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3022_, v___x_3023_, v___x_3024_, v___f_3019_);
return v___x_3025_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_tryFinally_x27___redArg___lam__2___boxed(lean_object* v_f_3028_, lean_object* v_x_3029_, lean_object* v___y_3030_){
_start:
{
lean_object* v_res_3031_; 
v_res_3031_ = l_Std_Async_EAsync_tryFinally_x27___redArg___lam__2(v_f_3028_, v_x_3029_);
return v_res_3031_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_tryFinally_x27___redArg(lean_object* v_x_3032_, lean_object* v_f_3033_, lean_object* v_prio_3034_, uint8_t v_sync_3035_){
_start:
{
lean_object* v___f_3037_; lean_object* v___x_3038_; lean_object* v___x_3039_; 
v___f_3037_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_tryFinally_x27___redArg___lam__2___boxed), 3, 1);
lean_closure_set(v___f_3037_, 0, v_f_3033_);
v___x_3038_ = lean_apply_1(v_x_3032_, lean_box(0));
v___x_3039_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v_prio_3034_, v_sync_3035_, v___x_3038_, v___f_3037_);
return v___x_3039_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_tryFinally_x27___redArg___boxed(lean_object* v_x_3040_, lean_object* v_f_3041_, lean_object* v_prio_3042_, lean_object* v_sync_3043_, lean_object* v___y_3044_){
_start:
{
uint8_t v_sync_boxed_3045_; lean_object* v_res_3046_; 
v_sync_boxed_3045_ = lean_unbox(v_sync_3043_);
v_res_3046_ = l_Std_Async_EAsync_tryFinally_x27___redArg(v_x_3040_, v_f_3041_, v_prio_3042_, v_sync_boxed_3045_);
return v_res_3046_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_tryFinally_x27(lean_object* v_00_u03b5_3047_, lean_object* v_00_u03b1_3048_, lean_object* v_00_u03b2_3049_, lean_object* v_x_3050_, lean_object* v_f_3051_, lean_object* v_prio_3052_, uint8_t v_sync_3053_){
_start:
{
lean_object* v___x_3055_; 
v___x_3055_ = l_Std_Async_EAsync_tryFinally_x27___redArg(v_x_3050_, v_f_3051_, v_prio_3052_, v_sync_3053_);
return v___x_3055_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_tryFinally_x27___boxed(lean_object* v_00_u03b5_3056_, lean_object* v_00_u03b1_3057_, lean_object* v_00_u03b2_3058_, lean_object* v_x_3059_, lean_object* v_f_3060_, lean_object* v_prio_3061_, lean_object* v_sync_3062_, lean_object* v___y_3063_){
_start:
{
uint8_t v_sync_boxed_3064_; lean_object* v_res_3065_; 
v_sync_boxed_3064_ = lean_unbox(v_sync_3062_);
v_res_3065_ = l_Std_Async_EAsync_tryFinally_x27(v_00_u03b5_3056_, v_00_u03b1_3057_, v_00_u03b2_3058_, v_x_3059_, v_f_3060_, v_prio_3061_, v_sync_boxed_3064_);
return v_res_3065_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_await___redArg(lean_object* v_x_3066_){
_start:
{
lean_object* v___x_3068_; 
v___x_3068_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3068_, 0, v_x_3066_);
return v___x_3068_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_await___redArg___boxed(lean_object* v_x_3069_, lean_object* v___y_3070_){
_start:
{
lean_object* v_res_3071_; 
v_res_3071_ = l_Std_Async_EAsync_await___redArg(v_x_3069_);
return v_res_3071_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_await(lean_object* v_00_u03b5_3072_, lean_object* v_00_u03b1_3073_, lean_object* v_x_3074_){
_start:
{
lean_object* v___x_3076_; 
v___x_3076_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3076_, 0, v_x_3074_);
return v___x_3076_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_await___boxed(lean_object* v_00_u03b5_3077_, lean_object* v_00_u03b1_3078_, lean_object* v_x_3079_, lean_object* v___y_3080_){
_start:
{
lean_object* v_res_3081_; 
v_res_3081_ = l_Std_Async_EAsync_await(v_00_u03b5_3077_, v_00_u03b1_3078_, v_x_3079_);
return v_res_3081_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_async___redArg(lean_object* v_self_3082_, lean_object* v_prio_3083_){
_start:
{
lean_object* v___f_3085_; lean_object* v___x_3086_; lean_object* v___x_3087_; lean_object* v___x_3088_; lean_object* v___x_3089_; uint8_t v___x_3090_; lean_object* v___x_3091_; lean_object* v___x_3092_; lean_object* v___x_3093_; 
v___f_3085_ = ((lean_object*)(l_Std_Async_EAsync_asTask___redArg___closed__0));
v___x_3086_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_toBaseAsync___boxed), 4, 3);
lean_closure_set(v___x_3086_, 0, lean_box(0));
lean_closure_set(v___x_3086_, 1, lean_box(0));
lean_closure_set(v___x_3086_, 2, v_self_3082_);
v___x_3087_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_toRawBaseIO___boxed), 3, 2);
lean_closure_set(v___x_3087_, 0, lean_box(0));
lean_closure_set(v___x_3087_, 1, v___x_3086_);
v___x_3088_ = lean_io_as_task(v___x_3087_, v_prio_3083_);
v___x_3089_ = lean_unsigned_to_nat(0u);
v___x_3090_ = 1;
v___x_3091_ = lean_task_bind(v___x_3088_, v___f_3085_, v___x_3089_, v___x_3090_);
v___x_3092_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3092_, 0, v___x_3091_);
v___x_3093_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3093_, 0, v___x_3092_);
return v___x_3093_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_async___redArg___boxed(lean_object* v_self_3094_, lean_object* v_prio_3095_, lean_object* v___y_3096_){
_start:
{
lean_object* v_res_3097_; 
v_res_3097_ = l_Std_Async_EAsync_async___redArg(v_self_3094_, v_prio_3095_);
return v_res_3097_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_async(lean_object* v_00_u03b5_3098_, lean_object* v_00_u03b1_3099_, lean_object* v_self_3100_, lean_object* v_prio_3101_){
_start:
{
lean_object* v___f_3103_; lean_object* v___x_3104_; lean_object* v___x_3105_; lean_object* v___x_3106_; lean_object* v___x_3107_; uint8_t v___x_3108_; lean_object* v___x_3109_; lean_object* v___x_3110_; lean_object* v___x_3111_; 
v___f_3103_ = ((lean_object*)(l_Std_Async_EAsync_asTask___redArg___closed__0));
v___x_3104_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_toBaseAsync___boxed), 4, 3);
lean_closure_set(v___x_3104_, 0, lean_box(0));
lean_closure_set(v___x_3104_, 1, lean_box(0));
lean_closure_set(v___x_3104_, 2, v_self_3100_);
v___x_3105_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_toRawBaseIO___boxed), 3, 2);
lean_closure_set(v___x_3105_, 0, lean_box(0));
lean_closure_set(v___x_3105_, 1, v___x_3104_);
v___x_3106_ = lean_io_as_task(v___x_3105_, v_prio_3101_);
v___x_3107_ = lean_unsigned_to_nat(0u);
v___x_3108_ = 1;
v___x_3109_ = lean_task_bind(v___x_3106_, v___f_3103_, v___x_3107_, v___x_3108_);
v___x_3110_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3110_, 0, v___x_3109_);
v___x_3111_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3111_, 0, v___x_3110_);
return v___x_3111_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_async___boxed(lean_object* v_00_u03b5_3112_, lean_object* v_00_u03b1_3113_, lean_object* v_self_3114_, lean_object* v_prio_3115_, lean_object* v___y_3116_){
_start:
{
lean_object* v_res_3117_; 
v_res_3117_ = l_Std_Async_EAsync_async(v_00_u03b5_3112_, v_00_u03b1_3113_, v_self_3114_, v_prio_3115_);
return v_res_3117_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instFunctor___redArg___lam__0(lean_object* v_00_u03b1_3118_, lean_object* v_00_u03b2_3119_, lean_object* v___y_3120_, lean_object* v___y_3121_){
_start:
{
lean_object* v___x_3123_; lean_object* v___x_3124_; uint8_t v___x_3125_; lean_object* v___x_3126_; lean_object* v___y_3128_; 
lean_inc(v___y_3120_);
v___x_3123_ = lean_alloc_closure((void*)(l_Except_map), 5, 4);
lean_closure_set(v___x_3123_, 0, lean_box(0));
lean_closure_set(v___x_3123_, 1, lean_box(0));
lean_closure_set(v___x_3123_, 2, lean_box(0));
lean_closure_set(v___x_3123_, 3, v___y_3120_);
v___x_3124_ = lean_unsigned_to_nat(0u);
v___x_3125_ = 0;
v___x_3126_ = lean_apply_1(v___y_3121_, lean_box(0));
if (lean_obj_tag(v___x_3126_) == 0)
{
lean_object* v_a_3130_; 
lean_dec_ref(v___x_3123_);
v_a_3130_ = lean_ctor_get(v___x_3126_, 0);
lean_inc(v_a_3130_);
lean_dec_ref_known(v___x_3126_, 1);
if (lean_obj_tag(v_a_3130_) == 0)
{
lean_object* v_a_3131_; lean_object* v___x_3133_; uint8_t v_isShared_3134_; uint8_t v_isSharedCheck_3138_; 
lean_dec(v___y_3120_);
v_a_3131_ = lean_ctor_get(v_a_3130_, 0);
v_isSharedCheck_3138_ = !lean_is_exclusive(v_a_3130_);
if (v_isSharedCheck_3138_ == 0)
{
v___x_3133_ = v_a_3130_;
v_isShared_3134_ = v_isSharedCheck_3138_;
goto v_resetjp_3132_;
}
else
{
lean_inc(v_a_3131_);
lean_dec(v_a_3130_);
v___x_3133_ = lean_box(0);
v_isShared_3134_ = v_isSharedCheck_3138_;
goto v_resetjp_3132_;
}
v_resetjp_3132_:
{
lean_object* v___x_3136_; 
if (v_isShared_3134_ == 0)
{
v___x_3136_ = v___x_3133_;
goto v_reusejp_3135_;
}
else
{
lean_object* v_reuseFailAlloc_3137_; 
v_reuseFailAlloc_3137_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3137_, 0, v_a_3131_);
v___x_3136_ = v_reuseFailAlloc_3137_;
goto v_reusejp_3135_;
}
v_reusejp_3135_:
{
v___y_3128_ = v___x_3136_;
goto v___jp_3127_;
}
}
}
else
{
lean_object* v_a_3139_; lean_object* v___x_3141_; uint8_t v_isShared_3142_; uint8_t v_isSharedCheck_3147_; 
v_a_3139_ = lean_ctor_get(v_a_3130_, 0);
v_isSharedCheck_3147_ = !lean_is_exclusive(v_a_3130_);
if (v_isSharedCheck_3147_ == 0)
{
v___x_3141_ = v_a_3130_;
v_isShared_3142_ = v_isSharedCheck_3147_;
goto v_resetjp_3140_;
}
else
{
lean_inc(v_a_3139_);
lean_dec(v_a_3130_);
v___x_3141_ = lean_box(0);
v_isShared_3142_ = v_isSharedCheck_3147_;
goto v_resetjp_3140_;
}
v_resetjp_3140_:
{
lean_object* v___x_3143_; lean_object* v___x_3145_; 
v___x_3143_ = lean_apply_1(v___y_3120_, v_a_3139_);
if (v_isShared_3142_ == 0)
{
lean_ctor_set(v___x_3141_, 0, v___x_3143_);
v___x_3145_ = v___x_3141_;
goto v_reusejp_3144_;
}
else
{
lean_object* v_reuseFailAlloc_3146_; 
v_reuseFailAlloc_3146_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3146_, 0, v___x_3143_);
v___x_3145_ = v_reuseFailAlloc_3146_;
goto v_reusejp_3144_;
}
v_reusejp_3144_:
{
v___y_3128_ = v___x_3145_;
goto v___jp_3127_;
}
}
}
}
else
{
lean_object* v_a_3148_; lean_object* v___x_3150_; uint8_t v_isShared_3151_; uint8_t v_isSharedCheck_3156_; 
lean_dec(v___y_3120_);
v_a_3148_ = lean_ctor_get(v___x_3126_, 0);
v_isSharedCheck_3156_ = !lean_is_exclusive(v___x_3126_);
if (v_isSharedCheck_3156_ == 0)
{
v___x_3150_ = v___x_3126_;
v_isShared_3151_ = v_isSharedCheck_3156_;
goto v_resetjp_3149_;
}
else
{
lean_inc(v_a_3148_);
lean_dec(v___x_3126_);
v___x_3150_ = lean_box(0);
v_isShared_3151_ = v_isSharedCheck_3156_;
goto v_resetjp_3149_;
}
v_resetjp_3149_:
{
lean_object* v___x_3152_; lean_object* v___x_3154_; 
v___x_3152_ = lean_task_map(v___x_3123_, v_a_3148_, v___x_3124_, v___x_3125_);
if (v_isShared_3151_ == 0)
{
lean_ctor_set(v___x_3150_, 0, v___x_3152_);
v___x_3154_ = v___x_3150_;
goto v_reusejp_3153_;
}
else
{
lean_object* v_reuseFailAlloc_3155_; 
v_reuseFailAlloc_3155_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3155_, 0, v___x_3152_);
v___x_3154_ = v_reuseFailAlloc_3155_;
goto v_reusejp_3153_;
}
v_reusejp_3153_:
{
return v___x_3154_;
}
}
}
v___jp_3127_:
{
lean_object* v___x_3129_; 
v___x_3129_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3129_, 0, v___y_3128_);
return v___x_3129_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instFunctor___redArg___lam__0___boxed(lean_object* v_00_u03b1_3157_, lean_object* v_00_u03b2_3158_, lean_object* v___y_3159_, lean_object* v___y_3160_, lean_object* v___y_3161_){
_start:
{
lean_object* v_res_3162_; 
v_res_3162_ = l_Std_Async_EAsync_instFunctor___redArg___lam__0(v_00_u03b1_3157_, v_00_u03b2_3158_, v___y_3159_, v___y_3160_);
return v_res_3162_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instFunctor___redArg___lam__1(lean_object* v___f_3163_, lean_object* v_00_u03b1_3164_, lean_object* v_00_u03b2_3165_, lean_object* v___y_3166_, lean_object* v___y_3167_){
_start:
{
lean_object* v___x_3169_; lean_object* v___x_3170_; 
v___x_3169_ = lean_alloc_closure((void*)(l_Function_const___boxed), 4, 3);
lean_closure_set(v___x_3169_, 0, lean_box(0));
lean_closure_set(v___x_3169_, 1, lean_box(0));
lean_closure_set(v___x_3169_, 2, v___y_3166_);
v___x_3170_ = lean_apply_5(v___f_3163_, lean_box(0), lean_box(0), v___x_3169_, v___y_3167_, lean_box(0));
return v___x_3170_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instFunctor___redArg___lam__1___boxed(lean_object* v___f_3171_, lean_object* v_00_u03b1_3172_, lean_object* v_00_u03b2_3173_, lean_object* v___y_3174_, lean_object* v___y_3175_, lean_object* v___y_3176_){
_start:
{
lean_object* v_res_3177_; 
v_res_3177_ = l_Std_Async_EAsync_instFunctor___redArg___lam__1(v___f_3171_, v_00_u03b1_3172_, v_00_u03b2_3173_, v___y_3174_, v___y_3175_);
return v_res_3177_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instFunctor___redArg(){
_start:
{
lean_object* v___x_3185_; 
v___x_3185_ = ((lean_object*)(l_Std_Async_EAsync_instFunctor___redArg___closed__2));
return v___x_3185_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instFunctor___redArg___boxed(lean_object* v___dummy_3186_){
_start:
{
lean_object* v_res_3187_; 
v_res_3187_ = l_Std_Async_EAsync_instFunctor___redArg();
return v_res_3187_;
}
}
static lean_object* _init_l_Std_Async_EAsync_instFunctor___closed__0(void){
_start:
{
lean_object* v___x_3188_; 
v___x_3188_ = l_Std_Async_EAsync_instFunctor___redArg();
return v___x_3188_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instFunctor(lean_object* v_00_u03b5_3189_){
_start:
{
lean_object* v___x_3190_; 
v___x_3190_ = lean_obj_once(&l_Std_Async_EAsync_instFunctor___closed__0, &l_Std_Async_EAsync_instFunctor___closed__0_once, _init_l_Std_Async_EAsync_instFunctor___closed__0);
return v___x_3190_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonad___redArg___lam__0(lean_object* v_00_u03b1_3191_, lean_object* v___y_3192_){
_start:
{
lean_object* v___x_3194_; lean_object* v___x_3195_; 
v___x_3194_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3194_, 0, v___y_3192_);
v___x_3195_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3195_, 0, v___x_3194_);
return v___x_3195_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonad___redArg___lam__0___boxed(lean_object* v_00_u03b1_3196_, lean_object* v___y_3197_, lean_object* v___y_3198_){
_start:
{
lean_object* v_res_3199_; 
v_res_3199_ = l_Std_Async_EAsync_instMonad___redArg___lam__0(v_00_u03b1_3196_, v___y_3197_);
return v_res_3199_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonad___redArg___lam__1(lean_object* v_x_3200_, lean_object* v_x_3201_){
_start:
{
if (lean_obj_tag(v_x_3201_) == 0)
{
lean_object* v_a_3203_; lean_object* v___x_3205_; uint8_t v_isShared_3206_; uint8_t v_isSharedCheck_3211_; 
lean_dec_ref(v_x_3200_);
v_a_3203_ = lean_ctor_get(v_x_3201_, 0);
v_isSharedCheck_3211_ = !lean_is_exclusive(v_x_3201_);
if (v_isSharedCheck_3211_ == 0)
{
v___x_3205_ = v_x_3201_;
v_isShared_3206_ = v_isSharedCheck_3211_;
goto v_resetjp_3204_;
}
else
{
lean_inc(v_a_3203_);
lean_dec(v_x_3201_);
v___x_3205_ = lean_box(0);
v_isShared_3206_ = v_isSharedCheck_3211_;
goto v_resetjp_3204_;
}
v_resetjp_3204_:
{
lean_object* v___x_3208_; 
if (v_isShared_3206_ == 0)
{
v___x_3208_ = v___x_3205_;
goto v_reusejp_3207_;
}
else
{
lean_object* v_reuseFailAlloc_3210_; 
v_reuseFailAlloc_3210_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3210_, 0, v_a_3203_);
v___x_3208_ = v_reuseFailAlloc_3210_;
goto v_reusejp_3207_;
}
v_reusejp_3207_:
{
lean_object* v___x_3209_; 
v___x_3209_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3209_, 0, v___x_3208_);
return v___x_3209_;
}
}
}
else
{
lean_object* v_a_3212_; lean_object* v___x_3213_; lean_object* v___x_3214_; lean_object* v___x_3215_; uint8_t v___x_3216_; lean_object* v___x_3217_; lean_object* v___y_3219_; 
v_a_3212_ = lean_ctor_get(v_x_3201_, 0);
lean_inc_n(v_a_3212_, 2);
lean_dec_ref_known(v_x_3201_, 1);
v___x_3213_ = lean_box(0);
v___x_3214_ = lean_alloc_closure((void*)(l_Except_map), 5, 4);
lean_closure_set(v___x_3214_, 0, lean_box(0));
lean_closure_set(v___x_3214_, 1, lean_box(0));
lean_closure_set(v___x_3214_, 2, lean_box(0));
lean_closure_set(v___x_3214_, 3, v_a_3212_);
v___x_3215_ = lean_unsigned_to_nat(0u);
v___x_3216_ = 0;
v___x_3217_ = lean_apply_2(v_x_3200_, v___x_3213_, lean_box(0));
if (lean_obj_tag(v___x_3217_) == 0)
{
lean_object* v_a_3221_; 
lean_dec_ref(v___x_3214_);
v_a_3221_ = lean_ctor_get(v___x_3217_, 0);
lean_inc(v_a_3221_);
lean_dec_ref_known(v___x_3217_, 1);
if (lean_obj_tag(v_a_3221_) == 0)
{
lean_object* v_a_3222_; lean_object* v___x_3224_; uint8_t v_isShared_3225_; uint8_t v_isSharedCheck_3229_; 
lean_dec(v_a_3212_);
v_a_3222_ = lean_ctor_get(v_a_3221_, 0);
v_isSharedCheck_3229_ = !lean_is_exclusive(v_a_3221_);
if (v_isSharedCheck_3229_ == 0)
{
v___x_3224_ = v_a_3221_;
v_isShared_3225_ = v_isSharedCheck_3229_;
goto v_resetjp_3223_;
}
else
{
lean_inc(v_a_3222_);
lean_dec(v_a_3221_);
v___x_3224_ = lean_box(0);
v_isShared_3225_ = v_isSharedCheck_3229_;
goto v_resetjp_3223_;
}
v_resetjp_3223_:
{
lean_object* v___x_3227_; 
if (v_isShared_3225_ == 0)
{
v___x_3227_ = v___x_3224_;
goto v_reusejp_3226_;
}
else
{
lean_object* v_reuseFailAlloc_3228_; 
v_reuseFailAlloc_3228_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3228_, 0, v_a_3222_);
v___x_3227_ = v_reuseFailAlloc_3228_;
goto v_reusejp_3226_;
}
v_reusejp_3226_:
{
v___y_3219_ = v___x_3227_;
goto v___jp_3218_;
}
}
}
else
{
lean_object* v_a_3230_; lean_object* v___x_3232_; uint8_t v_isShared_3233_; uint8_t v_isSharedCheck_3238_; 
v_a_3230_ = lean_ctor_get(v_a_3221_, 0);
v_isSharedCheck_3238_ = !lean_is_exclusive(v_a_3221_);
if (v_isSharedCheck_3238_ == 0)
{
v___x_3232_ = v_a_3221_;
v_isShared_3233_ = v_isSharedCheck_3238_;
goto v_resetjp_3231_;
}
else
{
lean_inc(v_a_3230_);
lean_dec(v_a_3221_);
v___x_3232_ = lean_box(0);
v_isShared_3233_ = v_isSharedCheck_3238_;
goto v_resetjp_3231_;
}
v_resetjp_3231_:
{
lean_object* v___x_3234_; lean_object* v___x_3236_; 
v___x_3234_ = lean_apply_1(v_a_3212_, v_a_3230_);
if (v_isShared_3233_ == 0)
{
lean_ctor_set(v___x_3232_, 0, v___x_3234_);
v___x_3236_ = v___x_3232_;
goto v_reusejp_3235_;
}
else
{
lean_object* v_reuseFailAlloc_3237_; 
v_reuseFailAlloc_3237_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3237_, 0, v___x_3234_);
v___x_3236_ = v_reuseFailAlloc_3237_;
goto v_reusejp_3235_;
}
v_reusejp_3235_:
{
v___y_3219_ = v___x_3236_;
goto v___jp_3218_;
}
}
}
}
else
{
lean_object* v_a_3239_; lean_object* v___x_3241_; uint8_t v_isShared_3242_; uint8_t v_isSharedCheck_3247_; 
lean_dec(v_a_3212_);
v_a_3239_ = lean_ctor_get(v___x_3217_, 0);
v_isSharedCheck_3247_ = !lean_is_exclusive(v___x_3217_);
if (v_isSharedCheck_3247_ == 0)
{
v___x_3241_ = v___x_3217_;
v_isShared_3242_ = v_isSharedCheck_3247_;
goto v_resetjp_3240_;
}
else
{
lean_inc(v_a_3239_);
lean_dec(v___x_3217_);
v___x_3241_ = lean_box(0);
v_isShared_3242_ = v_isSharedCheck_3247_;
goto v_resetjp_3240_;
}
v_resetjp_3240_:
{
lean_object* v___x_3243_; lean_object* v___x_3245_; 
v___x_3243_ = lean_task_map(v___x_3214_, v_a_3239_, v___x_3215_, v___x_3216_);
if (v_isShared_3242_ == 0)
{
lean_ctor_set(v___x_3241_, 0, v___x_3243_);
v___x_3245_ = v___x_3241_;
goto v_reusejp_3244_;
}
else
{
lean_object* v_reuseFailAlloc_3246_; 
v_reuseFailAlloc_3246_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3246_, 0, v___x_3243_);
v___x_3245_ = v_reuseFailAlloc_3246_;
goto v_reusejp_3244_;
}
v_reusejp_3244_:
{
return v___x_3245_;
}
}
}
v___jp_3218_:
{
lean_object* v___x_3220_; 
v___x_3220_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3220_, 0, v___y_3219_);
return v___x_3220_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonad___redArg___lam__1___boxed(lean_object* v_x_3248_, lean_object* v_x_3249_, lean_object* v___y_3250_){
_start:
{
lean_object* v_res_3251_; 
v_res_3251_ = l_Std_Async_EAsync_instMonad___redArg___lam__1(v_x_3248_, v_x_3249_);
return v_res_3251_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonad___redArg___lam__2(lean_object* v_00_u03b1_3252_, lean_object* v_00_u03b2_3253_, lean_object* v_f_3254_, lean_object* v_x_3255_){
_start:
{
lean_object* v___f_3257_; lean_object* v___x_3258_; uint8_t v___x_3259_; lean_object* v___x_3260_; lean_object* v___x_3261_; 
v___f_3257_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_instMonad___redArg___lam__1___boxed), 3, 1);
lean_closure_set(v___f_3257_, 0, v_x_3255_);
v___x_3258_ = lean_unsigned_to_nat(0u);
v___x_3259_ = 0;
v___x_3260_ = lean_apply_1(v_f_3254_, lean_box(0));
v___x_3261_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3258_, v___x_3259_, v___x_3260_, v___f_3257_);
return v___x_3261_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonad___redArg___lam__2___boxed(lean_object* v_00_u03b1_3262_, lean_object* v_00_u03b2_3263_, lean_object* v_f_3264_, lean_object* v_x_3265_, lean_object* v___y_3266_){
_start:
{
lean_object* v_res_3267_; 
v_res_3267_ = l_Std_Async_EAsync_instMonad___redArg___lam__2(v_00_u03b1_3262_, v_00_u03b2_3263_, v_f_3264_, v_x_3265_);
return v_res_3267_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonad___redArg___lam__3(lean_object* v___f_3268_, lean_object* v_a_3269_, lean_object* v_x_3270_){
_start:
{
if (lean_obj_tag(v_x_3270_) == 0)
{
lean_object* v_a_3272_; lean_object* v___x_3274_; uint8_t v_isShared_3275_; uint8_t v_isSharedCheck_3280_; 
lean_dec(v_a_3269_);
lean_dec_ref(v___f_3268_);
v_a_3272_ = lean_ctor_get(v_x_3270_, 0);
v_isSharedCheck_3280_ = !lean_is_exclusive(v_x_3270_);
if (v_isSharedCheck_3280_ == 0)
{
v___x_3274_ = v_x_3270_;
v_isShared_3275_ = v_isSharedCheck_3280_;
goto v_resetjp_3273_;
}
else
{
lean_inc(v_a_3272_);
lean_dec(v_x_3270_);
v___x_3274_ = lean_box(0);
v_isShared_3275_ = v_isSharedCheck_3280_;
goto v_resetjp_3273_;
}
v_resetjp_3273_:
{
lean_object* v___x_3277_; 
if (v_isShared_3275_ == 0)
{
v___x_3277_ = v___x_3274_;
goto v_reusejp_3276_;
}
else
{
lean_object* v_reuseFailAlloc_3279_; 
v_reuseFailAlloc_3279_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3279_, 0, v_a_3272_);
v___x_3277_ = v_reuseFailAlloc_3279_;
goto v_reusejp_3276_;
}
v_reusejp_3276_:
{
lean_object* v___x_3278_; 
v___x_3278_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3278_, 0, v___x_3277_);
return v___x_3278_;
}
}
}
else
{
lean_object* v___x_3281_; 
lean_dec_ref_known(v_x_3270_, 1);
v___x_3281_ = lean_apply_3(v___f_3268_, lean_box(0), v_a_3269_, lean_box(0));
return v___x_3281_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonad___redArg___lam__3___boxed(lean_object* v___f_3282_, lean_object* v_a_3283_, lean_object* v_x_3284_, lean_object* v___y_3285_){
_start:
{
lean_object* v_res_3286_; 
v_res_3286_ = l_Std_Async_EAsync_instMonad___redArg___lam__3(v___f_3282_, v_a_3283_, v_x_3284_);
return v_res_3286_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonad___redArg___lam__4(lean_object* v___f_3287_, lean_object* v_y_3288_, lean_object* v_x_3289_){
_start:
{
if (lean_obj_tag(v_x_3289_) == 0)
{
lean_object* v___x_3291_; 
lean_dec_ref(v_y_3288_);
lean_dec_ref(v___f_3287_);
v___x_3291_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3291_, 0, v_x_3289_);
return v___x_3291_;
}
else
{
lean_object* v_a_3292_; lean_object* v___f_3293_; lean_object* v___x_3294_; lean_object* v___x_3295_; uint8_t v___x_3296_; lean_object* v___x_3297_; lean_object* v___x_3298_; 
v_a_3292_ = lean_ctor_get(v_x_3289_, 0);
lean_inc(v_a_3292_);
lean_dec_ref_known(v_x_3289_, 1);
v___f_3293_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_instMonad___redArg___lam__3___boxed), 4, 2);
lean_closure_set(v___f_3293_, 0, v___f_3287_);
lean_closure_set(v___f_3293_, 1, v_a_3292_);
v___x_3294_ = lean_box(0);
v___x_3295_ = lean_unsigned_to_nat(0u);
v___x_3296_ = 0;
v___x_3297_ = lean_apply_2(v_y_3288_, v___x_3294_, lean_box(0));
v___x_3298_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3295_, v___x_3296_, v___x_3297_, v___f_3293_);
return v___x_3298_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonad___redArg___lam__4___boxed(lean_object* v___f_3299_, lean_object* v_y_3300_, lean_object* v_x_3301_, lean_object* v___y_3302_){
_start:
{
lean_object* v_res_3303_; 
v_res_3303_ = l_Std_Async_EAsync_instMonad___redArg___lam__4(v___f_3299_, v_y_3300_, v_x_3301_);
return v_res_3303_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonad___redArg___lam__5(lean_object* v___f_3304_, lean_object* v_00_u03b1_3305_, lean_object* v_00_u03b2_3306_, lean_object* v_x_3307_, lean_object* v_y_3308_){
_start:
{
lean_object* v___f_3310_; lean_object* v___x_3311_; uint8_t v___x_3312_; lean_object* v___x_3313_; lean_object* v___x_3314_; 
v___f_3310_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_instMonad___redArg___lam__4___boxed), 4, 2);
lean_closure_set(v___f_3310_, 0, v___f_3304_);
lean_closure_set(v___f_3310_, 1, v_y_3308_);
v___x_3311_ = lean_unsigned_to_nat(0u);
v___x_3312_ = 0;
v___x_3313_ = lean_apply_1(v_x_3307_, lean_box(0));
v___x_3314_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3311_, v___x_3312_, v___x_3313_, v___f_3310_);
return v___x_3314_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonad___redArg___lam__5___boxed(lean_object* v___f_3315_, lean_object* v_00_u03b1_3316_, lean_object* v_00_u03b2_3317_, lean_object* v_x_3318_, lean_object* v_y_3319_, lean_object* v___y_3320_){
_start:
{
lean_object* v_res_3321_; 
v_res_3321_ = l_Std_Async_EAsync_instMonad___redArg___lam__5(v___f_3315_, v_00_u03b1_3316_, v_00_u03b2_3317_, v_x_3318_, v_y_3319_);
return v_res_3321_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonad___redArg___lam__6(lean_object* v_y_3322_, lean_object* v_x_3323_){
_start:
{
if (lean_obj_tag(v_x_3323_) == 0)
{
lean_object* v_a_3325_; lean_object* v___x_3327_; uint8_t v_isShared_3328_; uint8_t v_isSharedCheck_3333_; 
lean_dec_ref(v_y_3322_);
v_a_3325_ = lean_ctor_get(v_x_3323_, 0);
v_isSharedCheck_3333_ = !lean_is_exclusive(v_x_3323_);
if (v_isSharedCheck_3333_ == 0)
{
v___x_3327_ = v_x_3323_;
v_isShared_3328_ = v_isSharedCheck_3333_;
goto v_resetjp_3326_;
}
else
{
lean_inc(v_a_3325_);
lean_dec(v_x_3323_);
v___x_3327_ = lean_box(0);
v_isShared_3328_ = v_isSharedCheck_3333_;
goto v_resetjp_3326_;
}
v_resetjp_3326_:
{
lean_object* v___x_3330_; 
if (v_isShared_3328_ == 0)
{
v___x_3330_ = v___x_3327_;
goto v_reusejp_3329_;
}
else
{
lean_object* v_reuseFailAlloc_3332_; 
v_reuseFailAlloc_3332_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3332_, 0, v_a_3325_);
v___x_3330_ = v_reuseFailAlloc_3332_;
goto v_reusejp_3329_;
}
v_reusejp_3329_:
{
lean_object* v___x_3331_; 
v___x_3331_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3331_, 0, v___x_3330_);
return v___x_3331_;
}
}
}
else
{
lean_object* v___x_3334_; lean_object* v___x_3335_; 
lean_dec_ref_known(v_x_3323_, 1);
v___x_3334_ = lean_box(0);
v___x_3335_ = lean_apply_2(v_y_3322_, v___x_3334_, lean_box(0));
return v___x_3335_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonad___redArg___lam__6___boxed(lean_object* v_y_3336_, lean_object* v_x_3337_, lean_object* v___y_3338_){
_start:
{
lean_object* v_res_3339_; 
v_res_3339_ = l_Std_Async_EAsync_instMonad___redArg___lam__6(v_y_3336_, v_x_3337_);
return v_res_3339_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonad___redArg___lam__7(lean_object* v_00_u03b1_3340_, lean_object* v_00_u03b2_3341_, lean_object* v_x_3342_, lean_object* v_y_3343_){
_start:
{
lean_object* v___f_3345_; lean_object* v___x_3346_; uint8_t v___x_3347_; lean_object* v___x_3348_; lean_object* v___x_3349_; 
v___f_3345_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_instMonad___redArg___lam__6___boxed), 3, 1);
lean_closure_set(v___f_3345_, 0, v_y_3343_);
v___x_3346_ = lean_unsigned_to_nat(0u);
v___x_3347_ = 0;
v___x_3348_ = lean_apply_1(v_x_3342_, lean_box(0));
v___x_3349_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3346_, v___x_3347_, v___x_3348_, v___f_3345_);
return v___x_3349_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonad___redArg___lam__7___boxed(lean_object* v_00_u03b1_3350_, lean_object* v_00_u03b2_3351_, lean_object* v_x_3352_, lean_object* v_y_3353_, lean_object* v___y_3354_){
_start:
{
lean_object* v_res_3355_; 
v_res_3355_ = l_Std_Async_EAsync_instMonad___redArg___lam__7(v_00_u03b1_3350_, v_00_u03b2_3351_, v_x_3352_, v_y_3353_);
return v_res_3355_;
}
}
static lean_object* _init_l_Std_Async_EAsync_instMonad___redArg___closed__4(void){
_start:
{
lean_object* v___f_3361_; lean_object* v___f_3362_; lean_object* v___f_3363_; lean_object* v___f_3364_; lean_object* v___x_3365_; lean_object* v___x_3366_; 
v___f_3361_ = ((lean_object*)(l_Std_Async_EAsync_instMonad___redArg___closed__3));
v___f_3362_ = ((lean_object*)(l_Std_Async_EAsync_instMonad___redArg___closed__2));
v___f_3363_ = ((lean_object*)(l_Std_Async_EAsync_instMonad___redArg___closed__1));
v___f_3364_ = ((lean_object*)(l_Std_Async_EAsync_instMonad___redArg___closed__0));
v___x_3365_ = lean_obj_once(&l_Std_Async_EAsync_instFunctor___closed__0, &l_Std_Async_EAsync_instFunctor___closed__0_once, _init_l_Std_Async_EAsync_instFunctor___closed__0);
v___x_3366_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_3366_, 0, v___x_3365_);
lean_ctor_set(v___x_3366_, 1, v___f_3364_);
lean_ctor_set(v___x_3366_, 2, v___f_3363_);
lean_ctor_set(v___x_3366_, 3, v___f_3362_);
lean_ctor_set(v___x_3366_, 4, v___f_3361_);
return v___x_3366_;
}
}
static lean_object* _init_l_Std_Async_EAsync_instMonad___redArg___closed__6(void){
_start:
{
lean_object* v___x_3368_; lean_object* v___x_3369_; lean_object* v___x_3370_; 
v___x_3368_ = ((lean_object*)(l_Std_Async_EAsync_instMonad___redArg___closed__5));
v___x_3369_ = lean_obj_once(&l_Std_Async_EAsync_instMonad___redArg___closed__4, &l_Std_Async_EAsync_instMonad___redArg___closed__4_once, _init_l_Std_Async_EAsync_instMonad___redArg___closed__4);
v___x_3370_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3370_, 0, v___x_3369_);
lean_ctor_set(v___x_3370_, 1, v___x_3368_);
return v___x_3370_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonad___redArg(){
_start:
{
lean_object* v___x_3372_; 
v___x_3372_ = lean_obj_once(&l_Std_Async_EAsync_instMonad___redArg___closed__6, &l_Std_Async_EAsync_instMonad___redArg___closed__6_once, _init_l_Std_Async_EAsync_instMonad___redArg___closed__6);
return v___x_3372_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonad___redArg___boxed(lean_object* v___dummy_3373_){
_start:
{
lean_object* v_res_3374_; 
v_res_3374_ = l_Std_Async_EAsync_instMonad___redArg();
return v_res_3374_;
}
}
static lean_object* _init_l_Std_Async_EAsync_instMonad___closed__0(void){
_start:
{
lean_object* v___x_3375_; 
v___x_3375_ = l_Std_Async_EAsync_instMonad___redArg();
return v___x_3375_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonad(lean_object* v_00_u03b5_3376_){
_start:
{
lean_object* v___x_3377_; 
v___x_3377_ = lean_obj_once(&l_Std_Async_EAsync_instMonad___closed__0, &l_Std_Async_EAsync_instMonad___closed__0_once, _init_l_Std_Async_EAsync_instMonad___closed__0);
return v___x_3377_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadLiftEIO___redArg(){
_start:
{
lean_object* v___x_3380_; 
v___x_3380_ = ((lean_object*)(l_Std_Async_EAsync_instMonadLiftEIO___redArg___closed__0));
return v___x_3380_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadLiftEIO___redArg___boxed(lean_object* v___dummy_3381_){
_start:
{
lean_object* v_res_3382_; 
v_res_3382_ = l_Std_Async_EAsync_instMonadLiftEIO___redArg();
return v_res_3382_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadLiftEIO(lean_object* v_00_u03b5_3383_){
_start:
{
lean_object* v___x_3384_; 
v___x_3384_ = ((lean_object*)(l_Std_Async_EAsync_instMonadLiftEIO___redArg___closed__0));
return v___x_3384_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadExcept___redArg___lam__1(lean_object* v_00_u03b1_3385_, lean_object* v_x_3386_, lean_object* v_f_3387_){
_start:
{
lean_object* v___f_3389_; lean_object* v___x_3390_; uint8_t v___x_3391_; lean_object* v___x_3392_; lean_object* v___x_3393_; 
v___f_3389_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_tryCatch___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_3389_, 0, v_f_3387_);
v___x_3390_ = lean_unsigned_to_nat(0u);
v___x_3391_ = 0;
v___x_3392_ = lean_apply_1(v_x_3386_, lean_box(0));
v___x_3393_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3390_, v___x_3391_, v___x_3392_, v___f_3389_);
return v___x_3393_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadExcept___redArg___lam__1___boxed(lean_object* v_00_u03b1_3394_, lean_object* v_x_3395_, lean_object* v_f_3396_, lean_object* v___y_3397_){
_start:
{
lean_object* v_res_3398_; 
v_res_3398_ = l_Std_Async_EAsync_instMonadExcept___redArg___lam__1(v_00_u03b1_3394_, v_x_3395_, v_f_3396_);
return v_res_3398_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadExcept___redArg(){
_start:
{
lean_object* v___x_3405_; 
v___x_3405_ = ((lean_object*)(l_Std_Async_EAsync_instMonadExcept___redArg___closed__2));
return v___x_3405_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadExcept___redArg___boxed(lean_object* v___dummy_3406_){
_start:
{
lean_object* v_res_3407_; 
v_res_3407_ = l_Std_Async_EAsync_instMonadExcept___redArg();
return v_res_3407_;
}
}
static lean_object* _init_l_Std_Async_EAsync_instMonadExcept___closed__0(void){
_start:
{
lean_object* v___x_3408_; 
v___x_3408_ = l_Std_Async_EAsync_instMonadExcept___redArg();
return v___x_3408_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadExcept(lean_object* v_00_u03b5_3409_){
_start:
{
lean_object* v___x_3410_; 
v___x_3410_ = lean_obj_once(&l_Std_Async_EAsync_instMonadExcept___closed__0, &l_Std_Async_EAsync_instMonadExcept___closed__0_once, _init_l_Std_Async_EAsync_instMonadExcept___closed__0);
return v___x_3410_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadExceptOf___redArg(){
_start:
{
lean_object* v___x_3415_; 
v___x_3415_ = ((lean_object*)(l_Std_Async_EAsync_instMonadExceptOf___redArg___closed__0));
return v___x_3415_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadExceptOf___redArg___boxed(lean_object* v___dummy_3416_){
_start:
{
lean_object* v_res_3417_; 
v_res_3417_ = l_Std_Async_EAsync_instMonadExceptOf___redArg();
return v_res_3417_;
}
}
static lean_object* _init_l_Std_Async_EAsync_instMonadExceptOf___closed__0(void){
_start:
{
lean_object* v___x_3418_; 
v___x_3418_ = l_Std_Async_EAsync_instMonadExceptOf___redArg();
return v___x_3418_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadExceptOf(lean_object* v_00_u03b5_3419_){
_start:
{
lean_object* v___x_3420_; 
v___x_3420_ = lean_obj_once(&l_Std_Async_EAsync_instMonadExceptOf___closed__0, &l_Std_Async_EAsync_instMonadExceptOf___closed__0_once, _init_l_Std_Async_EAsync_instMonadExceptOf___closed__0);
return v___x_3420_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadFinally___redArg___lam__0(lean_object* v_00_u03b1_3421_, lean_object* v_00_u03b2_3422_, lean_object* v_x_3423_, lean_object* v_f_3424_){
_start:
{
lean_object* v___x_3426_; uint8_t v___x_3427_; lean_object* v___x_3428_; 
v___x_3426_ = lean_unsigned_to_nat(0u);
v___x_3427_ = 0;
v___x_3428_ = l_Std_Async_EAsync_tryFinally_x27___redArg(v_x_3423_, v_f_3424_, v___x_3426_, v___x_3427_);
return v___x_3428_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadFinally___redArg___lam__0___boxed(lean_object* v_00_u03b1_3429_, lean_object* v_00_u03b2_3430_, lean_object* v_x_3431_, lean_object* v_f_3432_, lean_object* v___y_3433_){
_start:
{
lean_object* v_res_3434_; 
v_res_3434_ = l_Std_Async_EAsync_instMonadFinally___redArg___lam__0(v_00_u03b1_3429_, v_00_u03b2_3430_, v_x_3431_, v_f_3432_);
return v_res_3434_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadFinally___redArg(){
_start:
{
lean_object* v___f_3437_; 
v___f_3437_ = ((lean_object*)(l_Std_Async_EAsync_instMonadFinally___redArg___closed__0));
return v___f_3437_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadFinally___redArg___boxed(lean_object* v___dummy_3438_){
_start:
{
lean_object* v_res_3439_; 
v_res_3439_ = l_Std_Async_EAsync_instMonadFinally___redArg();
return v_res_3439_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadFinally(lean_object* v_00_u03b5_3440_){
_start:
{
lean_object* v___f_3441_; 
v___f_3441_ = ((lean_object*)(l_Std_Async_EAsync_instMonadFinally___redArg___closed__0));
return v___f_3441_;
}
}
static lean_object* _init_l_Std_Async_EAsync_instOrElse___redArg___closed__0(void){
_start:
{
lean_object* v___x_3442_; lean_object* v___x_3443_; 
v___x_3442_ = lean_obj_once(&l_Std_Async_EAsync_instMonadExcept___closed__0, &l_Std_Async_EAsync_instMonadExcept___closed__0_once, _init_l_Std_Async_EAsync_instMonadExcept___closed__0);
v___x_3443_ = lean_alloc_closure((void*)(l_MonadExcept_orElse), 6, 4);
lean_closure_set(v___x_3443_, 0, lean_box(0));
lean_closure_set(v___x_3443_, 1, lean_box(0));
lean_closure_set(v___x_3443_, 2, v___x_3442_);
lean_closure_set(v___x_3443_, 3, lean_box(0));
return v___x_3443_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instOrElse___redArg(){
_start:
{
lean_object* v___x_3445_; 
v___x_3445_ = lean_obj_once(&l_Std_Async_EAsync_instOrElse___redArg___closed__0, &l_Std_Async_EAsync_instOrElse___redArg___closed__0_once, _init_l_Std_Async_EAsync_instOrElse___redArg___closed__0);
return v___x_3445_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instOrElse___redArg___boxed(lean_object* v___dummy_3446_){
_start:
{
lean_object* v_res_3447_; 
v_res_3447_ = l_Std_Async_EAsync_instOrElse___redArg();
return v_res_3447_;
}
}
static lean_object* _init_l_Std_Async_EAsync_instOrElse___closed__0(void){
_start:
{
lean_object* v___x_3448_; 
v___x_3448_ = l_Std_Async_EAsync_instOrElse___redArg();
return v___x_3448_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instOrElse(lean_object* v_00_u03b5_3449_, lean_object* v_00_u03b1_3450_){
_start:
{
lean_object* v___x_3451_; 
v___x_3451_ = lean_obj_once(&l_Std_Async_EAsync_instOrElse___closed__0, &l_Std_Async_EAsync_instOrElse___closed__0_once, _init_l_Std_Async_EAsync_instOrElse___closed__0);
return v___x_3451_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instInhabited___redArg(lean_object* v_inst_3452_){
_start:
{
lean_object* v___x_3453_; lean_object* v___x_3454_; lean_object* v___x_3455_; 
v___x_3453_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3453_, 0, v_inst_3452_);
v___x_3454_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_pure___boxed), 3, 2);
lean_closure_set(v___x_3454_, 0, lean_box(0));
lean_closure_set(v___x_3454_, 1, v___x_3453_);
v___x_3455_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_mk___boxed), 4, 3);
lean_closure_set(v___x_3455_, 0, lean_box(0));
lean_closure_set(v___x_3455_, 1, lean_box(0));
lean_closure_set(v___x_3455_, 2, v___x_3454_);
return v___x_3455_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instInhabited(lean_object* v_00_u03b5_3456_, lean_object* v_00_u03b1_3457_, lean_object* v_inst_3458_){
_start:
{
lean_object* v___x_3459_; 
v___x_3459_ = l_Std_Async_EAsync_instInhabited___redArg(v_inst_3458_);
return v___x_3459_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadAwaitETask___redArg___lam__0(lean_object* v_00_u03b1_3460_, lean_object* v_t_3461_){
_start:
{
lean_object* v___x_3463_; 
v___x_3463_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3463_, 0, v_t_3461_);
return v___x_3463_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadAwaitETask___redArg___lam__0___boxed(lean_object* v_00_u03b1_3464_, lean_object* v_t_3465_, lean_object* v___y_3466_){
_start:
{
lean_object* v_res_3467_; 
v_res_3467_ = l_Std_Async_EAsync_instMonadAwaitETask___redArg___lam__0(v_00_u03b1_3464_, v_t_3465_);
return v_res_3467_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadAwaitETask___redArg(){
_start:
{
lean_object* v___f_3470_; 
v___f_3470_ = ((lean_object*)(l_Std_Async_EAsync_instMonadAwaitETask___redArg___closed__0));
return v___f_3470_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadAwaitETask___redArg___boxed(lean_object* v___dummy_3471_){
_start:
{
lean_object* v_res_3472_; 
v_res_3472_ = l_Std_Async_EAsync_instMonadAwaitETask___redArg();
return v_res_3472_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadAwaitETask(lean_object* v_00_u03b5_3473_){
_start:
{
lean_object* v___f_3474_; 
v___f_3474_ = ((lean_object*)(l_Std_Async_EAsync_instMonadAwaitETask___redArg___closed__0));
return v___f_3474_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadAwaitTask___redArg___lam__1(lean_object* v___f_3475_, lean_object* v_00_u03b1_3476_, lean_object* v_t_3477_){
_start:
{
lean_object* v___x_3479_; uint8_t v___x_3480_; lean_object* v___x_3481_; lean_object* v___x_3482_; 
v___x_3479_ = lean_unsigned_to_nat(0u);
v___x_3480_ = 0;
v___x_3481_ = lean_task_map(v___f_3475_, v_t_3477_, v___x_3479_, v___x_3480_);
v___x_3482_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3482_, 0, v___x_3481_);
return v___x_3482_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadAwaitTask___redArg___lam__1___boxed(lean_object* v___f_3483_, lean_object* v_00_u03b1_3484_, lean_object* v_t_3485_, lean_object* v___y_3486_){
_start:
{
lean_object* v_res_3487_; 
v_res_3487_ = l_Std_Async_EAsync_instMonadAwaitTask___redArg___lam__1(v___f_3483_, v_00_u03b1_3484_, v_t_3485_);
return v_res_3487_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadAwaitTask___redArg(){
_start:
{
lean_object* v___f_3491_; 
v___f_3491_ = ((lean_object*)(l_Std_Async_EAsync_instMonadAwaitTask___redArg___closed__0));
return v___f_3491_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadAwaitTask___redArg___boxed(lean_object* v___dummy_3492_){
_start:
{
lean_object* v_res_3493_; 
v_res_3493_ = l_Std_Async_EAsync_instMonadAwaitTask___redArg();
return v_res_3493_;
}
}
static lean_object* _init_l_Std_Async_EAsync_instMonadAwaitTask___closed__0(void){
_start:
{
lean_object* v___x_3494_; 
v___x_3494_ = l_Std_Async_EAsync_instMonadAwaitTask___redArg();
return v___x_3494_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadAwaitTask(lean_object* v_00_u03b5_3495_){
_start:
{
lean_object* v___x_3496_; 
v___x_3496_ = lean_obj_once(&l_Std_Async_EAsync_instMonadAwaitTask___closed__0, &l_Std_Async_EAsync_instMonadAwaitTask___closed__0_once, _init_l_Std_Async_EAsync_instMonadAwaitTask___closed__0);
return v___x_3496_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadAwaitAsyncTaskError___lam__0(lean_object* v_00_u03b1_3497_, lean_object* v_t_3498_){
_start:
{
lean_object* v___x_3500_; 
v___x_3500_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3500_, 0, v_t_3498_);
return v___x_3500_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadAwaitAsyncTaskError___lam__0___boxed(lean_object* v_00_u03b1_3501_, lean_object* v_t_3502_, lean_object* v___y_3503_){
_start:
{
lean_object* v_res_3504_; 
v_res_3504_ = l_Std_Async_EAsync_instMonadAwaitAsyncTaskError___lam__0(v_00_u03b1_3501_, v_t_3502_);
return v_res_3504_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadAwaitPromise___redArg___lam__1(lean_object* v___f_3507_, lean_object* v_00_u03b1_3508_, lean_object* v_t_3509_){
_start:
{
lean_object* v___x_3511_; lean_object* v___x_3512_; uint8_t v___x_3513_; lean_object* v___x_3514_; lean_object* v___x_3515_; 
v___x_3511_ = l_IO_Promise_result_x21___redArg(v_t_3509_);
v___x_3512_ = lean_unsigned_to_nat(0u);
v___x_3513_ = 0;
v___x_3514_ = lean_task_map(v___f_3507_, v___x_3511_, v___x_3512_, v___x_3513_);
v___x_3515_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3515_, 0, v___x_3514_);
return v___x_3515_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadAwaitPromise___redArg___lam__1___boxed(lean_object* v___f_3516_, lean_object* v_00_u03b1_3517_, lean_object* v_t_3518_, lean_object* v___y_3519_){
_start:
{
lean_object* v_res_3520_; 
v_res_3520_ = l_Std_Async_EAsync_instMonadAwaitPromise___redArg___lam__1(v___f_3516_, v_00_u03b1_3517_, v_t_3518_);
lean_dec(v_t_3518_);
return v_res_3520_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadAwaitPromise___redArg(){
_start:
{
lean_object* v___f_3524_; 
v___f_3524_ = ((lean_object*)(l_Std_Async_EAsync_instMonadAwaitPromise___redArg___closed__0));
return v___f_3524_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadAwaitPromise___redArg___boxed(lean_object* v___dummy_3525_){
_start:
{
lean_object* v_res_3526_; 
v_res_3526_ = l_Std_Async_EAsync_instMonadAwaitPromise___redArg();
return v_res_3526_;
}
}
static lean_object* _init_l_Std_Async_EAsync_instMonadAwaitPromise___closed__0(void){
_start:
{
lean_object* v___x_3527_; 
v___x_3527_ = l_Std_Async_EAsync_instMonadAwaitPromise___redArg();
return v___x_3527_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadAwaitPromise(lean_object* v_00_u03b5_3528_){
_start:
{
lean_object* v___x_3529_; 
v___x_3529_ = lean_obj_once(&l_Std_Async_EAsync_instMonadAwaitPromise___closed__0, &l_Std_Async_EAsync_instMonadAwaitPromise___closed__0_once, _init_l_Std_Async_EAsync_instMonadAwaitPromise___closed__0);
return v___x_3529_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadAsyncETask___redArg___lam__1(lean_object* v___f_3530_, lean_object* v_00_u03b1_3531_, lean_object* v_t_3532_, lean_object* v_prio_3533_){
_start:
{
lean_object* v___x_3535_; lean_object* v___x_3536_; lean_object* v___x_3537_; lean_object* v___x_3538_; uint8_t v___x_3539_; lean_object* v___x_3540_; lean_object* v___x_3541_; lean_object* v___x_3542_; 
v___x_3535_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_toBaseAsync___boxed), 4, 3);
lean_closure_set(v___x_3535_, 0, lean_box(0));
lean_closure_set(v___x_3535_, 1, lean_box(0));
lean_closure_set(v___x_3535_, 2, v_t_3532_);
v___x_3536_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_toRawBaseIO___boxed), 3, 2);
lean_closure_set(v___x_3536_, 0, lean_box(0));
lean_closure_set(v___x_3536_, 1, v___x_3535_);
v___x_3537_ = lean_io_as_task(v___x_3536_, v_prio_3533_);
v___x_3538_ = lean_unsigned_to_nat(0u);
v___x_3539_ = 1;
v___x_3540_ = lean_task_bind(v___x_3537_, v___f_3530_, v___x_3538_, v___x_3539_);
v___x_3541_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3541_, 0, v___x_3540_);
v___x_3542_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3542_, 0, v___x_3541_);
return v___x_3542_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadAsyncETask___redArg___lam__1___boxed(lean_object* v___f_3543_, lean_object* v_00_u03b1_3544_, lean_object* v_t_3545_, lean_object* v_prio_3546_, lean_object* v___y_3547_){
_start:
{
lean_object* v_res_3548_; 
v_res_3548_ = l_Std_Async_EAsync_instMonadAsyncETask___redArg___lam__1(v___f_3543_, v_00_u03b1_3544_, v_t_3545_, v_prio_3546_);
return v_res_3548_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadAsyncETask___redArg(){
_start:
{
lean_object* v___f_3552_; 
v___f_3552_ = ((lean_object*)(l_Std_Async_EAsync_instMonadAsyncETask___redArg___closed__0));
return v___f_3552_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadAsyncETask___redArg___boxed(lean_object* v___dummy_3553_){
_start:
{
lean_object* v_res_3554_; 
v_res_3554_ = l_Std_Async_EAsync_instMonadAsyncETask___redArg();
return v_res_3554_;
}
}
static lean_object* _init_l_Std_Async_EAsync_instMonadAsyncETask___closed__0(void){
_start:
{
lean_object* v___x_3555_; 
v___x_3555_ = l_Std_Async_EAsync_instMonadAsyncETask___redArg();
return v___x_3555_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadAsyncETask(lean_object* v_00_u03b5_3556_){
_start:
{
lean_object* v___x_3557_; 
v___x_3557_ = lean_obj_once(&l_Std_Async_EAsync_instMonadAsyncETask___closed__0, &l_Std_Async_EAsync_instMonadAsyncETask___closed__0_once, _init_l_Std_Async_EAsync_instMonadAsyncETask___closed__0);
return v___x_3557_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadAsyncAsyncTaskError___lam__0(lean_object* v_x_3558_){
_start:
{
if (lean_obj_tag(v_x_3558_) == 0)
{
lean_object* v_a_3559_; lean_object* v___x_3560_; 
v_a_3559_ = lean_ctor_get(v_x_3558_, 0);
lean_inc(v_a_3559_);
lean_dec_ref_known(v_x_3558_, 1);
v___x_3560_ = lean_task_pure(v_a_3559_);
return v___x_3560_;
}
else
{
lean_object* v_a_3561_; 
v_a_3561_ = lean_ctor_get(v_x_3558_, 0);
lean_inc_ref(v_a_3561_);
lean_dec_ref_known(v_x_3558_, 1);
return v_a_3561_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadAsyncAsyncTaskError___lam__1(lean_object* v___f_3562_, lean_object* v_00_u03b1_3563_, lean_object* v_t_3564_, lean_object* v_prio_3565_){
_start:
{
lean_object* v___x_3567_; lean_object* v___x_3568_; lean_object* v___x_3569_; lean_object* v___x_3570_; uint8_t v___x_3571_; lean_object* v___x_3572_; lean_object* v___x_3573_; lean_object* v___x_3574_; 
v___x_3567_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_toBaseAsync___boxed), 4, 3);
lean_closure_set(v___x_3567_, 0, lean_box(0));
lean_closure_set(v___x_3567_, 1, lean_box(0));
lean_closure_set(v___x_3567_, 2, v_t_3564_);
v___x_3568_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_toRawBaseIO___boxed), 3, 2);
lean_closure_set(v___x_3568_, 0, lean_box(0));
lean_closure_set(v___x_3568_, 1, v___x_3567_);
v___x_3569_ = lean_io_as_task(v___x_3568_, v_prio_3565_);
v___x_3570_ = lean_unsigned_to_nat(0u);
v___x_3571_ = 1;
v___x_3572_ = lean_task_bind(v___x_3569_, v___f_3562_, v___x_3570_, v___x_3571_);
v___x_3573_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3573_, 0, v___x_3572_);
v___x_3574_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3574_, 0, v___x_3573_);
return v___x_3574_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadAsyncAsyncTaskError___lam__1___boxed(lean_object* v___f_3575_, lean_object* v_00_u03b1_3576_, lean_object* v_t_3577_, lean_object* v_prio_3578_, lean_object* v___y_3579_){
_start:
{
lean_object* v_res_3580_; 
v_res_3580_ = l_Std_Async_EAsync_instMonadAsyncAsyncTaskError___lam__1(v___f_3575_, v_00_u03b1_3576_, v_t_3577_, v_prio_3578_);
return v_res_3580_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadLiftBaseIO___redArg___lam__0(lean_object* v_00_u03b1_3585_, lean_object* v_x_3586_){
_start:
{
lean_object* v___x_3588_; lean_object* v___x_3589_; lean_object* v___x_3590_; 
v___x_3588_ = lean_apply_1(v_x_3586_, lean_box(0));
v___x_3589_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3589_, 0, v___x_3588_);
v___x_3590_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3590_, 0, v___x_3589_);
return v___x_3590_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadLiftBaseIO___redArg___lam__0___boxed(lean_object* v_00_u03b1_3591_, lean_object* v_x_3592_, lean_object* v___y_3593_){
_start:
{
lean_object* v_res_3594_; 
v_res_3594_ = l_Std_Async_EAsync_instMonadLiftBaseIO___redArg___lam__0(v_00_u03b1_3591_, v_x_3592_);
return v_res_3594_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadLiftBaseIO___redArg(){
_start:
{
lean_object* v___f_3597_; 
v___f_3597_ = ((lean_object*)(l_Std_Async_EAsync_instMonadLiftBaseIO___redArg___closed__0));
return v___f_3597_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadLiftBaseIO___redArg___boxed(lean_object* v___dummy_3598_){
_start:
{
lean_object* v_res_3599_; 
v_res_3599_ = l_Std_Async_EAsync_instMonadLiftBaseIO___redArg();
return v_res_3599_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadLiftBaseIO(lean_object* v_00_u03b5_3600_){
_start:
{
lean_object* v___f_3601_; 
v___f_3601_ = ((lean_object*)(l_Std_Async_EAsync_instMonadLiftBaseIO___redArg___closed__0));
return v___f_3601_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadLiftEIO__1___redArg___lam__0(lean_object* v_00_u03b1_3602_, lean_object* v_x_3603_){
_start:
{
lean_object* v_val_3606_; lean_object* v___x_3608_; 
v___x_3608_ = lean_apply_1(v_x_3603_, lean_box(0));
if (lean_obj_tag(v___x_3608_) == 0)
{
lean_object* v_a_3609_; lean_object* v___x_3611_; uint8_t v_isShared_3612_; uint8_t v_isSharedCheck_3616_; 
v_a_3609_ = lean_ctor_get(v___x_3608_, 0);
v_isSharedCheck_3616_ = !lean_is_exclusive(v___x_3608_);
if (v_isSharedCheck_3616_ == 0)
{
v___x_3611_ = v___x_3608_;
v_isShared_3612_ = v_isSharedCheck_3616_;
goto v_resetjp_3610_;
}
else
{
lean_inc(v_a_3609_);
lean_dec(v___x_3608_);
v___x_3611_ = lean_box(0);
v_isShared_3612_ = v_isSharedCheck_3616_;
goto v_resetjp_3610_;
}
v_resetjp_3610_:
{
lean_object* v___x_3614_; 
if (v_isShared_3612_ == 0)
{
lean_ctor_set_tag(v___x_3611_, 1);
v___x_3614_ = v___x_3611_;
goto v_reusejp_3613_;
}
else
{
lean_object* v_reuseFailAlloc_3615_; 
v_reuseFailAlloc_3615_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3615_, 0, v_a_3609_);
v___x_3614_ = v_reuseFailAlloc_3615_;
goto v_reusejp_3613_;
}
v_reusejp_3613_:
{
v_val_3606_ = v___x_3614_;
goto v___jp_3605_;
}
}
}
else
{
lean_object* v_a_3617_; lean_object* v___x_3619_; uint8_t v_isShared_3620_; uint8_t v_isSharedCheck_3624_; 
v_a_3617_ = lean_ctor_get(v___x_3608_, 0);
v_isSharedCheck_3624_ = !lean_is_exclusive(v___x_3608_);
if (v_isSharedCheck_3624_ == 0)
{
v___x_3619_ = v___x_3608_;
v_isShared_3620_ = v_isSharedCheck_3624_;
goto v_resetjp_3618_;
}
else
{
lean_inc(v_a_3617_);
lean_dec(v___x_3608_);
v___x_3619_ = lean_box(0);
v_isShared_3620_ = v_isSharedCheck_3624_;
goto v_resetjp_3618_;
}
v_resetjp_3618_:
{
lean_object* v___x_3622_; 
if (v_isShared_3620_ == 0)
{
lean_ctor_set_tag(v___x_3619_, 0);
v___x_3622_ = v___x_3619_;
goto v_reusejp_3621_;
}
else
{
lean_object* v_reuseFailAlloc_3623_; 
v_reuseFailAlloc_3623_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3623_, 0, v_a_3617_);
v___x_3622_ = v_reuseFailAlloc_3623_;
goto v_reusejp_3621_;
}
v_reusejp_3621_:
{
v_val_3606_ = v___x_3622_;
goto v___jp_3605_;
}
}
}
v___jp_3605_:
{
lean_object* v___x_3607_; 
v___x_3607_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3607_, 0, v_val_3606_);
return v___x_3607_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadLiftEIO__1___redArg___lam__0___boxed(lean_object* v_00_u03b1_3625_, lean_object* v_x_3626_, lean_object* v___y_3627_){
_start:
{
lean_object* v_res_3628_; 
v_res_3628_ = l_Std_Async_EAsync_instMonadLiftEIO__1___redArg___lam__0(v_00_u03b1_3625_, v_x_3626_);
return v_res_3628_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadLiftEIO__1___redArg(){
_start:
{
lean_object* v___f_3631_; 
v___f_3631_ = ((lean_object*)(l_Std_Async_EAsync_instMonadLiftEIO__1___redArg___closed__0));
return v___f_3631_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadLiftEIO__1___redArg___boxed(lean_object* v___dummy_3632_){
_start:
{
lean_object* v_res_3633_; 
v_res_3633_ = l_Std_Async_EAsync_instMonadLiftEIO__1___redArg();
return v_res_3633_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadLiftEIO__1(lean_object* v_00_u03b5_3634_){
_start:
{
lean_object* v___f_3635_; 
v___f_3635_ = ((lean_object*)(l_Std_Async_EAsync_instMonadLiftEIO__1___redArg___closed__0));
return v___f_3635_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadLiftBaseAsync___redArg___lam__1(lean_object* v___f_3636_, lean_object* v_00_u03b1_3637_, lean_object* v_x_3638_){
_start:
{
lean_object* v___x_3640_; uint8_t v___x_3641_; lean_object* v___x_3642_; 
v___x_3640_ = lean_unsigned_to_nat(0u);
v___x_3641_ = 0;
v___x_3642_ = lean_apply_1(v_x_3638_, lean_box(0));
if (lean_obj_tag(v___x_3642_) == 0)
{
lean_object* v_a_3643_; lean_object* v___x_3645_; uint8_t v_isShared_3646_; uint8_t v_isSharedCheck_3651_; 
lean_dec_ref(v___f_3636_);
v_a_3643_ = lean_ctor_get(v___x_3642_, 0);
v_isSharedCheck_3651_ = !lean_is_exclusive(v___x_3642_);
if (v_isSharedCheck_3651_ == 0)
{
v___x_3645_ = v___x_3642_;
v_isShared_3646_ = v_isSharedCheck_3651_;
goto v_resetjp_3644_;
}
else
{
lean_inc(v_a_3643_);
lean_dec(v___x_3642_);
v___x_3645_ = lean_box(0);
v_isShared_3646_ = v_isSharedCheck_3651_;
goto v_resetjp_3644_;
}
v_resetjp_3644_:
{
lean_object* v___x_3647_; lean_object* v___x_3649_; 
v___x_3647_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3647_, 0, v_a_3643_);
if (v_isShared_3646_ == 0)
{
lean_ctor_set(v___x_3645_, 0, v___x_3647_);
v___x_3649_ = v___x_3645_;
goto v_reusejp_3648_;
}
else
{
lean_object* v_reuseFailAlloc_3650_; 
v_reuseFailAlloc_3650_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3650_, 0, v___x_3647_);
v___x_3649_ = v_reuseFailAlloc_3650_;
goto v_reusejp_3648_;
}
v_reusejp_3648_:
{
return v___x_3649_;
}
}
}
else
{
lean_object* v_a_3652_; lean_object* v___x_3654_; uint8_t v_isShared_3655_; uint8_t v_isSharedCheck_3660_; 
v_a_3652_ = lean_ctor_get(v___x_3642_, 0);
v_isSharedCheck_3660_ = !lean_is_exclusive(v___x_3642_);
if (v_isSharedCheck_3660_ == 0)
{
v___x_3654_ = v___x_3642_;
v_isShared_3655_ = v_isSharedCheck_3660_;
goto v_resetjp_3653_;
}
else
{
lean_inc(v_a_3652_);
lean_dec(v___x_3642_);
v___x_3654_ = lean_box(0);
v_isShared_3655_ = v_isSharedCheck_3660_;
goto v_resetjp_3653_;
}
v_resetjp_3653_:
{
lean_object* v___x_3656_; lean_object* v___x_3658_; 
v___x_3656_ = lean_task_map(v___f_3636_, v_a_3652_, v___x_3640_, v___x_3641_);
if (v_isShared_3655_ == 0)
{
lean_ctor_set(v___x_3654_, 0, v___x_3656_);
v___x_3658_ = v___x_3654_;
goto v_reusejp_3657_;
}
else
{
lean_object* v_reuseFailAlloc_3659_; 
v_reuseFailAlloc_3659_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3659_, 0, v___x_3656_);
v___x_3658_ = v_reuseFailAlloc_3659_;
goto v_reusejp_3657_;
}
v_reusejp_3657_:
{
return v___x_3658_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadLiftBaseAsync___redArg___lam__1___boxed(lean_object* v___f_3661_, lean_object* v_00_u03b1_3662_, lean_object* v_x_3663_, lean_object* v___y_3664_){
_start:
{
lean_object* v_res_3665_; 
v_res_3665_ = l_Std_Async_EAsync_instMonadLiftBaseAsync___redArg___lam__1(v___f_3661_, v_00_u03b1_3662_, v_x_3663_);
return v_res_3665_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadLiftBaseAsync___redArg(){
_start:
{
lean_object* v___f_3669_; 
v___f_3669_ = ((lean_object*)(l_Std_Async_EAsync_instMonadLiftBaseAsync___redArg___closed__0));
return v___f_3669_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadLiftBaseAsync___redArg___boxed(lean_object* v___dummy_3670_){
_start:
{
lean_object* v_res_3671_; 
v_res_3671_ = l_Std_Async_EAsync_instMonadLiftBaseAsync___redArg();
return v_res_3671_;
}
}
static lean_object* _init_l_Std_Async_EAsync_instMonadLiftBaseAsync___closed__0(void){
_start:
{
lean_object* v___x_3672_; 
v___x_3672_ = l_Std_Async_EAsync_instMonadLiftBaseAsync___redArg();
return v___x_3672_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadLiftBaseAsync(lean_object* v_00_u03b5_3673_){
_start:
{
lean_object* v___x_3674_; 
v___x_3674_ = lean_obj_once(&l_Std_Async_EAsync_instMonadLiftBaseAsync___closed__0, &l_Std_Async_EAsync_instMonadLiftBaseAsync___closed__0_once, _init_l_Std_Async_EAsync_instMonadLiftBaseAsync___closed__0);
return v___x_3674_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Async_Basic_0__Std_Async_EAsync_forIn_loop___redArg___lam__0___boxed(lean_object* v_promise_3675_, lean_object* v_f_3676_, lean_object* v_prio_3677_, lean_object* v_x_3678_, lean_object* v___y_3679_){
_start:
{
lean_object* v_res_3680_; 
v_res_3680_ = l___private_Std_Async_Basic_0__Std_Async_EAsync_forIn_loop___redArg___lam__0(v_promise_3675_, v_f_3676_, v_prio_3677_, v_x_3678_);
return v_res_3680_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Async_Basic_0__Std_Async_EAsync_forIn_loop___redArg(lean_object* v_f_3681_, lean_object* v_prio_3682_, lean_object* v_promise_3683_, lean_object* v_b_3684_){
_start:
{
lean_object* v___f_3686_; lean_object* v___x_3687_; lean_object* v___x_3688_; 
lean_inc(v_prio_3682_);
lean_inc_ref_n(v_f_3681_, 2);
lean_inc(v_promise_3683_);
v___f_3686_ = lean_alloc_closure((void*)(l___private_Std_Async_Basic_0__Std_Async_EAsync_forIn_loop___redArg___lam__0___boxed), 5, 3);
lean_closure_set(v___f_3686_, 0, v_promise_3683_);
lean_closure_set(v___f_3686_, 1, v_f_3681_);
lean_closure_set(v___f_3686_, 2, v_prio_3682_);
v___x_3687_ = lean_box(0);
v___x_3688_ = lean_apply_3(v_f_3681_, v___x_3687_, v_b_3684_, lean_box(0));
if (lean_obj_tag(v___x_3688_) == 0)
{
lean_object* v_a_3689_; 
lean_dec_ref(v___f_3686_);
v_a_3689_ = lean_ctor_get(v___x_3688_, 0);
lean_inc(v_a_3689_);
lean_dec_ref_known(v___x_3688_, 1);
if (lean_obj_tag(v_a_3689_) == 0)
{
lean_object* v_a_3690_; lean_object* v___x_3692_; uint8_t v_isShared_3693_; uint8_t v_isSharedCheck_3698_; 
lean_dec(v_prio_3682_);
lean_dec_ref(v_f_3681_);
v_a_3690_ = lean_ctor_get(v_a_3689_, 0);
v_isSharedCheck_3698_ = !lean_is_exclusive(v_a_3689_);
if (v_isSharedCheck_3698_ == 0)
{
v___x_3692_ = v_a_3689_;
v_isShared_3693_ = v_isSharedCheck_3698_;
goto v_resetjp_3691_;
}
else
{
lean_inc(v_a_3690_);
lean_dec(v_a_3689_);
v___x_3692_ = lean_box(0);
v_isShared_3693_ = v_isSharedCheck_3698_;
goto v_resetjp_3691_;
}
v_resetjp_3691_:
{
lean_object* v___x_3695_; 
if (v_isShared_3693_ == 0)
{
v___x_3695_ = v___x_3692_;
goto v_reusejp_3694_;
}
else
{
lean_object* v_reuseFailAlloc_3697_; 
v_reuseFailAlloc_3697_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3697_, 0, v_a_3690_);
v___x_3695_ = v_reuseFailAlloc_3697_;
goto v_reusejp_3694_;
}
v_reusejp_3694_:
{
lean_object* v___x_3696_; 
v___x_3696_ = lean_io_promise_resolve(v___x_3695_, v_promise_3683_);
lean_dec(v_promise_3683_);
return v___x_3696_;
}
}
}
else
{
lean_object* v_a_3699_; lean_object* v___x_3701_; uint8_t v_isShared_3702_; uint8_t v_isSharedCheck_3710_; 
v_a_3699_ = lean_ctor_get(v_a_3689_, 0);
v_isSharedCheck_3710_ = !lean_is_exclusive(v_a_3689_);
if (v_isSharedCheck_3710_ == 0)
{
v___x_3701_ = v_a_3689_;
v_isShared_3702_ = v_isSharedCheck_3710_;
goto v_resetjp_3700_;
}
else
{
lean_inc(v_a_3699_);
lean_dec(v_a_3689_);
v___x_3701_ = lean_box(0);
v_isShared_3702_ = v_isSharedCheck_3710_;
goto v_resetjp_3700_;
}
v_resetjp_3700_:
{
if (lean_obj_tag(v_a_3699_) == 0)
{
lean_object* v_a_3703_; lean_object* v___x_3705_; 
lean_dec(v_prio_3682_);
lean_dec_ref(v_f_3681_);
v_a_3703_ = lean_ctor_get(v_a_3699_, 0);
lean_inc(v_a_3703_);
lean_dec_ref_known(v_a_3699_, 1);
if (v_isShared_3702_ == 0)
{
lean_ctor_set(v___x_3701_, 0, v_a_3703_);
v___x_3705_ = v___x_3701_;
goto v_reusejp_3704_;
}
else
{
lean_object* v_reuseFailAlloc_3707_; 
v_reuseFailAlloc_3707_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3707_, 0, v_a_3703_);
v___x_3705_ = v_reuseFailAlloc_3707_;
goto v_reusejp_3704_;
}
v_reusejp_3704_:
{
lean_object* v___x_3706_; 
v___x_3706_ = lean_io_promise_resolve(v___x_3705_, v_promise_3683_);
lean_dec(v_promise_3683_);
return v___x_3706_;
}
}
else
{
lean_object* v_a_3708_; 
lean_del_object(v___x_3701_);
v_a_3708_ = lean_ctor_get(v_a_3699_, 0);
lean_inc(v_a_3708_);
lean_dec_ref_known(v_a_3699_, 1);
v_b_3684_ = v_a_3708_;
goto _start;
}
}
}
}
else
{
lean_object* v_a_3711_; uint8_t v___x_3712_; lean_object* v___x_3713_; 
lean_dec(v_promise_3683_);
lean_dec_ref(v_f_3681_);
v_a_3711_ = lean_ctor_get(v___x_3688_, 0);
lean_inc_ref(v_a_3711_);
lean_dec_ref_known(v___x_3688_, 1);
v___x_3712_ = 0;
v___x_3713_ = l_BaseIO_chainTask___redArg(v_a_3711_, v___f_3686_, v_prio_3682_, v___x_3712_);
return v___x_3713_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Async_Basic_0__Std_Async_EAsync_forIn_loop___redArg___lam__0(lean_object* v_promise_3714_, lean_object* v_f_3715_, lean_object* v_prio_3716_, lean_object* v_x_3717_){
_start:
{
if (lean_obj_tag(v_x_3717_) == 0)
{
lean_object* v_a_3719_; lean_object* v___x_3721_; uint8_t v_isShared_3722_; uint8_t v_isSharedCheck_3727_; 
lean_dec(v_prio_3716_);
lean_dec_ref(v_f_3715_);
v_a_3719_ = lean_ctor_get(v_x_3717_, 0);
v_isSharedCheck_3727_ = !lean_is_exclusive(v_x_3717_);
if (v_isSharedCheck_3727_ == 0)
{
v___x_3721_ = v_x_3717_;
v_isShared_3722_ = v_isSharedCheck_3727_;
goto v_resetjp_3720_;
}
else
{
lean_inc(v_a_3719_);
lean_dec(v_x_3717_);
v___x_3721_ = lean_box(0);
v_isShared_3722_ = v_isSharedCheck_3727_;
goto v_resetjp_3720_;
}
v_resetjp_3720_:
{
lean_object* v___x_3724_; 
if (v_isShared_3722_ == 0)
{
v___x_3724_ = v___x_3721_;
goto v_reusejp_3723_;
}
else
{
lean_object* v_reuseFailAlloc_3726_; 
v_reuseFailAlloc_3726_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3726_, 0, v_a_3719_);
v___x_3724_ = v_reuseFailAlloc_3726_;
goto v_reusejp_3723_;
}
v_reusejp_3723_:
{
lean_object* v___x_3725_; 
v___x_3725_ = lean_io_promise_resolve(v___x_3724_, v_promise_3714_);
lean_dec(v_promise_3714_);
return v___x_3725_;
}
}
}
else
{
lean_object* v_a_3728_; lean_object* v___x_3730_; uint8_t v_isShared_3731_; uint8_t v_isSharedCheck_3739_; 
v_a_3728_ = lean_ctor_get(v_x_3717_, 0);
v_isSharedCheck_3739_ = !lean_is_exclusive(v_x_3717_);
if (v_isSharedCheck_3739_ == 0)
{
v___x_3730_ = v_x_3717_;
v_isShared_3731_ = v_isSharedCheck_3739_;
goto v_resetjp_3729_;
}
else
{
lean_inc(v_a_3728_);
lean_dec(v_x_3717_);
v___x_3730_ = lean_box(0);
v_isShared_3731_ = v_isSharedCheck_3739_;
goto v_resetjp_3729_;
}
v_resetjp_3729_:
{
if (lean_obj_tag(v_a_3728_) == 0)
{
lean_object* v_a_3732_; lean_object* v___x_3734_; 
lean_dec(v_prio_3716_);
lean_dec_ref(v_f_3715_);
v_a_3732_ = lean_ctor_get(v_a_3728_, 0);
lean_inc(v_a_3732_);
lean_dec_ref_known(v_a_3728_, 1);
if (v_isShared_3731_ == 0)
{
lean_ctor_set(v___x_3730_, 0, v_a_3732_);
v___x_3734_ = v___x_3730_;
goto v_reusejp_3733_;
}
else
{
lean_object* v_reuseFailAlloc_3736_; 
v_reuseFailAlloc_3736_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3736_, 0, v_a_3732_);
v___x_3734_ = v_reuseFailAlloc_3736_;
goto v_reusejp_3733_;
}
v_reusejp_3733_:
{
lean_object* v___x_3735_; 
v___x_3735_ = lean_io_promise_resolve(v___x_3734_, v_promise_3714_);
lean_dec(v_promise_3714_);
return v___x_3735_;
}
}
else
{
lean_object* v_a_3737_; lean_object* v___x_3738_; 
lean_del_object(v___x_3730_);
v_a_3737_ = lean_ctor_get(v_a_3728_, 0);
lean_inc(v_a_3737_);
lean_dec_ref_known(v_a_3728_, 1);
v___x_3738_ = l___private_Std_Async_Basic_0__Std_Async_EAsync_forIn_loop___redArg(v_f_3715_, v_prio_3716_, v_promise_3714_, v_a_3737_);
return v___x_3738_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Async_Basic_0__Std_Async_EAsync_forIn_loop___redArg___boxed(lean_object* v_f_3740_, lean_object* v_prio_3741_, lean_object* v_promise_3742_, lean_object* v_b_3743_, lean_object* v___y_3744_){
_start:
{
lean_object* v_res_3745_; 
v_res_3745_ = l___private_Std_Async_Basic_0__Std_Async_EAsync_forIn_loop___redArg(v_f_3740_, v_prio_3741_, v_promise_3742_, v_b_3743_);
return v_res_3745_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Async_Basic_0__Std_Async_EAsync_forIn_loop(lean_object* v_00_u03b5_3746_, lean_object* v_00_u03b2_3747_, lean_object* v_f_3748_, lean_object* v_prio_3749_, lean_object* v_promise_3750_, lean_object* v_b_3751_){
_start:
{
lean_object* v___x_3753_; 
v___x_3753_ = l___private_Std_Async_Basic_0__Std_Async_EAsync_forIn_loop___redArg(v_f_3748_, v_prio_3749_, v_promise_3750_, v_b_3751_);
return v___x_3753_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Async_Basic_0__Std_Async_EAsync_forIn_loop___boxed(lean_object* v_00_u03b5_3754_, lean_object* v_00_u03b2_3755_, lean_object* v_f_3756_, lean_object* v_prio_3757_, lean_object* v_promise_3758_, lean_object* v_b_3759_, lean_object* v___y_3760_){
_start:
{
lean_object* v_res_3761_; 
v_res_3761_ = l___private_Std_Async_Basic_0__Std_Async_EAsync_forIn_loop(v_00_u03b5_3754_, v_00_u03b2_3755_, v_f_3756_, v_prio_3757_, v_promise_3758_, v_b_3759_);
return v_res_3761_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_forIn___redArg___lam__0(lean_object* v_a_3762_, lean_object* v_x_3763_){
_start:
{
if (lean_obj_tag(v_x_3763_) == 0)
{
lean_object* v_a_3765_; lean_object* v___x_3767_; uint8_t v_isShared_3768_; uint8_t v_isSharedCheck_3773_; 
v_a_3765_ = lean_ctor_get(v_x_3763_, 0);
v_isSharedCheck_3773_ = !lean_is_exclusive(v_x_3763_);
if (v_isSharedCheck_3773_ == 0)
{
v___x_3767_ = v_x_3763_;
v_isShared_3768_ = v_isSharedCheck_3773_;
goto v_resetjp_3766_;
}
else
{
lean_inc(v_a_3765_);
lean_dec(v_x_3763_);
v___x_3767_ = lean_box(0);
v_isShared_3768_ = v_isSharedCheck_3773_;
goto v_resetjp_3766_;
}
v_resetjp_3766_:
{
lean_object* v___x_3770_; 
if (v_isShared_3768_ == 0)
{
v___x_3770_ = v___x_3767_;
goto v_reusejp_3769_;
}
else
{
lean_object* v_reuseFailAlloc_3772_; 
v_reuseFailAlloc_3772_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3772_, 0, v_a_3765_);
v___x_3770_ = v_reuseFailAlloc_3772_;
goto v_reusejp_3769_;
}
v_reusejp_3769_:
{
lean_object* v___x_3771_; 
v___x_3771_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3771_, 0, v___x_3770_);
return v___x_3771_;
}
}
}
else
{
lean_object* v___x_3774_; lean_object* v___x_3775_; 
lean_dec_ref_known(v_x_3763_, 1);
v___x_3774_ = l_IO_Promise_result_x21___redArg(v_a_3762_);
v___x_3775_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3775_, 0, v___x_3774_);
return v___x_3775_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_forIn___redArg___lam__0___boxed(lean_object* v_a_3776_, lean_object* v_x_3777_, lean_object* v___y_3778_){
_start:
{
lean_object* v_res_3779_; 
v_res_3779_ = l_Std_Async_EAsync_forIn___redArg___lam__0(v_a_3776_, v_x_3777_);
lean_dec(v_a_3776_);
return v_res_3779_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_forIn___redArg___lam__1(lean_object* v_f_3780_, lean_object* v_prio_3781_, lean_object* v_init_3782_, lean_object* v_x_3783_){
_start:
{
if (lean_obj_tag(v_x_3783_) == 0)
{
lean_object* v_a_3785_; lean_object* v___x_3787_; uint8_t v_isShared_3788_; uint8_t v_isSharedCheck_3793_; 
lean_dec(v_init_3782_);
lean_dec(v_prio_3781_);
lean_dec_ref(v_f_3780_);
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
lean_object* v_a_3794_; lean_object* v___x_3796_; uint8_t v_isShared_3797_; uint8_t v_isSharedCheck_3807_; 
v_a_3794_ = lean_ctor_get(v_x_3783_, 0);
v_isSharedCheck_3807_ = !lean_is_exclusive(v_x_3783_);
if (v_isSharedCheck_3807_ == 0)
{
v___x_3796_ = v_x_3783_;
v_isShared_3797_ = v_isSharedCheck_3807_;
goto v_resetjp_3795_;
}
else
{
lean_inc(v_a_3794_);
lean_dec(v_x_3783_);
v___x_3796_ = lean_box(0);
v_isShared_3797_ = v_isSharedCheck_3807_;
goto v_resetjp_3795_;
}
v_resetjp_3795_:
{
lean_object* v___f_3798_; lean_object* v___x_3799_; uint8_t v___x_3800_; lean_object* v___x_3801_; lean_object* v___x_3803_; 
lean_inc(v_a_3794_);
v___f_3798_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_forIn___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_3798_, 0, v_a_3794_);
v___x_3799_ = lean_unsigned_to_nat(0u);
v___x_3800_ = 0;
v___x_3801_ = l___private_Std_Async_Basic_0__Std_Async_EAsync_forIn_loop___redArg(v_f_3780_, v_prio_3781_, v_a_3794_, v_init_3782_);
if (v_isShared_3797_ == 0)
{
lean_ctor_set(v___x_3796_, 0, v___x_3801_);
v___x_3803_ = v___x_3796_;
goto v_reusejp_3802_;
}
else
{
lean_object* v_reuseFailAlloc_3806_; 
v_reuseFailAlloc_3806_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3806_, 0, v___x_3801_);
v___x_3803_ = v_reuseFailAlloc_3806_;
goto v_reusejp_3802_;
}
v_reusejp_3802_:
{
lean_object* v___x_3804_; lean_object* v___x_3805_; 
v___x_3804_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3804_, 0, v___x_3803_);
v___x_3805_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3799_, v___x_3800_, v___x_3804_, v___f_3798_);
return v___x_3805_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_forIn___redArg___lam__1___boxed(lean_object* v_f_3808_, lean_object* v_prio_3809_, lean_object* v_init_3810_, lean_object* v_x_3811_, lean_object* v___y_3812_){
_start:
{
lean_object* v_res_3813_; 
v_res_3813_ = l_Std_Async_EAsync_forIn___redArg___lam__1(v_f_3808_, v_prio_3809_, v_init_3810_, v_x_3811_);
return v_res_3813_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_forIn___redArg(lean_object* v_init_3814_, lean_object* v_f_3815_, lean_object* v_prio_3816_){
_start:
{
lean_object* v___f_3818_; lean_object* v___x_3819_; uint8_t v___x_3820_; lean_object* v___x_3821_; lean_object* v___x_3822_; lean_object* v___x_3823_; lean_object* v___x_3824_; 
v___f_3818_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_forIn___redArg___lam__1___boxed), 5, 3);
lean_closure_set(v___f_3818_, 0, v_f_3815_);
lean_closure_set(v___f_3818_, 1, v_prio_3816_);
lean_closure_set(v___f_3818_, 2, v_init_3814_);
v___x_3819_ = lean_unsigned_to_nat(0u);
v___x_3820_ = 0;
v___x_3821_ = lean_io_promise_new();
v___x_3822_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3822_, 0, v___x_3821_);
v___x_3823_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3823_, 0, v___x_3822_);
v___x_3824_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3819_, v___x_3820_, v___x_3823_, v___f_3818_);
return v___x_3824_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_forIn___redArg___boxed(lean_object* v_init_3825_, lean_object* v_f_3826_, lean_object* v_prio_3827_, lean_object* v___y_3828_){
_start:
{
lean_object* v_res_3829_; 
v_res_3829_ = l_Std_Async_EAsync_forIn___redArg(v_init_3825_, v_f_3826_, v_prio_3827_);
return v_res_3829_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_forIn(lean_object* v_00_u03b5_3830_, lean_object* v_00_u03b2_3831_, lean_object* v_init_3832_, lean_object* v_f_3833_, lean_object* v_prio_3834_){
_start:
{
lean_object* v___f_3836_; lean_object* v___x_3837_; uint8_t v___x_3838_; lean_object* v___x_3839_; lean_object* v___x_3840_; lean_object* v___x_3841_; lean_object* v___x_3842_; 
v___f_3836_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_forIn___redArg___lam__1___boxed), 5, 3);
lean_closure_set(v___f_3836_, 0, v_f_3833_);
lean_closure_set(v___f_3836_, 1, v_prio_3834_);
lean_closure_set(v___f_3836_, 2, v_init_3832_);
v___x_3837_ = lean_unsigned_to_nat(0u);
v___x_3838_ = 0;
v___x_3839_ = lean_io_promise_new();
v___x_3840_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3840_, 0, v___x_3839_);
v___x_3841_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3841_, 0, v___x_3840_);
v___x_3842_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3837_, v___x_3838_, v___x_3841_, v___f_3836_);
return v___x_3842_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_forIn___boxed(lean_object* v_00_u03b5_3843_, lean_object* v_00_u03b2_3844_, lean_object* v_init_3845_, lean_object* v_f_3846_, lean_object* v_prio_3847_, lean_object* v___y_3848_){
_start:
{
lean_object* v_res_3849_; 
v_res_3849_ = l_Std_Async_EAsync_forIn(v_00_u03b5_3843_, v_00_u03b2_3844_, v_init_3845_, v_f_3846_, v_prio_3847_);
return v_res_3849_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instForInLoopUnit___redArg___lam__1(lean_object* v_f_3850_, lean_object* v___x_3851_, lean_object* v_init_3852_, lean_object* v_x_3853_){
_start:
{
if (lean_obj_tag(v_x_3853_) == 0)
{
lean_object* v_a_3855_; lean_object* v___x_3857_; uint8_t v_isShared_3858_; uint8_t v_isSharedCheck_3863_; 
lean_dec(v_init_3852_);
lean_dec(v___x_3851_);
lean_dec_ref(v_f_3850_);
v_a_3855_ = lean_ctor_get(v_x_3853_, 0);
v_isSharedCheck_3863_ = !lean_is_exclusive(v_x_3853_);
if (v_isSharedCheck_3863_ == 0)
{
v___x_3857_ = v_x_3853_;
v_isShared_3858_ = v_isSharedCheck_3863_;
goto v_resetjp_3856_;
}
else
{
lean_inc(v_a_3855_);
lean_dec(v_x_3853_);
v___x_3857_ = lean_box(0);
v_isShared_3858_ = v_isSharedCheck_3863_;
goto v_resetjp_3856_;
}
v_resetjp_3856_:
{
lean_object* v___x_3860_; 
if (v_isShared_3858_ == 0)
{
v___x_3860_ = v___x_3857_;
goto v_reusejp_3859_;
}
else
{
lean_object* v_reuseFailAlloc_3862_; 
v_reuseFailAlloc_3862_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3862_, 0, v_a_3855_);
v___x_3860_ = v_reuseFailAlloc_3862_;
goto v_reusejp_3859_;
}
v_reusejp_3859_:
{
lean_object* v___x_3861_; 
v___x_3861_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3861_, 0, v___x_3860_);
return v___x_3861_;
}
}
}
else
{
lean_object* v_a_3864_; lean_object* v___x_3866_; uint8_t v_isShared_3867_; uint8_t v_isSharedCheck_3876_; 
v_a_3864_ = lean_ctor_get(v_x_3853_, 0);
v_isSharedCheck_3876_ = !lean_is_exclusive(v_x_3853_);
if (v_isSharedCheck_3876_ == 0)
{
v___x_3866_ = v_x_3853_;
v_isShared_3867_ = v_isSharedCheck_3876_;
goto v_resetjp_3865_;
}
else
{
lean_inc(v_a_3864_);
lean_dec(v_x_3853_);
v___x_3866_ = lean_box(0);
v_isShared_3867_ = v_isSharedCheck_3876_;
goto v_resetjp_3865_;
}
v_resetjp_3865_:
{
lean_object* v___f_3868_; uint8_t v___x_3869_; lean_object* v___x_3870_; lean_object* v___x_3872_; 
lean_inc(v_a_3864_);
v___f_3868_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_forIn___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_3868_, 0, v_a_3864_);
v___x_3869_ = 0;
lean_inc(v___x_3851_);
v___x_3870_ = l___private_Std_Async_Basic_0__Std_Async_EAsync_forIn_loop___redArg(v_f_3850_, v___x_3851_, v_a_3864_, v_init_3852_);
if (v_isShared_3867_ == 0)
{
lean_ctor_set(v___x_3866_, 0, v___x_3870_);
v___x_3872_ = v___x_3866_;
goto v_reusejp_3871_;
}
else
{
lean_object* v_reuseFailAlloc_3875_; 
v_reuseFailAlloc_3875_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3875_, 0, v___x_3870_);
v___x_3872_ = v_reuseFailAlloc_3875_;
goto v_reusejp_3871_;
}
v_reusejp_3871_:
{
lean_object* v___x_3873_; lean_object* v___x_3874_; 
v___x_3873_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3873_, 0, v___x_3872_);
v___x_3874_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3851_, v___x_3869_, v___x_3873_, v___f_3868_);
return v___x_3874_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instForInLoopUnit___redArg___lam__1___boxed(lean_object* v_f_3877_, lean_object* v___x_3878_, lean_object* v_init_3879_, lean_object* v_x_3880_, lean_object* v___y_3881_){
_start:
{
lean_object* v_res_3882_; 
v_res_3882_ = l_Std_Async_EAsync_instForInLoopUnit___redArg___lam__1(v_f_3877_, v___x_3878_, v_init_3879_, v_x_3880_);
return v_res_3882_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instForInLoopUnit___redArg___lam__0(lean_object* v_00_u03b2_3883_, lean_object* v_x_3884_, lean_object* v_init_3885_, lean_object* v_f_3886_){
_start:
{
lean_object* v___x_3888_; lean_object* v___f_3889_; uint8_t v___x_3890_; lean_object* v___x_3891_; lean_object* v___x_3892_; lean_object* v___x_3893_; lean_object* v___x_3894_; 
v___x_3888_ = lean_unsigned_to_nat(0u);
v___f_3889_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_instForInLoopUnit___redArg___lam__1___boxed), 5, 3);
lean_closure_set(v___f_3889_, 0, v_f_3886_);
lean_closure_set(v___f_3889_, 1, v___x_3888_);
lean_closure_set(v___f_3889_, 2, v_init_3885_);
v___x_3890_ = 0;
v___x_3891_ = lean_io_promise_new();
v___x_3892_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3892_, 0, v___x_3891_);
v___x_3893_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3893_, 0, v___x_3892_);
v___x_3894_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3888_, v___x_3890_, v___x_3893_, v___f_3889_);
return v___x_3894_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instForInLoopUnit___redArg___lam__0___boxed(lean_object* v_00_u03b2_3895_, lean_object* v_x_3896_, lean_object* v_init_3897_, lean_object* v_f_3898_, lean_object* v___y_3899_){
_start:
{
lean_object* v_res_3900_; 
v_res_3900_ = l_Std_Async_EAsync_instForInLoopUnit___redArg___lam__0(v_00_u03b2_3895_, v_x_3896_, v_init_3897_, v_f_3898_);
return v_res_3900_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instForInLoopUnit___redArg(){
_start:
{
lean_object* v___f_3903_; 
v___f_3903_ = ((lean_object*)(l_Std_Async_EAsync_instForInLoopUnit___redArg___closed__0));
return v___f_3903_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instForInLoopUnit___redArg___boxed(lean_object* v___dummy_3904_){
_start:
{
lean_object* v_res_3905_; 
v_res_3905_ = l_Std_Async_EAsync_instForInLoopUnit___redArg();
return v_res_3905_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instForInLoopUnit(lean_object* v_00_u03b5_3906_){
_start:
{
lean_object* v___f_3907_; 
v___f_3907_ = ((lean_object*)(l_Std_Async_EAsync_instForInLoopUnit___redArg___closed__0));
return v___f_3907_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_ofExcept___redArg(lean_object* v_except_3908_){
_start:
{
lean_object* v___x_3910_; 
v___x_3910_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3910_, 0, v_except_3908_);
return v___x_3910_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_ofExcept___redArg___boxed(lean_object* v_except_3911_, lean_object* v___y_3912_){
_start:
{
lean_object* v_res_3913_; 
v_res_3913_ = l_Std_Async_EAsync_ofExcept___redArg(v_except_3911_);
return v_res_3913_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_ofExcept(lean_object* v_00_u03b5_3914_, lean_object* v_00_u03b1_3915_, lean_object* v_except_3916_){
_start:
{
lean_object* v___x_3918_; 
v___x_3918_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3918_, 0, v_except_3916_);
return v___x_3918_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_ofExcept___boxed(lean_object* v_00_u03b5_3919_, lean_object* v_00_u03b1_3920_, lean_object* v_except_3921_, lean_object* v___y_3922_){
_start:
{
lean_object* v_res_3923_; 
v_res_3923_ = l_Std_Async_EAsync_ofExcept(v_00_u03b5_3919_, v_00_u03b1_3920_, v_except_3921_);
return v_res_3923_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_concurrently___redArg___lam__1(lean_object* v_a_3924_, lean_object* v_x_3925_){
_start:
{
if (lean_obj_tag(v_x_3925_) == 0)
{
lean_object* v_a_3927_; lean_object* v___x_3929_; uint8_t v_isShared_3930_; uint8_t v_isSharedCheck_3935_; 
lean_dec(v_a_3924_);
v_a_3927_ = lean_ctor_get(v_x_3925_, 0);
v_isSharedCheck_3935_ = !lean_is_exclusive(v_x_3925_);
if (v_isSharedCheck_3935_ == 0)
{
v___x_3929_ = v_x_3925_;
v_isShared_3930_ = v_isSharedCheck_3935_;
goto v_resetjp_3928_;
}
else
{
lean_inc(v_a_3927_);
lean_dec(v_x_3925_);
v___x_3929_ = lean_box(0);
v_isShared_3930_ = v_isSharedCheck_3935_;
goto v_resetjp_3928_;
}
v_resetjp_3928_:
{
lean_object* v___x_3932_; 
if (v_isShared_3930_ == 0)
{
v___x_3932_ = v___x_3929_;
goto v_reusejp_3931_;
}
else
{
lean_object* v_reuseFailAlloc_3934_; 
v_reuseFailAlloc_3934_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3934_, 0, v_a_3927_);
v___x_3932_ = v_reuseFailAlloc_3934_;
goto v_reusejp_3931_;
}
v_reusejp_3931_:
{
lean_object* v___x_3933_; 
v___x_3933_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3933_, 0, v___x_3932_);
return v___x_3933_;
}
}
}
else
{
lean_object* v_a_3936_; lean_object* v___x_3938_; uint8_t v_isShared_3939_; uint8_t v_isSharedCheck_3945_; 
v_a_3936_ = lean_ctor_get(v_x_3925_, 0);
v_isSharedCheck_3945_ = !lean_is_exclusive(v_x_3925_);
if (v_isSharedCheck_3945_ == 0)
{
v___x_3938_ = v_x_3925_;
v_isShared_3939_ = v_isSharedCheck_3945_;
goto v_resetjp_3937_;
}
else
{
lean_inc(v_a_3936_);
lean_dec(v_x_3925_);
v___x_3938_ = lean_box(0);
v_isShared_3939_ = v_isSharedCheck_3945_;
goto v_resetjp_3937_;
}
v_resetjp_3937_:
{
lean_object* v___x_3940_; lean_object* v___x_3942_; 
v___x_3940_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3940_, 0, v_a_3924_);
lean_ctor_set(v___x_3940_, 1, v_a_3936_);
if (v_isShared_3939_ == 0)
{
lean_ctor_set(v___x_3938_, 0, v___x_3940_);
v___x_3942_ = v___x_3938_;
goto v_reusejp_3941_;
}
else
{
lean_object* v_reuseFailAlloc_3944_; 
v_reuseFailAlloc_3944_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3944_, 0, v___x_3940_);
v___x_3942_ = v_reuseFailAlloc_3944_;
goto v_reusejp_3941_;
}
v_reusejp_3941_:
{
lean_object* v___x_3943_; 
v___x_3943_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3943_, 0, v___x_3942_);
return v___x_3943_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_concurrently___redArg___lam__1___boxed(lean_object* v_a_3946_, lean_object* v_x_3947_, lean_object* v___y_3948_){
_start:
{
lean_object* v_res_3949_; 
v_res_3949_ = l_Std_Async_EAsync_concurrently___redArg___lam__1(v_a_3946_, v_x_3947_);
return v_res_3949_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_concurrently___redArg___lam__0(lean_object* v_a_3950_, lean_object* v_x_3951_){
_start:
{
if (lean_obj_tag(v_x_3951_) == 0)
{
lean_object* v_a_3953_; lean_object* v___x_3955_; uint8_t v_isShared_3956_; uint8_t v_isSharedCheck_3961_; 
lean_dec_ref(v_a_3950_);
v_a_3953_ = lean_ctor_get(v_x_3951_, 0);
v_isSharedCheck_3961_ = !lean_is_exclusive(v_x_3951_);
if (v_isSharedCheck_3961_ == 0)
{
v___x_3955_ = v_x_3951_;
v_isShared_3956_ = v_isSharedCheck_3961_;
goto v_resetjp_3954_;
}
else
{
lean_inc(v_a_3953_);
lean_dec(v_x_3951_);
v___x_3955_ = lean_box(0);
v_isShared_3956_ = v_isSharedCheck_3961_;
goto v_resetjp_3954_;
}
v_resetjp_3954_:
{
lean_object* v___x_3958_; 
if (v_isShared_3956_ == 0)
{
v___x_3958_ = v___x_3955_;
goto v_reusejp_3957_;
}
else
{
lean_object* v_reuseFailAlloc_3960_; 
v_reuseFailAlloc_3960_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3960_, 0, v_a_3953_);
v___x_3958_ = v_reuseFailAlloc_3960_;
goto v_reusejp_3957_;
}
v_reusejp_3957_:
{
lean_object* v___x_3959_; 
v___x_3959_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3959_, 0, v___x_3958_);
return v___x_3959_;
}
}
}
else
{
lean_object* v_a_3962_; lean_object* v___f_3963_; lean_object* v___x_3964_; uint8_t v___x_3965_; lean_object* v___x_3966_; lean_object* v___x_3967_; 
v_a_3962_ = lean_ctor_get(v_x_3951_, 0);
lean_inc(v_a_3962_);
lean_dec_ref_known(v_x_3951_, 1);
v___f_3963_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_concurrently___redArg___lam__1___boxed), 3, 1);
lean_closure_set(v___f_3963_, 0, v_a_3962_);
v___x_3964_ = lean_unsigned_to_nat(0u);
v___x_3965_ = 0;
v___x_3966_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3966_, 0, v_a_3950_);
v___x_3967_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3964_, v___x_3965_, v___x_3966_, v___f_3963_);
return v___x_3967_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_concurrently___redArg___lam__0___boxed(lean_object* v_a_3968_, lean_object* v_x_3969_, lean_object* v___y_3970_){
_start:
{
lean_object* v_res_3971_; 
v_res_3971_ = l_Std_Async_EAsync_concurrently___redArg___lam__0(v_a_3968_, v_x_3969_);
return v_res_3971_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_concurrently___redArg___lam__2(lean_object* v_a_3972_, lean_object* v_x_3973_){
_start:
{
if (lean_obj_tag(v_x_3973_) == 0)
{
lean_object* v_a_3975_; lean_object* v___x_3977_; uint8_t v_isShared_3978_; uint8_t v_isSharedCheck_3983_; 
lean_dec_ref(v_a_3972_);
v_a_3975_ = lean_ctor_get(v_x_3973_, 0);
v_isSharedCheck_3983_ = !lean_is_exclusive(v_x_3973_);
if (v_isSharedCheck_3983_ == 0)
{
v___x_3977_ = v_x_3973_;
v_isShared_3978_ = v_isSharedCheck_3983_;
goto v_resetjp_3976_;
}
else
{
lean_inc(v_a_3975_);
lean_dec(v_x_3973_);
v___x_3977_ = lean_box(0);
v_isShared_3978_ = v_isSharedCheck_3983_;
goto v_resetjp_3976_;
}
v_resetjp_3976_:
{
lean_object* v___x_3980_; 
if (v_isShared_3978_ == 0)
{
v___x_3980_ = v___x_3977_;
goto v_reusejp_3979_;
}
else
{
lean_object* v_reuseFailAlloc_3982_; 
v_reuseFailAlloc_3982_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3982_, 0, v_a_3975_);
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
else
{
lean_object* v_a_3984_; lean_object* v___f_3985_; lean_object* v___x_3986_; uint8_t v___x_3987_; lean_object* v___x_3988_; lean_object* v___x_3989_; 
v_a_3984_ = lean_ctor_get(v_x_3973_, 0);
lean_inc(v_a_3984_);
lean_dec_ref_known(v_x_3973_, 1);
v___f_3985_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_concurrently___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_3985_, 0, v_a_3984_);
v___x_3986_ = lean_unsigned_to_nat(0u);
v___x_3987_ = 0;
v___x_3988_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3988_, 0, v_a_3972_);
v___x_3989_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3986_, v___x_3987_, v___x_3988_, v___f_3985_);
return v___x_3989_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_concurrently___redArg___lam__2___boxed(lean_object* v_a_3990_, lean_object* v_x_3991_, lean_object* v___y_3992_){
_start:
{
lean_object* v_res_3993_; 
v_res_3993_ = l_Std_Async_EAsync_concurrently___redArg___lam__2(v_a_3990_, v_x_3991_);
return v_res_3993_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_concurrently___redArg___lam__3(lean_object* v_y_3994_, lean_object* v_prio_3995_, lean_object* v___f_3996_, lean_object* v_x_3997_){
_start:
{
if (lean_obj_tag(v_x_3997_) == 0)
{
lean_object* v_a_3999_; lean_object* v___x_4001_; uint8_t v_isShared_4002_; uint8_t v_isSharedCheck_4007_; 
lean_dec_ref(v___f_3996_);
lean_dec(v_prio_3995_);
lean_dec_ref(v_y_3994_);
v_a_3999_ = lean_ctor_get(v_x_3997_, 0);
v_isSharedCheck_4007_ = !lean_is_exclusive(v_x_3997_);
if (v_isSharedCheck_4007_ == 0)
{
v___x_4001_ = v_x_3997_;
v_isShared_4002_ = v_isSharedCheck_4007_;
goto v_resetjp_4000_;
}
else
{
lean_inc(v_a_3999_);
lean_dec(v_x_3997_);
v___x_4001_ = lean_box(0);
v_isShared_4002_ = v_isSharedCheck_4007_;
goto v_resetjp_4000_;
}
v_resetjp_4000_:
{
lean_object* v___x_4004_; 
if (v_isShared_4002_ == 0)
{
v___x_4004_ = v___x_4001_;
goto v_reusejp_4003_;
}
else
{
lean_object* v_reuseFailAlloc_4006_; 
v_reuseFailAlloc_4006_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4006_, 0, v_a_3999_);
v___x_4004_ = v_reuseFailAlloc_4006_;
goto v_reusejp_4003_;
}
v_reusejp_4003_:
{
lean_object* v___x_4005_; 
v___x_4005_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4005_, 0, v___x_4004_);
return v___x_4005_;
}
}
}
else
{
lean_object* v_a_4008_; lean_object* v___x_4010_; uint8_t v_isShared_4011_; uint8_t v_isSharedCheck_4025_; 
v_a_4008_ = lean_ctor_get(v_x_3997_, 0);
v_isSharedCheck_4025_ = !lean_is_exclusive(v_x_3997_);
if (v_isSharedCheck_4025_ == 0)
{
v___x_4010_ = v_x_3997_;
v_isShared_4011_ = v_isSharedCheck_4025_;
goto v_resetjp_4009_;
}
else
{
lean_inc(v_a_4008_);
lean_dec(v_x_3997_);
v___x_4010_ = lean_box(0);
v_isShared_4011_ = v_isSharedCheck_4025_;
goto v_resetjp_4009_;
}
v_resetjp_4009_:
{
lean_object* v___f_4012_; lean_object* v___x_4013_; uint8_t v___x_4014_; lean_object* v___x_4015_; lean_object* v___x_4016_; lean_object* v___x_4017_; uint8_t v___x_4018_; lean_object* v___x_4019_; lean_object* v___x_4021_; 
v___f_4012_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_concurrently___redArg___lam__2___boxed), 3, 1);
lean_closure_set(v___f_4012_, 0, v_a_4008_);
v___x_4013_ = lean_unsigned_to_nat(0u);
v___x_4014_ = 0;
v___x_4015_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_toBaseAsync___boxed), 4, 3);
lean_closure_set(v___x_4015_, 0, lean_box(0));
lean_closure_set(v___x_4015_, 1, lean_box(0));
lean_closure_set(v___x_4015_, 2, v_y_3994_);
v___x_4016_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_toRawBaseIO___boxed), 3, 2);
lean_closure_set(v___x_4016_, 0, lean_box(0));
lean_closure_set(v___x_4016_, 1, v___x_4015_);
v___x_4017_ = lean_io_as_task(v___x_4016_, v_prio_3995_);
v___x_4018_ = 1;
v___x_4019_ = lean_task_bind(v___x_4017_, v___f_3996_, v___x_4013_, v___x_4018_);
if (v_isShared_4011_ == 0)
{
lean_ctor_set(v___x_4010_, 0, v___x_4019_);
v___x_4021_ = v___x_4010_;
goto v_reusejp_4020_;
}
else
{
lean_object* v_reuseFailAlloc_4024_; 
v_reuseFailAlloc_4024_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4024_, 0, v___x_4019_);
v___x_4021_ = v_reuseFailAlloc_4024_;
goto v_reusejp_4020_;
}
v_reusejp_4020_:
{
lean_object* v___x_4022_; lean_object* v___x_4023_; 
v___x_4022_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4022_, 0, v___x_4021_);
v___x_4023_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4013_, v___x_4014_, v___x_4022_, v___f_4012_);
return v___x_4023_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_concurrently___redArg___lam__3___boxed(lean_object* v_y_4026_, lean_object* v_prio_4027_, lean_object* v___f_4028_, lean_object* v_x_4029_, lean_object* v___y_4030_){
_start:
{
lean_object* v_res_4031_; 
v_res_4031_ = l_Std_Async_EAsync_concurrently___redArg___lam__3(v_y_4026_, v_prio_4027_, v___f_4028_, v_x_4029_);
return v_res_4031_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_concurrently___redArg(lean_object* v_x_4032_, lean_object* v_y_4033_, lean_object* v_prio_4034_){
_start:
{
lean_object* v___f_4036_; lean_object* v___f_4037_; lean_object* v___x_4038_; uint8_t v___x_4039_; lean_object* v___x_4040_; lean_object* v___x_4041_; lean_object* v___x_4042_; uint8_t v___x_4043_; lean_object* v___x_4044_; lean_object* v___x_4045_; lean_object* v___x_4046_; lean_object* v___x_4047_; 
v___f_4036_ = ((lean_object*)(l_Std_Async_EAsync_asTask___redArg___closed__0));
lean_inc(v_prio_4034_);
v___f_4037_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_concurrently___redArg___lam__3___boxed), 5, 3);
lean_closure_set(v___f_4037_, 0, v_y_4033_);
lean_closure_set(v___f_4037_, 1, v_prio_4034_);
lean_closure_set(v___f_4037_, 2, v___f_4036_);
v___x_4038_ = lean_unsigned_to_nat(0u);
v___x_4039_ = 0;
v___x_4040_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_toBaseAsync___boxed), 4, 3);
lean_closure_set(v___x_4040_, 0, lean_box(0));
lean_closure_set(v___x_4040_, 1, lean_box(0));
lean_closure_set(v___x_4040_, 2, v_x_4032_);
v___x_4041_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_toRawBaseIO___boxed), 3, 2);
lean_closure_set(v___x_4041_, 0, lean_box(0));
lean_closure_set(v___x_4041_, 1, v___x_4040_);
v___x_4042_ = lean_io_as_task(v___x_4041_, v_prio_4034_);
v___x_4043_ = 1;
v___x_4044_ = lean_task_bind(v___x_4042_, v___f_4036_, v___x_4038_, v___x_4043_);
v___x_4045_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4045_, 0, v___x_4044_);
v___x_4046_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4046_, 0, v___x_4045_);
v___x_4047_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4038_, v___x_4039_, v___x_4046_, v___f_4037_);
return v___x_4047_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_concurrently___redArg___boxed(lean_object* v_x_4048_, lean_object* v_y_4049_, lean_object* v_prio_4050_, lean_object* v___y_4051_){
_start:
{
lean_object* v_res_4052_; 
v_res_4052_ = l_Std_Async_EAsync_concurrently___redArg(v_x_4048_, v_y_4049_, v_prio_4050_);
return v_res_4052_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_concurrently(lean_object* v_00_u03b5_4053_, lean_object* v_00_u03b1_4054_, lean_object* v_00_u03b2_4055_, lean_object* v_x_4056_, lean_object* v_y_4057_, lean_object* v_prio_4058_){
_start:
{
lean_object* v___f_4060_; lean_object* v___f_4061_; lean_object* v___x_4062_; uint8_t v___x_4063_; lean_object* v___x_4064_; lean_object* v___x_4065_; lean_object* v___x_4066_; uint8_t v___x_4067_; lean_object* v___x_4068_; lean_object* v___x_4069_; lean_object* v___x_4070_; lean_object* v___x_4071_; 
v___f_4060_ = ((lean_object*)(l_Std_Async_EAsync_asTask___redArg___closed__0));
lean_inc(v_prio_4058_);
v___f_4061_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_concurrently___redArg___lam__3___boxed), 5, 3);
lean_closure_set(v___f_4061_, 0, v_y_4057_);
lean_closure_set(v___f_4061_, 1, v_prio_4058_);
lean_closure_set(v___f_4061_, 2, v___f_4060_);
v___x_4062_ = lean_unsigned_to_nat(0u);
v___x_4063_ = 0;
v___x_4064_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_toBaseAsync___boxed), 4, 3);
lean_closure_set(v___x_4064_, 0, lean_box(0));
lean_closure_set(v___x_4064_, 1, lean_box(0));
lean_closure_set(v___x_4064_, 2, v_x_4056_);
v___x_4065_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_toRawBaseIO___boxed), 3, 2);
lean_closure_set(v___x_4065_, 0, lean_box(0));
lean_closure_set(v___x_4065_, 1, v___x_4064_);
v___x_4066_ = lean_io_as_task(v___x_4065_, v_prio_4058_);
v___x_4067_ = 1;
v___x_4068_ = lean_task_bind(v___x_4066_, v___f_4060_, v___x_4062_, v___x_4067_);
v___x_4069_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4069_, 0, v___x_4068_);
v___x_4070_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4070_, 0, v___x_4069_);
v___x_4071_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4062_, v___x_4063_, v___x_4070_, v___f_4061_);
return v___x_4071_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_concurrently___boxed(lean_object* v_00_u03b5_4072_, lean_object* v_00_u03b1_4073_, lean_object* v_00_u03b2_4074_, lean_object* v_x_4075_, lean_object* v_y_4076_, lean_object* v_prio_4077_, lean_object* v___y_4078_){
_start:
{
lean_object* v_res_4079_; 
v_res_4079_ = l_Std_Async_EAsync_concurrently(v_00_u03b5_4072_, v_00_u03b1_4073_, v_00_u03b2_4074_, v_x_4075_, v_y_4076_, v_prio_4077_);
return v_res_4079_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_race___redArg___lam__1(lean_object* v_x_4080_){
_start:
{
if (lean_obj_tag(v_x_4080_) == 0)
{
lean_object* v_a_4082_; lean_object* v___x_4084_; uint8_t v_isShared_4085_; uint8_t v_isSharedCheck_4090_; 
v_a_4082_ = lean_ctor_get(v_x_4080_, 0);
v_isSharedCheck_4090_ = !lean_is_exclusive(v_x_4080_);
if (v_isSharedCheck_4090_ == 0)
{
v___x_4084_ = v_x_4080_;
v_isShared_4085_ = v_isSharedCheck_4090_;
goto v_resetjp_4083_;
}
else
{
lean_inc(v_a_4082_);
lean_dec(v_x_4080_);
v___x_4084_ = lean_box(0);
v_isShared_4085_ = v_isSharedCheck_4090_;
goto v_resetjp_4083_;
}
v_resetjp_4083_:
{
lean_object* v___x_4087_; 
if (v_isShared_4085_ == 0)
{
v___x_4087_ = v___x_4084_;
goto v_reusejp_4086_;
}
else
{
lean_object* v_reuseFailAlloc_4089_; 
v_reuseFailAlloc_4089_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4089_, 0, v_a_4082_);
v___x_4087_ = v_reuseFailAlloc_4089_;
goto v_reusejp_4086_;
}
v_reusejp_4086_:
{
lean_object* v___x_4088_; 
v___x_4088_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4088_, 0, v___x_4087_);
return v___x_4088_;
}
}
}
else
{
lean_object* v_a_4091_; lean_object* v___x_4092_; 
v_a_4091_ = lean_ctor_get(v_x_4080_, 0);
lean_inc(v_a_4091_);
lean_dec_ref_known(v_x_4080_, 1);
v___x_4092_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4092_, 0, v_a_4091_);
return v___x_4092_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_race___redArg___lam__1___boxed(lean_object* v_x_4093_, lean_object* v___y_4094_){
_start:
{
lean_object* v_res_4095_; 
v_res_4095_ = l_Std_Async_EAsync_race___redArg___lam__1(v_x_4093_);
return v_res_4095_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_race___redArg___lam__0(lean_object* v_a_4096_){
_start:
{
lean_object* v___x_4097_; 
v___x_4097_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4097_, 0, v_a_4096_);
return v___x_4097_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_race___redArg___lam__3(lean_object* v_a_4098_, lean_object* v_value_4099_){
_start:
{
lean_object* v___x_4101_; 
v___x_4101_ = lean_io_promise_resolve(v_value_4099_, v_a_4098_);
return v___x_4101_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_race___redArg___lam__3___boxed(lean_object* v_a_4102_, lean_object* v_value_4103_, lean_object* v___y_4104_){
_start:
{
lean_object* v_res_4105_; 
v_res_4105_ = l_Std_Async_EAsync_race___redArg___lam__3(v_a_4102_, v_value_4103_);
lean_dec(v_a_4102_);
return v_res_4105_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_race___redArg___lam__2(lean_object* v_a_4106_, lean_object* v___f_4107_, lean_object* v___f_4108_, lean_object* v_x_4109_){
_start:
{
if (lean_obj_tag(v_x_4109_) == 0)
{
lean_object* v_a_4111_; lean_object* v___x_4113_; uint8_t v_isShared_4114_; uint8_t v_isSharedCheck_4119_; 
lean_dec_ref(v___f_4108_);
lean_dec_ref(v___f_4107_);
v_a_4111_ = lean_ctor_get(v_x_4109_, 0);
v_isSharedCheck_4119_ = !lean_is_exclusive(v_x_4109_);
if (v_isSharedCheck_4119_ == 0)
{
v___x_4113_ = v_x_4109_;
v_isShared_4114_ = v_isSharedCheck_4119_;
goto v_resetjp_4112_;
}
else
{
lean_inc(v_a_4111_);
lean_dec(v_x_4109_);
v___x_4113_ = lean_box(0);
v_isShared_4114_ = v_isSharedCheck_4119_;
goto v_resetjp_4112_;
}
v_resetjp_4112_:
{
lean_object* v___x_4116_; 
if (v_isShared_4114_ == 0)
{
v___x_4116_ = v___x_4113_;
goto v_reusejp_4115_;
}
else
{
lean_object* v_reuseFailAlloc_4118_; 
v_reuseFailAlloc_4118_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4118_, 0, v_a_4111_);
v___x_4116_ = v_reuseFailAlloc_4118_;
goto v_reusejp_4115_;
}
v_reusejp_4115_:
{
lean_object* v___x_4117_; 
v___x_4117_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4117_, 0, v___x_4116_);
return v___x_4117_;
}
}
}
else
{
lean_object* v___x_4120_; lean_object* v___x_4121_; uint8_t v___x_4122_; lean_object* v___x_4123_; lean_object* v___x_4124_; lean_object* v___x_4125_; 
lean_dec_ref_known(v_x_4109_, 1);
v___x_4120_ = l_IO_Promise_result_x21___redArg(v_a_4106_);
v___x_4121_ = lean_unsigned_to_nat(0u);
v___x_4122_ = 0;
v___x_4123_ = lean_task_map(v___f_4107_, v___x_4120_, v___x_4121_, v___x_4122_);
v___x_4124_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4124_, 0, v___x_4123_);
v___x_4125_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4121_, v___x_4122_, v___x_4124_, v___f_4108_);
return v___x_4125_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_race___redArg___lam__2___boxed(lean_object* v_a_4126_, lean_object* v___f_4127_, lean_object* v___f_4128_, lean_object* v_x_4129_, lean_object* v___y_4130_){
_start:
{
lean_object* v_res_4131_; 
v_res_4131_ = l_Std_Async_EAsync_race___redArg___lam__2(v_a_4126_, v___f_4127_, v___f_4128_, v_x_4129_);
lean_dec(v_a_4126_);
return v_res_4131_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_race___redArg___lam__4(lean_object* v_a_4132_, lean_object* v___x_4133_, lean_object* v___x_4134_, uint8_t v___x_4135_, lean_object* v___f_4136_, lean_object* v_x_4137_){
_start:
{
if (lean_obj_tag(v_x_4137_) == 0)
{
lean_object* v_a_4139_; lean_object* v___x_4141_; uint8_t v_isShared_4142_; uint8_t v_isSharedCheck_4147_; 
lean_dec_ref(v___f_4136_);
lean_dec(v___x_4134_);
lean_dec_ref(v___x_4133_);
lean_dec_ref(v_a_4132_);
v_a_4139_ = lean_ctor_get(v_x_4137_, 0);
v_isSharedCheck_4147_ = !lean_is_exclusive(v_x_4137_);
if (v_isSharedCheck_4147_ == 0)
{
v___x_4141_ = v_x_4137_;
v_isShared_4142_ = v_isSharedCheck_4147_;
goto v_resetjp_4140_;
}
else
{
lean_inc(v_a_4139_);
lean_dec(v_x_4137_);
v___x_4141_ = lean_box(0);
v_isShared_4142_ = v_isSharedCheck_4147_;
goto v_resetjp_4140_;
}
v_resetjp_4140_:
{
lean_object* v___x_4144_; 
if (v_isShared_4142_ == 0)
{
v___x_4144_ = v___x_4141_;
goto v_reusejp_4143_;
}
else
{
lean_object* v_reuseFailAlloc_4146_; 
v_reuseFailAlloc_4146_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4146_, 0, v_a_4139_);
v___x_4144_ = v_reuseFailAlloc_4146_;
goto v_reusejp_4143_;
}
v_reusejp_4143_:
{
lean_object* v___x_4145_; 
v___x_4145_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4145_, 0, v___x_4144_);
return v___x_4145_;
}
}
}
else
{
lean_object* v___x_4149_; uint8_t v_isShared_4150_; uint8_t v_isSharedCheck_4157_; 
v_isSharedCheck_4157_ = !lean_is_exclusive(v_x_4137_);
if (v_isSharedCheck_4157_ == 0)
{
lean_object* v_unused_4158_; 
v_unused_4158_ = lean_ctor_get(v_x_4137_, 0);
lean_dec(v_unused_4158_);
v___x_4149_ = v_x_4137_;
v_isShared_4150_ = v_isSharedCheck_4157_;
goto v_resetjp_4148_;
}
else
{
lean_dec(v_x_4137_);
v___x_4149_ = lean_box(0);
v_isShared_4150_ = v_isSharedCheck_4157_;
goto v_resetjp_4148_;
}
v_resetjp_4148_:
{
lean_object* v___x_4151_; lean_object* v___x_4153_; 
lean_inc(v___x_4134_);
v___x_4151_ = l_BaseIO_chainTask___redArg(v_a_4132_, v___x_4133_, v___x_4134_, v___x_4135_);
if (v_isShared_4150_ == 0)
{
lean_ctor_set(v___x_4149_, 0, v___x_4151_);
v___x_4153_ = v___x_4149_;
goto v_reusejp_4152_;
}
else
{
lean_object* v_reuseFailAlloc_4156_; 
v_reuseFailAlloc_4156_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4156_, 0, v___x_4151_);
v___x_4153_ = v_reuseFailAlloc_4156_;
goto v_reusejp_4152_;
}
v_reusejp_4152_:
{
lean_object* v___x_4154_; lean_object* v___x_4155_; 
v___x_4154_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4154_, 0, v___x_4153_);
v___x_4155_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4134_, v___x_4135_, v___x_4154_, v___f_4136_);
return v___x_4155_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_race___redArg___lam__4___boxed(lean_object* v_a_4159_, lean_object* v___x_4160_, lean_object* v___x_4161_, lean_object* v___x_4162_, lean_object* v___f_4163_, lean_object* v_x_4164_, lean_object* v___y_4165_){
_start:
{
uint8_t v___x_1451__boxed_4166_; lean_object* v_res_4167_; 
v___x_1451__boxed_4166_ = lean_unbox(v___x_4162_);
v_res_4167_ = l_Std_Async_EAsync_race___redArg___lam__4(v_a_4159_, v___x_4160_, v___x_4161_, v___x_1451__boxed_4166_, v___f_4163_, v_x_4164_);
return v_res_4167_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_race___redArg___lam__5(lean_object* v___f_4168_, lean_object* v___f_4169_, lean_object* v___f_4170_, lean_object* v_a_4171_, lean_object* v_x_4172_){
_start:
{
if (lean_obj_tag(v_x_4172_) == 0)
{
lean_object* v_a_4174_; lean_object* v___x_4176_; uint8_t v_isShared_4177_; uint8_t v_isSharedCheck_4182_; 
lean_dec_ref(v_a_4171_);
lean_dec_ref(v___f_4170_);
lean_dec_ref(v___f_4169_);
lean_dec(v___f_4168_);
v_a_4174_ = lean_ctor_get(v_x_4172_, 0);
v_isSharedCheck_4182_ = !lean_is_exclusive(v_x_4172_);
if (v_isSharedCheck_4182_ == 0)
{
v___x_4176_ = v_x_4172_;
v_isShared_4177_ = v_isSharedCheck_4182_;
goto v_resetjp_4175_;
}
else
{
lean_inc(v_a_4174_);
lean_dec(v_x_4172_);
v___x_4176_ = lean_box(0);
v_isShared_4177_ = v_isSharedCheck_4182_;
goto v_resetjp_4175_;
}
v_resetjp_4175_:
{
lean_object* v___x_4179_; 
if (v_isShared_4177_ == 0)
{
v___x_4179_ = v___x_4176_;
goto v_reusejp_4178_;
}
else
{
lean_object* v_reuseFailAlloc_4181_; 
v_reuseFailAlloc_4181_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4181_, 0, v_a_4174_);
v___x_4179_ = v_reuseFailAlloc_4181_;
goto v_reusejp_4178_;
}
v_reusejp_4178_:
{
lean_object* v___x_4180_; 
v___x_4180_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4180_, 0, v___x_4179_);
return v___x_4180_;
}
}
}
else
{
lean_object* v_a_4183_; lean_object* v___x_4185_; uint8_t v_isShared_4186_; uint8_t v_isSharedCheck_4199_; 
v_a_4183_ = lean_ctor_get(v_x_4172_, 0);
v_isSharedCheck_4199_ = !lean_is_exclusive(v_x_4172_);
if (v_isSharedCheck_4199_ == 0)
{
v___x_4185_ = v_x_4172_;
v_isShared_4186_ = v_isSharedCheck_4199_;
goto v_resetjp_4184_;
}
else
{
lean_inc(v_a_4183_);
lean_dec(v_x_4172_);
v___x_4185_ = lean_box(0);
v_isShared_4186_ = v_isSharedCheck_4199_;
goto v_resetjp_4184_;
}
v_resetjp_4184_:
{
lean_object* v___x_4187_; lean_object* v___x_4188_; lean_object* v___x_4189_; uint8_t v___x_4190_; lean_object* v___x_4191_; lean_object* v___f_4192_; lean_object* v___x_4193_; lean_object* v___x_4195_; 
v___x_4187_ = lean_alloc_closure((void*)(l_liftM), 5, 4);
lean_closure_set(v___x_4187_, 0, lean_box(0));
lean_closure_set(v___x_4187_, 1, lean_box(0));
lean_closure_set(v___x_4187_, 2, v___f_4168_);
lean_closure_set(v___x_4187_, 3, lean_box(0));
v___x_4188_ = lean_alloc_closure((void*)(l_Function_comp), 6, 5);
lean_closure_set(v___x_4188_, 0, lean_box(0));
lean_closure_set(v___x_4188_, 1, lean_box(0));
lean_closure_set(v___x_4188_, 2, lean_box(0));
lean_closure_set(v___x_4188_, 3, v___x_4187_);
lean_closure_set(v___x_4188_, 4, v___f_4169_);
v___x_4189_ = lean_unsigned_to_nat(0u);
v___x_4190_ = 0;
v___x_4191_ = lean_box(v___x_4190_);
lean_inc_ref(v___x_4188_);
v___f_4192_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_race___redArg___lam__4___boxed), 7, 5);
lean_closure_set(v___f_4192_, 0, v_a_4183_);
lean_closure_set(v___f_4192_, 1, v___x_4188_);
lean_closure_set(v___f_4192_, 2, v___x_4189_);
lean_closure_set(v___f_4192_, 3, v___x_4191_);
lean_closure_set(v___f_4192_, 4, v___f_4170_);
v___x_4193_ = l_BaseIO_chainTask___redArg(v_a_4171_, v___x_4188_, v___x_4189_, v___x_4190_);
if (v_isShared_4186_ == 0)
{
lean_ctor_set(v___x_4185_, 0, v___x_4193_);
v___x_4195_ = v___x_4185_;
goto v_reusejp_4194_;
}
else
{
lean_object* v_reuseFailAlloc_4198_; 
v_reuseFailAlloc_4198_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4198_, 0, v___x_4193_);
v___x_4195_ = v_reuseFailAlloc_4198_;
goto v_reusejp_4194_;
}
v_reusejp_4194_:
{
lean_object* v___x_4196_; lean_object* v___x_4197_; 
v___x_4196_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4196_, 0, v___x_4195_);
v___x_4197_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4189_, v___x_4190_, v___x_4196_, v___f_4192_);
return v___x_4197_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_race___redArg___lam__5___boxed(lean_object* v___f_4200_, lean_object* v___f_4201_, lean_object* v___f_4202_, lean_object* v_a_4203_, lean_object* v_x_4204_, lean_object* v___y_4205_){
_start:
{
lean_object* v_res_4206_; 
v_res_4206_ = l_Std_Async_EAsync_race___redArg___lam__5(v___f_4200_, v___f_4201_, v___f_4202_, v_a_4203_, v_x_4204_);
return v_res_4206_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_race___redArg___lam__6(lean_object* v___f_4207_, lean_object* v___f_4208_, lean_object* v___f_4209_, lean_object* v_y_4210_, lean_object* v_prio_4211_, lean_object* v___f_4212_, lean_object* v_x_4213_){
_start:
{
if (lean_obj_tag(v_x_4213_) == 0)
{
lean_object* v_a_4215_; lean_object* v___x_4217_; uint8_t v_isShared_4218_; uint8_t v_isSharedCheck_4223_; 
lean_dec_ref(v___f_4212_);
lean_dec(v_prio_4211_);
lean_dec_ref(v_y_4210_);
lean_dec_ref(v___f_4209_);
lean_dec_ref(v___f_4208_);
lean_dec(v___f_4207_);
v_a_4215_ = lean_ctor_get(v_x_4213_, 0);
v_isSharedCheck_4223_ = !lean_is_exclusive(v_x_4213_);
if (v_isSharedCheck_4223_ == 0)
{
v___x_4217_ = v_x_4213_;
v_isShared_4218_ = v_isSharedCheck_4223_;
goto v_resetjp_4216_;
}
else
{
lean_inc(v_a_4215_);
lean_dec(v_x_4213_);
v___x_4217_ = lean_box(0);
v_isShared_4218_ = v_isSharedCheck_4223_;
goto v_resetjp_4216_;
}
v_resetjp_4216_:
{
lean_object* v___x_4220_; 
if (v_isShared_4218_ == 0)
{
v___x_4220_ = v___x_4217_;
goto v_reusejp_4219_;
}
else
{
lean_object* v_reuseFailAlloc_4222_; 
v_reuseFailAlloc_4222_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4222_, 0, v_a_4215_);
v___x_4220_ = v_reuseFailAlloc_4222_;
goto v_reusejp_4219_;
}
v_reusejp_4219_:
{
lean_object* v___x_4221_; 
v___x_4221_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4221_, 0, v___x_4220_);
return v___x_4221_;
}
}
}
else
{
lean_object* v_a_4224_; lean_object* v___x_4226_; uint8_t v_isShared_4227_; uint8_t v_isSharedCheck_4241_; 
v_a_4224_ = lean_ctor_get(v_x_4213_, 0);
v_isSharedCheck_4241_ = !lean_is_exclusive(v_x_4213_);
if (v_isSharedCheck_4241_ == 0)
{
v___x_4226_ = v_x_4213_;
v_isShared_4227_ = v_isSharedCheck_4241_;
goto v_resetjp_4225_;
}
else
{
lean_inc(v_a_4224_);
lean_dec(v_x_4213_);
v___x_4226_ = lean_box(0);
v_isShared_4227_ = v_isSharedCheck_4241_;
goto v_resetjp_4225_;
}
v_resetjp_4225_:
{
lean_object* v___f_4228_; lean_object* v___x_4229_; uint8_t v___x_4230_; lean_object* v___x_4231_; lean_object* v___x_4232_; lean_object* v___x_4233_; uint8_t v___x_4234_; lean_object* v___x_4235_; lean_object* v___x_4237_; 
v___f_4228_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_race___redArg___lam__5___boxed), 6, 4);
lean_closure_set(v___f_4228_, 0, v___f_4207_);
lean_closure_set(v___f_4228_, 1, v___f_4208_);
lean_closure_set(v___f_4228_, 2, v___f_4209_);
lean_closure_set(v___f_4228_, 3, v_a_4224_);
v___x_4229_ = lean_unsigned_to_nat(0u);
v___x_4230_ = 0;
v___x_4231_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_toBaseAsync___boxed), 4, 3);
lean_closure_set(v___x_4231_, 0, lean_box(0));
lean_closure_set(v___x_4231_, 1, lean_box(0));
lean_closure_set(v___x_4231_, 2, v_y_4210_);
v___x_4232_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_toRawBaseIO___boxed), 3, 2);
lean_closure_set(v___x_4232_, 0, lean_box(0));
lean_closure_set(v___x_4232_, 1, v___x_4231_);
v___x_4233_ = lean_io_as_task(v___x_4232_, v_prio_4211_);
v___x_4234_ = 1;
v___x_4235_ = lean_task_bind(v___x_4233_, v___f_4212_, v___x_4229_, v___x_4234_);
if (v_isShared_4227_ == 0)
{
lean_ctor_set(v___x_4226_, 0, v___x_4235_);
v___x_4237_ = v___x_4226_;
goto v_reusejp_4236_;
}
else
{
lean_object* v_reuseFailAlloc_4240_; 
v_reuseFailAlloc_4240_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4240_, 0, v___x_4235_);
v___x_4237_ = v_reuseFailAlloc_4240_;
goto v_reusejp_4236_;
}
v_reusejp_4236_:
{
lean_object* v___x_4238_; lean_object* v___x_4239_; 
v___x_4238_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4238_, 0, v___x_4237_);
v___x_4239_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4229_, v___x_4230_, v___x_4238_, v___f_4228_);
return v___x_4239_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_race___redArg___lam__6___boxed(lean_object* v___f_4242_, lean_object* v___f_4243_, lean_object* v___f_4244_, lean_object* v_y_4245_, lean_object* v_prio_4246_, lean_object* v___f_4247_, lean_object* v_x_4248_, lean_object* v___y_4249_){
_start:
{
lean_object* v_res_4250_; 
v_res_4250_ = l_Std_Async_EAsync_race___redArg___lam__6(v___f_4242_, v___f_4243_, v___f_4244_, v_y_4245_, v_prio_4246_, v___f_4247_, v_x_4248_);
return v_res_4250_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_race___redArg___lam__7(lean_object* v___f_4251_, lean_object* v___f_4252_, lean_object* v___f_4253_, lean_object* v_y_4254_, lean_object* v_prio_4255_, lean_object* v___f_4256_, lean_object* v_x_4257_, lean_object* v___f_4258_, lean_object* v_x_4259_){
_start:
{
if (lean_obj_tag(v_x_4259_) == 0)
{
lean_object* v_a_4261_; lean_object* v___x_4263_; uint8_t v_isShared_4264_; uint8_t v_isSharedCheck_4269_; 
lean_dec_ref(v___f_4258_);
lean_dec_ref(v_x_4257_);
lean_dec_ref(v___f_4256_);
lean_dec(v_prio_4255_);
lean_dec_ref(v_y_4254_);
lean_dec(v___f_4253_);
lean_dec_ref(v___f_4252_);
lean_dec_ref(v___f_4251_);
v_a_4261_ = lean_ctor_get(v_x_4259_, 0);
v_isSharedCheck_4269_ = !lean_is_exclusive(v_x_4259_);
if (v_isSharedCheck_4269_ == 0)
{
v___x_4263_ = v_x_4259_;
v_isShared_4264_ = v_isSharedCheck_4269_;
goto v_resetjp_4262_;
}
else
{
lean_inc(v_a_4261_);
lean_dec(v_x_4259_);
v___x_4263_ = lean_box(0);
v_isShared_4264_ = v_isSharedCheck_4269_;
goto v_resetjp_4262_;
}
v_resetjp_4262_:
{
lean_object* v___x_4266_; 
if (v_isShared_4264_ == 0)
{
v___x_4266_ = v___x_4263_;
goto v_reusejp_4265_;
}
else
{
lean_object* v_reuseFailAlloc_4268_; 
v_reuseFailAlloc_4268_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4268_, 0, v_a_4261_);
v___x_4266_ = v_reuseFailAlloc_4268_;
goto v_reusejp_4265_;
}
v_reusejp_4265_:
{
lean_object* v___x_4267_; 
v___x_4267_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4267_, 0, v___x_4266_);
return v___x_4267_;
}
}
}
else
{
lean_object* v_a_4270_; lean_object* v___x_4272_; uint8_t v_isShared_4273_; uint8_t v_isSharedCheck_4289_; 
v_a_4270_ = lean_ctor_get(v_x_4259_, 0);
v_isSharedCheck_4289_ = !lean_is_exclusive(v_x_4259_);
if (v_isSharedCheck_4289_ == 0)
{
v___x_4272_ = v_x_4259_;
v_isShared_4273_ = v_isSharedCheck_4289_;
goto v_resetjp_4271_;
}
else
{
lean_inc(v_a_4270_);
lean_dec(v_x_4259_);
v___x_4272_ = lean_box(0);
v_isShared_4273_ = v_isSharedCheck_4289_;
goto v_resetjp_4271_;
}
v_resetjp_4271_:
{
lean_object* v___f_4274_; lean_object* v___f_4275_; lean_object* v___f_4276_; lean_object* v___x_4277_; uint8_t v___x_4278_; lean_object* v___x_4279_; lean_object* v___x_4280_; lean_object* v___x_4281_; uint8_t v___x_4282_; lean_object* v___x_4283_; lean_object* v___x_4285_; 
lean_inc(v_a_4270_);
v___f_4274_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_race___redArg___lam__3___boxed), 3, 1);
lean_closure_set(v___f_4274_, 0, v_a_4270_);
v___f_4275_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_race___redArg___lam__2___boxed), 5, 3);
lean_closure_set(v___f_4275_, 0, v_a_4270_);
lean_closure_set(v___f_4275_, 1, v___f_4251_);
lean_closure_set(v___f_4275_, 2, v___f_4252_);
lean_inc(v_prio_4255_);
v___f_4276_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_race___redArg___lam__6___boxed), 8, 6);
lean_closure_set(v___f_4276_, 0, v___f_4253_);
lean_closure_set(v___f_4276_, 1, v___f_4274_);
lean_closure_set(v___f_4276_, 2, v___f_4275_);
lean_closure_set(v___f_4276_, 3, v_y_4254_);
lean_closure_set(v___f_4276_, 4, v_prio_4255_);
lean_closure_set(v___f_4276_, 5, v___f_4256_);
v___x_4277_ = lean_unsigned_to_nat(0u);
v___x_4278_ = 0;
v___x_4279_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_toBaseAsync___boxed), 4, 3);
lean_closure_set(v___x_4279_, 0, lean_box(0));
lean_closure_set(v___x_4279_, 1, lean_box(0));
lean_closure_set(v___x_4279_, 2, v_x_4257_);
v___x_4280_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_toRawBaseIO___boxed), 3, 2);
lean_closure_set(v___x_4280_, 0, lean_box(0));
lean_closure_set(v___x_4280_, 1, v___x_4279_);
v___x_4281_ = lean_io_as_task(v___x_4280_, v_prio_4255_);
v___x_4282_ = 1;
v___x_4283_ = lean_task_bind(v___x_4281_, v___f_4258_, v___x_4277_, v___x_4282_);
if (v_isShared_4273_ == 0)
{
lean_ctor_set(v___x_4272_, 0, v___x_4283_);
v___x_4285_ = v___x_4272_;
goto v_reusejp_4284_;
}
else
{
lean_object* v_reuseFailAlloc_4288_; 
v_reuseFailAlloc_4288_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4288_, 0, v___x_4283_);
v___x_4285_ = v_reuseFailAlloc_4288_;
goto v_reusejp_4284_;
}
v_reusejp_4284_:
{
lean_object* v___x_4286_; lean_object* v___x_4287_; 
v___x_4286_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4286_, 0, v___x_4285_);
v___x_4287_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4277_, v___x_4278_, v___x_4286_, v___f_4276_);
return v___x_4287_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_race___redArg___lam__7___boxed(lean_object* v___f_4290_, lean_object* v___f_4291_, lean_object* v___f_4292_, lean_object* v_y_4293_, lean_object* v_prio_4294_, lean_object* v___f_4295_, lean_object* v_x_4296_, lean_object* v___f_4297_, lean_object* v_x_4298_, lean_object* v___y_4299_){
_start:
{
lean_object* v_res_4300_; 
v_res_4300_ = l_Std_Async_EAsync_race___redArg___lam__7(v___f_4290_, v___f_4291_, v___f_4292_, v_y_4293_, v_prio_4294_, v___f_4295_, v_x_4296_, v___f_4297_, v_x_4298_);
return v_res_4300_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_race___redArg(lean_object* v_x_4303_, lean_object* v_y_4304_, lean_object* v_prio_4305_){
_start:
{
lean_object* v___f_4307_; lean_object* v___f_4308_; lean_object* v___f_4309_; lean_object* v___f_4310_; lean_object* v___f_4311_; lean_object* v___x_4312_; uint8_t v___x_4313_; lean_object* v___x_4314_; lean_object* v___x_4315_; lean_object* v___x_4316_; lean_object* v___x_4317_; 
v___f_4307_ = ((lean_object*)(l_Std_Async_EAsync_asTask___redArg___closed__0));
v___f_4308_ = ((lean_object*)(l_Std_Async_EAsync_race___redArg___closed__0));
v___f_4309_ = ((lean_object*)(l_Std_Async_EAsync_race___redArg___closed__1));
v___f_4310_ = ((lean_object*)(l_Std_Async_BaseAsync_race___redArg___closed__0));
v___f_4311_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_race___redArg___lam__7___boxed), 10, 8);
lean_closure_set(v___f_4311_, 0, v___f_4309_);
lean_closure_set(v___f_4311_, 1, v___f_4308_);
lean_closure_set(v___f_4311_, 2, v___f_4310_);
lean_closure_set(v___f_4311_, 3, v_y_4304_);
lean_closure_set(v___f_4311_, 4, v_prio_4305_);
lean_closure_set(v___f_4311_, 5, v___f_4307_);
lean_closure_set(v___f_4311_, 6, v_x_4303_);
lean_closure_set(v___f_4311_, 7, v___f_4307_);
v___x_4312_ = lean_unsigned_to_nat(0u);
v___x_4313_ = 0;
v___x_4314_ = lean_io_promise_new();
v___x_4315_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4315_, 0, v___x_4314_);
v___x_4316_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4316_, 0, v___x_4315_);
v___x_4317_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4312_, v___x_4313_, v___x_4316_, v___f_4311_);
return v___x_4317_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_race___redArg___boxed(lean_object* v_x_4318_, lean_object* v_y_4319_, lean_object* v_prio_4320_, lean_object* v___y_4321_){
_start:
{
lean_object* v_res_4322_; 
v_res_4322_ = l_Std_Async_EAsync_race___redArg(v_x_4318_, v_y_4319_, v_prio_4320_);
return v_res_4322_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_race(lean_object* v_00_u03b1_4323_, lean_object* v_00_u03b5_4324_, lean_object* v_inst_4325_, lean_object* v_x_4326_, lean_object* v_y_4327_, lean_object* v_prio_4328_){
_start:
{
lean_object* v___f_4330_; lean_object* v___f_4331_; lean_object* v___f_4332_; lean_object* v___f_4333_; lean_object* v___f_4334_; lean_object* v___x_4335_; uint8_t v___x_4336_; lean_object* v___x_4337_; lean_object* v___x_4338_; lean_object* v___x_4339_; lean_object* v___x_4340_; 
v___f_4330_ = ((lean_object*)(l_Std_Async_EAsync_asTask___redArg___closed__0));
v___f_4331_ = ((lean_object*)(l_Std_Async_EAsync_race___redArg___closed__0));
v___f_4332_ = ((lean_object*)(l_Std_Async_EAsync_race___redArg___closed__1));
v___f_4333_ = ((lean_object*)(l_Std_Async_BaseAsync_race___redArg___closed__0));
v___f_4334_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_race___redArg___lam__7___boxed), 10, 8);
lean_closure_set(v___f_4334_, 0, v___f_4332_);
lean_closure_set(v___f_4334_, 1, v___f_4331_);
lean_closure_set(v___f_4334_, 2, v___f_4333_);
lean_closure_set(v___f_4334_, 3, v_y_4327_);
lean_closure_set(v___f_4334_, 4, v_prio_4328_);
lean_closure_set(v___f_4334_, 5, v___f_4330_);
lean_closure_set(v___f_4334_, 6, v_x_4326_);
lean_closure_set(v___f_4334_, 7, v___f_4330_);
v___x_4335_ = lean_unsigned_to_nat(0u);
v___x_4336_ = 0;
v___x_4337_ = lean_io_promise_new();
v___x_4338_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4338_, 0, v___x_4337_);
v___x_4339_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4339_, 0, v___x_4338_);
v___x_4340_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4335_, v___x_4336_, v___x_4339_, v___f_4334_);
return v___x_4340_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_race___boxed(lean_object* v_00_u03b1_4341_, lean_object* v_00_u03b5_4342_, lean_object* v_inst_4343_, lean_object* v_x_4344_, lean_object* v_y_4345_, lean_object* v_prio_4346_, lean_object* v___y_4347_){
_start:
{
lean_object* v_res_4348_; 
v_res_4348_ = l_Std_Async_EAsync_race(v_00_u03b1_4341_, v_00_u03b5_4342_, v_inst_4343_, v_x_4344_, v_y_4345_, v_prio_4346_);
lean_dec(v_inst_4343_);
return v_res_4348_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_concurrentlyAll___redArg___lam__1(lean_object* v_prio_4349_, lean_object* v___f_4350_, lean_object* v_x_4351_){
_start:
{
lean_object* v___x_4353_; lean_object* v___x_4354_; lean_object* v___x_4355_; lean_object* v___x_4356_; uint8_t v___x_4357_; lean_object* v___x_4358_; lean_object* v___x_4359_; lean_object* v___x_4360_; 
v___x_4353_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_toBaseAsync___boxed), 4, 3);
lean_closure_set(v___x_4353_, 0, lean_box(0));
lean_closure_set(v___x_4353_, 1, lean_box(0));
lean_closure_set(v___x_4353_, 2, v_x_4351_);
v___x_4354_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_toRawBaseIO___boxed), 3, 2);
lean_closure_set(v___x_4354_, 0, lean_box(0));
lean_closure_set(v___x_4354_, 1, v___x_4353_);
v___x_4355_ = lean_io_as_task(v___x_4354_, v_prio_4349_);
v___x_4356_ = lean_unsigned_to_nat(0u);
v___x_4357_ = 1;
v___x_4358_ = lean_task_bind(v___x_4355_, v___f_4350_, v___x_4356_, v___x_4357_);
v___x_4359_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4359_, 0, v___x_4358_);
v___x_4360_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4360_, 0, v___x_4359_);
return v___x_4360_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_concurrentlyAll___redArg___lam__1___boxed(lean_object* v_prio_4361_, lean_object* v___f_4362_, lean_object* v_x_4363_, lean_object* v___y_4364_){
_start:
{
lean_object* v_res_4365_; 
v_res_4365_ = l_Std_Async_EAsync_concurrentlyAll___redArg___lam__1(v_prio_4361_, v___f_4362_, v_x_4363_);
return v_res_4365_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_concurrentlyAll___redArg___lam__0(lean_object* v___y_4366_){
_start:
{
lean_object* v___x_4368_; 
v___x_4368_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4368_, 0, v___y_4366_);
return v___x_4368_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_concurrentlyAll___redArg___lam__0___boxed(lean_object* v___y_4369_, lean_object* v___y_4370_){
_start:
{
lean_object* v_res_4371_; 
v_res_4371_ = l_Std_Async_EAsync_concurrentlyAll___redArg___lam__0(v___y_4369_);
return v_res_4371_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_concurrentlyAll___redArg___lam__2(lean_object* v___x_4372_, lean_object* v___f_4373_, lean_object* v_x_4374_){
_start:
{
if (lean_obj_tag(v_x_4374_) == 0)
{
lean_object* v_a_4376_; lean_object* v___x_4378_; uint8_t v_isShared_4379_; uint8_t v_isSharedCheck_4384_; 
lean_dec_ref(v___f_4373_);
lean_dec_ref(v___x_4372_);
v_a_4376_ = lean_ctor_get(v_x_4374_, 0);
v_isSharedCheck_4384_ = !lean_is_exclusive(v_x_4374_);
if (v_isSharedCheck_4384_ == 0)
{
v___x_4378_ = v_x_4374_;
v_isShared_4379_ = v_isSharedCheck_4384_;
goto v_resetjp_4377_;
}
else
{
lean_inc(v_a_4376_);
lean_dec(v_x_4374_);
v___x_4378_ = lean_box(0);
v_isShared_4379_ = v_isSharedCheck_4384_;
goto v_resetjp_4377_;
}
v_resetjp_4377_:
{
lean_object* v___x_4381_; 
if (v_isShared_4379_ == 0)
{
v___x_4381_ = v___x_4378_;
goto v_reusejp_4380_;
}
else
{
lean_object* v_reuseFailAlloc_4383_; 
v_reuseFailAlloc_4383_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4383_, 0, v_a_4376_);
v___x_4381_ = v_reuseFailAlloc_4383_;
goto v_reusejp_4380_;
}
v_reusejp_4380_:
{
lean_object* v___x_4382_; 
v___x_4382_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4382_, 0, v___x_4381_);
return v___x_4382_;
}
}
}
else
{
lean_object* v_a_4385_; size_t v_sz_4386_; size_t v___x_4387_; lean_object* v___x_298__overap_4388_; lean_object* v___x_4389_; 
v_a_4385_ = lean_ctor_get(v_x_4374_, 0);
lean_inc(v_a_4385_);
lean_dec_ref_known(v_x_4374_, 1);
v_sz_4386_ = lean_array_size(v_a_4385_);
v___x_4387_ = ((size_t)0ULL);
v___x_298__overap_4388_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_4372_, v___f_4373_, v_sz_4386_, v___x_4387_, v_a_4385_);
v___x_4389_ = lean_apply_1(v___x_298__overap_4388_, lean_box(0));
return v___x_4389_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_concurrentlyAll___redArg___lam__2___boxed(lean_object* v___x_4390_, lean_object* v___f_4391_, lean_object* v_x_4392_, lean_object* v___y_4393_){
_start:
{
lean_object* v_res_4394_; 
v_res_4394_ = l_Std_Async_EAsync_concurrentlyAll___redArg___lam__2(v___x_4390_, v___f_4391_, v_x_4392_);
return v_res_4394_;
}
}
static lean_object* _init_l_Std_Async_EAsync_concurrentlyAll___redArg___closed__1(void){
_start:
{
lean_object* v___f_4396_; lean_object* v___x_4397_; lean_object* v___f_4398_; 
v___f_4396_ = ((lean_object*)(l_Std_Async_EAsync_concurrentlyAll___redArg___closed__0));
v___x_4397_ = lean_obj_once(&l_Std_Async_EAsync_instMonad___closed__0, &l_Std_Async_EAsync_instMonad___closed__0_once, _init_l_Std_Async_EAsync_instMonad___closed__0);
v___f_4398_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_concurrentlyAll___redArg___lam__2___boxed), 4, 2);
lean_closure_set(v___f_4398_, 0, v___x_4397_);
lean_closure_set(v___f_4398_, 1, v___f_4396_);
return v___f_4398_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_concurrentlyAll___redArg(lean_object* v_xs_4399_, lean_object* v_prio_4400_){
_start:
{
lean_object* v___f_4402_; lean_object* v___f_4403_; lean_object* v___x_4404_; lean_object* v___f_4405_; lean_object* v___x_4406_; uint8_t v___x_4407_; size_t v_sz_4408_; size_t v___x_4409_; lean_object* v___x_221__overap_4410_; lean_object* v___x_4411_; lean_object* v___x_4412_; 
v___f_4402_ = ((lean_object*)(l_Std_Async_EAsync_asTask___redArg___closed__0));
v___f_4403_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_concurrentlyAll___redArg___lam__1___boxed), 4, 2);
lean_closure_set(v___f_4403_, 0, v_prio_4400_);
lean_closure_set(v___f_4403_, 1, v___f_4402_);
v___x_4404_ = lean_obj_once(&l_Std_Async_EAsync_instMonad___closed__0, &l_Std_Async_EAsync_instMonad___closed__0_once, _init_l_Std_Async_EAsync_instMonad___closed__0);
v___f_4405_ = lean_obj_once(&l_Std_Async_EAsync_concurrentlyAll___redArg___closed__1, &l_Std_Async_EAsync_concurrentlyAll___redArg___closed__1_once, _init_l_Std_Async_EAsync_concurrentlyAll___redArg___closed__1);
v___x_4406_ = lean_unsigned_to_nat(0u);
v___x_4407_ = 0;
v_sz_4408_ = lean_array_size(v_xs_4399_);
v___x_4409_ = ((size_t)0ULL);
v___x_221__overap_4410_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_4404_, v___f_4403_, v_sz_4408_, v___x_4409_, v_xs_4399_);
v___x_4411_ = lean_apply_1(v___x_221__overap_4410_, lean_box(0));
v___x_4412_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4406_, v___x_4407_, v___x_4411_, v___f_4405_);
return v___x_4412_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_concurrentlyAll___redArg___boxed(lean_object* v_xs_4413_, lean_object* v_prio_4414_, lean_object* v___y_4415_){
_start:
{
lean_object* v_res_4416_; 
v_res_4416_ = l_Std_Async_EAsync_concurrentlyAll___redArg(v_xs_4413_, v_prio_4414_);
return v_res_4416_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_concurrentlyAll(lean_object* v_00_u03b5_4417_, lean_object* v_00_u03b1_4418_, lean_object* v_xs_4419_, lean_object* v_prio_4420_){
_start:
{
lean_object* v___f_4422_; lean_object* v___f_4423_; lean_object* v___x_4424_; lean_object* v___f_4425_; lean_object* v___x_4426_; uint8_t v___x_4427_; size_t v_sz_4428_; size_t v___x_4429_; lean_object* v___x_263__overap_4430_; lean_object* v___x_4431_; lean_object* v___x_4432_; 
v___f_4422_ = ((lean_object*)(l_Std_Async_EAsync_asTask___redArg___closed__0));
v___f_4423_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_concurrentlyAll___redArg___lam__1___boxed), 4, 2);
lean_closure_set(v___f_4423_, 0, v_prio_4420_);
lean_closure_set(v___f_4423_, 1, v___f_4422_);
v___x_4424_ = lean_obj_once(&l_Std_Async_EAsync_instMonad___closed__0, &l_Std_Async_EAsync_instMonad___closed__0_once, _init_l_Std_Async_EAsync_instMonad___closed__0);
v___f_4425_ = lean_obj_once(&l_Std_Async_EAsync_concurrentlyAll___redArg___closed__1, &l_Std_Async_EAsync_concurrentlyAll___redArg___closed__1_once, _init_l_Std_Async_EAsync_concurrentlyAll___redArg___closed__1);
v___x_4426_ = lean_unsigned_to_nat(0u);
v___x_4427_ = 0;
v_sz_4428_ = lean_array_size(v_xs_4419_);
v___x_4429_ = ((size_t)0ULL);
v___x_263__overap_4430_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_4424_, v___f_4423_, v_sz_4428_, v___x_4429_, v_xs_4419_);
v___x_4431_ = lean_apply_1(v___x_263__overap_4430_, lean_box(0));
v___x_4432_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4426_, v___x_4427_, v___x_4431_, v___f_4425_);
return v___x_4432_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_concurrentlyAll___boxed(lean_object* v_00_u03b5_4433_, lean_object* v_00_u03b1_4434_, lean_object* v_xs_4435_, lean_object* v_prio_4436_, lean_object* v___y_4437_){
_start:
{
lean_object* v_res_4438_; 
v_res_4438_ = l_Std_Async_EAsync_concurrentlyAll(v_00_u03b5_4433_, v_00_u03b1_4434_, v_xs_4435_, v_prio_4436_);
return v_res_4438_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_raceAll___redArg___lam__4(lean_object* v___f_4439_, lean_object* v___f_4440_, lean_object* v_x_4441_){
_start:
{
if (lean_obj_tag(v_x_4441_) == 0)
{
lean_object* v_a_4443_; lean_object* v___x_4445_; uint8_t v_isShared_4446_; uint8_t v_isSharedCheck_4451_; 
lean_dec_ref(v___f_4440_);
lean_dec(v___f_4439_);
v_a_4443_ = lean_ctor_get(v_x_4441_, 0);
v_isSharedCheck_4451_ = !lean_is_exclusive(v_x_4441_);
if (v_isSharedCheck_4451_ == 0)
{
v___x_4445_ = v_x_4441_;
v_isShared_4446_ = v_isSharedCheck_4451_;
goto v_resetjp_4444_;
}
else
{
lean_inc(v_a_4443_);
lean_dec(v_x_4441_);
v___x_4445_ = lean_box(0);
v_isShared_4446_ = v_isSharedCheck_4451_;
goto v_resetjp_4444_;
}
v_resetjp_4444_:
{
lean_object* v___x_4448_; 
if (v_isShared_4446_ == 0)
{
v___x_4448_ = v___x_4445_;
goto v_reusejp_4447_;
}
else
{
lean_object* v_reuseFailAlloc_4450_; 
v_reuseFailAlloc_4450_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4450_, 0, v_a_4443_);
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
else
{
lean_object* v_a_4452_; lean_object* v___x_4454_; uint8_t v_isShared_4455_; uint8_t v_isSharedCheck_4465_; 
v_a_4452_ = lean_ctor_get(v_x_4441_, 0);
v_isSharedCheck_4465_ = !lean_is_exclusive(v_x_4441_);
if (v_isSharedCheck_4465_ == 0)
{
v___x_4454_ = v_x_4441_;
v_isShared_4455_ = v_isSharedCheck_4465_;
goto v_resetjp_4453_;
}
else
{
lean_inc(v_a_4452_);
lean_dec(v_x_4441_);
v___x_4454_ = lean_box(0);
v_isShared_4455_ = v_isSharedCheck_4465_;
goto v_resetjp_4453_;
}
v_resetjp_4453_:
{
lean_object* v___x_4456_; lean_object* v___x_4457_; lean_object* v___x_4458_; uint8_t v___x_4459_; lean_object* v___x_4460_; lean_object* v___x_4462_; 
v___x_4456_ = lean_alloc_closure((void*)(l_liftM), 5, 4);
lean_closure_set(v___x_4456_, 0, lean_box(0));
lean_closure_set(v___x_4456_, 1, lean_box(0));
lean_closure_set(v___x_4456_, 2, v___f_4439_);
lean_closure_set(v___x_4456_, 3, lean_box(0));
v___x_4457_ = lean_alloc_closure((void*)(l_Function_comp), 6, 5);
lean_closure_set(v___x_4457_, 0, lean_box(0));
lean_closure_set(v___x_4457_, 1, lean_box(0));
lean_closure_set(v___x_4457_, 2, lean_box(0));
lean_closure_set(v___x_4457_, 3, v___x_4456_);
lean_closure_set(v___x_4457_, 4, v___f_4440_);
v___x_4458_ = lean_unsigned_to_nat(0u);
v___x_4459_ = 0;
v___x_4460_ = l_BaseIO_chainTask___redArg(v_a_4452_, v___x_4457_, v___x_4458_, v___x_4459_);
if (v_isShared_4455_ == 0)
{
lean_ctor_set(v___x_4454_, 0, v___x_4460_);
v___x_4462_ = v___x_4454_;
goto v_reusejp_4461_;
}
else
{
lean_object* v_reuseFailAlloc_4464_; 
v_reuseFailAlloc_4464_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4464_, 0, v___x_4460_);
v___x_4462_ = v_reuseFailAlloc_4464_;
goto v_reusejp_4461_;
}
v_reusejp_4461_:
{
lean_object* v___x_4463_; 
v___x_4463_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4463_, 0, v___x_4462_);
return v___x_4463_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_raceAll___redArg___lam__4___boxed(lean_object* v___f_4466_, lean_object* v___f_4467_, lean_object* v_x_4468_, lean_object* v___y_4469_){
_start:
{
lean_object* v_res_4470_; 
v_res_4470_ = l_Std_Async_EAsync_raceAll___redArg___lam__4(v___f_4466_, v___f_4467_, v_x_4468_);
return v_res_4470_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_raceAll___redArg___lam__0(lean_object* v_prio_4471_, lean_object* v___f_4472_, lean_object* v___f_4473_, lean_object* v_x_4474_){
_start:
{
lean_object* v___x_4476_; uint8_t v___x_4477_; lean_object* v___x_4478_; lean_object* v___x_4479_; lean_object* v___x_4480_; uint8_t v___x_4481_; lean_object* v___x_4482_; lean_object* v___x_4483_; lean_object* v___x_4484_; lean_object* v___x_4485_; 
v___x_4476_ = lean_unsigned_to_nat(0u);
v___x_4477_ = 0;
v___x_4478_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_toBaseAsync___boxed), 4, 3);
lean_closure_set(v___x_4478_, 0, lean_box(0));
lean_closure_set(v___x_4478_, 1, lean_box(0));
lean_closure_set(v___x_4478_, 2, v_x_4474_);
v___x_4479_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_toRawBaseIO___boxed), 3, 2);
lean_closure_set(v___x_4479_, 0, lean_box(0));
lean_closure_set(v___x_4479_, 1, v___x_4478_);
v___x_4480_ = lean_io_as_task(v___x_4479_, v_prio_4471_);
v___x_4481_ = 1;
v___x_4482_ = lean_task_bind(v___x_4480_, v___f_4472_, v___x_4476_, v___x_4481_);
v___x_4483_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4483_, 0, v___x_4482_);
v___x_4484_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4484_, 0, v___x_4483_);
v___x_4485_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4476_, v___x_4477_, v___x_4484_, v___f_4473_);
return v___x_4485_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_raceAll___redArg___lam__0___boxed(lean_object* v_prio_4486_, lean_object* v___f_4487_, lean_object* v___f_4488_, lean_object* v_x_4489_, lean_object* v___y_4490_){
_start:
{
lean_object* v_res_4491_; 
v_res_4491_ = l_Std_Async_EAsync_raceAll___redArg___lam__0(v_prio_4486_, v___f_4487_, v___f_4488_, v_x_4489_);
return v_res_4491_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_raceAll___redArg___lam__2(lean_object* v___f_4492_, lean_object* v_prio_4493_, lean_object* v___f_4494_, lean_object* v___f_4495_, lean_object* v___f_4496_, lean_object* v_inst_4497_, lean_object* v_xs_4498_, lean_object* v_x_4499_){
_start:
{
if (lean_obj_tag(v_x_4499_) == 0)
{
lean_object* v_a_4501_; lean_object* v___x_4503_; uint8_t v_isShared_4504_; uint8_t v_isSharedCheck_4509_; 
lean_dec(v_xs_4498_);
lean_dec_ref(v_inst_4497_);
lean_dec_ref(v___f_4496_);
lean_dec_ref(v___f_4495_);
lean_dec_ref(v___f_4494_);
lean_dec(v_prio_4493_);
lean_dec(v___f_4492_);
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
lean_object* v_a_4510_; lean_object* v___f_4511_; lean_object* v___f_4512_; lean_object* v___f_4513_; lean_object* v___f_4514_; lean_object* v___x_4515_; uint8_t v___x_4516_; lean_object* v___x_4517_; lean_object* v___x_4518_; 
v_a_4510_ = lean_ctor_get(v_x_4499_, 0);
lean_inc_n(v_a_4510_, 2);
lean_dec_ref_known(v_x_4499_, 1);
v___f_4511_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_race___redArg___lam__3___boxed), 3, 1);
lean_closure_set(v___f_4511_, 0, v_a_4510_);
v___f_4512_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_raceAll___redArg___lam__4___boxed), 4, 2);
lean_closure_set(v___f_4512_, 0, v___f_4492_);
lean_closure_set(v___f_4512_, 1, v___f_4511_);
v___f_4513_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_raceAll___redArg___lam__0___boxed), 5, 3);
lean_closure_set(v___f_4513_, 0, v_prio_4493_);
lean_closure_set(v___f_4513_, 1, v___f_4494_);
lean_closure_set(v___f_4513_, 2, v___f_4512_);
v___f_4514_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_race___redArg___lam__2___boxed), 5, 3);
lean_closure_set(v___f_4514_, 0, v_a_4510_);
lean_closure_set(v___f_4514_, 1, v___f_4495_);
lean_closure_set(v___f_4514_, 2, v___f_4496_);
v___x_4515_ = lean_unsigned_to_nat(0u);
v___x_4516_ = 0;
v___x_4517_ = lean_apply_3(v_inst_4497_, v_xs_4498_, v___f_4513_, lean_box(0));
v___x_4518_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4515_, v___x_4516_, v___x_4517_, v___f_4514_);
return v___x_4518_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_raceAll___redArg___lam__2___boxed(lean_object* v___f_4519_, lean_object* v_prio_4520_, lean_object* v___f_4521_, lean_object* v___f_4522_, lean_object* v___f_4523_, lean_object* v_inst_4524_, lean_object* v_xs_4525_, lean_object* v_x_4526_, lean_object* v___y_4527_){
_start:
{
lean_object* v_res_4528_; 
v_res_4528_ = l_Std_Async_EAsync_raceAll___redArg___lam__2(v___f_4519_, v_prio_4520_, v___f_4521_, v___f_4522_, v___f_4523_, v_inst_4524_, v_xs_4525_, v_x_4526_);
return v_res_4528_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_raceAll___redArg(lean_object* v_inst_4529_, lean_object* v_xs_4530_, lean_object* v_prio_4531_){
_start:
{
lean_object* v___f_4533_; lean_object* v___f_4534_; lean_object* v___f_4535_; lean_object* v___f_4536_; lean_object* v___f_4537_; lean_object* v___x_4538_; uint8_t v___x_4539_; lean_object* v___x_4540_; lean_object* v___x_4541_; lean_object* v___x_4542_; lean_object* v___x_4543_; 
v___f_4533_ = ((lean_object*)(l_Std_Async_EAsync_race___redArg___closed__1));
v___f_4534_ = ((lean_object*)(l_Std_Async_EAsync_race___redArg___closed__0));
v___f_4535_ = ((lean_object*)(l_Std_Async_EAsync_asTask___redArg___closed__0));
v___f_4536_ = ((lean_object*)(l_Std_Async_BaseAsync_race___redArg___closed__0));
v___f_4537_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_raceAll___redArg___lam__2___boxed), 9, 7);
lean_closure_set(v___f_4537_, 0, v___f_4536_);
lean_closure_set(v___f_4537_, 1, v_prio_4531_);
lean_closure_set(v___f_4537_, 2, v___f_4535_);
lean_closure_set(v___f_4537_, 3, v___f_4533_);
lean_closure_set(v___f_4537_, 4, v___f_4534_);
lean_closure_set(v___f_4537_, 5, v_inst_4529_);
lean_closure_set(v___f_4537_, 6, v_xs_4530_);
v___x_4538_ = lean_unsigned_to_nat(0u);
v___x_4539_ = 0;
v___x_4540_ = lean_io_promise_new();
v___x_4541_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4541_, 0, v___x_4540_);
v___x_4542_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4542_, 0, v___x_4541_);
v___x_4543_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4538_, v___x_4539_, v___x_4542_, v___f_4537_);
return v___x_4543_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_raceAll___redArg___boxed(lean_object* v_inst_4544_, lean_object* v_xs_4545_, lean_object* v_prio_4546_, lean_object* v___y_4547_){
_start:
{
lean_object* v_res_4548_; 
v_res_4548_ = l_Std_Async_EAsync_raceAll___redArg(v_inst_4544_, v_xs_4545_, v_prio_4546_);
return v_res_4548_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_raceAll(lean_object* v_00_u03b1_4549_, lean_object* v_00_u03b5_4550_, lean_object* v_c_4551_, lean_object* v_inst_4552_, lean_object* v_inst_4553_, lean_object* v_xs_4554_, lean_object* v_prio_4555_){
_start:
{
lean_object* v___f_4557_; lean_object* v___f_4558_; lean_object* v___f_4559_; lean_object* v___f_4560_; lean_object* v___f_4561_; lean_object* v___x_4562_; uint8_t v___x_4563_; lean_object* v___x_4564_; lean_object* v___x_4565_; lean_object* v___x_4566_; lean_object* v___x_4567_; 
v___f_4557_ = ((lean_object*)(l_Std_Async_EAsync_race___redArg___closed__1));
v___f_4558_ = ((lean_object*)(l_Std_Async_EAsync_race___redArg___closed__0));
v___f_4559_ = ((lean_object*)(l_Std_Async_EAsync_asTask___redArg___closed__0));
v___f_4560_ = ((lean_object*)(l_Std_Async_BaseAsync_race___redArg___closed__0));
v___f_4561_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_raceAll___redArg___lam__2___boxed), 9, 7);
lean_closure_set(v___f_4561_, 0, v___f_4560_);
lean_closure_set(v___f_4561_, 1, v_prio_4555_);
lean_closure_set(v___f_4561_, 2, v___f_4559_);
lean_closure_set(v___f_4561_, 3, v___f_4557_);
lean_closure_set(v___f_4561_, 4, v___f_4558_);
lean_closure_set(v___f_4561_, 5, v_inst_4553_);
lean_closure_set(v___f_4561_, 6, v_xs_4554_);
v___x_4562_ = lean_unsigned_to_nat(0u);
v___x_4563_ = 0;
v___x_4564_ = lean_io_promise_new();
v___x_4565_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4565_, 0, v___x_4564_);
v___x_4566_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4566_, 0, v___x_4565_);
v___x_4567_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4562_, v___x_4563_, v___x_4566_, v___f_4561_);
return v___x_4567_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_raceAll___boxed(lean_object* v_00_u03b1_4568_, lean_object* v_00_u03b5_4569_, lean_object* v_c_4570_, lean_object* v_inst_4571_, lean_object* v_inst_4572_, lean_object* v_xs_4573_, lean_object* v_prio_4574_, lean_object* v___y_4575_){
_start:
{
lean_object* v_res_4576_; 
v_res_4576_ = l_Std_Async_EAsync_raceAll(v_00_u03b1_4568_, v_00_u03b5_4569_, v_c_4570_, v_inst_4571_, v_inst_4572_, v_xs_4573_, v_prio_4574_);
lean_dec(v_inst_4571_);
return v_res_4576_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_toIO___redArg(lean_object* v_x_4577_){
_start:
{
lean_object* v___x_4579_; 
v___x_4579_ = lean_apply_1(v_x_4577_, lean_box(0));
if (lean_obj_tag(v___x_4579_) == 0)
{
lean_object* v_a_4580_; lean_object* v___x_4582_; uint8_t v_isShared_4583_; uint8_t v_isSharedCheck_4588_; 
v_a_4580_ = lean_ctor_get(v___x_4579_, 0);
v_isSharedCheck_4588_ = !lean_is_exclusive(v___x_4579_);
if (v_isSharedCheck_4588_ == 0)
{
v___x_4582_ = v___x_4579_;
v_isShared_4583_ = v_isSharedCheck_4588_;
goto v_resetjp_4581_;
}
else
{
lean_inc(v_a_4580_);
lean_dec(v___x_4579_);
v___x_4582_ = lean_box(0);
v_isShared_4583_ = v_isSharedCheck_4588_;
goto v_resetjp_4581_;
}
v_resetjp_4581_:
{
lean_object* v___x_4584_; lean_object* v___x_4586_; 
v___x_4584_ = lean_task_pure(v_a_4580_);
if (v_isShared_4583_ == 0)
{
lean_ctor_set(v___x_4582_, 0, v___x_4584_);
v___x_4586_ = v___x_4582_;
goto v_reusejp_4585_;
}
else
{
lean_object* v_reuseFailAlloc_4587_; 
v_reuseFailAlloc_4587_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4587_, 0, v___x_4584_);
v___x_4586_ = v_reuseFailAlloc_4587_;
goto v_reusejp_4585_;
}
v_reusejp_4585_:
{
return v___x_4586_;
}
}
}
else
{
lean_object* v_a_4589_; lean_object* v___x_4591_; uint8_t v_isShared_4592_; uint8_t v_isSharedCheck_4596_; 
v_a_4589_ = lean_ctor_get(v___x_4579_, 0);
v_isSharedCheck_4596_ = !lean_is_exclusive(v___x_4579_);
if (v_isSharedCheck_4596_ == 0)
{
v___x_4591_ = v___x_4579_;
v_isShared_4592_ = v_isSharedCheck_4596_;
goto v_resetjp_4590_;
}
else
{
lean_inc(v_a_4589_);
lean_dec(v___x_4579_);
v___x_4591_ = lean_box(0);
v_isShared_4592_ = v_isSharedCheck_4596_;
goto v_resetjp_4590_;
}
v_resetjp_4590_:
{
lean_object* v___x_4594_; 
if (v_isShared_4592_ == 0)
{
lean_ctor_set_tag(v___x_4591_, 0);
v___x_4594_ = v___x_4591_;
goto v_reusejp_4593_;
}
else
{
lean_object* v_reuseFailAlloc_4595_; 
v_reuseFailAlloc_4595_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4595_, 0, v_a_4589_);
v___x_4594_ = v_reuseFailAlloc_4595_;
goto v_reusejp_4593_;
}
v_reusejp_4593_:
{
return v___x_4594_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_toIO___redArg___boxed(lean_object* v_x_4597_, lean_object* v___y_4598_){
_start:
{
lean_object* v_res_4599_; 
v_res_4599_ = l_Std_Async_Async_toIO___redArg(v_x_4597_);
return v_res_4599_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_toIO(lean_object* v_00_u03b1_4600_, lean_object* v_x_4601_){
_start:
{
lean_object* v___x_4603_; 
v___x_4603_ = lean_apply_1(v_x_4601_, lean_box(0));
if (lean_obj_tag(v___x_4603_) == 0)
{
lean_object* v_a_4604_; lean_object* v___x_4606_; uint8_t v_isShared_4607_; uint8_t v_isSharedCheck_4612_; 
v_a_4604_ = lean_ctor_get(v___x_4603_, 0);
v_isSharedCheck_4612_ = !lean_is_exclusive(v___x_4603_);
if (v_isSharedCheck_4612_ == 0)
{
v___x_4606_ = v___x_4603_;
v_isShared_4607_ = v_isSharedCheck_4612_;
goto v_resetjp_4605_;
}
else
{
lean_inc(v_a_4604_);
lean_dec(v___x_4603_);
v___x_4606_ = lean_box(0);
v_isShared_4607_ = v_isSharedCheck_4612_;
goto v_resetjp_4605_;
}
v_resetjp_4605_:
{
lean_object* v___x_4608_; lean_object* v___x_4610_; 
v___x_4608_ = lean_task_pure(v_a_4604_);
if (v_isShared_4607_ == 0)
{
lean_ctor_set(v___x_4606_, 0, v___x_4608_);
v___x_4610_ = v___x_4606_;
goto v_reusejp_4609_;
}
else
{
lean_object* v_reuseFailAlloc_4611_; 
v_reuseFailAlloc_4611_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4611_, 0, v___x_4608_);
v___x_4610_ = v_reuseFailAlloc_4611_;
goto v_reusejp_4609_;
}
v_reusejp_4609_:
{
return v___x_4610_;
}
}
}
else
{
lean_object* v_a_4613_; lean_object* v___x_4615_; uint8_t v_isShared_4616_; uint8_t v_isSharedCheck_4620_; 
v_a_4613_ = lean_ctor_get(v___x_4603_, 0);
v_isSharedCheck_4620_ = !lean_is_exclusive(v___x_4603_);
if (v_isSharedCheck_4620_ == 0)
{
v___x_4615_ = v___x_4603_;
v_isShared_4616_ = v_isSharedCheck_4620_;
goto v_resetjp_4614_;
}
else
{
lean_inc(v_a_4613_);
lean_dec(v___x_4603_);
v___x_4615_ = lean_box(0);
v_isShared_4616_ = v_isSharedCheck_4620_;
goto v_resetjp_4614_;
}
v_resetjp_4614_:
{
lean_object* v___x_4618_; 
if (v_isShared_4616_ == 0)
{
lean_ctor_set_tag(v___x_4615_, 0);
v___x_4618_ = v___x_4615_;
goto v_reusejp_4617_;
}
else
{
lean_object* v_reuseFailAlloc_4619_; 
v_reuseFailAlloc_4619_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4619_, 0, v_a_4613_);
v___x_4618_ = v_reuseFailAlloc_4619_;
goto v_reusejp_4617_;
}
v_reusejp_4617_:
{
return v___x_4618_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_toIO___boxed(lean_object* v_00_u03b1_4621_, lean_object* v_x_4622_, lean_object* v___y_4623_){
_start:
{
lean_object* v_res_4624_; 
v_res_4624_ = l_Std_Async_Async_toIO(v_00_u03b1_4621_, v_x_4622_);
return v_res_4624_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_block___redArg(lean_object* v_x_4625_, lean_object* v_prio_4626_){
_start:
{
lean_object* v___f_4628_; lean_object* v___x_4629_; lean_object* v___x_4630_; lean_object* v___x_4631_; lean_object* v___x_4632_; uint8_t v___x_4633_; lean_object* v___x_4634_; lean_object* v___x_4635_; 
v___f_4628_ = ((lean_object*)(l_Std_Async_EAsync_instMonadAsyncAsyncTaskError___closed__0));
v___x_4629_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_toBaseAsync___boxed), 4, 3);
lean_closure_set(v___x_4629_, 0, lean_box(0));
lean_closure_set(v___x_4629_, 1, lean_box(0));
lean_closure_set(v___x_4629_, 2, v_x_4625_);
v___x_4630_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_toRawBaseIO___boxed), 3, 2);
lean_closure_set(v___x_4630_, 0, lean_box(0));
lean_closure_set(v___x_4630_, 1, v___x_4629_);
v___x_4631_ = lean_io_as_task(v___x_4630_, v_prio_4626_);
v___x_4632_ = lean_unsigned_to_nat(0u);
v___x_4633_ = 1;
v___x_4634_ = lean_task_bind(v___x_4631_, v___f_4628_, v___x_4632_, v___x_4633_);
v___x_4635_ = lean_task_get_own(v___x_4634_);
if (lean_obj_tag(v___x_4635_) == 0)
{
lean_object* v_a_4636_; lean_object* v___x_4638_; uint8_t v_isShared_4639_; uint8_t v_isSharedCheck_4643_; 
v_a_4636_ = lean_ctor_get(v___x_4635_, 0);
v_isSharedCheck_4643_ = !lean_is_exclusive(v___x_4635_);
if (v_isSharedCheck_4643_ == 0)
{
v___x_4638_ = v___x_4635_;
v_isShared_4639_ = v_isSharedCheck_4643_;
goto v_resetjp_4637_;
}
else
{
lean_inc(v_a_4636_);
lean_dec(v___x_4635_);
v___x_4638_ = lean_box(0);
v_isShared_4639_ = v_isSharedCheck_4643_;
goto v_resetjp_4637_;
}
v_resetjp_4637_:
{
lean_object* v___x_4641_; 
if (v_isShared_4639_ == 0)
{
lean_ctor_set_tag(v___x_4638_, 1);
v___x_4641_ = v___x_4638_;
goto v_reusejp_4640_;
}
else
{
lean_object* v_reuseFailAlloc_4642_; 
v_reuseFailAlloc_4642_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4642_, 0, v_a_4636_);
v___x_4641_ = v_reuseFailAlloc_4642_;
goto v_reusejp_4640_;
}
v_reusejp_4640_:
{
return v___x_4641_;
}
}
}
else
{
lean_object* v_a_4644_; lean_object* v___x_4646_; uint8_t v_isShared_4647_; uint8_t v_isSharedCheck_4651_; 
v_a_4644_ = lean_ctor_get(v___x_4635_, 0);
v_isSharedCheck_4651_ = !lean_is_exclusive(v___x_4635_);
if (v_isSharedCheck_4651_ == 0)
{
v___x_4646_ = v___x_4635_;
v_isShared_4647_ = v_isSharedCheck_4651_;
goto v_resetjp_4645_;
}
else
{
lean_inc(v_a_4644_);
lean_dec(v___x_4635_);
v___x_4646_ = lean_box(0);
v_isShared_4647_ = v_isSharedCheck_4651_;
goto v_resetjp_4645_;
}
v_resetjp_4645_:
{
lean_object* v___x_4649_; 
if (v_isShared_4647_ == 0)
{
lean_ctor_set_tag(v___x_4646_, 0);
v___x_4649_ = v___x_4646_;
goto v_reusejp_4648_;
}
else
{
lean_object* v_reuseFailAlloc_4650_; 
v_reuseFailAlloc_4650_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4650_, 0, v_a_4644_);
v___x_4649_ = v_reuseFailAlloc_4650_;
goto v_reusejp_4648_;
}
v_reusejp_4648_:
{
return v___x_4649_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_block___redArg___boxed(lean_object* v_x_4652_, lean_object* v_prio_4653_, lean_object* v___y_4654_){
_start:
{
lean_object* v_res_4655_; 
v_res_4655_ = l_Std_Async_Async_block___redArg(v_x_4652_, v_prio_4653_);
return v_res_4655_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_block(lean_object* v_00_u03b1_4656_, lean_object* v_x_4657_, lean_object* v_prio_4658_){
_start:
{
lean_object* v___f_4660_; lean_object* v___x_4661_; lean_object* v___x_4662_; lean_object* v___x_4663_; lean_object* v___x_4664_; uint8_t v___x_4665_; lean_object* v___x_4666_; lean_object* v___x_4667_; 
v___f_4660_ = ((lean_object*)(l_Std_Async_EAsync_instMonadAsyncAsyncTaskError___closed__0));
v___x_4661_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_toBaseAsync___boxed), 4, 3);
lean_closure_set(v___x_4661_, 0, lean_box(0));
lean_closure_set(v___x_4661_, 1, lean_box(0));
lean_closure_set(v___x_4661_, 2, v_x_4657_);
v___x_4662_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_toRawBaseIO___boxed), 3, 2);
lean_closure_set(v___x_4662_, 0, lean_box(0));
lean_closure_set(v___x_4662_, 1, v___x_4661_);
v___x_4663_ = lean_io_as_task(v___x_4662_, v_prio_4658_);
v___x_4664_ = lean_unsigned_to_nat(0u);
v___x_4665_ = 1;
v___x_4666_ = lean_task_bind(v___x_4663_, v___f_4660_, v___x_4664_, v___x_4665_);
v___x_4667_ = lean_task_get_own(v___x_4666_);
if (lean_obj_tag(v___x_4667_) == 0)
{
lean_object* v_a_4668_; lean_object* v___x_4670_; uint8_t v_isShared_4671_; uint8_t v_isSharedCheck_4675_; 
v_a_4668_ = lean_ctor_get(v___x_4667_, 0);
v_isSharedCheck_4675_ = !lean_is_exclusive(v___x_4667_);
if (v_isSharedCheck_4675_ == 0)
{
v___x_4670_ = v___x_4667_;
v_isShared_4671_ = v_isSharedCheck_4675_;
goto v_resetjp_4669_;
}
else
{
lean_inc(v_a_4668_);
lean_dec(v___x_4667_);
v___x_4670_ = lean_box(0);
v_isShared_4671_ = v_isSharedCheck_4675_;
goto v_resetjp_4669_;
}
v_resetjp_4669_:
{
lean_object* v___x_4673_; 
if (v_isShared_4671_ == 0)
{
lean_ctor_set_tag(v___x_4670_, 1);
v___x_4673_ = v___x_4670_;
goto v_reusejp_4672_;
}
else
{
lean_object* v_reuseFailAlloc_4674_; 
v_reuseFailAlloc_4674_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4674_, 0, v_a_4668_);
v___x_4673_ = v_reuseFailAlloc_4674_;
goto v_reusejp_4672_;
}
v_reusejp_4672_:
{
return v___x_4673_;
}
}
}
else
{
lean_object* v_a_4676_; lean_object* v___x_4678_; uint8_t v_isShared_4679_; uint8_t v_isSharedCheck_4683_; 
v_a_4676_ = lean_ctor_get(v___x_4667_, 0);
v_isSharedCheck_4683_ = !lean_is_exclusive(v___x_4667_);
if (v_isSharedCheck_4683_ == 0)
{
v___x_4678_ = v___x_4667_;
v_isShared_4679_ = v_isSharedCheck_4683_;
goto v_resetjp_4677_;
}
else
{
lean_inc(v_a_4676_);
lean_dec(v___x_4667_);
v___x_4678_ = lean_box(0);
v_isShared_4679_ = v_isSharedCheck_4683_;
goto v_resetjp_4677_;
}
v_resetjp_4677_:
{
lean_object* v___x_4681_; 
if (v_isShared_4679_ == 0)
{
lean_ctor_set_tag(v___x_4678_, 0);
v___x_4681_ = v___x_4678_;
goto v_reusejp_4680_;
}
else
{
lean_object* v_reuseFailAlloc_4682_; 
v_reuseFailAlloc_4682_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4682_, 0, v_a_4676_);
v___x_4681_ = v_reuseFailAlloc_4682_;
goto v_reusejp_4680_;
}
v_reusejp_4680_:
{
return v___x_4681_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_block___boxed(lean_object* v_00_u03b1_4684_, lean_object* v_x_4685_, lean_object* v_prio_4686_, lean_object* v___y_4687_){
_start:
{
lean_object* v_res_4688_; 
v_res_4688_ = l_Std_Async_Async_block(v_00_u03b1_4684_, v_x_4685_, v_prio_4686_);
return v_res_4688_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_ofPromise___redArg(lean_object* v_task_4689_, lean_object* v_error_4690_){
_start:
{
lean_object* v___f_4692_; lean_object* v___x_4693_; 
v___f_4692_ = lean_alloc_closure((void*)(l_Std_Async_AsyncTask_ofPromise___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_4692_, 0, v_error_4690_);
v___x_4693_ = lean_apply_1(v_task_4689_, lean_box(0));
if (lean_obj_tag(v___x_4693_) == 0)
{
lean_object* v_a_4694_; lean_object* v___x_4696_; uint8_t v_isShared_4697_; uint8_t v_isSharedCheck_4705_; 
v_a_4694_ = lean_ctor_get(v___x_4693_, 0);
v_isSharedCheck_4705_ = !lean_is_exclusive(v___x_4693_);
if (v_isSharedCheck_4705_ == 0)
{
v___x_4696_ = v___x_4693_;
v_isShared_4697_ = v_isSharedCheck_4705_;
goto v_resetjp_4695_;
}
else
{
lean_inc(v_a_4694_);
lean_dec(v___x_4693_);
v___x_4696_ = lean_box(0);
v_isShared_4697_ = v_isSharedCheck_4705_;
goto v_resetjp_4695_;
}
v_resetjp_4695_:
{
lean_object* v___x_4698_; lean_object* v___x_4699_; uint8_t v___x_4700_; lean_object* v___x_4701_; lean_object* v___x_4703_; 
v___x_4698_ = lean_io_promise_result_opt(v_a_4694_);
lean_dec(v_a_4694_);
v___x_4699_ = lean_unsigned_to_nat(0u);
v___x_4700_ = 0;
v___x_4701_ = lean_task_map(v___f_4692_, v___x_4698_, v___x_4699_, v___x_4700_);
if (v_isShared_4697_ == 0)
{
lean_ctor_set_tag(v___x_4696_, 1);
lean_ctor_set(v___x_4696_, 0, v___x_4701_);
v___x_4703_ = v___x_4696_;
goto v_reusejp_4702_;
}
else
{
lean_object* v_reuseFailAlloc_4704_; 
v_reuseFailAlloc_4704_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4704_, 0, v___x_4701_);
v___x_4703_ = v_reuseFailAlloc_4704_;
goto v_reusejp_4702_;
}
v_reusejp_4702_:
{
return v___x_4703_;
}
}
}
else
{
lean_object* v_a_4706_; lean_object* v___x_4708_; uint8_t v_isShared_4709_; uint8_t v_isSharedCheck_4714_; 
lean_dec_ref(v___f_4692_);
v_a_4706_ = lean_ctor_get(v___x_4693_, 0);
v_isSharedCheck_4714_ = !lean_is_exclusive(v___x_4693_);
if (v_isSharedCheck_4714_ == 0)
{
v___x_4708_ = v___x_4693_;
v_isShared_4709_ = v_isSharedCheck_4714_;
goto v_resetjp_4707_;
}
else
{
lean_inc(v_a_4706_);
lean_dec(v___x_4693_);
v___x_4708_ = lean_box(0);
v_isShared_4709_ = v_isSharedCheck_4714_;
goto v_resetjp_4707_;
}
v_resetjp_4707_:
{
lean_object* v___x_4711_; 
if (v_isShared_4709_ == 0)
{
lean_ctor_set_tag(v___x_4708_, 0);
v___x_4711_ = v___x_4708_;
goto v_reusejp_4710_;
}
else
{
lean_object* v_reuseFailAlloc_4713_; 
v_reuseFailAlloc_4713_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4713_, 0, v_a_4706_);
v___x_4711_ = v_reuseFailAlloc_4713_;
goto v_reusejp_4710_;
}
v_reusejp_4710_:
{
lean_object* v___x_4712_; 
v___x_4712_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4712_, 0, v___x_4711_);
return v___x_4712_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_ofPromise___redArg___boxed(lean_object* v_task_4715_, lean_object* v_error_4716_, lean_object* v___y_4717_){
_start:
{
lean_object* v_res_4718_; 
v_res_4718_ = l_Std_Async_Async_ofPromise___redArg(v_task_4715_, v_error_4716_);
return v_res_4718_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_ofPromise(lean_object* v_00_u03b1_4719_, lean_object* v_task_4720_, lean_object* v_error_4721_){
_start:
{
lean_object* v___f_4723_; lean_object* v___x_4724_; 
v___f_4723_ = lean_alloc_closure((void*)(l_Std_Async_AsyncTask_ofPromise___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_4723_, 0, v_error_4721_);
v___x_4724_ = lean_apply_1(v_task_4720_, lean_box(0));
if (lean_obj_tag(v___x_4724_) == 0)
{
lean_object* v_a_4725_; lean_object* v___x_4727_; uint8_t v_isShared_4728_; uint8_t v_isSharedCheck_4736_; 
v_a_4725_ = lean_ctor_get(v___x_4724_, 0);
v_isSharedCheck_4736_ = !lean_is_exclusive(v___x_4724_);
if (v_isSharedCheck_4736_ == 0)
{
v___x_4727_ = v___x_4724_;
v_isShared_4728_ = v_isSharedCheck_4736_;
goto v_resetjp_4726_;
}
else
{
lean_inc(v_a_4725_);
lean_dec(v___x_4724_);
v___x_4727_ = lean_box(0);
v_isShared_4728_ = v_isSharedCheck_4736_;
goto v_resetjp_4726_;
}
v_resetjp_4726_:
{
lean_object* v___x_4729_; lean_object* v___x_4730_; uint8_t v___x_4731_; lean_object* v___x_4732_; lean_object* v___x_4734_; 
v___x_4729_ = lean_io_promise_result_opt(v_a_4725_);
lean_dec(v_a_4725_);
v___x_4730_ = lean_unsigned_to_nat(0u);
v___x_4731_ = 0;
v___x_4732_ = lean_task_map(v___f_4723_, v___x_4729_, v___x_4730_, v___x_4731_);
if (v_isShared_4728_ == 0)
{
lean_ctor_set_tag(v___x_4727_, 1);
lean_ctor_set(v___x_4727_, 0, v___x_4732_);
v___x_4734_ = v___x_4727_;
goto v_reusejp_4733_;
}
else
{
lean_object* v_reuseFailAlloc_4735_; 
v_reuseFailAlloc_4735_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4735_, 0, v___x_4732_);
v___x_4734_ = v_reuseFailAlloc_4735_;
goto v_reusejp_4733_;
}
v_reusejp_4733_:
{
return v___x_4734_;
}
}
}
else
{
lean_object* v_a_4737_; lean_object* v___x_4739_; uint8_t v_isShared_4740_; uint8_t v_isSharedCheck_4745_; 
lean_dec_ref(v___f_4723_);
v_a_4737_ = lean_ctor_get(v___x_4724_, 0);
v_isSharedCheck_4745_ = !lean_is_exclusive(v___x_4724_);
if (v_isSharedCheck_4745_ == 0)
{
v___x_4739_ = v___x_4724_;
v_isShared_4740_ = v_isSharedCheck_4745_;
goto v_resetjp_4738_;
}
else
{
lean_inc(v_a_4737_);
lean_dec(v___x_4724_);
v___x_4739_ = lean_box(0);
v_isShared_4740_ = v_isSharedCheck_4745_;
goto v_resetjp_4738_;
}
v_resetjp_4738_:
{
lean_object* v___x_4742_; 
if (v_isShared_4740_ == 0)
{
lean_ctor_set_tag(v___x_4739_, 0);
v___x_4742_ = v___x_4739_;
goto v_reusejp_4741_;
}
else
{
lean_object* v_reuseFailAlloc_4744_; 
v_reuseFailAlloc_4744_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4744_, 0, v_a_4737_);
v___x_4742_ = v_reuseFailAlloc_4744_;
goto v_reusejp_4741_;
}
v_reusejp_4741_:
{
lean_object* v___x_4743_; 
v___x_4743_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4743_, 0, v___x_4742_);
return v___x_4743_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_ofPromise___boxed(lean_object* v_00_u03b1_4746_, lean_object* v_task_4747_, lean_object* v_error_4748_, lean_object* v___y_4749_){
_start:
{
lean_object* v_res_4750_; 
v_res_4750_ = l_Std_Async_Async_ofPromise(v_00_u03b1_4746_, v_task_4747_, v_error_4748_);
return v_res_4750_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_ofAsyncTask___redArg(lean_object* v_task_4751_){
_start:
{
lean_object* v___x_4753_; 
v___x_4753_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4753_, 0, v_task_4751_);
return v___x_4753_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_ofAsyncTask___redArg___boxed(lean_object* v_task_4754_, lean_object* v___y_4755_){
_start:
{
lean_object* v_res_4756_; 
v_res_4756_ = l_Std_Async_Async_ofAsyncTask___redArg(v_task_4754_);
return v_res_4756_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_ofAsyncTask(lean_object* v_00_u03b1_4757_, lean_object* v_task_4758_){
_start:
{
lean_object* v___x_4760_; 
v___x_4760_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4760_, 0, v_task_4758_);
return v___x_4760_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_ofAsyncTask___boxed(lean_object* v_00_u03b1_4761_, lean_object* v_task_4762_, lean_object* v___y_4763_){
_start:
{
lean_object* v_res_4764_; 
v_res_4764_ = l_Std_Async_Async_ofAsyncTask(v_00_u03b1_4761_, v_task_4762_);
return v_res_4764_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_ofIOTask___redArg___lam__0(lean_object* v_a_4765_){
_start:
{
lean_object* v___x_4766_; 
v___x_4766_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4766_, 0, v_a_4765_);
return v___x_4766_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_ofIOTask___redArg___lam__1(lean_object* v___f_4767_, lean_object* v_x_4768_){
_start:
{
if (lean_obj_tag(v_x_4768_) == 0)
{
lean_object* v_a_4770_; lean_object* v___x_4772_; uint8_t v_isShared_4773_; uint8_t v_isSharedCheck_4778_; 
lean_dec_ref(v___f_4767_);
v_a_4770_ = lean_ctor_get(v_x_4768_, 0);
v_isSharedCheck_4778_ = !lean_is_exclusive(v_x_4768_);
if (v_isSharedCheck_4778_ == 0)
{
v___x_4772_ = v_x_4768_;
v_isShared_4773_ = v_isSharedCheck_4778_;
goto v_resetjp_4771_;
}
else
{
lean_inc(v_a_4770_);
lean_dec(v_x_4768_);
v___x_4772_ = lean_box(0);
v_isShared_4773_ = v_isSharedCheck_4778_;
goto v_resetjp_4771_;
}
v_resetjp_4771_:
{
lean_object* v___x_4775_; 
if (v_isShared_4773_ == 0)
{
v___x_4775_ = v___x_4772_;
goto v_reusejp_4774_;
}
else
{
lean_object* v_reuseFailAlloc_4777_; 
v_reuseFailAlloc_4777_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4777_, 0, v_a_4770_);
v___x_4775_ = v_reuseFailAlloc_4777_;
goto v_reusejp_4774_;
}
v_reusejp_4774_:
{
lean_object* v___x_4776_; 
v___x_4776_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4776_, 0, v___x_4775_);
return v___x_4776_;
}
}
}
else
{
lean_object* v_a_4779_; 
v_a_4779_ = lean_ctor_get(v_x_4768_, 0);
lean_inc(v_a_4779_);
lean_dec_ref_known(v_x_4768_, 1);
if (lean_obj_tag(v_a_4779_) == 0)
{
lean_object* v_a_4780_; lean_object* v___x_4782_; uint8_t v_isShared_4783_; uint8_t v_isSharedCheck_4788_; 
lean_dec_ref(v___f_4767_);
v_a_4780_ = lean_ctor_get(v_a_4779_, 0);
v_isSharedCheck_4788_ = !lean_is_exclusive(v_a_4779_);
if (v_isSharedCheck_4788_ == 0)
{
v___x_4782_ = v_a_4779_;
v_isShared_4783_ = v_isSharedCheck_4788_;
goto v_resetjp_4781_;
}
else
{
lean_inc(v_a_4780_);
lean_dec(v_a_4779_);
v___x_4782_ = lean_box(0);
v_isShared_4783_ = v_isSharedCheck_4788_;
goto v_resetjp_4781_;
}
v_resetjp_4781_:
{
lean_object* v___x_4785_; 
if (v_isShared_4783_ == 0)
{
v___x_4785_ = v___x_4782_;
goto v_reusejp_4784_;
}
else
{
lean_object* v_reuseFailAlloc_4787_; 
v_reuseFailAlloc_4787_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4787_, 0, v_a_4780_);
v___x_4785_ = v_reuseFailAlloc_4787_;
goto v_reusejp_4784_;
}
v_reusejp_4784_:
{
lean_object* v___x_4786_; 
v___x_4786_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4786_, 0, v___x_4785_);
return v___x_4786_;
}
}
}
else
{
lean_object* v_a_4789_; lean_object* v___x_4790_; uint8_t v___x_4791_; lean_object* v___x_4792_; lean_object* v___x_4793_; 
v_a_4789_ = lean_ctor_get(v_a_4779_, 0);
lean_inc(v_a_4789_);
lean_dec_ref_known(v_a_4779_, 1);
v___x_4790_ = lean_unsigned_to_nat(0u);
v___x_4791_ = 0;
v___x_4792_ = lean_task_map(v___f_4767_, v_a_4789_, v___x_4790_, v___x_4791_);
v___x_4793_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4793_, 0, v___x_4792_);
return v___x_4793_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_ofIOTask___redArg___lam__1___boxed(lean_object* v___f_4794_, lean_object* v_x_4795_, lean_object* v___y_4796_){
_start:
{
lean_object* v_res_4797_; 
v_res_4797_ = l_Std_Async_Async_ofIOTask___redArg___lam__1(v___f_4794_, v_x_4795_);
return v_res_4797_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_ofIOTask___redArg(lean_object* v_task_4801_){
_start:
{
lean_object* v___f_4803_; lean_object* v___x_4804_; uint8_t v___x_4805_; lean_object* v_val_4807_; lean_object* v___x_4811_; 
v___f_4803_ = ((lean_object*)(l_Std_Async_Async_ofIOTask___redArg___closed__1));
v___x_4804_ = lean_unsigned_to_nat(0u);
v___x_4805_ = 0;
v___x_4811_ = lean_apply_1(v_task_4801_, lean_box(0));
if (lean_obj_tag(v___x_4811_) == 0)
{
lean_object* v_a_4812_; lean_object* v___x_4814_; uint8_t v_isShared_4815_; uint8_t v_isSharedCheck_4819_; 
v_a_4812_ = lean_ctor_get(v___x_4811_, 0);
v_isSharedCheck_4819_ = !lean_is_exclusive(v___x_4811_);
if (v_isSharedCheck_4819_ == 0)
{
v___x_4814_ = v___x_4811_;
v_isShared_4815_ = v_isSharedCheck_4819_;
goto v_resetjp_4813_;
}
else
{
lean_inc(v_a_4812_);
lean_dec(v___x_4811_);
v___x_4814_ = lean_box(0);
v_isShared_4815_ = v_isSharedCheck_4819_;
goto v_resetjp_4813_;
}
v_resetjp_4813_:
{
lean_object* v___x_4817_; 
if (v_isShared_4815_ == 0)
{
lean_ctor_set_tag(v___x_4814_, 1);
v___x_4817_ = v___x_4814_;
goto v_reusejp_4816_;
}
else
{
lean_object* v_reuseFailAlloc_4818_; 
v_reuseFailAlloc_4818_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4818_, 0, v_a_4812_);
v___x_4817_ = v_reuseFailAlloc_4818_;
goto v_reusejp_4816_;
}
v_reusejp_4816_:
{
v_val_4807_ = v___x_4817_;
goto v___jp_4806_;
}
}
}
else
{
lean_object* v_a_4820_; lean_object* v___x_4822_; uint8_t v_isShared_4823_; uint8_t v_isSharedCheck_4827_; 
v_a_4820_ = lean_ctor_get(v___x_4811_, 0);
v_isSharedCheck_4827_ = !lean_is_exclusive(v___x_4811_);
if (v_isSharedCheck_4827_ == 0)
{
v___x_4822_ = v___x_4811_;
v_isShared_4823_ = v_isSharedCheck_4827_;
goto v_resetjp_4821_;
}
else
{
lean_inc(v_a_4820_);
lean_dec(v___x_4811_);
v___x_4822_ = lean_box(0);
v_isShared_4823_ = v_isSharedCheck_4827_;
goto v_resetjp_4821_;
}
v_resetjp_4821_:
{
lean_object* v___x_4825_; 
if (v_isShared_4823_ == 0)
{
lean_ctor_set_tag(v___x_4822_, 0);
v___x_4825_ = v___x_4822_;
goto v_reusejp_4824_;
}
else
{
lean_object* v_reuseFailAlloc_4826_; 
v_reuseFailAlloc_4826_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4826_, 0, v_a_4820_);
v___x_4825_ = v_reuseFailAlloc_4826_;
goto v_reusejp_4824_;
}
v_reusejp_4824_:
{
v_val_4807_ = v___x_4825_;
goto v___jp_4806_;
}
}
}
v___jp_4806_:
{
lean_object* v___x_4808_; lean_object* v___x_4809_; lean_object* v___x_4810_; 
v___x_4808_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4808_, 0, v_val_4807_);
v___x_4809_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4809_, 0, v___x_4808_);
v___x_4810_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4804_, v___x_4805_, v___x_4809_, v___f_4803_);
return v___x_4810_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_ofIOTask___redArg___boxed(lean_object* v_task_4828_, lean_object* v___y_4829_){
_start:
{
lean_object* v_res_4830_; 
v_res_4830_ = l_Std_Async_Async_ofIOTask___redArg(v_task_4828_);
return v_res_4830_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_ofIOTask(lean_object* v_00_u03b1_4831_, lean_object* v_task_4832_){
_start:
{
lean_object* v___f_4834_; lean_object* v___x_4835_; uint8_t v___x_4836_; lean_object* v_val_4838_; lean_object* v___x_4842_; 
v___f_4834_ = ((lean_object*)(l_Std_Async_Async_ofIOTask___redArg___closed__1));
v___x_4835_ = lean_unsigned_to_nat(0u);
v___x_4836_ = 0;
v___x_4842_ = lean_apply_1(v_task_4832_, lean_box(0));
if (lean_obj_tag(v___x_4842_) == 0)
{
lean_object* v_a_4843_; lean_object* v___x_4845_; uint8_t v_isShared_4846_; uint8_t v_isSharedCheck_4850_; 
v_a_4843_ = lean_ctor_get(v___x_4842_, 0);
v_isSharedCheck_4850_ = !lean_is_exclusive(v___x_4842_);
if (v_isSharedCheck_4850_ == 0)
{
v___x_4845_ = v___x_4842_;
v_isShared_4846_ = v_isSharedCheck_4850_;
goto v_resetjp_4844_;
}
else
{
lean_inc(v_a_4843_);
lean_dec(v___x_4842_);
v___x_4845_ = lean_box(0);
v_isShared_4846_ = v_isSharedCheck_4850_;
goto v_resetjp_4844_;
}
v_resetjp_4844_:
{
lean_object* v___x_4848_; 
if (v_isShared_4846_ == 0)
{
lean_ctor_set_tag(v___x_4845_, 1);
v___x_4848_ = v___x_4845_;
goto v_reusejp_4847_;
}
else
{
lean_object* v_reuseFailAlloc_4849_; 
v_reuseFailAlloc_4849_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4849_, 0, v_a_4843_);
v___x_4848_ = v_reuseFailAlloc_4849_;
goto v_reusejp_4847_;
}
v_reusejp_4847_:
{
v_val_4838_ = v___x_4848_;
goto v___jp_4837_;
}
}
}
else
{
lean_object* v_a_4851_; lean_object* v___x_4853_; uint8_t v_isShared_4854_; uint8_t v_isSharedCheck_4858_; 
v_a_4851_ = lean_ctor_get(v___x_4842_, 0);
v_isSharedCheck_4858_ = !lean_is_exclusive(v___x_4842_);
if (v_isSharedCheck_4858_ == 0)
{
v___x_4853_ = v___x_4842_;
v_isShared_4854_ = v_isSharedCheck_4858_;
goto v_resetjp_4852_;
}
else
{
lean_inc(v_a_4851_);
lean_dec(v___x_4842_);
v___x_4853_ = lean_box(0);
v_isShared_4854_ = v_isSharedCheck_4858_;
goto v_resetjp_4852_;
}
v_resetjp_4852_:
{
lean_object* v___x_4856_; 
if (v_isShared_4854_ == 0)
{
lean_ctor_set_tag(v___x_4853_, 0);
v___x_4856_ = v___x_4853_;
goto v_reusejp_4855_;
}
else
{
lean_object* v_reuseFailAlloc_4857_; 
v_reuseFailAlloc_4857_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4857_, 0, v_a_4851_);
v___x_4856_ = v_reuseFailAlloc_4857_;
goto v_reusejp_4855_;
}
v_reusejp_4855_:
{
v_val_4838_ = v___x_4856_;
goto v___jp_4837_;
}
}
}
v___jp_4837_:
{
lean_object* v___x_4839_; lean_object* v___x_4840_; lean_object* v___x_4841_; 
v___x_4839_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4839_, 0, v_val_4838_);
v___x_4840_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4840_, 0, v___x_4839_);
v___x_4841_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4835_, v___x_4836_, v___x_4840_, v___f_4834_);
return v___x_4841_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_ofIOTask___boxed(lean_object* v_00_u03b1_4859_, lean_object* v_task_4860_, lean_object* v___y_4861_){
_start:
{
lean_object* v_res_4862_; 
v_res_4862_ = l_Std_Async_Async_ofIOTask(v_00_u03b1_4859_, v_task_4860_);
return v_res_4862_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_ofExcept___redArg(lean_object* v_except_4863_){
_start:
{
lean_object* v___x_4865_; 
v___x_4865_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4865_, 0, v_except_4863_);
return v___x_4865_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_ofExcept___redArg___boxed(lean_object* v_except_4866_, lean_object* v___y_4867_){
_start:
{
lean_object* v_res_4868_; 
v_res_4868_ = l_Std_Async_Async_ofExcept___redArg(v_except_4866_);
return v_res_4868_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_ofExcept(lean_object* v_00_u03b1_4869_, lean_object* v_except_4870_){
_start:
{
lean_object* v___x_4872_; 
v___x_4872_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4872_, 0, v_except_4870_);
return v___x_4872_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_ofExcept___boxed(lean_object* v_00_u03b1_4873_, lean_object* v_except_4874_, lean_object* v___y_4875_){
_start:
{
lean_object* v_res_4876_; 
v_res_4876_ = l_Std_Async_Async_ofExcept(v_00_u03b1_4873_, v_except_4874_);
return v_res_4876_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_ofTask___redArg(lean_object* v_task_4877_){
_start:
{
lean_object* v___f_4879_; lean_object* v___x_4880_; uint8_t v___x_4881_; lean_object* v___x_4882_; lean_object* v___x_4883_; 
v___f_4879_ = ((lean_object*)(l_Std_Async_Async_ofIOTask___redArg___closed__0));
v___x_4880_ = lean_unsigned_to_nat(0u);
v___x_4881_ = 0;
v___x_4882_ = lean_task_map(v___f_4879_, v_task_4877_, v___x_4880_, v___x_4881_);
v___x_4883_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4883_, 0, v___x_4882_);
return v___x_4883_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_ofTask___redArg___boxed(lean_object* v_task_4884_, lean_object* v___y_4885_){
_start:
{
lean_object* v_res_4886_; 
v_res_4886_ = l_Std_Async_Async_ofTask___redArg(v_task_4884_);
return v_res_4886_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_ofTask(lean_object* v_00_u03b1_4887_, lean_object* v_task_4888_){
_start:
{
lean_object* v___f_4890_; lean_object* v___x_4891_; uint8_t v___x_4892_; lean_object* v___x_4893_; lean_object* v___x_4894_; 
v___f_4890_ = ((lean_object*)(l_Std_Async_Async_ofIOTask___redArg___closed__0));
v___x_4891_ = lean_unsigned_to_nat(0u);
v___x_4892_ = 0;
v___x_4893_ = lean_task_map(v___f_4890_, v_task_4888_, v___x_4891_, v___x_4892_);
v___x_4894_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4894_, 0, v___x_4893_);
return v___x_4894_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_ofTask___boxed(lean_object* v_00_u03b1_4895_, lean_object* v_task_4896_, lean_object* v___y_4897_){
_start:
{
lean_object* v_res_4898_; 
v_res_4898_ = l_Std_Async_Async_ofTask(v_00_u03b1_4895_, v_task_4896_);
return v_res_4898_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_ofPurePromise___redArg(lean_object* v_task_4899_, lean_object* v_error_4900_){
_start:
{
lean_object* v___f_4902_; lean_object* v___x_4903_; 
v___f_4902_ = lean_alloc_closure((void*)(l_Std_Async_AsyncTask_ofPurePromise___redArg___lam__0), 2, 1);
lean_closure_set(v___f_4902_, 0, v_error_4900_);
v___x_4903_ = lean_apply_1(v_task_4899_, lean_box(0));
if (lean_obj_tag(v___x_4903_) == 0)
{
lean_object* v_a_4904_; lean_object* v___x_4906_; uint8_t v_isShared_4907_; uint8_t v_isSharedCheck_4915_; 
v_a_4904_ = lean_ctor_get(v___x_4903_, 0);
v_isSharedCheck_4915_ = !lean_is_exclusive(v___x_4903_);
if (v_isSharedCheck_4915_ == 0)
{
v___x_4906_ = v___x_4903_;
v_isShared_4907_ = v_isSharedCheck_4915_;
goto v_resetjp_4905_;
}
else
{
lean_inc(v_a_4904_);
lean_dec(v___x_4903_);
v___x_4906_ = lean_box(0);
v_isShared_4907_ = v_isSharedCheck_4915_;
goto v_resetjp_4905_;
}
v_resetjp_4905_:
{
lean_object* v___x_4908_; lean_object* v___x_4909_; uint8_t v___x_4910_; lean_object* v___x_4911_; lean_object* v___x_4913_; 
v___x_4908_ = lean_io_promise_result_opt(v_a_4904_);
lean_dec(v_a_4904_);
v___x_4909_ = lean_unsigned_to_nat(0u);
v___x_4910_ = 0;
v___x_4911_ = lean_task_map(v___f_4902_, v___x_4908_, v___x_4909_, v___x_4910_);
if (v_isShared_4907_ == 0)
{
lean_ctor_set_tag(v___x_4906_, 1);
lean_ctor_set(v___x_4906_, 0, v___x_4911_);
v___x_4913_ = v___x_4906_;
goto v_reusejp_4912_;
}
else
{
lean_object* v_reuseFailAlloc_4914_; 
v_reuseFailAlloc_4914_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4914_, 0, v___x_4911_);
v___x_4913_ = v_reuseFailAlloc_4914_;
goto v_reusejp_4912_;
}
v_reusejp_4912_:
{
return v___x_4913_;
}
}
}
else
{
lean_object* v_a_4916_; lean_object* v___x_4918_; uint8_t v_isShared_4919_; uint8_t v_isSharedCheck_4924_; 
lean_dec_ref(v___f_4902_);
v_a_4916_ = lean_ctor_get(v___x_4903_, 0);
v_isSharedCheck_4924_ = !lean_is_exclusive(v___x_4903_);
if (v_isSharedCheck_4924_ == 0)
{
v___x_4918_ = v___x_4903_;
v_isShared_4919_ = v_isSharedCheck_4924_;
goto v_resetjp_4917_;
}
else
{
lean_inc(v_a_4916_);
lean_dec(v___x_4903_);
v___x_4918_ = lean_box(0);
v_isShared_4919_ = v_isSharedCheck_4924_;
goto v_resetjp_4917_;
}
v_resetjp_4917_:
{
lean_object* v___x_4921_; 
if (v_isShared_4919_ == 0)
{
lean_ctor_set_tag(v___x_4918_, 0);
v___x_4921_ = v___x_4918_;
goto v_reusejp_4920_;
}
else
{
lean_object* v_reuseFailAlloc_4923_; 
v_reuseFailAlloc_4923_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4923_, 0, v_a_4916_);
v___x_4921_ = v_reuseFailAlloc_4923_;
goto v_reusejp_4920_;
}
v_reusejp_4920_:
{
lean_object* v___x_4922_; 
v___x_4922_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4922_, 0, v___x_4921_);
return v___x_4922_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_ofPurePromise___redArg___boxed(lean_object* v_task_4925_, lean_object* v_error_4926_, lean_object* v___y_4927_){
_start:
{
lean_object* v_res_4928_; 
v_res_4928_ = l_Std_Async_Async_ofPurePromise___redArg(v_task_4925_, v_error_4926_);
return v_res_4928_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_ofPurePromise(lean_object* v_00_u03b1_4929_, lean_object* v_task_4930_, lean_object* v_error_4931_){
_start:
{
lean_object* v___f_4933_; lean_object* v___x_4934_; 
v___f_4933_ = lean_alloc_closure((void*)(l_Std_Async_AsyncTask_ofPurePromise___redArg___lam__0), 2, 1);
lean_closure_set(v___f_4933_, 0, v_error_4931_);
v___x_4934_ = lean_apply_1(v_task_4930_, lean_box(0));
if (lean_obj_tag(v___x_4934_) == 0)
{
lean_object* v_a_4935_; lean_object* v___x_4937_; uint8_t v_isShared_4938_; uint8_t v_isSharedCheck_4946_; 
v_a_4935_ = lean_ctor_get(v___x_4934_, 0);
v_isSharedCheck_4946_ = !lean_is_exclusive(v___x_4934_);
if (v_isSharedCheck_4946_ == 0)
{
v___x_4937_ = v___x_4934_;
v_isShared_4938_ = v_isSharedCheck_4946_;
goto v_resetjp_4936_;
}
else
{
lean_inc(v_a_4935_);
lean_dec(v___x_4934_);
v___x_4937_ = lean_box(0);
v_isShared_4938_ = v_isSharedCheck_4946_;
goto v_resetjp_4936_;
}
v_resetjp_4936_:
{
lean_object* v___x_4939_; lean_object* v___x_4940_; uint8_t v___x_4941_; lean_object* v___x_4942_; lean_object* v___x_4944_; 
v___x_4939_ = lean_io_promise_result_opt(v_a_4935_);
lean_dec(v_a_4935_);
v___x_4940_ = lean_unsigned_to_nat(0u);
v___x_4941_ = 0;
v___x_4942_ = lean_task_map(v___f_4933_, v___x_4939_, v___x_4940_, v___x_4941_);
if (v_isShared_4938_ == 0)
{
lean_ctor_set_tag(v___x_4937_, 1);
lean_ctor_set(v___x_4937_, 0, v___x_4942_);
v___x_4944_ = v___x_4937_;
goto v_reusejp_4943_;
}
else
{
lean_object* v_reuseFailAlloc_4945_; 
v_reuseFailAlloc_4945_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4945_, 0, v___x_4942_);
v___x_4944_ = v_reuseFailAlloc_4945_;
goto v_reusejp_4943_;
}
v_reusejp_4943_:
{
return v___x_4944_;
}
}
}
else
{
lean_object* v_a_4947_; lean_object* v___x_4949_; uint8_t v_isShared_4950_; uint8_t v_isSharedCheck_4955_; 
lean_dec_ref(v___f_4933_);
v_a_4947_ = lean_ctor_get(v___x_4934_, 0);
v_isSharedCheck_4955_ = !lean_is_exclusive(v___x_4934_);
if (v_isSharedCheck_4955_ == 0)
{
v___x_4949_ = v___x_4934_;
v_isShared_4950_ = v_isSharedCheck_4955_;
goto v_resetjp_4948_;
}
else
{
lean_inc(v_a_4947_);
lean_dec(v___x_4934_);
v___x_4949_ = lean_box(0);
v_isShared_4950_ = v_isSharedCheck_4955_;
goto v_resetjp_4948_;
}
v_resetjp_4948_:
{
lean_object* v___x_4952_; 
if (v_isShared_4950_ == 0)
{
lean_ctor_set_tag(v___x_4949_, 0);
v___x_4952_ = v___x_4949_;
goto v_reusejp_4951_;
}
else
{
lean_object* v_reuseFailAlloc_4954_; 
v_reuseFailAlloc_4954_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4954_, 0, v_a_4947_);
v___x_4952_ = v_reuseFailAlloc_4954_;
goto v_reusejp_4951_;
}
v_reusejp_4951_:
{
lean_object* v___x_4953_; 
v___x_4953_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4953_, 0, v___x_4952_);
return v___x_4953_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_ofPurePromise___boxed(lean_object* v_00_u03b1_4956_, lean_object* v_task_4957_, lean_object* v_error_4958_, lean_object* v___y_4959_){
_start:
{
lean_object* v_res_4960_; 
v_res_4960_ = l_Std_Async_Async_ofPurePromise(v_00_u03b1_4956_, v_task_4957_, v_error_4958_);
return v_res_4960_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_instMonadAwaitPromise___lam__1(lean_object* v___f_4963_, lean_object* v_00_u03b1_4964_, lean_object* v_t_4965_){
_start:
{
lean_object* v___x_4967_; lean_object* v___x_4968_; uint8_t v___x_4969_; lean_object* v___x_4970_; lean_object* v___x_4971_; 
v___x_4967_ = l_IO_Promise_result_x21___redArg(v_t_4965_);
v___x_4968_ = lean_unsigned_to_nat(0u);
v___x_4969_ = 0;
v___x_4970_ = lean_task_map(v___f_4963_, v___x_4967_, v___x_4968_, v___x_4969_);
v___x_4971_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4971_, 0, v___x_4970_);
return v___x_4971_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_instMonadAwaitPromise___lam__1___boxed(lean_object* v___f_4972_, lean_object* v_00_u03b1_4973_, lean_object* v_t_4974_, lean_object* v___y_4975_){
_start:
{
lean_object* v_res_4976_; 
v_res_4976_ = l_Std_Async_Async_instMonadAwaitPromise___lam__1(v___f_4972_, v_00_u03b1_4973_, v_t_4974_);
lean_dec(v_t_4974_);
return v_res_4976_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_concurrently___redArg___lam__1(lean_object* v_a_4980_, lean_object* v_x_4981_){
_start:
{
if (lean_obj_tag(v_x_4981_) == 0)
{
lean_object* v_a_4983_; lean_object* v___x_4985_; uint8_t v_isShared_4986_; uint8_t v_isSharedCheck_4991_; 
lean_dec(v_a_4980_);
v_a_4983_ = lean_ctor_get(v_x_4981_, 0);
v_isSharedCheck_4991_ = !lean_is_exclusive(v_x_4981_);
if (v_isSharedCheck_4991_ == 0)
{
v___x_4985_ = v_x_4981_;
v_isShared_4986_ = v_isSharedCheck_4991_;
goto v_resetjp_4984_;
}
else
{
lean_inc(v_a_4983_);
lean_dec(v_x_4981_);
v___x_4985_ = lean_box(0);
v_isShared_4986_ = v_isSharedCheck_4991_;
goto v_resetjp_4984_;
}
v_resetjp_4984_:
{
lean_object* v___x_4988_; 
if (v_isShared_4986_ == 0)
{
v___x_4988_ = v___x_4985_;
goto v_reusejp_4987_;
}
else
{
lean_object* v_reuseFailAlloc_4990_; 
v_reuseFailAlloc_4990_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4990_, 0, v_a_4983_);
v___x_4988_ = v_reuseFailAlloc_4990_;
goto v_reusejp_4987_;
}
v_reusejp_4987_:
{
lean_object* v___x_4989_; 
v___x_4989_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4989_, 0, v___x_4988_);
return v___x_4989_;
}
}
}
else
{
lean_object* v_a_4992_; lean_object* v___x_4994_; uint8_t v_isShared_4995_; uint8_t v_isSharedCheck_5001_; 
v_a_4992_ = lean_ctor_get(v_x_4981_, 0);
v_isSharedCheck_5001_ = !lean_is_exclusive(v_x_4981_);
if (v_isSharedCheck_5001_ == 0)
{
v___x_4994_ = v_x_4981_;
v_isShared_4995_ = v_isSharedCheck_5001_;
goto v_resetjp_4993_;
}
else
{
lean_inc(v_a_4992_);
lean_dec(v_x_4981_);
v___x_4994_ = lean_box(0);
v_isShared_4995_ = v_isSharedCheck_5001_;
goto v_resetjp_4993_;
}
v_resetjp_4993_:
{
lean_object* v___x_4996_; lean_object* v___x_4998_; 
v___x_4996_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4996_, 0, v_a_4980_);
lean_ctor_set(v___x_4996_, 1, v_a_4992_);
if (v_isShared_4995_ == 0)
{
lean_ctor_set(v___x_4994_, 0, v___x_4996_);
v___x_4998_ = v___x_4994_;
goto v_reusejp_4997_;
}
else
{
lean_object* v_reuseFailAlloc_5000_; 
v_reuseFailAlloc_5000_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5000_, 0, v___x_4996_);
v___x_4998_ = v_reuseFailAlloc_5000_;
goto v_reusejp_4997_;
}
v_reusejp_4997_:
{
lean_object* v___x_4999_; 
v___x_4999_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4999_, 0, v___x_4998_);
return v___x_4999_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_concurrently___redArg___lam__1___boxed(lean_object* v_a_5002_, lean_object* v_x_5003_, lean_object* v___y_5004_){
_start:
{
lean_object* v_res_5005_; 
v_res_5005_ = l_Std_Async_Async_concurrently___redArg___lam__1(v_a_5002_, v_x_5003_);
return v_res_5005_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_concurrently___redArg___lam__0(lean_object* v_a_5006_, lean_object* v_x_5007_){
_start:
{
if (lean_obj_tag(v_x_5007_) == 0)
{
lean_object* v_a_5009_; lean_object* v___x_5011_; uint8_t v_isShared_5012_; uint8_t v_isSharedCheck_5017_; 
lean_dec_ref(v_a_5006_);
v_a_5009_ = lean_ctor_get(v_x_5007_, 0);
v_isSharedCheck_5017_ = !lean_is_exclusive(v_x_5007_);
if (v_isSharedCheck_5017_ == 0)
{
v___x_5011_ = v_x_5007_;
v_isShared_5012_ = v_isSharedCheck_5017_;
goto v_resetjp_5010_;
}
else
{
lean_inc(v_a_5009_);
lean_dec(v_x_5007_);
v___x_5011_ = lean_box(0);
v_isShared_5012_ = v_isSharedCheck_5017_;
goto v_resetjp_5010_;
}
v_resetjp_5010_:
{
lean_object* v___x_5014_; 
if (v_isShared_5012_ == 0)
{
v___x_5014_ = v___x_5011_;
goto v_reusejp_5013_;
}
else
{
lean_object* v_reuseFailAlloc_5016_; 
v_reuseFailAlloc_5016_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5016_, 0, v_a_5009_);
v___x_5014_ = v_reuseFailAlloc_5016_;
goto v_reusejp_5013_;
}
v_reusejp_5013_:
{
lean_object* v___x_5015_; 
v___x_5015_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5015_, 0, v___x_5014_);
return v___x_5015_;
}
}
}
else
{
lean_object* v_a_5018_; lean_object* v___f_5019_; lean_object* v___x_5020_; uint8_t v___x_5021_; lean_object* v___x_5022_; lean_object* v___x_5023_; 
v_a_5018_ = lean_ctor_get(v_x_5007_, 0);
lean_inc(v_a_5018_);
lean_dec_ref_known(v_x_5007_, 1);
v___f_5019_ = lean_alloc_closure((void*)(l_Std_Async_Async_concurrently___redArg___lam__1___boxed), 3, 1);
lean_closure_set(v___f_5019_, 0, v_a_5018_);
v___x_5020_ = lean_unsigned_to_nat(0u);
v___x_5021_ = 0;
v___x_5022_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5022_, 0, v_a_5006_);
v___x_5023_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5020_, v___x_5021_, v___x_5022_, v___f_5019_);
return v___x_5023_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_concurrently___redArg___lam__0___boxed(lean_object* v_a_5024_, lean_object* v_x_5025_, lean_object* v___y_5026_){
_start:
{
lean_object* v_res_5027_; 
v_res_5027_ = l_Std_Async_Async_concurrently___redArg___lam__0(v_a_5024_, v_x_5025_);
return v_res_5027_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_concurrently___redArg___lam__2(lean_object* v_a_5028_, lean_object* v_x_5029_){
_start:
{
if (lean_obj_tag(v_x_5029_) == 0)
{
lean_object* v_a_5031_; lean_object* v___x_5033_; uint8_t v_isShared_5034_; uint8_t v_isSharedCheck_5039_; 
lean_dec_ref(v_a_5028_);
v_a_5031_ = lean_ctor_get(v_x_5029_, 0);
v_isSharedCheck_5039_ = !lean_is_exclusive(v_x_5029_);
if (v_isSharedCheck_5039_ == 0)
{
v___x_5033_ = v_x_5029_;
v_isShared_5034_ = v_isSharedCheck_5039_;
goto v_resetjp_5032_;
}
else
{
lean_inc(v_a_5031_);
lean_dec(v_x_5029_);
v___x_5033_ = lean_box(0);
v_isShared_5034_ = v_isSharedCheck_5039_;
goto v_resetjp_5032_;
}
v_resetjp_5032_:
{
lean_object* v___x_5036_; 
if (v_isShared_5034_ == 0)
{
v___x_5036_ = v___x_5033_;
goto v_reusejp_5035_;
}
else
{
lean_object* v_reuseFailAlloc_5038_; 
v_reuseFailAlloc_5038_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5038_, 0, v_a_5031_);
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
else
{
lean_object* v_a_5040_; lean_object* v___f_5041_; lean_object* v___x_5042_; uint8_t v___x_5043_; lean_object* v___x_5044_; lean_object* v___x_5045_; 
v_a_5040_ = lean_ctor_get(v_x_5029_, 0);
lean_inc(v_a_5040_);
lean_dec_ref_known(v_x_5029_, 1);
v___f_5041_ = lean_alloc_closure((void*)(l_Std_Async_Async_concurrently___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_5041_, 0, v_a_5040_);
v___x_5042_ = lean_unsigned_to_nat(0u);
v___x_5043_ = 0;
v___x_5044_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5044_, 0, v_a_5028_);
v___x_5045_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5042_, v___x_5043_, v___x_5044_, v___f_5041_);
return v___x_5045_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_concurrently___redArg___lam__2___boxed(lean_object* v_a_5046_, lean_object* v_x_5047_, lean_object* v___y_5048_){
_start:
{
lean_object* v_res_5049_; 
v_res_5049_ = l_Std_Async_Async_concurrently___redArg___lam__2(v_a_5046_, v_x_5047_);
return v_res_5049_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_concurrently___redArg___lam__3(lean_object* v_y_5050_, lean_object* v_prio_5051_, lean_object* v___f_5052_, lean_object* v_x_5053_){
_start:
{
if (lean_obj_tag(v_x_5053_) == 0)
{
lean_object* v_a_5055_; lean_object* v___x_5057_; uint8_t v_isShared_5058_; uint8_t v_isSharedCheck_5063_; 
lean_dec_ref(v___f_5052_);
lean_dec(v_prio_5051_);
lean_dec_ref(v_y_5050_);
v_a_5055_ = lean_ctor_get(v_x_5053_, 0);
v_isSharedCheck_5063_ = !lean_is_exclusive(v_x_5053_);
if (v_isSharedCheck_5063_ == 0)
{
v___x_5057_ = v_x_5053_;
v_isShared_5058_ = v_isSharedCheck_5063_;
goto v_resetjp_5056_;
}
else
{
lean_inc(v_a_5055_);
lean_dec(v_x_5053_);
v___x_5057_ = lean_box(0);
v_isShared_5058_ = v_isSharedCheck_5063_;
goto v_resetjp_5056_;
}
v_resetjp_5056_:
{
lean_object* v___x_5060_; 
if (v_isShared_5058_ == 0)
{
v___x_5060_ = v___x_5057_;
goto v_reusejp_5059_;
}
else
{
lean_object* v_reuseFailAlloc_5062_; 
v_reuseFailAlloc_5062_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5062_, 0, v_a_5055_);
v___x_5060_ = v_reuseFailAlloc_5062_;
goto v_reusejp_5059_;
}
v_reusejp_5059_:
{
lean_object* v___x_5061_; 
v___x_5061_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5061_, 0, v___x_5060_);
return v___x_5061_;
}
}
}
else
{
lean_object* v_a_5064_; lean_object* v___x_5066_; uint8_t v_isShared_5067_; uint8_t v_isSharedCheck_5081_; 
v_a_5064_ = lean_ctor_get(v_x_5053_, 0);
v_isSharedCheck_5081_ = !lean_is_exclusive(v_x_5053_);
if (v_isSharedCheck_5081_ == 0)
{
v___x_5066_ = v_x_5053_;
v_isShared_5067_ = v_isSharedCheck_5081_;
goto v_resetjp_5065_;
}
else
{
lean_inc(v_a_5064_);
lean_dec(v_x_5053_);
v___x_5066_ = lean_box(0);
v_isShared_5067_ = v_isSharedCheck_5081_;
goto v_resetjp_5065_;
}
v_resetjp_5065_:
{
lean_object* v___f_5068_; lean_object* v___x_5069_; uint8_t v___x_5070_; lean_object* v___x_5071_; lean_object* v___x_5072_; lean_object* v___x_5073_; uint8_t v___x_5074_; lean_object* v___x_5075_; lean_object* v___x_5077_; 
v___f_5068_ = lean_alloc_closure((void*)(l_Std_Async_Async_concurrently___redArg___lam__2___boxed), 3, 1);
lean_closure_set(v___f_5068_, 0, v_a_5064_);
v___x_5069_ = lean_unsigned_to_nat(0u);
v___x_5070_ = 0;
v___x_5071_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_toBaseAsync___boxed), 4, 3);
lean_closure_set(v___x_5071_, 0, lean_box(0));
lean_closure_set(v___x_5071_, 1, lean_box(0));
lean_closure_set(v___x_5071_, 2, v_y_5050_);
v___x_5072_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_toRawBaseIO___boxed), 3, 2);
lean_closure_set(v___x_5072_, 0, lean_box(0));
lean_closure_set(v___x_5072_, 1, v___x_5071_);
v___x_5073_ = lean_io_as_task(v___x_5072_, v_prio_5051_);
v___x_5074_ = 1;
v___x_5075_ = lean_task_bind(v___x_5073_, v___f_5052_, v___x_5069_, v___x_5074_);
if (v_isShared_5067_ == 0)
{
lean_ctor_set(v___x_5066_, 0, v___x_5075_);
v___x_5077_ = v___x_5066_;
goto v_reusejp_5076_;
}
else
{
lean_object* v_reuseFailAlloc_5080_; 
v_reuseFailAlloc_5080_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5080_, 0, v___x_5075_);
v___x_5077_ = v_reuseFailAlloc_5080_;
goto v_reusejp_5076_;
}
v_reusejp_5076_:
{
lean_object* v___x_5078_; lean_object* v___x_5079_; 
v___x_5078_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5078_, 0, v___x_5077_);
v___x_5079_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5069_, v___x_5070_, v___x_5078_, v___f_5068_);
return v___x_5079_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_concurrently___redArg___lam__3___boxed(lean_object* v_y_5082_, lean_object* v_prio_5083_, lean_object* v___f_5084_, lean_object* v_x_5085_, lean_object* v___y_5086_){
_start:
{
lean_object* v_res_5087_; 
v_res_5087_ = l_Std_Async_Async_concurrently___redArg___lam__3(v_y_5082_, v_prio_5083_, v___f_5084_, v_x_5085_);
return v_res_5087_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_concurrently___redArg(lean_object* v_x_5088_, lean_object* v_y_5089_, lean_object* v_prio_5090_){
_start:
{
lean_object* v___f_5092_; lean_object* v___f_5093_; lean_object* v___x_5094_; uint8_t v___x_5095_; lean_object* v___x_5096_; lean_object* v___x_5097_; lean_object* v___x_5098_; uint8_t v___x_5099_; lean_object* v___x_5100_; lean_object* v___x_5101_; lean_object* v___x_5102_; lean_object* v___x_5103_; 
v___f_5092_ = ((lean_object*)(l_Std_Async_EAsync_instMonadAsyncAsyncTaskError___closed__0));
lean_inc(v_prio_5090_);
v___f_5093_ = lean_alloc_closure((void*)(l_Std_Async_Async_concurrently___redArg___lam__3___boxed), 5, 3);
lean_closure_set(v___f_5093_, 0, v_y_5089_);
lean_closure_set(v___f_5093_, 1, v_prio_5090_);
lean_closure_set(v___f_5093_, 2, v___f_5092_);
v___x_5094_ = lean_unsigned_to_nat(0u);
v___x_5095_ = 0;
v___x_5096_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_toBaseAsync___boxed), 4, 3);
lean_closure_set(v___x_5096_, 0, lean_box(0));
lean_closure_set(v___x_5096_, 1, lean_box(0));
lean_closure_set(v___x_5096_, 2, v_x_5088_);
v___x_5097_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_toRawBaseIO___boxed), 3, 2);
lean_closure_set(v___x_5097_, 0, lean_box(0));
lean_closure_set(v___x_5097_, 1, v___x_5096_);
v___x_5098_ = lean_io_as_task(v___x_5097_, v_prio_5090_);
v___x_5099_ = 1;
v___x_5100_ = lean_task_bind(v___x_5098_, v___f_5092_, v___x_5094_, v___x_5099_);
v___x_5101_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5101_, 0, v___x_5100_);
v___x_5102_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5102_, 0, v___x_5101_);
v___x_5103_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5094_, v___x_5095_, v___x_5102_, v___f_5093_);
return v___x_5103_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_concurrently___redArg___boxed(lean_object* v_x_5104_, lean_object* v_y_5105_, lean_object* v_prio_5106_, lean_object* v___y_5107_){
_start:
{
lean_object* v_res_5108_; 
v_res_5108_ = l_Std_Async_Async_concurrently___redArg(v_x_5104_, v_y_5105_, v_prio_5106_);
return v_res_5108_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_concurrently(lean_object* v_00_u03b1_5109_, lean_object* v_00_u03b2_5110_, lean_object* v_x_5111_, lean_object* v_y_5112_, lean_object* v_prio_5113_){
_start:
{
lean_object* v___f_5115_; lean_object* v___f_5116_; lean_object* v___x_5117_; uint8_t v___x_5118_; lean_object* v___x_5119_; lean_object* v___x_5120_; lean_object* v___x_5121_; uint8_t v___x_5122_; lean_object* v___x_5123_; lean_object* v___x_5124_; lean_object* v___x_5125_; lean_object* v___x_5126_; 
v___f_5115_ = ((lean_object*)(l_Std_Async_EAsync_instMonadAsyncAsyncTaskError___closed__0));
lean_inc(v_prio_5113_);
v___f_5116_ = lean_alloc_closure((void*)(l_Std_Async_Async_concurrently___redArg___lam__3___boxed), 5, 3);
lean_closure_set(v___f_5116_, 0, v_y_5112_);
lean_closure_set(v___f_5116_, 1, v_prio_5113_);
lean_closure_set(v___f_5116_, 2, v___f_5115_);
v___x_5117_ = lean_unsigned_to_nat(0u);
v___x_5118_ = 0;
v___x_5119_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_toBaseAsync___boxed), 4, 3);
lean_closure_set(v___x_5119_, 0, lean_box(0));
lean_closure_set(v___x_5119_, 1, lean_box(0));
lean_closure_set(v___x_5119_, 2, v_x_5111_);
v___x_5120_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_toRawBaseIO___boxed), 3, 2);
lean_closure_set(v___x_5120_, 0, lean_box(0));
lean_closure_set(v___x_5120_, 1, v___x_5119_);
v___x_5121_ = lean_io_as_task(v___x_5120_, v_prio_5113_);
v___x_5122_ = 1;
v___x_5123_ = lean_task_bind(v___x_5121_, v___f_5115_, v___x_5117_, v___x_5122_);
v___x_5124_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5124_, 0, v___x_5123_);
v___x_5125_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5125_, 0, v___x_5124_);
v___x_5126_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5117_, v___x_5118_, v___x_5125_, v___f_5116_);
return v___x_5126_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_concurrently___boxed(lean_object* v_00_u03b1_5127_, lean_object* v_00_u03b2_5128_, lean_object* v_x_5129_, lean_object* v_y_5130_, lean_object* v_prio_5131_, lean_object* v___y_5132_){
_start:
{
lean_object* v_res_5133_; 
v_res_5133_ = l_Std_Async_Async_concurrently(v_00_u03b1_5127_, v_00_u03b2_5128_, v_x_5129_, v_y_5130_, v_prio_5131_);
return v_res_5133_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_race___redArg___lam__1(lean_object* v_x_5134_){
_start:
{
if (lean_obj_tag(v_x_5134_) == 0)
{
lean_object* v_a_5136_; lean_object* v___x_5138_; uint8_t v_isShared_5139_; uint8_t v_isSharedCheck_5144_; 
v_a_5136_ = lean_ctor_get(v_x_5134_, 0);
v_isSharedCheck_5144_ = !lean_is_exclusive(v_x_5134_);
if (v_isSharedCheck_5144_ == 0)
{
v___x_5138_ = v_x_5134_;
v_isShared_5139_ = v_isSharedCheck_5144_;
goto v_resetjp_5137_;
}
else
{
lean_inc(v_a_5136_);
lean_dec(v_x_5134_);
v___x_5138_ = lean_box(0);
v_isShared_5139_ = v_isSharedCheck_5144_;
goto v_resetjp_5137_;
}
v_resetjp_5137_:
{
lean_object* v___x_5141_; 
if (v_isShared_5139_ == 0)
{
v___x_5141_ = v___x_5138_;
goto v_reusejp_5140_;
}
else
{
lean_object* v_reuseFailAlloc_5143_; 
v_reuseFailAlloc_5143_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5143_, 0, v_a_5136_);
v___x_5141_ = v_reuseFailAlloc_5143_;
goto v_reusejp_5140_;
}
v_reusejp_5140_:
{
lean_object* v___x_5142_; 
v___x_5142_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5142_, 0, v___x_5141_);
return v___x_5142_;
}
}
}
else
{
lean_object* v_a_5145_; lean_object* v___x_5146_; 
v_a_5145_ = lean_ctor_get(v_x_5134_, 0);
lean_inc(v_a_5145_);
lean_dec_ref_known(v_x_5134_, 1);
v___x_5146_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5146_, 0, v_a_5145_);
return v___x_5146_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_race___redArg___lam__1___boxed(lean_object* v_x_5147_, lean_object* v___y_5148_){
_start:
{
lean_object* v_res_5149_; 
v_res_5149_ = l_Std_Async_Async_race___redArg___lam__1(v_x_5147_);
return v_res_5149_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_race___redArg___lam__0(lean_object* v_a_5150_){
_start:
{
lean_object* v___x_5151_; 
v___x_5151_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5151_, 0, v_a_5150_);
return v___x_5151_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_race___redArg___lam__3(lean_object* v_a_5152_, lean_object* v_value_5153_){
_start:
{
lean_object* v___x_5155_; 
v___x_5155_ = lean_io_promise_resolve(v_value_5153_, v_a_5152_);
return v___x_5155_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_race___redArg___lam__3___boxed(lean_object* v_a_5156_, lean_object* v_value_5157_, lean_object* v___y_5158_){
_start:
{
lean_object* v_res_5159_; 
v_res_5159_ = l_Std_Async_Async_race___redArg___lam__3(v_a_5156_, v_value_5157_);
lean_dec(v_a_5156_);
return v_res_5159_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_race___redArg___lam__2(lean_object* v_a_5160_, lean_object* v___f_5161_, lean_object* v___f_5162_, lean_object* v_x_5163_){
_start:
{
if (lean_obj_tag(v_x_5163_) == 0)
{
lean_object* v_a_5165_; lean_object* v___x_5167_; uint8_t v_isShared_5168_; uint8_t v_isSharedCheck_5173_; 
lean_dec_ref(v___f_5162_);
lean_dec_ref(v___f_5161_);
v_a_5165_ = lean_ctor_get(v_x_5163_, 0);
v_isSharedCheck_5173_ = !lean_is_exclusive(v_x_5163_);
if (v_isSharedCheck_5173_ == 0)
{
v___x_5167_ = v_x_5163_;
v_isShared_5168_ = v_isSharedCheck_5173_;
goto v_resetjp_5166_;
}
else
{
lean_inc(v_a_5165_);
lean_dec(v_x_5163_);
v___x_5167_ = lean_box(0);
v_isShared_5168_ = v_isSharedCheck_5173_;
goto v_resetjp_5166_;
}
v_resetjp_5166_:
{
lean_object* v___x_5170_; 
if (v_isShared_5168_ == 0)
{
v___x_5170_ = v___x_5167_;
goto v_reusejp_5169_;
}
else
{
lean_object* v_reuseFailAlloc_5172_; 
v_reuseFailAlloc_5172_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5172_, 0, v_a_5165_);
v___x_5170_ = v_reuseFailAlloc_5172_;
goto v_reusejp_5169_;
}
v_reusejp_5169_:
{
lean_object* v___x_5171_; 
v___x_5171_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5171_, 0, v___x_5170_);
return v___x_5171_;
}
}
}
else
{
lean_object* v___x_5174_; uint8_t v___x_5175_; lean_object* v___x_5176_; lean_object* v___x_5177_; lean_object* v___x_5178_; lean_object* v___x_5179_; 
lean_dec_ref_known(v_x_5163_, 1);
v___x_5174_ = lean_unsigned_to_nat(0u);
v___x_5175_ = 0;
v___x_5176_ = l_IO_Promise_result_x21___redArg(v_a_5160_);
v___x_5177_ = lean_task_map(v___f_5161_, v___x_5176_, v___x_5174_, v___x_5175_);
v___x_5178_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5178_, 0, v___x_5177_);
v___x_5179_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5174_, v___x_5175_, v___x_5178_, v___f_5162_);
return v___x_5179_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_race___redArg___lam__2___boxed(lean_object* v_a_5180_, lean_object* v___f_5181_, lean_object* v___f_5182_, lean_object* v_x_5183_, lean_object* v___y_5184_){
_start:
{
lean_object* v_res_5185_; 
v_res_5185_ = l_Std_Async_Async_race___redArg___lam__2(v_a_5180_, v___f_5181_, v___f_5182_, v_x_5183_);
lean_dec(v_a_5180_);
return v_res_5185_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_race___redArg___lam__4(lean_object* v_a_5186_, lean_object* v___x_5187_, lean_object* v___x_5188_, uint8_t v___x_5189_, lean_object* v___f_5190_, lean_object* v_x_5191_){
_start:
{
if (lean_obj_tag(v_x_5191_) == 0)
{
lean_object* v_a_5193_; lean_object* v___x_5195_; uint8_t v_isShared_5196_; uint8_t v_isSharedCheck_5201_; 
lean_dec_ref(v___f_5190_);
lean_dec(v___x_5188_);
lean_dec_ref(v___x_5187_);
lean_dec_ref(v_a_5186_);
v_a_5193_ = lean_ctor_get(v_x_5191_, 0);
v_isSharedCheck_5201_ = !lean_is_exclusive(v_x_5191_);
if (v_isSharedCheck_5201_ == 0)
{
v___x_5195_ = v_x_5191_;
v_isShared_5196_ = v_isSharedCheck_5201_;
goto v_resetjp_5194_;
}
else
{
lean_inc(v_a_5193_);
lean_dec(v_x_5191_);
v___x_5195_ = lean_box(0);
v_isShared_5196_ = v_isSharedCheck_5201_;
goto v_resetjp_5194_;
}
v_resetjp_5194_:
{
lean_object* v___x_5198_; 
if (v_isShared_5196_ == 0)
{
v___x_5198_ = v___x_5195_;
goto v_reusejp_5197_;
}
else
{
lean_object* v_reuseFailAlloc_5200_; 
v_reuseFailAlloc_5200_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5200_, 0, v_a_5193_);
v___x_5198_ = v_reuseFailAlloc_5200_;
goto v_reusejp_5197_;
}
v_reusejp_5197_:
{
lean_object* v___x_5199_; 
v___x_5199_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5199_, 0, v___x_5198_);
return v___x_5199_;
}
}
}
else
{
lean_object* v___x_5203_; uint8_t v_isShared_5204_; uint8_t v_isSharedCheck_5211_; 
v_isSharedCheck_5211_ = !lean_is_exclusive(v_x_5191_);
if (v_isSharedCheck_5211_ == 0)
{
lean_object* v_unused_5212_; 
v_unused_5212_ = lean_ctor_get(v_x_5191_, 0);
lean_dec(v_unused_5212_);
v___x_5203_ = v_x_5191_;
v_isShared_5204_ = v_isSharedCheck_5211_;
goto v_resetjp_5202_;
}
else
{
lean_dec(v_x_5191_);
v___x_5203_ = lean_box(0);
v_isShared_5204_ = v_isSharedCheck_5211_;
goto v_resetjp_5202_;
}
v_resetjp_5202_:
{
lean_object* v___x_5205_; lean_object* v___x_5207_; 
lean_inc(v___x_5188_);
v___x_5205_ = l_BaseIO_chainTask___redArg(v_a_5186_, v___x_5187_, v___x_5188_, v___x_5189_);
if (v_isShared_5204_ == 0)
{
lean_ctor_set(v___x_5203_, 0, v___x_5205_);
v___x_5207_ = v___x_5203_;
goto v_reusejp_5206_;
}
else
{
lean_object* v_reuseFailAlloc_5210_; 
v_reuseFailAlloc_5210_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5210_, 0, v___x_5205_);
v___x_5207_ = v_reuseFailAlloc_5210_;
goto v_reusejp_5206_;
}
v_reusejp_5206_:
{
lean_object* v___x_5208_; lean_object* v___x_5209_; 
v___x_5208_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5208_, 0, v___x_5207_);
v___x_5209_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5188_, v___x_5189_, v___x_5208_, v___f_5190_);
return v___x_5209_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_race___redArg___lam__4___boxed(lean_object* v_a_5213_, lean_object* v___x_5214_, lean_object* v___x_5215_, lean_object* v___x_5216_, lean_object* v___f_5217_, lean_object* v_x_5218_, lean_object* v___y_5219_){
_start:
{
uint8_t v___x_1453__boxed_5220_; lean_object* v_res_5221_; 
v___x_1453__boxed_5220_ = lean_unbox(v___x_5216_);
v_res_5221_ = l_Std_Async_Async_race___redArg___lam__4(v_a_5213_, v___x_5214_, v___x_5215_, v___x_1453__boxed_5220_, v___f_5217_, v_x_5218_);
return v_res_5221_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_race___redArg___lam__5(lean_object* v___f_5222_, lean_object* v___f_5223_, lean_object* v___f_5224_, lean_object* v_a_5225_, lean_object* v_x_5226_){
_start:
{
if (lean_obj_tag(v_x_5226_) == 0)
{
lean_object* v_a_5228_; lean_object* v___x_5230_; uint8_t v_isShared_5231_; uint8_t v_isSharedCheck_5236_; 
lean_dec_ref(v_a_5225_);
lean_dec_ref(v___f_5224_);
lean_dec_ref(v___f_5223_);
lean_dec(v___f_5222_);
v_a_5228_ = lean_ctor_get(v_x_5226_, 0);
v_isSharedCheck_5236_ = !lean_is_exclusive(v_x_5226_);
if (v_isSharedCheck_5236_ == 0)
{
v___x_5230_ = v_x_5226_;
v_isShared_5231_ = v_isSharedCheck_5236_;
goto v_resetjp_5229_;
}
else
{
lean_inc(v_a_5228_);
lean_dec(v_x_5226_);
v___x_5230_ = lean_box(0);
v_isShared_5231_ = v_isSharedCheck_5236_;
goto v_resetjp_5229_;
}
v_resetjp_5229_:
{
lean_object* v___x_5233_; 
if (v_isShared_5231_ == 0)
{
v___x_5233_ = v___x_5230_;
goto v_reusejp_5232_;
}
else
{
lean_object* v_reuseFailAlloc_5235_; 
v_reuseFailAlloc_5235_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5235_, 0, v_a_5228_);
v___x_5233_ = v_reuseFailAlloc_5235_;
goto v_reusejp_5232_;
}
v_reusejp_5232_:
{
lean_object* v___x_5234_; 
v___x_5234_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5234_, 0, v___x_5233_);
return v___x_5234_;
}
}
}
else
{
lean_object* v_a_5237_; lean_object* v___x_5239_; uint8_t v_isShared_5240_; uint8_t v_isSharedCheck_5253_; 
v_a_5237_ = lean_ctor_get(v_x_5226_, 0);
v_isSharedCheck_5253_ = !lean_is_exclusive(v_x_5226_);
if (v_isSharedCheck_5253_ == 0)
{
v___x_5239_ = v_x_5226_;
v_isShared_5240_ = v_isSharedCheck_5253_;
goto v_resetjp_5238_;
}
else
{
lean_inc(v_a_5237_);
lean_dec(v_x_5226_);
v___x_5239_ = lean_box(0);
v_isShared_5240_ = v_isSharedCheck_5253_;
goto v_resetjp_5238_;
}
v_resetjp_5238_:
{
lean_object* v___x_5241_; lean_object* v___x_5242_; lean_object* v___x_5243_; uint8_t v___x_5244_; lean_object* v___x_5245_; lean_object* v___f_5246_; lean_object* v___x_5247_; lean_object* v___x_5249_; 
v___x_5241_ = lean_alloc_closure((void*)(l_liftM), 5, 4);
lean_closure_set(v___x_5241_, 0, lean_box(0));
lean_closure_set(v___x_5241_, 1, lean_box(0));
lean_closure_set(v___x_5241_, 2, v___f_5222_);
lean_closure_set(v___x_5241_, 3, lean_box(0));
v___x_5242_ = lean_alloc_closure((void*)(l_Function_comp), 6, 5);
lean_closure_set(v___x_5242_, 0, lean_box(0));
lean_closure_set(v___x_5242_, 1, lean_box(0));
lean_closure_set(v___x_5242_, 2, lean_box(0));
lean_closure_set(v___x_5242_, 3, v___x_5241_);
lean_closure_set(v___x_5242_, 4, v___f_5223_);
v___x_5243_ = lean_unsigned_to_nat(0u);
v___x_5244_ = 0;
v___x_5245_ = lean_box(v___x_5244_);
lean_inc_ref(v___x_5242_);
v___f_5246_ = lean_alloc_closure((void*)(l_Std_Async_Async_race___redArg___lam__4___boxed), 7, 5);
lean_closure_set(v___f_5246_, 0, v_a_5237_);
lean_closure_set(v___f_5246_, 1, v___x_5242_);
lean_closure_set(v___f_5246_, 2, v___x_5243_);
lean_closure_set(v___f_5246_, 3, v___x_5245_);
lean_closure_set(v___f_5246_, 4, v___f_5224_);
v___x_5247_ = l_BaseIO_chainTask___redArg(v_a_5225_, v___x_5242_, v___x_5243_, v___x_5244_);
if (v_isShared_5240_ == 0)
{
lean_ctor_set(v___x_5239_, 0, v___x_5247_);
v___x_5249_ = v___x_5239_;
goto v_reusejp_5248_;
}
else
{
lean_object* v_reuseFailAlloc_5252_; 
v_reuseFailAlloc_5252_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5252_, 0, v___x_5247_);
v___x_5249_ = v_reuseFailAlloc_5252_;
goto v_reusejp_5248_;
}
v_reusejp_5248_:
{
lean_object* v___x_5250_; lean_object* v___x_5251_; 
v___x_5250_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5250_, 0, v___x_5249_);
v___x_5251_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5243_, v___x_5244_, v___x_5250_, v___f_5246_);
return v___x_5251_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_race___redArg___lam__5___boxed(lean_object* v___f_5254_, lean_object* v___f_5255_, lean_object* v___f_5256_, lean_object* v_a_5257_, lean_object* v_x_5258_, lean_object* v___y_5259_){
_start:
{
lean_object* v_res_5260_; 
v_res_5260_ = l_Std_Async_Async_race___redArg___lam__5(v___f_5254_, v___f_5255_, v___f_5256_, v_a_5257_, v_x_5258_);
return v_res_5260_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_race___redArg___lam__6(lean_object* v___f_5261_, lean_object* v___f_5262_, lean_object* v___f_5263_, lean_object* v_y_5264_, lean_object* v_prio_5265_, lean_object* v___f_5266_, lean_object* v_x_5267_){
_start:
{
if (lean_obj_tag(v_x_5267_) == 0)
{
lean_object* v_a_5269_; lean_object* v___x_5271_; uint8_t v_isShared_5272_; uint8_t v_isSharedCheck_5277_; 
lean_dec_ref(v___f_5266_);
lean_dec(v_prio_5265_);
lean_dec_ref(v_y_5264_);
lean_dec_ref(v___f_5263_);
lean_dec_ref(v___f_5262_);
lean_dec(v___f_5261_);
v_a_5269_ = lean_ctor_get(v_x_5267_, 0);
v_isSharedCheck_5277_ = !lean_is_exclusive(v_x_5267_);
if (v_isSharedCheck_5277_ == 0)
{
v___x_5271_ = v_x_5267_;
v_isShared_5272_ = v_isSharedCheck_5277_;
goto v_resetjp_5270_;
}
else
{
lean_inc(v_a_5269_);
lean_dec(v_x_5267_);
v___x_5271_ = lean_box(0);
v_isShared_5272_ = v_isSharedCheck_5277_;
goto v_resetjp_5270_;
}
v_resetjp_5270_:
{
lean_object* v___x_5274_; 
if (v_isShared_5272_ == 0)
{
v___x_5274_ = v___x_5271_;
goto v_reusejp_5273_;
}
else
{
lean_object* v_reuseFailAlloc_5276_; 
v_reuseFailAlloc_5276_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5276_, 0, v_a_5269_);
v___x_5274_ = v_reuseFailAlloc_5276_;
goto v_reusejp_5273_;
}
v_reusejp_5273_:
{
lean_object* v___x_5275_; 
v___x_5275_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5275_, 0, v___x_5274_);
return v___x_5275_;
}
}
}
else
{
lean_object* v_a_5278_; lean_object* v___x_5280_; uint8_t v_isShared_5281_; uint8_t v_isSharedCheck_5295_; 
v_a_5278_ = lean_ctor_get(v_x_5267_, 0);
v_isSharedCheck_5295_ = !lean_is_exclusive(v_x_5267_);
if (v_isSharedCheck_5295_ == 0)
{
v___x_5280_ = v_x_5267_;
v_isShared_5281_ = v_isSharedCheck_5295_;
goto v_resetjp_5279_;
}
else
{
lean_inc(v_a_5278_);
lean_dec(v_x_5267_);
v___x_5280_ = lean_box(0);
v_isShared_5281_ = v_isSharedCheck_5295_;
goto v_resetjp_5279_;
}
v_resetjp_5279_:
{
lean_object* v___f_5282_; lean_object* v___x_5283_; uint8_t v___x_5284_; lean_object* v___x_5285_; lean_object* v___x_5286_; lean_object* v___x_5287_; uint8_t v___x_5288_; lean_object* v___x_5289_; lean_object* v___x_5291_; 
v___f_5282_ = lean_alloc_closure((void*)(l_Std_Async_Async_race___redArg___lam__5___boxed), 6, 4);
lean_closure_set(v___f_5282_, 0, v___f_5261_);
lean_closure_set(v___f_5282_, 1, v___f_5262_);
lean_closure_set(v___f_5282_, 2, v___f_5263_);
lean_closure_set(v___f_5282_, 3, v_a_5278_);
v___x_5283_ = lean_unsigned_to_nat(0u);
v___x_5284_ = 0;
v___x_5285_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_toBaseAsync___boxed), 4, 3);
lean_closure_set(v___x_5285_, 0, lean_box(0));
lean_closure_set(v___x_5285_, 1, lean_box(0));
lean_closure_set(v___x_5285_, 2, v_y_5264_);
v___x_5286_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_toRawBaseIO___boxed), 3, 2);
lean_closure_set(v___x_5286_, 0, lean_box(0));
lean_closure_set(v___x_5286_, 1, v___x_5285_);
v___x_5287_ = lean_io_as_task(v___x_5286_, v_prio_5265_);
v___x_5288_ = 1;
v___x_5289_ = lean_task_bind(v___x_5287_, v___f_5266_, v___x_5283_, v___x_5288_);
if (v_isShared_5281_ == 0)
{
lean_ctor_set(v___x_5280_, 0, v___x_5289_);
v___x_5291_ = v___x_5280_;
goto v_reusejp_5290_;
}
else
{
lean_object* v_reuseFailAlloc_5294_; 
v_reuseFailAlloc_5294_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5294_, 0, v___x_5289_);
v___x_5291_ = v_reuseFailAlloc_5294_;
goto v_reusejp_5290_;
}
v_reusejp_5290_:
{
lean_object* v___x_5292_; lean_object* v___x_5293_; 
v___x_5292_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5292_, 0, v___x_5291_);
v___x_5293_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5283_, v___x_5284_, v___x_5292_, v___f_5282_);
return v___x_5293_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_race___redArg___lam__6___boxed(lean_object* v___f_5296_, lean_object* v___f_5297_, lean_object* v___f_5298_, lean_object* v_y_5299_, lean_object* v_prio_5300_, lean_object* v___f_5301_, lean_object* v_x_5302_, lean_object* v___y_5303_){
_start:
{
lean_object* v_res_5304_; 
v_res_5304_ = l_Std_Async_Async_race___redArg___lam__6(v___f_5296_, v___f_5297_, v___f_5298_, v_y_5299_, v_prio_5300_, v___f_5301_, v_x_5302_);
return v_res_5304_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_race___redArg___lam__7(lean_object* v___f_5305_, lean_object* v___f_5306_, lean_object* v___f_5307_, lean_object* v_y_5308_, lean_object* v_prio_5309_, lean_object* v___f_5310_, lean_object* v_x_5311_, lean_object* v___f_5312_, lean_object* v_x_5313_){
_start:
{
if (lean_obj_tag(v_x_5313_) == 0)
{
lean_object* v_a_5315_; lean_object* v___x_5317_; uint8_t v_isShared_5318_; uint8_t v_isSharedCheck_5323_; 
lean_dec_ref(v___f_5312_);
lean_dec_ref(v_x_5311_);
lean_dec_ref(v___f_5310_);
lean_dec(v_prio_5309_);
lean_dec_ref(v_y_5308_);
lean_dec(v___f_5307_);
lean_dec_ref(v___f_5306_);
lean_dec_ref(v___f_5305_);
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
lean_object* v_a_5324_; lean_object* v___x_5326_; uint8_t v_isShared_5327_; uint8_t v_isSharedCheck_5343_; 
v_a_5324_ = lean_ctor_get(v_x_5313_, 0);
v_isSharedCheck_5343_ = !lean_is_exclusive(v_x_5313_);
if (v_isSharedCheck_5343_ == 0)
{
v___x_5326_ = v_x_5313_;
v_isShared_5327_ = v_isSharedCheck_5343_;
goto v_resetjp_5325_;
}
else
{
lean_inc(v_a_5324_);
lean_dec(v_x_5313_);
v___x_5326_ = lean_box(0);
v_isShared_5327_ = v_isSharedCheck_5343_;
goto v_resetjp_5325_;
}
v_resetjp_5325_:
{
lean_object* v___f_5328_; lean_object* v___f_5329_; lean_object* v___f_5330_; lean_object* v___x_5331_; uint8_t v___x_5332_; lean_object* v___x_5333_; lean_object* v___x_5334_; lean_object* v___x_5335_; uint8_t v___x_5336_; lean_object* v___x_5337_; lean_object* v___x_5339_; 
lean_inc(v_a_5324_);
v___f_5328_ = lean_alloc_closure((void*)(l_Std_Async_Async_race___redArg___lam__3___boxed), 3, 1);
lean_closure_set(v___f_5328_, 0, v_a_5324_);
v___f_5329_ = lean_alloc_closure((void*)(l_Std_Async_Async_race___redArg___lam__2___boxed), 5, 3);
lean_closure_set(v___f_5329_, 0, v_a_5324_);
lean_closure_set(v___f_5329_, 1, v___f_5305_);
lean_closure_set(v___f_5329_, 2, v___f_5306_);
lean_inc(v_prio_5309_);
v___f_5330_ = lean_alloc_closure((void*)(l_Std_Async_Async_race___redArg___lam__6___boxed), 8, 6);
lean_closure_set(v___f_5330_, 0, v___f_5307_);
lean_closure_set(v___f_5330_, 1, v___f_5328_);
lean_closure_set(v___f_5330_, 2, v___f_5329_);
lean_closure_set(v___f_5330_, 3, v_y_5308_);
lean_closure_set(v___f_5330_, 4, v_prio_5309_);
lean_closure_set(v___f_5330_, 5, v___f_5310_);
v___x_5331_ = lean_unsigned_to_nat(0u);
v___x_5332_ = 0;
v___x_5333_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_toBaseAsync___boxed), 4, 3);
lean_closure_set(v___x_5333_, 0, lean_box(0));
lean_closure_set(v___x_5333_, 1, lean_box(0));
lean_closure_set(v___x_5333_, 2, v_x_5311_);
v___x_5334_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_toRawBaseIO___boxed), 3, 2);
lean_closure_set(v___x_5334_, 0, lean_box(0));
lean_closure_set(v___x_5334_, 1, v___x_5333_);
v___x_5335_ = lean_io_as_task(v___x_5334_, v_prio_5309_);
v___x_5336_ = 1;
v___x_5337_ = lean_task_bind(v___x_5335_, v___f_5312_, v___x_5331_, v___x_5336_);
if (v_isShared_5327_ == 0)
{
lean_ctor_set(v___x_5326_, 0, v___x_5337_);
v___x_5339_ = v___x_5326_;
goto v_reusejp_5338_;
}
else
{
lean_object* v_reuseFailAlloc_5342_; 
v_reuseFailAlloc_5342_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5342_, 0, v___x_5337_);
v___x_5339_ = v_reuseFailAlloc_5342_;
goto v_reusejp_5338_;
}
v_reusejp_5338_:
{
lean_object* v___x_5340_; lean_object* v___x_5341_; 
v___x_5340_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5340_, 0, v___x_5339_);
v___x_5341_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5331_, v___x_5332_, v___x_5340_, v___f_5330_);
return v___x_5341_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_race___redArg___lam__7___boxed(lean_object* v___f_5344_, lean_object* v___f_5345_, lean_object* v___f_5346_, lean_object* v_y_5347_, lean_object* v_prio_5348_, lean_object* v___f_5349_, lean_object* v_x_5350_, lean_object* v___f_5351_, lean_object* v_x_5352_, lean_object* v___y_5353_){
_start:
{
lean_object* v_res_5354_; 
v_res_5354_ = l_Std_Async_Async_race___redArg___lam__7(v___f_5344_, v___f_5345_, v___f_5346_, v_y_5347_, v_prio_5348_, v___f_5349_, v_x_5350_, v___f_5351_, v_x_5352_);
return v_res_5354_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_race___redArg(lean_object* v_x_5357_, lean_object* v_y_5358_, lean_object* v_prio_5359_){
_start:
{
lean_object* v___f_5361_; lean_object* v___f_5362_; lean_object* v___f_5363_; lean_object* v___f_5364_; lean_object* v___f_5365_; lean_object* v___x_5366_; uint8_t v___x_5367_; lean_object* v___x_5368_; lean_object* v___x_5369_; lean_object* v___x_5370_; lean_object* v___x_5371_; 
v___f_5361_ = ((lean_object*)(l_Std_Async_EAsync_instMonadAsyncAsyncTaskError___closed__0));
v___f_5362_ = ((lean_object*)(l_Std_Async_Async_race___redArg___closed__0));
v___f_5363_ = ((lean_object*)(l_Std_Async_Async_race___redArg___closed__1));
v___f_5364_ = ((lean_object*)(l_Std_Async_BaseAsync_race___redArg___closed__0));
v___f_5365_ = lean_alloc_closure((void*)(l_Std_Async_Async_race___redArg___lam__7___boxed), 10, 8);
lean_closure_set(v___f_5365_, 0, v___f_5363_);
lean_closure_set(v___f_5365_, 1, v___f_5362_);
lean_closure_set(v___f_5365_, 2, v___f_5364_);
lean_closure_set(v___f_5365_, 3, v_y_5358_);
lean_closure_set(v___f_5365_, 4, v_prio_5359_);
lean_closure_set(v___f_5365_, 5, v___f_5361_);
lean_closure_set(v___f_5365_, 6, v_x_5357_);
lean_closure_set(v___f_5365_, 7, v___f_5361_);
v___x_5366_ = lean_unsigned_to_nat(0u);
v___x_5367_ = 0;
v___x_5368_ = lean_io_promise_new();
v___x_5369_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5369_, 0, v___x_5368_);
v___x_5370_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5370_, 0, v___x_5369_);
v___x_5371_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5366_, v___x_5367_, v___x_5370_, v___f_5365_);
return v___x_5371_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_race___redArg___boxed(lean_object* v_x_5372_, lean_object* v_y_5373_, lean_object* v_prio_5374_, lean_object* v___y_5375_){
_start:
{
lean_object* v_res_5376_; 
v_res_5376_ = l_Std_Async_Async_race___redArg(v_x_5372_, v_y_5373_, v_prio_5374_);
return v_res_5376_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_race(lean_object* v_00_u03b1_5377_, lean_object* v_inst_5378_, lean_object* v_x_5379_, lean_object* v_y_5380_, lean_object* v_prio_5381_){
_start:
{
lean_object* v___f_5383_; lean_object* v___f_5384_; lean_object* v___f_5385_; lean_object* v___f_5386_; lean_object* v___f_5387_; lean_object* v___x_5388_; uint8_t v___x_5389_; lean_object* v___x_5390_; lean_object* v___x_5391_; lean_object* v___x_5392_; lean_object* v___x_5393_; 
v___f_5383_ = ((lean_object*)(l_Std_Async_EAsync_instMonadAsyncAsyncTaskError___closed__0));
v___f_5384_ = ((lean_object*)(l_Std_Async_Async_race___redArg___closed__0));
v___f_5385_ = ((lean_object*)(l_Std_Async_Async_race___redArg___closed__1));
v___f_5386_ = ((lean_object*)(l_Std_Async_BaseAsync_race___redArg___closed__0));
v___f_5387_ = lean_alloc_closure((void*)(l_Std_Async_Async_race___redArg___lam__7___boxed), 10, 8);
lean_closure_set(v___f_5387_, 0, v___f_5385_);
lean_closure_set(v___f_5387_, 1, v___f_5384_);
lean_closure_set(v___f_5387_, 2, v___f_5386_);
lean_closure_set(v___f_5387_, 3, v_y_5380_);
lean_closure_set(v___f_5387_, 4, v_prio_5381_);
lean_closure_set(v___f_5387_, 5, v___f_5383_);
lean_closure_set(v___f_5387_, 6, v_x_5379_);
lean_closure_set(v___f_5387_, 7, v___f_5383_);
v___x_5388_ = lean_unsigned_to_nat(0u);
v___x_5389_ = 0;
v___x_5390_ = lean_io_promise_new();
v___x_5391_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5391_, 0, v___x_5390_);
v___x_5392_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5392_, 0, v___x_5391_);
v___x_5393_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5388_, v___x_5389_, v___x_5392_, v___f_5387_);
return v___x_5393_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_race___boxed(lean_object* v_00_u03b1_5394_, lean_object* v_inst_5395_, lean_object* v_x_5396_, lean_object* v_y_5397_, lean_object* v_prio_5398_, lean_object* v___y_5399_){
_start:
{
lean_object* v_res_5400_; 
v_res_5400_ = l_Std_Async_Async_race(v_00_u03b1_5394_, v_inst_5395_, v_x_5396_, v_y_5397_, v_prio_5398_);
lean_dec(v_inst_5395_);
return v_res_5400_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_concurrentlyAll___redArg___lam__1(lean_object* v_prio_5401_, lean_object* v___f_5402_, lean_object* v_x_5403_){
_start:
{
lean_object* v___x_5405_; lean_object* v___x_5406_; lean_object* v___x_5407_; lean_object* v___x_5408_; uint8_t v___x_5409_; lean_object* v___x_5410_; lean_object* v___x_5411_; lean_object* v___x_5412_; 
v___x_5405_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_toBaseAsync___boxed), 4, 3);
lean_closure_set(v___x_5405_, 0, lean_box(0));
lean_closure_set(v___x_5405_, 1, lean_box(0));
lean_closure_set(v___x_5405_, 2, v_x_5403_);
v___x_5406_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_toRawBaseIO___boxed), 3, 2);
lean_closure_set(v___x_5406_, 0, lean_box(0));
lean_closure_set(v___x_5406_, 1, v___x_5405_);
v___x_5407_ = lean_io_as_task(v___x_5406_, v_prio_5401_);
v___x_5408_ = lean_unsigned_to_nat(0u);
v___x_5409_ = 1;
v___x_5410_ = lean_task_bind(v___x_5407_, v___f_5402_, v___x_5408_, v___x_5409_);
v___x_5411_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5411_, 0, v___x_5410_);
v___x_5412_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5412_, 0, v___x_5411_);
return v___x_5412_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_concurrentlyAll___redArg___lam__1___boxed(lean_object* v_prio_5413_, lean_object* v___f_5414_, lean_object* v_x_5415_, lean_object* v___y_5416_){
_start:
{
lean_object* v_res_5417_; 
v_res_5417_ = l_Std_Async_Async_concurrentlyAll___redArg___lam__1(v_prio_5413_, v___f_5414_, v_x_5415_);
return v_res_5417_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_concurrentlyAll___redArg___lam__0(lean_object* v___y_5418_){
_start:
{
lean_object* v___x_5420_; 
v___x_5420_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5420_, 0, v___y_5418_);
return v___x_5420_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_concurrentlyAll___redArg___lam__0___boxed(lean_object* v___y_5421_, lean_object* v___y_5422_){
_start:
{
lean_object* v_res_5423_; 
v_res_5423_ = l_Std_Async_Async_concurrentlyAll___redArg___lam__0(v___y_5421_);
return v_res_5423_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_concurrentlyAll___redArg___lam__2(lean_object* v___x_5424_, lean_object* v___f_5425_, lean_object* v_x_5426_){
_start:
{
if (lean_obj_tag(v_x_5426_) == 0)
{
lean_object* v_a_5428_; lean_object* v___x_5430_; uint8_t v_isShared_5431_; uint8_t v_isSharedCheck_5436_; 
lean_dec_ref(v___f_5425_);
lean_dec_ref(v___x_5424_);
v_a_5428_ = lean_ctor_get(v_x_5426_, 0);
v_isSharedCheck_5436_ = !lean_is_exclusive(v_x_5426_);
if (v_isSharedCheck_5436_ == 0)
{
v___x_5430_ = v_x_5426_;
v_isShared_5431_ = v_isSharedCheck_5436_;
goto v_resetjp_5429_;
}
else
{
lean_inc(v_a_5428_);
lean_dec(v_x_5426_);
v___x_5430_ = lean_box(0);
v_isShared_5431_ = v_isSharedCheck_5436_;
goto v_resetjp_5429_;
}
v_resetjp_5429_:
{
lean_object* v___x_5433_; 
if (v_isShared_5431_ == 0)
{
v___x_5433_ = v___x_5430_;
goto v_reusejp_5432_;
}
else
{
lean_object* v_reuseFailAlloc_5435_; 
v_reuseFailAlloc_5435_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5435_, 0, v_a_5428_);
v___x_5433_ = v_reuseFailAlloc_5435_;
goto v_reusejp_5432_;
}
v_reusejp_5432_:
{
lean_object* v___x_5434_; 
v___x_5434_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5434_, 0, v___x_5433_);
return v___x_5434_;
}
}
}
else
{
lean_object* v_a_5437_; size_t v_sz_5438_; size_t v___x_5439_; lean_object* v___x_298__overap_5440_; lean_object* v___x_5441_; 
v_a_5437_ = lean_ctor_get(v_x_5426_, 0);
lean_inc(v_a_5437_);
lean_dec_ref_known(v_x_5426_, 1);
v_sz_5438_ = lean_array_size(v_a_5437_);
v___x_5439_ = ((size_t)0ULL);
v___x_298__overap_5440_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_5424_, v___f_5425_, v_sz_5438_, v___x_5439_, v_a_5437_);
v___x_5441_ = lean_apply_1(v___x_298__overap_5440_, lean_box(0));
return v___x_5441_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_concurrentlyAll___redArg___lam__2___boxed(lean_object* v___x_5442_, lean_object* v___f_5443_, lean_object* v_x_5444_, lean_object* v___y_5445_){
_start:
{
lean_object* v_res_5446_; 
v_res_5446_ = l_Std_Async_Async_concurrentlyAll___redArg___lam__2(v___x_5442_, v___f_5443_, v_x_5444_);
return v_res_5446_;
}
}
static lean_object* _init_l_Std_Async_Async_concurrentlyAll___redArg___closed__1(void){
_start:
{
lean_object* v___f_5448_; lean_object* v___x_5449_; lean_object* v___f_5450_; 
v___f_5448_ = ((lean_object*)(l_Std_Async_Async_concurrentlyAll___redArg___closed__0));
v___x_5449_ = lean_obj_once(&l_Std_Async_EAsync_instMonad___closed__0, &l_Std_Async_EAsync_instMonad___closed__0_once, _init_l_Std_Async_EAsync_instMonad___closed__0);
v___f_5450_ = lean_alloc_closure((void*)(l_Std_Async_Async_concurrentlyAll___redArg___lam__2___boxed), 4, 2);
lean_closure_set(v___f_5450_, 0, v___x_5449_);
lean_closure_set(v___f_5450_, 1, v___f_5448_);
return v___f_5450_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_concurrentlyAll___redArg(lean_object* v_xs_5451_, lean_object* v_prio_5452_){
_start:
{
lean_object* v___f_5454_; lean_object* v___f_5455_; lean_object* v___x_5456_; lean_object* v___f_5457_; lean_object* v___x_5458_; uint8_t v___x_5459_; size_t v_sz_5460_; size_t v___x_5461_; lean_object* v___x_221__overap_5462_; lean_object* v___x_5463_; lean_object* v___x_5464_; 
v___f_5454_ = ((lean_object*)(l_Std_Async_EAsync_instMonadAsyncAsyncTaskError___closed__0));
v___f_5455_ = lean_alloc_closure((void*)(l_Std_Async_Async_concurrentlyAll___redArg___lam__1___boxed), 4, 2);
lean_closure_set(v___f_5455_, 0, v_prio_5452_);
lean_closure_set(v___f_5455_, 1, v___f_5454_);
v___x_5456_ = lean_obj_once(&l_Std_Async_EAsync_instMonad___closed__0, &l_Std_Async_EAsync_instMonad___closed__0_once, _init_l_Std_Async_EAsync_instMonad___closed__0);
v___f_5457_ = lean_obj_once(&l_Std_Async_Async_concurrentlyAll___redArg___closed__1, &l_Std_Async_Async_concurrentlyAll___redArg___closed__1_once, _init_l_Std_Async_Async_concurrentlyAll___redArg___closed__1);
v___x_5458_ = lean_unsigned_to_nat(0u);
v___x_5459_ = 0;
v_sz_5460_ = lean_array_size(v_xs_5451_);
v___x_5461_ = ((size_t)0ULL);
v___x_221__overap_5462_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_5456_, v___f_5455_, v_sz_5460_, v___x_5461_, v_xs_5451_);
v___x_5463_ = lean_apply_1(v___x_221__overap_5462_, lean_box(0));
v___x_5464_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5458_, v___x_5459_, v___x_5463_, v___f_5457_);
return v___x_5464_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_concurrentlyAll___redArg___boxed(lean_object* v_xs_5465_, lean_object* v_prio_5466_, lean_object* v___y_5467_){
_start:
{
lean_object* v_res_5468_; 
v_res_5468_ = l_Std_Async_Async_concurrentlyAll___redArg(v_xs_5465_, v_prio_5466_);
return v_res_5468_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_concurrentlyAll(lean_object* v_00_u03b1_5469_, lean_object* v_xs_5470_, lean_object* v_prio_5471_){
_start:
{
lean_object* v___f_5473_; lean_object* v___f_5474_; lean_object* v___x_5475_; lean_object* v___f_5476_; lean_object* v___x_5477_; uint8_t v___x_5478_; size_t v_sz_5479_; size_t v___x_5480_; lean_object* v___x_263__overap_5481_; lean_object* v___x_5482_; lean_object* v___x_5483_; 
v___f_5473_ = ((lean_object*)(l_Std_Async_EAsync_instMonadAsyncAsyncTaskError___closed__0));
v___f_5474_ = lean_alloc_closure((void*)(l_Std_Async_Async_concurrentlyAll___redArg___lam__1___boxed), 4, 2);
lean_closure_set(v___f_5474_, 0, v_prio_5471_);
lean_closure_set(v___f_5474_, 1, v___f_5473_);
v___x_5475_ = lean_obj_once(&l_Std_Async_EAsync_instMonad___closed__0, &l_Std_Async_EAsync_instMonad___closed__0_once, _init_l_Std_Async_EAsync_instMonad___closed__0);
v___f_5476_ = lean_obj_once(&l_Std_Async_Async_concurrentlyAll___redArg___closed__1, &l_Std_Async_Async_concurrentlyAll___redArg___closed__1_once, _init_l_Std_Async_Async_concurrentlyAll___redArg___closed__1);
v___x_5477_ = lean_unsigned_to_nat(0u);
v___x_5478_ = 0;
v_sz_5479_ = lean_array_size(v_xs_5470_);
v___x_5480_ = ((size_t)0ULL);
v___x_263__overap_5481_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_5475_, v___f_5474_, v_sz_5479_, v___x_5480_, v_xs_5470_);
v___x_5482_ = lean_apply_1(v___x_263__overap_5481_, lean_box(0));
v___x_5483_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5477_, v___x_5478_, v___x_5482_, v___f_5476_);
return v___x_5483_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_concurrentlyAll___boxed(lean_object* v_00_u03b1_5484_, lean_object* v_xs_5485_, lean_object* v_prio_5486_, lean_object* v___y_5487_){
_start:
{
lean_object* v_res_5488_; 
v_res_5488_ = l_Std_Async_Async_concurrentlyAll(v_00_u03b1_5484_, v_xs_5485_, v_prio_5486_);
return v_res_5488_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_raceAll___redArg___lam__4(lean_object* v___f_5489_, lean_object* v___f_5490_, lean_object* v_x_5491_){
_start:
{
if (lean_obj_tag(v_x_5491_) == 0)
{
lean_object* v_a_5493_; lean_object* v___x_5495_; uint8_t v_isShared_5496_; uint8_t v_isSharedCheck_5501_; 
lean_dec_ref(v___f_5490_);
lean_dec(v___f_5489_);
v_a_5493_ = lean_ctor_get(v_x_5491_, 0);
v_isSharedCheck_5501_ = !lean_is_exclusive(v_x_5491_);
if (v_isSharedCheck_5501_ == 0)
{
v___x_5495_ = v_x_5491_;
v_isShared_5496_ = v_isSharedCheck_5501_;
goto v_resetjp_5494_;
}
else
{
lean_inc(v_a_5493_);
lean_dec(v_x_5491_);
v___x_5495_ = lean_box(0);
v_isShared_5496_ = v_isSharedCheck_5501_;
goto v_resetjp_5494_;
}
v_resetjp_5494_:
{
lean_object* v___x_5498_; 
if (v_isShared_5496_ == 0)
{
v___x_5498_ = v___x_5495_;
goto v_reusejp_5497_;
}
else
{
lean_object* v_reuseFailAlloc_5500_; 
v_reuseFailAlloc_5500_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5500_, 0, v_a_5493_);
v___x_5498_ = v_reuseFailAlloc_5500_;
goto v_reusejp_5497_;
}
v_reusejp_5497_:
{
lean_object* v___x_5499_; 
v___x_5499_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5499_, 0, v___x_5498_);
return v___x_5499_;
}
}
}
else
{
lean_object* v_a_5502_; lean_object* v___x_5504_; uint8_t v_isShared_5505_; uint8_t v_isSharedCheck_5515_; 
v_a_5502_ = lean_ctor_get(v_x_5491_, 0);
v_isSharedCheck_5515_ = !lean_is_exclusive(v_x_5491_);
if (v_isSharedCheck_5515_ == 0)
{
v___x_5504_ = v_x_5491_;
v_isShared_5505_ = v_isSharedCheck_5515_;
goto v_resetjp_5503_;
}
else
{
lean_inc(v_a_5502_);
lean_dec(v_x_5491_);
v___x_5504_ = lean_box(0);
v_isShared_5505_ = v_isSharedCheck_5515_;
goto v_resetjp_5503_;
}
v_resetjp_5503_:
{
lean_object* v___x_5506_; lean_object* v___x_5507_; lean_object* v___x_5508_; uint8_t v___x_5509_; lean_object* v___x_5510_; lean_object* v___x_5512_; 
v___x_5506_ = lean_alloc_closure((void*)(l_liftM), 5, 4);
lean_closure_set(v___x_5506_, 0, lean_box(0));
lean_closure_set(v___x_5506_, 1, lean_box(0));
lean_closure_set(v___x_5506_, 2, v___f_5489_);
lean_closure_set(v___x_5506_, 3, lean_box(0));
v___x_5507_ = lean_alloc_closure((void*)(l_Function_comp), 6, 5);
lean_closure_set(v___x_5507_, 0, lean_box(0));
lean_closure_set(v___x_5507_, 1, lean_box(0));
lean_closure_set(v___x_5507_, 2, lean_box(0));
lean_closure_set(v___x_5507_, 3, v___x_5506_);
lean_closure_set(v___x_5507_, 4, v___f_5490_);
v___x_5508_ = lean_unsigned_to_nat(0u);
v___x_5509_ = 0;
v___x_5510_ = l_BaseIO_chainTask___redArg(v_a_5502_, v___x_5507_, v___x_5508_, v___x_5509_);
if (v_isShared_5505_ == 0)
{
lean_ctor_set(v___x_5504_, 0, v___x_5510_);
v___x_5512_ = v___x_5504_;
goto v_reusejp_5511_;
}
else
{
lean_object* v_reuseFailAlloc_5514_; 
v_reuseFailAlloc_5514_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5514_, 0, v___x_5510_);
v___x_5512_ = v_reuseFailAlloc_5514_;
goto v_reusejp_5511_;
}
v_reusejp_5511_:
{
lean_object* v___x_5513_; 
v___x_5513_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5513_, 0, v___x_5512_);
return v___x_5513_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_raceAll___redArg___lam__4___boxed(lean_object* v___f_5516_, lean_object* v___f_5517_, lean_object* v_x_5518_, lean_object* v___y_5519_){
_start:
{
lean_object* v_res_5520_; 
v_res_5520_ = l_Std_Async_Async_raceAll___redArg___lam__4(v___f_5516_, v___f_5517_, v_x_5518_);
return v_res_5520_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_raceAll___redArg___lam__0(lean_object* v_prio_5521_, lean_object* v___f_5522_, lean_object* v___f_5523_, lean_object* v_x_5524_){
_start:
{
lean_object* v___x_5526_; uint8_t v___x_5527_; lean_object* v___x_5528_; lean_object* v___x_5529_; lean_object* v___x_5530_; uint8_t v___x_5531_; lean_object* v___x_5532_; lean_object* v___x_5533_; lean_object* v___x_5534_; lean_object* v___x_5535_; 
v___x_5526_ = lean_unsigned_to_nat(0u);
v___x_5527_ = 0;
v___x_5528_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_toBaseAsync___boxed), 4, 3);
lean_closure_set(v___x_5528_, 0, lean_box(0));
lean_closure_set(v___x_5528_, 1, lean_box(0));
lean_closure_set(v___x_5528_, 2, v_x_5524_);
v___x_5529_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_toRawBaseIO___boxed), 3, 2);
lean_closure_set(v___x_5529_, 0, lean_box(0));
lean_closure_set(v___x_5529_, 1, v___x_5528_);
v___x_5530_ = lean_io_as_task(v___x_5529_, v_prio_5521_);
v___x_5531_ = 1;
v___x_5532_ = lean_task_bind(v___x_5530_, v___f_5522_, v___x_5526_, v___x_5531_);
v___x_5533_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5533_, 0, v___x_5532_);
v___x_5534_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5534_, 0, v___x_5533_);
v___x_5535_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5526_, v___x_5527_, v___x_5534_, v___f_5523_);
return v___x_5535_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_raceAll___redArg___lam__0___boxed(lean_object* v_prio_5536_, lean_object* v___f_5537_, lean_object* v___f_5538_, lean_object* v_x_5539_, lean_object* v___y_5540_){
_start:
{
lean_object* v_res_5541_; 
v_res_5541_ = l_Std_Async_Async_raceAll___redArg___lam__0(v_prio_5536_, v___f_5537_, v___f_5538_, v_x_5539_);
return v_res_5541_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_raceAll___redArg___lam__2(lean_object* v___f_5542_, lean_object* v_prio_5543_, lean_object* v___f_5544_, lean_object* v___f_5545_, lean_object* v___f_5546_, lean_object* v_inst_5547_, lean_object* v_xs_5548_, lean_object* v_x_5549_){
_start:
{
if (lean_obj_tag(v_x_5549_) == 0)
{
lean_object* v_a_5551_; lean_object* v___x_5553_; uint8_t v_isShared_5554_; uint8_t v_isSharedCheck_5559_; 
lean_dec(v_xs_5548_);
lean_dec_ref(v_inst_5547_);
lean_dec_ref(v___f_5546_);
lean_dec_ref(v___f_5545_);
lean_dec_ref(v___f_5544_);
lean_dec(v_prio_5543_);
lean_dec(v___f_5542_);
v_a_5551_ = lean_ctor_get(v_x_5549_, 0);
v_isSharedCheck_5559_ = !lean_is_exclusive(v_x_5549_);
if (v_isSharedCheck_5559_ == 0)
{
v___x_5553_ = v_x_5549_;
v_isShared_5554_ = v_isSharedCheck_5559_;
goto v_resetjp_5552_;
}
else
{
lean_inc(v_a_5551_);
lean_dec(v_x_5549_);
v___x_5553_ = lean_box(0);
v_isShared_5554_ = v_isSharedCheck_5559_;
goto v_resetjp_5552_;
}
v_resetjp_5552_:
{
lean_object* v___x_5556_; 
if (v_isShared_5554_ == 0)
{
v___x_5556_ = v___x_5553_;
goto v_reusejp_5555_;
}
else
{
lean_object* v_reuseFailAlloc_5558_; 
v_reuseFailAlloc_5558_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5558_, 0, v_a_5551_);
v___x_5556_ = v_reuseFailAlloc_5558_;
goto v_reusejp_5555_;
}
v_reusejp_5555_:
{
lean_object* v___x_5557_; 
v___x_5557_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5557_, 0, v___x_5556_);
return v___x_5557_;
}
}
}
else
{
lean_object* v_a_5560_; lean_object* v___f_5561_; lean_object* v___f_5562_; lean_object* v___f_5563_; lean_object* v___f_5564_; lean_object* v___x_5565_; uint8_t v___x_5566_; lean_object* v___x_5567_; lean_object* v___x_5568_; 
v_a_5560_ = lean_ctor_get(v_x_5549_, 0);
lean_inc_n(v_a_5560_, 2);
lean_dec_ref_known(v_x_5549_, 1);
v___f_5561_ = lean_alloc_closure((void*)(l_Std_Async_Async_race___redArg___lam__3___boxed), 3, 1);
lean_closure_set(v___f_5561_, 0, v_a_5560_);
v___f_5562_ = lean_alloc_closure((void*)(l_Std_Async_Async_raceAll___redArg___lam__4___boxed), 4, 2);
lean_closure_set(v___f_5562_, 0, v___f_5542_);
lean_closure_set(v___f_5562_, 1, v___f_5561_);
v___f_5563_ = lean_alloc_closure((void*)(l_Std_Async_Async_raceAll___redArg___lam__0___boxed), 5, 3);
lean_closure_set(v___f_5563_, 0, v_prio_5543_);
lean_closure_set(v___f_5563_, 1, v___f_5544_);
lean_closure_set(v___f_5563_, 2, v___f_5562_);
v___f_5564_ = lean_alloc_closure((void*)(l_Std_Async_Async_race___redArg___lam__2___boxed), 5, 3);
lean_closure_set(v___f_5564_, 0, v_a_5560_);
lean_closure_set(v___f_5564_, 1, v___f_5545_);
lean_closure_set(v___f_5564_, 2, v___f_5546_);
v___x_5565_ = lean_unsigned_to_nat(0u);
v___x_5566_ = 0;
v___x_5567_ = lean_apply_3(v_inst_5547_, v_xs_5548_, v___f_5563_, lean_box(0));
v___x_5568_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5565_, v___x_5566_, v___x_5567_, v___f_5564_);
return v___x_5568_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_raceAll___redArg___lam__2___boxed(lean_object* v___f_5569_, lean_object* v_prio_5570_, lean_object* v___f_5571_, lean_object* v___f_5572_, lean_object* v___f_5573_, lean_object* v_inst_5574_, lean_object* v_xs_5575_, lean_object* v_x_5576_, lean_object* v___y_5577_){
_start:
{
lean_object* v_res_5578_; 
v_res_5578_ = l_Std_Async_Async_raceAll___redArg___lam__2(v___f_5569_, v_prio_5570_, v___f_5571_, v___f_5572_, v___f_5573_, v_inst_5574_, v_xs_5575_, v_x_5576_);
return v_res_5578_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_raceAll___redArg(lean_object* v_inst_5579_, lean_object* v_xs_5580_, lean_object* v_prio_5581_){
_start:
{
lean_object* v___f_5583_; lean_object* v___f_5584_; lean_object* v___f_5585_; lean_object* v___f_5586_; lean_object* v___f_5587_; lean_object* v___x_5588_; uint8_t v___x_5589_; lean_object* v___x_5590_; lean_object* v___x_5591_; lean_object* v___x_5592_; lean_object* v___x_5593_; 
v___f_5583_ = ((lean_object*)(l_Std_Async_Async_race___redArg___closed__1));
v___f_5584_ = ((lean_object*)(l_Std_Async_Async_race___redArg___closed__0));
v___f_5585_ = ((lean_object*)(l_Std_Async_EAsync_instMonadAsyncAsyncTaskError___closed__0));
v___f_5586_ = ((lean_object*)(l_Std_Async_BaseAsync_race___redArg___closed__0));
v___f_5587_ = lean_alloc_closure((void*)(l_Std_Async_Async_raceAll___redArg___lam__2___boxed), 9, 7);
lean_closure_set(v___f_5587_, 0, v___f_5586_);
lean_closure_set(v___f_5587_, 1, v_prio_5581_);
lean_closure_set(v___f_5587_, 2, v___f_5585_);
lean_closure_set(v___f_5587_, 3, v___f_5583_);
lean_closure_set(v___f_5587_, 4, v___f_5584_);
lean_closure_set(v___f_5587_, 5, v_inst_5579_);
lean_closure_set(v___f_5587_, 6, v_xs_5580_);
v___x_5588_ = lean_unsigned_to_nat(0u);
v___x_5589_ = 0;
v___x_5590_ = lean_io_promise_new();
v___x_5591_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5591_, 0, v___x_5590_);
v___x_5592_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5592_, 0, v___x_5591_);
v___x_5593_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5588_, v___x_5589_, v___x_5592_, v___f_5587_);
return v___x_5593_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_raceAll___redArg___boxed(lean_object* v_inst_5594_, lean_object* v_xs_5595_, lean_object* v_prio_5596_, lean_object* v___y_5597_){
_start:
{
lean_object* v_res_5598_; 
v_res_5598_ = l_Std_Async_Async_raceAll___redArg(v_inst_5594_, v_xs_5595_, v_prio_5596_);
return v_res_5598_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_raceAll(lean_object* v_c_5599_, lean_object* v_00_u03b1_5600_, lean_object* v_inst_5601_, lean_object* v_xs_5602_, lean_object* v_prio_5603_){
_start:
{
lean_object* v___f_5605_; lean_object* v___f_5606_; lean_object* v___f_5607_; lean_object* v___f_5608_; lean_object* v___f_5609_; lean_object* v___x_5610_; uint8_t v___x_5611_; lean_object* v___x_5612_; lean_object* v___x_5613_; lean_object* v___x_5614_; lean_object* v___x_5615_; 
v___f_5605_ = ((lean_object*)(l_Std_Async_Async_race___redArg___closed__1));
v___f_5606_ = ((lean_object*)(l_Std_Async_Async_race___redArg___closed__0));
v___f_5607_ = ((lean_object*)(l_Std_Async_EAsync_instMonadAsyncAsyncTaskError___closed__0));
v___f_5608_ = ((lean_object*)(l_Std_Async_BaseAsync_race___redArg___closed__0));
v___f_5609_ = lean_alloc_closure((void*)(l_Std_Async_Async_raceAll___redArg___lam__2___boxed), 9, 7);
lean_closure_set(v___f_5609_, 0, v___f_5608_);
lean_closure_set(v___f_5609_, 1, v_prio_5603_);
lean_closure_set(v___f_5609_, 2, v___f_5607_);
lean_closure_set(v___f_5609_, 3, v___f_5605_);
lean_closure_set(v___f_5609_, 4, v___f_5606_);
lean_closure_set(v___f_5609_, 5, v_inst_5601_);
lean_closure_set(v___f_5609_, 6, v_xs_5602_);
v___x_5610_ = lean_unsigned_to_nat(0u);
v___x_5611_ = 0;
v___x_5612_ = lean_io_promise_new();
v___x_5613_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5613_, 0, v___x_5612_);
v___x_5614_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5614_, 0, v___x_5613_);
v___x_5615_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5610_, v___x_5611_, v___x_5614_, v___f_5609_);
return v___x_5615_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_raceAll___boxed(lean_object* v_c_5616_, lean_object* v_00_u03b1_5617_, lean_object* v_inst_5618_, lean_object* v_xs_5619_, lean_object* v_prio_5620_, lean_object* v___y_5621_){
_start:
{
lean_object* v_res_5622_; 
v_res_5622_ = l_Std_Async_Async_raceAll(v_c_5616_, v_00_u03b1_5617_, v_inst_5618_, v_xs_5619_, v_prio_5620_);
return v_res_5622_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_background___redArg(lean_object* v_inst_5623_, lean_object* v_inst_5624_, lean_object* v_action_5625_, lean_object* v_prio_5626_){
_start:
{
lean_object* v_toApplicative_5627_; lean_object* v_toFunctor_5628_; lean_object* v_mapConst_5629_; lean_object* v___x_5630_; lean_object* v___x_5631_; lean_object* v___x_5632_; 
v_toApplicative_5627_ = lean_ctor_get(v_inst_5623_, 0);
lean_inc_ref(v_toApplicative_5627_);
lean_dec_ref(v_inst_5623_);
v_toFunctor_5628_ = lean_ctor_get(v_toApplicative_5627_, 0);
lean_inc_ref(v_toFunctor_5628_);
lean_dec_ref(v_toApplicative_5627_);
v_mapConst_5629_ = lean_ctor_get(v_toFunctor_5628_, 1);
lean_inc(v_mapConst_5629_);
lean_dec_ref(v_toFunctor_5628_);
v___x_5630_ = lean_apply_3(v_inst_5624_, lean_box(0), v_action_5625_, v_prio_5626_);
v___x_5631_ = lean_box(0);
v___x_5632_ = lean_apply_4(v_mapConst_5629_, lean_box(0), lean_box(0), v___x_5631_, v___x_5630_);
return v___x_5632_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_background(lean_object* v_m_5633_, lean_object* v_t_5634_, lean_object* v_00_u03b1_5635_, lean_object* v_inst_5636_, lean_object* v_inst_5637_, lean_object* v_action_5638_, lean_object* v_prio_5639_){
_start:
{
lean_object* v_toApplicative_5640_; lean_object* v_toFunctor_5641_; lean_object* v_mapConst_5642_; lean_object* v___x_5643_; lean_object* v___x_5644_; lean_object* v___x_5645_; 
v_toApplicative_5640_ = lean_ctor_get(v_inst_5636_, 0);
lean_inc_ref(v_toApplicative_5640_);
lean_dec_ref(v_inst_5636_);
v_toFunctor_5641_ = lean_ctor_get(v_toApplicative_5640_, 0);
lean_inc_ref(v_toFunctor_5641_);
lean_dec_ref(v_toApplicative_5640_);
v_mapConst_5642_ = lean_ctor_get(v_toFunctor_5641_, 1);
lean_inc(v_mapConst_5642_);
lean_dec_ref(v_toFunctor_5641_);
v___x_5643_ = lean_apply_3(v_inst_5637_, lean_box(0), v_action_5638_, v_prio_5639_);
v___x_5644_ = lean_box(0);
v___x_5645_ = lean_apply_4(v_mapConst_5642_, lean_box(0), lean_box(0), v___x_5644_, v___x_5643_);
return v___x_5645_;
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
