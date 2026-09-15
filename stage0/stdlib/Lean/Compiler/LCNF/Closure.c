// Lean compiler output
// Module: Lean.Compiler.LCNF.Closure
// Imports: public import Lean.Util.ForEachExprWhere public import Lean.Compiler.LCNF.CompilerM
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
lean_object* lean_st_ref_get(lean_object*);
uint8_t l_Lean_FVarIdHashSet_contains(lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* l_Lean_FVarIdHashSet_insert(lean_object*, lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_findFunDecl_x3f___redArg(uint8_t, lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasFVar(lean_object*);
lean_object* l_Lean_Expr_fvarId_x21(lean_object*);
lean_object* l_Lean_Expr_isFVar___boxed(lean_object*);
extern lean_object* l_Lean_ForEachExprWhere_initCache;
lean_object* lean_st_mk_ref(lean_object*);
size_t lean_ptr_addr(lean_object*);
size_t lean_usize_mod(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint64_t l_Lean_Expr_hash(lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
uint8_t lean_expr_eqv(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_array_propagate_mark(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_findParam_x3f___redArg(uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_findLetDecl_x3f___redArg(uint8_t, lean_object*, lean_object*);
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
lean_object* l_instInhabitedOfMonad___redArg(lean_object*, lean_object*);
lean_object* l_instInhabitedReaderT___redArg(lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* l_Lean_FVarIdSet_insert(lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_CodeDecl_fvarId___redArg(lean_object*);
uint8_t l_Lean_FVarIdSet_contains(lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Closure_markVisited___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Closure_markVisited___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Closure_markVisited(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Closure_markVisited___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4_spec__10_spec__13_spec__14___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4_spec__10_spec__13_spec__14___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4_spec__10_spec__13___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4_spec__10_spec__13___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4_spec__10_spec__14_spec__16_spec__17_spec__18___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4_spec__10_spec__14_spec__16_spec__17___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4_spec__10_spec__14_spec__16___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4_spec__10_spec__14___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4_spec__10___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4_spec__10___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ForEachExprWhere_visited___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4_spec__9___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ForEachExprWhere_visited___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4_spec__9___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_panic___at___00Lean_Compiler_LCNF_Closure_collectFVar_spec__4___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Compiler_LCNF_Closure_collectFVar_spec__4___closed__0 = (const lean_object*)&l_panic___at___00Lean_Compiler_LCNF_Closure_collectFVar_spec__4___closed__0_value;
static const lean_closure_object l_panic___at___00Lean_Compiler_LCNF_Closure_collectFVar_spec__4___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__1___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Compiler_LCNF_Closure_collectFVar_spec__4___closed__1 = (const lean_object*)&l_panic___at___00Lean_Compiler_LCNF_Closure_collectFVar_spec__4___closed__1_value;
static const lean_closure_object l_panic___at___00Lean_Compiler_LCNF_Closure_collectFVar_spec__4___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__2___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Compiler_LCNF_Closure_collectFVar_spec__4___closed__2 = (const lean_object*)&l_panic___at___00Lean_Compiler_LCNF_Closure_collectFVar_spec__4___closed__2_value;
static const lean_closure_object l_panic___at___00Lean_Compiler_LCNF_Closure_collectFVar_spec__4___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__3___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Compiler_LCNF_Closure_collectFVar_spec__4___closed__3 = (const lean_object*)&l_panic___at___00Lean_Compiler_LCNF_Closure_collectFVar_spec__4___closed__3_value;
static const lean_closure_object l_panic___at___00Lean_Compiler_LCNF_Closure_collectFVar_spec__4___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__4___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Compiler_LCNF_Closure_collectFVar_spec__4___closed__4 = (const lean_object*)&l_panic___at___00Lean_Compiler_LCNF_Closure_collectFVar_spec__4___closed__4_value;
static const lean_closure_object l_panic___at___00Lean_Compiler_LCNF_Closure_collectFVar_spec__4___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__10___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Compiler_LCNF_Closure_collectFVar_spec__4___closed__5 = (const lean_object*)&l_panic___at___00Lean_Compiler_LCNF_Closure_collectFVar_spec__4___closed__5_value;
static const lean_closure_object l_panic___at___00Lean_Compiler_LCNF_Closure_collectFVar_spec__4___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Compiler_LCNF_Closure_collectFVar_spec__4___closed__6 = (const lean_object*)&l_panic___at___00Lean_Compiler_LCNF_Closure_collectFVar_spec__4___closed__6_value;
static const lean_closure_object l_panic___at___00Lean_Compiler_LCNF_Closure_collectFVar_spec__4___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__1___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Compiler_LCNF_Closure_collectFVar_spec__4___closed__7 = (const lean_object*)&l_panic___at___00Lean_Compiler_LCNF_Closure_collectFVar_spec__4___closed__7_value;
static const lean_closure_object l_panic___at___00Lean_Compiler_LCNF_Closure_collectFVar_spec__4___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Compiler_LCNF_instMonadCompilerM___lam__0___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Compiler_LCNF_Closure_collectFVar_spec__4___closed__8 = (const lean_object*)&l_panic___at___00Lean_Compiler_LCNF_Closure_collectFVar_spec__4___closed__8_value;
static const lean_closure_object l_panic___at___00Lean_Compiler_LCNF_Closure_collectFVar_spec__4___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Compiler_LCNF_instMonadCompilerM___lam__1___boxed, .m_arity = 9, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Compiler_LCNF_Closure_collectFVar_spec__4___closed__9 = (const lean_object*)&l_panic___at___00Lean_Compiler_LCNF_Closure_collectFVar_spec__4___closed__9_value;
LEAN_EXPORT lean_object* l_panic___at___00Lean_Compiler_LCNF_Closure_collectFVar_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Compiler_LCNF_Closure_collectFVar_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Closure_collectType___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Compiler_LCNF_Closure_collectType___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Expr_isFVar___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_Closure_collectType___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_Closure_collectType___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Closure_collectType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Closure_collectParams_spec__0(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Closure_collectParams(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Closure_collectArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Closure_collectLetValue_spec__6(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Closure_collectLetValue(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Closure_collectCode_spec__10(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Closure_collectCode(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Closure_collectFunDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Compiler_LCNF_Closure_collectFVar___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "unreachable code has been reached"};
static const lean_object* l_Lean_Compiler_LCNF_Closure_collectFVar___closed__2 = (const lean_object*)&l_Lean_Compiler_LCNF_Closure_collectFVar___closed__2_value;
static const lean_string_object l_Lean_Compiler_LCNF_Closure_collectFVar___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 39, .m_capacity = 39, .m_length = 38, .m_data = "Lean.Compiler.LCNF.Closure.collectFVar"};
static const lean_object* l_Lean_Compiler_LCNF_Closure_collectFVar___closed__1 = (const lean_object*)&l_Lean_Compiler_LCNF_Closure_collectFVar___closed__1_value;
static const lean_string_object l_Lean_Compiler_LCNF_Closure_collectFVar___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "Lean.Compiler.LCNF.Closure"};
static const lean_object* l_Lean_Compiler_LCNF_Closure_collectFVar___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_Closure_collectFVar___closed__0_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_Closure_collectFVar___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_Closure_collectFVar___closed__3;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Closure_collectFVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Closure_collectType___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Closure_collectArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Closure_collectType___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Closure_collectFunDecl___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Closure_collectLetValue_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Closure_collectParams_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Closure_collectParams___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Closure_collectCode_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Closure_collectLetValue___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Closure_collectCode___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Closure_collectFVar___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ForEachExprWhere_visited___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4_spec__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ForEachExprWhere_visited___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4_spec__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4_spec__10_spec__13(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4_spec__10_spec__13___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4_spec__10_spec__14(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4_spec__10_spec__13_spec__14(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4_spec__10_spec__13_spec__14___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4_spec__10_spec__14_spec__16(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4_spec__10_spec__14_spec__16_spec__17(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4_spec__10_spec__14_spec__16_spec__17_spec__18(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Closure_run_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Closure_run_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_Closure_run_spec__0___redArg(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_Closure_run_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Compiler_LCNF_Closure_run___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_Closure_run___redArg___closed__0;
static lean_once_cell_t l_Lean_Compiler_LCNF_Closure_run___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_Closure_run___redArg___closed__1;
static const lean_array_object l_Lean_Compiler_LCNF_Closure_run___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Compiler_LCNF_Closure_run___redArg___closed__2 = (const lean_object*)&l_Lean_Compiler_LCNF_Closure_run___redArg___closed__2_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_Closure_run___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_Closure_run___redArg___closed__3;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Closure_run___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Closure_run___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Closure_run(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Closure_run___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_Closure_run_spec__0(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_Closure_run_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Closure_markVisited___redArg(lean_object* v_fvarId_1_, lean_object* v___y_2_){
_start:
{
lean_object* v___x_4_; lean_object* v_visited_5_; lean_object* v_params_6_; lean_object* v_decls_7_; lean_object* v___x_9_; uint8_t v_isShared_10_; uint8_t v_isSharedCheck_18_; 
v___x_4_ = lean_st_ref_take(v___y_2_);
v_visited_5_ = lean_ctor_get(v___x_4_, 0);
v_params_6_ = lean_ctor_get(v___x_4_, 1);
v_decls_7_ = lean_ctor_get(v___x_4_, 2);
v_isSharedCheck_18_ = !lean_is_exclusive(v___x_4_);
if (v_isSharedCheck_18_ == 0)
{
v___x_9_ = v___x_4_;
v_isShared_10_ = v_isSharedCheck_18_;
goto v_resetjp_8_;
}
else
{
lean_inc(v_decls_7_);
lean_inc(v_params_6_);
lean_inc(v_visited_5_);
lean_dec(v___x_4_);
v___x_9_ = lean_box(0);
v_isShared_10_ = v_isSharedCheck_18_;
goto v_resetjp_8_;
}
v_resetjp_8_:
{
lean_object* v___x_11_; lean_object* v___x_12_; lean_object* v___x_14_; 
v___x_11_ = lean_box(0);
v___x_12_ = l_Lean_FVarIdHashSet_insert(v_visited_5_, v_fvarId_1_);
if (v_isShared_10_ == 0)
{
lean_ctor_set(v___x_9_, 0, v___x_12_);
v___x_14_ = v___x_9_;
goto v_reusejp_13_;
}
else
{
lean_object* v_reuseFailAlloc_17_; 
v_reuseFailAlloc_17_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_17_, 0, v___x_12_);
lean_ctor_set(v_reuseFailAlloc_17_, 1, v_params_6_);
lean_ctor_set(v_reuseFailAlloc_17_, 2, v_decls_7_);
v___x_14_ = v_reuseFailAlloc_17_;
goto v_reusejp_13_;
}
v_reusejp_13_:
{
lean_object* v___x_15_; lean_object* v___x_16_; 
v___x_15_ = lean_st_ref_put(v___y_2_, v___x_14_);
v___x_16_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_16_, 0, v___x_11_);
return v___x_16_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Closure_markVisited___redArg___boxed(lean_object* v_fvarId_19_, lean_object* v___y_20_, lean_object* v___y_21_){
_start:
{
lean_object* v_res_22_; 
v_res_22_ = l_Lean_Compiler_LCNF_Closure_markVisited___redArg(v_fvarId_19_, v___y_20_);
lean_dec(v___y_20_);
return v_res_22_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Closure_markVisited(lean_object* v_fvarId_23_, lean_object* v___y_24_, lean_object* v___y_25_, lean_object* v___y_26_, lean_object* v___y_27_, lean_object* v___y_28_, lean_object* v___y_29_){
_start:
{
lean_object* v___x_31_; 
v___x_31_ = l_Lean_Compiler_LCNF_Closure_markVisited___redArg(v_fvarId_23_, v___y_25_);
return v___x_31_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Closure_markVisited___boxed(lean_object* v_fvarId_32_, lean_object* v___y_33_, lean_object* v___y_34_, lean_object* v___y_35_, lean_object* v___y_36_, lean_object* v___y_37_, lean_object* v___y_38_, lean_object* v___y_39_){
_start:
{
lean_object* v_res_40_; 
v_res_40_ = l_Lean_Compiler_LCNF_Closure_markVisited(v_fvarId_32_, v___y_33_, v___y_34_, v___y_35_, v___y_36_, v___y_37_, v___y_38_);
lean_dec(v___y_38_);
lean_dec_ref(v___y_37_);
lean_dec(v___y_36_);
lean_dec_ref(v___y_35_);
lean_dec(v___y_34_);
lean_dec_ref(v___y_33_);
return v_res_40_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4_spec__10_spec__13_spec__14___redArg(lean_object* v_a_41_, lean_object* v_x_42_){
_start:
{
if (lean_obj_tag(v_x_42_) == 0)
{
uint8_t v___x_43_; 
v___x_43_ = 0;
return v___x_43_;
}
else
{
lean_object* v_key_44_; lean_object* v_tail_45_; uint8_t v___x_46_; 
v_key_44_ = lean_ctor_get(v_x_42_, 0);
v_tail_45_ = lean_ctor_get(v_x_42_, 2);
v___x_46_ = lean_expr_eqv(v_key_44_, v_a_41_);
if (v___x_46_ == 0)
{
v_x_42_ = v_tail_45_;
goto _start;
}
else
{
return v___x_46_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4_spec__10_spec__13_spec__14___redArg___boxed(lean_object* v_a_48_, lean_object* v_x_49_){
_start:
{
uint8_t v_res_50_; lean_object* v_r_51_; 
v_res_50_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4_spec__10_spec__13_spec__14___redArg(v_a_48_, v_x_49_);
lean_dec(v_x_49_);
lean_dec_ref(v_a_48_);
v_r_51_ = lean_box(v_res_50_);
return v_r_51_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4_spec__10_spec__13___redArg(lean_object* v_m_52_, lean_object* v_a_53_){
_start:
{
lean_object* v_buckets_54_; lean_object* v___x_55_; uint64_t v___x_56_; uint64_t v___x_57_; uint64_t v___x_58_; uint64_t v_fold_59_; uint64_t v___x_60_; uint64_t v___x_61_; uint64_t v___x_62_; size_t v___x_63_; size_t v___x_64_; size_t v___x_65_; size_t v___x_66_; size_t v___x_67_; lean_object* v___x_68_; uint8_t v___x_69_; 
v_buckets_54_ = lean_ctor_get(v_m_52_, 1);
v___x_55_ = lean_array_get_size(v_buckets_54_);
v___x_56_ = l_Lean_Expr_hash(v_a_53_);
v___x_57_ = 32ULL;
v___x_58_ = lean_uint64_shift_right(v___x_56_, v___x_57_);
v_fold_59_ = lean_uint64_xor(v___x_56_, v___x_58_);
v___x_60_ = 16ULL;
v___x_61_ = lean_uint64_shift_right(v_fold_59_, v___x_60_);
v___x_62_ = lean_uint64_xor(v_fold_59_, v___x_61_);
v___x_63_ = lean_uint64_to_usize(v___x_62_);
v___x_64_ = lean_usize_of_nat(v___x_55_);
v___x_65_ = ((size_t)1ULL);
v___x_66_ = lean_usize_sub(v___x_64_, v___x_65_);
v___x_67_ = lean_usize_land(v___x_63_, v___x_66_);
v___x_68_ = lean_array_uget_borrowed(v_buckets_54_, v___x_67_);
v___x_69_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4_spec__10_spec__13_spec__14___redArg(v_a_53_, v___x_68_);
return v___x_69_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4_spec__10_spec__13___redArg___boxed(lean_object* v_m_70_, lean_object* v_a_71_){
_start:
{
uint8_t v_res_72_; lean_object* v_r_73_; 
v_res_72_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4_spec__10_spec__13___redArg(v_m_70_, v_a_71_);
lean_dec_ref(v_a_71_);
lean_dec_ref(v_m_70_);
v_r_73_ = lean_box(v_res_72_);
return v_r_73_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4_spec__10_spec__14_spec__16_spec__17_spec__18___redArg(lean_object* v_x_74_, lean_object* v_x_75_){
_start:
{
if (lean_obj_tag(v_x_75_) == 0)
{
return v_x_74_;
}
else
{
lean_object* v_key_76_; lean_object* v_value_77_; lean_object* v_tail_78_; lean_object* v___x_80_; uint8_t v_isShared_81_; uint8_t v_isSharedCheck_101_; 
v_key_76_ = lean_ctor_get(v_x_75_, 0);
v_value_77_ = lean_ctor_get(v_x_75_, 1);
v_tail_78_ = lean_ctor_get(v_x_75_, 2);
v_isSharedCheck_101_ = !lean_is_exclusive(v_x_75_);
if (v_isSharedCheck_101_ == 0)
{
v___x_80_ = v_x_75_;
v_isShared_81_ = v_isSharedCheck_101_;
goto v_resetjp_79_;
}
else
{
lean_inc(v_tail_78_);
lean_inc(v_value_77_);
lean_inc(v_key_76_);
lean_dec(v_x_75_);
v___x_80_ = lean_box(0);
v_isShared_81_ = v_isSharedCheck_101_;
goto v_resetjp_79_;
}
v_resetjp_79_:
{
lean_object* v___x_82_; uint64_t v___x_83_; uint64_t v___x_84_; uint64_t v___x_85_; uint64_t v_fold_86_; uint64_t v___x_87_; uint64_t v___x_88_; uint64_t v___x_89_; size_t v___x_90_; size_t v___x_91_; size_t v___x_92_; size_t v___x_93_; size_t v___x_94_; lean_object* v___x_95_; lean_object* v___x_97_; 
v___x_82_ = lean_array_get_size(v_x_74_);
v___x_83_ = l_Lean_Expr_hash(v_key_76_);
v___x_84_ = 32ULL;
v___x_85_ = lean_uint64_shift_right(v___x_83_, v___x_84_);
v_fold_86_ = lean_uint64_xor(v___x_83_, v___x_85_);
v___x_87_ = 16ULL;
v___x_88_ = lean_uint64_shift_right(v_fold_86_, v___x_87_);
v___x_89_ = lean_uint64_xor(v_fold_86_, v___x_88_);
v___x_90_ = lean_uint64_to_usize(v___x_89_);
v___x_91_ = lean_usize_of_nat(v___x_82_);
v___x_92_ = ((size_t)1ULL);
v___x_93_ = lean_usize_sub(v___x_91_, v___x_92_);
v___x_94_ = lean_usize_land(v___x_90_, v___x_93_);
v___x_95_ = lean_array_uget_borrowed(v_x_74_, v___x_94_);
lean_inc(v___x_95_);
if (v_isShared_81_ == 0)
{
lean_ctor_set(v___x_80_, 2, v___x_95_);
v___x_97_ = v___x_80_;
goto v_reusejp_96_;
}
else
{
lean_object* v_reuseFailAlloc_100_; 
v_reuseFailAlloc_100_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_100_, 0, v_key_76_);
lean_ctor_set(v_reuseFailAlloc_100_, 1, v_value_77_);
lean_ctor_set(v_reuseFailAlloc_100_, 2, v___x_95_);
v___x_97_ = v_reuseFailAlloc_100_;
goto v_reusejp_96_;
}
v_reusejp_96_:
{
lean_object* v___x_98_; 
v___x_98_ = lean_array_uset(v_x_74_, v___x_94_, v___x_97_);
v_x_74_ = v___x_98_;
v_x_75_ = v_tail_78_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4_spec__10_spec__14_spec__16_spec__17___redArg(lean_object* v_i_102_, lean_object* v_source_103_, lean_object* v_target_104_){
_start:
{
lean_object* v___x_105_; uint8_t v___x_106_; 
v___x_105_ = lean_array_get_size(v_source_103_);
v___x_106_ = lean_nat_dec_lt(v_i_102_, v___x_105_);
if (v___x_106_ == 0)
{
lean_dec_ref(v_source_103_);
lean_dec(v_i_102_);
return v_target_104_;
}
else
{
lean_object* v_es_107_; lean_object* v___x_108_; lean_object* v_source_109_; lean_object* v_target_110_; lean_object* v___x_111_; lean_object* v___x_112_; 
v_es_107_ = lean_array_fget(v_source_103_, v_i_102_);
v___x_108_ = lean_box(0);
v_source_109_ = lean_array_fset(v_source_103_, v_i_102_, v___x_108_);
v_target_110_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4_spec__10_spec__14_spec__16_spec__17_spec__18___redArg(v_target_104_, v_es_107_);
v___x_111_ = lean_unsigned_to_nat(1u);
v___x_112_ = lean_nat_add(v_i_102_, v___x_111_);
lean_dec(v_i_102_);
v_i_102_ = v___x_112_;
v_source_103_ = v_source_109_;
v_target_104_ = v_target_110_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4_spec__10_spec__14_spec__16___redArg(lean_object* v_data_114_){
_start:
{
lean_object* v___x_115_; lean_object* v___x_116_; lean_object* v_nbuckets_117_; lean_object* v___x_118_; lean_object* v___x_119_; lean_object* v___x_120_; lean_object* v___x_121_; lean_object* v___x_122_; 
v___x_115_ = lean_array_get_size(v_data_114_);
v___x_116_ = lean_unsigned_to_nat(2u);
v_nbuckets_117_ = lean_nat_mul(v___x_115_, v___x_116_);
v___x_118_ = lean_unsigned_to_nat(0u);
v___x_119_ = lean_box(0);
v___x_120_ = lean_mk_array(v_nbuckets_117_, v___x_119_);
v___x_121_ = lean_array_propagate_mark(v_data_114_, v___x_120_);
v___x_122_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4_spec__10_spec__14_spec__16_spec__17___redArg(v___x_118_, v_data_114_, v___x_121_);
return v___x_122_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4_spec__10_spec__14___redArg(lean_object* v_m_123_, lean_object* v_a_124_, lean_object* v_b_125_){
_start:
{
lean_object* v_size_126_; lean_object* v_buckets_127_; lean_object* v___x_128_; uint64_t v___x_129_; uint64_t v___x_130_; uint64_t v___x_131_; uint64_t v_fold_132_; uint64_t v___x_133_; uint64_t v___x_134_; uint64_t v___x_135_; size_t v___x_136_; size_t v___x_137_; size_t v___x_138_; size_t v___x_139_; size_t v___x_140_; lean_object* v_bkt_141_; uint8_t v___x_142_; 
v_size_126_ = lean_ctor_get(v_m_123_, 0);
v_buckets_127_ = lean_ctor_get(v_m_123_, 1);
v___x_128_ = lean_array_get_size(v_buckets_127_);
v___x_129_ = l_Lean_Expr_hash(v_a_124_);
v___x_130_ = 32ULL;
v___x_131_ = lean_uint64_shift_right(v___x_129_, v___x_130_);
v_fold_132_ = lean_uint64_xor(v___x_129_, v___x_131_);
v___x_133_ = 16ULL;
v___x_134_ = lean_uint64_shift_right(v_fold_132_, v___x_133_);
v___x_135_ = lean_uint64_xor(v_fold_132_, v___x_134_);
v___x_136_ = lean_uint64_to_usize(v___x_135_);
v___x_137_ = lean_usize_of_nat(v___x_128_);
v___x_138_ = ((size_t)1ULL);
v___x_139_ = lean_usize_sub(v___x_137_, v___x_138_);
v___x_140_ = lean_usize_land(v___x_136_, v___x_139_);
v_bkt_141_ = lean_array_uget_borrowed(v_buckets_127_, v___x_140_);
v___x_142_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4_spec__10_spec__13_spec__14___redArg(v_a_124_, v_bkt_141_);
if (v___x_142_ == 0)
{
lean_object* v___x_144_; uint8_t v_isShared_145_; uint8_t v_isSharedCheck_163_; 
lean_inc_ref(v_buckets_127_);
lean_inc(v_size_126_);
v_isSharedCheck_163_ = !lean_is_exclusive(v_m_123_);
if (v_isSharedCheck_163_ == 0)
{
lean_object* v_unused_164_; lean_object* v_unused_165_; 
v_unused_164_ = lean_ctor_get(v_m_123_, 1);
lean_dec(v_unused_164_);
v_unused_165_ = lean_ctor_get(v_m_123_, 0);
lean_dec(v_unused_165_);
v___x_144_ = v_m_123_;
v_isShared_145_ = v_isSharedCheck_163_;
goto v_resetjp_143_;
}
else
{
lean_dec(v_m_123_);
v___x_144_ = lean_box(0);
v_isShared_145_ = v_isSharedCheck_163_;
goto v_resetjp_143_;
}
v_resetjp_143_:
{
lean_object* v___x_146_; lean_object* v_size_x27_147_; lean_object* v___x_148_; lean_object* v_buckets_x27_149_; lean_object* v___x_150_; lean_object* v___x_151_; lean_object* v___x_152_; lean_object* v___x_153_; lean_object* v___x_154_; uint8_t v___x_155_; 
v___x_146_ = lean_unsigned_to_nat(1u);
v_size_x27_147_ = lean_nat_add(v_size_126_, v___x_146_);
lean_dec(v_size_126_);
lean_inc(v_bkt_141_);
v___x_148_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_148_, 0, v_a_124_);
lean_ctor_set(v___x_148_, 1, v_b_125_);
lean_ctor_set(v___x_148_, 2, v_bkt_141_);
v_buckets_x27_149_ = lean_array_uset(v_buckets_127_, v___x_140_, v___x_148_);
v___x_150_ = lean_unsigned_to_nat(4u);
v___x_151_ = lean_nat_mul(v_size_x27_147_, v___x_150_);
v___x_152_ = lean_unsigned_to_nat(3u);
v___x_153_ = lean_nat_div(v___x_151_, v___x_152_);
lean_dec(v___x_151_);
v___x_154_ = lean_array_get_size(v_buckets_x27_149_);
v___x_155_ = lean_nat_dec_le(v___x_153_, v___x_154_);
lean_dec(v___x_153_);
if (v___x_155_ == 0)
{
lean_object* v_val_156_; lean_object* v___x_158_; 
v_val_156_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4_spec__10_spec__14_spec__16___redArg(v_buckets_x27_149_);
if (v_isShared_145_ == 0)
{
lean_ctor_set(v___x_144_, 1, v_val_156_);
lean_ctor_set(v___x_144_, 0, v_size_x27_147_);
v___x_158_ = v___x_144_;
goto v_reusejp_157_;
}
else
{
lean_object* v_reuseFailAlloc_159_; 
v_reuseFailAlloc_159_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_159_, 0, v_size_x27_147_);
lean_ctor_set(v_reuseFailAlloc_159_, 1, v_val_156_);
v___x_158_ = v_reuseFailAlloc_159_;
goto v_reusejp_157_;
}
v_reusejp_157_:
{
return v___x_158_;
}
}
else
{
lean_object* v___x_161_; 
if (v_isShared_145_ == 0)
{
lean_ctor_set(v___x_144_, 1, v_buckets_x27_149_);
lean_ctor_set(v___x_144_, 0, v_size_x27_147_);
v___x_161_ = v___x_144_;
goto v_reusejp_160_;
}
else
{
lean_object* v_reuseFailAlloc_162_; 
v_reuseFailAlloc_162_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_162_, 0, v_size_x27_147_);
lean_ctor_set(v_reuseFailAlloc_162_, 1, v_buckets_x27_149_);
v___x_161_ = v_reuseFailAlloc_162_;
goto v_reusejp_160_;
}
v_reusejp_160_:
{
return v___x_161_;
}
}
}
}
else
{
lean_dec(v_b_125_);
lean_dec_ref(v_a_124_);
return v_m_123_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4_spec__10___redArg(lean_object* v_e_166_, lean_object* v___y_167_){
_start:
{
lean_object* v___x_169_; lean_object* v_checked_170_; uint8_t v___x_171_; 
v___x_169_ = lean_st_ref_get(v___y_167_);
v_checked_170_ = lean_ctor_get(v___x_169_, 1);
lean_inc_ref(v_checked_170_);
lean_dec(v___x_169_);
v___x_171_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4_spec__10_spec__13___redArg(v_checked_170_, v_e_166_);
lean_dec_ref(v_checked_170_);
if (v___x_171_ == 0)
{
lean_object* v___x_172_; lean_object* v_visited_173_; lean_object* v_checked_174_; lean_object* v___x_176_; uint8_t v_isShared_177_; uint8_t v_isSharedCheck_186_; 
v___x_172_ = lean_st_ref_take(v___y_167_);
v_visited_173_ = lean_ctor_get(v___x_172_, 0);
v_checked_174_ = lean_ctor_get(v___x_172_, 1);
v_isSharedCheck_186_ = !lean_is_exclusive(v___x_172_);
if (v_isSharedCheck_186_ == 0)
{
v___x_176_ = v___x_172_;
v_isShared_177_ = v_isSharedCheck_186_;
goto v_resetjp_175_;
}
else
{
lean_inc(v_checked_174_);
lean_inc(v_visited_173_);
lean_dec(v___x_172_);
v___x_176_ = lean_box(0);
v_isShared_177_ = v_isSharedCheck_186_;
goto v_resetjp_175_;
}
v_resetjp_175_:
{
lean_object* v___x_178_; lean_object* v___x_179_; lean_object* v___x_181_; 
v___x_178_ = lean_box(0);
v___x_179_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4_spec__10_spec__14___redArg(v_checked_174_, v_e_166_, v___x_178_);
if (v_isShared_177_ == 0)
{
lean_ctor_set(v___x_176_, 1, v___x_179_);
v___x_181_ = v___x_176_;
goto v_reusejp_180_;
}
else
{
lean_object* v_reuseFailAlloc_185_; 
v_reuseFailAlloc_185_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_185_, 0, v_visited_173_);
lean_ctor_set(v_reuseFailAlloc_185_, 1, v___x_179_);
v___x_181_ = v_reuseFailAlloc_185_;
goto v_reusejp_180_;
}
v_reusejp_180_:
{
lean_object* v___x_182_; lean_object* v___x_183_; lean_object* v___x_184_; 
v___x_182_ = lean_st_ref_put(v___y_167_, v___x_181_);
v___x_183_ = lean_box(v___x_171_);
v___x_184_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_184_, 0, v___x_183_);
return v___x_184_;
}
}
}
else
{
lean_object* v___x_187_; lean_object* v___x_188_; 
lean_dec_ref(v_e_166_);
v___x_187_ = lean_box(v___x_171_);
v___x_188_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_188_, 0, v___x_187_);
return v___x_188_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4_spec__10___redArg___boxed(lean_object* v_e_189_, lean_object* v___y_190_, lean_object* v___y_191_){
_start:
{
lean_object* v_res_192_; 
v_res_192_ = l_Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4_spec__10___redArg(v_e_189_, v___y_190_);
lean_dec(v___y_190_);
return v_res_192_;
}
}
LEAN_EXPORT lean_object* l_Lean_ForEachExprWhere_visited___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4_spec__9___redArg(lean_object* v_e_193_, lean_object* v___y_194_){
_start:
{
lean_object* v___x_196_; lean_object* v_visited_197_; size_t v___x_198_; size_t v___x_199_; size_t v___x_200_; lean_object* v___x_201_; size_t v___x_202_; uint8_t v___x_203_; 
v___x_196_ = lean_st_ref_get(v___y_194_);
v_visited_197_ = lean_ctor_get(v___x_196_, 0);
lean_inc_ref(v_visited_197_);
lean_dec(v___x_196_);
v___x_198_ = lean_ptr_addr(v_e_193_);
v___x_199_ = ((size_t)8191ULL);
v___x_200_ = lean_usize_mod(v___x_198_, v___x_199_);
v___x_201_ = lean_array_uget(v_visited_197_, v___x_200_);
lean_dec_ref(v_visited_197_);
v___x_202_ = lean_ptr_addr(v___x_201_);
lean_dec(v___x_201_);
v___x_203_ = lean_usize_dec_eq(v___x_202_, v___x_198_);
if (v___x_203_ == 0)
{
lean_object* v___x_204_; lean_object* v_visited_205_; lean_object* v_checked_206_; lean_object* v___x_208_; uint8_t v_isShared_209_; uint8_t v_isSharedCheck_217_; 
v___x_204_ = lean_st_ref_take(v___y_194_);
v_visited_205_ = lean_ctor_get(v___x_204_, 0);
v_checked_206_ = lean_ctor_get(v___x_204_, 1);
v_isSharedCheck_217_ = !lean_is_exclusive(v___x_204_);
if (v_isSharedCheck_217_ == 0)
{
v___x_208_ = v___x_204_;
v_isShared_209_ = v_isSharedCheck_217_;
goto v_resetjp_207_;
}
else
{
lean_inc(v_checked_206_);
lean_inc(v_visited_205_);
lean_dec(v___x_204_);
v___x_208_ = lean_box(0);
v_isShared_209_ = v_isSharedCheck_217_;
goto v_resetjp_207_;
}
v_resetjp_207_:
{
lean_object* v___x_210_; lean_object* v___x_212_; 
v___x_210_ = lean_array_uset(v_visited_205_, v___x_200_, v_e_193_);
if (v_isShared_209_ == 0)
{
lean_ctor_set(v___x_208_, 0, v___x_210_);
v___x_212_ = v___x_208_;
goto v_reusejp_211_;
}
else
{
lean_object* v_reuseFailAlloc_216_; 
v_reuseFailAlloc_216_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_216_, 0, v___x_210_);
lean_ctor_set(v_reuseFailAlloc_216_, 1, v_checked_206_);
v___x_212_ = v_reuseFailAlloc_216_;
goto v_reusejp_211_;
}
v_reusejp_211_:
{
lean_object* v___x_213_; lean_object* v___x_214_; lean_object* v___x_215_; 
v___x_213_ = lean_st_ref_put(v___y_194_, v___x_212_);
v___x_214_ = lean_box(v___x_203_);
v___x_215_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_215_, 0, v___x_214_);
return v___x_215_;
}
}
}
else
{
lean_object* v___x_218_; lean_object* v___x_219_; 
lean_dec_ref(v_e_193_);
v___x_218_ = lean_box(v___x_203_);
v___x_219_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_219_, 0, v___x_218_);
return v___x_219_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_ForEachExprWhere_visited___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4_spec__9___redArg___boxed(lean_object* v_e_220_, lean_object* v___y_221_, lean_object* v___y_222_){
_start:
{
lean_object* v_res_223_; 
v_res_223_ = l_Lean_ForEachExprWhere_visited___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4_spec__9___redArg(v_e_220_, v___y_221_);
lean_dec(v___y_221_);
return v_res_223_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4(lean_object* v_p_224_, lean_object* v_f_225_, uint8_t v_stopWhenVisited_226_, lean_object* v_e_227_, lean_object* v___y_228_, lean_object* v___y_229_, lean_object* v___y_230_, lean_object* v___y_231_, lean_object* v___y_232_, lean_object* v___y_233_, lean_object* v___y_234_){
_start:
{
lean_object* v___y_237_; lean_object* v___y_238_; lean_object* v___y_239_; lean_object* v___y_240_; lean_object* v___y_241_; lean_object* v___y_242_; lean_object* v_d_243_; lean_object* v_b_244_; lean_object* v___y_245_; lean_object* v___y_249_; lean_object* v___y_250_; lean_object* v___y_251_; lean_object* v___y_252_; lean_object* v___y_253_; lean_object* v___y_254_; lean_object* v___y_255_; lean_object* v___x_276_; 
lean_inc_ref(v_e_227_);
v___x_276_ = l_Lean_ForEachExprWhere_visited___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4_spec__9___redArg(v_e_227_, v___y_228_);
if (lean_obj_tag(v___x_276_) == 0)
{
lean_object* v_a_277_; lean_object* v___x_279_; uint8_t v_isShared_280_; uint8_t v_isSharedCheck_309_; 
v_a_277_ = lean_ctor_get(v___x_276_, 0);
v_isSharedCheck_309_ = !lean_is_exclusive(v___x_276_);
if (v_isSharedCheck_309_ == 0)
{
v___x_279_ = v___x_276_;
v_isShared_280_ = v_isSharedCheck_309_;
goto v_resetjp_278_;
}
else
{
lean_inc(v_a_277_);
lean_dec(v___x_276_);
v___x_279_ = lean_box(0);
v_isShared_280_ = v_isSharedCheck_309_;
goto v_resetjp_278_;
}
v_resetjp_278_:
{
uint8_t v___x_281_; 
v___x_281_ = lean_unbox(v_a_277_);
lean_dec(v_a_277_);
if (v___x_281_ == 0)
{
lean_object* v___x_282_; uint8_t v___x_283_; 
lean_del_object(v___x_279_);
lean_inc_ref(v_p_224_);
lean_inc_ref(v_e_227_);
v___x_282_ = lean_apply_1(v_p_224_, v_e_227_);
v___x_283_ = lean_unbox(v___x_282_);
if (v___x_283_ == 0)
{
v___y_249_ = v___y_228_;
v___y_250_ = v___y_229_;
v___y_251_ = v___y_230_;
v___y_252_ = v___y_231_;
v___y_253_ = v___y_232_;
v___y_254_ = v___y_233_;
v___y_255_ = v___y_234_;
goto v___jp_248_;
}
else
{
lean_object* v___x_284_; 
lean_inc_ref(v_e_227_);
v___x_284_ = l_Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4_spec__10___redArg(v_e_227_, v___y_228_);
if (lean_obj_tag(v___x_284_) == 0)
{
lean_object* v_a_285_; uint8_t v___x_286_; 
v_a_285_ = lean_ctor_get(v___x_284_, 0);
lean_inc(v_a_285_);
lean_dec_ref_known(v___x_284_, 1);
v___x_286_ = lean_unbox(v_a_285_);
lean_dec(v_a_285_);
if (v___x_286_ == 0)
{
lean_object* v___x_287_; 
lean_inc_ref(v_f_225_);
lean_inc(v___y_234_);
lean_inc_ref(v___y_233_);
lean_inc(v___y_232_);
lean_inc_ref(v___y_231_);
lean_inc(v___y_230_);
lean_inc_ref(v___y_229_);
lean_inc_ref(v_e_227_);
v___x_287_ = lean_apply_8(v_f_225_, v_e_227_, v___y_229_, v___y_230_, v___y_231_, v___y_232_, v___y_233_, v___y_234_, lean_box(0));
if (lean_obj_tag(v___x_287_) == 0)
{
lean_object* v___x_289_; uint8_t v_isShared_290_; uint8_t v_isSharedCheck_295_; 
v_isSharedCheck_295_ = !lean_is_exclusive(v___x_287_);
if (v_isSharedCheck_295_ == 0)
{
lean_object* v_unused_296_; 
v_unused_296_ = lean_ctor_get(v___x_287_, 0);
lean_dec(v_unused_296_);
v___x_289_ = v___x_287_;
v_isShared_290_ = v_isSharedCheck_295_;
goto v_resetjp_288_;
}
else
{
lean_dec(v___x_287_);
v___x_289_ = lean_box(0);
v_isShared_290_ = v_isSharedCheck_295_;
goto v_resetjp_288_;
}
v_resetjp_288_:
{
if (v_stopWhenVisited_226_ == 0)
{
lean_del_object(v___x_289_);
v___y_249_ = v___y_228_;
v___y_250_ = v___y_229_;
v___y_251_ = v___y_230_;
v___y_252_ = v___y_231_;
v___y_253_ = v___y_232_;
v___y_254_ = v___y_233_;
v___y_255_ = v___y_234_;
goto v___jp_248_;
}
else
{
lean_object* v___x_291_; lean_object* v___x_293_; 
lean_dec_ref(v_e_227_);
lean_dec_ref(v_f_225_);
lean_dec_ref(v_p_224_);
v___x_291_ = lean_box(0);
if (v_isShared_290_ == 0)
{
lean_ctor_set(v___x_289_, 0, v___x_291_);
v___x_293_ = v___x_289_;
goto v_reusejp_292_;
}
else
{
lean_object* v_reuseFailAlloc_294_; 
v_reuseFailAlloc_294_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_294_, 0, v___x_291_);
v___x_293_ = v_reuseFailAlloc_294_;
goto v_reusejp_292_;
}
v_reusejp_292_:
{
return v___x_293_;
}
}
}
}
else
{
lean_dec_ref(v_e_227_);
lean_dec_ref(v_f_225_);
lean_dec_ref(v_p_224_);
return v___x_287_;
}
}
else
{
v___y_249_ = v___y_228_;
v___y_250_ = v___y_229_;
v___y_251_ = v___y_230_;
v___y_252_ = v___y_231_;
v___y_253_ = v___y_232_;
v___y_254_ = v___y_233_;
v___y_255_ = v___y_234_;
goto v___jp_248_;
}
}
else
{
lean_object* v_a_297_; lean_object* v___x_299_; uint8_t v_isShared_300_; uint8_t v_isSharedCheck_304_; 
lean_dec_ref(v_e_227_);
lean_dec_ref(v_f_225_);
lean_dec_ref(v_p_224_);
v_a_297_ = lean_ctor_get(v___x_284_, 0);
v_isSharedCheck_304_ = !lean_is_exclusive(v___x_284_);
if (v_isSharedCheck_304_ == 0)
{
v___x_299_ = v___x_284_;
v_isShared_300_ = v_isSharedCheck_304_;
goto v_resetjp_298_;
}
else
{
lean_inc(v_a_297_);
lean_dec(v___x_284_);
v___x_299_ = lean_box(0);
v_isShared_300_ = v_isSharedCheck_304_;
goto v_resetjp_298_;
}
v_resetjp_298_:
{
lean_object* v___x_302_; 
if (v_isShared_300_ == 0)
{
v___x_302_ = v___x_299_;
goto v_reusejp_301_;
}
else
{
lean_object* v_reuseFailAlloc_303_; 
v_reuseFailAlloc_303_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_303_, 0, v_a_297_);
v___x_302_ = v_reuseFailAlloc_303_;
goto v_reusejp_301_;
}
v_reusejp_301_:
{
return v___x_302_;
}
}
}
}
}
else
{
lean_object* v___x_305_; lean_object* v___x_307_; 
lean_dec_ref(v_e_227_);
lean_dec_ref(v_f_225_);
lean_dec_ref(v_p_224_);
v___x_305_ = lean_box(0);
if (v_isShared_280_ == 0)
{
lean_ctor_set(v___x_279_, 0, v___x_305_);
v___x_307_ = v___x_279_;
goto v_reusejp_306_;
}
else
{
lean_object* v_reuseFailAlloc_308_; 
v_reuseFailAlloc_308_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_308_, 0, v___x_305_);
v___x_307_ = v_reuseFailAlloc_308_;
goto v_reusejp_306_;
}
v_reusejp_306_:
{
return v___x_307_;
}
}
}
}
else
{
lean_object* v_a_310_; lean_object* v___x_312_; uint8_t v_isShared_313_; uint8_t v_isSharedCheck_317_; 
lean_dec_ref(v_e_227_);
lean_dec_ref(v_f_225_);
lean_dec_ref(v_p_224_);
v_a_310_ = lean_ctor_get(v___x_276_, 0);
v_isSharedCheck_317_ = !lean_is_exclusive(v___x_276_);
if (v_isSharedCheck_317_ == 0)
{
v___x_312_ = v___x_276_;
v_isShared_313_ = v_isSharedCheck_317_;
goto v_resetjp_311_;
}
else
{
lean_inc(v_a_310_);
lean_dec(v___x_276_);
v___x_312_ = lean_box(0);
v_isShared_313_ = v_isSharedCheck_317_;
goto v_resetjp_311_;
}
v_resetjp_311_:
{
lean_object* v___x_315_; 
if (v_isShared_313_ == 0)
{
v___x_315_ = v___x_312_;
goto v_reusejp_314_;
}
else
{
lean_object* v_reuseFailAlloc_316_; 
v_reuseFailAlloc_316_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_316_, 0, v_a_310_);
v___x_315_ = v_reuseFailAlloc_316_;
goto v_reusejp_314_;
}
v_reusejp_314_:
{
return v___x_315_;
}
}
}
v___jp_236_:
{
lean_object* v___x_246_; 
lean_inc_ref(v_f_225_);
lean_inc_ref(v_p_224_);
v___x_246_ = l___private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4(v_p_224_, v_f_225_, v_stopWhenVisited_226_, v_d_243_, v___y_245_, v___y_238_, v___y_241_, v___y_237_, v___y_242_, v___y_240_, v___y_239_);
if (lean_obj_tag(v___x_246_) == 0)
{
lean_dec_ref_known(v___x_246_, 1);
v_e_227_ = v_b_244_;
v___y_228_ = v___y_245_;
v___y_229_ = v___y_238_;
v___y_230_ = v___y_241_;
v___y_231_ = v___y_237_;
v___y_232_ = v___y_242_;
v___y_233_ = v___y_240_;
v___y_234_ = v___y_239_;
goto _start;
}
else
{
lean_dec_ref(v_b_244_);
lean_dec_ref(v_f_225_);
lean_dec_ref(v_p_224_);
return v___x_246_;
}
}
v___jp_248_:
{
switch(lean_obj_tag(v_e_227_))
{
case 7:
{
lean_object* v_binderType_256_; lean_object* v_body_257_; 
v_binderType_256_ = lean_ctor_get(v_e_227_, 1);
lean_inc_ref(v_binderType_256_);
v_body_257_ = lean_ctor_get(v_e_227_, 2);
lean_inc_ref(v_body_257_);
lean_dec_ref_known(v_e_227_, 3);
v___y_237_ = v___y_252_;
v___y_238_ = v___y_250_;
v___y_239_ = v___y_255_;
v___y_240_ = v___y_254_;
v___y_241_ = v___y_251_;
v___y_242_ = v___y_253_;
v_d_243_ = v_binderType_256_;
v_b_244_ = v_body_257_;
v___y_245_ = v___y_249_;
goto v___jp_236_;
}
case 6:
{
lean_object* v_binderType_258_; lean_object* v_body_259_; 
v_binderType_258_ = lean_ctor_get(v_e_227_, 1);
lean_inc_ref(v_binderType_258_);
v_body_259_ = lean_ctor_get(v_e_227_, 2);
lean_inc_ref(v_body_259_);
lean_dec_ref_known(v_e_227_, 3);
v___y_237_ = v___y_252_;
v___y_238_ = v___y_250_;
v___y_239_ = v___y_255_;
v___y_240_ = v___y_254_;
v___y_241_ = v___y_251_;
v___y_242_ = v___y_253_;
v_d_243_ = v_binderType_258_;
v_b_244_ = v_body_259_;
v___y_245_ = v___y_249_;
goto v___jp_236_;
}
case 8:
{
lean_object* v_type_260_; lean_object* v_value_261_; lean_object* v_body_262_; lean_object* v___x_263_; 
v_type_260_ = lean_ctor_get(v_e_227_, 1);
lean_inc_ref(v_type_260_);
v_value_261_ = lean_ctor_get(v_e_227_, 2);
lean_inc_ref(v_value_261_);
v_body_262_ = lean_ctor_get(v_e_227_, 3);
lean_inc_ref(v_body_262_);
lean_dec_ref_known(v_e_227_, 4);
lean_inc_ref(v_f_225_);
lean_inc_ref(v_p_224_);
v___x_263_ = l___private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4(v_p_224_, v_f_225_, v_stopWhenVisited_226_, v_type_260_, v___y_249_, v___y_250_, v___y_251_, v___y_252_, v___y_253_, v___y_254_, v___y_255_);
if (lean_obj_tag(v___x_263_) == 0)
{
lean_object* v___x_264_; 
lean_dec_ref_known(v___x_263_, 1);
lean_inc_ref(v_f_225_);
lean_inc_ref(v_p_224_);
v___x_264_ = l___private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4(v_p_224_, v_f_225_, v_stopWhenVisited_226_, v_value_261_, v___y_249_, v___y_250_, v___y_251_, v___y_252_, v___y_253_, v___y_254_, v___y_255_);
if (lean_obj_tag(v___x_264_) == 0)
{
lean_dec_ref_known(v___x_264_, 1);
v_e_227_ = v_body_262_;
v___y_228_ = v___y_249_;
v___y_229_ = v___y_250_;
v___y_230_ = v___y_251_;
v___y_231_ = v___y_252_;
v___y_232_ = v___y_253_;
v___y_233_ = v___y_254_;
v___y_234_ = v___y_255_;
goto _start;
}
else
{
lean_dec_ref(v_body_262_);
lean_dec_ref(v_f_225_);
lean_dec_ref(v_p_224_);
return v___x_264_;
}
}
else
{
lean_dec_ref(v_body_262_);
lean_dec_ref(v_value_261_);
lean_dec_ref(v_f_225_);
lean_dec_ref(v_p_224_);
return v___x_263_;
}
}
case 5:
{
lean_object* v_fn_266_; lean_object* v_arg_267_; lean_object* v___x_268_; 
v_fn_266_ = lean_ctor_get(v_e_227_, 0);
lean_inc_ref(v_fn_266_);
v_arg_267_ = lean_ctor_get(v_e_227_, 1);
lean_inc_ref(v_arg_267_);
lean_dec_ref_known(v_e_227_, 2);
lean_inc_ref(v_f_225_);
lean_inc_ref(v_p_224_);
v___x_268_ = l___private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4(v_p_224_, v_f_225_, v_stopWhenVisited_226_, v_fn_266_, v___y_249_, v___y_250_, v___y_251_, v___y_252_, v___y_253_, v___y_254_, v___y_255_);
if (lean_obj_tag(v___x_268_) == 0)
{
lean_dec_ref_known(v___x_268_, 1);
v_e_227_ = v_arg_267_;
v___y_228_ = v___y_249_;
v___y_229_ = v___y_250_;
v___y_230_ = v___y_251_;
v___y_231_ = v___y_252_;
v___y_232_ = v___y_253_;
v___y_233_ = v___y_254_;
v___y_234_ = v___y_255_;
goto _start;
}
else
{
lean_dec_ref(v_arg_267_);
lean_dec_ref(v_f_225_);
lean_dec_ref(v_p_224_);
return v___x_268_;
}
}
case 10:
{
lean_object* v_expr_270_; 
v_expr_270_ = lean_ctor_get(v_e_227_, 1);
lean_inc_ref(v_expr_270_);
lean_dec_ref_known(v_e_227_, 2);
v_e_227_ = v_expr_270_;
v___y_228_ = v___y_249_;
v___y_229_ = v___y_250_;
v___y_230_ = v___y_251_;
v___y_231_ = v___y_252_;
v___y_232_ = v___y_253_;
v___y_233_ = v___y_254_;
v___y_234_ = v___y_255_;
goto _start;
}
case 11:
{
lean_object* v_struct_272_; 
v_struct_272_ = lean_ctor_get(v_e_227_, 2);
lean_inc_ref(v_struct_272_);
lean_dec_ref_known(v_e_227_, 3);
v_e_227_ = v_struct_272_;
v___y_228_ = v___y_249_;
v___y_229_ = v___y_250_;
v___y_230_ = v___y_251_;
v___y_231_ = v___y_252_;
v___y_232_ = v___y_253_;
v___y_233_ = v___y_254_;
v___y_234_ = v___y_255_;
goto _start;
}
default: 
{
lean_object* v___x_274_; lean_object* v___x_275_; 
lean_dec_ref(v_e_227_);
lean_dec_ref(v_f_225_);
lean_dec_ref(v_p_224_);
v___x_274_ = lean_box(0);
v___x_275_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_275_, 0, v___x_274_);
return v___x_275_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4___boxed(lean_object* v_p_318_, lean_object* v_f_319_, lean_object* v_stopWhenVisited_320_, lean_object* v_e_321_, lean_object* v___y_322_, lean_object* v___y_323_, lean_object* v___y_324_, lean_object* v___y_325_, lean_object* v___y_326_, lean_object* v___y_327_, lean_object* v___y_328_, lean_object* v___y_329_){
_start:
{
uint8_t v_stopWhenVisited_boxed_330_; lean_object* v_res_331_; 
v_stopWhenVisited_boxed_330_ = lean_unbox(v_stopWhenVisited_320_);
v_res_331_ = l___private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4(v_p_318_, v_f_319_, v_stopWhenVisited_boxed_330_, v_e_321_, v___y_322_, v___y_323_, v___y_324_, v___y_325_, v___y_326_, v___y_327_, v___y_328_);
lean_dec(v___y_328_);
lean_dec_ref(v___y_327_);
lean_dec(v___y_326_);
lean_dec_ref(v___y_325_);
lean_dec(v___y_324_);
lean_dec_ref(v___y_323_);
lean_dec(v___y_322_);
return v_res_331_;
}
}
LEAN_EXPORT lean_object* l_Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2(lean_object* v_p_332_, lean_object* v_f_333_, lean_object* v_e_334_, uint8_t v_stopWhenVisited_335_, lean_object* v___y_336_, lean_object* v___y_337_, lean_object* v___y_338_, lean_object* v___y_339_, lean_object* v___y_340_, lean_object* v___y_341_){
_start:
{
lean_object* v___x_343_; lean_object* v___x_344_; lean_object* v___x_345_; 
v___x_343_ = l_Lean_ForEachExprWhere_initCache;
v___x_344_ = lean_st_mk_ref(v___x_343_);
v___x_345_ = l___private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4(v_p_332_, v_f_333_, v_stopWhenVisited_335_, v_e_334_, v___x_344_, v___y_336_, v___y_337_, v___y_338_, v___y_339_, v___y_340_, v___y_341_);
if (lean_obj_tag(v___x_345_) == 0)
{
lean_object* v_a_346_; lean_object* v___x_348_; uint8_t v_isShared_349_; uint8_t v_isSharedCheck_354_; 
v_a_346_ = lean_ctor_get(v___x_345_, 0);
v_isSharedCheck_354_ = !lean_is_exclusive(v___x_345_);
if (v_isSharedCheck_354_ == 0)
{
v___x_348_ = v___x_345_;
v_isShared_349_ = v_isSharedCheck_354_;
goto v_resetjp_347_;
}
else
{
lean_inc(v_a_346_);
lean_dec(v___x_345_);
v___x_348_ = lean_box(0);
v_isShared_349_ = v_isSharedCheck_354_;
goto v_resetjp_347_;
}
v_resetjp_347_:
{
lean_object* v___x_350_; lean_object* v___x_352_; 
v___x_350_ = lean_st_ref_get(v___x_344_);
lean_dec(v___x_344_);
lean_dec(v___x_350_);
if (v_isShared_349_ == 0)
{
v___x_352_ = v___x_348_;
goto v_reusejp_351_;
}
else
{
lean_object* v_reuseFailAlloc_353_; 
v_reuseFailAlloc_353_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_353_, 0, v_a_346_);
v___x_352_ = v_reuseFailAlloc_353_;
goto v_reusejp_351_;
}
v_reusejp_351_:
{
return v___x_352_;
}
}
}
else
{
lean_dec(v___x_344_);
return v___x_345_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2___boxed(lean_object* v_p_355_, lean_object* v_f_356_, lean_object* v_e_357_, lean_object* v_stopWhenVisited_358_, lean_object* v___y_359_, lean_object* v___y_360_, lean_object* v___y_361_, lean_object* v___y_362_, lean_object* v___y_363_, lean_object* v___y_364_, lean_object* v___y_365_){
_start:
{
uint8_t v_stopWhenVisited_boxed_366_; lean_object* v_res_367_; 
v_stopWhenVisited_boxed_366_ = lean_unbox(v_stopWhenVisited_358_);
v_res_367_ = l_Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2(v_p_355_, v_f_356_, v_e_357_, v_stopWhenVisited_boxed_366_, v___y_359_, v___y_360_, v___y_361_, v___y_362_, v___y_363_, v___y_364_);
lean_dec(v___y_364_);
lean_dec_ref(v___y_363_);
lean_dec(v___y_362_);
lean_dec_ref(v___y_361_);
lean_dec(v___y_360_);
lean_dec_ref(v___y_359_);
return v_res_367_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Compiler_LCNF_Closure_collectFVar_spec__4(lean_object* v_msg_378_, lean_object* v___y_379_, lean_object* v___y_380_, lean_object* v___y_381_, lean_object* v___y_382_, lean_object* v___y_383_, lean_object* v___y_384_){
_start:
{
lean_object* v___f_386_; lean_object* v___f_387_; lean_object* v___f_388_; lean_object* v___f_389_; lean_object* v___f_390_; lean_object* v___f_391_; lean_object* v___f_392_; lean_object* v___f_393_; lean_object* v___x_394_; lean_object* v___x_395_; lean_object* v___x_396_; lean_object* v___x_397_; lean_object* v_toApplicative_398_; lean_object* v___x_400_; uint8_t v_isShared_401_; uint8_t v_isSharedCheck_461_; 
v___f_386_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_Closure_collectFVar_spec__4___closed__0));
v___f_387_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_Closure_collectFVar_spec__4___closed__1));
v___f_388_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_Closure_collectFVar_spec__4___closed__2));
v___f_389_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_Closure_collectFVar_spec__4___closed__3));
v___f_390_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_Closure_collectFVar_spec__4___closed__4));
v___f_391_ = lean_alloc_closure((void*)(l_instMonadEIO___redArg___lam__6___boxed), 7, 2);
lean_closure_set(v___f_391_, 0, v___f_390_);
lean_closure_set(v___f_391_, 1, v___f_389_);
v___f_392_ = lean_alloc_closure((void*)(l_instMonadEIO___redArg___lam__9___boxed), 6, 1);
lean_closure_set(v___f_392_, 0, v___f_389_);
v___f_393_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_Closure_collectFVar_spec__4___closed__5));
v___x_394_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_394_, 0, v___f_386_);
lean_ctor_set(v___x_394_, 1, v___f_387_);
v___x_395_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_395_, 0, v___x_394_);
lean_ctor_set(v___x_395_, 1, v___f_388_);
lean_ctor_set(v___x_395_, 2, v___f_391_);
lean_ctor_set(v___x_395_, 3, v___f_392_);
lean_ctor_set(v___x_395_, 4, v___f_393_);
v___x_396_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_396_, 0, v___x_395_);
lean_ctor_set(v___x_396_, 1, v___f_389_);
v___x_397_ = l_StateRefT_x27_instMonad___redArg(v___x_396_);
v_toApplicative_398_ = lean_ctor_get(v___x_397_, 0);
v_isSharedCheck_461_ = !lean_is_exclusive(v___x_397_);
if (v_isSharedCheck_461_ == 0)
{
lean_object* v_unused_462_; 
v_unused_462_ = lean_ctor_get(v___x_397_, 1);
lean_dec(v_unused_462_);
v___x_400_ = v___x_397_;
v_isShared_401_ = v_isSharedCheck_461_;
goto v_resetjp_399_;
}
else
{
lean_inc(v_toApplicative_398_);
lean_dec(v___x_397_);
v___x_400_ = lean_box(0);
v_isShared_401_ = v_isSharedCheck_461_;
goto v_resetjp_399_;
}
v_resetjp_399_:
{
lean_object* v_toFunctor_402_; lean_object* v_toSeq_403_; lean_object* v_toSeqLeft_404_; lean_object* v_toSeqRight_405_; lean_object* v___x_407_; uint8_t v_isShared_408_; uint8_t v_isSharedCheck_459_; 
v_toFunctor_402_ = lean_ctor_get(v_toApplicative_398_, 0);
v_toSeq_403_ = lean_ctor_get(v_toApplicative_398_, 2);
v_toSeqLeft_404_ = lean_ctor_get(v_toApplicative_398_, 3);
v_toSeqRight_405_ = lean_ctor_get(v_toApplicative_398_, 4);
v_isSharedCheck_459_ = !lean_is_exclusive(v_toApplicative_398_);
if (v_isSharedCheck_459_ == 0)
{
lean_object* v_unused_460_; 
v_unused_460_ = lean_ctor_get(v_toApplicative_398_, 1);
lean_dec(v_unused_460_);
v___x_407_ = v_toApplicative_398_;
v_isShared_408_ = v_isSharedCheck_459_;
goto v_resetjp_406_;
}
else
{
lean_inc(v_toSeqRight_405_);
lean_inc(v_toSeqLeft_404_);
lean_inc(v_toSeq_403_);
lean_inc(v_toFunctor_402_);
lean_dec(v_toApplicative_398_);
v___x_407_ = lean_box(0);
v_isShared_408_ = v_isSharedCheck_459_;
goto v_resetjp_406_;
}
v_resetjp_406_:
{
lean_object* v___f_409_; lean_object* v___f_410_; lean_object* v___f_411_; lean_object* v___f_412_; lean_object* v___x_413_; lean_object* v___f_414_; lean_object* v___f_415_; lean_object* v___f_416_; lean_object* v___x_418_; 
v___f_409_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_Closure_collectFVar_spec__4___closed__6));
v___f_410_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_Closure_collectFVar_spec__4___closed__7));
lean_inc_ref(v_toFunctor_402_);
v___f_411_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_411_, 0, v_toFunctor_402_);
v___f_412_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_412_, 0, v_toFunctor_402_);
v___x_413_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_413_, 0, v___f_411_);
lean_ctor_set(v___x_413_, 1, v___f_412_);
v___f_414_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_414_, 0, v_toSeqRight_405_);
v___f_415_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3___boxed), 6, 1);
lean_closure_set(v___f_415_, 0, v_toSeqLeft_404_);
v___f_416_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4___boxed), 6, 1);
lean_closure_set(v___f_416_, 0, v_toSeq_403_);
if (v_isShared_408_ == 0)
{
lean_ctor_set(v___x_407_, 4, v___f_414_);
lean_ctor_set(v___x_407_, 3, v___f_415_);
lean_ctor_set(v___x_407_, 2, v___f_416_);
lean_ctor_set(v___x_407_, 1, v___f_409_);
lean_ctor_set(v___x_407_, 0, v___x_413_);
v___x_418_ = v___x_407_;
goto v_reusejp_417_;
}
else
{
lean_object* v_reuseFailAlloc_458_; 
v_reuseFailAlloc_458_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_458_, 0, v___x_413_);
lean_ctor_set(v_reuseFailAlloc_458_, 1, v___f_409_);
lean_ctor_set(v_reuseFailAlloc_458_, 2, v___f_416_);
lean_ctor_set(v_reuseFailAlloc_458_, 3, v___f_415_);
lean_ctor_set(v_reuseFailAlloc_458_, 4, v___f_414_);
v___x_418_ = v_reuseFailAlloc_458_;
goto v_reusejp_417_;
}
v_reusejp_417_:
{
lean_object* v___x_420_; 
if (v_isShared_401_ == 0)
{
lean_ctor_set(v___x_400_, 1, v___f_410_);
lean_ctor_set(v___x_400_, 0, v___x_418_);
v___x_420_ = v___x_400_;
goto v_reusejp_419_;
}
else
{
lean_object* v_reuseFailAlloc_457_; 
v_reuseFailAlloc_457_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_457_, 0, v___x_418_);
lean_ctor_set(v_reuseFailAlloc_457_, 1, v___f_410_);
v___x_420_ = v_reuseFailAlloc_457_;
goto v_reusejp_419_;
}
v_reusejp_419_:
{
lean_object* v___x_421_; lean_object* v_toApplicative_422_; lean_object* v___x_424_; uint8_t v_isShared_425_; uint8_t v_isSharedCheck_455_; 
v___x_421_ = l_StateRefT_x27_instMonad___redArg(v___x_420_);
v_toApplicative_422_ = lean_ctor_get(v___x_421_, 0);
v_isSharedCheck_455_ = !lean_is_exclusive(v___x_421_);
if (v_isSharedCheck_455_ == 0)
{
lean_object* v_unused_456_; 
v_unused_456_ = lean_ctor_get(v___x_421_, 1);
lean_dec(v_unused_456_);
v___x_424_ = v___x_421_;
v_isShared_425_ = v_isSharedCheck_455_;
goto v_resetjp_423_;
}
else
{
lean_inc(v_toApplicative_422_);
lean_dec(v___x_421_);
v___x_424_ = lean_box(0);
v_isShared_425_ = v_isSharedCheck_455_;
goto v_resetjp_423_;
}
v_resetjp_423_:
{
lean_object* v_toFunctor_426_; lean_object* v_toSeq_427_; lean_object* v_toSeqLeft_428_; lean_object* v_toSeqRight_429_; lean_object* v___x_431_; uint8_t v_isShared_432_; uint8_t v_isSharedCheck_453_; 
v_toFunctor_426_ = lean_ctor_get(v_toApplicative_422_, 0);
v_toSeq_427_ = lean_ctor_get(v_toApplicative_422_, 2);
v_toSeqLeft_428_ = lean_ctor_get(v_toApplicative_422_, 3);
v_toSeqRight_429_ = lean_ctor_get(v_toApplicative_422_, 4);
v_isSharedCheck_453_ = !lean_is_exclusive(v_toApplicative_422_);
if (v_isSharedCheck_453_ == 0)
{
lean_object* v_unused_454_; 
v_unused_454_ = lean_ctor_get(v_toApplicative_422_, 1);
lean_dec(v_unused_454_);
v___x_431_ = v_toApplicative_422_;
v_isShared_432_ = v_isSharedCheck_453_;
goto v_resetjp_430_;
}
else
{
lean_inc(v_toSeqRight_429_);
lean_inc(v_toSeqLeft_428_);
lean_inc(v_toSeq_427_);
lean_inc(v_toFunctor_426_);
lean_dec(v_toApplicative_422_);
v___x_431_ = lean_box(0);
v_isShared_432_ = v_isSharedCheck_453_;
goto v_resetjp_430_;
}
v_resetjp_430_:
{
lean_object* v___f_433_; lean_object* v___f_434_; lean_object* v___f_435_; lean_object* v___f_436_; lean_object* v___x_437_; lean_object* v___f_438_; lean_object* v___f_439_; lean_object* v___f_440_; lean_object* v___x_442_; 
v___f_433_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_Closure_collectFVar_spec__4___closed__8));
v___f_434_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_Closure_collectFVar_spec__4___closed__9));
lean_inc_ref(v_toFunctor_426_);
v___f_435_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_435_, 0, v_toFunctor_426_);
v___f_436_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_436_, 0, v_toFunctor_426_);
v___x_437_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_437_, 0, v___f_435_);
lean_ctor_set(v___x_437_, 1, v___f_436_);
v___f_438_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_438_, 0, v_toSeqRight_429_);
v___f_439_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3___boxed), 6, 1);
lean_closure_set(v___f_439_, 0, v_toSeqLeft_428_);
v___f_440_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4___boxed), 6, 1);
lean_closure_set(v___f_440_, 0, v_toSeq_427_);
if (v_isShared_432_ == 0)
{
lean_ctor_set(v___x_431_, 4, v___f_438_);
lean_ctor_set(v___x_431_, 3, v___f_439_);
lean_ctor_set(v___x_431_, 2, v___f_440_);
lean_ctor_set(v___x_431_, 1, v___f_433_);
lean_ctor_set(v___x_431_, 0, v___x_437_);
v___x_442_ = v___x_431_;
goto v_reusejp_441_;
}
else
{
lean_object* v_reuseFailAlloc_452_; 
v_reuseFailAlloc_452_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_452_, 0, v___x_437_);
lean_ctor_set(v_reuseFailAlloc_452_, 1, v___f_433_);
lean_ctor_set(v_reuseFailAlloc_452_, 2, v___f_440_);
lean_ctor_set(v_reuseFailAlloc_452_, 3, v___f_439_);
lean_ctor_set(v_reuseFailAlloc_452_, 4, v___f_438_);
v___x_442_ = v_reuseFailAlloc_452_;
goto v_reusejp_441_;
}
v_reusejp_441_:
{
lean_object* v___x_444_; 
if (v_isShared_425_ == 0)
{
lean_ctor_set(v___x_424_, 1, v___f_434_);
lean_ctor_set(v___x_424_, 0, v___x_442_);
v___x_444_ = v___x_424_;
goto v_reusejp_443_;
}
else
{
lean_object* v_reuseFailAlloc_451_; 
v_reuseFailAlloc_451_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_451_, 0, v___x_442_);
lean_ctor_set(v_reuseFailAlloc_451_, 1, v___f_434_);
v___x_444_ = v_reuseFailAlloc_451_;
goto v_reusejp_443_;
}
v_reusejp_443_:
{
lean_object* v___x_445_; lean_object* v___x_446_; lean_object* v___x_447_; lean_object* v___x_448_; lean_object* v___x_21432__overap_449_; lean_object* v___x_450_; 
v___x_445_ = l_StateRefT_x27_instMonad___redArg(v___x_444_);
v___x_446_ = lean_box(0);
v___x_447_ = l_instInhabitedOfMonad___redArg(v___x_445_, v___x_446_);
v___x_448_ = l_instInhabitedReaderT___redArg(v___x_447_);
v___x_21432__overap_449_ = lean_panic_fn_borrowed(v___x_448_, v_msg_378_);
lean_dec(v___x_448_);
lean_inc(v___y_384_);
lean_inc_ref(v___y_383_);
lean_inc(v___y_382_);
lean_inc_ref(v___y_381_);
lean_inc(v___y_380_);
lean_inc_ref(v___y_379_);
v___x_450_ = lean_apply_7(v___x_21432__overap_449_, v___y_379_, v___y_380_, v___y_381_, v___y_382_, v___y_383_, v___y_384_, lean_box(0));
return v___x_450_;
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
LEAN_EXPORT lean_object* l_panic___at___00Lean_Compiler_LCNF_Closure_collectFVar_spec__4___boxed(lean_object* v_msg_463_, lean_object* v___y_464_, lean_object* v___y_465_, lean_object* v___y_466_, lean_object* v___y_467_, lean_object* v___y_468_, lean_object* v___y_469_, lean_object* v___y_470_){
_start:
{
lean_object* v_res_471_; 
v_res_471_ = l_panic___at___00Lean_Compiler_LCNF_Closure_collectFVar_spec__4(v_msg_463_, v___y_464_, v___y_465_, v___y_466_, v___y_467_, v___y_468_, v___y_469_);
lean_dec(v___y_469_);
lean_dec_ref(v___y_468_);
lean_dec(v___y_467_);
lean_dec_ref(v___y_466_);
lean_dec(v___y_465_);
lean_dec_ref(v___y_464_);
return v_res_471_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Closure_collectType___lam__0___boxed(lean_object* v_e_472_, lean_object* v___y_473_, lean_object* v___y_474_, lean_object* v___y_475_, lean_object* v___y_476_, lean_object* v___y_477_, lean_object* v___y_478_, lean_object* v___y_479_){
_start:
{
lean_object* v_res_480_; 
v_res_480_ = l_Lean_Compiler_LCNF_Closure_collectType___lam__0(v_e_472_, v___y_473_, v___y_474_, v___y_475_, v___y_476_, v___y_477_, v___y_478_);
lean_dec(v___y_478_);
lean_dec_ref(v___y_477_);
lean_dec(v___y_476_);
lean_dec_ref(v___y_475_);
lean_dec(v___y_474_);
lean_dec_ref(v___y_473_);
lean_dec_ref(v_e_472_);
return v_res_480_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Closure_collectType(lean_object* v_type_482_, lean_object* v___y_483_, lean_object* v___y_484_, lean_object* v___y_485_, lean_object* v___y_486_, lean_object* v___y_487_, lean_object* v___y_488_){
_start:
{
uint8_t v___x_490_; 
v___x_490_ = l_Lean_Expr_hasFVar(v_type_482_);
if (v___x_490_ == 0)
{
lean_object* v___x_491_; lean_object* v___x_492_; 
lean_dec_ref(v_type_482_);
v___x_491_ = lean_box(0);
v___x_492_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_492_, 0, v___x_491_);
return v___x_492_;
}
else
{
lean_object* v___f_493_; lean_object* v___x_494_; uint8_t v___x_495_; lean_object* v___x_496_; 
v___f_493_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_Closure_collectType___lam__0___boxed), 8, 0);
v___x_494_ = ((lean_object*)(l_Lean_Compiler_LCNF_Closure_collectType___closed__0));
v___x_495_ = 0;
v___x_496_ = l_Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2(v___x_494_, v___f_493_, v_type_482_, v___x_495_, v___y_483_, v___y_484_, v___y_485_, v___y_486_, v___y_487_, v___y_488_);
return v___x_496_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Closure_collectParams_spec__0(lean_object* v_as_497_, size_t v_i_498_, size_t v_stop_499_, lean_object* v_b_500_, lean_object* v___y_501_, lean_object* v___y_502_, lean_object* v___y_503_, lean_object* v___y_504_, lean_object* v___y_505_, lean_object* v___y_506_){
_start:
{
uint8_t v___x_508_; 
v___x_508_ = lean_usize_dec_eq(v_i_498_, v_stop_499_);
if (v___x_508_ == 0)
{
lean_object* v___x_509_; lean_object* v_type_510_; lean_object* v___x_511_; 
v___x_509_ = lean_array_uget_borrowed(v_as_497_, v_i_498_);
v_type_510_ = lean_ctor_get(v___x_509_, 2);
lean_inc_ref(v_type_510_);
v___x_511_ = l_Lean_Compiler_LCNF_Closure_collectType(v_type_510_, v___y_501_, v___y_502_, v___y_503_, v___y_504_, v___y_505_, v___y_506_);
if (lean_obj_tag(v___x_511_) == 0)
{
lean_object* v_a_512_; size_t v___x_513_; size_t v___x_514_; 
v_a_512_ = lean_ctor_get(v___x_511_, 0);
lean_inc(v_a_512_);
lean_dec_ref_known(v___x_511_, 1);
v___x_513_ = ((size_t)1ULL);
v___x_514_ = lean_usize_add(v_i_498_, v___x_513_);
v_i_498_ = v___x_514_;
v_b_500_ = v_a_512_;
goto _start;
}
else
{
return v___x_511_;
}
}
else
{
lean_object* v___x_516_; 
v___x_516_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_516_, 0, v_b_500_);
return v___x_516_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Closure_collectParams(lean_object* v_params_517_, lean_object* v___y_518_, lean_object* v___y_519_, lean_object* v___y_520_, lean_object* v___y_521_, lean_object* v___y_522_, lean_object* v___y_523_){
_start:
{
lean_object* v___x_525_; lean_object* v___x_526_; lean_object* v___x_527_; uint8_t v___x_528_; 
v___x_525_ = lean_unsigned_to_nat(0u);
v___x_526_ = lean_array_get_size(v_params_517_);
v___x_527_ = lean_box(0);
v___x_528_ = lean_nat_dec_lt(v___x_525_, v___x_526_);
if (v___x_528_ == 0)
{
lean_object* v___x_529_; 
v___x_529_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_529_, 0, v___x_527_);
return v___x_529_;
}
else
{
uint8_t v___x_530_; 
v___x_530_ = lean_nat_dec_le(v___x_526_, v___x_526_);
if (v___x_530_ == 0)
{
if (v___x_528_ == 0)
{
lean_object* v___x_531_; 
v___x_531_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_531_, 0, v___x_527_);
return v___x_531_;
}
else
{
size_t v___x_532_; size_t v___x_533_; lean_object* v___x_534_; 
v___x_532_ = ((size_t)0ULL);
v___x_533_ = lean_usize_of_nat(v___x_526_);
v___x_534_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Closure_collectParams_spec__0(v_params_517_, v___x_532_, v___x_533_, v___x_527_, v___y_518_, v___y_519_, v___y_520_, v___y_521_, v___y_522_, v___y_523_);
return v___x_534_;
}
}
else
{
size_t v___x_535_; size_t v___x_536_; lean_object* v___x_537_; 
v___x_535_ = ((size_t)0ULL);
v___x_536_ = lean_usize_of_nat(v___x_526_);
v___x_537_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Closure_collectParams_spec__0(v_params_517_, v___x_535_, v___x_536_, v___x_527_, v___y_518_, v___y_519_, v___y_520_, v___y_521_, v___y_522_, v___y_523_);
return v___x_537_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Closure_collectArg(lean_object* v_arg_538_, lean_object* v___y_539_, lean_object* v___y_540_, lean_object* v___y_541_, lean_object* v___y_542_, lean_object* v___y_543_, lean_object* v___y_544_){
_start:
{
switch(lean_obj_tag(v_arg_538_))
{
case 0:
{
lean_object* v___x_546_; lean_object* v___x_547_; 
v___x_546_ = lean_box(0);
v___x_547_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_547_, 0, v___x_546_);
return v___x_547_;
}
case 1:
{
lean_object* v_fvarId_548_; lean_object* v___x_549_; 
v_fvarId_548_ = lean_ctor_get(v_arg_538_, 0);
lean_inc(v_fvarId_548_);
lean_dec_ref_known(v_arg_538_, 1);
v___x_549_ = l_Lean_Compiler_LCNF_Closure_collectFVar(v_fvarId_548_, v___y_539_, v___y_540_, v___y_541_, v___y_542_, v___y_543_, v___y_544_);
return v___x_549_;
}
default: 
{
lean_object* v_expr_550_; lean_object* v___x_551_; 
v_expr_550_ = lean_ctor_get(v_arg_538_, 0);
lean_inc_ref(v_expr_550_);
lean_dec_ref_known(v_arg_538_, 1);
v___x_551_ = l_Lean_Compiler_LCNF_Closure_collectType(v_expr_550_, v___y_539_, v___y_540_, v___y_541_, v___y_542_, v___y_543_, v___y_544_);
return v___x_551_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Closure_collectLetValue_spec__6(lean_object* v_as_552_, size_t v_i_553_, size_t v_stop_554_, lean_object* v_b_555_, lean_object* v___y_556_, lean_object* v___y_557_, lean_object* v___y_558_, lean_object* v___y_559_, lean_object* v___y_560_, lean_object* v___y_561_){
_start:
{
uint8_t v___x_563_; 
v___x_563_ = lean_usize_dec_eq(v_i_553_, v_stop_554_);
if (v___x_563_ == 0)
{
lean_object* v___x_564_; lean_object* v___x_565_; 
v___x_564_ = lean_array_uget_borrowed(v_as_552_, v_i_553_);
lean_inc(v___x_564_);
v___x_565_ = l_Lean_Compiler_LCNF_Closure_collectArg(v___x_564_, v___y_556_, v___y_557_, v___y_558_, v___y_559_, v___y_560_, v___y_561_);
if (lean_obj_tag(v___x_565_) == 0)
{
lean_object* v_a_566_; size_t v___x_567_; size_t v___x_568_; 
v_a_566_ = lean_ctor_get(v___x_565_, 0);
lean_inc(v_a_566_);
lean_dec_ref_known(v___x_565_, 1);
v___x_567_ = ((size_t)1ULL);
v___x_568_ = lean_usize_add(v_i_553_, v___x_567_);
v_i_553_ = v___x_568_;
v_b_555_ = v_a_566_;
goto _start;
}
else
{
return v___x_565_;
}
}
else
{
lean_object* v___x_570_; 
v___x_570_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_570_, 0, v_b_555_);
return v___x_570_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Closure_collectLetValue(lean_object* v_e_571_, lean_object* v___y_572_, lean_object* v___y_573_, lean_object* v___y_574_, lean_object* v___y_575_, lean_object* v___y_576_, lean_object* v___y_577_){
_start:
{
switch(lean_obj_tag(v_e_571_))
{
case 0:
{
lean_object* v___x_580_; uint8_t v_isShared_581_; uint8_t v_isSharedCheck_586_; 
v_isSharedCheck_586_ = !lean_is_exclusive(v_e_571_);
if (v_isSharedCheck_586_ == 0)
{
lean_object* v_unused_587_; 
v_unused_587_ = lean_ctor_get(v_e_571_, 0);
lean_dec(v_unused_587_);
v___x_580_ = v_e_571_;
v_isShared_581_ = v_isSharedCheck_586_;
goto v_resetjp_579_;
}
else
{
lean_dec(v_e_571_);
v___x_580_ = lean_box(0);
v_isShared_581_ = v_isSharedCheck_586_;
goto v_resetjp_579_;
}
v_resetjp_579_:
{
lean_object* v___x_582_; lean_object* v___x_584_; 
v___x_582_ = lean_box(0);
if (v_isShared_581_ == 0)
{
lean_ctor_set(v___x_580_, 0, v___x_582_);
v___x_584_ = v___x_580_;
goto v_reusejp_583_;
}
else
{
lean_object* v_reuseFailAlloc_585_; 
v_reuseFailAlloc_585_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_585_, 0, v___x_582_);
v___x_584_ = v_reuseFailAlloc_585_;
goto v_reusejp_583_;
}
v_reusejp_583_:
{
return v___x_584_;
}
}
}
case 1:
{
lean_object* v___x_588_; lean_object* v___x_589_; 
v___x_588_ = lean_box(0);
v___x_589_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_589_, 0, v___x_588_);
return v___x_589_;
}
case 2:
{
lean_object* v_struct_590_; lean_object* v___x_591_; 
v_struct_590_ = lean_ctor_get(v_e_571_, 2);
lean_inc(v_struct_590_);
lean_dec_ref_known(v_e_571_, 3);
v___x_591_ = l_Lean_Compiler_LCNF_Closure_collectFVar(v_struct_590_, v___y_572_, v___y_573_, v___y_574_, v___y_575_, v___y_576_, v___y_577_);
return v___x_591_;
}
case 3:
{
lean_object* v_args_592_; lean_object* v___x_593_; lean_object* v___x_594_; lean_object* v___x_595_; uint8_t v___x_596_; 
v_args_592_ = lean_ctor_get(v_e_571_, 2);
lean_inc_ref(v_args_592_);
lean_dec_ref_known(v_e_571_, 3);
v___x_593_ = lean_unsigned_to_nat(0u);
v___x_594_ = lean_array_get_size(v_args_592_);
v___x_595_ = lean_box(0);
v___x_596_ = lean_nat_dec_lt(v___x_593_, v___x_594_);
if (v___x_596_ == 0)
{
lean_object* v___x_597_; 
lean_dec_ref(v_args_592_);
v___x_597_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_597_, 0, v___x_595_);
return v___x_597_;
}
else
{
uint8_t v___x_598_; 
v___x_598_ = lean_nat_dec_le(v___x_594_, v___x_594_);
if (v___x_598_ == 0)
{
if (v___x_596_ == 0)
{
lean_object* v___x_599_; 
lean_dec_ref(v_args_592_);
v___x_599_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_599_, 0, v___x_595_);
return v___x_599_;
}
else
{
size_t v___x_600_; size_t v___x_601_; lean_object* v___x_602_; 
v___x_600_ = ((size_t)0ULL);
v___x_601_ = lean_usize_of_nat(v___x_594_);
v___x_602_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Closure_collectLetValue_spec__6(v_args_592_, v___x_600_, v___x_601_, v___x_595_, v___y_572_, v___y_573_, v___y_574_, v___y_575_, v___y_576_, v___y_577_);
lean_dec_ref(v_args_592_);
return v___x_602_;
}
}
else
{
size_t v___x_603_; size_t v___x_604_; lean_object* v___x_605_; 
v___x_603_ = ((size_t)0ULL);
v___x_604_ = lean_usize_of_nat(v___x_594_);
v___x_605_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Closure_collectLetValue_spec__6(v_args_592_, v___x_603_, v___x_604_, v___x_595_, v___y_572_, v___y_573_, v___y_574_, v___y_575_, v___y_576_, v___y_577_);
lean_dec_ref(v_args_592_);
return v___x_605_;
}
}
}
default: 
{
lean_object* v_fvarId_606_; lean_object* v_args_607_; lean_object* v___x_608_; 
v_fvarId_606_ = lean_ctor_get(v_e_571_, 0);
lean_inc(v_fvarId_606_);
v_args_607_ = lean_ctor_get(v_e_571_, 1);
lean_inc_ref(v_args_607_);
lean_dec_ref_known(v_e_571_, 2);
v___x_608_ = l_Lean_Compiler_LCNF_Closure_collectFVar(v_fvarId_606_, v___y_572_, v___y_573_, v___y_574_, v___y_575_, v___y_576_, v___y_577_);
if (lean_obj_tag(v___x_608_) == 0)
{
lean_object* v___x_610_; uint8_t v_isShared_611_; uint8_t v_isSharedCheck_629_; 
v_isSharedCheck_629_ = !lean_is_exclusive(v___x_608_);
if (v_isSharedCheck_629_ == 0)
{
lean_object* v_unused_630_; 
v_unused_630_ = lean_ctor_get(v___x_608_, 0);
lean_dec(v_unused_630_);
v___x_610_ = v___x_608_;
v_isShared_611_ = v_isSharedCheck_629_;
goto v_resetjp_609_;
}
else
{
lean_dec(v___x_608_);
v___x_610_ = lean_box(0);
v_isShared_611_ = v_isSharedCheck_629_;
goto v_resetjp_609_;
}
v_resetjp_609_:
{
lean_object* v___x_612_; lean_object* v___x_613_; lean_object* v___x_614_; uint8_t v___x_615_; 
v___x_612_ = lean_unsigned_to_nat(0u);
v___x_613_ = lean_array_get_size(v_args_607_);
v___x_614_ = lean_box(0);
v___x_615_ = lean_nat_dec_lt(v___x_612_, v___x_613_);
if (v___x_615_ == 0)
{
lean_object* v___x_617_; 
lean_dec_ref(v_args_607_);
if (v_isShared_611_ == 0)
{
lean_ctor_set(v___x_610_, 0, v___x_614_);
v___x_617_ = v___x_610_;
goto v_reusejp_616_;
}
else
{
lean_object* v_reuseFailAlloc_618_; 
v_reuseFailAlloc_618_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_618_, 0, v___x_614_);
v___x_617_ = v_reuseFailAlloc_618_;
goto v_reusejp_616_;
}
v_reusejp_616_:
{
return v___x_617_;
}
}
else
{
uint8_t v___x_619_; 
v___x_619_ = lean_nat_dec_le(v___x_613_, v___x_613_);
if (v___x_619_ == 0)
{
if (v___x_615_ == 0)
{
lean_object* v___x_621_; 
lean_dec_ref(v_args_607_);
if (v_isShared_611_ == 0)
{
lean_ctor_set(v___x_610_, 0, v___x_614_);
v___x_621_ = v___x_610_;
goto v_reusejp_620_;
}
else
{
lean_object* v_reuseFailAlloc_622_; 
v_reuseFailAlloc_622_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_622_, 0, v___x_614_);
v___x_621_ = v_reuseFailAlloc_622_;
goto v_reusejp_620_;
}
v_reusejp_620_:
{
return v___x_621_;
}
}
else
{
size_t v___x_623_; size_t v___x_624_; lean_object* v___x_625_; 
lean_del_object(v___x_610_);
v___x_623_ = ((size_t)0ULL);
v___x_624_ = lean_usize_of_nat(v___x_613_);
v___x_625_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Closure_collectLetValue_spec__6(v_args_607_, v___x_623_, v___x_624_, v___x_614_, v___y_572_, v___y_573_, v___y_574_, v___y_575_, v___y_576_, v___y_577_);
lean_dec_ref(v_args_607_);
return v___x_625_;
}
}
else
{
size_t v___x_626_; size_t v___x_627_; lean_object* v___x_628_; 
lean_del_object(v___x_610_);
v___x_626_ = ((size_t)0ULL);
v___x_627_ = lean_usize_of_nat(v___x_613_);
v___x_628_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Closure_collectLetValue_spec__6(v_args_607_, v___x_626_, v___x_627_, v___x_614_, v___y_572_, v___y_573_, v___y_574_, v___y_575_, v___y_576_, v___y_577_);
lean_dec_ref(v_args_607_);
return v___x_628_;
}
}
}
}
else
{
lean_dec_ref(v_args_607_);
return v___x_608_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Closure_collectCode_spec__10(lean_object* v_as_631_, size_t v_i_632_, size_t v_stop_633_, lean_object* v_b_634_, lean_object* v___y_635_, lean_object* v___y_636_, lean_object* v___y_637_, lean_object* v___y_638_, lean_object* v___y_639_, lean_object* v___y_640_){
_start:
{
lean_object* v___y_643_; uint8_t v___x_648_; 
v___x_648_ = lean_usize_dec_eq(v_i_632_, v_stop_633_);
if (v___x_648_ == 0)
{
lean_object* v___x_649_; 
v___x_649_ = lean_array_uget_borrowed(v_as_631_, v_i_632_);
if (lean_obj_tag(v___x_649_) == 0)
{
lean_object* v_params_650_; lean_object* v_code_651_; lean_object* v___x_652_; 
v_params_650_ = lean_ctor_get(v___x_649_, 1);
v_code_651_ = lean_ctor_get(v___x_649_, 2);
v___x_652_ = l_Lean_Compiler_LCNF_Closure_collectParams(v_params_650_, v___y_635_, v___y_636_, v___y_637_, v___y_638_, v___y_639_, v___y_640_);
if (lean_obj_tag(v___x_652_) == 0)
{
lean_object* v___x_653_; 
lean_dec_ref_known(v___x_652_, 1);
lean_inc_ref(v_code_651_);
v___x_653_ = l_Lean_Compiler_LCNF_Closure_collectCode(v_code_651_, v___y_635_, v___y_636_, v___y_637_, v___y_638_, v___y_639_, v___y_640_);
v___y_643_ = v___x_653_;
goto v___jp_642_;
}
else
{
v___y_643_ = v___x_652_;
goto v___jp_642_;
}
}
else
{
lean_object* v_code_654_; lean_object* v___x_655_; 
v_code_654_ = lean_ctor_get(v___x_649_, 0);
lean_inc_ref(v_code_654_);
v___x_655_ = l_Lean_Compiler_LCNF_Closure_collectCode(v_code_654_, v___y_635_, v___y_636_, v___y_637_, v___y_638_, v___y_639_, v___y_640_);
v___y_643_ = v___x_655_;
goto v___jp_642_;
}
}
else
{
lean_object* v___x_656_; 
v___x_656_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_656_, 0, v_b_634_);
return v___x_656_;
}
v___jp_642_:
{
if (lean_obj_tag(v___y_643_) == 0)
{
lean_object* v_a_644_; size_t v___x_645_; size_t v___x_646_; 
v_a_644_ = lean_ctor_get(v___y_643_, 0);
lean_inc(v_a_644_);
lean_dec_ref_known(v___y_643_, 1);
v___x_645_ = ((size_t)1ULL);
v___x_646_ = lean_usize_add(v_i_632_, v___x_645_);
v_i_632_ = v___x_646_;
v_b_634_ = v_a_644_;
goto _start;
}
else
{
return v___y_643_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Closure_collectCode(lean_object* v_c_657_, lean_object* v___y_658_, lean_object* v___y_659_, lean_object* v___y_660_, lean_object* v___y_661_, lean_object* v___y_662_, lean_object* v___y_663_){
_start:
{
lean_object* v_decl_666_; lean_object* v_k_667_; lean_object* v___y_668_; lean_object* v___y_669_; lean_object* v___y_670_; lean_object* v___y_671_; lean_object* v___y_672_; lean_object* v___y_673_; 
switch(lean_obj_tag(v_c_657_))
{
case 0:
{
lean_object* v_decl_676_; lean_object* v_k_677_; lean_object* v_type_678_; lean_object* v_value_679_; lean_object* v___x_680_; 
v_decl_676_ = lean_ctor_get(v_c_657_, 0);
lean_inc_ref(v_decl_676_);
v_k_677_ = lean_ctor_get(v_c_657_, 1);
lean_inc_ref(v_k_677_);
lean_dec_ref_known(v_c_657_, 2);
v_type_678_ = lean_ctor_get(v_decl_676_, 2);
lean_inc_ref(v_type_678_);
v_value_679_ = lean_ctor_get(v_decl_676_, 3);
lean_inc(v_value_679_);
lean_dec_ref(v_decl_676_);
v___x_680_ = l_Lean_Compiler_LCNF_Closure_collectType(v_type_678_, v___y_658_, v___y_659_, v___y_660_, v___y_661_, v___y_662_, v___y_663_);
if (lean_obj_tag(v___x_680_) == 0)
{
lean_object* v___x_681_; 
lean_dec_ref_known(v___x_680_, 1);
v___x_681_ = l_Lean_Compiler_LCNF_Closure_collectLetValue(v_value_679_, v___y_658_, v___y_659_, v___y_660_, v___y_661_, v___y_662_, v___y_663_);
if (lean_obj_tag(v___x_681_) == 0)
{
lean_dec_ref_known(v___x_681_, 1);
v_c_657_ = v_k_677_;
goto _start;
}
else
{
lean_dec_ref(v_k_677_);
return v___x_681_;
}
}
else
{
lean_dec(v_value_679_);
lean_dec_ref(v_k_677_);
return v___x_680_;
}
}
case 3:
{
lean_object* v_args_683_; lean_object* v___x_684_; lean_object* v___x_685_; lean_object* v___x_686_; uint8_t v___x_687_; 
v_args_683_ = lean_ctor_get(v_c_657_, 1);
lean_inc_ref(v_args_683_);
lean_dec_ref_known(v_c_657_, 2);
v___x_684_ = lean_unsigned_to_nat(0u);
v___x_685_ = lean_array_get_size(v_args_683_);
v___x_686_ = lean_box(0);
v___x_687_ = lean_nat_dec_lt(v___x_684_, v___x_685_);
if (v___x_687_ == 0)
{
lean_object* v___x_688_; 
lean_dec_ref(v_args_683_);
v___x_688_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_688_, 0, v___x_686_);
return v___x_688_;
}
else
{
uint8_t v___x_689_; 
v___x_689_ = lean_nat_dec_le(v___x_685_, v___x_685_);
if (v___x_689_ == 0)
{
if (v___x_687_ == 0)
{
lean_object* v___x_690_; 
lean_dec_ref(v_args_683_);
v___x_690_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_690_, 0, v___x_686_);
return v___x_690_;
}
else
{
size_t v___x_691_; size_t v___x_692_; lean_object* v___x_693_; 
v___x_691_ = ((size_t)0ULL);
v___x_692_ = lean_usize_of_nat(v___x_685_);
v___x_693_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Closure_collectLetValue_spec__6(v_args_683_, v___x_691_, v___x_692_, v___x_686_, v___y_658_, v___y_659_, v___y_660_, v___y_661_, v___y_662_, v___y_663_);
lean_dec_ref(v_args_683_);
return v___x_693_;
}
}
else
{
size_t v___x_694_; size_t v___x_695_; lean_object* v___x_696_; 
v___x_694_ = ((size_t)0ULL);
v___x_695_ = lean_usize_of_nat(v___x_685_);
v___x_696_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Closure_collectLetValue_spec__6(v_args_683_, v___x_694_, v___x_695_, v___x_686_, v___y_658_, v___y_659_, v___y_660_, v___y_661_, v___y_662_, v___y_663_);
lean_dec_ref(v_args_683_);
return v___x_696_;
}
}
}
case 4:
{
lean_object* v_cases_697_; lean_object* v_resultType_698_; lean_object* v_discr_699_; lean_object* v_alts_700_; lean_object* v___x_701_; 
v_cases_697_ = lean_ctor_get(v_c_657_, 0);
lean_inc_ref(v_cases_697_);
lean_dec_ref_known(v_c_657_, 1);
v_resultType_698_ = lean_ctor_get(v_cases_697_, 1);
lean_inc_ref(v_resultType_698_);
v_discr_699_ = lean_ctor_get(v_cases_697_, 2);
lean_inc(v_discr_699_);
v_alts_700_ = lean_ctor_get(v_cases_697_, 3);
lean_inc_ref(v_alts_700_);
lean_dec_ref(v_cases_697_);
v___x_701_ = l_Lean_Compiler_LCNF_Closure_collectType(v_resultType_698_, v___y_658_, v___y_659_, v___y_660_, v___y_661_, v___y_662_, v___y_663_);
if (lean_obj_tag(v___x_701_) == 0)
{
lean_object* v___x_702_; 
lean_dec_ref_known(v___x_701_, 1);
v___x_702_ = l_Lean_Compiler_LCNF_Closure_collectFVar(v_discr_699_, v___y_658_, v___y_659_, v___y_660_, v___y_661_, v___y_662_, v___y_663_);
if (lean_obj_tag(v___x_702_) == 0)
{
lean_object* v___x_704_; uint8_t v_isShared_705_; uint8_t v_isSharedCheck_723_; 
v_isSharedCheck_723_ = !lean_is_exclusive(v___x_702_);
if (v_isSharedCheck_723_ == 0)
{
lean_object* v_unused_724_; 
v_unused_724_ = lean_ctor_get(v___x_702_, 0);
lean_dec(v_unused_724_);
v___x_704_ = v___x_702_;
v_isShared_705_ = v_isSharedCheck_723_;
goto v_resetjp_703_;
}
else
{
lean_dec(v___x_702_);
v___x_704_ = lean_box(0);
v_isShared_705_ = v_isSharedCheck_723_;
goto v_resetjp_703_;
}
v_resetjp_703_:
{
lean_object* v___x_706_; lean_object* v___x_707_; lean_object* v___x_708_; uint8_t v___x_709_; 
v___x_706_ = lean_unsigned_to_nat(0u);
v___x_707_ = lean_array_get_size(v_alts_700_);
v___x_708_ = lean_box(0);
v___x_709_ = lean_nat_dec_lt(v___x_706_, v___x_707_);
if (v___x_709_ == 0)
{
lean_object* v___x_711_; 
lean_dec_ref(v_alts_700_);
if (v_isShared_705_ == 0)
{
lean_ctor_set(v___x_704_, 0, v___x_708_);
v___x_711_ = v___x_704_;
goto v_reusejp_710_;
}
else
{
lean_object* v_reuseFailAlloc_712_; 
v_reuseFailAlloc_712_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_712_, 0, v___x_708_);
v___x_711_ = v_reuseFailAlloc_712_;
goto v_reusejp_710_;
}
v_reusejp_710_:
{
return v___x_711_;
}
}
else
{
uint8_t v___x_713_; 
v___x_713_ = lean_nat_dec_le(v___x_707_, v___x_707_);
if (v___x_713_ == 0)
{
if (v___x_709_ == 0)
{
lean_object* v___x_715_; 
lean_dec_ref(v_alts_700_);
if (v_isShared_705_ == 0)
{
lean_ctor_set(v___x_704_, 0, v___x_708_);
v___x_715_ = v___x_704_;
goto v_reusejp_714_;
}
else
{
lean_object* v_reuseFailAlloc_716_; 
v_reuseFailAlloc_716_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_716_, 0, v___x_708_);
v___x_715_ = v_reuseFailAlloc_716_;
goto v_reusejp_714_;
}
v_reusejp_714_:
{
return v___x_715_;
}
}
else
{
size_t v___x_717_; size_t v___x_718_; lean_object* v___x_719_; 
lean_del_object(v___x_704_);
v___x_717_ = ((size_t)0ULL);
v___x_718_ = lean_usize_of_nat(v___x_707_);
v___x_719_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Closure_collectCode_spec__10(v_alts_700_, v___x_717_, v___x_718_, v___x_708_, v___y_658_, v___y_659_, v___y_660_, v___y_661_, v___y_662_, v___y_663_);
lean_dec_ref(v_alts_700_);
return v___x_719_;
}
}
else
{
size_t v___x_720_; size_t v___x_721_; lean_object* v___x_722_; 
lean_del_object(v___x_704_);
v___x_720_ = ((size_t)0ULL);
v___x_721_ = lean_usize_of_nat(v___x_707_);
v___x_722_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Closure_collectCode_spec__10(v_alts_700_, v___x_720_, v___x_721_, v___x_708_, v___y_658_, v___y_659_, v___y_660_, v___y_661_, v___y_662_, v___y_663_);
lean_dec_ref(v_alts_700_);
return v___x_722_;
}
}
}
}
else
{
lean_dec_ref(v_alts_700_);
return v___x_702_;
}
}
else
{
lean_dec_ref(v_alts_700_);
lean_dec(v_discr_699_);
return v___x_701_;
}
}
case 5:
{
lean_object* v_fvarId_725_; lean_object* v___x_726_; 
v_fvarId_725_ = lean_ctor_get(v_c_657_, 0);
lean_inc(v_fvarId_725_);
lean_dec_ref_known(v_c_657_, 1);
v___x_726_ = l_Lean_Compiler_LCNF_Closure_collectFVar(v_fvarId_725_, v___y_658_, v___y_659_, v___y_660_, v___y_661_, v___y_662_, v___y_663_);
return v___x_726_;
}
case 6:
{
lean_object* v_type_727_; lean_object* v___x_728_; 
v_type_727_ = lean_ctor_get(v_c_657_, 0);
lean_inc_ref(v_type_727_);
lean_dec_ref_known(v_c_657_, 1);
v___x_728_ = l_Lean_Compiler_LCNF_Closure_collectType(v_type_727_, v___y_658_, v___y_659_, v___y_660_, v___y_661_, v___y_662_, v___y_663_);
return v___x_728_;
}
default: 
{
lean_object* v_decl_729_; lean_object* v_k_730_; 
v_decl_729_ = lean_ctor_get(v_c_657_, 0);
lean_inc_ref(v_decl_729_);
v_k_730_ = lean_ctor_get(v_c_657_, 1);
lean_inc_ref(v_k_730_);
lean_dec_ref(v_c_657_);
v_decl_666_ = v_decl_729_;
v_k_667_ = v_k_730_;
v___y_668_ = v___y_658_;
v___y_669_ = v___y_659_;
v___y_670_ = v___y_660_;
v___y_671_ = v___y_661_;
v___y_672_ = v___y_662_;
v___y_673_ = v___y_663_;
goto v___jp_665_;
}
}
v___jp_665_:
{
lean_object* v___x_674_; 
v___x_674_ = l_Lean_Compiler_LCNF_Closure_collectFunDecl(v_decl_666_, v___y_668_, v___y_669_, v___y_670_, v___y_671_, v___y_672_, v___y_673_);
if (lean_obj_tag(v___x_674_) == 0)
{
lean_dec_ref_known(v___x_674_, 1);
v_c_657_ = v_k_667_;
v___y_658_ = v___y_668_;
v___y_659_ = v___y_669_;
v___y_660_ = v___y_670_;
v___y_661_ = v___y_671_;
v___y_662_ = v___y_672_;
v___y_663_ = v___y_673_;
goto _start;
}
else
{
lean_dec_ref(v_k_667_);
return v___x_674_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Closure_collectFunDecl(lean_object* v_decl_731_, lean_object* v___y_732_, lean_object* v___y_733_, lean_object* v___y_734_, lean_object* v___y_735_, lean_object* v___y_736_, lean_object* v___y_737_){
_start:
{
lean_object* v_params_739_; lean_object* v_type_740_; lean_object* v_value_741_; lean_object* v___x_742_; 
v_params_739_ = lean_ctor_get(v_decl_731_, 2);
lean_inc_ref(v_params_739_);
v_type_740_ = lean_ctor_get(v_decl_731_, 3);
lean_inc_ref(v_type_740_);
v_value_741_ = lean_ctor_get(v_decl_731_, 4);
lean_inc_ref(v_value_741_);
lean_dec_ref(v_decl_731_);
v___x_742_ = l_Lean_Compiler_LCNF_Closure_collectType(v_type_740_, v___y_732_, v___y_733_, v___y_734_, v___y_735_, v___y_736_, v___y_737_);
if (lean_obj_tag(v___x_742_) == 0)
{
lean_object* v___x_743_; 
lean_dec_ref_known(v___x_742_, 1);
v___x_743_ = l_Lean_Compiler_LCNF_Closure_collectParams(v_params_739_, v___y_732_, v___y_733_, v___y_734_, v___y_735_, v___y_736_, v___y_737_);
lean_dec_ref(v_params_739_);
if (lean_obj_tag(v___x_743_) == 0)
{
lean_object* v___x_744_; 
lean_dec_ref_known(v___x_743_, 1);
v___x_744_ = l_Lean_Compiler_LCNF_Closure_collectCode(v_value_741_, v___y_732_, v___y_733_, v___y_734_, v___y_735_, v___y_736_, v___y_737_);
return v___x_744_;
}
else
{
lean_dec_ref(v_value_741_);
return v___x_743_;
}
}
else
{
lean_dec_ref(v_value_741_);
lean_dec_ref(v_params_739_);
return v___x_742_;
}
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Closure_collectFVar___closed__3(void){
_start:
{
lean_object* v___x_748_; lean_object* v___x_749_; lean_object* v___x_750_; lean_object* v___x_751_; lean_object* v___x_752_; lean_object* v___x_753_; 
v___x_748_ = ((lean_object*)(l_Lean_Compiler_LCNF_Closure_collectFVar___closed__2));
v___x_749_ = lean_unsigned_to_nat(10u);
v___x_750_ = lean_unsigned_to_nat(149u);
v___x_751_ = ((lean_object*)(l_Lean_Compiler_LCNF_Closure_collectFVar___closed__1));
v___x_752_ = ((lean_object*)(l_Lean_Compiler_LCNF_Closure_collectFVar___closed__0));
v___x_753_ = l_mkPanicMessageWithDecl(v___x_752_, v___x_751_, v___x_750_, v___x_749_, v___x_748_);
return v___x_753_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Closure_collectFVar(lean_object* v_fvarId_754_, lean_object* v___y_755_, lean_object* v___y_756_, lean_object* v___y_757_, lean_object* v___y_758_, lean_object* v___y_759_, lean_object* v___y_760_){
_start:
{
lean_object* v___x_762_; lean_object* v_visited_763_; uint8_t v___x_764_; 
v___x_762_ = lean_st_ref_get(v___y_756_);
v_visited_763_ = lean_ctor_get(v___x_762_, 0);
lean_inc_ref(v_visited_763_);
lean_dec(v___x_762_);
v___x_764_ = l_Lean_FVarIdHashSet_contains(v_visited_763_, v_fvarId_754_);
lean_dec_ref(v_visited_763_);
if (v___x_764_ == 0)
{
lean_object* v___x_765_; 
lean_inc(v_fvarId_754_);
v___x_765_ = l_Lean_Compiler_LCNF_Closure_markVisited___redArg(v_fvarId_754_, v___y_756_);
if (lean_obj_tag(v___x_765_) == 0)
{
lean_object* v___x_767_; uint8_t v_isShared_768_; uint8_t v_isSharedCheck_954_; 
v_isSharedCheck_954_ = !lean_is_exclusive(v___x_765_);
if (v_isSharedCheck_954_ == 0)
{
lean_object* v_unused_955_; 
v_unused_955_ = lean_ctor_get(v___x_765_, 0);
lean_dec(v_unused_955_);
v___x_767_ = v___x_765_;
v_isShared_768_ = v_isSharedCheck_954_;
goto v_resetjp_766_;
}
else
{
lean_dec(v___x_765_);
v___x_767_ = lean_box(0);
v_isShared_768_ = v_isSharedCheck_954_;
goto v_resetjp_766_;
}
v_resetjp_766_:
{
lean_object* v_inScope_769_; lean_object* v_abstract_770_; lean_object* v___x_771_; uint8_t v___x_772_; 
v_inScope_769_ = lean_ctor_get(v___y_755_, 0);
v_abstract_770_ = lean_ctor_get(v___y_755_, 1);
lean_inc_ref(v_inScope_769_);
lean_inc(v_fvarId_754_);
v___x_771_ = lean_apply_1(v_inScope_769_, v_fvarId_754_);
v___x_772_ = lean_unbox(v___x_771_);
if (v___x_772_ == 0)
{
lean_object* v___x_773_; lean_object* v___x_775_; 
lean_dec(v_fvarId_754_);
v___x_773_ = lean_box(0);
if (v_isShared_768_ == 0)
{
lean_ctor_set(v___x_767_, 0, v___x_773_);
v___x_775_ = v___x_767_;
goto v_reusejp_774_;
}
else
{
lean_object* v_reuseFailAlloc_776_; 
v_reuseFailAlloc_776_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_776_, 0, v___x_773_);
v___x_775_ = v_reuseFailAlloc_776_;
goto v_reusejp_774_;
}
v_reusejp_774_:
{
return v___x_775_;
}
}
else
{
uint8_t v___x_777_; lean_object* v___x_778_; 
lean_del_object(v___x_767_);
v___x_777_ = 0;
v___x_778_ = l_Lean_Compiler_LCNF_findFunDecl_x3f___redArg(v___x_777_, v_fvarId_754_, v___y_758_);
if (lean_obj_tag(v___x_778_) == 0)
{
lean_object* v_a_779_; lean_object* v___x_781_; uint8_t v_isShared_782_; uint8_t v_isSharedCheck_945_; 
v_a_779_ = lean_ctor_get(v___x_778_, 0);
v_isSharedCheck_945_ = !lean_is_exclusive(v___x_778_);
if (v_isSharedCheck_945_ == 0)
{
v___x_781_ = v___x_778_;
v_isShared_782_ = v_isSharedCheck_945_;
goto v_resetjp_780_;
}
else
{
lean_inc(v_a_779_);
lean_dec(v___x_778_);
v___x_781_ = lean_box(0);
v_isShared_782_ = v_isSharedCheck_945_;
goto v_resetjp_780_;
}
v_resetjp_780_:
{
if (lean_obj_tag(v_a_779_) == 1)
{
lean_object* v_val_783_; lean_object* v___x_785_; uint8_t v_isShared_786_; uint8_t v_isSharedCheck_836_; 
lean_dec(v_fvarId_754_);
v_val_783_ = lean_ctor_get(v_a_779_, 0);
v_isSharedCheck_836_ = !lean_is_exclusive(v_a_779_);
if (v_isSharedCheck_836_ == 0)
{
v___x_785_ = v_a_779_;
v_isShared_786_ = v_isSharedCheck_836_;
goto v_resetjp_784_;
}
else
{
lean_inc(v_val_783_);
lean_dec(v_a_779_);
v___x_785_ = lean_box(0);
v_isShared_786_ = v_isSharedCheck_836_;
goto v_resetjp_784_;
}
v_resetjp_784_:
{
lean_object* v_fvarId_787_; lean_object* v_binderName_788_; lean_object* v_type_789_; lean_object* v___x_790_; uint8_t v___x_791_; 
v_fvarId_787_ = lean_ctor_get(v_val_783_, 0);
v_binderName_788_ = lean_ctor_get(v_val_783_, 1);
v_type_789_ = lean_ctor_get(v_val_783_, 3);
lean_inc_ref(v_abstract_770_);
lean_inc(v_fvarId_787_);
v___x_790_ = lean_apply_1(v_abstract_770_, v_fvarId_787_);
v___x_791_ = lean_unbox(v___x_790_);
if (v___x_791_ == 0)
{
lean_object* v___x_792_; 
lean_del_object(v___x_781_);
lean_inc(v_val_783_);
v___x_792_ = l_Lean_Compiler_LCNF_Closure_collectFunDecl(v_val_783_, v___y_755_, v___y_756_, v___y_757_, v___y_758_, v___y_759_, v___y_760_);
if (lean_obj_tag(v___x_792_) == 0)
{
lean_object* v___x_794_; uint8_t v_isShared_795_; uint8_t v_isSharedCheck_816_; 
v_isSharedCheck_816_ = !lean_is_exclusive(v___x_792_);
if (v_isSharedCheck_816_ == 0)
{
lean_object* v_unused_817_; 
v_unused_817_ = lean_ctor_get(v___x_792_, 0);
lean_dec(v_unused_817_);
v___x_794_ = v___x_792_;
v_isShared_795_ = v_isSharedCheck_816_;
goto v_resetjp_793_;
}
else
{
lean_dec(v___x_792_);
v___x_794_ = lean_box(0);
v_isShared_795_ = v_isSharedCheck_816_;
goto v_resetjp_793_;
}
v_resetjp_793_:
{
lean_object* v___x_796_; lean_object* v_visited_797_; lean_object* v_params_798_; lean_object* v_decls_799_; lean_object* v___x_801_; uint8_t v_isShared_802_; uint8_t v_isSharedCheck_815_; 
v___x_796_ = lean_st_ref_take(v___y_756_);
v_visited_797_ = lean_ctor_get(v___x_796_, 0);
v_params_798_ = lean_ctor_get(v___x_796_, 1);
v_decls_799_ = lean_ctor_get(v___x_796_, 2);
v_isSharedCheck_815_ = !lean_is_exclusive(v___x_796_);
if (v_isSharedCheck_815_ == 0)
{
v___x_801_ = v___x_796_;
v_isShared_802_ = v_isSharedCheck_815_;
goto v_resetjp_800_;
}
else
{
lean_inc(v_decls_799_);
lean_inc(v_params_798_);
lean_inc(v_visited_797_);
lean_dec(v___x_796_);
v___x_801_ = lean_box(0);
v_isShared_802_ = v_isSharedCheck_815_;
goto v_resetjp_800_;
}
v_resetjp_800_:
{
lean_object* v___x_803_; lean_object* v___x_805_; 
v___x_803_ = lean_box(0);
if (v_isShared_786_ == 0)
{
v___x_805_ = v___x_785_;
goto v_reusejp_804_;
}
else
{
lean_object* v_reuseFailAlloc_814_; 
v_reuseFailAlloc_814_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_814_, 0, v_val_783_);
v___x_805_ = v_reuseFailAlloc_814_;
goto v_reusejp_804_;
}
v_reusejp_804_:
{
lean_object* v___x_806_; lean_object* v___x_808_; 
v___x_806_ = lean_array_push(v_decls_799_, v___x_805_);
if (v_isShared_802_ == 0)
{
lean_ctor_set(v___x_801_, 2, v___x_806_);
v___x_808_ = v___x_801_;
goto v_reusejp_807_;
}
else
{
lean_object* v_reuseFailAlloc_813_; 
v_reuseFailAlloc_813_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_813_, 0, v_visited_797_);
lean_ctor_set(v_reuseFailAlloc_813_, 1, v_params_798_);
lean_ctor_set(v_reuseFailAlloc_813_, 2, v___x_806_);
v___x_808_ = v_reuseFailAlloc_813_;
goto v_reusejp_807_;
}
v_reusejp_807_:
{
lean_object* v___x_809_; lean_object* v___x_811_; 
v___x_809_ = lean_st_ref_put(v___y_756_, v___x_808_);
if (v_isShared_795_ == 0)
{
lean_ctor_set(v___x_794_, 0, v___x_803_);
v___x_811_ = v___x_794_;
goto v_reusejp_810_;
}
else
{
lean_object* v_reuseFailAlloc_812_; 
v_reuseFailAlloc_812_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_812_, 0, v___x_803_);
v___x_811_ = v_reuseFailAlloc_812_;
goto v_reusejp_810_;
}
v_reusejp_810_:
{
return v___x_811_;
}
}
}
}
}
}
else
{
lean_del_object(v___x_785_);
lean_dec(v_val_783_);
return v___x_792_;
}
}
else
{
lean_object* v___x_818_; lean_object* v_visited_819_; lean_object* v_params_820_; lean_object* v_decls_821_; lean_object* v___x_823_; uint8_t v_isShared_824_; uint8_t v_isSharedCheck_835_; 
lean_inc_ref(v_type_789_);
lean_inc(v_binderName_788_);
lean_inc(v_fvarId_787_);
lean_del_object(v___x_785_);
lean_dec(v_val_783_);
v___x_818_ = lean_st_ref_take(v___y_756_);
v_visited_819_ = lean_ctor_get(v___x_818_, 0);
v_params_820_ = lean_ctor_get(v___x_818_, 1);
v_decls_821_ = lean_ctor_get(v___x_818_, 2);
v_isSharedCheck_835_ = !lean_is_exclusive(v___x_818_);
if (v_isSharedCheck_835_ == 0)
{
v___x_823_ = v___x_818_;
v_isShared_824_ = v_isSharedCheck_835_;
goto v_resetjp_822_;
}
else
{
lean_inc(v_decls_821_);
lean_inc(v_params_820_);
lean_inc(v_visited_819_);
lean_dec(v___x_818_);
v___x_823_ = lean_box(0);
v_isShared_824_ = v_isSharedCheck_835_;
goto v_resetjp_822_;
}
v_resetjp_822_:
{
lean_object* v___x_825_; lean_object* v___x_826_; lean_object* v___x_827_; lean_object* v___x_829_; 
v___x_825_ = lean_box(0);
v___x_826_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_826_, 0, v_fvarId_787_);
lean_ctor_set(v___x_826_, 1, v_binderName_788_);
lean_ctor_set(v___x_826_, 2, v_type_789_);
lean_ctor_set_uint8(v___x_826_, sizeof(void*)*3, v___x_764_);
v___x_827_ = lean_array_push(v_params_820_, v___x_826_);
if (v_isShared_824_ == 0)
{
lean_ctor_set(v___x_823_, 1, v___x_827_);
v___x_829_ = v___x_823_;
goto v_reusejp_828_;
}
else
{
lean_object* v_reuseFailAlloc_834_; 
v_reuseFailAlloc_834_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_834_, 0, v_visited_819_);
lean_ctor_set(v_reuseFailAlloc_834_, 1, v___x_827_);
lean_ctor_set(v_reuseFailAlloc_834_, 2, v_decls_821_);
v___x_829_ = v_reuseFailAlloc_834_;
goto v_reusejp_828_;
}
v_reusejp_828_:
{
lean_object* v___x_830_; lean_object* v___x_832_; 
v___x_830_ = lean_st_ref_put(v___y_756_, v___x_829_);
if (v_isShared_782_ == 0)
{
lean_ctor_set(v___x_781_, 0, v___x_825_);
v___x_832_ = v___x_781_;
goto v_reusejp_831_;
}
else
{
lean_object* v_reuseFailAlloc_833_; 
v_reuseFailAlloc_833_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_833_, 0, v___x_825_);
v___x_832_ = v_reuseFailAlloc_833_;
goto v_reusejp_831_;
}
v_reusejp_831_:
{
return v___x_832_;
}
}
}
}
}
}
else
{
lean_object* v___x_837_; 
lean_del_object(v___x_781_);
lean_dec(v_a_779_);
v___x_837_ = l_Lean_Compiler_LCNF_findParam_x3f___redArg(v___x_777_, v_fvarId_754_, v___y_758_);
if (lean_obj_tag(v___x_837_) == 0)
{
lean_object* v_a_838_; 
v_a_838_ = lean_ctor_get(v___x_837_, 0);
lean_inc(v_a_838_);
lean_dec_ref_known(v___x_837_, 1);
if (lean_obj_tag(v_a_838_) == 1)
{
lean_object* v_val_839_; lean_object* v_type_840_; lean_object* v___x_841_; 
lean_dec(v_fvarId_754_);
v_val_839_ = lean_ctor_get(v_a_838_, 0);
lean_inc(v_val_839_);
lean_dec_ref_known(v_a_838_, 1);
v_type_840_ = lean_ctor_get(v_val_839_, 2);
lean_inc_ref(v_type_840_);
v___x_841_ = l_Lean_Compiler_LCNF_Closure_collectType(v_type_840_, v___y_755_, v___y_756_, v___y_757_, v___y_758_, v___y_759_, v___y_760_);
if (lean_obj_tag(v___x_841_) == 0)
{
lean_object* v___x_843_; uint8_t v_isShared_844_; uint8_t v_isSharedCheck_862_; 
v_isSharedCheck_862_ = !lean_is_exclusive(v___x_841_);
if (v_isSharedCheck_862_ == 0)
{
lean_object* v_unused_863_; 
v_unused_863_ = lean_ctor_get(v___x_841_, 0);
lean_dec(v_unused_863_);
v___x_843_ = v___x_841_;
v_isShared_844_ = v_isSharedCheck_862_;
goto v_resetjp_842_;
}
else
{
lean_dec(v___x_841_);
v___x_843_ = lean_box(0);
v_isShared_844_ = v_isSharedCheck_862_;
goto v_resetjp_842_;
}
v_resetjp_842_:
{
lean_object* v___x_845_; lean_object* v_visited_846_; lean_object* v_params_847_; lean_object* v_decls_848_; lean_object* v___x_850_; uint8_t v_isShared_851_; uint8_t v_isSharedCheck_861_; 
v___x_845_ = lean_st_ref_take(v___y_756_);
v_visited_846_ = lean_ctor_get(v___x_845_, 0);
v_params_847_ = lean_ctor_get(v___x_845_, 1);
v_decls_848_ = lean_ctor_get(v___x_845_, 2);
v_isSharedCheck_861_ = !lean_is_exclusive(v___x_845_);
if (v_isSharedCheck_861_ == 0)
{
v___x_850_ = v___x_845_;
v_isShared_851_ = v_isSharedCheck_861_;
goto v_resetjp_849_;
}
else
{
lean_inc(v_decls_848_);
lean_inc(v_params_847_);
lean_inc(v_visited_846_);
lean_dec(v___x_845_);
v___x_850_ = lean_box(0);
v_isShared_851_ = v_isSharedCheck_861_;
goto v_resetjp_849_;
}
v_resetjp_849_:
{
lean_object* v___x_852_; lean_object* v___x_853_; lean_object* v___x_855_; 
v___x_852_ = lean_box(0);
v___x_853_ = lean_array_push(v_params_847_, v_val_839_);
if (v_isShared_851_ == 0)
{
lean_ctor_set(v___x_850_, 1, v___x_853_);
v___x_855_ = v___x_850_;
goto v_reusejp_854_;
}
else
{
lean_object* v_reuseFailAlloc_860_; 
v_reuseFailAlloc_860_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_860_, 0, v_visited_846_);
lean_ctor_set(v_reuseFailAlloc_860_, 1, v___x_853_);
lean_ctor_set(v_reuseFailAlloc_860_, 2, v_decls_848_);
v___x_855_ = v_reuseFailAlloc_860_;
goto v_reusejp_854_;
}
v_reusejp_854_:
{
lean_object* v___x_856_; lean_object* v___x_858_; 
v___x_856_ = lean_st_ref_put(v___y_756_, v___x_855_);
if (v_isShared_844_ == 0)
{
lean_ctor_set(v___x_843_, 0, v___x_852_);
v___x_858_ = v___x_843_;
goto v_reusejp_857_;
}
else
{
lean_object* v_reuseFailAlloc_859_; 
v_reuseFailAlloc_859_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_859_, 0, v___x_852_);
v___x_858_ = v_reuseFailAlloc_859_;
goto v_reusejp_857_;
}
v_reusejp_857_:
{
return v___x_858_;
}
}
}
}
}
else
{
lean_dec(v_val_839_);
return v___x_841_;
}
}
else
{
lean_object* v___x_864_; 
lean_dec(v_a_838_);
v___x_864_ = l_Lean_Compiler_LCNF_findLetDecl_x3f___redArg(v___x_777_, v_fvarId_754_, v___y_758_);
lean_dec(v_fvarId_754_);
if (lean_obj_tag(v___x_864_) == 0)
{
lean_object* v_a_865_; 
v_a_865_ = lean_ctor_get(v___x_864_, 0);
lean_inc(v_a_865_);
lean_dec_ref_known(v___x_864_, 1);
if (lean_obj_tag(v_a_865_) == 1)
{
lean_object* v_val_866_; lean_object* v___x_868_; uint8_t v_isShared_869_; uint8_t v_isSharedCheck_926_; 
v_val_866_ = lean_ctor_get(v_a_865_, 0);
v_isSharedCheck_926_ = !lean_is_exclusive(v_a_865_);
if (v_isSharedCheck_926_ == 0)
{
v___x_868_ = v_a_865_;
v_isShared_869_ = v_isSharedCheck_926_;
goto v_resetjp_867_;
}
else
{
lean_inc(v_val_866_);
lean_dec(v_a_865_);
v___x_868_ = lean_box(0);
v_isShared_869_ = v_isSharedCheck_926_;
goto v_resetjp_867_;
}
v_resetjp_867_:
{
lean_object* v_fvarId_870_; lean_object* v_binderName_871_; lean_object* v_type_872_; lean_object* v_value_873_; lean_object* v___x_874_; 
v_fvarId_870_ = lean_ctor_get(v_val_866_, 0);
v_binderName_871_ = lean_ctor_get(v_val_866_, 1);
v_type_872_ = lean_ctor_get(v_val_866_, 2);
v_value_873_ = lean_ctor_get(v_val_866_, 3);
lean_inc_ref(v_type_872_);
v___x_874_ = l_Lean_Compiler_LCNF_Closure_collectType(v_type_872_, v___y_755_, v___y_756_, v___y_757_, v___y_758_, v___y_759_, v___y_760_);
if (lean_obj_tag(v___x_874_) == 0)
{
lean_object* v___x_876_; uint8_t v_isShared_877_; uint8_t v_isSharedCheck_924_; 
v_isSharedCheck_924_ = !lean_is_exclusive(v___x_874_);
if (v_isSharedCheck_924_ == 0)
{
lean_object* v_unused_925_; 
v_unused_925_ = lean_ctor_get(v___x_874_, 0);
lean_dec(v_unused_925_);
v___x_876_ = v___x_874_;
v_isShared_877_ = v_isSharedCheck_924_;
goto v_resetjp_875_;
}
else
{
lean_dec(v___x_874_);
v___x_876_ = lean_box(0);
v_isShared_877_ = v_isSharedCheck_924_;
goto v_resetjp_875_;
}
v_resetjp_875_:
{
lean_object* v___x_878_; uint8_t v___x_879_; 
lean_inc_ref(v_abstract_770_);
lean_inc(v_fvarId_870_);
v___x_878_ = lean_apply_1(v_abstract_770_, v_fvarId_870_);
v___x_879_ = lean_unbox(v___x_878_);
if (v___x_879_ == 0)
{
lean_object* v___x_880_; 
lean_del_object(v___x_876_);
lean_inc(v_value_873_);
v___x_880_ = l_Lean_Compiler_LCNF_Closure_collectLetValue(v_value_873_, v___y_755_, v___y_756_, v___y_757_, v___y_758_, v___y_759_, v___y_760_);
if (lean_obj_tag(v___x_880_) == 0)
{
lean_object* v___x_882_; uint8_t v_isShared_883_; uint8_t v_isSharedCheck_904_; 
v_isSharedCheck_904_ = !lean_is_exclusive(v___x_880_);
if (v_isSharedCheck_904_ == 0)
{
lean_object* v_unused_905_; 
v_unused_905_ = lean_ctor_get(v___x_880_, 0);
lean_dec(v_unused_905_);
v___x_882_ = v___x_880_;
v_isShared_883_ = v_isSharedCheck_904_;
goto v_resetjp_881_;
}
else
{
lean_dec(v___x_880_);
v___x_882_ = lean_box(0);
v_isShared_883_ = v_isSharedCheck_904_;
goto v_resetjp_881_;
}
v_resetjp_881_:
{
lean_object* v___x_884_; lean_object* v_visited_885_; lean_object* v_params_886_; lean_object* v_decls_887_; lean_object* v___x_889_; uint8_t v_isShared_890_; uint8_t v_isSharedCheck_903_; 
v___x_884_ = lean_st_ref_take(v___y_756_);
v_visited_885_ = lean_ctor_get(v___x_884_, 0);
v_params_886_ = lean_ctor_get(v___x_884_, 1);
v_decls_887_ = lean_ctor_get(v___x_884_, 2);
v_isSharedCheck_903_ = !lean_is_exclusive(v___x_884_);
if (v_isSharedCheck_903_ == 0)
{
v___x_889_ = v___x_884_;
v_isShared_890_ = v_isSharedCheck_903_;
goto v_resetjp_888_;
}
else
{
lean_inc(v_decls_887_);
lean_inc(v_params_886_);
lean_inc(v_visited_885_);
lean_dec(v___x_884_);
v___x_889_ = lean_box(0);
v_isShared_890_ = v_isSharedCheck_903_;
goto v_resetjp_888_;
}
v_resetjp_888_:
{
lean_object* v___x_891_; lean_object* v___x_893_; 
v___x_891_ = lean_box(0);
if (v_isShared_869_ == 0)
{
lean_ctor_set_tag(v___x_868_, 0);
v___x_893_ = v___x_868_;
goto v_reusejp_892_;
}
else
{
lean_object* v_reuseFailAlloc_902_; 
v_reuseFailAlloc_902_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_902_, 0, v_val_866_);
v___x_893_ = v_reuseFailAlloc_902_;
goto v_reusejp_892_;
}
v_reusejp_892_:
{
lean_object* v___x_894_; lean_object* v___x_896_; 
v___x_894_ = lean_array_push(v_decls_887_, v___x_893_);
if (v_isShared_890_ == 0)
{
lean_ctor_set(v___x_889_, 2, v___x_894_);
v___x_896_ = v___x_889_;
goto v_reusejp_895_;
}
else
{
lean_object* v_reuseFailAlloc_901_; 
v_reuseFailAlloc_901_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_901_, 0, v_visited_885_);
lean_ctor_set(v_reuseFailAlloc_901_, 1, v_params_886_);
lean_ctor_set(v_reuseFailAlloc_901_, 2, v___x_894_);
v___x_896_ = v_reuseFailAlloc_901_;
goto v_reusejp_895_;
}
v_reusejp_895_:
{
lean_object* v___x_897_; lean_object* v___x_899_; 
v___x_897_ = lean_st_ref_put(v___y_756_, v___x_896_);
if (v_isShared_883_ == 0)
{
lean_ctor_set(v___x_882_, 0, v___x_891_);
v___x_899_ = v___x_882_;
goto v_reusejp_898_;
}
else
{
lean_object* v_reuseFailAlloc_900_; 
v_reuseFailAlloc_900_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_900_, 0, v___x_891_);
v___x_899_ = v_reuseFailAlloc_900_;
goto v_reusejp_898_;
}
v_reusejp_898_:
{
return v___x_899_;
}
}
}
}
}
}
else
{
lean_del_object(v___x_868_);
lean_dec(v_val_866_);
return v___x_880_;
}
}
else
{
lean_object* v___x_906_; lean_object* v_visited_907_; lean_object* v_params_908_; lean_object* v_decls_909_; lean_object* v___x_911_; uint8_t v_isShared_912_; uint8_t v_isSharedCheck_923_; 
lean_inc_ref(v_type_872_);
lean_inc(v_binderName_871_);
lean_inc(v_fvarId_870_);
lean_del_object(v___x_868_);
lean_dec(v_val_866_);
v___x_906_ = lean_st_ref_take(v___y_756_);
v_visited_907_ = lean_ctor_get(v___x_906_, 0);
v_params_908_ = lean_ctor_get(v___x_906_, 1);
v_decls_909_ = lean_ctor_get(v___x_906_, 2);
v_isSharedCheck_923_ = !lean_is_exclusive(v___x_906_);
if (v_isSharedCheck_923_ == 0)
{
v___x_911_ = v___x_906_;
v_isShared_912_ = v_isSharedCheck_923_;
goto v_resetjp_910_;
}
else
{
lean_inc(v_decls_909_);
lean_inc(v_params_908_);
lean_inc(v_visited_907_);
lean_dec(v___x_906_);
v___x_911_ = lean_box(0);
v_isShared_912_ = v_isSharedCheck_923_;
goto v_resetjp_910_;
}
v_resetjp_910_:
{
lean_object* v___x_913_; lean_object* v___x_914_; lean_object* v___x_915_; lean_object* v___x_917_; 
v___x_913_ = lean_box(0);
v___x_914_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_914_, 0, v_fvarId_870_);
lean_ctor_set(v___x_914_, 1, v_binderName_871_);
lean_ctor_set(v___x_914_, 2, v_type_872_);
lean_ctor_set_uint8(v___x_914_, sizeof(void*)*3, v___x_764_);
v___x_915_ = lean_array_push(v_params_908_, v___x_914_);
if (v_isShared_912_ == 0)
{
lean_ctor_set(v___x_911_, 1, v___x_915_);
v___x_917_ = v___x_911_;
goto v_reusejp_916_;
}
else
{
lean_object* v_reuseFailAlloc_922_; 
v_reuseFailAlloc_922_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_922_, 0, v_visited_907_);
lean_ctor_set(v_reuseFailAlloc_922_, 1, v___x_915_);
lean_ctor_set(v_reuseFailAlloc_922_, 2, v_decls_909_);
v___x_917_ = v_reuseFailAlloc_922_;
goto v_reusejp_916_;
}
v_reusejp_916_:
{
lean_object* v___x_918_; lean_object* v___x_920_; 
v___x_918_ = lean_st_ref_put(v___y_756_, v___x_917_);
if (v_isShared_877_ == 0)
{
lean_ctor_set(v___x_876_, 0, v___x_913_);
v___x_920_ = v___x_876_;
goto v_reusejp_919_;
}
else
{
lean_object* v_reuseFailAlloc_921_; 
v_reuseFailAlloc_921_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_921_, 0, v___x_913_);
v___x_920_ = v_reuseFailAlloc_921_;
goto v_reusejp_919_;
}
v_reusejp_919_:
{
return v___x_920_;
}
}
}
}
}
}
else
{
lean_del_object(v___x_868_);
lean_dec(v_val_866_);
return v___x_874_;
}
}
}
else
{
lean_object* v___x_927_; lean_object* v___x_928_; 
lean_dec(v_a_865_);
v___x_927_ = lean_obj_once(&l_Lean_Compiler_LCNF_Closure_collectFVar___closed__3, &l_Lean_Compiler_LCNF_Closure_collectFVar___closed__3_once, _init_l_Lean_Compiler_LCNF_Closure_collectFVar___closed__3);
v___x_928_ = l_panic___at___00Lean_Compiler_LCNF_Closure_collectFVar_spec__4(v___x_927_, v___y_755_, v___y_756_, v___y_757_, v___y_758_, v___y_759_, v___y_760_);
return v___x_928_;
}
}
else
{
lean_object* v_a_929_; lean_object* v___x_931_; uint8_t v_isShared_932_; uint8_t v_isSharedCheck_936_; 
v_a_929_ = lean_ctor_get(v___x_864_, 0);
v_isSharedCheck_936_ = !lean_is_exclusive(v___x_864_);
if (v_isSharedCheck_936_ == 0)
{
v___x_931_ = v___x_864_;
v_isShared_932_ = v_isSharedCheck_936_;
goto v_resetjp_930_;
}
else
{
lean_inc(v_a_929_);
lean_dec(v___x_864_);
v___x_931_ = lean_box(0);
v_isShared_932_ = v_isSharedCheck_936_;
goto v_resetjp_930_;
}
v_resetjp_930_:
{
lean_object* v___x_934_; 
if (v_isShared_932_ == 0)
{
v___x_934_ = v___x_931_;
goto v_reusejp_933_;
}
else
{
lean_object* v_reuseFailAlloc_935_; 
v_reuseFailAlloc_935_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_935_, 0, v_a_929_);
v___x_934_ = v_reuseFailAlloc_935_;
goto v_reusejp_933_;
}
v_reusejp_933_:
{
return v___x_934_;
}
}
}
}
}
else
{
lean_object* v_a_937_; lean_object* v___x_939_; uint8_t v_isShared_940_; uint8_t v_isSharedCheck_944_; 
lean_dec(v_fvarId_754_);
v_a_937_ = lean_ctor_get(v___x_837_, 0);
v_isSharedCheck_944_ = !lean_is_exclusive(v___x_837_);
if (v_isSharedCheck_944_ == 0)
{
v___x_939_ = v___x_837_;
v_isShared_940_ = v_isSharedCheck_944_;
goto v_resetjp_938_;
}
else
{
lean_inc(v_a_937_);
lean_dec(v___x_837_);
v___x_939_ = lean_box(0);
v_isShared_940_ = v_isSharedCheck_944_;
goto v_resetjp_938_;
}
v_resetjp_938_:
{
lean_object* v___x_942_; 
if (v_isShared_940_ == 0)
{
v___x_942_ = v___x_939_;
goto v_reusejp_941_;
}
else
{
lean_object* v_reuseFailAlloc_943_; 
v_reuseFailAlloc_943_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_943_, 0, v_a_937_);
v___x_942_ = v_reuseFailAlloc_943_;
goto v_reusejp_941_;
}
v_reusejp_941_:
{
return v___x_942_;
}
}
}
}
}
}
else
{
lean_object* v_a_946_; lean_object* v___x_948_; uint8_t v_isShared_949_; uint8_t v_isSharedCheck_953_; 
lean_dec(v_fvarId_754_);
v_a_946_ = lean_ctor_get(v___x_778_, 0);
v_isSharedCheck_953_ = !lean_is_exclusive(v___x_778_);
if (v_isSharedCheck_953_ == 0)
{
v___x_948_ = v___x_778_;
v_isShared_949_ = v_isSharedCheck_953_;
goto v_resetjp_947_;
}
else
{
lean_inc(v_a_946_);
lean_dec(v___x_778_);
v___x_948_ = lean_box(0);
v_isShared_949_ = v_isSharedCheck_953_;
goto v_resetjp_947_;
}
v_resetjp_947_:
{
lean_object* v___x_951_; 
if (v_isShared_949_ == 0)
{
v___x_951_ = v___x_948_;
goto v_reusejp_950_;
}
else
{
lean_object* v_reuseFailAlloc_952_; 
v_reuseFailAlloc_952_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_952_, 0, v_a_946_);
v___x_951_ = v_reuseFailAlloc_952_;
goto v_reusejp_950_;
}
v_reusejp_950_:
{
return v___x_951_;
}
}
}
}
}
}
else
{
lean_dec(v_fvarId_754_);
return v___x_765_;
}
}
else
{
lean_object* v___x_956_; lean_object* v___x_957_; 
lean_dec(v_fvarId_754_);
v___x_956_ = lean_box(0);
v___x_957_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_957_, 0, v___x_956_);
return v___x_957_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Closure_collectType___lam__0(lean_object* v_e_958_, lean_object* v___y_959_, lean_object* v___y_960_, lean_object* v___y_961_, lean_object* v___y_962_, lean_object* v___y_963_, lean_object* v___y_964_){
_start:
{
lean_object* v___x_966_; lean_object* v___x_967_; 
v___x_966_ = l_Lean_Expr_fvarId_x21(v_e_958_);
v___x_967_ = l_Lean_Compiler_LCNF_Closure_collectFVar(v___x_966_, v___y_959_, v___y_960_, v___y_961_, v___y_962_, v___y_963_, v___y_964_);
return v___x_967_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Closure_collectArg___boxed(lean_object* v_arg_968_, lean_object* v___y_969_, lean_object* v___y_970_, lean_object* v___y_971_, lean_object* v___y_972_, lean_object* v___y_973_, lean_object* v___y_974_, lean_object* v___y_975_){
_start:
{
lean_object* v_res_976_; 
v_res_976_ = l_Lean_Compiler_LCNF_Closure_collectArg(v_arg_968_, v___y_969_, v___y_970_, v___y_971_, v___y_972_, v___y_973_, v___y_974_);
lean_dec(v___y_974_);
lean_dec_ref(v___y_973_);
lean_dec(v___y_972_);
lean_dec_ref(v___y_971_);
lean_dec(v___y_970_);
lean_dec_ref(v___y_969_);
return v_res_976_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Closure_collectType___boxed(lean_object* v_type_977_, lean_object* v___y_978_, lean_object* v___y_979_, lean_object* v___y_980_, lean_object* v___y_981_, lean_object* v___y_982_, lean_object* v___y_983_, lean_object* v___y_984_){
_start:
{
lean_object* v_res_985_; 
v_res_985_ = l_Lean_Compiler_LCNF_Closure_collectType(v_type_977_, v___y_978_, v___y_979_, v___y_980_, v___y_981_, v___y_982_, v___y_983_);
lean_dec(v___y_983_);
lean_dec_ref(v___y_982_);
lean_dec(v___y_981_);
lean_dec_ref(v___y_980_);
lean_dec(v___y_979_);
lean_dec_ref(v___y_978_);
return v_res_985_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Closure_collectFunDecl___boxed(lean_object* v_decl_986_, lean_object* v___y_987_, lean_object* v___y_988_, lean_object* v___y_989_, lean_object* v___y_990_, lean_object* v___y_991_, lean_object* v___y_992_, lean_object* v___y_993_){
_start:
{
lean_object* v_res_994_; 
v_res_994_ = l_Lean_Compiler_LCNF_Closure_collectFunDecl(v_decl_986_, v___y_987_, v___y_988_, v___y_989_, v___y_990_, v___y_991_, v___y_992_);
lean_dec(v___y_992_);
lean_dec_ref(v___y_991_);
lean_dec(v___y_990_);
lean_dec_ref(v___y_989_);
lean_dec(v___y_988_);
lean_dec_ref(v___y_987_);
return v_res_994_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Closure_collectLetValue_spec__6___boxed(lean_object* v_as_995_, lean_object* v_i_996_, lean_object* v_stop_997_, lean_object* v_b_998_, lean_object* v___y_999_, lean_object* v___y_1000_, lean_object* v___y_1001_, lean_object* v___y_1002_, lean_object* v___y_1003_, lean_object* v___y_1004_, lean_object* v___y_1005_){
_start:
{
size_t v_i_boxed_1006_; size_t v_stop_boxed_1007_; lean_object* v_res_1008_; 
v_i_boxed_1006_ = lean_unbox_usize(v_i_996_);
lean_dec(v_i_996_);
v_stop_boxed_1007_ = lean_unbox_usize(v_stop_997_);
lean_dec(v_stop_997_);
v_res_1008_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Closure_collectLetValue_spec__6(v_as_995_, v_i_boxed_1006_, v_stop_boxed_1007_, v_b_998_, v___y_999_, v___y_1000_, v___y_1001_, v___y_1002_, v___y_1003_, v___y_1004_);
lean_dec(v___y_1004_);
lean_dec_ref(v___y_1003_);
lean_dec(v___y_1002_);
lean_dec_ref(v___y_1001_);
lean_dec(v___y_1000_);
lean_dec_ref(v___y_999_);
lean_dec_ref(v_as_995_);
return v_res_1008_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Closure_collectParams_spec__0___boxed(lean_object* v_as_1009_, lean_object* v_i_1010_, lean_object* v_stop_1011_, lean_object* v_b_1012_, lean_object* v___y_1013_, lean_object* v___y_1014_, lean_object* v___y_1015_, lean_object* v___y_1016_, lean_object* v___y_1017_, lean_object* v___y_1018_, lean_object* v___y_1019_){
_start:
{
size_t v_i_boxed_1020_; size_t v_stop_boxed_1021_; lean_object* v_res_1022_; 
v_i_boxed_1020_ = lean_unbox_usize(v_i_1010_);
lean_dec(v_i_1010_);
v_stop_boxed_1021_ = lean_unbox_usize(v_stop_1011_);
lean_dec(v_stop_1011_);
v_res_1022_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Closure_collectParams_spec__0(v_as_1009_, v_i_boxed_1020_, v_stop_boxed_1021_, v_b_1012_, v___y_1013_, v___y_1014_, v___y_1015_, v___y_1016_, v___y_1017_, v___y_1018_);
lean_dec(v___y_1018_);
lean_dec_ref(v___y_1017_);
lean_dec(v___y_1016_);
lean_dec_ref(v___y_1015_);
lean_dec(v___y_1014_);
lean_dec_ref(v___y_1013_);
lean_dec_ref(v_as_1009_);
return v_res_1022_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Closure_collectParams___boxed(lean_object* v_params_1023_, lean_object* v___y_1024_, lean_object* v___y_1025_, lean_object* v___y_1026_, lean_object* v___y_1027_, lean_object* v___y_1028_, lean_object* v___y_1029_, lean_object* v___y_1030_){
_start:
{
lean_object* v_res_1031_; 
v_res_1031_ = l_Lean_Compiler_LCNF_Closure_collectParams(v_params_1023_, v___y_1024_, v___y_1025_, v___y_1026_, v___y_1027_, v___y_1028_, v___y_1029_);
lean_dec(v___y_1029_);
lean_dec_ref(v___y_1028_);
lean_dec(v___y_1027_);
lean_dec_ref(v___y_1026_);
lean_dec(v___y_1025_);
lean_dec_ref(v___y_1024_);
lean_dec_ref(v_params_1023_);
return v_res_1031_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Closure_collectCode_spec__10___boxed(lean_object* v_as_1032_, lean_object* v_i_1033_, lean_object* v_stop_1034_, lean_object* v_b_1035_, lean_object* v___y_1036_, lean_object* v___y_1037_, lean_object* v___y_1038_, lean_object* v___y_1039_, lean_object* v___y_1040_, lean_object* v___y_1041_, lean_object* v___y_1042_){
_start:
{
size_t v_i_boxed_1043_; size_t v_stop_boxed_1044_; lean_object* v_res_1045_; 
v_i_boxed_1043_ = lean_unbox_usize(v_i_1033_);
lean_dec(v_i_1033_);
v_stop_boxed_1044_ = lean_unbox_usize(v_stop_1034_);
lean_dec(v_stop_1034_);
v_res_1045_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Closure_collectCode_spec__10(v_as_1032_, v_i_boxed_1043_, v_stop_boxed_1044_, v_b_1035_, v___y_1036_, v___y_1037_, v___y_1038_, v___y_1039_, v___y_1040_, v___y_1041_);
lean_dec(v___y_1041_);
lean_dec_ref(v___y_1040_);
lean_dec(v___y_1039_);
lean_dec_ref(v___y_1038_);
lean_dec(v___y_1037_);
lean_dec_ref(v___y_1036_);
lean_dec_ref(v_as_1032_);
return v_res_1045_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Closure_collectLetValue___boxed(lean_object* v_e_1046_, lean_object* v___y_1047_, lean_object* v___y_1048_, lean_object* v___y_1049_, lean_object* v___y_1050_, lean_object* v___y_1051_, lean_object* v___y_1052_, lean_object* v___y_1053_){
_start:
{
lean_object* v_res_1054_; 
v_res_1054_ = l_Lean_Compiler_LCNF_Closure_collectLetValue(v_e_1046_, v___y_1047_, v___y_1048_, v___y_1049_, v___y_1050_, v___y_1051_, v___y_1052_);
lean_dec(v___y_1052_);
lean_dec_ref(v___y_1051_);
lean_dec(v___y_1050_);
lean_dec_ref(v___y_1049_);
lean_dec(v___y_1048_);
lean_dec_ref(v___y_1047_);
return v_res_1054_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Closure_collectCode___boxed(lean_object* v_c_1055_, lean_object* v___y_1056_, lean_object* v___y_1057_, lean_object* v___y_1058_, lean_object* v___y_1059_, lean_object* v___y_1060_, lean_object* v___y_1061_, lean_object* v___y_1062_){
_start:
{
lean_object* v_res_1063_; 
v_res_1063_ = l_Lean_Compiler_LCNF_Closure_collectCode(v_c_1055_, v___y_1056_, v___y_1057_, v___y_1058_, v___y_1059_, v___y_1060_, v___y_1061_);
lean_dec(v___y_1061_);
lean_dec_ref(v___y_1060_);
lean_dec(v___y_1059_);
lean_dec_ref(v___y_1058_);
lean_dec(v___y_1057_);
lean_dec_ref(v___y_1056_);
return v_res_1063_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Closure_collectFVar___boxed(lean_object* v_fvarId_1064_, lean_object* v___y_1065_, lean_object* v___y_1066_, lean_object* v___y_1067_, lean_object* v___y_1068_, lean_object* v___y_1069_, lean_object* v___y_1070_, lean_object* v___y_1071_){
_start:
{
lean_object* v_res_1072_; 
v_res_1072_ = l_Lean_Compiler_LCNF_Closure_collectFVar(v_fvarId_1064_, v___y_1065_, v___y_1066_, v___y_1067_, v___y_1068_, v___y_1069_, v___y_1070_);
lean_dec(v___y_1070_);
lean_dec_ref(v___y_1069_);
lean_dec(v___y_1068_);
lean_dec_ref(v___y_1067_);
lean_dec(v___y_1066_);
lean_dec_ref(v___y_1065_);
return v_res_1072_;
}
}
LEAN_EXPORT lean_object* l_Lean_ForEachExprWhere_visited___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4_spec__9(lean_object* v_e_1073_, lean_object* v___y_1074_, lean_object* v___y_1075_, lean_object* v___y_1076_, lean_object* v___y_1077_, lean_object* v___y_1078_, lean_object* v___y_1079_, lean_object* v___y_1080_){
_start:
{
lean_object* v___x_1082_; 
v___x_1082_ = l_Lean_ForEachExprWhere_visited___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4_spec__9___redArg(v_e_1073_, v___y_1074_);
return v___x_1082_;
}
}
LEAN_EXPORT lean_object* l_Lean_ForEachExprWhere_visited___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4_spec__9___boxed(lean_object* v_e_1083_, lean_object* v___y_1084_, lean_object* v___y_1085_, lean_object* v___y_1086_, lean_object* v___y_1087_, lean_object* v___y_1088_, lean_object* v___y_1089_, lean_object* v___y_1090_, lean_object* v___y_1091_){
_start:
{
lean_object* v_res_1092_; 
v_res_1092_ = l_Lean_ForEachExprWhere_visited___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4_spec__9(v_e_1083_, v___y_1084_, v___y_1085_, v___y_1086_, v___y_1087_, v___y_1088_, v___y_1089_, v___y_1090_);
lean_dec(v___y_1090_);
lean_dec_ref(v___y_1089_);
lean_dec(v___y_1088_);
lean_dec_ref(v___y_1087_);
lean_dec(v___y_1086_);
lean_dec_ref(v___y_1085_);
lean_dec(v___y_1084_);
return v_res_1092_;
}
}
LEAN_EXPORT lean_object* l_Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4_spec__10(lean_object* v_e_1093_, lean_object* v___y_1094_, lean_object* v___y_1095_, lean_object* v___y_1096_, lean_object* v___y_1097_, lean_object* v___y_1098_, lean_object* v___y_1099_, lean_object* v___y_1100_){
_start:
{
lean_object* v___x_1102_; 
v___x_1102_ = l_Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4_spec__10___redArg(v_e_1093_, v___y_1094_);
return v___x_1102_;
}
}
LEAN_EXPORT lean_object* l_Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4_spec__10___boxed(lean_object* v_e_1103_, lean_object* v___y_1104_, lean_object* v___y_1105_, lean_object* v___y_1106_, lean_object* v___y_1107_, lean_object* v___y_1108_, lean_object* v___y_1109_, lean_object* v___y_1110_, lean_object* v___y_1111_){
_start:
{
lean_object* v_res_1112_; 
v_res_1112_ = l_Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4_spec__10(v_e_1103_, v___y_1104_, v___y_1105_, v___y_1106_, v___y_1107_, v___y_1108_, v___y_1109_, v___y_1110_);
lean_dec(v___y_1110_);
lean_dec_ref(v___y_1109_);
lean_dec(v___y_1108_);
lean_dec_ref(v___y_1107_);
lean_dec(v___y_1106_);
lean_dec_ref(v___y_1105_);
lean_dec(v___y_1104_);
return v_res_1112_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4_spec__10_spec__13(lean_object* v_00_u03b2_1113_, lean_object* v_m_1114_, lean_object* v_a_1115_){
_start:
{
uint8_t v___x_1116_; 
v___x_1116_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4_spec__10_spec__13___redArg(v_m_1114_, v_a_1115_);
return v___x_1116_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4_spec__10_spec__13___boxed(lean_object* v_00_u03b2_1117_, lean_object* v_m_1118_, lean_object* v_a_1119_){
_start:
{
uint8_t v_res_1120_; lean_object* v_r_1121_; 
v_res_1120_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4_spec__10_spec__13(v_00_u03b2_1117_, v_m_1118_, v_a_1119_);
lean_dec_ref(v_a_1119_);
lean_dec_ref(v_m_1118_);
v_r_1121_ = lean_box(v_res_1120_);
return v_r_1121_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4_spec__10_spec__14(lean_object* v_00_u03b2_1122_, lean_object* v_m_1123_, lean_object* v_a_1124_, lean_object* v_b_1125_){
_start:
{
lean_object* v___x_1126_; 
v___x_1126_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4_spec__10_spec__14___redArg(v_m_1123_, v_a_1124_, v_b_1125_);
return v___x_1126_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4_spec__10_spec__13_spec__14(lean_object* v_00_u03b2_1127_, lean_object* v_a_1128_, lean_object* v_x_1129_){
_start:
{
uint8_t v___x_1130_; 
v___x_1130_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4_spec__10_spec__13_spec__14___redArg(v_a_1128_, v_x_1129_);
return v___x_1130_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4_spec__10_spec__13_spec__14___boxed(lean_object* v_00_u03b2_1131_, lean_object* v_a_1132_, lean_object* v_x_1133_){
_start:
{
uint8_t v_res_1134_; lean_object* v_r_1135_; 
v_res_1134_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4_spec__10_spec__13_spec__14(v_00_u03b2_1131_, v_a_1132_, v_x_1133_);
lean_dec(v_x_1133_);
lean_dec_ref(v_a_1132_);
v_r_1135_ = lean_box(v_res_1134_);
return v_r_1135_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4_spec__10_spec__14_spec__16(lean_object* v_00_u03b2_1136_, lean_object* v_data_1137_){
_start:
{
lean_object* v___x_1138_; 
v___x_1138_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4_spec__10_spec__14_spec__16___redArg(v_data_1137_);
return v___x_1138_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4_spec__10_spec__14_spec__16_spec__17(lean_object* v_00_u03b2_1139_, lean_object* v_i_1140_, lean_object* v_source_1141_, lean_object* v_target_1142_){
_start:
{
lean_object* v___x_1143_; 
v___x_1143_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4_spec__10_spec__14_spec__16_spec__17___redArg(v_i_1140_, v_source_1141_, v_target_1142_);
return v___x_1143_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4_spec__10_spec__14_spec__16_spec__17_spec__18(lean_object* v_00_u03b2_1144_, lean_object* v_x_1145_, lean_object* v_x_1146_){
_start:
{
lean_object* v___x_1147_; 
v___x_1147_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4_spec__10_spec__14_spec__16_spec__17_spec__18___redArg(v_x_1145_, v_x_1146_);
return v___x_1147_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Closure_run_spec__1(lean_object* v_a_1148_, lean_object* v_as_1149_, size_t v_i_1150_, size_t v_stop_1151_, lean_object* v_b_1152_){
_start:
{
lean_object* v___y_1154_; uint8_t v___x_1158_; 
v___x_1158_ = lean_usize_dec_eq(v_i_1150_, v_stop_1151_);
if (v___x_1158_ == 0)
{
lean_object* v___x_1159_; lean_object* v___x_1160_; uint8_t v___x_1161_; 
v___x_1159_ = lean_array_uget_borrowed(v_as_1149_, v_i_1150_);
v___x_1160_ = l_Lean_Compiler_LCNF_CodeDecl_fvarId___redArg(v___x_1159_);
v___x_1161_ = l_Lean_FVarIdSet_contains(v_a_1148_, v___x_1160_);
lean_dec(v___x_1160_);
if (v___x_1161_ == 0)
{
lean_object* v___x_1162_; 
lean_inc(v___x_1159_);
v___x_1162_ = lean_array_push(v_b_1152_, v___x_1159_);
v___y_1154_ = v___x_1162_;
goto v___jp_1153_;
}
else
{
v___y_1154_ = v_b_1152_;
goto v___jp_1153_;
}
}
else
{
return v_b_1152_;
}
v___jp_1153_:
{
size_t v___x_1155_; size_t v___x_1156_; 
v___x_1155_ = ((size_t)1ULL);
v___x_1156_ = lean_usize_add(v_i_1150_, v___x_1155_);
v_i_1150_ = v___x_1156_;
v_b_1152_ = v___y_1154_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Closure_run_spec__1___boxed(lean_object* v_a_1163_, lean_object* v_as_1164_, lean_object* v_i_1165_, lean_object* v_stop_1166_, lean_object* v_b_1167_){
_start:
{
size_t v_i_boxed_1168_; size_t v_stop_boxed_1169_; lean_object* v_res_1170_; 
v_i_boxed_1168_ = lean_unbox_usize(v_i_1165_);
lean_dec(v_i_1165_);
v_stop_boxed_1169_ = lean_unbox_usize(v_stop_1166_);
lean_dec(v_stop_1166_);
v_res_1170_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Closure_run_spec__1(v_a_1163_, v_as_1164_, v_i_boxed_1168_, v_stop_boxed_1169_, v_b_1167_);
lean_dec_ref(v_as_1164_);
lean_dec(v_a_1163_);
return v_res_1170_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_Closure_run_spec__0___redArg(lean_object* v_as_1171_, size_t v_sz_1172_, size_t v_i_1173_, lean_object* v_b_1174_){
_start:
{
uint8_t v___x_1176_; 
v___x_1176_ = lean_usize_dec_lt(v_i_1173_, v_sz_1172_);
if (v___x_1176_ == 0)
{
lean_object* v___x_1177_; 
v___x_1177_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1177_, 0, v_b_1174_);
return v___x_1177_;
}
else
{
lean_object* v_a_1178_; lean_object* v_fvarId_1179_; lean_object* v___x_1180_; size_t v___x_1181_; size_t v___x_1182_; 
v_a_1178_ = lean_array_uget_borrowed(v_as_1171_, v_i_1173_);
v_fvarId_1179_ = lean_ctor_get(v_a_1178_, 0);
lean_inc(v_fvarId_1179_);
v___x_1180_ = l_Lean_FVarIdSet_insert(v_b_1174_, v_fvarId_1179_);
v___x_1181_ = ((size_t)1ULL);
v___x_1182_ = lean_usize_add(v_i_1173_, v___x_1181_);
v_i_1173_ = v___x_1182_;
v_b_1174_ = v___x_1180_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_Closure_run_spec__0___redArg___boxed(lean_object* v_as_1184_, lean_object* v_sz_1185_, lean_object* v_i_1186_, lean_object* v_b_1187_, lean_object* v___y_1188_){
_start:
{
size_t v_sz_boxed_1189_; size_t v_i_boxed_1190_; lean_object* v_res_1191_; 
v_sz_boxed_1189_ = lean_unbox_usize(v_sz_1185_);
lean_dec(v_sz_1185_);
v_i_boxed_1190_ = lean_unbox_usize(v_i_1186_);
lean_dec(v_i_1186_);
v_res_1191_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_Closure_run_spec__0___redArg(v_as_1184_, v_sz_boxed_1189_, v_i_boxed_1190_, v_b_1187_);
lean_dec_ref(v_as_1184_);
return v_res_1191_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Closure_run___redArg___closed__0(void){
_start:
{
lean_object* v___x_1192_; lean_object* v___x_1193_; lean_object* v___x_1194_; 
v___x_1192_ = lean_box(0);
v___x_1193_ = lean_unsigned_to_nat(16u);
v___x_1194_ = lean_mk_array(v___x_1193_, v___x_1192_);
return v___x_1194_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Closure_run___redArg___closed__1(void){
_start:
{
lean_object* v___x_1195_; lean_object* v___x_1196_; lean_object* v___x_1197_; 
v___x_1195_ = lean_obj_once(&l_Lean_Compiler_LCNF_Closure_run___redArg___closed__0, &l_Lean_Compiler_LCNF_Closure_run___redArg___closed__0_once, _init_l_Lean_Compiler_LCNF_Closure_run___redArg___closed__0);
v___x_1196_ = lean_unsigned_to_nat(0u);
v___x_1197_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1197_, 0, v___x_1196_);
lean_ctor_set(v___x_1197_, 1, v___x_1195_);
return v___x_1197_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Closure_run___redArg___closed__3(void){
_start:
{
lean_object* v___x_1200_; lean_object* v___x_1201_; lean_object* v___x_1202_; 
v___x_1200_ = ((lean_object*)(l_Lean_Compiler_LCNF_Closure_run___redArg___closed__2));
v___x_1201_ = lean_obj_once(&l_Lean_Compiler_LCNF_Closure_run___redArg___closed__1, &l_Lean_Compiler_LCNF_Closure_run___redArg___closed__1_once, _init_l_Lean_Compiler_LCNF_Closure_run___redArg___closed__1);
v___x_1202_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1202_, 0, v___x_1201_);
lean_ctor_set(v___x_1202_, 1, v___x_1200_);
lean_ctor_set(v___x_1202_, 2, v___x_1200_);
return v___x_1202_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Closure_run___redArg(lean_object* v_x_1203_, lean_object* v_inScope_1204_, lean_object* v_abstract_1205_, lean_object* v___y_1206_, lean_object* v___y_1207_, lean_object* v___y_1208_, lean_object* v___y_1209_){
_start:
{
lean_object* v___x_1211_; lean_object* v___x_1212_; lean_object* v___x_1213_; lean_object* v___x_1214_; lean_object* v___x_1215_; lean_object* v___x_1216_; 
v___x_1211_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1211_, 0, v_inScope_1204_);
lean_ctor_set(v___x_1211_, 1, v_abstract_1205_);
v___x_1212_ = lean_unsigned_to_nat(0u);
v___x_1213_ = ((lean_object*)(l_Lean_Compiler_LCNF_Closure_run___redArg___closed__2));
v___x_1214_ = lean_obj_once(&l_Lean_Compiler_LCNF_Closure_run___redArg___closed__3, &l_Lean_Compiler_LCNF_Closure_run___redArg___closed__3_once, _init_l_Lean_Compiler_LCNF_Closure_run___redArg___closed__3);
v___x_1215_ = lean_st_mk_ref(v___x_1214_);
lean_inc(v___y_1209_);
lean_inc_ref(v___y_1208_);
lean_inc(v___y_1207_);
lean_inc_ref(v___y_1206_);
lean_inc(v___x_1215_);
v___x_1216_ = lean_apply_7(v_x_1203_, v___x_1211_, v___x_1215_, v___y_1206_, v___y_1207_, v___y_1208_, v___y_1209_, lean_box(0));
if (lean_obj_tag(v___x_1216_) == 0)
{
lean_object* v_a_1217_; lean_object* v___x_1218_; lean_object* v_params_1219_; lean_object* v_decls_1220_; lean_object* v___x_1221_; size_t v_sz_1222_; size_t v___x_1223_; lean_object* v___x_1224_; 
v_a_1217_ = lean_ctor_get(v___x_1216_, 0);
lean_inc(v_a_1217_);
lean_dec_ref_known(v___x_1216_, 1);
v___x_1218_ = lean_st_ref_get(v___x_1215_);
lean_dec(v___x_1215_);
v_params_1219_ = lean_ctor_get(v___x_1218_, 1);
lean_inc_ref(v_params_1219_);
v_decls_1220_ = lean_ctor_get(v___x_1218_, 2);
lean_inc_ref(v_decls_1220_);
lean_dec(v___x_1218_);
v___x_1221_ = lean_box(1);
v_sz_1222_ = lean_array_size(v_params_1219_);
v___x_1223_ = ((size_t)0ULL);
v___x_1224_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_Closure_run_spec__0___redArg(v_params_1219_, v_sz_1222_, v___x_1223_, v___x_1221_);
if (lean_obj_tag(v___x_1224_) == 0)
{
lean_object* v_a_1225_; lean_object* v___x_1227_; uint8_t v_isShared_1228_; uint8_t v_isSharedCheck_1243_; 
v_a_1225_ = lean_ctor_get(v___x_1224_, 0);
v_isSharedCheck_1243_ = !lean_is_exclusive(v___x_1224_);
if (v_isSharedCheck_1243_ == 0)
{
v___x_1227_ = v___x_1224_;
v_isShared_1228_ = v_isSharedCheck_1243_;
goto v_resetjp_1226_;
}
else
{
lean_inc(v_a_1225_);
lean_dec(v___x_1224_);
v___x_1227_ = lean_box(0);
v_isShared_1228_ = v_isSharedCheck_1243_;
goto v_resetjp_1226_;
}
v_resetjp_1226_:
{
lean_object* v___y_1230_; lean_object* v___x_1236_; uint8_t v___x_1237_; 
v___x_1236_ = lean_array_get_size(v_decls_1220_);
v___x_1237_ = lean_nat_dec_lt(v___x_1212_, v___x_1236_);
if (v___x_1237_ == 0)
{
lean_dec(v_a_1225_);
lean_dec_ref(v_decls_1220_);
v___y_1230_ = v___x_1213_;
goto v___jp_1229_;
}
else
{
uint8_t v___x_1238_; 
v___x_1238_ = lean_nat_dec_le(v___x_1236_, v___x_1236_);
if (v___x_1238_ == 0)
{
if (v___x_1237_ == 0)
{
lean_dec(v_a_1225_);
lean_dec_ref(v_decls_1220_);
v___y_1230_ = v___x_1213_;
goto v___jp_1229_;
}
else
{
size_t v___x_1239_; lean_object* v___x_1240_; 
v___x_1239_ = lean_usize_of_nat(v___x_1236_);
v___x_1240_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Closure_run_spec__1(v_a_1225_, v_decls_1220_, v___x_1223_, v___x_1239_, v___x_1213_);
lean_dec_ref(v_decls_1220_);
lean_dec(v_a_1225_);
v___y_1230_ = v___x_1240_;
goto v___jp_1229_;
}
}
else
{
size_t v___x_1241_; lean_object* v___x_1242_; 
v___x_1241_ = lean_usize_of_nat(v___x_1236_);
v___x_1242_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Closure_run_spec__1(v_a_1225_, v_decls_1220_, v___x_1223_, v___x_1241_, v___x_1213_);
lean_dec_ref(v_decls_1220_);
lean_dec(v_a_1225_);
v___y_1230_ = v___x_1242_;
goto v___jp_1229_;
}
}
v___jp_1229_:
{
lean_object* v___x_1231_; lean_object* v___x_1232_; lean_object* v___x_1234_; 
v___x_1231_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1231_, 0, v_params_1219_);
lean_ctor_set(v___x_1231_, 1, v___y_1230_);
v___x_1232_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1232_, 0, v_a_1217_);
lean_ctor_set(v___x_1232_, 1, v___x_1231_);
if (v_isShared_1228_ == 0)
{
lean_ctor_set(v___x_1227_, 0, v___x_1232_);
v___x_1234_ = v___x_1227_;
goto v_reusejp_1233_;
}
else
{
lean_object* v_reuseFailAlloc_1235_; 
v_reuseFailAlloc_1235_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1235_, 0, v___x_1232_);
v___x_1234_ = v_reuseFailAlloc_1235_;
goto v_reusejp_1233_;
}
v_reusejp_1233_:
{
return v___x_1234_;
}
}
}
}
else
{
lean_object* v_a_1244_; lean_object* v___x_1246_; uint8_t v_isShared_1247_; uint8_t v_isSharedCheck_1251_; 
lean_dec_ref(v_decls_1220_);
lean_dec_ref(v_params_1219_);
lean_dec(v_a_1217_);
v_a_1244_ = lean_ctor_get(v___x_1224_, 0);
v_isSharedCheck_1251_ = !lean_is_exclusive(v___x_1224_);
if (v_isSharedCheck_1251_ == 0)
{
v___x_1246_ = v___x_1224_;
v_isShared_1247_ = v_isSharedCheck_1251_;
goto v_resetjp_1245_;
}
else
{
lean_inc(v_a_1244_);
lean_dec(v___x_1224_);
v___x_1246_ = lean_box(0);
v_isShared_1247_ = v_isSharedCheck_1251_;
goto v_resetjp_1245_;
}
v_resetjp_1245_:
{
lean_object* v___x_1249_; 
if (v_isShared_1247_ == 0)
{
v___x_1249_ = v___x_1246_;
goto v_reusejp_1248_;
}
else
{
lean_object* v_reuseFailAlloc_1250_; 
v_reuseFailAlloc_1250_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1250_, 0, v_a_1244_);
v___x_1249_ = v_reuseFailAlloc_1250_;
goto v_reusejp_1248_;
}
v_reusejp_1248_:
{
return v___x_1249_;
}
}
}
}
else
{
lean_object* v_a_1252_; lean_object* v___x_1254_; uint8_t v_isShared_1255_; uint8_t v_isSharedCheck_1259_; 
lean_dec(v___x_1215_);
v_a_1252_ = lean_ctor_get(v___x_1216_, 0);
v_isSharedCheck_1259_ = !lean_is_exclusive(v___x_1216_);
if (v_isSharedCheck_1259_ == 0)
{
v___x_1254_ = v___x_1216_;
v_isShared_1255_ = v_isSharedCheck_1259_;
goto v_resetjp_1253_;
}
else
{
lean_inc(v_a_1252_);
lean_dec(v___x_1216_);
v___x_1254_ = lean_box(0);
v_isShared_1255_ = v_isSharedCheck_1259_;
goto v_resetjp_1253_;
}
v_resetjp_1253_:
{
lean_object* v___x_1257_; 
if (v_isShared_1255_ == 0)
{
v___x_1257_ = v___x_1254_;
goto v_reusejp_1256_;
}
else
{
lean_object* v_reuseFailAlloc_1258_; 
v_reuseFailAlloc_1258_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1258_, 0, v_a_1252_);
v___x_1257_ = v_reuseFailAlloc_1258_;
goto v_reusejp_1256_;
}
v_reusejp_1256_:
{
return v___x_1257_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Closure_run___redArg___boxed(lean_object* v_x_1260_, lean_object* v_inScope_1261_, lean_object* v_abstract_1262_, lean_object* v___y_1263_, lean_object* v___y_1264_, lean_object* v___y_1265_, lean_object* v___y_1266_, lean_object* v___y_1267_){
_start:
{
lean_object* v_res_1268_; 
v_res_1268_ = l_Lean_Compiler_LCNF_Closure_run___redArg(v_x_1260_, v_inScope_1261_, v_abstract_1262_, v___y_1263_, v___y_1264_, v___y_1265_, v___y_1266_);
lean_dec(v___y_1266_);
lean_dec_ref(v___y_1265_);
lean_dec(v___y_1264_);
lean_dec_ref(v___y_1263_);
return v_res_1268_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Closure_run(lean_object* v_00_u03b1_1269_, lean_object* v_x_1270_, lean_object* v_inScope_1271_, lean_object* v_abstract_1272_, lean_object* v___y_1273_, lean_object* v___y_1274_, lean_object* v___y_1275_, lean_object* v___y_1276_){
_start:
{
lean_object* v___x_1278_; 
v___x_1278_ = l_Lean_Compiler_LCNF_Closure_run___redArg(v_x_1270_, v_inScope_1271_, v_abstract_1272_, v___y_1273_, v___y_1274_, v___y_1275_, v___y_1276_);
return v___x_1278_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Closure_run___boxed(lean_object* v_00_u03b1_1279_, lean_object* v_x_1280_, lean_object* v_inScope_1281_, lean_object* v_abstract_1282_, lean_object* v___y_1283_, lean_object* v___y_1284_, lean_object* v___y_1285_, lean_object* v___y_1286_, lean_object* v___y_1287_){
_start:
{
lean_object* v_res_1288_; 
v_res_1288_ = l_Lean_Compiler_LCNF_Closure_run(v_00_u03b1_1279_, v_x_1280_, v_inScope_1281_, v_abstract_1282_, v___y_1283_, v___y_1284_, v___y_1285_, v___y_1286_);
lean_dec(v___y_1286_);
lean_dec_ref(v___y_1285_);
lean_dec(v___y_1284_);
lean_dec_ref(v___y_1283_);
return v_res_1288_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_Closure_run_spec__0(lean_object* v_as_1289_, size_t v_sz_1290_, size_t v_i_1291_, lean_object* v_b_1292_, lean_object* v___y_1293_, lean_object* v___y_1294_, lean_object* v___y_1295_, lean_object* v___y_1296_){
_start:
{
lean_object* v___x_1298_; 
v___x_1298_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_Closure_run_spec__0___redArg(v_as_1289_, v_sz_1290_, v_i_1291_, v_b_1292_);
return v___x_1298_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_Closure_run_spec__0___boxed(lean_object* v_as_1299_, lean_object* v_sz_1300_, lean_object* v_i_1301_, lean_object* v_b_1302_, lean_object* v___y_1303_, lean_object* v___y_1304_, lean_object* v___y_1305_, lean_object* v___y_1306_, lean_object* v___y_1307_){
_start:
{
size_t v_sz_boxed_1308_; size_t v_i_boxed_1309_; lean_object* v_res_1310_; 
v_sz_boxed_1308_ = lean_unbox_usize(v_sz_1300_);
lean_dec(v_sz_1300_);
v_i_boxed_1309_ = lean_unbox_usize(v_i_1301_);
lean_dec(v_i_1301_);
v_res_1310_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_Closure_run_spec__0(v_as_1299_, v_sz_boxed_1308_, v_i_boxed_1309_, v_b_1302_, v___y_1303_, v___y_1304_, v___y_1305_, v___y_1306_);
lean_dec(v___y_1306_);
lean_dec_ref(v___y_1305_);
lean_dec(v___y_1304_);
lean_dec_ref(v___y_1303_);
lean_dec_ref(v_as_1299_);
return v_res_1310_;
}
}
lean_object* runtime_initialize_Lean_Util_ForEachExprWhere(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_LCNF_CompilerM(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Compiler_LCNF_Closure(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Util_ForEachExprWhere(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_LCNF_CompilerM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Compiler_LCNF_Closure(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Util_ForEachExprWhere(uint8_t builtin);
lean_object* initialize_Lean_Compiler_LCNF_CompilerM(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Compiler_LCNF_Closure(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Util_ForEachExprWhere(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_LCNF_CompilerM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_LCNF_Closure(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Compiler_LCNF_Closure(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Compiler_LCNF_Closure(builtin);
}
#ifdef __cplusplus
}
#endif
