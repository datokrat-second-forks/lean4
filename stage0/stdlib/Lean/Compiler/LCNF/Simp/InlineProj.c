// Lean compiler output
// Module: Lean.Compiler.LCNF.Simp.InlineProj
// Imports: public import Lean.Compiler.LCNF.Simp.SimpM
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
lean_object* l_instMonadEIO___redArg___lam__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_Simp_instMonadSimpM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_findLetDecl_x3f___redArg(uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_getPhase___redArg(lean_object*);
lean_object* l_Lean_Compiler_LCNF_getDeclAt_x3f(lean_object*, uint8_t, lean_object*, lean_object*);
uint8_t l_Lean_Compiler_LCNF_Phase_toPurity(uint8_t);
lean_object* l_Lean_Compiler_LCNF_Decl_getArity___redArg(lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_Decl_instantiateParamsLevelParams(uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_Code_instantiateValueLevelParams(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_Simp_betaReduce(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_eraseCode___redArg(uint8_t, lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_Environment_find_x3f(lean_object*, lean_object*, uint8_t);
uint8_t l_List_isEmpty___redArg(lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_mkLetDeclErased(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg___lam__4___boxed(lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg___lam__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg___lam__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateRefT_x27_instMonad___redArg(lean_object*);
lean_object* l_Lean_Core_instMonadCoreM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Core_instMonadCoreM___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instFunctorOfMonad___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instFunctorOfMonad___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_instMonadCompilerM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_instMonadCompilerM___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instMonad___redArg(lean_object*);
lean_object* l_Lean_Compiler_LCNF_Simp_instMonadSimpM___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_OptionT_instInhabitedOfPure___redArg(lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_Compiler_LCNF_getType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_isClass_x3f___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_LetValue_inferType(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_mk_ref(lean_object*);
lean_object* l_Lean_Compiler_LCNF_eraseCodeDecls(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_panic___at___00__private_Lean_Compiler_LCNF_Simp_InlineProj_0__Lean_Compiler_LCNF_Simp_inlineProjInst_x3f_visit_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_Simp_InlineProj_0__Lean_Compiler_LCNF_Simp_inlineProjInst_x3f_visit_spec__0___closed__0 = (const lean_object*)&l_panic___at___00__private_Lean_Compiler_LCNF_Simp_InlineProj_0__Lean_Compiler_LCNF_Simp_inlineProjInst_x3f_visit_spec__0___closed__0_value;
static const lean_closure_object l_panic___at___00__private_Lean_Compiler_LCNF_Simp_InlineProj_0__Lean_Compiler_LCNF_Simp_inlineProjInst_x3f_visit_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__1___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_Simp_InlineProj_0__Lean_Compiler_LCNF_Simp_inlineProjInst_x3f_visit_spec__0___closed__1 = (const lean_object*)&l_panic___at___00__private_Lean_Compiler_LCNF_Simp_InlineProj_0__Lean_Compiler_LCNF_Simp_inlineProjInst_x3f_visit_spec__0___closed__1_value;
static const lean_closure_object l_panic___at___00__private_Lean_Compiler_LCNF_Simp_InlineProj_0__Lean_Compiler_LCNF_Simp_inlineProjInst_x3f_visit_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__2___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_Simp_InlineProj_0__Lean_Compiler_LCNF_Simp_inlineProjInst_x3f_visit_spec__0___closed__2 = (const lean_object*)&l_panic___at___00__private_Lean_Compiler_LCNF_Simp_InlineProj_0__Lean_Compiler_LCNF_Simp_inlineProjInst_x3f_visit_spec__0___closed__2_value;
static const lean_closure_object l_panic___at___00__private_Lean_Compiler_LCNF_Simp_InlineProj_0__Lean_Compiler_LCNF_Simp_inlineProjInst_x3f_visit_spec__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__3___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_Simp_InlineProj_0__Lean_Compiler_LCNF_Simp_inlineProjInst_x3f_visit_spec__0___closed__3 = (const lean_object*)&l_panic___at___00__private_Lean_Compiler_LCNF_Simp_InlineProj_0__Lean_Compiler_LCNF_Simp_inlineProjInst_x3f_visit_spec__0___closed__3_value;
static const lean_closure_object l_panic___at___00__private_Lean_Compiler_LCNF_Simp_InlineProj_0__Lean_Compiler_LCNF_Simp_inlineProjInst_x3f_visit_spec__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__4___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_Simp_InlineProj_0__Lean_Compiler_LCNF_Simp_inlineProjInst_x3f_visit_spec__0___closed__4 = (const lean_object*)&l_panic___at___00__private_Lean_Compiler_LCNF_Simp_InlineProj_0__Lean_Compiler_LCNF_Simp_inlineProjInst_x3f_visit_spec__0___closed__4_value;
static const lean_closure_object l_panic___at___00__private_Lean_Compiler_LCNF_Simp_InlineProj_0__Lean_Compiler_LCNF_Simp_inlineProjInst_x3f_visit_spec__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__10___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_Simp_InlineProj_0__Lean_Compiler_LCNF_Simp_inlineProjInst_x3f_visit_spec__0___closed__5 = (const lean_object*)&l_panic___at___00__private_Lean_Compiler_LCNF_Simp_InlineProj_0__Lean_Compiler_LCNF_Simp_inlineProjInst_x3f_visit_spec__0___closed__5_value;
static const lean_closure_object l_panic___at___00__private_Lean_Compiler_LCNF_Simp_InlineProj_0__Lean_Compiler_LCNF_Simp_inlineProjInst_x3f_visit_spec__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_Simp_InlineProj_0__Lean_Compiler_LCNF_Simp_inlineProjInst_x3f_visit_spec__0___closed__6 = (const lean_object*)&l_panic___at___00__private_Lean_Compiler_LCNF_Simp_InlineProj_0__Lean_Compiler_LCNF_Simp_inlineProjInst_x3f_visit_spec__0___closed__6_value;
static const lean_closure_object l_panic___at___00__private_Lean_Compiler_LCNF_Simp_InlineProj_0__Lean_Compiler_LCNF_Simp_inlineProjInst_x3f_visit_spec__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__1___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_Simp_InlineProj_0__Lean_Compiler_LCNF_Simp_inlineProjInst_x3f_visit_spec__0___closed__7 = (const lean_object*)&l_panic___at___00__private_Lean_Compiler_LCNF_Simp_InlineProj_0__Lean_Compiler_LCNF_Simp_inlineProjInst_x3f_visit_spec__0___closed__7_value;
static const lean_closure_object l_panic___at___00__private_Lean_Compiler_LCNF_Simp_InlineProj_0__Lean_Compiler_LCNF_Simp_inlineProjInst_x3f_visit_spec__0___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Compiler_LCNF_instMonadCompilerM___lam__0___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_Simp_InlineProj_0__Lean_Compiler_LCNF_Simp_inlineProjInst_x3f_visit_spec__0___closed__8 = (const lean_object*)&l_panic___at___00__private_Lean_Compiler_LCNF_Simp_InlineProj_0__Lean_Compiler_LCNF_Simp_inlineProjInst_x3f_visit_spec__0___closed__8_value;
static const lean_closure_object l_panic___at___00__private_Lean_Compiler_LCNF_Simp_InlineProj_0__Lean_Compiler_LCNF_Simp_inlineProjInst_x3f_visit_spec__0___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Compiler_LCNF_instMonadCompilerM___lam__1___boxed, .m_arity = 9, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_Simp_InlineProj_0__Lean_Compiler_LCNF_Simp_inlineProjInst_x3f_visit_spec__0___closed__9 = (const lean_object*)&l_panic___at___00__private_Lean_Compiler_LCNF_Simp_InlineProj_0__Lean_Compiler_LCNF_Simp_inlineProjInst_x3f_visit_spec__0___closed__9_value;
static const lean_closure_object l_panic___at___00__private_Lean_Compiler_LCNF_Simp_InlineProj_0__Lean_Compiler_LCNF_Simp_inlineProjInst_x3f_visit_spec__0___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Compiler_LCNF_Simp_instMonadSimpM___lam__0___boxed, .m_arity = 10, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_Simp_InlineProj_0__Lean_Compiler_LCNF_Simp_inlineProjInst_x3f_visit_spec__0___closed__10 = (const lean_object*)&l_panic___at___00__private_Lean_Compiler_LCNF_Simp_InlineProj_0__Lean_Compiler_LCNF_Simp_inlineProjInst_x3f_visit_spec__0___closed__10_value;
static const lean_closure_object l_panic___at___00__private_Lean_Compiler_LCNF_Simp_InlineProj_0__Lean_Compiler_LCNF_Simp_inlineProjInst_x3f_visit_spec__0___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Compiler_LCNF_Simp_instMonadSimpM___lam__1___boxed, .m_arity = 12, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_Simp_InlineProj_0__Lean_Compiler_LCNF_Simp_inlineProjInst_x3f_visit_spec__0___closed__11 = (const lean_object*)&l_panic___at___00__private_Lean_Compiler_LCNF_Simp_InlineProj_0__Lean_Compiler_LCNF_Simp_inlineProjInst_x3f_visit_spec__0___closed__11_value;
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_Simp_InlineProj_0__Lean_Compiler_LCNF_Simp_inlineProjInst_x3f_visit_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_Simp_InlineProj_0__Lean_Compiler_LCNF_Simp_inlineProjInst_x3f_visit_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Compiler_LCNF_Simp_InlineProj_0__Lean_Compiler_LCNF_Simp_inlineProjInst_x3f_visit___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "unreachable code has been reached"};
static const lean_object* l___private_Lean_Compiler_LCNF_Simp_InlineProj_0__Lean_Compiler_LCNF_Simp_inlineProjInst_x3f_visit___closed__2 = (const lean_object*)&l___private_Lean_Compiler_LCNF_Simp_InlineProj_0__Lean_Compiler_LCNF_Simp_inlineProjInst_x3f_visit___closed__2_value;
static const lean_string_object l___private_Lean_Compiler_LCNF_Simp_InlineProj_0__Lean_Compiler_LCNF_Simp_inlineProjInst_x3f_visit___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 92, .m_capacity = 92, .m_length = 91, .m_data = "_private.Lean.Compiler.LCNF.Simp.InlineProj.0.Lean.Compiler.LCNF.Simp.inlineProjInst\?.visit"};
static const lean_object* l___private_Lean_Compiler_LCNF_Simp_InlineProj_0__Lean_Compiler_LCNF_Simp_inlineProjInst_x3f_visit___closed__1 = (const lean_object*)&l___private_Lean_Compiler_LCNF_Simp_InlineProj_0__Lean_Compiler_LCNF_Simp_inlineProjInst_x3f_visit___closed__1_value;
static const lean_string_object l___private_Lean_Compiler_LCNF_Simp_InlineProj_0__Lean_Compiler_LCNF_Simp_inlineProjInst_x3f_visit___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 35, .m_capacity = 35, .m_length = 34, .m_data = "Lean.Compiler.LCNF.Simp.InlineProj"};
static const lean_object* l___private_Lean_Compiler_LCNF_Simp_InlineProj_0__Lean_Compiler_LCNF_Simp_inlineProjInst_x3f_visit___closed__0 = (const lean_object*)&l___private_Lean_Compiler_LCNF_Simp_InlineProj_0__Lean_Compiler_LCNF_Simp_inlineProjInst_x3f_visit___closed__0_value;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_Simp_InlineProj_0__Lean_Compiler_LCNF_Simp_inlineProjInst_x3f_visit___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_Simp_InlineProj_0__Lean_Compiler_LCNF_Simp_inlineProjInst_x3f_visit___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Simp_InlineProj_0__Lean_Compiler_LCNF_Simp_inlineProjInst_x3f_visit(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Simp_InlineProj_0__Lean_Compiler_LCNF_Simp_inlineProjInst_x3f_visitCode(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Simp_InlineProj_0__Lean_Compiler_LCNF_Simp_inlineProjInst_x3f_visitCode___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Simp_InlineProj_0__Lean_Compiler_LCNF_Simp_inlineProjInst_x3f_visit___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Compiler_LCNF_Simp_inlineProjInst_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Compiler_LCNF_Simp_inlineProjInst_x3f___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_Simp_inlineProjInst_x3f___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_inlineProjInst_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_inlineProjInst_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_Simp_InlineProj_0__Lean_Compiler_LCNF_Simp_inlineProjInst_x3f_visit_spec__0(lean_object* v_msg_13_, lean_object* v___y_14_, lean_object* v___y_15_, lean_object* v___y_16_, lean_object* v___y_17_, lean_object* v___y_18_, lean_object* v___y_19_, lean_object* v___y_20_, lean_object* v___y_21_){
_start:
{
lean_object* v___f_23_; lean_object* v___f_24_; lean_object* v___f_25_; lean_object* v___f_26_; lean_object* v___f_27_; lean_object* v___f_28_; lean_object* v___f_29_; lean_object* v___f_30_; lean_object* v___x_31_; lean_object* v___x_32_; lean_object* v___x_33_; lean_object* v___x_34_; lean_object* v_toApplicative_35_; lean_object* v___x_37_; uint8_t v_isShared_38_; uint8_t v_isSharedCheck_129_; 
v___f_23_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_Simp_InlineProj_0__Lean_Compiler_LCNF_Simp_inlineProjInst_x3f_visit_spec__0___closed__0));
v___f_24_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_Simp_InlineProj_0__Lean_Compiler_LCNF_Simp_inlineProjInst_x3f_visit_spec__0___closed__1));
v___f_25_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_Simp_InlineProj_0__Lean_Compiler_LCNF_Simp_inlineProjInst_x3f_visit_spec__0___closed__2));
v___f_26_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_Simp_InlineProj_0__Lean_Compiler_LCNF_Simp_inlineProjInst_x3f_visit_spec__0___closed__3));
v___f_27_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_Simp_InlineProj_0__Lean_Compiler_LCNF_Simp_inlineProjInst_x3f_visit_spec__0___closed__4));
v___f_28_ = lean_alloc_closure((void*)(l_instMonadEIO___redArg___lam__6___boxed), 7, 2);
lean_closure_set(v___f_28_, 0, v___f_27_);
lean_closure_set(v___f_28_, 1, v___f_26_);
v___f_29_ = lean_alloc_closure((void*)(l_instMonadEIO___redArg___lam__9___boxed), 6, 1);
lean_closure_set(v___f_29_, 0, v___f_26_);
v___f_30_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_Simp_InlineProj_0__Lean_Compiler_LCNF_Simp_inlineProjInst_x3f_visit_spec__0___closed__5));
v___x_31_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_31_, 0, v___f_23_);
lean_ctor_set(v___x_31_, 1, v___f_24_);
v___x_32_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_32_, 0, v___x_31_);
lean_ctor_set(v___x_32_, 1, v___f_25_);
lean_ctor_set(v___x_32_, 2, v___f_28_);
lean_ctor_set(v___x_32_, 3, v___f_29_);
lean_ctor_set(v___x_32_, 4, v___f_30_);
v___x_33_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_33_, 0, v___x_32_);
lean_ctor_set(v___x_33_, 1, v___f_26_);
v___x_34_ = l_StateRefT_x27_instMonad___redArg(v___x_33_);
v_toApplicative_35_ = lean_ctor_get(v___x_34_, 0);
v_isSharedCheck_129_ = !lean_is_exclusive(v___x_34_);
if (v_isSharedCheck_129_ == 0)
{
lean_object* v_unused_130_; 
v_unused_130_ = lean_ctor_get(v___x_34_, 1);
lean_dec(v_unused_130_);
v___x_37_ = v___x_34_;
v_isShared_38_ = v_isSharedCheck_129_;
goto v_resetjp_36_;
}
else
{
lean_inc(v_toApplicative_35_);
lean_dec(v___x_34_);
v___x_37_ = lean_box(0);
v_isShared_38_ = v_isSharedCheck_129_;
goto v_resetjp_36_;
}
v_resetjp_36_:
{
lean_object* v_toFunctor_39_; lean_object* v_toSeq_40_; lean_object* v_toSeqLeft_41_; lean_object* v_toSeqRight_42_; lean_object* v___x_44_; uint8_t v_isShared_45_; uint8_t v_isSharedCheck_127_; 
v_toFunctor_39_ = lean_ctor_get(v_toApplicative_35_, 0);
v_toSeq_40_ = lean_ctor_get(v_toApplicative_35_, 2);
v_toSeqLeft_41_ = lean_ctor_get(v_toApplicative_35_, 3);
v_toSeqRight_42_ = lean_ctor_get(v_toApplicative_35_, 4);
v_isSharedCheck_127_ = !lean_is_exclusive(v_toApplicative_35_);
if (v_isSharedCheck_127_ == 0)
{
lean_object* v_unused_128_; 
v_unused_128_ = lean_ctor_get(v_toApplicative_35_, 1);
lean_dec(v_unused_128_);
v___x_44_ = v_toApplicative_35_;
v_isShared_45_ = v_isSharedCheck_127_;
goto v_resetjp_43_;
}
else
{
lean_inc(v_toSeqRight_42_);
lean_inc(v_toSeqLeft_41_);
lean_inc(v_toSeq_40_);
lean_inc(v_toFunctor_39_);
lean_dec(v_toApplicative_35_);
v___x_44_ = lean_box(0);
v_isShared_45_ = v_isSharedCheck_127_;
goto v_resetjp_43_;
}
v_resetjp_43_:
{
lean_object* v___f_46_; lean_object* v___f_47_; lean_object* v___f_48_; lean_object* v___f_49_; lean_object* v___x_50_; lean_object* v___f_51_; lean_object* v___f_52_; lean_object* v___f_53_; lean_object* v___x_55_; 
v___f_46_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_Simp_InlineProj_0__Lean_Compiler_LCNF_Simp_inlineProjInst_x3f_visit_spec__0___closed__6));
v___f_47_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_Simp_InlineProj_0__Lean_Compiler_LCNF_Simp_inlineProjInst_x3f_visit_spec__0___closed__7));
lean_inc_ref(v_toFunctor_39_);
v___f_48_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_48_, 0, v_toFunctor_39_);
v___f_49_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_49_, 0, v_toFunctor_39_);
v___x_50_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_50_, 0, v___f_48_);
lean_ctor_set(v___x_50_, 1, v___f_49_);
v___f_51_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_51_, 0, v_toSeqRight_42_);
v___f_52_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3___boxed), 6, 1);
lean_closure_set(v___f_52_, 0, v_toSeqLeft_41_);
v___f_53_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4___boxed), 6, 1);
lean_closure_set(v___f_53_, 0, v_toSeq_40_);
if (v_isShared_45_ == 0)
{
lean_ctor_set(v___x_44_, 4, v___f_51_);
lean_ctor_set(v___x_44_, 3, v___f_52_);
lean_ctor_set(v___x_44_, 2, v___f_53_);
lean_ctor_set(v___x_44_, 1, v___f_46_);
lean_ctor_set(v___x_44_, 0, v___x_50_);
v___x_55_ = v___x_44_;
goto v_reusejp_54_;
}
else
{
lean_object* v_reuseFailAlloc_126_; 
v_reuseFailAlloc_126_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_126_, 0, v___x_50_);
lean_ctor_set(v_reuseFailAlloc_126_, 1, v___f_46_);
lean_ctor_set(v_reuseFailAlloc_126_, 2, v___f_53_);
lean_ctor_set(v_reuseFailAlloc_126_, 3, v___f_52_);
lean_ctor_set(v_reuseFailAlloc_126_, 4, v___f_51_);
v___x_55_ = v_reuseFailAlloc_126_;
goto v_reusejp_54_;
}
v_reusejp_54_:
{
lean_object* v___x_57_; 
if (v_isShared_38_ == 0)
{
lean_ctor_set(v___x_37_, 1, v___f_47_);
lean_ctor_set(v___x_37_, 0, v___x_55_);
v___x_57_ = v___x_37_;
goto v_reusejp_56_;
}
else
{
lean_object* v_reuseFailAlloc_125_; 
v_reuseFailAlloc_125_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_125_, 0, v___x_55_);
lean_ctor_set(v_reuseFailAlloc_125_, 1, v___f_47_);
v___x_57_ = v_reuseFailAlloc_125_;
goto v_reusejp_56_;
}
v_reusejp_56_:
{
lean_object* v___x_58_; lean_object* v_toApplicative_59_; lean_object* v___x_61_; uint8_t v_isShared_62_; uint8_t v_isSharedCheck_123_; 
v___x_58_ = l_StateRefT_x27_instMonad___redArg(v___x_57_);
v_toApplicative_59_ = lean_ctor_get(v___x_58_, 0);
v_isSharedCheck_123_ = !lean_is_exclusive(v___x_58_);
if (v_isSharedCheck_123_ == 0)
{
lean_object* v_unused_124_; 
v_unused_124_ = lean_ctor_get(v___x_58_, 1);
lean_dec(v_unused_124_);
v___x_61_ = v___x_58_;
v_isShared_62_ = v_isSharedCheck_123_;
goto v_resetjp_60_;
}
else
{
lean_inc(v_toApplicative_59_);
lean_dec(v___x_58_);
v___x_61_ = lean_box(0);
v_isShared_62_ = v_isSharedCheck_123_;
goto v_resetjp_60_;
}
v_resetjp_60_:
{
lean_object* v_toFunctor_63_; lean_object* v_toSeq_64_; lean_object* v_toSeqLeft_65_; lean_object* v_toSeqRight_66_; lean_object* v___x_68_; uint8_t v_isShared_69_; uint8_t v_isSharedCheck_121_; 
v_toFunctor_63_ = lean_ctor_get(v_toApplicative_59_, 0);
v_toSeq_64_ = lean_ctor_get(v_toApplicative_59_, 2);
v_toSeqLeft_65_ = lean_ctor_get(v_toApplicative_59_, 3);
v_toSeqRight_66_ = lean_ctor_get(v_toApplicative_59_, 4);
v_isSharedCheck_121_ = !lean_is_exclusive(v_toApplicative_59_);
if (v_isSharedCheck_121_ == 0)
{
lean_object* v_unused_122_; 
v_unused_122_ = lean_ctor_get(v_toApplicative_59_, 1);
lean_dec(v_unused_122_);
v___x_68_ = v_toApplicative_59_;
v_isShared_69_ = v_isSharedCheck_121_;
goto v_resetjp_67_;
}
else
{
lean_inc(v_toSeqRight_66_);
lean_inc(v_toSeqLeft_65_);
lean_inc(v_toSeq_64_);
lean_inc(v_toFunctor_63_);
lean_dec(v_toApplicative_59_);
v___x_68_ = lean_box(0);
v_isShared_69_ = v_isSharedCheck_121_;
goto v_resetjp_67_;
}
v_resetjp_67_:
{
lean_object* v___f_70_; lean_object* v___f_71_; lean_object* v___f_72_; lean_object* v___f_73_; lean_object* v___x_74_; lean_object* v___f_75_; lean_object* v___f_76_; lean_object* v___f_77_; lean_object* v___x_79_; 
v___f_70_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_Simp_InlineProj_0__Lean_Compiler_LCNF_Simp_inlineProjInst_x3f_visit_spec__0___closed__8));
v___f_71_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_Simp_InlineProj_0__Lean_Compiler_LCNF_Simp_inlineProjInst_x3f_visit_spec__0___closed__9));
lean_inc_ref(v_toFunctor_63_);
v___f_72_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_72_, 0, v_toFunctor_63_);
v___f_73_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_73_, 0, v_toFunctor_63_);
v___x_74_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_74_, 0, v___f_72_);
lean_ctor_set(v___x_74_, 1, v___f_73_);
v___f_75_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_75_, 0, v_toSeqRight_66_);
v___f_76_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3___boxed), 6, 1);
lean_closure_set(v___f_76_, 0, v_toSeqLeft_65_);
v___f_77_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4___boxed), 6, 1);
lean_closure_set(v___f_77_, 0, v_toSeq_64_);
if (v_isShared_69_ == 0)
{
lean_ctor_set(v___x_68_, 4, v___f_75_);
lean_ctor_set(v___x_68_, 3, v___f_76_);
lean_ctor_set(v___x_68_, 2, v___f_77_);
lean_ctor_set(v___x_68_, 1, v___f_70_);
lean_ctor_set(v___x_68_, 0, v___x_74_);
v___x_79_ = v___x_68_;
goto v_reusejp_78_;
}
else
{
lean_object* v_reuseFailAlloc_120_; 
v_reuseFailAlloc_120_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_120_, 0, v___x_74_);
lean_ctor_set(v_reuseFailAlloc_120_, 1, v___f_70_);
lean_ctor_set(v_reuseFailAlloc_120_, 2, v___f_77_);
lean_ctor_set(v_reuseFailAlloc_120_, 3, v___f_76_);
lean_ctor_set(v_reuseFailAlloc_120_, 4, v___f_75_);
v___x_79_ = v_reuseFailAlloc_120_;
goto v_reusejp_78_;
}
v_reusejp_78_:
{
lean_object* v___x_81_; 
if (v_isShared_62_ == 0)
{
lean_ctor_set(v___x_61_, 1, v___f_71_);
lean_ctor_set(v___x_61_, 0, v___x_79_);
v___x_81_ = v___x_61_;
goto v_reusejp_80_;
}
else
{
lean_object* v_reuseFailAlloc_119_; 
v_reuseFailAlloc_119_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_119_, 0, v___x_79_);
lean_ctor_set(v_reuseFailAlloc_119_, 1, v___f_71_);
v___x_81_ = v_reuseFailAlloc_119_;
goto v_reusejp_80_;
}
v_reusejp_80_:
{
lean_object* v___x_82_; lean_object* v___x_83_; lean_object* v_toApplicative_84_; lean_object* v___x_86_; uint8_t v_isShared_87_; uint8_t v_isSharedCheck_117_; 
v___x_82_ = l_ReaderT_instMonad___redArg(v___x_81_);
v___x_83_ = l_StateRefT_x27_instMonad___redArg(v___x_82_);
v_toApplicative_84_ = lean_ctor_get(v___x_83_, 0);
v_isSharedCheck_117_ = !lean_is_exclusive(v___x_83_);
if (v_isSharedCheck_117_ == 0)
{
lean_object* v_unused_118_; 
v_unused_118_ = lean_ctor_get(v___x_83_, 1);
lean_dec(v_unused_118_);
v___x_86_ = v___x_83_;
v_isShared_87_ = v_isSharedCheck_117_;
goto v_resetjp_85_;
}
else
{
lean_inc(v_toApplicative_84_);
lean_dec(v___x_83_);
v___x_86_ = lean_box(0);
v_isShared_87_ = v_isSharedCheck_117_;
goto v_resetjp_85_;
}
v_resetjp_85_:
{
lean_object* v_toFunctor_88_; lean_object* v_toSeq_89_; lean_object* v_toSeqLeft_90_; lean_object* v_toSeqRight_91_; lean_object* v___x_93_; uint8_t v_isShared_94_; uint8_t v_isSharedCheck_115_; 
v_toFunctor_88_ = lean_ctor_get(v_toApplicative_84_, 0);
v_toSeq_89_ = lean_ctor_get(v_toApplicative_84_, 2);
v_toSeqLeft_90_ = lean_ctor_get(v_toApplicative_84_, 3);
v_toSeqRight_91_ = lean_ctor_get(v_toApplicative_84_, 4);
v_isSharedCheck_115_ = !lean_is_exclusive(v_toApplicative_84_);
if (v_isSharedCheck_115_ == 0)
{
lean_object* v_unused_116_; 
v_unused_116_ = lean_ctor_get(v_toApplicative_84_, 1);
lean_dec(v_unused_116_);
v___x_93_ = v_toApplicative_84_;
v_isShared_94_ = v_isSharedCheck_115_;
goto v_resetjp_92_;
}
else
{
lean_inc(v_toSeqRight_91_);
lean_inc(v_toSeqLeft_90_);
lean_inc(v_toSeq_89_);
lean_inc(v_toFunctor_88_);
lean_dec(v_toApplicative_84_);
v___x_93_ = lean_box(0);
v_isShared_94_ = v_isSharedCheck_115_;
goto v_resetjp_92_;
}
v_resetjp_92_:
{
lean_object* v___f_95_; lean_object* v___f_96_; lean_object* v___f_97_; lean_object* v___f_98_; lean_object* v___x_99_; lean_object* v___f_100_; lean_object* v___f_101_; lean_object* v___f_102_; lean_object* v___x_104_; 
v___f_95_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_Simp_InlineProj_0__Lean_Compiler_LCNF_Simp_inlineProjInst_x3f_visit_spec__0___closed__10));
v___f_96_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_Simp_InlineProj_0__Lean_Compiler_LCNF_Simp_inlineProjInst_x3f_visit_spec__0___closed__11));
lean_inc_ref(v_toFunctor_88_);
v___f_97_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_97_, 0, v_toFunctor_88_);
v___f_98_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_98_, 0, v_toFunctor_88_);
v___x_99_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_99_, 0, v___f_97_);
lean_ctor_set(v___x_99_, 1, v___f_98_);
v___f_100_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_100_, 0, v_toSeqRight_91_);
v___f_101_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3___boxed), 6, 1);
lean_closure_set(v___f_101_, 0, v_toSeqLeft_90_);
v___f_102_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4___boxed), 6, 1);
lean_closure_set(v___f_102_, 0, v_toSeq_89_);
if (v_isShared_94_ == 0)
{
lean_ctor_set(v___x_93_, 4, v___f_100_);
lean_ctor_set(v___x_93_, 3, v___f_101_);
lean_ctor_set(v___x_93_, 2, v___f_102_);
lean_ctor_set(v___x_93_, 1, v___f_95_);
lean_ctor_set(v___x_93_, 0, v___x_99_);
v___x_104_ = v___x_93_;
goto v_reusejp_103_;
}
else
{
lean_object* v_reuseFailAlloc_114_; 
v_reuseFailAlloc_114_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_114_, 0, v___x_99_);
lean_ctor_set(v_reuseFailAlloc_114_, 1, v___f_95_);
lean_ctor_set(v_reuseFailAlloc_114_, 2, v___f_102_);
lean_ctor_set(v_reuseFailAlloc_114_, 3, v___f_101_);
lean_ctor_set(v_reuseFailAlloc_114_, 4, v___f_100_);
v___x_104_ = v_reuseFailAlloc_114_;
goto v_reusejp_103_;
}
v_reusejp_103_:
{
lean_object* v___x_106_; 
if (v_isShared_87_ == 0)
{
lean_ctor_set(v___x_86_, 1, v___f_96_);
lean_ctor_set(v___x_86_, 0, v___x_104_);
v___x_106_ = v___x_86_;
goto v_reusejp_105_;
}
else
{
lean_object* v_reuseFailAlloc_113_; 
v_reuseFailAlloc_113_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_113_, 0, v___x_104_);
lean_ctor_set(v_reuseFailAlloc_113_, 1, v___f_96_);
v___x_106_ = v_reuseFailAlloc_113_;
goto v_reusejp_105_;
}
v_reusejp_105_:
{
lean_object* v___x_107_; lean_object* v_toApplicative_108_; lean_object* v_toPure_109_; lean_object* v___x_110_; lean_object* v___x_26196__overap_111_; lean_object* v___x_112_; 
v___x_107_ = l_StateRefT_x27_instMonad___redArg(v___x_106_);
v_toApplicative_108_ = lean_ctor_get(v___x_107_, 0);
lean_inc_ref(v_toApplicative_108_);
lean_dec_ref(v___x_107_);
v_toPure_109_ = lean_ctor_get(v_toApplicative_108_, 1);
lean_inc(v_toPure_109_);
lean_dec_ref(v_toApplicative_108_);
v___x_110_ = l_OptionT_instInhabitedOfPure___redArg(v_toPure_109_);
v___x_26196__overap_111_ = lean_panic_fn_borrowed(v___x_110_, v_msg_13_);
lean_dec(v___x_110_);
lean_inc(v___y_21_);
lean_inc_ref(v___y_20_);
lean_inc(v___y_19_);
lean_inc_ref(v___y_18_);
lean_inc_ref(v___y_17_);
lean_inc(v___y_16_);
lean_inc_ref(v___y_15_);
lean_inc(v___y_14_);
v___x_112_ = lean_apply_9(v___x_26196__overap_111_, v___y_14_, v___y_15_, v___y_16_, v___y_17_, v___y_18_, v___y_19_, v___y_20_, v___y_21_, lean_box(0));
return v___x_112_;
}
}
}
}
}
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_Simp_InlineProj_0__Lean_Compiler_LCNF_Simp_inlineProjInst_x3f_visit_spec__0___boxed(lean_object* v_msg_131_, lean_object* v___y_132_, lean_object* v___y_133_, lean_object* v___y_134_, lean_object* v___y_135_, lean_object* v___y_136_, lean_object* v___y_137_, lean_object* v___y_138_, lean_object* v___y_139_, lean_object* v___y_140_){
_start:
{
lean_object* v_res_141_; 
v_res_141_ = l_panic___at___00__private_Lean_Compiler_LCNF_Simp_InlineProj_0__Lean_Compiler_LCNF_Simp_inlineProjInst_x3f_visit_spec__0(v_msg_131_, v___y_132_, v___y_133_, v___y_134_, v___y_135_, v___y_136_, v___y_137_, v___y_138_, v___y_139_);
lean_dec(v___y_139_);
lean_dec_ref(v___y_138_);
lean_dec(v___y_137_);
lean_dec_ref(v___y_136_);
lean_dec_ref(v___y_135_);
lean_dec(v___y_134_);
lean_dec_ref(v___y_133_);
lean_dec(v___y_132_);
return v_res_141_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_Simp_InlineProj_0__Lean_Compiler_LCNF_Simp_inlineProjInst_x3f_visit___closed__3(void){
_start:
{
lean_object* v___x_145_; lean_object* v___x_146_; lean_object* v___x_147_; lean_object* v___x_148_; lean_object* v___x_149_; lean_object* v___x_150_; 
v___x_145_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_Simp_InlineProj_0__Lean_Compiler_LCNF_Simp_inlineProjInst_x3f_visit___closed__2));
v___x_146_ = lean_unsigned_to_nat(34u);
v___x_147_ = lean_unsigned_to_nat(62u);
v___x_148_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_Simp_InlineProj_0__Lean_Compiler_LCNF_Simp_inlineProjInst_x3f_visit___closed__1));
v___x_149_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_Simp_InlineProj_0__Lean_Compiler_LCNF_Simp_inlineProjInst_x3f_visit___closed__0));
v___x_150_ = l_mkPanicMessageWithDecl(v___x_149_, v___x_148_, v___x_147_, v___x_146_, v___x_145_);
return v___x_150_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Simp_InlineProj_0__Lean_Compiler_LCNF_Simp_inlineProjInst_x3f_visit(lean_object* v_fvarId_151_, lean_object* v_projs_152_, lean_object* v___y_153_, lean_object* v___y_154_, lean_object* v___y_155_, lean_object* v___y_156_, lean_object* v___y_157_, lean_object* v___y_158_, lean_object* v___y_159_, lean_object* v___y_160_){
_start:
{
uint8_t v___x_168_; lean_object* v___x_169_; lean_object* v___x_170_; 
v___x_168_ = 0;
v___x_169_ = lean_box(0);
v___x_170_ = l_Lean_Compiler_LCNF_findLetDecl_x3f___redArg(v___x_168_, v_fvarId_151_, v___y_158_);
lean_dec(v_fvarId_151_);
if (lean_obj_tag(v___x_170_) == 0)
{
lean_object* v_a_171_; lean_object* v___x_173_; uint8_t v_isShared_174_; uint8_t v_isSharedCheck_311_; 
v_a_171_ = lean_ctor_get(v___x_170_, 0);
v_isSharedCheck_311_ = !lean_is_exclusive(v___x_170_);
if (v_isSharedCheck_311_ == 0)
{
v___x_173_ = v___x_170_;
v_isShared_174_ = v_isSharedCheck_311_;
goto v_resetjp_172_;
}
else
{
lean_inc(v_a_171_);
lean_dec(v___x_170_);
v___x_173_ = lean_box(0);
v_isShared_174_ = v_isSharedCheck_311_;
goto v_resetjp_172_;
}
v_resetjp_172_:
{
if (lean_obj_tag(v_a_171_) == 1)
{
lean_object* v_val_175_; lean_object* v_value_176_; 
v_val_175_ = lean_ctor_get(v_a_171_, 0);
lean_inc(v_val_175_);
lean_dec_ref_known(v_a_171_, 1);
v_value_176_ = lean_ctor_get(v_val_175_, 3);
lean_inc(v_value_176_);
lean_dec(v_val_175_);
switch(lean_obj_tag(v_value_176_))
{
case 2:
{
lean_object* v_idx_177_; lean_object* v_struct_178_; lean_object* v___x_179_; 
lean_del_object(v___x_173_);
v_idx_177_ = lean_ctor_get(v_value_176_, 1);
lean_inc(v_idx_177_);
v_struct_178_ = lean_ctor_get(v_value_176_, 2);
lean_inc(v_struct_178_);
lean_dec_ref_known(v_value_176_, 3);
v___x_179_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_179_, 0, v_idx_177_);
lean_ctor_set(v___x_179_, 1, v_projs_152_);
v_fvarId_151_ = v_struct_178_;
v_projs_152_ = v___x_179_;
goto _start;
}
case 3:
{
lean_object* v_declName_181_; lean_object* v_us_182_; lean_object* v_args_183_; lean_object* v___y_185_; lean_object* v___y_186_; lean_object* v___y_187_; lean_object* v___y_188_; lean_object* v___y_189_; lean_object* v___y_190_; lean_object* v___y_191_; lean_object* v___y_192_; lean_object* v___x_246_; lean_object* v_env_247_; uint8_t v___x_248_; lean_object* v___x_249_; 
v_declName_181_ = lean_ctor_get(v_value_176_, 0);
lean_inc_n(v_declName_181_, 2);
v_us_182_ = lean_ctor_get(v_value_176_, 1);
lean_inc(v_us_182_);
v_args_183_ = lean_ctor_get(v_value_176_, 2);
lean_inc_ref(v_args_183_);
lean_dec_ref_known(v_value_176_, 3);
v___x_246_ = lean_st_ref_get(v___y_160_);
v_env_247_ = lean_ctor_get(v___x_246_, 0);
lean_inc_ref(v_env_247_);
lean_dec(v___x_246_);
v___x_248_ = 0;
v___x_249_ = l_Lean_Environment_find_x3f(v_env_247_, v_declName_181_, v___x_248_);
if (lean_obj_tag(v___x_249_) == 1)
{
lean_object* v_val_250_; lean_object* v___x_252_; uint8_t v_isShared_253_; uint8_t v_isSharedCheck_302_; 
v_val_250_ = lean_ctor_get(v___x_249_, 0);
v_isSharedCheck_302_ = !lean_is_exclusive(v___x_249_);
if (v_isSharedCheck_302_ == 0)
{
v___x_252_ = v___x_249_;
v_isShared_253_ = v_isSharedCheck_302_;
goto v_resetjp_251_;
}
else
{
lean_inc(v_val_250_);
lean_dec(v___x_249_);
v___x_252_ = lean_box(0);
v_isShared_253_ = v_isSharedCheck_302_;
goto v_resetjp_251_;
}
v_resetjp_251_:
{
if (lean_obj_tag(v_val_250_) == 6)
{
lean_dec(v_us_182_);
lean_dec(v_declName_181_);
if (lean_obj_tag(v_projs_152_) == 1)
{
lean_object* v_val_254_; lean_object* v___x_256_; uint8_t v_isShared_257_; uint8_t v_isSharedCheck_299_; 
v_val_254_ = lean_ctor_get(v_val_250_, 0);
v_isSharedCheck_299_ = !lean_is_exclusive(v_val_250_);
if (v_isSharedCheck_299_ == 0)
{
v___x_256_ = v_val_250_;
v_isShared_257_ = v_isSharedCheck_299_;
goto v_resetjp_255_;
}
else
{
lean_inc(v_val_254_);
lean_dec(v_val_250_);
v___x_256_ = lean_box(0);
v_isShared_257_ = v_isSharedCheck_299_;
goto v_resetjp_255_;
}
v_resetjp_255_:
{
lean_object* v_head_258_; lean_object* v_tail_259_; lean_object* v_fvarId_261_; lean_object* v___y_262_; lean_object* v___y_263_; lean_object* v___y_264_; lean_object* v___y_265_; lean_object* v___y_266_; lean_object* v___y_267_; lean_object* v___y_268_; lean_object* v___y_269_; lean_object* v_numParams_278_; lean_object* v___x_279_; lean_object* v___x_280_; 
v_head_258_ = lean_ctor_get(v_projs_152_, 0);
lean_inc(v_head_258_);
v_tail_259_ = lean_ctor_get(v_projs_152_, 1);
lean_inc(v_tail_259_);
lean_dec_ref_known(v_projs_152_, 2);
v_numParams_278_ = lean_ctor_get(v_val_254_, 3);
lean_inc(v_numParams_278_);
lean_dec_ref(v_val_254_);
v___x_279_ = lean_nat_add(v_numParams_278_, v_head_258_);
lean_dec(v_head_258_);
lean_dec(v_numParams_278_);
v___x_280_ = lean_array_get(v___x_169_, v_args_183_, v___x_279_);
lean_dec(v___x_279_);
lean_dec_ref(v_args_183_);
if (lean_obj_tag(v___x_280_) == 1)
{
lean_object* v_fvarId_281_; 
lean_del_object(v___x_256_);
v_fvarId_281_ = lean_ctor_get(v___x_280_, 0);
lean_inc(v_fvarId_281_);
lean_dec_ref_known(v___x_280_, 1);
v_fvarId_261_ = v_fvarId_281_;
v___y_262_ = v___y_153_;
v___y_263_ = v___y_154_;
v___y_264_ = v___y_155_;
v___y_265_ = v___y_156_;
v___y_266_ = v___y_157_;
v___y_267_ = v___y_158_;
v___y_268_ = v___y_159_;
v___y_269_ = v___y_160_;
goto v___jp_260_;
}
else
{
lean_object* v___x_282_; 
lean_dec(v___x_280_);
v___x_282_ = l_Lean_Compiler_LCNF_mkLetDeclErased(v___x_168_, v___y_157_, v___y_158_, v___y_159_, v___y_160_);
if (lean_obj_tag(v___x_282_) == 0)
{
lean_object* v_a_283_; lean_object* v___x_284_; lean_object* v___x_286_; 
v_a_283_ = lean_ctor_get(v___x_282_, 0);
lean_inc_n(v_a_283_, 2);
lean_dec_ref_known(v___x_282_, 1);
v___x_284_ = lean_st_ref_take(v___y_153_);
if (v_isShared_257_ == 0)
{
lean_ctor_set_tag(v___x_256_, 0);
lean_ctor_set(v___x_256_, 0, v_a_283_);
v___x_286_ = v___x_256_;
goto v_reusejp_285_;
}
else
{
lean_object* v_reuseFailAlloc_290_; 
v_reuseFailAlloc_290_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_290_, 0, v_a_283_);
v___x_286_ = v_reuseFailAlloc_290_;
goto v_reusejp_285_;
}
v_reusejp_285_:
{
lean_object* v___x_287_; lean_object* v___x_288_; lean_object* v_fvarId_289_; 
v___x_287_ = lean_array_push(v___x_284_, v___x_286_);
v___x_288_ = lean_st_ref_put(v___y_153_, v___x_287_);
v_fvarId_289_ = lean_ctor_get(v_a_283_, 0);
lean_inc(v_fvarId_289_);
lean_dec(v_a_283_);
v_fvarId_261_ = v_fvarId_289_;
v___y_262_ = v___y_153_;
v___y_263_ = v___y_154_;
v___y_264_ = v___y_155_;
v___y_265_ = v___y_156_;
v___y_266_ = v___y_157_;
v___y_267_ = v___y_158_;
v___y_268_ = v___y_159_;
v___y_269_ = v___y_160_;
goto v___jp_260_;
}
}
else
{
lean_object* v_a_291_; lean_object* v___x_293_; uint8_t v_isShared_294_; uint8_t v_isSharedCheck_298_; 
lean_dec(v_tail_259_);
lean_del_object(v___x_256_);
lean_del_object(v___x_252_);
lean_del_object(v___x_173_);
v_a_291_ = lean_ctor_get(v___x_282_, 0);
v_isSharedCheck_298_ = !lean_is_exclusive(v___x_282_);
if (v_isSharedCheck_298_ == 0)
{
v___x_293_ = v___x_282_;
v_isShared_294_ = v_isSharedCheck_298_;
goto v_resetjp_292_;
}
else
{
lean_inc(v_a_291_);
lean_dec(v___x_282_);
v___x_293_ = lean_box(0);
v_isShared_294_ = v_isSharedCheck_298_;
goto v_resetjp_292_;
}
v_resetjp_292_:
{
lean_object* v___x_296_; 
if (v_isShared_294_ == 0)
{
v___x_296_ = v___x_293_;
goto v_reusejp_295_;
}
else
{
lean_object* v_reuseFailAlloc_297_; 
v_reuseFailAlloc_297_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_297_, 0, v_a_291_);
v___x_296_ = v_reuseFailAlloc_297_;
goto v_reusejp_295_;
}
v_reusejp_295_:
{
return v___x_296_;
}
}
}
}
v___jp_260_:
{
uint8_t v___x_270_; 
v___x_270_ = l_List_isEmpty___redArg(v_tail_259_);
if (v___x_270_ == 0)
{
lean_del_object(v___x_252_);
lean_del_object(v___x_173_);
v_fvarId_151_ = v_fvarId_261_;
v_projs_152_ = v_tail_259_;
v___y_153_ = v___y_262_;
v___y_154_ = v___y_263_;
v___y_155_ = v___y_264_;
v___y_156_ = v___y_265_;
v___y_157_ = v___y_266_;
v___y_158_ = v___y_267_;
v___y_159_ = v___y_268_;
v___y_160_ = v___y_269_;
goto _start;
}
else
{
lean_object* v___x_273_; 
lean_dec(v_tail_259_);
if (v_isShared_253_ == 0)
{
lean_ctor_set(v___x_252_, 0, v_fvarId_261_);
v___x_273_ = v___x_252_;
goto v_reusejp_272_;
}
else
{
lean_object* v_reuseFailAlloc_277_; 
v_reuseFailAlloc_277_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_277_, 0, v_fvarId_261_);
v___x_273_ = v_reuseFailAlloc_277_;
goto v_reusejp_272_;
}
v_reusejp_272_:
{
lean_object* v___x_275_; 
if (v_isShared_174_ == 0)
{
lean_ctor_set(v___x_173_, 0, v___x_273_);
v___x_275_ = v___x_173_;
goto v_reusejp_274_;
}
else
{
lean_object* v_reuseFailAlloc_276_; 
v_reuseFailAlloc_276_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_276_, 0, v___x_273_);
v___x_275_ = v_reuseFailAlloc_276_;
goto v_reusejp_274_;
}
v_reusejp_274_:
{
return v___x_275_;
}
}
}
}
}
}
else
{
lean_object* v___x_300_; lean_object* v___x_301_; 
lean_dec_ref_known(v_val_250_, 1);
lean_del_object(v___x_252_);
lean_dec_ref(v_args_183_);
lean_del_object(v___x_173_);
lean_dec(v_projs_152_);
v___x_300_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_Simp_InlineProj_0__Lean_Compiler_LCNF_Simp_inlineProjInst_x3f_visit___closed__3, &l___private_Lean_Compiler_LCNF_Simp_InlineProj_0__Lean_Compiler_LCNF_Simp_inlineProjInst_x3f_visit___closed__3_once, _init_l___private_Lean_Compiler_LCNF_Simp_InlineProj_0__Lean_Compiler_LCNF_Simp_inlineProjInst_x3f_visit___closed__3);
v___x_301_ = l_panic___at___00__private_Lean_Compiler_LCNF_Simp_InlineProj_0__Lean_Compiler_LCNF_Simp_inlineProjInst_x3f_visit_spec__0(v___x_300_, v___y_153_, v___y_154_, v___y_155_, v___y_156_, v___y_157_, v___y_158_, v___y_159_, v___y_160_);
return v___x_301_;
}
}
else
{
lean_del_object(v___x_252_);
lean_dec(v_val_250_);
lean_del_object(v___x_173_);
v___y_185_ = v___y_153_;
v___y_186_ = v___y_154_;
v___y_187_ = v___y_155_;
v___y_188_ = v___y_156_;
v___y_189_ = v___y_157_;
v___y_190_ = v___y_158_;
v___y_191_ = v___y_159_;
v___y_192_ = v___y_160_;
goto v___jp_184_;
}
}
}
else
{
lean_dec(v___x_249_);
lean_del_object(v___x_173_);
v___y_185_ = v___y_153_;
v___y_186_ = v___y_154_;
v___y_187_ = v___y_155_;
v___y_188_ = v___y_156_;
v___y_189_ = v___y_157_;
v___y_190_ = v___y_158_;
v___y_191_ = v___y_159_;
v___y_192_ = v___y_160_;
goto v___jp_184_;
}
v___jp_184_:
{
lean_object* v___x_193_; 
v___x_193_ = l_Lean_Compiler_LCNF_getPhase___redArg(v___y_189_);
if (lean_obj_tag(v___x_193_) == 0)
{
lean_object* v_a_194_; uint8_t v___x_195_; lean_object* v___x_196_; 
v_a_194_ = lean_ctor_get(v___x_193_, 0);
lean_inc(v_a_194_);
lean_dec_ref_known(v___x_193_, 1);
v___x_195_ = lean_unbox(v_a_194_);
v___x_196_ = l_Lean_Compiler_LCNF_getDeclAt_x3f(v_declName_181_, v___x_195_, v___y_191_, v___y_192_);
if (lean_obj_tag(v___x_196_) == 0)
{
lean_object* v_a_197_; lean_object* v___x_199_; uint8_t v_isShared_200_; uint8_t v_isSharedCheck_229_; 
v_a_197_ = lean_ctor_get(v___x_196_, 0);
v_isSharedCheck_229_ = !lean_is_exclusive(v___x_196_);
if (v_isSharedCheck_229_ == 0)
{
v___x_199_ = v___x_196_;
v_isShared_200_ = v_isSharedCheck_229_;
goto v_resetjp_198_;
}
else
{
lean_inc(v_a_197_);
lean_dec(v___x_196_);
v___x_199_ = lean_box(0);
v_isShared_200_ = v_isSharedCheck_229_;
goto v_resetjp_198_;
}
v_resetjp_198_:
{
if (lean_obj_tag(v_a_197_) == 1)
{
lean_object* v_val_201_; uint8_t v___x_202_; uint8_t v___x_203_; 
v_val_201_ = lean_ctor_get(v_a_197_, 0);
lean_inc(v_val_201_);
lean_dec_ref_known(v_a_197_, 1);
v___x_202_ = lean_unbox(v_a_194_);
lean_dec(v_a_194_);
v___x_203_ = l_Lean_Compiler_LCNF_Phase_toPurity(v___x_202_);
if (v___x_203_ == 0)
{
lean_object* v_value_204_; 
v_value_204_ = lean_ctor_get(v_val_201_, 1);
if (lean_obj_tag(v_value_204_) == 0)
{
uint8_t v_recursive_205_; 
lean_del_object(v___x_199_);
v_recursive_205_ = lean_ctor_get_uint8(v_val_201_, sizeof(void*)*3);
if (v_recursive_205_ == 0)
{
lean_object* v_toSignature_206_; lean_object* v_code_207_; lean_object* v___x_208_; lean_object* v___x_209_; uint8_t v___x_210_; 
v_toSignature_206_ = lean_ctor_get(v_val_201_, 0);
v_code_207_ = lean_ctor_get(v_value_204_, 0);
lean_inc_ref(v_code_207_);
v___x_208_ = l_Lean_Compiler_LCNF_Decl_getArity___redArg(v_val_201_);
v___x_209_ = lean_array_get_size(v_args_183_);
v___x_210_ = lean_nat_dec_eq(v___x_208_, v___x_209_);
lean_dec(v___x_208_);
if (v___x_210_ == 0)
{
lean_dec_ref(v_code_207_);
lean_dec(v_val_201_);
lean_dec_ref(v_args_183_);
lean_dec(v_us_182_);
lean_dec(v_projs_152_);
goto v___jp_162_;
}
else
{
lean_object* v_levelParams_211_; lean_object* v___x_212_; lean_object* v___x_213_; lean_object* v___x_214_; 
v_levelParams_211_ = lean_ctor_get(v_toSignature_206_, 1);
lean_inc(v_levelParams_211_);
lean_inc(v_us_182_);
v___x_212_ = l_Lean_Compiler_LCNF_Decl_instantiateParamsLevelParams(v___x_168_, v_val_201_, v_us_182_);
v___x_213_ = l_Lean_Compiler_LCNF_Code_instantiateValueLevelParams(v_code_207_, v_levelParams_211_, v_us_182_);
v___x_214_ = l_Lean_Compiler_LCNF_Simp_betaReduce(v___x_212_, v___x_213_, v_args_183_, v___x_210_, v___y_186_, v___y_187_, v___y_188_, v___y_189_, v___y_190_, v___y_191_, v___y_192_);
lean_dec_ref(v___x_212_);
if (lean_obj_tag(v___x_214_) == 0)
{
lean_object* v_a_215_; lean_object* v___x_216_; 
v_a_215_ = lean_ctor_get(v___x_214_, 0);
lean_inc(v_a_215_);
lean_dec_ref_known(v___x_214_, 1);
v___x_216_ = l___private_Lean_Compiler_LCNF_Simp_InlineProj_0__Lean_Compiler_LCNF_Simp_inlineProjInst_x3f_visitCode(v_a_215_, v_projs_152_, v___y_185_, v___y_186_, v___y_187_, v___y_188_, v___y_189_, v___y_190_, v___y_191_, v___y_192_);
return v___x_216_;
}
else
{
lean_object* v_a_217_; lean_object* v___x_219_; uint8_t v_isShared_220_; uint8_t v_isSharedCheck_224_; 
lean_dec(v_projs_152_);
v_a_217_ = lean_ctor_get(v___x_214_, 0);
v_isSharedCheck_224_ = !lean_is_exclusive(v___x_214_);
if (v_isSharedCheck_224_ == 0)
{
v___x_219_ = v___x_214_;
v_isShared_220_ = v_isSharedCheck_224_;
goto v_resetjp_218_;
}
else
{
lean_inc(v_a_217_);
lean_dec(v___x_214_);
v___x_219_ = lean_box(0);
v_isShared_220_ = v_isSharedCheck_224_;
goto v_resetjp_218_;
}
v_resetjp_218_:
{
lean_object* v___x_222_; 
if (v_isShared_220_ == 0)
{
v___x_222_ = v___x_219_;
goto v_reusejp_221_;
}
else
{
lean_object* v_reuseFailAlloc_223_; 
v_reuseFailAlloc_223_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_223_, 0, v_a_217_);
v___x_222_ = v_reuseFailAlloc_223_;
goto v_reusejp_221_;
}
v_reusejp_221_:
{
return v___x_222_;
}
}
}
}
}
else
{
lean_dec(v_val_201_);
lean_dec_ref(v_args_183_);
lean_dec(v_us_182_);
lean_dec(v_projs_152_);
goto v___jp_162_;
}
}
else
{
lean_object* v___x_225_; lean_object* v___x_227_; 
lean_dec(v_val_201_);
lean_dec_ref(v_args_183_);
lean_dec(v_us_182_);
lean_dec(v_projs_152_);
v___x_225_ = lean_box(0);
if (v_isShared_200_ == 0)
{
lean_ctor_set(v___x_199_, 0, v___x_225_);
v___x_227_ = v___x_199_;
goto v_reusejp_226_;
}
else
{
lean_object* v_reuseFailAlloc_228_; 
v_reuseFailAlloc_228_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_228_, 0, v___x_225_);
v___x_227_ = v_reuseFailAlloc_228_;
goto v_reusejp_226_;
}
v_reusejp_226_:
{
return v___x_227_;
}
}
}
else
{
lean_dec(v_val_201_);
lean_del_object(v___x_199_);
lean_dec_ref(v_args_183_);
lean_dec(v_us_182_);
lean_dec(v_projs_152_);
goto v___jp_165_;
}
}
else
{
lean_del_object(v___x_199_);
lean_dec(v_a_197_);
lean_dec(v_a_194_);
lean_dec_ref(v_args_183_);
lean_dec(v_us_182_);
lean_dec(v_projs_152_);
goto v___jp_165_;
}
}
}
else
{
lean_object* v_a_230_; lean_object* v___x_232_; uint8_t v_isShared_233_; uint8_t v_isSharedCheck_237_; 
lean_dec(v_a_194_);
lean_dec_ref(v_args_183_);
lean_dec(v_us_182_);
lean_dec(v_projs_152_);
v_a_230_ = lean_ctor_get(v___x_196_, 0);
v_isSharedCheck_237_ = !lean_is_exclusive(v___x_196_);
if (v_isSharedCheck_237_ == 0)
{
v___x_232_ = v___x_196_;
v_isShared_233_ = v_isSharedCheck_237_;
goto v_resetjp_231_;
}
else
{
lean_inc(v_a_230_);
lean_dec(v___x_196_);
v___x_232_ = lean_box(0);
v_isShared_233_ = v_isSharedCheck_237_;
goto v_resetjp_231_;
}
v_resetjp_231_:
{
lean_object* v___x_235_; 
if (v_isShared_233_ == 0)
{
v___x_235_ = v___x_232_;
goto v_reusejp_234_;
}
else
{
lean_object* v_reuseFailAlloc_236_; 
v_reuseFailAlloc_236_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_236_, 0, v_a_230_);
v___x_235_ = v_reuseFailAlloc_236_;
goto v_reusejp_234_;
}
v_reusejp_234_:
{
return v___x_235_;
}
}
}
}
else
{
lean_object* v_a_238_; lean_object* v___x_240_; uint8_t v_isShared_241_; uint8_t v_isSharedCheck_245_; 
lean_dec_ref(v_args_183_);
lean_dec(v_us_182_);
lean_dec(v_declName_181_);
lean_dec(v_projs_152_);
v_a_238_ = lean_ctor_get(v___x_193_, 0);
v_isSharedCheck_245_ = !lean_is_exclusive(v___x_193_);
if (v_isSharedCheck_245_ == 0)
{
v___x_240_ = v___x_193_;
v_isShared_241_ = v_isSharedCheck_245_;
goto v_resetjp_239_;
}
else
{
lean_inc(v_a_238_);
lean_dec(v___x_193_);
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
v_reuseFailAlloc_244_ = lean_alloc_ctor(1, 1, 0);
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
}
}
default: 
{
lean_object* v___x_303_; lean_object* v___x_305_; 
lean_dec(v_value_176_);
lean_dec(v_projs_152_);
v___x_303_ = lean_box(0);
if (v_isShared_174_ == 0)
{
lean_ctor_set(v___x_173_, 0, v___x_303_);
v___x_305_ = v___x_173_;
goto v_reusejp_304_;
}
else
{
lean_object* v_reuseFailAlloc_306_; 
v_reuseFailAlloc_306_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_306_, 0, v___x_303_);
v___x_305_ = v_reuseFailAlloc_306_;
goto v_reusejp_304_;
}
v_reusejp_304_:
{
return v___x_305_;
}
}
}
}
else
{
lean_object* v___x_307_; lean_object* v___x_309_; 
lean_dec(v_a_171_);
lean_dec(v_projs_152_);
v___x_307_ = lean_box(0);
if (v_isShared_174_ == 0)
{
lean_ctor_set(v___x_173_, 0, v___x_307_);
v___x_309_ = v___x_173_;
goto v_reusejp_308_;
}
else
{
lean_object* v_reuseFailAlloc_310_; 
v_reuseFailAlloc_310_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_310_, 0, v___x_307_);
v___x_309_ = v_reuseFailAlloc_310_;
goto v_reusejp_308_;
}
v_reusejp_308_:
{
return v___x_309_;
}
}
}
}
else
{
lean_object* v_a_312_; lean_object* v___x_314_; uint8_t v_isShared_315_; uint8_t v_isSharedCheck_319_; 
lean_dec(v_projs_152_);
v_a_312_ = lean_ctor_get(v___x_170_, 0);
v_isSharedCheck_319_ = !lean_is_exclusive(v___x_170_);
if (v_isSharedCheck_319_ == 0)
{
v___x_314_ = v___x_170_;
v_isShared_315_ = v_isSharedCheck_319_;
goto v_resetjp_313_;
}
else
{
lean_inc(v_a_312_);
lean_dec(v___x_170_);
v___x_314_ = lean_box(0);
v_isShared_315_ = v_isSharedCheck_319_;
goto v_resetjp_313_;
}
v_resetjp_313_:
{
lean_object* v___x_317_; 
if (v_isShared_315_ == 0)
{
v___x_317_ = v___x_314_;
goto v_reusejp_316_;
}
else
{
lean_object* v_reuseFailAlloc_318_; 
v_reuseFailAlloc_318_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_318_, 0, v_a_312_);
v___x_317_ = v_reuseFailAlloc_318_;
goto v_reusejp_316_;
}
v_reusejp_316_:
{
return v___x_317_;
}
}
}
v___jp_162_:
{
lean_object* v___x_163_; lean_object* v___x_164_; 
v___x_163_ = lean_box(0);
v___x_164_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_164_, 0, v___x_163_);
return v___x_164_;
}
v___jp_165_:
{
lean_object* v___x_166_; lean_object* v___x_167_; 
v___x_166_ = lean_box(0);
v___x_167_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_167_, 0, v___x_166_);
return v___x_167_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Simp_InlineProj_0__Lean_Compiler_LCNF_Simp_inlineProjInst_x3f_visitCode(lean_object* v_code_320_, lean_object* v_projs_321_, lean_object* v___y_322_, lean_object* v___y_323_, lean_object* v___y_324_, lean_object* v___y_325_, lean_object* v___y_326_, lean_object* v___y_327_, lean_object* v___y_328_, lean_object* v___y_329_){
_start:
{
switch(lean_obj_tag(v_code_320_))
{
case 0:
{
lean_object* v_decl_331_; lean_object* v_k_332_; lean_object* v___x_333_; lean_object* v___x_334_; lean_object* v___x_335_; lean_object* v___x_336_; 
v_decl_331_ = lean_ctor_get(v_code_320_, 0);
lean_inc_ref(v_decl_331_);
v_k_332_ = lean_ctor_get(v_code_320_, 1);
lean_inc_ref(v_k_332_);
lean_dec_ref_known(v_code_320_, 2);
v___x_333_ = lean_st_ref_take(v___y_322_);
v___x_334_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_334_, 0, v_decl_331_);
v___x_335_ = lean_array_push(v___x_333_, v___x_334_);
v___x_336_ = lean_st_ref_put(v___y_322_, v___x_335_);
v_code_320_ = v_k_332_;
goto _start;
}
case 1:
{
lean_object* v_decl_338_; lean_object* v_k_339_; lean_object* v___x_340_; lean_object* v___x_341_; lean_object* v___x_342_; lean_object* v___x_343_; 
v_decl_338_ = lean_ctor_get(v_code_320_, 0);
lean_inc_ref(v_decl_338_);
v_k_339_ = lean_ctor_get(v_code_320_, 1);
lean_inc_ref(v_k_339_);
lean_dec_ref_known(v_code_320_, 2);
v___x_340_ = lean_st_ref_take(v___y_322_);
v___x_341_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_341_, 0, v_decl_338_);
v___x_342_ = lean_array_push(v___x_340_, v___x_341_);
v___x_343_ = lean_st_ref_put(v___y_322_, v___x_342_);
v_code_320_ = v_k_339_;
goto _start;
}
case 5:
{
lean_object* v_fvarId_345_; lean_object* v___x_346_; 
v_fvarId_345_ = lean_ctor_get(v_code_320_, 0);
lean_inc(v_fvarId_345_);
lean_dec_ref_known(v_code_320_, 1);
v___x_346_ = l___private_Lean_Compiler_LCNF_Simp_InlineProj_0__Lean_Compiler_LCNF_Simp_inlineProjInst_x3f_visit(v_fvarId_345_, v_projs_321_, v___y_322_, v___y_323_, v___y_324_, v___y_325_, v___y_326_, v___y_327_, v___y_328_, v___y_329_);
return v___x_346_;
}
default: 
{
uint8_t v___x_347_; lean_object* v___x_348_; 
lean_dec(v_projs_321_);
v___x_347_ = 0;
v___x_348_ = l_Lean_Compiler_LCNF_eraseCode___redArg(v___x_347_, v_code_320_, v___y_327_);
lean_dec_ref(v_code_320_);
if (lean_obj_tag(v___x_348_) == 0)
{
lean_object* v___x_350_; uint8_t v_isShared_351_; uint8_t v_isSharedCheck_356_; 
v_isSharedCheck_356_ = !lean_is_exclusive(v___x_348_);
if (v_isSharedCheck_356_ == 0)
{
lean_object* v_unused_357_; 
v_unused_357_ = lean_ctor_get(v___x_348_, 0);
lean_dec(v_unused_357_);
v___x_350_ = v___x_348_;
v_isShared_351_ = v_isSharedCheck_356_;
goto v_resetjp_349_;
}
else
{
lean_dec(v___x_348_);
v___x_350_ = lean_box(0);
v_isShared_351_ = v_isSharedCheck_356_;
goto v_resetjp_349_;
}
v_resetjp_349_:
{
lean_object* v___x_352_; lean_object* v___x_354_; 
v___x_352_ = lean_box(0);
if (v_isShared_351_ == 0)
{
lean_ctor_set(v___x_350_, 0, v___x_352_);
v___x_354_ = v___x_350_;
goto v_reusejp_353_;
}
else
{
lean_object* v_reuseFailAlloc_355_; 
v_reuseFailAlloc_355_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_355_, 0, v___x_352_);
v___x_354_ = v_reuseFailAlloc_355_;
goto v_reusejp_353_;
}
v_reusejp_353_:
{
return v___x_354_;
}
}
}
else
{
lean_object* v_a_358_; lean_object* v___x_360_; uint8_t v_isShared_361_; uint8_t v_isSharedCheck_365_; 
v_a_358_ = lean_ctor_get(v___x_348_, 0);
v_isSharedCheck_365_ = !lean_is_exclusive(v___x_348_);
if (v_isSharedCheck_365_ == 0)
{
v___x_360_ = v___x_348_;
v_isShared_361_ = v_isSharedCheck_365_;
goto v_resetjp_359_;
}
else
{
lean_inc(v_a_358_);
lean_dec(v___x_348_);
v___x_360_ = lean_box(0);
v_isShared_361_ = v_isSharedCheck_365_;
goto v_resetjp_359_;
}
v_resetjp_359_:
{
lean_object* v___x_363_; 
if (v_isShared_361_ == 0)
{
v___x_363_ = v___x_360_;
goto v_reusejp_362_;
}
else
{
lean_object* v_reuseFailAlloc_364_; 
v_reuseFailAlloc_364_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_364_, 0, v_a_358_);
v___x_363_ = v_reuseFailAlloc_364_;
goto v_reusejp_362_;
}
v_reusejp_362_:
{
return v___x_363_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Simp_InlineProj_0__Lean_Compiler_LCNF_Simp_inlineProjInst_x3f_visitCode___boxed(lean_object* v_code_366_, lean_object* v_projs_367_, lean_object* v___y_368_, lean_object* v___y_369_, lean_object* v___y_370_, lean_object* v___y_371_, lean_object* v___y_372_, lean_object* v___y_373_, lean_object* v___y_374_, lean_object* v___y_375_, lean_object* v___y_376_){
_start:
{
lean_object* v_res_377_; 
v_res_377_ = l___private_Lean_Compiler_LCNF_Simp_InlineProj_0__Lean_Compiler_LCNF_Simp_inlineProjInst_x3f_visitCode(v_code_366_, v_projs_367_, v___y_368_, v___y_369_, v___y_370_, v___y_371_, v___y_372_, v___y_373_, v___y_374_, v___y_375_);
lean_dec(v___y_375_);
lean_dec_ref(v___y_374_);
lean_dec(v___y_373_);
lean_dec_ref(v___y_372_);
lean_dec_ref(v___y_371_);
lean_dec(v___y_370_);
lean_dec_ref(v___y_369_);
lean_dec(v___y_368_);
return v_res_377_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Simp_InlineProj_0__Lean_Compiler_LCNF_Simp_inlineProjInst_x3f_visit___boxed(lean_object* v_fvarId_378_, lean_object* v_projs_379_, lean_object* v___y_380_, lean_object* v___y_381_, lean_object* v___y_382_, lean_object* v___y_383_, lean_object* v___y_384_, lean_object* v___y_385_, lean_object* v___y_386_, lean_object* v___y_387_, lean_object* v___y_388_){
_start:
{
lean_object* v_res_389_; 
v_res_389_ = l___private_Lean_Compiler_LCNF_Simp_InlineProj_0__Lean_Compiler_LCNF_Simp_inlineProjInst_x3f_visit(v_fvarId_378_, v_projs_379_, v___y_380_, v___y_381_, v___y_382_, v___y_383_, v___y_384_, v___y_385_, v___y_386_, v___y_387_);
lean_dec(v___y_387_);
lean_dec_ref(v___y_386_);
lean_dec(v___y_385_);
lean_dec_ref(v___y_384_);
lean_dec_ref(v___y_383_);
lean_dec(v___y_382_);
lean_dec_ref(v___y_381_);
lean_dec(v___y_380_);
return v_res_389_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_inlineProjInst_x3f(lean_object* v_e_392_, lean_object* v___y_393_, lean_object* v___y_394_, lean_object* v___y_395_, lean_object* v___y_396_, lean_object* v___y_397_, lean_object* v___y_398_, lean_object* v___y_399_){
_start:
{
if (lean_obj_tag(v_e_392_) == 2)
{
lean_object* v_idx_401_; lean_object* v_struct_402_; lean_object* v___x_403_; 
v_idx_401_ = lean_ctor_get(v_e_392_, 1);
lean_inc(v_idx_401_);
v_struct_402_ = lean_ctor_get(v_e_392_, 2);
lean_inc_n(v_struct_402_, 2);
v___x_403_ = l_Lean_Compiler_LCNF_getType(v_struct_402_, v___y_396_, v___y_397_, v___y_398_, v___y_399_);
if (lean_obj_tag(v___x_403_) == 0)
{
lean_object* v_a_404_; lean_object* v___x_405_; 
v_a_404_ = lean_ctor_get(v___x_403_, 0);
lean_inc(v_a_404_);
lean_dec_ref_known(v___x_403_, 1);
v___x_405_ = l_Lean_Compiler_LCNF_isClass_x3f___redArg(v_a_404_, v___y_399_);
lean_dec(v_a_404_);
if (lean_obj_tag(v___x_405_) == 0)
{
lean_object* v_a_406_; lean_object* v___x_408_; uint8_t v_isShared_409_; uint8_t v_isSharedCheck_492_; 
v_a_406_ = lean_ctor_get(v___x_405_, 0);
v_isSharedCheck_492_ = !lean_is_exclusive(v___x_405_);
if (v_isSharedCheck_492_ == 0)
{
v___x_408_ = v___x_405_;
v_isShared_409_ = v_isSharedCheck_492_;
goto v_resetjp_407_;
}
else
{
lean_inc(v_a_406_);
lean_dec(v___x_405_);
v___x_408_ = lean_box(0);
v_isShared_409_ = v_isSharedCheck_492_;
goto v_resetjp_407_;
}
v_resetjp_407_:
{
if (lean_obj_tag(v_a_406_) == 0)
{
lean_object* v___x_410_; lean_object* v___x_412_; 
lean_dec(v_struct_402_);
lean_dec_ref_known(v_e_392_, 3);
lean_dec(v_idx_401_);
v___x_410_ = lean_box(0);
if (v_isShared_409_ == 0)
{
lean_ctor_set(v___x_408_, 0, v___x_410_);
v___x_412_ = v___x_408_;
goto v_reusejp_411_;
}
else
{
lean_object* v_reuseFailAlloc_413_; 
v_reuseFailAlloc_413_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_413_, 0, v___x_410_);
v___x_412_ = v_reuseFailAlloc_413_;
goto v_reusejp_411_;
}
v_reusejp_411_:
{
return v___x_412_;
}
}
else
{
uint8_t v___x_414_; lean_object* v___x_415_; 
lean_dec_ref_known(v_a_406_, 1);
lean_del_object(v___x_408_);
v___x_414_ = 0;
v___x_415_ = l_Lean_Compiler_LCNF_LetValue_inferType(v___x_414_, v_e_392_, v___y_396_, v___y_397_, v___y_398_, v___y_399_);
if (lean_obj_tag(v___x_415_) == 0)
{
lean_object* v_a_416_; lean_object* v___x_417_; 
v_a_416_ = lean_ctor_get(v___x_415_, 0);
lean_inc(v_a_416_);
lean_dec_ref_known(v___x_415_, 1);
v___x_417_ = l_Lean_Compiler_LCNF_isClass_x3f___redArg(v_a_416_, v___y_399_);
lean_dec(v_a_416_);
if (lean_obj_tag(v___x_417_) == 0)
{
lean_object* v_a_418_; lean_object* v___x_420_; uint8_t v_isShared_421_; uint8_t v_isSharedCheck_475_; 
v_a_418_ = lean_ctor_get(v___x_417_, 0);
v_isSharedCheck_475_ = !lean_is_exclusive(v___x_417_);
if (v_isSharedCheck_475_ == 0)
{
v___x_420_ = v___x_417_;
v_isShared_421_ = v_isSharedCheck_475_;
goto v_resetjp_419_;
}
else
{
lean_inc(v_a_418_);
lean_dec(v___x_417_);
v___x_420_ = lean_box(0);
v_isShared_421_ = v_isSharedCheck_475_;
goto v_resetjp_419_;
}
v_resetjp_419_:
{
if (lean_obj_tag(v_a_418_) == 0)
{
lean_object* v___x_422_; lean_object* v___x_423_; lean_object* v___x_424_; lean_object* v___x_425_; lean_object* v___x_426_; 
lean_del_object(v___x_420_);
v___x_422_ = lean_box(0);
v___x_423_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_423_, 0, v_idx_401_);
lean_ctor_set(v___x_423_, 1, v___x_422_);
v___x_424_ = ((lean_object*)(l_Lean_Compiler_LCNF_Simp_inlineProjInst_x3f___closed__0));
v___x_425_ = lean_st_mk_ref(v___x_424_);
v___x_426_ = l___private_Lean_Compiler_LCNF_Simp_InlineProj_0__Lean_Compiler_LCNF_Simp_inlineProjInst_x3f_visit(v_struct_402_, v___x_423_, v___x_425_, v___y_393_, v___y_394_, v___y_395_, v___y_396_, v___y_397_, v___y_398_, v___y_399_);
if (lean_obj_tag(v___x_426_) == 0)
{
lean_object* v_a_427_; lean_object* v___x_429_; uint8_t v_isShared_430_; uint8_t v_isSharedCheck_462_; 
v_a_427_ = lean_ctor_get(v___x_426_, 0);
v_isSharedCheck_462_ = !lean_is_exclusive(v___x_426_);
if (v_isSharedCheck_462_ == 0)
{
v___x_429_ = v___x_426_;
v_isShared_430_ = v_isSharedCheck_462_;
goto v_resetjp_428_;
}
else
{
lean_inc(v_a_427_);
lean_dec(v___x_426_);
v___x_429_ = lean_box(0);
v_isShared_430_ = v_isSharedCheck_462_;
goto v_resetjp_428_;
}
v_resetjp_428_:
{
lean_object* v___x_431_; 
v___x_431_ = lean_st_ref_get(v___x_425_);
lean_dec(v___x_425_);
if (lean_obj_tag(v_a_427_) == 1)
{
lean_object* v_val_432_; lean_object* v___x_434_; uint8_t v_isShared_435_; uint8_t v_isSharedCheck_443_; 
v_val_432_ = lean_ctor_get(v_a_427_, 0);
v_isSharedCheck_443_ = !lean_is_exclusive(v_a_427_);
if (v_isSharedCheck_443_ == 0)
{
v___x_434_ = v_a_427_;
v_isShared_435_ = v_isSharedCheck_443_;
goto v_resetjp_433_;
}
else
{
lean_inc(v_val_432_);
lean_dec(v_a_427_);
v___x_434_ = lean_box(0);
v_isShared_435_ = v_isSharedCheck_443_;
goto v_resetjp_433_;
}
v_resetjp_433_:
{
lean_object* v___x_436_; lean_object* v___x_438_; 
v___x_436_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_436_, 0, v___x_431_);
lean_ctor_set(v___x_436_, 1, v_val_432_);
if (v_isShared_435_ == 0)
{
lean_ctor_set(v___x_434_, 0, v___x_436_);
v___x_438_ = v___x_434_;
goto v_reusejp_437_;
}
else
{
lean_object* v_reuseFailAlloc_442_; 
v_reuseFailAlloc_442_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_442_, 0, v___x_436_);
v___x_438_ = v_reuseFailAlloc_442_;
goto v_reusejp_437_;
}
v_reusejp_437_:
{
lean_object* v___x_440_; 
if (v_isShared_430_ == 0)
{
lean_ctor_set(v___x_429_, 0, v___x_438_);
v___x_440_ = v___x_429_;
goto v_reusejp_439_;
}
else
{
lean_object* v_reuseFailAlloc_441_; 
v_reuseFailAlloc_441_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_441_, 0, v___x_438_);
v___x_440_ = v_reuseFailAlloc_441_;
goto v_reusejp_439_;
}
v_reusejp_439_:
{
return v___x_440_;
}
}
}
}
else
{
lean_object* v___x_444_; 
lean_del_object(v___x_429_);
lean_dec(v_a_427_);
v___x_444_ = l_Lean_Compiler_LCNF_eraseCodeDecls(v___x_414_, v___x_431_, v___y_396_, v___y_397_, v___y_398_, v___y_399_);
lean_dec(v___x_431_);
if (lean_obj_tag(v___x_444_) == 0)
{
lean_object* v___x_446_; uint8_t v_isShared_447_; uint8_t v_isSharedCheck_452_; 
v_isSharedCheck_452_ = !lean_is_exclusive(v___x_444_);
if (v_isSharedCheck_452_ == 0)
{
lean_object* v_unused_453_; 
v_unused_453_ = lean_ctor_get(v___x_444_, 0);
lean_dec(v_unused_453_);
v___x_446_ = v___x_444_;
v_isShared_447_ = v_isSharedCheck_452_;
goto v_resetjp_445_;
}
else
{
lean_dec(v___x_444_);
v___x_446_ = lean_box(0);
v_isShared_447_ = v_isSharedCheck_452_;
goto v_resetjp_445_;
}
v_resetjp_445_:
{
lean_object* v___x_448_; lean_object* v___x_450_; 
v___x_448_ = lean_box(0);
if (v_isShared_447_ == 0)
{
lean_ctor_set(v___x_446_, 0, v___x_448_);
v___x_450_ = v___x_446_;
goto v_reusejp_449_;
}
else
{
lean_object* v_reuseFailAlloc_451_; 
v_reuseFailAlloc_451_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_451_, 0, v___x_448_);
v___x_450_ = v_reuseFailAlloc_451_;
goto v_reusejp_449_;
}
v_reusejp_449_:
{
return v___x_450_;
}
}
}
else
{
lean_object* v_a_454_; lean_object* v___x_456_; uint8_t v_isShared_457_; uint8_t v_isSharedCheck_461_; 
v_a_454_ = lean_ctor_get(v___x_444_, 0);
v_isSharedCheck_461_ = !lean_is_exclusive(v___x_444_);
if (v_isSharedCheck_461_ == 0)
{
v___x_456_ = v___x_444_;
v_isShared_457_ = v_isSharedCheck_461_;
goto v_resetjp_455_;
}
else
{
lean_inc(v_a_454_);
lean_dec(v___x_444_);
v___x_456_ = lean_box(0);
v_isShared_457_ = v_isSharedCheck_461_;
goto v_resetjp_455_;
}
v_resetjp_455_:
{
lean_object* v___x_459_; 
if (v_isShared_457_ == 0)
{
v___x_459_ = v___x_456_;
goto v_reusejp_458_;
}
else
{
lean_object* v_reuseFailAlloc_460_; 
v_reuseFailAlloc_460_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_460_, 0, v_a_454_);
v___x_459_ = v_reuseFailAlloc_460_;
goto v_reusejp_458_;
}
v_reusejp_458_:
{
return v___x_459_;
}
}
}
}
}
}
else
{
lean_object* v_a_463_; lean_object* v___x_465_; uint8_t v_isShared_466_; uint8_t v_isSharedCheck_470_; 
lean_dec(v___x_425_);
v_a_463_ = lean_ctor_get(v___x_426_, 0);
v_isSharedCheck_470_ = !lean_is_exclusive(v___x_426_);
if (v_isSharedCheck_470_ == 0)
{
v___x_465_ = v___x_426_;
v_isShared_466_ = v_isSharedCheck_470_;
goto v_resetjp_464_;
}
else
{
lean_inc(v_a_463_);
lean_dec(v___x_426_);
v___x_465_ = lean_box(0);
v_isShared_466_ = v_isSharedCheck_470_;
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
lean_object* v_reuseFailAlloc_469_; 
v_reuseFailAlloc_469_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_469_, 0, v_a_463_);
v___x_468_ = v_reuseFailAlloc_469_;
goto v_reusejp_467_;
}
v_reusejp_467_:
{
return v___x_468_;
}
}
}
}
else
{
lean_object* v___x_471_; lean_object* v___x_473_; 
lean_dec_ref_known(v_a_418_, 1);
lean_dec(v_struct_402_);
lean_dec(v_idx_401_);
v___x_471_ = lean_box(0);
if (v_isShared_421_ == 0)
{
lean_ctor_set(v___x_420_, 0, v___x_471_);
v___x_473_ = v___x_420_;
goto v_reusejp_472_;
}
else
{
lean_object* v_reuseFailAlloc_474_; 
v_reuseFailAlloc_474_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_474_, 0, v___x_471_);
v___x_473_ = v_reuseFailAlloc_474_;
goto v_reusejp_472_;
}
v_reusejp_472_:
{
return v___x_473_;
}
}
}
}
else
{
lean_object* v_a_476_; lean_object* v___x_478_; uint8_t v_isShared_479_; uint8_t v_isSharedCheck_483_; 
lean_dec(v_struct_402_);
lean_dec(v_idx_401_);
v_a_476_ = lean_ctor_get(v___x_417_, 0);
v_isSharedCheck_483_ = !lean_is_exclusive(v___x_417_);
if (v_isSharedCheck_483_ == 0)
{
v___x_478_ = v___x_417_;
v_isShared_479_ = v_isSharedCheck_483_;
goto v_resetjp_477_;
}
else
{
lean_inc(v_a_476_);
lean_dec(v___x_417_);
v___x_478_ = lean_box(0);
v_isShared_479_ = v_isSharedCheck_483_;
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
lean_object* v_reuseFailAlloc_482_; 
v_reuseFailAlloc_482_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_482_, 0, v_a_476_);
v___x_481_ = v_reuseFailAlloc_482_;
goto v_reusejp_480_;
}
v_reusejp_480_:
{
return v___x_481_;
}
}
}
}
else
{
lean_object* v_a_484_; lean_object* v___x_486_; uint8_t v_isShared_487_; uint8_t v_isSharedCheck_491_; 
lean_dec(v_struct_402_);
lean_dec(v_idx_401_);
v_a_484_ = lean_ctor_get(v___x_415_, 0);
v_isSharedCheck_491_ = !lean_is_exclusive(v___x_415_);
if (v_isSharedCheck_491_ == 0)
{
v___x_486_ = v___x_415_;
v_isShared_487_ = v_isSharedCheck_491_;
goto v_resetjp_485_;
}
else
{
lean_inc(v_a_484_);
lean_dec(v___x_415_);
v___x_486_ = lean_box(0);
v_isShared_487_ = v_isSharedCheck_491_;
goto v_resetjp_485_;
}
v_resetjp_485_:
{
lean_object* v___x_489_; 
if (v_isShared_487_ == 0)
{
v___x_489_ = v___x_486_;
goto v_reusejp_488_;
}
else
{
lean_object* v_reuseFailAlloc_490_; 
v_reuseFailAlloc_490_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_490_, 0, v_a_484_);
v___x_489_ = v_reuseFailAlloc_490_;
goto v_reusejp_488_;
}
v_reusejp_488_:
{
return v___x_489_;
}
}
}
}
}
}
else
{
lean_object* v_a_493_; lean_object* v___x_495_; uint8_t v_isShared_496_; uint8_t v_isSharedCheck_500_; 
lean_dec(v_struct_402_);
lean_dec_ref_known(v_e_392_, 3);
lean_dec(v_idx_401_);
v_a_493_ = lean_ctor_get(v___x_405_, 0);
v_isSharedCheck_500_ = !lean_is_exclusive(v___x_405_);
if (v_isSharedCheck_500_ == 0)
{
v___x_495_ = v___x_405_;
v_isShared_496_ = v_isSharedCheck_500_;
goto v_resetjp_494_;
}
else
{
lean_inc(v_a_493_);
lean_dec(v___x_405_);
v___x_495_ = lean_box(0);
v_isShared_496_ = v_isSharedCheck_500_;
goto v_resetjp_494_;
}
v_resetjp_494_:
{
lean_object* v___x_498_; 
if (v_isShared_496_ == 0)
{
v___x_498_ = v___x_495_;
goto v_reusejp_497_;
}
else
{
lean_object* v_reuseFailAlloc_499_; 
v_reuseFailAlloc_499_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_499_, 0, v_a_493_);
v___x_498_ = v_reuseFailAlloc_499_;
goto v_reusejp_497_;
}
v_reusejp_497_:
{
return v___x_498_;
}
}
}
}
else
{
lean_object* v_a_501_; lean_object* v___x_503_; uint8_t v_isShared_504_; uint8_t v_isSharedCheck_508_; 
lean_dec(v_struct_402_);
lean_dec_ref_known(v_e_392_, 3);
lean_dec(v_idx_401_);
v_a_501_ = lean_ctor_get(v___x_403_, 0);
v_isSharedCheck_508_ = !lean_is_exclusive(v___x_403_);
if (v_isSharedCheck_508_ == 0)
{
v___x_503_ = v___x_403_;
v_isShared_504_ = v_isSharedCheck_508_;
goto v_resetjp_502_;
}
else
{
lean_inc(v_a_501_);
lean_dec(v___x_403_);
v___x_503_ = lean_box(0);
v_isShared_504_ = v_isSharedCheck_508_;
goto v_resetjp_502_;
}
v_resetjp_502_:
{
lean_object* v___x_506_; 
if (v_isShared_504_ == 0)
{
v___x_506_ = v___x_503_;
goto v_reusejp_505_;
}
else
{
lean_object* v_reuseFailAlloc_507_; 
v_reuseFailAlloc_507_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_507_, 0, v_a_501_);
v___x_506_ = v_reuseFailAlloc_507_;
goto v_reusejp_505_;
}
v_reusejp_505_:
{
return v___x_506_;
}
}
}
}
else
{
lean_object* v___x_509_; lean_object* v___x_510_; 
lean_dec(v_e_392_);
v___x_509_ = lean_box(0);
v___x_510_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_510_, 0, v___x_509_);
return v___x_510_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_inlineProjInst_x3f___boxed(lean_object* v_e_511_, lean_object* v___y_512_, lean_object* v___y_513_, lean_object* v___y_514_, lean_object* v___y_515_, lean_object* v___y_516_, lean_object* v___y_517_, lean_object* v___y_518_, lean_object* v___y_519_){
_start:
{
lean_object* v_res_520_; 
v_res_520_ = l_Lean_Compiler_LCNF_Simp_inlineProjInst_x3f(v_e_511_, v___y_512_, v___y_513_, v___y_514_, v___y_515_, v___y_516_, v___y_517_, v___y_518_);
lean_dec(v___y_518_);
lean_dec_ref(v___y_517_);
lean_dec(v___y_516_);
lean_dec_ref(v___y_515_);
lean_dec_ref(v___y_514_);
lean_dec(v___y_513_);
lean_dec_ref(v___y_512_);
return v_res_520_;
}
}
lean_object* runtime_initialize_Lean_Compiler_LCNF_Simp_SimpM(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Compiler_LCNF_Simp_InlineProj(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Compiler_LCNF_Simp_SimpM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Compiler_LCNF_Simp_InlineProj(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Compiler_LCNF_Simp_SimpM(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Compiler_LCNF_Simp_InlineProj(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Compiler_LCNF_Simp_SimpM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_LCNF_Simp_InlineProj(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Compiler_LCNF_Simp_InlineProj(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Compiler_LCNF_Simp_InlineProj(builtin);
}
#ifdef __cplusplus
}
#endif
