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
LEAN_EXPORT lean_object* l_Std_Async_Async_ofPromise___redArg___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Async_ofPromise___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*);
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
LEAN_EXPORT lean_object* l_Std_Async_Async_instMonadAwaitAsyncTask___aux__1___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Async_instMonadAwaitAsyncTask___aux__1___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Async_instMonadAwaitAsyncTask___aux__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Async_instMonadAwaitAsyncTask___aux__1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Async_Async_instMonadAwaitAsyncTask___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Async_Async_instMonadAwaitAsyncTask___aux__1___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Async_Async_instMonadAwaitAsyncTask___closed__0 = (const lean_object*)&l_Std_Async_Async_instMonadAwaitAsyncTask___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Async_Async_instMonadAwaitAsyncTask = (const lean_object*)&l_Std_Async_Async_instMonadAwaitAsyncTask___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Async_Async_instMonadAwaitPromise___aux__1___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Async_instMonadAwaitPromise___aux__1___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Async_instMonadAwaitPromise___aux__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Async_instMonadAwaitPromise___aux__1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Async_Async_instMonadAwaitPromise___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Async_Async_instMonadAwaitPromise___aux__1___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
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
static const lean_closure_object l_Std_Async_Async_concurrentlyAll___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Async_Async_instMonadAwaitAsyncTask___aux__1___boxed, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Std_Async_Async_concurrentlyAll___redArg___lam__0___closed__0 = (const lean_object*)&l_Std_Async_Async_concurrentlyAll___redArg___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Async_Async_concurrentlyAll___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Async_concurrentlyAll___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Std_Async_Async_concurrentlyAll___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Async_Async_concurrentlyAll___redArg___closed__0;
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
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_mk___redArg(lean_object* v_x_1331_){
_start:
{
lean_object* v___x_1333_; 
v___x_1333_ = lean_apply_1(v_x_1331_, lean_box(0));
return v___x_1333_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_mk___redArg___boxed(lean_object* v_x_1334_, lean_object* v___y_1335_){
_start:
{
lean_object* v_res_1336_; 
v_res_1336_ = l_Std_Async_BaseAsync_mk___redArg(v_x_1334_);
return v_res_1336_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_mk(lean_object* v_00_u03b1_1337_, lean_object* v_x_1338_){
_start:
{
lean_object* v___x_1340_; 
v___x_1340_ = lean_apply_1(v_x_1338_, lean_box(0));
return v___x_1340_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_mk___boxed(lean_object* v_00_u03b1_1341_, lean_object* v_x_1342_, lean_object* v___y_1343_){
_start:
{
lean_object* v_res_1344_; 
v_res_1344_ = l_Std_Async_BaseAsync_mk(v_00_u03b1_1341_, v_x_1342_);
return v_res_1344_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_toRawBaseIO___redArg(lean_object* v_x_1345_){
_start:
{
lean_object* v___x_1347_; 
v___x_1347_ = lean_apply_1(v_x_1345_, lean_box(0));
return v___x_1347_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_toRawBaseIO___redArg___boxed(lean_object* v_x_1348_, lean_object* v___y_1349_){
_start:
{
lean_object* v_res_1350_; 
v_res_1350_ = l_Std_Async_BaseAsync_toRawBaseIO___redArg(v_x_1348_);
return v_res_1350_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_toRawBaseIO(lean_object* v_00_u03b1_1351_, lean_object* v_x_1352_){
_start:
{
lean_object* v___x_1354_; 
v___x_1354_ = lean_apply_1(v_x_1352_, lean_box(0));
return v___x_1354_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_BaseAsync_toRawBaseIO___boxed(lean_object* v_00_u03b1_1355_, lean_object* v_x_1356_, lean_object* v___y_1357_){
_start:
{
lean_object* v_res_1358_; 
v_res_1358_ = l_Std_Async_BaseAsync_toRawBaseIO(v_00_u03b1_1355_, v_x_1356_);
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
LEAN_EXPORT lean_object* l_Std_Async_EAsync_toBaseIO___redArg(lean_object* v_x_2383_){
_start:
{
lean_object* v___x_2385_; 
v___x_2385_ = lean_apply_1(v_x_2383_, lean_box(0));
if (lean_obj_tag(v___x_2385_) == 0)
{
lean_object* v_a_2386_; lean_object* v___x_2387_; 
v_a_2386_ = lean_ctor_get(v___x_2385_, 0);
lean_inc(v_a_2386_);
lean_dec_ref_known(v___x_2385_, 1);
v___x_2387_ = lean_task_pure(v_a_2386_);
return v___x_2387_;
}
else
{
lean_object* v_a_2388_; 
v_a_2388_ = lean_ctor_get(v___x_2385_, 0);
lean_inc_ref(v_a_2388_);
lean_dec_ref_known(v___x_2385_, 1);
return v_a_2388_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_toBaseIO___redArg___boxed(lean_object* v_x_2389_, lean_object* v___y_2390_){
_start:
{
lean_object* v_res_2391_; 
v_res_2391_ = l_Std_Async_EAsync_toBaseIO___redArg(v_x_2389_);
return v_res_2391_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_toBaseIO(lean_object* v_00_u03b5_2392_, lean_object* v_00_u03b1_2393_, lean_object* v_x_2394_){
_start:
{
lean_object* v___x_2396_; 
v___x_2396_ = lean_apply_1(v_x_2394_, lean_box(0));
if (lean_obj_tag(v___x_2396_) == 0)
{
lean_object* v_a_2397_; lean_object* v___x_2398_; 
v_a_2397_ = lean_ctor_get(v___x_2396_, 0);
lean_inc(v_a_2397_);
lean_dec_ref_known(v___x_2396_, 1);
v___x_2398_ = lean_task_pure(v_a_2397_);
return v___x_2398_;
}
else
{
lean_object* v_a_2399_; 
v_a_2399_ = lean_ctor_get(v___x_2396_, 0);
lean_inc_ref(v_a_2399_);
lean_dec_ref_known(v___x_2396_, 1);
return v_a_2399_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_toBaseIO___boxed(lean_object* v_00_u03b5_2400_, lean_object* v_00_u03b1_2401_, lean_object* v_x_2402_, lean_object* v___y_2403_){
_start:
{
lean_object* v_res_2404_; 
v_res_2404_ = l_Std_Async_EAsync_toBaseIO(v_00_u03b5_2400_, v_00_u03b1_2401_, v_x_2402_);
return v_res_2404_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_ofTask___redArg(lean_object* v_x_2405_){
_start:
{
lean_object* v___x_2407_; 
v___x_2407_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2407_, 0, v_x_2405_);
return v___x_2407_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_ofTask___redArg___boxed(lean_object* v_x_2408_, lean_object* v___y_2409_){
_start:
{
lean_object* v_res_2410_; 
v_res_2410_ = l_Std_Async_EAsync_ofTask___redArg(v_x_2408_);
return v_res_2410_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_ofTask(lean_object* v_00_u03b5_2411_, lean_object* v_00_u03b1_2412_, lean_object* v_x_2413_){
_start:
{
lean_object* v___x_2415_; 
v___x_2415_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2415_, 0, v_x_2413_);
return v___x_2415_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_ofTask___boxed(lean_object* v_00_u03b5_2416_, lean_object* v_00_u03b1_2417_, lean_object* v_x_2418_, lean_object* v___y_2419_){
_start:
{
lean_object* v_res_2420_; 
v_res_2420_ = l_Std_Async_EAsync_ofTask(v_00_u03b5_2416_, v_00_u03b1_2417_, v_x_2418_);
return v_res_2420_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_toEIO___redArg(lean_object* v_x_2421_){
_start:
{
lean_object* v___x_2423_; 
v___x_2423_ = lean_apply_1(v_x_2421_, lean_box(0));
if (lean_obj_tag(v___x_2423_) == 0)
{
lean_object* v_a_2424_; lean_object* v___x_2426_; uint8_t v_isShared_2427_; uint8_t v_isSharedCheck_2432_; 
v_a_2424_ = lean_ctor_get(v___x_2423_, 0);
v_isSharedCheck_2432_ = !lean_is_exclusive(v___x_2423_);
if (v_isSharedCheck_2432_ == 0)
{
v___x_2426_ = v___x_2423_;
v_isShared_2427_ = v_isSharedCheck_2432_;
goto v_resetjp_2425_;
}
else
{
lean_inc(v_a_2424_);
lean_dec(v___x_2423_);
v___x_2426_ = lean_box(0);
v_isShared_2427_ = v_isSharedCheck_2432_;
goto v_resetjp_2425_;
}
v_resetjp_2425_:
{
lean_object* v___x_2428_; lean_object* v___x_2430_; 
v___x_2428_ = lean_task_pure(v_a_2424_);
if (v_isShared_2427_ == 0)
{
lean_ctor_set(v___x_2426_, 0, v___x_2428_);
v___x_2430_ = v___x_2426_;
goto v_reusejp_2429_;
}
else
{
lean_object* v_reuseFailAlloc_2431_; 
v_reuseFailAlloc_2431_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2431_, 0, v___x_2428_);
v___x_2430_ = v_reuseFailAlloc_2431_;
goto v_reusejp_2429_;
}
v_reusejp_2429_:
{
return v___x_2430_;
}
}
}
else
{
lean_object* v_a_2433_; lean_object* v___x_2435_; uint8_t v_isShared_2436_; uint8_t v_isSharedCheck_2440_; 
v_a_2433_ = lean_ctor_get(v___x_2423_, 0);
v_isSharedCheck_2440_ = !lean_is_exclusive(v___x_2423_);
if (v_isSharedCheck_2440_ == 0)
{
v___x_2435_ = v___x_2423_;
v_isShared_2436_ = v_isSharedCheck_2440_;
goto v_resetjp_2434_;
}
else
{
lean_inc(v_a_2433_);
lean_dec(v___x_2423_);
v___x_2435_ = lean_box(0);
v_isShared_2436_ = v_isSharedCheck_2440_;
goto v_resetjp_2434_;
}
v_resetjp_2434_:
{
lean_object* v___x_2438_; 
if (v_isShared_2436_ == 0)
{
lean_ctor_set_tag(v___x_2435_, 0);
v___x_2438_ = v___x_2435_;
goto v_reusejp_2437_;
}
else
{
lean_object* v_reuseFailAlloc_2439_; 
v_reuseFailAlloc_2439_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2439_, 0, v_a_2433_);
v___x_2438_ = v_reuseFailAlloc_2439_;
goto v_reusejp_2437_;
}
v_reusejp_2437_:
{
return v___x_2438_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_toEIO___redArg___boxed(lean_object* v_x_2441_, lean_object* v___y_2442_){
_start:
{
lean_object* v_res_2443_; 
v_res_2443_ = l_Std_Async_EAsync_toEIO___redArg(v_x_2441_);
return v_res_2443_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_toEIO(lean_object* v_00_u03b5_2444_, lean_object* v_00_u03b1_2445_, lean_object* v_x_2446_){
_start:
{
lean_object* v___x_2448_; 
v___x_2448_ = lean_apply_1(v_x_2446_, lean_box(0));
if (lean_obj_tag(v___x_2448_) == 0)
{
lean_object* v_a_2449_; lean_object* v___x_2451_; uint8_t v_isShared_2452_; uint8_t v_isSharedCheck_2457_; 
v_a_2449_ = lean_ctor_get(v___x_2448_, 0);
v_isSharedCheck_2457_ = !lean_is_exclusive(v___x_2448_);
if (v_isSharedCheck_2457_ == 0)
{
v___x_2451_ = v___x_2448_;
v_isShared_2452_ = v_isSharedCheck_2457_;
goto v_resetjp_2450_;
}
else
{
lean_inc(v_a_2449_);
lean_dec(v___x_2448_);
v___x_2451_ = lean_box(0);
v_isShared_2452_ = v_isSharedCheck_2457_;
goto v_resetjp_2450_;
}
v_resetjp_2450_:
{
lean_object* v___x_2453_; lean_object* v___x_2455_; 
v___x_2453_ = lean_task_pure(v_a_2449_);
if (v_isShared_2452_ == 0)
{
lean_ctor_set(v___x_2451_, 0, v___x_2453_);
v___x_2455_ = v___x_2451_;
goto v_reusejp_2454_;
}
else
{
lean_object* v_reuseFailAlloc_2456_; 
v_reuseFailAlloc_2456_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2456_, 0, v___x_2453_);
v___x_2455_ = v_reuseFailAlloc_2456_;
goto v_reusejp_2454_;
}
v_reusejp_2454_:
{
return v___x_2455_;
}
}
}
else
{
lean_object* v_a_2458_; lean_object* v___x_2460_; uint8_t v_isShared_2461_; uint8_t v_isSharedCheck_2465_; 
v_a_2458_ = lean_ctor_get(v___x_2448_, 0);
v_isSharedCheck_2465_ = !lean_is_exclusive(v___x_2448_);
if (v_isSharedCheck_2465_ == 0)
{
v___x_2460_ = v___x_2448_;
v_isShared_2461_ = v_isSharedCheck_2465_;
goto v_resetjp_2459_;
}
else
{
lean_inc(v_a_2458_);
lean_dec(v___x_2448_);
v___x_2460_ = lean_box(0);
v_isShared_2461_ = v_isSharedCheck_2465_;
goto v_resetjp_2459_;
}
v_resetjp_2459_:
{
lean_object* v___x_2463_; 
if (v_isShared_2461_ == 0)
{
lean_ctor_set_tag(v___x_2460_, 0);
v___x_2463_ = v___x_2460_;
goto v_reusejp_2462_;
}
else
{
lean_object* v_reuseFailAlloc_2464_; 
v_reuseFailAlloc_2464_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2464_, 0, v_a_2458_);
v___x_2463_ = v_reuseFailAlloc_2464_;
goto v_reusejp_2462_;
}
v_reusejp_2462_:
{
return v___x_2463_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_toEIO___boxed(lean_object* v_00_u03b5_2466_, lean_object* v_00_u03b1_2467_, lean_object* v_x_2468_, lean_object* v___y_2469_){
_start:
{
lean_object* v_res_2470_; 
v_res_2470_ = l_Std_Async_EAsync_toEIO(v_00_u03b5_2466_, v_00_u03b1_2467_, v_x_2468_);
return v_res_2470_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_ofETask___redArg(lean_object* v_x_2471_){
_start:
{
lean_object* v___x_2473_; 
v___x_2473_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2473_, 0, v_x_2471_);
return v___x_2473_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_ofETask___redArg___boxed(lean_object* v_x_2474_, lean_object* v___y_2475_){
_start:
{
lean_object* v_res_2476_; 
v_res_2476_ = l_Std_Async_EAsync_ofETask___redArg(v_x_2474_);
return v_res_2476_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_ofETask(lean_object* v_00_u03b5_2477_, lean_object* v_00_u03b1_2478_, lean_object* v_x_2479_){
_start:
{
lean_object* v___x_2481_; 
v___x_2481_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2481_, 0, v_x_2479_);
return v___x_2481_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_ofETask___boxed(lean_object* v_00_u03b5_2482_, lean_object* v_00_u03b1_2483_, lean_object* v_x_2484_, lean_object* v___y_2485_){
_start:
{
lean_object* v_res_2486_; 
v_res_2486_ = l_Std_Async_EAsync_ofETask(v_00_u03b5_2482_, v_00_u03b1_2483_, v_x_2484_);
return v_res_2486_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_pure___redArg(lean_object* v_a_2487_){
_start:
{
lean_object* v___x_2489_; lean_object* v___x_2490_; 
v___x_2489_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2489_, 0, v_a_2487_);
v___x_2490_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2490_, 0, v___x_2489_);
return v___x_2490_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_pure___redArg___boxed(lean_object* v_a_2491_, lean_object* v___y_2492_){
_start:
{
lean_object* v_res_2493_; 
v_res_2493_ = l_Std_Async_EAsync_pure___redArg(v_a_2491_);
return v_res_2493_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_pure(lean_object* v_00_u03b1_2494_, lean_object* v_00_u03b5_2495_, lean_object* v_a_2496_){
_start:
{
lean_object* v___x_2498_; lean_object* v___x_2499_; 
v___x_2498_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2498_, 0, v_a_2496_);
v___x_2499_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2499_, 0, v___x_2498_);
return v___x_2499_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_pure___boxed(lean_object* v_00_u03b1_2500_, lean_object* v_00_u03b5_2501_, lean_object* v_a_2502_, lean_object* v___y_2503_){
_start:
{
lean_object* v_res_2504_; 
v_res_2504_ = l_Std_Async_EAsync_pure(v_00_u03b1_2500_, v_00_u03b5_2501_, v_a_2502_);
return v_res_2504_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_map___redArg(lean_object* v_f_2505_, lean_object* v_self_2506_){
_start:
{
lean_object* v___x_2508_; lean_object* v___x_2509_; uint8_t v___x_2510_; lean_object* v___x_2511_; lean_object* v___y_2513_; 
lean_inc(v_f_2505_);
v___x_2508_ = lean_alloc_closure((void*)(l_Except_map), 5, 4);
lean_closure_set(v___x_2508_, 0, lean_box(0));
lean_closure_set(v___x_2508_, 1, lean_box(0));
lean_closure_set(v___x_2508_, 2, lean_box(0));
lean_closure_set(v___x_2508_, 3, v_f_2505_);
v___x_2509_ = lean_unsigned_to_nat(0u);
v___x_2510_ = 0;
v___x_2511_ = lean_apply_1(v_self_2506_, lean_box(0));
if (lean_obj_tag(v___x_2511_) == 0)
{
lean_object* v_a_2515_; 
lean_dec_ref(v___x_2508_);
v_a_2515_ = lean_ctor_get(v___x_2511_, 0);
lean_inc(v_a_2515_);
lean_dec_ref_known(v___x_2511_, 1);
if (lean_obj_tag(v_a_2515_) == 0)
{
lean_object* v_a_2516_; lean_object* v___x_2518_; uint8_t v_isShared_2519_; uint8_t v_isSharedCheck_2523_; 
lean_dec(v_f_2505_);
v_a_2516_ = lean_ctor_get(v_a_2515_, 0);
v_isSharedCheck_2523_ = !lean_is_exclusive(v_a_2515_);
if (v_isSharedCheck_2523_ == 0)
{
v___x_2518_ = v_a_2515_;
v_isShared_2519_ = v_isSharedCheck_2523_;
goto v_resetjp_2517_;
}
else
{
lean_inc(v_a_2516_);
lean_dec(v_a_2515_);
v___x_2518_ = lean_box(0);
v_isShared_2519_ = v_isSharedCheck_2523_;
goto v_resetjp_2517_;
}
v_resetjp_2517_:
{
lean_object* v___x_2521_; 
if (v_isShared_2519_ == 0)
{
v___x_2521_ = v___x_2518_;
goto v_reusejp_2520_;
}
else
{
lean_object* v_reuseFailAlloc_2522_; 
v_reuseFailAlloc_2522_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2522_, 0, v_a_2516_);
v___x_2521_ = v_reuseFailAlloc_2522_;
goto v_reusejp_2520_;
}
v_reusejp_2520_:
{
v___y_2513_ = v___x_2521_;
goto v___jp_2512_;
}
}
}
else
{
lean_object* v_a_2524_; lean_object* v___x_2526_; uint8_t v_isShared_2527_; uint8_t v_isSharedCheck_2532_; 
v_a_2524_ = lean_ctor_get(v_a_2515_, 0);
v_isSharedCheck_2532_ = !lean_is_exclusive(v_a_2515_);
if (v_isSharedCheck_2532_ == 0)
{
v___x_2526_ = v_a_2515_;
v_isShared_2527_ = v_isSharedCheck_2532_;
goto v_resetjp_2525_;
}
else
{
lean_inc(v_a_2524_);
lean_dec(v_a_2515_);
v___x_2526_ = lean_box(0);
v_isShared_2527_ = v_isSharedCheck_2532_;
goto v_resetjp_2525_;
}
v_resetjp_2525_:
{
lean_object* v___x_2528_; lean_object* v___x_2530_; 
v___x_2528_ = lean_apply_1(v_f_2505_, v_a_2524_);
if (v_isShared_2527_ == 0)
{
lean_ctor_set(v___x_2526_, 0, v___x_2528_);
v___x_2530_ = v___x_2526_;
goto v_reusejp_2529_;
}
else
{
lean_object* v_reuseFailAlloc_2531_; 
v_reuseFailAlloc_2531_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2531_, 0, v___x_2528_);
v___x_2530_ = v_reuseFailAlloc_2531_;
goto v_reusejp_2529_;
}
v_reusejp_2529_:
{
v___y_2513_ = v___x_2530_;
goto v___jp_2512_;
}
}
}
}
else
{
lean_object* v_a_2533_; lean_object* v___x_2535_; uint8_t v_isShared_2536_; uint8_t v_isSharedCheck_2541_; 
lean_dec(v_f_2505_);
v_a_2533_ = lean_ctor_get(v___x_2511_, 0);
v_isSharedCheck_2541_ = !lean_is_exclusive(v___x_2511_);
if (v_isSharedCheck_2541_ == 0)
{
v___x_2535_ = v___x_2511_;
v_isShared_2536_ = v_isSharedCheck_2541_;
goto v_resetjp_2534_;
}
else
{
lean_inc(v_a_2533_);
lean_dec(v___x_2511_);
v___x_2535_ = lean_box(0);
v_isShared_2536_ = v_isSharedCheck_2541_;
goto v_resetjp_2534_;
}
v_resetjp_2534_:
{
lean_object* v___x_2537_; lean_object* v___x_2539_; 
v___x_2537_ = lean_task_map(v___x_2508_, v_a_2533_, v___x_2509_, v___x_2510_);
if (v_isShared_2536_ == 0)
{
lean_ctor_set(v___x_2535_, 0, v___x_2537_);
v___x_2539_ = v___x_2535_;
goto v_reusejp_2538_;
}
else
{
lean_object* v_reuseFailAlloc_2540_; 
v_reuseFailAlloc_2540_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2540_, 0, v___x_2537_);
v___x_2539_ = v_reuseFailAlloc_2540_;
goto v_reusejp_2538_;
}
v_reusejp_2538_:
{
return v___x_2539_;
}
}
}
v___jp_2512_:
{
lean_object* v___x_2514_; 
v___x_2514_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2514_, 0, v___y_2513_);
return v___x_2514_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_map___redArg___boxed(lean_object* v_f_2542_, lean_object* v_self_2543_, lean_object* v___y_2544_){
_start:
{
lean_object* v_res_2545_; 
v_res_2545_ = l_Std_Async_EAsync_map___redArg(v_f_2542_, v_self_2543_);
return v_res_2545_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_map(lean_object* v_00_u03b1_2546_, lean_object* v_00_u03b2_2547_, lean_object* v_00_u03b5_2548_, lean_object* v_f_2549_, lean_object* v_self_2550_){
_start:
{
lean_object* v___x_2552_; lean_object* v___x_2553_; uint8_t v___x_2554_; lean_object* v___x_2555_; lean_object* v___y_2557_; 
lean_inc(v_f_2549_);
v___x_2552_ = lean_alloc_closure((void*)(l_Except_map), 5, 4);
lean_closure_set(v___x_2552_, 0, lean_box(0));
lean_closure_set(v___x_2552_, 1, lean_box(0));
lean_closure_set(v___x_2552_, 2, lean_box(0));
lean_closure_set(v___x_2552_, 3, v_f_2549_);
v___x_2553_ = lean_unsigned_to_nat(0u);
v___x_2554_ = 0;
v___x_2555_ = lean_apply_1(v_self_2550_, lean_box(0));
if (lean_obj_tag(v___x_2555_) == 0)
{
lean_object* v_a_2559_; 
lean_dec_ref(v___x_2552_);
v_a_2559_ = lean_ctor_get(v___x_2555_, 0);
lean_inc(v_a_2559_);
lean_dec_ref_known(v___x_2555_, 1);
if (lean_obj_tag(v_a_2559_) == 0)
{
lean_object* v_a_2560_; lean_object* v___x_2562_; uint8_t v_isShared_2563_; uint8_t v_isSharedCheck_2567_; 
lean_dec(v_f_2549_);
v_a_2560_ = lean_ctor_get(v_a_2559_, 0);
v_isSharedCheck_2567_ = !lean_is_exclusive(v_a_2559_);
if (v_isSharedCheck_2567_ == 0)
{
v___x_2562_ = v_a_2559_;
v_isShared_2563_ = v_isSharedCheck_2567_;
goto v_resetjp_2561_;
}
else
{
lean_inc(v_a_2560_);
lean_dec(v_a_2559_);
v___x_2562_ = lean_box(0);
v_isShared_2563_ = v_isSharedCheck_2567_;
goto v_resetjp_2561_;
}
v_resetjp_2561_:
{
lean_object* v___x_2565_; 
if (v_isShared_2563_ == 0)
{
v___x_2565_ = v___x_2562_;
goto v_reusejp_2564_;
}
else
{
lean_object* v_reuseFailAlloc_2566_; 
v_reuseFailAlloc_2566_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2566_, 0, v_a_2560_);
v___x_2565_ = v_reuseFailAlloc_2566_;
goto v_reusejp_2564_;
}
v_reusejp_2564_:
{
v___y_2557_ = v___x_2565_;
goto v___jp_2556_;
}
}
}
else
{
lean_object* v_a_2568_; lean_object* v___x_2570_; uint8_t v_isShared_2571_; uint8_t v_isSharedCheck_2576_; 
v_a_2568_ = lean_ctor_get(v_a_2559_, 0);
v_isSharedCheck_2576_ = !lean_is_exclusive(v_a_2559_);
if (v_isSharedCheck_2576_ == 0)
{
v___x_2570_ = v_a_2559_;
v_isShared_2571_ = v_isSharedCheck_2576_;
goto v_resetjp_2569_;
}
else
{
lean_inc(v_a_2568_);
lean_dec(v_a_2559_);
v___x_2570_ = lean_box(0);
v_isShared_2571_ = v_isSharedCheck_2576_;
goto v_resetjp_2569_;
}
v_resetjp_2569_:
{
lean_object* v___x_2572_; lean_object* v___x_2574_; 
v___x_2572_ = lean_apply_1(v_f_2549_, v_a_2568_);
if (v_isShared_2571_ == 0)
{
lean_ctor_set(v___x_2570_, 0, v___x_2572_);
v___x_2574_ = v___x_2570_;
goto v_reusejp_2573_;
}
else
{
lean_object* v_reuseFailAlloc_2575_; 
v_reuseFailAlloc_2575_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2575_, 0, v___x_2572_);
v___x_2574_ = v_reuseFailAlloc_2575_;
goto v_reusejp_2573_;
}
v_reusejp_2573_:
{
v___y_2557_ = v___x_2574_;
goto v___jp_2556_;
}
}
}
}
else
{
lean_object* v_a_2577_; lean_object* v___x_2579_; uint8_t v_isShared_2580_; uint8_t v_isSharedCheck_2585_; 
lean_dec(v_f_2549_);
v_a_2577_ = lean_ctor_get(v___x_2555_, 0);
v_isSharedCheck_2585_ = !lean_is_exclusive(v___x_2555_);
if (v_isSharedCheck_2585_ == 0)
{
v___x_2579_ = v___x_2555_;
v_isShared_2580_ = v_isSharedCheck_2585_;
goto v_resetjp_2578_;
}
else
{
lean_inc(v_a_2577_);
lean_dec(v___x_2555_);
v___x_2579_ = lean_box(0);
v_isShared_2580_ = v_isSharedCheck_2585_;
goto v_resetjp_2578_;
}
v_resetjp_2578_:
{
lean_object* v___x_2581_; lean_object* v___x_2583_; 
v___x_2581_ = lean_task_map(v___x_2552_, v_a_2577_, v___x_2553_, v___x_2554_);
if (v_isShared_2580_ == 0)
{
lean_ctor_set(v___x_2579_, 0, v___x_2581_);
v___x_2583_ = v___x_2579_;
goto v_reusejp_2582_;
}
else
{
lean_object* v_reuseFailAlloc_2584_; 
v_reuseFailAlloc_2584_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2584_, 0, v___x_2581_);
v___x_2583_ = v_reuseFailAlloc_2584_;
goto v_reusejp_2582_;
}
v_reusejp_2582_:
{
return v___x_2583_;
}
}
}
v___jp_2556_:
{
lean_object* v___x_2558_; 
v___x_2558_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2558_, 0, v___y_2557_);
return v___x_2558_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_map___boxed(lean_object* v_00_u03b1_2586_, lean_object* v_00_u03b2_2587_, lean_object* v_00_u03b5_2588_, lean_object* v_f_2589_, lean_object* v_self_2590_, lean_object* v___y_2591_){
_start:
{
lean_object* v_res_2592_; 
v_res_2592_ = l_Std_Async_EAsync_map(v_00_u03b1_2586_, v_00_u03b2_2587_, v_00_u03b5_2588_, v_f_2589_, v_self_2590_);
return v_res_2592_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_bind___redArg___lam__0(lean_object* v_f_2593_, lean_object* v_x_2594_){
_start:
{
if (lean_obj_tag(v_x_2594_) == 0)
{
lean_object* v_a_2596_; lean_object* v___x_2598_; uint8_t v_isShared_2599_; uint8_t v_isSharedCheck_2604_; 
lean_dec_ref(v_f_2593_);
v_a_2596_ = lean_ctor_get(v_x_2594_, 0);
v_isSharedCheck_2604_ = !lean_is_exclusive(v_x_2594_);
if (v_isSharedCheck_2604_ == 0)
{
v___x_2598_ = v_x_2594_;
v_isShared_2599_ = v_isSharedCheck_2604_;
goto v_resetjp_2597_;
}
else
{
lean_inc(v_a_2596_);
lean_dec(v_x_2594_);
v___x_2598_ = lean_box(0);
v_isShared_2599_ = v_isSharedCheck_2604_;
goto v_resetjp_2597_;
}
v_resetjp_2597_:
{
lean_object* v___x_2601_; 
if (v_isShared_2599_ == 0)
{
v___x_2601_ = v___x_2598_;
goto v_reusejp_2600_;
}
else
{
lean_object* v_reuseFailAlloc_2603_; 
v_reuseFailAlloc_2603_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2603_, 0, v_a_2596_);
v___x_2601_ = v_reuseFailAlloc_2603_;
goto v_reusejp_2600_;
}
v_reusejp_2600_:
{
lean_object* v___x_2602_; 
v___x_2602_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2602_, 0, v___x_2601_);
return v___x_2602_;
}
}
}
else
{
lean_object* v_a_2605_; lean_object* v___x_2606_; 
v_a_2605_ = lean_ctor_get(v_x_2594_, 0);
lean_inc(v_a_2605_);
lean_dec_ref_known(v_x_2594_, 1);
v___x_2606_ = lean_apply_2(v_f_2593_, v_a_2605_, lean_box(0));
return v___x_2606_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_bind___redArg___lam__0___boxed(lean_object* v_f_2607_, lean_object* v_x_2608_, lean_object* v___y_2609_){
_start:
{
lean_object* v_res_2610_; 
v_res_2610_ = l_Std_Async_EAsync_bind___redArg___lam__0(v_f_2607_, v_x_2608_);
return v_res_2610_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_bind___redArg(lean_object* v_self_2611_, lean_object* v_f_2612_){
_start:
{
lean_object* v___f_2614_; lean_object* v___x_2615_; uint8_t v___x_2616_; lean_object* v___x_2617_; lean_object* v___x_2618_; 
v___f_2614_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_bind___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_2614_, 0, v_f_2612_);
v___x_2615_ = lean_unsigned_to_nat(0u);
v___x_2616_ = 0;
v___x_2617_ = lean_apply_1(v_self_2611_, lean_box(0));
v___x_2618_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2615_, v___x_2616_, v___x_2617_, v___f_2614_);
return v___x_2618_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_bind___redArg___boxed(lean_object* v_self_2619_, lean_object* v_f_2620_, lean_object* v___y_2621_){
_start:
{
lean_object* v_res_2622_; 
v_res_2622_ = l_Std_Async_EAsync_bind___redArg(v_self_2619_, v_f_2620_);
return v_res_2622_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_bind(lean_object* v_00_u03b5_2623_, lean_object* v_00_u03b1_2624_, lean_object* v_00_u03b2_2625_, lean_object* v_self_2626_, lean_object* v_f_2627_){
_start:
{
lean_object* v___f_2629_; lean_object* v___x_2630_; uint8_t v___x_2631_; lean_object* v___x_2632_; lean_object* v___x_2633_; 
v___f_2629_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_bind___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_2629_, 0, v_f_2627_);
v___x_2630_ = lean_unsigned_to_nat(0u);
v___x_2631_ = 0;
v___x_2632_ = lean_apply_1(v_self_2626_, lean_box(0));
v___x_2633_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2630_, v___x_2631_, v___x_2632_, v___f_2629_);
return v___x_2633_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_bind___boxed(lean_object* v_00_u03b5_2634_, lean_object* v_00_u03b1_2635_, lean_object* v_00_u03b2_2636_, lean_object* v_self_2637_, lean_object* v_f_2638_, lean_object* v___y_2639_){
_start:
{
lean_object* v_res_2640_; 
v_res_2640_ = l_Std_Async_EAsync_bind(v_00_u03b5_2634_, v_00_u03b1_2635_, v_00_u03b2_2636_, v_self_2637_, v_f_2638_);
return v_res_2640_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_lift___redArg(lean_object* v_x_2641_){
_start:
{
lean_object* v_val_2644_; lean_object* v___x_2646_; 
v___x_2646_ = lean_apply_1(v_x_2641_, lean_box(0));
if (lean_obj_tag(v___x_2646_) == 0)
{
lean_object* v_a_2647_; lean_object* v___x_2649_; uint8_t v_isShared_2650_; uint8_t v_isSharedCheck_2654_; 
v_a_2647_ = lean_ctor_get(v___x_2646_, 0);
v_isSharedCheck_2654_ = !lean_is_exclusive(v___x_2646_);
if (v_isSharedCheck_2654_ == 0)
{
v___x_2649_ = v___x_2646_;
v_isShared_2650_ = v_isSharedCheck_2654_;
goto v_resetjp_2648_;
}
else
{
lean_inc(v_a_2647_);
lean_dec(v___x_2646_);
v___x_2649_ = lean_box(0);
v_isShared_2650_ = v_isSharedCheck_2654_;
goto v_resetjp_2648_;
}
v_resetjp_2648_:
{
lean_object* v___x_2652_; 
if (v_isShared_2650_ == 0)
{
lean_ctor_set_tag(v___x_2649_, 1);
v___x_2652_ = v___x_2649_;
goto v_reusejp_2651_;
}
else
{
lean_object* v_reuseFailAlloc_2653_; 
v_reuseFailAlloc_2653_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2653_, 0, v_a_2647_);
v___x_2652_ = v_reuseFailAlloc_2653_;
goto v_reusejp_2651_;
}
v_reusejp_2651_:
{
v_val_2644_ = v___x_2652_;
goto v___jp_2643_;
}
}
}
else
{
lean_object* v_a_2655_; lean_object* v___x_2657_; uint8_t v_isShared_2658_; uint8_t v_isSharedCheck_2662_; 
v_a_2655_ = lean_ctor_get(v___x_2646_, 0);
v_isSharedCheck_2662_ = !lean_is_exclusive(v___x_2646_);
if (v_isSharedCheck_2662_ == 0)
{
v___x_2657_ = v___x_2646_;
v_isShared_2658_ = v_isSharedCheck_2662_;
goto v_resetjp_2656_;
}
else
{
lean_inc(v_a_2655_);
lean_dec(v___x_2646_);
v___x_2657_ = lean_box(0);
v_isShared_2658_ = v_isSharedCheck_2662_;
goto v_resetjp_2656_;
}
v_resetjp_2656_:
{
lean_object* v___x_2660_; 
if (v_isShared_2658_ == 0)
{
lean_ctor_set_tag(v___x_2657_, 0);
v___x_2660_ = v___x_2657_;
goto v_reusejp_2659_;
}
else
{
lean_object* v_reuseFailAlloc_2661_; 
v_reuseFailAlloc_2661_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2661_, 0, v_a_2655_);
v___x_2660_ = v_reuseFailAlloc_2661_;
goto v_reusejp_2659_;
}
v_reusejp_2659_:
{
v_val_2644_ = v___x_2660_;
goto v___jp_2643_;
}
}
}
v___jp_2643_:
{
lean_object* v___x_2645_; 
v___x_2645_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2645_, 0, v_val_2644_);
return v___x_2645_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_lift___redArg___boxed(lean_object* v_x_2663_, lean_object* v___y_2664_){
_start:
{
lean_object* v_res_2665_; 
v_res_2665_ = l_Std_Async_EAsync_lift___redArg(v_x_2663_);
return v_res_2665_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_lift(lean_object* v_00_u03b5_2666_, lean_object* v_00_u03b1_2667_, lean_object* v_x_2668_){
_start:
{
lean_object* v_val_2671_; lean_object* v___x_2673_; 
v___x_2673_ = lean_apply_1(v_x_2668_, lean_box(0));
if (lean_obj_tag(v___x_2673_) == 0)
{
lean_object* v_a_2674_; lean_object* v___x_2676_; uint8_t v_isShared_2677_; uint8_t v_isSharedCheck_2681_; 
v_a_2674_ = lean_ctor_get(v___x_2673_, 0);
v_isSharedCheck_2681_ = !lean_is_exclusive(v___x_2673_);
if (v_isSharedCheck_2681_ == 0)
{
v___x_2676_ = v___x_2673_;
v_isShared_2677_ = v_isSharedCheck_2681_;
goto v_resetjp_2675_;
}
else
{
lean_inc(v_a_2674_);
lean_dec(v___x_2673_);
v___x_2676_ = lean_box(0);
v_isShared_2677_ = v_isSharedCheck_2681_;
goto v_resetjp_2675_;
}
v_resetjp_2675_:
{
lean_object* v___x_2679_; 
if (v_isShared_2677_ == 0)
{
lean_ctor_set_tag(v___x_2676_, 1);
v___x_2679_ = v___x_2676_;
goto v_reusejp_2678_;
}
else
{
lean_object* v_reuseFailAlloc_2680_; 
v_reuseFailAlloc_2680_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2680_, 0, v_a_2674_);
v___x_2679_ = v_reuseFailAlloc_2680_;
goto v_reusejp_2678_;
}
v_reusejp_2678_:
{
v_val_2671_ = v___x_2679_;
goto v___jp_2670_;
}
}
}
else
{
lean_object* v_a_2682_; lean_object* v___x_2684_; uint8_t v_isShared_2685_; uint8_t v_isSharedCheck_2689_; 
v_a_2682_ = lean_ctor_get(v___x_2673_, 0);
v_isSharedCheck_2689_ = !lean_is_exclusive(v___x_2673_);
if (v_isSharedCheck_2689_ == 0)
{
v___x_2684_ = v___x_2673_;
v_isShared_2685_ = v_isSharedCheck_2689_;
goto v_resetjp_2683_;
}
else
{
lean_inc(v_a_2682_);
lean_dec(v___x_2673_);
v___x_2684_ = lean_box(0);
v_isShared_2685_ = v_isSharedCheck_2689_;
goto v_resetjp_2683_;
}
v_resetjp_2683_:
{
lean_object* v___x_2687_; 
if (v_isShared_2685_ == 0)
{
lean_ctor_set_tag(v___x_2684_, 0);
v___x_2687_ = v___x_2684_;
goto v_reusejp_2686_;
}
else
{
lean_object* v_reuseFailAlloc_2688_; 
v_reuseFailAlloc_2688_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2688_, 0, v_a_2682_);
v___x_2687_ = v_reuseFailAlloc_2688_;
goto v_reusejp_2686_;
}
v_reusejp_2686_:
{
v_val_2671_ = v___x_2687_;
goto v___jp_2670_;
}
}
}
v___jp_2670_:
{
lean_object* v___x_2672_; 
v___x_2672_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2672_, 0, v_val_2671_);
return v___x_2672_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_lift___boxed(lean_object* v_00_u03b5_2690_, lean_object* v_00_u03b1_2691_, lean_object* v_x_2692_, lean_object* v___y_2693_){
_start:
{
lean_object* v_res_2694_; 
v_res_2694_ = l_Std_Async_EAsync_lift(v_00_u03b5_2690_, v_00_u03b1_2691_, v_x_2692_);
return v_res_2694_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_wait___redArg(lean_object* v_self_2695_){
_start:
{
lean_object* v_val_2698_; lean_object* v___x_2716_; 
v___x_2716_ = lean_apply_1(v_self_2695_, lean_box(0));
if (lean_obj_tag(v___x_2716_) == 0)
{
lean_object* v_a_2717_; lean_object* v___x_2718_; 
v_a_2717_ = lean_ctor_get(v___x_2716_, 0);
lean_inc(v_a_2717_);
lean_dec_ref_known(v___x_2716_, 1);
v___x_2718_ = lean_task_pure(v_a_2717_);
v_val_2698_ = v___x_2718_;
goto v___jp_2697_;
}
else
{
lean_object* v_a_2719_; 
v_a_2719_ = lean_ctor_get(v___x_2716_, 0);
lean_inc_ref(v_a_2719_);
lean_dec_ref_known(v___x_2716_, 1);
v_val_2698_ = v_a_2719_;
goto v___jp_2697_;
}
v___jp_2697_:
{
lean_object* v___x_2699_; 
v___x_2699_ = lean_task_get_own(v_val_2698_);
if (lean_obj_tag(v___x_2699_) == 0)
{
lean_object* v_a_2700_; lean_object* v___x_2702_; uint8_t v_isShared_2703_; uint8_t v_isSharedCheck_2707_; 
v_a_2700_ = lean_ctor_get(v___x_2699_, 0);
v_isSharedCheck_2707_ = !lean_is_exclusive(v___x_2699_);
if (v_isSharedCheck_2707_ == 0)
{
v___x_2702_ = v___x_2699_;
v_isShared_2703_ = v_isSharedCheck_2707_;
goto v_resetjp_2701_;
}
else
{
lean_inc(v_a_2700_);
lean_dec(v___x_2699_);
v___x_2702_ = lean_box(0);
v_isShared_2703_ = v_isSharedCheck_2707_;
goto v_resetjp_2701_;
}
v_resetjp_2701_:
{
lean_object* v___x_2705_; 
if (v_isShared_2703_ == 0)
{
lean_ctor_set_tag(v___x_2702_, 1);
v___x_2705_ = v___x_2702_;
goto v_reusejp_2704_;
}
else
{
lean_object* v_reuseFailAlloc_2706_; 
v_reuseFailAlloc_2706_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2706_, 0, v_a_2700_);
v___x_2705_ = v_reuseFailAlloc_2706_;
goto v_reusejp_2704_;
}
v_reusejp_2704_:
{
return v___x_2705_;
}
}
}
else
{
lean_object* v_a_2708_; lean_object* v___x_2710_; uint8_t v_isShared_2711_; uint8_t v_isSharedCheck_2715_; 
v_a_2708_ = lean_ctor_get(v___x_2699_, 0);
v_isSharedCheck_2715_ = !lean_is_exclusive(v___x_2699_);
if (v_isSharedCheck_2715_ == 0)
{
v___x_2710_ = v___x_2699_;
v_isShared_2711_ = v_isSharedCheck_2715_;
goto v_resetjp_2709_;
}
else
{
lean_inc(v_a_2708_);
lean_dec(v___x_2699_);
v___x_2710_ = lean_box(0);
v_isShared_2711_ = v_isSharedCheck_2715_;
goto v_resetjp_2709_;
}
v_resetjp_2709_:
{
lean_object* v___x_2713_; 
if (v_isShared_2711_ == 0)
{
lean_ctor_set_tag(v___x_2710_, 0);
v___x_2713_ = v___x_2710_;
goto v_reusejp_2712_;
}
else
{
lean_object* v_reuseFailAlloc_2714_; 
v_reuseFailAlloc_2714_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2714_, 0, v_a_2708_);
v___x_2713_ = v_reuseFailAlloc_2714_;
goto v_reusejp_2712_;
}
v_reusejp_2712_:
{
return v___x_2713_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_wait___redArg___boxed(lean_object* v_self_2720_, lean_object* v___y_2721_){
_start:
{
lean_object* v_res_2722_; 
v_res_2722_ = l_Std_Async_EAsync_wait___redArg(v_self_2720_);
return v_res_2722_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_wait(lean_object* v_00_u03b5_2723_, lean_object* v_00_u03b1_2724_, lean_object* v_self_2725_){
_start:
{
lean_object* v_val_2728_; lean_object* v___x_2746_; 
v___x_2746_ = lean_apply_1(v_self_2725_, lean_box(0));
if (lean_obj_tag(v___x_2746_) == 0)
{
lean_object* v_a_2747_; lean_object* v___x_2748_; 
v_a_2747_ = lean_ctor_get(v___x_2746_, 0);
lean_inc(v_a_2747_);
lean_dec_ref_known(v___x_2746_, 1);
v___x_2748_ = lean_task_pure(v_a_2747_);
v_val_2728_ = v___x_2748_;
goto v___jp_2727_;
}
else
{
lean_object* v_a_2749_; 
v_a_2749_ = lean_ctor_get(v___x_2746_, 0);
lean_inc_ref(v_a_2749_);
lean_dec_ref_known(v___x_2746_, 1);
v_val_2728_ = v_a_2749_;
goto v___jp_2727_;
}
v___jp_2727_:
{
lean_object* v___x_2729_; 
v___x_2729_ = lean_task_get_own(v_val_2728_);
if (lean_obj_tag(v___x_2729_) == 0)
{
lean_object* v_a_2730_; lean_object* v___x_2732_; uint8_t v_isShared_2733_; uint8_t v_isSharedCheck_2737_; 
v_a_2730_ = lean_ctor_get(v___x_2729_, 0);
v_isSharedCheck_2737_ = !lean_is_exclusive(v___x_2729_);
if (v_isSharedCheck_2737_ == 0)
{
v___x_2732_ = v___x_2729_;
v_isShared_2733_ = v_isSharedCheck_2737_;
goto v_resetjp_2731_;
}
else
{
lean_inc(v_a_2730_);
lean_dec(v___x_2729_);
v___x_2732_ = lean_box(0);
v_isShared_2733_ = v_isSharedCheck_2737_;
goto v_resetjp_2731_;
}
v_resetjp_2731_:
{
lean_object* v___x_2735_; 
if (v_isShared_2733_ == 0)
{
lean_ctor_set_tag(v___x_2732_, 1);
v___x_2735_ = v___x_2732_;
goto v_reusejp_2734_;
}
else
{
lean_object* v_reuseFailAlloc_2736_; 
v_reuseFailAlloc_2736_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2736_, 0, v_a_2730_);
v___x_2735_ = v_reuseFailAlloc_2736_;
goto v_reusejp_2734_;
}
v_reusejp_2734_:
{
return v___x_2735_;
}
}
}
else
{
lean_object* v_a_2738_; lean_object* v___x_2740_; uint8_t v_isShared_2741_; uint8_t v_isSharedCheck_2745_; 
v_a_2738_ = lean_ctor_get(v___x_2729_, 0);
v_isSharedCheck_2745_ = !lean_is_exclusive(v___x_2729_);
if (v_isSharedCheck_2745_ == 0)
{
v___x_2740_ = v___x_2729_;
v_isShared_2741_ = v_isSharedCheck_2745_;
goto v_resetjp_2739_;
}
else
{
lean_inc(v_a_2738_);
lean_dec(v___x_2729_);
v___x_2740_ = lean_box(0);
v_isShared_2741_ = v_isSharedCheck_2745_;
goto v_resetjp_2739_;
}
v_resetjp_2739_:
{
lean_object* v___x_2743_; 
if (v_isShared_2741_ == 0)
{
lean_ctor_set_tag(v___x_2740_, 0);
v___x_2743_ = v___x_2740_;
goto v_reusejp_2742_;
}
else
{
lean_object* v_reuseFailAlloc_2744_; 
v_reuseFailAlloc_2744_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2744_, 0, v_a_2738_);
v___x_2743_ = v_reuseFailAlloc_2744_;
goto v_reusejp_2742_;
}
v_reusejp_2742_:
{
return v___x_2743_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_wait___boxed(lean_object* v_00_u03b5_2750_, lean_object* v_00_u03b1_2751_, lean_object* v_self_2752_, lean_object* v___y_2753_){
_start:
{
lean_object* v_res_2754_; 
v_res_2754_ = l_Std_Async_EAsync_wait(v_00_u03b5_2750_, v_00_u03b1_2751_, v_self_2752_);
return v_res_2754_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_asTask___redArg___lam__0(lean_object* v_x_2755_){
_start:
{
if (lean_obj_tag(v_x_2755_) == 0)
{
lean_object* v_a_2756_; lean_object* v___x_2757_; 
v_a_2756_ = lean_ctor_get(v_x_2755_, 0);
lean_inc(v_a_2756_);
lean_dec_ref_known(v_x_2755_, 1);
v___x_2757_ = lean_task_pure(v_a_2756_);
return v___x_2757_;
}
else
{
lean_object* v_a_2758_; 
v_a_2758_ = lean_ctor_get(v_x_2755_, 0);
lean_inc_ref(v_a_2758_);
lean_dec_ref_known(v_x_2755_, 1);
return v_a_2758_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_asTask___redArg(lean_object* v_x_2760_, lean_object* v_prio_2761_){
_start:
{
lean_object* v___f_2763_; lean_object* v___x_2764_; lean_object* v___x_2765_; lean_object* v___x_2766_; uint8_t v___x_2767_; lean_object* v___x_2768_; lean_object* v___x_2769_; 
v___f_2763_ = ((lean_object*)(l_Std_Async_EAsync_asTask___redArg___closed__0));
v___x_2764_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_toRawBaseIO___boxed), 3, 2);
lean_closure_set(v___x_2764_, 0, lean_box(0));
lean_closure_set(v___x_2764_, 1, v_x_2760_);
v___x_2765_ = lean_io_as_task(v___x_2764_, v_prio_2761_);
v___x_2766_ = lean_unsigned_to_nat(0u);
v___x_2767_ = 1;
v___x_2768_ = lean_task_bind(v___x_2765_, v___f_2763_, v___x_2766_, v___x_2767_);
v___x_2769_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2769_, 0, v___x_2768_);
return v___x_2769_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_asTask___redArg___boxed(lean_object* v_x_2770_, lean_object* v_prio_2771_, lean_object* v___y_2772_){
_start:
{
lean_object* v_res_2773_; 
v_res_2773_ = l_Std_Async_EAsync_asTask___redArg(v_x_2770_, v_prio_2771_);
return v_res_2773_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_asTask(lean_object* v_00_u03b5_2774_, lean_object* v_00_u03b1_2775_, lean_object* v_x_2776_, lean_object* v_prio_2777_){
_start:
{
lean_object* v___f_2779_; lean_object* v___x_2780_; lean_object* v___x_2781_; lean_object* v___x_2782_; uint8_t v___x_2783_; lean_object* v___x_2784_; lean_object* v___x_2785_; 
v___f_2779_ = ((lean_object*)(l_Std_Async_EAsync_asTask___redArg___closed__0));
v___x_2780_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_toRawBaseIO___boxed), 3, 2);
lean_closure_set(v___x_2780_, 0, lean_box(0));
lean_closure_set(v___x_2780_, 1, v_x_2776_);
v___x_2781_ = lean_io_as_task(v___x_2780_, v_prio_2777_);
v___x_2782_ = lean_unsigned_to_nat(0u);
v___x_2783_ = 1;
v___x_2784_ = lean_task_bind(v___x_2781_, v___f_2779_, v___x_2782_, v___x_2783_);
v___x_2785_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2785_, 0, v___x_2784_);
return v___x_2785_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_asTask___boxed(lean_object* v_00_u03b5_2786_, lean_object* v_00_u03b1_2787_, lean_object* v_x_2788_, lean_object* v_prio_2789_, lean_object* v___y_2790_){
_start:
{
lean_object* v_res_2791_; 
v_res_2791_ = l_Std_Async_EAsync_asTask(v_00_u03b5_2786_, v_00_u03b1_2787_, v_x_2788_, v_prio_2789_);
return v_res_2791_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_block___redArg(lean_object* v_x_2792_, lean_object* v_prio_2793_){
_start:
{
lean_object* v___f_2795_; lean_object* v___x_2796_; lean_object* v___x_2797_; lean_object* v___x_2798_; uint8_t v___x_2799_; lean_object* v___x_2800_; lean_object* v___x_2801_; 
v___f_2795_ = ((lean_object*)(l_Std_Async_EAsync_asTask___redArg___closed__0));
v___x_2796_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_toRawBaseIO___boxed), 3, 2);
lean_closure_set(v___x_2796_, 0, lean_box(0));
lean_closure_set(v___x_2796_, 1, v_x_2792_);
v___x_2797_ = lean_io_as_task(v___x_2796_, v_prio_2793_);
v___x_2798_ = lean_unsigned_to_nat(0u);
v___x_2799_ = 1;
v___x_2800_ = lean_task_bind(v___x_2797_, v___f_2795_, v___x_2798_, v___x_2799_);
v___x_2801_ = lean_task_get_own(v___x_2800_);
if (lean_obj_tag(v___x_2801_) == 0)
{
lean_object* v_a_2802_; lean_object* v___x_2804_; uint8_t v_isShared_2805_; uint8_t v_isSharedCheck_2809_; 
v_a_2802_ = lean_ctor_get(v___x_2801_, 0);
v_isSharedCheck_2809_ = !lean_is_exclusive(v___x_2801_);
if (v_isSharedCheck_2809_ == 0)
{
v___x_2804_ = v___x_2801_;
v_isShared_2805_ = v_isSharedCheck_2809_;
goto v_resetjp_2803_;
}
else
{
lean_inc(v_a_2802_);
lean_dec(v___x_2801_);
v___x_2804_ = lean_box(0);
v_isShared_2805_ = v_isSharedCheck_2809_;
goto v_resetjp_2803_;
}
v_resetjp_2803_:
{
lean_object* v___x_2807_; 
if (v_isShared_2805_ == 0)
{
lean_ctor_set_tag(v___x_2804_, 1);
v___x_2807_ = v___x_2804_;
goto v_reusejp_2806_;
}
else
{
lean_object* v_reuseFailAlloc_2808_; 
v_reuseFailAlloc_2808_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2808_, 0, v_a_2802_);
v___x_2807_ = v_reuseFailAlloc_2808_;
goto v_reusejp_2806_;
}
v_reusejp_2806_:
{
return v___x_2807_;
}
}
}
else
{
lean_object* v_a_2810_; lean_object* v___x_2812_; uint8_t v_isShared_2813_; uint8_t v_isSharedCheck_2817_; 
v_a_2810_ = lean_ctor_get(v___x_2801_, 0);
v_isSharedCheck_2817_ = !lean_is_exclusive(v___x_2801_);
if (v_isSharedCheck_2817_ == 0)
{
v___x_2812_ = v___x_2801_;
v_isShared_2813_ = v_isSharedCheck_2817_;
goto v_resetjp_2811_;
}
else
{
lean_inc(v_a_2810_);
lean_dec(v___x_2801_);
v___x_2812_ = lean_box(0);
v_isShared_2813_ = v_isSharedCheck_2817_;
goto v_resetjp_2811_;
}
v_resetjp_2811_:
{
lean_object* v___x_2815_; 
if (v_isShared_2813_ == 0)
{
lean_ctor_set_tag(v___x_2812_, 0);
v___x_2815_ = v___x_2812_;
goto v_reusejp_2814_;
}
else
{
lean_object* v_reuseFailAlloc_2816_; 
v_reuseFailAlloc_2816_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2816_, 0, v_a_2810_);
v___x_2815_ = v_reuseFailAlloc_2816_;
goto v_reusejp_2814_;
}
v_reusejp_2814_:
{
return v___x_2815_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_block___redArg___boxed(lean_object* v_x_2818_, lean_object* v_prio_2819_, lean_object* v___y_2820_){
_start:
{
lean_object* v_res_2821_; 
v_res_2821_ = l_Std_Async_EAsync_block___redArg(v_x_2818_, v_prio_2819_);
return v_res_2821_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_block(lean_object* v_00_u03b5_2822_, lean_object* v_00_u03b1_2823_, lean_object* v_x_2824_, lean_object* v_prio_2825_){
_start:
{
lean_object* v___f_2827_; lean_object* v___x_2828_; lean_object* v___x_2829_; lean_object* v___x_2830_; uint8_t v___x_2831_; lean_object* v___x_2832_; lean_object* v___x_2833_; 
v___f_2827_ = ((lean_object*)(l_Std_Async_EAsync_asTask___redArg___closed__0));
v___x_2828_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_toRawBaseIO___boxed), 3, 2);
lean_closure_set(v___x_2828_, 0, lean_box(0));
lean_closure_set(v___x_2828_, 1, v_x_2824_);
v___x_2829_ = lean_io_as_task(v___x_2828_, v_prio_2825_);
v___x_2830_ = lean_unsigned_to_nat(0u);
v___x_2831_ = 1;
v___x_2832_ = lean_task_bind(v___x_2829_, v___f_2827_, v___x_2830_, v___x_2831_);
v___x_2833_ = lean_task_get_own(v___x_2832_);
if (lean_obj_tag(v___x_2833_) == 0)
{
lean_object* v_a_2834_; lean_object* v___x_2836_; uint8_t v_isShared_2837_; uint8_t v_isSharedCheck_2841_; 
v_a_2834_ = lean_ctor_get(v___x_2833_, 0);
v_isSharedCheck_2841_ = !lean_is_exclusive(v___x_2833_);
if (v_isSharedCheck_2841_ == 0)
{
v___x_2836_ = v___x_2833_;
v_isShared_2837_ = v_isSharedCheck_2841_;
goto v_resetjp_2835_;
}
else
{
lean_inc(v_a_2834_);
lean_dec(v___x_2833_);
v___x_2836_ = lean_box(0);
v_isShared_2837_ = v_isSharedCheck_2841_;
goto v_resetjp_2835_;
}
v_resetjp_2835_:
{
lean_object* v___x_2839_; 
if (v_isShared_2837_ == 0)
{
lean_ctor_set_tag(v___x_2836_, 1);
v___x_2839_ = v___x_2836_;
goto v_reusejp_2838_;
}
else
{
lean_object* v_reuseFailAlloc_2840_; 
v_reuseFailAlloc_2840_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2840_, 0, v_a_2834_);
v___x_2839_ = v_reuseFailAlloc_2840_;
goto v_reusejp_2838_;
}
v_reusejp_2838_:
{
return v___x_2839_;
}
}
}
else
{
lean_object* v_a_2842_; lean_object* v___x_2844_; uint8_t v_isShared_2845_; uint8_t v_isSharedCheck_2849_; 
v_a_2842_ = lean_ctor_get(v___x_2833_, 0);
v_isSharedCheck_2849_ = !lean_is_exclusive(v___x_2833_);
if (v_isSharedCheck_2849_ == 0)
{
v___x_2844_ = v___x_2833_;
v_isShared_2845_ = v_isSharedCheck_2849_;
goto v_resetjp_2843_;
}
else
{
lean_inc(v_a_2842_);
lean_dec(v___x_2833_);
v___x_2844_ = lean_box(0);
v_isShared_2845_ = v_isSharedCheck_2849_;
goto v_resetjp_2843_;
}
v_resetjp_2843_:
{
lean_object* v___x_2847_; 
if (v_isShared_2845_ == 0)
{
lean_ctor_set_tag(v___x_2844_, 0);
v___x_2847_ = v___x_2844_;
goto v_reusejp_2846_;
}
else
{
lean_object* v_reuseFailAlloc_2848_; 
v_reuseFailAlloc_2848_ = lean_alloc_ctor(0, 1, 0);
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
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_block___boxed(lean_object* v_00_u03b5_2850_, lean_object* v_00_u03b1_2851_, lean_object* v_x_2852_, lean_object* v_prio_2853_, lean_object* v___y_2854_){
_start:
{
lean_object* v_res_2855_; 
v_res_2855_ = l_Std_Async_EAsync_block(v_00_u03b5_2850_, v_00_u03b1_2851_, v_x_2852_, v_prio_2853_);
return v_res_2855_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_throw___redArg(lean_object* v_e_2856_){
_start:
{
lean_object* v___x_2858_; lean_object* v___x_2859_; 
v___x_2858_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2858_, 0, v_e_2856_);
v___x_2859_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2859_, 0, v___x_2858_);
return v___x_2859_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_throw___redArg___boxed(lean_object* v_e_2860_, lean_object* v___y_2861_){
_start:
{
lean_object* v_res_2862_; 
v_res_2862_ = l_Std_Async_EAsync_throw___redArg(v_e_2860_);
return v_res_2862_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_throw(lean_object* v_00_u03b5_2863_, lean_object* v_00_u03b1_2864_, lean_object* v_e_2865_){
_start:
{
lean_object* v___x_2867_; lean_object* v___x_2868_; 
v___x_2867_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2867_, 0, v_e_2865_);
v___x_2868_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2868_, 0, v___x_2867_);
return v___x_2868_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_throw___boxed(lean_object* v_00_u03b5_2869_, lean_object* v_00_u03b1_2870_, lean_object* v_e_2871_, lean_object* v___y_2872_){
_start:
{
lean_object* v_res_2873_; 
v_res_2873_ = l_Std_Async_EAsync_throw(v_00_u03b5_2869_, v_00_u03b1_2870_, v_e_2871_);
return v_res_2873_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_tryCatch___redArg___lam__0(lean_object* v_f_2874_, lean_object* v_x_2875_){
_start:
{
if (lean_obj_tag(v_x_2875_) == 0)
{
lean_object* v_a_2877_; lean_object* v___x_2878_; 
v_a_2877_ = lean_ctor_get(v_x_2875_, 0);
lean_inc(v_a_2877_);
lean_dec_ref_known(v_x_2875_, 1);
v___x_2878_ = lean_apply_2(v_f_2874_, v_a_2877_, lean_box(0));
return v___x_2878_;
}
else
{
lean_object* v___x_2879_; 
lean_dec_ref(v_f_2874_);
v___x_2879_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2879_, 0, v_x_2875_);
return v___x_2879_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_tryCatch___redArg___lam__0___boxed(lean_object* v_f_2880_, lean_object* v_x_2881_, lean_object* v___y_2882_){
_start:
{
lean_object* v_res_2883_; 
v_res_2883_ = l_Std_Async_EAsync_tryCatch___redArg___lam__0(v_f_2880_, v_x_2881_);
return v_res_2883_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_tryCatch___redArg(lean_object* v_x_2884_, lean_object* v_f_2885_, lean_object* v_prio_2886_, uint8_t v_sync_2887_){
_start:
{
lean_object* v___f_2889_; lean_object* v___x_2890_; lean_object* v___x_2891_; 
v___f_2889_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_tryCatch___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_2889_, 0, v_f_2885_);
v___x_2890_ = lean_apply_1(v_x_2884_, lean_box(0));
v___x_2891_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v_prio_2886_, v_sync_2887_, v___x_2890_, v___f_2889_);
return v___x_2891_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_tryCatch___redArg___boxed(lean_object* v_x_2892_, lean_object* v_f_2893_, lean_object* v_prio_2894_, lean_object* v_sync_2895_, lean_object* v___y_2896_){
_start:
{
uint8_t v_sync_boxed_2897_; lean_object* v_res_2898_; 
v_sync_boxed_2897_ = lean_unbox(v_sync_2895_);
v_res_2898_ = l_Std_Async_EAsync_tryCatch___redArg(v_x_2892_, v_f_2893_, v_prio_2894_, v_sync_boxed_2897_);
return v_res_2898_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_tryCatch(lean_object* v_00_u03b5_2899_, lean_object* v_00_u03b1_2900_, lean_object* v_x_2901_, lean_object* v_f_2902_, lean_object* v_prio_2903_, uint8_t v_sync_2904_){
_start:
{
lean_object* v___f_2906_; lean_object* v___x_2907_; lean_object* v___x_2908_; 
v___f_2906_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_tryCatch___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_2906_, 0, v_f_2902_);
v___x_2907_ = lean_apply_1(v_x_2901_, lean_box(0));
v___x_2908_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v_prio_2903_, v_sync_2904_, v___x_2907_, v___f_2906_);
return v___x_2908_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_tryCatch___boxed(lean_object* v_00_u03b5_2909_, lean_object* v_00_u03b1_2910_, lean_object* v_x_2911_, lean_object* v_f_2912_, lean_object* v_prio_2913_, lean_object* v_sync_2914_, lean_object* v___y_2915_){
_start:
{
uint8_t v_sync_boxed_2916_; lean_object* v_res_2917_; 
v_sync_boxed_2916_ = lean_unbox(v_sync_2914_);
v_res_2917_ = l_Std_Async_EAsync_tryCatch(v_00_u03b5_2909_, v_00_u03b1_2910_, v_x_2911_, v_f_2912_, v_prio_2913_, v_sync_boxed_2916_);
return v_res_2917_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_tryFinally_x27___redArg___lam__0(lean_object* v_a_2918_, lean_object* v_____do__lift_2919_){
_start:
{
if (lean_obj_tag(v_____do__lift_2919_) == 0)
{
lean_object* v_a_2921_; lean_object* v___x_2923_; uint8_t v_isShared_2924_; uint8_t v_isSharedCheck_2929_; 
lean_dec(v_a_2918_);
v_a_2921_ = lean_ctor_get(v_____do__lift_2919_, 0);
v_isSharedCheck_2929_ = !lean_is_exclusive(v_____do__lift_2919_);
if (v_isSharedCheck_2929_ == 0)
{
v___x_2923_ = v_____do__lift_2919_;
v_isShared_2924_ = v_isSharedCheck_2929_;
goto v_resetjp_2922_;
}
else
{
lean_inc(v_a_2921_);
lean_dec(v_____do__lift_2919_);
v___x_2923_ = lean_box(0);
v_isShared_2924_ = v_isSharedCheck_2929_;
goto v_resetjp_2922_;
}
v_resetjp_2922_:
{
lean_object* v___x_2926_; 
if (v_isShared_2924_ == 0)
{
v___x_2926_ = v___x_2923_;
goto v_reusejp_2925_;
}
else
{
lean_object* v_reuseFailAlloc_2928_; 
v_reuseFailAlloc_2928_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2928_, 0, v_a_2921_);
v___x_2926_ = v_reuseFailAlloc_2928_;
goto v_reusejp_2925_;
}
v_reusejp_2925_:
{
lean_object* v___x_2927_; 
v___x_2927_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2927_, 0, v___x_2926_);
return v___x_2927_;
}
}
}
else
{
lean_object* v___x_2931_; uint8_t v_isShared_2932_; uint8_t v_isSharedCheck_2937_; 
v_isSharedCheck_2937_ = !lean_is_exclusive(v_____do__lift_2919_);
if (v_isSharedCheck_2937_ == 0)
{
lean_object* v_unused_2938_; 
v_unused_2938_ = lean_ctor_get(v_____do__lift_2919_, 0);
lean_dec(v_unused_2938_);
v___x_2931_ = v_____do__lift_2919_;
v_isShared_2932_ = v_isSharedCheck_2937_;
goto v_resetjp_2930_;
}
else
{
lean_dec(v_____do__lift_2919_);
v___x_2931_ = lean_box(0);
v_isShared_2932_ = v_isSharedCheck_2937_;
goto v_resetjp_2930_;
}
v_resetjp_2930_:
{
lean_object* v___x_2934_; 
if (v_isShared_2932_ == 0)
{
lean_ctor_set_tag(v___x_2931_, 0);
lean_ctor_set(v___x_2931_, 0, v_a_2918_);
v___x_2934_ = v___x_2931_;
goto v_reusejp_2933_;
}
else
{
lean_object* v_reuseFailAlloc_2936_; 
v_reuseFailAlloc_2936_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2936_, 0, v_a_2918_);
v___x_2934_ = v_reuseFailAlloc_2936_;
goto v_reusejp_2933_;
}
v_reusejp_2933_:
{
lean_object* v___x_2935_; 
v___x_2935_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2935_, 0, v___x_2934_);
return v___x_2935_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_tryFinally_x27___redArg___lam__0___boxed(lean_object* v_a_2939_, lean_object* v_____do__lift_2940_, lean_object* v___y_2941_){
_start:
{
lean_object* v_res_2942_; 
v_res_2942_ = l_Std_Async_EAsync_tryFinally_x27___redArg___lam__0(v_a_2939_, v_____do__lift_2940_);
return v_res_2942_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_tryFinally_x27___redArg___lam__1(lean_object* v_a_2943_, lean_object* v_____do__lift_2944_){
_start:
{
if (lean_obj_tag(v_____do__lift_2944_) == 0)
{
lean_object* v_a_2946_; lean_object* v___x_2948_; uint8_t v_isShared_2949_; uint8_t v_isSharedCheck_2954_; 
lean_dec(v_a_2943_);
v_a_2946_ = lean_ctor_get(v_____do__lift_2944_, 0);
v_isSharedCheck_2954_ = !lean_is_exclusive(v_____do__lift_2944_);
if (v_isSharedCheck_2954_ == 0)
{
v___x_2948_ = v_____do__lift_2944_;
v_isShared_2949_ = v_isSharedCheck_2954_;
goto v_resetjp_2947_;
}
else
{
lean_inc(v_a_2946_);
lean_dec(v_____do__lift_2944_);
v___x_2948_ = lean_box(0);
v_isShared_2949_ = v_isSharedCheck_2954_;
goto v_resetjp_2947_;
}
v_resetjp_2947_:
{
lean_object* v___x_2951_; 
if (v_isShared_2949_ == 0)
{
v___x_2951_ = v___x_2948_;
goto v_reusejp_2950_;
}
else
{
lean_object* v_reuseFailAlloc_2953_; 
v_reuseFailAlloc_2953_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2953_, 0, v_a_2946_);
v___x_2951_ = v_reuseFailAlloc_2953_;
goto v_reusejp_2950_;
}
v_reusejp_2950_:
{
lean_object* v___x_2952_; 
v___x_2952_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2952_, 0, v___x_2951_);
return v___x_2952_;
}
}
}
else
{
lean_object* v_a_2955_; lean_object* v___x_2957_; uint8_t v_isShared_2958_; uint8_t v_isSharedCheck_2964_; 
v_a_2955_ = lean_ctor_get(v_____do__lift_2944_, 0);
v_isSharedCheck_2964_ = !lean_is_exclusive(v_____do__lift_2944_);
if (v_isSharedCheck_2964_ == 0)
{
v___x_2957_ = v_____do__lift_2944_;
v_isShared_2958_ = v_isSharedCheck_2964_;
goto v_resetjp_2956_;
}
else
{
lean_inc(v_a_2955_);
lean_dec(v_____do__lift_2944_);
v___x_2957_ = lean_box(0);
v_isShared_2958_ = v_isSharedCheck_2964_;
goto v_resetjp_2956_;
}
v_resetjp_2956_:
{
lean_object* v___x_2959_; lean_object* v___x_2961_; 
v___x_2959_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2959_, 0, v_a_2943_);
lean_ctor_set(v___x_2959_, 1, v_a_2955_);
if (v_isShared_2958_ == 0)
{
lean_ctor_set(v___x_2957_, 0, v___x_2959_);
v___x_2961_ = v___x_2957_;
goto v_reusejp_2960_;
}
else
{
lean_object* v_reuseFailAlloc_2963_; 
v_reuseFailAlloc_2963_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2963_, 0, v___x_2959_);
v___x_2961_ = v_reuseFailAlloc_2963_;
goto v_reusejp_2960_;
}
v_reusejp_2960_:
{
lean_object* v___x_2962_; 
v___x_2962_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2962_, 0, v___x_2961_);
return v___x_2962_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_tryFinally_x27___redArg___lam__1___boxed(lean_object* v_a_2965_, lean_object* v_____do__lift_2966_, lean_object* v___y_2967_){
_start:
{
lean_object* v_res_2968_; 
v_res_2968_ = l_Std_Async_EAsync_tryFinally_x27___redArg___lam__1(v_a_2965_, v_____do__lift_2966_);
return v_res_2968_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_tryFinally_x27___redArg___lam__2(lean_object* v_f_2969_, lean_object* v_x_2970_){
_start:
{
if (lean_obj_tag(v_x_2970_) == 0)
{
lean_object* v_a_2972_; lean_object* v___f_2973_; lean_object* v___x_2974_; lean_object* v___x_2975_; uint8_t v___x_2976_; lean_object* v___x_2977_; lean_object* v___x_2978_; 
v_a_2972_ = lean_ctor_get(v_x_2970_, 0);
lean_inc(v_a_2972_);
lean_dec_ref_known(v_x_2970_, 1);
v___f_2973_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_tryFinally_x27___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_2973_, 0, v_a_2972_);
v___x_2974_ = lean_box(0);
v___x_2975_ = lean_unsigned_to_nat(0u);
v___x_2976_ = 0;
v___x_2977_ = lean_apply_2(v_f_2969_, v___x_2974_, lean_box(0));
v___x_2978_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2975_, v___x_2976_, v___x_2977_, v___f_2973_);
return v___x_2978_;
}
else
{
lean_object* v_a_2979_; lean_object* v___x_2981_; uint8_t v_isShared_2982_; uint8_t v_isSharedCheck_2991_; 
v_a_2979_ = lean_ctor_get(v_x_2970_, 0);
v_isSharedCheck_2991_ = !lean_is_exclusive(v_x_2970_);
if (v_isSharedCheck_2991_ == 0)
{
v___x_2981_ = v_x_2970_;
v_isShared_2982_ = v_isSharedCheck_2991_;
goto v_resetjp_2980_;
}
else
{
lean_inc(v_a_2979_);
lean_dec(v_x_2970_);
v___x_2981_ = lean_box(0);
v_isShared_2982_ = v_isSharedCheck_2991_;
goto v_resetjp_2980_;
}
v_resetjp_2980_:
{
lean_object* v___f_2983_; lean_object* v___x_2985_; 
lean_inc(v_a_2979_);
v___f_2983_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_tryFinally_x27___redArg___lam__1___boxed), 3, 1);
lean_closure_set(v___f_2983_, 0, v_a_2979_);
if (v_isShared_2982_ == 0)
{
v___x_2985_ = v___x_2981_;
goto v_reusejp_2984_;
}
else
{
lean_object* v_reuseFailAlloc_2990_; 
v_reuseFailAlloc_2990_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2990_, 0, v_a_2979_);
v___x_2985_ = v_reuseFailAlloc_2990_;
goto v_reusejp_2984_;
}
v_reusejp_2984_:
{
lean_object* v___x_2986_; uint8_t v___x_2987_; lean_object* v___x_2988_; lean_object* v___x_2989_; 
v___x_2986_ = lean_unsigned_to_nat(0u);
v___x_2987_ = 0;
v___x_2988_ = lean_apply_2(v_f_2969_, v___x_2985_, lean_box(0));
v___x_2989_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2986_, v___x_2987_, v___x_2988_, v___f_2983_);
return v___x_2989_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_tryFinally_x27___redArg___lam__2___boxed(lean_object* v_f_2992_, lean_object* v_x_2993_, lean_object* v___y_2994_){
_start:
{
lean_object* v_res_2995_; 
v_res_2995_ = l_Std_Async_EAsync_tryFinally_x27___redArg___lam__2(v_f_2992_, v_x_2993_);
return v_res_2995_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_tryFinally_x27___redArg(lean_object* v_x_2996_, lean_object* v_f_2997_, lean_object* v_prio_2998_, uint8_t v_sync_2999_){
_start:
{
lean_object* v___f_3001_; lean_object* v___x_3002_; lean_object* v___x_3003_; 
v___f_3001_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_tryFinally_x27___redArg___lam__2___boxed), 3, 1);
lean_closure_set(v___f_3001_, 0, v_f_2997_);
v___x_3002_ = lean_apply_1(v_x_2996_, lean_box(0));
v___x_3003_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v_prio_2998_, v_sync_2999_, v___x_3002_, v___f_3001_);
return v___x_3003_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_tryFinally_x27___redArg___boxed(lean_object* v_x_3004_, lean_object* v_f_3005_, lean_object* v_prio_3006_, lean_object* v_sync_3007_, lean_object* v___y_3008_){
_start:
{
uint8_t v_sync_boxed_3009_; lean_object* v_res_3010_; 
v_sync_boxed_3009_ = lean_unbox(v_sync_3007_);
v_res_3010_ = l_Std_Async_EAsync_tryFinally_x27___redArg(v_x_3004_, v_f_3005_, v_prio_3006_, v_sync_boxed_3009_);
return v_res_3010_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_tryFinally_x27(lean_object* v_00_u03b5_3011_, lean_object* v_00_u03b1_3012_, lean_object* v_00_u03b2_3013_, lean_object* v_x_3014_, lean_object* v_f_3015_, lean_object* v_prio_3016_, uint8_t v_sync_3017_){
_start:
{
lean_object* v___x_3019_; 
v___x_3019_ = l_Std_Async_EAsync_tryFinally_x27___redArg(v_x_3014_, v_f_3015_, v_prio_3016_, v_sync_3017_);
return v___x_3019_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_tryFinally_x27___boxed(lean_object* v_00_u03b5_3020_, lean_object* v_00_u03b1_3021_, lean_object* v_00_u03b2_3022_, lean_object* v_x_3023_, lean_object* v_f_3024_, lean_object* v_prio_3025_, lean_object* v_sync_3026_, lean_object* v___y_3027_){
_start:
{
uint8_t v_sync_boxed_3028_; lean_object* v_res_3029_; 
v_sync_boxed_3028_ = lean_unbox(v_sync_3026_);
v_res_3029_ = l_Std_Async_EAsync_tryFinally_x27(v_00_u03b5_3020_, v_00_u03b1_3021_, v_00_u03b2_3022_, v_x_3023_, v_f_3024_, v_prio_3025_, v_sync_boxed_3028_);
return v_res_3029_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_await___redArg(lean_object* v_x_3030_){
_start:
{
lean_object* v___x_3032_; 
v___x_3032_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3032_, 0, v_x_3030_);
return v___x_3032_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_await___redArg___boxed(lean_object* v_x_3033_, lean_object* v___y_3034_){
_start:
{
lean_object* v_res_3035_; 
v_res_3035_ = l_Std_Async_EAsync_await___redArg(v_x_3033_);
return v_res_3035_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_await(lean_object* v_00_u03b5_3036_, lean_object* v_00_u03b1_3037_, lean_object* v_x_3038_){
_start:
{
lean_object* v___x_3040_; 
v___x_3040_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3040_, 0, v_x_3038_);
return v___x_3040_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_await___boxed(lean_object* v_00_u03b5_3041_, lean_object* v_00_u03b1_3042_, lean_object* v_x_3043_, lean_object* v___y_3044_){
_start:
{
lean_object* v_res_3045_; 
v_res_3045_ = l_Std_Async_EAsync_await(v_00_u03b5_3041_, v_00_u03b1_3042_, v_x_3043_);
return v_res_3045_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_async___redArg(lean_object* v_self_3046_, lean_object* v_prio_3047_){
_start:
{
lean_object* v___f_3049_; lean_object* v___x_3050_; lean_object* v___x_3051_; lean_object* v___x_3052_; uint8_t v___x_3053_; lean_object* v___x_3054_; lean_object* v___x_3055_; lean_object* v___x_3056_; 
v___f_3049_ = ((lean_object*)(l_Std_Async_EAsync_asTask___redArg___closed__0));
v___x_3050_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_toRawBaseIO___boxed), 3, 2);
lean_closure_set(v___x_3050_, 0, lean_box(0));
lean_closure_set(v___x_3050_, 1, v_self_3046_);
v___x_3051_ = lean_io_as_task(v___x_3050_, v_prio_3047_);
v___x_3052_ = lean_unsigned_to_nat(0u);
v___x_3053_ = 1;
v___x_3054_ = lean_task_bind(v___x_3051_, v___f_3049_, v___x_3052_, v___x_3053_);
v___x_3055_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3055_, 0, v___x_3054_);
v___x_3056_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3056_, 0, v___x_3055_);
return v___x_3056_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_async___redArg___boxed(lean_object* v_self_3057_, lean_object* v_prio_3058_, lean_object* v___y_3059_){
_start:
{
lean_object* v_res_3060_; 
v_res_3060_ = l_Std_Async_EAsync_async___redArg(v_self_3057_, v_prio_3058_);
return v_res_3060_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_async(lean_object* v_00_u03b5_3061_, lean_object* v_00_u03b1_3062_, lean_object* v_self_3063_, lean_object* v_prio_3064_){
_start:
{
lean_object* v___f_3066_; lean_object* v___x_3067_; lean_object* v___x_3068_; lean_object* v___x_3069_; uint8_t v___x_3070_; lean_object* v___x_3071_; lean_object* v___x_3072_; lean_object* v___x_3073_; 
v___f_3066_ = ((lean_object*)(l_Std_Async_EAsync_asTask___redArg___closed__0));
v___x_3067_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_toRawBaseIO___boxed), 3, 2);
lean_closure_set(v___x_3067_, 0, lean_box(0));
lean_closure_set(v___x_3067_, 1, v_self_3063_);
v___x_3068_ = lean_io_as_task(v___x_3067_, v_prio_3064_);
v___x_3069_ = lean_unsigned_to_nat(0u);
v___x_3070_ = 1;
v___x_3071_ = lean_task_bind(v___x_3068_, v___f_3066_, v___x_3069_, v___x_3070_);
v___x_3072_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3072_, 0, v___x_3071_);
v___x_3073_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3073_, 0, v___x_3072_);
return v___x_3073_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_async___boxed(lean_object* v_00_u03b5_3074_, lean_object* v_00_u03b1_3075_, lean_object* v_self_3076_, lean_object* v_prio_3077_, lean_object* v___y_3078_){
_start:
{
lean_object* v_res_3079_; 
v_res_3079_ = l_Std_Async_EAsync_async(v_00_u03b5_3074_, v_00_u03b1_3075_, v_self_3076_, v_prio_3077_);
return v_res_3079_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instFunctor___redArg___lam__0(lean_object* v_00_u03b1_3080_, lean_object* v_00_u03b2_3081_, lean_object* v___y_3082_, lean_object* v___y_3083_){
_start:
{
lean_object* v___x_3085_; lean_object* v___x_3086_; uint8_t v___x_3087_; lean_object* v___x_3088_; lean_object* v___y_3090_; 
lean_inc(v___y_3082_);
v___x_3085_ = lean_alloc_closure((void*)(l_Except_map), 5, 4);
lean_closure_set(v___x_3085_, 0, lean_box(0));
lean_closure_set(v___x_3085_, 1, lean_box(0));
lean_closure_set(v___x_3085_, 2, lean_box(0));
lean_closure_set(v___x_3085_, 3, v___y_3082_);
v___x_3086_ = lean_unsigned_to_nat(0u);
v___x_3087_ = 0;
v___x_3088_ = lean_apply_1(v___y_3083_, lean_box(0));
if (lean_obj_tag(v___x_3088_) == 0)
{
lean_object* v_a_3092_; 
lean_dec_ref(v___x_3085_);
v_a_3092_ = lean_ctor_get(v___x_3088_, 0);
lean_inc(v_a_3092_);
lean_dec_ref_known(v___x_3088_, 1);
if (lean_obj_tag(v_a_3092_) == 0)
{
lean_object* v_a_3093_; lean_object* v___x_3095_; uint8_t v_isShared_3096_; uint8_t v_isSharedCheck_3100_; 
lean_dec(v___y_3082_);
v_a_3093_ = lean_ctor_get(v_a_3092_, 0);
v_isSharedCheck_3100_ = !lean_is_exclusive(v_a_3092_);
if (v_isSharedCheck_3100_ == 0)
{
v___x_3095_ = v_a_3092_;
v_isShared_3096_ = v_isSharedCheck_3100_;
goto v_resetjp_3094_;
}
else
{
lean_inc(v_a_3093_);
lean_dec(v_a_3092_);
v___x_3095_ = lean_box(0);
v_isShared_3096_ = v_isSharedCheck_3100_;
goto v_resetjp_3094_;
}
v_resetjp_3094_:
{
lean_object* v___x_3098_; 
if (v_isShared_3096_ == 0)
{
v___x_3098_ = v___x_3095_;
goto v_reusejp_3097_;
}
else
{
lean_object* v_reuseFailAlloc_3099_; 
v_reuseFailAlloc_3099_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3099_, 0, v_a_3093_);
v___x_3098_ = v_reuseFailAlloc_3099_;
goto v_reusejp_3097_;
}
v_reusejp_3097_:
{
v___y_3090_ = v___x_3098_;
goto v___jp_3089_;
}
}
}
else
{
lean_object* v_a_3101_; lean_object* v___x_3103_; uint8_t v_isShared_3104_; uint8_t v_isSharedCheck_3109_; 
v_a_3101_ = lean_ctor_get(v_a_3092_, 0);
v_isSharedCheck_3109_ = !lean_is_exclusive(v_a_3092_);
if (v_isSharedCheck_3109_ == 0)
{
v___x_3103_ = v_a_3092_;
v_isShared_3104_ = v_isSharedCheck_3109_;
goto v_resetjp_3102_;
}
else
{
lean_inc(v_a_3101_);
lean_dec(v_a_3092_);
v___x_3103_ = lean_box(0);
v_isShared_3104_ = v_isSharedCheck_3109_;
goto v_resetjp_3102_;
}
v_resetjp_3102_:
{
lean_object* v___x_3105_; lean_object* v___x_3107_; 
v___x_3105_ = lean_apply_1(v___y_3082_, v_a_3101_);
if (v_isShared_3104_ == 0)
{
lean_ctor_set(v___x_3103_, 0, v___x_3105_);
v___x_3107_ = v___x_3103_;
goto v_reusejp_3106_;
}
else
{
lean_object* v_reuseFailAlloc_3108_; 
v_reuseFailAlloc_3108_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3108_, 0, v___x_3105_);
v___x_3107_ = v_reuseFailAlloc_3108_;
goto v_reusejp_3106_;
}
v_reusejp_3106_:
{
v___y_3090_ = v___x_3107_;
goto v___jp_3089_;
}
}
}
}
else
{
lean_object* v_a_3110_; lean_object* v___x_3112_; uint8_t v_isShared_3113_; uint8_t v_isSharedCheck_3118_; 
lean_dec(v___y_3082_);
v_a_3110_ = lean_ctor_get(v___x_3088_, 0);
v_isSharedCheck_3118_ = !lean_is_exclusive(v___x_3088_);
if (v_isSharedCheck_3118_ == 0)
{
v___x_3112_ = v___x_3088_;
v_isShared_3113_ = v_isSharedCheck_3118_;
goto v_resetjp_3111_;
}
else
{
lean_inc(v_a_3110_);
lean_dec(v___x_3088_);
v___x_3112_ = lean_box(0);
v_isShared_3113_ = v_isSharedCheck_3118_;
goto v_resetjp_3111_;
}
v_resetjp_3111_:
{
lean_object* v___x_3114_; lean_object* v___x_3116_; 
v___x_3114_ = lean_task_map(v___x_3085_, v_a_3110_, v___x_3086_, v___x_3087_);
if (v_isShared_3113_ == 0)
{
lean_ctor_set(v___x_3112_, 0, v___x_3114_);
v___x_3116_ = v___x_3112_;
goto v_reusejp_3115_;
}
else
{
lean_object* v_reuseFailAlloc_3117_; 
v_reuseFailAlloc_3117_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3117_, 0, v___x_3114_);
v___x_3116_ = v_reuseFailAlloc_3117_;
goto v_reusejp_3115_;
}
v_reusejp_3115_:
{
return v___x_3116_;
}
}
}
v___jp_3089_:
{
lean_object* v___x_3091_; 
v___x_3091_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3091_, 0, v___y_3090_);
return v___x_3091_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instFunctor___redArg___lam__0___boxed(lean_object* v_00_u03b1_3119_, lean_object* v_00_u03b2_3120_, lean_object* v___y_3121_, lean_object* v___y_3122_, lean_object* v___y_3123_){
_start:
{
lean_object* v_res_3124_; 
v_res_3124_ = l_Std_Async_EAsync_instFunctor___redArg___lam__0(v_00_u03b1_3119_, v_00_u03b2_3120_, v___y_3121_, v___y_3122_);
return v_res_3124_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instFunctor___redArg___lam__1(lean_object* v___f_3125_, lean_object* v_00_u03b1_3126_, lean_object* v_00_u03b2_3127_, lean_object* v___y_3128_, lean_object* v___y_3129_){
_start:
{
lean_object* v___x_3131_; lean_object* v___x_3132_; 
v___x_3131_ = lean_alloc_closure((void*)(l_Function_const___boxed), 4, 3);
lean_closure_set(v___x_3131_, 0, lean_box(0));
lean_closure_set(v___x_3131_, 1, lean_box(0));
lean_closure_set(v___x_3131_, 2, v___y_3128_);
v___x_3132_ = lean_apply_5(v___f_3125_, lean_box(0), lean_box(0), v___x_3131_, v___y_3129_, lean_box(0));
return v___x_3132_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instFunctor___redArg___lam__1___boxed(lean_object* v___f_3133_, lean_object* v_00_u03b1_3134_, lean_object* v_00_u03b2_3135_, lean_object* v___y_3136_, lean_object* v___y_3137_, lean_object* v___y_3138_){
_start:
{
lean_object* v_res_3139_; 
v_res_3139_ = l_Std_Async_EAsync_instFunctor___redArg___lam__1(v___f_3133_, v_00_u03b1_3134_, v_00_u03b2_3135_, v___y_3136_, v___y_3137_);
return v_res_3139_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instFunctor___redArg(){
_start:
{
lean_object* v___x_3147_; 
v___x_3147_ = ((lean_object*)(l_Std_Async_EAsync_instFunctor___redArg___closed__2));
return v___x_3147_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instFunctor___redArg___boxed(lean_object* v___dummy_3148_){
_start:
{
lean_object* v_res_3149_; 
v_res_3149_ = l_Std_Async_EAsync_instFunctor___redArg();
return v_res_3149_;
}
}
static lean_object* _init_l_Std_Async_EAsync_instFunctor___closed__0(void){
_start:
{
lean_object* v___x_3150_; 
v___x_3150_ = l_Std_Async_EAsync_instFunctor___redArg();
return v___x_3150_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instFunctor(lean_object* v_00_u03b5_3151_){
_start:
{
lean_object* v___x_3152_; 
v___x_3152_ = lean_obj_once(&l_Std_Async_EAsync_instFunctor___closed__0, &l_Std_Async_EAsync_instFunctor___closed__0_once, _init_l_Std_Async_EAsync_instFunctor___closed__0);
return v___x_3152_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonad___redArg___lam__0(lean_object* v_00_u03b1_3153_, lean_object* v___y_3154_){
_start:
{
lean_object* v___x_3156_; lean_object* v___x_3157_; 
v___x_3156_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3156_, 0, v___y_3154_);
v___x_3157_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3157_, 0, v___x_3156_);
return v___x_3157_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonad___redArg___lam__0___boxed(lean_object* v_00_u03b1_3158_, lean_object* v___y_3159_, lean_object* v___y_3160_){
_start:
{
lean_object* v_res_3161_; 
v_res_3161_ = l_Std_Async_EAsync_instMonad___redArg___lam__0(v_00_u03b1_3158_, v___y_3159_);
return v_res_3161_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonad___redArg___lam__1(lean_object* v_x_3162_, lean_object* v_x_3163_){
_start:
{
if (lean_obj_tag(v_x_3163_) == 0)
{
lean_object* v_a_3165_; lean_object* v___x_3167_; uint8_t v_isShared_3168_; uint8_t v_isSharedCheck_3173_; 
lean_dec_ref(v_x_3162_);
v_a_3165_ = lean_ctor_get(v_x_3163_, 0);
v_isSharedCheck_3173_ = !lean_is_exclusive(v_x_3163_);
if (v_isSharedCheck_3173_ == 0)
{
v___x_3167_ = v_x_3163_;
v_isShared_3168_ = v_isSharedCheck_3173_;
goto v_resetjp_3166_;
}
else
{
lean_inc(v_a_3165_);
lean_dec(v_x_3163_);
v___x_3167_ = lean_box(0);
v_isShared_3168_ = v_isSharedCheck_3173_;
goto v_resetjp_3166_;
}
v_resetjp_3166_:
{
lean_object* v___x_3170_; 
if (v_isShared_3168_ == 0)
{
v___x_3170_ = v___x_3167_;
goto v_reusejp_3169_;
}
else
{
lean_object* v_reuseFailAlloc_3172_; 
v_reuseFailAlloc_3172_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3172_, 0, v_a_3165_);
v___x_3170_ = v_reuseFailAlloc_3172_;
goto v_reusejp_3169_;
}
v_reusejp_3169_:
{
lean_object* v___x_3171_; 
v___x_3171_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3171_, 0, v___x_3170_);
return v___x_3171_;
}
}
}
else
{
lean_object* v_a_3174_; lean_object* v___x_3175_; lean_object* v___x_3176_; lean_object* v___x_3177_; uint8_t v___x_3178_; lean_object* v___x_3179_; lean_object* v___y_3181_; 
v_a_3174_ = lean_ctor_get(v_x_3163_, 0);
lean_inc_n(v_a_3174_, 2);
lean_dec_ref_known(v_x_3163_, 1);
v___x_3175_ = lean_box(0);
v___x_3176_ = lean_alloc_closure((void*)(l_Except_map), 5, 4);
lean_closure_set(v___x_3176_, 0, lean_box(0));
lean_closure_set(v___x_3176_, 1, lean_box(0));
lean_closure_set(v___x_3176_, 2, lean_box(0));
lean_closure_set(v___x_3176_, 3, v_a_3174_);
v___x_3177_ = lean_unsigned_to_nat(0u);
v___x_3178_ = 0;
v___x_3179_ = lean_apply_2(v_x_3162_, v___x_3175_, lean_box(0));
if (lean_obj_tag(v___x_3179_) == 0)
{
lean_object* v_a_3183_; 
lean_dec_ref(v___x_3176_);
v_a_3183_ = lean_ctor_get(v___x_3179_, 0);
lean_inc(v_a_3183_);
lean_dec_ref_known(v___x_3179_, 1);
if (lean_obj_tag(v_a_3183_) == 0)
{
lean_object* v_a_3184_; lean_object* v___x_3186_; uint8_t v_isShared_3187_; uint8_t v_isSharedCheck_3191_; 
lean_dec(v_a_3174_);
v_a_3184_ = lean_ctor_get(v_a_3183_, 0);
v_isSharedCheck_3191_ = !lean_is_exclusive(v_a_3183_);
if (v_isSharedCheck_3191_ == 0)
{
v___x_3186_ = v_a_3183_;
v_isShared_3187_ = v_isSharedCheck_3191_;
goto v_resetjp_3185_;
}
else
{
lean_inc(v_a_3184_);
lean_dec(v_a_3183_);
v___x_3186_ = lean_box(0);
v_isShared_3187_ = v_isSharedCheck_3191_;
goto v_resetjp_3185_;
}
v_resetjp_3185_:
{
lean_object* v___x_3189_; 
if (v_isShared_3187_ == 0)
{
v___x_3189_ = v___x_3186_;
goto v_reusejp_3188_;
}
else
{
lean_object* v_reuseFailAlloc_3190_; 
v_reuseFailAlloc_3190_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3190_, 0, v_a_3184_);
v___x_3189_ = v_reuseFailAlloc_3190_;
goto v_reusejp_3188_;
}
v_reusejp_3188_:
{
v___y_3181_ = v___x_3189_;
goto v___jp_3180_;
}
}
}
else
{
lean_object* v_a_3192_; lean_object* v___x_3194_; uint8_t v_isShared_3195_; uint8_t v_isSharedCheck_3200_; 
v_a_3192_ = lean_ctor_get(v_a_3183_, 0);
v_isSharedCheck_3200_ = !lean_is_exclusive(v_a_3183_);
if (v_isSharedCheck_3200_ == 0)
{
v___x_3194_ = v_a_3183_;
v_isShared_3195_ = v_isSharedCheck_3200_;
goto v_resetjp_3193_;
}
else
{
lean_inc(v_a_3192_);
lean_dec(v_a_3183_);
v___x_3194_ = lean_box(0);
v_isShared_3195_ = v_isSharedCheck_3200_;
goto v_resetjp_3193_;
}
v_resetjp_3193_:
{
lean_object* v___x_3196_; lean_object* v___x_3198_; 
v___x_3196_ = lean_apply_1(v_a_3174_, v_a_3192_);
if (v_isShared_3195_ == 0)
{
lean_ctor_set(v___x_3194_, 0, v___x_3196_);
v___x_3198_ = v___x_3194_;
goto v_reusejp_3197_;
}
else
{
lean_object* v_reuseFailAlloc_3199_; 
v_reuseFailAlloc_3199_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3199_, 0, v___x_3196_);
v___x_3198_ = v_reuseFailAlloc_3199_;
goto v_reusejp_3197_;
}
v_reusejp_3197_:
{
v___y_3181_ = v___x_3198_;
goto v___jp_3180_;
}
}
}
}
else
{
lean_object* v_a_3201_; lean_object* v___x_3203_; uint8_t v_isShared_3204_; uint8_t v_isSharedCheck_3209_; 
lean_dec(v_a_3174_);
v_a_3201_ = lean_ctor_get(v___x_3179_, 0);
v_isSharedCheck_3209_ = !lean_is_exclusive(v___x_3179_);
if (v_isSharedCheck_3209_ == 0)
{
v___x_3203_ = v___x_3179_;
v_isShared_3204_ = v_isSharedCheck_3209_;
goto v_resetjp_3202_;
}
else
{
lean_inc(v_a_3201_);
lean_dec(v___x_3179_);
v___x_3203_ = lean_box(0);
v_isShared_3204_ = v_isSharedCheck_3209_;
goto v_resetjp_3202_;
}
v_resetjp_3202_:
{
lean_object* v___x_3205_; lean_object* v___x_3207_; 
v___x_3205_ = lean_task_map(v___x_3176_, v_a_3201_, v___x_3177_, v___x_3178_);
if (v_isShared_3204_ == 0)
{
lean_ctor_set(v___x_3203_, 0, v___x_3205_);
v___x_3207_ = v___x_3203_;
goto v_reusejp_3206_;
}
else
{
lean_object* v_reuseFailAlloc_3208_; 
v_reuseFailAlloc_3208_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3208_, 0, v___x_3205_);
v___x_3207_ = v_reuseFailAlloc_3208_;
goto v_reusejp_3206_;
}
v_reusejp_3206_:
{
return v___x_3207_;
}
}
}
v___jp_3180_:
{
lean_object* v___x_3182_; 
v___x_3182_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3182_, 0, v___y_3181_);
return v___x_3182_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonad___redArg___lam__1___boxed(lean_object* v_x_3210_, lean_object* v_x_3211_, lean_object* v___y_3212_){
_start:
{
lean_object* v_res_3213_; 
v_res_3213_ = l_Std_Async_EAsync_instMonad___redArg___lam__1(v_x_3210_, v_x_3211_);
return v_res_3213_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonad___redArg___lam__2(lean_object* v_00_u03b1_3214_, lean_object* v_00_u03b2_3215_, lean_object* v_f_3216_, lean_object* v_x_3217_){
_start:
{
lean_object* v___f_3219_; lean_object* v___x_3220_; uint8_t v___x_3221_; lean_object* v___x_3222_; lean_object* v___x_3223_; 
v___f_3219_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_instMonad___redArg___lam__1___boxed), 3, 1);
lean_closure_set(v___f_3219_, 0, v_x_3217_);
v___x_3220_ = lean_unsigned_to_nat(0u);
v___x_3221_ = 0;
v___x_3222_ = lean_apply_1(v_f_3216_, lean_box(0));
v___x_3223_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3220_, v___x_3221_, v___x_3222_, v___f_3219_);
return v___x_3223_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonad___redArg___lam__2___boxed(lean_object* v_00_u03b1_3224_, lean_object* v_00_u03b2_3225_, lean_object* v_f_3226_, lean_object* v_x_3227_, lean_object* v___y_3228_){
_start:
{
lean_object* v_res_3229_; 
v_res_3229_ = l_Std_Async_EAsync_instMonad___redArg___lam__2(v_00_u03b1_3224_, v_00_u03b2_3225_, v_f_3226_, v_x_3227_);
return v_res_3229_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonad___redArg___lam__3(lean_object* v___f_3230_, lean_object* v_a_3231_, lean_object* v_x_3232_){
_start:
{
if (lean_obj_tag(v_x_3232_) == 0)
{
lean_object* v_a_3234_; lean_object* v___x_3236_; uint8_t v_isShared_3237_; uint8_t v_isSharedCheck_3242_; 
lean_dec(v_a_3231_);
lean_dec_ref(v___f_3230_);
v_a_3234_ = lean_ctor_get(v_x_3232_, 0);
v_isSharedCheck_3242_ = !lean_is_exclusive(v_x_3232_);
if (v_isSharedCheck_3242_ == 0)
{
v___x_3236_ = v_x_3232_;
v_isShared_3237_ = v_isSharedCheck_3242_;
goto v_resetjp_3235_;
}
else
{
lean_inc(v_a_3234_);
lean_dec(v_x_3232_);
v___x_3236_ = lean_box(0);
v_isShared_3237_ = v_isSharedCheck_3242_;
goto v_resetjp_3235_;
}
v_resetjp_3235_:
{
lean_object* v___x_3239_; 
if (v_isShared_3237_ == 0)
{
v___x_3239_ = v___x_3236_;
goto v_reusejp_3238_;
}
else
{
lean_object* v_reuseFailAlloc_3241_; 
v_reuseFailAlloc_3241_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3241_, 0, v_a_3234_);
v___x_3239_ = v_reuseFailAlloc_3241_;
goto v_reusejp_3238_;
}
v_reusejp_3238_:
{
lean_object* v___x_3240_; 
v___x_3240_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3240_, 0, v___x_3239_);
return v___x_3240_;
}
}
}
else
{
lean_object* v___x_3243_; 
lean_dec_ref_known(v_x_3232_, 1);
v___x_3243_ = lean_apply_3(v___f_3230_, lean_box(0), v_a_3231_, lean_box(0));
return v___x_3243_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonad___redArg___lam__3___boxed(lean_object* v___f_3244_, lean_object* v_a_3245_, lean_object* v_x_3246_, lean_object* v___y_3247_){
_start:
{
lean_object* v_res_3248_; 
v_res_3248_ = l_Std_Async_EAsync_instMonad___redArg___lam__3(v___f_3244_, v_a_3245_, v_x_3246_);
return v_res_3248_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonad___redArg___lam__4(lean_object* v___f_3249_, lean_object* v_y_3250_, lean_object* v_x_3251_){
_start:
{
if (lean_obj_tag(v_x_3251_) == 0)
{
lean_object* v___x_3253_; 
lean_dec_ref(v_y_3250_);
lean_dec_ref(v___f_3249_);
v___x_3253_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3253_, 0, v_x_3251_);
return v___x_3253_;
}
else
{
lean_object* v_a_3254_; lean_object* v___f_3255_; lean_object* v___x_3256_; lean_object* v___x_3257_; uint8_t v___x_3258_; lean_object* v___x_3259_; lean_object* v___x_3260_; 
v_a_3254_ = lean_ctor_get(v_x_3251_, 0);
lean_inc(v_a_3254_);
lean_dec_ref_known(v_x_3251_, 1);
v___f_3255_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_instMonad___redArg___lam__3___boxed), 4, 2);
lean_closure_set(v___f_3255_, 0, v___f_3249_);
lean_closure_set(v___f_3255_, 1, v_a_3254_);
v___x_3256_ = lean_box(0);
v___x_3257_ = lean_unsigned_to_nat(0u);
v___x_3258_ = 0;
v___x_3259_ = lean_apply_2(v_y_3250_, v___x_3256_, lean_box(0));
v___x_3260_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3257_, v___x_3258_, v___x_3259_, v___f_3255_);
return v___x_3260_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonad___redArg___lam__4___boxed(lean_object* v___f_3261_, lean_object* v_y_3262_, lean_object* v_x_3263_, lean_object* v___y_3264_){
_start:
{
lean_object* v_res_3265_; 
v_res_3265_ = l_Std_Async_EAsync_instMonad___redArg___lam__4(v___f_3261_, v_y_3262_, v_x_3263_);
return v_res_3265_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonad___redArg___lam__5(lean_object* v___f_3266_, lean_object* v_00_u03b1_3267_, lean_object* v_00_u03b2_3268_, lean_object* v_x_3269_, lean_object* v_y_3270_){
_start:
{
lean_object* v___f_3272_; lean_object* v___x_3273_; uint8_t v___x_3274_; lean_object* v___x_3275_; lean_object* v___x_3276_; 
v___f_3272_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_instMonad___redArg___lam__4___boxed), 4, 2);
lean_closure_set(v___f_3272_, 0, v___f_3266_);
lean_closure_set(v___f_3272_, 1, v_y_3270_);
v___x_3273_ = lean_unsigned_to_nat(0u);
v___x_3274_ = 0;
v___x_3275_ = lean_apply_1(v_x_3269_, lean_box(0));
v___x_3276_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3273_, v___x_3274_, v___x_3275_, v___f_3272_);
return v___x_3276_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonad___redArg___lam__5___boxed(lean_object* v___f_3277_, lean_object* v_00_u03b1_3278_, lean_object* v_00_u03b2_3279_, lean_object* v_x_3280_, lean_object* v_y_3281_, lean_object* v___y_3282_){
_start:
{
lean_object* v_res_3283_; 
v_res_3283_ = l_Std_Async_EAsync_instMonad___redArg___lam__5(v___f_3277_, v_00_u03b1_3278_, v_00_u03b2_3279_, v_x_3280_, v_y_3281_);
return v_res_3283_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonad___redArg___lam__6(lean_object* v_y_3284_, lean_object* v_x_3285_){
_start:
{
if (lean_obj_tag(v_x_3285_) == 0)
{
lean_object* v_a_3287_; lean_object* v___x_3289_; uint8_t v_isShared_3290_; uint8_t v_isSharedCheck_3295_; 
lean_dec_ref(v_y_3284_);
v_a_3287_ = lean_ctor_get(v_x_3285_, 0);
v_isSharedCheck_3295_ = !lean_is_exclusive(v_x_3285_);
if (v_isSharedCheck_3295_ == 0)
{
v___x_3289_ = v_x_3285_;
v_isShared_3290_ = v_isSharedCheck_3295_;
goto v_resetjp_3288_;
}
else
{
lean_inc(v_a_3287_);
lean_dec(v_x_3285_);
v___x_3289_ = lean_box(0);
v_isShared_3290_ = v_isSharedCheck_3295_;
goto v_resetjp_3288_;
}
v_resetjp_3288_:
{
lean_object* v___x_3292_; 
if (v_isShared_3290_ == 0)
{
v___x_3292_ = v___x_3289_;
goto v_reusejp_3291_;
}
else
{
lean_object* v_reuseFailAlloc_3294_; 
v_reuseFailAlloc_3294_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3294_, 0, v_a_3287_);
v___x_3292_ = v_reuseFailAlloc_3294_;
goto v_reusejp_3291_;
}
v_reusejp_3291_:
{
lean_object* v___x_3293_; 
v___x_3293_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3293_, 0, v___x_3292_);
return v___x_3293_;
}
}
}
else
{
lean_object* v___x_3296_; lean_object* v___x_3297_; 
lean_dec_ref_known(v_x_3285_, 1);
v___x_3296_ = lean_box(0);
v___x_3297_ = lean_apply_2(v_y_3284_, v___x_3296_, lean_box(0));
return v___x_3297_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonad___redArg___lam__6___boxed(lean_object* v_y_3298_, lean_object* v_x_3299_, lean_object* v___y_3300_){
_start:
{
lean_object* v_res_3301_; 
v_res_3301_ = l_Std_Async_EAsync_instMonad___redArg___lam__6(v_y_3298_, v_x_3299_);
return v_res_3301_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonad___redArg___lam__7(lean_object* v_00_u03b1_3302_, lean_object* v_00_u03b2_3303_, lean_object* v_x_3304_, lean_object* v_y_3305_){
_start:
{
lean_object* v___f_3307_; lean_object* v___x_3308_; uint8_t v___x_3309_; lean_object* v___x_3310_; lean_object* v___x_3311_; 
v___f_3307_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_instMonad___redArg___lam__6___boxed), 3, 1);
lean_closure_set(v___f_3307_, 0, v_y_3305_);
v___x_3308_ = lean_unsigned_to_nat(0u);
v___x_3309_ = 0;
v___x_3310_ = lean_apply_1(v_x_3304_, lean_box(0));
v___x_3311_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3308_, v___x_3309_, v___x_3310_, v___f_3307_);
return v___x_3311_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonad___redArg___lam__7___boxed(lean_object* v_00_u03b1_3312_, lean_object* v_00_u03b2_3313_, lean_object* v_x_3314_, lean_object* v_y_3315_, lean_object* v___y_3316_){
_start:
{
lean_object* v_res_3317_; 
v_res_3317_ = l_Std_Async_EAsync_instMonad___redArg___lam__7(v_00_u03b1_3312_, v_00_u03b2_3313_, v_x_3314_, v_y_3315_);
return v_res_3317_;
}
}
static lean_object* _init_l_Std_Async_EAsync_instMonad___redArg___closed__4(void){
_start:
{
lean_object* v___f_3323_; lean_object* v___f_3324_; lean_object* v___f_3325_; lean_object* v___f_3326_; lean_object* v___x_3327_; lean_object* v___x_3328_; 
v___f_3323_ = ((lean_object*)(l_Std_Async_EAsync_instMonad___redArg___closed__3));
v___f_3324_ = ((lean_object*)(l_Std_Async_EAsync_instMonad___redArg___closed__2));
v___f_3325_ = ((lean_object*)(l_Std_Async_EAsync_instMonad___redArg___closed__1));
v___f_3326_ = ((lean_object*)(l_Std_Async_EAsync_instMonad___redArg___closed__0));
v___x_3327_ = lean_obj_once(&l_Std_Async_EAsync_instFunctor___closed__0, &l_Std_Async_EAsync_instFunctor___closed__0_once, _init_l_Std_Async_EAsync_instFunctor___closed__0);
v___x_3328_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_3328_, 0, v___x_3327_);
lean_ctor_set(v___x_3328_, 1, v___f_3326_);
lean_ctor_set(v___x_3328_, 2, v___f_3325_);
lean_ctor_set(v___x_3328_, 3, v___f_3324_);
lean_ctor_set(v___x_3328_, 4, v___f_3323_);
return v___x_3328_;
}
}
static lean_object* _init_l_Std_Async_EAsync_instMonad___redArg___closed__6(void){
_start:
{
lean_object* v___x_3330_; lean_object* v___x_3331_; lean_object* v___x_3332_; 
v___x_3330_ = ((lean_object*)(l_Std_Async_EAsync_instMonad___redArg___closed__5));
v___x_3331_ = lean_obj_once(&l_Std_Async_EAsync_instMonad___redArg___closed__4, &l_Std_Async_EAsync_instMonad___redArg___closed__4_once, _init_l_Std_Async_EAsync_instMonad___redArg___closed__4);
v___x_3332_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3332_, 0, v___x_3331_);
lean_ctor_set(v___x_3332_, 1, v___x_3330_);
return v___x_3332_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonad___redArg(){
_start:
{
lean_object* v___x_3334_; 
v___x_3334_ = lean_obj_once(&l_Std_Async_EAsync_instMonad___redArg___closed__6, &l_Std_Async_EAsync_instMonad___redArg___closed__6_once, _init_l_Std_Async_EAsync_instMonad___redArg___closed__6);
return v___x_3334_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonad___redArg___boxed(lean_object* v___dummy_3335_){
_start:
{
lean_object* v_res_3336_; 
v_res_3336_ = l_Std_Async_EAsync_instMonad___redArg();
return v_res_3336_;
}
}
static lean_object* _init_l_Std_Async_EAsync_instMonad___closed__0(void){
_start:
{
lean_object* v___x_3337_; 
v___x_3337_ = l_Std_Async_EAsync_instMonad___redArg();
return v___x_3337_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonad(lean_object* v_00_u03b5_3338_){
_start:
{
lean_object* v___x_3339_; 
v___x_3339_ = lean_obj_once(&l_Std_Async_EAsync_instMonad___closed__0, &l_Std_Async_EAsync_instMonad___closed__0_once, _init_l_Std_Async_EAsync_instMonad___closed__0);
return v___x_3339_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadLiftEIO___redArg(){
_start:
{
lean_object* v___x_3342_; 
v___x_3342_ = ((lean_object*)(l_Std_Async_EAsync_instMonadLiftEIO___redArg___closed__0));
return v___x_3342_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadLiftEIO___redArg___boxed(lean_object* v___dummy_3343_){
_start:
{
lean_object* v_res_3344_; 
v_res_3344_ = l_Std_Async_EAsync_instMonadLiftEIO___redArg();
return v_res_3344_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadLiftEIO(lean_object* v_00_u03b5_3345_){
_start:
{
lean_object* v___x_3346_; 
v___x_3346_ = ((lean_object*)(l_Std_Async_EAsync_instMonadLiftEIO___redArg___closed__0));
return v___x_3346_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadExcept___redArg___lam__1(lean_object* v_00_u03b1_3347_, lean_object* v_x_3348_, lean_object* v_f_3349_){
_start:
{
lean_object* v___f_3351_; lean_object* v___x_3352_; uint8_t v___x_3353_; lean_object* v___x_3354_; lean_object* v___x_3355_; 
v___f_3351_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_tryCatch___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_3351_, 0, v_f_3349_);
v___x_3352_ = lean_unsigned_to_nat(0u);
v___x_3353_ = 0;
v___x_3354_ = lean_apply_1(v_x_3348_, lean_box(0));
v___x_3355_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3352_, v___x_3353_, v___x_3354_, v___f_3351_);
return v___x_3355_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadExcept___redArg___lam__1___boxed(lean_object* v_00_u03b1_3356_, lean_object* v_x_3357_, lean_object* v_f_3358_, lean_object* v___y_3359_){
_start:
{
lean_object* v_res_3360_; 
v_res_3360_ = l_Std_Async_EAsync_instMonadExcept___redArg___lam__1(v_00_u03b1_3356_, v_x_3357_, v_f_3358_);
return v_res_3360_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadExcept___redArg(){
_start:
{
lean_object* v___x_3367_; 
v___x_3367_ = ((lean_object*)(l_Std_Async_EAsync_instMonadExcept___redArg___closed__2));
return v___x_3367_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadExcept___redArg___boxed(lean_object* v___dummy_3368_){
_start:
{
lean_object* v_res_3369_; 
v_res_3369_ = l_Std_Async_EAsync_instMonadExcept___redArg();
return v_res_3369_;
}
}
static lean_object* _init_l_Std_Async_EAsync_instMonadExcept___closed__0(void){
_start:
{
lean_object* v___x_3370_; 
v___x_3370_ = l_Std_Async_EAsync_instMonadExcept___redArg();
return v___x_3370_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadExcept(lean_object* v_00_u03b5_3371_){
_start:
{
lean_object* v___x_3372_; 
v___x_3372_ = lean_obj_once(&l_Std_Async_EAsync_instMonadExcept___closed__0, &l_Std_Async_EAsync_instMonadExcept___closed__0_once, _init_l_Std_Async_EAsync_instMonadExcept___closed__0);
return v___x_3372_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadExceptOf___redArg(){
_start:
{
lean_object* v___x_3377_; 
v___x_3377_ = ((lean_object*)(l_Std_Async_EAsync_instMonadExceptOf___redArg___closed__0));
return v___x_3377_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadExceptOf___redArg___boxed(lean_object* v___dummy_3378_){
_start:
{
lean_object* v_res_3379_; 
v_res_3379_ = l_Std_Async_EAsync_instMonadExceptOf___redArg();
return v_res_3379_;
}
}
static lean_object* _init_l_Std_Async_EAsync_instMonadExceptOf___closed__0(void){
_start:
{
lean_object* v___x_3380_; 
v___x_3380_ = l_Std_Async_EAsync_instMonadExceptOf___redArg();
return v___x_3380_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadExceptOf(lean_object* v_00_u03b5_3381_){
_start:
{
lean_object* v___x_3382_; 
v___x_3382_ = lean_obj_once(&l_Std_Async_EAsync_instMonadExceptOf___closed__0, &l_Std_Async_EAsync_instMonadExceptOf___closed__0_once, _init_l_Std_Async_EAsync_instMonadExceptOf___closed__0);
return v___x_3382_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadFinally___redArg___lam__0(lean_object* v_00_u03b1_3383_, lean_object* v_00_u03b2_3384_, lean_object* v_x_3385_, lean_object* v_f_3386_){
_start:
{
lean_object* v___x_3388_; uint8_t v___x_3389_; lean_object* v___x_3390_; 
v___x_3388_ = lean_unsigned_to_nat(0u);
v___x_3389_ = 0;
v___x_3390_ = l_Std_Async_EAsync_tryFinally_x27___redArg(v_x_3385_, v_f_3386_, v___x_3388_, v___x_3389_);
return v___x_3390_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadFinally___redArg___lam__0___boxed(lean_object* v_00_u03b1_3391_, lean_object* v_00_u03b2_3392_, lean_object* v_x_3393_, lean_object* v_f_3394_, lean_object* v___y_3395_){
_start:
{
lean_object* v_res_3396_; 
v_res_3396_ = l_Std_Async_EAsync_instMonadFinally___redArg___lam__0(v_00_u03b1_3391_, v_00_u03b2_3392_, v_x_3393_, v_f_3394_);
return v_res_3396_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadFinally___redArg(){
_start:
{
lean_object* v___f_3399_; 
v___f_3399_ = ((lean_object*)(l_Std_Async_EAsync_instMonadFinally___redArg___closed__0));
return v___f_3399_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadFinally___redArg___boxed(lean_object* v___dummy_3400_){
_start:
{
lean_object* v_res_3401_; 
v_res_3401_ = l_Std_Async_EAsync_instMonadFinally___redArg();
return v_res_3401_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadFinally(lean_object* v_00_u03b5_3402_){
_start:
{
lean_object* v___f_3403_; 
v___f_3403_ = ((lean_object*)(l_Std_Async_EAsync_instMonadFinally___redArg___closed__0));
return v___f_3403_;
}
}
static lean_object* _init_l_Std_Async_EAsync_instOrElse___redArg___closed__0(void){
_start:
{
lean_object* v___x_3404_; lean_object* v___x_3405_; 
v___x_3404_ = lean_obj_once(&l_Std_Async_EAsync_instMonadExcept___closed__0, &l_Std_Async_EAsync_instMonadExcept___closed__0_once, _init_l_Std_Async_EAsync_instMonadExcept___closed__0);
v___x_3405_ = lean_alloc_closure((void*)(l_MonadExcept_orElse), 6, 4);
lean_closure_set(v___x_3405_, 0, lean_box(0));
lean_closure_set(v___x_3405_, 1, lean_box(0));
lean_closure_set(v___x_3405_, 2, v___x_3404_);
lean_closure_set(v___x_3405_, 3, lean_box(0));
return v___x_3405_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instOrElse___redArg(){
_start:
{
lean_object* v___x_3407_; 
v___x_3407_ = lean_obj_once(&l_Std_Async_EAsync_instOrElse___redArg___closed__0, &l_Std_Async_EAsync_instOrElse___redArg___closed__0_once, _init_l_Std_Async_EAsync_instOrElse___redArg___closed__0);
return v___x_3407_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instOrElse___redArg___boxed(lean_object* v___dummy_3408_){
_start:
{
lean_object* v_res_3409_; 
v_res_3409_ = l_Std_Async_EAsync_instOrElse___redArg();
return v_res_3409_;
}
}
static lean_object* _init_l_Std_Async_EAsync_instOrElse___closed__0(void){
_start:
{
lean_object* v___x_3410_; 
v___x_3410_ = l_Std_Async_EAsync_instOrElse___redArg();
return v___x_3410_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instOrElse(lean_object* v_00_u03b5_3411_, lean_object* v_00_u03b1_3412_){
_start:
{
lean_object* v___x_3413_; 
v___x_3413_ = lean_obj_once(&l_Std_Async_EAsync_instOrElse___closed__0, &l_Std_Async_EAsync_instOrElse___closed__0_once, _init_l_Std_Async_EAsync_instOrElse___closed__0);
return v___x_3413_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instInhabited___redArg(lean_object* v_inst_3414_){
_start:
{
lean_object* v___x_3415_; lean_object* v___x_3416_; lean_object* v___x_3417_; 
v___x_3415_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3415_, 0, v_inst_3414_);
v___x_3416_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_pure___boxed), 3, 2);
lean_closure_set(v___x_3416_, 0, lean_box(0));
lean_closure_set(v___x_3416_, 1, v___x_3415_);
v___x_3417_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_mk___boxed), 3, 2);
lean_closure_set(v___x_3417_, 0, lean_box(0));
lean_closure_set(v___x_3417_, 1, v___x_3416_);
return v___x_3417_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instInhabited(lean_object* v_00_u03b5_3418_, lean_object* v_00_u03b1_3419_, lean_object* v_inst_3420_){
_start:
{
lean_object* v___x_3421_; 
v___x_3421_ = l_Std_Async_EAsync_instInhabited___redArg(v_inst_3420_);
return v___x_3421_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadAwaitETask___redArg___lam__0(lean_object* v_00_u03b1_3422_, lean_object* v_t_3423_){
_start:
{
lean_object* v___x_3425_; 
v___x_3425_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3425_, 0, v_t_3423_);
return v___x_3425_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadAwaitETask___redArg___lam__0___boxed(lean_object* v_00_u03b1_3426_, lean_object* v_t_3427_, lean_object* v___y_3428_){
_start:
{
lean_object* v_res_3429_; 
v_res_3429_ = l_Std_Async_EAsync_instMonadAwaitETask___redArg___lam__0(v_00_u03b1_3426_, v_t_3427_);
return v_res_3429_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadAwaitETask___redArg(){
_start:
{
lean_object* v___f_3432_; 
v___f_3432_ = ((lean_object*)(l_Std_Async_EAsync_instMonadAwaitETask___redArg___closed__0));
return v___f_3432_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadAwaitETask___redArg___boxed(lean_object* v___dummy_3433_){
_start:
{
lean_object* v_res_3434_; 
v_res_3434_ = l_Std_Async_EAsync_instMonadAwaitETask___redArg();
return v_res_3434_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadAwaitETask(lean_object* v_00_u03b5_3435_){
_start:
{
lean_object* v___f_3436_; 
v___f_3436_ = ((lean_object*)(l_Std_Async_EAsync_instMonadAwaitETask___redArg___closed__0));
return v___f_3436_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadAwaitTask___redArg___lam__1(lean_object* v___f_3437_, lean_object* v_00_u03b1_3438_, lean_object* v_t_3439_){
_start:
{
lean_object* v___x_3441_; uint8_t v___x_3442_; lean_object* v___x_3443_; lean_object* v___x_3444_; 
v___x_3441_ = lean_unsigned_to_nat(0u);
v___x_3442_ = 0;
v___x_3443_ = lean_task_map(v___f_3437_, v_t_3439_, v___x_3441_, v___x_3442_);
v___x_3444_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3444_, 0, v___x_3443_);
return v___x_3444_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadAwaitTask___redArg___lam__1___boxed(lean_object* v___f_3445_, lean_object* v_00_u03b1_3446_, lean_object* v_t_3447_, lean_object* v___y_3448_){
_start:
{
lean_object* v_res_3449_; 
v_res_3449_ = l_Std_Async_EAsync_instMonadAwaitTask___redArg___lam__1(v___f_3445_, v_00_u03b1_3446_, v_t_3447_);
return v_res_3449_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadAwaitTask___redArg(){
_start:
{
lean_object* v___f_3453_; 
v___f_3453_ = ((lean_object*)(l_Std_Async_EAsync_instMonadAwaitTask___redArg___closed__0));
return v___f_3453_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadAwaitTask___redArg___boxed(lean_object* v___dummy_3454_){
_start:
{
lean_object* v_res_3455_; 
v_res_3455_ = l_Std_Async_EAsync_instMonadAwaitTask___redArg();
return v_res_3455_;
}
}
static lean_object* _init_l_Std_Async_EAsync_instMonadAwaitTask___closed__0(void){
_start:
{
lean_object* v___x_3456_; 
v___x_3456_ = l_Std_Async_EAsync_instMonadAwaitTask___redArg();
return v___x_3456_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadAwaitTask(lean_object* v_00_u03b5_3457_){
_start:
{
lean_object* v___x_3458_; 
v___x_3458_ = lean_obj_once(&l_Std_Async_EAsync_instMonadAwaitTask___closed__0, &l_Std_Async_EAsync_instMonadAwaitTask___closed__0_once, _init_l_Std_Async_EAsync_instMonadAwaitTask___closed__0);
return v___x_3458_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadAwaitAsyncTaskError___lam__0(lean_object* v_00_u03b1_3459_, lean_object* v_t_3460_){
_start:
{
lean_object* v___x_3462_; 
v___x_3462_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3462_, 0, v_t_3460_);
return v___x_3462_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadAwaitAsyncTaskError___lam__0___boxed(lean_object* v_00_u03b1_3463_, lean_object* v_t_3464_, lean_object* v___y_3465_){
_start:
{
lean_object* v_res_3466_; 
v_res_3466_ = l_Std_Async_EAsync_instMonadAwaitAsyncTaskError___lam__0(v_00_u03b1_3463_, v_t_3464_);
return v_res_3466_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadAwaitPromise___redArg___lam__1(lean_object* v___f_3469_, lean_object* v_00_u03b1_3470_, lean_object* v_t_3471_){
_start:
{
lean_object* v___x_3473_; lean_object* v___x_3474_; uint8_t v___x_3475_; lean_object* v___x_3476_; lean_object* v___x_3477_; 
v___x_3473_ = l_IO_Promise_result_x21___redArg(v_t_3471_);
v___x_3474_ = lean_unsigned_to_nat(0u);
v___x_3475_ = 0;
v___x_3476_ = lean_task_map(v___f_3469_, v___x_3473_, v___x_3474_, v___x_3475_);
v___x_3477_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3477_, 0, v___x_3476_);
return v___x_3477_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadAwaitPromise___redArg___lam__1___boxed(lean_object* v___f_3478_, lean_object* v_00_u03b1_3479_, lean_object* v_t_3480_, lean_object* v___y_3481_){
_start:
{
lean_object* v_res_3482_; 
v_res_3482_ = l_Std_Async_EAsync_instMonadAwaitPromise___redArg___lam__1(v___f_3478_, v_00_u03b1_3479_, v_t_3480_);
lean_dec(v_t_3480_);
return v_res_3482_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadAwaitPromise___redArg(){
_start:
{
lean_object* v___f_3486_; 
v___f_3486_ = ((lean_object*)(l_Std_Async_EAsync_instMonadAwaitPromise___redArg___closed__0));
return v___f_3486_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadAwaitPromise___redArg___boxed(lean_object* v___dummy_3487_){
_start:
{
lean_object* v_res_3488_; 
v_res_3488_ = l_Std_Async_EAsync_instMonadAwaitPromise___redArg();
return v_res_3488_;
}
}
static lean_object* _init_l_Std_Async_EAsync_instMonadAwaitPromise___closed__0(void){
_start:
{
lean_object* v___x_3489_; 
v___x_3489_ = l_Std_Async_EAsync_instMonadAwaitPromise___redArg();
return v___x_3489_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadAwaitPromise(lean_object* v_00_u03b5_3490_){
_start:
{
lean_object* v___x_3491_; 
v___x_3491_ = lean_obj_once(&l_Std_Async_EAsync_instMonadAwaitPromise___closed__0, &l_Std_Async_EAsync_instMonadAwaitPromise___closed__0_once, _init_l_Std_Async_EAsync_instMonadAwaitPromise___closed__0);
return v___x_3491_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadAsyncETask___redArg___lam__1(lean_object* v___f_3492_, lean_object* v_00_u03b1_3493_, lean_object* v_t_3494_, lean_object* v_prio_3495_){
_start:
{
lean_object* v___x_3497_; lean_object* v___x_3498_; lean_object* v___x_3499_; uint8_t v___x_3500_; lean_object* v___x_3501_; lean_object* v___x_3502_; lean_object* v___x_3503_; 
v___x_3497_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_toRawBaseIO___boxed), 3, 2);
lean_closure_set(v___x_3497_, 0, lean_box(0));
lean_closure_set(v___x_3497_, 1, v_t_3494_);
v___x_3498_ = lean_io_as_task(v___x_3497_, v_prio_3495_);
v___x_3499_ = lean_unsigned_to_nat(0u);
v___x_3500_ = 1;
v___x_3501_ = lean_task_bind(v___x_3498_, v___f_3492_, v___x_3499_, v___x_3500_);
v___x_3502_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3502_, 0, v___x_3501_);
v___x_3503_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3503_, 0, v___x_3502_);
return v___x_3503_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadAsyncETask___redArg___lam__1___boxed(lean_object* v___f_3504_, lean_object* v_00_u03b1_3505_, lean_object* v_t_3506_, lean_object* v_prio_3507_, lean_object* v___y_3508_){
_start:
{
lean_object* v_res_3509_; 
v_res_3509_ = l_Std_Async_EAsync_instMonadAsyncETask___redArg___lam__1(v___f_3504_, v_00_u03b1_3505_, v_t_3506_, v_prio_3507_);
return v_res_3509_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadAsyncETask___redArg(){
_start:
{
lean_object* v___f_3513_; 
v___f_3513_ = ((lean_object*)(l_Std_Async_EAsync_instMonadAsyncETask___redArg___closed__0));
return v___f_3513_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadAsyncETask___redArg___boxed(lean_object* v___dummy_3514_){
_start:
{
lean_object* v_res_3515_; 
v_res_3515_ = l_Std_Async_EAsync_instMonadAsyncETask___redArg();
return v_res_3515_;
}
}
static lean_object* _init_l_Std_Async_EAsync_instMonadAsyncETask___closed__0(void){
_start:
{
lean_object* v___x_3516_; 
v___x_3516_ = l_Std_Async_EAsync_instMonadAsyncETask___redArg();
return v___x_3516_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadAsyncETask(lean_object* v_00_u03b5_3517_){
_start:
{
lean_object* v___x_3518_; 
v___x_3518_ = lean_obj_once(&l_Std_Async_EAsync_instMonadAsyncETask___closed__0, &l_Std_Async_EAsync_instMonadAsyncETask___closed__0_once, _init_l_Std_Async_EAsync_instMonadAsyncETask___closed__0);
return v___x_3518_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadAsyncAsyncTaskError___lam__0(lean_object* v_x_3519_){
_start:
{
if (lean_obj_tag(v_x_3519_) == 0)
{
lean_object* v_a_3520_; lean_object* v___x_3521_; 
v_a_3520_ = lean_ctor_get(v_x_3519_, 0);
lean_inc(v_a_3520_);
lean_dec_ref_known(v_x_3519_, 1);
v___x_3521_ = lean_task_pure(v_a_3520_);
return v___x_3521_;
}
else
{
lean_object* v_a_3522_; 
v_a_3522_ = lean_ctor_get(v_x_3519_, 0);
lean_inc_ref(v_a_3522_);
lean_dec_ref_known(v_x_3519_, 1);
return v_a_3522_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadAsyncAsyncTaskError___lam__1(lean_object* v___f_3523_, lean_object* v_00_u03b1_3524_, lean_object* v_t_3525_, lean_object* v_prio_3526_){
_start:
{
lean_object* v___x_3528_; lean_object* v___x_3529_; lean_object* v___x_3530_; uint8_t v___x_3531_; lean_object* v___x_3532_; lean_object* v___x_3533_; lean_object* v___x_3534_; 
v___x_3528_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_toRawBaseIO___boxed), 3, 2);
lean_closure_set(v___x_3528_, 0, lean_box(0));
lean_closure_set(v___x_3528_, 1, v_t_3525_);
v___x_3529_ = lean_io_as_task(v___x_3528_, v_prio_3526_);
v___x_3530_ = lean_unsigned_to_nat(0u);
v___x_3531_ = 1;
v___x_3532_ = lean_task_bind(v___x_3529_, v___f_3523_, v___x_3530_, v___x_3531_);
v___x_3533_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3533_, 0, v___x_3532_);
v___x_3534_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3534_, 0, v___x_3533_);
return v___x_3534_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadAsyncAsyncTaskError___lam__1___boxed(lean_object* v___f_3535_, lean_object* v_00_u03b1_3536_, lean_object* v_t_3537_, lean_object* v_prio_3538_, lean_object* v___y_3539_){
_start:
{
lean_object* v_res_3540_; 
v_res_3540_ = l_Std_Async_EAsync_instMonadAsyncAsyncTaskError___lam__1(v___f_3535_, v_00_u03b1_3536_, v_t_3537_, v_prio_3538_);
return v_res_3540_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadLiftBaseIO___redArg___lam__0(lean_object* v_00_u03b1_3545_, lean_object* v_x_3546_){
_start:
{
lean_object* v___x_3548_; lean_object* v___x_3549_; lean_object* v___x_3550_; 
v___x_3548_ = lean_apply_1(v_x_3546_, lean_box(0));
v___x_3549_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3549_, 0, v___x_3548_);
v___x_3550_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3550_, 0, v___x_3549_);
return v___x_3550_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadLiftBaseIO___redArg___lam__0___boxed(lean_object* v_00_u03b1_3551_, lean_object* v_x_3552_, lean_object* v___y_3553_){
_start:
{
lean_object* v_res_3554_; 
v_res_3554_ = l_Std_Async_EAsync_instMonadLiftBaseIO___redArg___lam__0(v_00_u03b1_3551_, v_x_3552_);
return v_res_3554_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadLiftBaseIO___redArg(){
_start:
{
lean_object* v___f_3557_; 
v___f_3557_ = ((lean_object*)(l_Std_Async_EAsync_instMonadLiftBaseIO___redArg___closed__0));
return v___f_3557_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadLiftBaseIO___redArg___boxed(lean_object* v___dummy_3558_){
_start:
{
lean_object* v_res_3559_; 
v_res_3559_ = l_Std_Async_EAsync_instMonadLiftBaseIO___redArg();
return v_res_3559_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadLiftBaseIO(lean_object* v_00_u03b5_3560_){
_start:
{
lean_object* v___f_3561_; 
v___f_3561_ = ((lean_object*)(l_Std_Async_EAsync_instMonadLiftBaseIO___redArg___closed__0));
return v___f_3561_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadLiftEIO__1___redArg___lam__0(lean_object* v_00_u03b1_3562_, lean_object* v_x_3563_){
_start:
{
lean_object* v_val_3566_; lean_object* v___x_3568_; 
v___x_3568_ = lean_apply_1(v_x_3563_, lean_box(0));
if (lean_obj_tag(v___x_3568_) == 0)
{
lean_object* v_a_3569_; lean_object* v___x_3571_; uint8_t v_isShared_3572_; uint8_t v_isSharedCheck_3576_; 
v_a_3569_ = lean_ctor_get(v___x_3568_, 0);
v_isSharedCheck_3576_ = !lean_is_exclusive(v___x_3568_);
if (v_isSharedCheck_3576_ == 0)
{
v___x_3571_ = v___x_3568_;
v_isShared_3572_ = v_isSharedCheck_3576_;
goto v_resetjp_3570_;
}
else
{
lean_inc(v_a_3569_);
lean_dec(v___x_3568_);
v___x_3571_ = lean_box(0);
v_isShared_3572_ = v_isSharedCheck_3576_;
goto v_resetjp_3570_;
}
v_resetjp_3570_:
{
lean_object* v___x_3574_; 
if (v_isShared_3572_ == 0)
{
lean_ctor_set_tag(v___x_3571_, 1);
v___x_3574_ = v___x_3571_;
goto v_reusejp_3573_;
}
else
{
lean_object* v_reuseFailAlloc_3575_; 
v_reuseFailAlloc_3575_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3575_, 0, v_a_3569_);
v___x_3574_ = v_reuseFailAlloc_3575_;
goto v_reusejp_3573_;
}
v_reusejp_3573_:
{
v_val_3566_ = v___x_3574_;
goto v___jp_3565_;
}
}
}
else
{
lean_object* v_a_3577_; lean_object* v___x_3579_; uint8_t v_isShared_3580_; uint8_t v_isSharedCheck_3584_; 
v_a_3577_ = lean_ctor_get(v___x_3568_, 0);
v_isSharedCheck_3584_ = !lean_is_exclusive(v___x_3568_);
if (v_isSharedCheck_3584_ == 0)
{
v___x_3579_ = v___x_3568_;
v_isShared_3580_ = v_isSharedCheck_3584_;
goto v_resetjp_3578_;
}
else
{
lean_inc(v_a_3577_);
lean_dec(v___x_3568_);
v___x_3579_ = lean_box(0);
v_isShared_3580_ = v_isSharedCheck_3584_;
goto v_resetjp_3578_;
}
v_resetjp_3578_:
{
lean_object* v___x_3582_; 
if (v_isShared_3580_ == 0)
{
lean_ctor_set_tag(v___x_3579_, 0);
v___x_3582_ = v___x_3579_;
goto v_reusejp_3581_;
}
else
{
lean_object* v_reuseFailAlloc_3583_; 
v_reuseFailAlloc_3583_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3583_, 0, v_a_3577_);
v___x_3582_ = v_reuseFailAlloc_3583_;
goto v_reusejp_3581_;
}
v_reusejp_3581_:
{
v_val_3566_ = v___x_3582_;
goto v___jp_3565_;
}
}
}
v___jp_3565_:
{
lean_object* v___x_3567_; 
v___x_3567_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3567_, 0, v_val_3566_);
return v___x_3567_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadLiftEIO__1___redArg___lam__0___boxed(lean_object* v_00_u03b1_3585_, lean_object* v_x_3586_, lean_object* v___y_3587_){
_start:
{
lean_object* v_res_3588_; 
v_res_3588_ = l_Std_Async_EAsync_instMonadLiftEIO__1___redArg___lam__0(v_00_u03b1_3585_, v_x_3586_);
return v_res_3588_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadLiftEIO__1___redArg(){
_start:
{
lean_object* v___f_3591_; 
v___f_3591_ = ((lean_object*)(l_Std_Async_EAsync_instMonadLiftEIO__1___redArg___closed__0));
return v___f_3591_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadLiftEIO__1___redArg___boxed(lean_object* v___dummy_3592_){
_start:
{
lean_object* v_res_3593_; 
v_res_3593_ = l_Std_Async_EAsync_instMonadLiftEIO__1___redArg();
return v_res_3593_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadLiftEIO__1(lean_object* v_00_u03b5_3594_){
_start:
{
lean_object* v___f_3595_; 
v___f_3595_ = ((lean_object*)(l_Std_Async_EAsync_instMonadLiftEIO__1___redArg___closed__0));
return v___f_3595_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadLiftBaseAsync___redArg___lam__1(lean_object* v___f_3596_, lean_object* v_00_u03b1_3597_, lean_object* v_x_3598_){
_start:
{
lean_object* v___x_3600_; uint8_t v___x_3601_; lean_object* v___x_3602_; 
v___x_3600_ = lean_unsigned_to_nat(0u);
v___x_3601_ = 0;
v___x_3602_ = lean_apply_1(v_x_3598_, lean_box(0));
if (lean_obj_tag(v___x_3602_) == 0)
{
lean_object* v_a_3603_; lean_object* v___x_3605_; uint8_t v_isShared_3606_; uint8_t v_isSharedCheck_3611_; 
lean_dec_ref(v___f_3596_);
v_a_3603_ = lean_ctor_get(v___x_3602_, 0);
v_isSharedCheck_3611_ = !lean_is_exclusive(v___x_3602_);
if (v_isSharedCheck_3611_ == 0)
{
v___x_3605_ = v___x_3602_;
v_isShared_3606_ = v_isSharedCheck_3611_;
goto v_resetjp_3604_;
}
else
{
lean_inc(v_a_3603_);
lean_dec(v___x_3602_);
v___x_3605_ = lean_box(0);
v_isShared_3606_ = v_isSharedCheck_3611_;
goto v_resetjp_3604_;
}
v_resetjp_3604_:
{
lean_object* v___x_3607_; lean_object* v___x_3609_; 
v___x_3607_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3607_, 0, v_a_3603_);
if (v_isShared_3606_ == 0)
{
lean_ctor_set(v___x_3605_, 0, v___x_3607_);
v___x_3609_ = v___x_3605_;
goto v_reusejp_3608_;
}
else
{
lean_object* v_reuseFailAlloc_3610_; 
v_reuseFailAlloc_3610_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3610_, 0, v___x_3607_);
v___x_3609_ = v_reuseFailAlloc_3610_;
goto v_reusejp_3608_;
}
v_reusejp_3608_:
{
return v___x_3609_;
}
}
}
else
{
lean_object* v_a_3612_; lean_object* v___x_3614_; uint8_t v_isShared_3615_; uint8_t v_isSharedCheck_3620_; 
v_a_3612_ = lean_ctor_get(v___x_3602_, 0);
v_isSharedCheck_3620_ = !lean_is_exclusive(v___x_3602_);
if (v_isSharedCheck_3620_ == 0)
{
v___x_3614_ = v___x_3602_;
v_isShared_3615_ = v_isSharedCheck_3620_;
goto v_resetjp_3613_;
}
else
{
lean_inc(v_a_3612_);
lean_dec(v___x_3602_);
v___x_3614_ = lean_box(0);
v_isShared_3615_ = v_isSharedCheck_3620_;
goto v_resetjp_3613_;
}
v_resetjp_3613_:
{
lean_object* v___x_3616_; lean_object* v___x_3618_; 
v___x_3616_ = lean_task_map(v___f_3596_, v_a_3612_, v___x_3600_, v___x_3601_);
if (v_isShared_3615_ == 0)
{
lean_ctor_set(v___x_3614_, 0, v___x_3616_);
v___x_3618_ = v___x_3614_;
goto v_reusejp_3617_;
}
else
{
lean_object* v_reuseFailAlloc_3619_; 
v_reuseFailAlloc_3619_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3619_, 0, v___x_3616_);
v___x_3618_ = v_reuseFailAlloc_3619_;
goto v_reusejp_3617_;
}
v_reusejp_3617_:
{
return v___x_3618_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadLiftBaseAsync___redArg___lam__1___boxed(lean_object* v___f_3621_, lean_object* v_00_u03b1_3622_, lean_object* v_x_3623_, lean_object* v___y_3624_){
_start:
{
lean_object* v_res_3625_; 
v_res_3625_ = l_Std_Async_EAsync_instMonadLiftBaseAsync___redArg___lam__1(v___f_3621_, v_00_u03b1_3622_, v_x_3623_);
return v_res_3625_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadLiftBaseAsync___redArg(){
_start:
{
lean_object* v___f_3629_; 
v___f_3629_ = ((lean_object*)(l_Std_Async_EAsync_instMonadLiftBaseAsync___redArg___closed__0));
return v___f_3629_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadLiftBaseAsync___redArg___boxed(lean_object* v___dummy_3630_){
_start:
{
lean_object* v_res_3631_; 
v_res_3631_ = l_Std_Async_EAsync_instMonadLiftBaseAsync___redArg();
return v_res_3631_;
}
}
static lean_object* _init_l_Std_Async_EAsync_instMonadLiftBaseAsync___closed__0(void){
_start:
{
lean_object* v___x_3632_; 
v___x_3632_ = l_Std_Async_EAsync_instMonadLiftBaseAsync___redArg();
return v___x_3632_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instMonadLiftBaseAsync(lean_object* v_00_u03b5_3633_){
_start:
{
lean_object* v___x_3634_; 
v___x_3634_ = lean_obj_once(&l_Std_Async_EAsync_instMonadLiftBaseAsync___closed__0, &l_Std_Async_EAsync_instMonadLiftBaseAsync___closed__0_once, _init_l_Std_Async_EAsync_instMonadLiftBaseAsync___closed__0);
return v___x_3634_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Async_Basic_0__Std_Async_EAsync_forIn_loop___redArg___lam__0___boxed(lean_object* v_promise_3635_, lean_object* v_f_3636_, lean_object* v_prio_3637_, lean_object* v_x_3638_, lean_object* v___y_3639_){
_start:
{
lean_object* v_res_3640_; 
v_res_3640_ = l___private_Std_Async_Basic_0__Std_Async_EAsync_forIn_loop___redArg___lam__0(v_promise_3635_, v_f_3636_, v_prio_3637_, v_x_3638_);
return v_res_3640_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Async_Basic_0__Std_Async_EAsync_forIn_loop___redArg(lean_object* v_f_3641_, lean_object* v_prio_3642_, lean_object* v_promise_3643_, lean_object* v_b_3644_){
_start:
{
lean_object* v___f_3646_; lean_object* v___x_3647_; lean_object* v___x_3648_; 
lean_inc(v_prio_3642_);
lean_inc_ref_n(v_f_3641_, 2);
lean_inc(v_promise_3643_);
v___f_3646_ = lean_alloc_closure((void*)(l___private_Std_Async_Basic_0__Std_Async_EAsync_forIn_loop___redArg___lam__0___boxed), 5, 3);
lean_closure_set(v___f_3646_, 0, v_promise_3643_);
lean_closure_set(v___f_3646_, 1, v_f_3641_);
lean_closure_set(v___f_3646_, 2, v_prio_3642_);
v___x_3647_ = lean_box(0);
v___x_3648_ = lean_apply_3(v_f_3641_, v___x_3647_, v_b_3644_, lean_box(0));
if (lean_obj_tag(v___x_3648_) == 0)
{
lean_object* v_a_3649_; 
lean_dec_ref(v___f_3646_);
v_a_3649_ = lean_ctor_get(v___x_3648_, 0);
lean_inc(v_a_3649_);
lean_dec_ref_known(v___x_3648_, 1);
if (lean_obj_tag(v_a_3649_) == 0)
{
lean_object* v_a_3650_; lean_object* v___x_3652_; uint8_t v_isShared_3653_; uint8_t v_isSharedCheck_3658_; 
lean_dec(v_prio_3642_);
lean_dec_ref(v_f_3641_);
v_a_3650_ = lean_ctor_get(v_a_3649_, 0);
v_isSharedCheck_3658_ = !lean_is_exclusive(v_a_3649_);
if (v_isSharedCheck_3658_ == 0)
{
v___x_3652_ = v_a_3649_;
v_isShared_3653_ = v_isSharedCheck_3658_;
goto v_resetjp_3651_;
}
else
{
lean_inc(v_a_3650_);
lean_dec(v_a_3649_);
v___x_3652_ = lean_box(0);
v_isShared_3653_ = v_isSharedCheck_3658_;
goto v_resetjp_3651_;
}
v_resetjp_3651_:
{
lean_object* v___x_3655_; 
if (v_isShared_3653_ == 0)
{
v___x_3655_ = v___x_3652_;
goto v_reusejp_3654_;
}
else
{
lean_object* v_reuseFailAlloc_3657_; 
v_reuseFailAlloc_3657_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3657_, 0, v_a_3650_);
v___x_3655_ = v_reuseFailAlloc_3657_;
goto v_reusejp_3654_;
}
v_reusejp_3654_:
{
lean_object* v___x_3656_; 
v___x_3656_ = lean_io_promise_resolve(v___x_3655_, v_promise_3643_);
lean_dec(v_promise_3643_);
return v___x_3656_;
}
}
}
else
{
lean_object* v_a_3659_; lean_object* v___x_3661_; uint8_t v_isShared_3662_; uint8_t v_isSharedCheck_3670_; 
v_a_3659_ = lean_ctor_get(v_a_3649_, 0);
v_isSharedCheck_3670_ = !lean_is_exclusive(v_a_3649_);
if (v_isSharedCheck_3670_ == 0)
{
v___x_3661_ = v_a_3649_;
v_isShared_3662_ = v_isSharedCheck_3670_;
goto v_resetjp_3660_;
}
else
{
lean_inc(v_a_3659_);
lean_dec(v_a_3649_);
v___x_3661_ = lean_box(0);
v_isShared_3662_ = v_isSharedCheck_3670_;
goto v_resetjp_3660_;
}
v_resetjp_3660_:
{
if (lean_obj_tag(v_a_3659_) == 0)
{
lean_object* v_a_3663_; lean_object* v___x_3665_; 
lean_dec(v_prio_3642_);
lean_dec_ref(v_f_3641_);
v_a_3663_ = lean_ctor_get(v_a_3659_, 0);
lean_inc(v_a_3663_);
lean_dec_ref_known(v_a_3659_, 1);
if (v_isShared_3662_ == 0)
{
lean_ctor_set(v___x_3661_, 0, v_a_3663_);
v___x_3665_ = v___x_3661_;
goto v_reusejp_3664_;
}
else
{
lean_object* v_reuseFailAlloc_3667_; 
v_reuseFailAlloc_3667_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3667_, 0, v_a_3663_);
v___x_3665_ = v_reuseFailAlloc_3667_;
goto v_reusejp_3664_;
}
v_reusejp_3664_:
{
lean_object* v___x_3666_; 
v___x_3666_ = lean_io_promise_resolve(v___x_3665_, v_promise_3643_);
lean_dec(v_promise_3643_);
return v___x_3666_;
}
}
else
{
lean_object* v_a_3668_; 
lean_del_object(v___x_3661_);
v_a_3668_ = lean_ctor_get(v_a_3659_, 0);
lean_inc(v_a_3668_);
lean_dec_ref_known(v_a_3659_, 1);
v_b_3644_ = v_a_3668_;
goto _start;
}
}
}
}
else
{
lean_object* v_a_3671_; uint8_t v___x_3672_; lean_object* v___x_3673_; 
lean_dec(v_promise_3643_);
lean_dec_ref(v_f_3641_);
v_a_3671_ = lean_ctor_get(v___x_3648_, 0);
lean_inc_ref(v_a_3671_);
lean_dec_ref_known(v___x_3648_, 1);
v___x_3672_ = 0;
v___x_3673_ = l_BaseIO_chainTask___redArg(v_a_3671_, v___f_3646_, v_prio_3642_, v___x_3672_);
return v___x_3673_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Async_Basic_0__Std_Async_EAsync_forIn_loop___redArg___lam__0(lean_object* v_promise_3674_, lean_object* v_f_3675_, lean_object* v_prio_3676_, lean_object* v_x_3677_){
_start:
{
if (lean_obj_tag(v_x_3677_) == 0)
{
lean_object* v_a_3679_; lean_object* v___x_3681_; uint8_t v_isShared_3682_; uint8_t v_isSharedCheck_3687_; 
lean_dec(v_prio_3676_);
lean_dec_ref(v_f_3675_);
v_a_3679_ = lean_ctor_get(v_x_3677_, 0);
v_isSharedCheck_3687_ = !lean_is_exclusive(v_x_3677_);
if (v_isSharedCheck_3687_ == 0)
{
v___x_3681_ = v_x_3677_;
v_isShared_3682_ = v_isSharedCheck_3687_;
goto v_resetjp_3680_;
}
else
{
lean_inc(v_a_3679_);
lean_dec(v_x_3677_);
v___x_3681_ = lean_box(0);
v_isShared_3682_ = v_isSharedCheck_3687_;
goto v_resetjp_3680_;
}
v_resetjp_3680_:
{
lean_object* v___x_3684_; 
if (v_isShared_3682_ == 0)
{
v___x_3684_ = v___x_3681_;
goto v_reusejp_3683_;
}
else
{
lean_object* v_reuseFailAlloc_3686_; 
v_reuseFailAlloc_3686_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3686_, 0, v_a_3679_);
v___x_3684_ = v_reuseFailAlloc_3686_;
goto v_reusejp_3683_;
}
v_reusejp_3683_:
{
lean_object* v___x_3685_; 
v___x_3685_ = lean_io_promise_resolve(v___x_3684_, v_promise_3674_);
lean_dec(v_promise_3674_);
return v___x_3685_;
}
}
}
else
{
lean_object* v_a_3688_; lean_object* v___x_3690_; uint8_t v_isShared_3691_; uint8_t v_isSharedCheck_3699_; 
v_a_3688_ = lean_ctor_get(v_x_3677_, 0);
v_isSharedCheck_3699_ = !lean_is_exclusive(v_x_3677_);
if (v_isSharedCheck_3699_ == 0)
{
v___x_3690_ = v_x_3677_;
v_isShared_3691_ = v_isSharedCheck_3699_;
goto v_resetjp_3689_;
}
else
{
lean_inc(v_a_3688_);
lean_dec(v_x_3677_);
v___x_3690_ = lean_box(0);
v_isShared_3691_ = v_isSharedCheck_3699_;
goto v_resetjp_3689_;
}
v_resetjp_3689_:
{
if (lean_obj_tag(v_a_3688_) == 0)
{
lean_object* v_a_3692_; lean_object* v___x_3694_; 
lean_dec(v_prio_3676_);
lean_dec_ref(v_f_3675_);
v_a_3692_ = lean_ctor_get(v_a_3688_, 0);
lean_inc(v_a_3692_);
lean_dec_ref_known(v_a_3688_, 1);
if (v_isShared_3691_ == 0)
{
lean_ctor_set(v___x_3690_, 0, v_a_3692_);
v___x_3694_ = v___x_3690_;
goto v_reusejp_3693_;
}
else
{
lean_object* v_reuseFailAlloc_3696_; 
v_reuseFailAlloc_3696_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3696_, 0, v_a_3692_);
v___x_3694_ = v_reuseFailAlloc_3696_;
goto v_reusejp_3693_;
}
v_reusejp_3693_:
{
lean_object* v___x_3695_; 
v___x_3695_ = lean_io_promise_resolve(v___x_3694_, v_promise_3674_);
lean_dec(v_promise_3674_);
return v___x_3695_;
}
}
else
{
lean_object* v_a_3697_; lean_object* v___x_3698_; 
lean_del_object(v___x_3690_);
v_a_3697_ = lean_ctor_get(v_a_3688_, 0);
lean_inc(v_a_3697_);
lean_dec_ref_known(v_a_3688_, 1);
v___x_3698_ = l___private_Std_Async_Basic_0__Std_Async_EAsync_forIn_loop___redArg(v_f_3675_, v_prio_3676_, v_promise_3674_, v_a_3697_);
return v___x_3698_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Async_Basic_0__Std_Async_EAsync_forIn_loop___redArg___boxed(lean_object* v_f_3700_, lean_object* v_prio_3701_, lean_object* v_promise_3702_, lean_object* v_b_3703_, lean_object* v___y_3704_){
_start:
{
lean_object* v_res_3705_; 
v_res_3705_ = l___private_Std_Async_Basic_0__Std_Async_EAsync_forIn_loop___redArg(v_f_3700_, v_prio_3701_, v_promise_3702_, v_b_3703_);
return v_res_3705_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Async_Basic_0__Std_Async_EAsync_forIn_loop(lean_object* v_00_u03b5_3706_, lean_object* v_00_u03b2_3707_, lean_object* v_f_3708_, lean_object* v_prio_3709_, lean_object* v_promise_3710_, lean_object* v_b_3711_){
_start:
{
lean_object* v___x_3713_; 
v___x_3713_ = l___private_Std_Async_Basic_0__Std_Async_EAsync_forIn_loop___redArg(v_f_3708_, v_prio_3709_, v_promise_3710_, v_b_3711_);
return v___x_3713_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Async_Basic_0__Std_Async_EAsync_forIn_loop___boxed(lean_object* v_00_u03b5_3714_, lean_object* v_00_u03b2_3715_, lean_object* v_f_3716_, lean_object* v_prio_3717_, lean_object* v_promise_3718_, lean_object* v_b_3719_, lean_object* v___y_3720_){
_start:
{
lean_object* v_res_3721_; 
v_res_3721_ = l___private_Std_Async_Basic_0__Std_Async_EAsync_forIn_loop(v_00_u03b5_3714_, v_00_u03b2_3715_, v_f_3716_, v_prio_3717_, v_promise_3718_, v_b_3719_);
return v_res_3721_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_forIn___redArg___lam__0(lean_object* v_a_3722_, lean_object* v_x_3723_){
_start:
{
if (lean_obj_tag(v_x_3723_) == 0)
{
lean_object* v_a_3725_; lean_object* v___x_3727_; uint8_t v_isShared_3728_; uint8_t v_isSharedCheck_3733_; 
v_a_3725_ = lean_ctor_get(v_x_3723_, 0);
v_isSharedCheck_3733_ = !lean_is_exclusive(v_x_3723_);
if (v_isSharedCheck_3733_ == 0)
{
v___x_3727_ = v_x_3723_;
v_isShared_3728_ = v_isSharedCheck_3733_;
goto v_resetjp_3726_;
}
else
{
lean_inc(v_a_3725_);
lean_dec(v_x_3723_);
v___x_3727_ = lean_box(0);
v_isShared_3728_ = v_isSharedCheck_3733_;
goto v_resetjp_3726_;
}
v_resetjp_3726_:
{
lean_object* v___x_3730_; 
if (v_isShared_3728_ == 0)
{
v___x_3730_ = v___x_3727_;
goto v_reusejp_3729_;
}
else
{
lean_object* v_reuseFailAlloc_3732_; 
v_reuseFailAlloc_3732_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3732_, 0, v_a_3725_);
v___x_3730_ = v_reuseFailAlloc_3732_;
goto v_reusejp_3729_;
}
v_reusejp_3729_:
{
lean_object* v___x_3731_; 
v___x_3731_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3731_, 0, v___x_3730_);
return v___x_3731_;
}
}
}
else
{
lean_object* v___x_3734_; lean_object* v___x_3735_; 
lean_dec_ref_known(v_x_3723_, 1);
v___x_3734_ = l_IO_Promise_result_x21___redArg(v_a_3722_);
v___x_3735_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3735_, 0, v___x_3734_);
return v___x_3735_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_forIn___redArg___lam__0___boxed(lean_object* v_a_3736_, lean_object* v_x_3737_, lean_object* v___y_3738_){
_start:
{
lean_object* v_res_3739_; 
v_res_3739_ = l_Std_Async_EAsync_forIn___redArg___lam__0(v_a_3736_, v_x_3737_);
lean_dec(v_a_3736_);
return v_res_3739_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_forIn___redArg___lam__1(lean_object* v_f_3740_, lean_object* v_prio_3741_, lean_object* v_init_3742_, lean_object* v_x_3743_){
_start:
{
if (lean_obj_tag(v_x_3743_) == 0)
{
lean_object* v_a_3745_; lean_object* v___x_3747_; uint8_t v_isShared_3748_; uint8_t v_isSharedCheck_3753_; 
lean_dec(v_init_3742_);
lean_dec(v_prio_3741_);
lean_dec_ref(v_f_3740_);
v_a_3745_ = lean_ctor_get(v_x_3743_, 0);
v_isSharedCheck_3753_ = !lean_is_exclusive(v_x_3743_);
if (v_isSharedCheck_3753_ == 0)
{
v___x_3747_ = v_x_3743_;
v_isShared_3748_ = v_isSharedCheck_3753_;
goto v_resetjp_3746_;
}
else
{
lean_inc(v_a_3745_);
lean_dec(v_x_3743_);
v___x_3747_ = lean_box(0);
v_isShared_3748_ = v_isSharedCheck_3753_;
goto v_resetjp_3746_;
}
v_resetjp_3746_:
{
lean_object* v___x_3750_; 
if (v_isShared_3748_ == 0)
{
v___x_3750_ = v___x_3747_;
goto v_reusejp_3749_;
}
else
{
lean_object* v_reuseFailAlloc_3752_; 
v_reuseFailAlloc_3752_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3752_, 0, v_a_3745_);
v___x_3750_ = v_reuseFailAlloc_3752_;
goto v_reusejp_3749_;
}
v_reusejp_3749_:
{
lean_object* v___x_3751_; 
v___x_3751_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3751_, 0, v___x_3750_);
return v___x_3751_;
}
}
}
else
{
lean_object* v_a_3754_; lean_object* v___x_3756_; uint8_t v_isShared_3757_; uint8_t v_isSharedCheck_3767_; 
v_a_3754_ = lean_ctor_get(v_x_3743_, 0);
v_isSharedCheck_3767_ = !lean_is_exclusive(v_x_3743_);
if (v_isSharedCheck_3767_ == 0)
{
v___x_3756_ = v_x_3743_;
v_isShared_3757_ = v_isSharedCheck_3767_;
goto v_resetjp_3755_;
}
else
{
lean_inc(v_a_3754_);
lean_dec(v_x_3743_);
v___x_3756_ = lean_box(0);
v_isShared_3757_ = v_isSharedCheck_3767_;
goto v_resetjp_3755_;
}
v_resetjp_3755_:
{
lean_object* v___f_3758_; lean_object* v___x_3759_; uint8_t v___x_3760_; lean_object* v___x_3761_; lean_object* v___x_3763_; 
lean_inc(v_a_3754_);
v___f_3758_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_forIn___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_3758_, 0, v_a_3754_);
v___x_3759_ = lean_unsigned_to_nat(0u);
v___x_3760_ = 0;
v___x_3761_ = l___private_Std_Async_Basic_0__Std_Async_EAsync_forIn_loop___redArg(v_f_3740_, v_prio_3741_, v_a_3754_, v_init_3742_);
if (v_isShared_3757_ == 0)
{
lean_ctor_set(v___x_3756_, 0, v___x_3761_);
v___x_3763_ = v___x_3756_;
goto v_reusejp_3762_;
}
else
{
lean_object* v_reuseFailAlloc_3766_; 
v_reuseFailAlloc_3766_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3766_, 0, v___x_3761_);
v___x_3763_ = v_reuseFailAlloc_3766_;
goto v_reusejp_3762_;
}
v_reusejp_3762_:
{
lean_object* v___x_3764_; lean_object* v___x_3765_; 
v___x_3764_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3764_, 0, v___x_3763_);
v___x_3765_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3759_, v___x_3760_, v___x_3764_, v___f_3758_);
return v___x_3765_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_forIn___redArg___lam__1___boxed(lean_object* v_f_3768_, lean_object* v_prio_3769_, lean_object* v_init_3770_, lean_object* v_x_3771_, lean_object* v___y_3772_){
_start:
{
lean_object* v_res_3773_; 
v_res_3773_ = l_Std_Async_EAsync_forIn___redArg___lam__1(v_f_3768_, v_prio_3769_, v_init_3770_, v_x_3771_);
return v_res_3773_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_forIn___redArg(lean_object* v_init_3774_, lean_object* v_f_3775_, lean_object* v_prio_3776_){
_start:
{
lean_object* v___f_3778_; lean_object* v___x_3779_; uint8_t v___x_3780_; lean_object* v___x_3781_; lean_object* v___x_3782_; lean_object* v___x_3783_; lean_object* v___x_3784_; 
v___f_3778_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_forIn___redArg___lam__1___boxed), 5, 3);
lean_closure_set(v___f_3778_, 0, v_f_3775_);
lean_closure_set(v___f_3778_, 1, v_prio_3776_);
lean_closure_set(v___f_3778_, 2, v_init_3774_);
v___x_3779_ = lean_unsigned_to_nat(0u);
v___x_3780_ = 0;
v___x_3781_ = lean_io_promise_new();
v___x_3782_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3782_, 0, v___x_3781_);
v___x_3783_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3783_, 0, v___x_3782_);
v___x_3784_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3779_, v___x_3780_, v___x_3783_, v___f_3778_);
return v___x_3784_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_forIn___redArg___boxed(lean_object* v_init_3785_, lean_object* v_f_3786_, lean_object* v_prio_3787_, lean_object* v___y_3788_){
_start:
{
lean_object* v_res_3789_; 
v_res_3789_ = l_Std_Async_EAsync_forIn___redArg(v_init_3785_, v_f_3786_, v_prio_3787_);
return v_res_3789_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_forIn(lean_object* v_00_u03b5_3790_, lean_object* v_00_u03b2_3791_, lean_object* v_init_3792_, lean_object* v_f_3793_, lean_object* v_prio_3794_){
_start:
{
lean_object* v___f_3796_; lean_object* v___x_3797_; uint8_t v___x_3798_; lean_object* v___x_3799_; lean_object* v___x_3800_; lean_object* v___x_3801_; lean_object* v___x_3802_; 
v___f_3796_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_forIn___redArg___lam__1___boxed), 5, 3);
lean_closure_set(v___f_3796_, 0, v_f_3793_);
lean_closure_set(v___f_3796_, 1, v_prio_3794_);
lean_closure_set(v___f_3796_, 2, v_init_3792_);
v___x_3797_ = lean_unsigned_to_nat(0u);
v___x_3798_ = 0;
v___x_3799_ = lean_io_promise_new();
v___x_3800_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3800_, 0, v___x_3799_);
v___x_3801_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3801_, 0, v___x_3800_);
v___x_3802_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3797_, v___x_3798_, v___x_3801_, v___f_3796_);
return v___x_3802_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_forIn___boxed(lean_object* v_00_u03b5_3803_, lean_object* v_00_u03b2_3804_, lean_object* v_init_3805_, lean_object* v_f_3806_, lean_object* v_prio_3807_, lean_object* v___y_3808_){
_start:
{
lean_object* v_res_3809_; 
v_res_3809_ = l_Std_Async_EAsync_forIn(v_00_u03b5_3803_, v_00_u03b2_3804_, v_init_3805_, v_f_3806_, v_prio_3807_);
return v_res_3809_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instForInLoopUnit___redArg___lam__1(lean_object* v_f_3810_, lean_object* v___x_3811_, lean_object* v_init_3812_, lean_object* v_x_3813_){
_start:
{
if (lean_obj_tag(v_x_3813_) == 0)
{
lean_object* v_a_3815_; lean_object* v___x_3817_; uint8_t v_isShared_3818_; uint8_t v_isSharedCheck_3823_; 
lean_dec(v_init_3812_);
lean_dec(v___x_3811_);
lean_dec_ref(v_f_3810_);
v_a_3815_ = lean_ctor_get(v_x_3813_, 0);
v_isSharedCheck_3823_ = !lean_is_exclusive(v_x_3813_);
if (v_isSharedCheck_3823_ == 0)
{
v___x_3817_ = v_x_3813_;
v_isShared_3818_ = v_isSharedCheck_3823_;
goto v_resetjp_3816_;
}
else
{
lean_inc(v_a_3815_);
lean_dec(v_x_3813_);
v___x_3817_ = lean_box(0);
v_isShared_3818_ = v_isSharedCheck_3823_;
goto v_resetjp_3816_;
}
v_resetjp_3816_:
{
lean_object* v___x_3820_; 
if (v_isShared_3818_ == 0)
{
v___x_3820_ = v___x_3817_;
goto v_reusejp_3819_;
}
else
{
lean_object* v_reuseFailAlloc_3822_; 
v_reuseFailAlloc_3822_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3822_, 0, v_a_3815_);
v___x_3820_ = v_reuseFailAlloc_3822_;
goto v_reusejp_3819_;
}
v_reusejp_3819_:
{
lean_object* v___x_3821_; 
v___x_3821_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3821_, 0, v___x_3820_);
return v___x_3821_;
}
}
}
else
{
lean_object* v_a_3824_; lean_object* v___x_3826_; uint8_t v_isShared_3827_; uint8_t v_isSharedCheck_3836_; 
v_a_3824_ = lean_ctor_get(v_x_3813_, 0);
v_isSharedCheck_3836_ = !lean_is_exclusive(v_x_3813_);
if (v_isSharedCheck_3836_ == 0)
{
v___x_3826_ = v_x_3813_;
v_isShared_3827_ = v_isSharedCheck_3836_;
goto v_resetjp_3825_;
}
else
{
lean_inc(v_a_3824_);
lean_dec(v_x_3813_);
v___x_3826_ = lean_box(0);
v_isShared_3827_ = v_isSharedCheck_3836_;
goto v_resetjp_3825_;
}
v_resetjp_3825_:
{
lean_object* v___f_3828_; uint8_t v___x_3829_; lean_object* v___x_3830_; lean_object* v___x_3832_; 
lean_inc(v_a_3824_);
v___f_3828_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_forIn___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_3828_, 0, v_a_3824_);
v___x_3829_ = 0;
lean_inc(v___x_3811_);
v___x_3830_ = l___private_Std_Async_Basic_0__Std_Async_EAsync_forIn_loop___redArg(v_f_3810_, v___x_3811_, v_a_3824_, v_init_3812_);
if (v_isShared_3827_ == 0)
{
lean_ctor_set(v___x_3826_, 0, v___x_3830_);
v___x_3832_ = v___x_3826_;
goto v_reusejp_3831_;
}
else
{
lean_object* v_reuseFailAlloc_3835_; 
v_reuseFailAlloc_3835_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3835_, 0, v___x_3830_);
v___x_3832_ = v_reuseFailAlloc_3835_;
goto v_reusejp_3831_;
}
v_reusejp_3831_:
{
lean_object* v___x_3833_; lean_object* v___x_3834_; 
v___x_3833_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3833_, 0, v___x_3832_);
v___x_3834_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3811_, v___x_3829_, v___x_3833_, v___f_3828_);
return v___x_3834_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instForInLoopUnit___redArg___lam__1___boxed(lean_object* v_f_3837_, lean_object* v___x_3838_, lean_object* v_init_3839_, lean_object* v_x_3840_, lean_object* v___y_3841_){
_start:
{
lean_object* v_res_3842_; 
v_res_3842_ = l_Std_Async_EAsync_instForInLoopUnit___redArg___lam__1(v_f_3837_, v___x_3838_, v_init_3839_, v_x_3840_);
return v_res_3842_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instForInLoopUnit___redArg___lam__0(lean_object* v_00_u03b2_3843_, lean_object* v_x_3844_, lean_object* v_init_3845_, lean_object* v_f_3846_){
_start:
{
lean_object* v___x_3848_; lean_object* v___f_3849_; uint8_t v___x_3850_; lean_object* v___x_3851_; lean_object* v___x_3852_; lean_object* v___x_3853_; lean_object* v___x_3854_; 
v___x_3848_ = lean_unsigned_to_nat(0u);
v___f_3849_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_instForInLoopUnit___redArg___lam__1___boxed), 5, 3);
lean_closure_set(v___f_3849_, 0, v_f_3846_);
lean_closure_set(v___f_3849_, 1, v___x_3848_);
lean_closure_set(v___f_3849_, 2, v_init_3845_);
v___x_3850_ = 0;
v___x_3851_ = lean_io_promise_new();
v___x_3852_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3852_, 0, v___x_3851_);
v___x_3853_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3853_, 0, v___x_3852_);
v___x_3854_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3848_, v___x_3850_, v___x_3853_, v___f_3849_);
return v___x_3854_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instForInLoopUnit___redArg___lam__0___boxed(lean_object* v_00_u03b2_3855_, lean_object* v_x_3856_, lean_object* v_init_3857_, lean_object* v_f_3858_, lean_object* v___y_3859_){
_start:
{
lean_object* v_res_3860_; 
v_res_3860_ = l_Std_Async_EAsync_instForInLoopUnit___redArg___lam__0(v_00_u03b2_3855_, v_x_3856_, v_init_3857_, v_f_3858_);
return v_res_3860_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instForInLoopUnit___redArg(){
_start:
{
lean_object* v___f_3863_; 
v___f_3863_ = ((lean_object*)(l_Std_Async_EAsync_instForInLoopUnit___redArg___closed__0));
return v___f_3863_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instForInLoopUnit___redArg___boxed(lean_object* v___dummy_3864_){
_start:
{
lean_object* v_res_3865_; 
v_res_3865_ = l_Std_Async_EAsync_instForInLoopUnit___redArg();
return v_res_3865_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_instForInLoopUnit(lean_object* v_00_u03b5_3866_){
_start:
{
lean_object* v___f_3867_; 
v___f_3867_ = ((lean_object*)(l_Std_Async_EAsync_instForInLoopUnit___redArg___closed__0));
return v___f_3867_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_ofExcept___redArg(lean_object* v_except_3868_){
_start:
{
lean_object* v___x_3870_; 
v___x_3870_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3870_, 0, v_except_3868_);
return v___x_3870_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_ofExcept___redArg___boxed(lean_object* v_except_3871_, lean_object* v___y_3872_){
_start:
{
lean_object* v_res_3873_; 
v_res_3873_ = l_Std_Async_EAsync_ofExcept___redArg(v_except_3871_);
return v_res_3873_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_ofExcept(lean_object* v_00_u03b5_3874_, lean_object* v_00_u03b1_3875_, lean_object* v_except_3876_){
_start:
{
lean_object* v___x_3878_; 
v___x_3878_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3878_, 0, v_except_3876_);
return v___x_3878_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_ofExcept___boxed(lean_object* v_00_u03b5_3879_, lean_object* v_00_u03b1_3880_, lean_object* v_except_3881_, lean_object* v___y_3882_){
_start:
{
lean_object* v_res_3883_; 
v_res_3883_ = l_Std_Async_EAsync_ofExcept(v_00_u03b5_3879_, v_00_u03b1_3880_, v_except_3881_);
return v_res_3883_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_concurrently___redArg___lam__1(lean_object* v_a_3884_, lean_object* v_x_3885_){
_start:
{
if (lean_obj_tag(v_x_3885_) == 0)
{
lean_object* v_a_3887_; lean_object* v___x_3889_; uint8_t v_isShared_3890_; uint8_t v_isSharedCheck_3895_; 
lean_dec(v_a_3884_);
v_a_3887_ = lean_ctor_get(v_x_3885_, 0);
v_isSharedCheck_3895_ = !lean_is_exclusive(v_x_3885_);
if (v_isSharedCheck_3895_ == 0)
{
v___x_3889_ = v_x_3885_;
v_isShared_3890_ = v_isSharedCheck_3895_;
goto v_resetjp_3888_;
}
else
{
lean_inc(v_a_3887_);
lean_dec(v_x_3885_);
v___x_3889_ = lean_box(0);
v_isShared_3890_ = v_isSharedCheck_3895_;
goto v_resetjp_3888_;
}
v_resetjp_3888_:
{
lean_object* v___x_3892_; 
if (v_isShared_3890_ == 0)
{
v___x_3892_ = v___x_3889_;
goto v_reusejp_3891_;
}
else
{
lean_object* v_reuseFailAlloc_3894_; 
v_reuseFailAlloc_3894_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3894_, 0, v_a_3887_);
v___x_3892_ = v_reuseFailAlloc_3894_;
goto v_reusejp_3891_;
}
v_reusejp_3891_:
{
lean_object* v___x_3893_; 
v___x_3893_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3893_, 0, v___x_3892_);
return v___x_3893_;
}
}
}
else
{
lean_object* v_a_3896_; lean_object* v___x_3898_; uint8_t v_isShared_3899_; uint8_t v_isSharedCheck_3905_; 
v_a_3896_ = lean_ctor_get(v_x_3885_, 0);
v_isSharedCheck_3905_ = !lean_is_exclusive(v_x_3885_);
if (v_isSharedCheck_3905_ == 0)
{
v___x_3898_ = v_x_3885_;
v_isShared_3899_ = v_isSharedCheck_3905_;
goto v_resetjp_3897_;
}
else
{
lean_inc(v_a_3896_);
lean_dec(v_x_3885_);
v___x_3898_ = lean_box(0);
v_isShared_3899_ = v_isSharedCheck_3905_;
goto v_resetjp_3897_;
}
v_resetjp_3897_:
{
lean_object* v___x_3900_; lean_object* v___x_3902_; 
v___x_3900_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3900_, 0, v_a_3884_);
lean_ctor_set(v___x_3900_, 1, v_a_3896_);
if (v_isShared_3899_ == 0)
{
lean_ctor_set(v___x_3898_, 0, v___x_3900_);
v___x_3902_ = v___x_3898_;
goto v_reusejp_3901_;
}
else
{
lean_object* v_reuseFailAlloc_3904_; 
v_reuseFailAlloc_3904_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3904_, 0, v___x_3900_);
v___x_3902_ = v_reuseFailAlloc_3904_;
goto v_reusejp_3901_;
}
v_reusejp_3901_:
{
lean_object* v___x_3903_; 
v___x_3903_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3903_, 0, v___x_3902_);
return v___x_3903_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_concurrently___redArg___lam__1___boxed(lean_object* v_a_3906_, lean_object* v_x_3907_, lean_object* v___y_3908_){
_start:
{
lean_object* v_res_3909_; 
v_res_3909_ = l_Std_Async_EAsync_concurrently___redArg___lam__1(v_a_3906_, v_x_3907_);
return v_res_3909_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_concurrently___redArg___lam__0(lean_object* v_a_3910_, lean_object* v_x_3911_){
_start:
{
if (lean_obj_tag(v_x_3911_) == 0)
{
lean_object* v_a_3913_; lean_object* v___x_3915_; uint8_t v_isShared_3916_; uint8_t v_isSharedCheck_3921_; 
lean_dec_ref(v_a_3910_);
v_a_3913_ = lean_ctor_get(v_x_3911_, 0);
v_isSharedCheck_3921_ = !lean_is_exclusive(v_x_3911_);
if (v_isSharedCheck_3921_ == 0)
{
v___x_3915_ = v_x_3911_;
v_isShared_3916_ = v_isSharedCheck_3921_;
goto v_resetjp_3914_;
}
else
{
lean_inc(v_a_3913_);
lean_dec(v_x_3911_);
v___x_3915_ = lean_box(0);
v_isShared_3916_ = v_isSharedCheck_3921_;
goto v_resetjp_3914_;
}
v_resetjp_3914_:
{
lean_object* v___x_3918_; 
if (v_isShared_3916_ == 0)
{
v___x_3918_ = v___x_3915_;
goto v_reusejp_3917_;
}
else
{
lean_object* v_reuseFailAlloc_3920_; 
v_reuseFailAlloc_3920_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3920_, 0, v_a_3913_);
v___x_3918_ = v_reuseFailAlloc_3920_;
goto v_reusejp_3917_;
}
v_reusejp_3917_:
{
lean_object* v___x_3919_; 
v___x_3919_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3919_, 0, v___x_3918_);
return v___x_3919_;
}
}
}
else
{
lean_object* v_a_3922_; lean_object* v___f_3923_; lean_object* v___x_3924_; uint8_t v___x_3925_; lean_object* v___x_3926_; lean_object* v___x_3927_; 
v_a_3922_ = lean_ctor_get(v_x_3911_, 0);
lean_inc(v_a_3922_);
lean_dec_ref_known(v_x_3911_, 1);
v___f_3923_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_concurrently___redArg___lam__1___boxed), 3, 1);
lean_closure_set(v___f_3923_, 0, v_a_3922_);
v___x_3924_ = lean_unsigned_to_nat(0u);
v___x_3925_ = 0;
v___x_3926_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3926_, 0, v_a_3910_);
v___x_3927_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3924_, v___x_3925_, v___x_3926_, v___f_3923_);
return v___x_3927_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_concurrently___redArg___lam__0___boxed(lean_object* v_a_3928_, lean_object* v_x_3929_, lean_object* v___y_3930_){
_start:
{
lean_object* v_res_3931_; 
v_res_3931_ = l_Std_Async_EAsync_concurrently___redArg___lam__0(v_a_3928_, v_x_3929_);
return v_res_3931_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_concurrently___redArg___lam__2(lean_object* v_a_3932_, lean_object* v_x_3933_){
_start:
{
if (lean_obj_tag(v_x_3933_) == 0)
{
lean_object* v_a_3935_; lean_object* v___x_3937_; uint8_t v_isShared_3938_; uint8_t v_isSharedCheck_3943_; 
lean_dec_ref(v_a_3932_);
v_a_3935_ = lean_ctor_get(v_x_3933_, 0);
v_isSharedCheck_3943_ = !lean_is_exclusive(v_x_3933_);
if (v_isSharedCheck_3943_ == 0)
{
v___x_3937_ = v_x_3933_;
v_isShared_3938_ = v_isSharedCheck_3943_;
goto v_resetjp_3936_;
}
else
{
lean_inc(v_a_3935_);
lean_dec(v_x_3933_);
v___x_3937_ = lean_box(0);
v_isShared_3938_ = v_isSharedCheck_3943_;
goto v_resetjp_3936_;
}
v_resetjp_3936_:
{
lean_object* v___x_3940_; 
if (v_isShared_3938_ == 0)
{
v___x_3940_ = v___x_3937_;
goto v_reusejp_3939_;
}
else
{
lean_object* v_reuseFailAlloc_3942_; 
v_reuseFailAlloc_3942_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3942_, 0, v_a_3935_);
v___x_3940_ = v_reuseFailAlloc_3942_;
goto v_reusejp_3939_;
}
v_reusejp_3939_:
{
lean_object* v___x_3941_; 
v___x_3941_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3941_, 0, v___x_3940_);
return v___x_3941_;
}
}
}
else
{
lean_object* v_a_3944_; lean_object* v___f_3945_; lean_object* v___x_3946_; uint8_t v___x_3947_; lean_object* v___x_3948_; lean_object* v___x_3949_; 
v_a_3944_ = lean_ctor_get(v_x_3933_, 0);
lean_inc(v_a_3944_);
lean_dec_ref_known(v_x_3933_, 1);
v___f_3945_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_concurrently___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_3945_, 0, v_a_3944_);
v___x_3946_ = lean_unsigned_to_nat(0u);
v___x_3947_ = 0;
v___x_3948_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3948_, 0, v_a_3932_);
v___x_3949_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3946_, v___x_3947_, v___x_3948_, v___f_3945_);
return v___x_3949_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_concurrently___redArg___lam__2___boxed(lean_object* v_a_3950_, lean_object* v_x_3951_, lean_object* v___y_3952_){
_start:
{
lean_object* v_res_3953_; 
v_res_3953_ = l_Std_Async_EAsync_concurrently___redArg___lam__2(v_a_3950_, v_x_3951_);
return v_res_3953_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_concurrently___redArg___lam__3(lean_object* v_y_3954_, lean_object* v_prio_3955_, lean_object* v___f_3956_, lean_object* v_x_3957_){
_start:
{
if (lean_obj_tag(v_x_3957_) == 0)
{
lean_object* v_a_3959_; lean_object* v___x_3961_; uint8_t v_isShared_3962_; uint8_t v_isSharedCheck_3967_; 
lean_dec_ref(v___f_3956_);
lean_dec(v_prio_3955_);
lean_dec_ref(v_y_3954_);
v_a_3959_ = lean_ctor_get(v_x_3957_, 0);
v_isSharedCheck_3967_ = !lean_is_exclusive(v_x_3957_);
if (v_isSharedCheck_3967_ == 0)
{
v___x_3961_ = v_x_3957_;
v_isShared_3962_ = v_isSharedCheck_3967_;
goto v_resetjp_3960_;
}
else
{
lean_inc(v_a_3959_);
lean_dec(v_x_3957_);
v___x_3961_ = lean_box(0);
v_isShared_3962_ = v_isSharedCheck_3967_;
goto v_resetjp_3960_;
}
v_resetjp_3960_:
{
lean_object* v___x_3964_; 
if (v_isShared_3962_ == 0)
{
v___x_3964_ = v___x_3961_;
goto v_reusejp_3963_;
}
else
{
lean_object* v_reuseFailAlloc_3966_; 
v_reuseFailAlloc_3966_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3966_, 0, v_a_3959_);
v___x_3964_ = v_reuseFailAlloc_3966_;
goto v_reusejp_3963_;
}
v_reusejp_3963_:
{
lean_object* v___x_3965_; 
v___x_3965_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3965_, 0, v___x_3964_);
return v___x_3965_;
}
}
}
else
{
lean_object* v_a_3968_; lean_object* v___x_3970_; uint8_t v_isShared_3971_; uint8_t v_isSharedCheck_3984_; 
v_a_3968_ = lean_ctor_get(v_x_3957_, 0);
v_isSharedCheck_3984_ = !lean_is_exclusive(v_x_3957_);
if (v_isSharedCheck_3984_ == 0)
{
v___x_3970_ = v_x_3957_;
v_isShared_3971_ = v_isSharedCheck_3984_;
goto v_resetjp_3969_;
}
else
{
lean_inc(v_a_3968_);
lean_dec(v_x_3957_);
v___x_3970_ = lean_box(0);
v_isShared_3971_ = v_isSharedCheck_3984_;
goto v_resetjp_3969_;
}
v_resetjp_3969_:
{
lean_object* v___f_3972_; lean_object* v___x_3973_; uint8_t v___x_3974_; lean_object* v___x_3975_; lean_object* v___x_3976_; uint8_t v___x_3977_; lean_object* v___x_3978_; lean_object* v___x_3980_; 
v___f_3972_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_concurrently___redArg___lam__2___boxed), 3, 1);
lean_closure_set(v___f_3972_, 0, v_a_3968_);
v___x_3973_ = lean_unsigned_to_nat(0u);
v___x_3974_ = 0;
v___x_3975_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_toRawBaseIO___boxed), 3, 2);
lean_closure_set(v___x_3975_, 0, lean_box(0));
lean_closure_set(v___x_3975_, 1, v_y_3954_);
v___x_3976_ = lean_io_as_task(v___x_3975_, v_prio_3955_);
v___x_3977_ = 1;
v___x_3978_ = lean_task_bind(v___x_3976_, v___f_3956_, v___x_3973_, v___x_3977_);
if (v_isShared_3971_ == 0)
{
lean_ctor_set(v___x_3970_, 0, v___x_3978_);
v___x_3980_ = v___x_3970_;
goto v_reusejp_3979_;
}
else
{
lean_object* v_reuseFailAlloc_3983_; 
v_reuseFailAlloc_3983_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3983_, 0, v___x_3978_);
v___x_3980_ = v_reuseFailAlloc_3983_;
goto v_reusejp_3979_;
}
v_reusejp_3979_:
{
lean_object* v___x_3981_; lean_object* v___x_3982_; 
v___x_3981_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3981_, 0, v___x_3980_);
v___x_3982_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3973_, v___x_3974_, v___x_3981_, v___f_3972_);
return v___x_3982_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_concurrently___redArg___lam__3___boxed(lean_object* v_y_3985_, lean_object* v_prio_3986_, lean_object* v___f_3987_, lean_object* v_x_3988_, lean_object* v___y_3989_){
_start:
{
lean_object* v_res_3990_; 
v_res_3990_ = l_Std_Async_EAsync_concurrently___redArg___lam__3(v_y_3985_, v_prio_3986_, v___f_3987_, v_x_3988_);
return v_res_3990_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_concurrently___redArg(lean_object* v_x_3991_, lean_object* v_y_3992_, lean_object* v_prio_3993_){
_start:
{
lean_object* v___f_3995_; lean_object* v___f_3996_; lean_object* v___x_3997_; uint8_t v___x_3998_; lean_object* v___x_3999_; lean_object* v___x_4000_; uint8_t v___x_4001_; lean_object* v___x_4002_; lean_object* v___x_4003_; lean_object* v___x_4004_; lean_object* v___x_4005_; 
v___f_3995_ = ((lean_object*)(l_Std_Async_EAsync_asTask___redArg___closed__0));
lean_inc(v_prio_3993_);
v___f_3996_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_concurrently___redArg___lam__3___boxed), 5, 3);
lean_closure_set(v___f_3996_, 0, v_y_3992_);
lean_closure_set(v___f_3996_, 1, v_prio_3993_);
lean_closure_set(v___f_3996_, 2, v___f_3995_);
v___x_3997_ = lean_unsigned_to_nat(0u);
v___x_3998_ = 0;
v___x_3999_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_toRawBaseIO___boxed), 3, 2);
lean_closure_set(v___x_3999_, 0, lean_box(0));
lean_closure_set(v___x_3999_, 1, v_x_3991_);
v___x_4000_ = lean_io_as_task(v___x_3999_, v_prio_3993_);
v___x_4001_ = 1;
v___x_4002_ = lean_task_bind(v___x_4000_, v___f_3995_, v___x_3997_, v___x_4001_);
v___x_4003_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4003_, 0, v___x_4002_);
v___x_4004_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4004_, 0, v___x_4003_);
v___x_4005_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3997_, v___x_3998_, v___x_4004_, v___f_3996_);
return v___x_4005_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_concurrently___redArg___boxed(lean_object* v_x_4006_, lean_object* v_y_4007_, lean_object* v_prio_4008_, lean_object* v___y_4009_){
_start:
{
lean_object* v_res_4010_; 
v_res_4010_ = l_Std_Async_EAsync_concurrently___redArg(v_x_4006_, v_y_4007_, v_prio_4008_);
return v_res_4010_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_concurrently(lean_object* v_00_u03b5_4011_, lean_object* v_00_u03b1_4012_, lean_object* v_00_u03b2_4013_, lean_object* v_x_4014_, lean_object* v_y_4015_, lean_object* v_prio_4016_){
_start:
{
lean_object* v___f_4018_; lean_object* v___f_4019_; lean_object* v___x_4020_; uint8_t v___x_4021_; lean_object* v___x_4022_; lean_object* v___x_4023_; uint8_t v___x_4024_; lean_object* v___x_4025_; lean_object* v___x_4026_; lean_object* v___x_4027_; lean_object* v___x_4028_; 
v___f_4018_ = ((lean_object*)(l_Std_Async_EAsync_asTask___redArg___closed__0));
lean_inc(v_prio_4016_);
v___f_4019_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_concurrently___redArg___lam__3___boxed), 5, 3);
lean_closure_set(v___f_4019_, 0, v_y_4015_);
lean_closure_set(v___f_4019_, 1, v_prio_4016_);
lean_closure_set(v___f_4019_, 2, v___f_4018_);
v___x_4020_ = lean_unsigned_to_nat(0u);
v___x_4021_ = 0;
v___x_4022_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_toRawBaseIO___boxed), 3, 2);
lean_closure_set(v___x_4022_, 0, lean_box(0));
lean_closure_set(v___x_4022_, 1, v_x_4014_);
v___x_4023_ = lean_io_as_task(v___x_4022_, v_prio_4016_);
v___x_4024_ = 1;
v___x_4025_ = lean_task_bind(v___x_4023_, v___f_4018_, v___x_4020_, v___x_4024_);
v___x_4026_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4026_, 0, v___x_4025_);
v___x_4027_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4027_, 0, v___x_4026_);
v___x_4028_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4020_, v___x_4021_, v___x_4027_, v___f_4019_);
return v___x_4028_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_concurrently___boxed(lean_object* v_00_u03b5_4029_, lean_object* v_00_u03b1_4030_, lean_object* v_00_u03b2_4031_, lean_object* v_x_4032_, lean_object* v_y_4033_, lean_object* v_prio_4034_, lean_object* v___y_4035_){
_start:
{
lean_object* v_res_4036_; 
v_res_4036_ = l_Std_Async_EAsync_concurrently(v_00_u03b5_4029_, v_00_u03b1_4030_, v_00_u03b2_4031_, v_x_4032_, v_y_4033_, v_prio_4034_);
return v_res_4036_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_race___redArg___lam__1(lean_object* v_x_4037_){
_start:
{
if (lean_obj_tag(v_x_4037_) == 0)
{
lean_object* v_a_4039_; lean_object* v___x_4041_; uint8_t v_isShared_4042_; uint8_t v_isSharedCheck_4047_; 
v_a_4039_ = lean_ctor_get(v_x_4037_, 0);
v_isSharedCheck_4047_ = !lean_is_exclusive(v_x_4037_);
if (v_isSharedCheck_4047_ == 0)
{
v___x_4041_ = v_x_4037_;
v_isShared_4042_ = v_isSharedCheck_4047_;
goto v_resetjp_4040_;
}
else
{
lean_inc(v_a_4039_);
lean_dec(v_x_4037_);
v___x_4041_ = lean_box(0);
v_isShared_4042_ = v_isSharedCheck_4047_;
goto v_resetjp_4040_;
}
v_resetjp_4040_:
{
lean_object* v___x_4044_; 
if (v_isShared_4042_ == 0)
{
v___x_4044_ = v___x_4041_;
goto v_reusejp_4043_;
}
else
{
lean_object* v_reuseFailAlloc_4046_; 
v_reuseFailAlloc_4046_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4046_, 0, v_a_4039_);
v___x_4044_ = v_reuseFailAlloc_4046_;
goto v_reusejp_4043_;
}
v_reusejp_4043_:
{
lean_object* v___x_4045_; 
v___x_4045_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4045_, 0, v___x_4044_);
return v___x_4045_;
}
}
}
else
{
lean_object* v_a_4048_; lean_object* v___x_4049_; 
v_a_4048_ = lean_ctor_get(v_x_4037_, 0);
lean_inc(v_a_4048_);
lean_dec_ref_known(v_x_4037_, 1);
v___x_4049_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4049_, 0, v_a_4048_);
return v___x_4049_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_race___redArg___lam__1___boxed(lean_object* v_x_4050_, lean_object* v___y_4051_){
_start:
{
lean_object* v_res_4052_; 
v_res_4052_ = l_Std_Async_EAsync_race___redArg___lam__1(v_x_4050_);
return v_res_4052_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_race___redArg___lam__0(lean_object* v_a_4053_){
_start:
{
lean_object* v___x_4054_; 
v___x_4054_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4054_, 0, v_a_4053_);
return v___x_4054_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_race___redArg___lam__3(lean_object* v_a_4055_, lean_object* v_value_4056_){
_start:
{
lean_object* v___x_4058_; 
v___x_4058_ = lean_io_promise_resolve(v_value_4056_, v_a_4055_);
return v___x_4058_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_race___redArg___lam__3___boxed(lean_object* v_a_4059_, lean_object* v_value_4060_, lean_object* v___y_4061_){
_start:
{
lean_object* v_res_4062_; 
v_res_4062_ = l_Std_Async_EAsync_race___redArg___lam__3(v_a_4059_, v_value_4060_);
lean_dec(v_a_4059_);
return v_res_4062_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_race___redArg___lam__2(lean_object* v_a_4063_, lean_object* v___f_4064_, lean_object* v___f_4065_, lean_object* v_x_4066_){
_start:
{
if (lean_obj_tag(v_x_4066_) == 0)
{
lean_object* v_a_4068_; lean_object* v___x_4070_; uint8_t v_isShared_4071_; uint8_t v_isSharedCheck_4076_; 
lean_dec_ref(v___f_4065_);
lean_dec_ref(v___f_4064_);
v_a_4068_ = lean_ctor_get(v_x_4066_, 0);
v_isSharedCheck_4076_ = !lean_is_exclusive(v_x_4066_);
if (v_isSharedCheck_4076_ == 0)
{
v___x_4070_ = v_x_4066_;
v_isShared_4071_ = v_isSharedCheck_4076_;
goto v_resetjp_4069_;
}
else
{
lean_inc(v_a_4068_);
lean_dec(v_x_4066_);
v___x_4070_ = lean_box(0);
v_isShared_4071_ = v_isSharedCheck_4076_;
goto v_resetjp_4069_;
}
v_resetjp_4069_:
{
lean_object* v___x_4073_; 
if (v_isShared_4071_ == 0)
{
v___x_4073_ = v___x_4070_;
goto v_reusejp_4072_;
}
else
{
lean_object* v_reuseFailAlloc_4075_; 
v_reuseFailAlloc_4075_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4075_, 0, v_a_4068_);
v___x_4073_ = v_reuseFailAlloc_4075_;
goto v_reusejp_4072_;
}
v_reusejp_4072_:
{
lean_object* v___x_4074_; 
v___x_4074_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4074_, 0, v___x_4073_);
return v___x_4074_;
}
}
}
else
{
lean_object* v___x_4077_; lean_object* v___x_4078_; uint8_t v___x_4079_; lean_object* v___x_4080_; lean_object* v___x_4081_; lean_object* v___x_4082_; 
lean_dec_ref_known(v_x_4066_, 1);
v___x_4077_ = l_IO_Promise_result_x21___redArg(v_a_4063_);
v___x_4078_ = lean_unsigned_to_nat(0u);
v___x_4079_ = 0;
v___x_4080_ = lean_task_map(v___f_4064_, v___x_4077_, v___x_4078_, v___x_4079_);
v___x_4081_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4081_, 0, v___x_4080_);
v___x_4082_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4078_, v___x_4079_, v___x_4081_, v___f_4065_);
return v___x_4082_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_race___redArg___lam__2___boxed(lean_object* v_a_4083_, lean_object* v___f_4084_, lean_object* v___f_4085_, lean_object* v_x_4086_, lean_object* v___y_4087_){
_start:
{
lean_object* v_res_4088_; 
v_res_4088_ = l_Std_Async_EAsync_race___redArg___lam__2(v_a_4083_, v___f_4084_, v___f_4085_, v_x_4086_);
lean_dec(v_a_4083_);
return v_res_4088_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_race___redArg___lam__4(lean_object* v_a_4089_, lean_object* v___x_4090_, lean_object* v___x_4091_, uint8_t v___x_4092_, lean_object* v___f_4093_, lean_object* v_x_4094_){
_start:
{
if (lean_obj_tag(v_x_4094_) == 0)
{
lean_object* v_a_4096_; lean_object* v___x_4098_; uint8_t v_isShared_4099_; uint8_t v_isSharedCheck_4104_; 
lean_dec_ref(v___f_4093_);
lean_dec(v___x_4091_);
lean_dec_ref(v___x_4090_);
lean_dec_ref(v_a_4089_);
v_a_4096_ = lean_ctor_get(v_x_4094_, 0);
v_isSharedCheck_4104_ = !lean_is_exclusive(v_x_4094_);
if (v_isSharedCheck_4104_ == 0)
{
v___x_4098_ = v_x_4094_;
v_isShared_4099_ = v_isSharedCheck_4104_;
goto v_resetjp_4097_;
}
else
{
lean_inc(v_a_4096_);
lean_dec(v_x_4094_);
v___x_4098_ = lean_box(0);
v_isShared_4099_ = v_isSharedCheck_4104_;
goto v_resetjp_4097_;
}
v_resetjp_4097_:
{
lean_object* v___x_4101_; 
if (v_isShared_4099_ == 0)
{
v___x_4101_ = v___x_4098_;
goto v_reusejp_4100_;
}
else
{
lean_object* v_reuseFailAlloc_4103_; 
v_reuseFailAlloc_4103_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4103_, 0, v_a_4096_);
v___x_4101_ = v_reuseFailAlloc_4103_;
goto v_reusejp_4100_;
}
v_reusejp_4100_:
{
lean_object* v___x_4102_; 
v___x_4102_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4102_, 0, v___x_4101_);
return v___x_4102_;
}
}
}
else
{
lean_object* v___x_4106_; uint8_t v_isShared_4107_; uint8_t v_isSharedCheck_4114_; 
v_isSharedCheck_4114_ = !lean_is_exclusive(v_x_4094_);
if (v_isSharedCheck_4114_ == 0)
{
lean_object* v_unused_4115_; 
v_unused_4115_ = lean_ctor_get(v_x_4094_, 0);
lean_dec(v_unused_4115_);
v___x_4106_ = v_x_4094_;
v_isShared_4107_ = v_isSharedCheck_4114_;
goto v_resetjp_4105_;
}
else
{
lean_dec(v_x_4094_);
v___x_4106_ = lean_box(0);
v_isShared_4107_ = v_isSharedCheck_4114_;
goto v_resetjp_4105_;
}
v_resetjp_4105_:
{
lean_object* v___x_4108_; lean_object* v___x_4110_; 
lean_inc(v___x_4091_);
v___x_4108_ = l_BaseIO_chainTask___redArg(v_a_4089_, v___x_4090_, v___x_4091_, v___x_4092_);
if (v_isShared_4107_ == 0)
{
lean_ctor_set(v___x_4106_, 0, v___x_4108_);
v___x_4110_ = v___x_4106_;
goto v_reusejp_4109_;
}
else
{
lean_object* v_reuseFailAlloc_4113_; 
v_reuseFailAlloc_4113_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4113_, 0, v___x_4108_);
v___x_4110_ = v_reuseFailAlloc_4113_;
goto v_reusejp_4109_;
}
v_reusejp_4109_:
{
lean_object* v___x_4111_; lean_object* v___x_4112_; 
v___x_4111_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4111_, 0, v___x_4110_);
v___x_4112_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4091_, v___x_4092_, v___x_4111_, v___f_4093_);
return v___x_4112_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_race___redArg___lam__4___boxed(lean_object* v_a_4116_, lean_object* v___x_4117_, lean_object* v___x_4118_, lean_object* v___x_4119_, lean_object* v___f_4120_, lean_object* v_x_4121_, lean_object* v___y_4122_){
_start:
{
uint8_t v___x_1437__boxed_4123_; lean_object* v_res_4124_; 
v___x_1437__boxed_4123_ = lean_unbox(v___x_4119_);
v_res_4124_ = l_Std_Async_EAsync_race___redArg___lam__4(v_a_4116_, v___x_4117_, v___x_4118_, v___x_1437__boxed_4123_, v___f_4120_, v_x_4121_);
return v_res_4124_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_race___redArg___lam__5(lean_object* v___f_4125_, lean_object* v___f_4126_, lean_object* v___f_4127_, lean_object* v_a_4128_, lean_object* v_x_4129_){
_start:
{
if (lean_obj_tag(v_x_4129_) == 0)
{
lean_object* v_a_4131_; lean_object* v___x_4133_; uint8_t v_isShared_4134_; uint8_t v_isSharedCheck_4139_; 
lean_dec_ref(v_a_4128_);
lean_dec_ref(v___f_4127_);
lean_dec_ref(v___f_4126_);
lean_dec(v___f_4125_);
v_a_4131_ = lean_ctor_get(v_x_4129_, 0);
v_isSharedCheck_4139_ = !lean_is_exclusive(v_x_4129_);
if (v_isSharedCheck_4139_ == 0)
{
v___x_4133_ = v_x_4129_;
v_isShared_4134_ = v_isSharedCheck_4139_;
goto v_resetjp_4132_;
}
else
{
lean_inc(v_a_4131_);
lean_dec(v_x_4129_);
v___x_4133_ = lean_box(0);
v_isShared_4134_ = v_isSharedCheck_4139_;
goto v_resetjp_4132_;
}
v_resetjp_4132_:
{
lean_object* v___x_4136_; 
if (v_isShared_4134_ == 0)
{
v___x_4136_ = v___x_4133_;
goto v_reusejp_4135_;
}
else
{
lean_object* v_reuseFailAlloc_4138_; 
v_reuseFailAlloc_4138_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4138_, 0, v_a_4131_);
v___x_4136_ = v_reuseFailAlloc_4138_;
goto v_reusejp_4135_;
}
v_reusejp_4135_:
{
lean_object* v___x_4137_; 
v___x_4137_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4137_, 0, v___x_4136_);
return v___x_4137_;
}
}
}
else
{
lean_object* v_a_4140_; lean_object* v___x_4142_; uint8_t v_isShared_4143_; uint8_t v_isSharedCheck_4156_; 
v_a_4140_ = lean_ctor_get(v_x_4129_, 0);
v_isSharedCheck_4156_ = !lean_is_exclusive(v_x_4129_);
if (v_isSharedCheck_4156_ == 0)
{
v___x_4142_ = v_x_4129_;
v_isShared_4143_ = v_isSharedCheck_4156_;
goto v_resetjp_4141_;
}
else
{
lean_inc(v_a_4140_);
lean_dec(v_x_4129_);
v___x_4142_ = lean_box(0);
v_isShared_4143_ = v_isSharedCheck_4156_;
goto v_resetjp_4141_;
}
v_resetjp_4141_:
{
lean_object* v___x_4144_; lean_object* v___x_4145_; lean_object* v___x_4146_; uint8_t v___x_4147_; lean_object* v___x_4148_; lean_object* v___f_4149_; lean_object* v___x_4150_; lean_object* v___x_4152_; 
v___x_4144_ = lean_alloc_closure((void*)(l_liftM), 5, 4);
lean_closure_set(v___x_4144_, 0, lean_box(0));
lean_closure_set(v___x_4144_, 1, lean_box(0));
lean_closure_set(v___x_4144_, 2, v___f_4125_);
lean_closure_set(v___x_4144_, 3, lean_box(0));
v___x_4145_ = lean_alloc_closure((void*)(l_Function_comp), 6, 5);
lean_closure_set(v___x_4145_, 0, lean_box(0));
lean_closure_set(v___x_4145_, 1, lean_box(0));
lean_closure_set(v___x_4145_, 2, lean_box(0));
lean_closure_set(v___x_4145_, 3, v___x_4144_);
lean_closure_set(v___x_4145_, 4, v___f_4126_);
v___x_4146_ = lean_unsigned_to_nat(0u);
v___x_4147_ = 0;
v___x_4148_ = lean_box(v___x_4147_);
lean_inc_ref(v___x_4145_);
v___f_4149_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_race___redArg___lam__4___boxed), 7, 5);
lean_closure_set(v___f_4149_, 0, v_a_4140_);
lean_closure_set(v___f_4149_, 1, v___x_4145_);
lean_closure_set(v___f_4149_, 2, v___x_4146_);
lean_closure_set(v___f_4149_, 3, v___x_4148_);
lean_closure_set(v___f_4149_, 4, v___f_4127_);
v___x_4150_ = l_BaseIO_chainTask___redArg(v_a_4128_, v___x_4145_, v___x_4146_, v___x_4147_);
if (v_isShared_4143_ == 0)
{
lean_ctor_set(v___x_4142_, 0, v___x_4150_);
v___x_4152_ = v___x_4142_;
goto v_reusejp_4151_;
}
else
{
lean_object* v_reuseFailAlloc_4155_; 
v_reuseFailAlloc_4155_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4155_, 0, v___x_4150_);
v___x_4152_ = v_reuseFailAlloc_4155_;
goto v_reusejp_4151_;
}
v_reusejp_4151_:
{
lean_object* v___x_4153_; lean_object* v___x_4154_; 
v___x_4153_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4153_, 0, v___x_4152_);
v___x_4154_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4146_, v___x_4147_, v___x_4153_, v___f_4149_);
return v___x_4154_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_race___redArg___lam__5___boxed(lean_object* v___f_4157_, lean_object* v___f_4158_, lean_object* v___f_4159_, lean_object* v_a_4160_, lean_object* v_x_4161_, lean_object* v___y_4162_){
_start:
{
lean_object* v_res_4163_; 
v_res_4163_ = l_Std_Async_EAsync_race___redArg___lam__5(v___f_4157_, v___f_4158_, v___f_4159_, v_a_4160_, v_x_4161_);
return v_res_4163_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_race___redArg___lam__6(lean_object* v___f_4164_, lean_object* v___f_4165_, lean_object* v___f_4166_, lean_object* v_y_4167_, lean_object* v_prio_4168_, lean_object* v___f_4169_, lean_object* v_x_4170_){
_start:
{
if (lean_obj_tag(v_x_4170_) == 0)
{
lean_object* v_a_4172_; lean_object* v___x_4174_; uint8_t v_isShared_4175_; uint8_t v_isSharedCheck_4180_; 
lean_dec_ref(v___f_4169_);
lean_dec(v_prio_4168_);
lean_dec_ref(v_y_4167_);
lean_dec_ref(v___f_4166_);
lean_dec_ref(v___f_4165_);
lean_dec(v___f_4164_);
v_a_4172_ = lean_ctor_get(v_x_4170_, 0);
v_isSharedCheck_4180_ = !lean_is_exclusive(v_x_4170_);
if (v_isSharedCheck_4180_ == 0)
{
v___x_4174_ = v_x_4170_;
v_isShared_4175_ = v_isSharedCheck_4180_;
goto v_resetjp_4173_;
}
else
{
lean_inc(v_a_4172_);
lean_dec(v_x_4170_);
v___x_4174_ = lean_box(0);
v_isShared_4175_ = v_isSharedCheck_4180_;
goto v_resetjp_4173_;
}
v_resetjp_4173_:
{
lean_object* v___x_4177_; 
if (v_isShared_4175_ == 0)
{
v___x_4177_ = v___x_4174_;
goto v_reusejp_4176_;
}
else
{
lean_object* v_reuseFailAlloc_4179_; 
v_reuseFailAlloc_4179_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4179_, 0, v_a_4172_);
v___x_4177_ = v_reuseFailAlloc_4179_;
goto v_reusejp_4176_;
}
v_reusejp_4176_:
{
lean_object* v___x_4178_; 
v___x_4178_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4178_, 0, v___x_4177_);
return v___x_4178_;
}
}
}
else
{
lean_object* v_a_4181_; lean_object* v___x_4183_; uint8_t v_isShared_4184_; uint8_t v_isSharedCheck_4197_; 
v_a_4181_ = lean_ctor_get(v_x_4170_, 0);
v_isSharedCheck_4197_ = !lean_is_exclusive(v_x_4170_);
if (v_isSharedCheck_4197_ == 0)
{
v___x_4183_ = v_x_4170_;
v_isShared_4184_ = v_isSharedCheck_4197_;
goto v_resetjp_4182_;
}
else
{
lean_inc(v_a_4181_);
lean_dec(v_x_4170_);
v___x_4183_ = lean_box(0);
v_isShared_4184_ = v_isSharedCheck_4197_;
goto v_resetjp_4182_;
}
v_resetjp_4182_:
{
lean_object* v___f_4185_; lean_object* v___x_4186_; uint8_t v___x_4187_; lean_object* v___x_4188_; lean_object* v___x_4189_; uint8_t v___x_4190_; lean_object* v___x_4191_; lean_object* v___x_4193_; 
v___f_4185_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_race___redArg___lam__5___boxed), 6, 4);
lean_closure_set(v___f_4185_, 0, v___f_4164_);
lean_closure_set(v___f_4185_, 1, v___f_4165_);
lean_closure_set(v___f_4185_, 2, v___f_4166_);
lean_closure_set(v___f_4185_, 3, v_a_4181_);
v___x_4186_ = lean_unsigned_to_nat(0u);
v___x_4187_ = 0;
v___x_4188_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_toRawBaseIO___boxed), 3, 2);
lean_closure_set(v___x_4188_, 0, lean_box(0));
lean_closure_set(v___x_4188_, 1, v_y_4167_);
v___x_4189_ = lean_io_as_task(v___x_4188_, v_prio_4168_);
v___x_4190_ = 1;
v___x_4191_ = lean_task_bind(v___x_4189_, v___f_4169_, v___x_4186_, v___x_4190_);
if (v_isShared_4184_ == 0)
{
lean_ctor_set(v___x_4183_, 0, v___x_4191_);
v___x_4193_ = v___x_4183_;
goto v_reusejp_4192_;
}
else
{
lean_object* v_reuseFailAlloc_4196_; 
v_reuseFailAlloc_4196_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4196_, 0, v___x_4191_);
v___x_4193_ = v_reuseFailAlloc_4196_;
goto v_reusejp_4192_;
}
v_reusejp_4192_:
{
lean_object* v___x_4194_; lean_object* v___x_4195_; 
v___x_4194_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4194_, 0, v___x_4193_);
v___x_4195_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4186_, v___x_4187_, v___x_4194_, v___f_4185_);
return v___x_4195_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_race___redArg___lam__6___boxed(lean_object* v___f_4198_, lean_object* v___f_4199_, lean_object* v___f_4200_, lean_object* v_y_4201_, lean_object* v_prio_4202_, lean_object* v___f_4203_, lean_object* v_x_4204_, lean_object* v___y_4205_){
_start:
{
lean_object* v_res_4206_; 
v_res_4206_ = l_Std_Async_EAsync_race___redArg___lam__6(v___f_4198_, v___f_4199_, v___f_4200_, v_y_4201_, v_prio_4202_, v___f_4203_, v_x_4204_);
return v_res_4206_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_race___redArg___lam__7(lean_object* v___f_4207_, lean_object* v___f_4208_, lean_object* v___f_4209_, lean_object* v_y_4210_, lean_object* v_prio_4211_, lean_object* v___f_4212_, lean_object* v_x_4213_, lean_object* v___f_4214_, lean_object* v_x_4215_){
_start:
{
if (lean_obj_tag(v_x_4215_) == 0)
{
lean_object* v_a_4217_; lean_object* v___x_4219_; uint8_t v_isShared_4220_; uint8_t v_isSharedCheck_4225_; 
lean_dec_ref(v___f_4214_);
lean_dec_ref(v_x_4213_);
lean_dec_ref(v___f_4212_);
lean_dec(v_prio_4211_);
lean_dec_ref(v_y_4210_);
lean_dec(v___f_4209_);
lean_dec_ref(v___f_4208_);
lean_dec_ref(v___f_4207_);
v_a_4217_ = lean_ctor_get(v_x_4215_, 0);
v_isSharedCheck_4225_ = !lean_is_exclusive(v_x_4215_);
if (v_isSharedCheck_4225_ == 0)
{
v___x_4219_ = v_x_4215_;
v_isShared_4220_ = v_isSharedCheck_4225_;
goto v_resetjp_4218_;
}
else
{
lean_inc(v_a_4217_);
lean_dec(v_x_4215_);
v___x_4219_ = lean_box(0);
v_isShared_4220_ = v_isSharedCheck_4225_;
goto v_resetjp_4218_;
}
v_resetjp_4218_:
{
lean_object* v___x_4222_; 
if (v_isShared_4220_ == 0)
{
v___x_4222_ = v___x_4219_;
goto v_reusejp_4221_;
}
else
{
lean_object* v_reuseFailAlloc_4224_; 
v_reuseFailAlloc_4224_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4224_, 0, v_a_4217_);
v___x_4222_ = v_reuseFailAlloc_4224_;
goto v_reusejp_4221_;
}
v_reusejp_4221_:
{
lean_object* v___x_4223_; 
v___x_4223_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4223_, 0, v___x_4222_);
return v___x_4223_;
}
}
}
else
{
lean_object* v_a_4226_; lean_object* v___x_4228_; uint8_t v_isShared_4229_; uint8_t v_isSharedCheck_4244_; 
v_a_4226_ = lean_ctor_get(v_x_4215_, 0);
v_isSharedCheck_4244_ = !lean_is_exclusive(v_x_4215_);
if (v_isSharedCheck_4244_ == 0)
{
v___x_4228_ = v_x_4215_;
v_isShared_4229_ = v_isSharedCheck_4244_;
goto v_resetjp_4227_;
}
else
{
lean_inc(v_a_4226_);
lean_dec(v_x_4215_);
v___x_4228_ = lean_box(0);
v_isShared_4229_ = v_isSharedCheck_4244_;
goto v_resetjp_4227_;
}
v_resetjp_4227_:
{
lean_object* v___f_4230_; lean_object* v___f_4231_; lean_object* v___f_4232_; lean_object* v___x_4233_; uint8_t v___x_4234_; lean_object* v___x_4235_; lean_object* v___x_4236_; uint8_t v___x_4237_; lean_object* v___x_4238_; lean_object* v___x_4240_; 
lean_inc(v_a_4226_);
v___f_4230_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_race___redArg___lam__3___boxed), 3, 1);
lean_closure_set(v___f_4230_, 0, v_a_4226_);
v___f_4231_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_race___redArg___lam__2___boxed), 5, 3);
lean_closure_set(v___f_4231_, 0, v_a_4226_);
lean_closure_set(v___f_4231_, 1, v___f_4207_);
lean_closure_set(v___f_4231_, 2, v___f_4208_);
lean_inc(v_prio_4211_);
v___f_4232_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_race___redArg___lam__6___boxed), 8, 6);
lean_closure_set(v___f_4232_, 0, v___f_4209_);
lean_closure_set(v___f_4232_, 1, v___f_4230_);
lean_closure_set(v___f_4232_, 2, v___f_4231_);
lean_closure_set(v___f_4232_, 3, v_y_4210_);
lean_closure_set(v___f_4232_, 4, v_prio_4211_);
lean_closure_set(v___f_4232_, 5, v___f_4212_);
v___x_4233_ = lean_unsigned_to_nat(0u);
v___x_4234_ = 0;
v___x_4235_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_toRawBaseIO___boxed), 3, 2);
lean_closure_set(v___x_4235_, 0, lean_box(0));
lean_closure_set(v___x_4235_, 1, v_x_4213_);
v___x_4236_ = lean_io_as_task(v___x_4235_, v_prio_4211_);
v___x_4237_ = 1;
v___x_4238_ = lean_task_bind(v___x_4236_, v___f_4214_, v___x_4233_, v___x_4237_);
if (v_isShared_4229_ == 0)
{
lean_ctor_set(v___x_4228_, 0, v___x_4238_);
v___x_4240_ = v___x_4228_;
goto v_reusejp_4239_;
}
else
{
lean_object* v_reuseFailAlloc_4243_; 
v_reuseFailAlloc_4243_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4243_, 0, v___x_4238_);
v___x_4240_ = v_reuseFailAlloc_4243_;
goto v_reusejp_4239_;
}
v_reusejp_4239_:
{
lean_object* v___x_4241_; lean_object* v___x_4242_; 
v___x_4241_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4241_, 0, v___x_4240_);
v___x_4242_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4233_, v___x_4234_, v___x_4241_, v___f_4232_);
return v___x_4242_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_race___redArg___lam__7___boxed(lean_object* v___f_4245_, lean_object* v___f_4246_, lean_object* v___f_4247_, lean_object* v_y_4248_, lean_object* v_prio_4249_, lean_object* v___f_4250_, lean_object* v_x_4251_, lean_object* v___f_4252_, lean_object* v_x_4253_, lean_object* v___y_4254_){
_start:
{
lean_object* v_res_4255_; 
v_res_4255_ = l_Std_Async_EAsync_race___redArg___lam__7(v___f_4245_, v___f_4246_, v___f_4247_, v_y_4248_, v_prio_4249_, v___f_4250_, v_x_4251_, v___f_4252_, v_x_4253_);
return v_res_4255_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_race___redArg(lean_object* v_x_4258_, lean_object* v_y_4259_, lean_object* v_prio_4260_){
_start:
{
lean_object* v___f_4262_; lean_object* v___f_4263_; lean_object* v___f_4264_; lean_object* v___f_4265_; lean_object* v___f_4266_; lean_object* v___x_4267_; uint8_t v___x_4268_; lean_object* v___x_4269_; lean_object* v___x_4270_; lean_object* v___x_4271_; lean_object* v___x_4272_; 
v___f_4262_ = ((lean_object*)(l_Std_Async_EAsync_asTask___redArg___closed__0));
v___f_4263_ = ((lean_object*)(l_Std_Async_EAsync_race___redArg___closed__0));
v___f_4264_ = ((lean_object*)(l_Std_Async_EAsync_race___redArg___closed__1));
v___f_4265_ = ((lean_object*)(l_Std_Async_BaseAsync_race___redArg___closed__0));
v___f_4266_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_race___redArg___lam__7___boxed), 10, 8);
lean_closure_set(v___f_4266_, 0, v___f_4264_);
lean_closure_set(v___f_4266_, 1, v___f_4263_);
lean_closure_set(v___f_4266_, 2, v___f_4265_);
lean_closure_set(v___f_4266_, 3, v_y_4259_);
lean_closure_set(v___f_4266_, 4, v_prio_4260_);
lean_closure_set(v___f_4266_, 5, v___f_4262_);
lean_closure_set(v___f_4266_, 6, v_x_4258_);
lean_closure_set(v___f_4266_, 7, v___f_4262_);
v___x_4267_ = lean_unsigned_to_nat(0u);
v___x_4268_ = 0;
v___x_4269_ = lean_io_promise_new();
v___x_4270_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4270_, 0, v___x_4269_);
v___x_4271_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4271_, 0, v___x_4270_);
v___x_4272_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4267_, v___x_4268_, v___x_4271_, v___f_4266_);
return v___x_4272_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_race___redArg___boxed(lean_object* v_x_4273_, lean_object* v_y_4274_, lean_object* v_prio_4275_, lean_object* v___y_4276_){
_start:
{
lean_object* v_res_4277_; 
v_res_4277_ = l_Std_Async_EAsync_race___redArg(v_x_4273_, v_y_4274_, v_prio_4275_);
return v_res_4277_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_race(lean_object* v_00_u03b1_4278_, lean_object* v_00_u03b5_4279_, lean_object* v_inst_4280_, lean_object* v_x_4281_, lean_object* v_y_4282_, lean_object* v_prio_4283_){
_start:
{
lean_object* v___f_4285_; lean_object* v___f_4286_; lean_object* v___f_4287_; lean_object* v___f_4288_; lean_object* v___f_4289_; lean_object* v___x_4290_; uint8_t v___x_4291_; lean_object* v___x_4292_; lean_object* v___x_4293_; lean_object* v___x_4294_; lean_object* v___x_4295_; 
v___f_4285_ = ((lean_object*)(l_Std_Async_EAsync_asTask___redArg___closed__0));
v___f_4286_ = ((lean_object*)(l_Std_Async_EAsync_race___redArg___closed__0));
v___f_4287_ = ((lean_object*)(l_Std_Async_EAsync_race___redArg___closed__1));
v___f_4288_ = ((lean_object*)(l_Std_Async_BaseAsync_race___redArg___closed__0));
v___f_4289_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_race___redArg___lam__7___boxed), 10, 8);
lean_closure_set(v___f_4289_, 0, v___f_4287_);
lean_closure_set(v___f_4289_, 1, v___f_4286_);
lean_closure_set(v___f_4289_, 2, v___f_4288_);
lean_closure_set(v___f_4289_, 3, v_y_4282_);
lean_closure_set(v___f_4289_, 4, v_prio_4283_);
lean_closure_set(v___f_4289_, 5, v___f_4285_);
lean_closure_set(v___f_4289_, 6, v_x_4281_);
lean_closure_set(v___f_4289_, 7, v___f_4285_);
v___x_4290_ = lean_unsigned_to_nat(0u);
v___x_4291_ = 0;
v___x_4292_ = lean_io_promise_new();
v___x_4293_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4293_, 0, v___x_4292_);
v___x_4294_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4294_, 0, v___x_4293_);
v___x_4295_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4290_, v___x_4291_, v___x_4294_, v___f_4289_);
return v___x_4295_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_race___boxed(lean_object* v_00_u03b1_4296_, lean_object* v_00_u03b5_4297_, lean_object* v_inst_4298_, lean_object* v_x_4299_, lean_object* v_y_4300_, lean_object* v_prio_4301_, lean_object* v___y_4302_){
_start:
{
lean_object* v_res_4303_; 
v_res_4303_ = l_Std_Async_EAsync_race(v_00_u03b1_4296_, v_00_u03b5_4297_, v_inst_4298_, v_x_4299_, v_y_4300_, v_prio_4301_);
lean_dec(v_inst_4298_);
return v_res_4303_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_concurrentlyAll___redArg___lam__1(lean_object* v_prio_4304_, lean_object* v___f_4305_, lean_object* v_x_4306_){
_start:
{
lean_object* v___x_4308_; lean_object* v___x_4309_; lean_object* v___x_4310_; uint8_t v___x_4311_; lean_object* v___x_4312_; lean_object* v___x_4313_; lean_object* v___x_4314_; 
v___x_4308_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_toRawBaseIO___boxed), 3, 2);
lean_closure_set(v___x_4308_, 0, lean_box(0));
lean_closure_set(v___x_4308_, 1, v_x_4306_);
v___x_4309_ = lean_io_as_task(v___x_4308_, v_prio_4304_);
v___x_4310_ = lean_unsigned_to_nat(0u);
v___x_4311_ = 1;
v___x_4312_ = lean_task_bind(v___x_4309_, v___f_4305_, v___x_4310_, v___x_4311_);
v___x_4313_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4313_, 0, v___x_4312_);
v___x_4314_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4314_, 0, v___x_4313_);
return v___x_4314_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_concurrentlyAll___redArg___lam__1___boxed(lean_object* v_prio_4315_, lean_object* v___f_4316_, lean_object* v_x_4317_, lean_object* v___y_4318_){
_start:
{
lean_object* v_res_4319_; 
v_res_4319_ = l_Std_Async_EAsync_concurrentlyAll___redArg___lam__1(v_prio_4315_, v___f_4316_, v_x_4317_);
return v_res_4319_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_concurrentlyAll___redArg___lam__0(lean_object* v___y_4320_){
_start:
{
lean_object* v___x_4322_; 
v___x_4322_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4322_, 0, v___y_4320_);
return v___x_4322_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_concurrentlyAll___redArg___lam__0___boxed(lean_object* v___y_4323_, lean_object* v___y_4324_){
_start:
{
lean_object* v_res_4325_; 
v_res_4325_ = l_Std_Async_EAsync_concurrentlyAll___redArg___lam__0(v___y_4323_);
return v_res_4325_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_concurrentlyAll___redArg___lam__2(lean_object* v___x_4326_, lean_object* v___f_4327_, lean_object* v_x_4328_){
_start:
{
if (lean_obj_tag(v_x_4328_) == 0)
{
lean_object* v_a_4330_; lean_object* v___x_4332_; uint8_t v_isShared_4333_; uint8_t v_isSharedCheck_4338_; 
lean_dec_ref(v___f_4327_);
lean_dec_ref(v___x_4326_);
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
lean_object* v_a_4339_; size_t v_sz_4340_; size_t v___x_4341_; lean_object* v___x_293__overap_4342_; lean_object* v___x_4343_; 
v_a_4339_ = lean_ctor_get(v_x_4328_, 0);
lean_inc(v_a_4339_);
lean_dec_ref_known(v_x_4328_, 1);
v_sz_4340_ = lean_array_size(v_a_4339_);
v___x_4341_ = ((size_t)0ULL);
v___x_293__overap_4342_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_4326_, v___f_4327_, v_sz_4340_, v___x_4341_, v_a_4339_);
v___x_4343_ = lean_apply_1(v___x_293__overap_4342_, lean_box(0));
return v___x_4343_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_concurrentlyAll___redArg___lam__2___boxed(lean_object* v___x_4344_, lean_object* v___f_4345_, lean_object* v_x_4346_, lean_object* v___y_4347_){
_start:
{
lean_object* v_res_4348_; 
v_res_4348_ = l_Std_Async_EAsync_concurrentlyAll___redArg___lam__2(v___x_4344_, v___f_4345_, v_x_4346_);
return v_res_4348_;
}
}
static lean_object* _init_l_Std_Async_EAsync_concurrentlyAll___redArg___closed__1(void){
_start:
{
lean_object* v___f_4350_; lean_object* v___x_4351_; lean_object* v___f_4352_; 
v___f_4350_ = ((lean_object*)(l_Std_Async_EAsync_concurrentlyAll___redArg___closed__0));
v___x_4351_ = lean_obj_once(&l_Std_Async_EAsync_instMonad___closed__0, &l_Std_Async_EAsync_instMonad___closed__0_once, _init_l_Std_Async_EAsync_instMonad___closed__0);
v___f_4352_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_concurrentlyAll___redArg___lam__2___boxed), 4, 2);
lean_closure_set(v___f_4352_, 0, v___x_4351_);
lean_closure_set(v___f_4352_, 1, v___f_4350_);
return v___f_4352_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_concurrentlyAll___redArg(lean_object* v_xs_4353_, lean_object* v_prio_4354_){
_start:
{
lean_object* v___f_4356_; lean_object* v___f_4357_; lean_object* v___x_4358_; lean_object* v___f_4359_; lean_object* v___x_4360_; uint8_t v___x_4361_; size_t v_sz_4362_; size_t v___x_4363_; lean_object* v___x_218__overap_4364_; lean_object* v___x_4365_; lean_object* v___x_4366_; 
v___f_4356_ = ((lean_object*)(l_Std_Async_EAsync_asTask___redArg___closed__0));
v___f_4357_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_concurrentlyAll___redArg___lam__1___boxed), 4, 2);
lean_closure_set(v___f_4357_, 0, v_prio_4354_);
lean_closure_set(v___f_4357_, 1, v___f_4356_);
v___x_4358_ = lean_obj_once(&l_Std_Async_EAsync_instMonad___closed__0, &l_Std_Async_EAsync_instMonad___closed__0_once, _init_l_Std_Async_EAsync_instMonad___closed__0);
v___f_4359_ = lean_obj_once(&l_Std_Async_EAsync_concurrentlyAll___redArg___closed__1, &l_Std_Async_EAsync_concurrentlyAll___redArg___closed__1_once, _init_l_Std_Async_EAsync_concurrentlyAll___redArg___closed__1);
v___x_4360_ = lean_unsigned_to_nat(0u);
v___x_4361_ = 0;
v_sz_4362_ = lean_array_size(v_xs_4353_);
v___x_4363_ = ((size_t)0ULL);
v___x_218__overap_4364_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_4358_, v___f_4357_, v_sz_4362_, v___x_4363_, v_xs_4353_);
v___x_4365_ = lean_apply_1(v___x_218__overap_4364_, lean_box(0));
v___x_4366_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4360_, v___x_4361_, v___x_4365_, v___f_4359_);
return v___x_4366_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_concurrentlyAll___redArg___boxed(lean_object* v_xs_4367_, lean_object* v_prio_4368_, lean_object* v___y_4369_){
_start:
{
lean_object* v_res_4370_; 
v_res_4370_ = l_Std_Async_EAsync_concurrentlyAll___redArg(v_xs_4367_, v_prio_4368_);
return v_res_4370_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_concurrentlyAll(lean_object* v_00_u03b5_4371_, lean_object* v_00_u03b1_4372_, lean_object* v_xs_4373_, lean_object* v_prio_4374_){
_start:
{
lean_object* v___f_4376_; lean_object* v___f_4377_; lean_object* v___x_4378_; lean_object* v___f_4379_; lean_object* v___x_4380_; uint8_t v___x_4381_; size_t v_sz_4382_; size_t v___x_4383_; lean_object* v___x_259__overap_4384_; lean_object* v___x_4385_; lean_object* v___x_4386_; 
v___f_4376_ = ((lean_object*)(l_Std_Async_EAsync_asTask___redArg___closed__0));
v___f_4377_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_concurrentlyAll___redArg___lam__1___boxed), 4, 2);
lean_closure_set(v___f_4377_, 0, v_prio_4374_);
lean_closure_set(v___f_4377_, 1, v___f_4376_);
v___x_4378_ = lean_obj_once(&l_Std_Async_EAsync_instMonad___closed__0, &l_Std_Async_EAsync_instMonad___closed__0_once, _init_l_Std_Async_EAsync_instMonad___closed__0);
v___f_4379_ = lean_obj_once(&l_Std_Async_EAsync_concurrentlyAll___redArg___closed__1, &l_Std_Async_EAsync_concurrentlyAll___redArg___closed__1_once, _init_l_Std_Async_EAsync_concurrentlyAll___redArg___closed__1);
v___x_4380_ = lean_unsigned_to_nat(0u);
v___x_4381_ = 0;
v_sz_4382_ = lean_array_size(v_xs_4373_);
v___x_4383_ = ((size_t)0ULL);
v___x_259__overap_4384_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_4378_, v___f_4377_, v_sz_4382_, v___x_4383_, v_xs_4373_);
v___x_4385_ = lean_apply_1(v___x_259__overap_4384_, lean_box(0));
v___x_4386_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4380_, v___x_4381_, v___x_4385_, v___f_4379_);
return v___x_4386_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_concurrentlyAll___boxed(lean_object* v_00_u03b5_4387_, lean_object* v_00_u03b1_4388_, lean_object* v_xs_4389_, lean_object* v_prio_4390_, lean_object* v___y_4391_){
_start:
{
lean_object* v_res_4392_; 
v_res_4392_ = l_Std_Async_EAsync_concurrentlyAll(v_00_u03b5_4387_, v_00_u03b1_4388_, v_xs_4389_, v_prio_4390_);
return v_res_4392_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_raceAll___redArg___lam__4(lean_object* v___f_4393_, lean_object* v___f_4394_, lean_object* v_x_4395_){
_start:
{
if (lean_obj_tag(v_x_4395_) == 0)
{
lean_object* v_a_4397_; lean_object* v___x_4399_; uint8_t v_isShared_4400_; uint8_t v_isSharedCheck_4405_; 
lean_dec_ref(v___f_4394_);
lean_dec(v___f_4393_);
v_a_4397_ = lean_ctor_get(v_x_4395_, 0);
v_isSharedCheck_4405_ = !lean_is_exclusive(v_x_4395_);
if (v_isSharedCheck_4405_ == 0)
{
v___x_4399_ = v_x_4395_;
v_isShared_4400_ = v_isSharedCheck_4405_;
goto v_resetjp_4398_;
}
else
{
lean_inc(v_a_4397_);
lean_dec(v_x_4395_);
v___x_4399_ = lean_box(0);
v_isShared_4400_ = v_isSharedCheck_4405_;
goto v_resetjp_4398_;
}
v_resetjp_4398_:
{
lean_object* v___x_4402_; 
if (v_isShared_4400_ == 0)
{
v___x_4402_ = v___x_4399_;
goto v_reusejp_4401_;
}
else
{
lean_object* v_reuseFailAlloc_4404_; 
v_reuseFailAlloc_4404_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4404_, 0, v_a_4397_);
v___x_4402_ = v_reuseFailAlloc_4404_;
goto v_reusejp_4401_;
}
v_reusejp_4401_:
{
lean_object* v___x_4403_; 
v___x_4403_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4403_, 0, v___x_4402_);
return v___x_4403_;
}
}
}
else
{
lean_object* v_a_4406_; lean_object* v___x_4408_; uint8_t v_isShared_4409_; uint8_t v_isSharedCheck_4419_; 
v_a_4406_ = lean_ctor_get(v_x_4395_, 0);
v_isSharedCheck_4419_ = !lean_is_exclusive(v_x_4395_);
if (v_isSharedCheck_4419_ == 0)
{
v___x_4408_ = v_x_4395_;
v_isShared_4409_ = v_isSharedCheck_4419_;
goto v_resetjp_4407_;
}
else
{
lean_inc(v_a_4406_);
lean_dec(v_x_4395_);
v___x_4408_ = lean_box(0);
v_isShared_4409_ = v_isSharedCheck_4419_;
goto v_resetjp_4407_;
}
v_resetjp_4407_:
{
lean_object* v___x_4410_; lean_object* v___x_4411_; lean_object* v___x_4412_; uint8_t v___x_4413_; lean_object* v___x_4414_; lean_object* v___x_4416_; 
v___x_4410_ = lean_alloc_closure((void*)(l_liftM), 5, 4);
lean_closure_set(v___x_4410_, 0, lean_box(0));
lean_closure_set(v___x_4410_, 1, lean_box(0));
lean_closure_set(v___x_4410_, 2, v___f_4393_);
lean_closure_set(v___x_4410_, 3, lean_box(0));
v___x_4411_ = lean_alloc_closure((void*)(l_Function_comp), 6, 5);
lean_closure_set(v___x_4411_, 0, lean_box(0));
lean_closure_set(v___x_4411_, 1, lean_box(0));
lean_closure_set(v___x_4411_, 2, lean_box(0));
lean_closure_set(v___x_4411_, 3, v___x_4410_);
lean_closure_set(v___x_4411_, 4, v___f_4394_);
v___x_4412_ = lean_unsigned_to_nat(0u);
v___x_4413_ = 0;
v___x_4414_ = l_BaseIO_chainTask___redArg(v_a_4406_, v___x_4411_, v___x_4412_, v___x_4413_);
if (v_isShared_4409_ == 0)
{
lean_ctor_set(v___x_4408_, 0, v___x_4414_);
v___x_4416_ = v___x_4408_;
goto v_reusejp_4415_;
}
else
{
lean_object* v_reuseFailAlloc_4418_; 
v_reuseFailAlloc_4418_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4418_, 0, v___x_4414_);
v___x_4416_ = v_reuseFailAlloc_4418_;
goto v_reusejp_4415_;
}
v_reusejp_4415_:
{
lean_object* v___x_4417_; 
v___x_4417_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4417_, 0, v___x_4416_);
return v___x_4417_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_raceAll___redArg___lam__4___boxed(lean_object* v___f_4420_, lean_object* v___f_4421_, lean_object* v_x_4422_, lean_object* v___y_4423_){
_start:
{
lean_object* v_res_4424_; 
v_res_4424_ = l_Std_Async_EAsync_raceAll___redArg___lam__4(v___f_4420_, v___f_4421_, v_x_4422_);
return v_res_4424_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_raceAll___redArg___lam__0(lean_object* v_prio_4425_, lean_object* v___f_4426_, lean_object* v___f_4427_, lean_object* v_x_4428_){
_start:
{
lean_object* v___x_4430_; uint8_t v___x_4431_; lean_object* v___x_4432_; lean_object* v___x_4433_; uint8_t v___x_4434_; lean_object* v___x_4435_; lean_object* v___x_4436_; lean_object* v___x_4437_; lean_object* v___x_4438_; 
v___x_4430_ = lean_unsigned_to_nat(0u);
v___x_4431_ = 0;
v___x_4432_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_toRawBaseIO___boxed), 3, 2);
lean_closure_set(v___x_4432_, 0, lean_box(0));
lean_closure_set(v___x_4432_, 1, v_x_4428_);
v___x_4433_ = lean_io_as_task(v___x_4432_, v_prio_4425_);
v___x_4434_ = 1;
v___x_4435_ = lean_task_bind(v___x_4433_, v___f_4426_, v___x_4430_, v___x_4434_);
v___x_4436_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4436_, 0, v___x_4435_);
v___x_4437_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4437_, 0, v___x_4436_);
v___x_4438_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4430_, v___x_4431_, v___x_4437_, v___f_4427_);
return v___x_4438_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_raceAll___redArg___lam__0___boxed(lean_object* v_prio_4439_, lean_object* v___f_4440_, lean_object* v___f_4441_, lean_object* v_x_4442_, lean_object* v___y_4443_){
_start:
{
lean_object* v_res_4444_; 
v_res_4444_ = l_Std_Async_EAsync_raceAll___redArg___lam__0(v_prio_4439_, v___f_4440_, v___f_4441_, v_x_4442_);
return v_res_4444_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_raceAll___redArg___lam__2(lean_object* v___f_4445_, lean_object* v_prio_4446_, lean_object* v___f_4447_, lean_object* v___f_4448_, lean_object* v___f_4449_, lean_object* v_inst_4450_, lean_object* v_xs_4451_, lean_object* v_x_4452_){
_start:
{
if (lean_obj_tag(v_x_4452_) == 0)
{
lean_object* v_a_4454_; lean_object* v___x_4456_; uint8_t v_isShared_4457_; uint8_t v_isSharedCheck_4462_; 
lean_dec(v_xs_4451_);
lean_dec_ref(v_inst_4450_);
lean_dec_ref(v___f_4449_);
lean_dec_ref(v___f_4448_);
lean_dec_ref(v___f_4447_);
lean_dec(v_prio_4446_);
lean_dec(v___f_4445_);
v_a_4454_ = lean_ctor_get(v_x_4452_, 0);
v_isSharedCheck_4462_ = !lean_is_exclusive(v_x_4452_);
if (v_isSharedCheck_4462_ == 0)
{
v___x_4456_ = v_x_4452_;
v_isShared_4457_ = v_isSharedCheck_4462_;
goto v_resetjp_4455_;
}
else
{
lean_inc(v_a_4454_);
lean_dec(v_x_4452_);
v___x_4456_ = lean_box(0);
v_isShared_4457_ = v_isSharedCheck_4462_;
goto v_resetjp_4455_;
}
v_resetjp_4455_:
{
lean_object* v___x_4459_; 
if (v_isShared_4457_ == 0)
{
v___x_4459_ = v___x_4456_;
goto v_reusejp_4458_;
}
else
{
lean_object* v_reuseFailAlloc_4461_; 
v_reuseFailAlloc_4461_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4461_, 0, v_a_4454_);
v___x_4459_ = v_reuseFailAlloc_4461_;
goto v_reusejp_4458_;
}
v_reusejp_4458_:
{
lean_object* v___x_4460_; 
v___x_4460_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4460_, 0, v___x_4459_);
return v___x_4460_;
}
}
}
else
{
lean_object* v_a_4463_; lean_object* v___f_4464_; lean_object* v___f_4465_; lean_object* v___f_4466_; lean_object* v___f_4467_; lean_object* v___x_4468_; uint8_t v___x_4469_; lean_object* v___x_4470_; lean_object* v___x_4471_; 
v_a_4463_ = lean_ctor_get(v_x_4452_, 0);
lean_inc_n(v_a_4463_, 2);
lean_dec_ref_known(v_x_4452_, 1);
v___f_4464_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_race___redArg___lam__3___boxed), 3, 1);
lean_closure_set(v___f_4464_, 0, v_a_4463_);
v___f_4465_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_raceAll___redArg___lam__4___boxed), 4, 2);
lean_closure_set(v___f_4465_, 0, v___f_4445_);
lean_closure_set(v___f_4465_, 1, v___f_4464_);
v___f_4466_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_raceAll___redArg___lam__0___boxed), 5, 3);
lean_closure_set(v___f_4466_, 0, v_prio_4446_);
lean_closure_set(v___f_4466_, 1, v___f_4447_);
lean_closure_set(v___f_4466_, 2, v___f_4465_);
v___f_4467_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_race___redArg___lam__2___boxed), 5, 3);
lean_closure_set(v___f_4467_, 0, v_a_4463_);
lean_closure_set(v___f_4467_, 1, v___f_4448_);
lean_closure_set(v___f_4467_, 2, v___f_4449_);
v___x_4468_ = lean_unsigned_to_nat(0u);
v___x_4469_ = 0;
v___x_4470_ = lean_apply_3(v_inst_4450_, v_xs_4451_, v___f_4466_, lean_box(0));
v___x_4471_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4468_, v___x_4469_, v___x_4470_, v___f_4467_);
return v___x_4471_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_raceAll___redArg___lam__2___boxed(lean_object* v___f_4472_, lean_object* v_prio_4473_, lean_object* v___f_4474_, lean_object* v___f_4475_, lean_object* v___f_4476_, lean_object* v_inst_4477_, lean_object* v_xs_4478_, lean_object* v_x_4479_, lean_object* v___y_4480_){
_start:
{
lean_object* v_res_4481_; 
v_res_4481_ = l_Std_Async_EAsync_raceAll___redArg___lam__2(v___f_4472_, v_prio_4473_, v___f_4474_, v___f_4475_, v___f_4476_, v_inst_4477_, v_xs_4478_, v_x_4479_);
return v_res_4481_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_raceAll___redArg(lean_object* v_inst_4482_, lean_object* v_xs_4483_, lean_object* v_prio_4484_){
_start:
{
lean_object* v___f_4486_; lean_object* v___f_4487_; lean_object* v___f_4488_; lean_object* v___f_4489_; lean_object* v___f_4490_; lean_object* v___x_4491_; uint8_t v___x_4492_; lean_object* v___x_4493_; lean_object* v___x_4494_; lean_object* v___x_4495_; lean_object* v___x_4496_; 
v___f_4486_ = ((lean_object*)(l_Std_Async_EAsync_race___redArg___closed__1));
v___f_4487_ = ((lean_object*)(l_Std_Async_EAsync_race___redArg___closed__0));
v___f_4488_ = ((lean_object*)(l_Std_Async_EAsync_asTask___redArg___closed__0));
v___f_4489_ = ((lean_object*)(l_Std_Async_BaseAsync_race___redArg___closed__0));
v___f_4490_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_raceAll___redArg___lam__2___boxed), 9, 7);
lean_closure_set(v___f_4490_, 0, v___f_4489_);
lean_closure_set(v___f_4490_, 1, v_prio_4484_);
lean_closure_set(v___f_4490_, 2, v___f_4488_);
lean_closure_set(v___f_4490_, 3, v___f_4486_);
lean_closure_set(v___f_4490_, 4, v___f_4487_);
lean_closure_set(v___f_4490_, 5, v_inst_4482_);
lean_closure_set(v___f_4490_, 6, v_xs_4483_);
v___x_4491_ = lean_unsigned_to_nat(0u);
v___x_4492_ = 0;
v___x_4493_ = lean_io_promise_new();
v___x_4494_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4494_, 0, v___x_4493_);
v___x_4495_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4495_, 0, v___x_4494_);
v___x_4496_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4491_, v___x_4492_, v___x_4495_, v___f_4490_);
return v___x_4496_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_raceAll___redArg___boxed(lean_object* v_inst_4497_, lean_object* v_xs_4498_, lean_object* v_prio_4499_, lean_object* v___y_4500_){
_start:
{
lean_object* v_res_4501_; 
v_res_4501_ = l_Std_Async_EAsync_raceAll___redArg(v_inst_4497_, v_xs_4498_, v_prio_4499_);
return v_res_4501_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_raceAll(lean_object* v_00_u03b1_4502_, lean_object* v_00_u03b5_4503_, lean_object* v_c_4504_, lean_object* v_inst_4505_, lean_object* v_inst_4506_, lean_object* v_xs_4507_, lean_object* v_prio_4508_){
_start:
{
lean_object* v___f_4510_; lean_object* v___f_4511_; lean_object* v___f_4512_; lean_object* v___f_4513_; lean_object* v___f_4514_; lean_object* v___x_4515_; uint8_t v___x_4516_; lean_object* v___x_4517_; lean_object* v___x_4518_; lean_object* v___x_4519_; lean_object* v___x_4520_; 
v___f_4510_ = ((lean_object*)(l_Std_Async_EAsync_race___redArg___closed__1));
v___f_4511_ = ((lean_object*)(l_Std_Async_EAsync_race___redArg___closed__0));
v___f_4512_ = ((lean_object*)(l_Std_Async_EAsync_asTask___redArg___closed__0));
v___f_4513_ = ((lean_object*)(l_Std_Async_BaseAsync_race___redArg___closed__0));
v___f_4514_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_raceAll___redArg___lam__2___boxed), 9, 7);
lean_closure_set(v___f_4514_, 0, v___f_4513_);
lean_closure_set(v___f_4514_, 1, v_prio_4508_);
lean_closure_set(v___f_4514_, 2, v___f_4512_);
lean_closure_set(v___f_4514_, 3, v___f_4510_);
lean_closure_set(v___f_4514_, 4, v___f_4511_);
lean_closure_set(v___f_4514_, 5, v_inst_4506_);
lean_closure_set(v___f_4514_, 6, v_xs_4507_);
v___x_4515_ = lean_unsigned_to_nat(0u);
v___x_4516_ = 0;
v___x_4517_ = lean_io_promise_new();
v___x_4518_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4518_, 0, v___x_4517_);
v___x_4519_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4519_, 0, v___x_4518_);
v___x_4520_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4515_, v___x_4516_, v___x_4519_, v___f_4514_);
return v___x_4520_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_EAsync_raceAll___boxed(lean_object* v_00_u03b1_4521_, lean_object* v_00_u03b5_4522_, lean_object* v_c_4523_, lean_object* v_inst_4524_, lean_object* v_inst_4525_, lean_object* v_xs_4526_, lean_object* v_prio_4527_, lean_object* v___y_4528_){
_start:
{
lean_object* v_res_4529_; 
v_res_4529_ = l_Std_Async_EAsync_raceAll(v_00_u03b1_4521_, v_00_u03b5_4522_, v_c_4523_, v_inst_4524_, v_inst_4525_, v_xs_4526_, v_prio_4527_);
lean_dec(v_inst_4524_);
return v_res_4529_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_toIO___redArg(lean_object* v_x_4530_){
_start:
{
lean_object* v___x_4532_; 
v___x_4532_ = lean_apply_1(v_x_4530_, lean_box(0));
if (lean_obj_tag(v___x_4532_) == 0)
{
lean_object* v_a_4533_; lean_object* v___x_4535_; uint8_t v_isShared_4536_; uint8_t v_isSharedCheck_4541_; 
v_a_4533_ = lean_ctor_get(v___x_4532_, 0);
v_isSharedCheck_4541_ = !lean_is_exclusive(v___x_4532_);
if (v_isSharedCheck_4541_ == 0)
{
v___x_4535_ = v___x_4532_;
v_isShared_4536_ = v_isSharedCheck_4541_;
goto v_resetjp_4534_;
}
else
{
lean_inc(v_a_4533_);
lean_dec(v___x_4532_);
v___x_4535_ = lean_box(0);
v_isShared_4536_ = v_isSharedCheck_4541_;
goto v_resetjp_4534_;
}
v_resetjp_4534_:
{
lean_object* v___x_4537_; lean_object* v___x_4539_; 
v___x_4537_ = lean_task_pure(v_a_4533_);
if (v_isShared_4536_ == 0)
{
lean_ctor_set(v___x_4535_, 0, v___x_4537_);
v___x_4539_ = v___x_4535_;
goto v_reusejp_4538_;
}
else
{
lean_object* v_reuseFailAlloc_4540_; 
v_reuseFailAlloc_4540_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4540_, 0, v___x_4537_);
v___x_4539_ = v_reuseFailAlloc_4540_;
goto v_reusejp_4538_;
}
v_reusejp_4538_:
{
return v___x_4539_;
}
}
}
else
{
lean_object* v_a_4542_; lean_object* v___x_4544_; uint8_t v_isShared_4545_; uint8_t v_isSharedCheck_4549_; 
v_a_4542_ = lean_ctor_get(v___x_4532_, 0);
v_isSharedCheck_4549_ = !lean_is_exclusive(v___x_4532_);
if (v_isSharedCheck_4549_ == 0)
{
v___x_4544_ = v___x_4532_;
v_isShared_4545_ = v_isSharedCheck_4549_;
goto v_resetjp_4543_;
}
else
{
lean_inc(v_a_4542_);
lean_dec(v___x_4532_);
v___x_4544_ = lean_box(0);
v_isShared_4545_ = v_isSharedCheck_4549_;
goto v_resetjp_4543_;
}
v_resetjp_4543_:
{
lean_object* v___x_4547_; 
if (v_isShared_4545_ == 0)
{
lean_ctor_set_tag(v___x_4544_, 0);
v___x_4547_ = v___x_4544_;
goto v_reusejp_4546_;
}
else
{
lean_object* v_reuseFailAlloc_4548_; 
v_reuseFailAlloc_4548_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4548_, 0, v_a_4542_);
v___x_4547_ = v_reuseFailAlloc_4548_;
goto v_reusejp_4546_;
}
v_reusejp_4546_:
{
return v___x_4547_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_toIO___redArg___boxed(lean_object* v_x_4550_, lean_object* v___y_4551_){
_start:
{
lean_object* v_res_4552_; 
v_res_4552_ = l_Std_Async_Async_toIO___redArg(v_x_4550_);
return v_res_4552_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_toIO(lean_object* v_00_u03b1_4553_, lean_object* v_x_4554_){
_start:
{
lean_object* v___x_4556_; 
v___x_4556_ = lean_apply_1(v_x_4554_, lean_box(0));
if (lean_obj_tag(v___x_4556_) == 0)
{
lean_object* v_a_4557_; lean_object* v___x_4559_; uint8_t v_isShared_4560_; uint8_t v_isSharedCheck_4565_; 
v_a_4557_ = lean_ctor_get(v___x_4556_, 0);
v_isSharedCheck_4565_ = !lean_is_exclusive(v___x_4556_);
if (v_isSharedCheck_4565_ == 0)
{
v___x_4559_ = v___x_4556_;
v_isShared_4560_ = v_isSharedCheck_4565_;
goto v_resetjp_4558_;
}
else
{
lean_inc(v_a_4557_);
lean_dec(v___x_4556_);
v___x_4559_ = lean_box(0);
v_isShared_4560_ = v_isSharedCheck_4565_;
goto v_resetjp_4558_;
}
v_resetjp_4558_:
{
lean_object* v___x_4561_; lean_object* v___x_4563_; 
v___x_4561_ = lean_task_pure(v_a_4557_);
if (v_isShared_4560_ == 0)
{
lean_ctor_set(v___x_4559_, 0, v___x_4561_);
v___x_4563_ = v___x_4559_;
goto v_reusejp_4562_;
}
else
{
lean_object* v_reuseFailAlloc_4564_; 
v_reuseFailAlloc_4564_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4564_, 0, v___x_4561_);
v___x_4563_ = v_reuseFailAlloc_4564_;
goto v_reusejp_4562_;
}
v_reusejp_4562_:
{
return v___x_4563_;
}
}
}
else
{
lean_object* v_a_4566_; lean_object* v___x_4568_; uint8_t v_isShared_4569_; uint8_t v_isSharedCheck_4573_; 
v_a_4566_ = lean_ctor_get(v___x_4556_, 0);
v_isSharedCheck_4573_ = !lean_is_exclusive(v___x_4556_);
if (v_isSharedCheck_4573_ == 0)
{
v___x_4568_ = v___x_4556_;
v_isShared_4569_ = v_isSharedCheck_4573_;
goto v_resetjp_4567_;
}
else
{
lean_inc(v_a_4566_);
lean_dec(v___x_4556_);
v___x_4568_ = lean_box(0);
v_isShared_4569_ = v_isSharedCheck_4573_;
goto v_resetjp_4567_;
}
v_resetjp_4567_:
{
lean_object* v___x_4571_; 
if (v_isShared_4569_ == 0)
{
lean_ctor_set_tag(v___x_4568_, 0);
v___x_4571_ = v___x_4568_;
goto v_reusejp_4570_;
}
else
{
lean_object* v_reuseFailAlloc_4572_; 
v_reuseFailAlloc_4572_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4572_, 0, v_a_4566_);
v___x_4571_ = v_reuseFailAlloc_4572_;
goto v_reusejp_4570_;
}
v_reusejp_4570_:
{
return v___x_4571_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_toIO___boxed(lean_object* v_00_u03b1_4574_, lean_object* v_x_4575_, lean_object* v___y_4576_){
_start:
{
lean_object* v_res_4577_; 
v_res_4577_ = l_Std_Async_Async_toIO(v_00_u03b1_4574_, v_x_4575_);
return v_res_4577_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_block___redArg(lean_object* v_x_4578_, lean_object* v_prio_4579_){
_start:
{
lean_object* v___f_4581_; lean_object* v___x_4582_; lean_object* v___x_4583_; lean_object* v___x_4584_; uint8_t v___x_4585_; lean_object* v___x_4586_; lean_object* v___x_4587_; 
v___f_4581_ = ((lean_object*)(l_Std_Async_EAsync_instMonadAsyncAsyncTaskError___closed__0));
v___x_4582_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_toRawBaseIO___boxed), 3, 2);
lean_closure_set(v___x_4582_, 0, lean_box(0));
lean_closure_set(v___x_4582_, 1, v_x_4578_);
v___x_4583_ = lean_io_as_task(v___x_4582_, v_prio_4579_);
v___x_4584_ = lean_unsigned_to_nat(0u);
v___x_4585_ = 1;
v___x_4586_ = lean_task_bind(v___x_4583_, v___f_4581_, v___x_4584_, v___x_4585_);
v___x_4587_ = lean_task_get_own(v___x_4586_);
if (lean_obj_tag(v___x_4587_) == 0)
{
lean_object* v_a_4588_; lean_object* v___x_4590_; uint8_t v_isShared_4591_; uint8_t v_isSharedCheck_4595_; 
v_a_4588_ = lean_ctor_get(v___x_4587_, 0);
v_isSharedCheck_4595_ = !lean_is_exclusive(v___x_4587_);
if (v_isSharedCheck_4595_ == 0)
{
v___x_4590_ = v___x_4587_;
v_isShared_4591_ = v_isSharedCheck_4595_;
goto v_resetjp_4589_;
}
else
{
lean_inc(v_a_4588_);
lean_dec(v___x_4587_);
v___x_4590_ = lean_box(0);
v_isShared_4591_ = v_isSharedCheck_4595_;
goto v_resetjp_4589_;
}
v_resetjp_4589_:
{
lean_object* v___x_4593_; 
if (v_isShared_4591_ == 0)
{
lean_ctor_set_tag(v___x_4590_, 1);
v___x_4593_ = v___x_4590_;
goto v_reusejp_4592_;
}
else
{
lean_object* v_reuseFailAlloc_4594_; 
v_reuseFailAlloc_4594_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4594_, 0, v_a_4588_);
v___x_4593_ = v_reuseFailAlloc_4594_;
goto v_reusejp_4592_;
}
v_reusejp_4592_:
{
return v___x_4593_;
}
}
}
else
{
lean_object* v_a_4596_; lean_object* v___x_4598_; uint8_t v_isShared_4599_; uint8_t v_isSharedCheck_4603_; 
v_a_4596_ = lean_ctor_get(v___x_4587_, 0);
v_isSharedCheck_4603_ = !lean_is_exclusive(v___x_4587_);
if (v_isSharedCheck_4603_ == 0)
{
v___x_4598_ = v___x_4587_;
v_isShared_4599_ = v_isSharedCheck_4603_;
goto v_resetjp_4597_;
}
else
{
lean_inc(v_a_4596_);
lean_dec(v___x_4587_);
v___x_4598_ = lean_box(0);
v_isShared_4599_ = v_isSharedCheck_4603_;
goto v_resetjp_4597_;
}
v_resetjp_4597_:
{
lean_object* v___x_4601_; 
if (v_isShared_4599_ == 0)
{
lean_ctor_set_tag(v___x_4598_, 0);
v___x_4601_ = v___x_4598_;
goto v_reusejp_4600_;
}
else
{
lean_object* v_reuseFailAlloc_4602_; 
v_reuseFailAlloc_4602_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4602_, 0, v_a_4596_);
v___x_4601_ = v_reuseFailAlloc_4602_;
goto v_reusejp_4600_;
}
v_reusejp_4600_:
{
return v___x_4601_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_block___redArg___boxed(lean_object* v_x_4604_, lean_object* v_prio_4605_, lean_object* v___y_4606_){
_start:
{
lean_object* v_res_4607_; 
v_res_4607_ = l_Std_Async_Async_block___redArg(v_x_4604_, v_prio_4605_);
return v_res_4607_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_block(lean_object* v_00_u03b1_4608_, lean_object* v_x_4609_, lean_object* v_prio_4610_){
_start:
{
lean_object* v___f_4612_; lean_object* v___x_4613_; lean_object* v___x_4614_; lean_object* v___x_4615_; uint8_t v___x_4616_; lean_object* v___x_4617_; lean_object* v___x_4618_; 
v___f_4612_ = ((lean_object*)(l_Std_Async_EAsync_instMonadAsyncAsyncTaskError___closed__0));
v___x_4613_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_toRawBaseIO___boxed), 3, 2);
lean_closure_set(v___x_4613_, 0, lean_box(0));
lean_closure_set(v___x_4613_, 1, v_x_4609_);
v___x_4614_ = lean_io_as_task(v___x_4613_, v_prio_4610_);
v___x_4615_ = lean_unsigned_to_nat(0u);
v___x_4616_ = 1;
v___x_4617_ = lean_task_bind(v___x_4614_, v___f_4612_, v___x_4615_, v___x_4616_);
v___x_4618_ = lean_task_get_own(v___x_4617_);
if (lean_obj_tag(v___x_4618_) == 0)
{
lean_object* v_a_4619_; lean_object* v___x_4621_; uint8_t v_isShared_4622_; uint8_t v_isSharedCheck_4626_; 
v_a_4619_ = lean_ctor_get(v___x_4618_, 0);
v_isSharedCheck_4626_ = !lean_is_exclusive(v___x_4618_);
if (v_isSharedCheck_4626_ == 0)
{
v___x_4621_ = v___x_4618_;
v_isShared_4622_ = v_isSharedCheck_4626_;
goto v_resetjp_4620_;
}
else
{
lean_inc(v_a_4619_);
lean_dec(v___x_4618_);
v___x_4621_ = lean_box(0);
v_isShared_4622_ = v_isSharedCheck_4626_;
goto v_resetjp_4620_;
}
v_resetjp_4620_:
{
lean_object* v___x_4624_; 
if (v_isShared_4622_ == 0)
{
lean_ctor_set_tag(v___x_4621_, 1);
v___x_4624_ = v___x_4621_;
goto v_reusejp_4623_;
}
else
{
lean_object* v_reuseFailAlloc_4625_; 
v_reuseFailAlloc_4625_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4625_, 0, v_a_4619_);
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
v_a_4627_ = lean_ctor_get(v___x_4618_, 0);
v_isSharedCheck_4634_ = !lean_is_exclusive(v___x_4618_);
if (v_isSharedCheck_4634_ == 0)
{
v___x_4629_ = v___x_4618_;
v_isShared_4630_ = v_isSharedCheck_4634_;
goto v_resetjp_4628_;
}
else
{
lean_inc(v_a_4627_);
lean_dec(v___x_4618_);
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
LEAN_EXPORT lean_object* l_Std_Async_Async_block___boxed(lean_object* v_00_u03b1_4635_, lean_object* v_x_4636_, lean_object* v_prio_4637_, lean_object* v___y_4638_){
_start:
{
lean_object* v_res_4639_; 
v_res_4639_ = l_Std_Async_Async_block(v_00_u03b1_4635_, v_x_4636_, v_prio_4637_);
return v_res_4639_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_ofPromise___redArg___lam__1(lean_object* v___f_4640_, lean_object* v_x_4641_){
_start:
{
if (lean_obj_tag(v_x_4641_) == 0)
{
lean_object* v_a_4643_; lean_object* v___x_4645_; uint8_t v_isShared_4646_; uint8_t v_isSharedCheck_4651_; 
lean_dec_ref(v___f_4640_);
v_a_4643_ = lean_ctor_get(v_x_4641_, 0);
v_isSharedCheck_4651_ = !lean_is_exclusive(v_x_4641_);
if (v_isSharedCheck_4651_ == 0)
{
v___x_4645_ = v_x_4641_;
v_isShared_4646_ = v_isSharedCheck_4651_;
goto v_resetjp_4644_;
}
else
{
lean_inc(v_a_4643_);
lean_dec(v_x_4641_);
v___x_4645_ = lean_box(0);
v_isShared_4646_ = v_isSharedCheck_4651_;
goto v_resetjp_4644_;
}
v_resetjp_4644_:
{
lean_object* v___x_4648_; 
if (v_isShared_4646_ == 0)
{
v___x_4648_ = v___x_4645_;
goto v_reusejp_4647_;
}
else
{
lean_object* v_reuseFailAlloc_4650_; 
v_reuseFailAlloc_4650_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4650_, 0, v_a_4643_);
v___x_4648_ = v_reuseFailAlloc_4650_;
goto v_reusejp_4647_;
}
v_reusejp_4647_:
{
lean_object* v___x_4649_; 
v___x_4649_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4649_, 0, v___x_4648_);
return v___x_4649_;
}
}
}
else
{
lean_object* v_a_4652_; 
v_a_4652_ = lean_ctor_get(v_x_4641_, 0);
lean_inc(v_a_4652_);
lean_dec_ref_known(v_x_4641_, 1);
if (lean_obj_tag(v_a_4652_) == 0)
{
lean_object* v_a_4653_; lean_object* v___x_4655_; uint8_t v_isShared_4656_; uint8_t v_isSharedCheck_4661_; 
lean_dec_ref(v___f_4640_);
v_a_4653_ = lean_ctor_get(v_a_4652_, 0);
v_isSharedCheck_4661_ = !lean_is_exclusive(v_a_4652_);
if (v_isSharedCheck_4661_ == 0)
{
v___x_4655_ = v_a_4652_;
v_isShared_4656_ = v_isSharedCheck_4661_;
goto v_resetjp_4654_;
}
else
{
lean_inc(v_a_4653_);
lean_dec(v_a_4652_);
v___x_4655_ = lean_box(0);
v_isShared_4656_ = v_isSharedCheck_4661_;
goto v_resetjp_4654_;
}
v_resetjp_4654_:
{
lean_object* v___x_4658_; 
if (v_isShared_4656_ == 0)
{
v___x_4658_ = v___x_4655_;
goto v_reusejp_4657_;
}
else
{
lean_object* v_reuseFailAlloc_4660_; 
v_reuseFailAlloc_4660_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4660_, 0, v_a_4653_);
v___x_4658_ = v_reuseFailAlloc_4660_;
goto v_reusejp_4657_;
}
v_reusejp_4657_:
{
lean_object* v___x_4659_; 
v___x_4659_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4659_, 0, v___x_4658_);
return v___x_4659_;
}
}
}
else
{
lean_object* v_a_4662_; lean_object* v___x_4663_; lean_object* v___x_4664_; uint8_t v___x_4665_; lean_object* v___x_4666_; lean_object* v___x_4667_; 
v_a_4662_ = lean_ctor_get(v_a_4652_, 0);
lean_inc(v_a_4662_);
lean_dec_ref_known(v_a_4652_, 1);
v___x_4663_ = lean_io_promise_result_opt(v_a_4662_);
lean_dec(v_a_4662_);
v___x_4664_ = lean_unsigned_to_nat(0u);
v___x_4665_ = 0;
v___x_4666_ = lean_task_map(v___f_4640_, v___x_4663_, v___x_4664_, v___x_4665_);
v___x_4667_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4667_, 0, v___x_4666_);
return v___x_4667_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_ofPromise___redArg___lam__1___boxed(lean_object* v___f_4668_, lean_object* v_x_4669_, lean_object* v___y_4670_){
_start:
{
lean_object* v_res_4671_; 
v_res_4671_ = l_Std_Async_Async_ofPromise___redArg___lam__1(v___f_4668_, v_x_4669_);
return v_res_4671_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_ofPromise___redArg(lean_object* v_task_4672_, lean_object* v_error_4673_){
_start:
{
lean_object* v___f_4675_; lean_object* v___f_4676_; lean_object* v___x_4677_; uint8_t v___x_4678_; lean_object* v_val_4680_; lean_object* v___x_4684_; 
v___f_4675_ = lean_alloc_closure((void*)(l_Std_Async_AsyncTask_ofPromise___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_4675_, 0, v_error_4673_);
v___f_4676_ = lean_alloc_closure((void*)(l_Std_Async_Async_ofPromise___redArg___lam__1___boxed), 3, 1);
lean_closure_set(v___f_4676_, 0, v___f_4675_);
v___x_4677_ = lean_unsigned_to_nat(0u);
v___x_4678_ = 0;
v___x_4684_ = lean_apply_1(v_task_4672_, lean_box(0));
if (lean_obj_tag(v___x_4684_) == 0)
{
lean_object* v_a_4685_; lean_object* v___x_4687_; uint8_t v_isShared_4688_; uint8_t v_isSharedCheck_4692_; 
v_a_4685_ = lean_ctor_get(v___x_4684_, 0);
v_isSharedCheck_4692_ = !lean_is_exclusive(v___x_4684_);
if (v_isSharedCheck_4692_ == 0)
{
v___x_4687_ = v___x_4684_;
v_isShared_4688_ = v_isSharedCheck_4692_;
goto v_resetjp_4686_;
}
else
{
lean_inc(v_a_4685_);
lean_dec(v___x_4684_);
v___x_4687_ = lean_box(0);
v_isShared_4688_ = v_isSharedCheck_4692_;
goto v_resetjp_4686_;
}
v_resetjp_4686_:
{
lean_object* v___x_4690_; 
if (v_isShared_4688_ == 0)
{
lean_ctor_set_tag(v___x_4687_, 1);
v___x_4690_ = v___x_4687_;
goto v_reusejp_4689_;
}
else
{
lean_object* v_reuseFailAlloc_4691_; 
v_reuseFailAlloc_4691_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4691_, 0, v_a_4685_);
v___x_4690_ = v_reuseFailAlloc_4691_;
goto v_reusejp_4689_;
}
v_reusejp_4689_:
{
v_val_4680_ = v___x_4690_;
goto v___jp_4679_;
}
}
}
else
{
lean_object* v_a_4693_; lean_object* v___x_4695_; uint8_t v_isShared_4696_; uint8_t v_isSharedCheck_4700_; 
v_a_4693_ = lean_ctor_get(v___x_4684_, 0);
v_isSharedCheck_4700_ = !lean_is_exclusive(v___x_4684_);
if (v_isSharedCheck_4700_ == 0)
{
v___x_4695_ = v___x_4684_;
v_isShared_4696_ = v_isSharedCheck_4700_;
goto v_resetjp_4694_;
}
else
{
lean_inc(v_a_4693_);
lean_dec(v___x_4684_);
v___x_4695_ = lean_box(0);
v_isShared_4696_ = v_isSharedCheck_4700_;
goto v_resetjp_4694_;
}
v_resetjp_4694_:
{
lean_object* v___x_4698_; 
if (v_isShared_4696_ == 0)
{
lean_ctor_set_tag(v___x_4695_, 0);
v___x_4698_ = v___x_4695_;
goto v_reusejp_4697_;
}
else
{
lean_object* v_reuseFailAlloc_4699_; 
v_reuseFailAlloc_4699_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4699_, 0, v_a_4693_);
v___x_4698_ = v_reuseFailAlloc_4699_;
goto v_reusejp_4697_;
}
v_reusejp_4697_:
{
v_val_4680_ = v___x_4698_;
goto v___jp_4679_;
}
}
}
v___jp_4679_:
{
lean_object* v___x_4681_; lean_object* v___x_4682_; lean_object* v___x_4683_; 
v___x_4681_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4681_, 0, v_val_4680_);
v___x_4682_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4682_, 0, v___x_4681_);
v___x_4683_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4677_, v___x_4678_, v___x_4682_, v___f_4676_);
return v___x_4683_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_ofPromise___redArg___boxed(lean_object* v_task_4701_, lean_object* v_error_4702_, lean_object* v___y_4703_){
_start:
{
lean_object* v_res_4704_; 
v_res_4704_ = l_Std_Async_Async_ofPromise___redArg(v_task_4701_, v_error_4702_);
return v_res_4704_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_ofPromise(lean_object* v_00_u03b1_4705_, lean_object* v_task_4706_, lean_object* v_error_4707_){
_start:
{
lean_object* v___f_4709_; lean_object* v___f_4710_; lean_object* v___x_4711_; uint8_t v___x_4712_; lean_object* v_val_4714_; lean_object* v___x_4718_; 
v___f_4709_ = lean_alloc_closure((void*)(l_Std_Async_AsyncTask_ofPromise___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_4709_, 0, v_error_4707_);
v___f_4710_ = lean_alloc_closure((void*)(l_Std_Async_Async_ofPromise___redArg___lam__1___boxed), 3, 1);
lean_closure_set(v___f_4710_, 0, v___f_4709_);
v___x_4711_ = lean_unsigned_to_nat(0u);
v___x_4712_ = 0;
v___x_4718_ = lean_apply_1(v_task_4706_, lean_box(0));
if (lean_obj_tag(v___x_4718_) == 0)
{
lean_object* v_a_4719_; lean_object* v___x_4721_; uint8_t v_isShared_4722_; uint8_t v_isSharedCheck_4726_; 
v_a_4719_ = lean_ctor_get(v___x_4718_, 0);
v_isSharedCheck_4726_ = !lean_is_exclusive(v___x_4718_);
if (v_isSharedCheck_4726_ == 0)
{
v___x_4721_ = v___x_4718_;
v_isShared_4722_ = v_isSharedCheck_4726_;
goto v_resetjp_4720_;
}
else
{
lean_inc(v_a_4719_);
lean_dec(v___x_4718_);
v___x_4721_ = lean_box(0);
v_isShared_4722_ = v_isSharedCheck_4726_;
goto v_resetjp_4720_;
}
v_resetjp_4720_:
{
lean_object* v___x_4724_; 
if (v_isShared_4722_ == 0)
{
lean_ctor_set_tag(v___x_4721_, 1);
v___x_4724_ = v___x_4721_;
goto v_reusejp_4723_;
}
else
{
lean_object* v_reuseFailAlloc_4725_; 
v_reuseFailAlloc_4725_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4725_, 0, v_a_4719_);
v___x_4724_ = v_reuseFailAlloc_4725_;
goto v_reusejp_4723_;
}
v_reusejp_4723_:
{
v_val_4714_ = v___x_4724_;
goto v___jp_4713_;
}
}
}
else
{
lean_object* v_a_4727_; lean_object* v___x_4729_; uint8_t v_isShared_4730_; uint8_t v_isSharedCheck_4734_; 
v_a_4727_ = lean_ctor_get(v___x_4718_, 0);
v_isSharedCheck_4734_ = !lean_is_exclusive(v___x_4718_);
if (v_isSharedCheck_4734_ == 0)
{
v___x_4729_ = v___x_4718_;
v_isShared_4730_ = v_isSharedCheck_4734_;
goto v_resetjp_4728_;
}
else
{
lean_inc(v_a_4727_);
lean_dec(v___x_4718_);
v___x_4729_ = lean_box(0);
v_isShared_4730_ = v_isSharedCheck_4734_;
goto v_resetjp_4728_;
}
v_resetjp_4728_:
{
lean_object* v___x_4732_; 
if (v_isShared_4730_ == 0)
{
lean_ctor_set_tag(v___x_4729_, 0);
v___x_4732_ = v___x_4729_;
goto v_reusejp_4731_;
}
else
{
lean_object* v_reuseFailAlloc_4733_; 
v_reuseFailAlloc_4733_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4733_, 0, v_a_4727_);
v___x_4732_ = v_reuseFailAlloc_4733_;
goto v_reusejp_4731_;
}
v_reusejp_4731_:
{
v_val_4714_ = v___x_4732_;
goto v___jp_4713_;
}
}
}
v___jp_4713_:
{
lean_object* v___x_4715_; lean_object* v___x_4716_; lean_object* v___x_4717_; 
v___x_4715_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4715_, 0, v_val_4714_);
v___x_4716_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4716_, 0, v___x_4715_);
v___x_4717_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4711_, v___x_4712_, v___x_4716_, v___f_4710_);
return v___x_4717_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_ofPromise___boxed(lean_object* v_00_u03b1_4735_, lean_object* v_task_4736_, lean_object* v_error_4737_, lean_object* v___y_4738_){
_start:
{
lean_object* v_res_4739_; 
v_res_4739_ = l_Std_Async_Async_ofPromise(v_00_u03b1_4735_, v_task_4736_, v_error_4737_);
return v_res_4739_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_ofAsyncTask___redArg(lean_object* v_task_4740_){
_start:
{
lean_object* v___x_4742_; 
v___x_4742_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4742_, 0, v_task_4740_);
return v___x_4742_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_ofAsyncTask___redArg___boxed(lean_object* v_task_4743_, lean_object* v___y_4744_){
_start:
{
lean_object* v_res_4745_; 
v_res_4745_ = l_Std_Async_Async_ofAsyncTask___redArg(v_task_4743_);
return v_res_4745_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_ofAsyncTask(lean_object* v_00_u03b1_4746_, lean_object* v_task_4747_){
_start:
{
lean_object* v___x_4749_; 
v___x_4749_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4749_, 0, v_task_4747_);
return v___x_4749_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_ofAsyncTask___boxed(lean_object* v_00_u03b1_4750_, lean_object* v_task_4751_, lean_object* v___y_4752_){
_start:
{
lean_object* v_res_4753_; 
v_res_4753_ = l_Std_Async_Async_ofAsyncTask(v_00_u03b1_4750_, v_task_4751_);
return v_res_4753_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_ofIOTask___redArg___lam__0(lean_object* v_a_4754_){
_start:
{
lean_object* v___x_4755_; 
v___x_4755_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4755_, 0, v_a_4754_);
return v___x_4755_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_ofIOTask___redArg___lam__1(lean_object* v___f_4756_, lean_object* v_x_4757_){
_start:
{
if (lean_obj_tag(v_x_4757_) == 0)
{
lean_object* v_a_4759_; lean_object* v___x_4761_; uint8_t v_isShared_4762_; uint8_t v_isSharedCheck_4767_; 
lean_dec_ref(v___f_4756_);
v_a_4759_ = lean_ctor_get(v_x_4757_, 0);
v_isSharedCheck_4767_ = !lean_is_exclusive(v_x_4757_);
if (v_isSharedCheck_4767_ == 0)
{
v___x_4761_ = v_x_4757_;
v_isShared_4762_ = v_isSharedCheck_4767_;
goto v_resetjp_4760_;
}
else
{
lean_inc(v_a_4759_);
lean_dec(v_x_4757_);
v___x_4761_ = lean_box(0);
v_isShared_4762_ = v_isSharedCheck_4767_;
goto v_resetjp_4760_;
}
v_resetjp_4760_:
{
lean_object* v___x_4764_; 
if (v_isShared_4762_ == 0)
{
v___x_4764_ = v___x_4761_;
goto v_reusejp_4763_;
}
else
{
lean_object* v_reuseFailAlloc_4766_; 
v_reuseFailAlloc_4766_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4766_, 0, v_a_4759_);
v___x_4764_ = v_reuseFailAlloc_4766_;
goto v_reusejp_4763_;
}
v_reusejp_4763_:
{
lean_object* v___x_4765_; 
v___x_4765_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4765_, 0, v___x_4764_);
return v___x_4765_;
}
}
}
else
{
lean_object* v_a_4768_; 
v_a_4768_ = lean_ctor_get(v_x_4757_, 0);
lean_inc(v_a_4768_);
lean_dec_ref_known(v_x_4757_, 1);
if (lean_obj_tag(v_a_4768_) == 0)
{
lean_object* v_a_4769_; lean_object* v___x_4771_; uint8_t v_isShared_4772_; uint8_t v_isSharedCheck_4777_; 
lean_dec_ref(v___f_4756_);
v_a_4769_ = lean_ctor_get(v_a_4768_, 0);
v_isSharedCheck_4777_ = !lean_is_exclusive(v_a_4768_);
if (v_isSharedCheck_4777_ == 0)
{
v___x_4771_ = v_a_4768_;
v_isShared_4772_ = v_isSharedCheck_4777_;
goto v_resetjp_4770_;
}
else
{
lean_inc(v_a_4769_);
lean_dec(v_a_4768_);
v___x_4771_ = lean_box(0);
v_isShared_4772_ = v_isSharedCheck_4777_;
goto v_resetjp_4770_;
}
v_resetjp_4770_:
{
lean_object* v___x_4774_; 
if (v_isShared_4772_ == 0)
{
v___x_4774_ = v___x_4771_;
goto v_reusejp_4773_;
}
else
{
lean_object* v_reuseFailAlloc_4776_; 
v_reuseFailAlloc_4776_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4776_, 0, v_a_4769_);
v___x_4774_ = v_reuseFailAlloc_4776_;
goto v_reusejp_4773_;
}
v_reusejp_4773_:
{
lean_object* v___x_4775_; 
v___x_4775_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4775_, 0, v___x_4774_);
return v___x_4775_;
}
}
}
else
{
lean_object* v_a_4778_; lean_object* v___x_4779_; uint8_t v___x_4780_; lean_object* v___x_4781_; lean_object* v___x_4782_; 
v_a_4778_ = lean_ctor_get(v_a_4768_, 0);
lean_inc(v_a_4778_);
lean_dec_ref_known(v_a_4768_, 1);
v___x_4779_ = lean_unsigned_to_nat(0u);
v___x_4780_ = 0;
v___x_4781_ = lean_task_map(v___f_4756_, v_a_4778_, v___x_4779_, v___x_4780_);
v___x_4782_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4782_, 0, v___x_4781_);
return v___x_4782_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_ofIOTask___redArg___lam__1___boxed(lean_object* v___f_4783_, lean_object* v_x_4784_, lean_object* v___y_4785_){
_start:
{
lean_object* v_res_4786_; 
v_res_4786_ = l_Std_Async_Async_ofIOTask___redArg___lam__1(v___f_4783_, v_x_4784_);
return v_res_4786_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_ofIOTask___redArg(lean_object* v_task_4790_){
_start:
{
lean_object* v___f_4792_; lean_object* v___x_4793_; uint8_t v___x_4794_; lean_object* v_val_4796_; lean_object* v___x_4800_; 
v___f_4792_ = ((lean_object*)(l_Std_Async_Async_ofIOTask___redArg___closed__1));
v___x_4793_ = lean_unsigned_to_nat(0u);
v___x_4794_ = 0;
v___x_4800_ = lean_apply_1(v_task_4790_, lean_box(0));
if (lean_obj_tag(v___x_4800_) == 0)
{
lean_object* v_a_4801_; lean_object* v___x_4803_; uint8_t v_isShared_4804_; uint8_t v_isSharedCheck_4808_; 
v_a_4801_ = lean_ctor_get(v___x_4800_, 0);
v_isSharedCheck_4808_ = !lean_is_exclusive(v___x_4800_);
if (v_isSharedCheck_4808_ == 0)
{
v___x_4803_ = v___x_4800_;
v_isShared_4804_ = v_isSharedCheck_4808_;
goto v_resetjp_4802_;
}
else
{
lean_inc(v_a_4801_);
lean_dec(v___x_4800_);
v___x_4803_ = lean_box(0);
v_isShared_4804_ = v_isSharedCheck_4808_;
goto v_resetjp_4802_;
}
v_resetjp_4802_:
{
lean_object* v___x_4806_; 
if (v_isShared_4804_ == 0)
{
lean_ctor_set_tag(v___x_4803_, 1);
v___x_4806_ = v___x_4803_;
goto v_reusejp_4805_;
}
else
{
lean_object* v_reuseFailAlloc_4807_; 
v_reuseFailAlloc_4807_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4807_, 0, v_a_4801_);
v___x_4806_ = v_reuseFailAlloc_4807_;
goto v_reusejp_4805_;
}
v_reusejp_4805_:
{
v_val_4796_ = v___x_4806_;
goto v___jp_4795_;
}
}
}
else
{
lean_object* v_a_4809_; lean_object* v___x_4811_; uint8_t v_isShared_4812_; uint8_t v_isSharedCheck_4816_; 
v_a_4809_ = lean_ctor_get(v___x_4800_, 0);
v_isSharedCheck_4816_ = !lean_is_exclusive(v___x_4800_);
if (v_isSharedCheck_4816_ == 0)
{
v___x_4811_ = v___x_4800_;
v_isShared_4812_ = v_isSharedCheck_4816_;
goto v_resetjp_4810_;
}
else
{
lean_inc(v_a_4809_);
lean_dec(v___x_4800_);
v___x_4811_ = lean_box(0);
v_isShared_4812_ = v_isSharedCheck_4816_;
goto v_resetjp_4810_;
}
v_resetjp_4810_:
{
lean_object* v___x_4814_; 
if (v_isShared_4812_ == 0)
{
lean_ctor_set_tag(v___x_4811_, 0);
v___x_4814_ = v___x_4811_;
goto v_reusejp_4813_;
}
else
{
lean_object* v_reuseFailAlloc_4815_; 
v_reuseFailAlloc_4815_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4815_, 0, v_a_4809_);
v___x_4814_ = v_reuseFailAlloc_4815_;
goto v_reusejp_4813_;
}
v_reusejp_4813_:
{
v_val_4796_ = v___x_4814_;
goto v___jp_4795_;
}
}
}
v___jp_4795_:
{
lean_object* v___x_4797_; lean_object* v___x_4798_; lean_object* v___x_4799_; 
v___x_4797_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4797_, 0, v_val_4796_);
v___x_4798_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4798_, 0, v___x_4797_);
v___x_4799_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4793_, v___x_4794_, v___x_4798_, v___f_4792_);
return v___x_4799_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_ofIOTask___redArg___boxed(lean_object* v_task_4817_, lean_object* v___y_4818_){
_start:
{
lean_object* v_res_4819_; 
v_res_4819_ = l_Std_Async_Async_ofIOTask___redArg(v_task_4817_);
return v_res_4819_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_ofIOTask(lean_object* v_00_u03b1_4820_, lean_object* v_task_4821_){
_start:
{
lean_object* v___f_4823_; lean_object* v___x_4824_; uint8_t v___x_4825_; lean_object* v_val_4827_; lean_object* v___x_4831_; 
v___f_4823_ = ((lean_object*)(l_Std_Async_Async_ofIOTask___redArg___closed__1));
v___x_4824_ = lean_unsigned_to_nat(0u);
v___x_4825_ = 0;
v___x_4831_ = lean_apply_1(v_task_4821_, lean_box(0));
if (lean_obj_tag(v___x_4831_) == 0)
{
lean_object* v_a_4832_; lean_object* v___x_4834_; uint8_t v_isShared_4835_; uint8_t v_isSharedCheck_4839_; 
v_a_4832_ = lean_ctor_get(v___x_4831_, 0);
v_isSharedCheck_4839_ = !lean_is_exclusive(v___x_4831_);
if (v_isSharedCheck_4839_ == 0)
{
v___x_4834_ = v___x_4831_;
v_isShared_4835_ = v_isSharedCheck_4839_;
goto v_resetjp_4833_;
}
else
{
lean_inc(v_a_4832_);
lean_dec(v___x_4831_);
v___x_4834_ = lean_box(0);
v_isShared_4835_ = v_isSharedCheck_4839_;
goto v_resetjp_4833_;
}
v_resetjp_4833_:
{
lean_object* v___x_4837_; 
if (v_isShared_4835_ == 0)
{
lean_ctor_set_tag(v___x_4834_, 1);
v___x_4837_ = v___x_4834_;
goto v_reusejp_4836_;
}
else
{
lean_object* v_reuseFailAlloc_4838_; 
v_reuseFailAlloc_4838_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4838_, 0, v_a_4832_);
v___x_4837_ = v_reuseFailAlloc_4838_;
goto v_reusejp_4836_;
}
v_reusejp_4836_:
{
v_val_4827_ = v___x_4837_;
goto v___jp_4826_;
}
}
}
else
{
lean_object* v_a_4840_; lean_object* v___x_4842_; uint8_t v_isShared_4843_; uint8_t v_isSharedCheck_4847_; 
v_a_4840_ = lean_ctor_get(v___x_4831_, 0);
v_isSharedCheck_4847_ = !lean_is_exclusive(v___x_4831_);
if (v_isSharedCheck_4847_ == 0)
{
v___x_4842_ = v___x_4831_;
v_isShared_4843_ = v_isSharedCheck_4847_;
goto v_resetjp_4841_;
}
else
{
lean_inc(v_a_4840_);
lean_dec(v___x_4831_);
v___x_4842_ = lean_box(0);
v_isShared_4843_ = v_isSharedCheck_4847_;
goto v_resetjp_4841_;
}
v_resetjp_4841_:
{
lean_object* v___x_4845_; 
if (v_isShared_4843_ == 0)
{
lean_ctor_set_tag(v___x_4842_, 0);
v___x_4845_ = v___x_4842_;
goto v_reusejp_4844_;
}
else
{
lean_object* v_reuseFailAlloc_4846_; 
v_reuseFailAlloc_4846_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4846_, 0, v_a_4840_);
v___x_4845_ = v_reuseFailAlloc_4846_;
goto v_reusejp_4844_;
}
v_reusejp_4844_:
{
v_val_4827_ = v___x_4845_;
goto v___jp_4826_;
}
}
}
v___jp_4826_:
{
lean_object* v___x_4828_; lean_object* v___x_4829_; lean_object* v___x_4830_; 
v___x_4828_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4828_, 0, v_val_4827_);
v___x_4829_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4829_, 0, v___x_4828_);
v___x_4830_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4824_, v___x_4825_, v___x_4829_, v___f_4823_);
return v___x_4830_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_ofIOTask___boxed(lean_object* v_00_u03b1_4848_, lean_object* v_task_4849_, lean_object* v___y_4850_){
_start:
{
lean_object* v_res_4851_; 
v_res_4851_ = l_Std_Async_Async_ofIOTask(v_00_u03b1_4848_, v_task_4849_);
return v_res_4851_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_ofExcept___redArg(lean_object* v_except_4852_){
_start:
{
lean_object* v___x_4854_; 
v___x_4854_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4854_, 0, v_except_4852_);
return v___x_4854_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_ofExcept___redArg___boxed(lean_object* v_except_4855_, lean_object* v___y_4856_){
_start:
{
lean_object* v_res_4857_; 
v_res_4857_ = l_Std_Async_Async_ofExcept___redArg(v_except_4855_);
return v_res_4857_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_ofExcept(lean_object* v_00_u03b1_4858_, lean_object* v_except_4859_){
_start:
{
lean_object* v___x_4861_; 
v___x_4861_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4861_, 0, v_except_4859_);
return v___x_4861_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_ofExcept___boxed(lean_object* v_00_u03b1_4862_, lean_object* v_except_4863_, lean_object* v___y_4864_){
_start:
{
lean_object* v_res_4865_; 
v_res_4865_ = l_Std_Async_Async_ofExcept(v_00_u03b1_4862_, v_except_4863_);
return v_res_4865_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_ofTask___redArg(lean_object* v_task_4866_){
_start:
{
lean_object* v___f_4868_; lean_object* v___x_4869_; uint8_t v___x_4870_; lean_object* v___x_4871_; lean_object* v___x_4872_; 
v___f_4868_ = ((lean_object*)(l_Std_Async_Async_ofIOTask___redArg___closed__0));
v___x_4869_ = lean_unsigned_to_nat(0u);
v___x_4870_ = 0;
v___x_4871_ = lean_task_map(v___f_4868_, v_task_4866_, v___x_4869_, v___x_4870_);
v___x_4872_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4872_, 0, v___x_4871_);
return v___x_4872_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_ofTask___redArg___boxed(lean_object* v_task_4873_, lean_object* v___y_4874_){
_start:
{
lean_object* v_res_4875_; 
v_res_4875_ = l_Std_Async_Async_ofTask___redArg(v_task_4873_);
return v_res_4875_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_ofTask(lean_object* v_00_u03b1_4876_, lean_object* v_task_4877_){
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
LEAN_EXPORT lean_object* l_Std_Async_Async_ofTask___boxed(lean_object* v_00_u03b1_4884_, lean_object* v_task_4885_, lean_object* v___y_4886_){
_start:
{
lean_object* v_res_4887_; 
v_res_4887_ = l_Std_Async_Async_ofTask(v_00_u03b1_4884_, v_task_4885_);
return v_res_4887_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_ofPurePromise___redArg(lean_object* v_task_4888_, lean_object* v_error_4889_){
_start:
{
lean_object* v___f_4891_; lean_object* v___x_4892_; 
v___f_4891_ = lean_alloc_closure((void*)(l_Std_Async_AsyncTask_ofPurePromise___redArg___lam__0), 2, 1);
lean_closure_set(v___f_4891_, 0, v_error_4889_);
v___x_4892_ = lean_apply_1(v_task_4888_, lean_box(0));
if (lean_obj_tag(v___x_4892_) == 0)
{
lean_object* v_a_4893_; lean_object* v___x_4895_; uint8_t v_isShared_4896_; uint8_t v_isSharedCheck_4904_; 
v_a_4893_ = lean_ctor_get(v___x_4892_, 0);
v_isSharedCheck_4904_ = !lean_is_exclusive(v___x_4892_);
if (v_isSharedCheck_4904_ == 0)
{
v___x_4895_ = v___x_4892_;
v_isShared_4896_ = v_isSharedCheck_4904_;
goto v_resetjp_4894_;
}
else
{
lean_inc(v_a_4893_);
lean_dec(v___x_4892_);
v___x_4895_ = lean_box(0);
v_isShared_4896_ = v_isSharedCheck_4904_;
goto v_resetjp_4894_;
}
v_resetjp_4894_:
{
lean_object* v___x_4897_; lean_object* v___x_4898_; uint8_t v___x_4899_; lean_object* v___x_4900_; lean_object* v___x_4902_; 
v___x_4897_ = lean_io_promise_result_opt(v_a_4893_);
lean_dec(v_a_4893_);
v___x_4898_ = lean_unsigned_to_nat(0u);
v___x_4899_ = 0;
v___x_4900_ = lean_task_map(v___f_4891_, v___x_4897_, v___x_4898_, v___x_4899_);
if (v_isShared_4896_ == 0)
{
lean_ctor_set_tag(v___x_4895_, 1);
lean_ctor_set(v___x_4895_, 0, v___x_4900_);
v___x_4902_ = v___x_4895_;
goto v_reusejp_4901_;
}
else
{
lean_object* v_reuseFailAlloc_4903_; 
v_reuseFailAlloc_4903_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4903_, 0, v___x_4900_);
v___x_4902_ = v_reuseFailAlloc_4903_;
goto v_reusejp_4901_;
}
v_reusejp_4901_:
{
return v___x_4902_;
}
}
}
else
{
lean_object* v_a_4905_; lean_object* v___x_4907_; uint8_t v_isShared_4908_; uint8_t v_isSharedCheck_4913_; 
lean_dec_ref(v___f_4891_);
v_a_4905_ = lean_ctor_get(v___x_4892_, 0);
v_isSharedCheck_4913_ = !lean_is_exclusive(v___x_4892_);
if (v_isSharedCheck_4913_ == 0)
{
v___x_4907_ = v___x_4892_;
v_isShared_4908_ = v_isSharedCheck_4913_;
goto v_resetjp_4906_;
}
else
{
lean_inc(v_a_4905_);
lean_dec(v___x_4892_);
v___x_4907_ = lean_box(0);
v_isShared_4908_ = v_isSharedCheck_4913_;
goto v_resetjp_4906_;
}
v_resetjp_4906_:
{
lean_object* v___x_4910_; 
if (v_isShared_4908_ == 0)
{
lean_ctor_set_tag(v___x_4907_, 0);
v___x_4910_ = v___x_4907_;
goto v_reusejp_4909_;
}
else
{
lean_object* v_reuseFailAlloc_4912_; 
v_reuseFailAlloc_4912_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4912_, 0, v_a_4905_);
v___x_4910_ = v_reuseFailAlloc_4912_;
goto v_reusejp_4909_;
}
v_reusejp_4909_:
{
lean_object* v___x_4911_; 
v___x_4911_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4911_, 0, v___x_4910_);
return v___x_4911_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_ofPurePromise___redArg___boxed(lean_object* v_task_4914_, lean_object* v_error_4915_, lean_object* v___y_4916_){
_start:
{
lean_object* v_res_4917_; 
v_res_4917_ = l_Std_Async_Async_ofPurePromise___redArg(v_task_4914_, v_error_4915_);
return v_res_4917_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_ofPurePromise(lean_object* v_00_u03b1_4918_, lean_object* v_task_4919_, lean_object* v_error_4920_){
_start:
{
lean_object* v___f_4922_; lean_object* v___x_4923_; 
v___f_4922_ = lean_alloc_closure((void*)(l_Std_Async_AsyncTask_ofPurePromise___redArg___lam__0), 2, 1);
lean_closure_set(v___f_4922_, 0, v_error_4920_);
v___x_4923_ = lean_apply_1(v_task_4919_, lean_box(0));
if (lean_obj_tag(v___x_4923_) == 0)
{
lean_object* v_a_4924_; lean_object* v___x_4926_; uint8_t v_isShared_4927_; uint8_t v_isSharedCheck_4935_; 
v_a_4924_ = lean_ctor_get(v___x_4923_, 0);
v_isSharedCheck_4935_ = !lean_is_exclusive(v___x_4923_);
if (v_isSharedCheck_4935_ == 0)
{
v___x_4926_ = v___x_4923_;
v_isShared_4927_ = v_isSharedCheck_4935_;
goto v_resetjp_4925_;
}
else
{
lean_inc(v_a_4924_);
lean_dec(v___x_4923_);
v___x_4926_ = lean_box(0);
v_isShared_4927_ = v_isSharedCheck_4935_;
goto v_resetjp_4925_;
}
v_resetjp_4925_:
{
lean_object* v___x_4928_; lean_object* v___x_4929_; uint8_t v___x_4930_; lean_object* v___x_4931_; lean_object* v___x_4933_; 
v___x_4928_ = lean_io_promise_result_opt(v_a_4924_);
lean_dec(v_a_4924_);
v___x_4929_ = lean_unsigned_to_nat(0u);
v___x_4930_ = 0;
v___x_4931_ = lean_task_map(v___f_4922_, v___x_4928_, v___x_4929_, v___x_4930_);
if (v_isShared_4927_ == 0)
{
lean_ctor_set_tag(v___x_4926_, 1);
lean_ctor_set(v___x_4926_, 0, v___x_4931_);
v___x_4933_ = v___x_4926_;
goto v_reusejp_4932_;
}
else
{
lean_object* v_reuseFailAlloc_4934_; 
v_reuseFailAlloc_4934_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4934_, 0, v___x_4931_);
v___x_4933_ = v_reuseFailAlloc_4934_;
goto v_reusejp_4932_;
}
v_reusejp_4932_:
{
return v___x_4933_;
}
}
}
else
{
lean_object* v_a_4936_; lean_object* v___x_4938_; uint8_t v_isShared_4939_; uint8_t v_isSharedCheck_4944_; 
lean_dec_ref(v___f_4922_);
v_a_4936_ = lean_ctor_get(v___x_4923_, 0);
v_isSharedCheck_4944_ = !lean_is_exclusive(v___x_4923_);
if (v_isSharedCheck_4944_ == 0)
{
v___x_4938_ = v___x_4923_;
v_isShared_4939_ = v_isSharedCheck_4944_;
goto v_resetjp_4937_;
}
else
{
lean_inc(v_a_4936_);
lean_dec(v___x_4923_);
v___x_4938_ = lean_box(0);
v_isShared_4939_ = v_isSharedCheck_4944_;
goto v_resetjp_4937_;
}
v_resetjp_4937_:
{
lean_object* v___x_4941_; 
if (v_isShared_4939_ == 0)
{
lean_ctor_set_tag(v___x_4938_, 0);
v___x_4941_ = v___x_4938_;
goto v_reusejp_4940_;
}
else
{
lean_object* v_reuseFailAlloc_4943_; 
v_reuseFailAlloc_4943_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4943_, 0, v_a_4936_);
v___x_4941_ = v_reuseFailAlloc_4943_;
goto v_reusejp_4940_;
}
v_reusejp_4940_:
{
lean_object* v___x_4942_; 
v___x_4942_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4942_, 0, v___x_4941_);
return v___x_4942_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_ofPurePromise___boxed(lean_object* v_00_u03b1_4945_, lean_object* v_task_4946_, lean_object* v_error_4947_, lean_object* v___y_4948_){
_start:
{
lean_object* v_res_4949_; 
v_res_4949_ = l_Std_Async_Async_ofPurePromise(v_00_u03b1_4945_, v_task_4946_, v_error_4947_);
return v_res_4949_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_instMonadAwaitAsyncTask___aux__1___redArg(lean_object* v_t_4951_){
_start:
{
lean_object* v___x_4953_; 
v___x_4953_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4953_, 0, v_t_4951_);
return v___x_4953_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_instMonadAwaitAsyncTask___aux__1___redArg___boxed(lean_object* v_t_4954_, lean_object* v___y_4955_){
_start:
{
lean_object* v_res_4956_; 
v_res_4956_ = l_Std_Async_Async_instMonadAwaitAsyncTask___aux__1___redArg(v_t_4954_);
return v_res_4956_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_instMonadAwaitAsyncTask___aux__1(lean_object* v_00_u03b1_4957_, lean_object* v_t_4958_){
_start:
{
lean_object* v___x_4960_; 
v___x_4960_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4960_, 0, v_t_4958_);
return v___x_4960_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_instMonadAwaitAsyncTask___aux__1___boxed(lean_object* v_00_u03b1_4961_, lean_object* v_t_4962_, lean_object* v___y_4963_){
_start:
{
lean_object* v_res_4964_; 
v_res_4964_ = l_Std_Async_Async_instMonadAwaitAsyncTask___aux__1(v_00_u03b1_4961_, v_t_4962_);
return v_res_4964_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_instMonadAwaitPromise___aux__1___redArg(lean_object* v_t_4967_){
_start:
{
lean_object* v___f_4969_; lean_object* v___x_4970_; lean_object* v___x_4971_; uint8_t v___x_4972_; lean_object* v___x_4973_; lean_object* v___x_4974_; 
v___f_4969_ = ((lean_object*)(l_Std_Async_Async_ofIOTask___redArg___closed__0));
v___x_4970_ = l_IO_Promise_result_x21___redArg(v_t_4967_);
v___x_4971_ = lean_unsigned_to_nat(0u);
v___x_4972_ = 0;
v___x_4973_ = lean_task_map(v___f_4969_, v___x_4970_, v___x_4971_, v___x_4972_);
v___x_4974_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4974_, 0, v___x_4973_);
return v___x_4974_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_instMonadAwaitPromise___aux__1___redArg___boxed(lean_object* v_t_4975_, lean_object* v___y_4976_){
_start:
{
lean_object* v_res_4977_; 
v_res_4977_ = l_Std_Async_Async_instMonadAwaitPromise___aux__1___redArg(v_t_4975_);
lean_dec(v_t_4975_);
return v_res_4977_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_instMonadAwaitPromise___aux__1(lean_object* v_00_u03b1_4978_, lean_object* v_t_4979_){
_start:
{
lean_object* v___f_4981_; lean_object* v___x_4982_; lean_object* v___x_4983_; uint8_t v___x_4984_; lean_object* v___x_4985_; lean_object* v___x_4986_; 
v___f_4981_ = ((lean_object*)(l_Std_Async_Async_ofIOTask___redArg___closed__0));
v___x_4982_ = l_IO_Promise_result_x21___redArg(v_t_4979_);
v___x_4983_ = lean_unsigned_to_nat(0u);
v___x_4984_ = 0;
v___x_4985_ = lean_task_map(v___f_4981_, v___x_4982_, v___x_4983_, v___x_4984_);
v___x_4986_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4986_, 0, v___x_4985_);
return v___x_4986_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_instMonadAwaitPromise___aux__1___boxed(lean_object* v_00_u03b1_4987_, lean_object* v_t_4988_, lean_object* v___y_4989_){
_start:
{
lean_object* v_res_4990_; 
v_res_4990_ = l_Std_Async_Async_instMonadAwaitPromise___aux__1(v_00_u03b1_4987_, v_t_4988_);
lean_dec(v_t_4988_);
return v_res_4990_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_concurrently___redArg___lam__1(lean_object* v_a_4993_, lean_object* v_x_4994_){
_start:
{
if (lean_obj_tag(v_x_4994_) == 0)
{
lean_object* v_a_4996_; lean_object* v___x_4998_; uint8_t v_isShared_4999_; uint8_t v_isSharedCheck_5004_; 
lean_dec(v_a_4993_);
v_a_4996_ = lean_ctor_get(v_x_4994_, 0);
v_isSharedCheck_5004_ = !lean_is_exclusive(v_x_4994_);
if (v_isSharedCheck_5004_ == 0)
{
v___x_4998_ = v_x_4994_;
v_isShared_4999_ = v_isSharedCheck_5004_;
goto v_resetjp_4997_;
}
else
{
lean_inc(v_a_4996_);
lean_dec(v_x_4994_);
v___x_4998_ = lean_box(0);
v_isShared_4999_ = v_isSharedCheck_5004_;
goto v_resetjp_4997_;
}
v_resetjp_4997_:
{
lean_object* v___x_5001_; 
if (v_isShared_4999_ == 0)
{
v___x_5001_ = v___x_4998_;
goto v_reusejp_5000_;
}
else
{
lean_object* v_reuseFailAlloc_5003_; 
v_reuseFailAlloc_5003_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5003_, 0, v_a_4996_);
v___x_5001_ = v_reuseFailAlloc_5003_;
goto v_reusejp_5000_;
}
v_reusejp_5000_:
{
lean_object* v___x_5002_; 
v___x_5002_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5002_, 0, v___x_5001_);
return v___x_5002_;
}
}
}
else
{
lean_object* v_a_5005_; lean_object* v___x_5007_; uint8_t v_isShared_5008_; uint8_t v_isSharedCheck_5014_; 
v_a_5005_ = lean_ctor_get(v_x_4994_, 0);
v_isSharedCheck_5014_ = !lean_is_exclusive(v_x_4994_);
if (v_isSharedCheck_5014_ == 0)
{
v___x_5007_ = v_x_4994_;
v_isShared_5008_ = v_isSharedCheck_5014_;
goto v_resetjp_5006_;
}
else
{
lean_inc(v_a_5005_);
lean_dec(v_x_4994_);
v___x_5007_ = lean_box(0);
v_isShared_5008_ = v_isSharedCheck_5014_;
goto v_resetjp_5006_;
}
v_resetjp_5006_:
{
lean_object* v___x_5009_; lean_object* v___x_5011_; 
v___x_5009_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5009_, 0, v_a_4993_);
lean_ctor_set(v___x_5009_, 1, v_a_5005_);
if (v_isShared_5008_ == 0)
{
lean_ctor_set(v___x_5007_, 0, v___x_5009_);
v___x_5011_ = v___x_5007_;
goto v_reusejp_5010_;
}
else
{
lean_object* v_reuseFailAlloc_5013_; 
v_reuseFailAlloc_5013_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5013_, 0, v___x_5009_);
v___x_5011_ = v_reuseFailAlloc_5013_;
goto v_reusejp_5010_;
}
v_reusejp_5010_:
{
lean_object* v___x_5012_; 
v___x_5012_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5012_, 0, v___x_5011_);
return v___x_5012_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_concurrently___redArg___lam__1___boxed(lean_object* v_a_5015_, lean_object* v_x_5016_, lean_object* v___y_5017_){
_start:
{
lean_object* v_res_5018_; 
v_res_5018_ = l_Std_Async_Async_concurrently___redArg___lam__1(v_a_5015_, v_x_5016_);
return v_res_5018_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_concurrently___redArg___lam__0(lean_object* v_a_5019_, lean_object* v_x_5020_){
_start:
{
if (lean_obj_tag(v_x_5020_) == 0)
{
lean_object* v_a_5022_; lean_object* v___x_5024_; uint8_t v_isShared_5025_; uint8_t v_isSharedCheck_5030_; 
lean_dec_ref(v_a_5019_);
v_a_5022_ = lean_ctor_get(v_x_5020_, 0);
v_isSharedCheck_5030_ = !lean_is_exclusive(v_x_5020_);
if (v_isSharedCheck_5030_ == 0)
{
v___x_5024_ = v_x_5020_;
v_isShared_5025_ = v_isSharedCheck_5030_;
goto v_resetjp_5023_;
}
else
{
lean_inc(v_a_5022_);
lean_dec(v_x_5020_);
v___x_5024_ = lean_box(0);
v_isShared_5025_ = v_isSharedCheck_5030_;
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
lean_object* v_reuseFailAlloc_5029_; 
v_reuseFailAlloc_5029_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5029_, 0, v_a_5022_);
v___x_5027_ = v_reuseFailAlloc_5029_;
goto v_reusejp_5026_;
}
v_reusejp_5026_:
{
lean_object* v___x_5028_; 
v___x_5028_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5028_, 0, v___x_5027_);
return v___x_5028_;
}
}
}
else
{
lean_object* v_a_5031_; lean_object* v___f_5032_; lean_object* v___x_5033_; uint8_t v___x_5034_; lean_object* v___x_5035_; lean_object* v___x_5036_; 
v_a_5031_ = lean_ctor_get(v_x_5020_, 0);
lean_inc(v_a_5031_);
lean_dec_ref_known(v_x_5020_, 1);
v___f_5032_ = lean_alloc_closure((void*)(l_Std_Async_Async_concurrently___redArg___lam__1___boxed), 3, 1);
lean_closure_set(v___f_5032_, 0, v_a_5031_);
v___x_5033_ = lean_unsigned_to_nat(0u);
v___x_5034_ = 0;
v___x_5035_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5035_, 0, v_a_5019_);
v___x_5036_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5033_, v___x_5034_, v___x_5035_, v___f_5032_);
return v___x_5036_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_concurrently___redArg___lam__0___boxed(lean_object* v_a_5037_, lean_object* v_x_5038_, lean_object* v___y_5039_){
_start:
{
lean_object* v_res_5040_; 
v_res_5040_ = l_Std_Async_Async_concurrently___redArg___lam__0(v_a_5037_, v_x_5038_);
return v_res_5040_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_concurrently___redArg___lam__2(lean_object* v_a_5041_, lean_object* v_x_5042_){
_start:
{
if (lean_obj_tag(v_x_5042_) == 0)
{
lean_object* v_a_5044_; lean_object* v___x_5046_; uint8_t v_isShared_5047_; uint8_t v_isSharedCheck_5052_; 
lean_dec_ref(v_a_5041_);
v_a_5044_ = lean_ctor_get(v_x_5042_, 0);
v_isSharedCheck_5052_ = !lean_is_exclusive(v_x_5042_);
if (v_isSharedCheck_5052_ == 0)
{
v___x_5046_ = v_x_5042_;
v_isShared_5047_ = v_isSharedCheck_5052_;
goto v_resetjp_5045_;
}
else
{
lean_inc(v_a_5044_);
lean_dec(v_x_5042_);
v___x_5046_ = lean_box(0);
v_isShared_5047_ = v_isSharedCheck_5052_;
goto v_resetjp_5045_;
}
v_resetjp_5045_:
{
lean_object* v___x_5049_; 
if (v_isShared_5047_ == 0)
{
v___x_5049_ = v___x_5046_;
goto v_reusejp_5048_;
}
else
{
lean_object* v_reuseFailAlloc_5051_; 
v_reuseFailAlloc_5051_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5051_, 0, v_a_5044_);
v___x_5049_ = v_reuseFailAlloc_5051_;
goto v_reusejp_5048_;
}
v_reusejp_5048_:
{
lean_object* v___x_5050_; 
v___x_5050_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5050_, 0, v___x_5049_);
return v___x_5050_;
}
}
}
else
{
lean_object* v_a_5053_; lean_object* v___f_5054_; lean_object* v___x_5055_; uint8_t v___x_5056_; lean_object* v___x_5057_; lean_object* v___x_5058_; 
v_a_5053_ = lean_ctor_get(v_x_5042_, 0);
lean_inc(v_a_5053_);
lean_dec_ref_known(v_x_5042_, 1);
v___f_5054_ = lean_alloc_closure((void*)(l_Std_Async_Async_concurrently___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_5054_, 0, v_a_5053_);
v___x_5055_ = lean_unsigned_to_nat(0u);
v___x_5056_ = 0;
v___x_5057_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5057_, 0, v_a_5041_);
v___x_5058_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5055_, v___x_5056_, v___x_5057_, v___f_5054_);
return v___x_5058_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_concurrently___redArg___lam__2___boxed(lean_object* v_a_5059_, lean_object* v_x_5060_, lean_object* v___y_5061_){
_start:
{
lean_object* v_res_5062_; 
v_res_5062_ = l_Std_Async_Async_concurrently___redArg___lam__2(v_a_5059_, v_x_5060_);
return v_res_5062_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_concurrently___redArg___lam__3(lean_object* v_y_5063_, lean_object* v_prio_5064_, lean_object* v___f_5065_, lean_object* v_x_5066_){
_start:
{
if (lean_obj_tag(v_x_5066_) == 0)
{
lean_object* v_a_5068_; lean_object* v___x_5070_; uint8_t v_isShared_5071_; uint8_t v_isSharedCheck_5076_; 
lean_dec_ref(v___f_5065_);
lean_dec(v_prio_5064_);
lean_dec_ref(v_y_5063_);
v_a_5068_ = lean_ctor_get(v_x_5066_, 0);
v_isSharedCheck_5076_ = !lean_is_exclusive(v_x_5066_);
if (v_isSharedCheck_5076_ == 0)
{
v___x_5070_ = v_x_5066_;
v_isShared_5071_ = v_isSharedCheck_5076_;
goto v_resetjp_5069_;
}
else
{
lean_inc(v_a_5068_);
lean_dec(v_x_5066_);
v___x_5070_ = lean_box(0);
v_isShared_5071_ = v_isSharedCheck_5076_;
goto v_resetjp_5069_;
}
v_resetjp_5069_:
{
lean_object* v___x_5073_; 
if (v_isShared_5071_ == 0)
{
v___x_5073_ = v___x_5070_;
goto v_reusejp_5072_;
}
else
{
lean_object* v_reuseFailAlloc_5075_; 
v_reuseFailAlloc_5075_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5075_, 0, v_a_5068_);
v___x_5073_ = v_reuseFailAlloc_5075_;
goto v_reusejp_5072_;
}
v_reusejp_5072_:
{
lean_object* v___x_5074_; 
v___x_5074_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5074_, 0, v___x_5073_);
return v___x_5074_;
}
}
}
else
{
lean_object* v_a_5077_; lean_object* v___x_5079_; uint8_t v_isShared_5080_; uint8_t v_isSharedCheck_5093_; 
v_a_5077_ = lean_ctor_get(v_x_5066_, 0);
v_isSharedCheck_5093_ = !lean_is_exclusive(v_x_5066_);
if (v_isSharedCheck_5093_ == 0)
{
v___x_5079_ = v_x_5066_;
v_isShared_5080_ = v_isSharedCheck_5093_;
goto v_resetjp_5078_;
}
else
{
lean_inc(v_a_5077_);
lean_dec(v_x_5066_);
v___x_5079_ = lean_box(0);
v_isShared_5080_ = v_isSharedCheck_5093_;
goto v_resetjp_5078_;
}
v_resetjp_5078_:
{
lean_object* v___f_5081_; lean_object* v___x_5082_; uint8_t v___x_5083_; lean_object* v___x_5084_; lean_object* v___x_5085_; uint8_t v___x_5086_; lean_object* v___x_5087_; lean_object* v___x_5089_; 
v___f_5081_ = lean_alloc_closure((void*)(l_Std_Async_Async_concurrently___redArg___lam__2___boxed), 3, 1);
lean_closure_set(v___f_5081_, 0, v_a_5077_);
v___x_5082_ = lean_unsigned_to_nat(0u);
v___x_5083_ = 0;
v___x_5084_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_toRawBaseIO___boxed), 3, 2);
lean_closure_set(v___x_5084_, 0, lean_box(0));
lean_closure_set(v___x_5084_, 1, v_y_5063_);
v___x_5085_ = lean_io_as_task(v___x_5084_, v_prio_5064_);
v___x_5086_ = 1;
v___x_5087_ = lean_task_bind(v___x_5085_, v___f_5065_, v___x_5082_, v___x_5086_);
if (v_isShared_5080_ == 0)
{
lean_ctor_set(v___x_5079_, 0, v___x_5087_);
v___x_5089_ = v___x_5079_;
goto v_reusejp_5088_;
}
else
{
lean_object* v_reuseFailAlloc_5092_; 
v_reuseFailAlloc_5092_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5092_, 0, v___x_5087_);
v___x_5089_ = v_reuseFailAlloc_5092_;
goto v_reusejp_5088_;
}
v_reusejp_5088_:
{
lean_object* v___x_5090_; lean_object* v___x_5091_; 
v___x_5090_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5090_, 0, v___x_5089_);
v___x_5091_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5082_, v___x_5083_, v___x_5090_, v___f_5081_);
return v___x_5091_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_concurrently___redArg___lam__3___boxed(lean_object* v_y_5094_, lean_object* v_prio_5095_, lean_object* v___f_5096_, lean_object* v_x_5097_, lean_object* v___y_5098_){
_start:
{
lean_object* v_res_5099_; 
v_res_5099_ = l_Std_Async_Async_concurrently___redArg___lam__3(v_y_5094_, v_prio_5095_, v___f_5096_, v_x_5097_);
return v_res_5099_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_concurrently___redArg(lean_object* v_x_5100_, lean_object* v_y_5101_, lean_object* v_prio_5102_){
_start:
{
lean_object* v___f_5104_; lean_object* v___f_5105_; lean_object* v___x_5106_; uint8_t v___x_5107_; lean_object* v___x_5108_; lean_object* v___x_5109_; uint8_t v___x_5110_; lean_object* v___x_5111_; lean_object* v___x_5112_; lean_object* v___x_5113_; lean_object* v___x_5114_; 
v___f_5104_ = ((lean_object*)(l_Std_Async_EAsync_instMonadAsyncAsyncTaskError___closed__0));
lean_inc(v_prio_5102_);
v___f_5105_ = lean_alloc_closure((void*)(l_Std_Async_Async_concurrently___redArg___lam__3___boxed), 5, 3);
lean_closure_set(v___f_5105_, 0, v_y_5101_);
lean_closure_set(v___f_5105_, 1, v_prio_5102_);
lean_closure_set(v___f_5105_, 2, v___f_5104_);
v___x_5106_ = lean_unsigned_to_nat(0u);
v___x_5107_ = 0;
v___x_5108_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_toRawBaseIO___boxed), 3, 2);
lean_closure_set(v___x_5108_, 0, lean_box(0));
lean_closure_set(v___x_5108_, 1, v_x_5100_);
v___x_5109_ = lean_io_as_task(v___x_5108_, v_prio_5102_);
v___x_5110_ = 1;
v___x_5111_ = lean_task_bind(v___x_5109_, v___f_5104_, v___x_5106_, v___x_5110_);
v___x_5112_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5112_, 0, v___x_5111_);
v___x_5113_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5113_, 0, v___x_5112_);
v___x_5114_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5106_, v___x_5107_, v___x_5113_, v___f_5105_);
return v___x_5114_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_concurrently___redArg___boxed(lean_object* v_x_5115_, lean_object* v_y_5116_, lean_object* v_prio_5117_, lean_object* v___y_5118_){
_start:
{
lean_object* v_res_5119_; 
v_res_5119_ = l_Std_Async_Async_concurrently___redArg(v_x_5115_, v_y_5116_, v_prio_5117_);
return v_res_5119_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_concurrently(lean_object* v_00_u03b1_5120_, lean_object* v_00_u03b2_5121_, lean_object* v_x_5122_, lean_object* v_y_5123_, lean_object* v_prio_5124_){
_start:
{
lean_object* v___f_5126_; lean_object* v___f_5127_; lean_object* v___x_5128_; uint8_t v___x_5129_; lean_object* v___x_5130_; lean_object* v___x_5131_; uint8_t v___x_5132_; lean_object* v___x_5133_; lean_object* v___x_5134_; lean_object* v___x_5135_; lean_object* v___x_5136_; 
v___f_5126_ = ((lean_object*)(l_Std_Async_EAsync_instMonadAsyncAsyncTaskError___closed__0));
lean_inc(v_prio_5124_);
v___f_5127_ = lean_alloc_closure((void*)(l_Std_Async_Async_concurrently___redArg___lam__3___boxed), 5, 3);
lean_closure_set(v___f_5127_, 0, v_y_5123_);
lean_closure_set(v___f_5127_, 1, v_prio_5124_);
lean_closure_set(v___f_5127_, 2, v___f_5126_);
v___x_5128_ = lean_unsigned_to_nat(0u);
v___x_5129_ = 0;
v___x_5130_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_toRawBaseIO___boxed), 3, 2);
lean_closure_set(v___x_5130_, 0, lean_box(0));
lean_closure_set(v___x_5130_, 1, v_x_5122_);
v___x_5131_ = lean_io_as_task(v___x_5130_, v_prio_5124_);
v___x_5132_ = 1;
v___x_5133_ = lean_task_bind(v___x_5131_, v___f_5126_, v___x_5128_, v___x_5132_);
v___x_5134_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5134_, 0, v___x_5133_);
v___x_5135_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5135_, 0, v___x_5134_);
v___x_5136_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5128_, v___x_5129_, v___x_5135_, v___f_5127_);
return v___x_5136_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_concurrently___boxed(lean_object* v_00_u03b1_5137_, lean_object* v_00_u03b2_5138_, lean_object* v_x_5139_, lean_object* v_y_5140_, lean_object* v_prio_5141_, lean_object* v___y_5142_){
_start:
{
lean_object* v_res_5143_; 
v_res_5143_ = l_Std_Async_Async_concurrently(v_00_u03b1_5137_, v_00_u03b2_5138_, v_x_5139_, v_y_5140_, v_prio_5141_);
return v_res_5143_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_race___redArg___lam__1(lean_object* v_x_5144_){
_start:
{
if (lean_obj_tag(v_x_5144_) == 0)
{
lean_object* v_a_5146_; lean_object* v___x_5148_; uint8_t v_isShared_5149_; uint8_t v_isSharedCheck_5154_; 
v_a_5146_ = lean_ctor_get(v_x_5144_, 0);
v_isSharedCheck_5154_ = !lean_is_exclusive(v_x_5144_);
if (v_isSharedCheck_5154_ == 0)
{
v___x_5148_ = v_x_5144_;
v_isShared_5149_ = v_isSharedCheck_5154_;
goto v_resetjp_5147_;
}
else
{
lean_inc(v_a_5146_);
lean_dec(v_x_5144_);
v___x_5148_ = lean_box(0);
v_isShared_5149_ = v_isSharedCheck_5154_;
goto v_resetjp_5147_;
}
v_resetjp_5147_:
{
lean_object* v___x_5151_; 
if (v_isShared_5149_ == 0)
{
v___x_5151_ = v___x_5148_;
goto v_reusejp_5150_;
}
else
{
lean_object* v_reuseFailAlloc_5153_; 
v_reuseFailAlloc_5153_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5153_, 0, v_a_5146_);
v___x_5151_ = v_reuseFailAlloc_5153_;
goto v_reusejp_5150_;
}
v_reusejp_5150_:
{
lean_object* v___x_5152_; 
v___x_5152_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5152_, 0, v___x_5151_);
return v___x_5152_;
}
}
}
else
{
lean_object* v_a_5155_; lean_object* v___x_5156_; 
v_a_5155_ = lean_ctor_get(v_x_5144_, 0);
lean_inc(v_a_5155_);
lean_dec_ref_known(v_x_5144_, 1);
v___x_5156_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5156_, 0, v_a_5155_);
return v___x_5156_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_race___redArg___lam__1___boxed(lean_object* v_x_5157_, lean_object* v___y_5158_){
_start:
{
lean_object* v_res_5159_; 
v_res_5159_ = l_Std_Async_Async_race___redArg___lam__1(v_x_5157_);
return v_res_5159_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_race___redArg___lam__0(lean_object* v_a_5160_){
_start:
{
lean_object* v___x_5161_; 
v___x_5161_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5161_, 0, v_a_5160_);
return v___x_5161_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_race___redArg___lam__3(lean_object* v_a_5162_, lean_object* v_value_5163_){
_start:
{
lean_object* v___x_5165_; 
v___x_5165_ = lean_io_promise_resolve(v_value_5163_, v_a_5162_);
return v___x_5165_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_race___redArg___lam__3___boxed(lean_object* v_a_5166_, lean_object* v_value_5167_, lean_object* v___y_5168_){
_start:
{
lean_object* v_res_5169_; 
v_res_5169_ = l_Std_Async_Async_race___redArg___lam__3(v_a_5166_, v_value_5167_);
lean_dec(v_a_5166_);
return v_res_5169_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_race___redArg___lam__2(lean_object* v_a_5170_, lean_object* v___f_5171_, lean_object* v___f_5172_, lean_object* v_x_5173_){
_start:
{
if (lean_obj_tag(v_x_5173_) == 0)
{
lean_object* v_a_5175_; lean_object* v___x_5177_; uint8_t v_isShared_5178_; uint8_t v_isSharedCheck_5183_; 
lean_dec_ref(v___f_5172_);
lean_dec_ref(v___f_5171_);
v_a_5175_ = lean_ctor_get(v_x_5173_, 0);
v_isSharedCheck_5183_ = !lean_is_exclusive(v_x_5173_);
if (v_isSharedCheck_5183_ == 0)
{
v___x_5177_ = v_x_5173_;
v_isShared_5178_ = v_isSharedCheck_5183_;
goto v_resetjp_5176_;
}
else
{
lean_inc(v_a_5175_);
lean_dec(v_x_5173_);
v___x_5177_ = lean_box(0);
v_isShared_5178_ = v_isSharedCheck_5183_;
goto v_resetjp_5176_;
}
v_resetjp_5176_:
{
lean_object* v___x_5180_; 
if (v_isShared_5178_ == 0)
{
v___x_5180_ = v___x_5177_;
goto v_reusejp_5179_;
}
else
{
lean_object* v_reuseFailAlloc_5182_; 
v_reuseFailAlloc_5182_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5182_, 0, v_a_5175_);
v___x_5180_ = v_reuseFailAlloc_5182_;
goto v_reusejp_5179_;
}
v_reusejp_5179_:
{
lean_object* v___x_5181_; 
v___x_5181_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5181_, 0, v___x_5180_);
return v___x_5181_;
}
}
}
else
{
lean_object* v___x_5184_; uint8_t v___x_5185_; lean_object* v___x_5186_; lean_object* v___x_5187_; lean_object* v___x_5188_; lean_object* v___x_5189_; 
lean_dec_ref_known(v_x_5173_, 1);
v___x_5184_ = lean_unsigned_to_nat(0u);
v___x_5185_ = 0;
v___x_5186_ = l_IO_Promise_result_x21___redArg(v_a_5170_);
v___x_5187_ = lean_task_map(v___f_5171_, v___x_5186_, v___x_5184_, v___x_5185_);
v___x_5188_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5188_, 0, v___x_5187_);
v___x_5189_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5184_, v___x_5185_, v___x_5188_, v___f_5172_);
return v___x_5189_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_race___redArg___lam__2___boxed(lean_object* v_a_5190_, lean_object* v___f_5191_, lean_object* v___f_5192_, lean_object* v_x_5193_, lean_object* v___y_5194_){
_start:
{
lean_object* v_res_5195_; 
v_res_5195_ = l_Std_Async_Async_race___redArg___lam__2(v_a_5190_, v___f_5191_, v___f_5192_, v_x_5193_);
lean_dec(v_a_5190_);
return v_res_5195_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_race___redArg___lam__4(lean_object* v_a_5196_, lean_object* v___x_5197_, lean_object* v___x_5198_, uint8_t v___x_5199_, lean_object* v___f_5200_, lean_object* v_x_5201_){
_start:
{
if (lean_obj_tag(v_x_5201_) == 0)
{
lean_object* v_a_5203_; lean_object* v___x_5205_; uint8_t v_isShared_5206_; uint8_t v_isSharedCheck_5211_; 
lean_dec_ref(v___f_5200_);
lean_dec(v___x_5198_);
lean_dec_ref(v___x_5197_);
lean_dec_ref(v_a_5196_);
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
lean_object* v___x_5213_; uint8_t v_isShared_5214_; uint8_t v_isSharedCheck_5221_; 
v_isSharedCheck_5221_ = !lean_is_exclusive(v_x_5201_);
if (v_isSharedCheck_5221_ == 0)
{
lean_object* v_unused_5222_; 
v_unused_5222_ = lean_ctor_get(v_x_5201_, 0);
lean_dec(v_unused_5222_);
v___x_5213_ = v_x_5201_;
v_isShared_5214_ = v_isSharedCheck_5221_;
goto v_resetjp_5212_;
}
else
{
lean_dec(v_x_5201_);
v___x_5213_ = lean_box(0);
v_isShared_5214_ = v_isSharedCheck_5221_;
goto v_resetjp_5212_;
}
v_resetjp_5212_:
{
lean_object* v___x_5215_; lean_object* v___x_5217_; 
lean_inc(v___x_5198_);
v___x_5215_ = l_BaseIO_chainTask___redArg(v_a_5196_, v___x_5197_, v___x_5198_, v___x_5199_);
if (v_isShared_5214_ == 0)
{
lean_ctor_set(v___x_5213_, 0, v___x_5215_);
v___x_5217_ = v___x_5213_;
goto v_reusejp_5216_;
}
else
{
lean_object* v_reuseFailAlloc_5220_; 
v_reuseFailAlloc_5220_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5220_, 0, v___x_5215_);
v___x_5217_ = v_reuseFailAlloc_5220_;
goto v_reusejp_5216_;
}
v_reusejp_5216_:
{
lean_object* v___x_5218_; lean_object* v___x_5219_; 
v___x_5218_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5218_, 0, v___x_5217_);
v___x_5219_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5198_, v___x_5199_, v___x_5218_, v___f_5200_);
return v___x_5219_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_race___redArg___lam__4___boxed(lean_object* v_a_5223_, lean_object* v___x_5224_, lean_object* v___x_5225_, lean_object* v___x_5226_, lean_object* v___f_5227_, lean_object* v_x_5228_, lean_object* v___y_5229_){
_start:
{
uint8_t v___x_1417__boxed_5230_; lean_object* v_res_5231_; 
v___x_1417__boxed_5230_ = lean_unbox(v___x_5226_);
v_res_5231_ = l_Std_Async_Async_race___redArg___lam__4(v_a_5223_, v___x_5224_, v___x_5225_, v___x_1417__boxed_5230_, v___f_5227_, v_x_5228_);
return v_res_5231_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_race___redArg___lam__5(lean_object* v___f_5232_, lean_object* v___f_5233_, lean_object* v___f_5234_, lean_object* v_a_5235_, lean_object* v_x_5236_){
_start:
{
if (lean_obj_tag(v_x_5236_) == 0)
{
lean_object* v_a_5238_; lean_object* v___x_5240_; uint8_t v_isShared_5241_; uint8_t v_isSharedCheck_5246_; 
lean_dec_ref(v_a_5235_);
lean_dec_ref(v___f_5234_);
lean_dec_ref(v___f_5233_);
lean_dec(v___f_5232_);
v_a_5238_ = lean_ctor_get(v_x_5236_, 0);
v_isSharedCheck_5246_ = !lean_is_exclusive(v_x_5236_);
if (v_isSharedCheck_5246_ == 0)
{
v___x_5240_ = v_x_5236_;
v_isShared_5241_ = v_isSharedCheck_5246_;
goto v_resetjp_5239_;
}
else
{
lean_inc(v_a_5238_);
lean_dec(v_x_5236_);
v___x_5240_ = lean_box(0);
v_isShared_5241_ = v_isSharedCheck_5246_;
goto v_resetjp_5239_;
}
v_resetjp_5239_:
{
lean_object* v___x_5243_; 
if (v_isShared_5241_ == 0)
{
v___x_5243_ = v___x_5240_;
goto v_reusejp_5242_;
}
else
{
lean_object* v_reuseFailAlloc_5245_; 
v_reuseFailAlloc_5245_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5245_, 0, v_a_5238_);
v___x_5243_ = v_reuseFailAlloc_5245_;
goto v_reusejp_5242_;
}
v_reusejp_5242_:
{
lean_object* v___x_5244_; 
v___x_5244_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5244_, 0, v___x_5243_);
return v___x_5244_;
}
}
}
else
{
lean_object* v_a_5247_; lean_object* v___x_5249_; uint8_t v_isShared_5250_; uint8_t v_isSharedCheck_5263_; 
v_a_5247_ = lean_ctor_get(v_x_5236_, 0);
v_isSharedCheck_5263_ = !lean_is_exclusive(v_x_5236_);
if (v_isSharedCheck_5263_ == 0)
{
v___x_5249_ = v_x_5236_;
v_isShared_5250_ = v_isSharedCheck_5263_;
goto v_resetjp_5248_;
}
else
{
lean_inc(v_a_5247_);
lean_dec(v_x_5236_);
v___x_5249_ = lean_box(0);
v_isShared_5250_ = v_isSharedCheck_5263_;
goto v_resetjp_5248_;
}
v_resetjp_5248_:
{
lean_object* v___x_5251_; lean_object* v___x_5252_; lean_object* v___x_5253_; uint8_t v___x_5254_; lean_object* v___x_5255_; lean_object* v___f_5256_; lean_object* v___x_5257_; lean_object* v___x_5259_; 
v___x_5251_ = lean_alloc_closure((void*)(l_liftM), 5, 4);
lean_closure_set(v___x_5251_, 0, lean_box(0));
lean_closure_set(v___x_5251_, 1, lean_box(0));
lean_closure_set(v___x_5251_, 2, v___f_5232_);
lean_closure_set(v___x_5251_, 3, lean_box(0));
v___x_5252_ = lean_alloc_closure((void*)(l_Function_comp), 6, 5);
lean_closure_set(v___x_5252_, 0, lean_box(0));
lean_closure_set(v___x_5252_, 1, lean_box(0));
lean_closure_set(v___x_5252_, 2, lean_box(0));
lean_closure_set(v___x_5252_, 3, v___x_5251_);
lean_closure_set(v___x_5252_, 4, v___f_5233_);
v___x_5253_ = lean_unsigned_to_nat(0u);
v___x_5254_ = 0;
v___x_5255_ = lean_box(v___x_5254_);
lean_inc_ref(v___x_5252_);
v___f_5256_ = lean_alloc_closure((void*)(l_Std_Async_Async_race___redArg___lam__4___boxed), 7, 5);
lean_closure_set(v___f_5256_, 0, v_a_5247_);
lean_closure_set(v___f_5256_, 1, v___x_5252_);
lean_closure_set(v___f_5256_, 2, v___x_5253_);
lean_closure_set(v___f_5256_, 3, v___x_5255_);
lean_closure_set(v___f_5256_, 4, v___f_5234_);
v___x_5257_ = l_BaseIO_chainTask___redArg(v_a_5235_, v___x_5252_, v___x_5253_, v___x_5254_);
if (v_isShared_5250_ == 0)
{
lean_ctor_set(v___x_5249_, 0, v___x_5257_);
v___x_5259_ = v___x_5249_;
goto v_reusejp_5258_;
}
else
{
lean_object* v_reuseFailAlloc_5262_; 
v_reuseFailAlloc_5262_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5262_, 0, v___x_5257_);
v___x_5259_ = v_reuseFailAlloc_5262_;
goto v_reusejp_5258_;
}
v_reusejp_5258_:
{
lean_object* v___x_5260_; lean_object* v___x_5261_; 
v___x_5260_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5260_, 0, v___x_5259_);
v___x_5261_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5253_, v___x_5254_, v___x_5260_, v___f_5256_);
return v___x_5261_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_race___redArg___lam__5___boxed(lean_object* v___f_5264_, lean_object* v___f_5265_, lean_object* v___f_5266_, lean_object* v_a_5267_, lean_object* v_x_5268_, lean_object* v___y_5269_){
_start:
{
lean_object* v_res_5270_; 
v_res_5270_ = l_Std_Async_Async_race___redArg___lam__5(v___f_5264_, v___f_5265_, v___f_5266_, v_a_5267_, v_x_5268_);
return v_res_5270_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_race___redArg___lam__6(lean_object* v___f_5271_, lean_object* v___f_5272_, lean_object* v___f_5273_, lean_object* v_y_5274_, lean_object* v_prio_5275_, lean_object* v___f_5276_, lean_object* v_x_5277_){
_start:
{
if (lean_obj_tag(v_x_5277_) == 0)
{
lean_object* v_a_5279_; lean_object* v___x_5281_; uint8_t v_isShared_5282_; uint8_t v_isSharedCheck_5287_; 
lean_dec_ref(v___f_5276_);
lean_dec(v_prio_5275_);
lean_dec_ref(v_y_5274_);
lean_dec_ref(v___f_5273_);
lean_dec_ref(v___f_5272_);
lean_dec(v___f_5271_);
v_a_5279_ = lean_ctor_get(v_x_5277_, 0);
v_isSharedCheck_5287_ = !lean_is_exclusive(v_x_5277_);
if (v_isSharedCheck_5287_ == 0)
{
v___x_5281_ = v_x_5277_;
v_isShared_5282_ = v_isSharedCheck_5287_;
goto v_resetjp_5280_;
}
else
{
lean_inc(v_a_5279_);
lean_dec(v_x_5277_);
v___x_5281_ = lean_box(0);
v_isShared_5282_ = v_isSharedCheck_5287_;
goto v_resetjp_5280_;
}
v_resetjp_5280_:
{
lean_object* v___x_5284_; 
if (v_isShared_5282_ == 0)
{
v___x_5284_ = v___x_5281_;
goto v_reusejp_5283_;
}
else
{
lean_object* v_reuseFailAlloc_5286_; 
v_reuseFailAlloc_5286_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5286_, 0, v_a_5279_);
v___x_5284_ = v_reuseFailAlloc_5286_;
goto v_reusejp_5283_;
}
v_reusejp_5283_:
{
lean_object* v___x_5285_; 
v___x_5285_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5285_, 0, v___x_5284_);
return v___x_5285_;
}
}
}
else
{
lean_object* v_a_5288_; lean_object* v___x_5290_; uint8_t v_isShared_5291_; uint8_t v_isSharedCheck_5304_; 
v_a_5288_ = lean_ctor_get(v_x_5277_, 0);
v_isSharedCheck_5304_ = !lean_is_exclusive(v_x_5277_);
if (v_isSharedCheck_5304_ == 0)
{
v___x_5290_ = v_x_5277_;
v_isShared_5291_ = v_isSharedCheck_5304_;
goto v_resetjp_5289_;
}
else
{
lean_inc(v_a_5288_);
lean_dec(v_x_5277_);
v___x_5290_ = lean_box(0);
v_isShared_5291_ = v_isSharedCheck_5304_;
goto v_resetjp_5289_;
}
v_resetjp_5289_:
{
lean_object* v___f_5292_; lean_object* v___x_5293_; uint8_t v___x_5294_; lean_object* v___x_5295_; lean_object* v___x_5296_; uint8_t v___x_5297_; lean_object* v___x_5298_; lean_object* v___x_5300_; 
v___f_5292_ = lean_alloc_closure((void*)(l_Std_Async_Async_race___redArg___lam__5___boxed), 6, 4);
lean_closure_set(v___f_5292_, 0, v___f_5271_);
lean_closure_set(v___f_5292_, 1, v___f_5272_);
lean_closure_set(v___f_5292_, 2, v___f_5273_);
lean_closure_set(v___f_5292_, 3, v_a_5288_);
v___x_5293_ = lean_unsigned_to_nat(0u);
v___x_5294_ = 0;
v___x_5295_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_toRawBaseIO___boxed), 3, 2);
lean_closure_set(v___x_5295_, 0, lean_box(0));
lean_closure_set(v___x_5295_, 1, v_y_5274_);
v___x_5296_ = lean_io_as_task(v___x_5295_, v_prio_5275_);
v___x_5297_ = 1;
v___x_5298_ = lean_task_bind(v___x_5296_, v___f_5276_, v___x_5293_, v___x_5297_);
if (v_isShared_5291_ == 0)
{
lean_ctor_set(v___x_5290_, 0, v___x_5298_);
v___x_5300_ = v___x_5290_;
goto v_reusejp_5299_;
}
else
{
lean_object* v_reuseFailAlloc_5303_; 
v_reuseFailAlloc_5303_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5303_, 0, v___x_5298_);
v___x_5300_ = v_reuseFailAlloc_5303_;
goto v_reusejp_5299_;
}
v_reusejp_5299_:
{
lean_object* v___x_5301_; lean_object* v___x_5302_; 
v___x_5301_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5301_, 0, v___x_5300_);
v___x_5302_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5293_, v___x_5294_, v___x_5301_, v___f_5292_);
return v___x_5302_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_race___redArg___lam__6___boxed(lean_object* v___f_5305_, lean_object* v___f_5306_, lean_object* v___f_5307_, lean_object* v_y_5308_, lean_object* v_prio_5309_, lean_object* v___f_5310_, lean_object* v_x_5311_, lean_object* v___y_5312_){
_start:
{
lean_object* v_res_5313_; 
v_res_5313_ = l_Std_Async_Async_race___redArg___lam__6(v___f_5305_, v___f_5306_, v___f_5307_, v_y_5308_, v_prio_5309_, v___f_5310_, v_x_5311_);
return v_res_5313_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_race___redArg___lam__7(lean_object* v___f_5314_, lean_object* v___f_5315_, lean_object* v___f_5316_, lean_object* v_y_5317_, lean_object* v_prio_5318_, lean_object* v___f_5319_, lean_object* v_x_5320_, lean_object* v___f_5321_, lean_object* v_x_5322_){
_start:
{
if (lean_obj_tag(v_x_5322_) == 0)
{
lean_object* v_a_5324_; lean_object* v___x_5326_; uint8_t v_isShared_5327_; uint8_t v_isSharedCheck_5332_; 
lean_dec_ref(v___f_5321_);
lean_dec_ref(v_x_5320_);
lean_dec_ref(v___f_5319_);
lean_dec(v_prio_5318_);
lean_dec_ref(v_y_5317_);
lean_dec(v___f_5316_);
lean_dec_ref(v___f_5315_);
lean_dec_ref(v___f_5314_);
v_a_5324_ = lean_ctor_get(v_x_5322_, 0);
v_isSharedCheck_5332_ = !lean_is_exclusive(v_x_5322_);
if (v_isSharedCheck_5332_ == 0)
{
v___x_5326_ = v_x_5322_;
v_isShared_5327_ = v_isSharedCheck_5332_;
goto v_resetjp_5325_;
}
else
{
lean_inc(v_a_5324_);
lean_dec(v_x_5322_);
v___x_5326_ = lean_box(0);
v_isShared_5327_ = v_isSharedCheck_5332_;
goto v_resetjp_5325_;
}
v_resetjp_5325_:
{
lean_object* v___x_5329_; 
if (v_isShared_5327_ == 0)
{
v___x_5329_ = v___x_5326_;
goto v_reusejp_5328_;
}
else
{
lean_object* v_reuseFailAlloc_5331_; 
v_reuseFailAlloc_5331_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5331_, 0, v_a_5324_);
v___x_5329_ = v_reuseFailAlloc_5331_;
goto v_reusejp_5328_;
}
v_reusejp_5328_:
{
lean_object* v___x_5330_; 
v___x_5330_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5330_, 0, v___x_5329_);
return v___x_5330_;
}
}
}
else
{
lean_object* v_a_5333_; lean_object* v___x_5335_; uint8_t v_isShared_5336_; uint8_t v_isSharedCheck_5351_; 
v_a_5333_ = lean_ctor_get(v_x_5322_, 0);
v_isSharedCheck_5351_ = !lean_is_exclusive(v_x_5322_);
if (v_isSharedCheck_5351_ == 0)
{
v___x_5335_ = v_x_5322_;
v_isShared_5336_ = v_isSharedCheck_5351_;
goto v_resetjp_5334_;
}
else
{
lean_inc(v_a_5333_);
lean_dec(v_x_5322_);
v___x_5335_ = lean_box(0);
v_isShared_5336_ = v_isSharedCheck_5351_;
goto v_resetjp_5334_;
}
v_resetjp_5334_:
{
lean_object* v___f_5337_; lean_object* v___f_5338_; lean_object* v___f_5339_; lean_object* v___x_5340_; uint8_t v___x_5341_; lean_object* v___x_5342_; lean_object* v___x_5343_; uint8_t v___x_5344_; lean_object* v___x_5345_; lean_object* v___x_5347_; 
lean_inc(v_a_5333_);
v___f_5337_ = lean_alloc_closure((void*)(l_Std_Async_Async_race___redArg___lam__3___boxed), 3, 1);
lean_closure_set(v___f_5337_, 0, v_a_5333_);
v___f_5338_ = lean_alloc_closure((void*)(l_Std_Async_Async_race___redArg___lam__2___boxed), 5, 3);
lean_closure_set(v___f_5338_, 0, v_a_5333_);
lean_closure_set(v___f_5338_, 1, v___f_5314_);
lean_closure_set(v___f_5338_, 2, v___f_5315_);
lean_inc(v_prio_5318_);
v___f_5339_ = lean_alloc_closure((void*)(l_Std_Async_Async_race___redArg___lam__6___boxed), 8, 6);
lean_closure_set(v___f_5339_, 0, v___f_5316_);
lean_closure_set(v___f_5339_, 1, v___f_5337_);
lean_closure_set(v___f_5339_, 2, v___f_5338_);
lean_closure_set(v___f_5339_, 3, v_y_5317_);
lean_closure_set(v___f_5339_, 4, v_prio_5318_);
lean_closure_set(v___f_5339_, 5, v___f_5319_);
v___x_5340_ = lean_unsigned_to_nat(0u);
v___x_5341_ = 0;
v___x_5342_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_toRawBaseIO___boxed), 3, 2);
lean_closure_set(v___x_5342_, 0, lean_box(0));
lean_closure_set(v___x_5342_, 1, v_x_5320_);
v___x_5343_ = lean_io_as_task(v___x_5342_, v_prio_5318_);
v___x_5344_ = 1;
v___x_5345_ = lean_task_bind(v___x_5343_, v___f_5321_, v___x_5340_, v___x_5344_);
if (v_isShared_5336_ == 0)
{
lean_ctor_set(v___x_5335_, 0, v___x_5345_);
v___x_5347_ = v___x_5335_;
goto v_reusejp_5346_;
}
else
{
lean_object* v_reuseFailAlloc_5350_; 
v_reuseFailAlloc_5350_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5350_, 0, v___x_5345_);
v___x_5347_ = v_reuseFailAlloc_5350_;
goto v_reusejp_5346_;
}
v_reusejp_5346_:
{
lean_object* v___x_5348_; lean_object* v___x_5349_; 
v___x_5348_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5348_, 0, v___x_5347_);
v___x_5349_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5340_, v___x_5341_, v___x_5348_, v___f_5339_);
return v___x_5349_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_race___redArg___lam__7___boxed(lean_object* v___f_5352_, lean_object* v___f_5353_, lean_object* v___f_5354_, lean_object* v_y_5355_, lean_object* v_prio_5356_, lean_object* v___f_5357_, lean_object* v_x_5358_, lean_object* v___f_5359_, lean_object* v_x_5360_, lean_object* v___y_5361_){
_start:
{
lean_object* v_res_5362_; 
v_res_5362_ = l_Std_Async_Async_race___redArg___lam__7(v___f_5352_, v___f_5353_, v___f_5354_, v_y_5355_, v_prio_5356_, v___f_5357_, v_x_5358_, v___f_5359_, v_x_5360_);
return v_res_5362_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_race___redArg(lean_object* v_x_5365_, lean_object* v_y_5366_, lean_object* v_prio_5367_){
_start:
{
lean_object* v___f_5369_; lean_object* v___f_5370_; lean_object* v___f_5371_; lean_object* v___f_5372_; lean_object* v___f_5373_; lean_object* v___x_5374_; uint8_t v___x_5375_; lean_object* v___x_5376_; lean_object* v___x_5377_; lean_object* v___x_5378_; lean_object* v___x_5379_; 
v___f_5369_ = ((lean_object*)(l_Std_Async_EAsync_instMonadAsyncAsyncTaskError___closed__0));
v___f_5370_ = ((lean_object*)(l_Std_Async_Async_race___redArg___closed__0));
v___f_5371_ = ((lean_object*)(l_Std_Async_Async_race___redArg___closed__1));
v___f_5372_ = ((lean_object*)(l_Std_Async_BaseAsync_race___redArg___closed__0));
v___f_5373_ = lean_alloc_closure((void*)(l_Std_Async_Async_race___redArg___lam__7___boxed), 10, 8);
lean_closure_set(v___f_5373_, 0, v___f_5371_);
lean_closure_set(v___f_5373_, 1, v___f_5370_);
lean_closure_set(v___f_5373_, 2, v___f_5372_);
lean_closure_set(v___f_5373_, 3, v_y_5366_);
lean_closure_set(v___f_5373_, 4, v_prio_5367_);
lean_closure_set(v___f_5373_, 5, v___f_5369_);
lean_closure_set(v___f_5373_, 6, v_x_5365_);
lean_closure_set(v___f_5373_, 7, v___f_5369_);
v___x_5374_ = lean_unsigned_to_nat(0u);
v___x_5375_ = 0;
v___x_5376_ = lean_io_promise_new();
v___x_5377_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5377_, 0, v___x_5376_);
v___x_5378_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5378_, 0, v___x_5377_);
v___x_5379_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5374_, v___x_5375_, v___x_5378_, v___f_5373_);
return v___x_5379_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_race___redArg___boxed(lean_object* v_x_5380_, lean_object* v_y_5381_, lean_object* v_prio_5382_, lean_object* v___y_5383_){
_start:
{
lean_object* v_res_5384_; 
v_res_5384_ = l_Std_Async_Async_race___redArg(v_x_5380_, v_y_5381_, v_prio_5382_);
return v_res_5384_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_race(lean_object* v_00_u03b1_5385_, lean_object* v_inst_5386_, lean_object* v_x_5387_, lean_object* v_y_5388_, lean_object* v_prio_5389_){
_start:
{
lean_object* v___f_5391_; lean_object* v___f_5392_; lean_object* v___f_5393_; lean_object* v___f_5394_; lean_object* v___f_5395_; lean_object* v___x_5396_; uint8_t v___x_5397_; lean_object* v___x_5398_; lean_object* v___x_5399_; lean_object* v___x_5400_; lean_object* v___x_5401_; 
v___f_5391_ = ((lean_object*)(l_Std_Async_EAsync_instMonadAsyncAsyncTaskError___closed__0));
v___f_5392_ = ((lean_object*)(l_Std_Async_Async_race___redArg___closed__0));
v___f_5393_ = ((lean_object*)(l_Std_Async_Async_race___redArg___closed__1));
v___f_5394_ = ((lean_object*)(l_Std_Async_BaseAsync_race___redArg___closed__0));
v___f_5395_ = lean_alloc_closure((void*)(l_Std_Async_Async_race___redArg___lam__7___boxed), 10, 8);
lean_closure_set(v___f_5395_, 0, v___f_5393_);
lean_closure_set(v___f_5395_, 1, v___f_5392_);
lean_closure_set(v___f_5395_, 2, v___f_5394_);
lean_closure_set(v___f_5395_, 3, v_y_5388_);
lean_closure_set(v___f_5395_, 4, v_prio_5389_);
lean_closure_set(v___f_5395_, 5, v___f_5391_);
lean_closure_set(v___f_5395_, 6, v_x_5387_);
lean_closure_set(v___f_5395_, 7, v___f_5391_);
v___x_5396_ = lean_unsigned_to_nat(0u);
v___x_5397_ = 0;
v___x_5398_ = lean_io_promise_new();
v___x_5399_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5399_, 0, v___x_5398_);
v___x_5400_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5400_, 0, v___x_5399_);
v___x_5401_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5396_, v___x_5397_, v___x_5400_, v___f_5395_);
return v___x_5401_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_race___boxed(lean_object* v_00_u03b1_5402_, lean_object* v_inst_5403_, lean_object* v_x_5404_, lean_object* v_y_5405_, lean_object* v_prio_5406_, lean_object* v___y_5407_){
_start:
{
lean_object* v_res_5408_; 
v_res_5408_ = l_Std_Async_Async_race(v_00_u03b1_5402_, v_inst_5403_, v_x_5404_, v_y_5405_, v_prio_5406_);
lean_dec(v_inst_5403_);
return v_res_5408_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_concurrentlyAll___redArg___lam__1(lean_object* v_prio_5409_, lean_object* v___f_5410_, lean_object* v_x_5411_){
_start:
{
lean_object* v___x_5413_; lean_object* v___x_5414_; lean_object* v___x_5415_; uint8_t v___x_5416_; lean_object* v___x_5417_; lean_object* v___x_5418_; lean_object* v___x_5419_; 
v___x_5413_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_toRawBaseIO___boxed), 3, 2);
lean_closure_set(v___x_5413_, 0, lean_box(0));
lean_closure_set(v___x_5413_, 1, v_x_5411_);
v___x_5414_ = lean_io_as_task(v___x_5413_, v_prio_5409_);
v___x_5415_ = lean_unsigned_to_nat(0u);
v___x_5416_ = 1;
v___x_5417_ = lean_task_bind(v___x_5414_, v___f_5410_, v___x_5415_, v___x_5416_);
v___x_5418_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5418_, 0, v___x_5417_);
v___x_5419_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5419_, 0, v___x_5418_);
return v___x_5419_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_concurrentlyAll___redArg___lam__1___boxed(lean_object* v_prio_5420_, lean_object* v___f_5421_, lean_object* v_x_5422_, lean_object* v___y_5423_){
_start:
{
lean_object* v_res_5424_; 
v_res_5424_ = l_Std_Async_Async_concurrentlyAll___redArg___lam__1(v_prio_5420_, v___f_5421_, v_x_5422_);
return v_res_5424_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_concurrentlyAll___redArg___lam__0(lean_object* v___x_5426_, lean_object* v_x_5427_){
_start:
{
if (lean_obj_tag(v_x_5427_) == 0)
{
lean_object* v_a_5429_; lean_object* v___x_5431_; uint8_t v_isShared_5432_; uint8_t v_isSharedCheck_5437_; 
lean_dec_ref(v___x_5426_);
v_a_5429_ = lean_ctor_get(v_x_5427_, 0);
v_isSharedCheck_5437_ = !lean_is_exclusive(v_x_5427_);
if (v_isSharedCheck_5437_ == 0)
{
v___x_5431_ = v_x_5427_;
v_isShared_5432_ = v_isSharedCheck_5437_;
goto v_resetjp_5430_;
}
else
{
lean_inc(v_a_5429_);
lean_dec(v_x_5427_);
v___x_5431_ = lean_box(0);
v_isShared_5432_ = v_isSharedCheck_5437_;
goto v_resetjp_5430_;
}
v_resetjp_5430_:
{
lean_object* v___x_5434_; 
if (v_isShared_5432_ == 0)
{
v___x_5434_ = v___x_5431_;
goto v_reusejp_5433_;
}
else
{
lean_object* v_reuseFailAlloc_5436_; 
v_reuseFailAlloc_5436_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5436_, 0, v_a_5429_);
v___x_5434_ = v_reuseFailAlloc_5436_;
goto v_reusejp_5433_;
}
v_reusejp_5433_:
{
lean_object* v___x_5435_; 
v___x_5435_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5435_, 0, v___x_5434_);
return v___x_5435_;
}
}
}
else
{
lean_object* v_a_5438_; lean_object* v___x_5439_; size_t v_sz_5440_; size_t v___x_5441_; lean_object* v___x_272__overap_5442_; lean_object* v___x_5443_; 
v_a_5438_ = lean_ctor_get(v_x_5427_, 0);
lean_inc(v_a_5438_);
lean_dec_ref_known(v_x_5427_, 1);
v___x_5439_ = ((lean_object*)(l_Std_Async_Async_concurrentlyAll___redArg___lam__0___closed__0));
v_sz_5440_ = lean_array_size(v_a_5438_);
v___x_5441_ = ((size_t)0ULL);
v___x_272__overap_5442_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_5426_, v___x_5439_, v_sz_5440_, v___x_5441_, v_a_5438_);
v___x_5443_ = lean_apply_1(v___x_272__overap_5442_, lean_box(0));
return v___x_5443_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_concurrentlyAll___redArg___lam__0___boxed(lean_object* v___x_5444_, lean_object* v_x_5445_, lean_object* v___y_5446_){
_start:
{
lean_object* v_res_5447_; 
v_res_5447_ = l_Std_Async_Async_concurrentlyAll___redArg___lam__0(v___x_5444_, v_x_5445_);
return v_res_5447_;
}
}
static lean_object* _init_l_Std_Async_Async_concurrentlyAll___redArg___closed__0(void){
_start:
{
lean_object* v___x_5448_; lean_object* v___f_5449_; 
v___x_5448_ = lean_obj_once(&l_Std_Async_EAsync_instMonad___closed__0, &l_Std_Async_EAsync_instMonad___closed__0_once, _init_l_Std_Async_EAsync_instMonad___closed__0);
v___f_5449_ = lean_alloc_closure((void*)(l_Std_Async_Async_concurrentlyAll___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_5449_, 0, v___x_5448_);
return v___f_5449_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_concurrentlyAll___redArg(lean_object* v_xs_5450_, lean_object* v_prio_5451_){
_start:
{
lean_object* v___f_5453_; lean_object* v___f_5454_; lean_object* v___x_5455_; lean_object* v___f_5456_; lean_object* v___x_5457_; uint8_t v___x_5458_; size_t v_sz_5459_; size_t v___x_5460_; lean_object* v___x_205__overap_5461_; lean_object* v___x_5462_; lean_object* v___x_5463_; 
v___f_5453_ = ((lean_object*)(l_Std_Async_EAsync_instMonadAsyncAsyncTaskError___closed__0));
v___f_5454_ = lean_alloc_closure((void*)(l_Std_Async_Async_concurrentlyAll___redArg___lam__1___boxed), 4, 2);
lean_closure_set(v___f_5454_, 0, v_prio_5451_);
lean_closure_set(v___f_5454_, 1, v___f_5453_);
v___x_5455_ = lean_obj_once(&l_Std_Async_EAsync_instMonad___closed__0, &l_Std_Async_EAsync_instMonad___closed__0_once, _init_l_Std_Async_EAsync_instMonad___closed__0);
v___f_5456_ = lean_obj_once(&l_Std_Async_Async_concurrentlyAll___redArg___closed__0, &l_Std_Async_Async_concurrentlyAll___redArg___closed__0_once, _init_l_Std_Async_Async_concurrentlyAll___redArg___closed__0);
v___x_5457_ = lean_unsigned_to_nat(0u);
v___x_5458_ = 0;
v_sz_5459_ = lean_array_size(v_xs_5450_);
v___x_5460_ = ((size_t)0ULL);
v___x_205__overap_5461_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_5455_, v___f_5454_, v_sz_5459_, v___x_5460_, v_xs_5450_);
v___x_5462_ = lean_apply_1(v___x_205__overap_5461_, lean_box(0));
v___x_5463_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5457_, v___x_5458_, v___x_5462_, v___f_5456_);
return v___x_5463_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_concurrentlyAll___redArg___boxed(lean_object* v_xs_5464_, lean_object* v_prio_5465_, lean_object* v___y_5466_){
_start:
{
lean_object* v_res_5467_; 
v_res_5467_ = l_Std_Async_Async_concurrentlyAll___redArg(v_xs_5464_, v_prio_5465_);
return v_res_5467_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_concurrentlyAll(lean_object* v_00_u03b1_5468_, lean_object* v_xs_5469_, lean_object* v_prio_5470_){
_start:
{
lean_object* v___f_5472_; lean_object* v___f_5473_; lean_object* v___x_5474_; lean_object* v___f_5475_; lean_object* v___x_5476_; uint8_t v___x_5477_; size_t v_sz_5478_; size_t v___x_5479_; lean_object* v___x_242__overap_5480_; lean_object* v___x_5481_; lean_object* v___x_5482_; 
v___f_5472_ = ((lean_object*)(l_Std_Async_EAsync_instMonadAsyncAsyncTaskError___closed__0));
v___f_5473_ = lean_alloc_closure((void*)(l_Std_Async_Async_concurrentlyAll___redArg___lam__1___boxed), 4, 2);
lean_closure_set(v___f_5473_, 0, v_prio_5470_);
lean_closure_set(v___f_5473_, 1, v___f_5472_);
v___x_5474_ = lean_obj_once(&l_Std_Async_EAsync_instMonad___closed__0, &l_Std_Async_EAsync_instMonad___closed__0_once, _init_l_Std_Async_EAsync_instMonad___closed__0);
v___f_5475_ = lean_obj_once(&l_Std_Async_Async_concurrentlyAll___redArg___closed__0, &l_Std_Async_Async_concurrentlyAll___redArg___closed__0_once, _init_l_Std_Async_Async_concurrentlyAll___redArg___closed__0);
v___x_5476_ = lean_unsigned_to_nat(0u);
v___x_5477_ = 0;
v_sz_5478_ = lean_array_size(v_xs_5469_);
v___x_5479_ = ((size_t)0ULL);
v___x_242__overap_5480_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_5474_, v___f_5473_, v_sz_5478_, v___x_5479_, v_xs_5469_);
v___x_5481_ = lean_apply_1(v___x_242__overap_5480_, lean_box(0));
v___x_5482_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5476_, v___x_5477_, v___x_5481_, v___f_5475_);
return v___x_5482_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_concurrentlyAll___boxed(lean_object* v_00_u03b1_5483_, lean_object* v_xs_5484_, lean_object* v_prio_5485_, lean_object* v___y_5486_){
_start:
{
lean_object* v_res_5487_; 
v_res_5487_ = l_Std_Async_Async_concurrentlyAll(v_00_u03b1_5483_, v_xs_5484_, v_prio_5485_);
return v_res_5487_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_raceAll___redArg___lam__4(lean_object* v___f_5488_, lean_object* v___f_5489_, lean_object* v_x_5490_){
_start:
{
if (lean_obj_tag(v_x_5490_) == 0)
{
lean_object* v_a_5492_; lean_object* v___x_5494_; uint8_t v_isShared_5495_; uint8_t v_isSharedCheck_5500_; 
lean_dec_ref(v___f_5489_);
lean_dec(v___f_5488_);
v_a_5492_ = lean_ctor_get(v_x_5490_, 0);
v_isSharedCheck_5500_ = !lean_is_exclusive(v_x_5490_);
if (v_isSharedCheck_5500_ == 0)
{
v___x_5494_ = v_x_5490_;
v_isShared_5495_ = v_isSharedCheck_5500_;
goto v_resetjp_5493_;
}
else
{
lean_inc(v_a_5492_);
lean_dec(v_x_5490_);
v___x_5494_ = lean_box(0);
v_isShared_5495_ = v_isSharedCheck_5500_;
goto v_resetjp_5493_;
}
v_resetjp_5493_:
{
lean_object* v___x_5497_; 
if (v_isShared_5495_ == 0)
{
v___x_5497_ = v___x_5494_;
goto v_reusejp_5496_;
}
else
{
lean_object* v_reuseFailAlloc_5499_; 
v_reuseFailAlloc_5499_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5499_, 0, v_a_5492_);
v___x_5497_ = v_reuseFailAlloc_5499_;
goto v_reusejp_5496_;
}
v_reusejp_5496_:
{
lean_object* v___x_5498_; 
v___x_5498_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5498_, 0, v___x_5497_);
return v___x_5498_;
}
}
}
else
{
lean_object* v_a_5501_; lean_object* v___x_5503_; uint8_t v_isShared_5504_; uint8_t v_isSharedCheck_5514_; 
v_a_5501_ = lean_ctor_get(v_x_5490_, 0);
v_isSharedCheck_5514_ = !lean_is_exclusive(v_x_5490_);
if (v_isSharedCheck_5514_ == 0)
{
v___x_5503_ = v_x_5490_;
v_isShared_5504_ = v_isSharedCheck_5514_;
goto v_resetjp_5502_;
}
else
{
lean_inc(v_a_5501_);
lean_dec(v_x_5490_);
v___x_5503_ = lean_box(0);
v_isShared_5504_ = v_isSharedCheck_5514_;
goto v_resetjp_5502_;
}
v_resetjp_5502_:
{
lean_object* v___x_5505_; lean_object* v___x_5506_; lean_object* v___x_5507_; uint8_t v___x_5508_; lean_object* v___x_5509_; lean_object* v___x_5511_; 
v___x_5505_ = lean_alloc_closure((void*)(l_liftM), 5, 4);
lean_closure_set(v___x_5505_, 0, lean_box(0));
lean_closure_set(v___x_5505_, 1, lean_box(0));
lean_closure_set(v___x_5505_, 2, v___f_5488_);
lean_closure_set(v___x_5505_, 3, lean_box(0));
v___x_5506_ = lean_alloc_closure((void*)(l_Function_comp), 6, 5);
lean_closure_set(v___x_5506_, 0, lean_box(0));
lean_closure_set(v___x_5506_, 1, lean_box(0));
lean_closure_set(v___x_5506_, 2, lean_box(0));
lean_closure_set(v___x_5506_, 3, v___x_5505_);
lean_closure_set(v___x_5506_, 4, v___f_5489_);
v___x_5507_ = lean_unsigned_to_nat(0u);
v___x_5508_ = 0;
v___x_5509_ = l_BaseIO_chainTask___redArg(v_a_5501_, v___x_5506_, v___x_5507_, v___x_5508_);
if (v_isShared_5504_ == 0)
{
lean_ctor_set(v___x_5503_, 0, v___x_5509_);
v___x_5511_ = v___x_5503_;
goto v_reusejp_5510_;
}
else
{
lean_object* v_reuseFailAlloc_5513_; 
v_reuseFailAlloc_5513_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5513_, 0, v___x_5509_);
v___x_5511_ = v_reuseFailAlloc_5513_;
goto v_reusejp_5510_;
}
v_reusejp_5510_:
{
lean_object* v___x_5512_; 
v___x_5512_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5512_, 0, v___x_5511_);
return v___x_5512_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_raceAll___redArg___lam__4___boxed(lean_object* v___f_5515_, lean_object* v___f_5516_, lean_object* v_x_5517_, lean_object* v___y_5518_){
_start:
{
lean_object* v_res_5519_; 
v_res_5519_ = l_Std_Async_Async_raceAll___redArg___lam__4(v___f_5515_, v___f_5516_, v_x_5517_);
return v_res_5519_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_raceAll___redArg___lam__0(lean_object* v_prio_5520_, lean_object* v___f_5521_, lean_object* v___f_5522_, lean_object* v_x_5523_){
_start:
{
lean_object* v___x_5525_; uint8_t v___x_5526_; lean_object* v___x_5527_; lean_object* v___x_5528_; uint8_t v___x_5529_; lean_object* v___x_5530_; lean_object* v___x_5531_; lean_object* v___x_5532_; lean_object* v___x_5533_; 
v___x_5525_ = lean_unsigned_to_nat(0u);
v___x_5526_ = 0;
v___x_5527_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_toRawBaseIO___boxed), 3, 2);
lean_closure_set(v___x_5527_, 0, lean_box(0));
lean_closure_set(v___x_5527_, 1, v_x_5523_);
v___x_5528_ = lean_io_as_task(v___x_5527_, v_prio_5520_);
v___x_5529_ = 1;
v___x_5530_ = lean_task_bind(v___x_5528_, v___f_5521_, v___x_5525_, v___x_5529_);
v___x_5531_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5531_, 0, v___x_5530_);
v___x_5532_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5532_, 0, v___x_5531_);
v___x_5533_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5525_, v___x_5526_, v___x_5532_, v___f_5522_);
return v___x_5533_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_raceAll___redArg___lam__0___boxed(lean_object* v_prio_5534_, lean_object* v___f_5535_, lean_object* v___f_5536_, lean_object* v_x_5537_, lean_object* v___y_5538_){
_start:
{
lean_object* v_res_5539_; 
v_res_5539_ = l_Std_Async_Async_raceAll___redArg___lam__0(v_prio_5534_, v___f_5535_, v___f_5536_, v_x_5537_);
return v_res_5539_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_raceAll___redArg___lam__2(lean_object* v___f_5540_, lean_object* v_prio_5541_, lean_object* v___f_5542_, lean_object* v___f_5543_, lean_object* v___f_5544_, lean_object* v_inst_5545_, lean_object* v_xs_5546_, lean_object* v_x_5547_){
_start:
{
if (lean_obj_tag(v_x_5547_) == 0)
{
lean_object* v_a_5549_; lean_object* v___x_5551_; uint8_t v_isShared_5552_; uint8_t v_isSharedCheck_5557_; 
lean_dec(v_xs_5546_);
lean_dec_ref(v_inst_5545_);
lean_dec_ref(v___f_5544_);
lean_dec_ref(v___f_5543_);
lean_dec_ref(v___f_5542_);
lean_dec(v_prio_5541_);
lean_dec(v___f_5540_);
v_a_5549_ = lean_ctor_get(v_x_5547_, 0);
v_isSharedCheck_5557_ = !lean_is_exclusive(v_x_5547_);
if (v_isSharedCheck_5557_ == 0)
{
v___x_5551_ = v_x_5547_;
v_isShared_5552_ = v_isSharedCheck_5557_;
goto v_resetjp_5550_;
}
else
{
lean_inc(v_a_5549_);
lean_dec(v_x_5547_);
v___x_5551_ = lean_box(0);
v_isShared_5552_ = v_isSharedCheck_5557_;
goto v_resetjp_5550_;
}
v_resetjp_5550_:
{
lean_object* v___x_5554_; 
if (v_isShared_5552_ == 0)
{
v___x_5554_ = v___x_5551_;
goto v_reusejp_5553_;
}
else
{
lean_object* v_reuseFailAlloc_5556_; 
v_reuseFailAlloc_5556_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5556_, 0, v_a_5549_);
v___x_5554_ = v_reuseFailAlloc_5556_;
goto v_reusejp_5553_;
}
v_reusejp_5553_:
{
lean_object* v___x_5555_; 
v___x_5555_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5555_, 0, v___x_5554_);
return v___x_5555_;
}
}
}
else
{
lean_object* v_a_5558_; lean_object* v___f_5559_; lean_object* v___f_5560_; lean_object* v___f_5561_; lean_object* v___f_5562_; lean_object* v___x_5563_; uint8_t v___x_5564_; lean_object* v___x_5565_; lean_object* v___x_5566_; 
v_a_5558_ = lean_ctor_get(v_x_5547_, 0);
lean_inc_n(v_a_5558_, 2);
lean_dec_ref_known(v_x_5547_, 1);
v___f_5559_ = lean_alloc_closure((void*)(l_Std_Async_Async_race___redArg___lam__3___boxed), 3, 1);
lean_closure_set(v___f_5559_, 0, v_a_5558_);
v___f_5560_ = lean_alloc_closure((void*)(l_Std_Async_Async_raceAll___redArg___lam__4___boxed), 4, 2);
lean_closure_set(v___f_5560_, 0, v___f_5540_);
lean_closure_set(v___f_5560_, 1, v___f_5559_);
v___f_5561_ = lean_alloc_closure((void*)(l_Std_Async_Async_raceAll___redArg___lam__0___boxed), 5, 3);
lean_closure_set(v___f_5561_, 0, v_prio_5541_);
lean_closure_set(v___f_5561_, 1, v___f_5542_);
lean_closure_set(v___f_5561_, 2, v___f_5560_);
v___f_5562_ = lean_alloc_closure((void*)(l_Std_Async_Async_race___redArg___lam__2___boxed), 5, 3);
lean_closure_set(v___f_5562_, 0, v_a_5558_);
lean_closure_set(v___f_5562_, 1, v___f_5543_);
lean_closure_set(v___f_5562_, 2, v___f_5544_);
v___x_5563_ = lean_unsigned_to_nat(0u);
v___x_5564_ = 0;
v___x_5565_ = lean_apply_3(v_inst_5545_, v_xs_5546_, v___f_5561_, lean_box(0));
v___x_5566_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5563_, v___x_5564_, v___x_5565_, v___f_5562_);
return v___x_5566_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_raceAll___redArg___lam__2___boxed(lean_object* v___f_5567_, lean_object* v_prio_5568_, lean_object* v___f_5569_, lean_object* v___f_5570_, lean_object* v___f_5571_, lean_object* v_inst_5572_, lean_object* v_xs_5573_, lean_object* v_x_5574_, lean_object* v___y_5575_){
_start:
{
lean_object* v_res_5576_; 
v_res_5576_ = l_Std_Async_Async_raceAll___redArg___lam__2(v___f_5567_, v_prio_5568_, v___f_5569_, v___f_5570_, v___f_5571_, v_inst_5572_, v_xs_5573_, v_x_5574_);
return v_res_5576_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_raceAll___redArg(lean_object* v_inst_5577_, lean_object* v_xs_5578_, lean_object* v_prio_5579_){
_start:
{
lean_object* v___f_5581_; lean_object* v___f_5582_; lean_object* v___f_5583_; lean_object* v___f_5584_; lean_object* v___f_5585_; lean_object* v___x_5586_; uint8_t v___x_5587_; lean_object* v___x_5588_; lean_object* v___x_5589_; lean_object* v___x_5590_; lean_object* v___x_5591_; 
v___f_5581_ = ((lean_object*)(l_Std_Async_Async_race___redArg___closed__1));
v___f_5582_ = ((lean_object*)(l_Std_Async_Async_race___redArg___closed__0));
v___f_5583_ = ((lean_object*)(l_Std_Async_EAsync_instMonadAsyncAsyncTaskError___closed__0));
v___f_5584_ = ((lean_object*)(l_Std_Async_BaseAsync_race___redArg___closed__0));
v___f_5585_ = lean_alloc_closure((void*)(l_Std_Async_Async_raceAll___redArg___lam__2___boxed), 9, 7);
lean_closure_set(v___f_5585_, 0, v___f_5584_);
lean_closure_set(v___f_5585_, 1, v_prio_5579_);
lean_closure_set(v___f_5585_, 2, v___f_5583_);
lean_closure_set(v___f_5585_, 3, v___f_5581_);
lean_closure_set(v___f_5585_, 4, v___f_5582_);
lean_closure_set(v___f_5585_, 5, v_inst_5577_);
lean_closure_set(v___f_5585_, 6, v_xs_5578_);
v___x_5586_ = lean_unsigned_to_nat(0u);
v___x_5587_ = 0;
v___x_5588_ = lean_io_promise_new();
v___x_5589_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5589_, 0, v___x_5588_);
v___x_5590_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5590_, 0, v___x_5589_);
v___x_5591_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5586_, v___x_5587_, v___x_5590_, v___f_5585_);
return v___x_5591_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_raceAll___redArg___boxed(lean_object* v_inst_5592_, lean_object* v_xs_5593_, lean_object* v_prio_5594_, lean_object* v___y_5595_){
_start:
{
lean_object* v_res_5596_; 
v_res_5596_ = l_Std_Async_Async_raceAll___redArg(v_inst_5592_, v_xs_5593_, v_prio_5594_);
return v_res_5596_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_raceAll(lean_object* v_c_5597_, lean_object* v_00_u03b1_5598_, lean_object* v_inst_5599_, lean_object* v_xs_5600_, lean_object* v_prio_5601_){
_start:
{
lean_object* v___f_5603_; lean_object* v___f_5604_; lean_object* v___f_5605_; lean_object* v___f_5606_; lean_object* v___f_5607_; lean_object* v___x_5608_; uint8_t v___x_5609_; lean_object* v___x_5610_; lean_object* v___x_5611_; lean_object* v___x_5612_; lean_object* v___x_5613_; 
v___f_5603_ = ((lean_object*)(l_Std_Async_Async_race___redArg___closed__1));
v___f_5604_ = ((lean_object*)(l_Std_Async_Async_race___redArg___closed__0));
v___f_5605_ = ((lean_object*)(l_Std_Async_EAsync_instMonadAsyncAsyncTaskError___closed__0));
v___f_5606_ = ((lean_object*)(l_Std_Async_BaseAsync_race___redArg___closed__0));
v___f_5607_ = lean_alloc_closure((void*)(l_Std_Async_Async_raceAll___redArg___lam__2___boxed), 9, 7);
lean_closure_set(v___f_5607_, 0, v___f_5606_);
lean_closure_set(v___f_5607_, 1, v_prio_5601_);
lean_closure_set(v___f_5607_, 2, v___f_5605_);
lean_closure_set(v___f_5607_, 3, v___f_5603_);
lean_closure_set(v___f_5607_, 4, v___f_5604_);
lean_closure_set(v___f_5607_, 5, v_inst_5599_);
lean_closure_set(v___f_5607_, 6, v_xs_5600_);
v___x_5608_ = lean_unsigned_to_nat(0u);
v___x_5609_ = 0;
v___x_5610_ = lean_io_promise_new();
v___x_5611_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5611_, 0, v___x_5610_);
v___x_5612_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5612_, 0, v___x_5611_);
v___x_5613_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5608_, v___x_5609_, v___x_5612_, v___f_5607_);
return v___x_5613_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Async_raceAll___boxed(lean_object* v_c_5614_, lean_object* v_00_u03b1_5615_, lean_object* v_inst_5616_, lean_object* v_xs_5617_, lean_object* v_prio_5618_, lean_object* v___y_5619_){
_start:
{
lean_object* v_res_5620_; 
v_res_5620_ = l_Std_Async_Async_raceAll(v_c_5614_, v_00_u03b1_5615_, v_inst_5616_, v_xs_5617_, v_prio_5618_);
return v_res_5620_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_background___redArg(lean_object* v_inst_5621_, lean_object* v_inst_5622_, lean_object* v_action_5623_, lean_object* v_prio_5624_){
_start:
{
lean_object* v_toApplicative_5625_; lean_object* v_toFunctor_5626_; lean_object* v_mapConst_5627_; lean_object* v___x_5628_; lean_object* v___x_5629_; lean_object* v___x_5630_; 
v_toApplicative_5625_ = lean_ctor_get(v_inst_5621_, 0);
lean_inc_ref(v_toApplicative_5625_);
lean_dec_ref(v_inst_5621_);
v_toFunctor_5626_ = lean_ctor_get(v_toApplicative_5625_, 0);
lean_inc_ref(v_toFunctor_5626_);
lean_dec_ref(v_toApplicative_5625_);
v_mapConst_5627_ = lean_ctor_get(v_toFunctor_5626_, 1);
lean_inc(v_mapConst_5627_);
lean_dec_ref(v_toFunctor_5626_);
v___x_5628_ = lean_apply_3(v_inst_5622_, lean_box(0), v_action_5623_, v_prio_5624_);
v___x_5629_ = lean_box(0);
v___x_5630_ = lean_apply_4(v_mapConst_5627_, lean_box(0), lean_box(0), v___x_5629_, v___x_5628_);
return v___x_5630_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_background(lean_object* v_m_5631_, lean_object* v_t_5632_, lean_object* v_00_u03b1_5633_, lean_object* v_inst_5634_, lean_object* v_inst_5635_, lean_object* v_action_5636_, lean_object* v_prio_5637_){
_start:
{
lean_object* v_toApplicative_5638_; lean_object* v_toFunctor_5639_; lean_object* v_mapConst_5640_; lean_object* v___x_5641_; lean_object* v___x_5642_; lean_object* v___x_5643_; 
v_toApplicative_5638_ = lean_ctor_get(v_inst_5634_, 0);
lean_inc_ref(v_toApplicative_5638_);
lean_dec_ref(v_inst_5634_);
v_toFunctor_5639_ = lean_ctor_get(v_toApplicative_5638_, 0);
lean_inc_ref(v_toFunctor_5639_);
lean_dec_ref(v_toApplicative_5638_);
v_mapConst_5640_ = lean_ctor_get(v_toFunctor_5639_, 1);
lean_inc(v_mapConst_5640_);
lean_dec_ref(v_toFunctor_5639_);
v___x_5641_ = lean_apply_3(v_inst_5635_, lean_box(0), v_action_5636_, v_prio_5637_);
v___x_5642_ = lean_box(0);
v___x_5643_ = lean_apply_4(v_mapConst_5640_, lean_box(0), lean_box(0), v___x_5642_, v___x_5641_);
return v___x_5643_;
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
