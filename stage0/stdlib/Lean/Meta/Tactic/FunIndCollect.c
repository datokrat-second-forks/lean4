// Lean compiler output
// Module: Lean.Meta.Tactic.FunIndCollect
// Imports: public import Lean.Meta.Tactic.Util public import Lean.Meta.Tactic.FunIndInfo
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
uint8_t lean_expr_eqv(lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasMVar(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_instantiateMVarsCore(lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
size_t lean_ptr_addr(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Array_toSubarray___redArg(lean_object*, lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
size_t lean_usize_add(size_t, size_t);
uint8_t lean_usize_dec_lt(size_t, size_t);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
uint8_t l_Lean_Expr_isFVar(lean_object*);
uint64_t lean_uint64_mix_hash(uint64_t, uint64_t);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
uint64_t l_Lean_Expr_hash(lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_array_propagate_mark(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_swap(lean_object*, lean_object*);
uint8_t l_Lean_LocalDecl_isAuxDecl(lean_object*);
lean_object* l_Lean_LocalDecl_value_x3f(lean_object*, uint8_t);
uint64_t lean_usize_to_uint64(size_t);
lean_object* l_Lean_Expr_sort___override(lean_object*);
lean_object* l_Lean_Expr_getAppNumArgs(lean_object*);
lean_object* lean_array_set(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasLooseBVars(lean_object*);
lean_object* l_Lean_LocalDecl_type(lean_object*);
lean_object* l_Lean_MVarId_getType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_NameSet_empty;
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_NameSet_contains(lean_object*, lean_object*);
lean_object* l_Lean_mkPtrSet___redArg(lean_object*);
lean_object* lean_st_mk_ref(lean_object*);
lean_object* l_Lean_NameSet_insert(lean_object*, lean_object*);
lean_object* l_Lean_NameSet_filter(lean_object*, lean_object*);
LEAN_EXPORT uint64_t l_Lean_Meta_FunInd_instHashableCall_hash(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_FunInd_instHashableCall_hash___boxed(lean_object*);
static const lean_closure_object l_Lean_Meta_FunInd_instHashableCall___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_FunInd_instHashableCall_hash___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_FunInd_instHashableCall___closed__0 = (const lean_object*)&l_Lean_Meta_FunInd_instHashableCall___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_FunInd_instHashableCall = (const lean_object*)&l_Lean_Meta_FunInd_instHashableCall___closed__0_value;
LEAN_EXPORT uint8_t l_Lean_Meta_FunInd_instBEqCall_beq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_FunInd_instBEqCall_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Meta_FunInd_instBEqCall___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_FunInd_instBEqCall_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_FunInd_instBEqCall___closed__0 = (const lean_object*)&l_Lean_Meta_FunInd_instBEqCall___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_FunInd_instBEqCall = (const lean_object*)&l_Lean_Meta_FunInd_instBEqCall___closed__0_value;
static const lean_array_object l_Lean_Meta_FunInd_instEmptyCollectionSeenCalls___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Meta_FunInd_instEmptyCollectionSeenCalls___closed__0 = (const lean_object*)&l_Lean_Meta_FunInd_instEmptyCollectionSeenCalls___closed__0_value;
static lean_once_cell_t l_Lean_Meta_FunInd_instEmptyCollectionSeenCalls___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_FunInd_instEmptyCollectionSeenCalls___closed__1;
static lean_once_cell_t l_Lean_Meta_FunInd_instEmptyCollectionSeenCalls___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_FunInd_instEmptyCollectionSeenCalls___closed__2;
static lean_once_cell_t l_Lean_Meta_FunInd_instEmptyCollectionSeenCalls___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_FunInd_instEmptyCollectionSeenCalls___closed__3;
LEAN_EXPORT lean_object* l_Lean_Meta_FunInd_instEmptyCollectionSeenCalls;
LEAN_EXPORT uint8_t l_Lean_Meta_FunInd_SeenCalls_isEmpty(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_FunInd_SeenCalls_isEmpty___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Array_isEqvAux___at___00Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_FunInd_SeenCalls_push_spec__1_spec__1_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_isEqvAux___at___00Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_FunInd_SeenCalls_push_spec__1_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_FunInd_SeenCalls_push_spec__1_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_FunInd_SeenCalls_push_spec__1_spec__1___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint64_t l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_FunInd_SeenCalls_push_spec__1_spec__2(lean_object*, size_t, size_t, uint64_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_FunInd_SeenCalls_push_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Meta_FunInd_SeenCalls_push_spec__2_spec__4_spec__6_spec__7___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Meta_FunInd_SeenCalls_push_spec__2_spec__4_spec__6___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Meta_FunInd_SeenCalls_push_spec__2_spec__4___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Meta_FunInd_SeenCalls_push_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_FunInd_SeenCalls_push_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_FunInd_SeenCalls_push_spec__1___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_FunInd_SeenCalls_push_spec__0___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_FunInd_SeenCalls_push_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_FunInd_SeenCalls_push(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_FunInd_SeenCalls_push___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_FunInd_SeenCalls_push_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_FunInd_SeenCalls_push_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_FunInd_SeenCalls_push_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_FunInd_SeenCalls_push_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Meta_FunInd_SeenCalls_push_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_FunInd_SeenCalls_push_spec__1_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_FunInd_SeenCalls_push_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Meta_FunInd_SeenCalls_push_spec__2_spec__4(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_isEqvAux___at___00Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_FunInd_SeenCalls_push_spec__1_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_isEqvAux___at___00Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_FunInd_SeenCalls_push_spec__1_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Meta_FunInd_SeenCalls_push_spec__2_spec__4_spec__6(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Meta_FunInd_SeenCalls_push_spec__2_spec__4_spec__6_spec__7(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Meta_FunInd_SeenCalls_uniques___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_FunInd_SeenCalls_uniques___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lean_Meta_FunInd_SeenCalls_uniques_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_FunInd_SeenCalls_uniques_spec__1(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_FunInd_SeenCalls_uniques_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_FunInd_SeenCalls_uniques___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_FunInd_SeenCalls_uniques___closed__0;
LEAN_EXPORT lean_object* l_Lean_Meta_FunInd_SeenCalls_uniques(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_FunInd_SeenCalls_uniques___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_FunInd_Collector_saveFunInd___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_FunInd_Collector_saveFunInd___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_FunInd_Collector_saveFunInd(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_FunInd_Collector_saveFunInd___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_FunInd_Collector_visitApp___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_FunInd_Collector_visitApp___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_FunInd_Collector_visitApp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_FunInd_Collector_visitApp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Meta_FunInd_Collector_visit_spec__2_spec__3_spec__4_spec__6___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Meta_FunInd_Collector_visit_spec__2_spec__3_spec__4___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Meta_FunInd_Collector_visit_spec__2_spec__3___redArg(lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_FunInd_Collector_visit_spec__1_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_FunInd_Collector_visit_spec__1_spec__1___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Meta_FunInd_Collector_visit_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_FunInd_Collector_visit_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_FunInd_Collector_visit_spec__1___redArg___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_FunInd_Collector_visit___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_FunInd_Collector_visit___closed__0;
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_FunInd_Collector_visit_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_FunInd_Collector_visit(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_FunInd_Collector_visit_spec__0(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_FunInd_Collector_visit_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_FunInd_Collector_visit_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_FunInd_Collector_visit___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_FunInd_Collector_visit_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_FunInd_Collector_visit_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Meta_FunInd_Collector_visit_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_FunInd_Collector_visit_spec__1_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_FunInd_Collector_visit_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Meta_FunInd_Collector_visit_spec__2_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Meta_FunInd_Collector_visit_spec__2_spec__3_spec__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Meta_FunInd_Collector_visit_spec__2_spec__3_spec__4_spec__6(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_FunIndCollect_0__Lean_Meta_FunInd_Collector_main_go_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_FunIndCollect_0__Lean_Meta_FunInd_Collector_main_go_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_FunIndCollect_0__Lean_Meta_FunInd_Collector_main_go_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_FunIndCollect_0__Lean_Meta_FunInd_Collector_main_go_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_FunIndCollect_0__Lean_Meta_FunInd_Collector_main_go_spec__1_spec__2_spec__5(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_FunIndCollect_0__Lean_Meta_FunInd_Collector_main_go_spec__1_spec__2_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_FunIndCollect_0__Lean_Meta_FunInd_Collector_main_go_spec__1_spec__2(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_FunIndCollect_0__Lean_Meta_FunInd_Collector_main_go_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_FunIndCollect_0__Lean_Meta_FunInd_Collector_main_go_spec__1_spec__1_spec__3_spec__4(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_FunIndCollect_0__Lean_Meta_FunInd_Collector_main_go_spec__1_spec__1_spec__3_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_FunIndCollect_0__Lean_Meta_FunInd_Collector_main_go_spec__1_spec__1_spec__3(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_FunIndCollect_0__Lean_Meta_FunInd_Collector_main_go_spec__1_spec__1_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_FunIndCollect_0__Lean_Meta_FunInd_Collector_main_go_spec__1_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_FunIndCollect_0__Lean_Meta_FunInd_Collector_main_go_spec__1_spec__1_spec__2(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_FunIndCollect_0__Lean_Meta_FunInd_Collector_main_go_spec__1_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_FunIndCollect_0__Lean_Meta_FunInd_Collector_main_go_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_FunIndCollect_0__Lean_Meta_FunInd_Collector_main_go_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_FunIndCollect_0__Lean_Meta_FunInd_Collector_main_go_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_FunIndCollect_0__Lean_Meta_FunInd_Collector_main_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_FunIndCollect_0__Lean_Meta_FunInd_Collector_main_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_FunInd_Collector_main_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_FunInd_Collector_main_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_FunInd_Collector_main_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_FunInd_Collector_main_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_FunInd_Collector_main___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_FunInd_Collector_main___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_FunInd_Collector_main___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_FunInd_Collector_main___closed__0;
LEAN_EXPORT lean_object* l_Lean_Meta_FunInd_Collector_main(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_FunInd_Collector_main___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_FunIndCollect_0__Lean_Meta_FunInd_collect_unsafe__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_FunIndCollect_0__Lean_Meta_FunInd_collect_unsafe__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_FunInd_collect(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_FunInd_collect___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint64_t l_Lean_Meta_FunInd_instHashableCall_hash(lean_object* v_x_1_){
_start:
{
lean_object* v_expr_2_; lean_object* v_relevantArgs_3_; uint64_t v___x_4_; uint64_t v___x_5_; uint64_t v___x_6_; uint64_t v___x_7_; uint64_t v___x_8_; 
v_expr_2_ = lean_ctor_get(v_x_1_, 0);
v_relevantArgs_3_ = lean_ctor_get(v_x_1_, 1);
v___x_4_ = 0ULL;
v___x_5_ = l_Lean_Expr_hash(v_expr_2_);
v___x_6_ = lean_uint64_mix_hash(v___x_4_, v___x_5_);
v___x_7_ = l_Lean_Expr_hash(v_relevantArgs_3_);
v___x_8_ = lean_uint64_mix_hash(v___x_6_, v___x_7_);
return v___x_8_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_FunInd_instHashableCall_hash___boxed(lean_object* v_x_9_){
_start:
{
uint64_t v_res_10_; lean_object* v_r_11_; 
v_res_10_ = l_Lean_Meta_FunInd_instHashableCall_hash(v_x_9_);
lean_dec_ref(v_x_9_);
v_r_11_ = lean_box_uint64(v_res_10_);
return v_r_11_;
}
}
LEAN_EXPORT uint8_t l_Lean_Meta_FunInd_instBEqCall_beq(lean_object* v_x_14_, lean_object* v_x_15_){
_start:
{
lean_object* v_expr_16_; lean_object* v_relevantArgs_17_; lean_object* v_expr_18_; lean_object* v_relevantArgs_19_; uint8_t v___x_20_; 
v_expr_16_ = lean_ctor_get(v_x_14_, 0);
v_relevantArgs_17_ = lean_ctor_get(v_x_14_, 1);
v_expr_18_ = lean_ctor_get(v_x_15_, 0);
v_relevantArgs_19_ = lean_ctor_get(v_x_15_, 1);
v___x_20_ = lean_expr_eqv(v_expr_16_, v_expr_18_);
if (v___x_20_ == 0)
{
return v___x_20_;
}
else
{
uint8_t v___x_21_; 
v___x_21_ = lean_expr_eqv(v_relevantArgs_17_, v_relevantArgs_19_);
return v___x_21_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_FunInd_instBEqCall_beq___boxed(lean_object* v_x_22_, lean_object* v_x_23_){
_start:
{
uint8_t v_res_24_; lean_object* v_r_25_; 
v_res_24_ = l_Lean_Meta_FunInd_instBEqCall_beq(v_x_22_, v_x_23_);
lean_dec_ref(v_x_23_);
lean_dec_ref(v_x_22_);
v_r_25_ = lean_box(v_res_24_);
return v_r_25_;
}
}
static lean_object* _init_l_Lean_Meta_FunInd_instEmptyCollectionSeenCalls___closed__1(void){
_start:
{
lean_object* v___x_30_; lean_object* v___x_31_; lean_object* v___x_32_; 
v___x_30_ = lean_box(0);
v___x_31_ = lean_unsigned_to_nat(16u);
v___x_32_ = lean_mk_array(v___x_31_, v___x_30_);
return v___x_32_;
}
}
static lean_object* _init_l_Lean_Meta_FunInd_instEmptyCollectionSeenCalls___closed__2(void){
_start:
{
lean_object* v___x_33_; lean_object* v___x_34_; lean_object* v___x_35_; 
v___x_33_ = lean_obj_once(&l_Lean_Meta_FunInd_instEmptyCollectionSeenCalls___closed__1, &l_Lean_Meta_FunInd_instEmptyCollectionSeenCalls___closed__1_once, _init_l_Lean_Meta_FunInd_instEmptyCollectionSeenCalls___closed__1);
v___x_34_ = lean_unsigned_to_nat(0u);
v___x_35_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_35_, 0, v___x_34_);
lean_ctor_set(v___x_35_, 1, v___x_33_);
return v___x_35_;
}
}
static lean_object* _init_l_Lean_Meta_FunInd_instEmptyCollectionSeenCalls___closed__3(void){
_start:
{
lean_object* v___x_36_; lean_object* v___x_37_; lean_object* v___x_38_; 
v___x_36_ = lean_obj_once(&l_Lean_Meta_FunInd_instEmptyCollectionSeenCalls___closed__2, &l_Lean_Meta_FunInd_instEmptyCollectionSeenCalls___closed__2_once, _init_l_Lean_Meta_FunInd_instEmptyCollectionSeenCalls___closed__2);
v___x_37_ = ((lean_object*)(l_Lean_Meta_FunInd_instEmptyCollectionSeenCalls___closed__0));
v___x_38_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_38_, 0, v___x_37_);
lean_ctor_set(v___x_38_, 1, v___x_36_);
return v___x_38_;
}
}
static lean_object* _init_l_Lean_Meta_FunInd_instEmptyCollectionSeenCalls(void){
_start:
{
lean_object* v___x_39_; 
v___x_39_ = lean_obj_once(&l_Lean_Meta_FunInd_instEmptyCollectionSeenCalls___closed__3, &l_Lean_Meta_FunInd_instEmptyCollectionSeenCalls___closed__3_once, _init_l_Lean_Meta_FunInd_instEmptyCollectionSeenCalls___closed__3);
return v___x_39_;
}
}
LEAN_EXPORT uint8_t l_Lean_Meta_FunInd_SeenCalls_isEmpty(lean_object* v_sc_40_){
_start:
{
lean_object* v_calls_41_; lean_object* v___x_42_; lean_object* v___x_43_; uint8_t v___x_44_; 
v_calls_41_ = lean_ctor_get(v_sc_40_, 0);
v___x_42_ = lean_array_get_size(v_calls_41_);
v___x_43_ = lean_unsigned_to_nat(0u);
v___x_44_ = lean_nat_dec_eq(v___x_42_, v___x_43_);
return v___x_44_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_FunInd_SeenCalls_isEmpty___boxed(lean_object* v_sc_45_){
_start:
{
uint8_t v_res_46_; lean_object* v_r_47_; 
v_res_46_ = l_Lean_Meta_FunInd_SeenCalls_isEmpty(v_sc_45_);
lean_dec_ref(v_sc_45_);
v_r_47_ = lean_box(v_res_46_);
return v_r_47_;
}
}
LEAN_EXPORT uint8_t l_Array_isEqvAux___at___00Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_FunInd_SeenCalls_push_spec__1_spec__1_spec__2___redArg(lean_object* v_xs_48_, lean_object* v_ys_49_, lean_object* v_x_50_){
_start:
{
lean_object* v_zero_51_; uint8_t v_isZero_52_; 
v_zero_51_ = lean_unsigned_to_nat(0u);
v_isZero_52_ = lean_nat_dec_eq(v_x_50_, v_zero_51_);
if (v_isZero_52_ == 1)
{
lean_dec(v_x_50_);
return v_isZero_52_;
}
else
{
lean_object* v_one_53_; lean_object* v_n_54_; lean_object* v___x_55_; lean_object* v___x_56_; uint8_t v___x_57_; 
v_one_53_ = lean_unsigned_to_nat(1u);
v_n_54_ = lean_nat_sub(v_x_50_, v_one_53_);
lean_dec(v_x_50_);
v___x_55_ = lean_array_fget_borrowed(v_xs_48_, v_n_54_);
v___x_56_ = lean_array_fget_borrowed(v_ys_49_, v_n_54_);
v___x_57_ = lean_expr_eqv(v___x_55_, v___x_56_);
if (v___x_57_ == 0)
{
lean_dec(v_n_54_);
return v___x_57_;
}
else
{
v_x_50_ = v_n_54_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_isEqvAux___at___00Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_FunInd_SeenCalls_push_spec__1_spec__1_spec__2___redArg___boxed(lean_object* v_xs_59_, lean_object* v_ys_60_, lean_object* v_x_61_){
_start:
{
uint8_t v_res_62_; lean_object* v_r_63_; 
v_res_62_ = l_Array_isEqvAux___at___00Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_FunInd_SeenCalls_push_spec__1_spec__1_spec__2___redArg(v_xs_59_, v_ys_60_, v_x_61_);
lean_dec_ref(v_ys_60_);
lean_dec_ref(v_xs_59_);
v_r_63_ = lean_box(v_res_62_);
return v_r_63_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_FunInd_SeenCalls_push_spec__1_spec__1___redArg(lean_object* v_a_64_, lean_object* v_x_65_){
_start:
{
if (lean_obj_tag(v_x_65_) == 0)
{
uint8_t v___x_66_; 
v___x_66_ = 0;
return v___x_66_;
}
else
{
lean_object* v_key_67_; lean_object* v_tail_68_; uint8_t v___y_70_; lean_object* v_fst_72_; lean_object* v_snd_73_; lean_object* v_fst_74_; lean_object* v_snd_75_; uint8_t v___x_76_; 
v_key_67_ = lean_ctor_get(v_x_65_, 0);
v_tail_68_ = lean_ctor_get(v_x_65_, 2);
v_fst_72_ = lean_ctor_get(v_key_67_, 0);
v_snd_73_ = lean_ctor_get(v_key_67_, 1);
v_fst_74_ = lean_ctor_get(v_a_64_, 0);
v_snd_75_ = lean_ctor_get(v_a_64_, 1);
v___x_76_ = lean_name_eq(v_fst_72_, v_fst_74_);
if (v___x_76_ == 0)
{
v___y_70_ = v___x_76_;
goto v___jp_69_;
}
else
{
lean_object* v___x_77_; lean_object* v___x_78_; uint8_t v___x_79_; 
v___x_77_ = lean_array_get_size(v_snd_73_);
v___x_78_ = lean_array_get_size(v_snd_75_);
v___x_79_ = lean_nat_dec_eq(v___x_77_, v___x_78_);
if (v___x_79_ == 0)
{
v_x_65_ = v_tail_68_;
goto _start;
}
else
{
uint8_t v___x_81_; 
v___x_81_ = l_Array_isEqvAux___at___00Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_FunInd_SeenCalls_push_spec__1_spec__1_spec__2___redArg(v_snd_73_, v_snd_75_, v___x_77_);
v___y_70_ = v___x_81_;
goto v___jp_69_;
}
}
v___jp_69_:
{
if (v___y_70_ == 0)
{
v_x_65_ = v_tail_68_;
goto _start;
}
else
{
return v___y_70_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_FunInd_SeenCalls_push_spec__1_spec__1___redArg___boxed(lean_object* v_a_82_, lean_object* v_x_83_){
_start:
{
uint8_t v_res_84_; lean_object* v_r_85_; 
v_res_84_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_FunInd_SeenCalls_push_spec__1_spec__1___redArg(v_a_82_, v_x_83_);
lean_dec(v_x_83_);
lean_dec_ref(v_a_82_);
v_r_85_ = lean_box(v_res_84_);
return v_r_85_;
}
}
LEAN_EXPORT uint64_t l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_FunInd_SeenCalls_push_spec__1_spec__2(lean_object* v_as_86_, size_t v_i_87_, size_t v_stop_88_, uint64_t v_b_89_){
_start:
{
uint8_t v___x_90_; 
v___x_90_ = lean_usize_dec_eq(v_i_87_, v_stop_88_);
if (v___x_90_ == 0)
{
lean_object* v___x_91_; uint64_t v___x_92_; uint64_t v___x_93_; size_t v___x_94_; size_t v___x_95_; 
v___x_91_ = lean_array_uget_borrowed(v_as_86_, v_i_87_);
v___x_92_ = l_Lean_Expr_hash(v___x_91_);
v___x_93_ = lean_uint64_mix_hash(v_b_89_, v___x_92_);
v___x_94_ = ((size_t)1ULL);
v___x_95_ = lean_usize_add(v_i_87_, v___x_94_);
v_i_87_ = v___x_95_;
v_b_89_ = v___x_93_;
goto _start;
}
else
{
return v_b_89_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_FunInd_SeenCalls_push_spec__1_spec__2___boxed(lean_object* v_as_97_, lean_object* v_i_98_, lean_object* v_stop_99_, lean_object* v_b_100_){
_start:
{
size_t v_i_boxed_101_; size_t v_stop_boxed_102_; uint64_t v_b_boxed_103_; uint64_t v_res_104_; lean_object* v_r_105_; 
v_i_boxed_101_ = lean_unbox_usize(v_i_98_);
lean_dec(v_i_98_);
v_stop_boxed_102_ = lean_unbox_usize(v_stop_99_);
lean_dec(v_stop_99_);
v_b_boxed_103_ = lean_unbox_uint64(v_b_100_);
lean_dec_ref(v_b_100_);
v_res_104_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_FunInd_SeenCalls_push_spec__1_spec__2(v_as_97_, v_i_boxed_101_, v_stop_boxed_102_, v_b_boxed_103_);
lean_dec_ref(v_as_97_);
v_r_105_ = lean_box_uint64(v_res_104_);
return v_r_105_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Meta_FunInd_SeenCalls_push_spec__2_spec__4_spec__6_spec__7___redArg(lean_object* v_x_106_, lean_object* v_x_107_){
_start:
{
if (lean_obj_tag(v_x_107_) == 0)
{
return v_x_106_;
}
else
{
lean_object* v_key_108_; lean_object* v_value_109_; lean_object* v_tail_110_; lean_object* v___x_112_; uint8_t v_isShared_113_; uint8_t v_isSharedCheck_149_; 
v_key_108_ = lean_ctor_get(v_x_107_, 0);
v_value_109_ = lean_ctor_get(v_x_107_, 1);
v_tail_110_ = lean_ctor_get(v_x_107_, 2);
v_isSharedCheck_149_ = !lean_is_exclusive(v_x_107_);
if (v_isSharedCheck_149_ == 0)
{
v___x_112_ = v_x_107_;
v_isShared_113_ = v_isSharedCheck_149_;
goto v_resetjp_111_;
}
else
{
lean_inc(v_tail_110_);
lean_inc(v_value_109_);
lean_inc(v_key_108_);
lean_dec(v_x_107_);
v___x_112_ = lean_box(0);
v_isShared_113_ = v_isSharedCheck_149_;
goto v_resetjp_111_;
}
v_resetjp_111_:
{
lean_object* v_fst_114_; lean_object* v_snd_115_; lean_object* v___x_116_; uint64_t v___y_118_; uint64_t v___y_119_; uint64_t v___y_139_; 
v_fst_114_ = lean_ctor_get(v_key_108_, 0);
v_snd_115_ = lean_ctor_get(v_key_108_, 1);
v___x_116_ = lean_array_get_size(v_x_106_);
if (lean_obj_tag(v_fst_114_) == 0)
{
uint64_t v___x_147_; 
v___x_147_ = 1723ULL;
v___y_139_ = v___x_147_;
goto v___jp_138_;
}
else
{
uint64_t v_hash_148_; 
v_hash_148_ = lean_ctor_get_uint64(v_fst_114_, sizeof(void*)*2);
v___y_139_ = v_hash_148_;
goto v___jp_138_;
}
v___jp_117_:
{
uint64_t v___x_120_; uint64_t v___x_121_; uint64_t v___x_122_; uint64_t v_fold_123_; uint64_t v___x_124_; uint64_t v___x_125_; uint64_t v___x_126_; size_t v___x_127_; size_t v___x_128_; size_t v___x_129_; size_t v___x_130_; size_t v___x_131_; lean_object* v___x_132_; lean_object* v___x_134_; 
v___x_120_ = lean_uint64_mix_hash(v___y_118_, v___y_119_);
v___x_121_ = 32ULL;
v___x_122_ = lean_uint64_shift_right(v___x_120_, v___x_121_);
v_fold_123_ = lean_uint64_xor(v___x_120_, v___x_122_);
v___x_124_ = 16ULL;
v___x_125_ = lean_uint64_shift_right(v_fold_123_, v___x_124_);
v___x_126_ = lean_uint64_xor(v_fold_123_, v___x_125_);
v___x_127_ = lean_uint64_to_usize(v___x_126_);
v___x_128_ = lean_usize_of_nat(v___x_116_);
v___x_129_ = ((size_t)1ULL);
v___x_130_ = lean_usize_sub(v___x_128_, v___x_129_);
v___x_131_ = lean_usize_land(v___x_127_, v___x_130_);
v___x_132_ = lean_array_uget_borrowed(v_x_106_, v___x_131_);
lean_inc(v___x_132_);
if (v_isShared_113_ == 0)
{
lean_ctor_set(v___x_112_, 2, v___x_132_);
v___x_134_ = v___x_112_;
goto v_reusejp_133_;
}
else
{
lean_object* v_reuseFailAlloc_137_; 
v_reuseFailAlloc_137_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_137_, 0, v_key_108_);
lean_ctor_set(v_reuseFailAlloc_137_, 1, v_value_109_);
lean_ctor_set(v_reuseFailAlloc_137_, 2, v___x_132_);
v___x_134_ = v_reuseFailAlloc_137_;
goto v_reusejp_133_;
}
v_reusejp_133_:
{
lean_object* v___x_135_; 
v___x_135_ = lean_array_uset(v_x_106_, v___x_131_, v___x_134_);
v_x_106_ = v___x_135_;
v_x_107_ = v_tail_110_;
goto _start;
}
}
v___jp_138_:
{
uint64_t v___x_140_; lean_object* v___x_141_; lean_object* v___x_142_; uint8_t v___x_143_; 
v___x_140_ = 7ULL;
v___x_141_ = lean_unsigned_to_nat(0u);
v___x_142_ = lean_array_get_size(v_snd_115_);
v___x_143_ = lean_nat_dec_lt(v___x_141_, v___x_142_);
if (v___x_143_ == 0)
{
v___y_118_ = v___y_139_;
v___y_119_ = v___x_140_;
goto v___jp_117_;
}
else
{
size_t v___x_144_; size_t v___x_145_; uint64_t v___x_146_; 
v___x_144_ = ((size_t)0ULL);
v___x_145_ = lean_usize_of_nat(v___x_142_);
v___x_146_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_FunInd_SeenCalls_push_spec__1_spec__2(v_snd_115_, v___x_144_, v___x_145_, v___x_140_);
v___y_118_ = v___y_139_;
v___y_119_ = v___x_146_;
goto v___jp_117_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Meta_FunInd_SeenCalls_push_spec__2_spec__4_spec__6___redArg(lean_object* v_i_150_, lean_object* v_source_151_, lean_object* v_target_152_){
_start:
{
lean_object* v___x_153_; uint8_t v___x_154_; 
v___x_153_ = lean_array_get_size(v_source_151_);
v___x_154_ = lean_nat_dec_lt(v_i_150_, v___x_153_);
if (v___x_154_ == 0)
{
lean_dec_ref(v_source_151_);
lean_dec(v_i_150_);
return v_target_152_;
}
else
{
lean_object* v_es_155_; lean_object* v___x_156_; lean_object* v_source_157_; lean_object* v_target_158_; lean_object* v___x_159_; lean_object* v___x_160_; 
v_es_155_ = lean_array_fget(v_source_151_, v_i_150_);
v___x_156_ = lean_box(0);
v_source_157_ = lean_array_fset(v_source_151_, v_i_150_, v___x_156_);
v_target_158_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Meta_FunInd_SeenCalls_push_spec__2_spec__4_spec__6_spec__7___redArg(v_target_152_, v_es_155_);
v___x_159_ = lean_unsigned_to_nat(1u);
v___x_160_ = lean_nat_add(v_i_150_, v___x_159_);
lean_dec(v_i_150_);
v_i_150_ = v___x_160_;
v_source_151_ = v_source_157_;
v_target_152_ = v_target_158_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Meta_FunInd_SeenCalls_push_spec__2_spec__4___redArg(lean_object* v_data_162_){
_start:
{
lean_object* v___x_163_; lean_object* v___x_164_; lean_object* v_nbuckets_165_; lean_object* v___x_166_; lean_object* v___x_167_; lean_object* v___x_168_; lean_object* v___x_169_; lean_object* v___x_170_; 
v___x_163_ = lean_array_get_size(v_data_162_);
v___x_164_ = lean_unsigned_to_nat(2u);
v_nbuckets_165_ = lean_nat_mul(v___x_163_, v___x_164_);
v___x_166_ = lean_unsigned_to_nat(0u);
v___x_167_ = lean_box(0);
v___x_168_ = lean_mk_array(v_nbuckets_165_, v___x_167_);
v___x_169_ = lean_array_propagate_mark(v_data_162_, v___x_168_);
v___x_170_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Meta_FunInd_SeenCalls_push_spec__2_spec__4_spec__6___redArg(v___x_166_, v_data_162_, v___x_169_);
return v___x_170_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Meta_FunInd_SeenCalls_push_spec__2___redArg(lean_object* v_m_171_, lean_object* v_a_172_, lean_object* v_b_173_){
_start:
{
lean_object* v_size_174_; lean_object* v_buckets_175_; lean_object* v_fst_176_; lean_object* v_snd_177_; lean_object* v___x_178_; uint64_t v___y_180_; uint64_t v___y_181_; uint64_t v___y_220_; 
v_size_174_ = lean_ctor_get(v_m_171_, 0);
v_buckets_175_ = lean_ctor_get(v_m_171_, 1);
v_fst_176_ = lean_ctor_get(v_a_172_, 0);
v_snd_177_ = lean_ctor_get(v_a_172_, 1);
v___x_178_ = lean_array_get_size(v_buckets_175_);
if (lean_obj_tag(v_fst_176_) == 0)
{
uint64_t v___x_228_; 
v___x_228_ = 1723ULL;
v___y_220_ = v___x_228_;
goto v___jp_219_;
}
else
{
uint64_t v_hash_229_; 
v_hash_229_ = lean_ctor_get_uint64(v_fst_176_, sizeof(void*)*2);
v___y_220_ = v_hash_229_;
goto v___jp_219_;
}
v___jp_179_:
{
uint64_t v___x_182_; uint64_t v___x_183_; uint64_t v___x_184_; uint64_t v_fold_185_; uint64_t v___x_186_; uint64_t v___x_187_; uint64_t v___x_188_; size_t v___x_189_; size_t v___x_190_; size_t v___x_191_; size_t v___x_192_; size_t v___x_193_; lean_object* v_bkt_194_; uint8_t v___x_195_; 
v___x_182_ = lean_uint64_mix_hash(v___y_180_, v___y_181_);
v___x_183_ = 32ULL;
v___x_184_ = lean_uint64_shift_right(v___x_182_, v___x_183_);
v_fold_185_ = lean_uint64_xor(v___x_182_, v___x_184_);
v___x_186_ = 16ULL;
v___x_187_ = lean_uint64_shift_right(v_fold_185_, v___x_186_);
v___x_188_ = lean_uint64_xor(v_fold_185_, v___x_187_);
v___x_189_ = lean_uint64_to_usize(v___x_188_);
v___x_190_ = lean_usize_of_nat(v___x_178_);
v___x_191_ = ((size_t)1ULL);
v___x_192_ = lean_usize_sub(v___x_190_, v___x_191_);
v___x_193_ = lean_usize_land(v___x_189_, v___x_192_);
v_bkt_194_ = lean_array_uget_borrowed(v_buckets_175_, v___x_193_);
v___x_195_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_FunInd_SeenCalls_push_spec__1_spec__1___redArg(v_a_172_, v_bkt_194_);
if (v___x_195_ == 0)
{
lean_object* v___x_197_; uint8_t v_isShared_198_; uint8_t v_isSharedCheck_216_; 
lean_inc_ref(v_buckets_175_);
lean_inc(v_size_174_);
v_isSharedCheck_216_ = !lean_is_exclusive(v_m_171_);
if (v_isSharedCheck_216_ == 0)
{
lean_object* v_unused_217_; lean_object* v_unused_218_; 
v_unused_217_ = lean_ctor_get(v_m_171_, 1);
lean_dec(v_unused_217_);
v_unused_218_ = lean_ctor_get(v_m_171_, 0);
lean_dec(v_unused_218_);
v___x_197_ = v_m_171_;
v_isShared_198_ = v_isSharedCheck_216_;
goto v_resetjp_196_;
}
else
{
lean_dec(v_m_171_);
v___x_197_ = lean_box(0);
v_isShared_198_ = v_isSharedCheck_216_;
goto v_resetjp_196_;
}
v_resetjp_196_:
{
lean_object* v___x_199_; lean_object* v_size_x27_200_; lean_object* v___x_201_; lean_object* v_buckets_x27_202_; lean_object* v___x_203_; lean_object* v___x_204_; lean_object* v___x_205_; lean_object* v___x_206_; lean_object* v___x_207_; uint8_t v___x_208_; 
v___x_199_ = lean_unsigned_to_nat(1u);
v_size_x27_200_ = lean_nat_add(v_size_174_, v___x_199_);
lean_dec(v_size_174_);
lean_inc(v_bkt_194_);
v___x_201_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_201_, 0, v_a_172_);
lean_ctor_set(v___x_201_, 1, v_b_173_);
lean_ctor_set(v___x_201_, 2, v_bkt_194_);
v_buckets_x27_202_ = lean_array_uset(v_buckets_175_, v___x_193_, v___x_201_);
v___x_203_ = lean_unsigned_to_nat(4u);
v___x_204_ = lean_nat_mul(v_size_x27_200_, v___x_203_);
v___x_205_ = lean_unsigned_to_nat(3u);
v___x_206_ = lean_nat_div(v___x_204_, v___x_205_);
lean_dec(v___x_204_);
v___x_207_ = lean_array_get_size(v_buckets_x27_202_);
v___x_208_ = lean_nat_dec_le(v___x_206_, v___x_207_);
lean_dec(v___x_206_);
if (v___x_208_ == 0)
{
lean_object* v_val_209_; lean_object* v___x_211_; 
v_val_209_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Meta_FunInd_SeenCalls_push_spec__2_spec__4___redArg(v_buckets_x27_202_);
if (v_isShared_198_ == 0)
{
lean_ctor_set(v___x_197_, 1, v_val_209_);
lean_ctor_set(v___x_197_, 0, v_size_x27_200_);
v___x_211_ = v___x_197_;
goto v_reusejp_210_;
}
else
{
lean_object* v_reuseFailAlloc_212_; 
v_reuseFailAlloc_212_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_212_, 0, v_size_x27_200_);
lean_ctor_set(v_reuseFailAlloc_212_, 1, v_val_209_);
v___x_211_ = v_reuseFailAlloc_212_;
goto v_reusejp_210_;
}
v_reusejp_210_:
{
return v___x_211_;
}
}
else
{
lean_object* v___x_214_; 
if (v_isShared_198_ == 0)
{
lean_ctor_set(v___x_197_, 1, v_buckets_x27_202_);
lean_ctor_set(v___x_197_, 0, v_size_x27_200_);
v___x_214_ = v___x_197_;
goto v_reusejp_213_;
}
else
{
lean_object* v_reuseFailAlloc_215_; 
v_reuseFailAlloc_215_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_215_, 0, v_size_x27_200_);
lean_ctor_set(v_reuseFailAlloc_215_, 1, v_buckets_x27_202_);
v___x_214_ = v_reuseFailAlloc_215_;
goto v_reusejp_213_;
}
v_reusejp_213_:
{
return v___x_214_;
}
}
}
}
else
{
lean_dec(v_b_173_);
lean_dec_ref(v_a_172_);
return v_m_171_;
}
}
v___jp_219_:
{
uint64_t v___x_221_; lean_object* v___x_222_; lean_object* v___x_223_; uint8_t v___x_224_; 
v___x_221_ = 7ULL;
v___x_222_ = lean_unsigned_to_nat(0u);
v___x_223_ = lean_array_get_size(v_snd_177_);
v___x_224_ = lean_nat_dec_lt(v___x_222_, v___x_223_);
if (v___x_224_ == 0)
{
v___y_180_ = v___y_220_;
v___y_181_ = v___x_221_;
goto v___jp_179_;
}
else
{
size_t v___x_225_; size_t v___x_226_; uint64_t v___x_227_; 
v___x_225_ = ((size_t)0ULL);
v___x_226_ = lean_usize_of_nat(v___x_223_);
v___x_227_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_FunInd_SeenCalls_push_spec__1_spec__2(v_snd_177_, v___x_225_, v___x_226_, v___x_221_);
v___y_180_ = v___y_220_;
v___y_181_ = v___x_227_;
goto v___jp_179_;
}
}
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_FunInd_SeenCalls_push_spec__1___redArg(lean_object* v_m_230_, lean_object* v_a_231_){
_start:
{
lean_object* v_buckets_232_; lean_object* v_fst_233_; lean_object* v_snd_234_; lean_object* v___x_235_; uint64_t v___y_237_; uint64_t v___y_238_; uint64_t v___y_254_; 
v_buckets_232_ = lean_ctor_get(v_m_230_, 1);
v_fst_233_ = lean_ctor_get(v_a_231_, 0);
v_snd_234_ = lean_ctor_get(v_a_231_, 1);
v___x_235_ = lean_array_get_size(v_buckets_232_);
if (lean_obj_tag(v_fst_233_) == 0)
{
uint64_t v___x_262_; 
v___x_262_ = 1723ULL;
v___y_254_ = v___x_262_;
goto v___jp_253_;
}
else
{
uint64_t v_hash_263_; 
v_hash_263_ = lean_ctor_get_uint64(v_fst_233_, sizeof(void*)*2);
v___y_254_ = v_hash_263_;
goto v___jp_253_;
}
v___jp_236_:
{
uint64_t v___x_239_; uint64_t v___x_240_; uint64_t v___x_241_; uint64_t v_fold_242_; uint64_t v___x_243_; uint64_t v___x_244_; uint64_t v___x_245_; size_t v___x_246_; size_t v___x_247_; size_t v___x_248_; size_t v___x_249_; size_t v___x_250_; lean_object* v___x_251_; uint8_t v___x_252_; 
v___x_239_ = lean_uint64_mix_hash(v___y_237_, v___y_238_);
v___x_240_ = 32ULL;
v___x_241_ = lean_uint64_shift_right(v___x_239_, v___x_240_);
v_fold_242_ = lean_uint64_xor(v___x_239_, v___x_241_);
v___x_243_ = 16ULL;
v___x_244_ = lean_uint64_shift_right(v_fold_242_, v___x_243_);
v___x_245_ = lean_uint64_xor(v_fold_242_, v___x_244_);
v___x_246_ = lean_uint64_to_usize(v___x_245_);
v___x_247_ = lean_usize_of_nat(v___x_235_);
v___x_248_ = ((size_t)1ULL);
v___x_249_ = lean_usize_sub(v___x_247_, v___x_248_);
v___x_250_ = lean_usize_land(v___x_246_, v___x_249_);
v___x_251_ = lean_array_uget_borrowed(v_buckets_232_, v___x_250_);
v___x_252_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_FunInd_SeenCalls_push_spec__1_spec__1___redArg(v_a_231_, v___x_251_);
return v___x_252_;
}
v___jp_253_:
{
uint64_t v___x_255_; lean_object* v___x_256_; lean_object* v___x_257_; uint8_t v___x_258_; 
v___x_255_ = 7ULL;
v___x_256_ = lean_unsigned_to_nat(0u);
v___x_257_ = lean_array_get_size(v_snd_234_);
v___x_258_ = lean_nat_dec_lt(v___x_256_, v___x_257_);
if (v___x_258_ == 0)
{
v___y_237_ = v___y_254_;
v___y_238_ = v___x_255_;
goto v___jp_236_;
}
else
{
size_t v___x_259_; size_t v___x_260_; uint64_t v___x_261_; 
v___x_259_ = ((size_t)0ULL);
v___x_260_ = lean_usize_of_nat(v___x_257_);
v___x_261_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_FunInd_SeenCalls_push_spec__1_spec__2(v_snd_234_, v___x_259_, v___x_260_, v___x_255_);
v___y_237_ = v___y_254_;
v___y_238_ = v___x_261_;
goto v___jp_236_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_FunInd_SeenCalls_push_spec__1___redArg___boxed(lean_object* v_m_264_, lean_object* v_a_265_){
_start:
{
uint8_t v_res_266_; lean_object* v_r_267_; 
v_res_266_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_FunInd_SeenCalls_push_spec__1___redArg(v_m_264_, v_a_265_);
lean_dec_ref(v_a_265_);
lean_dec_ref(v_m_264_);
v_r_267_ = lean_box(v_res_266_);
return v_r_267_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_FunInd_SeenCalls_push_spec__0___redArg(lean_object* v_calls_268_, lean_object* v_as_269_, size_t v_sz_270_, size_t v_i_271_, lean_object* v_b_272_){
_start:
{
lean_object* v_a_275_; uint8_t v___x_279_; 
v___x_279_ = lean_usize_dec_lt(v_i_271_, v_sz_270_);
if (v___x_279_ == 0)
{
lean_object* v___x_280_; 
lean_dec_ref(v_calls_268_);
v___x_280_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_280_, 0, v_b_272_);
return v___x_280_;
}
else
{
lean_object* v_snd_281_; lean_object* v___x_283_; uint8_t v_isShared_284_; uint8_t v_isSharedCheck_338_; 
v_snd_281_ = lean_ctor_get(v_b_272_, 1);
v_isSharedCheck_338_ = !lean_is_exclusive(v_b_272_);
if (v_isSharedCheck_338_ == 0)
{
lean_object* v_unused_339_; 
v_unused_339_ = lean_ctor_get(v_b_272_, 0);
lean_dec(v_unused_339_);
v___x_283_ = v_b_272_;
v_isShared_284_ = v_isSharedCheck_338_;
goto v_resetjp_282_;
}
else
{
lean_inc(v_snd_281_);
lean_dec(v_b_272_);
v___x_283_ = lean_box(0);
v_isShared_284_ = v_isSharedCheck_338_;
goto v_resetjp_282_;
}
v_resetjp_282_:
{
lean_object* v_snd_285_; lean_object* v_fst_286_; lean_object* v___x_288_; uint8_t v_isShared_289_; uint8_t v_isSharedCheck_337_; 
v_snd_285_ = lean_ctor_get(v_snd_281_, 1);
v_fst_286_ = lean_ctor_get(v_snd_281_, 0);
v_isSharedCheck_337_ = !lean_is_exclusive(v_snd_281_);
if (v_isSharedCheck_337_ == 0)
{
v___x_288_ = v_snd_281_;
v_isShared_289_ = v_isSharedCheck_337_;
goto v_resetjp_287_;
}
else
{
lean_inc(v_snd_285_);
lean_inc(v_fst_286_);
lean_dec(v_snd_281_);
v___x_288_ = lean_box(0);
v_isShared_289_ = v_isSharedCheck_337_;
goto v_resetjp_287_;
}
v_resetjp_287_:
{
lean_object* v_array_290_; lean_object* v_start_291_; lean_object* v_stop_292_; lean_object* v___x_293_; uint8_t v___x_294_; 
v_array_290_ = lean_ctor_get(v_snd_285_, 0);
v_start_291_ = lean_ctor_get(v_snd_285_, 1);
v_stop_292_ = lean_ctor_get(v_snd_285_, 2);
v___x_293_ = lean_box(0);
v___x_294_ = lean_nat_dec_lt(v_start_291_, v_stop_292_);
if (v___x_294_ == 0)
{
lean_object* v___x_296_; 
lean_dec_ref(v_calls_268_);
if (v_isShared_289_ == 0)
{
v___x_296_ = v___x_288_;
goto v_reusejp_295_;
}
else
{
lean_object* v_reuseFailAlloc_301_; 
v_reuseFailAlloc_301_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_301_, 0, v_fst_286_);
lean_ctor_set(v_reuseFailAlloc_301_, 1, v_snd_285_);
v___x_296_ = v_reuseFailAlloc_301_;
goto v_reusejp_295_;
}
v_reusejp_295_:
{
lean_object* v___x_298_; 
if (v_isShared_284_ == 0)
{
lean_ctor_set(v___x_283_, 1, v___x_296_);
lean_ctor_set(v___x_283_, 0, v___x_293_);
v___x_298_ = v___x_283_;
goto v_reusejp_297_;
}
else
{
lean_object* v_reuseFailAlloc_300_; 
v_reuseFailAlloc_300_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_300_, 0, v___x_293_);
lean_ctor_set(v_reuseFailAlloc_300_, 1, v___x_296_);
v___x_298_ = v_reuseFailAlloc_300_;
goto v_reusejp_297_;
}
v_reusejp_297_:
{
lean_object* v___x_299_; 
v___x_299_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_299_, 0, v___x_298_);
return v___x_299_;
}
}
}
else
{
lean_object* v___x_303_; uint8_t v_isShared_304_; uint8_t v_isSharedCheck_333_; 
lean_inc(v_stop_292_);
lean_inc(v_start_291_);
lean_inc_ref(v_array_290_);
v_isSharedCheck_333_ = !lean_is_exclusive(v_snd_285_);
if (v_isSharedCheck_333_ == 0)
{
lean_object* v_unused_334_; lean_object* v_unused_335_; lean_object* v_unused_336_; 
v_unused_334_ = lean_ctor_get(v_snd_285_, 2);
lean_dec(v_unused_334_);
v_unused_335_ = lean_ctor_get(v_snd_285_, 1);
lean_dec(v_unused_335_);
v_unused_336_ = lean_ctor_get(v_snd_285_, 0);
lean_dec(v_unused_336_);
v___x_303_ = v_snd_285_;
v_isShared_304_ = v_isSharedCheck_333_;
goto v_resetjp_302_;
}
else
{
lean_dec(v_snd_285_);
v___x_303_ = lean_box(0);
v_isShared_304_ = v_isSharedCheck_333_;
goto v_resetjp_302_;
}
v_resetjp_302_:
{
lean_object* v_a_305_; lean_object* v___x_306_; lean_object* v___x_307_; lean_object* v___x_308_; lean_object* v___x_310_; 
v_a_305_ = lean_array_uget_borrowed(v_as_269_, v_i_271_);
v___x_306_ = lean_array_fget(v_array_290_, v_start_291_);
v___x_307_ = lean_unsigned_to_nat(1u);
v___x_308_ = lean_nat_add(v_start_291_, v___x_307_);
lean_dec(v_start_291_);
if (v_isShared_304_ == 0)
{
lean_ctor_set(v___x_303_, 1, v___x_308_);
v___x_310_ = v___x_303_;
goto v_reusejp_309_;
}
else
{
lean_object* v_reuseFailAlloc_332_; 
v_reuseFailAlloc_332_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_332_, 0, v_array_290_);
lean_ctor_set(v_reuseFailAlloc_332_, 1, v___x_308_);
lean_ctor_set(v_reuseFailAlloc_332_, 2, v_stop_292_);
v___x_310_ = v_reuseFailAlloc_332_;
goto v_reusejp_309_;
}
v_reusejp_309_:
{
uint8_t v___x_326_; 
v___x_326_ = lean_unbox(v___x_306_);
if (v___x_326_ == 2)
{
uint8_t v___x_327_; 
v___x_327_ = l_Lean_Expr_isFVar(v_a_305_);
if (v___x_327_ == 0)
{
lean_object* v___x_328_; lean_object* v___x_329_; lean_object* v___x_330_; lean_object* v___x_331_; 
lean_dec(v___x_306_);
lean_del_object(v___x_288_);
lean_del_object(v___x_283_);
v___x_328_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_328_, 0, v_calls_268_);
v___x_329_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_329_, 0, v_fst_286_);
lean_ctor_set(v___x_329_, 1, v___x_310_);
v___x_330_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_330_, 0, v___x_328_);
lean_ctor_set(v___x_330_, 1, v___x_329_);
v___x_331_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_331_, 0, v___x_330_);
return v___x_331_;
}
else
{
goto v___jp_311_;
}
}
else
{
goto v___jp_311_;
}
v___jp_311_:
{
uint8_t v___x_312_; 
v___x_312_ = lean_unbox(v___x_306_);
lean_dec(v___x_306_);
if (v___x_312_ == 0)
{
lean_object* v___x_314_; 
if (v_isShared_289_ == 0)
{
lean_ctor_set(v___x_288_, 1, v___x_310_);
v___x_314_ = v___x_288_;
goto v_reusejp_313_;
}
else
{
lean_object* v_reuseFailAlloc_318_; 
v_reuseFailAlloc_318_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_318_, 0, v_fst_286_);
lean_ctor_set(v_reuseFailAlloc_318_, 1, v___x_310_);
v___x_314_ = v_reuseFailAlloc_318_;
goto v_reusejp_313_;
}
v_reusejp_313_:
{
lean_object* v___x_316_; 
if (v_isShared_284_ == 0)
{
lean_ctor_set(v___x_283_, 1, v___x_314_);
lean_ctor_set(v___x_283_, 0, v___x_293_);
v___x_316_ = v___x_283_;
goto v_reusejp_315_;
}
else
{
lean_object* v_reuseFailAlloc_317_; 
v_reuseFailAlloc_317_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_317_, 0, v___x_293_);
lean_ctor_set(v_reuseFailAlloc_317_, 1, v___x_314_);
v___x_316_ = v_reuseFailAlloc_317_;
goto v_reusejp_315_;
}
v_reusejp_315_:
{
v_a_275_ = v___x_316_;
goto v___jp_274_;
}
}
}
else
{
lean_object* v___x_319_; lean_object* v___x_321_; 
lean_inc(v_a_305_);
v___x_319_ = lean_array_push(v_fst_286_, v_a_305_);
if (v_isShared_289_ == 0)
{
lean_ctor_set(v___x_288_, 1, v___x_310_);
lean_ctor_set(v___x_288_, 0, v___x_319_);
v___x_321_ = v___x_288_;
goto v_reusejp_320_;
}
else
{
lean_object* v_reuseFailAlloc_325_; 
v_reuseFailAlloc_325_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_325_, 0, v___x_319_);
lean_ctor_set(v_reuseFailAlloc_325_, 1, v___x_310_);
v___x_321_ = v_reuseFailAlloc_325_;
goto v_reusejp_320_;
}
v_reusejp_320_:
{
lean_object* v___x_323_; 
if (v_isShared_284_ == 0)
{
lean_ctor_set(v___x_283_, 1, v___x_321_);
lean_ctor_set(v___x_283_, 0, v___x_293_);
v___x_323_ = v___x_283_;
goto v_reusejp_322_;
}
else
{
lean_object* v_reuseFailAlloc_324_; 
v_reuseFailAlloc_324_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_324_, 0, v___x_293_);
lean_ctor_set(v_reuseFailAlloc_324_, 1, v___x_321_);
v___x_323_ = v_reuseFailAlloc_324_;
goto v_reusejp_322_;
}
v_reusejp_322_:
{
v_a_275_ = v___x_323_;
goto v___jp_274_;
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
v___jp_274_:
{
size_t v___x_276_; size_t v___x_277_; 
v___x_276_ = ((size_t)1ULL);
v___x_277_ = lean_usize_add(v_i_271_, v___x_276_);
v_i_271_ = v___x_277_;
v_b_272_ = v_a_275_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_FunInd_SeenCalls_push_spec__0___redArg___boxed(lean_object* v_calls_340_, lean_object* v_as_341_, lean_object* v_sz_342_, lean_object* v_i_343_, lean_object* v_b_344_, lean_object* v___y_345_){
_start:
{
size_t v_sz_boxed_346_; size_t v_i_boxed_347_; lean_object* v_res_348_; 
v_sz_boxed_346_ = lean_unbox_usize(v_sz_342_);
lean_dec(v_sz_342_);
v_i_boxed_347_ = lean_unbox_usize(v_i_343_);
lean_dec(v_i_343_);
v_res_348_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_FunInd_SeenCalls_push_spec__0___redArg(v_calls_340_, v_as_341_, v_sz_boxed_346_, v_i_boxed_347_, v_b_344_);
lean_dec_ref(v_as_341_);
return v_res_348_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_FunInd_SeenCalls_push(lean_object* v_e_349_, lean_object* v_funIndInfo_350_, lean_object* v_args_351_, lean_object* v_calls_352_, lean_object* v_a_353_, lean_object* v_a_354_, lean_object* v_a_355_, lean_object* v_a_356_){
_start:
{
lean_object* v_funName_358_; lean_object* v_params_359_; lean_object* v___x_360_; lean_object* v___x_361_; uint8_t v___x_362_; 
v_funName_358_ = lean_ctor_get(v_funIndInfo_350_, 0);
lean_inc(v_funName_358_);
v_params_359_ = lean_ctor_get(v_funIndInfo_350_, 3);
lean_inc_ref(v_params_359_);
lean_dec_ref(v_funIndInfo_350_);
v___x_360_ = lean_array_get_size(v_params_359_);
v___x_361_ = lean_array_get_size(v_args_351_);
v___x_362_ = lean_nat_dec_eq(v___x_360_, v___x_361_);
if (v___x_362_ == 0)
{
lean_object* v___x_363_; 
lean_dec_ref(v_params_359_);
lean_dec(v_funName_358_);
lean_dec_ref(v_e_349_);
v___x_363_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_363_, 0, v_calls_352_);
return v___x_363_;
}
else
{
lean_object* v___x_364_; lean_object* v_keys_365_; lean_object* v___x_366_; lean_object* v___x_367_; lean_object* v___x_368_; lean_object* v___x_369_; size_t v_sz_370_; size_t v___x_371_; lean_object* v___x_372_; 
v___x_364_ = lean_unsigned_to_nat(0u);
v_keys_365_ = ((lean_object*)(l_Lean_Meta_FunInd_instEmptyCollectionSeenCalls___closed__0));
v___x_366_ = l_Array_toSubarray___redArg(v_params_359_, v___x_364_, v___x_360_);
v___x_367_ = lean_box(0);
v___x_368_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_368_, 0, v_keys_365_);
lean_ctor_set(v___x_368_, 1, v___x_366_);
v___x_369_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_369_, 0, v___x_367_);
lean_ctor_set(v___x_369_, 1, v___x_368_);
v_sz_370_ = lean_array_size(v_args_351_);
v___x_371_ = ((size_t)0ULL);
lean_inc_ref(v_calls_352_);
v___x_372_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_FunInd_SeenCalls_push_spec__0___redArg(v_calls_352_, v_args_351_, v_sz_370_, v___x_371_, v___x_369_);
if (lean_obj_tag(v___x_372_) == 0)
{
lean_object* v_a_373_; lean_object* v___x_375_; uint8_t v_isShared_376_; uint8_t v_isSharedCheck_413_; 
v_a_373_ = lean_ctor_get(v___x_372_, 0);
v_isSharedCheck_413_ = !lean_is_exclusive(v___x_372_);
if (v_isSharedCheck_413_ == 0)
{
v___x_375_ = v___x_372_;
v_isShared_376_ = v_isSharedCheck_413_;
goto v_resetjp_374_;
}
else
{
lean_inc(v_a_373_);
lean_dec(v___x_372_);
v___x_375_ = lean_box(0);
v_isShared_376_ = v_isSharedCheck_413_;
goto v_resetjp_374_;
}
v_resetjp_374_:
{
lean_object* v_fst_377_; 
v_fst_377_ = lean_ctor_get(v_a_373_, 0);
if (lean_obj_tag(v_fst_377_) == 0)
{
lean_object* v_snd_378_; lean_object* v_fst_379_; lean_object* v___x_381_; uint8_t v_isShared_382_; uint8_t v_isSharedCheck_407_; 
v_snd_378_ = lean_ctor_get(v_a_373_, 1);
lean_inc(v_snd_378_);
lean_dec(v_a_373_);
v_fst_379_ = lean_ctor_get(v_snd_378_, 0);
v_isSharedCheck_407_ = !lean_is_exclusive(v_snd_378_);
if (v_isSharedCheck_407_ == 0)
{
lean_object* v_unused_408_; 
v_unused_408_ = lean_ctor_get(v_snd_378_, 1);
lean_dec(v_unused_408_);
v___x_381_ = v_snd_378_;
v_isShared_382_ = v_isSharedCheck_407_;
goto v_resetjp_380_;
}
else
{
lean_inc(v_fst_379_);
lean_dec(v_snd_378_);
v___x_381_ = lean_box(0);
v_isShared_382_ = v_isSharedCheck_407_;
goto v_resetjp_380_;
}
v_resetjp_380_:
{
lean_object* v_calls_383_; lean_object* v_seen_384_; lean_object* v___x_386_; 
v_calls_383_ = lean_ctor_get(v_calls_352_, 0);
v_seen_384_ = lean_ctor_get(v_calls_352_, 1);
if (v_isShared_382_ == 0)
{
lean_ctor_set(v___x_381_, 1, v_fst_379_);
lean_ctor_set(v___x_381_, 0, v_funName_358_);
v___x_386_ = v___x_381_;
goto v_reusejp_385_;
}
else
{
lean_object* v_reuseFailAlloc_406_; 
v_reuseFailAlloc_406_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_406_, 0, v_funName_358_);
lean_ctor_set(v_reuseFailAlloc_406_, 1, v_fst_379_);
v___x_386_ = v_reuseFailAlloc_406_;
goto v_reusejp_385_;
}
v_reusejp_385_:
{
uint8_t v___x_387_; 
v___x_387_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_FunInd_SeenCalls_push_spec__1___redArg(v_seen_384_, v___x_386_);
if (v___x_387_ == 0)
{
lean_object* v___x_389_; uint8_t v_isShared_390_; uint8_t v_isSharedCheck_400_; 
lean_inc_ref(v_seen_384_);
lean_inc_ref(v_calls_383_);
v_isSharedCheck_400_ = !lean_is_exclusive(v_calls_352_);
if (v_isSharedCheck_400_ == 0)
{
lean_object* v_unused_401_; lean_object* v_unused_402_; 
v_unused_401_ = lean_ctor_get(v_calls_352_, 1);
lean_dec(v_unused_401_);
v_unused_402_ = lean_ctor_get(v_calls_352_, 0);
lean_dec(v_unused_402_);
v___x_389_ = v_calls_352_;
v_isShared_390_ = v_isSharedCheck_400_;
goto v_resetjp_388_;
}
else
{
lean_dec(v_calls_352_);
v___x_389_ = lean_box(0);
v_isShared_390_ = v_isSharedCheck_400_;
goto v_resetjp_388_;
}
v_resetjp_388_:
{
lean_object* v___x_391_; lean_object* v___x_392_; lean_object* v___x_393_; lean_object* v___x_395_; 
v___x_391_ = lean_array_push(v_calls_383_, v_e_349_);
v___x_392_ = lean_box(0);
v___x_393_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Meta_FunInd_SeenCalls_push_spec__2___redArg(v_seen_384_, v___x_386_, v___x_392_);
if (v_isShared_390_ == 0)
{
lean_ctor_set(v___x_389_, 1, v___x_393_);
lean_ctor_set(v___x_389_, 0, v___x_391_);
v___x_395_ = v___x_389_;
goto v_reusejp_394_;
}
else
{
lean_object* v_reuseFailAlloc_399_; 
v_reuseFailAlloc_399_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_399_, 0, v___x_391_);
lean_ctor_set(v_reuseFailAlloc_399_, 1, v___x_393_);
v___x_395_ = v_reuseFailAlloc_399_;
goto v_reusejp_394_;
}
v_reusejp_394_:
{
lean_object* v___x_397_; 
if (v_isShared_376_ == 0)
{
lean_ctor_set(v___x_375_, 0, v___x_395_);
v___x_397_ = v___x_375_;
goto v_reusejp_396_;
}
else
{
lean_object* v_reuseFailAlloc_398_; 
v_reuseFailAlloc_398_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_398_, 0, v___x_395_);
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
else
{
lean_object* v___x_404_; 
lean_dec_ref(v___x_386_);
lean_dec_ref(v_e_349_);
if (v_isShared_376_ == 0)
{
lean_ctor_set(v___x_375_, 0, v_calls_352_);
v___x_404_ = v___x_375_;
goto v_reusejp_403_;
}
else
{
lean_object* v_reuseFailAlloc_405_; 
v_reuseFailAlloc_405_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_405_, 0, v_calls_352_);
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
else
{
lean_object* v_val_409_; lean_object* v___x_411_; 
lean_inc_ref(v_fst_377_);
lean_dec(v_a_373_);
lean_dec(v_funName_358_);
lean_dec_ref(v_calls_352_);
lean_dec_ref(v_e_349_);
v_val_409_ = lean_ctor_get(v_fst_377_, 0);
lean_inc(v_val_409_);
lean_dec_ref_known(v_fst_377_, 1);
if (v_isShared_376_ == 0)
{
lean_ctor_set(v___x_375_, 0, v_val_409_);
v___x_411_ = v___x_375_;
goto v_reusejp_410_;
}
else
{
lean_object* v_reuseFailAlloc_412_; 
v_reuseFailAlloc_412_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_412_, 0, v_val_409_);
v___x_411_ = v_reuseFailAlloc_412_;
goto v_reusejp_410_;
}
v_reusejp_410_:
{
return v___x_411_;
}
}
}
}
else
{
lean_object* v_a_414_; lean_object* v___x_416_; uint8_t v_isShared_417_; uint8_t v_isSharedCheck_421_; 
lean_dec(v_funName_358_);
lean_dec_ref(v_calls_352_);
lean_dec_ref(v_e_349_);
v_a_414_ = lean_ctor_get(v___x_372_, 0);
v_isSharedCheck_421_ = !lean_is_exclusive(v___x_372_);
if (v_isSharedCheck_421_ == 0)
{
v___x_416_ = v___x_372_;
v_isShared_417_ = v_isSharedCheck_421_;
goto v_resetjp_415_;
}
else
{
lean_inc(v_a_414_);
lean_dec(v___x_372_);
v___x_416_ = lean_box(0);
v_isShared_417_ = v_isSharedCheck_421_;
goto v_resetjp_415_;
}
v_resetjp_415_:
{
lean_object* v___x_419_; 
if (v_isShared_417_ == 0)
{
v___x_419_ = v___x_416_;
goto v_reusejp_418_;
}
else
{
lean_object* v_reuseFailAlloc_420_; 
v_reuseFailAlloc_420_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_420_, 0, v_a_414_);
v___x_419_ = v_reuseFailAlloc_420_;
goto v_reusejp_418_;
}
v_reusejp_418_:
{
return v___x_419_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_FunInd_SeenCalls_push___boxed(lean_object* v_e_422_, lean_object* v_funIndInfo_423_, lean_object* v_args_424_, lean_object* v_calls_425_, lean_object* v_a_426_, lean_object* v_a_427_, lean_object* v_a_428_, lean_object* v_a_429_, lean_object* v_a_430_){
_start:
{
lean_object* v_res_431_; 
v_res_431_ = l_Lean_Meta_FunInd_SeenCalls_push(v_e_422_, v_funIndInfo_423_, v_args_424_, v_calls_425_, v_a_426_, v_a_427_, v_a_428_, v_a_429_);
lean_dec(v_a_429_);
lean_dec_ref(v_a_428_);
lean_dec(v_a_427_);
lean_dec_ref(v_a_426_);
lean_dec_ref(v_args_424_);
return v_res_431_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_FunInd_SeenCalls_push_spec__0(lean_object* v_calls_432_, lean_object* v_as_433_, size_t v_sz_434_, size_t v_i_435_, lean_object* v_b_436_, lean_object* v___y_437_, lean_object* v___y_438_, lean_object* v___y_439_, lean_object* v___y_440_){
_start:
{
lean_object* v___x_442_; 
v___x_442_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_FunInd_SeenCalls_push_spec__0___redArg(v_calls_432_, v_as_433_, v_sz_434_, v_i_435_, v_b_436_);
return v___x_442_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_FunInd_SeenCalls_push_spec__0___boxed(lean_object* v_calls_443_, lean_object* v_as_444_, lean_object* v_sz_445_, lean_object* v_i_446_, lean_object* v_b_447_, lean_object* v___y_448_, lean_object* v___y_449_, lean_object* v___y_450_, lean_object* v___y_451_, lean_object* v___y_452_){
_start:
{
size_t v_sz_boxed_453_; size_t v_i_boxed_454_; lean_object* v_res_455_; 
v_sz_boxed_453_ = lean_unbox_usize(v_sz_445_);
lean_dec(v_sz_445_);
v_i_boxed_454_ = lean_unbox_usize(v_i_446_);
lean_dec(v_i_446_);
v_res_455_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_FunInd_SeenCalls_push_spec__0(v_calls_443_, v_as_444_, v_sz_boxed_453_, v_i_boxed_454_, v_b_447_, v___y_448_, v___y_449_, v___y_450_, v___y_451_);
lean_dec(v___y_451_);
lean_dec_ref(v___y_450_);
lean_dec(v___y_449_);
lean_dec_ref(v___y_448_);
lean_dec_ref(v_as_444_);
return v_res_455_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_FunInd_SeenCalls_push_spec__1(lean_object* v_00_u03b2_456_, lean_object* v_m_457_, lean_object* v_a_458_){
_start:
{
uint8_t v___x_459_; 
v___x_459_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_FunInd_SeenCalls_push_spec__1___redArg(v_m_457_, v_a_458_);
return v___x_459_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_FunInd_SeenCalls_push_spec__1___boxed(lean_object* v_00_u03b2_460_, lean_object* v_m_461_, lean_object* v_a_462_){
_start:
{
uint8_t v_res_463_; lean_object* v_r_464_; 
v_res_463_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_FunInd_SeenCalls_push_spec__1(v_00_u03b2_460_, v_m_461_, v_a_462_);
lean_dec_ref(v_a_462_);
lean_dec_ref(v_m_461_);
v_r_464_ = lean_box(v_res_463_);
return v_r_464_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Meta_FunInd_SeenCalls_push_spec__2(lean_object* v_00_u03b2_465_, lean_object* v_m_466_, lean_object* v_a_467_, lean_object* v_b_468_){
_start:
{
lean_object* v___x_469_; 
v___x_469_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Meta_FunInd_SeenCalls_push_spec__2___redArg(v_m_466_, v_a_467_, v_b_468_);
return v___x_469_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_FunInd_SeenCalls_push_spec__1_spec__1(lean_object* v_00_u03b2_470_, lean_object* v_a_471_, lean_object* v_x_472_){
_start:
{
uint8_t v___x_473_; 
v___x_473_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_FunInd_SeenCalls_push_spec__1_spec__1___redArg(v_a_471_, v_x_472_);
return v___x_473_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_FunInd_SeenCalls_push_spec__1_spec__1___boxed(lean_object* v_00_u03b2_474_, lean_object* v_a_475_, lean_object* v_x_476_){
_start:
{
uint8_t v_res_477_; lean_object* v_r_478_; 
v_res_477_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_FunInd_SeenCalls_push_spec__1_spec__1(v_00_u03b2_474_, v_a_475_, v_x_476_);
lean_dec(v_x_476_);
lean_dec_ref(v_a_475_);
v_r_478_ = lean_box(v_res_477_);
return v_r_478_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Meta_FunInd_SeenCalls_push_spec__2_spec__4(lean_object* v_00_u03b2_479_, lean_object* v_data_480_){
_start:
{
lean_object* v___x_481_; 
v___x_481_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Meta_FunInd_SeenCalls_push_spec__2_spec__4___redArg(v_data_480_);
return v___x_481_;
}
}
LEAN_EXPORT uint8_t l_Array_isEqvAux___at___00Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_FunInd_SeenCalls_push_spec__1_spec__1_spec__2(lean_object* v_xs_482_, lean_object* v_ys_483_, lean_object* v_hsz_484_, lean_object* v_x_485_, lean_object* v_x_486_){
_start:
{
uint8_t v___x_487_; 
v___x_487_ = l_Array_isEqvAux___at___00Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_FunInd_SeenCalls_push_spec__1_spec__1_spec__2___redArg(v_xs_482_, v_ys_483_, v_x_485_);
return v___x_487_;
}
}
LEAN_EXPORT lean_object* l_Array_isEqvAux___at___00Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_FunInd_SeenCalls_push_spec__1_spec__1_spec__2___boxed(lean_object* v_xs_488_, lean_object* v_ys_489_, lean_object* v_hsz_490_, lean_object* v_x_491_, lean_object* v_x_492_){
_start:
{
uint8_t v_res_493_; lean_object* v_r_494_; 
v_res_493_ = l_Array_isEqvAux___at___00Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_FunInd_SeenCalls_push_spec__1_spec__1_spec__2(v_xs_488_, v_ys_489_, v_hsz_490_, v_x_491_, v_x_492_);
lean_dec_ref(v_ys_489_);
lean_dec_ref(v_xs_488_);
v_r_494_ = lean_box(v_res_493_);
return v_r_494_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Meta_FunInd_SeenCalls_push_spec__2_spec__4_spec__6(lean_object* v_00_u03b2_495_, lean_object* v_i_496_, lean_object* v_source_497_, lean_object* v_target_498_){
_start:
{
lean_object* v___x_499_; 
v___x_499_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Meta_FunInd_SeenCalls_push_spec__2_spec__4_spec__6___redArg(v_i_496_, v_source_497_, v_target_498_);
return v___x_499_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Meta_FunInd_SeenCalls_push_spec__2_spec__4_spec__6_spec__7(lean_object* v_00_u03b2_500_, lean_object* v_x_501_, lean_object* v_x_502_){
_start:
{
lean_object* v___x_503_; 
v___x_503_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Meta_FunInd_SeenCalls_push_spec__2_spec__4_spec__6_spec__7___redArg(v_x_501_, v_x_502_);
return v___x_503_;
}
}
LEAN_EXPORT uint8_t l_Lean_Meta_FunInd_SeenCalls_uniques___lam__0(lean_object* v_snd_504_, lean_object* v_x_505_){
_start:
{
uint8_t v___x_506_; 
v___x_506_ = l_Lean_NameSet_contains(v_snd_504_, v_x_505_);
if (v___x_506_ == 0)
{
uint8_t v___x_507_; 
v___x_507_ = 1;
return v___x_507_;
}
else
{
uint8_t v___x_508_; 
v___x_508_ = 0;
return v___x_508_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_FunInd_SeenCalls_uniques___lam__0___boxed(lean_object* v_snd_509_, lean_object* v_x_510_){
_start:
{
uint8_t v_res_511_; lean_object* v_r_512_; 
v_res_511_ = l_Lean_Meta_FunInd_SeenCalls_uniques___lam__0(v_snd_509_, v_x_510_);
lean_dec(v_x_510_);
lean_dec(v_snd_509_);
v_r_512_ = lean_box(v_res_511_);
return v_r_512_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lean_Meta_FunInd_SeenCalls_uniques_spec__0(lean_object* v_a_513_, lean_object* v_a_514_){
_start:
{
if (lean_obj_tag(v_a_513_) == 0)
{
lean_object* v___x_515_; 
v___x_515_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_515_, 0, v_a_514_);
return v___x_515_;
}
else
{
lean_object* v_key_516_; lean_object* v_tail_517_; lean_object* v_fst_518_; lean_object* v_fst_519_; lean_object* v_snd_520_; lean_object* v___x_522_; uint8_t v_isShared_523_; uint8_t v_isSharedCheck_540_; 
v_key_516_ = lean_ctor_get(v_a_513_, 0);
lean_inc(v_key_516_);
v_tail_517_ = lean_ctor_get(v_a_513_, 2);
lean_inc(v_tail_517_);
lean_dec_ref_known(v_a_513_, 3);
v_fst_518_ = lean_ctor_get(v_key_516_, 0);
lean_inc(v_fst_518_);
lean_dec(v_key_516_);
v_fst_519_ = lean_ctor_get(v_a_514_, 0);
v_snd_520_ = lean_ctor_get(v_a_514_, 1);
v_isSharedCheck_540_ = !lean_is_exclusive(v_a_514_);
if (v_isSharedCheck_540_ == 0)
{
v___x_522_ = v_a_514_;
v_isShared_523_ = v_isSharedCheck_540_;
goto v_resetjp_521_;
}
else
{
lean_inc(v_snd_520_);
lean_inc(v_fst_519_);
lean_dec(v_a_514_);
v___x_522_ = lean_box(0);
v_isShared_523_ = v_isSharedCheck_540_;
goto v_resetjp_521_;
}
v_resetjp_521_:
{
uint8_t v___x_524_; 
v___x_524_ = l_Lean_NameSet_contains(v_snd_520_, v_fst_518_);
if (v___x_524_ == 0)
{
uint8_t v___x_525_; 
v___x_525_ = l_Lean_NameSet_contains(v_fst_519_, v_fst_518_);
if (v___x_525_ == 0)
{
lean_object* v___x_526_; lean_object* v___x_528_; 
v___x_526_ = l_Lean_NameSet_insert(v_fst_519_, v_fst_518_);
if (v_isShared_523_ == 0)
{
lean_ctor_set(v___x_522_, 0, v___x_526_);
v___x_528_ = v___x_522_;
goto v_reusejp_527_;
}
else
{
lean_object* v_reuseFailAlloc_530_; 
v_reuseFailAlloc_530_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_530_, 0, v___x_526_);
lean_ctor_set(v_reuseFailAlloc_530_, 1, v_snd_520_);
v___x_528_ = v_reuseFailAlloc_530_;
goto v_reusejp_527_;
}
v_reusejp_527_:
{
v_a_513_ = v_tail_517_;
v_a_514_ = v___x_528_;
goto _start;
}
}
else
{
lean_object* v___x_531_; lean_object* v___x_533_; 
v___x_531_ = l_Lean_NameSet_insert(v_snd_520_, v_fst_518_);
if (v_isShared_523_ == 0)
{
lean_ctor_set(v___x_522_, 1, v___x_531_);
v___x_533_ = v___x_522_;
goto v_reusejp_532_;
}
else
{
lean_object* v_reuseFailAlloc_535_; 
v_reuseFailAlloc_535_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_535_, 0, v_fst_519_);
lean_ctor_set(v_reuseFailAlloc_535_, 1, v___x_531_);
v___x_533_ = v_reuseFailAlloc_535_;
goto v_reusejp_532_;
}
v_reusejp_532_:
{
v_a_513_ = v_tail_517_;
v_a_514_ = v___x_533_;
goto _start;
}
}
}
else
{
lean_object* v___x_537_; 
lean_dec(v_fst_518_);
if (v_isShared_523_ == 0)
{
v___x_537_ = v___x_522_;
goto v_reusejp_536_;
}
else
{
lean_object* v_reuseFailAlloc_539_; 
v_reuseFailAlloc_539_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_539_, 0, v_fst_519_);
lean_ctor_set(v_reuseFailAlloc_539_, 1, v_snd_520_);
v___x_537_ = v_reuseFailAlloc_539_;
goto v_reusejp_536_;
}
v_reusejp_536_:
{
v_a_513_ = v_tail_517_;
v_a_514_ = v___x_537_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_FunInd_SeenCalls_uniques_spec__1(lean_object* v_as_541_, size_t v_sz_542_, size_t v_i_543_, lean_object* v_b_544_){
_start:
{
uint8_t v___x_545_; 
v___x_545_ = lean_usize_dec_lt(v_i_543_, v_sz_542_);
if (v___x_545_ == 0)
{
return v_b_544_;
}
else
{
lean_object* v_a_546_; lean_object* v___x_547_; 
v_a_546_ = lean_array_uget_borrowed(v_as_541_, v_i_543_);
lean_inc(v_a_546_);
v___x_547_ = l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lean_Meta_FunInd_SeenCalls_uniques_spec__0(v_a_546_, v_b_544_);
if (lean_obj_tag(v___x_547_) == 0)
{
lean_object* v_a_548_; 
v_a_548_ = lean_ctor_get(v___x_547_, 0);
lean_inc(v_a_548_);
lean_dec_ref_known(v___x_547_, 1);
return v_a_548_;
}
else
{
lean_object* v_a_549_; size_t v___x_550_; size_t v___x_551_; 
v_a_549_ = lean_ctor_get(v___x_547_, 0);
lean_inc(v_a_549_);
lean_dec_ref_known(v___x_547_, 1);
v___x_550_ = ((size_t)1ULL);
v___x_551_ = lean_usize_add(v_i_543_, v___x_550_);
v_i_543_ = v___x_551_;
v_b_544_ = v_a_549_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_FunInd_SeenCalls_uniques_spec__1___boxed(lean_object* v_as_553_, lean_object* v_sz_554_, lean_object* v_i_555_, lean_object* v_b_556_){
_start:
{
size_t v_sz_boxed_557_; size_t v_i_boxed_558_; lean_object* v_res_559_; 
v_sz_boxed_557_ = lean_unbox_usize(v_sz_554_);
lean_dec(v_sz_554_);
v_i_boxed_558_ = lean_unbox_usize(v_i_555_);
lean_dec(v_i_555_);
v_res_559_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_FunInd_SeenCalls_uniques_spec__1(v_as_553_, v_sz_boxed_557_, v_i_boxed_558_, v_b_556_);
lean_dec_ref(v_as_553_);
return v_res_559_;
}
}
static lean_object* _init_l_Lean_Meta_FunInd_SeenCalls_uniques___closed__0(void){
_start:
{
lean_object* v_seen_560_; lean_object* v___x_561_; 
v_seen_560_ = l_Lean_NameSet_empty;
v___x_561_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_561_, 0, v_seen_560_);
lean_ctor_set(v___x_561_, 1, v_seen_560_);
return v___x_561_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_FunInd_SeenCalls_uniques(lean_object* v_calls_562_){
_start:
{
lean_object* v_seen_563_; lean_object* v___x_564_; lean_object* v_buckets_565_; size_t v_sz_566_; size_t v___x_567_; lean_object* v___x_568_; lean_object* v_fst_569_; lean_object* v_snd_570_; lean_object* v___f_571_; lean_object* v___x_572_; 
v_seen_563_ = lean_ctor_get(v_calls_562_, 1);
v___x_564_ = lean_obj_once(&l_Lean_Meta_FunInd_SeenCalls_uniques___closed__0, &l_Lean_Meta_FunInd_SeenCalls_uniques___closed__0_once, _init_l_Lean_Meta_FunInd_SeenCalls_uniques___closed__0);
v_buckets_565_ = lean_ctor_get(v_seen_563_, 1);
v_sz_566_ = lean_array_size(v_buckets_565_);
v___x_567_ = ((size_t)0ULL);
v___x_568_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_FunInd_SeenCalls_uniques_spec__1(v_buckets_565_, v_sz_566_, v___x_567_, v___x_564_);
v_fst_569_ = lean_ctor_get(v___x_568_, 0);
lean_inc(v_fst_569_);
v_snd_570_ = lean_ctor_get(v___x_568_, 1);
lean_inc(v_snd_570_);
lean_dec_ref(v___x_568_);
v___f_571_ = lean_alloc_closure((void*)(l_Lean_Meta_FunInd_SeenCalls_uniques___lam__0___boxed), 2, 1);
lean_closure_set(v___f_571_, 0, v_snd_570_);
v___x_572_ = l_Lean_NameSet_filter(v___f_571_, v_fst_569_);
return v___x_572_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_FunInd_SeenCalls_uniques___boxed(lean_object* v_calls_573_){
_start:
{
lean_object* v_res_574_; 
v_res_574_ = l_Lean_Meta_FunInd_SeenCalls_uniques(v_calls_573_);
lean_dec_ref(v_calls_573_);
return v_res_574_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_FunInd_Collector_saveFunInd___redArg(lean_object* v_e_575_, lean_object* v_funIndInfo_576_, lean_object* v_args_577_, lean_object* v_a_578_, lean_object* v_a_579_, lean_object* v_a_580_, lean_object* v_a_581_, lean_object* v_a_582_){
_start:
{
lean_object* v___x_584_; lean_object* v___x_585_; 
v___x_584_ = lean_st_ref_get(v_a_578_);
v___x_585_ = l_Lean_Meta_FunInd_SeenCalls_push(v_e_575_, v_funIndInfo_576_, v_args_577_, v___x_584_, v_a_579_, v_a_580_, v_a_581_, v_a_582_);
if (lean_obj_tag(v___x_585_) == 0)
{
lean_object* v_a_586_; lean_object* v___x_588_; uint8_t v_isShared_589_; uint8_t v_isSharedCheck_595_; 
v_a_586_ = lean_ctor_get(v___x_585_, 0);
v_isSharedCheck_595_ = !lean_is_exclusive(v___x_585_);
if (v_isSharedCheck_595_ == 0)
{
v___x_588_ = v___x_585_;
v_isShared_589_ = v_isSharedCheck_595_;
goto v_resetjp_587_;
}
else
{
lean_inc(v_a_586_);
lean_dec(v___x_585_);
v___x_588_ = lean_box(0);
v_isShared_589_ = v_isSharedCheck_595_;
goto v_resetjp_587_;
}
v_resetjp_587_:
{
lean_object* v___x_590_; lean_object* v___x_591_; lean_object* v___x_593_; 
v___x_590_ = lean_box(0);
v___x_591_ = lean_st_ref_swap(v_a_578_, v_a_586_);
lean_dec(v___x_591_);
if (v_isShared_589_ == 0)
{
lean_ctor_set(v___x_588_, 0, v___x_590_);
v___x_593_ = v___x_588_;
goto v_reusejp_592_;
}
else
{
lean_object* v_reuseFailAlloc_594_; 
v_reuseFailAlloc_594_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_594_, 0, v___x_590_);
v___x_593_ = v_reuseFailAlloc_594_;
goto v_reusejp_592_;
}
v_reusejp_592_:
{
return v___x_593_;
}
}
}
else
{
lean_object* v_a_596_; lean_object* v___x_598_; uint8_t v_isShared_599_; uint8_t v_isSharedCheck_603_; 
v_a_596_ = lean_ctor_get(v___x_585_, 0);
v_isSharedCheck_603_ = !lean_is_exclusive(v___x_585_);
if (v_isSharedCheck_603_ == 0)
{
v___x_598_ = v___x_585_;
v_isShared_599_ = v_isSharedCheck_603_;
goto v_resetjp_597_;
}
else
{
lean_inc(v_a_596_);
lean_dec(v___x_585_);
v___x_598_ = lean_box(0);
v_isShared_599_ = v_isSharedCheck_603_;
goto v_resetjp_597_;
}
v_resetjp_597_:
{
lean_object* v___x_601_; 
if (v_isShared_599_ == 0)
{
v___x_601_ = v___x_598_;
goto v_reusejp_600_;
}
else
{
lean_object* v_reuseFailAlloc_602_; 
v_reuseFailAlloc_602_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_602_, 0, v_a_596_);
v___x_601_ = v_reuseFailAlloc_602_;
goto v_reusejp_600_;
}
v_reusejp_600_:
{
return v___x_601_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_FunInd_Collector_saveFunInd___redArg___boxed(lean_object* v_e_604_, lean_object* v_funIndInfo_605_, lean_object* v_args_606_, lean_object* v_a_607_, lean_object* v_a_608_, lean_object* v_a_609_, lean_object* v_a_610_, lean_object* v_a_611_, lean_object* v_a_612_){
_start:
{
lean_object* v_res_613_; 
v_res_613_ = l_Lean_Meta_FunInd_Collector_saveFunInd___redArg(v_e_604_, v_funIndInfo_605_, v_args_606_, v_a_607_, v_a_608_, v_a_609_, v_a_610_, v_a_611_);
lean_dec(v_a_611_);
lean_dec_ref(v_a_610_);
lean_dec(v_a_609_);
lean_dec_ref(v_a_608_);
lean_dec(v_a_607_);
lean_dec_ref(v_args_606_);
return v_res_613_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_FunInd_Collector_saveFunInd(lean_object* v_e_614_, lean_object* v_funIndInfo_615_, lean_object* v_args_616_, lean_object* v_a_617_, lean_object* v_a_618_, lean_object* v_a_619_, lean_object* v_a_620_, lean_object* v_a_621_, lean_object* v_a_622_){
_start:
{
lean_object* v___x_624_; 
v___x_624_ = l_Lean_Meta_FunInd_Collector_saveFunInd___redArg(v_e_614_, v_funIndInfo_615_, v_args_616_, v_a_618_, v_a_619_, v_a_620_, v_a_621_, v_a_622_);
return v___x_624_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_FunInd_Collector_saveFunInd___boxed(lean_object* v_e_625_, lean_object* v_funIndInfo_626_, lean_object* v_args_627_, lean_object* v_a_628_, lean_object* v_a_629_, lean_object* v_a_630_, lean_object* v_a_631_, lean_object* v_a_632_, lean_object* v_a_633_, lean_object* v_a_634_){
_start:
{
lean_object* v_res_635_; 
v_res_635_ = l_Lean_Meta_FunInd_Collector_saveFunInd(v_e_625_, v_funIndInfo_626_, v_args_627_, v_a_628_, v_a_629_, v_a_630_, v_a_631_, v_a_632_, v_a_633_);
lean_dec(v_a_633_);
lean_dec_ref(v_a_632_);
lean_dec(v_a_631_);
lean_dec_ref(v_a_630_);
lean_dec(v_a_629_);
lean_dec_ref(v_a_628_);
lean_dec_ref(v_args_627_);
return v_res_635_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_FunInd_Collector_visitApp___redArg(lean_object* v_e_636_, lean_object* v_funIndInfo_637_, lean_object* v_args_638_, lean_object* v_a_639_, lean_object* v_a_640_, lean_object* v_a_641_, lean_object* v_a_642_, lean_object* v_a_643_){
_start:
{
lean_object* v___x_645_; 
v___x_645_ = l_Lean_Meta_FunInd_Collector_saveFunInd___redArg(v_e_636_, v_funIndInfo_637_, v_args_638_, v_a_639_, v_a_640_, v_a_641_, v_a_642_, v_a_643_);
return v___x_645_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_FunInd_Collector_visitApp___redArg___boxed(lean_object* v_e_646_, lean_object* v_funIndInfo_647_, lean_object* v_args_648_, lean_object* v_a_649_, lean_object* v_a_650_, lean_object* v_a_651_, lean_object* v_a_652_, lean_object* v_a_653_, lean_object* v_a_654_){
_start:
{
lean_object* v_res_655_; 
v_res_655_ = l_Lean_Meta_FunInd_Collector_visitApp___redArg(v_e_646_, v_funIndInfo_647_, v_args_648_, v_a_649_, v_a_650_, v_a_651_, v_a_652_, v_a_653_);
lean_dec(v_a_653_);
lean_dec_ref(v_a_652_);
lean_dec(v_a_651_);
lean_dec_ref(v_a_650_);
lean_dec(v_a_649_);
lean_dec_ref(v_args_648_);
return v_res_655_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_FunInd_Collector_visitApp(lean_object* v_e_656_, lean_object* v_funIndInfo_657_, lean_object* v_args_658_, lean_object* v_a_659_, lean_object* v_a_660_, lean_object* v_a_661_, lean_object* v_a_662_, lean_object* v_a_663_, lean_object* v_a_664_){
_start:
{
lean_object* v___x_666_; 
v___x_666_ = l_Lean_Meta_FunInd_Collector_saveFunInd___redArg(v_e_656_, v_funIndInfo_657_, v_args_658_, v_a_660_, v_a_661_, v_a_662_, v_a_663_, v_a_664_);
return v___x_666_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_FunInd_Collector_visitApp___boxed(lean_object* v_e_667_, lean_object* v_funIndInfo_668_, lean_object* v_args_669_, lean_object* v_a_670_, lean_object* v_a_671_, lean_object* v_a_672_, lean_object* v_a_673_, lean_object* v_a_674_, lean_object* v_a_675_, lean_object* v_a_676_){
_start:
{
lean_object* v_res_677_; 
v_res_677_ = l_Lean_Meta_FunInd_Collector_visitApp(v_e_667_, v_funIndInfo_668_, v_args_669_, v_a_670_, v_a_671_, v_a_672_, v_a_673_, v_a_674_, v_a_675_);
lean_dec(v_a_675_);
lean_dec_ref(v_a_674_);
lean_dec(v_a_673_);
lean_dec_ref(v_a_672_);
lean_dec(v_a_671_);
lean_dec_ref(v_a_670_);
lean_dec_ref(v_args_669_);
return v_res_677_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Meta_FunInd_Collector_visit_spec__2_spec__3_spec__4_spec__6___redArg(lean_object* v_x_678_, lean_object* v_x_679_){
_start:
{
if (lean_obj_tag(v_x_679_) == 0)
{
return v_x_678_;
}
else
{
lean_object* v_key_680_; lean_object* v_value_681_; lean_object* v_tail_682_; lean_object* v___x_684_; uint8_t v_isShared_685_; uint8_t v_isSharedCheck_708_; 
v_key_680_ = lean_ctor_get(v_x_679_, 0);
v_value_681_ = lean_ctor_get(v_x_679_, 1);
v_tail_682_ = lean_ctor_get(v_x_679_, 2);
v_isSharedCheck_708_ = !lean_is_exclusive(v_x_679_);
if (v_isSharedCheck_708_ == 0)
{
v___x_684_ = v_x_679_;
v_isShared_685_ = v_isSharedCheck_708_;
goto v_resetjp_683_;
}
else
{
lean_inc(v_tail_682_);
lean_inc(v_value_681_);
lean_inc(v_key_680_);
lean_dec(v_x_679_);
v___x_684_ = lean_box(0);
v_isShared_685_ = v_isSharedCheck_708_;
goto v_resetjp_683_;
}
v_resetjp_683_:
{
lean_object* v___x_686_; size_t v___x_687_; uint64_t v___x_688_; uint64_t v___x_689_; uint64_t v___x_690_; uint64_t v___x_691_; uint64_t v___x_692_; uint64_t v_fold_693_; uint64_t v___x_694_; uint64_t v___x_695_; uint64_t v___x_696_; size_t v___x_697_; size_t v___x_698_; size_t v___x_699_; size_t v___x_700_; size_t v___x_701_; lean_object* v___x_702_; lean_object* v___x_704_; 
v___x_686_ = lean_array_get_size(v_x_678_);
v___x_687_ = lean_ptr_addr(v_key_680_);
v___x_688_ = lean_usize_to_uint64(v___x_687_);
v___x_689_ = 11ULL;
v___x_690_ = lean_uint64_mix_hash(v___x_688_, v___x_689_);
v___x_691_ = 32ULL;
v___x_692_ = lean_uint64_shift_right(v___x_690_, v___x_691_);
v_fold_693_ = lean_uint64_xor(v___x_690_, v___x_692_);
v___x_694_ = 16ULL;
v___x_695_ = lean_uint64_shift_right(v_fold_693_, v___x_694_);
v___x_696_ = lean_uint64_xor(v_fold_693_, v___x_695_);
v___x_697_ = lean_uint64_to_usize(v___x_696_);
v___x_698_ = lean_usize_of_nat(v___x_686_);
v___x_699_ = ((size_t)1ULL);
v___x_700_ = lean_usize_sub(v___x_698_, v___x_699_);
v___x_701_ = lean_usize_land(v___x_697_, v___x_700_);
v___x_702_ = lean_array_uget_borrowed(v_x_678_, v___x_701_);
lean_inc(v___x_702_);
if (v_isShared_685_ == 0)
{
lean_ctor_set(v___x_684_, 2, v___x_702_);
v___x_704_ = v___x_684_;
goto v_reusejp_703_;
}
else
{
lean_object* v_reuseFailAlloc_707_; 
v_reuseFailAlloc_707_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_707_, 0, v_key_680_);
lean_ctor_set(v_reuseFailAlloc_707_, 1, v_value_681_);
lean_ctor_set(v_reuseFailAlloc_707_, 2, v___x_702_);
v___x_704_ = v_reuseFailAlloc_707_;
goto v_reusejp_703_;
}
v_reusejp_703_:
{
lean_object* v___x_705_; 
v___x_705_ = lean_array_uset(v_x_678_, v___x_701_, v___x_704_);
v_x_678_ = v___x_705_;
v_x_679_ = v_tail_682_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Meta_FunInd_Collector_visit_spec__2_spec__3_spec__4___redArg(lean_object* v_i_709_, lean_object* v_source_710_, lean_object* v_target_711_){
_start:
{
lean_object* v___x_712_; uint8_t v___x_713_; 
v___x_712_ = lean_array_get_size(v_source_710_);
v___x_713_ = lean_nat_dec_lt(v_i_709_, v___x_712_);
if (v___x_713_ == 0)
{
lean_dec_ref(v_source_710_);
lean_dec(v_i_709_);
return v_target_711_;
}
else
{
lean_object* v_es_714_; lean_object* v___x_715_; lean_object* v_source_716_; lean_object* v_target_717_; lean_object* v___x_718_; lean_object* v___x_719_; 
v_es_714_ = lean_array_fget(v_source_710_, v_i_709_);
v___x_715_ = lean_box(0);
v_source_716_ = lean_array_fset(v_source_710_, v_i_709_, v___x_715_);
v_target_717_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Meta_FunInd_Collector_visit_spec__2_spec__3_spec__4_spec__6___redArg(v_target_711_, v_es_714_);
v___x_718_ = lean_unsigned_to_nat(1u);
v___x_719_ = lean_nat_add(v_i_709_, v___x_718_);
lean_dec(v_i_709_);
v_i_709_ = v___x_719_;
v_source_710_ = v_source_716_;
v_target_711_ = v_target_717_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Meta_FunInd_Collector_visit_spec__2_spec__3___redArg(lean_object* v_data_721_){
_start:
{
lean_object* v___x_722_; lean_object* v___x_723_; lean_object* v_nbuckets_724_; lean_object* v___x_725_; lean_object* v___x_726_; lean_object* v___x_727_; lean_object* v___x_728_; lean_object* v___x_729_; 
v___x_722_ = lean_array_get_size(v_data_721_);
v___x_723_ = lean_unsigned_to_nat(2u);
v_nbuckets_724_ = lean_nat_mul(v___x_722_, v___x_723_);
v___x_725_ = lean_unsigned_to_nat(0u);
v___x_726_ = lean_box(0);
v___x_727_ = lean_mk_array(v_nbuckets_724_, v___x_726_);
v___x_728_ = lean_array_propagate_mark(v_data_721_, v___x_727_);
v___x_729_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Meta_FunInd_Collector_visit_spec__2_spec__3_spec__4___redArg(v___x_725_, v_data_721_, v___x_728_);
return v___x_729_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_FunInd_Collector_visit_spec__1_spec__1___redArg(lean_object* v_a_730_, lean_object* v_x_731_){
_start:
{
if (lean_obj_tag(v_x_731_) == 0)
{
uint8_t v___x_732_; 
v___x_732_ = 0;
return v___x_732_;
}
else
{
lean_object* v_key_733_; lean_object* v_tail_734_; size_t v___x_735_; size_t v___x_736_; uint8_t v___x_737_; 
v_key_733_ = lean_ctor_get(v_x_731_, 0);
v_tail_734_ = lean_ctor_get(v_x_731_, 2);
v___x_735_ = lean_ptr_addr(v_key_733_);
v___x_736_ = lean_ptr_addr(v_a_730_);
v___x_737_ = lean_usize_dec_eq(v___x_735_, v___x_736_);
if (v___x_737_ == 0)
{
v_x_731_ = v_tail_734_;
goto _start;
}
else
{
return v___x_737_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_FunInd_Collector_visit_spec__1_spec__1___redArg___boxed(lean_object* v_a_739_, lean_object* v_x_740_){
_start:
{
uint8_t v_res_741_; lean_object* v_r_742_; 
v_res_741_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_FunInd_Collector_visit_spec__1_spec__1___redArg(v_a_739_, v_x_740_);
lean_dec(v_x_740_);
lean_dec_ref(v_a_739_);
v_r_742_ = lean_box(v_res_741_);
return v_r_742_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Meta_FunInd_Collector_visit_spec__2___redArg(lean_object* v_m_743_, lean_object* v_a_744_, lean_object* v_b_745_){
_start:
{
lean_object* v_size_746_; lean_object* v_buckets_747_; lean_object* v___x_748_; size_t v___x_749_; uint64_t v___x_750_; uint64_t v___x_751_; uint64_t v___x_752_; uint64_t v___x_753_; uint64_t v___x_754_; uint64_t v_fold_755_; uint64_t v___x_756_; uint64_t v___x_757_; uint64_t v___x_758_; size_t v___x_759_; size_t v___x_760_; size_t v___x_761_; size_t v___x_762_; size_t v___x_763_; lean_object* v_bkt_764_; uint8_t v___x_765_; 
v_size_746_ = lean_ctor_get(v_m_743_, 0);
v_buckets_747_ = lean_ctor_get(v_m_743_, 1);
v___x_748_ = lean_array_get_size(v_buckets_747_);
v___x_749_ = lean_ptr_addr(v_a_744_);
v___x_750_ = lean_usize_to_uint64(v___x_749_);
v___x_751_ = 11ULL;
v___x_752_ = lean_uint64_mix_hash(v___x_750_, v___x_751_);
v___x_753_ = 32ULL;
v___x_754_ = lean_uint64_shift_right(v___x_752_, v___x_753_);
v_fold_755_ = lean_uint64_xor(v___x_752_, v___x_754_);
v___x_756_ = 16ULL;
v___x_757_ = lean_uint64_shift_right(v_fold_755_, v___x_756_);
v___x_758_ = lean_uint64_xor(v_fold_755_, v___x_757_);
v___x_759_ = lean_uint64_to_usize(v___x_758_);
v___x_760_ = lean_usize_of_nat(v___x_748_);
v___x_761_ = ((size_t)1ULL);
v___x_762_ = lean_usize_sub(v___x_760_, v___x_761_);
v___x_763_ = lean_usize_land(v___x_759_, v___x_762_);
v_bkt_764_ = lean_array_uget_borrowed(v_buckets_747_, v___x_763_);
v___x_765_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_FunInd_Collector_visit_spec__1_spec__1___redArg(v_a_744_, v_bkt_764_);
if (v___x_765_ == 0)
{
lean_object* v___x_767_; uint8_t v_isShared_768_; uint8_t v_isSharedCheck_786_; 
lean_inc_ref(v_buckets_747_);
lean_inc(v_size_746_);
v_isSharedCheck_786_ = !lean_is_exclusive(v_m_743_);
if (v_isSharedCheck_786_ == 0)
{
lean_object* v_unused_787_; lean_object* v_unused_788_; 
v_unused_787_ = lean_ctor_get(v_m_743_, 1);
lean_dec(v_unused_787_);
v_unused_788_ = lean_ctor_get(v_m_743_, 0);
lean_dec(v_unused_788_);
v___x_767_ = v_m_743_;
v_isShared_768_ = v_isSharedCheck_786_;
goto v_resetjp_766_;
}
else
{
lean_dec(v_m_743_);
v___x_767_ = lean_box(0);
v_isShared_768_ = v_isSharedCheck_786_;
goto v_resetjp_766_;
}
v_resetjp_766_:
{
lean_object* v___x_769_; lean_object* v_size_x27_770_; lean_object* v___x_771_; lean_object* v_buckets_x27_772_; lean_object* v___x_773_; lean_object* v___x_774_; lean_object* v___x_775_; lean_object* v___x_776_; lean_object* v___x_777_; uint8_t v___x_778_; 
v___x_769_ = lean_unsigned_to_nat(1u);
v_size_x27_770_ = lean_nat_add(v_size_746_, v___x_769_);
lean_dec(v_size_746_);
lean_inc(v_bkt_764_);
v___x_771_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_771_, 0, v_a_744_);
lean_ctor_set(v___x_771_, 1, v_b_745_);
lean_ctor_set(v___x_771_, 2, v_bkt_764_);
v_buckets_x27_772_ = lean_array_uset(v_buckets_747_, v___x_763_, v___x_771_);
v___x_773_ = lean_unsigned_to_nat(4u);
v___x_774_ = lean_nat_mul(v_size_x27_770_, v___x_773_);
v___x_775_ = lean_unsigned_to_nat(3u);
v___x_776_ = lean_nat_div(v___x_774_, v___x_775_);
lean_dec(v___x_774_);
v___x_777_ = lean_array_get_size(v_buckets_x27_772_);
v___x_778_ = lean_nat_dec_le(v___x_776_, v___x_777_);
lean_dec(v___x_776_);
if (v___x_778_ == 0)
{
lean_object* v_val_779_; lean_object* v___x_781_; 
v_val_779_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Meta_FunInd_Collector_visit_spec__2_spec__3___redArg(v_buckets_x27_772_);
if (v_isShared_768_ == 0)
{
lean_ctor_set(v___x_767_, 1, v_val_779_);
lean_ctor_set(v___x_767_, 0, v_size_x27_770_);
v___x_781_ = v___x_767_;
goto v_reusejp_780_;
}
else
{
lean_object* v_reuseFailAlloc_782_; 
v_reuseFailAlloc_782_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_782_, 0, v_size_x27_770_);
lean_ctor_set(v_reuseFailAlloc_782_, 1, v_val_779_);
v___x_781_ = v_reuseFailAlloc_782_;
goto v_reusejp_780_;
}
v_reusejp_780_:
{
return v___x_781_;
}
}
else
{
lean_object* v___x_784_; 
if (v_isShared_768_ == 0)
{
lean_ctor_set(v___x_767_, 1, v_buckets_x27_772_);
lean_ctor_set(v___x_767_, 0, v_size_x27_770_);
v___x_784_ = v___x_767_;
goto v_reusejp_783_;
}
else
{
lean_object* v_reuseFailAlloc_785_; 
v_reuseFailAlloc_785_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_785_, 0, v_size_x27_770_);
lean_ctor_set(v_reuseFailAlloc_785_, 1, v_buckets_x27_772_);
v___x_784_ = v_reuseFailAlloc_785_;
goto v_reusejp_783_;
}
v_reusejp_783_:
{
return v___x_784_;
}
}
}
}
else
{
lean_dec(v_b_745_);
lean_dec_ref(v_a_744_);
return v_m_743_;
}
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_FunInd_Collector_visit_spec__1___redArg(lean_object* v_m_789_, lean_object* v_a_790_){
_start:
{
lean_object* v_buckets_791_; lean_object* v___x_792_; size_t v___x_793_; uint64_t v___x_794_; uint64_t v___x_795_; uint64_t v___x_796_; uint64_t v___x_797_; uint64_t v___x_798_; uint64_t v_fold_799_; uint64_t v___x_800_; uint64_t v___x_801_; uint64_t v___x_802_; size_t v___x_803_; size_t v___x_804_; size_t v___x_805_; size_t v___x_806_; size_t v___x_807_; lean_object* v___x_808_; uint8_t v___x_809_; 
v_buckets_791_ = lean_ctor_get(v_m_789_, 1);
v___x_792_ = lean_array_get_size(v_buckets_791_);
v___x_793_ = lean_ptr_addr(v_a_790_);
v___x_794_ = lean_usize_to_uint64(v___x_793_);
v___x_795_ = 11ULL;
v___x_796_ = lean_uint64_mix_hash(v___x_794_, v___x_795_);
v___x_797_ = 32ULL;
v___x_798_ = lean_uint64_shift_right(v___x_796_, v___x_797_);
v_fold_799_ = lean_uint64_xor(v___x_796_, v___x_798_);
v___x_800_ = 16ULL;
v___x_801_ = lean_uint64_shift_right(v_fold_799_, v___x_800_);
v___x_802_ = lean_uint64_xor(v_fold_799_, v___x_801_);
v___x_803_ = lean_uint64_to_usize(v___x_802_);
v___x_804_ = lean_usize_of_nat(v___x_792_);
v___x_805_ = ((size_t)1ULL);
v___x_806_ = lean_usize_sub(v___x_804_, v___x_805_);
v___x_807_ = lean_usize_land(v___x_803_, v___x_806_);
v___x_808_ = lean_array_uget_borrowed(v_buckets_791_, v___x_807_);
v___x_809_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_FunInd_Collector_visit_spec__1_spec__1___redArg(v_a_790_, v___x_808_);
return v___x_809_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_FunInd_Collector_visit_spec__1___redArg___boxed(lean_object* v_m_810_, lean_object* v_a_811_){
_start:
{
uint8_t v_res_812_; lean_object* v_r_813_; 
v_res_812_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_FunInd_Collector_visit_spec__1___redArg(v_m_810_, v_a_811_);
lean_dec_ref(v_a_811_);
lean_dec_ref(v_m_810_);
v_r_813_ = lean_box(v_res_812_);
return v_r_813_;
}
}
static lean_object* _init_l_Lean_Meta_FunInd_Collector_visit___closed__0(void){
_start:
{
lean_object* v___x_814_; lean_object* v_dummy_815_; 
v___x_814_ = lean_box(0);
v_dummy_815_ = l_Lean_Expr_sort___override(v___x_814_);
return v_dummy_815_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_FunInd_Collector_visit_spec__3(lean_object* v_e_816_, lean_object* v_x_817_, lean_object* v_x_818_, lean_object* v_x_819_, lean_object* v___y_820_, lean_object* v___y_821_, lean_object* v___y_822_, lean_object* v___y_823_, lean_object* v___y_824_, lean_object* v___y_825_, lean_object* v___y_826_){
_start:
{
lean_object* v___y_829_; lean_object* v___y_830_; lean_object* v___y_831_; lean_object* v___y_832_; lean_object* v___y_833_; lean_object* v___y_834_; lean_object* v___y_835_; 
if (lean_obj_tag(v_x_817_) == 5)
{
lean_object* v_fn_849_; lean_object* v_arg_850_; lean_object* v___x_851_; lean_object* v___x_852_; lean_object* v___x_853_; 
v_fn_849_ = lean_ctor_get(v_x_817_, 0);
lean_inc_ref(v_fn_849_);
v_arg_850_ = lean_ctor_get(v_x_817_, 1);
lean_inc_ref(v_arg_850_);
lean_dec_ref_known(v_x_817_, 2);
v___x_851_ = lean_array_set(v_x_818_, v_x_819_, v_arg_850_);
v___x_852_ = lean_unsigned_to_nat(1u);
v___x_853_ = lean_nat_sub(v_x_819_, v___x_852_);
lean_dec(v_x_819_);
v_x_817_ = v_fn_849_;
v_x_818_ = v___x_851_;
v_x_819_ = v___x_853_;
goto _start;
}
else
{
lean_dec(v_x_819_);
if (lean_obj_tag(v_x_817_) == 4)
{
lean_object* v_declName_855_; lean_object* v_funName_856_; uint8_t v___x_857_; 
v_declName_855_ = lean_ctor_get(v_x_817_, 0);
lean_inc(v_declName_855_);
lean_dec_ref_known(v_x_817_, 2);
v_funName_856_ = lean_ctor_get(v___y_821_, 0);
v___x_857_ = lean_name_eq(v_declName_855_, v_funName_856_);
lean_dec(v_declName_855_);
if (v___x_857_ == 0)
{
lean_dec_ref(v_e_816_);
v___y_829_ = v___y_820_;
v___y_830_ = v___y_821_;
v___y_831_ = v___y_822_;
v___y_832_ = v___y_823_;
v___y_833_ = v___y_824_;
v___y_834_ = v___y_825_;
v___y_835_ = v___y_826_;
goto v___jp_828_;
}
else
{
uint8_t v___x_858_; 
v___x_858_ = l_Lean_Expr_hasLooseBVars(v_e_816_);
if (v___x_858_ == 0)
{
lean_object* v___x_859_; 
lean_inc_ref(v___y_821_);
v___x_859_ = l_Lean_Meta_FunInd_Collector_saveFunInd___redArg(v_e_816_, v___y_821_, v_x_818_, v___y_822_, v___y_823_, v___y_824_, v___y_825_, v___y_826_);
if (lean_obj_tag(v___x_859_) == 0)
{
lean_dec_ref_known(v___x_859_, 1);
v___y_829_ = v___y_820_;
v___y_830_ = v___y_821_;
v___y_831_ = v___y_822_;
v___y_832_ = v___y_823_;
v___y_833_ = v___y_824_;
v___y_834_ = v___y_825_;
v___y_835_ = v___y_826_;
goto v___jp_828_;
}
else
{
lean_dec_ref(v_x_818_);
return v___x_859_;
}
}
else
{
lean_dec_ref(v_e_816_);
v___y_829_ = v___y_820_;
v___y_830_ = v___y_821_;
v___y_831_ = v___y_822_;
v___y_832_ = v___y_823_;
v___y_833_ = v___y_824_;
v___y_834_ = v___y_825_;
v___y_835_ = v___y_826_;
goto v___jp_828_;
}
}
}
else
{
lean_object* v___x_860_; 
lean_dec_ref(v_e_816_);
v___x_860_ = l_Lean_Meta_FunInd_Collector_visit(v_x_817_, v___y_820_, v___y_821_, v___y_822_, v___y_823_, v___y_824_, v___y_825_, v___y_826_);
if (lean_obj_tag(v___x_860_) == 0)
{
lean_dec_ref_known(v___x_860_, 1);
v___y_829_ = v___y_820_;
v___y_830_ = v___y_821_;
v___y_831_ = v___y_822_;
v___y_832_ = v___y_823_;
v___y_833_ = v___y_824_;
v___y_834_ = v___y_825_;
v___y_835_ = v___y_826_;
goto v___jp_828_;
}
else
{
lean_dec_ref(v_x_818_);
return v___x_860_;
}
}
}
v___jp_828_:
{
lean_object* v___x_836_; lean_object* v___x_837_; lean_object* v___x_838_; uint8_t v___x_839_; 
v___x_836_ = lean_unsigned_to_nat(0u);
v___x_837_ = lean_array_get_size(v_x_818_);
v___x_838_ = lean_box(0);
v___x_839_ = lean_nat_dec_lt(v___x_836_, v___x_837_);
if (v___x_839_ == 0)
{
lean_object* v___x_840_; 
lean_dec_ref(v_x_818_);
v___x_840_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_840_, 0, v___x_838_);
return v___x_840_;
}
else
{
uint8_t v___x_841_; 
v___x_841_ = lean_nat_dec_le(v___x_837_, v___x_837_);
if (v___x_841_ == 0)
{
if (v___x_839_ == 0)
{
lean_object* v___x_842_; 
lean_dec_ref(v_x_818_);
v___x_842_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_842_, 0, v___x_838_);
return v___x_842_;
}
else
{
size_t v___x_843_; size_t v___x_844_; lean_object* v___x_845_; 
v___x_843_ = ((size_t)0ULL);
v___x_844_ = lean_usize_of_nat(v___x_837_);
v___x_845_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_FunInd_Collector_visit_spec__0(v_x_818_, v___x_843_, v___x_844_, v___x_838_, v___y_829_, v___y_830_, v___y_831_, v___y_832_, v___y_833_, v___y_834_, v___y_835_);
lean_dec_ref(v_x_818_);
return v___x_845_;
}
}
else
{
size_t v___x_846_; size_t v___x_847_; lean_object* v___x_848_; 
v___x_846_ = ((size_t)0ULL);
v___x_847_ = lean_usize_of_nat(v___x_837_);
v___x_848_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_FunInd_Collector_visit_spec__0(v_x_818_, v___x_846_, v___x_847_, v___x_838_, v___y_829_, v___y_830_, v___y_831_, v___y_832_, v___y_833_, v___y_834_, v___y_835_);
lean_dec_ref(v_x_818_);
return v___x_848_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_FunInd_Collector_visit(lean_object* v_e_861_, lean_object* v_a_862_, lean_object* v_a_863_, lean_object* v_a_864_, lean_object* v_a_865_, lean_object* v_a_866_, lean_object* v_a_867_, lean_object* v_a_868_){
_start:
{
lean_object* v_d_871_; lean_object* v_b_872_; lean_object* v___y_873_; lean_object* v___y_874_; lean_object* v___y_875_; lean_object* v___y_876_; lean_object* v___y_877_; lean_object* v___y_878_; lean_object* v___y_879_; lean_object* v___x_882_; lean_object* v_toHashSet_883_; lean_object* v___x_885_; uint8_t v_isShared_886_; uint8_t v_isSharedCheck_930_; 
v___x_882_ = lean_st_ref_get(v_a_862_);
v_toHashSet_883_ = lean_ctor_get(v___x_882_, 0);
v_isSharedCheck_930_ = !lean_is_exclusive(v___x_882_);
if (v_isSharedCheck_930_ == 0)
{
v___x_885_ = v___x_882_;
v_isShared_886_ = v_isSharedCheck_930_;
goto v_resetjp_884_;
}
else
{
lean_inc(v_toHashSet_883_);
lean_dec(v___x_882_);
v___x_885_ = lean_box(0);
v_isShared_886_ = v_isSharedCheck_930_;
goto v_resetjp_884_;
}
v___jp_870_:
{
lean_object* v___x_880_; 
v___x_880_ = l_Lean_Meta_FunInd_Collector_visit(v_d_871_, v___y_873_, v___y_874_, v___y_875_, v___y_876_, v___y_877_, v___y_878_, v___y_879_);
if (lean_obj_tag(v___x_880_) == 0)
{
lean_dec_ref_known(v___x_880_, 1);
v_e_861_ = v_b_872_;
v_a_862_ = v___y_873_;
v_a_863_ = v___y_874_;
v_a_864_ = v___y_875_;
v_a_865_ = v___y_876_;
v_a_866_ = v___y_877_;
v_a_867_ = v___y_878_;
v_a_868_ = v___y_879_;
goto _start;
}
else
{
lean_dec_ref(v_b_872_);
return v___x_880_;
}
}
v_resetjp_884_:
{
uint8_t v___x_887_; 
v___x_887_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_FunInd_Collector_visit_spec__1___redArg(v_toHashSet_883_, v_e_861_);
lean_dec_ref(v_toHashSet_883_);
if (v___x_887_ == 0)
{
lean_object* v___x_888_; lean_object* v_toHashSet_889_; lean_object* v___x_891_; uint8_t v_isShared_892_; uint8_t v_isSharedCheck_925_; 
v___x_888_ = lean_st_ref_take(v_a_862_);
v_toHashSet_889_ = lean_ctor_get(v___x_888_, 0);
v_isSharedCheck_925_ = !lean_is_exclusive(v___x_888_);
if (v_isSharedCheck_925_ == 0)
{
v___x_891_ = v___x_888_;
v_isShared_892_ = v_isSharedCheck_925_;
goto v_resetjp_890_;
}
else
{
lean_inc(v_toHashSet_889_);
lean_dec(v___x_888_);
v___x_891_ = lean_box(0);
v_isShared_892_ = v_isSharedCheck_925_;
goto v_resetjp_890_;
}
v_resetjp_890_:
{
lean_object* v___x_893_; lean_object* v___x_894_; lean_object* v___x_896_; 
v___x_893_ = lean_box(0);
lean_inc_ref(v_e_861_);
v___x_894_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Meta_FunInd_Collector_visit_spec__2___redArg(v_toHashSet_889_, v_e_861_, v___x_893_);
if (v_isShared_892_ == 0)
{
lean_ctor_set(v___x_891_, 0, v___x_894_);
v___x_896_ = v___x_891_;
goto v_reusejp_895_;
}
else
{
lean_object* v_reuseFailAlloc_924_; 
v_reuseFailAlloc_924_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_924_, 0, v___x_894_);
v___x_896_ = v_reuseFailAlloc_924_;
goto v_reusejp_895_;
}
v_reusejp_895_:
{
lean_object* v___x_897_; 
v___x_897_ = lean_st_ref_put(v_a_862_, v___x_896_);
switch(lean_obj_tag(v_e_861_))
{
case 4:
{
lean_object* v___x_899_; 
lean_dec_ref_known(v_e_861_, 2);
if (v_isShared_886_ == 0)
{
lean_ctor_set(v___x_885_, 0, v___x_893_);
v___x_899_ = v___x_885_;
goto v_reusejp_898_;
}
else
{
lean_object* v_reuseFailAlloc_900_; 
v_reuseFailAlloc_900_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_900_, 0, v___x_893_);
v___x_899_ = v_reuseFailAlloc_900_;
goto v_reusejp_898_;
}
v_reusejp_898_:
{
return v___x_899_;
}
}
case 7:
{
lean_object* v_binderType_901_; lean_object* v_body_902_; 
lean_del_object(v___x_885_);
v_binderType_901_ = lean_ctor_get(v_e_861_, 1);
lean_inc_ref(v_binderType_901_);
v_body_902_ = lean_ctor_get(v_e_861_, 2);
lean_inc_ref(v_body_902_);
lean_dec_ref_known(v_e_861_, 3);
v_d_871_ = v_binderType_901_;
v_b_872_ = v_body_902_;
v___y_873_ = v_a_862_;
v___y_874_ = v_a_863_;
v___y_875_ = v_a_864_;
v___y_876_ = v_a_865_;
v___y_877_ = v_a_866_;
v___y_878_ = v_a_867_;
v___y_879_ = v_a_868_;
goto v___jp_870_;
}
case 6:
{
lean_object* v_binderType_903_; lean_object* v_body_904_; 
lean_del_object(v___x_885_);
v_binderType_903_ = lean_ctor_get(v_e_861_, 1);
lean_inc_ref(v_binderType_903_);
v_body_904_ = lean_ctor_get(v_e_861_, 2);
lean_inc_ref(v_body_904_);
lean_dec_ref_known(v_e_861_, 3);
v_d_871_ = v_binderType_903_;
v_b_872_ = v_body_904_;
v___y_873_ = v_a_862_;
v___y_874_ = v_a_863_;
v___y_875_ = v_a_864_;
v___y_876_ = v_a_865_;
v___y_877_ = v_a_866_;
v___y_878_ = v_a_867_;
v___y_879_ = v_a_868_;
goto v___jp_870_;
}
case 10:
{
lean_object* v_expr_905_; 
lean_del_object(v___x_885_);
v_expr_905_ = lean_ctor_get(v_e_861_, 1);
lean_inc_ref(v_expr_905_);
lean_dec_ref_known(v_e_861_, 2);
v_e_861_ = v_expr_905_;
goto _start;
}
case 8:
{
lean_object* v_type_907_; lean_object* v_value_908_; lean_object* v_body_909_; lean_object* v___x_910_; 
lean_del_object(v___x_885_);
v_type_907_ = lean_ctor_get(v_e_861_, 1);
lean_inc_ref(v_type_907_);
v_value_908_ = lean_ctor_get(v_e_861_, 2);
lean_inc_ref(v_value_908_);
v_body_909_ = lean_ctor_get(v_e_861_, 3);
lean_inc_ref(v_body_909_);
lean_dec_ref_known(v_e_861_, 4);
v___x_910_ = l_Lean_Meta_FunInd_Collector_visit(v_type_907_, v_a_862_, v_a_863_, v_a_864_, v_a_865_, v_a_866_, v_a_867_, v_a_868_);
if (lean_obj_tag(v___x_910_) == 0)
{
lean_object* v___x_911_; 
lean_dec_ref_known(v___x_910_, 1);
v___x_911_ = l_Lean_Meta_FunInd_Collector_visit(v_value_908_, v_a_862_, v_a_863_, v_a_864_, v_a_865_, v_a_866_, v_a_867_, v_a_868_);
if (lean_obj_tag(v___x_911_) == 0)
{
lean_dec_ref_known(v___x_911_, 1);
v_e_861_ = v_body_909_;
goto _start;
}
else
{
lean_dec_ref(v_body_909_);
return v___x_911_;
}
}
else
{
lean_dec_ref(v_body_909_);
lean_dec_ref(v_value_908_);
return v___x_910_;
}
}
case 5:
{
lean_object* v_dummy_913_; lean_object* v_nargs_914_; lean_object* v___x_915_; lean_object* v___x_916_; lean_object* v___x_917_; lean_object* v___x_918_; 
lean_del_object(v___x_885_);
v_dummy_913_ = lean_obj_once(&l_Lean_Meta_FunInd_Collector_visit___closed__0, &l_Lean_Meta_FunInd_Collector_visit___closed__0_once, _init_l_Lean_Meta_FunInd_Collector_visit___closed__0);
v_nargs_914_ = l_Lean_Expr_getAppNumArgs(v_e_861_);
lean_inc(v_nargs_914_);
v___x_915_ = lean_mk_array(v_nargs_914_, v_dummy_913_);
v___x_916_ = lean_unsigned_to_nat(1u);
v___x_917_ = lean_nat_sub(v_nargs_914_, v___x_916_);
lean_dec(v_nargs_914_);
lean_inc_ref(v_e_861_);
v___x_918_ = l_Lean_Expr_withAppAux___at___00Lean_Meta_FunInd_Collector_visit_spec__3(v_e_861_, v_e_861_, v___x_915_, v___x_917_, v_a_862_, v_a_863_, v_a_864_, v_a_865_, v_a_866_, v_a_867_, v_a_868_);
return v___x_918_;
}
case 11:
{
lean_object* v_struct_919_; 
lean_del_object(v___x_885_);
v_struct_919_ = lean_ctor_get(v_e_861_, 2);
lean_inc_ref(v_struct_919_);
lean_dec_ref_known(v_e_861_, 3);
v_e_861_ = v_struct_919_;
goto _start;
}
default: 
{
lean_object* v___x_922_; 
lean_dec_ref(v_e_861_);
if (v_isShared_886_ == 0)
{
lean_ctor_set(v___x_885_, 0, v___x_893_);
v___x_922_ = v___x_885_;
goto v_reusejp_921_;
}
else
{
lean_object* v_reuseFailAlloc_923_; 
v_reuseFailAlloc_923_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_923_, 0, v___x_893_);
v___x_922_ = v_reuseFailAlloc_923_;
goto v_reusejp_921_;
}
v_reusejp_921_:
{
return v___x_922_;
}
}
}
}
}
}
else
{
lean_object* v___x_926_; lean_object* v___x_928_; 
lean_dec_ref(v_e_861_);
v___x_926_ = lean_box(0);
if (v_isShared_886_ == 0)
{
lean_ctor_set(v___x_885_, 0, v___x_926_);
v___x_928_ = v___x_885_;
goto v_reusejp_927_;
}
else
{
lean_object* v_reuseFailAlloc_929_; 
v_reuseFailAlloc_929_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_929_, 0, v___x_926_);
v___x_928_ = v_reuseFailAlloc_929_;
goto v_reusejp_927_;
}
v_reusejp_927_:
{
return v___x_928_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_FunInd_Collector_visit_spec__0(lean_object* v_as_931_, size_t v_i_932_, size_t v_stop_933_, lean_object* v_b_934_, lean_object* v___y_935_, lean_object* v___y_936_, lean_object* v___y_937_, lean_object* v___y_938_, lean_object* v___y_939_, lean_object* v___y_940_, lean_object* v___y_941_){
_start:
{
uint8_t v___x_943_; 
v___x_943_ = lean_usize_dec_eq(v_i_932_, v_stop_933_);
if (v___x_943_ == 0)
{
lean_object* v___x_944_; lean_object* v___x_945_; 
v___x_944_ = lean_array_uget_borrowed(v_as_931_, v_i_932_);
lean_inc(v___x_944_);
v___x_945_ = l_Lean_Meta_FunInd_Collector_visit(v___x_944_, v___y_935_, v___y_936_, v___y_937_, v___y_938_, v___y_939_, v___y_940_, v___y_941_);
if (lean_obj_tag(v___x_945_) == 0)
{
lean_object* v_a_946_; size_t v___x_947_; size_t v___x_948_; 
v_a_946_ = lean_ctor_get(v___x_945_, 0);
lean_inc(v_a_946_);
lean_dec_ref_known(v___x_945_, 1);
v___x_947_ = ((size_t)1ULL);
v___x_948_ = lean_usize_add(v_i_932_, v___x_947_);
v_i_932_ = v___x_948_;
v_b_934_ = v_a_946_;
goto _start;
}
else
{
return v___x_945_;
}
}
else
{
lean_object* v___x_950_; 
v___x_950_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_950_, 0, v_b_934_);
return v___x_950_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_FunInd_Collector_visit_spec__0___boxed(lean_object* v_as_951_, lean_object* v_i_952_, lean_object* v_stop_953_, lean_object* v_b_954_, lean_object* v___y_955_, lean_object* v___y_956_, lean_object* v___y_957_, lean_object* v___y_958_, lean_object* v___y_959_, lean_object* v___y_960_, lean_object* v___y_961_, lean_object* v___y_962_){
_start:
{
size_t v_i_boxed_963_; size_t v_stop_boxed_964_; lean_object* v_res_965_; 
v_i_boxed_963_ = lean_unbox_usize(v_i_952_);
lean_dec(v_i_952_);
v_stop_boxed_964_ = lean_unbox_usize(v_stop_953_);
lean_dec(v_stop_953_);
v_res_965_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_FunInd_Collector_visit_spec__0(v_as_951_, v_i_boxed_963_, v_stop_boxed_964_, v_b_954_, v___y_955_, v___y_956_, v___y_957_, v___y_958_, v___y_959_, v___y_960_, v___y_961_);
lean_dec(v___y_961_);
lean_dec_ref(v___y_960_);
lean_dec(v___y_959_);
lean_dec_ref(v___y_958_);
lean_dec(v___y_957_);
lean_dec_ref(v___y_956_);
lean_dec(v___y_955_);
lean_dec_ref(v_as_951_);
return v_res_965_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_FunInd_Collector_visit_spec__3___boxed(lean_object* v_e_966_, lean_object* v_x_967_, lean_object* v_x_968_, lean_object* v_x_969_, lean_object* v___y_970_, lean_object* v___y_971_, lean_object* v___y_972_, lean_object* v___y_973_, lean_object* v___y_974_, lean_object* v___y_975_, lean_object* v___y_976_, lean_object* v___y_977_){
_start:
{
lean_object* v_res_978_; 
v_res_978_ = l_Lean_Expr_withAppAux___at___00Lean_Meta_FunInd_Collector_visit_spec__3(v_e_966_, v_x_967_, v_x_968_, v_x_969_, v___y_970_, v___y_971_, v___y_972_, v___y_973_, v___y_974_, v___y_975_, v___y_976_);
lean_dec(v___y_976_);
lean_dec_ref(v___y_975_);
lean_dec(v___y_974_);
lean_dec_ref(v___y_973_);
lean_dec(v___y_972_);
lean_dec_ref(v___y_971_);
lean_dec(v___y_970_);
return v_res_978_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_FunInd_Collector_visit___boxed(lean_object* v_e_979_, lean_object* v_a_980_, lean_object* v_a_981_, lean_object* v_a_982_, lean_object* v_a_983_, lean_object* v_a_984_, lean_object* v_a_985_, lean_object* v_a_986_, lean_object* v_a_987_){
_start:
{
lean_object* v_res_988_; 
v_res_988_ = l_Lean_Meta_FunInd_Collector_visit(v_e_979_, v_a_980_, v_a_981_, v_a_982_, v_a_983_, v_a_984_, v_a_985_, v_a_986_);
lean_dec(v_a_986_);
lean_dec_ref(v_a_985_);
lean_dec(v_a_984_);
lean_dec_ref(v_a_983_);
lean_dec(v_a_982_);
lean_dec_ref(v_a_981_);
lean_dec(v_a_980_);
return v_res_988_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_FunInd_Collector_visit_spec__1(lean_object* v_00_u03b2_989_, lean_object* v_m_990_, lean_object* v_a_991_){
_start:
{
uint8_t v___x_992_; 
v___x_992_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_FunInd_Collector_visit_spec__1___redArg(v_m_990_, v_a_991_);
return v___x_992_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_FunInd_Collector_visit_spec__1___boxed(lean_object* v_00_u03b2_993_, lean_object* v_m_994_, lean_object* v_a_995_){
_start:
{
uint8_t v_res_996_; lean_object* v_r_997_; 
v_res_996_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_FunInd_Collector_visit_spec__1(v_00_u03b2_993_, v_m_994_, v_a_995_);
lean_dec_ref(v_a_995_);
lean_dec_ref(v_m_994_);
v_r_997_ = lean_box(v_res_996_);
return v_r_997_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Meta_FunInd_Collector_visit_spec__2(lean_object* v_00_u03b2_998_, lean_object* v_m_999_, lean_object* v_a_1000_, lean_object* v_b_1001_){
_start:
{
lean_object* v___x_1002_; 
v___x_1002_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Meta_FunInd_Collector_visit_spec__2___redArg(v_m_999_, v_a_1000_, v_b_1001_);
return v___x_1002_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_FunInd_Collector_visit_spec__1_spec__1(lean_object* v_00_u03b2_1003_, lean_object* v_a_1004_, lean_object* v_x_1005_){
_start:
{
uint8_t v___x_1006_; 
v___x_1006_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_FunInd_Collector_visit_spec__1_spec__1___redArg(v_a_1004_, v_x_1005_);
return v___x_1006_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_FunInd_Collector_visit_spec__1_spec__1___boxed(lean_object* v_00_u03b2_1007_, lean_object* v_a_1008_, lean_object* v_x_1009_){
_start:
{
uint8_t v_res_1010_; lean_object* v_r_1011_; 
v_res_1010_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_FunInd_Collector_visit_spec__1_spec__1(v_00_u03b2_1007_, v_a_1008_, v_x_1009_);
lean_dec(v_x_1009_);
lean_dec_ref(v_a_1008_);
v_r_1011_ = lean_box(v_res_1010_);
return v_r_1011_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Meta_FunInd_Collector_visit_spec__2_spec__3(lean_object* v_00_u03b2_1012_, lean_object* v_data_1013_){
_start:
{
lean_object* v___x_1014_; 
v___x_1014_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Meta_FunInd_Collector_visit_spec__2_spec__3___redArg(v_data_1013_);
return v___x_1014_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Meta_FunInd_Collector_visit_spec__2_spec__3_spec__4(lean_object* v_00_u03b2_1015_, lean_object* v_i_1016_, lean_object* v_source_1017_, lean_object* v_target_1018_){
_start:
{
lean_object* v___x_1019_; 
v___x_1019_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Meta_FunInd_Collector_visit_spec__2_spec__3_spec__4___redArg(v_i_1016_, v_source_1017_, v_target_1018_);
return v___x_1019_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Meta_FunInd_Collector_visit_spec__2_spec__3_spec__4_spec__6(lean_object* v_00_u03b2_1020_, lean_object* v_x_1021_, lean_object* v_x_1022_){
_start:
{
lean_object* v___x_1023_; 
v___x_1023_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Meta_FunInd_Collector_visit_spec__2_spec__3_spec__4_spec__6___redArg(v_x_1021_, v_x_1022_);
return v___x_1023_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_FunIndCollect_0__Lean_Meta_FunInd_Collector_main_go_spec__0___redArg(lean_object* v_e_1024_, lean_object* v___y_1025_){
_start:
{
uint8_t v___x_1027_; 
v___x_1027_ = l_Lean_Expr_hasMVar(v_e_1024_);
if (v___x_1027_ == 0)
{
lean_object* v___x_1028_; 
v___x_1028_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1028_, 0, v_e_1024_);
return v___x_1028_;
}
else
{
lean_object* v___x_1029_; lean_object* v_mctx_1030_; lean_object* v___x_1031_; lean_object* v_fst_1032_; lean_object* v_snd_1033_; lean_object* v___x_1034_; lean_object* v_cache_1035_; lean_object* v_zetaDeltaFVarIds_1036_; lean_object* v_postponed_1037_; lean_object* v_diag_1038_; lean_object* v___x_1040_; uint8_t v_isShared_1041_; uint8_t v_isSharedCheck_1047_; 
v___x_1029_ = lean_st_ref_get(v___y_1025_);
v_mctx_1030_ = lean_ctor_get(v___x_1029_, 0);
lean_inc_ref(v_mctx_1030_);
lean_dec(v___x_1029_);
v___x_1031_ = l_Lean_instantiateMVarsCore(v_mctx_1030_, v_e_1024_);
v_fst_1032_ = lean_ctor_get(v___x_1031_, 0);
lean_inc(v_fst_1032_);
v_snd_1033_ = lean_ctor_get(v___x_1031_, 1);
lean_inc(v_snd_1033_);
lean_dec_ref(v___x_1031_);
v___x_1034_ = lean_st_ref_take(v___y_1025_);
v_cache_1035_ = lean_ctor_get(v___x_1034_, 1);
v_zetaDeltaFVarIds_1036_ = lean_ctor_get(v___x_1034_, 2);
v_postponed_1037_ = lean_ctor_get(v___x_1034_, 3);
v_diag_1038_ = lean_ctor_get(v___x_1034_, 4);
v_isSharedCheck_1047_ = !lean_is_exclusive(v___x_1034_);
if (v_isSharedCheck_1047_ == 0)
{
lean_object* v_unused_1048_; 
v_unused_1048_ = lean_ctor_get(v___x_1034_, 0);
lean_dec(v_unused_1048_);
v___x_1040_ = v___x_1034_;
v_isShared_1041_ = v_isSharedCheck_1047_;
goto v_resetjp_1039_;
}
else
{
lean_inc(v_diag_1038_);
lean_inc(v_postponed_1037_);
lean_inc(v_zetaDeltaFVarIds_1036_);
lean_inc(v_cache_1035_);
lean_dec(v___x_1034_);
v___x_1040_ = lean_box(0);
v_isShared_1041_ = v_isSharedCheck_1047_;
goto v_resetjp_1039_;
}
v_resetjp_1039_:
{
lean_object* v___x_1043_; 
if (v_isShared_1041_ == 0)
{
lean_ctor_set(v___x_1040_, 0, v_snd_1033_);
v___x_1043_ = v___x_1040_;
goto v_reusejp_1042_;
}
else
{
lean_object* v_reuseFailAlloc_1046_; 
v_reuseFailAlloc_1046_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1046_, 0, v_snd_1033_);
lean_ctor_set(v_reuseFailAlloc_1046_, 1, v_cache_1035_);
lean_ctor_set(v_reuseFailAlloc_1046_, 2, v_zetaDeltaFVarIds_1036_);
lean_ctor_set(v_reuseFailAlloc_1046_, 3, v_postponed_1037_);
lean_ctor_set(v_reuseFailAlloc_1046_, 4, v_diag_1038_);
v___x_1043_ = v_reuseFailAlloc_1046_;
goto v_reusejp_1042_;
}
v_reusejp_1042_:
{
lean_object* v___x_1044_; lean_object* v___x_1045_; 
v___x_1044_ = lean_st_ref_put(v___y_1025_, v___x_1043_);
v___x_1045_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1045_, 0, v_fst_1032_);
return v___x_1045_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_FunIndCollect_0__Lean_Meta_FunInd_Collector_main_go_spec__0___redArg___boxed(lean_object* v_e_1049_, lean_object* v___y_1050_, lean_object* v___y_1051_){
_start:
{
lean_object* v_res_1052_; 
v_res_1052_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_FunIndCollect_0__Lean_Meta_FunInd_Collector_main_go_spec__0___redArg(v_e_1049_, v___y_1050_);
lean_dec(v___y_1050_);
return v_res_1052_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_FunIndCollect_0__Lean_Meta_FunInd_Collector_main_go_spec__0(lean_object* v_e_1053_, lean_object* v___y_1054_, lean_object* v___y_1055_, lean_object* v___y_1056_, lean_object* v___y_1057_, lean_object* v___y_1058_, lean_object* v___y_1059_, lean_object* v___y_1060_){
_start:
{
lean_object* v___x_1062_; 
v___x_1062_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_FunIndCollect_0__Lean_Meta_FunInd_Collector_main_go_spec__0___redArg(v_e_1053_, v___y_1058_);
return v___x_1062_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_FunIndCollect_0__Lean_Meta_FunInd_Collector_main_go_spec__0___boxed(lean_object* v_e_1063_, lean_object* v___y_1064_, lean_object* v___y_1065_, lean_object* v___y_1066_, lean_object* v___y_1067_, lean_object* v___y_1068_, lean_object* v___y_1069_, lean_object* v___y_1070_, lean_object* v___y_1071_){
_start:
{
lean_object* v_res_1072_; 
v_res_1072_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_FunIndCollect_0__Lean_Meta_FunInd_Collector_main_go_spec__0(v_e_1063_, v___y_1064_, v___y_1065_, v___y_1066_, v___y_1067_, v___y_1068_, v___y_1069_, v___y_1070_);
lean_dec(v___y_1070_);
lean_dec_ref(v___y_1069_);
lean_dec(v___y_1068_);
lean_dec_ref(v___y_1067_);
lean_dec(v___y_1066_);
lean_dec_ref(v___y_1065_);
lean_dec(v___y_1064_);
return v_res_1072_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_FunIndCollect_0__Lean_Meta_FunInd_Collector_main_go_spec__1_spec__2_spec__5(lean_object* v_as_1073_, size_t v_sz_1074_, size_t v_i_1075_, lean_object* v_b_1076_, lean_object* v___y_1077_, lean_object* v___y_1078_, lean_object* v___y_1079_, lean_object* v___y_1080_, lean_object* v___y_1081_, lean_object* v___y_1082_, lean_object* v___y_1083_){
_start:
{
uint8_t v___x_1085_; 
v___x_1085_ = lean_usize_dec_lt(v_i_1075_, v_sz_1074_);
if (v___x_1085_ == 0)
{
lean_object* v___x_1086_; 
v___x_1086_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1086_, 0, v_b_1076_);
return v___x_1086_;
}
else
{
lean_object* v_snd_1087_; lean_object* v___x_1089_; uint8_t v_isShared_1090_; uint8_t v_isSharedCheck_1145_; 
v_snd_1087_ = lean_ctor_get(v_b_1076_, 1);
v_isSharedCheck_1145_ = !lean_is_exclusive(v_b_1076_);
if (v_isSharedCheck_1145_ == 0)
{
lean_object* v_unused_1146_; 
v_unused_1146_ = lean_ctor_get(v_b_1076_, 0);
lean_dec(v_unused_1146_);
v___x_1089_ = v_b_1076_;
v_isShared_1090_ = v_isSharedCheck_1145_;
goto v_resetjp_1088_;
}
else
{
lean_inc(v_snd_1087_);
lean_dec(v_b_1076_);
v___x_1089_ = lean_box(0);
v_isShared_1090_ = v_isSharedCheck_1145_;
goto v_resetjp_1088_;
}
v_resetjp_1088_:
{
lean_object* v___x_1091_; lean_object* v_a_1093_; lean_object* v_a_1100_; 
v___x_1091_ = lean_box(0);
v_a_1100_ = lean_array_uget_borrowed(v_as_1073_, v_i_1075_);
if (lean_obj_tag(v_a_1100_) == 0)
{
v_a_1093_ = v_snd_1087_;
goto v___jp_1092_;
}
else
{
lean_object* v_val_1101_; lean_object* v___x_1102_; uint8_t v___x_1103_; 
lean_dec(v_snd_1087_);
v_val_1101_ = lean_ctor_get(v_a_1100_, 0);
v___x_1102_ = lean_box(0);
v___x_1103_ = l_Lean_LocalDecl_isAuxDecl(v_val_1101_);
if (v___x_1103_ == 0)
{
lean_object* v___x_1104_; 
v___x_1104_ = l_Lean_LocalDecl_value_x3f(v_val_1101_, v___x_1103_);
if (lean_obj_tag(v___x_1104_) == 1)
{
lean_object* v_val_1105_; lean_object* v___x_1106_; 
v_val_1105_ = lean_ctor_get(v___x_1104_, 0);
lean_inc(v_val_1105_);
lean_dec_ref_known(v___x_1104_, 1);
v___x_1106_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_FunIndCollect_0__Lean_Meta_FunInd_Collector_main_go_spec__0___redArg(v_val_1105_, v___y_1081_);
if (lean_obj_tag(v___x_1106_) == 0)
{
lean_object* v_a_1107_; lean_object* v___x_1108_; 
v_a_1107_ = lean_ctor_get(v___x_1106_, 0);
lean_inc(v_a_1107_);
lean_dec_ref_known(v___x_1106_, 1);
v___x_1108_ = l_Lean_Meta_FunInd_Collector_visit(v_a_1107_, v___y_1077_, v___y_1078_, v___y_1079_, v___y_1080_, v___y_1081_, v___y_1082_, v___y_1083_);
if (lean_obj_tag(v___x_1108_) == 0)
{
lean_dec_ref_known(v___x_1108_, 1);
v_a_1093_ = v___x_1102_;
goto v___jp_1092_;
}
else
{
lean_object* v_a_1109_; lean_object* v___x_1111_; uint8_t v_isShared_1112_; uint8_t v_isSharedCheck_1116_; 
lean_del_object(v___x_1089_);
v_a_1109_ = lean_ctor_get(v___x_1108_, 0);
v_isSharedCheck_1116_ = !lean_is_exclusive(v___x_1108_);
if (v_isSharedCheck_1116_ == 0)
{
v___x_1111_ = v___x_1108_;
v_isShared_1112_ = v_isSharedCheck_1116_;
goto v_resetjp_1110_;
}
else
{
lean_inc(v_a_1109_);
lean_dec(v___x_1108_);
v___x_1111_ = lean_box(0);
v_isShared_1112_ = v_isSharedCheck_1116_;
goto v_resetjp_1110_;
}
v_resetjp_1110_:
{
lean_object* v___x_1114_; 
if (v_isShared_1112_ == 0)
{
v___x_1114_ = v___x_1111_;
goto v_reusejp_1113_;
}
else
{
lean_object* v_reuseFailAlloc_1115_; 
v_reuseFailAlloc_1115_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1115_, 0, v_a_1109_);
v___x_1114_ = v_reuseFailAlloc_1115_;
goto v_reusejp_1113_;
}
v_reusejp_1113_:
{
return v___x_1114_;
}
}
}
}
else
{
lean_object* v_a_1117_; lean_object* v___x_1119_; uint8_t v_isShared_1120_; uint8_t v_isSharedCheck_1124_; 
lean_del_object(v___x_1089_);
v_a_1117_ = lean_ctor_get(v___x_1106_, 0);
v_isSharedCheck_1124_ = !lean_is_exclusive(v___x_1106_);
if (v_isSharedCheck_1124_ == 0)
{
v___x_1119_ = v___x_1106_;
v_isShared_1120_ = v_isSharedCheck_1124_;
goto v_resetjp_1118_;
}
else
{
lean_inc(v_a_1117_);
lean_dec(v___x_1106_);
v___x_1119_ = lean_box(0);
v_isShared_1120_ = v_isSharedCheck_1124_;
goto v_resetjp_1118_;
}
v_resetjp_1118_:
{
lean_object* v___x_1122_; 
if (v_isShared_1120_ == 0)
{
v___x_1122_ = v___x_1119_;
goto v_reusejp_1121_;
}
else
{
lean_object* v_reuseFailAlloc_1123_; 
v_reuseFailAlloc_1123_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1123_, 0, v_a_1117_);
v___x_1122_ = v_reuseFailAlloc_1123_;
goto v_reusejp_1121_;
}
v_reusejp_1121_:
{
return v___x_1122_;
}
}
}
}
else
{
lean_object* v___x_1125_; lean_object* v___x_1126_; 
lean_dec(v___x_1104_);
v___x_1125_ = l_Lean_LocalDecl_type(v_val_1101_);
v___x_1126_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_FunIndCollect_0__Lean_Meta_FunInd_Collector_main_go_spec__0___redArg(v___x_1125_, v___y_1081_);
if (lean_obj_tag(v___x_1126_) == 0)
{
lean_object* v_a_1127_; lean_object* v___x_1128_; 
v_a_1127_ = lean_ctor_get(v___x_1126_, 0);
lean_inc(v_a_1127_);
lean_dec_ref_known(v___x_1126_, 1);
v___x_1128_ = l_Lean_Meta_FunInd_Collector_visit(v_a_1127_, v___y_1077_, v___y_1078_, v___y_1079_, v___y_1080_, v___y_1081_, v___y_1082_, v___y_1083_);
if (lean_obj_tag(v___x_1128_) == 0)
{
lean_dec_ref_known(v___x_1128_, 1);
v_a_1093_ = v___x_1102_;
goto v___jp_1092_;
}
else
{
lean_object* v_a_1129_; lean_object* v___x_1131_; uint8_t v_isShared_1132_; uint8_t v_isSharedCheck_1136_; 
lean_del_object(v___x_1089_);
v_a_1129_ = lean_ctor_get(v___x_1128_, 0);
v_isSharedCheck_1136_ = !lean_is_exclusive(v___x_1128_);
if (v_isSharedCheck_1136_ == 0)
{
v___x_1131_ = v___x_1128_;
v_isShared_1132_ = v_isSharedCheck_1136_;
goto v_resetjp_1130_;
}
else
{
lean_inc(v_a_1129_);
lean_dec(v___x_1128_);
v___x_1131_ = lean_box(0);
v_isShared_1132_ = v_isSharedCheck_1136_;
goto v_resetjp_1130_;
}
v_resetjp_1130_:
{
lean_object* v___x_1134_; 
if (v_isShared_1132_ == 0)
{
v___x_1134_ = v___x_1131_;
goto v_reusejp_1133_;
}
else
{
lean_object* v_reuseFailAlloc_1135_; 
v_reuseFailAlloc_1135_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1135_, 0, v_a_1129_);
v___x_1134_ = v_reuseFailAlloc_1135_;
goto v_reusejp_1133_;
}
v_reusejp_1133_:
{
return v___x_1134_;
}
}
}
}
else
{
lean_object* v_a_1137_; lean_object* v___x_1139_; uint8_t v_isShared_1140_; uint8_t v_isSharedCheck_1144_; 
lean_del_object(v___x_1089_);
v_a_1137_ = lean_ctor_get(v___x_1126_, 0);
v_isSharedCheck_1144_ = !lean_is_exclusive(v___x_1126_);
if (v_isSharedCheck_1144_ == 0)
{
v___x_1139_ = v___x_1126_;
v_isShared_1140_ = v_isSharedCheck_1144_;
goto v_resetjp_1138_;
}
else
{
lean_inc(v_a_1137_);
lean_dec(v___x_1126_);
v___x_1139_ = lean_box(0);
v_isShared_1140_ = v_isSharedCheck_1144_;
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
lean_object* v_reuseFailAlloc_1143_; 
v_reuseFailAlloc_1143_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1143_, 0, v_a_1137_);
v___x_1142_ = v_reuseFailAlloc_1143_;
goto v_reusejp_1141_;
}
v_reusejp_1141_:
{
return v___x_1142_;
}
}
}
}
}
else
{
v_a_1093_ = v___x_1102_;
goto v___jp_1092_;
}
}
v___jp_1092_:
{
lean_object* v___x_1095_; 
if (v_isShared_1090_ == 0)
{
lean_ctor_set(v___x_1089_, 1, v_a_1093_);
lean_ctor_set(v___x_1089_, 0, v___x_1091_);
v___x_1095_ = v___x_1089_;
goto v_reusejp_1094_;
}
else
{
lean_object* v_reuseFailAlloc_1099_; 
v_reuseFailAlloc_1099_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1099_, 0, v___x_1091_);
lean_ctor_set(v_reuseFailAlloc_1099_, 1, v_a_1093_);
v___x_1095_ = v_reuseFailAlloc_1099_;
goto v_reusejp_1094_;
}
v_reusejp_1094_:
{
size_t v___x_1096_; size_t v___x_1097_; 
v___x_1096_ = ((size_t)1ULL);
v___x_1097_ = lean_usize_add(v_i_1075_, v___x_1096_);
v_i_1075_ = v___x_1097_;
v_b_1076_ = v___x_1095_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_FunIndCollect_0__Lean_Meta_FunInd_Collector_main_go_spec__1_spec__2_spec__5___boxed(lean_object* v_as_1147_, lean_object* v_sz_1148_, lean_object* v_i_1149_, lean_object* v_b_1150_, lean_object* v___y_1151_, lean_object* v___y_1152_, lean_object* v___y_1153_, lean_object* v___y_1154_, lean_object* v___y_1155_, lean_object* v___y_1156_, lean_object* v___y_1157_, lean_object* v___y_1158_){
_start:
{
size_t v_sz_boxed_1159_; size_t v_i_boxed_1160_; lean_object* v_res_1161_; 
v_sz_boxed_1159_ = lean_unbox_usize(v_sz_1148_);
lean_dec(v_sz_1148_);
v_i_boxed_1160_ = lean_unbox_usize(v_i_1149_);
lean_dec(v_i_1149_);
v_res_1161_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_FunIndCollect_0__Lean_Meta_FunInd_Collector_main_go_spec__1_spec__2_spec__5(v_as_1147_, v_sz_boxed_1159_, v_i_boxed_1160_, v_b_1150_, v___y_1151_, v___y_1152_, v___y_1153_, v___y_1154_, v___y_1155_, v___y_1156_, v___y_1157_);
lean_dec(v___y_1157_);
lean_dec_ref(v___y_1156_);
lean_dec(v___y_1155_);
lean_dec_ref(v___y_1154_);
lean_dec(v___y_1153_);
lean_dec_ref(v___y_1152_);
lean_dec(v___y_1151_);
lean_dec_ref(v_as_1147_);
return v_res_1161_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_FunIndCollect_0__Lean_Meta_FunInd_Collector_main_go_spec__1_spec__2(lean_object* v_as_1162_, size_t v_sz_1163_, size_t v_i_1164_, lean_object* v_b_1165_, lean_object* v___y_1166_, lean_object* v___y_1167_, lean_object* v___y_1168_, lean_object* v___y_1169_, lean_object* v___y_1170_, lean_object* v___y_1171_, lean_object* v___y_1172_){
_start:
{
uint8_t v___x_1174_; 
v___x_1174_ = lean_usize_dec_lt(v_i_1164_, v_sz_1163_);
if (v___x_1174_ == 0)
{
lean_object* v___x_1175_; 
v___x_1175_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1175_, 0, v_b_1165_);
return v___x_1175_;
}
else
{
lean_object* v_snd_1176_; lean_object* v___x_1178_; uint8_t v_isShared_1179_; uint8_t v_isSharedCheck_1234_; 
v_snd_1176_ = lean_ctor_get(v_b_1165_, 1);
v_isSharedCheck_1234_ = !lean_is_exclusive(v_b_1165_);
if (v_isSharedCheck_1234_ == 0)
{
lean_object* v_unused_1235_; 
v_unused_1235_ = lean_ctor_get(v_b_1165_, 0);
lean_dec(v_unused_1235_);
v___x_1178_ = v_b_1165_;
v_isShared_1179_ = v_isSharedCheck_1234_;
goto v_resetjp_1177_;
}
else
{
lean_inc(v_snd_1176_);
lean_dec(v_b_1165_);
v___x_1178_ = lean_box(0);
v_isShared_1179_ = v_isSharedCheck_1234_;
goto v_resetjp_1177_;
}
v_resetjp_1177_:
{
lean_object* v___x_1180_; lean_object* v_a_1182_; lean_object* v_a_1189_; 
v___x_1180_ = lean_box(0);
v_a_1189_ = lean_array_uget_borrowed(v_as_1162_, v_i_1164_);
if (lean_obj_tag(v_a_1189_) == 0)
{
v_a_1182_ = v_snd_1176_;
goto v___jp_1181_;
}
else
{
lean_object* v_val_1190_; lean_object* v___x_1191_; uint8_t v___x_1192_; 
lean_dec(v_snd_1176_);
v_val_1190_ = lean_ctor_get(v_a_1189_, 0);
v___x_1191_ = lean_box(0);
v___x_1192_ = l_Lean_LocalDecl_isAuxDecl(v_val_1190_);
if (v___x_1192_ == 0)
{
lean_object* v___x_1193_; 
v___x_1193_ = l_Lean_LocalDecl_value_x3f(v_val_1190_, v___x_1192_);
if (lean_obj_tag(v___x_1193_) == 1)
{
lean_object* v_val_1194_; lean_object* v___x_1195_; 
v_val_1194_ = lean_ctor_get(v___x_1193_, 0);
lean_inc(v_val_1194_);
lean_dec_ref_known(v___x_1193_, 1);
v___x_1195_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_FunIndCollect_0__Lean_Meta_FunInd_Collector_main_go_spec__0___redArg(v_val_1194_, v___y_1170_);
if (lean_obj_tag(v___x_1195_) == 0)
{
lean_object* v_a_1196_; lean_object* v___x_1197_; 
v_a_1196_ = lean_ctor_get(v___x_1195_, 0);
lean_inc(v_a_1196_);
lean_dec_ref_known(v___x_1195_, 1);
v___x_1197_ = l_Lean_Meta_FunInd_Collector_visit(v_a_1196_, v___y_1166_, v___y_1167_, v___y_1168_, v___y_1169_, v___y_1170_, v___y_1171_, v___y_1172_);
if (lean_obj_tag(v___x_1197_) == 0)
{
lean_dec_ref_known(v___x_1197_, 1);
v_a_1182_ = v___x_1191_;
goto v___jp_1181_;
}
else
{
lean_object* v_a_1198_; lean_object* v___x_1200_; uint8_t v_isShared_1201_; uint8_t v_isSharedCheck_1205_; 
lean_del_object(v___x_1178_);
v_a_1198_ = lean_ctor_get(v___x_1197_, 0);
v_isSharedCheck_1205_ = !lean_is_exclusive(v___x_1197_);
if (v_isSharedCheck_1205_ == 0)
{
v___x_1200_ = v___x_1197_;
v_isShared_1201_ = v_isSharedCheck_1205_;
goto v_resetjp_1199_;
}
else
{
lean_inc(v_a_1198_);
lean_dec(v___x_1197_);
v___x_1200_ = lean_box(0);
v_isShared_1201_ = v_isSharedCheck_1205_;
goto v_resetjp_1199_;
}
v_resetjp_1199_:
{
lean_object* v___x_1203_; 
if (v_isShared_1201_ == 0)
{
v___x_1203_ = v___x_1200_;
goto v_reusejp_1202_;
}
else
{
lean_object* v_reuseFailAlloc_1204_; 
v_reuseFailAlloc_1204_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1204_, 0, v_a_1198_);
v___x_1203_ = v_reuseFailAlloc_1204_;
goto v_reusejp_1202_;
}
v_reusejp_1202_:
{
return v___x_1203_;
}
}
}
}
else
{
lean_object* v_a_1206_; lean_object* v___x_1208_; uint8_t v_isShared_1209_; uint8_t v_isSharedCheck_1213_; 
lean_del_object(v___x_1178_);
v_a_1206_ = lean_ctor_get(v___x_1195_, 0);
v_isSharedCheck_1213_ = !lean_is_exclusive(v___x_1195_);
if (v_isSharedCheck_1213_ == 0)
{
v___x_1208_ = v___x_1195_;
v_isShared_1209_ = v_isSharedCheck_1213_;
goto v_resetjp_1207_;
}
else
{
lean_inc(v_a_1206_);
lean_dec(v___x_1195_);
v___x_1208_ = lean_box(0);
v_isShared_1209_ = v_isSharedCheck_1213_;
goto v_resetjp_1207_;
}
v_resetjp_1207_:
{
lean_object* v___x_1211_; 
if (v_isShared_1209_ == 0)
{
v___x_1211_ = v___x_1208_;
goto v_reusejp_1210_;
}
else
{
lean_object* v_reuseFailAlloc_1212_; 
v_reuseFailAlloc_1212_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1212_, 0, v_a_1206_);
v___x_1211_ = v_reuseFailAlloc_1212_;
goto v_reusejp_1210_;
}
v_reusejp_1210_:
{
return v___x_1211_;
}
}
}
}
else
{
lean_object* v___x_1214_; lean_object* v___x_1215_; 
lean_dec(v___x_1193_);
v___x_1214_ = l_Lean_LocalDecl_type(v_val_1190_);
v___x_1215_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_FunIndCollect_0__Lean_Meta_FunInd_Collector_main_go_spec__0___redArg(v___x_1214_, v___y_1170_);
if (lean_obj_tag(v___x_1215_) == 0)
{
lean_object* v_a_1216_; lean_object* v___x_1217_; 
v_a_1216_ = lean_ctor_get(v___x_1215_, 0);
lean_inc(v_a_1216_);
lean_dec_ref_known(v___x_1215_, 1);
v___x_1217_ = l_Lean_Meta_FunInd_Collector_visit(v_a_1216_, v___y_1166_, v___y_1167_, v___y_1168_, v___y_1169_, v___y_1170_, v___y_1171_, v___y_1172_);
if (lean_obj_tag(v___x_1217_) == 0)
{
lean_dec_ref_known(v___x_1217_, 1);
v_a_1182_ = v___x_1191_;
goto v___jp_1181_;
}
else
{
lean_object* v_a_1218_; lean_object* v___x_1220_; uint8_t v_isShared_1221_; uint8_t v_isSharedCheck_1225_; 
lean_del_object(v___x_1178_);
v_a_1218_ = lean_ctor_get(v___x_1217_, 0);
v_isSharedCheck_1225_ = !lean_is_exclusive(v___x_1217_);
if (v_isSharedCheck_1225_ == 0)
{
v___x_1220_ = v___x_1217_;
v_isShared_1221_ = v_isSharedCheck_1225_;
goto v_resetjp_1219_;
}
else
{
lean_inc(v_a_1218_);
lean_dec(v___x_1217_);
v___x_1220_ = lean_box(0);
v_isShared_1221_ = v_isSharedCheck_1225_;
goto v_resetjp_1219_;
}
v_resetjp_1219_:
{
lean_object* v___x_1223_; 
if (v_isShared_1221_ == 0)
{
v___x_1223_ = v___x_1220_;
goto v_reusejp_1222_;
}
else
{
lean_object* v_reuseFailAlloc_1224_; 
v_reuseFailAlloc_1224_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1224_, 0, v_a_1218_);
v___x_1223_ = v_reuseFailAlloc_1224_;
goto v_reusejp_1222_;
}
v_reusejp_1222_:
{
return v___x_1223_;
}
}
}
}
else
{
lean_object* v_a_1226_; lean_object* v___x_1228_; uint8_t v_isShared_1229_; uint8_t v_isSharedCheck_1233_; 
lean_del_object(v___x_1178_);
v_a_1226_ = lean_ctor_get(v___x_1215_, 0);
v_isSharedCheck_1233_ = !lean_is_exclusive(v___x_1215_);
if (v_isSharedCheck_1233_ == 0)
{
v___x_1228_ = v___x_1215_;
v_isShared_1229_ = v_isSharedCheck_1233_;
goto v_resetjp_1227_;
}
else
{
lean_inc(v_a_1226_);
lean_dec(v___x_1215_);
v___x_1228_ = lean_box(0);
v_isShared_1229_ = v_isSharedCheck_1233_;
goto v_resetjp_1227_;
}
v_resetjp_1227_:
{
lean_object* v___x_1231_; 
if (v_isShared_1229_ == 0)
{
v___x_1231_ = v___x_1228_;
goto v_reusejp_1230_;
}
else
{
lean_object* v_reuseFailAlloc_1232_; 
v_reuseFailAlloc_1232_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1232_, 0, v_a_1226_);
v___x_1231_ = v_reuseFailAlloc_1232_;
goto v_reusejp_1230_;
}
v_reusejp_1230_:
{
return v___x_1231_;
}
}
}
}
}
else
{
v_a_1182_ = v___x_1191_;
goto v___jp_1181_;
}
}
v___jp_1181_:
{
lean_object* v___x_1184_; 
if (v_isShared_1179_ == 0)
{
lean_ctor_set(v___x_1178_, 1, v_a_1182_);
lean_ctor_set(v___x_1178_, 0, v___x_1180_);
v___x_1184_ = v___x_1178_;
goto v_reusejp_1183_;
}
else
{
lean_object* v_reuseFailAlloc_1188_; 
v_reuseFailAlloc_1188_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1188_, 0, v___x_1180_);
lean_ctor_set(v_reuseFailAlloc_1188_, 1, v_a_1182_);
v___x_1184_ = v_reuseFailAlloc_1188_;
goto v_reusejp_1183_;
}
v_reusejp_1183_:
{
size_t v___x_1185_; size_t v___x_1186_; lean_object* v___x_1187_; 
v___x_1185_ = ((size_t)1ULL);
v___x_1186_ = lean_usize_add(v_i_1164_, v___x_1185_);
v___x_1187_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_FunIndCollect_0__Lean_Meta_FunInd_Collector_main_go_spec__1_spec__2_spec__5(v_as_1162_, v_sz_1163_, v___x_1186_, v___x_1184_, v___y_1166_, v___y_1167_, v___y_1168_, v___y_1169_, v___y_1170_, v___y_1171_, v___y_1172_);
return v___x_1187_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_FunIndCollect_0__Lean_Meta_FunInd_Collector_main_go_spec__1_spec__2___boxed(lean_object* v_as_1236_, lean_object* v_sz_1237_, lean_object* v_i_1238_, lean_object* v_b_1239_, lean_object* v___y_1240_, lean_object* v___y_1241_, lean_object* v___y_1242_, lean_object* v___y_1243_, lean_object* v___y_1244_, lean_object* v___y_1245_, lean_object* v___y_1246_, lean_object* v___y_1247_){
_start:
{
size_t v_sz_boxed_1248_; size_t v_i_boxed_1249_; lean_object* v_res_1250_; 
v_sz_boxed_1248_ = lean_unbox_usize(v_sz_1237_);
lean_dec(v_sz_1237_);
v_i_boxed_1249_ = lean_unbox_usize(v_i_1238_);
lean_dec(v_i_1238_);
v_res_1250_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_FunIndCollect_0__Lean_Meta_FunInd_Collector_main_go_spec__1_spec__2(v_as_1236_, v_sz_boxed_1248_, v_i_boxed_1249_, v_b_1239_, v___y_1240_, v___y_1241_, v___y_1242_, v___y_1243_, v___y_1244_, v___y_1245_, v___y_1246_);
lean_dec(v___y_1246_);
lean_dec_ref(v___y_1245_);
lean_dec(v___y_1244_);
lean_dec_ref(v___y_1243_);
lean_dec(v___y_1242_);
lean_dec_ref(v___y_1241_);
lean_dec(v___y_1240_);
lean_dec_ref(v_as_1236_);
return v_res_1250_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_FunIndCollect_0__Lean_Meta_FunInd_Collector_main_go_spec__1_spec__1_spec__3_spec__4(lean_object* v_as_1251_, size_t v_sz_1252_, size_t v_i_1253_, lean_object* v_b_1254_, lean_object* v___y_1255_, lean_object* v___y_1256_, lean_object* v___y_1257_, lean_object* v___y_1258_, lean_object* v___y_1259_, lean_object* v___y_1260_, lean_object* v___y_1261_){
_start:
{
uint8_t v___x_1263_; 
v___x_1263_ = lean_usize_dec_lt(v_i_1253_, v_sz_1252_);
if (v___x_1263_ == 0)
{
lean_object* v___x_1264_; 
v___x_1264_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1264_, 0, v_b_1254_);
return v___x_1264_;
}
else
{
lean_object* v_snd_1265_; lean_object* v___x_1267_; uint8_t v_isShared_1268_; uint8_t v_isSharedCheck_1323_; 
v_snd_1265_ = lean_ctor_get(v_b_1254_, 1);
v_isSharedCheck_1323_ = !lean_is_exclusive(v_b_1254_);
if (v_isSharedCheck_1323_ == 0)
{
lean_object* v_unused_1324_; 
v_unused_1324_ = lean_ctor_get(v_b_1254_, 0);
lean_dec(v_unused_1324_);
v___x_1267_ = v_b_1254_;
v_isShared_1268_ = v_isSharedCheck_1323_;
goto v_resetjp_1266_;
}
else
{
lean_inc(v_snd_1265_);
lean_dec(v_b_1254_);
v___x_1267_ = lean_box(0);
v_isShared_1268_ = v_isSharedCheck_1323_;
goto v_resetjp_1266_;
}
v_resetjp_1266_:
{
lean_object* v___x_1269_; lean_object* v_a_1271_; lean_object* v_a_1278_; 
v___x_1269_ = lean_box(0);
v_a_1278_ = lean_array_uget_borrowed(v_as_1251_, v_i_1253_);
if (lean_obj_tag(v_a_1278_) == 0)
{
v_a_1271_ = v_snd_1265_;
goto v___jp_1270_;
}
else
{
lean_object* v_val_1279_; lean_object* v___x_1280_; uint8_t v___x_1281_; 
lean_dec(v_snd_1265_);
v_val_1279_ = lean_ctor_get(v_a_1278_, 0);
v___x_1280_ = lean_box(0);
v___x_1281_ = l_Lean_LocalDecl_isAuxDecl(v_val_1279_);
if (v___x_1281_ == 0)
{
lean_object* v___x_1282_; 
v___x_1282_ = l_Lean_LocalDecl_value_x3f(v_val_1279_, v___x_1281_);
if (lean_obj_tag(v___x_1282_) == 1)
{
lean_object* v_val_1283_; lean_object* v___x_1284_; 
v_val_1283_ = lean_ctor_get(v___x_1282_, 0);
lean_inc(v_val_1283_);
lean_dec_ref_known(v___x_1282_, 1);
v___x_1284_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_FunIndCollect_0__Lean_Meta_FunInd_Collector_main_go_spec__0___redArg(v_val_1283_, v___y_1259_);
if (lean_obj_tag(v___x_1284_) == 0)
{
lean_object* v_a_1285_; lean_object* v___x_1286_; 
v_a_1285_ = lean_ctor_get(v___x_1284_, 0);
lean_inc(v_a_1285_);
lean_dec_ref_known(v___x_1284_, 1);
v___x_1286_ = l_Lean_Meta_FunInd_Collector_visit(v_a_1285_, v___y_1255_, v___y_1256_, v___y_1257_, v___y_1258_, v___y_1259_, v___y_1260_, v___y_1261_);
if (lean_obj_tag(v___x_1286_) == 0)
{
lean_dec_ref_known(v___x_1286_, 1);
v_a_1271_ = v___x_1280_;
goto v___jp_1270_;
}
else
{
lean_object* v_a_1287_; lean_object* v___x_1289_; uint8_t v_isShared_1290_; uint8_t v_isSharedCheck_1294_; 
lean_del_object(v___x_1267_);
v_a_1287_ = lean_ctor_get(v___x_1286_, 0);
v_isSharedCheck_1294_ = !lean_is_exclusive(v___x_1286_);
if (v_isSharedCheck_1294_ == 0)
{
v___x_1289_ = v___x_1286_;
v_isShared_1290_ = v_isSharedCheck_1294_;
goto v_resetjp_1288_;
}
else
{
lean_inc(v_a_1287_);
lean_dec(v___x_1286_);
v___x_1289_ = lean_box(0);
v_isShared_1290_ = v_isSharedCheck_1294_;
goto v_resetjp_1288_;
}
v_resetjp_1288_:
{
lean_object* v___x_1292_; 
if (v_isShared_1290_ == 0)
{
v___x_1292_ = v___x_1289_;
goto v_reusejp_1291_;
}
else
{
lean_object* v_reuseFailAlloc_1293_; 
v_reuseFailAlloc_1293_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1293_, 0, v_a_1287_);
v___x_1292_ = v_reuseFailAlloc_1293_;
goto v_reusejp_1291_;
}
v_reusejp_1291_:
{
return v___x_1292_;
}
}
}
}
else
{
lean_object* v_a_1295_; lean_object* v___x_1297_; uint8_t v_isShared_1298_; uint8_t v_isSharedCheck_1302_; 
lean_del_object(v___x_1267_);
v_a_1295_ = lean_ctor_get(v___x_1284_, 0);
v_isSharedCheck_1302_ = !lean_is_exclusive(v___x_1284_);
if (v_isSharedCheck_1302_ == 0)
{
v___x_1297_ = v___x_1284_;
v_isShared_1298_ = v_isSharedCheck_1302_;
goto v_resetjp_1296_;
}
else
{
lean_inc(v_a_1295_);
lean_dec(v___x_1284_);
v___x_1297_ = lean_box(0);
v_isShared_1298_ = v_isSharedCheck_1302_;
goto v_resetjp_1296_;
}
v_resetjp_1296_:
{
lean_object* v___x_1300_; 
if (v_isShared_1298_ == 0)
{
v___x_1300_ = v___x_1297_;
goto v_reusejp_1299_;
}
else
{
lean_object* v_reuseFailAlloc_1301_; 
v_reuseFailAlloc_1301_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1301_, 0, v_a_1295_);
v___x_1300_ = v_reuseFailAlloc_1301_;
goto v_reusejp_1299_;
}
v_reusejp_1299_:
{
return v___x_1300_;
}
}
}
}
else
{
lean_object* v___x_1303_; lean_object* v___x_1304_; 
lean_dec(v___x_1282_);
v___x_1303_ = l_Lean_LocalDecl_type(v_val_1279_);
v___x_1304_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_FunIndCollect_0__Lean_Meta_FunInd_Collector_main_go_spec__0___redArg(v___x_1303_, v___y_1259_);
if (lean_obj_tag(v___x_1304_) == 0)
{
lean_object* v_a_1305_; lean_object* v___x_1306_; 
v_a_1305_ = lean_ctor_get(v___x_1304_, 0);
lean_inc(v_a_1305_);
lean_dec_ref_known(v___x_1304_, 1);
v___x_1306_ = l_Lean_Meta_FunInd_Collector_visit(v_a_1305_, v___y_1255_, v___y_1256_, v___y_1257_, v___y_1258_, v___y_1259_, v___y_1260_, v___y_1261_);
if (lean_obj_tag(v___x_1306_) == 0)
{
lean_dec_ref_known(v___x_1306_, 1);
v_a_1271_ = v___x_1280_;
goto v___jp_1270_;
}
else
{
lean_object* v_a_1307_; lean_object* v___x_1309_; uint8_t v_isShared_1310_; uint8_t v_isSharedCheck_1314_; 
lean_del_object(v___x_1267_);
v_a_1307_ = lean_ctor_get(v___x_1306_, 0);
v_isSharedCheck_1314_ = !lean_is_exclusive(v___x_1306_);
if (v_isSharedCheck_1314_ == 0)
{
v___x_1309_ = v___x_1306_;
v_isShared_1310_ = v_isSharedCheck_1314_;
goto v_resetjp_1308_;
}
else
{
lean_inc(v_a_1307_);
lean_dec(v___x_1306_);
v___x_1309_ = lean_box(0);
v_isShared_1310_ = v_isSharedCheck_1314_;
goto v_resetjp_1308_;
}
v_resetjp_1308_:
{
lean_object* v___x_1312_; 
if (v_isShared_1310_ == 0)
{
v___x_1312_ = v___x_1309_;
goto v_reusejp_1311_;
}
else
{
lean_object* v_reuseFailAlloc_1313_; 
v_reuseFailAlloc_1313_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1313_, 0, v_a_1307_);
v___x_1312_ = v_reuseFailAlloc_1313_;
goto v_reusejp_1311_;
}
v_reusejp_1311_:
{
return v___x_1312_;
}
}
}
}
else
{
lean_object* v_a_1315_; lean_object* v___x_1317_; uint8_t v_isShared_1318_; uint8_t v_isSharedCheck_1322_; 
lean_del_object(v___x_1267_);
v_a_1315_ = lean_ctor_get(v___x_1304_, 0);
v_isSharedCheck_1322_ = !lean_is_exclusive(v___x_1304_);
if (v_isSharedCheck_1322_ == 0)
{
v___x_1317_ = v___x_1304_;
v_isShared_1318_ = v_isSharedCheck_1322_;
goto v_resetjp_1316_;
}
else
{
lean_inc(v_a_1315_);
lean_dec(v___x_1304_);
v___x_1317_ = lean_box(0);
v_isShared_1318_ = v_isSharedCheck_1322_;
goto v_resetjp_1316_;
}
v_resetjp_1316_:
{
lean_object* v___x_1320_; 
if (v_isShared_1318_ == 0)
{
v___x_1320_ = v___x_1317_;
goto v_reusejp_1319_;
}
else
{
lean_object* v_reuseFailAlloc_1321_; 
v_reuseFailAlloc_1321_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1321_, 0, v_a_1315_);
v___x_1320_ = v_reuseFailAlloc_1321_;
goto v_reusejp_1319_;
}
v_reusejp_1319_:
{
return v___x_1320_;
}
}
}
}
}
else
{
v_a_1271_ = v___x_1280_;
goto v___jp_1270_;
}
}
v___jp_1270_:
{
lean_object* v___x_1273_; 
if (v_isShared_1268_ == 0)
{
lean_ctor_set(v___x_1267_, 1, v_a_1271_);
lean_ctor_set(v___x_1267_, 0, v___x_1269_);
v___x_1273_ = v___x_1267_;
goto v_reusejp_1272_;
}
else
{
lean_object* v_reuseFailAlloc_1277_; 
v_reuseFailAlloc_1277_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1277_, 0, v___x_1269_);
lean_ctor_set(v_reuseFailAlloc_1277_, 1, v_a_1271_);
v___x_1273_ = v_reuseFailAlloc_1277_;
goto v_reusejp_1272_;
}
v_reusejp_1272_:
{
size_t v___x_1274_; size_t v___x_1275_; 
v___x_1274_ = ((size_t)1ULL);
v___x_1275_ = lean_usize_add(v_i_1253_, v___x_1274_);
v_i_1253_ = v___x_1275_;
v_b_1254_ = v___x_1273_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_FunIndCollect_0__Lean_Meta_FunInd_Collector_main_go_spec__1_spec__1_spec__3_spec__4___boxed(lean_object* v_as_1325_, lean_object* v_sz_1326_, lean_object* v_i_1327_, lean_object* v_b_1328_, lean_object* v___y_1329_, lean_object* v___y_1330_, lean_object* v___y_1331_, lean_object* v___y_1332_, lean_object* v___y_1333_, lean_object* v___y_1334_, lean_object* v___y_1335_, lean_object* v___y_1336_){
_start:
{
size_t v_sz_boxed_1337_; size_t v_i_boxed_1338_; lean_object* v_res_1339_; 
v_sz_boxed_1337_ = lean_unbox_usize(v_sz_1326_);
lean_dec(v_sz_1326_);
v_i_boxed_1338_ = lean_unbox_usize(v_i_1327_);
lean_dec(v_i_1327_);
v_res_1339_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_FunIndCollect_0__Lean_Meta_FunInd_Collector_main_go_spec__1_spec__1_spec__3_spec__4(v_as_1325_, v_sz_boxed_1337_, v_i_boxed_1338_, v_b_1328_, v___y_1329_, v___y_1330_, v___y_1331_, v___y_1332_, v___y_1333_, v___y_1334_, v___y_1335_);
lean_dec(v___y_1335_);
lean_dec_ref(v___y_1334_);
lean_dec(v___y_1333_);
lean_dec_ref(v___y_1332_);
lean_dec(v___y_1331_);
lean_dec_ref(v___y_1330_);
lean_dec(v___y_1329_);
lean_dec_ref(v_as_1325_);
return v_res_1339_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_FunIndCollect_0__Lean_Meta_FunInd_Collector_main_go_spec__1_spec__1_spec__3(lean_object* v_as_1340_, size_t v_sz_1341_, size_t v_i_1342_, lean_object* v_b_1343_, lean_object* v___y_1344_, lean_object* v___y_1345_, lean_object* v___y_1346_, lean_object* v___y_1347_, lean_object* v___y_1348_, lean_object* v___y_1349_, lean_object* v___y_1350_){
_start:
{
uint8_t v___x_1352_; 
v___x_1352_ = lean_usize_dec_lt(v_i_1342_, v_sz_1341_);
if (v___x_1352_ == 0)
{
lean_object* v___x_1353_; 
v___x_1353_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1353_, 0, v_b_1343_);
return v___x_1353_;
}
else
{
lean_object* v_snd_1354_; lean_object* v___x_1356_; uint8_t v_isShared_1357_; uint8_t v_isSharedCheck_1412_; 
v_snd_1354_ = lean_ctor_get(v_b_1343_, 1);
v_isSharedCheck_1412_ = !lean_is_exclusive(v_b_1343_);
if (v_isSharedCheck_1412_ == 0)
{
lean_object* v_unused_1413_; 
v_unused_1413_ = lean_ctor_get(v_b_1343_, 0);
lean_dec(v_unused_1413_);
v___x_1356_ = v_b_1343_;
v_isShared_1357_ = v_isSharedCheck_1412_;
goto v_resetjp_1355_;
}
else
{
lean_inc(v_snd_1354_);
lean_dec(v_b_1343_);
v___x_1356_ = lean_box(0);
v_isShared_1357_ = v_isSharedCheck_1412_;
goto v_resetjp_1355_;
}
v_resetjp_1355_:
{
lean_object* v___x_1358_; lean_object* v_a_1360_; lean_object* v_a_1367_; 
v___x_1358_ = lean_box(0);
v_a_1367_ = lean_array_uget_borrowed(v_as_1340_, v_i_1342_);
if (lean_obj_tag(v_a_1367_) == 0)
{
v_a_1360_ = v_snd_1354_;
goto v___jp_1359_;
}
else
{
lean_object* v_val_1368_; lean_object* v___x_1369_; uint8_t v___x_1370_; 
lean_dec(v_snd_1354_);
v_val_1368_ = lean_ctor_get(v_a_1367_, 0);
v___x_1369_ = lean_box(0);
v___x_1370_ = l_Lean_LocalDecl_isAuxDecl(v_val_1368_);
if (v___x_1370_ == 0)
{
lean_object* v___x_1371_; 
v___x_1371_ = l_Lean_LocalDecl_value_x3f(v_val_1368_, v___x_1370_);
if (lean_obj_tag(v___x_1371_) == 1)
{
lean_object* v_val_1372_; lean_object* v___x_1373_; 
v_val_1372_ = lean_ctor_get(v___x_1371_, 0);
lean_inc(v_val_1372_);
lean_dec_ref_known(v___x_1371_, 1);
v___x_1373_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_FunIndCollect_0__Lean_Meta_FunInd_Collector_main_go_spec__0___redArg(v_val_1372_, v___y_1348_);
if (lean_obj_tag(v___x_1373_) == 0)
{
lean_object* v_a_1374_; lean_object* v___x_1375_; 
v_a_1374_ = lean_ctor_get(v___x_1373_, 0);
lean_inc(v_a_1374_);
lean_dec_ref_known(v___x_1373_, 1);
v___x_1375_ = l_Lean_Meta_FunInd_Collector_visit(v_a_1374_, v___y_1344_, v___y_1345_, v___y_1346_, v___y_1347_, v___y_1348_, v___y_1349_, v___y_1350_);
if (lean_obj_tag(v___x_1375_) == 0)
{
lean_dec_ref_known(v___x_1375_, 1);
v_a_1360_ = v___x_1369_;
goto v___jp_1359_;
}
else
{
lean_object* v_a_1376_; lean_object* v___x_1378_; uint8_t v_isShared_1379_; uint8_t v_isSharedCheck_1383_; 
lean_del_object(v___x_1356_);
v_a_1376_ = lean_ctor_get(v___x_1375_, 0);
v_isSharedCheck_1383_ = !lean_is_exclusive(v___x_1375_);
if (v_isSharedCheck_1383_ == 0)
{
v___x_1378_ = v___x_1375_;
v_isShared_1379_ = v_isSharedCheck_1383_;
goto v_resetjp_1377_;
}
else
{
lean_inc(v_a_1376_);
lean_dec(v___x_1375_);
v___x_1378_ = lean_box(0);
v_isShared_1379_ = v_isSharedCheck_1383_;
goto v_resetjp_1377_;
}
v_resetjp_1377_:
{
lean_object* v___x_1381_; 
if (v_isShared_1379_ == 0)
{
v___x_1381_ = v___x_1378_;
goto v_reusejp_1380_;
}
else
{
lean_object* v_reuseFailAlloc_1382_; 
v_reuseFailAlloc_1382_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1382_, 0, v_a_1376_);
v___x_1381_ = v_reuseFailAlloc_1382_;
goto v_reusejp_1380_;
}
v_reusejp_1380_:
{
return v___x_1381_;
}
}
}
}
else
{
lean_object* v_a_1384_; lean_object* v___x_1386_; uint8_t v_isShared_1387_; uint8_t v_isSharedCheck_1391_; 
lean_del_object(v___x_1356_);
v_a_1384_ = lean_ctor_get(v___x_1373_, 0);
v_isSharedCheck_1391_ = !lean_is_exclusive(v___x_1373_);
if (v_isSharedCheck_1391_ == 0)
{
v___x_1386_ = v___x_1373_;
v_isShared_1387_ = v_isSharedCheck_1391_;
goto v_resetjp_1385_;
}
else
{
lean_inc(v_a_1384_);
lean_dec(v___x_1373_);
v___x_1386_ = lean_box(0);
v_isShared_1387_ = v_isSharedCheck_1391_;
goto v_resetjp_1385_;
}
v_resetjp_1385_:
{
lean_object* v___x_1389_; 
if (v_isShared_1387_ == 0)
{
v___x_1389_ = v___x_1386_;
goto v_reusejp_1388_;
}
else
{
lean_object* v_reuseFailAlloc_1390_; 
v_reuseFailAlloc_1390_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1390_, 0, v_a_1384_);
v___x_1389_ = v_reuseFailAlloc_1390_;
goto v_reusejp_1388_;
}
v_reusejp_1388_:
{
return v___x_1389_;
}
}
}
}
else
{
lean_object* v___x_1392_; lean_object* v___x_1393_; 
lean_dec(v___x_1371_);
v___x_1392_ = l_Lean_LocalDecl_type(v_val_1368_);
v___x_1393_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_FunIndCollect_0__Lean_Meta_FunInd_Collector_main_go_spec__0___redArg(v___x_1392_, v___y_1348_);
if (lean_obj_tag(v___x_1393_) == 0)
{
lean_object* v_a_1394_; lean_object* v___x_1395_; 
v_a_1394_ = lean_ctor_get(v___x_1393_, 0);
lean_inc(v_a_1394_);
lean_dec_ref_known(v___x_1393_, 1);
v___x_1395_ = l_Lean_Meta_FunInd_Collector_visit(v_a_1394_, v___y_1344_, v___y_1345_, v___y_1346_, v___y_1347_, v___y_1348_, v___y_1349_, v___y_1350_);
if (lean_obj_tag(v___x_1395_) == 0)
{
lean_dec_ref_known(v___x_1395_, 1);
v_a_1360_ = v___x_1369_;
goto v___jp_1359_;
}
else
{
lean_object* v_a_1396_; lean_object* v___x_1398_; uint8_t v_isShared_1399_; uint8_t v_isSharedCheck_1403_; 
lean_del_object(v___x_1356_);
v_a_1396_ = lean_ctor_get(v___x_1395_, 0);
v_isSharedCheck_1403_ = !lean_is_exclusive(v___x_1395_);
if (v_isSharedCheck_1403_ == 0)
{
v___x_1398_ = v___x_1395_;
v_isShared_1399_ = v_isSharedCheck_1403_;
goto v_resetjp_1397_;
}
else
{
lean_inc(v_a_1396_);
lean_dec(v___x_1395_);
v___x_1398_ = lean_box(0);
v_isShared_1399_ = v_isSharedCheck_1403_;
goto v_resetjp_1397_;
}
v_resetjp_1397_:
{
lean_object* v___x_1401_; 
if (v_isShared_1399_ == 0)
{
v___x_1401_ = v___x_1398_;
goto v_reusejp_1400_;
}
else
{
lean_object* v_reuseFailAlloc_1402_; 
v_reuseFailAlloc_1402_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1402_, 0, v_a_1396_);
v___x_1401_ = v_reuseFailAlloc_1402_;
goto v_reusejp_1400_;
}
v_reusejp_1400_:
{
return v___x_1401_;
}
}
}
}
else
{
lean_object* v_a_1404_; lean_object* v___x_1406_; uint8_t v_isShared_1407_; uint8_t v_isSharedCheck_1411_; 
lean_del_object(v___x_1356_);
v_a_1404_ = lean_ctor_get(v___x_1393_, 0);
v_isSharedCheck_1411_ = !lean_is_exclusive(v___x_1393_);
if (v_isSharedCheck_1411_ == 0)
{
v___x_1406_ = v___x_1393_;
v_isShared_1407_ = v_isSharedCheck_1411_;
goto v_resetjp_1405_;
}
else
{
lean_inc(v_a_1404_);
lean_dec(v___x_1393_);
v___x_1406_ = lean_box(0);
v_isShared_1407_ = v_isSharedCheck_1411_;
goto v_resetjp_1405_;
}
v_resetjp_1405_:
{
lean_object* v___x_1409_; 
if (v_isShared_1407_ == 0)
{
v___x_1409_ = v___x_1406_;
goto v_reusejp_1408_;
}
else
{
lean_object* v_reuseFailAlloc_1410_; 
v_reuseFailAlloc_1410_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1410_, 0, v_a_1404_);
v___x_1409_ = v_reuseFailAlloc_1410_;
goto v_reusejp_1408_;
}
v_reusejp_1408_:
{
return v___x_1409_;
}
}
}
}
}
else
{
v_a_1360_ = v___x_1369_;
goto v___jp_1359_;
}
}
v___jp_1359_:
{
lean_object* v___x_1362_; 
if (v_isShared_1357_ == 0)
{
lean_ctor_set(v___x_1356_, 1, v_a_1360_);
lean_ctor_set(v___x_1356_, 0, v___x_1358_);
v___x_1362_ = v___x_1356_;
goto v_reusejp_1361_;
}
else
{
lean_object* v_reuseFailAlloc_1366_; 
v_reuseFailAlloc_1366_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1366_, 0, v___x_1358_);
lean_ctor_set(v_reuseFailAlloc_1366_, 1, v_a_1360_);
v___x_1362_ = v_reuseFailAlloc_1366_;
goto v_reusejp_1361_;
}
v_reusejp_1361_:
{
size_t v___x_1363_; size_t v___x_1364_; lean_object* v___x_1365_; 
v___x_1363_ = ((size_t)1ULL);
v___x_1364_ = lean_usize_add(v_i_1342_, v___x_1363_);
v___x_1365_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_FunIndCollect_0__Lean_Meta_FunInd_Collector_main_go_spec__1_spec__1_spec__3_spec__4(v_as_1340_, v_sz_1341_, v___x_1364_, v___x_1362_, v___y_1344_, v___y_1345_, v___y_1346_, v___y_1347_, v___y_1348_, v___y_1349_, v___y_1350_);
return v___x_1365_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_FunIndCollect_0__Lean_Meta_FunInd_Collector_main_go_spec__1_spec__1_spec__3___boxed(lean_object* v_as_1414_, lean_object* v_sz_1415_, lean_object* v_i_1416_, lean_object* v_b_1417_, lean_object* v___y_1418_, lean_object* v___y_1419_, lean_object* v___y_1420_, lean_object* v___y_1421_, lean_object* v___y_1422_, lean_object* v___y_1423_, lean_object* v___y_1424_, lean_object* v___y_1425_){
_start:
{
size_t v_sz_boxed_1426_; size_t v_i_boxed_1427_; lean_object* v_res_1428_; 
v_sz_boxed_1426_ = lean_unbox_usize(v_sz_1415_);
lean_dec(v_sz_1415_);
v_i_boxed_1427_ = lean_unbox_usize(v_i_1416_);
lean_dec(v_i_1416_);
v_res_1428_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_FunIndCollect_0__Lean_Meta_FunInd_Collector_main_go_spec__1_spec__1_spec__3(v_as_1414_, v_sz_boxed_1426_, v_i_boxed_1427_, v_b_1417_, v___y_1418_, v___y_1419_, v___y_1420_, v___y_1421_, v___y_1422_, v___y_1423_, v___y_1424_);
lean_dec(v___y_1424_);
lean_dec_ref(v___y_1423_);
lean_dec(v___y_1422_);
lean_dec_ref(v___y_1421_);
lean_dec(v___y_1420_);
lean_dec_ref(v___y_1419_);
lean_dec(v___y_1418_);
lean_dec_ref(v_as_1414_);
return v_res_1428_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_FunIndCollect_0__Lean_Meta_FunInd_Collector_main_go_spec__1_spec__1(lean_object* v_init_1429_, lean_object* v_n_1430_, lean_object* v_b_1431_, lean_object* v___y_1432_, lean_object* v___y_1433_, lean_object* v___y_1434_, lean_object* v___y_1435_, lean_object* v___y_1436_, lean_object* v___y_1437_, lean_object* v___y_1438_){
_start:
{
if (lean_obj_tag(v_n_1430_) == 0)
{
lean_object* v_cs_1440_; lean_object* v___x_1441_; lean_object* v___x_1442_; size_t v_sz_1443_; size_t v___x_1444_; lean_object* v___x_1445_; 
v_cs_1440_ = lean_ctor_get(v_n_1430_, 0);
v___x_1441_ = lean_box(0);
v___x_1442_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1442_, 0, v___x_1441_);
lean_ctor_set(v___x_1442_, 1, v_b_1431_);
v_sz_1443_ = lean_array_size(v_cs_1440_);
v___x_1444_ = ((size_t)0ULL);
v___x_1445_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_FunIndCollect_0__Lean_Meta_FunInd_Collector_main_go_spec__1_spec__1_spec__2(v_init_1429_, v_cs_1440_, v_sz_1443_, v___x_1444_, v___x_1442_, v___y_1432_, v___y_1433_, v___y_1434_, v___y_1435_, v___y_1436_, v___y_1437_, v___y_1438_);
if (lean_obj_tag(v___x_1445_) == 0)
{
lean_object* v_a_1446_; lean_object* v___x_1448_; uint8_t v_isShared_1449_; uint8_t v_isSharedCheck_1460_; 
v_a_1446_ = lean_ctor_get(v___x_1445_, 0);
v_isSharedCheck_1460_ = !lean_is_exclusive(v___x_1445_);
if (v_isSharedCheck_1460_ == 0)
{
v___x_1448_ = v___x_1445_;
v_isShared_1449_ = v_isSharedCheck_1460_;
goto v_resetjp_1447_;
}
else
{
lean_inc(v_a_1446_);
lean_dec(v___x_1445_);
v___x_1448_ = lean_box(0);
v_isShared_1449_ = v_isSharedCheck_1460_;
goto v_resetjp_1447_;
}
v_resetjp_1447_:
{
lean_object* v_fst_1450_; 
v_fst_1450_ = lean_ctor_get(v_a_1446_, 0);
if (lean_obj_tag(v_fst_1450_) == 0)
{
lean_object* v_snd_1451_; lean_object* v___x_1452_; lean_object* v___x_1454_; 
v_snd_1451_ = lean_ctor_get(v_a_1446_, 1);
lean_inc(v_snd_1451_);
lean_dec(v_a_1446_);
v___x_1452_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1452_, 0, v_snd_1451_);
if (v_isShared_1449_ == 0)
{
lean_ctor_set(v___x_1448_, 0, v___x_1452_);
v___x_1454_ = v___x_1448_;
goto v_reusejp_1453_;
}
else
{
lean_object* v_reuseFailAlloc_1455_; 
v_reuseFailAlloc_1455_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1455_, 0, v___x_1452_);
v___x_1454_ = v_reuseFailAlloc_1455_;
goto v_reusejp_1453_;
}
v_reusejp_1453_:
{
return v___x_1454_;
}
}
else
{
lean_object* v_val_1456_; lean_object* v___x_1458_; 
lean_inc_ref(v_fst_1450_);
lean_dec(v_a_1446_);
v_val_1456_ = lean_ctor_get(v_fst_1450_, 0);
lean_inc(v_val_1456_);
lean_dec_ref_known(v_fst_1450_, 1);
if (v_isShared_1449_ == 0)
{
lean_ctor_set(v___x_1448_, 0, v_val_1456_);
v___x_1458_ = v___x_1448_;
goto v_reusejp_1457_;
}
else
{
lean_object* v_reuseFailAlloc_1459_; 
v_reuseFailAlloc_1459_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1459_, 0, v_val_1456_);
v___x_1458_ = v_reuseFailAlloc_1459_;
goto v_reusejp_1457_;
}
v_reusejp_1457_:
{
return v___x_1458_;
}
}
}
}
else
{
lean_object* v_a_1461_; lean_object* v___x_1463_; uint8_t v_isShared_1464_; uint8_t v_isSharedCheck_1468_; 
v_a_1461_ = lean_ctor_get(v___x_1445_, 0);
v_isSharedCheck_1468_ = !lean_is_exclusive(v___x_1445_);
if (v_isSharedCheck_1468_ == 0)
{
v___x_1463_ = v___x_1445_;
v_isShared_1464_ = v_isSharedCheck_1468_;
goto v_resetjp_1462_;
}
else
{
lean_inc(v_a_1461_);
lean_dec(v___x_1445_);
v___x_1463_ = lean_box(0);
v_isShared_1464_ = v_isSharedCheck_1468_;
goto v_resetjp_1462_;
}
v_resetjp_1462_:
{
lean_object* v___x_1466_; 
if (v_isShared_1464_ == 0)
{
v___x_1466_ = v___x_1463_;
goto v_reusejp_1465_;
}
else
{
lean_object* v_reuseFailAlloc_1467_; 
v_reuseFailAlloc_1467_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1467_, 0, v_a_1461_);
v___x_1466_ = v_reuseFailAlloc_1467_;
goto v_reusejp_1465_;
}
v_reusejp_1465_:
{
return v___x_1466_;
}
}
}
}
else
{
lean_object* v_vs_1469_; lean_object* v___x_1470_; lean_object* v___x_1471_; size_t v_sz_1472_; size_t v___x_1473_; lean_object* v___x_1474_; 
v_vs_1469_ = lean_ctor_get(v_n_1430_, 0);
v___x_1470_ = lean_box(0);
v___x_1471_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1471_, 0, v___x_1470_);
lean_ctor_set(v___x_1471_, 1, v_b_1431_);
v_sz_1472_ = lean_array_size(v_vs_1469_);
v___x_1473_ = ((size_t)0ULL);
v___x_1474_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_FunIndCollect_0__Lean_Meta_FunInd_Collector_main_go_spec__1_spec__1_spec__3(v_vs_1469_, v_sz_1472_, v___x_1473_, v___x_1471_, v___y_1432_, v___y_1433_, v___y_1434_, v___y_1435_, v___y_1436_, v___y_1437_, v___y_1438_);
if (lean_obj_tag(v___x_1474_) == 0)
{
lean_object* v_a_1475_; lean_object* v___x_1477_; uint8_t v_isShared_1478_; uint8_t v_isSharedCheck_1489_; 
v_a_1475_ = lean_ctor_get(v___x_1474_, 0);
v_isSharedCheck_1489_ = !lean_is_exclusive(v___x_1474_);
if (v_isSharedCheck_1489_ == 0)
{
v___x_1477_ = v___x_1474_;
v_isShared_1478_ = v_isSharedCheck_1489_;
goto v_resetjp_1476_;
}
else
{
lean_inc(v_a_1475_);
lean_dec(v___x_1474_);
v___x_1477_ = lean_box(0);
v_isShared_1478_ = v_isSharedCheck_1489_;
goto v_resetjp_1476_;
}
v_resetjp_1476_:
{
lean_object* v_fst_1479_; 
v_fst_1479_ = lean_ctor_get(v_a_1475_, 0);
if (lean_obj_tag(v_fst_1479_) == 0)
{
lean_object* v_snd_1480_; lean_object* v___x_1481_; lean_object* v___x_1483_; 
v_snd_1480_ = lean_ctor_get(v_a_1475_, 1);
lean_inc(v_snd_1480_);
lean_dec(v_a_1475_);
v___x_1481_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1481_, 0, v_snd_1480_);
if (v_isShared_1478_ == 0)
{
lean_ctor_set(v___x_1477_, 0, v___x_1481_);
v___x_1483_ = v___x_1477_;
goto v_reusejp_1482_;
}
else
{
lean_object* v_reuseFailAlloc_1484_; 
v_reuseFailAlloc_1484_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1484_, 0, v___x_1481_);
v___x_1483_ = v_reuseFailAlloc_1484_;
goto v_reusejp_1482_;
}
v_reusejp_1482_:
{
return v___x_1483_;
}
}
else
{
lean_object* v_val_1485_; lean_object* v___x_1487_; 
lean_inc_ref(v_fst_1479_);
lean_dec(v_a_1475_);
v_val_1485_ = lean_ctor_get(v_fst_1479_, 0);
lean_inc(v_val_1485_);
lean_dec_ref_known(v_fst_1479_, 1);
if (v_isShared_1478_ == 0)
{
lean_ctor_set(v___x_1477_, 0, v_val_1485_);
v___x_1487_ = v___x_1477_;
goto v_reusejp_1486_;
}
else
{
lean_object* v_reuseFailAlloc_1488_; 
v_reuseFailAlloc_1488_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1488_, 0, v_val_1485_);
v___x_1487_ = v_reuseFailAlloc_1488_;
goto v_reusejp_1486_;
}
v_reusejp_1486_:
{
return v___x_1487_;
}
}
}
}
else
{
lean_object* v_a_1490_; lean_object* v___x_1492_; uint8_t v_isShared_1493_; uint8_t v_isSharedCheck_1497_; 
v_a_1490_ = lean_ctor_get(v___x_1474_, 0);
v_isSharedCheck_1497_ = !lean_is_exclusive(v___x_1474_);
if (v_isSharedCheck_1497_ == 0)
{
v___x_1492_ = v___x_1474_;
v_isShared_1493_ = v_isSharedCheck_1497_;
goto v_resetjp_1491_;
}
else
{
lean_inc(v_a_1490_);
lean_dec(v___x_1474_);
v___x_1492_ = lean_box(0);
v_isShared_1493_ = v_isSharedCheck_1497_;
goto v_resetjp_1491_;
}
v_resetjp_1491_:
{
lean_object* v___x_1495_; 
if (v_isShared_1493_ == 0)
{
v___x_1495_ = v___x_1492_;
goto v_reusejp_1494_;
}
else
{
lean_object* v_reuseFailAlloc_1496_; 
v_reuseFailAlloc_1496_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1496_, 0, v_a_1490_);
v___x_1495_ = v_reuseFailAlloc_1496_;
goto v_reusejp_1494_;
}
v_reusejp_1494_:
{
return v___x_1495_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_FunIndCollect_0__Lean_Meta_FunInd_Collector_main_go_spec__1_spec__1_spec__2(lean_object* v_init_1498_, lean_object* v_as_1499_, size_t v_sz_1500_, size_t v_i_1501_, lean_object* v_b_1502_, lean_object* v___y_1503_, lean_object* v___y_1504_, lean_object* v___y_1505_, lean_object* v___y_1506_, lean_object* v___y_1507_, lean_object* v___y_1508_, lean_object* v___y_1509_){
_start:
{
uint8_t v___x_1511_; 
v___x_1511_ = lean_usize_dec_lt(v_i_1501_, v_sz_1500_);
if (v___x_1511_ == 0)
{
lean_object* v___x_1512_; 
v___x_1512_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1512_, 0, v_b_1502_);
return v___x_1512_;
}
else
{
lean_object* v_snd_1513_; lean_object* v___x_1515_; uint8_t v_isShared_1516_; uint8_t v_isSharedCheck_1547_; 
v_snd_1513_ = lean_ctor_get(v_b_1502_, 1);
v_isSharedCheck_1547_ = !lean_is_exclusive(v_b_1502_);
if (v_isSharedCheck_1547_ == 0)
{
lean_object* v_unused_1548_; 
v_unused_1548_ = lean_ctor_get(v_b_1502_, 0);
lean_dec(v_unused_1548_);
v___x_1515_ = v_b_1502_;
v_isShared_1516_ = v_isSharedCheck_1547_;
goto v_resetjp_1514_;
}
else
{
lean_inc(v_snd_1513_);
lean_dec(v_b_1502_);
v___x_1515_ = lean_box(0);
v_isShared_1516_ = v_isSharedCheck_1547_;
goto v_resetjp_1514_;
}
v_resetjp_1514_:
{
lean_object* v___x_1517_; lean_object* v_a_1518_; lean_object* v___x_1519_; 
v___x_1517_ = lean_box(0);
v_a_1518_ = lean_array_uget_borrowed(v_as_1499_, v_i_1501_);
lean_inc(v_snd_1513_);
v___x_1519_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_FunIndCollect_0__Lean_Meta_FunInd_Collector_main_go_spec__1_spec__1(v_init_1498_, v_a_1518_, v_snd_1513_, v___y_1503_, v___y_1504_, v___y_1505_, v___y_1506_, v___y_1507_, v___y_1508_, v___y_1509_);
if (lean_obj_tag(v___x_1519_) == 0)
{
lean_object* v_a_1520_; lean_object* v___x_1522_; uint8_t v_isShared_1523_; uint8_t v_isSharedCheck_1538_; 
v_a_1520_ = lean_ctor_get(v___x_1519_, 0);
v_isSharedCheck_1538_ = !lean_is_exclusive(v___x_1519_);
if (v_isSharedCheck_1538_ == 0)
{
v___x_1522_ = v___x_1519_;
v_isShared_1523_ = v_isSharedCheck_1538_;
goto v_resetjp_1521_;
}
else
{
lean_inc(v_a_1520_);
lean_dec(v___x_1519_);
v___x_1522_ = lean_box(0);
v_isShared_1523_ = v_isSharedCheck_1538_;
goto v_resetjp_1521_;
}
v_resetjp_1521_:
{
if (lean_obj_tag(v_a_1520_) == 0)
{
lean_object* v___x_1524_; lean_object* v___x_1526_; 
v___x_1524_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1524_, 0, v_a_1520_);
if (v_isShared_1516_ == 0)
{
lean_ctor_set(v___x_1515_, 0, v___x_1524_);
v___x_1526_ = v___x_1515_;
goto v_reusejp_1525_;
}
else
{
lean_object* v_reuseFailAlloc_1530_; 
v_reuseFailAlloc_1530_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1530_, 0, v___x_1524_);
lean_ctor_set(v_reuseFailAlloc_1530_, 1, v_snd_1513_);
v___x_1526_ = v_reuseFailAlloc_1530_;
goto v_reusejp_1525_;
}
v_reusejp_1525_:
{
lean_object* v___x_1528_; 
if (v_isShared_1523_ == 0)
{
lean_ctor_set(v___x_1522_, 0, v___x_1526_);
v___x_1528_ = v___x_1522_;
goto v_reusejp_1527_;
}
else
{
lean_object* v_reuseFailAlloc_1529_; 
v_reuseFailAlloc_1529_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1529_, 0, v___x_1526_);
v___x_1528_ = v_reuseFailAlloc_1529_;
goto v_reusejp_1527_;
}
v_reusejp_1527_:
{
return v___x_1528_;
}
}
}
else
{
lean_object* v_a_1531_; lean_object* v___x_1533_; 
lean_del_object(v___x_1522_);
lean_dec(v_snd_1513_);
v_a_1531_ = lean_ctor_get(v_a_1520_, 0);
lean_inc(v_a_1531_);
lean_dec_ref_known(v_a_1520_, 1);
if (v_isShared_1516_ == 0)
{
lean_ctor_set(v___x_1515_, 1, v_a_1531_);
lean_ctor_set(v___x_1515_, 0, v___x_1517_);
v___x_1533_ = v___x_1515_;
goto v_reusejp_1532_;
}
else
{
lean_object* v_reuseFailAlloc_1537_; 
v_reuseFailAlloc_1537_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1537_, 0, v___x_1517_);
lean_ctor_set(v_reuseFailAlloc_1537_, 1, v_a_1531_);
v___x_1533_ = v_reuseFailAlloc_1537_;
goto v_reusejp_1532_;
}
v_reusejp_1532_:
{
size_t v___x_1534_; size_t v___x_1535_; 
v___x_1534_ = ((size_t)1ULL);
v___x_1535_ = lean_usize_add(v_i_1501_, v___x_1534_);
v_i_1501_ = v___x_1535_;
v_b_1502_ = v___x_1533_;
goto _start;
}
}
}
}
else
{
lean_object* v_a_1539_; lean_object* v___x_1541_; uint8_t v_isShared_1542_; uint8_t v_isSharedCheck_1546_; 
lean_del_object(v___x_1515_);
lean_dec(v_snd_1513_);
v_a_1539_ = lean_ctor_get(v___x_1519_, 0);
v_isSharedCheck_1546_ = !lean_is_exclusive(v___x_1519_);
if (v_isSharedCheck_1546_ == 0)
{
v___x_1541_ = v___x_1519_;
v_isShared_1542_ = v_isSharedCheck_1546_;
goto v_resetjp_1540_;
}
else
{
lean_inc(v_a_1539_);
lean_dec(v___x_1519_);
v___x_1541_ = lean_box(0);
v_isShared_1542_ = v_isSharedCheck_1546_;
goto v_resetjp_1540_;
}
v_resetjp_1540_:
{
lean_object* v___x_1544_; 
if (v_isShared_1542_ == 0)
{
v___x_1544_ = v___x_1541_;
goto v_reusejp_1543_;
}
else
{
lean_object* v_reuseFailAlloc_1545_; 
v_reuseFailAlloc_1545_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1545_, 0, v_a_1539_);
v___x_1544_ = v_reuseFailAlloc_1545_;
goto v_reusejp_1543_;
}
v_reusejp_1543_:
{
return v___x_1544_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_FunIndCollect_0__Lean_Meta_FunInd_Collector_main_go_spec__1_spec__1_spec__2___boxed(lean_object* v_init_1549_, lean_object* v_as_1550_, lean_object* v_sz_1551_, lean_object* v_i_1552_, lean_object* v_b_1553_, lean_object* v___y_1554_, lean_object* v___y_1555_, lean_object* v___y_1556_, lean_object* v___y_1557_, lean_object* v___y_1558_, lean_object* v___y_1559_, lean_object* v___y_1560_, lean_object* v___y_1561_){
_start:
{
size_t v_sz_boxed_1562_; size_t v_i_boxed_1563_; lean_object* v_res_1564_; 
v_sz_boxed_1562_ = lean_unbox_usize(v_sz_1551_);
lean_dec(v_sz_1551_);
v_i_boxed_1563_ = lean_unbox_usize(v_i_1552_);
lean_dec(v_i_1552_);
v_res_1564_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_FunIndCollect_0__Lean_Meta_FunInd_Collector_main_go_spec__1_spec__1_spec__2(v_init_1549_, v_as_1550_, v_sz_boxed_1562_, v_i_boxed_1563_, v_b_1553_, v___y_1554_, v___y_1555_, v___y_1556_, v___y_1557_, v___y_1558_, v___y_1559_, v___y_1560_);
lean_dec(v___y_1560_);
lean_dec_ref(v___y_1559_);
lean_dec(v___y_1558_);
lean_dec_ref(v___y_1557_);
lean_dec(v___y_1556_);
lean_dec_ref(v___y_1555_);
lean_dec(v___y_1554_);
lean_dec_ref(v_as_1550_);
return v_res_1564_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_FunIndCollect_0__Lean_Meta_FunInd_Collector_main_go_spec__1_spec__1___boxed(lean_object* v_init_1565_, lean_object* v_n_1566_, lean_object* v_b_1567_, lean_object* v___y_1568_, lean_object* v___y_1569_, lean_object* v___y_1570_, lean_object* v___y_1571_, lean_object* v___y_1572_, lean_object* v___y_1573_, lean_object* v___y_1574_, lean_object* v___y_1575_){
_start:
{
lean_object* v_res_1576_; 
v_res_1576_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_FunIndCollect_0__Lean_Meta_FunInd_Collector_main_go_spec__1_spec__1(v_init_1565_, v_n_1566_, v_b_1567_, v___y_1568_, v___y_1569_, v___y_1570_, v___y_1571_, v___y_1572_, v___y_1573_, v___y_1574_);
lean_dec(v___y_1574_);
lean_dec_ref(v___y_1573_);
lean_dec(v___y_1572_);
lean_dec_ref(v___y_1571_);
lean_dec(v___y_1570_);
lean_dec_ref(v___y_1569_);
lean_dec(v___y_1568_);
lean_dec_ref(v_n_1566_);
return v_res_1576_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_FunIndCollect_0__Lean_Meta_FunInd_Collector_main_go_spec__1(lean_object* v_t_1577_, lean_object* v_init_1578_, lean_object* v___y_1579_, lean_object* v___y_1580_, lean_object* v___y_1581_, lean_object* v___y_1582_, lean_object* v___y_1583_, lean_object* v___y_1584_, lean_object* v___y_1585_){
_start:
{
lean_object* v_root_1587_; lean_object* v_tail_1588_; lean_object* v___x_1589_; 
v_root_1587_ = lean_ctor_get(v_t_1577_, 0);
v_tail_1588_ = lean_ctor_get(v_t_1577_, 1);
v___x_1589_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_FunIndCollect_0__Lean_Meta_FunInd_Collector_main_go_spec__1_spec__1(v_init_1578_, v_root_1587_, v_init_1578_, v___y_1579_, v___y_1580_, v___y_1581_, v___y_1582_, v___y_1583_, v___y_1584_, v___y_1585_);
if (lean_obj_tag(v___x_1589_) == 0)
{
lean_object* v_a_1590_; lean_object* v___x_1592_; uint8_t v_isShared_1593_; uint8_t v_isSharedCheck_1626_; 
v_a_1590_ = lean_ctor_get(v___x_1589_, 0);
v_isSharedCheck_1626_ = !lean_is_exclusive(v___x_1589_);
if (v_isSharedCheck_1626_ == 0)
{
v___x_1592_ = v___x_1589_;
v_isShared_1593_ = v_isSharedCheck_1626_;
goto v_resetjp_1591_;
}
else
{
lean_inc(v_a_1590_);
lean_dec(v___x_1589_);
v___x_1592_ = lean_box(0);
v_isShared_1593_ = v_isSharedCheck_1626_;
goto v_resetjp_1591_;
}
v_resetjp_1591_:
{
if (lean_obj_tag(v_a_1590_) == 0)
{
lean_object* v_a_1594_; lean_object* v___x_1596_; 
v_a_1594_ = lean_ctor_get(v_a_1590_, 0);
lean_inc(v_a_1594_);
lean_dec_ref_known(v_a_1590_, 1);
if (v_isShared_1593_ == 0)
{
lean_ctor_set(v___x_1592_, 0, v_a_1594_);
v___x_1596_ = v___x_1592_;
goto v_reusejp_1595_;
}
else
{
lean_object* v_reuseFailAlloc_1597_; 
v_reuseFailAlloc_1597_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1597_, 0, v_a_1594_);
v___x_1596_ = v_reuseFailAlloc_1597_;
goto v_reusejp_1595_;
}
v_reusejp_1595_:
{
return v___x_1596_;
}
}
else
{
lean_object* v_a_1598_; lean_object* v___x_1599_; lean_object* v___x_1600_; size_t v_sz_1601_; size_t v___x_1602_; lean_object* v___x_1603_; 
lean_del_object(v___x_1592_);
v_a_1598_ = lean_ctor_get(v_a_1590_, 0);
lean_inc(v_a_1598_);
lean_dec_ref_known(v_a_1590_, 1);
v___x_1599_ = lean_box(0);
v___x_1600_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1600_, 0, v___x_1599_);
lean_ctor_set(v___x_1600_, 1, v_a_1598_);
v_sz_1601_ = lean_array_size(v_tail_1588_);
v___x_1602_ = ((size_t)0ULL);
v___x_1603_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_FunIndCollect_0__Lean_Meta_FunInd_Collector_main_go_spec__1_spec__2(v_tail_1588_, v_sz_1601_, v___x_1602_, v___x_1600_, v___y_1579_, v___y_1580_, v___y_1581_, v___y_1582_, v___y_1583_, v___y_1584_, v___y_1585_);
if (lean_obj_tag(v___x_1603_) == 0)
{
lean_object* v_a_1604_; lean_object* v___x_1606_; uint8_t v_isShared_1607_; uint8_t v_isSharedCheck_1617_; 
v_a_1604_ = lean_ctor_get(v___x_1603_, 0);
v_isSharedCheck_1617_ = !lean_is_exclusive(v___x_1603_);
if (v_isSharedCheck_1617_ == 0)
{
v___x_1606_ = v___x_1603_;
v_isShared_1607_ = v_isSharedCheck_1617_;
goto v_resetjp_1605_;
}
else
{
lean_inc(v_a_1604_);
lean_dec(v___x_1603_);
v___x_1606_ = lean_box(0);
v_isShared_1607_ = v_isSharedCheck_1617_;
goto v_resetjp_1605_;
}
v_resetjp_1605_:
{
lean_object* v_fst_1608_; 
v_fst_1608_ = lean_ctor_get(v_a_1604_, 0);
if (lean_obj_tag(v_fst_1608_) == 0)
{
lean_object* v_snd_1609_; lean_object* v___x_1611_; 
v_snd_1609_ = lean_ctor_get(v_a_1604_, 1);
lean_inc(v_snd_1609_);
lean_dec(v_a_1604_);
if (v_isShared_1607_ == 0)
{
lean_ctor_set(v___x_1606_, 0, v_snd_1609_);
v___x_1611_ = v___x_1606_;
goto v_reusejp_1610_;
}
else
{
lean_object* v_reuseFailAlloc_1612_; 
v_reuseFailAlloc_1612_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1612_, 0, v_snd_1609_);
v___x_1611_ = v_reuseFailAlloc_1612_;
goto v_reusejp_1610_;
}
v_reusejp_1610_:
{
return v___x_1611_;
}
}
else
{
lean_object* v_val_1613_; lean_object* v___x_1615_; 
lean_inc_ref(v_fst_1608_);
lean_dec(v_a_1604_);
v_val_1613_ = lean_ctor_get(v_fst_1608_, 0);
lean_inc(v_val_1613_);
lean_dec_ref_known(v_fst_1608_, 1);
if (v_isShared_1607_ == 0)
{
lean_ctor_set(v___x_1606_, 0, v_val_1613_);
v___x_1615_ = v___x_1606_;
goto v_reusejp_1614_;
}
else
{
lean_object* v_reuseFailAlloc_1616_; 
v_reuseFailAlloc_1616_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1616_, 0, v_val_1613_);
v___x_1615_ = v_reuseFailAlloc_1616_;
goto v_reusejp_1614_;
}
v_reusejp_1614_:
{
return v___x_1615_;
}
}
}
}
else
{
lean_object* v_a_1618_; lean_object* v___x_1620_; uint8_t v_isShared_1621_; uint8_t v_isSharedCheck_1625_; 
v_a_1618_ = lean_ctor_get(v___x_1603_, 0);
v_isSharedCheck_1625_ = !lean_is_exclusive(v___x_1603_);
if (v_isSharedCheck_1625_ == 0)
{
v___x_1620_ = v___x_1603_;
v_isShared_1621_ = v_isSharedCheck_1625_;
goto v_resetjp_1619_;
}
else
{
lean_inc(v_a_1618_);
lean_dec(v___x_1603_);
v___x_1620_ = lean_box(0);
v_isShared_1621_ = v_isSharedCheck_1625_;
goto v_resetjp_1619_;
}
v_resetjp_1619_:
{
lean_object* v___x_1623_; 
if (v_isShared_1621_ == 0)
{
v___x_1623_ = v___x_1620_;
goto v_reusejp_1622_;
}
else
{
lean_object* v_reuseFailAlloc_1624_; 
v_reuseFailAlloc_1624_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1624_, 0, v_a_1618_);
v___x_1623_ = v_reuseFailAlloc_1624_;
goto v_reusejp_1622_;
}
v_reusejp_1622_:
{
return v___x_1623_;
}
}
}
}
}
}
else
{
lean_object* v_a_1627_; lean_object* v___x_1629_; uint8_t v_isShared_1630_; uint8_t v_isSharedCheck_1634_; 
v_a_1627_ = lean_ctor_get(v___x_1589_, 0);
v_isSharedCheck_1634_ = !lean_is_exclusive(v___x_1589_);
if (v_isSharedCheck_1634_ == 0)
{
v___x_1629_ = v___x_1589_;
v_isShared_1630_ = v_isSharedCheck_1634_;
goto v_resetjp_1628_;
}
else
{
lean_inc(v_a_1627_);
lean_dec(v___x_1589_);
v___x_1629_ = lean_box(0);
v_isShared_1630_ = v_isSharedCheck_1634_;
goto v_resetjp_1628_;
}
v_resetjp_1628_:
{
lean_object* v___x_1632_; 
if (v_isShared_1630_ == 0)
{
v___x_1632_ = v___x_1629_;
goto v_reusejp_1631_;
}
else
{
lean_object* v_reuseFailAlloc_1633_; 
v_reuseFailAlloc_1633_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1633_, 0, v_a_1627_);
v___x_1632_ = v_reuseFailAlloc_1633_;
goto v_reusejp_1631_;
}
v_reusejp_1631_:
{
return v___x_1632_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_FunIndCollect_0__Lean_Meta_FunInd_Collector_main_go_spec__1___boxed(lean_object* v_t_1635_, lean_object* v_init_1636_, lean_object* v___y_1637_, lean_object* v___y_1638_, lean_object* v___y_1639_, lean_object* v___y_1640_, lean_object* v___y_1641_, lean_object* v___y_1642_, lean_object* v___y_1643_, lean_object* v___y_1644_){
_start:
{
lean_object* v_res_1645_; 
v_res_1645_ = l_Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_FunIndCollect_0__Lean_Meta_FunInd_Collector_main_go_spec__1(v_t_1635_, v_init_1636_, v___y_1637_, v___y_1638_, v___y_1639_, v___y_1640_, v___y_1641_, v___y_1642_, v___y_1643_);
lean_dec(v___y_1643_);
lean_dec_ref(v___y_1642_);
lean_dec(v___y_1641_);
lean_dec_ref(v___y_1640_);
lean_dec(v___y_1639_);
lean_dec_ref(v___y_1638_);
lean_dec(v___y_1637_);
lean_dec_ref(v_t_1635_);
return v_res_1645_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_FunIndCollect_0__Lean_Meta_FunInd_Collector_main_go(lean_object* v_mvarId_1646_, lean_object* v_a_1647_, lean_object* v_a_1648_, lean_object* v_a_1649_, lean_object* v_a_1650_, lean_object* v_a_1651_, lean_object* v_a_1652_, lean_object* v_a_1653_){
_start:
{
lean_object* v_lctx_1655_; lean_object* v_decls_1656_; lean_object* v___x_1657_; lean_object* v___x_1658_; 
v_lctx_1655_ = lean_ctor_get(v_a_1650_, 2);
v_decls_1656_ = lean_ctor_get(v_lctx_1655_, 1);
v___x_1657_ = lean_box(0);
v___x_1658_ = l_Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_FunIndCollect_0__Lean_Meta_FunInd_Collector_main_go_spec__1(v_decls_1656_, v___x_1657_, v_a_1647_, v_a_1648_, v_a_1649_, v_a_1650_, v_a_1651_, v_a_1652_, v_a_1653_);
if (lean_obj_tag(v___x_1658_) == 0)
{
lean_object* v___x_1659_; 
lean_dec_ref_known(v___x_1658_, 1);
v___x_1659_ = l_Lean_MVarId_getType(v_mvarId_1646_, v_a_1650_, v_a_1651_, v_a_1652_, v_a_1653_);
if (lean_obj_tag(v___x_1659_) == 0)
{
lean_object* v_a_1660_; lean_object* v___x_1661_; 
v_a_1660_ = lean_ctor_get(v___x_1659_, 0);
lean_inc(v_a_1660_);
lean_dec_ref_known(v___x_1659_, 1);
v___x_1661_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_FunIndCollect_0__Lean_Meta_FunInd_Collector_main_go_spec__0___redArg(v_a_1660_, v_a_1651_);
if (lean_obj_tag(v___x_1661_) == 0)
{
lean_object* v_a_1662_; lean_object* v___x_1663_; 
v_a_1662_ = lean_ctor_get(v___x_1661_, 0);
lean_inc(v_a_1662_);
lean_dec_ref_known(v___x_1661_, 1);
v___x_1663_ = l_Lean_Meta_FunInd_Collector_visit(v_a_1662_, v_a_1647_, v_a_1648_, v_a_1649_, v_a_1650_, v_a_1651_, v_a_1652_, v_a_1653_);
return v___x_1663_;
}
else
{
lean_object* v_a_1664_; lean_object* v___x_1666_; uint8_t v_isShared_1667_; uint8_t v_isSharedCheck_1671_; 
v_a_1664_ = lean_ctor_get(v___x_1661_, 0);
v_isSharedCheck_1671_ = !lean_is_exclusive(v___x_1661_);
if (v_isSharedCheck_1671_ == 0)
{
v___x_1666_ = v___x_1661_;
v_isShared_1667_ = v_isSharedCheck_1671_;
goto v_resetjp_1665_;
}
else
{
lean_inc(v_a_1664_);
lean_dec(v___x_1661_);
v___x_1666_ = lean_box(0);
v_isShared_1667_ = v_isSharedCheck_1671_;
goto v_resetjp_1665_;
}
v_resetjp_1665_:
{
lean_object* v___x_1669_; 
if (v_isShared_1667_ == 0)
{
v___x_1669_ = v___x_1666_;
goto v_reusejp_1668_;
}
else
{
lean_object* v_reuseFailAlloc_1670_; 
v_reuseFailAlloc_1670_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1670_, 0, v_a_1664_);
v___x_1669_ = v_reuseFailAlloc_1670_;
goto v_reusejp_1668_;
}
v_reusejp_1668_:
{
return v___x_1669_;
}
}
}
}
else
{
lean_object* v_a_1672_; lean_object* v___x_1674_; uint8_t v_isShared_1675_; uint8_t v_isSharedCheck_1679_; 
v_a_1672_ = lean_ctor_get(v___x_1659_, 0);
v_isSharedCheck_1679_ = !lean_is_exclusive(v___x_1659_);
if (v_isSharedCheck_1679_ == 0)
{
v___x_1674_ = v___x_1659_;
v_isShared_1675_ = v_isSharedCheck_1679_;
goto v_resetjp_1673_;
}
else
{
lean_inc(v_a_1672_);
lean_dec(v___x_1659_);
v___x_1674_ = lean_box(0);
v_isShared_1675_ = v_isSharedCheck_1679_;
goto v_resetjp_1673_;
}
v_resetjp_1673_:
{
lean_object* v___x_1677_; 
if (v_isShared_1675_ == 0)
{
v___x_1677_ = v___x_1674_;
goto v_reusejp_1676_;
}
else
{
lean_object* v_reuseFailAlloc_1678_; 
v_reuseFailAlloc_1678_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1678_, 0, v_a_1672_);
v___x_1677_ = v_reuseFailAlloc_1678_;
goto v_reusejp_1676_;
}
v_reusejp_1676_:
{
return v___x_1677_;
}
}
}
}
else
{
lean_dec(v_mvarId_1646_);
return v___x_1658_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_FunIndCollect_0__Lean_Meta_FunInd_Collector_main_go___boxed(lean_object* v_mvarId_1680_, lean_object* v_a_1681_, lean_object* v_a_1682_, lean_object* v_a_1683_, lean_object* v_a_1684_, lean_object* v_a_1685_, lean_object* v_a_1686_, lean_object* v_a_1687_, lean_object* v_a_1688_){
_start:
{
lean_object* v_res_1689_; 
v_res_1689_ = l___private_Lean_Meta_Tactic_FunIndCollect_0__Lean_Meta_FunInd_Collector_main_go(v_mvarId_1680_, v_a_1681_, v_a_1682_, v_a_1683_, v_a_1684_, v_a_1685_, v_a_1686_, v_a_1687_);
lean_dec(v_a_1687_);
lean_dec_ref(v_a_1686_);
lean_dec(v_a_1685_);
lean_dec_ref(v_a_1684_);
lean_dec(v_a_1683_);
lean_dec_ref(v_a_1682_);
lean_dec(v_a_1681_);
return v_res_1689_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_FunInd_Collector_main_spec__0___redArg(lean_object* v_mvarId_1690_, lean_object* v_x_1691_, lean_object* v___y_1692_, lean_object* v___y_1693_, lean_object* v___y_1694_, lean_object* v___y_1695_){
_start:
{
lean_object* v___x_1697_; 
v___x_1697_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_box(0), v_mvarId_1690_, v_x_1691_, v___y_1692_, v___y_1693_, v___y_1694_, v___y_1695_);
if (lean_obj_tag(v___x_1697_) == 0)
{
lean_object* v_a_1698_; lean_object* v___x_1700_; uint8_t v_isShared_1701_; uint8_t v_isSharedCheck_1705_; 
v_a_1698_ = lean_ctor_get(v___x_1697_, 0);
v_isSharedCheck_1705_ = !lean_is_exclusive(v___x_1697_);
if (v_isSharedCheck_1705_ == 0)
{
v___x_1700_ = v___x_1697_;
v_isShared_1701_ = v_isSharedCheck_1705_;
goto v_resetjp_1699_;
}
else
{
lean_inc(v_a_1698_);
lean_dec(v___x_1697_);
v___x_1700_ = lean_box(0);
v_isShared_1701_ = v_isSharedCheck_1705_;
goto v_resetjp_1699_;
}
v_resetjp_1699_:
{
lean_object* v___x_1703_; 
if (v_isShared_1701_ == 0)
{
v___x_1703_ = v___x_1700_;
goto v_reusejp_1702_;
}
else
{
lean_object* v_reuseFailAlloc_1704_; 
v_reuseFailAlloc_1704_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1704_, 0, v_a_1698_);
v___x_1703_ = v_reuseFailAlloc_1704_;
goto v_reusejp_1702_;
}
v_reusejp_1702_:
{
return v___x_1703_;
}
}
}
else
{
lean_object* v_a_1706_; lean_object* v___x_1708_; uint8_t v_isShared_1709_; uint8_t v_isSharedCheck_1713_; 
v_a_1706_ = lean_ctor_get(v___x_1697_, 0);
v_isSharedCheck_1713_ = !lean_is_exclusive(v___x_1697_);
if (v_isSharedCheck_1713_ == 0)
{
v___x_1708_ = v___x_1697_;
v_isShared_1709_ = v_isSharedCheck_1713_;
goto v_resetjp_1707_;
}
else
{
lean_inc(v_a_1706_);
lean_dec(v___x_1697_);
v___x_1708_ = lean_box(0);
v_isShared_1709_ = v_isSharedCheck_1713_;
goto v_resetjp_1707_;
}
v_resetjp_1707_:
{
lean_object* v___x_1711_; 
if (v_isShared_1709_ == 0)
{
v___x_1711_ = v___x_1708_;
goto v_reusejp_1710_;
}
else
{
lean_object* v_reuseFailAlloc_1712_; 
v_reuseFailAlloc_1712_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1712_, 0, v_a_1706_);
v___x_1711_ = v_reuseFailAlloc_1712_;
goto v_reusejp_1710_;
}
v_reusejp_1710_:
{
return v___x_1711_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_FunInd_Collector_main_spec__0___redArg___boxed(lean_object* v_mvarId_1714_, lean_object* v_x_1715_, lean_object* v___y_1716_, lean_object* v___y_1717_, lean_object* v___y_1718_, lean_object* v___y_1719_, lean_object* v___y_1720_){
_start:
{
lean_object* v_res_1721_; 
v_res_1721_ = l_Lean_MVarId_withContext___at___00Lean_Meta_FunInd_Collector_main_spec__0___redArg(v_mvarId_1714_, v_x_1715_, v___y_1716_, v___y_1717_, v___y_1718_, v___y_1719_);
lean_dec(v___y_1719_);
lean_dec_ref(v___y_1718_);
lean_dec(v___y_1717_);
lean_dec_ref(v___y_1716_);
return v_res_1721_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_FunInd_Collector_main_spec__0(lean_object* v_00_u03b1_1722_, lean_object* v_mvarId_1723_, lean_object* v_x_1724_, lean_object* v___y_1725_, lean_object* v___y_1726_, lean_object* v___y_1727_, lean_object* v___y_1728_){
_start:
{
lean_object* v___x_1730_; 
v___x_1730_ = l_Lean_MVarId_withContext___at___00Lean_Meta_FunInd_Collector_main_spec__0___redArg(v_mvarId_1723_, v_x_1724_, v___y_1725_, v___y_1726_, v___y_1727_, v___y_1728_);
return v___x_1730_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_FunInd_Collector_main_spec__0___boxed(lean_object* v_00_u03b1_1731_, lean_object* v_mvarId_1732_, lean_object* v_x_1733_, lean_object* v___y_1734_, lean_object* v___y_1735_, lean_object* v___y_1736_, lean_object* v___y_1737_, lean_object* v___y_1738_){
_start:
{
lean_object* v_res_1739_; 
v_res_1739_ = l_Lean_MVarId_withContext___at___00Lean_Meta_FunInd_Collector_main_spec__0(v_00_u03b1_1731_, v_mvarId_1732_, v_x_1733_, v___y_1734_, v___y_1735_, v___y_1736_, v___y_1737_);
lean_dec(v___y_1737_);
lean_dec_ref(v___y_1736_);
lean_dec(v___y_1735_);
lean_dec_ref(v___y_1734_);
return v_res_1739_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_FunInd_Collector_main___lam__0(lean_object* v___x_1740_, lean_object* v___x_1741_, lean_object* v_mvarId_1742_, lean_object* v_needle_1743_, lean_object* v___y_1744_, lean_object* v___y_1745_, lean_object* v___y_1746_, lean_object* v___y_1747_){
_start:
{
lean_object* v___x_1749_; lean_object* v___x_1750_; lean_object* v___x_1751_; 
v___x_1749_ = lean_st_mk_ref(v___x_1740_);
v___x_1750_ = lean_st_mk_ref(v___x_1741_);
v___x_1751_ = l___private_Lean_Meta_Tactic_FunIndCollect_0__Lean_Meta_FunInd_Collector_main_go(v_mvarId_1742_, v___x_1750_, v_needle_1743_, v___x_1749_, v___y_1744_, v___y_1745_, v___y_1746_, v___y_1747_);
if (lean_obj_tag(v___x_1751_) == 0)
{
lean_object* v___x_1753_; uint8_t v_isShared_1754_; uint8_t v_isSharedCheck_1761_; 
v_isSharedCheck_1761_ = !lean_is_exclusive(v___x_1751_);
if (v_isSharedCheck_1761_ == 0)
{
lean_object* v_unused_1762_; 
v_unused_1762_ = lean_ctor_get(v___x_1751_, 0);
lean_dec(v_unused_1762_);
v___x_1753_ = v___x_1751_;
v_isShared_1754_ = v_isSharedCheck_1761_;
goto v_resetjp_1752_;
}
else
{
lean_dec(v___x_1751_);
v___x_1753_ = lean_box(0);
v_isShared_1754_ = v_isSharedCheck_1761_;
goto v_resetjp_1752_;
}
v_resetjp_1752_:
{
lean_object* v___x_1755_; lean_object* v___x_1756_; lean_object* v_calls_1757_; lean_object* v___x_1759_; 
v___x_1755_ = lean_st_ref_get(v___x_1750_);
lean_dec(v___x_1750_);
lean_dec(v___x_1755_);
v___x_1756_ = lean_st_ref_get(v___x_1749_);
lean_dec(v___x_1749_);
v_calls_1757_ = lean_ctor_get(v___x_1756_, 0);
lean_inc_ref(v_calls_1757_);
lean_dec(v___x_1756_);
if (v_isShared_1754_ == 0)
{
lean_ctor_set(v___x_1753_, 0, v_calls_1757_);
v___x_1759_ = v___x_1753_;
goto v_reusejp_1758_;
}
else
{
lean_object* v_reuseFailAlloc_1760_; 
v_reuseFailAlloc_1760_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1760_, 0, v_calls_1757_);
v___x_1759_ = v_reuseFailAlloc_1760_;
goto v_reusejp_1758_;
}
v_reusejp_1758_:
{
return v___x_1759_;
}
}
}
else
{
lean_object* v_a_1763_; lean_object* v___x_1765_; uint8_t v_isShared_1766_; uint8_t v_isSharedCheck_1770_; 
lean_dec(v___x_1750_);
lean_dec(v___x_1749_);
v_a_1763_ = lean_ctor_get(v___x_1751_, 0);
v_isSharedCheck_1770_ = !lean_is_exclusive(v___x_1751_);
if (v_isSharedCheck_1770_ == 0)
{
v___x_1765_ = v___x_1751_;
v_isShared_1766_ = v_isSharedCheck_1770_;
goto v_resetjp_1764_;
}
else
{
lean_inc(v_a_1763_);
lean_dec(v___x_1751_);
v___x_1765_ = lean_box(0);
v_isShared_1766_ = v_isSharedCheck_1770_;
goto v_resetjp_1764_;
}
v_resetjp_1764_:
{
lean_object* v___x_1768_; 
if (v_isShared_1766_ == 0)
{
v___x_1768_ = v___x_1765_;
goto v_reusejp_1767_;
}
else
{
lean_object* v_reuseFailAlloc_1769_; 
v_reuseFailAlloc_1769_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1769_, 0, v_a_1763_);
v___x_1768_ = v_reuseFailAlloc_1769_;
goto v_reusejp_1767_;
}
v_reusejp_1767_:
{
return v___x_1768_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_FunInd_Collector_main___lam__0___boxed(lean_object* v___x_1771_, lean_object* v___x_1772_, lean_object* v_mvarId_1773_, lean_object* v_needle_1774_, lean_object* v___y_1775_, lean_object* v___y_1776_, lean_object* v___y_1777_, lean_object* v___y_1778_, lean_object* v___y_1779_){
_start:
{
lean_object* v_res_1780_; 
v_res_1780_ = l_Lean_Meta_FunInd_Collector_main___lam__0(v___x_1771_, v___x_1772_, v_mvarId_1773_, v_needle_1774_, v___y_1775_, v___y_1776_, v___y_1777_, v___y_1778_);
lean_dec(v___y_1778_);
lean_dec_ref(v___y_1777_);
lean_dec(v___y_1776_);
lean_dec_ref(v___y_1775_);
lean_dec_ref(v_needle_1774_);
return v_res_1780_;
}
}
static lean_object* _init_l_Lean_Meta_FunInd_Collector_main___closed__0(void){
_start:
{
lean_object* v___x_1781_; lean_object* v___x_1782_; 
v___x_1781_ = lean_unsigned_to_nat(64u);
v___x_1782_ = l_Lean_mkPtrSet___redArg(v___x_1781_);
return v___x_1782_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_FunInd_Collector_main(lean_object* v_needle_1783_, lean_object* v_mvarId_1784_, lean_object* v_a_1785_, lean_object* v_a_1786_, lean_object* v_a_1787_, lean_object* v_a_1788_){
_start:
{
lean_object* v___x_1790_; lean_object* v___x_1791_; lean_object* v___f_1792_; lean_object* v___x_1793_; 
v___x_1790_ = lean_obj_once(&l_Lean_Meta_FunInd_Collector_main___closed__0, &l_Lean_Meta_FunInd_Collector_main___closed__0_once, _init_l_Lean_Meta_FunInd_Collector_main___closed__0);
v___x_1791_ = lean_obj_once(&l_Lean_Meta_FunInd_instEmptyCollectionSeenCalls___closed__3, &l_Lean_Meta_FunInd_instEmptyCollectionSeenCalls___closed__3_once, _init_l_Lean_Meta_FunInd_instEmptyCollectionSeenCalls___closed__3);
lean_inc(v_mvarId_1784_);
v___f_1792_ = lean_alloc_closure((void*)(l_Lean_Meta_FunInd_Collector_main___lam__0___boxed), 9, 4);
lean_closure_set(v___f_1792_, 0, v___x_1791_);
lean_closure_set(v___f_1792_, 1, v___x_1790_);
lean_closure_set(v___f_1792_, 2, v_mvarId_1784_);
lean_closure_set(v___f_1792_, 3, v_needle_1783_);
v___x_1793_ = l_Lean_MVarId_withContext___at___00Lean_Meta_FunInd_Collector_main_spec__0___redArg(v_mvarId_1784_, v___f_1792_, v_a_1785_, v_a_1786_, v_a_1787_, v_a_1788_);
return v___x_1793_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_FunInd_Collector_main___boxed(lean_object* v_needle_1794_, lean_object* v_mvarId_1795_, lean_object* v_a_1796_, lean_object* v_a_1797_, lean_object* v_a_1798_, lean_object* v_a_1799_, lean_object* v_a_1800_){
_start:
{
lean_object* v_res_1801_; 
v_res_1801_ = l_Lean_Meta_FunInd_Collector_main(v_needle_1794_, v_mvarId_1795_, v_a_1796_, v_a_1797_, v_a_1798_, v_a_1799_);
lean_dec(v_a_1799_);
lean_dec_ref(v_a_1798_);
lean_dec(v_a_1797_);
lean_dec_ref(v_a_1796_);
return v_res_1801_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_FunIndCollect_0__Lean_Meta_FunInd_collect_unsafe__1(lean_object* v_needle_1802_, lean_object* v_mvarId_1803_, lean_object* v_a_1804_, lean_object* v_a_1805_, lean_object* v_a_1806_, lean_object* v_a_1807_){
_start:
{
lean_object* v___x_1809_; 
v___x_1809_ = l_Lean_Meta_FunInd_Collector_main(v_needle_1802_, v_mvarId_1803_, v_a_1804_, v_a_1805_, v_a_1806_, v_a_1807_);
return v___x_1809_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_FunIndCollect_0__Lean_Meta_FunInd_collect_unsafe__1___boxed(lean_object* v_needle_1810_, lean_object* v_mvarId_1811_, lean_object* v_a_1812_, lean_object* v_a_1813_, lean_object* v_a_1814_, lean_object* v_a_1815_, lean_object* v_a_1816_){
_start:
{
lean_object* v_res_1817_; 
v_res_1817_ = l___private_Lean_Meta_Tactic_FunIndCollect_0__Lean_Meta_FunInd_collect_unsafe__1(v_needle_1810_, v_mvarId_1811_, v_a_1812_, v_a_1813_, v_a_1814_, v_a_1815_);
lean_dec(v_a_1815_);
lean_dec_ref(v_a_1814_);
lean_dec(v_a_1813_);
lean_dec_ref(v_a_1812_);
return v_res_1817_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_FunInd_collect(lean_object* v_needle_1818_, lean_object* v_mvarId_1819_, lean_object* v_a_1820_, lean_object* v_a_1821_, lean_object* v_a_1822_, lean_object* v_a_1823_){
_start:
{
lean_object* v___x_1825_; 
v___x_1825_ = l_Lean_Meta_FunInd_Collector_main(v_needle_1818_, v_mvarId_1819_, v_a_1820_, v_a_1821_, v_a_1822_, v_a_1823_);
return v___x_1825_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_FunInd_collect___boxed(lean_object* v_needle_1826_, lean_object* v_mvarId_1827_, lean_object* v_a_1828_, lean_object* v_a_1829_, lean_object* v_a_1830_, lean_object* v_a_1831_, lean_object* v_a_1832_){
_start:
{
lean_object* v_res_1833_; 
v_res_1833_ = l_Lean_Meta_FunInd_collect(v_needle_1826_, v_mvarId_1827_, v_a_1828_, v_a_1829_, v_a_1830_, v_a_1831_);
lean_dec(v_a_1831_);
lean_dec_ref(v_a_1830_);
lean_dec(v_a_1829_);
lean_dec_ref(v_a_1828_);
return v_res_1833_;
}
}
lean_object* runtime_initialize_Lean_Meta_Tactic_Util(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_FunIndInfo(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Tactic_FunIndCollect(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Meta_Tactic_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_FunIndInfo(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Meta_FunInd_instEmptyCollectionSeenCalls = _init_l_Lean_Meta_FunInd_instEmptyCollectionSeenCalls();
lean_mark_persistent(l_Lean_Meta_FunInd_instEmptyCollectionSeenCalls);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Tactic_FunIndCollect(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Tactic_Util(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_FunIndInfo(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Tactic_FunIndCollect(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Tactic_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_FunIndInfo(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_FunIndCollect(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Tactic_FunIndCollect(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Tactic_FunIndCollect(builtin);
}
#ifdef __cplusplus
}
#endif
