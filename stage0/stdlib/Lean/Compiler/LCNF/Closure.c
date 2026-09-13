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
lean_object* l_instMonadEIO___redArg();
lean_object* l_StateRefT_x27_instMonad___redArg(lean_object*);
lean_object* l_Lean_Core_instMonadCoreM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Core_instMonadCoreM___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instFunctorOfMonad___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instFunctorOfMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_instMonadCompilerM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_instMonadCompilerM___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instInhabitedOfMonad___redArg(lean_object*, lean_object*);
lean_object* l_instInhabitedForall___redArg___lam__0___boxed(lean_object*, lean_object*);
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
static lean_once_cell_t l_panic___at___00Lean_Compiler_LCNF_Closure_collectFVar_spec__4___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00Lean_Compiler_LCNF_Closure_collectFVar_spec__4___closed__0;
static const lean_closure_object l_panic___at___00Lean_Compiler_LCNF_Closure_collectFVar_spec__4___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Compiler_LCNF_Closure_collectFVar_spec__4___closed__1 = (const lean_object*)&l_panic___at___00Lean_Compiler_LCNF_Closure_collectFVar_spec__4___closed__1_value;
static const lean_closure_object l_panic___at___00Lean_Compiler_LCNF_Closure_collectFVar_spec__4___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__1___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Compiler_LCNF_Closure_collectFVar_spec__4___closed__2 = (const lean_object*)&l_panic___at___00Lean_Compiler_LCNF_Closure_collectFVar_spec__4___closed__2_value;
static const lean_closure_object l_panic___at___00Lean_Compiler_LCNF_Closure_collectFVar_spec__4___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Compiler_LCNF_instMonadCompilerM___lam__0___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Compiler_LCNF_Closure_collectFVar_spec__4___closed__3 = (const lean_object*)&l_panic___at___00Lean_Compiler_LCNF_Closure_collectFVar_spec__4___closed__3_value;
static const lean_closure_object l_panic___at___00Lean_Compiler_LCNF_Closure_collectFVar_spec__4___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Compiler_LCNF_instMonadCompilerM___lam__1___boxed, .m_arity = 9, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Compiler_LCNF_Closure_collectFVar_spec__4___closed__4 = (const lean_object*)&l_panic___at___00Lean_Compiler_LCNF_Closure_collectFVar_spec__4___closed__4_value;
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
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Closure_markVisited___redArg(lean_object* v_fvarId_1_, lean_object* v_a_2_){
_start:
{
lean_object* v___x_4_; lean_object* v_visited_5_; lean_object* v_params_6_; lean_object* v_decls_7_; lean_object* v___x_9_; uint8_t v_isShared_10_; uint8_t v_isSharedCheck_18_; 
v___x_4_ = lean_st_ref_take(v_a_2_);
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
v___x_15_ = lean_st_ref_put(v_a_2_, v___x_14_);
v___x_16_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_16_, 0, v___x_11_);
return v___x_16_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Closure_markVisited___redArg___boxed(lean_object* v_fvarId_19_, lean_object* v_a_20_, lean_object* v_a_21_){
_start:
{
lean_object* v_res_22_; 
v_res_22_ = l_Lean_Compiler_LCNF_Closure_markVisited___redArg(v_fvarId_19_, v_a_20_);
lean_dec(v_a_20_);
return v_res_22_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Closure_markVisited(lean_object* v_fvarId_23_, lean_object* v_a_24_, lean_object* v_a_25_, lean_object* v_a_26_, lean_object* v_a_27_, lean_object* v_a_28_, lean_object* v_a_29_){
_start:
{
lean_object* v___x_31_; 
v___x_31_ = l_Lean_Compiler_LCNF_Closure_markVisited___redArg(v_fvarId_23_, v_a_25_);
return v___x_31_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Closure_markVisited___boxed(lean_object* v_fvarId_32_, lean_object* v_a_33_, lean_object* v_a_34_, lean_object* v_a_35_, lean_object* v_a_36_, lean_object* v_a_37_, lean_object* v_a_38_, lean_object* v_a_39_){
_start:
{
lean_object* v_res_40_; 
v_res_40_ = l_Lean_Compiler_LCNF_Closure_markVisited(v_fvarId_32_, v_a_33_, v_a_34_, v_a_35_, v_a_36_, v_a_37_, v_a_38_);
lean_dec(v_a_38_);
lean_dec_ref(v_a_37_);
lean_dec(v_a_36_);
lean_dec_ref(v_a_35_);
lean_dec(v_a_34_);
lean_dec_ref(v_a_33_);
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
LEAN_EXPORT lean_object* l_Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4_spec__10___redArg(lean_object* v_e_166_, lean_object* v_a_167_){
_start:
{
lean_object* v___x_169_; lean_object* v_checked_170_; uint8_t v___x_171_; 
v___x_169_ = lean_st_ref_get(v_a_167_);
v_checked_170_ = lean_ctor_get(v___x_169_, 1);
lean_inc_ref(v_checked_170_);
lean_dec(v___x_169_);
v___x_171_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4_spec__10_spec__13___redArg(v_checked_170_, v_e_166_);
lean_dec_ref(v_checked_170_);
if (v___x_171_ == 0)
{
lean_object* v___x_172_; lean_object* v_visited_173_; lean_object* v_checked_174_; lean_object* v___x_176_; uint8_t v_isShared_177_; uint8_t v_isSharedCheck_186_; 
v___x_172_ = lean_st_ref_take(v_a_167_);
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
v___x_182_ = lean_st_ref_put(v_a_167_, v___x_181_);
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
LEAN_EXPORT lean_object* l_Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4_spec__10___redArg___boxed(lean_object* v_e_189_, lean_object* v_a_190_, lean_object* v___y_191_){
_start:
{
lean_object* v_res_192_; 
v_res_192_ = l_Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4_spec__10___redArg(v_e_189_, v_a_190_);
lean_dec(v_a_190_);
return v_res_192_;
}
}
LEAN_EXPORT lean_object* l_Lean_ForEachExprWhere_visited___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4_spec__9___redArg(lean_object* v_e_193_, lean_object* v_a_194_){
_start:
{
lean_object* v___x_196_; lean_object* v_visited_197_; size_t v___x_198_; size_t v___x_199_; size_t v___x_200_; lean_object* v___x_201_; size_t v___x_202_; uint8_t v___x_203_; 
v___x_196_ = lean_st_ref_get(v_a_194_);
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
v___x_204_ = lean_st_ref_take(v_a_194_);
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
v___x_213_ = lean_st_ref_put(v_a_194_, v___x_212_);
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
LEAN_EXPORT lean_object* l_Lean_ForEachExprWhere_visited___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4_spec__9___redArg___boxed(lean_object* v_e_220_, lean_object* v_a_221_, lean_object* v___y_222_){
_start:
{
lean_object* v_res_223_; 
v_res_223_ = l_Lean_ForEachExprWhere_visited___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4_spec__9___redArg(v_e_220_, v_a_221_);
lean_dec(v_a_221_);
return v_res_223_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4(lean_object* v_p_224_, lean_object* v_f_225_, uint8_t v_stopWhenVisited_226_, lean_object* v_e_227_, lean_object* v_a_228_, lean_object* v___y_229_, lean_object* v___y_230_, lean_object* v___y_231_, lean_object* v___y_232_, lean_object* v___y_233_, lean_object* v___y_234_){
_start:
{
lean_object* v___y_237_; lean_object* v___y_238_; lean_object* v___y_239_; lean_object* v___y_240_; lean_object* v___y_241_; lean_object* v___y_242_; lean_object* v_d_243_; lean_object* v_b_244_; lean_object* v___y_245_; lean_object* v___y_249_; lean_object* v___y_250_; lean_object* v___y_251_; lean_object* v___y_252_; lean_object* v___y_253_; lean_object* v___y_254_; lean_object* v___y_255_; lean_object* v___x_276_; 
lean_inc_ref(v_e_227_);
v___x_276_ = l_Lean_ForEachExprWhere_visited___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4_spec__9___redArg(v_e_227_, v_a_228_);
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
v___y_249_ = v_a_228_;
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
v___x_284_ = l_Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4_spec__10___redArg(v_e_227_, v_a_228_);
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
v___y_249_ = v_a_228_;
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
v___y_249_ = v_a_228_;
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
v___x_246_ = l___private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4(v_p_224_, v_f_225_, v_stopWhenVisited_226_, v_d_243_, v___y_245_, v___y_240_, v___y_237_, v___y_239_, v___y_238_, v___y_242_, v___y_241_);
if (lean_obj_tag(v___x_246_) == 0)
{
lean_dec_ref_known(v___x_246_, 1);
v_e_227_ = v_b_244_;
v_a_228_ = v___y_245_;
v___y_229_ = v___y_240_;
v___y_230_ = v___y_237_;
v___y_231_ = v___y_239_;
v___y_232_ = v___y_238_;
v___y_233_ = v___y_242_;
v___y_234_ = v___y_241_;
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
v___y_237_ = v___y_251_;
v___y_238_ = v___y_253_;
v___y_239_ = v___y_252_;
v___y_240_ = v___y_250_;
v___y_241_ = v___y_255_;
v___y_242_ = v___y_254_;
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
v___y_237_ = v___y_251_;
v___y_238_ = v___y_253_;
v___y_239_ = v___y_252_;
v___y_240_ = v___y_250_;
v___y_241_ = v___y_255_;
v___y_242_ = v___y_254_;
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
v_a_228_ = v___y_249_;
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
v_a_228_ = v___y_249_;
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
v_a_228_ = v___y_249_;
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
v_a_228_ = v___y_249_;
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
LEAN_EXPORT lean_object* l___private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4___boxed(lean_object* v_p_318_, lean_object* v_f_319_, lean_object* v_stopWhenVisited_320_, lean_object* v_e_321_, lean_object* v_a_322_, lean_object* v___y_323_, lean_object* v___y_324_, lean_object* v___y_325_, lean_object* v___y_326_, lean_object* v___y_327_, lean_object* v___y_328_, lean_object* v___y_329_){
_start:
{
uint8_t v_stopWhenVisited_boxed_330_; lean_object* v_res_331_; 
v_stopWhenVisited_boxed_330_ = lean_unbox(v_stopWhenVisited_320_);
v_res_331_ = l___private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4(v_p_318_, v_f_319_, v_stopWhenVisited_boxed_330_, v_e_321_, v_a_322_, v___y_323_, v___y_324_, v___y_325_, v___y_326_, v___y_327_, v___y_328_);
lean_dec(v___y_328_);
lean_dec_ref(v___y_327_);
lean_dec(v___y_326_);
lean_dec_ref(v___y_325_);
lean_dec(v___y_324_);
lean_dec_ref(v___y_323_);
lean_dec(v_a_322_);
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
static lean_object* _init_l_panic___at___00Lean_Compiler_LCNF_Closure_collectFVar_spec__4___closed__0(void){
_start:
{
lean_object* v___x_368_; 
v___x_368_ = l_instMonadEIO___redArg();
return v___x_368_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Compiler_LCNF_Closure_collectFVar_spec__4(lean_object* v_msg_373_, lean_object* v___y_374_, lean_object* v___y_375_, lean_object* v___y_376_, lean_object* v___y_377_, lean_object* v___y_378_, lean_object* v___y_379_){
_start:
{
lean_object* v___x_381_; lean_object* v___x_382_; lean_object* v_toApplicative_383_; lean_object* v___x_385_; uint8_t v_isShared_386_; uint8_t v_isSharedCheck_446_; 
v___x_381_ = lean_obj_once(&l_panic___at___00Lean_Compiler_LCNF_Closure_collectFVar_spec__4___closed__0, &l_panic___at___00Lean_Compiler_LCNF_Closure_collectFVar_spec__4___closed__0_once, _init_l_panic___at___00Lean_Compiler_LCNF_Closure_collectFVar_spec__4___closed__0);
v___x_382_ = l_StateRefT_x27_instMonad___redArg(v___x_381_);
v_toApplicative_383_ = lean_ctor_get(v___x_382_, 0);
v_isSharedCheck_446_ = !lean_is_exclusive(v___x_382_);
if (v_isSharedCheck_446_ == 0)
{
lean_object* v_unused_447_; 
v_unused_447_ = lean_ctor_get(v___x_382_, 1);
lean_dec(v_unused_447_);
v___x_385_ = v___x_382_;
v_isShared_386_ = v_isSharedCheck_446_;
goto v_resetjp_384_;
}
else
{
lean_inc(v_toApplicative_383_);
lean_dec(v___x_382_);
v___x_385_ = lean_box(0);
v_isShared_386_ = v_isSharedCheck_446_;
goto v_resetjp_384_;
}
v_resetjp_384_:
{
lean_object* v_toFunctor_387_; lean_object* v_toSeq_388_; lean_object* v_toSeqLeft_389_; lean_object* v_toSeqRight_390_; lean_object* v___x_392_; uint8_t v_isShared_393_; uint8_t v_isSharedCheck_444_; 
v_toFunctor_387_ = lean_ctor_get(v_toApplicative_383_, 0);
v_toSeq_388_ = lean_ctor_get(v_toApplicative_383_, 2);
v_toSeqLeft_389_ = lean_ctor_get(v_toApplicative_383_, 3);
v_toSeqRight_390_ = lean_ctor_get(v_toApplicative_383_, 4);
v_isSharedCheck_444_ = !lean_is_exclusive(v_toApplicative_383_);
if (v_isSharedCheck_444_ == 0)
{
lean_object* v_unused_445_; 
v_unused_445_ = lean_ctor_get(v_toApplicative_383_, 1);
lean_dec(v_unused_445_);
v___x_392_ = v_toApplicative_383_;
v_isShared_393_ = v_isSharedCheck_444_;
goto v_resetjp_391_;
}
else
{
lean_inc(v_toSeqRight_390_);
lean_inc(v_toSeqLeft_389_);
lean_inc(v_toSeq_388_);
lean_inc(v_toFunctor_387_);
lean_dec(v_toApplicative_383_);
v___x_392_ = lean_box(0);
v_isShared_393_ = v_isSharedCheck_444_;
goto v_resetjp_391_;
}
v_resetjp_391_:
{
lean_object* v___f_394_; lean_object* v___f_395_; lean_object* v___f_396_; lean_object* v___f_397_; lean_object* v___x_398_; lean_object* v___f_399_; lean_object* v___f_400_; lean_object* v___f_401_; lean_object* v___x_403_; 
v___f_394_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_Closure_collectFVar_spec__4___closed__1));
v___f_395_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_Closure_collectFVar_spec__4___closed__2));
lean_inc_ref(v_toFunctor_387_);
v___f_396_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_396_, 0, v_toFunctor_387_);
v___f_397_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_397_, 0, v_toFunctor_387_);
v___x_398_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_398_, 0, v___f_396_);
lean_ctor_set(v___x_398_, 1, v___f_397_);
v___f_399_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_399_, 0, v_toSeqRight_390_);
v___f_400_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_400_, 0, v_toSeqLeft_389_);
v___f_401_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_401_, 0, v_toSeq_388_);
if (v_isShared_393_ == 0)
{
lean_ctor_set(v___x_392_, 4, v___f_399_);
lean_ctor_set(v___x_392_, 3, v___f_400_);
lean_ctor_set(v___x_392_, 2, v___f_401_);
lean_ctor_set(v___x_392_, 1, v___f_394_);
lean_ctor_set(v___x_392_, 0, v___x_398_);
v___x_403_ = v___x_392_;
goto v_reusejp_402_;
}
else
{
lean_object* v_reuseFailAlloc_443_; 
v_reuseFailAlloc_443_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_443_, 0, v___x_398_);
lean_ctor_set(v_reuseFailAlloc_443_, 1, v___f_394_);
lean_ctor_set(v_reuseFailAlloc_443_, 2, v___f_401_);
lean_ctor_set(v_reuseFailAlloc_443_, 3, v___f_400_);
lean_ctor_set(v_reuseFailAlloc_443_, 4, v___f_399_);
v___x_403_ = v_reuseFailAlloc_443_;
goto v_reusejp_402_;
}
v_reusejp_402_:
{
lean_object* v___x_405_; 
if (v_isShared_386_ == 0)
{
lean_ctor_set(v___x_385_, 1, v___f_395_);
lean_ctor_set(v___x_385_, 0, v___x_403_);
v___x_405_ = v___x_385_;
goto v_reusejp_404_;
}
else
{
lean_object* v_reuseFailAlloc_442_; 
v_reuseFailAlloc_442_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_442_, 0, v___x_403_);
lean_ctor_set(v_reuseFailAlloc_442_, 1, v___f_395_);
v___x_405_ = v_reuseFailAlloc_442_;
goto v_reusejp_404_;
}
v_reusejp_404_:
{
lean_object* v___x_406_; lean_object* v_toApplicative_407_; lean_object* v___x_409_; uint8_t v_isShared_410_; uint8_t v_isSharedCheck_440_; 
v___x_406_ = l_StateRefT_x27_instMonad___redArg(v___x_405_);
v_toApplicative_407_ = lean_ctor_get(v___x_406_, 0);
v_isSharedCheck_440_ = !lean_is_exclusive(v___x_406_);
if (v_isSharedCheck_440_ == 0)
{
lean_object* v_unused_441_; 
v_unused_441_ = lean_ctor_get(v___x_406_, 1);
lean_dec(v_unused_441_);
v___x_409_ = v___x_406_;
v_isShared_410_ = v_isSharedCheck_440_;
goto v_resetjp_408_;
}
else
{
lean_inc(v_toApplicative_407_);
lean_dec(v___x_406_);
v___x_409_ = lean_box(0);
v_isShared_410_ = v_isSharedCheck_440_;
goto v_resetjp_408_;
}
v_resetjp_408_:
{
lean_object* v_toFunctor_411_; lean_object* v_toSeq_412_; lean_object* v_toSeqLeft_413_; lean_object* v_toSeqRight_414_; lean_object* v___x_416_; uint8_t v_isShared_417_; uint8_t v_isSharedCheck_438_; 
v_toFunctor_411_ = lean_ctor_get(v_toApplicative_407_, 0);
v_toSeq_412_ = lean_ctor_get(v_toApplicative_407_, 2);
v_toSeqLeft_413_ = lean_ctor_get(v_toApplicative_407_, 3);
v_toSeqRight_414_ = lean_ctor_get(v_toApplicative_407_, 4);
v_isSharedCheck_438_ = !lean_is_exclusive(v_toApplicative_407_);
if (v_isSharedCheck_438_ == 0)
{
lean_object* v_unused_439_; 
v_unused_439_ = lean_ctor_get(v_toApplicative_407_, 1);
lean_dec(v_unused_439_);
v___x_416_ = v_toApplicative_407_;
v_isShared_417_ = v_isSharedCheck_438_;
goto v_resetjp_415_;
}
else
{
lean_inc(v_toSeqRight_414_);
lean_inc(v_toSeqLeft_413_);
lean_inc(v_toSeq_412_);
lean_inc(v_toFunctor_411_);
lean_dec(v_toApplicative_407_);
v___x_416_ = lean_box(0);
v_isShared_417_ = v_isSharedCheck_438_;
goto v_resetjp_415_;
}
v_resetjp_415_:
{
lean_object* v___f_418_; lean_object* v___f_419_; lean_object* v___f_420_; lean_object* v___f_421_; lean_object* v___x_422_; lean_object* v___f_423_; lean_object* v___f_424_; lean_object* v___f_425_; lean_object* v___x_427_; 
v___f_418_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_Closure_collectFVar_spec__4___closed__3));
v___f_419_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_Closure_collectFVar_spec__4___closed__4));
lean_inc_ref(v_toFunctor_411_);
v___f_420_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_420_, 0, v_toFunctor_411_);
v___f_421_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_421_, 0, v_toFunctor_411_);
v___x_422_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_422_, 0, v___f_420_);
lean_ctor_set(v___x_422_, 1, v___f_421_);
v___f_423_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_423_, 0, v_toSeqRight_414_);
v___f_424_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_424_, 0, v_toSeqLeft_413_);
v___f_425_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_425_, 0, v_toSeq_412_);
if (v_isShared_417_ == 0)
{
lean_ctor_set(v___x_416_, 4, v___f_423_);
lean_ctor_set(v___x_416_, 3, v___f_424_);
lean_ctor_set(v___x_416_, 2, v___f_425_);
lean_ctor_set(v___x_416_, 1, v___f_418_);
lean_ctor_set(v___x_416_, 0, v___x_422_);
v___x_427_ = v___x_416_;
goto v_reusejp_426_;
}
else
{
lean_object* v_reuseFailAlloc_437_; 
v_reuseFailAlloc_437_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_437_, 0, v___x_422_);
lean_ctor_set(v_reuseFailAlloc_437_, 1, v___f_418_);
lean_ctor_set(v_reuseFailAlloc_437_, 2, v___f_425_);
lean_ctor_set(v_reuseFailAlloc_437_, 3, v___f_424_);
lean_ctor_set(v_reuseFailAlloc_437_, 4, v___f_423_);
v___x_427_ = v_reuseFailAlloc_437_;
goto v_reusejp_426_;
}
v_reusejp_426_:
{
lean_object* v___x_429_; 
if (v_isShared_410_ == 0)
{
lean_ctor_set(v___x_409_, 1, v___f_419_);
lean_ctor_set(v___x_409_, 0, v___x_427_);
v___x_429_ = v___x_409_;
goto v_reusejp_428_;
}
else
{
lean_object* v_reuseFailAlloc_436_; 
v_reuseFailAlloc_436_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_436_, 0, v___x_427_);
lean_ctor_set(v_reuseFailAlloc_436_, 1, v___f_419_);
v___x_429_ = v_reuseFailAlloc_436_;
goto v_reusejp_428_;
}
v_reusejp_428_:
{
lean_object* v___x_430_; lean_object* v___x_431_; lean_object* v___x_432_; lean_object* v___f_433_; lean_object* v___x_19880__overap_434_; lean_object* v___x_435_; 
v___x_430_ = l_StateRefT_x27_instMonad___redArg(v___x_429_);
v___x_431_ = lean_box(0);
v___x_432_ = l_instInhabitedOfMonad___redArg(v___x_430_, v___x_431_);
v___f_433_ = lean_alloc_closure((void*)(l_instInhabitedForall___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_433_, 0, v___x_432_);
v___x_19880__overap_434_ = lean_panic_fn_borrowed(v___f_433_, v_msg_373_);
lean_dec_ref(v___f_433_);
lean_inc(v___y_379_);
lean_inc_ref(v___y_378_);
lean_inc(v___y_377_);
lean_inc_ref(v___y_376_);
lean_inc(v___y_375_);
lean_inc_ref(v___y_374_);
v___x_435_ = lean_apply_7(v___x_19880__overap_434_, v___y_374_, v___y_375_, v___y_376_, v___y_377_, v___y_378_, v___y_379_, lean_box(0));
return v___x_435_;
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
LEAN_EXPORT lean_object* l_panic___at___00Lean_Compiler_LCNF_Closure_collectFVar_spec__4___boxed(lean_object* v_msg_448_, lean_object* v___y_449_, lean_object* v___y_450_, lean_object* v___y_451_, lean_object* v___y_452_, lean_object* v___y_453_, lean_object* v___y_454_, lean_object* v___y_455_){
_start:
{
lean_object* v_res_456_; 
v_res_456_ = l_panic___at___00Lean_Compiler_LCNF_Closure_collectFVar_spec__4(v_msg_448_, v___y_449_, v___y_450_, v___y_451_, v___y_452_, v___y_453_, v___y_454_);
lean_dec(v___y_454_);
lean_dec_ref(v___y_453_);
lean_dec(v___y_452_);
lean_dec_ref(v___y_451_);
lean_dec(v___y_450_);
lean_dec_ref(v___y_449_);
return v_res_456_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Closure_collectType___lam__0___boxed(lean_object* v_e_457_, lean_object* v___y_458_, lean_object* v___y_459_, lean_object* v___y_460_, lean_object* v___y_461_, lean_object* v___y_462_, lean_object* v___y_463_, lean_object* v___y_464_){
_start:
{
lean_object* v_res_465_; 
v_res_465_ = l_Lean_Compiler_LCNF_Closure_collectType___lam__0(v_e_457_, v___y_458_, v___y_459_, v___y_460_, v___y_461_, v___y_462_, v___y_463_);
lean_dec(v___y_463_);
lean_dec_ref(v___y_462_);
lean_dec(v___y_461_);
lean_dec_ref(v___y_460_);
lean_dec(v___y_459_);
lean_dec_ref(v___y_458_);
lean_dec_ref(v_e_457_);
return v_res_465_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Closure_collectType(lean_object* v_type_467_, lean_object* v_a_468_, lean_object* v_a_469_, lean_object* v_a_470_, lean_object* v_a_471_, lean_object* v_a_472_, lean_object* v_a_473_){
_start:
{
uint8_t v___x_475_; 
v___x_475_ = l_Lean_Expr_hasFVar(v_type_467_);
if (v___x_475_ == 0)
{
lean_object* v___x_476_; lean_object* v___x_477_; 
lean_dec_ref(v_type_467_);
v___x_476_ = lean_box(0);
v___x_477_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_477_, 0, v___x_476_);
return v___x_477_;
}
else
{
lean_object* v___f_478_; lean_object* v___x_479_; uint8_t v___x_480_; lean_object* v___x_481_; 
v___f_478_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_Closure_collectType___lam__0___boxed), 8, 0);
v___x_479_ = ((lean_object*)(l_Lean_Compiler_LCNF_Closure_collectType___closed__0));
v___x_480_ = 0;
v___x_481_ = l_Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2(v___x_479_, v___f_478_, v_type_467_, v___x_480_, v_a_468_, v_a_469_, v_a_470_, v_a_471_, v_a_472_, v_a_473_);
return v___x_481_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Closure_collectParams_spec__0(lean_object* v_as_482_, size_t v_i_483_, size_t v_stop_484_, lean_object* v_b_485_, lean_object* v___y_486_, lean_object* v___y_487_, lean_object* v___y_488_, lean_object* v___y_489_, lean_object* v___y_490_, lean_object* v___y_491_){
_start:
{
uint8_t v___x_493_; 
v___x_493_ = lean_usize_dec_eq(v_i_483_, v_stop_484_);
if (v___x_493_ == 0)
{
lean_object* v___x_494_; lean_object* v_type_495_; lean_object* v___x_496_; 
v___x_494_ = lean_array_uget_borrowed(v_as_482_, v_i_483_);
v_type_495_ = lean_ctor_get(v___x_494_, 2);
lean_inc_ref(v_type_495_);
v___x_496_ = l_Lean_Compiler_LCNF_Closure_collectType(v_type_495_, v___y_486_, v___y_487_, v___y_488_, v___y_489_, v___y_490_, v___y_491_);
if (lean_obj_tag(v___x_496_) == 0)
{
lean_object* v_a_497_; size_t v___x_498_; size_t v___x_499_; 
v_a_497_ = lean_ctor_get(v___x_496_, 0);
lean_inc(v_a_497_);
lean_dec_ref_known(v___x_496_, 1);
v___x_498_ = ((size_t)1ULL);
v___x_499_ = lean_usize_add(v_i_483_, v___x_498_);
v_i_483_ = v___x_499_;
v_b_485_ = v_a_497_;
goto _start;
}
else
{
return v___x_496_;
}
}
else
{
lean_object* v___x_501_; 
v___x_501_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_501_, 0, v_b_485_);
return v___x_501_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Closure_collectParams(lean_object* v_params_502_, lean_object* v_a_503_, lean_object* v_a_504_, lean_object* v_a_505_, lean_object* v_a_506_, lean_object* v_a_507_, lean_object* v_a_508_){
_start:
{
lean_object* v___x_510_; lean_object* v___x_511_; lean_object* v___x_512_; uint8_t v___x_513_; 
v___x_510_ = lean_unsigned_to_nat(0u);
v___x_511_ = lean_array_get_size(v_params_502_);
v___x_512_ = lean_box(0);
v___x_513_ = lean_nat_dec_lt(v___x_510_, v___x_511_);
if (v___x_513_ == 0)
{
lean_object* v___x_514_; 
v___x_514_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_514_, 0, v___x_512_);
return v___x_514_;
}
else
{
uint8_t v___x_515_; 
v___x_515_ = lean_nat_dec_le(v___x_511_, v___x_511_);
if (v___x_515_ == 0)
{
if (v___x_513_ == 0)
{
lean_object* v___x_516_; 
v___x_516_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_516_, 0, v___x_512_);
return v___x_516_;
}
else
{
size_t v___x_517_; size_t v___x_518_; lean_object* v___x_519_; 
v___x_517_ = ((size_t)0ULL);
v___x_518_ = lean_usize_of_nat(v___x_511_);
v___x_519_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Closure_collectParams_spec__0(v_params_502_, v___x_517_, v___x_518_, v___x_512_, v_a_503_, v_a_504_, v_a_505_, v_a_506_, v_a_507_, v_a_508_);
return v___x_519_;
}
}
else
{
size_t v___x_520_; size_t v___x_521_; lean_object* v___x_522_; 
v___x_520_ = ((size_t)0ULL);
v___x_521_ = lean_usize_of_nat(v___x_511_);
v___x_522_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Closure_collectParams_spec__0(v_params_502_, v___x_520_, v___x_521_, v___x_512_, v_a_503_, v_a_504_, v_a_505_, v_a_506_, v_a_507_, v_a_508_);
return v___x_522_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Closure_collectArg(lean_object* v_arg_523_, lean_object* v_a_524_, lean_object* v_a_525_, lean_object* v_a_526_, lean_object* v_a_527_, lean_object* v_a_528_, lean_object* v_a_529_){
_start:
{
switch(lean_obj_tag(v_arg_523_))
{
case 0:
{
lean_object* v___x_531_; lean_object* v___x_532_; 
v___x_531_ = lean_box(0);
v___x_532_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_532_, 0, v___x_531_);
return v___x_532_;
}
case 1:
{
lean_object* v_fvarId_533_; lean_object* v___x_534_; 
v_fvarId_533_ = lean_ctor_get(v_arg_523_, 0);
lean_inc(v_fvarId_533_);
lean_dec_ref_known(v_arg_523_, 1);
v___x_534_ = l_Lean_Compiler_LCNF_Closure_collectFVar(v_fvarId_533_, v_a_524_, v_a_525_, v_a_526_, v_a_527_, v_a_528_, v_a_529_);
return v___x_534_;
}
default: 
{
lean_object* v_expr_535_; lean_object* v___x_536_; 
v_expr_535_ = lean_ctor_get(v_arg_523_, 0);
lean_inc_ref(v_expr_535_);
lean_dec_ref_known(v_arg_523_, 1);
v___x_536_ = l_Lean_Compiler_LCNF_Closure_collectType(v_expr_535_, v_a_524_, v_a_525_, v_a_526_, v_a_527_, v_a_528_, v_a_529_);
return v___x_536_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Closure_collectLetValue_spec__6(lean_object* v_as_537_, size_t v_i_538_, size_t v_stop_539_, lean_object* v_b_540_, lean_object* v___y_541_, lean_object* v___y_542_, lean_object* v___y_543_, lean_object* v___y_544_, lean_object* v___y_545_, lean_object* v___y_546_){
_start:
{
uint8_t v___x_548_; 
v___x_548_ = lean_usize_dec_eq(v_i_538_, v_stop_539_);
if (v___x_548_ == 0)
{
lean_object* v___x_549_; lean_object* v___x_550_; 
v___x_549_ = lean_array_uget_borrowed(v_as_537_, v_i_538_);
lean_inc(v___x_549_);
v___x_550_ = l_Lean_Compiler_LCNF_Closure_collectArg(v___x_549_, v___y_541_, v___y_542_, v___y_543_, v___y_544_, v___y_545_, v___y_546_);
if (lean_obj_tag(v___x_550_) == 0)
{
lean_object* v_a_551_; size_t v___x_552_; size_t v___x_553_; 
v_a_551_ = lean_ctor_get(v___x_550_, 0);
lean_inc(v_a_551_);
lean_dec_ref_known(v___x_550_, 1);
v___x_552_ = ((size_t)1ULL);
v___x_553_ = lean_usize_add(v_i_538_, v___x_552_);
v_i_538_ = v___x_553_;
v_b_540_ = v_a_551_;
goto _start;
}
else
{
return v___x_550_;
}
}
else
{
lean_object* v___x_555_; 
v___x_555_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_555_, 0, v_b_540_);
return v___x_555_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Closure_collectLetValue(lean_object* v_e_556_, lean_object* v_a_557_, lean_object* v_a_558_, lean_object* v_a_559_, lean_object* v_a_560_, lean_object* v_a_561_, lean_object* v_a_562_){
_start:
{
switch(lean_obj_tag(v_e_556_))
{
case 0:
{
lean_object* v___x_565_; uint8_t v_isShared_566_; uint8_t v_isSharedCheck_571_; 
v_isSharedCheck_571_ = !lean_is_exclusive(v_e_556_);
if (v_isSharedCheck_571_ == 0)
{
lean_object* v_unused_572_; 
v_unused_572_ = lean_ctor_get(v_e_556_, 0);
lean_dec(v_unused_572_);
v___x_565_ = v_e_556_;
v_isShared_566_ = v_isSharedCheck_571_;
goto v_resetjp_564_;
}
else
{
lean_dec(v_e_556_);
v___x_565_ = lean_box(0);
v_isShared_566_ = v_isSharedCheck_571_;
goto v_resetjp_564_;
}
v_resetjp_564_:
{
lean_object* v___x_567_; lean_object* v___x_569_; 
v___x_567_ = lean_box(0);
if (v_isShared_566_ == 0)
{
lean_ctor_set(v___x_565_, 0, v___x_567_);
v___x_569_ = v___x_565_;
goto v_reusejp_568_;
}
else
{
lean_object* v_reuseFailAlloc_570_; 
v_reuseFailAlloc_570_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_570_, 0, v___x_567_);
v___x_569_ = v_reuseFailAlloc_570_;
goto v_reusejp_568_;
}
v_reusejp_568_:
{
return v___x_569_;
}
}
}
case 1:
{
lean_object* v___x_573_; lean_object* v___x_574_; 
v___x_573_ = lean_box(0);
v___x_574_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_574_, 0, v___x_573_);
return v___x_574_;
}
case 2:
{
lean_object* v_struct_575_; lean_object* v___x_576_; 
v_struct_575_ = lean_ctor_get(v_e_556_, 2);
lean_inc(v_struct_575_);
lean_dec_ref_known(v_e_556_, 3);
v___x_576_ = l_Lean_Compiler_LCNF_Closure_collectFVar(v_struct_575_, v_a_557_, v_a_558_, v_a_559_, v_a_560_, v_a_561_, v_a_562_);
return v___x_576_;
}
case 3:
{
lean_object* v_args_577_; lean_object* v___x_578_; lean_object* v___x_579_; lean_object* v___x_580_; uint8_t v___x_581_; 
v_args_577_ = lean_ctor_get(v_e_556_, 2);
lean_inc_ref(v_args_577_);
lean_dec_ref_known(v_e_556_, 3);
v___x_578_ = lean_unsigned_to_nat(0u);
v___x_579_ = lean_array_get_size(v_args_577_);
v___x_580_ = lean_box(0);
v___x_581_ = lean_nat_dec_lt(v___x_578_, v___x_579_);
if (v___x_581_ == 0)
{
lean_object* v___x_582_; 
lean_dec_ref(v_args_577_);
v___x_582_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_582_, 0, v___x_580_);
return v___x_582_;
}
else
{
uint8_t v___x_583_; 
v___x_583_ = lean_nat_dec_le(v___x_579_, v___x_579_);
if (v___x_583_ == 0)
{
if (v___x_581_ == 0)
{
lean_object* v___x_584_; 
lean_dec_ref(v_args_577_);
v___x_584_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_584_, 0, v___x_580_);
return v___x_584_;
}
else
{
size_t v___x_585_; size_t v___x_586_; lean_object* v___x_587_; 
v___x_585_ = ((size_t)0ULL);
v___x_586_ = lean_usize_of_nat(v___x_579_);
v___x_587_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Closure_collectLetValue_spec__6(v_args_577_, v___x_585_, v___x_586_, v___x_580_, v_a_557_, v_a_558_, v_a_559_, v_a_560_, v_a_561_, v_a_562_);
lean_dec_ref(v_args_577_);
return v___x_587_;
}
}
else
{
size_t v___x_588_; size_t v___x_589_; lean_object* v___x_590_; 
v___x_588_ = ((size_t)0ULL);
v___x_589_ = lean_usize_of_nat(v___x_579_);
v___x_590_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Closure_collectLetValue_spec__6(v_args_577_, v___x_588_, v___x_589_, v___x_580_, v_a_557_, v_a_558_, v_a_559_, v_a_560_, v_a_561_, v_a_562_);
lean_dec_ref(v_args_577_);
return v___x_590_;
}
}
}
default: 
{
lean_object* v_fvarId_591_; lean_object* v_args_592_; lean_object* v___x_593_; 
v_fvarId_591_ = lean_ctor_get(v_e_556_, 0);
lean_inc(v_fvarId_591_);
v_args_592_ = lean_ctor_get(v_e_556_, 1);
lean_inc_ref(v_args_592_);
lean_dec_ref_known(v_e_556_, 2);
v___x_593_ = l_Lean_Compiler_LCNF_Closure_collectFVar(v_fvarId_591_, v_a_557_, v_a_558_, v_a_559_, v_a_560_, v_a_561_, v_a_562_);
if (lean_obj_tag(v___x_593_) == 0)
{
lean_object* v___x_595_; uint8_t v_isShared_596_; uint8_t v_isSharedCheck_614_; 
v_isSharedCheck_614_ = !lean_is_exclusive(v___x_593_);
if (v_isSharedCheck_614_ == 0)
{
lean_object* v_unused_615_; 
v_unused_615_ = lean_ctor_get(v___x_593_, 0);
lean_dec(v_unused_615_);
v___x_595_ = v___x_593_;
v_isShared_596_ = v_isSharedCheck_614_;
goto v_resetjp_594_;
}
else
{
lean_dec(v___x_593_);
v___x_595_ = lean_box(0);
v_isShared_596_ = v_isSharedCheck_614_;
goto v_resetjp_594_;
}
v_resetjp_594_:
{
lean_object* v___x_597_; lean_object* v___x_598_; lean_object* v___x_599_; uint8_t v___x_600_; 
v___x_597_ = lean_unsigned_to_nat(0u);
v___x_598_ = lean_array_get_size(v_args_592_);
v___x_599_ = lean_box(0);
v___x_600_ = lean_nat_dec_lt(v___x_597_, v___x_598_);
if (v___x_600_ == 0)
{
lean_object* v___x_602_; 
lean_dec_ref(v_args_592_);
if (v_isShared_596_ == 0)
{
lean_ctor_set(v___x_595_, 0, v___x_599_);
v___x_602_ = v___x_595_;
goto v_reusejp_601_;
}
else
{
lean_object* v_reuseFailAlloc_603_; 
v_reuseFailAlloc_603_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_603_, 0, v___x_599_);
v___x_602_ = v_reuseFailAlloc_603_;
goto v_reusejp_601_;
}
v_reusejp_601_:
{
return v___x_602_;
}
}
else
{
uint8_t v___x_604_; 
v___x_604_ = lean_nat_dec_le(v___x_598_, v___x_598_);
if (v___x_604_ == 0)
{
if (v___x_600_ == 0)
{
lean_object* v___x_606_; 
lean_dec_ref(v_args_592_);
if (v_isShared_596_ == 0)
{
lean_ctor_set(v___x_595_, 0, v___x_599_);
v___x_606_ = v___x_595_;
goto v_reusejp_605_;
}
else
{
lean_object* v_reuseFailAlloc_607_; 
v_reuseFailAlloc_607_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_607_, 0, v___x_599_);
v___x_606_ = v_reuseFailAlloc_607_;
goto v_reusejp_605_;
}
v_reusejp_605_:
{
return v___x_606_;
}
}
else
{
size_t v___x_608_; size_t v___x_609_; lean_object* v___x_610_; 
lean_del_object(v___x_595_);
v___x_608_ = ((size_t)0ULL);
v___x_609_ = lean_usize_of_nat(v___x_598_);
v___x_610_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Closure_collectLetValue_spec__6(v_args_592_, v___x_608_, v___x_609_, v___x_599_, v_a_557_, v_a_558_, v_a_559_, v_a_560_, v_a_561_, v_a_562_);
lean_dec_ref(v_args_592_);
return v___x_610_;
}
}
else
{
size_t v___x_611_; size_t v___x_612_; lean_object* v___x_613_; 
lean_del_object(v___x_595_);
v___x_611_ = ((size_t)0ULL);
v___x_612_ = lean_usize_of_nat(v___x_598_);
v___x_613_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Closure_collectLetValue_spec__6(v_args_592_, v___x_611_, v___x_612_, v___x_599_, v_a_557_, v_a_558_, v_a_559_, v_a_560_, v_a_561_, v_a_562_);
lean_dec_ref(v_args_592_);
return v___x_613_;
}
}
}
}
else
{
lean_dec_ref(v_args_592_);
return v___x_593_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Closure_collectCode_spec__10(lean_object* v_as_616_, size_t v_i_617_, size_t v_stop_618_, lean_object* v_b_619_, lean_object* v___y_620_, lean_object* v___y_621_, lean_object* v___y_622_, lean_object* v___y_623_, lean_object* v___y_624_, lean_object* v___y_625_){
_start:
{
lean_object* v___y_628_; uint8_t v___x_633_; 
v___x_633_ = lean_usize_dec_eq(v_i_617_, v_stop_618_);
if (v___x_633_ == 0)
{
lean_object* v___x_634_; 
v___x_634_ = lean_array_uget_borrowed(v_as_616_, v_i_617_);
if (lean_obj_tag(v___x_634_) == 0)
{
lean_object* v_params_635_; lean_object* v_code_636_; lean_object* v___x_637_; 
v_params_635_ = lean_ctor_get(v___x_634_, 1);
v_code_636_ = lean_ctor_get(v___x_634_, 2);
v___x_637_ = l_Lean_Compiler_LCNF_Closure_collectParams(v_params_635_, v___y_620_, v___y_621_, v___y_622_, v___y_623_, v___y_624_, v___y_625_);
if (lean_obj_tag(v___x_637_) == 0)
{
lean_object* v___x_638_; 
lean_dec_ref_known(v___x_637_, 1);
lean_inc_ref(v_code_636_);
v___x_638_ = l_Lean_Compiler_LCNF_Closure_collectCode(v_code_636_, v___y_620_, v___y_621_, v___y_622_, v___y_623_, v___y_624_, v___y_625_);
v___y_628_ = v___x_638_;
goto v___jp_627_;
}
else
{
v___y_628_ = v___x_637_;
goto v___jp_627_;
}
}
else
{
lean_object* v_code_639_; lean_object* v___x_640_; 
v_code_639_ = lean_ctor_get(v___x_634_, 0);
lean_inc_ref(v_code_639_);
v___x_640_ = l_Lean_Compiler_LCNF_Closure_collectCode(v_code_639_, v___y_620_, v___y_621_, v___y_622_, v___y_623_, v___y_624_, v___y_625_);
v___y_628_ = v___x_640_;
goto v___jp_627_;
}
}
else
{
lean_object* v___x_641_; 
v___x_641_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_641_, 0, v_b_619_);
return v___x_641_;
}
v___jp_627_:
{
if (lean_obj_tag(v___y_628_) == 0)
{
lean_object* v_a_629_; size_t v___x_630_; size_t v___x_631_; 
v_a_629_ = lean_ctor_get(v___y_628_, 0);
lean_inc(v_a_629_);
lean_dec_ref_known(v___y_628_, 1);
v___x_630_ = ((size_t)1ULL);
v___x_631_ = lean_usize_add(v_i_617_, v___x_630_);
v_i_617_ = v___x_631_;
v_b_619_ = v_a_629_;
goto _start;
}
else
{
return v___y_628_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Closure_collectCode(lean_object* v_c_642_, lean_object* v_a_643_, lean_object* v_a_644_, lean_object* v_a_645_, lean_object* v_a_646_, lean_object* v_a_647_, lean_object* v_a_648_){
_start:
{
lean_object* v_decl_651_; lean_object* v_k_652_; lean_object* v___y_653_; lean_object* v___y_654_; lean_object* v___y_655_; lean_object* v___y_656_; lean_object* v___y_657_; lean_object* v___y_658_; 
switch(lean_obj_tag(v_c_642_))
{
case 0:
{
lean_object* v_decl_661_; lean_object* v_k_662_; lean_object* v_type_663_; lean_object* v_value_664_; lean_object* v___x_665_; 
v_decl_661_ = lean_ctor_get(v_c_642_, 0);
lean_inc_ref(v_decl_661_);
v_k_662_ = lean_ctor_get(v_c_642_, 1);
lean_inc_ref(v_k_662_);
lean_dec_ref_known(v_c_642_, 2);
v_type_663_ = lean_ctor_get(v_decl_661_, 2);
lean_inc_ref(v_type_663_);
v_value_664_ = lean_ctor_get(v_decl_661_, 3);
lean_inc(v_value_664_);
lean_dec_ref(v_decl_661_);
v___x_665_ = l_Lean_Compiler_LCNF_Closure_collectType(v_type_663_, v_a_643_, v_a_644_, v_a_645_, v_a_646_, v_a_647_, v_a_648_);
if (lean_obj_tag(v___x_665_) == 0)
{
lean_object* v___x_666_; 
lean_dec_ref_known(v___x_665_, 1);
v___x_666_ = l_Lean_Compiler_LCNF_Closure_collectLetValue(v_value_664_, v_a_643_, v_a_644_, v_a_645_, v_a_646_, v_a_647_, v_a_648_);
if (lean_obj_tag(v___x_666_) == 0)
{
lean_dec_ref_known(v___x_666_, 1);
v_c_642_ = v_k_662_;
goto _start;
}
else
{
lean_dec_ref(v_k_662_);
return v___x_666_;
}
}
else
{
lean_dec(v_value_664_);
lean_dec_ref(v_k_662_);
return v___x_665_;
}
}
case 3:
{
lean_object* v_args_668_; lean_object* v___x_669_; lean_object* v___x_670_; lean_object* v___x_671_; uint8_t v___x_672_; 
v_args_668_ = lean_ctor_get(v_c_642_, 1);
lean_inc_ref(v_args_668_);
lean_dec_ref_known(v_c_642_, 2);
v___x_669_ = lean_unsigned_to_nat(0u);
v___x_670_ = lean_array_get_size(v_args_668_);
v___x_671_ = lean_box(0);
v___x_672_ = lean_nat_dec_lt(v___x_669_, v___x_670_);
if (v___x_672_ == 0)
{
lean_object* v___x_673_; 
lean_dec_ref(v_args_668_);
v___x_673_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_673_, 0, v___x_671_);
return v___x_673_;
}
else
{
uint8_t v___x_674_; 
v___x_674_ = lean_nat_dec_le(v___x_670_, v___x_670_);
if (v___x_674_ == 0)
{
if (v___x_672_ == 0)
{
lean_object* v___x_675_; 
lean_dec_ref(v_args_668_);
v___x_675_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_675_, 0, v___x_671_);
return v___x_675_;
}
else
{
size_t v___x_676_; size_t v___x_677_; lean_object* v___x_678_; 
v___x_676_ = ((size_t)0ULL);
v___x_677_ = lean_usize_of_nat(v___x_670_);
v___x_678_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Closure_collectLetValue_spec__6(v_args_668_, v___x_676_, v___x_677_, v___x_671_, v_a_643_, v_a_644_, v_a_645_, v_a_646_, v_a_647_, v_a_648_);
lean_dec_ref(v_args_668_);
return v___x_678_;
}
}
else
{
size_t v___x_679_; size_t v___x_680_; lean_object* v___x_681_; 
v___x_679_ = ((size_t)0ULL);
v___x_680_ = lean_usize_of_nat(v___x_670_);
v___x_681_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Closure_collectLetValue_spec__6(v_args_668_, v___x_679_, v___x_680_, v___x_671_, v_a_643_, v_a_644_, v_a_645_, v_a_646_, v_a_647_, v_a_648_);
lean_dec_ref(v_args_668_);
return v___x_681_;
}
}
}
case 4:
{
lean_object* v_cases_682_; lean_object* v_resultType_683_; lean_object* v_discr_684_; lean_object* v_alts_685_; lean_object* v___x_686_; 
v_cases_682_ = lean_ctor_get(v_c_642_, 0);
lean_inc_ref(v_cases_682_);
lean_dec_ref_known(v_c_642_, 1);
v_resultType_683_ = lean_ctor_get(v_cases_682_, 1);
lean_inc_ref(v_resultType_683_);
v_discr_684_ = lean_ctor_get(v_cases_682_, 2);
lean_inc(v_discr_684_);
v_alts_685_ = lean_ctor_get(v_cases_682_, 3);
lean_inc_ref(v_alts_685_);
lean_dec_ref(v_cases_682_);
v___x_686_ = l_Lean_Compiler_LCNF_Closure_collectType(v_resultType_683_, v_a_643_, v_a_644_, v_a_645_, v_a_646_, v_a_647_, v_a_648_);
if (lean_obj_tag(v___x_686_) == 0)
{
lean_object* v___x_687_; 
lean_dec_ref_known(v___x_686_, 1);
v___x_687_ = l_Lean_Compiler_LCNF_Closure_collectFVar(v_discr_684_, v_a_643_, v_a_644_, v_a_645_, v_a_646_, v_a_647_, v_a_648_);
if (lean_obj_tag(v___x_687_) == 0)
{
lean_object* v___x_689_; uint8_t v_isShared_690_; uint8_t v_isSharedCheck_708_; 
v_isSharedCheck_708_ = !lean_is_exclusive(v___x_687_);
if (v_isSharedCheck_708_ == 0)
{
lean_object* v_unused_709_; 
v_unused_709_ = lean_ctor_get(v___x_687_, 0);
lean_dec(v_unused_709_);
v___x_689_ = v___x_687_;
v_isShared_690_ = v_isSharedCheck_708_;
goto v_resetjp_688_;
}
else
{
lean_dec(v___x_687_);
v___x_689_ = lean_box(0);
v_isShared_690_ = v_isSharedCheck_708_;
goto v_resetjp_688_;
}
v_resetjp_688_:
{
lean_object* v___x_691_; lean_object* v___x_692_; lean_object* v___x_693_; uint8_t v___x_694_; 
v___x_691_ = lean_unsigned_to_nat(0u);
v___x_692_ = lean_array_get_size(v_alts_685_);
v___x_693_ = lean_box(0);
v___x_694_ = lean_nat_dec_lt(v___x_691_, v___x_692_);
if (v___x_694_ == 0)
{
lean_object* v___x_696_; 
lean_dec_ref(v_alts_685_);
if (v_isShared_690_ == 0)
{
lean_ctor_set(v___x_689_, 0, v___x_693_);
v___x_696_ = v___x_689_;
goto v_reusejp_695_;
}
else
{
lean_object* v_reuseFailAlloc_697_; 
v_reuseFailAlloc_697_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_697_, 0, v___x_693_);
v___x_696_ = v_reuseFailAlloc_697_;
goto v_reusejp_695_;
}
v_reusejp_695_:
{
return v___x_696_;
}
}
else
{
uint8_t v___x_698_; 
v___x_698_ = lean_nat_dec_le(v___x_692_, v___x_692_);
if (v___x_698_ == 0)
{
if (v___x_694_ == 0)
{
lean_object* v___x_700_; 
lean_dec_ref(v_alts_685_);
if (v_isShared_690_ == 0)
{
lean_ctor_set(v___x_689_, 0, v___x_693_);
v___x_700_ = v___x_689_;
goto v_reusejp_699_;
}
else
{
lean_object* v_reuseFailAlloc_701_; 
v_reuseFailAlloc_701_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_701_, 0, v___x_693_);
v___x_700_ = v_reuseFailAlloc_701_;
goto v_reusejp_699_;
}
v_reusejp_699_:
{
return v___x_700_;
}
}
else
{
size_t v___x_702_; size_t v___x_703_; lean_object* v___x_704_; 
lean_del_object(v___x_689_);
v___x_702_ = ((size_t)0ULL);
v___x_703_ = lean_usize_of_nat(v___x_692_);
v___x_704_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Closure_collectCode_spec__10(v_alts_685_, v___x_702_, v___x_703_, v___x_693_, v_a_643_, v_a_644_, v_a_645_, v_a_646_, v_a_647_, v_a_648_);
lean_dec_ref(v_alts_685_);
return v___x_704_;
}
}
else
{
size_t v___x_705_; size_t v___x_706_; lean_object* v___x_707_; 
lean_del_object(v___x_689_);
v___x_705_ = ((size_t)0ULL);
v___x_706_ = lean_usize_of_nat(v___x_692_);
v___x_707_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Closure_collectCode_spec__10(v_alts_685_, v___x_705_, v___x_706_, v___x_693_, v_a_643_, v_a_644_, v_a_645_, v_a_646_, v_a_647_, v_a_648_);
lean_dec_ref(v_alts_685_);
return v___x_707_;
}
}
}
}
else
{
lean_dec_ref(v_alts_685_);
return v___x_687_;
}
}
else
{
lean_dec_ref(v_alts_685_);
lean_dec(v_discr_684_);
return v___x_686_;
}
}
case 5:
{
lean_object* v_fvarId_710_; lean_object* v___x_711_; 
v_fvarId_710_ = lean_ctor_get(v_c_642_, 0);
lean_inc(v_fvarId_710_);
lean_dec_ref_known(v_c_642_, 1);
v___x_711_ = l_Lean_Compiler_LCNF_Closure_collectFVar(v_fvarId_710_, v_a_643_, v_a_644_, v_a_645_, v_a_646_, v_a_647_, v_a_648_);
return v___x_711_;
}
case 6:
{
lean_object* v_type_712_; lean_object* v___x_713_; 
v_type_712_ = lean_ctor_get(v_c_642_, 0);
lean_inc_ref(v_type_712_);
lean_dec_ref_known(v_c_642_, 1);
v___x_713_ = l_Lean_Compiler_LCNF_Closure_collectType(v_type_712_, v_a_643_, v_a_644_, v_a_645_, v_a_646_, v_a_647_, v_a_648_);
return v___x_713_;
}
default: 
{
lean_object* v_decl_714_; lean_object* v_k_715_; 
v_decl_714_ = lean_ctor_get(v_c_642_, 0);
lean_inc_ref(v_decl_714_);
v_k_715_ = lean_ctor_get(v_c_642_, 1);
lean_inc_ref(v_k_715_);
lean_dec_ref(v_c_642_);
v_decl_651_ = v_decl_714_;
v_k_652_ = v_k_715_;
v___y_653_ = v_a_643_;
v___y_654_ = v_a_644_;
v___y_655_ = v_a_645_;
v___y_656_ = v_a_646_;
v___y_657_ = v_a_647_;
v___y_658_ = v_a_648_;
goto v___jp_650_;
}
}
v___jp_650_:
{
lean_object* v___x_659_; 
v___x_659_ = l_Lean_Compiler_LCNF_Closure_collectFunDecl(v_decl_651_, v___y_653_, v___y_654_, v___y_655_, v___y_656_, v___y_657_, v___y_658_);
if (lean_obj_tag(v___x_659_) == 0)
{
lean_dec_ref_known(v___x_659_, 1);
v_c_642_ = v_k_652_;
v_a_643_ = v___y_653_;
v_a_644_ = v___y_654_;
v_a_645_ = v___y_655_;
v_a_646_ = v___y_656_;
v_a_647_ = v___y_657_;
v_a_648_ = v___y_658_;
goto _start;
}
else
{
lean_dec_ref(v_k_652_);
return v___x_659_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Closure_collectFunDecl(lean_object* v_decl_716_, lean_object* v_a_717_, lean_object* v_a_718_, lean_object* v_a_719_, lean_object* v_a_720_, lean_object* v_a_721_, lean_object* v_a_722_){
_start:
{
lean_object* v_params_724_; lean_object* v_type_725_; lean_object* v_value_726_; lean_object* v___x_727_; 
v_params_724_ = lean_ctor_get(v_decl_716_, 2);
lean_inc_ref(v_params_724_);
v_type_725_ = lean_ctor_get(v_decl_716_, 3);
lean_inc_ref(v_type_725_);
v_value_726_ = lean_ctor_get(v_decl_716_, 4);
lean_inc_ref(v_value_726_);
lean_dec_ref(v_decl_716_);
v___x_727_ = l_Lean_Compiler_LCNF_Closure_collectType(v_type_725_, v_a_717_, v_a_718_, v_a_719_, v_a_720_, v_a_721_, v_a_722_);
if (lean_obj_tag(v___x_727_) == 0)
{
lean_object* v___x_728_; 
lean_dec_ref_known(v___x_727_, 1);
v___x_728_ = l_Lean_Compiler_LCNF_Closure_collectParams(v_params_724_, v_a_717_, v_a_718_, v_a_719_, v_a_720_, v_a_721_, v_a_722_);
lean_dec_ref(v_params_724_);
if (lean_obj_tag(v___x_728_) == 0)
{
lean_object* v___x_729_; 
lean_dec_ref_known(v___x_728_, 1);
v___x_729_ = l_Lean_Compiler_LCNF_Closure_collectCode(v_value_726_, v_a_717_, v_a_718_, v_a_719_, v_a_720_, v_a_721_, v_a_722_);
return v___x_729_;
}
else
{
lean_dec_ref(v_value_726_);
return v___x_728_;
}
}
else
{
lean_dec_ref(v_value_726_);
lean_dec_ref(v_params_724_);
return v___x_727_;
}
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Closure_collectFVar___closed__3(void){
_start:
{
lean_object* v___x_733_; lean_object* v___x_734_; lean_object* v___x_735_; lean_object* v___x_736_; lean_object* v___x_737_; lean_object* v___x_738_; 
v___x_733_ = ((lean_object*)(l_Lean_Compiler_LCNF_Closure_collectFVar___closed__2));
v___x_734_ = lean_unsigned_to_nat(10u);
v___x_735_ = lean_unsigned_to_nat(149u);
v___x_736_ = ((lean_object*)(l_Lean_Compiler_LCNF_Closure_collectFVar___closed__1));
v___x_737_ = ((lean_object*)(l_Lean_Compiler_LCNF_Closure_collectFVar___closed__0));
v___x_738_ = l_mkPanicMessageWithDecl(v___x_737_, v___x_736_, v___x_735_, v___x_734_, v___x_733_);
return v___x_738_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Closure_collectFVar(lean_object* v_fvarId_739_, lean_object* v_a_740_, lean_object* v_a_741_, lean_object* v_a_742_, lean_object* v_a_743_, lean_object* v_a_744_, lean_object* v_a_745_){
_start:
{
lean_object* v___x_747_; lean_object* v_visited_748_; uint8_t v___x_749_; 
v___x_747_ = lean_st_ref_get(v_a_741_);
v_visited_748_ = lean_ctor_get(v___x_747_, 0);
lean_inc_ref(v_visited_748_);
lean_dec(v___x_747_);
v___x_749_ = l_Lean_FVarIdHashSet_contains(v_visited_748_, v_fvarId_739_);
lean_dec_ref(v_visited_748_);
if (v___x_749_ == 0)
{
lean_object* v___x_750_; 
lean_inc(v_fvarId_739_);
v___x_750_ = l_Lean_Compiler_LCNF_Closure_markVisited___redArg(v_fvarId_739_, v_a_741_);
if (lean_obj_tag(v___x_750_) == 0)
{
lean_object* v___x_752_; uint8_t v_isShared_753_; uint8_t v_isSharedCheck_939_; 
v_isSharedCheck_939_ = !lean_is_exclusive(v___x_750_);
if (v_isSharedCheck_939_ == 0)
{
lean_object* v_unused_940_; 
v_unused_940_ = lean_ctor_get(v___x_750_, 0);
lean_dec(v_unused_940_);
v___x_752_ = v___x_750_;
v_isShared_753_ = v_isSharedCheck_939_;
goto v_resetjp_751_;
}
else
{
lean_dec(v___x_750_);
v___x_752_ = lean_box(0);
v_isShared_753_ = v_isSharedCheck_939_;
goto v_resetjp_751_;
}
v_resetjp_751_:
{
lean_object* v_inScope_754_; lean_object* v_abstract_755_; lean_object* v___x_756_; uint8_t v___x_757_; 
v_inScope_754_ = lean_ctor_get(v_a_740_, 0);
v_abstract_755_ = lean_ctor_get(v_a_740_, 1);
lean_inc_ref(v_inScope_754_);
lean_inc(v_fvarId_739_);
v___x_756_ = lean_apply_1(v_inScope_754_, v_fvarId_739_);
v___x_757_ = lean_unbox(v___x_756_);
if (v___x_757_ == 0)
{
lean_object* v___x_758_; lean_object* v___x_760_; 
lean_dec(v_fvarId_739_);
v___x_758_ = lean_box(0);
if (v_isShared_753_ == 0)
{
lean_ctor_set(v___x_752_, 0, v___x_758_);
v___x_760_ = v___x_752_;
goto v_reusejp_759_;
}
else
{
lean_object* v_reuseFailAlloc_761_; 
v_reuseFailAlloc_761_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_761_, 0, v___x_758_);
v___x_760_ = v_reuseFailAlloc_761_;
goto v_reusejp_759_;
}
v_reusejp_759_:
{
return v___x_760_;
}
}
else
{
uint8_t v___x_762_; lean_object* v___x_763_; 
lean_del_object(v___x_752_);
v___x_762_ = 0;
v___x_763_ = l_Lean_Compiler_LCNF_findFunDecl_x3f___redArg(v___x_762_, v_fvarId_739_, v_a_743_);
if (lean_obj_tag(v___x_763_) == 0)
{
lean_object* v_a_764_; lean_object* v___x_766_; uint8_t v_isShared_767_; uint8_t v_isSharedCheck_930_; 
v_a_764_ = lean_ctor_get(v___x_763_, 0);
v_isSharedCheck_930_ = !lean_is_exclusive(v___x_763_);
if (v_isSharedCheck_930_ == 0)
{
v___x_766_ = v___x_763_;
v_isShared_767_ = v_isSharedCheck_930_;
goto v_resetjp_765_;
}
else
{
lean_inc(v_a_764_);
lean_dec(v___x_763_);
v___x_766_ = lean_box(0);
v_isShared_767_ = v_isSharedCheck_930_;
goto v_resetjp_765_;
}
v_resetjp_765_:
{
if (lean_obj_tag(v_a_764_) == 1)
{
lean_object* v_val_768_; lean_object* v___x_770_; uint8_t v_isShared_771_; uint8_t v_isSharedCheck_821_; 
lean_dec(v_fvarId_739_);
v_val_768_ = lean_ctor_get(v_a_764_, 0);
v_isSharedCheck_821_ = !lean_is_exclusive(v_a_764_);
if (v_isSharedCheck_821_ == 0)
{
v___x_770_ = v_a_764_;
v_isShared_771_ = v_isSharedCheck_821_;
goto v_resetjp_769_;
}
else
{
lean_inc(v_val_768_);
lean_dec(v_a_764_);
v___x_770_ = lean_box(0);
v_isShared_771_ = v_isSharedCheck_821_;
goto v_resetjp_769_;
}
v_resetjp_769_:
{
lean_object* v_fvarId_772_; lean_object* v_binderName_773_; lean_object* v_type_774_; lean_object* v___x_775_; uint8_t v___x_776_; 
v_fvarId_772_ = lean_ctor_get(v_val_768_, 0);
v_binderName_773_ = lean_ctor_get(v_val_768_, 1);
v_type_774_ = lean_ctor_get(v_val_768_, 3);
lean_inc_ref(v_abstract_755_);
lean_inc(v_fvarId_772_);
v___x_775_ = lean_apply_1(v_abstract_755_, v_fvarId_772_);
v___x_776_ = lean_unbox(v___x_775_);
if (v___x_776_ == 0)
{
lean_object* v___x_777_; 
lean_del_object(v___x_766_);
lean_inc(v_val_768_);
v___x_777_ = l_Lean_Compiler_LCNF_Closure_collectFunDecl(v_val_768_, v_a_740_, v_a_741_, v_a_742_, v_a_743_, v_a_744_, v_a_745_);
if (lean_obj_tag(v___x_777_) == 0)
{
lean_object* v___x_779_; uint8_t v_isShared_780_; uint8_t v_isSharedCheck_801_; 
v_isSharedCheck_801_ = !lean_is_exclusive(v___x_777_);
if (v_isSharedCheck_801_ == 0)
{
lean_object* v_unused_802_; 
v_unused_802_ = lean_ctor_get(v___x_777_, 0);
lean_dec(v_unused_802_);
v___x_779_ = v___x_777_;
v_isShared_780_ = v_isSharedCheck_801_;
goto v_resetjp_778_;
}
else
{
lean_dec(v___x_777_);
v___x_779_ = lean_box(0);
v_isShared_780_ = v_isSharedCheck_801_;
goto v_resetjp_778_;
}
v_resetjp_778_:
{
lean_object* v___x_781_; lean_object* v_visited_782_; lean_object* v_params_783_; lean_object* v_decls_784_; lean_object* v___x_786_; uint8_t v_isShared_787_; uint8_t v_isSharedCheck_800_; 
v___x_781_ = lean_st_ref_take(v_a_741_);
v_visited_782_ = lean_ctor_get(v___x_781_, 0);
v_params_783_ = lean_ctor_get(v___x_781_, 1);
v_decls_784_ = lean_ctor_get(v___x_781_, 2);
v_isSharedCheck_800_ = !lean_is_exclusive(v___x_781_);
if (v_isSharedCheck_800_ == 0)
{
v___x_786_ = v___x_781_;
v_isShared_787_ = v_isSharedCheck_800_;
goto v_resetjp_785_;
}
else
{
lean_inc(v_decls_784_);
lean_inc(v_params_783_);
lean_inc(v_visited_782_);
lean_dec(v___x_781_);
v___x_786_ = lean_box(0);
v_isShared_787_ = v_isSharedCheck_800_;
goto v_resetjp_785_;
}
v_resetjp_785_:
{
lean_object* v___x_788_; lean_object* v___x_790_; 
v___x_788_ = lean_box(0);
if (v_isShared_771_ == 0)
{
v___x_790_ = v___x_770_;
goto v_reusejp_789_;
}
else
{
lean_object* v_reuseFailAlloc_799_; 
v_reuseFailAlloc_799_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_799_, 0, v_val_768_);
v___x_790_ = v_reuseFailAlloc_799_;
goto v_reusejp_789_;
}
v_reusejp_789_:
{
lean_object* v___x_791_; lean_object* v___x_793_; 
v___x_791_ = lean_array_push(v_decls_784_, v___x_790_);
if (v_isShared_787_ == 0)
{
lean_ctor_set(v___x_786_, 2, v___x_791_);
v___x_793_ = v___x_786_;
goto v_reusejp_792_;
}
else
{
lean_object* v_reuseFailAlloc_798_; 
v_reuseFailAlloc_798_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_798_, 0, v_visited_782_);
lean_ctor_set(v_reuseFailAlloc_798_, 1, v_params_783_);
lean_ctor_set(v_reuseFailAlloc_798_, 2, v___x_791_);
v___x_793_ = v_reuseFailAlloc_798_;
goto v_reusejp_792_;
}
v_reusejp_792_:
{
lean_object* v___x_794_; lean_object* v___x_796_; 
v___x_794_ = lean_st_ref_put(v_a_741_, v___x_793_);
if (v_isShared_780_ == 0)
{
lean_ctor_set(v___x_779_, 0, v___x_788_);
v___x_796_ = v___x_779_;
goto v_reusejp_795_;
}
else
{
lean_object* v_reuseFailAlloc_797_; 
v_reuseFailAlloc_797_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_797_, 0, v___x_788_);
v___x_796_ = v_reuseFailAlloc_797_;
goto v_reusejp_795_;
}
v_reusejp_795_:
{
return v___x_796_;
}
}
}
}
}
}
else
{
lean_del_object(v___x_770_);
lean_dec(v_val_768_);
return v___x_777_;
}
}
else
{
lean_object* v___x_803_; lean_object* v_visited_804_; lean_object* v_params_805_; lean_object* v_decls_806_; lean_object* v___x_808_; uint8_t v_isShared_809_; uint8_t v_isSharedCheck_820_; 
lean_inc_ref(v_type_774_);
lean_inc(v_binderName_773_);
lean_inc(v_fvarId_772_);
lean_del_object(v___x_770_);
lean_dec(v_val_768_);
v___x_803_ = lean_st_ref_take(v_a_741_);
v_visited_804_ = lean_ctor_get(v___x_803_, 0);
v_params_805_ = lean_ctor_get(v___x_803_, 1);
v_decls_806_ = lean_ctor_get(v___x_803_, 2);
v_isSharedCheck_820_ = !lean_is_exclusive(v___x_803_);
if (v_isSharedCheck_820_ == 0)
{
v___x_808_ = v___x_803_;
v_isShared_809_ = v_isSharedCheck_820_;
goto v_resetjp_807_;
}
else
{
lean_inc(v_decls_806_);
lean_inc(v_params_805_);
lean_inc(v_visited_804_);
lean_dec(v___x_803_);
v___x_808_ = lean_box(0);
v_isShared_809_ = v_isSharedCheck_820_;
goto v_resetjp_807_;
}
v_resetjp_807_:
{
lean_object* v___x_810_; lean_object* v___x_811_; lean_object* v___x_812_; lean_object* v___x_814_; 
v___x_810_ = lean_box(0);
v___x_811_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_811_, 0, v_fvarId_772_);
lean_ctor_set(v___x_811_, 1, v_binderName_773_);
lean_ctor_set(v___x_811_, 2, v_type_774_);
lean_ctor_set_uint8(v___x_811_, sizeof(void*)*3, v___x_749_);
v___x_812_ = lean_array_push(v_params_805_, v___x_811_);
if (v_isShared_809_ == 0)
{
lean_ctor_set(v___x_808_, 1, v___x_812_);
v___x_814_ = v___x_808_;
goto v_reusejp_813_;
}
else
{
lean_object* v_reuseFailAlloc_819_; 
v_reuseFailAlloc_819_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_819_, 0, v_visited_804_);
lean_ctor_set(v_reuseFailAlloc_819_, 1, v___x_812_);
lean_ctor_set(v_reuseFailAlloc_819_, 2, v_decls_806_);
v___x_814_ = v_reuseFailAlloc_819_;
goto v_reusejp_813_;
}
v_reusejp_813_:
{
lean_object* v___x_815_; lean_object* v___x_817_; 
v___x_815_ = lean_st_ref_put(v_a_741_, v___x_814_);
if (v_isShared_767_ == 0)
{
lean_ctor_set(v___x_766_, 0, v___x_810_);
v___x_817_ = v___x_766_;
goto v_reusejp_816_;
}
else
{
lean_object* v_reuseFailAlloc_818_; 
v_reuseFailAlloc_818_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_818_, 0, v___x_810_);
v___x_817_ = v_reuseFailAlloc_818_;
goto v_reusejp_816_;
}
v_reusejp_816_:
{
return v___x_817_;
}
}
}
}
}
}
else
{
lean_object* v___x_822_; 
lean_del_object(v___x_766_);
lean_dec(v_a_764_);
v___x_822_ = l_Lean_Compiler_LCNF_findParam_x3f___redArg(v___x_762_, v_fvarId_739_, v_a_743_);
if (lean_obj_tag(v___x_822_) == 0)
{
lean_object* v_a_823_; 
v_a_823_ = lean_ctor_get(v___x_822_, 0);
lean_inc(v_a_823_);
lean_dec_ref_known(v___x_822_, 1);
if (lean_obj_tag(v_a_823_) == 1)
{
lean_object* v_val_824_; lean_object* v_type_825_; lean_object* v___x_826_; 
lean_dec(v_fvarId_739_);
v_val_824_ = lean_ctor_get(v_a_823_, 0);
lean_inc(v_val_824_);
lean_dec_ref_known(v_a_823_, 1);
v_type_825_ = lean_ctor_get(v_val_824_, 2);
lean_inc_ref(v_type_825_);
v___x_826_ = l_Lean_Compiler_LCNF_Closure_collectType(v_type_825_, v_a_740_, v_a_741_, v_a_742_, v_a_743_, v_a_744_, v_a_745_);
if (lean_obj_tag(v___x_826_) == 0)
{
lean_object* v___x_828_; uint8_t v_isShared_829_; uint8_t v_isSharedCheck_847_; 
v_isSharedCheck_847_ = !lean_is_exclusive(v___x_826_);
if (v_isSharedCheck_847_ == 0)
{
lean_object* v_unused_848_; 
v_unused_848_ = lean_ctor_get(v___x_826_, 0);
lean_dec(v_unused_848_);
v___x_828_ = v___x_826_;
v_isShared_829_ = v_isSharedCheck_847_;
goto v_resetjp_827_;
}
else
{
lean_dec(v___x_826_);
v___x_828_ = lean_box(0);
v_isShared_829_ = v_isSharedCheck_847_;
goto v_resetjp_827_;
}
v_resetjp_827_:
{
lean_object* v___x_830_; lean_object* v_visited_831_; lean_object* v_params_832_; lean_object* v_decls_833_; lean_object* v___x_835_; uint8_t v_isShared_836_; uint8_t v_isSharedCheck_846_; 
v___x_830_ = lean_st_ref_take(v_a_741_);
v_visited_831_ = lean_ctor_get(v___x_830_, 0);
v_params_832_ = lean_ctor_get(v___x_830_, 1);
v_decls_833_ = lean_ctor_get(v___x_830_, 2);
v_isSharedCheck_846_ = !lean_is_exclusive(v___x_830_);
if (v_isSharedCheck_846_ == 0)
{
v___x_835_ = v___x_830_;
v_isShared_836_ = v_isSharedCheck_846_;
goto v_resetjp_834_;
}
else
{
lean_inc(v_decls_833_);
lean_inc(v_params_832_);
lean_inc(v_visited_831_);
lean_dec(v___x_830_);
v___x_835_ = lean_box(0);
v_isShared_836_ = v_isSharedCheck_846_;
goto v_resetjp_834_;
}
v_resetjp_834_:
{
lean_object* v___x_837_; lean_object* v___x_838_; lean_object* v___x_840_; 
v___x_837_ = lean_box(0);
v___x_838_ = lean_array_push(v_params_832_, v_val_824_);
if (v_isShared_836_ == 0)
{
lean_ctor_set(v___x_835_, 1, v___x_838_);
v___x_840_ = v___x_835_;
goto v_reusejp_839_;
}
else
{
lean_object* v_reuseFailAlloc_845_; 
v_reuseFailAlloc_845_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_845_, 0, v_visited_831_);
lean_ctor_set(v_reuseFailAlloc_845_, 1, v___x_838_);
lean_ctor_set(v_reuseFailAlloc_845_, 2, v_decls_833_);
v___x_840_ = v_reuseFailAlloc_845_;
goto v_reusejp_839_;
}
v_reusejp_839_:
{
lean_object* v___x_841_; lean_object* v___x_843_; 
v___x_841_ = lean_st_ref_put(v_a_741_, v___x_840_);
if (v_isShared_829_ == 0)
{
lean_ctor_set(v___x_828_, 0, v___x_837_);
v___x_843_ = v___x_828_;
goto v_reusejp_842_;
}
else
{
lean_object* v_reuseFailAlloc_844_; 
v_reuseFailAlloc_844_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_844_, 0, v___x_837_);
v___x_843_ = v_reuseFailAlloc_844_;
goto v_reusejp_842_;
}
v_reusejp_842_:
{
return v___x_843_;
}
}
}
}
}
else
{
lean_dec(v_val_824_);
return v___x_826_;
}
}
else
{
lean_object* v___x_849_; 
lean_dec(v_a_823_);
v___x_849_ = l_Lean_Compiler_LCNF_findLetDecl_x3f___redArg(v___x_762_, v_fvarId_739_, v_a_743_);
lean_dec(v_fvarId_739_);
if (lean_obj_tag(v___x_849_) == 0)
{
lean_object* v_a_850_; 
v_a_850_ = lean_ctor_get(v___x_849_, 0);
lean_inc(v_a_850_);
lean_dec_ref_known(v___x_849_, 1);
if (lean_obj_tag(v_a_850_) == 1)
{
lean_object* v_val_851_; lean_object* v___x_853_; uint8_t v_isShared_854_; uint8_t v_isSharedCheck_911_; 
v_val_851_ = lean_ctor_get(v_a_850_, 0);
v_isSharedCheck_911_ = !lean_is_exclusive(v_a_850_);
if (v_isSharedCheck_911_ == 0)
{
v___x_853_ = v_a_850_;
v_isShared_854_ = v_isSharedCheck_911_;
goto v_resetjp_852_;
}
else
{
lean_inc(v_val_851_);
lean_dec(v_a_850_);
v___x_853_ = lean_box(0);
v_isShared_854_ = v_isSharedCheck_911_;
goto v_resetjp_852_;
}
v_resetjp_852_:
{
lean_object* v_fvarId_855_; lean_object* v_binderName_856_; lean_object* v_type_857_; lean_object* v_value_858_; lean_object* v___x_859_; 
v_fvarId_855_ = lean_ctor_get(v_val_851_, 0);
v_binderName_856_ = lean_ctor_get(v_val_851_, 1);
v_type_857_ = lean_ctor_get(v_val_851_, 2);
v_value_858_ = lean_ctor_get(v_val_851_, 3);
lean_inc_ref(v_type_857_);
v___x_859_ = l_Lean_Compiler_LCNF_Closure_collectType(v_type_857_, v_a_740_, v_a_741_, v_a_742_, v_a_743_, v_a_744_, v_a_745_);
if (lean_obj_tag(v___x_859_) == 0)
{
lean_object* v___x_861_; uint8_t v_isShared_862_; uint8_t v_isSharedCheck_909_; 
v_isSharedCheck_909_ = !lean_is_exclusive(v___x_859_);
if (v_isSharedCheck_909_ == 0)
{
lean_object* v_unused_910_; 
v_unused_910_ = lean_ctor_get(v___x_859_, 0);
lean_dec(v_unused_910_);
v___x_861_ = v___x_859_;
v_isShared_862_ = v_isSharedCheck_909_;
goto v_resetjp_860_;
}
else
{
lean_dec(v___x_859_);
v___x_861_ = lean_box(0);
v_isShared_862_ = v_isSharedCheck_909_;
goto v_resetjp_860_;
}
v_resetjp_860_:
{
lean_object* v___x_863_; uint8_t v___x_864_; 
lean_inc_ref(v_abstract_755_);
lean_inc(v_fvarId_855_);
v___x_863_ = lean_apply_1(v_abstract_755_, v_fvarId_855_);
v___x_864_ = lean_unbox(v___x_863_);
if (v___x_864_ == 0)
{
lean_object* v___x_865_; 
lean_del_object(v___x_861_);
lean_inc(v_value_858_);
v___x_865_ = l_Lean_Compiler_LCNF_Closure_collectLetValue(v_value_858_, v_a_740_, v_a_741_, v_a_742_, v_a_743_, v_a_744_, v_a_745_);
if (lean_obj_tag(v___x_865_) == 0)
{
lean_object* v___x_867_; uint8_t v_isShared_868_; uint8_t v_isSharedCheck_889_; 
v_isSharedCheck_889_ = !lean_is_exclusive(v___x_865_);
if (v_isSharedCheck_889_ == 0)
{
lean_object* v_unused_890_; 
v_unused_890_ = lean_ctor_get(v___x_865_, 0);
lean_dec(v_unused_890_);
v___x_867_ = v___x_865_;
v_isShared_868_ = v_isSharedCheck_889_;
goto v_resetjp_866_;
}
else
{
lean_dec(v___x_865_);
v___x_867_ = lean_box(0);
v_isShared_868_ = v_isSharedCheck_889_;
goto v_resetjp_866_;
}
v_resetjp_866_:
{
lean_object* v___x_869_; lean_object* v_visited_870_; lean_object* v_params_871_; lean_object* v_decls_872_; lean_object* v___x_874_; uint8_t v_isShared_875_; uint8_t v_isSharedCheck_888_; 
v___x_869_ = lean_st_ref_take(v_a_741_);
v_visited_870_ = lean_ctor_get(v___x_869_, 0);
v_params_871_ = lean_ctor_get(v___x_869_, 1);
v_decls_872_ = lean_ctor_get(v___x_869_, 2);
v_isSharedCheck_888_ = !lean_is_exclusive(v___x_869_);
if (v_isSharedCheck_888_ == 0)
{
v___x_874_ = v___x_869_;
v_isShared_875_ = v_isSharedCheck_888_;
goto v_resetjp_873_;
}
else
{
lean_inc(v_decls_872_);
lean_inc(v_params_871_);
lean_inc(v_visited_870_);
lean_dec(v___x_869_);
v___x_874_ = lean_box(0);
v_isShared_875_ = v_isSharedCheck_888_;
goto v_resetjp_873_;
}
v_resetjp_873_:
{
lean_object* v___x_876_; lean_object* v___x_878_; 
v___x_876_ = lean_box(0);
if (v_isShared_854_ == 0)
{
lean_ctor_set_tag(v___x_853_, 0);
v___x_878_ = v___x_853_;
goto v_reusejp_877_;
}
else
{
lean_object* v_reuseFailAlloc_887_; 
v_reuseFailAlloc_887_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_887_, 0, v_val_851_);
v___x_878_ = v_reuseFailAlloc_887_;
goto v_reusejp_877_;
}
v_reusejp_877_:
{
lean_object* v___x_879_; lean_object* v___x_881_; 
v___x_879_ = lean_array_push(v_decls_872_, v___x_878_);
if (v_isShared_875_ == 0)
{
lean_ctor_set(v___x_874_, 2, v___x_879_);
v___x_881_ = v___x_874_;
goto v_reusejp_880_;
}
else
{
lean_object* v_reuseFailAlloc_886_; 
v_reuseFailAlloc_886_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_886_, 0, v_visited_870_);
lean_ctor_set(v_reuseFailAlloc_886_, 1, v_params_871_);
lean_ctor_set(v_reuseFailAlloc_886_, 2, v___x_879_);
v___x_881_ = v_reuseFailAlloc_886_;
goto v_reusejp_880_;
}
v_reusejp_880_:
{
lean_object* v___x_882_; lean_object* v___x_884_; 
v___x_882_ = lean_st_ref_put(v_a_741_, v___x_881_);
if (v_isShared_868_ == 0)
{
lean_ctor_set(v___x_867_, 0, v___x_876_);
v___x_884_ = v___x_867_;
goto v_reusejp_883_;
}
else
{
lean_object* v_reuseFailAlloc_885_; 
v_reuseFailAlloc_885_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_885_, 0, v___x_876_);
v___x_884_ = v_reuseFailAlloc_885_;
goto v_reusejp_883_;
}
v_reusejp_883_:
{
return v___x_884_;
}
}
}
}
}
}
else
{
lean_del_object(v___x_853_);
lean_dec(v_val_851_);
return v___x_865_;
}
}
else
{
lean_object* v___x_891_; lean_object* v_visited_892_; lean_object* v_params_893_; lean_object* v_decls_894_; lean_object* v___x_896_; uint8_t v_isShared_897_; uint8_t v_isSharedCheck_908_; 
lean_inc_ref(v_type_857_);
lean_inc(v_binderName_856_);
lean_inc(v_fvarId_855_);
lean_del_object(v___x_853_);
lean_dec(v_val_851_);
v___x_891_ = lean_st_ref_take(v_a_741_);
v_visited_892_ = lean_ctor_get(v___x_891_, 0);
v_params_893_ = lean_ctor_get(v___x_891_, 1);
v_decls_894_ = lean_ctor_get(v___x_891_, 2);
v_isSharedCheck_908_ = !lean_is_exclusive(v___x_891_);
if (v_isSharedCheck_908_ == 0)
{
v___x_896_ = v___x_891_;
v_isShared_897_ = v_isSharedCheck_908_;
goto v_resetjp_895_;
}
else
{
lean_inc(v_decls_894_);
lean_inc(v_params_893_);
lean_inc(v_visited_892_);
lean_dec(v___x_891_);
v___x_896_ = lean_box(0);
v_isShared_897_ = v_isSharedCheck_908_;
goto v_resetjp_895_;
}
v_resetjp_895_:
{
lean_object* v___x_898_; lean_object* v___x_899_; lean_object* v___x_900_; lean_object* v___x_902_; 
v___x_898_ = lean_box(0);
v___x_899_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_899_, 0, v_fvarId_855_);
lean_ctor_set(v___x_899_, 1, v_binderName_856_);
lean_ctor_set(v___x_899_, 2, v_type_857_);
lean_ctor_set_uint8(v___x_899_, sizeof(void*)*3, v___x_749_);
v___x_900_ = lean_array_push(v_params_893_, v___x_899_);
if (v_isShared_897_ == 0)
{
lean_ctor_set(v___x_896_, 1, v___x_900_);
v___x_902_ = v___x_896_;
goto v_reusejp_901_;
}
else
{
lean_object* v_reuseFailAlloc_907_; 
v_reuseFailAlloc_907_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_907_, 0, v_visited_892_);
lean_ctor_set(v_reuseFailAlloc_907_, 1, v___x_900_);
lean_ctor_set(v_reuseFailAlloc_907_, 2, v_decls_894_);
v___x_902_ = v_reuseFailAlloc_907_;
goto v_reusejp_901_;
}
v_reusejp_901_:
{
lean_object* v___x_903_; lean_object* v___x_905_; 
v___x_903_ = lean_st_ref_put(v_a_741_, v___x_902_);
if (v_isShared_862_ == 0)
{
lean_ctor_set(v___x_861_, 0, v___x_898_);
v___x_905_ = v___x_861_;
goto v_reusejp_904_;
}
else
{
lean_object* v_reuseFailAlloc_906_; 
v_reuseFailAlloc_906_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_906_, 0, v___x_898_);
v___x_905_ = v_reuseFailAlloc_906_;
goto v_reusejp_904_;
}
v_reusejp_904_:
{
return v___x_905_;
}
}
}
}
}
}
else
{
lean_del_object(v___x_853_);
lean_dec(v_val_851_);
return v___x_859_;
}
}
}
else
{
lean_object* v___x_912_; lean_object* v___x_913_; 
lean_dec(v_a_850_);
v___x_912_ = lean_obj_once(&l_Lean_Compiler_LCNF_Closure_collectFVar___closed__3, &l_Lean_Compiler_LCNF_Closure_collectFVar___closed__3_once, _init_l_Lean_Compiler_LCNF_Closure_collectFVar___closed__3);
v___x_913_ = l_panic___at___00Lean_Compiler_LCNF_Closure_collectFVar_spec__4(v___x_912_, v_a_740_, v_a_741_, v_a_742_, v_a_743_, v_a_744_, v_a_745_);
return v___x_913_;
}
}
else
{
lean_object* v_a_914_; lean_object* v___x_916_; uint8_t v_isShared_917_; uint8_t v_isSharedCheck_921_; 
v_a_914_ = lean_ctor_get(v___x_849_, 0);
v_isSharedCheck_921_ = !lean_is_exclusive(v___x_849_);
if (v_isSharedCheck_921_ == 0)
{
v___x_916_ = v___x_849_;
v_isShared_917_ = v_isSharedCheck_921_;
goto v_resetjp_915_;
}
else
{
lean_inc(v_a_914_);
lean_dec(v___x_849_);
v___x_916_ = lean_box(0);
v_isShared_917_ = v_isSharedCheck_921_;
goto v_resetjp_915_;
}
v_resetjp_915_:
{
lean_object* v___x_919_; 
if (v_isShared_917_ == 0)
{
v___x_919_ = v___x_916_;
goto v_reusejp_918_;
}
else
{
lean_object* v_reuseFailAlloc_920_; 
v_reuseFailAlloc_920_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_920_, 0, v_a_914_);
v___x_919_ = v_reuseFailAlloc_920_;
goto v_reusejp_918_;
}
v_reusejp_918_:
{
return v___x_919_;
}
}
}
}
}
else
{
lean_object* v_a_922_; lean_object* v___x_924_; uint8_t v_isShared_925_; uint8_t v_isSharedCheck_929_; 
lean_dec(v_fvarId_739_);
v_a_922_ = lean_ctor_get(v___x_822_, 0);
v_isSharedCheck_929_ = !lean_is_exclusive(v___x_822_);
if (v_isSharedCheck_929_ == 0)
{
v___x_924_ = v___x_822_;
v_isShared_925_ = v_isSharedCheck_929_;
goto v_resetjp_923_;
}
else
{
lean_inc(v_a_922_);
lean_dec(v___x_822_);
v___x_924_ = lean_box(0);
v_isShared_925_ = v_isSharedCheck_929_;
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
lean_object* v_reuseFailAlloc_928_; 
v_reuseFailAlloc_928_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_928_, 0, v_a_922_);
v___x_927_ = v_reuseFailAlloc_928_;
goto v_reusejp_926_;
}
v_reusejp_926_:
{
return v___x_927_;
}
}
}
}
}
}
else
{
lean_object* v_a_931_; lean_object* v___x_933_; uint8_t v_isShared_934_; uint8_t v_isSharedCheck_938_; 
lean_dec(v_fvarId_739_);
v_a_931_ = lean_ctor_get(v___x_763_, 0);
v_isSharedCheck_938_ = !lean_is_exclusive(v___x_763_);
if (v_isSharedCheck_938_ == 0)
{
v___x_933_ = v___x_763_;
v_isShared_934_ = v_isSharedCheck_938_;
goto v_resetjp_932_;
}
else
{
lean_inc(v_a_931_);
lean_dec(v___x_763_);
v___x_933_ = lean_box(0);
v_isShared_934_ = v_isSharedCheck_938_;
goto v_resetjp_932_;
}
v_resetjp_932_:
{
lean_object* v___x_936_; 
if (v_isShared_934_ == 0)
{
v___x_936_ = v___x_933_;
goto v_reusejp_935_;
}
else
{
lean_object* v_reuseFailAlloc_937_; 
v_reuseFailAlloc_937_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_937_, 0, v_a_931_);
v___x_936_ = v_reuseFailAlloc_937_;
goto v_reusejp_935_;
}
v_reusejp_935_:
{
return v___x_936_;
}
}
}
}
}
}
else
{
lean_dec(v_fvarId_739_);
return v___x_750_;
}
}
else
{
lean_object* v___x_941_; lean_object* v___x_942_; 
lean_dec(v_fvarId_739_);
v___x_941_ = lean_box(0);
v___x_942_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_942_, 0, v___x_941_);
return v___x_942_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Closure_collectType___lam__0(lean_object* v_e_943_, lean_object* v___y_944_, lean_object* v___y_945_, lean_object* v___y_946_, lean_object* v___y_947_, lean_object* v___y_948_, lean_object* v___y_949_){
_start:
{
lean_object* v___x_951_; lean_object* v___x_952_; 
v___x_951_ = l_Lean_Expr_fvarId_x21(v_e_943_);
v___x_952_ = l_Lean_Compiler_LCNF_Closure_collectFVar(v___x_951_, v___y_944_, v___y_945_, v___y_946_, v___y_947_, v___y_948_, v___y_949_);
return v___x_952_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Closure_collectArg___boxed(lean_object* v_arg_953_, lean_object* v_a_954_, lean_object* v_a_955_, lean_object* v_a_956_, lean_object* v_a_957_, lean_object* v_a_958_, lean_object* v_a_959_, lean_object* v_a_960_){
_start:
{
lean_object* v_res_961_; 
v_res_961_ = l_Lean_Compiler_LCNF_Closure_collectArg(v_arg_953_, v_a_954_, v_a_955_, v_a_956_, v_a_957_, v_a_958_, v_a_959_);
lean_dec(v_a_959_);
lean_dec_ref(v_a_958_);
lean_dec(v_a_957_);
lean_dec_ref(v_a_956_);
lean_dec(v_a_955_);
lean_dec_ref(v_a_954_);
return v_res_961_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Closure_collectType___boxed(lean_object* v_type_962_, lean_object* v_a_963_, lean_object* v_a_964_, lean_object* v_a_965_, lean_object* v_a_966_, lean_object* v_a_967_, lean_object* v_a_968_, lean_object* v_a_969_){
_start:
{
lean_object* v_res_970_; 
v_res_970_ = l_Lean_Compiler_LCNF_Closure_collectType(v_type_962_, v_a_963_, v_a_964_, v_a_965_, v_a_966_, v_a_967_, v_a_968_);
lean_dec(v_a_968_);
lean_dec_ref(v_a_967_);
lean_dec(v_a_966_);
lean_dec_ref(v_a_965_);
lean_dec(v_a_964_);
lean_dec_ref(v_a_963_);
return v_res_970_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Closure_collectFunDecl___boxed(lean_object* v_decl_971_, lean_object* v_a_972_, lean_object* v_a_973_, lean_object* v_a_974_, lean_object* v_a_975_, lean_object* v_a_976_, lean_object* v_a_977_, lean_object* v_a_978_){
_start:
{
lean_object* v_res_979_; 
v_res_979_ = l_Lean_Compiler_LCNF_Closure_collectFunDecl(v_decl_971_, v_a_972_, v_a_973_, v_a_974_, v_a_975_, v_a_976_, v_a_977_);
lean_dec(v_a_977_);
lean_dec_ref(v_a_976_);
lean_dec(v_a_975_);
lean_dec_ref(v_a_974_);
lean_dec(v_a_973_);
lean_dec_ref(v_a_972_);
return v_res_979_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Closure_collectLetValue_spec__6___boxed(lean_object* v_as_980_, lean_object* v_i_981_, lean_object* v_stop_982_, lean_object* v_b_983_, lean_object* v___y_984_, lean_object* v___y_985_, lean_object* v___y_986_, lean_object* v___y_987_, lean_object* v___y_988_, lean_object* v___y_989_, lean_object* v___y_990_){
_start:
{
size_t v_i_boxed_991_; size_t v_stop_boxed_992_; lean_object* v_res_993_; 
v_i_boxed_991_ = lean_unbox_usize(v_i_981_);
lean_dec(v_i_981_);
v_stop_boxed_992_ = lean_unbox_usize(v_stop_982_);
lean_dec(v_stop_982_);
v_res_993_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Closure_collectLetValue_spec__6(v_as_980_, v_i_boxed_991_, v_stop_boxed_992_, v_b_983_, v___y_984_, v___y_985_, v___y_986_, v___y_987_, v___y_988_, v___y_989_);
lean_dec(v___y_989_);
lean_dec_ref(v___y_988_);
lean_dec(v___y_987_);
lean_dec_ref(v___y_986_);
lean_dec(v___y_985_);
lean_dec_ref(v___y_984_);
lean_dec_ref(v_as_980_);
return v_res_993_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Closure_collectParams_spec__0___boxed(lean_object* v_as_994_, lean_object* v_i_995_, lean_object* v_stop_996_, lean_object* v_b_997_, lean_object* v___y_998_, lean_object* v___y_999_, lean_object* v___y_1000_, lean_object* v___y_1001_, lean_object* v___y_1002_, lean_object* v___y_1003_, lean_object* v___y_1004_){
_start:
{
size_t v_i_boxed_1005_; size_t v_stop_boxed_1006_; lean_object* v_res_1007_; 
v_i_boxed_1005_ = lean_unbox_usize(v_i_995_);
lean_dec(v_i_995_);
v_stop_boxed_1006_ = lean_unbox_usize(v_stop_996_);
lean_dec(v_stop_996_);
v_res_1007_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Closure_collectParams_spec__0(v_as_994_, v_i_boxed_1005_, v_stop_boxed_1006_, v_b_997_, v___y_998_, v___y_999_, v___y_1000_, v___y_1001_, v___y_1002_, v___y_1003_);
lean_dec(v___y_1003_);
lean_dec_ref(v___y_1002_);
lean_dec(v___y_1001_);
lean_dec_ref(v___y_1000_);
lean_dec(v___y_999_);
lean_dec_ref(v___y_998_);
lean_dec_ref(v_as_994_);
return v_res_1007_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Closure_collectParams___boxed(lean_object* v_params_1008_, lean_object* v_a_1009_, lean_object* v_a_1010_, lean_object* v_a_1011_, lean_object* v_a_1012_, lean_object* v_a_1013_, lean_object* v_a_1014_, lean_object* v_a_1015_){
_start:
{
lean_object* v_res_1016_; 
v_res_1016_ = l_Lean_Compiler_LCNF_Closure_collectParams(v_params_1008_, v_a_1009_, v_a_1010_, v_a_1011_, v_a_1012_, v_a_1013_, v_a_1014_);
lean_dec(v_a_1014_);
lean_dec_ref(v_a_1013_);
lean_dec(v_a_1012_);
lean_dec_ref(v_a_1011_);
lean_dec(v_a_1010_);
lean_dec_ref(v_a_1009_);
lean_dec_ref(v_params_1008_);
return v_res_1016_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Closure_collectCode_spec__10___boxed(lean_object* v_as_1017_, lean_object* v_i_1018_, lean_object* v_stop_1019_, lean_object* v_b_1020_, lean_object* v___y_1021_, lean_object* v___y_1022_, lean_object* v___y_1023_, lean_object* v___y_1024_, lean_object* v___y_1025_, lean_object* v___y_1026_, lean_object* v___y_1027_){
_start:
{
size_t v_i_boxed_1028_; size_t v_stop_boxed_1029_; lean_object* v_res_1030_; 
v_i_boxed_1028_ = lean_unbox_usize(v_i_1018_);
lean_dec(v_i_1018_);
v_stop_boxed_1029_ = lean_unbox_usize(v_stop_1019_);
lean_dec(v_stop_1019_);
v_res_1030_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Closure_collectCode_spec__10(v_as_1017_, v_i_boxed_1028_, v_stop_boxed_1029_, v_b_1020_, v___y_1021_, v___y_1022_, v___y_1023_, v___y_1024_, v___y_1025_, v___y_1026_);
lean_dec(v___y_1026_);
lean_dec_ref(v___y_1025_);
lean_dec(v___y_1024_);
lean_dec_ref(v___y_1023_);
lean_dec(v___y_1022_);
lean_dec_ref(v___y_1021_);
lean_dec_ref(v_as_1017_);
return v_res_1030_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Closure_collectLetValue___boxed(lean_object* v_e_1031_, lean_object* v_a_1032_, lean_object* v_a_1033_, lean_object* v_a_1034_, lean_object* v_a_1035_, lean_object* v_a_1036_, lean_object* v_a_1037_, lean_object* v_a_1038_){
_start:
{
lean_object* v_res_1039_; 
v_res_1039_ = l_Lean_Compiler_LCNF_Closure_collectLetValue(v_e_1031_, v_a_1032_, v_a_1033_, v_a_1034_, v_a_1035_, v_a_1036_, v_a_1037_);
lean_dec(v_a_1037_);
lean_dec_ref(v_a_1036_);
lean_dec(v_a_1035_);
lean_dec_ref(v_a_1034_);
lean_dec(v_a_1033_);
lean_dec_ref(v_a_1032_);
return v_res_1039_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Closure_collectCode___boxed(lean_object* v_c_1040_, lean_object* v_a_1041_, lean_object* v_a_1042_, lean_object* v_a_1043_, lean_object* v_a_1044_, lean_object* v_a_1045_, lean_object* v_a_1046_, lean_object* v_a_1047_){
_start:
{
lean_object* v_res_1048_; 
v_res_1048_ = l_Lean_Compiler_LCNF_Closure_collectCode(v_c_1040_, v_a_1041_, v_a_1042_, v_a_1043_, v_a_1044_, v_a_1045_, v_a_1046_);
lean_dec(v_a_1046_);
lean_dec_ref(v_a_1045_);
lean_dec(v_a_1044_);
lean_dec_ref(v_a_1043_);
lean_dec(v_a_1042_);
lean_dec_ref(v_a_1041_);
return v_res_1048_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Closure_collectFVar___boxed(lean_object* v_fvarId_1049_, lean_object* v_a_1050_, lean_object* v_a_1051_, lean_object* v_a_1052_, lean_object* v_a_1053_, lean_object* v_a_1054_, lean_object* v_a_1055_, lean_object* v_a_1056_){
_start:
{
lean_object* v_res_1057_; 
v_res_1057_ = l_Lean_Compiler_LCNF_Closure_collectFVar(v_fvarId_1049_, v_a_1050_, v_a_1051_, v_a_1052_, v_a_1053_, v_a_1054_, v_a_1055_);
lean_dec(v_a_1055_);
lean_dec_ref(v_a_1054_);
lean_dec(v_a_1053_);
lean_dec_ref(v_a_1052_);
lean_dec(v_a_1051_);
lean_dec_ref(v_a_1050_);
return v_res_1057_;
}
}
LEAN_EXPORT lean_object* l_Lean_ForEachExprWhere_visited___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4_spec__9(lean_object* v_e_1058_, lean_object* v_a_1059_, lean_object* v___y_1060_, lean_object* v___y_1061_, lean_object* v___y_1062_, lean_object* v___y_1063_, lean_object* v___y_1064_, lean_object* v___y_1065_){
_start:
{
lean_object* v___x_1067_; 
v___x_1067_ = l_Lean_ForEachExprWhere_visited___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4_spec__9___redArg(v_e_1058_, v_a_1059_);
return v___x_1067_;
}
}
LEAN_EXPORT lean_object* l_Lean_ForEachExprWhere_visited___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4_spec__9___boxed(lean_object* v_e_1068_, lean_object* v_a_1069_, lean_object* v___y_1070_, lean_object* v___y_1071_, lean_object* v___y_1072_, lean_object* v___y_1073_, lean_object* v___y_1074_, lean_object* v___y_1075_, lean_object* v___y_1076_){
_start:
{
lean_object* v_res_1077_; 
v_res_1077_ = l_Lean_ForEachExprWhere_visited___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4_spec__9(v_e_1068_, v_a_1069_, v___y_1070_, v___y_1071_, v___y_1072_, v___y_1073_, v___y_1074_, v___y_1075_);
lean_dec(v___y_1075_);
lean_dec_ref(v___y_1074_);
lean_dec(v___y_1073_);
lean_dec_ref(v___y_1072_);
lean_dec(v___y_1071_);
lean_dec_ref(v___y_1070_);
lean_dec(v_a_1069_);
return v_res_1077_;
}
}
LEAN_EXPORT lean_object* l_Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4_spec__10(lean_object* v_e_1078_, lean_object* v_a_1079_, lean_object* v___y_1080_, lean_object* v___y_1081_, lean_object* v___y_1082_, lean_object* v___y_1083_, lean_object* v___y_1084_, lean_object* v___y_1085_){
_start:
{
lean_object* v___x_1087_; 
v___x_1087_ = l_Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4_spec__10___redArg(v_e_1078_, v_a_1079_);
return v___x_1087_;
}
}
LEAN_EXPORT lean_object* l_Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4_spec__10___boxed(lean_object* v_e_1088_, lean_object* v_a_1089_, lean_object* v___y_1090_, lean_object* v___y_1091_, lean_object* v___y_1092_, lean_object* v___y_1093_, lean_object* v___y_1094_, lean_object* v___y_1095_, lean_object* v___y_1096_){
_start:
{
lean_object* v_res_1097_; 
v_res_1097_ = l_Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4_spec__10(v_e_1088_, v_a_1089_, v___y_1090_, v___y_1091_, v___y_1092_, v___y_1093_, v___y_1094_, v___y_1095_);
lean_dec(v___y_1095_);
lean_dec_ref(v___y_1094_);
lean_dec(v___y_1093_);
lean_dec_ref(v___y_1092_);
lean_dec(v___y_1091_);
lean_dec_ref(v___y_1090_);
lean_dec(v_a_1089_);
return v_res_1097_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4_spec__10_spec__13(lean_object* v_00_u03b2_1098_, lean_object* v_m_1099_, lean_object* v_a_1100_){
_start:
{
uint8_t v___x_1101_; 
v___x_1101_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4_spec__10_spec__13___redArg(v_m_1099_, v_a_1100_);
return v___x_1101_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4_spec__10_spec__13___boxed(lean_object* v_00_u03b2_1102_, lean_object* v_m_1103_, lean_object* v_a_1104_){
_start:
{
uint8_t v_res_1105_; lean_object* v_r_1106_; 
v_res_1105_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4_spec__10_spec__13(v_00_u03b2_1102_, v_m_1103_, v_a_1104_);
lean_dec_ref(v_a_1104_);
lean_dec_ref(v_m_1103_);
v_r_1106_ = lean_box(v_res_1105_);
return v_r_1106_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4_spec__10_spec__14(lean_object* v_00_u03b2_1107_, lean_object* v_m_1108_, lean_object* v_a_1109_, lean_object* v_b_1110_){
_start:
{
lean_object* v___x_1111_; 
v___x_1111_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4_spec__10_spec__14___redArg(v_m_1108_, v_a_1109_, v_b_1110_);
return v___x_1111_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4_spec__10_spec__13_spec__14(lean_object* v_00_u03b2_1112_, lean_object* v_a_1113_, lean_object* v_x_1114_){
_start:
{
uint8_t v___x_1115_; 
v___x_1115_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4_spec__10_spec__13_spec__14___redArg(v_a_1113_, v_x_1114_);
return v___x_1115_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4_spec__10_spec__13_spec__14___boxed(lean_object* v_00_u03b2_1116_, lean_object* v_a_1117_, lean_object* v_x_1118_){
_start:
{
uint8_t v_res_1119_; lean_object* v_r_1120_; 
v_res_1119_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4_spec__10_spec__13_spec__14(v_00_u03b2_1116_, v_a_1117_, v_x_1118_);
lean_dec(v_x_1118_);
lean_dec_ref(v_a_1117_);
v_r_1120_ = lean_box(v_res_1119_);
return v_r_1120_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4_spec__10_spec__14_spec__16(lean_object* v_00_u03b2_1121_, lean_object* v_data_1122_){
_start:
{
lean_object* v___x_1123_; 
v___x_1123_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4_spec__10_spec__14_spec__16___redArg(v_data_1122_);
return v___x_1123_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4_spec__10_spec__14_spec__16_spec__17(lean_object* v_00_u03b2_1124_, lean_object* v_i_1125_, lean_object* v_source_1126_, lean_object* v_target_1127_){
_start:
{
lean_object* v___x_1128_; 
v___x_1128_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4_spec__10_spec__14_spec__16_spec__17___redArg(v_i_1125_, v_source_1126_, v_target_1127_);
return v___x_1128_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4_spec__10_spec__14_spec__16_spec__17_spec__18(lean_object* v_00_u03b2_1129_, lean_object* v_x_1130_, lean_object* v_x_1131_){
_start:
{
lean_object* v___x_1132_; 
v___x_1132_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_Compiler_LCNF_Closure_collectType_spec__2_spec__4_spec__10_spec__14_spec__16_spec__17_spec__18___redArg(v_x_1130_, v_x_1131_);
return v___x_1132_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Closure_run_spec__1(lean_object* v_a_1133_, lean_object* v_as_1134_, size_t v_i_1135_, size_t v_stop_1136_, lean_object* v_b_1137_){
_start:
{
lean_object* v___y_1139_; uint8_t v___x_1143_; 
v___x_1143_ = lean_usize_dec_eq(v_i_1135_, v_stop_1136_);
if (v___x_1143_ == 0)
{
lean_object* v___x_1144_; lean_object* v___x_1145_; uint8_t v___x_1146_; 
v___x_1144_ = lean_array_uget_borrowed(v_as_1134_, v_i_1135_);
v___x_1145_ = l_Lean_Compiler_LCNF_CodeDecl_fvarId___redArg(v___x_1144_);
v___x_1146_ = l_Lean_FVarIdSet_contains(v_a_1133_, v___x_1145_);
lean_dec(v___x_1145_);
if (v___x_1146_ == 0)
{
lean_object* v___x_1147_; 
lean_inc(v___x_1144_);
v___x_1147_ = lean_array_push(v_b_1137_, v___x_1144_);
v___y_1139_ = v___x_1147_;
goto v___jp_1138_;
}
else
{
v___y_1139_ = v_b_1137_;
goto v___jp_1138_;
}
}
else
{
return v_b_1137_;
}
v___jp_1138_:
{
size_t v___x_1140_; size_t v___x_1141_; 
v___x_1140_ = ((size_t)1ULL);
v___x_1141_ = lean_usize_add(v_i_1135_, v___x_1140_);
v_i_1135_ = v___x_1141_;
v_b_1137_ = v___y_1139_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Closure_run_spec__1___boxed(lean_object* v_a_1148_, lean_object* v_as_1149_, lean_object* v_i_1150_, lean_object* v_stop_1151_, lean_object* v_b_1152_){
_start:
{
size_t v_i_boxed_1153_; size_t v_stop_boxed_1154_; lean_object* v_res_1155_; 
v_i_boxed_1153_ = lean_unbox_usize(v_i_1150_);
lean_dec(v_i_1150_);
v_stop_boxed_1154_ = lean_unbox_usize(v_stop_1151_);
lean_dec(v_stop_1151_);
v_res_1155_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Closure_run_spec__1(v_a_1148_, v_as_1149_, v_i_boxed_1153_, v_stop_boxed_1154_, v_b_1152_);
lean_dec_ref(v_as_1149_);
lean_dec(v_a_1148_);
return v_res_1155_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_Closure_run_spec__0___redArg(lean_object* v_as_1156_, size_t v_sz_1157_, size_t v_i_1158_, lean_object* v_b_1159_){
_start:
{
uint8_t v___x_1161_; 
v___x_1161_ = lean_usize_dec_lt(v_i_1158_, v_sz_1157_);
if (v___x_1161_ == 0)
{
lean_object* v___x_1162_; 
v___x_1162_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1162_, 0, v_b_1159_);
return v___x_1162_;
}
else
{
lean_object* v_a_1163_; lean_object* v_fvarId_1164_; lean_object* v___x_1165_; size_t v___x_1166_; size_t v___x_1167_; 
v_a_1163_ = lean_array_uget_borrowed(v_as_1156_, v_i_1158_);
v_fvarId_1164_ = lean_ctor_get(v_a_1163_, 0);
lean_inc(v_fvarId_1164_);
v___x_1165_ = l_Lean_FVarIdSet_insert(v_b_1159_, v_fvarId_1164_);
v___x_1166_ = ((size_t)1ULL);
v___x_1167_ = lean_usize_add(v_i_1158_, v___x_1166_);
v_i_1158_ = v___x_1167_;
v_b_1159_ = v___x_1165_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_Closure_run_spec__0___redArg___boxed(lean_object* v_as_1169_, lean_object* v_sz_1170_, lean_object* v_i_1171_, lean_object* v_b_1172_, lean_object* v___y_1173_){
_start:
{
size_t v_sz_boxed_1174_; size_t v_i_boxed_1175_; lean_object* v_res_1176_; 
v_sz_boxed_1174_ = lean_unbox_usize(v_sz_1170_);
lean_dec(v_sz_1170_);
v_i_boxed_1175_ = lean_unbox_usize(v_i_1171_);
lean_dec(v_i_1171_);
v_res_1176_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_Closure_run_spec__0___redArg(v_as_1169_, v_sz_boxed_1174_, v_i_boxed_1175_, v_b_1172_);
lean_dec_ref(v_as_1169_);
return v_res_1176_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Closure_run___redArg___closed__0(void){
_start:
{
lean_object* v___x_1177_; lean_object* v___x_1178_; lean_object* v___x_1179_; 
v___x_1177_ = lean_box(0);
v___x_1178_ = lean_unsigned_to_nat(16u);
v___x_1179_ = lean_mk_array(v___x_1178_, v___x_1177_);
return v___x_1179_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Closure_run___redArg___closed__1(void){
_start:
{
lean_object* v___x_1180_; lean_object* v___x_1181_; lean_object* v___x_1182_; 
v___x_1180_ = lean_obj_once(&l_Lean_Compiler_LCNF_Closure_run___redArg___closed__0, &l_Lean_Compiler_LCNF_Closure_run___redArg___closed__0_once, _init_l_Lean_Compiler_LCNF_Closure_run___redArg___closed__0);
v___x_1181_ = lean_unsigned_to_nat(0u);
v___x_1182_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1182_, 0, v___x_1181_);
lean_ctor_set(v___x_1182_, 1, v___x_1180_);
return v___x_1182_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Closure_run___redArg___closed__3(void){
_start:
{
lean_object* v___x_1185_; lean_object* v___x_1186_; lean_object* v___x_1187_; 
v___x_1185_ = ((lean_object*)(l_Lean_Compiler_LCNF_Closure_run___redArg___closed__2));
v___x_1186_ = lean_obj_once(&l_Lean_Compiler_LCNF_Closure_run___redArg___closed__1, &l_Lean_Compiler_LCNF_Closure_run___redArg___closed__1_once, _init_l_Lean_Compiler_LCNF_Closure_run___redArg___closed__1);
v___x_1187_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1187_, 0, v___x_1186_);
lean_ctor_set(v___x_1187_, 1, v___x_1185_);
lean_ctor_set(v___x_1187_, 2, v___x_1185_);
return v___x_1187_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Closure_run___redArg(lean_object* v_x_1188_, lean_object* v_inScope_1189_, lean_object* v_abstract_1190_, lean_object* v_a_1191_, lean_object* v_a_1192_, lean_object* v_a_1193_, lean_object* v_a_1194_){
_start:
{
lean_object* v___x_1196_; lean_object* v___x_1197_; lean_object* v___x_1198_; lean_object* v___x_1199_; lean_object* v___x_1200_; lean_object* v___x_1201_; 
v___x_1196_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1196_, 0, v_inScope_1189_);
lean_ctor_set(v___x_1196_, 1, v_abstract_1190_);
v___x_1197_ = lean_unsigned_to_nat(0u);
v___x_1198_ = ((lean_object*)(l_Lean_Compiler_LCNF_Closure_run___redArg___closed__2));
v___x_1199_ = lean_obj_once(&l_Lean_Compiler_LCNF_Closure_run___redArg___closed__3, &l_Lean_Compiler_LCNF_Closure_run___redArg___closed__3_once, _init_l_Lean_Compiler_LCNF_Closure_run___redArg___closed__3);
v___x_1200_ = lean_st_mk_ref(v___x_1199_);
lean_inc(v_a_1194_);
lean_inc_ref(v_a_1193_);
lean_inc(v_a_1192_);
lean_inc_ref(v_a_1191_);
lean_inc(v___x_1200_);
v___x_1201_ = lean_apply_7(v_x_1188_, v___x_1196_, v___x_1200_, v_a_1191_, v_a_1192_, v_a_1193_, v_a_1194_, lean_box(0));
if (lean_obj_tag(v___x_1201_) == 0)
{
lean_object* v_a_1202_; lean_object* v___x_1203_; lean_object* v_params_1204_; lean_object* v_decls_1205_; lean_object* v___x_1206_; size_t v_sz_1207_; size_t v___x_1208_; lean_object* v___x_1209_; 
v_a_1202_ = lean_ctor_get(v___x_1201_, 0);
lean_inc(v_a_1202_);
lean_dec_ref_known(v___x_1201_, 1);
v___x_1203_ = lean_st_ref_get(v___x_1200_);
lean_dec(v___x_1200_);
v_params_1204_ = lean_ctor_get(v___x_1203_, 1);
lean_inc_ref(v_params_1204_);
v_decls_1205_ = lean_ctor_get(v___x_1203_, 2);
lean_inc_ref(v_decls_1205_);
lean_dec(v___x_1203_);
v___x_1206_ = lean_box(1);
v_sz_1207_ = lean_array_size(v_params_1204_);
v___x_1208_ = ((size_t)0ULL);
v___x_1209_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_Closure_run_spec__0___redArg(v_params_1204_, v_sz_1207_, v___x_1208_, v___x_1206_);
if (lean_obj_tag(v___x_1209_) == 0)
{
lean_object* v_a_1210_; lean_object* v___x_1212_; uint8_t v_isShared_1213_; uint8_t v_isSharedCheck_1228_; 
v_a_1210_ = lean_ctor_get(v___x_1209_, 0);
v_isSharedCheck_1228_ = !lean_is_exclusive(v___x_1209_);
if (v_isSharedCheck_1228_ == 0)
{
v___x_1212_ = v___x_1209_;
v_isShared_1213_ = v_isSharedCheck_1228_;
goto v_resetjp_1211_;
}
else
{
lean_inc(v_a_1210_);
lean_dec(v___x_1209_);
v___x_1212_ = lean_box(0);
v_isShared_1213_ = v_isSharedCheck_1228_;
goto v_resetjp_1211_;
}
v_resetjp_1211_:
{
lean_object* v___y_1215_; lean_object* v___x_1221_; uint8_t v___x_1222_; 
v___x_1221_ = lean_array_get_size(v_decls_1205_);
v___x_1222_ = lean_nat_dec_lt(v___x_1197_, v___x_1221_);
if (v___x_1222_ == 0)
{
lean_dec(v_a_1210_);
lean_dec_ref(v_decls_1205_);
v___y_1215_ = v___x_1198_;
goto v___jp_1214_;
}
else
{
uint8_t v___x_1223_; 
v___x_1223_ = lean_nat_dec_le(v___x_1221_, v___x_1221_);
if (v___x_1223_ == 0)
{
if (v___x_1222_ == 0)
{
lean_dec(v_a_1210_);
lean_dec_ref(v_decls_1205_);
v___y_1215_ = v___x_1198_;
goto v___jp_1214_;
}
else
{
size_t v___x_1224_; lean_object* v___x_1225_; 
v___x_1224_ = lean_usize_of_nat(v___x_1221_);
v___x_1225_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Closure_run_spec__1(v_a_1210_, v_decls_1205_, v___x_1208_, v___x_1224_, v___x_1198_);
lean_dec_ref(v_decls_1205_);
lean_dec(v_a_1210_);
v___y_1215_ = v___x_1225_;
goto v___jp_1214_;
}
}
else
{
size_t v___x_1226_; lean_object* v___x_1227_; 
v___x_1226_ = lean_usize_of_nat(v___x_1221_);
v___x_1227_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Closure_run_spec__1(v_a_1210_, v_decls_1205_, v___x_1208_, v___x_1226_, v___x_1198_);
lean_dec_ref(v_decls_1205_);
lean_dec(v_a_1210_);
v___y_1215_ = v___x_1227_;
goto v___jp_1214_;
}
}
v___jp_1214_:
{
lean_object* v___x_1216_; lean_object* v___x_1217_; lean_object* v___x_1219_; 
v___x_1216_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1216_, 0, v_params_1204_);
lean_ctor_set(v___x_1216_, 1, v___y_1215_);
v___x_1217_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1217_, 0, v_a_1202_);
lean_ctor_set(v___x_1217_, 1, v___x_1216_);
if (v_isShared_1213_ == 0)
{
lean_ctor_set(v___x_1212_, 0, v___x_1217_);
v___x_1219_ = v___x_1212_;
goto v_reusejp_1218_;
}
else
{
lean_object* v_reuseFailAlloc_1220_; 
v_reuseFailAlloc_1220_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1220_, 0, v___x_1217_);
v___x_1219_ = v_reuseFailAlloc_1220_;
goto v_reusejp_1218_;
}
v_reusejp_1218_:
{
return v___x_1219_;
}
}
}
}
else
{
lean_object* v_a_1229_; lean_object* v___x_1231_; uint8_t v_isShared_1232_; uint8_t v_isSharedCheck_1236_; 
lean_dec_ref(v_decls_1205_);
lean_dec_ref(v_params_1204_);
lean_dec(v_a_1202_);
v_a_1229_ = lean_ctor_get(v___x_1209_, 0);
v_isSharedCheck_1236_ = !lean_is_exclusive(v___x_1209_);
if (v_isSharedCheck_1236_ == 0)
{
v___x_1231_ = v___x_1209_;
v_isShared_1232_ = v_isSharedCheck_1236_;
goto v_resetjp_1230_;
}
else
{
lean_inc(v_a_1229_);
lean_dec(v___x_1209_);
v___x_1231_ = lean_box(0);
v_isShared_1232_ = v_isSharedCheck_1236_;
goto v_resetjp_1230_;
}
v_resetjp_1230_:
{
lean_object* v___x_1234_; 
if (v_isShared_1232_ == 0)
{
v___x_1234_ = v___x_1231_;
goto v_reusejp_1233_;
}
else
{
lean_object* v_reuseFailAlloc_1235_; 
v_reuseFailAlloc_1235_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1235_, 0, v_a_1229_);
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
lean_object* v_a_1237_; lean_object* v___x_1239_; uint8_t v_isShared_1240_; uint8_t v_isSharedCheck_1244_; 
lean_dec(v___x_1200_);
v_a_1237_ = lean_ctor_get(v___x_1201_, 0);
v_isSharedCheck_1244_ = !lean_is_exclusive(v___x_1201_);
if (v_isSharedCheck_1244_ == 0)
{
v___x_1239_ = v___x_1201_;
v_isShared_1240_ = v_isSharedCheck_1244_;
goto v_resetjp_1238_;
}
else
{
lean_inc(v_a_1237_);
lean_dec(v___x_1201_);
v___x_1239_ = lean_box(0);
v_isShared_1240_ = v_isSharedCheck_1244_;
goto v_resetjp_1238_;
}
v_resetjp_1238_:
{
lean_object* v___x_1242_; 
if (v_isShared_1240_ == 0)
{
v___x_1242_ = v___x_1239_;
goto v_reusejp_1241_;
}
else
{
lean_object* v_reuseFailAlloc_1243_; 
v_reuseFailAlloc_1243_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1243_, 0, v_a_1237_);
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
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Closure_run___redArg___boxed(lean_object* v_x_1245_, lean_object* v_inScope_1246_, lean_object* v_abstract_1247_, lean_object* v_a_1248_, lean_object* v_a_1249_, lean_object* v_a_1250_, lean_object* v_a_1251_, lean_object* v_a_1252_){
_start:
{
lean_object* v_res_1253_; 
v_res_1253_ = l_Lean_Compiler_LCNF_Closure_run___redArg(v_x_1245_, v_inScope_1246_, v_abstract_1247_, v_a_1248_, v_a_1249_, v_a_1250_, v_a_1251_);
lean_dec(v_a_1251_);
lean_dec_ref(v_a_1250_);
lean_dec(v_a_1249_);
lean_dec_ref(v_a_1248_);
return v_res_1253_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Closure_run(lean_object* v_00_u03b1_1254_, lean_object* v_x_1255_, lean_object* v_inScope_1256_, lean_object* v_abstract_1257_, lean_object* v_a_1258_, lean_object* v_a_1259_, lean_object* v_a_1260_, lean_object* v_a_1261_){
_start:
{
lean_object* v___x_1263_; 
v___x_1263_ = l_Lean_Compiler_LCNF_Closure_run___redArg(v_x_1255_, v_inScope_1256_, v_abstract_1257_, v_a_1258_, v_a_1259_, v_a_1260_, v_a_1261_);
return v___x_1263_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Closure_run___boxed(lean_object* v_00_u03b1_1264_, lean_object* v_x_1265_, lean_object* v_inScope_1266_, lean_object* v_abstract_1267_, lean_object* v_a_1268_, lean_object* v_a_1269_, lean_object* v_a_1270_, lean_object* v_a_1271_, lean_object* v_a_1272_){
_start:
{
lean_object* v_res_1273_; 
v_res_1273_ = l_Lean_Compiler_LCNF_Closure_run(v_00_u03b1_1264_, v_x_1265_, v_inScope_1266_, v_abstract_1267_, v_a_1268_, v_a_1269_, v_a_1270_, v_a_1271_);
lean_dec(v_a_1271_);
lean_dec_ref(v_a_1270_);
lean_dec(v_a_1269_);
lean_dec_ref(v_a_1268_);
return v_res_1273_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_Closure_run_spec__0(lean_object* v_as_1274_, size_t v_sz_1275_, size_t v_i_1276_, lean_object* v_b_1277_, lean_object* v___y_1278_, lean_object* v___y_1279_, lean_object* v___y_1280_, lean_object* v___y_1281_){
_start:
{
lean_object* v___x_1283_; 
v___x_1283_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_Closure_run_spec__0___redArg(v_as_1274_, v_sz_1275_, v_i_1276_, v_b_1277_);
return v___x_1283_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_Closure_run_spec__0___boxed(lean_object* v_as_1284_, lean_object* v_sz_1285_, lean_object* v_i_1286_, lean_object* v_b_1287_, lean_object* v___y_1288_, lean_object* v___y_1289_, lean_object* v___y_1290_, lean_object* v___y_1291_, lean_object* v___y_1292_){
_start:
{
size_t v_sz_boxed_1293_; size_t v_i_boxed_1294_; lean_object* v_res_1295_; 
v_sz_boxed_1293_ = lean_unbox_usize(v_sz_1285_);
lean_dec(v_sz_1285_);
v_i_boxed_1294_ = lean_unbox_usize(v_i_1286_);
lean_dec(v_i_1286_);
v_res_1295_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_Closure_run_spec__0(v_as_1284_, v_sz_boxed_1293_, v_i_boxed_1294_, v_b_1287_, v___y_1288_, v___y_1289_, v___y_1290_, v___y_1291_);
lean_dec(v___y_1291_);
lean_dec_ref(v___y_1290_);
lean_dec(v___y_1289_);
lean_dec_ref(v___y_1288_);
lean_dec_ref(v_as_1284_);
return v_res_1295_;
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
