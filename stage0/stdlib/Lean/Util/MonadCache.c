// Lean compiler output
// Module: Lean.Util.MonadCache
// Imports: public import Std.Data.HashMap.Basic
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
lean_object* l_ST_Prim_Ref_modifyGetUnsafe___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateRefT_x27_get___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ST_Prim_Ref_get___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ST_Prim_mkRef___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_get(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_checkCache___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_checkCache___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_checkCache___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_checkCache___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_checkCache(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instMonadCacheReaderT___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instMonadCacheReaderT___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instMonadCacheReaderT___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instMonadCacheReaderT___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instMonadCacheReaderT___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instMonadCacheReaderT(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instMonadCacheExceptTOfMonad___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instMonadCacheExceptTOfMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instMonadCacheExceptTOfMonad___redArg___lam__2(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instMonadCacheExceptTOfMonad___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_instMonadCacheExceptTOfMonad___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instMonadCacheExceptTOfMonad___redArg___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instMonadCacheExceptTOfMonad___redArg___closed__0 = (const lean_object*)&l_Lean_instMonadCacheExceptTOfMonad___redArg___closed__0_value;
static const lean_closure_object l_Lean_instMonadCacheExceptTOfMonad___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instMonadCacheExceptTOfMonad___redArg___lam__2, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instMonadCacheExceptTOfMonad___redArg___closed__1 = (const lean_object*)&l_Lean_instMonadCacheExceptTOfMonad___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_instMonadCacheExceptTOfMonad___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instMonadCacheExceptTOfMonad(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadHashMapCacheAdapter_findCached_x3f___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadHashMapCacheAdapter_findCached_x3f___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadHashMapCacheAdapter_findCached_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadHashMapCacheAdapter_findCached_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadHashMapCacheAdapter_cache___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadHashMapCacheAdapter_cache___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadHashMapCacheAdapter_cache(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadHashMapCacheAdapter_instMonadCacheOfMonad___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadHashMapCacheAdapter_instMonadCacheOfMonad(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadHashMapCacheAdapter___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadHashMapCacheAdapter___redArg___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadHashMapCacheAdapter___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadHashMapCacheAdapter___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadHashMapCacheAdapter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadHashMapCacheAdapter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_run___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_run___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_run___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_run___redArg___lam__3(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_MonadCacheT_run___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MonadCacheT_run___redArg___closed__0;
static lean_once_cell_t l_Lean_MonadCacheT_run___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MonadCacheT_run___redArg___closed__1;
static lean_once_cell_t l_Lean_MonadCacheT_run___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MonadCacheT_run___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_run___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_run(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_run___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonad___aux__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonad___aux__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonad___aux__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonad___aux__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonad___aux__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonad___aux__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonad___aux__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonad___aux__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonad___aux__5___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonad___aux__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonad___aux__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonad___aux__7___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonad___aux__7___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonad___aux__7___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonad___aux__7___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonad___aux__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonad___aux__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonad___aux__9___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonad___aux__9___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonad___aux__9___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonad___aux__9___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonad___aux__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonad___aux__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonad___aux__11___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonad___aux__11___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonad___aux__11(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonad___aux__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonad___aux__13___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonad___aux__13___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonad___aux__13___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonad___aux__13___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonad___aux__13(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonad___aux__13___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonad___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonad(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadLift___aux__1___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadLift___aux__1___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadLift___aux__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadLift___aux__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadLift___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadLift(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadExceptOf___aux__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadExceptOf___aux__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadExceptOf___aux__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadExceptOf___aux__3___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadExceptOf___aux__3___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadExceptOf___aux__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadExceptOf___aux__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadExceptOf___aux__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadExceptOf___aux__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadExceptOf___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadExceptOf(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadControl___aux__1___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadControl___aux__1___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadControl___aux__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadControl___aux__1___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadControl___aux__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadControl___aux__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadControl___aux__3___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadControl___aux__3___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadControl___aux__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadControl___aux__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadControl___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadControl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadFinally___aux__1___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadFinally___aux__1___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadFinally___aux__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadFinally___aux__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadFinally___aux__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadFinally___aux__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadFinally___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadFinally(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadRef___aux__1___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadRef___aux__1___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadRef___aux__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadRef___aux__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadRef___aux__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadRef___aux__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadRef___aux__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadRef___aux__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadRef___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadRef(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instAlternative___aux__1___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instAlternative___aux__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instAlternative___aux__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instAlternative___aux__3___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instAlternative___aux__3___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instAlternative___aux__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instAlternative___aux__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instAlternative___aux__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instAlternative___aux__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instAlternative___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instAlternative(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadHashMapCacheAdapter___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadHashMapCacheAdapter___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadHashMapCacheAdapter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadHashMapCacheAdapter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_run___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_run___redArg___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lean_MonadStateCacheT_run___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_MonadStateCacheT_run___redArg___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_MonadStateCacheT_run___redArg___closed__0 = (const lean_object*)&l_Lean_MonadStateCacheT_run___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_run___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_run(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_run___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonad___aux__1___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonad___aux__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonad___aux__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonad___aux__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonad___aux__3___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonad___aux__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonad___aux__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonad___aux__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonad___aux__5___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonad___aux__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonad___aux__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonad___aux__7___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonad___aux__7___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonad___aux__7___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonad___aux__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonad___aux__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonad___aux__9___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonad___aux__9___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonad___aux__9___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonad___aux__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonad___aux__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonad___aux__11___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonad___aux__11___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonad___aux__11(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonad___aux__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonad___aux__13___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonad___aux__13___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonad___aux__13(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonad___aux__13___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonad___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonad(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadLift___aux__1___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadLift___aux__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadLift___aux__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadLift___aux__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadLift___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadLift(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadExceptOf___aux__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadExceptOf___aux__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadExceptOf___aux__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadExceptOf___aux__3___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadExceptOf___aux__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadExceptOf___aux__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadExceptOf___aux__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadExceptOf___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadExceptOf(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadControl___aux__1___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadControl___aux__1___redArg___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadControl___aux__1___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadControl___aux__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadControl___aux__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadControl___aux__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadControl___aux__3___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadControl___aux__3___redArg___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadControl___aux__3___redArg___lam__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadControl___aux__3___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadControl___aux__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadControl___aux__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadControl___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadControl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadFinally___aux__1___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadFinally___aux__1___redArg___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadFinally___aux__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadFinally___aux__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadFinally___aux__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadFinally___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadFinally(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadRef___aux__1___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadRef___aux__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadRef___aux__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadRef___aux__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadRef___aux__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadRef___aux__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadRef___aux__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadRef___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadRef(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_checkCache___redArg___lam__0(lean_object* v_toPure_1_, lean_object* v_b_2_, lean_object* v_____r_3_){
_start:
{
lean_object* v___x_4_; 
v___x_4_ = lean_apply_2(v_toPure_1_, lean_box(0), v_b_2_);
return v___x_4_;
}
}
LEAN_EXPORT lean_object* l_Lean_checkCache___redArg___lam__1(lean_object* v_toPure_5_, lean_object* v_cache_6_, lean_object* v_a_7_, lean_object* v_toBind_8_, lean_object* v_b_9_){
_start:
{
lean_object* v___f_10_; lean_object* v___x_11_; lean_object* v___x_12_; 
lean_inc(v_b_9_);
v___f_10_ = lean_alloc_closure((void*)(l_Lean_checkCache___redArg___lam__0), 3, 2);
lean_closure_set(v___f_10_, 0, v_toPure_5_);
lean_closure_set(v___f_10_, 1, v_b_9_);
v___x_11_ = lean_apply_2(v_cache_6_, v_a_7_, v_b_9_);
v___x_12_ = lean_apply_4(v_toBind_8_, lean_box(0), lean_box(0), v___x_11_, v___f_10_);
return v___x_12_;
}
}
LEAN_EXPORT lean_object* l_Lean_checkCache___redArg___lam__2(lean_object* v_f_13_, lean_object* v_toBind_14_, lean_object* v___f_15_, lean_object* v_toPure_16_, lean_object* v_____do__lift_17_){
_start:
{
if (lean_obj_tag(v_____do__lift_17_) == 0)
{
lean_object* v___x_18_; lean_object* v___x_19_; lean_object* v___x_20_; 
lean_dec(v_toPure_16_);
v___x_18_ = lean_box(0);
v___x_19_ = lean_apply_1(v_f_13_, v___x_18_);
v___x_20_ = lean_apply_4(v_toBind_14_, lean_box(0), lean_box(0), v___x_19_, v___f_15_);
return v___x_20_;
}
else
{
lean_object* v_val_21_; lean_object* v___x_22_; 
lean_dec(v___f_15_);
lean_dec(v_toBind_14_);
lean_dec(v_f_13_);
v_val_21_ = lean_ctor_get(v_____do__lift_17_, 0);
lean_inc(v_val_21_);
lean_dec_ref_known(v_____do__lift_17_, 1);
v___x_22_ = lean_apply_2(v_toPure_16_, lean_box(0), v_val_21_);
return v___x_22_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_checkCache___redArg(lean_object* v_inst_23_, lean_object* v_inst_24_, lean_object* v_a_25_, lean_object* v_f_26_){
_start:
{
lean_object* v_toApplicative_27_; lean_object* v_toBind_28_; lean_object* v_findCached_x3f_29_; lean_object* v_cache_30_; lean_object* v_toPure_31_; lean_object* v___x_32_; lean_object* v___f_33_; lean_object* v___f_34_; lean_object* v___x_35_; 
v_toApplicative_27_ = lean_ctor_get(v_inst_24_, 0);
lean_inc_ref(v_toApplicative_27_);
v_toBind_28_ = lean_ctor_get(v_inst_24_, 1);
lean_inc_n(v_toBind_28_, 3);
lean_dec_ref(v_inst_24_);
v_findCached_x3f_29_ = lean_ctor_get(v_inst_23_, 0);
lean_inc(v_findCached_x3f_29_);
v_cache_30_ = lean_ctor_get(v_inst_23_, 1);
lean_inc(v_cache_30_);
lean_dec_ref(v_inst_23_);
v_toPure_31_ = lean_ctor_get(v_toApplicative_27_, 1);
lean_inc_n(v_toPure_31_, 2);
lean_dec_ref(v_toApplicative_27_);
lean_inc(v_a_25_);
v___x_32_ = lean_apply_1(v_findCached_x3f_29_, v_a_25_);
v___f_33_ = lean_alloc_closure((void*)(l_Lean_checkCache___redArg___lam__1), 5, 4);
lean_closure_set(v___f_33_, 0, v_toPure_31_);
lean_closure_set(v___f_33_, 1, v_cache_30_);
lean_closure_set(v___f_33_, 2, v_a_25_);
lean_closure_set(v___f_33_, 3, v_toBind_28_);
v___f_34_ = lean_alloc_closure((void*)(l_Lean_checkCache___redArg___lam__2), 5, 4);
lean_closure_set(v___f_34_, 0, v_f_26_);
lean_closure_set(v___f_34_, 1, v_toBind_28_);
lean_closure_set(v___f_34_, 2, v___f_33_);
lean_closure_set(v___f_34_, 3, v_toPure_31_);
v___x_35_ = lean_apply_4(v_toBind_28_, lean_box(0), lean_box(0), v___x_32_, v___f_34_);
return v___x_35_;
}
}
LEAN_EXPORT lean_object* l_Lean_checkCache(lean_object* v_00_u03b1_36_, lean_object* v_00_u03b2_37_, lean_object* v_m_38_, lean_object* v_inst_39_, lean_object* v_inst_40_, lean_object* v_a_41_, lean_object* v_f_42_){
_start:
{
lean_object* v_toApplicative_43_; lean_object* v_toBind_44_; lean_object* v_findCached_x3f_45_; lean_object* v_cache_46_; lean_object* v_toPure_47_; lean_object* v___x_48_; lean_object* v___f_49_; lean_object* v___f_50_; lean_object* v___x_51_; 
v_toApplicative_43_ = lean_ctor_get(v_inst_40_, 0);
lean_inc_ref(v_toApplicative_43_);
v_toBind_44_ = lean_ctor_get(v_inst_40_, 1);
lean_inc_n(v_toBind_44_, 3);
lean_dec_ref(v_inst_40_);
v_findCached_x3f_45_ = lean_ctor_get(v_inst_39_, 0);
lean_inc(v_findCached_x3f_45_);
v_cache_46_ = lean_ctor_get(v_inst_39_, 1);
lean_inc(v_cache_46_);
lean_dec_ref(v_inst_39_);
v_toPure_47_ = lean_ctor_get(v_toApplicative_43_, 1);
lean_inc_n(v_toPure_47_, 2);
lean_dec_ref(v_toApplicative_43_);
lean_inc(v_a_41_);
v___x_48_ = lean_apply_1(v_findCached_x3f_45_, v_a_41_);
v___f_49_ = lean_alloc_closure((void*)(l_Lean_checkCache___redArg___lam__1), 5, 4);
lean_closure_set(v___f_49_, 0, v_toPure_47_);
lean_closure_set(v___f_49_, 1, v_cache_46_);
lean_closure_set(v___f_49_, 2, v_a_41_);
lean_closure_set(v___f_49_, 3, v_toBind_44_);
v___f_50_ = lean_alloc_closure((void*)(l_Lean_checkCache___redArg___lam__2), 5, 4);
lean_closure_set(v___f_50_, 0, v_f_42_);
lean_closure_set(v___f_50_, 1, v_toBind_44_);
lean_closure_set(v___f_50_, 2, v___f_49_);
lean_closure_set(v___f_50_, 3, v_toPure_47_);
v___x_51_ = lean_apply_4(v_toBind_44_, lean_box(0), lean_box(0), v___x_48_, v___f_50_);
return v___x_51_;
}
}
LEAN_EXPORT lean_object* l_Lean_instMonadCacheReaderT___redArg___lam__0(lean_object* v_inst_52_, lean_object* v_a_53_, lean_object* v___y_54_){
_start:
{
lean_object* v_findCached_x3f_55_; lean_object* v___x_56_; 
v_findCached_x3f_55_ = lean_ctor_get(v_inst_52_, 0);
lean_inc(v_findCached_x3f_55_);
lean_dec_ref(v_inst_52_);
v___x_56_ = lean_apply_1(v_findCached_x3f_55_, v_a_53_);
return v___x_56_;
}
}
LEAN_EXPORT lean_object* l_Lean_instMonadCacheReaderT___redArg___lam__0___boxed(lean_object* v_inst_57_, lean_object* v_a_58_, lean_object* v___y_59_){
_start:
{
lean_object* v_res_60_; 
v_res_60_ = l_Lean_instMonadCacheReaderT___redArg___lam__0(v_inst_57_, v_a_58_, v___y_59_);
lean_dec(v___y_59_);
return v_res_60_;
}
}
LEAN_EXPORT lean_object* l_Lean_instMonadCacheReaderT___redArg___lam__1(lean_object* v_inst_61_, lean_object* v_a_62_, lean_object* v_b_63_, lean_object* v___y_64_){
_start:
{
lean_object* v_cache_65_; lean_object* v___x_66_; 
v_cache_65_ = lean_ctor_get(v_inst_61_, 1);
lean_inc(v_cache_65_);
lean_dec_ref(v_inst_61_);
v___x_66_ = lean_apply_2(v_cache_65_, v_a_62_, v_b_63_);
return v___x_66_;
}
}
LEAN_EXPORT lean_object* l_Lean_instMonadCacheReaderT___redArg___lam__1___boxed(lean_object* v_inst_67_, lean_object* v_a_68_, lean_object* v_b_69_, lean_object* v___y_70_){
_start:
{
lean_object* v_res_71_; 
v_res_71_ = l_Lean_instMonadCacheReaderT___redArg___lam__1(v_inst_67_, v_a_68_, v_b_69_, v___y_70_);
lean_dec(v___y_70_);
return v_res_71_;
}
}
LEAN_EXPORT lean_object* l_Lean_instMonadCacheReaderT___redArg(lean_object* v_inst_72_){
_start:
{
lean_object* v___f_73_; lean_object* v___f_74_; lean_object* v___x_75_; 
lean_inc_ref(v_inst_72_);
v___f_73_ = lean_alloc_closure((void*)(l_Lean_instMonadCacheReaderT___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_73_, 0, v_inst_72_);
v___f_74_ = lean_alloc_closure((void*)(l_Lean_instMonadCacheReaderT___redArg___lam__1___boxed), 4, 1);
lean_closure_set(v___f_74_, 0, v_inst_72_);
v___x_75_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_75_, 0, v___f_73_);
lean_ctor_set(v___x_75_, 1, v___f_74_);
return v___x_75_;
}
}
LEAN_EXPORT lean_object* l_Lean_instMonadCacheReaderT(lean_object* v_00_u03b1_76_, lean_object* v_00_u03b2_77_, lean_object* v_00_u03c1_78_, lean_object* v_m_79_, lean_object* v_inst_80_){
_start:
{
lean_object* v___x_81_; 
v___x_81_ = l_Lean_instMonadCacheReaderT___redArg(v_inst_80_);
return v___x_81_;
}
}
LEAN_EXPORT lean_object* l_Lean_instMonadCacheExceptTOfMonad___redArg___lam__0(lean_object* v_a_82_){
_start:
{
lean_object* v___x_83_; 
v___x_83_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_83_, 0, v_a_82_);
return v___x_83_;
}
}
LEAN_EXPORT lean_object* l_Lean_instMonadCacheExceptTOfMonad___redArg___lam__1(lean_object* v_inst_84_, lean_object* v_inst_85_, lean_object* v___f_86_, lean_object* v_a_87_){
_start:
{
lean_object* v_toApplicative_88_; lean_object* v_toFunctor_89_; lean_object* v_findCached_x3f_90_; lean_object* v_map_91_; lean_object* v___x_92_; lean_object* v___x_93_; 
v_toApplicative_88_ = lean_ctor_get(v_inst_85_, 0);
lean_inc_ref(v_toApplicative_88_);
lean_dec_ref(v_inst_85_);
v_toFunctor_89_ = lean_ctor_get(v_toApplicative_88_, 0);
lean_inc_ref(v_toFunctor_89_);
lean_dec_ref(v_toApplicative_88_);
v_findCached_x3f_90_ = lean_ctor_get(v_inst_84_, 0);
lean_inc(v_findCached_x3f_90_);
lean_dec_ref(v_inst_84_);
v_map_91_ = lean_ctor_get(v_toFunctor_89_, 0);
lean_inc(v_map_91_);
lean_dec_ref(v_toFunctor_89_);
v___x_92_ = lean_apply_1(v_findCached_x3f_90_, v_a_87_);
v___x_93_ = lean_apply_4(v_map_91_, lean_box(0), lean_box(0), v___f_86_, v___x_92_);
return v___x_93_;
}
}
LEAN_EXPORT lean_object* l_Lean_instMonadCacheExceptTOfMonad___redArg___lam__2(lean_object* v_a_94_){
_start:
{
lean_object* v___x_95_; 
v___x_95_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_95_, 0, v_a_94_);
return v___x_95_;
}
}
LEAN_EXPORT lean_object* l_Lean_instMonadCacheExceptTOfMonad___redArg___lam__3(lean_object* v_inst_96_, lean_object* v_inst_97_, lean_object* v___f_98_, lean_object* v_a_99_, lean_object* v_b_100_){
_start:
{
lean_object* v_toApplicative_101_; lean_object* v_toFunctor_102_; lean_object* v_cache_103_; lean_object* v_map_104_; lean_object* v___x_105_; lean_object* v___x_106_; 
v_toApplicative_101_ = lean_ctor_get(v_inst_97_, 0);
lean_inc_ref(v_toApplicative_101_);
lean_dec_ref(v_inst_97_);
v_toFunctor_102_ = lean_ctor_get(v_toApplicative_101_, 0);
lean_inc_ref(v_toFunctor_102_);
lean_dec_ref(v_toApplicative_101_);
v_cache_103_ = lean_ctor_get(v_inst_96_, 1);
lean_inc(v_cache_103_);
lean_dec_ref(v_inst_96_);
v_map_104_ = lean_ctor_get(v_toFunctor_102_, 0);
lean_inc(v_map_104_);
lean_dec_ref(v_toFunctor_102_);
v___x_105_ = lean_apply_2(v_cache_103_, v_a_99_, v_b_100_);
v___x_106_ = lean_apply_4(v_map_104_, lean_box(0), lean_box(0), v___f_98_, v___x_105_);
return v___x_106_;
}
}
LEAN_EXPORT lean_object* l_Lean_instMonadCacheExceptTOfMonad___redArg(lean_object* v_inst_109_, lean_object* v_inst_110_){
_start:
{
lean_object* v___f_111_; lean_object* v___f_112_; lean_object* v___f_113_; lean_object* v___f_114_; lean_object* v___x_115_; 
v___f_111_ = ((lean_object*)(l_Lean_instMonadCacheExceptTOfMonad___redArg___closed__0));
lean_inc_ref(v_inst_110_);
lean_inc_ref(v_inst_109_);
v___f_112_ = lean_alloc_closure((void*)(l_Lean_instMonadCacheExceptTOfMonad___redArg___lam__1), 4, 3);
lean_closure_set(v___f_112_, 0, v_inst_109_);
lean_closure_set(v___f_112_, 1, v_inst_110_);
lean_closure_set(v___f_112_, 2, v___f_111_);
v___f_113_ = ((lean_object*)(l_Lean_instMonadCacheExceptTOfMonad___redArg___closed__1));
v___f_114_ = lean_alloc_closure((void*)(l_Lean_instMonadCacheExceptTOfMonad___redArg___lam__3), 5, 3);
lean_closure_set(v___f_114_, 0, v_inst_109_);
lean_closure_set(v___f_114_, 1, v_inst_110_);
lean_closure_set(v___f_114_, 2, v___f_113_);
v___x_115_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_115_, 0, v___f_112_);
lean_ctor_set(v___x_115_, 1, v___f_114_);
return v___x_115_;
}
}
LEAN_EXPORT lean_object* l_Lean_instMonadCacheExceptTOfMonad(lean_object* v_00_u03b1_116_, lean_object* v_00_u03b2_117_, lean_object* v_00_u03b5_118_, lean_object* v_m_119_, lean_object* v_inst_120_, lean_object* v_inst_121_){
_start:
{
lean_object* v___f_122_; lean_object* v___f_123_; lean_object* v___f_124_; lean_object* v___f_125_; lean_object* v___x_126_; 
v___f_122_ = ((lean_object*)(l_Lean_instMonadCacheExceptTOfMonad___redArg___closed__0));
lean_inc_ref(v_inst_121_);
lean_inc_ref(v_inst_120_);
v___f_123_ = lean_alloc_closure((void*)(l_Lean_instMonadCacheExceptTOfMonad___redArg___lam__1), 4, 3);
lean_closure_set(v___f_123_, 0, v_inst_120_);
lean_closure_set(v___f_123_, 1, v_inst_121_);
lean_closure_set(v___f_123_, 2, v___f_122_);
v___f_124_ = ((lean_object*)(l_Lean_instMonadCacheExceptTOfMonad___redArg___closed__1));
v___f_125_ = lean_alloc_closure((void*)(l_Lean_instMonadCacheExceptTOfMonad___redArg___lam__3), 5, 3);
lean_closure_set(v___f_125_, 0, v_inst_120_);
lean_closure_set(v___f_125_, 1, v_inst_121_);
lean_closure_set(v___f_125_, 2, v___f_124_);
v___x_126_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_126_, 0, v___f_123_);
lean_ctor_set(v___x_126_, 1, v___f_125_);
return v___x_126_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadHashMapCacheAdapter_findCached_x3f___redArg___lam__0(lean_object* v_inst_127_, lean_object* v_inst_128_, lean_object* v_a_129_, lean_object* v_toPure_130_, lean_object* v_c_131_){
_start:
{
lean_object* v___x_132_; lean_object* v___x_133_; 
v___x_132_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___redArg(v_inst_127_, v_inst_128_, v_c_131_, v_a_129_);
v___x_133_ = lean_apply_2(v_toPure_130_, lean_box(0), v___x_132_);
return v___x_133_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadHashMapCacheAdapter_findCached_x3f___redArg___lam__0___boxed(lean_object* v_inst_134_, lean_object* v_inst_135_, lean_object* v_a_136_, lean_object* v_toPure_137_, lean_object* v_c_138_){
_start:
{
lean_object* v_res_139_; 
v_res_139_ = l_Lean_MonadHashMapCacheAdapter_findCached_x3f___redArg___lam__0(v_inst_134_, v_inst_135_, v_a_136_, v_toPure_137_, v_c_138_);
lean_dec_ref(v_c_138_);
return v_res_139_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadHashMapCacheAdapter_findCached_x3f___redArg(lean_object* v_inst_140_, lean_object* v_inst_141_, lean_object* v_inst_142_, lean_object* v_inst_143_, lean_object* v_a_144_){
_start:
{
lean_object* v_toApplicative_145_; lean_object* v_toBind_146_; lean_object* v_getCache_147_; lean_object* v_toPure_148_; lean_object* v___f_149_; lean_object* v___x_150_; 
v_toApplicative_145_ = lean_ctor_get(v_inst_142_, 0);
lean_inc_ref(v_toApplicative_145_);
v_toBind_146_ = lean_ctor_get(v_inst_142_, 1);
lean_inc(v_toBind_146_);
lean_dec_ref(v_inst_142_);
v_getCache_147_ = lean_ctor_get(v_inst_143_, 0);
lean_inc(v_getCache_147_);
lean_dec_ref(v_inst_143_);
v_toPure_148_ = lean_ctor_get(v_toApplicative_145_, 1);
lean_inc(v_toPure_148_);
lean_dec_ref(v_toApplicative_145_);
v___f_149_ = lean_alloc_closure((void*)(l_Lean_MonadHashMapCacheAdapter_findCached_x3f___redArg___lam__0___boxed), 5, 4);
lean_closure_set(v___f_149_, 0, v_inst_140_);
lean_closure_set(v___f_149_, 1, v_inst_141_);
lean_closure_set(v___f_149_, 2, v_a_144_);
lean_closure_set(v___f_149_, 3, v_toPure_148_);
v___x_150_ = lean_apply_4(v_toBind_146_, lean_box(0), lean_box(0), v_getCache_147_, v___f_149_);
return v___x_150_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadHashMapCacheAdapter_findCached_x3f(lean_object* v_00_u03b1_151_, lean_object* v_00_u03b2_152_, lean_object* v_m_153_, lean_object* v_inst_154_, lean_object* v_inst_155_, lean_object* v_inst_156_, lean_object* v_inst_157_, lean_object* v_a_158_){
_start:
{
lean_object* v_toApplicative_159_; lean_object* v_toBind_160_; lean_object* v_getCache_161_; lean_object* v_toPure_162_; lean_object* v___f_163_; lean_object* v___x_164_; 
v_toApplicative_159_ = lean_ctor_get(v_inst_156_, 0);
lean_inc_ref(v_toApplicative_159_);
v_toBind_160_ = lean_ctor_get(v_inst_156_, 1);
lean_inc(v_toBind_160_);
lean_dec_ref(v_inst_156_);
v_getCache_161_ = lean_ctor_get(v_inst_157_, 0);
lean_inc(v_getCache_161_);
lean_dec_ref(v_inst_157_);
v_toPure_162_ = lean_ctor_get(v_toApplicative_159_, 1);
lean_inc(v_toPure_162_);
lean_dec_ref(v_toApplicative_159_);
v___f_163_ = lean_alloc_closure((void*)(l_Lean_MonadHashMapCacheAdapter_findCached_x3f___redArg___lam__0___boxed), 5, 4);
lean_closure_set(v___f_163_, 0, v_inst_154_);
lean_closure_set(v___f_163_, 1, v_inst_155_);
lean_closure_set(v___f_163_, 2, v_a_158_);
lean_closure_set(v___f_163_, 3, v_toPure_162_);
v___x_164_ = lean_apply_4(v_toBind_160_, lean_box(0), lean_box(0), v_getCache_161_, v___f_163_);
return v___x_164_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadHashMapCacheAdapter_cache___redArg___lam__0(lean_object* v_inst_165_, lean_object* v_inst_166_, lean_object* v_a_167_, lean_object* v_b_168_, lean_object* v_s_169_){
_start:
{
lean_object* v___x_170_; 
v___x_170_ = l_Std_DHashMap_Internal_Raw_u2080_insert___redArg(v_inst_165_, v_inst_166_, v_s_169_, v_a_167_, v_b_168_);
return v___x_170_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadHashMapCacheAdapter_cache___redArg(lean_object* v_inst_171_, lean_object* v_inst_172_, lean_object* v_inst_173_, lean_object* v_a_174_, lean_object* v_b_175_){
_start:
{
lean_object* v_modifyCache_176_; lean_object* v___f_177_; lean_object* v___x_178_; 
v_modifyCache_176_ = lean_ctor_get(v_inst_173_, 1);
lean_inc(v_modifyCache_176_);
lean_dec_ref(v_inst_173_);
v___f_177_ = lean_alloc_closure((void*)(l_Lean_MonadHashMapCacheAdapter_cache___redArg___lam__0), 5, 4);
lean_closure_set(v___f_177_, 0, v_inst_171_);
lean_closure_set(v___f_177_, 1, v_inst_172_);
lean_closure_set(v___f_177_, 2, v_a_174_);
lean_closure_set(v___f_177_, 3, v_b_175_);
v___x_178_ = lean_apply_1(v_modifyCache_176_, v___f_177_);
return v___x_178_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadHashMapCacheAdapter_cache(lean_object* v_00_u03b1_179_, lean_object* v_00_u03b2_180_, lean_object* v_m_181_, lean_object* v_inst_182_, lean_object* v_inst_183_, lean_object* v_inst_184_, lean_object* v_a_185_, lean_object* v_b_186_){
_start:
{
lean_object* v_modifyCache_187_; lean_object* v___f_188_; lean_object* v___x_189_; 
v_modifyCache_187_ = lean_ctor_get(v_inst_184_, 1);
lean_inc(v_modifyCache_187_);
lean_dec_ref(v_inst_184_);
v___f_188_ = lean_alloc_closure((void*)(l_Lean_MonadHashMapCacheAdapter_cache___redArg___lam__0), 5, 4);
lean_closure_set(v___f_188_, 0, v_inst_182_);
lean_closure_set(v___f_188_, 1, v_inst_183_);
lean_closure_set(v___f_188_, 2, v_a_185_);
lean_closure_set(v___f_188_, 3, v_b_186_);
v___x_189_ = lean_apply_1(v_modifyCache_187_, v___f_188_);
return v___x_189_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadHashMapCacheAdapter_instMonadCacheOfMonad___redArg(lean_object* v_inst_190_, lean_object* v_inst_191_, lean_object* v_inst_192_, lean_object* v_inst_193_){
_start:
{
lean_object* v___x_194_; lean_object* v___x_195_; lean_object* v___x_196_; 
lean_inc_ref(v_inst_193_);
lean_inc_ref(v_inst_191_);
lean_inc_ref(v_inst_190_);
v___x_194_ = lean_alloc_closure((void*)(l_Lean_MonadHashMapCacheAdapter_findCached_x3f), 8, 7);
lean_closure_set(v___x_194_, 0, lean_box(0));
lean_closure_set(v___x_194_, 1, lean_box(0));
lean_closure_set(v___x_194_, 2, lean_box(0));
lean_closure_set(v___x_194_, 3, v_inst_190_);
lean_closure_set(v___x_194_, 4, v_inst_191_);
lean_closure_set(v___x_194_, 5, v_inst_192_);
lean_closure_set(v___x_194_, 6, v_inst_193_);
v___x_195_ = lean_alloc_closure((void*)(l_Lean_MonadHashMapCacheAdapter_cache), 8, 6);
lean_closure_set(v___x_195_, 0, lean_box(0));
lean_closure_set(v___x_195_, 1, lean_box(0));
lean_closure_set(v___x_195_, 2, lean_box(0));
lean_closure_set(v___x_195_, 3, v_inst_190_);
lean_closure_set(v___x_195_, 4, v_inst_191_);
lean_closure_set(v___x_195_, 5, v_inst_193_);
v___x_196_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_196_, 0, v___x_194_);
lean_ctor_set(v___x_196_, 1, v___x_195_);
return v___x_196_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadHashMapCacheAdapter_instMonadCacheOfMonad(lean_object* v_00_u03b1_197_, lean_object* v_00_u03b2_198_, lean_object* v_m_199_, lean_object* v_inst_200_, lean_object* v_inst_201_, lean_object* v_inst_202_, lean_object* v_inst_203_){
_start:
{
lean_object* v___x_204_; 
v___x_204_ = l_Lean_MonadHashMapCacheAdapter_instMonadCacheOfMonad___redArg(v_inst_200_, v_inst_201_, v_inst_202_, v_inst_203_);
return v___x_204_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadHashMapCacheAdapter___redArg___lam__0(lean_object* v_f_205_, lean_object* v_s_206_){
_start:
{
lean_object* v___x_207_; lean_object* v___x_208_; lean_object* v___x_209_; 
v___x_207_ = lean_box(0);
v___x_208_ = lean_apply_1(v_f_205_, v_s_206_);
v___x_209_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_209_, 0, v___x_207_);
lean_ctor_set(v___x_209_, 1, v___x_208_);
return v___x_209_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadHashMapCacheAdapter___redArg___lam__1(lean_object* v_inst_210_, lean_object* v_f_211_, lean_object* v___y_212_){
_start:
{
lean_object* v___f_213_; lean_object* v___x_214_; lean_object* v___x_215_; 
v___f_213_ = lean_alloc_closure((void*)(l_Lean_MonadCacheT_instMonadHashMapCacheAdapter___redArg___lam__0), 2, 1);
lean_closure_set(v___f_213_, 0, v_f_211_);
lean_inc(v___y_212_);
v___x_214_ = lean_alloc_closure((void*)(l_ST_Prim_Ref_modifyGetUnsafe___boxed), 6, 5);
lean_closure_set(v___x_214_, 0, lean_box(0));
lean_closure_set(v___x_214_, 1, lean_box(0));
lean_closure_set(v___x_214_, 2, lean_box(0));
lean_closure_set(v___x_214_, 3, v___y_212_);
lean_closure_set(v___x_214_, 4, v___f_213_);
v___x_215_ = lean_apply_2(v_inst_210_, lean_box(0), v___x_214_);
return v___x_215_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadHashMapCacheAdapter___redArg___lam__1___boxed(lean_object* v_inst_216_, lean_object* v_f_217_, lean_object* v___y_218_){
_start:
{
lean_object* v_res_219_; 
v_res_219_ = l_Lean_MonadCacheT_instMonadHashMapCacheAdapter___redArg___lam__1(v_inst_216_, v_f_217_, v___y_218_);
lean_dec(v___y_218_);
return v_res_219_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadHashMapCacheAdapter___redArg(lean_object* v_inst_220_){
_start:
{
lean_object* v___f_221_; lean_object* v___x_222_; lean_object* v___x_223_; 
lean_inc(v_inst_220_);
v___f_221_ = lean_alloc_closure((void*)(l_Lean_MonadCacheT_instMonadHashMapCacheAdapter___redArg___lam__1___boxed), 3, 1);
lean_closure_set(v___f_221_, 0, v_inst_220_);
v___x_222_ = lean_alloc_closure((void*)(l_StateRefT_x27_get___boxed), 5, 4);
lean_closure_set(v___x_222_, 0, lean_box(0));
lean_closure_set(v___x_222_, 1, lean_box(0));
lean_closure_set(v___x_222_, 2, lean_box(0));
lean_closure_set(v___x_222_, 3, v_inst_220_);
v___x_223_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_223_, 0, v___x_222_);
lean_ctor_set(v___x_223_, 1, v___f_221_);
return v___x_223_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadHashMapCacheAdapter(lean_object* v_00_u03c9_224_, lean_object* v_00_u03b1_225_, lean_object* v_00_u03b2_226_, lean_object* v_m_227_, lean_object* v_inst_228_, lean_object* v_inst_229_, lean_object* v_inst_230_, lean_object* v_inst_231_){
_start:
{
lean_object* v___x_232_; 
v___x_232_ = l_Lean_MonadCacheT_instMonadHashMapCacheAdapter___redArg(v_inst_231_);
return v___x_232_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadHashMapCacheAdapter___boxed(lean_object* v_00_u03c9_233_, lean_object* v_00_u03b1_234_, lean_object* v_00_u03b2_235_, lean_object* v_m_236_, lean_object* v_inst_237_, lean_object* v_inst_238_, lean_object* v_inst_239_, lean_object* v_inst_240_){
_start:
{
lean_object* v_res_241_; 
v_res_241_ = l_Lean_MonadCacheT_instMonadHashMapCacheAdapter(v_00_u03c9_233_, v_00_u03b1_234_, v_00_u03b2_235_, v_m_236_, v_inst_237_, v_inst_238_, v_inst_239_, v_inst_240_);
lean_dec_ref(v_inst_239_);
lean_dec_ref(v_inst_238_);
return v_res_241_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_run___redArg___lam__0(lean_object* v_a_242_, lean_object* v_toPure_243_, lean_object* v_s_244_){
_start:
{
lean_object* v___x_245_; lean_object* v___x_246_; 
v___x_245_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_245_, 0, v_a_242_);
lean_ctor_set(v___x_245_, 1, v_s_244_);
v___x_246_ = lean_apply_2(v_toPure_243_, lean_box(0), v___x_245_);
return v___x_246_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_run___redArg___lam__1(lean_object* v_toPure_247_, lean_object* v_ref_248_, lean_object* v_inst_249_, lean_object* v_toBind_250_, lean_object* v_a_251_){
_start:
{
lean_object* v___f_252_; lean_object* v___x_253_; lean_object* v___x_254_; lean_object* v___x_255_; 
v___f_252_ = lean_alloc_closure((void*)(l_Lean_MonadCacheT_run___redArg___lam__0), 3, 2);
lean_closure_set(v___f_252_, 0, v_a_251_);
lean_closure_set(v___f_252_, 1, v_toPure_247_);
v___x_253_ = lean_alloc_closure((void*)(l_ST_Prim_Ref_get___boxed), 4, 3);
lean_closure_set(v___x_253_, 0, lean_box(0));
lean_closure_set(v___x_253_, 1, lean_box(0));
lean_closure_set(v___x_253_, 2, v_ref_248_);
v___x_254_ = lean_apply_2(v_inst_249_, lean_box(0), v___x_253_);
v___x_255_ = lean_apply_4(v_toBind_250_, lean_box(0), lean_box(0), v___x_254_, v___f_252_);
return v___x_255_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_run___redArg___lam__2(lean_object* v_toPure_256_, lean_object* v_inst_257_, lean_object* v_toBind_258_, lean_object* v_x_259_, lean_object* v_ref_260_){
_start:
{
lean_object* v___f_261_; lean_object* v___x_262_; lean_object* v___x_263_; 
lean_inc(v_toBind_258_);
lean_inc(v_ref_260_);
v___f_261_ = lean_alloc_closure((void*)(l_Lean_MonadCacheT_run___redArg___lam__1), 5, 4);
lean_closure_set(v___f_261_, 0, v_toPure_256_);
lean_closure_set(v___f_261_, 1, v_ref_260_);
lean_closure_set(v___f_261_, 2, v_inst_257_);
lean_closure_set(v___f_261_, 3, v_toBind_258_);
v___x_262_ = lean_apply_1(v_x_259_, v_ref_260_);
v___x_263_ = lean_apply_4(v_toBind_258_, lean_box(0), lean_box(0), v___x_262_, v___f_261_);
return v___x_263_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_run___redArg___lam__3(lean_object* v_toPure_264_, lean_object* v_____x_265_){
_start:
{
lean_object* v_fst_266_; lean_object* v___x_267_; 
v_fst_266_ = lean_ctor_get(v_____x_265_, 0);
lean_inc(v_fst_266_);
lean_dec_ref(v_____x_265_);
v___x_267_ = lean_apply_2(v_toPure_264_, lean_box(0), v_fst_266_);
return v___x_267_;
}
}
static lean_object* _init_l_Lean_MonadCacheT_run___redArg___closed__0(void){
_start:
{
lean_object* v___x_268_; lean_object* v___x_269_; lean_object* v___x_270_; 
v___x_268_ = lean_box(0);
v___x_269_ = lean_unsigned_to_nat(16u);
v___x_270_ = lean_mk_array(v___x_269_, v___x_268_);
return v___x_270_;
}
}
static lean_object* _init_l_Lean_MonadCacheT_run___redArg___closed__1(void){
_start:
{
lean_object* v___x_271_; lean_object* v___x_272_; lean_object* v___x_273_; 
v___x_271_ = lean_obj_once(&l_Lean_MonadCacheT_run___redArg___closed__0, &l_Lean_MonadCacheT_run___redArg___closed__0_once, _init_l_Lean_MonadCacheT_run___redArg___closed__0);
v___x_272_ = lean_unsigned_to_nat(0u);
v___x_273_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_273_, 0, v___x_272_);
lean_ctor_set(v___x_273_, 1, v___x_271_);
return v___x_273_;
}
}
static lean_object* _init_l_Lean_MonadCacheT_run___redArg___closed__2(void){
_start:
{
lean_object* v___x_274_; lean_object* v___x_275_; 
v___x_274_ = lean_obj_once(&l_Lean_MonadCacheT_run___redArg___closed__1, &l_Lean_MonadCacheT_run___redArg___closed__1_once, _init_l_Lean_MonadCacheT_run___redArg___closed__1);
v___x_275_ = lean_alloc_closure((void*)(l_ST_Prim_mkRef___boxed), 4, 3);
lean_closure_set(v___x_275_, 0, lean_box(0));
lean_closure_set(v___x_275_, 1, lean_box(0));
lean_closure_set(v___x_275_, 2, v___x_274_);
return v___x_275_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_run___redArg(lean_object* v_inst_276_, lean_object* v_inst_277_, lean_object* v_x_278_){
_start:
{
lean_object* v_toApplicative_279_; lean_object* v_toBind_280_; lean_object* v_toPure_281_; lean_object* v___x_282_; lean_object* v___x_283_; lean_object* v___f_284_; lean_object* v___f_285_; lean_object* v___x_286_; lean_object* v___x_287_; 
v_toApplicative_279_ = lean_ctor_get(v_inst_277_, 0);
lean_inc_ref(v_toApplicative_279_);
v_toBind_280_ = lean_ctor_get(v_inst_277_, 1);
lean_inc_n(v_toBind_280_, 3);
lean_dec_ref(v_inst_277_);
v_toPure_281_ = lean_ctor_get(v_toApplicative_279_, 1);
lean_inc_n(v_toPure_281_, 2);
lean_dec_ref(v_toApplicative_279_);
v___x_282_ = lean_obj_once(&l_Lean_MonadCacheT_run___redArg___closed__2, &l_Lean_MonadCacheT_run___redArg___closed__2_once, _init_l_Lean_MonadCacheT_run___redArg___closed__2);
lean_inc(v_inst_276_);
v___x_283_ = lean_apply_2(v_inst_276_, lean_box(0), v___x_282_);
v___f_284_ = lean_alloc_closure((void*)(l_Lean_MonadCacheT_run___redArg___lam__2), 5, 4);
lean_closure_set(v___f_284_, 0, v_toPure_281_);
lean_closure_set(v___f_284_, 1, v_inst_276_);
lean_closure_set(v___f_284_, 2, v_toBind_280_);
lean_closure_set(v___f_284_, 3, v_x_278_);
v___f_285_ = lean_alloc_closure((void*)(l_Lean_MonadCacheT_run___redArg___lam__3), 2, 1);
lean_closure_set(v___f_285_, 0, v_toPure_281_);
v___x_286_ = lean_apply_4(v_toBind_280_, lean_box(0), lean_box(0), v___x_283_, v___f_284_);
v___x_287_ = lean_apply_4(v_toBind_280_, lean_box(0), lean_box(0), v___x_286_, v___f_285_);
return v___x_287_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_run(lean_object* v_00_u03c9_288_, lean_object* v_00_u03b1_289_, lean_object* v_00_u03b2_290_, lean_object* v_m_291_, lean_object* v_inst_292_, lean_object* v_inst_293_, lean_object* v_inst_294_, lean_object* v_inst_295_, lean_object* v_inst_296_, lean_object* v_00_u03c3_297_, lean_object* v_x_298_){
_start:
{
lean_object* v_toApplicative_299_; lean_object* v_toBind_300_; lean_object* v_toPure_301_; lean_object* v___x_302_; lean_object* v___x_303_; lean_object* v___f_304_; lean_object* v___f_305_; lean_object* v___x_306_; lean_object* v___x_307_; 
v_toApplicative_299_ = lean_ctor_get(v_inst_296_, 0);
lean_inc_ref(v_toApplicative_299_);
v_toBind_300_ = lean_ctor_get(v_inst_296_, 1);
lean_inc_n(v_toBind_300_, 3);
lean_dec_ref(v_inst_296_);
v_toPure_301_ = lean_ctor_get(v_toApplicative_299_, 1);
lean_inc_n(v_toPure_301_, 2);
lean_dec_ref(v_toApplicative_299_);
v___x_302_ = lean_obj_once(&l_Lean_MonadCacheT_run___redArg___closed__2, &l_Lean_MonadCacheT_run___redArg___closed__2_once, _init_l_Lean_MonadCacheT_run___redArg___closed__2);
lean_inc(v_inst_295_);
v___x_303_ = lean_apply_2(v_inst_295_, lean_box(0), v___x_302_);
v___f_304_ = lean_alloc_closure((void*)(l_Lean_MonadCacheT_run___redArg___lam__2), 5, 4);
lean_closure_set(v___f_304_, 0, v_toPure_301_);
lean_closure_set(v___f_304_, 1, v_inst_295_);
lean_closure_set(v___f_304_, 2, v_toBind_300_);
lean_closure_set(v___f_304_, 3, v_x_298_);
v___f_305_ = lean_alloc_closure((void*)(l_Lean_MonadCacheT_run___redArg___lam__3), 2, 1);
lean_closure_set(v___f_305_, 0, v_toPure_301_);
v___x_306_ = lean_apply_4(v_toBind_300_, lean_box(0), lean_box(0), v___x_303_, v___f_304_);
v___x_307_ = lean_apply_4(v_toBind_300_, lean_box(0), lean_box(0), v___x_306_, v___f_305_);
return v___x_307_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_run___boxed(lean_object* v_00_u03c9_308_, lean_object* v_00_u03b1_309_, lean_object* v_00_u03b2_310_, lean_object* v_m_311_, lean_object* v_inst_312_, lean_object* v_inst_313_, lean_object* v_inst_314_, lean_object* v_inst_315_, lean_object* v_inst_316_, lean_object* v_00_u03c3_317_, lean_object* v_x_318_){
_start:
{
lean_object* v_res_319_; 
v_res_319_ = l_Lean_MonadCacheT_run(v_00_u03c9_308_, v_00_u03b1_309_, v_00_u03b2_310_, v_m_311_, v_inst_312_, v_inst_313_, v_inst_314_, v_inst_315_, v_inst_316_, v_00_u03c3_317_, v_x_318_);
lean_dec_ref(v_inst_314_);
lean_dec_ref(v_inst_313_);
return v_res_319_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonad___aux__1___redArg(lean_object* v_inst_320_, lean_object* v_f_321_, lean_object* v_x_322_, lean_object* v___y_323_){
_start:
{
lean_object* v_toApplicative_324_; lean_object* v_toFunctor_325_; lean_object* v_map_326_; lean_object* v___x_327_; lean_object* v___x_328_; 
v_toApplicative_324_ = lean_ctor_get(v_inst_320_, 0);
lean_inc_ref(v_toApplicative_324_);
lean_dec_ref(v_inst_320_);
v_toFunctor_325_ = lean_ctor_get(v_toApplicative_324_, 0);
lean_inc_ref(v_toFunctor_325_);
lean_dec_ref(v_toApplicative_324_);
v_map_326_ = lean_ctor_get(v_toFunctor_325_, 0);
lean_inc(v_map_326_);
lean_dec_ref(v_toFunctor_325_);
lean_inc(v___y_323_);
v___x_327_ = lean_apply_1(v_x_322_, v___y_323_);
v___x_328_ = lean_apply_4(v_map_326_, lean_box(0), lean_box(0), v_f_321_, v___x_327_);
return v___x_328_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonad___aux__1___redArg___boxed(lean_object* v_inst_329_, lean_object* v_f_330_, lean_object* v_x_331_, lean_object* v___y_332_){
_start:
{
lean_object* v_res_333_; 
v_res_333_ = l_Lean_MonadCacheT_instMonad___aux__1___redArg(v_inst_329_, v_f_330_, v_x_331_, v___y_332_);
lean_dec(v___y_332_);
return v_res_333_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonad___aux__1(lean_object* v_00_u03c9_334_, lean_object* v_00_u03b1_335_, lean_object* v_00_u03b2_336_, lean_object* v_m_337_, lean_object* v_inst_338_, lean_object* v_inst_339_, lean_object* v_inst_340_, lean_object* v_inst_341_, lean_object* v_00_u03b1_342_, lean_object* v_00_u03b2_343_, lean_object* v_f_344_, lean_object* v_x_345_, lean_object* v___y_346_){
_start:
{
lean_object* v_toApplicative_347_; lean_object* v_toFunctor_348_; lean_object* v_map_349_; lean_object* v___x_350_; lean_object* v___x_351_; 
v_toApplicative_347_ = lean_ctor_get(v_inst_341_, 0);
lean_inc_ref(v_toApplicative_347_);
lean_dec_ref(v_inst_341_);
v_toFunctor_348_ = lean_ctor_get(v_toApplicative_347_, 0);
lean_inc_ref(v_toFunctor_348_);
lean_dec_ref(v_toApplicative_347_);
v_map_349_ = lean_ctor_get(v_toFunctor_348_, 0);
lean_inc(v_map_349_);
lean_dec_ref(v_toFunctor_348_);
lean_inc(v___y_346_);
v___x_350_ = lean_apply_1(v_x_345_, v___y_346_);
v___x_351_ = lean_apply_4(v_map_349_, lean_box(0), lean_box(0), v_f_344_, v___x_350_);
return v___x_351_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonad___aux__1___boxed(lean_object* v_00_u03c9_352_, lean_object* v_00_u03b1_353_, lean_object* v_00_u03b2_354_, lean_object* v_m_355_, lean_object* v_inst_356_, lean_object* v_inst_357_, lean_object* v_inst_358_, lean_object* v_inst_359_, lean_object* v_00_u03b1_360_, lean_object* v_00_u03b2_361_, lean_object* v_f_362_, lean_object* v_x_363_, lean_object* v___y_364_){
_start:
{
lean_object* v_res_365_; 
v_res_365_ = l_Lean_MonadCacheT_instMonad___aux__1(v_00_u03c9_352_, v_00_u03b1_353_, v_00_u03b2_354_, v_m_355_, v_inst_356_, v_inst_357_, v_inst_358_, v_inst_359_, v_00_u03b1_360_, v_00_u03b2_361_, v_f_362_, v_x_363_, v___y_364_);
lean_dec(v___y_364_);
lean_dec_ref(v_inst_358_);
lean_dec_ref(v_inst_357_);
return v_res_365_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonad___aux__3___redArg(lean_object* v_inst_366_, lean_object* v_a_367_, lean_object* v_x_368_, lean_object* v___y_369_){
_start:
{
lean_object* v_toApplicative_370_; lean_object* v_toFunctor_371_; lean_object* v_mapConst_372_; lean_object* v___x_373_; lean_object* v___x_374_; 
v_toApplicative_370_ = lean_ctor_get(v_inst_366_, 0);
lean_inc_ref(v_toApplicative_370_);
lean_dec_ref(v_inst_366_);
v_toFunctor_371_ = lean_ctor_get(v_toApplicative_370_, 0);
lean_inc_ref(v_toFunctor_371_);
lean_dec_ref(v_toApplicative_370_);
v_mapConst_372_ = lean_ctor_get(v_toFunctor_371_, 1);
lean_inc(v_mapConst_372_);
lean_dec_ref(v_toFunctor_371_);
lean_inc(v___y_369_);
v___x_373_ = lean_apply_1(v_x_368_, v___y_369_);
v___x_374_ = lean_apply_4(v_mapConst_372_, lean_box(0), lean_box(0), v_a_367_, v___x_373_);
return v___x_374_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonad___aux__3___redArg___boxed(lean_object* v_inst_375_, lean_object* v_a_376_, lean_object* v_x_377_, lean_object* v___y_378_){
_start:
{
lean_object* v_res_379_; 
v_res_379_ = l_Lean_MonadCacheT_instMonad___aux__3___redArg(v_inst_375_, v_a_376_, v_x_377_, v___y_378_);
lean_dec(v___y_378_);
return v_res_379_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonad___aux__3(lean_object* v_00_u03c9_380_, lean_object* v_00_u03b1_381_, lean_object* v_00_u03b2_382_, lean_object* v_m_383_, lean_object* v_inst_384_, lean_object* v_inst_385_, lean_object* v_inst_386_, lean_object* v_inst_387_, lean_object* v_00_u03b1_388_, lean_object* v_00_u03b2_389_, lean_object* v_a_390_, lean_object* v_x_391_, lean_object* v___y_392_){
_start:
{
lean_object* v_toApplicative_393_; lean_object* v_toFunctor_394_; lean_object* v_mapConst_395_; lean_object* v___x_396_; lean_object* v___x_397_; 
v_toApplicative_393_ = lean_ctor_get(v_inst_387_, 0);
lean_inc_ref(v_toApplicative_393_);
lean_dec_ref(v_inst_387_);
v_toFunctor_394_ = lean_ctor_get(v_toApplicative_393_, 0);
lean_inc_ref(v_toFunctor_394_);
lean_dec_ref(v_toApplicative_393_);
v_mapConst_395_ = lean_ctor_get(v_toFunctor_394_, 1);
lean_inc(v_mapConst_395_);
lean_dec_ref(v_toFunctor_394_);
lean_inc(v___y_392_);
v___x_396_ = lean_apply_1(v_x_391_, v___y_392_);
v___x_397_ = lean_apply_4(v_mapConst_395_, lean_box(0), lean_box(0), v_a_390_, v___x_396_);
return v___x_397_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonad___aux__3___boxed(lean_object* v_00_u03c9_398_, lean_object* v_00_u03b1_399_, lean_object* v_00_u03b2_400_, lean_object* v_m_401_, lean_object* v_inst_402_, lean_object* v_inst_403_, lean_object* v_inst_404_, lean_object* v_inst_405_, lean_object* v_00_u03b1_406_, lean_object* v_00_u03b2_407_, lean_object* v_a_408_, lean_object* v_x_409_, lean_object* v___y_410_){
_start:
{
lean_object* v_res_411_; 
v_res_411_ = l_Lean_MonadCacheT_instMonad___aux__3(v_00_u03c9_398_, v_00_u03b1_399_, v_00_u03b2_400_, v_m_401_, v_inst_402_, v_inst_403_, v_inst_404_, v_inst_405_, v_00_u03b1_406_, v_00_u03b2_407_, v_a_408_, v_x_409_, v___y_410_);
lean_dec(v___y_410_);
lean_dec_ref(v_inst_404_);
lean_dec_ref(v_inst_403_);
return v_res_411_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonad___aux__5___redArg(lean_object* v_inst_412_, lean_object* v_a_413_){
_start:
{
lean_object* v_toApplicative_414_; lean_object* v_toPure_415_; lean_object* v___x_416_; 
v_toApplicative_414_ = lean_ctor_get(v_inst_412_, 0);
lean_inc_ref(v_toApplicative_414_);
lean_dec_ref(v_inst_412_);
v_toPure_415_ = lean_ctor_get(v_toApplicative_414_, 1);
lean_inc(v_toPure_415_);
lean_dec_ref(v_toApplicative_414_);
v___x_416_ = lean_apply_2(v_toPure_415_, lean_box(0), v_a_413_);
return v___x_416_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonad___aux__5(lean_object* v_00_u03c9_417_, lean_object* v_00_u03b1_418_, lean_object* v_00_u03b2_419_, lean_object* v_m_420_, lean_object* v_inst_421_, lean_object* v_inst_422_, lean_object* v_inst_423_, lean_object* v_inst_424_, lean_object* v_00_u03b1_425_, lean_object* v_a_426_, lean_object* v___y_427_){
_start:
{
lean_object* v_toApplicative_428_; lean_object* v_toPure_429_; lean_object* v___x_430_; 
v_toApplicative_428_ = lean_ctor_get(v_inst_424_, 0);
lean_inc_ref(v_toApplicative_428_);
lean_dec_ref(v_inst_424_);
v_toPure_429_ = lean_ctor_get(v_toApplicative_428_, 1);
lean_inc(v_toPure_429_);
lean_dec_ref(v_toApplicative_428_);
v___x_430_ = lean_apply_2(v_toPure_429_, lean_box(0), v_a_426_);
return v___x_430_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonad___aux__5___boxed(lean_object* v_00_u03c9_431_, lean_object* v_00_u03b1_432_, lean_object* v_00_u03b2_433_, lean_object* v_m_434_, lean_object* v_inst_435_, lean_object* v_inst_436_, lean_object* v_inst_437_, lean_object* v_inst_438_, lean_object* v_00_u03b1_439_, lean_object* v_a_440_, lean_object* v___y_441_){
_start:
{
lean_object* v_res_442_; 
v_res_442_ = l_Lean_MonadCacheT_instMonad___aux__5(v_00_u03c9_431_, v_00_u03b1_432_, v_00_u03b2_433_, v_m_434_, v_inst_435_, v_inst_436_, v_inst_437_, v_inst_438_, v_00_u03b1_439_, v_a_440_, v___y_441_);
lean_dec(v___y_441_);
lean_dec_ref(v_inst_437_);
lean_dec_ref(v_inst_436_);
return v_res_442_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonad___aux__7___redArg___lam__0(lean_object* v_x_443_, lean_object* v___y_444_, lean_object* v_x_445_){
_start:
{
lean_object* v___x_446_; lean_object* v___x_447_; 
v___x_446_ = lean_box(0);
lean_inc(v___y_444_);
v___x_447_ = lean_apply_2(v_x_443_, v___x_446_, v___y_444_);
return v___x_447_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonad___aux__7___redArg___lam__0___boxed(lean_object* v_x_448_, lean_object* v___y_449_, lean_object* v_x_450_){
_start:
{
lean_object* v_res_451_; 
v_res_451_ = l_Lean_MonadCacheT_instMonad___aux__7___redArg___lam__0(v_x_448_, v___y_449_, v_x_450_);
lean_dec(v___y_449_);
return v_res_451_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonad___aux__7___redArg(lean_object* v_inst_452_, lean_object* v_f_453_, lean_object* v_x_454_, lean_object* v___y_455_){
_start:
{
lean_object* v_toApplicative_456_; lean_object* v_toSeq_457_; lean_object* v___f_458_; lean_object* v___x_459_; lean_object* v___x_460_; 
v_toApplicative_456_ = lean_ctor_get(v_inst_452_, 0);
lean_inc_ref(v_toApplicative_456_);
lean_dec_ref(v_inst_452_);
v_toSeq_457_ = lean_ctor_get(v_toApplicative_456_, 2);
lean_inc(v_toSeq_457_);
lean_dec_ref(v_toApplicative_456_);
lean_inc_n(v___y_455_, 2);
v___f_458_ = lean_alloc_closure((void*)(l_Lean_MonadCacheT_instMonad___aux__7___redArg___lam__0___boxed), 3, 2);
lean_closure_set(v___f_458_, 0, v_x_454_);
lean_closure_set(v___f_458_, 1, v___y_455_);
v___x_459_ = lean_apply_1(v_f_453_, v___y_455_);
v___x_460_ = lean_apply_4(v_toSeq_457_, lean_box(0), lean_box(0), v___x_459_, v___f_458_);
return v___x_460_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonad___aux__7___redArg___boxed(lean_object* v_inst_461_, lean_object* v_f_462_, lean_object* v_x_463_, lean_object* v___y_464_){
_start:
{
lean_object* v_res_465_; 
v_res_465_ = l_Lean_MonadCacheT_instMonad___aux__7___redArg(v_inst_461_, v_f_462_, v_x_463_, v___y_464_);
lean_dec(v___y_464_);
return v_res_465_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonad___aux__7(lean_object* v_00_u03c9_466_, lean_object* v_00_u03b1_467_, lean_object* v_00_u03b2_468_, lean_object* v_m_469_, lean_object* v_inst_470_, lean_object* v_inst_471_, lean_object* v_inst_472_, lean_object* v_inst_473_, lean_object* v_00_u03b1_474_, lean_object* v_00_u03b2_475_, lean_object* v_f_476_, lean_object* v_x_477_, lean_object* v___y_478_){
_start:
{
lean_object* v_toApplicative_479_; lean_object* v_toSeq_480_; lean_object* v___f_481_; lean_object* v___x_482_; lean_object* v___x_483_; 
v_toApplicative_479_ = lean_ctor_get(v_inst_473_, 0);
lean_inc_ref(v_toApplicative_479_);
lean_dec_ref(v_inst_473_);
v_toSeq_480_ = lean_ctor_get(v_toApplicative_479_, 2);
lean_inc(v_toSeq_480_);
lean_dec_ref(v_toApplicative_479_);
lean_inc_n(v___y_478_, 2);
v___f_481_ = lean_alloc_closure((void*)(l_Lean_MonadCacheT_instMonad___aux__7___redArg___lam__0___boxed), 3, 2);
lean_closure_set(v___f_481_, 0, v_x_477_);
lean_closure_set(v___f_481_, 1, v___y_478_);
v___x_482_ = lean_apply_1(v_f_476_, v___y_478_);
v___x_483_ = lean_apply_4(v_toSeq_480_, lean_box(0), lean_box(0), v___x_482_, v___f_481_);
return v___x_483_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonad___aux__7___boxed(lean_object* v_00_u03c9_484_, lean_object* v_00_u03b1_485_, lean_object* v_00_u03b2_486_, lean_object* v_m_487_, lean_object* v_inst_488_, lean_object* v_inst_489_, lean_object* v_inst_490_, lean_object* v_inst_491_, lean_object* v_00_u03b1_492_, lean_object* v_00_u03b2_493_, lean_object* v_f_494_, lean_object* v_x_495_, lean_object* v___y_496_){
_start:
{
lean_object* v_res_497_; 
v_res_497_ = l_Lean_MonadCacheT_instMonad___aux__7(v_00_u03c9_484_, v_00_u03b1_485_, v_00_u03b2_486_, v_m_487_, v_inst_488_, v_inst_489_, v_inst_490_, v_inst_491_, v_00_u03b1_492_, v_00_u03b2_493_, v_f_494_, v_x_495_, v___y_496_);
lean_dec(v___y_496_);
lean_dec_ref(v_inst_490_);
lean_dec_ref(v_inst_489_);
return v_res_497_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonad___aux__9___redArg___lam__0(lean_object* v_b_498_, lean_object* v___y_499_, lean_object* v_x_500_){
_start:
{
lean_object* v___x_501_; lean_object* v___x_502_; 
v___x_501_ = lean_box(0);
lean_inc(v___y_499_);
v___x_502_ = lean_apply_2(v_b_498_, v___x_501_, v___y_499_);
return v___x_502_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonad___aux__9___redArg___lam__0___boxed(lean_object* v_b_503_, lean_object* v___y_504_, lean_object* v_x_505_){
_start:
{
lean_object* v_res_506_; 
v_res_506_ = l_Lean_MonadCacheT_instMonad___aux__9___redArg___lam__0(v_b_503_, v___y_504_, v_x_505_);
lean_dec(v___y_504_);
return v_res_506_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonad___aux__9___redArg(lean_object* v_inst_507_, lean_object* v_a_508_, lean_object* v_b_509_, lean_object* v___y_510_){
_start:
{
lean_object* v_toApplicative_511_; lean_object* v_toSeqLeft_512_; lean_object* v___f_513_; lean_object* v___x_514_; lean_object* v___x_515_; 
v_toApplicative_511_ = lean_ctor_get(v_inst_507_, 0);
lean_inc_ref(v_toApplicative_511_);
lean_dec_ref(v_inst_507_);
v_toSeqLeft_512_ = lean_ctor_get(v_toApplicative_511_, 3);
lean_inc(v_toSeqLeft_512_);
lean_dec_ref(v_toApplicative_511_);
lean_inc_n(v___y_510_, 2);
v___f_513_ = lean_alloc_closure((void*)(l_Lean_MonadCacheT_instMonad___aux__9___redArg___lam__0___boxed), 3, 2);
lean_closure_set(v___f_513_, 0, v_b_509_);
lean_closure_set(v___f_513_, 1, v___y_510_);
v___x_514_ = lean_apply_1(v_a_508_, v___y_510_);
v___x_515_ = lean_apply_4(v_toSeqLeft_512_, lean_box(0), lean_box(0), v___x_514_, v___f_513_);
return v___x_515_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonad___aux__9___redArg___boxed(lean_object* v_inst_516_, lean_object* v_a_517_, lean_object* v_b_518_, lean_object* v___y_519_){
_start:
{
lean_object* v_res_520_; 
v_res_520_ = l_Lean_MonadCacheT_instMonad___aux__9___redArg(v_inst_516_, v_a_517_, v_b_518_, v___y_519_);
lean_dec(v___y_519_);
return v_res_520_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonad___aux__9(lean_object* v_00_u03c9_521_, lean_object* v_00_u03b1_522_, lean_object* v_00_u03b2_523_, lean_object* v_m_524_, lean_object* v_inst_525_, lean_object* v_inst_526_, lean_object* v_inst_527_, lean_object* v_inst_528_, lean_object* v_00_u03b1_529_, lean_object* v_00_u03b2_530_, lean_object* v_a_531_, lean_object* v_b_532_, lean_object* v___y_533_){
_start:
{
lean_object* v_toApplicative_534_; lean_object* v_toSeqLeft_535_; lean_object* v___f_536_; lean_object* v___x_537_; lean_object* v___x_538_; 
v_toApplicative_534_ = lean_ctor_get(v_inst_528_, 0);
lean_inc_ref(v_toApplicative_534_);
lean_dec_ref(v_inst_528_);
v_toSeqLeft_535_ = lean_ctor_get(v_toApplicative_534_, 3);
lean_inc(v_toSeqLeft_535_);
lean_dec_ref(v_toApplicative_534_);
lean_inc_n(v___y_533_, 2);
v___f_536_ = lean_alloc_closure((void*)(l_Lean_MonadCacheT_instMonad___aux__9___redArg___lam__0___boxed), 3, 2);
lean_closure_set(v___f_536_, 0, v_b_532_);
lean_closure_set(v___f_536_, 1, v___y_533_);
v___x_537_ = lean_apply_1(v_a_531_, v___y_533_);
v___x_538_ = lean_apply_4(v_toSeqLeft_535_, lean_box(0), lean_box(0), v___x_537_, v___f_536_);
return v___x_538_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonad___aux__9___boxed(lean_object* v_00_u03c9_539_, lean_object* v_00_u03b1_540_, lean_object* v_00_u03b2_541_, lean_object* v_m_542_, lean_object* v_inst_543_, lean_object* v_inst_544_, lean_object* v_inst_545_, lean_object* v_inst_546_, lean_object* v_00_u03b1_547_, lean_object* v_00_u03b2_548_, lean_object* v_a_549_, lean_object* v_b_550_, lean_object* v___y_551_){
_start:
{
lean_object* v_res_552_; 
v_res_552_ = l_Lean_MonadCacheT_instMonad___aux__9(v_00_u03c9_539_, v_00_u03b1_540_, v_00_u03b2_541_, v_m_542_, v_inst_543_, v_inst_544_, v_inst_545_, v_inst_546_, v_00_u03b1_547_, v_00_u03b2_548_, v_a_549_, v_b_550_, v___y_551_);
lean_dec(v___y_551_);
lean_dec_ref(v_inst_545_);
lean_dec_ref(v_inst_544_);
return v_res_552_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonad___aux__11___redArg(lean_object* v_inst_553_, lean_object* v_a_554_, lean_object* v_b_555_, lean_object* v___y_556_){
_start:
{
lean_object* v_toApplicative_557_; lean_object* v_toSeqRight_558_; lean_object* v___f_559_; lean_object* v___x_560_; lean_object* v___x_561_; 
v_toApplicative_557_ = lean_ctor_get(v_inst_553_, 0);
lean_inc_ref(v_toApplicative_557_);
lean_dec_ref(v_inst_553_);
v_toSeqRight_558_ = lean_ctor_get(v_toApplicative_557_, 4);
lean_inc(v_toSeqRight_558_);
lean_dec_ref(v_toApplicative_557_);
lean_inc_n(v___y_556_, 2);
v___f_559_ = lean_alloc_closure((void*)(l_Lean_MonadCacheT_instMonad___aux__9___redArg___lam__0___boxed), 3, 2);
lean_closure_set(v___f_559_, 0, v_b_555_);
lean_closure_set(v___f_559_, 1, v___y_556_);
v___x_560_ = lean_apply_1(v_a_554_, v___y_556_);
v___x_561_ = lean_apply_4(v_toSeqRight_558_, lean_box(0), lean_box(0), v___x_560_, v___f_559_);
return v___x_561_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonad___aux__11___redArg___boxed(lean_object* v_inst_562_, lean_object* v_a_563_, lean_object* v_b_564_, lean_object* v___y_565_){
_start:
{
lean_object* v_res_566_; 
v_res_566_ = l_Lean_MonadCacheT_instMonad___aux__11___redArg(v_inst_562_, v_a_563_, v_b_564_, v___y_565_);
lean_dec(v___y_565_);
return v_res_566_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonad___aux__11(lean_object* v_00_u03c9_567_, lean_object* v_00_u03b1_568_, lean_object* v_00_u03b2_569_, lean_object* v_m_570_, lean_object* v_inst_571_, lean_object* v_inst_572_, lean_object* v_inst_573_, lean_object* v_inst_574_, lean_object* v_00_u03b1_575_, lean_object* v_00_u03b2_576_, lean_object* v_a_577_, lean_object* v_b_578_, lean_object* v___y_579_){
_start:
{
lean_object* v_toApplicative_580_; lean_object* v_toSeqRight_581_; lean_object* v___f_582_; lean_object* v___x_583_; lean_object* v___x_584_; 
v_toApplicative_580_ = lean_ctor_get(v_inst_574_, 0);
lean_inc_ref(v_toApplicative_580_);
lean_dec_ref(v_inst_574_);
v_toSeqRight_581_ = lean_ctor_get(v_toApplicative_580_, 4);
lean_inc(v_toSeqRight_581_);
lean_dec_ref(v_toApplicative_580_);
lean_inc_n(v___y_579_, 2);
v___f_582_ = lean_alloc_closure((void*)(l_Lean_MonadCacheT_instMonad___aux__9___redArg___lam__0___boxed), 3, 2);
lean_closure_set(v___f_582_, 0, v_b_578_);
lean_closure_set(v___f_582_, 1, v___y_579_);
v___x_583_ = lean_apply_1(v_a_577_, v___y_579_);
v___x_584_ = lean_apply_4(v_toSeqRight_581_, lean_box(0), lean_box(0), v___x_583_, v___f_582_);
return v___x_584_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonad___aux__11___boxed(lean_object* v_00_u03c9_585_, lean_object* v_00_u03b1_586_, lean_object* v_00_u03b2_587_, lean_object* v_m_588_, lean_object* v_inst_589_, lean_object* v_inst_590_, lean_object* v_inst_591_, lean_object* v_inst_592_, lean_object* v_00_u03b1_593_, lean_object* v_00_u03b2_594_, lean_object* v_a_595_, lean_object* v_b_596_, lean_object* v___y_597_){
_start:
{
lean_object* v_res_598_; 
v_res_598_ = l_Lean_MonadCacheT_instMonad___aux__11(v_00_u03c9_585_, v_00_u03b1_586_, v_00_u03b2_587_, v_m_588_, v_inst_589_, v_inst_590_, v_inst_591_, v_inst_592_, v_00_u03b1_593_, v_00_u03b2_594_, v_a_595_, v_b_596_, v___y_597_);
lean_dec(v___y_597_);
lean_dec_ref(v_inst_591_);
lean_dec_ref(v_inst_590_);
return v_res_598_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonad___aux__13___redArg___lam__0(lean_object* v_f_599_, lean_object* v___y_600_, lean_object* v_a_601_){
_start:
{
lean_object* v___x_602_; 
lean_inc(v___y_600_);
v___x_602_ = lean_apply_2(v_f_599_, v_a_601_, v___y_600_);
return v___x_602_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonad___aux__13___redArg___lam__0___boxed(lean_object* v_f_603_, lean_object* v___y_604_, lean_object* v_a_605_){
_start:
{
lean_object* v_res_606_; 
v_res_606_ = l_Lean_MonadCacheT_instMonad___aux__13___redArg___lam__0(v_f_603_, v___y_604_, v_a_605_);
lean_dec(v___y_604_);
return v_res_606_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonad___aux__13___redArg(lean_object* v_inst_607_, lean_object* v_x_608_, lean_object* v_f_609_, lean_object* v___y_610_){
_start:
{
lean_object* v_toBind_611_; lean_object* v___f_612_; lean_object* v___x_613_; lean_object* v___x_614_; 
v_toBind_611_ = lean_ctor_get(v_inst_607_, 1);
lean_inc(v_toBind_611_);
lean_dec_ref(v_inst_607_);
lean_inc_n(v___y_610_, 2);
v___f_612_ = lean_alloc_closure((void*)(l_Lean_MonadCacheT_instMonad___aux__13___redArg___lam__0___boxed), 3, 2);
lean_closure_set(v___f_612_, 0, v_f_609_);
lean_closure_set(v___f_612_, 1, v___y_610_);
v___x_613_ = lean_apply_1(v_x_608_, v___y_610_);
v___x_614_ = lean_apply_4(v_toBind_611_, lean_box(0), lean_box(0), v___x_613_, v___f_612_);
return v___x_614_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonad___aux__13___redArg___boxed(lean_object* v_inst_615_, lean_object* v_x_616_, lean_object* v_f_617_, lean_object* v___y_618_){
_start:
{
lean_object* v_res_619_; 
v_res_619_ = l_Lean_MonadCacheT_instMonad___aux__13___redArg(v_inst_615_, v_x_616_, v_f_617_, v___y_618_);
lean_dec(v___y_618_);
return v_res_619_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonad___aux__13(lean_object* v_00_u03c9_620_, lean_object* v_00_u03b1_621_, lean_object* v_00_u03b2_622_, lean_object* v_m_623_, lean_object* v_inst_624_, lean_object* v_inst_625_, lean_object* v_inst_626_, lean_object* v_inst_627_, lean_object* v_00_u03b1_628_, lean_object* v_00_u03b2_629_, lean_object* v_x_630_, lean_object* v_f_631_, lean_object* v___y_632_){
_start:
{
lean_object* v_toBind_633_; lean_object* v___f_634_; lean_object* v___x_635_; lean_object* v___x_636_; 
v_toBind_633_ = lean_ctor_get(v_inst_627_, 1);
lean_inc(v_toBind_633_);
lean_dec_ref(v_inst_627_);
lean_inc_n(v___y_632_, 2);
v___f_634_ = lean_alloc_closure((void*)(l_Lean_MonadCacheT_instMonad___aux__13___redArg___lam__0___boxed), 3, 2);
lean_closure_set(v___f_634_, 0, v_f_631_);
lean_closure_set(v___f_634_, 1, v___y_632_);
v___x_635_ = lean_apply_1(v_x_630_, v___y_632_);
v___x_636_ = lean_apply_4(v_toBind_633_, lean_box(0), lean_box(0), v___x_635_, v___f_634_);
return v___x_636_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonad___aux__13___boxed(lean_object* v_00_u03c9_637_, lean_object* v_00_u03b1_638_, lean_object* v_00_u03b2_639_, lean_object* v_m_640_, lean_object* v_inst_641_, lean_object* v_inst_642_, lean_object* v_inst_643_, lean_object* v_inst_644_, lean_object* v_00_u03b1_645_, lean_object* v_00_u03b2_646_, lean_object* v_x_647_, lean_object* v_f_648_, lean_object* v___y_649_){
_start:
{
lean_object* v_res_650_; 
v_res_650_ = l_Lean_MonadCacheT_instMonad___aux__13(v_00_u03c9_637_, v_00_u03b1_638_, v_00_u03b2_639_, v_m_640_, v_inst_641_, v_inst_642_, v_inst_643_, v_inst_644_, v_00_u03b1_645_, v_00_u03b2_646_, v_x_647_, v_f_648_, v___y_649_);
lean_dec(v___y_649_);
lean_dec_ref(v_inst_643_);
lean_dec_ref(v_inst_642_);
return v_res_650_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonad___redArg(lean_object* v_inst_651_, lean_object* v_inst_652_, lean_object* v_inst_653_, lean_object* v_inst_654_){
_start:
{
lean_object* v___x_655_; lean_object* v___x_656_; lean_object* v___x_657_; lean_object* v___x_658_; lean_object* v___x_659_; lean_object* v___x_660_; lean_object* v___x_661_; lean_object* v___x_662_; lean_object* v___x_663_; lean_object* v___x_664_; 
lean_inc_ref_n(v_inst_654_, 6);
lean_inc_ref_n(v_inst_653_, 6);
lean_inc_ref_n(v_inst_652_, 6);
v___x_655_ = lean_alloc_closure((void*)(l_Lean_MonadCacheT_instMonad___aux__1___boxed), 13, 8);
lean_closure_set(v___x_655_, 0, lean_box(0));
lean_closure_set(v___x_655_, 1, lean_box(0));
lean_closure_set(v___x_655_, 2, lean_box(0));
lean_closure_set(v___x_655_, 3, lean_box(0));
lean_closure_set(v___x_655_, 4, v_inst_651_);
lean_closure_set(v___x_655_, 5, v_inst_652_);
lean_closure_set(v___x_655_, 6, v_inst_653_);
lean_closure_set(v___x_655_, 7, v_inst_654_);
v___x_656_ = lean_alloc_closure((void*)(l_Lean_MonadCacheT_instMonad___aux__3___boxed), 13, 8);
lean_closure_set(v___x_656_, 0, lean_box(0));
lean_closure_set(v___x_656_, 1, lean_box(0));
lean_closure_set(v___x_656_, 2, lean_box(0));
lean_closure_set(v___x_656_, 3, lean_box(0));
lean_closure_set(v___x_656_, 4, v_inst_651_);
lean_closure_set(v___x_656_, 5, v_inst_652_);
lean_closure_set(v___x_656_, 6, v_inst_653_);
lean_closure_set(v___x_656_, 7, v_inst_654_);
v___x_657_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_657_, 0, v___x_655_);
lean_ctor_set(v___x_657_, 1, v___x_656_);
v___x_658_ = lean_alloc_closure((void*)(l_Lean_MonadCacheT_instMonad___aux__5___boxed), 11, 8);
lean_closure_set(v___x_658_, 0, lean_box(0));
lean_closure_set(v___x_658_, 1, lean_box(0));
lean_closure_set(v___x_658_, 2, lean_box(0));
lean_closure_set(v___x_658_, 3, lean_box(0));
lean_closure_set(v___x_658_, 4, v_inst_651_);
lean_closure_set(v___x_658_, 5, v_inst_652_);
lean_closure_set(v___x_658_, 6, v_inst_653_);
lean_closure_set(v___x_658_, 7, v_inst_654_);
v___x_659_ = lean_alloc_closure((void*)(l_Lean_MonadCacheT_instMonad___aux__7___boxed), 13, 8);
lean_closure_set(v___x_659_, 0, lean_box(0));
lean_closure_set(v___x_659_, 1, lean_box(0));
lean_closure_set(v___x_659_, 2, lean_box(0));
lean_closure_set(v___x_659_, 3, lean_box(0));
lean_closure_set(v___x_659_, 4, v_inst_651_);
lean_closure_set(v___x_659_, 5, v_inst_652_);
lean_closure_set(v___x_659_, 6, v_inst_653_);
lean_closure_set(v___x_659_, 7, v_inst_654_);
v___x_660_ = lean_alloc_closure((void*)(l_Lean_MonadCacheT_instMonad___aux__9___boxed), 13, 8);
lean_closure_set(v___x_660_, 0, lean_box(0));
lean_closure_set(v___x_660_, 1, lean_box(0));
lean_closure_set(v___x_660_, 2, lean_box(0));
lean_closure_set(v___x_660_, 3, lean_box(0));
lean_closure_set(v___x_660_, 4, v_inst_651_);
lean_closure_set(v___x_660_, 5, v_inst_652_);
lean_closure_set(v___x_660_, 6, v_inst_653_);
lean_closure_set(v___x_660_, 7, v_inst_654_);
v___x_661_ = lean_alloc_closure((void*)(l_Lean_MonadCacheT_instMonad___aux__11___boxed), 13, 8);
lean_closure_set(v___x_661_, 0, lean_box(0));
lean_closure_set(v___x_661_, 1, lean_box(0));
lean_closure_set(v___x_661_, 2, lean_box(0));
lean_closure_set(v___x_661_, 3, lean_box(0));
lean_closure_set(v___x_661_, 4, v_inst_651_);
lean_closure_set(v___x_661_, 5, v_inst_652_);
lean_closure_set(v___x_661_, 6, v_inst_653_);
lean_closure_set(v___x_661_, 7, v_inst_654_);
v___x_662_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_662_, 0, v___x_657_);
lean_ctor_set(v___x_662_, 1, v___x_658_);
lean_ctor_set(v___x_662_, 2, v___x_659_);
lean_ctor_set(v___x_662_, 3, v___x_660_);
lean_ctor_set(v___x_662_, 4, v___x_661_);
v___x_663_ = lean_alloc_closure((void*)(l_Lean_MonadCacheT_instMonad___aux__13___boxed), 13, 8);
lean_closure_set(v___x_663_, 0, lean_box(0));
lean_closure_set(v___x_663_, 1, lean_box(0));
lean_closure_set(v___x_663_, 2, lean_box(0));
lean_closure_set(v___x_663_, 3, lean_box(0));
lean_closure_set(v___x_663_, 4, v_inst_651_);
lean_closure_set(v___x_663_, 5, v_inst_652_);
lean_closure_set(v___x_663_, 6, v_inst_653_);
lean_closure_set(v___x_663_, 7, v_inst_654_);
v___x_664_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_664_, 0, v___x_662_);
lean_ctor_set(v___x_664_, 1, v___x_663_);
return v___x_664_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonad(lean_object* v_00_u03c9_665_, lean_object* v_00_u03b1_666_, lean_object* v_00_u03b2_667_, lean_object* v_m_668_, lean_object* v_inst_669_, lean_object* v_inst_670_, lean_object* v_inst_671_, lean_object* v_inst_672_){
_start:
{
lean_object* v___x_673_; 
v___x_673_ = l_Lean_MonadCacheT_instMonad___redArg(v_inst_669_, v_inst_670_, v_inst_671_, v_inst_672_);
return v___x_673_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadLift___aux__1___redArg(lean_object* v_x_674_){
_start:
{
lean_inc(v_x_674_);
return v_x_674_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadLift___aux__1___redArg___boxed(lean_object* v_x_675_){
_start:
{
lean_object* v_res_676_; 
v_res_676_ = l_Lean_MonadCacheT_instMonadLift___aux__1___redArg(v_x_675_);
lean_dec(v_x_675_);
return v_res_676_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadLift___aux__1(lean_object* v_00_u03c9_677_, lean_object* v_00_u03b1_678_, lean_object* v_00_u03b2_679_, lean_object* v_m_680_, lean_object* v_inst_681_, lean_object* v_inst_682_, lean_object* v_inst_683_, lean_object* v_00_u03b1_684_, lean_object* v_x_685_, lean_object* v___y_686_){
_start:
{
lean_inc(v_x_685_);
return v_x_685_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadLift___aux__1___boxed(lean_object* v_00_u03c9_687_, lean_object* v_00_u03b1_688_, lean_object* v_00_u03b2_689_, lean_object* v_m_690_, lean_object* v_inst_691_, lean_object* v_inst_692_, lean_object* v_inst_693_, lean_object* v_00_u03b1_694_, lean_object* v_x_695_, lean_object* v___y_696_){
_start:
{
lean_object* v_res_697_; 
v_res_697_ = l_Lean_MonadCacheT_instMonadLift___aux__1(v_00_u03c9_687_, v_00_u03b1_688_, v_00_u03b2_689_, v_m_690_, v_inst_691_, v_inst_692_, v_inst_693_, v_00_u03b1_694_, v_x_695_, v___y_696_);
lean_dec(v___y_696_);
lean_dec(v_x_695_);
lean_dec_ref(v_inst_693_);
lean_dec_ref(v_inst_692_);
return v_res_697_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadLift___redArg(lean_object* v_inst_698_, lean_object* v_inst_699_, lean_object* v_inst_700_){
_start:
{
lean_object* v___x_701_; 
v___x_701_ = lean_alloc_closure((void*)(l_Lean_MonadCacheT_instMonadLift___aux__1___boxed), 10, 7);
lean_closure_set(v___x_701_, 0, lean_box(0));
lean_closure_set(v___x_701_, 1, lean_box(0));
lean_closure_set(v___x_701_, 2, lean_box(0));
lean_closure_set(v___x_701_, 3, lean_box(0));
lean_closure_set(v___x_701_, 4, v_inst_698_);
lean_closure_set(v___x_701_, 5, v_inst_699_);
lean_closure_set(v___x_701_, 6, v_inst_700_);
return v___x_701_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadLift(lean_object* v_00_u03c9_702_, lean_object* v_00_u03b1_703_, lean_object* v_00_u03b2_704_, lean_object* v_m_705_, lean_object* v_inst_706_, lean_object* v_inst_707_, lean_object* v_inst_708_){
_start:
{
lean_object* v___x_709_; 
v___x_709_ = lean_alloc_closure((void*)(l_Lean_MonadCacheT_instMonadLift___aux__1___boxed), 10, 7);
lean_closure_set(v___x_709_, 0, lean_box(0));
lean_closure_set(v___x_709_, 1, lean_box(0));
lean_closure_set(v___x_709_, 2, lean_box(0));
lean_closure_set(v___x_709_, 3, lean_box(0));
lean_closure_set(v___x_709_, 4, v_inst_706_);
lean_closure_set(v___x_709_, 5, v_inst_707_);
lean_closure_set(v___x_709_, 6, v_inst_708_);
return v___x_709_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadExceptOf___aux__1___redArg(lean_object* v_inst_710_, lean_object* v_a_711_){
_start:
{
lean_object* v_throw_712_; lean_object* v___x_713_; 
v_throw_712_ = lean_ctor_get(v_inst_710_, 0);
lean_inc(v_throw_712_);
lean_dec_ref(v_inst_710_);
v___x_713_ = lean_apply_2(v_throw_712_, lean_box(0), v_a_711_);
return v___x_713_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadExceptOf___aux__1(lean_object* v_00_u03c9_714_, lean_object* v_00_u03b1_715_, lean_object* v_00_u03b2_716_, lean_object* v_m_717_, lean_object* v_inst_718_, lean_object* v_inst_719_, lean_object* v_inst_720_, lean_object* v_00_u03b5_721_, lean_object* v_inst_722_, lean_object* v_00_u03b1_723_, lean_object* v_a_724_, lean_object* v___y_725_){
_start:
{
lean_object* v_throw_726_; lean_object* v___x_727_; 
v_throw_726_ = lean_ctor_get(v_inst_722_, 0);
lean_inc(v_throw_726_);
lean_dec_ref(v_inst_722_);
v___x_727_ = lean_apply_2(v_throw_726_, lean_box(0), v_a_724_);
return v___x_727_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadExceptOf___aux__1___boxed(lean_object* v_00_u03c9_728_, lean_object* v_00_u03b1_729_, lean_object* v_00_u03b2_730_, lean_object* v_m_731_, lean_object* v_inst_732_, lean_object* v_inst_733_, lean_object* v_inst_734_, lean_object* v_00_u03b5_735_, lean_object* v_inst_736_, lean_object* v_00_u03b1_737_, lean_object* v_a_738_, lean_object* v___y_739_){
_start:
{
lean_object* v_res_740_; 
v_res_740_ = l_Lean_MonadCacheT_instMonadExceptOf___aux__1(v_00_u03c9_728_, v_00_u03b1_729_, v_00_u03b2_730_, v_m_731_, v_inst_732_, v_inst_733_, v_inst_734_, v_00_u03b5_735_, v_inst_736_, v_00_u03b1_737_, v_a_738_, v___y_739_);
lean_dec(v___y_739_);
lean_dec_ref(v_inst_734_);
lean_dec_ref(v_inst_733_);
return v_res_740_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadExceptOf___aux__3___redArg___lam__0(lean_object* v_c_741_, lean_object* v___y_742_, lean_object* v_e_743_){
_start:
{
lean_object* v___x_744_; 
lean_inc(v___y_742_);
v___x_744_ = lean_apply_2(v_c_741_, v_e_743_, v___y_742_);
return v___x_744_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadExceptOf___aux__3___redArg___lam__0___boxed(lean_object* v_c_745_, lean_object* v___y_746_, lean_object* v_e_747_){
_start:
{
lean_object* v_res_748_; 
v_res_748_ = l_Lean_MonadCacheT_instMonadExceptOf___aux__3___redArg___lam__0(v_c_745_, v___y_746_, v_e_747_);
lean_dec(v___y_746_);
return v_res_748_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadExceptOf___aux__3___redArg(lean_object* v_inst_749_, lean_object* v_x_750_, lean_object* v_c_751_, lean_object* v___y_752_){
_start:
{
lean_object* v_tryCatch_753_; lean_object* v___f_754_; lean_object* v___x_755_; lean_object* v___x_756_; 
v_tryCatch_753_ = lean_ctor_get(v_inst_749_, 1);
lean_inc(v_tryCatch_753_);
lean_dec_ref(v_inst_749_);
lean_inc_n(v___y_752_, 2);
v___f_754_ = lean_alloc_closure((void*)(l_Lean_MonadCacheT_instMonadExceptOf___aux__3___redArg___lam__0___boxed), 3, 2);
lean_closure_set(v___f_754_, 0, v_c_751_);
lean_closure_set(v___f_754_, 1, v___y_752_);
v___x_755_ = lean_apply_1(v_x_750_, v___y_752_);
v___x_756_ = lean_apply_3(v_tryCatch_753_, lean_box(0), v___x_755_, v___f_754_);
return v___x_756_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadExceptOf___aux__3___redArg___boxed(lean_object* v_inst_757_, lean_object* v_x_758_, lean_object* v_c_759_, lean_object* v___y_760_){
_start:
{
lean_object* v_res_761_; 
v_res_761_ = l_Lean_MonadCacheT_instMonadExceptOf___aux__3___redArg(v_inst_757_, v_x_758_, v_c_759_, v___y_760_);
lean_dec(v___y_760_);
return v_res_761_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadExceptOf___aux__3(lean_object* v_00_u03c9_762_, lean_object* v_00_u03b1_763_, lean_object* v_00_u03b2_764_, lean_object* v_m_765_, lean_object* v_inst_766_, lean_object* v_inst_767_, lean_object* v_inst_768_, lean_object* v_00_u03b5_769_, lean_object* v_inst_770_, lean_object* v_00_u03b1_771_, lean_object* v_x_772_, lean_object* v_c_773_, lean_object* v___y_774_){
_start:
{
lean_object* v_tryCatch_775_; lean_object* v___f_776_; lean_object* v___x_777_; lean_object* v___x_778_; 
v_tryCatch_775_ = lean_ctor_get(v_inst_770_, 1);
lean_inc(v_tryCatch_775_);
lean_dec_ref(v_inst_770_);
lean_inc_n(v___y_774_, 2);
v___f_776_ = lean_alloc_closure((void*)(l_Lean_MonadCacheT_instMonadExceptOf___aux__3___redArg___lam__0___boxed), 3, 2);
lean_closure_set(v___f_776_, 0, v_c_773_);
lean_closure_set(v___f_776_, 1, v___y_774_);
v___x_777_ = lean_apply_1(v_x_772_, v___y_774_);
v___x_778_ = lean_apply_3(v_tryCatch_775_, lean_box(0), v___x_777_, v___f_776_);
return v___x_778_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadExceptOf___aux__3___boxed(lean_object* v_00_u03c9_779_, lean_object* v_00_u03b1_780_, lean_object* v_00_u03b2_781_, lean_object* v_m_782_, lean_object* v_inst_783_, lean_object* v_inst_784_, lean_object* v_inst_785_, lean_object* v_00_u03b5_786_, lean_object* v_inst_787_, lean_object* v_00_u03b1_788_, lean_object* v_x_789_, lean_object* v_c_790_, lean_object* v___y_791_){
_start:
{
lean_object* v_res_792_; 
v_res_792_ = l_Lean_MonadCacheT_instMonadExceptOf___aux__3(v_00_u03c9_779_, v_00_u03b1_780_, v_00_u03b2_781_, v_m_782_, v_inst_783_, v_inst_784_, v_inst_785_, v_00_u03b5_786_, v_inst_787_, v_00_u03b1_788_, v_x_789_, v_c_790_, v___y_791_);
lean_dec(v___y_791_);
lean_dec_ref(v_inst_785_);
lean_dec_ref(v_inst_784_);
return v_res_792_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadExceptOf___redArg(lean_object* v_inst_793_, lean_object* v_inst_794_, lean_object* v_inst_795_, lean_object* v_inst_796_){
_start:
{
lean_object* v___x_797_; lean_object* v___x_798_; lean_object* v___x_799_; 
lean_inc_ref(v_inst_796_);
lean_inc_ref(v_inst_795_);
lean_inc_ref(v_inst_794_);
v___x_797_ = lean_alloc_closure((void*)(l_Lean_MonadCacheT_instMonadExceptOf___aux__1___boxed), 12, 9);
lean_closure_set(v___x_797_, 0, lean_box(0));
lean_closure_set(v___x_797_, 1, lean_box(0));
lean_closure_set(v___x_797_, 2, lean_box(0));
lean_closure_set(v___x_797_, 3, lean_box(0));
lean_closure_set(v___x_797_, 4, v_inst_793_);
lean_closure_set(v___x_797_, 5, v_inst_794_);
lean_closure_set(v___x_797_, 6, v_inst_795_);
lean_closure_set(v___x_797_, 7, lean_box(0));
lean_closure_set(v___x_797_, 8, v_inst_796_);
v___x_798_ = lean_alloc_closure((void*)(l_Lean_MonadCacheT_instMonadExceptOf___aux__3___boxed), 13, 9);
lean_closure_set(v___x_798_, 0, lean_box(0));
lean_closure_set(v___x_798_, 1, lean_box(0));
lean_closure_set(v___x_798_, 2, lean_box(0));
lean_closure_set(v___x_798_, 3, lean_box(0));
lean_closure_set(v___x_798_, 4, v_inst_793_);
lean_closure_set(v___x_798_, 5, v_inst_794_);
lean_closure_set(v___x_798_, 6, v_inst_795_);
lean_closure_set(v___x_798_, 7, lean_box(0));
lean_closure_set(v___x_798_, 8, v_inst_796_);
v___x_799_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_799_, 0, v___x_797_);
lean_ctor_set(v___x_799_, 1, v___x_798_);
return v___x_799_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadExceptOf(lean_object* v_00_u03c9_800_, lean_object* v_00_u03b1_801_, lean_object* v_00_u03b2_802_, lean_object* v_m_803_, lean_object* v_inst_804_, lean_object* v_inst_805_, lean_object* v_inst_806_, lean_object* v_00_u03b5_807_, lean_object* v_inst_808_){
_start:
{
lean_object* v___x_809_; 
v___x_809_ = l_Lean_MonadCacheT_instMonadExceptOf___redArg(v_inst_804_, v_inst_805_, v_inst_806_, v_inst_808_);
return v___x_809_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadControl___aux__1___redArg___lam__0(lean_object* v___y_810_, lean_object* v_00_u03b2_811_, lean_object* v_x_812_){
_start:
{
lean_object* v___x_813_; 
lean_inc(v___y_810_);
v___x_813_ = lean_apply_1(v_x_812_, v___y_810_);
return v___x_813_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadControl___aux__1___redArg___lam__0___boxed(lean_object* v___y_814_, lean_object* v_00_u03b2_815_, lean_object* v_x_816_){
_start:
{
lean_object* v_res_817_; 
v_res_817_ = l_Lean_MonadCacheT_instMonadControl___aux__1___redArg___lam__0(v___y_814_, v_00_u03b2_815_, v_x_816_);
lean_dec(v___y_814_);
return v_res_817_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadControl___aux__1___redArg(lean_object* v_f_818_, lean_object* v___y_819_){
_start:
{
lean_object* v___f_820_; lean_object* v___x_821_; 
lean_inc(v___y_819_);
v___f_820_ = lean_alloc_closure((void*)(l_Lean_MonadCacheT_instMonadControl___aux__1___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_820_, 0, v___y_819_);
v___x_821_ = lean_apply_1(v_f_818_, v___f_820_);
return v___x_821_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadControl___aux__1___redArg___boxed(lean_object* v_f_822_, lean_object* v___y_823_){
_start:
{
lean_object* v_res_824_; 
v_res_824_ = l_Lean_MonadCacheT_instMonadControl___aux__1___redArg(v_f_822_, v___y_823_);
lean_dec(v___y_823_);
return v_res_824_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadControl___aux__1(lean_object* v_00_u03c9_825_, lean_object* v_00_u03b1_826_, lean_object* v_00_u03b2_827_, lean_object* v_m_828_, lean_object* v_inst_829_, lean_object* v_inst_830_, lean_object* v_inst_831_, lean_object* v_00_u03b1_832_, lean_object* v_f_833_, lean_object* v___y_834_){
_start:
{
lean_object* v___f_835_; lean_object* v___x_836_; 
lean_inc(v___y_834_);
v___f_835_ = lean_alloc_closure((void*)(l_Lean_MonadCacheT_instMonadControl___aux__1___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_835_, 0, v___y_834_);
v___x_836_ = lean_apply_1(v_f_833_, v___f_835_);
return v___x_836_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadControl___aux__1___boxed(lean_object* v_00_u03c9_837_, lean_object* v_00_u03b1_838_, lean_object* v_00_u03b2_839_, lean_object* v_m_840_, lean_object* v_inst_841_, lean_object* v_inst_842_, lean_object* v_inst_843_, lean_object* v_00_u03b1_844_, lean_object* v_f_845_, lean_object* v___y_846_){
_start:
{
lean_object* v_res_847_; 
v_res_847_ = l_Lean_MonadCacheT_instMonadControl___aux__1(v_00_u03c9_837_, v_00_u03b1_838_, v_00_u03b2_839_, v_m_840_, v_inst_841_, v_inst_842_, v_inst_843_, v_00_u03b1_844_, v_f_845_, v___y_846_);
lean_dec(v___y_846_);
lean_dec_ref(v_inst_843_);
lean_dec_ref(v_inst_842_);
return v_res_847_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadControl___aux__3___redArg(lean_object* v_x_848_){
_start:
{
lean_inc(v_x_848_);
return v_x_848_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadControl___aux__3___redArg___boxed(lean_object* v_x_849_){
_start:
{
lean_object* v_res_850_; 
v_res_850_ = l_Lean_MonadCacheT_instMonadControl___aux__3___redArg(v_x_849_);
lean_dec(v_x_849_);
return v_res_850_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadControl___aux__3(lean_object* v_00_u03c9_851_, lean_object* v_00_u03b1_852_, lean_object* v_00_u03b2_853_, lean_object* v_m_854_, lean_object* v_inst_855_, lean_object* v_inst_856_, lean_object* v_inst_857_, lean_object* v_00_u03b1_858_, lean_object* v_x_859_, lean_object* v___y_860_){
_start:
{
lean_inc(v_x_859_);
return v_x_859_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadControl___aux__3___boxed(lean_object* v_00_u03c9_861_, lean_object* v_00_u03b1_862_, lean_object* v_00_u03b2_863_, lean_object* v_m_864_, lean_object* v_inst_865_, lean_object* v_inst_866_, lean_object* v_inst_867_, lean_object* v_00_u03b1_868_, lean_object* v_x_869_, lean_object* v___y_870_){
_start:
{
lean_object* v_res_871_; 
v_res_871_ = l_Lean_MonadCacheT_instMonadControl___aux__3(v_00_u03c9_861_, v_00_u03b1_862_, v_00_u03b2_863_, v_m_864_, v_inst_865_, v_inst_866_, v_inst_867_, v_00_u03b1_868_, v_x_869_, v___y_870_);
lean_dec(v___y_870_);
lean_dec(v_x_869_);
lean_dec_ref(v_inst_867_);
lean_dec_ref(v_inst_866_);
return v_res_871_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadControl___redArg(lean_object* v_inst_872_, lean_object* v_inst_873_, lean_object* v_inst_874_){
_start:
{
lean_object* v___x_875_; lean_object* v___x_876_; lean_object* v___x_877_; 
lean_inc_ref(v_inst_874_);
lean_inc_ref(v_inst_873_);
v___x_875_ = lean_alloc_closure((void*)(l_Lean_MonadCacheT_instMonadControl___aux__1___boxed), 10, 7);
lean_closure_set(v___x_875_, 0, lean_box(0));
lean_closure_set(v___x_875_, 1, lean_box(0));
lean_closure_set(v___x_875_, 2, lean_box(0));
lean_closure_set(v___x_875_, 3, lean_box(0));
lean_closure_set(v___x_875_, 4, v_inst_872_);
lean_closure_set(v___x_875_, 5, v_inst_873_);
lean_closure_set(v___x_875_, 6, v_inst_874_);
v___x_876_ = lean_alloc_closure((void*)(l_Lean_MonadCacheT_instMonadControl___aux__3___boxed), 10, 7);
lean_closure_set(v___x_876_, 0, lean_box(0));
lean_closure_set(v___x_876_, 1, lean_box(0));
lean_closure_set(v___x_876_, 2, lean_box(0));
lean_closure_set(v___x_876_, 3, lean_box(0));
lean_closure_set(v___x_876_, 4, v_inst_872_);
lean_closure_set(v___x_876_, 5, v_inst_873_);
lean_closure_set(v___x_876_, 6, v_inst_874_);
v___x_877_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_877_, 0, v___x_875_);
lean_ctor_set(v___x_877_, 1, v___x_876_);
return v___x_877_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadControl(lean_object* v_00_u03c9_878_, lean_object* v_00_u03b1_879_, lean_object* v_00_u03b2_880_, lean_object* v_m_881_, lean_object* v_inst_882_, lean_object* v_inst_883_, lean_object* v_inst_884_){
_start:
{
lean_object* v___x_885_; 
v___x_885_ = l_Lean_MonadCacheT_instMonadControl___redArg(v_inst_882_, v_inst_883_, v_inst_884_);
return v___x_885_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadFinally___aux__1___redArg___lam__0(lean_object* v_h_886_, lean_object* v___y_887_, lean_object* v_a_x3f_888_){
_start:
{
lean_object* v___x_889_; 
lean_inc(v___y_887_);
v___x_889_ = lean_apply_2(v_h_886_, v_a_x3f_888_, v___y_887_);
return v___x_889_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadFinally___aux__1___redArg___lam__0___boxed(lean_object* v_h_890_, lean_object* v___y_891_, lean_object* v_a_x3f_892_){
_start:
{
lean_object* v_res_893_; 
v_res_893_ = l_Lean_MonadCacheT_instMonadFinally___aux__1___redArg___lam__0(v_h_890_, v___y_891_, v_a_x3f_892_);
lean_dec(v___y_891_);
return v_res_893_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadFinally___aux__1___redArg(lean_object* v_inst_894_, lean_object* v_x_895_, lean_object* v_h_896_, lean_object* v___y_897_){
_start:
{
lean_object* v___f_898_; lean_object* v___x_899_; lean_object* v___x_900_; 
lean_inc_n(v___y_897_, 2);
v___f_898_ = lean_alloc_closure((void*)(l_Lean_MonadCacheT_instMonadFinally___aux__1___redArg___lam__0___boxed), 3, 2);
lean_closure_set(v___f_898_, 0, v_h_896_);
lean_closure_set(v___f_898_, 1, v___y_897_);
v___x_899_ = lean_apply_1(v_x_895_, v___y_897_);
v___x_900_ = lean_apply_4(v_inst_894_, lean_box(0), lean_box(0), v___x_899_, v___f_898_);
return v___x_900_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadFinally___aux__1___redArg___boxed(lean_object* v_inst_901_, lean_object* v_x_902_, lean_object* v_h_903_, lean_object* v___y_904_){
_start:
{
lean_object* v_res_905_; 
v_res_905_ = l_Lean_MonadCacheT_instMonadFinally___aux__1___redArg(v_inst_901_, v_x_902_, v_h_903_, v___y_904_);
lean_dec(v___y_904_);
return v_res_905_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadFinally___aux__1(lean_object* v_00_u03c9_906_, lean_object* v_00_u03b1_907_, lean_object* v_00_u03b2_908_, lean_object* v_m_909_, lean_object* v_inst_910_, lean_object* v_inst_911_, lean_object* v_inst_912_, lean_object* v_inst_913_, lean_object* v_00_u03b1_914_, lean_object* v_00_u03b2_915_, lean_object* v_x_916_, lean_object* v_h_917_, lean_object* v___y_918_){
_start:
{
lean_object* v___f_919_; lean_object* v___x_920_; lean_object* v___x_921_; 
lean_inc_n(v___y_918_, 2);
v___f_919_ = lean_alloc_closure((void*)(l_Lean_MonadCacheT_instMonadFinally___aux__1___redArg___lam__0___boxed), 3, 2);
lean_closure_set(v___f_919_, 0, v_h_917_);
lean_closure_set(v___f_919_, 1, v___y_918_);
v___x_920_ = lean_apply_1(v_x_916_, v___y_918_);
v___x_921_ = lean_apply_4(v_inst_913_, lean_box(0), lean_box(0), v___x_920_, v___f_919_);
return v___x_921_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadFinally___aux__1___boxed(lean_object* v_00_u03c9_922_, lean_object* v_00_u03b1_923_, lean_object* v_00_u03b2_924_, lean_object* v_m_925_, lean_object* v_inst_926_, lean_object* v_inst_927_, lean_object* v_inst_928_, lean_object* v_inst_929_, lean_object* v_00_u03b1_930_, lean_object* v_00_u03b2_931_, lean_object* v_x_932_, lean_object* v_h_933_, lean_object* v___y_934_){
_start:
{
lean_object* v_res_935_; 
v_res_935_ = l_Lean_MonadCacheT_instMonadFinally___aux__1(v_00_u03c9_922_, v_00_u03b1_923_, v_00_u03b2_924_, v_m_925_, v_inst_926_, v_inst_927_, v_inst_928_, v_inst_929_, v_00_u03b1_930_, v_00_u03b2_931_, v_x_932_, v_h_933_, v___y_934_);
lean_dec(v___y_934_);
lean_dec_ref(v_inst_928_);
lean_dec_ref(v_inst_927_);
return v_res_935_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadFinally___redArg(lean_object* v_inst_936_, lean_object* v_inst_937_, lean_object* v_inst_938_, lean_object* v_inst_939_){
_start:
{
lean_object* v___x_940_; 
v___x_940_ = lean_alloc_closure((void*)(l_Lean_MonadCacheT_instMonadFinally___aux__1___boxed), 13, 8);
lean_closure_set(v___x_940_, 0, lean_box(0));
lean_closure_set(v___x_940_, 1, lean_box(0));
lean_closure_set(v___x_940_, 2, lean_box(0));
lean_closure_set(v___x_940_, 3, lean_box(0));
lean_closure_set(v___x_940_, 4, v_inst_936_);
lean_closure_set(v___x_940_, 5, v_inst_937_);
lean_closure_set(v___x_940_, 6, v_inst_938_);
lean_closure_set(v___x_940_, 7, v_inst_939_);
return v___x_940_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadFinally(lean_object* v_00_u03c9_941_, lean_object* v_00_u03b1_942_, lean_object* v_00_u03b2_943_, lean_object* v_m_944_, lean_object* v_inst_945_, lean_object* v_inst_946_, lean_object* v_inst_947_, lean_object* v_inst_948_){
_start:
{
lean_object* v___x_949_; 
v___x_949_ = lean_alloc_closure((void*)(l_Lean_MonadCacheT_instMonadFinally___aux__1___boxed), 13, 8);
lean_closure_set(v___x_949_, 0, lean_box(0));
lean_closure_set(v___x_949_, 1, lean_box(0));
lean_closure_set(v___x_949_, 2, lean_box(0));
lean_closure_set(v___x_949_, 3, lean_box(0));
lean_closure_set(v___x_949_, 4, v_inst_945_);
lean_closure_set(v___x_949_, 5, v_inst_946_);
lean_closure_set(v___x_949_, 6, v_inst_947_);
lean_closure_set(v___x_949_, 7, v_inst_948_);
return v___x_949_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadRef___aux__1___redArg(lean_object* v_inst_950_){
_start:
{
lean_object* v_getRef_951_; 
v_getRef_951_ = lean_ctor_get(v_inst_950_, 0);
lean_inc(v_getRef_951_);
return v_getRef_951_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadRef___aux__1___redArg___boxed(lean_object* v_inst_952_){
_start:
{
lean_object* v_res_953_; 
v_res_953_ = l_Lean_MonadCacheT_instMonadRef___aux__1___redArg(v_inst_952_);
lean_dec_ref(v_inst_952_);
return v_res_953_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadRef___aux__1(lean_object* v_00_u03c9_954_, lean_object* v_00_u03b1_955_, lean_object* v_00_u03b2_956_, lean_object* v_m_957_, lean_object* v_inst_958_, lean_object* v_inst_959_, lean_object* v_inst_960_, lean_object* v_inst_961_, lean_object* v___y_962_){
_start:
{
lean_object* v_getRef_963_; 
v_getRef_963_ = lean_ctor_get(v_inst_961_, 0);
lean_inc(v_getRef_963_);
return v_getRef_963_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadRef___aux__1___boxed(lean_object* v_00_u03c9_964_, lean_object* v_00_u03b1_965_, lean_object* v_00_u03b2_966_, lean_object* v_m_967_, lean_object* v_inst_968_, lean_object* v_inst_969_, lean_object* v_inst_970_, lean_object* v_inst_971_, lean_object* v___y_972_){
_start:
{
lean_object* v_res_973_; 
v_res_973_ = l_Lean_MonadCacheT_instMonadRef___aux__1(v_00_u03c9_964_, v_00_u03b1_965_, v_00_u03b2_966_, v_m_967_, v_inst_968_, v_inst_969_, v_inst_970_, v_inst_971_, v___y_972_);
lean_dec(v___y_972_);
lean_dec_ref(v_inst_971_);
lean_dec_ref(v_inst_970_);
lean_dec_ref(v_inst_969_);
return v_res_973_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadRef___aux__3___redArg(lean_object* v_inst_974_, lean_object* v_ref_975_, lean_object* v_x_976_, lean_object* v___y_977_){
_start:
{
lean_object* v_withRef_978_; lean_object* v___x_979_; lean_object* v___x_980_; 
v_withRef_978_ = lean_ctor_get(v_inst_974_, 1);
lean_inc(v_withRef_978_);
lean_dec_ref(v_inst_974_);
lean_inc(v___y_977_);
v___x_979_ = lean_apply_1(v_x_976_, v___y_977_);
v___x_980_ = lean_apply_3(v_withRef_978_, lean_box(0), v_ref_975_, v___x_979_);
return v___x_980_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadRef___aux__3___redArg___boxed(lean_object* v_inst_981_, lean_object* v_ref_982_, lean_object* v_x_983_, lean_object* v___y_984_){
_start:
{
lean_object* v_res_985_; 
v_res_985_ = l_Lean_MonadCacheT_instMonadRef___aux__3___redArg(v_inst_981_, v_ref_982_, v_x_983_, v___y_984_);
lean_dec(v___y_984_);
return v_res_985_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadRef___aux__3(lean_object* v_00_u03c9_986_, lean_object* v_00_u03b1_987_, lean_object* v_00_u03b2_988_, lean_object* v_m_989_, lean_object* v_inst_990_, lean_object* v_inst_991_, lean_object* v_inst_992_, lean_object* v_inst_993_, lean_object* v_00_u03b1_994_, lean_object* v_ref_995_, lean_object* v_x_996_, lean_object* v___y_997_){
_start:
{
lean_object* v_withRef_998_; lean_object* v___x_999_; lean_object* v___x_1000_; 
v_withRef_998_ = lean_ctor_get(v_inst_993_, 1);
lean_inc(v_withRef_998_);
lean_dec_ref(v_inst_993_);
lean_inc(v___y_997_);
v___x_999_ = lean_apply_1(v_x_996_, v___y_997_);
v___x_1000_ = lean_apply_3(v_withRef_998_, lean_box(0), v_ref_995_, v___x_999_);
return v___x_1000_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadRef___aux__3___boxed(lean_object* v_00_u03c9_1001_, lean_object* v_00_u03b1_1002_, lean_object* v_00_u03b2_1003_, lean_object* v_m_1004_, lean_object* v_inst_1005_, lean_object* v_inst_1006_, lean_object* v_inst_1007_, lean_object* v_inst_1008_, lean_object* v_00_u03b1_1009_, lean_object* v_ref_1010_, lean_object* v_x_1011_, lean_object* v___y_1012_){
_start:
{
lean_object* v_res_1013_; 
v_res_1013_ = l_Lean_MonadCacheT_instMonadRef___aux__3(v_00_u03c9_1001_, v_00_u03b1_1002_, v_00_u03b2_1003_, v_m_1004_, v_inst_1005_, v_inst_1006_, v_inst_1007_, v_inst_1008_, v_00_u03b1_1009_, v_ref_1010_, v_x_1011_, v___y_1012_);
lean_dec(v___y_1012_);
lean_dec_ref(v_inst_1007_);
lean_dec_ref(v_inst_1006_);
return v_res_1013_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadRef___redArg(lean_object* v_inst_1014_, lean_object* v_inst_1015_, lean_object* v_inst_1016_, lean_object* v_inst_1017_){
_start:
{
lean_object* v___x_1018_; lean_object* v___x_1019_; lean_object* v___x_1020_; 
lean_inc_ref(v_inst_1017_);
lean_inc_ref(v_inst_1016_);
lean_inc_ref(v_inst_1015_);
v___x_1018_ = lean_alloc_closure((void*)(l_Lean_MonadCacheT_instMonadRef___aux__1___boxed), 9, 8);
lean_closure_set(v___x_1018_, 0, lean_box(0));
lean_closure_set(v___x_1018_, 1, lean_box(0));
lean_closure_set(v___x_1018_, 2, lean_box(0));
lean_closure_set(v___x_1018_, 3, lean_box(0));
lean_closure_set(v___x_1018_, 4, v_inst_1014_);
lean_closure_set(v___x_1018_, 5, v_inst_1015_);
lean_closure_set(v___x_1018_, 6, v_inst_1016_);
lean_closure_set(v___x_1018_, 7, v_inst_1017_);
v___x_1019_ = lean_alloc_closure((void*)(l_Lean_MonadCacheT_instMonadRef___aux__3___boxed), 12, 8);
lean_closure_set(v___x_1019_, 0, lean_box(0));
lean_closure_set(v___x_1019_, 1, lean_box(0));
lean_closure_set(v___x_1019_, 2, lean_box(0));
lean_closure_set(v___x_1019_, 3, lean_box(0));
lean_closure_set(v___x_1019_, 4, v_inst_1014_);
lean_closure_set(v___x_1019_, 5, v_inst_1015_);
lean_closure_set(v___x_1019_, 6, v_inst_1016_);
lean_closure_set(v___x_1019_, 7, v_inst_1017_);
v___x_1020_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1020_, 0, v___x_1018_);
lean_ctor_set(v___x_1020_, 1, v___x_1019_);
return v___x_1020_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadRef(lean_object* v_00_u03c9_1021_, lean_object* v_00_u03b1_1022_, lean_object* v_00_u03b2_1023_, lean_object* v_m_1024_, lean_object* v_inst_1025_, lean_object* v_inst_1026_, lean_object* v_inst_1027_, lean_object* v_inst_1028_){
_start:
{
lean_object* v___x_1029_; 
v___x_1029_ = l_Lean_MonadCacheT_instMonadRef___redArg(v_inst_1025_, v_inst_1026_, v_inst_1027_, v_inst_1028_);
return v___x_1029_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instAlternative___aux__1___redArg(lean_object* v_inst_1030_){
_start:
{
lean_object* v_failure_1031_; lean_object* v___x_1032_; 
v_failure_1031_ = lean_ctor_get(v_inst_1030_, 1);
lean_inc(v_failure_1031_);
lean_dec_ref(v_inst_1030_);
v___x_1032_ = lean_apply_1(v_failure_1031_, lean_box(0));
return v___x_1032_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instAlternative___aux__1(lean_object* v_00_u03c9_1033_, lean_object* v_00_u03b1_1034_, lean_object* v_00_u03b2_1035_, lean_object* v_m_1036_, lean_object* v_inst_1037_, lean_object* v_inst_1038_, lean_object* v_inst_1039_, lean_object* v_inst_1040_, lean_object* v_00_u03b1_1041_, lean_object* v___y_1042_){
_start:
{
lean_object* v_failure_1043_; lean_object* v___x_1044_; 
v_failure_1043_ = lean_ctor_get(v_inst_1040_, 1);
lean_inc(v_failure_1043_);
lean_dec_ref(v_inst_1040_);
v___x_1044_ = lean_apply_1(v_failure_1043_, lean_box(0));
return v___x_1044_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instAlternative___aux__1___boxed(lean_object* v_00_u03c9_1045_, lean_object* v_00_u03b1_1046_, lean_object* v_00_u03b2_1047_, lean_object* v_m_1048_, lean_object* v_inst_1049_, lean_object* v_inst_1050_, lean_object* v_inst_1051_, lean_object* v_inst_1052_, lean_object* v_00_u03b1_1053_, lean_object* v___y_1054_){
_start:
{
lean_object* v_res_1055_; 
v_res_1055_ = l_Lean_MonadCacheT_instAlternative___aux__1(v_00_u03c9_1045_, v_00_u03b1_1046_, v_00_u03b2_1047_, v_m_1048_, v_inst_1049_, v_inst_1050_, v_inst_1051_, v_inst_1052_, v_00_u03b1_1053_, v___y_1054_);
lean_dec(v___y_1054_);
lean_dec_ref(v_inst_1051_);
lean_dec_ref(v_inst_1050_);
return v_res_1055_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instAlternative___aux__3___redArg___lam__0(lean_object* v_x_u2082_1056_, lean_object* v___y_1057_, lean_object* v_x_1058_){
_start:
{
lean_object* v___x_1059_; lean_object* v___x_1060_; 
v___x_1059_ = lean_box(0);
lean_inc(v___y_1057_);
v___x_1060_ = lean_apply_2(v_x_u2082_1056_, v___x_1059_, v___y_1057_);
return v___x_1060_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instAlternative___aux__3___redArg___lam__0___boxed(lean_object* v_x_u2082_1061_, lean_object* v___y_1062_, lean_object* v_x_1063_){
_start:
{
lean_object* v_res_1064_; 
v_res_1064_ = l_Lean_MonadCacheT_instAlternative___aux__3___redArg___lam__0(v_x_u2082_1061_, v___y_1062_, v_x_1063_);
lean_dec(v___y_1062_);
return v_res_1064_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instAlternative___aux__3___redArg(lean_object* v_inst_1065_, lean_object* v_x_u2081_1066_, lean_object* v_x_u2082_1067_, lean_object* v___y_1068_){
_start:
{
lean_object* v_orElse_1069_; lean_object* v___f_1070_; lean_object* v___x_1071_; lean_object* v___x_1072_; 
v_orElse_1069_ = lean_ctor_get(v_inst_1065_, 2);
lean_inc(v_orElse_1069_);
lean_dec_ref(v_inst_1065_);
lean_inc_n(v___y_1068_, 2);
v___f_1070_ = lean_alloc_closure((void*)(l_Lean_MonadCacheT_instAlternative___aux__3___redArg___lam__0___boxed), 3, 2);
lean_closure_set(v___f_1070_, 0, v_x_u2082_1067_);
lean_closure_set(v___f_1070_, 1, v___y_1068_);
v___x_1071_ = lean_apply_1(v_x_u2081_1066_, v___y_1068_);
v___x_1072_ = lean_apply_3(v_orElse_1069_, lean_box(0), v___x_1071_, v___f_1070_);
return v___x_1072_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instAlternative___aux__3___redArg___boxed(lean_object* v_inst_1073_, lean_object* v_x_u2081_1074_, lean_object* v_x_u2082_1075_, lean_object* v___y_1076_){
_start:
{
lean_object* v_res_1077_; 
v_res_1077_ = l_Lean_MonadCacheT_instAlternative___aux__3___redArg(v_inst_1073_, v_x_u2081_1074_, v_x_u2082_1075_, v___y_1076_);
lean_dec(v___y_1076_);
return v_res_1077_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instAlternative___aux__3(lean_object* v_00_u03c9_1078_, lean_object* v_00_u03b1_1079_, lean_object* v_00_u03b2_1080_, lean_object* v_m_1081_, lean_object* v_inst_1082_, lean_object* v_inst_1083_, lean_object* v_inst_1084_, lean_object* v_inst_1085_, lean_object* v_00_u03b1_1086_, lean_object* v_x_u2081_1087_, lean_object* v_x_u2082_1088_, lean_object* v___y_1089_){
_start:
{
lean_object* v_orElse_1090_; lean_object* v___f_1091_; lean_object* v___x_1092_; lean_object* v___x_1093_; 
v_orElse_1090_ = lean_ctor_get(v_inst_1085_, 2);
lean_inc(v_orElse_1090_);
lean_dec_ref(v_inst_1085_);
lean_inc_n(v___y_1089_, 2);
v___f_1091_ = lean_alloc_closure((void*)(l_Lean_MonadCacheT_instAlternative___aux__3___redArg___lam__0___boxed), 3, 2);
lean_closure_set(v___f_1091_, 0, v_x_u2082_1088_);
lean_closure_set(v___f_1091_, 1, v___y_1089_);
v___x_1092_ = lean_apply_1(v_x_u2081_1087_, v___y_1089_);
v___x_1093_ = lean_apply_3(v_orElse_1090_, lean_box(0), v___x_1092_, v___f_1091_);
return v___x_1093_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instAlternative___aux__3___boxed(lean_object* v_00_u03c9_1094_, lean_object* v_00_u03b1_1095_, lean_object* v_00_u03b2_1096_, lean_object* v_m_1097_, lean_object* v_inst_1098_, lean_object* v_inst_1099_, lean_object* v_inst_1100_, lean_object* v_inst_1101_, lean_object* v_00_u03b1_1102_, lean_object* v_x_u2081_1103_, lean_object* v_x_u2082_1104_, lean_object* v___y_1105_){
_start:
{
lean_object* v_res_1106_; 
v_res_1106_ = l_Lean_MonadCacheT_instAlternative___aux__3(v_00_u03c9_1094_, v_00_u03b1_1095_, v_00_u03b2_1096_, v_m_1097_, v_inst_1098_, v_inst_1099_, v_inst_1100_, v_inst_1101_, v_00_u03b1_1102_, v_x_u2081_1103_, v_x_u2082_1104_, v___y_1105_);
lean_dec(v___y_1105_);
lean_dec_ref(v_inst_1100_);
lean_dec_ref(v_inst_1099_);
return v_res_1106_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instAlternative___redArg(lean_object* v_inst_1107_, lean_object* v_inst_1108_, lean_object* v_inst_1109_, lean_object* v_inst_1110_, lean_object* v_inst_1111_){
_start:
{
lean_object* v___x_1112_; lean_object* v_toApplicative_1113_; lean_object* v___x_1114_; lean_object* v___x_1115_; lean_object* v___x_1116_; 
lean_inc_ref_n(v_inst_1109_, 2);
lean_inc_ref_n(v_inst_1108_, 2);
v___x_1112_ = l_Lean_MonadCacheT_instMonad___redArg(v_inst_1107_, v_inst_1108_, v_inst_1109_, v_inst_1110_);
v_toApplicative_1113_ = lean_ctor_get(v___x_1112_, 0);
lean_inc_ref(v_toApplicative_1113_);
lean_dec_ref(v___x_1112_);
lean_inc_ref(v_inst_1111_);
v___x_1114_ = lean_alloc_closure((void*)(l_Lean_MonadCacheT_instAlternative___aux__1___boxed), 10, 8);
lean_closure_set(v___x_1114_, 0, lean_box(0));
lean_closure_set(v___x_1114_, 1, lean_box(0));
lean_closure_set(v___x_1114_, 2, lean_box(0));
lean_closure_set(v___x_1114_, 3, lean_box(0));
lean_closure_set(v___x_1114_, 4, v_inst_1107_);
lean_closure_set(v___x_1114_, 5, v_inst_1108_);
lean_closure_set(v___x_1114_, 6, v_inst_1109_);
lean_closure_set(v___x_1114_, 7, v_inst_1111_);
v___x_1115_ = lean_alloc_closure((void*)(l_Lean_MonadCacheT_instAlternative___aux__3___boxed), 12, 8);
lean_closure_set(v___x_1115_, 0, lean_box(0));
lean_closure_set(v___x_1115_, 1, lean_box(0));
lean_closure_set(v___x_1115_, 2, lean_box(0));
lean_closure_set(v___x_1115_, 3, lean_box(0));
lean_closure_set(v___x_1115_, 4, v_inst_1107_);
lean_closure_set(v___x_1115_, 5, v_inst_1108_);
lean_closure_set(v___x_1115_, 6, v_inst_1109_);
lean_closure_set(v___x_1115_, 7, v_inst_1111_);
v___x_1116_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1116_, 0, v_toApplicative_1113_);
lean_ctor_set(v___x_1116_, 1, v___x_1114_);
lean_ctor_set(v___x_1116_, 2, v___x_1115_);
return v___x_1116_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instAlternative(lean_object* v_00_u03c9_1117_, lean_object* v_00_u03b1_1118_, lean_object* v_00_u03b2_1119_, lean_object* v_m_1120_, lean_object* v_inst_1121_, lean_object* v_inst_1122_, lean_object* v_inst_1123_, lean_object* v_inst_1124_, lean_object* v_inst_1125_){
_start:
{
lean_object* v___x_1126_; 
v___x_1126_ = l_Lean_MonadCacheT_instAlternative___redArg(v_inst_1121_, v_inst_1122_, v_inst_1123_, v_inst_1124_, v_inst_1125_);
return v___x_1126_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadHashMapCacheAdapter___redArg___lam__0(lean_object* v_inst_1127_, lean_object* v_f_1128_, lean_object* v___y_1129_){
_start:
{
lean_object* v_toApplicative_1130_; lean_object* v___x_1132_; uint8_t v_isShared_1133_; uint8_t v_isSharedCheck_1141_; 
v_toApplicative_1130_ = lean_ctor_get(v_inst_1127_, 0);
v_isSharedCheck_1141_ = !lean_is_exclusive(v_inst_1127_);
if (v_isSharedCheck_1141_ == 0)
{
lean_object* v_unused_1142_; 
v_unused_1142_ = lean_ctor_get(v_inst_1127_, 1);
lean_dec(v_unused_1142_);
v___x_1132_ = v_inst_1127_;
v_isShared_1133_ = v_isSharedCheck_1141_;
goto v_resetjp_1131_;
}
else
{
lean_inc(v_toApplicative_1130_);
lean_dec(v_inst_1127_);
v___x_1132_ = lean_box(0);
v_isShared_1133_ = v_isSharedCheck_1141_;
goto v_resetjp_1131_;
}
v_resetjp_1131_:
{
lean_object* v_toPure_1134_; lean_object* v___x_1135_; lean_object* v___x_1136_; lean_object* v___x_1138_; 
v_toPure_1134_ = lean_ctor_get(v_toApplicative_1130_, 1);
lean_inc(v_toPure_1134_);
lean_dec_ref(v_toApplicative_1130_);
v___x_1135_ = lean_box(0);
v___x_1136_ = lean_apply_1(v_f_1128_, v___y_1129_);
if (v_isShared_1133_ == 0)
{
lean_ctor_set(v___x_1132_, 1, v___x_1136_);
lean_ctor_set(v___x_1132_, 0, v___x_1135_);
v___x_1138_ = v___x_1132_;
goto v_reusejp_1137_;
}
else
{
lean_object* v_reuseFailAlloc_1140_; 
v_reuseFailAlloc_1140_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1140_, 0, v___x_1135_);
lean_ctor_set(v_reuseFailAlloc_1140_, 1, v___x_1136_);
v___x_1138_ = v_reuseFailAlloc_1140_;
goto v_reusejp_1137_;
}
v_reusejp_1137_:
{
lean_object* v___x_1139_; 
v___x_1139_ = lean_apply_2(v_toPure_1134_, lean_box(0), v___x_1138_);
return v___x_1139_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadHashMapCacheAdapter___redArg(lean_object* v_inst_1143_){
_start:
{
lean_object* v___f_1144_; lean_object* v___x_1145_; lean_object* v___x_1146_; 
lean_inc_ref(v_inst_1143_);
v___f_1144_ = lean_alloc_closure((void*)(l_Lean_MonadStateCacheT_instMonadHashMapCacheAdapter___redArg___lam__0), 3, 1);
lean_closure_set(v___f_1144_, 0, v_inst_1143_);
v___x_1145_ = lean_alloc_closure((void*)(l_StateT_get), 4, 3);
lean_closure_set(v___x_1145_, 0, lean_box(0));
lean_closure_set(v___x_1145_, 1, lean_box(0));
lean_closure_set(v___x_1145_, 2, v_inst_1143_);
v___x_1146_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1146_, 0, v___x_1145_);
lean_ctor_set(v___x_1146_, 1, v___f_1144_);
return v___x_1146_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadHashMapCacheAdapter(lean_object* v_00_u03b1_1147_, lean_object* v_00_u03b2_1148_, lean_object* v_m_1149_, lean_object* v_inst_1150_, lean_object* v_inst_1151_, lean_object* v_inst_1152_){
_start:
{
lean_object* v___x_1153_; 
v___x_1153_ = l_Lean_MonadStateCacheT_instMonadHashMapCacheAdapter___redArg(v_inst_1152_);
return v___x_1153_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadHashMapCacheAdapter___boxed(lean_object* v_00_u03b1_1154_, lean_object* v_00_u03b2_1155_, lean_object* v_m_1156_, lean_object* v_inst_1157_, lean_object* v_inst_1158_, lean_object* v_inst_1159_){
_start:
{
lean_object* v_res_1160_; 
v_res_1160_ = l_Lean_MonadStateCacheT_instMonadHashMapCacheAdapter(v_00_u03b1_1154_, v_00_u03b2_1155_, v_m_1156_, v_inst_1157_, v_inst_1158_, v_inst_1159_);
lean_dec_ref(v_inst_1158_);
lean_dec_ref(v_inst_1157_);
return v_res_1160_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_run___redArg___lam__0(lean_object* v_x_1161_){
_start:
{
lean_object* v_fst_1162_; 
v_fst_1162_ = lean_ctor_get(v_x_1161_, 0);
lean_inc(v_fst_1162_);
return v_fst_1162_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_run___redArg___lam__0___boxed(lean_object* v_x_1163_){
_start:
{
lean_object* v_res_1164_; 
v_res_1164_ = l_Lean_MonadStateCacheT_run___redArg___lam__0(v_x_1163_);
lean_dec_ref(v_x_1163_);
return v_res_1164_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_run___redArg(lean_object* v_inst_1166_, lean_object* v_x_1167_){
_start:
{
lean_object* v_toApplicative_1168_; lean_object* v_toFunctor_1169_; lean_object* v_map_1170_; lean_object* v___f_1171_; lean_object* v___x_1172_; lean_object* v___x_1173_; lean_object* v___x_1174_; 
v_toApplicative_1168_ = lean_ctor_get(v_inst_1166_, 0);
lean_inc_ref(v_toApplicative_1168_);
lean_dec_ref(v_inst_1166_);
v_toFunctor_1169_ = lean_ctor_get(v_toApplicative_1168_, 0);
lean_inc_ref(v_toFunctor_1169_);
lean_dec_ref(v_toApplicative_1168_);
v_map_1170_ = lean_ctor_get(v_toFunctor_1169_, 0);
lean_inc(v_map_1170_);
lean_dec_ref(v_toFunctor_1169_);
v___f_1171_ = ((lean_object*)(l_Lean_MonadStateCacheT_run___redArg___closed__0));
v___x_1172_ = lean_obj_once(&l_Lean_MonadCacheT_run___redArg___closed__1, &l_Lean_MonadCacheT_run___redArg___closed__1_once, _init_l_Lean_MonadCacheT_run___redArg___closed__1);
v___x_1173_ = lean_apply_1(v_x_1167_, v___x_1172_);
v___x_1174_ = lean_apply_4(v_map_1170_, lean_box(0), lean_box(0), v___f_1171_, v___x_1173_);
return v___x_1174_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_run(lean_object* v_00_u03b1_1175_, lean_object* v_00_u03b2_1176_, lean_object* v_m_1177_, lean_object* v_inst_1178_, lean_object* v_inst_1179_, lean_object* v_inst_1180_, lean_object* v_00_u03c3_1181_, lean_object* v_x_1182_){
_start:
{
lean_object* v_toApplicative_1183_; lean_object* v_toFunctor_1184_; lean_object* v_map_1185_; lean_object* v___f_1186_; lean_object* v___x_1187_; lean_object* v___x_1188_; lean_object* v___x_1189_; 
v_toApplicative_1183_ = lean_ctor_get(v_inst_1180_, 0);
lean_inc_ref(v_toApplicative_1183_);
lean_dec_ref(v_inst_1180_);
v_toFunctor_1184_ = lean_ctor_get(v_toApplicative_1183_, 0);
lean_inc_ref(v_toFunctor_1184_);
lean_dec_ref(v_toApplicative_1183_);
v_map_1185_ = lean_ctor_get(v_toFunctor_1184_, 0);
lean_inc(v_map_1185_);
lean_dec_ref(v_toFunctor_1184_);
v___f_1186_ = ((lean_object*)(l_Lean_MonadStateCacheT_run___redArg___closed__0));
v___x_1187_ = lean_obj_once(&l_Lean_MonadCacheT_run___redArg___closed__1, &l_Lean_MonadCacheT_run___redArg___closed__1_once, _init_l_Lean_MonadCacheT_run___redArg___closed__1);
v___x_1188_ = lean_apply_1(v_x_1182_, v___x_1187_);
v___x_1189_ = lean_apply_4(v_map_1185_, lean_box(0), lean_box(0), v___f_1186_, v___x_1188_);
return v___x_1189_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_run___boxed(lean_object* v_00_u03b1_1190_, lean_object* v_00_u03b2_1191_, lean_object* v_m_1192_, lean_object* v_inst_1193_, lean_object* v_inst_1194_, lean_object* v_inst_1195_, lean_object* v_00_u03c3_1196_, lean_object* v_x_1197_){
_start:
{
lean_object* v_res_1198_; 
v_res_1198_ = l_Lean_MonadStateCacheT_run(v_00_u03b1_1190_, v_00_u03b2_1191_, v_m_1192_, v_inst_1193_, v_inst_1194_, v_inst_1195_, v_00_u03c3_1196_, v_x_1197_);
lean_dec_ref(v_inst_1194_);
lean_dec_ref(v_inst_1193_);
return v_res_1198_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonad___aux__1___redArg___lam__0(lean_object* v_f_1199_, lean_object* v_toPure_1200_, lean_object* v_____x_1201_){
_start:
{
lean_object* v_fst_1202_; lean_object* v_snd_1203_; lean_object* v___x_1205_; uint8_t v_isShared_1206_; uint8_t v_isSharedCheck_1212_; 
v_fst_1202_ = lean_ctor_get(v_____x_1201_, 0);
v_snd_1203_ = lean_ctor_get(v_____x_1201_, 1);
v_isSharedCheck_1212_ = !lean_is_exclusive(v_____x_1201_);
if (v_isSharedCheck_1212_ == 0)
{
v___x_1205_ = v_____x_1201_;
v_isShared_1206_ = v_isSharedCheck_1212_;
goto v_resetjp_1204_;
}
else
{
lean_inc(v_snd_1203_);
lean_inc(v_fst_1202_);
lean_dec(v_____x_1201_);
v___x_1205_ = lean_box(0);
v_isShared_1206_ = v_isSharedCheck_1212_;
goto v_resetjp_1204_;
}
v_resetjp_1204_:
{
lean_object* v___x_1207_; lean_object* v___x_1209_; 
v___x_1207_ = lean_apply_1(v_f_1199_, v_fst_1202_);
if (v_isShared_1206_ == 0)
{
lean_ctor_set(v___x_1205_, 0, v___x_1207_);
v___x_1209_ = v___x_1205_;
goto v_reusejp_1208_;
}
else
{
lean_object* v_reuseFailAlloc_1211_; 
v_reuseFailAlloc_1211_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1211_, 0, v___x_1207_);
lean_ctor_set(v_reuseFailAlloc_1211_, 1, v_snd_1203_);
v___x_1209_ = v_reuseFailAlloc_1211_;
goto v_reusejp_1208_;
}
v_reusejp_1208_:
{
lean_object* v___x_1210_; 
v___x_1210_ = lean_apply_2(v_toPure_1200_, lean_box(0), v___x_1209_);
return v___x_1210_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonad___aux__1___redArg(lean_object* v_inst_1213_, lean_object* v_f_1214_, lean_object* v_x_1215_, lean_object* v___y_1216_){
_start:
{
lean_object* v_toApplicative_1217_; lean_object* v_toBind_1218_; lean_object* v_toPure_1219_; lean_object* v___f_1220_; lean_object* v___x_1221_; lean_object* v___x_1222_; 
v_toApplicative_1217_ = lean_ctor_get(v_inst_1213_, 0);
lean_inc_ref(v_toApplicative_1217_);
v_toBind_1218_ = lean_ctor_get(v_inst_1213_, 1);
lean_inc(v_toBind_1218_);
lean_dec_ref(v_inst_1213_);
v_toPure_1219_ = lean_ctor_get(v_toApplicative_1217_, 1);
lean_inc(v_toPure_1219_);
lean_dec_ref(v_toApplicative_1217_);
v___f_1220_ = lean_alloc_closure((void*)(l_Lean_MonadStateCacheT_instMonad___aux__1___redArg___lam__0), 3, 2);
lean_closure_set(v___f_1220_, 0, v_f_1214_);
lean_closure_set(v___f_1220_, 1, v_toPure_1219_);
v___x_1221_ = lean_apply_1(v_x_1215_, v___y_1216_);
v___x_1222_ = lean_apply_4(v_toBind_1218_, lean_box(0), lean_box(0), v___x_1221_, v___f_1220_);
return v___x_1222_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonad___aux__1(lean_object* v_00_u03b1_1223_, lean_object* v_00_u03b2_1224_, lean_object* v_m_1225_, lean_object* v_inst_1226_, lean_object* v_inst_1227_, lean_object* v_inst_1228_, lean_object* v_00_u03b1_1229_, lean_object* v_00_u03b2_1230_, lean_object* v_f_1231_, lean_object* v_x_1232_, lean_object* v___y_1233_){
_start:
{
lean_object* v_toApplicative_1234_; lean_object* v_toBind_1235_; lean_object* v_toPure_1236_; lean_object* v___f_1237_; lean_object* v___x_1238_; lean_object* v___x_1239_; 
v_toApplicative_1234_ = lean_ctor_get(v_inst_1228_, 0);
lean_inc_ref(v_toApplicative_1234_);
v_toBind_1235_ = lean_ctor_get(v_inst_1228_, 1);
lean_inc(v_toBind_1235_);
lean_dec_ref(v_inst_1228_);
v_toPure_1236_ = lean_ctor_get(v_toApplicative_1234_, 1);
lean_inc(v_toPure_1236_);
lean_dec_ref(v_toApplicative_1234_);
v___f_1237_ = lean_alloc_closure((void*)(l_Lean_MonadStateCacheT_instMonad___aux__1___redArg___lam__0), 3, 2);
lean_closure_set(v___f_1237_, 0, v_f_1231_);
lean_closure_set(v___f_1237_, 1, v_toPure_1236_);
v___x_1238_ = lean_apply_1(v_x_1232_, v___y_1233_);
v___x_1239_ = lean_apply_4(v_toBind_1235_, lean_box(0), lean_box(0), v___x_1238_, v___f_1237_);
return v___x_1239_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonad___aux__1___boxed(lean_object* v_00_u03b1_1240_, lean_object* v_00_u03b2_1241_, lean_object* v_m_1242_, lean_object* v_inst_1243_, lean_object* v_inst_1244_, lean_object* v_inst_1245_, lean_object* v_00_u03b1_1246_, lean_object* v_00_u03b2_1247_, lean_object* v_f_1248_, lean_object* v_x_1249_, lean_object* v___y_1250_){
_start:
{
lean_object* v_res_1251_; 
v_res_1251_ = l_Lean_MonadStateCacheT_instMonad___aux__1(v_00_u03b1_1240_, v_00_u03b2_1241_, v_m_1242_, v_inst_1243_, v_inst_1244_, v_inst_1245_, v_00_u03b1_1246_, v_00_u03b2_1247_, v_f_1248_, v_x_1249_, v___y_1250_);
lean_dec_ref(v_inst_1244_);
lean_dec_ref(v_inst_1243_);
return v_res_1251_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonad___aux__3___redArg___lam__0(lean_object* v_a_1252_, lean_object* v_toPure_1253_, lean_object* v_____x_1254_){
_start:
{
lean_object* v_snd_1255_; lean_object* v___x_1257_; uint8_t v_isShared_1258_; uint8_t v_isSharedCheck_1263_; 
v_snd_1255_ = lean_ctor_get(v_____x_1254_, 1);
v_isSharedCheck_1263_ = !lean_is_exclusive(v_____x_1254_);
if (v_isSharedCheck_1263_ == 0)
{
lean_object* v_unused_1264_; 
v_unused_1264_ = lean_ctor_get(v_____x_1254_, 0);
lean_dec(v_unused_1264_);
v___x_1257_ = v_____x_1254_;
v_isShared_1258_ = v_isSharedCheck_1263_;
goto v_resetjp_1256_;
}
else
{
lean_inc(v_snd_1255_);
lean_dec(v_____x_1254_);
v___x_1257_ = lean_box(0);
v_isShared_1258_ = v_isSharedCheck_1263_;
goto v_resetjp_1256_;
}
v_resetjp_1256_:
{
lean_object* v___x_1260_; 
if (v_isShared_1258_ == 0)
{
lean_ctor_set(v___x_1257_, 0, v_a_1252_);
v___x_1260_ = v___x_1257_;
goto v_reusejp_1259_;
}
else
{
lean_object* v_reuseFailAlloc_1262_; 
v_reuseFailAlloc_1262_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1262_, 0, v_a_1252_);
lean_ctor_set(v_reuseFailAlloc_1262_, 1, v_snd_1255_);
v___x_1260_ = v_reuseFailAlloc_1262_;
goto v_reusejp_1259_;
}
v_reusejp_1259_:
{
lean_object* v___x_1261_; 
v___x_1261_ = lean_apply_2(v_toPure_1253_, lean_box(0), v___x_1260_);
return v___x_1261_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonad___aux__3___redArg(lean_object* v_inst_1265_, lean_object* v_a_1266_, lean_object* v_a_1267_, lean_object* v___y_1268_){
_start:
{
lean_object* v_toApplicative_1269_; lean_object* v_toBind_1270_; lean_object* v_toPure_1271_; lean_object* v___f_1272_; lean_object* v___x_1273_; lean_object* v___x_1274_; 
v_toApplicative_1269_ = lean_ctor_get(v_inst_1265_, 0);
lean_inc_ref(v_toApplicative_1269_);
v_toBind_1270_ = lean_ctor_get(v_inst_1265_, 1);
lean_inc(v_toBind_1270_);
lean_dec_ref(v_inst_1265_);
v_toPure_1271_ = lean_ctor_get(v_toApplicative_1269_, 1);
lean_inc(v_toPure_1271_);
lean_dec_ref(v_toApplicative_1269_);
v___f_1272_ = lean_alloc_closure((void*)(l_Lean_MonadStateCacheT_instMonad___aux__3___redArg___lam__0), 3, 2);
lean_closure_set(v___f_1272_, 0, v_a_1266_);
lean_closure_set(v___f_1272_, 1, v_toPure_1271_);
v___x_1273_ = lean_apply_1(v_a_1267_, v___y_1268_);
v___x_1274_ = lean_apply_4(v_toBind_1270_, lean_box(0), lean_box(0), v___x_1273_, v___f_1272_);
return v___x_1274_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonad___aux__3(lean_object* v_00_u03b1_1275_, lean_object* v_00_u03b2_1276_, lean_object* v_m_1277_, lean_object* v_inst_1278_, lean_object* v_inst_1279_, lean_object* v_inst_1280_, lean_object* v_00_u03b1_1281_, lean_object* v_00_u03b2_1282_, lean_object* v_a_1283_, lean_object* v_a_1284_, lean_object* v___y_1285_){
_start:
{
lean_object* v_toApplicative_1286_; lean_object* v_toBind_1287_; lean_object* v_toPure_1288_; lean_object* v___f_1289_; lean_object* v___x_1290_; lean_object* v___x_1291_; 
v_toApplicative_1286_ = lean_ctor_get(v_inst_1280_, 0);
lean_inc_ref(v_toApplicative_1286_);
v_toBind_1287_ = lean_ctor_get(v_inst_1280_, 1);
lean_inc(v_toBind_1287_);
lean_dec_ref(v_inst_1280_);
v_toPure_1288_ = lean_ctor_get(v_toApplicative_1286_, 1);
lean_inc(v_toPure_1288_);
lean_dec_ref(v_toApplicative_1286_);
v___f_1289_ = lean_alloc_closure((void*)(l_Lean_MonadStateCacheT_instMonad___aux__3___redArg___lam__0), 3, 2);
lean_closure_set(v___f_1289_, 0, v_a_1283_);
lean_closure_set(v___f_1289_, 1, v_toPure_1288_);
v___x_1290_ = lean_apply_1(v_a_1284_, v___y_1285_);
v___x_1291_ = lean_apply_4(v_toBind_1287_, lean_box(0), lean_box(0), v___x_1290_, v___f_1289_);
return v___x_1291_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonad___aux__3___boxed(lean_object* v_00_u03b1_1292_, lean_object* v_00_u03b2_1293_, lean_object* v_m_1294_, lean_object* v_inst_1295_, lean_object* v_inst_1296_, lean_object* v_inst_1297_, lean_object* v_00_u03b1_1298_, lean_object* v_00_u03b2_1299_, lean_object* v_a_1300_, lean_object* v_a_1301_, lean_object* v___y_1302_){
_start:
{
lean_object* v_res_1303_; 
v_res_1303_ = l_Lean_MonadStateCacheT_instMonad___aux__3(v_00_u03b1_1292_, v_00_u03b2_1293_, v_m_1294_, v_inst_1295_, v_inst_1296_, v_inst_1297_, v_00_u03b1_1298_, v_00_u03b2_1299_, v_a_1300_, v_a_1301_, v___y_1302_);
lean_dec_ref(v_inst_1296_);
lean_dec_ref(v_inst_1295_);
return v_res_1303_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonad___aux__5___redArg(lean_object* v_inst_1304_, lean_object* v_a_1305_, lean_object* v___y_1306_){
_start:
{
lean_object* v_toApplicative_1307_; lean_object* v___x_1309_; uint8_t v_isShared_1310_; uint8_t v_isSharedCheck_1316_; 
v_toApplicative_1307_ = lean_ctor_get(v_inst_1304_, 0);
v_isSharedCheck_1316_ = !lean_is_exclusive(v_inst_1304_);
if (v_isSharedCheck_1316_ == 0)
{
lean_object* v_unused_1317_; 
v_unused_1317_ = lean_ctor_get(v_inst_1304_, 1);
lean_dec(v_unused_1317_);
v___x_1309_ = v_inst_1304_;
v_isShared_1310_ = v_isSharedCheck_1316_;
goto v_resetjp_1308_;
}
else
{
lean_inc(v_toApplicative_1307_);
lean_dec(v_inst_1304_);
v___x_1309_ = lean_box(0);
v_isShared_1310_ = v_isSharedCheck_1316_;
goto v_resetjp_1308_;
}
v_resetjp_1308_:
{
lean_object* v_toPure_1311_; lean_object* v___x_1313_; 
v_toPure_1311_ = lean_ctor_get(v_toApplicative_1307_, 1);
lean_inc(v_toPure_1311_);
lean_dec_ref(v_toApplicative_1307_);
if (v_isShared_1310_ == 0)
{
lean_ctor_set(v___x_1309_, 1, v___y_1306_);
lean_ctor_set(v___x_1309_, 0, v_a_1305_);
v___x_1313_ = v___x_1309_;
goto v_reusejp_1312_;
}
else
{
lean_object* v_reuseFailAlloc_1315_; 
v_reuseFailAlloc_1315_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1315_, 0, v_a_1305_);
lean_ctor_set(v_reuseFailAlloc_1315_, 1, v___y_1306_);
v___x_1313_ = v_reuseFailAlloc_1315_;
goto v_reusejp_1312_;
}
v_reusejp_1312_:
{
lean_object* v___x_1314_; 
v___x_1314_ = lean_apply_2(v_toPure_1311_, lean_box(0), v___x_1313_);
return v___x_1314_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonad___aux__5(lean_object* v_00_u03b1_1318_, lean_object* v_00_u03b2_1319_, lean_object* v_m_1320_, lean_object* v_inst_1321_, lean_object* v_inst_1322_, lean_object* v_inst_1323_, lean_object* v_00_u03b1_1324_, lean_object* v_a_1325_, lean_object* v___y_1326_){
_start:
{
lean_object* v_toApplicative_1327_; lean_object* v___x_1329_; uint8_t v_isShared_1330_; uint8_t v_isSharedCheck_1336_; 
v_toApplicative_1327_ = lean_ctor_get(v_inst_1323_, 0);
v_isSharedCheck_1336_ = !lean_is_exclusive(v_inst_1323_);
if (v_isSharedCheck_1336_ == 0)
{
lean_object* v_unused_1337_; 
v_unused_1337_ = lean_ctor_get(v_inst_1323_, 1);
lean_dec(v_unused_1337_);
v___x_1329_ = v_inst_1323_;
v_isShared_1330_ = v_isSharedCheck_1336_;
goto v_resetjp_1328_;
}
else
{
lean_inc(v_toApplicative_1327_);
lean_dec(v_inst_1323_);
v___x_1329_ = lean_box(0);
v_isShared_1330_ = v_isSharedCheck_1336_;
goto v_resetjp_1328_;
}
v_resetjp_1328_:
{
lean_object* v_toPure_1331_; lean_object* v___x_1333_; 
v_toPure_1331_ = lean_ctor_get(v_toApplicative_1327_, 1);
lean_inc(v_toPure_1331_);
lean_dec_ref(v_toApplicative_1327_);
if (v_isShared_1330_ == 0)
{
lean_ctor_set(v___x_1329_, 1, v___y_1326_);
lean_ctor_set(v___x_1329_, 0, v_a_1325_);
v___x_1333_ = v___x_1329_;
goto v_reusejp_1332_;
}
else
{
lean_object* v_reuseFailAlloc_1335_; 
v_reuseFailAlloc_1335_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1335_, 0, v_a_1325_);
lean_ctor_set(v_reuseFailAlloc_1335_, 1, v___y_1326_);
v___x_1333_ = v_reuseFailAlloc_1335_;
goto v_reusejp_1332_;
}
v_reusejp_1332_:
{
lean_object* v___x_1334_; 
v___x_1334_ = lean_apply_2(v_toPure_1331_, lean_box(0), v___x_1333_);
return v___x_1334_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonad___aux__5___boxed(lean_object* v_00_u03b1_1338_, lean_object* v_00_u03b2_1339_, lean_object* v_m_1340_, lean_object* v_inst_1341_, lean_object* v_inst_1342_, lean_object* v_inst_1343_, lean_object* v_00_u03b1_1344_, lean_object* v_a_1345_, lean_object* v___y_1346_){
_start:
{
lean_object* v_res_1347_; 
v_res_1347_ = l_Lean_MonadStateCacheT_instMonad___aux__5(v_00_u03b1_1338_, v_00_u03b2_1339_, v_m_1340_, v_inst_1341_, v_inst_1342_, v_inst_1343_, v_00_u03b1_1344_, v_a_1345_, v___y_1346_);
lean_dec_ref(v_inst_1342_);
lean_dec_ref(v_inst_1341_);
return v_res_1347_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonad___aux__7___redArg___lam__0(lean_object* v_fst_1348_, lean_object* v_toPure_1349_, lean_object* v_____x_1350_){
_start:
{
lean_object* v_fst_1351_; lean_object* v_snd_1352_; lean_object* v___x_1354_; uint8_t v_isShared_1355_; uint8_t v_isSharedCheck_1361_; 
v_fst_1351_ = lean_ctor_get(v_____x_1350_, 0);
v_snd_1352_ = lean_ctor_get(v_____x_1350_, 1);
v_isSharedCheck_1361_ = !lean_is_exclusive(v_____x_1350_);
if (v_isSharedCheck_1361_ == 0)
{
v___x_1354_ = v_____x_1350_;
v_isShared_1355_ = v_isSharedCheck_1361_;
goto v_resetjp_1353_;
}
else
{
lean_inc(v_snd_1352_);
lean_inc(v_fst_1351_);
lean_dec(v_____x_1350_);
v___x_1354_ = lean_box(0);
v_isShared_1355_ = v_isSharedCheck_1361_;
goto v_resetjp_1353_;
}
v_resetjp_1353_:
{
lean_object* v___x_1356_; lean_object* v___x_1358_; 
v___x_1356_ = lean_apply_1(v_fst_1348_, v_fst_1351_);
if (v_isShared_1355_ == 0)
{
lean_ctor_set(v___x_1354_, 0, v___x_1356_);
v___x_1358_ = v___x_1354_;
goto v_reusejp_1357_;
}
else
{
lean_object* v_reuseFailAlloc_1360_; 
v_reuseFailAlloc_1360_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1360_, 0, v___x_1356_);
lean_ctor_set(v_reuseFailAlloc_1360_, 1, v_snd_1352_);
v___x_1358_ = v_reuseFailAlloc_1360_;
goto v_reusejp_1357_;
}
v_reusejp_1357_:
{
lean_object* v___x_1359_; 
v___x_1359_ = lean_apply_2(v_toPure_1349_, lean_box(0), v___x_1358_);
return v___x_1359_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonad___aux__7___redArg___lam__1(lean_object* v_toApplicative_1362_, lean_object* v_x_1363_, lean_object* v_toBind_1364_, lean_object* v_____x_1365_){
_start:
{
lean_object* v_fst_1366_; lean_object* v_snd_1367_; lean_object* v_toPure_1368_; lean_object* v___x_1369_; lean_object* v___f_1370_; lean_object* v___x_1371_; lean_object* v___x_1372_; 
v_fst_1366_ = lean_ctor_get(v_____x_1365_, 0);
lean_inc(v_fst_1366_);
v_snd_1367_ = lean_ctor_get(v_____x_1365_, 1);
lean_inc(v_snd_1367_);
lean_dec_ref(v_____x_1365_);
v_toPure_1368_ = lean_ctor_get(v_toApplicative_1362_, 1);
lean_inc(v_toPure_1368_);
lean_dec_ref(v_toApplicative_1362_);
v___x_1369_ = lean_box(0);
v___f_1370_ = lean_alloc_closure((void*)(l_Lean_MonadStateCacheT_instMonad___aux__7___redArg___lam__0), 3, 2);
lean_closure_set(v___f_1370_, 0, v_fst_1366_);
lean_closure_set(v___f_1370_, 1, v_toPure_1368_);
v___x_1371_ = lean_apply_2(v_x_1363_, v___x_1369_, v_snd_1367_);
v___x_1372_ = lean_apply_4(v_toBind_1364_, lean_box(0), lean_box(0), v___x_1371_, v___f_1370_);
return v___x_1372_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonad___aux__7___redArg(lean_object* v_inst_1373_, lean_object* v_f_1374_, lean_object* v_x_1375_, lean_object* v___y_1376_){
_start:
{
lean_object* v_toApplicative_1377_; lean_object* v_toBind_1378_; lean_object* v___f_1379_; lean_object* v___x_1380_; lean_object* v___x_1381_; 
v_toApplicative_1377_ = lean_ctor_get(v_inst_1373_, 0);
lean_inc_ref(v_toApplicative_1377_);
v_toBind_1378_ = lean_ctor_get(v_inst_1373_, 1);
lean_inc_n(v_toBind_1378_, 2);
lean_dec_ref(v_inst_1373_);
v___f_1379_ = lean_alloc_closure((void*)(l_Lean_MonadStateCacheT_instMonad___aux__7___redArg___lam__1), 4, 3);
lean_closure_set(v___f_1379_, 0, v_toApplicative_1377_);
lean_closure_set(v___f_1379_, 1, v_x_1375_);
lean_closure_set(v___f_1379_, 2, v_toBind_1378_);
v___x_1380_ = lean_apply_1(v_f_1374_, v___y_1376_);
v___x_1381_ = lean_apply_4(v_toBind_1378_, lean_box(0), lean_box(0), v___x_1380_, v___f_1379_);
return v___x_1381_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonad___aux__7(lean_object* v_00_u03b1_1382_, lean_object* v_00_u03b2_1383_, lean_object* v_m_1384_, lean_object* v_inst_1385_, lean_object* v_inst_1386_, lean_object* v_inst_1387_, lean_object* v_00_u03b1_1388_, lean_object* v_00_u03b2_1389_, lean_object* v_f_1390_, lean_object* v_x_1391_, lean_object* v___y_1392_){
_start:
{
lean_object* v_toApplicative_1393_; lean_object* v_toBind_1394_; lean_object* v___f_1395_; lean_object* v___x_1396_; lean_object* v___x_1397_; 
v_toApplicative_1393_ = lean_ctor_get(v_inst_1387_, 0);
lean_inc_ref(v_toApplicative_1393_);
v_toBind_1394_ = lean_ctor_get(v_inst_1387_, 1);
lean_inc_n(v_toBind_1394_, 2);
lean_dec_ref(v_inst_1387_);
v___f_1395_ = lean_alloc_closure((void*)(l_Lean_MonadStateCacheT_instMonad___aux__7___redArg___lam__1), 4, 3);
lean_closure_set(v___f_1395_, 0, v_toApplicative_1393_);
lean_closure_set(v___f_1395_, 1, v_x_1391_);
lean_closure_set(v___f_1395_, 2, v_toBind_1394_);
v___x_1396_ = lean_apply_1(v_f_1390_, v___y_1392_);
v___x_1397_ = lean_apply_4(v_toBind_1394_, lean_box(0), lean_box(0), v___x_1396_, v___f_1395_);
return v___x_1397_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonad___aux__7___boxed(lean_object* v_00_u03b1_1398_, lean_object* v_00_u03b2_1399_, lean_object* v_m_1400_, lean_object* v_inst_1401_, lean_object* v_inst_1402_, lean_object* v_inst_1403_, lean_object* v_00_u03b1_1404_, lean_object* v_00_u03b2_1405_, lean_object* v_f_1406_, lean_object* v_x_1407_, lean_object* v___y_1408_){
_start:
{
lean_object* v_res_1409_; 
v_res_1409_ = l_Lean_MonadStateCacheT_instMonad___aux__7(v_00_u03b1_1398_, v_00_u03b2_1399_, v_m_1400_, v_inst_1401_, v_inst_1402_, v_inst_1403_, v_00_u03b1_1404_, v_00_u03b2_1405_, v_f_1406_, v_x_1407_, v___y_1408_);
lean_dec_ref(v_inst_1402_);
lean_dec_ref(v_inst_1401_);
return v_res_1409_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonad___aux__9___redArg___lam__0(lean_object* v_toApplicative_1410_, lean_object* v_fst_1411_, lean_object* v_____x_1412_){
_start:
{
lean_object* v_snd_1413_; lean_object* v___x_1415_; uint8_t v_isShared_1416_; uint8_t v_isSharedCheck_1422_; 
v_snd_1413_ = lean_ctor_get(v_____x_1412_, 1);
v_isSharedCheck_1422_ = !lean_is_exclusive(v_____x_1412_);
if (v_isSharedCheck_1422_ == 0)
{
lean_object* v_unused_1423_; 
v_unused_1423_ = lean_ctor_get(v_____x_1412_, 0);
lean_dec(v_unused_1423_);
v___x_1415_ = v_____x_1412_;
v_isShared_1416_ = v_isSharedCheck_1422_;
goto v_resetjp_1414_;
}
else
{
lean_inc(v_snd_1413_);
lean_dec(v_____x_1412_);
v___x_1415_ = lean_box(0);
v_isShared_1416_ = v_isSharedCheck_1422_;
goto v_resetjp_1414_;
}
v_resetjp_1414_:
{
lean_object* v_toPure_1417_; lean_object* v___x_1419_; 
v_toPure_1417_ = lean_ctor_get(v_toApplicative_1410_, 1);
lean_inc(v_toPure_1417_);
lean_dec_ref(v_toApplicative_1410_);
if (v_isShared_1416_ == 0)
{
lean_ctor_set(v___x_1415_, 0, v_fst_1411_);
v___x_1419_ = v___x_1415_;
goto v_reusejp_1418_;
}
else
{
lean_object* v_reuseFailAlloc_1421_; 
v_reuseFailAlloc_1421_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1421_, 0, v_fst_1411_);
lean_ctor_set(v_reuseFailAlloc_1421_, 1, v_snd_1413_);
v___x_1419_ = v_reuseFailAlloc_1421_;
goto v_reusejp_1418_;
}
v_reusejp_1418_:
{
lean_object* v___x_1420_; 
v___x_1420_ = lean_apply_2(v_toPure_1417_, lean_box(0), v___x_1419_);
return v___x_1420_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonad___aux__9___redArg___lam__1(lean_object* v_toApplicative_1424_, lean_object* v_y_1425_, lean_object* v_toBind_1426_, lean_object* v_____x_1427_){
_start:
{
lean_object* v_fst_1428_; lean_object* v_snd_1429_; lean_object* v___f_1430_; lean_object* v___x_1431_; lean_object* v___x_1432_; lean_object* v___x_1433_; 
v_fst_1428_ = lean_ctor_get(v_____x_1427_, 0);
lean_inc(v_fst_1428_);
v_snd_1429_ = lean_ctor_get(v_____x_1427_, 1);
lean_inc(v_snd_1429_);
lean_dec_ref(v_____x_1427_);
v___f_1430_ = lean_alloc_closure((void*)(l_Lean_MonadStateCacheT_instMonad___aux__9___redArg___lam__0), 3, 2);
lean_closure_set(v___f_1430_, 0, v_toApplicative_1424_);
lean_closure_set(v___f_1430_, 1, v_fst_1428_);
v___x_1431_ = lean_box(0);
v___x_1432_ = lean_apply_2(v_y_1425_, v___x_1431_, v_snd_1429_);
v___x_1433_ = lean_apply_4(v_toBind_1426_, lean_box(0), lean_box(0), v___x_1432_, v___f_1430_);
return v___x_1433_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonad___aux__9___redArg(lean_object* v_inst_1434_, lean_object* v_x_1435_, lean_object* v_y_1436_, lean_object* v___y_1437_){
_start:
{
lean_object* v_toApplicative_1438_; lean_object* v_toBind_1439_; lean_object* v___f_1440_; lean_object* v___x_1441_; lean_object* v___x_1442_; 
v_toApplicative_1438_ = lean_ctor_get(v_inst_1434_, 0);
lean_inc_ref(v_toApplicative_1438_);
v_toBind_1439_ = lean_ctor_get(v_inst_1434_, 1);
lean_inc_n(v_toBind_1439_, 2);
lean_dec_ref(v_inst_1434_);
v___f_1440_ = lean_alloc_closure((void*)(l_Lean_MonadStateCacheT_instMonad___aux__9___redArg___lam__1), 4, 3);
lean_closure_set(v___f_1440_, 0, v_toApplicative_1438_);
lean_closure_set(v___f_1440_, 1, v_y_1436_);
lean_closure_set(v___f_1440_, 2, v_toBind_1439_);
v___x_1441_ = lean_apply_1(v_x_1435_, v___y_1437_);
v___x_1442_ = lean_apply_4(v_toBind_1439_, lean_box(0), lean_box(0), v___x_1441_, v___f_1440_);
return v___x_1442_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonad___aux__9(lean_object* v_00_u03b1_1443_, lean_object* v_00_u03b2_1444_, lean_object* v_m_1445_, lean_object* v_inst_1446_, lean_object* v_inst_1447_, lean_object* v_inst_1448_, lean_object* v_00_u03b1_1449_, lean_object* v_00_u03b2_1450_, lean_object* v_x_1451_, lean_object* v_y_1452_, lean_object* v___y_1453_){
_start:
{
lean_object* v_toApplicative_1454_; lean_object* v_toBind_1455_; lean_object* v___f_1456_; lean_object* v___x_1457_; lean_object* v___x_1458_; 
v_toApplicative_1454_ = lean_ctor_get(v_inst_1448_, 0);
lean_inc_ref(v_toApplicative_1454_);
v_toBind_1455_ = lean_ctor_get(v_inst_1448_, 1);
lean_inc_n(v_toBind_1455_, 2);
lean_dec_ref(v_inst_1448_);
v___f_1456_ = lean_alloc_closure((void*)(l_Lean_MonadStateCacheT_instMonad___aux__9___redArg___lam__1), 4, 3);
lean_closure_set(v___f_1456_, 0, v_toApplicative_1454_);
lean_closure_set(v___f_1456_, 1, v_y_1452_);
lean_closure_set(v___f_1456_, 2, v_toBind_1455_);
v___x_1457_ = lean_apply_1(v_x_1451_, v___y_1453_);
v___x_1458_ = lean_apply_4(v_toBind_1455_, lean_box(0), lean_box(0), v___x_1457_, v___f_1456_);
return v___x_1458_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonad___aux__9___boxed(lean_object* v_00_u03b1_1459_, lean_object* v_00_u03b2_1460_, lean_object* v_m_1461_, lean_object* v_inst_1462_, lean_object* v_inst_1463_, lean_object* v_inst_1464_, lean_object* v_00_u03b1_1465_, lean_object* v_00_u03b2_1466_, lean_object* v_x_1467_, lean_object* v_y_1468_, lean_object* v___y_1469_){
_start:
{
lean_object* v_res_1470_; 
v_res_1470_ = l_Lean_MonadStateCacheT_instMonad___aux__9(v_00_u03b1_1459_, v_00_u03b2_1460_, v_m_1461_, v_inst_1462_, v_inst_1463_, v_inst_1464_, v_00_u03b1_1465_, v_00_u03b2_1466_, v_x_1467_, v_y_1468_, v___y_1469_);
lean_dec_ref(v_inst_1463_);
lean_dec_ref(v_inst_1462_);
return v_res_1470_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonad___aux__11___redArg___lam__0(lean_object* v_y_1471_, lean_object* v_____x_1472_){
_start:
{
lean_object* v_snd_1473_; lean_object* v___x_1474_; lean_object* v___x_1475_; 
v_snd_1473_ = lean_ctor_get(v_____x_1472_, 1);
lean_inc(v_snd_1473_);
lean_dec_ref(v_____x_1472_);
v___x_1474_ = lean_box(0);
v___x_1475_ = lean_apply_2(v_y_1471_, v___x_1474_, v_snd_1473_);
return v___x_1475_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonad___aux__11___redArg(lean_object* v_inst_1476_, lean_object* v_x_1477_, lean_object* v_y_1478_, lean_object* v___y_1479_){
_start:
{
lean_object* v_toBind_1480_; lean_object* v___f_1481_; lean_object* v___x_1482_; lean_object* v___x_1483_; 
v_toBind_1480_ = lean_ctor_get(v_inst_1476_, 1);
lean_inc(v_toBind_1480_);
lean_dec_ref(v_inst_1476_);
v___f_1481_ = lean_alloc_closure((void*)(l_Lean_MonadStateCacheT_instMonad___aux__11___redArg___lam__0), 2, 1);
lean_closure_set(v___f_1481_, 0, v_y_1478_);
v___x_1482_ = lean_apply_1(v_x_1477_, v___y_1479_);
v___x_1483_ = lean_apply_4(v_toBind_1480_, lean_box(0), lean_box(0), v___x_1482_, v___f_1481_);
return v___x_1483_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonad___aux__11(lean_object* v_00_u03b1_1484_, lean_object* v_00_u03b2_1485_, lean_object* v_m_1486_, lean_object* v_inst_1487_, lean_object* v_inst_1488_, lean_object* v_inst_1489_, lean_object* v_00_u03b1_1490_, lean_object* v_00_u03b2_1491_, lean_object* v_x_1492_, lean_object* v_y_1493_, lean_object* v___y_1494_){
_start:
{
lean_object* v_toBind_1495_; lean_object* v___f_1496_; lean_object* v___x_1497_; lean_object* v___x_1498_; 
v_toBind_1495_ = lean_ctor_get(v_inst_1489_, 1);
lean_inc(v_toBind_1495_);
lean_dec_ref(v_inst_1489_);
v___f_1496_ = lean_alloc_closure((void*)(l_Lean_MonadStateCacheT_instMonad___aux__11___redArg___lam__0), 2, 1);
lean_closure_set(v___f_1496_, 0, v_y_1493_);
v___x_1497_ = lean_apply_1(v_x_1492_, v___y_1494_);
v___x_1498_ = lean_apply_4(v_toBind_1495_, lean_box(0), lean_box(0), v___x_1497_, v___f_1496_);
return v___x_1498_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonad___aux__11___boxed(lean_object* v_00_u03b1_1499_, lean_object* v_00_u03b2_1500_, lean_object* v_m_1501_, lean_object* v_inst_1502_, lean_object* v_inst_1503_, lean_object* v_inst_1504_, lean_object* v_00_u03b1_1505_, lean_object* v_00_u03b2_1506_, lean_object* v_x_1507_, lean_object* v_y_1508_, lean_object* v___y_1509_){
_start:
{
lean_object* v_res_1510_; 
v_res_1510_ = l_Lean_MonadStateCacheT_instMonad___aux__11(v_00_u03b1_1499_, v_00_u03b2_1500_, v_m_1501_, v_inst_1502_, v_inst_1503_, v_inst_1504_, v_00_u03b1_1505_, v_00_u03b2_1506_, v_x_1507_, v_y_1508_, v___y_1509_);
lean_dec_ref(v_inst_1503_);
lean_dec_ref(v_inst_1502_);
return v_res_1510_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonad___aux__13___redArg___lam__0(lean_object* v_f_1511_, lean_object* v_____x_1512_){
_start:
{
lean_object* v_fst_1513_; lean_object* v_snd_1514_; lean_object* v___x_1515_; 
v_fst_1513_ = lean_ctor_get(v_____x_1512_, 0);
lean_inc(v_fst_1513_);
v_snd_1514_ = lean_ctor_get(v_____x_1512_, 1);
lean_inc(v_snd_1514_);
lean_dec_ref(v_____x_1512_);
v___x_1515_ = lean_apply_2(v_f_1511_, v_fst_1513_, v_snd_1514_);
return v___x_1515_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonad___aux__13___redArg(lean_object* v_inst_1516_, lean_object* v_x_1517_, lean_object* v_f_1518_, lean_object* v___y_1519_){
_start:
{
lean_object* v_toBind_1520_; lean_object* v___f_1521_; lean_object* v___x_1522_; lean_object* v___x_1523_; 
v_toBind_1520_ = lean_ctor_get(v_inst_1516_, 1);
lean_inc(v_toBind_1520_);
lean_dec_ref(v_inst_1516_);
v___f_1521_ = lean_alloc_closure((void*)(l_Lean_MonadStateCacheT_instMonad___aux__13___redArg___lam__0), 2, 1);
lean_closure_set(v___f_1521_, 0, v_f_1518_);
v___x_1522_ = lean_apply_1(v_x_1517_, v___y_1519_);
v___x_1523_ = lean_apply_4(v_toBind_1520_, lean_box(0), lean_box(0), v___x_1522_, v___f_1521_);
return v___x_1523_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonad___aux__13(lean_object* v_00_u03b1_1524_, lean_object* v_00_u03b2_1525_, lean_object* v_m_1526_, lean_object* v_inst_1527_, lean_object* v_inst_1528_, lean_object* v_inst_1529_, lean_object* v_00_u03b1_1530_, lean_object* v_00_u03b2_1531_, lean_object* v_x_1532_, lean_object* v_f_1533_, lean_object* v___y_1534_){
_start:
{
lean_object* v_toBind_1535_; lean_object* v___f_1536_; lean_object* v___x_1537_; lean_object* v___x_1538_; 
v_toBind_1535_ = lean_ctor_get(v_inst_1529_, 1);
lean_inc(v_toBind_1535_);
lean_dec_ref(v_inst_1529_);
v___f_1536_ = lean_alloc_closure((void*)(l_Lean_MonadStateCacheT_instMonad___aux__13___redArg___lam__0), 2, 1);
lean_closure_set(v___f_1536_, 0, v_f_1533_);
v___x_1537_ = lean_apply_1(v_x_1532_, v___y_1534_);
v___x_1538_ = lean_apply_4(v_toBind_1535_, lean_box(0), lean_box(0), v___x_1537_, v___f_1536_);
return v___x_1538_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonad___aux__13___boxed(lean_object* v_00_u03b1_1539_, lean_object* v_00_u03b2_1540_, lean_object* v_m_1541_, lean_object* v_inst_1542_, lean_object* v_inst_1543_, lean_object* v_inst_1544_, lean_object* v_00_u03b1_1545_, lean_object* v_00_u03b2_1546_, lean_object* v_x_1547_, lean_object* v_f_1548_, lean_object* v___y_1549_){
_start:
{
lean_object* v_res_1550_; 
v_res_1550_ = l_Lean_MonadStateCacheT_instMonad___aux__13(v_00_u03b1_1539_, v_00_u03b2_1540_, v_m_1541_, v_inst_1542_, v_inst_1543_, v_inst_1544_, v_00_u03b1_1545_, v_00_u03b2_1546_, v_x_1547_, v_f_1548_, v___y_1549_);
lean_dec_ref(v_inst_1543_);
lean_dec_ref(v_inst_1542_);
return v_res_1550_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonad___redArg(lean_object* v_inst_1551_, lean_object* v_inst_1552_, lean_object* v_inst_1553_){
_start:
{
lean_object* v___x_1554_; lean_object* v___x_1555_; lean_object* v___x_1556_; lean_object* v___x_1557_; lean_object* v___x_1558_; lean_object* v___x_1559_; lean_object* v___x_1560_; lean_object* v___x_1561_; lean_object* v___x_1562_; lean_object* v___x_1563_; 
lean_inc_ref_n(v_inst_1553_, 6);
lean_inc_ref_n(v_inst_1552_, 6);
lean_inc_ref_n(v_inst_1551_, 6);
v___x_1554_ = lean_alloc_closure((void*)(l_Lean_MonadStateCacheT_instMonad___aux__1___boxed), 11, 6);
lean_closure_set(v___x_1554_, 0, lean_box(0));
lean_closure_set(v___x_1554_, 1, lean_box(0));
lean_closure_set(v___x_1554_, 2, lean_box(0));
lean_closure_set(v___x_1554_, 3, v_inst_1551_);
lean_closure_set(v___x_1554_, 4, v_inst_1552_);
lean_closure_set(v___x_1554_, 5, v_inst_1553_);
v___x_1555_ = lean_alloc_closure((void*)(l_Lean_MonadStateCacheT_instMonad___aux__3___boxed), 11, 6);
lean_closure_set(v___x_1555_, 0, lean_box(0));
lean_closure_set(v___x_1555_, 1, lean_box(0));
lean_closure_set(v___x_1555_, 2, lean_box(0));
lean_closure_set(v___x_1555_, 3, v_inst_1551_);
lean_closure_set(v___x_1555_, 4, v_inst_1552_);
lean_closure_set(v___x_1555_, 5, v_inst_1553_);
v___x_1556_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1556_, 0, v___x_1554_);
lean_ctor_set(v___x_1556_, 1, v___x_1555_);
v___x_1557_ = lean_alloc_closure((void*)(l_Lean_MonadStateCacheT_instMonad___aux__5___boxed), 9, 6);
lean_closure_set(v___x_1557_, 0, lean_box(0));
lean_closure_set(v___x_1557_, 1, lean_box(0));
lean_closure_set(v___x_1557_, 2, lean_box(0));
lean_closure_set(v___x_1557_, 3, v_inst_1551_);
lean_closure_set(v___x_1557_, 4, v_inst_1552_);
lean_closure_set(v___x_1557_, 5, v_inst_1553_);
v___x_1558_ = lean_alloc_closure((void*)(l_Lean_MonadStateCacheT_instMonad___aux__7___boxed), 11, 6);
lean_closure_set(v___x_1558_, 0, lean_box(0));
lean_closure_set(v___x_1558_, 1, lean_box(0));
lean_closure_set(v___x_1558_, 2, lean_box(0));
lean_closure_set(v___x_1558_, 3, v_inst_1551_);
lean_closure_set(v___x_1558_, 4, v_inst_1552_);
lean_closure_set(v___x_1558_, 5, v_inst_1553_);
v___x_1559_ = lean_alloc_closure((void*)(l_Lean_MonadStateCacheT_instMonad___aux__9___boxed), 11, 6);
lean_closure_set(v___x_1559_, 0, lean_box(0));
lean_closure_set(v___x_1559_, 1, lean_box(0));
lean_closure_set(v___x_1559_, 2, lean_box(0));
lean_closure_set(v___x_1559_, 3, v_inst_1551_);
lean_closure_set(v___x_1559_, 4, v_inst_1552_);
lean_closure_set(v___x_1559_, 5, v_inst_1553_);
v___x_1560_ = lean_alloc_closure((void*)(l_Lean_MonadStateCacheT_instMonad___aux__11___boxed), 11, 6);
lean_closure_set(v___x_1560_, 0, lean_box(0));
lean_closure_set(v___x_1560_, 1, lean_box(0));
lean_closure_set(v___x_1560_, 2, lean_box(0));
lean_closure_set(v___x_1560_, 3, v_inst_1551_);
lean_closure_set(v___x_1560_, 4, v_inst_1552_);
lean_closure_set(v___x_1560_, 5, v_inst_1553_);
v___x_1561_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_1561_, 0, v___x_1556_);
lean_ctor_set(v___x_1561_, 1, v___x_1557_);
lean_ctor_set(v___x_1561_, 2, v___x_1558_);
lean_ctor_set(v___x_1561_, 3, v___x_1559_);
lean_ctor_set(v___x_1561_, 4, v___x_1560_);
v___x_1562_ = lean_alloc_closure((void*)(l_Lean_MonadStateCacheT_instMonad___aux__13___boxed), 11, 6);
lean_closure_set(v___x_1562_, 0, lean_box(0));
lean_closure_set(v___x_1562_, 1, lean_box(0));
lean_closure_set(v___x_1562_, 2, lean_box(0));
lean_closure_set(v___x_1562_, 3, v_inst_1551_);
lean_closure_set(v___x_1562_, 4, v_inst_1552_);
lean_closure_set(v___x_1562_, 5, v_inst_1553_);
v___x_1563_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1563_, 0, v___x_1561_);
lean_ctor_set(v___x_1563_, 1, v___x_1562_);
return v___x_1563_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonad(lean_object* v_00_u03b1_1564_, lean_object* v_00_u03b2_1565_, lean_object* v_m_1566_, lean_object* v_inst_1567_, lean_object* v_inst_1568_, lean_object* v_inst_1569_){
_start:
{
lean_object* v___x_1570_; 
v___x_1570_ = l_Lean_MonadStateCacheT_instMonad___redArg(v_inst_1567_, v_inst_1568_, v_inst_1569_);
return v___x_1570_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadLift___aux__1___redArg___lam__0(lean_object* v___y_1571_, lean_object* v_toPure_1572_, lean_object* v_a_1573_){
_start:
{
lean_object* v___x_1574_; lean_object* v___x_1575_; 
v___x_1574_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1574_, 0, v_a_1573_);
lean_ctor_set(v___x_1574_, 1, v___y_1571_);
v___x_1575_ = lean_apply_2(v_toPure_1572_, lean_box(0), v___x_1574_);
return v___x_1575_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadLift___aux__1___redArg(lean_object* v_inst_1576_, lean_object* v_t_1577_, lean_object* v___y_1578_){
_start:
{
lean_object* v_toApplicative_1579_; lean_object* v_toBind_1580_; lean_object* v_toPure_1581_; lean_object* v___f_1582_; lean_object* v___x_1583_; 
v_toApplicative_1579_ = lean_ctor_get(v_inst_1576_, 0);
lean_inc_ref(v_toApplicative_1579_);
v_toBind_1580_ = lean_ctor_get(v_inst_1576_, 1);
lean_inc(v_toBind_1580_);
lean_dec_ref(v_inst_1576_);
v_toPure_1581_ = lean_ctor_get(v_toApplicative_1579_, 1);
lean_inc(v_toPure_1581_);
lean_dec_ref(v_toApplicative_1579_);
v___f_1582_ = lean_alloc_closure((void*)(l_Lean_MonadStateCacheT_instMonadLift___aux__1___redArg___lam__0), 3, 2);
lean_closure_set(v___f_1582_, 0, v___y_1578_);
lean_closure_set(v___f_1582_, 1, v_toPure_1581_);
v___x_1583_ = lean_apply_4(v_toBind_1580_, lean_box(0), lean_box(0), v_t_1577_, v___f_1582_);
return v___x_1583_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadLift___aux__1(lean_object* v_00_u03b1_1584_, lean_object* v_00_u03b2_1585_, lean_object* v_m_1586_, lean_object* v_inst_1587_, lean_object* v_inst_1588_, lean_object* v_inst_1589_, lean_object* v_00_u03b1_1590_, lean_object* v_t_1591_, lean_object* v___y_1592_){
_start:
{
lean_object* v_toApplicative_1593_; lean_object* v_toBind_1594_; lean_object* v_toPure_1595_; lean_object* v___f_1596_; lean_object* v___x_1597_; 
v_toApplicative_1593_ = lean_ctor_get(v_inst_1589_, 0);
lean_inc_ref(v_toApplicative_1593_);
v_toBind_1594_ = lean_ctor_get(v_inst_1589_, 1);
lean_inc(v_toBind_1594_);
lean_dec_ref(v_inst_1589_);
v_toPure_1595_ = lean_ctor_get(v_toApplicative_1593_, 1);
lean_inc(v_toPure_1595_);
lean_dec_ref(v_toApplicative_1593_);
v___f_1596_ = lean_alloc_closure((void*)(l_Lean_MonadStateCacheT_instMonadLift___aux__1___redArg___lam__0), 3, 2);
lean_closure_set(v___f_1596_, 0, v___y_1592_);
lean_closure_set(v___f_1596_, 1, v_toPure_1595_);
v___x_1597_ = lean_apply_4(v_toBind_1594_, lean_box(0), lean_box(0), v_t_1591_, v___f_1596_);
return v___x_1597_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadLift___aux__1___boxed(lean_object* v_00_u03b1_1598_, lean_object* v_00_u03b2_1599_, lean_object* v_m_1600_, lean_object* v_inst_1601_, lean_object* v_inst_1602_, lean_object* v_inst_1603_, lean_object* v_00_u03b1_1604_, lean_object* v_t_1605_, lean_object* v___y_1606_){
_start:
{
lean_object* v_res_1607_; 
v_res_1607_ = l_Lean_MonadStateCacheT_instMonadLift___aux__1(v_00_u03b1_1598_, v_00_u03b2_1599_, v_m_1600_, v_inst_1601_, v_inst_1602_, v_inst_1603_, v_00_u03b1_1604_, v_t_1605_, v___y_1606_);
lean_dec_ref(v_inst_1602_);
lean_dec_ref(v_inst_1601_);
return v_res_1607_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadLift___redArg(lean_object* v_inst_1608_, lean_object* v_inst_1609_, lean_object* v_inst_1610_){
_start:
{
lean_object* v___x_1611_; 
v___x_1611_ = lean_alloc_closure((void*)(l_Lean_MonadStateCacheT_instMonadLift___aux__1___boxed), 9, 6);
lean_closure_set(v___x_1611_, 0, lean_box(0));
lean_closure_set(v___x_1611_, 1, lean_box(0));
lean_closure_set(v___x_1611_, 2, lean_box(0));
lean_closure_set(v___x_1611_, 3, v_inst_1608_);
lean_closure_set(v___x_1611_, 4, v_inst_1609_);
lean_closure_set(v___x_1611_, 5, v_inst_1610_);
return v___x_1611_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadLift(lean_object* v_00_u03b1_1612_, lean_object* v_00_u03b2_1613_, lean_object* v_m_1614_, lean_object* v_inst_1615_, lean_object* v_inst_1616_, lean_object* v_inst_1617_){
_start:
{
lean_object* v___x_1618_; 
v___x_1618_ = lean_alloc_closure((void*)(l_Lean_MonadStateCacheT_instMonadLift___aux__1___boxed), 9, 6);
lean_closure_set(v___x_1618_, 0, lean_box(0));
lean_closure_set(v___x_1618_, 1, lean_box(0));
lean_closure_set(v___x_1618_, 2, lean_box(0));
lean_closure_set(v___x_1618_, 3, v_inst_1615_);
lean_closure_set(v___x_1618_, 4, v_inst_1616_);
lean_closure_set(v___x_1618_, 5, v_inst_1617_);
return v___x_1618_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadExceptOf___aux__1___redArg(lean_object* v_inst_1619_, lean_object* v_inst_1620_, lean_object* v_a_1621_, lean_object* v___y_1622_){
_start:
{
lean_object* v_toApplicative_1623_; lean_object* v_throw_1624_; lean_object* v_toBind_1625_; lean_object* v_toPure_1626_; lean_object* v___x_1627_; lean_object* v___f_1628_; lean_object* v___x_1629_; 
v_toApplicative_1623_ = lean_ctor_get(v_inst_1619_, 0);
lean_inc_ref(v_toApplicative_1623_);
v_throw_1624_ = lean_ctor_get(v_inst_1620_, 0);
lean_inc(v_throw_1624_);
lean_dec_ref(v_inst_1620_);
v_toBind_1625_ = lean_ctor_get(v_inst_1619_, 1);
lean_inc(v_toBind_1625_);
lean_dec_ref(v_inst_1619_);
v_toPure_1626_ = lean_ctor_get(v_toApplicative_1623_, 1);
lean_inc(v_toPure_1626_);
lean_dec_ref(v_toApplicative_1623_);
v___x_1627_ = lean_apply_2(v_throw_1624_, lean_box(0), v_a_1621_);
v___f_1628_ = lean_alloc_closure((void*)(l_Lean_MonadStateCacheT_instMonadLift___aux__1___redArg___lam__0), 3, 2);
lean_closure_set(v___f_1628_, 0, v___y_1622_);
lean_closure_set(v___f_1628_, 1, v_toPure_1626_);
v___x_1629_ = lean_apply_4(v_toBind_1625_, lean_box(0), lean_box(0), v___x_1627_, v___f_1628_);
return v___x_1629_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadExceptOf___aux__1(lean_object* v_00_u03b1_1630_, lean_object* v_00_u03b2_1631_, lean_object* v_m_1632_, lean_object* v_inst_1633_, lean_object* v_inst_1634_, lean_object* v_inst_1635_, lean_object* v_00_u03b5_1636_, lean_object* v_inst_1637_, lean_object* v_00_u03b1_1638_, lean_object* v_a_1639_, lean_object* v___y_1640_){
_start:
{
lean_object* v_toApplicative_1641_; lean_object* v_throw_1642_; lean_object* v_toBind_1643_; lean_object* v_toPure_1644_; lean_object* v___x_1645_; lean_object* v___f_1646_; lean_object* v___x_1647_; 
v_toApplicative_1641_ = lean_ctor_get(v_inst_1635_, 0);
lean_inc_ref(v_toApplicative_1641_);
v_throw_1642_ = lean_ctor_get(v_inst_1637_, 0);
lean_inc(v_throw_1642_);
lean_dec_ref(v_inst_1637_);
v_toBind_1643_ = lean_ctor_get(v_inst_1635_, 1);
lean_inc(v_toBind_1643_);
lean_dec_ref(v_inst_1635_);
v_toPure_1644_ = lean_ctor_get(v_toApplicative_1641_, 1);
lean_inc(v_toPure_1644_);
lean_dec_ref(v_toApplicative_1641_);
v___x_1645_ = lean_apply_2(v_throw_1642_, lean_box(0), v_a_1639_);
v___f_1646_ = lean_alloc_closure((void*)(l_Lean_MonadStateCacheT_instMonadLift___aux__1___redArg___lam__0), 3, 2);
lean_closure_set(v___f_1646_, 0, v___y_1640_);
lean_closure_set(v___f_1646_, 1, v_toPure_1644_);
v___x_1647_ = lean_apply_4(v_toBind_1643_, lean_box(0), lean_box(0), v___x_1645_, v___f_1646_);
return v___x_1647_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadExceptOf___aux__1___boxed(lean_object* v_00_u03b1_1648_, lean_object* v_00_u03b2_1649_, lean_object* v_m_1650_, lean_object* v_inst_1651_, lean_object* v_inst_1652_, lean_object* v_inst_1653_, lean_object* v_00_u03b5_1654_, lean_object* v_inst_1655_, lean_object* v_00_u03b1_1656_, lean_object* v_a_1657_, lean_object* v___y_1658_){
_start:
{
lean_object* v_res_1659_; 
v_res_1659_ = l_Lean_MonadStateCacheT_instMonadExceptOf___aux__1(v_00_u03b1_1648_, v_00_u03b2_1649_, v_m_1650_, v_inst_1651_, v_inst_1652_, v_inst_1653_, v_00_u03b5_1654_, v_inst_1655_, v_00_u03b1_1656_, v_a_1657_, v___y_1658_);
lean_dec_ref(v_inst_1652_);
lean_dec_ref(v_inst_1651_);
return v_res_1659_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadExceptOf___aux__3___redArg___lam__0(lean_object* v_c_1660_, lean_object* v___y_1661_, lean_object* v_e_1662_){
_start:
{
lean_object* v___x_1663_; 
v___x_1663_ = lean_apply_2(v_c_1660_, v_e_1662_, v___y_1661_);
return v___x_1663_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadExceptOf___aux__3___redArg(lean_object* v_inst_1664_, lean_object* v_x_1665_, lean_object* v_c_1666_, lean_object* v___y_1667_){
_start:
{
lean_object* v_tryCatch_1668_; lean_object* v___f_1669_; lean_object* v___x_1670_; lean_object* v___x_1671_; 
v_tryCatch_1668_ = lean_ctor_get(v_inst_1664_, 1);
lean_inc(v_tryCatch_1668_);
lean_dec_ref(v_inst_1664_);
lean_inc_ref(v___y_1667_);
v___f_1669_ = lean_alloc_closure((void*)(l_Lean_MonadStateCacheT_instMonadExceptOf___aux__3___redArg___lam__0), 3, 2);
lean_closure_set(v___f_1669_, 0, v_c_1666_);
lean_closure_set(v___f_1669_, 1, v___y_1667_);
v___x_1670_ = lean_apply_1(v_x_1665_, v___y_1667_);
v___x_1671_ = lean_apply_3(v_tryCatch_1668_, lean_box(0), v___x_1670_, v___f_1669_);
return v___x_1671_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadExceptOf___aux__3(lean_object* v_00_u03b1_1672_, lean_object* v_00_u03b2_1673_, lean_object* v_m_1674_, lean_object* v_inst_1675_, lean_object* v_inst_1676_, lean_object* v_00_u03b5_1677_, lean_object* v_inst_1678_, lean_object* v_00_u03b1_1679_, lean_object* v_x_1680_, lean_object* v_c_1681_, lean_object* v___y_1682_){
_start:
{
lean_object* v_tryCatch_1683_; lean_object* v___f_1684_; lean_object* v___x_1685_; lean_object* v___x_1686_; 
v_tryCatch_1683_ = lean_ctor_get(v_inst_1678_, 1);
lean_inc(v_tryCatch_1683_);
lean_dec_ref(v_inst_1678_);
lean_inc_ref(v___y_1682_);
v___f_1684_ = lean_alloc_closure((void*)(l_Lean_MonadStateCacheT_instMonadExceptOf___aux__3___redArg___lam__0), 3, 2);
lean_closure_set(v___f_1684_, 0, v_c_1681_);
lean_closure_set(v___f_1684_, 1, v___y_1682_);
v___x_1685_ = lean_apply_1(v_x_1680_, v___y_1682_);
v___x_1686_ = lean_apply_3(v_tryCatch_1683_, lean_box(0), v___x_1685_, v___f_1684_);
return v___x_1686_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadExceptOf___aux__3___boxed(lean_object* v_00_u03b1_1687_, lean_object* v_00_u03b2_1688_, lean_object* v_m_1689_, lean_object* v_inst_1690_, lean_object* v_inst_1691_, lean_object* v_00_u03b5_1692_, lean_object* v_inst_1693_, lean_object* v_00_u03b1_1694_, lean_object* v_x_1695_, lean_object* v_c_1696_, lean_object* v___y_1697_){
_start:
{
lean_object* v_res_1698_; 
v_res_1698_ = l_Lean_MonadStateCacheT_instMonadExceptOf___aux__3(v_00_u03b1_1687_, v_00_u03b2_1688_, v_m_1689_, v_inst_1690_, v_inst_1691_, v_00_u03b5_1692_, v_inst_1693_, v_00_u03b1_1694_, v_x_1695_, v_c_1696_, v___y_1697_);
lean_dec_ref(v_inst_1691_);
lean_dec_ref(v_inst_1690_);
return v_res_1698_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadExceptOf___redArg(lean_object* v_inst_1699_, lean_object* v_inst_1700_, lean_object* v_inst_1701_, lean_object* v_inst_1702_){
_start:
{
lean_object* v___x_1703_; lean_object* v___x_1704_; lean_object* v___x_1705_; 
lean_inc_ref(v_inst_1702_);
lean_inc_ref(v_inst_1700_);
lean_inc_ref(v_inst_1699_);
v___x_1703_ = lean_alloc_closure((void*)(l_Lean_MonadStateCacheT_instMonadExceptOf___aux__1___boxed), 11, 8);
lean_closure_set(v___x_1703_, 0, lean_box(0));
lean_closure_set(v___x_1703_, 1, lean_box(0));
lean_closure_set(v___x_1703_, 2, lean_box(0));
lean_closure_set(v___x_1703_, 3, v_inst_1699_);
lean_closure_set(v___x_1703_, 4, v_inst_1700_);
lean_closure_set(v___x_1703_, 5, v_inst_1701_);
lean_closure_set(v___x_1703_, 6, lean_box(0));
lean_closure_set(v___x_1703_, 7, v_inst_1702_);
v___x_1704_ = lean_alloc_closure((void*)(l_Lean_MonadStateCacheT_instMonadExceptOf___aux__3___boxed), 11, 7);
lean_closure_set(v___x_1704_, 0, lean_box(0));
lean_closure_set(v___x_1704_, 1, lean_box(0));
lean_closure_set(v___x_1704_, 2, lean_box(0));
lean_closure_set(v___x_1704_, 3, v_inst_1699_);
lean_closure_set(v___x_1704_, 4, v_inst_1700_);
lean_closure_set(v___x_1704_, 5, lean_box(0));
lean_closure_set(v___x_1704_, 6, v_inst_1702_);
v___x_1705_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1705_, 0, v___x_1703_);
lean_ctor_set(v___x_1705_, 1, v___x_1704_);
return v___x_1705_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadExceptOf(lean_object* v_00_u03b1_1706_, lean_object* v_00_u03b2_1707_, lean_object* v_m_1708_, lean_object* v_inst_1709_, lean_object* v_inst_1710_, lean_object* v_inst_1711_, lean_object* v_00_u03b5_1712_, lean_object* v_inst_1713_){
_start:
{
lean_object* v___x_1714_; 
v___x_1714_ = l_Lean_MonadStateCacheT_instMonadExceptOf___redArg(v_inst_1709_, v_inst_1710_, v_inst_1711_, v_inst_1713_);
return v___x_1714_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadControl___aux__1___redArg___lam__0(lean_object* v_fst_1715_, lean_object* v_00_u03b2_1716_, lean_object* v_x_1717_){
_start:
{
lean_object* v___x_1718_; 
v___x_1718_ = lean_apply_1(v_x_1717_, v_fst_1715_);
return v___x_1718_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadControl___aux__1___redArg___lam__1(lean_object* v_snd_1719_, lean_object* v_toPure_1720_, lean_object* v_a_1721_){
_start:
{
lean_object* v___x_1722_; lean_object* v___x_1723_; 
v___x_1722_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1722_, 0, v_a_1721_);
lean_ctor_set(v___x_1722_, 1, v_snd_1719_);
v___x_1723_ = lean_apply_2(v_toPure_1720_, lean_box(0), v___x_1722_);
return v___x_1723_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadControl___aux__1___redArg___lam__2(lean_object* v_f_1724_, lean_object* v_toPure_1725_, lean_object* v_toBind_1726_, lean_object* v_____x_1727_){
_start:
{
lean_object* v_fst_1728_; lean_object* v_snd_1729_; lean_object* v___f_1730_; lean_object* v___x_1731_; lean_object* v___f_1732_; lean_object* v___x_1733_; 
v_fst_1728_ = lean_ctor_get(v_____x_1727_, 0);
lean_inc(v_fst_1728_);
v_snd_1729_ = lean_ctor_get(v_____x_1727_, 1);
lean_inc(v_snd_1729_);
lean_dec_ref(v_____x_1727_);
v___f_1730_ = lean_alloc_closure((void*)(l_Lean_MonadStateCacheT_instMonadControl___aux__1___redArg___lam__0), 3, 1);
lean_closure_set(v___f_1730_, 0, v_fst_1728_);
v___x_1731_ = lean_apply_1(v_f_1724_, v___f_1730_);
v___f_1732_ = lean_alloc_closure((void*)(l_Lean_MonadStateCacheT_instMonadControl___aux__1___redArg___lam__1), 3, 2);
lean_closure_set(v___f_1732_, 0, v_snd_1729_);
lean_closure_set(v___f_1732_, 1, v_toPure_1725_);
v___x_1733_ = lean_apply_4(v_toBind_1726_, lean_box(0), lean_box(0), v___x_1731_, v___f_1732_);
return v___x_1733_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadControl___aux__1___redArg(lean_object* v_inst_1734_, lean_object* v_f_1735_, lean_object* v___y_1736_){
_start:
{
lean_object* v_toApplicative_1737_; lean_object* v_toBind_1738_; lean_object* v___x_1740_; uint8_t v_isShared_1741_; uint8_t v_isSharedCheck_1749_; 
v_toApplicative_1737_ = lean_ctor_get(v_inst_1734_, 0);
v_toBind_1738_ = lean_ctor_get(v_inst_1734_, 1);
v_isSharedCheck_1749_ = !lean_is_exclusive(v_inst_1734_);
if (v_isSharedCheck_1749_ == 0)
{
v___x_1740_ = v_inst_1734_;
v_isShared_1741_ = v_isSharedCheck_1749_;
goto v_resetjp_1739_;
}
else
{
lean_inc(v_toBind_1738_);
lean_inc(v_toApplicative_1737_);
lean_dec(v_inst_1734_);
v___x_1740_ = lean_box(0);
v_isShared_1741_ = v_isSharedCheck_1749_;
goto v_resetjp_1739_;
}
v_resetjp_1739_:
{
lean_object* v_toPure_1742_; lean_object* v___f_1743_; lean_object* v___x_1745_; 
v_toPure_1742_ = lean_ctor_get(v_toApplicative_1737_, 1);
lean_inc_n(v_toPure_1742_, 2);
lean_dec_ref(v_toApplicative_1737_);
lean_inc(v_toBind_1738_);
v___f_1743_ = lean_alloc_closure((void*)(l_Lean_MonadStateCacheT_instMonadControl___aux__1___redArg___lam__2), 4, 3);
lean_closure_set(v___f_1743_, 0, v_f_1735_);
lean_closure_set(v___f_1743_, 1, v_toPure_1742_);
lean_closure_set(v___f_1743_, 2, v_toBind_1738_);
lean_inc_ref(v___y_1736_);
if (v_isShared_1741_ == 0)
{
lean_ctor_set(v___x_1740_, 1, v___y_1736_);
lean_ctor_set(v___x_1740_, 0, v___y_1736_);
v___x_1745_ = v___x_1740_;
goto v_reusejp_1744_;
}
else
{
lean_object* v_reuseFailAlloc_1748_; 
v_reuseFailAlloc_1748_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1748_, 0, v___y_1736_);
lean_ctor_set(v_reuseFailAlloc_1748_, 1, v___y_1736_);
v___x_1745_ = v_reuseFailAlloc_1748_;
goto v_reusejp_1744_;
}
v_reusejp_1744_:
{
lean_object* v___x_1746_; lean_object* v___x_1747_; 
v___x_1746_ = lean_apply_2(v_toPure_1742_, lean_box(0), v___x_1745_);
v___x_1747_ = lean_apply_4(v_toBind_1738_, lean_box(0), lean_box(0), v___x_1746_, v___f_1743_);
return v___x_1747_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadControl___aux__1(lean_object* v_00_u03b1_1750_, lean_object* v_00_u03b2_1751_, lean_object* v_m_1752_, lean_object* v_inst_1753_, lean_object* v_inst_1754_, lean_object* v_inst_1755_, lean_object* v_00_u03b1_1756_, lean_object* v_f_1757_, lean_object* v___y_1758_){
_start:
{
lean_object* v_toApplicative_1759_; lean_object* v_toBind_1760_; lean_object* v___x_1762_; uint8_t v_isShared_1763_; uint8_t v_isSharedCheck_1771_; 
v_toApplicative_1759_ = lean_ctor_get(v_inst_1755_, 0);
v_toBind_1760_ = lean_ctor_get(v_inst_1755_, 1);
v_isSharedCheck_1771_ = !lean_is_exclusive(v_inst_1755_);
if (v_isSharedCheck_1771_ == 0)
{
v___x_1762_ = v_inst_1755_;
v_isShared_1763_ = v_isSharedCheck_1771_;
goto v_resetjp_1761_;
}
else
{
lean_inc(v_toBind_1760_);
lean_inc(v_toApplicative_1759_);
lean_dec(v_inst_1755_);
v___x_1762_ = lean_box(0);
v_isShared_1763_ = v_isSharedCheck_1771_;
goto v_resetjp_1761_;
}
v_resetjp_1761_:
{
lean_object* v_toPure_1764_; lean_object* v___f_1765_; lean_object* v___x_1767_; 
v_toPure_1764_ = lean_ctor_get(v_toApplicative_1759_, 1);
lean_inc_n(v_toPure_1764_, 2);
lean_dec_ref(v_toApplicative_1759_);
lean_inc(v_toBind_1760_);
v___f_1765_ = lean_alloc_closure((void*)(l_Lean_MonadStateCacheT_instMonadControl___aux__1___redArg___lam__2), 4, 3);
lean_closure_set(v___f_1765_, 0, v_f_1757_);
lean_closure_set(v___f_1765_, 1, v_toPure_1764_);
lean_closure_set(v___f_1765_, 2, v_toBind_1760_);
lean_inc_ref(v___y_1758_);
if (v_isShared_1763_ == 0)
{
lean_ctor_set(v___x_1762_, 1, v___y_1758_);
lean_ctor_set(v___x_1762_, 0, v___y_1758_);
v___x_1767_ = v___x_1762_;
goto v_reusejp_1766_;
}
else
{
lean_object* v_reuseFailAlloc_1770_; 
v_reuseFailAlloc_1770_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1770_, 0, v___y_1758_);
lean_ctor_set(v_reuseFailAlloc_1770_, 1, v___y_1758_);
v___x_1767_ = v_reuseFailAlloc_1770_;
goto v_reusejp_1766_;
}
v_reusejp_1766_:
{
lean_object* v___x_1768_; lean_object* v___x_1769_; 
v___x_1768_ = lean_apply_2(v_toPure_1764_, lean_box(0), v___x_1767_);
v___x_1769_ = lean_apply_4(v_toBind_1760_, lean_box(0), lean_box(0), v___x_1768_, v___f_1765_);
return v___x_1769_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadControl___aux__1___boxed(lean_object* v_00_u03b1_1772_, lean_object* v_00_u03b2_1773_, lean_object* v_m_1774_, lean_object* v_inst_1775_, lean_object* v_inst_1776_, lean_object* v_inst_1777_, lean_object* v_00_u03b1_1778_, lean_object* v_f_1779_, lean_object* v___y_1780_){
_start:
{
lean_object* v_res_1781_; 
v_res_1781_ = l_Lean_MonadStateCacheT_instMonadControl___aux__1(v_00_u03b1_1772_, v_00_u03b2_1773_, v_m_1774_, v_inst_1775_, v_inst_1776_, v_inst_1777_, v_00_u03b1_1778_, v_f_1779_, v___y_1780_);
lean_dec_ref(v_inst_1776_);
lean_dec_ref(v_inst_1775_);
return v_res_1781_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadControl___aux__3___redArg___lam__0(lean_object* v_fst_1782_, lean_object* v_toPure_1783_, lean_object* v_____x_1784_){
_start:
{
lean_object* v_snd_1785_; lean_object* v___x_1787_; uint8_t v_isShared_1788_; uint8_t v_isSharedCheck_1793_; 
v_snd_1785_ = lean_ctor_get(v_____x_1784_, 1);
v_isSharedCheck_1793_ = !lean_is_exclusive(v_____x_1784_);
if (v_isSharedCheck_1793_ == 0)
{
lean_object* v_unused_1794_; 
v_unused_1794_ = lean_ctor_get(v_____x_1784_, 0);
lean_dec(v_unused_1794_);
v___x_1787_ = v_____x_1784_;
v_isShared_1788_ = v_isSharedCheck_1793_;
goto v_resetjp_1786_;
}
else
{
lean_inc(v_snd_1785_);
lean_dec(v_____x_1784_);
v___x_1787_ = lean_box(0);
v_isShared_1788_ = v_isSharedCheck_1793_;
goto v_resetjp_1786_;
}
v_resetjp_1786_:
{
lean_object* v___x_1790_; 
if (v_isShared_1788_ == 0)
{
lean_ctor_set(v___x_1787_, 0, v_fst_1782_);
v___x_1790_ = v___x_1787_;
goto v_reusejp_1789_;
}
else
{
lean_object* v_reuseFailAlloc_1792_; 
v_reuseFailAlloc_1792_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1792_, 0, v_fst_1782_);
lean_ctor_set(v_reuseFailAlloc_1792_, 1, v_snd_1785_);
v___x_1790_ = v_reuseFailAlloc_1792_;
goto v_reusejp_1789_;
}
v_reusejp_1789_:
{
lean_object* v___x_1791_; 
v___x_1791_ = lean_apply_2(v_toPure_1783_, lean_box(0), v___x_1790_);
return v___x_1791_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadControl___aux__3___redArg___lam__1(lean_object* v_toPure_1795_, lean_object* v_toBind_1796_, lean_object* v_____x_1797_){
_start:
{
lean_object* v_fst_1798_; lean_object* v_fst_1799_; lean_object* v_snd_1800_; lean_object* v___x_1802_; uint8_t v_isShared_1803_; uint8_t v_isSharedCheck_1811_; 
v_fst_1798_ = lean_ctor_get(v_____x_1797_, 0);
lean_inc(v_fst_1798_);
lean_dec_ref(v_____x_1797_);
v_fst_1799_ = lean_ctor_get(v_fst_1798_, 0);
v_snd_1800_ = lean_ctor_get(v_fst_1798_, 1);
v_isSharedCheck_1811_ = !lean_is_exclusive(v_fst_1798_);
if (v_isSharedCheck_1811_ == 0)
{
v___x_1802_ = v_fst_1798_;
v_isShared_1803_ = v_isSharedCheck_1811_;
goto v_resetjp_1801_;
}
else
{
lean_inc(v_snd_1800_);
lean_inc(v_fst_1799_);
lean_dec(v_fst_1798_);
v___x_1802_ = lean_box(0);
v_isShared_1803_ = v_isSharedCheck_1811_;
goto v_resetjp_1801_;
}
v_resetjp_1801_:
{
lean_object* v___f_1804_; lean_object* v___x_1805_; lean_object* v___x_1807_; 
lean_inc(v_toPure_1795_);
v___f_1804_ = lean_alloc_closure((void*)(l_Lean_MonadStateCacheT_instMonadControl___aux__3___redArg___lam__0), 3, 2);
lean_closure_set(v___f_1804_, 0, v_fst_1799_);
lean_closure_set(v___f_1804_, 1, v_toPure_1795_);
v___x_1805_ = lean_box(0);
if (v_isShared_1803_ == 0)
{
lean_ctor_set(v___x_1802_, 0, v___x_1805_);
v___x_1807_ = v___x_1802_;
goto v_reusejp_1806_;
}
else
{
lean_object* v_reuseFailAlloc_1810_; 
v_reuseFailAlloc_1810_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1810_, 0, v___x_1805_);
lean_ctor_set(v_reuseFailAlloc_1810_, 1, v_snd_1800_);
v___x_1807_ = v_reuseFailAlloc_1810_;
goto v_reusejp_1806_;
}
v_reusejp_1806_:
{
lean_object* v___x_1808_; lean_object* v___x_1809_; 
v___x_1808_ = lean_apply_2(v_toPure_1795_, lean_box(0), v___x_1807_);
v___x_1809_ = lean_apply_4(v_toBind_1796_, lean_box(0), lean_box(0), v___x_1808_, v___f_1804_);
return v___x_1809_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadControl___aux__3___redArg___lam__2(lean_object* v___y_1812_, lean_object* v_toPure_1813_, lean_object* v_a_1814_){
_start:
{
lean_object* v___x_1815_; lean_object* v___x_1816_; 
v___x_1815_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1815_, 0, v_a_1814_);
lean_ctor_set(v___x_1815_, 1, v___y_1812_);
v___x_1816_ = lean_apply_2(v_toPure_1813_, lean_box(0), v___x_1815_);
return v___x_1816_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadControl___aux__3___redArg(lean_object* v_inst_1817_, lean_object* v_x_1818_, lean_object* v___y_1819_){
_start:
{
lean_object* v_toApplicative_1820_; lean_object* v_toBind_1821_; lean_object* v_toPure_1822_; lean_object* v___f_1823_; lean_object* v___f_1824_; lean_object* v___x_1825_; lean_object* v___x_1826_; 
v_toApplicative_1820_ = lean_ctor_get(v_inst_1817_, 0);
lean_inc_ref(v_toApplicative_1820_);
v_toBind_1821_ = lean_ctor_get(v_inst_1817_, 1);
lean_inc_n(v_toBind_1821_, 3);
lean_dec_ref(v_inst_1817_);
v_toPure_1822_ = lean_ctor_get(v_toApplicative_1820_, 1);
lean_inc_n(v_toPure_1822_, 2);
lean_dec_ref(v_toApplicative_1820_);
v___f_1823_ = lean_alloc_closure((void*)(l_Lean_MonadStateCacheT_instMonadControl___aux__3___redArg___lam__1), 3, 2);
lean_closure_set(v___f_1823_, 0, v_toPure_1822_);
lean_closure_set(v___f_1823_, 1, v_toBind_1821_);
v___f_1824_ = lean_alloc_closure((void*)(l_Lean_MonadStateCacheT_instMonadControl___aux__3___redArg___lam__2), 3, 2);
lean_closure_set(v___f_1824_, 0, v___y_1819_);
lean_closure_set(v___f_1824_, 1, v_toPure_1822_);
v___x_1825_ = lean_apply_4(v_toBind_1821_, lean_box(0), lean_box(0), v_x_1818_, v___f_1824_);
v___x_1826_ = lean_apply_4(v_toBind_1821_, lean_box(0), lean_box(0), v___x_1825_, v___f_1823_);
return v___x_1826_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadControl___aux__3(lean_object* v_00_u03b1_1827_, lean_object* v_00_u03b2_1828_, lean_object* v_m_1829_, lean_object* v_inst_1830_, lean_object* v_inst_1831_, lean_object* v_inst_1832_, lean_object* v_00_u03b1_1833_, lean_object* v_x_1834_, lean_object* v___y_1835_){
_start:
{
lean_object* v_toApplicative_1836_; lean_object* v_toBind_1837_; lean_object* v_toPure_1838_; lean_object* v___f_1839_; lean_object* v___f_1840_; lean_object* v___x_1841_; lean_object* v___x_1842_; 
v_toApplicative_1836_ = lean_ctor_get(v_inst_1832_, 0);
lean_inc_ref(v_toApplicative_1836_);
v_toBind_1837_ = lean_ctor_get(v_inst_1832_, 1);
lean_inc_n(v_toBind_1837_, 3);
lean_dec_ref(v_inst_1832_);
v_toPure_1838_ = lean_ctor_get(v_toApplicative_1836_, 1);
lean_inc_n(v_toPure_1838_, 2);
lean_dec_ref(v_toApplicative_1836_);
v___f_1839_ = lean_alloc_closure((void*)(l_Lean_MonadStateCacheT_instMonadControl___aux__3___redArg___lam__1), 3, 2);
lean_closure_set(v___f_1839_, 0, v_toPure_1838_);
lean_closure_set(v___f_1839_, 1, v_toBind_1837_);
v___f_1840_ = lean_alloc_closure((void*)(l_Lean_MonadStateCacheT_instMonadControl___aux__3___redArg___lam__2), 3, 2);
lean_closure_set(v___f_1840_, 0, v___y_1835_);
lean_closure_set(v___f_1840_, 1, v_toPure_1838_);
v___x_1841_ = lean_apply_4(v_toBind_1837_, lean_box(0), lean_box(0), v_x_1834_, v___f_1840_);
v___x_1842_ = lean_apply_4(v_toBind_1837_, lean_box(0), lean_box(0), v___x_1841_, v___f_1839_);
return v___x_1842_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadControl___aux__3___boxed(lean_object* v_00_u03b1_1843_, lean_object* v_00_u03b2_1844_, lean_object* v_m_1845_, lean_object* v_inst_1846_, lean_object* v_inst_1847_, lean_object* v_inst_1848_, lean_object* v_00_u03b1_1849_, lean_object* v_x_1850_, lean_object* v___y_1851_){
_start:
{
lean_object* v_res_1852_; 
v_res_1852_ = l_Lean_MonadStateCacheT_instMonadControl___aux__3(v_00_u03b1_1843_, v_00_u03b2_1844_, v_m_1845_, v_inst_1846_, v_inst_1847_, v_inst_1848_, v_00_u03b1_1849_, v_x_1850_, v___y_1851_);
lean_dec_ref(v_inst_1847_);
lean_dec_ref(v_inst_1846_);
return v_res_1852_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadControl___redArg(lean_object* v_inst_1853_, lean_object* v_inst_1854_, lean_object* v_inst_1855_){
_start:
{
lean_object* v___x_1856_; lean_object* v___x_1857_; lean_object* v___x_1858_; 
lean_inc_ref(v_inst_1855_);
lean_inc_ref(v_inst_1854_);
lean_inc_ref(v_inst_1853_);
v___x_1856_ = lean_alloc_closure((void*)(l_Lean_MonadStateCacheT_instMonadControl___aux__1___boxed), 9, 6);
lean_closure_set(v___x_1856_, 0, lean_box(0));
lean_closure_set(v___x_1856_, 1, lean_box(0));
lean_closure_set(v___x_1856_, 2, lean_box(0));
lean_closure_set(v___x_1856_, 3, v_inst_1853_);
lean_closure_set(v___x_1856_, 4, v_inst_1854_);
lean_closure_set(v___x_1856_, 5, v_inst_1855_);
v___x_1857_ = lean_alloc_closure((void*)(l_Lean_MonadStateCacheT_instMonadControl___aux__3___boxed), 9, 6);
lean_closure_set(v___x_1857_, 0, lean_box(0));
lean_closure_set(v___x_1857_, 1, lean_box(0));
lean_closure_set(v___x_1857_, 2, lean_box(0));
lean_closure_set(v___x_1857_, 3, v_inst_1853_);
lean_closure_set(v___x_1857_, 4, v_inst_1854_);
lean_closure_set(v___x_1857_, 5, v_inst_1855_);
v___x_1858_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1858_, 0, v___x_1856_);
lean_ctor_set(v___x_1858_, 1, v___x_1857_);
return v___x_1858_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadControl(lean_object* v_00_u03b1_1859_, lean_object* v_00_u03b2_1860_, lean_object* v_m_1861_, lean_object* v_inst_1862_, lean_object* v_inst_1863_, lean_object* v_inst_1864_){
_start:
{
lean_object* v___x_1865_; 
v___x_1865_ = l_Lean_MonadStateCacheT_instMonadControl___redArg(v_inst_1862_, v_inst_1863_, v_inst_1864_);
return v___x_1865_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadFinally___aux__1___redArg___lam__0(lean_object* v_h_1866_, lean_object* v___y_1867_, lean_object* v_x_1868_){
_start:
{
if (lean_obj_tag(v_x_1868_) == 0)
{
lean_object* v___x_1869_; lean_object* v___x_1870_; 
v___x_1869_ = lean_box(0);
v___x_1870_ = lean_apply_2(v_h_1866_, v___x_1869_, v___y_1867_);
return v___x_1870_;
}
else
{
lean_object* v_val_1871_; lean_object* v___x_1873_; uint8_t v_isShared_1874_; uint8_t v_isSharedCheck_1881_; 
lean_dec_ref(v___y_1867_);
v_val_1871_ = lean_ctor_get(v_x_1868_, 0);
v_isSharedCheck_1881_ = !lean_is_exclusive(v_x_1868_);
if (v_isSharedCheck_1881_ == 0)
{
v___x_1873_ = v_x_1868_;
v_isShared_1874_ = v_isSharedCheck_1881_;
goto v_resetjp_1872_;
}
else
{
lean_inc(v_val_1871_);
lean_dec(v_x_1868_);
v___x_1873_ = lean_box(0);
v_isShared_1874_ = v_isSharedCheck_1881_;
goto v_resetjp_1872_;
}
v_resetjp_1872_:
{
lean_object* v_fst_1875_; lean_object* v_snd_1876_; lean_object* v___x_1878_; 
v_fst_1875_ = lean_ctor_get(v_val_1871_, 0);
lean_inc(v_fst_1875_);
v_snd_1876_ = lean_ctor_get(v_val_1871_, 1);
lean_inc(v_snd_1876_);
lean_dec(v_val_1871_);
if (v_isShared_1874_ == 0)
{
lean_ctor_set(v___x_1873_, 0, v_fst_1875_);
v___x_1878_ = v___x_1873_;
goto v_reusejp_1877_;
}
else
{
lean_object* v_reuseFailAlloc_1880_; 
v_reuseFailAlloc_1880_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1880_, 0, v_fst_1875_);
v___x_1878_ = v_reuseFailAlloc_1880_;
goto v_reusejp_1877_;
}
v_reusejp_1877_:
{
lean_object* v___x_1879_; 
v___x_1879_ = lean_apply_2(v_h_1866_, v___x_1878_, v_snd_1876_);
return v___x_1879_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadFinally___aux__1___redArg___lam__1(lean_object* v_toPure_1882_, lean_object* v_____x_1883_){
_start:
{
lean_object* v_fst_1884_; lean_object* v_snd_1885_; lean_object* v_fst_1886_; lean_object* v___x_1888_; uint8_t v_isShared_1889_; uint8_t v_isSharedCheck_1903_; 
v_fst_1884_ = lean_ctor_get(v_____x_1883_, 0);
lean_inc(v_fst_1884_);
v_snd_1885_ = lean_ctor_get(v_____x_1883_, 1);
lean_inc(v_snd_1885_);
lean_dec_ref(v_____x_1883_);
v_fst_1886_ = lean_ctor_get(v_fst_1884_, 0);
v_isSharedCheck_1903_ = !lean_is_exclusive(v_fst_1884_);
if (v_isSharedCheck_1903_ == 0)
{
lean_object* v_unused_1904_; 
v_unused_1904_ = lean_ctor_get(v_fst_1884_, 1);
lean_dec(v_unused_1904_);
v___x_1888_ = v_fst_1884_;
v_isShared_1889_ = v_isSharedCheck_1903_;
goto v_resetjp_1887_;
}
else
{
lean_inc(v_fst_1886_);
lean_dec(v_fst_1884_);
v___x_1888_ = lean_box(0);
v_isShared_1889_ = v_isSharedCheck_1903_;
goto v_resetjp_1887_;
}
v_resetjp_1887_:
{
lean_object* v_fst_1890_; lean_object* v_snd_1891_; lean_object* v___x_1893_; uint8_t v_isShared_1894_; uint8_t v_isSharedCheck_1902_; 
v_fst_1890_ = lean_ctor_get(v_snd_1885_, 0);
v_snd_1891_ = lean_ctor_get(v_snd_1885_, 1);
v_isSharedCheck_1902_ = !lean_is_exclusive(v_snd_1885_);
if (v_isSharedCheck_1902_ == 0)
{
v___x_1893_ = v_snd_1885_;
v_isShared_1894_ = v_isSharedCheck_1902_;
goto v_resetjp_1892_;
}
else
{
lean_inc(v_snd_1891_);
lean_inc(v_fst_1890_);
lean_dec(v_snd_1885_);
v___x_1893_ = lean_box(0);
v_isShared_1894_ = v_isSharedCheck_1902_;
goto v_resetjp_1892_;
}
v_resetjp_1892_:
{
lean_object* v___x_1896_; 
if (v_isShared_1894_ == 0)
{
lean_ctor_set(v___x_1893_, 1, v_fst_1890_);
lean_ctor_set(v___x_1893_, 0, v_fst_1886_);
v___x_1896_ = v___x_1893_;
goto v_reusejp_1895_;
}
else
{
lean_object* v_reuseFailAlloc_1901_; 
v_reuseFailAlloc_1901_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1901_, 0, v_fst_1886_);
lean_ctor_set(v_reuseFailAlloc_1901_, 1, v_fst_1890_);
v___x_1896_ = v_reuseFailAlloc_1901_;
goto v_reusejp_1895_;
}
v_reusejp_1895_:
{
lean_object* v___x_1898_; 
if (v_isShared_1889_ == 0)
{
lean_ctor_set(v___x_1888_, 1, v_snd_1891_);
lean_ctor_set(v___x_1888_, 0, v___x_1896_);
v___x_1898_ = v___x_1888_;
goto v_reusejp_1897_;
}
else
{
lean_object* v_reuseFailAlloc_1900_; 
v_reuseFailAlloc_1900_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1900_, 0, v___x_1896_);
lean_ctor_set(v_reuseFailAlloc_1900_, 1, v_snd_1891_);
v___x_1898_ = v_reuseFailAlloc_1900_;
goto v_reusejp_1897_;
}
v_reusejp_1897_:
{
lean_object* v___x_1899_; 
v___x_1899_ = lean_apply_2(v_toPure_1882_, lean_box(0), v___x_1898_);
return v___x_1899_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadFinally___aux__1___redArg(lean_object* v_inst_1905_, lean_object* v_inst_1906_, lean_object* v_x_1907_, lean_object* v_h_1908_, lean_object* v___y_1909_){
_start:
{
lean_object* v_toApplicative_1910_; lean_object* v_toBind_1911_; lean_object* v_toPure_1912_; lean_object* v___f_1913_; lean_object* v___f_1914_; lean_object* v___x_1915_; lean_object* v___x_1916_; lean_object* v___x_1917_; 
v_toApplicative_1910_ = lean_ctor_get(v_inst_1905_, 0);
lean_inc_ref(v_toApplicative_1910_);
v_toBind_1911_ = lean_ctor_get(v_inst_1905_, 1);
lean_inc(v_toBind_1911_);
lean_dec_ref(v_inst_1905_);
v_toPure_1912_ = lean_ctor_get(v_toApplicative_1910_, 1);
lean_inc(v_toPure_1912_);
lean_dec_ref(v_toApplicative_1910_);
lean_inc_ref(v___y_1909_);
v___f_1913_ = lean_alloc_closure((void*)(l_Lean_MonadStateCacheT_instMonadFinally___aux__1___redArg___lam__0), 3, 2);
lean_closure_set(v___f_1913_, 0, v_h_1908_);
lean_closure_set(v___f_1913_, 1, v___y_1909_);
v___f_1914_ = lean_alloc_closure((void*)(l_Lean_MonadStateCacheT_instMonadFinally___aux__1___redArg___lam__1), 2, 1);
lean_closure_set(v___f_1914_, 0, v_toPure_1912_);
v___x_1915_ = lean_apply_1(v_x_1907_, v___y_1909_);
v___x_1916_ = lean_apply_4(v_inst_1906_, lean_box(0), lean_box(0), v___x_1915_, v___f_1913_);
v___x_1917_ = lean_apply_4(v_toBind_1911_, lean_box(0), lean_box(0), v___x_1916_, v___f_1914_);
return v___x_1917_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadFinally___aux__1(lean_object* v_00_u03b1_1918_, lean_object* v_00_u03b2_1919_, lean_object* v_m_1920_, lean_object* v_inst_1921_, lean_object* v_inst_1922_, lean_object* v_inst_1923_, lean_object* v_inst_1924_, lean_object* v_00_u03b1_1925_, lean_object* v_00_u03b2_1926_, lean_object* v_x_1927_, lean_object* v_h_1928_, lean_object* v___y_1929_){
_start:
{
lean_object* v_toApplicative_1930_; lean_object* v_toBind_1931_; lean_object* v_toPure_1932_; lean_object* v___f_1933_; lean_object* v___f_1934_; lean_object* v___x_1935_; lean_object* v___x_1936_; lean_object* v___x_1937_; 
v_toApplicative_1930_ = lean_ctor_get(v_inst_1923_, 0);
lean_inc_ref(v_toApplicative_1930_);
v_toBind_1931_ = lean_ctor_get(v_inst_1923_, 1);
lean_inc(v_toBind_1931_);
lean_dec_ref(v_inst_1923_);
v_toPure_1932_ = lean_ctor_get(v_toApplicative_1930_, 1);
lean_inc(v_toPure_1932_);
lean_dec_ref(v_toApplicative_1930_);
lean_inc_ref(v___y_1929_);
v___f_1933_ = lean_alloc_closure((void*)(l_Lean_MonadStateCacheT_instMonadFinally___aux__1___redArg___lam__0), 3, 2);
lean_closure_set(v___f_1933_, 0, v_h_1928_);
lean_closure_set(v___f_1933_, 1, v___y_1929_);
v___f_1934_ = lean_alloc_closure((void*)(l_Lean_MonadStateCacheT_instMonadFinally___aux__1___redArg___lam__1), 2, 1);
lean_closure_set(v___f_1934_, 0, v_toPure_1932_);
v___x_1935_ = lean_apply_1(v_x_1927_, v___y_1929_);
v___x_1936_ = lean_apply_4(v_inst_1924_, lean_box(0), lean_box(0), v___x_1935_, v___f_1933_);
v___x_1937_ = lean_apply_4(v_toBind_1931_, lean_box(0), lean_box(0), v___x_1936_, v___f_1934_);
return v___x_1937_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadFinally___aux__1___boxed(lean_object* v_00_u03b1_1938_, lean_object* v_00_u03b2_1939_, lean_object* v_m_1940_, lean_object* v_inst_1941_, lean_object* v_inst_1942_, lean_object* v_inst_1943_, lean_object* v_inst_1944_, lean_object* v_00_u03b1_1945_, lean_object* v_00_u03b2_1946_, lean_object* v_x_1947_, lean_object* v_h_1948_, lean_object* v___y_1949_){
_start:
{
lean_object* v_res_1950_; 
v_res_1950_ = l_Lean_MonadStateCacheT_instMonadFinally___aux__1(v_00_u03b1_1938_, v_00_u03b2_1939_, v_m_1940_, v_inst_1941_, v_inst_1942_, v_inst_1943_, v_inst_1944_, v_00_u03b1_1945_, v_00_u03b2_1946_, v_x_1947_, v_h_1948_, v___y_1949_);
lean_dec_ref(v_inst_1942_);
lean_dec_ref(v_inst_1941_);
return v_res_1950_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadFinally___redArg(lean_object* v_inst_1951_, lean_object* v_inst_1952_, lean_object* v_inst_1953_, lean_object* v_inst_1954_){
_start:
{
lean_object* v___x_1955_; 
v___x_1955_ = lean_alloc_closure((void*)(l_Lean_MonadStateCacheT_instMonadFinally___aux__1___boxed), 12, 7);
lean_closure_set(v___x_1955_, 0, lean_box(0));
lean_closure_set(v___x_1955_, 1, lean_box(0));
lean_closure_set(v___x_1955_, 2, lean_box(0));
lean_closure_set(v___x_1955_, 3, v_inst_1951_);
lean_closure_set(v___x_1955_, 4, v_inst_1952_);
lean_closure_set(v___x_1955_, 5, v_inst_1953_);
lean_closure_set(v___x_1955_, 6, v_inst_1954_);
return v___x_1955_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadFinally(lean_object* v_00_u03b1_1956_, lean_object* v_00_u03b2_1957_, lean_object* v_m_1958_, lean_object* v_inst_1959_, lean_object* v_inst_1960_, lean_object* v_inst_1961_, lean_object* v_inst_1962_){
_start:
{
lean_object* v___x_1963_; 
v___x_1963_ = lean_alloc_closure((void*)(l_Lean_MonadStateCacheT_instMonadFinally___aux__1___boxed), 12, 7);
lean_closure_set(v___x_1963_, 0, lean_box(0));
lean_closure_set(v___x_1963_, 1, lean_box(0));
lean_closure_set(v___x_1963_, 2, lean_box(0));
lean_closure_set(v___x_1963_, 3, v_inst_1959_);
lean_closure_set(v___x_1963_, 4, v_inst_1960_);
lean_closure_set(v___x_1963_, 5, v_inst_1961_);
lean_closure_set(v___x_1963_, 6, v_inst_1962_);
return v___x_1963_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadRef___aux__1___redArg___lam__0(lean_object* v___y_1964_, lean_object* v_toPure_1965_, lean_object* v_a_1966_){
_start:
{
lean_object* v___x_1967_; lean_object* v___x_1968_; 
v___x_1967_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1967_, 0, v_a_1966_);
lean_ctor_set(v___x_1967_, 1, v___y_1964_);
v___x_1968_ = lean_apply_2(v_toPure_1965_, lean_box(0), v___x_1967_);
return v___x_1968_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadRef___aux__1___redArg(lean_object* v_inst_1969_, lean_object* v_inst_1970_, lean_object* v___y_1971_){
_start:
{
lean_object* v_toApplicative_1972_; lean_object* v_getRef_1973_; lean_object* v_toBind_1974_; lean_object* v_toPure_1975_; lean_object* v___f_1976_; lean_object* v___x_1977_; 
v_toApplicative_1972_ = lean_ctor_get(v_inst_1969_, 0);
lean_inc_ref(v_toApplicative_1972_);
v_getRef_1973_ = lean_ctor_get(v_inst_1970_, 0);
lean_inc(v_getRef_1973_);
lean_dec_ref(v_inst_1970_);
v_toBind_1974_ = lean_ctor_get(v_inst_1969_, 1);
lean_inc(v_toBind_1974_);
lean_dec_ref(v_inst_1969_);
v_toPure_1975_ = lean_ctor_get(v_toApplicative_1972_, 1);
lean_inc(v_toPure_1975_);
lean_dec_ref(v_toApplicative_1972_);
v___f_1976_ = lean_alloc_closure((void*)(l_Lean_MonadStateCacheT_instMonadRef___aux__1___redArg___lam__0), 3, 2);
lean_closure_set(v___f_1976_, 0, v___y_1971_);
lean_closure_set(v___f_1976_, 1, v_toPure_1975_);
v___x_1977_ = lean_apply_4(v_toBind_1974_, lean_box(0), lean_box(0), v_getRef_1973_, v___f_1976_);
return v___x_1977_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadRef___aux__1(lean_object* v_00_u03b1_1978_, lean_object* v_00_u03b2_1979_, lean_object* v_m_1980_, lean_object* v_inst_1981_, lean_object* v_inst_1982_, lean_object* v_inst_1983_, lean_object* v_inst_1984_, lean_object* v___y_1985_){
_start:
{
lean_object* v_toApplicative_1986_; lean_object* v_getRef_1987_; lean_object* v_toBind_1988_; lean_object* v_toPure_1989_; lean_object* v___f_1990_; lean_object* v___x_1991_; 
v_toApplicative_1986_ = lean_ctor_get(v_inst_1983_, 0);
lean_inc_ref(v_toApplicative_1986_);
v_getRef_1987_ = lean_ctor_get(v_inst_1984_, 0);
lean_inc(v_getRef_1987_);
lean_dec_ref(v_inst_1984_);
v_toBind_1988_ = lean_ctor_get(v_inst_1983_, 1);
lean_inc(v_toBind_1988_);
lean_dec_ref(v_inst_1983_);
v_toPure_1989_ = lean_ctor_get(v_toApplicative_1986_, 1);
lean_inc(v_toPure_1989_);
lean_dec_ref(v_toApplicative_1986_);
v___f_1990_ = lean_alloc_closure((void*)(l_Lean_MonadStateCacheT_instMonadRef___aux__1___redArg___lam__0), 3, 2);
lean_closure_set(v___f_1990_, 0, v___y_1985_);
lean_closure_set(v___f_1990_, 1, v_toPure_1989_);
v___x_1991_ = lean_apply_4(v_toBind_1988_, lean_box(0), lean_box(0), v_getRef_1987_, v___f_1990_);
return v___x_1991_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadRef___aux__1___boxed(lean_object* v_00_u03b1_1992_, lean_object* v_00_u03b2_1993_, lean_object* v_m_1994_, lean_object* v_inst_1995_, lean_object* v_inst_1996_, lean_object* v_inst_1997_, lean_object* v_inst_1998_, lean_object* v___y_1999_){
_start:
{
lean_object* v_res_2000_; 
v_res_2000_ = l_Lean_MonadStateCacheT_instMonadRef___aux__1(v_00_u03b1_1992_, v_00_u03b2_1993_, v_m_1994_, v_inst_1995_, v_inst_1996_, v_inst_1997_, v_inst_1998_, v___y_1999_);
lean_dec_ref(v_inst_1996_);
lean_dec_ref(v_inst_1995_);
return v_res_2000_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadRef___aux__3___redArg(lean_object* v_inst_2001_, lean_object* v_ref_2002_, lean_object* v_x_2003_, lean_object* v___y_2004_){
_start:
{
lean_object* v_withRef_2005_; lean_object* v___x_2006_; lean_object* v___x_2007_; 
v_withRef_2005_ = lean_ctor_get(v_inst_2001_, 1);
lean_inc(v_withRef_2005_);
lean_dec_ref(v_inst_2001_);
v___x_2006_ = lean_apply_1(v_x_2003_, v___y_2004_);
v___x_2007_ = lean_apply_3(v_withRef_2005_, lean_box(0), v_ref_2002_, v___x_2006_);
return v___x_2007_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadRef___aux__3(lean_object* v_00_u03b1_2008_, lean_object* v_00_u03b2_2009_, lean_object* v_m_2010_, lean_object* v_inst_2011_, lean_object* v_inst_2012_, lean_object* v_inst_2013_, lean_object* v_00_u03b1_2014_, lean_object* v_ref_2015_, lean_object* v_x_2016_, lean_object* v___y_2017_){
_start:
{
lean_object* v_withRef_2018_; lean_object* v___x_2019_; lean_object* v___x_2020_; 
v_withRef_2018_ = lean_ctor_get(v_inst_2013_, 1);
lean_inc(v_withRef_2018_);
lean_dec_ref(v_inst_2013_);
v___x_2019_ = lean_apply_1(v_x_2016_, v___y_2017_);
v___x_2020_ = lean_apply_3(v_withRef_2018_, lean_box(0), v_ref_2015_, v___x_2019_);
return v___x_2020_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadRef___aux__3___boxed(lean_object* v_00_u03b1_2021_, lean_object* v_00_u03b2_2022_, lean_object* v_m_2023_, lean_object* v_inst_2024_, lean_object* v_inst_2025_, lean_object* v_inst_2026_, lean_object* v_00_u03b1_2027_, lean_object* v_ref_2028_, lean_object* v_x_2029_, lean_object* v___y_2030_){
_start:
{
lean_object* v_res_2031_; 
v_res_2031_ = l_Lean_MonadStateCacheT_instMonadRef___aux__3(v_00_u03b1_2021_, v_00_u03b2_2022_, v_m_2023_, v_inst_2024_, v_inst_2025_, v_inst_2026_, v_00_u03b1_2027_, v_ref_2028_, v_x_2029_, v___y_2030_);
lean_dec_ref(v_inst_2025_);
lean_dec_ref(v_inst_2024_);
return v_res_2031_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadRef___redArg(lean_object* v_inst_2032_, lean_object* v_inst_2033_, lean_object* v_inst_2034_, lean_object* v_inst_2035_){
_start:
{
lean_object* v___x_2036_; lean_object* v___x_2037_; lean_object* v___x_2038_; 
lean_inc_ref(v_inst_2035_);
lean_inc_ref(v_inst_2033_);
lean_inc_ref(v_inst_2032_);
v___x_2036_ = lean_alloc_closure((void*)(l_Lean_MonadStateCacheT_instMonadRef___aux__1___boxed), 8, 7);
lean_closure_set(v___x_2036_, 0, lean_box(0));
lean_closure_set(v___x_2036_, 1, lean_box(0));
lean_closure_set(v___x_2036_, 2, lean_box(0));
lean_closure_set(v___x_2036_, 3, v_inst_2032_);
lean_closure_set(v___x_2036_, 4, v_inst_2033_);
lean_closure_set(v___x_2036_, 5, v_inst_2034_);
lean_closure_set(v___x_2036_, 6, v_inst_2035_);
v___x_2037_ = lean_alloc_closure((void*)(l_Lean_MonadStateCacheT_instMonadRef___aux__3___boxed), 10, 6);
lean_closure_set(v___x_2037_, 0, lean_box(0));
lean_closure_set(v___x_2037_, 1, lean_box(0));
lean_closure_set(v___x_2037_, 2, lean_box(0));
lean_closure_set(v___x_2037_, 3, v_inst_2032_);
lean_closure_set(v___x_2037_, 4, v_inst_2033_);
lean_closure_set(v___x_2037_, 5, v_inst_2035_);
v___x_2038_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2038_, 0, v___x_2036_);
lean_ctor_set(v___x_2038_, 1, v___x_2037_);
return v___x_2038_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadRef(lean_object* v_00_u03b1_2039_, lean_object* v_00_u03b2_2040_, lean_object* v_m_2041_, lean_object* v_inst_2042_, lean_object* v_inst_2043_, lean_object* v_inst_2044_, lean_object* v_inst_2045_){
_start:
{
lean_object* v___x_2046_; 
v___x_2046_ = l_Lean_MonadStateCacheT_instMonadRef___redArg(v_inst_2042_, v_inst_2043_, v_inst_2044_, v_inst_2045_);
return v___x_2046_;
}
}
lean_object* runtime_initialize_Std_Data_HashMap_Basic(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Util_MonadCache(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Std_Data_HashMap_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Util_MonadCache(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Std_Data_HashMap_Basic(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Util_MonadCache(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Std_Data_HashMap_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Util_MonadCache(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Util_MonadCache(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Util_MonadCache(builtin);
}
#ifdef __cplusplus
}
#endif
