// Lean compiler output
// Module: Init.Control.Except
// Imports: public import Init.Control.Basic public import Init.Control.Id
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
LEAN_EXPORT lean_object* l_Except_pure___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Except_pure(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Except_map___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Except_map(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Control_Except_0__Except_map_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Control_Except_0__Except_map_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Except_mapError___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Except_mapError(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Except_bind___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Except_bind(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Except_toBool___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Except_toBool___redArg___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Except_toBool(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Except_toBool___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Except_isOk___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Except_isOk___redArg___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Except_isOk(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Except_isOk___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Except_toOption___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Except_toOption(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Except_tryCatch___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Except_tryCatch(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Except_orElseLazy___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Except_orElseLazy___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Except_orElseLazy(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Except_orElseLazy___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Except_instMonad___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Except_instMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Except_instMonad___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Except_instMonad___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Except_instMonad___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Except_instMonad___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Except_instMonad___redArg___lam__0, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Except_instMonad___redArg___closed__0 = (const lean_object*)&l_Except_instMonad___redArg___closed__0_value;
static const lean_closure_object l_Except_instMonad___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Except_instMonad___redArg___lam__1, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Except_instMonad___redArg___closed__1 = (const lean_object*)&l_Except_instMonad___redArg___closed__1_value;
static const lean_closure_object l_Except_instMonad___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Except_instMonad___redArg___lam__2___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Except_instMonad___redArg___closed__2 = (const lean_object*)&l_Except_instMonad___redArg___closed__2_value;
static const lean_closure_object l_Except_instMonad___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Except_instMonad___redArg___lam__3, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Except_instMonad___redArg___closed__3 = (const lean_object*)&l_Except_instMonad___redArg___closed__3_value;
static const lean_closure_object l_Except_instMonad___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Except_map, .m_arity = 5, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Except_instMonad___redArg___closed__4 = (const lean_object*)&l_Except_instMonad___redArg___closed__4_value;
static const lean_ctor_object l_Except_instMonad___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Except_instMonad___redArg___closed__4_value),((lean_object*)&l_Except_instMonad___redArg___closed__0_value)}};
static const lean_object* l_Except_instMonad___redArg___closed__5 = (const lean_object*)&l_Except_instMonad___redArg___closed__5_value;
static const lean_closure_object l_Except_instMonad___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Except_pure, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Except_instMonad___redArg___closed__6 = (const lean_object*)&l_Except_instMonad___redArg___closed__6_value;
static const lean_ctor_object l_Except_instMonad___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*5 + 0, .m_other = 5, .m_tag = 0}, .m_objs = {((lean_object*)&l_Except_instMonad___redArg___closed__5_value),((lean_object*)&l_Except_instMonad___redArg___closed__6_value),((lean_object*)&l_Except_instMonad___redArg___closed__1_value),((lean_object*)&l_Except_instMonad___redArg___closed__2_value),((lean_object*)&l_Except_instMonad___redArg___closed__3_value)}};
static const lean_object* l_Except_instMonad___redArg___closed__7 = (const lean_object*)&l_Except_instMonad___redArg___closed__7_value;
static const lean_closure_object l_Except_instMonad___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Except_bind, .m_arity = 5, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Except_instMonad___redArg___closed__8 = (const lean_object*)&l_Except_instMonad___redArg___closed__8_value;
static const lean_ctor_object l_Except_instMonad___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Except_instMonad___redArg___closed__7_value),((lean_object*)&l_Except_instMonad___redArg___closed__8_value)}};
static const lean_object* l_Except_instMonad___redArg___closed__9 = (const lean_object*)&l_Except_instMonad___redArg___closed__9_value;
LEAN_EXPORT lean_object* l_Except_instMonad___redArg();
LEAN_EXPORT lean_object* l_Except_instMonad___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Except_instMonad(lean_object*);
LEAN_EXPORT lean_object* l_ExceptT_mk___redArg(lean_object*);
LEAN_EXPORT lean_object* l_ExceptT_mk___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_ExceptT_mk(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ExceptT_mk___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ExceptT_run___redArg(lean_object*);
LEAN_EXPORT lean_object* l_ExceptT_run___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_ExceptT_run(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ExceptT_run___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ExceptT_runK___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ExceptT_runK___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ExceptT_runK(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ExceptT_runCatch___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ExceptT_runCatch___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ExceptT_runCatch(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ExceptT_pure___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ExceptT_pure(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ExceptT_bindCont___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ExceptT_bindCont(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ExceptT_bind___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ExceptT_bind(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ExceptT_map___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ExceptT_map___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ExceptT_map(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ExceptT_lift___redArg___lam__0(lean_object*);
static const lean_closure_object l_ExceptT_lift___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_ExceptT_lift___redArg___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_ExceptT_lift___redArg___closed__0 = (const lean_object*)&l_ExceptT_lift___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_ExceptT_lift___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ExceptT_lift(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ExceptT_instMonadLiftExcept___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ExceptT_instMonadLiftExcept___redArg(lean_object*);
LEAN_EXPORT lean_object* l_ExceptT_instMonadLiftExcept(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ExceptT_instMonadLift___redArg(lean_object*);
LEAN_EXPORT lean_object* l_ExceptT_instMonadLift(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ExceptT_tryCatch___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ExceptT_tryCatch___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ExceptT_tryCatch(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ExceptT_instMonadFunctor___redArg___lam__0(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_ExceptT_instMonadFunctor___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_ExceptT_instMonadFunctor___redArg___lam__0, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_ExceptT_instMonadFunctor___redArg___closed__0 = (const lean_object*)&l_ExceptT_instMonadFunctor___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_ExceptT_instMonadFunctor___redArg();
LEAN_EXPORT lean_object* l_ExceptT_instMonadFunctor___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_ExceptT_instMonadFunctor(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ExceptT_instMonad___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ExceptT_instMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ExceptT_instMonad___redArg___lam__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ExceptT_instMonad___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ExceptT_instMonad___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ExceptT_instMonad___redArg___lam__5(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ExceptT_instMonad___redArg___lam__5___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ExceptT_instMonad___redArg___lam__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ExceptT_instMonad___redArg___lam__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ExceptT_instMonad___redArg___lam__8(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ExceptT_instMonad___redArg___lam__8___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ExceptT_instMonad___redArg___lam__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ExceptT_instMonad___redArg(lean_object*);
LEAN_EXPORT lean_object* l_ExceptT_instMonad(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ExceptT_adapt___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ExceptT_adapt(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instMonadExceptOfExceptT___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instMonadExceptOfExceptT___redArg___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instMonadExceptOfExceptT___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instMonadExceptOfExceptT___redArg(lean_object*);
LEAN_EXPORT lean_object* l_instMonadExceptOfExceptT(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instMonadExceptOfExceptTOfMonad___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instMonadExceptOfExceptTOfMonad___redArg(lean_object*);
LEAN_EXPORT lean_object* l_instMonadExceptOfExceptTOfMonad(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instInhabitedExceptTOfMonad___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instInhabitedExceptTOfMonad(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instMonadExceptOfExcept___redArg___lam__0(lean_object*, lean_object*);
static const lean_closure_object l_instMonadExceptOfExcept___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadExceptOfExcept___redArg___lam__0, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_instMonadExceptOfExcept___redArg___closed__0 = (const lean_object*)&l_instMonadExceptOfExcept___redArg___closed__0_value;
static const lean_closure_object l_instMonadExceptOfExcept___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Except_tryCatch, .m_arity = 4, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_instMonadExceptOfExcept___redArg___closed__1 = (const lean_object*)&l_instMonadExceptOfExcept___redArg___closed__1_value;
static const lean_ctor_object l_instMonadExceptOfExcept___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_instMonadExceptOfExcept___redArg___closed__0_value),((lean_object*)&l_instMonadExceptOfExcept___redArg___closed__1_value)}};
static const lean_object* l_instMonadExceptOfExcept___redArg___closed__2 = (const lean_object*)&l_instMonadExceptOfExcept___redArg___closed__2_value;
LEAN_EXPORT lean_object* l_instMonadExceptOfExcept___redArg();
LEAN_EXPORT lean_object* l_instMonadExceptOfExcept___redArg___boxed(lean_object*);
static lean_once_cell_t l_instMonadExceptOfExcept___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_instMonadExceptOfExcept___closed__0;
LEAN_EXPORT lean_object* l_instMonadExceptOfExcept(lean_object*);
LEAN_EXPORT lean_object* l_MonadExcept_orelse_x27___redArg___lam__0(uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonadExcept_orelse_x27___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonadExcept_orelse_x27___redArg___lam__1(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonadExcept_orelse_x27___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonadExcept_orelse_x27___redArg(lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_MonadExcept_orelse_x27___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonadExcept_orelse_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_MonadExcept_orelse_x27___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_observing___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_observing___redArg___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_observing___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_observing(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_liftExcept___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_liftExcept(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instMonadControlExceptTOfMonad___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instMonadControlExceptTOfMonad___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instMonadControlExceptTOfMonad___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instMonadControlExceptTOfMonad___redArg___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instMonadControlExceptTOfMonad___redArg___lam__1___boxed(lean_object*, lean_object*);
static const lean_closure_object l_instMonadControlExceptTOfMonad___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadControlExceptTOfMonad___redArg___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_instMonadControlExceptTOfMonad___redArg___closed__0 = (const lean_object*)&l_instMonadControlExceptTOfMonad___redArg___closed__0_value;
static const lean_closure_object l_instMonadControlExceptTOfMonad___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadControlExceptTOfMonad___redArg___lam__1___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_instMonadControlExceptTOfMonad___redArg___closed__1 = (const lean_object*)&l_instMonadControlExceptTOfMonad___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_instMonadControlExceptTOfMonad___redArg(lean_object*);
LEAN_EXPORT lean_object* l_instMonadControlExceptTOfMonad(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_tryFinally___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_tryFinally___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_tryFinally___redArg___lam__1(lean_object*);
LEAN_EXPORT lean_object* l_tryFinally___redArg___lam__1___boxed(lean_object*);
static const lean_closure_object l_tryFinally___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_tryFinally___redArg___lam__1___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_tryFinally___redArg___closed__0 = (const lean_object*)&l_tryFinally___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_tryFinally___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_tryFinally(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Id_finally___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Id_finally___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_finally___lam__0, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Id_finally___closed__0 = (const lean_object*)&l_Id_finally___closed__0_value;
LEAN_EXPORT const lean_object* l_Id_finally = (const lean_object*)&l_Id_finally___closed__0_value;
LEAN_EXPORT lean_object* l_ExceptT_finally___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ExceptT_finally___redArg___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ExceptT_finally___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ExceptT_finally___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ExceptT_finally(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instMonadAttachExcept___redArg___lam__0(lean_object*, lean_object*);
static const lean_closure_object l_instMonadAttachExcept___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadAttachExcept___redArg___lam__0, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_instMonadAttachExcept___redArg___closed__0 = (const lean_object*)&l_instMonadAttachExcept___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_instMonadAttachExcept___redArg();
LEAN_EXPORT lean_object* l_instMonadAttachExcept___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_instMonadAttachExcept(lean_object*);
LEAN_EXPORT lean_object* l_instMonadAttachExceptTOfMonad___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_instMonadAttachExceptTOfMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_instMonadAttachExceptTOfMonad___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadAttachExceptTOfMonad___redArg___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_instMonadAttachExceptTOfMonad___redArg___closed__0 = (const lean_object*)&l_instMonadAttachExceptTOfMonad___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_instMonadAttachExceptTOfMonad___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instMonadAttachExceptTOfMonad(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Except_pure___redArg(lean_object* v_a_1_){
_start:
{
lean_object* v___x_2_; 
v___x_2_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2_, 0, v_a_1_);
return v___x_2_;
}
}
LEAN_EXPORT lean_object* l_Except_pure(lean_object* v_00_u03b5_3_, lean_object* v_00_u03b1_4_, lean_object* v_a_5_){
_start:
{
lean_object* v___x_6_; 
v___x_6_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_6_, 0, v_a_5_);
return v___x_6_;
}
}
LEAN_EXPORT lean_object* l_Except_map___redArg(lean_object* v_f_7_, lean_object* v_x_8_){
_start:
{
if (lean_obj_tag(v_x_8_) == 0)
{
lean_object* v_a_9_; lean_object* v___x_11_; uint8_t v_isShared_12_; uint8_t v_isSharedCheck_16_; 
lean_dec(v_f_7_);
v_a_9_ = lean_ctor_get(v_x_8_, 0);
v_isSharedCheck_16_ = !lean_is_exclusive(v_x_8_);
if (v_isSharedCheck_16_ == 0)
{
v___x_11_ = v_x_8_;
v_isShared_12_ = v_isSharedCheck_16_;
goto v_resetjp_10_;
}
else
{
lean_inc(v_a_9_);
lean_dec(v_x_8_);
v___x_11_ = lean_box(0);
v_isShared_12_ = v_isSharedCheck_16_;
goto v_resetjp_10_;
}
v_resetjp_10_:
{
lean_object* v___x_14_; 
if (v_isShared_12_ == 0)
{
v___x_14_ = v___x_11_;
goto v_reusejp_13_;
}
else
{
lean_object* v_reuseFailAlloc_15_; 
v_reuseFailAlloc_15_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_15_, 0, v_a_9_);
v___x_14_ = v_reuseFailAlloc_15_;
goto v_reusejp_13_;
}
v_reusejp_13_:
{
return v___x_14_;
}
}
}
else
{
lean_object* v_a_17_; lean_object* v___x_19_; uint8_t v_isShared_20_; uint8_t v_isSharedCheck_25_; 
v_a_17_ = lean_ctor_get(v_x_8_, 0);
v_isSharedCheck_25_ = !lean_is_exclusive(v_x_8_);
if (v_isSharedCheck_25_ == 0)
{
v___x_19_ = v_x_8_;
v_isShared_20_ = v_isSharedCheck_25_;
goto v_resetjp_18_;
}
else
{
lean_inc(v_a_17_);
lean_dec(v_x_8_);
v___x_19_ = lean_box(0);
v_isShared_20_ = v_isSharedCheck_25_;
goto v_resetjp_18_;
}
v_resetjp_18_:
{
lean_object* v___x_21_; lean_object* v___x_23_; 
v___x_21_ = lean_apply_1(v_f_7_, v_a_17_);
if (v_isShared_20_ == 0)
{
lean_ctor_set(v___x_19_, 0, v___x_21_);
v___x_23_ = v___x_19_;
goto v_reusejp_22_;
}
else
{
lean_object* v_reuseFailAlloc_24_; 
v_reuseFailAlloc_24_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_24_, 0, v___x_21_);
v___x_23_ = v_reuseFailAlloc_24_;
goto v_reusejp_22_;
}
v_reusejp_22_:
{
return v___x_23_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Except_map(lean_object* v_00_u03b5_26_, lean_object* v_00_u03b1_27_, lean_object* v_00_u03b2_28_, lean_object* v_f_29_, lean_object* v_x_30_){
_start:
{
if (lean_obj_tag(v_x_30_) == 0)
{
lean_object* v_a_31_; lean_object* v___x_33_; uint8_t v_isShared_34_; uint8_t v_isSharedCheck_38_; 
lean_dec(v_f_29_);
v_a_31_ = lean_ctor_get(v_x_30_, 0);
v_isSharedCheck_38_ = !lean_is_exclusive(v_x_30_);
if (v_isSharedCheck_38_ == 0)
{
v___x_33_ = v_x_30_;
v_isShared_34_ = v_isSharedCheck_38_;
goto v_resetjp_32_;
}
else
{
lean_inc(v_a_31_);
lean_dec(v_x_30_);
v___x_33_ = lean_box(0);
v_isShared_34_ = v_isSharedCheck_38_;
goto v_resetjp_32_;
}
v_resetjp_32_:
{
lean_object* v___x_36_; 
if (v_isShared_34_ == 0)
{
v___x_36_ = v___x_33_;
goto v_reusejp_35_;
}
else
{
lean_object* v_reuseFailAlloc_37_; 
v_reuseFailAlloc_37_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_37_, 0, v_a_31_);
v___x_36_ = v_reuseFailAlloc_37_;
goto v_reusejp_35_;
}
v_reusejp_35_:
{
return v___x_36_;
}
}
}
else
{
lean_object* v_a_39_; lean_object* v___x_41_; uint8_t v_isShared_42_; uint8_t v_isSharedCheck_47_; 
v_a_39_ = lean_ctor_get(v_x_30_, 0);
v_isSharedCheck_47_ = !lean_is_exclusive(v_x_30_);
if (v_isSharedCheck_47_ == 0)
{
v___x_41_ = v_x_30_;
v_isShared_42_ = v_isSharedCheck_47_;
goto v_resetjp_40_;
}
else
{
lean_inc(v_a_39_);
lean_dec(v_x_30_);
v___x_41_ = lean_box(0);
v_isShared_42_ = v_isSharedCheck_47_;
goto v_resetjp_40_;
}
v_resetjp_40_:
{
lean_object* v___x_43_; lean_object* v___x_45_; 
v___x_43_ = lean_apply_1(v_f_29_, v_a_39_);
if (v_isShared_42_ == 0)
{
lean_ctor_set(v___x_41_, 0, v___x_43_);
v___x_45_ = v___x_41_;
goto v_reusejp_44_;
}
else
{
lean_object* v_reuseFailAlloc_46_; 
v_reuseFailAlloc_46_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_46_, 0, v___x_43_);
v___x_45_ = v_reuseFailAlloc_46_;
goto v_reusejp_44_;
}
v_reusejp_44_:
{
return v___x_45_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Control_Except_0__Except_map_match__1_splitter___redArg(lean_object* v_x_48_, lean_object* v_h__1_49_, lean_object* v_h__2_50_){
_start:
{
if (lean_obj_tag(v_x_48_) == 0)
{
lean_object* v_a_51_; lean_object* v___x_52_; 
lean_dec(v_h__2_50_);
v_a_51_ = lean_ctor_get(v_x_48_, 0);
lean_inc(v_a_51_);
lean_dec_ref_known(v_x_48_, 1);
v___x_52_ = lean_apply_1(v_h__1_49_, v_a_51_);
return v___x_52_;
}
else
{
lean_object* v_a_53_; lean_object* v___x_54_; 
lean_dec(v_h__1_49_);
v_a_53_ = lean_ctor_get(v_x_48_, 0);
lean_inc(v_a_53_);
lean_dec_ref_known(v_x_48_, 1);
v___x_54_ = lean_apply_1(v_h__2_50_, v_a_53_);
return v___x_54_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Control_Except_0__Except_map_match__1_splitter(lean_object* v_00_u03b5_55_, lean_object* v_00_u03b1_56_, lean_object* v_motive_57_, lean_object* v_x_58_, lean_object* v_h__1_59_, lean_object* v_h__2_60_){
_start:
{
if (lean_obj_tag(v_x_58_) == 0)
{
lean_object* v_a_61_; lean_object* v___x_62_; 
lean_dec(v_h__2_60_);
v_a_61_ = lean_ctor_get(v_x_58_, 0);
lean_inc(v_a_61_);
lean_dec_ref_known(v_x_58_, 1);
v___x_62_ = lean_apply_1(v_h__1_59_, v_a_61_);
return v___x_62_;
}
else
{
lean_object* v_a_63_; lean_object* v___x_64_; 
lean_dec(v_h__1_59_);
v_a_63_ = lean_ctor_get(v_x_58_, 0);
lean_inc(v_a_63_);
lean_dec_ref_known(v_x_58_, 1);
v___x_64_ = lean_apply_1(v_h__2_60_, v_a_63_);
return v___x_64_;
}
}
}
LEAN_EXPORT lean_object* l_Except_mapError___redArg(lean_object* v_f_65_, lean_object* v_x_66_){
_start:
{
if (lean_obj_tag(v_x_66_) == 0)
{
lean_object* v_a_67_; lean_object* v___x_69_; uint8_t v_isShared_70_; uint8_t v_isSharedCheck_75_; 
v_a_67_ = lean_ctor_get(v_x_66_, 0);
v_isSharedCheck_75_ = !lean_is_exclusive(v_x_66_);
if (v_isSharedCheck_75_ == 0)
{
v___x_69_ = v_x_66_;
v_isShared_70_ = v_isSharedCheck_75_;
goto v_resetjp_68_;
}
else
{
lean_inc(v_a_67_);
lean_dec(v_x_66_);
v___x_69_ = lean_box(0);
v_isShared_70_ = v_isSharedCheck_75_;
goto v_resetjp_68_;
}
v_resetjp_68_:
{
lean_object* v___x_71_; lean_object* v___x_73_; 
v___x_71_ = lean_apply_1(v_f_65_, v_a_67_);
if (v_isShared_70_ == 0)
{
lean_ctor_set(v___x_69_, 0, v___x_71_);
v___x_73_ = v___x_69_;
goto v_reusejp_72_;
}
else
{
lean_object* v_reuseFailAlloc_74_; 
v_reuseFailAlloc_74_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_74_, 0, v___x_71_);
v___x_73_ = v_reuseFailAlloc_74_;
goto v_reusejp_72_;
}
v_reusejp_72_:
{
return v___x_73_;
}
}
}
else
{
lean_object* v_a_76_; lean_object* v___x_78_; uint8_t v_isShared_79_; uint8_t v_isSharedCheck_83_; 
lean_dec(v_f_65_);
v_a_76_ = lean_ctor_get(v_x_66_, 0);
v_isSharedCheck_83_ = !lean_is_exclusive(v_x_66_);
if (v_isSharedCheck_83_ == 0)
{
v___x_78_ = v_x_66_;
v_isShared_79_ = v_isSharedCheck_83_;
goto v_resetjp_77_;
}
else
{
lean_inc(v_a_76_);
lean_dec(v_x_66_);
v___x_78_ = lean_box(0);
v_isShared_79_ = v_isSharedCheck_83_;
goto v_resetjp_77_;
}
v_resetjp_77_:
{
lean_object* v___x_81_; 
if (v_isShared_79_ == 0)
{
v___x_81_ = v___x_78_;
goto v_reusejp_80_;
}
else
{
lean_object* v_reuseFailAlloc_82_; 
v_reuseFailAlloc_82_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_82_, 0, v_a_76_);
v___x_81_ = v_reuseFailAlloc_82_;
goto v_reusejp_80_;
}
v_reusejp_80_:
{
return v___x_81_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Except_mapError(lean_object* v_00_u03b5_84_, lean_object* v_00_u03b5_x27_85_, lean_object* v_00_u03b1_86_, lean_object* v_f_87_, lean_object* v_x_88_){
_start:
{
if (lean_obj_tag(v_x_88_) == 0)
{
lean_object* v_a_89_; lean_object* v___x_91_; uint8_t v_isShared_92_; uint8_t v_isSharedCheck_97_; 
v_a_89_ = lean_ctor_get(v_x_88_, 0);
v_isSharedCheck_97_ = !lean_is_exclusive(v_x_88_);
if (v_isSharedCheck_97_ == 0)
{
v___x_91_ = v_x_88_;
v_isShared_92_ = v_isSharedCheck_97_;
goto v_resetjp_90_;
}
else
{
lean_inc(v_a_89_);
lean_dec(v_x_88_);
v___x_91_ = lean_box(0);
v_isShared_92_ = v_isSharedCheck_97_;
goto v_resetjp_90_;
}
v_resetjp_90_:
{
lean_object* v___x_93_; lean_object* v___x_95_; 
v___x_93_ = lean_apply_1(v_f_87_, v_a_89_);
if (v_isShared_92_ == 0)
{
lean_ctor_set(v___x_91_, 0, v___x_93_);
v___x_95_ = v___x_91_;
goto v_reusejp_94_;
}
else
{
lean_object* v_reuseFailAlloc_96_; 
v_reuseFailAlloc_96_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_96_, 0, v___x_93_);
v___x_95_ = v_reuseFailAlloc_96_;
goto v_reusejp_94_;
}
v_reusejp_94_:
{
return v___x_95_;
}
}
}
else
{
lean_object* v_a_98_; lean_object* v___x_100_; uint8_t v_isShared_101_; uint8_t v_isSharedCheck_105_; 
lean_dec(v_f_87_);
v_a_98_ = lean_ctor_get(v_x_88_, 0);
v_isSharedCheck_105_ = !lean_is_exclusive(v_x_88_);
if (v_isSharedCheck_105_ == 0)
{
v___x_100_ = v_x_88_;
v_isShared_101_ = v_isSharedCheck_105_;
goto v_resetjp_99_;
}
else
{
lean_inc(v_a_98_);
lean_dec(v_x_88_);
v___x_100_ = lean_box(0);
v_isShared_101_ = v_isSharedCheck_105_;
goto v_resetjp_99_;
}
v_resetjp_99_:
{
lean_object* v___x_103_; 
if (v_isShared_101_ == 0)
{
v___x_103_ = v___x_100_;
goto v_reusejp_102_;
}
else
{
lean_object* v_reuseFailAlloc_104_; 
v_reuseFailAlloc_104_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_104_, 0, v_a_98_);
v___x_103_ = v_reuseFailAlloc_104_;
goto v_reusejp_102_;
}
v_reusejp_102_:
{
return v___x_103_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Except_bind___redArg(lean_object* v_ma_106_, lean_object* v_f_107_){
_start:
{
if (lean_obj_tag(v_ma_106_) == 0)
{
lean_object* v_a_108_; lean_object* v___x_110_; uint8_t v_isShared_111_; uint8_t v_isSharedCheck_115_; 
lean_dec_ref(v_f_107_);
v_a_108_ = lean_ctor_get(v_ma_106_, 0);
v_isSharedCheck_115_ = !lean_is_exclusive(v_ma_106_);
if (v_isSharedCheck_115_ == 0)
{
v___x_110_ = v_ma_106_;
v_isShared_111_ = v_isSharedCheck_115_;
goto v_resetjp_109_;
}
else
{
lean_inc(v_a_108_);
lean_dec(v_ma_106_);
v___x_110_ = lean_box(0);
v_isShared_111_ = v_isSharedCheck_115_;
goto v_resetjp_109_;
}
v_resetjp_109_:
{
lean_object* v___x_113_; 
if (v_isShared_111_ == 0)
{
v___x_113_ = v___x_110_;
goto v_reusejp_112_;
}
else
{
lean_object* v_reuseFailAlloc_114_; 
v_reuseFailAlloc_114_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_114_, 0, v_a_108_);
v___x_113_ = v_reuseFailAlloc_114_;
goto v_reusejp_112_;
}
v_reusejp_112_:
{
return v___x_113_;
}
}
}
else
{
lean_object* v_a_116_; lean_object* v___x_117_; 
v_a_116_ = lean_ctor_get(v_ma_106_, 0);
lean_inc(v_a_116_);
lean_dec_ref_known(v_ma_106_, 1);
v___x_117_ = lean_apply_1(v_f_107_, v_a_116_);
return v___x_117_;
}
}
}
LEAN_EXPORT lean_object* l_Except_bind(lean_object* v_00_u03b5_118_, lean_object* v_00_u03b1_119_, lean_object* v_00_u03b2_120_, lean_object* v_ma_121_, lean_object* v_f_122_){
_start:
{
if (lean_obj_tag(v_ma_121_) == 0)
{
lean_object* v_a_123_; lean_object* v___x_125_; uint8_t v_isShared_126_; uint8_t v_isSharedCheck_130_; 
lean_dec_ref(v_f_122_);
v_a_123_ = lean_ctor_get(v_ma_121_, 0);
v_isSharedCheck_130_ = !lean_is_exclusive(v_ma_121_);
if (v_isSharedCheck_130_ == 0)
{
v___x_125_ = v_ma_121_;
v_isShared_126_ = v_isSharedCheck_130_;
goto v_resetjp_124_;
}
else
{
lean_inc(v_a_123_);
lean_dec(v_ma_121_);
v___x_125_ = lean_box(0);
v_isShared_126_ = v_isSharedCheck_130_;
goto v_resetjp_124_;
}
v_resetjp_124_:
{
lean_object* v___x_128_; 
if (v_isShared_126_ == 0)
{
v___x_128_ = v___x_125_;
goto v_reusejp_127_;
}
else
{
lean_object* v_reuseFailAlloc_129_; 
v_reuseFailAlloc_129_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_129_, 0, v_a_123_);
v___x_128_ = v_reuseFailAlloc_129_;
goto v_reusejp_127_;
}
v_reusejp_127_:
{
return v___x_128_;
}
}
}
else
{
lean_object* v_a_131_; lean_object* v___x_132_; 
v_a_131_ = lean_ctor_get(v_ma_121_, 0);
lean_inc(v_a_131_);
lean_dec_ref_known(v_ma_121_, 1);
v___x_132_ = lean_apply_1(v_f_122_, v_a_131_);
return v___x_132_;
}
}
}
LEAN_EXPORT uint8_t l_Except_toBool___redArg(lean_object* v_x_133_){
_start:
{
if (lean_obj_tag(v_x_133_) == 0)
{
uint8_t v___x_134_; 
v___x_134_ = 0;
return v___x_134_;
}
else
{
uint8_t v___x_135_; 
v___x_135_ = 1;
return v___x_135_;
}
}
}
LEAN_EXPORT lean_object* l_Except_toBool___redArg___boxed(lean_object* v_x_136_){
_start:
{
uint8_t v_res_137_; lean_object* v_r_138_; 
v_res_137_ = l_Except_toBool___redArg(v_x_136_);
lean_dec_ref(v_x_136_);
v_r_138_ = lean_box(v_res_137_);
return v_r_138_;
}
}
LEAN_EXPORT uint8_t l_Except_toBool(lean_object* v_00_u03b5_139_, lean_object* v_00_u03b1_140_, lean_object* v_x_141_){
_start:
{
if (lean_obj_tag(v_x_141_) == 0)
{
uint8_t v___x_142_; 
v___x_142_ = 0;
return v___x_142_;
}
else
{
uint8_t v___x_143_; 
v___x_143_ = 1;
return v___x_143_;
}
}
}
LEAN_EXPORT lean_object* l_Except_toBool___boxed(lean_object* v_00_u03b5_144_, lean_object* v_00_u03b1_145_, lean_object* v_x_146_){
_start:
{
uint8_t v_res_147_; lean_object* v_r_148_; 
v_res_147_ = l_Except_toBool(v_00_u03b5_144_, v_00_u03b1_145_, v_x_146_);
lean_dec_ref(v_x_146_);
v_r_148_ = lean_box(v_res_147_);
return v_r_148_;
}
}
LEAN_EXPORT uint8_t l_Except_isOk___redArg(lean_object* v_a_149_){
_start:
{
if (lean_obj_tag(v_a_149_) == 0)
{
uint8_t v___x_150_; 
v___x_150_ = 0;
return v___x_150_;
}
else
{
uint8_t v___x_151_; 
v___x_151_ = 1;
return v___x_151_;
}
}
}
LEAN_EXPORT lean_object* l_Except_isOk___redArg___boxed(lean_object* v_a_152_){
_start:
{
uint8_t v_res_153_; lean_object* v_r_154_; 
v_res_153_ = l_Except_isOk___redArg(v_a_152_);
lean_dec_ref(v_a_152_);
v_r_154_ = lean_box(v_res_153_);
return v_r_154_;
}
}
LEAN_EXPORT uint8_t l_Except_isOk(lean_object* v_00_u03b5_155_, lean_object* v_00_u03b1_156_, lean_object* v_a_157_){
_start:
{
if (lean_obj_tag(v_a_157_) == 0)
{
uint8_t v___x_158_; 
v___x_158_ = 0;
return v___x_158_;
}
else
{
uint8_t v___x_159_; 
v___x_159_ = 1;
return v___x_159_;
}
}
}
LEAN_EXPORT lean_object* l_Except_isOk___boxed(lean_object* v_00_u03b5_160_, lean_object* v_00_u03b1_161_, lean_object* v_a_162_){
_start:
{
uint8_t v_res_163_; lean_object* v_r_164_; 
v_res_163_ = l_Except_isOk(v_00_u03b5_160_, v_00_u03b1_161_, v_a_162_);
lean_dec_ref(v_a_162_);
v_r_164_ = lean_box(v_res_163_);
return v_r_164_;
}
}
LEAN_EXPORT lean_object* l_Except_toOption___redArg(lean_object* v_x_165_){
_start:
{
if (lean_obj_tag(v_x_165_) == 0)
{
lean_object* v___x_166_; 
lean_dec_ref_known(v_x_165_, 1);
v___x_166_ = lean_box(0);
return v___x_166_;
}
else
{
lean_object* v_a_167_; lean_object* v___x_169_; uint8_t v_isShared_170_; uint8_t v_isSharedCheck_174_; 
v_a_167_ = lean_ctor_get(v_x_165_, 0);
v_isSharedCheck_174_ = !lean_is_exclusive(v_x_165_);
if (v_isSharedCheck_174_ == 0)
{
v___x_169_ = v_x_165_;
v_isShared_170_ = v_isSharedCheck_174_;
goto v_resetjp_168_;
}
else
{
lean_inc(v_a_167_);
lean_dec(v_x_165_);
v___x_169_ = lean_box(0);
v_isShared_170_ = v_isSharedCheck_174_;
goto v_resetjp_168_;
}
v_resetjp_168_:
{
lean_object* v___x_172_; 
if (v_isShared_170_ == 0)
{
v___x_172_ = v___x_169_;
goto v_reusejp_171_;
}
else
{
lean_object* v_reuseFailAlloc_173_; 
v_reuseFailAlloc_173_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_173_, 0, v_a_167_);
v___x_172_ = v_reuseFailAlloc_173_;
goto v_reusejp_171_;
}
v_reusejp_171_:
{
return v___x_172_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Except_toOption(lean_object* v_00_u03b5_175_, lean_object* v_00_u03b1_176_, lean_object* v_x_177_){
_start:
{
if (lean_obj_tag(v_x_177_) == 0)
{
lean_object* v___x_178_; 
lean_dec_ref_known(v_x_177_, 1);
v___x_178_ = lean_box(0);
return v___x_178_;
}
else
{
lean_object* v_a_179_; lean_object* v___x_181_; uint8_t v_isShared_182_; uint8_t v_isSharedCheck_186_; 
v_a_179_ = lean_ctor_get(v_x_177_, 0);
v_isSharedCheck_186_ = !lean_is_exclusive(v_x_177_);
if (v_isSharedCheck_186_ == 0)
{
v___x_181_ = v_x_177_;
v_isShared_182_ = v_isSharedCheck_186_;
goto v_resetjp_180_;
}
else
{
lean_inc(v_a_179_);
lean_dec(v_x_177_);
v___x_181_ = lean_box(0);
v_isShared_182_ = v_isSharedCheck_186_;
goto v_resetjp_180_;
}
v_resetjp_180_:
{
lean_object* v___x_184_; 
if (v_isShared_182_ == 0)
{
v___x_184_ = v___x_181_;
goto v_reusejp_183_;
}
else
{
lean_object* v_reuseFailAlloc_185_; 
v_reuseFailAlloc_185_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_185_, 0, v_a_179_);
v___x_184_ = v_reuseFailAlloc_185_;
goto v_reusejp_183_;
}
v_reusejp_183_:
{
return v___x_184_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Except_tryCatch___redArg(lean_object* v_ma_187_, lean_object* v_handle_188_){
_start:
{
if (lean_obj_tag(v_ma_187_) == 0)
{
lean_object* v_a_189_; lean_object* v___x_190_; 
v_a_189_ = lean_ctor_get(v_ma_187_, 0);
lean_inc(v_a_189_);
lean_dec_ref_known(v_ma_187_, 1);
v___x_190_ = lean_apply_1(v_handle_188_, v_a_189_);
return v___x_190_;
}
else
{
lean_dec_ref(v_handle_188_);
return v_ma_187_;
}
}
}
LEAN_EXPORT lean_object* l_Except_tryCatch(lean_object* v_00_u03b5_191_, lean_object* v_00_u03b1_192_, lean_object* v_ma_193_, lean_object* v_handle_194_){
_start:
{
if (lean_obj_tag(v_ma_193_) == 0)
{
lean_object* v_a_195_; lean_object* v___x_196_; 
v_a_195_ = lean_ctor_get(v_ma_193_, 0);
lean_inc(v_a_195_);
lean_dec_ref_known(v_ma_193_, 1);
v___x_196_ = lean_apply_1(v_handle_194_, v_a_195_);
return v___x_196_;
}
else
{
lean_dec_ref(v_handle_194_);
return v_ma_193_;
}
}
}
LEAN_EXPORT lean_object* l_Except_orElseLazy___redArg(lean_object* v_x_197_, lean_object* v_y_198_){
_start:
{
if (lean_obj_tag(v_x_197_) == 0)
{
lean_object* v___x_199_; lean_object* v___x_200_; 
v___x_199_ = lean_box(0);
v___x_200_ = lean_apply_1(v_y_198_, v___x_199_);
return v___x_200_;
}
else
{
lean_dec_ref(v_y_198_);
lean_inc_ref(v_x_197_);
return v_x_197_;
}
}
}
LEAN_EXPORT lean_object* l_Except_orElseLazy___redArg___boxed(lean_object* v_x_201_, lean_object* v_y_202_){
_start:
{
lean_object* v_res_203_; 
v_res_203_ = l_Except_orElseLazy___redArg(v_x_201_, v_y_202_);
lean_dec_ref(v_x_201_);
return v_res_203_;
}
}
LEAN_EXPORT lean_object* l_Except_orElseLazy(lean_object* v_00_u03b5_204_, lean_object* v_00_u03b1_205_, lean_object* v_x_206_, lean_object* v_y_207_){
_start:
{
lean_object* v___x_208_; 
v___x_208_ = l_Except_orElseLazy___redArg(v_x_206_, v_y_207_);
return v___x_208_;
}
}
LEAN_EXPORT lean_object* l_Except_orElseLazy___boxed(lean_object* v_00_u03b5_209_, lean_object* v_00_u03b1_210_, lean_object* v_x_211_, lean_object* v_y_212_){
_start:
{
lean_object* v_res_213_; 
v_res_213_ = l_Except_orElseLazy(v_00_u03b5_209_, v_00_u03b1_210_, v_x_211_, v_y_212_);
lean_dec_ref(v_x_211_);
return v_res_213_;
}
}
LEAN_EXPORT lean_object* l_Except_instMonad___redArg___lam__0(lean_object* v_00_u03b1_214_, lean_object* v_00_u03b2_215_, lean_object* v___y_216_, lean_object* v___y_217_){
_start:
{
if (lean_obj_tag(v___y_217_) == 0)
{
lean_object* v_a_218_; lean_object* v___x_220_; uint8_t v_isShared_221_; uint8_t v_isSharedCheck_225_; 
lean_dec(v___y_216_);
v_a_218_ = lean_ctor_get(v___y_217_, 0);
v_isSharedCheck_225_ = !lean_is_exclusive(v___y_217_);
if (v_isSharedCheck_225_ == 0)
{
v___x_220_ = v___y_217_;
v_isShared_221_ = v_isSharedCheck_225_;
goto v_resetjp_219_;
}
else
{
lean_inc(v_a_218_);
lean_dec(v___y_217_);
v___x_220_ = lean_box(0);
v_isShared_221_ = v_isSharedCheck_225_;
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
lean_object* v_reuseFailAlloc_224_; 
v_reuseFailAlloc_224_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_224_, 0, v_a_218_);
v___x_223_ = v_reuseFailAlloc_224_;
goto v_reusejp_222_;
}
v_reusejp_222_:
{
return v___x_223_;
}
}
}
else
{
lean_object* v___x_227_; uint8_t v_isShared_228_; uint8_t v_isSharedCheck_232_; 
v_isSharedCheck_232_ = !lean_is_exclusive(v___y_217_);
if (v_isSharedCheck_232_ == 0)
{
lean_object* v_unused_233_; 
v_unused_233_ = lean_ctor_get(v___y_217_, 0);
lean_dec(v_unused_233_);
v___x_227_ = v___y_217_;
v_isShared_228_ = v_isSharedCheck_232_;
goto v_resetjp_226_;
}
else
{
lean_dec(v___y_217_);
v___x_227_ = lean_box(0);
v_isShared_228_ = v_isSharedCheck_232_;
goto v_resetjp_226_;
}
v_resetjp_226_:
{
lean_object* v___x_230_; 
if (v_isShared_228_ == 0)
{
lean_ctor_set(v___x_227_, 0, v___y_216_);
v___x_230_ = v___x_227_;
goto v_reusejp_229_;
}
else
{
lean_object* v_reuseFailAlloc_231_; 
v_reuseFailAlloc_231_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_231_, 0, v___y_216_);
v___x_230_ = v_reuseFailAlloc_231_;
goto v_reusejp_229_;
}
v_reusejp_229_:
{
return v___x_230_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Except_instMonad___redArg___lam__1(lean_object* v_00_u03b1_234_, lean_object* v_00_u03b2_235_, lean_object* v_f_236_, lean_object* v_x_237_){
_start:
{
if (lean_obj_tag(v_f_236_) == 0)
{
lean_object* v_a_238_; lean_object* v___x_240_; uint8_t v_isShared_241_; uint8_t v_isSharedCheck_245_; 
lean_dec_ref(v_x_237_);
v_a_238_ = lean_ctor_get(v_f_236_, 0);
v_isSharedCheck_245_ = !lean_is_exclusive(v_f_236_);
if (v_isSharedCheck_245_ == 0)
{
v___x_240_ = v_f_236_;
v_isShared_241_ = v_isSharedCheck_245_;
goto v_resetjp_239_;
}
else
{
lean_inc(v_a_238_);
lean_dec(v_f_236_);
v___x_240_ = lean_box(0);
v_isShared_241_ = v_isSharedCheck_245_;
goto v_resetjp_239_;
}
v_resetjp_239_:
{
lean_object* v___x_243_; 
if (v_isShared_241_ == 0)
{
v___x_243_ = v___x_240_;
goto v_reusejp_242_;
}
else
{
lean_object* v_reuseFailAlloc_244_; 
v_reuseFailAlloc_244_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_244_, 0, v_a_238_);
v___x_243_ = v_reuseFailAlloc_244_;
goto v_reusejp_242_;
}
v_reusejp_242_:
{
return v___x_243_;
}
}
}
else
{
lean_object* v_a_246_; lean_object* v___x_247_; lean_object* v___x_248_; 
v_a_246_ = lean_ctor_get(v_f_236_, 0);
lean_inc(v_a_246_);
lean_dec_ref_known(v_f_236_, 1);
v___x_247_ = lean_box(0);
v___x_248_ = lean_apply_1(v_x_237_, v___x_247_);
if (lean_obj_tag(v___x_248_) == 0)
{
lean_object* v_a_249_; lean_object* v___x_251_; uint8_t v_isShared_252_; uint8_t v_isSharedCheck_256_; 
lean_dec(v_a_246_);
v_a_249_ = lean_ctor_get(v___x_248_, 0);
v_isSharedCheck_256_ = !lean_is_exclusive(v___x_248_);
if (v_isSharedCheck_256_ == 0)
{
v___x_251_ = v___x_248_;
v_isShared_252_ = v_isSharedCheck_256_;
goto v_resetjp_250_;
}
else
{
lean_inc(v_a_249_);
lean_dec(v___x_248_);
v___x_251_ = lean_box(0);
v_isShared_252_ = v_isSharedCheck_256_;
goto v_resetjp_250_;
}
v_resetjp_250_:
{
lean_object* v___x_254_; 
if (v_isShared_252_ == 0)
{
v___x_254_ = v___x_251_;
goto v_reusejp_253_;
}
else
{
lean_object* v_reuseFailAlloc_255_; 
v_reuseFailAlloc_255_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_255_, 0, v_a_249_);
v___x_254_ = v_reuseFailAlloc_255_;
goto v_reusejp_253_;
}
v_reusejp_253_:
{
return v___x_254_;
}
}
}
else
{
lean_object* v_a_257_; lean_object* v___x_259_; uint8_t v_isShared_260_; uint8_t v_isSharedCheck_265_; 
v_a_257_ = lean_ctor_get(v___x_248_, 0);
v_isSharedCheck_265_ = !lean_is_exclusive(v___x_248_);
if (v_isSharedCheck_265_ == 0)
{
v___x_259_ = v___x_248_;
v_isShared_260_ = v_isSharedCheck_265_;
goto v_resetjp_258_;
}
else
{
lean_inc(v_a_257_);
lean_dec(v___x_248_);
v___x_259_ = lean_box(0);
v_isShared_260_ = v_isSharedCheck_265_;
goto v_resetjp_258_;
}
v_resetjp_258_:
{
lean_object* v___x_261_; lean_object* v___x_263_; 
v___x_261_ = lean_apply_1(v_a_246_, v_a_257_);
if (v_isShared_260_ == 0)
{
lean_ctor_set(v___x_259_, 0, v___x_261_);
v___x_263_ = v___x_259_;
goto v_reusejp_262_;
}
else
{
lean_object* v_reuseFailAlloc_264_; 
v_reuseFailAlloc_264_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_264_, 0, v___x_261_);
v___x_263_ = v_reuseFailAlloc_264_;
goto v_reusejp_262_;
}
v_reusejp_262_:
{
return v___x_263_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Except_instMonad___redArg___lam__2(lean_object* v_00_u03b1_266_, lean_object* v_00_u03b2_267_, lean_object* v_x_268_, lean_object* v_y_269_){
_start:
{
if (lean_obj_tag(v_x_268_) == 0)
{
lean_dec_ref(v_y_269_);
lean_inc_ref(v_x_268_);
return v_x_268_;
}
else
{
lean_object* v___x_270_; lean_object* v___x_271_; 
v___x_270_ = lean_box(0);
v___x_271_ = lean_apply_1(v_y_269_, v___x_270_);
if (lean_obj_tag(v___x_271_) == 0)
{
lean_object* v_a_272_; lean_object* v___x_274_; uint8_t v_isShared_275_; uint8_t v_isSharedCheck_279_; 
v_a_272_ = lean_ctor_get(v___x_271_, 0);
v_isSharedCheck_279_ = !lean_is_exclusive(v___x_271_);
if (v_isSharedCheck_279_ == 0)
{
v___x_274_ = v___x_271_;
v_isShared_275_ = v_isSharedCheck_279_;
goto v_resetjp_273_;
}
else
{
lean_inc(v_a_272_);
lean_dec(v___x_271_);
v___x_274_ = lean_box(0);
v_isShared_275_ = v_isSharedCheck_279_;
goto v_resetjp_273_;
}
v_resetjp_273_:
{
lean_object* v___x_277_; 
if (v_isShared_275_ == 0)
{
v___x_277_ = v___x_274_;
goto v_reusejp_276_;
}
else
{
lean_object* v_reuseFailAlloc_278_; 
v_reuseFailAlloc_278_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_278_, 0, v_a_272_);
v___x_277_ = v_reuseFailAlloc_278_;
goto v_reusejp_276_;
}
v_reusejp_276_:
{
return v___x_277_;
}
}
}
else
{
lean_dec_ref_known(v___x_271_, 1);
lean_inc_ref(v_x_268_);
return v_x_268_;
}
}
}
}
LEAN_EXPORT lean_object* l_Except_instMonad___redArg___lam__2___boxed(lean_object* v_00_u03b1_280_, lean_object* v_00_u03b2_281_, lean_object* v_x_282_, lean_object* v_y_283_){
_start:
{
lean_object* v_res_284_; 
v_res_284_ = l_Except_instMonad___redArg___lam__2(v_00_u03b1_280_, v_00_u03b2_281_, v_x_282_, v_y_283_);
lean_dec_ref(v_x_282_);
return v_res_284_;
}
}
LEAN_EXPORT lean_object* l_Except_instMonad___redArg___lam__3(lean_object* v_00_u03b1_285_, lean_object* v_00_u03b2_286_, lean_object* v_x_287_, lean_object* v_y_288_){
_start:
{
if (lean_obj_tag(v_x_287_) == 0)
{
lean_object* v_a_289_; lean_object* v___x_291_; uint8_t v_isShared_292_; uint8_t v_isSharedCheck_296_; 
lean_dec_ref(v_y_288_);
v_a_289_ = lean_ctor_get(v_x_287_, 0);
v_isSharedCheck_296_ = !lean_is_exclusive(v_x_287_);
if (v_isSharedCheck_296_ == 0)
{
v___x_291_ = v_x_287_;
v_isShared_292_ = v_isSharedCheck_296_;
goto v_resetjp_290_;
}
else
{
lean_inc(v_a_289_);
lean_dec(v_x_287_);
v___x_291_ = lean_box(0);
v_isShared_292_ = v_isSharedCheck_296_;
goto v_resetjp_290_;
}
v_resetjp_290_:
{
lean_object* v___x_294_; 
if (v_isShared_292_ == 0)
{
v___x_294_ = v___x_291_;
goto v_reusejp_293_;
}
else
{
lean_object* v_reuseFailAlloc_295_; 
v_reuseFailAlloc_295_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_295_, 0, v_a_289_);
v___x_294_ = v_reuseFailAlloc_295_;
goto v_reusejp_293_;
}
v_reusejp_293_:
{
return v___x_294_;
}
}
}
else
{
lean_object* v___x_297_; lean_object* v___x_298_; 
lean_dec_ref_known(v_x_287_, 1);
v___x_297_ = lean_box(0);
v___x_298_ = lean_apply_1(v_y_288_, v___x_297_);
return v___x_298_;
}
}
}
LEAN_EXPORT lean_object* l_Except_instMonad___redArg(){
_start:
{
lean_object* v___x_319_; 
v___x_319_ = ((lean_object*)(l_Except_instMonad___redArg___closed__9));
return v___x_319_;
}
}
LEAN_EXPORT lean_object* l_Except_instMonad___redArg___boxed(lean_object* v___dummy_320_){
_start:
{
lean_object* v_res_321_; 
v_res_321_ = l_Except_instMonad___redArg();
return v_res_321_;
}
}
LEAN_EXPORT lean_object* l_Except_instMonad(lean_object* v_00_u03b5_322_){
_start:
{
lean_object* v___x_323_; 
v___x_323_ = ((lean_object*)(l_Except_instMonad___redArg___closed__9));
return v___x_323_;
}
}
LEAN_EXPORT lean_object* l_ExceptT_mk___redArg(lean_object* v_run_324_){
_start:
{
lean_inc(v_run_324_);
return v_run_324_;
}
}
LEAN_EXPORT lean_object* l_ExceptT_mk___redArg___boxed(lean_object* v_run_325_){
_start:
{
lean_object* v_res_326_; 
v_res_326_ = l_ExceptT_mk___redArg(v_run_325_);
lean_dec(v_run_325_);
return v_res_326_;
}
}
LEAN_EXPORT lean_object* l_ExceptT_mk(lean_object* v_00_u03b5_327_, lean_object* v_m_328_, lean_object* v_00_u03b1_329_, lean_object* v_run_330_){
_start:
{
lean_inc(v_run_330_);
return v_run_330_;
}
}
LEAN_EXPORT lean_object* l_ExceptT_mk___boxed(lean_object* v_00_u03b5_331_, lean_object* v_m_332_, lean_object* v_00_u03b1_333_, lean_object* v_run_334_){
_start:
{
lean_object* v_res_335_; 
v_res_335_ = l_ExceptT_mk(v_00_u03b5_331_, v_m_332_, v_00_u03b1_333_, v_run_334_);
lean_dec(v_run_334_);
return v_res_335_;
}
}
LEAN_EXPORT lean_object* l_ExceptT_run___redArg(lean_object* v_self_336_){
_start:
{
lean_inc(v_self_336_);
return v_self_336_;
}
}
LEAN_EXPORT lean_object* l_ExceptT_run___redArg___boxed(lean_object* v_self_337_){
_start:
{
lean_object* v_res_338_; 
v_res_338_ = l_ExceptT_run___redArg(v_self_337_);
lean_dec(v_self_337_);
return v_res_338_;
}
}
LEAN_EXPORT lean_object* l_ExceptT_run(lean_object* v_00_u03b5_339_, lean_object* v_m_340_, lean_object* v_00_u03b1_341_, lean_object* v_self_342_){
_start:
{
lean_inc(v_self_342_);
return v_self_342_;
}
}
LEAN_EXPORT lean_object* l_ExceptT_run___boxed(lean_object* v_00_u03b5_343_, lean_object* v_m_344_, lean_object* v_00_u03b1_345_, lean_object* v_self_346_){
_start:
{
lean_object* v_res_347_; 
v_res_347_ = l_ExceptT_run(v_00_u03b5_343_, v_m_344_, v_00_u03b1_345_, v_self_346_);
lean_dec(v_self_346_);
return v_res_347_;
}
}
LEAN_EXPORT lean_object* l_ExceptT_runK___redArg___lam__0(lean_object* v_error_348_, lean_object* v_ok_349_, lean_object* v_x_350_){
_start:
{
if (lean_obj_tag(v_x_350_) == 0)
{
lean_object* v_a_351_; lean_object* v___x_352_; 
lean_dec(v_ok_349_);
v_a_351_ = lean_ctor_get(v_x_350_, 0);
lean_inc(v_a_351_);
lean_dec_ref_known(v_x_350_, 1);
v___x_352_ = lean_apply_1(v_error_348_, v_a_351_);
return v___x_352_;
}
else
{
lean_object* v_a_353_; lean_object* v___x_354_; 
lean_dec(v_error_348_);
v_a_353_ = lean_ctor_get(v_x_350_, 0);
lean_inc(v_a_353_);
lean_dec_ref_known(v_x_350_, 1);
v___x_354_ = lean_apply_1(v_ok_349_, v_a_353_);
return v___x_354_;
}
}
}
LEAN_EXPORT lean_object* l_ExceptT_runK___redArg(lean_object* v_inst_355_, lean_object* v_x_356_, lean_object* v_ok_357_, lean_object* v_error_358_){
_start:
{
lean_object* v_toBind_359_; lean_object* v___f_360_; lean_object* v___x_361_; 
v_toBind_359_ = lean_ctor_get(v_inst_355_, 1);
lean_inc(v_toBind_359_);
lean_dec_ref(v_inst_355_);
v___f_360_ = lean_alloc_closure((void*)(l_ExceptT_runK___redArg___lam__0), 3, 2);
lean_closure_set(v___f_360_, 0, v_error_358_);
lean_closure_set(v___f_360_, 1, v_ok_357_);
v___x_361_ = lean_apply_4(v_toBind_359_, lean_box(0), lean_box(0), v_x_356_, v___f_360_);
return v___x_361_;
}
}
LEAN_EXPORT lean_object* l_ExceptT_runK(lean_object* v_m_362_, lean_object* v_00_u03b5_363_, lean_object* v_00_u03b1_364_, lean_object* v_00_u03b2_365_, lean_object* v_inst_366_, lean_object* v_x_367_, lean_object* v_ok_368_, lean_object* v_error_369_){
_start:
{
lean_object* v_toBind_370_; lean_object* v___f_371_; lean_object* v___x_372_; 
v_toBind_370_ = lean_ctor_get(v_inst_366_, 1);
lean_inc(v_toBind_370_);
lean_dec_ref(v_inst_366_);
v___f_371_ = lean_alloc_closure((void*)(l_ExceptT_runK___redArg___lam__0), 3, 2);
lean_closure_set(v___f_371_, 0, v_error_369_);
lean_closure_set(v___f_371_, 1, v_ok_368_);
v___x_372_ = lean_apply_4(v_toBind_370_, lean_box(0), lean_box(0), v_x_367_, v___f_371_);
return v___x_372_;
}
}
LEAN_EXPORT lean_object* l_ExceptT_runCatch___redArg___lam__0(lean_object* v_toPure_373_, lean_object* v_x_374_){
_start:
{
lean_object* v_a_375_; lean_object* v___x_376_; 
v_a_375_ = lean_ctor_get(v_x_374_, 0);
lean_inc(v_a_375_);
lean_dec_ref(v_x_374_);
v___x_376_ = lean_apply_2(v_toPure_373_, lean_box(0), v_a_375_);
return v___x_376_;
}
}
LEAN_EXPORT lean_object* l_ExceptT_runCatch___redArg(lean_object* v_inst_377_, lean_object* v_x_378_){
_start:
{
lean_object* v_toApplicative_379_; lean_object* v_toBind_380_; lean_object* v_toPure_381_; lean_object* v___f_382_; lean_object* v___x_383_; 
v_toApplicative_379_ = lean_ctor_get(v_inst_377_, 0);
lean_inc_ref(v_toApplicative_379_);
v_toBind_380_ = lean_ctor_get(v_inst_377_, 1);
lean_inc(v_toBind_380_);
lean_dec_ref(v_inst_377_);
v_toPure_381_ = lean_ctor_get(v_toApplicative_379_, 1);
lean_inc(v_toPure_381_);
lean_dec_ref(v_toApplicative_379_);
v___f_382_ = lean_alloc_closure((void*)(l_ExceptT_runCatch___redArg___lam__0), 2, 1);
lean_closure_set(v___f_382_, 0, v_toPure_381_);
v___x_383_ = lean_apply_4(v_toBind_380_, lean_box(0), lean_box(0), v_x_378_, v___f_382_);
return v___x_383_;
}
}
LEAN_EXPORT lean_object* l_ExceptT_runCatch(lean_object* v_m_384_, lean_object* v_00_u03b1_385_, lean_object* v_inst_386_, lean_object* v_x_387_){
_start:
{
lean_object* v_toApplicative_388_; lean_object* v_toBind_389_; lean_object* v_toPure_390_; lean_object* v___f_391_; lean_object* v___x_392_; 
v_toApplicative_388_ = lean_ctor_get(v_inst_386_, 0);
lean_inc_ref(v_toApplicative_388_);
v_toBind_389_ = lean_ctor_get(v_inst_386_, 1);
lean_inc(v_toBind_389_);
lean_dec_ref(v_inst_386_);
v_toPure_390_ = lean_ctor_get(v_toApplicative_388_, 1);
lean_inc(v_toPure_390_);
lean_dec_ref(v_toApplicative_388_);
v___f_391_ = lean_alloc_closure((void*)(l_ExceptT_runCatch___redArg___lam__0), 2, 1);
lean_closure_set(v___f_391_, 0, v_toPure_390_);
v___x_392_ = lean_apply_4(v_toBind_389_, lean_box(0), lean_box(0), v_x_387_, v___f_391_);
return v___x_392_;
}
}
LEAN_EXPORT lean_object* l_ExceptT_pure___redArg(lean_object* v_inst_393_, lean_object* v_a_394_){
_start:
{
lean_object* v_toApplicative_395_; lean_object* v_toPure_396_; lean_object* v___x_397_; lean_object* v___x_398_; 
v_toApplicative_395_ = lean_ctor_get(v_inst_393_, 0);
lean_inc_ref(v_toApplicative_395_);
lean_dec_ref(v_inst_393_);
v_toPure_396_ = lean_ctor_get(v_toApplicative_395_, 1);
lean_inc(v_toPure_396_);
lean_dec_ref(v_toApplicative_395_);
v___x_397_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_397_, 0, v_a_394_);
v___x_398_ = lean_apply_2(v_toPure_396_, lean_box(0), v___x_397_);
return v___x_398_;
}
}
LEAN_EXPORT lean_object* l_ExceptT_pure(lean_object* v_00_u03b5_399_, lean_object* v_m_400_, lean_object* v_inst_401_, lean_object* v_00_u03b1_402_, lean_object* v_a_403_){
_start:
{
lean_object* v_toApplicative_404_; lean_object* v_toPure_405_; lean_object* v___x_406_; lean_object* v___x_407_; 
v_toApplicative_404_ = lean_ctor_get(v_inst_401_, 0);
lean_inc_ref(v_toApplicative_404_);
lean_dec_ref(v_inst_401_);
v_toPure_405_ = lean_ctor_get(v_toApplicative_404_, 1);
lean_inc(v_toPure_405_);
lean_dec_ref(v_toApplicative_404_);
v___x_406_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_406_, 0, v_a_403_);
v___x_407_ = lean_apply_2(v_toPure_405_, lean_box(0), v___x_406_);
return v___x_407_;
}
}
LEAN_EXPORT lean_object* l_ExceptT_bindCont___redArg(lean_object* v_inst_408_, lean_object* v_f_409_, lean_object* v_x_410_){
_start:
{
lean_object* v_toApplicative_411_; 
v_toApplicative_411_ = lean_ctor_get(v_inst_408_, 0);
lean_inc_ref(v_toApplicative_411_);
lean_dec_ref(v_inst_408_);
if (lean_obj_tag(v_x_410_) == 0)
{
lean_object* v_toPure_412_; lean_object* v_a_413_; lean_object* v___x_415_; uint8_t v_isShared_416_; uint8_t v_isSharedCheck_421_; 
lean_dec(v_f_409_);
v_toPure_412_ = lean_ctor_get(v_toApplicative_411_, 1);
lean_inc(v_toPure_412_);
lean_dec_ref(v_toApplicative_411_);
v_a_413_ = lean_ctor_get(v_x_410_, 0);
v_isSharedCheck_421_ = !lean_is_exclusive(v_x_410_);
if (v_isSharedCheck_421_ == 0)
{
v___x_415_ = v_x_410_;
v_isShared_416_ = v_isSharedCheck_421_;
goto v_resetjp_414_;
}
else
{
lean_inc(v_a_413_);
lean_dec(v_x_410_);
v___x_415_ = lean_box(0);
v_isShared_416_ = v_isSharedCheck_421_;
goto v_resetjp_414_;
}
v_resetjp_414_:
{
lean_object* v___x_418_; 
if (v_isShared_416_ == 0)
{
v___x_418_ = v___x_415_;
goto v_reusejp_417_;
}
else
{
lean_object* v_reuseFailAlloc_420_; 
v_reuseFailAlloc_420_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_420_, 0, v_a_413_);
v___x_418_ = v_reuseFailAlloc_420_;
goto v_reusejp_417_;
}
v_reusejp_417_:
{
lean_object* v___x_419_; 
v___x_419_ = lean_apply_2(v_toPure_412_, lean_box(0), v___x_418_);
return v___x_419_;
}
}
}
else
{
lean_object* v_a_422_; lean_object* v___x_423_; 
lean_dec_ref(v_toApplicative_411_);
v_a_422_ = lean_ctor_get(v_x_410_, 0);
lean_inc(v_a_422_);
lean_dec_ref_known(v_x_410_, 1);
v___x_423_ = lean_apply_1(v_f_409_, v_a_422_);
return v___x_423_;
}
}
}
LEAN_EXPORT lean_object* l_ExceptT_bindCont(lean_object* v_00_u03b5_424_, lean_object* v_m_425_, lean_object* v_inst_426_, lean_object* v_00_u03b1_427_, lean_object* v_00_u03b2_428_, lean_object* v_f_429_, lean_object* v_x_430_){
_start:
{
lean_object* v_toApplicative_431_; 
v_toApplicative_431_ = lean_ctor_get(v_inst_426_, 0);
lean_inc_ref(v_toApplicative_431_);
lean_dec_ref(v_inst_426_);
if (lean_obj_tag(v_x_430_) == 0)
{
lean_object* v_toPure_432_; lean_object* v_a_433_; lean_object* v___x_435_; uint8_t v_isShared_436_; uint8_t v_isSharedCheck_441_; 
lean_dec(v_f_429_);
v_toPure_432_ = lean_ctor_get(v_toApplicative_431_, 1);
lean_inc(v_toPure_432_);
lean_dec_ref(v_toApplicative_431_);
v_a_433_ = lean_ctor_get(v_x_430_, 0);
v_isSharedCheck_441_ = !lean_is_exclusive(v_x_430_);
if (v_isSharedCheck_441_ == 0)
{
v___x_435_ = v_x_430_;
v_isShared_436_ = v_isSharedCheck_441_;
goto v_resetjp_434_;
}
else
{
lean_inc(v_a_433_);
lean_dec(v_x_430_);
v___x_435_ = lean_box(0);
v_isShared_436_ = v_isSharedCheck_441_;
goto v_resetjp_434_;
}
v_resetjp_434_:
{
lean_object* v___x_438_; 
if (v_isShared_436_ == 0)
{
v___x_438_ = v___x_435_;
goto v_reusejp_437_;
}
else
{
lean_object* v_reuseFailAlloc_440_; 
v_reuseFailAlloc_440_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_440_, 0, v_a_433_);
v___x_438_ = v_reuseFailAlloc_440_;
goto v_reusejp_437_;
}
v_reusejp_437_:
{
lean_object* v___x_439_; 
v___x_439_ = lean_apply_2(v_toPure_432_, lean_box(0), v___x_438_);
return v___x_439_;
}
}
}
else
{
lean_object* v_a_442_; lean_object* v___x_443_; 
lean_dec_ref(v_toApplicative_431_);
v_a_442_ = lean_ctor_get(v_x_430_, 0);
lean_inc(v_a_442_);
lean_dec_ref_known(v_x_430_, 1);
v___x_443_ = lean_apply_1(v_f_429_, v_a_442_);
return v___x_443_;
}
}
}
LEAN_EXPORT lean_object* l_ExceptT_bind___redArg(lean_object* v_inst_444_, lean_object* v_ma_445_, lean_object* v_f_446_){
_start:
{
lean_object* v_toBind_447_; lean_object* v___x_448_; lean_object* v___x_449_; 
v_toBind_447_ = lean_ctor_get(v_inst_444_, 1);
lean_inc(v_toBind_447_);
v___x_448_ = lean_alloc_closure((void*)(l_ExceptT_bindCont), 7, 6);
lean_closure_set(v___x_448_, 0, lean_box(0));
lean_closure_set(v___x_448_, 1, lean_box(0));
lean_closure_set(v___x_448_, 2, v_inst_444_);
lean_closure_set(v___x_448_, 3, lean_box(0));
lean_closure_set(v___x_448_, 4, lean_box(0));
lean_closure_set(v___x_448_, 5, v_f_446_);
v___x_449_ = lean_apply_4(v_toBind_447_, lean_box(0), lean_box(0), v_ma_445_, v___x_448_);
return v___x_449_;
}
}
LEAN_EXPORT lean_object* l_ExceptT_bind(lean_object* v_00_u03b5_450_, lean_object* v_m_451_, lean_object* v_inst_452_, lean_object* v_00_u03b1_453_, lean_object* v_00_u03b2_454_, lean_object* v_ma_455_, lean_object* v_f_456_){
_start:
{
lean_object* v_toBind_457_; lean_object* v___x_458_; lean_object* v___x_459_; 
v_toBind_457_ = lean_ctor_get(v_inst_452_, 1);
lean_inc(v_toBind_457_);
v___x_458_ = lean_alloc_closure((void*)(l_ExceptT_bindCont), 7, 6);
lean_closure_set(v___x_458_, 0, lean_box(0));
lean_closure_set(v___x_458_, 1, lean_box(0));
lean_closure_set(v___x_458_, 2, v_inst_452_);
lean_closure_set(v___x_458_, 3, lean_box(0));
lean_closure_set(v___x_458_, 4, lean_box(0));
lean_closure_set(v___x_458_, 5, v_f_456_);
v___x_459_ = lean_apply_4(v_toBind_457_, lean_box(0), lean_box(0), v_ma_455_, v___x_458_);
return v___x_459_;
}
}
LEAN_EXPORT lean_object* l_ExceptT_map___redArg___lam__0(lean_object* v_toPure_460_, lean_object* v_f_461_, lean_object* v_a_462_){
_start:
{
if (lean_obj_tag(v_a_462_) == 0)
{
lean_object* v_a_463_; lean_object* v___x_465_; uint8_t v_isShared_466_; uint8_t v_isSharedCheck_471_; 
lean_dec(v_f_461_);
v_a_463_ = lean_ctor_get(v_a_462_, 0);
v_isSharedCheck_471_ = !lean_is_exclusive(v_a_462_);
if (v_isSharedCheck_471_ == 0)
{
v___x_465_ = v_a_462_;
v_isShared_466_ = v_isSharedCheck_471_;
goto v_resetjp_464_;
}
else
{
lean_inc(v_a_463_);
lean_dec(v_a_462_);
v___x_465_ = lean_box(0);
v_isShared_466_ = v_isSharedCheck_471_;
goto v_resetjp_464_;
}
v_resetjp_464_:
{
lean_object* v___x_468_; 
if (v_isShared_466_ == 0)
{
v___x_468_ = v___x_465_;
goto v_reusejp_467_;
}
else
{
lean_object* v_reuseFailAlloc_470_; 
v_reuseFailAlloc_470_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_470_, 0, v_a_463_);
v___x_468_ = v_reuseFailAlloc_470_;
goto v_reusejp_467_;
}
v_reusejp_467_:
{
lean_object* v___x_469_; 
v___x_469_ = lean_apply_2(v_toPure_460_, lean_box(0), v___x_468_);
return v___x_469_;
}
}
}
else
{
lean_object* v_a_472_; lean_object* v___x_474_; uint8_t v_isShared_475_; uint8_t v_isSharedCheck_481_; 
v_a_472_ = lean_ctor_get(v_a_462_, 0);
v_isSharedCheck_481_ = !lean_is_exclusive(v_a_462_);
if (v_isSharedCheck_481_ == 0)
{
v___x_474_ = v_a_462_;
v_isShared_475_ = v_isSharedCheck_481_;
goto v_resetjp_473_;
}
else
{
lean_inc(v_a_472_);
lean_dec(v_a_462_);
v___x_474_ = lean_box(0);
v_isShared_475_ = v_isSharedCheck_481_;
goto v_resetjp_473_;
}
v_resetjp_473_:
{
lean_object* v___x_476_; lean_object* v___x_478_; 
v___x_476_ = lean_apply_1(v_f_461_, v_a_472_);
if (v_isShared_475_ == 0)
{
lean_ctor_set(v___x_474_, 0, v___x_476_);
v___x_478_ = v___x_474_;
goto v_reusejp_477_;
}
else
{
lean_object* v_reuseFailAlloc_480_; 
v_reuseFailAlloc_480_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_480_, 0, v___x_476_);
v___x_478_ = v_reuseFailAlloc_480_;
goto v_reusejp_477_;
}
v_reusejp_477_:
{
lean_object* v___x_479_; 
v___x_479_ = lean_apply_2(v_toPure_460_, lean_box(0), v___x_478_);
return v___x_479_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_ExceptT_map___redArg(lean_object* v_inst_482_, lean_object* v_f_483_, lean_object* v_x_484_){
_start:
{
lean_object* v_toApplicative_485_; lean_object* v_toBind_486_; lean_object* v_toPure_487_; lean_object* v___f_488_; lean_object* v___x_489_; 
v_toApplicative_485_ = lean_ctor_get(v_inst_482_, 0);
lean_inc_ref(v_toApplicative_485_);
v_toBind_486_ = lean_ctor_get(v_inst_482_, 1);
lean_inc(v_toBind_486_);
lean_dec_ref(v_inst_482_);
v_toPure_487_ = lean_ctor_get(v_toApplicative_485_, 1);
lean_inc(v_toPure_487_);
lean_dec_ref(v_toApplicative_485_);
v___f_488_ = lean_alloc_closure((void*)(l_ExceptT_map___redArg___lam__0), 3, 2);
lean_closure_set(v___f_488_, 0, v_toPure_487_);
lean_closure_set(v___f_488_, 1, v_f_483_);
v___x_489_ = lean_apply_4(v_toBind_486_, lean_box(0), lean_box(0), v_x_484_, v___f_488_);
return v___x_489_;
}
}
LEAN_EXPORT lean_object* l_ExceptT_map(lean_object* v_00_u03b5_490_, lean_object* v_m_491_, lean_object* v_inst_492_, lean_object* v_00_u03b1_493_, lean_object* v_00_u03b2_494_, lean_object* v_f_495_, lean_object* v_x_496_){
_start:
{
lean_object* v_toApplicative_497_; lean_object* v_toBind_498_; lean_object* v_toPure_499_; lean_object* v___f_500_; lean_object* v___x_501_; 
v_toApplicative_497_ = lean_ctor_get(v_inst_492_, 0);
lean_inc_ref(v_toApplicative_497_);
v_toBind_498_ = lean_ctor_get(v_inst_492_, 1);
lean_inc(v_toBind_498_);
lean_dec_ref(v_inst_492_);
v_toPure_499_ = lean_ctor_get(v_toApplicative_497_, 1);
lean_inc(v_toPure_499_);
lean_dec_ref(v_toApplicative_497_);
v___f_500_ = lean_alloc_closure((void*)(l_ExceptT_map___redArg___lam__0), 3, 2);
lean_closure_set(v___f_500_, 0, v_toPure_499_);
lean_closure_set(v___f_500_, 1, v_f_495_);
v___x_501_ = lean_apply_4(v_toBind_498_, lean_box(0), lean_box(0), v_x_496_, v___f_500_);
return v___x_501_;
}
}
LEAN_EXPORT lean_object* l_ExceptT_lift___redArg___lam__0(lean_object* v_a_502_){
_start:
{
lean_object* v___x_503_; 
v___x_503_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_503_, 0, v_a_502_);
return v___x_503_;
}
}
LEAN_EXPORT lean_object* l_ExceptT_lift___redArg(lean_object* v_inst_505_, lean_object* v_t_506_){
_start:
{
lean_object* v_toApplicative_507_; lean_object* v_toFunctor_508_; lean_object* v_map_509_; lean_object* v___f_510_; lean_object* v___x_511_; 
v_toApplicative_507_ = lean_ctor_get(v_inst_505_, 0);
lean_inc_ref(v_toApplicative_507_);
lean_dec_ref(v_inst_505_);
v_toFunctor_508_ = lean_ctor_get(v_toApplicative_507_, 0);
lean_inc_ref(v_toFunctor_508_);
lean_dec_ref(v_toApplicative_507_);
v_map_509_ = lean_ctor_get(v_toFunctor_508_, 0);
lean_inc(v_map_509_);
lean_dec_ref(v_toFunctor_508_);
v___f_510_ = ((lean_object*)(l_ExceptT_lift___redArg___closed__0));
v___x_511_ = lean_apply_4(v_map_509_, lean_box(0), lean_box(0), v___f_510_, v_t_506_);
return v___x_511_;
}
}
LEAN_EXPORT lean_object* l_ExceptT_lift(lean_object* v_00_u03b5_512_, lean_object* v_m_513_, lean_object* v_inst_514_, lean_object* v_00_u03b1_515_, lean_object* v_t_516_){
_start:
{
lean_object* v_toApplicative_517_; lean_object* v_toFunctor_518_; lean_object* v_map_519_; lean_object* v___f_520_; lean_object* v___x_521_; 
v_toApplicative_517_ = lean_ctor_get(v_inst_514_, 0);
lean_inc_ref(v_toApplicative_517_);
lean_dec_ref(v_inst_514_);
v_toFunctor_518_ = lean_ctor_get(v_toApplicative_517_, 0);
lean_inc_ref(v_toFunctor_518_);
lean_dec_ref(v_toApplicative_517_);
v_map_519_ = lean_ctor_get(v_toFunctor_518_, 0);
lean_inc(v_map_519_);
lean_dec_ref(v_toFunctor_518_);
v___f_520_ = ((lean_object*)(l_ExceptT_lift___redArg___closed__0));
v___x_521_ = lean_apply_4(v_map_519_, lean_box(0), lean_box(0), v___f_520_, v_t_516_);
return v___x_521_;
}
}
LEAN_EXPORT lean_object* l_ExceptT_instMonadLiftExcept___redArg___lam__0(lean_object* v_toPure_522_, lean_object* v_00_u03b1_523_, lean_object* v_e_524_){
_start:
{
lean_object* v___x_525_; 
v___x_525_ = lean_apply_2(v_toPure_522_, lean_box(0), v_e_524_);
return v___x_525_;
}
}
LEAN_EXPORT lean_object* l_ExceptT_instMonadLiftExcept___redArg(lean_object* v_inst_526_){
_start:
{
lean_object* v_toApplicative_527_; lean_object* v_toPure_528_; lean_object* v___f_529_; 
v_toApplicative_527_ = lean_ctor_get(v_inst_526_, 0);
lean_inc_ref(v_toApplicative_527_);
lean_dec_ref(v_inst_526_);
v_toPure_528_ = lean_ctor_get(v_toApplicative_527_, 1);
lean_inc(v_toPure_528_);
lean_dec_ref(v_toApplicative_527_);
v___f_529_ = lean_alloc_closure((void*)(l_ExceptT_instMonadLiftExcept___redArg___lam__0), 3, 1);
lean_closure_set(v___f_529_, 0, v_toPure_528_);
return v___f_529_;
}
}
LEAN_EXPORT lean_object* l_ExceptT_instMonadLiftExcept(lean_object* v_00_u03b5_530_, lean_object* v_m_531_, lean_object* v_inst_532_){
_start:
{
lean_object* v_toApplicative_533_; lean_object* v_toPure_534_; lean_object* v___f_535_; 
v_toApplicative_533_ = lean_ctor_get(v_inst_532_, 0);
lean_inc_ref(v_toApplicative_533_);
lean_dec_ref(v_inst_532_);
v_toPure_534_ = lean_ctor_get(v_toApplicative_533_, 1);
lean_inc(v_toPure_534_);
lean_dec_ref(v_toApplicative_533_);
v___f_535_ = lean_alloc_closure((void*)(l_ExceptT_instMonadLiftExcept___redArg___lam__0), 3, 1);
lean_closure_set(v___f_535_, 0, v_toPure_534_);
return v___f_535_;
}
}
LEAN_EXPORT lean_object* l_ExceptT_instMonadLift___redArg(lean_object* v_inst_536_){
_start:
{
lean_object* v___x_537_; 
v___x_537_ = lean_alloc_closure((void*)(l_ExceptT_lift), 5, 3);
lean_closure_set(v___x_537_, 0, lean_box(0));
lean_closure_set(v___x_537_, 1, lean_box(0));
lean_closure_set(v___x_537_, 2, v_inst_536_);
return v___x_537_;
}
}
LEAN_EXPORT lean_object* l_ExceptT_instMonadLift(lean_object* v_00_u03b5_538_, lean_object* v_m_539_, lean_object* v_inst_540_){
_start:
{
lean_object* v___x_541_; 
v___x_541_ = lean_alloc_closure((void*)(l_ExceptT_lift), 5, 3);
lean_closure_set(v___x_541_, 0, lean_box(0));
lean_closure_set(v___x_541_, 1, lean_box(0));
lean_closure_set(v___x_541_, 2, v_inst_540_);
return v___x_541_;
}
}
LEAN_EXPORT lean_object* l_ExceptT_tryCatch___redArg___lam__0(lean_object* v_handle_542_, lean_object* v_toPure_543_, lean_object* v_res_544_){
_start:
{
if (lean_obj_tag(v_res_544_) == 0)
{
lean_object* v_a_545_; lean_object* v___x_546_; 
lean_dec(v_toPure_543_);
v_a_545_ = lean_ctor_get(v_res_544_, 0);
lean_inc(v_a_545_);
lean_dec_ref_known(v_res_544_, 1);
v___x_546_ = lean_apply_1(v_handle_542_, v_a_545_);
return v___x_546_;
}
else
{
lean_object* v___x_547_; 
lean_dec(v_handle_542_);
v___x_547_ = lean_apply_2(v_toPure_543_, lean_box(0), v_res_544_);
return v___x_547_;
}
}
}
LEAN_EXPORT lean_object* l_ExceptT_tryCatch___redArg(lean_object* v_inst_548_, lean_object* v_ma_549_, lean_object* v_handle_550_){
_start:
{
lean_object* v_toApplicative_551_; lean_object* v_toBind_552_; lean_object* v_toPure_553_; lean_object* v___f_554_; lean_object* v___x_555_; 
v_toApplicative_551_ = lean_ctor_get(v_inst_548_, 0);
lean_inc_ref(v_toApplicative_551_);
v_toBind_552_ = lean_ctor_get(v_inst_548_, 1);
lean_inc(v_toBind_552_);
lean_dec_ref(v_inst_548_);
v_toPure_553_ = lean_ctor_get(v_toApplicative_551_, 1);
lean_inc(v_toPure_553_);
lean_dec_ref(v_toApplicative_551_);
v___f_554_ = lean_alloc_closure((void*)(l_ExceptT_tryCatch___redArg___lam__0), 3, 2);
lean_closure_set(v___f_554_, 0, v_handle_550_);
lean_closure_set(v___f_554_, 1, v_toPure_553_);
v___x_555_ = lean_apply_4(v_toBind_552_, lean_box(0), lean_box(0), v_ma_549_, v___f_554_);
return v___x_555_;
}
}
LEAN_EXPORT lean_object* l_ExceptT_tryCatch(lean_object* v_00_u03b5_556_, lean_object* v_m_557_, lean_object* v_inst_558_, lean_object* v_00_u03b1_559_, lean_object* v_ma_560_, lean_object* v_handle_561_){
_start:
{
lean_object* v_toApplicative_562_; lean_object* v_toBind_563_; lean_object* v_toPure_564_; lean_object* v___f_565_; lean_object* v___x_566_; 
v_toApplicative_562_ = lean_ctor_get(v_inst_558_, 0);
lean_inc_ref(v_toApplicative_562_);
v_toBind_563_ = lean_ctor_get(v_inst_558_, 1);
lean_inc(v_toBind_563_);
lean_dec_ref(v_inst_558_);
v_toPure_564_ = lean_ctor_get(v_toApplicative_562_, 1);
lean_inc(v_toPure_564_);
lean_dec_ref(v_toApplicative_562_);
v___f_565_ = lean_alloc_closure((void*)(l_ExceptT_tryCatch___redArg___lam__0), 3, 2);
lean_closure_set(v___f_565_, 0, v_handle_561_);
lean_closure_set(v___f_565_, 1, v_toPure_564_);
v___x_566_ = lean_apply_4(v_toBind_563_, lean_box(0), lean_box(0), v_ma_560_, v___f_565_);
return v___x_566_;
}
}
LEAN_EXPORT lean_object* l_ExceptT_instMonadFunctor___redArg___lam__0(lean_object* v_00_u03b1_567_, lean_object* v_f_568_, lean_object* v_x_569_){
_start:
{
lean_object* v___x_570_; 
v___x_570_ = lean_apply_2(v_f_568_, lean_box(0), v_x_569_);
return v___x_570_;
}
}
LEAN_EXPORT lean_object* l_ExceptT_instMonadFunctor___redArg(){
_start:
{
lean_object* v___f_573_; 
v___f_573_ = ((lean_object*)(l_ExceptT_instMonadFunctor___redArg___closed__0));
return v___f_573_;
}
}
LEAN_EXPORT lean_object* l_ExceptT_instMonadFunctor___redArg___boxed(lean_object* v___dummy_574_){
_start:
{
lean_object* v_res_575_; 
v_res_575_ = l_ExceptT_instMonadFunctor___redArg();
return v_res_575_;
}
}
LEAN_EXPORT lean_object* l_ExceptT_instMonadFunctor(lean_object* v_00_u03b5_576_, lean_object* v_m_577_){
_start:
{
lean_object* v___f_578_; 
v___f_578_ = ((lean_object*)(l_ExceptT_instMonadFunctor___redArg___closed__0));
return v___f_578_;
}
}
LEAN_EXPORT lean_object* l_ExceptT_instMonad___redArg___lam__0(lean_object* v_toPure_579_, lean_object* v___y_580_, lean_object* v_a_581_){
_start:
{
if (lean_obj_tag(v_a_581_) == 0)
{
lean_object* v_a_582_; lean_object* v___x_584_; uint8_t v_isShared_585_; uint8_t v_isSharedCheck_590_; 
lean_dec(v___y_580_);
v_a_582_ = lean_ctor_get(v_a_581_, 0);
v_isSharedCheck_590_ = !lean_is_exclusive(v_a_581_);
if (v_isSharedCheck_590_ == 0)
{
v___x_584_ = v_a_581_;
v_isShared_585_ = v_isSharedCheck_590_;
goto v_resetjp_583_;
}
else
{
lean_inc(v_a_582_);
lean_dec(v_a_581_);
v___x_584_ = lean_box(0);
v_isShared_585_ = v_isSharedCheck_590_;
goto v_resetjp_583_;
}
v_resetjp_583_:
{
lean_object* v___x_587_; 
if (v_isShared_585_ == 0)
{
v___x_587_ = v___x_584_;
goto v_reusejp_586_;
}
else
{
lean_object* v_reuseFailAlloc_589_; 
v_reuseFailAlloc_589_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_589_, 0, v_a_582_);
v___x_587_ = v_reuseFailAlloc_589_;
goto v_reusejp_586_;
}
v_reusejp_586_:
{
lean_object* v___x_588_; 
v___x_588_ = lean_apply_2(v_toPure_579_, lean_box(0), v___x_587_);
return v___x_588_;
}
}
}
else
{
lean_object* v___x_592_; uint8_t v_isShared_593_; uint8_t v_isSharedCheck_598_; 
v_isSharedCheck_598_ = !lean_is_exclusive(v_a_581_);
if (v_isSharedCheck_598_ == 0)
{
lean_object* v_unused_599_; 
v_unused_599_ = lean_ctor_get(v_a_581_, 0);
lean_dec(v_unused_599_);
v___x_592_ = v_a_581_;
v_isShared_593_ = v_isSharedCheck_598_;
goto v_resetjp_591_;
}
else
{
lean_dec(v_a_581_);
v___x_592_ = lean_box(0);
v_isShared_593_ = v_isSharedCheck_598_;
goto v_resetjp_591_;
}
v_resetjp_591_:
{
lean_object* v___x_595_; 
if (v_isShared_593_ == 0)
{
lean_ctor_set(v___x_592_, 0, v___y_580_);
v___x_595_ = v___x_592_;
goto v_reusejp_594_;
}
else
{
lean_object* v_reuseFailAlloc_597_; 
v_reuseFailAlloc_597_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_597_, 0, v___y_580_);
v___x_595_ = v_reuseFailAlloc_597_;
goto v_reusejp_594_;
}
v_reusejp_594_:
{
lean_object* v___x_596_; 
v___x_596_ = lean_apply_2(v_toPure_579_, lean_box(0), v___x_595_);
return v___x_596_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_ExceptT_instMonad___redArg___lam__1(lean_object* v_inst_600_, lean_object* v_00_u03b1_601_, lean_object* v_00_u03b2_602_, lean_object* v___y_603_, lean_object* v___y_604_){
_start:
{
lean_object* v_toApplicative_605_; lean_object* v_toBind_606_; lean_object* v_toPure_607_; lean_object* v___f_608_; lean_object* v___x_609_; 
v_toApplicative_605_ = lean_ctor_get(v_inst_600_, 0);
lean_inc_ref(v_toApplicative_605_);
v_toBind_606_ = lean_ctor_get(v_inst_600_, 1);
lean_inc(v_toBind_606_);
lean_dec_ref(v_inst_600_);
v_toPure_607_ = lean_ctor_get(v_toApplicative_605_, 1);
lean_inc(v_toPure_607_);
lean_dec_ref(v_toApplicative_605_);
v___f_608_ = lean_alloc_closure((void*)(l_ExceptT_instMonad___redArg___lam__0), 3, 2);
lean_closure_set(v___f_608_, 0, v_toPure_607_);
lean_closure_set(v___f_608_, 1, v___y_603_);
v___x_609_ = lean_apply_4(v_toBind_606_, lean_box(0), lean_box(0), v___y_604_, v___f_608_);
return v___x_609_;
}
}
LEAN_EXPORT lean_object* l_ExceptT_instMonad___redArg___lam__2(lean_object* v_toPure_610_, lean_object* v_y_611_, lean_object* v_a_612_){
_start:
{
if (lean_obj_tag(v_a_612_) == 0)
{
lean_object* v_a_613_; lean_object* v___x_615_; uint8_t v_isShared_616_; uint8_t v_isSharedCheck_621_; 
lean_dec(v_y_611_);
v_a_613_ = lean_ctor_get(v_a_612_, 0);
v_isSharedCheck_621_ = !lean_is_exclusive(v_a_612_);
if (v_isSharedCheck_621_ == 0)
{
v___x_615_ = v_a_612_;
v_isShared_616_ = v_isSharedCheck_621_;
goto v_resetjp_614_;
}
else
{
lean_inc(v_a_613_);
lean_dec(v_a_612_);
v___x_615_ = lean_box(0);
v_isShared_616_ = v_isSharedCheck_621_;
goto v_resetjp_614_;
}
v_resetjp_614_:
{
lean_object* v___x_618_; 
if (v_isShared_616_ == 0)
{
v___x_618_ = v___x_615_;
goto v_reusejp_617_;
}
else
{
lean_object* v_reuseFailAlloc_620_; 
v_reuseFailAlloc_620_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_620_, 0, v_a_613_);
v___x_618_ = v_reuseFailAlloc_620_;
goto v_reusejp_617_;
}
v_reusejp_617_:
{
lean_object* v___x_619_; 
v___x_619_ = lean_apply_2(v_toPure_610_, lean_box(0), v___x_618_);
return v___x_619_;
}
}
}
else
{
lean_object* v_a_622_; lean_object* v___x_624_; uint8_t v_isShared_625_; uint8_t v_isSharedCheck_631_; 
v_a_622_ = lean_ctor_get(v_a_612_, 0);
v_isSharedCheck_631_ = !lean_is_exclusive(v_a_612_);
if (v_isSharedCheck_631_ == 0)
{
v___x_624_ = v_a_612_;
v_isShared_625_ = v_isSharedCheck_631_;
goto v_resetjp_623_;
}
else
{
lean_inc(v_a_622_);
lean_dec(v_a_612_);
v___x_624_ = lean_box(0);
v_isShared_625_ = v_isSharedCheck_631_;
goto v_resetjp_623_;
}
v_resetjp_623_:
{
lean_object* v___x_626_; lean_object* v___x_628_; 
v___x_626_ = lean_apply_1(v_y_611_, v_a_622_);
if (v_isShared_625_ == 0)
{
lean_ctor_set(v___x_624_, 0, v___x_626_);
v___x_628_ = v___x_624_;
goto v_reusejp_627_;
}
else
{
lean_object* v_reuseFailAlloc_630_; 
v_reuseFailAlloc_630_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_630_, 0, v___x_626_);
v___x_628_ = v_reuseFailAlloc_630_;
goto v_reusejp_627_;
}
v_reusejp_627_:
{
lean_object* v___x_629_; 
v___x_629_ = lean_apply_2(v_toPure_610_, lean_box(0), v___x_628_);
return v___x_629_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_ExceptT_instMonad___redArg___lam__3(lean_object* v_toApplicative_632_, lean_object* v_x_633_, lean_object* v_toBind_634_, lean_object* v_y_635_){
_start:
{
lean_object* v_toPure_636_; lean_object* v___x_637_; lean_object* v___x_638_; lean_object* v___f_639_; lean_object* v___x_640_; 
v_toPure_636_ = lean_ctor_get(v_toApplicative_632_, 1);
lean_inc(v_toPure_636_);
lean_dec_ref(v_toApplicative_632_);
v___x_637_ = lean_box(0);
v___x_638_ = lean_apply_1(v_x_633_, v___x_637_);
v___f_639_ = lean_alloc_closure((void*)(l_ExceptT_instMonad___redArg___lam__2), 3, 2);
lean_closure_set(v___f_639_, 0, v_toPure_636_);
lean_closure_set(v___f_639_, 1, v_y_635_);
v___x_640_ = lean_apply_4(v_toBind_634_, lean_box(0), lean_box(0), v___x_638_, v___f_639_);
return v___x_640_;
}
}
LEAN_EXPORT lean_object* l_ExceptT_instMonad___redArg___lam__4(lean_object* v_inst_641_, lean_object* v_00_u03b1_642_, lean_object* v_00_u03b2_643_, lean_object* v_f_644_, lean_object* v_x_645_){
_start:
{
lean_object* v_toApplicative_646_; lean_object* v_toBind_647_; lean_object* v___f_648_; lean_object* v___x_649_; lean_object* v___x_650_; 
v_toApplicative_646_ = lean_ctor_get(v_inst_641_, 0);
v_toBind_647_ = lean_ctor_get(v_inst_641_, 1);
lean_inc_n(v_toBind_647_, 2);
lean_inc_ref(v_toApplicative_646_);
v___f_648_ = lean_alloc_closure((void*)(l_ExceptT_instMonad___redArg___lam__3), 4, 3);
lean_closure_set(v___f_648_, 0, v_toApplicative_646_);
lean_closure_set(v___f_648_, 1, v_x_645_);
lean_closure_set(v___f_648_, 2, v_toBind_647_);
v___x_649_ = lean_alloc_closure((void*)(l_ExceptT_bindCont), 7, 6);
lean_closure_set(v___x_649_, 0, lean_box(0));
lean_closure_set(v___x_649_, 1, lean_box(0));
lean_closure_set(v___x_649_, 2, v_inst_641_);
lean_closure_set(v___x_649_, 3, lean_box(0));
lean_closure_set(v___x_649_, 4, lean_box(0));
lean_closure_set(v___x_649_, 5, v___f_648_);
v___x_650_ = lean_apply_4(v_toBind_647_, lean_box(0), lean_box(0), v_f_644_, v___x_649_);
return v___x_650_;
}
}
LEAN_EXPORT lean_object* l_ExceptT_instMonad___redArg___lam__5(lean_object* v_toApplicative_651_, lean_object* v_a_652_, lean_object* v_x_653_){
_start:
{
lean_object* v_toPure_654_; lean_object* v___x_655_; lean_object* v___x_656_; 
v_toPure_654_ = lean_ctor_get(v_toApplicative_651_, 1);
lean_inc(v_toPure_654_);
lean_dec_ref(v_toApplicative_651_);
v___x_655_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_655_, 0, v_a_652_);
v___x_656_ = lean_apply_2(v_toPure_654_, lean_box(0), v___x_655_);
return v___x_656_;
}
}
LEAN_EXPORT lean_object* l_ExceptT_instMonad___redArg___lam__5___boxed(lean_object* v_toApplicative_657_, lean_object* v_a_658_, lean_object* v_x_659_){
_start:
{
lean_object* v_res_660_; 
v_res_660_ = l_ExceptT_instMonad___redArg___lam__5(v_toApplicative_657_, v_a_658_, v_x_659_);
lean_dec(v_x_659_);
return v_res_660_;
}
}
LEAN_EXPORT lean_object* l_ExceptT_instMonad___redArg___lam__6(lean_object* v_toApplicative_661_, lean_object* v_y_662_, lean_object* v_inst_663_, lean_object* v_toBind_664_, lean_object* v_a_665_){
_start:
{
lean_object* v___f_666_; lean_object* v___x_667_; lean_object* v___x_668_; lean_object* v___x_669_; lean_object* v___x_670_; 
v___f_666_ = lean_alloc_closure((void*)(l_ExceptT_instMonad___redArg___lam__5___boxed), 3, 2);
lean_closure_set(v___f_666_, 0, v_toApplicative_661_);
lean_closure_set(v___f_666_, 1, v_a_665_);
v___x_667_ = lean_box(0);
v___x_668_ = lean_apply_1(v_y_662_, v___x_667_);
v___x_669_ = lean_alloc_closure((void*)(l_ExceptT_bindCont), 7, 6);
lean_closure_set(v___x_669_, 0, lean_box(0));
lean_closure_set(v___x_669_, 1, lean_box(0));
lean_closure_set(v___x_669_, 2, v_inst_663_);
lean_closure_set(v___x_669_, 3, lean_box(0));
lean_closure_set(v___x_669_, 4, lean_box(0));
lean_closure_set(v___x_669_, 5, v___f_666_);
v___x_670_ = lean_apply_4(v_toBind_664_, lean_box(0), lean_box(0), v___x_668_, v___x_669_);
return v___x_670_;
}
}
LEAN_EXPORT lean_object* l_ExceptT_instMonad___redArg___lam__7(lean_object* v_inst_671_, lean_object* v_00_u03b1_672_, lean_object* v_00_u03b2_673_, lean_object* v_x_674_, lean_object* v_y_675_){
_start:
{
lean_object* v_toApplicative_676_; lean_object* v_toBind_677_; lean_object* v___f_678_; lean_object* v___x_679_; lean_object* v___x_680_; 
v_toApplicative_676_ = lean_ctor_get(v_inst_671_, 0);
v_toBind_677_ = lean_ctor_get(v_inst_671_, 1);
lean_inc_n(v_toBind_677_, 2);
lean_inc_ref(v_inst_671_);
lean_inc_ref(v_toApplicative_676_);
v___f_678_ = lean_alloc_closure((void*)(l_ExceptT_instMonad___redArg___lam__6), 5, 4);
lean_closure_set(v___f_678_, 0, v_toApplicative_676_);
lean_closure_set(v___f_678_, 1, v_y_675_);
lean_closure_set(v___f_678_, 2, v_inst_671_);
lean_closure_set(v___f_678_, 3, v_toBind_677_);
v___x_679_ = lean_alloc_closure((void*)(l_ExceptT_bindCont), 7, 6);
lean_closure_set(v___x_679_, 0, lean_box(0));
lean_closure_set(v___x_679_, 1, lean_box(0));
lean_closure_set(v___x_679_, 2, v_inst_671_);
lean_closure_set(v___x_679_, 3, lean_box(0));
lean_closure_set(v___x_679_, 4, lean_box(0));
lean_closure_set(v___x_679_, 5, v___f_678_);
v___x_680_ = lean_apply_4(v_toBind_677_, lean_box(0), lean_box(0), v_x_674_, v___x_679_);
return v___x_680_;
}
}
LEAN_EXPORT lean_object* l_ExceptT_instMonad___redArg___lam__8(lean_object* v_y_681_, lean_object* v_x_682_){
_start:
{
lean_object* v___x_683_; lean_object* v___x_684_; 
v___x_683_ = lean_box(0);
v___x_684_ = lean_apply_1(v_y_681_, v___x_683_);
return v___x_684_;
}
}
LEAN_EXPORT lean_object* l_ExceptT_instMonad___redArg___lam__8___boxed(lean_object* v_y_685_, lean_object* v_x_686_){
_start:
{
lean_object* v_res_687_; 
v_res_687_ = l_ExceptT_instMonad___redArg___lam__8(v_y_685_, v_x_686_);
lean_dec(v_x_686_);
return v_res_687_;
}
}
LEAN_EXPORT lean_object* l_ExceptT_instMonad___redArg___lam__9(lean_object* v_inst_688_, lean_object* v_00_u03b1_689_, lean_object* v_00_u03b2_690_, lean_object* v_x_691_, lean_object* v_y_692_){
_start:
{
lean_object* v_toBind_693_; lean_object* v___f_694_; lean_object* v___x_695_; lean_object* v___x_696_; 
v_toBind_693_ = lean_ctor_get(v_inst_688_, 1);
lean_inc(v_toBind_693_);
v___f_694_ = lean_alloc_closure((void*)(l_ExceptT_instMonad___redArg___lam__8___boxed), 2, 1);
lean_closure_set(v___f_694_, 0, v_y_692_);
v___x_695_ = lean_alloc_closure((void*)(l_ExceptT_bindCont), 7, 6);
lean_closure_set(v___x_695_, 0, lean_box(0));
lean_closure_set(v___x_695_, 1, lean_box(0));
lean_closure_set(v___x_695_, 2, v_inst_688_);
lean_closure_set(v___x_695_, 3, lean_box(0));
lean_closure_set(v___x_695_, 4, lean_box(0));
lean_closure_set(v___x_695_, 5, v___f_694_);
v___x_696_ = lean_apply_4(v_toBind_693_, lean_box(0), lean_box(0), v_x_691_, v___x_695_);
return v___x_696_;
}
}
LEAN_EXPORT lean_object* l_ExceptT_instMonad___redArg(lean_object* v_inst_697_){
_start:
{
lean_object* v___f_698_; lean_object* v___f_699_; lean_object* v___f_700_; lean_object* v___f_701_; lean_object* v___x_702_; lean_object* v___x_703_; lean_object* v___x_704_; lean_object* v___x_705_; lean_object* v___x_706_; lean_object* v___x_707_; 
lean_inc_ref_n(v_inst_697_, 6);
v___f_698_ = lean_alloc_closure((void*)(l_ExceptT_instMonad___redArg___lam__1), 5, 1);
lean_closure_set(v___f_698_, 0, v_inst_697_);
v___f_699_ = lean_alloc_closure((void*)(l_ExceptT_instMonad___redArg___lam__4), 5, 1);
lean_closure_set(v___f_699_, 0, v_inst_697_);
v___f_700_ = lean_alloc_closure((void*)(l_ExceptT_instMonad___redArg___lam__7), 5, 1);
lean_closure_set(v___f_700_, 0, v_inst_697_);
v___f_701_ = lean_alloc_closure((void*)(l_ExceptT_instMonad___redArg___lam__9), 5, 1);
lean_closure_set(v___f_701_, 0, v_inst_697_);
v___x_702_ = lean_alloc_closure((void*)(l_ExceptT_map), 7, 3);
lean_closure_set(v___x_702_, 0, lean_box(0));
lean_closure_set(v___x_702_, 1, lean_box(0));
lean_closure_set(v___x_702_, 2, v_inst_697_);
v___x_703_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_703_, 0, v___x_702_);
lean_ctor_set(v___x_703_, 1, v___f_698_);
v___x_704_ = lean_alloc_closure((void*)(l_ExceptT_pure), 5, 3);
lean_closure_set(v___x_704_, 0, lean_box(0));
lean_closure_set(v___x_704_, 1, lean_box(0));
lean_closure_set(v___x_704_, 2, v_inst_697_);
v___x_705_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_705_, 0, v___x_703_);
lean_ctor_set(v___x_705_, 1, v___x_704_);
lean_ctor_set(v___x_705_, 2, v___f_699_);
lean_ctor_set(v___x_705_, 3, v___f_700_);
lean_ctor_set(v___x_705_, 4, v___f_701_);
v___x_706_ = lean_alloc_closure((void*)(l_ExceptT_bind), 7, 3);
lean_closure_set(v___x_706_, 0, lean_box(0));
lean_closure_set(v___x_706_, 1, lean_box(0));
lean_closure_set(v___x_706_, 2, v_inst_697_);
v___x_707_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_707_, 0, v___x_705_);
lean_ctor_set(v___x_707_, 1, v___x_706_);
return v___x_707_;
}
}
LEAN_EXPORT lean_object* l_ExceptT_instMonad(lean_object* v_00_u03b5_708_, lean_object* v_m_709_, lean_object* v_inst_710_){
_start:
{
lean_object* v___f_711_; lean_object* v___f_712_; lean_object* v___f_713_; lean_object* v___f_714_; lean_object* v___x_715_; lean_object* v___x_716_; lean_object* v___x_717_; lean_object* v___x_718_; lean_object* v___x_719_; lean_object* v___x_720_; 
lean_inc_ref_n(v_inst_710_, 6);
v___f_711_ = lean_alloc_closure((void*)(l_ExceptT_instMonad___redArg___lam__1), 5, 1);
lean_closure_set(v___f_711_, 0, v_inst_710_);
v___f_712_ = lean_alloc_closure((void*)(l_ExceptT_instMonad___redArg___lam__4), 5, 1);
lean_closure_set(v___f_712_, 0, v_inst_710_);
v___f_713_ = lean_alloc_closure((void*)(l_ExceptT_instMonad___redArg___lam__7), 5, 1);
lean_closure_set(v___f_713_, 0, v_inst_710_);
v___f_714_ = lean_alloc_closure((void*)(l_ExceptT_instMonad___redArg___lam__9), 5, 1);
lean_closure_set(v___f_714_, 0, v_inst_710_);
v___x_715_ = lean_alloc_closure((void*)(l_ExceptT_map), 7, 3);
lean_closure_set(v___x_715_, 0, lean_box(0));
lean_closure_set(v___x_715_, 1, lean_box(0));
lean_closure_set(v___x_715_, 2, v_inst_710_);
v___x_716_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_716_, 0, v___x_715_);
lean_ctor_set(v___x_716_, 1, v___f_711_);
v___x_717_ = lean_alloc_closure((void*)(l_ExceptT_pure), 5, 3);
lean_closure_set(v___x_717_, 0, lean_box(0));
lean_closure_set(v___x_717_, 1, lean_box(0));
lean_closure_set(v___x_717_, 2, v_inst_710_);
v___x_718_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_718_, 0, v___x_716_);
lean_ctor_set(v___x_718_, 1, v___x_717_);
lean_ctor_set(v___x_718_, 2, v___f_712_);
lean_ctor_set(v___x_718_, 3, v___f_713_);
lean_ctor_set(v___x_718_, 4, v___f_714_);
v___x_719_ = lean_alloc_closure((void*)(l_ExceptT_bind), 7, 3);
lean_closure_set(v___x_719_, 0, lean_box(0));
lean_closure_set(v___x_719_, 1, lean_box(0));
lean_closure_set(v___x_719_, 2, v_inst_710_);
v___x_720_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_720_, 0, v___x_718_);
lean_ctor_set(v___x_720_, 1, v___x_719_);
return v___x_720_;
}
}
LEAN_EXPORT lean_object* l_ExceptT_adapt___redArg(lean_object* v_inst_721_, lean_object* v_f_722_, lean_object* v_x_723_){
_start:
{
lean_object* v_toApplicative_724_; lean_object* v_toFunctor_725_; lean_object* v_map_726_; lean_object* v___x_727_; lean_object* v___x_728_; 
v_toApplicative_724_ = lean_ctor_get(v_inst_721_, 0);
lean_inc_ref(v_toApplicative_724_);
lean_dec_ref(v_inst_721_);
v_toFunctor_725_ = lean_ctor_get(v_toApplicative_724_, 0);
lean_inc_ref(v_toFunctor_725_);
lean_dec_ref(v_toApplicative_724_);
v_map_726_ = lean_ctor_get(v_toFunctor_725_, 0);
lean_inc(v_map_726_);
lean_dec_ref(v_toFunctor_725_);
v___x_727_ = lean_alloc_closure((void*)(l_Except_mapError), 5, 4);
lean_closure_set(v___x_727_, 0, lean_box(0));
lean_closure_set(v___x_727_, 1, lean_box(0));
lean_closure_set(v___x_727_, 2, lean_box(0));
lean_closure_set(v___x_727_, 3, v_f_722_);
v___x_728_ = lean_apply_4(v_map_726_, lean_box(0), lean_box(0), v___x_727_, v_x_723_);
return v___x_728_;
}
}
LEAN_EXPORT lean_object* l_ExceptT_adapt(lean_object* v_00_u03b5_729_, lean_object* v_m_730_, lean_object* v_inst_731_, lean_object* v_00_u03b5_x27_732_, lean_object* v_00_u03b1_733_, lean_object* v_f_734_, lean_object* v_x_735_){
_start:
{
lean_object* v_toApplicative_736_; lean_object* v_toFunctor_737_; lean_object* v_map_738_; lean_object* v___x_739_; lean_object* v___x_740_; 
v_toApplicative_736_ = lean_ctor_get(v_inst_731_, 0);
lean_inc_ref(v_toApplicative_736_);
lean_dec_ref(v_inst_731_);
v_toFunctor_737_ = lean_ctor_get(v_toApplicative_736_, 0);
lean_inc_ref(v_toFunctor_737_);
lean_dec_ref(v_toApplicative_736_);
v_map_738_ = lean_ctor_get(v_toFunctor_737_, 0);
lean_inc(v_map_738_);
lean_dec_ref(v_toFunctor_737_);
v___x_739_ = lean_alloc_closure((void*)(l_Except_mapError), 5, 4);
lean_closure_set(v___x_739_, 0, lean_box(0));
lean_closure_set(v___x_739_, 1, lean_box(0));
lean_closure_set(v___x_739_, 2, lean_box(0));
lean_closure_set(v___x_739_, 3, v_f_734_);
v___x_740_ = lean_apply_4(v_map_738_, lean_box(0), lean_box(0), v___x_739_, v_x_735_);
return v___x_740_;
}
}
LEAN_EXPORT lean_object* l_instMonadExceptOfExceptT___redArg___lam__0(lean_object* v_inst_741_, lean_object* v_00_u03b1_742_, lean_object* v_e_743_){
_start:
{
lean_object* v_throw_744_; lean_object* v___x_745_; 
v_throw_744_ = lean_ctor_get(v_inst_741_, 0);
lean_inc(v_throw_744_);
lean_dec_ref(v_inst_741_);
v___x_745_ = lean_apply_2(v_throw_744_, lean_box(0), v_e_743_);
return v___x_745_;
}
}
LEAN_EXPORT lean_object* l_instMonadExceptOfExceptT___redArg___lam__1(lean_object* v_handle_746_, lean_object* v_e_747_){
_start:
{
lean_object* v___x_748_; 
v___x_748_ = lean_apply_1(v_handle_746_, v_e_747_);
return v___x_748_;
}
}
LEAN_EXPORT lean_object* l_instMonadExceptOfExceptT___redArg___lam__2(lean_object* v_inst_749_, lean_object* v_00_u03b1_750_, lean_object* v_x_751_, lean_object* v_handle_752_){
_start:
{
lean_object* v_tryCatch_753_; lean_object* v___f_754_; lean_object* v___x_755_; 
v_tryCatch_753_ = lean_ctor_get(v_inst_749_, 1);
lean_inc(v_tryCatch_753_);
lean_dec_ref(v_inst_749_);
v___f_754_ = lean_alloc_closure((void*)(l_instMonadExceptOfExceptT___redArg___lam__1), 2, 1);
lean_closure_set(v___f_754_, 0, v_handle_752_);
v___x_755_ = lean_apply_3(v_tryCatch_753_, lean_box(0), v_x_751_, v___f_754_);
return v___x_755_;
}
}
LEAN_EXPORT lean_object* l_instMonadExceptOfExceptT___redArg(lean_object* v_inst_756_){
_start:
{
lean_object* v___f_757_; lean_object* v___f_758_; lean_object* v___x_759_; 
lean_inc_ref(v_inst_756_);
v___f_757_ = lean_alloc_closure((void*)(l_instMonadExceptOfExceptT___redArg___lam__0), 3, 1);
lean_closure_set(v___f_757_, 0, v_inst_756_);
v___f_758_ = lean_alloc_closure((void*)(l_instMonadExceptOfExceptT___redArg___lam__2), 4, 1);
lean_closure_set(v___f_758_, 0, v_inst_756_);
v___x_759_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_759_, 0, v___f_757_);
lean_ctor_set(v___x_759_, 1, v___f_758_);
return v___x_759_;
}
}
LEAN_EXPORT lean_object* l_instMonadExceptOfExceptT(lean_object* v_m_760_, lean_object* v_00_u03b5_u2081_761_, lean_object* v_00_u03b5_u2082_762_, lean_object* v_inst_763_){
_start:
{
lean_object* v___f_764_; lean_object* v___f_765_; lean_object* v___x_766_; 
lean_inc_ref(v_inst_763_);
v___f_764_ = lean_alloc_closure((void*)(l_instMonadExceptOfExceptT___redArg___lam__0), 3, 1);
lean_closure_set(v___f_764_, 0, v_inst_763_);
v___f_765_ = lean_alloc_closure((void*)(l_instMonadExceptOfExceptT___redArg___lam__2), 4, 1);
lean_closure_set(v___f_765_, 0, v_inst_763_);
v___x_766_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_766_, 0, v___f_764_);
lean_ctor_set(v___x_766_, 1, v___f_765_);
return v___x_766_;
}
}
LEAN_EXPORT lean_object* l_instMonadExceptOfExceptTOfMonad___redArg___lam__0(lean_object* v_toPure_767_, lean_object* v_00_u03b1_768_, lean_object* v_e_769_){
_start:
{
lean_object* v___x_770_; lean_object* v___x_771_; 
v___x_770_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_770_, 0, v_e_769_);
v___x_771_ = lean_apply_2(v_toPure_767_, lean_box(0), v___x_770_);
return v___x_771_;
}
}
LEAN_EXPORT lean_object* l_instMonadExceptOfExceptTOfMonad___redArg(lean_object* v_inst_772_){
_start:
{
lean_object* v_toApplicative_773_; lean_object* v_toPure_774_; lean_object* v___f_775_; lean_object* v___x_776_; lean_object* v___x_777_; 
v_toApplicative_773_ = lean_ctor_get(v_inst_772_, 0);
v_toPure_774_ = lean_ctor_get(v_toApplicative_773_, 1);
lean_inc(v_toPure_774_);
v___f_775_ = lean_alloc_closure((void*)(l_instMonadExceptOfExceptTOfMonad___redArg___lam__0), 3, 1);
lean_closure_set(v___f_775_, 0, v_toPure_774_);
v___x_776_ = lean_alloc_closure((void*)(l_ExceptT_tryCatch), 6, 3);
lean_closure_set(v___x_776_, 0, lean_box(0));
lean_closure_set(v___x_776_, 1, lean_box(0));
lean_closure_set(v___x_776_, 2, v_inst_772_);
v___x_777_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_777_, 0, v___f_775_);
lean_ctor_set(v___x_777_, 1, v___x_776_);
return v___x_777_;
}
}
LEAN_EXPORT lean_object* l_instMonadExceptOfExceptTOfMonad(lean_object* v_m_778_, lean_object* v_00_u03b5_779_, lean_object* v_inst_780_){
_start:
{
lean_object* v_toApplicative_781_; lean_object* v_toPure_782_; lean_object* v___f_783_; lean_object* v___x_784_; lean_object* v___x_785_; 
v_toApplicative_781_ = lean_ctor_get(v_inst_780_, 0);
v_toPure_782_ = lean_ctor_get(v_toApplicative_781_, 1);
lean_inc(v_toPure_782_);
v___f_783_ = lean_alloc_closure((void*)(l_instMonadExceptOfExceptTOfMonad___redArg___lam__0), 3, 1);
lean_closure_set(v___f_783_, 0, v_toPure_782_);
v___x_784_ = lean_alloc_closure((void*)(l_ExceptT_tryCatch), 6, 3);
lean_closure_set(v___x_784_, 0, lean_box(0));
lean_closure_set(v___x_784_, 1, lean_box(0));
lean_closure_set(v___x_784_, 2, v_inst_780_);
v___x_785_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_785_, 0, v___f_783_);
lean_ctor_set(v___x_785_, 1, v___x_784_);
return v___x_785_;
}
}
LEAN_EXPORT lean_object* l_instInhabitedExceptTOfMonad___redArg(lean_object* v_inst_786_, lean_object* v_inst_787_){
_start:
{
lean_object* v_toApplicative_788_; lean_object* v_toPure_789_; lean_object* v___x_790_; lean_object* v___x_791_; 
v_toApplicative_788_ = lean_ctor_get(v_inst_786_, 0);
lean_inc_ref(v_toApplicative_788_);
lean_dec_ref(v_inst_786_);
v_toPure_789_ = lean_ctor_get(v_toApplicative_788_, 1);
lean_inc(v_toPure_789_);
lean_dec_ref(v_toApplicative_788_);
v___x_790_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_790_, 0, v_inst_787_);
v___x_791_ = lean_apply_2(v_toPure_789_, lean_box(0), v___x_790_);
return v___x_791_;
}
}
LEAN_EXPORT lean_object* l_instInhabitedExceptTOfMonad(lean_object* v_m_792_, lean_object* v_00_u03b5_793_, lean_object* v_00_u03b1_794_, lean_object* v_inst_795_, lean_object* v_inst_796_){
_start:
{
lean_object* v___x_797_; 
v___x_797_ = l_instInhabitedExceptTOfMonad___redArg(v_inst_795_, v_inst_796_);
return v___x_797_;
}
}
LEAN_EXPORT lean_object* l_instMonadExceptOfExcept___redArg___lam__0(lean_object* v_00_u03b1_798_, lean_object* v___y_799_){
_start:
{
lean_object* v___x_800_; 
v___x_800_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_800_, 0, v___y_799_);
return v___x_800_;
}
}
LEAN_EXPORT lean_object* l_instMonadExceptOfExcept___redArg(){
_start:
{
lean_object* v___x_807_; 
v___x_807_ = ((lean_object*)(l_instMonadExceptOfExcept___redArg___closed__2));
return v___x_807_;
}
}
LEAN_EXPORT lean_object* l_instMonadExceptOfExcept___redArg___boxed(lean_object* v___dummy_808_){
_start:
{
lean_object* v_res_809_; 
v_res_809_ = l_instMonadExceptOfExcept___redArg();
return v_res_809_;
}
}
static lean_object* _init_l_instMonadExceptOfExcept___closed__0(void){
_start:
{
lean_object* v___x_810_; 
v___x_810_ = l_instMonadExceptOfExcept___redArg();
return v___x_810_;
}
}
LEAN_EXPORT lean_object* l_instMonadExceptOfExcept(lean_object* v_00_u03b5_811_){
_start:
{
lean_object* v___x_812_; 
v___x_812_ = lean_obj_once(&l_instMonadExceptOfExcept___closed__0, &l_instMonadExceptOfExcept___closed__0_once, _init_l_instMonadExceptOfExcept___closed__0);
return v___x_812_;
}
}
LEAN_EXPORT lean_object* l_MonadExcept_orelse_x27___redArg___lam__0(uint8_t v_useFirstEx_813_, lean_object* v_throw_814_, lean_object* v_e_u2081_815_, lean_object* v_e_u2082_816_){
_start:
{
if (v_useFirstEx_813_ == 0)
{
lean_object* v___x_817_; 
lean_dec(v_e_u2081_815_);
v___x_817_ = lean_apply_2(v_throw_814_, lean_box(0), v_e_u2082_816_);
return v___x_817_;
}
else
{
lean_object* v___x_818_; 
lean_dec(v_e_u2082_816_);
v___x_818_ = lean_apply_2(v_throw_814_, lean_box(0), v_e_u2081_815_);
return v___x_818_;
}
}
}
LEAN_EXPORT lean_object* l_MonadExcept_orelse_x27___redArg___lam__0___boxed(lean_object* v_useFirstEx_819_, lean_object* v_throw_820_, lean_object* v_e_u2081_821_, lean_object* v_e_u2082_822_){
_start:
{
uint8_t v_useFirstEx_boxed_823_; lean_object* v_res_824_; 
v_useFirstEx_boxed_823_ = lean_unbox(v_useFirstEx_819_);
v_res_824_ = l_MonadExcept_orelse_x27___redArg___lam__0(v_useFirstEx_boxed_823_, v_throw_820_, v_e_u2081_821_, v_e_u2082_822_);
return v_res_824_;
}
}
LEAN_EXPORT lean_object* l_MonadExcept_orelse_x27___redArg___lam__1(uint8_t v_useFirstEx_825_, lean_object* v_throw_826_, lean_object* v_tryCatch_827_, lean_object* v_t_u2082_828_, lean_object* v_e_u2081_829_){
_start:
{
lean_object* v___x_830_; lean_object* v___f_831_; lean_object* v___x_832_; 
v___x_830_ = lean_box(v_useFirstEx_825_);
v___f_831_ = lean_alloc_closure((void*)(l_MonadExcept_orelse_x27___redArg___lam__0___boxed), 4, 3);
lean_closure_set(v___f_831_, 0, v___x_830_);
lean_closure_set(v___f_831_, 1, v_throw_826_);
lean_closure_set(v___f_831_, 2, v_e_u2081_829_);
v___x_832_ = lean_apply_3(v_tryCatch_827_, lean_box(0), v_t_u2082_828_, v___f_831_);
return v___x_832_;
}
}
LEAN_EXPORT lean_object* l_MonadExcept_orelse_x27___redArg___lam__1___boxed(lean_object* v_useFirstEx_833_, lean_object* v_throw_834_, lean_object* v_tryCatch_835_, lean_object* v_t_u2082_836_, lean_object* v_e_u2081_837_){
_start:
{
uint8_t v_useFirstEx_boxed_838_; lean_object* v_res_839_; 
v_useFirstEx_boxed_838_ = lean_unbox(v_useFirstEx_833_);
v_res_839_ = l_MonadExcept_orelse_x27___redArg___lam__1(v_useFirstEx_boxed_838_, v_throw_834_, v_tryCatch_835_, v_t_u2082_836_, v_e_u2081_837_);
return v_res_839_;
}
}
LEAN_EXPORT lean_object* l_MonadExcept_orelse_x27___redArg(lean_object* v_inst_840_, lean_object* v_t_u2081_841_, lean_object* v_t_u2082_842_, uint8_t v_useFirstEx_843_){
_start:
{
lean_object* v_throw_844_; lean_object* v_tryCatch_845_; lean_object* v___x_846_; lean_object* v___f_847_; lean_object* v___x_848_; 
v_throw_844_ = lean_ctor_get(v_inst_840_, 0);
lean_inc(v_throw_844_);
v_tryCatch_845_ = lean_ctor_get(v_inst_840_, 1);
lean_inc_n(v_tryCatch_845_, 2);
lean_dec_ref(v_inst_840_);
v___x_846_ = lean_box(v_useFirstEx_843_);
v___f_847_ = lean_alloc_closure((void*)(l_MonadExcept_orelse_x27___redArg___lam__1___boxed), 5, 4);
lean_closure_set(v___f_847_, 0, v___x_846_);
lean_closure_set(v___f_847_, 1, v_throw_844_);
lean_closure_set(v___f_847_, 2, v_tryCatch_845_);
lean_closure_set(v___f_847_, 3, v_t_u2082_842_);
v___x_848_ = lean_apply_3(v_tryCatch_845_, lean_box(0), v_t_u2081_841_, v___f_847_);
return v___x_848_;
}
}
LEAN_EXPORT lean_object* l_MonadExcept_orelse_x27___redArg___boxed(lean_object* v_inst_849_, lean_object* v_t_u2081_850_, lean_object* v_t_u2082_851_, lean_object* v_useFirstEx_852_){
_start:
{
uint8_t v_useFirstEx_boxed_853_; lean_object* v_res_854_; 
v_useFirstEx_boxed_853_ = lean_unbox(v_useFirstEx_852_);
v_res_854_ = l_MonadExcept_orelse_x27___redArg(v_inst_849_, v_t_u2081_850_, v_t_u2082_851_, v_useFirstEx_boxed_853_);
return v_res_854_;
}
}
LEAN_EXPORT lean_object* l_MonadExcept_orelse_x27(lean_object* v_00_u03b5_855_, lean_object* v_m_856_, lean_object* v_inst_857_, lean_object* v_00_u03b1_858_, lean_object* v_t_u2081_859_, lean_object* v_t_u2082_860_, uint8_t v_useFirstEx_861_){
_start:
{
lean_object* v_throw_862_; lean_object* v_tryCatch_863_; lean_object* v___x_864_; lean_object* v___f_865_; lean_object* v___x_866_; 
v_throw_862_ = lean_ctor_get(v_inst_857_, 0);
lean_inc(v_throw_862_);
v_tryCatch_863_ = lean_ctor_get(v_inst_857_, 1);
lean_inc_n(v_tryCatch_863_, 2);
lean_dec_ref(v_inst_857_);
v___x_864_ = lean_box(v_useFirstEx_861_);
v___f_865_ = lean_alloc_closure((void*)(l_MonadExcept_orelse_x27___redArg___lam__1___boxed), 5, 4);
lean_closure_set(v___f_865_, 0, v___x_864_);
lean_closure_set(v___f_865_, 1, v_throw_862_);
lean_closure_set(v___f_865_, 2, v_tryCatch_863_);
lean_closure_set(v___f_865_, 3, v_t_u2082_860_);
v___x_866_ = lean_apply_3(v_tryCatch_863_, lean_box(0), v_t_u2081_859_, v___f_865_);
return v___x_866_;
}
}
LEAN_EXPORT lean_object* l_MonadExcept_orelse_x27___boxed(lean_object* v_00_u03b5_867_, lean_object* v_m_868_, lean_object* v_inst_869_, lean_object* v_00_u03b1_870_, lean_object* v_t_u2081_871_, lean_object* v_t_u2082_872_, lean_object* v_useFirstEx_873_){
_start:
{
uint8_t v_useFirstEx_boxed_874_; lean_object* v_res_875_; 
v_useFirstEx_boxed_874_ = lean_unbox(v_useFirstEx_873_);
v_res_875_ = l_MonadExcept_orelse_x27(v_00_u03b5_867_, v_m_868_, v_inst_869_, v_00_u03b1_870_, v_t_u2081_871_, v_t_u2082_872_, v_useFirstEx_boxed_874_);
return v_res_875_;
}
}
LEAN_EXPORT lean_object* l_observing___redArg___lam__0(lean_object* v_toPure_876_, lean_object* v_a_877_){
_start:
{
lean_object* v___x_878_; lean_object* v___x_879_; 
v___x_878_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_878_, 0, v_a_877_);
v___x_879_ = lean_apply_2(v_toPure_876_, lean_box(0), v___x_878_);
return v___x_879_;
}
}
LEAN_EXPORT lean_object* l_observing___redArg___lam__1(lean_object* v_toPure_880_, lean_object* v_ex_881_){
_start:
{
lean_object* v___x_882_; lean_object* v___x_883_; 
v___x_882_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_882_, 0, v_ex_881_);
v___x_883_ = lean_apply_2(v_toPure_880_, lean_box(0), v___x_882_);
return v___x_883_;
}
}
LEAN_EXPORT lean_object* l_observing___redArg(lean_object* v_inst_884_, lean_object* v_inst_885_, lean_object* v_x_886_){
_start:
{
lean_object* v_toApplicative_887_; lean_object* v_tryCatch_888_; lean_object* v_toBind_889_; lean_object* v_toPure_890_; lean_object* v___f_891_; lean_object* v___f_892_; lean_object* v___x_893_; lean_object* v___x_894_; 
v_toApplicative_887_ = lean_ctor_get(v_inst_884_, 0);
lean_inc_ref(v_toApplicative_887_);
v_tryCatch_888_ = lean_ctor_get(v_inst_885_, 1);
lean_inc(v_tryCatch_888_);
lean_dec_ref(v_inst_885_);
v_toBind_889_ = lean_ctor_get(v_inst_884_, 1);
lean_inc(v_toBind_889_);
lean_dec_ref(v_inst_884_);
v_toPure_890_ = lean_ctor_get(v_toApplicative_887_, 1);
lean_inc_n(v_toPure_890_, 2);
lean_dec_ref(v_toApplicative_887_);
v___f_891_ = lean_alloc_closure((void*)(l_observing___redArg___lam__0), 2, 1);
lean_closure_set(v___f_891_, 0, v_toPure_890_);
v___f_892_ = lean_alloc_closure((void*)(l_observing___redArg___lam__1), 2, 1);
lean_closure_set(v___f_892_, 0, v_toPure_890_);
v___x_893_ = lean_apply_4(v_toBind_889_, lean_box(0), lean_box(0), v_x_886_, v___f_891_);
v___x_894_ = lean_apply_3(v_tryCatch_888_, lean_box(0), v___x_893_, v___f_892_);
return v___x_894_;
}
}
LEAN_EXPORT lean_object* l_observing(lean_object* v_00_u03b5_895_, lean_object* v_00_u03b1_896_, lean_object* v_m_897_, lean_object* v_inst_898_, lean_object* v_inst_899_, lean_object* v_x_900_){
_start:
{
lean_object* v_toApplicative_901_; lean_object* v_tryCatch_902_; lean_object* v_toBind_903_; lean_object* v_toPure_904_; lean_object* v___f_905_; lean_object* v___f_906_; lean_object* v___x_907_; lean_object* v___x_908_; 
v_toApplicative_901_ = lean_ctor_get(v_inst_898_, 0);
lean_inc_ref(v_toApplicative_901_);
v_tryCatch_902_ = lean_ctor_get(v_inst_899_, 1);
lean_inc(v_tryCatch_902_);
lean_dec_ref(v_inst_899_);
v_toBind_903_ = lean_ctor_get(v_inst_898_, 1);
lean_inc(v_toBind_903_);
lean_dec_ref(v_inst_898_);
v_toPure_904_ = lean_ctor_get(v_toApplicative_901_, 1);
lean_inc_n(v_toPure_904_, 2);
lean_dec_ref(v_toApplicative_901_);
v___f_905_ = lean_alloc_closure((void*)(l_observing___redArg___lam__0), 2, 1);
lean_closure_set(v___f_905_, 0, v_toPure_904_);
v___f_906_ = lean_alloc_closure((void*)(l_observing___redArg___lam__1), 2, 1);
lean_closure_set(v___f_906_, 0, v_toPure_904_);
v___x_907_ = lean_apply_4(v_toBind_903_, lean_box(0), lean_box(0), v_x_900_, v___f_905_);
v___x_908_ = lean_apply_3(v_tryCatch_902_, lean_box(0), v___x_907_, v___f_906_);
return v___x_908_;
}
}
LEAN_EXPORT lean_object* l_liftExcept___redArg(lean_object* v_inst_909_, lean_object* v_inst_910_, lean_object* v_x_911_){
_start:
{
if (lean_obj_tag(v_x_911_) == 0)
{
lean_object* v_a_912_; lean_object* v_throw_913_; lean_object* v___x_914_; 
lean_dec(v_inst_910_);
v_a_912_ = lean_ctor_get(v_x_911_, 0);
lean_inc(v_a_912_);
lean_dec_ref_known(v_x_911_, 1);
v_throw_913_ = lean_ctor_get(v_inst_909_, 0);
lean_inc(v_throw_913_);
lean_dec_ref(v_inst_909_);
v___x_914_ = lean_apply_2(v_throw_913_, lean_box(0), v_a_912_);
return v___x_914_;
}
else
{
lean_object* v_a_915_; lean_object* v___x_916_; 
lean_dec_ref(v_inst_909_);
v_a_915_ = lean_ctor_get(v_x_911_, 0);
lean_inc(v_a_915_);
lean_dec_ref_known(v_x_911_, 1);
v___x_916_ = lean_apply_2(v_inst_910_, lean_box(0), v_a_915_);
return v___x_916_;
}
}
}
LEAN_EXPORT lean_object* l_liftExcept(lean_object* v_00_u03b5_917_, lean_object* v_m_918_, lean_object* v_00_u03b1_919_, lean_object* v_inst_920_, lean_object* v_inst_921_, lean_object* v_x_922_){
_start:
{
lean_object* v___x_923_; 
v___x_923_ = l_liftExcept___redArg(v_inst_920_, v_inst_921_, v_x_922_);
return v___x_923_;
}
}
LEAN_EXPORT lean_object* l_instMonadControlExceptTOfMonad___redArg___lam__0(lean_object* v_00_u03b2_924_, lean_object* v_x_925_){
_start:
{
lean_inc(v_x_925_);
return v_x_925_;
}
}
LEAN_EXPORT lean_object* l_instMonadControlExceptTOfMonad___redArg___lam__0___boxed(lean_object* v_00_u03b2_926_, lean_object* v_x_927_){
_start:
{
lean_object* v_res_928_; 
v_res_928_ = l_instMonadControlExceptTOfMonad___redArg___lam__0(v_00_u03b2_926_, v_x_927_);
lean_dec(v_x_927_);
return v_res_928_;
}
}
LEAN_EXPORT lean_object* l_instMonadControlExceptTOfMonad___redArg___lam__2(lean_object* v_inst_929_, lean_object* v___f_930_, lean_object* v___f_931_, lean_object* v_00_u03b1_932_, lean_object* v_f_933_){
_start:
{
lean_object* v_toApplicative_934_; lean_object* v_toFunctor_935_; lean_object* v_map_936_; lean_object* v___x_937_; lean_object* v___x_938_; 
v_toApplicative_934_ = lean_ctor_get(v_inst_929_, 0);
lean_inc_ref(v_toApplicative_934_);
lean_dec_ref(v_inst_929_);
v_toFunctor_935_ = lean_ctor_get(v_toApplicative_934_, 0);
lean_inc_ref(v_toFunctor_935_);
lean_dec_ref(v_toApplicative_934_);
v_map_936_ = lean_ctor_get(v_toFunctor_935_, 0);
lean_inc(v_map_936_);
lean_dec_ref(v_toFunctor_935_);
v___x_937_ = lean_apply_1(v_f_933_, v___f_930_);
v___x_938_ = lean_apply_4(v_map_936_, lean_box(0), lean_box(0), v___f_931_, v___x_937_);
return v___x_938_;
}
}
LEAN_EXPORT lean_object* l_instMonadControlExceptTOfMonad___redArg___lam__1(lean_object* v_00_u03b1_939_, lean_object* v_x_940_){
_start:
{
lean_inc(v_x_940_);
return v_x_940_;
}
}
LEAN_EXPORT lean_object* l_instMonadControlExceptTOfMonad___redArg___lam__1___boxed(lean_object* v_00_u03b1_941_, lean_object* v_x_942_){
_start:
{
lean_object* v_res_943_; 
v_res_943_ = l_instMonadControlExceptTOfMonad___redArg___lam__1(v_00_u03b1_941_, v_x_942_);
lean_dec(v_x_942_);
return v_res_943_;
}
}
LEAN_EXPORT lean_object* l_instMonadControlExceptTOfMonad___redArg(lean_object* v_inst_946_){
_start:
{
lean_object* v___f_947_; lean_object* v___f_948_; lean_object* v___f_949_; lean_object* v___f_950_; lean_object* v___x_951_; 
v___f_947_ = ((lean_object*)(l_instMonadControlExceptTOfMonad___redArg___closed__0));
v___f_948_ = ((lean_object*)(l_ExceptT_lift___redArg___closed__0));
v___f_949_ = lean_alloc_closure((void*)(l_instMonadControlExceptTOfMonad___redArg___lam__2), 5, 3);
lean_closure_set(v___f_949_, 0, v_inst_946_);
lean_closure_set(v___f_949_, 1, v___f_947_);
lean_closure_set(v___f_949_, 2, v___f_948_);
v___f_950_ = ((lean_object*)(l_instMonadControlExceptTOfMonad___redArg___closed__1));
v___x_951_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_951_, 0, v___f_949_);
lean_ctor_set(v___x_951_, 1, v___f_950_);
return v___x_951_;
}
}
LEAN_EXPORT lean_object* l_instMonadControlExceptTOfMonad(lean_object* v_00_u03b5_952_, lean_object* v_m_953_, lean_object* v_inst_954_){
_start:
{
lean_object* v___x_955_; 
v___x_955_ = l_instMonadControlExceptTOfMonad___redArg(v_inst_954_);
return v___x_955_;
}
}
LEAN_EXPORT lean_object* l_tryFinally___redArg___lam__0(lean_object* v_finalizer_956_, lean_object* v_x_957_){
_start:
{
lean_inc(v_finalizer_956_);
return v_finalizer_956_;
}
}
LEAN_EXPORT lean_object* l_tryFinally___redArg___lam__0___boxed(lean_object* v_finalizer_958_, lean_object* v_x_959_){
_start:
{
lean_object* v_res_960_; 
v_res_960_ = l_tryFinally___redArg___lam__0(v_finalizer_958_, v_x_959_);
lean_dec(v_x_959_);
lean_dec(v_finalizer_958_);
return v_res_960_;
}
}
LEAN_EXPORT lean_object* l_tryFinally___redArg___lam__1(lean_object* v_x_961_){
_start:
{
lean_object* v_fst_962_; 
v_fst_962_ = lean_ctor_get(v_x_961_, 0);
lean_inc(v_fst_962_);
return v_fst_962_;
}
}
LEAN_EXPORT lean_object* l_tryFinally___redArg___lam__1___boxed(lean_object* v_x_963_){
_start:
{
lean_object* v_res_964_; 
v_res_964_ = l_tryFinally___redArg___lam__1(v_x_963_);
lean_dec_ref(v_x_963_);
return v_res_964_;
}
}
LEAN_EXPORT lean_object* l_tryFinally___redArg(lean_object* v_inst_966_, lean_object* v_inst_967_, lean_object* v_x_968_, lean_object* v_finalizer_969_){
_start:
{
lean_object* v_map_970_; lean_object* v___f_971_; lean_object* v___f_972_; lean_object* v_y_973_; lean_object* v___x_974_; 
v_map_970_ = lean_ctor_get(v_inst_967_, 0);
lean_inc(v_map_970_);
lean_dec_ref(v_inst_967_);
v___f_971_ = lean_alloc_closure((void*)(l_tryFinally___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_971_, 0, v_finalizer_969_);
v___f_972_ = ((lean_object*)(l_tryFinally___redArg___closed__0));
v_y_973_ = lean_apply_4(v_inst_966_, lean_box(0), lean_box(0), v_x_968_, v___f_971_);
v___x_974_ = lean_apply_4(v_map_970_, lean_box(0), lean_box(0), v___f_972_, v_y_973_);
return v___x_974_;
}
}
LEAN_EXPORT lean_object* l_tryFinally(lean_object* v_m_975_, lean_object* v_00_u03b1_976_, lean_object* v_00_u03b2_977_, lean_object* v_inst_978_, lean_object* v_inst_979_, lean_object* v_x_980_, lean_object* v_finalizer_981_){
_start:
{
lean_object* v_map_982_; lean_object* v___f_983_; lean_object* v___f_984_; lean_object* v_y_985_; lean_object* v___x_986_; 
v_map_982_ = lean_ctor_get(v_inst_979_, 0);
lean_inc(v_map_982_);
lean_dec_ref(v_inst_979_);
v___f_983_ = lean_alloc_closure((void*)(l_tryFinally___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_983_, 0, v_finalizer_981_);
v___f_984_ = ((lean_object*)(l_tryFinally___redArg___closed__0));
v_y_985_ = lean_apply_4(v_inst_978_, lean_box(0), lean_box(0), v_x_980_, v___f_983_);
v___x_986_ = lean_apply_4(v_map_982_, lean_box(0), lean_box(0), v___f_984_, v_y_985_);
return v___x_986_;
}
}
LEAN_EXPORT lean_object* l_Id_finally___lam__0(lean_object* v_00_u03b1_987_, lean_object* v_00_u03b2_988_, lean_object* v_x_989_, lean_object* v_h_990_){
_start:
{
lean_object* v___x_991_; lean_object* v_b_992_; lean_object* v___x_993_; 
lean_inc(v_x_989_);
v___x_991_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_991_, 0, v_x_989_);
v_b_992_ = lean_apply_1(v_h_990_, v___x_991_);
v___x_993_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_993_, 0, v_x_989_);
lean_ctor_set(v___x_993_, 1, v_b_992_);
return v___x_993_;
}
}
LEAN_EXPORT lean_object* l_ExceptT_finally___redArg___lam__0(lean_object* v_toPure_996_, lean_object* v_r_997_){
_start:
{
lean_object* v_e_999_; lean_object* v_fst_1002_; 
v_fst_1002_ = lean_ctor_get(v_r_997_, 0);
lean_inc(v_fst_1002_);
if (lean_obj_tag(v_fst_1002_) == 0)
{
lean_object* v_snd_1003_; 
v_snd_1003_ = lean_ctor_get(v_r_997_, 1);
lean_inc(v_snd_1003_);
lean_dec_ref(v_r_997_);
if (lean_obj_tag(v_snd_1003_) == 0)
{
lean_object* v_a_1004_; 
lean_dec_ref_known(v_fst_1002_, 1);
v_a_1004_ = lean_ctor_get(v_snd_1003_, 0);
lean_inc(v_a_1004_);
lean_dec_ref_known(v_snd_1003_, 1);
v_e_999_ = v_a_1004_;
goto v___jp_998_;
}
else
{
lean_object* v_a_1005_; lean_object* v___x_1007_; uint8_t v_isShared_1008_; uint8_t v_isSharedCheck_1013_; 
v_a_1005_ = lean_ctor_get(v_fst_1002_, 0);
lean_inc(v_a_1005_);
lean_dec_ref_known(v_fst_1002_, 1);
v_isSharedCheck_1013_ = !lean_is_exclusive(v_snd_1003_);
if (v_isSharedCheck_1013_ == 0)
{
lean_object* v_unused_1014_; 
v_unused_1014_ = lean_ctor_get(v_snd_1003_, 0);
lean_dec(v_unused_1014_);
v___x_1007_ = v_snd_1003_;
v_isShared_1008_ = v_isSharedCheck_1013_;
goto v_resetjp_1006_;
}
else
{
lean_dec(v_snd_1003_);
v___x_1007_ = lean_box(0);
v_isShared_1008_ = v_isSharedCheck_1013_;
goto v_resetjp_1006_;
}
v_resetjp_1006_:
{
lean_object* v___x_1010_; 
if (v_isShared_1008_ == 0)
{
lean_ctor_set_tag(v___x_1007_, 0);
lean_ctor_set(v___x_1007_, 0, v_a_1005_);
v___x_1010_ = v___x_1007_;
goto v_reusejp_1009_;
}
else
{
lean_object* v_reuseFailAlloc_1012_; 
v_reuseFailAlloc_1012_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1012_, 0, v_a_1005_);
v___x_1010_ = v_reuseFailAlloc_1012_;
goto v_reusejp_1009_;
}
v_reusejp_1009_:
{
lean_object* v___x_1011_; 
v___x_1011_ = lean_apply_2(v_toPure_996_, lean_box(0), v___x_1010_);
return v___x_1011_;
}
}
}
}
else
{
lean_object* v_snd_1015_; lean_object* v___x_1017_; uint8_t v_isShared_1018_; uint8_t v_isSharedCheck_1033_; 
v_snd_1015_ = lean_ctor_get(v_r_997_, 1);
v_isSharedCheck_1033_ = !lean_is_exclusive(v_r_997_);
if (v_isSharedCheck_1033_ == 0)
{
lean_object* v_unused_1034_; 
v_unused_1034_ = lean_ctor_get(v_r_997_, 0);
lean_dec(v_unused_1034_);
v___x_1017_ = v_r_997_;
v_isShared_1018_ = v_isSharedCheck_1033_;
goto v_resetjp_1016_;
}
else
{
lean_inc(v_snd_1015_);
lean_dec(v_r_997_);
v___x_1017_ = lean_box(0);
v_isShared_1018_ = v_isSharedCheck_1033_;
goto v_resetjp_1016_;
}
v_resetjp_1016_:
{
if (lean_obj_tag(v_snd_1015_) == 0)
{
lean_object* v_a_1019_; 
lean_del_object(v___x_1017_);
lean_dec_ref_known(v_fst_1002_, 1);
v_a_1019_ = lean_ctor_get(v_snd_1015_, 0);
lean_inc(v_a_1019_);
lean_dec_ref_known(v_snd_1015_, 1);
v_e_999_ = v_a_1019_;
goto v___jp_998_;
}
else
{
lean_object* v_a_1020_; lean_object* v_a_1021_; lean_object* v___x_1023_; uint8_t v_isShared_1024_; uint8_t v_isSharedCheck_1032_; 
v_a_1020_ = lean_ctor_get(v_fst_1002_, 0);
lean_inc(v_a_1020_);
lean_dec_ref_known(v_fst_1002_, 1);
v_a_1021_ = lean_ctor_get(v_snd_1015_, 0);
v_isSharedCheck_1032_ = !lean_is_exclusive(v_snd_1015_);
if (v_isSharedCheck_1032_ == 0)
{
v___x_1023_ = v_snd_1015_;
v_isShared_1024_ = v_isSharedCheck_1032_;
goto v_resetjp_1022_;
}
else
{
lean_inc(v_a_1021_);
lean_dec(v_snd_1015_);
v___x_1023_ = lean_box(0);
v_isShared_1024_ = v_isSharedCheck_1032_;
goto v_resetjp_1022_;
}
v_resetjp_1022_:
{
lean_object* v___x_1026_; 
if (v_isShared_1018_ == 0)
{
lean_ctor_set(v___x_1017_, 1, v_a_1021_);
lean_ctor_set(v___x_1017_, 0, v_a_1020_);
v___x_1026_ = v___x_1017_;
goto v_reusejp_1025_;
}
else
{
lean_object* v_reuseFailAlloc_1031_; 
v_reuseFailAlloc_1031_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1031_, 0, v_a_1020_);
lean_ctor_set(v_reuseFailAlloc_1031_, 1, v_a_1021_);
v___x_1026_ = v_reuseFailAlloc_1031_;
goto v_reusejp_1025_;
}
v_reusejp_1025_:
{
lean_object* v___x_1028_; 
if (v_isShared_1024_ == 0)
{
lean_ctor_set(v___x_1023_, 0, v___x_1026_);
v___x_1028_ = v___x_1023_;
goto v_reusejp_1027_;
}
else
{
lean_object* v_reuseFailAlloc_1030_; 
v_reuseFailAlloc_1030_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1030_, 0, v___x_1026_);
v___x_1028_ = v_reuseFailAlloc_1030_;
goto v_reusejp_1027_;
}
v_reusejp_1027_:
{
lean_object* v___x_1029_; 
v___x_1029_ = lean_apply_2(v_toPure_996_, lean_box(0), v___x_1028_);
return v___x_1029_;
}
}
}
}
}
}
v___jp_998_:
{
lean_object* v___x_1000_; lean_object* v___x_1001_; 
v___x_1000_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1000_, 0, v_e_999_);
v___x_1001_ = lean_apply_2(v_toPure_996_, lean_box(0), v___x_1000_);
return v___x_1001_;
}
}
}
LEAN_EXPORT lean_object* l_ExceptT_finally___redArg___lam__1(lean_object* v_h_1035_, lean_object* v_e_x3f_1036_){
_start:
{
if (lean_obj_tag(v_e_x3f_1036_) == 0)
{
goto v___jp_1037_;
}
else
{
lean_object* v_val_1040_; lean_object* v___x_1042_; uint8_t v_isShared_1043_; uint8_t v_isSharedCheck_1049_; 
v_val_1040_ = lean_ctor_get(v_e_x3f_1036_, 0);
v_isSharedCheck_1049_ = !lean_is_exclusive(v_e_x3f_1036_);
if (v_isSharedCheck_1049_ == 0)
{
v___x_1042_ = v_e_x3f_1036_;
v_isShared_1043_ = v_isSharedCheck_1049_;
goto v_resetjp_1041_;
}
else
{
lean_inc(v_val_1040_);
lean_dec(v_e_x3f_1036_);
v___x_1042_ = lean_box(0);
v_isShared_1043_ = v_isSharedCheck_1049_;
goto v_resetjp_1041_;
}
v_resetjp_1041_:
{
if (lean_obj_tag(v_val_1040_) == 0)
{
lean_dec_ref_known(v_val_1040_, 1);
lean_del_object(v___x_1042_);
goto v___jp_1037_;
}
else
{
lean_object* v_a_1044_; lean_object* v___x_1046_; 
v_a_1044_ = lean_ctor_get(v_val_1040_, 0);
lean_inc(v_a_1044_);
lean_dec_ref_known(v_val_1040_, 1);
if (v_isShared_1043_ == 0)
{
lean_ctor_set(v___x_1042_, 0, v_a_1044_);
v___x_1046_ = v___x_1042_;
goto v_reusejp_1045_;
}
else
{
lean_object* v_reuseFailAlloc_1048_; 
v_reuseFailAlloc_1048_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1048_, 0, v_a_1044_);
v___x_1046_ = v_reuseFailAlloc_1048_;
goto v_reusejp_1045_;
}
v_reusejp_1045_:
{
lean_object* v___x_1047_; 
v___x_1047_ = lean_apply_1(v_h_1035_, v___x_1046_);
return v___x_1047_;
}
}
}
}
v___jp_1037_:
{
lean_object* v___x_1038_; lean_object* v___x_1039_; 
v___x_1038_ = lean_box(0);
v___x_1039_ = lean_apply_1(v_h_1035_, v___x_1038_);
return v___x_1039_;
}
}
}
LEAN_EXPORT lean_object* l_ExceptT_finally___redArg___lam__2(lean_object* v_inst_1050_, lean_object* v_toBind_1051_, lean_object* v___f_1052_, lean_object* v_00_u03b1_1053_, lean_object* v_00_u03b2_1054_, lean_object* v_x_1055_, lean_object* v_h_1056_){
_start:
{
lean_object* v___f_1057_; lean_object* v___x_1058_; lean_object* v___x_1059_; 
v___f_1057_ = lean_alloc_closure((void*)(l_ExceptT_finally___redArg___lam__1), 2, 1);
lean_closure_set(v___f_1057_, 0, v_h_1056_);
v___x_1058_ = lean_apply_4(v_inst_1050_, lean_box(0), lean_box(0), v_x_1055_, v___f_1057_);
v___x_1059_ = lean_apply_4(v_toBind_1051_, lean_box(0), lean_box(0), v___x_1058_, v___f_1052_);
return v___x_1059_;
}
}
LEAN_EXPORT lean_object* l_ExceptT_finally___redArg(lean_object* v_inst_1060_, lean_object* v_inst_1061_){
_start:
{
lean_object* v_toApplicative_1062_; lean_object* v_toBind_1063_; lean_object* v_toPure_1064_; lean_object* v___f_1065_; lean_object* v___f_1066_; 
v_toApplicative_1062_ = lean_ctor_get(v_inst_1061_, 0);
lean_inc_ref(v_toApplicative_1062_);
v_toBind_1063_ = lean_ctor_get(v_inst_1061_, 1);
lean_inc(v_toBind_1063_);
lean_dec_ref(v_inst_1061_);
v_toPure_1064_ = lean_ctor_get(v_toApplicative_1062_, 1);
lean_inc(v_toPure_1064_);
lean_dec_ref(v_toApplicative_1062_);
v___f_1065_ = lean_alloc_closure((void*)(l_ExceptT_finally___redArg___lam__0), 2, 1);
lean_closure_set(v___f_1065_, 0, v_toPure_1064_);
v___f_1066_ = lean_alloc_closure((void*)(l_ExceptT_finally___redArg___lam__2), 7, 3);
lean_closure_set(v___f_1066_, 0, v_inst_1060_);
lean_closure_set(v___f_1066_, 1, v_toBind_1063_);
lean_closure_set(v___f_1066_, 2, v___f_1065_);
return v___f_1066_;
}
}
LEAN_EXPORT lean_object* l_ExceptT_finally(lean_object* v_m_1067_, lean_object* v_00_u03b5_1068_, lean_object* v_inst_1069_, lean_object* v_inst_1070_){
_start:
{
lean_object* v_toApplicative_1071_; lean_object* v_toBind_1072_; lean_object* v_toPure_1073_; lean_object* v___f_1074_; lean_object* v___f_1075_; 
v_toApplicative_1071_ = lean_ctor_get(v_inst_1070_, 0);
lean_inc_ref(v_toApplicative_1071_);
v_toBind_1072_ = lean_ctor_get(v_inst_1070_, 1);
lean_inc(v_toBind_1072_);
lean_dec_ref(v_inst_1070_);
v_toPure_1073_ = lean_ctor_get(v_toApplicative_1071_, 1);
lean_inc(v_toPure_1073_);
lean_dec_ref(v_toApplicative_1071_);
v___f_1074_ = lean_alloc_closure((void*)(l_ExceptT_finally___redArg___lam__0), 2, 1);
lean_closure_set(v___f_1074_, 0, v_toPure_1073_);
v___f_1075_ = lean_alloc_closure((void*)(l_ExceptT_finally___redArg___lam__2), 7, 3);
lean_closure_set(v___f_1075_, 0, v_inst_1069_);
lean_closure_set(v___f_1075_, 1, v_toBind_1072_);
lean_closure_set(v___f_1075_, 2, v___f_1074_);
return v___f_1075_;
}
}
LEAN_EXPORT lean_object* l_instMonadAttachExcept___redArg___lam__0(lean_object* v_00_u03b1_1076_, lean_object* v_x_1077_){
_start:
{
if (lean_obj_tag(v_x_1077_) == 0)
{
lean_object* v_a_1078_; lean_object* v___x_1080_; uint8_t v_isShared_1081_; uint8_t v_isSharedCheck_1085_; 
v_a_1078_ = lean_ctor_get(v_x_1077_, 0);
v_isSharedCheck_1085_ = !lean_is_exclusive(v_x_1077_);
if (v_isSharedCheck_1085_ == 0)
{
v___x_1080_ = v_x_1077_;
v_isShared_1081_ = v_isSharedCheck_1085_;
goto v_resetjp_1079_;
}
else
{
lean_inc(v_a_1078_);
lean_dec(v_x_1077_);
v___x_1080_ = lean_box(0);
v_isShared_1081_ = v_isSharedCheck_1085_;
goto v_resetjp_1079_;
}
v_resetjp_1079_:
{
lean_object* v___x_1083_; 
if (v_isShared_1081_ == 0)
{
v___x_1083_ = v___x_1080_;
goto v_reusejp_1082_;
}
else
{
lean_object* v_reuseFailAlloc_1084_; 
v_reuseFailAlloc_1084_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1084_, 0, v_a_1078_);
v___x_1083_ = v_reuseFailAlloc_1084_;
goto v_reusejp_1082_;
}
v_reusejp_1082_:
{
return v___x_1083_;
}
}
}
else
{
lean_object* v_a_1086_; lean_object* v___x_1088_; uint8_t v_isShared_1089_; uint8_t v_isSharedCheck_1093_; 
v_a_1086_ = lean_ctor_get(v_x_1077_, 0);
v_isSharedCheck_1093_ = !lean_is_exclusive(v_x_1077_);
if (v_isSharedCheck_1093_ == 0)
{
v___x_1088_ = v_x_1077_;
v_isShared_1089_ = v_isSharedCheck_1093_;
goto v_resetjp_1087_;
}
else
{
lean_inc(v_a_1086_);
lean_dec(v_x_1077_);
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
v_reuseFailAlloc_1092_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1092_, 0, v_a_1086_);
v___x_1091_ = v_reuseFailAlloc_1092_;
goto v_reusejp_1090_;
}
v_reusejp_1090_:
{
return v___x_1091_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_instMonadAttachExcept___redArg(){
_start:
{
lean_object* v___f_1096_; 
v___f_1096_ = ((lean_object*)(l_instMonadAttachExcept___redArg___closed__0));
return v___f_1096_;
}
}
LEAN_EXPORT lean_object* l_instMonadAttachExcept___redArg___boxed(lean_object* v___dummy_1097_){
_start:
{
lean_object* v_res_1098_; 
v_res_1098_ = l_instMonadAttachExcept___redArg();
return v_res_1098_;
}
}
LEAN_EXPORT lean_object* l_instMonadAttachExcept(lean_object* v_00_u03b5_1099_){
_start:
{
lean_object* v___f_1100_; 
v___f_1100_ = ((lean_object*)(l_instMonadAttachExcept___redArg___closed__0));
return v___f_1100_;
}
}
LEAN_EXPORT lean_object* l_instMonadAttachExceptTOfMonad___redArg___lam__0(lean_object* v_x_1101_){
_start:
{
if (lean_obj_tag(v_x_1101_) == 0)
{
lean_object* v_a_1102_; lean_object* v___x_1104_; uint8_t v_isShared_1105_; uint8_t v_isSharedCheck_1109_; 
v_a_1102_ = lean_ctor_get(v_x_1101_, 0);
v_isSharedCheck_1109_ = !lean_is_exclusive(v_x_1101_);
if (v_isSharedCheck_1109_ == 0)
{
v___x_1104_ = v_x_1101_;
v_isShared_1105_ = v_isSharedCheck_1109_;
goto v_resetjp_1103_;
}
else
{
lean_inc(v_a_1102_);
lean_dec(v_x_1101_);
v___x_1104_ = lean_box(0);
v_isShared_1105_ = v_isSharedCheck_1109_;
goto v_resetjp_1103_;
}
v_resetjp_1103_:
{
lean_object* v___x_1107_; 
if (v_isShared_1105_ == 0)
{
v___x_1107_ = v___x_1104_;
goto v_reusejp_1106_;
}
else
{
lean_object* v_reuseFailAlloc_1108_; 
v_reuseFailAlloc_1108_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1108_, 0, v_a_1102_);
v___x_1107_ = v_reuseFailAlloc_1108_;
goto v_reusejp_1106_;
}
v_reusejp_1106_:
{
return v___x_1107_;
}
}
}
else
{
lean_object* v_a_1110_; lean_object* v___x_1112_; uint8_t v_isShared_1113_; uint8_t v_isSharedCheck_1117_; 
v_a_1110_ = lean_ctor_get(v_x_1101_, 0);
v_isSharedCheck_1117_ = !lean_is_exclusive(v_x_1101_);
if (v_isSharedCheck_1117_ == 0)
{
v___x_1112_ = v_x_1101_;
v_isShared_1113_ = v_isSharedCheck_1117_;
goto v_resetjp_1111_;
}
else
{
lean_inc(v_a_1110_);
lean_dec(v_x_1101_);
v___x_1112_ = lean_box(0);
v_isShared_1113_ = v_isSharedCheck_1117_;
goto v_resetjp_1111_;
}
v_resetjp_1111_:
{
lean_object* v___x_1115_; 
if (v_isShared_1113_ == 0)
{
v___x_1115_ = v___x_1112_;
goto v_reusejp_1114_;
}
else
{
lean_object* v_reuseFailAlloc_1116_; 
v_reuseFailAlloc_1116_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1116_, 0, v_a_1110_);
v___x_1115_ = v_reuseFailAlloc_1116_;
goto v_reusejp_1114_;
}
v_reusejp_1114_:
{
return v___x_1115_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_instMonadAttachExceptTOfMonad___redArg___lam__1(lean_object* v_toFunctor_1118_, lean_object* v_inst_1119_, lean_object* v___f_1120_, lean_object* v_00_u03b1_1121_, lean_object* v_x_1122_){
_start:
{
lean_object* v_map_1123_; lean_object* v___x_1124_; lean_object* v___x_1125_; 
v_map_1123_ = lean_ctor_get(v_toFunctor_1118_, 0);
lean_inc(v_map_1123_);
lean_dec_ref(v_toFunctor_1118_);
v___x_1124_ = lean_apply_2(v_inst_1119_, lean_box(0), v_x_1122_);
v___x_1125_ = lean_apply_4(v_map_1123_, lean_box(0), lean_box(0), v___f_1120_, v___x_1124_);
return v___x_1125_;
}
}
LEAN_EXPORT lean_object* l_instMonadAttachExceptTOfMonad___redArg(lean_object* v_inst_1127_, lean_object* v_inst_1128_){
_start:
{
lean_object* v_toApplicative_1129_; lean_object* v_toFunctor_1130_; lean_object* v___f_1131_; lean_object* v___f_1132_; 
v_toApplicative_1129_ = lean_ctor_get(v_inst_1127_, 0);
lean_inc_ref(v_toApplicative_1129_);
lean_dec_ref(v_inst_1127_);
v_toFunctor_1130_ = lean_ctor_get(v_toApplicative_1129_, 0);
lean_inc_ref(v_toFunctor_1130_);
lean_dec_ref(v_toApplicative_1129_);
v___f_1131_ = ((lean_object*)(l_instMonadAttachExceptTOfMonad___redArg___closed__0));
v___f_1132_ = lean_alloc_closure((void*)(l_instMonadAttachExceptTOfMonad___redArg___lam__1), 5, 3);
lean_closure_set(v___f_1132_, 0, v_toFunctor_1130_);
lean_closure_set(v___f_1132_, 1, v_inst_1128_);
lean_closure_set(v___f_1132_, 2, v___f_1131_);
return v___f_1132_;
}
}
LEAN_EXPORT lean_object* l_instMonadAttachExceptTOfMonad(lean_object* v_m_1133_, lean_object* v_00_u03b5_1134_, lean_object* v_inst_1135_, lean_object* v_inst_1136_){
_start:
{
lean_object* v___x_1137_; 
v___x_1137_ = l_instMonadAttachExceptTOfMonad___redArg(v_inst_1135_, v_inst_1136_);
return v___x_1137_;
}
}
lean_object* runtime_initialize_Init_Control_Basic(uint8_t builtin);
lean_object* runtime_initialize_Init_Control_Id(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Init_Control_Except(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Init_Control_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Control_Id(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Init_Control_Except(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Init_Control_Basic(uint8_t builtin);
lean_object* initialize_Init_Control_Id(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Init_Control_Except(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init_Control_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Control_Id(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Control_Except(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Init_Control_Except(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Init_Control_Except(builtin);
}
#ifdef __cplusplus
}
#endif
