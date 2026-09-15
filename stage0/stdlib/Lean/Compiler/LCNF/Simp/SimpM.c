// Lean compiler output
// Module: Lean.Compiler.LCNF.Simp.SimpM
// Imports: public import Lean.Compiler.ImplementedByAttr public import Lean.Compiler.LCNF.Renaming public import Lean.Compiler.LCNF.ElimDead public import Lean.Compiler.LCNF.AlphaEqv public import Lean.Compiler.LCNF.PrettyPrinter public import Lean.Compiler.LCNF.Simp.JpCases public import Lean.Compiler.LCNF.Simp.FunDeclInfo public import Lean.Compiler.LCNF.Simp.Config
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
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_Compiler_LCNF_getPurity___redArg(lean_object*);
lean_object* l_Lean_Compiler_LCNF_LCtx_toLocalContext(lean_object*, uint8_t);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
lean_object* lean_st_ref_take(lean_object*);
double lean_float_of_nat(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg___lam__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_Simp_FunDeclInfoMap_addHo(lean_object*, lean_object*);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_array_propagate_mark(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
uint64_t l_Lean_instHashableFVarId_hash(lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_sub(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l_Lean_Compiler_LCNF_eraseLetDecl___redArg(uint8_t, lean_object*, lean_object*);
uint8_t l_Lean_instBEqFVarId_beq(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_getBinderName(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Name_isInternal(lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_FVarIdSet_insert_spec__1___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_getConfig___redArg(lean_object*);
uint8_t l_Lean_Compiler_LCNF_Code_sizeLe(uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Name_beq___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Name_hash___override___boxed(lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_MessageData_ofConstName(lean_object*, uint8_t);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_Compiler_LCNF_getPhase___redArg(lean_object*);
lean_object* l_Lean_Compiler_LCNF_getDeclAt_x3f(lean_object*, uint8_t, lean_object*, lean_object*);
uint8_t l_Lean_Compiler_LCNF_Decl_inlineIfReduceAttr___redArg(lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_insert___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
extern lean_object* l_Lean_maxRecDepthErrorMessage;
lean_object* l_Lean_Compiler_LCNF_Simp_FunDeclInfoMap_restore(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_Simp_FunDeclInfoMap_update(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg___lam__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg___lam__4___boxed(lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg___lam__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_Simp_FunDeclInfoMap_add(lean_object*, lean_object*);
lean_object* l_StateRefT_x27_instMonad___redArg(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Lean_Core_instMonadCoreM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_toSubarray___redArg(lean_object*, lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
lean_object* l_Lean_Compiler_LCNF_Code_internalize(uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_Simp_FunDeclInfoMap_addMustInline(lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_eraseFunDecl___redArg(uint8_t, lean_object*, uint8_t, lean_object*);
lean_object* l_Lean_Core_instMonadCoreM___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instFunctorOfMonad___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instFunctorOfMonad___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_instMonadCompilerM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_instMonadCompilerM___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instMonad___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_instMonadSimpM___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_instMonadSimpM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_instMonadSimpM___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_instMonadSimpM___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Compiler_LCNF_Simp_instMonadSimpM___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_Simp_instMonadSimpM___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_Simp_instMonadSimpM___closed__0_value;
static const lean_closure_object l_Lean_Compiler_LCNF_Simp_instMonadSimpM___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__1___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_Simp_instMonadSimpM___closed__1 = (const lean_object*)&l_Lean_Compiler_LCNF_Simp_instMonadSimpM___closed__1_value;
static const lean_closure_object l_Lean_Compiler_LCNF_Simp_instMonadSimpM___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__2___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_Simp_instMonadSimpM___closed__2 = (const lean_object*)&l_Lean_Compiler_LCNF_Simp_instMonadSimpM___closed__2_value;
static const lean_closure_object l_Lean_Compiler_LCNF_Simp_instMonadSimpM___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__3___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_Simp_instMonadSimpM___closed__3 = (const lean_object*)&l_Lean_Compiler_LCNF_Simp_instMonadSimpM___closed__3_value;
static const lean_closure_object l_Lean_Compiler_LCNF_Simp_instMonadSimpM___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__4___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_Simp_instMonadSimpM___closed__4 = (const lean_object*)&l_Lean_Compiler_LCNF_Simp_instMonadSimpM___closed__4_value;
static const lean_closure_object l_Lean_Compiler_LCNF_Simp_instMonadSimpM___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__6___boxed, .m_arity = 7, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_Simp_instMonadSimpM___closed__4_value),((lean_object*)&l_Lean_Compiler_LCNF_Simp_instMonadSimpM___closed__3_value)} };
static const lean_object* l_Lean_Compiler_LCNF_Simp_instMonadSimpM___closed__5 = (const lean_object*)&l_Lean_Compiler_LCNF_Simp_instMonadSimpM___closed__5_value;
static const lean_closure_object l_Lean_Compiler_LCNF_Simp_instMonadSimpM___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__9___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_Simp_instMonadSimpM___closed__3_value)} };
static const lean_object* l_Lean_Compiler_LCNF_Simp_instMonadSimpM___closed__6 = (const lean_object*)&l_Lean_Compiler_LCNF_Simp_instMonadSimpM___closed__6_value;
static const lean_closure_object l_Lean_Compiler_LCNF_Simp_instMonadSimpM___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__10___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_Simp_instMonadSimpM___closed__7 = (const lean_object*)&l_Lean_Compiler_LCNF_Simp_instMonadSimpM___closed__7_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_Simp_instMonadSimpM___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_Simp_instMonadSimpM___closed__0_value),((lean_object*)&l_Lean_Compiler_LCNF_Simp_instMonadSimpM___closed__1_value)}};
static const lean_object* l_Lean_Compiler_LCNF_Simp_instMonadSimpM___closed__8 = (const lean_object*)&l_Lean_Compiler_LCNF_Simp_instMonadSimpM___closed__8_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_Simp_instMonadSimpM___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*5 + 0, .m_other = 5, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_Simp_instMonadSimpM___closed__8_value),((lean_object*)&l_Lean_Compiler_LCNF_Simp_instMonadSimpM___closed__2_value),((lean_object*)&l_Lean_Compiler_LCNF_Simp_instMonadSimpM___closed__5_value),((lean_object*)&l_Lean_Compiler_LCNF_Simp_instMonadSimpM___closed__6_value),((lean_object*)&l_Lean_Compiler_LCNF_Simp_instMonadSimpM___closed__7_value)}};
static const lean_object* l_Lean_Compiler_LCNF_Simp_instMonadSimpM___closed__9 = (const lean_object*)&l_Lean_Compiler_LCNF_Simp_instMonadSimpM___closed__9_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_Simp_instMonadSimpM___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_Simp_instMonadSimpM___closed__9_value),((lean_object*)&l_Lean_Compiler_LCNF_Simp_instMonadSimpM___closed__3_value)}};
static const lean_object* l_Lean_Compiler_LCNF_Simp_instMonadSimpM___closed__10 = (const lean_object*)&l_Lean_Compiler_LCNF_Simp_instMonadSimpM___closed__10_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_Simp_instMonadSimpM___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_Simp_instMonadSimpM___closed__11;
static const lean_closure_object l_Lean_Compiler_LCNF_Simp_instMonadSimpM___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_Simp_instMonadSimpM___closed__12 = (const lean_object*)&l_Lean_Compiler_LCNF_Simp_instMonadSimpM___closed__12_value;
static const lean_closure_object l_Lean_Compiler_LCNF_Simp_instMonadSimpM___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__1___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_Simp_instMonadSimpM___closed__13 = (const lean_object*)&l_Lean_Compiler_LCNF_Simp_instMonadSimpM___closed__13_value;
static const lean_closure_object l_Lean_Compiler_LCNF_Simp_instMonadSimpM___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Compiler_LCNF_instMonadCompilerM___lam__0___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_Simp_instMonadSimpM___closed__14 = (const lean_object*)&l_Lean_Compiler_LCNF_Simp_instMonadSimpM___closed__14_value;
static const lean_closure_object l_Lean_Compiler_LCNF_Simp_instMonadSimpM___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Compiler_LCNF_instMonadCompilerM___lam__1___boxed, .m_arity = 9, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_Simp_instMonadSimpM___closed__15 = (const lean_object*)&l_Lean_Compiler_LCNF_Simp_instMonadSimpM___closed__15_value;
static const lean_closure_object l_Lean_Compiler_LCNF_Simp_instMonadSimpM___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Compiler_LCNF_Simp_instMonadSimpM___lam__0___boxed, .m_arity = 10, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_Simp_instMonadSimpM___closed__16 = (const lean_object*)&l_Lean_Compiler_LCNF_Simp_instMonadSimpM___closed__16_value;
static const lean_closure_object l_Lean_Compiler_LCNF_Simp_instMonadSimpM___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Compiler_LCNF_Simp_instMonadSimpM___lam__1___boxed, .m_arity = 12, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_Simp_instMonadSimpM___closed__17 = (const lean_object*)&l_Lean_Compiler_LCNF_Simp_instMonadSimpM___closed__17_value;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_instMonadSimpM;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_instMonadFVarSubstSimpMPureFalse___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_instMonadFVarSubstSimpMPureFalse___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Compiler_LCNF_Simp_instMonadFVarSubstSimpMPureFalse___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Compiler_LCNF_Simp_instMonadFVarSubstSimpMPureFalse___lam__0___boxed, .m_arity = 8, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_Simp_instMonadFVarSubstSimpMPureFalse___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_Simp_instMonadFVarSubstSimpMPureFalse___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Compiler_LCNF_Simp_instMonadFVarSubstSimpMPureFalse = (const lean_object*)&l_Lean_Compiler_LCNF_Simp_instMonadFVarSubstSimpMPureFalse___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_instMonadFVarSubstStateSimpMPure___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_instMonadFVarSubstStateSimpMPure___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Compiler_LCNF_Simp_instMonadFVarSubstStateSimpMPure___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Compiler_LCNF_Simp_instMonadFVarSubstStateSimpMPure___lam__0___boxed, .m_arity = 9, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_Simp_instMonadFVarSubstStateSimpMPure___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_Simp_instMonadFVarSubstStateSimpMPure___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Compiler_LCNF_Simp_instMonadFVarSubstStateSimpMPure = (const lean_object*)&l_Lean_Compiler_LCNF_Simp_instMonadFVarSubstStateSimpMPure___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_markSimplified___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_markSimplified___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_markSimplified(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_markSimplified___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_incVisited___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_incVisited___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_incVisited(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_incVisited___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_incInline___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_incInline___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_incInline(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_incInline___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_incInlineLocal___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_incInlineLocal___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_incInlineLocal(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_incInlineLocal___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_addMustInline___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_addMustInline___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_addMustInline(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_addMustInline___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_addFunOcc___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_addFunOcc___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_addFunOcc(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_addFunOcc___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_addFunHoOcc___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_addFunHoOcc___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_addFunHoOcc(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_addFunHoOcc___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Compiler_LCNF_Simp_updateFunDeclInfo___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_Simp_updateFunDeclInfo___redArg___closed__0;
static lean_once_cell_t l_Lean_Compiler_LCNF_Simp_updateFunDeclInfo___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_Simp_updateFunDeclInfo___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_updateFunDeclInfo___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_updateFunDeclInfo___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_updateFunDeclInfo(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_updateFunDeclInfo___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_throwError___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwError___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check_spec__0___redArg___closed__0;
static lean_once_cell_t l_Lean_throwError___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check_spec__0___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwError___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check_spec__0___redArg___closed__1;
static lean_once_cell_t l_Lean_throwError___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check_spec__0___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwError___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check_spec__0___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addTrace___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check_spec__2___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_addTrace___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check_spec__2___redArg___closed__0;
static const lean_string_object l_Lean_addTrace___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check_spec__2___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_addTrace___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check_spec__2___redArg___closed__1 = (const lean_object*)&l_Lean_addTrace___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check_spec__2___redArg___closed__1_value;
static const lean_array_object l_Lean_addTrace___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check_spec__2___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_addTrace___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check_spec__2___redArg___closed__2 = (const lean_object*)&l_Lean_addTrace___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check_spec__2___redArg___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check_spec__1_spec__1_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check_spec__1_spec__1_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check_spec__1_spec__1___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check_spec__1_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check_spec__1___redArg___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "function `"};
static const lean_object* l___private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check___closed__0 = (const lean_object*)&l___private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check___closed__0_value;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check___closed__1;
static const lean_string_object l___private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 43, .m_capacity = 43, .m_length = 42, .m_data = "` has been recursively inlined more than #"};
static const lean_object* l___private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check___closed__2 = (const lean_object*)&l___private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check___closed__2_value;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check___closed__3;
static const lean_string_object l___private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 156, .m_capacity = 156, .m_length = 155, .m_data = ", consider removing the attribute `[inline_if_reduce]` from this declaration or increasing the limit using `set_option compiler.maxRecInlineIfReduce <num>`"};
static const lean_object* l___private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check___closed__4 = (const lean_object*)&l___private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check___closed__4_value;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check___closed__5;
static const lean_string_object l___private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Compiler"};
static const lean_object* l___private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check___closed__6 = (const lean_object*)&l___private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check___closed__6_value;
static const lean_string_object l___private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "simp"};
static const lean_object* l___private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check___closed__7 = (const lean_object*)&l___private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check___closed__7_value;
static const lean_string_object l___private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "inline"};
static const lean_object* l___private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check___closed__8 = (const lean_object*)&l___private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check___closed__8_value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check___closed__9_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check___closed__6_value),LEAN_SCALAR_PTR_LITERAL(253, 55, 142, 128, 91, 63, 88, 28)}};
static const lean_ctor_object l___private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check___closed__9_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check___closed__9_value_aux_0),((lean_object*)&l___private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check___closed__7_value),LEAN_SCALAR_PTR_LITERAL(5, 122, 96, 221, 209, 205, 68, 156)}};
static const lean_ctor_object l___private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check___closed__9_value_aux_1),((lean_object*)&l___private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check___closed__8_value),LEAN_SCALAR_PTR_LITERAL(186, 182, 14, 42, 67, 101, 187, 98)}};
static const lean_object* l___private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check___closed__9 = (const lean_object*)&l___private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check___closed__9_value;
static const lean_string_object l___private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l___private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check___closed__10 = (const lean_object*)&l___private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check___closed__10_value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check___closed__10_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l___private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check___closed__11 = (const lean_object*)&l___private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check___closed__11_value;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check___closed__12;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check_spec__1_spec__1(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check_spec__1_spec__1_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check_spec__1_spec__1_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Compiler_LCNF_Simp_withInlining___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Name_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_Simp_withInlining___redArg___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_Simp_withInlining___redArg___closed__0_value;
static const lean_closure_object l_Lean_Compiler_LCNF_Simp_withInlining___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Name_hash___override___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_Simp_withInlining___redArg___closed__1 = (const lean_object*)&l_Lean_Compiler_LCNF_Simp_withInlining___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_withInlining___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_withInlining___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_withInlining(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_withInlining___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withIncRecDepth_throwMaxRecDepth_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "\n"};
static const lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withIncRecDepth_throwMaxRecDepth_spec__0___redArg___closed__0 = (const lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withIncRecDepth_throwMaxRecDepth_spec__0___redArg___closed__0_value;
static lean_once_cell_t l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withIncRecDepth_throwMaxRecDepth_spec__0___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withIncRecDepth_throwMaxRecDepth_spec__0___redArg___closed__1;
static const lean_string_object l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withIncRecDepth_throwMaxRecDepth_spec__0___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "...\n"};
static const lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withIncRecDepth_throwMaxRecDepth_spec__0___redArg___closed__2 = (const lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withIncRecDepth_throwMaxRecDepth_spec__0___redArg___closed__2_value;
static const lean_ctor_object l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withIncRecDepth_throwMaxRecDepth_spec__0___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withIncRecDepth_throwMaxRecDepth_spec__0___redArg___closed__2_value)}};
static const lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withIncRecDepth_throwMaxRecDepth_spec__0___redArg___closed__3 = (const lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withIncRecDepth_throwMaxRecDepth_spec__0___redArg___closed__3_value;
static lean_once_cell_t l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withIncRecDepth_throwMaxRecDepth_spec__0___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withIncRecDepth_throwMaxRecDepth_spec__0___redArg___closed__4;
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withIncRecDepth_throwMaxRecDepth_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withIncRecDepth_throwMaxRecDepth_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withIncRecDepth_throwMaxRecDepth___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withIncRecDepth_throwMaxRecDepth___redArg___closed__0;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withIncRecDepth_throwMaxRecDepth___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withIncRecDepth_throwMaxRecDepth___redArg___closed__1;
static const lean_string_object l___private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withIncRecDepth_throwMaxRecDepth___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 78, .m_capacity = 78, .m_length = 77, .m_data = "maximum recursion depth reached in the code generator\nfunction inline stack:\n"};
static const lean_object* l___private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withIncRecDepth_throwMaxRecDepth___redArg___closed__2 = (const lean_object*)&l___private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withIncRecDepth_throwMaxRecDepth___redArg___closed__2_value;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withIncRecDepth_throwMaxRecDepth___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withIncRecDepth_throwMaxRecDepth___redArg___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withIncRecDepth_throwMaxRecDepth___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withIncRecDepth_throwMaxRecDepth___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withIncRecDepth_throwMaxRecDepth(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withIncRecDepth_throwMaxRecDepth___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withIncRecDepth_throwMaxRecDepth_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withIncRecDepth_throwMaxRecDepth_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_withIncRecDepth___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_withIncRecDepth___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_withIncRecDepth(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_withIncRecDepth___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_withAddMustInline___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_withAddMustInline___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Compiler_LCNF_Simp_withAddMustInline_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Compiler_LCNF_Simp_withAddMustInline_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Compiler_LCNF_Simp_withAddMustInline_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Compiler_LCNF_Simp_withAddMustInline_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_withAddMustInline___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_withAddMustInline___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_withAddMustInline(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_withAddMustInline___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Compiler_LCNF_Simp_withAddMustInline_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Compiler_LCNF_Simp_withAddMustInline_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Compiler_LCNF_Simp_withAddMustInline_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Compiler_LCNF_Simp_withAddMustInline_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_isOnceOrMustInline___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_isOnceOrMustInline___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_isOnceOrMustInline(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_isOnceOrMustInline___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_isSmall___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_isSmall___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_isSmall(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_isSmall___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_shouldInlineLocal___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_shouldInlineLocal___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_shouldInlineLocal(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_shouldInlineLocal___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_betaReduce_spec__0_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_betaReduce_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_betaReduce_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_betaReduce_spec__0_spec__1_spec__2_spec__4___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_betaReduce_spec__0_spec__1_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_betaReduce_spec__0_spec__1___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_betaReduce_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_Simp_betaReduce_spec__1___redArg(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_Simp_betaReduce_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_betaReduce(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_betaReduce___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_betaReduce_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_Simp_betaReduce_spec__1(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_Simp_betaReduce_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_betaReduce_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_betaReduce_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_betaReduce_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_betaReduce_spec__0_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_betaReduce_spec__0_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_betaReduce_spec__0_spec__1_spec__2_spec__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_eraseLetDecl___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_eraseLetDecl___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_eraseLetDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_eraseLetDecl___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_eraseFunDecl___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_eraseFunDecl___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_eraseFunDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_eraseFunDecl___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_addFVarSubst___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_addFVarSubst___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_addFVarSubst(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_addFVarSubst___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_instMonadSimpM___lam__0(lean_object* v_00_u03b1_1_, lean_object* v___y_2_, lean_object* v___y_3_, lean_object* v___y_4_, lean_object* v___y_5_, lean_object* v___y_6_, lean_object* v___y_7_, lean_object* v___y_8_, lean_object* v___y_9_){
_start:
{
lean_object* v___x_11_; 
v___x_11_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_11_, 0, v___y_2_);
return v___x_11_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_instMonadSimpM___lam__0___boxed(lean_object* v_00_u03b1_12_, lean_object* v___y_13_, lean_object* v___y_14_, lean_object* v___y_15_, lean_object* v___y_16_, lean_object* v___y_17_, lean_object* v___y_18_, lean_object* v___y_19_, lean_object* v___y_20_, lean_object* v___y_21_){
_start:
{
lean_object* v_res_22_; 
v_res_22_ = l_Lean_Compiler_LCNF_Simp_instMonadSimpM___lam__0(v_00_u03b1_12_, v___y_13_, v___y_14_, v___y_15_, v___y_16_, v___y_17_, v___y_18_, v___y_19_, v___y_20_);
lean_dec(v___y_20_);
lean_dec_ref(v___y_19_);
lean_dec(v___y_18_);
lean_dec_ref(v___y_17_);
lean_dec_ref(v___y_16_);
lean_dec(v___y_15_);
lean_dec_ref(v___y_14_);
return v_res_22_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_instMonadSimpM___lam__1(lean_object* v_00_u03b1_23_, lean_object* v_00_u03b2_24_, lean_object* v___y_25_, lean_object* v___y_26_, lean_object* v___y_27_, lean_object* v___y_28_, lean_object* v___y_29_, lean_object* v___y_30_, lean_object* v___y_31_, lean_object* v___y_32_, lean_object* v___y_33_){
_start:
{
lean_object* v___x_35_; 
lean_inc(v___y_33_);
lean_inc_ref(v___y_32_);
lean_inc(v___y_31_);
lean_inc_ref(v___y_30_);
lean_inc_ref(v___y_29_);
lean_inc(v___y_28_);
lean_inc_ref(v___y_27_);
v___x_35_ = lean_apply_8(v___y_25_, v___y_27_, v___y_28_, v___y_29_, v___y_30_, v___y_31_, v___y_32_, v___y_33_, lean_box(0));
if (lean_obj_tag(v___x_35_) == 0)
{
lean_object* v_a_36_; lean_object* v___x_37_; 
v_a_36_ = lean_ctor_get(v___x_35_, 0);
lean_inc(v_a_36_);
lean_dec_ref_known(v___x_35_, 1);
lean_inc(v___y_33_);
lean_inc_ref(v___y_32_);
lean_inc(v___y_31_);
lean_inc_ref(v___y_30_);
lean_inc_ref(v___y_29_);
lean_inc(v___y_28_);
lean_inc_ref(v___y_27_);
v___x_37_ = lean_apply_9(v___y_26_, v_a_36_, v___y_27_, v___y_28_, v___y_29_, v___y_30_, v___y_31_, v___y_32_, v___y_33_, lean_box(0));
return v___x_37_;
}
else
{
lean_object* v_a_38_; lean_object* v___x_40_; uint8_t v_isShared_41_; uint8_t v_isSharedCheck_45_; 
lean_dec_ref(v___y_26_);
v_a_38_ = lean_ctor_get(v___x_35_, 0);
v_isSharedCheck_45_ = !lean_is_exclusive(v___x_35_);
if (v_isSharedCheck_45_ == 0)
{
v___x_40_ = v___x_35_;
v_isShared_41_ = v_isSharedCheck_45_;
goto v_resetjp_39_;
}
else
{
lean_inc(v_a_38_);
lean_dec(v___x_35_);
v___x_40_ = lean_box(0);
v_isShared_41_ = v_isSharedCheck_45_;
goto v_resetjp_39_;
}
v_resetjp_39_:
{
lean_object* v___x_43_; 
if (v_isShared_41_ == 0)
{
v___x_43_ = v___x_40_;
goto v_reusejp_42_;
}
else
{
lean_object* v_reuseFailAlloc_44_; 
v_reuseFailAlloc_44_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_44_, 0, v_a_38_);
v___x_43_ = v_reuseFailAlloc_44_;
goto v_reusejp_42_;
}
v_reusejp_42_:
{
return v___x_43_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_instMonadSimpM___lam__1___boxed(lean_object* v_00_u03b1_46_, lean_object* v_00_u03b2_47_, lean_object* v___y_48_, lean_object* v___y_49_, lean_object* v___y_50_, lean_object* v___y_51_, lean_object* v___y_52_, lean_object* v___y_53_, lean_object* v___y_54_, lean_object* v___y_55_, lean_object* v___y_56_, lean_object* v___y_57_){
_start:
{
lean_object* v_res_58_; 
v_res_58_ = l_Lean_Compiler_LCNF_Simp_instMonadSimpM___lam__1(v_00_u03b1_46_, v_00_u03b2_47_, v___y_48_, v___y_49_, v___y_50_, v___y_51_, v___y_52_, v___y_53_, v___y_54_, v___y_55_, v___y_56_);
lean_dec(v___y_56_);
lean_dec_ref(v___y_55_);
lean_dec(v___y_54_);
lean_dec_ref(v___y_53_);
lean_dec_ref(v___y_52_);
lean_dec(v___y_51_);
lean_dec_ref(v___y_50_);
return v_res_58_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Simp_instMonadSimpM___closed__11(void){
_start:
{
lean_object* v___x_82_; lean_object* v___x_83_; 
v___x_82_ = ((lean_object*)(l_Lean_Compiler_LCNF_Simp_instMonadSimpM___closed__10));
v___x_83_ = l_StateRefT_x27_instMonad___redArg(v___x_82_);
return v___x_83_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Simp_instMonadSimpM(void){
_start:
{
lean_object* v___x_90_; lean_object* v_toApplicative_91_; lean_object* v_toFunctor_92_; lean_object* v_toSeq_93_; lean_object* v_toSeqLeft_94_; lean_object* v_toSeqRight_95_; lean_object* v___f_96_; lean_object* v___f_97_; lean_object* v___f_98_; lean_object* v___f_99_; lean_object* v___x_100_; lean_object* v___f_101_; lean_object* v___f_102_; lean_object* v___f_103_; lean_object* v___x_104_; lean_object* v___x_105_; lean_object* v___x_106_; lean_object* v_toApplicative_107_; lean_object* v___x_109_; uint8_t v_isShared_110_; uint8_t v_isSharedCheck_165_; 
v___x_90_ = lean_obj_once(&l_Lean_Compiler_LCNF_Simp_instMonadSimpM___closed__11, &l_Lean_Compiler_LCNF_Simp_instMonadSimpM___closed__11_once, _init_l_Lean_Compiler_LCNF_Simp_instMonadSimpM___closed__11);
v_toApplicative_91_ = lean_ctor_get(v___x_90_, 0);
v_toFunctor_92_ = lean_ctor_get(v_toApplicative_91_, 0);
v_toSeq_93_ = lean_ctor_get(v_toApplicative_91_, 2);
v_toSeqLeft_94_ = lean_ctor_get(v_toApplicative_91_, 3);
v_toSeqRight_95_ = lean_ctor_get(v_toApplicative_91_, 4);
v___f_96_ = ((lean_object*)(l_Lean_Compiler_LCNF_Simp_instMonadSimpM___closed__12));
v___f_97_ = ((lean_object*)(l_Lean_Compiler_LCNF_Simp_instMonadSimpM___closed__13));
lean_inc_ref_n(v_toFunctor_92_, 2);
v___f_98_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_98_, 0, v_toFunctor_92_);
v___f_99_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_99_, 0, v_toFunctor_92_);
v___x_100_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_100_, 0, v___f_98_);
lean_ctor_set(v___x_100_, 1, v___f_99_);
lean_inc(v_toSeqRight_95_);
v___f_101_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_101_, 0, v_toSeqRight_95_);
lean_inc(v_toSeqLeft_94_);
v___f_102_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3___boxed), 6, 1);
lean_closure_set(v___f_102_, 0, v_toSeqLeft_94_);
lean_inc(v_toSeq_93_);
v___f_103_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4___boxed), 6, 1);
lean_closure_set(v___f_103_, 0, v_toSeq_93_);
v___x_104_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_104_, 0, v___x_100_);
lean_ctor_set(v___x_104_, 1, v___f_96_);
lean_ctor_set(v___x_104_, 2, v___f_103_);
lean_ctor_set(v___x_104_, 3, v___f_102_);
lean_ctor_set(v___x_104_, 4, v___f_101_);
v___x_105_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_105_, 0, v___x_104_);
lean_ctor_set(v___x_105_, 1, v___f_97_);
v___x_106_ = l_StateRefT_x27_instMonad___redArg(v___x_105_);
v_toApplicative_107_ = lean_ctor_get(v___x_106_, 0);
v_isSharedCheck_165_ = !lean_is_exclusive(v___x_106_);
if (v_isSharedCheck_165_ == 0)
{
lean_object* v_unused_166_; 
v_unused_166_ = lean_ctor_get(v___x_106_, 1);
lean_dec(v_unused_166_);
v___x_109_ = v___x_106_;
v_isShared_110_ = v_isSharedCheck_165_;
goto v_resetjp_108_;
}
else
{
lean_inc(v_toApplicative_107_);
lean_dec(v___x_106_);
v___x_109_ = lean_box(0);
v_isShared_110_ = v_isSharedCheck_165_;
goto v_resetjp_108_;
}
v_resetjp_108_:
{
lean_object* v_toFunctor_111_; lean_object* v_toSeq_112_; lean_object* v_toSeqLeft_113_; lean_object* v_toSeqRight_114_; lean_object* v___x_116_; uint8_t v_isShared_117_; uint8_t v_isSharedCheck_163_; 
v_toFunctor_111_ = lean_ctor_get(v_toApplicative_107_, 0);
v_toSeq_112_ = lean_ctor_get(v_toApplicative_107_, 2);
v_toSeqLeft_113_ = lean_ctor_get(v_toApplicative_107_, 3);
v_toSeqRight_114_ = lean_ctor_get(v_toApplicative_107_, 4);
v_isSharedCheck_163_ = !lean_is_exclusive(v_toApplicative_107_);
if (v_isSharedCheck_163_ == 0)
{
lean_object* v_unused_164_; 
v_unused_164_ = lean_ctor_get(v_toApplicative_107_, 1);
lean_dec(v_unused_164_);
v___x_116_ = v_toApplicative_107_;
v_isShared_117_ = v_isSharedCheck_163_;
goto v_resetjp_115_;
}
else
{
lean_inc(v_toSeqRight_114_);
lean_inc(v_toSeqLeft_113_);
lean_inc(v_toSeq_112_);
lean_inc(v_toFunctor_111_);
lean_dec(v_toApplicative_107_);
v___x_116_ = lean_box(0);
v_isShared_117_ = v_isSharedCheck_163_;
goto v_resetjp_115_;
}
v_resetjp_115_:
{
lean_object* v___f_118_; lean_object* v___f_119_; lean_object* v___f_120_; lean_object* v___f_121_; lean_object* v___x_122_; lean_object* v___f_123_; lean_object* v___f_124_; lean_object* v___f_125_; lean_object* v___x_127_; 
v___f_118_ = ((lean_object*)(l_Lean_Compiler_LCNF_Simp_instMonadSimpM___closed__14));
v___f_119_ = ((lean_object*)(l_Lean_Compiler_LCNF_Simp_instMonadSimpM___closed__15));
lean_inc_ref(v_toFunctor_111_);
v___f_120_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_120_, 0, v_toFunctor_111_);
v___f_121_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_121_, 0, v_toFunctor_111_);
v___x_122_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_122_, 0, v___f_120_);
lean_ctor_set(v___x_122_, 1, v___f_121_);
v___f_123_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_123_, 0, v_toSeqRight_114_);
v___f_124_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3___boxed), 6, 1);
lean_closure_set(v___f_124_, 0, v_toSeqLeft_113_);
v___f_125_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4___boxed), 6, 1);
lean_closure_set(v___f_125_, 0, v_toSeq_112_);
if (v_isShared_117_ == 0)
{
lean_ctor_set(v___x_116_, 4, v___f_123_);
lean_ctor_set(v___x_116_, 3, v___f_124_);
lean_ctor_set(v___x_116_, 2, v___f_125_);
lean_ctor_set(v___x_116_, 1, v___f_118_);
lean_ctor_set(v___x_116_, 0, v___x_122_);
v___x_127_ = v___x_116_;
goto v_reusejp_126_;
}
else
{
lean_object* v_reuseFailAlloc_162_; 
v_reuseFailAlloc_162_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_162_, 0, v___x_122_);
lean_ctor_set(v_reuseFailAlloc_162_, 1, v___f_118_);
lean_ctor_set(v_reuseFailAlloc_162_, 2, v___f_125_);
lean_ctor_set(v_reuseFailAlloc_162_, 3, v___f_124_);
lean_ctor_set(v_reuseFailAlloc_162_, 4, v___f_123_);
v___x_127_ = v_reuseFailAlloc_162_;
goto v_reusejp_126_;
}
v_reusejp_126_:
{
lean_object* v___x_129_; 
if (v_isShared_110_ == 0)
{
lean_ctor_set(v___x_109_, 1, v___f_119_);
lean_ctor_set(v___x_109_, 0, v___x_127_);
v___x_129_ = v___x_109_;
goto v_reusejp_128_;
}
else
{
lean_object* v_reuseFailAlloc_161_; 
v_reuseFailAlloc_161_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_161_, 0, v___x_127_);
lean_ctor_set(v_reuseFailAlloc_161_, 1, v___f_119_);
v___x_129_ = v_reuseFailAlloc_161_;
goto v_reusejp_128_;
}
v_reusejp_128_:
{
lean_object* v___x_130_; lean_object* v___x_131_; lean_object* v_toApplicative_132_; lean_object* v___x_134_; uint8_t v_isShared_135_; uint8_t v_isSharedCheck_159_; 
v___x_130_ = l_ReaderT_instMonad___redArg(v___x_129_);
v___x_131_ = l_StateRefT_x27_instMonad___redArg(v___x_130_);
v_toApplicative_132_ = lean_ctor_get(v___x_131_, 0);
v_isSharedCheck_159_ = !lean_is_exclusive(v___x_131_);
if (v_isSharedCheck_159_ == 0)
{
lean_object* v_unused_160_; 
v_unused_160_ = lean_ctor_get(v___x_131_, 1);
lean_dec(v_unused_160_);
v___x_134_ = v___x_131_;
v_isShared_135_ = v_isSharedCheck_159_;
goto v_resetjp_133_;
}
else
{
lean_inc(v_toApplicative_132_);
lean_dec(v___x_131_);
v___x_134_ = lean_box(0);
v_isShared_135_ = v_isSharedCheck_159_;
goto v_resetjp_133_;
}
v_resetjp_133_:
{
lean_object* v_toFunctor_136_; lean_object* v_toSeq_137_; lean_object* v_toSeqLeft_138_; lean_object* v_toSeqRight_139_; lean_object* v___x_141_; uint8_t v_isShared_142_; uint8_t v_isSharedCheck_157_; 
v_toFunctor_136_ = lean_ctor_get(v_toApplicative_132_, 0);
v_toSeq_137_ = lean_ctor_get(v_toApplicative_132_, 2);
v_toSeqLeft_138_ = lean_ctor_get(v_toApplicative_132_, 3);
v_toSeqRight_139_ = lean_ctor_get(v_toApplicative_132_, 4);
v_isSharedCheck_157_ = !lean_is_exclusive(v_toApplicative_132_);
if (v_isSharedCheck_157_ == 0)
{
lean_object* v_unused_158_; 
v_unused_158_ = lean_ctor_get(v_toApplicative_132_, 1);
lean_dec(v_unused_158_);
v___x_141_ = v_toApplicative_132_;
v_isShared_142_ = v_isSharedCheck_157_;
goto v_resetjp_140_;
}
else
{
lean_inc(v_toSeqRight_139_);
lean_inc(v_toSeqLeft_138_);
lean_inc(v_toSeq_137_);
lean_inc(v_toFunctor_136_);
lean_dec(v_toApplicative_132_);
v___x_141_ = lean_box(0);
v_isShared_142_ = v_isSharedCheck_157_;
goto v_resetjp_140_;
}
v_resetjp_140_:
{
lean_object* v___f_143_; lean_object* v___f_144_; lean_object* v___f_145_; lean_object* v___f_146_; lean_object* v___x_147_; lean_object* v___f_148_; lean_object* v___f_149_; lean_object* v___f_150_; lean_object* v___x_152_; 
v___f_143_ = ((lean_object*)(l_Lean_Compiler_LCNF_Simp_instMonadSimpM___closed__16));
v___f_144_ = ((lean_object*)(l_Lean_Compiler_LCNF_Simp_instMonadSimpM___closed__17));
lean_inc_ref(v_toFunctor_136_);
v___f_145_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_145_, 0, v_toFunctor_136_);
v___f_146_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_146_, 0, v_toFunctor_136_);
v___x_147_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_147_, 0, v___f_145_);
lean_ctor_set(v___x_147_, 1, v___f_146_);
v___f_148_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_148_, 0, v_toSeqRight_139_);
v___f_149_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3___boxed), 6, 1);
lean_closure_set(v___f_149_, 0, v_toSeqLeft_138_);
v___f_150_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4___boxed), 6, 1);
lean_closure_set(v___f_150_, 0, v_toSeq_137_);
if (v_isShared_142_ == 0)
{
lean_ctor_set(v___x_141_, 4, v___f_148_);
lean_ctor_set(v___x_141_, 3, v___f_149_);
lean_ctor_set(v___x_141_, 2, v___f_150_);
lean_ctor_set(v___x_141_, 1, v___f_143_);
lean_ctor_set(v___x_141_, 0, v___x_147_);
v___x_152_ = v___x_141_;
goto v_reusejp_151_;
}
else
{
lean_object* v_reuseFailAlloc_156_; 
v_reuseFailAlloc_156_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_156_, 0, v___x_147_);
lean_ctor_set(v_reuseFailAlloc_156_, 1, v___f_143_);
lean_ctor_set(v_reuseFailAlloc_156_, 2, v___f_150_);
lean_ctor_set(v_reuseFailAlloc_156_, 3, v___f_149_);
lean_ctor_set(v_reuseFailAlloc_156_, 4, v___f_148_);
v___x_152_ = v_reuseFailAlloc_156_;
goto v_reusejp_151_;
}
v_reusejp_151_:
{
lean_object* v___x_154_; 
if (v_isShared_135_ == 0)
{
lean_ctor_set(v___x_134_, 1, v___f_144_);
lean_ctor_set(v___x_134_, 0, v___x_152_);
v___x_154_ = v___x_134_;
goto v_reusejp_153_;
}
else
{
lean_object* v_reuseFailAlloc_155_; 
v_reuseFailAlloc_155_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_155_, 0, v___x_152_);
lean_ctor_set(v_reuseFailAlloc_155_, 1, v___f_144_);
v___x_154_ = v_reuseFailAlloc_155_;
goto v_reusejp_153_;
}
v_reusejp_153_:
{
return v___x_154_;
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
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_instMonadFVarSubstSimpMPureFalse___lam__0(lean_object* v___y_167_, lean_object* v___y_168_, lean_object* v___y_169_, lean_object* v___y_170_, lean_object* v___y_171_, lean_object* v___y_172_, lean_object* v___y_173_){
_start:
{
lean_object* v___x_175_; lean_object* v_subst_176_; lean_object* v___x_177_; 
v___x_175_ = lean_st_ref_get(v___y_168_);
v_subst_176_ = lean_ctor_get(v___x_175_, 0);
lean_inc_ref(v_subst_176_);
lean_dec(v___x_175_);
v___x_177_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_177_, 0, v_subst_176_);
return v___x_177_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_instMonadFVarSubstSimpMPureFalse___lam__0___boxed(lean_object* v___y_178_, lean_object* v___y_179_, lean_object* v___y_180_, lean_object* v___y_181_, lean_object* v___y_182_, lean_object* v___y_183_, lean_object* v___y_184_, lean_object* v___y_185_){
_start:
{
lean_object* v_res_186_; 
v_res_186_ = l_Lean_Compiler_LCNF_Simp_instMonadFVarSubstSimpMPureFalse___lam__0(v___y_178_, v___y_179_, v___y_180_, v___y_181_, v___y_182_, v___y_183_, v___y_184_);
lean_dec(v___y_184_);
lean_dec_ref(v___y_183_);
lean_dec(v___y_182_);
lean_dec_ref(v___y_181_);
lean_dec_ref(v___y_180_);
lean_dec(v___y_179_);
lean_dec_ref(v___y_178_);
return v_res_186_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_instMonadFVarSubstStateSimpMPure___lam__0(lean_object* v_f_189_, lean_object* v___y_190_, lean_object* v___y_191_, lean_object* v___y_192_, lean_object* v___y_193_, lean_object* v___y_194_, lean_object* v___y_195_, lean_object* v___y_196_){
_start:
{
lean_object* v___x_198_; lean_object* v_subst_199_; lean_object* v_used_200_; lean_object* v_binderRenaming_201_; lean_object* v_funDeclInfoMap_202_; uint8_t v_simplified_203_; lean_object* v_visited_204_; lean_object* v_inline_205_; lean_object* v_inlineLocal_206_; lean_object* v___x_208_; uint8_t v_isShared_209_; uint8_t v_isSharedCheck_217_; 
v___x_198_ = lean_st_ref_take(v___y_191_);
v_subst_199_ = lean_ctor_get(v___x_198_, 0);
v_used_200_ = lean_ctor_get(v___x_198_, 1);
v_binderRenaming_201_ = lean_ctor_get(v___x_198_, 2);
v_funDeclInfoMap_202_ = lean_ctor_get(v___x_198_, 3);
v_simplified_203_ = lean_ctor_get_uint8(v___x_198_, sizeof(void*)*7);
v_visited_204_ = lean_ctor_get(v___x_198_, 4);
v_inline_205_ = lean_ctor_get(v___x_198_, 5);
v_inlineLocal_206_ = lean_ctor_get(v___x_198_, 6);
v_isSharedCheck_217_ = !lean_is_exclusive(v___x_198_);
if (v_isSharedCheck_217_ == 0)
{
v___x_208_ = v___x_198_;
v_isShared_209_ = v_isSharedCheck_217_;
goto v_resetjp_207_;
}
else
{
lean_inc(v_inlineLocal_206_);
lean_inc(v_inline_205_);
lean_inc(v_visited_204_);
lean_inc(v_funDeclInfoMap_202_);
lean_inc(v_binderRenaming_201_);
lean_inc(v_used_200_);
lean_inc(v_subst_199_);
lean_dec(v___x_198_);
v___x_208_ = lean_box(0);
v_isShared_209_ = v_isSharedCheck_217_;
goto v_resetjp_207_;
}
v_resetjp_207_:
{
lean_object* v___x_210_; lean_object* v___x_211_; lean_object* v___x_213_; 
v___x_210_ = lean_box(0);
v___x_211_ = lean_apply_1(v_f_189_, v_subst_199_);
if (v_isShared_209_ == 0)
{
lean_ctor_set(v___x_208_, 0, v___x_211_);
v___x_213_ = v___x_208_;
goto v_reusejp_212_;
}
else
{
lean_object* v_reuseFailAlloc_216_; 
v_reuseFailAlloc_216_ = lean_alloc_ctor(0, 7, 1);
lean_ctor_set(v_reuseFailAlloc_216_, 0, v___x_211_);
lean_ctor_set(v_reuseFailAlloc_216_, 1, v_used_200_);
lean_ctor_set(v_reuseFailAlloc_216_, 2, v_binderRenaming_201_);
lean_ctor_set(v_reuseFailAlloc_216_, 3, v_funDeclInfoMap_202_);
lean_ctor_set(v_reuseFailAlloc_216_, 4, v_visited_204_);
lean_ctor_set(v_reuseFailAlloc_216_, 5, v_inline_205_);
lean_ctor_set(v_reuseFailAlloc_216_, 6, v_inlineLocal_206_);
lean_ctor_set_uint8(v_reuseFailAlloc_216_, sizeof(void*)*7, v_simplified_203_);
v___x_213_ = v_reuseFailAlloc_216_;
goto v_reusejp_212_;
}
v_reusejp_212_:
{
lean_object* v___x_214_; lean_object* v___x_215_; 
v___x_214_ = lean_st_ref_put(v___y_191_, v___x_213_);
v___x_215_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_215_, 0, v___x_210_);
return v___x_215_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_instMonadFVarSubstStateSimpMPure___lam__0___boxed(lean_object* v_f_218_, lean_object* v___y_219_, lean_object* v___y_220_, lean_object* v___y_221_, lean_object* v___y_222_, lean_object* v___y_223_, lean_object* v___y_224_, lean_object* v___y_225_, lean_object* v___y_226_){
_start:
{
lean_object* v_res_227_; 
v_res_227_ = l_Lean_Compiler_LCNF_Simp_instMonadFVarSubstStateSimpMPure___lam__0(v_f_218_, v___y_219_, v___y_220_, v___y_221_, v___y_222_, v___y_223_, v___y_224_, v___y_225_);
lean_dec(v___y_225_);
lean_dec_ref(v___y_224_);
lean_dec(v___y_223_);
lean_dec_ref(v___y_222_);
lean_dec_ref(v___y_221_);
lean_dec(v___y_220_);
lean_dec_ref(v___y_219_);
return v_res_227_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_markSimplified___redArg(lean_object* v___y_230_){
_start:
{
lean_object* v___x_232_; lean_object* v_subst_233_; lean_object* v_used_234_; lean_object* v_binderRenaming_235_; lean_object* v_funDeclInfoMap_236_; lean_object* v_visited_237_; lean_object* v_inline_238_; lean_object* v_inlineLocal_239_; lean_object* v___x_241_; uint8_t v_isShared_242_; uint8_t v_isSharedCheck_250_; 
v___x_232_ = lean_st_ref_take(v___y_230_);
v_subst_233_ = lean_ctor_get(v___x_232_, 0);
v_used_234_ = lean_ctor_get(v___x_232_, 1);
v_binderRenaming_235_ = lean_ctor_get(v___x_232_, 2);
v_funDeclInfoMap_236_ = lean_ctor_get(v___x_232_, 3);
v_visited_237_ = lean_ctor_get(v___x_232_, 4);
v_inline_238_ = lean_ctor_get(v___x_232_, 5);
v_inlineLocal_239_ = lean_ctor_get(v___x_232_, 6);
v_isSharedCheck_250_ = !lean_is_exclusive(v___x_232_);
if (v_isSharedCheck_250_ == 0)
{
v___x_241_ = v___x_232_;
v_isShared_242_ = v_isSharedCheck_250_;
goto v_resetjp_240_;
}
else
{
lean_inc(v_inlineLocal_239_);
lean_inc(v_inline_238_);
lean_inc(v_visited_237_);
lean_inc(v_funDeclInfoMap_236_);
lean_inc(v_binderRenaming_235_);
lean_inc(v_used_234_);
lean_inc(v_subst_233_);
lean_dec(v___x_232_);
v___x_241_ = lean_box(0);
v_isShared_242_ = v_isSharedCheck_250_;
goto v_resetjp_240_;
}
v_resetjp_240_:
{
lean_object* v___x_243_; uint8_t v___x_244_; lean_object* v___x_246_; 
v___x_243_ = lean_box(0);
v___x_244_ = 1;
if (v_isShared_242_ == 0)
{
v___x_246_ = v___x_241_;
goto v_reusejp_245_;
}
else
{
lean_object* v_reuseFailAlloc_249_; 
v_reuseFailAlloc_249_ = lean_alloc_ctor(0, 7, 1);
lean_ctor_set(v_reuseFailAlloc_249_, 0, v_subst_233_);
lean_ctor_set(v_reuseFailAlloc_249_, 1, v_used_234_);
lean_ctor_set(v_reuseFailAlloc_249_, 2, v_binderRenaming_235_);
lean_ctor_set(v_reuseFailAlloc_249_, 3, v_funDeclInfoMap_236_);
lean_ctor_set(v_reuseFailAlloc_249_, 4, v_visited_237_);
lean_ctor_set(v_reuseFailAlloc_249_, 5, v_inline_238_);
lean_ctor_set(v_reuseFailAlloc_249_, 6, v_inlineLocal_239_);
v___x_246_ = v_reuseFailAlloc_249_;
goto v_reusejp_245_;
}
v_reusejp_245_:
{
lean_object* v___x_247_; lean_object* v___x_248_; 
lean_ctor_set_uint8(v___x_246_, sizeof(void*)*7, v___x_244_);
v___x_247_ = lean_st_ref_put(v___y_230_, v___x_246_);
v___x_248_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_248_, 0, v___x_243_);
return v___x_248_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_markSimplified___redArg___boxed(lean_object* v___y_251_, lean_object* v___y_252_){
_start:
{
lean_object* v_res_253_; 
v_res_253_ = l_Lean_Compiler_LCNF_Simp_markSimplified___redArg(v___y_251_);
lean_dec(v___y_251_);
return v_res_253_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_markSimplified(lean_object* v___y_254_, lean_object* v___y_255_, lean_object* v___y_256_, lean_object* v___y_257_, lean_object* v___y_258_, lean_object* v___y_259_, lean_object* v___y_260_){
_start:
{
lean_object* v___x_262_; 
v___x_262_ = l_Lean_Compiler_LCNF_Simp_markSimplified___redArg(v___y_255_);
return v___x_262_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_markSimplified___boxed(lean_object* v___y_263_, lean_object* v___y_264_, lean_object* v___y_265_, lean_object* v___y_266_, lean_object* v___y_267_, lean_object* v___y_268_, lean_object* v___y_269_, lean_object* v___y_270_){
_start:
{
lean_object* v_res_271_; 
v_res_271_ = l_Lean_Compiler_LCNF_Simp_markSimplified(v___y_263_, v___y_264_, v___y_265_, v___y_266_, v___y_267_, v___y_268_, v___y_269_);
lean_dec(v___y_269_);
lean_dec_ref(v___y_268_);
lean_dec(v___y_267_);
lean_dec_ref(v___y_266_);
lean_dec_ref(v___y_265_);
lean_dec(v___y_264_);
lean_dec_ref(v___y_263_);
return v_res_271_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_incVisited___redArg(lean_object* v___y_272_){
_start:
{
lean_object* v___x_274_; lean_object* v_subst_275_; lean_object* v_used_276_; lean_object* v_binderRenaming_277_; lean_object* v_funDeclInfoMap_278_; uint8_t v_simplified_279_; lean_object* v_visited_280_; lean_object* v_inline_281_; lean_object* v_inlineLocal_282_; lean_object* v___x_284_; uint8_t v_isShared_285_; uint8_t v_isSharedCheck_294_; 
v___x_274_ = lean_st_ref_take(v___y_272_);
v_subst_275_ = lean_ctor_get(v___x_274_, 0);
v_used_276_ = lean_ctor_get(v___x_274_, 1);
v_binderRenaming_277_ = lean_ctor_get(v___x_274_, 2);
v_funDeclInfoMap_278_ = lean_ctor_get(v___x_274_, 3);
v_simplified_279_ = lean_ctor_get_uint8(v___x_274_, sizeof(void*)*7);
v_visited_280_ = lean_ctor_get(v___x_274_, 4);
v_inline_281_ = lean_ctor_get(v___x_274_, 5);
v_inlineLocal_282_ = lean_ctor_get(v___x_274_, 6);
v_isSharedCheck_294_ = !lean_is_exclusive(v___x_274_);
if (v_isSharedCheck_294_ == 0)
{
v___x_284_ = v___x_274_;
v_isShared_285_ = v_isSharedCheck_294_;
goto v_resetjp_283_;
}
else
{
lean_inc(v_inlineLocal_282_);
lean_inc(v_inline_281_);
lean_inc(v_visited_280_);
lean_inc(v_funDeclInfoMap_278_);
lean_inc(v_binderRenaming_277_);
lean_inc(v_used_276_);
lean_inc(v_subst_275_);
lean_dec(v___x_274_);
v___x_284_ = lean_box(0);
v_isShared_285_ = v_isSharedCheck_294_;
goto v_resetjp_283_;
}
v_resetjp_283_:
{
lean_object* v___x_286_; lean_object* v___x_287_; lean_object* v___x_288_; lean_object* v___x_290_; 
v___x_286_ = lean_box(0);
v___x_287_ = lean_unsigned_to_nat(1u);
v___x_288_ = lean_nat_add(v_visited_280_, v___x_287_);
lean_dec(v_visited_280_);
if (v_isShared_285_ == 0)
{
lean_ctor_set(v___x_284_, 4, v___x_288_);
v___x_290_ = v___x_284_;
goto v_reusejp_289_;
}
else
{
lean_object* v_reuseFailAlloc_293_; 
v_reuseFailAlloc_293_ = lean_alloc_ctor(0, 7, 1);
lean_ctor_set(v_reuseFailAlloc_293_, 0, v_subst_275_);
lean_ctor_set(v_reuseFailAlloc_293_, 1, v_used_276_);
lean_ctor_set(v_reuseFailAlloc_293_, 2, v_binderRenaming_277_);
lean_ctor_set(v_reuseFailAlloc_293_, 3, v_funDeclInfoMap_278_);
lean_ctor_set(v_reuseFailAlloc_293_, 4, v___x_288_);
lean_ctor_set(v_reuseFailAlloc_293_, 5, v_inline_281_);
lean_ctor_set(v_reuseFailAlloc_293_, 6, v_inlineLocal_282_);
lean_ctor_set_uint8(v_reuseFailAlloc_293_, sizeof(void*)*7, v_simplified_279_);
v___x_290_ = v_reuseFailAlloc_293_;
goto v_reusejp_289_;
}
v_reusejp_289_:
{
lean_object* v___x_291_; lean_object* v___x_292_; 
v___x_291_ = lean_st_ref_put(v___y_272_, v___x_290_);
v___x_292_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_292_, 0, v___x_286_);
return v___x_292_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_incVisited___redArg___boxed(lean_object* v___y_295_, lean_object* v___y_296_){
_start:
{
lean_object* v_res_297_; 
v_res_297_ = l_Lean_Compiler_LCNF_Simp_incVisited___redArg(v___y_295_);
lean_dec(v___y_295_);
return v_res_297_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_incVisited(lean_object* v___y_298_, lean_object* v___y_299_, lean_object* v___y_300_, lean_object* v___y_301_, lean_object* v___y_302_, lean_object* v___y_303_, lean_object* v___y_304_){
_start:
{
lean_object* v___x_306_; 
v___x_306_ = l_Lean_Compiler_LCNF_Simp_incVisited___redArg(v___y_299_);
return v___x_306_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_incVisited___boxed(lean_object* v___y_307_, lean_object* v___y_308_, lean_object* v___y_309_, lean_object* v___y_310_, lean_object* v___y_311_, lean_object* v___y_312_, lean_object* v___y_313_, lean_object* v___y_314_){
_start:
{
lean_object* v_res_315_; 
v_res_315_ = l_Lean_Compiler_LCNF_Simp_incVisited(v___y_307_, v___y_308_, v___y_309_, v___y_310_, v___y_311_, v___y_312_, v___y_313_);
lean_dec(v___y_313_);
lean_dec_ref(v___y_312_);
lean_dec(v___y_311_);
lean_dec_ref(v___y_310_);
lean_dec_ref(v___y_309_);
lean_dec(v___y_308_);
lean_dec_ref(v___y_307_);
return v_res_315_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_incInline___redArg(lean_object* v___y_316_){
_start:
{
lean_object* v___x_318_; lean_object* v_subst_319_; lean_object* v_used_320_; lean_object* v_binderRenaming_321_; lean_object* v_funDeclInfoMap_322_; uint8_t v_simplified_323_; lean_object* v_visited_324_; lean_object* v_inline_325_; lean_object* v_inlineLocal_326_; lean_object* v___x_328_; uint8_t v_isShared_329_; uint8_t v_isSharedCheck_338_; 
v___x_318_ = lean_st_ref_take(v___y_316_);
v_subst_319_ = lean_ctor_get(v___x_318_, 0);
v_used_320_ = lean_ctor_get(v___x_318_, 1);
v_binderRenaming_321_ = lean_ctor_get(v___x_318_, 2);
v_funDeclInfoMap_322_ = lean_ctor_get(v___x_318_, 3);
v_simplified_323_ = lean_ctor_get_uint8(v___x_318_, sizeof(void*)*7);
v_visited_324_ = lean_ctor_get(v___x_318_, 4);
v_inline_325_ = lean_ctor_get(v___x_318_, 5);
v_inlineLocal_326_ = lean_ctor_get(v___x_318_, 6);
v_isSharedCheck_338_ = !lean_is_exclusive(v___x_318_);
if (v_isSharedCheck_338_ == 0)
{
v___x_328_ = v___x_318_;
v_isShared_329_ = v_isSharedCheck_338_;
goto v_resetjp_327_;
}
else
{
lean_inc(v_inlineLocal_326_);
lean_inc(v_inline_325_);
lean_inc(v_visited_324_);
lean_inc(v_funDeclInfoMap_322_);
lean_inc(v_binderRenaming_321_);
lean_inc(v_used_320_);
lean_inc(v_subst_319_);
lean_dec(v___x_318_);
v___x_328_ = lean_box(0);
v_isShared_329_ = v_isSharedCheck_338_;
goto v_resetjp_327_;
}
v_resetjp_327_:
{
lean_object* v___x_330_; lean_object* v___x_331_; lean_object* v___x_332_; lean_object* v___x_334_; 
v___x_330_ = lean_box(0);
v___x_331_ = lean_unsigned_to_nat(1u);
v___x_332_ = lean_nat_add(v_inline_325_, v___x_331_);
lean_dec(v_inline_325_);
if (v_isShared_329_ == 0)
{
lean_ctor_set(v___x_328_, 5, v___x_332_);
v___x_334_ = v___x_328_;
goto v_reusejp_333_;
}
else
{
lean_object* v_reuseFailAlloc_337_; 
v_reuseFailAlloc_337_ = lean_alloc_ctor(0, 7, 1);
lean_ctor_set(v_reuseFailAlloc_337_, 0, v_subst_319_);
lean_ctor_set(v_reuseFailAlloc_337_, 1, v_used_320_);
lean_ctor_set(v_reuseFailAlloc_337_, 2, v_binderRenaming_321_);
lean_ctor_set(v_reuseFailAlloc_337_, 3, v_funDeclInfoMap_322_);
lean_ctor_set(v_reuseFailAlloc_337_, 4, v_visited_324_);
lean_ctor_set(v_reuseFailAlloc_337_, 5, v___x_332_);
lean_ctor_set(v_reuseFailAlloc_337_, 6, v_inlineLocal_326_);
lean_ctor_set_uint8(v_reuseFailAlloc_337_, sizeof(void*)*7, v_simplified_323_);
v___x_334_ = v_reuseFailAlloc_337_;
goto v_reusejp_333_;
}
v_reusejp_333_:
{
lean_object* v___x_335_; lean_object* v___x_336_; 
v___x_335_ = lean_st_ref_put(v___y_316_, v___x_334_);
v___x_336_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_336_, 0, v___x_330_);
return v___x_336_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_incInline___redArg___boxed(lean_object* v___y_339_, lean_object* v___y_340_){
_start:
{
lean_object* v_res_341_; 
v_res_341_ = l_Lean_Compiler_LCNF_Simp_incInline___redArg(v___y_339_);
lean_dec(v___y_339_);
return v_res_341_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_incInline(lean_object* v___y_342_, lean_object* v___y_343_, lean_object* v___y_344_, lean_object* v___y_345_, lean_object* v___y_346_, lean_object* v___y_347_, lean_object* v___y_348_){
_start:
{
lean_object* v___x_350_; 
v___x_350_ = l_Lean_Compiler_LCNF_Simp_incInline___redArg(v___y_343_);
return v___x_350_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_incInline___boxed(lean_object* v___y_351_, lean_object* v___y_352_, lean_object* v___y_353_, lean_object* v___y_354_, lean_object* v___y_355_, lean_object* v___y_356_, lean_object* v___y_357_, lean_object* v___y_358_){
_start:
{
lean_object* v_res_359_; 
v_res_359_ = l_Lean_Compiler_LCNF_Simp_incInline(v___y_351_, v___y_352_, v___y_353_, v___y_354_, v___y_355_, v___y_356_, v___y_357_);
lean_dec(v___y_357_);
lean_dec_ref(v___y_356_);
lean_dec(v___y_355_);
lean_dec_ref(v___y_354_);
lean_dec_ref(v___y_353_);
lean_dec(v___y_352_);
lean_dec_ref(v___y_351_);
return v_res_359_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_incInlineLocal___redArg(lean_object* v___y_360_){
_start:
{
lean_object* v___x_362_; lean_object* v_subst_363_; lean_object* v_used_364_; lean_object* v_binderRenaming_365_; lean_object* v_funDeclInfoMap_366_; uint8_t v_simplified_367_; lean_object* v_visited_368_; lean_object* v_inline_369_; lean_object* v_inlineLocal_370_; lean_object* v___x_372_; uint8_t v_isShared_373_; uint8_t v_isSharedCheck_382_; 
v___x_362_ = lean_st_ref_take(v___y_360_);
v_subst_363_ = lean_ctor_get(v___x_362_, 0);
v_used_364_ = lean_ctor_get(v___x_362_, 1);
v_binderRenaming_365_ = lean_ctor_get(v___x_362_, 2);
v_funDeclInfoMap_366_ = lean_ctor_get(v___x_362_, 3);
v_simplified_367_ = lean_ctor_get_uint8(v___x_362_, sizeof(void*)*7);
v_visited_368_ = lean_ctor_get(v___x_362_, 4);
v_inline_369_ = lean_ctor_get(v___x_362_, 5);
v_inlineLocal_370_ = lean_ctor_get(v___x_362_, 6);
v_isSharedCheck_382_ = !lean_is_exclusive(v___x_362_);
if (v_isSharedCheck_382_ == 0)
{
v___x_372_ = v___x_362_;
v_isShared_373_ = v_isSharedCheck_382_;
goto v_resetjp_371_;
}
else
{
lean_inc(v_inlineLocal_370_);
lean_inc(v_inline_369_);
lean_inc(v_visited_368_);
lean_inc(v_funDeclInfoMap_366_);
lean_inc(v_binderRenaming_365_);
lean_inc(v_used_364_);
lean_inc(v_subst_363_);
lean_dec(v___x_362_);
v___x_372_ = lean_box(0);
v_isShared_373_ = v_isSharedCheck_382_;
goto v_resetjp_371_;
}
v_resetjp_371_:
{
lean_object* v___x_374_; lean_object* v___x_375_; lean_object* v___x_376_; lean_object* v___x_378_; 
v___x_374_ = lean_box(0);
v___x_375_ = lean_unsigned_to_nat(1u);
v___x_376_ = lean_nat_add(v_inlineLocal_370_, v___x_375_);
lean_dec(v_inlineLocal_370_);
if (v_isShared_373_ == 0)
{
lean_ctor_set(v___x_372_, 6, v___x_376_);
v___x_378_ = v___x_372_;
goto v_reusejp_377_;
}
else
{
lean_object* v_reuseFailAlloc_381_; 
v_reuseFailAlloc_381_ = lean_alloc_ctor(0, 7, 1);
lean_ctor_set(v_reuseFailAlloc_381_, 0, v_subst_363_);
lean_ctor_set(v_reuseFailAlloc_381_, 1, v_used_364_);
lean_ctor_set(v_reuseFailAlloc_381_, 2, v_binderRenaming_365_);
lean_ctor_set(v_reuseFailAlloc_381_, 3, v_funDeclInfoMap_366_);
lean_ctor_set(v_reuseFailAlloc_381_, 4, v_visited_368_);
lean_ctor_set(v_reuseFailAlloc_381_, 5, v_inline_369_);
lean_ctor_set(v_reuseFailAlloc_381_, 6, v___x_376_);
lean_ctor_set_uint8(v_reuseFailAlloc_381_, sizeof(void*)*7, v_simplified_367_);
v___x_378_ = v_reuseFailAlloc_381_;
goto v_reusejp_377_;
}
v_reusejp_377_:
{
lean_object* v___x_379_; lean_object* v___x_380_; 
v___x_379_ = lean_st_ref_put(v___y_360_, v___x_378_);
v___x_380_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_380_, 0, v___x_374_);
return v___x_380_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_incInlineLocal___redArg___boxed(lean_object* v___y_383_, lean_object* v___y_384_){
_start:
{
lean_object* v_res_385_; 
v_res_385_ = l_Lean_Compiler_LCNF_Simp_incInlineLocal___redArg(v___y_383_);
lean_dec(v___y_383_);
return v_res_385_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_incInlineLocal(lean_object* v___y_386_, lean_object* v___y_387_, lean_object* v___y_388_, lean_object* v___y_389_, lean_object* v___y_390_, lean_object* v___y_391_, lean_object* v___y_392_){
_start:
{
lean_object* v___x_394_; 
v___x_394_ = l_Lean_Compiler_LCNF_Simp_incInlineLocal___redArg(v___y_387_);
return v___x_394_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_incInlineLocal___boxed(lean_object* v___y_395_, lean_object* v___y_396_, lean_object* v___y_397_, lean_object* v___y_398_, lean_object* v___y_399_, lean_object* v___y_400_, lean_object* v___y_401_, lean_object* v___y_402_){
_start:
{
lean_object* v_res_403_; 
v_res_403_ = l_Lean_Compiler_LCNF_Simp_incInlineLocal(v___y_395_, v___y_396_, v___y_397_, v___y_398_, v___y_399_, v___y_400_, v___y_401_);
lean_dec(v___y_401_);
lean_dec_ref(v___y_400_);
lean_dec(v___y_399_);
lean_dec_ref(v___y_398_);
lean_dec_ref(v___y_397_);
lean_dec(v___y_396_);
lean_dec_ref(v___y_395_);
return v_res_403_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_addMustInline___redArg(lean_object* v_fvarId_404_, lean_object* v___y_405_){
_start:
{
lean_object* v___x_407_; lean_object* v_subst_408_; lean_object* v_used_409_; lean_object* v_binderRenaming_410_; lean_object* v_funDeclInfoMap_411_; uint8_t v_simplified_412_; lean_object* v_visited_413_; lean_object* v_inline_414_; lean_object* v_inlineLocal_415_; lean_object* v___x_417_; uint8_t v_isShared_418_; uint8_t v_isSharedCheck_426_; 
v___x_407_ = lean_st_ref_take(v___y_405_);
v_subst_408_ = lean_ctor_get(v___x_407_, 0);
v_used_409_ = lean_ctor_get(v___x_407_, 1);
v_binderRenaming_410_ = lean_ctor_get(v___x_407_, 2);
v_funDeclInfoMap_411_ = lean_ctor_get(v___x_407_, 3);
v_simplified_412_ = lean_ctor_get_uint8(v___x_407_, sizeof(void*)*7);
v_visited_413_ = lean_ctor_get(v___x_407_, 4);
v_inline_414_ = lean_ctor_get(v___x_407_, 5);
v_inlineLocal_415_ = lean_ctor_get(v___x_407_, 6);
v_isSharedCheck_426_ = !lean_is_exclusive(v___x_407_);
if (v_isSharedCheck_426_ == 0)
{
v___x_417_ = v___x_407_;
v_isShared_418_ = v_isSharedCheck_426_;
goto v_resetjp_416_;
}
else
{
lean_inc(v_inlineLocal_415_);
lean_inc(v_inline_414_);
lean_inc(v_visited_413_);
lean_inc(v_funDeclInfoMap_411_);
lean_inc(v_binderRenaming_410_);
lean_inc(v_used_409_);
lean_inc(v_subst_408_);
lean_dec(v___x_407_);
v___x_417_ = lean_box(0);
v_isShared_418_ = v_isSharedCheck_426_;
goto v_resetjp_416_;
}
v_resetjp_416_:
{
lean_object* v___x_419_; lean_object* v___x_420_; lean_object* v___x_422_; 
v___x_419_ = lean_box(0);
v___x_420_ = l_Lean_Compiler_LCNF_Simp_FunDeclInfoMap_addMustInline(v_funDeclInfoMap_411_, v_fvarId_404_);
if (v_isShared_418_ == 0)
{
lean_ctor_set(v___x_417_, 3, v___x_420_);
v___x_422_ = v___x_417_;
goto v_reusejp_421_;
}
else
{
lean_object* v_reuseFailAlloc_425_; 
v_reuseFailAlloc_425_ = lean_alloc_ctor(0, 7, 1);
lean_ctor_set(v_reuseFailAlloc_425_, 0, v_subst_408_);
lean_ctor_set(v_reuseFailAlloc_425_, 1, v_used_409_);
lean_ctor_set(v_reuseFailAlloc_425_, 2, v_binderRenaming_410_);
lean_ctor_set(v_reuseFailAlloc_425_, 3, v___x_420_);
lean_ctor_set(v_reuseFailAlloc_425_, 4, v_visited_413_);
lean_ctor_set(v_reuseFailAlloc_425_, 5, v_inline_414_);
lean_ctor_set(v_reuseFailAlloc_425_, 6, v_inlineLocal_415_);
lean_ctor_set_uint8(v_reuseFailAlloc_425_, sizeof(void*)*7, v_simplified_412_);
v___x_422_ = v_reuseFailAlloc_425_;
goto v_reusejp_421_;
}
v_reusejp_421_:
{
lean_object* v___x_423_; lean_object* v___x_424_; 
v___x_423_ = lean_st_ref_put(v___y_405_, v___x_422_);
v___x_424_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_424_, 0, v___x_419_);
return v___x_424_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_addMustInline___redArg___boxed(lean_object* v_fvarId_427_, lean_object* v___y_428_, lean_object* v___y_429_){
_start:
{
lean_object* v_res_430_; 
v_res_430_ = l_Lean_Compiler_LCNF_Simp_addMustInline___redArg(v_fvarId_427_, v___y_428_);
lean_dec(v___y_428_);
return v_res_430_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_addMustInline(lean_object* v_fvarId_431_, lean_object* v___y_432_, lean_object* v___y_433_, lean_object* v___y_434_, lean_object* v___y_435_, lean_object* v___y_436_, lean_object* v___y_437_, lean_object* v___y_438_){
_start:
{
lean_object* v___x_440_; 
v___x_440_ = l_Lean_Compiler_LCNF_Simp_addMustInline___redArg(v_fvarId_431_, v___y_433_);
return v___x_440_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_addMustInline___boxed(lean_object* v_fvarId_441_, lean_object* v___y_442_, lean_object* v___y_443_, lean_object* v___y_444_, lean_object* v___y_445_, lean_object* v___y_446_, lean_object* v___y_447_, lean_object* v___y_448_, lean_object* v___y_449_){
_start:
{
lean_object* v_res_450_; 
v_res_450_ = l_Lean_Compiler_LCNF_Simp_addMustInline(v_fvarId_441_, v___y_442_, v___y_443_, v___y_444_, v___y_445_, v___y_446_, v___y_447_, v___y_448_);
lean_dec(v___y_448_);
lean_dec_ref(v___y_447_);
lean_dec(v___y_446_);
lean_dec_ref(v___y_445_);
lean_dec_ref(v___y_444_);
lean_dec(v___y_443_);
lean_dec_ref(v___y_442_);
return v_res_450_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_addFunOcc___redArg(lean_object* v_fvarId_451_, lean_object* v___y_452_){
_start:
{
lean_object* v___x_454_; lean_object* v_subst_455_; lean_object* v_used_456_; lean_object* v_binderRenaming_457_; lean_object* v_funDeclInfoMap_458_; uint8_t v_simplified_459_; lean_object* v_visited_460_; lean_object* v_inline_461_; lean_object* v_inlineLocal_462_; lean_object* v___x_464_; uint8_t v_isShared_465_; uint8_t v_isSharedCheck_473_; 
v___x_454_ = lean_st_ref_take(v___y_452_);
v_subst_455_ = lean_ctor_get(v___x_454_, 0);
v_used_456_ = lean_ctor_get(v___x_454_, 1);
v_binderRenaming_457_ = lean_ctor_get(v___x_454_, 2);
v_funDeclInfoMap_458_ = lean_ctor_get(v___x_454_, 3);
v_simplified_459_ = lean_ctor_get_uint8(v___x_454_, sizeof(void*)*7);
v_visited_460_ = lean_ctor_get(v___x_454_, 4);
v_inline_461_ = lean_ctor_get(v___x_454_, 5);
v_inlineLocal_462_ = lean_ctor_get(v___x_454_, 6);
v_isSharedCheck_473_ = !lean_is_exclusive(v___x_454_);
if (v_isSharedCheck_473_ == 0)
{
v___x_464_ = v___x_454_;
v_isShared_465_ = v_isSharedCheck_473_;
goto v_resetjp_463_;
}
else
{
lean_inc(v_inlineLocal_462_);
lean_inc(v_inline_461_);
lean_inc(v_visited_460_);
lean_inc(v_funDeclInfoMap_458_);
lean_inc(v_binderRenaming_457_);
lean_inc(v_used_456_);
lean_inc(v_subst_455_);
lean_dec(v___x_454_);
v___x_464_ = lean_box(0);
v_isShared_465_ = v_isSharedCheck_473_;
goto v_resetjp_463_;
}
v_resetjp_463_:
{
lean_object* v___x_466_; lean_object* v___x_467_; lean_object* v___x_469_; 
v___x_466_ = lean_box(0);
v___x_467_ = l_Lean_Compiler_LCNF_Simp_FunDeclInfoMap_add(v_funDeclInfoMap_458_, v_fvarId_451_);
if (v_isShared_465_ == 0)
{
lean_ctor_set(v___x_464_, 3, v___x_467_);
v___x_469_ = v___x_464_;
goto v_reusejp_468_;
}
else
{
lean_object* v_reuseFailAlloc_472_; 
v_reuseFailAlloc_472_ = lean_alloc_ctor(0, 7, 1);
lean_ctor_set(v_reuseFailAlloc_472_, 0, v_subst_455_);
lean_ctor_set(v_reuseFailAlloc_472_, 1, v_used_456_);
lean_ctor_set(v_reuseFailAlloc_472_, 2, v_binderRenaming_457_);
lean_ctor_set(v_reuseFailAlloc_472_, 3, v___x_467_);
lean_ctor_set(v_reuseFailAlloc_472_, 4, v_visited_460_);
lean_ctor_set(v_reuseFailAlloc_472_, 5, v_inline_461_);
lean_ctor_set(v_reuseFailAlloc_472_, 6, v_inlineLocal_462_);
lean_ctor_set_uint8(v_reuseFailAlloc_472_, sizeof(void*)*7, v_simplified_459_);
v___x_469_ = v_reuseFailAlloc_472_;
goto v_reusejp_468_;
}
v_reusejp_468_:
{
lean_object* v___x_470_; lean_object* v___x_471_; 
v___x_470_ = lean_st_ref_put(v___y_452_, v___x_469_);
v___x_471_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_471_, 0, v___x_466_);
return v___x_471_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_addFunOcc___redArg___boxed(lean_object* v_fvarId_474_, lean_object* v___y_475_, lean_object* v___y_476_){
_start:
{
lean_object* v_res_477_; 
v_res_477_ = l_Lean_Compiler_LCNF_Simp_addFunOcc___redArg(v_fvarId_474_, v___y_475_);
lean_dec(v___y_475_);
return v_res_477_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_addFunOcc(lean_object* v_fvarId_478_, lean_object* v___y_479_, lean_object* v___y_480_, lean_object* v___y_481_, lean_object* v___y_482_, lean_object* v___y_483_, lean_object* v___y_484_, lean_object* v___y_485_){
_start:
{
lean_object* v___x_487_; 
v___x_487_ = l_Lean_Compiler_LCNF_Simp_addFunOcc___redArg(v_fvarId_478_, v___y_480_);
return v___x_487_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_addFunOcc___boxed(lean_object* v_fvarId_488_, lean_object* v___y_489_, lean_object* v___y_490_, lean_object* v___y_491_, lean_object* v___y_492_, lean_object* v___y_493_, lean_object* v___y_494_, lean_object* v___y_495_, lean_object* v___y_496_){
_start:
{
lean_object* v_res_497_; 
v_res_497_ = l_Lean_Compiler_LCNF_Simp_addFunOcc(v_fvarId_488_, v___y_489_, v___y_490_, v___y_491_, v___y_492_, v___y_493_, v___y_494_, v___y_495_);
lean_dec(v___y_495_);
lean_dec_ref(v___y_494_);
lean_dec(v___y_493_);
lean_dec_ref(v___y_492_);
lean_dec_ref(v___y_491_);
lean_dec(v___y_490_);
lean_dec_ref(v___y_489_);
return v_res_497_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_addFunHoOcc___redArg(lean_object* v_fvarId_498_, lean_object* v___y_499_){
_start:
{
lean_object* v___x_501_; lean_object* v_subst_502_; lean_object* v_used_503_; lean_object* v_binderRenaming_504_; lean_object* v_funDeclInfoMap_505_; uint8_t v_simplified_506_; lean_object* v_visited_507_; lean_object* v_inline_508_; lean_object* v_inlineLocal_509_; lean_object* v___x_511_; uint8_t v_isShared_512_; uint8_t v_isSharedCheck_520_; 
v___x_501_ = lean_st_ref_take(v___y_499_);
v_subst_502_ = lean_ctor_get(v___x_501_, 0);
v_used_503_ = lean_ctor_get(v___x_501_, 1);
v_binderRenaming_504_ = lean_ctor_get(v___x_501_, 2);
v_funDeclInfoMap_505_ = lean_ctor_get(v___x_501_, 3);
v_simplified_506_ = lean_ctor_get_uint8(v___x_501_, sizeof(void*)*7);
v_visited_507_ = lean_ctor_get(v___x_501_, 4);
v_inline_508_ = lean_ctor_get(v___x_501_, 5);
v_inlineLocal_509_ = lean_ctor_get(v___x_501_, 6);
v_isSharedCheck_520_ = !lean_is_exclusive(v___x_501_);
if (v_isSharedCheck_520_ == 0)
{
v___x_511_ = v___x_501_;
v_isShared_512_ = v_isSharedCheck_520_;
goto v_resetjp_510_;
}
else
{
lean_inc(v_inlineLocal_509_);
lean_inc(v_inline_508_);
lean_inc(v_visited_507_);
lean_inc(v_funDeclInfoMap_505_);
lean_inc(v_binderRenaming_504_);
lean_inc(v_used_503_);
lean_inc(v_subst_502_);
lean_dec(v___x_501_);
v___x_511_ = lean_box(0);
v_isShared_512_ = v_isSharedCheck_520_;
goto v_resetjp_510_;
}
v_resetjp_510_:
{
lean_object* v___x_513_; lean_object* v___x_514_; lean_object* v___x_516_; 
v___x_513_ = lean_box(0);
v___x_514_ = l_Lean_Compiler_LCNF_Simp_FunDeclInfoMap_addHo(v_funDeclInfoMap_505_, v_fvarId_498_);
if (v_isShared_512_ == 0)
{
lean_ctor_set(v___x_511_, 3, v___x_514_);
v___x_516_ = v___x_511_;
goto v_reusejp_515_;
}
else
{
lean_object* v_reuseFailAlloc_519_; 
v_reuseFailAlloc_519_ = lean_alloc_ctor(0, 7, 1);
lean_ctor_set(v_reuseFailAlloc_519_, 0, v_subst_502_);
lean_ctor_set(v_reuseFailAlloc_519_, 1, v_used_503_);
lean_ctor_set(v_reuseFailAlloc_519_, 2, v_binderRenaming_504_);
lean_ctor_set(v_reuseFailAlloc_519_, 3, v___x_514_);
lean_ctor_set(v_reuseFailAlloc_519_, 4, v_visited_507_);
lean_ctor_set(v_reuseFailAlloc_519_, 5, v_inline_508_);
lean_ctor_set(v_reuseFailAlloc_519_, 6, v_inlineLocal_509_);
lean_ctor_set_uint8(v_reuseFailAlloc_519_, sizeof(void*)*7, v_simplified_506_);
v___x_516_ = v_reuseFailAlloc_519_;
goto v_reusejp_515_;
}
v_reusejp_515_:
{
lean_object* v___x_517_; lean_object* v___x_518_; 
v___x_517_ = lean_st_ref_put(v___y_499_, v___x_516_);
v___x_518_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_518_, 0, v___x_513_);
return v___x_518_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_addFunHoOcc___redArg___boxed(lean_object* v_fvarId_521_, lean_object* v___y_522_, lean_object* v___y_523_){
_start:
{
lean_object* v_res_524_; 
v_res_524_ = l_Lean_Compiler_LCNF_Simp_addFunHoOcc___redArg(v_fvarId_521_, v___y_522_);
lean_dec(v___y_522_);
return v_res_524_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_addFunHoOcc(lean_object* v_fvarId_525_, lean_object* v___y_526_, lean_object* v___y_527_, lean_object* v___y_528_, lean_object* v___y_529_, lean_object* v___y_530_, lean_object* v___y_531_, lean_object* v___y_532_){
_start:
{
lean_object* v___x_534_; 
v___x_534_ = l_Lean_Compiler_LCNF_Simp_addFunHoOcc___redArg(v_fvarId_525_, v___y_527_);
return v___x_534_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_addFunHoOcc___boxed(lean_object* v_fvarId_535_, lean_object* v___y_536_, lean_object* v___y_537_, lean_object* v___y_538_, lean_object* v___y_539_, lean_object* v___y_540_, lean_object* v___y_541_, lean_object* v___y_542_, lean_object* v___y_543_){
_start:
{
lean_object* v_res_544_; 
v_res_544_ = l_Lean_Compiler_LCNF_Simp_addFunHoOcc(v_fvarId_535_, v___y_536_, v___y_537_, v___y_538_, v___y_539_, v___y_540_, v___y_541_, v___y_542_);
lean_dec(v___y_542_);
lean_dec_ref(v___y_541_);
lean_dec(v___y_540_);
lean_dec_ref(v___y_539_);
lean_dec_ref(v___y_538_);
lean_dec(v___y_537_);
lean_dec_ref(v___y_536_);
return v_res_544_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Simp_updateFunDeclInfo___redArg___closed__0(void){
_start:
{
lean_object* v___x_545_; lean_object* v___x_546_; lean_object* v___x_547_; 
v___x_545_ = lean_box(0);
v___x_546_ = lean_unsigned_to_nat(16u);
v___x_547_ = lean_mk_array(v___x_546_, v___x_545_);
return v___x_547_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Simp_updateFunDeclInfo___redArg___closed__1(void){
_start:
{
lean_object* v___x_548_; lean_object* v___x_549_; lean_object* v___x_550_; 
v___x_548_ = lean_obj_once(&l_Lean_Compiler_LCNF_Simp_updateFunDeclInfo___redArg___closed__0, &l_Lean_Compiler_LCNF_Simp_updateFunDeclInfo___redArg___closed__0_once, _init_l_Lean_Compiler_LCNF_Simp_updateFunDeclInfo___redArg___closed__0);
v___x_549_ = lean_unsigned_to_nat(0u);
v___x_550_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_550_, 0, v___x_549_);
lean_ctor_set(v___x_550_, 1, v___x_548_);
return v___x_550_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_updateFunDeclInfo___redArg(lean_object* v_code_551_, uint8_t v_mustInline_552_, lean_object* v___y_553_, lean_object* v___y_554_, lean_object* v___y_555_, lean_object* v___y_556_, lean_object* v___y_557_){
_start:
{
lean_object* v___x_559_; lean_object* v_subst_560_; lean_object* v_used_561_; lean_object* v_binderRenaming_562_; lean_object* v_funDeclInfoMap_563_; uint8_t v_simplified_564_; lean_object* v_visited_565_; lean_object* v_inline_566_; lean_object* v_inlineLocal_567_; lean_object* v___x_569_; uint8_t v_isShared_570_; uint8_t v_isSharedCheck_611_; 
v___x_559_ = lean_st_ref_take(v___y_553_);
v_subst_560_ = lean_ctor_get(v___x_559_, 0);
v_used_561_ = lean_ctor_get(v___x_559_, 1);
v_binderRenaming_562_ = lean_ctor_get(v___x_559_, 2);
v_funDeclInfoMap_563_ = lean_ctor_get(v___x_559_, 3);
v_simplified_564_ = lean_ctor_get_uint8(v___x_559_, sizeof(void*)*7);
v_visited_565_ = lean_ctor_get(v___x_559_, 4);
v_inline_566_ = lean_ctor_get(v___x_559_, 5);
v_inlineLocal_567_ = lean_ctor_get(v___x_559_, 6);
v_isSharedCheck_611_ = !lean_is_exclusive(v___x_559_);
if (v_isSharedCheck_611_ == 0)
{
v___x_569_ = v___x_559_;
v_isShared_570_ = v_isSharedCheck_611_;
goto v_resetjp_568_;
}
else
{
lean_inc(v_inlineLocal_567_);
lean_inc(v_inline_566_);
lean_inc(v_visited_565_);
lean_inc(v_funDeclInfoMap_563_);
lean_inc(v_binderRenaming_562_);
lean_inc(v_used_561_);
lean_inc(v_subst_560_);
lean_dec(v___x_559_);
v___x_569_ = lean_box(0);
v_isShared_570_ = v_isSharedCheck_611_;
goto v_resetjp_568_;
}
v_resetjp_568_:
{
lean_object* v___x_571_; lean_object* v___x_573_; 
v___x_571_ = lean_obj_once(&l_Lean_Compiler_LCNF_Simp_updateFunDeclInfo___redArg___closed__1, &l_Lean_Compiler_LCNF_Simp_updateFunDeclInfo___redArg___closed__1_once, _init_l_Lean_Compiler_LCNF_Simp_updateFunDeclInfo___redArg___closed__1);
if (v_isShared_570_ == 0)
{
lean_ctor_set(v___x_569_, 3, v___x_571_);
v___x_573_ = v___x_569_;
goto v_reusejp_572_;
}
else
{
lean_object* v_reuseFailAlloc_610_; 
v_reuseFailAlloc_610_ = lean_alloc_ctor(0, 7, 1);
lean_ctor_set(v_reuseFailAlloc_610_, 0, v_subst_560_);
lean_ctor_set(v_reuseFailAlloc_610_, 1, v_used_561_);
lean_ctor_set(v_reuseFailAlloc_610_, 2, v_binderRenaming_562_);
lean_ctor_set(v_reuseFailAlloc_610_, 3, v___x_571_);
lean_ctor_set(v_reuseFailAlloc_610_, 4, v_visited_565_);
lean_ctor_set(v_reuseFailAlloc_610_, 5, v_inline_566_);
lean_ctor_set(v_reuseFailAlloc_610_, 6, v_inlineLocal_567_);
lean_ctor_set_uint8(v_reuseFailAlloc_610_, sizeof(void*)*7, v_simplified_564_);
v___x_573_ = v_reuseFailAlloc_610_;
goto v_reusejp_572_;
}
v_reusejp_572_:
{
lean_object* v___x_574_; lean_object* v___x_575_; 
v___x_574_ = lean_st_ref_put(v___y_553_, v___x_573_);
v___x_575_ = l_Lean_Compiler_LCNF_Simp_FunDeclInfoMap_update(v_funDeclInfoMap_563_, v_code_551_, v_mustInline_552_, v___y_554_, v___y_555_, v___y_556_, v___y_557_);
if (lean_obj_tag(v___x_575_) == 0)
{
lean_object* v_a_576_; lean_object* v___x_578_; uint8_t v_isShared_579_; uint8_t v_isSharedCheck_601_; 
v_a_576_ = lean_ctor_get(v___x_575_, 0);
v_isSharedCheck_601_ = !lean_is_exclusive(v___x_575_);
if (v_isSharedCheck_601_ == 0)
{
v___x_578_ = v___x_575_;
v_isShared_579_ = v_isSharedCheck_601_;
goto v_resetjp_577_;
}
else
{
lean_inc(v_a_576_);
lean_dec(v___x_575_);
v___x_578_ = lean_box(0);
v_isShared_579_ = v_isSharedCheck_601_;
goto v_resetjp_577_;
}
v_resetjp_577_:
{
lean_object* v___x_580_; lean_object* v_subst_581_; lean_object* v_used_582_; lean_object* v_binderRenaming_583_; uint8_t v_simplified_584_; lean_object* v_visited_585_; lean_object* v_inline_586_; lean_object* v_inlineLocal_587_; lean_object* v___x_589_; uint8_t v_isShared_590_; uint8_t v_isSharedCheck_599_; 
v___x_580_ = lean_st_ref_take(v___y_553_);
v_subst_581_ = lean_ctor_get(v___x_580_, 0);
v_used_582_ = lean_ctor_get(v___x_580_, 1);
v_binderRenaming_583_ = lean_ctor_get(v___x_580_, 2);
v_simplified_584_ = lean_ctor_get_uint8(v___x_580_, sizeof(void*)*7);
v_visited_585_ = lean_ctor_get(v___x_580_, 4);
v_inline_586_ = lean_ctor_get(v___x_580_, 5);
v_inlineLocal_587_ = lean_ctor_get(v___x_580_, 6);
v_isSharedCheck_599_ = !lean_is_exclusive(v___x_580_);
if (v_isSharedCheck_599_ == 0)
{
lean_object* v_unused_600_; 
v_unused_600_ = lean_ctor_get(v___x_580_, 3);
lean_dec(v_unused_600_);
v___x_589_ = v___x_580_;
v_isShared_590_ = v_isSharedCheck_599_;
goto v_resetjp_588_;
}
else
{
lean_inc(v_inlineLocal_587_);
lean_inc(v_inline_586_);
lean_inc(v_visited_585_);
lean_inc(v_binderRenaming_583_);
lean_inc(v_used_582_);
lean_inc(v_subst_581_);
lean_dec(v___x_580_);
v___x_589_ = lean_box(0);
v_isShared_590_ = v_isSharedCheck_599_;
goto v_resetjp_588_;
}
v_resetjp_588_:
{
lean_object* v___x_591_; lean_object* v___x_593_; 
v___x_591_ = lean_box(0);
if (v_isShared_590_ == 0)
{
lean_ctor_set(v___x_589_, 3, v_a_576_);
v___x_593_ = v___x_589_;
goto v_reusejp_592_;
}
else
{
lean_object* v_reuseFailAlloc_598_; 
v_reuseFailAlloc_598_ = lean_alloc_ctor(0, 7, 1);
lean_ctor_set(v_reuseFailAlloc_598_, 0, v_subst_581_);
lean_ctor_set(v_reuseFailAlloc_598_, 1, v_used_582_);
lean_ctor_set(v_reuseFailAlloc_598_, 2, v_binderRenaming_583_);
lean_ctor_set(v_reuseFailAlloc_598_, 3, v_a_576_);
lean_ctor_set(v_reuseFailAlloc_598_, 4, v_visited_585_);
lean_ctor_set(v_reuseFailAlloc_598_, 5, v_inline_586_);
lean_ctor_set(v_reuseFailAlloc_598_, 6, v_inlineLocal_587_);
lean_ctor_set_uint8(v_reuseFailAlloc_598_, sizeof(void*)*7, v_simplified_584_);
v___x_593_ = v_reuseFailAlloc_598_;
goto v_reusejp_592_;
}
v_reusejp_592_:
{
lean_object* v___x_594_; lean_object* v___x_596_; 
v___x_594_ = lean_st_ref_put(v___y_553_, v___x_593_);
if (v_isShared_579_ == 0)
{
lean_ctor_set(v___x_578_, 0, v___x_591_);
v___x_596_ = v___x_578_;
goto v_reusejp_595_;
}
else
{
lean_object* v_reuseFailAlloc_597_; 
v_reuseFailAlloc_597_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_597_, 0, v___x_591_);
v___x_596_ = v_reuseFailAlloc_597_;
goto v_reusejp_595_;
}
v_reusejp_595_:
{
return v___x_596_;
}
}
}
}
}
else
{
lean_object* v_a_602_; lean_object* v___x_604_; uint8_t v_isShared_605_; uint8_t v_isSharedCheck_609_; 
v_a_602_ = lean_ctor_get(v___x_575_, 0);
v_isSharedCheck_609_ = !lean_is_exclusive(v___x_575_);
if (v_isSharedCheck_609_ == 0)
{
v___x_604_ = v___x_575_;
v_isShared_605_ = v_isSharedCheck_609_;
goto v_resetjp_603_;
}
else
{
lean_inc(v_a_602_);
lean_dec(v___x_575_);
v___x_604_ = lean_box(0);
v_isShared_605_ = v_isSharedCheck_609_;
goto v_resetjp_603_;
}
v_resetjp_603_:
{
lean_object* v___x_607_; 
if (v_isShared_605_ == 0)
{
v___x_607_ = v___x_604_;
goto v_reusejp_606_;
}
else
{
lean_object* v_reuseFailAlloc_608_; 
v_reuseFailAlloc_608_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_608_, 0, v_a_602_);
v___x_607_ = v_reuseFailAlloc_608_;
goto v_reusejp_606_;
}
v_reusejp_606_:
{
return v___x_607_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_updateFunDeclInfo___redArg___boxed(lean_object* v_code_612_, lean_object* v_mustInline_613_, lean_object* v___y_614_, lean_object* v___y_615_, lean_object* v___y_616_, lean_object* v___y_617_, lean_object* v___y_618_, lean_object* v___y_619_){
_start:
{
uint8_t v_mustInline_boxed_620_; lean_object* v_res_621_; 
v_mustInline_boxed_620_ = lean_unbox(v_mustInline_613_);
v_res_621_ = l_Lean_Compiler_LCNF_Simp_updateFunDeclInfo___redArg(v_code_612_, v_mustInline_boxed_620_, v___y_614_, v___y_615_, v___y_616_, v___y_617_, v___y_618_);
lean_dec(v___y_618_);
lean_dec_ref(v___y_617_);
lean_dec(v___y_616_);
lean_dec_ref(v___y_615_);
lean_dec(v___y_614_);
return v_res_621_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_updateFunDeclInfo(lean_object* v_code_622_, uint8_t v_mustInline_623_, lean_object* v___y_624_, lean_object* v___y_625_, lean_object* v___y_626_, lean_object* v___y_627_, lean_object* v___y_628_, lean_object* v___y_629_, lean_object* v___y_630_){
_start:
{
lean_object* v___x_632_; 
v___x_632_ = l_Lean_Compiler_LCNF_Simp_updateFunDeclInfo___redArg(v_code_622_, v_mustInline_623_, v___y_625_, v___y_627_, v___y_628_, v___y_629_, v___y_630_);
return v___x_632_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_updateFunDeclInfo___boxed(lean_object* v_code_633_, lean_object* v_mustInline_634_, lean_object* v___y_635_, lean_object* v___y_636_, lean_object* v___y_637_, lean_object* v___y_638_, lean_object* v___y_639_, lean_object* v___y_640_, lean_object* v___y_641_, lean_object* v___y_642_){
_start:
{
uint8_t v_mustInline_boxed_643_; lean_object* v_res_644_; 
v_mustInline_boxed_643_ = lean_unbox(v_mustInline_634_);
v_res_644_ = l_Lean_Compiler_LCNF_Simp_updateFunDeclInfo(v_code_633_, v_mustInline_boxed_643_, v___y_635_, v___y_636_, v___y_637_, v___y_638_, v___y_639_, v___y_640_, v___y_641_);
lean_dec(v___y_641_);
lean_dec_ref(v___y_640_);
lean_dec(v___y_639_);
lean_dec_ref(v___y_638_);
lean_dec_ref(v___y_637_);
lean_dec(v___y_636_);
lean_dec_ref(v___y_635_);
return v_res_644_;
}
}
static lean_object* _init_l_Lean_throwError___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_645_; 
v___x_645_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_645_;
}
}
static lean_object* _init_l_Lean_throwError___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check_spec__0___redArg___closed__1(void){
_start:
{
lean_object* v___x_646_; lean_object* v___x_647_; 
v___x_646_ = lean_obj_once(&l_Lean_throwError___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check_spec__0___redArg___closed__0, &l_Lean_throwError___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check_spec__0___redArg___closed__0_once, _init_l_Lean_throwError___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check_spec__0___redArg___closed__0);
v___x_647_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_647_, 0, v___x_646_);
return v___x_647_;
}
}
static lean_object* _init_l_Lean_throwError___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check_spec__0___redArg___closed__2(void){
_start:
{
lean_object* v___x_648_; lean_object* v___x_649_; lean_object* v___x_650_; 
v___x_648_ = lean_obj_once(&l_Lean_throwError___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check_spec__0___redArg___closed__1, &l_Lean_throwError___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check_spec__0___redArg___closed__1_once, _init_l_Lean_throwError___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check_spec__0___redArg___closed__1);
v___x_649_ = lean_unsigned_to_nat(0u);
v___x_650_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v___x_650_, 0, v___x_649_);
lean_ctor_set(v___x_650_, 1, v___x_649_);
lean_ctor_set(v___x_650_, 2, v___x_649_);
lean_ctor_set(v___x_650_, 3, v___x_649_);
lean_ctor_set(v___x_650_, 4, v___x_648_);
lean_ctor_set(v___x_650_, 5, v___x_648_);
lean_ctor_set(v___x_650_, 6, v___x_648_);
lean_ctor_set(v___x_650_, 7, v___x_648_);
lean_ctor_set(v___x_650_, 8, v___x_648_);
lean_ctor_set(v___x_650_, 9, v___x_648_);
lean_ctor_set(v___x_650_, 10, v___x_648_);
return v___x_650_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check_spec__0___redArg(lean_object* v_msg_651_, lean_object* v___y_652_, lean_object* v___y_653_, lean_object* v___y_654_, lean_object* v___y_655_){
_start:
{
lean_object* v_toCold_657_; lean_object* v_ref_658_; lean_object* v___x_659_; lean_object* v_env_660_; lean_object* v___x_661_; lean_object* v___x_662_; 
v_toCold_657_ = lean_ctor_get(v___y_654_, 0);
v_ref_658_ = lean_ctor_get(v___y_654_, 2);
v___x_659_ = lean_st_ref_get(v___y_655_);
v_env_660_ = lean_ctor_get(v___x_659_, 0);
lean_inc_ref(v_env_660_);
lean_dec(v___x_659_);
v___x_661_ = lean_st_ref_get(v___y_653_);
v___x_662_ = l_Lean_Compiler_LCNF_getPurity___redArg(v___y_652_);
if (lean_obj_tag(v___x_662_) == 0)
{
lean_object* v_a_663_; lean_object* v___x_665_; uint8_t v_isShared_666_; uint8_t v_isSharedCheck_685_; 
v_a_663_ = lean_ctor_get(v___x_662_, 0);
v_isSharedCheck_685_ = !lean_is_exclusive(v___x_662_);
if (v_isSharedCheck_685_ == 0)
{
v___x_665_ = v___x_662_;
v_isShared_666_ = v_isSharedCheck_685_;
goto v_resetjp_664_;
}
else
{
lean_inc(v_a_663_);
lean_dec(v___x_662_);
v___x_665_ = lean_box(0);
v_isShared_666_ = v_isSharedCheck_685_;
goto v_resetjp_664_;
}
v_resetjp_664_:
{
lean_object* v_lctx_667_; lean_object* v___x_669_; uint8_t v_isShared_670_; uint8_t v_isSharedCheck_683_; 
v_lctx_667_ = lean_ctor_get(v___x_661_, 0);
v_isSharedCheck_683_ = !lean_is_exclusive(v___x_661_);
if (v_isSharedCheck_683_ == 0)
{
lean_object* v_unused_684_; 
v_unused_684_ = lean_ctor_get(v___x_661_, 1);
lean_dec(v_unused_684_);
v___x_669_ = v___x_661_;
v_isShared_670_ = v_isSharedCheck_683_;
goto v_resetjp_668_;
}
else
{
lean_inc(v_lctx_667_);
lean_dec(v___x_661_);
v___x_669_ = lean_box(0);
v_isShared_670_ = v_isSharedCheck_683_;
goto v_resetjp_668_;
}
v_resetjp_668_:
{
lean_object* v_options_671_; uint8_t v___x_672_; lean_object* v___x_673_; lean_object* v___x_674_; lean_object* v___x_675_; lean_object* v___x_677_; 
v_options_671_ = lean_ctor_get(v_toCold_657_, 2);
v___x_672_ = lean_unbox(v_a_663_);
lean_dec(v_a_663_);
v___x_673_ = l_Lean_Compiler_LCNF_LCtx_toLocalContext(v_lctx_667_, v___x_672_);
lean_dec_ref(v_lctx_667_);
v___x_674_ = lean_obj_once(&l_Lean_throwError___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check_spec__0___redArg___closed__2, &l_Lean_throwError___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check_spec__0___redArg___closed__2_once, _init_l_Lean_throwError___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check_spec__0___redArg___closed__2);
lean_inc_ref(v_options_671_);
v___x_675_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_675_, 0, v_env_660_);
lean_ctor_set(v___x_675_, 1, v___x_674_);
lean_ctor_set(v___x_675_, 2, v___x_673_);
lean_ctor_set(v___x_675_, 3, v_options_671_);
if (v_isShared_670_ == 0)
{
lean_ctor_set_tag(v___x_669_, 3);
lean_ctor_set(v___x_669_, 1, v_msg_651_);
lean_ctor_set(v___x_669_, 0, v___x_675_);
v___x_677_ = v___x_669_;
goto v_reusejp_676_;
}
else
{
lean_object* v_reuseFailAlloc_682_; 
v_reuseFailAlloc_682_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_reuseFailAlloc_682_, 0, v___x_675_);
lean_ctor_set(v_reuseFailAlloc_682_, 1, v_msg_651_);
v___x_677_ = v_reuseFailAlloc_682_;
goto v_reusejp_676_;
}
v_reusejp_676_:
{
lean_object* v___x_678_; lean_object* v___x_680_; 
lean_inc(v_ref_658_);
v___x_678_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_678_, 0, v_ref_658_);
lean_ctor_set(v___x_678_, 1, v___x_677_);
if (v_isShared_666_ == 0)
{
lean_ctor_set_tag(v___x_665_, 1);
lean_ctor_set(v___x_665_, 0, v___x_678_);
v___x_680_ = v___x_665_;
goto v_reusejp_679_;
}
else
{
lean_object* v_reuseFailAlloc_681_; 
v_reuseFailAlloc_681_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_681_, 0, v___x_678_);
v___x_680_ = v_reuseFailAlloc_681_;
goto v_reusejp_679_;
}
v_reusejp_679_:
{
return v___x_680_;
}
}
}
}
}
else
{
lean_object* v_a_686_; lean_object* v___x_688_; uint8_t v_isShared_689_; uint8_t v_isSharedCheck_693_; 
lean_dec(v___x_661_);
lean_dec_ref(v_env_660_);
lean_dec_ref(v_msg_651_);
v_a_686_ = lean_ctor_get(v___x_662_, 0);
v_isSharedCheck_693_ = !lean_is_exclusive(v___x_662_);
if (v_isSharedCheck_693_ == 0)
{
v___x_688_ = v___x_662_;
v_isShared_689_ = v_isSharedCheck_693_;
goto v_resetjp_687_;
}
else
{
lean_inc(v_a_686_);
lean_dec(v___x_662_);
v___x_688_ = lean_box(0);
v_isShared_689_ = v_isSharedCheck_693_;
goto v_resetjp_687_;
}
v_resetjp_687_:
{
lean_object* v___x_691_; 
if (v_isShared_689_ == 0)
{
v___x_691_ = v___x_688_;
goto v_reusejp_690_;
}
else
{
lean_object* v_reuseFailAlloc_692_; 
v_reuseFailAlloc_692_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_692_, 0, v_a_686_);
v___x_691_ = v_reuseFailAlloc_692_;
goto v_reusejp_690_;
}
v_reusejp_690_:
{
return v___x_691_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check_spec__0___redArg___boxed(lean_object* v_msg_694_, lean_object* v___y_695_, lean_object* v___y_696_, lean_object* v___y_697_, lean_object* v___y_698_, lean_object* v___y_699_){
_start:
{
lean_object* v_res_700_; 
v_res_700_ = l_Lean_throwError___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check_spec__0___redArg(v_msg_694_, v___y_695_, v___y_696_, v___y_697_, v___y_698_);
lean_dec(v___y_698_);
lean_dec_ref(v___y_697_);
lean_dec(v___y_696_);
lean_dec_ref(v___y_695_);
return v_res_700_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check_spec__0(lean_object* v_00_u03b1_701_, lean_object* v_msg_702_, lean_object* v___y_703_, lean_object* v___y_704_, lean_object* v___y_705_, lean_object* v___y_706_, lean_object* v___y_707_, lean_object* v___y_708_, lean_object* v___y_709_){
_start:
{
lean_object* v___x_711_; 
v___x_711_ = l_Lean_throwError___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check_spec__0___redArg(v_msg_702_, v___y_706_, v___y_707_, v___y_708_, v___y_709_);
return v___x_711_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check_spec__0___boxed(lean_object* v_00_u03b1_712_, lean_object* v_msg_713_, lean_object* v___y_714_, lean_object* v___y_715_, lean_object* v___y_716_, lean_object* v___y_717_, lean_object* v___y_718_, lean_object* v___y_719_, lean_object* v___y_720_, lean_object* v___y_721_){
_start:
{
lean_object* v_res_722_; 
v_res_722_ = l_Lean_throwError___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check_spec__0(v_00_u03b1_712_, v_msg_713_, v___y_714_, v___y_715_, v___y_716_, v___y_717_, v___y_718_, v___y_719_, v___y_720_);
lean_dec(v___y_720_);
lean_dec_ref(v___y_719_);
lean_dec(v___y_718_);
lean_dec_ref(v___y_717_);
lean_dec_ref(v___y_716_);
lean_dec(v___y_715_);
lean_dec_ref(v___y_714_);
return v_res_722_;
}
}
static double _init_l_Lean_addTrace___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check_spec__2___redArg___closed__0(void){
_start:
{
lean_object* v___x_723_; double v___x_724_; 
v___x_723_ = lean_unsigned_to_nat(0u);
v___x_724_ = lean_float_of_nat(v___x_723_);
return v___x_724_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check_spec__2___redArg(lean_object* v_cls_728_, lean_object* v_msg_729_, lean_object* v___y_730_, lean_object* v___y_731_, lean_object* v___y_732_, lean_object* v___y_733_){
_start:
{
lean_object* v_toCold_735_; lean_object* v_ref_736_; lean_object* v___x_737_; lean_object* v_env_738_; lean_object* v___x_739_; lean_object* v___x_740_; 
v_toCold_735_ = lean_ctor_get(v___y_732_, 0);
v_ref_736_ = lean_ctor_get(v___y_732_, 2);
v___x_737_ = lean_st_ref_get(v___y_733_);
v_env_738_ = lean_ctor_get(v___x_737_, 0);
lean_inc_ref(v_env_738_);
lean_dec(v___x_737_);
v___x_739_ = lean_st_ref_get(v___y_731_);
v___x_740_ = l_Lean_Compiler_LCNF_getPurity___redArg(v___y_730_);
if (lean_obj_tag(v___x_740_) == 0)
{
lean_object* v_a_741_; lean_object* v___x_743_; uint8_t v_isShared_744_; uint8_t v_isSharedCheck_799_; 
v_a_741_ = lean_ctor_get(v___x_740_, 0);
v_isSharedCheck_799_ = !lean_is_exclusive(v___x_740_);
if (v_isSharedCheck_799_ == 0)
{
v___x_743_ = v___x_740_;
v_isShared_744_ = v_isSharedCheck_799_;
goto v_resetjp_742_;
}
else
{
lean_inc(v_a_741_);
lean_dec(v___x_740_);
v___x_743_ = lean_box(0);
v_isShared_744_ = v_isSharedCheck_799_;
goto v_resetjp_742_;
}
v_resetjp_742_:
{
lean_object* v_lctx_745_; lean_object* v___x_747_; uint8_t v_isShared_748_; uint8_t v_isSharedCheck_797_; 
v_lctx_745_ = lean_ctor_get(v___x_739_, 0);
v_isSharedCheck_797_ = !lean_is_exclusive(v___x_739_);
if (v_isSharedCheck_797_ == 0)
{
lean_object* v_unused_798_; 
v_unused_798_ = lean_ctor_get(v___x_739_, 1);
lean_dec(v_unused_798_);
v___x_747_ = v___x_739_;
v_isShared_748_ = v_isSharedCheck_797_;
goto v_resetjp_746_;
}
else
{
lean_inc(v_lctx_745_);
lean_dec(v___x_739_);
v___x_747_ = lean_box(0);
v_isShared_748_ = v_isSharedCheck_797_;
goto v_resetjp_746_;
}
v_resetjp_746_:
{
lean_object* v_options_749_; uint8_t v___x_750_; lean_object* v___x_751_; lean_object* v___x_752_; lean_object* v___x_753_; lean_object* v___x_755_; 
v_options_749_ = lean_ctor_get(v_toCold_735_, 2);
v___x_750_ = lean_unbox(v_a_741_);
lean_dec(v_a_741_);
v___x_751_ = l_Lean_Compiler_LCNF_LCtx_toLocalContext(v_lctx_745_, v___x_750_);
lean_dec_ref(v_lctx_745_);
v___x_752_ = lean_obj_once(&l_Lean_throwError___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check_spec__0___redArg___closed__2, &l_Lean_throwError___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check_spec__0___redArg___closed__2_once, _init_l_Lean_throwError___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check_spec__0___redArg___closed__2);
lean_inc_ref(v_options_749_);
v___x_753_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_753_, 0, v_env_738_);
lean_ctor_set(v___x_753_, 1, v___x_752_);
lean_ctor_set(v___x_753_, 2, v___x_751_);
lean_ctor_set(v___x_753_, 3, v_options_749_);
if (v_isShared_748_ == 0)
{
lean_ctor_set_tag(v___x_747_, 3);
lean_ctor_set(v___x_747_, 1, v_msg_729_);
lean_ctor_set(v___x_747_, 0, v___x_753_);
v___x_755_ = v___x_747_;
goto v_reusejp_754_;
}
else
{
lean_object* v_reuseFailAlloc_796_; 
v_reuseFailAlloc_796_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_reuseFailAlloc_796_, 0, v___x_753_);
lean_ctor_set(v_reuseFailAlloc_796_, 1, v_msg_729_);
v___x_755_ = v_reuseFailAlloc_796_;
goto v_reusejp_754_;
}
v_reusejp_754_:
{
lean_object* v___x_756_; lean_object* v_traceState_757_; lean_object* v_env_758_; lean_object* v_nextMacroScope_759_; lean_object* v_ngen_760_; lean_object* v_auxDeclNGen_761_; lean_object* v_cache_762_; lean_object* v_messages_763_; lean_object* v_infoState_764_; lean_object* v_snapshotTasks_765_; lean_object* v___x_767_; uint8_t v_isShared_768_; uint8_t v_isSharedCheck_795_; 
v___x_756_ = lean_st_ref_take(v___y_733_);
v_traceState_757_ = lean_ctor_get(v___x_756_, 4);
v_env_758_ = lean_ctor_get(v___x_756_, 0);
v_nextMacroScope_759_ = lean_ctor_get(v___x_756_, 1);
v_ngen_760_ = lean_ctor_get(v___x_756_, 2);
v_auxDeclNGen_761_ = lean_ctor_get(v___x_756_, 3);
v_cache_762_ = lean_ctor_get(v___x_756_, 5);
v_messages_763_ = lean_ctor_get(v___x_756_, 6);
v_infoState_764_ = lean_ctor_get(v___x_756_, 7);
v_snapshotTasks_765_ = lean_ctor_get(v___x_756_, 8);
v_isSharedCheck_795_ = !lean_is_exclusive(v___x_756_);
if (v_isSharedCheck_795_ == 0)
{
v___x_767_ = v___x_756_;
v_isShared_768_ = v_isSharedCheck_795_;
goto v_resetjp_766_;
}
else
{
lean_inc(v_snapshotTasks_765_);
lean_inc(v_infoState_764_);
lean_inc(v_messages_763_);
lean_inc(v_cache_762_);
lean_inc(v_traceState_757_);
lean_inc(v_auxDeclNGen_761_);
lean_inc(v_ngen_760_);
lean_inc(v_nextMacroScope_759_);
lean_inc(v_env_758_);
lean_dec(v___x_756_);
v___x_767_ = lean_box(0);
v_isShared_768_ = v_isSharedCheck_795_;
goto v_resetjp_766_;
}
v_resetjp_766_:
{
uint64_t v_tid_769_; lean_object* v_traces_770_; lean_object* v___x_772_; uint8_t v_isShared_773_; uint8_t v_isSharedCheck_794_; 
v_tid_769_ = lean_ctor_get_uint64(v_traceState_757_, sizeof(void*)*1);
v_traces_770_ = lean_ctor_get(v_traceState_757_, 0);
v_isSharedCheck_794_ = !lean_is_exclusive(v_traceState_757_);
if (v_isSharedCheck_794_ == 0)
{
v___x_772_ = v_traceState_757_;
v_isShared_773_ = v_isSharedCheck_794_;
goto v_resetjp_771_;
}
else
{
lean_inc(v_traces_770_);
lean_dec(v_traceState_757_);
v___x_772_ = lean_box(0);
v_isShared_773_ = v_isSharedCheck_794_;
goto v_resetjp_771_;
}
v_resetjp_771_:
{
lean_object* v___x_774_; lean_object* v___x_775_; double v___x_776_; uint8_t v___x_777_; lean_object* v___x_778_; lean_object* v___x_779_; lean_object* v___x_780_; lean_object* v___x_781_; lean_object* v___x_782_; lean_object* v___x_783_; lean_object* v___x_785_; 
v___x_774_ = lean_box(0);
v___x_775_ = lean_box(0);
v___x_776_ = lean_float_once(&l_Lean_addTrace___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check_spec__2___redArg___closed__0, &l_Lean_addTrace___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check_spec__2___redArg___closed__0_once, _init_l_Lean_addTrace___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check_spec__2___redArg___closed__0);
v___x_777_ = 0;
v___x_778_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check_spec__2___redArg___closed__1));
v___x_779_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_779_, 0, v_cls_728_);
lean_ctor_set(v___x_779_, 1, v___x_775_);
lean_ctor_set(v___x_779_, 2, v___x_778_);
lean_ctor_set_float(v___x_779_, sizeof(void*)*3, v___x_776_);
lean_ctor_set_float(v___x_779_, sizeof(void*)*3 + 8, v___x_776_);
lean_ctor_set_uint8(v___x_779_, sizeof(void*)*3 + 16, v___x_777_);
v___x_780_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check_spec__2___redArg___closed__2));
v___x_781_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_781_, 0, v___x_779_);
lean_ctor_set(v___x_781_, 1, v___x_755_);
lean_ctor_set(v___x_781_, 2, v___x_780_);
lean_inc(v_ref_736_);
v___x_782_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_782_, 0, v_ref_736_);
lean_ctor_set(v___x_782_, 1, v___x_781_);
v___x_783_ = l_Lean_PersistentArray_push___redArg(v_traces_770_, v___x_782_);
if (v_isShared_773_ == 0)
{
lean_ctor_set(v___x_772_, 0, v___x_783_);
v___x_785_ = v___x_772_;
goto v_reusejp_784_;
}
else
{
lean_object* v_reuseFailAlloc_793_; 
v_reuseFailAlloc_793_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_793_, 0, v___x_783_);
lean_ctor_set_uint64(v_reuseFailAlloc_793_, sizeof(void*)*1, v_tid_769_);
v___x_785_ = v_reuseFailAlloc_793_;
goto v_reusejp_784_;
}
v_reusejp_784_:
{
lean_object* v___x_787_; 
if (v_isShared_768_ == 0)
{
lean_ctor_set(v___x_767_, 4, v___x_785_);
v___x_787_ = v___x_767_;
goto v_reusejp_786_;
}
else
{
lean_object* v_reuseFailAlloc_792_; 
v_reuseFailAlloc_792_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_792_, 0, v_env_758_);
lean_ctor_set(v_reuseFailAlloc_792_, 1, v_nextMacroScope_759_);
lean_ctor_set(v_reuseFailAlloc_792_, 2, v_ngen_760_);
lean_ctor_set(v_reuseFailAlloc_792_, 3, v_auxDeclNGen_761_);
lean_ctor_set(v_reuseFailAlloc_792_, 4, v___x_785_);
lean_ctor_set(v_reuseFailAlloc_792_, 5, v_cache_762_);
lean_ctor_set(v_reuseFailAlloc_792_, 6, v_messages_763_);
lean_ctor_set(v_reuseFailAlloc_792_, 7, v_infoState_764_);
lean_ctor_set(v_reuseFailAlloc_792_, 8, v_snapshotTasks_765_);
v___x_787_ = v_reuseFailAlloc_792_;
goto v_reusejp_786_;
}
v_reusejp_786_:
{
lean_object* v___x_788_; lean_object* v___x_790_; 
v___x_788_ = lean_st_ref_put(v___y_733_, v___x_787_);
if (v_isShared_744_ == 0)
{
lean_ctor_set(v___x_743_, 0, v___x_774_);
v___x_790_ = v___x_743_;
goto v_reusejp_789_;
}
else
{
lean_object* v_reuseFailAlloc_791_; 
v_reuseFailAlloc_791_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_791_, 0, v___x_774_);
v___x_790_ = v_reuseFailAlloc_791_;
goto v_reusejp_789_;
}
v_reusejp_789_:
{
return v___x_790_;
}
}
}
}
}
}
}
}
}
else
{
lean_object* v_a_800_; lean_object* v___x_802_; uint8_t v_isShared_803_; uint8_t v_isSharedCheck_807_; 
lean_dec(v___x_739_);
lean_dec_ref(v_env_738_);
lean_dec_ref(v_msg_729_);
lean_dec(v_cls_728_);
v_a_800_ = lean_ctor_get(v___x_740_, 0);
v_isSharedCheck_807_ = !lean_is_exclusive(v___x_740_);
if (v_isSharedCheck_807_ == 0)
{
v___x_802_ = v___x_740_;
v_isShared_803_ = v_isSharedCheck_807_;
goto v_resetjp_801_;
}
else
{
lean_inc(v_a_800_);
lean_dec(v___x_740_);
v___x_802_ = lean_box(0);
v_isShared_803_ = v_isSharedCheck_807_;
goto v_resetjp_801_;
}
v_resetjp_801_:
{
lean_object* v___x_805_; 
if (v_isShared_803_ == 0)
{
v___x_805_ = v___x_802_;
goto v_reusejp_804_;
}
else
{
lean_object* v_reuseFailAlloc_806_; 
v_reuseFailAlloc_806_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_806_, 0, v_a_800_);
v___x_805_ = v_reuseFailAlloc_806_;
goto v_reusejp_804_;
}
v_reusejp_804_:
{
return v___x_805_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check_spec__2___redArg___boxed(lean_object* v_cls_808_, lean_object* v_msg_809_, lean_object* v___y_810_, lean_object* v___y_811_, lean_object* v___y_812_, lean_object* v___y_813_, lean_object* v___y_814_){
_start:
{
lean_object* v_res_815_; 
v_res_815_ = l_Lean_addTrace___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check_spec__2___redArg(v_cls_808_, v_msg_809_, v___y_810_, v___y_811_, v___y_812_, v___y_813_);
lean_dec(v___y_813_);
lean_dec_ref(v___y_812_);
lean_dec(v___y_811_);
lean_dec_ref(v___y_810_);
return v_res_815_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check_spec__2(lean_object* v_cls_816_, lean_object* v_msg_817_, lean_object* v___y_818_, lean_object* v___y_819_, lean_object* v___y_820_, lean_object* v___y_821_, lean_object* v___y_822_, lean_object* v___y_823_, lean_object* v___y_824_){
_start:
{
lean_object* v___x_826_; 
v___x_826_ = l_Lean_addTrace___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check_spec__2___redArg(v_cls_816_, v_msg_817_, v___y_821_, v___y_822_, v___y_823_, v___y_824_);
return v___x_826_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check_spec__2___boxed(lean_object* v_cls_827_, lean_object* v_msg_828_, lean_object* v___y_829_, lean_object* v___y_830_, lean_object* v___y_831_, lean_object* v___y_832_, lean_object* v___y_833_, lean_object* v___y_834_, lean_object* v___y_835_, lean_object* v___y_836_){
_start:
{
lean_object* v_res_837_; 
v_res_837_ = l_Lean_addTrace___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check_spec__2(v_cls_827_, v_msg_828_, v___y_829_, v___y_830_, v___y_831_, v___y_832_, v___y_833_, v___y_834_, v___y_835_);
lean_dec(v___y_835_);
lean_dec_ref(v___y_834_);
lean_dec(v___y_833_);
lean_dec_ref(v___y_832_);
lean_dec_ref(v___y_831_);
lean_dec(v___y_830_);
lean_dec_ref(v___y_829_);
return v_res_837_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check_spec__1_spec__1_spec__3___redArg(lean_object* v_keys_838_, lean_object* v_vals_839_, lean_object* v_i_840_, lean_object* v_k_841_){
_start:
{
lean_object* v___x_842_; uint8_t v___x_843_; 
v___x_842_ = lean_array_get_size(v_keys_838_);
v___x_843_ = lean_nat_dec_lt(v_i_840_, v___x_842_);
if (v___x_843_ == 0)
{
lean_object* v___x_844_; 
lean_dec(v_i_840_);
v___x_844_ = lean_box(0);
return v___x_844_;
}
else
{
lean_object* v_k_x27_845_; uint8_t v___x_846_; 
v_k_x27_845_ = lean_array_fget_borrowed(v_keys_838_, v_i_840_);
v___x_846_ = lean_name_eq(v_k_841_, v_k_x27_845_);
if (v___x_846_ == 0)
{
lean_object* v___x_847_; lean_object* v___x_848_; 
v___x_847_ = lean_unsigned_to_nat(1u);
v___x_848_ = lean_nat_add(v_i_840_, v___x_847_);
lean_dec(v_i_840_);
v_i_840_ = v___x_848_;
goto _start;
}
else
{
lean_object* v___x_850_; lean_object* v___x_851_; 
v___x_850_ = lean_array_fget_borrowed(v_vals_839_, v_i_840_);
lean_dec(v_i_840_);
lean_inc(v___x_850_);
v___x_851_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_851_, 0, v___x_850_);
return v___x_851_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check_spec__1_spec__1_spec__3___redArg___boxed(lean_object* v_keys_852_, lean_object* v_vals_853_, lean_object* v_i_854_, lean_object* v_k_855_){
_start:
{
lean_object* v_res_856_; 
v_res_856_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check_spec__1_spec__1_spec__3___redArg(v_keys_852_, v_vals_853_, v_i_854_, v_k_855_);
lean_dec(v_k_855_);
lean_dec_ref(v_vals_853_);
lean_dec_ref(v_keys_852_);
return v_res_856_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check_spec__1_spec__1___redArg(lean_object* v_x_857_, size_t v_x_858_, lean_object* v_x_859_){
_start:
{
if (lean_obj_tag(v_x_857_) == 0)
{
lean_object* v_es_860_; lean_object* v___x_861_; size_t v___x_862_; size_t v___x_863_; lean_object* v_j_864_; lean_object* v___x_865_; 
v_es_860_ = lean_ctor_get(v_x_857_, 0);
v___x_861_ = lean_box(2);
v___x_862_ = ((size_t)31ULL);
v___x_863_ = lean_usize_land(v_x_858_, v___x_862_);
v_j_864_ = lean_usize_to_nat(v___x_863_);
v___x_865_ = lean_array_get_borrowed(v___x_861_, v_es_860_, v_j_864_);
lean_dec(v_j_864_);
switch(lean_obj_tag(v___x_865_))
{
case 0:
{
lean_object* v_key_866_; lean_object* v_val_867_; uint8_t v___x_868_; 
v_key_866_ = lean_ctor_get(v___x_865_, 0);
v_val_867_ = lean_ctor_get(v___x_865_, 1);
v___x_868_ = lean_name_eq(v_x_859_, v_key_866_);
if (v___x_868_ == 0)
{
lean_object* v___x_869_; 
v___x_869_ = lean_box(0);
return v___x_869_;
}
else
{
lean_object* v___x_870_; 
lean_inc(v_val_867_);
v___x_870_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_870_, 0, v_val_867_);
return v___x_870_;
}
}
case 1:
{
lean_object* v_node_871_; size_t v___x_872_; size_t v___x_873_; 
v_node_871_ = lean_ctor_get(v___x_865_, 0);
v___x_872_ = ((size_t)5ULL);
v___x_873_ = lean_usize_shift_right(v_x_858_, v___x_872_);
v_x_857_ = v_node_871_;
v_x_858_ = v___x_873_;
goto _start;
}
default: 
{
lean_object* v___x_875_; 
v___x_875_ = lean_box(0);
return v___x_875_;
}
}
}
else
{
lean_object* v_ks_876_; lean_object* v_vs_877_; lean_object* v___x_878_; lean_object* v___x_879_; 
v_ks_876_ = lean_ctor_get(v_x_857_, 0);
v_vs_877_ = lean_ctor_get(v_x_857_, 1);
v___x_878_ = lean_unsigned_to_nat(0u);
v___x_879_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check_spec__1_spec__1_spec__3___redArg(v_ks_876_, v_vs_877_, v___x_878_, v_x_859_);
return v___x_879_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check_spec__1_spec__1___redArg___boxed(lean_object* v_x_880_, lean_object* v_x_881_, lean_object* v_x_882_){
_start:
{
size_t v_x_7248__boxed_883_; lean_object* v_res_884_; 
v_x_7248__boxed_883_ = lean_unbox_usize(v_x_881_);
lean_dec(v_x_881_);
v_res_884_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check_spec__1_spec__1___redArg(v_x_880_, v_x_7248__boxed_883_, v_x_882_);
lean_dec(v_x_882_);
lean_dec_ref(v_x_880_);
return v_res_884_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check_spec__1___redArg(lean_object* v_x_885_, lean_object* v_x_886_){
_start:
{
uint64_t v___y_888_; 
if (lean_obj_tag(v_x_886_) == 0)
{
uint64_t v___x_891_; 
v___x_891_ = 1723ULL;
v___y_888_ = v___x_891_;
goto v___jp_887_;
}
else
{
uint64_t v_hash_892_; 
v_hash_892_ = lean_ctor_get_uint64(v_x_886_, sizeof(void*)*2);
v___y_888_ = v_hash_892_;
goto v___jp_887_;
}
v___jp_887_:
{
size_t v___x_889_; lean_object* v___x_890_; 
v___x_889_ = lean_uint64_to_usize(v___y_888_);
v___x_890_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check_spec__1_spec__1___redArg(v_x_885_, v___x_889_, v_x_886_);
return v___x_890_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check_spec__1___redArg___boxed(lean_object* v_x_893_, lean_object* v_x_894_){
_start:
{
lean_object* v_res_895_; 
v_res_895_ = l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check_spec__1___redArg(v_x_893_, v_x_894_);
lean_dec(v_x_894_);
lean_dec_ref(v_x_893_);
return v_res_895_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check___closed__1(void){
_start:
{
lean_object* v___x_897_; lean_object* v___x_898_; 
v___x_897_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check___closed__0));
v___x_898_ = l_Lean_stringToMessageData(v___x_897_);
return v___x_898_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check___closed__3(void){
_start:
{
lean_object* v___x_900_; lean_object* v___x_901_; 
v___x_900_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check___closed__2));
v___x_901_ = l_Lean_stringToMessageData(v___x_900_);
return v___x_901_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check___closed__5(void){
_start:
{
lean_object* v___x_903_; lean_object* v___x_904_; 
v___x_903_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check___closed__4));
v___x_904_ = l_Lean_stringToMessageData(v___x_903_);
return v___x_904_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check___closed__12(void){
_start:
{
lean_object* v_cls_915_; lean_object* v___x_916_; lean_object* v___x_917_; 
v_cls_915_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check___closed__9));
v___x_916_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check___closed__11));
v___x_917_ = l_Lean_Name_append(v___x_916_, v_cls_915_);
return v___x_917_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check(uint8_t v_recursive_918_, lean_object* v_declName_919_, lean_object* v___y_920_, lean_object* v___y_921_, lean_object* v___y_922_, lean_object* v___y_923_, lean_object* v___y_924_, lean_object* v___y_925_, lean_object* v___y_926_){
_start:
{
lean_object* v___y_929_; uint8_t v_inlineIfReduce_930_; lean_object* v___y_931_; lean_object* v___y_932_; lean_object* v___y_933_; lean_object* v___y_934_; lean_object* v___y_935_; lean_object* v___y_936_; lean_object* v___y_937_; lean_object* v___y_1006_; lean_object* v___y_1007_; lean_object* v___y_1008_; lean_object* v___y_1009_; lean_object* v___y_1010_; lean_object* v___y_1011_; lean_object* v___y_1012_; lean_object* v___y_1013_; lean_object* v___y_1041_; lean_object* v___y_1042_; lean_object* v___y_1043_; lean_object* v___y_1044_; lean_object* v___y_1045_; lean_object* v___y_1046_; lean_object* v___y_1047_; lean_object* v_toCold_1052_; lean_object* v_options_1053_; uint8_t v_hasTrace_1054_; 
v_toCold_1052_ = lean_ctor_get(v___y_925_, 0);
v_options_1053_ = lean_ctor_get(v_toCold_1052_, 2);
v_hasTrace_1054_ = lean_ctor_get_uint8(v_options_1053_, sizeof(void*)*1);
if (v_hasTrace_1054_ == 0)
{
v___y_1041_ = v___y_920_;
v___y_1042_ = v___y_921_;
v___y_1043_ = v___y_922_;
v___y_1044_ = v___y_923_;
v___y_1045_ = v___y_924_;
v___y_1046_ = v___y_925_;
v___y_1047_ = v___y_926_;
goto v___jp_1040_;
}
else
{
lean_object* v_inheritedTraceOptions_1055_; lean_object* v_cls_1056_; lean_object* v___x_1057_; uint8_t v___x_1058_; 
v_inheritedTraceOptions_1055_ = lean_ctor_get(v_toCold_1052_, 11);
v_cls_1056_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check___closed__9));
v___x_1057_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check___closed__12, &l___private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check___closed__12_once, _init_l___private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check___closed__12);
v___x_1058_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_1055_, v_options_1053_, v___x_1057_);
if (v___x_1058_ == 0)
{
v___y_1041_ = v___y_920_;
v___y_1042_ = v___y_921_;
v___y_1043_ = v___y_922_;
v___y_1044_ = v___y_923_;
v___y_1045_ = v___y_924_;
v___y_1046_ = v___y_925_;
v___y_1047_ = v___y_926_;
goto v___jp_1040_;
}
else
{
uint8_t v___x_1059_; lean_object* v___x_1060_; lean_object* v___x_1061_; 
v___x_1059_ = 0;
lean_inc(v_declName_919_);
v___x_1060_ = l_Lean_MessageData_ofConstName(v_declName_919_, v___x_1059_);
v___x_1061_ = l_Lean_addTrace___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check_spec__2___redArg(v_cls_1056_, v___x_1060_, v___y_923_, v___y_924_, v___y_925_, v___y_926_);
if (lean_obj_tag(v___x_1061_) == 0)
{
lean_dec_ref_known(v___x_1061_, 1);
v___y_1041_ = v___y_920_;
v___y_1042_ = v___y_921_;
v___y_1043_ = v___y_922_;
v___y_1044_ = v___y_923_;
v___y_1045_ = v___y_924_;
v___y_1046_ = v___y_925_;
v___y_1047_ = v___y_926_;
goto v___jp_1040_;
}
else
{
lean_object* v_a_1062_; lean_object* v___x_1064_; uint8_t v_isShared_1065_; uint8_t v_isSharedCheck_1069_; 
lean_dec(v_declName_919_);
v_a_1062_ = lean_ctor_get(v___x_1061_, 0);
v_isSharedCheck_1069_ = !lean_is_exclusive(v___x_1061_);
if (v_isSharedCheck_1069_ == 0)
{
v___x_1064_ = v___x_1061_;
v_isShared_1065_ = v_isSharedCheck_1069_;
goto v_resetjp_1063_;
}
else
{
lean_inc(v_a_1062_);
lean_dec(v___x_1061_);
v___x_1064_ = lean_box(0);
v_isShared_1065_ = v_isSharedCheck_1069_;
goto v_resetjp_1063_;
}
v_resetjp_1063_:
{
lean_object* v___x_1067_; 
if (v_isShared_1065_ == 0)
{
v___x_1067_ = v___x_1064_;
goto v_reusejp_1066_;
}
else
{
lean_object* v_reuseFailAlloc_1068_; 
v_reuseFailAlloc_1068_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1068_, 0, v_a_1062_);
v___x_1067_ = v_reuseFailAlloc_1068_;
goto v_reusejp_1066_;
}
v_reusejp_1066_:
{
return v___x_1067_;
}
}
}
}
}
v___jp_928_:
{
lean_object* v___x_938_; 
v___x_938_ = l_Lean_Compiler_LCNF_getConfig___redArg(v___y_934_);
if (lean_obj_tag(v___x_938_) == 0)
{
if (v_recursive_918_ == 0)
{
lean_object* v___x_940_; uint8_t v_isShared_941_; uint8_t v_isSharedCheck_945_; 
lean_dec(v_declName_919_);
v_isSharedCheck_945_ = !lean_is_exclusive(v___x_938_);
if (v_isSharedCheck_945_ == 0)
{
lean_object* v_unused_946_; 
v_unused_946_ = lean_ctor_get(v___x_938_, 0);
lean_dec(v_unused_946_);
v___x_940_ = v___x_938_;
v_isShared_941_ = v_isSharedCheck_945_;
goto v_resetjp_939_;
}
else
{
lean_dec(v___x_938_);
v___x_940_ = lean_box(0);
v_isShared_941_ = v_isSharedCheck_945_;
goto v_resetjp_939_;
}
v_resetjp_939_:
{
lean_object* v___x_943_; 
if (v_isShared_941_ == 0)
{
lean_ctor_set(v___x_940_, 0, v___y_929_);
v___x_943_ = v___x_940_;
goto v_reusejp_942_;
}
else
{
lean_object* v_reuseFailAlloc_944_; 
v_reuseFailAlloc_944_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_944_, 0, v___y_929_);
v___x_943_ = v_reuseFailAlloc_944_;
goto v_reusejp_942_;
}
v_reusejp_942_:
{
return v___x_943_;
}
}
}
else
{
if (v_inlineIfReduce_930_ == 0)
{
lean_object* v___x_948_; uint8_t v_isShared_949_; uint8_t v_isSharedCheck_953_; 
lean_dec(v_declName_919_);
v_isSharedCheck_953_ = !lean_is_exclusive(v___x_938_);
if (v_isSharedCheck_953_ == 0)
{
lean_object* v_unused_954_; 
v_unused_954_ = lean_ctor_get(v___x_938_, 0);
lean_dec(v_unused_954_);
v___x_948_ = v___x_938_;
v_isShared_949_ = v_isSharedCheck_953_;
goto v_resetjp_947_;
}
else
{
lean_dec(v___x_938_);
v___x_948_ = lean_box(0);
v_isShared_949_ = v_isSharedCheck_953_;
goto v_resetjp_947_;
}
v_resetjp_947_:
{
lean_object* v___x_951_; 
if (v_isShared_949_ == 0)
{
lean_ctor_set(v___x_948_, 0, v___y_929_);
v___x_951_ = v___x_948_;
goto v_reusejp_950_;
}
else
{
lean_object* v_reuseFailAlloc_952_; 
v_reuseFailAlloc_952_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_952_, 0, v___y_929_);
v___x_951_ = v_reuseFailAlloc_952_;
goto v_reusejp_950_;
}
v_reusejp_950_:
{
return v___x_951_;
}
}
}
else
{
lean_object* v_a_955_; lean_object* v___x_957_; uint8_t v_isShared_958_; uint8_t v_isSharedCheck_996_; 
v_a_955_ = lean_ctor_get(v___x_938_, 0);
v_isSharedCheck_996_ = !lean_is_exclusive(v___x_938_);
if (v_isSharedCheck_996_ == 0)
{
v___x_957_ = v___x_938_;
v_isShared_958_ = v_isSharedCheck_996_;
goto v_resetjp_956_;
}
else
{
lean_inc(v_a_955_);
lean_dec(v___x_938_);
v___x_957_ = lean_box(0);
v_isShared_958_ = v_isSharedCheck_996_;
goto v_resetjp_956_;
}
v_resetjp_956_:
{
lean_object* v_maxRecInlineIfReduce_959_; uint8_t v___x_960_; 
v_maxRecInlineIfReduce_959_ = lean_ctor_get(v_a_955_, 2);
lean_inc(v_maxRecInlineIfReduce_959_);
lean_dec(v_a_955_);
v___x_960_ = lean_nat_dec_lt(v_maxRecInlineIfReduce_959_, v___y_929_);
lean_dec(v_maxRecInlineIfReduce_959_);
if (v___x_960_ == 0)
{
lean_object* v___x_962_; 
lean_dec(v_declName_919_);
if (v_isShared_958_ == 0)
{
lean_ctor_set(v___x_957_, 0, v___y_929_);
v___x_962_ = v___x_957_;
goto v_reusejp_961_;
}
else
{
lean_object* v_reuseFailAlloc_963_; 
v_reuseFailAlloc_963_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_963_, 0, v___y_929_);
v___x_962_ = v_reuseFailAlloc_963_;
goto v_reusejp_961_;
}
v_reusejp_961_:
{
return v___x_962_;
}
}
else
{
lean_object* v___x_964_; 
lean_del_object(v___x_957_);
lean_dec(v___y_929_);
v___x_964_ = l_Lean_Compiler_LCNF_getConfig___redArg(v___y_934_);
if (lean_obj_tag(v___x_964_) == 0)
{
lean_object* v_a_965_; lean_object* v_maxRecInlineIfReduce_966_; lean_object* v___x_967_; uint8_t v___x_968_; lean_object* v___x_969_; lean_object* v___x_970_; lean_object* v___x_971_; lean_object* v___x_972_; lean_object* v___x_973_; lean_object* v___x_974_; lean_object* v___x_975_; lean_object* v___x_976_; lean_object* v___x_977_; lean_object* v___x_978_; lean_object* v___x_979_; lean_object* v_a_980_; lean_object* v___x_982_; uint8_t v_isShared_983_; uint8_t v_isSharedCheck_987_; 
v_a_965_ = lean_ctor_get(v___x_964_, 0);
lean_inc(v_a_965_);
lean_dec_ref_known(v___x_964_, 1);
v_maxRecInlineIfReduce_966_ = lean_ctor_get(v_a_965_, 2);
lean_inc(v_maxRecInlineIfReduce_966_);
lean_dec(v_a_965_);
v___x_967_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check___closed__1, &l___private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check___closed__1_once, _init_l___private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check___closed__1);
v___x_968_ = 0;
v___x_969_ = l_Lean_MessageData_ofConstName(v_declName_919_, v___x_968_);
v___x_970_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_970_, 0, v___x_967_);
lean_ctor_set(v___x_970_, 1, v___x_969_);
v___x_971_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check___closed__3, &l___private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check___closed__3_once, _init_l___private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check___closed__3);
v___x_972_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_972_, 0, v___x_970_);
lean_ctor_set(v___x_972_, 1, v___x_971_);
v___x_973_ = l_Nat_reprFast(v_maxRecInlineIfReduce_966_);
v___x_974_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_974_, 0, v___x_973_);
v___x_975_ = l_Lean_MessageData_ofFormat(v___x_974_);
v___x_976_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_976_, 0, v___x_972_);
lean_ctor_set(v___x_976_, 1, v___x_975_);
v___x_977_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check___closed__5, &l___private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check___closed__5_once, _init_l___private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check___closed__5);
v___x_978_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_978_, 0, v___x_976_);
lean_ctor_set(v___x_978_, 1, v___x_977_);
v___x_979_ = l_Lean_throwError___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check_spec__0___redArg(v___x_978_, v___y_934_, v___y_935_, v___y_936_, v___y_937_);
v_a_980_ = lean_ctor_get(v___x_979_, 0);
v_isSharedCheck_987_ = !lean_is_exclusive(v___x_979_);
if (v_isSharedCheck_987_ == 0)
{
v___x_982_ = v___x_979_;
v_isShared_983_ = v_isSharedCheck_987_;
goto v_resetjp_981_;
}
else
{
lean_inc(v_a_980_);
lean_dec(v___x_979_);
v___x_982_ = lean_box(0);
v_isShared_983_ = v_isSharedCheck_987_;
goto v_resetjp_981_;
}
v_resetjp_981_:
{
lean_object* v___x_985_; 
if (v_isShared_983_ == 0)
{
v___x_985_ = v___x_982_;
goto v_reusejp_984_;
}
else
{
lean_object* v_reuseFailAlloc_986_; 
v_reuseFailAlloc_986_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_986_, 0, v_a_980_);
v___x_985_ = v_reuseFailAlloc_986_;
goto v_reusejp_984_;
}
v_reusejp_984_:
{
return v___x_985_;
}
}
}
else
{
lean_object* v_a_988_; lean_object* v___x_990_; uint8_t v_isShared_991_; uint8_t v_isSharedCheck_995_; 
lean_dec(v_declName_919_);
v_a_988_ = lean_ctor_get(v___x_964_, 0);
v_isSharedCheck_995_ = !lean_is_exclusive(v___x_964_);
if (v_isSharedCheck_995_ == 0)
{
v___x_990_ = v___x_964_;
v_isShared_991_ = v_isSharedCheck_995_;
goto v_resetjp_989_;
}
else
{
lean_inc(v_a_988_);
lean_dec(v___x_964_);
v___x_990_ = lean_box(0);
v_isShared_991_ = v_isSharedCheck_995_;
goto v_resetjp_989_;
}
v_resetjp_989_:
{
lean_object* v___x_993_; 
if (v_isShared_991_ == 0)
{
v___x_993_ = v___x_990_;
goto v_reusejp_992_;
}
else
{
lean_object* v_reuseFailAlloc_994_; 
v_reuseFailAlloc_994_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_994_, 0, v_a_988_);
v___x_993_ = v_reuseFailAlloc_994_;
goto v_reusejp_992_;
}
v_reusejp_992_:
{
return v___x_993_;
}
}
}
}
}
}
}
}
else
{
lean_object* v_a_997_; lean_object* v___x_999_; uint8_t v_isShared_1000_; uint8_t v_isSharedCheck_1004_; 
lean_dec(v___y_929_);
lean_dec(v_declName_919_);
v_a_997_ = lean_ctor_get(v___x_938_, 0);
v_isSharedCheck_1004_ = !lean_is_exclusive(v___x_938_);
if (v_isSharedCheck_1004_ == 0)
{
v___x_999_ = v___x_938_;
v_isShared_1000_ = v_isSharedCheck_1004_;
goto v_resetjp_998_;
}
else
{
lean_inc(v_a_997_);
lean_dec(v___x_938_);
v___x_999_ = lean_box(0);
v_isShared_1000_ = v_isSharedCheck_1004_;
goto v_resetjp_998_;
}
v_resetjp_998_:
{
lean_object* v___x_1002_; 
if (v_isShared_1000_ == 0)
{
v___x_1002_ = v___x_999_;
goto v_reusejp_1001_;
}
else
{
lean_object* v_reuseFailAlloc_1003_; 
v_reuseFailAlloc_1003_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1003_, 0, v_a_997_);
v___x_1002_ = v_reuseFailAlloc_1003_;
goto v_reusejp_1001_;
}
v_reusejp_1001_:
{
return v___x_1002_;
}
}
}
}
v___jp_1005_:
{
lean_object* v___x_1014_; lean_object* v___x_1015_; lean_object* v___x_1016_; 
v___x_1014_ = lean_unsigned_to_nat(1u);
v___x_1015_ = lean_nat_add(v___y_1013_, v___x_1014_);
lean_dec(v___y_1013_);
v___x_1016_ = l_Lean_Compiler_LCNF_getPhase___redArg(v___y_1012_);
if (lean_obj_tag(v___x_1016_) == 0)
{
lean_object* v_a_1017_; uint8_t v___x_1018_; lean_object* v___x_1019_; 
v_a_1017_ = lean_ctor_get(v___x_1016_, 0);
lean_inc(v_a_1017_);
lean_dec_ref_known(v___x_1016_, 1);
v___x_1018_ = lean_unbox(v_a_1017_);
lean_dec(v_a_1017_);
lean_inc(v_declName_919_);
v___x_1019_ = l_Lean_Compiler_LCNF_getDeclAt_x3f(v_declName_919_, v___x_1018_, v___y_1010_, v___y_1011_);
if (lean_obj_tag(v___x_1019_) == 0)
{
lean_object* v_a_1020_; 
v_a_1020_ = lean_ctor_get(v___x_1019_, 0);
lean_inc(v_a_1020_);
lean_dec_ref_known(v___x_1019_, 1);
if (lean_obj_tag(v_a_1020_) == 1)
{
lean_object* v_val_1021_; uint8_t v___x_1022_; 
v_val_1021_ = lean_ctor_get(v_a_1020_, 0);
lean_inc(v_val_1021_);
lean_dec_ref_known(v_a_1020_, 1);
v___x_1022_ = l_Lean_Compiler_LCNF_Decl_inlineIfReduceAttr___redArg(v_val_1021_);
lean_dec(v_val_1021_);
v___y_929_ = v___x_1015_;
v_inlineIfReduce_930_ = v___x_1022_;
v___y_931_ = v___y_1007_;
v___y_932_ = v___y_1009_;
v___y_933_ = v___y_1006_;
v___y_934_ = v___y_1012_;
v___y_935_ = v___y_1008_;
v___y_936_ = v___y_1010_;
v___y_937_ = v___y_1011_;
goto v___jp_928_;
}
else
{
uint8_t v___x_1023_; 
lean_dec(v_a_1020_);
v___x_1023_ = 0;
v___y_929_ = v___x_1015_;
v_inlineIfReduce_930_ = v___x_1023_;
v___y_931_ = v___y_1007_;
v___y_932_ = v___y_1009_;
v___y_933_ = v___y_1006_;
v___y_934_ = v___y_1012_;
v___y_935_ = v___y_1008_;
v___y_936_ = v___y_1010_;
v___y_937_ = v___y_1011_;
goto v___jp_928_;
}
}
else
{
lean_object* v_a_1024_; lean_object* v___x_1026_; uint8_t v_isShared_1027_; uint8_t v_isSharedCheck_1031_; 
lean_dec(v___x_1015_);
lean_dec(v_declName_919_);
v_a_1024_ = lean_ctor_get(v___x_1019_, 0);
v_isSharedCheck_1031_ = !lean_is_exclusive(v___x_1019_);
if (v_isSharedCheck_1031_ == 0)
{
v___x_1026_ = v___x_1019_;
v_isShared_1027_ = v_isSharedCheck_1031_;
goto v_resetjp_1025_;
}
else
{
lean_inc(v_a_1024_);
lean_dec(v___x_1019_);
v___x_1026_ = lean_box(0);
v_isShared_1027_ = v_isSharedCheck_1031_;
goto v_resetjp_1025_;
}
v_resetjp_1025_:
{
lean_object* v___x_1029_; 
if (v_isShared_1027_ == 0)
{
v___x_1029_ = v___x_1026_;
goto v_reusejp_1028_;
}
else
{
lean_object* v_reuseFailAlloc_1030_; 
v_reuseFailAlloc_1030_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1030_, 0, v_a_1024_);
v___x_1029_ = v_reuseFailAlloc_1030_;
goto v_reusejp_1028_;
}
v_reusejp_1028_:
{
return v___x_1029_;
}
}
}
}
else
{
lean_object* v_a_1032_; lean_object* v___x_1034_; uint8_t v_isShared_1035_; uint8_t v_isSharedCheck_1039_; 
lean_dec(v___x_1015_);
lean_dec(v_declName_919_);
v_a_1032_ = lean_ctor_get(v___x_1016_, 0);
v_isSharedCheck_1039_ = !lean_is_exclusive(v___x_1016_);
if (v_isSharedCheck_1039_ == 0)
{
v___x_1034_ = v___x_1016_;
v_isShared_1035_ = v_isSharedCheck_1039_;
goto v_resetjp_1033_;
}
else
{
lean_inc(v_a_1032_);
lean_dec(v___x_1016_);
v___x_1034_ = lean_box(0);
v_isShared_1035_ = v_isSharedCheck_1039_;
goto v_resetjp_1033_;
}
v_resetjp_1033_:
{
lean_object* v___x_1037_; 
if (v_isShared_1035_ == 0)
{
v___x_1037_ = v___x_1034_;
goto v_reusejp_1036_;
}
else
{
lean_object* v_reuseFailAlloc_1038_; 
v_reuseFailAlloc_1038_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1038_, 0, v_a_1032_);
v___x_1037_ = v_reuseFailAlloc_1038_;
goto v_reusejp_1036_;
}
v_reusejp_1036_:
{
return v___x_1037_;
}
}
}
}
v___jp_1040_:
{
lean_object* v_inlineStackOccs_1048_; lean_object* v___x_1049_; 
v_inlineStackOccs_1048_ = lean_ctor_get(v___y_1041_, 3);
v___x_1049_ = l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check_spec__1___redArg(v_inlineStackOccs_1048_, v_declName_919_);
if (lean_obj_tag(v___x_1049_) == 0)
{
lean_object* v___x_1050_; 
v___x_1050_ = lean_unsigned_to_nat(0u);
v___y_1006_ = v___y_1043_;
v___y_1007_ = v___y_1041_;
v___y_1008_ = v___y_1045_;
v___y_1009_ = v___y_1042_;
v___y_1010_ = v___y_1046_;
v___y_1011_ = v___y_1047_;
v___y_1012_ = v___y_1044_;
v___y_1013_ = v___x_1050_;
goto v___jp_1005_;
}
else
{
lean_object* v_val_1051_; 
v_val_1051_ = lean_ctor_get(v___x_1049_, 0);
lean_inc(v_val_1051_);
lean_dec_ref_known(v___x_1049_, 1);
v___y_1006_ = v___y_1043_;
v___y_1007_ = v___y_1041_;
v___y_1008_ = v___y_1045_;
v___y_1009_ = v___y_1042_;
v___y_1010_ = v___y_1046_;
v___y_1011_ = v___y_1047_;
v___y_1012_ = v___y_1044_;
v___y_1013_ = v_val_1051_;
goto v___jp_1005_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check___boxed(lean_object* v_recursive_1070_, lean_object* v_declName_1071_, lean_object* v___y_1072_, lean_object* v___y_1073_, lean_object* v___y_1074_, lean_object* v___y_1075_, lean_object* v___y_1076_, lean_object* v___y_1077_, lean_object* v___y_1078_, lean_object* v___y_1079_){
_start:
{
uint8_t v_recursive_boxed_1080_; lean_object* v_res_1081_; 
v_recursive_boxed_1080_ = lean_unbox(v_recursive_1070_);
v_res_1081_ = l___private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check(v_recursive_boxed_1080_, v_declName_1071_, v___y_1072_, v___y_1073_, v___y_1074_, v___y_1075_, v___y_1076_, v___y_1077_, v___y_1078_);
lean_dec(v___y_1078_);
lean_dec_ref(v___y_1077_);
lean_dec(v___y_1076_);
lean_dec_ref(v___y_1075_);
lean_dec_ref(v___y_1074_);
lean_dec(v___y_1073_);
lean_dec_ref(v___y_1072_);
return v_res_1081_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check_spec__1(lean_object* v_00_u03b2_1082_, lean_object* v_x_1083_, lean_object* v_x_1084_){
_start:
{
lean_object* v___x_1085_; 
v___x_1085_ = l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check_spec__1___redArg(v_x_1083_, v_x_1084_);
return v___x_1085_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check_spec__1___boxed(lean_object* v_00_u03b2_1086_, lean_object* v_x_1087_, lean_object* v_x_1088_){
_start:
{
lean_object* v_res_1089_; 
v_res_1089_ = l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check_spec__1(v_00_u03b2_1086_, v_x_1087_, v_x_1088_);
lean_dec(v_x_1088_);
lean_dec_ref(v_x_1087_);
return v_res_1089_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check_spec__1_spec__1(lean_object* v_00_u03b2_1090_, lean_object* v_x_1091_, size_t v_x_1092_, lean_object* v_x_1093_){
_start:
{
lean_object* v___x_1094_; 
v___x_1094_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check_spec__1_spec__1___redArg(v_x_1091_, v_x_1092_, v_x_1093_);
return v___x_1094_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check_spec__1_spec__1___boxed(lean_object* v_00_u03b2_1095_, lean_object* v_x_1096_, lean_object* v_x_1097_, lean_object* v_x_1098_){
_start:
{
size_t v_x_7679__boxed_1099_; lean_object* v_res_1100_; 
v_x_7679__boxed_1099_ = lean_unbox_usize(v_x_1097_);
lean_dec(v_x_1097_);
v_res_1100_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check_spec__1_spec__1(v_00_u03b2_1095_, v_x_1096_, v_x_7679__boxed_1099_, v_x_1098_);
lean_dec(v_x_1098_);
lean_dec_ref(v_x_1096_);
return v_res_1100_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check_spec__1_spec__1_spec__3(lean_object* v_00_u03b2_1101_, lean_object* v_keys_1102_, lean_object* v_vals_1103_, lean_object* v_heq_1104_, lean_object* v_i_1105_, lean_object* v_k_1106_){
_start:
{
lean_object* v___x_1107_; 
v___x_1107_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check_spec__1_spec__1_spec__3___redArg(v_keys_1102_, v_vals_1103_, v_i_1105_, v_k_1106_);
return v___x_1107_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check_spec__1_spec__1_spec__3___boxed(lean_object* v_00_u03b2_1108_, lean_object* v_keys_1109_, lean_object* v_vals_1110_, lean_object* v_heq_1111_, lean_object* v_i_1112_, lean_object* v_k_1113_){
_start:
{
lean_object* v_res_1114_; 
v_res_1114_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check_spec__1_spec__1_spec__3(v_00_u03b2_1108_, v_keys_1109_, v_vals_1110_, v_heq_1111_, v_i_1112_, v_k_1113_);
lean_dec(v_k_1113_);
lean_dec_ref(v_vals_1110_);
lean_dec_ref(v_keys_1109_);
return v_res_1114_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_withInlining___redArg(lean_object* v_value_1117_, uint8_t v_recursive_1118_, lean_object* v_x_1119_, lean_object* v___y_1120_, lean_object* v___y_1121_, lean_object* v___y_1122_, lean_object* v___y_1123_, lean_object* v___y_1124_, lean_object* v___y_1125_, lean_object* v___y_1126_){
_start:
{
if (lean_obj_tag(v_value_1117_) == 3)
{
lean_object* v_declName_1128_; lean_object* v___x_1129_; lean_object* v___x_1130_; lean_object* v___x_1131_; 
v_declName_1128_ = lean_ctor_get(v_value_1117_, 0);
lean_inc_n(v_declName_1128_, 2);
lean_dec_ref_known(v_value_1117_, 3);
v___x_1129_ = ((lean_object*)(l_Lean_Compiler_LCNF_Simp_withInlining___redArg___closed__0));
v___x_1130_ = ((lean_object*)(l_Lean_Compiler_LCNF_Simp_withInlining___redArg___closed__1));
v___x_1131_ = l___private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check(v_recursive_1118_, v_declName_1128_, v___y_1120_, v___y_1121_, v___y_1122_, v___y_1123_, v___y_1124_, v___y_1125_, v___y_1126_);
if (lean_obj_tag(v___x_1131_) == 0)
{
lean_object* v_a_1132_; lean_object* v_declName_1133_; lean_object* v_config_1134_; lean_object* v_inlineStack_1135_; lean_object* v_inlineStackOccs_1136_; lean_object* v___x_1137_; lean_object* v___x_1138_; lean_object* v___x_1139_; lean_object* v___x_1140_; 
v_a_1132_ = lean_ctor_get(v___x_1131_, 0);
lean_inc(v_a_1132_);
lean_dec_ref_known(v___x_1131_, 1);
v_declName_1133_ = lean_ctor_get(v___y_1120_, 0);
v_config_1134_ = lean_ctor_get(v___y_1120_, 1);
v_inlineStack_1135_ = lean_ctor_get(v___y_1120_, 2);
v_inlineStackOccs_1136_ = lean_ctor_get(v___y_1120_, 3);
lean_inc(v_inlineStack_1135_);
lean_inc(v_declName_1128_);
v___x_1137_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1137_, 0, v_declName_1128_);
lean_ctor_set(v___x_1137_, 1, v_inlineStack_1135_);
lean_inc_ref(v_inlineStackOccs_1136_);
v___x_1138_ = l_Lean_PersistentHashMap_insert___redArg(v___x_1129_, v___x_1130_, v_inlineStackOccs_1136_, v_declName_1128_, v_a_1132_);
lean_inc_ref(v_config_1134_);
lean_inc(v_declName_1133_);
v___x_1139_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1139_, 0, v_declName_1133_);
lean_ctor_set(v___x_1139_, 1, v_config_1134_);
lean_ctor_set(v___x_1139_, 2, v___x_1137_);
lean_ctor_set(v___x_1139_, 3, v___x_1138_);
lean_inc(v___y_1126_);
lean_inc_ref(v___y_1125_);
lean_inc(v___y_1124_);
lean_inc_ref(v___y_1123_);
lean_inc_ref(v___y_1122_);
lean_inc(v___y_1121_);
v___x_1140_ = lean_apply_8(v_x_1119_, v___x_1139_, v___y_1121_, v___y_1122_, v___y_1123_, v___y_1124_, v___y_1125_, v___y_1126_, lean_box(0));
return v___x_1140_;
}
else
{
lean_object* v_a_1141_; lean_object* v___x_1143_; uint8_t v_isShared_1144_; uint8_t v_isSharedCheck_1148_; 
lean_dec(v_declName_1128_);
lean_dec_ref(v_x_1119_);
v_a_1141_ = lean_ctor_get(v___x_1131_, 0);
v_isSharedCheck_1148_ = !lean_is_exclusive(v___x_1131_);
if (v_isSharedCheck_1148_ == 0)
{
v___x_1143_ = v___x_1131_;
v_isShared_1144_ = v_isSharedCheck_1148_;
goto v_resetjp_1142_;
}
else
{
lean_inc(v_a_1141_);
lean_dec(v___x_1131_);
v___x_1143_ = lean_box(0);
v_isShared_1144_ = v_isSharedCheck_1148_;
goto v_resetjp_1142_;
}
v_resetjp_1142_:
{
lean_object* v___x_1146_; 
if (v_isShared_1144_ == 0)
{
v___x_1146_ = v___x_1143_;
goto v_reusejp_1145_;
}
else
{
lean_object* v_reuseFailAlloc_1147_; 
v_reuseFailAlloc_1147_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1147_, 0, v_a_1141_);
v___x_1146_ = v_reuseFailAlloc_1147_;
goto v_reusejp_1145_;
}
v_reusejp_1145_:
{
return v___x_1146_;
}
}
}
}
else
{
lean_object* v___x_1149_; 
lean_dec(v_value_1117_);
lean_inc(v___y_1126_);
lean_inc_ref(v___y_1125_);
lean_inc(v___y_1124_);
lean_inc_ref(v___y_1123_);
lean_inc_ref(v___y_1122_);
lean_inc(v___y_1121_);
lean_inc_ref(v___y_1120_);
v___x_1149_ = lean_apply_8(v_x_1119_, v___y_1120_, v___y_1121_, v___y_1122_, v___y_1123_, v___y_1124_, v___y_1125_, v___y_1126_, lean_box(0));
return v___x_1149_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_withInlining___redArg___boxed(lean_object* v_value_1150_, lean_object* v_recursive_1151_, lean_object* v_x_1152_, lean_object* v___y_1153_, lean_object* v___y_1154_, lean_object* v___y_1155_, lean_object* v___y_1156_, lean_object* v___y_1157_, lean_object* v___y_1158_, lean_object* v___y_1159_, lean_object* v___y_1160_){
_start:
{
uint8_t v_recursive_boxed_1161_; lean_object* v_res_1162_; 
v_recursive_boxed_1161_ = lean_unbox(v_recursive_1151_);
v_res_1162_ = l_Lean_Compiler_LCNF_Simp_withInlining___redArg(v_value_1150_, v_recursive_boxed_1161_, v_x_1152_, v___y_1153_, v___y_1154_, v___y_1155_, v___y_1156_, v___y_1157_, v___y_1158_, v___y_1159_);
lean_dec(v___y_1159_);
lean_dec_ref(v___y_1158_);
lean_dec(v___y_1157_);
lean_dec_ref(v___y_1156_);
lean_dec_ref(v___y_1155_);
lean_dec(v___y_1154_);
lean_dec_ref(v___y_1153_);
return v_res_1162_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_withInlining(lean_object* v_00_u03b1_1163_, lean_object* v_value_1164_, uint8_t v_recursive_1165_, lean_object* v_x_1166_, lean_object* v___y_1167_, lean_object* v___y_1168_, lean_object* v___y_1169_, lean_object* v___y_1170_, lean_object* v___y_1171_, lean_object* v___y_1172_, lean_object* v___y_1173_){
_start:
{
if (lean_obj_tag(v_value_1164_) == 3)
{
lean_object* v_declName_1175_; lean_object* v___x_1176_; lean_object* v___x_1177_; lean_object* v___x_1178_; 
v_declName_1175_ = lean_ctor_get(v_value_1164_, 0);
lean_inc_n(v_declName_1175_, 2);
lean_dec_ref_known(v_value_1164_, 3);
v___x_1176_ = ((lean_object*)(l_Lean_Compiler_LCNF_Simp_withInlining___redArg___closed__0));
v___x_1177_ = ((lean_object*)(l_Lean_Compiler_LCNF_Simp_withInlining___redArg___closed__1));
v___x_1178_ = l___private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check(v_recursive_1165_, v_declName_1175_, v___y_1167_, v___y_1168_, v___y_1169_, v___y_1170_, v___y_1171_, v___y_1172_, v___y_1173_);
if (lean_obj_tag(v___x_1178_) == 0)
{
lean_object* v_a_1179_; lean_object* v_declName_1180_; lean_object* v_config_1181_; lean_object* v_inlineStack_1182_; lean_object* v_inlineStackOccs_1183_; lean_object* v___x_1184_; lean_object* v___x_1185_; lean_object* v___x_1186_; lean_object* v___x_1187_; 
v_a_1179_ = lean_ctor_get(v___x_1178_, 0);
lean_inc(v_a_1179_);
lean_dec_ref_known(v___x_1178_, 1);
v_declName_1180_ = lean_ctor_get(v___y_1167_, 0);
v_config_1181_ = lean_ctor_get(v___y_1167_, 1);
v_inlineStack_1182_ = lean_ctor_get(v___y_1167_, 2);
v_inlineStackOccs_1183_ = lean_ctor_get(v___y_1167_, 3);
lean_inc(v_inlineStack_1182_);
lean_inc(v_declName_1175_);
v___x_1184_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1184_, 0, v_declName_1175_);
lean_ctor_set(v___x_1184_, 1, v_inlineStack_1182_);
lean_inc_ref(v_inlineStackOccs_1183_);
v___x_1185_ = l_Lean_PersistentHashMap_insert___redArg(v___x_1176_, v___x_1177_, v_inlineStackOccs_1183_, v_declName_1175_, v_a_1179_);
lean_inc_ref(v_config_1181_);
lean_inc(v_declName_1180_);
v___x_1186_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1186_, 0, v_declName_1180_);
lean_ctor_set(v___x_1186_, 1, v_config_1181_);
lean_ctor_set(v___x_1186_, 2, v___x_1184_);
lean_ctor_set(v___x_1186_, 3, v___x_1185_);
lean_inc(v___y_1173_);
lean_inc_ref(v___y_1172_);
lean_inc(v___y_1171_);
lean_inc_ref(v___y_1170_);
lean_inc_ref(v___y_1169_);
lean_inc(v___y_1168_);
v___x_1187_ = lean_apply_8(v_x_1166_, v___x_1186_, v___y_1168_, v___y_1169_, v___y_1170_, v___y_1171_, v___y_1172_, v___y_1173_, lean_box(0));
return v___x_1187_;
}
else
{
lean_object* v_a_1188_; lean_object* v___x_1190_; uint8_t v_isShared_1191_; uint8_t v_isSharedCheck_1195_; 
lean_dec(v_declName_1175_);
lean_dec_ref(v_x_1166_);
v_a_1188_ = lean_ctor_get(v___x_1178_, 0);
v_isSharedCheck_1195_ = !lean_is_exclusive(v___x_1178_);
if (v_isSharedCheck_1195_ == 0)
{
v___x_1190_ = v___x_1178_;
v_isShared_1191_ = v_isSharedCheck_1195_;
goto v_resetjp_1189_;
}
else
{
lean_inc(v_a_1188_);
lean_dec(v___x_1178_);
v___x_1190_ = lean_box(0);
v_isShared_1191_ = v_isSharedCheck_1195_;
goto v_resetjp_1189_;
}
v_resetjp_1189_:
{
lean_object* v___x_1193_; 
if (v_isShared_1191_ == 0)
{
v___x_1193_ = v___x_1190_;
goto v_reusejp_1192_;
}
else
{
lean_object* v_reuseFailAlloc_1194_; 
v_reuseFailAlloc_1194_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1194_, 0, v_a_1188_);
v___x_1193_ = v_reuseFailAlloc_1194_;
goto v_reusejp_1192_;
}
v_reusejp_1192_:
{
return v___x_1193_;
}
}
}
}
else
{
lean_object* v___x_1196_; 
lean_dec(v_value_1164_);
lean_inc(v___y_1173_);
lean_inc_ref(v___y_1172_);
lean_inc(v___y_1171_);
lean_inc_ref(v___y_1170_);
lean_inc_ref(v___y_1169_);
lean_inc(v___y_1168_);
lean_inc_ref(v___y_1167_);
v___x_1196_ = lean_apply_8(v_x_1166_, v___y_1167_, v___y_1168_, v___y_1169_, v___y_1170_, v___y_1171_, v___y_1172_, v___y_1173_, lean_box(0));
return v___x_1196_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_withInlining___boxed(lean_object* v_00_u03b1_1197_, lean_object* v_value_1198_, lean_object* v_recursive_1199_, lean_object* v_x_1200_, lean_object* v___y_1201_, lean_object* v___y_1202_, lean_object* v___y_1203_, lean_object* v___y_1204_, lean_object* v___y_1205_, lean_object* v___y_1206_, lean_object* v___y_1207_, lean_object* v___y_1208_){
_start:
{
uint8_t v_recursive_boxed_1209_; lean_object* v_res_1210_; 
v_recursive_boxed_1209_ = lean_unbox(v_recursive_1199_);
v_res_1210_ = l_Lean_Compiler_LCNF_Simp_withInlining(v_00_u03b1_1197_, v_value_1198_, v_recursive_boxed_1209_, v_x_1200_, v___y_1201_, v___y_1202_, v___y_1203_, v___y_1204_, v___y_1205_, v___y_1206_, v___y_1207_);
lean_dec(v___y_1207_);
lean_dec_ref(v___y_1206_);
lean_dec(v___y_1205_);
lean_dec_ref(v___y_1204_);
lean_dec_ref(v___y_1203_);
lean_dec(v___y_1202_);
lean_dec_ref(v___y_1201_);
return v_res_1210_;
}
}
static lean_object* _init_l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withIncRecDepth_throwMaxRecDepth_spec__0___redArg___closed__1(void){
_start:
{
lean_object* v___x_1212_; lean_object* v___x_1213_; 
v___x_1212_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withIncRecDepth_throwMaxRecDepth_spec__0___redArg___closed__0));
v___x_1213_ = l_Lean_stringToMessageData(v___x_1212_);
return v___x_1213_;
}
}
static lean_object* _init_l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withIncRecDepth_throwMaxRecDepth_spec__0___redArg___closed__4(void){
_start:
{
lean_object* v___x_1217_; lean_object* v___x_1218_; 
v___x_1217_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withIncRecDepth_throwMaxRecDepth_spec__0___redArg___closed__3));
v___x_1218_ = l_Lean_MessageData_ofFormat(v___x_1217_);
return v___x_1218_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withIncRecDepth_throwMaxRecDepth_spec__0___redArg(lean_object* v_as_x27_1219_, lean_object* v_b_1220_){
_start:
{
if (lean_obj_tag(v_as_x27_1219_) == 0)
{
lean_object* v___x_1222_; 
v___x_1222_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1222_, 0, v_b_1220_);
return v___x_1222_;
}
else
{
lean_object* v_snd_1223_; lean_object* v_head_1224_; lean_object* v_tail_1225_; lean_object* v_fst_1226_; lean_object* v___x_1228_; uint8_t v_isShared_1229_; uint8_t v_isSharedCheck_1267_; 
v_snd_1223_ = lean_ctor_get(v_b_1220_, 1);
lean_inc(v_snd_1223_);
v_head_1224_ = lean_ctor_get(v_as_x27_1219_, 0);
v_tail_1225_ = lean_ctor_get(v_as_x27_1219_, 1);
v_fst_1226_ = lean_ctor_get(v_b_1220_, 0);
v_isSharedCheck_1267_ = !lean_is_exclusive(v_b_1220_);
if (v_isSharedCheck_1267_ == 0)
{
lean_object* v_unused_1268_; 
v_unused_1268_ = lean_ctor_get(v_b_1220_, 1);
lean_dec(v_unused_1268_);
v___x_1228_ = v_b_1220_;
v_isShared_1229_ = v_isSharedCheck_1267_;
goto v_resetjp_1227_;
}
else
{
lean_inc(v_fst_1226_);
lean_dec(v_b_1220_);
v___x_1228_ = lean_box(0);
v_isShared_1229_ = v_isSharedCheck_1267_;
goto v_resetjp_1227_;
}
v_resetjp_1227_:
{
lean_object* v_fst_1230_; lean_object* v_snd_1231_; lean_object* v___x_1233_; uint8_t v_isShared_1234_; uint8_t v_isSharedCheck_1266_; 
v_fst_1230_ = lean_ctor_get(v_snd_1223_, 0);
v_snd_1231_ = lean_ctor_get(v_snd_1223_, 1);
v_isSharedCheck_1266_ = !lean_is_exclusive(v_snd_1223_);
if (v_isSharedCheck_1266_ == 0)
{
v___x_1233_ = v_snd_1223_;
v_isShared_1234_ = v_isSharedCheck_1266_;
goto v_resetjp_1232_;
}
else
{
lean_inc(v_snd_1231_);
lean_inc(v_fst_1230_);
lean_dec(v_snd_1223_);
v___x_1233_ = lean_box(0);
v_isShared_1234_ = v_isSharedCheck_1266_;
goto v_resetjp_1232_;
}
v_resetjp_1232_:
{
uint8_t v___x_1235_; 
v___x_1235_ = lean_name_eq(v_fst_1230_, v_head_1224_);
if (v___x_1235_ == 0)
{
lean_object* v___x_1236_; lean_object* v___x_1237_; lean_object* v___x_1238_; lean_object* v___x_1239_; lean_object* v___x_1240_; lean_object* v___x_1242_; 
lean_dec(v_snd_1231_);
lean_dec(v_fst_1230_);
v___x_1236_ = lean_obj_once(&l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withIncRecDepth_throwMaxRecDepth_spec__0___redArg___closed__1, &l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withIncRecDepth_throwMaxRecDepth_spec__0___redArg___closed__1_once, _init_l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withIncRecDepth_throwMaxRecDepth_spec__0___redArg___closed__1);
lean_inc_n(v_head_1224_, 2);
v___x_1237_ = l_Lean_MessageData_ofConstName(v_head_1224_, v___x_1235_);
v___x_1238_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1238_, 0, v___x_1237_);
lean_ctor_set(v___x_1238_, 1, v___x_1236_);
v___x_1239_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1239_, 0, v_fst_1226_);
lean_ctor_set(v___x_1239_, 1, v___x_1238_);
v___x_1240_ = lean_box(v___x_1235_);
if (v_isShared_1234_ == 0)
{
lean_ctor_set(v___x_1233_, 1, v___x_1240_);
lean_ctor_set(v___x_1233_, 0, v_head_1224_);
v___x_1242_ = v___x_1233_;
goto v_reusejp_1241_;
}
else
{
lean_object* v_reuseFailAlloc_1247_; 
v_reuseFailAlloc_1247_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1247_, 0, v_head_1224_);
lean_ctor_set(v_reuseFailAlloc_1247_, 1, v___x_1240_);
v___x_1242_ = v_reuseFailAlloc_1247_;
goto v_reusejp_1241_;
}
v_reusejp_1241_:
{
lean_object* v___x_1244_; 
if (v_isShared_1229_ == 0)
{
lean_ctor_set(v___x_1228_, 1, v___x_1242_);
lean_ctor_set(v___x_1228_, 0, v___x_1239_);
v___x_1244_ = v___x_1228_;
goto v_reusejp_1243_;
}
else
{
lean_object* v_reuseFailAlloc_1246_; 
v_reuseFailAlloc_1246_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1246_, 0, v___x_1239_);
lean_ctor_set(v_reuseFailAlloc_1246_, 1, v___x_1242_);
v___x_1244_ = v_reuseFailAlloc_1246_;
goto v_reusejp_1243_;
}
v_reusejp_1243_:
{
v_as_x27_1219_ = v_tail_1225_;
v_b_1220_ = v___x_1244_;
goto _start;
}
}
}
else
{
uint8_t v___x_1248_; 
v___x_1248_ = lean_unbox(v_snd_1231_);
if (v___x_1248_ == 0)
{
lean_object* v___x_1249_; lean_object* v___x_1250_; lean_object* v___x_1251_; lean_object* v___x_1253_; 
lean_dec(v_snd_1231_);
v___x_1249_ = lean_obj_once(&l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withIncRecDepth_throwMaxRecDepth_spec__0___redArg___closed__4, &l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withIncRecDepth_throwMaxRecDepth_spec__0___redArg___closed__4_once, _init_l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withIncRecDepth_throwMaxRecDepth_spec__0___redArg___closed__4);
v___x_1250_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1250_, 0, v_fst_1226_);
lean_ctor_set(v___x_1250_, 1, v___x_1249_);
v___x_1251_ = lean_box(v___x_1235_);
if (v_isShared_1234_ == 0)
{
lean_ctor_set(v___x_1233_, 1, v___x_1251_);
v___x_1253_ = v___x_1233_;
goto v_reusejp_1252_;
}
else
{
lean_object* v_reuseFailAlloc_1258_; 
v_reuseFailAlloc_1258_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1258_, 0, v_fst_1230_);
lean_ctor_set(v_reuseFailAlloc_1258_, 1, v___x_1251_);
v___x_1253_ = v_reuseFailAlloc_1258_;
goto v_reusejp_1252_;
}
v_reusejp_1252_:
{
lean_object* v___x_1255_; 
if (v_isShared_1229_ == 0)
{
lean_ctor_set(v___x_1228_, 1, v___x_1253_);
lean_ctor_set(v___x_1228_, 0, v___x_1250_);
v___x_1255_ = v___x_1228_;
goto v_reusejp_1254_;
}
else
{
lean_object* v_reuseFailAlloc_1257_; 
v_reuseFailAlloc_1257_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1257_, 0, v___x_1250_);
lean_ctor_set(v_reuseFailAlloc_1257_, 1, v___x_1253_);
v___x_1255_ = v_reuseFailAlloc_1257_;
goto v_reusejp_1254_;
}
v_reusejp_1254_:
{
v_as_x27_1219_ = v_tail_1225_;
v_b_1220_ = v___x_1255_;
goto _start;
}
}
}
else
{
lean_object* v___x_1260_; 
if (v_isShared_1234_ == 0)
{
v___x_1260_ = v___x_1233_;
goto v_reusejp_1259_;
}
else
{
lean_object* v_reuseFailAlloc_1265_; 
v_reuseFailAlloc_1265_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1265_, 0, v_fst_1230_);
lean_ctor_set(v_reuseFailAlloc_1265_, 1, v_snd_1231_);
v___x_1260_ = v_reuseFailAlloc_1265_;
goto v_reusejp_1259_;
}
v_reusejp_1259_:
{
lean_object* v___x_1262_; 
if (v_isShared_1229_ == 0)
{
lean_ctor_set(v___x_1228_, 1, v___x_1260_);
v___x_1262_ = v___x_1228_;
goto v_reusejp_1261_;
}
else
{
lean_object* v_reuseFailAlloc_1264_; 
v_reuseFailAlloc_1264_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1264_, 0, v_fst_1226_);
lean_ctor_set(v_reuseFailAlloc_1264_, 1, v___x_1260_);
v___x_1262_ = v_reuseFailAlloc_1264_;
goto v_reusejp_1261_;
}
v_reusejp_1261_:
{
v_as_x27_1219_ = v_tail_1225_;
v_b_1220_ = v___x_1262_;
goto _start;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withIncRecDepth_throwMaxRecDepth_spec__0___redArg___boxed(lean_object* v_as_x27_1269_, lean_object* v_b_1270_, lean_object* v___y_1271_){
_start:
{
lean_object* v_res_1272_; 
v_res_1272_ = l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withIncRecDepth_throwMaxRecDepth_spec__0___redArg(v_as_x27_1269_, v_b_1270_);
lean_dec(v_as_x27_1269_);
return v_res_1272_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withIncRecDepth_throwMaxRecDepth___redArg___closed__0(void){
_start:
{
lean_object* v___x_1273_; lean_object* v___x_1274_; 
v___x_1273_ = l_Lean_maxRecDepthErrorMessage;
v___x_1274_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1274_, 0, v___x_1273_);
return v___x_1274_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withIncRecDepth_throwMaxRecDepth___redArg___closed__1(void){
_start:
{
lean_object* v___x_1275_; lean_object* v___x_1276_; 
v___x_1275_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withIncRecDepth_throwMaxRecDepth___redArg___closed__0, &l___private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withIncRecDepth_throwMaxRecDepth___redArg___closed__0_once, _init_l___private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withIncRecDepth_throwMaxRecDepth___redArg___closed__0);
v___x_1276_ = l_Lean_MessageData_ofFormat(v___x_1275_);
return v___x_1276_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withIncRecDepth_throwMaxRecDepth___redArg___closed__3(void){
_start:
{
lean_object* v___x_1278_; lean_object* v___x_1279_; 
v___x_1278_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withIncRecDepth_throwMaxRecDepth___redArg___closed__2));
v___x_1279_ = l_Lean_stringToMessageData(v___x_1278_);
return v___x_1279_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withIncRecDepth_throwMaxRecDepth___redArg(lean_object* v___y_1280_, lean_object* v___y_1281_, lean_object* v___y_1282_, lean_object* v___y_1283_, lean_object* v___y_1284_, lean_object* v___y_1285_, lean_object* v___y_1286_){
_start:
{
lean_object* v_inlineStack_1288_; 
v_inlineStack_1288_ = lean_ctor_get(v___y_1280_, 2);
if (lean_obj_tag(v_inlineStack_1288_) == 0)
{
lean_object* v___x_1289_; lean_object* v___x_1290_; 
v___x_1289_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withIncRecDepth_throwMaxRecDepth___redArg___closed__1, &l___private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withIncRecDepth_throwMaxRecDepth___redArg___closed__1_once, _init_l___private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withIncRecDepth_throwMaxRecDepth___redArg___closed__1);
v___x_1290_ = l_Lean_throwError___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check_spec__0___redArg(v___x_1289_, v___y_1283_, v___y_1284_, v___y_1285_, v___y_1286_);
return v___x_1290_;
}
else
{
lean_object* v_head_1291_; lean_object* v_tail_1292_; uint8_t v___x_1293_; lean_object* v___x_1294_; lean_object* v___x_1295_; lean_object* v___x_1296_; lean_object* v___x_1297_; lean_object* v___x_1298_; lean_object* v___x_1299_; lean_object* v___x_1300_; lean_object* v_a_1301_; lean_object* v_fst_1302_; lean_object* v___x_1304_; uint8_t v_isShared_1305_; uint8_t v_isSharedCheck_1311_; 
v_head_1291_ = lean_ctor_get(v_inlineStack_1288_, 0);
v_tail_1292_ = lean_ctor_get(v_inlineStack_1288_, 1);
v___x_1293_ = 0;
lean_inc_n(v_head_1291_, 2);
v___x_1294_ = l_Lean_MessageData_ofConstName(v_head_1291_, v___x_1293_);
v___x_1295_ = lean_obj_once(&l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withIncRecDepth_throwMaxRecDepth_spec__0___redArg___closed__1, &l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withIncRecDepth_throwMaxRecDepth_spec__0___redArg___closed__1_once, _init_l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withIncRecDepth_throwMaxRecDepth_spec__0___redArg___closed__1);
v___x_1296_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1296_, 0, v___x_1294_);
lean_ctor_set(v___x_1296_, 1, v___x_1295_);
v___x_1297_ = lean_box(v___x_1293_);
v___x_1298_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1298_, 0, v_head_1291_);
lean_ctor_set(v___x_1298_, 1, v___x_1297_);
v___x_1299_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1299_, 0, v___x_1296_);
lean_ctor_set(v___x_1299_, 1, v___x_1298_);
v___x_1300_ = l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withIncRecDepth_throwMaxRecDepth_spec__0___redArg(v_tail_1292_, v___x_1299_);
v_a_1301_ = lean_ctor_get(v___x_1300_, 0);
lean_inc(v_a_1301_);
lean_dec_ref(v___x_1300_);
v_fst_1302_ = lean_ctor_get(v_a_1301_, 0);
v_isSharedCheck_1311_ = !lean_is_exclusive(v_a_1301_);
if (v_isSharedCheck_1311_ == 0)
{
lean_object* v_unused_1312_; 
v_unused_1312_ = lean_ctor_get(v_a_1301_, 1);
lean_dec(v_unused_1312_);
v___x_1304_ = v_a_1301_;
v_isShared_1305_ = v_isSharedCheck_1311_;
goto v_resetjp_1303_;
}
else
{
lean_inc(v_fst_1302_);
lean_dec(v_a_1301_);
v___x_1304_ = lean_box(0);
v_isShared_1305_ = v_isSharedCheck_1311_;
goto v_resetjp_1303_;
}
v_resetjp_1303_:
{
lean_object* v___x_1306_; lean_object* v___x_1308_; 
v___x_1306_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withIncRecDepth_throwMaxRecDepth___redArg___closed__3, &l___private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withIncRecDepth_throwMaxRecDepth___redArg___closed__3_once, _init_l___private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withIncRecDepth_throwMaxRecDepth___redArg___closed__3);
if (v_isShared_1305_ == 0)
{
lean_ctor_set_tag(v___x_1304_, 7);
lean_ctor_set(v___x_1304_, 1, v_fst_1302_);
lean_ctor_set(v___x_1304_, 0, v___x_1306_);
v___x_1308_ = v___x_1304_;
goto v_reusejp_1307_;
}
else
{
lean_object* v_reuseFailAlloc_1310_; 
v_reuseFailAlloc_1310_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1310_, 0, v___x_1306_);
lean_ctor_set(v_reuseFailAlloc_1310_, 1, v_fst_1302_);
v___x_1308_ = v_reuseFailAlloc_1310_;
goto v_reusejp_1307_;
}
v_reusejp_1307_:
{
lean_object* v___x_1309_; 
v___x_1309_ = l_Lean_throwError___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withInlining_check_spec__0___redArg(v___x_1308_, v___y_1283_, v___y_1284_, v___y_1285_, v___y_1286_);
return v___x_1309_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withIncRecDepth_throwMaxRecDepth___redArg___boxed(lean_object* v___y_1313_, lean_object* v___y_1314_, lean_object* v___y_1315_, lean_object* v___y_1316_, lean_object* v___y_1317_, lean_object* v___y_1318_, lean_object* v___y_1319_, lean_object* v___y_1320_){
_start:
{
lean_object* v_res_1321_; 
v_res_1321_ = l___private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withIncRecDepth_throwMaxRecDepth___redArg(v___y_1313_, v___y_1314_, v___y_1315_, v___y_1316_, v___y_1317_, v___y_1318_, v___y_1319_);
lean_dec(v___y_1319_);
lean_dec_ref(v___y_1318_);
lean_dec(v___y_1317_);
lean_dec_ref(v___y_1316_);
lean_dec_ref(v___y_1315_);
lean_dec(v___y_1314_);
lean_dec_ref(v___y_1313_);
return v_res_1321_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withIncRecDepth_throwMaxRecDepth(lean_object* v_00_u03b1_1322_, lean_object* v___y_1323_, lean_object* v___y_1324_, lean_object* v___y_1325_, lean_object* v___y_1326_, lean_object* v___y_1327_, lean_object* v___y_1328_, lean_object* v___y_1329_){
_start:
{
lean_object* v___x_1331_; 
v___x_1331_ = l___private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withIncRecDepth_throwMaxRecDepth___redArg(v___y_1323_, v___y_1324_, v___y_1325_, v___y_1326_, v___y_1327_, v___y_1328_, v___y_1329_);
return v___x_1331_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withIncRecDepth_throwMaxRecDepth___boxed(lean_object* v_00_u03b1_1332_, lean_object* v___y_1333_, lean_object* v___y_1334_, lean_object* v___y_1335_, lean_object* v___y_1336_, lean_object* v___y_1337_, lean_object* v___y_1338_, lean_object* v___y_1339_, lean_object* v___y_1340_){
_start:
{
lean_object* v_res_1341_; 
v_res_1341_ = l___private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withIncRecDepth_throwMaxRecDepth(v_00_u03b1_1332_, v___y_1333_, v___y_1334_, v___y_1335_, v___y_1336_, v___y_1337_, v___y_1338_, v___y_1339_);
lean_dec(v___y_1339_);
lean_dec_ref(v___y_1338_);
lean_dec(v___y_1337_);
lean_dec_ref(v___y_1336_);
lean_dec_ref(v___y_1335_);
lean_dec(v___y_1334_);
lean_dec_ref(v___y_1333_);
return v_res_1341_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withIncRecDepth_throwMaxRecDepth_spec__0(lean_object* v_as_1342_, lean_object* v_as_x27_1343_, lean_object* v_b_1344_, lean_object* v_a_1345_, lean_object* v___y_1346_, lean_object* v___y_1347_, lean_object* v___y_1348_, lean_object* v___y_1349_, lean_object* v___y_1350_, lean_object* v___y_1351_, lean_object* v___y_1352_){
_start:
{
lean_object* v___x_1354_; 
v___x_1354_ = l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withIncRecDepth_throwMaxRecDepth_spec__0___redArg(v_as_x27_1343_, v_b_1344_);
return v___x_1354_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withIncRecDepth_throwMaxRecDepth_spec__0___boxed(lean_object* v_as_1355_, lean_object* v_as_x27_1356_, lean_object* v_b_1357_, lean_object* v_a_1358_, lean_object* v___y_1359_, lean_object* v___y_1360_, lean_object* v___y_1361_, lean_object* v___y_1362_, lean_object* v___y_1363_, lean_object* v___y_1364_, lean_object* v___y_1365_, lean_object* v___y_1366_){
_start:
{
lean_object* v_res_1367_; 
v_res_1367_ = l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withIncRecDepth_throwMaxRecDepth_spec__0(v_as_1355_, v_as_x27_1356_, v_b_1357_, v_a_1358_, v___y_1359_, v___y_1360_, v___y_1361_, v___y_1362_, v___y_1363_, v___y_1364_, v___y_1365_);
lean_dec(v___y_1365_);
lean_dec_ref(v___y_1364_);
lean_dec(v___y_1363_);
lean_dec_ref(v___y_1362_);
lean_dec_ref(v___y_1361_);
lean_dec(v___y_1360_);
lean_dec_ref(v___y_1359_);
lean_dec(v_as_x27_1356_);
lean_dec(v_as_1355_);
return v_res_1367_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_withIncRecDepth___redArg(lean_object* v_x_1368_, lean_object* v___y_1369_, lean_object* v___y_1370_, lean_object* v___y_1371_, lean_object* v___y_1372_, lean_object* v___y_1373_, lean_object* v___y_1374_, lean_object* v___y_1375_){
_start:
{
lean_object* v_toCold_1377_; lean_object* v_currRecDepth_1378_; lean_object* v_ref_1379_; uint8_t v_diag_1380_; uint8_t v_suppressElabErrors_1381_; lean_object* v_maxRecDepth_1387_; lean_object* v___x_1388_; uint8_t v___x_1389_; 
v_toCold_1377_ = lean_ctor_get(v___y_1374_, 0);
v_currRecDepth_1378_ = lean_ctor_get(v___y_1374_, 1);
v_ref_1379_ = lean_ctor_get(v___y_1374_, 2);
v_diag_1380_ = lean_ctor_get_uint8(v___y_1374_, sizeof(void*)*3);
v_suppressElabErrors_1381_ = lean_ctor_get_uint8(v___y_1374_, sizeof(void*)*3 + 1);
v_maxRecDepth_1387_ = lean_ctor_get(v_toCold_1377_, 3);
v___x_1388_ = lean_unsigned_to_nat(0u);
v___x_1389_ = lean_nat_dec_eq(v_maxRecDepth_1387_, v___x_1388_);
if (v___x_1389_ == 0)
{
uint8_t v___x_1390_; 
v___x_1390_ = lean_nat_dec_eq(v_currRecDepth_1378_, v_maxRecDepth_1387_);
if (v___x_1390_ == 0)
{
goto v___jp_1382_;
}
else
{
lean_object* v___x_1391_; 
lean_dec_ref(v_x_1368_);
v___x_1391_ = l___private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withIncRecDepth_throwMaxRecDepth___redArg(v___y_1369_, v___y_1370_, v___y_1371_, v___y_1372_, v___y_1373_, v___y_1374_, v___y_1375_);
return v___x_1391_;
}
}
else
{
goto v___jp_1382_;
}
v___jp_1382_:
{
lean_object* v___x_1383_; lean_object* v___x_1384_; lean_object* v___x_1385_; lean_object* v___x_1386_; 
v___x_1383_ = lean_unsigned_to_nat(1u);
v___x_1384_ = lean_nat_add(v_currRecDepth_1378_, v___x_1383_);
lean_inc(v_ref_1379_);
lean_inc_ref(v_toCold_1377_);
v___x_1385_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_1385_, 0, v_toCold_1377_);
lean_ctor_set(v___x_1385_, 1, v___x_1384_);
lean_ctor_set(v___x_1385_, 2, v_ref_1379_);
lean_ctor_set_uint8(v___x_1385_, sizeof(void*)*3, v_diag_1380_);
lean_ctor_set_uint8(v___x_1385_, sizeof(void*)*3 + 1, v_suppressElabErrors_1381_);
lean_inc(v___y_1375_);
lean_inc(v___y_1373_);
lean_inc_ref(v___y_1372_);
lean_inc_ref(v___y_1371_);
lean_inc(v___y_1370_);
lean_inc_ref(v___y_1369_);
v___x_1386_ = lean_apply_8(v_x_1368_, v___y_1369_, v___y_1370_, v___y_1371_, v___y_1372_, v___y_1373_, v___x_1385_, v___y_1375_, lean_box(0));
return v___x_1386_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_withIncRecDepth___redArg___boxed(lean_object* v_x_1392_, lean_object* v___y_1393_, lean_object* v___y_1394_, lean_object* v___y_1395_, lean_object* v___y_1396_, lean_object* v___y_1397_, lean_object* v___y_1398_, lean_object* v___y_1399_, lean_object* v___y_1400_){
_start:
{
lean_object* v_res_1401_; 
v_res_1401_ = l_Lean_Compiler_LCNF_Simp_withIncRecDepth___redArg(v_x_1392_, v___y_1393_, v___y_1394_, v___y_1395_, v___y_1396_, v___y_1397_, v___y_1398_, v___y_1399_);
lean_dec(v___y_1399_);
lean_dec_ref(v___y_1398_);
lean_dec(v___y_1397_);
lean_dec_ref(v___y_1396_);
lean_dec_ref(v___y_1395_);
lean_dec(v___y_1394_);
lean_dec_ref(v___y_1393_);
return v_res_1401_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_withIncRecDepth(lean_object* v_00_u03b1_1402_, lean_object* v_x_1403_, lean_object* v___y_1404_, lean_object* v___y_1405_, lean_object* v___y_1406_, lean_object* v___y_1407_, lean_object* v___y_1408_, lean_object* v___y_1409_, lean_object* v___y_1410_){
_start:
{
lean_object* v_toCold_1412_; lean_object* v_currRecDepth_1413_; lean_object* v_ref_1414_; uint8_t v_diag_1415_; uint8_t v_suppressElabErrors_1416_; lean_object* v_maxRecDepth_1422_; lean_object* v___x_1423_; uint8_t v___x_1424_; 
v_toCold_1412_ = lean_ctor_get(v___y_1409_, 0);
v_currRecDepth_1413_ = lean_ctor_get(v___y_1409_, 1);
v_ref_1414_ = lean_ctor_get(v___y_1409_, 2);
v_diag_1415_ = lean_ctor_get_uint8(v___y_1409_, sizeof(void*)*3);
v_suppressElabErrors_1416_ = lean_ctor_get_uint8(v___y_1409_, sizeof(void*)*3 + 1);
v_maxRecDepth_1422_ = lean_ctor_get(v_toCold_1412_, 3);
v___x_1423_ = lean_unsigned_to_nat(0u);
v___x_1424_ = lean_nat_dec_eq(v_maxRecDepth_1422_, v___x_1423_);
if (v___x_1424_ == 0)
{
uint8_t v___x_1425_; 
v___x_1425_ = lean_nat_dec_eq(v_currRecDepth_1413_, v_maxRecDepth_1422_);
if (v___x_1425_ == 0)
{
goto v___jp_1417_;
}
else
{
lean_object* v___x_1426_; 
lean_dec_ref(v_x_1403_);
v___x_1426_ = l___private_Lean_Compiler_LCNF_Simp_SimpM_0__Lean_Compiler_LCNF_Simp_withIncRecDepth_throwMaxRecDepth___redArg(v___y_1404_, v___y_1405_, v___y_1406_, v___y_1407_, v___y_1408_, v___y_1409_, v___y_1410_);
return v___x_1426_;
}
}
else
{
goto v___jp_1417_;
}
v___jp_1417_:
{
lean_object* v___x_1418_; lean_object* v___x_1419_; lean_object* v___x_1420_; lean_object* v___x_1421_; 
v___x_1418_ = lean_unsigned_to_nat(1u);
v___x_1419_ = lean_nat_add(v_currRecDepth_1413_, v___x_1418_);
lean_inc(v_ref_1414_);
lean_inc_ref(v_toCold_1412_);
v___x_1420_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_1420_, 0, v_toCold_1412_);
lean_ctor_set(v___x_1420_, 1, v___x_1419_);
lean_ctor_set(v___x_1420_, 2, v_ref_1414_);
lean_ctor_set_uint8(v___x_1420_, sizeof(void*)*3, v_diag_1415_);
lean_ctor_set_uint8(v___x_1420_, sizeof(void*)*3 + 1, v_suppressElabErrors_1416_);
lean_inc(v___y_1410_);
lean_inc(v___y_1408_);
lean_inc_ref(v___y_1407_);
lean_inc_ref(v___y_1406_);
lean_inc(v___y_1405_);
lean_inc_ref(v___y_1404_);
v___x_1421_ = lean_apply_8(v_x_1403_, v___y_1404_, v___y_1405_, v___y_1406_, v___y_1407_, v___y_1408_, v___x_1420_, v___y_1410_, lean_box(0));
return v___x_1421_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_withIncRecDepth___boxed(lean_object* v_00_u03b1_1427_, lean_object* v_x_1428_, lean_object* v___y_1429_, lean_object* v___y_1430_, lean_object* v___y_1431_, lean_object* v___y_1432_, lean_object* v___y_1433_, lean_object* v___y_1434_, lean_object* v___y_1435_, lean_object* v___y_1436_){
_start:
{
lean_object* v_res_1437_; 
v_res_1437_ = l_Lean_Compiler_LCNF_Simp_withIncRecDepth(v_00_u03b1_1427_, v_x_1428_, v___y_1429_, v___y_1430_, v___y_1431_, v___y_1432_, v___y_1433_, v___y_1434_, v___y_1435_);
lean_dec(v___y_1435_);
lean_dec_ref(v___y_1434_);
lean_dec(v___y_1433_);
lean_dec_ref(v___y_1432_);
lean_dec_ref(v___y_1431_);
lean_dec(v___y_1430_);
lean_dec_ref(v___y_1429_);
return v_res_1437_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_withAddMustInline___redArg___lam__0(lean_object* v___y_1438_, lean_object* v_fvarId_1439_, lean_object* v___x_1440_, lean_object* v_a_x3f_1441_){
_start:
{
lean_object* v___x_1443_; lean_object* v_subst_1444_; lean_object* v_used_1445_; lean_object* v_binderRenaming_1446_; lean_object* v_funDeclInfoMap_1447_; uint8_t v_simplified_1448_; lean_object* v_visited_1449_; lean_object* v_inline_1450_; lean_object* v_inlineLocal_1451_; lean_object* v___x_1453_; uint8_t v_isShared_1454_; uint8_t v_isSharedCheck_1462_; 
v___x_1443_ = lean_st_ref_take(v___y_1438_);
v_subst_1444_ = lean_ctor_get(v___x_1443_, 0);
v_used_1445_ = lean_ctor_get(v___x_1443_, 1);
v_binderRenaming_1446_ = lean_ctor_get(v___x_1443_, 2);
v_funDeclInfoMap_1447_ = lean_ctor_get(v___x_1443_, 3);
v_simplified_1448_ = lean_ctor_get_uint8(v___x_1443_, sizeof(void*)*7);
v_visited_1449_ = lean_ctor_get(v___x_1443_, 4);
v_inline_1450_ = lean_ctor_get(v___x_1443_, 5);
v_inlineLocal_1451_ = lean_ctor_get(v___x_1443_, 6);
v_isSharedCheck_1462_ = !lean_is_exclusive(v___x_1443_);
if (v_isSharedCheck_1462_ == 0)
{
v___x_1453_ = v___x_1443_;
v_isShared_1454_ = v_isSharedCheck_1462_;
goto v_resetjp_1452_;
}
else
{
lean_inc(v_inlineLocal_1451_);
lean_inc(v_inline_1450_);
lean_inc(v_visited_1449_);
lean_inc(v_funDeclInfoMap_1447_);
lean_inc(v_binderRenaming_1446_);
lean_inc(v_used_1445_);
lean_inc(v_subst_1444_);
lean_dec(v___x_1443_);
v___x_1453_ = lean_box(0);
v_isShared_1454_ = v_isSharedCheck_1462_;
goto v_resetjp_1452_;
}
v_resetjp_1452_:
{
lean_object* v___x_1455_; lean_object* v___x_1456_; lean_object* v___x_1458_; 
v___x_1455_ = lean_box(0);
v___x_1456_ = l_Lean_Compiler_LCNF_Simp_FunDeclInfoMap_restore(v_funDeclInfoMap_1447_, v_fvarId_1439_, v___x_1440_);
if (v_isShared_1454_ == 0)
{
lean_ctor_set(v___x_1453_, 3, v___x_1456_);
v___x_1458_ = v___x_1453_;
goto v_reusejp_1457_;
}
else
{
lean_object* v_reuseFailAlloc_1461_; 
v_reuseFailAlloc_1461_ = lean_alloc_ctor(0, 7, 1);
lean_ctor_set(v_reuseFailAlloc_1461_, 0, v_subst_1444_);
lean_ctor_set(v_reuseFailAlloc_1461_, 1, v_used_1445_);
lean_ctor_set(v_reuseFailAlloc_1461_, 2, v_binderRenaming_1446_);
lean_ctor_set(v_reuseFailAlloc_1461_, 3, v___x_1456_);
lean_ctor_set(v_reuseFailAlloc_1461_, 4, v_visited_1449_);
lean_ctor_set(v_reuseFailAlloc_1461_, 5, v_inline_1450_);
lean_ctor_set(v_reuseFailAlloc_1461_, 6, v_inlineLocal_1451_);
lean_ctor_set_uint8(v_reuseFailAlloc_1461_, sizeof(void*)*7, v_simplified_1448_);
v___x_1458_ = v_reuseFailAlloc_1461_;
goto v_reusejp_1457_;
}
v_reusejp_1457_:
{
lean_object* v___x_1459_; lean_object* v___x_1460_; 
v___x_1459_ = lean_st_ref_put(v___y_1438_, v___x_1458_);
v___x_1460_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1460_, 0, v___x_1455_);
return v___x_1460_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_withAddMustInline___redArg___lam__0___boxed(lean_object* v___y_1463_, lean_object* v_fvarId_1464_, lean_object* v___x_1465_, lean_object* v_a_x3f_1466_, lean_object* v___y_1467_){
_start:
{
lean_object* v_res_1468_; 
v_res_1468_ = l_Lean_Compiler_LCNF_Simp_withAddMustInline___redArg___lam__0(v___y_1463_, v_fvarId_1464_, v___x_1465_, v_a_x3f_1466_);
lean_dec(v_a_x3f_1466_);
lean_dec(v___y_1463_);
return v_res_1468_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Compiler_LCNF_Simp_withAddMustInline_spec__0_spec__0___redArg(lean_object* v_a_1469_, lean_object* v_x_1470_){
_start:
{
if (lean_obj_tag(v_x_1470_) == 0)
{
lean_object* v___x_1471_; 
v___x_1471_ = lean_box(0);
return v___x_1471_;
}
else
{
lean_object* v_key_1472_; lean_object* v_value_1473_; lean_object* v_tail_1474_; uint8_t v___x_1475_; 
v_key_1472_ = lean_ctor_get(v_x_1470_, 0);
v_value_1473_ = lean_ctor_get(v_x_1470_, 1);
v_tail_1474_ = lean_ctor_get(v_x_1470_, 2);
v___x_1475_ = l_Lean_instBEqFVarId_beq(v_key_1472_, v_a_1469_);
if (v___x_1475_ == 0)
{
v_x_1470_ = v_tail_1474_;
goto _start;
}
else
{
lean_object* v___x_1477_; 
lean_inc(v_value_1473_);
v___x_1477_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1477_, 0, v_value_1473_);
return v___x_1477_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Compiler_LCNF_Simp_withAddMustInline_spec__0_spec__0___redArg___boxed(lean_object* v_a_1478_, lean_object* v_x_1479_){
_start:
{
lean_object* v_res_1480_; 
v_res_1480_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Compiler_LCNF_Simp_withAddMustInline_spec__0_spec__0___redArg(v_a_1478_, v_x_1479_);
lean_dec(v_x_1479_);
lean_dec(v_a_1478_);
return v_res_1480_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Compiler_LCNF_Simp_withAddMustInline_spec__0___redArg(lean_object* v_m_1481_, lean_object* v_a_1482_){
_start:
{
lean_object* v_buckets_1483_; lean_object* v___x_1484_; uint64_t v___x_1485_; uint64_t v___x_1486_; uint64_t v___x_1487_; uint64_t v_fold_1488_; uint64_t v___x_1489_; uint64_t v___x_1490_; uint64_t v___x_1491_; size_t v___x_1492_; size_t v___x_1493_; size_t v___x_1494_; size_t v___x_1495_; size_t v___x_1496_; lean_object* v___x_1497_; lean_object* v___x_1498_; 
v_buckets_1483_ = lean_ctor_get(v_m_1481_, 1);
v___x_1484_ = lean_array_get_size(v_buckets_1483_);
v___x_1485_ = l_Lean_instHashableFVarId_hash(v_a_1482_);
v___x_1486_ = 32ULL;
v___x_1487_ = lean_uint64_shift_right(v___x_1485_, v___x_1486_);
v_fold_1488_ = lean_uint64_xor(v___x_1485_, v___x_1487_);
v___x_1489_ = 16ULL;
v___x_1490_ = lean_uint64_shift_right(v_fold_1488_, v___x_1489_);
v___x_1491_ = lean_uint64_xor(v_fold_1488_, v___x_1490_);
v___x_1492_ = lean_uint64_to_usize(v___x_1491_);
v___x_1493_ = lean_usize_of_nat(v___x_1484_);
v___x_1494_ = ((size_t)1ULL);
v___x_1495_ = lean_usize_sub(v___x_1493_, v___x_1494_);
v___x_1496_ = lean_usize_land(v___x_1492_, v___x_1495_);
v___x_1497_ = lean_array_uget_borrowed(v_buckets_1483_, v___x_1496_);
v___x_1498_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Compiler_LCNF_Simp_withAddMustInline_spec__0_spec__0___redArg(v_a_1482_, v___x_1497_);
return v___x_1498_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Compiler_LCNF_Simp_withAddMustInline_spec__0___redArg___boxed(lean_object* v_m_1499_, lean_object* v_a_1500_){
_start:
{
lean_object* v_res_1501_; 
v_res_1501_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Compiler_LCNF_Simp_withAddMustInline_spec__0___redArg(v_m_1499_, v_a_1500_);
lean_dec(v_a_1500_);
lean_dec_ref(v_m_1499_);
return v_res_1501_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_withAddMustInline___redArg(lean_object* v_fvarId_1502_, lean_object* v_x_1503_, lean_object* v___y_1504_, lean_object* v___y_1505_, lean_object* v___y_1506_, lean_object* v___y_1507_, lean_object* v___y_1508_, lean_object* v___y_1509_, lean_object* v___y_1510_){
_start:
{
lean_object* v___x_1512_; lean_object* v_funDeclInfoMap_1513_; lean_object* v___x_1514_; lean_object* v_a_1516_; lean_object* v___x_1527_; lean_object* v___x_1528_; 
v___x_1512_ = lean_st_ref_get(v___y_1505_);
v_funDeclInfoMap_1513_ = lean_ctor_get(v___x_1512_, 3);
lean_inc_ref(v_funDeclInfoMap_1513_);
lean_dec(v___x_1512_);
v___x_1514_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Compiler_LCNF_Simp_withAddMustInline_spec__0___redArg(v_funDeclInfoMap_1513_, v_fvarId_1502_);
lean_dec_ref(v_funDeclInfoMap_1513_);
lean_inc(v_fvarId_1502_);
v___x_1527_ = l_Lean_Compiler_LCNF_Simp_addMustInline___redArg(v_fvarId_1502_, v___y_1505_);
lean_dec_ref(v___x_1527_);
lean_inc(v___y_1510_);
lean_inc_ref(v___y_1509_);
lean_inc(v___y_1508_);
lean_inc_ref(v___y_1507_);
lean_inc_ref(v___y_1506_);
lean_inc(v___y_1505_);
lean_inc_ref(v___y_1504_);
v___x_1528_ = lean_apply_8(v_x_1503_, v___y_1504_, v___y_1505_, v___y_1506_, v___y_1507_, v___y_1508_, v___y_1509_, v___y_1510_, lean_box(0));
if (lean_obj_tag(v___x_1528_) == 0)
{
lean_object* v_a_1529_; lean_object* v___x_1531_; uint8_t v_isShared_1532_; uint8_t v_isSharedCheck_1545_; 
v_a_1529_ = lean_ctor_get(v___x_1528_, 0);
v_isSharedCheck_1545_ = !lean_is_exclusive(v___x_1528_);
if (v_isSharedCheck_1545_ == 0)
{
v___x_1531_ = v___x_1528_;
v_isShared_1532_ = v_isSharedCheck_1545_;
goto v_resetjp_1530_;
}
else
{
lean_inc(v_a_1529_);
lean_dec(v___x_1528_);
v___x_1531_ = lean_box(0);
v_isShared_1532_ = v_isSharedCheck_1545_;
goto v_resetjp_1530_;
}
v_resetjp_1530_:
{
lean_object* v___x_1534_; 
lean_inc(v_a_1529_);
if (v_isShared_1532_ == 0)
{
lean_ctor_set_tag(v___x_1531_, 1);
v___x_1534_ = v___x_1531_;
goto v_reusejp_1533_;
}
else
{
lean_object* v_reuseFailAlloc_1544_; 
v_reuseFailAlloc_1544_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1544_, 0, v_a_1529_);
v___x_1534_ = v_reuseFailAlloc_1544_;
goto v_reusejp_1533_;
}
v_reusejp_1533_:
{
lean_object* v___x_1535_; lean_object* v___x_1537_; uint8_t v_isShared_1538_; uint8_t v_isSharedCheck_1542_; 
v___x_1535_ = l_Lean_Compiler_LCNF_Simp_withAddMustInline___redArg___lam__0(v___y_1505_, v_fvarId_1502_, v___x_1514_, v___x_1534_);
lean_dec_ref(v___x_1534_);
v_isSharedCheck_1542_ = !lean_is_exclusive(v___x_1535_);
if (v_isSharedCheck_1542_ == 0)
{
lean_object* v_unused_1543_; 
v_unused_1543_ = lean_ctor_get(v___x_1535_, 0);
lean_dec(v_unused_1543_);
v___x_1537_ = v___x_1535_;
v_isShared_1538_ = v_isSharedCheck_1542_;
goto v_resetjp_1536_;
}
else
{
lean_dec(v___x_1535_);
v___x_1537_ = lean_box(0);
v_isShared_1538_ = v_isSharedCheck_1542_;
goto v_resetjp_1536_;
}
v_resetjp_1536_:
{
lean_object* v___x_1540_; 
if (v_isShared_1538_ == 0)
{
lean_ctor_set(v___x_1537_, 0, v_a_1529_);
v___x_1540_ = v___x_1537_;
goto v_reusejp_1539_;
}
else
{
lean_object* v_reuseFailAlloc_1541_; 
v_reuseFailAlloc_1541_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1541_, 0, v_a_1529_);
v___x_1540_ = v_reuseFailAlloc_1541_;
goto v_reusejp_1539_;
}
v_reusejp_1539_:
{
return v___x_1540_;
}
}
}
}
}
else
{
lean_object* v_a_1546_; 
v_a_1546_ = lean_ctor_get(v___x_1528_, 0);
lean_inc(v_a_1546_);
lean_dec_ref_known(v___x_1528_, 1);
v_a_1516_ = v_a_1546_;
goto v___jp_1515_;
}
v___jp_1515_:
{
lean_object* v___x_1517_; lean_object* v___x_1518_; lean_object* v___x_1520_; uint8_t v_isShared_1521_; uint8_t v_isSharedCheck_1525_; 
v___x_1517_ = lean_box(0);
v___x_1518_ = l_Lean_Compiler_LCNF_Simp_withAddMustInline___redArg___lam__0(v___y_1505_, v_fvarId_1502_, v___x_1514_, v___x_1517_);
v_isSharedCheck_1525_ = !lean_is_exclusive(v___x_1518_);
if (v_isSharedCheck_1525_ == 0)
{
lean_object* v_unused_1526_; 
v_unused_1526_ = lean_ctor_get(v___x_1518_, 0);
lean_dec(v_unused_1526_);
v___x_1520_ = v___x_1518_;
v_isShared_1521_ = v_isSharedCheck_1525_;
goto v_resetjp_1519_;
}
else
{
lean_dec(v___x_1518_);
v___x_1520_ = lean_box(0);
v_isShared_1521_ = v_isSharedCheck_1525_;
goto v_resetjp_1519_;
}
v_resetjp_1519_:
{
lean_object* v___x_1523_; 
if (v_isShared_1521_ == 0)
{
lean_ctor_set_tag(v___x_1520_, 1);
lean_ctor_set(v___x_1520_, 0, v_a_1516_);
v___x_1523_ = v___x_1520_;
goto v_reusejp_1522_;
}
else
{
lean_object* v_reuseFailAlloc_1524_; 
v_reuseFailAlloc_1524_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1524_, 0, v_a_1516_);
v___x_1523_ = v_reuseFailAlloc_1524_;
goto v_reusejp_1522_;
}
v_reusejp_1522_:
{
return v___x_1523_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_withAddMustInline___redArg___boxed(lean_object* v_fvarId_1547_, lean_object* v_x_1548_, lean_object* v___y_1549_, lean_object* v___y_1550_, lean_object* v___y_1551_, lean_object* v___y_1552_, lean_object* v___y_1553_, lean_object* v___y_1554_, lean_object* v___y_1555_, lean_object* v___y_1556_){
_start:
{
lean_object* v_res_1557_; 
v_res_1557_ = l_Lean_Compiler_LCNF_Simp_withAddMustInline___redArg(v_fvarId_1547_, v_x_1548_, v___y_1549_, v___y_1550_, v___y_1551_, v___y_1552_, v___y_1553_, v___y_1554_, v___y_1555_);
lean_dec(v___y_1555_);
lean_dec_ref(v___y_1554_);
lean_dec(v___y_1553_);
lean_dec_ref(v___y_1552_);
lean_dec_ref(v___y_1551_);
lean_dec(v___y_1550_);
lean_dec_ref(v___y_1549_);
return v_res_1557_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_withAddMustInline(lean_object* v_00_u03b1_1558_, lean_object* v_fvarId_1559_, lean_object* v_x_1560_, lean_object* v___y_1561_, lean_object* v___y_1562_, lean_object* v___y_1563_, lean_object* v___y_1564_, lean_object* v___y_1565_, lean_object* v___y_1566_, lean_object* v___y_1567_){
_start:
{
lean_object* v___x_1569_; 
v___x_1569_ = l_Lean_Compiler_LCNF_Simp_withAddMustInline___redArg(v_fvarId_1559_, v_x_1560_, v___y_1561_, v___y_1562_, v___y_1563_, v___y_1564_, v___y_1565_, v___y_1566_, v___y_1567_);
return v___x_1569_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_withAddMustInline___boxed(lean_object* v_00_u03b1_1570_, lean_object* v_fvarId_1571_, lean_object* v_x_1572_, lean_object* v___y_1573_, lean_object* v___y_1574_, lean_object* v___y_1575_, lean_object* v___y_1576_, lean_object* v___y_1577_, lean_object* v___y_1578_, lean_object* v___y_1579_, lean_object* v___y_1580_){
_start:
{
lean_object* v_res_1581_; 
v_res_1581_ = l_Lean_Compiler_LCNF_Simp_withAddMustInline(v_00_u03b1_1570_, v_fvarId_1571_, v_x_1572_, v___y_1573_, v___y_1574_, v___y_1575_, v___y_1576_, v___y_1577_, v___y_1578_, v___y_1579_);
lean_dec(v___y_1579_);
lean_dec_ref(v___y_1578_);
lean_dec(v___y_1577_);
lean_dec_ref(v___y_1576_);
lean_dec_ref(v___y_1575_);
lean_dec(v___y_1574_);
lean_dec_ref(v___y_1573_);
return v_res_1581_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Compiler_LCNF_Simp_withAddMustInline_spec__0(lean_object* v_00_u03b2_1582_, lean_object* v_m_1583_, lean_object* v_a_1584_){
_start:
{
lean_object* v___x_1585_; 
v___x_1585_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Compiler_LCNF_Simp_withAddMustInline_spec__0___redArg(v_m_1583_, v_a_1584_);
return v___x_1585_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Compiler_LCNF_Simp_withAddMustInline_spec__0___boxed(lean_object* v_00_u03b2_1586_, lean_object* v_m_1587_, lean_object* v_a_1588_){
_start:
{
lean_object* v_res_1589_; 
v_res_1589_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Compiler_LCNF_Simp_withAddMustInline_spec__0(v_00_u03b2_1586_, v_m_1587_, v_a_1588_);
lean_dec(v_a_1588_);
lean_dec_ref(v_m_1587_);
return v_res_1589_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Compiler_LCNF_Simp_withAddMustInline_spec__0_spec__0(lean_object* v_00_u03b2_1590_, lean_object* v_a_1591_, lean_object* v_x_1592_){
_start:
{
lean_object* v___x_1593_; 
v___x_1593_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Compiler_LCNF_Simp_withAddMustInline_spec__0_spec__0___redArg(v_a_1591_, v_x_1592_);
return v___x_1593_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Compiler_LCNF_Simp_withAddMustInline_spec__0_spec__0___boxed(lean_object* v_00_u03b2_1594_, lean_object* v_a_1595_, lean_object* v_x_1596_){
_start:
{
lean_object* v_res_1597_; 
v_res_1597_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Compiler_LCNF_Simp_withAddMustInline_spec__0_spec__0(v_00_u03b2_1594_, v_a_1595_, v_x_1596_);
lean_dec(v_x_1596_);
lean_dec(v_a_1595_);
return v_res_1597_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_isOnceOrMustInline___redArg(lean_object* v_fvarId_1598_, lean_object* v___y_1599_){
_start:
{
lean_object* v___x_1609_; lean_object* v_funDeclInfoMap_1610_; lean_object* v___x_1611_; 
v___x_1609_ = lean_st_ref_get(v___y_1599_);
v_funDeclInfoMap_1610_ = lean_ctor_get(v___x_1609_, 3);
lean_inc_ref(v_funDeclInfoMap_1610_);
lean_dec(v___x_1609_);
v___x_1611_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Compiler_LCNF_Simp_withAddMustInline_spec__0___redArg(v_funDeclInfoMap_1610_, v_fvarId_1598_);
lean_dec_ref(v_funDeclInfoMap_1610_);
if (lean_obj_tag(v___x_1611_) == 1)
{
lean_object* v_val_1612_; uint8_t v___x_1613_; 
v_val_1612_ = lean_ctor_get(v___x_1611_, 0);
lean_inc(v_val_1612_);
lean_dec_ref_known(v___x_1611_, 1);
v___x_1613_ = lean_unbox(v_val_1612_);
lean_dec(v_val_1612_);
switch(v___x_1613_)
{
case 0:
{
goto v___jp_1605_;
}
case 2:
{
goto v___jp_1605_;
}
default: 
{
goto v___jp_1601_;
}
}
}
else
{
lean_dec(v___x_1611_);
goto v___jp_1601_;
}
v___jp_1601_:
{
uint8_t v___x_1602_; lean_object* v___x_1603_; lean_object* v___x_1604_; 
v___x_1602_ = 0;
v___x_1603_ = lean_box(v___x_1602_);
v___x_1604_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1604_, 0, v___x_1603_);
return v___x_1604_;
}
v___jp_1605_:
{
uint8_t v___x_1606_; lean_object* v___x_1607_; lean_object* v___x_1608_; 
v___x_1606_ = 1;
v___x_1607_ = lean_box(v___x_1606_);
v___x_1608_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1608_, 0, v___x_1607_);
return v___x_1608_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_isOnceOrMustInline___redArg___boxed(lean_object* v_fvarId_1614_, lean_object* v___y_1615_, lean_object* v___y_1616_){
_start:
{
lean_object* v_res_1617_; 
v_res_1617_ = l_Lean_Compiler_LCNF_Simp_isOnceOrMustInline___redArg(v_fvarId_1614_, v___y_1615_);
lean_dec(v___y_1615_);
lean_dec(v_fvarId_1614_);
return v_res_1617_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_isOnceOrMustInline(lean_object* v_fvarId_1618_, lean_object* v___y_1619_, lean_object* v___y_1620_, lean_object* v___y_1621_, lean_object* v___y_1622_, lean_object* v___y_1623_, lean_object* v___y_1624_, lean_object* v___y_1625_){
_start:
{
lean_object* v___x_1627_; 
v___x_1627_ = l_Lean_Compiler_LCNF_Simp_isOnceOrMustInline___redArg(v_fvarId_1618_, v___y_1620_);
return v___x_1627_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_isOnceOrMustInline___boxed(lean_object* v_fvarId_1628_, lean_object* v___y_1629_, lean_object* v___y_1630_, lean_object* v___y_1631_, lean_object* v___y_1632_, lean_object* v___y_1633_, lean_object* v___y_1634_, lean_object* v___y_1635_, lean_object* v___y_1636_){
_start:
{
lean_object* v_res_1637_; 
v_res_1637_ = l_Lean_Compiler_LCNF_Simp_isOnceOrMustInline(v_fvarId_1628_, v___y_1629_, v___y_1630_, v___y_1631_, v___y_1632_, v___y_1633_, v___y_1634_, v___y_1635_);
lean_dec(v___y_1635_);
lean_dec_ref(v___y_1634_);
lean_dec(v___y_1633_);
lean_dec_ref(v___y_1632_);
lean_dec_ref(v___y_1631_);
lean_dec(v___y_1630_);
lean_dec_ref(v___y_1629_);
lean_dec(v_fvarId_1628_);
return v_res_1637_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_isSmall___redArg(lean_object* v_code_1638_, lean_object* v___y_1639_){
_start:
{
lean_object* v___x_1641_; 
v___x_1641_ = l_Lean_Compiler_LCNF_getConfig___redArg(v___y_1639_);
if (lean_obj_tag(v___x_1641_) == 0)
{
lean_object* v_a_1642_; lean_object* v___x_1644_; uint8_t v_isShared_1645_; uint8_t v_isSharedCheck_1653_; 
v_a_1642_ = lean_ctor_get(v___x_1641_, 0);
v_isSharedCheck_1653_ = !lean_is_exclusive(v___x_1641_);
if (v_isSharedCheck_1653_ == 0)
{
v___x_1644_ = v___x_1641_;
v_isShared_1645_ = v_isSharedCheck_1653_;
goto v_resetjp_1643_;
}
else
{
lean_inc(v_a_1642_);
lean_dec(v___x_1641_);
v___x_1644_ = lean_box(0);
v_isShared_1645_ = v_isSharedCheck_1653_;
goto v_resetjp_1643_;
}
v_resetjp_1643_:
{
lean_object* v_smallThreshold_1646_; uint8_t v___x_1647_; uint8_t v___x_1648_; lean_object* v___x_1649_; lean_object* v___x_1651_; 
v_smallThreshold_1646_ = lean_ctor_get(v_a_1642_, 0);
lean_inc(v_smallThreshold_1646_);
lean_dec(v_a_1642_);
v___x_1647_ = 0;
v___x_1648_ = l_Lean_Compiler_LCNF_Code_sizeLe(v___x_1647_, v_code_1638_, v_smallThreshold_1646_);
lean_dec(v_smallThreshold_1646_);
v___x_1649_ = lean_box(v___x_1648_);
if (v_isShared_1645_ == 0)
{
lean_ctor_set(v___x_1644_, 0, v___x_1649_);
v___x_1651_ = v___x_1644_;
goto v_reusejp_1650_;
}
else
{
lean_object* v_reuseFailAlloc_1652_; 
v_reuseFailAlloc_1652_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1652_, 0, v___x_1649_);
v___x_1651_ = v_reuseFailAlloc_1652_;
goto v_reusejp_1650_;
}
v_reusejp_1650_:
{
return v___x_1651_;
}
}
}
else
{
lean_object* v_a_1654_; lean_object* v___x_1656_; uint8_t v_isShared_1657_; uint8_t v_isSharedCheck_1661_; 
v_a_1654_ = lean_ctor_get(v___x_1641_, 0);
v_isSharedCheck_1661_ = !lean_is_exclusive(v___x_1641_);
if (v_isSharedCheck_1661_ == 0)
{
v___x_1656_ = v___x_1641_;
v_isShared_1657_ = v_isSharedCheck_1661_;
goto v_resetjp_1655_;
}
else
{
lean_inc(v_a_1654_);
lean_dec(v___x_1641_);
v___x_1656_ = lean_box(0);
v_isShared_1657_ = v_isSharedCheck_1661_;
goto v_resetjp_1655_;
}
v_resetjp_1655_:
{
lean_object* v___x_1659_; 
if (v_isShared_1657_ == 0)
{
v___x_1659_ = v___x_1656_;
goto v_reusejp_1658_;
}
else
{
lean_object* v_reuseFailAlloc_1660_; 
v_reuseFailAlloc_1660_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1660_, 0, v_a_1654_);
v___x_1659_ = v_reuseFailAlloc_1660_;
goto v_reusejp_1658_;
}
v_reusejp_1658_:
{
return v___x_1659_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_isSmall___redArg___boxed(lean_object* v_code_1662_, lean_object* v___y_1663_, lean_object* v___y_1664_){
_start:
{
lean_object* v_res_1665_; 
v_res_1665_ = l_Lean_Compiler_LCNF_Simp_isSmall___redArg(v_code_1662_, v___y_1663_);
lean_dec_ref(v___y_1663_);
lean_dec_ref(v_code_1662_);
return v_res_1665_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_isSmall(lean_object* v_code_1666_, lean_object* v___y_1667_, lean_object* v___y_1668_, lean_object* v___y_1669_, lean_object* v___y_1670_, lean_object* v___y_1671_, lean_object* v___y_1672_, lean_object* v___y_1673_){
_start:
{
lean_object* v___x_1675_; 
v___x_1675_ = l_Lean_Compiler_LCNF_Simp_isSmall___redArg(v_code_1666_, v___y_1670_);
return v___x_1675_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_isSmall___boxed(lean_object* v_code_1676_, lean_object* v___y_1677_, lean_object* v___y_1678_, lean_object* v___y_1679_, lean_object* v___y_1680_, lean_object* v___y_1681_, lean_object* v___y_1682_, lean_object* v___y_1683_, lean_object* v___y_1684_){
_start:
{
lean_object* v_res_1685_; 
v_res_1685_ = l_Lean_Compiler_LCNF_Simp_isSmall(v_code_1676_, v___y_1677_, v___y_1678_, v___y_1679_, v___y_1680_, v___y_1681_, v___y_1682_, v___y_1683_);
lean_dec(v___y_1683_);
lean_dec_ref(v___y_1682_);
lean_dec(v___y_1681_);
lean_dec_ref(v___y_1680_);
lean_dec_ref(v___y_1679_);
lean_dec(v___y_1678_);
lean_dec_ref(v___y_1677_);
lean_dec_ref(v_code_1676_);
return v_res_1685_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_shouldInlineLocal___redArg(lean_object* v_decl_1686_, lean_object* v___y_1687_, lean_object* v___y_1688_){
_start:
{
lean_object* v_fvarId_1690_; lean_object* v_value_1691_; lean_object* v___x_1692_; lean_object* v_a_1693_; uint8_t v___x_1694_; 
v_fvarId_1690_ = lean_ctor_get(v_decl_1686_, 0);
v_value_1691_ = lean_ctor_get(v_decl_1686_, 4);
v___x_1692_ = l_Lean_Compiler_LCNF_Simp_isOnceOrMustInline___redArg(v_fvarId_1690_, v___y_1687_);
v_a_1693_ = lean_ctor_get(v___x_1692_, 0);
lean_inc(v_a_1693_);
v___x_1694_ = lean_unbox(v_a_1693_);
lean_dec(v_a_1693_);
if (v___x_1694_ == 0)
{
lean_object* v___x_1695_; 
lean_dec_ref(v___x_1692_);
v___x_1695_ = l_Lean_Compiler_LCNF_Simp_isSmall___redArg(v_value_1691_, v___y_1688_);
return v___x_1695_;
}
else
{
return v___x_1692_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_shouldInlineLocal___redArg___boxed(lean_object* v_decl_1696_, lean_object* v___y_1697_, lean_object* v___y_1698_, lean_object* v___y_1699_){
_start:
{
lean_object* v_res_1700_; 
v_res_1700_ = l_Lean_Compiler_LCNF_Simp_shouldInlineLocal___redArg(v_decl_1696_, v___y_1697_, v___y_1698_);
lean_dec_ref(v___y_1698_);
lean_dec(v___y_1697_);
lean_dec_ref(v_decl_1696_);
return v_res_1700_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_shouldInlineLocal(lean_object* v_decl_1701_, lean_object* v___y_1702_, lean_object* v___y_1703_, lean_object* v___y_1704_, lean_object* v___y_1705_, lean_object* v___y_1706_, lean_object* v___y_1707_, lean_object* v___y_1708_){
_start:
{
lean_object* v___x_1710_; 
v___x_1710_ = l_Lean_Compiler_LCNF_Simp_shouldInlineLocal___redArg(v_decl_1701_, v___y_1703_, v___y_1705_);
return v___x_1710_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_shouldInlineLocal___boxed(lean_object* v_decl_1711_, lean_object* v___y_1712_, lean_object* v___y_1713_, lean_object* v___y_1714_, lean_object* v___y_1715_, lean_object* v___y_1716_, lean_object* v___y_1717_, lean_object* v___y_1718_, lean_object* v___y_1719_){
_start:
{
lean_object* v_res_1720_; 
v_res_1720_ = l_Lean_Compiler_LCNF_Simp_shouldInlineLocal(v_decl_1711_, v___y_1712_, v___y_1713_, v___y_1714_, v___y_1715_, v___y_1716_, v___y_1717_, v___y_1718_);
lean_dec(v___y_1718_);
lean_dec_ref(v___y_1717_);
lean_dec(v___y_1716_);
lean_dec_ref(v___y_1715_);
lean_dec_ref(v___y_1714_);
lean_dec(v___y_1713_);
lean_dec_ref(v___y_1712_);
lean_dec_ref(v_decl_1711_);
return v_res_1720_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_betaReduce_spec__0_spec__2___redArg(lean_object* v_a_1721_, lean_object* v_b_1722_, lean_object* v_x_1723_){
_start:
{
if (lean_obj_tag(v_x_1723_) == 0)
{
lean_dec(v_b_1722_);
lean_dec(v_a_1721_);
return v_x_1723_;
}
else
{
lean_object* v_key_1724_; lean_object* v_value_1725_; lean_object* v_tail_1726_; lean_object* v___x_1728_; uint8_t v_isShared_1729_; uint8_t v_isSharedCheck_1738_; 
v_key_1724_ = lean_ctor_get(v_x_1723_, 0);
v_value_1725_ = lean_ctor_get(v_x_1723_, 1);
v_tail_1726_ = lean_ctor_get(v_x_1723_, 2);
v_isSharedCheck_1738_ = !lean_is_exclusive(v_x_1723_);
if (v_isSharedCheck_1738_ == 0)
{
v___x_1728_ = v_x_1723_;
v_isShared_1729_ = v_isSharedCheck_1738_;
goto v_resetjp_1727_;
}
else
{
lean_inc(v_tail_1726_);
lean_inc(v_value_1725_);
lean_inc(v_key_1724_);
lean_dec(v_x_1723_);
v___x_1728_ = lean_box(0);
v_isShared_1729_ = v_isSharedCheck_1738_;
goto v_resetjp_1727_;
}
v_resetjp_1727_:
{
uint8_t v___x_1730_; 
v___x_1730_ = l_Lean_instBEqFVarId_beq(v_key_1724_, v_a_1721_);
if (v___x_1730_ == 0)
{
lean_object* v___x_1731_; lean_object* v___x_1733_; 
v___x_1731_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_betaReduce_spec__0_spec__2___redArg(v_a_1721_, v_b_1722_, v_tail_1726_);
if (v_isShared_1729_ == 0)
{
lean_ctor_set(v___x_1728_, 2, v___x_1731_);
v___x_1733_ = v___x_1728_;
goto v_reusejp_1732_;
}
else
{
lean_object* v_reuseFailAlloc_1734_; 
v_reuseFailAlloc_1734_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1734_, 0, v_key_1724_);
lean_ctor_set(v_reuseFailAlloc_1734_, 1, v_value_1725_);
lean_ctor_set(v_reuseFailAlloc_1734_, 2, v___x_1731_);
v___x_1733_ = v_reuseFailAlloc_1734_;
goto v_reusejp_1732_;
}
v_reusejp_1732_:
{
return v___x_1733_;
}
}
else
{
lean_object* v___x_1736_; 
lean_dec(v_value_1725_);
lean_dec(v_key_1724_);
if (v_isShared_1729_ == 0)
{
lean_ctor_set(v___x_1728_, 1, v_b_1722_);
lean_ctor_set(v___x_1728_, 0, v_a_1721_);
v___x_1736_ = v___x_1728_;
goto v_reusejp_1735_;
}
else
{
lean_object* v_reuseFailAlloc_1737_; 
v_reuseFailAlloc_1737_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1737_, 0, v_a_1721_);
lean_ctor_set(v_reuseFailAlloc_1737_, 1, v_b_1722_);
lean_ctor_set(v_reuseFailAlloc_1737_, 2, v_tail_1726_);
v___x_1736_ = v_reuseFailAlloc_1737_;
goto v_reusejp_1735_;
}
v_reusejp_1735_:
{
return v___x_1736_;
}
}
}
}
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_betaReduce_spec__0_spec__0___redArg(lean_object* v_a_1739_, lean_object* v_x_1740_){
_start:
{
if (lean_obj_tag(v_x_1740_) == 0)
{
uint8_t v___x_1741_; 
v___x_1741_ = 0;
return v___x_1741_;
}
else
{
lean_object* v_key_1742_; lean_object* v_tail_1743_; uint8_t v___x_1744_; 
v_key_1742_ = lean_ctor_get(v_x_1740_, 0);
v_tail_1743_ = lean_ctor_get(v_x_1740_, 2);
v___x_1744_ = l_Lean_instBEqFVarId_beq(v_key_1742_, v_a_1739_);
if (v___x_1744_ == 0)
{
v_x_1740_ = v_tail_1743_;
goto _start;
}
else
{
return v___x_1744_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_betaReduce_spec__0_spec__0___redArg___boxed(lean_object* v_a_1746_, lean_object* v_x_1747_){
_start:
{
uint8_t v_res_1748_; lean_object* v_r_1749_; 
v_res_1748_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_betaReduce_spec__0_spec__0___redArg(v_a_1746_, v_x_1747_);
lean_dec(v_x_1747_);
lean_dec(v_a_1746_);
v_r_1749_ = lean_box(v_res_1748_);
return v_r_1749_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_betaReduce_spec__0_spec__1_spec__2_spec__4___redArg(lean_object* v_x_1750_, lean_object* v_x_1751_){
_start:
{
if (lean_obj_tag(v_x_1751_) == 0)
{
return v_x_1750_;
}
else
{
lean_object* v_key_1752_; lean_object* v_value_1753_; lean_object* v_tail_1754_; lean_object* v___x_1756_; uint8_t v_isShared_1757_; uint8_t v_isSharedCheck_1777_; 
v_key_1752_ = lean_ctor_get(v_x_1751_, 0);
v_value_1753_ = lean_ctor_get(v_x_1751_, 1);
v_tail_1754_ = lean_ctor_get(v_x_1751_, 2);
v_isSharedCheck_1777_ = !lean_is_exclusive(v_x_1751_);
if (v_isSharedCheck_1777_ == 0)
{
v___x_1756_ = v_x_1751_;
v_isShared_1757_ = v_isSharedCheck_1777_;
goto v_resetjp_1755_;
}
else
{
lean_inc(v_tail_1754_);
lean_inc(v_value_1753_);
lean_inc(v_key_1752_);
lean_dec(v_x_1751_);
v___x_1756_ = lean_box(0);
v_isShared_1757_ = v_isSharedCheck_1777_;
goto v_resetjp_1755_;
}
v_resetjp_1755_:
{
lean_object* v___x_1758_; uint64_t v___x_1759_; uint64_t v___x_1760_; uint64_t v___x_1761_; uint64_t v_fold_1762_; uint64_t v___x_1763_; uint64_t v___x_1764_; uint64_t v___x_1765_; size_t v___x_1766_; size_t v___x_1767_; size_t v___x_1768_; size_t v___x_1769_; size_t v___x_1770_; lean_object* v___x_1771_; lean_object* v___x_1773_; 
v___x_1758_ = lean_array_get_size(v_x_1750_);
v___x_1759_ = l_Lean_instHashableFVarId_hash(v_key_1752_);
v___x_1760_ = 32ULL;
v___x_1761_ = lean_uint64_shift_right(v___x_1759_, v___x_1760_);
v_fold_1762_ = lean_uint64_xor(v___x_1759_, v___x_1761_);
v___x_1763_ = 16ULL;
v___x_1764_ = lean_uint64_shift_right(v_fold_1762_, v___x_1763_);
v___x_1765_ = lean_uint64_xor(v_fold_1762_, v___x_1764_);
v___x_1766_ = lean_uint64_to_usize(v___x_1765_);
v___x_1767_ = lean_usize_of_nat(v___x_1758_);
v___x_1768_ = ((size_t)1ULL);
v___x_1769_ = lean_usize_sub(v___x_1767_, v___x_1768_);
v___x_1770_ = lean_usize_land(v___x_1766_, v___x_1769_);
v___x_1771_ = lean_array_uget_borrowed(v_x_1750_, v___x_1770_);
lean_inc(v___x_1771_);
if (v_isShared_1757_ == 0)
{
lean_ctor_set(v___x_1756_, 2, v___x_1771_);
v___x_1773_ = v___x_1756_;
goto v_reusejp_1772_;
}
else
{
lean_object* v_reuseFailAlloc_1776_; 
v_reuseFailAlloc_1776_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1776_, 0, v_key_1752_);
lean_ctor_set(v_reuseFailAlloc_1776_, 1, v_value_1753_);
lean_ctor_set(v_reuseFailAlloc_1776_, 2, v___x_1771_);
v___x_1773_ = v_reuseFailAlloc_1776_;
goto v_reusejp_1772_;
}
v_reusejp_1772_:
{
lean_object* v___x_1774_; 
v___x_1774_ = lean_array_uset(v_x_1750_, v___x_1770_, v___x_1773_);
v_x_1750_ = v___x_1774_;
v_x_1751_ = v_tail_1754_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_betaReduce_spec__0_spec__1_spec__2___redArg(lean_object* v_i_1778_, lean_object* v_source_1779_, lean_object* v_target_1780_){
_start:
{
lean_object* v___x_1781_; uint8_t v___x_1782_; 
v___x_1781_ = lean_array_get_size(v_source_1779_);
v___x_1782_ = lean_nat_dec_lt(v_i_1778_, v___x_1781_);
if (v___x_1782_ == 0)
{
lean_dec_ref(v_source_1779_);
lean_dec(v_i_1778_);
return v_target_1780_;
}
else
{
lean_object* v_es_1783_; lean_object* v___x_1784_; lean_object* v_source_1785_; lean_object* v_target_1786_; lean_object* v___x_1787_; lean_object* v___x_1788_; 
v_es_1783_ = lean_array_fget(v_source_1779_, v_i_1778_);
v___x_1784_ = lean_box(0);
v_source_1785_ = lean_array_fset(v_source_1779_, v_i_1778_, v___x_1784_);
v_target_1786_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_betaReduce_spec__0_spec__1_spec__2_spec__4___redArg(v_target_1780_, v_es_1783_);
v___x_1787_ = lean_unsigned_to_nat(1u);
v___x_1788_ = lean_nat_add(v_i_1778_, v___x_1787_);
lean_dec(v_i_1778_);
v_i_1778_ = v___x_1788_;
v_source_1779_ = v_source_1785_;
v_target_1780_ = v_target_1786_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_betaReduce_spec__0_spec__1___redArg(lean_object* v_data_1790_){
_start:
{
lean_object* v___x_1791_; lean_object* v___x_1792_; lean_object* v_nbuckets_1793_; lean_object* v___x_1794_; lean_object* v___x_1795_; lean_object* v___x_1796_; lean_object* v___x_1797_; lean_object* v___x_1798_; 
v___x_1791_ = lean_array_get_size(v_data_1790_);
v___x_1792_ = lean_unsigned_to_nat(2u);
v_nbuckets_1793_ = lean_nat_mul(v___x_1791_, v___x_1792_);
v___x_1794_ = lean_unsigned_to_nat(0u);
v___x_1795_ = lean_box(0);
v___x_1796_ = lean_mk_array(v_nbuckets_1793_, v___x_1795_);
v___x_1797_ = lean_array_propagate_mark(v_data_1790_, v___x_1796_);
v___x_1798_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_betaReduce_spec__0_spec__1_spec__2___redArg(v___x_1794_, v_data_1790_, v___x_1797_);
return v___x_1798_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_betaReduce_spec__0___redArg(lean_object* v_m_1799_, lean_object* v_a_1800_, lean_object* v_b_1801_){
_start:
{
lean_object* v_size_1802_; lean_object* v_buckets_1803_; lean_object* v___x_1805_; uint8_t v_isShared_1806_; uint8_t v_isSharedCheck_1846_; 
v_size_1802_ = lean_ctor_get(v_m_1799_, 0);
v_buckets_1803_ = lean_ctor_get(v_m_1799_, 1);
v_isSharedCheck_1846_ = !lean_is_exclusive(v_m_1799_);
if (v_isSharedCheck_1846_ == 0)
{
v___x_1805_ = v_m_1799_;
v_isShared_1806_ = v_isSharedCheck_1846_;
goto v_resetjp_1804_;
}
else
{
lean_inc(v_buckets_1803_);
lean_inc(v_size_1802_);
lean_dec(v_m_1799_);
v___x_1805_ = lean_box(0);
v_isShared_1806_ = v_isSharedCheck_1846_;
goto v_resetjp_1804_;
}
v_resetjp_1804_:
{
lean_object* v___x_1807_; uint64_t v___x_1808_; uint64_t v___x_1809_; uint64_t v___x_1810_; uint64_t v_fold_1811_; uint64_t v___x_1812_; uint64_t v___x_1813_; uint64_t v___x_1814_; size_t v___x_1815_; size_t v___x_1816_; size_t v___x_1817_; size_t v___x_1818_; size_t v___x_1819_; lean_object* v_bkt_1820_; uint8_t v___x_1821_; 
v___x_1807_ = lean_array_get_size(v_buckets_1803_);
v___x_1808_ = l_Lean_instHashableFVarId_hash(v_a_1800_);
v___x_1809_ = 32ULL;
v___x_1810_ = lean_uint64_shift_right(v___x_1808_, v___x_1809_);
v_fold_1811_ = lean_uint64_xor(v___x_1808_, v___x_1810_);
v___x_1812_ = 16ULL;
v___x_1813_ = lean_uint64_shift_right(v_fold_1811_, v___x_1812_);
v___x_1814_ = lean_uint64_xor(v_fold_1811_, v___x_1813_);
v___x_1815_ = lean_uint64_to_usize(v___x_1814_);
v___x_1816_ = lean_usize_of_nat(v___x_1807_);
v___x_1817_ = ((size_t)1ULL);
v___x_1818_ = lean_usize_sub(v___x_1816_, v___x_1817_);
v___x_1819_ = lean_usize_land(v___x_1815_, v___x_1818_);
v_bkt_1820_ = lean_array_uget_borrowed(v_buckets_1803_, v___x_1819_);
v___x_1821_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_betaReduce_spec__0_spec__0___redArg(v_a_1800_, v_bkt_1820_);
if (v___x_1821_ == 0)
{
lean_object* v___x_1822_; lean_object* v_size_x27_1823_; lean_object* v___x_1824_; lean_object* v_buckets_x27_1825_; lean_object* v___x_1826_; lean_object* v___x_1827_; lean_object* v___x_1828_; lean_object* v___x_1829_; lean_object* v___x_1830_; uint8_t v___x_1831_; 
v___x_1822_ = lean_unsigned_to_nat(1u);
v_size_x27_1823_ = lean_nat_add(v_size_1802_, v___x_1822_);
lean_dec(v_size_1802_);
lean_inc(v_bkt_1820_);
v___x_1824_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1824_, 0, v_a_1800_);
lean_ctor_set(v___x_1824_, 1, v_b_1801_);
lean_ctor_set(v___x_1824_, 2, v_bkt_1820_);
v_buckets_x27_1825_ = lean_array_uset(v_buckets_1803_, v___x_1819_, v___x_1824_);
v___x_1826_ = lean_unsigned_to_nat(4u);
v___x_1827_ = lean_nat_mul(v_size_x27_1823_, v___x_1826_);
v___x_1828_ = lean_unsigned_to_nat(3u);
v___x_1829_ = lean_nat_div(v___x_1827_, v___x_1828_);
lean_dec(v___x_1827_);
v___x_1830_ = lean_array_get_size(v_buckets_x27_1825_);
v___x_1831_ = lean_nat_dec_le(v___x_1829_, v___x_1830_);
lean_dec(v___x_1829_);
if (v___x_1831_ == 0)
{
lean_object* v_val_1832_; lean_object* v___x_1834_; 
v_val_1832_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_betaReduce_spec__0_spec__1___redArg(v_buckets_x27_1825_);
if (v_isShared_1806_ == 0)
{
lean_ctor_set(v___x_1805_, 1, v_val_1832_);
lean_ctor_set(v___x_1805_, 0, v_size_x27_1823_);
v___x_1834_ = v___x_1805_;
goto v_reusejp_1833_;
}
else
{
lean_object* v_reuseFailAlloc_1835_; 
v_reuseFailAlloc_1835_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1835_, 0, v_size_x27_1823_);
lean_ctor_set(v_reuseFailAlloc_1835_, 1, v_val_1832_);
v___x_1834_ = v_reuseFailAlloc_1835_;
goto v_reusejp_1833_;
}
v_reusejp_1833_:
{
return v___x_1834_;
}
}
else
{
lean_object* v___x_1837_; 
if (v_isShared_1806_ == 0)
{
lean_ctor_set(v___x_1805_, 1, v_buckets_x27_1825_);
lean_ctor_set(v___x_1805_, 0, v_size_x27_1823_);
v___x_1837_ = v___x_1805_;
goto v_reusejp_1836_;
}
else
{
lean_object* v_reuseFailAlloc_1838_; 
v_reuseFailAlloc_1838_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1838_, 0, v_size_x27_1823_);
lean_ctor_set(v_reuseFailAlloc_1838_, 1, v_buckets_x27_1825_);
v___x_1837_ = v_reuseFailAlloc_1838_;
goto v_reusejp_1836_;
}
v_reusejp_1836_:
{
return v___x_1837_;
}
}
}
else
{
lean_object* v___x_1839_; lean_object* v_buckets_x27_1840_; lean_object* v___x_1841_; lean_object* v___x_1842_; lean_object* v___x_1844_; 
lean_inc(v_bkt_1820_);
v___x_1839_ = lean_box(0);
v_buckets_x27_1840_ = lean_array_uset(v_buckets_1803_, v___x_1819_, v___x_1839_);
v___x_1841_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_betaReduce_spec__0_spec__2___redArg(v_a_1800_, v_b_1801_, v_bkt_1820_);
v___x_1842_ = lean_array_uset(v_buckets_x27_1840_, v___x_1819_, v___x_1841_);
if (v_isShared_1806_ == 0)
{
lean_ctor_set(v___x_1805_, 1, v___x_1842_);
v___x_1844_ = v___x_1805_;
goto v_reusejp_1843_;
}
else
{
lean_object* v_reuseFailAlloc_1845_; 
v_reuseFailAlloc_1845_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1845_, 0, v_size_1802_);
lean_ctor_set(v_reuseFailAlloc_1845_, 1, v___x_1842_);
v___x_1844_ = v_reuseFailAlloc_1845_;
goto v_reusejp_1843_;
}
v_reusejp_1843_:
{
return v___x_1844_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_Simp_betaReduce_spec__1___redArg(lean_object* v_as_1847_, size_t v_sz_1848_, size_t v_i_1849_, lean_object* v_b_1850_){
_start:
{
uint8_t v___x_1852_; 
v___x_1852_ = lean_usize_dec_lt(v_i_1849_, v_sz_1848_);
if (v___x_1852_ == 0)
{
lean_object* v___x_1853_; 
v___x_1853_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1853_, 0, v_b_1850_);
return v___x_1853_;
}
else
{
lean_object* v_snd_1854_; lean_object* v_fst_1855_; lean_object* v___x_1857_; uint8_t v_isShared_1858_; uint8_t v_isSharedCheck_1889_; 
v_snd_1854_ = lean_ctor_get(v_b_1850_, 1);
v_fst_1855_ = lean_ctor_get(v_b_1850_, 0);
v_isSharedCheck_1889_ = !lean_is_exclusive(v_b_1850_);
if (v_isSharedCheck_1889_ == 0)
{
v___x_1857_ = v_b_1850_;
v_isShared_1858_ = v_isSharedCheck_1889_;
goto v_resetjp_1856_;
}
else
{
lean_inc(v_snd_1854_);
lean_inc(v_fst_1855_);
lean_dec(v_b_1850_);
v___x_1857_ = lean_box(0);
v_isShared_1858_ = v_isSharedCheck_1889_;
goto v_resetjp_1856_;
}
v_resetjp_1856_:
{
lean_object* v_array_1859_; lean_object* v_start_1860_; lean_object* v_stop_1861_; uint8_t v___x_1862_; 
v_array_1859_ = lean_ctor_get(v_snd_1854_, 0);
v_start_1860_ = lean_ctor_get(v_snd_1854_, 1);
v_stop_1861_ = lean_ctor_get(v_snd_1854_, 2);
v___x_1862_ = lean_nat_dec_lt(v_start_1860_, v_stop_1861_);
if (v___x_1862_ == 0)
{
lean_object* v___x_1864_; 
if (v_isShared_1858_ == 0)
{
v___x_1864_ = v___x_1857_;
goto v_reusejp_1863_;
}
else
{
lean_object* v_reuseFailAlloc_1866_; 
v_reuseFailAlloc_1866_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1866_, 0, v_fst_1855_);
lean_ctor_set(v_reuseFailAlloc_1866_, 1, v_snd_1854_);
v___x_1864_ = v_reuseFailAlloc_1866_;
goto v_reusejp_1863_;
}
v_reusejp_1863_:
{
lean_object* v___x_1865_; 
v___x_1865_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1865_, 0, v___x_1864_);
return v___x_1865_;
}
}
else
{
lean_object* v___x_1868_; uint8_t v_isShared_1869_; uint8_t v_isSharedCheck_1885_; 
lean_inc(v_stop_1861_);
lean_inc(v_start_1860_);
lean_inc_ref(v_array_1859_);
v_isSharedCheck_1885_ = !lean_is_exclusive(v_snd_1854_);
if (v_isSharedCheck_1885_ == 0)
{
lean_object* v_unused_1886_; lean_object* v_unused_1887_; lean_object* v_unused_1888_; 
v_unused_1886_ = lean_ctor_get(v_snd_1854_, 2);
lean_dec(v_unused_1886_);
v_unused_1887_ = lean_ctor_get(v_snd_1854_, 1);
lean_dec(v_unused_1887_);
v_unused_1888_ = lean_ctor_get(v_snd_1854_, 0);
lean_dec(v_unused_1888_);
v___x_1868_ = v_snd_1854_;
v_isShared_1869_ = v_isSharedCheck_1885_;
goto v_resetjp_1867_;
}
else
{
lean_dec(v_snd_1854_);
v___x_1868_ = lean_box(0);
v_isShared_1869_ = v_isSharedCheck_1885_;
goto v_resetjp_1867_;
}
v_resetjp_1867_:
{
lean_object* v_a_1870_; lean_object* v_fvarId_1871_; lean_object* v___x_1872_; lean_object* v___x_1873_; lean_object* v___x_1874_; lean_object* v___x_1876_; 
v_a_1870_ = lean_array_uget_borrowed(v_as_1847_, v_i_1849_);
v_fvarId_1871_ = lean_ctor_get(v_a_1870_, 0);
v___x_1872_ = lean_array_fget(v_array_1859_, v_start_1860_);
v___x_1873_ = lean_unsigned_to_nat(1u);
v___x_1874_ = lean_nat_add(v_start_1860_, v___x_1873_);
lean_dec(v_start_1860_);
if (v_isShared_1869_ == 0)
{
lean_ctor_set(v___x_1868_, 1, v___x_1874_);
v___x_1876_ = v___x_1868_;
goto v_reusejp_1875_;
}
else
{
lean_object* v_reuseFailAlloc_1884_; 
v_reuseFailAlloc_1884_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1884_, 0, v_array_1859_);
lean_ctor_set(v_reuseFailAlloc_1884_, 1, v___x_1874_);
lean_ctor_set(v_reuseFailAlloc_1884_, 2, v_stop_1861_);
v___x_1876_ = v_reuseFailAlloc_1884_;
goto v_reusejp_1875_;
}
v_reusejp_1875_:
{
lean_object* v___x_1877_; lean_object* v___x_1879_; 
lean_inc(v_fvarId_1871_);
v___x_1877_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_betaReduce_spec__0___redArg(v_fst_1855_, v_fvarId_1871_, v___x_1872_);
if (v_isShared_1858_ == 0)
{
lean_ctor_set(v___x_1857_, 1, v___x_1876_);
lean_ctor_set(v___x_1857_, 0, v___x_1877_);
v___x_1879_ = v___x_1857_;
goto v_reusejp_1878_;
}
else
{
lean_object* v_reuseFailAlloc_1883_; 
v_reuseFailAlloc_1883_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1883_, 0, v___x_1877_);
lean_ctor_set(v_reuseFailAlloc_1883_, 1, v___x_1876_);
v___x_1879_ = v_reuseFailAlloc_1883_;
goto v_reusejp_1878_;
}
v_reusejp_1878_:
{
size_t v___x_1880_; size_t v___x_1881_; 
v___x_1880_ = ((size_t)1ULL);
v___x_1881_ = lean_usize_add(v_i_1849_, v___x_1880_);
v_i_1849_ = v___x_1881_;
v_b_1850_ = v___x_1879_;
goto _start;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_Simp_betaReduce_spec__1___redArg___boxed(lean_object* v_as_1890_, lean_object* v_sz_1891_, lean_object* v_i_1892_, lean_object* v_b_1893_, lean_object* v___y_1894_){
_start:
{
size_t v_sz_boxed_1895_; size_t v_i_boxed_1896_; lean_object* v_res_1897_; 
v_sz_boxed_1895_ = lean_unbox_usize(v_sz_1891_);
lean_dec(v_sz_1891_);
v_i_boxed_1896_ = lean_unbox_usize(v_i_1892_);
lean_dec(v_i_1892_);
v_res_1897_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_Simp_betaReduce_spec__1___redArg(v_as_1890_, v_sz_boxed_1895_, v_i_boxed_1896_, v_b_1893_);
lean_dec_ref(v_as_1890_);
return v_res_1897_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_betaReduce(lean_object* v_params_1898_, lean_object* v_code_1899_, lean_object* v_args_1900_, uint8_t v_mustInline_1901_, lean_object* v___y_1902_, lean_object* v___y_1903_, lean_object* v___y_1904_, lean_object* v___y_1905_, lean_object* v___y_1906_, lean_object* v___y_1907_, lean_object* v___y_1908_){
_start:
{
lean_object* v___x_1910_; lean_object* v_subst_1911_; lean_object* v___x_1912_; lean_object* v___x_1913_; lean_object* v___x_1914_; size_t v_sz_1915_; size_t v___x_1916_; lean_object* v___x_1917_; 
v___x_1910_ = lean_unsigned_to_nat(0u);
v_subst_1911_ = lean_obj_once(&l_Lean_Compiler_LCNF_Simp_updateFunDeclInfo___redArg___closed__1, &l_Lean_Compiler_LCNF_Simp_updateFunDeclInfo___redArg___closed__1_once, _init_l_Lean_Compiler_LCNF_Simp_updateFunDeclInfo___redArg___closed__1);
v___x_1912_ = lean_array_get_size(v_args_1900_);
v___x_1913_ = l_Array_toSubarray___redArg(v_args_1900_, v___x_1910_, v___x_1912_);
v___x_1914_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1914_, 0, v_subst_1911_);
lean_ctor_set(v___x_1914_, 1, v___x_1913_);
v_sz_1915_ = lean_array_size(v_params_1898_);
v___x_1916_ = ((size_t)0ULL);
v___x_1917_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_Simp_betaReduce_spec__1___redArg(v_params_1898_, v_sz_1915_, v___x_1916_, v___x_1914_);
if (lean_obj_tag(v___x_1917_) == 0)
{
lean_object* v_a_1918_; lean_object* v_fst_1919_; uint8_t v___x_1920_; uint8_t v___x_1921_; lean_object* v___x_1922_; 
v_a_1918_ = lean_ctor_get(v___x_1917_, 0);
lean_inc(v_a_1918_);
lean_dec_ref_known(v___x_1917_, 1);
v_fst_1919_ = lean_ctor_get(v_a_1918_, 0);
lean_inc(v_fst_1919_);
lean_dec(v_a_1918_);
v___x_1920_ = 0;
v___x_1921_ = 0;
v___x_1922_ = l_Lean_Compiler_LCNF_Code_internalize(v___x_1920_, v_code_1899_, v_fst_1919_, v___x_1921_, v___y_1905_, v___y_1906_, v___y_1907_, v___y_1908_);
if (lean_obj_tag(v___x_1922_) == 0)
{
lean_object* v_a_1923_; lean_object* v___x_1924_; 
v_a_1923_ = lean_ctor_get(v___x_1922_, 0);
lean_inc_n(v_a_1923_, 2);
lean_dec_ref_known(v___x_1922_, 1);
v___x_1924_ = l_Lean_Compiler_LCNF_Simp_updateFunDeclInfo___redArg(v_a_1923_, v_mustInline_1901_, v___y_1903_, v___y_1905_, v___y_1906_, v___y_1907_, v___y_1908_);
if (lean_obj_tag(v___x_1924_) == 0)
{
lean_object* v___x_1926_; uint8_t v_isShared_1927_; uint8_t v_isSharedCheck_1931_; 
v_isSharedCheck_1931_ = !lean_is_exclusive(v___x_1924_);
if (v_isSharedCheck_1931_ == 0)
{
lean_object* v_unused_1932_; 
v_unused_1932_ = lean_ctor_get(v___x_1924_, 0);
lean_dec(v_unused_1932_);
v___x_1926_ = v___x_1924_;
v_isShared_1927_ = v_isSharedCheck_1931_;
goto v_resetjp_1925_;
}
else
{
lean_dec(v___x_1924_);
v___x_1926_ = lean_box(0);
v_isShared_1927_ = v_isSharedCheck_1931_;
goto v_resetjp_1925_;
}
v_resetjp_1925_:
{
lean_object* v___x_1929_; 
if (v_isShared_1927_ == 0)
{
lean_ctor_set(v___x_1926_, 0, v_a_1923_);
v___x_1929_ = v___x_1926_;
goto v_reusejp_1928_;
}
else
{
lean_object* v_reuseFailAlloc_1930_; 
v_reuseFailAlloc_1930_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1930_, 0, v_a_1923_);
v___x_1929_ = v_reuseFailAlloc_1930_;
goto v_reusejp_1928_;
}
v_reusejp_1928_:
{
return v___x_1929_;
}
}
}
else
{
lean_object* v_a_1933_; lean_object* v___x_1935_; uint8_t v_isShared_1936_; uint8_t v_isSharedCheck_1940_; 
lean_dec(v_a_1923_);
v_a_1933_ = lean_ctor_get(v___x_1924_, 0);
v_isSharedCheck_1940_ = !lean_is_exclusive(v___x_1924_);
if (v_isSharedCheck_1940_ == 0)
{
v___x_1935_ = v___x_1924_;
v_isShared_1936_ = v_isSharedCheck_1940_;
goto v_resetjp_1934_;
}
else
{
lean_inc(v_a_1933_);
lean_dec(v___x_1924_);
v___x_1935_ = lean_box(0);
v_isShared_1936_ = v_isSharedCheck_1940_;
goto v_resetjp_1934_;
}
v_resetjp_1934_:
{
lean_object* v___x_1938_; 
if (v_isShared_1936_ == 0)
{
v___x_1938_ = v___x_1935_;
goto v_reusejp_1937_;
}
else
{
lean_object* v_reuseFailAlloc_1939_; 
v_reuseFailAlloc_1939_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1939_, 0, v_a_1933_);
v___x_1938_ = v_reuseFailAlloc_1939_;
goto v_reusejp_1937_;
}
v_reusejp_1937_:
{
return v___x_1938_;
}
}
}
}
else
{
return v___x_1922_;
}
}
else
{
lean_object* v_a_1941_; lean_object* v___x_1943_; uint8_t v_isShared_1944_; uint8_t v_isSharedCheck_1948_; 
lean_dec_ref(v_code_1899_);
v_a_1941_ = lean_ctor_get(v___x_1917_, 0);
v_isSharedCheck_1948_ = !lean_is_exclusive(v___x_1917_);
if (v_isSharedCheck_1948_ == 0)
{
v___x_1943_ = v___x_1917_;
v_isShared_1944_ = v_isSharedCheck_1948_;
goto v_resetjp_1942_;
}
else
{
lean_inc(v_a_1941_);
lean_dec(v___x_1917_);
v___x_1943_ = lean_box(0);
v_isShared_1944_ = v_isSharedCheck_1948_;
goto v_resetjp_1942_;
}
v_resetjp_1942_:
{
lean_object* v___x_1946_; 
if (v_isShared_1944_ == 0)
{
v___x_1946_ = v___x_1943_;
goto v_reusejp_1945_;
}
else
{
lean_object* v_reuseFailAlloc_1947_; 
v_reuseFailAlloc_1947_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1947_, 0, v_a_1941_);
v___x_1946_ = v_reuseFailAlloc_1947_;
goto v_reusejp_1945_;
}
v_reusejp_1945_:
{
return v___x_1946_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_betaReduce___boxed(lean_object* v_params_1949_, lean_object* v_code_1950_, lean_object* v_args_1951_, lean_object* v_mustInline_1952_, lean_object* v___y_1953_, lean_object* v___y_1954_, lean_object* v___y_1955_, lean_object* v___y_1956_, lean_object* v___y_1957_, lean_object* v___y_1958_, lean_object* v___y_1959_, lean_object* v___y_1960_){
_start:
{
uint8_t v_mustInline_boxed_1961_; lean_object* v_res_1962_; 
v_mustInline_boxed_1961_ = lean_unbox(v_mustInline_1952_);
v_res_1962_ = l_Lean_Compiler_LCNF_Simp_betaReduce(v_params_1949_, v_code_1950_, v_args_1951_, v_mustInline_boxed_1961_, v___y_1953_, v___y_1954_, v___y_1955_, v___y_1956_, v___y_1957_, v___y_1958_, v___y_1959_);
lean_dec(v___y_1959_);
lean_dec_ref(v___y_1958_);
lean_dec(v___y_1957_);
lean_dec_ref(v___y_1956_);
lean_dec_ref(v___y_1955_);
lean_dec(v___y_1954_);
lean_dec_ref(v___y_1953_);
lean_dec_ref(v_params_1949_);
return v_res_1962_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_betaReduce_spec__0(lean_object* v_00_u03b2_1963_, lean_object* v_m_1964_, lean_object* v_a_1965_, lean_object* v_b_1966_){
_start:
{
lean_object* v___x_1967_; 
v___x_1967_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_betaReduce_spec__0___redArg(v_m_1964_, v_a_1965_, v_b_1966_);
return v___x_1967_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_Simp_betaReduce_spec__1(lean_object* v_as_1968_, size_t v_sz_1969_, size_t v_i_1970_, lean_object* v_b_1971_, lean_object* v___y_1972_, lean_object* v___y_1973_, lean_object* v___y_1974_, lean_object* v___y_1975_, lean_object* v___y_1976_, lean_object* v___y_1977_, lean_object* v___y_1978_){
_start:
{
lean_object* v___x_1980_; 
v___x_1980_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_Simp_betaReduce_spec__1___redArg(v_as_1968_, v_sz_1969_, v_i_1970_, v_b_1971_);
return v___x_1980_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_Simp_betaReduce_spec__1___boxed(lean_object* v_as_1981_, lean_object* v_sz_1982_, lean_object* v_i_1983_, lean_object* v_b_1984_, lean_object* v___y_1985_, lean_object* v___y_1986_, lean_object* v___y_1987_, lean_object* v___y_1988_, lean_object* v___y_1989_, lean_object* v___y_1990_, lean_object* v___y_1991_, lean_object* v___y_1992_){
_start:
{
size_t v_sz_boxed_1993_; size_t v_i_boxed_1994_; lean_object* v_res_1995_; 
v_sz_boxed_1993_ = lean_unbox_usize(v_sz_1982_);
lean_dec(v_sz_1982_);
v_i_boxed_1994_ = lean_unbox_usize(v_i_1983_);
lean_dec(v_i_1983_);
v_res_1995_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_Simp_betaReduce_spec__1(v_as_1981_, v_sz_boxed_1993_, v_i_boxed_1994_, v_b_1984_, v___y_1985_, v___y_1986_, v___y_1987_, v___y_1988_, v___y_1989_, v___y_1990_, v___y_1991_);
lean_dec(v___y_1991_);
lean_dec_ref(v___y_1990_);
lean_dec(v___y_1989_);
lean_dec_ref(v___y_1988_);
lean_dec_ref(v___y_1987_);
lean_dec(v___y_1986_);
lean_dec_ref(v___y_1985_);
lean_dec_ref(v_as_1981_);
return v_res_1995_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_betaReduce_spec__0_spec__0(lean_object* v_00_u03b2_1996_, lean_object* v_a_1997_, lean_object* v_x_1998_){
_start:
{
uint8_t v___x_1999_; 
v___x_1999_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_betaReduce_spec__0_spec__0___redArg(v_a_1997_, v_x_1998_);
return v___x_1999_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_betaReduce_spec__0_spec__0___boxed(lean_object* v_00_u03b2_2000_, lean_object* v_a_2001_, lean_object* v_x_2002_){
_start:
{
uint8_t v_res_2003_; lean_object* v_r_2004_; 
v_res_2003_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_betaReduce_spec__0_spec__0(v_00_u03b2_2000_, v_a_2001_, v_x_2002_);
lean_dec(v_x_2002_);
lean_dec(v_a_2001_);
v_r_2004_ = lean_box(v_res_2003_);
return v_r_2004_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_betaReduce_spec__0_spec__1(lean_object* v_00_u03b2_2005_, lean_object* v_data_2006_){
_start:
{
lean_object* v___x_2007_; 
v___x_2007_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_betaReduce_spec__0_spec__1___redArg(v_data_2006_);
return v___x_2007_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_betaReduce_spec__0_spec__2(lean_object* v_00_u03b2_2008_, lean_object* v_a_2009_, lean_object* v_b_2010_, lean_object* v_x_2011_){
_start:
{
lean_object* v___x_2012_; 
v___x_2012_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_betaReduce_spec__0_spec__2___redArg(v_a_2009_, v_b_2010_, v_x_2011_);
return v___x_2012_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_betaReduce_spec__0_spec__1_spec__2(lean_object* v_00_u03b2_2013_, lean_object* v_i_2014_, lean_object* v_source_2015_, lean_object* v_target_2016_){
_start:
{
lean_object* v___x_2017_; 
v___x_2017_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_betaReduce_spec__0_spec__1_spec__2___redArg(v_i_2014_, v_source_2015_, v_target_2016_);
return v___x_2017_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_betaReduce_spec__0_spec__1_spec__2_spec__4(lean_object* v_00_u03b2_2018_, lean_object* v_x_2019_, lean_object* v_x_2020_){
_start:
{
lean_object* v___x_2021_; 
v___x_2021_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_betaReduce_spec__0_spec__1_spec__2_spec__4___redArg(v_x_2019_, v_x_2020_);
return v___x_2021_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_eraseLetDecl___redArg(lean_object* v_decl_2022_, lean_object* v___y_2023_, lean_object* v___y_2024_){
_start:
{
uint8_t v___x_2026_; lean_object* v___x_2027_; 
v___x_2026_ = 0;
v___x_2027_ = l_Lean_Compiler_LCNF_eraseLetDecl___redArg(v___x_2026_, v_decl_2022_, v___y_2024_);
if (lean_obj_tag(v___x_2027_) == 0)
{
lean_object* v___x_2028_; 
lean_dec_ref_known(v___x_2027_, 1);
v___x_2028_ = l_Lean_Compiler_LCNF_Simp_markSimplified___redArg(v___y_2023_);
return v___x_2028_;
}
else
{
return v___x_2027_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_eraseLetDecl___redArg___boxed(lean_object* v_decl_2029_, lean_object* v___y_2030_, lean_object* v___y_2031_, lean_object* v___y_2032_){
_start:
{
lean_object* v_res_2033_; 
v_res_2033_ = l_Lean_Compiler_LCNF_Simp_eraseLetDecl___redArg(v_decl_2029_, v___y_2030_, v___y_2031_);
lean_dec(v___y_2031_);
lean_dec(v___y_2030_);
lean_dec_ref(v_decl_2029_);
return v_res_2033_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_eraseLetDecl(lean_object* v_decl_2034_, lean_object* v___y_2035_, lean_object* v___y_2036_, lean_object* v___y_2037_, lean_object* v___y_2038_, lean_object* v___y_2039_, lean_object* v___y_2040_, lean_object* v___y_2041_){
_start:
{
lean_object* v___x_2043_; 
v___x_2043_ = l_Lean_Compiler_LCNF_Simp_eraseLetDecl___redArg(v_decl_2034_, v___y_2036_, v___y_2039_);
return v___x_2043_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_eraseLetDecl___boxed(lean_object* v_decl_2044_, lean_object* v___y_2045_, lean_object* v___y_2046_, lean_object* v___y_2047_, lean_object* v___y_2048_, lean_object* v___y_2049_, lean_object* v___y_2050_, lean_object* v___y_2051_, lean_object* v___y_2052_){
_start:
{
lean_object* v_res_2053_; 
v_res_2053_ = l_Lean_Compiler_LCNF_Simp_eraseLetDecl(v_decl_2044_, v___y_2045_, v___y_2046_, v___y_2047_, v___y_2048_, v___y_2049_, v___y_2050_, v___y_2051_);
lean_dec(v___y_2051_);
lean_dec_ref(v___y_2050_);
lean_dec(v___y_2049_);
lean_dec_ref(v___y_2048_);
lean_dec_ref(v___y_2047_);
lean_dec(v___y_2046_);
lean_dec_ref(v___y_2045_);
lean_dec_ref(v_decl_2044_);
return v_res_2053_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_eraseFunDecl___redArg(lean_object* v_decl_2054_, lean_object* v___y_2055_, lean_object* v___y_2056_){
_start:
{
uint8_t v___x_2058_; uint8_t v___x_2059_; lean_object* v___x_2060_; 
v___x_2058_ = 0;
v___x_2059_ = 1;
v___x_2060_ = l_Lean_Compiler_LCNF_eraseFunDecl___redArg(v___x_2058_, v_decl_2054_, v___x_2059_, v___y_2056_);
if (lean_obj_tag(v___x_2060_) == 0)
{
lean_object* v___x_2061_; 
lean_dec_ref_known(v___x_2060_, 1);
v___x_2061_ = l_Lean_Compiler_LCNF_Simp_markSimplified___redArg(v___y_2055_);
return v___x_2061_;
}
else
{
return v___x_2060_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_eraseFunDecl___redArg___boxed(lean_object* v_decl_2062_, lean_object* v___y_2063_, lean_object* v___y_2064_, lean_object* v___y_2065_){
_start:
{
lean_object* v_res_2066_; 
v_res_2066_ = l_Lean_Compiler_LCNF_Simp_eraseFunDecl___redArg(v_decl_2062_, v___y_2063_, v___y_2064_);
lean_dec(v___y_2064_);
lean_dec(v___y_2063_);
lean_dec_ref(v_decl_2062_);
return v_res_2066_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_eraseFunDecl(lean_object* v_decl_2067_, lean_object* v___y_2068_, lean_object* v___y_2069_, lean_object* v___y_2070_, lean_object* v___y_2071_, lean_object* v___y_2072_, lean_object* v___y_2073_, lean_object* v___y_2074_){
_start:
{
lean_object* v___x_2076_; 
v___x_2076_ = l_Lean_Compiler_LCNF_Simp_eraseFunDecl___redArg(v_decl_2067_, v___y_2069_, v___y_2072_);
return v___x_2076_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_eraseFunDecl___boxed(lean_object* v_decl_2077_, lean_object* v___y_2078_, lean_object* v___y_2079_, lean_object* v___y_2080_, lean_object* v___y_2081_, lean_object* v___y_2082_, lean_object* v___y_2083_, lean_object* v___y_2084_, lean_object* v___y_2085_){
_start:
{
lean_object* v_res_2086_; 
v_res_2086_ = l_Lean_Compiler_LCNF_Simp_eraseFunDecl(v_decl_2077_, v___y_2078_, v___y_2079_, v___y_2080_, v___y_2081_, v___y_2082_, v___y_2083_, v___y_2084_);
lean_dec(v___y_2084_);
lean_dec_ref(v___y_2083_);
lean_dec(v___y_2082_);
lean_dec_ref(v___y_2081_);
lean_dec_ref(v___y_2080_);
lean_dec(v___y_2079_);
lean_dec_ref(v___y_2078_);
lean_dec_ref(v_decl_2077_);
return v_res_2086_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_addFVarSubst___redArg(lean_object* v_fvarId_2087_, lean_object* v_fvarId_x27_2088_, lean_object* v___y_2089_, lean_object* v___y_2090_, lean_object* v___y_2091_, lean_object* v___y_2092_, lean_object* v___y_2093_){
_start:
{
lean_object* v___x_2095_; lean_object* v_subst_2096_; lean_object* v_used_2097_; lean_object* v_binderRenaming_2098_; lean_object* v_funDeclInfoMap_2099_; uint8_t v_simplified_2100_; lean_object* v_visited_2101_; lean_object* v_inline_2102_; lean_object* v_inlineLocal_2103_; lean_object* v___x_2105_; uint8_t v_isShared_2106_; uint8_t v_isSharedCheck_2173_; 
v___x_2095_ = lean_st_ref_take(v___y_2089_);
v_subst_2096_ = lean_ctor_get(v___x_2095_, 0);
v_used_2097_ = lean_ctor_get(v___x_2095_, 1);
v_binderRenaming_2098_ = lean_ctor_get(v___x_2095_, 2);
v_funDeclInfoMap_2099_ = lean_ctor_get(v___x_2095_, 3);
v_simplified_2100_ = lean_ctor_get_uint8(v___x_2095_, sizeof(void*)*7);
v_visited_2101_ = lean_ctor_get(v___x_2095_, 4);
v_inline_2102_ = lean_ctor_get(v___x_2095_, 5);
v_inlineLocal_2103_ = lean_ctor_get(v___x_2095_, 6);
v_isSharedCheck_2173_ = !lean_is_exclusive(v___x_2095_);
if (v_isSharedCheck_2173_ == 0)
{
v___x_2105_ = v___x_2095_;
v_isShared_2106_ = v_isSharedCheck_2173_;
goto v_resetjp_2104_;
}
else
{
lean_inc(v_inlineLocal_2103_);
lean_inc(v_inline_2102_);
lean_inc(v_visited_2101_);
lean_inc(v_funDeclInfoMap_2099_);
lean_inc(v_binderRenaming_2098_);
lean_inc(v_used_2097_);
lean_inc(v_subst_2096_);
lean_dec(v___x_2095_);
v___x_2105_ = lean_box(0);
v_isShared_2106_ = v_isSharedCheck_2173_;
goto v_resetjp_2104_;
}
v_resetjp_2104_:
{
lean_object* v___x_2107_; lean_object* v___x_2108_; lean_object* v___x_2110_; 
lean_inc(v_fvarId_x27_2088_);
v___x_2107_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2107_, 0, v_fvarId_x27_2088_);
lean_inc(v_fvarId_2087_);
v___x_2108_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_Simp_betaReduce_spec__0___redArg(v_subst_2096_, v_fvarId_2087_, v___x_2107_);
if (v_isShared_2106_ == 0)
{
lean_ctor_set(v___x_2105_, 0, v___x_2108_);
v___x_2110_ = v___x_2105_;
goto v_reusejp_2109_;
}
else
{
lean_object* v_reuseFailAlloc_2172_; 
v_reuseFailAlloc_2172_ = lean_alloc_ctor(0, 7, 1);
lean_ctor_set(v_reuseFailAlloc_2172_, 0, v___x_2108_);
lean_ctor_set(v_reuseFailAlloc_2172_, 1, v_used_2097_);
lean_ctor_set(v_reuseFailAlloc_2172_, 2, v_binderRenaming_2098_);
lean_ctor_set(v_reuseFailAlloc_2172_, 3, v_funDeclInfoMap_2099_);
lean_ctor_set(v_reuseFailAlloc_2172_, 4, v_visited_2101_);
lean_ctor_set(v_reuseFailAlloc_2172_, 5, v_inline_2102_);
lean_ctor_set(v_reuseFailAlloc_2172_, 6, v_inlineLocal_2103_);
lean_ctor_set_uint8(v_reuseFailAlloc_2172_, sizeof(void*)*7, v_simplified_2100_);
v___x_2110_ = v_reuseFailAlloc_2172_;
goto v_reusejp_2109_;
}
v_reusejp_2109_:
{
lean_object* v___x_2111_; lean_object* v___x_2112_; 
v___x_2111_ = lean_st_ref_put(v___y_2089_, v___x_2110_);
v___x_2112_ = l_Lean_Compiler_LCNF_getBinderName(v_fvarId_2087_, v___y_2090_, v___y_2091_, v___y_2092_, v___y_2093_);
if (lean_obj_tag(v___x_2112_) == 0)
{
lean_object* v_a_2113_; lean_object* v___x_2115_; uint8_t v_isShared_2116_; uint8_t v_isSharedCheck_2163_; 
v_a_2113_ = lean_ctor_get(v___x_2112_, 0);
v_isSharedCheck_2163_ = !lean_is_exclusive(v___x_2112_);
if (v_isSharedCheck_2163_ == 0)
{
v___x_2115_ = v___x_2112_;
v_isShared_2116_ = v_isSharedCheck_2163_;
goto v_resetjp_2114_;
}
else
{
lean_inc(v_a_2113_);
lean_dec(v___x_2112_);
v___x_2115_ = lean_box(0);
v_isShared_2116_ = v_isSharedCheck_2163_;
goto v_resetjp_2114_;
}
v_resetjp_2114_:
{
uint8_t v___x_2117_; 
v___x_2117_ = l_Lean_Name_isInternal(v_a_2113_);
if (v___x_2117_ == 0)
{
lean_object* v___x_2118_; 
lean_del_object(v___x_2115_);
lean_inc(v_fvarId_x27_2088_);
v___x_2118_ = l_Lean_Compiler_LCNF_getBinderName(v_fvarId_x27_2088_, v___y_2090_, v___y_2091_, v___y_2092_, v___y_2093_);
if (lean_obj_tag(v___x_2118_) == 0)
{
lean_object* v_a_2119_; lean_object* v___x_2121_; uint8_t v_isShared_2122_; uint8_t v_isSharedCheck_2150_; 
v_a_2119_ = lean_ctor_get(v___x_2118_, 0);
v_isSharedCheck_2150_ = !lean_is_exclusive(v___x_2118_);
if (v_isSharedCheck_2150_ == 0)
{
v___x_2121_ = v___x_2118_;
v_isShared_2122_ = v_isSharedCheck_2150_;
goto v_resetjp_2120_;
}
else
{
lean_inc(v_a_2119_);
lean_dec(v___x_2118_);
v___x_2121_ = lean_box(0);
v_isShared_2122_ = v_isSharedCheck_2150_;
goto v_resetjp_2120_;
}
v_resetjp_2120_:
{
uint8_t v___x_2123_; 
v___x_2123_ = l_Lean_Name_isInternal(v_a_2119_);
lean_dec(v_a_2119_);
if (v___x_2123_ == 0)
{
lean_object* v___x_2124_; lean_object* v___x_2126_; 
lean_dec(v_a_2113_);
lean_dec(v_fvarId_x27_2088_);
v___x_2124_ = lean_box(0);
if (v_isShared_2122_ == 0)
{
lean_ctor_set(v___x_2121_, 0, v___x_2124_);
v___x_2126_ = v___x_2121_;
goto v_reusejp_2125_;
}
else
{
lean_object* v_reuseFailAlloc_2127_; 
v_reuseFailAlloc_2127_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2127_, 0, v___x_2124_);
v___x_2126_ = v_reuseFailAlloc_2127_;
goto v_reusejp_2125_;
}
v_reusejp_2125_:
{
return v___x_2126_;
}
}
else
{
lean_object* v___x_2128_; lean_object* v_subst_2129_; lean_object* v_used_2130_; lean_object* v_binderRenaming_2131_; lean_object* v_funDeclInfoMap_2132_; uint8_t v_simplified_2133_; lean_object* v_visited_2134_; lean_object* v_inline_2135_; lean_object* v_inlineLocal_2136_; lean_object* v___x_2138_; uint8_t v_isShared_2139_; uint8_t v_isSharedCheck_2149_; 
v___x_2128_ = lean_st_ref_take(v___y_2089_);
v_subst_2129_ = lean_ctor_get(v___x_2128_, 0);
v_used_2130_ = lean_ctor_get(v___x_2128_, 1);
v_binderRenaming_2131_ = lean_ctor_get(v___x_2128_, 2);
v_funDeclInfoMap_2132_ = lean_ctor_get(v___x_2128_, 3);
v_simplified_2133_ = lean_ctor_get_uint8(v___x_2128_, sizeof(void*)*7);
v_visited_2134_ = lean_ctor_get(v___x_2128_, 4);
v_inline_2135_ = lean_ctor_get(v___x_2128_, 5);
v_inlineLocal_2136_ = lean_ctor_get(v___x_2128_, 6);
v_isSharedCheck_2149_ = !lean_is_exclusive(v___x_2128_);
if (v_isSharedCheck_2149_ == 0)
{
v___x_2138_ = v___x_2128_;
v_isShared_2139_ = v_isSharedCheck_2149_;
goto v_resetjp_2137_;
}
else
{
lean_inc(v_inlineLocal_2136_);
lean_inc(v_inline_2135_);
lean_inc(v_visited_2134_);
lean_inc(v_funDeclInfoMap_2132_);
lean_inc(v_binderRenaming_2131_);
lean_inc(v_used_2130_);
lean_inc(v_subst_2129_);
lean_dec(v___x_2128_);
v___x_2138_ = lean_box(0);
v_isShared_2139_ = v_isSharedCheck_2149_;
goto v_resetjp_2137_;
}
v_resetjp_2137_:
{
lean_object* v___x_2140_; lean_object* v___x_2141_; lean_object* v___x_2143_; 
v___x_2140_ = lean_box(0);
v___x_2141_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_FVarIdSet_insert_spec__1___redArg(v_fvarId_x27_2088_, v_a_2113_, v_binderRenaming_2131_);
if (v_isShared_2139_ == 0)
{
lean_ctor_set(v___x_2138_, 2, v___x_2141_);
v___x_2143_ = v___x_2138_;
goto v_reusejp_2142_;
}
else
{
lean_object* v_reuseFailAlloc_2148_; 
v_reuseFailAlloc_2148_ = lean_alloc_ctor(0, 7, 1);
lean_ctor_set(v_reuseFailAlloc_2148_, 0, v_subst_2129_);
lean_ctor_set(v_reuseFailAlloc_2148_, 1, v_used_2130_);
lean_ctor_set(v_reuseFailAlloc_2148_, 2, v___x_2141_);
lean_ctor_set(v_reuseFailAlloc_2148_, 3, v_funDeclInfoMap_2132_);
lean_ctor_set(v_reuseFailAlloc_2148_, 4, v_visited_2134_);
lean_ctor_set(v_reuseFailAlloc_2148_, 5, v_inline_2135_);
lean_ctor_set(v_reuseFailAlloc_2148_, 6, v_inlineLocal_2136_);
lean_ctor_set_uint8(v_reuseFailAlloc_2148_, sizeof(void*)*7, v_simplified_2133_);
v___x_2143_ = v_reuseFailAlloc_2148_;
goto v_reusejp_2142_;
}
v_reusejp_2142_:
{
lean_object* v___x_2144_; lean_object* v___x_2146_; 
v___x_2144_ = lean_st_ref_put(v___y_2089_, v___x_2143_);
if (v_isShared_2122_ == 0)
{
lean_ctor_set(v___x_2121_, 0, v___x_2140_);
v___x_2146_ = v___x_2121_;
goto v_reusejp_2145_;
}
else
{
lean_object* v_reuseFailAlloc_2147_; 
v_reuseFailAlloc_2147_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2147_, 0, v___x_2140_);
v___x_2146_ = v_reuseFailAlloc_2147_;
goto v_reusejp_2145_;
}
v_reusejp_2145_:
{
return v___x_2146_;
}
}
}
}
}
}
else
{
lean_object* v_a_2151_; lean_object* v___x_2153_; uint8_t v_isShared_2154_; uint8_t v_isSharedCheck_2158_; 
lean_dec(v_a_2113_);
lean_dec(v_fvarId_x27_2088_);
v_a_2151_ = lean_ctor_get(v___x_2118_, 0);
v_isSharedCheck_2158_ = !lean_is_exclusive(v___x_2118_);
if (v_isSharedCheck_2158_ == 0)
{
v___x_2153_ = v___x_2118_;
v_isShared_2154_ = v_isSharedCheck_2158_;
goto v_resetjp_2152_;
}
else
{
lean_inc(v_a_2151_);
lean_dec(v___x_2118_);
v___x_2153_ = lean_box(0);
v_isShared_2154_ = v_isSharedCheck_2158_;
goto v_resetjp_2152_;
}
v_resetjp_2152_:
{
lean_object* v___x_2156_; 
if (v_isShared_2154_ == 0)
{
v___x_2156_ = v___x_2153_;
goto v_reusejp_2155_;
}
else
{
lean_object* v_reuseFailAlloc_2157_; 
v_reuseFailAlloc_2157_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2157_, 0, v_a_2151_);
v___x_2156_ = v_reuseFailAlloc_2157_;
goto v_reusejp_2155_;
}
v_reusejp_2155_:
{
return v___x_2156_;
}
}
}
}
else
{
lean_object* v___x_2159_; lean_object* v___x_2161_; 
lean_dec(v_a_2113_);
lean_dec(v_fvarId_x27_2088_);
v___x_2159_ = lean_box(0);
if (v_isShared_2116_ == 0)
{
lean_ctor_set(v___x_2115_, 0, v___x_2159_);
v___x_2161_ = v___x_2115_;
goto v_reusejp_2160_;
}
else
{
lean_object* v_reuseFailAlloc_2162_; 
v_reuseFailAlloc_2162_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2162_, 0, v___x_2159_);
v___x_2161_ = v_reuseFailAlloc_2162_;
goto v_reusejp_2160_;
}
v_reusejp_2160_:
{
return v___x_2161_;
}
}
}
}
else
{
lean_object* v_a_2164_; lean_object* v___x_2166_; uint8_t v_isShared_2167_; uint8_t v_isSharedCheck_2171_; 
lean_dec(v_fvarId_x27_2088_);
v_a_2164_ = lean_ctor_get(v___x_2112_, 0);
v_isSharedCheck_2171_ = !lean_is_exclusive(v___x_2112_);
if (v_isSharedCheck_2171_ == 0)
{
v___x_2166_ = v___x_2112_;
v_isShared_2167_ = v_isSharedCheck_2171_;
goto v_resetjp_2165_;
}
else
{
lean_inc(v_a_2164_);
lean_dec(v___x_2112_);
v___x_2166_ = lean_box(0);
v_isShared_2167_ = v_isSharedCheck_2171_;
goto v_resetjp_2165_;
}
v_resetjp_2165_:
{
lean_object* v___x_2169_; 
if (v_isShared_2167_ == 0)
{
v___x_2169_ = v___x_2166_;
goto v_reusejp_2168_;
}
else
{
lean_object* v_reuseFailAlloc_2170_; 
v_reuseFailAlloc_2170_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2170_, 0, v_a_2164_);
v___x_2169_ = v_reuseFailAlloc_2170_;
goto v_reusejp_2168_;
}
v_reusejp_2168_:
{
return v___x_2169_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_addFVarSubst___redArg___boxed(lean_object* v_fvarId_2174_, lean_object* v_fvarId_x27_2175_, lean_object* v___y_2176_, lean_object* v___y_2177_, lean_object* v___y_2178_, lean_object* v___y_2179_, lean_object* v___y_2180_, lean_object* v___y_2181_){
_start:
{
lean_object* v_res_2182_; 
v_res_2182_ = l_Lean_Compiler_LCNF_Simp_addFVarSubst___redArg(v_fvarId_2174_, v_fvarId_x27_2175_, v___y_2176_, v___y_2177_, v___y_2178_, v___y_2179_, v___y_2180_);
lean_dec(v___y_2180_);
lean_dec_ref(v___y_2179_);
lean_dec(v___y_2178_);
lean_dec_ref(v___y_2177_);
lean_dec(v___y_2176_);
return v_res_2182_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_addFVarSubst(lean_object* v_fvarId_2183_, lean_object* v_fvarId_x27_2184_, lean_object* v___y_2185_, lean_object* v___y_2186_, lean_object* v___y_2187_, lean_object* v___y_2188_, lean_object* v___y_2189_, lean_object* v___y_2190_, lean_object* v___y_2191_){
_start:
{
lean_object* v___x_2193_; 
v___x_2193_ = l_Lean_Compiler_LCNF_Simp_addFVarSubst___redArg(v_fvarId_2183_, v_fvarId_x27_2184_, v___y_2186_, v___y_2188_, v___y_2189_, v___y_2190_, v___y_2191_);
return v___x_2193_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_addFVarSubst___boxed(lean_object* v_fvarId_2194_, lean_object* v_fvarId_x27_2195_, lean_object* v___y_2196_, lean_object* v___y_2197_, lean_object* v___y_2198_, lean_object* v___y_2199_, lean_object* v___y_2200_, lean_object* v___y_2201_, lean_object* v___y_2202_, lean_object* v___y_2203_){
_start:
{
lean_object* v_res_2204_; 
v_res_2204_ = l_Lean_Compiler_LCNF_Simp_addFVarSubst(v_fvarId_2194_, v_fvarId_x27_2195_, v___y_2196_, v___y_2197_, v___y_2198_, v___y_2199_, v___y_2200_, v___y_2201_, v___y_2202_);
lean_dec(v___y_2202_);
lean_dec_ref(v___y_2201_);
lean_dec(v___y_2200_);
lean_dec_ref(v___y_2199_);
lean_dec_ref(v___y_2198_);
lean_dec(v___y_2197_);
lean_dec_ref(v___y_2196_);
return v_res_2204_;
}
}
lean_object* runtime_initialize_Lean_Compiler_ImplementedByAttr(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_LCNF_Renaming(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_LCNF_ElimDead(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_LCNF_AlphaEqv(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_LCNF_PrettyPrinter(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_LCNF_Simp_JpCases(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_LCNF_Simp_FunDeclInfo(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_LCNF_Simp_Config(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Compiler_LCNF_Simp_SimpM(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Compiler_ImplementedByAttr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_LCNF_Renaming(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_LCNF_ElimDead(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_LCNF_AlphaEqv(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_LCNF_PrettyPrinter(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_LCNF_Simp_JpCases(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_LCNF_Simp_FunDeclInfo(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_LCNF_Simp_Config(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Compiler_LCNF_Simp_instMonadSimpM = _init_l_Lean_Compiler_LCNF_Simp_instMonadSimpM();
lean_mark_persistent(l_Lean_Compiler_LCNF_Simp_instMonadSimpM);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Compiler_LCNF_Simp_SimpM(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Compiler_ImplementedByAttr(uint8_t builtin);
lean_object* initialize_Lean_Compiler_LCNF_Renaming(uint8_t builtin);
lean_object* initialize_Lean_Compiler_LCNF_ElimDead(uint8_t builtin);
lean_object* initialize_Lean_Compiler_LCNF_AlphaEqv(uint8_t builtin);
lean_object* initialize_Lean_Compiler_LCNF_PrettyPrinter(uint8_t builtin);
lean_object* initialize_Lean_Compiler_LCNF_Simp_JpCases(uint8_t builtin);
lean_object* initialize_Lean_Compiler_LCNF_Simp_FunDeclInfo(uint8_t builtin);
lean_object* initialize_Lean_Compiler_LCNF_Simp_Config(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Compiler_LCNF_Simp_SimpM(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Compiler_ImplementedByAttr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_LCNF_Renaming(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_LCNF_ElimDead(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_LCNF_AlphaEqv(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_LCNF_PrettyPrinter(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_LCNF_Simp_JpCases(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_LCNF_Simp_FunDeclInfo(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_LCNF_Simp_Config(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_LCNF_Simp_SimpM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Compiler_LCNF_Simp_SimpM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Compiler_LCNF_Simp_SimpM(builtin);
}
#ifdef __cplusplus
}
#endif
