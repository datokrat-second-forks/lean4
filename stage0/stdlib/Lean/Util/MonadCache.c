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
lean_object* l_Function_const___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ST_Prim_Ref_modifyGetUnsafe___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ST_Prim_Ref_get___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ST_Prim_mkRef___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateRefT_x27_lift___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_lift(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_get(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateRefT_x27_get___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
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
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_mk___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_mk___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_mk(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_mk___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_toStateRefT___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_toStateRefT___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_toStateRefT(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_toStateRefT___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadHashMapCacheAdapter___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadHashMapCacheAdapter___redArg___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadHashMapCacheAdapter___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadHashMapCacheAdapter___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadHashMapCacheAdapter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
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
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonad___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonad___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonad___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonad___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonad___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonad___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonad___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonad___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonad___redArg___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonad___redArg___lam__5(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonad___redArg___lam__5___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonad___redArg___lam__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonad___redArg___lam__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonad___redArg___lam__7(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonad___redArg___lam__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonad___redArg___lam__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonad___redArg___lam__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonad___redArg___lam__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonad___redArg___lam__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonad___redArg___lam__10(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonad___redArg___lam__10___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonad___redArg___lam__11(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonad___redArg___lam__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonad___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonad(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonad___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadLift___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadLift___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_MonadCacheT_instMonadLift___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_MonadCacheT_instMonadLift___redArg___lam__0___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_MonadCacheT_instMonadLift___redArg___closed__0 = (const lean_object*)&l_Lean_MonadCacheT_instMonadLift___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadLift___redArg();
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadLift___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadLift(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadLift___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadExceptOf___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadExceptOf___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadExceptOf___redArg___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadExceptOf___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadExceptOf___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadExceptOf___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadExceptOf___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadExceptOf(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadExceptOf___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadControl___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadControl___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadControl___redArg___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadControl___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_MonadCacheT_instMonadControl___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_MonadCacheT_instMonadControl___redArg___lam__1___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_MonadCacheT_instMonadControl___redArg___closed__0 = (const lean_object*)&l_Lean_MonadCacheT_instMonadControl___redArg___closed__0_value;
static const lean_ctor_object l_Lean_MonadCacheT_instMonadControl___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_MonadCacheT_instMonadControl___redArg___closed__0_value),((lean_object*)&l_Lean_MonadCacheT_instMonadLift___redArg___closed__0_value)}};
static const lean_object* l_Lean_MonadCacheT_instMonadControl___redArg___closed__1 = (const lean_object*)&l_Lean_MonadCacheT_instMonadControl___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadControl___redArg();
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadControl___redArg___boxed(lean_object*);
static lean_once_cell_t l_Lean_MonadCacheT_instMonadControl___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MonadCacheT_instMonadControl___closed__0;
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadControl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadControl___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadFinally___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadFinally___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadFinally___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadFinally___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadFinally___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadFinally(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadFinally___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadRef___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadRef___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadRef___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadRef___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadRef___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadRef(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instAlternative___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instAlternative___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instAlternative___redArg___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instAlternative___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instAlternative___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instAlternative___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instAlternative___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instAlternative(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instAlternative___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_mk___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_mk(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_mk___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_toStateT___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_toStateT(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_toStateT___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadHashMapCacheAdapter___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadHashMapCacheAdapter___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadHashMapCacheAdapter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_run___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_run___redArg___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lean_MonadStateCacheT_run___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_MonadStateCacheT_run___redArg___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_MonadStateCacheT_run___redArg___closed__0 = (const lean_object*)&l_Lean_MonadStateCacheT_run___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_run___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_run(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_run___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonad___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonad___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonad___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonad___redArg___lam__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonad___redArg___lam__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonad___redArg___lam__6(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonad___redArg___lam__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonad___redArg___lam__8(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonad___redArg___lam__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonad___redArg___lam__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonad___redArg___lam__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonad___redArg___lam__11(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonad___redArg___lam__12(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonad___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonad(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonad___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadLift___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadLift___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadLift___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadLift(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadLift___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadExceptOf___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadExceptOf___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadExceptOf___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadExceptOf___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadExceptOf(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadExceptOf___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadControl___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadControl___redArg___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadControl___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadControl___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadControl___redArg___lam__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadControl___redArg___lam__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadControl___redArg___lam__6(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadControl___redArg___lam__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadControl___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadControl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadControl___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadFinally___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadFinally___redArg___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadFinally___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadFinally___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadFinally(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadFinally___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadRef___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadRef___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadRef___redArg___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadRef___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
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
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_mk___redArg(lean_object* v_toStateRefT_205_, lean_object* v___y_206_){
_start:
{
lean_object* v___x_207_; 
lean_inc(v___y_206_);
v___x_207_ = lean_apply_1(v_toStateRefT_205_, v___y_206_);
return v___x_207_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_mk___redArg___boxed(lean_object* v_toStateRefT_208_, lean_object* v___y_209_){
_start:
{
lean_object* v_res_210_; 
v_res_210_ = l_Lean_MonadCacheT_mk___redArg(v_toStateRefT_208_, v___y_209_);
lean_dec(v___y_209_);
return v_res_210_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_mk(lean_object* v_00_u03c9_211_, lean_object* v_00_u03b1_212_, lean_object* v_00_u03b2_213_, lean_object* v_m_214_, lean_object* v_inst_215_, lean_object* v_inst_216_, lean_object* v_inst_217_, lean_object* v_00_u03c3_218_, lean_object* v_toStateRefT_219_, lean_object* v___y_220_){
_start:
{
lean_object* v___x_221_; 
lean_inc(v___y_220_);
v___x_221_ = lean_apply_1(v_toStateRefT_219_, v___y_220_);
return v___x_221_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_mk___boxed(lean_object* v_00_u03c9_222_, lean_object* v_00_u03b1_223_, lean_object* v_00_u03b2_224_, lean_object* v_m_225_, lean_object* v_inst_226_, lean_object* v_inst_227_, lean_object* v_inst_228_, lean_object* v_00_u03c3_229_, lean_object* v_toStateRefT_230_, lean_object* v___y_231_){
_start:
{
lean_object* v_res_232_; 
v_res_232_ = l_Lean_MonadCacheT_mk(v_00_u03c9_222_, v_00_u03b1_223_, v_00_u03b2_224_, v_m_225_, v_inst_226_, v_inst_227_, v_inst_228_, v_00_u03c3_229_, v_toStateRefT_230_, v___y_231_);
lean_dec(v___y_231_);
lean_dec_ref(v_inst_228_);
lean_dec_ref(v_inst_227_);
return v_res_232_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_toStateRefT___redArg(lean_object* v_self_233_, lean_object* v___y_234_){
_start:
{
lean_object* v___x_235_; 
lean_inc(v___y_234_);
v___x_235_ = lean_apply_1(v_self_233_, v___y_234_);
return v___x_235_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_toStateRefT___redArg___boxed(lean_object* v_self_236_, lean_object* v___y_237_){
_start:
{
lean_object* v_res_238_; 
v_res_238_ = l_Lean_MonadCacheT_toStateRefT___redArg(v_self_236_, v___y_237_);
lean_dec(v___y_237_);
return v_res_238_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_toStateRefT(lean_object* v_00_u03c9_239_, lean_object* v_00_u03b1_240_, lean_object* v_00_u03b2_241_, lean_object* v_m_242_, lean_object* v_inst_243_, lean_object* v_inst_244_, lean_object* v_inst_245_, lean_object* v_00_u03c3_246_, lean_object* v_self_247_, lean_object* v___y_248_){
_start:
{
lean_object* v___x_249_; 
lean_inc(v___y_248_);
v___x_249_ = lean_apply_1(v_self_247_, v___y_248_);
return v___x_249_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_toStateRefT___boxed(lean_object* v_00_u03c9_250_, lean_object* v_00_u03b1_251_, lean_object* v_00_u03b2_252_, lean_object* v_m_253_, lean_object* v_inst_254_, lean_object* v_inst_255_, lean_object* v_inst_256_, lean_object* v_00_u03c3_257_, lean_object* v_self_258_, lean_object* v___y_259_){
_start:
{
lean_object* v_res_260_; 
v_res_260_ = l_Lean_MonadCacheT_toStateRefT(v_00_u03c9_250_, v_00_u03b1_251_, v_00_u03b2_252_, v_m_253_, v_inst_254_, v_inst_255_, v_inst_256_, v_00_u03c3_257_, v_self_258_, v___y_259_);
lean_dec(v___y_259_);
lean_dec_ref(v_inst_256_);
lean_dec_ref(v_inst_255_);
return v_res_260_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadHashMapCacheAdapter___redArg___lam__0(lean_object* v_f_261_, lean_object* v_s_262_){
_start:
{
lean_object* v___x_263_; lean_object* v___x_264_; lean_object* v___x_265_; 
v___x_263_ = lean_box(0);
v___x_264_ = lean_apply_1(v_f_261_, v_s_262_);
v___x_265_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_265_, 0, v___x_263_);
lean_ctor_set(v___x_265_, 1, v___x_264_);
return v___x_265_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadHashMapCacheAdapter___redArg___lam__1(lean_object* v_inst_266_, lean_object* v_f_267_, lean_object* v___y_268_){
_start:
{
lean_object* v___f_269_; lean_object* v___x_270_; lean_object* v___x_271_; 
v___f_269_ = lean_alloc_closure((void*)(l_Lean_MonadCacheT_instMonadHashMapCacheAdapter___redArg___lam__0), 2, 1);
lean_closure_set(v___f_269_, 0, v_f_267_);
lean_inc(v___y_268_);
v___x_270_ = lean_alloc_closure((void*)(l_ST_Prim_Ref_modifyGetUnsafe___boxed), 6, 5);
lean_closure_set(v___x_270_, 0, lean_box(0));
lean_closure_set(v___x_270_, 1, lean_box(0));
lean_closure_set(v___x_270_, 2, lean_box(0));
lean_closure_set(v___x_270_, 3, v___y_268_);
lean_closure_set(v___x_270_, 4, v___f_269_);
v___x_271_ = lean_apply_2(v_inst_266_, lean_box(0), v___x_270_);
return v___x_271_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadHashMapCacheAdapter___redArg___lam__1___boxed(lean_object* v_inst_272_, lean_object* v_f_273_, lean_object* v___y_274_){
_start:
{
lean_object* v_res_275_; 
v_res_275_ = l_Lean_MonadCacheT_instMonadHashMapCacheAdapter___redArg___lam__1(v_inst_272_, v_f_273_, v___y_274_);
lean_dec(v___y_274_);
return v_res_275_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadHashMapCacheAdapter___redArg(lean_object* v_inst_276_, lean_object* v_inst_277_, lean_object* v_inst_278_, lean_object* v_inst_279_){
_start:
{
lean_object* v___f_280_; lean_object* v___x_281_; lean_object* v___x_282_; lean_object* v___x_283_; 
lean_inc(v_inst_279_);
v___f_280_ = lean_alloc_closure((void*)(l_Lean_MonadCacheT_instMonadHashMapCacheAdapter___redArg___lam__1___boxed), 3, 1);
lean_closure_set(v___f_280_, 0, v_inst_279_);
v___x_281_ = lean_alloc_closure((void*)(l_StateRefT_x27_get___boxed), 5, 4);
lean_closure_set(v___x_281_, 0, lean_box(0));
lean_closure_set(v___x_281_, 1, lean_box(0));
lean_closure_set(v___x_281_, 2, lean_box(0));
lean_closure_set(v___x_281_, 3, v_inst_279_);
v___x_282_ = lean_alloc_closure((void*)(l_Lean_MonadCacheT_mk___boxed), 10, 9);
lean_closure_set(v___x_282_, 0, lean_box(0));
lean_closure_set(v___x_282_, 1, lean_box(0));
lean_closure_set(v___x_282_, 2, lean_box(0));
lean_closure_set(v___x_282_, 3, lean_box(0));
lean_closure_set(v___x_282_, 4, v_inst_276_);
lean_closure_set(v___x_282_, 5, v_inst_277_);
lean_closure_set(v___x_282_, 6, v_inst_278_);
lean_closure_set(v___x_282_, 7, lean_box(0));
lean_closure_set(v___x_282_, 8, v___x_281_);
v___x_283_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_283_, 0, v___x_282_);
lean_ctor_set(v___x_283_, 1, v___f_280_);
return v___x_283_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadHashMapCacheAdapter(lean_object* v_00_u03c9_284_, lean_object* v_00_u03b1_285_, lean_object* v_00_u03b2_286_, lean_object* v_m_287_, lean_object* v_inst_288_, lean_object* v_inst_289_, lean_object* v_inst_290_, lean_object* v_inst_291_){
_start:
{
lean_object* v___x_292_; 
v___x_292_ = l_Lean_MonadCacheT_instMonadHashMapCacheAdapter___redArg(v_inst_288_, v_inst_289_, v_inst_290_, v_inst_291_);
return v___x_292_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_run___redArg___lam__0(lean_object* v_a_293_, lean_object* v_toPure_294_, lean_object* v_s_295_){
_start:
{
lean_object* v___x_296_; lean_object* v___x_297_; 
v___x_296_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_296_, 0, v_a_293_);
lean_ctor_set(v___x_296_, 1, v_s_295_);
v___x_297_ = lean_apply_2(v_toPure_294_, lean_box(0), v___x_296_);
return v___x_297_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_run___redArg___lam__1(lean_object* v_toPure_298_, lean_object* v_ref_299_, lean_object* v_inst_300_, lean_object* v_toBind_301_, lean_object* v_a_302_){
_start:
{
lean_object* v___f_303_; lean_object* v___x_304_; lean_object* v___x_305_; lean_object* v___x_306_; 
v___f_303_ = lean_alloc_closure((void*)(l_Lean_MonadCacheT_run___redArg___lam__0), 3, 2);
lean_closure_set(v___f_303_, 0, v_a_302_);
lean_closure_set(v___f_303_, 1, v_toPure_298_);
v___x_304_ = lean_alloc_closure((void*)(l_ST_Prim_Ref_get___boxed), 4, 3);
lean_closure_set(v___x_304_, 0, lean_box(0));
lean_closure_set(v___x_304_, 1, lean_box(0));
lean_closure_set(v___x_304_, 2, v_ref_299_);
v___x_305_ = lean_apply_2(v_inst_300_, lean_box(0), v___x_304_);
v___x_306_ = lean_apply_4(v_toBind_301_, lean_box(0), lean_box(0), v___x_305_, v___f_303_);
return v___x_306_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_run___redArg___lam__2(lean_object* v_toPure_307_, lean_object* v_inst_308_, lean_object* v_toBind_309_, lean_object* v_x_310_, lean_object* v_ref_311_){
_start:
{
lean_object* v___f_312_; lean_object* v___x_313_; lean_object* v___x_314_; 
lean_inc(v_toBind_309_);
lean_inc(v_ref_311_);
v___f_312_ = lean_alloc_closure((void*)(l_Lean_MonadCacheT_run___redArg___lam__1), 5, 4);
lean_closure_set(v___f_312_, 0, v_toPure_307_);
lean_closure_set(v___f_312_, 1, v_ref_311_);
lean_closure_set(v___f_312_, 2, v_inst_308_);
lean_closure_set(v___f_312_, 3, v_toBind_309_);
v___x_313_ = lean_apply_1(v_x_310_, v_ref_311_);
v___x_314_ = lean_apply_4(v_toBind_309_, lean_box(0), lean_box(0), v___x_313_, v___f_312_);
return v___x_314_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_run___redArg___lam__3(lean_object* v_toPure_315_, lean_object* v_____x_316_){
_start:
{
lean_object* v_fst_317_; lean_object* v___x_318_; 
v_fst_317_ = lean_ctor_get(v_____x_316_, 0);
lean_inc(v_fst_317_);
lean_dec_ref(v_____x_316_);
v___x_318_ = lean_apply_2(v_toPure_315_, lean_box(0), v_fst_317_);
return v___x_318_;
}
}
static lean_object* _init_l_Lean_MonadCacheT_run___redArg___closed__0(void){
_start:
{
lean_object* v___x_319_; lean_object* v___x_320_; lean_object* v___x_321_; 
v___x_319_ = lean_box(0);
v___x_320_ = lean_unsigned_to_nat(16u);
v___x_321_ = lean_mk_array(v___x_320_, v___x_319_);
return v___x_321_;
}
}
static lean_object* _init_l_Lean_MonadCacheT_run___redArg___closed__1(void){
_start:
{
lean_object* v___x_322_; lean_object* v___x_323_; lean_object* v___x_324_; 
v___x_322_ = lean_obj_once(&l_Lean_MonadCacheT_run___redArg___closed__0, &l_Lean_MonadCacheT_run___redArg___closed__0_once, _init_l_Lean_MonadCacheT_run___redArg___closed__0);
v___x_323_ = lean_unsigned_to_nat(0u);
v___x_324_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_324_, 0, v___x_323_);
lean_ctor_set(v___x_324_, 1, v___x_322_);
return v___x_324_;
}
}
static lean_object* _init_l_Lean_MonadCacheT_run___redArg___closed__2(void){
_start:
{
lean_object* v___x_325_; lean_object* v___x_326_; 
v___x_325_ = lean_obj_once(&l_Lean_MonadCacheT_run___redArg___closed__1, &l_Lean_MonadCacheT_run___redArg___closed__1_once, _init_l_Lean_MonadCacheT_run___redArg___closed__1);
v___x_326_ = lean_alloc_closure((void*)(l_ST_Prim_mkRef___boxed), 4, 3);
lean_closure_set(v___x_326_, 0, lean_box(0));
lean_closure_set(v___x_326_, 1, lean_box(0));
lean_closure_set(v___x_326_, 2, v___x_325_);
return v___x_326_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_run___redArg(lean_object* v_inst_327_, lean_object* v_inst_328_, lean_object* v_x_329_){
_start:
{
lean_object* v_toApplicative_330_; lean_object* v_toBind_331_; lean_object* v_toPure_332_; lean_object* v___x_333_; lean_object* v___x_334_; lean_object* v___f_335_; lean_object* v___f_336_; lean_object* v___x_337_; lean_object* v___x_338_; 
v_toApplicative_330_ = lean_ctor_get(v_inst_328_, 0);
lean_inc_ref(v_toApplicative_330_);
v_toBind_331_ = lean_ctor_get(v_inst_328_, 1);
lean_inc_n(v_toBind_331_, 3);
lean_dec_ref(v_inst_328_);
v_toPure_332_ = lean_ctor_get(v_toApplicative_330_, 1);
lean_inc_n(v_toPure_332_, 2);
lean_dec_ref(v_toApplicative_330_);
v___x_333_ = lean_obj_once(&l_Lean_MonadCacheT_run___redArg___closed__2, &l_Lean_MonadCacheT_run___redArg___closed__2_once, _init_l_Lean_MonadCacheT_run___redArg___closed__2);
lean_inc(v_inst_327_);
v___x_334_ = lean_apply_2(v_inst_327_, lean_box(0), v___x_333_);
v___f_335_ = lean_alloc_closure((void*)(l_Lean_MonadCacheT_run___redArg___lam__2), 5, 4);
lean_closure_set(v___f_335_, 0, v_toPure_332_);
lean_closure_set(v___f_335_, 1, v_inst_327_);
lean_closure_set(v___f_335_, 2, v_toBind_331_);
lean_closure_set(v___f_335_, 3, v_x_329_);
v___f_336_ = lean_alloc_closure((void*)(l_Lean_MonadCacheT_run___redArg___lam__3), 2, 1);
lean_closure_set(v___f_336_, 0, v_toPure_332_);
v___x_337_ = lean_apply_4(v_toBind_331_, lean_box(0), lean_box(0), v___x_334_, v___f_335_);
v___x_338_ = lean_apply_4(v_toBind_331_, lean_box(0), lean_box(0), v___x_337_, v___f_336_);
return v___x_338_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_run(lean_object* v_00_u03c9_339_, lean_object* v_00_u03b1_340_, lean_object* v_00_u03b2_341_, lean_object* v_m_342_, lean_object* v_inst_343_, lean_object* v_inst_344_, lean_object* v_inst_345_, lean_object* v_inst_346_, lean_object* v_inst_347_, lean_object* v_00_u03c3_348_, lean_object* v_x_349_){
_start:
{
lean_object* v_toApplicative_350_; lean_object* v_toBind_351_; lean_object* v_toPure_352_; lean_object* v___x_353_; lean_object* v___x_354_; lean_object* v___f_355_; lean_object* v___f_356_; lean_object* v___x_357_; lean_object* v___x_358_; 
v_toApplicative_350_ = lean_ctor_get(v_inst_347_, 0);
lean_inc_ref(v_toApplicative_350_);
v_toBind_351_ = lean_ctor_get(v_inst_347_, 1);
lean_inc_n(v_toBind_351_, 3);
lean_dec_ref(v_inst_347_);
v_toPure_352_ = lean_ctor_get(v_toApplicative_350_, 1);
lean_inc_n(v_toPure_352_, 2);
lean_dec_ref(v_toApplicative_350_);
v___x_353_ = lean_obj_once(&l_Lean_MonadCacheT_run___redArg___closed__2, &l_Lean_MonadCacheT_run___redArg___closed__2_once, _init_l_Lean_MonadCacheT_run___redArg___closed__2);
lean_inc(v_inst_346_);
v___x_354_ = lean_apply_2(v_inst_346_, lean_box(0), v___x_353_);
v___f_355_ = lean_alloc_closure((void*)(l_Lean_MonadCacheT_run___redArg___lam__2), 5, 4);
lean_closure_set(v___f_355_, 0, v_toPure_352_);
lean_closure_set(v___f_355_, 1, v_inst_346_);
lean_closure_set(v___f_355_, 2, v_toBind_351_);
lean_closure_set(v___f_355_, 3, v_x_349_);
v___f_356_ = lean_alloc_closure((void*)(l_Lean_MonadCacheT_run___redArg___lam__3), 2, 1);
lean_closure_set(v___f_356_, 0, v_toPure_352_);
v___x_357_ = lean_apply_4(v_toBind_351_, lean_box(0), lean_box(0), v___x_354_, v___f_355_);
v___x_358_ = lean_apply_4(v_toBind_351_, lean_box(0), lean_box(0), v___x_357_, v___f_356_);
return v___x_358_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_run___boxed(lean_object* v_00_u03c9_359_, lean_object* v_00_u03b1_360_, lean_object* v_00_u03b2_361_, lean_object* v_m_362_, lean_object* v_inst_363_, lean_object* v_inst_364_, lean_object* v_inst_365_, lean_object* v_inst_366_, lean_object* v_inst_367_, lean_object* v_00_u03c3_368_, lean_object* v_x_369_){
_start:
{
lean_object* v_res_370_; 
v_res_370_ = l_Lean_MonadCacheT_run(v_00_u03c9_359_, v_00_u03b1_360_, v_00_u03b2_361_, v_m_362_, v_inst_363_, v_inst_364_, v_inst_365_, v_inst_366_, v_inst_367_, v_00_u03c3_368_, v_x_369_);
lean_dec_ref(v_inst_365_);
lean_dec_ref(v_inst_364_);
return v_res_370_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonad___redArg___lam__0(lean_object* v_inst_371_, lean_object* v_00_u03b1_372_, lean_object* v_00_u03b2_373_, lean_object* v_f_374_, lean_object* v_x_375_, lean_object* v___y_376_){
_start:
{
lean_object* v_toApplicative_377_; lean_object* v_toFunctor_378_; lean_object* v_map_379_; lean_object* v___x_380_; lean_object* v___x_381_; 
v_toApplicative_377_ = lean_ctor_get(v_inst_371_, 0);
lean_inc_ref(v_toApplicative_377_);
lean_dec_ref(v_inst_371_);
v_toFunctor_378_ = lean_ctor_get(v_toApplicative_377_, 0);
lean_inc_ref(v_toFunctor_378_);
lean_dec_ref(v_toApplicative_377_);
v_map_379_ = lean_ctor_get(v_toFunctor_378_, 0);
lean_inc(v_map_379_);
lean_dec_ref(v_toFunctor_378_);
lean_inc(v___y_376_);
v___x_380_ = lean_apply_1(v_x_375_, v___y_376_);
v___x_381_ = lean_apply_4(v_map_379_, lean_box(0), lean_box(0), v_f_374_, v___x_380_);
return v___x_381_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonad___redArg___lam__0___boxed(lean_object* v_inst_382_, lean_object* v_00_u03b1_383_, lean_object* v_00_u03b2_384_, lean_object* v_f_385_, lean_object* v_x_386_, lean_object* v___y_387_){
_start:
{
lean_object* v_res_388_; 
v_res_388_ = l_Lean_MonadCacheT_instMonad___redArg___lam__0(v_inst_382_, v_00_u03b1_383_, v_00_u03b2_384_, v_f_385_, v_x_386_, v___y_387_);
lean_dec(v___y_387_);
return v_res_388_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonad___redArg___lam__1(lean_object* v___f_389_, lean_object* v_00_u03b1_390_, lean_object* v_00_u03b2_391_, lean_object* v___y_392_, lean_object* v___y_393_, lean_object* v___y_394_){
_start:
{
lean_object* v___x_395_; lean_object* v___x_396_; 
v___x_395_ = lean_alloc_closure((void*)(l_Function_const___boxed), 4, 3);
lean_closure_set(v___x_395_, 0, lean_box(0));
lean_closure_set(v___x_395_, 1, lean_box(0));
lean_closure_set(v___x_395_, 2, v___y_392_);
lean_inc(v___y_394_);
v___x_396_ = lean_apply_5(v___f_389_, lean_box(0), lean_box(0), v___x_395_, v___y_393_, v___y_394_);
return v___x_396_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonad___redArg___lam__1___boxed(lean_object* v___f_397_, lean_object* v_00_u03b1_398_, lean_object* v_00_u03b2_399_, lean_object* v___y_400_, lean_object* v___y_401_, lean_object* v___y_402_){
_start:
{
lean_object* v_res_403_; 
v_res_403_ = l_Lean_MonadCacheT_instMonad___redArg___lam__1(v___f_397_, v_00_u03b1_398_, v_00_u03b2_399_, v___y_400_, v___y_401_, v___y_402_);
lean_dec(v___y_402_);
return v_res_403_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonad___redArg___lam__2(lean_object* v_inst_404_, lean_object* v_00_u03b1_405_, lean_object* v_a_406_, lean_object* v___y_407_){
_start:
{
lean_object* v_toApplicative_408_; lean_object* v_toPure_409_; lean_object* v___x_410_; 
v_toApplicative_408_ = lean_ctor_get(v_inst_404_, 0);
lean_inc_ref(v_toApplicative_408_);
lean_dec_ref(v_inst_404_);
v_toPure_409_ = lean_ctor_get(v_toApplicative_408_, 1);
lean_inc(v_toPure_409_);
lean_dec_ref(v_toApplicative_408_);
v___x_410_ = lean_apply_2(v_toPure_409_, lean_box(0), v_a_406_);
return v___x_410_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonad___redArg___lam__2___boxed(lean_object* v_inst_411_, lean_object* v_00_u03b1_412_, lean_object* v_a_413_, lean_object* v___y_414_){
_start:
{
lean_object* v_res_415_; 
v_res_415_ = l_Lean_MonadCacheT_instMonad___redArg___lam__2(v_inst_411_, v_00_u03b1_412_, v_a_413_, v___y_414_);
lean_dec(v___y_414_);
return v_res_415_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonad___redArg___lam__3(lean_object* v_x_416_, lean_object* v___f_417_, lean_object* v___y_418_, lean_object* v_a_419_){
_start:
{
lean_object* v___x_420_; lean_object* v___x_421_; lean_object* v___x_422_; 
v___x_420_ = lean_box(0);
v___x_421_ = lean_apply_1(v_x_416_, v___x_420_);
lean_inc(v___y_418_);
v___x_422_ = lean_apply_5(v___f_417_, lean_box(0), lean_box(0), v_a_419_, v___x_421_, v___y_418_);
return v___x_422_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonad___redArg___lam__3___boxed(lean_object* v_x_423_, lean_object* v___f_424_, lean_object* v___y_425_, lean_object* v_a_426_){
_start:
{
lean_object* v_res_427_; 
v_res_427_ = l_Lean_MonadCacheT_instMonad___redArg___lam__3(v_x_423_, v___f_424_, v___y_425_, v_a_426_);
lean_dec(v___y_425_);
return v_res_427_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonad___redArg___lam__4(lean_object* v_inst_428_, lean_object* v___f_429_, lean_object* v_00_u03b1_430_, lean_object* v_00_u03b2_431_, lean_object* v_f_432_, lean_object* v_x_433_, lean_object* v___y_434_){
_start:
{
lean_object* v_toBind_435_; lean_object* v___f_436_; lean_object* v___x_437_; lean_object* v___x_438_; 
v_toBind_435_ = lean_ctor_get(v_inst_428_, 1);
lean_inc(v_toBind_435_);
lean_dec_ref(v_inst_428_);
lean_inc_n(v___y_434_, 2);
v___f_436_ = lean_alloc_closure((void*)(l_Lean_MonadCacheT_instMonad___redArg___lam__3___boxed), 4, 3);
lean_closure_set(v___f_436_, 0, v_x_433_);
lean_closure_set(v___f_436_, 1, v___f_429_);
lean_closure_set(v___f_436_, 2, v___y_434_);
v___x_437_ = lean_apply_1(v_f_432_, v___y_434_);
v___x_438_ = lean_apply_4(v_toBind_435_, lean_box(0), lean_box(0), v___x_437_, v___f_436_);
return v___x_438_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonad___redArg___lam__4___boxed(lean_object* v_inst_439_, lean_object* v___f_440_, lean_object* v_00_u03b1_441_, lean_object* v_00_u03b2_442_, lean_object* v_f_443_, lean_object* v_x_444_, lean_object* v___y_445_){
_start:
{
lean_object* v_res_446_; 
v_res_446_ = l_Lean_MonadCacheT_instMonad___redArg___lam__4(v_inst_439_, v___f_440_, v_00_u03b1_441_, v_00_u03b2_442_, v_f_443_, v_x_444_, v___y_445_);
lean_dec(v___y_445_);
return v_res_446_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonad___redArg___lam__5(lean_object* v_f_447_, lean_object* v___y_448_, lean_object* v_a_449_){
_start:
{
lean_object* v___x_450_; 
lean_inc(v___y_448_);
v___x_450_ = lean_apply_2(v_f_447_, v_a_449_, v___y_448_);
return v___x_450_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonad___redArg___lam__5___boxed(lean_object* v_f_451_, lean_object* v___y_452_, lean_object* v_a_453_){
_start:
{
lean_object* v_res_454_; 
v_res_454_ = l_Lean_MonadCacheT_instMonad___redArg___lam__5(v_f_451_, v___y_452_, v_a_453_);
lean_dec(v___y_452_);
return v_res_454_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonad___redArg___lam__6(lean_object* v_inst_455_, lean_object* v_00_u03b1_456_, lean_object* v_00_u03b2_457_, lean_object* v_x_458_, lean_object* v_f_459_, lean_object* v___y_460_){
_start:
{
lean_object* v_toBind_461_; lean_object* v___f_462_; lean_object* v___x_463_; lean_object* v___x_464_; 
v_toBind_461_ = lean_ctor_get(v_inst_455_, 1);
lean_inc(v_toBind_461_);
lean_dec_ref(v_inst_455_);
lean_inc_n(v___y_460_, 2);
v___f_462_ = lean_alloc_closure((void*)(l_Lean_MonadCacheT_instMonad___redArg___lam__5___boxed), 3, 2);
lean_closure_set(v___f_462_, 0, v_f_459_);
lean_closure_set(v___f_462_, 1, v___y_460_);
v___x_463_ = lean_apply_1(v_x_458_, v___y_460_);
v___x_464_ = lean_apply_4(v_toBind_461_, lean_box(0), lean_box(0), v___x_463_, v___f_462_);
return v___x_464_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonad___redArg___lam__6___boxed(lean_object* v_inst_465_, lean_object* v_00_u03b1_466_, lean_object* v_00_u03b2_467_, lean_object* v_x_468_, lean_object* v_f_469_, lean_object* v___y_470_){
_start:
{
lean_object* v_res_471_; 
v_res_471_ = l_Lean_MonadCacheT_instMonad___redArg___lam__6(v_inst_465_, v_00_u03b1_466_, v_00_u03b2_467_, v_x_468_, v_f_469_, v___y_470_);
lean_dec(v___y_470_);
return v_res_471_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonad___redArg___lam__7(lean_object* v___f_472_, lean_object* v_a_473_, lean_object* v_x_474_, lean_object* v___y_475_){
_start:
{
lean_object* v___x_476_; 
lean_inc(v___y_475_);
v___x_476_ = lean_apply_3(v___f_472_, lean_box(0), v_a_473_, v___y_475_);
return v___x_476_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonad___redArg___lam__7___boxed(lean_object* v___f_477_, lean_object* v_a_478_, lean_object* v_x_479_, lean_object* v___y_480_){
_start:
{
lean_object* v_res_481_; 
v_res_481_ = l_Lean_MonadCacheT_instMonad___redArg___lam__7(v___f_477_, v_a_478_, v_x_479_, v___y_480_);
lean_dec(v___y_480_);
lean_dec(v_x_479_);
return v_res_481_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonad___redArg___lam__8(lean_object* v___f_482_, lean_object* v_y_483_, lean_object* v___f_484_, lean_object* v_a_485_, lean_object* v___y_486_){
_start:
{
lean_object* v___f_487_; lean_object* v___x_488_; lean_object* v___x_489_; lean_object* v___x_490_; 
v___f_487_ = lean_alloc_closure((void*)(l_Lean_MonadCacheT_instMonad___redArg___lam__7___boxed), 4, 2);
lean_closure_set(v___f_487_, 0, v___f_482_);
lean_closure_set(v___f_487_, 1, v_a_485_);
v___x_488_ = lean_box(0);
v___x_489_ = lean_apply_1(v_y_483_, v___x_488_);
lean_inc(v___y_486_);
v___x_490_ = lean_apply_5(v___f_484_, lean_box(0), lean_box(0), v___x_489_, v___f_487_, v___y_486_);
return v___x_490_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonad___redArg___lam__8___boxed(lean_object* v___f_491_, lean_object* v_y_492_, lean_object* v___f_493_, lean_object* v_a_494_, lean_object* v___y_495_){
_start:
{
lean_object* v_res_496_; 
v_res_496_ = l_Lean_MonadCacheT_instMonad___redArg___lam__8(v___f_491_, v_y_492_, v___f_493_, v_a_494_, v___y_495_);
lean_dec(v___y_495_);
return v_res_496_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonad___redArg___lam__9(lean_object* v___f_497_, lean_object* v___f_498_, lean_object* v_00_u03b1_499_, lean_object* v_00_u03b2_500_, lean_object* v_x_501_, lean_object* v_y_502_, lean_object* v___y_503_){
_start:
{
lean_object* v___f_504_; lean_object* v___x_505_; 
lean_inc(v___f_498_);
v___f_504_ = lean_alloc_closure((void*)(l_Lean_MonadCacheT_instMonad___redArg___lam__8___boxed), 5, 3);
lean_closure_set(v___f_504_, 0, v___f_497_);
lean_closure_set(v___f_504_, 1, v_y_502_);
lean_closure_set(v___f_504_, 2, v___f_498_);
lean_inc(v___y_503_);
v___x_505_ = lean_apply_5(v___f_498_, lean_box(0), lean_box(0), v_x_501_, v___f_504_, v___y_503_);
return v___x_505_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonad___redArg___lam__9___boxed(lean_object* v___f_506_, lean_object* v___f_507_, lean_object* v_00_u03b1_508_, lean_object* v_00_u03b2_509_, lean_object* v_x_510_, lean_object* v_y_511_, lean_object* v___y_512_){
_start:
{
lean_object* v_res_513_; 
v_res_513_ = l_Lean_MonadCacheT_instMonad___redArg___lam__9(v___f_506_, v___f_507_, v_00_u03b1_508_, v_00_u03b2_509_, v_x_510_, v_y_511_, v___y_512_);
lean_dec(v___y_512_);
return v_res_513_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonad___redArg___lam__10(lean_object* v_y_514_, lean_object* v___y_515_, lean_object* v_a_516_){
_start:
{
lean_object* v___x_517_; lean_object* v___x_518_; 
v___x_517_ = lean_box(0);
lean_inc(v___y_515_);
v___x_518_ = lean_apply_2(v_y_514_, v___x_517_, v___y_515_);
return v___x_518_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonad___redArg___lam__10___boxed(lean_object* v_y_519_, lean_object* v___y_520_, lean_object* v_a_521_){
_start:
{
lean_object* v_res_522_; 
v_res_522_ = l_Lean_MonadCacheT_instMonad___redArg___lam__10(v_y_519_, v___y_520_, v_a_521_);
lean_dec(v_a_521_);
lean_dec(v___y_520_);
return v_res_522_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonad___redArg___lam__11(lean_object* v_inst_523_, lean_object* v_00_u03b1_524_, lean_object* v_00_u03b2_525_, lean_object* v_x_526_, lean_object* v_y_527_, lean_object* v___y_528_){
_start:
{
lean_object* v_toBind_529_; lean_object* v___f_530_; lean_object* v___x_531_; lean_object* v___x_532_; 
v_toBind_529_ = lean_ctor_get(v_inst_523_, 1);
lean_inc(v_toBind_529_);
lean_dec_ref(v_inst_523_);
lean_inc_n(v___y_528_, 2);
v___f_530_ = lean_alloc_closure((void*)(l_Lean_MonadCacheT_instMonad___redArg___lam__10___boxed), 3, 2);
lean_closure_set(v___f_530_, 0, v_y_527_);
lean_closure_set(v___f_530_, 1, v___y_528_);
v___x_531_ = lean_apply_1(v_x_526_, v___y_528_);
v___x_532_ = lean_apply_4(v_toBind_529_, lean_box(0), lean_box(0), v___x_531_, v___f_530_);
return v___x_532_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonad___redArg___lam__11___boxed(lean_object* v_inst_533_, lean_object* v_00_u03b1_534_, lean_object* v_00_u03b2_535_, lean_object* v_x_536_, lean_object* v_y_537_, lean_object* v___y_538_){
_start:
{
lean_object* v_res_539_; 
v_res_539_ = l_Lean_MonadCacheT_instMonad___redArg___lam__11(v_inst_533_, v_00_u03b1_534_, v_00_u03b2_535_, v_x_536_, v_y_537_, v___y_538_);
lean_dec(v___y_538_);
return v_res_539_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonad___redArg(lean_object* v_inst_540_){
_start:
{
lean_object* v___f_541_; lean_object* v___f_542_; lean_object* v___f_543_; lean_object* v___f_544_; lean_object* v___f_545_; lean_object* v___f_546_; lean_object* v___f_547_; lean_object* v___x_548_; lean_object* v___x_549_; lean_object* v___x_550_; 
lean_inc_ref_n(v_inst_540_, 4);
v___f_541_ = lean_alloc_closure((void*)(l_Lean_MonadCacheT_instMonad___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_541_, 0, v_inst_540_);
lean_inc_ref_n(v___f_541_, 2);
v___f_542_ = lean_alloc_closure((void*)(l_Lean_MonadCacheT_instMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_542_, 0, v___f_541_);
v___f_543_ = lean_alloc_closure((void*)(l_Lean_MonadCacheT_instMonad___redArg___lam__2___boxed), 4, 1);
lean_closure_set(v___f_543_, 0, v_inst_540_);
v___f_544_ = lean_alloc_closure((void*)(l_Lean_MonadCacheT_instMonad___redArg___lam__4___boxed), 7, 2);
lean_closure_set(v___f_544_, 0, v_inst_540_);
lean_closure_set(v___f_544_, 1, v___f_541_);
v___f_545_ = lean_alloc_closure((void*)(l_Lean_MonadCacheT_instMonad___redArg___lam__6___boxed), 6, 1);
lean_closure_set(v___f_545_, 0, v_inst_540_);
lean_inc_ref(v___f_545_);
lean_inc_ref(v___f_543_);
v___f_546_ = lean_alloc_closure((void*)(l_Lean_MonadCacheT_instMonad___redArg___lam__9___boxed), 7, 2);
lean_closure_set(v___f_546_, 0, v___f_543_);
lean_closure_set(v___f_546_, 1, v___f_545_);
v___f_547_ = lean_alloc_closure((void*)(l_Lean_MonadCacheT_instMonad___redArg___lam__11___boxed), 6, 1);
lean_closure_set(v___f_547_, 0, v_inst_540_);
v___x_548_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_548_, 0, v___f_541_);
lean_ctor_set(v___x_548_, 1, v___f_542_);
v___x_549_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_549_, 0, v___x_548_);
lean_ctor_set(v___x_549_, 1, v___f_543_);
lean_ctor_set(v___x_549_, 2, v___f_544_);
lean_ctor_set(v___x_549_, 3, v___f_546_);
lean_ctor_set(v___x_549_, 4, v___f_547_);
v___x_550_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_550_, 0, v___x_549_);
lean_ctor_set(v___x_550_, 1, v___f_545_);
return v___x_550_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonad(lean_object* v_00_u03c9_551_, lean_object* v_00_u03b1_552_, lean_object* v_00_u03b2_553_, lean_object* v_m_554_, lean_object* v_inst_555_, lean_object* v_inst_556_, lean_object* v_inst_557_, lean_object* v_inst_558_){
_start:
{
lean_object* v___x_559_; 
v___x_559_ = l_Lean_MonadCacheT_instMonad___redArg(v_inst_558_);
return v___x_559_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonad___boxed(lean_object* v_00_u03c9_560_, lean_object* v_00_u03b1_561_, lean_object* v_00_u03b2_562_, lean_object* v_m_563_, lean_object* v_inst_564_, lean_object* v_inst_565_, lean_object* v_inst_566_, lean_object* v_inst_567_){
_start:
{
lean_object* v_res_568_; 
v_res_568_ = l_Lean_MonadCacheT_instMonad(v_00_u03c9_560_, v_00_u03b1_561_, v_00_u03b2_562_, v_m_563_, v_inst_564_, v_inst_565_, v_inst_566_, v_inst_567_);
lean_dec_ref(v_inst_566_);
lean_dec_ref(v_inst_565_);
return v_res_568_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadLift___redArg___lam__0(lean_object* v_00_u03b1_569_, lean_object* v_x_570_, lean_object* v___y_571_){
_start:
{
lean_inc(v_x_570_);
return v_x_570_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadLift___redArg___lam__0___boxed(lean_object* v_00_u03b1_572_, lean_object* v_x_573_, lean_object* v___y_574_){
_start:
{
lean_object* v_res_575_; 
v_res_575_ = l_Lean_MonadCacheT_instMonadLift___redArg___lam__0(v_00_u03b1_572_, v_x_573_, v___y_574_);
lean_dec(v___y_574_);
lean_dec(v_x_573_);
return v_res_575_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadLift___redArg(){
_start:
{
lean_object* v___f_578_; 
v___f_578_ = ((lean_object*)(l_Lean_MonadCacheT_instMonadLift___redArg___closed__0));
return v___f_578_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadLift___redArg___boxed(lean_object* v___dummy_579_){
_start:
{
lean_object* v_res_580_; 
v_res_580_ = l_Lean_MonadCacheT_instMonadLift___redArg();
return v_res_580_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadLift(lean_object* v_00_u03c9_581_, lean_object* v_00_u03b1_582_, lean_object* v_00_u03b2_583_, lean_object* v_m_584_, lean_object* v_inst_585_, lean_object* v_inst_586_, lean_object* v_inst_587_){
_start:
{
lean_object* v___f_588_; 
v___f_588_ = ((lean_object*)(l_Lean_MonadCacheT_instMonadLift___redArg___closed__0));
return v___f_588_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadLift___boxed(lean_object* v_00_u03c9_589_, lean_object* v_00_u03b1_590_, lean_object* v_00_u03b2_591_, lean_object* v_m_592_, lean_object* v_inst_593_, lean_object* v_inst_594_, lean_object* v_inst_595_){
_start:
{
lean_object* v_res_596_; 
v_res_596_ = l_Lean_MonadCacheT_instMonadLift(v_00_u03c9_589_, v_00_u03b1_590_, v_00_u03b2_591_, v_m_592_, v_inst_593_, v_inst_594_, v_inst_595_);
lean_dec_ref(v_inst_595_);
lean_dec_ref(v_inst_594_);
return v_res_596_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadExceptOf___redArg___lam__0(lean_object* v_inst_597_, lean_object* v_00_u03b1_598_, lean_object* v_e_599_, lean_object* v___y_600_){
_start:
{
lean_object* v_throw_601_; lean_object* v___x_602_; 
v_throw_601_ = lean_ctor_get(v_inst_597_, 0);
lean_inc(v_throw_601_);
lean_dec_ref(v_inst_597_);
v___x_602_ = lean_apply_2(v_throw_601_, lean_box(0), v_e_599_);
return v___x_602_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadExceptOf___redArg___lam__0___boxed(lean_object* v_inst_603_, lean_object* v_00_u03b1_604_, lean_object* v_e_605_, lean_object* v___y_606_){
_start:
{
lean_object* v_res_607_; 
v_res_607_ = l_Lean_MonadCacheT_instMonadExceptOf___redArg___lam__0(v_inst_603_, v_00_u03b1_604_, v_e_605_, v___y_606_);
lean_dec(v___y_606_);
return v_res_607_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadExceptOf___redArg___lam__1(lean_object* v_h_608_, lean_object* v___y_609_, lean_object* v_e_610_){
_start:
{
lean_object* v___x_611_; 
lean_inc(v___y_609_);
v___x_611_ = lean_apply_2(v_h_608_, v_e_610_, v___y_609_);
return v___x_611_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadExceptOf___redArg___lam__1___boxed(lean_object* v_h_612_, lean_object* v___y_613_, lean_object* v_e_614_){
_start:
{
lean_object* v_res_615_; 
v_res_615_ = l_Lean_MonadCacheT_instMonadExceptOf___redArg___lam__1(v_h_612_, v___y_613_, v_e_614_);
lean_dec(v___y_613_);
return v_res_615_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadExceptOf___redArg___lam__2(lean_object* v_inst_616_, lean_object* v_00_u03b1_617_, lean_object* v_x_618_, lean_object* v_h_619_, lean_object* v___y_620_){
_start:
{
lean_object* v_tryCatch_621_; lean_object* v___f_622_; lean_object* v___x_623_; lean_object* v___x_624_; 
v_tryCatch_621_ = lean_ctor_get(v_inst_616_, 1);
lean_inc(v_tryCatch_621_);
lean_dec_ref(v_inst_616_);
lean_inc_n(v___y_620_, 2);
v___f_622_ = lean_alloc_closure((void*)(l_Lean_MonadCacheT_instMonadExceptOf___redArg___lam__1___boxed), 3, 2);
lean_closure_set(v___f_622_, 0, v_h_619_);
lean_closure_set(v___f_622_, 1, v___y_620_);
v___x_623_ = lean_apply_1(v_x_618_, v___y_620_);
v___x_624_ = lean_apply_3(v_tryCatch_621_, lean_box(0), v___x_623_, v___f_622_);
return v___x_624_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadExceptOf___redArg___lam__2___boxed(lean_object* v_inst_625_, lean_object* v_00_u03b1_626_, lean_object* v_x_627_, lean_object* v_h_628_, lean_object* v___y_629_){
_start:
{
lean_object* v_res_630_; 
v_res_630_ = l_Lean_MonadCacheT_instMonadExceptOf___redArg___lam__2(v_inst_625_, v_00_u03b1_626_, v_x_627_, v_h_628_, v___y_629_);
lean_dec(v___y_629_);
return v_res_630_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadExceptOf___redArg(lean_object* v_inst_631_){
_start:
{
lean_object* v___f_632_; lean_object* v___f_633_; lean_object* v___x_634_; 
lean_inc_ref(v_inst_631_);
v___f_632_ = lean_alloc_closure((void*)(l_Lean_MonadCacheT_instMonadExceptOf___redArg___lam__0___boxed), 4, 1);
lean_closure_set(v___f_632_, 0, v_inst_631_);
v___f_633_ = lean_alloc_closure((void*)(l_Lean_MonadCacheT_instMonadExceptOf___redArg___lam__2___boxed), 5, 1);
lean_closure_set(v___f_633_, 0, v_inst_631_);
v___x_634_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_634_, 0, v___f_632_);
lean_ctor_set(v___x_634_, 1, v___f_633_);
return v___x_634_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadExceptOf(lean_object* v_00_u03c9_635_, lean_object* v_00_u03b1_636_, lean_object* v_00_u03b2_637_, lean_object* v_m_638_, lean_object* v_inst_639_, lean_object* v_inst_640_, lean_object* v_inst_641_, lean_object* v_00_u03b5_642_, lean_object* v_inst_643_){
_start:
{
lean_object* v___x_644_; 
v___x_644_ = l_Lean_MonadCacheT_instMonadExceptOf___redArg(v_inst_643_);
return v___x_644_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadExceptOf___boxed(lean_object* v_00_u03c9_645_, lean_object* v_00_u03b1_646_, lean_object* v_00_u03b2_647_, lean_object* v_m_648_, lean_object* v_inst_649_, lean_object* v_inst_650_, lean_object* v_inst_651_, lean_object* v_00_u03b5_652_, lean_object* v_inst_653_){
_start:
{
lean_object* v_res_654_; 
v_res_654_ = l_Lean_MonadCacheT_instMonadExceptOf(v_00_u03c9_645_, v_00_u03b1_646_, v_00_u03b2_647_, v_m_648_, v_inst_649_, v_inst_650_, v_inst_651_, v_00_u03b5_652_, v_inst_653_);
lean_dec_ref(v_inst_651_);
lean_dec_ref(v_inst_650_);
return v_res_654_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadControl___redArg___lam__0(lean_object* v___y_655_, lean_object* v_00_u03b2_656_, lean_object* v_x_657_){
_start:
{
lean_object* v___x_658_; 
lean_inc(v___y_655_);
v___x_658_ = lean_apply_1(v_x_657_, v___y_655_);
return v___x_658_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadControl___redArg___lam__0___boxed(lean_object* v___y_659_, lean_object* v_00_u03b2_660_, lean_object* v_x_661_){
_start:
{
lean_object* v_res_662_; 
v_res_662_ = l_Lean_MonadCacheT_instMonadControl___redArg___lam__0(v___y_659_, v_00_u03b2_660_, v_x_661_);
lean_dec(v___y_659_);
return v_res_662_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadControl___redArg___lam__1(lean_object* v_00_u03b1_663_, lean_object* v_f_664_, lean_object* v___y_665_){
_start:
{
lean_object* v___f_666_; lean_object* v___x_667_; 
lean_inc(v___y_665_);
v___f_666_ = lean_alloc_closure((void*)(l_Lean_MonadCacheT_instMonadControl___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_666_, 0, v___y_665_);
v___x_667_ = lean_apply_1(v_f_664_, v___f_666_);
return v___x_667_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadControl___redArg___lam__1___boxed(lean_object* v_00_u03b1_668_, lean_object* v_f_669_, lean_object* v___y_670_){
_start:
{
lean_object* v_res_671_; 
v_res_671_ = l_Lean_MonadCacheT_instMonadControl___redArg___lam__1(v_00_u03b1_668_, v_f_669_, v___y_670_);
lean_dec(v___y_670_);
return v_res_671_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadControl___redArg(){
_start:
{
lean_object* v___x_677_; 
v___x_677_ = ((lean_object*)(l_Lean_MonadCacheT_instMonadControl___redArg___closed__1));
return v___x_677_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadControl___redArg___boxed(lean_object* v___dummy_678_){
_start:
{
lean_object* v_res_679_; 
v_res_679_ = l_Lean_MonadCacheT_instMonadControl___redArg();
return v_res_679_;
}
}
static lean_object* _init_l_Lean_MonadCacheT_instMonadControl___closed__0(void){
_start:
{
lean_object* v___x_680_; 
v___x_680_ = l_Lean_MonadCacheT_instMonadControl___redArg();
return v___x_680_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadControl(lean_object* v_00_u03c9_681_, lean_object* v_00_u03b1_682_, lean_object* v_00_u03b2_683_, lean_object* v_m_684_, lean_object* v_inst_685_, lean_object* v_inst_686_, lean_object* v_inst_687_, lean_object* v_inst_688_){
_start:
{
lean_object* v___x_689_; 
v___x_689_ = lean_obj_once(&l_Lean_MonadCacheT_instMonadControl___closed__0, &l_Lean_MonadCacheT_instMonadControl___closed__0_once, _init_l_Lean_MonadCacheT_instMonadControl___closed__0);
return v___x_689_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadControl___boxed(lean_object* v_00_u03c9_690_, lean_object* v_00_u03b1_691_, lean_object* v_00_u03b2_692_, lean_object* v_m_693_, lean_object* v_inst_694_, lean_object* v_inst_695_, lean_object* v_inst_696_, lean_object* v_inst_697_){
_start:
{
lean_object* v_res_698_; 
v_res_698_ = l_Lean_MonadCacheT_instMonadControl(v_00_u03c9_690_, v_00_u03b1_691_, v_00_u03b2_692_, v_m_693_, v_inst_694_, v_inst_695_, v_inst_696_, v_inst_697_);
lean_dec_ref(v_inst_697_);
lean_dec_ref(v_inst_696_);
lean_dec_ref(v_inst_695_);
return v_res_698_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadFinally___redArg___lam__0(lean_object* v_h_699_, lean_object* v___y_700_, lean_object* v_a_x3f_701_){
_start:
{
lean_object* v___x_702_; 
lean_inc(v___y_700_);
v___x_702_ = lean_apply_2(v_h_699_, v_a_x3f_701_, v___y_700_);
return v___x_702_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadFinally___redArg___lam__0___boxed(lean_object* v_h_703_, lean_object* v___y_704_, lean_object* v_a_x3f_705_){
_start:
{
lean_object* v_res_706_; 
v_res_706_ = l_Lean_MonadCacheT_instMonadFinally___redArg___lam__0(v_h_703_, v___y_704_, v_a_x3f_705_);
lean_dec(v___y_704_);
return v_res_706_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadFinally___redArg___lam__1(lean_object* v_inst_707_, lean_object* v_00_u03b1_708_, lean_object* v_00_u03b2_709_, lean_object* v_x_710_, lean_object* v_h_711_, lean_object* v___y_712_){
_start:
{
lean_object* v___f_713_; lean_object* v___x_714_; lean_object* v___x_715_; 
lean_inc_n(v___y_712_, 2);
v___f_713_ = lean_alloc_closure((void*)(l_Lean_MonadCacheT_instMonadFinally___redArg___lam__0___boxed), 3, 2);
lean_closure_set(v___f_713_, 0, v_h_711_);
lean_closure_set(v___f_713_, 1, v___y_712_);
v___x_714_ = lean_apply_1(v_x_710_, v___y_712_);
v___x_715_ = lean_apply_4(v_inst_707_, lean_box(0), lean_box(0), v___x_714_, v___f_713_);
return v___x_715_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadFinally___redArg___lam__1___boxed(lean_object* v_inst_716_, lean_object* v_00_u03b1_717_, lean_object* v_00_u03b2_718_, lean_object* v_x_719_, lean_object* v_h_720_, lean_object* v___y_721_){
_start:
{
lean_object* v_res_722_; 
v_res_722_ = l_Lean_MonadCacheT_instMonadFinally___redArg___lam__1(v_inst_716_, v_00_u03b1_717_, v_00_u03b2_718_, v_x_719_, v_h_720_, v___y_721_);
lean_dec(v___y_721_);
return v_res_722_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadFinally___redArg(lean_object* v_inst_723_){
_start:
{
lean_object* v___f_724_; 
v___f_724_ = lean_alloc_closure((void*)(l_Lean_MonadCacheT_instMonadFinally___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_724_, 0, v_inst_723_);
return v___f_724_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadFinally(lean_object* v_00_u03c9_725_, lean_object* v_00_u03b1_726_, lean_object* v_00_u03b2_727_, lean_object* v_m_728_, lean_object* v_inst_729_, lean_object* v_inst_730_, lean_object* v_inst_731_, lean_object* v_inst_732_){
_start:
{
lean_object* v___f_733_; 
v___f_733_ = lean_alloc_closure((void*)(l_Lean_MonadCacheT_instMonadFinally___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_733_, 0, v_inst_732_);
return v___f_733_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadFinally___boxed(lean_object* v_00_u03c9_734_, lean_object* v_00_u03b1_735_, lean_object* v_00_u03b2_736_, lean_object* v_m_737_, lean_object* v_inst_738_, lean_object* v_inst_739_, lean_object* v_inst_740_, lean_object* v_inst_741_){
_start:
{
lean_object* v_res_742_; 
v_res_742_ = l_Lean_MonadCacheT_instMonadFinally(v_00_u03c9_734_, v_00_u03b1_735_, v_00_u03b2_736_, v_m_737_, v_inst_738_, v_inst_739_, v_inst_740_, v_inst_741_);
lean_dec_ref(v_inst_740_);
lean_dec_ref(v_inst_739_);
return v_res_742_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadRef___redArg___lam__0(lean_object* v_ref_743_, lean_object* v_x_744_, lean_object* v___y_745_, lean_object* v_withRef_746_, lean_object* v_a_747_){
_start:
{
lean_object* v_ref_748_; lean_object* v___x_749_; lean_object* v___x_750_; 
v_ref_748_ = l_Lean_replaceRef(v_ref_743_, v_a_747_);
lean_inc(v___y_745_);
v___x_749_ = lean_apply_1(v_x_744_, v___y_745_);
v___x_750_ = lean_apply_3(v_withRef_746_, lean_box(0), v_ref_748_, v___x_749_);
return v___x_750_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadRef___redArg___lam__0___boxed(lean_object* v_ref_751_, lean_object* v_x_752_, lean_object* v___y_753_, lean_object* v_withRef_754_, lean_object* v_a_755_){
_start:
{
lean_object* v_res_756_; 
v_res_756_ = l_Lean_MonadCacheT_instMonadRef___redArg___lam__0(v_ref_751_, v_x_752_, v___y_753_, v_withRef_754_, v_a_755_);
lean_dec(v_a_755_);
lean_dec(v___y_753_);
lean_dec(v_ref_751_);
return v_res_756_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadRef___redArg___lam__1(lean_object* v_inst_757_, lean_object* v_withRef_758_, lean_object* v_getRef_759_, lean_object* v_00_u03b1_760_, lean_object* v_ref_761_, lean_object* v_x_762_, lean_object* v___y_763_){
_start:
{
lean_object* v_toBind_764_; lean_object* v___f_765_; lean_object* v___x_766_; 
v_toBind_764_ = lean_ctor_get(v_inst_757_, 1);
lean_inc(v_toBind_764_);
lean_dec_ref(v_inst_757_);
lean_inc(v___y_763_);
v___f_765_ = lean_alloc_closure((void*)(l_Lean_MonadCacheT_instMonadRef___redArg___lam__0___boxed), 5, 4);
lean_closure_set(v___f_765_, 0, v_ref_761_);
lean_closure_set(v___f_765_, 1, v_x_762_);
lean_closure_set(v___f_765_, 2, v___y_763_);
lean_closure_set(v___f_765_, 3, v_withRef_758_);
v___x_766_ = lean_apply_4(v_toBind_764_, lean_box(0), lean_box(0), v_getRef_759_, v___f_765_);
return v___x_766_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadRef___redArg___lam__1___boxed(lean_object* v_inst_767_, lean_object* v_withRef_768_, lean_object* v_getRef_769_, lean_object* v_00_u03b1_770_, lean_object* v_ref_771_, lean_object* v_x_772_, lean_object* v___y_773_){
_start:
{
lean_object* v_res_774_; 
v_res_774_ = l_Lean_MonadCacheT_instMonadRef___redArg___lam__1(v_inst_767_, v_withRef_768_, v_getRef_769_, v_00_u03b1_770_, v_ref_771_, v_x_772_, v___y_773_);
lean_dec(v___y_773_);
return v_res_774_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadRef___redArg(lean_object* v_inst_775_, lean_object* v_inst_776_, lean_object* v_inst_777_, lean_object* v_inst_778_, lean_object* v_inst_779_){
_start:
{
lean_object* v_getRef_780_; lean_object* v_withRef_781_; lean_object* v___x_783_; uint8_t v_isShared_784_; uint8_t v_isSharedCheck_791_; 
v_getRef_780_ = lean_ctor_get(v_inst_779_, 0);
v_withRef_781_ = lean_ctor_get(v_inst_779_, 1);
v_isSharedCheck_791_ = !lean_is_exclusive(v_inst_779_);
if (v_isSharedCheck_791_ == 0)
{
v___x_783_ = v_inst_779_;
v_isShared_784_ = v_isSharedCheck_791_;
goto v_resetjp_782_;
}
else
{
lean_inc(v_withRef_781_);
lean_inc(v_getRef_780_);
lean_dec(v_inst_779_);
v___x_783_ = lean_box(0);
v_isShared_784_ = v_isSharedCheck_791_;
goto v_resetjp_782_;
}
v_resetjp_782_:
{
lean_object* v___f_785_; lean_object* v___x_786_; lean_object* v___x_787_; lean_object* v___x_789_; 
lean_inc(v_getRef_780_);
v___f_785_ = lean_alloc_closure((void*)(l_Lean_MonadCacheT_instMonadRef___redArg___lam__1___boxed), 7, 3);
lean_closure_set(v___f_785_, 0, v_inst_778_);
lean_closure_set(v___f_785_, 1, v_withRef_781_);
lean_closure_set(v___f_785_, 2, v_getRef_780_);
v___x_786_ = lean_alloc_closure((void*)(l_StateRefT_x27_lift___boxed), 6, 5);
lean_closure_set(v___x_786_, 0, lean_box(0));
lean_closure_set(v___x_786_, 1, lean_box(0));
lean_closure_set(v___x_786_, 2, lean_box(0));
lean_closure_set(v___x_786_, 3, lean_box(0));
lean_closure_set(v___x_786_, 4, v_getRef_780_);
v___x_787_ = lean_alloc_closure((void*)(l_Lean_MonadCacheT_mk___boxed), 10, 9);
lean_closure_set(v___x_787_, 0, lean_box(0));
lean_closure_set(v___x_787_, 1, lean_box(0));
lean_closure_set(v___x_787_, 2, lean_box(0));
lean_closure_set(v___x_787_, 3, lean_box(0));
lean_closure_set(v___x_787_, 4, v_inst_775_);
lean_closure_set(v___x_787_, 5, v_inst_776_);
lean_closure_set(v___x_787_, 6, v_inst_777_);
lean_closure_set(v___x_787_, 7, lean_box(0));
lean_closure_set(v___x_787_, 8, v___x_786_);
if (v_isShared_784_ == 0)
{
lean_ctor_set(v___x_783_, 1, v___f_785_);
lean_ctor_set(v___x_783_, 0, v___x_787_);
v___x_789_ = v___x_783_;
goto v_reusejp_788_;
}
else
{
lean_object* v_reuseFailAlloc_790_; 
v_reuseFailAlloc_790_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_790_, 0, v___x_787_);
lean_ctor_set(v_reuseFailAlloc_790_, 1, v___f_785_);
v___x_789_ = v_reuseFailAlloc_790_;
goto v_reusejp_788_;
}
v_reusejp_788_:
{
return v___x_789_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instMonadRef(lean_object* v_00_u03c9_792_, lean_object* v_00_u03b1_793_, lean_object* v_00_u03b2_794_, lean_object* v_m_795_, lean_object* v_inst_796_, lean_object* v_inst_797_, lean_object* v_inst_798_, lean_object* v_inst_799_, lean_object* v_inst_800_){
_start:
{
lean_object* v___x_801_; 
v___x_801_ = l_Lean_MonadCacheT_instMonadRef___redArg(v_inst_796_, v_inst_797_, v_inst_798_, v_inst_799_, v_inst_800_);
return v___x_801_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instAlternative___redArg___lam__0(lean_object* v_inst_802_, lean_object* v_00_u03b1_803_, lean_object* v___y_804_){
_start:
{
lean_object* v_failure_805_; lean_object* v___x_806_; 
v_failure_805_ = lean_ctor_get(v_inst_802_, 1);
lean_inc(v_failure_805_);
lean_dec_ref(v_inst_802_);
v___x_806_ = lean_apply_1(v_failure_805_, lean_box(0));
return v___x_806_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instAlternative___redArg___lam__0___boxed(lean_object* v_inst_807_, lean_object* v_00_u03b1_808_, lean_object* v___y_809_){
_start:
{
lean_object* v_res_810_; 
v_res_810_ = l_Lean_MonadCacheT_instAlternative___redArg___lam__0(v_inst_807_, v_00_u03b1_808_, v___y_809_);
lean_dec(v___y_809_);
return v_res_810_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instAlternative___redArg___lam__1(lean_object* v_y_811_, lean_object* v___y_812_, lean_object* v_x_813_){
_start:
{
lean_object* v___x_814_; lean_object* v___x_815_; 
v___x_814_ = lean_box(0);
lean_inc(v___y_812_);
v___x_815_ = lean_apply_2(v_y_811_, v___x_814_, v___y_812_);
return v___x_815_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instAlternative___redArg___lam__1___boxed(lean_object* v_y_816_, lean_object* v___y_817_, lean_object* v_x_818_){
_start:
{
lean_object* v_res_819_; 
v_res_819_ = l_Lean_MonadCacheT_instAlternative___redArg___lam__1(v_y_816_, v___y_817_, v_x_818_);
lean_dec(v___y_817_);
return v_res_819_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instAlternative___redArg___lam__2(lean_object* v_inst_820_, lean_object* v_00_u03b1_821_, lean_object* v_x_822_, lean_object* v_y_823_, lean_object* v___y_824_){
_start:
{
lean_object* v_orElse_825_; lean_object* v___f_826_; lean_object* v___x_827_; lean_object* v___x_828_; 
v_orElse_825_ = lean_ctor_get(v_inst_820_, 2);
lean_inc(v_orElse_825_);
lean_dec_ref(v_inst_820_);
lean_inc_n(v___y_824_, 2);
v___f_826_ = lean_alloc_closure((void*)(l_Lean_MonadCacheT_instAlternative___redArg___lam__1___boxed), 3, 2);
lean_closure_set(v___f_826_, 0, v_y_823_);
lean_closure_set(v___f_826_, 1, v___y_824_);
v___x_827_ = lean_apply_1(v_x_822_, v___y_824_);
v___x_828_ = lean_apply_3(v_orElse_825_, lean_box(0), v___x_827_, v___f_826_);
return v___x_828_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instAlternative___redArg___lam__2___boxed(lean_object* v_inst_829_, lean_object* v_00_u03b1_830_, lean_object* v_x_831_, lean_object* v_y_832_, lean_object* v___y_833_){
_start:
{
lean_object* v_res_834_; 
v_res_834_ = l_Lean_MonadCacheT_instAlternative___redArg___lam__2(v_inst_829_, v_00_u03b1_830_, v_x_831_, v_y_832_, v___y_833_);
lean_dec(v___y_833_);
return v_res_834_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instAlternative___redArg(lean_object* v_inst_835_, lean_object* v_inst_836_){
_start:
{
lean_object* v___x_837_; lean_object* v_toApplicative_838_; lean_object* v___f_839_; lean_object* v___f_840_; lean_object* v___x_841_; 
v___x_837_ = l_Lean_MonadCacheT_instMonad___redArg(v_inst_835_);
v_toApplicative_838_ = lean_ctor_get(v___x_837_, 0);
lean_inc_ref(v_toApplicative_838_);
lean_dec_ref(v___x_837_);
lean_inc_ref(v_inst_836_);
v___f_839_ = lean_alloc_closure((void*)(l_Lean_MonadCacheT_instAlternative___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_839_, 0, v_inst_836_);
v___f_840_ = lean_alloc_closure((void*)(l_Lean_MonadCacheT_instAlternative___redArg___lam__2___boxed), 5, 1);
lean_closure_set(v___f_840_, 0, v_inst_836_);
v___x_841_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_841_, 0, v_toApplicative_838_);
lean_ctor_set(v___x_841_, 1, v___f_839_);
lean_ctor_set(v___x_841_, 2, v___f_840_);
return v___x_841_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instAlternative(lean_object* v_00_u03c9_842_, lean_object* v_00_u03b1_843_, lean_object* v_00_u03b2_844_, lean_object* v_m_845_, lean_object* v_inst_846_, lean_object* v_inst_847_, lean_object* v_inst_848_, lean_object* v_inst_849_, lean_object* v_inst_850_){
_start:
{
lean_object* v___x_851_; 
v___x_851_ = l_Lean_MonadCacheT_instAlternative___redArg(v_inst_849_, v_inst_850_);
return v___x_851_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadCacheT_instAlternative___boxed(lean_object* v_00_u03c9_852_, lean_object* v_00_u03b1_853_, lean_object* v_00_u03b2_854_, lean_object* v_m_855_, lean_object* v_inst_856_, lean_object* v_inst_857_, lean_object* v_inst_858_, lean_object* v_inst_859_, lean_object* v_inst_860_){
_start:
{
lean_object* v_res_861_; 
v_res_861_ = l_Lean_MonadCacheT_instAlternative(v_00_u03c9_852_, v_00_u03b1_853_, v_00_u03b2_854_, v_m_855_, v_inst_856_, v_inst_857_, v_inst_858_, v_inst_859_, v_inst_860_);
lean_dec_ref(v_inst_858_);
lean_dec_ref(v_inst_857_);
return v_res_861_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_mk___redArg(lean_object* v_toStateT_862_, lean_object* v___y_863_){
_start:
{
lean_object* v___x_864_; 
v___x_864_ = lean_apply_1(v_toStateT_862_, v___y_863_);
return v___x_864_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_mk(lean_object* v_00_u03b1_865_, lean_object* v_00_u03b2_866_, lean_object* v_m_867_, lean_object* v_inst_868_, lean_object* v_inst_869_, lean_object* v_00_u03c3_870_, lean_object* v_toStateT_871_, lean_object* v___y_872_){
_start:
{
lean_object* v___x_873_; 
v___x_873_ = lean_apply_1(v_toStateT_871_, v___y_872_);
return v___x_873_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_mk___boxed(lean_object* v_00_u03b1_874_, lean_object* v_00_u03b2_875_, lean_object* v_m_876_, lean_object* v_inst_877_, lean_object* v_inst_878_, lean_object* v_00_u03c3_879_, lean_object* v_toStateT_880_, lean_object* v___y_881_){
_start:
{
lean_object* v_res_882_; 
v_res_882_ = l_Lean_MonadStateCacheT_mk(v_00_u03b1_874_, v_00_u03b2_875_, v_m_876_, v_inst_877_, v_inst_878_, v_00_u03c3_879_, v_toStateT_880_, v___y_881_);
lean_dec_ref(v_inst_878_);
lean_dec_ref(v_inst_877_);
return v_res_882_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_toStateT___redArg(lean_object* v_self_883_, lean_object* v___y_884_){
_start:
{
lean_object* v___x_885_; 
v___x_885_ = lean_apply_1(v_self_883_, v___y_884_);
return v___x_885_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_toStateT(lean_object* v_00_u03b1_886_, lean_object* v_00_u03b2_887_, lean_object* v_m_888_, lean_object* v_inst_889_, lean_object* v_inst_890_, lean_object* v_00_u03c3_891_, lean_object* v_self_892_, lean_object* v___y_893_){
_start:
{
lean_object* v___x_894_; 
v___x_894_ = lean_apply_1(v_self_892_, v___y_893_);
return v___x_894_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_toStateT___boxed(lean_object* v_00_u03b1_895_, lean_object* v_00_u03b2_896_, lean_object* v_m_897_, lean_object* v_inst_898_, lean_object* v_inst_899_, lean_object* v_00_u03c3_900_, lean_object* v_self_901_, lean_object* v___y_902_){
_start:
{
lean_object* v_res_903_; 
v_res_903_ = l_Lean_MonadStateCacheT_toStateT(v_00_u03b1_895_, v_00_u03b2_896_, v_m_897_, v_inst_898_, v_inst_899_, v_00_u03c3_900_, v_self_901_, v___y_902_);
lean_dec_ref(v_inst_899_);
lean_dec_ref(v_inst_898_);
return v_res_903_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadHashMapCacheAdapter___redArg___lam__0(lean_object* v_inst_904_, lean_object* v_f_905_, lean_object* v___y_906_){
_start:
{
lean_object* v_toApplicative_907_; lean_object* v___x_909_; uint8_t v_isShared_910_; uint8_t v_isSharedCheck_918_; 
v_toApplicative_907_ = lean_ctor_get(v_inst_904_, 0);
v_isSharedCheck_918_ = !lean_is_exclusive(v_inst_904_);
if (v_isSharedCheck_918_ == 0)
{
lean_object* v_unused_919_; 
v_unused_919_ = lean_ctor_get(v_inst_904_, 1);
lean_dec(v_unused_919_);
v___x_909_ = v_inst_904_;
v_isShared_910_ = v_isSharedCheck_918_;
goto v_resetjp_908_;
}
else
{
lean_inc(v_toApplicative_907_);
lean_dec(v_inst_904_);
v___x_909_ = lean_box(0);
v_isShared_910_ = v_isSharedCheck_918_;
goto v_resetjp_908_;
}
v_resetjp_908_:
{
lean_object* v_toPure_911_; lean_object* v___x_912_; lean_object* v___x_913_; lean_object* v___x_915_; 
v_toPure_911_ = lean_ctor_get(v_toApplicative_907_, 1);
lean_inc(v_toPure_911_);
lean_dec_ref(v_toApplicative_907_);
v___x_912_ = lean_box(0);
v___x_913_ = lean_apply_1(v_f_905_, v___y_906_);
if (v_isShared_910_ == 0)
{
lean_ctor_set(v___x_909_, 1, v___x_913_);
lean_ctor_set(v___x_909_, 0, v___x_912_);
v___x_915_ = v___x_909_;
goto v_reusejp_914_;
}
else
{
lean_object* v_reuseFailAlloc_917_; 
v_reuseFailAlloc_917_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_917_, 0, v___x_912_);
lean_ctor_set(v_reuseFailAlloc_917_, 1, v___x_913_);
v___x_915_ = v_reuseFailAlloc_917_;
goto v_reusejp_914_;
}
v_reusejp_914_:
{
lean_object* v___x_916_; 
v___x_916_ = lean_apply_2(v_toPure_911_, lean_box(0), v___x_915_);
return v___x_916_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadHashMapCacheAdapter___redArg(lean_object* v_inst_920_, lean_object* v_inst_921_, lean_object* v_inst_922_){
_start:
{
lean_object* v___f_923_; lean_object* v___x_924_; lean_object* v___x_925_; lean_object* v___x_926_; 
lean_inc_ref(v_inst_922_);
v___f_923_ = lean_alloc_closure((void*)(l_Lean_MonadStateCacheT_instMonadHashMapCacheAdapter___redArg___lam__0), 3, 1);
lean_closure_set(v___f_923_, 0, v_inst_922_);
v___x_924_ = lean_alloc_closure((void*)(l_StateT_get), 4, 3);
lean_closure_set(v___x_924_, 0, lean_box(0));
lean_closure_set(v___x_924_, 1, lean_box(0));
lean_closure_set(v___x_924_, 2, v_inst_922_);
v___x_925_ = lean_alloc_closure((void*)(l_Lean_MonadStateCacheT_mk___boxed), 8, 7);
lean_closure_set(v___x_925_, 0, lean_box(0));
lean_closure_set(v___x_925_, 1, lean_box(0));
lean_closure_set(v___x_925_, 2, lean_box(0));
lean_closure_set(v___x_925_, 3, v_inst_920_);
lean_closure_set(v___x_925_, 4, v_inst_921_);
lean_closure_set(v___x_925_, 5, lean_box(0));
lean_closure_set(v___x_925_, 6, v___x_924_);
v___x_926_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_926_, 0, v___x_925_);
lean_ctor_set(v___x_926_, 1, v___f_923_);
return v___x_926_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadHashMapCacheAdapter(lean_object* v_00_u03b1_927_, lean_object* v_00_u03b2_928_, lean_object* v_m_929_, lean_object* v_inst_930_, lean_object* v_inst_931_, lean_object* v_inst_932_){
_start:
{
lean_object* v___x_933_; 
v___x_933_ = l_Lean_MonadStateCacheT_instMonadHashMapCacheAdapter___redArg(v_inst_930_, v_inst_931_, v_inst_932_);
return v___x_933_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_run___redArg___lam__0(lean_object* v_x_934_){
_start:
{
lean_object* v_fst_935_; 
v_fst_935_ = lean_ctor_get(v_x_934_, 0);
lean_inc(v_fst_935_);
return v_fst_935_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_run___redArg___lam__0___boxed(lean_object* v_x_936_){
_start:
{
lean_object* v_res_937_; 
v_res_937_ = l_Lean_MonadStateCacheT_run___redArg___lam__0(v_x_936_);
lean_dec_ref(v_x_936_);
return v_res_937_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_run___redArg(lean_object* v_inst_939_, lean_object* v_x_940_){
_start:
{
lean_object* v_toApplicative_941_; lean_object* v_toFunctor_942_; lean_object* v_map_943_; lean_object* v___f_944_; lean_object* v___x_945_; lean_object* v___x_946_; lean_object* v___x_947_; 
v_toApplicative_941_ = lean_ctor_get(v_inst_939_, 0);
lean_inc_ref(v_toApplicative_941_);
lean_dec_ref(v_inst_939_);
v_toFunctor_942_ = lean_ctor_get(v_toApplicative_941_, 0);
lean_inc_ref(v_toFunctor_942_);
lean_dec_ref(v_toApplicative_941_);
v_map_943_ = lean_ctor_get(v_toFunctor_942_, 0);
lean_inc(v_map_943_);
lean_dec_ref(v_toFunctor_942_);
v___f_944_ = ((lean_object*)(l_Lean_MonadStateCacheT_run___redArg___closed__0));
v___x_945_ = lean_obj_once(&l_Lean_MonadCacheT_run___redArg___closed__1, &l_Lean_MonadCacheT_run___redArg___closed__1_once, _init_l_Lean_MonadCacheT_run___redArg___closed__1);
v___x_946_ = lean_apply_1(v_x_940_, v___x_945_);
v___x_947_ = lean_apply_4(v_map_943_, lean_box(0), lean_box(0), v___f_944_, v___x_946_);
return v___x_947_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_run(lean_object* v_00_u03b1_948_, lean_object* v_00_u03b2_949_, lean_object* v_m_950_, lean_object* v_inst_951_, lean_object* v_inst_952_, lean_object* v_inst_953_, lean_object* v_00_u03c3_954_, lean_object* v_x_955_){
_start:
{
lean_object* v_toApplicative_956_; lean_object* v_toFunctor_957_; lean_object* v_map_958_; lean_object* v___f_959_; lean_object* v___x_960_; lean_object* v___x_961_; lean_object* v___x_962_; 
v_toApplicative_956_ = lean_ctor_get(v_inst_953_, 0);
lean_inc_ref(v_toApplicative_956_);
lean_dec_ref(v_inst_953_);
v_toFunctor_957_ = lean_ctor_get(v_toApplicative_956_, 0);
lean_inc_ref(v_toFunctor_957_);
lean_dec_ref(v_toApplicative_956_);
v_map_958_ = lean_ctor_get(v_toFunctor_957_, 0);
lean_inc(v_map_958_);
lean_dec_ref(v_toFunctor_957_);
v___f_959_ = ((lean_object*)(l_Lean_MonadStateCacheT_run___redArg___closed__0));
v___x_960_ = lean_obj_once(&l_Lean_MonadCacheT_run___redArg___closed__1, &l_Lean_MonadCacheT_run___redArg___closed__1_once, _init_l_Lean_MonadCacheT_run___redArg___closed__1);
v___x_961_ = lean_apply_1(v_x_955_, v___x_960_);
v___x_962_ = lean_apply_4(v_map_958_, lean_box(0), lean_box(0), v___f_959_, v___x_961_);
return v___x_962_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_run___boxed(lean_object* v_00_u03b1_963_, lean_object* v_00_u03b2_964_, lean_object* v_m_965_, lean_object* v_inst_966_, lean_object* v_inst_967_, lean_object* v_inst_968_, lean_object* v_00_u03c3_969_, lean_object* v_x_970_){
_start:
{
lean_object* v_res_971_; 
v_res_971_ = l_Lean_MonadStateCacheT_run(v_00_u03b1_963_, v_00_u03b2_964_, v_m_965_, v_inst_966_, v_inst_967_, v_inst_968_, v_00_u03c3_969_, v_x_970_);
lean_dec_ref(v_inst_967_);
lean_dec_ref(v_inst_966_);
return v_res_971_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonad___redArg___lam__0(lean_object* v_f_972_, lean_object* v_toPure_973_, lean_object* v_____x_974_){
_start:
{
lean_object* v_fst_975_; lean_object* v_snd_976_; lean_object* v___x_978_; uint8_t v_isShared_979_; uint8_t v_isSharedCheck_985_; 
v_fst_975_ = lean_ctor_get(v_____x_974_, 0);
v_snd_976_ = lean_ctor_get(v_____x_974_, 1);
v_isSharedCheck_985_ = !lean_is_exclusive(v_____x_974_);
if (v_isSharedCheck_985_ == 0)
{
v___x_978_ = v_____x_974_;
v_isShared_979_ = v_isSharedCheck_985_;
goto v_resetjp_977_;
}
else
{
lean_inc(v_snd_976_);
lean_inc(v_fst_975_);
lean_dec(v_____x_974_);
v___x_978_ = lean_box(0);
v_isShared_979_ = v_isSharedCheck_985_;
goto v_resetjp_977_;
}
v_resetjp_977_:
{
lean_object* v___x_980_; lean_object* v___x_982_; 
v___x_980_ = lean_apply_1(v_f_972_, v_fst_975_);
if (v_isShared_979_ == 0)
{
lean_ctor_set(v___x_978_, 0, v___x_980_);
v___x_982_ = v___x_978_;
goto v_reusejp_981_;
}
else
{
lean_object* v_reuseFailAlloc_984_; 
v_reuseFailAlloc_984_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_984_, 0, v___x_980_);
lean_ctor_set(v_reuseFailAlloc_984_, 1, v_snd_976_);
v___x_982_ = v_reuseFailAlloc_984_;
goto v_reusejp_981_;
}
v_reusejp_981_:
{
lean_object* v___x_983_; 
v___x_983_ = lean_apply_2(v_toPure_973_, lean_box(0), v___x_982_);
return v___x_983_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonad___redArg___lam__1(lean_object* v_inst_986_, lean_object* v_00_u03b1_987_, lean_object* v_00_u03b2_988_, lean_object* v_f_989_, lean_object* v_x_990_, lean_object* v___y_991_){
_start:
{
lean_object* v_toApplicative_992_; lean_object* v_toBind_993_; lean_object* v_toPure_994_; lean_object* v___f_995_; lean_object* v___x_996_; lean_object* v___x_997_; 
v_toApplicative_992_ = lean_ctor_get(v_inst_986_, 0);
lean_inc_ref(v_toApplicative_992_);
v_toBind_993_ = lean_ctor_get(v_inst_986_, 1);
lean_inc(v_toBind_993_);
lean_dec_ref(v_inst_986_);
v_toPure_994_ = lean_ctor_get(v_toApplicative_992_, 1);
lean_inc(v_toPure_994_);
lean_dec_ref(v_toApplicative_992_);
v___f_995_ = lean_alloc_closure((void*)(l_Lean_MonadStateCacheT_instMonad___redArg___lam__0), 3, 2);
lean_closure_set(v___f_995_, 0, v_f_989_);
lean_closure_set(v___f_995_, 1, v_toPure_994_);
v___x_996_ = lean_apply_1(v_x_990_, v___y_991_);
v___x_997_ = lean_apply_4(v_toBind_993_, lean_box(0), lean_box(0), v___x_996_, v___f_995_);
return v___x_997_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonad___redArg___lam__2(lean_object* v___f_998_, lean_object* v_00_u03b1_999_, lean_object* v_00_u03b2_1000_, lean_object* v___y_1001_, lean_object* v___y_1002_, lean_object* v___y_1003_){
_start:
{
lean_object* v___x_1004_; lean_object* v___x_1005_; 
v___x_1004_ = lean_alloc_closure((void*)(l_Function_const___boxed), 4, 3);
lean_closure_set(v___x_1004_, 0, lean_box(0));
lean_closure_set(v___x_1004_, 1, lean_box(0));
lean_closure_set(v___x_1004_, 2, v___y_1001_);
v___x_1005_ = lean_apply_5(v___f_998_, lean_box(0), lean_box(0), v___x_1004_, v___y_1002_, v___y_1003_);
return v___x_1005_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonad___redArg___lam__3(lean_object* v_inst_1006_, lean_object* v_00_u03b1_1007_, lean_object* v_a_1008_, lean_object* v___y_1009_){
_start:
{
lean_object* v_toApplicative_1010_; lean_object* v___x_1012_; uint8_t v_isShared_1013_; uint8_t v_isSharedCheck_1019_; 
v_toApplicative_1010_ = lean_ctor_get(v_inst_1006_, 0);
v_isSharedCheck_1019_ = !lean_is_exclusive(v_inst_1006_);
if (v_isSharedCheck_1019_ == 0)
{
lean_object* v_unused_1020_; 
v_unused_1020_ = lean_ctor_get(v_inst_1006_, 1);
lean_dec(v_unused_1020_);
v___x_1012_ = v_inst_1006_;
v_isShared_1013_ = v_isSharedCheck_1019_;
goto v_resetjp_1011_;
}
else
{
lean_inc(v_toApplicative_1010_);
lean_dec(v_inst_1006_);
v___x_1012_ = lean_box(0);
v_isShared_1013_ = v_isSharedCheck_1019_;
goto v_resetjp_1011_;
}
v_resetjp_1011_:
{
lean_object* v_toPure_1014_; lean_object* v___x_1016_; 
v_toPure_1014_ = lean_ctor_get(v_toApplicative_1010_, 1);
lean_inc(v_toPure_1014_);
lean_dec_ref(v_toApplicative_1010_);
if (v_isShared_1013_ == 0)
{
lean_ctor_set(v___x_1012_, 1, v___y_1009_);
lean_ctor_set(v___x_1012_, 0, v_a_1008_);
v___x_1016_ = v___x_1012_;
goto v_reusejp_1015_;
}
else
{
lean_object* v_reuseFailAlloc_1018_; 
v_reuseFailAlloc_1018_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1018_, 0, v_a_1008_);
lean_ctor_set(v_reuseFailAlloc_1018_, 1, v___y_1009_);
v___x_1016_ = v_reuseFailAlloc_1018_;
goto v_reusejp_1015_;
}
v_reusejp_1015_:
{
lean_object* v___x_1017_; 
v___x_1017_ = lean_apply_2(v_toPure_1014_, lean_box(0), v___x_1016_);
return v___x_1017_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonad___redArg___lam__4(lean_object* v_x_1021_, lean_object* v___f_1022_, lean_object* v_____x_1023_){
_start:
{
lean_object* v_fst_1024_; lean_object* v_snd_1025_; lean_object* v___x_1026_; lean_object* v___x_1027_; lean_object* v___x_1028_; 
v_fst_1024_ = lean_ctor_get(v_____x_1023_, 0);
lean_inc(v_fst_1024_);
v_snd_1025_ = lean_ctor_get(v_____x_1023_, 1);
lean_inc(v_snd_1025_);
lean_dec_ref(v_____x_1023_);
v___x_1026_ = lean_box(0);
v___x_1027_ = lean_apply_1(v_x_1021_, v___x_1026_);
v___x_1028_ = lean_apply_5(v___f_1022_, lean_box(0), lean_box(0), v_fst_1024_, v___x_1027_, v_snd_1025_);
return v___x_1028_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonad___redArg___lam__5(lean_object* v_inst_1029_, lean_object* v___f_1030_, lean_object* v_00_u03b1_1031_, lean_object* v_00_u03b2_1032_, lean_object* v_f_1033_, lean_object* v_x_1034_, lean_object* v___y_1035_){
_start:
{
lean_object* v_toBind_1036_; lean_object* v___f_1037_; lean_object* v___x_1038_; lean_object* v___x_1039_; 
v_toBind_1036_ = lean_ctor_get(v_inst_1029_, 1);
lean_inc(v_toBind_1036_);
lean_dec_ref(v_inst_1029_);
v___f_1037_ = lean_alloc_closure((void*)(l_Lean_MonadStateCacheT_instMonad___redArg___lam__4), 3, 2);
lean_closure_set(v___f_1037_, 0, v_x_1034_);
lean_closure_set(v___f_1037_, 1, v___f_1030_);
v___x_1038_ = lean_apply_1(v_f_1033_, v___y_1035_);
v___x_1039_ = lean_apply_4(v_toBind_1036_, lean_box(0), lean_box(0), v___x_1038_, v___f_1037_);
return v___x_1039_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonad___redArg___lam__6(lean_object* v_f_1040_, lean_object* v_____x_1041_){
_start:
{
lean_object* v_fst_1042_; lean_object* v_snd_1043_; lean_object* v___x_1044_; 
v_fst_1042_ = lean_ctor_get(v_____x_1041_, 0);
lean_inc(v_fst_1042_);
v_snd_1043_ = lean_ctor_get(v_____x_1041_, 1);
lean_inc(v_snd_1043_);
lean_dec_ref(v_____x_1041_);
v___x_1044_ = lean_apply_2(v_f_1040_, v_fst_1042_, v_snd_1043_);
return v___x_1044_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonad___redArg___lam__7(lean_object* v_inst_1045_, lean_object* v_00_u03b1_1046_, lean_object* v_00_u03b2_1047_, lean_object* v_x_1048_, lean_object* v_f_1049_, lean_object* v___y_1050_){
_start:
{
lean_object* v_toBind_1051_; lean_object* v___f_1052_; lean_object* v___x_1053_; lean_object* v___x_1054_; 
v_toBind_1051_ = lean_ctor_get(v_inst_1045_, 1);
lean_inc(v_toBind_1051_);
lean_dec_ref(v_inst_1045_);
v___f_1052_ = lean_alloc_closure((void*)(l_Lean_MonadStateCacheT_instMonad___redArg___lam__6), 2, 1);
lean_closure_set(v___f_1052_, 0, v_f_1049_);
v___x_1053_ = lean_apply_1(v_x_1048_, v___y_1050_);
v___x_1054_ = lean_apply_4(v_toBind_1051_, lean_box(0), lean_box(0), v___x_1053_, v___f_1052_);
return v___x_1054_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonad___redArg___lam__8(lean_object* v___f_1055_, lean_object* v_a_1056_, lean_object* v_x_1057_, lean_object* v___y_1058_){
_start:
{
lean_object* v___x_1059_; 
v___x_1059_ = lean_apply_3(v___f_1055_, lean_box(0), v_a_1056_, v___y_1058_);
return v___x_1059_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonad___redArg___lam__8___boxed(lean_object* v___f_1060_, lean_object* v_a_1061_, lean_object* v_x_1062_, lean_object* v___y_1063_){
_start:
{
lean_object* v_res_1064_; 
v_res_1064_ = l_Lean_MonadStateCacheT_instMonad___redArg___lam__8(v___f_1060_, v_a_1061_, v_x_1062_, v___y_1063_);
lean_dec(v_x_1062_);
return v_res_1064_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonad___redArg___lam__9(lean_object* v___f_1065_, lean_object* v_y_1066_, lean_object* v___f_1067_, lean_object* v_a_1068_, lean_object* v___y_1069_){
_start:
{
lean_object* v___f_1070_; lean_object* v___x_1071_; lean_object* v___x_1072_; lean_object* v___x_1073_; 
v___f_1070_ = lean_alloc_closure((void*)(l_Lean_MonadStateCacheT_instMonad___redArg___lam__8___boxed), 4, 2);
lean_closure_set(v___f_1070_, 0, v___f_1065_);
lean_closure_set(v___f_1070_, 1, v_a_1068_);
v___x_1071_ = lean_box(0);
v___x_1072_ = lean_apply_1(v_y_1066_, v___x_1071_);
v___x_1073_ = lean_apply_5(v___f_1067_, lean_box(0), lean_box(0), v___x_1072_, v___f_1070_, v___y_1069_);
return v___x_1073_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonad___redArg___lam__10(lean_object* v___f_1074_, lean_object* v___f_1075_, lean_object* v_00_u03b1_1076_, lean_object* v_00_u03b2_1077_, lean_object* v_x_1078_, lean_object* v_y_1079_, lean_object* v___y_1080_){
_start:
{
lean_object* v___f_1081_; lean_object* v___x_1082_; 
lean_inc(v___f_1075_);
v___f_1081_ = lean_alloc_closure((void*)(l_Lean_MonadStateCacheT_instMonad___redArg___lam__9), 5, 3);
lean_closure_set(v___f_1081_, 0, v___f_1074_);
lean_closure_set(v___f_1081_, 1, v_y_1079_);
lean_closure_set(v___f_1081_, 2, v___f_1075_);
v___x_1082_ = lean_apply_5(v___f_1075_, lean_box(0), lean_box(0), v_x_1078_, v___f_1081_, v___y_1080_);
return v___x_1082_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonad___redArg___lam__11(lean_object* v_y_1083_, lean_object* v_____x_1084_){
_start:
{
lean_object* v_snd_1085_; lean_object* v___x_1086_; lean_object* v___x_1087_; 
v_snd_1085_ = lean_ctor_get(v_____x_1084_, 1);
lean_inc(v_snd_1085_);
lean_dec_ref(v_____x_1084_);
v___x_1086_ = lean_box(0);
v___x_1087_ = lean_apply_2(v_y_1083_, v___x_1086_, v_snd_1085_);
return v___x_1087_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonad___redArg___lam__12(lean_object* v_inst_1088_, lean_object* v_00_u03b1_1089_, lean_object* v_00_u03b2_1090_, lean_object* v_x_1091_, lean_object* v_y_1092_, lean_object* v___y_1093_){
_start:
{
lean_object* v_toBind_1094_; lean_object* v___f_1095_; lean_object* v___x_1096_; lean_object* v___x_1097_; 
v_toBind_1094_ = lean_ctor_get(v_inst_1088_, 1);
lean_inc(v_toBind_1094_);
lean_dec_ref(v_inst_1088_);
v___f_1095_ = lean_alloc_closure((void*)(l_Lean_MonadStateCacheT_instMonad___redArg___lam__11), 2, 1);
lean_closure_set(v___f_1095_, 0, v_y_1092_);
v___x_1096_ = lean_apply_1(v_x_1091_, v___y_1093_);
v___x_1097_ = lean_apply_4(v_toBind_1094_, lean_box(0), lean_box(0), v___x_1096_, v___f_1095_);
return v___x_1097_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonad___redArg(lean_object* v_inst_1098_){
_start:
{
lean_object* v___f_1099_; lean_object* v___f_1100_; lean_object* v___f_1101_; lean_object* v___f_1102_; lean_object* v___f_1103_; lean_object* v___f_1104_; lean_object* v___f_1105_; lean_object* v___x_1106_; lean_object* v___x_1107_; lean_object* v___x_1108_; 
lean_inc_ref_n(v_inst_1098_, 4);
v___f_1099_ = lean_alloc_closure((void*)(l_Lean_MonadStateCacheT_instMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1099_, 0, v_inst_1098_);
lean_inc_ref_n(v___f_1099_, 2);
v___f_1100_ = lean_alloc_closure((void*)(l_Lean_MonadStateCacheT_instMonad___redArg___lam__2), 6, 1);
lean_closure_set(v___f_1100_, 0, v___f_1099_);
v___f_1101_ = lean_alloc_closure((void*)(l_Lean_MonadStateCacheT_instMonad___redArg___lam__3), 4, 1);
lean_closure_set(v___f_1101_, 0, v_inst_1098_);
v___f_1102_ = lean_alloc_closure((void*)(l_Lean_MonadStateCacheT_instMonad___redArg___lam__5), 7, 2);
lean_closure_set(v___f_1102_, 0, v_inst_1098_);
lean_closure_set(v___f_1102_, 1, v___f_1099_);
v___f_1103_ = lean_alloc_closure((void*)(l_Lean_MonadStateCacheT_instMonad___redArg___lam__7), 6, 1);
lean_closure_set(v___f_1103_, 0, v_inst_1098_);
lean_inc_ref(v___f_1103_);
lean_inc_ref(v___f_1101_);
v___f_1104_ = lean_alloc_closure((void*)(l_Lean_MonadStateCacheT_instMonad___redArg___lam__10), 7, 2);
lean_closure_set(v___f_1104_, 0, v___f_1101_);
lean_closure_set(v___f_1104_, 1, v___f_1103_);
v___f_1105_ = lean_alloc_closure((void*)(l_Lean_MonadStateCacheT_instMonad___redArg___lam__12), 6, 1);
lean_closure_set(v___f_1105_, 0, v_inst_1098_);
v___x_1106_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1106_, 0, v___f_1099_);
lean_ctor_set(v___x_1106_, 1, v___f_1100_);
v___x_1107_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_1107_, 0, v___x_1106_);
lean_ctor_set(v___x_1107_, 1, v___f_1101_);
lean_ctor_set(v___x_1107_, 2, v___f_1102_);
lean_ctor_set(v___x_1107_, 3, v___f_1104_);
lean_ctor_set(v___x_1107_, 4, v___f_1105_);
v___x_1108_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1108_, 0, v___x_1107_);
lean_ctor_set(v___x_1108_, 1, v___f_1103_);
return v___x_1108_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonad(lean_object* v_00_u03b1_1109_, lean_object* v_00_u03b2_1110_, lean_object* v_m_1111_, lean_object* v_inst_1112_, lean_object* v_inst_1113_, lean_object* v_inst_1114_){
_start:
{
lean_object* v___x_1115_; 
v___x_1115_ = l_Lean_MonadStateCacheT_instMonad___redArg(v_inst_1114_);
return v___x_1115_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonad___boxed(lean_object* v_00_u03b1_1116_, lean_object* v_00_u03b2_1117_, lean_object* v_m_1118_, lean_object* v_inst_1119_, lean_object* v_inst_1120_, lean_object* v_inst_1121_){
_start:
{
lean_object* v_res_1122_; 
v_res_1122_ = l_Lean_MonadStateCacheT_instMonad(v_00_u03b1_1116_, v_00_u03b2_1117_, v_m_1118_, v_inst_1119_, v_inst_1120_, v_inst_1121_);
lean_dec_ref(v_inst_1120_);
lean_dec_ref(v_inst_1119_);
return v_res_1122_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadLift___redArg___lam__0(lean_object* v___y_1123_, lean_object* v_toPure_1124_, lean_object* v_a_1125_){
_start:
{
lean_object* v___x_1126_; lean_object* v___x_1127_; 
v___x_1126_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1126_, 0, v_a_1125_);
lean_ctor_set(v___x_1126_, 1, v___y_1123_);
v___x_1127_ = lean_apply_2(v_toPure_1124_, lean_box(0), v___x_1126_);
return v___x_1127_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadLift___redArg___lam__1(lean_object* v_inst_1128_, lean_object* v_00_u03b1_1129_, lean_object* v_x_1130_, lean_object* v___y_1131_){
_start:
{
lean_object* v_toApplicative_1132_; lean_object* v_toBind_1133_; lean_object* v_toPure_1134_; lean_object* v___f_1135_; lean_object* v___x_1136_; 
v_toApplicative_1132_ = lean_ctor_get(v_inst_1128_, 0);
lean_inc_ref(v_toApplicative_1132_);
v_toBind_1133_ = lean_ctor_get(v_inst_1128_, 1);
lean_inc(v_toBind_1133_);
lean_dec_ref(v_inst_1128_);
v_toPure_1134_ = lean_ctor_get(v_toApplicative_1132_, 1);
lean_inc(v_toPure_1134_);
lean_dec_ref(v_toApplicative_1132_);
v___f_1135_ = lean_alloc_closure((void*)(l_Lean_MonadStateCacheT_instMonadLift___redArg___lam__0), 3, 2);
lean_closure_set(v___f_1135_, 0, v___y_1131_);
lean_closure_set(v___f_1135_, 1, v_toPure_1134_);
v___x_1136_ = lean_apply_4(v_toBind_1133_, lean_box(0), lean_box(0), v_x_1130_, v___f_1135_);
return v___x_1136_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadLift___redArg(lean_object* v_inst_1137_){
_start:
{
lean_object* v___f_1138_; 
v___f_1138_ = lean_alloc_closure((void*)(l_Lean_MonadStateCacheT_instMonadLift___redArg___lam__1), 4, 1);
lean_closure_set(v___f_1138_, 0, v_inst_1137_);
return v___f_1138_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadLift(lean_object* v_00_u03b1_1139_, lean_object* v_00_u03b2_1140_, lean_object* v_m_1141_, lean_object* v_inst_1142_, lean_object* v_inst_1143_, lean_object* v_inst_1144_){
_start:
{
lean_object* v___f_1145_; 
v___f_1145_ = lean_alloc_closure((void*)(l_Lean_MonadStateCacheT_instMonadLift___redArg___lam__1), 4, 1);
lean_closure_set(v___f_1145_, 0, v_inst_1144_);
return v___f_1145_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadLift___boxed(lean_object* v_00_u03b1_1146_, lean_object* v_00_u03b2_1147_, lean_object* v_m_1148_, lean_object* v_inst_1149_, lean_object* v_inst_1150_, lean_object* v_inst_1151_){
_start:
{
lean_object* v_res_1152_; 
v_res_1152_ = l_Lean_MonadStateCacheT_instMonadLift(v_00_u03b1_1146_, v_00_u03b2_1147_, v_m_1148_, v_inst_1149_, v_inst_1150_, v_inst_1151_);
lean_dec_ref(v_inst_1150_);
lean_dec_ref(v_inst_1149_);
return v_res_1152_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadExceptOf___redArg___lam__1(lean_object* v_inst_1153_, lean_object* v_inst_1154_, lean_object* v_00_u03b1_1155_, lean_object* v_e_1156_, lean_object* v___y_1157_){
_start:
{
lean_object* v_toApplicative_1158_; lean_object* v_throw_1159_; lean_object* v_toBind_1160_; lean_object* v_toPure_1161_; lean_object* v___x_1162_; lean_object* v___f_1163_; lean_object* v___x_1164_; 
v_toApplicative_1158_ = lean_ctor_get(v_inst_1154_, 0);
lean_inc_ref(v_toApplicative_1158_);
v_throw_1159_ = lean_ctor_get(v_inst_1153_, 0);
lean_inc(v_throw_1159_);
lean_dec_ref(v_inst_1153_);
v_toBind_1160_ = lean_ctor_get(v_inst_1154_, 1);
lean_inc(v_toBind_1160_);
lean_dec_ref(v_inst_1154_);
v_toPure_1161_ = lean_ctor_get(v_toApplicative_1158_, 1);
lean_inc(v_toPure_1161_);
lean_dec_ref(v_toApplicative_1158_);
v___x_1162_ = lean_apply_2(v_throw_1159_, lean_box(0), v_e_1156_);
v___f_1163_ = lean_alloc_closure((void*)(l_Lean_MonadStateCacheT_instMonadLift___redArg___lam__0), 3, 2);
lean_closure_set(v___f_1163_, 0, v___y_1157_);
lean_closure_set(v___f_1163_, 1, v_toPure_1161_);
v___x_1164_ = lean_apply_4(v_toBind_1160_, lean_box(0), lean_box(0), v___x_1162_, v___f_1163_);
return v___x_1164_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadExceptOf___redArg___lam__0(lean_object* v_h_1165_, lean_object* v___y_1166_, lean_object* v_e_1167_){
_start:
{
lean_object* v___x_1168_; 
v___x_1168_ = lean_apply_2(v_h_1165_, v_e_1167_, v___y_1166_);
return v___x_1168_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadExceptOf___redArg___lam__2(lean_object* v_inst_1169_, lean_object* v_00_u03b1_1170_, lean_object* v_x_1171_, lean_object* v_h_1172_, lean_object* v___y_1173_){
_start:
{
lean_object* v_tryCatch_1174_; lean_object* v___f_1175_; lean_object* v___x_1176_; lean_object* v___x_1177_; 
v_tryCatch_1174_ = lean_ctor_get(v_inst_1169_, 1);
lean_inc(v_tryCatch_1174_);
lean_dec_ref(v_inst_1169_);
lean_inc_ref(v___y_1173_);
v___f_1175_ = lean_alloc_closure((void*)(l_Lean_MonadStateCacheT_instMonadExceptOf___redArg___lam__0), 3, 2);
lean_closure_set(v___f_1175_, 0, v_h_1172_);
lean_closure_set(v___f_1175_, 1, v___y_1173_);
v___x_1176_ = lean_apply_1(v_x_1171_, v___y_1173_);
v___x_1177_ = lean_apply_3(v_tryCatch_1174_, lean_box(0), v___x_1176_, v___f_1175_);
return v___x_1177_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadExceptOf___redArg(lean_object* v_inst_1178_, lean_object* v_inst_1179_){
_start:
{
lean_object* v___f_1180_; lean_object* v___f_1181_; lean_object* v___x_1182_; 
lean_inc_ref(v_inst_1179_);
v___f_1180_ = lean_alloc_closure((void*)(l_Lean_MonadStateCacheT_instMonadExceptOf___redArg___lam__1), 5, 2);
lean_closure_set(v___f_1180_, 0, v_inst_1179_);
lean_closure_set(v___f_1180_, 1, v_inst_1178_);
v___f_1181_ = lean_alloc_closure((void*)(l_Lean_MonadStateCacheT_instMonadExceptOf___redArg___lam__2), 5, 1);
lean_closure_set(v___f_1181_, 0, v_inst_1179_);
v___x_1182_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1182_, 0, v___f_1180_);
lean_ctor_set(v___x_1182_, 1, v___f_1181_);
return v___x_1182_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadExceptOf(lean_object* v_00_u03b1_1183_, lean_object* v_00_u03b2_1184_, lean_object* v_m_1185_, lean_object* v_inst_1186_, lean_object* v_inst_1187_, lean_object* v_inst_1188_, lean_object* v_00_u03b5_1189_, lean_object* v_inst_1190_){
_start:
{
lean_object* v___x_1191_; 
v___x_1191_ = l_Lean_MonadStateCacheT_instMonadExceptOf___redArg(v_inst_1188_, v_inst_1190_);
return v___x_1191_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadExceptOf___boxed(lean_object* v_00_u03b1_1192_, lean_object* v_00_u03b2_1193_, lean_object* v_m_1194_, lean_object* v_inst_1195_, lean_object* v_inst_1196_, lean_object* v_inst_1197_, lean_object* v_00_u03b5_1198_, lean_object* v_inst_1199_){
_start:
{
lean_object* v_res_1200_; 
v_res_1200_ = l_Lean_MonadStateCacheT_instMonadExceptOf(v_00_u03b1_1192_, v_00_u03b2_1193_, v_m_1194_, v_inst_1195_, v_inst_1196_, v_inst_1197_, v_00_u03b5_1198_, v_inst_1199_);
lean_dec_ref(v_inst_1196_);
lean_dec_ref(v_inst_1195_);
return v_res_1200_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadControl___redArg___lam__0(lean_object* v_fst_1201_, lean_object* v_00_u03b2_1202_, lean_object* v_x_1203_){
_start:
{
lean_object* v___x_1204_; 
v___x_1204_ = lean_apply_1(v_x_1203_, v_fst_1201_);
return v___x_1204_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadControl___redArg___lam__1(lean_object* v_snd_1205_, lean_object* v_toPure_1206_, lean_object* v_a_1207_){
_start:
{
lean_object* v___x_1208_; lean_object* v___x_1209_; 
v___x_1208_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1208_, 0, v_a_1207_);
lean_ctor_set(v___x_1208_, 1, v_snd_1205_);
v___x_1209_ = lean_apply_2(v_toPure_1206_, lean_box(0), v___x_1208_);
return v___x_1209_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadControl___redArg___lam__2(lean_object* v_f_1210_, lean_object* v_toPure_1211_, lean_object* v_toBind_1212_, lean_object* v_____x_1213_){
_start:
{
lean_object* v_fst_1214_; lean_object* v_snd_1215_; lean_object* v___f_1216_; lean_object* v___x_1217_; lean_object* v___f_1218_; lean_object* v___x_1219_; 
v_fst_1214_ = lean_ctor_get(v_____x_1213_, 0);
lean_inc(v_fst_1214_);
v_snd_1215_ = lean_ctor_get(v_____x_1213_, 1);
lean_inc(v_snd_1215_);
lean_dec_ref(v_____x_1213_);
v___f_1216_ = lean_alloc_closure((void*)(l_Lean_MonadStateCacheT_instMonadControl___redArg___lam__0), 3, 1);
lean_closure_set(v___f_1216_, 0, v_fst_1214_);
v___x_1217_ = lean_apply_1(v_f_1210_, v___f_1216_);
v___f_1218_ = lean_alloc_closure((void*)(l_Lean_MonadStateCacheT_instMonadControl___redArg___lam__1), 3, 2);
lean_closure_set(v___f_1218_, 0, v_snd_1215_);
lean_closure_set(v___f_1218_, 1, v_toPure_1211_);
v___x_1219_ = lean_apply_4(v_toBind_1212_, lean_box(0), lean_box(0), v___x_1217_, v___f_1218_);
return v___x_1219_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadControl___redArg___lam__3(lean_object* v_inst_1220_, lean_object* v_00_u03b1_1221_, lean_object* v_f_1222_, lean_object* v___y_1223_){
_start:
{
lean_object* v_toApplicative_1224_; lean_object* v_toBind_1225_; lean_object* v___x_1227_; uint8_t v_isShared_1228_; uint8_t v_isSharedCheck_1236_; 
v_toApplicative_1224_ = lean_ctor_get(v_inst_1220_, 0);
v_toBind_1225_ = lean_ctor_get(v_inst_1220_, 1);
v_isSharedCheck_1236_ = !lean_is_exclusive(v_inst_1220_);
if (v_isSharedCheck_1236_ == 0)
{
v___x_1227_ = v_inst_1220_;
v_isShared_1228_ = v_isSharedCheck_1236_;
goto v_resetjp_1226_;
}
else
{
lean_inc(v_toBind_1225_);
lean_inc(v_toApplicative_1224_);
lean_dec(v_inst_1220_);
v___x_1227_ = lean_box(0);
v_isShared_1228_ = v_isSharedCheck_1236_;
goto v_resetjp_1226_;
}
v_resetjp_1226_:
{
lean_object* v_toPure_1229_; lean_object* v___f_1230_; lean_object* v___x_1232_; 
v_toPure_1229_ = lean_ctor_get(v_toApplicative_1224_, 1);
lean_inc_n(v_toPure_1229_, 2);
lean_dec_ref(v_toApplicative_1224_);
lean_inc(v_toBind_1225_);
v___f_1230_ = lean_alloc_closure((void*)(l_Lean_MonadStateCacheT_instMonadControl___redArg___lam__2), 4, 3);
lean_closure_set(v___f_1230_, 0, v_f_1222_);
lean_closure_set(v___f_1230_, 1, v_toPure_1229_);
lean_closure_set(v___f_1230_, 2, v_toBind_1225_);
lean_inc_ref(v___y_1223_);
if (v_isShared_1228_ == 0)
{
lean_ctor_set(v___x_1227_, 1, v___y_1223_);
lean_ctor_set(v___x_1227_, 0, v___y_1223_);
v___x_1232_ = v___x_1227_;
goto v_reusejp_1231_;
}
else
{
lean_object* v_reuseFailAlloc_1235_; 
v_reuseFailAlloc_1235_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1235_, 0, v___y_1223_);
lean_ctor_set(v_reuseFailAlloc_1235_, 1, v___y_1223_);
v___x_1232_ = v_reuseFailAlloc_1235_;
goto v_reusejp_1231_;
}
v_reusejp_1231_:
{
lean_object* v___x_1233_; lean_object* v___x_1234_; 
v___x_1233_ = lean_apply_2(v_toPure_1229_, lean_box(0), v___x_1232_);
v___x_1234_ = lean_apply_4(v_toBind_1225_, lean_box(0), lean_box(0), v___x_1233_, v___f_1230_);
return v___x_1234_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadControl___redArg___lam__4(lean_object* v_fst_1237_, lean_object* v_toPure_1238_, lean_object* v_____x_1239_){
_start:
{
lean_object* v_snd_1240_; lean_object* v___x_1242_; uint8_t v_isShared_1243_; uint8_t v_isSharedCheck_1248_; 
v_snd_1240_ = lean_ctor_get(v_____x_1239_, 1);
v_isSharedCheck_1248_ = !lean_is_exclusive(v_____x_1239_);
if (v_isSharedCheck_1248_ == 0)
{
lean_object* v_unused_1249_; 
v_unused_1249_ = lean_ctor_get(v_____x_1239_, 0);
lean_dec(v_unused_1249_);
v___x_1242_ = v_____x_1239_;
v_isShared_1243_ = v_isSharedCheck_1248_;
goto v_resetjp_1241_;
}
else
{
lean_inc(v_snd_1240_);
lean_dec(v_____x_1239_);
v___x_1242_ = lean_box(0);
v_isShared_1243_ = v_isSharedCheck_1248_;
goto v_resetjp_1241_;
}
v_resetjp_1241_:
{
lean_object* v___x_1245_; 
if (v_isShared_1243_ == 0)
{
lean_ctor_set(v___x_1242_, 0, v_fst_1237_);
v___x_1245_ = v___x_1242_;
goto v_reusejp_1244_;
}
else
{
lean_object* v_reuseFailAlloc_1247_; 
v_reuseFailAlloc_1247_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1247_, 0, v_fst_1237_);
lean_ctor_set(v_reuseFailAlloc_1247_, 1, v_snd_1240_);
v___x_1245_ = v_reuseFailAlloc_1247_;
goto v_reusejp_1244_;
}
v_reusejp_1244_:
{
lean_object* v___x_1246_; 
v___x_1246_ = lean_apply_2(v_toPure_1238_, lean_box(0), v___x_1245_);
return v___x_1246_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadControl___redArg___lam__5(lean_object* v_inst_1250_, lean_object* v_____x_1251_){
_start:
{
lean_object* v_fst_1252_; lean_object* v_toApplicative_1253_; lean_object* v_fst_1254_; lean_object* v_snd_1255_; lean_object* v___x_1257_; uint8_t v_isShared_1258_; uint8_t v_isSharedCheck_1268_; 
v_fst_1252_ = lean_ctor_get(v_____x_1251_, 0);
lean_inc(v_fst_1252_);
lean_dec_ref(v_____x_1251_);
v_toApplicative_1253_ = lean_ctor_get(v_inst_1250_, 0);
lean_inc_ref(v_toApplicative_1253_);
v_fst_1254_ = lean_ctor_get(v_fst_1252_, 0);
v_snd_1255_ = lean_ctor_get(v_fst_1252_, 1);
v_isSharedCheck_1268_ = !lean_is_exclusive(v_fst_1252_);
if (v_isSharedCheck_1268_ == 0)
{
v___x_1257_ = v_fst_1252_;
v_isShared_1258_ = v_isSharedCheck_1268_;
goto v_resetjp_1256_;
}
else
{
lean_inc(v_snd_1255_);
lean_inc(v_fst_1254_);
lean_dec(v_fst_1252_);
v___x_1257_ = lean_box(0);
v_isShared_1258_ = v_isSharedCheck_1268_;
goto v_resetjp_1256_;
}
v_resetjp_1256_:
{
lean_object* v_toBind_1259_; lean_object* v_toPure_1260_; lean_object* v___f_1261_; lean_object* v___x_1262_; lean_object* v___x_1264_; 
v_toBind_1259_ = lean_ctor_get(v_inst_1250_, 1);
lean_inc(v_toBind_1259_);
lean_dec_ref(v_inst_1250_);
v_toPure_1260_ = lean_ctor_get(v_toApplicative_1253_, 1);
lean_inc_n(v_toPure_1260_, 2);
lean_dec_ref(v_toApplicative_1253_);
v___f_1261_ = lean_alloc_closure((void*)(l_Lean_MonadStateCacheT_instMonadControl___redArg___lam__4), 3, 2);
lean_closure_set(v___f_1261_, 0, v_fst_1254_);
lean_closure_set(v___f_1261_, 1, v_toPure_1260_);
v___x_1262_ = lean_box(0);
if (v_isShared_1258_ == 0)
{
lean_ctor_set(v___x_1257_, 0, v___x_1262_);
v___x_1264_ = v___x_1257_;
goto v_reusejp_1263_;
}
else
{
lean_object* v_reuseFailAlloc_1267_; 
v_reuseFailAlloc_1267_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1267_, 0, v___x_1262_);
lean_ctor_set(v_reuseFailAlloc_1267_, 1, v_snd_1255_);
v___x_1264_ = v_reuseFailAlloc_1267_;
goto v_reusejp_1263_;
}
v_reusejp_1263_:
{
lean_object* v___x_1265_; lean_object* v___x_1266_; 
v___x_1265_ = lean_apply_2(v_toPure_1260_, lean_box(0), v___x_1264_);
v___x_1266_ = lean_apply_4(v_toBind_1259_, lean_box(0), lean_box(0), v___x_1265_, v___f_1261_);
return v___x_1266_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadControl___redArg___lam__6(lean_object* v___y_1269_, lean_object* v_toPure_1270_, lean_object* v_a_1271_){
_start:
{
lean_object* v___x_1272_; lean_object* v___x_1273_; 
v___x_1272_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1272_, 0, v_a_1271_);
lean_ctor_set(v___x_1272_, 1, v___y_1269_);
v___x_1273_ = lean_apply_2(v_toPure_1270_, lean_box(0), v___x_1272_);
return v___x_1273_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadControl___redArg___lam__7(lean_object* v_inst_1274_, lean_object* v___f_1275_, lean_object* v_00_u03b1_1276_, lean_object* v_x_1277_, lean_object* v___y_1278_){
_start:
{
lean_object* v_toApplicative_1279_; lean_object* v_toBind_1280_; lean_object* v_toPure_1281_; lean_object* v___f_1282_; lean_object* v___x_1283_; lean_object* v___x_1284_; 
v_toApplicative_1279_ = lean_ctor_get(v_inst_1274_, 0);
lean_inc_ref(v_toApplicative_1279_);
v_toBind_1280_ = lean_ctor_get(v_inst_1274_, 1);
lean_inc_n(v_toBind_1280_, 2);
lean_dec_ref(v_inst_1274_);
v_toPure_1281_ = lean_ctor_get(v_toApplicative_1279_, 1);
lean_inc(v_toPure_1281_);
lean_dec_ref(v_toApplicative_1279_);
v___f_1282_ = lean_alloc_closure((void*)(l_Lean_MonadStateCacheT_instMonadControl___redArg___lam__6), 3, 2);
lean_closure_set(v___f_1282_, 0, v___y_1278_);
lean_closure_set(v___f_1282_, 1, v_toPure_1281_);
v___x_1283_ = lean_apply_4(v_toBind_1280_, lean_box(0), lean_box(0), v_x_1277_, v___f_1282_);
v___x_1284_ = lean_apply_4(v_toBind_1280_, lean_box(0), lean_box(0), v___x_1283_, v___f_1275_);
return v___x_1284_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadControl___redArg(lean_object* v_inst_1285_){
_start:
{
lean_object* v___f_1286_; lean_object* v___f_1287_; lean_object* v___f_1288_; lean_object* v___x_1289_; 
lean_inc_ref_n(v_inst_1285_, 2);
v___f_1286_ = lean_alloc_closure((void*)(l_Lean_MonadStateCacheT_instMonadControl___redArg___lam__3), 4, 1);
lean_closure_set(v___f_1286_, 0, v_inst_1285_);
v___f_1287_ = lean_alloc_closure((void*)(l_Lean_MonadStateCacheT_instMonadControl___redArg___lam__5), 2, 1);
lean_closure_set(v___f_1287_, 0, v_inst_1285_);
v___f_1288_ = lean_alloc_closure((void*)(l_Lean_MonadStateCacheT_instMonadControl___redArg___lam__7), 5, 2);
lean_closure_set(v___f_1288_, 0, v_inst_1285_);
lean_closure_set(v___f_1288_, 1, v___f_1287_);
v___x_1289_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1289_, 0, v___f_1286_);
lean_ctor_set(v___x_1289_, 1, v___f_1288_);
return v___x_1289_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadControl(lean_object* v_00_u03b1_1290_, lean_object* v_00_u03b2_1291_, lean_object* v_m_1292_, lean_object* v_inst_1293_, lean_object* v_inst_1294_, lean_object* v_inst_1295_){
_start:
{
lean_object* v___x_1296_; 
v___x_1296_ = l_Lean_MonadStateCacheT_instMonadControl___redArg(v_inst_1295_);
return v___x_1296_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadControl___boxed(lean_object* v_00_u03b1_1297_, lean_object* v_00_u03b2_1298_, lean_object* v_m_1299_, lean_object* v_inst_1300_, lean_object* v_inst_1301_, lean_object* v_inst_1302_){
_start:
{
lean_object* v_res_1303_; 
v_res_1303_ = l_Lean_MonadStateCacheT_instMonadControl(v_00_u03b1_1297_, v_00_u03b2_1298_, v_m_1299_, v_inst_1300_, v_inst_1301_, v_inst_1302_);
lean_dec_ref(v_inst_1301_);
lean_dec_ref(v_inst_1300_);
return v_res_1303_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadFinally___redArg___lam__0(lean_object* v_h_1304_, lean_object* v___y_1305_, lean_object* v_x_1306_){
_start:
{
if (lean_obj_tag(v_x_1306_) == 0)
{
lean_object* v___x_1307_; lean_object* v___x_1308_; 
v___x_1307_ = lean_box(0);
v___x_1308_ = lean_apply_2(v_h_1304_, v___x_1307_, v___y_1305_);
return v___x_1308_;
}
else
{
lean_object* v_val_1309_; lean_object* v___x_1311_; uint8_t v_isShared_1312_; uint8_t v_isSharedCheck_1319_; 
lean_dec_ref(v___y_1305_);
v_val_1309_ = lean_ctor_get(v_x_1306_, 0);
v_isSharedCheck_1319_ = !lean_is_exclusive(v_x_1306_);
if (v_isSharedCheck_1319_ == 0)
{
v___x_1311_ = v_x_1306_;
v_isShared_1312_ = v_isSharedCheck_1319_;
goto v_resetjp_1310_;
}
else
{
lean_inc(v_val_1309_);
lean_dec(v_x_1306_);
v___x_1311_ = lean_box(0);
v_isShared_1312_ = v_isSharedCheck_1319_;
goto v_resetjp_1310_;
}
v_resetjp_1310_:
{
lean_object* v_fst_1313_; lean_object* v_snd_1314_; lean_object* v___x_1316_; 
v_fst_1313_ = lean_ctor_get(v_val_1309_, 0);
lean_inc(v_fst_1313_);
v_snd_1314_ = lean_ctor_get(v_val_1309_, 1);
lean_inc(v_snd_1314_);
lean_dec(v_val_1309_);
if (v_isShared_1312_ == 0)
{
lean_ctor_set(v___x_1311_, 0, v_fst_1313_);
v___x_1316_ = v___x_1311_;
goto v_reusejp_1315_;
}
else
{
lean_object* v_reuseFailAlloc_1318_; 
v_reuseFailAlloc_1318_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1318_, 0, v_fst_1313_);
v___x_1316_ = v_reuseFailAlloc_1318_;
goto v_reusejp_1315_;
}
v_reusejp_1315_:
{
lean_object* v___x_1317_; 
v___x_1317_ = lean_apply_2(v_h_1304_, v___x_1316_, v_snd_1314_);
return v___x_1317_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadFinally___redArg___lam__1(lean_object* v_toPure_1320_, lean_object* v_____x_1321_){
_start:
{
lean_object* v_fst_1322_; lean_object* v_snd_1323_; lean_object* v_fst_1324_; lean_object* v___x_1326_; uint8_t v_isShared_1327_; uint8_t v_isSharedCheck_1341_; 
v_fst_1322_ = lean_ctor_get(v_____x_1321_, 0);
lean_inc(v_fst_1322_);
v_snd_1323_ = lean_ctor_get(v_____x_1321_, 1);
lean_inc(v_snd_1323_);
lean_dec_ref(v_____x_1321_);
v_fst_1324_ = lean_ctor_get(v_fst_1322_, 0);
v_isSharedCheck_1341_ = !lean_is_exclusive(v_fst_1322_);
if (v_isSharedCheck_1341_ == 0)
{
lean_object* v_unused_1342_; 
v_unused_1342_ = lean_ctor_get(v_fst_1322_, 1);
lean_dec(v_unused_1342_);
v___x_1326_ = v_fst_1322_;
v_isShared_1327_ = v_isSharedCheck_1341_;
goto v_resetjp_1325_;
}
else
{
lean_inc(v_fst_1324_);
lean_dec(v_fst_1322_);
v___x_1326_ = lean_box(0);
v_isShared_1327_ = v_isSharedCheck_1341_;
goto v_resetjp_1325_;
}
v_resetjp_1325_:
{
lean_object* v_fst_1328_; lean_object* v_snd_1329_; lean_object* v___x_1331_; uint8_t v_isShared_1332_; uint8_t v_isSharedCheck_1340_; 
v_fst_1328_ = lean_ctor_get(v_snd_1323_, 0);
v_snd_1329_ = lean_ctor_get(v_snd_1323_, 1);
v_isSharedCheck_1340_ = !lean_is_exclusive(v_snd_1323_);
if (v_isSharedCheck_1340_ == 0)
{
v___x_1331_ = v_snd_1323_;
v_isShared_1332_ = v_isSharedCheck_1340_;
goto v_resetjp_1330_;
}
else
{
lean_inc(v_snd_1329_);
lean_inc(v_fst_1328_);
lean_dec(v_snd_1323_);
v___x_1331_ = lean_box(0);
v_isShared_1332_ = v_isSharedCheck_1340_;
goto v_resetjp_1330_;
}
v_resetjp_1330_:
{
lean_object* v___x_1334_; 
if (v_isShared_1332_ == 0)
{
lean_ctor_set(v___x_1331_, 1, v_fst_1328_);
lean_ctor_set(v___x_1331_, 0, v_fst_1324_);
v___x_1334_ = v___x_1331_;
goto v_reusejp_1333_;
}
else
{
lean_object* v_reuseFailAlloc_1339_; 
v_reuseFailAlloc_1339_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1339_, 0, v_fst_1324_);
lean_ctor_set(v_reuseFailAlloc_1339_, 1, v_fst_1328_);
v___x_1334_ = v_reuseFailAlloc_1339_;
goto v_reusejp_1333_;
}
v_reusejp_1333_:
{
lean_object* v___x_1336_; 
if (v_isShared_1327_ == 0)
{
lean_ctor_set(v___x_1326_, 1, v_snd_1329_);
lean_ctor_set(v___x_1326_, 0, v___x_1334_);
v___x_1336_ = v___x_1326_;
goto v_reusejp_1335_;
}
else
{
lean_object* v_reuseFailAlloc_1338_; 
v_reuseFailAlloc_1338_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1338_, 0, v___x_1334_);
lean_ctor_set(v_reuseFailAlloc_1338_, 1, v_snd_1329_);
v___x_1336_ = v_reuseFailAlloc_1338_;
goto v_reusejp_1335_;
}
v_reusejp_1335_:
{
lean_object* v___x_1337_; 
v___x_1337_ = lean_apply_2(v_toPure_1320_, lean_box(0), v___x_1336_);
return v___x_1337_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadFinally___redArg___lam__2(lean_object* v_inst_1343_, lean_object* v_inst_1344_, lean_object* v_00_u03b1_1345_, lean_object* v_00_u03b2_1346_, lean_object* v_x_1347_, lean_object* v_h_1348_, lean_object* v___y_1349_){
_start:
{
lean_object* v_toApplicative_1350_; lean_object* v_toBind_1351_; lean_object* v_toPure_1352_; lean_object* v___f_1353_; lean_object* v___f_1354_; lean_object* v___x_1355_; lean_object* v___x_1356_; lean_object* v___x_1357_; 
v_toApplicative_1350_ = lean_ctor_get(v_inst_1343_, 0);
lean_inc_ref(v_toApplicative_1350_);
v_toBind_1351_ = lean_ctor_get(v_inst_1343_, 1);
lean_inc(v_toBind_1351_);
lean_dec_ref(v_inst_1343_);
v_toPure_1352_ = lean_ctor_get(v_toApplicative_1350_, 1);
lean_inc(v_toPure_1352_);
lean_dec_ref(v_toApplicative_1350_);
lean_inc_ref(v___y_1349_);
v___f_1353_ = lean_alloc_closure((void*)(l_Lean_MonadStateCacheT_instMonadFinally___redArg___lam__0), 3, 2);
lean_closure_set(v___f_1353_, 0, v_h_1348_);
lean_closure_set(v___f_1353_, 1, v___y_1349_);
v___f_1354_ = lean_alloc_closure((void*)(l_Lean_MonadStateCacheT_instMonadFinally___redArg___lam__1), 2, 1);
lean_closure_set(v___f_1354_, 0, v_toPure_1352_);
v___x_1355_ = lean_apply_1(v_x_1347_, v___y_1349_);
v___x_1356_ = lean_apply_4(v_inst_1344_, lean_box(0), lean_box(0), v___x_1355_, v___f_1353_);
v___x_1357_ = lean_apply_4(v_toBind_1351_, lean_box(0), lean_box(0), v___x_1356_, v___f_1354_);
return v___x_1357_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadFinally___redArg(lean_object* v_inst_1358_, lean_object* v_inst_1359_){
_start:
{
lean_object* v___f_1360_; 
v___f_1360_ = lean_alloc_closure((void*)(l_Lean_MonadStateCacheT_instMonadFinally___redArg___lam__2), 7, 2);
lean_closure_set(v___f_1360_, 0, v_inst_1358_);
lean_closure_set(v___f_1360_, 1, v_inst_1359_);
return v___f_1360_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadFinally(lean_object* v_00_u03b1_1361_, lean_object* v_00_u03b2_1362_, lean_object* v_m_1363_, lean_object* v_inst_1364_, lean_object* v_inst_1365_, lean_object* v_inst_1366_, lean_object* v_inst_1367_){
_start:
{
lean_object* v___f_1368_; 
v___f_1368_ = lean_alloc_closure((void*)(l_Lean_MonadStateCacheT_instMonadFinally___redArg___lam__2), 7, 2);
lean_closure_set(v___f_1368_, 0, v_inst_1366_);
lean_closure_set(v___f_1368_, 1, v_inst_1367_);
return v___f_1368_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadFinally___boxed(lean_object* v_00_u03b1_1369_, lean_object* v_00_u03b2_1370_, lean_object* v_m_1371_, lean_object* v_inst_1372_, lean_object* v_inst_1373_, lean_object* v_inst_1374_, lean_object* v_inst_1375_){
_start:
{
lean_object* v_res_1376_; 
v_res_1376_ = l_Lean_MonadStateCacheT_instMonadFinally(v_00_u03b1_1369_, v_00_u03b2_1370_, v_m_1371_, v_inst_1372_, v_inst_1373_, v_inst_1374_, v_inst_1375_);
lean_dec_ref(v_inst_1373_);
lean_dec_ref(v_inst_1372_);
return v_res_1376_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadRef___redArg___lam__0(lean_object* v_ref_1377_, lean_object* v_x_1378_, lean_object* v_withRef_1379_, lean_object* v_____x_1380_){
_start:
{
lean_object* v_fst_1381_; lean_object* v_snd_1382_; lean_object* v_ref_1383_; lean_object* v___x_1384_; lean_object* v___x_1385_; 
v_fst_1381_ = lean_ctor_get(v_____x_1380_, 0);
lean_inc(v_fst_1381_);
v_snd_1382_ = lean_ctor_get(v_____x_1380_, 1);
lean_inc(v_snd_1382_);
lean_dec_ref(v_____x_1380_);
v_ref_1383_ = l_Lean_replaceRef(v_ref_1377_, v_fst_1381_);
lean_dec(v_fst_1381_);
v___x_1384_ = lean_apply_1(v_x_1378_, v_snd_1382_);
v___x_1385_ = lean_apply_3(v_withRef_1379_, lean_box(0), v_ref_1383_, v___x_1384_);
return v___x_1385_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadRef___redArg___lam__0___boxed(lean_object* v_ref_1386_, lean_object* v_x_1387_, lean_object* v_withRef_1388_, lean_object* v_____x_1389_){
_start:
{
lean_object* v_res_1390_; 
v_res_1390_ = l_Lean_MonadStateCacheT_instMonadRef___redArg___lam__0(v_ref_1386_, v_x_1387_, v_withRef_1388_, v_____x_1389_);
lean_dec(v_ref_1386_);
return v_res_1390_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadRef___redArg___lam__1(lean_object* v___y_1391_, lean_object* v_toPure_1392_, lean_object* v_a_1393_){
_start:
{
lean_object* v___x_1394_; lean_object* v___x_1395_; 
v___x_1394_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1394_, 0, v_a_1393_);
lean_ctor_set(v___x_1394_, 1, v___y_1391_);
v___x_1395_ = lean_apply_2(v_toPure_1392_, lean_box(0), v___x_1394_);
return v___x_1395_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadRef___redArg___lam__2(lean_object* v_inst_1396_, lean_object* v_withRef_1397_, lean_object* v_getRef_1398_, lean_object* v_00_u03b1_1399_, lean_object* v_ref_1400_, lean_object* v_x_1401_, lean_object* v___y_1402_){
_start:
{
lean_object* v_toApplicative_1403_; lean_object* v_toBind_1404_; lean_object* v_toPure_1405_; lean_object* v___f_1406_; lean_object* v___f_1407_; lean_object* v___x_1408_; lean_object* v___x_1409_; 
v_toApplicative_1403_ = lean_ctor_get(v_inst_1396_, 0);
lean_inc_ref(v_toApplicative_1403_);
v_toBind_1404_ = lean_ctor_get(v_inst_1396_, 1);
lean_inc_n(v_toBind_1404_, 2);
lean_dec_ref(v_inst_1396_);
v_toPure_1405_ = lean_ctor_get(v_toApplicative_1403_, 1);
lean_inc(v_toPure_1405_);
lean_dec_ref(v_toApplicative_1403_);
v___f_1406_ = lean_alloc_closure((void*)(l_Lean_MonadStateCacheT_instMonadRef___redArg___lam__0___boxed), 4, 3);
lean_closure_set(v___f_1406_, 0, v_ref_1400_);
lean_closure_set(v___f_1406_, 1, v_x_1401_);
lean_closure_set(v___f_1406_, 2, v_withRef_1397_);
v___f_1407_ = lean_alloc_closure((void*)(l_Lean_MonadStateCacheT_instMonadRef___redArg___lam__1), 3, 2);
lean_closure_set(v___f_1407_, 0, v___y_1402_);
lean_closure_set(v___f_1407_, 1, v_toPure_1405_);
v___x_1408_ = lean_apply_4(v_toBind_1404_, lean_box(0), lean_box(0), v_getRef_1398_, v___f_1407_);
v___x_1409_ = lean_apply_4(v_toBind_1404_, lean_box(0), lean_box(0), v___x_1408_, v___f_1406_);
return v___x_1409_;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadRef___redArg(lean_object* v_inst_1410_, lean_object* v_inst_1411_, lean_object* v_inst_1412_, lean_object* v_inst_1413_){
_start:
{
lean_object* v_getRef_1414_; lean_object* v_withRef_1415_; lean_object* v___x_1417_; uint8_t v_isShared_1418_; uint8_t v_isSharedCheck_1425_; 
v_getRef_1414_ = lean_ctor_get(v_inst_1413_, 0);
v_withRef_1415_ = lean_ctor_get(v_inst_1413_, 1);
v_isSharedCheck_1425_ = !lean_is_exclusive(v_inst_1413_);
if (v_isSharedCheck_1425_ == 0)
{
v___x_1417_ = v_inst_1413_;
v_isShared_1418_ = v_isSharedCheck_1425_;
goto v_resetjp_1416_;
}
else
{
lean_inc(v_withRef_1415_);
lean_inc(v_getRef_1414_);
lean_dec(v_inst_1413_);
v___x_1417_ = lean_box(0);
v_isShared_1418_ = v_isSharedCheck_1425_;
goto v_resetjp_1416_;
}
v_resetjp_1416_:
{
lean_object* v___f_1419_; lean_object* v___x_1420_; lean_object* v___x_1421_; lean_object* v___x_1423_; 
lean_inc(v_getRef_1414_);
lean_inc_ref(v_inst_1412_);
v___f_1419_ = lean_alloc_closure((void*)(l_Lean_MonadStateCacheT_instMonadRef___redArg___lam__2), 7, 3);
lean_closure_set(v___f_1419_, 0, v_inst_1412_);
lean_closure_set(v___f_1419_, 1, v_withRef_1415_);
lean_closure_set(v___f_1419_, 2, v_getRef_1414_);
v___x_1420_ = lean_alloc_closure((void*)(l_StateT_lift), 6, 5);
lean_closure_set(v___x_1420_, 0, lean_box(0));
lean_closure_set(v___x_1420_, 1, lean_box(0));
lean_closure_set(v___x_1420_, 2, v_inst_1412_);
lean_closure_set(v___x_1420_, 3, lean_box(0));
lean_closure_set(v___x_1420_, 4, v_getRef_1414_);
v___x_1421_ = lean_alloc_closure((void*)(l_Lean_MonadStateCacheT_mk___boxed), 8, 7);
lean_closure_set(v___x_1421_, 0, lean_box(0));
lean_closure_set(v___x_1421_, 1, lean_box(0));
lean_closure_set(v___x_1421_, 2, lean_box(0));
lean_closure_set(v___x_1421_, 3, v_inst_1410_);
lean_closure_set(v___x_1421_, 4, v_inst_1411_);
lean_closure_set(v___x_1421_, 5, lean_box(0));
lean_closure_set(v___x_1421_, 6, v___x_1420_);
if (v_isShared_1418_ == 0)
{
lean_ctor_set(v___x_1417_, 1, v___f_1419_);
lean_ctor_set(v___x_1417_, 0, v___x_1421_);
v___x_1423_ = v___x_1417_;
goto v_reusejp_1422_;
}
else
{
lean_object* v_reuseFailAlloc_1424_; 
v_reuseFailAlloc_1424_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1424_, 0, v___x_1421_);
lean_ctor_set(v_reuseFailAlloc_1424_, 1, v___f_1419_);
v___x_1423_ = v_reuseFailAlloc_1424_;
goto v_reusejp_1422_;
}
v_reusejp_1422_:
{
return v___x_1423_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MonadStateCacheT_instMonadRef(lean_object* v_00_u03b1_1426_, lean_object* v_00_u03b2_1427_, lean_object* v_m_1428_, lean_object* v_inst_1429_, lean_object* v_inst_1430_, lean_object* v_inst_1431_, lean_object* v_inst_1432_){
_start:
{
lean_object* v___x_1433_; 
v___x_1433_ = l_Lean_MonadStateCacheT_instMonadRef___redArg(v_inst_1429_, v_inst_1430_, v_inst_1431_, v_inst_1432_);
return v___x_1433_;
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
