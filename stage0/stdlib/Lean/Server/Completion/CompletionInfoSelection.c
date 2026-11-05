// Lean compiler output
// Module: Lean.Server.Completion.CompletionInfoSelection
// Imports: public import Lean.Server.Completion.SyntheticCompletion
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
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
uint8_t l_Lean_Syntax_eqWithInfo(lean_object*, lean_object*);
uint8_t lean_expr_eqv(lean_object*, lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_mk_array(lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint64_t lean_uint64_mix_hash(uint64_t, uint64_t);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_array_propagate_mark(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
uint64_t l_String_instHashableRaw_hash(lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Info_size_x3f(lean_object*);
lean_object* lean_array_fswap(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_nat_shiftr(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_FileMap_toPosition(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Info_tailPos_x3f(lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Elab_Info_occursInOrOnBoundary(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getRangeWithTrailing_x3f(lean_object*, uint8_t);
uint8_t l_Lean_Syntax_Range_contains(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isMissing(lean_object*);
lean_object* l_Lean_Elab_Info_pos_x3f(lean_object*);
lean_object* l_Lean_Elab_InfoTree_foldInfo___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Server_Completion_findSyntheticCompletions(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_zipIdx___redArg(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_instBEqOption_beq___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_filterDuplicateCompletionInfos_eq_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instBEqOption_beq___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_filterDuplicateCompletionInfos_eq_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_filterDuplicateCompletionInfos_eq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_filterDuplicateCompletionInfos_eq___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_filterDuplicateCompletionInfos_spec__0(lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_filterDuplicateCompletionInfos_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_filterDuplicateCompletionInfos_spec__1(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_filterDuplicateCompletionInfos_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_filterDuplicateCompletionInfos___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_filterDuplicateCompletionInfos___closed__0 = (const lean_object*)&l___private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_filterDuplicateCompletionInfos___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_filterDuplicateCompletionInfos(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_filterDuplicateCompletionInfos___boxed(lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_findCompletionInfosAt_containsHoverPos(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_findCompletionInfosAt_containsHoverPos___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_findCompletionInfosAt_go_spec__0(lean_object*);
static const lean_string_object l___private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_findCompletionInfosAt_go___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "Init.Data.Option.BasicAux"};
static const lean_object* l___private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_findCompletionInfosAt_go___closed__0 = (const lean_object*)&l___private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_findCompletionInfosAt_go___closed__0_value;
static const lean_string_object l___private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_findCompletionInfosAt_go___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "Option.get!"};
static const lean_object* l___private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_findCompletionInfosAt_go___closed__1 = (const lean_object*)&l___private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_findCompletionInfosAt_go___closed__1_value;
static const lean_string_object l___private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_findCompletionInfosAt_go___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "value is none"};
static const lean_object* l___private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_findCompletionInfosAt_go___closed__2 = (const lean_object*)&l___private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_findCompletionInfosAt_go___closed__2_value;
static lean_once_cell_t l___private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_findCompletionInfosAt_go___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_findCompletionInfosAt_go___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_findCompletionInfosAt_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_findCompletionInfosAt_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_Completion_findCompletionInfosAt(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__3___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__4(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__1_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__1_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__1___redArg___lam__0(uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__1___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2_spec__3_spec__5_spec__9_spec__11___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2_spec__3_spec__5_spec__9___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2_spec__3_spec__5___redArg(lean_object*);
LEAN_EXPORT uint8_t l_instBEqOption_beq___at___00Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2_spec__3_spec__4_spec__7(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instBEqOption_beq___at___00Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2_spec__3_spec__4_spec__7___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2_spec__3_spec__4___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2_spec__3_spec__4___redArg___boxed(lean_object*, lean_object*);
static const lean_array_object l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2_spec__3_spec__6___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2_spec__3_spec__6___redArg___lam__0___closed__0 = (const lean_object*)&l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2_spec__3_spec__6___redArg___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2_spec__3_spec__6___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2_spec__3_spec__6___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2_spec__3___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2_spec__4___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2___redArg___closed__0;
static lean_once_cell_t l_Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2___redArg___closed__1;
LEAN_EXPORT lean_object* l_Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2___redArg___boxed(lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions___closed__0 = (const lean_object*)&l___private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__1_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2_spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2_spec__4(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2_spec__3_spec__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2_spec__3_spec__4___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2_spec__3_spec__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2_spec__3_spec__6(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2_spec__3_spec__5_spec__9(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2_spec__3_spec__5_spec__9_spec__11(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_Completion_findPrioritizedCompletionPartitionsAt(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_instBEqOption_beq___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_filterDuplicateCompletionInfos_eq_spec__0(lean_object* v_x_1_, lean_object* v_x_2_){
_start:
{
if (lean_obj_tag(v_x_1_) == 0)
{
if (lean_obj_tag(v_x_2_) == 0)
{
uint8_t v___x_3_; 
v___x_3_ = 1;
return v___x_3_;
}
else
{
uint8_t v___x_4_; 
v___x_4_ = 0;
return v___x_4_;
}
}
else
{
if (lean_obj_tag(v_x_2_) == 0)
{
uint8_t v___x_5_; 
v___x_5_ = 0;
return v___x_5_;
}
else
{
lean_object* v_val_6_; lean_object* v_val_7_; uint8_t v___x_8_; 
v_val_6_ = lean_ctor_get(v_x_1_, 0);
v_val_7_ = lean_ctor_get(v_x_2_, 0);
v___x_8_ = lean_name_eq(v_val_6_, v_val_7_);
return v___x_8_;
}
}
}
}
LEAN_EXPORT lean_object* l_instBEqOption_beq___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_filterDuplicateCompletionInfos_eq_spec__0___boxed(lean_object* v_x_9_, lean_object* v_x_10_){
_start:
{
uint8_t v_res_11_; lean_object* v_r_12_; 
v_res_11_ = l_instBEqOption_beq___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_filterDuplicateCompletionInfos_eq_spec__0(v_x_9_, v_x_10_);
lean_dec(v_x_10_);
lean_dec(v_x_9_);
v_r_12_ = lean_box(v_res_11_);
return v_r_12_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_filterDuplicateCompletionInfos_eq(lean_object* v_a_13_, lean_object* v_a_14_){
_start:
{
switch(lean_obj_tag(v_a_13_))
{
case 0:
{
if (lean_obj_tag(v_a_14_) == 0)
{
lean_object* v_termInfo_15_; lean_object* v_toElabInfo_16_; lean_object* v_termInfo_17_; lean_object* v_toElabInfo_18_; lean_object* v_expr_19_; lean_object* v_stx_20_; lean_object* v_expr_21_; lean_object* v_stx_22_; uint8_t v___x_23_; 
v_termInfo_15_ = lean_ctor_get(v_a_13_, 0);
lean_inc_ref(v_termInfo_15_);
lean_dec_ref_known(v_a_13_, 2);
v_toElabInfo_16_ = lean_ctor_get(v_termInfo_15_, 0);
lean_inc_ref(v_toElabInfo_16_);
v_termInfo_17_ = lean_ctor_get(v_a_14_, 0);
lean_inc_ref(v_termInfo_17_);
lean_dec_ref_known(v_a_14_, 2);
v_toElabInfo_18_ = lean_ctor_get(v_termInfo_17_, 0);
lean_inc_ref(v_toElabInfo_18_);
v_expr_19_ = lean_ctor_get(v_termInfo_15_, 3);
lean_inc_ref(v_expr_19_);
lean_dec_ref(v_termInfo_15_);
v_stx_20_ = lean_ctor_get(v_toElabInfo_16_, 1);
lean_inc(v_stx_20_);
lean_dec_ref(v_toElabInfo_16_);
v_expr_21_ = lean_ctor_get(v_termInfo_17_, 3);
lean_inc_ref(v_expr_21_);
lean_dec_ref(v_termInfo_17_);
v_stx_22_ = lean_ctor_get(v_toElabInfo_18_, 1);
lean_inc(v_stx_22_);
lean_dec_ref(v_toElabInfo_18_);
v___x_23_ = l_Lean_Syntax_eqWithInfo(v_stx_20_, v_stx_22_);
if (v___x_23_ == 0)
{
lean_dec_ref(v_expr_21_);
lean_dec_ref(v_expr_19_);
return v___x_23_;
}
else
{
uint8_t v___x_24_; 
v___x_24_ = lean_expr_eqv(v_expr_19_, v_expr_21_);
lean_dec_ref(v_expr_21_);
lean_dec_ref(v_expr_19_);
return v___x_24_;
}
}
else
{
uint8_t v___x_25_; 
lean_dec_ref_known(v_a_13_, 2);
lean_dec_ref(v_a_14_);
v___x_25_ = 0;
return v___x_25_;
}
}
case 3:
{
if (lean_obj_tag(v_a_14_) == 3)
{
lean_object* v_stx_26_; lean_object* v_id_27_; lean_object* v_structName_28_; lean_object* v_stx_29_; lean_object* v_id_30_; lean_object* v_structName_31_; uint8_t v___x_32_; 
v_stx_26_ = lean_ctor_get(v_a_13_, 0);
lean_inc(v_stx_26_);
v_id_27_ = lean_ctor_get(v_a_13_, 1);
lean_inc(v_id_27_);
v_structName_28_ = lean_ctor_get(v_a_13_, 3);
lean_inc(v_structName_28_);
lean_dec_ref_known(v_a_13_, 4);
v_stx_29_ = lean_ctor_get(v_a_14_, 0);
lean_inc(v_stx_29_);
v_id_30_ = lean_ctor_get(v_a_14_, 1);
lean_inc(v_id_30_);
v_structName_31_ = lean_ctor_get(v_a_14_, 3);
lean_inc(v_structName_31_);
lean_dec_ref_known(v_a_14_, 4);
v___x_32_ = l_Lean_Syntax_eqWithInfo(v_stx_26_, v_stx_29_);
if (v___x_32_ == 0)
{
lean_dec(v_structName_31_);
lean_dec(v_id_30_);
lean_dec(v_structName_28_);
lean_dec(v_id_27_);
return v___x_32_;
}
else
{
uint8_t v___x_33_; 
v___x_33_ = l_instBEqOption_beq___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_filterDuplicateCompletionInfos_eq_spec__0(v_id_27_, v_id_30_);
lean_dec(v_id_30_);
lean_dec(v_id_27_);
if (v___x_33_ == 0)
{
lean_dec(v_structName_31_);
lean_dec(v_structName_28_);
return v___x_33_;
}
else
{
uint8_t v___x_34_; 
v___x_34_ = lean_name_eq(v_structName_28_, v_structName_31_);
lean_dec(v_structName_31_);
lean_dec(v_structName_28_);
return v___x_34_;
}
}
}
else
{
uint8_t v___x_35_; 
lean_dec_ref_known(v_a_13_, 4);
lean_dec_ref(v_a_14_);
v___x_35_ = 0;
return v___x_35_;
}
}
case 4:
{
if (lean_obj_tag(v_a_14_) == 4)
{
lean_object* v_stx_36_; lean_object* v_stx_37_; uint8_t v___x_38_; 
v_stx_36_ = lean_ctor_get(v_a_13_, 0);
lean_inc(v_stx_36_);
lean_dec_ref_known(v_a_13_, 1);
v_stx_37_ = lean_ctor_get(v_a_14_, 0);
lean_inc(v_stx_37_);
lean_dec_ref_known(v_a_14_, 1);
v___x_38_ = l_Lean_Syntax_eqWithInfo(v_stx_36_, v_stx_37_);
return v___x_38_;
}
else
{
uint8_t v___x_39_; 
lean_dec_ref_known(v_a_13_, 1);
lean_dec_ref(v_a_14_);
v___x_39_ = 0;
return v___x_39_;
}
}
case 5:
{
if (lean_obj_tag(v_a_14_) == 5)
{
lean_object* v_stx_40_; lean_object* v_stx_41_; uint8_t v___x_42_; 
v_stx_40_ = lean_ctor_get(v_a_13_, 0);
lean_inc(v_stx_40_);
lean_dec_ref_known(v_a_13_, 1);
v_stx_41_ = lean_ctor_get(v_a_14_, 0);
lean_inc(v_stx_41_);
lean_dec_ref_known(v_a_14_, 1);
v___x_42_ = l_Lean_Syntax_eqWithInfo(v_stx_40_, v_stx_41_);
return v___x_42_;
}
else
{
uint8_t v___x_43_; 
lean_dec_ref_known(v_a_13_, 1);
lean_dec_ref(v_a_14_);
v___x_43_ = 0;
return v___x_43_;
}
}
case 6:
{
if (lean_obj_tag(v_a_14_) == 6)
{
lean_object* v_stx_44_; lean_object* v_stx_45_; uint8_t v___x_46_; 
v_stx_44_ = lean_ctor_get(v_a_13_, 0);
lean_inc(v_stx_44_);
lean_dec_ref_known(v_a_13_, 2);
v_stx_45_ = lean_ctor_get(v_a_14_, 0);
lean_inc(v_stx_45_);
lean_dec_ref_known(v_a_14_, 2);
v___x_46_ = l_Lean_Syntax_eqWithInfo(v_stx_44_, v_stx_45_);
return v___x_46_;
}
else
{
uint8_t v___x_47_; 
lean_dec_ref_known(v_a_13_, 2);
lean_dec_ref(v_a_14_);
v___x_47_ = 0;
return v___x_47_;
}
}
case 7:
{
if (lean_obj_tag(v_a_14_) == 7)
{
lean_object* v_stx_48_; lean_object* v_stx_49_; uint8_t v___x_50_; 
v_stx_48_ = lean_ctor_get(v_a_13_, 0);
lean_inc(v_stx_48_);
lean_dec_ref_known(v_a_13_, 3);
v_stx_49_ = lean_ctor_get(v_a_14_, 0);
lean_inc(v_stx_49_);
lean_dec_ref_known(v_a_14_, 3);
v___x_50_ = l_Lean_Syntax_eqWithInfo(v_stx_48_, v_stx_49_);
return v___x_50_;
}
else
{
uint8_t v___x_51_; 
lean_dec_ref_known(v_a_13_, 3);
lean_dec_ref(v_a_14_);
v___x_51_ = 0;
return v___x_51_;
}
}
case 8:
{
if (lean_obj_tag(v_a_14_) == 8)
{
lean_object* v_stx_52_; lean_object* v_stx_53_; uint8_t v___x_54_; 
v_stx_52_ = lean_ctor_get(v_a_13_, 0);
lean_inc(v_stx_52_);
lean_dec_ref_known(v_a_13_, 1);
v_stx_53_ = lean_ctor_get(v_a_14_, 0);
lean_inc(v_stx_53_);
lean_dec_ref_known(v_a_14_, 1);
v___x_54_ = l_Lean_Syntax_eqWithInfo(v_stx_52_, v_stx_53_);
return v___x_54_;
}
else
{
uint8_t v___x_55_; 
lean_dec_ref_known(v_a_13_, 1);
lean_dec_ref(v_a_14_);
v___x_55_ = 0;
return v___x_55_;
}
}
default: 
{
if (lean_obj_tag(v_a_14_) == 1)
{
lean_object* v_stx_56_; lean_object* v_id_57_; lean_object* v_stx_58_; lean_object* v_id_59_; uint8_t v___x_60_; 
v_stx_56_ = lean_ctor_get(v_a_13_, 0);
lean_inc(v_stx_56_);
v_id_57_ = lean_ctor_get(v_a_13_, 1);
lean_inc(v_id_57_);
lean_dec_ref(v_a_13_);
v_stx_58_ = lean_ctor_get(v_a_14_, 0);
lean_inc(v_stx_58_);
v_id_59_ = lean_ctor_get(v_a_14_, 1);
lean_inc(v_id_59_);
lean_dec_ref_known(v_a_14_, 4);
v___x_60_ = l_Lean_Syntax_eqWithInfo(v_stx_56_, v_stx_58_);
if (v___x_60_ == 0)
{
lean_dec(v_id_59_);
lean_dec(v_id_57_);
return v___x_60_;
}
else
{
uint8_t v___x_61_; 
v___x_61_ = lean_name_eq(v_id_57_, v_id_59_);
lean_dec(v_id_59_);
lean_dec(v_id_57_);
return v___x_61_;
}
}
else
{
uint8_t v___x_62_; 
lean_dec_ref(v_a_14_);
lean_dec_ref(v_a_13_);
v___x_62_ = 0;
return v___x_62_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_filterDuplicateCompletionInfos_eq___boxed(lean_object* v_a_63_, lean_object* v_a_64_){
_start:
{
uint8_t v_res_65_; lean_object* v_r_66_; 
v_res_65_ = l___private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_filterDuplicateCompletionInfos_eq(v_a_63_, v_a_64_);
v_r_66_ = lean_box(v_res_65_);
return v_r_66_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_filterDuplicateCompletionInfos_spec__0(lean_object* v_a_67_, lean_object* v_as_68_, size_t v_i_69_, size_t v_stop_70_){
_start:
{
uint8_t v___x_71_; 
v___x_71_ = lean_usize_dec_eq(v_i_69_, v_stop_70_);
if (v___x_71_ == 0)
{
lean_object* v___x_72_; lean_object* v_info_73_; lean_object* v_info_74_; uint8_t v___x_75_; 
v___x_72_ = lean_array_uget_borrowed(v_as_68_, v_i_69_);
v_info_73_ = lean_ctor_get(v___x_72_, 2);
v_info_74_ = lean_ctor_get(v_a_67_, 2);
lean_inc_ref(v_info_74_);
lean_inc_ref(v_info_73_);
v___x_75_ = l___private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_filterDuplicateCompletionInfos_eq(v_info_73_, v_info_74_);
if (v___x_75_ == 0)
{
size_t v___x_76_; size_t v___x_77_; 
v___x_76_ = ((size_t)1ULL);
v___x_77_ = lean_usize_add(v_i_69_, v___x_76_);
v_i_69_ = v___x_77_;
goto _start;
}
else
{
lean_dec_ref(v_a_67_);
return v___x_75_;
}
}
else
{
uint8_t v___x_79_; 
lean_dec_ref(v_a_67_);
v___x_79_ = 0;
return v___x_79_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_filterDuplicateCompletionInfos_spec__0___boxed(lean_object* v_a_80_, lean_object* v_as_81_, lean_object* v_i_82_, lean_object* v_stop_83_){
_start:
{
size_t v_i_boxed_84_; size_t v_stop_boxed_85_; uint8_t v_res_86_; lean_object* v_r_87_; 
v_i_boxed_84_ = lean_unbox_usize(v_i_82_);
lean_dec(v_i_82_);
v_stop_boxed_85_ = lean_unbox_usize(v_stop_83_);
lean_dec(v_stop_83_);
v_res_86_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_filterDuplicateCompletionInfos_spec__0(v_a_80_, v_as_81_, v_i_boxed_84_, v_stop_boxed_85_);
lean_dec_ref(v_as_81_);
v_r_87_ = lean_box(v_res_86_);
return v_r_87_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_filterDuplicateCompletionInfos_spec__1(lean_object* v_as_88_, size_t v_sz_89_, size_t v_i_90_, lean_object* v_b_91_){
_start:
{
lean_object* v_a_93_; uint8_t v___x_97_; 
v___x_97_ = lean_usize_dec_lt(v_i_90_, v_sz_89_);
if (v___x_97_ == 0)
{
return v_b_91_;
}
else
{
lean_object* v_a_98_; lean_object* v___x_101_; lean_object* v___x_102_; uint8_t v___x_103_; 
v_a_98_ = lean_array_uget_borrowed(v_as_88_, v_i_90_);
v___x_101_ = lean_unsigned_to_nat(0u);
v___x_102_ = lean_array_get_size(v_b_91_);
v___x_103_ = lean_nat_dec_lt(v___x_101_, v___x_102_);
if (v___x_103_ == 0)
{
goto v___jp_99_;
}
else
{
if (v___x_103_ == 0)
{
goto v___jp_99_;
}
else
{
size_t v___x_104_; size_t v___x_105_; uint8_t v___x_106_; 
v___x_104_ = ((size_t)0ULL);
v___x_105_ = lean_usize_of_nat(v___x_102_);
lean_inc(v_a_98_);
v___x_106_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_filterDuplicateCompletionInfos_spec__0(v_a_98_, v_b_91_, v___x_104_, v___x_105_);
if (v___x_106_ == 0)
{
goto v___jp_99_;
}
else
{
v_a_93_ = v_b_91_;
goto v___jp_92_;
}
}
}
v___jp_99_:
{
lean_object* v___x_100_; 
lean_inc(v_a_98_);
v___x_100_ = lean_array_push(v_b_91_, v_a_98_);
v_a_93_ = v___x_100_;
goto v___jp_92_;
}
}
v___jp_92_:
{
size_t v___x_94_; size_t v___x_95_; 
v___x_94_ = ((size_t)1ULL);
v___x_95_ = lean_usize_add(v_i_90_, v___x_94_);
v_i_90_ = v___x_95_;
v_b_91_ = v_a_93_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_filterDuplicateCompletionInfos_spec__1___boxed(lean_object* v_as_107_, lean_object* v_sz_108_, lean_object* v_i_109_, lean_object* v_b_110_){
_start:
{
size_t v_sz_boxed_111_; size_t v_i_boxed_112_; lean_object* v_res_113_; 
v_sz_boxed_111_ = lean_unbox_usize(v_sz_108_);
lean_dec(v_sz_108_);
v_i_boxed_112_ = lean_unbox_usize(v_i_109_);
lean_dec(v_i_109_);
v_res_113_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_filterDuplicateCompletionInfos_spec__1(v_as_107_, v_sz_boxed_111_, v_i_boxed_112_, v_b_110_);
lean_dec_ref(v_as_107_);
return v_res_113_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_filterDuplicateCompletionInfos(lean_object* v_infos_116_){
_start:
{
lean_object* v_deduplicatedInfos_117_; size_t v_sz_118_; size_t v___x_119_; lean_object* v___x_120_; 
v_deduplicatedInfos_117_ = ((lean_object*)(l___private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_filterDuplicateCompletionInfos___closed__0));
v_sz_118_ = lean_array_size(v_infos_116_);
v___x_119_ = ((size_t)0ULL);
v___x_120_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_filterDuplicateCompletionInfos_spec__1(v_infos_116_, v_sz_118_, v___x_119_, v_deduplicatedInfos_117_);
return v___x_120_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_filterDuplicateCompletionInfos___boxed(lean_object* v_infos_121_){
_start:
{
lean_object* v_res_122_; 
v_res_122_ = l___private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_filterDuplicateCompletionInfos(v_infos_121_);
lean_dec_ref(v_infos_121_);
return v_res_122_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_findCompletionInfosAt_containsHoverPos(lean_object* v_hoverPos_123_, lean_object* v_i_124_){
_start:
{
if (lean_obj_tag(v_i_124_) == 5)
{
lean_object* v_stx_137_; lean_object* v___x_138_; lean_object* v___x_139_; uint8_t v___x_140_; 
v_stx_137_ = lean_ctor_get(v_i_124_, 0);
v___x_138_ = lean_unsigned_to_nat(1u);
v___x_139_ = l_Lean_Syntax_getArg(v_stx_137_, v___x_138_);
v___x_140_ = l_Lean_Syntax_isMissing(v___x_139_);
lean_dec(v___x_139_);
if (v___x_140_ == 0)
{
goto v___jp_128_;
}
else
{
lean_object* v___x_141_; 
lean_inc(v_stx_137_);
lean_dec_ref_known(v_i_124_, 1);
v___x_141_ = l_Lean_Syntax_getRangeWithTrailing_x3f(v_stx_137_, v___x_140_);
lean_dec(v_stx_137_);
if (lean_obj_tag(v___x_141_) == 1)
{
lean_object* v_val_142_; uint8_t v___x_143_; uint8_t v___x_144_; 
v_val_142_ = lean_ctor_get(v___x_141_, 0);
lean_inc(v_val_142_);
lean_dec_ref_known(v___x_141_, 1);
v___x_143_ = 0;
v___x_144_ = l_Lean_Syntax_Range_contains(v_val_142_, v_hoverPos_123_, v___x_143_);
lean_dec(v_val_142_);
return v___x_144_;
}
else
{
uint8_t v___x_145_; 
lean_dec(v___x_141_);
v___x_145_ = 0;
return v___x_145_;
}
}
}
else
{
goto v___jp_128_;
}
v___jp_125_:
{
lean_object* v___x_126_; uint8_t v___x_127_; 
v___x_126_ = lean_alloc_ctor(8, 1, 0);
lean_ctor_set(v___x_126_, 0, v_i_124_);
v___x_127_ = l_Lean_Elab_Info_occursInOrOnBoundary(v___x_126_, v_hoverPos_123_);
lean_dec_ref_known(v___x_126_, 1);
return v___x_127_;
}
v___jp_128_:
{
if (lean_obj_tag(v_i_124_) == 7)
{
lean_object* v_id_x3f_129_; 
v_id_x3f_129_ = lean_ctor_get(v_i_124_, 1);
if (lean_obj_tag(v_id_x3f_129_) == 0)
{
lean_object* v_stx_130_; uint8_t v___x_131_; lean_object* v___x_132_; 
v_stx_130_ = lean_ctor_get(v_i_124_, 0);
lean_inc(v_stx_130_);
lean_dec_ref_known(v_i_124_, 3);
v___x_131_ = 1;
v___x_132_ = l_Lean_Syntax_getRangeWithTrailing_x3f(v_stx_130_, v___x_131_);
lean_dec(v_stx_130_);
if (lean_obj_tag(v___x_132_) == 1)
{
lean_object* v_val_133_; uint8_t v___x_134_; uint8_t v___x_135_; 
v_val_133_ = lean_ctor_get(v___x_132_, 0);
lean_inc(v_val_133_);
lean_dec_ref_known(v___x_132_, 1);
v___x_134_ = 0;
v___x_135_ = l_Lean_Syntax_Range_contains(v_val_133_, v_hoverPos_123_, v___x_134_);
lean_dec(v_val_133_);
return v___x_135_;
}
else
{
uint8_t v___x_136_; 
lean_dec(v___x_132_);
v___x_136_ = 0;
return v___x_136_;
}
}
else
{
goto v___jp_125_;
}
}
else
{
goto v___jp_125_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_findCompletionInfosAt_containsHoverPos___boxed(lean_object* v_hoverPos_146_, lean_object* v_i_147_){
_start:
{
uint8_t v_res_148_; lean_object* v_r_149_; 
v_res_148_ = l___private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_findCompletionInfosAt_containsHoverPos(v_hoverPos_146_, v_i_147_);
lean_dec(v_hoverPos_146_);
v_r_149_ = lean_box(v_res_148_);
return v_r_149_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_findCompletionInfosAt_go_spec__0(lean_object* v_msg_150_){
_start:
{
lean_object* v___x_151_; lean_object* v___x_152_; 
v___x_151_ = lean_unsigned_to_nat(0u);
v___x_152_ = lean_panic_fn_borrowed(v___x_151_, v_msg_150_);
return v___x_152_;
}
}
static lean_object* _init_l___private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_findCompletionInfosAt_go___closed__3(void){
_start:
{
lean_object* v___x_156_; lean_object* v___x_157_; lean_object* v___x_158_; lean_object* v___x_159_; lean_object* v___x_160_; lean_object* v___x_161_; 
v___x_156_ = ((lean_object*)(l___private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_findCompletionInfosAt_go___closed__2));
v___x_157_ = lean_unsigned_to_nat(14u);
v___x_158_ = lean_unsigned_to_nat(22u);
v___x_159_ = ((lean_object*)(l___private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_findCompletionInfosAt_go___closed__1));
v___x_160_ = ((lean_object*)(l___private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_findCompletionInfosAt_go___closed__0));
v___x_161_ = l_mkPanicMessageWithDecl(v___x_160_, v___x_159_, v___x_158_, v___x_157_, v___x_156_);
return v___x_161_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_findCompletionInfosAt_go(lean_object* v_fileMap_162_, lean_object* v_hoverPos_163_, lean_object* v_hoverLine_164_, lean_object* v_ctx_165_, lean_object* v_info_166_, lean_object* v_best_167_){
_start:
{
if (lean_obj_tag(v_info_166_) == 8)
{
lean_object* v_i_168_; lean_object* v___y_170_; lean_object* v___y_171_; lean_object* v___y_172_; lean_object* v___y_182_; lean_object* v___y_183_; lean_object* v___y_191_; uint8_t v___x_196_; 
v_i_168_ = lean_ctor_get(v_info_166_, 0);
lean_inc_ref_n(v_i_168_, 2);
v___x_196_ = l___private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_findCompletionInfosAt_containsHoverPos(v_hoverPos_163_, v_i_168_);
if (v___x_196_ == 0)
{
lean_dec_ref_known(v_info_166_, 1);
lean_dec_ref(v_i_168_);
lean_dec_ref(v_ctx_165_);
lean_dec_ref(v_fileMap_162_);
return v_best_167_;
}
else
{
lean_object* v___x_197_; 
v___x_197_ = l_Lean_Elab_Info_pos_x3f(v_info_166_);
if (lean_obj_tag(v___x_197_) == 0)
{
lean_object* v___x_198_; lean_object* v___x_199_; 
v___x_198_ = lean_obj_once(&l___private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_findCompletionInfosAt_go___closed__3, &l___private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_findCompletionInfosAt_go___closed__3_once, _init_l___private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_findCompletionInfosAt_go___closed__3);
v___x_199_ = l_panic___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_findCompletionInfosAt_go_spec__0(v___x_198_);
v___y_191_ = v___x_199_;
goto v___jp_190_;
}
else
{
lean_object* v_val_200_; 
v_val_200_ = lean_ctor_get(v___x_197_, 0);
lean_inc(v_val_200_);
lean_dec_ref_known(v___x_197_, 1);
v___y_191_ = v_val_200_;
goto v___jp_190_;
}
}
v___jp_169_:
{
lean_object* v___x_173_; lean_object* v_line_174_; lean_object* v___x_175_; lean_object* v_line_176_; uint8_t v___x_177_; 
lean_inc_ref(v_fileMap_162_);
v___x_173_ = l_Lean_FileMap_toPosition(v_fileMap_162_, v___y_171_);
lean_dec(v___y_171_);
v_line_174_ = lean_ctor_get(v___x_173_, 0);
lean_inc(v_line_174_);
lean_dec_ref(v___x_173_);
v___x_175_ = l_Lean_FileMap_toPosition(v_fileMap_162_, v___y_170_);
lean_dec(v___y_170_);
v_line_176_ = lean_ctor_get(v___x_175_, 0);
lean_inc(v_line_176_);
lean_dec_ref(v___x_175_);
v___x_177_ = lean_nat_dec_eq(v_line_174_, v_hoverLine_164_);
if (v___x_177_ == 0)
{
lean_dec(v_line_176_);
lean_dec(v_line_174_);
lean_dec(v___y_172_);
lean_dec_ref(v_i_168_);
lean_dec_ref(v_ctx_165_);
return v_best_167_;
}
else
{
uint8_t v___x_178_; 
v___x_178_ = lean_nat_dec_eq(v_line_174_, v_line_176_);
lean_dec(v_line_176_);
lean_dec(v_line_174_);
if (v___x_178_ == 0)
{
lean_dec(v___y_172_);
lean_dec_ref(v_i_168_);
lean_dec_ref(v_ctx_165_);
return v_best_167_;
}
else
{
lean_object* v___x_179_; lean_object* v___x_180_; 
v___x_179_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_179_, 0, v___y_172_);
lean_ctor_set(v___x_179_, 1, v_ctx_165_);
lean_ctor_set(v___x_179_, 2, v_i_168_);
v___x_180_ = lean_array_push(v_best_167_, v___x_179_);
return v___x_180_;
}
}
}
v___jp_181_:
{
lean_object* v___x_184_; lean_object* v___x_185_; uint8_t v___x_186_; 
v___x_184_ = lean_unsigned_to_nat(1u);
v___x_185_ = lean_nat_add(v_hoverPos_163_, v___x_184_);
v___x_186_ = lean_nat_dec_le(v___x_185_, v___y_183_);
lean_dec(v___x_185_);
if (v___x_186_ == 0)
{
lean_object* v___x_187_; 
v___x_187_ = lean_box(0);
v___y_170_ = v___y_183_;
v___y_171_ = v___y_182_;
v___y_172_ = v___x_187_;
goto v___jp_169_;
}
else
{
lean_object* v___x_188_; lean_object* v___x_189_; 
v___x_188_ = lean_nat_sub(v_hoverPos_163_, v___y_182_);
v___x_189_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_189_, 0, v___x_188_);
v___y_170_ = v___y_183_;
v___y_171_ = v___y_182_;
v___y_172_ = v___x_189_;
goto v___jp_169_;
}
}
v___jp_190_:
{
lean_object* v___x_192_; 
v___x_192_ = l_Lean_Elab_Info_tailPos_x3f(v_info_166_);
lean_dec_ref_known(v_info_166_, 1);
if (lean_obj_tag(v___x_192_) == 0)
{
lean_object* v___x_193_; lean_object* v___x_194_; 
v___x_193_ = lean_obj_once(&l___private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_findCompletionInfosAt_go___closed__3, &l___private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_findCompletionInfosAt_go___closed__3_once, _init_l___private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_findCompletionInfosAt_go___closed__3);
v___x_194_ = l_panic___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_findCompletionInfosAt_go_spec__0(v___x_193_);
v___y_182_ = v___y_191_;
v___y_183_ = v___x_194_;
goto v___jp_181_;
}
else
{
lean_object* v_val_195_; 
v_val_195_ = lean_ctor_get(v___x_192_, 0);
lean_inc(v_val_195_);
lean_dec_ref_known(v___x_192_, 1);
v___y_182_ = v___y_191_;
v___y_183_ = v_val_195_;
goto v___jp_181_;
}
}
}
else
{
lean_dec_ref(v_info_166_);
lean_dec_ref(v_ctx_165_);
lean_dec_ref(v_fileMap_162_);
return v_best_167_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_findCompletionInfosAt_go___boxed(lean_object* v_fileMap_201_, lean_object* v_hoverPos_202_, lean_object* v_hoverLine_203_, lean_object* v_ctx_204_, lean_object* v_info_205_, lean_object* v_best_206_){
_start:
{
lean_object* v_res_207_; 
v_res_207_ = l___private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_findCompletionInfosAt_go(v_fileMap_201_, v_hoverPos_202_, v_hoverLine_203_, v_ctx_204_, v_info_205_, v_best_206_);
lean_dec(v_hoverLine_203_);
lean_dec(v_hoverPos_202_);
return v_res_207_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_Completion_findCompletionInfosAt(lean_object* v_fileMap_208_, lean_object* v_hoverPos_209_, lean_object* v_cmdStx_210_, lean_object* v_infoTree_211_){
_start:
{
uint8_t v_isComplete_213_; lean_object* v_completionInfoCandidates_214_; lean_object* v___x_218_; lean_object* v_line_219_; lean_object* v___x_220_; lean_object* v___x_221_; lean_object* v___x_222_; lean_object* v_completionInfoCandidates_223_; lean_object* v___x_224_; uint8_t v___x_225_; 
lean_inc_ref_n(v_fileMap_208_, 2);
v___x_218_ = l_Lean_FileMap_toPosition(v_fileMap_208_, v_hoverPos_209_);
v_line_219_ = lean_ctor_get(v___x_218_, 0);
lean_inc(v_line_219_);
lean_dec_ref(v___x_218_);
lean_inc(v_hoverPos_209_);
v___x_220_ = lean_alloc_closure((void*)(l___private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_findCompletionInfosAt_go___boxed), 6, 3);
lean_closure_set(v___x_220_, 0, v_fileMap_208_);
lean_closure_set(v___x_220_, 1, v_hoverPos_209_);
lean_closure_set(v___x_220_, 2, v_line_219_);
v___x_221_ = lean_unsigned_to_nat(0u);
v___x_222_ = ((lean_object*)(l___private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_filterDuplicateCompletionInfos___closed__0));
lean_inc_ref(v_infoTree_211_);
v_completionInfoCandidates_223_ = l_Lean_Elab_InfoTree_foldInfo___redArg(v___x_220_, v___x_222_, v_infoTree_211_);
v___x_224_ = lean_array_get_size(v_completionInfoCandidates_223_);
v___x_225_ = lean_nat_dec_eq(v___x_224_, v___x_221_);
if (v___x_225_ == 0)
{
uint8_t v_isComplete_226_; 
lean_dec_ref(v_infoTree_211_);
lean_dec(v_cmdStx_210_);
lean_dec(v_hoverPos_209_);
lean_dec_ref(v_fileMap_208_);
v_isComplete_226_ = 1;
v_isComplete_213_ = v_isComplete_226_;
v_completionInfoCandidates_214_ = v_completionInfoCandidates_223_;
goto v___jp_212_;
}
else
{
lean_object* v_completionInfoCandidates_227_; uint8_t v_isComplete_228_; 
lean_dec(v_completionInfoCandidates_223_);
v_completionInfoCandidates_227_ = l_Lean_Server_Completion_findSyntheticCompletions(v_fileMap_208_, v_hoverPos_209_, v_cmdStx_210_, v_infoTree_211_);
v_isComplete_228_ = 0;
v_isComplete_213_ = v_isComplete_228_;
v_completionInfoCandidates_214_ = v_completionInfoCandidates_227_;
goto v___jp_212_;
}
v___jp_212_:
{
lean_object* v___x_215_; lean_object* v___x_216_; lean_object* v___x_217_; 
v___x_215_ = l___private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_filterDuplicateCompletionInfos(v_completionInfoCandidates_214_);
lean_dec_ref(v_completionInfoCandidates_214_);
v___x_216_ = lean_box(v_isComplete_213_);
v___x_217_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_217_, 0, v___x_215_);
lean_ctor_set(v___x_217_, 1, v___x_216_);
return v___x_217_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions___lam__0(lean_object* v_x_229_){
_start:
{
lean_object* v_fst_230_; lean_object* v___x_232_; uint8_t v_isShared_233_; uint8_t v_isSharedCheck_245_; 
v_fst_230_ = lean_ctor_get(v_x_229_, 0);
v_isSharedCheck_245_ = !lean_is_exclusive(v_x_229_);
if (v_isSharedCheck_245_ == 0)
{
lean_object* v_unused_246_; 
v_unused_246_ = lean_ctor_get(v_x_229_, 1);
lean_dec(v_unused_246_);
v___x_232_ = v_x_229_;
v_isShared_233_ = v_isSharedCheck_245_;
goto v_resetjp_231_;
}
else
{
lean_inc(v_fst_230_);
lean_dec(v_x_229_);
v___x_232_ = lean_box(0);
v_isShared_233_ = v_isSharedCheck_245_;
goto v_resetjp_231_;
}
v_resetjp_231_:
{
lean_object* v_info_234_; uint8_t v___y_236_; 
v_info_234_ = lean_ctor_get(v_fst_230_, 2);
lean_inc_ref(v_info_234_);
lean_dec(v_fst_230_);
if (lean_obj_tag(v_info_234_) == 1)
{
uint8_t v___x_243_; 
v___x_243_ = 1;
v___y_236_ = v___x_243_;
goto v___jp_235_;
}
else
{
uint8_t v___x_244_; 
v___x_244_ = 0;
v___y_236_ = v___x_244_;
goto v___jp_235_;
}
v___jp_235_:
{
lean_object* v___x_237_; lean_object* v_size_x3f_238_; lean_object* v___x_239_; lean_object* v___x_241_; 
v___x_237_ = lean_alloc_ctor(8, 1, 0);
lean_ctor_set(v___x_237_, 0, v_info_234_);
v_size_x3f_238_ = l_Lean_Elab_Info_size_x3f(v___x_237_);
lean_dec_ref_known(v___x_237_, 1);
v___x_239_ = lean_box(v___y_236_);
if (v_isShared_233_ == 0)
{
lean_ctor_set(v___x_232_, 1, v_size_x3f_238_);
lean_ctor_set(v___x_232_, 0, v___x_239_);
v___x_241_ = v___x_232_;
goto v_reusejp_240_;
}
else
{
lean_object* v_reuseFailAlloc_242_; 
v_reuseFailAlloc_242_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_242_, 0, v___x_239_);
lean_ctor_set(v_reuseFailAlloc_242_, 1, v_size_x3f_238_);
v___x_241_ = v_reuseFailAlloc_242_;
goto v_reusejp_240_;
}
v_reusejp_240_:
{
return v___x_241_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__3(lean_object* v_x_247_, lean_object* v_x_248_){
_start:
{
if (lean_obj_tag(v_x_248_) == 0)
{
return v_x_247_;
}
else
{
lean_object* v_key_249_; lean_object* v_value_250_; lean_object* v_tail_251_; lean_object* v___x_252_; lean_object* v___x_253_; 
v_key_249_ = lean_ctor_get(v_x_248_, 0);
v_value_250_ = lean_ctor_get(v_x_248_, 1);
v_tail_251_ = lean_ctor_get(v_x_248_, 2);
lean_inc(v_value_250_);
lean_inc(v_key_249_);
v___x_252_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_252_, 0, v_key_249_);
lean_ctor_set(v___x_252_, 1, v_value_250_);
v___x_253_ = lean_array_push(v_x_247_, v___x_252_);
v_x_247_ = v___x_253_;
v_x_248_ = v_tail_251_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__3___boxed(lean_object* v_x_255_, lean_object* v_x_256_){
_start:
{
lean_object* v_res_257_; 
v_res_257_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__3(v_x_255_, v_x_256_);
lean_dec(v_x_256_);
return v_res_257_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__4(lean_object* v_as_258_, size_t v_i_259_, size_t v_stop_260_, lean_object* v_b_261_){
_start:
{
uint8_t v___x_262_; 
v___x_262_ = lean_usize_dec_eq(v_i_259_, v_stop_260_);
if (v___x_262_ == 0)
{
lean_object* v___x_263_; lean_object* v___x_264_; size_t v___x_265_; size_t v___x_266_; 
v___x_263_ = lean_array_uget_borrowed(v_as_258_, v_i_259_);
v___x_264_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__3(v_b_261_, v___x_263_);
v___x_265_ = ((size_t)1ULL);
v___x_266_ = lean_usize_add(v_i_259_, v___x_265_);
v_i_259_ = v___x_266_;
v_b_261_ = v___x_264_;
goto _start;
}
else
{
return v_b_261_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__4___boxed(lean_object* v_as_268_, lean_object* v_i_269_, lean_object* v_stop_270_, lean_object* v_b_271_){
_start:
{
size_t v_i_boxed_272_; size_t v_stop_boxed_273_; lean_object* v_res_274_; 
v_i_boxed_272_ = lean_unbox_usize(v_i_269_);
lean_dec(v_i_269_);
v_stop_boxed_273_ = lean_unbox_usize(v_stop_270_);
lean_dec(v_stop_270_);
v_res_274_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__4(v_as_268_, v_i_boxed_272_, v_stop_boxed_273_, v_b_271_);
lean_dec_ref(v_as_268_);
return v_res_274_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__0(size_t v_sz_275_, size_t v_i_276_, lean_object* v_bs_277_){
_start:
{
uint8_t v___x_278_; 
v___x_278_ = lean_usize_dec_lt(v_i_276_, v_sz_275_);
if (v___x_278_ == 0)
{
return v_bs_277_;
}
else
{
lean_object* v_v_279_; lean_object* v_snd_280_; lean_object* v___x_281_; lean_object* v_bs_x27_282_; size_t v___x_283_; size_t v___x_284_; lean_object* v___x_285_; 
v_v_279_ = lean_array_uget_borrowed(v_bs_277_, v_i_276_);
v_snd_280_ = lean_ctor_get(v_v_279_, 1);
lean_inc(v_snd_280_);
v___x_281_ = lean_unsigned_to_nat(0u);
v_bs_x27_282_ = lean_array_uset(v_bs_277_, v_i_276_, v___x_281_);
v___x_283_ = ((size_t)1ULL);
v___x_284_ = lean_usize_add(v_i_276_, v___x_283_);
v___x_285_ = lean_array_uset(v_bs_x27_282_, v_i_276_, v_snd_280_);
v_i_276_ = v___x_284_;
v_bs_277_ = v___x_285_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__0___boxed(lean_object* v_sz_287_, lean_object* v_i_288_, lean_object* v_bs_289_){
_start:
{
size_t v_sz_boxed_290_; size_t v_i_boxed_291_; lean_object* v_res_292_; 
v_sz_boxed_290_ = lean_unbox_usize(v_sz_287_);
lean_dec(v_sz_287_);
v_i_boxed_291_ = lean_unbox_usize(v_i_288_);
lean_dec(v_i_288_);
v_res_292_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__0(v_sz_boxed_290_, v_i_boxed_291_, v_bs_289_);
return v_res_292_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__1_spec__1___redArg(lean_object* v_hi_293_, lean_object* v_pivot_294_, lean_object* v_as_295_, lean_object* v_i_296_, lean_object* v_k_297_){
_start:
{
uint8_t v___x_308_; 
v___x_308_ = lean_nat_dec_lt(v_k_297_, v_hi_293_);
if (v___x_308_ == 0)
{
lean_object* v___x_309_; lean_object* v___x_310_; 
lean_dec(v_k_297_);
v___x_309_ = lean_array_fswap(v_as_295_, v_i_296_, v_hi_293_);
v___x_310_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_310_, 0, v_i_296_);
lean_ctor_set(v___x_310_, 1, v___x_309_);
return v___x_310_;
}
else
{
lean_object* v___x_311_; lean_object* v_fst_312_; lean_object* v_fst_313_; lean_object* v_fst_314_; lean_object* v_snd_315_; lean_object* v_fst_316_; lean_object* v_snd_317_; 
v___x_311_ = lean_array_fget_borrowed(v_as_295_, v_k_297_);
v_fst_312_ = lean_ctor_get(v___x_311_, 0);
v_fst_313_ = lean_ctor_get(v_pivot_294_, 0);
v_fst_314_ = lean_ctor_get(v_fst_312_, 0);
v_snd_315_ = lean_ctor_get(v_fst_312_, 1);
v_fst_316_ = lean_ctor_get(v_fst_313_, 0);
v_snd_317_ = lean_ctor_get(v_fst_313_, 1);
if (lean_obj_tag(v_snd_315_) == 0)
{
if (lean_obj_tag(v_snd_317_) == 1)
{
goto v___jp_298_;
}
else
{
goto v___jp_322_;
}
}
else
{
if (lean_obj_tag(v_snd_317_) == 0)
{
goto v___jp_302_;
}
else
{
goto v___jp_322_;
}
}
v___jp_318_:
{
if (lean_obj_tag(v_snd_315_) == 1)
{
if (lean_obj_tag(v_snd_317_) == 1)
{
lean_object* v_val_319_; lean_object* v_val_320_; uint8_t v___x_321_; 
v_val_319_ = lean_ctor_get(v_snd_315_, 0);
v_val_320_ = lean_ctor_get(v_snd_317_, 0);
v___x_321_ = lean_nat_dec_lt(v_val_319_, v_val_320_);
if (v___x_321_ == 0)
{
goto v___jp_298_;
}
else
{
goto v___jp_302_;
}
}
else
{
goto v___jp_298_;
}
}
else
{
goto v___jp_298_;
}
}
v___jp_322_:
{
uint8_t v___x_323_; 
v___x_323_ = lean_unbox(v_fst_314_);
if (v___x_323_ == 0)
{
uint8_t v___x_324_; 
v___x_324_ = lean_unbox(v_fst_316_);
if (v___x_324_ == 1)
{
goto v___jp_302_;
}
else
{
goto v___jp_318_;
}
}
else
{
uint8_t v___x_325_; 
v___x_325_ = lean_unbox(v_fst_316_);
if (v___x_325_ == 0)
{
goto v___jp_298_;
}
else
{
goto v___jp_318_;
}
}
}
}
v___jp_298_:
{
lean_object* v___x_299_; lean_object* v___x_300_; 
v___x_299_ = lean_unsigned_to_nat(1u);
v___x_300_ = lean_nat_add(v_k_297_, v___x_299_);
lean_dec(v_k_297_);
v_k_297_ = v___x_300_;
goto _start;
}
v___jp_302_:
{
lean_object* v___x_303_; lean_object* v___x_304_; lean_object* v___x_305_; lean_object* v___x_306_; 
v___x_303_ = lean_array_fswap(v_as_295_, v_i_296_, v_k_297_);
v___x_304_ = lean_unsigned_to_nat(1u);
v___x_305_ = lean_nat_add(v_i_296_, v___x_304_);
lean_dec(v_i_296_);
v___x_306_ = lean_nat_add(v_k_297_, v___x_304_);
lean_dec(v_k_297_);
v_as_295_ = v___x_303_;
v_i_296_ = v___x_305_;
v_k_297_ = v___x_306_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__1_spec__1___redArg___boxed(lean_object* v_hi_326_, lean_object* v_pivot_327_, lean_object* v_as_328_, lean_object* v_i_329_, lean_object* v_k_330_){
_start:
{
lean_object* v_res_331_; 
v_res_331_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__1_spec__1___redArg(v_hi_326_, v_pivot_327_, v_as_328_, v_i_329_, v_k_330_);
lean_dec_ref(v_pivot_327_);
lean_dec(v_hi_326_);
return v_res_331_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__1___redArg___lam__0(uint8_t v___x_332_, lean_object* v_x_333_, lean_object* v_x_334_){
_start:
{
lean_object* v_fst_335_; lean_object* v_fst_336_; lean_object* v_fst_337_; lean_object* v_snd_338_; lean_object* v_fst_339_; lean_object* v_snd_340_; 
v_fst_335_ = lean_ctor_get(v_x_333_, 0);
v_fst_336_ = lean_ctor_get(v_x_334_, 0);
v_fst_337_ = lean_ctor_get(v_fst_335_, 0);
v_snd_338_ = lean_ctor_get(v_fst_335_, 1);
v_fst_339_ = lean_ctor_get(v_fst_336_, 0);
v_snd_340_ = lean_ctor_get(v_fst_336_, 1);
if (lean_obj_tag(v_snd_338_) == 0)
{
if (lean_obj_tag(v_snd_340_) == 1)
{
uint8_t v___x_353_; 
v___x_353_ = 0;
return v___x_353_;
}
else
{
goto v___jp_347_;
}
}
else
{
if (lean_obj_tag(v_snd_340_) == 0)
{
return v___x_332_;
}
else
{
goto v___jp_347_;
}
}
v___jp_341_:
{
if (lean_obj_tag(v_snd_338_) == 1)
{
if (lean_obj_tag(v_snd_340_) == 1)
{
lean_object* v_val_342_; lean_object* v_val_343_; uint8_t v___x_344_; 
v_val_342_ = lean_ctor_get(v_snd_338_, 0);
v_val_343_ = lean_ctor_get(v_snd_340_, 0);
v___x_344_ = lean_nat_dec_lt(v_val_342_, v_val_343_);
return v___x_344_;
}
else
{
uint8_t v___x_345_; 
v___x_345_ = 0;
return v___x_345_;
}
}
else
{
uint8_t v___x_346_; 
v___x_346_ = 0;
return v___x_346_;
}
}
v___jp_347_:
{
uint8_t v___x_348_; 
v___x_348_ = lean_unbox(v_fst_337_);
if (v___x_348_ == 0)
{
uint8_t v___x_349_; 
v___x_349_ = lean_unbox(v_fst_339_);
if (v___x_349_ == 1)
{
uint8_t v___x_350_; 
v___x_350_ = lean_unbox(v_fst_339_);
return v___x_350_;
}
else
{
goto v___jp_341_;
}
}
else
{
uint8_t v___x_351_; 
v___x_351_ = lean_unbox(v_fst_339_);
if (v___x_351_ == 0)
{
uint8_t v___x_352_; 
v___x_352_ = lean_unbox(v_fst_339_);
return v___x_352_;
}
else
{
goto v___jp_341_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__1___redArg___lam__0___boxed(lean_object* v___x_354_, lean_object* v_x_355_, lean_object* v_x_356_){
_start:
{
uint8_t v___x_2367__boxed_357_; uint8_t v_res_358_; lean_object* v_r_359_; 
v___x_2367__boxed_357_ = lean_unbox(v___x_354_);
v_res_358_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__1___redArg___lam__0(v___x_2367__boxed_357_, v_x_355_, v_x_356_);
lean_dec_ref(v_x_356_);
lean_dec_ref(v_x_355_);
v_r_359_ = lean_box(v_res_358_);
return v_r_359_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__1___redArg(lean_object* v_n_360_, lean_object* v_as_361_, lean_object* v_lo_362_, lean_object* v_hi_363_){
_start:
{
lean_object* v___y_365_; uint8_t v___x_375_; 
v___x_375_ = lean_nat_dec_lt(v_lo_362_, v_hi_363_);
if (v___x_375_ == 0)
{
lean_dec(v_lo_362_);
return v_as_361_;
}
else
{
lean_object* v___x_376_; lean_object* v___x_377_; lean_object* v_mid_378_; lean_object* v___y_380_; lean_object* v___y_386_; lean_object* v___x_391_; lean_object* v___x_392_; uint8_t v___x_393_; 
v___x_376_ = lean_nat_add(v_lo_362_, v_hi_363_);
v___x_377_ = lean_unsigned_to_nat(1u);
v_mid_378_ = lean_nat_shiftr(v___x_376_, v___x_377_);
lean_dec(v___x_376_);
v___x_391_ = lean_array_fget_borrowed(v_as_361_, v_mid_378_);
v___x_392_ = lean_array_fget_borrowed(v_as_361_, v_lo_362_);
v___x_393_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__1___redArg___lam__0(v___x_375_, v___x_391_, v___x_392_);
if (v___x_393_ == 0)
{
v___y_386_ = v_as_361_;
goto v___jp_385_;
}
else
{
lean_object* v___x_394_; 
v___x_394_ = lean_array_fswap(v_as_361_, v_lo_362_, v_mid_378_);
v___y_386_ = v___x_394_;
goto v___jp_385_;
}
v___jp_379_:
{
lean_object* v___x_381_; lean_object* v___x_382_; uint8_t v___x_383_; 
v___x_381_ = lean_array_fget_borrowed(v___y_380_, v_mid_378_);
v___x_382_ = lean_array_fget_borrowed(v___y_380_, v_hi_363_);
v___x_383_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__1___redArg___lam__0(v___x_375_, v___x_381_, v___x_382_);
if (v___x_383_ == 0)
{
lean_dec(v_mid_378_);
v___y_365_ = v___y_380_;
goto v___jp_364_;
}
else
{
lean_object* v___x_384_; 
v___x_384_ = lean_array_fswap(v___y_380_, v_mid_378_, v_hi_363_);
lean_dec(v_mid_378_);
v___y_365_ = v___x_384_;
goto v___jp_364_;
}
}
v___jp_385_:
{
lean_object* v___x_387_; lean_object* v___x_388_; uint8_t v___x_389_; 
v___x_387_ = lean_array_fget_borrowed(v___y_386_, v_hi_363_);
v___x_388_ = lean_array_fget_borrowed(v___y_386_, v_lo_362_);
v___x_389_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__1___redArg___lam__0(v___x_375_, v___x_387_, v___x_388_);
if (v___x_389_ == 0)
{
v___y_380_ = v___y_386_;
goto v___jp_379_;
}
else
{
lean_object* v___x_390_; 
v___x_390_ = lean_array_fswap(v___y_386_, v_lo_362_, v_hi_363_);
v___y_380_ = v___x_390_;
goto v___jp_379_;
}
}
}
v___jp_364_:
{
lean_object* v_pivot_366_; lean_object* v___x_367_; lean_object* v_fst_368_; lean_object* v_snd_369_; uint8_t v___x_370_; 
v_pivot_366_ = lean_array_fget(v___y_365_, v_hi_363_);
lean_inc_n(v_lo_362_, 2);
v___x_367_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__1_spec__1___redArg(v_hi_363_, v_pivot_366_, v___y_365_, v_lo_362_, v_lo_362_);
lean_dec(v_pivot_366_);
v_fst_368_ = lean_ctor_get(v___x_367_, 0);
lean_inc(v_fst_368_);
v_snd_369_ = lean_ctor_get(v___x_367_, 1);
lean_inc(v_snd_369_);
lean_dec_ref(v___x_367_);
v___x_370_ = lean_nat_dec_le(v_hi_363_, v_fst_368_);
if (v___x_370_ == 0)
{
lean_object* v___x_371_; lean_object* v___x_372_; lean_object* v___x_373_; 
v___x_371_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__1___redArg(v_n_360_, v_snd_369_, v_lo_362_, v_fst_368_);
v___x_372_ = lean_unsigned_to_nat(1u);
v___x_373_ = lean_nat_add(v_fst_368_, v___x_372_);
lean_dec(v_fst_368_);
v_as_361_ = v___x_371_;
v_lo_362_ = v___x_373_;
goto _start;
}
else
{
lean_dec(v_fst_368_);
lean_dec(v_lo_362_);
return v_snd_369_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__1___redArg___boxed(lean_object* v_n_395_, lean_object* v_as_396_, lean_object* v_lo_397_, lean_object* v_hi_398_){
_start:
{
lean_object* v_res_399_; 
v_res_399_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__1___redArg(v_n_395_, v_as_396_, v_lo_397_, v_hi_398_);
lean_dec(v_hi_398_);
lean_dec(v_n_395_);
return v_res_399_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2_spec__3_spec__5_spec__9_spec__11___redArg(lean_object* v_x_400_, lean_object* v_x_401_){
_start:
{
if (lean_obj_tag(v_x_401_) == 0)
{
return v_x_400_;
}
else
{
lean_object* v_key_402_; lean_object* v_value_403_; lean_object* v_tail_404_; lean_object* v___x_406_; uint8_t v_isShared_407_; uint8_t v_isSharedCheck_442_; 
v_key_402_ = lean_ctor_get(v_x_401_, 0);
v_value_403_ = lean_ctor_get(v_x_401_, 1);
v_tail_404_ = lean_ctor_get(v_x_401_, 2);
v_isSharedCheck_442_ = !lean_is_exclusive(v_x_401_);
if (v_isSharedCheck_442_ == 0)
{
v___x_406_ = v_x_401_;
v_isShared_407_ = v_isSharedCheck_442_;
goto v_resetjp_405_;
}
else
{
lean_inc(v_tail_404_);
lean_inc(v_value_403_);
lean_inc(v_key_402_);
lean_dec(v_x_401_);
v___x_406_ = lean_box(0);
v_isShared_407_ = v_isSharedCheck_442_;
goto v_resetjp_405_;
}
v_resetjp_405_:
{
lean_object* v_fst_408_; lean_object* v_snd_409_; lean_object* v___x_410_; uint64_t v___y_412_; uint64_t v___y_413_; uint64_t v___y_433_; uint8_t v___x_439_; 
v_fst_408_ = lean_ctor_get(v_key_402_, 0);
v_snd_409_ = lean_ctor_get(v_key_402_, 1);
v___x_410_ = lean_array_get_size(v_x_400_);
v___x_439_ = lean_unbox(v_fst_408_);
if (v___x_439_ == 0)
{
uint64_t v___x_440_; 
v___x_440_ = 13ULL;
v___y_433_ = v___x_440_;
goto v___jp_432_;
}
else
{
uint64_t v___x_441_; 
v___x_441_ = 11ULL;
v___y_433_ = v___x_441_;
goto v___jp_432_;
}
v___jp_411_:
{
uint64_t v___x_414_; uint64_t v___x_415_; uint64_t v___x_416_; uint64_t v_fold_417_; uint64_t v___x_418_; uint64_t v___x_419_; uint64_t v___x_420_; size_t v___x_421_; size_t v___x_422_; size_t v___x_423_; size_t v___x_424_; size_t v___x_425_; lean_object* v___x_426_; lean_object* v___x_428_; 
v___x_414_ = lean_uint64_mix_hash(v___y_412_, v___y_413_);
v___x_415_ = 32ULL;
v___x_416_ = lean_uint64_shift_right(v___x_414_, v___x_415_);
v_fold_417_ = lean_uint64_xor(v___x_414_, v___x_416_);
v___x_418_ = 16ULL;
v___x_419_ = lean_uint64_shift_right(v_fold_417_, v___x_418_);
v___x_420_ = lean_uint64_xor(v_fold_417_, v___x_419_);
v___x_421_ = lean_uint64_to_usize(v___x_420_);
v___x_422_ = lean_usize_of_nat(v___x_410_);
v___x_423_ = ((size_t)1ULL);
v___x_424_ = lean_usize_sub(v___x_422_, v___x_423_);
v___x_425_ = lean_usize_land(v___x_421_, v___x_424_);
v___x_426_ = lean_array_uget_borrowed(v_x_400_, v___x_425_);
lean_inc(v___x_426_);
if (v_isShared_407_ == 0)
{
lean_ctor_set(v___x_406_, 2, v___x_426_);
v___x_428_ = v___x_406_;
goto v_reusejp_427_;
}
else
{
lean_object* v_reuseFailAlloc_431_; 
v_reuseFailAlloc_431_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_431_, 0, v_key_402_);
lean_ctor_set(v_reuseFailAlloc_431_, 1, v_value_403_);
lean_ctor_set(v_reuseFailAlloc_431_, 2, v___x_426_);
v___x_428_ = v_reuseFailAlloc_431_;
goto v_reusejp_427_;
}
v_reusejp_427_:
{
lean_object* v___x_429_; 
v___x_429_ = lean_array_uset(v_x_400_, v___x_425_, v___x_428_);
v_x_400_ = v___x_429_;
v_x_401_ = v_tail_404_;
goto _start;
}
}
v___jp_432_:
{
if (lean_obj_tag(v_snd_409_) == 0)
{
uint64_t v___x_434_; 
v___x_434_ = 11ULL;
v___y_412_ = v___y_433_;
v___y_413_ = v___x_434_;
goto v___jp_411_;
}
else
{
lean_object* v_val_435_; uint64_t v___x_436_; uint64_t v___x_437_; uint64_t v___x_438_; 
v_val_435_ = lean_ctor_get(v_snd_409_, 0);
v___x_436_ = l_String_instHashableRaw_hash(v_val_435_);
v___x_437_ = 13ULL;
v___x_438_ = lean_uint64_mix_hash(v___x_436_, v___x_437_);
v___y_412_ = v___y_433_;
v___y_413_ = v___x_438_;
goto v___jp_411_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2_spec__3_spec__5_spec__9___redArg(lean_object* v_i_443_, lean_object* v_source_444_, lean_object* v_target_445_){
_start:
{
lean_object* v___x_446_; uint8_t v___x_447_; 
v___x_446_ = lean_array_get_size(v_source_444_);
v___x_447_ = lean_nat_dec_lt(v_i_443_, v___x_446_);
if (v___x_447_ == 0)
{
lean_dec_ref(v_source_444_);
lean_dec(v_i_443_);
return v_target_445_;
}
else
{
lean_object* v_es_448_; lean_object* v___x_449_; lean_object* v_source_450_; lean_object* v_target_451_; lean_object* v___x_452_; lean_object* v___x_453_; 
v_es_448_ = lean_array_fget(v_source_444_, v_i_443_);
v___x_449_ = lean_box(0);
v_source_450_ = lean_array_fset(v_source_444_, v_i_443_, v___x_449_);
v_target_451_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2_spec__3_spec__5_spec__9_spec__11___redArg(v_target_445_, v_es_448_);
v___x_452_ = lean_unsigned_to_nat(1u);
v___x_453_ = lean_nat_add(v_i_443_, v___x_452_);
lean_dec(v_i_443_);
v_i_443_ = v___x_453_;
v_source_444_ = v_source_450_;
v_target_445_ = v_target_451_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2_spec__3_spec__5___redArg(lean_object* v_data_455_){
_start:
{
lean_object* v___x_456_; lean_object* v___x_457_; lean_object* v_nbuckets_458_; lean_object* v___x_459_; lean_object* v___x_460_; lean_object* v___x_461_; lean_object* v___x_462_; lean_object* v___x_463_; 
v___x_456_ = lean_array_get_size(v_data_455_);
v___x_457_ = lean_unsigned_to_nat(2u);
v_nbuckets_458_ = lean_nat_mul(v___x_456_, v___x_457_);
v___x_459_ = lean_unsigned_to_nat(0u);
v___x_460_ = lean_box(0);
v___x_461_ = lean_mk_array(v_nbuckets_458_, v___x_460_);
v___x_462_ = lean_array_propagate_mark(v_data_455_, v___x_461_);
v___x_463_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2_spec__3_spec__5_spec__9___redArg(v___x_459_, v_data_455_, v___x_462_);
return v___x_463_;
}
}
LEAN_EXPORT uint8_t l_instBEqOption_beq___at___00Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2_spec__3_spec__4_spec__7(lean_object* v_x_464_, lean_object* v_x_465_){
_start:
{
if (lean_obj_tag(v_x_464_) == 0)
{
if (lean_obj_tag(v_x_465_) == 0)
{
uint8_t v___x_466_; 
v___x_466_ = 1;
return v___x_466_;
}
else
{
uint8_t v___x_467_; 
v___x_467_ = 0;
return v___x_467_;
}
}
else
{
if (lean_obj_tag(v_x_465_) == 0)
{
uint8_t v___x_468_; 
v___x_468_ = 0;
return v___x_468_;
}
else
{
lean_object* v_val_469_; lean_object* v_val_470_; uint8_t v_decide_471_; 
v_val_469_ = lean_ctor_get(v_x_464_, 0);
v_val_470_ = lean_ctor_get(v_x_465_, 0);
v_decide_471_ = lean_nat_dec_eq(v_val_469_, v_val_470_);
return v_decide_471_;
}
}
}
}
LEAN_EXPORT lean_object* l_instBEqOption_beq___at___00Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2_spec__3_spec__4_spec__7___boxed(lean_object* v_x_472_, lean_object* v_x_473_){
_start:
{
uint8_t v_res_474_; lean_object* v_r_475_; 
v_res_474_ = l_instBEqOption_beq___at___00Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2_spec__3_spec__4_spec__7(v_x_472_, v_x_473_);
lean_dec(v_x_473_);
lean_dec(v_x_472_);
v_r_475_ = lean_box(v_res_474_);
return v_r_475_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2_spec__3_spec__4___redArg(lean_object* v_a_476_, lean_object* v_x_477_){
_start:
{
if (lean_obj_tag(v_x_477_) == 0)
{
uint8_t v___x_478_; 
v___x_478_ = 0;
return v___x_478_;
}
else
{
lean_object* v_key_479_; lean_object* v_tail_480_; lean_object* v_fst_481_; lean_object* v_snd_482_; lean_object* v_fst_483_; lean_object* v_snd_484_; uint8_t v___x_488_; 
v_key_479_ = lean_ctor_get(v_x_477_, 0);
v_tail_480_ = lean_ctor_get(v_x_477_, 2);
v_fst_481_ = lean_ctor_get(v_key_479_, 0);
v_snd_482_ = lean_ctor_get(v_key_479_, 1);
v_fst_483_ = lean_ctor_get(v_a_476_, 0);
v_snd_484_ = lean_ctor_get(v_a_476_, 1);
v___x_488_ = lean_unbox(v_fst_483_);
if (v___x_488_ == 0)
{
uint8_t v___x_489_; 
v___x_489_ = lean_unbox(v_fst_481_);
if (v___x_489_ == 0)
{
goto v___jp_485_;
}
else
{
v_x_477_ = v_tail_480_;
goto _start;
}
}
else
{
uint8_t v___x_491_; 
v___x_491_ = lean_unbox(v_fst_481_);
if (v___x_491_ == 0)
{
v_x_477_ = v_tail_480_;
goto _start;
}
else
{
goto v___jp_485_;
}
}
v___jp_485_:
{
uint8_t v___x_486_; 
v___x_486_ = l_instBEqOption_beq___at___00Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2_spec__3_spec__4_spec__7(v_snd_482_, v_snd_484_);
if (v___x_486_ == 0)
{
v_x_477_ = v_tail_480_;
goto _start;
}
else
{
return v___x_486_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2_spec__3_spec__4___redArg___boxed(lean_object* v_a_493_, lean_object* v_x_494_){
_start:
{
uint8_t v_res_495_; lean_object* v_r_496_; 
v_res_495_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2_spec__3_spec__4___redArg(v_a_493_, v_x_494_);
lean_dec(v_x_494_);
lean_dec_ref(v_a_493_);
v_r_496_ = lean_box(v_res_495_);
return v_r_496_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2_spec__3_spec__6___redArg___lam__0(lean_object* v_a_499_, lean_object* v_x_500_){
_start:
{
lean_object* v___y_502_; 
if (lean_obj_tag(v_x_500_) == 0)
{
lean_object* v___x_505_; 
v___x_505_ = ((lean_object*)(l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2_spec__3_spec__6___redArg___lam__0___closed__0));
v___y_502_ = v___x_505_;
goto v___jp_501_;
}
else
{
lean_object* v_val_506_; 
v_val_506_ = lean_ctor_get(v_x_500_, 0);
lean_inc(v_val_506_);
lean_dec_ref_known(v_x_500_, 1);
v___y_502_ = v_val_506_;
goto v___jp_501_;
}
v___jp_501_:
{
lean_object* v___x_503_; lean_object* v___x_504_; 
v___x_503_ = lean_array_push(v___y_502_, v_a_499_);
v___x_504_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_504_, 0, v___x_503_);
return v___x_504_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2_spec__3_spec__6___redArg(lean_object* v_a_507_, lean_object* v_a_508_, lean_object* v_x_509_){
_start:
{
if (lean_obj_tag(v_x_509_) == 0)
{
lean_object* v___x_510_; lean_object* v___x_511_; lean_object* v_val_512_; lean_object* v___x_513_; 
v___x_510_ = lean_box(0);
v___x_511_ = l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2_spec__3_spec__6___redArg___lam__0(v_a_507_, v___x_510_);
v_val_512_ = lean_ctor_get(v___x_511_, 0);
lean_inc(v_val_512_);
lean_dec(v___x_511_);
v___x_513_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_513_, 0, v_a_508_);
lean_ctor_set(v___x_513_, 1, v_val_512_);
lean_ctor_set(v___x_513_, 2, v_x_509_);
return v___x_513_;
}
else
{
lean_object* v_key_514_; lean_object* v_value_515_; lean_object* v_tail_516_; lean_object* v___x_518_; uint8_t v_isShared_519_; uint8_t v_isSharedCheck_538_; 
v_key_514_ = lean_ctor_get(v_x_509_, 0);
v_value_515_ = lean_ctor_get(v_x_509_, 1);
v_tail_516_ = lean_ctor_get(v_x_509_, 2);
v_isSharedCheck_538_ = !lean_is_exclusive(v_x_509_);
if (v_isSharedCheck_538_ == 0)
{
v___x_518_ = v_x_509_;
v_isShared_519_ = v_isSharedCheck_538_;
goto v_resetjp_517_;
}
else
{
lean_inc(v_tail_516_);
lean_inc(v_value_515_);
lean_inc(v_key_514_);
lean_dec(v_x_509_);
v___x_518_ = lean_box(0);
v_isShared_519_ = v_isSharedCheck_538_;
goto v_resetjp_517_;
}
v_resetjp_517_:
{
lean_object* v_fst_525_; lean_object* v_snd_526_; lean_object* v_fst_527_; lean_object* v_snd_528_; uint8_t v___x_535_; 
v_fst_525_ = lean_ctor_get(v_key_514_, 0);
v_snd_526_ = lean_ctor_get(v_key_514_, 1);
v_fst_527_ = lean_ctor_get(v_a_508_, 0);
v_snd_528_ = lean_ctor_get(v_a_508_, 1);
v___x_535_ = lean_unbox(v_fst_527_);
if (v___x_535_ == 0)
{
uint8_t v___x_536_; 
v___x_536_ = lean_unbox(v_fst_525_);
if (v___x_536_ == 0)
{
goto v___jp_529_;
}
else
{
goto v___jp_520_;
}
}
else
{
uint8_t v___x_537_; 
v___x_537_ = lean_unbox(v_fst_525_);
if (v___x_537_ == 0)
{
goto v___jp_520_;
}
else
{
goto v___jp_529_;
}
}
v___jp_520_:
{
lean_object* v_tail_521_; lean_object* v___x_523_; 
v_tail_521_ = l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2_spec__3_spec__6___redArg(v_a_507_, v_a_508_, v_tail_516_);
if (v_isShared_519_ == 0)
{
lean_ctor_set(v___x_518_, 2, v_tail_521_);
v___x_523_ = v___x_518_;
goto v_reusejp_522_;
}
else
{
lean_object* v_reuseFailAlloc_524_; 
v_reuseFailAlloc_524_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_524_, 0, v_key_514_);
lean_ctor_set(v_reuseFailAlloc_524_, 1, v_value_515_);
lean_ctor_set(v_reuseFailAlloc_524_, 2, v_tail_521_);
v___x_523_ = v_reuseFailAlloc_524_;
goto v_reusejp_522_;
}
v_reusejp_522_:
{
return v___x_523_;
}
}
v___jp_529_:
{
uint8_t v___x_530_; 
v___x_530_ = l_instBEqOption_beq___at___00Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2_spec__3_spec__4_spec__7(v_snd_526_, v_snd_528_);
if (v___x_530_ == 0)
{
goto v___jp_520_;
}
else
{
lean_object* v___x_531_; lean_object* v___x_532_; lean_object* v_val_533_; lean_object* v___x_534_; 
lean_del_object(v___x_518_);
lean_dec(v_key_514_);
v___x_531_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_531_, 0, v_value_515_);
v___x_532_ = l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2_spec__3_spec__6___redArg___lam__0(v_a_507_, v___x_531_);
v_val_533_ = lean_ctor_get(v___x_532_, 0);
lean_inc(v_val_533_);
lean_dec(v___x_532_);
v___x_534_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_534_, 0, v_a_508_);
lean_ctor_set(v___x_534_, 1, v_val_533_);
lean_ctor_set(v___x_534_, 2, v_tail_516_);
return v___x_534_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2_spec__3___redArg(lean_object* v_a_539_, lean_object* v_m_540_, lean_object* v_a_541_){
_start:
{
lean_object* v___y_543_; lean_object* v___y_544_; size_t v___y_545_; lean_object* v___y_546_; lean_object* v_size_549_; lean_object* v_buckets_550_; lean_object* v___x_552_; uint8_t v_isShared_553_; uint8_t v_isSharedCheck_609_; 
v_size_549_ = lean_ctor_get(v_m_540_, 0);
v_buckets_550_ = lean_ctor_get(v_m_540_, 1);
v_isSharedCheck_609_ = !lean_is_exclusive(v_m_540_);
if (v_isSharedCheck_609_ == 0)
{
v___x_552_ = v_m_540_;
v_isShared_553_ = v_isSharedCheck_609_;
goto v_resetjp_551_;
}
else
{
lean_inc(v_buckets_550_);
lean_inc(v_size_549_);
lean_dec(v_m_540_);
v___x_552_ = lean_box(0);
v_isShared_553_ = v_isSharedCheck_609_;
goto v_resetjp_551_;
}
v___jp_542_:
{
lean_object* v___x_547_; lean_object* v___x_548_; 
v___x_547_ = lean_array_uset(v___y_543_, v___y_545_, v___y_544_);
v___x_548_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_548_, 0, v___y_546_);
lean_ctor_set(v___x_548_, 1, v___x_547_);
return v___x_548_;
}
v_resetjp_551_:
{
lean_object* v_fst_554_; lean_object* v_snd_555_; lean_object* v___x_556_; uint64_t v___y_558_; uint64_t v___y_559_; uint64_t v___y_600_; uint8_t v___x_606_; 
v_fst_554_ = lean_ctor_get(v_a_541_, 0);
v_snd_555_ = lean_ctor_get(v_a_541_, 1);
v___x_556_ = lean_array_get_size(v_buckets_550_);
v___x_606_ = lean_unbox(v_fst_554_);
if (v___x_606_ == 0)
{
uint64_t v___x_607_; 
v___x_607_ = 13ULL;
v___y_600_ = v___x_607_;
goto v___jp_599_;
}
else
{
uint64_t v___x_608_; 
v___x_608_ = 11ULL;
v___y_600_ = v___x_608_;
goto v___jp_599_;
}
v___jp_557_:
{
uint64_t v___x_560_; uint64_t v___x_561_; uint64_t v___x_562_; uint64_t v_fold_563_; uint64_t v___x_564_; uint64_t v___x_565_; uint64_t v___x_566_; size_t v___x_567_; size_t v___x_568_; size_t v___x_569_; size_t v___x_570_; size_t v___x_571_; lean_object* v_bkt_572_; uint8_t v___x_573_; 
v___x_560_ = lean_uint64_mix_hash(v___y_558_, v___y_559_);
v___x_561_ = 32ULL;
v___x_562_ = lean_uint64_shift_right(v___x_560_, v___x_561_);
v_fold_563_ = lean_uint64_xor(v___x_560_, v___x_562_);
v___x_564_ = 16ULL;
v___x_565_ = lean_uint64_shift_right(v_fold_563_, v___x_564_);
v___x_566_ = lean_uint64_xor(v_fold_563_, v___x_565_);
v___x_567_ = lean_uint64_to_usize(v___x_566_);
v___x_568_ = lean_usize_of_nat(v___x_556_);
v___x_569_ = ((size_t)1ULL);
v___x_570_ = lean_usize_sub(v___x_568_, v___x_569_);
v___x_571_ = lean_usize_land(v___x_567_, v___x_570_);
v_bkt_572_ = lean_array_uget_borrowed(v_buckets_550_, v___x_571_);
v___x_573_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2_spec__3_spec__4___redArg(v_a_541_, v_bkt_572_);
if (v___x_573_ == 0)
{
lean_object* v___x_574_; lean_object* v___x_575_; lean_object* v___x_576_; lean_object* v_size_x27_577_; lean_object* v___x_578_; lean_object* v_buckets_x27_579_; lean_object* v___x_580_; lean_object* v___x_581_; lean_object* v___x_582_; lean_object* v___x_583_; lean_object* v___x_584_; uint8_t v___x_585_; 
v___x_574_ = ((lean_object*)(l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2_spec__3_spec__6___redArg___lam__0___closed__0));
v___x_575_ = lean_array_push(v___x_574_, v_a_539_);
v___x_576_ = lean_unsigned_to_nat(1u);
v_size_x27_577_ = lean_nat_add(v_size_549_, v___x_576_);
lean_dec(v_size_549_);
lean_inc(v_bkt_572_);
v___x_578_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_578_, 0, v_a_541_);
lean_ctor_set(v___x_578_, 1, v___x_575_);
lean_ctor_set(v___x_578_, 2, v_bkt_572_);
v_buckets_x27_579_ = lean_array_uset(v_buckets_550_, v___x_571_, v___x_578_);
v___x_580_ = lean_unsigned_to_nat(4u);
v___x_581_ = lean_nat_mul(v_size_x27_577_, v___x_580_);
v___x_582_ = lean_unsigned_to_nat(3u);
v___x_583_ = lean_nat_div(v___x_581_, v___x_582_);
lean_dec(v___x_581_);
v___x_584_ = lean_array_get_size(v_buckets_x27_579_);
v___x_585_ = lean_nat_dec_le(v___x_583_, v___x_584_);
lean_dec(v___x_583_);
if (v___x_585_ == 0)
{
lean_object* v_val_586_; lean_object* v___x_588_; 
v_val_586_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2_spec__3_spec__5___redArg(v_buckets_x27_579_);
if (v_isShared_553_ == 0)
{
lean_ctor_set(v___x_552_, 1, v_val_586_);
lean_ctor_set(v___x_552_, 0, v_size_x27_577_);
v___x_588_ = v___x_552_;
goto v_reusejp_587_;
}
else
{
lean_object* v_reuseFailAlloc_589_; 
v_reuseFailAlloc_589_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_589_, 0, v_size_x27_577_);
lean_ctor_set(v_reuseFailAlloc_589_, 1, v_val_586_);
v___x_588_ = v_reuseFailAlloc_589_;
goto v_reusejp_587_;
}
v_reusejp_587_:
{
return v___x_588_;
}
}
else
{
lean_object* v___x_591_; 
if (v_isShared_553_ == 0)
{
lean_ctor_set(v___x_552_, 1, v_buckets_x27_579_);
lean_ctor_set(v___x_552_, 0, v_size_x27_577_);
v___x_591_ = v___x_552_;
goto v_reusejp_590_;
}
else
{
lean_object* v_reuseFailAlloc_592_; 
v_reuseFailAlloc_592_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_592_, 0, v_size_x27_577_);
lean_ctor_set(v_reuseFailAlloc_592_, 1, v_buckets_x27_579_);
v___x_591_ = v_reuseFailAlloc_592_;
goto v_reusejp_590_;
}
v_reusejp_590_:
{
return v___x_591_;
}
}
}
else
{
lean_object* v___x_593_; lean_object* v_buckets_x27_594_; lean_object* v_bkt_x27_595_; uint8_t v___x_596_; 
lean_inc(v_bkt_572_);
lean_del_object(v___x_552_);
v___x_593_ = lean_box(0);
v_buckets_x27_594_ = lean_array_uset(v_buckets_550_, v___x_571_, v___x_593_);
lean_inc_ref(v_a_541_);
v_bkt_x27_595_ = l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2_spec__3_spec__6___redArg(v_a_539_, v_a_541_, v_bkt_572_);
v___x_596_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2_spec__3_spec__4___redArg(v_a_541_, v_bkt_x27_595_);
lean_dec_ref(v_a_541_);
if (v___x_596_ == 0)
{
lean_object* v___x_597_; lean_object* v___x_598_; 
v___x_597_ = lean_unsigned_to_nat(1u);
v___x_598_ = lean_nat_sub(v_size_549_, v___x_597_);
lean_dec(v_size_549_);
v___y_543_ = v_buckets_x27_594_;
v___y_544_ = v_bkt_x27_595_;
v___y_545_ = v___x_571_;
v___y_546_ = v___x_598_;
goto v___jp_542_;
}
else
{
v___y_543_ = v_buckets_x27_594_;
v___y_544_ = v_bkt_x27_595_;
v___y_545_ = v___x_571_;
v___y_546_ = v_size_549_;
goto v___jp_542_;
}
}
}
v___jp_599_:
{
if (lean_obj_tag(v_snd_555_) == 0)
{
uint64_t v___x_601_; 
v___x_601_ = 11ULL;
v___y_558_ = v___y_600_;
v___y_559_ = v___x_601_;
goto v___jp_557_;
}
else
{
lean_object* v_val_602_; uint64_t v___x_603_; uint64_t v___x_604_; uint64_t v___x_605_; 
v_val_602_ = lean_ctor_get(v_snd_555_, 0);
v___x_603_ = l_String_instHashableRaw_hash(v_val_602_);
v___x_604_ = 13ULL;
v___x_605_ = lean_uint64_mix_hash(v___x_603_, v___x_604_);
v___y_558_ = v___y_600_;
v___y_559_ = v___x_605_;
goto v___jp_557_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2_spec__4___redArg(lean_object* v_key_610_, lean_object* v_as_611_, size_t v_sz_612_, size_t v_i_613_, lean_object* v_b_614_){
_start:
{
uint8_t v___x_615_; 
v___x_615_ = lean_usize_dec_lt(v_i_613_, v_sz_612_);
if (v___x_615_ == 0)
{
lean_dec_ref(v_key_610_);
return v_b_614_;
}
else
{
lean_object* v_a_616_; lean_object* v___x_617_; lean_object* v___x_618_; size_t v___x_619_; size_t v___x_620_; 
v_a_616_ = lean_array_uget_borrowed(v_as_611_, v_i_613_);
lean_inc_ref(v_key_610_);
lean_inc_n(v_a_616_, 2);
v___x_617_ = lean_apply_1(v_key_610_, v_a_616_);
v___x_618_ = l_Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2_spec__3___redArg(v_a_616_, v_b_614_, v___x_617_);
v___x_619_ = ((size_t)1ULL);
v___x_620_ = lean_usize_add(v_i_613_, v___x_619_);
v_i_613_ = v___x_620_;
v_b_614_ = v___x_618_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2_spec__4___redArg___boxed(lean_object* v_key_622_, lean_object* v_as_623_, lean_object* v_sz_624_, lean_object* v_i_625_, lean_object* v_b_626_){
_start:
{
size_t v_sz_boxed_627_; size_t v_i_boxed_628_; lean_object* v_res_629_; 
v_sz_boxed_627_ = lean_unbox_usize(v_sz_624_);
lean_dec(v_sz_624_);
v_i_boxed_628_ = lean_unbox_usize(v_i_625_);
lean_dec(v_i_625_);
v_res_629_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2_spec__4___redArg(v_key_622_, v_as_623_, v_sz_boxed_627_, v_i_boxed_628_, v_b_626_);
lean_dec_ref(v_as_623_);
return v_res_629_;
}
}
static lean_object* _init_l_Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2___redArg___closed__0(void){
_start:
{
lean_object* v___x_630_; lean_object* v___x_631_; lean_object* v___x_632_; 
v___x_630_ = lean_box(0);
v___x_631_ = lean_unsigned_to_nat(16u);
v___x_632_ = lean_mk_array(v___x_631_, v___x_630_);
return v___x_632_;
}
}
static lean_object* _init_l_Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2___redArg___closed__1(void){
_start:
{
lean_object* v___x_633_; lean_object* v___x_634_; lean_object* v_groups_635_; 
v___x_633_ = lean_obj_once(&l_Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2___redArg___closed__0, &l_Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2___redArg___closed__0_once, _init_l_Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2___redArg___closed__0);
v___x_634_ = lean_unsigned_to_nat(0u);
v_groups_635_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_groups_635_, 0, v___x_634_);
lean_ctor_set(v_groups_635_, 1, v___x_633_);
return v_groups_635_;
}
}
LEAN_EXPORT lean_object* l_Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2___redArg(lean_object* v_key_636_, lean_object* v_xs_637_){
_start:
{
lean_object* v_groups_638_; size_t v_sz_639_; size_t v___x_640_; lean_object* v___x_641_; 
v_groups_638_ = lean_obj_once(&l_Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2___redArg___closed__1, &l_Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2___redArg___closed__1_once, _init_l_Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2___redArg___closed__1);
v_sz_639_ = lean_array_size(v_xs_637_);
v___x_640_ = ((size_t)0ULL);
v___x_641_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2_spec__4___redArg(v_key_636_, v_xs_637_, v_sz_639_, v___x_640_, v_groups_638_);
return v___x_641_;
}
}
LEAN_EXPORT lean_object* l_Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2___redArg___boxed(lean_object* v_key_642_, lean_object* v_xs_643_){
_start:
{
lean_object* v_res_644_; 
v_res_644_ = l_Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2___redArg(v_key_642_, v_xs_643_);
lean_dec_ref(v_xs_643_);
return v_res_644_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions(lean_object* v_items_646_){
_start:
{
lean_object* v___y_648_; lean_object* v___y_653_; lean_object* v___y_654_; lean_object* v___y_655_; lean_object* v___y_656_; lean_object* v___y_659_; lean_object* v___y_660_; lean_object* v___y_661_; lean_object* v___y_662_; lean_object* v___y_665_; lean_object* v___f_672_; lean_object* v_partitions_673_; lean_object* v_size_674_; lean_object* v_buckets_675_; lean_object* v___x_676_; lean_object* v___x_677_; lean_object* v___x_678_; uint8_t v___x_679_; 
v___f_672_ = ((lean_object*)(l___private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions___closed__0));
v_partitions_673_ = l_Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2___redArg(v___f_672_, v_items_646_);
v_size_674_ = lean_ctor_get(v_partitions_673_, 0);
lean_inc(v_size_674_);
v_buckets_675_ = lean_ctor_get(v_partitions_673_, 1);
lean_inc_ref(v_buckets_675_);
lean_dec_ref(v_partitions_673_);
v___x_676_ = lean_mk_empty_array_with_capacity(v_size_674_);
lean_dec(v_size_674_);
v___x_677_ = lean_unsigned_to_nat(0u);
v___x_678_ = lean_array_get_size(v_buckets_675_);
v___x_679_ = lean_nat_dec_lt(v___x_677_, v___x_678_);
if (v___x_679_ == 0)
{
lean_dec_ref(v_buckets_675_);
v___y_665_ = v___x_676_;
goto v___jp_664_;
}
else
{
size_t v___x_680_; size_t v___x_681_; lean_object* v___x_682_; 
v___x_680_ = ((size_t)0ULL);
v___x_681_ = lean_usize_of_nat(v___x_678_);
v___x_682_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__4(v_buckets_675_, v___x_680_, v___x_681_, v___x_676_);
lean_dec_ref(v_buckets_675_);
v___y_665_ = v___x_682_;
goto v___jp_664_;
}
v___jp_647_:
{
size_t v_sz_649_; size_t v___x_650_; lean_object* v___x_651_; 
v_sz_649_ = lean_array_size(v___y_648_);
v___x_650_ = ((size_t)0ULL);
v___x_651_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__0(v_sz_649_, v___x_650_, v___y_648_);
return v___x_651_;
}
v___jp_652_:
{
lean_object* v___x_657_; 
v___x_657_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__1___redArg(v___y_655_, v___y_654_, v___y_653_, v___y_656_);
lean_dec(v___y_656_);
lean_dec(v___y_655_);
v___y_648_ = v___x_657_;
goto v___jp_647_;
}
v___jp_658_:
{
uint8_t v___x_663_; 
v___x_663_ = lean_nat_dec_le(v___y_662_, v___y_661_);
if (v___x_663_ == 0)
{
lean_dec(v___y_661_);
lean_inc(v___y_662_);
v___y_653_ = v___y_662_;
v___y_654_ = v___y_659_;
v___y_655_ = v___y_660_;
v___y_656_ = v___y_662_;
goto v___jp_652_;
}
else
{
v___y_653_ = v___y_662_;
v___y_654_ = v___y_659_;
v___y_655_ = v___y_660_;
v___y_656_ = v___y_661_;
goto v___jp_652_;
}
}
v___jp_664_:
{
lean_object* v___x_666_; lean_object* v___x_667_; uint8_t v___x_668_; 
v___x_666_ = lean_array_get_size(v___y_665_);
v___x_667_ = lean_unsigned_to_nat(0u);
v___x_668_ = lean_nat_dec_eq(v___x_666_, v___x_667_);
if (v___x_668_ == 0)
{
lean_object* v___x_669_; lean_object* v___x_670_; uint8_t v___x_671_; 
v___x_669_ = lean_unsigned_to_nat(1u);
v___x_670_ = lean_nat_sub(v___x_666_, v___x_669_);
v___x_671_ = lean_nat_dec_le(v___x_667_, v___x_670_);
if (v___x_671_ == 0)
{
lean_inc(v___x_670_);
v___y_659_ = v___y_665_;
v___y_660_ = v___x_666_;
v___y_661_ = v___x_670_;
v___y_662_ = v___x_670_;
goto v___jp_658_;
}
else
{
v___y_659_ = v___y_665_;
v___y_660_ = v___x_666_;
v___y_661_ = v___x_670_;
v___y_662_ = v___x_667_;
goto v___jp_658_;
}
}
else
{
v___y_648_ = v___y_665_;
goto v___jp_647_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions___boxed(lean_object* v_items_683_){
_start:
{
lean_object* v_res_684_; 
v_res_684_ = l___private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions(v_items_683_);
lean_dec_ref(v_items_683_);
return v_res_684_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__1(lean_object* v_n_685_, lean_object* v_as_686_, lean_object* v_lo_687_, lean_object* v_hi_688_, lean_object* v_w_689_, lean_object* v_hlo_690_, lean_object* v_hhi_691_){
_start:
{
lean_object* v___x_692_; 
v___x_692_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__1___redArg(v_n_685_, v_as_686_, v_lo_687_, v_hi_688_);
return v___x_692_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__1___boxed(lean_object* v_n_693_, lean_object* v_as_694_, lean_object* v_lo_695_, lean_object* v_hi_696_, lean_object* v_w_697_, lean_object* v_hlo_698_, lean_object* v_hhi_699_){
_start:
{
lean_object* v_res_700_; 
v_res_700_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__1(v_n_693_, v_as_694_, v_lo_695_, v_hi_696_, v_w_697_, v_hlo_698_, v_hhi_699_);
lean_dec(v_hi_696_);
lean_dec(v_n_693_);
return v_res_700_;
}
}
LEAN_EXPORT lean_object* l_Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2(lean_object* v_00_u03b2_701_, lean_object* v_key_702_, lean_object* v_xs_703_){
_start:
{
lean_object* v___x_704_; 
v___x_704_ = l_Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2___redArg(v_key_702_, v_xs_703_);
return v___x_704_;
}
}
LEAN_EXPORT lean_object* l_Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2___boxed(lean_object* v_00_u03b2_705_, lean_object* v_key_706_, lean_object* v_xs_707_){
_start:
{
lean_object* v_res_708_; 
v_res_708_ = l_Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2(v_00_u03b2_705_, v_key_706_, v_xs_707_);
lean_dec_ref(v_xs_707_);
return v_res_708_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__1_spec__1(lean_object* v_n_709_, lean_object* v_lo_710_, lean_object* v_hi_711_, lean_object* v_hhi_712_, lean_object* v_pivot_713_, lean_object* v_as_714_, lean_object* v_i_715_, lean_object* v_k_716_, lean_object* v_ilo_717_, lean_object* v_ik_718_, lean_object* v_w_719_){
_start:
{
lean_object* v___x_720_; 
v___x_720_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__1_spec__1___redArg(v_hi_711_, v_pivot_713_, v_as_714_, v_i_715_, v_k_716_);
return v___x_720_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__1_spec__1___boxed(lean_object* v_n_721_, lean_object* v_lo_722_, lean_object* v_hi_723_, lean_object* v_hhi_724_, lean_object* v_pivot_725_, lean_object* v_as_726_, lean_object* v_i_727_, lean_object* v_k_728_, lean_object* v_ilo_729_, lean_object* v_ik_730_, lean_object* v_w_731_){
_start:
{
lean_object* v_res_732_; 
v_res_732_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__1_spec__1(v_n_721_, v_lo_722_, v_hi_723_, v_hhi_724_, v_pivot_725_, v_as_726_, v_i_727_, v_k_728_, v_ilo_729_, v_ik_730_, v_w_731_);
lean_dec_ref(v_pivot_725_);
lean_dec(v_hi_723_);
lean_dec(v_lo_722_);
lean_dec(v_n_721_);
return v_res_732_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2_spec__3(lean_object* v_00_u03b2_733_, lean_object* v_a_734_, lean_object* v_m_735_, lean_object* v_a_736_){
_start:
{
lean_object* v___x_737_; 
v___x_737_ = l_Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2_spec__3___redArg(v_a_734_, v_m_735_, v_a_736_);
return v___x_737_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2_spec__4(lean_object* v_00_u03b2_738_, lean_object* v_key_739_, lean_object* v_as_740_, size_t v_sz_741_, size_t v_i_742_, lean_object* v_b_743_){
_start:
{
lean_object* v___x_744_; 
v___x_744_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2_spec__4___redArg(v_key_739_, v_as_740_, v_sz_741_, v_i_742_, v_b_743_);
return v___x_744_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2_spec__4___boxed(lean_object* v_00_u03b2_745_, lean_object* v_key_746_, lean_object* v_as_747_, lean_object* v_sz_748_, lean_object* v_i_749_, lean_object* v_b_750_){
_start:
{
size_t v_sz_boxed_751_; size_t v_i_boxed_752_; lean_object* v_res_753_; 
v_sz_boxed_751_ = lean_unbox_usize(v_sz_748_);
lean_dec(v_sz_748_);
v_i_boxed_752_ = lean_unbox_usize(v_i_749_);
lean_dec(v_i_749_);
v_res_753_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2_spec__4(v_00_u03b2_745_, v_key_746_, v_as_747_, v_sz_boxed_751_, v_i_boxed_752_, v_b_750_);
lean_dec_ref(v_as_747_);
return v_res_753_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2_spec__3_spec__4(lean_object* v_00_u03b2_754_, lean_object* v_a_755_, lean_object* v_x_756_){
_start:
{
uint8_t v___x_757_; 
v___x_757_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2_spec__3_spec__4___redArg(v_a_755_, v_x_756_);
return v___x_757_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2_spec__3_spec__4___boxed(lean_object* v_00_u03b2_758_, lean_object* v_a_759_, lean_object* v_x_760_){
_start:
{
uint8_t v_res_761_; lean_object* v_r_762_; 
v_res_761_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2_spec__3_spec__4(v_00_u03b2_758_, v_a_759_, v_x_760_);
lean_dec(v_x_760_);
lean_dec_ref(v_a_759_);
v_r_762_ = lean_box(v_res_761_);
return v_r_762_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2_spec__3_spec__5(lean_object* v_00_u03b2_763_, lean_object* v_data_764_){
_start:
{
lean_object* v___x_765_; 
v___x_765_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2_spec__3_spec__5___redArg(v_data_764_);
return v___x_765_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2_spec__3_spec__6(lean_object* v_00_u03b2_766_, lean_object* v_a_767_, lean_object* v_a_768_, lean_object* v_x_769_){
_start:
{
lean_object* v___x_770_; 
v___x_770_ = l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2_spec__3_spec__6___redArg(v_a_767_, v_a_768_, v_x_769_);
return v___x_770_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2_spec__3_spec__5_spec__9(lean_object* v_00_u03b2_771_, lean_object* v_i_772_, lean_object* v_source_773_, lean_object* v_target_774_){
_start:
{
lean_object* v___x_775_; 
v___x_775_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2_spec__3_spec__5_spec__9___redArg(v_i_772_, v_source_773_, v_target_774_);
return v___x_775_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2_spec__3_spec__5_spec__9_spec__11(lean_object* v_00_u03b2_776_, lean_object* v_x_777_, lean_object* v_x_778_){
_start:
{
lean_object* v___x_779_; 
v___x_779_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2_spec__3_spec__5_spec__9_spec__11___redArg(v_x_777_, v_x_778_);
return v___x_779_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_Completion_findPrioritizedCompletionPartitionsAt(lean_object* v_fileMap_780_, lean_object* v_hoverPos_781_, lean_object* v_cmdStx_782_, lean_object* v_infoTree_783_){
_start:
{
lean_object* v___x_784_; lean_object* v_fst_785_; lean_object* v_snd_786_; lean_object* v___x_788_; uint8_t v_isShared_789_; uint8_t v_isSharedCheck_796_; 
v___x_784_ = l_Lean_Server_Completion_findCompletionInfosAt(v_fileMap_780_, v_hoverPos_781_, v_cmdStx_782_, v_infoTree_783_);
v_fst_785_ = lean_ctor_get(v___x_784_, 0);
v_snd_786_ = lean_ctor_get(v___x_784_, 1);
v_isSharedCheck_796_ = !lean_is_exclusive(v___x_784_);
if (v_isSharedCheck_796_ == 0)
{
v___x_788_ = v___x_784_;
v_isShared_789_ = v_isSharedCheck_796_;
goto v_resetjp_787_;
}
else
{
lean_inc(v_snd_786_);
lean_inc(v_fst_785_);
lean_dec(v___x_784_);
v___x_788_ = lean_box(0);
v_isShared_789_ = v_isSharedCheck_796_;
goto v_resetjp_787_;
}
v_resetjp_787_:
{
lean_object* v___x_790_; lean_object* v___x_791_; lean_object* v_partitions_792_; lean_object* v___x_794_; 
v___x_790_ = lean_unsigned_to_nat(0u);
v___x_791_ = l_Array_zipIdx___redArg(v_fst_785_, v___x_790_);
v_partitions_792_ = l___private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions(v___x_791_);
lean_dec_ref(v___x_791_);
if (v_isShared_789_ == 0)
{
lean_ctor_set(v___x_788_, 0, v_partitions_792_);
v___x_794_ = v___x_788_;
goto v_reusejp_793_;
}
else
{
lean_object* v_reuseFailAlloc_795_; 
v_reuseFailAlloc_795_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_795_, 0, v_partitions_792_);
lean_ctor_set(v_reuseFailAlloc_795_, 1, v_snd_786_);
v___x_794_ = v_reuseFailAlloc_795_;
goto v_reusejp_793_;
}
v_reusejp_793_:
{
return v___x_794_;
}
}
}
}
lean_object* runtime_initialize_Lean_Server_Completion_SyntheticCompletion(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Server_Completion_CompletionInfoSelection(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Server_Completion_SyntheticCompletion(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Server_Completion_CompletionInfoSelection(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Server_Completion_SyntheticCompletion(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Server_Completion_CompletionInfoSelection(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Server_Completion_SyntheticCompletion(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Server_Completion_CompletionInfoSelection(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Server_Completion_CompletionInfoSelection(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Server_Completion_CompletionInfoSelection(builtin);
}
#ifdef __cplusplus
}
#endif
