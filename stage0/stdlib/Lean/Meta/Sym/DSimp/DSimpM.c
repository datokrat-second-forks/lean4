// Lean compiler output
// Module: Lean.Meta.Sym.DSimp.DSimpM
// Imports: public import Lean.Meta.Sym.SymM import Lean.Meta.Sym.ExprPtr
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
extern lean_object* l_Lean_instMonadExceptOfExceptionCoreM;
lean_object* l_StateRefT_x27_instMonadExceptOf___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateRefT_x27_instMonadExceptOf___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instMonadExceptOf___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instMonadExceptOf___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Core_instMonadQuotationCoreM;
lean_object* l_StateRefT_x27_lift___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateRefT_x27_instMonadFunctor___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_instMonadQuotationOfMonadFunctorOfMonadLift___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instMonadLift___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instMonadFunctor___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg___lam__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg___lam__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg___lam__4___boxed(lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg___lam__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateRefT_x27_instMonad___redArg(lean_object*);
lean_object* l_Lean_Core_instMonadCoreM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Core_instMonadCoreM___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instFunctorOfMonad___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instFunctorOfMonad___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instMonadMetaM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instMonadMetaM___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instMonad___redArg(lean_object*);
extern lean_object* l_Lean_Meta_instAddMessageContextMetaM;
lean_object* l_Lean_instAddMessageContextOfMonadLift___redArg___lam__0(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_instAddErrorMessageContextOfAddMessageContextOfMonad___redArg(lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_throwError___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
lean_object* lean_st_mk_ref(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
static const lean_ctor_object l_Lean_Meta_Sym_DSimp_instInhabitedConfig_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 8, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(100000) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lean_Meta_Sym_DSimp_instInhabitedConfig_default___closed__0 = (const lean_object*)&l_Lean_Meta_Sym_DSimp_instInhabitedConfig_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_Sym_DSimp_instInhabitedConfig_default = (const lean_object*)&l_Lean_Meta_Sym_DSimp_instInhabitedConfig_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_Sym_DSimp_instInhabitedConfig = (const lean_object*)&l_Lean_Meta_Sym_DSimp_instInhabitedConfig_default___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_DSimp_Result_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_DSimp_Result_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_DSimp_Result_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_DSimp_Result_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_DSimp_Result_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_DSimp_Result_rfl_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_DSimp_Result_rfl_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_DSimp_Result_step_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_DSimp_Result_step_elim(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Meta_Sym_DSimp_instInhabitedResult_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 0}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lean_Meta_Sym_DSimp_instInhabitedResult_default___closed__0 = (const lean_object*)&l_Lean_Meta_Sym_DSimp_instInhabitedResult_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_Sym_DSimp_instInhabitedResult_default = (const lean_object*)&l_Lean_Meta_Sym_DSimp_instInhabitedResult_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_Sym_DSimp_instInhabitedResult = (const lean_object*)&l_Lean_Meta_Sym_DSimp_instInhabitedResult_default___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_DSimp_MethodsRefPointed;
static const lean_closure_object l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__0 = (const lean_object*)&l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__0_value;
static const lean_closure_object l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__1___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__1 = (const lean_object*)&l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__1_value;
static const lean_closure_object l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__2___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__2 = (const lean_object*)&l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__2_value;
static const lean_closure_object l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__3___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__3 = (const lean_object*)&l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__3_value;
static const lean_closure_object l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__4___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__4 = (const lean_object*)&l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__4_value;
static const lean_closure_object l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__6___boxed, .m_arity = 7, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__4_value),((lean_object*)&l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__3_value)} };
static const lean_object* l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__5 = (const lean_object*)&l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__5_value;
static const lean_closure_object l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__9___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__3_value)} };
static const lean_object* l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__6 = (const lean_object*)&l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__6_value;
static const lean_closure_object l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__10___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__7 = (const lean_object*)&l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__7_value;
static const lean_ctor_object l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__0_value),((lean_object*)&l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__1_value)}};
static const lean_object* l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__8 = (const lean_object*)&l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__8_value;
static const lean_ctor_object l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*5 + 0, .m_other = 5, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__8_value),((lean_object*)&l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__2_value),((lean_object*)&l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__5_value),((lean_object*)&l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__6_value),((lean_object*)&l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__7_value)}};
static const lean_object* l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__9 = (const lean_object*)&l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__9_value;
static const lean_ctor_object l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__9_value),((lean_object*)&l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__3_value)}};
static const lean_object* l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__10 = (const lean_object*)&l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__10_value;
static lean_once_cell_t l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__11;
static const lean_closure_object l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__12 = (const lean_object*)&l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__12_value;
static const lean_closure_object l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__1___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__13 = (const lean_object*)&l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__13_value;
static const lean_closure_object l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instMonadMetaM___lam__0___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__14 = (const lean_object*)&l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__14_value;
static const lean_closure_object l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instMonadMetaM___lam__1___boxed, .m_arity = 9, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__15 = (const lean_object*)&l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__15_value;
static lean_once_cell_t l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__16;
static lean_once_cell_t l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__17;
static lean_once_cell_t l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__18;
static lean_once_cell_t l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__19;
static lean_once_cell_t l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__20_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__20;
static lean_once_cell_t l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__21;
static lean_once_cell_t l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__22_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__22;
static lean_once_cell_t l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__23_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__23;
static lean_once_cell_t l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__24_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__24;
static lean_once_cell_t l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__25_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__25;
static lean_once_cell_t l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__26_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__26;
static lean_once_cell_t l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__27_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__27;
static lean_once_cell_t l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__28_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__28;
static lean_once_cell_t l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__29_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__29;
static lean_once_cell_t l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__30_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__30;
static lean_once_cell_t l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__31_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__31;
static lean_once_cell_t l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__32_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__32;
static lean_once_cell_t l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__33_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__33;
static lean_once_cell_t l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__34_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__34;
static lean_once_cell_t l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__35_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__35;
static lean_once_cell_t l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__36_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__36;
static const lean_closure_object l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__37_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_ReaderT_instMonadFunctor___redArg___lam__0___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__37 = (const lean_object*)&l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__37_value;
static const lean_closure_object l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__38_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_ReaderT_instMonadLift___redArg___lam__0___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__38 = (const lean_object*)&l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__38_value;
static const lean_closure_object l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__39_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_StateRefT_x27_instMonadFunctor___redArg___lam__0___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__39 = (const lean_object*)&l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__39_value;
static const lean_closure_object l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__40_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*3, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_StateRefT_x27_lift___boxed, .m_arity = 6, .m_num_fixed = 3, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__40 = (const lean_object*)&l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__40_value;
static lean_once_cell_t l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__41_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__41;
static lean_once_cell_t l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__42_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__42;
static lean_once_cell_t l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__43_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__43;
static lean_once_cell_t l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__44_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__44;
static lean_once_cell_t l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__45_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__45;
static lean_once_cell_t l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__46_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__46;
static lean_once_cell_t l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__47_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__47;
static lean_once_cell_t l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__48_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__48;
static lean_once_cell_t l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__49_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__49;
static lean_once_cell_t l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__50_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__50;
static lean_once_cell_t l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__51_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__51;
static lean_once_cell_t l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__52_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__52;
static const lean_string_object l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__53_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "<default>"};
static const lean_object* l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__53 = (const lean_object*)&l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__53_value;
static lean_once_cell_t l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__54_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__54;
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg();
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___boxed(lean_object*);
static lean_once_cell_t l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___closed__0;
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_DSimp_instInhabitedMethods_default___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_DSimp_instInhabitedMethods_default___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Meta_Sym_DSimp_instInhabitedMethods_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Sym_DSimp_instInhabitedMethods_default___lam__0___boxed, .m_arity = 11, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Sym_DSimp_instInhabitedMethods_default___closed__0 = (const lean_object*)&l_Lean_Meta_Sym_DSimp_instInhabitedMethods_default___closed__0_value;
static const lean_ctor_object l_Lean_Meta_Sym_DSimp_instInhabitedMethods_default___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Meta_Sym_DSimp_instInhabitedMethods_default___closed__0_value),((lean_object*)&l_Lean_Meta_Sym_DSimp_instInhabitedMethods_default___closed__0_value)}};
static const lean_object* l_Lean_Meta_Sym_DSimp_instInhabitedMethods_default___closed__1 = (const lean_object*)&l_Lean_Meta_Sym_DSimp_instInhabitedMethods_default___closed__1_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_Sym_DSimp_instInhabitedMethods_default = (const lean_object*)&l_Lean_Meta_Sym_DSimp_instInhabitedMethods_default___closed__1_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_Sym_DSimp_instInhabitedMethods = (const lean_object*)&l_Lean_Meta_Sym_DSimp_instInhabitedMethods_default___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_DSimp_Methods_toMethodsRefImpl(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_DSimp_Methods_toMethodsRefImpl___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_DSimp_MethodsRef_toMethodsImpl(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_DSimp_MethodsRef_toMethodsImpl___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_DSimp_getMethods___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_DSimp_getMethods___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_DSimp_getMethods(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_DSimp_getMethods___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_DSimp_DSimpM_run___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_DSimp_DSimpM_run___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_DSimp_DSimpM_run(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_DSimp_DSimpM_run___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_Sym_DSimp_DSimpM_run_x27___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_DSimp_DSimpM_run_x27___redArg___closed__0;
static lean_once_cell_t l_Lean_Meta_Sym_DSimp_DSimpM_run_x27___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_DSimp_DSimpM_run_x27___redArg___closed__1;
static lean_once_cell_t l_Lean_Meta_Sym_DSimp_DSimpM_run_x27___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_DSimp_DSimpM_run_x27___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_DSimp_DSimpM_run_x27___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_DSimp_DSimpM_run_x27___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_DSimp_DSimpM_run_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_DSimp_DSimpM_run_x27___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_sym_dsimp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_DSimp_dsimp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_DSimp_getConfig___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_DSimp_getConfig___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_DSimp_getConfig(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_DSimp_getConfig___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_DSimp_pre(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_DSimp_pre___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_DSimp_post(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_DSimp_post___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_dsimp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_dsimp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_DSimp_Result_ctorIdx(lean_object* v_x_6_){
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
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_DSimp_Result_ctorIdx___boxed(lean_object* v_x_9_){
_start:
{
lean_object* v_res_10_; 
v_res_10_ = l_Lean_Meta_Sym_DSimp_Result_ctorIdx(v_x_9_);
lean_dec_ref(v_x_9_);
return v_res_10_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_DSimp_Result_ctorElim___redArg(lean_object* v_t_11_, lean_object* v_k_12_){
_start:
{
if (lean_obj_tag(v_t_11_) == 0)
{
uint8_t v_done_13_; lean_object* v___x_14_; lean_object* v___x_15_; 
v_done_13_ = lean_ctor_get_uint8(v_t_11_, 0);
lean_dec_ref_known(v_t_11_, 0);
v___x_14_ = lean_box(v_done_13_);
v___x_15_ = lean_apply_1(v_k_12_, v___x_14_);
return v___x_15_;
}
else
{
lean_object* v_e_x27_16_; uint8_t v_done_17_; lean_object* v___x_18_; lean_object* v___x_19_; 
v_e_x27_16_ = lean_ctor_get(v_t_11_, 0);
lean_inc_ref(v_e_x27_16_);
v_done_17_ = lean_ctor_get_uint8(v_t_11_, sizeof(void*)*1);
lean_dec_ref_known(v_t_11_, 1);
v___x_18_ = lean_box(v_done_17_);
v___x_19_ = lean_apply_2(v_k_12_, v_e_x27_16_, v___x_18_);
return v___x_19_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_DSimp_Result_ctorElim(lean_object* v_motive_20_, lean_object* v_ctorIdx_21_, lean_object* v_t_22_, lean_object* v_h_23_, lean_object* v_k_24_){
_start:
{
lean_object* v___x_25_; 
v___x_25_ = l_Lean_Meta_Sym_DSimp_Result_ctorElim___redArg(v_t_22_, v_k_24_);
return v___x_25_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_DSimp_Result_ctorElim___boxed(lean_object* v_motive_26_, lean_object* v_ctorIdx_27_, lean_object* v_t_28_, lean_object* v_h_29_, lean_object* v_k_30_){
_start:
{
lean_object* v_res_31_; 
v_res_31_ = l_Lean_Meta_Sym_DSimp_Result_ctorElim(v_motive_26_, v_ctorIdx_27_, v_t_28_, v_h_29_, v_k_30_);
lean_dec(v_ctorIdx_27_);
return v_res_31_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_DSimp_Result_rfl_elim___redArg(lean_object* v_t_32_, lean_object* v_rfl_33_){
_start:
{
lean_object* v___x_34_; 
v___x_34_ = l_Lean_Meta_Sym_DSimp_Result_ctorElim___redArg(v_t_32_, v_rfl_33_);
return v___x_34_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_DSimp_Result_rfl_elim(lean_object* v_motive_35_, lean_object* v_t_36_, lean_object* v_h_37_, lean_object* v_rfl_38_){
_start:
{
lean_object* v___x_39_; 
v___x_39_ = l_Lean_Meta_Sym_DSimp_Result_ctorElim___redArg(v_t_36_, v_rfl_38_);
return v___x_39_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_DSimp_Result_step_elim___redArg(lean_object* v_t_40_, lean_object* v_step_41_){
_start:
{
lean_object* v___x_42_; 
v___x_42_ = l_Lean_Meta_Sym_DSimp_Result_ctorElim___redArg(v_t_40_, v_step_41_);
return v___x_42_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_DSimp_Result_step_elim(lean_object* v_motive_43_, lean_object* v_t_44_, lean_object* v_h_45_, lean_object* v_step_46_){
_start:
{
lean_object* v___x_47_; 
v___x_47_ = l_Lean_Meta_Sym_DSimp_Result_ctorElim___redArg(v_t_44_, v_step_46_);
return v___x_47_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_DSimp_MethodsRefPointed(void){
_start:
{
lean_object* v___x_52_; 
v___x_52_ = lean_box(0);
return v___x_52_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__11(void){
_start:
{
lean_object* v___x_76_; lean_object* v___x_77_; 
v___x_76_ = ((lean_object*)(l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__10));
v___x_77_ = l_StateRefT_x27_instMonad___redArg(v___x_76_);
return v___x_77_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__16(void){
_start:
{
lean_object* v___x_82_; lean_object* v___f_83_; 
v___x_82_ = l_Lean_instMonadExceptOfExceptionCoreM;
v___f_83_ = lean_alloc_closure((void*)(l_StateRefT_x27_instMonadExceptOf___redArg___lam__0___boxed), 4, 1);
lean_closure_set(v___f_83_, 0, v___x_82_);
return v___f_83_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__17(void){
_start:
{
lean_object* v___x_84_; lean_object* v___f_85_; 
v___x_84_ = l_Lean_instMonadExceptOfExceptionCoreM;
v___f_85_ = lean_alloc_closure((void*)(l_StateRefT_x27_instMonadExceptOf___redArg___lam__2___boxed), 5, 1);
lean_closure_set(v___f_85_, 0, v___x_84_);
return v___f_85_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__18(void){
_start:
{
lean_object* v___f_86_; lean_object* v___f_87_; lean_object* v___x_88_; 
v___f_86_ = lean_obj_once(&l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__17, &l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__17_once, _init_l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__17);
v___f_87_ = lean_obj_once(&l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__16, &l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__16_once, _init_l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__16);
v___x_88_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_88_, 0, v___f_87_);
lean_ctor_set(v___x_88_, 1, v___f_86_);
return v___x_88_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__19(void){
_start:
{
lean_object* v___x_89_; lean_object* v___f_90_; 
v___x_89_ = lean_obj_once(&l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__18, &l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__18_once, _init_l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__18);
v___f_90_ = lean_alloc_closure((void*)(l_ReaderT_instMonadExceptOf___redArg___lam__0___boxed), 4, 1);
lean_closure_set(v___f_90_, 0, v___x_89_);
return v___f_90_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__20(void){
_start:
{
lean_object* v___x_91_; lean_object* v___f_92_; 
v___x_91_ = lean_obj_once(&l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__18, &l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__18_once, _init_l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__18);
v___f_92_ = lean_alloc_closure((void*)(l_ReaderT_instMonadExceptOf___redArg___lam__2___boxed), 5, 1);
lean_closure_set(v___f_92_, 0, v___x_91_);
return v___f_92_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__21(void){
_start:
{
lean_object* v___f_93_; lean_object* v___f_94_; lean_object* v___x_95_; 
v___f_93_ = lean_obj_once(&l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__20, &l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__20_once, _init_l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__20);
v___f_94_ = lean_obj_once(&l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__19, &l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__19_once, _init_l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__19);
v___x_95_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_95_, 0, v___f_94_);
lean_ctor_set(v___x_95_, 1, v___f_93_);
return v___x_95_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__22(void){
_start:
{
lean_object* v___x_96_; lean_object* v___f_97_; 
v___x_96_ = lean_obj_once(&l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__21, &l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__21_once, _init_l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__21);
v___f_97_ = lean_alloc_closure((void*)(l_StateRefT_x27_instMonadExceptOf___redArg___lam__0___boxed), 4, 1);
lean_closure_set(v___f_97_, 0, v___x_96_);
return v___f_97_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__23(void){
_start:
{
lean_object* v___x_98_; lean_object* v___f_99_; 
v___x_98_ = lean_obj_once(&l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__21, &l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__21_once, _init_l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__21);
v___f_99_ = lean_alloc_closure((void*)(l_StateRefT_x27_instMonadExceptOf___redArg___lam__2___boxed), 5, 1);
lean_closure_set(v___f_99_, 0, v___x_98_);
return v___f_99_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__24(void){
_start:
{
lean_object* v___f_100_; lean_object* v___f_101_; lean_object* v___x_102_; 
v___f_100_ = lean_obj_once(&l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__23, &l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__23_once, _init_l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__23);
v___f_101_ = lean_obj_once(&l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__22, &l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__22_once, _init_l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__22);
v___x_102_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_102_, 0, v___f_101_);
lean_ctor_set(v___x_102_, 1, v___f_100_);
return v___x_102_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__25(void){
_start:
{
lean_object* v___x_103_; lean_object* v___f_104_; 
v___x_103_ = lean_obj_once(&l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__24, &l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__24_once, _init_l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__24);
v___f_104_ = lean_alloc_closure((void*)(l_ReaderT_instMonadExceptOf___redArg___lam__0___boxed), 4, 1);
lean_closure_set(v___f_104_, 0, v___x_103_);
return v___f_104_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__26(void){
_start:
{
lean_object* v___x_105_; lean_object* v___f_106_; 
v___x_105_ = lean_obj_once(&l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__24, &l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__24_once, _init_l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__24);
v___f_106_ = lean_alloc_closure((void*)(l_ReaderT_instMonadExceptOf___redArg___lam__2___boxed), 5, 1);
lean_closure_set(v___f_106_, 0, v___x_105_);
return v___f_106_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__27(void){
_start:
{
lean_object* v___f_107_; lean_object* v___f_108_; lean_object* v___x_109_; 
v___f_107_ = lean_obj_once(&l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__26, &l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__26_once, _init_l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__26);
v___f_108_ = lean_obj_once(&l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__25, &l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__25_once, _init_l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__25);
v___x_109_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_109_, 0, v___f_108_);
lean_ctor_set(v___x_109_, 1, v___f_107_);
return v___x_109_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__28(void){
_start:
{
lean_object* v___x_110_; lean_object* v___f_111_; 
v___x_110_ = lean_obj_once(&l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__27, &l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__27_once, _init_l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__27);
v___f_111_ = lean_alloc_closure((void*)(l_StateRefT_x27_instMonadExceptOf___redArg___lam__0___boxed), 4, 1);
lean_closure_set(v___f_111_, 0, v___x_110_);
return v___f_111_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__29(void){
_start:
{
lean_object* v___x_112_; lean_object* v___f_113_; 
v___x_112_ = lean_obj_once(&l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__27, &l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__27_once, _init_l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__27);
v___f_113_ = lean_alloc_closure((void*)(l_StateRefT_x27_instMonadExceptOf___redArg___lam__2___boxed), 5, 1);
lean_closure_set(v___f_113_, 0, v___x_112_);
return v___f_113_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__30(void){
_start:
{
lean_object* v___f_114_; lean_object* v___f_115_; lean_object* v___x_116_; 
v___f_114_ = lean_obj_once(&l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__29, &l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__29_once, _init_l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__29);
v___f_115_ = lean_obj_once(&l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__28, &l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__28_once, _init_l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__28);
v___x_116_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_116_, 0, v___f_115_);
lean_ctor_set(v___x_116_, 1, v___f_114_);
return v___x_116_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__31(void){
_start:
{
lean_object* v___x_117_; lean_object* v___f_118_; 
v___x_117_ = lean_obj_once(&l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__30, &l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__30_once, _init_l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__30);
v___f_118_ = lean_alloc_closure((void*)(l_ReaderT_instMonadExceptOf___redArg___lam__0___boxed), 4, 1);
lean_closure_set(v___f_118_, 0, v___x_117_);
return v___f_118_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__32(void){
_start:
{
lean_object* v___x_119_; lean_object* v___f_120_; 
v___x_119_ = lean_obj_once(&l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__30, &l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__30_once, _init_l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__30);
v___f_120_ = lean_alloc_closure((void*)(l_ReaderT_instMonadExceptOf___redArg___lam__2___boxed), 5, 1);
lean_closure_set(v___f_120_, 0, v___x_119_);
return v___f_120_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__33(void){
_start:
{
lean_object* v___f_121_; lean_object* v___f_122_; lean_object* v___x_123_; 
v___f_121_ = lean_obj_once(&l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__32, &l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__32_once, _init_l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__32);
v___f_122_ = lean_obj_once(&l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__31, &l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__31_once, _init_l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__31);
v___x_123_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_123_, 0, v___f_122_);
lean_ctor_set(v___x_123_, 1, v___f_121_);
return v___x_123_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__34(void){
_start:
{
lean_object* v___x_124_; lean_object* v___f_125_; 
v___x_124_ = lean_obj_once(&l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__33, &l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__33_once, _init_l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__33);
v___f_125_ = lean_alloc_closure((void*)(l_ReaderT_instMonadExceptOf___redArg___lam__0___boxed), 4, 1);
lean_closure_set(v___f_125_, 0, v___x_124_);
return v___f_125_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__35(void){
_start:
{
lean_object* v___x_126_; lean_object* v___f_127_; 
v___x_126_ = lean_obj_once(&l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__33, &l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__33_once, _init_l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__33);
v___f_127_ = lean_alloc_closure((void*)(l_ReaderT_instMonadExceptOf___redArg___lam__2___boxed), 5, 1);
lean_closure_set(v___f_127_, 0, v___x_126_);
return v___f_127_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__36(void){
_start:
{
lean_object* v___f_128_; lean_object* v___f_129_; lean_object* v___x_130_; 
v___f_128_ = lean_obj_once(&l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__35, &l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__35_once, _init_l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__35);
v___f_129_ = lean_obj_once(&l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__34, &l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__34_once, _init_l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__34);
v___x_130_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_130_, 0, v___f_129_);
lean_ctor_set(v___x_130_, 1, v___f_128_);
return v___x_130_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__41(void){
_start:
{
lean_object* v___x_135_; lean_object* v___x_136_; lean_object* v___f_137_; lean_object* v___x_138_; 
v___x_135_ = l_Lean_Core_instMonadQuotationCoreM;
v___x_136_ = ((lean_object*)(l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__40));
v___f_137_ = ((lean_object*)(l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__39));
v___x_138_ = l_Lean_instMonadQuotationOfMonadFunctorOfMonadLift___redArg(v___f_137_, v___x_136_, v___x_135_);
return v___x_138_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__42(void){
_start:
{
lean_object* v___x_139_; lean_object* v___f_140_; lean_object* v___f_141_; lean_object* v___x_142_; 
v___x_139_ = lean_obj_once(&l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__41, &l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__41_once, _init_l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__41);
v___f_140_ = ((lean_object*)(l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__38));
v___f_141_ = ((lean_object*)(l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__37));
v___x_142_ = l_Lean_instMonadQuotationOfMonadFunctorOfMonadLift___redArg(v___f_141_, v___f_140_, v___x_139_);
return v___x_142_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__43(void){
_start:
{
lean_object* v___x_143_; lean_object* v___x_144_; lean_object* v___f_145_; lean_object* v___x_146_; 
v___x_143_ = lean_obj_once(&l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__42, &l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__42_once, _init_l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__42);
v___x_144_ = ((lean_object*)(l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__40));
v___f_145_ = ((lean_object*)(l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__39));
v___x_146_ = l_Lean_instMonadQuotationOfMonadFunctorOfMonadLift___redArg(v___f_145_, v___x_144_, v___x_143_);
return v___x_146_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__44(void){
_start:
{
lean_object* v___x_147_; lean_object* v___f_148_; lean_object* v___f_149_; lean_object* v___x_150_; 
v___x_147_ = lean_obj_once(&l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__43, &l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__43_once, _init_l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__43);
v___f_148_ = ((lean_object*)(l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__38));
v___f_149_ = ((lean_object*)(l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__37));
v___x_150_ = l_Lean_instMonadQuotationOfMonadFunctorOfMonadLift___redArg(v___f_149_, v___f_148_, v___x_147_);
return v___x_150_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__45(void){
_start:
{
lean_object* v___x_151_; lean_object* v___x_152_; lean_object* v___f_153_; lean_object* v___x_154_; 
v___x_151_ = lean_obj_once(&l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__44, &l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__44_once, _init_l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__44);
v___x_152_ = ((lean_object*)(l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__40));
v___f_153_ = ((lean_object*)(l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__39));
v___x_154_ = l_Lean_instMonadQuotationOfMonadFunctorOfMonadLift___redArg(v___f_153_, v___x_152_, v___x_151_);
return v___x_154_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__46(void){
_start:
{
lean_object* v___x_155_; lean_object* v___f_156_; lean_object* v___f_157_; lean_object* v___x_158_; 
v___x_155_ = lean_obj_once(&l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__45, &l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__45_once, _init_l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__45);
v___f_156_ = ((lean_object*)(l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__38));
v___f_157_ = ((lean_object*)(l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__37));
v___x_158_ = l_Lean_instMonadQuotationOfMonadFunctorOfMonadLift___redArg(v___f_157_, v___f_156_, v___x_155_);
return v___x_158_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__47(void){
_start:
{
lean_object* v___x_159_; lean_object* v___f_160_; lean_object* v___f_161_; lean_object* v___x_162_; 
v___x_159_ = lean_obj_once(&l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__46, &l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__46_once, _init_l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__46);
v___f_160_ = ((lean_object*)(l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__38));
v___f_161_ = ((lean_object*)(l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__37));
v___x_162_ = l_Lean_instMonadQuotationOfMonadFunctorOfMonadLift___redArg(v___f_161_, v___f_160_, v___x_159_);
return v___x_162_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__48(void){
_start:
{
lean_object* v___x_163_; lean_object* v___x_164_; lean_object* v___f_165_; 
v___x_163_ = ((lean_object*)(l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__40));
v___x_164_ = l_Lean_Meta_instAddMessageContextMetaM;
v___f_165_ = lean_alloc_closure((void*)(l_Lean_instAddMessageContextOfMonadLift___redArg___lam__0), 3, 2);
lean_closure_set(v___f_165_, 0, v___x_164_);
lean_closure_set(v___f_165_, 1, v___x_163_);
return v___f_165_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__49(void){
_start:
{
lean_object* v___f_166_; lean_object* v___f_167_; lean_object* v___f_168_; 
v___f_166_ = ((lean_object*)(l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__38));
v___f_167_ = lean_obj_once(&l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__48, &l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__48_once, _init_l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__48);
v___f_168_ = lean_alloc_closure((void*)(l_Lean_instAddMessageContextOfMonadLift___redArg___lam__0), 3, 2);
lean_closure_set(v___f_168_, 0, v___f_167_);
lean_closure_set(v___f_168_, 1, v___f_166_);
return v___f_168_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__50(void){
_start:
{
lean_object* v___x_169_; lean_object* v___f_170_; lean_object* v___f_171_; 
v___x_169_ = ((lean_object*)(l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__40));
v___f_170_ = lean_obj_once(&l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__49, &l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__49_once, _init_l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__49);
v___f_171_ = lean_alloc_closure((void*)(l_Lean_instAddMessageContextOfMonadLift___redArg___lam__0), 3, 2);
lean_closure_set(v___f_171_, 0, v___f_170_);
lean_closure_set(v___f_171_, 1, v___x_169_);
return v___f_171_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__51(void){
_start:
{
lean_object* v___f_172_; lean_object* v___f_173_; lean_object* v___f_174_; 
v___f_172_ = ((lean_object*)(l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__38));
v___f_173_ = lean_obj_once(&l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__50, &l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__50_once, _init_l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__50);
v___f_174_ = lean_alloc_closure((void*)(l_Lean_instAddMessageContextOfMonadLift___redArg___lam__0), 3, 2);
lean_closure_set(v___f_174_, 0, v___f_173_);
lean_closure_set(v___f_174_, 1, v___f_172_);
return v___f_174_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__52(void){
_start:
{
lean_object* v___f_175_; lean_object* v___f_176_; lean_object* v___f_177_; 
v___f_175_ = ((lean_object*)(l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__38));
v___f_176_ = lean_obj_once(&l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__51, &l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__51_once, _init_l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__51);
v___f_177_ = lean_alloc_closure((void*)(l_Lean_instAddMessageContextOfMonadLift___redArg___lam__0), 3, 2);
lean_closure_set(v___f_177_, 0, v___f_176_);
lean_closure_set(v___f_177_, 1, v___f_175_);
return v___f_177_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__54(void){
_start:
{
lean_object* v___x_179_; lean_object* v___x_180_; 
v___x_179_ = ((lean_object*)(l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__53));
v___x_180_ = l_Lean_stringToMessageData(v___x_179_);
return v___x_180_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg(){
_start:
{
lean_object* v___x_182_; lean_object* v_toApplicative_183_; lean_object* v_toFunctor_184_; lean_object* v_toSeq_185_; lean_object* v_toSeqLeft_186_; lean_object* v_toSeqRight_187_; lean_object* v___f_188_; lean_object* v___f_189_; lean_object* v___f_190_; lean_object* v___f_191_; lean_object* v___x_192_; lean_object* v___f_193_; lean_object* v___f_194_; lean_object* v___f_195_; lean_object* v___x_196_; lean_object* v___x_197_; lean_object* v___x_198_; lean_object* v_toApplicative_199_; lean_object* v___x_201_; uint8_t v_isShared_202_; uint8_t v_isSharedCheck_239_; 
v___x_182_ = lean_obj_once(&l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__11, &l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__11_once, _init_l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__11);
v_toApplicative_183_ = lean_ctor_get(v___x_182_, 0);
v_toFunctor_184_ = lean_ctor_get(v_toApplicative_183_, 0);
v_toSeq_185_ = lean_ctor_get(v_toApplicative_183_, 2);
v_toSeqLeft_186_ = lean_ctor_get(v_toApplicative_183_, 3);
v_toSeqRight_187_ = lean_ctor_get(v_toApplicative_183_, 4);
v___f_188_ = ((lean_object*)(l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__12));
v___f_189_ = ((lean_object*)(l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__13));
lean_inc_ref_n(v_toFunctor_184_, 2);
v___f_190_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_190_, 0, v_toFunctor_184_);
v___f_191_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_191_, 0, v_toFunctor_184_);
v___x_192_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_192_, 0, v___f_190_);
lean_ctor_set(v___x_192_, 1, v___f_191_);
lean_inc(v_toSeqRight_187_);
v___f_193_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_193_, 0, v_toSeqRight_187_);
lean_inc(v_toSeqLeft_186_);
v___f_194_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3___boxed), 6, 1);
lean_closure_set(v___f_194_, 0, v_toSeqLeft_186_);
lean_inc(v_toSeq_185_);
v___f_195_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4___boxed), 6, 1);
lean_closure_set(v___f_195_, 0, v_toSeq_185_);
v___x_196_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_196_, 0, v___x_192_);
lean_ctor_set(v___x_196_, 1, v___f_188_);
lean_ctor_set(v___x_196_, 2, v___f_195_);
lean_ctor_set(v___x_196_, 3, v___f_194_);
lean_ctor_set(v___x_196_, 4, v___f_193_);
v___x_197_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_197_, 0, v___x_196_);
lean_ctor_set(v___x_197_, 1, v___f_189_);
v___x_198_ = l_StateRefT_x27_instMonad___redArg(v___x_197_);
v_toApplicative_199_ = lean_ctor_get(v___x_198_, 0);
v_isSharedCheck_239_ = !lean_is_exclusive(v___x_198_);
if (v_isSharedCheck_239_ == 0)
{
lean_object* v_unused_240_; 
v_unused_240_ = lean_ctor_get(v___x_198_, 1);
lean_dec(v_unused_240_);
v___x_201_ = v___x_198_;
v_isShared_202_ = v_isSharedCheck_239_;
goto v_resetjp_200_;
}
else
{
lean_inc(v_toApplicative_199_);
lean_dec(v___x_198_);
v___x_201_ = lean_box(0);
v_isShared_202_ = v_isSharedCheck_239_;
goto v_resetjp_200_;
}
v_resetjp_200_:
{
lean_object* v_toFunctor_203_; lean_object* v_toSeq_204_; lean_object* v_toSeqLeft_205_; lean_object* v_toSeqRight_206_; lean_object* v___x_208_; uint8_t v_isShared_209_; uint8_t v_isSharedCheck_237_; 
v_toFunctor_203_ = lean_ctor_get(v_toApplicative_199_, 0);
v_toSeq_204_ = lean_ctor_get(v_toApplicative_199_, 2);
v_toSeqLeft_205_ = lean_ctor_get(v_toApplicative_199_, 3);
v_toSeqRight_206_ = lean_ctor_get(v_toApplicative_199_, 4);
v_isSharedCheck_237_ = !lean_is_exclusive(v_toApplicative_199_);
if (v_isSharedCheck_237_ == 0)
{
lean_object* v_unused_238_; 
v_unused_238_ = lean_ctor_get(v_toApplicative_199_, 1);
lean_dec(v_unused_238_);
v___x_208_ = v_toApplicative_199_;
v_isShared_209_ = v_isSharedCheck_237_;
goto v_resetjp_207_;
}
else
{
lean_inc(v_toSeqRight_206_);
lean_inc(v_toSeqLeft_205_);
lean_inc(v_toSeq_204_);
lean_inc(v_toFunctor_203_);
lean_dec(v_toApplicative_199_);
v___x_208_ = lean_box(0);
v_isShared_209_ = v_isSharedCheck_237_;
goto v_resetjp_207_;
}
v_resetjp_207_:
{
lean_object* v___f_210_; lean_object* v___f_211_; lean_object* v___f_212_; lean_object* v___f_213_; lean_object* v___x_214_; lean_object* v___f_215_; lean_object* v___f_216_; lean_object* v___f_217_; lean_object* v___x_219_; 
v___f_210_ = ((lean_object*)(l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__14));
v___f_211_ = ((lean_object*)(l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__15));
lean_inc_ref(v_toFunctor_203_);
v___f_212_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_212_, 0, v_toFunctor_203_);
v___f_213_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_213_, 0, v_toFunctor_203_);
v___x_214_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_214_, 0, v___f_212_);
lean_ctor_set(v___x_214_, 1, v___f_213_);
v___f_215_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_215_, 0, v_toSeqRight_206_);
v___f_216_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3___boxed), 6, 1);
lean_closure_set(v___f_216_, 0, v_toSeqLeft_205_);
v___f_217_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4___boxed), 6, 1);
lean_closure_set(v___f_217_, 0, v_toSeq_204_);
if (v_isShared_209_ == 0)
{
lean_ctor_set(v___x_208_, 4, v___f_215_);
lean_ctor_set(v___x_208_, 3, v___f_216_);
lean_ctor_set(v___x_208_, 2, v___f_217_);
lean_ctor_set(v___x_208_, 1, v___f_210_);
lean_ctor_set(v___x_208_, 0, v___x_214_);
v___x_219_ = v___x_208_;
goto v_reusejp_218_;
}
else
{
lean_object* v_reuseFailAlloc_236_; 
v_reuseFailAlloc_236_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_236_, 0, v___x_214_);
lean_ctor_set(v_reuseFailAlloc_236_, 1, v___f_210_);
lean_ctor_set(v_reuseFailAlloc_236_, 2, v___f_217_);
lean_ctor_set(v_reuseFailAlloc_236_, 3, v___f_216_);
lean_ctor_set(v_reuseFailAlloc_236_, 4, v___f_215_);
v___x_219_ = v_reuseFailAlloc_236_;
goto v_reusejp_218_;
}
v_reusejp_218_:
{
lean_object* v___x_221_; 
if (v_isShared_202_ == 0)
{
lean_ctor_set(v___x_201_, 1, v___f_211_);
lean_ctor_set(v___x_201_, 0, v___x_219_);
v___x_221_ = v___x_201_;
goto v_reusejp_220_;
}
else
{
lean_object* v_reuseFailAlloc_235_; 
v_reuseFailAlloc_235_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_235_, 0, v___x_219_);
lean_ctor_set(v_reuseFailAlloc_235_, 1, v___f_211_);
v___x_221_ = v_reuseFailAlloc_235_;
goto v_reusejp_220_;
}
v_reusejp_220_:
{
lean_object* v___x_222_; lean_object* v___x_223_; lean_object* v___x_224_; lean_object* v___x_225_; lean_object* v___x_226_; lean_object* v___x_227_; lean_object* v___x_228_; lean_object* v_toMonadRef_229_; lean_object* v___f_230_; lean_object* v___x_231_; lean_object* v___x_232_; lean_object* v___x_233_; lean_object* v___x_234_; 
v___x_222_ = l_StateRefT_x27_instMonad___redArg(v___x_221_);
v___x_223_ = l_ReaderT_instMonad___redArg(v___x_222_);
v___x_224_ = l_StateRefT_x27_instMonad___redArg(v___x_223_);
v___x_225_ = l_ReaderT_instMonad___redArg(v___x_224_);
v___x_226_ = l_ReaderT_instMonad___redArg(v___x_225_);
v___x_227_ = lean_obj_once(&l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__36, &l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__36_once, _init_l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__36);
v___x_228_ = lean_obj_once(&l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__47, &l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__47_once, _init_l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__47);
v_toMonadRef_229_ = lean_ctor_get(v___x_228_, 0);
v___f_230_ = lean_obj_once(&l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__52, &l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__52_once, _init_l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__52);
lean_inc_ref(v___x_226_);
v___x_231_ = l_Lean_instAddErrorMessageContextOfAddMessageContextOfMonad___redArg(v___f_230_, v___x_226_);
lean_inc_ref(v_toMonadRef_229_);
v___x_232_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_232_, 0, v___x_227_);
lean_ctor_set(v___x_232_, 1, v_toMonadRef_229_);
lean_ctor_set(v___x_232_, 2, v___x_231_);
v___x_233_ = lean_obj_once(&l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__54, &l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__54_once, _init_l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___closed__54);
v___x_234_ = l_Lean_throwError___redArg(v___x_226_, v___x_232_, v___x_233_);
return v___x_234_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg___boxed(lean_object* v___dummy_241_){
_start:
{
lean_object* v_res_242_; 
v_res_242_ = l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg();
return v_res_242_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___closed__0(void){
_start:
{
lean_object* v___x_243_; 
v___x_243_ = l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___redArg();
return v___x_243_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM(lean_object* v_00_u03b1_244_){
_start:
{
lean_object* v___x_245_; 
v___x_245_ = lean_obj_once(&l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___closed__0, &l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___closed__0_once, _init_l_Lean_Meta_Sym_DSimp_instInhabitedDSimpM___closed__0);
return v___x_245_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_DSimp_instInhabitedMethods_default___lam__0(lean_object* v_x_246_, lean_object* v___y_247_, lean_object* v___y_248_, lean_object* v___y_249_, lean_object* v___y_250_, lean_object* v___y_251_, lean_object* v___y_252_, lean_object* v___y_253_, lean_object* v___y_254_, lean_object* v___y_255_){
_start:
{
lean_object* v___x_257_; lean_object* v___x_258_; 
v___x_257_ = ((lean_object*)(l_Lean_Meta_Sym_DSimp_instInhabitedResult_default___closed__0));
v___x_258_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_258_, 0, v___x_257_);
return v___x_258_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_DSimp_instInhabitedMethods_default___lam__0___boxed(lean_object* v_x_259_, lean_object* v___y_260_, lean_object* v___y_261_, lean_object* v___y_262_, lean_object* v___y_263_, lean_object* v___y_264_, lean_object* v___y_265_, lean_object* v___y_266_, lean_object* v___y_267_, lean_object* v___y_268_, lean_object* v___y_269_){
_start:
{
lean_object* v_res_270_; 
v_res_270_ = l_Lean_Meta_Sym_DSimp_instInhabitedMethods_default___lam__0(v_x_259_, v___y_260_, v___y_261_, v___y_262_, v___y_263_, v___y_264_, v___y_265_, v___y_266_, v___y_267_, v___y_268_);
lean_dec(v___y_268_);
lean_dec_ref(v___y_267_);
lean_dec(v___y_266_);
lean_dec_ref(v___y_265_);
lean_dec(v___y_264_);
lean_dec_ref(v___y_263_);
lean_dec(v___y_262_);
lean_dec_ref(v___y_261_);
lean_dec(v___y_260_);
lean_dec_ref(v_x_259_);
return v_res_270_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_DSimp_Methods_toMethodsRefImpl(lean_object* v_m_276_){
_start:
{
lean_inc_ref(v_m_276_);
return v_m_276_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_DSimp_Methods_toMethodsRefImpl___boxed(lean_object* v_m_277_){
_start:
{
lean_object* v_res_278_; 
v_res_278_ = l_Lean_Meta_Sym_DSimp_Methods_toMethodsRefImpl(v_m_277_);
lean_dec_ref(v_m_277_);
return v_res_278_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_DSimp_MethodsRef_toMethodsImpl(lean_object* v_m_279_){
_start:
{
lean_inc(v_m_279_);
return v_m_279_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_DSimp_MethodsRef_toMethodsImpl___boxed(lean_object* v_m_280_){
_start:
{
lean_object* v_res_281_; 
v_res_281_ = l_Lean_Meta_Sym_DSimp_MethodsRef_toMethodsImpl(v_m_280_);
lean_dec(v_m_280_);
return v_res_281_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_DSimp_getMethods___redArg(lean_object* v___y_282_){
_start:
{
lean_object* v___x_284_; 
lean_inc(v___y_282_);
v___x_284_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_284_, 0, v___y_282_);
return v___x_284_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_DSimp_getMethods___redArg___boxed(lean_object* v___y_285_, lean_object* v___y_286_){
_start:
{
lean_object* v_res_287_; 
v_res_287_ = l_Lean_Meta_Sym_DSimp_getMethods___redArg(v___y_285_);
lean_dec(v___y_285_);
return v_res_287_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_DSimp_getMethods(lean_object* v___y_288_, lean_object* v___y_289_, lean_object* v___y_290_, lean_object* v___y_291_, lean_object* v___y_292_, lean_object* v___y_293_, lean_object* v___y_294_, lean_object* v___y_295_, lean_object* v___y_296_){
_start:
{
lean_object* v___x_298_; 
lean_inc(v___y_288_);
v___x_298_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_298_, 0, v___y_288_);
return v___x_298_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_DSimp_getMethods___boxed(lean_object* v___y_299_, lean_object* v___y_300_, lean_object* v___y_301_, lean_object* v___y_302_, lean_object* v___y_303_, lean_object* v___y_304_, lean_object* v___y_305_, lean_object* v___y_306_, lean_object* v___y_307_, lean_object* v___y_308_){
_start:
{
lean_object* v_res_309_; 
v_res_309_ = l_Lean_Meta_Sym_DSimp_getMethods(v___y_299_, v___y_300_, v___y_301_, v___y_302_, v___y_303_, v___y_304_, v___y_305_, v___y_306_, v___y_307_);
lean_dec(v___y_307_);
lean_dec_ref(v___y_306_);
lean_dec(v___y_305_);
lean_dec_ref(v___y_304_);
lean_dec(v___y_303_);
lean_dec_ref(v___y_302_);
lean_dec(v___y_301_);
lean_dec_ref(v___y_300_);
lean_dec(v___y_299_);
return v_res_309_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_DSimp_DSimpM_run___redArg(lean_object* v_x_310_, lean_object* v_methods_311_, lean_object* v_config_312_, lean_object* v_s_313_, lean_object* v___y_314_, lean_object* v___y_315_, lean_object* v___y_316_, lean_object* v___y_317_, lean_object* v___y_318_, lean_object* v___y_319_){
_start:
{
lean_object* v_cache_321_; lean_object* v___x_323_; uint8_t v_isShared_324_; uint8_t v_isSharedCheck_349_; 
v_cache_321_ = lean_ctor_get(v_s_313_, 1);
v_isSharedCheck_349_ = !lean_is_exclusive(v_s_313_);
if (v_isSharedCheck_349_ == 0)
{
lean_object* v_unused_350_; 
v_unused_350_ = lean_ctor_get(v_s_313_, 0);
lean_dec(v_unused_350_);
v___x_323_ = v_s_313_;
v_isShared_324_ = v_isSharedCheck_349_;
goto v_resetjp_322_;
}
else
{
lean_inc(v_cache_321_);
lean_dec(v_s_313_);
v___x_323_ = lean_box(0);
v_isShared_324_ = v_isSharedCheck_349_;
goto v_resetjp_322_;
}
v_resetjp_322_:
{
lean_object* v___x_325_; lean_object* v___x_327_; 
v___x_325_ = lean_unsigned_to_nat(0u);
if (v_isShared_324_ == 0)
{
lean_ctor_set(v___x_323_, 0, v___x_325_);
v___x_327_ = v___x_323_;
goto v_reusejp_326_;
}
else
{
lean_object* v_reuseFailAlloc_348_; 
v_reuseFailAlloc_348_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_348_, 0, v___x_325_);
lean_ctor_set(v_reuseFailAlloc_348_, 1, v_cache_321_);
v___x_327_ = v_reuseFailAlloc_348_;
goto v_reusejp_326_;
}
v_reusejp_326_:
{
lean_object* v___x_328_; lean_object* v___x_329_; 
v___x_328_ = lean_st_mk_ref(v___x_327_);
lean_inc(v___y_319_);
lean_inc_ref(v___y_318_);
lean_inc(v___y_317_);
lean_inc_ref(v___y_316_);
lean_inc(v___y_315_);
lean_inc_ref(v___y_314_);
lean_inc(v___x_328_);
v___x_329_ = lean_apply_10(v_x_310_, v_methods_311_, v_config_312_, v___x_328_, v___y_314_, v___y_315_, v___y_316_, v___y_317_, v___y_318_, v___y_319_, lean_box(0));
if (lean_obj_tag(v___x_329_) == 0)
{
lean_object* v_a_330_; lean_object* v___x_332_; uint8_t v_isShared_333_; uint8_t v_isSharedCheck_339_; 
v_a_330_ = lean_ctor_get(v___x_329_, 0);
v_isSharedCheck_339_ = !lean_is_exclusive(v___x_329_);
if (v_isSharedCheck_339_ == 0)
{
v___x_332_ = v___x_329_;
v_isShared_333_ = v_isSharedCheck_339_;
goto v_resetjp_331_;
}
else
{
lean_inc(v_a_330_);
lean_dec(v___x_329_);
v___x_332_ = lean_box(0);
v_isShared_333_ = v_isSharedCheck_339_;
goto v_resetjp_331_;
}
v_resetjp_331_:
{
lean_object* v___x_334_; lean_object* v___x_335_; lean_object* v___x_337_; 
v___x_334_ = lean_st_ref_get(v___x_328_);
lean_dec(v___x_328_);
v___x_335_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_335_, 0, v_a_330_);
lean_ctor_set(v___x_335_, 1, v___x_334_);
if (v_isShared_333_ == 0)
{
lean_ctor_set(v___x_332_, 0, v___x_335_);
v___x_337_ = v___x_332_;
goto v_reusejp_336_;
}
else
{
lean_object* v_reuseFailAlloc_338_; 
v_reuseFailAlloc_338_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_338_, 0, v___x_335_);
v___x_337_ = v_reuseFailAlloc_338_;
goto v_reusejp_336_;
}
v_reusejp_336_:
{
return v___x_337_;
}
}
}
else
{
lean_object* v_a_340_; lean_object* v___x_342_; uint8_t v_isShared_343_; uint8_t v_isSharedCheck_347_; 
lean_dec(v___x_328_);
v_a_340_ = lean_ctor_get(v___x_329_, 0);
v_isSharedCheck_347_ = !lean_is_exclusive(v___x_329_);
if (v_isSharedCheck_347_ == 0)
{
v___x_342_ = v___x_329_;
v_isShared_343_ = v_isSharedCheck_347_;
goto v_resetjp_341_;
}
else
{
lean_inc(v_a_340_);
lean_dec(v___x_329_);
v___x_342_ = lean_box(0);
v_isShared_343_ = v_isSharedCheck_347_;
goto v_resetjp_341_;
}
v_resetjp_341_:
{
lean_object* v___x_345_; 
if (v_isShared_343_ == 0)
{
v___x_345_ = v___x_342_;
goto v_reusejp_344_;
}
else
{
lean_object* v_reuseFailAlloc_346_; 
v_reuseFailAlloc_346_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_346_, 0, v_a_340_);
v___x_345_ = v_reuseFailAlloc_346_;
goto v_reusejp_344_;
}
v_reusejp_344_:
{
return v___x_345_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_DSimp_DSimpM_run___redArg___boxed(lean_object* v_x_351_, lean_object* v_methods_352_, lean_object* v_config_353_, lean_object* v_s_354_, lean_object* v___y_355_, lean_object* v___y_356_, lean_object* v___y_357_, lean_object* v___y_358_, lean_object* v___y_359_, lean_object* v___y_360_, lean_object* v___y_361_){
_start:
{
lean_object* v_res_362_; 
v_res_362_ = l_Lean_Meta_Sym_DSimp_DSimpM_run___redArg(v_x_351_, v_methods_352_, v_config_353_, v_s_354_, v___y_355_, v___y_356_, v___y_357_, v___y_358_, v___y_359_, v___y_360_);
lean_dec(v___y_360_);
lean_dec_ref(v___y_359_);
lean_dec(v___y_358_);
lean_dec_ref(v___y_357_);
lean_dec(v___y_356_);
lean_dec_ref(v___y_355_);
return v_res_362_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_DSimp_DSimpM_run(lean_object* v_00_u03b1_363_, lean_object* v_x_364_, lean_object* v_methods_365_, lean_object* v_config_366_, lean_object* v_s_367_, lean_object* v___y_368_, lean_object* v___y_369_, lean_object* v___y_370_, lean_object* v___y_371_, lean_object* v___y_372_, lean_object* v___y_373_){
_start:
{
lean_object* v___x_375_; 
v___x_375_ = l_Lean_Meta_Sym_DSimp_DSimpM_run___redArg(v_x_364_, v_methods_365_, v_config_366_, v_s_367_, v___y_368_, v___y_369_, v___y_370_, v___y_371_, v___y_372_, v___y_373_);
return v___x_375_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_DSimp_DSimpM_run___boxed(lean_object* v_00_u03b1_376_, lean_object* v_x_377_, lean_object* v_methods_378_, lean_object* v_config_379_, lean_object* v_s_380_, lean_object* v___y_381_, lean_object* v___y_382_, lean_object* v___y_383_, lean_object* v___y_384_, lean_object* v___y_385_, lean_object* v___y_386_, lean_object* v___y_387_){
_start:
{
lean_object* v_res_388_; 
v_res_388_ = l_Lean_Meta_Sym_DSimp_DSimpM_run(v_00_u03b1_376_, v_x_377_, v_methods_378_, v_config_379_, v_s_380_, v___y_381_, v___y_382_, v___y_383_, v___y_384_, v___y_385_, v___y_386_);
lean_dec(v___y_386_);
lean_dec_ref(v___y_385_);
lean_dec(v___y_384_);
lean_dec_ref(v___y_383_);
lean_dec(v___y_382_);
lean_dec_ref(v___y_381_);
return v_res_388_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_DSimp_DSimpM_run_x27___redArg___closed__0(void){
_start:
{
lean_object* v___x_389_; 
v___x_389_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_389_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_DSimp_DSimpM_run_x27___redArg___closed__1(void){
_start:
{
lean_object* v___x_390_; lean_object* v___x_391_; 
v___x_390_ = lean_obj_once(&l_Lean_Meta_Sym_DSimp_DSimpM_run_x27___redArg___closed__0, &l_Lean_Meta_Sym_DSimp_DSimpM_run_x27___redArg___closed__0_once, _init_l_Lean_Meta_Sym_DSimp_DSimpM_run_x27___redArg___closed__0);
v___x_391_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_391_, 0, v___x_390_);
return v___x_391_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_DSimp_DSimpM_run_x27___redArg___closed__2(void){
_start:
{
lean_object* v___x_392_; lean_object* v___x_393_; lean_object* v___x_394_; 
v___x_392_ = lean_obj_once(&l_Lean_Meta_Sym_DSimp_DSimpM_run_x27___redArg___closed__1, &l_Lean_Meta_Sym_DSimp_DSimpM_run_x27___redArg___closed__1_once, _init_l_Lean_Meta_Sym_DSimp_DSimpM_run_x27___redArg___closed__1);
v___x_393_ = lean_unsigned_to_nat(0u);
v___x_394_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_394_, 0, v___x_393_);
lean_ctor_set(v___x_394_, 1, v___x_392_);
return v___x_394_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_DSimp_DSimpM_run_x27___redArg(lean_object* v_x_395_, lean_object* v_methods_396_, lean_object* v_config_397_, lean_object* v___y_398_, lean_object* v___y_399_, lean_object* v___y_400_, lean_object* v___y_401_, lean_object* v___y_402_, lean_object* v___y_403_){
_start:
{
lean_object* v___x_405_; lean_object* v___x_406_; lean_object* v___x_407_; 
v___x_405_ = lean_obj_once(&l_Lean_Meta_Sym_DSimp_DSimpM_run_x27___redArg___closed__2, &l_Lean_Meta_Sym_DSimp_DSimpM_run_x27___redArg___closed__2_once, _init_l_Lean_Meta_Sym_DSimp_DSimpM_run_x27___redArg___closed__2);
v___x_406_ = lean_st_mk_ref(v___x_405_);
lean_inc(v___y_403_);
lean_inc_ref(v___y_402_);
lean_inc(v___y_401_);
lean_inc_ref(v___y_400_);
lean_inc(v___y_399_);
lean_inc_ref(v___y_398_);
lean_inc(v___x_406_);
v___x_407_ = lean_apply_10(v_x_395_, v_methods_396_, v_config_397_, v___x_406_, v___y_398_, v___y_399_, v___y_400_, v___y_401_, v___y_402_, v___y_403_, lean_box(0));
if (lean_obj_tag(v___x_407_) == 0)
{
lean_object* v_a_408_; lean_object* v___x_410_; uint8_t v_isShared_411_; uint8_t v_isSharedCheck_416_; 
v_a_408_ = lean_ctor_get(v___x_407_, 0);
v_isSharedCheck_416_ = !lean_is_exclusive(v___x_407_);
if (v_isSharedCheck_416_ == 0)
{
v___x_410_ = v___x_407_;
v_isShared_411_ = v_isSharedCheck_416_;
goto v_resetjp_409_;
}
else
{
lean_inc(v_a_408_);
lean_dec(v___x_407_);
v___x_410_ = lean_box(0);
v_isShared_411_ = v_isSharedCheck_416_;
goto v_resetjp_409_;
}
v_resetjp_409_:
{
lean_object* v___x_412_; lean_object* v___x_414_; 
v___x_412_ = lean_st_ref_get(v___x_406_);
lean_dec(v___x_406_);
lean_dec(v___x_412_);
if (v_isShared_411_ == 0)
{
v___x_414_ = v___x_410_;
goto v_reusejp_413_;
}
else
{
lean_object* v_reuseFailAlloc_415_; 
v_reuseFailAlloc_415_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_415_, 0, v_a_408_);
v___x_414_ = v_reuseFailAlloc_415_;
goto v_reusejp_413_;
}
v_reusejp_413_:
{
return v___x_414_;
}
}
}
else
{
lean_dec(v___x_406_);
return v___x_407_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_DSimp_DSimpM_run_x27___redArg___boxed(lean_object* v_x_417_, lean_object* v_methods_418_, lean_object* v_config_419_, lean_object* v___y_420_, lean_object* v___y_421_, lean_object* v___y_422_, lean_object* v___y_423_, lean_object* v___y_424_, lean_object* v___y_425_, lean_object* v___y_426_){
_start:
{
lean_object* v_res_427_; 
v_res_427_ = l_Lean_Meta_Sym_DSimp_DSimpM_run_x27___redArg(v_x_417_, v_methods_418_, v_config_419_, v___y_420_, v___y_421_, v___y_422_, v___y_423_, v___y_424_, v___y_425_);
lean_dec(v___y_425_);
lean_dec_ref(v___y_424_);
lean_dec(v___y_423_);
lean_dec_ref(v___y_422_);
lean_dec(v___y_421_);
lean_dec_ref(v___y_420_);
return v_res_427_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_DSimp_DSimpM_run_x27(lean_object* v_00_u03b1_428_, lean_object* v_x_429_, lean_object* v_methods_430_, lean_object* v_config_431_, lean_object* v___y_432_, lean_object* v___y_433_, lean_object* v___y_434_, lean_object* v___y_435_, lean_object* v___y_436_, lean_object* v___y_437_){
_start:
{
lean_object* v___x_439_; 
v___x_439_ = l_Lean_Meta_Sym_DSimp_DSimpM_run_x27___redArg(v_x_429_, v_methods_430_, v_config_431_, v___y_432_, v___y_433_, v___y_434_, v___y_435_, v___y_436_, v___y_437_);
return v___x_439_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_DSimp_DSimpM_run_x27___boxed(lean_object* v_00_u03b1_440_, lean_object* v_x_441_, lean_object* v_methods_442_, lean_object* v_config_443_, lean_object* v___y_444_, lean_object* v___y_445_, lean_object* v___y_446_, lean_object* v___y_447_, lean_object* v___y_448_, lean_object* v___y_449_, lean_object* v___y_450_){
_start:
{
lean_object* v_res_451_; 
v_res_451_ = l_Lean_Meta_Sym_DSimp_DSimpM_run_x27(v_00_u03b1_440_, v_x_441_, v_methods_442_, v_config_443_, v___y_444_, v___y_445_, v___y_446_, v___y_447_, v___y_448_, v___y_449_);
lean_dec(v___y_449_);
lean_dec_ref(v___y_448_);
lean_dec(v___y_447_);
lean_dec_ref(v___y_446_);
lean_dec(v___y_445_);
lean_dec_ref(v___y_444_);
return v_res_451_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_DSimp_dsimp___boxed(lean_object* v_a_00___x40___internal___hyg_463_, lean_object* v_r_464_, lean_object* v_r_465_, lean_object* v_r_466_, lean_object* v_r_467_, lean_object* v_r_468_, lean_object* v_r_469_, lean_object* v_r_470_, lean_object* v_r_471_, lean_object* v_r_472_, lean_object* v_a_00___x40___internal___hyg_473_){
_start:
{
lean_object* v_res_474_; 
v_res_474_ = lean_sym_dsimp(v_a_00___x40___internal___hyg_463_, v_r_464_, v_r_465_, v_r_466_, v_r_467_, v_r_468_, v_r_469_, v_r_470_, v_r_471_, v_r_472_);
return v_res_474_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_DSimp_getConfig___redArg(lean_object* v___y_475_){
_start:
{
lean_object* v___x_477_; 
lean_inc_ref(v___y_475_);
v___x_477_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_477_, 0, v___y_475_);
return v___x_477_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_DSimp_getConfig___redArg___boxed(lean_object* v___y_478_, lean_object* v___y_479_){
_start:
{
lean_object* v_res_480_; 
v_res_480_ = l_Lean_Meta_Sym_DSimp_getConfig___redArg(v___y_478_);
lean_dec_ref(v___y_478_);
return v_res_480_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_DSimp_getConfig(lean_object* v___y_481_, lean_object* v___y_482_, lean_object* v___y_483_, lean_object* v___y_484_, lean_object* v___y_485_, lean_object* v___y_486_, lean_object* v___y_487_, lean_object* v___y_488_, lean_object* v___y_489_){
_start:
{
lean_object* v___x_491_; 
lean_inc_ref(v___y_482_);
v___x_491_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_491_, 0, v___y_482_);
return v___x_491_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_DSimp_getConfig___boxed(lean_object* v___y_492_, lean_object* v___y_493_, lean_object* v___y_494_, lean_object* v___y_495_, lean_object* v___y_496_, lean_object* v___y_497_, lean_object* v___y_498_, lean_object* v___y_499_, lean_object* v___y_500_, lean_object* v___y_501_){
_start:
{
lean_object* v_res_502_; 
v_res_502_ = l_Lean_Meta_Sym_DSimp_getConfig(v___y_492_, v___y_493_, v___y_494_, v___y_495_, v___y_496_, v___y_497_, v___y_498_, v___y_499_, v___y_500_);
lean_dec(v___y_500_);
lean_dec_ref(v___y_499_);
lean_dec(v___y_498_);
lean_dec_ref(v___y_497_);
lean_dec(v___y_496_);
lean_dec_ref(v___y_495_);
lean_dec(v___y_494_);
lean_dec_ref(v___y_493_);
lean_dec(v___y_492_);
return v_res_502_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_DSimp_pre(lean_object* v_e_503_, lean_object* v___y_504_, lean_object* v___y_505_, lean_object* v___y_506_, lean_object* v___y_507_, lean_object* v___y_508_, lean_object* v___y_509_, lean_object* v___y_510_, lean_object* v___y_511_, lean_object* v___y_512_){
_start:
{
lean_object* v_pre_514_; lean_object* v___x_515_; 
v_pre_514_ = lean_ctor_get(v___y_504_, 0);
lean_inc_ref(v_pre_514_);
lean_inc(v___y_512_);
lean_inc_ref(v___y_511_);
lean_inc(v___y_510_);
lean_inc_ref(v___y_509_);
lean_inc(v___y_508_);
lean_inc_ref(v___y_507_);
lean_inc(v___y_506_);
lean_inc_ref(v___y_505_);
lean_inc(v___y_504_);
v___x_515_ = lean_apply_11(v_pre_514_, v_e_503_, v___y_504_, v___y_505_, v___y_506_, v___y_507_, v___y_508_, v___y_509_, v___y_510_, v___y_511_, v___y_512_, lean_box(0));
return v___x_515_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_DSimp_pre___boxed(lean_object* v_e_516_, lean_object* v___y_517_, lean_object* v___y_518_, lean_object* v___y_519_, lean_object* v___y_520_, lean_object* v___y_521_, lean_object* v___y_522_, lean_object* v___y_523_, lean_object* v___y_524_, lean_object* v___y_525_, lean_object* v___y_526_){
_start:
{
lean_object* v_res_527_; 
v_res_527_ = l_Lean_Meta_Sym_DSimp_pre(v_e_516_, v___y_517_, v___y_518_, v___y_519_, v___y_520_, v___y_521_, v___y_522_, v___y_523_, v___y_524_, v___y_525_);
lean_dec(v___y_525_);
lean_dec_ref(v___y_524_);
lean_dec(v___y_523_);
lean_dec_ref(v___y_522_);
lean_dec(v___y_521_);
lean_dec_ref(v___y_520_);
lean_dec(v___y_519_);
lean_dec_ref(v___y_518_);
lean_dec(v___y_517_);
return v_res_527_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_DSimp_post(lean_object* v_e_528_, lean_object* v___y_529_, lean_object* v___y_530_, lean_object* v___y_531_, lean_object* v___y_532_, lean_object* v___y_533_, lean_object* v___y_534_, lean_object* v___y_535_, lean_object* v___y_536_, lean_object* v___y_537_){
_start:
{
lean_object* v_post_539_; lean_object* v___x_540_; 
v_post_539_ = lean_ctor_get(v___y_529_, 1);
lean_inc_ref(v_post_539_);
lean_inc(v___y_537_);
lean_inc_ref(v___y_536_);
lean_inc(v___y_535_);
lean_inc_ref(v___y_534_);
lean_inc(v___y_533_);
lean_inc_ref(v___y_532_);
lean_inc(v___y_531_);
lean_inc_ref(v___y_530_);
lean_inc(v___y_529_);
v___x_540_ = lean_apply_11(v_post_539_, v_e_528_, v___y_529_, v___y_530_, v___y_531_, v___y_532_, v___y_533_, v___y_534_, v___y_535_, v___y_536_, v___y_537_, lean_box(0));
return v___x_540_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_DSimp_post___boxed(lean_object* v_e_541_, lean_object* v___y_542_, lean_object* v___y_543_, lean_object* v___y_544_, lean_object* v___y_545_, lean_object* v___y_546_, lean_object* v___y_547_, lean_object* v___y_548_, lean_object* v___y_549_, lean_object* v___y_550_, lean_object* v___y_551_){
_start:
{
lean_object* v_res_552_; 
v_res_552_ = l_Lean_Meta_Sym_DSimp_post(v_e_541_, v___y_542_, v___y_543_, v___y_544_, v___y_545_, v___y_546_, v___y_547_, v___y_548_, v___y_549_, v___y_550_);
lean_dec(v___y_550_);
lean_dec_ref(v___y_549_);
lean_dec(v___y_548_);
lean_dec_ref(v___y_547_);
lean_dec(v___y_546_);
lean_dec_ref(v___y_545_);
lean_dec(v___y_544_);
lean_dec_ref(v___y_543_);
lean_dec(v___y_542_);
return v_res_552_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_dsimp(lean_object* v_e_553_, lean_object* v_methods_554_, lean_object* v_config_555_, lean_object* v___y_556_, lean_object* v___y_557_, lean_object* v___y_558_, lean_object* v___y_559_, lean_object* v___y_560_, lean_object* v___y_561_){
_start:
{
lean_object* v___x_563_; lean_object* v___x_564_; 
lean_inc_ref(v_e_553_);
v___x_563_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_DSimp_dsimp___boxed), 11, 1);
lean_closure_set(v___x_563_, 0, v_e_553_);
v___x_564_ = l_Lean_Meta_Sym_DSimp_DSimpM_run_x27___redArg(v___x_563_, v_methods_554_, v_config_555_, v___y_556_, v___y_557_, v___y_558_, v___y_559_, v___y_560_, v___y_561_);
if (lean_obj_tag(v___x_564_) == 0)
{
lean_object* v_a_565_; lean_object* v___x_567_; uint8_t v_isShared_568_; uint8_t v_isSharedCheck_576_; 
v_a_565_ = lean_ctor_get(v___x_564_, 0);
v_isSharedCheck_576_ = !lean_is_exclusive(v___x_564_);
if (v_isSharedCheck_576_ == 0)
{
v___x_567_ = v___x_564_;
v_isShared_568_ = v_isSharedCheck_576_;
goto v_resetjp_566_;
}
else
{
lean_inc(v_a_565_);
lean_dec(v___x_564_);
v___x_567_ = lean_box(0);
v_isShared_568_ = v_isSharedCheck_576_;
goto v_resetjp_566_;
}
v_resetjp_566_:
{
if (lean_obj_tag(v_a_565_) == 0)
{
lean_object* v___x_570_; 
lean_dec_ref_known(v_a_565_, 0);
if (v_isShared_568_ == 0)
{
lean_ctor_set(v___x_567_, 0, v_e_553_);
v___x_570_ = v___x_567_;
goto v_reusejp_569_;
}
else
{
lean_object* v_reuseFailAlloc_571_; 
v_reuseFailAlloc_571_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_571_, 0, v_e_553_);
v___x_570_ = v_reuseFailAlloc_571_;
goto v_reusejp_569_;
}
v_reusejp_569_:
{
return v___x_570_;
}
}
else
{
lean_object* v_e_x27_572_; lean_object* v___x_574_; 
lean_dec_ref(v_e_553_);
v_e_x27_572_ = lean_ctor_get(v_a_565_, 0);
lean_inc_ref(v_e_x27_572_);
lean_dec_ref_known(v_a_565_, 1);
if (v_isShared_568_ == 0)
{
lean_ctor_set(v___x_567_, 0, v_e_x27_572_);
v___x_574_ = v___x_567_;
goto v_reusejp_573_;
}
else
{
lean_object* v_reuseFailAlloc_575_; 
v_reuseFailAlloc_575_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_575_, 0, v_e_x27_572_);
v___x_574_ = v_reuseFailAlloc_575_;
goto v_reusejp_573_;
}
v_reusejp_573_:
{
return v___x_574_;
}
}
}
}
else
{
lean_object* v_a_577_; lean_object* v___x_579_; uint8_t v_isShared_580_; uint8_t v_isSharedCheck_584_; 
lean_dec_ref(v_e_553_);
v_a_577_ = lean_ctor_get(v___x_564_, 0);
v_isSharedCheck_584_ = !lean_is_exclusive(v___x_564_);
if (v_isSharedCheck_584_ == 0)
{
v___x_579_ = v___x_564_;
v_isShared_580_ = v_isSharedCheck_584_;
goto v_resetjp_578_;
}
else
{
lean_inc(v_a_577_);
lean_dec(v___x_564_);
v___x_579_ = lean_box(0);
v_isShared_580_ = v_isSharedCheck_584_;
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
lean_object* v_reuseFailAlloc_583_; 
v_reuseFailAlloc_583_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_583_, 0, v_a_577_);
v___x_582_ = v_reuseFailAlloc_583_;
goto v_reusejp_581_;
}
v_reusejp_581_:
{
return v___x_582_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_dsimp___boxed(lean_object* v_e_585_, lean_object* v_methods_586_, lean_object* v_config_587_, lean_object* v___y_588_, lean_object* v___y_589_, lean_object* v___y_590_, lean_object* v___y_591_, lean_object* v___y_592_, lean_object* v___y_593_, lean_object* v___y_594_){
_start:
{
lean_object* v_res_595_; 
v_res_595_ = l_Lean_Meta_Sym_dsimp(v_e_585_, v_methods_586_, v_config_587_, v___y_588_, v___y_589_, v___y_590_, v___y_591_, v___y_592_, v___y_593_);
lean_dec(v___y_593_);
lean_dec_ref(v___y_592_);
lean_dec(v___y_591_);
lean_dec_ref(v___y_590_);
lean_dec(v___y_589_);
lean_dec_ref(v___y_588_);
return v_res_595_;
}
}
lean_object* runtime_initialize_Lean_Meta_Sym_SymM(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_ExprPtr(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Sym_DSimp_DSimpM(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Meta_Sym_SymM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_ExprPtr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Meta_Sym_DSimp_MethodsRefPointed = _init_l_Lean_Meta_Sym_DSimp_MethodsRefPointed();
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Sym_DSimp_DSimpM(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Sym_SymM(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_ExprPtr(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Sym_DSimp_DSimpM(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Sym_SymM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_ExprPtr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_DSimp_DSimpM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Sym_DSimp_DSimpM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Sym_DSimp_DSimpM(builtin);
}
#ifdef __cplusplus
}
#endif
