// Lean compiler output
// Module: Lean.Meta.Sym.Simp.SimpM
// Imports: public import Lean.Meta.Sym.Pattern
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
lean_object* l_StateRefT_x27_lift___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Meta_instAddMessageContextMetaM;
lean_object* l_Lean_instAddMessageContextOfMonadLift___redArg___lam__0(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
lean_object* lean_st_mk_ref(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_ReaderT_instMonadFunctor___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l_Lean_Core_instMonadCoreM___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_instMonadExceptOfExceptionCoreM;
lean_object* l_StateRefT_x27_instMonadExceptOf___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateRefT_x27_instMonadExceptOf___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instMonadExceptOf___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instMonadExceptOf___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Core_instMonadQuotationCoreM;
lean_object* l_StateRefT_x27_instMonadFunctor___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_instMonadQuotationOfMonadFunctorOfMonadLift___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instMonadLift___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg___lam__4___boxed(lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg___lam__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg___lam__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg___lam__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateRefT_x27_instMonad___redArg(lean_object*);
lean_object* l_Lean_Core_instMonadCoreM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instFunctorOfMonad___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instFunctorOfMonad___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instMonadMetaM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instMonadMetaM___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instMonad___redArg(lean_object*);
lean_object* l_Lean_instAddErrorMessageContextOfAddMessageContextOfMonad___redArg(lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_throwError___redArg(lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Meta_Sym_Simp_instInhabitedConfig_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(100000) << 1) | 1)),((lean_object*)(((size_t)(2) << 1) | 1))}};
static const lean_object* l_Lean_Meta_Sym_Simp_instInhabitedConfig_default___closed__0 = (const lean_object*)&l_Lean_Meta_Sym_Simp_instInhabitedConfig_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_Sym_Simp_instInhabitedConfig_default = (const lean_object*)&l_Lean_Meta_Sym_Simp_instInhabitedConfig_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_Sym_Simp_instInhabitedConfig = (const lean_object*)&l_Lean_Meta_Sym_Simp_instInhabitedConfig_default___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_Result_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_Result_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_Result_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_Result_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_Result_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_Result_rfl_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_Result_rfl_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_Result_step_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_Result_step_elim(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Meta_Sym_Simp_instInhabitedResult_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 0}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lean_Meta_Sym_Simp_instInhabitedResult_default___closed__0 = (const lean_object*)&l_Lean_Meta_Sym_Simp_instInhabitedResult_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_Sym_Simp_instInhabitedResult_default = (const lean_object*)&l_Lean_Meta_Sym_Simp_instInhabitedResult_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_Sym_Simp_instInhabitedResult = (const lean_object*)&l_Lean_Meta_Sym_Simp_instInhabitedResult_default___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_mkRflResult(uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_mkRflResult___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_mkRflResultCD(uint8_t);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_mkRflResultCD___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Meta_Sym_Simp_Result_isContextDependent(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_Result_isContextDependent___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_Result_withContextDependent(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_MethodsRefPointed;
static const lean_closure_object l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__0 = (const lean_object*)&l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__0_value;
static const lean_closure_object l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__1___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__1 = (const lean_object*)&l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__1_value;
static const lean_closure_object l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__2___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__2 = (const lean_object*)&l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__2_value;
static const lean_closure_object l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__3___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__3 = (const lean_object*)&l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__3_value;
static const lean_closure_object l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__4___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__4 = (const lean_object*)&l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__4_value;
static const lean_closure_object l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__6___boxed, .m_arity = 7, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__4_value),((lean_object*)&l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__3_value)} };
static const lean_object* l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__5 = (const lean_object*)&l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__5_value;
static const lean_closure_object l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__9___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__3_value)} };
static const lean_object* l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__6 = (const lean_object*)&l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__6_value;
static const lean_closure_object l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__10___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__7 = (const lean_object*)&l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__7_value;
static const lean_ctor_object l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__0_value),((lean_object*)&l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__1_value)}};
static const lean_object* l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__8 = (const lean_object*)&l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__8_value;
static const lean_ctor_object l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*5 + 0, .m_other = 5, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__8_value),((lean_object*)&l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__2_value),((lean_object*)&l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__5_value),((lean_object*)&l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__6_value),((lean_object*)&l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__7_value)}};
static const lean_object* l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__9 = (const lean_object*)&l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__9_value;
static const lean_ctor_object l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__9_value),((lean_object*)&l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__3_value)}};
static const lean_object* l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__10 = (const lean_object*)&l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__10_value;
static lean_once_cell_t l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__11;
static const lean_closure_object l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__12 = (const lean_object*)&l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__12_value;
static const lean_closure_object l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__1___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__13 = (const lean_object*)&l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__13_value;
static const lean_closure_object l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instMonadMetaM___lam__0___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__14 = (const lean_object*)&l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__14_value;
static const lean_closure_object l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instMonadMetaM___lam__1___boxed, .m_arity = 9, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__15 = (const lean_object*)&l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__15_value;
static lean_once_cell_t l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__16;
static lean_once_cell_t l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__17;
static lean_once_cell_t l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__18;
static lean_once_cell_t l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__19;
static lean_once_cell_t l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__20_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__20;
static lean_once_cell_t l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__21;
static lean_once_cell_t l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__22_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__22;
static lean_once_cell_t l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__23_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__23;
static lean_once_cell_t l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__24_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__24;
static lean_once_cell_t l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__25_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__25;
static lean_once_cell_t l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__26_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__26;
static lean_once_cell_t l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__27_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__27;
static lean_once_cell_t l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__28_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__28;
static lean_once_cell_t l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__29_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__29;
static lean_once_cell_t l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__30_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__30;
static lean_once_cell_t l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__31_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__31;
static lean_once_cell_t l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__32_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__32;
static lean_once_cell_t l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__33_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__33;
static lean_once_cell_t l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__34_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__34;
static lean_once_cell_t l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__35_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__35;
static lean_once_cell_t l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__36_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__36;
static const lean_closure_object l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__37_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_ReaderT_instMonadFunctor___redArg___lam__0___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__37 = (const lean_object*)&l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__37_value;
static const lean_closure_object l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__38_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_ReaderT_instMonadLift___redArg___lam__0___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__38 = (const lean_object*)&l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__38_value;
static const lean_closure_object l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__39_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_StateRefT_x27_instMonadFunctor___redArg___lam__0___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__39 = (const lean_object*)&l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__39_value;
static const lean_closure_object l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__40_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*3, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_StateRefT_x27_lift___boxed, .m_arity = 6, .m_num_fixed = 3, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__40 = (const lean_object*)&l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__40_value;
static lean_once_cell_t l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__41_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__41;
static lean_once_cell_t l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__42_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__42;
static lean_once_cell_t l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__43_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__43;
static lean_once_cell_t l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__44_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__44;
static lean_once_cell_t l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__45_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__45;
static lean_once_cell_t l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__46_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__46;
static lean_once_cell_t l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__47_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__47;
static lean_once_cell_t l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__48_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__48;
static lean_once_cell_t l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__49_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__49;
static lean_once_cell_t l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__50_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__50;
static lean_once_cell_t l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__51_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__51;
static lean_once_cell_t l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__52_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__52;
static const lean_string_object l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__53_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "<default>"};
static const lean_object* l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__53 = (const lean_object*)&l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__53_value;
static lean_once_cell_t l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__54_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__54;
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg();
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___boxed(lean_object*);
static lean_once_cell_t l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__0;
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_instInhabitedSimpM(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_instInhabitedMethods_default___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_instInhabitedMethods_default___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Meta_Sym_Simp_instInhabitedMethods_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Sym_Simp_instInhabitedMethods_default___lam__0___boxed, .m_arity = 11, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Sym_Simp_instInhabitedMethods_default___closed__0 = (const lean_object*)&l_Lean_Meta_Sym_Simp_instInhabitedMethods_default___closed__0_value;
static const lean_ctor_object l_Lean_Meta_Sym_Simp_instInhabitedMethods_default___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Meta_Sym_Simp_instInhabitedMethods_default___closed__0_value),((lean_object*)&l_Lean_Meta_Sym_Simp_instInhabitedMethods_default___closed__0_value)}};
static const lean_object* l_Lean_Meta_Sym_Simp_instInhabitedMethods_default___closed__1 = (const lean_object*)&l_Lean_Meta_Sym_Simp_instInhabitedMethods_default___closed__1_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_Sym_Simp_instInhabitedMethods_default = (const lean_object*)&l_Lean_Meta_Sym_Simp_instInhabitedMethods_default___closed__1_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_Sym_Simp_instInhabitedMethods = (const lean_object*)&l_Lean_Meta_Sym_Simp_instInhabitedMethods_default___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_Methods_toMethodsRefImpl(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_Methods_toMethodsRefImpl___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_MethodsRef_toMethodsImpl(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_MethodsRef_toMethodsImpl___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_getMethods___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_getMethods___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_getMethods(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_getMethods___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_Sym_Simp_SimpM_run___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Simp_SimpM_run___redArg___closed__0;
static lean_once_cell_t l_Lean_Meta_Sym_Simp_SimpM_run___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Simp_SimpM_run___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_SimpM_run___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_SimpM_run___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_SimpM_run(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_SimpM_run___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_Sym_Simp_SimpM_run_x27___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Simp_SimpM_run_x27___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_SimpM_run_x27___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_SimpM_run_x27___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_SimpM_run_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_SimpM_run_x27___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_sym_simp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_simp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_getConfig___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_getConfig___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_getConfig(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_getConfig___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_pre(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_pre___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_post(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_post___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_withoutModifyingCache___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_withoutModifyingCache___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_withoutModifyingCache___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_withoutModifyingCache___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_withoutModifyingCache(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_withoutModifyingCache___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_withFreshTransientCache___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_withFreshTransientCache___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_withFreshTransientCache___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_withFreshTransientCache___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_withFreshTransientCache(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_withFreshTransientCache___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_simp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_simp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_Result_ctorIdx(lean_object* v_x_6_){
_start:
{
if (lean_obj_tag(v_x_6_) == 0)
{
lean_object* v___x_7_; 
v___x_7_ = lean_unsigned_to_nat(0u);
return v___x_7_;
}
else
{
lean_object* v___x_8_; 
v___x_8_ = lean_unsigned_to_nat(1u);
return v___x_8_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_Result_ctorIdx___boxed(lean_object* v_x_9_){
_start:
{
lean_object* v_res_10_; 
v_res_10_ = l_Lean_Meta_Sym_Simp_Result_ctorIdx(v_x_9_);
lean_dec_ref(v_x_9_);
return v_res_10_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_Result_ctorElim___redArg(lean_object* v_t_11_, lean_object* v_k_12_){
_start:
{
if (lean_obj_tag(v_t_11_) == 0)
{
uint8_t v_done_13_; uint8_t v_contextDependent_14_; lean_object* v___x_15_; lean_object* v___x_16_; lean_object* v___x_17_; 
v_done_13_ = lean_ctor_get_uint8(v_t_11_, 0);
v_contextDependent_14_ = lean_ctor_get_uint8(v_t_11_, 1);
lean_dec_ref_known(v_t_11_, 0);
v___x_15_ = lean_box(v_done_13_);
v___x_16_ = lean_box(v_contextDependent_14_);
v___x_17_ = lean_apply_2(v_k_12_, v___x_15_, v___x_16_);
return v___x_17_;
}
else
{
lean_object* v_e_x27_18_; lean_object* v_proof_19_; uint8_t v_done_20_; uint8_t v_contextDependent_21_; lean_object* v___x_22_; lean_object* v___x_23_; lean_object* v___x_24_; 
v_e_x27_18_ = lean_ctor_get(v_t_11_, 0);
lean_inc_ref(v_e_x27_18_);
v_proof_19_ = lean_ctor_get(v_t_11_, 1);
lean_inc_ref(v_proof_19_);
v_done_20_ = lean_ctor_get_uint8(v_t_11_, sizeof(void*)*2);
v_contextDependent_21_ = lean_ctor_get_uint8(v_t_11_, sizeof(void*)*2 + 1);
lean_dec_ref_known(v_t_11_, 2);
v___x_22_ = lean_box(v_done_20_);
v___x_23_ = lean_box(v_contextDependent_21_);
v___x_24_ = lean_apply_4(v_k_12_, v_e_x27_18_, v_proof_19_, v___x_22_, v___x_23_);
return v___x_24_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_Result_ctorElim(lean_object* v_motive_25_, lean_object* v_ctorIdx_26_, lean_object* v_t_27_, lean_object* v_h_28_, lean_object* v_k_29_){
_start:
{
lean_object* v___x_30_; 
v___x_30_ = l_Lean_Meta_Sym_Simp_Result_ctorElim___redArg(v_t_27_, v_k_29_);
return v___x_30_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_Result_ctorElim___boxed(lean_object* v_motive_31_, lean_object* v_ctorIdx_32_, lean_object* v_t_33_, lean_object* v_h_34_, lean_object* v_k_35_){
_start:
{
lean_object* v_res_36_; 
v_res_36_ = l_Lean_Meta_Sym_Simp_Result_ctorElim(v_motive_31_, v_ctorIdx_32_, v_t_33_, v_h_34_, v_k_35_);
lean_dec(v_ctorIdx_32_);
return v_res_36_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_Result_rfl_elim___redArg(lean_object* v_t_37_, lean_object* v_rfl_38_){
_start:
{
lean_object* v___x_39_; 
v___x_39_ = l_Lean_Meta_Sym_Simp_Result_ctorElim___redArg(v_t_37_, v_rfl_38_);
return v___x_39_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_Result_rfl_elim(lean_object* v_motive_40_, lean_object* v_t_41_, lean_object* v_h_42_, lean_object* v_rfl_43_){
_start:
{
lean_object* v___x_44_; 
v___x_44_ = l_Lean_Meta_Sym_Simp_Result_ctorElim___redArg(v_t_41_, v_rfl_43_);
return v___x_44_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_Result_step_elim___redArg(lean_object* v_t_45_, lean_object* v_step_46_){
_start:
{
lean_object* v___x_47_; 
v___x_47_ = l_Lean_Meta_Sym_Simp_Result_ctorElim___redArg(v_t_45_, v_step_46_);
return v___x_47_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_Result_step_elim(lean_object* v_motive_48_, lean_object* v_t_49_, lean_object* v_h_50_, lean_object* v_step_51_){
_start:
{
lean_object* v___x_52_; 
v___x_52_ = l_Lean_Meta_Sym_Simp_Result_ctorElim___redArg(v_t_49_, v_step_51_);
return v___x_52_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_mkRflResult(uint8_t v_done_57_, uint8_t v_contextDependent_58_){
_start:
{
if (v_done_57_ == 0)
{
if (v_contextDependent_58_ == 0)
{
lean_object* v___x_59_; 
v___x_59_ = lean_alloc_ctor(0, 0, 2);
lean_ctor_set_uint8(v___x_59_, 0, v_contextDependent_58_);
lean_ctor_set_uint8(v___x_59_, 1, v_contextDependent_58_);
return v___x_59_;
}
else
{
lean_object* v___x_60_; 
v___x_60_ = lean_alloc_ctor(0, 0, 2);
lean_ctor_set_uint8(v___x_60_, 0, v_done_57_);
lean_ctor_set_uint8(v___x_60_, 1, v_contextDependent_58_);
return v___x_60_;
}
}
else
{
if (v_contextDependent_58_ == 0)
{
lean_object* v___x_61_; 
v___x_61_ = lean_alloc_ctor(0, 0, 2);
lean_ctor_set_uint8(v___x_61_, 0, v_done_57_);
lean_ctor_set_uint8(v___x_61_, 1, v_contextDependent_58_);
return v___x_61_;
}
else
{
lean_object* v___x_62_; 
v___x_62_ = lean_alloc_ctor(0, 0, 2);
lean_ctor_set_uint8(v___x_62_, 0, v_contextDependent_58_);
lean_ctor_set_uint8(v___x_62_, 1, v_contextDependent_58_);
return v___x_62_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_mkRflResult___boxed(lean_object* v_done_63_, lean_object* v_contextDependent_64_){
_start:
{
uint8_t v_done_boxed_65_; uint8_t v_contextDependent_boxed_66_; lean_object* v_res_67_; 
v_done_boxed_65_ = lean_unbox(v_done_63_);
v_contextDependent_boxed_66_ = lean_unbox(v_contextDependent_64_);
v_res_67_ = l_Lean_Meta_Sym_Simp_mkRflResult(v_done_boxed_65_, v_contextDependent_boxed_66_);
return v_res_67_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_mkRflResultCD(uint8_t v_contextDependent_68_){
_start:
{
if (v_contextDependent_68_ == 0)
{
lean_object* v___x_69_; 
v___x_69_ = lean_alloc_ctor(0, 0, 2);
lean_ctor_set_uint8(v___x_69_, 0, v_contextDependent_68_);
lean_ctor_set_uint8(v___x_69_, 1, v_contextDependent_68_);
return v___x_69_;
}
else
{
uint8_t v___x_70_; lean_object* v___x_71_; 
v___x_70_ = 0;
v___x_71_ = lean_alloc_ctor(0, 0, 2);
lean_ctor_set_uint8(v___x_71_, 0, v___x_70_);
lean_ctor_set_uint8(v___x_71_, 1, v_contextDependent_68_);
return v___x_71_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_mkRflResultCD___boxed(lean_object* v_contextDependent_72_){
_start:
{
uint8_t v_contextDependent_boxed_73_; lean_object* v_res_74_; 
v_contextDependent_boxed_73_ = lean_unbox(v_contextDependent_72_);
v_res_74_ = l_Lean_Meta_Sym_Simp_mkRflResultCD(v_contextDependent_boxed_73_);
return v_res_74_;
}
}
LEAN_EXPORT uint8_t l_Lean_Meta_Sym_Simp_Result_isContextDependent(lean_object* v_x_75_){
_start:
{
if (lean_obj_tag(v_x_75_) == 0)
{
uint8_t v_contextDependent_76_; 
v_contextDependent_76_ = lean_ctor_get_uint8(v_x_75_, 1);
return v_contextDependent_76_;
}
else
{
uint8_t v_contextDependent_77_; 
v_contextDependent_77_ = lean_ctor_get_uint8(v_x_75_, sizeof(void*)*2 + 1);
return v_contextDependent_77_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_Result_isContextDependent___boxed(lean_object* v_x_78_){
_start:
{
uint8_t v_res_79_; lean_object* v_r_80_; 
v_res_79_ = l_Lean_Meta_Sym_Simp_Result_isContextDependent(v_x_78_);
lean_dec_ref(v_x_78_);
v_r_80_ = lean_box(v_res_79_);
return v_r_80_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_Result_withContextDependent(lean_object* v_x_81_){
_start:
{
if (lean_obj_tag(v_x_81_) == 0)
{
uint8_t v_done_82_; lean_object* v___x_84_; uint8_t v_isShared_85_; uint8_t v_isSharedCheck_90_; 
v_done_82_ = lean_ctor_get_uint8(v_x_81_, 0);
v_isSharedCheck_90_ = !lean_is_exclusive(v_x_81_);
if (v_isSharedCheck_90_ == 0)
{
v___x_84_ = v_x_81_;
v_isShared_85_ = v_isSharedCheck_90_;
goto v_resetjp_83_;
}
else
{
lean_dec(v_x_81_);
v___x_84_ = lean_box(0);
v_isShared_85_ = v_isSharedCheck_90_;
goto v_resetjp_83_;
}
v_resetjp_83_:
{
uint8_t v___x_86_; lean_object* v___x_88_; 
v___x_86_ = 1;
if (v_isShared_85_ == 0)
{
v___x_88_ = v___x_84_;
goto v_reusejp_87_;
}
else
{
lean_object* v_reuseFailAlloc_89_; 
v_reuseFailAlloc_89_ = lean_alloc_ctor(0, 0, 2);
lean_ctor_set_uint8(v_reuseFailAlloc_89_, 0, v_done_82_);
v___x_88_ = v_reuseFailAlloc_89_;
goto v_reusejp_87_;
}
v_reusejp_87_:
{
lean_ctor_set_uint8(v___x_88_, 1, v___x_86_);
return v___x_88_;
}
}
}
else
{
lean_object* v_e_x27_91_; lean_object* v_proof_92_; uint8_t v_done_93_; lean_object* v___x_95_; uint8_t v_isShared_96_; uint8_t v_isSharedCheck_101_; 
v_e_x27_91_ = lean_ctor_get(v_x_81_, 0);
v_proof_92_ = lean_ctor_get(v_x_81_, 1);
v_done_93_ = lean_ctor_get_uint8(v_x_81_, sizeof(void*)*2);
v_isSharedCheck_101_ = !lean_is_exclusive(v_x_81_);
if (v_isSharedCheck_101_ == 0)
{
v___x_95_ = v_x_81_;
v_isShared_96_ = v_isSharedCheck_101_;
goto v_resetjp_94_;
}
else
{
lean_inc(v_proof_92_);
lean_inc(v_e_x27_91_);
lean_dec(v_x_81_);
v___x_95_ = lean_box(0);
v_isShared_96_ = v_isSharedCheck_101_;
goto v_resetjp_94_;
}
v_resetjp_94_:
{
uint8_t v___x_97_; lean_object* v___x_99_; 
v___x_97_ = 1;
if (v_isShared_96_ == 0)
{
v___x_99_ = v___x_95_;
goto v_reusejp_98_;
}
else
{
lean_object* v_reuseFailAlloc_100_; 
v_reuseFailAlloc_100_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v_reuseFailAlloc_100_, 0, v_e_x27_91_);
lean_ctor_set(v_reuseFailAlloc_100_, 1, v_proof_92_);
lean_ctor_set_uint8(v_reuseFailAlloc_100_, sizeof(void*)*2, v_done_93_);
v___x_99_ = v_reuseFailAlloc_100_;
goto v_reusejp_98_;
}
v_reusejp_98_:
{
lean_ctor_set_uint8(v___x_99_, sizeof(void*)*2 + 1, v___x_97_);
return v___x_99_;
}
}
}
}
}
static lean_object* _init_l_Lean_Meta_Sym_Simp_MethodsRefPointed(void){
_start:
{
lean_object* v___x_102_; 
v___x_102_ = lean_box(0);
return v___x_102_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__11(void){
_start:
{
lean_object* v___x_126_; lean_object* v___x_127_; 
v___x_126_ = ((lean_object*)(l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__10));
v___x_127_ = l_StateRefT_x27_instMonad___redArg(v___x_126_);
return v___x_127_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__16(void){
_start:
{
lean_object* v___x_132_; lean_object* v___f_133_; 
v___x_132_ = l_Lean_instMonadExceptOfExceptionCoreM;
v___f_133_ = lean_alloc_closure((void*)(l_StateRefT_x27_instMonadExceptOf___redArg___lam__0___boxed), 4, 1);
lean_closure_set(v___f_133_, 0, v___x_132_);
return v___f_133_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__17(void){
_start:
{
lean_object* v___x_134_; lean_object* v___f_135_; 
v___x_134_ = l_Lean_instMonadExceptOfExceptionCoreM;
v___f_135_ = lean_alloc_closure((void*)(l_StateRefT_x27_instMonadExceptOf___redArg___lam__2___boxed), 5, 1);
lean_closure_set(v___f_135_, 0, v___x_134_);
return v___f_135_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__18(void){
_start:
{
lean_object* v___f_136_; lean_object* v___f_137_; lean_object* v___x_138_; 
v___f_136_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__17, &l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__17_once, _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__17);
v___f_137_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__16, &l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__16_once, _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__16);
v___x_138_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_138_, 0, v___f_137_);
lean_ctor_set(v___x_138_, 1, v___f_136_);
return v___x_138_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__19(void){
_start:
{
lean_object* v___x_139_; lean_object* v___f_140_; 
v___x_139_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__18, &l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__18_once, _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__18);
v___f_140_ = lean_alloc_closure((void*)(l_ReaderT_instMonadExceptOf___redArg___lam__0___boxed), 4, 1);
lean_closure_set(v___f_140_, 0, v___x_139_);
return v___f_140_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__20(void){
_start:
{
lean_object* v___x_141_; lean_object* v___f_142_; 
v___x_141_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__18, &l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__18_once, _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__18);
v___f_142_ = lean_alloc_closure((void*)(l_ReaderT_instMonadExceptOf___redArg___lam__2___boxed), 5, 1);
lean_closure_set(v___f_142_, 0, v___x_141_);
return v___f_142_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__21(void){
_start:
{
lean_object* v___f_143_; lean_object* v___f_144_; lean_object* v___x_145_; 
v___f_143_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__20, &l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__20_once, _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__20);
v___f_144_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__19, &l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__19_once, _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__19);
v___x_145_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_145_, 0, v___f_144_);
lean_ctor_set(v___x_145_, 1, v___f_143_);
return v___x_145_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__22(void){
_start:
{
lean_object* v___x_146_; lean_object* v___f_147_; 
v___x_146_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__21, &l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__21_once, _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__21);
v___f_147_ = lean_alloc_closure((void*)(l_StateRefT_x27_instMonadExceptOf___redArg___lam__0___boxed), 4, 1);
lean_closure_set(v___f_147_, 0, v___x_146_);
return v___f_147_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__23(void){
_start:
{
lean_object* v___x_148_; lean_object* v___f_149_; 
v___x_148_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__21, &l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__21_once, _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__21);
v___f_149_ = lean_alloc_closure((void*)(l_StateRefT_x27_instMonadExceptOf___redArg___lam__2___boxed), 5, 1);
lean_closure_set(v___f_149_, 0, v___x_148_);
return v___f_149_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__24(void){
_start:
{
lean_object* v___f_150_; lean_object* v___f_151_; lean_object* v___x_152_; 
v___f_150_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__23, &l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__23_once, _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__23);
v___f_151_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__22, &l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__22_once, _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__22);
v___x_152_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_152_, 0, v___f_151_);
lean_ctor_set(v___x_152_, 1, v___f_150_);
return v___x_152_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__25(void){
_start:
{
lean_object* v___x_153_; lean_object* v___f_154_; 
v___x_153_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__24, &l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__24_once, _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__24);
v___f_154_ = lean_alloc_closure((void*)(l_ReaderT_instMonadExceptOf___redArg___lam__0___boxed), 4, 1);
lean_closure_set(v___f_154_, 0, v___x_153_);
return v___f_154_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__26(void){
_start:
{
lean_object* v___x_155_; lean_object* v___f_156_; 
v___x_155_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__24, &l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__24_once, _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__24);
v___f_156_ = lean_alloc_closure((void*)(l_ReaderT_instMonadExceptOf___redArg___lam__2___boxed), 5, 1);
lean_closure_set(v___f_156_, 0, v___x_155_);
return v___f_156_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__27(void){
_start:
{
lean_object* v___f_157_; lean_object* v___f_158_; lean_object* v___x_159_; 
v___f_157_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__26, &l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__26_once, _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__26);
v___f_158_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__25, &l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__25_once, _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__25);
v___x_159_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_159_, 0, v___f_158_);
lean_ctor_set(v___x_159_, 1, v___f_157_);
return v___x_159_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__28(void){
_start:
{
lean_object* v___x_160_; lean_object* v___f_161_; 
v___x_160_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__27, &l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__27_once, _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__27);
v___f_161_ = lean_alloc_closure((void*)(l_StateRefT_x27_instMonadExceptOf___redArg___lam__0___boxed), 4, 1);
lean_closure_set(v___f_161_, 0, v___x_160_);
return v___f_161_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__29(void){
_start:
{
lean_object* v___x_162_; lean_object* v___f_163_; 
v___x_162_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__27, &l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__27_once, _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__27);
v___f_163_ = lean_alloc_closure((void*)(l_StateRefT_x27_instMonadExceptOf___redArg___lam__2___boxed), 5, 1);
lean_closure_set(v___f_163_, 0, v___x_162_);
return v___f_163_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__30(void){
_start:
{
lean_object* v___f_164_; lean_object* v___f_165_; lean_object* v___x_166_; 
v___f_164_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__29, &l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__29_once, _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__29);
v___f_165_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__28, &l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__28_once, _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__28);
v___x_166_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_166_, 0, v___f_165_);
lean_ctor_set(v___x_166_, 1, v___f_164_);
return v___x_166_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__31(void){
_start:
{
lean_object* v___x_167_; lean_object* v___f_168_; 
v___x_167_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__30, &l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__30_once, _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__30);
v___f_168_ = lean_alloc_closure((void*)(l_ReaderT_instMonadExceptOf___redArg___lam__0___boxed), 4, 1);
lean_closure_set(v___f_168_, 0, v___x_167_);
return v___f_168_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__32(void){
_start:
{
lean_object* v___x_169_; lean_object* v___f_170_; 
v___x_169_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__30, &l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__30_once, _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__30);
v___f_170_ = lean_alloc_closure((void*)(l_ReaderT_instMonadExceptOf___redArg___lam__2___boxed), 5, 1);
lean_closure_set(v___f_170_, 0, v___x_169_);
return v___f_170_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__33(void){
_start:
{
lean_object* v___f_171_; lean_object* v___f_172_; lean_object* v___x_173_; 
v___f_171_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__32, &l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__32_once, _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__32);
v___f_172_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__31, &l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__31_once, _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__31);
v___x_173_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_173_, 0, v___f_172_);
lean_ctor_set(v___x_173_, 1, v___f_171_);
return v___x_173_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__34(void){
_start:
{
lean_object* v___x_174_; lean_object* v___f_175_; 
v___x_174_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__33, &l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__33_once, _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__33);
v___f_175_ = lean_alloc_closure((void*)(l_ReaderT_instMonadExceptOf___redArg___lam__0___boxed), 4, 1);
lean_closure_set(v___f_175_, 0, v___x_174_);
return v___f_175_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__35(void){
_start:
{
lean_object* v___x_176_; lean_object* v___f_177_; 
v___x_176_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__33, &l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__33_once, _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__33);
v___f_177_ = lean_alloc_closure((void*)(l_ReaderT_instMonadExceptOf___redArg___lam__2___boxed), 5, 1);
lean_closure_set(v___f_177_, 0, v___x_176_);
return v___f_177_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__36(void){
_start:
{
lean_object* v___f_178_; lean_object* v___f_179_; lean_object* v___x_180_; 
v___f_178_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__35, &l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__35_once, _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__35);
v___f_179_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__34, &l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__34_once, _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__34);
v___x_180_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_180_, 0, v___f_179_);
lean_ctor_set(v___x_180_, 1, v___f_178_);
return v___x_180_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__41(void){
_start:
{
lean_object* v___x_185_; lean_object* v___x_186_; lean_object* v___f_187_; lean_object* v___x_188_; 
v___x_185_ = l_Lean_Core_instMonadQuotationCoreM;
v___x_186_ = ((lean_object*)(l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__40));
v___f_187_ = ((lean_object*)(l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__39));
v___x_188_ = l_Lean_instMonadQuotationOfMonadFunctorOfMonadLift___redArg(v___f_187_, v___x_186_, v___x_185_);
return v___x_188_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__42(void){
_start:
{
lean_object* v___x_189_; lean_object* v___f_190_; lean_object* v___f_191_; lean_object* v___x_192_; 
v___x_189_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__41, &l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__41_once, _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__41);
v___f_190_ = ((lean_object*)(l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__38));
v___f_191_ = ((lean_object*)(l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__37));
v___x_192_ = l_Lean_instMonadQuotationOfMonadFunctorOfMonadLift___redArg(v___f_191_, v___f_190_, v___x_189_);
return v___x_192_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__43(void){
_start:
{
lean_object* v___x_193_; lean_object* v___x_194_; lean_object* v___f_195_; lean_object* v___x_196_; 
v___x_193_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__42, &l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__42_once, _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__42);
v___x_194_ = ((lean_object*)(l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__40));
v___f_195_ = ((lean_object*)(l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__39));
v___x_196_ = l_Lean_instMonadQuotationOfMonadFunctorOfMonadLift___redArg(v___f_195_, v___x_194_, v___x_193_);
return v___x_196_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__44(void){
_start:
{
lean_object* v___x_197_; lean_object* v___f_198_; lean_object* v___f_199_; lean_object* v___x_200_; 
v___x_197_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__43, &l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__43_once, _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__43);
v___f_198_ = ((lean_object*)(l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__38));
v___f_199_ = ((lean_object*)(l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__37));
v___x_200_ = l_Lean_instMonadQuotationOfMonadFunctorOfMonadLift___redArg(v___f_199_, v___f_198_, v___x_197_);
return v___x_200_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__45(void){
_start:
{
lean_object* v___x_201_; lean_object* v___x_202_; lean_object* v___f_203_; lean_object* v___x_204_; 
v___x_201_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__44, &l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__44_once, _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__44);
v___x_202_ = ((lean_object*)(l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__40));
v___f_203_ = ((lean_object*)(l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__39));
v___x_204_ = l_Lean_instMonadQuotationOfMonadFunctorOfMonadLift___redArg(v___f_203_, v___x_202_, v___x_201_);
return v___x_204_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__46(void){
_start:
{
lean_object* v___x_205_; lean_object* v___f_206_; lean_object* v___f_207_; lean_object* v___x_208_; 
v___x_205_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__45, &l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__45_once, _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__45);
v___f_206_ = ((lean_object*)(l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__38));
v___f_207_ = ((lean_object*)(l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__37));
v___x_208_ = l_Lean_instMonadQuotationOfMonadFunctorOfMonadLift___redArg(v___f_207_, v___f_206_, v___x_205_);
return v___x_208_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__47(void){
_start:
{
lean_object* v___x_209_; lean_object* v___f_210_; lean_object* v___f_211_; lean_object* v___x_212_; 
v___x_209_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__46, &l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__46_once, _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__46);
v___f_210_ = ((lean_object*)(l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__38));
v___f_211_ = ((lean_object*)(l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__37));
v___x_212_ = l_Lean_instMonadQuotationOfMonadFunctorOfMonadLift___redArg(v___f_211_, v___f_210_, v___x_209_);
return v___x_212_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__48(void){
_start:
{
lean_object* v___x_213_; lean_object* v___x_214_; lean_object* v___f_215_; 
v___x_213_ = ((lean_object*)(l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__40));
v___x_214_ = l_Lean_Meta_instAddMessageContextMetaM;
v___f_215_ = lean_alloc_closure((void*)(l_Lean_instAddMessageContextOfMonadLift___redArg___lam__0), 3, 2);
lean_closure_set(v___f_215_, 0, v___x_214_);
lean_closure_set(v___f_215_, 1, v___x_213_);
return v___f_215_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__49(void){
_start:
{
lean_object* v___f_216_; lean_object* v___f_217_; lean_object* v___f_218_; 
v___f_216_ = ((lean_object*)(l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__38));
v___f_217_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__48, &l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__48_once, _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__48);
v___f_218_ = lean_alloc_closure((void*)(l_Lean_instAddMessageContextOfMonadLift___redArg___lam__0), 3, 2);
lean_closure_set(v___f_218_, 0, v___f_217_);
lean_closure_set(v___f_218_, 1, v___f_216_);
return v___f_218_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__50(void){
_start:
{
lean_object* v___x_219_; lean_object* v___f_220_; lean_object* v___f_221_; 
v___x_219_ = ((lean_object*)(l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__40));
v___f_220_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__49, &l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__49_once, _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__49);
v___f_221_ = lean_alloc_closure((void*)(l_Lean_instAddMessageContextOfMonadLift___redArg___lam__0), 3, 2);
lean_closure_set(v___f_221_, 0, v___f_220_);
lean_closure_set(v___f_221_, 1, v___x_219_);
return v___f_221_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__51(void){
_start:
{
lean_object* v___f_222_; lean_object* v___f_223_; lean_object* v___f_224_; 
v___f_222_ = ((lean_object*)(l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__38));
v___f_223_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__50, &l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__50_once, _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__50);
v___f_224_ = lean_alloc_closure((void*)(l_Lean_instAddMessageContextOfMonadLift___redArg___lam__0), 3, 2);
lean_closure_set(v___f_224_, 0, v___f_223_);
lean_closure_set(v___f_224_, 1, v___f_222_);
return v___f_224_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__52(void){
_start:
{
lean_object* v___f_225_; lean_object* v___f_226_; lean_object* v___f_227_; 
v___f_225_ = ((lean_object*)(l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__38));
v___f_226_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__51, &l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__51_once, _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__51);
v___f_227_ = lean_alloc_closure((void*)(l_Lean_instAddMessageContextOfMonadLift___redArg___lam__0), 3, 2);
lean_closure_set(v___f_227_, 0, v___f_226_);
lean_closure_set(v___f_227_, 1, v___f_225_);
return v___f_227_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__54(void){
_start:
{
lean_object* v___x_229_; lean_object* v___x_230_; 
v___x_229_ = ((lean_object*)(l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__53));
v___x_230_ = l_Lean_stringToMessageData(v___x_229_);
return v___x_230_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg(){
_start:
{
lean_object* v___x_232_; lean_object* v_toApplicative_233_; lean_object* v_toFunctor_234_; lean_object* v_toSeq_235_; lean_object* v_toSeqLeft_236_; lean_object* v_toSeqRight_237_; lean_object* v___f_238_; lean_object* v___f_239_; lean_object* v___f_240_; lean_object* v___f_241_; lean_object* v___x_242_; lean_object* v___f_243_; lean_object* v___f_244_; lean_object* v___f_245_; lean_object* v___x_246_; lean_object* v___x_247_; lean_object* v___x_248_; lean_object* v_toApplicative_249_; lean_object* v___x_251_; uint8_t v_isShared_252_; uint8_t v_isSharedCheck_289_; 
v___x_232_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__11, &l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__11_once, _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__11);
v_toApplicative_233_ = lean_ctor_get(v___x_232_, 0);
v_toFunctor_234_ = lean_ctor_get(v_toApplicative_233_, 0);
v_toSeq_235_ = lean_ctor_get(v_toApplicative_233_, 2);
v_toSeqLeft_236_ = lean_ctor_get(v_toApplicative_233_, 3);
v_toSeqRight_237_ = lean_ctor_get(v_toApplicative_233_, 4);
v___f_238_ = ((lean_object*)(l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__12));
v___f_239_ = ((lean_object*)(l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__13));
lean_inc_ref_n(v_toFunctor_234_, 2);
v___f_240_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_240_, 0, v_toFunctor_234_);
v___f_241_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_241_, 0, v_toFunctor_234_);
v___x_242_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_242_, 0, v___f_240_);
lean_ctor_set(v___x_242_, 1, v___f_241_);
lean_inc(v_toSeqRight_237_);
v___f_243_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_243_, 0, v_toSeqRight_237_);
lean_inc(v_toSeqLeft_236_);
v___f_244_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3___boxed), 6, 1);
lean_closure_set(v___f_244_, 0, v_toSeqLeft_236_);
lean_inc(v_toSeq_235_);
v___f_245_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4___boxed), 6, 1);
lean_closure_set(v___f_245_, 0, v_toSeq_235_);
v___x_246_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_246_, 0, v___x_242_);
lean_ctor_set(v___x_246_, 1, v___f_238_);
lean_ctor_set(v___x_246_, 2, v___f_245_);
lean_ctor_set(v___x_246_, 3, v___f_244_);
lean_ctor_set(v___x_246_, 4, v___f_243_);
v___x_247_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_247_, 0, v___x_246_);
lean_ctor_set(v___x_247_, 1, v___f_239_);
v___x_248_ = l_StateRefT_x27_instMonad___redArg(v___x_247_);
v_toApplicative_249_ = lean_ctor_get(v___x_248_, 0);
v_isSharedCheck_289_ = !lean_is_exclusive(v___x_248_);
if (v_isSharedCheck_289_ == 0)
{
lean_object* v_unused_290_; 
v_unused_290_ = lean_ctor_get(v___x_248_, 1);
lean_dec(v_unused_290_);
v___x_251_ = v___x_248_;
v_isShared_252_ = v_isSharedCheck_289_;
goto v_resetjp_250_;
}
else
{
lean_inc(v_toApplicative_249_);
lean_dec(v___x_248_);
v___x_251_ = lean_box(0);
v_isShared_252_ = v_isSharedCheck_289_;
goto v_resetjp_250_;
}
v_resetjp_250_:
{
lean_object* v_toFunctor_253_; lean_object* v_toSeq_254_; lean_object* v_toSeqLeft_255_; lean_object* v_toSeqRight_256_; lean_object* v___x_258_; uint8_t v_isShared_259_; uint8_t v_isSharedCheck_287_; 
v_toFunctor_253_ = lean_ctor_get(v_toApplicative_249_, 0);
v_toSeq_254_ = lean_ctor_get(v_toApplicative_249_, 2);
v_toSeqLeft_255_ = lean_ctor_get(v_toApplicative_249_, 3);
v_toSeqRight_256_ = lean_ctor_get(v_toApplicative_249_, 4);
v_isSharedCheck_287_ = !lean_is_exclusive(v_toApplicative_249_);
if (v_isSharedCheck_287_ == 0)
{
lean_object* v_unused_288_; 
v_unused_288_ = lean_ctor_get(v_toApplicative_249_, 1);
lean_dec(v_unused_288_);
v___x_258_ = v_toApplicative_249_;
v_isShared_259_ = v_isSharedCheck_287_;
goto v_resetjp_257_;
}
else
{
lean_inc(v_toSeqRight_256_);
lean_inc(v_toSeqLeft_255_);
lean_inc(v_toSeq_254_);
lean_inc(v_toFunctor_253_);
lean_dec(v_toApplicative_249_);
v___x_258_ = lean_box(0);
v_isShared_259_ = v_isSharedCheck_287_;
goto v_resetjp_257_;
}
v_resetjp_257_:
{
lean_object* v___f_260_; lean_object* v___f_261_; lean_object* v___f_262_; lean_object* v___f_263_; lean_object* v___x_264_; lean_object* v___f_265_; lean_object* v___f_266_; lean_object* v___f_267_; lean_object* v___x_269_; 
v___f_260_ = ((lean_object*)(l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__14));
v___f_261_ = ((lean_object*)(l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__15));
lean_inc_ref(v_toFunctor_253_);
v___f_262_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_262_, 0, v_toFunctor_253_);
v___f_263_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_263_, 0, v_toFunctor_253_);
v___x_264_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_264_, 0, v___f_262_);
lean_ctor_set(v___x_264_, 1, v___f_263_);
v___f_265_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_265_, 0, v_toSeqRight_256_);
v___f_266_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3___boxed), 6, 1);
lean_closure_set(v___f_266_, 0, v_toSeqLeft_255_);
v___f_267_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4___boxed), 6, 1);
lean_closure_set(v___f_267_, 0, v_toSeq_254_);
if (v_isShared_259_ == 0)
{
lean_ctor_set(v___x_258_, 4, v___f_265_);
lean_ctor_set(v___x_258_, 3, v___f_266_);
lean_ctor_set(v___x_258_, 2, v___f_267_);
lean_ctor_set(v___x_258_, 1, v___f_260_);
lean_ctor_set(v___x_258_, 0, v___x_264_);
v___x_269_ = v___x_258_;
goto v_reusejp_268_;
}
else
{
lean_object* v_reuseFailAlloc_286_; 
v_reuseFailAlloc_286_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_286_, 0, v___x_264_);
lean_ctor_set(v_reuseFailAlloc_286_, 1, v___f_260_);
lean_ctor_set(v_reuseFailAlloc_286_, 2, v___f_267_);
lean_ctor_set(v_reuseFailAlloc_286_, 3, v___f_266_);
lean_ctor_set(v_reuseFailAlloc_286_, 4, v___f_265_);
v___x_269_ = v_reuseFailAlloc_286_;
goto v_reusejp_268_;
}
v_reusejp_268_:
{
lean_object* v___x_271_; 
if (v_isShared_252_ == 0)
{
lean_ctor_set(v___x_251_, 1, v___f_261_);
lean_ctor_set(v___x_251_, 0, v___x_269_);
v___x_271_ = v___x_251_;
goto v_reusejp_270_;
}
else
{
lean_object* v_reuseFailAlloc_285_; 
v_reuseFailAlloc_285_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_285_, 0, v___x_269_);
lean_ctor_set(v_reuseFailAlloc_285_, 1, v___f_261_);
v___x_271_ = v_reuseFailAlloc_285_;
goto v_reusejp_270_;
}
v_reusejp_270_:
{
lean_object* v___x_272_; lean_object* v___x_273_; lean_object* v___x_274_; lean_object* v___x_275_; lean_object* v___x_276_; lean_object* v___x_277_; lean_object* v___x_278_; lean_object* v_toMonadRef_279_; lean_object* v___f_280_; lean_object* v___x_281_; lean_object* v___x_282_; lean_object* v___x_283_; lean_object* v___x_284_; 
v___x_272_ = l_StateRefT_x27_instMonad___redArg(v___x_271_);
v___x_273_ = l_ReaderT_instMonad___redArg(v___x_272_);
v___x_274_ = l_StateRefT_x27_instMonad___redArg(v___x_273_);
v___x_275_ = l_ReaderT_instMonad___redArg(v___x_274_);
v___x_276_ = l_ReaderT_instMonad___redArg(v___x_275_);
v___x_277_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__36, &l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__36_once, _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__36);
v___x_278_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__47, &l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__47_once, _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__47);
v_toMonadRef_279_ = lean_ctor_get(v___x_278_, 0);
v___f_280_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__52, &l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__52_once, _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__52);
lean_inc_ref(v___x_276_);
v___x_281_ = l_Lean_instAddErrorMessageContextOfAddMessageContextOfMonad___redArg(v___f_280_, v___x_276_);
lean_inc_ref(v_toMonadRef_279_);
v___x_282_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_282_, 0, v___x_277_);
lean_ctor_set(v___x_282_, 1, v_toMonadRef_279_);
lean_ctor_set(v___x_282_, 2, v___x_281_);
v___x_283_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__54, &l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__54_once, _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___closed__54);
v___x_284_ = l_Lean_throwError___redArg(v___x_276_, v___x_282_, v___x_283_);
return v___x_284_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg___boxed(lean_object* v___dummy_291_){
_start:
{
lean_object* v_res_292_; 
v_res_292_ = l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg();
return v_res_292_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__0(void){
_start:
{
lean_object* v___x_293_; 
v___x_293_ = l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg();
return v___x_293_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_instInhabitedSimpM(lean_object* v_00_u03b1_294_){
_start:
{
lean_object* v___x_295_; 
v___x_295_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__0, &l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__0_once, _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__0);
return v___x_295_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_instInhabitedMethods_default___lam__0(lean_object* v_x_296_, lean_object* v___y_297_, lean_object* v___y_298_, lean_object* v___y_299_, lean_object* v___y_300_, lean_object* v___y_301_, lean_object* v___y_302_, lean_object* v___y_303_, lean_object* v___y_304_, lean_object* v___y_305_){
_start:
{
lean_object* v___x_307_; lean_object* v___x_308_; 
v___x_307_ = ((lean_object*)(l_Lean_Meta_Sym_Simp_instInhabitedResult_default___closed__0));
v___x_308_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_308_, 0, v___x_307_);
return v___x_308_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_instInhabitedMethods_default___lam__0___boxed(lean_object* v_x_309_, lean_object* v___y_310_, lean_object* v___y_311_, lean_object* v___y_312_, lean_object* v___y_313_, lean_object* v___y_314_, lean_object* v___y_315_, lean_object* v___y_316_, lean_object* v___y_317_, lean_object* v___y_318_, lean_object* v___y_319_){
_start:
{
lean_object* v_res_320_; 
v_res_320_ = l_Lean_Meta_Sym_Simp_instInhabitedMethods_default___lam__0(v_x_309_, v___y_310_, v___y_311_, v___y_312_, v___y_313_, v___y_314_, v___y_315_, v___y_316_, v___y_317_, v___y_318_);
lean_dec(v___y_318_);
lean_dec_ref(v___y_317_);
lean_dec(v___y_316_);
lean_dec_ref(v___y_315_);
lean_dec(v___y_314_);
lean_dec_ref(v___y_313_);
lean_dec(v___y_312_);
lean_dec_ref(v___y_311_);
lean_dec(v___y_310_);
lean_dec_ref(v_x_309_);
return v_res_320_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_Methods_toMethodsRefImpl(lean_object* v_m_326_){
_start:
{
lean_inc_ref(v_m_326_);
return v_m_326_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_Methods_toMethodsRefImpl___boxed(lean_object* v_m_327_){
_start:
{
lean_object* v_res_328_; 
v_res_328_ = l_Lean_Meta_Sym_Simp_Methods_toMethodsRefImpl(v_m_327_);
lean_dec_ref(v_m_327_);
return v_res_328_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_MethodsRef_toMethodsImpl(lean_object* v_m_329_){
_start:
{
lean_inc(v_m_329_);
return v_m_329_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_MethodsRef_toMethodsImpl___boxed(lean_object* v_m_330_){
_start:
{
lean_object* v_res_331_; 
v_res_331_ = l_Lean_Meta_Sym_Simp_MethodsRef_toMethodsImpl(v_m_330_);
lean_dec(v_m_330_);
return v_res_331_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_getMethods___redArg(lean_object* v___y_332_){
_start:
{
lean_object* v___x_334_; 
lean_inc(v___y_332_);
v___x_334_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_334_, 0, v___y_332_);
return v___x_334_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_getMethods___redArg___boxed(lean_object* v___y_335_, lean_object* v___y_336_){
_start:
{
lean_object* v_res_337_; 
v_res_337_ = l_Lean_Meta_Sym_Simp_getMethods___redArg(v___y_335_);
lean_dec(v___y_335_);
return v_res_337_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_getMethods(lean_object* v___y_338_, lean_object* v___y_339_, lean_object* v___y_340_, lean_object* v___y_341_, lean_object* v___y_342_, lean_object* v___y_343_, lean_object* v___y_344_, lean_object* v___y_345_, lean_object* v___y_346_){
_start:
{
lean_object* v___x_348_; 
lean_inc(v___y_338_);
v___x_348_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_348_, 0, v___y_338_);
return v___x_348_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_getMethods___boxed(lean_object* v___y_349_, lean_object* v___y_350_, lean_object* v___y_351_, lean_object* v___y_352_, lean_object* v___y_353_, lean_object* v___y_354_, lean_object* v___y_355_, lean_object* v___y_356_, lean_object* v___y_357_, lean_object* v___y_358_){
_start:
{
lean_object* v_res_359_; 
v_res_359_ = l_Lean_Meta_Sym_Simp_getMethods(v___y_349_, v___y_350_, v___y_351_, v___y_352_, v___y_353_, v___y_354_, v___y_355_, v___y_356_, v___y_357_);
lean_dec(v___y_357_);
lean_dec_ref(v___y_356_);
lean_dec(v___y_355_);
lean_dec_ref(v___y_354_);
lean_dec(v___y_353_);
lean_dec_ref(v___y_352_);
lean_dec(v___y_351_);
lean_dec_ref(v___y_350_);
lean_dec(v___y_349_);
return v_res_359_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Simp_SimpM_run___redArg___closed__0(void){
_start:
{
lean_object* v___x_360_; 
v___x_360_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_360_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Simp_SimpM_run___redArg___closed__1(void){
_start:
{
lean_object* v___x_361_; lean_object* v___x_362_; 
v___x_361_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_SimpM_run___redArg___closed__0, &l_Lean_Meta_Sym_Simp_SimpM_run___redArg___closed__0_once, _init_l_Lean_Meta_Sym_Simp_SimpM_run___redArg___closed__0);
v___x_362_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_362_, 0, v___x_361_);
return v___x_362_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_SimpM_run___redArg(lean_object* v_x_363_, lean_object* v_methods_364_, lean_object* v_config_365_, lean_object* v_s_366_, lean_object* v___y_367_, lean_object* v___y_368_, lean_object* v___y_369_, lean_object* v___y_370_, lean_object* v___y_371_, lean_object* v___y_372_){
_start:
{
lean_object* v_lctx_374_; lean_object* v_decls_375_; lean_object* v_size_376_; lean_object* v_persistentCache_377_; lean_object* v_funext_378_; lean_object* v___x_380_; uint8_t v_isShared_381_; uint8_t v_isSharedCheck_408_; 
v_lctx_374_ = lean_ctor_get(v___y_369_, 2);
v_decls_375_ = lean_ctor_get(v_lctx_374_, 1);
v_size_376_ = lean_ctor_get(v_decls_375_, 2);
v_persistentCache_377_ = lean_ctor_get(v_s_366_, 1);
v_funext_378_ = lean_ctor_get(v_s_366_, 3);
v_isSharedCheck_408_ = !lean_is_exclusive(v_s_366_);
if (v_isSharedCheck_408_ == 0)
{
lean_object* v_unused_409_; lean_object* v_unused_410_; 
v_unused_409_ = lean_ctor_get(v_s_366_, 2);
lean_dec(v_unused_409_);
v_unused_410_ = lean_ctor_get(v_s_366_, 0);
lean_dec(v_unused_410_);
v___x_380_ = v_s_366_;
v_isShared_381_ = v_isSharedCheck_408_;
goto v_resetjp_379_;
}
else
{
lean_inc(v_funext_378_);
lean_inc(v_persistentCache_377_);
lean_dec(v_s_366_);
v___x_380_ = lean_box(0);
v_isShared_381_ = v_isSharedCheck_408_;
goto v_resetjp_379_;
}
v_resetjp_379_:
{
lean_object* v___x_382_; lean_object* v___x_383_; lean_object* v___x_384_; lean_object* v___x_386_; 
v___x_382_ = lean_unsigned_to_nat(0u);
lean_inc(v_size_376_);
v___x_383_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_383_, 0, v_config_365_);
lean_ctor_set(v___x_383_, 1, v_size_376_);
lean_ctor_set(v___x_383_, 2, v___x_382_);
v___x_384_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_SimpM_run___redArg___closed__1, &l_Lean_Meta_Sym_Simp_SimpM_run___redArg___closed__1_once, _init_l_Lean_Meta_Sym_Simp_SimpM_run___redArg___closed__1);
if (v_isShared_381_ == 0)
{
lean_ctor_set(v___x_380_, 2, v___x_384_);
lean_ctor_set(v___x_380_, 0, v___x_382_);
v___x_386_ = v___x_380_;
goto v_reusejp_385_;
}
else
{
lean_object* v_reuseFailAlloc_407_; 
v_reuseFailAlloc_407_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_407_, 0, v___x_382_);
lean_ctor_set(v_reuseFailAlloc_407_, 1, v_persistentCache_377_);
lean_ctor_set(v_reuseFailAlloc_407_, 2, v___x_384_);
lean_ctor_set(v_reuseFailAlloc_407_, 3, v_funext_378_);
v___x_386_ = v_reuseFailAlloc_407_;
goto v_reusejp_385_;
}
v_reusejp_385_:
{
lean_object* v___x_387_; lean_object* v___x_388_; 
v___x_387_ = lean_st_mk_ref(v___x_386_);
lean_inc(v___y_372_);
lean_inc_ref(v___y_371_);
lean_inc(v___y_370_);
lean_inc_ref(v___y_369_);
lean_inc(v___y_368_);
lean_inc_ref(v___y_367_);
lean_inc(v___x_387_);
v___x_388_ = lean_apply_10(v_x_363_, v_methods_364_, v___x_383_, v___x_387_, v___y_367_, v___y_368_, v___y_369_, v___y_370_, v___y_371_, v___y_372_, lean_box(0));
if (lean_obj_tag(v___x_388_) == 0)
{
lean_object* v_a_389_; lean_object* v___x_391_; uint8_t v_isShared_392_; uint8_t v_isSharedCheck_398_; 
v_a_389_ = lean_ctor_get(v___x_388_, 0);
v_isSharedCheck_398_ = !lean_is_exclusive(v___x_388_);
if (v_isSharedCheck_398_ == 0)
{
v___x_391_ = v___x_388_;
v_isShared_392_ = v_isSharedCheck_398_;
goto v_resetjp_390_;
}
else
{
lean_inc(v_a_389_);
lean_dec(v___x_388_);
v___x_391_ = lean_box(0);
v_isShared_392_ = v_isSharedCheck_398_;
goto v_resetjp_390_;
}
v_resetjp_390_:
{
lean_object* v___x_393_; lean_object* v___x_394_; lean_object* v___x_396_; 
v___x_393_ = lean_st_ref_get(v___x_387_);
lean_dec(v___x_387_);
v___x_394_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_394_, 0, v_a_389_);
lean_ctor_set(v___x_394_, 1, v___x_393_);
if (v_isShared_392_ == 0)
{
lean_ctor_set(v___x_391_, 0, v___x_394_);
v___x_396_ = v___x_391_;
goto v_reusejp_395_;
}
else
{
lean_object* v_reuseFailAlloc_397_; 
v_reuseFailAlloc_397_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_397_, 0, v___x_394_);
v___x_396_ = v_reuseFailAlloc_397_;
goto v_reusejp_395_;
}
v_reusejp_395_:
{
return v___x_396_;
}
}
}
else
{
lean_object* v_a_399_; lean_object* v___x_401_; uint8_t v_isShared_402_; uint8_t v_isSharedCheck_406_; 
lean_dec(v___x_387_);
v_a_399_ = lean_ctor_get(v___x_388_, 0);
v_isSharedCheck_406_ = !lean_is_exclusive(v___x_388_);
if (v_isSharedCheck_406_ == 0)
{
v___x_401_ = v___x_388_;
v_isShared_402_ = v_isSharedCheck_406_;
goto v_resetjp_400_;
}
else
{
lean_inc(v_a_399_);
lean_dec(v___x_388_);
v___x_401_ = lean_box(0);
v_isShared_402_ = v_isSharedCheck_406_;
goto v_resetjp_400_;
}
v_resetjp_400_:
{
lean_object* v___x_404_; 
if (v_isShared_402_ == 0)
{
v___x_404_ = v___x_401_;
goto v_reusejp_403_;
}
else
{
lean_object* v_reuseFailAlloc_405_; 
v_reuseFailAlloc_405_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_405_, 0, v_a_399_);
v___x_404_ = v_reuseFailAlloc_405_;
goto v_reusejp_403_;
}
v_reusejp_403_:
{
return v___x_404_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_SimpM_run___redArg___boxed(lean_object* v_x_411_, lean_object* v_methods_412_, lean_object* v_config_413_, lean_object* v_s_414_, lean_object* v___y_415_, lean_object* v___y_416_, lean_object* v___y_417_, lean_object* v___y_418_, lean_object* v___y_419_, lean_object* v___y_420_, lean_object* v___y_421_){
_start:
{
lean_object* v_res_422_; 
v_res_422_ = l_Lean_Meta_Sym_Simp_SimpM_run___redArg(v_x_411_, v_methods_412_, v_config_413_, v_s_414_, v___y_415_, v___y_416_, v___y_417_, v___y_418_, v___y_419_, v___y_420_);
lean_dec(v___y_420_);
lean_dec_ref(v___y_419_);
lean_dec(v___y_418_);
lean_dec_ref(v___y_417_);
lean_dec(v___y_416_);
lean_dec_ref(v___y_415_);
return v_res_422_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_SimpM_run(lean_object* v_00_u03b1_423_, lean_object* v_x_424_, lean_object* v_methods_425_, lean_object* v_config_426_, lean_object* v_s_427_, lean_object* v___y_428_, lean_object* v___y_429_, lean_object* v___y_430_, lean_object* v___y_431_, lean_object* v___y_432_, lean_object* v___y_433_){
_start:
{
lean_object* v___x_435_; 
v___x_435_ = l_Lean_Meta_Sym_Simp_SimpM_run___redArg(v_x_424_, v_methods_425_, v_config_426_, v_s_427_, v___y_428_, v___y_429_, v___y_430_, v___y_431_, v___y_432_, v___y_433_);
return v___x_435_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_SimpM_run___boxed(lean_object* v_00_u03b1_436_, lean_object* v_x_437_, lean_object* v_methods_438_, lean_object* v_config_439_, lean_object* v_s_440_, lean_object* v___y_441_, lean_object* v___y_442_, lean_object* v___y_443_, lean_object* v___y_444_, lean_object* v___y_445_, lean_object* v___y_446_, lean_object* v___y_447_){
_start:
{
lean_object* v_res_448_; 
v_res_448_ = l_Lean_Meta_Sym_Simp_SimpM_run(v_00_u03b1_436_, v_x_437_, v_methods_438_, v_config_439_, v_s_440_, v___y_441_, v___y_442_, v___y_443_, v___y_444_, v___y_445_, v___y_446_);
lean_dec(v___y_446_);
lean_dec_ref(v___y_445_);
lean_dec(v___y_444_);
lean_dec_ref(v___y_443_);
lean_dec(v___y_442_);
lean_dec_ref(v___y_441_);
return v_res_448_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Simp_SimpM_run_x27___redArg___closed__0(void){
_start:
{
lean_object* v___x_449_; lean_object* v___x_450_; lean_object* v___x_451_; 
v___x_449_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_SimpM_run___redArg___closed__1, &l_Lean_Meta_Sym_Simp_SimpM_run___redArg___closed__1_once, _init_l_Lean_Meta_Sym_Simp_SimpM_run___redArg___closed__1);
v___x_450_ = lean_unsigned_to_nat(0u);
v___x_451_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_451_, 0, v___x_450_);
lean_ctor_set(v___x_451_, 1, v___x_449_);
lean_ctor_set(v___x_451_, 2, v___x_449_);
lean_ctor_set(v___x_451_, 3, v___x_449_);
return v___x_451_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_SimpM_run_x27___redArg(lean_object* v_x_452_, lean_object* v_methods_453_, lean_object* v_config_454_, lean_object* v___y_455_, lean_object* v___y_456_, lean_object* v___y_457_, lean_object* v___y_458_, lean_object* v___y_459_, lean_object* v___y_460_){
_start:
{
lean_object* v_lctx_462_; lean_object* v_decls_463_; lean_object* v_size_464_; lean_object* v___x_465_; lean_object* v___x_466_; lean_object* v___x_467_; lean_object* v___x_468_; lean_object* v___x_469_; 
v_lctx_462_ = lean_ctor_get(v___y_457_, 2);
v_decls_463_ = lean_ctor_get(v_lctx_462_, 1);
v_size_464_ = lean_ctor_get(v_decls_463_, 2);
v___x_465_ = lean_unsigned_to_nat(0u);
lean_inc(v_size_464_);
v___x_466_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_466_, 0, v_config_454_);
lean_ctor_set(v___x_466_, 1, v_size_464_);
lean_ctor_set(v___x_466_, 2, v___x_465_);
v___x_467_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_SimpM_run_x27___redArg___closed__0, &l_Lean_Meta_Sym_Simp_SimpM_run_x27___redArg___closed__0_once, _init_l_Lean_Meta_Sym_Simp_SimpM_run_x27___redArg___closed__0);
v___x_468_ = lean_st_mk_ref(v___x_467_);
lean_inc(v___y_460_);
lean_inc_ref(v___y_459_);
lean_inc(v___y_458_);
lean_inc_ref(v___y_457_);
lean_inc(v___y_456_);
lean_inc_ref(v___y_455_);
lean_inc(v___x_468_);
v___x_469_ = lean_apply_10(v_x_452_, v_methods_453_, v___x_466_, v___x_468_, v___y_455_, v___y_456_, v___y_457_, v___y_458_, v___y_459_, v___y_460_, lean_box(0));
if (lean_obj_tag(v___x_469_) == 0)
{
lean_object* v_a_470_; lean_object* v___x_472_; uint8_t v_isShared_473_; uint8_t v_isSharedCheck_478_; 
v_a_470_ = lean_ctor_get(v___x_469_, 0);
v_isSharedCheck_478_ = !lean_is_exclusive(v___x_469_);
if (v_isSharedCheck_478_ == 0)
{
v___x_472_ = v___x_469_;
v_isShared_473_ = v_isSharedCheck_478_;
goto v_resetjp_471_;
}
else
{
lean_inc(v_a_470_);
lean_dec(v___x_469_);
v___x_472_ = lean_box(0);
v_isShared_473_ = v_isSharedCheck_478_;
goto v_resetjp_471_;
}
v_resetjp_471_:
{
lean_object* v___x_474_; lean_object* v___x_476_; 
v___x_474_ = lean_st_ref_get(v___x_468_);
lean_dec(v___x_468_);
lean_dec(v___x_474_);
if (v_isShared_473_ == 0)
{
v___x_476_ = v___x_472_;
goto v_reusejp_475_;
}
else
{
lean_object* v_reuseFailAlloc_477_; 
v_reuseFailAlloc_477_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_477_, 0, v_a_470_);
v___x_476_ = v_reuseFailAlloc_477_;
goto v_reusejp_475_;
}
v_reusejp_475_:
{
return v___x_476_;
}
}
}
else
{
lean_dec(v___x_468_);
return v___x_469_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_SimpM_run_x27___redArg___boxed(lean_object* v_x_479_, lean_object* v_methods_480_, lean_object* v_config_481_, lean_object* v___y_482_, lean_object* v___y_483_, lean_object* v___y_484_, lean_object* v___y_485_, lean_object* v___y_486_, lean_object* v___y_487_, lean_object* v___y_488_){
_start:
{
lean_object* v_res_489_; 
v_res_489_ = l_Lean_Meta_Sym_Simp_SimpM_run_x27___redArg(v_x_479_, v_methods_480_, v_config_481_, v___y_482_, v___y_483_, v___y_484_, v___y_485_, v___y_486_, v___y_487_);
lean_dec(v___y_487_);
lean_dec_ref(v___y_486_);
lean_dec(v___y_485_);
lean_dec_ref(v___y_484_);
lean_dec(v___y_483_);
lean_dec_ref(v___y_482_);
return v_res_489_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_SimpM_run_x27(lean_object* v_00_u03b1_490_, lean_object* v_x_491_, lean_object* v_methods_492_, lean_object* v_config_493_, lean_object* v___y_494_, lean_object* v___y_495_, lean_object* v___y_496_, lean_object* v___y_497_, lean_object* v___y_498_, lean_object* v___y_499_){
_start:
{
lean_object* v___x_501_; 
v___x_501_ = l_Lean_Meta_Sym_Simp_SimpM_run_x27___redArg(v_x_491_, v_methods_492_, v_config_493_, v___y_494_, v___y_495_, v___y_496_, v___y_497_, v___y_498_, v___y_499_);
return v___x_501_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_SimpM_run_x27___boxed(lean_object* v_00_u03b1_502_, lean_object* v_x_503_, lean_object* v_methods_504_, lean_object* v_config_505_, lean_object* v___y_506_, lean_object* v___y_507_, lean_object* v___y_508_, lean_object* v___y_509_, lean_object* v___y_510_, lean_object* v___y_511_, lean_object* v___y_512_){
_start:
{
lean_object* v_res_513_; 
v_res_513_ = l_Lean_Meta_Sym_Simp_SimpM_run_x27(v_00_u03b1_502_, v_x_503_, v_methods_504_, v_config_505_, v___y_506_, v___y_507_, v___y_508_, v___y_509_, v___y_510_, v___y_511_);
lean_dec(v___y_511_);
lean_dec_ref(v___y_510_);
lean_dec(v___y_509_);
lean_dec_ref(v___y_508_);
lean_dec(v___y_507_);
lean_dec_ref(v___y_506_);
return v_res_513_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_simp___boxed(lean_object* v_a_00___x40___internal___hyg_525_, lean_object* v_r_526_, lean_object* v_r_527_, lean_object* v_r_528_, lean_object* v_r_529_, lean_object* v_r_530_, lean_object* v_r_531_, lean_object* v_r_532_, lean_object* v_r_533_, lean_object* v_r_534_, lean_object* v_a_00___x40___internal___hyg_535_){
_start:
{
lean_object* v_res_536_; 
v_res_536_ = lean_sym_simp(v_a_00___x40___internal___hyg_525_, v_r_526_, v_r_527_, v_r_528_, v_r_529_, v_r_530_, v_r_531_, v_r_532_, v_r_533_, v_r_534_);
return v_res_536_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_getConfig___redArg(lean_object* v___y_537_){
_start:
{
lean_object* v_config_539_; lean_object* v___x_540_; 
v_config_539_ = lean_ctor_get(v___y_537_, 0);
lean_inc_ref(v_config_539_);
v___x_540_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_540_, 0, v_config_539_);
return v___x_540_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_getConfig___redArg___boxed(lean_object* v___y_541_, lean_object* v___y_542_){
_start:
{
lean_object* v_res_543_; 
v_res_543_ = l_Lean_Meta_Sym_Simp_getConfig___redArg(v___y_541_);
lean_dec_ref(v___y_541_);
return v_res_543_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_getConfig(lean_object* v___y_544_, lean_object* v___y_545_, lean_object* v___y_546_, lean_object* v___y_547_, lean_object* v___y_548_, lean_object* v___y_549_, lean_object* v___y_550_, lean_object* v___y_551_, lean_object* v___y_552_){
_start:
{
lean_object* v___x_554_; 
v___x_554_ = l_Lean_Meta_Sym_Simp_getConfig___redArg(v___y_545_);
return v___x_554_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_getConfig___boxed(lean_object* v___y_555_, lean_object* v___y_556_, lean_object* v___y_557_, lean_object* v___y_558_, lean_object* v___y_559_, lean_object* v___y_560_, lean_object* v___y_561_, lean_object* v___y_562_, lean_object* v___y_563_, lean_object* v___y_564_){
_start:
{
lean_object* v_res_565_; 
v_res_565_ = l_Lean_Meta_Sym_Simp_getConfig(v___y_555_, v___y_556_, v___y_557_, v___y_558_, v___y_559_, v___y_560_, v___y_561_, v___y_562_, v___y_563_);
lean_dec(v___y_563_);
lean_dec_ref(v___y_562_);
lean_dec(v___y_561_);
lean_dec_ref(v___y_560_);
lean_dec(v___y_559_);
lean_dec_ref(v___y_558_);
lean_dec(v___y_557_);
lean_dec_ref(v___y_556_);
lean_dec(v___y_555_);
return v_res_565_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_pre(lean_object* v_e_566_, lean_object* v___y_567_, lean_object* v___y_568_, lean_object* v___y_569_, lean_object* v___y_570_, lean_object* v___y_571_, lean_object* v___y_572_, lean_object* v___y_573_, lean_object* v___y_574_, lean_object* v___y_575_){
_start:
{
lean_object* v_pre_577_; lean_object* v___x_578_; 
v_pre_577_ = lean_ctor_get(v___y_567_, 0);
lean_inc_ref(v_pre_577_);
lean_inc(v___y_575_);
lean_inc_ref(v___y_574_);
lean_inc(v___y_573_);
lean_inc_ref(v___y_572_);
lean_inc(v___y_571_);
lean_inc_ref(v___y_570_);
lean_inc(v___y_569_);
lean_inc_ref(v___y_568_);
lean_inc(v___y_567_);
v___x_578_ = lean_apply_11(v_pre_577_, v_e_566_, v___y_567_, v___y_568_, v___y_569_, v___y_570_, v___y_571_, v___y_572_, v___y_573_, v___y_574_, v___y_575_, lean_box(0));
return v___x_578_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_pre___boxed(lean_object* v_e_579_, lean_object* v___y_580_, lean_object* v___y_581_, lean_object* v___y_582_, lean_object* v___y_583_, lean_object* v___y_584_, lean_object* v___y_585_, lean_object* v___y_586_, lean_object* v___y_587_, lean_object* v___y_588_, lean_object* v___y_589_){
_start:
{
lean_object* v_res_590_; 
v_res_590_ = l_Lean_Meta_Sym_Simp_pre(v_e_579_, v___y_580_, v___y_581_, v___y_582_, v___y_583_, v___y_584_, v___y_585_, v___y_586_, v___y_587_, v___y_588_);
lean_dec(v___y_588_);
lean_dec_ref(v___y_587_);
lean_dec(v___y_586_);
lean_dec_ref(v___y_585_);
lean_dec(v___y_584_);
lean_dec_ref(v___y_583_);
lean_dec(v___y_582_);
lean_dec_ref(v___y_581_);
lean_dec(v___y_580_);
return v_res_590_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_post(lean_object* v_e_591_, lean_object* v___y_592_, lean_object* v___y_593_, lean_object* v___y_594_, lean_object* v___y_595_, lean_object* v___y_596_, lean_object* v___y_597_, lean_object* v___y_598_, lean_object* v___y_599_, lean_object* v___y_600_){
_start:
{
lean_object* v_post_602_; lean_object* v___x_603_; 
v_post_602_ = lean_ctor_get(v___y_592_, 1);
lean_inc_ref(v_post_602_);
lean_inc(v___y_600_);
lean_inc_ref(v___y_599_);
lean_inc(v___y_598_);
lean_inc_ref(v___y_597_);
lean_inc(v___y_596_);
lean_inc_ref(v___y_595_);
lean_inc(v___y_594_);
lean_inc_ref(v___y_593_);
lean_inc(v___y_592_);
v___x_603_ = lean_apply_11(v_post_602_, v_e_591_, v___y_592_, v___y_593_, v___y_594_, v___y_595_, v___y_596_, v___y_597_, v___y_598_, v___y_599_, v___y_600_, lean_box(0));
return v___x_603_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_post___boxed(lean_object* v_e_604_, lean_object* v___y_605_, lean_object* v___y_606_, lean_object* v___y_607_, lean_object* v___y_608_, lean_object* v___y_609_, lean_object* v___y_610_, lean_object* v___y_611_, lean_object* v___y_612_, lean_object* v___y_613_, lean_object* v___y_614_){
_start:
{
lean_object* v_res_615_; 
v_res_615_ = l_Lean_Meta_Sym_Simp_post(v_e_604_, v___y_605_, v___y_606_, v___y_607_, v___y_608_, v___y_609_, v___y_610_, v___y_611_, v___y_612_, v___y_613_);
lean_dec(v___y_613_);
lean_dec_ref(v___y_612_);
lean_dec(v___y_611_);
lean_dec_ref(v___y_610_);
lean_dec(v___y_609_);
lean_dec_ref(v___y_608_);
lean_dec(v___y_607_);
lean_dec_ref(v___y_606_);
lean_dec(v___y_605_);
return v_res_615_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_withoutModifyingCache___redArg___lam__0(lean_object* v___y_616_, lean_object* v_persistentCache_617_, lean_object* v_transientCache_618_, lean_object* v_funext_619_, lean_object* v_a_x3f_620_){
_start:
{
lean_object* v___x_622_; lean_object* v_numSteps_623_; lean_object* v___x_625_; uint8_t v_isShared_626_; uint8_t v_isSharedCheck_633_; 
v___x_622_ = lean_st_ref_take(v___y_616_);
v_numSteps_623_ = lean_ctor_get(v___x_622_, 0);
v_isSharedCheck_633_ = !lean_is_exclusive(v___x_622_);
if (v_isSharedCheck_633_ == 0)
{
lean_object* v_unused_634_; lean_object* v_unused_635_; lean_object* v_unused_636_; 
v_unused_634_ = lean_ctor_get(v___x_622_, 3);
lean_dec(v_unused_634_);
v_unused_635_ = lean_ctor_get(v___x_622_, 2);
lean_dec(v_unused_635_);
v_unused_636_ = lean_ctor_get(v___x_622_, 1);
lean_dec(v_unused_636_);
v___x_625_ = v___x_622_;
v_isShared_626_ = v_isSharedCheck_633_;
goto v_resetjp_624_;
}
else
{
lean_inc(v_numSteps_623_);
lean_dec(v___x_622_);
v___x_625_ = lean_box(0);
v_isShared_626_ = v_isSharedCheck_633_;
goto v_resetjp_624_;
}
v_resetjp_624_:
{
lean_object* v___x_627_; lean_object* v___x_629_; 
v___x_627_ = lean_box(0);
if (v_isShared_626_ == 0)
{
lean_ctor_set(v___x_625_, 3, v_funext_619_);
lean_ctor_set(v___x_625_, 2, v_transientCache_618_);
lean_ctor_set(v___x_625_, 1, v_persistentCache_617_);
v___x_629_ = v___x_625_;
goto v_reusejp_628_;
}
else
{
lean_object* v_reuseFailAlloc_632_; 
v_reuseFailAlloc_632_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_632_, 0, v_numSteps_623_);
lean_ctor_set(v_reuseFailAlloc_632_, 1, v_persistentCache_617_);
lean_ctor_set(v_reuseFailAlloc_632_, 2, v_transientCache_618_);
lean_ctor_set(v_reuseFailAlloc_632_, 3, v_funext_619_);
v___x_629_ = v_reuseFailAlloc_632_;
goto v_reusejp_628_;
}
v_reusejp_628_:
{
lean_object* v___x_630_; lean_object* v___x_631_; 
v___x_630_ = lean_st_ref_put(v___y_616_, v___x_629_);
v___x_631_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_631_, 0, v___x_627_);
return v___x_631_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_withoutModifyingCache___redArg___lam__0___boxed(lean_object* v___y_637_, lean_object* v_persistentCache_638_, lean_object* v_transientCache_639_, lean_object* v_funext_640_, lean_object* v_a_x3f_641_, lean_object* v___y_642_){
_start:
{
lean_object* v_res_643_; 
v_res_643_ = l_Lean_Meta_Sym_Simp_withoutModifyingCache___redArg___lam__0(v___y_637_, v_persistentCache_638_, v_transientCache_639_, v_funext_640_, v_a_x3f_641_);
lean_dec(v_a_x3f_641_);
lean_dec(v___y_637_);
return v_res_643_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_withoutModifyingCache___redArg(lean_object* v_k_644_, lean_object* v___y_645_, lean_object* v___y_646_, lean_object* v___y_647_, lean_object* v___y_648_, lean_object* v___y_649_, lean_object* v___y_650_, lean_object* v___y_651_, lean_object* v___y_652_, lean_object* v___y_653_){
_start:
{
lean_object* v___x_655_; lean_object* v_persistentCache_656_; lean_object* v___x_657_; lean_object* v_transientCache_658_; lean_object* v___x_659_; lean_object* v_funext_660_; lean_object* v___x_661_; 
v___x_655_ = lean_st_ref_get(v___y_647_);
v_persistentCache_656_ = lean_ctor_get(v___x_655_, 1);
lean_inc_ref(v_persistentCache_656_);
lean_dec(v___x_655_);
v___x_657_ = lean_st_ref_get(v___y_647_);
v_transientCache_658_ = lean_ctor_get(v___x_657_, 2);
lean_inc_ref(v_transientCache_658_);
lean_dec(v___x_657_);
v___x_659_ = lean_st_ref_get(v___y_647_);
v_funext_660_ = lean_ctor_get(v___x_659_, 3);
lean_inc_ref(v_funext_660_);
lean_dec(v___x_659_);
lean_inc(v___y_653_);
lean_inc_ref(v___y_652_);
lean_inc(v___y_651_);
lean_inc_ref(v___y_650_);
lean_inc(v___y_649_);
lean_inc_ref(v___y_648_);
lean_inc(v___y_647_);
lean_inc_ref(v___y_646_);
lean_inc(v___y_645_);
v___x_661_ = lean_apply_10(v_k_644_, v___y_645_, v___y_646_, v___y_647_, v___y_648_, v___y_649_, v___y_650_, v___y_651_, v___y_652_, v___y_653_, lean_box(0));
if (lean_obj_tag(v___x_661_) == 0)
{
lean_object* v_a_662_; lean_object* v___x_664_; uint8_t v_isShared_665_; uint8_t v_isSharedCheck_678_; 
v_a_662_ = lean_ctor_get(v___x_661_, 0);
v_isSharedCheck_678_ = !lean_is_exclusive(v___x_661_);
if (v_isSharedCheck_678_ == 0)
{
v___x_664_ = v___x_661_;
v_isShared_665_ = v_isSharedCheck_678_;
goto v_resetjp_663_;
}
else
{
lean_inc(v_a_662_);
lean_dec(v___x_661_);
v___x_664_ = lean_box(0);
v_isShared_665_ = v_isSharedCheck_678_;
goto v_resetjp_663_;
}
v_resetjp_663_:
{
lean_object* v___x_667_; 
lean_inc(v_a_662_);
if (v_isShared_665_ == 0)
{
lean_ctor_set_tag(v___x_664_, 1);
v___x_667_ = v___x_664_;
goto v_reusejp_666_;
}
else
{
lean_object* v_reuseFailAlloc_677_; 
v_reuseFailAlloc_677_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_677_, 0, v_a_662_);
v___x_667_ = v_reuseFailAlloc_677_;
goto v_reusejp_666_;
}
v_reusejp_666_:
{
lean_object* v___x_668_; lean_object* v___x_670_; uint8_t v_isShared_671_; uint8_t v_isSharedCheck_675_; 
v___x_668_ = l_Lean_Meta_Sym_Simp_withoutModifyingCache___redArg___lam__0(v___y_647_, v_persistentCache_656_, v_transientCache_658_, v_funext_660_, v___x_667_);
lean_dec_ref(v___x_667_);
v_isSharedCheck_675_ = !lean_is_exclusive(v___x_668_);
if (v_isSharedCheck_675_ == 0)
{
lean_object* v_unused_676_; 
v_unused_676_ = lean_ctor_get(v___x_668_, 0);
lean_dec(v_unused_676_);
v___x_670_ = v___x_668_;
v_isShared_671_ = v_isSharedCheck_675_;
goto v_resetjp_669_;
}
else
{
lean_dec(v___x_668_);
v___x_670_ = lean_box(0);
v_isShared_671_ = v_isSharedCheck_675_;
goto v_resetjp_669_;
}
v_resetjp_669_:
{
lean_object* v___x_673_; 
if (v_isShared_671_ == 0)
{
lean_ctor_set(v___x_670_, 0, v_a_662_);
v___x_673_ = v___x_670_;
goto v_reusejp_672_;
}
else
{
lean_object* v_reuseFailAlloc_674_; 
v_reuseFailAlloc_674_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_674_, 0, v_a_662_);
v___x_673_ = v_reuseFailAlloc_674_;
goto v_reusejp_672_;
}
v_reusejp_672_:
{
return v___x_673_;
}
}
}
}
}
else
{
lean_object* v_a_679_; lean_object* v___x_680_; lean_object* v___x_681_; lean_object* v___x_683_; uint8_t v_isShared_684_; uint8_t v_isSharedCheck_688_; 
v_a_679_ = lean_ctor_get(v___x_661_, 0);
lean_inc(v_a_679_);
lean_dec_ref_known(v___x_661_, 1);
v___x_680_ = lean_box(0);
v___x_681_ = l_Lean_Meta_Sym_Simp_withoutModifyingCache___redArg___lam__0(v___y_647_, v_persistentCache_656_, v_transientCache_658_, v_funext_660_, v___x_680_);
v_isSharedCheck_688_ = !lean_is_exclusive(v___x_681_);
if (v_isSharedCheck_688_ == 0)
{
lean_object* v_unused_689_; 
v_unused_689_ = lean_ctor_get(v___x_681_, 0);
lean_dec(v_unused_689_);
v___x_683_ = v___x_681_;
v_isShared_684_ = v_isSharedCheck_688_;
goto v_resetjp_682_;
}
else
{
lean_dec(v___x_681_);
v___x_683_ = lean_box(0);
v_isShared_684_ = v_isSharedCheck_688_;
goto v_resetjp_682_;
}
v_resetjp_682_:
{
lean_object* v___x_686_; 
if (v_isShared_684_ == 0)
{
lean_ctor_set_tag(v___x_683_, 1);
lean_ctor_set(v___x_683_, 0, v_a_679_);
v___x_686_ = v___x_683_;
goto v_reusejp_685_;
}
else
{
lean_object* v_reuseFailAlloc_687_; 
v_reuseFailAlloc_687_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_687_, 0, v_a_679_);
v___x_686_ = v_reuseFailAlloc_687_;
goto v_reusejp_685_;
}
v_reusejp_685_:
{
return v___x_686_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_withoutModifyingCache___redArg___boxed(lean_object* v_k_690_, lean_object* v___y_691_, lean_object* v___y_692_, lean_object* v___y_693_, lean_object* v___y_694_, lean_object* v___y_695_, lean_object* v___y_696_, lean_object* v___y_697_, lean_object* v___y_698_, lean_object* v___y_699_, lean_object* v___y_700_){
_start:
{
lean_object* v_res_701_; 
v_res_701_ = l_Lean_Meta_Sym_Simp_withoutModifyingCache___redArg(v_k_690_, v___y_691_, v___y_692_, v___y_693_, v___y_694_, v___y_695_, v___y_696_, v___y_697_, v___y_698_, v___y_699_);
lean_dec(v___y_699_);
lean_dec_ref(v___y_698_);
lean_dec(v___y_697_);
lean_dec_ref(v___y_696_);
lean_dec(v___y_695_);
lean_dec_ref(v___y_694_);
lean_dec(v___y_693_);
lean_dec_ref(v___y_692_);
lean_dec(v___y_691_);
return v_res_701_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_withoutModifyingCache(lean_object* v_00_u03b1_702_, lean_object* v_k_703_, lean_object* v___y_704_, lean_object* v___y_705_, lean_object* v___y_706_, lean_object* v___y_707_, lean_object* v___y_708_, lean_object* v___y_709_, lean_object* v___y_710_, lean_object* v___y_711_, lean_object* v___y_712_){
_start:
{
lean_object* v___x_714_; lean_object* v_persistentCache_715_; lean_object* v___x_716_; lean_object* v_transientCache_717_; lean_object* v___x_718_; lean_object* v_funext_719_; lean_object* v___x_720_; 
v___x_714_ = lean_st_ref_get(v___y_706_);
v_persistentCache_715_ = lean_ctor_get(v___x_714_, 1);
lean_inc_ref(v_persistentCache_715_);
lean_dec(v___x_714_);
v___x_716_ = lean_st_ref_get(v___y_706_);
v_transientCache_717_ = lean_ctor_get(v___x_716_, 2);
lean_inc_ref(v_transientCache_717_);
lean_dec(v___x_716_);
v___x_718_ = lean_st_ref_get(v___y_706_);
v_funext_719_ = lean_ctor_get(v___x_718_, 3);
lean_inc_ref(v_funext_719_);
lean_dec(v___x_718_);
lean_inc(v___y_712_);
lean_inc_ref(v___y_711_);
lean_inc(v___y_710_);
lean_inc_ref(v___y_709_);
lean_inc(v___y_708_);
lean_inc_ref(v___y_707_);
lean_inc(v___y_706_);
lean_inc_ref(v___y_705_);
lean_inc(v___y_704_);
v___x_720_ = lean_apply_10(v_k_703_, v___y_704_, v___y_705_, v___y_706_, v___y_707_, v___y_708_, v___y_709_, v___y_710_, v___y_711_, v___y_712_, lean_box(0));
if (lean_obj_tag(v___x_720_) == 0)
{
lean_object* v_a_721_; lean_object* v___x_723_; uint8_t v_isShared_724_; uint8_t v_isSharedCheck_737_; 
v_a_721_ = lean_ctor_get(v___x_720_, 0);
v_isSharedCheck_737_ = !lean_is_exclusive(v___x_720_);
if (v_isSharedCheck_737_ == 0)
{
v___x_723_ = v___x_720_;
v_isShared_724_ = v_isSharedCheck_737_;
goto v_resetjp_722_;
}
else
{
lean_inc(v_a_721_);
lean_dec(v___x_720_);
v___x_723_ = lean_box(0);
v_isShared_724_ = v_isSharedCheck_737_;
goto v_resetjp_722_;
}
v_resetjp_722_:
{
lean_object* v___x_726_; 
lean_inc(v_a_721_);
if (v_isShared_724_ == 0)
{
lean_ctor_set_tag(v___x_723_, 1);
v___x_726_ = v___x_723_;
goto v_reusejp_725_;
}
else
{
lean_object* v_reuseFailAlloc_736_; 
v_reuseFailAlloc_736_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_736_, 0, v_a_721_);
v___x_726_ = v_reuseFailAlloc_736_;
goto v_reusejp_725_;
}
v_reusejp_725_:
{
lean_object* v___x_727_; lean_object* v___x_729_; uint8_t v_isShared_730_; uint8_t v_isSharedCheck_734_; 
v___x_727_ = l_Lean_Meta_Sym_Simp_withoutModifyingCache___redArg___lam__0(v___y_706_, v_persistentCache_715_, v_transientCache_717_, v_funext_719_, v___x_726_);
lean_dec_ref(v___x_726_);
v_isSharedCheck_734_ = !lean_is_exclusive(v___x_727_);
if (v_isSharedCheck_734_ == 0)
{
lean_object* v_unused_735_; 
v_unused_735_ = lean_ctor_get(v___x_727_, 0);
lean_dec(v_unused_735_);
v___x_729_ = v___x_727_;
v_isShared_730_ = v_isSharedCheck_734_;
goto v_resetjp_728_;
}
else
{
lean_dec(v___x_727_);
v___x_729_ = lean_box(0);
v_isShared_730_ = v_isSharedCheck_734_;
goto v_resetjp_728_;
}
v_resetjp_728_:
{
lean_object* v___x_732_; 
if (v_isShared_730_ == 0)
{
lean_ctor_set(v___x_729_, 0, v_a_721_);
v___x_732_ = v___x_729_;
goto v_reusejp_731_;
}
else
{
lean_object* v_reuseFailAlloc_733_; 
v_reuseFailAlloc_733_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_733_, 0, v_a_721_);
v___x_732_ = v_reuseFailAlloc_733_;
goto v_reusejp_731_;
}
v_reusejp_731_:
{
return v___x_732_;
}
}
}
}
}
else
{
lean_object* v_a_738_; lean_object* v___x_739_; lean_object* v___x_740_; lean_object* v___x_742_; uint8_t v_isShared_743_; uint8_t v_isSharedCheck_747_; 
v_a_738_ = lean_ctor_get(v___x_720_, 0);
lean_inc(v_a_738_);
lean_dec_ref_known(v___x_720_, 1);
v___x_739_ = lean_box(0);
v___x_740_ = l_Lean_Meta_Sym_Simp_withoutModifyingCache___redArg___lam__0(v___y_706_, v_persistentCache_715_, v_transientCache_717_, v_funext_719_, v___x_739_);
v_isSharedCheck_747_ = !lean_is_exclusive(v___x_740_);
if (v_isSharedCheck_747_ == 0)
{
lean_object* v_unused_748_; 
v_unused_748_ = lean_ctor_get(v___x_740_, 0);
lean_dec(v_unused_748_);
v___x_742_ = v___x_740_;
v_isShared_743_ = v_isSharedCheck_747_;
goto v_resetjp_741_;
}
else
{
lean_dec(v___x_740_);
v___x_742_ = lean_box(0);
v_isShared_743_ = v_isSharedCheck_747_;
goto v_resetjp_741_;
}
v_resetjp_741_:
{
lean_object* v___x_745_; 
if (v_isShared_743_ == 0)
{
lean_ctor_set_tag(v___x_742_, 1);
lean_ctor_set(v___x_742_, 0, v_a_738_);
v___x_745_ = v___x_742_;
goto v_reusejp_744_;
}
else
{
lean_object* v_reuseFailAlloc_746_; 
v_reuseFailAlloc_746_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_746_, 0, v_a_738_);
v___x_745_ = v_reuseFailAlloc_746_;
goto v_reusejp_744_;
}
v_reusejp_744_:
{
return v___x_745_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_withoutModifyingCache___boxed(lean_object* v_00_u03b1_749_, lean_object* v_k_750_, lean_object* v___y_751_, lean_object* v___y_752_, lean_object* v___y_753_, lean_object* v___y_754_, lean_object* v___y_755_, lean_object* v___y_756_, lean_object* v___y_757_, lean_object* v___y_758_, lean_object* v___y_759_, lean_object* v___y_760_){
_start:
{
lean_object* v_res_761_; 
v_res_761_ = l_Lean_Meta_Sym_Simp_withoutModifyingCache(v_00_u03b1_749_, v_k_750_, v___y_751_, v___y_752_, v___y_753_, v___y_754_, v___y_755_, v___y_756_, v___y_757_, v___y_758_, v___y_759_);
lean_dec(v___y_759_);
lean_dec_ref(v___y_758_);
lean_dec(v___y_757_);
lean_dec_ref(v___y_756_);
lean_dec(v___y_755_);
lean_dec_ref(v___y_754_);
lean_dec(v___y_753_);
lean_dec_ref(v___y_752_);
lean_dec(v___y_751_);
return v_res_761_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_withFreshTransientCache___redArg___lam__0(lean_object* v___y_762_, lean_object* v_transientCache_763_, lean_object* v_funext_764_, lean_object* v_a_x3f_765_){
_start:
{
lean_object* v___x_767_; lean_object* v_numSteps_768_; lean_object* v_persistentCache_769_; lean_object* v___x_771_; uint8_t v_isShared_772_; uint8_t v_isSharedCheck_779_; 
v___x_767_ = lean_st_ref_take(v___y_762_);
v_numSteps_768_ = lean_ctor_get(v___x_767_, 0);
v_persistentCache_769_ = lean_ctor_get(v___x_767_, 1);
v_isSharedCheck_779_ = !lean_is_exclusive(v___x_767_);
if (v_isSharedCheck_779_ == 0)
{
lean_object* v_unused_780_; lean_object* v_unused_781_; 
v_unused_780_ = lean_ctor_get(v___x_767_, 3);
lean_dec(v_unused_780_);
v_unused_781_ = lean_ctor_get(v___x_767_, 2);
lean_dec(v_unused_781_);
v___x_771_ = v___x_767_;
v_isShared_772_ = v_isSharedCheck_779_;
goto v_resetjp_770_;
}
else
{
lean_inc(v_persistentCache_769_);
lean_inc(v_numSteps_768_);
lean_dec(v___x_767_);
v___x_771_ = lean_box(0);
v_isShared_772_ = v_isSharedCheck_779_;
goto v_resetjp_770_;
}
v_resetjp_770_:
{
lean_object* v___x_773_; lean_object* v___x_775_; 
v___x_773_ = lean_box(0);
if (v_isShared_772_ == 0)
{
lean_ctor_set(v___x_771_, 3, v_funext_764_);
lean_ctor_set(v___x_771_, 2, v_transientCache_763_);
v___x_775_ = v___x_771_;
goto v_reusejp_774_;
}
else
{
lean_object* v_reuseFailAlloc_778_; 
v_reuseFailAlloc_778_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_778_, 0, v_numSteps_768_);
lean_ctor_set(v_reuseFailAlloc_778_, 1, v_persistentCache_769_);
lean_ctor_set(v_reuseFailAlloc_778_, 2, v_transientCache_763_);
lean_ctor_set(v_reuseFailAlloc_778_, 3, v_funext_764_);
v___x_775_ = v_reuseFailAlloc_778_;
goto v_reusejp_774_;
}
v_reusejp_774_:
{
lean_object* v___x_776_; lean_object* v___x_777_; 
v___x_776_ = lean_st_ref_put(v___y_762_, v___x_775_);
v___x_777_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_777_, 0, v___x_773_);
return v___x_777_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_withFreshTransientCache___redArg___lam__0___boxed(lean_object* v___y_782_, lean_object* v_transientCache_783_, lean_object* v_funext_784_, lean_object* v_a_x3f_785_, lean_object* v___y_786_){
_start:
{
lean_object* v_res_787_; 
v_res_787_ = l_Lean_Meta_Sym_Simp_withFreshTransientCache___redArg___lam__0(v___y_782_, v_transientCache_783_, v_funext_784_, v_a_x3f_785_);
lean_dec(v_a_x3f_785_);
lean_dec(v___y_782_);
return v_res_787_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_withFreshTransientCache___redArg(lean_object* v_k_788_, lean_object* v___y_789_, lean_object* v___y_790_, lean_object* v___y_791_, lean_object* v___y_792_, lean_object* v___y_793_, lean_object* v___y_794_, lean_object* v___y_795_, lean_object* v___y_796_, lean_object* v___y_797_){
_start:
{
lean_object* v___x_799_; lean_object* v_transientCache_800_; lean_object* v___x_801_; lean_object* v_funext_802_; lean_object* v___x_803_; 
v___x_799_ = lean_st_ref_get(v___y_791_);
v_transientCache_800_ = lean_ctor_get(v___x_799_, 2);
lean_inc_ref(v_transientCache_800_);
lean_dec(v___x_799_);
v___x_801_ = lean_st_ref_get(v___y_791_);
v_funext_802_ = lean_ctor_get(v___x_801_, 3);
lean_inc_ref(v_funext_802_);
lean_dec(v___x_801_);
lean_inc(v___y_797_);
lean_inc_ref(v___y_796_);
lean_inc(v___y_795_);
lean_inc_ref(v___y_794_);
lean_inc(v___y_793_);
lean_inc_ref(v___y_792_);
lean_inc(v___y_791_);
lean_inc_ref(v___y_790_);
lean_inc(v___y_789_);
v___x_803_ = lean_apply_10(v_k_788_, v___y_789_, v___y_790_, v___y_791_, v___y_792_, v___y_793_, v___y_794_, v___y_795_, v___y_796_, v___y_797_, lean_box(0));
if (lean_obj_tag(v___x_803_) == 0)
{
lean_object* v_a_804_; lean_object* v___x_806_; uint8_t v_isShared_807_; uint8_t v_isSharedCheck_820_; 
v_a_804_ = lean_ctor_get(v___x_803_, 0);
v_isSharedCheck_820_ = !lean_is_exclusive(v___x_803_);
if (v_isSharedCheck_820_ == 0)
{
v___x_806_ = v___x_803_;
v_isShared_807_ = v_isSharedCheck_820_;
goto v_resetjp_805_;
}
else
{
lean_inc(v_a_804_);
lean_dec(v___x_803_);
v___x_806_ = lean_box(0);
v_isShared_807_ = v_isSharedCheck_820_;
goto v_resetjp_805_;
}
v_resetjp_805_:
{
lean_object* v___x_809_; 
lean_inc(v_a_804_);
if (v_isShared_807_ == 0)
{
lean_ctor_set_tag(v___x_806_, 1);
v___x_809_ = v___x_806_;
goto v_reusejp_808_;
}
else
{
lean_object* v_reuseFailAlloc_819_; 
v_reuseFailAlloc_819_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_819_, 0, v_a_804_);
v___x_809_ = v_reuseFailAlloc_819_;
goto v_reusejp_808_;
}
v_reusejp_808_:
{
lean_object* v___x_810_; lean_object* v___x_812_; uint8_t v_isShared_813_; uint8_t v_isSharedCheck_817_; 
v___x_810_ = l_Lean_Meta_Sym_Simp_withFreshTransientCache___redArg___lam__0(v___y_791_, v_transientCache_800_, v_funext_802_, v___x_809_);
lean_dec_ref(v___x_809_);
v_isSharedCheck_817_ = !lean_is_exclusive(v___x_810_);
if (v_isSharedCheck_817_ == 0)
{
lean_object* v_unused_818_; 
v_unused_818_ = lean_ctor_get(v___x_810_, 0);
lean_dec(v_unused_818_);
v___x_812_ = v___x_810_;
v_isShared_813_ = v_isSharedCheck_817_;
goto v_resetjp_811_;
}
else
{
lean_dec(v___x_810_);
v___x_812_ = lean_box(0);
v_isShared_813_ = v_isSharedCheck_817_;
goto v_resetjp_811_;
}
v_resetjp_811_:
{
lean_object* v___x_815_; 
if (v_isShared_813_ == 0)
{
lean_ctor_set(v___x_812_, 0, v_a_804_);
v___x_815_ = v___x_812_;
goto v_reusejp_814_;
}
else
{
lean_object* v_reuseFailAlloc_816_; 
v_reuseFailAlloc_816_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_816_, 0, v_a_804_);
v___x_815_ = v_reuseFailAlloc_816_;
goto v_reusejp_814_;
}
v_reusejp_814_:
{
return v___x_815_;
}
}
}
}
}
else
{
lean_object* v_a_821_; lean_object* v___x_822_; lean_object* v___x_823_; lean_object* v___x_825_; uint8_t v_isShared_826_; uint8_t v_isSharedCheck_830_; 
v_a_821_ = lean_ctor_get(v___x_803_, 0);
lean_inc(v_a_821_);
lean_dec_ref_known(v___x_803_, 1);
v___x_822_ = lean_box(0);
v___x_823_ = l_Lean_Meta_Sym_Simp_withFreshTransientCache___redArg___lam__0(v___y_791_, v_transientCache_800_, v_funext_802_, v___x_822_);
v_isSharedCheck_830_ = !lean_is_exclusive(v___x_823_);
if (v_isSharedCheck_830_ == 0)
{
lean_object* v_unused_831_; 
v_unused_831_ = lean_ctor_get(v___x_823_, 0);
lean_dec(v_unused_831_);
v___x_825_ = v___x_823_;
v_isShared_826_ = v_isSharedCheck_830_;
goto v_resetjp_824_;
}
else
{
lean_dec(v___x_823_);
v___x_825_ = lean_box(0);
v_isShared_826_ = v_isSharedCheck_830_;
goto v_resetjp_824_;
}
v_resetjp_824_:
{
lean_object* v___x_828_; 
if (v_isShared_826_ == 0)
{
lean_ctor_set_tag(v___x_825_, 1);
lean_ctor_set(v___x_825_, 0, v_a_821_);
v___x_828_ = v___x_825_;
goto v_reusejp_827_;
}
else
{
lean_object* v_reuseFailAlloc_829_; 
v_reuseFailAlloc_829_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_829_, 0, v_a_821_);
v___x_828_ = v_reuseFailAlloc_829_;
goto v_reusejp_827_;
}
v_reusejp_827_:
{
return v___x_828_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_withFreshTransientCache___redArg___boxed(lean_object* v_k_832_, lean_object* v___y_833_, lean_object* v___y_834_, lean_object* v___y_835_, lean_object* v___y_836_, lean_object* v___y_837_, lean_object* v___y_838_, lean_object* v___y_839_, lean_object* v___y_840_, lean_object* v___y_841_, lean_object* v___y_842_){
_start:
{
lean_object* v_res_843_; 
v_res_843_ = l_Lean_Meta_Sym_Simp_withFreshTransientCache___redArg(v_k_832_, v___y_833_, v___y_834_, v___y_835_, v___y_836_, v___y_837_, v___y_838_, v___y_839_, v___y_840_, v___y_841_);
lean_dec(v___y_841_);
lean_dec_ref(v___y_840_);
lean_dec(v___y_839_);
lean_dec_ref(v___y_838_);
lean_dec(v___y_837_);
lean_dec_ref(v___y_836_);
lean_dec(v___y_835_);
lean_dec_ref(v___y_834_);
lean_dec(v___y_833_);
return v_res_843_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_withFreshTransientCache(lean_object* v_00_u03b1_844_, lean_object* v_k_845_, lean_object* v___y_846_, lean_object* v___y_847_, lean_object* v___y_848_, lean_object* v___y_849_, lean_object* v___y_850_, lean_object* v___y_851_, lean_object* v___y_852_, lean_object* v___y_853_, lean_object* v___y_854_){
_start:
{
lean_object* v___x_856_; lean_object* v_transientCache_857_; lean_object* v___x_858_; lean_object* v_funext_859_; lean_object* v___x_860_; 
v___x_856_ = lean_st_ref_get(v___y_848_);
v_transientCache_857_ = lean_ctor_get(v___x_856_, 2);
lean_inc_ref(v_transientCache_857_);
lean_dec(v___x_856_);
v___x_858_ = lean_st_ref_get(v___y_848_);
v_funext_859_ = lean_ctor_get(v___x_858_, 3);
lean_inc_ref(v_funext_859_);
lean_dec(v___x_858_);
lean_inc(v___y_854_);
lean_inc_ref(v___y_853_);
lean_inc(v___y_852_);
lean_inc_ref(v___y_851_);
lean_inc(v___y_850_);
lean_inc_ref(v___y_849_);
lean_inc(v___y_848_);
lean_inc_ref(v___y_847_);
lean_inc(v___y_846_);
v___x_860_ = lean_apply_10(v_k_845_, v___y_846_, v___y_847_, v___y_848_, v___y_849_, v___y_850_, v___y_851_, v___y_852_, v___y_853_, v___y_854_, lean_box(0));
if (lean_obj_tag(v___x_860_) == 0)
{
lean_object* v_a_861_; lean_object* v___x_863_; uint8_t v_isShared_864_; uint8_t v_isSharedCheck_877_; 
v_a_861_ = lean_ctor_get(v___x_860_, 0);
v_isSharedCheck_877_ = !lean_is_exclusive(v___x_860_);
if (v_isSharedCheck_877_ == 0)
{
v___x_863_ = v___x_860_;
v_isShared_864_ = v_isSharedCheck_877_;
goto v_resetjp_862_;
}
else
{
lean_inc(v_a_861_);
lean_dec(v___x_860_);
v___x_863_ = lean_box(0);
v_isShared_864_ = v_isSharedCheck_877_;
goto v_resetjp_862_;
}
v_resetjp_862_:
{
lean_object* v___x_866_; 
lean_inc(v_a_861_);
if (v_isShared_864_ == 0)
{
lean_ctor_set_tag(v___x_863_, 1);
v___x_866_ = v___x_863_;
goto v_reusejp_865_;
}
else
{
lean_object* v_reuseFailAlloc_876_; 
v_reuseFailAlloc_876_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_876_, 0, v_a_861_);
v___x_866_ = v_reuseFailAlloc_876_;
goto v_reusejp_865_;
}
v_reusejp_865_:
{
lean_object* v___x_867_; lean_object* v___x_869_; uint8_t v_isShared_870_; uint8_t v_isSharedCheck_874_; 
v___x_867_ = l_Lean_Meta_Sym_Simp_withFreshTransientCache___redArg___lam__0(v___y_848_, v_transientCache_857_, v_funext_859_, v___x_866_);
lean_dec_ref(v___x_866_);
v_isSharedCheck_874_ = !lean_is_exclusive(v___x_867_);
if (v_isSharedCheck_874_ == 0)
{
lean_object* v_unused_875_; 
v_unused_875_ = lean_ctor_get(v___x_867_, 0);
lean_dec(v_unused_875_);
v___x_869_ = v___x_867_;
v_isShared_870_ = v_isSharedCheck_874_;
goto v_resetjp_868_;
}
else
{
lean_dec(v___x_867_);
v___x_869_ = lean_box(0);
v_isShared_870_ = v_isSharedCheck_874_;
goto v_resetjp_868_;
}
v_resetjp_868_:
{
lean_object* v___x_872_; 
if (v_isShared_870_ == 0)
{
lean_ctor_set(v___x_869_, 0, v_a_861_);
v___x_872_ = v___x_869_;
goto v_reusejp_871_;
}
else
{
lean_object* v_reuseFailAlloc_873_; 
v_reuseFailAlloc_873_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_873_, 0, v_a_861_);
v___x_872_ = v_reuseFailAlloc_873_;
goto v_reusejp_871_;
}
v_reusejp_871_:
{
return v___x_872_;
}
}
}
}
}
else
{
lean_object* v_a_878_; lean_object* v___x_879_; lean_object* v___x_880_; lean_object* v___x_882_; uint8_t v_isShared_883_; uint8_t v_isSharedCheck_887_; 
v_a_878_ = lean_ctor_get(v___x_860_, 0);
lean_inc(v_a_878_);
lean_dec_ref_known(v___x_860_, 1);
v___x_879_ = lean_box(0);
v___x_880_ = l_Lean_Meta_Sym_Simp_withFreshTransientCache___redArg___lam__0(v___y_848_, v_transientCache_857_, v_funext_859_, v___x_879_);
v_isSharedCheck_887_ = !lean_is_exclusive(v___x_880_);
if (v_isSharedCheck_887_ == 0)
{
lean_object* v_unused_888_; 
v_unused_888_ = lean_ctor_get(v___x_880_, 0);
lean_dec(v_unused_888_);
v___x_882_ = v___x_880_;
v_isShared_883_ = v_isSharedCheck_887_;
goto v_resetjp_881_;
}
else
{
lean_dec(v___x_880_);
v___x_882_ = lean_box(0);
v_isShared_883_ = v_isSharedCheck_887_;
goto v_resetjp_881_;
}
v_resetjp_881_:
{
lean_object* v___x_885_; 
if (v_isShared_883_ == 0)
{
lean_ctor_set_tag(v___x_882_, 1);
lean_ctor_set(v___x_882_, 0, v_a_878_);
v___x_885_ = v___x_882_;
goto v_reusejp_884_;
}
else
{
lean_object* v_reuseFailAlloc_886_; 
v_reuseFailAlloc_886_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_886_, 0, v_a_878_);
v___x_885_ = v_reuseFailAlloc_886_;
goto v_reusejp_884_;
}
v_reusejp_884_:
{
return v___x_885_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_withFreshTransientCache___boxed(lean_object* v_00_u03b1_889_, lean_object* v_k_890_, lean_object* v___y_891_, lean_object* v___y_892_, lean_object* v___y_893_, lean_object* v___y_894_, lean_object* v___y_895_, lean_object* v___y_896_, lean_object* v___y_897_, lean_object* v___y_898_, lean_object* v___y_899_, lean_object* v___y_900_){
_start:
{
lean_object* v_res_901_; 
v_res_901_ = l_Lean_Meta_Sym_Simp_withFreshTransientCache(v_00_u03b1_889_, v_k_890_, v___y_891_, v___y_892_, v___y_893_, v___y_894_, v___y_895_, v___y_896_, v___y_897_, v___y_898_, v___y_899_);
lean_dec(v___y_899_);
lean_dec_ref(v___y_898_);
lean_dec(v___y_897_);
lean_dec_ref(v___y_896_);
lean_dec(v___y_895_);
lean_dec_ref(v___y_894_);
lean_dec(v___y_893_);
lean_dec_ref(v___y_892_);
lean_dec(v___y_891_);
return v_res_901_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_simp(lean_object* v_e_902_, lean_object* v_methods_903_, lean_object* v_config_904_, lean_object* v___y_905_, lean_object* v___y_906_, lean_object* v___y_907_, lean_object* v___y_908_, lean_object* v___y_909_, lean_object* v___y_910_){
_start:
{
lean_object* v___x_912_; lean_object* v___x_913_; 
v___x_912_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Simp_simp___boxed), 11, 1);
lean_closure_set(v___x_912_, 0, v_e_902_);
v___x_913_ = l_Lean_Meta_Sym_Simp_SimpM_run_x27___redArg(v___x_912_, v_methods_903_, v_config_904_, v___y_905_, v___y_906_, v___y_907_, v___y_908_, v___y_909_, v___y_910_);
return v___x_913_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_simp___boxed(lean_object* v_e_914_, lean_object* v_methods_915_, lean_object* v_config_916_, lean_object* v___y_917_, lean_object* v___y_918_, lean_object* v___y_919_, lean_object* v___y_920_, lean_object* v___y_921_, lean_object* v___y_922_, lean_object* v___y_923_){
_start:
{
lean_object* v_res_924_; 
v_res_924_ = l_Lean_Meta_Sym_simp(v_e_914_, v_methods_915_, v_config_916_, v___y_917_, v___y_918_, v___y_919_, v___y_920_, v___y_921_, v___y_922_);
lean_dec(v___y_922_);
lean_dec_ref(v___y_921_);
lean_dec(v___y_920_);
lean_dec_ref(v___y_919_);
lean_dec(v___y_918_);
lean_dec_ref(v___y_917_);
return v_res_924_;
}
}
lean_object* runtime_initialize_Lean_Meta_Sym_Pattern(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Sym_Simp_SimpM(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Meta_Sym_Pattern(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Meta_Sym_Simp_MethodsRefPointed = _init_l_Lean_Meta_Sym_Simp_MethodsRefPointed();
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Sym_Simp_SimpM(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Sym_Pattern(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Sym_Simp_SimpM(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Sym_Pattern(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_Simp_SimpM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Sym_Simp_SimpM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Sym_Simp_SimpM(builtin);
}
#ifdef __cplusplus
}
#endif
