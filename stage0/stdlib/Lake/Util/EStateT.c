// Lean compiler output
// Module: Lake.Util.EStateT
// Imports: public import Init.Control.State
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
LEAN_EXPORT lean_object* l_Lake_EResult_ctorIdx___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lake_EResult_ctorIdx___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_EResult_ctorIdx(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_EResult_ctorIdx___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_EResult_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_EResult_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_EResult_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_EResult_ok_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_EResult_ok_elim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_EResult_error_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_EResult_error_elim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_EResult_instInhabited___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_EResult_instInhabited(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_EResult_instInhabited__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_EResult_instInhabited__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_EResult_state___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lake_EResult_state___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_EResult_state(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_EResult_state___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_EResult_modifyState___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_EResult_modifyState(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_EResult_setState___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_EResult_setState(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_EResult_toProd___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lake_EResult_toProd(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_EResult_toProd_x3f___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lake_EResult_toProd_x3f(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_EResult_result_x3f___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lake_EResult_result_x3f___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_EResult_result_x3f(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_EResult_result_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_EResult_error_x3f___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lake_EResult_error_x3f___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_EResult_error_x3f(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_EResult_error_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_EResult_toExcept___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lake_EResult_toExcept___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_EResult_toExcept(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_EResult_toExcept___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_EResult_map___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_EResult_map(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_EResult_instFunctor___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_EResult_instFunctor___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lake_EResult_instFunctor___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_EResult_instFunctor___redArg___lam__0, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_EResult_instFunctor___redArg___closed__0 = (const lean_object*)&l_Lake_EResult_instFunctor___redArg___closed__0_value;
static const lean_closure_object l_Lake_EResult_instFunctor___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_EResult_instFunctor___redArg___lam__1, .m_arity = 5, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lake_EResult_instFunctor___redArg___closed__0_value)} };
static const lean_object* l_Lake_EResult_instFunctor___redArg___closed__1 = (const lean_object*)&l_Lake_EResult_instFunctor___redArg___closed__1_value;
static const lean_ctor_object l_Lake_EResult_instFunctor___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake_EResult_instFunctor___redArg___closed__0_value),((lean_object*)&l_Lake_EResult_instFunctor___redArg___closed__1_value)}};
static const lean_object* l_Lake_EResult_instFunctor___redArg___closed__2 = (const lean_object*)&l_Lake_EResult_instFunctor___redArg___closed__2_value;
LEAN_EXPORT lean_object* l_Lake_EResult_instFunctor___redArg();
LEAN_EXPORT lean_object* l_Lake_EResult_instFunctor___redArg___boxed(lean_object*);
static lean_once_cell_t l_Lake_EResult_instFunctor___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_EResult_instFunctor___closed__0;
LEAN_EXPORT lean_object* l_Lake_EResult_instFunctor(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_EResult_toEStateMResult___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lake_EResult_toEStateMResult(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_EResult_ofEStateMResult___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lake_EResult_ofEStateMResult(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_EStateT_mk___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_EStateT_mk(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_EStateT_toFn___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_EStateT_toFn(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Util_EStateT_0__Lake_EStateT_instInhabitedOfPure___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Util_EStateT_0__Lake_EStateT_instInhabitedOfPure___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Util_EStateT_0__Lake_EStateT_instInhabitedOfPure(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_EStateT_run___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_EStateT_run(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lake_EStateT_run_x27___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*3, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_EResult_toExcept___boxed, .m_arity = 4, .m_num_fixed = 3, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lake_EStateT_run_x27___redArg___closed__0 = (const lean_object*)&l_Lake_EStateT_run_x27___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_EStateT_run_x27___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_EStateT_run_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lake_EStateT_toStateT___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*3, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_EResult_toProd, .m_arity = 4, .m_num_fixed = 3, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lake_EStateT_toStateT___redArg___closed__0 = (const lean_object*)&l_Lake_EStateT_toStateT___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_EStateT_toStateT___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_EStateT_toStateT(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lake_EStateT_toStateT_x3f___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*3, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_EResult_toProd_x3f, .m_arity = 4, .m_num_fixed = 3, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lake_EStateT_toStateT_x3f___redArg___closed__0 = (const lean_object*)&l_Lake_EStateT_toStateT_x3f___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_EStateT_toStateT_x3f___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_EStateT_toStateT_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_EStateT_run_x3f___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_EStateT_run_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lake_EStateT_run_x3f_x27___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*3, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_EResult_result_x3f___boxed, .m_arity = 4, .m_num_fixed = 3, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lake_EStateT_run_x3f_x27___redArg___closed__0 = (const lean_object*)&l_Lake_EStateT_run_x3f_x27___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_EStateT_run_x3f_x27___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_EStateT_run_x3f_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_EStateT_catchExceptions___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_EStateT_catchExceptions___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_EStateT_catchExceptions(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_EStateT_lift___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_EStateT_lift___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_EStateT_lift(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_EStateT_instMonadLiftOfMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_EStateT_instMonadLiftOfMonad___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lake_EStateT_instMonadLiftOfMonad(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_EStateT_pure___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_EStateT_pure(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_EStateT_instPure___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_EStateT_instPure___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lake_EStateT_instPure(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_EStateT_map___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_EStateT_map___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_EStateT_map(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_EStateT_instFunctor___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_EStateT_instFunctor___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_EStateT_instFunctor___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_EStateT_instFunctor___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lake_EStateT_instFunctor(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_EStateT_bind___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_EStateT_bind___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_EStateT_bind(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_EStateT_seqRight___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_EStateT_seqRight___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_EStateT_seqRight(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_EStateT_instMonad___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_EStateT_instMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_EStateT_instMonad___redArg___lam__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_EStateT_instMonad___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_EStateT_instMonad___redArg___lam__6(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_EStateT_instMonad___redArg___lam__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_EStateT_instMonad___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_EStateT_instMonad___redArg___lam__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_EStateT_instMonad___redArg___lam__7(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_EStateT_instMonad___redArg___lam__8(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_EStateT_instMonad___redArg___lam__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_EStateT_instMonad___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lake_EStateT_instMonad(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_EStateT_set___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_EStateT_set(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_EStateT_set___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_EStateT_get___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_EStateT_get(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_EStateT_modifyGet___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_EStateT_modifyGet(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_EStateT_instMonadStateOfOfPure___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_EStateT_instMonadStateOfOfPure___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lake_EStateT_instMonadStateOfOfPure(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_EStateT_throw___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_EStateT_throw(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_EStateT_tryCatch___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_EStateT_tryCatch___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_EStateT_tryCatch(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_EStateT_instMonadExceptOfOfMonad___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_EStateT_instMonadExceptOfOfMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_EStateT_instMonadExceptOfOfMonad___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_EStateT_instMonadExceptOfOfMonad___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lake_EStateT_instMonadExceptOfOfMonad(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_EStateT_orElse___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_EStateT_orElse___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_EStateT_orElse(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_EStateT_instOrElseOfMonad___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lake_EStateT_instOrElseOfMonad(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_EStateT_adaptExcept___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_EStateT_adaptExcept___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_EStateT_adaptExcept(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_EStateT_tryFinally_x27___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_EStateT_tryFinally_x27___redArg___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_EStateT_tryFinally_x27___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_EStateT_tryFinally_x27___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_EStateT_tryFinally_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_EStateT_instMonadFinallyOfMonad___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_EStateT_instMonadFinallyOfMonad___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_EStateT_instMonadFinallyOfMonad___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lake_EStateT_instMonadFinallyOfMonad(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_EStateT_ofEStateM___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_EStateT_ofEStateM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_EStateT_toEStateM___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_EStateT_toEStateM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_EResult_ctorIdx___redArg(lean_object* v_x_1_){
_start:
{
if (lean_obj_tag(v_x_1_) == 0)
{
lean_object* v___x_2_; 
v___x_2_ = lean_unsigned_to_nat(0u);
return v___x_2_;
}
else
{
lean_object* v___x_3_; 
v___x_3_ = lean_unsigned_to_nat(1u);
return v___x_3_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_EResult_ctorIdx___redArg___boxed(lean_object* v_x_4_){
_start:
{
lean_object* v_res_5_; 
v_res_5_ = l_Lake_EResult_ctorIdx___redArg(v_x_4_);
lean_dec_ref(v_x_4_);
return v_res_5_;
}
}
LEAN_EXPORT lean_object* l_Lake_EResult_ctorIdx(lean_object* v_00_u03b5_6_, lean_object* v_00_u03c3_7_, lean_object* v_00_u03b1_8_, lean_object* v_x_9_){
_start:
{
lean_object* v___x_10_; 
v___x_10_ = l_Lake_EResult_ctorIdx___redArg(v_x_9_);
return v___x_10_;
}
}
LEAN_EXPORT lean_object* l_Lake_EResult_ctorIdx___boxed(lean_object* v_00_u03b5_11_, lean_object* v_00_u03c3_12_, lean_object* v_00_u03b1_13_, lean_object* v_x_14_){
_start:
{
lean_object* v_res_15_; 
v_res_15_ = l_Lake_EResult_ctorIdx(v_00_u03b5_11_, v_00_u03c3_12_, v_00_u03b1_13_, v_x_14_);
lean_dec_ref(v_x_14_);
return v_res_15_;
}
}
LEAN_EXPORT lean_object* l_Lake_EResult_ctorElim___redArg(lean_object* v_t_16_, lean_object* v_k_17_){
_start:
{
lean_object* v_a_18_; lean_object* v_a_19_; lean_object* v___x_20_; 
v_a_18_ = lean_ctor_get(v_t_16_, 0);
lean_inc(v_a_18_);
v_a_19_ = lean_ctor_get(v_t_16_, 1);
lean_inc(v_a_19_);
lean_dec_ref(v_t_16_);
v___x_20_ = lean_apply_2(v_k_17_, v_a_18_, v_a_19_);
return v___x_20_;
}
}
LEAN_EXPORT lean_object* l_Lake_EResult_ctorElim(lean_object* v_00_u03b5_21_, lean_object* v_00_u03c3_22_, lean_object* v_00_u03b1_23_, lean_object* v_motive_24_, lean_object* v_ctorIdx_25_, lean_object* v_t_26_, lean_object* v_h_27_, lean_object* v_k_28_){
_start:
{
lean_object* v___x_29_; 
v___x_29_ = l_Lake_EResult_ctorElim___redArg(v_t_26_, v_k_28_);
return v___x_29_;
}
}
LEAN_EXPORT lean_object* l_Lake_EResult_ctorElim___boxed(lean_object* v_00_u03b5_30_, lean_object* v_00_u03c3_31_, lean_object* v_00_u03b1_32_, lean_object* v_motive_33_, lean_object* v_ctorIdx_34_, lean_object* v_t_35_, lean_object* v_h_36_, lean_object* v_k_37_){
_start:
{
lean_object* v_res_38_; 
v_res_38_ = l_Lake_EResult_ctorElim(v_00_u03b5_30_, v_00_u03c3_31_, v_00_u03b1_32_, v_motive_33_, v_ctorIdx_34_, v_t_35_, v_h_36_, v_k_37_);
lean_dec(v_ctorIdx_34_);
return v_res_38_;
}
}
LEAN_EXPORT lean_object* l_Lake_EResult_ok_elim___redArg(lean_object* v_t_39_, lean_object* v_ok_40_){
_start:
{
lean_object* v___x_41_; 
v___x_41_ = l_Lake_EResult_ctorElim___redArg(v_t_39_, v_ok_40_);
return v___x_41_;
}
}
LEAN_EXPORT lean_object* l_Lake_EResult_ok_elim(lean_object* v_00_u03b5_42_, lean_object* v_00_u03c3_43_, lean_object* v_00_u03b1_44_, lean_object* v_motive_45_, lean_object* v_t_46_, lean_object* v_h_47_, lean_object* v_ok_48_){
_start:
{
lean_object* v___x_49_; 
v___x_49_ = l_Lake_EResult_ctorElim___redArg(v_t_46_, v_ok_48_);
return v___x_49_;
}
}
LEAN_EXPORT lean_object* l_Lake_EResult_error_elim___redArg(lean_object* v_t_50_, lean_object* v_error_51_){
_start:
{
lean_object* v___x_52_; 
v___x_52_ = l_Lake_EResult_ctorElim___redArg(v_t_50_, v_error_51_);
return v___x_52_;
}
}
LEAN_EXPORT lean_object* l_Lake_EResult_error_elim(lean_object* v_00_u03b5_53_, lean_object* v_00_u03c3_54_, lean_object* v_00_u03b1_55_, lean_object* v_motive_56_, lean_object* v_t_57_, lean_object* v_h_58_, lean_object* v_error_59_){
_start:
{
lean_object* v___x_60_; 
v___x_60_ = l_Lake_EResult_ctorElim___redArg(v_t_57_, v_error_59_);
return v___x_60_;
}
}
LEAN_EXPORT lean_object* l_Lake_EResult_instInhabited___redArg(lean_object* v_inst_61_, lean_object* v_inst_62_){
_start:
{
lean_object* v___x_63_; 
v___x_63_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_63_, 0, v_inst_61_);
lean_ctor_set(v___x_63_, 1, v_inst_62_);
return v___x_63_;
}
}
LEAN_EXPORT lean_object* l_Lake_EResult_instInhabited(lean_object* v_00_u03b1_64_, lean_object* v_00_u03c3_65_, lean_object* v_00_u03b5_66_, lean_object* v_inst_67_, lean_object* v_inst_68_){
_start:
{
lean_object* v___x_69_; 
v___x_69_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_69_, 0, v_inst_67_);
lean_ctor_set(v___x_69_, 1, v_inst_68_);
return v___x_69_;
}
}
LEAN_EXPORT lean_object* l_Lake_EResult_instInhabited__1___redArg(lean_object* v_inst_70_, lean_object* v_inst_71_){
_start:
{
lean_object* v___x_72_; 
v___x_72_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_72_, 0, v_inst_70_);
lean_ctor_set(v___x_72_, 1, v_inst_71_);
return v___x_72_;
}
}
LEAN_EXPORT lean_object* l_Lake_EResult_instInhabited__1(lean_object* v_00_u03b5_73_, lean_object* v_00_u03c3_74_, lean_object* v_00_u03b1_75_, lean_object* v_inst_76_, lean_object* v_inst_77_){
_start:
{
lean_object* v___x_78_; 
v___x_78_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_78_, 0, v_inst_76_);
lean_ctor_set(v___x_78_, 1, v_inst_77_);
return v___x_78_;
}
}
LEAN_EXPORT lean_object* l_Lake_EResult_state___redArg(lean_object* v_x_79_){
_start:
{
lean_object* v_a_80_; 
v_a_80_ = lean_ctor_get(v_x_79_, 1);
lean_inc(v_a_80_);
return v_a_80_;
}
}
LEAN_EXPORT lean_object* l_Lake_EResult_state___redArg___boxed(lean_object* v_x_81_){
_start:
{
lean_object* v_res_82_; 
v_res_82_ = l_Lake_EResult_state___redArg(v_x_81_);
lean_dec_ref(v_x_81_);
return v_res_82_;
}
}
LEAN_EXPORT lean_object* l_Lake_EResult_state(lean_object* v_00_u03b5_83_, lean_object* v_00_u03c3_84_, lean_object* v_00_u03b1_85_, lean_object* v_x_86_){
_start:
{
lean_object* v_a_87_; 
v_a_87_ = lean_ctor_get(v_x_86_, 1);
lean_inc(v_a_87_);
return v_a_87_;
}
}
LEAN_EXPORT lean_object* l_Lake_EResult_state___boxed(lean_object* v_00_u03b5_88_, lean_object* v_00_u03c3_89_, lean_object* v_00_u03b1_90_, lean_object* v_x_91_){
_start:
{
lean_object* v_res_92_; 
v_res_92_ = l_Lake_EResult_state(v_00_u03b5_88_, v_00_u03c3_89_, v_00_u03b1_90_, v_x_91_);
lean_dec_ref(v_x_91_);
return v_res_92_;
}
}
LEAN_EXPORT lean_object* l_Lake_EResult_modifyState___redArg(lean_object* v_f_93_, lean_object* v_x_94_){
_start:
{
if (lean_obj_tag(v_x_94_) == 0)
{
lean_object* v_a_95_; lean_object* v_a_96_; lean_object* v___x_98_; uint8_t v_isShared_99_; uint8_t v_isSharedCheck_104_; 
v_a_95_ = lean_ctor_get(v_x_94_, 0);
v_a_96_ = lean_ctor_get(v_x_94_, 1);
v_isSharedCheck_104_ = !lean_is_exclusive(v_x_94_);
if (v_isSharedCheck_104_ == 0)
{
v___x_98_ = v_x_94_;
v_isShared_99_ = v_isSharedCheck_104_;
goto v_resetjp_97_;
}
else
{
lean_inc(v_a_96_);
lean_inc(v_a_95_);
lean_dec(v_x_94_);
v___x_98_ = lean_box(0);
v_isShared_99_ = v_isSharedCheck_104_;
goto v_resetjp_97_;
}
v_resetjp_97_:
{
lean_object* v___x_100_; lean_object* v___x_102_; 
v___x_100_ = lean_apply_1(v_f_93_, v_a_96_);
if (v_isShared_99_ == 0)
{
lean_ctor_set(v___x_98_, 1, v___x_100_);
v___x_102_ = v___x_98_;
goto v_reusejp_101_;
}
else
{
lean_object* v_reuseFailAlloc_103_; 
v_reuseFailAlloc_103_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_103_, 0, v_a_95_);
lean_ctor_set(v_reuseFailAlloc_103_, 1, v___x_100_);
v___x_102_ = v_reuseFailAlloc_103_;
goto v_reusejp_101_;
}
v_reusejp_101_:
{
return v___x_102_;
}
}
}
else
{
lean_object* v_a_105_; lean_object* v_a_106_; lean_object* v___x_108_; uint8_t v_isShared_109_; uint8_t v_isSharedCheck_114_; 
v_a_105_ = lean_ctor_get(v_x_94_, 0);
v_a_106_ = lean_ctor_get(v_x_94_, 1);
v_isSharedCheck_114_ = !lean_is_exclusive(v_x_94_);
if (v_isSharedCheck_114_ == 0)
{
v___x_108_ = v_x_94_;
v_isShared_109_ = v_isSharedCheck_114_;
goto v_resetjp_107_;
}
else
{
lean_inc(v_a_106_);
lean_inc(v_a_105_);
lean_dec(v_x_94_);
v___x_108_ = lean_box(0);
v_isShared_109_ = v_isSharedCheck_114_;
goto v_resetjp_107_;
}
v_resetjp_107_:
{
lean_object* v___x_110_; lean_object* v___x_112_; 
v___x_110_ = lean_apply_1(v_f_93_, v_a_106_);
if (v_isShared_109_ == 0)
{
lean_ctor_set(v___x_108_, 1, v___x_110_);
v___x_112_ = v___x_108_;
goto v_reusejp_111_;
}
else
{
lean_object* v_reuseFailAlloc_113_; 
v_reuseFailAlloc_113_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_113_, 0, v_a_105_);
lean_ctor_set(v_reuseFailAlloc_113_, 1, v___x_110_);
v___x_112_ = v_reuseFailAlloc_113_;
goto v_reusejp_111_;
}
v_reusejp_111_:
{
return v___x_112_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_EResult_modifyState(lean_object* v_00_u03c3_115_, lean_object* v_00_u03c3_x27_116_, lean_object* v_00_u03b5_117_, lean_object* v_00_u03b1_118_, lean_object* v_f_119_, lean_object* v_x_120_){
_start:
{
if (lean_obj_tag(v_x_120_) == 0)
{
lean_object* v_a_121_; lean_object* v_a_122_; lean_object* v___x_124_; uint8_t v_isShared_125_; uint8_t v_isSharedCheck_130_; 
v_a_121_ = lean_ctor_get(v_x_120_, 0);
v_a_122_ = lean_ctor_get(v_x_120_, 1);
v_isSharedCheck_130_ = !lean_is_exclusive(v_x_120_);
if (v_isSharedCheck_130_ == 0)
{
v___x_124_ = v_x_120_;
v_isShared_125_ = v_isSharedCheck_130_;
goto v_resetjp_123_;
}
else
{
lean_inc(v_a_122_);
lean_inc(v_a_121_);
lean_dec(v_x_120_);
v___x_124_ = lean_box(0);
v_isShared_125_ = v_isSharedCheck_130_;
goto v_resetjp_123_;
}
v_resetjp_123_:
{
lean_object* v___x_126_; lean_object* v___x_128_; 
v___x_126_ = lean_apply_1(v_f_119_, v_a_122_);
if (v_isShared_125_ == 0)
{
lean_ctor_set(v___x_124_, 1, v___x_126_);
v___x_128_ = v___x_124_;
goto v_reusejp_127_;
}
else
{
lean_object* v_reuseFailAlloc_129_; 
v_reuseFailAlloc_129_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_129_, 0, v_a_121_);
lean_ctor_set(v_reuseFailAlloc_129_, 1, v___x_126_);
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
lean_object* v_a_131_; lean_object* v_a_132_; lean_object* v___x_134_; uint8_t v_isShared_135_; uint8_t v_isSharedCheck_140_; 
v_a_131_ = lean_ctor_get(v_x_120_, 0);
v_a_132_ = lean_ctor_get(v_x_120_, 1);
v_isSharedCheck_140_ = !lean_is_exclusive(v_x_120_);
if (v_isSharedCheck_140_ == 0)
{
v___x_134_ = v_x_120_;
v_isShared_135_ = v_isSharedCheck_140_;
goto v_resetjp_133_;
}
else
{
lean_inc(v_a_132_);
lean_inc(v_a_131_);
lean_dec(v_x_120_);
v___x_134_ = lean_box(0);
v_isShared_135_ = v_isSharedCheck_140_;
goto v_resetjp_133_;
}
v_resetjp_133_:
{
lean_object* v___x_136_; lean_object* v___x_138_; 
v___x_136_ = lean_apply_1(v_f_119_, v_a_132_);
if (v_isShared_135_ == 0)
{
lean_ctor_set(v___x_134_, 1, v___x_136_);
v___x_138_ = v___x_134_;
goto v_reusejp_137_;
}
else
{
lean_object* v_reuseFailAlloc_139_; 
v_reuseFailAlloc_139_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_139_, 0, v_a_131_);
lean_ctor_set(v_reuseFailAlloc_139_, 1, v___x_136_);
v___x_138_ = v_reuseFailAlloc_139_;
goto v_reusejp_137_;
}
v_reusejp_137_:
{
return v___x_138_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_EResult_setState___redArg(lean_object* v_s_141_, lean_object* v_r_142_){
_start:
{
if (lean_obj_tag(v_r_142_) == 0)
{
lean_object* v_a_143_; lean_object* v___x_145_; uint8_t v_isShared_146_; uint8_t v_isSharedCheck_150_; 
v_a_143_ = lean_ctor_get(v_r_142_, 0);
v_isSharedCheck_150_ = !lean_is_exclusive(v_r_142_);
if (v_isSharedCheck_150_ == 0)
{
lean_object* v_unused_151_; 
v_unused_151_ = lean_ctor_get(v_r_142_, 1);
lean_dec(v_unused_151_);
v___x_145_ = v_r_142_;
v_isShared_146_ = v_isSharedCheck_150_;
goto v_resetjp_144_;
}
else
{
lean_inc(v_a_143_);
lean_dec(v_r_142_);
v___x_145_ = lean_box(0);
v_isShared_146_ = v_isSharedCheck_150_;
goto v_resetjp_144_;
}
v_resetjp_144_:
{
lean_object* v___x_148_; 
if (v_isShared_146_ == 0)
{
lean_ctor_set(v___x_145_, 1, v_s_141_);
v___x_148_ = v___x_145_;
goto v_reusejp_147_;
}
else
{
lean_object* v_reuseFailAlloc_149_; 
v_reuseFailAlloc_149_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_149_, 0, v_a_143_);
lean_ctor_set(v_reuseFailAlloc_149_, 1, v_s_141_);
v___x_148_ = v_reuseFailAlloc_149_;
goto v_reusejp_147_;
}
v_reusejp_147_:
{
return v___x_148_;
}
}
}
else
{
lean_object* v_a_152_; lean_object* v___x_154_; uint8_t v_isShared_155_; uint8_t v_isSharedCheck_159_; 
v_a_152_ = lean_ctor_get(v_r_142_, 0);
v_isSharedCheck_159_ = !lean_is_exclusive(v_r_142_);
if (v_isSharedCheck_159_ == 0)
{
lean_object* v_unused_160_; 
v_unused_160_ = lean_ctor_get(v_r_142_, 1);
lean_dec(v_unused_160_);
v___x_154_ = v_r_142_;
v_isShared_155_ = v_isSharedCheck_159_;
goto v_resetjp_153_;
}
else
{
lean_inc(v_a_152_);
lean_dec(v_r_142_);
v___x_154_ = lean_box(0);
v_isShared_155_ = v_isSharedCheck_159_;
goto v_resetjp_153_;
}
v_resetjp_153_:
{
lean_object* v___x_157_; 
if (v_isShared_155_ == 0)
{
lean_ctor_set(v___x_154_, 1, v_s_141_);
v___x_157_ = v___x_154_;
goto v_reusejp_156_;
}
else
{
lean_object* v_reuseFailAlloc_158_; 
v_reuseFailAlloc_158_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_158_, 0, v_a_152_);
lean_ctor_set(v_reuseFailAlloc_158_, 1, v_s_141_);
v___x_157_ = v_reuseFailAlloc_158_;
goto v_reusejp_156_;
}
v_reusejp_156_:
{
return v___x_157_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_EResult_setState(lean_object* v_00_u03c3_x27_161_, lean_object* v_00_u03b5_162_, lean_object* v_00_u03c3_163_, lean_object* v_00_u03b1_164_, lean_object* v_s_165_, lean_object* v_r_166_){
_start:
{
if (lean_obj_tag(v_r_166_) == 0)
{
lean_object* v_a_167_; lean_object* v___x_169_; uint8_t v_isShared_170_; uint8_t v_isSharedCheck_174_; 
v_a_167_ = lean_ctor_get(v_r_166_, 0);
v_isSharedCheck_174_ = !lean_is_exclusive(v_r_166_);
if (v_isSharedCheck_174_ == 0)
{
lean_object* v_unused_175_; 
v_unused_175_ = lean_ctor_get(v_r_166_, 1);
lean_dec(v_unused_175_);
v___x_169_ = v_r_166_;
v_isShared_170_ = v_isSharedCheck_174_;
goto v_resetjp_168_;
}
else
{
lean_inc(v_a_167_);
lean_dec(v_r_166_);
v___x_169_ = lean_box(0);
v_isShared_170_ = v_isSharedCheck_174_;
goto v_resetjp_168_;
}
v_resetjp_168_:
{
lean_object* v___x_172_; 
if (v_isShared_170_ == 0)
{
lean_ctor_set(v___x_169_, 1, v_s_165_);
v___x_172_ = v___x_169_;
goto v_reusejp_171_;
}
else
{
lean_object* v_reuseFailAlloc_173_; 
v_reuseFailAlloc_173_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_173_, 0, v_a_167_);
lean_ctor_set(v_reuseFailAlloc_173_, 1, v_s_165_);
v___x_172_ = v_reuseFailAlloc_173_;
goto v_reusejp_171_;
}
v_reusejp_171_:
{
return v___x_172_;
}
}
}
else
{
lean_object* v_a_176_; lean_object* v___x_178_; uint8_t v_isShared_179_; uint8_t v_isSharedCheck_183_; 
v_a_176_ = lean_ctor_get(v_r_166_, 0);
v_isSharedCheck_183_ = !lean_is_exclusive(v_r_166_);
if (v_isSharedCheck_183_ == 0)
{
lean_object* v_unused_184_; 
v_unused_184_ = lean_ctor_get(v_r_166_, 1);
lean_dec(v_unused_184_);
v___x_178_ = v_r_166_;
v_isShared_179_ = v_isSharedCheck_183_;
goto v_resetjp_177_;
}
else
{
lean_inc(v_a_176_);
lean_dec(v_r_166_);
v___x_178_ = lean_box(0);
v_isShared_179_ = v_isSharedCheck_183_;
goto v_resetjp_177_;
}
v_resetjp_177_:
{
lean_object* v___x_181_; 
if (v_isShared_179_ == 0)
{
lean_ctor_set(v___x_178_, 1, v_s_165_);
v___x_181_ = v___x_178_;
goto v_reusejp_180_;
}
else
{
lean_object* v_reuseFailAlloc_182_; 
v_reuseFailAlloc_182_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_182_, 0, v_a_176_);
lean_ctor_set(v_reuseFailAlloc_182_, 1, v_s_165_);
v___x_181_ = v_reuseFailAlloc_182_;
goto v_reusejp_180_;
}
v_reusejp_180_:
{
return v___x_181_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_EResult_toProd___redArg(lean_object* v_x_185_){
_start:
{
if (lean_obj_tag(v_x_185_) == 0)
{
lean_object* v_a_186_; lean_object* v_a_187_; lean_object* v___x_189_; uint8_t v_isShared_190_; uint8_t v_isSharedCheck_195_; 
v_a_186_ = lean_ctor_get(v_x_185_, 0);
v_a_187_ = lean_ctor_get(v_x_185_, 1);
v_isSharedCheck_195_ = !lean_is_exclusive(v_x_185_);
if (v_isSharedCheck_195_ == 0)
{
v___x_189_ = v_x_185_;
v_isShared_190_ = v_isSharedCheck_195_;
goto v_resetjp_188_;
}
else
{
lean_inc(v_a_187_);
lean_inc(v_a_186_);
lean_dec(v_x_185_);
v___x_189_ = lean_box(0);
v_isShared_190_ = v_isSharedCheck_195_;
goto v_resetjp_188_;
}
v_resetjp_188_:
{
lean_object* v___x_191_; lean_object* v___x_193_; 
v___x_191_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_191_, 0, v_a_186_);
if (v_isShared_190_ == 0)
{
lean_ctor_set(v___x_189_, 0, v___x_191_);
v___x_193_ = v___x_189_;
goto v_reusejp_192_;
}
else
{
lean_object* v_reuseFailAlloc_194_; 
v_reuseFailAlloc_194_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_194_, 0, v___x_191_);
lean_ctor_set(v_reuseFailAlloc_194_, 1, v_a_187_);
v___x_193_ = v_reuseFailAlloc_194_;
goto v_reusejp_192_;
}
v_reusejp_192_:
{
return v___x_193_;
}
}
}
else
{
lean_object* v_a_196_; lean_object* v_a_197_; lean_object* v___x_199_; uint8_t v_isShared_200_; uint8_t v_isSharedCheck_205_; 
v_a_196_ = lean_ctor_get(v_x_185_, 0);
v_a_197_ = lean_ctor_get(v_x_185_, 1);
v_isSharedCheck_205_ = !lean_is_exclusive(v_x_185_);
if (v_isSharedCheck_205_ == 0)
{
v___x_199_ = v_x_185_;
v_isShared_200_ = v_isSharedCheck_205_;
goto v_resetjp_198_;
}
else
{
lean_inc(v_a_197_);
lean_inc(v_a_196_);
lean_dec(v_x_185_);
v___x_199_ = lean_box(0);
v_isShared_200_ = v_isSharedCheck_205_;
goto v_resetjp_198_;
}
v_resetjp_198_:
{
lean_object* v___x_201_; lean_object* v___x_203_; 
v___x_201_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_201_, 0, v_a_196_);
if (v_isShared_200_ == 0)
{
lean_ctor_set_tag(v___x_199_, 0);
lean_ctor_set(v___x_199_, 0, v___x_201_);
v___x_203_ = v___x_199_;
goto v_reusejp_202_;
}
else
{
lean_object* v_reuseFailAlloc_204_; 
v_reuseFailAlloc_204_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_204_, 0, v___x_201_);
lean_ctor_set(v_reuseFailAlloc_204_, 1, v_a_197_);
v___x_203_ = v_reuseFailAlloc_204_;
goto v_reusejp_202_;
}
v_reusejp_202_:
{
return v___x_203_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_EResult_toProd(lean_object* v_00_u03b5_206_, lean_object* v_00_u03c3_207_, lean_object* v_00_u03b1_208_, lean_object* v_x_209_){
_start:
{
if (lean_obj_tag(v_x_209_) == 0)
{
lean_object* v_a_210_; lean_object* v_a_211_; lean_object* v___x_213_; uint8_t v_isShared_214_; uint8_t v_isSharedCheck_219_; 
v_a_210_ = lean_ctor_get(v_x_209_, 0);
v_a_211_ = lean_ctor_get(v_x_209_, 1);
v_isSharedCheck_219_ = !lean_is_exclusive(v_x_209_);
if (v_isSharedCheck_219_ == 0)
{
v___x_213_ = v_x_209_;
v_isShared_214_ = v_isSharedCheck_219_;
goto v_resetjp_212_;
}
else
{
lean_inc(v_a_211_);
lean_inc(v_a_210_);
lean_dec(v_x_209_);
v___x_213_ = lean_box(0);
v_isShared_214_ = v_isSharedCheck_219_;
goto v_resetjp_212_;
}
v_resetjp_212_:
{
lean_object* v___x_215_; lean_object* v___x_217_; 
v___x_215_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_215_, 0, v_a_210_);
if (v_isShared_214_ == 0)
{
lean_ctor_set(v___x_213_, 0, v___x_215_);
v___x_217_ = v___x_213_;
goto v_reusejp_216_;
}
else
{
lean_object* v_reuseFailAlloc_218_; 
v_reuseFailAlloc_218_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_218_, 0, v___x_215_);
lean_ctor_set(v_reuseFailAlloc_218_, 1, v_a_211_);
v___x_217_ = v_reuseFailAlloc_218_;
goto v_reusejp_216_;
}
v_reusejp_216_:
{
return v___x_217_;
}
}
}
else
{
lean_object* v_a_220_; lean_object* v_a_221_; lean_object* v___x_223_; uint8_t v_isShared_224_; uint8_t v_isSharedCheck_229_; 
v_a_220_ = lean_ctor_get(v_x_209_, 0);
v_a_221_ = lean_ctor_get(v_x_209_, 1);
v_isSharedCheck_229_ = !lean_is_exclusive(v_x_209_);
if (v_isSharedCheck_229_ == 0)
{
v___x_223_ = v_x_209_;
v_isShared_224_ = v_isSharedCheck_229_;
goto v_resetjp_222_;
}
else
{
lean_inc(v_a_221_);
lean_inc(v_a_220_);
lean_dec(v_x_209_);
v___x_223_ = lean_box(0);
v_isShared_224_ = v_isSharedCheck_229_;
goto v_resetjp_222_;
}
v_resetjp_222_:
{
lean_object* v___x_225_; lean_object* v___x_227_; 
v___x_225_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_225_, 0, v_a_220_);
if (v_isShared_224_ == 0)
{
lean_ctor_set_tag(v___x_223_, 0);
lean_ctor_set(v___x_223_, 0, v___x_225_);
v___x_227_ = v___x_223_;
goto v_reusejp_226_;
}
else
{
lean_object* v_reuseFailAlloc_228_; 
v_reuseFailAlloc_228_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_228_, 0, v___x_225_);
lean_ctor_set(v_reuseFailAlloc_228_, 1, v_a_221_);
v___x_227_ = v_reuseFailAlloc_228_;
goto v_reusejp_226_;
}
v_reusejp_226_:
{
return v___x_227_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_EResult_toProd_x3f___redArg(lean_object* v_x_230_){
_start:
{
if (lean_obj_tag(v_x_230_) == 0)
{
lean_object* v_a_231_; lean_object* v_a_232_; lean_object* v___x_234_; uint8_t v_isShared_235_; uint8_t v_isSharedCheck_240_; 
v_a_231_ = lean_ctor_get(v_x_230_, 0);
v_a_232_ = lean_ctor_get(v_x_230_, 1);
v_isSharedCheck_240_ = !lean_is_exclusive(v_x_230_);
if (v_isSharedCheck_240_ == 0)
{
v___x_234_ = v_x_230_;
v_isShared_235_ = v_isSharedCheck_240_;
goto v_resetjp_233_;
}
else
{
lean_inc(v_a_232_);
lean_inc(v_a_231_);
lean_dec(v_x_230_);
v___x_234_ = lean_box(0);
v_isShared_235_ = v_isSharedCheck_240_;
goto v_resetjp_233_;
}
v_resetjp_233_:
{
lean_object* v___x_236_; lean_object* v___x_238_; 
v___x_236_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_236_, 0, v_a_231_);
if (v_isShared_235_ == 0)
{
lean_ctor_set(v___x_234_, 0, v___x_236_);
v___x_238_ = v___x_234_;
goto v_reusejp_237_;
}
else
{
lean_object* v_reuseFailAlloc_239_; 
v_reuseFailAlloc_239_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_239_, 0, v___x_236_);
lean_ctor_set(v_reuseFailAlloc_239_, 1, v_a_232_);
v___x_238_ = v_reuseFailAlloc_239_;
goto v_reusejp_237_;
}
v_reusejp_237_:
{
return v___x_238_;
}
}
}
else
{
lean_object* v_a_241_; lean_object* v___x_243_; uint8_t v_isShared_244_; uint8_t v_isSharedCheck_249_; 
v_a_241_ = lean_ctor_get(v_x_230_, 1);
v_isSharedCheck_249_ = !lean_is_exclusive(v_x_230_);
if (v_isSharedCheck_249_ == 0)
{
lean_object* v_unused_250_; 
v_unused_250_ = lean_ctor_get(v_x_230_, 0);
lean_dec(v_unused_250_);
v___x_243_ = v_x_230_;
v_isShared_244_ = v_isSharedCheck_249_;
goto v_resetjp_242_;
}
else
{
lean_inc(v_a_241_);
lean_dec(v_x_230_);
v___x_243_ = lean_box(0);
v_isShared_244_ = v_isSharedCheck_249_;
goto v_resetjp_242_;
}
v_resetjp_242_:
{
lean_object* v___x_245_; lean_object* v___x_247_; 
v___x_245_ = lean_box(0);
if (v_isShared_244_ == 0)
{
lean_ctor_set_tag(v___x_243_, 0);
lean_ctor_set(v___x_243_, 0, v___x_245_);
v___x_247_ = v___x_243_;
goto v_reusejp_246_;
}
else
{
lean_object* v_reuseFailAlloc_248_; 
v_reuseFailAlloc_248_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_248_, 0, v___x_245_);
lean_ctor_set(v_reuseFailAlloc_248_, 1, v_a_241_);
v___x_247_ = v_reuseFailAlloc_248_;
goto v_reusejp_246_;
}
v_reusejp_246_:
{
return v___x_247_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_EResult_toProd_x3f(lean_object* v_00_u03b5_251_, lean_object* v_00_u03c3_252_, lean_object* v_00_u03b1_253_, lean_object* v_x_254_){
_start:
{
if (lean_obj_tag(v_x_254_) == 0)
{
lean_object* v_a_255_; lean_object* v_a_256_; lean_object* v___x_258_; uint8_t v_isShared_259_; uint8_t v_isSharedCheck_264_; 
v_a_255_ = lean_ctor_get(v_x_254_, 0);
v_a_256_ = lean_ctor_get(v_x_254_, 1);
v_isSharedCheck_264_ = !lean_is_exclusive(v_x_254_);
if (v_isSharedCheck_264_ == 0)
{
v___x_258_ = v_x_254_;
v_isShared_259_ = v_isSharedCheck_264_;
goto v_resetjp_257_;
}
else
{
lean_inc(v_a_256_);
lean_inc(v_a_255_);
lean_dec(v_x_254_);
v___x_258_ = lean_box(0);
v_isShared_259_ = v_isSharedCheck_264_;
goto v_resetjp_257_;
}
v_resetjp_257_:
{
lean_object* v___x_260_; lean_object* v___x_262_; 
v___x_260_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_260_, 0, v_a_255_);
if (v_isShared_259_ == 0)
{
lean_ctor_set(v___x_258_, 0, v___x_260_);
v___x_262_ = v___x_258_;
goto v_reusejp_261_;
}
else
{
lean_object* v_reuseFailAlloc_263_; 
v_reuseFailAlloc_263_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_263_, 0, v___x_260_);
lean_ctor_set(v_reuseFailAlloc_263_, 1, v_a_256_);
v___x_262_ = v_reuseFailAlloc_263_;
goto v_reusejp_261_;
}
v_reusejp_261_:
{
return v___x_262_;
}
}
}
else
{
lean_object* v_a_265_; lean_object* v___x_267_; uint8_t v_isShared_268_; uint8_t v_isSharedCheck_273_; 
v_a_265_ = lean_ctor_get(v_x_254_, 1);
v_isSharedCheck_273_ = !lean_is_exclusive(v_x_254_);
if (v_isSharedCheck_273_ == 0)
{
lean_object* v_unused_274_; 
v_unused_274_ = lean_ctor_get(v_x_254_, 0);
lean_dec(v_unused_274_);
v___x_267_ = v_x_254_;
v_isShared_268_ = v_isSharedCheck_273_;
goto v_resetjp_266_;
}
else
{
lean_inc(v_a_265_);
lean_dec(v_x_254_);
v___x_267_ = lean_box(0);
v_isShared_268_ = v_isSharedCheck_273_;
goto v_resetjp_266_;
}
v_resetjp_266_:
{
lean_object* v___x_269_; lean_object* v___x_271_; 
v___x_269_ = lean_box(0);
if (v_isShared_268_ == 0)
{
lean_ctor_set_tag(v___x_267_, 0);
lean_ctor_set(v___x_267_, 0, v___x_269_);
v___x_271_ = v___x_267_;
goto v_reusejp_270_;
}
else
{
lean_object* v_reuseFailAlloc_272_; 
v_reuseFailAlloc_272_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_272_, 0, v___x_269_);
lean_ctor_set(v_reuseFailAlloc_272_, 1, v_a_265_);
v___x_271_ = v_reuseFailAlloc_272_;
goto v_reusejp_270_;
}
v_reusejp_270_:
{
return v___x_271_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_EResult_result_x3f___redArg(lean_object* v_x_275_){
_start:
{
if (lean_obj_tag(v_x_275_) == 0)
{
lean_object* v_a_276_; lean_object* v___x_277_; 
v_a_276_ = lean_ctor_get(v_x_275_, 0);
lean_inc(v_a_276_);
v___x_277_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_277_, 0, v_a_276_);
return v___x_277_;
}
else
{
lean_object* v___x_278_; 
v___x_278_ = lean_box(0);
return v___x_278_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_EResult_result_x3f___redArg___boxed(lean_object* v_x_279_){
_start:
{
lean_object* v_res_280_; 
v_res_280_ = l_Lake_EResult_result_x3f___redArg(v_x_279_);
lean_dec_ref(v_x_279_);
return v_res_280_;
}
}
LEAN_EXPORT lean_object* l_Lake_EResult_result_x3f(lean_object* v_00_u03b5_281_, lean_object* v_00_u03c3_282_, lean_object* v_00_u03b1_283_, lean_object* v_x_284_){
_start:
{
if (lean_obj_tag(v_x_284_) == 0)
{
lean_object* v_a_285_; lean_object* v___x_286_; 
v_a_285_ = lean_ctor_get(v_x_284_, 0);
lean_inc(v_a_285_);
v___x_286_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_286_, 0, v_a_285_);
return v___x_286_;
}
else
{
lean_object* v___x_287_; 
v___x_287_ = lean_box(0);
return v___x_287_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_EResult_result_x3f___boxed(lean_object* v_00_u03b5_288_, lean_object* v_00_u03c3_289_, lean_object* v_00_u03b1_290_, lean_object* v_x_291_){
_start:
{
lean_object* v_res_292_; 
v_res_292_ = l_Lake_EResult_result_x3f(v_00_u03b5_288_, v_00_u03c3_289_, v_00_u03b1_290_, v_x_291_);
lean_dec_ref(v_x_291_);
return v_res_292_;
}
}
LEAN_EXPORT lean_object* l_Lake_EResult_error_x3f___redArg(lean_object* v_x_293_){
_start:
{
if (lean_obj_tag(v_x_293_) == 0)
{
lean_object* v___x_294_; 
v___x_294_ = lean_box(0);
return v___x_294_;
}
else
{
lean_object* v_a_295_; lean_object* v___x_296_; 
v_a_295_ = lean_ctor_get(v_x_293_, 0);
lean_inc(v_a_295_);
v___x_296_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_296_, 0, v_a_295_);
return v___x_296_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_EResult_error_x3f___redArg___boxed(lean_object* v_x_297_){
_start:
{
lean_object* v_res_298_; 
v_res_298_ = l_Lake_EResult_error_x3f___redArg(v_x_297_);
lean_dec_ref(v_x_297_);
return v_res_298_;
}
}
LEAN_EXPORT lean_object* l_Lake_EResult_error_x3f(lean_object* v_00_u03b5_299_, lean_object* v_00_u03c3_300_, lean_object* v_00_u03b1_301_, lean_object* v_x_302_){
_start:
{
if (lean_obj_tag(v_x_302_) == 0)
{
lean_object* v___x_303_; 
v___x_303_ = lean_box(0);
return v___x_303_;
}
else
{
lean_object* v_a_304_; lean_object* v___x_305_; 
v_a_304_ = lean_ctor_get(v_x_302_, 0);
lean_inc(v_a_304_);
v___x_305_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_305_, 0, v_a_304_);
return v___x_305_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_EResult_error_x3f___boxed(lean_object* v_00_u03b5_306_, lean_object* v_00_u03c3_307_, lean_object* v_00_u03b1_308_, lean_object* v_x_309_){
_start:
{
lean_object* v_res_310_; 
v_res_310_ = l_Lake_EResult_error_x3f(v_00_u03b5_306_, v_00_u03c3_307_, v_00_u03b1_308_, v_x_309_);
lean_dec_ref(v_x_309_);
return v_res_310_;
}
}
LEAN_EXPORT lean_object* l_Lake_EResult_toExcept___redArg(lean_object* v_x_311_){
_start:
{
if (lean_obj_tag(v_x_311_) == 0)
{
lean_object* v_a_312_; lean_object* v___x_313_; 
v_a_312_ = lean_ctor_get(v_x_311_, 0);
lean_inc(v_a_312_);
v___x_313_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_313_, 0, v_a_312_);
return v___x_313_;
}
else
{
lean_object* v_a_314_; lean_object* v___x_315_; 
v_a_314_ = lean_ctor_get(v_x_311_, 0);
lean_inc(v_a_314_);
v___x_315_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_315_, 0, v_a_314_);
return v___x_315_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_EResult_toExcept___redArg___boxed(lean_object* v_x_316_){
_start:
{
lean_object* v_res_317_; 
v_res_317_ = l_Lake_EResult_toExcept___redArg(v_x_316_);
lean_dec_ref(v_x_316_);
return v_res_317_;
}
}
LEAN_EXPORT lean_object* l_Lake_EResult_toExcept(lean_object* v_00_u03b5_318_, lean_object* v_00_u03c3_319_, lean_object* v_00_u03b1_320_, lean_object* v_x_321_){
_start:
{
if (lean_obj_tag(v_x_321_) == 0)
{
lean_object* v_a_322_; lean_object* v___x_323_; 
v_a_322_ = lean_ctor_get(v_x_321_, 0);
lean_inc(v_a_322_);
v___x_323_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_323_, 0, v_a_322_);
return v___x_323_;
}
else
{
lean_object* v_a_324_; lean_object* v___x_325_; 
v_a_324_ = lean_ctor_get(v_x_321_, 0);
lean_inc(v_a_324_);
v___x_325_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_325_, 0, v_a_324_);
return v___x_325_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_EResult_toExcept___boxed(lean_object* v_00_u03b5_326_, lean_object* v_00_u03c3_327_, lean_object* v_00_u03b1_328_, lean_object* v_x_329_){
_start:
{
lean_object* v_res_330_; 
v_res_330_ = l_Lake_EResult_toExcept(v_00_u03b5_326_, v_00_u03c3_327_, v_00_u03b1_328_, v_x_329_);
lean_dec_ref(v_x_329_);
return v_res_330_;
}
}
LEAN_EXPORT lean_object* l_Lake_EResult_map___redArg(lean_object* v_f_331_, lean_object* v_x_332_){
_start:
{
if (lean_obj_tag(v_x_332_) == 0)
{
lean_object* v_a_333_; lean_object* v_a_334_; lean_object* v___x_336_; uint8_t v_isShared_337_; uint8_t v_isSharedCheck_342_; 
v_a_333_ = lean_ctor_get(v_x_332_, 0);
v_a_334_ = lean_ctor_get(v_x_332_, 1);
v_isSharedCheck_342_ = !lean_is_exclusive(v_x_332_);
if (v_isSharedCheck_342_ == 0)
{
v___x_336_ = v_x_332_;
v_isShared_337_ = v_isSharedCheck_342_;
goto v_resetjp_335_;
}
else
{
lean_inc(v_a_334_);
lean_inc(v_a_333_);
lean_dec(v_x_332_);
v___x_336_ = lean_box(0);
v_isShared_337_ = v_isSharedCheck_342_;
goto v_resetjp_335_;
}
v_resetjp_335_:
{
lean_object* v___x_338_; lean_object* v___x_340_; 
v___x_338_ = lean_apply_1(v_f_331_, v_a_333_);
if (v_isShared_337_ == 0)
{
lean_ctor_set(v___x_336_, 0, v___x_338_);
v___x_340_ = v___x_336_;
goto v_reusejp_339_;
}
else
{
lean_object* v_reuseFailAlloc_341_; 
v_reuseFailAlloc_341_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_341_, 0, v___x_338_);
lean_ctor_set(v_reuseFailAlloc_341_, 1, v_a_334_);
v___x_340_ = v_reuseFailAlloc_341_;
goto v_reusejp_339_;
}
v_reusejp_339_:
{
return v___x_340_;
}
}
}
else
{
lean_object* v_a_343_; lean_object* v_a_344_; lean_object* v___x_346_; uint8_t v_isShared_347_; uint8_t v_isSharedCheck_351_; 
lean_dec(v_f_331_);
v_a_343_ = lean_ctor_get(v_x_332_, 0);
v_a_344_ = lean_ctor_get(v_x_332_, 1);
v_isSharedCheck_351_ = !lean_is_exclusive(v_x_332_);
if (v_isSharedCheck_351_ == 0)
{
v___x_346_ = v_x_332_;
v_isShared_347_ = v_isSharedCheck_351_;
goto v_resetjp_345_;
}
else
{
lean_inc(v_a_344_);
lean_inc(v_a_343_);
lean_dec(v_x_332_);
v___x_346_ = lean_box(0);
v_isShared_347_ = v_isSharedCheck_351_;
goto v_resetjp_345_;
}
v_resetjp_345_:
{
lean_object* v___x_349_; 
if (v_isShared_347_ == 0)
{
v___x_349_ = v___x_346_;
goto v_reusejp_348_;
}
else
{
lean_object* v_reuseFailAlloc_350_; 
v_reuseFailAlloc_350_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_350_, 0, v_a_343_);
lean_ctor_set(v_reuseFailAlloc_350_, 1, v_a_344_);
v___x_349_ = v_reuseFailAlloc_350_;
goto v_reusejp_348_;
}
v_reusejp_348_:
{
return v___x_349_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_EResult_map(lean_object* v_00_u03b1_352_, lean_object* v_00_u03b2_353_, lean_object* v_00_u03b5_354_, lean_object* v_00_u03c3_355_, lean_object* v_f_356_, lean_object* v_x_357_){
_start:
{
if (lean_obj_tag(v_x_357_) == 0)
{
lean_object* v_a_358_; lean_object* v_a_359_; lean_object* v___x_361_; uint8_t v_isShared_362_; uint8_t v_isSharedCheck_367_; 
v_a_358_ = lean_ctor_get(v_x_357_, 0);
v_a_359_ = lean_ctor_get(v_x_357_, 1);
v_isSharedCheck_367_ = !lean_is_exclusive(v_x_357_);
if (v_isSharedCheck_367_ == 0)
{
v___x_361_ = v_x_357_;
v_isShared_362_ = v_isSharedCheck_367_;
goto v_resetjp_360_;
}
else
{
lean_inc(v_a_359_);
lean_inc(v_a_358_);
lean_dec(v_x_357_);
v___x_361_ = lean_box(0);
v_isShared_362_ = v_isSharedCheck_367_;
goto v_resetjp_360_;
}
v_resetjp_360_:
{
lean_object* v___x_363_; lean_object* v___x_365_; 
v___x_363_ = lean_apply_1(v_f_356_, v_a_358_);
if (v_isShared_362_ == 0)
{
lean_ctor_set(v___x_361_, 0, v___x_363_);
v___x_365_ = v___x_361_;
goto v_reusejp_364_;
}
else
{
lean_object* v_reuseFailAlloc_366_; 
v_reuseFailAlloc_366_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_366_, 0, v___x_363_);
lean_ctor_set(v_reuseFailAlloc_366_, 1, v_a_359_);
v___x_365_ = v_reuseFailAlloc_366_;
goto v_reusejp_364_;
}
v_reusejp_364_:
{
return v___x_365_;
}
}
}
else
{
lean_object* v_a_368_; lean_object* v_a_369_; lean_object* v___x_371_; uint8_t v_isShared_372_; uint8_t v_isSharedCheck_376_; 
lean_dec(v_f_356_);
v_a_368_ = lean_ctor_get(v_x_357_, 0);
v_a_369_ = lean_ctor_get(v_x_357_, 1);
v_isSharedCheck_376_ = !lean_is_exclusive(v_x_357_);
if (v_isSharedCheck_376_ == 0)
{
v___x_371_ = v_x_357_;
v_isShared_372_ = v_isSharedCheck_376_;
goto v_resetjp_370_;
}
else
{
lean_inc(v_a_369_);
lean_inc(v_a_368_);
lean_dec(v_x_357_);
v___x_371_ = lean_box(0);
v_isShared_372_ = v_isSharedCheck_376_;
goto v_resetjp_370_;
}
v_resetjp_370_:
{
lean_object* v___x_374_; 
if (v_isShared_372_ == 0)
{
v___x_374_ = v___x_371_;
goto v_reusejp_373_;
}
else
{
lean_object* v_reuseFailAlloc_375_; 
v_reuseFailAlloc_375_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_375_, 0, v_a_368_);
lean_ctor_set(v_reuseFailAlloc_375_, 1, v_a_369_);
v___x_374_ = v_reuseFailAlloc_375_;
goto v_reusejp_373_;
}
v_reusejp_373_:
{
return v___x_374_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_EResult_instFunctor___redArg___lam__0(lean_object* v_00_u03b1_377_, lean_object* v_00_u03b2_378_, lean_object* v___y_379_, lean_object* v___y_380_){
_start:
{
if (lean_obj_tag(v___y_380_) == 0)
{
lean_object* v_a_381_; lean_object* v_a_382_; lean_object* v___x_384_; uint8_t v_isShared_385_; uint8_t v_isSharedCheck_390_; 
v_a_381_ = lean_ctor_get(v___y_380_, 0);
v_a_382_ = lean_ctor_get(v___y_380_, 1);
v_isSharedCheck_390_ = !lean_is_exclusive(v___y_380_);
if (v_isSharedCheck_390_ == 0)
{
v___x_384_ = v___y_380_;
v_isShared_385_ = v_isSharedCheck_390_;
goto v_resetjp_383_;
}
else
{
lean_inc(v_a_382_);
lean_inc(v_a_381_);
lean_dec(v___y_380_);
v___x_384_ = lean_box(0);
v_isShared_385_ = v_isSharedCheck_390_;
goto v_resetjp_383_;
}
v_resetjp_383_:
{
lean_object* v___x_386_; lean_object* v___x_388_; 
v___x_386_ = lean_apply_1(v___y_379_, v_a_381_);
if (v_isShared_385_ == 0)
{
lean_ctor_set(v___x_384_, 0, v___x_386_);
v___x_388_ = v___x_384_;
goto v_reusejp_387_;
}
else
{
lean_object* v_reuseFailAlloc_389_; 
v_reuseFailAlloc_389_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_389_, 0, v___x_386_);
lean_ctor_set(v_reuseFailAlloc_389_, 1, v_a_382_);
v___x_388_ = v_reuseFailAlloc_389_;
goto v_reusejp_387_;
}
v_reusejp_387_:
{
return v___x_388_;
}
}
}
else
{
lean_object* v_a_391_; lean_object* v_a_392_; lean_object* v___x_394_; uint8_t v_isShared_395_; uint8_t v_isSharedCheck_399_; 
lean_dec(v___y_379_);
v_a_391_ = lean_ctor_get(v___y_380_, 0);
v_a_392_ = lean_ctor_get(v___y_380_, 1);
v_isSharedCheck_399_ = !lean_is_exclusive(v___y_380_);
if (v_isSharedCheck_399_ == 0)
{
v___x_394_ = v___y_380_;
v_isShared_395_ = v_isSharedCheck_399_;
goto v_resetjp_393_;
}
else
{
lean_inc(v_a_392_);
lean_inc(v_a_391_);
lean_dec(v___y_380_);
v___x_394_ = lean_box(0);
v_isShared_395_ = v_isSharedCheck_399_;
goto v_resetjp_393_;
}
v_resetjp_393_:
{
lean_object* v___x_397_; 
if (v_isShared_395_ == 0)
{
v___x_397_ = v___x_394_;
goto v_reusejp_396_;
}
else
{
lean_object* v_reuseFailAlloc_398_; 
v_reuseFailAlloc_398_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_398_, 0, v_a_391_);
lean_ctor_set(v_reuseFailAlloc_398_, 1, v_a_392_);
v___x_397_ = v_reuseFailAlloc_398_;
goto v_reusejp_396_;
}
v_reusejp_396_:
{
return v___x_397_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_EResult_instFunctor___redArg___lam__1(lean_object* v___f_400_, lean_object* v_00_u03b1_401_, lean_object* v_00_u03b2_402_, lean_object* v___y_403_, lean_object* v___y_404_){
_start:
{
lean_object* v___x_405_; lean_object* v___x_406_; 
v___x_405_ = lean_alloc_closure((void*)(l_Function_const___boxed), 4, 3);
lean_closure_set(v___x_405_, 0, lean_box(0));
lean_closure_set(v___x_405_, 1, lean_box(0));
lean_closure_set(v___x_405_, 2, v___y_403_);
v___x_406_ = lean_apply_4(v___f_400_, lean_box(0), lean_box(0), v___x_405_, v___y_404_);
return v___x_406_;
}
}
LEAN_EXPORT lean_object* l_Lake_EResult_instFunctor___redArg(){
_start:
{
lean_object* v___x_414_; 
v___x_414_ = ((lean_object*)(l_Lake_EResult_instFunctor___redArg___closed__2));
return v___x_414_;
}
}
LEAN_EXPORT lean_object* l_Lake_EResult_instFunctor___redArg___boxed(lean_object* v___dummy_415_){
_start:
{
lean_object* v_res_416_; 
v_res_416_ = l_Lake_EResult_instFunctor___redArg();
return v_res_416_;
}
}
static lean_object* _init_l_Lake_EResult_instFunctor___closed__0(void){
_start:
{
lean_object* v___x_417_; 
v___x_417_ = l_Lake_EResult_instFunctor___redArg();
return v___x_417_;
}
}
LEAN_EXPORT lean_object* l_Lake_EResult_instFunctor(lean_object* v_00_u03b5_418_, lean_object* v_00_u03c3_419_){
_start:
{
lean_object* v___x_420_; 
v___x_420_ = lean_obj_once(&l_Lake_EResult_instFunctor___closed__0, &l_Lake_EResult_instFunctor___closed__0_once, _init_l_Lake_EResult_instFunctor___closed__0);
return v___x_420_;
}
}
LEAN_EXPORT lean_object* l_Lake_EResult_toEStateMResult___redArg(lean_object* v_x_421_){
_start:
{
if (lean_obj_tag(v_x_421_) == 0)
{
lean_object* v_a_422_; lean_object* v_a_423_; lean_object* v___x_425_; uint8_t v_isShared_426_; uint8_t v_isSharedCheck_430_; 
v_a_422_ = lean_ctor_get(v_x_421_, 0);
v_a_423_ = lean_ctor_get(v_x_421_, 1);
v_isSharedCheck_430_ = !lean_is_exclusive(v_x_421_);
if (v_isSharedCheck_430_ == 0)
{
v___x_425_ = v_x_421_;
v_isShared_426_ = v_isSharedCheck_430_;
goto v_resetjp_424_;
}
else
{
lean_inc(v_a_423_);
lean_inc(v_a_422_);
lean_dec(v_x_421_);
v___x_425_ = lean_box(0);
v_isShared_426_ = v_isSharedCheck_430_;
goto v_resetjp_424_;
}
v_resetjp_424_:
{
lean_object* v___x_428_; 
if (v_isShared_426_ == 0)
{
v___x_428_ = v___x_425_;
goto v_reusejp_427_;
}
else
{
lean_object* v_reuseFailAlloc_429_; 
v_reuseFailAlloc_429_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_429_, 0, v_a_422_);
lean_ctor_set(v_reuseFailAlloc_429_, 1, v_a_423_);
v___x_428_ = v_reuseFailAlloc_429_;
goto v_reusejp_427_;
}
v_reusejp_427_:
{
return v___x_428_;
}
}
}
else
{
lean_object* v_a_431_; lean_object* v_a_432_; lean_object* v___x_434_; uint8_t v_isShared_435_; uint8_t v_isSharedCheck_439_; 
v_a_431_ = lean_ctor_get(v_x_421_, 0);
v_a_432_ = lean_ctor_get(v_x_421_, 1);
v_isSharedCheck_439_ = !lean_is_exclusive(v_x_421_);
if (v_isSharedCheck_439_ == 0)
{
v___x_434_ = v_x_421_;
v_isShared_435_ = v_isSharedCheck_439_;
goto v_resetjp_433_;
}
else
{
lean_inc(v_a_432_);
lean_inc(v_a_431_);
lean_dec(v_x_421_);
v___x_434_ = lean_box(0);
v_isShared_435_ = v_isSharedCheck_439_;
goto v_resetjp_433_;
}
v_resetjp_433_:
{
lean_object* v___x_437_; 
if (v_isShared_435_ == 0)
{
v___x_437_ = v___x_434_;
goto v_reusejp_436_;
}
else
{
lean_object* v_reuseFailAlloc_438_; 
v_reuseFailAlloc_438_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_438_, 0, v_a_431_);
lean_ctor_set(v_reuseFailAlloc_438_, 1, v_a_432_);
v___x_437_ = v_reuseFailAlloc_438_;
goto v_reusejp_436_;
}
v_reusejp_436_:
{
return v___x_437_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_EResult_toEStateMResult(lean_object* v_00_u03b5_440_, lean_object* v_00_u03c3_441_, lean_object* v_00_u03b1_442_, lean_object* v_x_443_){
_start:
{
lean_object* v___x_444_; 
v___x_444_ = l_Lake_EResult_toEStateMResult___redArg(v_x_443_);
return v___x_444_;
}
}
LEAN_EXPORT lean_object* l_Lake_EResult_ofEStateMResult___redArg(lean_object* v_x_445_){
_start:
{
if (lean_obj_tag(v_x_445_) == 0)
{
lean_object* v_a_446_; lean_object* v_a_447_; lean_object* v___x_449_; uint8_t v_isShared_450_; uint8_t v_isSharedCheck_454_; 
v_a_446_ = lean_ctor_get(v_x_445_, 0);
v_a_447_ = lean_ctor_get(v_x_445_, 1);
v_isSharedCheck_454_ = !lean_is_exclusive(v_x_445_);
if (v_isSharedCheck_454_ == 0)
{
v___x_449_ = v_x_445_;
v_isShared_450_ = v_isSharedCheck_454_;
goto v_resetjp_448_;
}
else
{
lean_inc(v_a_447_);
lean_inc(v_a_446_);
lean_dec(v_x_445_);
v___x_449_ = lean_box(0);
v_isShared_450_ = v_isSharedCheck_454_;
goto v_resetjp_448_;
}
v_resetjp_448_:
{
lean_object* v___x_452_; 
if (v_isShared_450_ == 0)
{
v___x_452_ = v___x_449_;
goto v_reusejp_451_;
}
else
{
lean_object* v_reuseFailAlloc_453_; 
v_reuseFailAlloc_453_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_453_, 0, v_a_446_);
lean_ctor_set(v_reuseFailAlloc_453_, 1, v_a_447_);
v___x_452_ = v_reuseFailAlloc_453_;
goto v_reusejp_451_;
}
v_reusejp_451_:
{
return v___x_452_;
}
}
}
else
{
lean_object* v_a_455_; lean_object* v_a_456_; lean_object* v___x_458_; uint8_t v_isShared_459_; uint8_t v_isSharedCheck_463_; 
v_a_455_ = lean_ctor_get(v_x_445_, 0);
v_a_456_ = lean_ctor_get(v_x_445_, 1);
v_isSharedCheck_463_ = !lean_is_exclusive(v_x_445_);
if (v_isSharedCheck_463_ == 0)
{
v___x_458_ = v_x_445_;
v_isShared_459_ = v_isSharedCheck_463_;
goto v_resetjp_457_;
}
else
{
lean_inc(v_a_456_);
lean_inc(v_a_455_);
lean_dec(v_x_445_);
v___x_458_ = lean_box(0);
v_isShared_459_ = v_isSharedCheck_463_;
goto v_resetjp_457_;
}
v_resetjp_457_:
{
lean_object* v___x_461_; 
if (v_isShared_459_ == 0)
{
v___x_461_ = v___x_458_;
goto v_reusejp_460_;
}
else
{
lean_object* v_reuseFailAlloc_462_; 
v_reuseFailAlloc_462_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_462_, 0, v_a_455_);
lean_ctor_set(v_reuseFailAlloc_462_, 1, v_a_456_);
v___x_461_ = v_reuseFailAlloc_462_;
goto v_reusejp_460_;
}
v_reusejp_460_:
{
return v___x_461_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_EResult_ofEStateMResult(lean_object* v_00_u03b5_464_, lean_object* v_00_u03c3_465_, lean_object* v_00_u03b1_466_, lean_object* v_x_467_){
_start:
{
lean_object* v___x_468_; 
v___x_468_ = l_Lake_EResult_ofEStateMResult___redArg(v_x_467_);
return v___x_468_;
}
}
LEAN_EXPORT lean_object* l_Lake_EStateT_mk___redArg(lean_object* v_toFn_469_, lean_object* v_a_470_){
_start:
{
lean_object* v___x_471_; 
v___x_471_ = lean_apply_1(v_toFn_469_, v_a_470_);
return v___x_471_;
}
}
LEAN_EXPORT lean_object* l_Lake_EStateT_mk(lean_object* v_00_u03b5_472_, lean_object* v_00_u03c3_473_, lean_object* v_m_474_, lean_object* v_00_u03b1_475_, lean_object* v_toFn_476_, lean_object* v_a_477_){
_start:
{
lean_object* v___x_478_; 
v___x_478_ = lean_apply_1(v_toFn_476_, v_a_477_);
return v___x_478_;
}
}
LEAN_EXPORT lean_object* l_Lake_EStateT_toFn___redArg(lean_object* v_self_479_, lean_object* v_a_480_){
_start:
{
lean_object* v___x_481_; 
v___x_481_ = lean_apply_1(v_self_479_, v_a_480_);
return v___x_481_;
}
}
LEAN_EXPORT lean_object* l_Lake_EStateT_toFn(lean_object* v_00_u03b5_482_, lean_object* v_00_u03c3_483_, lean_object* v_m_484_, lean_object* v_00_u03b1_485_, lean_object* v_self_486_, lean_object* v_a_487_){
_start:
{
lean_object* v___x_488_; 
v___x_488_ = lean_apply_1(v_self_486_, v_a_487_);
return v___x_488_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Util_EStateT_0__Lake_EStateT_instInhabitedOfPure___redArg___lam__0(lean_object* v_inst_489_, lean_object* v_inst_490_, lean_object* v_s_491_){
_start:
{
lean_object* v___x_492_; lean_object* v___x_493_; 
v___x_492_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_492_, 0, v_inst_489_);
lean_ctor_set(v___x_492_, 1, v_s_491_);
v___x_493_ = lean_apply_2(v_inst_490_, lean_box(0), v___x_492_);
return v___x_493_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Util_EStateT_0__Lake_EStateT_instInhabitedOfPure___redArg(lean_object* v_inst_494_, lean_object* v_inst_495_){
_start:
{
lean_object* v___f_496_; lean_object* v___x_497_; 
v___f_496_ = lean_alloc_closure((void*)(l___private_Lake_Util_EStateT_0__Lake_EStateT_instInhabitedOfPure___redArg___lam__0), 3, 2);
lean_closure_set(v___f_496_, 0, v_inst_494_);
lean_closure_set(v___f_496_, 1, v_inst_495_);
v___x_497_ = lean_alloc_closure((void*)(l_Lake_EStateT_mk), 6, 5);
lean_closure_set(v___x_497_, 0, lean_box(0));
lean_closure_set(v___x_497_, 1, lean_box(0));
lean_closure_set(v___x_497_, 2, lean_box(0));
lean_closure_set(v___x_497_, 3, lean_box(0));
lean_closure_set(v___x_497_, 4, v___f_496_);
return v___x_497_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Util_EStateT_0__Lake_EStateT_instInhabitedOfPure(lean_object* v_00_u03b5_498_, lean_object* v_00_u03c3_499_, lean_object* v_00_u03b1_500_, lean_object* v_m_501_, lean_object* v_inst_502_, lean_object* v_inst_503_){
_start:
{
lean_object* v___x_504_; 
v___x_504_ = l___private_Lake_Util_EStateT_0__Lake_EStateT_instInhabitedOfPure___redArg(v_inst_502_, v_inst_503_);
return v___x_504_;
}
}
LEAN_EXPORT lean_object* l_Lake_EStateT_run___redArg(lean_object* v_init_505_, lean_object* v_self_506_){
_start:
{
lean_object* v___x_507_; 
v___x_507_ = lean_apply_1(v_self_506_, v_init_505_);
return v___x_507_;
}
}
LEAN_EXPORT lean_object* l_Lake_EStateT_run(lean_object* v_00_u03b5_508_, lean_object* v_00_u03c3_509_, lean_object* v_00_u03b1_510_, lean_object* v_m_511_, lean_object* v_init_512_, lean_object* v_self_513_){
_start:
{
lean_object* v___x_514_; 
v___x_514_ = lean_apply_1(v_self_513_, v_init_512_);
return v___x_514_;
}
}
LEAN_EXPORT lean_object* l_Lake_EStateT_run_x27___redArg(lean_object* v_inst_516_, lean_object* v_init_517_, lean_object* v_x_518_){
_start:
{
lean_object* v_map_519_; lean_object* v___x_520_; lean_object* v___x_521_; lean_object* v___x_522_; 
v_map_519_ = lean_ctor_get(v_inst_516_, 0);
lean_inc(v_map_519_);
lean_dec_ref(v_inst_516_);
v___x_520_ = ((lean_object*)(l_Lake_EStateT_run_x27___redArg___closed__0));
v___x_521_ = lean_apply_1(v_x_518_, v_init_517_);
v___x_522_ = lean_apply_4(v_map_519_, lean_box(0), lean_box(0), v___x_520_, v___x_521_);
return v___x_522_;
}
}
LEAN_EXPORT lean_object* l_Lake_EStateT_run_x27(lean_object* v_00_u03b5_523_, lean_object* v_00_u03b1_524_, lean_object* v_m_525_, lean_object* v_00_u03c3_526_, lean_object* v_inst_527_, lean_object* v_init_528_, lean_object* v_x_529_){
_start:
{
lean_object* v_map_530_; lean_object* v___x_531_; lean_object* v___x_532_; lean_object* v___x_533_; 
v_map_530_ = lean_ctor_get(v_inst_527_, 0);
lean_inc(v_map_530_);
lean_dec_ref(v_inst_527_);
v___x_531_ = ((lean_object*)(l_Lake_EStateT_run_x27___redArg___closed__0));
v___x_532_ = lean_apply_1(v_x_529_, v_init_528_);
v___x_533_ = lean_apply_4(v_map_530_, lean_box(0), lean_box(0), v___x_531_, v___x_532_);
return v___x_533_;
}
}
LEAN_EXPORT lean_object* l_Lake_EStateT_toStateT___redArg(lean_object* v_inst_535_, lean_object* v_x_536_, lean_object* v___y_537_){
_start:
{
lean_object* v_map_538_; lean_object* v___x_539_; lean_object* v___x_540_; lean_object* v___x_541_; 
v_map_538_ = lean_ctor_get(v_inst_535_, 0);
lean_inc(v_map_538_);
lean_dec_ref(v_inst_535_);
v___x_539_ = ((lean_object*)(l_Lake_EStateT_toStateT___redArg___closed__0));
v___x_540_ = lean_apply_1(v_x_536_, v___y_537_);
v___x_541_ = lean_apply_4(v_map_538_, lean_box(0), lean_box(0), v___x_539_, v___x_540_);
return v___x_541_;
}
}
LEAN_EXPORT lean_object* l_Lake_EStateT_toStateT(lean_object* v_m_542_, lean_object* v_00_u03b5_543_, lean_object* v_00_u03c3_544_, lean_object* v_00_u03b1_545_, lean_object* v_inst_546_, lean_object* v_x_547_, lean_object* v___y_548_){
_start:
{
lean_object* v_map_549_; lean_object* v___x_550_; lean_object* v___x_551_; lean_object* v___x_552_; 
v_map_549_ = lean_ctor_get(v_inst_546_, 0);
lean_inc(v_map_549_);
lean_dec_ref(v_inst_546_);
v___x_550_ = ((lean_object*)(l_Lake_EStateT_toStateT___redArg___closed__0));
v___x_551_ = lean_apply_1(v_x_547_, v___y_548_);
v___x_552_ = lean_apply_4(v_map_549_, lean_box(0), lean_box(0), v___x_550_, v___x_551_);
return v___x_552_;
}
}
LEAN_EXPORT lean_object* l_Lake_EStateT_toStateT_x3f___redArg(lean_object* v_inst_554_, lean_object* v_x_555_, lean_object* v___y_556_){
_start:
{
lean_object* v_map_557_; lean_object* v___x_558_; lean_object* v___x_559_; lean_object* v___x_560_; 
v_map_557_ = lean_ctor_get(v_inst_554_, 0);
lean_inc(v_map_557_);
lean_dec_ref(v_inst_554_);
v___x_558_ = ((lean_object*)(l_Lake_EStateT_toStateT_x3f___redArg___closed__0));
v___x_559_ = lean_apply_1(v_x_555_, v___y_556_);
v___x_560_ = lean_apply_4(v_map_557_, lean_box(0), lean_box(0), v___x_558_, v___x_559_);
return v___x_560_;
}
}
LEAN_EXPORT lean_object* l_Lake_EStateT_toStateT_x3f(lean_object* v_m_561_, lean_object* v_00_u03b5_562_, lean_object* v_00_u03c3_563_, lean_object* v_00_u03b1_564_, lean_object* v_inst_565_, lean_object* v_x_566_, lean_object* v___y_567_){
_start:
{
lean_object* v_map_568_; lean_object* v___x_569_; lean_object* v___x_570_; lean_object* v___x_571_; 
v_map_568_ = lean_ctor_get(v_inst_565_, 0);
lean_inc(v_map_568_);
lean_dec_ref(v_inst_565_);
v___x_569_ = ((lean_object*)(l_Lake_EStateT_toStateT_x3f___redArg___closed__0));
v___x_570_ = lean_apply_1(v_x_566_, v___y_567_);
v___x_571_ = lean_apply_4(v_map_568_, lean_box(0), lean_box(0), v___x_569_, v___x_570_);
return v___x_571_;
}
}
LEAN_EXPORT lean_object* l_Lake_EStateT_run_x3f___redArg(lean_object* v_inst_572_, lean_object* v_init_573_, lean_object* v_x_574_){
_start:
{
lean_object* v_map_575_; lean_object* v___x_576_; lean_object* v___x_577_; lean_object* v___x_578_; 
v_map_575_ = lean_ctor_get(v_inst_572_, 0);
lean_inc(v_map_575_);
lean_dec_ref(v_inst_572_);
v___x_576_ = ((lean_object*)(l_Lake_EStateT_toStateT_x3f___redArg___closed__0));
v___x_577_ = lean_apply_1(v_x_574_, v_init_573_);
v___x_578_ = lean_apply_4(v_map_575_, lean_box(0), lean_box(0), v___x_576_, v___x_577_);
return v___x_578_;
}
}
LEAN_EXPORT lean_object* l_Lake_EStateT_run_x3f(lean_object* v_00_u03c3_579_, lean_object* v_00_u03b1_580_, lean_object* v_m_581_, lean_object* v_00_u03b5_582_, lean_object* v_inst_583_, lean_object* v_init_584_, lean_object* v_x_585_){
_start:
{
lean_object* v_map_586_; lean_object* v___x_587_; lean_object* v___x_588_; lean_object* v___x_589_; 
v_map_586_ = lean_ctor_get(v_inst_583_, 0);
lean_inc(v_map_586_);
lean_dec_ref(v_inst_583_);
v___x_587_ = ((lean_object*)(l_Lake_EStateT_toStateT_x3f___redArg___closed__0));
v___x_588_ = lean_apply_1(v_x_585_, v_init_584_);
v___x_589_ = lean_apply_4(v_map_586_, lean_box(0), lean_box(0), v___x_587_, v___x_588_);
return v___x_589_;
}
}
LEAN_EXPORT lean_object* l_Lake_EStateT_run_x3f_x27___redArg(lean_object* v_inst_591_, lean_object* v_init_592_, lean_object* v_x_593_){
_start:
{
lean_object* v_map_594_; lean_object* v___x_595_; lean_object* v___x_596_; lean_object* v___x_597_; 
v_map_594_ = lean_ctor_get(v_inst_591_, 0);
lean_inc(v_map_594_);
lean_dec_ref(v_inst_591_);
v___x_595_ = ((lean_object*)(l_Lake_EStateT_run_x3f_x27___redArg___closed__0));
v___x_596_ = lean_apply_1(v_x_593_, v_init_592_);
v___x_597_ = lean_apply_4(v_map_594_, lean_box(0), lean_box(0), v___x_595_, v___x_596_);
return v___x_597_;
}
}
LEAN_EXPORT lean_object* l_Lake_EStateT_run_x3f_x27(lean_object* v_m_598_, lean_object* v_00_u03b5_599_, lean_object* v_00_u03c3_600_, lean_object* v_00_u03b1_601_, lean_object* v_inst_602_, lean_object* v_init_603_, lean_object* v_x_604_){
_start:
{
lean_object* v_map_605_; lean_object* v___x_606_; lean_object* v___x_607_; lean_object* v___x_608_; 
v_map_605_ = lean_ctor_get(v_inst_602_, 0);
lean_inc(v_map_605_);
lean_dec_ref(v_inst_602_);
v___x_606_ = ((lean_object*)(l_Lake_EStateT_run_x3f_x27___redArg___closed__0));
v___x_607_ = lean_apply_1(v_x_604_, v_init_603_);
v___x_608_ = lean_apply_4(v_map_605_, lean_box(0), lean_box(0), v___x_606_, v___x_607_);
return v___x_608_;
}
}
LEAN_EXPORT lean_object* l_Lake_EStateT_catchExceptions___redArg___lam__0(lean_object* v_toPure_609_, lean_object* v_h_610_, lean_object* v_____do__lift_611_){
_start:
{
if (lean_obj_tag(v_____do__lift_611_) == 0)
{
lean_object* v_a_612_; lean_object* v_a_613_; lean_object* v___x_615_; uint8_t v_isShared_616_; uint8_t v_isSharedCheck_621_; 
lean_dec(v_h_610_);
v_a_612_ = lean_ctor_get(v_____do__lift_611_, 0);
v_a_613_ = lean_ctor_get(v_____do__lift_611_, 1);
v_isSharedCheck_621_ = !lean_is_exclusive(v_____do__lift_611_);
if (v_isSharedCheck_621_ == 0)
{
v___x_615_ = v_____do__lift_611_;
v_isShared_616_ = v_isSharedCheck_621_;
goto v_resetjp_614_;
}
else
{
lean_inc(v_a_613_);
lean_inc(v_a_612_);
lean_dec(v_____do__lift_611_);
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
v_reuseFailAlloc_620_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_620_, 0, v_a_612_);
lean_ctor_set(v_reuseFailAlloc_620_, 1, v_a_613_);
v___x_618_ = v_reuseFailAlloc_620_;
goto v_reusejp_617_;
}
v_reusejp_617_:
{
lean_object* v___x_619_; 
v___x_619_ = lean_apply_2(v_toPure_609_, lean_box(0), v___x_618_);
return v___x_619_;
}
}
}
else
{
lean_object* v_a_622_; lean_object* v_a_623_; lean_object* v___x_624_; 
lean_dec(v_toPure_609_);
v_a_622_ = lean_ctor_get(v_____do__lift_611_, 0);
lean_inc(v_a_622_);
v_a_623_ = lean_ctor_get(v_____do__lift_611_, 1);
lean_inc(v_a_623_);
lean_dec_ref_known(v_____do__lift_611_, 2);
v___x_624_ = lean_apply_2(v_h_610_, v_a_622_, v_a_623_);
return v___x_624_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_EStateT_catchExceptions___redArg(lean_object* v_inst_625_, lean_object* v_x_626_, lean_object* v_h_627_, lean_object* v___y_628_){
_start:
{
lean_object* v_toApplicative_629_; lean_object* v_toBind_630_; lean_object* v_toPure_631_; lean_object* v___f_632_; lean_object* v___x_633_; lean_object* v___x_634_; 
v_toApplicative_629_ = lean_ctor_get(v_inst_625_, 0);
lean_inc_ref(v_toApplicative_629_);
v_toBind_630_ = lean_ctor_get(v_inst_625_, 1);
lean_inc(v_toBind_630_);
lean_dec_ref(v_inst_625_);
v_toPure_631_ = lean_ctor_get(v_toApplicative_629_, 1);
lean_inc(v_toPure_631_);
lean_dec_ref(v_toApplicative_629_);
v___f_632_ = lean_alloc_closure((void*)(l_Lake_EStateT_catchExceptions___redArg___lam__0), 3, 2);
lean_closure_set(v___f_632_, 0, v_toPure_631_);
lean_closure_set(v___f_632_, 1, v_h_627_);
v___x_633_ = lean_apply_1(v_x_626_, v___y_628_);
v___x_634_ = lean_apply_4(v_toBind_630_, lean_box(0), lean_box(0), v___x_633_, v___f_632_);
return v___x_634_;
}
}
LEAN_EXPORT lean_object* l_Lake_EStateT_catchExceptions(lean_object* v_m_635_, lean_object* v_00_u03b5_636_, lean_object* v_00_u03c3_637_, lean_object* v_00_u03b1_638_, lean_object* v_inst_639_, lean_object* v_x_640_, lean_object* v_h_641_, lean_object* v___y_642_){
_start:
{
lean_object* v_toApplicative_643_; lean_object* v_toBind_644_; lean_object* v_toPure_645_; lean_object* v___f_646_; lean_object* v___x_647_; lean_object* v___x_648_; 
v_toApplicative_643_ = lean_ctor_get(v_inst_639_, 0);
lean_inc_ref(v_toApplicative_643_);
v_toBind_644_ = lean_ctor_get(v_inst_639_, 1);
lean_inc(v_toBind_644_);
lean_dec_ref(v_inst_639_);
v_toPure_645_ = lean_ctor_get(v_toApplicative_643_, 1);
lean_inc(v_toPure_645_);
lean_dec_ref(v_toApplicative_643_);
v___f_646_ = lean_alloc_closure((void*)(l_Lake_EStateT_catchExceptions___redArg___lam__0), 3, 2);
lean_closure_set(v___f_646_, 0, v_toPure_645_);
lean_closure_set(v___f_646_, 1, v_h_641_);
v___x_647_ = lean_apply_1(v_x_640_, v___y_642_);
v___x_648_ = lean_apply_4(v_toBind_644_, lean_box(0), lean_box(0), v___x_647_, v___f_646_);
return v___x_648_;
}
}
LEAN_EXPORT lean_object* l_Lake_EStateT_lift___redArg___lam__0(lean_object* v___y_649_, lean_object* v_toPure_650_, lean_object* v_a_651_){
_start:
{
lean_object* v___x_652_; lean_object* v___x_653_; 
v___x_652_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_652_, 0, v_a_651_);
lean_ctor_set(v___x_652_, 1, v___y_649_);
v___x_653_ = lean_apply_2(v_toPure_650_, lean_box(0), v___x_652_);
return v___x_653_;
}
}
LEAN_EXPORT lean_object* l_Lake_EStateT_lift___redArg(lean_object* v_inst_654_, lean_object* v_x_655_, lean_object* v___y_656_){
_start:
{
lean_object* v_toApplicative_657_; lean_object* v_toBind_658_; lean_object* v_toPure_659_; lean_object* v___f_660_; lean_object* v___x_661_; 
v_toApplicative_657_ = lean_ctor_get(v_inst_654_, 0);
lean_inc_ref(v_toApplicative_657_);
v_toBind_658_ = lean_ctor_get(v_inst_654_, 1);
lean_inc(v_toBind_658_);
lean_dec_ref(v_inst_654_);
v_toPure_659_ = lean_ctor_get(v_toApplicative_657_, 1);
lean_inc(v_toPure_659_);
lean_dec_ref(v_toApplicative_657_);
v___f_660_ = lean_alloc_closure((void*)(l_Lake_EStateT_lift___redArg___lam__0), 3, 2);
lean_closure_set(v___f_660_, 0, v___y_656_);
lean_closure_set(v___f_660_, 1, v_toPure_659_);
v___x_661_ = lean_apply_4(v_toBind_658_, lean_box(0), lean_box(0), v_x_655_, v___f_660_);
return v___x_661_;
}
}
LEAN_EXPORT lean_object* l_Lake_EStateT_lift(lean_object* v_m_662_, lean_object* v_00_u03b5_663_, lean_object* v_00_u03c3_664_, lean_object* v_00_u03b1_665_, lean_object* v_inst_666_, lean_object* v_x_667_, lean_object* v___y_668_){
_start:
{
lean_object* v_toApplicative_669_; lean_object* v_toBind_670_; lean_object* v_toPure_671_; lean_object* v___f_672_; lean_object* v___x_673_; 
v_toApplicative_669_ = lean_ctor_get(v_inst_666_, 0);
lean_inc_ref(v_toApplicative_669_);
v_toBind_670_ = lean_ctor_get(v_inst_666_, 1);
lean_inc(v_toBind_670_);
lean_dec_ref(v_inst_666_);
v_toPure_671_ = lean_ctor_get(v_toApplicative_669_, 1);
lean_inc(v_toPure_671_);
lean_dec_ref(v_toApplicative_669_);
v___f_672_ = lean_alloc_closure((void*)(l_Lake_EStateT_lift___redArg___lam__0), 3, 2);
lean_closure_set(v___f_672_, 0, v___y_668_);
lean_closure_set(v___f_672_, 1, v_toPure_671_);
v___x_673_ = lean_apply_4(v_toBind_670_, lean_box(0), lean_box(0), v_x_667_, v___f_672_);
return v___x_673_;
}
}
LEAN_EXPORT lean_object* l_Lake_EStateT_instMonadLiftOfMonad___redArg___lam__1(lean_object* v_inst_674_, lean_object* v_00_u03b1_675_, lean_object* v___y_676_, lean_object* v___y_677_){
_start:
{
lean_object* v_toApplicative_678_; lean_object* v_toBind_679_; lean_object* v_toPure_680_; lean_object* v___f_681_; lean_object* v___x_682_; 
v_toApplicative_678_ = lean_ctor_get(v_inst_674_, 0);
lean_inc_ref(v_toApplicative_678_);
v_toBind_679_ = lean_ctor_get(v_inst_674_, 1);
lean_inc(v_toBind_679_);
lean_dec_ref(v_inst_674_);
v_toPure_680_ = lean_ctor_get(v_toApplicative_678_, 1);
lean_inc(v_toPure_680_);
lean_dec_ref(v_toApplicative_678_);
v___f_681_ = lean_alloc_closure((void*)(l_Lake_EStateT_lift___redArg___lam__0), 3, 2);
lean_closure_set(v___f_681_, 0, v___y_677_);
lean_closure_set(v___f_681_, 1, v_toPure_680_);
v___x_682_ = lean_apply_4(v_toBind_679_, lean_box(0), lean_box(0), v___y_676_, v___f_681_);
return v___x_682_;
}
}
LEAN_EXPORT lean_object* l_Lake_EStateT_instMonadLiftOfMonad___redArg(lean_object* v_inst_683_){
_start:
{
lean_object* v___f_684_; 
v___f_684_ = lean_alloc_closure((void*)(l_Lake_EStateT_instMonadLiftOfMonad___redArg___lam__1), 4, 1);
lean_closure_set(v___f_684_, 0, v_inst_683_);
return v___f_684_;
}
}
LEAN_EXPORT lean_object* l_Lake_EStateT_instMonadLiftOfMonad(lean_object* v_m_685_, lean_object* v_00_u03b5_686_, lean_object* v_00_u03c3_687_, lean_object* v_inst_688_){
_start:
{
lean_object* v___f_689_; 
v___f_689_ = lean_alloc_closure((void*)(l_Lake_EStateT_instMonadLiftOfMonad___redArg___lam__1), 4, 1);
lean_closure_set(v___f_689_, 0, v_inst_688_);
return v___f_689_;
}
}
LEAN_EXPORT lean_object* l_Lake_EStateT_pure___redArg(lean_object* v_inst_690_, lean_object* v_a_691_, lean_object* v___y_692_){
_start:
{
lean_object* v___x_693_; lean_object* v___x_694_; 
v___x_693_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_693_, 0, v_a_691_);
lean_ctor_set(v___x_693_, 1, v___y_692_);
v___x_694_ = lean_apply_2(v_inst_690_, lean_box(0), v___x_693_);
return v___x_694_;
}
}
LEAN_EXPORT lean_object* l_Lake_EStateT_pure(lean_object* v_00_u03b5_695_, lean_object* v_00_u03c3_696_, lean_object* v_00_u03b1_697_, lean_object* v_m_698_, lean_object* v_inst_699_, lean_object* v_a_700_, lean_object* v___y_701_){
_start:
{
lean_object* v___x_702_; lean_object* v___x_703_; 
v___x_702_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_702_, 0, v_a_700_);
lean_ctor_set(v___x_702_, 1, v___y_701_);
v___x_703_ = lean_apply_2(v_inst_699_, lean_box(0), v___x_702_);
return v___x_703_;
}
}
LEAN_EXPORT lean_object* l_Lake_EStateT_instPure___redArg___lam__0(lean_object* v_inst_704_, lean_object* v_00_u03b1_705_, lean_object* v___y_706_, lean_object* v___y_707_){
_start:
{
lean_object* v___x_708_; lean_object* v___x_709_; 
v___x_708_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_708_, 0, v___y_706_);
lean_ctor_set(v___x_708_, 1, v___y_707_);
v___x_709_ = lean_apply_2(v_inst_704_, lean_box(0), v___x_708_);
return v___x_709_;
}
}
LEAN_EXPORT lean_object* l_Lake_EStateT_instPure___redArg(lean_object* v_inst_710_){
_start:
{
lean_object* v___f_711_; 
v___f_711_ = lean_alloc_closure((void*)(l_Lake_EStateT_instPure___redArg___lam__0), 4, 1);
lean_closure_set(v___f_711_, 0, v_inst_710_);
return v___f_711_;
}
}
LEAN_EXPORT lean_object* l_Lake_EStateT_instPure(lean_object* v_00_u03b5_712_, lean_object* v_00_u03c3_713_, lean_object* v_m_714_, lean_object* v_inst_715_){
_start:
{
lean_object* v___f_716_; 
v___f_716_ = lean_alloc_closure((void*)(l_Lake_EStateT_instPure___redArg___lam__0), 4, 1);
lean_closure_set(v___f_716_, 0, v_inst_715_);
return v___f_716_;
}
}
LEAN_EXPORT lean_object* l_Lake_EStateT_map___redArg___lam__0(lean_object* v_f_717_, lean_object* v_x_718_){
_start:
{
if (lean_obj_tag(v_x_718_) == 0)
{
lean_object* v_a_719_; lean_object* v_a_720_; lean_object* v___x_722_; uint8_t v_isShared_723_; uint8_t v_isSharedCheck_728_; 
v_a_719_ = lean_ctor_get(v_x_718_, 0);
v_a_720_ = lean_ctor_get(v_x_718_, 1);
v_isSharedCheck_728_ = !lean_is_exclusive(v_x_718_);
if (v_isSharedCheck_728_ == 0)
{
v___x_722_ = v_x_718_;
v_isShared_723_ = v_isSharedCheck_728_;
goto v_resetjp_721_;
}
else
{
lean_inc(v_a_720_);
lean_inc(v_a_719_);
lean_dec(v_x_718_);
v___x_722_ = lean_box(0);
v_isShared_723_ = v_isSharedCheck_728_;
goto v_resetjp_721_;
}
v_resetjp_721_:
{
lean_object* v___x_724_; lean_object* v___x_726_; 
v___x_724_ = lean_apply_1(v_f_717_, v_a_719_);
if (v_isShared_723_ == 0)
{
lean_ctor_set(v___x_722_, 0, v___x_724_);
v___x_726_ = v___x_722_;
goto v_reusejp_725_;
}
else
{
lean_object* v_reuseFailAlloc_727_; 
v_reuseFailAlloc_727_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_727_, 0, v___x_724_);
lean_ctor_set(v_reuseFailAlloc_727_, 1, v_a_720_);
v___x_726_ = v_reuseFailAlloc_727_;
goto v_reusejp_725_;
}
v_reusejp_725_:
{
return v___x_726_;
}
}
}
else
{
lean_object* v_a_729_; lean_object* v_a_730_; lean_object* v___x_732_; uint8_t v_isShared_733_; uint8_t v_isSharedCheck_737_; 
lean_dec(v_f_717_);
v_a_729_ = lean_ctor_get(v_x_718_, 0);
v_a_730_ = lean_ctor_get(v_x_718_, 1);
v_isSharedCheck_737_ = !lean_is_exclusive(v_x_718_);
if (v_isSharedCheck_737_ == 0)
{
v___x_732_ = v_x_718_;
v_isShared_733_ = v_isSharedCheck_737_;
goto v_resetjp_731_;
}
else
{
lean_inc(v_a_730_);
lean_inc(v_a_729_);
lean_dec(v_x_718_);
v___x_732_ = lean_box(0);
v_isShared_733_ = v_isSharedCheck_737_;
goto v_resetjp_731_;
}
v_resetjp_731_:
{
lean_object* v___x_735_; 
if (v_isShared_733_ == 0)
{
v___x_735_ = v___x_732_;
goto v_reusejp_734_;
}
else
{
lean_object* v_reuseFailAlloc_736_; 
v_reuseFailAlloc_736_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_736_, 0, v_a_729_);
lean_ctor_set(v_reuseFailAlloc_736_, 1, v_a_730_);
v___x_735_ = v_reuseFailAlloc_736_;
goto v_reusejp_734_;
}
v_reusejp_734_:
{
return v___x_735_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_EStateT_map___redArg(lean_object* v_inst_738_, lean_object* v_f_739_, lean_object* v_x_740_, lean_object* v___y_741_){
_start:
{
lean_object* v_map_742_; lean_object* v___f_743_; lean_object* v___x_744_; lean_object* v___x_745_; 
v_map_742_ = lean_ctor_get(v_inst_738_, 0);
lean_inc(v_map_742_);
lean_dec_ref(v_inst_738_);
v___f_743_ = lean_alloc_closure((void*)(l_Lake_EStateT_map___redArg___lam__0), 2, 1);
lean_closure_set(v___f_743_, 0, v_f_739_);
v___x_744_ = lean_apply_1(v_x_740_, v___y_741_);
v___x_745_ = lean_apply_4(v_map_742_, lean_box(0), lean_box(0), v___f_743_, v___x_744_);
return v___x_745_;
}
}
LEAN_EXPORT lean_object* l_Lake_EStateT_map(lean_object* v_00_u03b5_746_, lean_object* v_00_u03c3_747_, lean_object* v_00_u03b1_748_, lean_object* v_00_u03b2_749_, lean_object* v_m_750_, lean_object* v_inst_751_, lean_object* v_f_752_, lean_object* v_x_753_, lean_object* v___y_754_){
_start:
{
lean_object* v_map_755_; lean_object* v___f_756_; lean_object* v___x_757_; lean_object* v___x_758_; 
v_map_755_ = lean_ctor_get(v_inst_751_, 0);
lean_inc(v_map_755_);
lean_dec_ref(v_inst_751_);
v___f_756_ = lean_alloc_closure((void*)(l_Lake_EStateT_map___redArg___lam__0), 2, 1);
lean_closure_set(v___f_756_, 0, v_f_752_);
v___x_757_ = lean_apply_1(v_x_753_, v___y_754_);
v___x_758_ = lean_apply_4(v_map_755_, lean_box(0), lean_box(0), v___f_756_, v___x_757_);
return v___x_758_;
}
}
LEAN_EXPORT lean_object* l_Lake_EStateT_instFunctor___redArg___lam__0(lean_object* v___y_759_, lean_object* v_x_760_){
_start:
{
if (lean_obj_tag(v_x_760_) == 0)
{
lean_object* v_a_761_; lean_object* v_a_762_; lean_object* v___x_764_; uint8_t v_isShared_765_; uint8_t v_isSharedCheck_770_; 
v_a_761_ = lean_ctor_get(v_x_760_, 0);
v_a_762_ = lean_ctor_get(v_x_760_, 1);
v_isSharedCheck_770_ = !lean_is_exclusive(v_x_760_);
if (v_isSharedCheck_770_ == 0)
{
v___x_764_ = v_x_760_;
v_isShared_765_ = v_isSharedCheck_770_;
goto v_resetjp_763_;
}
else
{
lean_inc(v_a_762_);
lean_inc(v_a_761_);
lean_dec(v_x_760_);
v___x_764_ = lean_box(0);
v_isShared_765_ = v_isSharedCheck_770_;
goto v_resetjp_763_;
}
v_resetjp_763_:
{
lean_object* v___x_766_; lean_object* v___x_768_; 
v___x_766_ = lean_apply_1(v___y_759_, v_a_761_);
if (v_isShared_765_ == 0)
{
lean_ctor_set(v___x_764_, 0, v___x_766_);
v___x_768_ = v___x_764_;
goto v_reusejp_767_;
}
else
{
lean_object* v_reuseFailAlloc_769_; 
v_reuseFailAlloc_769_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_769_, 0, v___x_766_);
lean_ctor_set(v_reuseFailAlloc_769_, 1, v_a_762_);
v___x_768_ = v_reuseFailAlloc_769_;
goto v_reusejp_767_;
}
v_reusejp_767_:
{
return v___x_768_;
}
}
}
else
{
lean_object* v_a_771_; lean_object* v_a_772_; lean_object* v___x_774_; uint8_t v_isShared_775_; uint8_t v_isSharedCheck_779_; 
lean_dec(v___y_759_);
v_a_771_ = lean_ctor_get(v_x_760_, 0);
v_a_772_ = lean_ctor_get(v_x_760_, 1);
v_isSharedCheck_779_ = !lean_is_exclusive(v_x_760_);
if (v_isSharedCheck_779_ == 0)
{
v___x_774_ = v_x_760_;
v_isShared_775_ = v_isSharedCheck_779_;
goto v_resetjp_773_;
}
else
{
lean_inc(v_a_772_);
lean_inc(v_a_771_);
lean_dec(v_x_760_);
v___x_774_ = lean_box(0);
v_isShared_775_ = v_isSharedCheck_779_;
goto v_resetjp_773_;
}
v_resetjp_773_:
{
lean_object* v___x_777_; 
if (v_isShared_775_ == 0)
{
v___x_777_ = v___x_774_;
goto v_reusejp_776_;
}
else
{
lean_object* v_reuseFailAlloc_778_; 
v_reuseFailAlloc_778_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_778_, 0, v_a_771_);
lean_ctor_set(v_reuseFailAlloc_778_, 1, v_a_772_);
v___x_777_ = v_reuseFailAlloc_778_;
goto v_reusejp_776_;
}
v_reusejp_776_:
{
return v___x_777_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_EStateT_instFunctor___redArg___lam__1(lean_object* v_inst_780_, lean_object* v_00_u03b1_781_, lean_object* v_00_u03b2_782_, lean_object* v___y_783_, lean_object* v___y_784_, lean_object* v___y_785_){
_start:
{
lean_object* v_map_786_; lean_object* v___f_787_; lean_object* v___x_788_; lean_object* v___x_789_; 
v_map_786_ = lean_ctor_get(v_inst_780_, 0);
lean_inc(v_map_786_);
lean_dec_ref(v_inst_780_);
v___f_787_ = lean_alloc_closure((void*)(l_Lake_EStateT_instFunctor___redArg___lam__0), 2, 1);
lean_closure_set(v___f_787_, 0, v___y_783_);
v___x_788_ = lean_apply_1(v___y_784_, v___y_785_);
v___x_789_ = lean_apply_4(v_map_786_, lean_box(0), lean_box(0), v___f_787_, v___x_788_);
return v___x_789_;
}
}
LEAN_EXPORT lean_object* l_Lake_EStateT_instFunctor___redArg___lam__2(lean_object* v___f_790_, lean_object* v_00_u03b1_791_, lean_object* v_00_u03b2_792_, lean_object* v___y_793_, lean_object* v___y_794_, lean_object* v___y_795_){
_start:
{
lean_object* v___x_796_; lean_object* v___x_797_; 
v___x_796_ = lean_alloc_closure((void*)(l_Function_const___boxed), 4, 3);
lean_closure_set(v___x_796_, 0, lean_box(0));
lean_closure_set(v___x_796_, 1, lean_box(0));
lean_closure_set(v___x_796_, 2, v___y_793_);
v___x_797_ = lean_apply_5(v___f_790_, lean_box(0), lean_box(0), v___x_796_, v___y_794_, v___y_795_);
return v___x_797_;
}
}
LEAN_EXPORT lean_object* l_Lake_EStateT_instFunctor___redArg(lean_object* v_inst_798_){
_start:
{
lean_object* v___f_799_; lean_object* v___f_800_; lean_object* v___x_801_; 
v___f_799_ = lean_alloc_closure((void*)(l_Lake_EStateT_instFunctor___redArg___lam__1), 6, 1);
lean_closure_set(v___f_799_, 0, v_inst_798_);
lean_inc_ref(v___f_799_);
v___f_800_ = lean_alloc_closure((void*)(l_Lake_EStateT_instFunctor___redArg___lam__2), 6, 1);
lean_closure_set(v___f_800_, 0, v___f_799_);
v___x_801_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_801_, 0, v___f_799_);
lean_ctor_set(v___x_801_, 1, v___f_800_);
return v___x_801_;
}
}
LEAN_EXPORT lean_object* l_Lake_EStateT_instFunctor(lean_object* v_00_u03b5_802_, lean_object* v_00_u03c3_803_, lean_object* v_m_804_, lean_object* v_inst_805_){
_start:
{
lean_object* v___x_806_; 
v___x_806_ = l_Lake_EStateT_instFunctor___redArg(v_inst_805_);
return v___x_806_;
}
}
LEAN_EXPORT lean_object* l_Lake_EStateT_bind___redArg___lam__0(lean_object* v_f_807_, lean_object* v_toPure_808_, lean_object* v_____do__lift_809_){
_start:
{
if (lean_obj_tag(v_____do__lift_809_) == 0)
{
lean_object* v_a_810_; lean_object* v_a_811_; lean_object* v___x_812_; 
lean_dec(v_toPure_808_);
v_a_810_ = lean_ctor_get(v_____do__lift_809_, 0);
lean_inc(v_a_810_);
v_a_811_ = lean_ctor_get(v_____do__lift_809_, 1);
lean_inc(v_a_811_);
lean_dec_ref_known(v_____do__lift_809_, 2);
v___x_812_ = lean_apply_2(v_f_807_, v_a_810_, v_a_811_);
return v___x_812_;
}
else
{
lean_object* v_a_813_; lean_object* v_a_814_; lean_object* v___x_816_; uint8_t v_isShared_817_; uint8_t v_isSharedCheck_822_; 
lean_dec(v_f_807_);
v_a_813_ = lean_ctor_get(v_____do__lift_809_, 0);
v_a_814_ = lean_ctor_get(v_____do__lift_809_, 1);
v_isSharedCheck_822_ = !lean_is_exclusive(v_____do__lift_809_);
if (v_isSharedCheck_822_ == 0)
{
v___x_816_ = v_____do__lift_809_;
v_isShared_817_ = v_isSharedCheck_822_;
goto v_resetjp_815_;
}
else
{
lean_inc(v_a_814_);
lean_inc(v_a_813_);
lean_dec(v_____do__lift_809_);
v___x_816_ = lean_box(0);
v_isShared_817_ = v_isSharedCheck_822_;
goto v_resetjp_815_;
}
v_resetjp_815_:
{
lean_object* v___x_819_; 
if (v_isShared_817_ == 0)
{
v___x_819_ = v___x_816_;
goto v_reusejp_818_;
}
else
{
lean_object* v_reuseFailAlloc_821_; 
v_reuseFailAlloc_821_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_821_, 0, v_a_813_);
lean_ctor_set(v_reuseFailAlloc_821_, 1, v_a_814_);
v___x_819_ = v_reuseFailAlloc_821_;
goto v_reusejp_818_;
}
v_reusejp_818_:
{
lean_object* v___x_820_; 
v___x_820_ = lean_apply_2(v_toPure_808_, lean_box(0), v___x_819_);
return v___x_820_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_EStateT_bind___redArg(lean_object* v_inst_823_, lean_object* v_x_824_, lean_object* v_f_825_, lean_object* v___y_826_){
_start:
{
lean_object* v_toApplicative_827_; lean_object* v_toBind_828_; lean_object* v_toPure_829_; lean_object* v___f_830_; lean_object* v___x_831_; lean_object* v___x_832_; 
v_toApplicative_827_ = lean_ctor_get(v_inst_823_, 0);
lean_inc_ref(v_toApplicative_827_);
v_toBind_828_ = lean_ctor_get(v_inst_823_, 1);
lean_inc(v_toBind_828_);
lean_dec_ref(v_inst_823_);
v_toPure_829_ = lean_ctor_get(v_toApplicative_827_, 1);
lean_inc(v_toPure_829_);
lean_dec_ref(v_toApplicative_827_);
v___f_830_ = lean_alloc_closure((void*)(l_Lake_EStateT_bind___redArg___lam__0), 3, 2);
lean_closure_set(v___f_830_, 0, v_f_825_);
lean_closure_set(v___f_830_, 1, v_toPure_829_);
v___x_831_ = lean_apply_1(v_x_824_, v___y_826_);
v___x_832_ = lean_apply_4(v_toBind_828_, lean_box(0), lean_box(0), v___x_831_, v___f_830_);
return v___x_832_;
}
}
LEAN_EXPORT lean_object* l_Lake_EStateT_bind(lean_object* v_00_u03b5_833_, lean_object* v_00_u03c3_834_, lean_object* v_00_u03b1_835_, lean_object* v_00_u03b2_836_, lean_object* v_m_837_, lean_object* v_inst_838_, lean_object* v_x_839_, lean_object* v_f_840_, lean_object* v___y_841_){
_start:
{
lean_object* v_toApplicative_842_; lean_object* v_toBind_843_; lean_object* v_toPure_844_; lean_object* v___f_845_; lean_object* v___x_846_; lean_object* v___x_847_; 
v_toApplicative_842_ = lean_ctor_get(v_inst_838_, 0);
lean_inc_ref(v_toApplicative_842_);
v_toBind_843_ = lean_ctor_get(v_inst_838_, 1);
lean_inc(v_toBind_843_);
lean_dec_ref(v_inst_838_);
v_toPure_844_ = lean_ctor_get(v_toApplicative_842_, 1);
lean_inc(v_toPure_844_);
lean_dec_ref(v_toApplicative_842_);
v___f_845_ = lean_alloc_closure((void*)(l_Lake_EStateT_bind___redArg___lam__0), 3, 2);
lean_closure_set(v___f_845_, 0, v_f_840_);
lean_closure_set(v___f_845_, 1, v_toPure_844_);
v___x_846_ = lean_apply_1(v_x_839_, v___y_841_);
v___x_847_ = lean_apply_4(v_toBind_843_, lean_box(0), lean_box(0), v___x_846_, v___f_845_);
return v___x_847_;
}
}
LEAN_EXPORT lean_object* l_Lake_EStateT_seqRight___redArg___lam__0(lean_object* v_y_848_, lean_object* v_toPure_849_, lean_object* v_____do__lift_850_){
_start:
{
if (lean_obj_tag(v_____do__lift_850_) == 0)
{
lean_object* v_a_851_; lean_object* v___x_852_; lean_object* v___x_853_; 
lean_dec(v_toPure_849_);
v_a_851_ = lean_ctor_get(v_____do__lift_850_, 1);
lean_inc(v_a_851_);
lean_dec_ref_known(v_____do__lift_850_, 2);
v___x_852_ = lean_box(0);
v___x_853_ = lean_apply_2(v_y_848_, v___x_852_, v_a_851_);
return v___x_853_;
}
else
{
lean_object* v_a_854_; lean_object* v_a_855_; lean_object* v___x_857_; uint8_t v_isShared_858_; uint8_t v_isSharedCheck_863_; 
lean_dec(v_y_848_);
v_a_854_ = lean_ctor_get(v_____do__lift_850_, 0);
v_a_855_ = lean_ctor_get(v_____do__lift_850_, 1);
v_isSharedCheck_863_ = !lean_is_exclusive(v_____do__lift_850_);
if (v_isSharedCheck_863_ == 0)
{
v___x_857_ = v_____do__lift_850_;
v_isShared_858_ = v_isSharedCheck_863_;
goto v_resetjp_856_;
}
else
{
lean_inc(v_a_855_);
lean_inc(v_a_854_);
lean_dec(v_____do__lift_850_);
v___x_857_ = lean_box(0);
v_isShared_858_ = v_isSharedCheck_863_;
goto v_resetjp_856_;
}
v_resetjp_856_:
{
lean_object* v___x_860_; 
if (v_isShared_858_ == 0)
{
v___x_860_ = v___x_857_;
goto v_reusejp_859_;
}
else
{
lean_object* v_reuseFailAlloc_862_; 
v_reuseFailAlloc_862_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_862_, 0, v_a_854_);
lean_ctor_set(v_reuseFailAlloc_862_, 1, v_a_855_);
v___x_860_ = v_reuseFailAlloc_862_;
goto v_reusejp_859_;
}
v_reusejp_859_:
{
lean_object* v___x_861_; 
v___x_861_ = lean_apply_2(v_toPure_849_, lean_box(0), v___x_860_);
return v___x_861_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_EStateT_seqRight___redArg(lean_object* v_inst_864_, lean_object* v_x_865_, lean_object* v_y_866_, lean_object* v___y_867_){
_start:
{
lean_object* v_toApplicative_868_; lean_object* v_toBind_869_; lean_object* v_toPure_870_; lean_object* v___f_871_; lean_object* v___x_872_; lean_object* v___x_873_; 
v_toApplicative_868_ = lean_ctor_get(v_inst_864_, 0);
lean_inc_ref(v_toApplicative_868_);
v_toBind_869_ = lean_ctor_get(v_inst_864_, 1);
lean_inc(v_toBind_869_);
lean_dec_ref(v_inst_864_);
v_toPure_870_ = lean_ctor_get(v_toApplicative_868_, 1);
lean_inc(v_toPure_870_);
lean_dec_ref(v_toApplicative_868_);
v___f_871_ = lean_alloc_closure((void*)(l_Lake_EStateT_seqRight___redArg___lam__0), 3, 2);
lean_closure_set(v___f_871_, 0, v_y_866_);
lean_closure_set(v___f_871_, 1, v_toPure_870_);
v___x_872_ = lean_apply_1(v_x_865_, v___y_867_);
v___x_873_ = lean_apply_4(v_toBind_869_, lean_box(0), lean_box(0), v___x_872_, v___f_871_);
return v___x_873_;
}
}
LEAN_EXPORT lean_object* l_Lake_EStateT_seqRight(lean_object* v_00_u03b5_874_, lean_object* v_00_u03c3_875_, lean_object* v_00_u03b1_876_, lean_object* v_00_u03b2_877_, lean_object* v_m_878_, lean_object* v_inst_879_, lean_object* v_x_880_, lean_object* v_y_881_, lean_object* v___y_882_){
_start:
{
lean_object* v_toApplicative_883_; lean_object* v_toBind_884_; lean_object* v_toPure_885_; lean_object* v___f_886_; lean_object* v___x_887_; lean_object* v___x_888_; 
v_toApplicative_883_ = lean_ctor_get(v_inst_879_, 0);
lean_inc_ref(v_toApplicative_883_);
v_toBind_884_ = lean_ctor_get(v_inst_879_, 1);
lean_inc(v_toBind_884_);
lean_dec_ref(v_inst_879_);
v_toPure_885_ = lean_ctor_get(v_toApplicative_883_, 1);
lean_inc(v_toPure_885_);
lean_dec_ref(v_toApplicative_883_);
v___f_886_ = lean_alloc_closure((void*)(l_Lake_EStateT_seqRight___redArg___lam__0), 3, 2);
lean_closure_set(v___f_886_, 0, v_y_881_);
lean_closure_set(v___f_886_, 1, v_toPure_885_);
v___x_887_ = lean_apply_1(v_x_880_, v___y_882_);
v___x_888_ = lean_apply_4(v_toBind_884_, lean_box(0), lean_box(0), v___x_887_, v___f_886_);
return v___x_888_;
}
}
LEAN_EXPORT lean_object* l_Lake_EStateT_instMonad___redArg___lam__0(lean_object* v___y_889_, lean_object* v_toPure_890_, lean_object* v_____do__lift_891_){
_start:
{
if (lean_obj_tag(v_____do__lift_891_) == 0)
{
lean_object* v_a_892_; lean_object* v_a_893_; lean_object* v___x_894_; 
lean_dec(v_toPure_890_);
v_a_892_ = lean_ctor_get(v_____do__lift_891_, 0);
lean_inc(v_a_892_);
v_a_893_ = lean_ctor_get(v_____do__lift_891_, 1);
lean_inc(v_a_893_);
lean_dec_ref_known(v_____do__lift_891_, 2);
v___x_894_ = lean_apply_2(v___y_889_, v_a_892_, v_a_893_);
return v___x_894_;
}
else
{
lean_object* v_a_895_; lean_object* v_a_896_; lean_object* v___x_898_; uint8_t v_isShared_899_; uint8_t v_isSharedCheck_904_; 
lean_dec(v___y_889_);
v_a_895_ = lean_ctor_get(v_____do__lift_891_, 0);
v_a_896_ = lean_ctor_get(v_____do__lift_891_, 1);
v_isSharedCheck_904_ = !lean_is_exclusive(v_____do__lift_891_);
if (v_isSharedCheck_904_ == 0)
{
v___x_898_ = v_____do__lift_891_;
v_isShared_899_ = v_isSharedCheck_904_;
goto v_resetjp_897_;
}
else
{
lean_inc(v_a_896_);
lean_inc(v_a_895_);
lean_dec(v_____do__lift_891_);
v___x_898_ = lean_box(0);
v_isShared_899_ = v_isSharedCheck_904_;
goto v_resetjp_897_;
}
v_resetjp_897_:
{
lean_object* v___x_901_; 
if (v_isShared_899_ == 0)
{
v___x_901_ = v___x_898_;
goto v_reusejp_900_;
}
else
{
lean_object* v_reuseFailAlloc_903_; 
v_reuseFailAlloc_903_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_903_, 0, v_a_895_);
lean_ctor_set(v_reuseFailAlloc_903_, 1, v_a_896_);
v___x_901_ = v_reuseFailAlloc_903_;
goto v_reusejp_900_;
}
v_reusejp_900_:
{
lean_object* v___x_902_; 
v___x_902_ = lean_apply_2(v_toPure_890_, lean_box(0), v___x_901_);
return v___x_902_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_EStateT_instMonad___redArg___lam__1(lean_object* v_toPure_905_, lean_object* v_toBind_906_, lean_object* v_00_u03b1_907_, lean_object* v_00_u03b2_908_, lean_object* v___y_909_, lean_object* v___y_910_, lean_object* v___y_911_){
_start:
{
lean_object* v___f_912_; lean_object* v___x_913_; lean_object* v___x_914_; 
v___f_912_ = lean_alloc_closure((void*)(l_Lake_EStateT_instMonad___redArg___lam__0), 3, 2);
lean_closure_set(v___f_912_, 0, v___y_910_);
lean_closure_set(v___f_912_, 1, v_toPure_905_);
v___x_913_ = lean_apply_1(v___y_909_, v___y_911_);
v___x_914_ = lean_apply_4(v_toBind_906_, lean_box(0), lean_box(0), v___x_913_, v___f_912_);
return v___x_914_;
}
}
LEAN_EXPORT lean_object* l_Lake_EStateT_instMonad___redArg___lam__2(lean_object* v___y_915_, lean_object* v_toPure_916_, lean_object* v_____do__lift_917_){
_start:
{
if (lean_obj_tag(v_____do__lift_917_) == 0)
{
lean_object* v_a_918_; lean_object* v___x_919_; lean_object* v___x_920_; 
lean_dec(v_toPure_916_);
v_a_918_ = lean_ctor_get(v_____do__lift_917_, 1);
lean_inc(v_a_918_);
lean_dec_ref_known(v_____do__lift_917_, 2);
v___x_919_ = lean_box(0);
v___x_920_ = lean_apply_2(v___y_915_, v___x_919_, v_a_918_);
return v___x_920_;
}
else
{
lean_object* v_a_921_; lean_object* v_a_922_; lean_object* v___x_924_; uint8_t v_isShared_925_; uint8_t v_isSharedCheck_930_; 
lean_dec(v___y_915_);
v_a_921_ = lean_ctor_get(v_____do__lift_917_, 0);
v_a_922_ = lean_ctor_get(v_____do__lift_917_, 1);
v_isSharedCheck_930_ = !lean_is_exclusive(v_____do__lift_917_);
if (v_isSharedCheck_930_ == 0)
{
v___x_924_ = v_____do__lift_917_;
v_isShared_925_ = v_isSharedCheck_930_;
goto v_resetjp_923_;
}
else
{
lean_inc(v_a_922_);
lean_inc(v_a_921_);
lean_dec(v_____do__lift_917_);
v___x_924_ = lean_box(0);
v_isShared_925_ = v_isSharedCheck_930_;
goto v_resetjp_923_;
}
v_resetjp_923_:
{
lean_object* v___x_927_; 
if (v_isShared_925_ == 0)
{
v___x_927_ = v___x_924_;
goto v_reusejp_926_;
}
else
{
lean_object* v_reuseFailAlloc_929_; 
v_reuseFailAlloc_929_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_929_, 0, v_a_921_);
lean_ctor_set(v_reuseFailAlloc_929_, 1, v_a_922_);
v___x_927_ = v_reuseFailAlloc_929_;
goto v_reusejp_926_;
}
v_reusejp_926_:
{
lean_object* v___x_928_; 
v___x_928_ = lean_apply_2(v_toPure_916_, lean_box(0), v___x_927_);
return v___x_928_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_EStateT_instMonad___redArg___lam__3(lean_object* v_toPure_931_, lean_object* v_toBind_932_, lean_object* v_00_u03b1_933_, lean_object* v_00_u03b2_934_, lean_object* v___y_935_, lean_object* v___y_936_, lean_object* v___y_937_){
_start:
{
lean_object* v___f_938_; lean_object* v___x_939_; lean_object* v___x_940_; 
v___f_938_ = lean_alloc_closure((void*)(l_Lake_EStateT_instMonad___redArg___lam__2), 3, 2);
lean_closure_set(v___f_938_, 0, v___y_936_);
lean_closure_set(v___f_938_, 1, v_toPure_931_);
v___x_939_ = lean_apply_1(v___y_935_, v___y_937_);
v___x_940_ = lean_apply_4(v_toBind_932_, lean_box(0), lean_box(0), v___x_939_, v___f_938_);
return v___x_940_;
}
}
LEAN_EXPORT lean_object* l_Lake_EStateT_instMonad___redArg___lam__6(lean_object* v_a_941_, lean_object* v_toPure_942_, lean_object* v_x_943_, lean_object* v___y_944_){
_start:
{
lean_object* v___x_945_; lean_object* v___x_946_; 
v___x_945_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_945_, 0, v_a_941_);
lean_ctor_set(v___x_945_, 1, v___y_944_);
v___x_946_ = lean_apply_2(v_toPure_942_, lean_box(0), v___x_945_);
return v___x_946_;
}
}
LEAN_EXPORT lean_object* l_Lake_EStateT_instMonad___redArg___lam__6___boxed(lean_object* v_a_947_, lean_object* v_toPure_948_, lean_object* v_x_949_, lean_object* v___y_950_){
_start:
{
lean_object* v_res_951_; 
v_res_951_ = l_Lake_EStateT_instMonad___redArg___lam__6(v_a_947_, v_toPure_948_, v_x_949_, v___y_950_);
lean_dec(v_x_949_);
return v_res_951_;
}
}
LEAN_EXPORT lean_object* l_Lake_EStateT_instMonad___redArg___lam__4(lean_object* v_toPure_952_, lean_object* v_y_953_, lean_object* v___f_954_, lean_object* v_a_955_, lean_object* v___y_956_){
_start:
{
lean_object* v___f_957_; lean_object* v___x_958_; lean_object* v___x_959_; lean_object* v___x_960_; 
v___f_957_ = lean_alloc_closure((void*)(l_Lake_EStateT_instMonad___redArg___lam__6___boxed), 4, 2);
lean_closure_set(v___f_957_, 0, v_a_955_);
lean_closure_set(v___f_957_, 1, v_toPure_952_);
v___x_958_ = lean_box(0);
v___x_959_ = lean_apply_1(v_y_953_, v___x_958_);
v___x_960_ = lean_apply_5(v___f_954_, lean_box(0), lean_box(0), v___x_959_, v___f_957_, v___y_956_);
return v___x_960_;
}
}
LEAN_EXPORT lean_object* l_Lake_EStateT_instMonad___redArg___lam__5(lean_object* v_toPure_961_, lean_object* v___f_962_, lean_object* v_00_u03b1_963_, lean_object* v_00_u03b2_964_, lean_object* v_x_965_, lean_object* v_y_966_, lean_object* v___y_967_){
_start:
{
lean_object* v___f_968_; lean_object* v___x_969_; 
lean_inc(v___f_962_);
v___f_968_ = lean_alloc_closure((void*)(l_Lake_EStateT_instMonad___redArg___lam__4), 5, 3);
lean_closure_set(v___f_968_, 0, v_toPure_961_);
lean_closure_set(v___f_968_, 1, v_y_966_);
lean_closure_set(v___f_968_, 2, v___f_962_);
v___x_969_ = lean_apply_5(v___f_962_, lean_box(0), lean_box(0), v_x_965_, v___f_968_, v___y_967_);
return v___x_969_;
}
}
LEAN_EXPORT lean_object* l_Lake_EStateT_instMonad___redArg___lam__7(lean_object* v_a_970_, lean_object* v_x_971_){
_start:
{
if (lean_obj_tag(v_x_971_) == 0)
{
lean_object* v_a_972_; lean_object* v_a_973_; lean_object* v___x_975_; uint8_t v_isShared_976_; uint8_t v_isSharedCheck_981_; 
v_a_972_ = lean_ctor_get(v_x_971_, 0);
v_a_973_ = lean_ctor_get(v_x_971_, 1);
v_isSharedCheck_981_ = !lean_is_exclusive(v_x_971_);
if (v_isSharedCheck_981_ == 0)
{
v___x_975_ = v_x_971_;
v_isShared_976_ = v_isSharedCheck_981_;
goto v_resetjp_974_;
}
else
{
lean_inc(v_a_973_);
lean_inc(v_a_972_);
lean_dec(v_x_971_);
v___x_975_ = lean_box(0);
v_isShared_976_ = v_isSharedCheck_981_;
goto v_resetjp_974_;
}
v_resetjp_974_:
{
lean_object* v___x_977_; lean_object* v___x_979_; 
v___x_977_ = lean_apply_1(v_a_970_, v_a_972_);
if (v_isShared_976_ == 0)
{
lean_ctor_set(v___x_975_, 0, v___x_977_);
v___x_979_ = v___x_975_;
goto v_reusejp_978_;
}
else
{
lean_object* v_reuseFailAlloc_980_; 
v_reuseFailAlloc_980_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_980_, 0, v___x_977_);
lean_ctor_set(v_reuseFailAlloc_980_, 1, v_a_973_);
v___x_979_ = v_reuseFailAlloc_980_;
goto v_reusejp_978_;
}
v_reusejp_978_:
{
return v___x_979_;
}
}
}
else
{
lean_object* v_a_982_; lean_object* v_a_983_; lean_object* v___x_985_; uint8_t v_isShared_986_; uint8_t v_isSharedCheck_990_; 
lean_dec(v_a_970_);
v_a_982_ = lean_ctor_get(v_x_971_, 0);
v_a_983_ = lean_ctor_get(v_x_971_, 1);
v_isSharedCheck_990_ = !lean_is_exclusive(v_x_971_);
if (v_isSharedCheck_990_ == 0)
{
v___x_985_ = v_x_971_;
v_isShared_986_ = v_isSharedCheck_990_;
goto v_resetjp_984_;
}
else
{
lean_inc(v_a_983_);
lean_inc(v_a_982_);
lean_dec(v_x_971_);
v___x_985_ = lean_box(0);
v_isShared_986_ = v_isSharedCheck_990_;
goto v_resetjp_984_;
}
v_resetjp_984_:
{
lean_object* v___x_988_; 
if (v_isShared_986_ == 0)
{
v___x_988_ = v___x_985_;
goto v_reusejp_987_;
}
else
{
lean_object* v_reuseFailAlloc_989_; 
v_reuseFailAlloc_989_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_989_, 0, v_a_982_);
lean_ctor_set(v_reuseFailAlloc_989_, 1, v_a_983_);
v___x_988_ = v_reuseFailAlloc_989_;
goto v_reusejp_987_;
}
v_reusejp_987_:
{
return v___x_988_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_EStateT_instMonad___redArg___lam__8(lean_object* v_toFunctor_991_, lean_object* v_x_992_, lean_object* v_toPure_993_, lean_object* v_____do__lift_994_){
_start:
{
if (lean_obj_tag(v_____do__lift_994_) == 0)
{
lean_object* v_a_995_; lean_object* v_a_996_; lean_object* v_map_997_; lean_object* v___f_998_; lean_object* v___x_999_; lean_object* v___x_1000_; lean_object* v___x_1001_; 
lean_dec(v_toPure_993_);
v_a_995_ = lean_ctor_get(v_____do__lift_994_, 0);
lean_inc(v_a_995_);
v_a_996_ = lean_ctor_get(v_____do__lift_994_, 1);
lean_inc(v_a_996_);
lean_dec_ref_known(v_____do__lift_994_, 2);
v_map_997_ = lean_ctor_get(v_toFunctor_991_, 0);
lean_inc(v_map_997_);
lean_dec_ref(v_toFunctor_991_);
v___f_998_ = lean_alloc_closure((void*)(l_Lake_EStateT_instMonad___redArg___lam__7), 2, 1);
lean_closure_set(v___f_998_, 0, v_a_995_);
v___x_999_ = lean_box(0);
v___x_1000_ = lean_apply_2(v_x_992_, v___x_999_, v_a_996_);
v___x_1001_ = lean_apply_4(v_map_997_, lean_box(0), lean_box(0), v___f_998_, v___x_1000_);
return v___x_1001_;
}
else
{
lean_object* v_a_1002_; lean_object* v_a_1003_; lean_object* v___x_1005_; uint8_t v_isShared_1006_; uint8_t v_isSharedCheck_1011_; 
lean_dec(v_x_992_);
lean_dec_ref(v_toFunctor_991_);
v_a_1002_ = lean_ctor_get(v_____do__lift_994_, 0);
v_a_1003_ = lean_ctor_get(v_____do__lift_994_, 1);
v_isSharedCheck_1011_ = !lean_is_exclusive(v_____do__lift_994_);
if (v_isSharedCheck_1011_ == 0)
{
v___x_1005_ = v_____do__lift_994_;
v_isShared_1006_ = v_isSharedCheck_1011_;
goto v_resetjp_1004_;
}
else
{
lean_inc(v_a_1003_);
lean_inc(v_a_1002_);
lean_dec(v_____do__lift_994_);
v___x_1005_ = lean_box(0);
v_isShared_1006_ = v_isSharedCheck_1011_;
goto v_resetjp_1004_;
}
v_resetjp_1004_:
{
lean_object* v___x_1008_; 
if (v_isShared_1006_ == 0)
{
v___x_1008_ = v___x_1005_;
goto v_reusejp_1007_;
}
else
{
lean_object* v_reuseFailAlloc_1010_; 
v_reuseFailAlloc_1010_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1010_, 0, v_a_1002_);
lean_ctor_set(v_reuseFailAlloc_1010_, 1, v_a_1003_);
v___x_1008_ = v_reuseFailAlloc_1010_;
goto v_reusejp_1007_;
}
v_reusejp_1007_:
{
lean_object* v___x_1009_; 
v___x_1009_ = lean_apply_2(v_toPure_993_, lean_box(0), v___x_1008_);
return v___x_1009_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_EStateT_instMonad___redArg___lam__9(lean_object* v_toFunctor_1012_, lean_object* v_toPure_1013_, lean_object* v_toBind_1014_, lean_object* v_00_u03b1_1015_, lean_object* v_00_u03b2_1016_, lean_object* v_f_1017_, lean_object* v_x_1018_, lean_object* v___y_1019_){
_start:
{
lean_object* v___f_1020_; lean_object* v___x_1021_; lean_object* v___x_1022_; 
v___f_1020_ = lean_alloc_closure((void*)(l_Lake_EStateT_instMonad___redArg___lam__8), 4, 3);
lean_closure_set(v___f_1020_, 0, v_toFunctor_1012_);
lean_closure_set(v___f_1020_, 1, v_x_1018_);
lean_closure_set(v___f_1020_, 2, v_toPure_1013_);
v___x_1021_ = lean_apply_1(v_f_1017_, v___y_1019_);
v___x_1022_ = lean_apply_4(v_toBind_1014_, lean_box(0), lean_box(0), v___x_1021_, v___f_1020_);
return v___x_1022_;
}
}
LEAN_EXPORT lean_object* l_Lake_EStateT_instMonad___redArg(lean_object* v_inst_1023_){
_start:
{
lean_object* v_toApplicative_1024_; lean_object* v_toBind_1025_; lean_object* v___x_1027_; uint8_t v_isShared_1028_; uint8_t v_isSharedCheck_1050_; 
v_toApplicative_1024_ = lean_ctor_get(v_inst_1023_, 0);
v_toBind_1025_ = lean_ctor_get(v_inst_1023_, 1);
v_isSharedCheck_1050_ = !lean_is_exclusive(v_inst_1023_);
if (v_isSharedCheck_1050_ == 0)
{
v___x_1027_ = v_inst_1023_;
v_isShared_1028_ = v_isSharedCheck_1050_;
goto v_resetjp_1026_;
}
else
{
lean_inc(v_toBind_1025_);
lean_inc(v_toApplicative_1024_);
lean_dec(v_inst_1023_);
v___x_1027_ = lean_box(0);
v_isShared_1028_ = v_isSharedCheck_1050_;
goto v_resetjp_1026_;
}
v_resetjp_1026_:
{
lean_object* v_toFunctor_1029_; lean_object* v_toPure_1030_; lean_object* v___x_1032_; uint8_t v_isShared_1033_; uint8_t v_isSharedCheck_1046_; 
v_toFunctor_1029_ = lean_ctor_get(v_toApplicative_1024_, 0);
v_toPure_1030_ = lean_ctor_get(v_toApplicative_1024_, 1);
v_isSharedCheck_1046_ = !lean_is_exclusive(v_toApplicative_1024_);
if (v_isSharedCheck_1046_ == 0)
{
lean_object* v_unused_1047_; lean_object* v_unused_1048_; lean_object* v_unused_1049_; 
v_unused_1047_ = lean_ctor_get(v_toApplicative_1024_, 4);
lean_dec(v_unused_1047_);
v_unused_1048_ = lean_ctor_get(v_toApplicative_1024_, 3);
lean_dec(v_unused_1048_);
v_unused_1049_ = lean_ctor_get(v_toApplicative_1024_, 2);
lean_dec(v_unused_1049_);
v___x_1032_ = v_toApplicative_1024_;
v_isShared_1033_ = v_isSharedCheck_1046_;
goto v_resetjp_1031_;
}
else
{
lean_inc(v_toPure_1030_);
lean_inc(v_toFunctor_1029_);
lean_dec(v_toApplicative_1024_);
v___x_1032_ = lean_box(0);
v_isShared_1033_ = v_isSharedCheck_1046_;
goto v_resetjp_1031_;
}
v_resetjp_1031_:
{
lean_object* v___f_1034_; lean_object* v___f_1035_; lean_object* v___f_1036_; lean_object* v___f_1037_; lean_object* v___x_1038_; lean_object* v___f_1039_; lean_object* v___x_1041_; 
lean_inc_n(v_toBind_1025_, 2);
lean_inc_n(v_toPure_1030_, 4);
v___f_1034_ = lean_alloc_closure((void*)(l_Lake_EStateT_instMonad___redArg___lam__1), 7, 2);
lean_closure_set(v___f_1034_, 0, v_toPure_1030_);
lean_closure_set(v___f_1034_, 1, v_toBind_1025_);
v___f_1035_ = lean_alloc_closure((void*)(l_Lake_EStateT_instMonad___redArg___lam__3), 7, 2);
lean_closure_set(v___f_1035_, 0, v_toPure_1030_);
lean_closure_set(v___f_1035_, 1, v_toBind_1025_);
lean_inc_ref(v___f_1034_);
v___f_1036_ = lean_alloc_closure((void*)(l_Lake_EStateT_instMonad___redArg___lam__5), 7, 2);
lean_closure_set(v___f_1036_, 0, v_toPure_1030_);
lean_closure_set(v___f_1036_, 1, v___f_1034_);
lean_inc_ref(v_toFunctor_1029_);
v___f_1037_ = lean_alloc_closure((void*)(l_Lake_EStateT_instMonad___redArg___lam__9), 8, 3);
lean_closure_set(v___f_1037_, 0, v_toFunctor_1029_);
lean_closure_set(v___f_1037_, 1, v_toPure_1030_);
lean_closure_set(v___f_1037_, 2, v_toBind_1025_);
v___x_1038_ = l_Lake_EStateT_instFunctor___redArg(v_toFunctor_1029_);
v___f_1039_ = lean_alloc_closure((void*)(l_Lake_EStateT_instPure___redArg___lam__0), 4, 1);
lean_closure_set(v___f_1039_, 0, v_toPure_1030_);
if (v_isShared_1033_ == 0)
{
lean_ctor_set(v___x_1032_, 4, v___f_1035_);
lean_ctor_set(v___x_1032_, 3, v___f_1036_);
lean_ctor_set(v___x_1032_, 2, v___f_1037_);
lean_ctor_set(v___x_1032_, 1, v___f_1039_);
lean_ctor_set(v___x_1032_, 0, v___x_1038_);
v___x_1041_ = v___x_1032_;
goto v_reusejp_1040_;
}
else
{
lean_object* v_reuseFailAlloc_1045_; 
v_reuseFailAlloc_1045_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1045_, 0, v___x_1038_);
lean_ctor_set(v_reuseFailAlloc_1045_, 1, v___f_1039_);
lean_ctor_set(v_reuseFailAlloc_1045_, 2, v___f_1037_);
lean_ctor_set(v_reuseFailAlloc_1045_, 3, v___f_1036_);
lean_ctor_set(v_reuseFailAlloc_1045_, 4, v___f_1035_);
v___x_1041_ = v_reuseFailAlloc_1045_;
goto v_reusejp_1040_;
}
v_reusejp_1040_:
{
lean_object* v___x_1043_; 
if (v_isShared_1028_ == 0)
{
lean_ctor_set(v___x_1027_, 1, v___f_1034_);
lean_ctor_set(v___x_1027_, 0, v___x_1041_);
v___x_1043_ = v___x_1027_;
goto v_reusejp_1042_;
}
else
{
lean_object* v_reuseFailAlloc_1044_; 
v_reuseFailAlloc_1044_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1044_, 0, v___x_1041_);
lean_ctor_set(v_reuseFailAlloc_1044_, 1, v___f_1034_);
v___x_1043_ = v_reuseFailAlloc_1044_;
goto v_reusejp_1042_;
}
v_reusejp_1042_:
{
return v___x_1043_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_EStateT_instMonad(lean_object* v_00_u03b5_1051_, lean_object* v_00_u03c3_1052_, lean_object* v_m_1053_, lean_object* v_inst_1054_){
_start:
{
lean_object* v_toApplicative_1055_; lean_object* v_toBind_1056_; lean_object* v___x_1058_; uint8_t v_isShared_1059_; uint8_t v_isSharedCheck_1081_; 
v_toApplicative_1055_ = lean_ctor_get(v_inst_1054_, 0);
v_toBind_1056_ = lean_ctor_get(v_inst_1054_, 1);
v_isSharedCheck_1081_ = !lean_is_exclusive(v_inst_1054_);
if (v_isSharedCheck_1081_ == 0)
{
v___x_1058_ = v_inst_1054_;
v_isShared_1059_ = v_isSharedCheck_1081_;
goto v_resetjp_1057_;
}
else
{
lean_inc(v_toBind_1056_);
lean_inc(v_toApplicative_1055_);
lean_dec(v_inst_1054_);
v___x_1058_ = lean_box(0);
v_isShared_1059_ = v_isSharedCheck_1081_;
goto v_resetjp_1057_;
}
v_resetjp_1057_:
{
lean_object* v_toFunctor_1060_; lean_object* v_toPure_1061_; lean_object* v___x_1063_; uint8_t v_isShared_1064_; uint8_t v_isSharedCheck_1077_; 
v_toFunctor_1060_ = lean_ctor_get(v_toApplicative_1055_, 0);
v_toPure_1061_ = lean_ctor_get(v_toApplicative_1055_, 1);
v_isSharedCheck_1077_ = !lean_is_exclusive(v_toApplicative_1055_);
if (v_isSharedCheck_1077_ == 0)
{
lean_object* v_unused_1078_; lean_object* v_unused_1079_; lean_object* v_unused_1080_; 
v_unused_1078_ = lean_ctor_get(v_toApplicative_1055_, 4);
lean_dec(v_unused_1078_);
v_unused_1079_ = lean_ctor_get(v_toApplicative_1055_, 3);
lean_dec(v_unused_1079_);
v_unused_1080_ = lean_ctor_get(v_toApplicative_1055_, 2);
lean_dec(v_unused_1080_);
v___x_1063_ = v_toApplicative_1055_;
v_isShared_1064_ = v_isSharedCheck_1077_;
goto v_resetjp_1062_;
}
else
{
lean_inc(v_toPure_1061_);
lean_inc(v_toFunctor_1060_);
lean_dec(v_toApplicative_1055_);
v___x_1063_ = lean_box(0);
v_isShared_1064_ = v_isSharedCheck_1077_;
goto v_resetjp_1062_;
}
v_resetjp_1062_:
{
lean_object* v___f_1065_; lean_object* v___f_1066_; lean_object* v___f_1067_; lean_object* v___f_1068_; lean_object* v___x_1069_; lean_object* v___f_1070_; lean_object* v___x_1072_; 
lean_inc_n(v_toBind_1056_, 2);
lean_inc_n(v_toPure_1061_, 4);
v___f_1065_ = lean_alloc_closure((void*)(l_Lake_EStateT_instMonad___redArg___lam__1), 7, 2);
lean_closure_set(v___f_1065_, 0, v_toPure_1061_);
lean_closure_set(v___f_1065_, 1, v_toBind_1056_);
v___f_1066_ = lean_alloc_closure((void*)(l_Lake_EStateT_instMonad___redArg___lam__3), 7, 2);
lean_closure_set(v___f_1066_, 0, v_toPure_1061_);
lean_closure_set(v___f_1066_, 1, v_toBind_1056_);
lean_inc_ref(v___f_1065_);
v___f_1067_ = lean_alloc_closure((void*)(l_Lake_EStateT_instMonad___redArg___lam__5), 7, 2);
lean_closure_set(v___f_1067_, 0, v_toPure_1061_);
lean_closure_set(v___f_1067_, 1, v___f_1065_);
lean_inc_ref(v_toFunctor_1060_);
v___f_1068_ = lean_alloc_closure((void*)(l_Lake_EStateT_instMonad___redArg___lam__9), 8, 3);
lean_closure_set(v___f_1068_, 0, v_toFunctor_1060_);
lean_closure_set(v___f_1068_, 1, v_toPure_1061_);
lean_closure_set(v___f_1068_, 2, v_toBind_1056_);
v___x_1069_ = l_Lake_EStateT_instFunctor___redArg(v_toFunctor_1060_);
v___f_1070_ = lean_alloc_closure((void*)(l_Lake_EStateT_instPure___redArg___lam__0), 4, 1);
lean_closure_set(v___f_1070_, 0, v_toPure_1061_);
if (v_isShared_1064_ == 0)
{
lean_ctor_set(v___x_1063_, 4, v___f_1066_);
lean_ctor_set(v___x_1063_, 3, v___f_1067_);
lean_ctor_set(v___x_1063_, 2, v___f_1068_);
lean_ctor_set(v___x_1063_, 1, v___f_1070_);
lean_ctor_set(v___x_1063_, 0, v___x_1069_);
v___x_1072_ = v___x_1063_;
goto v_reusejp_1071_;
}
else
{
lean_object* v_reuseFailAlloc_1076_; 
v_reuseFailAlloc_1076_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1076_, 0, v___x_1069_);
lean_ctor_set(v_reuseFailAlloc_1076_, 1, v___f_1070_);
lean_ctor_set(v_reuseFailAlloc_1076_, 2, v___f_1068_);
lean_ctor_set(v_reuseFailAlloc_1076_, 3, v___f_1067_);
lean_ctor_set(v_reuseFailAlloc_1076_, 4, v___f_1066_);
v___x_1072_ = v_reuseFailAlloc_1076_;
goto v_reusejp_1071_;
}
v_reusejp_1071_:
{
lean_object* v___x_1074_; 
if (v_isShared_1059_ == 0)
{
lean_ctor_set(v___x_1058_, 1, v___f_1065_);
lean_ctor_set(v___x_1058_, 0, v___x_1072_);
v___x_1074_ = v___x_1058_;
goto v_reusejp_1073_;
}
else
{
lean_object* v_reuseFailAlloc_1075_; 
v_reuseFailAlloc_1075_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1075_, 0, v___x_1072_);
lean_ctor_set(v_reuseFailAlloc_1075_, 1, v___f_1065_);
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
}
LEAN_EXPORT lean_object* l_Lake_EStateT_set___redArg(lean_object* v_inst_1082_, lean_object* v_s_1083_){
_start:
{
lean_object* v___x_1084_; lean_object* v___x_1085_; lean_object* v___x_1086_; 
v___x_1084_ = lean_box(0);
v___x_1085_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1085_, 0, v___x_1084_);
lean_ctor_set(v___x_1085_, 1, v_s_1083_);
v___x_1086_ = lean_apply_2(v_inst_1082_, lean_box(0), v___x_1085_);
return v___x_1086_;
}
}
LEAN_EXPORT lean_object* l_Lake_EStateT_set(lean_object* v_00_u03b5_1087_, lean_object* v_00_u03c3_1088_, lean_object* v_m_1089_, lean_object* v_inst_1090_, lean_object* v_s_1091_, lean_object* v___y_1092_){
_start:
{
lean_object* v___x_1093_; lean_object* v___x_1094_; lean_object* v___x_1095_; 
v___x_1093_ = lean_box(0);
v___x_1094_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1094_, 0, v___x_1093_);
lean_ctor_set(v___x_1094_, 1, v_s_1091_);
v___x_1095_ = lean_apply_2(v_inst_1090_, lean_box(0), v___x_1094_);
return v___x_1095_;
}
}
LEAN_EXPORT lean_object* l_Lake_EStateT_set___boxed(lean_object* v_00_u03b5_1096_, lean_object* v_00_u03c3_1097_, lean_object* v_m_1098_, lean_object* v_inst_1099_, lean_object* v_s_1100_, lean_object* v___y_1101_){
_start:
{
lean_object* v_res_1102_; 
v_res_1102_ = l_Lake_EStateT_set(v_00_u03b5_1096_, v_00_u03c3_1097_, v_m_1098_, v_inst_1099_, v_s_1100_, v___y_1101_);
lean_dec(v___y_1101_);
return v_res_1102_;
}
}
LEAN_EXPORT lean_object* l_Lake_EStateT_get___redArg(lean_object* v_inst_1103_, lean_object* v___y_1104_){
_start:
{
lean_object* v___x_1105_; lean_object* v___x_1106_; 
lean_inc(v___y_1104_);
v___x_1105_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1105_, 0, v___y_1104_);
lean_ctor_set(v___x_1105_, 1, v___y_1104_);
v___x_1106_ = lean_apply_2(v_inst_1103_, lean_box(0), v___x_1105_);
return v___x_1106_;
}
}
LEAN_EXPORT lean_object* l_Lake_EStateT_get(lean_object* v_00_u03b5_1107_, lean_object* v_00_u03c3_1108_, lean_object* v_m_1109_, lean_object* v_inst_1110_, lean_object* v___y_1111_){
_start:
{
lean_object* v___x_1112_; lean_object* v___x_1113_; 
lean_inc(v___y_1111_);
v___x_1112_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1112_, 0, v___y_1111_);
lean_ctor_set(v___x_1112_, 1, v___y_1111_);
v___x_1113_ = lean_apply_2(v_inst_1110_, lean_box(0), v___x_1112_);
return v___x_1113_;
}
}
LEAN_EXPORT lean_object* l_Lake_EStateT_modifyGet___redArg(lean_object* v_inst_1114_, lean_object* v_f_1115_, lean_object* v___y_1116_){
_start:
{
lean_object* v___x_1117_; lean_object* v_fst_1118_; lean_object* v_snd_1119_; lean_object* v___x_1121_; uint8_t v_isShared_1122_; uint8_t v_isSharedCheck_1127_; 
v___x_1117_ = lean_apply_1(v_f_1115_, v___y_1116_);
v_fst_1118_ = lean_ctor_get(v___x_1117_, 0);
v_snd_1119_ = lean_ctor_get(v___x_1117_, 1);
v_isSharedCheck_1127_ = !lean_is_exclusive(v___x_1117_);
if (v_isSharedCheck_1127_ == 0)
{
v___x_1121_ = v___x_1117_;
v_isShared_1122_ = v_isSharedCheck_1127_;
goto v_resetjp_1120_;
}
else
{
lean_inc(v_snd_1119_);
lean_inc(v_fst_1118_);
lean_dec(v___x_1117_);
v___x_1121_ = lean_box(0);
v_isShared_1122_ = v_isSharedCheck_1127_;
goto v_resetjp_1120_;
}
v_resetjp_1120_:
{
lean_object* v___x_1124_; 
if (v_isShared_1122_ == 0)
{
v___x_1124_ = v___x_1121_;
goto v_reusejp_1123_;
}
else
{
lean_object* v_reuseFailAlloc_1126_; 
v_reuseFailAlloc_1126_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1126_, 0, v_fst_1118_);
lean_ctor_set(v_reuseFailAlloc_1126_, 1, v_snd_1119_);
v___x_1124_ = v_reuseFailAlloc_1126_;
goto v_reusejp_1123_;
}
v_reusejp_1123_:
{
lean_object* v___x_1125_; 
v___x_1125_ = lean_apply_2(v_inst_1114_, lean_box(0), v___x_1124_);
return v___x_1125_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_EStateT_modifyGet(lean_object* v_00_u03b5_1128_, lean_object* v_00_u03c3_1129_, lean_object* v_00_u03b1_1130_, lean_object* v_m_1131_, lean_object* v_inst_1132_, lean_object* v_f_1133_, lean_object* v___y_1134_){
_start:
{
lean_object* v___x_1135_; lean_object* v_fst_1136_; lean_object* v_snd_1137_; lean_object* v___x_1139_; uint8_t v_isShared_1140_; uint8_t v_isSharedCheck_1145_; 
v___x_1135_ = lean_apply_1(v_f_1133_, v___y_1134_);
v_fst_1136_ = lean_ctor_get(v___x_1135_, 0);
v_snd_1137_ = lean_ctor_get(v___x_1135_, 1);
v_isSharedCheck_1145_ = !lean_is_exclusive(v___x_1135_);
if (v_isSharedCheck_1145_ == 0)
{
v___x_1139_ = v___x_1135_;
v_isShared_1140_ = v_isSharedCheck_1145_;
goto v_resetjp_1138_;
}
else
{
lean_inc(v_snd_1137_);
lean_inc(v_fst_1136_);
lean_dec(v___x_1135_);
v___x_1139_ = lean_box(0);
v_isShared_1140_ = v_isSharedCheck_1145_;
goto v_resetjp_1138_;
}
v_resetjp_1138_:
{
lean_object* v___x_1142_; 
if (v_isShared_1140_ == 0)
{
v___x_1142_ = v___x_1139_;
goto v_reusejp_1141_;
}
else
{
lean_object* v_reuseFailAlloc_1144_; 
v_reuseFailAlloc_1144_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1144_, 0, v_fst_1136_);
lean_ctor_set(v_reuseFailAlloc_1144_, 1, v_snd_1137_);
v___x_1142_ = v_reuseFailAlloc_1144_;
goto v_reusejp_1141_;
}
v_reusejp_1141_:
{
lean_object* v___x_1143_; 
v___x_1143_ = lean_apply_2(v_inst_1132_, lean_box(0), v___x_1142_);
return v___x_1143_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_EStateT_instMonadStateOfOfPure___redArg___lam__0(lean_object* v_inst_1146_, lean_object* v_00_u03b1_1147_, lean_object* v___y_1148_, lean_object* v___y_1149_){
_start:
{
lean_object* v___x_1150_; lean_object* v_fst_1151_; lean_object* v_snd_1152_; lean_object* v___x_1154_; uint8_t v_isShared_1155_; uint8_t v_isSharedCheck_1160_; 
v___x_1150_ = lean_apply_1(v___y_1148_, v___y_1149_);
v_fst_1151_ = lean_ctor_get(v___x_1150_, 0);
v_snd_1152_ = lean_ctor_get(v___x_1150_, 1);
v_isSharedCheck_1160_ = !lean_is_exclusive(v___x_1150_);
if (v_isSharedCheck_1160_ == 0)
{
v___x_1154_ = v___x_1150_;
v_isShared_1155_ = v_isSharedCheck_1160_;
goto v_resetjp_1153_;
}
else
{
lean_inc(v_snd_1152_);
lean_inc(v_fst_1151_);
lean_dec(v___x_1150_);
v___x_1154_ = lean_box(0);
v_isShared_1155_ = v_isSharedCheck_1160_;
goto v_resetjp_1153_;
}
v_resetjp_1153_:
{
lean_object* v___x_1157_; 
if (v_isShared_1155_ == 0)
{
v___x_1157_ = v___x_1154_;
goto v_reusejp_1156_;
}
else
{
lean_object* v_reuseFailAlloc_1159_; 
v_reuseFailAlloc_1159_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1159_, 0, v_fst_1151_);
lean_ctor_set(v_reuseFailAlloc_1159_, 1, v_snd_1152_);
v___x_1157_ = v_reuseFailAlloc_1159_;
goto v_reusejp_1156_;
}
v_reusejp_1156_:
{
lean_object* v___x_1158_; 
v___x_1158_ = lean_apply_2(v_inst_1146_, lean_box(0), v___x_1157_);
return v___x_1158_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_EStateT_instMonadStateOfOfPure___redArg(lean_object* v_inst_1161_){
_start:
{
lean_object* v___f_1162_; lean_object* v___x_1163_; lean_object* v___x_1164_; lean_object* v___x_1165_; 
lean_inc_n(v_inst_1161_, 2);
v___f_1162_ = lean_alloc_closure((void*)(l_Lake_EStateT_instMonadStateOfOfPure___redArg___lam__0), 4, 1);
lean_closure_set(v___f_1162_, 0, v_inst_1161_);
v___x_1163_ = lean_alloc_closure((void*)(l_Lake_EStateT_get), 5, 4);
lean_closure_set(v___x_1163_, 0, lean_box(0));
lean_closure_set(v___x_1163_, 1, lean_box(0));
lean_closure_set(v___x_1163_, 2, lean_box(0));
lean_closure_set(v___x_1163_, 3, v_inst_1161_);
v___x_1164_ = lean_alloc_closure((void*)(l_Lake_EStateT_set___boxed), 6, 4);
lean_closure_set(v___x_1164_, 0, lean_box(0));
lean_closure_set(v___x_1164_, 1, lean_box(0));
lean_closure_set(v___x_1164_, 2, lean_box(0));
lean_closure_set(v___x_1164_, 3, v_inst_1161_);
v___x_1165_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1165_, 0, v___x_1163_);
lean_ctor_set(v___x_1165_, 1, v___x_1164_);
lean_ctor_set(v___x_1165_, 2, v___f_1162_);
return v___x_1165_;
}
}
LEAN_EXPORT lean_object* l_Lake_EStateT_instMonadStateOfOfPure(lean_object* v_00_u03b5_1166_, lean_object* v_00_u03c3_1167_, lean_object* v_m_1168_, lean_object* v_inst_1169_){
_start:
{
lean_object* v___x_1170_; 
v___x_1170_ = l_Lake_EStateT_instMonadStateOfOfPure___redArg(v_inst_1169_);
return v___x_1170_;
}
}
LEAN_EXPORT lean_object* l_Lake_EStateT_throw___redArg(lean_object* v_inst_1171_, lean_object* v_e_1172_, lean_object* v___y_1173_){
_start:
{
lean_object* v___x_1174_; lean_object* v___x_1175_; 
v___x_1174_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1174_, 0, v_e_1172_);
lean_ctor_set(v___x_1174_, 1, v___y_1173_);
v___x_1175_ = lean_apply_2(v_inst_1171_, lean_box(0), v___x_1174_);
return v___x_1175_;
}
}
LEAN_EXPORT lean_object* l_Lake_EStateT_throw(lean_object* v_00_u03b5_1176_, lean_object* v_00_u03c3_1177_, lean_object* v_00_u03b1_1178_, lean_object* v_m_1179_, lean_object* v_inst_1180_, lean_object* v_e_1181_, lean_object* v___y_1182_){
_start:
{
lean_object* v___x_1183_; lean_object* v___x_1184_; 
v___x_1183_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1183_, 0, v_e_1181_);
lean_ctor_set(v___x_1183_, 1, v___y_1182_);
v___x_1184_ = lean_apply_2(v_inst_1180_, lean_box(0), v___x_1183_);
return v___x_1184_;
}
}
LEAN_EXPORT lean_object* l_Lake_EStateT_tryCatch___redArg___lam__0(lean_object* v_toPure_1185_, lean_object* v_handle_1186_, lean_object* v_____do__lift_1187_){
_start:
{
if (lean_obj_tag(v_____do__lift_1187_) == 0)
{
lean_object* v___x_1188_; 
lean_dec(v_handle_1186_);
v___x_1188_ = lean_apply_2(v_toPure_1185_, lean_box(0), v_____do__lift_1187_);
return v___x_1188_;
}
else
{
lean_object* v_a_1189_; lean_object* v_a_1190_; lean_object* v___x_1191_; 
lean_dec(v_toPure_1185_);
v_a_1189_ = lean_ctor_get(v_____do__lift_1187_, 0);
lean_inc(v_a_1189_);
v_a_1190_ = lean_ctor_get(v_____do__lift_1187_, 1);
lean_inc(v_a_1190_);
lean_dec_ref_known(v_____do__lift_1187_, 2);
v___x_1191_ = lean_apply_2(v_handle_1186_, v_a_1189_, v_a_1190_);
return v___x_1191_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_EStateT_tryCatch___redArg(lean_object* v_inst_1192_, lean_object* v_x_1193_, lean_object* v_handle_1194_, lean_object* v___y_1195_){
_start:
{
lean_object* v_toApplicative_1196_; lean_object* v_toBind_1197_; lean_object* v_toPure_1198_; lean_object* v___f_1199_; lean_object* v___x_1200_; lean_object* v___x_1201_; 
v_toApplicative_1196_ = lean_ctor_get(v_inst_1192_, 0);
lean_inc_ref(v_toApplicative_1196_);
v_toBind_1197_ = lean_ctor_get(v_inst_1192_, 1);
lean_inc(v_toBind_1197_);
lean_dec_ref(v_inst_1192_);
v_toPure_1198_ = lean_ctor_get(v_toApplicative_1196_, 1);
lean_inc(v_toPure_1198_);
lean_dec_ref(v_toApplicative_1196_);
v___f_1199_ = lean_alloc_closure((void*)(l_Lake_EStateT_tryCatch___redArg___lam__0), 3, 2);
lean_closure_set(v___f_1199_, 0, v_toPure_1198_);
lean_closure_set(v___f_1199_, 1, v_handle_1194_);
v___x_1200_ = lean_apply_1(v_x_1193_, v___y_1195_);
v___x_1201_ = lean_apply_4(v_toBind_1197_, lean_box(0), lean_box(0), v___x_1200_, v___f_1199_);
return v___x_1201_;
}
}
LEAN_EXPORT lean_object* l_Lake_EStateT_tryCatch(lean_object* v_00_u03b5_1202_, lean_object* v_00_u03c3_1203_, lean_object* v_00_u03b1_1204_, lean_object* v_m_1205_, lean_object* v_inst_1206_, lean_object* v_x_1207_, lean_object* v_handle_1208_, lean_object* v___y_1209_){
_start:
{
lean_object* v_toApplicative_1210_; lean_object* v_toBind_1211_; lean_object* v_toPure_1212_; lean_object* v___f_1213_; lean_object* v___x_1214_; lean_object* v___x_1215_; 
v_toApplicative_1210_ = lean_ctor_get(v_inst_1206_, 0);
lean_inc_ref(v_toApplicative_1210_);
v_toBind_1211_ = lean_ctor_get(v_inst_1206_, 1);
lean_inc(v_toBind_1211_);
lean_dec_ref(v_inst_1206_);
v_toPure_1212_ = lean_ctor_get(v_toApplicative_1210_, 1);
lean_inc(v_toPure_1212_);
lean_dec_ref(v_toApplicative_1210_);
v___f_1213_ = lean_alloc_closure((void*)(l_Lake_EStateT_tryCatch___redArg___lam__0), 3, 2);
lean_closure_set(v___f_1213_, 0, v_toPure_1212_);
lean_closure_set(v___f_1213_, 1, v_handle_1208_);
v___x_1214_ = lean_apply_1(v_x_1207_, v___y_1209_);
v___x_1215_ = lean_apply_4(v_toBind_1211_, lean_box(0), lean_box(0), v___x_1214_, v___f_1213_);
return v___x_1215_;
}
}
LEAN_EXPORT lean_object* l_Lake_EStateT_instMonadExceptOfOfMonad___redArg___lam__0(lean_object* v_toPure_1216_, lean_object* v___y_1217_, lean_object* v_____do__lift_1218_){
_start:
{
if (lean_obj_tag(v_____do__lift_1218_) == 0)
{
lean_object* v___x_1219_; 
lean_dec(v___y_1217_);
v___x_1219_ = lean_apply_2(v_toPure_1216_, lean_box(0), v_____do__lift_1218_);
return v___x_1219_;
}
else
{
lean_object* v_a_1220_; lean_object* v_a_1221_; lean_object* v___x_1222_; 
lean_dec(v_toPure_1216_);
v_a_1220_ = lean_ctor_get(v_____do__lift_1218_, 0);
lean_inc(v_a_1220_);
v_a_1221_ = lean_ctor_get(v_____do__lift_1218_, 1);
lean_inc(v_a_1221_);
lean_dec_ref_known(v_____do__lift_1218_, 2);
v___x_1222_ = lean_apply_2(v___y_1217_, v_a_1220_, v_a_1221_);
return v___x_1222_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_EStateT_instMonadExceptOfOfMonad___redArg___lam__1(lean_object* v_toPure_1223_, lean_object* v_toBind_1224_, lean_object* v_00_u03b1_1225_, lean_object* v___y_1226_, lean_object* v___y_1227_, lean_object* v___y_1228_){
_start:
{
lean_object* v___f_1229_; lean_object* v___x_1230_; lean_object* v___x_1231_; 
v___f_1229_ = lean_alloc_closure((void*)(l_Lake_EStateT_instMonadExceptOfOfMonad___redArg___lam__0), 3, 2);
lean_closure_set(v___f_1229_, 0, v_toPure_1223_);
lean_closure_set(v___f_1229_, 1, v___y_1227_);
v___x_1230_ = lean_apply_1(v___y_1226_, v___y_1228_);
v___x_1231_ = lean_apply_4(v_toBind_1224_, lean_box(0), lean_box(0), v___x_1230_, v___f_1229_);
return v___x_1231_;
}
}
LEAN_EXPORT lean_object* l_Lake_EStateT_instMonadExceptOfOfMonad___redArg___lam__2(lean_object* v_toPure_1232_, lean_object* v_00_u03b1_1233_, lean_object* v___y_1234_, lean_object* v___y_1235_){
_start:
{
lean_object* v___x_1236_; lean_object* v___x_1237_; 
v___x_1236_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1236_, 0, v___y_1234_);
lean_ctor_set(v___x_1236_, 1, v___y_1235_);
v___x_1237_ = lean_apply_2(v_toPure_1232_, lean_box(0), v___x_1236_);
return v___x_1237_;
}
}
LEAN_EXPORT lean_object* l_Lake_EStateT_instMonadExceptOfOfMonad___redArg(lean_object* v_inst_1238_){
_start:
{
lean_object* v_toApplicative_1239_; lean_object* v_toBind_1240_; lean_object* v___x_1242_; uint8_t v_isShared_1243_; uint8_t v_isSharedCheck_1250_; 
v_toApplicative_1239_ = lean_ctor_get(v_inst_1238_, 0);
v_toBind_1240_ = lean_ctor_get(v_inst_1238_, 1);
v_isSharedCheck_1250_ = !lean_is_exclusive(v_inst_1238_);
if (v_isSharedCheck_1250_ == 0)
{
v___x_1242_ = v_inst_1238_;
v_isShared_1243_ = v_isSharedCheck_1250_;
goto v_resetjp_1241_;
}
else
{
lean_inc(v_toBind_1240_);
lean_inc(v_toApplicative_1239_);
lean_dec(v_inst_1238_);
v___x_1242_ = lean_box(0);
v_isShared_1243_ = v_isSharedCheck_1250_;
goto v_resetjp_1241_;
}
v_resetjp_1241_:
{
lean_object* v_toPure_1244_; lean_object* v___f_1245_; lean_object* v___f_1246_; lean_object* v___x_1248_; 
v_toPure_1244_ = lean_ctor_get(v_toApplicative_1239_, 1);
lean_inc_n(v_toPure_1244_, 2);
lean_dec_ref(v_toApplicative_1239_);
v___f_1245_ = lean_alloc_closure((void*)(l_Lake_EStateT_instMonadExceptOfOfMonad___redArg___lam__1), 6, 2);
lean_closure_set(v___f_1245_, 0, v_toPure_1244_);
lean_closure_set(v___f_1245_, 1, v_toBind_1240_);
v___f_1246_ = lean_alloc_closure((void*)(l_Lake_EStateT_instMonadExceptOfOfMonad___redArg___lam__2), 4, 1);
lean_closure_set(v___f_1246_, 0, v_toPure_1244_);
if (v_isShared_1243_ == 0)
{
lean_ctor_set(v___x_1242_, 1, v___f_1245_);
lean_ctor_set(v___x_1242_, 0, v___f_1246_);
v___x_1248_ = v___x_1242_;
goto v_reusejp_1247_;
}
else
{
lean_object* v_reuseFailAlloc_1249_; 
v_reuseFailAlloc_1249_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1249_, 0, v___f_1246_);
lean_ctor_set(v_reuseFailAlloc_1249_, 1, v___f_1245_);
v___x_1248_ = v_reuseFailAlloc_1249_;
goto v_reusejp_1247_;
}
v_reusejp_1247_:
{
return v___x_1248_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_EStateT_instMonadExceptOfOfMonad(lean_object* v_00_u03b5_1251_, lean_object* v_00_u03c3_1252_, lean_object* v_m_1253_, lean_object* v_inst_1254_){
_start:
{
lean_object* v___x_1255_; 
v___x_1255_ = l_Lake_EStateT_instMonadExceptOfOfMonad___redArg(v_inst_1254_);
return v___x_1255_;
}
}
LEAN_EXPORT lean_object* l_Lake_EStateT_orElse___redArg___lam__0(lean_object* v_toPure_1256_, lean_object* v_x_u2082_1257_, lean_object* v_____do__lift_1258_){
_start:
{
if (lean_obj_tag(v_____do__lift_1258_) == 0)
{
lean_object* v___x_1259_; 
lean_dec(v_x_u2082_1257_);
v___x_1259_ = lean_apply_2(v_toPure_1256_, lean_box(0), v_____do__lift_1258_);
return v___x_1259_;
}
else
{
lean_object* v_a_1260_; lean_object* v___x_1261_; lean_object* v___x_1262_; 
lean_dec(v_toPure_1256_);
v_a_1260_ = lean_ctor_get(v_____do__lift_1258_, 1);
lean_inc(v_a_1260_);
lean_dec_ref_known(v_____do__lift_1258_, 2);
v___x_1261_ = lean_box(0);
v___x_1262_ = lean_apply_2(v_x_u2082_1257_, v___x_1261_, v_a_1260_);
return v___x_1262_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_EStateT_orElse___redArg(lean_object* v_inst_1263_, lean_object* v_x_u2081_1264_, lean_object* v_x_u2082_1265_, lean_object* v___y_1266_){
_start:
{
lean_object* v_toApplicative_1267_; lean_object* v_toBind_1268_; lean_object* v_toPure_1269_; lean_object* v___f_1270_; lean_object* v___x_1271_; lean_object* v___x_1272_; 
v_toApplicative_1267_ = lean_ctor_get(v_inst_1263_, 0);
lean_inc_ref(v_toApplicative_1267_);
v_toBind_1268_ = lean_ctor_get(v_inst_1263_, 1);
lean_inc(v_toBind_1268_);
lean_dec_ref(v_inst_1263_);
v_toPure_1269_ = lean_ctor_get(v_toApplicative_1267_, 1);
lean_inc(v_toPure_1269_);
lean_dec_ref(v_toApplicative_1267_);
v___f_1270_ = lean_alloc_closure((void*)(l_Lake_EStateT_orElse___redArg___lam__0), 3, 2);
lean_closure_set(v___f_1270_, 0, v_toPure_1269_);
lean_closure_set(v___f_1270_, 1, v_x_u2082_1265_);
v___x_1271_ = lean_apply_1(v_x_u2081_1264_, v___y_1266_);
v___x_1272_ = lean_apply_4(v_toBind_1268_, lean_box(0), lean_box(0), v___x_1271_, v___f_1270_);
return v___x_1272_;
}
}
LEAN_EXPORT lean_object* l_Lake_EStateT_orElse(lean_object* v_00_u03b5_1273_, lean_object* v_00_u03c3_1274_, lean_object* v_00_u03b1_1275_, lean_object* v_m_1276_, lean_object* v_inst_1277_, lean_object* v_x_u2081_1278_, lean_object* v_x_u2082_1279_, lean_object* v___y_1280_){
_start:
{
lean_object* v_toApplicative_1281_; lean_object* v_toBind_1282_; lean_object* v_toPure_1283_; lean_object* v___f_1284_; lean_object* v___x_1285_; lean_object* v___x_1286_; 
v_toApplicative_1281_ = lean_ctor_get(v_inst_1277_, 0);
lean_inc_ref(v_toApplicative_1281_);
v_toBind_1282_ = lean_ctor_get(v_inst_1277_, 1);
lean_inc(v_toBind_1282_);
lean_dec_ref(v_inst_1277_);
v_toPure_1283_ = lean_ctor_get(v_toApplicative_1281_, 1);
lean_inc(v_toPure_1283_);
lean_dec_ref(v_toApplicative_1281_);
v___f_1284_ = lean_alloc_closure((void*)(l_Lake_EStateT_orElse___redArg___lam__0), 3, 2);
lean_closure_set(v___f_1284_, 0, v_toPure_1283_);
lean_closure_set(v___f_1284_, 1, v_x_u2082_1279_);
v___x_1285_ = lean_apply_1(v_x_u2081_1278_, v___y_1280_);
v___x_1286_ = lean_apply_4(v_toBind_1282_, lean_box(0), lean_box(0), v___x_1285_, v___f_1284_);
return v___x_1286_;
}
}
LEAN_EXPORT lean_object* l_Lake_EStateT_instOrElseOfMonad___redArg(lean_object* v_inst_1287_){
_start:
{
lean_object* v___x_1288_; 
v___x_1288_ = lean_alloc_closure((void*)(l_Lake_EStateT_orElse), 8, 5);
lean_closure_set(v___x_1288_, 0, lean_box(0));
lean_closure_set(v___x_1288_, 1, lean_box(0));
lean_closure_set(v___x_1288_, 2, lean_box(0));
lean_closure_set(v___x_1288_, 3, lean_box(0));
lean_closure_set(v___x_1288_, 4, v_inst_1287_);
return v___x_1288_;
}
}
LEAN_EXPORT lean_object* l_Lake_EStateT_instOrElseOfMonad(lean_object* v_00_u03b5_1289_, lean_object* v_00_u03c3_1290_, lean_object* v_00_u03b1_1291_, lean_object* v_m_1292_, lean_object* v_inst_1293_){
_start:
{
lean_object* v___x_1294_; 
v___x_1294_ = lean_alloc_closure((void*)(l_Lake_EStateT_orElse), 8, 5);
lean_closure_set(v___x_1294_, 0, lean_box(0));
lean_closure_set(v___x_1294_, 1, lean_box(0));
lean_closure_set(v___x_1294_, 2, lean_box(0));
lean_closure_set(v___x_1294_, 3, lean_box(0));
lean_closure_set(v___x_1294_, 4, v_inst_1293_);
return v___x_1294_;
}
}
LEAN_EXPORT lean_object* l_Lake_EStateT_adaptExcept___redArg___lam__0(lean_object* v_f_1295_, lean_object* v_x_1296_){
_start:
{
if (lean_obj_tag(v_x_1296_) == 0)
{
lean_object* v_a_1297_; lean_object* v_a_1298_; lean_object* v___x_1300_; uint8_t v_isShared_1301_; uint8_t v_isSharedCheck_1305_; 
lean_dec(v_f_1295_);
v_a_1297_ = lean_ctor_get(v_x_1296_, 0);
v_a_1298_ = lean_ctor_get(v_x_1296_, 1);
v_isSharedCheck_1305_ = !lean_is_exclusive(v_x_1296_);
if (v_isSharedCheck_1305_ == 0)
{
v___x_1300_ = v_x_1296_;
v_isShared_1301_ = v_isSharedCheck_1305_;
goto v_resetjp_1299_;
}
else
{
lean_inc(v_a_1298_);
lean_inc(v_a_1297_);
lean_dec(v_x_1296_);
v___x_1300_ = lean_box(0);
v_isShared_1301_ = v_isSharedCheck_1305_;
goto v_resetjp_1299_;
}
v_resetjp_1299_:
{
lean_object* v___x_1303_; 
if (v_isShared_1301_ == 0)
{
v___x_1303_ = v___x_1300_;
goto v_reusejp_1302_;
}
else
{
lean_object* v_reuseFailAlloc_1304_; 
v_reuseFailAlloc_1304_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1304_, 0, v_a_1297_);
lean_ctor_set(v_reuseFailAlloc_1304_, 1, v_a_1298_);
v___x_1303_ = v_reuseFailAlloc_1304_;
goto v_reusejp_1302_;
}
v_reusejp_1302_:
{
return v___x_1303_;
}
}
}
else
{
lean_object* v_a_1306_; lean_object* v_a_1307_; lean_object* v___x_1309_; uint8_t v_isShared_1310_; uint8_t v_isSharedCheck_1315_; 
v_a_1306_ = lean_ctor_get(v_x_1296_, 0);
v_a_1307_ = lean_ctor_get(v_x_1296_, 1);
v_isSharedCheck_1315_ = !lean_is_exclusive(v_x_1296_);
if (v_isSharedCheck_1315_ == 0)
{
v___x_1309_ = v_x_1296_;
v_isShared_1310_ = v_isSharedCheck_1315_;
goto v_resetjp_1308_;
}
else
{
lean_inc(v_a_1307_);
lean_inc(v_a_1306_);
lean_dec(v_x_1296_);
v___x_1309_ = lean_box(0);
v_isShared_1310_ = v_isSharedCheck_1315_;
goto v_resetjp_1308_;
}
v_resetjp_1308_:
{
lean_object* v___x_1311_; lean_object* v___x_1313_; 
v___x_1311_ = lean_apply_1(v_f_1295_, v_a_1306_);
if (v_isShared_1310_ == 0)
{
lean_ctor_set(v___x_1309_, 0, v___x_1311_);
v___x_1313_ = v___x_1309_;
goto v_reusejp_1312_;
}
else
{
lean_object* v_reuseFailAlloc_1314_; 
v_reuseFailAlloc_1314_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1314_, 0, v___x_1311_);
lean_ctor_set(v_reuseFailAlloc_1314_, 1, v_a_1307_);
v___x_1313_ = v_reuseFailAlloc_1314_;
goto v_reusejp_1312_;
}
v_reusejp_1312_:
{
return v___x_1313_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_EStateT_adaptExcept___redArg(lean_object* v_inst_1316_, lean_object* v_f_1317_, lean_object* v_x_1318_, lean_object* v___y_1319_){
_start:
{
lean_object* v_map_1320_; lean_object* v___f_1321_; lean_object* v___x_1322_; lean_object* v___x_1323_; 
v_map_1320_ = lean_ctor_get(v_inst_1316_, 0);
lean_inc(v_map_1320_);
lean_dec_ref(v_inst_1316_);
v___f_1321_ = lean_alloc_closure((void*)(l_Lake_EStateT_adaptExcept___redArg___lam__0), 2, 1);
lean_closure_set(v___f_1321_, 0, v_f_1317_);
v___x_1322_ = lean_apply_1(v_x_1318_, v___y_1319_);
v___x_1323_ = lean_apply_4(v_map_1320_, lean_box(0), lean_box(0), v___f_1321_, v___x_1322_);
return v___x_1323_;
}
}
LEAN_EXPORT lean_object* l_Lake_EStateT_adaptExcept(lean_object* v_00_u03b5_1324_, lean_object* v_00_u03b5_x27_1325_, lean_object* v_00_u03c3_1326_, lean_object* v_00_u03b1_1327_, lean_object* v_m_1328_, lean_object* v_inst_1329_, lean_object* v_f_1330_, lean_object* v_x_1331_, lean_object* v___y_1332_){
_start:
{
lean_object* v_map_1333_; lean_object* v___f_1334_; lean_object* v___x_1335_; lean_object* v___x_1336_; 
v_map_1333_ = lean_ctor_get(v_inst_1329_, 0);
lean_inc(v_map_1333_);
lean_dec_ref(v_inst_1329_);
v___f_1334_ = lean_alloc_closure((void*)(l_Lake_EStateT_adaptExcept___redArg___lam__0), 2, 1);
lean_closure_set(v___f_1334_, 0, v_f_1330_);
v___x_1335_ = lean_apply_1(v_x_1331_, v___y_1332_);
v___x_1336_ = lean_apply_4(v_map_1333_, lean_box(0), lean_box(0), v___f_1334_, v___x_1335_);
return v___x_1336_;
}
}
LEAN_EXPORT lean_object* l_Lake_EStateT_tryFinally_x27___redArg___lam__0(lean_object* v_a_1337_, lean_object* v_toPure_1338_, lean_object* v_____do__lift_1339_){
_start:
{
if (lean_obj_tag(v_____do__lift_1339_) == 0)
{
lean_object* v_a_1340_; lean_object* v_a_1341_; lean_object* v___x_1343_; uint8_t v_isShared_1344_; uint8_t v_isSharedCheck_1350_; 
v_a_1340_ = lean_ctor_get(v_____do__lift_1339_, 0);
v_a_1341_ = lean_ctor_get(v_____do__lift_1339_, 1);
v_isSharedCheck_1350_ = !lean_is_exclusive(v_____do__lift_1339_);
if (v_isSharedCheck_1350_ == 0)
{
v___x_1343_ = v_____do__lift_1339_;
v_isShared_1344_ = v_isSharedCheck_1350_;
goto v_resetjp_1342_;
}
else
{
lean_inc(v_a_1341_);
lean_inc(v_a_1340_);
lean_dec(v_____do__lift_1339_);
v___x_1343_ = lean_box(0);
v_isShared_1344_ = v_isSharedCheck_1350_;
goto v_resetjp_1342_;
}
v_resetjp_1342_:
{
lean_object* v___x_1345_; lean_object* v___x_1347_; 
v___x_1345_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1345_, 0, v_a_1337_);
lean_ctor_set(v___x_1345_, 1, v_a_1340_);
if (v_isShared_1344_ == 0)
{
lean_ctor_set(v___x_1343_, 0, v___x_1345_);
v___x_1347_ = v___x_1343_;
goto v_reusejp_1346_;
}
else
{
lean_object* v_reuseFailAlloc_1349_; 
v_reuseFailAlloc_1349_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1349_, 0, v___x_1345_);
lean_ctor_set(v_reuseFailAlloc_1349_, 1, v_a_1341_);
v___x_1347_ = v_reuseFailAlloc_1349_;
goto v_reusejp_1346_;
}
v_reusejp_1346_:
{
lean_object* v___x_1348_; 
v___x_1348_ = lean_apply_2(v_toPure_1338_, lean_box(0), v___x_1347_);
return v___x_1348_;
}
}
}
else
{
lean_object* v_a_1351_; lean_object* v_a_1352_; lean_object* v___x_1354_; uint8_t v_isShared_1355_; uint8_t v_isSharedCheck_1360_; 
lean_dec(v_a_1337_);
v_a_1351_ = lean_ctor_get(v_____do__lift_1339_, 0);
v_a_1352_ = lean_ctor_get(v_____do__lift_1339_, 1);
v_isSharedCheck_1360_ = !lean_is_exclusive(v_____do__lift_1339_);
if (v_isSharedCheck_1360_ == 0)
{
v___x_1354_ = v_____do__lift_1339_;
v_isShared_1355_ = v_isSharedCheck_1360_;
goto v_resetjp_1353_;
}
else
{
lean_inc(v_a_1352_);
lean_inc(v_a_1351_);
lean_dec(v_____do__lift_1339_);
v___x_1354_ = lean_box(0);
v_isShared_1355_ = v_isSharedCheck_1360_;
goto v_resetjp_1353_;
}
v_resetjp_1353_:
{
lean_object* v___x_1357_; 
if (v_isShared_1355_ == 0)
{
v___x_1357_ = v___x_1354_;
goto v_reusejp_1356_;
}
else
{
lean_object* v_reuseFailAlloc_1359_; 
v_reuseFailAlloc_1359_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1359_, 0, v_a_1351_);
lean_ctor_set(v_reuseFailAlloc_1359_, 1, v_a_1352_);
v___x_1357_ = v_reuseFailAlloc_1359_;
goto v_reusejp_1356_;
}
v_reusejp_1356_:
{
lean_object* v___x_1358_; 
v___x_1358_ = lean_apply_2(v_toPure_1338_, lean_box(0), v___x_1357_);
return v___x_1358_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_EStateT_tryFinally_x27___redArg___lam__1(lean_object* v_a_1361_, lean_object* v_toPure_1362_, lean_object* v_____do__lift_1363_){
_start:
{
if (lean_obj_tag(v_____do__lift_1363_) == 0)
{
lean_object* v_a_1364_; lean_object* v___x_1366_; uint8_t v_isShared_1367_; uint8_t v_isSharedCheck_1372_; 
v_a_1364_ = lean_ctor_get(v_____do__lift_1363_, 1);
v_isSharedCheck_1372_ = !lean_is_exclusive(v_____do__lift_1363_);
if (v_isSharedCheck_1372_ == 0)
{
lean_object* v_unused_1373_; 
v_unused_1373_ = lean_ctor_get(v_____do__lift_1363_, 0);
lean_dec(v_unused_1373_);
v___x_1366_ = v_____do__lift_1363_;
v_isShared_1367_ = v_isSharedCheck_1372_;
goto v_resetjp_1365_;
}
else
{
lean_inc(v_a_1364_);
lean_dec(v_____do__lift_1363_);
v___x_1366_ = lean_box(0);
v_isShared_1367_ = v_isSharedCheck_1372_;
goto v_resetjp_1365_;
}
v_resetjp_1365_:
{
lean_object* v___x_1369_; 
if (v_isShared_1367_ == 0)
{
lean_ctor_set_tag(v___x_1366_, 1);
lean_ctor_set(v___x_1366_, 0, v_a_1361_);
v___x_1369_ = v___x_1366_;
goto v_reusejp_1368_;
}
else
{
lean_object* v_reuseFailAlloc_1371_; 
v_reuseFailAlloc_1371_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1371_, 0, v_a_1361_);
lean_ctor_set(v_reuseFailAlloc_1371_, 1, v_a_1364_);
v___x_1369_ = v_reuseFailAlloc_1371_;
goto v_reusejp_1368_;
}
v_reusejp_1368_:
{
lean_object* v___x_1370_; 
v___x_1370_ = lean_apply_2(v_toPure_1362_, lean_box(0), v___x_1369_);
return v___x_1370_;
}
}
}
else
{
lean_object* v_a_1374_; lean_object* v_a_1375_; lean_object* v___x_1377_; uint8_t v_isShared_1378_; uint8_t v_isSharedCheck_1383_; 
lean_dec(v_a_1361_);
v_a_1374_ = lean_ctor_get(v_____do__lift_1363_, 0);
v_a_1375_ = lean_ctor_get(v_____do__lift_1363_, 1);
v_isSharedCheck_1383_ = !lean_is_exclusive(v_____do__lift_1363_);
if (v_isSharedCheck_1383_ == 0)
{
v___x_1377_ = v_____do__lift_1363_;
v_isShared_1378_ = v_isSharedCheck_1383_;
goto v_resetjp_1376_;
}
else
{
lean_inc(v_a_1375_);
lean_inc(v_a_1374_);
lean_dec(v_____do__lift_1363_);
v___x_1377_ = lean_box(0);
v_isShared_1378_ = v_isSharedCheck_1383_;
goto v_resetjp_1376_;
}
v_resetjp_1376_:
{
lean_object* v___x_1380_; 
if (v_isShared_1378_ == 0)
{
v___x_1380_ = v___x_1377_;
goto v_reusejp_1379_;
}
else
{
lean_object* v_reuseFailAlloc_1382_; 
v_reuseFailAlloc_1382_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1382_, 0, v_a_1374_);
lean_ctor_set(v_reuseFailAlloc_1382_, 1, v_a_1375_);
v___x_1380_ = v_reuseFailAlloc_1382_;
goto v_reusejp_1379_;
}
v_reusejp_1379_:
{
lean_object* v___x_1381_; 
v___x_1381_ = lean_apply_2(v_toPure_1362_, lean_box(0), v___x_1380_);
return v___x_1381_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_EStateT_tryFinally_x27___redArg___lam__2(lean_object* v_toPure_1384_, lean_object* v_f_1385_, lean_object* v_toBind_1386_, lean_object* v_r_1387_){
_start:
{
if (lean_obj_tag(v_r_1387_) == 0)
{
lean_object* v_a_1388_; lean_object* v_a_1389_; lean_object* v___f_1390_; lean_object* v___x_1391_; lean_object* v___x_1392_; lean_object* v___x_1393_; 
v_a_1388_ = lean_ctor_get(v_r_1387_, 0);
lean_inc_n(v_a_1388_, 2);
v_a_1389_ = lean_ctor_get(v_r_1387_, 1);
lean_inc(v_a_1389_);
lean_dec_ref_known(v_r_1387_, 2);
v___f_1390_ = lean_alloc_closure((void*)(l_Lake_EStateT_tryFinally_x27___redArg___lam__0), 3, 2);
lean_closure_set(v___f_1390_, 0, v_a_1388_);
lean_closure_set(v___f_1390_, 1, v_toPure_1384_);
v___x_1391_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1391_, 0, v_a_1388_);
v___x_1392_ = lean_apply_2(v_f_1385_, v___x_1391_, v_a_1389_);
v___x_1393_ = lean_apply_4(v_toBind_1386_, lean_box(0), lean_box(0), v___x_1392_, v___f_1390_);
return v___x_1393_;
}
else
{
lean_object* v_a_1394_; lean_object* v_a_1395_; lean_object* v___f_1396_; lean_object* v___x_1397_; lean_object* v___x_1398_; lean_object* v___x_1399_; 
v_a_1394_ = lean_ctor_get(v_r_1387_, 0);
lean_inc(v_a_1394_);
v_a_1395_ = lean_ctor_get(v_r_1387_, 1);
lean_inc(v_a_1395_);
lean_dec_ref_known(v_r_1387_, 2);
v___f_1396_ = lean_alloc_closure((void*)(l_Lake_EStateT_tryFinally_x27___redArg___lam__1), 3, 2);
lean_closure_set(v___f_1396_, 0, v_a_1394_);
lean_closure_set(v___f_1396_, 1, v_toPure_1384_);
v___x_1397_ = lean_box(0);
v___x_1398_ = lean_apply_2(v_f_1385_, v___x_1397_, v_a_1395_);
v___x_1399_ = lean_apply_4(v_toBind_1386_, lean_box(0), lean_box(0), v___x_1398_, v___f_1396_);
return v___x_1399_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_EStateT_tryFinally_x27___redArg(lean_object* v_inst_1400_, lean_object* v_x_1401_, lean_object* v_f_1402_, lean_object* v___y_1403_){
_start:
{
lean_object* v_toApplicative_1404_; lean_object* v_toBind_1405_; lean_object* v_toPure_1406_; lean_object* v___f_1407_; lean_object* v___x_1408_; lean_object* v___x_1409_; 
v_toApplicative_1404_ = lean_ctor_get(v_inst_1400_, 0);
lean_inc_ref(v_toApplicative_1404_);
v_toBind_1405_ = lean_ctor_get(v_inst_1400_, 1);
lean_inc_n(v_toBind_1405_, 2);
lean_dec_ref(v_inst_1400_);
v_toPure_1406_ = lean_ctor_get(v_toApplicative_1404_, 1);
lean_inc(v_toPure_1406_);
lean_dec_ref(v_toApplicative_1404_);
v___f_1407_ = lean_alloc_closure((void*)(l_Lake_EStateT_tryFinally_x27___redArg___lam__2), 4, 3);
lean_closure_set(v___f_1407_, 0, v_toPure_1406_);
lean_closure_set(v___f_1407_, 1, v_f_1402_);
lean_closure_set(v___f_1407_, 2, v_toBind_1405_);
v___x_1408_ = lean_apply_1(v_x_1401_, v___y_1403_);
v___x_1409_ = lean_apply_4(v_toBind_1405_, lean_box(0), lean_box(0), v___x_1408_, v___f_1407_);
return v___x_1409_;
}
}
LEAN_EXPORT lean_object* l_Lake_EStateT_tryFinally_x27(lean_object* v_00_u03b5_1410_, lean_object* v_00_u03c3_1411_, lean_object* v_00_u03b1_1412_, lean_object* v_00_u03b2_1413_, lean_object* v_m_1414_, lean_object* v_inst_1415_, lean_object* v_x_1416_, lean_object* v_f_1417_, lean_object* v___y_1418_){
_start:
{
lean_object* v_toApplicative_1419_; lean_object* v_toBind_1420_; lean_object* v_toPure_1421_; lean_object* v___f_1422_; lean_object* v___x_1423_; lean_object* v___x_1424_; 
v_toApplicative_1419_ = lean_ctor_get(v_inst_1415_, 0);
lean_inc_ref(v_toApplicative_1419_);
v_toBind_1420_ = lean_ctor_get(v_inst_1415_, 1);
lean_inc_n(v_toBind_1420_, 2);
lean_dec_ref(v_inst_1415_);
v_toPure_1421_ = lean_ctor_get(v_toApplicative_1419_, 1);
lean_inc(v_toPure_1421_);
lean_dec_ref(v_toApplicative_1419_);
v___f_1422_ = lean_alloc_closure((void*)(l_Lake_EStateT_tryFinally_x27___redArg___lam__2), 4, 3);
lean_closure_set(v___f_1422_, 0, v_toPure_1421_);
lean_closure_set(v___f_1422_, 1, v_f_1417_);
lean_closure_set(v___f_1422_, 2, v_toBind_1420_);
v___x_1423_ = lean_apply_1(v_x_1416_, v___y_1418_);
v___x_1424_ = lean_apply_4(v_toBind_1420_, lean_box(0), lean_box(0), v___x_1423_, v___f_1422_);
return v___x_1424_;
}
}
LEAN_EXPORT lean_object* l_Lake_EStateT_instMonadFinallyOfMonad___redArg___lam__2(lean_object* v_toPure_1425_, lean_object* v___y_1426_, lean_object* v_toBind_1427_, lean_object* v_r_1428_){
_start:
{
if (lean_obj_tag(v_r_1428_) == 0)
{
lean_object* v_a_1429_; lean_object* v_a_1430_; lean_object* v___f_1431_; lean_object* v___x_1432_; lean_object* v___x_1433_; lean_object* v___x_1434_; 
v_a_1429_ = lean_ctor_get(v_r_1428_, 0);
lean_inc_n(v_a_1429_, 2);
v_a_1430_ = lean_ctor_get(v_r_1428_, 1);
lean_inc(v_a_1430_);
lean_dec_ref_known(v_r_1428_, 2);
v___f_1431_ = lean_alloc_closure((void*)(l_Lake_EStateT_tryFinally_x27___redArg___lam__0), 3, 2);
lean_closure_set(v___f_1431_, 0, v_a_1429_);
lean_closure_set(v___f_1431_, 1, v_toPure_1425_);
v___x_1432_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1432_, 0, v_a_1429_);
v___x_1433_ = lean_apply_2(v___y_1426_, v___x_1432_, v_a_1430_);
v___x_1434_ = lean_apply_4(v_toBind_1427_, lean_box(0), lean_box(0), v___x_1433_, v___f_1431_);
return v___x_1434_;
}
else
{
lean_object* v_a_1435_; lean_object* v_a_1436_; lean_object* v___f_1437_; lean_object* v___x_1438_; lean_object* v___x_1439_; lean_object* v___x_1440_; 
v_a_1435_ = lean_ctor_get(v_r_1428_, 0);
lean_inc(v_a_1435_);
v_a_1436_ = lean_ctor_get(v_r_1428_, 1);
lean_inc(v_a_1436_);
lean_dec_ref_known(v_r_1428_, 2);
v___f_1437_ = lean_alloc_closure((void*)(l_Lake_EStateT_tryFinally_x27___redArg___lam__1), 3, 2);
lean_closure_set(v___f_1437_, 0, v_a_1435_);
lean_closure_set(v___f_1437_, 1, v_toPure_1425_);
v___x_1438_ = lean_box(0);
v___x_1439_ = lean_apply_2(v___y_1426_, v___x_1438_, v_a_1436_);
v___x_1440_ = lean_apply_4(v_toBind_1427_, lean_box(0), lean_box(0), v___x_1439_, v___f_1437_);
return v___x_1440_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_EStateT_instMonadFinallyOfMonad___redArg___lam__0(lean_object* v_inst_1441_, lean_object* v_00_u03b1_1442_, lean_object* v_00_u03b2_1443_, lean_object* v___y_1444_, lean_object* v___y_1445_, lean_object* v___y_1446_){
_start:
{
lean_object* v_toApplicative_1447_; lean_object* v_toBind_1448_; lean_object* v_toPure_1449_; lean_object* v___f_1450_; lean_object* v___x_1451_; lean_object* v___x_1452_; 
v_toApplicative_1447_ = lean_ctor_get(v_inst_1441_, 0);
lean_inc_ref(v_toApplicative_1447_);
v_toBind_1448_ = lean_ctor_get(v_inst_1441_, 1);
lean_inc_n(v_toBind_1448_, 2);
lean_dec_ref(v_inst_1441_);
v_toPure_1449_ = lean_ctor_get(v_toApplicative_1447_, 1);
lean_inc(v_toPure_1449_);
lean_dec_ref(v_toApplicative_1447_);
v___f_1450_ = lean_alloc_closure((void*)(l_Lake_EStateT_instMonadFinallyOfMonad___redArg___lam__2), 4, 3);
lean_closure_set(v___f_1450_, 0, v_toPure_1449_);
lean_closure_set(v___f_1450_, 1, v___y_1445_);
lean_closure_set(v___f_1450_, 2, v_toBind_1448_);
v___x_1451_ = lean_apply_1(v___y_1444_, v___y_1446_);
v___x_1452_ = lean_apply_4(v_toBind_1448_, lean_box(0), lean_box(0), v___x_1451_, v___f_1450_);
return v___x_1452_;
}
}
LEAN_EXPORT lean_object* l_Lake_EStateT_instMonadFinallyOfMonad___redArg(lean_object* v_inst_1453_){
_start:
{
lean_object* v___f_1454_; 
v___f_1454_ = lean_alloc_closure((void*)(l_Lake_EStateT_instMonadFinallyOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_1454_, 0, v_inst_1453_);
return v___f_1454_;
}
}
LEAN_EXPORT lean_object* l_Lake_EStateT_instMonadFinallyOfMonad(lean_object* v_00_u03b5_1455_, lean_object* v_00_u03c3_1456_, lean_object* v_m_1457_, lean_object* v_inst_1458_){
_start:
{
lean_object* v___f_1459_; 
v___f_1459_ = lean_alloc_closure((void*)(l_Lake_EStateT_instMonadFinallyOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_1459_, 0, v_inst_1458_);
return v___f_1459_;
}
}
LEAN_EXPORT lean_object* l_Lake_EStateT_ofEStateM___redArg(lean_object* v_f_1460_, lean_object* v___y_1461_){
_start:
{
lean_object* v___x_1462_; lean_object* v___x_1463_; 
v___x_1462_ = lean_apply_1(v_f_1460_, v___y_1461_);
v___x_1463_ = l_Lake_EResult_ofEStateMResult___redArg(v___x_1462_);
return v___x_1463_;
}
}
LEAN_EXPORT lean_object* l_Lake_EStateT_ofEStateM(lean_object* v_00_u03b5_1464_, lean_object* v_00_u03c3_1465_, lean_object* v_00_u03b1_1466_, lean_object* v_f_1467_, lean_object* v___y_1468_){
_start:
{
lean_object* v___x_1469_; 
v___x_1469_ = l_Lake_EStateT_ofEStateM___redArg(v_f_1467_, v___y_1468_);
return v___x_1469_;
}
}
LEAN_EXPORT lean_object* l_Lake_EStateT_toEStateM___redArg(lean_object* v_f_1470_, lean_object* v___y_1471_){
_start:
{
lean_object* v___x_1472_; lean_object* v___x_1473_; 
v___x_1472_ = lean_apply_1(v_f_1470_, v___y_1471_);
v___x_1473_ = l_Lake_EResult_toEStateMResult___redArg(v___x_1472_);
return v___x_1473_;
}
}
LEAN_EXPORT lean_object* l_Lake_EStateT_toEStateM(lean_object* v_00_u03b5_1474_, lean_object* v_00_u03c3_1475_, lean_object* v_00_u03b1_1476_, lean_object* v_f_1477_, lean_object* v___y_1478_){
_start:
{
lean_object* v___x_1479_; 
v___x_1479_ = l_Lake_EStateT_toEStateM___redArg(v_f_1477_, v___y_1478_);
return v___x_1479_;
}
}
lean_object* runtime_initialize_Init_Control_State(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lake_Util_EStateT(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Init_Control_State(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lake_Util_EStateT(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Init_Control_State(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lake_Util_EStateT(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init_Control_State(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Util_EStateT(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lake_Util_EStateT(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lake_Util_EStateT(builtin);
}
#ifdef __cplusplus
}
#endif
